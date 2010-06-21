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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005afa0 };

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
0x920b,	// (0x000641ab) Screen

0x9217,	// (0x000641b7) application_window_ParamLimits

0x9217,	// (0x000641b7) application_window

0x808a,	// (0x0006302a) screen_g1

0x924f,	// (0x000641ef) area_bottom_pane_ParamLimits

0x924f,	// (0x000641ef) area_bottom_pane

0xf057,	// (0x00069ff7) area_top_pane_ParamLimits

0xf057,	// (0x00069ff7) area_top_pane

0xf0f5,	// (0x0006a095) main_pane_ParamLimits

0xf0f5,	// (0x0006a095) main_pane

0x8094,	// (0x00063034) misc_graphics

0xb062,	// (0x00066002) battery_pane_ParamLimits

0xb062,	// (0x00066002) battery_pane

0x2e66,	// (0x0005de06) bg_status_flat_pane_g8

0x2e6e,	// (0x0005de0e) bg_status_flat_pane_g9

0x2248,	// (0x0005d1e8) context_pane_ParamLimits

0x2248,	// (0x0005d1e8) context_pane

0xbef8,	// (0x00066e98) navi_pane_ParamLimits

0xbef8,	// (0x00066e98) navi_pane

0xbf76,	// (0x00066f16) signal_pane_ParamLimits

0xbf76,	// (0x00066f16) signal_pane

0x0008,

0xf863,	// (0x0006a803) bg_status_flat_pane_g

0xc006,	// (0x00066fa6) status_pane_g1_ParamLimits

0xc006,	// (0x00066fa6) status_pane_g1

0xc01c,	// (0x00066fbc) status_pane_g2_ParamLimits

0xc01c,	// (0x00066fbc) status_pane_g2

0x246f,	// (0x0005d40f) status_pane_g3_ParamLimits

0x246f,	// (0x0005d40f) status_pane_g3

0x0004,

0xf796,	// (0x0006a736) status_pane_g_ParamLimits

0xf796,	// (0x0006a736) status_pane_g

0xc028,	// (0x00066fc8) title_pane_ParamLimits

0xc028,	// (0x00066fc8) title_pane

0xc08b,	// (0x0006702b) uni_indicator_pane_ParamLimits

0xc08b,	// (0x0006702b) uni_indicator_pane

0x20b0,	// (0x0005d050) bg_list_pane_ParamLimits

0x20b0,	// (0x0005d050) bg_list_pane

0xa82a,	// (0x000657ca) find_pane

0x2683,	// (0x0005d623) listscroll_app_pane_ParamLimits

0x2683,	// (0x0005d623) listscroll_app_pane

0x20dc,	// (0x0005d07c) listscroll_form_pane

0xa832,	// (0x000657d2) listscroll_gen_pane_ParamLimits

0xa832,	// (0x000657d2) listscroll_gen_pane

0x031b,	// (0x0005b2bb) listscroll_set_pane

0x39ca,	// (0x0005e96a) main_idle_act_pane

0xe0de,	// (0x0006907e) main_idle_trad_pane

0xe0de,	// (0x0006907e) main_list_empty_pane

0x20d0,	// (0x0005d070) main_midp_pane

0x20f6,	// (0x0005d096) main_pane_g1_ParamLimits

0x20f6,	// (0x0005d096) main_pane_g1

0xa846,	// (0x000657e6) popup_ai_message_window_ParamLimits

0xa846,	// (0x000657e6) popup_ai_message_window

0xa8f7,	// (0x00065897) popup_fep_china_uni_window_ParamLimits

0xa8f7,	// (0x00065897) popup_fep_china_uni_window

0xa951,	// (0x000658f1) popup_fep_japan_candidate_window_ParamLimits

0xa951,	// (0x000658f1) popup_fep_japan_candidate_window

0xa96f,	// (0x0006590f) popup_fep_japan_predictive_window_ParamLimits

0xa96f,	// (0x0006590f) popup_fep_japan_predictive_window

0xa981,	// (0x00065921) popup_find_window

0xa99e,	// (0x0006593e) popup_grid_graphic_window_ParamLimits

0xa99e,	// (0x0006593e) popup_grid_graphic_window

0xaa3c,	// (0x000659dc) popup_large_graphic_colour_window

0xaa62,	// (0x00065a02) popup_menu_window_ParamLimits

0xaa62,	// (0x00065a02) popup_menu_window

0xac34,	// (0x00065bd4) popup_note_image_window

0xabfa,	// (0x00065b9a) popup_note_wait_window_ParamLimits

0xabfa,	// (0x00065b9a) popup_note_wait_window

0xac4c,	// (0x00065bec) popup_note_window_ParamLimits

0xac4c,	// (0x00065bec) popup_note_window

0xacfb,	// (0x00065c9b) popup_query_code_window_ParamLimits

0xacfb,	// (0x00065c9b) popup_query_code_window

0xad35,	// (0x00065cd5) popup_query_data_code_window_ParamLimits

0xad35,	// (0x00065cd5) popup_query_data_code_window

0xad52,	// (0x00065cf2) popup_query_data_window_ParamLimits

0xad52,	// (0x00065cf2) popup_query_data_window

0xadd4,	// (0x00065d74) popup_query_sat_info_window_ParamLimits

0xadd4,	// (0x00065d74) popup_query_sat_info_window

0xae6b,	// (0x00065e0b) popup_snote_single_graphic_window_ParamLimits

0xae6b,	// (0x00065e0b) popup_snote_single_graphic_window

0xae6b,	// (0x00065e0b) popup_snote_single_text_window_ParamLimits

0xae6b,	// (0x00065e0b) popup_snote_single_text_window

0x0787,	// (0x0005b727) popup_sub_window_general

0xafc8,	// (0x00065f68) popup_window_general_ParamLimits

0xafc8,	// (0x00065f68) popup_window_general

0x2104,	// (0x0005d0a4) power_save_pane

0xa688,	// (0x00065628) control_pane_g1_ParamLimits

0xa688,	// (0x00065628) control_pane_g1

0xa6b1,	// (0x00065651) control_pane_g2_ParamLimits

0xa6b1,	// (0x00065651) control_pane_g2

0x2073,	// (0x0005d013) control_pane_g3_ParamLimits

0x2073,	// (0x0005d013) control_pane_g3

0x0007,

0xf77e,	// (0x0006a71e) control_pane_g_ParamLimits

0xf77e,	// (0x0006a71e) control_pane_g

0xa719,	// (0x000656b9) control_pane_t1_ParamLimits

0xa719,	// (0x000656b9) control_pane_t1

0xa77f,	// (0x0006571f) control_pane_t2_ParamLimits

0xa77f,	// (0x0006571f) control_pane_t2

0x0002,

0xf78f,	// (0x0006a72f) control_pane_t_ParamLimits

0xf78f,	// (0x0006a72f) control_pane_t

0xa5e1,	// (0x00065581) navi_navi_volume_pane_cp1

0xa5e9,	// (0x00065589) status_small_icon_pane

0x1fa8,	// (0x0005cf48) status_small_pane_g1_ParamLimits

0x1fa8,	// (0x0005cf48) status_small_pane_g1

0xa5f1,	// (0x00065591) status_small_pane_g2_ParamLimits

0xa5f1,	// (0x00065591) status_small_pane_g2

0xa5fd,	// (0x0006559d) status_small_pane_g3_ParamLimits

0xa5fd,	// (0x0006559d) status_small_pane_g3

0xa609,	// (0x000655a9) status_small_pane_g4_ParamLimits

0xa609,	// (0x000655a9) status_small_pane_g4

0xa615,	// (0x000655b5) status_small_pane_g5_ParamLimits

0xa615,	// (0x000655b5) status_small_pane_g5

0xa623,	// (0x000655c3) status_small_pane_g6_ParamLimits

0xa623,	// (0x000655c3) status_small_pane_g6

0x0007,

0xf76d,	// (0x0006a70d) status_small_pane_g_ParamLimits

0xf76d,	// (0x0006a70d) status_small_pane_g

0xa652,	// (0x000655f2) status_small_pane_t1

0xa674,	// (0x00065614) status_small_wait_pane_ParamLimits

0xa674,	// (0x00065614) status_small_wait_pane

0xa2bd,	// (0x0006525d) aid_levels_signal_ParamLimits

0xa2bd,	// (0x0006525d) aid_levels_signal

0xa2d5,	// (0x00065275) signal_pane_g1_ParamLimits

0xa2d5,	// (0x00065275) signal_pane_g1

0xa2f0,	// (0x00065290) signal_pane_g2_ParamLimits

0xa2f0,	// (0x00065290) signal_pane_g2

0x0003,

0xf6fe,	// (0x0006a69e) signal_pane_g_ParamLimits

0xf6fe,	// (0x0006a69e) signal_pane_g

0xbc9b,	// (0x00066c3b) context_pane_g1

0x944d,	// (0x000643ed) title_pane_g1

0x9484,	// (0x00064424) title_pane_t1

0x80aa,	// (0x0006304a) title_pane_t2

0x80d0,	// (0x00063070) title_pane_t3

0x0002,

0xf557,	// (0x0006a4f7) title_pane_t

0xc0b3,	// (0x00067053) aid_levels_battery_ParamLimits

0xc0b3,	// (0x00067053) aid_levels_battery

0xc0cf,	// (0x0006706f) battery_pane_g1_ParamLimits

0xc0cf,	// (0x0006706f) battery_pane_g1

0xc0ec,	// (0x0006708c) battery_pane_g2_ParamLimits

0xc0ec,	// (0x0006708c) battery_pane_g2

0x0001,

0xf7a1,	// (0x0006a741) battery_pane_g_ParamLimits

0xf7a1,	// (0x0006a741) battery_pane_g

0xc6b2,	// (0x00067652) uni_indicator_pane_g1

0xc6c8,	// (0x00067668) uni_indicator_pane_g2

0xc6de,	// (0x0006767e) uni_indicator_pane_g3

0x0005,

0xf90b,	// (0x0006a8ab) uni_indicator_pane_g

0xdf7e,	// (0x00068f1e) navi_icon_pane_ParamLimits

0xdf7e,	// (0x00068f1e) navi_icon_pane

0xded3,	// (0x00068e73) navi_midp_pane

0xdf9a,	// (0x00068f3a) navi_navi_pane

0xdfa4,	// (0x00068f44) navi_text_pane_ParamLimits

0xdfa4,	// (0x00068f44) navi_text_pane

0x808a,	// (0x0006302a) status_small_wait_pane_g1

0x8321,	// (0x000632c1) status_small_wait_pane_g2

0x0001,

0xf906,	// (0x0006a8a6) status_small_wait_pane_g

0xc60b,	// (0x000675ab) navi_navi_icon_text_pane

0x34b9,	// (0x0005e459) navi_navi_pane_g1_ParamLimits

0x34b9,	// (0x0005e459) navi_navi_pane_g1

0x34cb,	// (0x0005e46b) navi_navi_pane_g2_ParamLimits

0x34cb,	// (0x0005e46b) navi_navi_pane_g2

0x0001,

0xf8d4,	// (0x0006a874) navi_navi_pane_g_ParamLimits

0xf8d4,	// (0x0006a874) navi_navi_pane_g

0x34dd,	// (0x0005e47d) navi_navi_tabs_pane

0x34e6,	// (0x0005e486) navi_navi_text_pane

0xc60b,	// (0x000675ab) navi_navi_volume_pane

0x348d,	// (0x0005e42d) navi_text_pane_t1

0x3481,	// (0x0005e421) navi_icon_pane_g1

0x33d4,	// (0x0005e374) navi_navi_text_pane_t1

0xb17f,	// (0x0006611f) navi_navi_volume_pane_g1

0x0b9f,	// (0x0005bb3f) volume_small_pane

0x333a,	// (0x0005e2da) navi_navi_icon_text_pane_g1

0xc563,	// (0x00067503) navi_navi_icon_text_pane_t1

0xdf9a,	// (0x00068f3a) navi_tabs_2_long_pane

0xdf9a,	// (0x00068f3a) navi_tabs_2_pane

0xdf9a,	// (0x00068f3a) navi_tabs_3_long_pane

0xdf9a,	// (0x00068f3a) navi_tabs_3_pane

0xdf9a,	// (0x00068f3a) navi_tabs_4_pane

0x0b77,	// (0x0005bb17) tabs_2_active_pane_ParamLimits

0x0b77,	// (0x0005bb17) tabs_2_active_pane

0x0b87,	// (0x0005bb27) tabs_2_passive_pane_ParamLimits

0x0b87,	// (0x0005bb27) tabs_2_passive_pane

0x0b45,	// (0x0005bae5) tabs_3_active_pane_ParamLimits

0x0b45,	// (0x0005bae5) tabs_3_active_pane

0x0b55,	// (0x0005baf5) tabs_3_passive_pane_ParamLimits

0x0b55,	// (0x0005baf5) tabs_3_passive_pane

0x0b66,	// (0x0005bb06) tabs_3_passive_pane_cp_ParamLimits

0x0b66,	// (0x0005bb06) tabs_3_passive_pane_cp

0x0b01,	// (0x0005baa1) tabs_4_active_pane_ParamLimits

0x0b01,	// (0x0005baa1) tabs_4_active_pane

0x0b12,	// (0x0005bab2) tabs_4_passive_pane_ParamLimits

0x0b12,	// (0x0005bab2) tabs_4_passive_pane

0x0b23,	// (0x0005bac3) tabs_4_passive_pane_cp_ParamLimits

0x0b23,	// (0x0005bac3) tabs_4_passive_pane_cp

0x0b34,	// (0x0005bad4) tabs_4_passive_pane_cp2_ParamLimits

0x0b34,	// (0x0005bad4) tabs_4_passive_pane_cp2

0x0add,	// (0x0005ba7d) tabs_2_long_active_pane_ParamLimits

0x0add,	// (0x0005ba7d) tabs_2_long_active_pane

0x0aef,	// (0x0005ba8f) tabs_2_long_passive_pane_ParamLimits

0x0aef,	// (0x0005ba8f) tabs_2_long_passive_pane

0x0a98,	// (0x0005ba38) tabs_3_long_active_pane_ParamLimits

0x0a98,	// (0x0005ba38) tabs_3_long_active_pane

0x0ab1,	// (0x0005ba51) tabs_3_long_passive_pane_ParamLimits

0x0ab1,	// (0x0005ba51) tabs_3_long_passive_pane

0x0ac4,	// (0x0005ba64) tabs_3_long_passive_pane_cp_ParamLimits

0x0ac4,	// (0x0005ba64) tabs_3_long_passive_pane_cp

0x0a3e,	// (0x0005b9de) volume_small_pane_g1

0x0a47,	// (0x0005b9e7) volume_small_pane_g2

0x0a50,	// (0x0005b9f0) volume_small_pane_g3

0x0a59,	// (0x0005b9f9) volume_small_pane_g4

0x0a62,	// (0x0005ba02) volume_small_pane_g5

0x0a6b,	// (0x0005ba0b) volume_small_pane_g6

0x0a74,	// (0x0005ba14) volume_small_pane_g7

0x0a7d,	// (0x0005ba1d) volume_small_pane_g8

0x0a86,	// (0x0005ba26) volume_small_pane_g9

0x0a8f,	// (0x0005ba2f) volume_small_pane_g10

0x0009,

0xf8a0,	// (0x0006a840) volume_small_pane_g

0x820c,	// (0x000631ac) bg_active_tab_pane_cp2_ParamLimits

0x820c,	// (0x000631ac) bg_active_tab_pane_cp2

0x9510,	// (0x000644b0) tabs_3_active_pane_g1

0x9518,	// (0x000644b8) tabs_3_active_pane_t1

0x820c,	// (0x000631ac) bg_passive_tab_pane_cp2_ParamLimits

0x820c,	// (0x000631ac) bg_passive_tab_pane_cp2

0x9510,	// (0x000644b0) tabs_3_passive_pane_g1

0x9518,	// (0x000644b8) tabs_3_passive_pane_t1

0x820c,	// (0x000631ac) bg_active_tab_pane_cp3_ParamLimits

0x820c,	// (0x000631ac) bg_active_tab_pane_cp3

0x952a,	// (0x000644ca) tabs_4_active_pane_g1

0x9532,	// (0x000644d2) tabs_4_active_pane_t1

0x820c,	// (0x000631ac) bg_passive_tab_pane_cp3_ParamLimits

0x820c,	// (0x000631ac) bg_passive_tab_pane_cp3

0x952a,	// (0x000644ca) tabs_4_1_passive_pane_g1

0x9532,	// (0x000644d2) tabs_4_1_passive_pane_t1

0x20d0,	// (0x0005d070) list_highlight_pane_cp2

0xc7e4,	// (0x00067784) list_set_pane_ParamLimits

0xc7e4,	// (0x00067784) list_set_pane

0xc87e,	// (0x0006781e) main_pane_set_t1_ParamLimits

0xc87e,	// (0x0006781e) main_pane_set_t1

0xc89e,	// (0x0006783e) main_pane_set_t2_ParamLimits

0xc89e,	// (0x0006783e) main_pane_set_t2

0xc8b2,	// (0x00067852) main_pane_set_t3_ParamLimits

0xc8b2,	// (0x00067852) main_pane_set_t3

0xc8c4,	// (0x00067864) main_pane_set_t4_ParamLimits

0xc8c4,	// (0x00067864) main_pane_set_t4

0x0003,

0xf970,	// (0x0006a910) main_pane_set_t_ParamLimits

0xf970,	// (0x0006a910) main_pane_set_t

0xc8d6,	// (0x00067876) setting_code_pane

0xc8e0,	// (0x00067880) setting_slider_graphic_pane

0xc8e0,	// (0x00067880) setting_slider_pane

0xc8e0,	// (0x00067880) setting_text_pane

0xc8e0,	// (0x00067880) setting_volume_pane

0x9544,	// (0x000644e4) volume_set_pane

0x80e2,	// (0x00063082) bg_set_opt_pane_cp

0x954c,	// (0x000644ec) setting_slider_pane_t1

0x9565,	// (0x00064505) setting_slider_pane_t2

0x957f,	// (0x0006451f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0006a4fe) setting_slider_pane_t

0x9597,	// (0x00064537) slider_set_pane

0x8094,	// (0x00063034) bg_set_opt_pane_cp2

0x80f0,	// (0x00063090) setting_slider_graphic_pane_g1

0x95ad,	// (0x0006454d) setting_slider_graphic_pane_t1

0x95bd,	// (0x0006455d) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0006a505) setting_slider_graphic_pane_t

0x95cd,	// (0x0006456d) slider_set_pane_cp

0x8094,	// (0x00063034) input_focus_pane_cp1

0x39b1,	// (0x0005e951) list_set_text_pane

0x808a,	// (0x0006302a) setting_text_pane_g1

0x8094,	// (0x00063034) input_focus_pane_cp2

0x808a,	// (0x0006302a) setting_code_pane_g1

0x80f9,	// (0x00063099) setting_code_pane_t1

0xdd07,	// (0x00068ca7) set_text_pane_t1_ParamLimits

0xdd07,	// (0x00068ca7) set_text_pane_t1

0x84fa,	// (0x0006349a) set_opt_bg_pane_g1

0x8502,	// (0x000634a2) set_opt_bg_pane_g2

0xc799,	// (0x00067739) set_opt_bg_pane_g3

0x8512,	// (0x000634b2) set_opt_bg_pane_g4

0x851a,	// (0x000634ba) set_opt_bg_pane_g5

0x8522,	// (0x000634c2) set_opt_bg_pane_g6

0xc7a3,	// (0x00067743) set_opt_bg_pane_g7

0xc7ab,	// (0x0006774b) set_opt_bg_pane_g8

0xc7b5,	// (0x00067755) set_opt_bg_pane_g9

0x0008,

0xf95d,	// (0x0006a8fd) set_opt_bg_pane_g

0xc78c,	// (0x0006772c) slider_set_pane_g1

0x0c1e,	// (0x0005bbbe) slider_set_pane_g2

0x0006,

0xf94e,	// (0x0006a8ee) slider_set_pane_g

0xb187,	// (0x00066127) volume_set_pane_g1

0xb18f,	// (0x0006612f) volume_set_pane_g2

0xb197,	// (0x00066137) volume_set_pane_g3

0xb19f,	// (0x0006613f) volume_set_pane_g4

0xb1a7,	// (0x00066147) volume_set_pane_g5

0xb1af,	// (0x0006614f) volume_set_pane_g6

0xb1b7,	// (0x00066157) volume_set_pane_g7

0xb1bf,	// (0x0006615f) volume_set_pane_g8

0xb1c7,	// (0x00066167) volume_set_pane_g9

0xb1cf,	// (0x0006616f) volume_set_pane_g10

0x0009,

0xf926,	// (0x0006a8c6) volume_set_pane_g

0x95d5,	// (0x00064575) indicator_pane_ParamLimits

0x95d5,	// (0x00064575) indicator_pane

0x95fd,	// (0x0006459d) main_idle_pane_g2_ParamLimits

0x95fd,	// (0x0006459d) main_idle_pane_g2

0x9635,	// (0x000645d5) main_pane_idle_g1_ParamLimits

0x9635,	// (0x000645d5) main_pane_idle_g1

0x8107,	// (0x000630a7) popup_clock_digital_analogue_window_ParamLimits

0x8107,	// (0x000630a7) popup_clock_digital_analogue_window

0x965c,	// (0x000645fc) soft_indicator_pane_ParamLimits

0x965c,	// (0x000645fc) soft_indicator_pane

0x9680,	// (0x00064620) wallpaper_pane_ParamLimits

0x9680,	// (0x00064620) wallpaper_pane

0x808a,	// (0x0006302a) wallpaper_pane_g1

0x9692,	// (0x00064632) indicator_pane_g1_ParamLimits

0x9692,	// (0x00064632) indicator_pane_g1

0x3e16,	// (0x0005edb6) navi_navi_icon_text_pane_srt_g1

0x8135,	// (0x000630d5) soft_indicator_pane_t1

0x814f,	// (0x000630ef) aid_ps_area_pane

0x96a8,	// (0x00064648) aid_ps_clock_pane

0x8160,	// (0x00063100) aid_ps_indicator_pane

0x816c,	// (0x0006310c) indicator_ps_pane_ParamLimits

0x816c,	// (0x0006310c) indicator_ps_pane

0x817b,	// (0x0006311b) power_save_pane_g1_ParamLimits

0x817b,	// (0x0006311b) power_save_pane_g1

0x8187,	// (0x00063127) power_save_pane_g2_ParamLimits

0x8187,	// (0x00063127) power_save_pane_g2

0xdce7,	// (0x00068c87) aid_navinavi_width_pane

0x814f,	// (0x000630ef) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006a50a) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006a50a) power_save_pane_g

0x8195,	// (0x00063135) power_save_pane_t1_ParamLimits

0x8195,	// (0x00063135) power_save_pane_t1

0x96a8,	// (0x00064648) aid_ps_clock_pane_ParamLimits

0x8160,	// (0x00063100) aid_ps_indicator_pane_ParamLimits

0x81a7,	// (0x00063147) power_save_pane_t4_ParamLimits

0x81a7,	// (0x00063147) power_save_pane_t4

0x0001,

0xf56f,	// (0x0006a50f) power_save_pane_t_ParamLimits

0xf56f,	// (0x0006a50f) power_save_pane_t

0x81d1,	// (0x00063171) power_save_t3_ParamLimits

0x81d1,	// (0x00063171) power_save_t3

0x81bc,	// (0x0006315c) power_save_t2_ParamLimits

0x81bc,	// (0x0006315c) power_save_t2

0x81e6,	// (0x00063186) indicator_ps_pane_g1

0x96b6,	// (0x00064656) ai_gene_pane_ParamLimits

0x96b6,	// (0x00064656) ai_gene_pane

0x96cd,	// (0x0006466d) ai_links_pane_ParamLimits

0x96cd,	// (0x0006466d) ai_links_pane

0x96e5,	// (0x00064685) indicator_pane_cp1_ParamLimits

0x96e5,	// (0x00064685) indicator_pane_cp1

0x96f4,	// (0x00064694) main_pane_idle_g1_cp_ParamLimits

0x96f4,	// (0x00064694) main_pane_idle_g1_cp

0x970c,	// (0x000646ac) popup_ai_links_title_window

0x9715,	// (0x000646b5) soft_indicator_pane_cp1_ParamLimits

0x9715,	// (0x000646b5) soft_indicator_pane_cp1

0x3778,	// (0x0005e718) ai_links_pane_g1

0x3781,	// (0x0005e721) grid_ai_links_pane

0xc6a9,	// (0x00067649) ai_gene_pane_1

0x3766,	// (0x0005e706) ai_gene_pane_2

0x376f,	// (0x0005e70f) list_highlight_pane_cp4

0xc685,	// (0x00067625) cell_ai_link_pane_ParamLimits

0xc685,	// (0x00067625) cell_ai_link_pane

0x3737,	// (0x0005e6d7) cell_ai_link_pane_g1

0x8321,	// (0x000632c1) cell_ai_link_pane_g2

0x0001,

0xf901,	// (0x0006a8a1) cell_ai_link_pane_g

0x8094,	// (0x00063034) grid_highlight_cp2

0x8094,	// (0x00063034) bg_popup_sub_pane_cp1

0x81fd,	// (0x0006319d) popup_ai_links_title_window_t1

0x3687,	// (0x0005e627) ai_gene_pane_1_g1_ParamLimits

0x3687,	// (0x0005e627) ai_gene_pane_1_g1

0x3693,	// (0x0005e633) ai_gene_pane_1_g2_ParamLimits

0x3693,	// (0x0005e633) ai_gene_pane_1_g2

0x0001,

0xf8f7,	// (0x0006a897) ai_gene_pane_1_g_ParamLimits

0xf8f7,	// (0x0006a897) ai_gene_pane_1_g

0x36a0,	// (0x0005e640) ai_gene_pane_1_t1_ParamLimits

0x36a0,	// (0x0005e640) ai_gene_pane_1_t1

0x36d4,	// (0x0005e674) grid_ai_soft_ind_pane

0x3672,	// (0x0005e612) ai_gene_pane_2_t1_ParamLimits

0x3672,	// (0x0005e612) ai_gene_pane_2_t1

0x9729,	// (0x000646c9) main_pane_empty_t1_ParamLimits

0x9729,	// (0x000646c9) main_pane_empty_t1

0x9741,	// (0x000646e1) main_pane_empty_t2_ParamLimits

0x9741,	// (0x000646e1) main_pane_empty_t2

0x9756,	// (0x000646f6) main_pane_empty_t3_ParamLimits

0x9756,	// (0x000646f6) main_pane_empty_t3

0x9768,	// (0x00064708) main_pane_empty_t4_ParamLimits

0x9768,	// (0x00064708) main_pane_empty_t4

0x977a,	// (0x0006471a) main_pane_empty_t5_ParamLimits

0x977a,	// (0x0006471a) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006a514) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006a514) main_pane_empty_t

0x854b,	// (0x000634eb) bg_popup_window_pane_ParamLimits

0x854b,	// (0x000634eb) bg_popup_window_pane

0xc5ff,	// (0x0006759f) find_popup_pane_cp2_ParamLimits

0xc5ff,	// (0x0006759f) find_popup_pane_cp2

0x33ee,	// (0x0005e38e) heading_pane_ParamLimits

0x33ee,	// (0x0005e38e) heading_pane

0x8094,	// (0x00063034) bg_popup_sub_pane

0xc580,	// (0x00067520) bg_popup_window_pane_g1_ParamLimits

0xc580,	// (0x00067520) bg_popup_window_pane_g1

0xc58f,	// (0x0006752f) bg_popup_window_pane_g2_ParamLimits

0xc58f,	// (0x0006752f) bg_popup_window_pane_g2

0xc59b,	// (0x0006753b) bg_popup_window_pane_g3_ParamLimits

0xc59b,	// (0x0006753b) bg_popup_window_pane_g3

0xc5a7,	// (0x00067547) bg_popup_window_pane_g4_ParamLimits

0xc5a7,	// (0x00067547) bg_popup_window_pane_g4

0xc5b6,	// (0x00067556) bg_popup_window_pane_g5_ParamLimits

0xc5b6,	// (0x00067556) bg_popup_window_pane_g5

0xc5c6,	// (0x00067566) bg_popup_window_pane_g6_ParamLimits

0xc5c6,	// (0x00067566) bg_popup_window_pane_g6

0xc5d2,	// (0x00067572) bg_popup_window_pane_g7_ParamLimits

0xc5d2,	// (0x00067572) bg_popup_window_pane_g7

0xc5e1,	// (0x00067581) bg_popup_window_pane_g8_ParamLimits

0xc5e1,	// (0x00067581) bg_popup_window_pane_g8

0xc5f0,	// (0x00067590) bg_popup_window_pane_g9_ParamLimits

0xc5f0,	// (0x00067590) bg_popup_window_pane_g9

0x33c8,	// (0x0005e368) bg_popup_window_pane_g10_ParamLimits

0x33c8,	// (0x0005e368) bg_popup_window_pane_g10

0x0009,

0xf8bf,	// (0x0006a85f) bg_popup_window_pane_g_ParamLimits

0xf8bf,	// (0x0006a85f) bg_popup_window_pane_g

0x32f1,	// (0x0005e291) bg_popup_heading_pane_ParamLimits

0x32f1,	// (0x0005e291) bg_popup_heading_pane

0x0d25,	// (0x0005bcc5) tabs_4_passive_pane_cp_srt_ParamLimits

0x0d25,	// (0x0005bcc5) tabs_4_passive_pane_cp_srt

0x0d37,	// (0x0005bcd7) tabs_4_passive_pane_srt_ParamLimits

0x3305,	// (0x0005e2a5) heading_pane_g2

0x0d37,	// (0x0005bcd7) tabs_4_passive_pane_srt

0x2683,	// (0x0005d623) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2683,	// (0x0005d623) bg_passive_tab_pane_cp3_srt

0x330d,	// (0x0005e2ad) heading_pane_t1_ParamLimits

0x330d,	// (0x0005e2ad) heading_pane_t1

0x3324,	// (0x0005e2c4) heading_pane_t2_ParamLimits

0x3324,	// (0x0005e2c4) heading_pane_t2

0x0001,

0xf8ba,	// (0x0006a85a) heading_pane_t_ParamLimits

0xf8ba,	// (0x0006a85a) heading_pane_t

0x2e2e,	// (0x0005ddce) bg_popup_heading_pane_g1

0x2edd,	// (0x0005de7d) bg_popup_heading_pane_g2

0x2ee7,	// (0x0005de87) bg_popup_heading_pane_g3

0x2ef1,	// (0x0005de91) bg_popup_heading_pane_g4

0x2efb,	// (0x0005de9b) bg_popup_heading_pane_g5

0x2f05,	// (0x0005dea5) bg_popup_heading_pane_g6

0x2f0d,	// (0x0005dead) bg_popup_heading_pane_g7

0x2f15,	// (0x0005deb5) bg_popup_heading_pane_g8

0x2f1f,	// (0x0005debf) bg_popup_heading_pane_g9

0x0008,

0xf876,	// (0x0006a816) bg_popup_heading_pane_g

0x25f7,	// (0x0005d597) bg_popup_sub_pane_g1

0x2607,	// (0x0005d5a7) bg_popup_sub_pane_g2

0x25ff,	// (0x0005d59f) bg_popup_sub_pane_g3

0x2617,	// (0x0005d5b7) bg_popup_sub_pane_g4

0x260f,	// (0x0005d5af) bg_popup_sub_pane_g5

0x261f,	// (0x0005d5bf) bg_popup_sub_pane_g6

0x2627,	// (0x0005d5c7) bg_popup_sub_pane_g7

0x2637,	// (0x0005d5d7) bg_popup_sub_pane_g8

0x262f,	// (0x0005d5cf) bg_popup_sub_pane_g9

0x0008,

0xf850,	// (0x0006a7f0) bg_popup_sub_pane_g

0x820c,	// (0x000631ac) bg_popup_window_pane_cp5_ParamLimits

0x820c,	// (0x000631ac) bg_popup_window_pane_cp5

0x8228,	// (0x000631c8) popup_note_window_g1_ParamLimits

0x8228,	// (0x000631c8) popup_note_window_g1

0x8234,	// (0x000631d4) popup_note_window_t1_ParamLimits

0x8234,	// (0x000631d4) popup_note_window_t1

0x824a,	// (0x000631ea) popup_note_window_t2_ParamLimits

0x824a,	// (0x000631ea) popup_note_window_t2

0x8260,	// (0x00063200) popup_note_window_t3_ParamLimits

0x8260,	// (0x00063200) popup_note_window_t3

0x8276,	// (0x00063216) popup_note_window_t4_ParamLimits

0x8276,	// (0x00063216) popup_note_window_t4

0x829e,	// (0x0006323e) popup_note_window_t5_ParamLimits

0x829e,	// (0x0006323e) popup_note_window_t5

0x0004,

0xf57f,	// (0x0006a51f) popup_note_window_t_ParamLimits

0xf57f,	// (0x0006a51f) popup_note_window_t

0x82c2,	// (0x00063262) bg_popup_window_pane_cp6_ParamLimits

0x82c2,	// (0x00063262) bg_popup_window_pane_cp6

0x2daa,	// (0x0005dd4a) popup_note_image_window_g1_ParamLimits

0x2daa,	// (0x0005dd4a) popup_note_image_window_g1

0xc425,	// (0x000673c5) popup_note_image_window_g2_ParamLimits

0xc425,	// (0x000673c5) popup_note_image_window_g2

0x0001,

0xf844,	// (0x0006a7e4) popup_note_image_window_g_ParamLimits

0xf844,	// (0x0006a7e4) popup_note_image_window_g

0x2dcf,	// (0x0005dd6f) popup_note_image_window_t1_ParamLimits

0x2dcf,	// (0x0005dd6f) popup_note_image_window_t1

0x2de8,	// (0x0005dd88) popup_note_image_window_t2_ParamLimits

0x2de8,	// (0x0005dd88) popup_note_image_window_t2

0x2e01,	// (0x0005dda1) popup_note_image_window_t3_ParamLimits

0x2e01,	// (0x0005dda1) popup_note_image_window_t3

0x0002,

0xf849,	// (0x0006a7e9) popup_note_image_window_t_ParamLimits

0xf849,	// (0x0006a7e9) popup_note_image_window_t

0x2c73,	// (0x0005dc13) bg_popup_window_pane_cp7_ParamLimits

0x2c73,	// (0x0005dc13) bg_popup_window_pane_cp7

0x2ca3,	// (0x0005dc43) popup_note_wait_window_g1_ParamLimits

0x2ca3,	// (0x0005dc43) popup_note_wait_window_g1

0x2caf,	// (0x0005dc4f) popup_note_wait_window_g2_ParamLimits

0x2caf,	// (0x0005dc4f) popup_note_wait_window_g2

0x0002,

0xf832,	// (0x0006a7d2) popup_note_wait_window_g_ParamLimits

0xf832,	// (0x0006a7d2) popup_note_wait_window_g

0x2cc7,	// (0x0005dc67) popup_note_wait_window_t1_ParamLimits

0x2cc7,	// (0x0005dc67) popup_note_wait_window_t1

0xc3c6,	// (0x00067366) popup_note_wait_window_t2_ParamLimits

0xc3c6,	// (0x00067366) popup_note_wait_window_t2

0xc3e3,	// (0x00067383) popup_note_wait_window_t3_ParamLimits

0xc3e3,	// (0x00067383) popup_note_wait_window_t3

0xc3f6,	// (0x00067396) popup_note_wait_window_t4_ParamLimits

0xc3f6,	// (0x00067396) popup_note_wait_window_t4

0x0004,

0xf839,	// (0x0006a7d9) popup_note_wait_window_t_ParamLimits

0xf839,	// (0x0006a7d9) popup_note_wait_window_t

0x2d43,	// (0x0005dce3) wait_bar_pane_ParamLimits

0x2d43,	// (0x0005dce3) wait_bar_pane

0x8094,	// (0x00063034) wait_anim_pane

0x8094,	// (0x00063034) wait_border_pane

0x808a,	// (0x0006302a) wait_anim_pane_g1

0x808a,	// (0x0006302a) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0006a699) wait_anim_pane_g

0x2c1f,	// (0x0005dbbf) wait_border_pane_g1

0x2c2a,	// (0x0005dbca) wait_border_pane_g2

0x2c33,	// (0x0005dbd3) wait_border_pane_g3

0x0002,

0xf82b,	// (0x0006a7cb) wait_border_pane_g

0x2a8a,	// (0x0005da2a) bg_popup_window_pane_cp16_ParamLimits

0x2a8a,	// (0x0005da2a) bg_popup_window_pane_cp16

0xc376,	// (0x00067316) indicator_popup_pane_cp4_ParamLimits

0xc376,	// (0x00067316) indicator_popup_pane_cp4

0x2b9e,	// (0x0005db3e) popup_query_data_window_t1_ParamLimits

0x2b9e,	// (0x0005db3e) popup_query_data_window_t1

0x2bb0,	// (0x0005db50) popup_query_data_window_t2_ParamLimits

0x2bb0,	// (0x0005db50) popup_query_data_window_t2

0x2bc9,	// (0x0005db69) popup_query_data_window_t3_ParamLimits

0x2bc9,	// (0x0005db69) popup_query_data_window_t3

0x0002,

0xf824,	// (0x0006a7c4) popup_query_data_window_t_ParamLimits

0xf824,	// (0x0006a7c4) popup_query_data_window_t

0xc38a,	// (0x0006732a) query_popup_data_pane_ParamLimits

0xc38a,	// (0x0006732a) query_popup_data_pane

0xc39e,	// (0x0006733e) query_popup_data_pane_cp1_ParamLimits

0xc39e,	// (0x0006733e) query_popup_data_pane_cp1

0x2a8a,	// (0x0005da2a) bg_popup_window_pane_cp10_ParamLimits

0x2a8a,	// (0x0005da2a) bg_popup_window_pane_cp10

0xc2f1,	// (0x00067291) indicator_popup_pane_ParamLimits

0xc2f1,	// (0x00067291) indicator_popup_pane

0xc313,	// (0x000672b3) popup_query_code_window_t1_ParamLimits

0xc313,	// (0x000672b3) popup_query_code_window_t1

0xc32d,	// (0x000672cd) popup_query_code_window_t2_ParamLimits

0xc32d,	// (0x000672cd) popup_query_code_window_t2

0x2b41,	// (0x0005dae1) popup_query_code_window_t3_ParamLimits

0x2b41,	// (0x0005dae1) popup_query_code_window_t3

0x0002,

0xf81d,	// (0x0006a7bd) popup_query_code_window_t_ParamLimits

0xf81d,	// (0x0006a7bd) popup_query_code_window_t

0x2b70,	// (0x0005db10) query_popup_pane_ParamLimits

0x2b70,	// (0x0005db10) query_popup_pane

0x82c2,	// (0x00063262) bg_popup_window_pane_cp15_ParamLimits

0x82c2,	// (0x00063262) bg_popup_window_pane_cp15

0x97b2,	// (0x00064752) indicator_popup_pane_cp1_ParamLimits

0x97b2,	// (0x00064752) indicator_popup_pane_cp1

0x97c5,	// (0x00064765) indicator_popup_pane_cp2_ParamLimits

0x97c5,	// (0x00064765) indicator_popup_pane_cp2

0x97d8,	// (0x00064778) popup_query_data_code_window_g1_ParamLimits

0x97d8,	// (0x00064778) popup_query_data_code_window_g1

0x82e0,	// (0x00063280) popup_query_data_code_window_t1_ParamLimits

0x82e0,	// (0x00063280) popup_query_data_code_window_t1

0x82f2,	// (0x00063292) popup_query_data_code_window_t2_ParamLimits

0x82f2,	// (0x00063292) popup_query_data_code_window_t2

0x97eb,	// (0x0006478b) popup_query_data_code_window_t3_ParamLimits

0x97eb,	// (0x0006478b) popup_query_data_code_window_t3

0x9801,	// (0x000647a1) popup_query_data_code_window_t4_ParamLimits

0x9801,	// (0x000647a1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006a52a) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006a52a) popup_query_data_code_window_t

0x0921,	// (0x0005b8c1) list_single_midp_graphic_pane_g3

0x9819,	// (0x000647b9) query_popup_data_pane_cp2_ParamLimits

0x982c,	// (0x000647cc) query_popup_pane_cp2_ParamLimits

0x982c,	// (0x000647cc) query_popup_pane_cp2

0x8094,	// (0x00063034) bg_popup_window_pane_cp11

0x2a76,	// (0x0005da16) heading_pane_cp5

0x834e,	// (0x000632ee) listscroll_popup_info_pane

0x8094,	// (0x00063034) input_focus_pane_cp3

0x8304,	// (0x000632a4) query_popup_pane_t1

0x8312,	// (0x000632b2) list_popup_info_pane_ParamLimits

0x8312,	// (0x000632b2) list_popup_info_pane

0x8321,	// (0x000632c1) listscroll_popup_info_pane_g1

0x8329,	// (0x000632c9) scroll_pane_cp7

0x983f,	// (0x000647df) popup_info_list_pane_t1_ParamLimits

0x983f,	// (0x000647df) popup_info_list_pane_t1

0x9859,	// (0x000647f9) popup_info_list_pane_t2_ParamLimits

0x9859,	// (0x000647f9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0006a533) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0006a533) popup_info_list_pane_t

0x8094,	// (0x00063034) bg_popup_window_pane_cp12

0xcac2,	// (0x00067a62) find_popup_pane

0x80e2,	// (0x00063082) bg_popup_window_pane_cp3

0x8333,	// (0x000632d3) heading_pane_cp3

0x833f,	// (0x000632df) listscroll_popup_graphic_pane

0x8094,	// (0x00063034) bg_popup_window_pane_cp4

0x98c3,	// (0x00064863) heading_pane_cp4

0x834e,	// (0x000632ee) listscroll_popup_colour_pane

0x98cb,	// (0x0006486b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x98cb,	// (0x0006486b) cell_large_graphic_colour_none_popup_pane

0x98df,	// (0x0006487f) grid_large_graphic_colour_popup_pane_ParamLimits

0x98df,	// (0x0006487f) grid_large_graphic_colour_popup_pane

0x9903,	// (0x000648a3) listscroll_popup_colour_pane_g1_ParamLimits

0x9903,	// (0x000648a3) listscroll_popup_colour_pane_g1

0x991a,	// (0x000648ba) listscroll_popup_colour_pane_g2_ParamLimits

0x991a,	// (0x000648ba) listscroll_popup_colour_pane_g2

0x9931,	// (0x000648d1) listscroll_popup_colour_pane_g3_ParamLimits

0x9931,	// (0x000648d1) listscroll_popup_colour_pane_g3

0x9941,	// (0x000648e1) listscroll_popup_colour_pane_g4_ParamLimits

0x9941,	// (0x000648e1) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006a538) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006a538) listscroll_popup_colour_pane_g

0x8356,	// (0x000632f6) scroll_pane_cp6_ParamLimits

0x8356,	// (0x000632f6) scroll_pane_cp6

0x9951,	// (0x000648f1) cell_large_graphic_colour_popup_pane_ParamLimits

0x9951,	// (0x000648f1) cell_large_graphic_colour_popup_pane

0x9970,	// (0x00064910) cell_large_graphic_colour_none_popup_pane_t1

0x8094,	// (0x00063034) grid_highlight_pane_cp5

0x8368,	// (0x00063308) cell_large_graphic_colour_popup_pane_g1

0x8370,	// (0x00063310) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0006a541) cell_large_graphic_colour_popup_pane_g

0x8378,	// (0x00063318) cell_large_graphic_colour_popup_pane_g2_copy1

0x8381,	// (0x00063321) grid_highlight_pane_cp4

0x8389,	// (0x00063329) bg_popup_window_pane_cp8_ParamLimits

0x8389,	// (0x00063329) bg_popup_window_pane_cp8

0x997f,	// (0x0006491f) popup_snote_single_text_window_g1_ParamLimits

0x997f,	// (0x0006491f) popup_snote_single_text_window_g1

0x9991,	// (0x00064931) popup_snote_single_text_window_t1_ParamLimits

0x9991,	// (0x00064931) popup_snote_single_text_window_t1

0x99a4,	// (0x00064944) popup_snote_single_text_window_t2_ParamLimits

0x99a4,	// (0x00064944) popup_snote_single_text_window_t2

0x99b7,	// (0x00064957) popup_snote_single_text_window_t3_ParamLimits

0x99b7,	// (0x00064957) popup_snote_single_text_window_t3

0x99f0,	// (0x00064990) popup_snote_single_text_window_t4_ParamLimits

0x99f0,	// (0x00064990) popup_snote_single_text_window_t4

0x9a24,	// (0x000649c4) popup_snote_single_text_window_t5_ParamLimits

0x9a24,	// (0x000649c4) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006a546) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006a546) popup_snote_single_text_window_t

0x83a4,	// (0x00063344) bg_popup_window_pane_cp9_ParamLimits

0x83a4,	// (0x00063344) bg_popup_window_pane_cp9

0x997f,	// (0x0006491f) popup_snote_single_graphic_window_g1_ParamLimits

0x997f,	// (0x0006491f) popup_snote_single_graphic_window_g1

0x83b2,	// (0x00063352) popup_snote_single_graphic_window_g2_ParamLimits

0x83b2,	// (0x00063352) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0006a551) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0006a551) popup_snote_single_graphic_window_g

0x83be,	// (0x0006335e) popup_snote_single_graphic_window_t1_ParamLimits

0x83be,	// (0x0006335e) popup_snote_single_graphic_window_t1

0x83d1,	// (0x00063371) popup_snote_single_graphic_window_t2_ParamLimits

0x83d1,	// (0x00063371) popup_snote_single_graphic_window_t2

0x99b7,	// (0x00064957) popup_snote_single_graphic_window_t3_ParamLimits

0x99b7,	// (0x00064957) popup_snote_single_graphic_window_t3

0x99f0,	// (0x00064990) popup_snote_single_graphic_window_t4_ParamLimits

0x99f0,	// (0x00064990) popup_snote_single_graphic_window_t4

0x9a53,	// (0x000649f3) popup_snote_single_graphic_window_t5_ParamLimits

0x9a53,	// (0x000649f3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006a556) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006a556) popup_snote_single_graphic_window_t

0x3d72,	// (0x0005ed12) grid_graphic_popup_pane_ParamLimits

0x3d72,	// (0x0005ed12) grid_graphic_popup_pane

0x3d9c,	// (0x0005ed3c) listscroll_popup_graphic_pane_g1_ParamLimits

0x3d9c,	// (0x0005ed3c) listscroll_popup_graphic_pane_g1

0xca60,	// (0x00067a00) listscroll_popup_graphic_pane_g2_ParamLimits

0xca60,	// (0x00067a00) listscroll_popup_graphic_pane_g2

0x0001,

0xf99a,	// (0x0006a93a) listscroll_popup_graphic_pane_g_ParamLimits

0xf99a,	// (0x0006a93a) listscroll_popup_graphic_pane_g

0x3dc4,	// (0x0005ed64) scroll_pane_cp5

0xca05,	// (0x000679a5) cell_graphic_popup_pane_ParamLimits

0xca05,	// (0x000679a5) cell_graphic_popup_pane

0x3cf2,	// (0x0005ec92) cell_graphic_popup_pane_g1

0x3cfa,	// (0x0005ec9a) cell_graphic_popup_pane_g2

0x8378,	// (0x00063318) cell_graphic_popup_pane_g3

0x0002,

0xf993,	// (0x0006a933) cell_graphic_popup_pane_g

0x3d03,	// (0x0005eca3) cell_graphic_popup_pane_t2

0x8381,	// (0x00063321) grid_highlight_pane_cp3

0x83f6,	// (0x00063396) list_gen_pane_ParamLimits

0x83f6,	// (0x00063396) list_gen_pane

0x841e,	// (0x000633be) scroll_pane

0xc96f,	// (0x0006790f) bg_list_pane_g1_ParamLimits

0xc96f,	// (0x0006790f) bg_list_pane_g1

0xc98a,	// (0x0006792a) bg_list_pane_g2_ParamLimits

0xc98a,	// (0x0006792a) bg_list_pane_g2

0xc99d,	// (0x0006793d) bg_list_pane_g3_ParamLimits

0xc99d,	// (0x0006793d) bg_list_pane_g3

0xc9af,	// (0x0006794f) bg_list_pane_g4_ParamLimits

0xc9af,	// (0x0006794f) bg_list_pane_g4

0xc9c1,	// (0x00067961) bg_list_pane_g5_ParamLimits

0xc9c1,	// (0x00067961) bg_list_pane_g5

0x0004,

0xf988,	// (0x0006a928) bg_list_pane_g_ParamLimits

0xf988,	// (0x0006a928) bg_list_pane_g

0xc913,	// (0x000678b3) list_double2_graphic_large_graphic_pane_ParamLimits

0xc913,	// (0x000678b3) list_double2_graphic_large_graphic_pane

0xc913,	// (0x000678b3) list_double2_graphic_pane_ParamLimits

0xc913,	// (0x000678b3) list_double2_graphic_pane

0xc913,	// (0x000678b3) list_double2_large_graphic_pane_ParamLimits

0xc913,	// (0x000678b3) list_double2_large_graphic_pane

0xc913,	// (0x000678b3) list_double2_pane_ParamLimits

0xc913,	// (0x000678b3) list_double2_pane

0xc913,	// (0x000678b3) list_double_graphic_heading_pane_ParamLimits

0xc913,	// (0x000678b3) list_double_graphic_heading_pane

0xc913,	// (0x000678b3) list_double_graphic_pane_ParamLimits

0xc913,	// (0x000678b3) list_double_graphic_pane

0xc913,	// (0x000678b3) list_double_heading_pane_ParamLimits

0xc913,	// (0x000678b3) list_double_heading_pane

0xc913,	// (0x000678b3) list_double_large_graphic_pane_ParamLimits

0xc913,	// (0x000678b3) list_double_large_graphic_pane

0xc913,	// (0x000678b3) list_double_number_pane_ParamLimits

0xc913,	// (0x000678b3) list_double_number_pane

0xc913,	// (0x000678b3) list_double_pane_ParamLimits

0xc913,	// (0x000678b3) list_double_pane

0xc913,	// (0x000678b3) list_double_time_pane_ParamLimits

0xc913,	// (0x000678b3) list_double_time_pane

0xc913,	// (0x000678b3) list_setting_number_pane_ParamLimits

0xc913,	// (0x000678b3) list_setting_number_pane

0xc913,	// (0x000678b3) list_setting_pane_ParamLimits

0xc913,	// (0x000678b3) list_setting_pane

0xc925,	// (0x000678c5) list_single_2graphic_pane_ParamLimits

0xc925,	// (0x000678c5) list_single_2graphic_pane

0xc925,	// (0x000678c5) list_single_graphic_heading_pane_ParamLimits

0xc925,	// (0x000678c5) list_single_graphic_heading_pane

0xc925,	// (0x000678c5) list_single_graphic_pane_ParamLimits

0xc925,	// (0x000678c5) list_single_graphic_pane

0xc925,	// (0x000678c5) list_single_heading_pane_ParamLimits

0xc925,	// (0x000678c5) list_single_heading_pane

0xc925,	// (0x000678c5) list_single_large_graphic_pane_ParamLimits

0xc925,	// (0x000678c5) list_single_large_graphic_pane

0xc925,	// (0x000678c5) list_single_number_heading_pane_ParamLimits

0xc925,	// (0x000678c5) list_single_number_heading_pane

0xc925,	// (0x000678c5) list_single_number_pane_ParamLimits

0xc925,	// (0x000678c5) list_single_number_pane

0xc925,	// (0x000678c5) list_single_pane_ParamLimits

0xc925,	// (0x000678c5) list_single_pane

0x8094,	// (0x00063034) list_highlight_pane_cp1

0xdd2c,	// (0x00068ccc) list_single_pane_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_single_pane_g1

0xdd38,	// (0x00068cd8) list_single_pane_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006a572) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006a572) list_single_pane_g

0xb283,	// (0x00066223) list_single_pane_t1_ParamLimits

0xb283,	// (0x00066223) list_single_pane_t1

0xdd2c,	// (0x00068ccc) list_single_number_pane_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_single_number_pane_g1

0xdd38,	// (0x00068cd8) list_single_number_pane_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006a572) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006a572) list_single_number_pane_g

0xdd44,	// (0x00068ce4) list_single_number_pane_t1_ParamLimits

0xdd44,	// (0x00068ce4) list_single_number_pane_t1

0xb1d7,	// (0x00066177) list_single_number_pane_t2_ParamLimits

0xb1d7,	// (0x00066177) list_single_number_pane_t2

0x0001,

0xf949,	// (0x0006a8e9) list_single_number_pane_t_ParamLimits

0xf949,	// (0x0006a8e9) list_single_number_pane_t

0xdd20,	// (0x00068cc0) list_single_graphic_pane_g1_ParamLimits

0xdd20,	// (0x00068cc0) list_single_graphic_pane_g1

0xdd2c,	// (0x00068ccc) list_single_graphic_pane_g2_ParamLimits

0xdd2c,	// (0x00068ccc) list_single_graphic_pane_g2

0xdd38,	// (0x00068cd8) list_single_graphic_pane_g3_ParamLimits

0xdd38,	// (0x00068cd8) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0006a561) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0006a561) list_single_graphic_pane_g

0xdd44,	// (0x00068ce4) list_single_graphic_pane_t1_ParamLimits

0xdd44,	// (0x00068ce4) list_single_graphic_pane_t1

0x9a8c,	// (0x00064a2c) list_single_heading_pane_g1_ParamLimits

0x9a8c,	// (0x00064a2c) list_single_heading_pane_g1

0xdd38,	// (0x00068cd8) list_single_heading_pane_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0006a568) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0006a568) list_single_heading_pane_g

0x9a9f,	// (0x00064a3f) list_single_heading_pane_t1_ParamLimits

0x9a9f,	// (0x00064a3f) list_single_heading_pane_t1

0x9ab5,	// (0x00064a55) list_single_heading_pane_t2_ParamLimits

0x9ab5,	// (0x00064a55) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0006a56d) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0006a56d) list_single_heading_pane_t

0xdd2c,	// (0x00068ccc) list_single_number_heading_pane_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_single_number_heading_pane_g1

0xdd38,	// (0x00068cd8) list_single_number_heading_pane_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006a572) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006a572) list_single_number_heading_pane_g

0x9ac7,	// (0x00064a67) list_single_number_heading_pane_t1_ParamLimits

0x9ac7,	// (0x00064a67) list_single_number_heading_pane_t1

0x9add,	// (0x00064a7d) list_single_number_heading_pane_t2_ParamLimits

0x9add,	// (0x00064a7d) list_single_number_heading_pane_t2

0x9aef,	// (0x00064a8f) list_single_number_heading_pane_t3_ParamLimits

0x9aef,	// (0x00064a8f) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0006a577) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0006a577) list_single_number_heading_pane_t

0x9b01,	// (0x00064aa1) list_single_graphic_heading_pane_g1_ParamLimits

0x9b01,	// (0x00064aa1) list_single_graphic_heading_pane_g1

0x9b17,	// (0x00064ab7) list_single_graphic_heading_pane_g4_ParamLimits

0x9b17,	// (0x00064ab7) list_single_graphic_heading_pane_g4

0xdd38,	// (0x00068cd8) list_single_graphic_heading_pane_g5_ParamLimits

0xdd38,	// (0x00068cd8) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0006a57e) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0006a57e) list_single_graphic_heading_pane_g

0x9ac7,	// (0x00064a67) list_single_graphic_heading_pane_t1_ParamLimits

0x9ac7,	// (0x00064a67) list_single_graphic_heading_pane_t1

0x9b28,	// (0x00064ac8) list_single_graphic_heading_pane_t2_ParamLimits

0x9b28,	// (0x00064ac8) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006a585) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006a585) list_single_graphic_heading_pane_t

0x3f37,	// (0x0005eed7) list_single_large_graphic_pane_g1_ParamLimits

0x3f37,	// (0x0005eed7) list_single_large_graphic_pane_g1

0xdd2c,	// (0x00068ccc) list_single_large_graphic_pane_g2_ParamLimits

0xdd2c,	// (0x00068ccc) list_single_large_graphic_pane_g2

0xdd38,	// (0x00068cd8) list_single_large_graphic_pane_g3_ParamLimits

0xdd38,	// (0x00068cd8) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0006a58a) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0006a58a) list_single_large_graphic_pane_g

0x2c2a,	// (0x0005dbca) wait_border_pane_g2_copy1

0x9b40,	// (0x00064ae0) list_single_large_graphic_pane_g4_cp2

0xdd44,	// (0x00068ce4) list_single_large_graphic_pane_t1_ParamLimits

0xdd44,	// (0x00068ce4) list_single_large_graphic_pane_t1

0x4092,	// (0x0005f032) list_double_pane_g1_ParamLimits

0x4092,	// (0x0005f032) list_double_pane_g1

0xdd5a,	// (0x00068cfa) list_double_pane_g2_ParamLimits

0xdd5a,	// (0x00068cfa) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006a591) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006a591) list_double_pane_g

0x9b48,	// (0x00064ae8) list_double_pane_t1_ParamLimits

0x9b48,	// (0x00064ae8) list_double_pane_t1

0x9b5e,	// (0x00064afe) list_double_pane_t2_ParamLimits

0x9b5e,	// (0x00064afe) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0006a596) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0006a596) list_double_pane_t

0x9b70,	// (0x00064b10) list_double2_pane_g1_ParamLimits

0x9b70,	// (0x00064b10) list_double2_pane_g1

0x9b81,	// (0x00064b21) list_double2_pane_g2_ParamLimits

0x9b81,	// (0x00064b21) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0006a59b) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0006a59b) list_double2_pane_g

0x9b8d,	// (0x00064b2d) list_double2_pane_t1_ParamLimits

0x9b8d,	// (0x00064b2d) list_double2_pane_t1

0x9ba3,	// (0x00064b43) list_double2_pane_t2_ParamLimits

0x9ba3,	// (0x00064b43) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006a5a0) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006a5a0) list_double2_pane_t

0x4092,	// (0x0005f032) list_double_number_pane_g1_ParamLimits

0x4092,	// (0x0005f032) list_double_number_pane_g1

0xdd5a,	// (0x00068cfa) list_double_number_pane_g2_ParamLimits

0xdd5a,	// (0x00068cfa) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006a591) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006a591) list_double_number_pane_g

0x9bb5,	// (0x00064b55) list_double_number_pane_t1_ParamLimits

0x9bb5,	// (0x00064b55) list_double_number_pane_t1

0x9bc7,	// (0x00064b67) list_double_number_pane_t2_ParamLimits

0x9bc7,	// (0x00064b67) list_double_number_pane_t2

0x9bdd,	// (0x00064b7d) list_double_number_pane_t3_ParamLimits

0x9bdd,	// (0x00064b7d) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0006a5a5) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0006a5a5) list_double_number_pane_t

0x9bef,	// (0x00064b8f) list_double_graphic_pane_g1_ParamLimits

0x9bef,	// (0x00064b8f) list_double_graphic_pane_g1

0x9bfb,	// (0x00064b9b) list_double_graphic_pane_g2_ParamLimits

0x9bfb,	// (0x00064b9b) list_double_graphic_pane_g2

0x9c0a,	// (0x00064baa) list_double_graphic_pane_g3_ParamLimits

0x9c0a,	// (0x00064baa) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0006a5ac) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006a5ac) list_double_graphic_pane_g

0x9b48,	// (0x00064ae8) list_double_graphic_pane_t1_ParamLimits

0x9b48,	// (0x00064ae8) list_double_graphic_pane_t1

0x9b5e,	// (0x00064afe) list_double_graphic_pane_t2_ParamLimits

0x9b5e,	// (0x00064afe) list_double_graphic_pane_t2

0x0001,

0xf5f6,	// (0x0006a596) list_double_graphic_pane_t_ParamLimits

0xf5f6,	// (0x0006a596) list_double_graphic_pane_t

0x9c22,	// (0x00064bc2) list_double2_graphic_pane_g1_ParamLimits

0x9c22,	// (0x00064bc2) list_double2_graphic_pane_g1

0x84b0,	// (0x00063450) list_double2_graphic_pane_g2_ParamLimits

0x84b0,	// (0x00063450) list_double2_graphic_pane_g2

0x9c2e,	// (0x00064bce) list_double2_graphic_pane_g3_ParamLimits

0x9c2e,	// (0x00064bce) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0006a5b5) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0006a5b5) list_double2_graphic_pane_g

0x9c3a,	// (0x00064bda) list_double2_graphic_pane_t1_ParamLimits

0x9c3a,	// (0x00064bda) list_double2_graphic_pane_t1

0x9c50,	// (0x00064bf0) list_double2_graphic_pane_t2_ParamLimits

0x9c50,	// (0x00064bf0) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0006a5bc) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0006a5bc) list_double2_graphic_pane_t

0x9c62,	// (0x00064c02) list_double_large_graphic_pane_g1_ParamLimits

0x9c62,	// (0x00064c02) list_double_large_graphic_pane_g1

0x9c81,	// (0x00064c21) list_double_large_graphic_pane_g2_ParamLimits

0x9c81,	// (0x00064c21) list_double_large_graphic_pane_g2

0xdd5a,	// (0x00068cfa) list_double_large_graphic_pane_g3_ParamLimits

0xdd5a,	// (0x00068cfa) list_double_large_graphic_pane_g3

0x9c97,	// (0x00064c37) list_double_large_graphic_pane_g4_ParamLimits

0x9c97,	// (0x00064c37) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0006a5c1) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0006a5c1) list_double_large_graphic_pane_g

0x9caa,	// (0x00064c4a) list_double_large_graphic_pane_t1_ParamLimits

0x9caa,	// (0x00064c4a) list_double_large_graphic_pane_t1

0x9cc3,	// (0x00064c63) list_double_large_graphic_pane_t2_ParamLimits

0x9cc3,	// (0x00064c63) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0006a5cc) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0006a5cc) list_double_large_graphic_pane_t

0x9cd5,	// (0x00064c75) list_double2_large_graphic_pane_g1_ParamLimits

0x9cd5,	// (0x00064c75) list_double2_large_graphic_pane_g1

0x9ce1,	// (0x00064c81) list_double2_large_graphic_pane_g2_ParamLimits

0x9ce1,	// (0x00064c81) list_double2_large_graphic_pane_g2

0x9c2e,	// (0x00064bce) list_double2_large_graphic_pane_g3_ParamLimits

0x9c2e,	// (0x00064bce) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0006a5d1) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0006a5d1) list_double2_large_graphic_pane_g

0x9c3a,	// (0x00064bda) list_double2_large_graphic_pane_t1_ParamLimits

0x9c3a,	// (0x00064bda) list_double2_large_graphic_pane_t1

0x9c50,	// (0x00064bf0) list_double2_large_graphic_pane_t2_ParamLimits

0x9c50,	// (0x00064bf0) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0006a5bc) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0006a5bc) list_double2_large_graphic_pane_t

0x9cf2,	// (0x00064c92) list_double_heading_pane_g1_ParamLimits

0x9cf2,	// (0x00064c92) list_double_heading_pane_g1

0x9d03,	// (0x00064ca3) list_double_heading_pane_g2_ParamLimits

0x9d03,	// (0x00064ca3) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0006a5d8) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0006a5d8) list_double_heading_pane_g

0x9d0f,	// (0x00064caf) list_double_heading_pane_t1_ParamLimits

0x9d0f,	// (0x00064caf) list_double_heading_pane_t1

0x9c50,	// (0x00064bf0) list_double_heading_pane_t2_ParamLimits

0x9c50,	// (0x00064bf0) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0006a5dd) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0006a5dd) list_double_heading_pane_t

0x9d25,	// (0x00064cc5) list_double_graphic_heading_pane_g1_ParamLimits

0x9d25,	// (0x00064cc5) list_double_graphic_heading_pane_g1

0x9cf2,	// (0x00064c92) list_double_graphic_heading_pane_g2_ParamLimits

0x9cf2,	// (0x00064c92) list_double_graphic_heading_pane_g2

0x9d03,	// (0x00064ca3) list_double_graphic_heading_pane_g3_ParamLimits

0x9d03,	// (0x00064ca3) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0006a5e2) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0006a5e2) list_double_graphic_heading_pane_g

0x9d0f,	// (0x00064caf) list_double_graphic_heading_pane_t1_ParamLimits

0x9d0f,	// (0x00064caf) list_double_graphic_heading_pane_t1

0x9c50,	// (0x00064bf0) list_double_graphic_heading_pane_t2_ParamLimits

0x9c50,	// (0x00064bf0) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0006a5dd) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0006a5dd) list_double_graphic_heading_pane_t

0x9d31,	// (0x00064cd1) list_double_time_pane_g1_ParamLimits

0x9d31,	// (0x00064cd1) list_double_time_pane_g1

0xdd7b,	// (0x00068d1b) list_double_time_pane_g2_ParamLimits

0xdd7b,	// (0x00068d1b) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0006a5e9) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0006a5e9) list_double_time_pane_g

0x9d42,	// (0x00064ce2) list_double_time_pane_t1_ParamLimits

0x9d42,	// (0x00064ce2) list_double_time_pane_t1

0x9d58,	// (0x00064cf8) list_double_time_pane_t2_ParamLimits

0x9d58,	// (0x00064cf8) list_double_time_pane_t2

0x9d6a,	// (0x00064d0a) list_double_time_pane_t3_ParamLimits

0x9d6a,	// (0x00064d0a) list_double_time_pane_t3

0x9d7c,	// (0x00064d1c) list_double_time_pane_t4_ParamLimits

0x9d7c,	// (0x00064d1c) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0006a5ee) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0006a5ee) list_double_time_pane_t

0x9d8e,	// (0x00064d2e) list_setting_pane_g1_ParamLimits

0x9d8e,	// (0x00064d2e) list_setting_pane_g1

0x9d9a,	// (0x00064d3a) list_setting_pane_g2_ParamLimits

0x9d9a,	// (0x00064d3a) list_setting_pane_g2

0x0001,

0xf657,	// (0x0006a5f7) list_setting_pane_g_ParamLimits

0xf657,	// (0x0006a5f7) list_setting_pane_g

0x9da6,	// (0x00064d46) list_setting_pane_t1_ParamLimits

0x9da6,	// (0x00064d46) list_setting_pane_t1

0x9dc0,	// (0x00064d60) list_setting_pane_t2_ParamLimits

0x9dc0,	// (0x00064d60) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0006a5fc) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0006a5fc) list_setting_pane_t

0x9dff,	// (0x00064d9f) set_value_pane_cp_ParamLimits

0x9dff,	// (0x00064d9f) set_value_pane_cp

0x9e0b,	// (0x00064dab) list_setting_number_pane_g1_ParamLimits

0x9e0b,	// (0x00064dab) list_setting_number_pane_g1

0x9e17,	// (0x00064db7) list_setting_number_pane_g2_ParamLimits

0x9e17,	// (0x00064db7) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0006a603) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0006a603) list_setting_number_pane_g

0x9e23,	// (0x00064dc3) list_setting_number_pane_t1_ParamLimits

0x9e23,	// (0x00064dc3) list_setting_number_pane_t1

0x9e3c,	// (0x00064ddc) list_setting_number_pane_t2_ParamLimits

0x9e3c,	// (0x00064ddc) list_setting_number_pane_t2

0x9e56,	// (0x00064df6) list_setting_number_pane_t3_ParamLimits

0x9e56,	// (0x00064df6) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0006a608) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0006a608) list_setting_number_pane_t

0x9dff,	// (0x00064d9f) set_value_pane_ParamLimits

0x9dff,	// (0x00064d9f) set_value_pane

0x8452,	// (0x000633f2) bg_set_opt_pane_ParamLimits

0x8452,	// (0x000633f2) bg_set_opt_pane

0xdd87,	// (0x00068d27) set_value_pane_t1

0x8473,	// (0x00063413) slider_set_pane_cp3

0x9e99,	// (0x00064e39) volume_small_pane_cp

0x847c,	// (0x0006341c) list_form_gen_pane

0x8485,	// (0x00063425) scroll_pane_cp8

0x9ea2,	// (0x00064e42) form_field_data_pane_ParamLimits

0x9ea2,	// (0x00064e42) form_field_data_pane

0x9eb9,	// (0x00064e59) form_field_data_wide_pane_ParamLimits

0x9eb9,	// (0x00064e59) form_field_data_wide_pane

0x9ed9,	// (0x00064e79) form_field_popup_pane_ParamLimits

0x9ed9,	// (0x00064e79) form_field_popup_pane

0x9ef1,	// (0x00064e91) form_field_popup_wide_pane_ParamLimits

0x9ef1,	// (0x00064e91) form_field_popup_wide_pane

0xdda5,	// (0x00068d45) form_field_slider_pane_ParamLimits

0xdda5,	// (0x00068d45) form_field_slider_pane

0x9f08,	// (0x00064ea8) form_field_slider_wide_pane_ParamLimits

0x9f08,	// (0x00064ea8) form_field_slider_wide_pane

0x8496,	// (0x00063436) data_form_pane

0x9f25,	// (0x00064ec5) form_field_data_pane_t1

0x84a2,	// (0x00063442) input_focus_pane

0xddb8,	// (0x00068d58) data_form_wide_pane

0xddd5,	// (0x00068d75) form_field_data_wide_pane_t1

0x8396,	// (0x00063336) input_focus_pane_cp6

0x9f3f,	// (0x00064edf) form_field_popup_pane_t1

0x84a2,	// (0x00063442) input_focus_pane_cp7

0x84d0,	// (0x00063470) list_form_pane

0xddff,	// (0x00068d9f) form_field_popup_wide_pane_t1

0x84a2,	// (0x00063442) input_focus_pane_cp8

0x84dc,	// (0x0006347c) list_form_wide_pane

0x9f61,	// (0x00064f01) form_field_slider_pane_t1_ParamLimits

0x9f61,	// (0x00064f01) form_field_slider_pane_t1

0x9f79,	// (0x00064f19) form_field_slider_pane_t2_ParamLimits

0x9f79,	// (0x00064f19) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0006a618) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0006a618) form_field_slider_pane_t

0x820c,	// (0x000631ac) input_focus_pane_cp9_ParamLimits

0x820c,	// (0x000631ac) input_focus_pane_cp9

0x9f8e,	// (0x00064f2e) slider_cont_pane_ParamLimits

0x9f8e,	// (0x00064f2e) slider_cont_pane

0x84e8,	// (0x00063488) form_field_slider_wide_pane_t1_ParamLimits

0x84e8,	// (0x00063488) form_field_slider_wide_pane_t1

0xde14,	// (0x00068db4) form_field_slider_wide_pane_t2_ParamLimits

0xde14,	// (0x00068db4) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0006a61d) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0006a61d) form_field_slider_wide_pane_t

0x820c,	// (0x000631ac) input_focus_pane_cp10_ParamLimits

0x820c,	// (0x000631ac) input_focus_pane_cp10

0x9fa2,	// (0x00064f42) slider_cont_pane_cp1_ParamLimits

0x9fa2,	// (0x00064f42) slider_cont_pane_cp1

0x9fb6,	// (0x00064f56) slider_form_pane_cp

0x84fa,	// (0x0006349a) input_focus_pane_g1

0x8502,	// (0x000634a2) input_focus_pane_g2

0x850a,	// (0x000634aa) input_focus_pane_g3

0x8512,	// (0x000634b2) input_focus_pane_g4

0x851a,	// (0x000634ba) input_focus_pane_g5

0x8522,	// (0x000634c2) input_focus_pane_g6

0x852a,	// (0x000634ca) input_focus_pane_g7

0x8532,	// (0x000634d2) input_focus_pane_g8

0x853a,	// (0x000634da) input_focus_pane_g9

0x808a,	// (0x0006302a) input_focus_pane_g10

0x0009,

0xf682,	// (0x0006a622) input_focus_pane_g

0x2c33,	// (0x0005dbd3) wait_border_pane_g3_copy1

0x9fbe,	// (0x00064f5e) data_form_pane_t1

0x808a,	// (0x0006302a) wait_anim_pane_g1_copy1

0xb255,	// (0x000661f5) data_form_wide_pane_t1

0x9fd8,	// (0x00064f78) list_form_graphic_pane_cp_ParamLimits

0x9fd8,	// (0x00064f78) list_form_graphic_pane_cp

0x3b22,	// (0x0005eac2) slider_form_pane_g1

0x3b2b,	// (0x0005eacb) slider_form_pane_g2

0x0006,

0xf979,	// (0x0006a919) slider_form_pane_g

0x9fd8,	// (0x00064f78) list_form_graphic_pane_ParamLimits

0x9fd8,	// (0x00064f78) list_form_graphic_pane

0x9fea,	// (0x00064f8a) list_form_graphic_pane_g1

0x9ff2,	// (0x00064f92) list_form_graphic_pane_t1_ParamLimits

0x9ff2,	// (0x00064f92) list_form_graphic_pane_t1

0x80e2,	// (0x00063082) list_highlight_pane_cp5_ParamLimits

0x80e2,	// (0x00063082) list_highlight_pane_cp5

0xa007,	// (0x00064fa7) find_pane_g1

0x8542,	// (0x000634e2) input_find_pane

0xa010,	// (0x00064fb0) input_find_pane_g1_ParamLimits

0xa010,	// (0x00064fb0) input_find_pane_g1

0xa01c,	// (0x00064fbc) input_find_pane_t1_ParamLimits

0xa01c,	// (0x00064fbc) input_find_pane_t1

0xa031,	// (0x00064fd1) input_find_pane_t2_ParamLimits

0xa031,	// (0x00064fd1) input_find_pane_t2

0x0001,

0xf697,	// (0x0006a637) input_find_pane_t_ParamLimits

0xf697,	// (0x0006a637) input_find_pane_t

0x854b,	// (0x000634eb) input_focus_pane_cp5_ParamLimits

0x854b,	// (0x000634eb) input_focus_pane_cp5

0x8559,	// (0x000634f9) bg_popup_window_pane_cp2_ParamLimits

0x8559,	// (0x000634f9) bg_popup_window_pane_cp2

0x8566,	// (0x00063506) listscroll_menu_pane_ParamLimits

0x8566,	// (0x00063506) listscroll_menu_pane

0xa052,	// (0x00064ff2) popup_submenu_window_ParamLimits

0xa052,	// (0x00064ff2) popup_submenu_window

0x8572,	// (0x00063512) find_popup_pane_g1

0xa07a,	// (0x0006501a) input_popup_find_pane_cp

0x854b,	// (0x000634eb) input_focus_pane_cp4_ParamLimits

0x854b,	// (0x000634eb) input_focus_pane_cp4

0x857a,	// (0x0006351a) input_popup_find_pane_t1_ParamLimits

0x857a,	// (0x0006351a) input_popup_find_pane_t1

0x8094,	// (0x00063034) bg_popup_sub_pane_cp

0x85a8,	// (0x00063548) listscroll_popup_sub_pane

0x85b0,	// (0x00063550) list_submenu_pane_ParamLimits

0x85b0,	// (0x00063550) list_submenu_pane

0x85c1,	// (0x00063561) scroll_pane_cp4

0xa092,	// (0x00065032) list_single_popup_submenu_pane_ParamLimits

0xa092,	// (0x00065032) list_single_popup_submenu_pane

0xa0a6,	// (0x00065046) list_single_popup_submenu_pane_g1

0xa0ae,	// (0x0006504e) list_single_popup_submenu_pane_t1_ParamLimits

0xa0ae,	// (0x0006504e) list_single_popup_submenu_pane_t1

0x820c,	// (0x000631ac) bg_active_tab_pane_cp1_ParamLimits

0x820c,	// (0x000631ac) bg_active_tab_pane_cp1

0x85c9,	// (0x00063569) tabs_2_active_pane_g1

0xa0c3,	// (0x00065063) tabs_2_active_pane_t1

0x820c,	// (0x000631ac) bg_passive_tab_pane_cp1_ParamLimits

0x820c,	// (0x000631ac) bg_passive_tab_pane_cp1

0x85c9,	// (0x00063569) tabs_2_passive_pane_g1

0xa0c3,	// (0x00065063) tabs_2_passive_pane_t1

0x80e2,	// (0x00063082) bg_active_tab_pane_cp4

0xa0d5,	// (0x00065075) tabs_2_long_active_pane_t1

0x20d0,	// (0x0005d070) bg_passive_tab_pane_cp4

0x0929,	// (0x0005b8c9) list_single_midp_graphic_pane_g4_ParamLimits

0x80e2,	// (0x00063082) bg_active_tab_pane_cp5

0xa0e8,	// (0x00065088) tabs_3_long_active_pane_t1

0x20d0,	// (0x0005d070) bg_passive_tab_pane_cp5

0x0929,	// (0x0005b8c9) list_single_midp_graphic_pane_g4

0x80e2,	// (0x00063082) bg_popup_window_pane_cp13_ParamLimits

0x80e2,	// (0x00063082) bg_popup_window_pane_cp13

0x85d1,	// (0x00063571) listscroll_popup_fast_pane_ParamLimits

0x85d1,	// (0x00063571) listscroll_popup_fast_pane

0x85dd,	// (0x0006357d) grid_popup_fast_pane_ParamLimits

0x85dd,	// (0x0006357d) grid_popup_fast_pane

0x85ef,	// (0x0006358f) scroll_pane_cp9_ParamLimits

0x85ef,	// (0x0006358f) scroll_pane_cp9

0x5609,	// (0x000605a9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5609,	// (0x000605a9) list_single_graphic_hl_pane_t1_cp2

0x8602,	// (0x000635a2) input_focus_pane_cp20_ParamLimits

0x8602,	// (0x000635a2) input_focus_pane_cp20

0x8610,	// (0x000635b0) query_popup_data_pane_t1_ParamLimits

0x8610,	// (0x000635b0) query_popup_data_pane_t1

0x8623,	// (0x000635c3) query_popup_data_pane_t2_ParamLimits

0x8623,	// (0x000635c3) query_popup_data_pane_t2

0x8669,	// (0x00063609) query_popup_data_pane_t3_ParamLimits

0x8669,	// (0x00063609) query_popup_data_pane_t3

0x86aa,	// (0x0006364a) query_popup_data_pane_t4_ParamLimits

0x86aa,	// (0x0006364a) query_popup_data_pane_t4

0x86e6,	// (0x00063686) query_popup_data_pane_t5_ParamLimits

0x86e6,	// (0x00063686) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0006a63c) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0006a63c) query_popup_data_pane_t

0x84fa,	// (0x0006349a) bg_set_opt_pane_g1

0x8502,	// (0x000634a2) bg_set_opt_pane_g2

0x850a,	// (0x000634aa) bg_set_opt_pane_g3

0x8512,	// (0x000634b2) bg_set_opt_pane_g4

0x851a,	// (0x000634ba) bg_set_opt_pane_g5

0x8522,	// (0x000634c2) bg_set_opt_pane_g6

0x852a,	// (0x000634ca) bg_set_opt_pane_g7

0x8532,	// (0x000634d2) bg_set_opt_pane_g8

0x853a,	// (0x000634da) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0006a647) bg_set_opt_pane_g

0xf40d,	// (0x0006a3ad) control_top_pane_stacon_ParamLimits

0xf40d,	// (0x0006a3ad) control_top_pane_stacon

0xf460,	// (0x0006a400) signal_pane_stacon_ParamLimits

0xf460,	// (0x0006a400) signal_pane_stacon

0xde26,	// (0x00068dc6) stacon_top_pane_g1_ParamLimits

0xde26,	// (0x00068dc6) stacon_top_pane_g1

0xf485,	// (0x0006a425) title_pane_stacon_ParamLimits

0xf485,	// (0x0006a425) title_pane_stacon

0xf4af,	// (0x0006a44f) uni_indicator_pane_stacon_ParamLimits

0xf4af,	// (0x0006a44f) uni_indicator_pane_stacon

0xf4c4,	// (0x0006a464) battery_pane_stacon_ParamLimits

0xf4c4,	// (0x0006a464) battery_pane_stacon

0xf508,	// (0x0006a4a8) control_bottom_pane_stacon_ParamLimits

0xf508,	// (0x0006a4a8) control_bottom_pane_stacon

0xf52b,	// (0x0006a4cb) navi_pane_stacon_ParamLimits

0xf52b,	// (0x0006a4cb) navi_pane_stacon

0xde48,	// (0x00068de8) stacon_bottom_pane_g1_ParamLimits

0xde48,	// (0x00068de8) stacon_bottom_pane_g1

0xf1d0,	// (0x0006a170) aid_levels_signal_lsc_ParamLimits

0xf1d0,	// (0x0006a170) aid_levels_signal_lsc

0xf1e6,	// (0x0006a186) signal_pane_stacon_g1_ParamLimits

0xf1e6,	// (0x0006a186) signal_pane_stacon_g1

0xf1fa,	// (0x0006a19a) signal_pane_stacon_g2_ParamLimits

0xf1fa,	// (0x0006a19a) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0006a65a) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0006a65a) signal_pane_stacon_g

0xf22f,	// (0x0006a1cf) title_pane_stacon_t1_ParamLimits

0xf22f,	// (0x0006a1cf) title_pane_stacon_t1

0x872a,	// (0x000636ca) uni_indicator_pane_stacon_g1

0x8734,	// (0x000636d4) uni_indicator_pane_stacon_g2

0x873e,	// (0x000636de) uni_indicator_pane_stacon_g3

0x8748,	// (0x000636e8) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0006a666) uni_indicator_pane_stacon_g

0xf254,	// (0x0006a1f4) control_top_pane_stacon_g1

0xf25c,	// (0x0006a1fc) control_top_pane_stacon_t1_ParamLimits

0xf25c,	// (0x0006a1fc) control_top_pane_stacon_t1

0xf293,	// (0x0006a233) aid_levels_battery_lsc_ParamLimits

0xf293,	// (0x0006a233) aid_levels_battery_lsc

0xf2aa,	// (0x0006a24a) battery_pane_stacon_g1_ParamLimits

0xf2aa,	// (0x0006a24a) battery_pane_stacon_g1

0xf2bd,	// (0x0006a25d) battery_pane_stacon_g2_ParamLimits

0xf2bd,	// (0x0006a25d) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0006a66f) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0006a66f) battery_pane_stacon_g

0xf2fb,	// (0x0006a29b) navi_icon_pane_stacon

0xf30f,	// (0x0006a2af) navi_navi_pane_stacon

0xf2fb,	// (0x0006a29b) navi_text_pane_stacon

0xf254,	// (0x0006a1f4) control_bottom_pane_stacon_g1

0xf323,	// (0x0006a2c3) control_bottom_pane_stacon_t1_ParamLimits

0xf323,	// (0x0006a2c3) control_bottom_pane_stacon_t1

0xa114,	// (0x000650b4) grid_app_pane_ParamLimits

0xa114,	// (0x000650b4) grid_app_pane

0xa14c,	// (0x000650ec) scroll_pane_cp15_ParamLimits

0xa14c,	// (0x000650ec) scroll_pane_cp15

0xa161,	// (0x00065101) cell_app_pane_ParamLimits

0xa161,	// (0x00065101) cell_app_pane

0xa1a6,	// (0x00065146) cell_app_pane_g1_ParamLimits

0xa1a6,	// (0x00065146) cell_app_pane_g1

0x876c,	// (0x0006370c) cell_app_pane_g2_ParamLimits

0x876c,	// (0x0006370c) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0006a674) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0006a674) cell_app_pane_g

0xa1ca,	// (0x0006516a) cell_app_pane_t1_ParamLimits

0xa1ca,	// (0x0006516a) cell_app_pane_t1

0x8778,	// (0x00063718) grid_highlight_pane_ParamLimits

0x8778,	// (0x00063718) grid_highlight_pane

0x84fa,	// (0x0006349a) cell_highlight_pane_g1

0x8502,	// (0x000634a2) cell_highlight_pane_g2

0x850a,	// (0x000634aa) cell_highlight_pane_g3

0x8512,	// (0x000634b2) cell_highlight_pane_g4

0x851a,	// (0x000634ba) cell_highlight_pane_g5

0x8522,	// (0x000634c2) cell_highlight_pane_g6

0x852a,	// (0x000634ca) cell_highlight_pane_g7

0x8532,	// (0x000634d2) cell_highlight_pane_g8

0x853a,	// (0x000634da) cell_highlight_pane_g9

0x808a,	// (0x0006302a) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0006a622) cell_highlight_pane_g

0x8789,	// (0x00063729) bg_scroll_pane

0xa1ea,	// (0x0006518a) scroll_handle_pane

0x87d0,	// (0x00063770) scroll_bg_pane_g1

0x87e5,	// (0x00063785) scroll_bg_pane_g2

0x87fd,	// (0x0006379d) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0006a679) scroll_bg_pane_g

0xa1fe,	// (0x0006519e) scroll_handle_focus_pane_ParamLimits

0xa1fe,	// (0x0006519e) scroll_handle_focus_pane

0x87d0,	// (0x00063770) scroll_handle_pane_g1

0x8812,	// (0x000637b2) scroll_handle_pane_g2

0x87fd,	// (0x0006379d) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0006a680) scroll_handle_pane_g

0x854b,	// (0x000634eb) bg_popup_sub_pane_cp21_ParamLimits

0x854b,	// (0x000634eb) bg_popup_sub_pane_cp21

0xa20b,	// (0x000651ab) popup_fep_japan_predictive_window_t1_ParamLimits

0xa20b,	// (0x000651ab) popup_fep_japan_predictive_window_t1

0xa222,	// (0x000651c2) popup_fep_japan_predictive_window_t2_ParamLimits

0xa222,	// (0x000651c2) popup_fep_japan_predictive_window_t2

0xa255,	// (0x000651f5) popup_fep_japan_predictive_window_t3_ParamLimits

0xa255,	// (0x000651f5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0006a687) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0006a687) popup_fep_japan_predictive_window_t

0x8094,	// (0x00063034) bg_popup_sub_pane_cp23

0xa28c,	// (0x0006522c) listscroll_japin_cand_pane

0x8826,	// (0x000637c6) popup_fep_japan_candidate_window_t1

0xbba2,	// (0x00066b42) candidate_pane_ParamLimits

0xbba2,	// (0x00066b42) candidate_pane

0xa294,	// (0x00065234) scroll_pane_cp30

0xbbb4,	// (0x00066b54) list_single_popup_jap_candidate_pane_ParamLimits

0xbbb4,	// (0x00066b54) list_single_popup_jap_candidate_pane

0x8094,	// (0x00063034) list_highlight_pane_cp30

0xbbc9,	// (0x00066b69) list_single_popup_jap_candidate_pane_t1

0xbbd8,	// (0x00066b78) level_1_signal

0xbbe5,	// (0x00066b85) level_2_signal

0xbbf2,	// (0x00066b92) level_3_signal

0xbbff,	// (0x00066b9f) level_4_signal

0xbc0c,	// (0x00066bac) level_5_signal

0xbc19,	// (0x00066bb9) level_6_signal

0xbc26,	// (0x00066bc6) level_7_signal

0xbbd8,	// (0x00066b78) level_1_battery

0xbbe5,	// (0x00066b85) level_2_battery

0xbbf2,	// (0x00066b92) level_3_battery

0xbbff,	// (0x00066b9f) level_4_battery

0xbc0c,	// (0x00066bac) level_5_battery

0xbc19,	// (0x00066bb9) level_6_battery

0xbc26,	// (0x00066bc6) level_7_battery

0xbc4b,	// (0x00066beb) list_menu_pane_ParamLimits

0xbc4b,	// (0x00066beb) list_menu_pane

0xbc61,	// (0x00066c01) scroll_pane_cp25_ParamLimits

0xbc61,	// (0x00066c01) scroll_pane_cp25

0xa29c,	// (0x0006523c) list_double2_graphic_pane_cp2_ParamLimits

0xa29c,	// (0x0006523c) list_double2_graphic_pane_cp2

0xa29c,	// (0x0006523c) list_double2_large_graphic_pane_cp2_ParamLimits

0xa29c,	// (0x0006523c) list_double2_large_graphic_pane_cp2

0xa29c,	// (0x0006523c) list_double2_pane_cp2_ParamLimits

0xa29c,	// (0x0006523c) list_double2_pane_cp2

0xa29c,	// (0x0006523c) list_double_graphic_pane_cp2_ParamLimits

0xa29c,	// (0x0006523c) list_double_graphic_pane_cp2

0xa29c,	// (0x0006523c) list_double_large_graphic_pane_cp2_ParamLimits

0xa29c,	// (0x0006523c) list_double_large_graphic_pane_cp2

0xa29c,	// (0x0006523c) list_double_number_pane_cp2_ParamLimits

0xa29c,	// (0x0006523c) list_double_number_pane_cp2

0xa29c,	// (0x0006523c) list_double_pane_cp2_ParamLimits

0xa29c,	// (0x0006523c) list_double_pane_cp2

0xa2ab,	// (0x0006524b) list_single_2graphic_pane_cp2_ParamLimits

0xa2ab,	// (0x0006524b) list_single_2graphic_pane_cp2

0xa2ab,	// (0x0006524b) list_single_graphic_heading_pane_cp2_ParamLimits

0xa2ab,	// (0x0006524b) list_single_graphic_heading_pane_cp2

0xa2ab,	// (0x0006524b) list_single_graphic_pane_cp2_ParamLimits

0xa2ab,	// (0x0006524b) list_single_graphic_pane_cp2

0xa2ab,	// (0x0006524b) list_single_heading_pane_cp2_ParamLimits

0xa2ab,	// (0x0006524b) list_single_heading_pane_cp2

0xbc8a,	// (0x00066c2a) list_single_large_graphic_pane_cp2_ParamLimits

0xbc8a,	// (0x00066c2a) list_single_large_graphic_pane_cp2

0xa2ab,	// (0x0006524b) list_single_number_heading_pane_cp2_ParamLimits

0xa2ab,	// (0x0006524b) list_single_number_heading_pane_cp2

0xa2ab,	// (0x0006524b) list_single_number_pane_cp2_ParamLimits

0xa2ab,	// (0x0006524b) list_single_number_pane_cp2

0xa2ab,	// (0x0006524b) list_single_pane_cp2_ParamLimits

0xa2ab,	// (0x0006524b) list_single_pane_cp2

0xbca4,	// (0x00066c44) bg_popup_sub_pane_cp22

0xf3f3,	// (0x0006a393) popup_side_volume_key_window_g1

0xf3ff,	// (0x0006a39f) popup_side_volume_key_window_t1

0xa373,	// (0x00065313) volume_small_pane_cp1

0x820c,	// (0x000631ac) bg_popup_sub_pane_cp24_ParamLimits

0x820c,	// (0x000631ac) bg_popup_sub_pane_cp24

0xbcba,	// (0x00066c5a) fep_china_uni_candidate_pane_ParamLimits

0xbcba,	// (0x00066c5a) fep_china_uni_candidate_pane

0xbcce,	// (0x00066c6e) fep_china_uni_entry_pane

0xbcde,	// (0x00066c7e) popup_fep_china_uni_window_g1

0xa37b,	// (0x0006531b) fep_china_uni_entry_pane_g1

0xa383,	// (0x00065323) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0006a6b8) fep_china_uni_entry_pane_g

0xbcfa,	// (0x00066c9a) fep_entry_item_pane

0xbd04,	// (0x00066ca4) fep_candidate_item_pane

0xa38b,	// (0x0006532b) fep_china_uni_candidate_pane_g1

0xbd0c,	// (0x00066cac) fep_china_uni_candidate_pane_g2

0xbd14,	// (0x00066cb4) fep_china_uni_candidate_pane_g3

0xa393,	// (0x00065333) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0006a6bd) fep_china_uni_candidate_pane_g

0x808a,	// (0x0006302a) fep_entry_item_pane_g1

0xbd1c,	// (0x00066cbc) fep_entry_item_pane_t1_ParamLimits

0xbd1c,	// (0x00066cbc) fep_entry_item_pane_t1

0xbd32,	// (0x00066cd2) fep_candidate_item_pane_t1_ParamLimits

0xbd32,	// (0x00066cd2) fep_candidate_item_pane_t1

0xbd47,	// (0x00066ce7) fep_candidate_item_pane_t2_ParamLimits

0xbd47,	// (0x00066ce7) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0006a6c6) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0006a6c6) fep_candidate_item_pane_t

0x80e2,	// (0x00063082) list_highlight_pane_cp31_ParamLimits

0x80e2,	// (0x00063082) list_highlight_pane_cp31

0xbd59,	// (0x00066cf9) level_1_signal_lsc

0xbd62,	// (0x00066d02) level_2_signal_lsc

0xbd6b,	// (0x00066d0b) level_3_signal_lsc

0xbd74,	// (0x00066d14) level_4_signal_lsc

0xbd7d,	// (0x00066d1d) level_5_signal_lsc

0xbd86,	// (0x00066d26) level_6_signal_lsc

0xbd8f,	// (0x00066d2f) level_7_signal_lsc

0xbd8f,	// (0x00066d2f) level_1_battery_lsc

0xbd98,	// (0x00066d38) level_2_battery_lsc

0xbda1,	// (0x00066d41) level_3_battery_lsc

0xbdaa,	// (0x00066d4a) level_4_battery_lsc

0xbdb3,	// (0x00066d53) level_5_battery_lsc

0xbdbc,	// (0x00066d5c) level_6_battery_lsc

0xbd59,	// (0x00066cf9) level_7_battery_lsc

0xbdc5,	// (0x00066d65) scroll_handle_focus_pane_g1

0xbdce,	// (0x00066d6e) scroll_handle_focus_pane_g2

0xbdd7,	// (0x00066d77) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0006a6cb) scroll_handle_focus_pane_g

0xa39b,	// (0x0006533b) list_single_2graphic_pane_g1_ParamLimits

0xa39b,	// (0x0006533b) list_single_2graphic_pane_g1

0x9b17,	// (0x00064ab7) list_single_2graphic_pane_g2_ParamLimits

0x9b17,	// (0x00064ab7) list_single_2graphic_pane_g2

0xdd38,	// (0x00068cd8) list_single_2graphic_pane_g3_ParamLimits

0xdd38,	// (0x00068cd8) list_single_2graphic_pane_g3

0xa3a7,	// (0x00065347) list_single_2graphic_pane_g4_ParamLimits

0xa3a7,	// (0x00065347) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0006a6d2) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0006a6d2) list_single_2graphic_pane_g

0xa3b3,	// (0x00065353) list_single_2graphic_pane_t1_ParamLimits

0xa3b3,	// (0x00065353) list_single_2graphic_pane_t1

0xa3e1,	// (0x00065381) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa3e1,	// (0x00065381) list_double2_graphic_large_graphic_pane_g1

0x9ce1,	// (0x00064c81) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9ce1,	// (0x00064c81) list_double2_graphic_large_graphic_pane_g2

0x9c2e,	// (0x00064bce) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c2e,	// (0x00064bce) list_double2_graphic_large_graphic_pane_g3

0xa3f3,	// (0x00065393) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa3f3,	// (0x00065393) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0006a6db) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0006a6db) list_double2_graphic_large_graphic_pane_g

0xa3ff,	// (0x0006539f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa3ff,	// (0x0006539f) list_double2_graphic_large_graphic_pane_t1

0xa415,	// (0x000653b5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa415,	// (0x000653b5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0006a6e4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0006a6e4) list_double2_graphic_large_graphic_pane_t

0xa49a,	// (0x0006543a) popup_fast_swap_window_ParamLimits

0xa49a,	// (0x0006543a) popup_fast_swap_window

0xa4b6,	// (0x00065456) popup_side_volume_key_window

0xded3,	// (0x00068e73) stacon_top_pane

0xdedd,	// (0x00068e7d) status_pane_ParamLimits

0xdedd,	// (0x00068e7d) status_pane

0xa4d0,	// (0x00065470) status_small_pane

0x8094,	// (0x00063034) control_pane

0x8094,	// (0x00063034) stacon_bottom_pane

0x8485,	// (0x00063425) scroll_pane_cp121

0x847c,	// (0x0006341c) set_content_pane

0xa427,	// (0x000653c7) bg_active_tab_pane_g1_cp1

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp1

0xa439,	// (0x000653d9) bg_active_tab_pane_g3_cp1

0xa427,	// (0x000653c7) bg_passive_tab_pane_g1_cp1

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp1

0xa439,	// (0x000653d9) bg_passive_tab_pane_g3_cp1

0xa442,	// (0x000653e2) bg_active_tab_pane_g1_cp2

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp2

0xa44b,	// (0x000653eb) bg_active_tab_pane_g3_cp2

0xa442,	// (0x000653e2) bg_passive_tab_pane_g1_cp2

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp2

0xa44b,	// (0x000653eb) bg_passive_tab_pane_g3_cp2

0xa454,	// (0x000653f4) bg_active_tab_pane_g1_cp3

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp3

0xa45d,	// (0x000653fd) bg_active_tab_pane_g3_cp3

0xa454,	// (0x000653f4) bg_passive_tab_pane_g1_cp3

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp3

0xa45d,	// (0x000653fd) bg_passive_tab_pane_g3_cp3

0xa466,	// (0x00065406) bg_active_tab_pane_g1_cp4

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp4

0xa471,	// (0x00065411) bg_active_tab_pane_g3_cp4

0xa466,	// (0x00065406) bg_passive_tab_pane_g1_cp4

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp4

0xa471,	// (0x00065411) bg_passive_tab_pane_g3_cp4

0xa47c,	// (0x0006541c) bg_active_tab_pane_g1_cp5

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp5

0xa485,	// (0x00065425) bg_active_tab_pane_g3_cp5

0xa47c,	// (0x0006541c) bg_passive_tab_pane_g1_cp5

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp5

0xa485,	// (0x00065425) bg_passive_tab_pane_g3_cp5

0x42eb,	// (0x0005f28b) list_set_graphic_pane_ParamLimits

0x42eb,	// (0x0005f28b) list_set_graphic_pane

0x8094,	// (0x00063034) bg_set_opt_pane_cp4

0xde64,	// (0x00068e04) list_set_graphic_pane_g1_ParamLimits

0xde64,	// (0x00068e04) list_set_graphic_pane_g1

0xde70,	// (0x00068e10) list_set_graphic_pane_g2_ParamLimits

0xde70,	// (0x00068e10) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0006a6e9) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0006a6e9) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0006aa6e) volume_small_pane_cp_g

0xa48e,	// (0x0006542e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa48e,	// (0x0006542e) list_double2_large_graphic_pane_g1_cp2

0xde92,	// (0x00068e32) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xde92,	// (0x00068e32) list_double2_large_graphic_pane_g2_cp2

0xdea3,	// (0x00068e43) list_double2_large_graphic_pane_g3_cp2

0xdeab,	// (0x00068e4b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xdeab,	// (0x00068e4b) list_double2_large_graphic_pane_t1_cp2

0xdec1,	// (0x00068e61) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xdec1,	// (0x00068e61) list_double2_large_graphic_pane_t2_cp2

0xc674,	// (0x00067614) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc674,	// (0x00067614) list_double_large_graphic_pane_g1_cp2

0x36f5,	// (0x0005e695) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x36f5,	// (0x0005e695) list_double_large_graphic_pane_g2_cp2

0xdfed,	// (0x00068f8d) list_double_large_graphic_pane_g3_cp2

0x3706,	// (0x0005e6a6) list_double_large_graphic_pane_g4_cp

0x370e,	// (0x0005e6ae) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x370e,	// (0x0005e6ae) list_double_large_graphic_pane_t1_cp2

0x3725,	// (0x0005e6c5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3725,	// (0x0005e6c5) list_double_large_graphic_pane_t2_cp2

0xdeeb,	// (0x00068e8b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xdeeb,	// (0x00068e8b) list_double2_graphic_pane_g1_cp2

0xdef9,	// (0x00068e99) list_double2_graphic_pane_g2_cp2_ParamLimits

0xdef9,	// (0x00068e99) list_double2_graphic_pane_g2_cp2

0xdf0a,	// (0x00068eaa) list_double2_graphic_pane_g3_cp2

0xdf14,	// (0x00068eb4) list_double2_graphic_pane_t1_cp2_ParamLimits

0xdf14,	// (0x00068eb4) list_double2_graphic_pane_t1_cp2

0xdf2a,	// (0x00068eca) list_double2_graphic_pane_t2_cp2_ParamLimits

0xdf2a,	// (0x00068eca) list_double2_graphic_pane_t2_cp2

0xbde0,	// (0x00066d80) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbde0,	// (0x00066d80) list_single_number_heading_pane_g1_cp2

0xdf3c,	// (0x00068edc) list_single_number_heading_pane_g2_cp2

0xdf44,	// (0x00068ee4) list_single_number_heading_pane_t1_cp2_ParamLimits

0xdf44,	// (0x00068ee4) list_single_number_heading_pane_t1_cp2

0xdf5a,	// (0x00068efa) list_single_number_heading_pane_t2_cp2_ParamLimits

0xdf5a,	// (0x00068efa) list_single_number_heading_pane_t2_cp2

0xdf6c,	// (0x00068f0c) list_single_number_heading_pane_t3_cp2_ParamLimits

0xdf6c,	// (0x00068f0c) list_single_number_heading_pane_t3_cp2

0xbde0,	// (0x00066d80) list_single_heading_pane_g1_cp2_ParamLimits

0xbde0,	// (0x00066d80) list_single_heading_pane_g1_cp2

0xdf3c,	// (0x00068edc) list_single_heading_pane_g2_cp2

0xdf44,	// (0x00068ee4) list_single_heading_pane_t1_cp2_ParamLimits

0xdf44,	// (0x00068ee4) list_single_heading_pane_t1_cp2

0x34ee,	// (0x0005e48e) list_single_heading_pane_t2_cp2_ParamLimits

0x34ee,	// (0x0005e48e) list_single_heading_pane_t2_cp2

0x3436,	// (0x0005e3d6) list_double_graphic_pane_g1_cp2_ParamLimits

0x3436,	// (0x0005e3d6) list_double_graphic_pane_g1_cp2

0x3442,	// (0x0005e3e2) list_double_graphic_pane_g2_cp2_ParamLimits

0x3442,	// (0x0005e3e2) list_double_graphic_pane_g2_cp2

0x3451,	// (0x0005e3f1) list_double_graphic_pane_g3_cp2

0x3459,	// (0x0005e3f9) list_double_graphic_pane_t1_cp2_ParamLimits

0x3459,	// (0x0005e3f9) list_double_graphic_pane_t1_cp2

0x346f,	// (0x0005e40f) list_double_graphic_pane_t2_cp2_ParamLimits

0x346f,	// (0x0005e40f) list_double_graphic_pane_t2_cp2

0xdfe1,	// (0x00068f81) list_double_number_pane_g1_cp2_ParamLimits

0xdfe1,	// (0x00068f81) list_double_number_pane_g1_cp2

0xdfed,	// (0x00068f8d) list_double_number_pane_g2_cp2

0x33fa,	// (0x0005e39a) list_double_number_pane_t1_cp2_ParamLimits

0x33fa,	// (0x0005e39a) list_double_number_pane_t1_cp2

0x340e,	// (0x0005e3ae) list_double_number_pane_t2_cp2_ParamLimits

0x340e,	// (0x0005e3ae) list_double_number_pane_t2_cp2

0x3424,	// (0x0005e3c4) list_double_number_pane_t3_cp2_ParamLimits

0x3424,	// (0x0005e3c4) list_double_number_pane_t3_cp2

0x32e3,	// (0x0005e283) list_single_graphic_pane_g1_cp2_ParamLimits

0x32e3,	// (0x0005e283) list_single_graphic_pane_g1_cp2

0xe03d,	// (0x00068fdd) list_single_graphic_pane_g2_cp2_ParamLimits

0xe03d,	// (0x00068fdd) list_single_graphic_pane_g2_cp2

0xe049,	// (0x00068fe9) list_single_graphic_pane_g3_cp2

0x32b9,	// (0x0005e259) list_single_graphic_pane_t1_cp2_ParamLimits

0x32b9,	// (0x0005e259) list_single_graphic_pane_t1_cp2

0xe03d,	// (0x00068fdd) list_single_number_pane_g1_cp2_ParamLimits

0xe03d,	// (0x00068fdd) list_single_number_pane_g1_cp2

0xe049,	// (0x00068fe9) list_single_number_pane_g2_cp2

0x32b9,	// (0x0005e259) list_single_number_pane_t1_cp2_ParamLimits

0x32b9,	// (0x0005e259) list_single_number_pane_t1_cp2

0x32cf,	// (0x0005e26f) list_single_number_pane_t2_cp2_ParamLimits

0x32cf,	// (0x0005e26f) list_single_number_pane_t2_cp2

0xde92,	// (0x00068e32) list_double2_pane_g1_cp2_ParamLimits

0xde92,	// (0x00068e32) list_double2_pane_g1_cp2

0xdea3,	// (0x00068e43) list_double2_pane_g2_cp2

0xdfb9,	// (0x00068f59) list_double2_pane_t1_cp2_ParamLimits

0xdfb9,	// (0x00068f59) list_double2_pane_t1_cp2

0xdfcf,	// (0x00068f6f) list_double2_pane_t2_cp2_ParamLimits

0xdfcf,	// (0x00068f6f) list_double2_pane_t2_cp2

0xdfe1,	// (0x00068f81) list_double_pane_g1_cp2_ParamLimits

0xdfe1,	// (0x00068f81) list_double_pane_g1_cp2

0xdfed,	// (0x00068f8d) list_double_pane_g2_cp2

0xdff5,	// (0x00068f95) list_double_pane_t1_cp2_ParamLimits

0xdff5,	// (0x00068f95) list_double_pane_t1_cp2

0xe00b,	// (0x00068fab) list_double_pane_t2_cp2_ParamLimits

0xe00b,	// (0x00068fab) list_double_pane_t2_cp2

0xa4db,	// (0x0006547b) list_single_pane_cp2_g3

0xe03d,	// (0x00068fdd) list_single_pane_g1_cp2_ParamLimits

0xe03d,	// (0x00068fdd) list_single_pane_g1_cp2

0xe049,	// (0x00068fe9) list_single_pane_g2_cp2

0xe051,	// (0x00068ff1) list_single_pane_t1_cp2_ParamLimits

0xe051,	// (0x00068ff1) list_single_pane_t1_cp2

0xa4e3,	// (0x00065483) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa4e3,	// (0x00065483) list_single_large_graphic_pane_g1_cp2

0xe069,	// (0x00069009) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe069,	// (0x00069009) list_single_large_graphic_pane_g2_cp2

0xe075,	// (0x00069015) list_single_large_graphic_pane_g3_cp2

0xa4ef,	// (0x0006548f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa4ef,	// (0x0006548f) list_single_large_graphic_pane_g4_cp1

0xe07d,	// (0x0006901d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe07d,	// (0x0006901d) list_single_large_graphic_pane_t1_cp2

0x3285,	// (0x0005e225) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3285,	// (0x0005e225) list_single_graphic_heading_pane_g1_cp2

0x3252,	// (0x0005e1f2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3252,	// (0x0005e1f2) list_single_graphic_heading_pane_g4_cp2

0xe049,	// (0x00068fe9) list_single_graphic_heading_pane_g5_cp2

0x3291,	// (0x0005e231) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3291,	// (0x0005e231) list_single_graphic_heading_pane_t1_cp2

0x32a7,	// (0x0005e247) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x32a7,	// (0x0005e247) list_single_graphic_heading_pane_t2_cp2

0x3246,	// (0x0005e1e6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3246,	// (0x0005e1e6) list_single_2graphic_pane_g1_cp2

0x3252,	// (0x0005e1f2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3252,	// (0x0005e1f2) list_single_2graphic_pane_g2_cp2

0xe049,	// (0x00068fe9) list_single_2graphic_pane_g3_cp2

0x3263,	// (0x0005e203) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3263,	// (0x0005e203) list_single_2graphic_pane_g4_cp2

0x326f,	// (0x0005e20f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x326f,	// (0x0005e20f) list_single_2graphic_pane_t1_cp2

0x808a,	// (0x0006302a) list_highlight_pane_g10_cp1

0x2e2e,	// (0x0005ddce) list_highlight_pane_g1_cp1

0x2e36,	// (0x0005ddd6) list_highlight_pane_g2_cp1

0x2e3e,	// (0x0005ddde) list_highlight_pane_g3_cp1

0x2e46,	// (0x0005dde6) list_highlight_pane_g4_cp1

0x2e4e,	// (0x0005ddee) list_highlight_pane_g5_cp1

0x2e56,	// (0x0005ddf6) list_highlight_pane_g6_cp1

0x2e5e,	// (0x0005ddfe) list_highlight_pane_g7_cp1

0x2e66,	// (0x0005de06) list_highlight_pane_g8_cp1

0x2e6e,	// (0x0005de0e) list_highlight_pane_g9_cp1

0xc409,	// (0x000673a9) form_field_slider_pane_t3

0xc417,	// (0x000673b7) form_field_slider_pane_t4

0x2d72,	// (0x0005dd12) slider_form_pane_ParamLimits

0x2d72,	// (0x0005dd12) slider_form_pane

0x8094,	// (0x00063034) control_abbreviations

0x8094,	// (0x00063034) control_conventions

0x8094,	// (0x00063034) control_definitions

0x8094,	// (0x00063034) format_table_attribute

0xc64b,	// (0x000675eb) bg_popup_preview_window_pane_g9

0x8094,	// (0x00063034) format_table_data2

0x8094,	// (0x00063034) format_table_data3

0x8094,	// (0x00063034) format_table_data_example

0x0008,

0x8094,	// (0x00063034) intro_purpose

0xf8d9,	// (0x0006a879) bg_popup_preview_window_pane_g

0x8094,	// (0x00063034) texts_category

0x8094,	// (0x00063034) texts_graphics

0xe093,	// (0x00069033) text_digital

0xe0a2,	// (0x00069042) text_primary

0xe0b1,	// (0x00069051) text_primary_small

0xe0c0,	// (0x00069060) text_secondary

0xe0cf,	// (0x0006906f) text_title

0xc9d5,	// (0x00067975) bg_passive_tab_pane_g1_cp3_srt

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp3_srt

0xc9de,	// (0x0006797e) bg_passive_tab_pane_g3_cp3_srt

0x820c,	// (0x000631ac) bg_active_tab_pane_cp3_srt_ParamLimits

0x820c,	// (0x000631ac) bg_active_tab_pane_cp3_srt

0xc9e7,	// (0x00067987) tabs_4_active_pane_srt_g1

0xc9ef,	// (0x0006798f) tabs_4_active_pane_srt_t1_ParamLimits

0xc9ef,	// (0x0006798f) tabs_4_active_pane_srt_t1

0xc9d5,	// (0x00067975) bg_active_tab_pane_g1_cp3_copy1

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp3_copy1

0xc9de,	// (0x0006797e) bg_active_tab_pane_g3_cp3_copy1

0x80e2,	// (0x00063082) tabs_2_long_active_pane_srt_ParamLimits

0x80e2,	// (0x00063082) tabs_2_long_active_pane_srt

0x80e2,	// (0x00063082) tabs_2_long_passive_pane_srt_ParamLimits

0x80e2,	// (0x00063082) tabs_2_long_passive_pane_srt

0x20d0,	// (0x0005d070) bg_passive_tab_pane_cp4_srt_ParamLimits

0x20d0,	// (0x0005d070) bg_passive_tab_pane_cp4_srt

0xc763,	// (0x00067703) bg_passive_tab_pane_g1_cp4_srt

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp4_srt

0xc76c,	// (0x0006770c) bg_passive_tab_pane_g3_cp4_srt

0x80e2,	// (0x00063082) bg_active_tab_pane_cp4_srt_ParamLimits

0x80e2,	// (0x00063082) bg_active_tab_pane_cp4_srt

0xc775,	// (0x00067715) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc775,	// (0x00067715) tabs_2_long_active_pane_srt_t1

0xc763,	// (0x00067703) bg_active_tab_pane_g1_cp4_srt

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp4_srt

0xc76c,	// (0x0006770c) bg_active_tab_pane_g3_cp4_srt

0x820c,	// (0x000631ac) tabs_3_long_active_pane_srt_ParamLimits

0x820c,	// (0x000631ac) tabs_3_long_active_pane_srt

0x820c,	// (0x000631ac) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x820c,	// (0x000631ac) tabs_3_long_passive_pane_cp_srt

0x820c,	// (0x000631ac) tabs_3_long_passive_pane_srt_ParamLimits

0x820c,	// (0x000631ac) tabs_3_long_passive_pane_srt

0x20d0,	// (0x0005d070) bg_passive_tab_pane_cp5_srt_ParamLimits

0x20d0,	// (0x0005d070) bg_passive_tab_pane_cp5_srt

0xa47c,	// (0x0006541c) bg_passive_tab_pane_g1_cp5_srt

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp5_srt

0xa485,	// (0x00065425) bg_passive_tab_pane_g3_cp5_srt

0x80e2,	// (0x00063082) bg_active_tab_pane_cp5_srt_ParamLimits

0x80e2,	// (0x00063082) bg_active_tab_pane_cp5_srt

0xc74d,	// (0x000676ed) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc74d,	// (0x000676ed) tabs_3_long_active_pane_srt_t1

0xa47c,	// (0x0006541c) bg_active_tab_pane_g1_cp5_srt

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp5_srt

0xa485,	// (0x00065425) bg_active_tab_pane_g3_cp5_srt

0x3939,	// (0x0005e8d9) navi_text_pane_srt_t1

0x3931,	// (0x0005e8d1) navi_icon_pane_srt_g1

0x1f72,	// (0x0005cf12) midp_editing_number_pane_srt

0xe0de,	// (0x0006907e) midp_ticker_pane_srt

0x1f7a,	// (0x0005cf1a) midp_ticker_pane_srt_g1

0x1f82,	// (0x0005cf22) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0006a708) midp_ticker_pane_srt_g

0x1f8a,	// (0x0005cf2a) midp_ticker_pane_srt_t1

0x3922,	// (0x0005e8c2) midp_editing_number_pane_t1_copy1

0xa509,	// (0x000654a9) listscroll_midp_pane

0xa509,	// (0x000654a9) midp_form_pane

0xa574,	// (0x00065514) midp_info_popup_window_ParamLimits

0xa574,	// (0x00065514) midp_info_popup_window

0x854b,	// (0x000634eb) bg_popup_sub_pane_cp50_ParamLimits

0x854b,	// (0x000634eb) bg_popup_sub_pane_cp50

0x2a6a,	// (0x0005da0a) listscroll_midp_info_pane_ParamLimits

0x2a6a,	// (0x0005da0a) listscroll_midp_info_pane

0x2a4a,	// (0x0005d9ea) listscroll_form_midp_pane_ParamLimits

0x2a4a,	// (0x0005d9ea) listscroll_form_midp_pane

0x2a56,	// (0x0005d9f6) scroll_bar_cp050

0x2a4a,	// (0x0005d9ea) list_midp_pane

0xcb91,	// (0x00067b31) signal_pane_g2_cp

0x2964,	// (0x0005d904) listscroll_midp_info_pane_t1_ParamLimits

0x2964,	// (0x0005d904) listscroll_midp_info_pane_t1

0xc243,	// (0x000671e3) listscroll_midp_info_pane_t2_ParamLimits

0xc243,	// (0x000671e3) listscroll_midp_info_pane_t2

0xc281,	// (0x00067221) listscroll_midp_info_pane_t3_ParamLimits

0xc281,	// (0x00067221) listscroll_midp_info_pane_t3

0xc2bb,	// (0x0006725b) listscroll_midp_info_pane_t4_ParamLimits

0xc2bb,	// (0x0006725b) listscroll_midp_info_pane_t4

0x0003,

0xf814,	// (0x0006a7b4) listscroll_midp_info_pane_t_ParamLimits

0xf814,	// (0x0006a7b4) listscroll_midp_info_pane_t

0x85c1,	// (0x00063561) scroll_pane_cp21

0x2904,	// (0x0005d8a4) form_midp_field_choice_group_pane

0xc206,	// (0x000671a6) form_midp_field_text_pane

0x294a,	// (0x0005d8ea) form_midp_field_time_pane

0x2952,	// (0x0005d8f2) form_midp_gauge_slider_pane

0x295b,	// (0x0005d8fb) form_midp_gauge_wait_pane

0x8094,	// (0x00063034) form_midp_image_pane

0xb169,	// (0x00066109) list_single_midp_pane_ParamLimits

0xb169,	// (0x00066109) list_single_midp_pane

0xc1e4,	// (0x00067184) form_midp_field_text_pane_t1

0x2683,	// (0x0005d623) input_focus_pane_cp050

0x28f3,	// (0x0005d893) list_midp_form_text_pane

0x2888,	// (0x0005d828) form_midp_field_choice_group_pane_t1

0x2896,	// (0x0005d836) input_focus_pane_cp051

0x28aa,	// (0x0005d84a) list_midp_choice_pane

0x8094,	// (0x00063034) status_idle_pane

0x286c,	// (0x0005d80c) form_midp_field_time_pane_t1

0x808a,	// (0x0006302a) wait_anim_pane_g2_copy1

0x287a,	// (0x0005d81a) form_midp_field_time_pane_t2

0x0001,

0x0059,	// (0x0005aff9) aid_navinavi_width_2_pane

0xf80f,	// (0x0006a7af) form_midp_field_time_pane_t

0x8094,	// (0x00063034) input_focus_pane_cp052

0x8094,	// (0x00063034) bg_input_focus_pane_cp040

0x282c,	// (0x0005d7cc) form_midp_gauge_slider_pane_t1

0x283a,	// (0x0005d7da) form_midp_gauge_slider_pane_t2

0xc1c8,	// (0x00067168) form_midp_gauge_slider_pane_t3

0xc1d6,	// (0x00067176) form_midp_gauge_slider_pane_t4

0x0003,

0xf806,	// (0x0006a7a6) form_midp_gauge_slider_pane_t

0x2864,	// (0x0005d804) form_midp_slider_pane

0x80e2,	// (0x00063082) bg_input_focus_pane_cp041_ParamLimits

0x80e2,	// (0x00063082) bg_input_focus_pane_cp041

0x27f9,	// (0x0005d799) form_midp_gauge_wait_pane_t1_ParamLimits

0x27f9,	// (0x0005d799) form_midp_gauge_wait_pane_t1

0x280b,	// (0x0005d7ab) form_midp_gauge_wait_pane_t2_ParamLimits

0x280b,	// (0x0005d7ab) form_midp_gauge_wait_pane_t2

0x0001,

0xf801,	// (0x0006a7a1) form_midp_gauge_wait_pane_t_ParamLimits

0xf801,	// (0x0006a7a1) form_midp_gauge_wait_pane_t

0x281d,	// (0x0005d7bd) form_midp_wait_pane_ParamLimits

0x281d,	// (0x0005d7bd) form_midp_wait_pane

0xc192,	// (0x00067132) form_midp_image_pane_g1

0xc19b,	// (0x0006713b) form_midp_image_pane_t1

0xc1aa,	// (0x0006714a) form_midp_image_pane_t2

0xc1b9,	// (0x00067159) form_midp_image_pane_t3

0x0002,

0xf7fa,	// (0x0006a79a) form_midp_image_pane_t

0x27ba,	// (0x0005d75a) list_single_midp_pane_g1

0xe1f2,	// (0x00069192) list_single_midp_pane_t1

0xc17d,	// (0x0006711d) list_midp_form_item_pane_ParamLimits

0xc17d,	// (0x0006711d) list_midp_form_item_pane

0x0001,	// (0x0005afa1) list_midp_form_item_pane_t1

0x0010,	// (0x0005afb0) midp_ticker_pane_g1

0x001c,	// (0x0005afbc) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0006a6ee) midp_ticker_pane_g

0x0028,	// (0x0005afc8) midp_ticker_pane_t1

0x3b6f,	// (0x0005eb0f) midp_editing_number_pane_t1

0x3b4d,	// (0x0005eaed) midp_editing_number_pane

0x3b5c,	// (0x0005eafc) midp_ticker_pane

0x3912,	// (0x0005e8b2) ai_message_heading_pane

0x8094,	// (0x00063034) bg_popup_window_pane_cp14

0x391a,	// (0x0005e8ba) listscroll_ai_message_pane

0x389c,	// (0x0005e83c) ai_message_heading_pane_g1_ParamLimits

0x389c,	// (0x0005e83c) ai_message_heading_pane_g1

0xc715,	// (0x000676b5) ai_message_heading_pane_g2_ParamLimits

0xc715,	// (0x000676b5) ai_message_heading_pane_g2

0x38b4,	// (0x0005e854) ai_message_heading_pane_g3_ParamLimits

0x38b4,	// (0x0005e854) ai_message_heading_pane_g3

0x38c0,	// (0x0005e860) ai_message_heading_pane_g4_ParamLimits

0x38c0,	// (0x0005e860) ai_message_heading_pane_g4

0x0003,

0xf93b,	// (0x0006a8db) ai_message_heading_pane_g_ParamLimits

0xf93b,	// (0x0006a8db) ai_message_heading_pane_g

0xc721,	// (0x000676c1) ai_message_heading_pane_t1_ParamLimits

0xc721,	// (0x000676c1) ai_message_heading_pane_t1

0xc73b,	// (0x000676db) ai_message_heading_pane_t2_ParamLimits

0xc73b,	// (0x000676db) ai_message_heading_pane_t2

0x0001,

0xf944,	// (0x0006a8e4) ai_message_heading_pane_t_ParamLimits

0xf944,	// (0x0006a8e4) ai_message_heading_pane_t

0x38f8,	// (0x0005e898) bg_popup_heading_pane_cp1_ParamLimits

0x38f8,	// (0x0005e898) bg_popup_heading_pane_cp1

0x388a,	// (0x0005e82a) list_ai_message_pane_ParamLimits

0x388a,	// (0x0005e82a) list_ai_message_pane

0x85c1,	// (0x00063561) scroll_pane_cp10

0x3826,	// (0x0005e7c6) list_ai_message_pane_g1

0x382e,	// (0x0005e7ce) list_ai_message_pane_g2

0x0001,

0xf918,	// (0x0006a8b8) list_ai_message_pane_g

0x3836,	// (0x0005e7d6) list_ai_message_pane_t1_ParamLimits

0x3836,	// (0x0005e7d6) list_ai_message_pane_t1

0x384b,	// (0x0005e7eb) list_ai_message_pane_t2_ParamLimits

0x384b,	// (0x0005e7eb) list_ai_message_pane_t2

0x3860,	// (0x0005e800) list_ai_message_pane_t3_ParamLimits

0x3860,	// (0x0005e800) list_ai_message_pane_t3

0x3875,	// (0x0005e815) list_ai_message_pane_t4_ParamLimits

0x3875,	// (0x0005e815) list_ai_message_pane_t4

0x0003,

0xf91d,	// (0x0006a8bd) list_ai_message_pane_t_ParamLimits

0xf91d,	// (0x0006a8bd) list_ai_message_pane_t

0xc6f1,	// (0x00067691) cell_ai_soft_ind_pane_ParamLimits

0xc6f1,	// (0x00067691) cell_ai_soft_ind_pane

0x003a,	// (0x0005afda) cell_ai_soft_ind_pane_g1_ParamLimits

0x003a,	// (0x0005afda) cell_ai_soft_ind_pane_g1

0x8094,	// (0x00063034) grid_highlight_cp1

0x0047,	// (0x0005afe7) text_secondary_cp56_ParamLimits

0x0047,	// (0x0005afe7) text_secondary_cp56

0x37e6,	// (0x0005e786) example_general_pane_ParamLimits

0x37e6,	// (0x0005e786) example_general_pane

0x37f2,	// (0x0005e792) example_parent_pane_g1_ParamLimits

0x37f2,	// (0x0005e792) example_parent_pane_g1

0x37fe,	// (0x0005e79e) example_parent_pane_t1_ParamLimits

0x37fe,	// (0x0005e79e) example_parent_pane_t1

0xac7e,	// (0x00065c1e) popup_preview_text_window_ParamLimits

0xac7e,	// (0x00065c1e) popup_preview_text_window

0xe035,	// (0x00068fd5) list_single_pane_cp2_g4

0x82c2,	// (0x00063262) bg_popup_preview_window_pane_ParamLimits

0x82c2,	// (0x00063262) bg_popup_preview_window_pane

0xc653,	// (0x000675f3) popup_preview_text_window_t1_ParamLimits

0xc653,	// (0x000675f3) popup_preview_text_window_t1

0x355e,	// (0x0005e4fe) popup_preview_text_window_t2_ParamLimits

0x355e,	// (0x0005e4fe) popup_preview_text_window_t2

0x35a7,	// (0x0005e547) popup_preview_text_window_t3_ParamLimits

0x35a7,	// (0x0005e547) popup_preview_text_window_t3

0x35ec,	// (0x0005e58c) popup_preview_text_window_t4_ParamLimits

0x35ec,	// (0x0005e58c) popup_preview_text_window_t4

0x0004,

0xf8ec,	// (0x0006a88c) popup_preview_text_window_t_ParamLimits

0xf8ec,	// (0x0006a88c) popup_preview_text_window_t

0x366a,	// (0x0005e60a) scroll_pane_cp11

0x25f7,	// (0x0005d597) bg_popup_preview_window_pane_g1

0xc613,	// (0x000675b3) bg_popup_preview_window_pane_g2

0xc61b,	// (0x000675bb) bg_popup_preview_window_pane_g3

0xc623,	// (0x000675c3) bg_popup_preview_window_pane_g4

0xc62b,	// (0x000675cb) bg_popup_preview_window_pane_g5

0xc633,	// (0x000675d3) bg_popup_preview_window_pane_g6

0xc63b,	// (0x000675db) bg_popup_preview_window_pane_g7

0xc643,	// (0x000675e3) bg_popup_preview_window_pane_g8

0xdcf3,	// (0x00068c93) aid_popup_width_pane

0xabfa,	// (0x00065b9a) popup_midp_note_alarm_window_ParamLimits

0xabfa,	// (0x00065b9a) popup_midp_note_alarm_window

0x8496,	// (0x00063436) data_form_pane_ParamLimits

0x9f1b,	// (0x00064ebb) form_field_data_pane_g1

0x9f25,	// (0x00064ec5) form_field_data_pane_t1_ParamLimits

0x84a2,	// (0x00063442) input_focus_pane_ParamLimits

0xddb8,	// (0x00068d58) data_form_wide_pane_ParamLimits

0xddc9,	// (0x00068d69) form_field_data_wide_pane_g1

0xddd5,	// (0x00068d75) form_field_data_wide_pane_t1_ParamLimits

0x8396,	// (0x00063336) input_focus_pane_cp6_ParamLimits

0xa084,	// (0x00065024) input_popup_find_pane_g1_ParamLimits

0xa084,	// (0x00065024) input_popup_find_pane_g1

0xf2ce,	// (0x0006a26e) aid_navi_side_left_pane

0xf2e3,	// (0x0006a283) aid_navi_side_right_pane

0x2f29,	// (0x0005dec9) bg_popup_window_pane_cp30_ParamLimits

0x2f29,	// (0x0005dec9) bg_popup_window_pane_cp30

0x2fa3,	// (0x0005df43) popup_midp_note_alarm_window_g1_ParamLimits

0x2fa3,	// (0x0005df43) popup_midp_note_alarm_window_g1

0x2fd3,	// (0x0005df73) popup_midp_note_alarm_window_t1_ParamLimits

0x2fd3,	// (0x0005df73) popup_midp_note_alarm_window_t1

0xc45c,	// (0x000673fc) popup_midp_note_alarm_window_t2_ParamLimits

0xc45c,	// (0x000673fc) popup_midp_note_alarm_window_t2

0xc50a,	// (0x000674aa) popup_midp_note_alarm_window_t3_ParamLimits

0xc50a,	// (0x000674aa) popup_midp_note_alarm_window_t3

0xc532,	// (0x000674d2) popup_midp_note_alarm_window_t4_ParamLimits

0xc532,	// (0x000674d2) popup_midp_note_alarm_window_t4

0x316a,	// (0x0005e10a) popup_midp_note_alarm_window_t5_ParamLimits

0x316a,	// (0x0005e10a) popup_midp_note_alarm_window_t5

0x000a,

0xf889,	// (0x0006a829) popup_midp_note_alarm_window_t_ParamLimits

0xf889,	// (0x0006a829) popup_midp_note_alarm_window_t

0x3216,	// (0x0005e1b6) wait_bar_pane_cp1_ParamLimits

0x3216,	// (0x0005e1b6) wait_bar_pane_cp1

0x8094,	// (0x00063034) wait_anim_pane_copy1

0x8094,	// (0x00063034) wait_border_pane_copy1

0x2c1f,	// (0x0005dbbf) wait_border_pane_g1_copy1

0xddef,	// (0x00068d8f) form_field_popup_pane_g1

0x9f3f,	// (0x00064edf) form_field_popup_pane_t1_ParamLimits

0x84a2,	// (0x00063442) input_focus_pane_cp7_ParamLimits

0x84d0,	// (0x00063470) list_form_pane_ParamLimits

0xddf7,	// (0x00068d97) form_field_popup_wide_pane_g1

0xddff,	// (0x00068d9f) form_field_popup_wide_pane_t1_ParamLimits

0x84a2,	// (0x00063442) input_focus_pane_cp8_ParamLimits

0x84dc,	// (0x0006347c) list_form_wide_pane_ParamLimits

0xca48,	// (0x000679e8) aid_size_cell_graphic_pane

0x9fbe,	// (0x00064f5e) data_form_pane_t1_ParamLimits

0xb255,	// (0x000661f5) data_form_wide_pane_t1_ParamLimits

0xbdec,	// (0x00066d8c) bg_status_flat_pane

0x9484,	// (0x00064424) title_pane_t1_ParamLimits

0x80aa,	// (0x0006304a) title_pane_t2_ParamLimits

0x80d0,	// (0x00063070) title_pane_t3_ParamLimits

0xf557,	// (0x0006a4f7) title_pane_t_ParamLimits

0xbbd8,	// (0x00066b78) level_1_signal_ParamLimits

0xbbe5,	// (0x00066b85) level_2_signal_ParamLimits

0xbbf2,	// (0x00066b92) level_3_signal_ParamLimits

0xbbff,	// (0x00066b9f) level_4_signal_ParamLimits

0xbc0c,	// (0x00066bac) level_5_signal_ParamLimits

0xbc19,	// (0x00066bb9) level_6_signal_ParamLimits

0xbc26,	// (0x00066bc6) level_7_signal_ParamLimits

0xbbd8,	// (0x00066b78) level_1_battery_ParamLimits

0xbbe5,	// (0x00066b85) level_2_battery_ParamLimits

0xbbf2,	// (0x00066b92) level_3_battery_ParamLimits

0xbbff,	// (0x00066b9f) level_4_battery_ParamLimits

0xbc0c,	// (0x00066bac) level_5_battery_ParamLimits

0xbc19,	// (0x00066bb9) level_6_battery_ParamLimits

0xbc26,	// (0x00066bc6) level_7_battery_ParamLimits

0x2e2e,	// (0x0005ddce) bg_status_flat_pane_g1

0x2e36,	// (0x0005ddd6) bg_status_flat_pane_g2

0x2e3e,	// (0x0005ddde) bg_status_flat_pane_g3

0x2e46,	// (0x0005dde6) bg_status_flat_pane_g4

0x2e4e,	// (0x0005ddee) bg_status_flat_pane_g5

0x2e56,	// (0x0005ddf6) bg_status_flat_pane_g6

0x2e5e,	// (0x0005ddfe) bg_status_flat_pane_g7

0x9518,	// (0x000644b8) tabs_3_active_pane_t1_ParamLimits

0x9518,	// (0x000644b8) tabs_3_passive_pane_t1_ParamLimits

0x9532,	// (0x000644d2) tabs_4_active_pane_t1_ParamLimits

0x9532,	// (0x000644d2) tabs_4_1_passive_pane_t1_ParamLimits

0xa0c3,	// (0x00065063) tabs_2_active_pane_t1_ParamLimits

0xa0c3,	// (0x00065063) tabs_2_passive_pane_t1_ParamLimits

0x80e2,	// (0x00063082) bg_active_tab_pane_cp4_ParamLimits

0xa0d5,	// (0x00065075) tabs_2_long_active_pane_t1_ParamLimits

0x20d0,	// (0x0005d070) bg_passive_tab_pane_cp4_ParamLimits

0x095d,	// (0x0005b8fd) list_single_midp_graphic_pane_t1_ParamLimits

0x80e2,	// (0x00063082) bg_active_tab_pane_cp5_ParamLimits

0xa0e8,	// (0x00065088) tabs_3_long_active_pane_t1_ParamLimits

0x20d0,	// (0x0005d070) bg_passive_tab_pane_cp5_ParamLimits

0x095d,	// (0x0005b8fd) list_single_midp_graphic_pane_t1

0xbdec,	// (0x00066d8c) bg_status_flat_pane_ParamLimits

0x228a,	// (0x0005d22a) indicator_pane_cp2_ParamLimits

0x228a,	// (0x0005d22a) indicator_pane_cp2

0xbf6a,	// (0x00066f0a) navi_pane_srt_ParamLimits

0xbf6a,	// (0x00066f0a) navi_pane_srt

0x23d9,	// (0x0005d379) popup_clock_digital_analogue_window_cp1

0x8126,	// (0x000630c6) indicator_pane_t1

0xe0de,	// (0x0006907e) copy_highlight_pane

0xe0de,	// (0x0006907e) cursor_graphics_pane

0xe0de,	// (0x0006907e) graphic_within_text_pane

0xe0de,	// (0x0006907e) link_highlight_pane

0x362d,	// (0x0005e5cd) popup_preview_text_window_t5_ParamLimits

0x362d,	// (0x0005e5cd) popup_preview_text_window_t5

0x0061,	// (0x0005b001) cursor_digital_pane

0x0061,	// (0x0005b001) cursor_primary_pane

0x0072,	// (0x0005b012) cursor_primary_small_pane

0x007a,	// (0x0005b01a) cursor_secondary_pane

0x0082,	// (0x0005b022) cursor_title_pane

0x0061,	// (0x0005b001) link_highlight_digital_pane

0x0069,	// (0x0005b009) link_highlight_primary_pane

0x0072,	// (0x0005b012) link_highlight_primary_small_pane

0x007a,	// (0x0005b01a) link_highlight_secondary_pane

0x0082,	// (0x0005b022) link_highlight_title_pane

0x0061,	// (0x0005b001) copy_highlight_digital_pane

0x0061,	// (0x0005b001) copy_highlight_primary_pane

0x0072,	// (0x0005b012) copy_highlight_primary_small_pane

0x007a,	// (0x0005b01a) copy_highlight_secondary_pane

0x0082,	// (0x0005b022) copy_highlight_title_pane

0x007a,	// (0x0005b01a) graphic_text_digital_pane

0x2ecc,	// (0x0005de6c) graphic_text_primary_pane

0x2ed5,	// (0x0005de75) graphic_text_primary_small_pane

0x0072,	// (0x0005b012) graphic_text_secondary_pane

0x0061,	// (0x0005b001) graphic_text_title_pane

0xa5c5,	// (0x00065565) cursor_primary_pane_g1

0x2ebe,	// (0x0005de5e) cursor_text_primary_t1

0xc452,	// (0x000673f2) cursor_primary_small_pane_g1

0x2eb0,	// (0x0005de50) cursor_text_primary_small_t1

0xc448,	// (0x000673e8) cursor_primary_small_pane_g1_copy1

0x2e98,	// (0x0005de38) cursor_text_primary_small_t1_copy1

0x2e76,	// (0x0005de16) cursor_text_title_t1

0xc43e,	// (0x000673de) cursor_title_pane_g1

0xa5c5,	// (0x00065565) cursor_digital_pane_g1

0x0094,	// (0x0005b034) cursor_text_digital_t1

0x00a2,	// (0x0005b042) link_highlight_primary_pane_g1

0x2e1f,	// (0x0005ddbf) link_highlight_primary_pane_t1

0x00a2,	// (0x0005b042) link_highlight_primary_small_pane_g1

0x00aa,	// (0x0005b04a) link_highlight_primary_small_pane_t1

0x00a2,	// (0x0005b042) link_highlight_secondary_pane_g1

0x00b9,	// (0x0005b059) link_highlight_secondary_pane_t1

0x2d84,	// (0x0005dd24) link_highlight_title_pane_g1

0x2d9b,	// (0x0005dd3b) link_highlight_title_pane_t1

0x2d84,	// (0x0005dd24) link_highlight_digital_pane_g1

0x2d8c,	// (0x0005dd2c) link_highlight_digital_pane_t1

0x2c3e,	// (0x0005dbde) copy_highlight_primary_pane_g1

0x2c64,	// (0x0005dc04) copy_highlight_primary_pane_t1

0x2c3e,	// (0x0005dbde) copy_highlight_primary_small_pane_g1

0x2c55,	// (0x0005dbf5) copy_highlight_primary_small_pane_t1

0x00c8,	// (0x0005b068) copy_highlight_secondary_pane_g1

0x00d0,	// (0x0005b070) copy_highlight_secondary_pane_t1

0x2c3e,	// (0x0005dbde) copy_highlight_title_pane_g1

0x2c46,	// (0x0005dbe6) copy_highlight_title_pane_t1

0x2c3e,	// (0x0005dbde) copy_highlight_digital_pane_g1

0x3f28,	// (0x0005eec8) copy_highlight_digital_pane_t1

0x3e7c,	// (0x0005ee1c) graphic_text_primary_pane_g1

0x3f0c,	// (0x0005eeac) graphic_text_primary_pane_t1

0x3f1a,	// (0x0005eeba) graphic_text_primary_pane_t2

0x0001,

0xf9b8,	// (0x0006a958) graphic_text_primary_pane_t

0x3ee8,	// (0x0005ee88) graphic_text_primary_small_pane_g1

0x3ef0,	// (0x0005ee90) graphic_text_primary_small_pane_t1

0x3efe,	// (0x0005ee9e) graphic_text_primary_small_pane_t2

0x0001,

0xf9b3,	// (0x0006a953) graphic_text_primary_small_pane_t

0x3ec4,	// (0x0005ee64) graphic_text_secondary_pane_g1

0x3ecc,	// (0x0005ee6c) graphic_text_secondary_pane_t1

0x3eda,	// (0x0005ee7a) graphic_text_secondary_pane_t2

0x0001,

0xf9ae,	// (0x0006a94e) graphic_text_secondary_pane_t

0x3ea0,	// (0x0005ee40) graphic_text_title_pane_g1

0x3ea8,	// (0x0005ee48) graphic_text_title_pane_t1

0x3eb6,	// (0x0005ee56) graphic_text_title_pane_t2

0x0001,

0xf9a9,	// (0x0006a949) graphic_text_title_pane_t

0x3e7c,	// (0x0005ee1c) graphic_text_digital_pane_g1

0x3e84,	// (0x0005ee24) graphic_text_digital_pane_t1

0x3e92,	// (0x0005ee32) graphic_text_digital_pane_t2

0x0001,

0xf9a4,	// (0x0006a944) graphic_text_digital_pane_t

0x80e2,	// (0x00063082) navi_icon_pane_srt_ParamLimits

0x80e2,	// (0x00063082) navi_icon_pane_srt

0x8094,	// (0x00063034) navi_midp_pane_srt

0x8094,	// (0x00063034) navi_navi_pane_srt

0x80e2,	// (0x00063082) navi_text_pane_srt_ParamLimits

0x80e2,	// (0x00063082) navi_text_pane_srt

0x3e47,	// (0x0005ede7) navi_navi_icon_text_pane_srt

0x3e4f,	// (0x0005edef) navi_navi_pane_srt_g1_ParamLimits

0x3e4f,	// (0x0005edef) navi_navi_pane_srt_g1

0x3e61,	// (0x0005ee01) navi_navi_pane_srt_g2_ParamLimits

0x3e61,	// (0x0005ee01) navi_navi_pane_srt_g2

0x0001,

0xf99f,	// (0x0006a93f) navi_navi_pane_srt_g_ParamLimits

0xf99f,	// (0x0006a93f) navi_navi_pane_srt_g

0x3e73,	// (0x0005ee13) navi_navi_tabs_pane_srt

0x3e47,	// (0x0005ede7) navi_navi_text_pane_srt

0x3e47,	// (0x0005ede7) navi_navi_volume_pane_srt

0x3e38,	// (0x0005edd8) navi_navi_text_pane_srt_t1

0x0d9c,	// (0x0005bd3c) navi_navi_volume_pane_srt_g1

0x0da4,	// (0x0005bd44) volume_small_pane_srt_ParamLimits

0x0da4,	// (0x0005bd44) volume_small_pane_srt

0x00df,	// (0x0005b07f) volume_small_pane_srt_g1_ParamLimits

0x00df,	// (0x0005b07f) volume_small_pane_srt_g1

0x00ef,	// (0x0005b08f) volume_small_pane_srt_g2_ParamLimits

0x00ef,	// (0x0005b08f) volume_small_pane_srt_g2

0x0100,	// (0x0005b0a0) volume_small_pane_srt_g3_ParamLimits

0x0100,	// (0x0005b0a0) volume_small_pane_srt_g3

0x0111,	// (0x0005b0b1) volume_small_pane_srt_g4_ParamLimits

0x0111,	// (0x0005b0b1) volume_small_pane_srt_g4

0x0122,	// (0x0005b0c2) volume_small_pane_srt_g5_ParamLimits

0x0122,	// (0x0005b0c2) volume_small_pane_srt_g5

0x0133,	// (0x0005b0d3) volume_small_pane_srt_g6_ParamLimits

0x0133,	// (0x0005b0d3) volume_small_pane_srt_g6

0x0144,	// (0x0005b0e4) volume_small_pane_srt_g7_ParamLimits

0x0144,	// (0x0005b0e4) volume_small_pane_srt_g7

0x0155,	// (0x0005b0f5) volume_small_pane_srt_g8_ParamLimits

0x0155,	// (0x0005b0f5) volume_small_pane_srt_g8

0x0166,	// (0x0005b106) volume_small_pane_srt_g9_ParamLimits

0x0166,	// (0x0005b106) volume_small_pane_srt_g9

0x0177,	// (0x0005b117) volume_small_pane_srt_g10_ParamLimits

0x0177,	// (0x0005b117) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0006a6f3) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0006a6f3) volume_small_pane_srt_g

0x9819,	// (0x000647b9) query_popup_data_pane_cp2

0x3e1e,	// (0x0005edbe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3e1e,	// (0x0005edbe) navi_navi_icon_text_pane_srt_t1

0x2ecc,	// (0x0005de6c) navi_tabs_2_long_pane_srt

0x2ecc,	// (0x0005de6c) navi_tabs_2_pane_srt

0x2ecc,	// (0x0005de6c) navi_tabs_3_long_pane_srt

0x2ecc,	// (0x0005de6c) navi_tabs_3_pane_srt

0x2ecc,	// (0x0005de6c) navi_tabs_4_pane_srt

0xb2cc,	// (0x0006626c) tabs_2_active_pane_srt_ParamLimits

0xb2cc,	// (0x0006626c) tabs_2_active_pane_srt

0xb2dc,	// (0x0006627c) tabs_2_passive_pane_srt_ParamLimits

0xb2dc,	// (0x0006627c) tabs_2_passive_pane_srt

0x2683,	// (0x0005d623) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2683,	// (0x0005d623) bg_passive_tab_pane_cp1_srt

0xca92,	// (0x00067a32) bg_passive_tab_pane_g1_cp1_srt

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp1_srt

0xca9b,	// (0x00067a3b) bg_passive_tab_pane_g3_cp1_srt

0x820c,	// (0x000631ac) bg_active_tab_pane_cp1_srt_ParamLimits

0x820c,	// (0x000631ac) bg_active_tab_pane_cp1_srt

0xcaa4,	// (0x00067a44) tabs_2_active_pane_srt_g1

0xcaac,	// (0x00067a4c) tabs_2_active_pane_srt_t1_ParamLimits

0xcaac,	// (0x00067a4c) tabs_2_active_pane_srt_t1

0xca92,	// (0x00067a32) bg_active_tab_pane_g1_cp1_srt

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp1_srt

0xca9b,	// (0x00067a3b) bg_active_tab_pane_g3_cp1_srt

0xb299,	// (0x00066239) tabs_3_active_pane_srt_ParamLimits

0xb299,	// (0x00066239) tabs_3_active_pane_srt

0xb2aa,	// (0x0006624a) tabs_3_passive_pane_cp_srt_ParamLimits

0xb2aa,	// (0x0006624a) tabs_3_passive_pane_cp_srt

0xb2bb,	// (0x0006625b) tabs_3_passive_pane_srt_ParamLimits

0xb2bb,	// (0x0006625b) tabs_3_passive_pane_srt

0x2683,	// (0x0005d623) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2683,	// (0x0005d623) bg_passive_tab_pane_cp2_srt

0xa5cf,	// (0x0006556f) bg_passive_tab_pane_g1_cp2_srt

0xa430,	// (0x000653d0) bg_passive_tab_pane_g2_cp2_srt

0xa5d8,	// (0x00065578) bg_passive_tab_pane_g3_cp2_srt

0x820c,	// (0x000631ac) bg_active_tab_pane_cp2_srt_ParamLimits

0x820c,	// (0x000631ac) bg_active_tab_pane_cp2_srt

0xca74,	// (0x00067a14) tabs_3_active_pane_srt_g1

0xca7c,	// (0x00067a1c) tabs_3_active_pane_srt_t1_ParamLimits

0xca7c,	// (0x00067a1c) tabs_3_active_pane_srt_t1

0xa5cf,	// (0x0006556f) bg_active_tab_pane_g1_cp2_srt

0xa430,	// (0x000653d0) bg_active_tab_pane_g2_cp2_srt

0xa5d8,	// (0x00065578) bg_active_tab_pane_g3_cp2_srt

0x0d01,	// (0x0005bca1) tabs_4_active_pane_srt_ParamLimits

0x0d01,	// (0x0005bca1) tabs_4_active_pane_srt

0x0d13,	// (0x0005bcb3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0d13,	// (0x0005bcb3) tabs_4_passive_pane_cp2_srt

0x02ef,	// (0x0005b28f) aid_size_cell_toolbar

0x39ca,	// (0x0005e96a) main_idle_act_pane_ParamLimits

0xaa3c,	// (0x000659dc) popup_large_graphic_colour_window_ParamLimits

0xaf30,	// (0x00065ed0) popup_toolbar_window_ParamLimits

0xaf30,	// (0x00065ed0) popup_toolbar_window

0x3b7e,	// (0x0005eb1e) list_single_graphic_2heading_pane_ParamLimits

0x3b7e,	// (0x0005eb1e) list_single_graphic_2heading_pane

0x8752,	// (0x000636f2) aid_size_cell_apps_grid_lsc_pane

0x8764,	// (0x00063704) aid_size_cell_apps_grid_prt_pane

0x20d0,	// (0x0005d070) bg_wml_button_pane_cp1_ParamLimits

0x20d0,	// (0x0005d070) bg_wml_button_pane_cp1

0xc1e4,	// (0x00067184) form_midp_field_text_pane_t1_ParamLimits

0x2683,	// (0x0005d623) input_focus_pane_cp050_ParamLimits

0x28f3,	// (0x0005d893) list_midp_form_text_pane_ParamLimits

0x2896,	// (0x0005d836) input_focus_pane_cp051_ParamLimits

0x28aa,	// (0x0005d84a) list_midp_choice_pane_ParamLimits

0xc149,	// (0x000670e9) list_single_2graphic_pane_cp3_ParamLimits

0xc149,	// (0x000670e9) list_single_2graphic_pane_cp3

0xc15d,	// (0x000670fd) list_single_midp_graphic_pane_ParamLimits

0xc15d,	// (0x000670fd) list_single_midp_graphic_pane

0xe0f6,	// (0x00069096) list_single_graphic_2heading_pane_g1_ParamLimits

0xe0f6,	// (0x00069096) list_single_graphic_2heading_pane_g1

0xe102,	// (0x000690a2) list_single_graphic_2heading_pane_g4_ParamLimits

0xe102,	// (0x000690a2) list_single_graphic_2heading_pane_g4

0xe10e,	// (0x000690ae) list_single_graphic_2heading_pane_g5_ParamLimits

0xe10e,	// (0x000690ae) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0006a746) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0006a746) list_single_graphic_2heading_pane_g

0xe11a,	// (0x000690ba) list_single_graphic_2heading_pane_t1_ParamLimits

0xe11a,	// (0x000690ba) list_single_graphic_2heading_pane_t1

0xe12e,	// (0x000690ce) list_single_graphic_2heading_pane_t2_ParamLimits

0xe12e,	// (0x000690ce) list_single_graphic_2heading_pane_t2

0xe148,	// (0x000690e8) list_single_graphic_2heading_pane_t3_ParamLimits

0xe148,	// (0x000690e8) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0006a74d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0006a74d) list_single_graphic_2heading_pane_t

0x2535,	// (0x0005d4d5) bg_popup_sub_pane_cp2

0x255f,	// (0x0005d4ff) grid_toobar_pane

0x08cc,	// (0x0005b86c) cell_toolbar_pane_ParamLimits

0x08cc,	// (0x0005b86c) cell_toolbar_pane

0x259b,	// (0x0005d53b) cell_toolbar_pane_g1_ParamLimits

0x259b,	// (0x0005d53b) cell_toolbar_pane_g1

0xc109,	// (0x000670a9) cell_toolbar_pane_g2_ParamLimits

0xc109,	// (0x000670a9) cell_toolbar_pane_g2

0x0001,

0xf7b4,	// (0x0006a754) cell_toolbar_pane_g_ParamLimits

0xf7b4,	// (0x0006a754) cell_toolbar_pane_g

0x25d1,	// (0x0005d571) grid_highlight_pane_cp2_ParamLimits

0x25d1,	// (0x0005d571) grid_highlight_pane_cp2

0x25eb,	// (0x0005d58b) toolbar_button_pane

0x25f7,	// (0x0005d597) toolbar_button_pane_g1

0x25ff,	// (0x0005d59f) toolbar_button_pane_g2

0x2607,	// (0x0005d5a7) toolbar_button_pane_g3

0x260f,	// (0x0005d5af) toolbar_button_pane_g4

0x2617,	// (0x0005d5b7) toolbar_button_pane_g5

0x261f,	// (0x0005d5bf) toolbar_button_pane_g6

0x2627,	// (0x0005d5c7) toolbar_button_pane_g7

0x262f,	// (0x0005d5cf) toolbar_button_pane_g8

0x2637,	// (0x0005d5d7) toolbar_button_pane_g9

0x0009,

0xf7b9,	// (0x0006a759) toolbar_button_pane_g

0x0904,	// (0x0005b8a4) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0904,	// (0x0005b8a4) list_single_2graphic_pane_g1_cp3

0xb0c1,	// (0x00066061) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb0c1,	// (0x00066061) list_single_2graphic_pane_g2_cp3

0x0921,	// (0x0005b8c1) list_single_2graphic_pane_g3_cp3

0x0929,	// (0x0005b8c9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0929,	// (0x0005b8c9) list_single_2graphic_pane_g4_cp3

0xb0d2,	// (0x00066072) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb0d2,	// (0x00066072) list_single_2graphic_pane_t1_cp3

0x0951,	// (0x0005b8f1) list_single_midp_graphic_pane_g2_ParamLimits

0x0951,	// (0x0005b8f1) list_single_midp_graphic_pane_g2

0xe0e6,	// (0x00069086) aid_zoom_text_primary

0x02f7,	// (0x0005b297) aid_zoom_text_secondary

0xa62f,	// (0x000655cf) status_small_pane_g7_ParamLimits

0xa62f,	// (0x000655cf) status_small_pane_g7

0xa652,	// (0x000655f2) status_small_pane_t1_ParamLimits

0x9460,	// (0x00064400) title_pane_g2

0x0003,

0xf54e,	// (0x0006a4ee) title_pane_g

0x9873,	// (0x00064813) aid_size_cell_colour_1_pane_ParamLimits

0x9873,	// (0x00064813) aid_size_cell_colour_1_pane

0x9887,	// (0x00064827) aid_size_cell_colour_2_pane_ParamLimits

0x9887,	// (0x00064827) aid_size_cell_colour_2_pane

0x989b,	// (0x0006483b) aid_size_cell_colour_3_pane_ParamLimits

0x989b,	// (0x0006483b) aid_size_cell_colour_3_pane

0x98af,	// (0x0006484f) aid_size_cell_colour_4_pane_ParamLimits

0x98af,	// (0x0006484f) aid_size_cell_colour_4_pane

0xf20b,	// (0x0006a1ab) title_pane_stacon_g1_ParamLimits

0xf20b,	// (0x0006a1ab) title_pane_stacon_g1

0x2cbb,	// (0x0005dc5b) popup_note_wait_window_g3_ParamLimits

0x2cbb,	// (0x0005dc5b) popup_note_wait_window_g3

0x2d31,	// (0x0005dcd1) popup_note_wait_window_t5_ParamLimits

0x2d31,	// (0x0005dcd1) popup_note_wait_window_t5

0x8094,	// (0x00063034) main_feb_china_hwr_fs_writing_pane

0xa8be,	// (0x0006585e) popup_feb_china_hwr_fs_window_ParamLimits

0xa8be,	// (0x0006585e) popup_feb_china_hwr_fs_window

0xb0ee,	// (0x0006608e) aid_size_cell_hwr_fs_ParamLimits

0xb0ee,	// (0x0006608e) aid_size_cell_hwr_fs

0x2683,	// (0x0005d623) bg_popup_sub_pane_cp3_ParamLimits

0x2683,	// (0x0005d623) bg_popup_sub_pane_cp3

0xb103,	// (0x000660a3) grid_hwr_fs_pane_ParamLimits

0xb103,	// (0x000660a3) grid_hwr_fs_pane

0x09a0,	// (0x0005b940) linegrid_hwr_fs_pane_ParamLimits

0x09a0,	// (0x0005b940) linegrid_hwr_fs_pane

0xb11b,	// (0x000660bb) cell_hwr_fs_pane_ParamLimits

0xb11b,	// (0x000660bb) cell_hwr_fs_pane

0x268f,	// (0x0005d62f) linegrid_hwr_fs_pane_g1_ParamLimits

0x268f,	// (0x0005d62f) linegrid_hwr_fs_pane_g1

0xc11d,	// (0x000670bd) linegrid_hwr_fs_pane_g2_ParamLimits

0xc11d,	// (0x000670bd) linegrid_hwr_fs_pane_g2

0x26ad,	// (0x0005d64d) linegrid_hwr_fs_pane_g3_ParamLimits

0x26ad,	// (0x0005d64d) linegrid_hwr_fs_pane_g3

0xb141,	// (0x000660e1) linegrid_hwr_fs_pane_g4_ParamLimits

0xb141,	// (0x000660e1) linegrid_hwr_fs_pane_g4

0x09ec,	// (0x0005b98c) linegrid_hwr_fs_pane_g5_ParamLimits

0x09ec,	// (0x0005b98c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7df,	// (0x0006a77f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7df,	// (0x0006a77f) linegrid_hwr_fs_pane_g

0x26b9,	// (0x0005d659) cell_hwr_fs_pane_g1_ParamLimits

0x26b9,	// (0x0005d659) cell_hwr_fs_pane_g1

0x246f,	// (0x0005d40f) cell_hwr_fs_pane_g2_ParamLimits

0x246f,	// (0x0005d40f) cell_hwr_fs_pane_g2

0xc12f,	// (0x000670cf) cell_hwr_fs_pane_g3_ParamLimits

0xc12f,	// (0x000670cf) cell_hwr_fs_pane_g3

0xc13c,	// (0x000670dc) cell_hwr_fs_pane_g4_ParamLimits

0xc13c,	// (0x000670dc) cell_hwr_fs_pane_g4

0x0003,

0xf7ea,	// (0x0006a78a) cell_hwr_fs_pane_g_ParamLimits

0xf7ea,	// (0x0006a78a) cell_hwr_fs_pane_g

0xb15b,	// (0x000660fb) cell_hwr_fs_pane_t1

0x8094,	// (0x00063034) grid_highlight_pane_cp6

0x8094,	// (0x00063034) main_idle_act2_pane

0x85a8,	// (0x00063548) aid_inside_area_popup_secondary

0xc571,	// (0x00067511) aid_inside_area_window_primary_ParamLimits

0xc571,	// (0x00067511) aid_inside_area_window_primary

0xcaca,	// (0x00067a6a) ai2_news_ticker_pane

0x40a6,	// (0x0005f046) aid_size_cell_ai1_link_ParamLimits

0x40a6,	// (0x0005f046) aid_size_cell_ai1_link

0xcad2,	// (0x00067a72) popup_ai2_data_window_ParamLimits

0xcad2,	// (0x00067a72) popup_ai2_data_window

0x40d6,	// (0x0005f076) popup_ai2_link_window_ParamLimits

0x40d6,	// (0x0005f076) popup_ai2_link_window

0x2683,	// (0x0005d623) bg_popup_sub_pane_cp4_ParamLimits

0x2683,	// (0x0005d623) bg_popup_sub_pane_cp4

0x40ea,	// (0x0005f08a) grid_ai2_link_pane_ParamLimits

0x40ea,	// (0x0005f08a) grid_ai2_link_pane

0x4101,	// (0x0005f0a1) popup_ai2_link_window_g1_ParamLimits

0x4101,	// (0x0005f0a1) popup_ai2_link_window_g1

0x410d,	// (0x0005f0ad) popup_ai2_link_window_g2_ParamLimits

0x410d,	// (0x0005f0ad) popup_ai2_link_window_g2

0x0001,

0xf9bd,	// (0x0006a95d) popup_ai2_link_window_g_ParamLimits

0xf9bd,	// (0x0006a95d) popup_ai2_link_window_g

0x411c,	// (0x0005f0bc) ai2_mp_button_pane

0x4124,	// (0x0005f0c4) ai2_mp_volume_pane

0x2896,	// (0x0005d836) bg_popup_sub_pane_cp5_ParamLimits

0x2896,	// (0x0005d836) bg_popup_sub_pane_cp5

0x412c,	// (0x0005f0cc) heading_ai2_gene_pane_ParamLimits

0x412c,	// (0x0005f0cc) heading_ai2_gene_pane

0x4138,	// (0x0005f0d8) list_ai2_gene_pane_ParamLimits

0x4138,	// (0x0005f0d8) list_ai2_gene_pane

0x4180,	// (0x0005f120) cell_ai2_link_pane_ParamLimits

0x4180,	// (0x0005f120) cell_ai2_link_pane

0x4196,	// (0x0005f136) cell_ai2_link_pane_g1

0x8094,	// (0x00063034) grid_highlight_pane_cp7

0x0db9,	// (0x0005bd59) ai2_mp_volume_pane_g1

0x4266,	// (0x0005f206) ai2_mp_volume_pane_g2

0x41db,	// (0x0005f17b) list_ai2_gene_pane_t1

0x426e,	// (0x0005f20e) ai2_mp_volume_pane_g3

0x0002,

0xf9d6,	// (0x0006a976) ai2_mp_volume_pane_g

0xb2ec,	// (0x0006628c) volume_small_pane_cp3

0x4276,	// (0x0005f216) aid_size_cell_ai2_button

0x427e,	// (0x0005f21e) grid_ai2_button_pane

0x4287,	// (0x0005f227) cell_ai2_button_pane_ParamLimits

0x4287,	// (0x0005f227) cell_ai2_button_pane

0x808a,	// (0x0006302a) cell_ai2_button_pane_g1

0x8094,	// (0x00063034) grid_highlight_pane_cp8

0x4226,	// (0x0005f1c6) ai2_gene_pane_t1_ParamLimits

0x4226,	// (0x0005f1c6) ai2_gene_pane_t1

0xa820,	// (0x000657c0) aid_height_parent_landscape

0xc7bf,	// (0x0006775f) aid_height_set_list

0x39ca,	// (0x0005e96a) aid_size_parent

0xca48,	// (0x000679e8) aid_size_cell_graphic_pane_ParamLimits

0x4148,	// (0x0005f0e8) popup_ai2_data_window_g1_ParamLimits

0x4148,	// (0x0005f0e8) popup_ai2_data_window_g1

0x4154,	// (0x0005f0f4) ai2_news_ticker_pane_g1

0x415c,	// (0x0005f0fc) ai2_news_ticker_pane_g2

0x0001,

0xf9c2,	// (0x0006a962) ai2_news_ticker_pane_g

0x4164,	// (0x0005f104) ai2_news_ticker_pane_t1

0x4172,	// (0x0005f112) ai2_news_ticker_pane_t2

0x0001,

0xf9c7,	// (0x0006a967) ai2_news_ticker_pane_t

0x419f,	// (0x0005f13f) heading_ai2_gene_pane_g1

0x41a7,	// (0x0005f147) heading_ai2_gene_pane_t1_ParamLimits

0x41a7,	// (0x0005f147) heading_ai2_gene_pane_t1

0x41bc,	// (0x0005f15c) list_highlight_pane_cp6

0x41c4,	// (0x0005f164) ai2_gene_pane_ParamLimits

0x41c4,	// (0x0005f164) ai2_gene_pane

0x41e9,	// (0x0005f189) list_ai2_gene_pane_t2

0x0001,

0xf9cc,	// (0x0006a96c) list_ai2_gene_pane_t

0x41f7,	// (0x0005f197) list_highlight_pane_cp8_ParamLimits

0x41f7,	// (0x0005f197) list_highlight_pane_cp8

0x4208,	// (0x0005f1a8) ai2_gene_pane_g1_ParamLimits

0x4208,	// (0x0005f1a8) ai2_gene_pane_g1

0x421a,	// (0x0005f1ba) ai2_gene_pane_g2_ParamLimits

0x421a,	// (0x0005f1ba) ai2_gene_pane_g2

0x0001,

0xf9d1,	// (0x0006a971) ai2_gene_pane_g_ParamLimits

0xf9d1,	// (0x0006a971) ai2_gene_pane_g

0x8441,	// (0x000633e1) scroll_pane_cp12

0xa7dd,	// (0x0006577d) control_pane_t3_ParamLimits

0xa7dd,	// (0x0006577d) control_pane_t3

0xa643,	// (0x000655e3) status_small_pane_g8_ParamLimits

0xa643,	// (0x000655e3) status_small_pane_g8

0xa981,	// (0x00065921) popup_find_window_ParamLimits

0xac34,	// (0x00065bd4) popup_note_image_window_ParamLimits

0xdd20,	// (0x00068cc0) list_double2_graphic_pane_vc_g1_ParamLimits

0xdd20,	// (0x00068cc0) list_double2_graphic_pane_vc_g1

0xdd2c,	// (0x00068ccc) list_double2_graphic_pane_vc_g2_ParamLimits

0xdd2c,	// (0x00068ccc) list_double2_graphic_pane_vc_g2

0xdd38,	// (0x00068cd8) list_double2_graphic_pane_vc_g3_ParamLimits

0xdd38,	// (0x00068cd8) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0006a561) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0006a561) list_double2_graphic_pane_vc_g

0xdd44,	// (0x00068ce4) list_double2_graphic_pane_vc_t1_ParamLimits

0xdd44,	// (0x00068ce4) list_double2_graphic_pane_vc_t1

0xdd2c,	// (0x00068ccc) list_single_heading_pane_vc_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_single_heading_pane_vc_g1

0xdd38,	// (0x00068cd8) list_single_heading_pane_vc_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a572) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a572) list_single_heading_pane_vc_g

0xe160,	// (0x00069100) list_single_heading_pane_vc_t1_ParamLimits

0xe160,	// (0x00069100) list_single_heading_pane_vc_t1

0xe176,	// (0x00069116) list_single_heading_pane_vc_t2_ParamLimits

0xe176,	// (0x00069116) list_single_heading_pane_vc_t2

0x0001,

0xf7ce,	// (0x0006a76e) list_single_heading_pane_vc_t_ParamLimits

0xf7ce,	// (0x0006a76e) list_single_heading_pane_vc_t

0x263f,	// (0x0005d5df) list_setting_number_pane_vc_g1_ParamLimits

0x263f,	// (0x0005d5df) list_setting_number_pane_vc_g1

0x264b,	// (0x0005d5eb) list_setting_number_pane_vc_g2_ParamLimits

0x264b,	// (0x0005d5eb) list_setting_number_pane_vc_g2

0x0001,

0xf7d3,	// (0x0006a773) list_setting_number_pane_vc_g_ParamLimits

0xf7d3,	// (0x0006a773) list_setting_number_pane_vc_g

0xe188,	// (0x00069128) list_setting_number_pane_vc_t1_ParamLimits

0xe188,	// (0x00069128) list_setting_number_pane_vc_t1

0xe19c,	// (0x0006913c) list_setting_number_pane_vc_t2_ParamLimits

0xe19c,	// (0x0006913c) list_setting_number_pane_vc_t2

0xe1b8,	// (0x00069158) list_setting_number_pane_vc_t3_ParamLimits

0xe1b8,	// (0x00069158) list_setting_number_pane_vc_t3

0x0002,

0xf7d8,	// (0x0006a778) list_setting_number_pane_vc_t_ParamLimits

0xf7d8,	// (0x0006a778) list_setting_number_pane_vc_t

0xe1e2,	// (0x00069182) set_value_pane_vc_ParamLimits

0xe1e2,	// (0x00069182) set_value_pane_vc

0x3b7e,	// (0x0005eb1e) list_double2_graphic_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double2_graphic_pane_vc

0x3b7e,	// (0x0005eb1e) list_double2_large_graphic_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double2_large_graphic_pane_vc

0x3b7e,	// (0x0005eb1e) list_double2_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double2_pane_vc

0x3b7e,	// (0x0005eb1e) list_double_graphic_heading_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double_graphic_heading_pane_vc

0x3b7e,	// (0x0005eb1e) list_double_graphic_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double_graphic_pane_vc

0x3b7e,	// (0x0005eb1e) list_double_heading_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double_heading_pane_vc

0x3b90,	// (0x0005eb30) list_double_large_graphic_pane_vc_ParamLimits

0x3b90,	// (0x0005eb30) list_double_large_graphic_pane_vc

0x3b7e,	// (0x0005eb1e) list_double_number_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double_number_pane_vc

0x3b7e,	// (0x0005eb1e) list_double_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double_pane_vc

0x3b7e,	// (0x0005eb1e) list_double_time_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_double_time_pane_vc

0x3b7e,	// (0x0005eb1e) list_setting_number_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_setting_number_pane_vc

0x3b7e,	// (0x0005eb1e) list_setting_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_setting_pane_vc

0x3b7e,	// (0x0005eb1e) list_single_graphic_heading_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_single_graphic_heading_pane_vc

0x3b7e,	// (0x0005eb1e) list_single_heading_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_single_heading_pane_vc

0x3b7e,	// (0x0005eb1e) list_single_number_heading_pane_vc_ParamLimits

0x3b7e,	// (0x0005eb1e) list_single_number_heading_pane_vc

0xe201,	// (0x000691a1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe201,	// (0x000691a1) list_double_graphic_heading_pane_vc_g1

0xdd2c,	// (0x00068ccc) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdd2c,	// (0x00068ccc) list_double_graphic_heading_pane_vc_g2

0xdd38,	// (0x00068cd8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdd38,	// (0x00068cd8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9dd,	// (0x0006a97d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9dd,	// (0x0006a97d) list_double_graphic_heading_pane_vc_g

0xe20d,	// (0x000691ad) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe20d,	// (0x000691ad) list_double_graphic_heading_pane_vc_t1

0xe221,	// (0x000691c1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe221,	// (0x000691c1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e4,	// (0x0006a984) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e4,	// (0x0006a984) list_double_graphic_heading_pane_vc_t

0x263f,	// (0x0005d5df) list_setting_pane_vc_g1_ParamLimits

0x263f,	// (0x0005d5df) list_setting_pane_vc_g1

0x264b,	// (0x0005d5eb) list_setting_pane_vc_g2_ParamLimits

0x264b,	// (0x0005d5eb) list_setting_pane_vc_g2

0x0001,

0xf7d3,	// (0x0006a773) list_setting_pane_vc_g_ParamLimits

0xf7d3,	// (0x0006a773) list_setting_pane_vc_g

0xe239,	// (0x000691d9) list_setting_pane_vc_t1_ParamLimits

0xe239,	// (0x000691d9) list_setting_pane_vc_t1

0xe255,	// (0x000691f5) list_setting_pane_vc_t2_ParamLimits

0xe255,	// (0x000691f5) list_setting_pane_vc_t2

0x0001,

0xfa27,	// (0x0006a9c7) list_setting_pane_vc_t_ParamLimits

0xfa27,	// (0x0006a9c7) list_setting_pane_vc_t

0xe1e2,	// (0x00069182) set_value_pane_cp_vc_ParamLimits

0xe1e2,	// (0x00069182) set_value_pane_cp_vc

0xdd2c,	// (0x00068ccc) list_single_number_heading_pane_vc_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_single_number_heading_pane_vc_g1

0xdd38,	// (0x00068cd8) list_single_number_heading_pane_vc_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a572) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a572) list_single_number_heading_pane_vc_g

0xe26f,	// (0x0006920f) list_single_number_heading_pane_vc_t1_ParamLimits

0xe26f,	// (0x0006920f) list_single_number_heading_pane_vc_t1

0xe285,	// (0x00069225) list_single_number_heading_pane_vc_t2_ParamLimits

0xe285,	// (0x00069225) list_single_number_heading_pane_vc_t2

0xe297,	// (0x00069237) list_single_number_heading_pane_vc_t3_ParamLimits

0xe297,	// (0x00069237) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2c,	// (0x0006a9cc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0006a9cc) list_single_number_heading_pane_vc_t

0xe2a9,	// (0x00069249) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe2a9,	// (0x00069249) list_single_graphic_heading_pane_vc_g1

0xdd2c,	// (0x00068ccc) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdd2c,	// (0x00068ccc) list_single_graphic_heading_pane_vc_g4

0xdd38,	// (0x00068cd8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdd38,	// (0x00068cd8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa33,	// (0x0006a9d3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa33,	// (0x0006a9d3) list_single_graphic_heading_pane_vc_g

0xe160,	// (0x00069100) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe160,	// (0x00069100) list_single_graphic_heading_pane_vc_t1

0xe2b5,	// (0x00069255) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe2b5,	// (0x00069255) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x0006a9da) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x0006a9da) list_single_graphic_heading_pane_vc_t

0xdd2c,	// (0x00068ccc) list_double2_pane_vc_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_double2_pane_vc_g1

0xdd38,	// (0x00068cd8) list_double2_pane_vc_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a572) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a572) list_double2_pane_vc_g

0xe2c7,	// (0x00069267) list_double2_pane_vc_t1_ParamLimits

0xe2c7,	// (0x00069267) list_double2_pane_vc_t1

0x3f37,	// (0x0005eed7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3f37,	// (0x0005eed7) list_double2_large_graphic_pane_vc_g1

0xdd2c,	// (0x00068ccc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdd2c,	// (0x00068ccc) list_double2_large_graphic_pane_vc_g2

0xdd38,	// (0x00068cd8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdd38,	// (0x00068cd8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0006a58a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0006a58a) list_double2_large_graphic_pane_vc_g

0xdd44,	// (0x00068ce4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdd44,	// (0x00068ce4) list_double2_large_graphic_pane_vc_t1

0x3f43,	// (0x0005eee3) list_double_time_pane_vc_g1_ParamLimits

0x3f43,	// (0x0005eee3) list_double_time_pane_vc_g1

0x3f4f,	// (0x0005eeef) list_double_time_pane_vc_g2_ParamLimits

0x3f4f,	// (0x0005eeef) list_double_time_pane_vc_g2

0x0001,

0xfa3f,	// (0x0006a9df) list_double_time_pane_vc_g_ParamLimits

0xfa3f,	// (0x0006a9df) list_double_time_pane_vc_g

0xe2df,	// (0x0006927f) list_double_time_pane_vc_t1_ParamLimits

0xe2df,	// (0x0006927f) list_double_time_pane_vc_t1

0xe303,	// (0x000692a3) list_double_time_pane_vc_t2_ParamLimits

0xe303,	// (0x000692a3) list_double_time_pane_vc_t2

0xe352,	// (0x000692f2) list_double_time_pane_vc_t3_ParamLimits

0xe352,	// (0x000692f2) list_double_time_pane_vc_t3

0xe364,	// (0x00069304) list_double_time_pane_vc_t4_ParamLimits

0xe364,	// (0x00069304) list_double_time_pane_vc_t4

0x0003,

0xfa44,	// (0x0006a9e4) list_double_time_pane_vc_t_ParamLimits

0xfa44,	// (0x0006a9e4) list_double_time_pane_vc_t

0xdd2c,	// (0x00068ccc) list_double_pane_vc_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_double_pane_vc_g1

0xdd38,	// (0x00068cd8) list_double_pane_vc_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a572) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a572) list_double_pane_vc_g

0xe378,	// (0x00069318) list_double_pane_vc_t1_ParamLimits

0xe378,	// (0x00069318) list_double_pane_vc_t1

0xe38c,	// (0x0006932c) list_double_pane_vc_t2_ParamLimits

0xe38c,	// (0x0006932c) list_double_pane_vc_t2

0x0001,

0xfa4d,	// (0x0006a9ed) list_double_pane_vc_t_ParamLimits

0xfa4d,	// (0x0006a9ed) list_double_pane_vc_t

0xdd2c,	// (0x00068ccc) list_double_number_pane_vc_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_double_number_pane_vc_g1

0xdd38,	// (0x00068cd8) list_double_number_pane_vc_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a572) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a572) list_double_number_pane_vc_g

0xe3a4,	// (0x00069344) list_double_number_pane_vc_t1_ParamLimits

0xe3a4,	// (0x00069344) list_double_number_pane_vc_t1

0xe378,	// (0x00069318) list_double_number_pane_vc_t2_ParamLimits

0xe378,	// (0x00069318) list_double_number_pane_vc_t2

0xe3b6,	// (0x00069356) list_double_number_pane_vc_t3_ParamLimits

0xe3b6,	// (0x00069356) list_double_number_pane_vc_t3

0x0002,

0xfa52,	// (0x0006a9f2) list_double_number_pane_vc_t_ParamLimits

0xfa52,	// (0x0006a9f2) list_double_number_pane_vc_t

0x3f5b,	// (0x0005eefb) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3f5b,	// (0x0005eefb) list_double_large_graphic_pane_vc_g1

0x3f7d,	// (0x0005ef1d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3f7d,	// (0x0005ef1d) list_double_large_graphic_pane_vc_g2

0x3f91,	// (0x0005ef31) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3f91,	// (0x0005ef31) list_double_large_graphic_pane_vc_g3

0xe3ce,	// (0x0006936e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe3ce,	// (0x0006936e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa59,	// (0x0006a9f9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x0006a9f9) list_double_large_graphic_pane_vc_g

0xe3da,	// (0x0006937a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe3da,	// (0x0006937a) list_double_large_graphic_pane_vc_t1

0xe3f6,	// (0x00069396) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe3f6,	// (0x00069396) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa62,	// (0x0006aa02) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa62,	// (0x0006aa02) list_double_large_graphic_pane_vc_t

0xdd2c,	// (0x00068ccc) list_double_heading_pane_vc_g1_ParamLimits

0xdd2c,	// (0x00068ccc) list_double_heading_pane_vc_g1

0xdd38,	// (0x00068cd8) list_double_heading_pane_vc_g2_ParamLimits

0xdd38,	// (0x00068cd8) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a572) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a572) list_double_heading_pane_vc_g

0xe418,	// (0x000693b8) list_double_heading_pane_vc_t1_ParamLimits

0xe418,	// (0x000693b8) list_double_heading_pane_vc_t1

0xe42c,	// (0x000693cc) list_double_heading_pane_vc_t2_ParamLimits

0xe42c,	// (0x000693cc) list_double_heading_pane_vc_t2

0x0001,

0xfa67,	// (0x0006aa07) list_double_heading_pane_vc_t_ParamLimits

0xfa67,	// (0x0006aa07) list_double_heading_pane_vc_t

0xe444,	// (0x000693e4) list_double_graphic_pane_vc_g1_ParamLimits

0xe444,	// (0x000693e4) list_double_graphic_pane_vc_g1

0x3fa0,	// (0x0005ef40) list_double_graphic_pane_vc_g2_ParamLimits

0x3fa0,	// (0x0005ef40) list_double_graphic_pane_vc_g2

0xdd2c,	// (0x00068ccc) list_double_graphic_pane_vc_g3_ParamLimits

0xdd2c,	// (0x00068ccc) list_double_graphic_pane_vc_g3

0x0003,

0xfa6c,	// (0x0006aa0c) list_double_graphic_pane_vc_g_ParamLimits

0xfa6c,	// (0x0006aa0c) list_double_graphic_pane_vc_g

0xe457,	// (0x000693f7) list_double_graphic_pane_vc_t1_ParamLimits

0xe457,	// (0x000693f7) list_double_graphic_pane_vc_t1

0xe476,	// (0x00069416) list_double_graphic_pane_vc_t2_ParamLimits

0xe476,	// (0x00069416) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0006aa15) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0006aa15) list_double_graphic_pane_vc_t

0xdcff,	// (0x00068c9f) aid_size_cell_fastswap

0x9227,	// (0x000641c7) aid_size_cell_touch_ParamLimits

0x9227,	// (0x000641c7) aid_size_cell_touch

0xf1b0,	// (0x0006a150) popup_fast_swap_wide_window_ParamLimits

0xf1b0,	// (0x0006a150) popup_fast_swap_wide_window

0x93f7,	// (0x00064397) touch_pane_ParamLimits

0x93f7,	// (0x00064397) touch_pane

0x848e,	// (0x0006342e) button_value_adjust_pane_cp2

0xdd95,	// (0x00068d35) button_value_adjust_pane_cp4

0xdd9d,	// (0x00068d3d) form_field_data_pane_cp2

0x9ecf,	// (0x00064e6f) form_field_data_wide_pane_cp2

0x8789,	// (0x00063729) bg_scroll_pane_ParamLimits

0xa1ea,	// (0x0006518a) scroll_handle_pane_ParamLimits

0xf364,	// (0x0006a304) scroll_sc2_down_pane_ParamLimits

0xf364,	// (0x0006a304) scroll_sc2_down_pane

0x87ba,	// (0x0006375a) scroll_sc2_up_pane_ParamLimits

0x87ba,	// (0x0006375a) scroll_sc2_up_pane

0xcc19,	// (0x00067bb9) grid_wheel_folder_pane_g1_ParamLimits

0xcc19,	// (0x00067bb9) grid_wheel_folder_pane_g1

0xf4e6,	// (0x0006a486) clock_nsta_pane_cp2_ParamLimits

0xf4e6,	// (0x0006a486) clock_nsta_pane_cp2

0xa509,	// (0x000654a9) listscroll_midp_pane_ParamLimits

0xa515,	// (0x000654b5) midp_canvas_pane

0x20a8,	// (0x0005d048) nsta_clock_indic_pane

0x20dc,	// (0x0005d07c) listscroll_form_pane_vc

0x20e4,	// (0x0005d084) listscroll_set_pane_vc_ParamLimits

0x20e4,	// (0x0005d084) listscroll_set_pane_vc

0xbe14,	// (0x00066db4) clock_nsta_pane

0xbe3e,	// (0x00066dde) indicator_nsta_pane

0x2535,	// (0x0005d4d5) bg_popup_sub_pane_cp2_ParamLimits

0x2549,	// (0x0005d4e9) find_pane_cp2_ParamLimits

0x2549,	// (0x0005d4e9) find_pane_cp2

0x255f,	// (0x0005d4ff) grid_toobar_pane_ParamLimits

0x2657,	// (0x0005d5f7) list_form_gen_pane_vc_ParamLimits

0x2657,	// (0x0005d5f7) list_form_gen_pane_vc

0x266d,	// (0x0005d60d) scroll_pane_cp8_vc_ParamLimits

0x266d,	// (0x0005d60d) scroll_pane_cp8_vc

0x26e9,	// (0x0005d689) data_form_wide_pane_vc_ParamLimits

0x26e9,	// (0x0005d689) data_form_wide_pane_vc

0x26f5,	// (0x0005d695) form_field_data_wide_pane_vc_g1

0x26fd,	// (0x0005d69d) form_field_data_wide_pane_vc_t1_ParamLimits

0x26fd,	// (0x0005d69d) form_field_data_wide_pane_vc_t1

0x84a2,	// (0x00063442) input_focus_pane_cp6_vc_ParamLimits

0x84a2,	// (0x00063442) input_focus_pane_cp6_vc

0x2a4a,	// (0x0005d9ea) list_midp_pane_ParamLimits

0x3dc4,	// (0x0005ed64) scroll_pane_cp16_ParamLimits

0x3dc4,	// (0x0005ed64) scroll_pane_cp16

0x2a98,	// (0x0005da38) button_value_adjust_pane_ParamLimits

0x2a98,	// (0x0005da38) button_value_adjust_pane

0xc7d0,	// (0x00067770) button_value_adjust_pane_cp6_ParamLimits

0xc7d0,	// (0x00067770) button_value_adjust_pane_cp6

0xc8ea,	// (0x0006788a) settings_code_pane_cp_ParamLimits

0xc8ea,	// (0x0006788a) settings_code_pane_cp

0x808a,	// (0x0006302a) cell_touch_pane_g1

0x808a,	// (0x0006302a) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0006a699) cell_touch_pane_g

0xcae8,	// (0x00067a88) cell_touch_pane_cp_ParamLimits

0xcae8,	// (0x00067a88) cell_touch_pane_cp

0xcb04,	// (0x00067aa4) cell_touch_pane_ParamLimits

0xcb04,	// (0x00067aa4) cell_touch_pane

0x808a,	// (0x0006302a) scroll_sc2_down_pane_g1

0x808a,	// (0x0006302a) scroll_sc2_up_pane_g1

0x8094,	// (0x00063034) bg_set_opt_pane_cp4_vc

0x42bb,	// (0x0005f25b) list_set_graphic_pane_vc_g1_ParamLimits

0x42bb,	// (0x0005f25b) list_set_graphic_pane_vc_g1

0x42c7,	// (0x0005f267) list_set_graphic_pane_vc_g2_ParamLimits

0x42c7,	// (0x0005f267) list_set_graphic_pane_vc_g2

0x0001,

0xf9e9,	// (0x0006a989) list_set_graphic_pane_vc_g_ParamLimits

0xf9e9,	// (0x0006a989) list_set_graphic_pane_vc_g

0x42d3,	// (0x0005f273) text_primary_small_cp13_vc_ParamLimits

0x42d3,	// (0x0005f273) text_primary_small_cp13_vc

0x42eb,	// (0x0005f28b) list_set_graphic_pane_vc_ParamLimits

0x42eb,	// (0x0005f28b) list_set_graphic_pane_vc

0x8094,	// (0x00063034) input_focus_pane_cp2_vc

0x808a,	// (0x0006302a) setting_code_pane_vc_g1

0x80f9,	// (0x00063099) setting_code_pane_vc_t1

0x42fe,	// (0x0005f29e) set_text_pane_vc_t1_ParamLimits

0x42fe,	// (0x0005f29e) set_text_pane_vc_t1

0x8094,	// (0x00063034) input_focus_pane_cp1_vc

0x431a,	// (0x0005f2ba) list_set_text_pane_vc

0x808a,	// (0x0006302a) setting_text_pane_vc_g1

0x8094,	// (0x00063034) bg_set_opt_pane_cp2_vc

0x80f0,	// (0x00063090) setting_slider_graphic_pane_vc_g1

0x4324,	// (0x0005f2c4) setting_slider_graphic_pane_vc_t1

0x4334,	// (0x0005f2d4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ee,	// (0x0006a98e) setting_slider_graphic_pane_vc_t

0x4344,	// (0x0005f2e4) slider_set_pane_cp_vc

0x434c,	// (0x0005f2ec) slider_set_pane_vc_g1

0x4355,	// (0x0005f2f5) slider_set_pane_vc_g2

0x0006,

0xf9f3,	// (0x0006a993) slider_set_pane_vc_g

0x84fa,	// (0x0006349a) set_opt_bg_pane_g1_copy1

0x8502,	// (0x000634a2) set_opt_bg_pane_g2_copy1

0x4381,	// (0x0005f321) set_opt_bg_pane_g3_copy1

0x8512,	// (0x000634b2) set_opt_bg_pane_g4_copy1

0x851a,	// (0x000634ba) set_opt_bg_pane_g5_copy1

0x8522,	// (0x000634c2) set_opt_bg_pane_g6_copy1

0x4389,	// (0x0005f329) set_opt_bg_pane_g7_copy1

0x4391,	// (0x0005f331) set_opt_bg_pane_g8_copy1

0x4399,	// (0x0005f339) set_opt_bg_pane_g9_copy1

0x8094,	// (0x00063034) bg_set_opt_pane_cp_vc

0x43a1,	// (0x0005f341) setting_slider_pane_vc_t1

0x43b0,	// (0x0005f350) setting_slider_pane_vc_t2

0x43c0,	// (0x0005f360) setting_slider_pane_vc_t3

0x0002,

0xfa02,	// (0x0006a9a2) setting_slider_pane_vc_t

0x43d0,	// (0x0005f370) slider_set_pane_vc

0x0a3e,	// (0x0005b9de) volume_set_pane_vc_g1

0x0dca,	// (0x0005bd6a) volume_set_pane_vc_g2

0x0dd3,	// (0x0005bd73) volume_set_pane_vc_g3

0x0ddc,	// (0x0005bd7c) volume_set_pane_vc_g4

0x0de5,	// (0x0005bd85) volume_set_pane_vc_g5

0x0dee,	// (0x0005bd8e) volume_set_pane_vc_g6

0x0df7,	// (0x0005bd97) volume_set_pane_vc_g7

0x0e00,	// (0x0005bda0) volume_set_pane_vc_g8

0x0e09,	// (0x0005bda9) volume_set_pane_vc_g9

0x0e12,	// (0x0005bdb2) volume_set_pane_vc_g10

0x0009,

0xfa09,	// (0x0006a9a9) volume_set_pane_vc_g

0x43d8,	// (0x0005f378) volume_set_pane_vc

0x43e0,	// (0x0005f380) button_value_adjust_pane_cp1_vc

0x43ea,	// (0x0005f38a) list_highlight_pane_cp2_vc

0x43f3,	// (0x0005f393) list_set_pane_vc_ParamLimits

0x43f3,	// (0x0005f393) list_set_pane_vc

0x4451,	// (0x0005f3f1) main_pane_set_vc_t1_ParamLimits

0x4451,	// (0x0005f3f1) main_pane_set_vc_t1

0x4466,	// (0x0005f406) main_pane_set_vc_t2_ParamLimits

0x4466,	// (0x0005f406) main_pane_set_vc_t2

0x4478,	// (0x0005f418) main_pane_set_vc_t3_ParamLimits

0x4478,	// (0x0005f418) main_pane_set_vc_t3

0x448a,	// (0x0005f42a) main_pane_set_vc_t4_ParamLimits

0x448a,	// (0x0005f42a) main_pane_set_vc_t4

0x0003,

0xfa1e,	// (0x0006a9be) main_pane_set_vc_t_ParamLimits

0xfa1e,	// (0x0006a9be) main_pane_set_vc_t

0x449c,	// (0x0005f43c) setting_code_pane_vc_ParamLimits

0x449c,	// (0x0005f43c) setting_code_pane_vc

0x44ab,	// (0x0005f44b) setting_slider_graphic_pane_vc

0x44ab,	// (0x0005f44b) setting_slider_pane_vc

0x44ab,	// (0x0005f44b) setting_text_pane_vc

0x44ab,	// (0x0005f44b) setting_volume_pane_vc

0x44b3,	// (0x0005f453) scroll_pane_cp121_vc

0x847c,	// (0x0006341c) set_content_pane_vc

0x44bb,	// (0x0005f45b) button_value_adjust_pane_g1

0x44c4,	// (0x0005f464) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0006aa1a) button_value_adjust_pane_g

0x44cd,	// (0x0005f46d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x44cd,	// (0x0005f46d) form_field_slider_wide_pane_vc_t1

0x44e1,	// (0x0005f481) form_field_slider_wide_pane_vc_t2_ParamLimits

0x44e1,	// (0x0005f481) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0006aa1f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0006aa1f) form_field_slider_wide_pane_vc_t

0x820c,	// (0x000631ac) input_focus_pane_cp10_vc_ParamLimits

0x820c,	// (0x000631ac) input_focus_pane_cp10_vc

0x450f,	// (0x0005f4af) slider_cont_pane_cp1_vc_ParamLimits

0x450f,	// (0x0005f4af) slider_cont_pane_cp1_vc

0x4521,	// (0x0005f4c1) slider_form_pane_g1_cp2

0x4355,	// (0x0005f2f5) slider_form_pane_g2_cp2

0x454e,	// (0x0005f4ee) form_field_slider_pane_vc_t3

0x455c,	// (0x0005f4fc) form_field_slider_pane_vc_t4

0x456a,	// (0x0005f50a) slider_form_pane_vc_ParamLimits

0x456a,	// (0x0005f50a) slider_form_pane_vc

0x4577,	// (0x0005f517) form_field_slider_pane_vc_t1_ParamLimits

0x4577,	// (0x0005f517) form_field_slider_pane_vc_t1

0x44e1,	// (0x0005f481) form_field_slider_pane_vc_t2_ParamLimits

0x44e1,	// (0x0005f481) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0006aa31) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0006aa31) form_field_slider_pane_vc_t

0x820c,	// (0x000631ac) input_focus_pane_cp9_vc_ParamLimits

0x820c,	// (0x000631ac) input_focus_pane_cp9_vc

0x4593,	// (0x0005f533) slider_cont_pane_vc_ParamLimits

0x4593,	// (0x0005f533) slider_cont_pane_vc

0x45a7,	// (0x0005f547) list_form_graphic_pane_cp_vc_ParamLimits

0x45a7,	// (0x0005f547) list_form_graphic_pane_cp_vc

0x26f5,	// (0x0005d695) form_field_popup_wide_pane_vc_g1

0x45bc,	// (0x0005f55c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x45bc,	// (0x0005f55c) form_field_popup_wide_pane_vc_t1

0x84a2,	// (0x00063442) input_focus_pane_cp8_vc_ParamLimits

0x84a2,	// (0x00063442) input_focus_pane_cp8_vc

0x4601,	// (0x0005f5a1) list_form_wide_pane_vc_ParamLimits

0x4601,	// (0x0005f5a1) list_form_wide_pane_vc

0x460d,	// (0x0005f5ad) list_form_graphic_pane_vc_g1

0x4615,	// (0x0005f5b5) list_form_graphic_pane_vc_t1_ParamLimits

0x4615,	// (0x0005f5b5) list_form_graphic_pane_vc_t1

0x80e2,	// (0x00063082) list_highlight_pane_cp5_vc_ParamLimits

0x80e2,	// (0x00063082) list_highlight_pane_cp5_vc

0x4631,	// (0x0005f5d1) list_form_graphic_pane_vc_ParamLimits

0x4631,	// (0x0005f5d1) list_form_graphic_pane_vc

0x26f5,	// (0x0005d695) form_field_popup_pane_vc_g1

0x4647,	// (0x0005f5e7) form_field_popup_pane_vc_t1_ParamLimits

0x4647,	// (0x0005f5e7) form_field_popup_pane_vc_t1

0x84a2,	// (0x00063442) input_focus_pane_cp7_vc_ParamLimits

0x84a2,	// (0x00063442) input_focus_pane_cp7_vc

0x465e,	// (0x0005f5fe) list_form_pane_vc_ParamLimits

0x465e,	// (0x0005f5fe) list_form_pane_vc

0x466a,	// (0x0005f60a) data_form_pane_vc_t1_ParamLimits

0x466a,	// (0x0005f60a) data_form_pane_vc_t1

0x84fa,	// (0x0006349a) input_focus_pane_vc_g1

0x8502,	// (0x000634a2) input_focus_pane_vc_g2

0x850a,	// (0x000634aa) input_focus_pane_vc_g3

0x8512,	// (0x000634b2) input_focus_pane_vc_g4

0x851a,	// (0x000634ba) input_focus_pane_vc_g5

0x8522,	// (0x000634c2) input_focus_pane_vc_g6

0x852a,	// (0x000634ca) input_focus_pane_vc_g7

0x8532,	// (0x000634d2) input_focus_pane_vc_g8

0x853a,	// (0x000634da) input_focus_pane_vc_g9

0x808a,	// (0x0006302a) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0006a622) input_focus_pane_vc_g

0x26e9,	// (0x0005d689) data_form_pane_vc_ParamLimits

0x26e9,	// (0x0005d689) data_form_pane_vc

0x26f5,	// (0x0005d695) form_field_data_pane_vc_g1

0x4685,	// (0x0005f625) form_field_data_pane_vc_t1_ParamLimits

0x4685,	// (0x0005f625) form_field_data_pane_vc_t1

0x84a2,	// (0x00063442) input_focus_pane_vc_ParamLimits

0x84a2,	// (0x00063442) input_focus_pane_vc

0x469f,	// (0x0005f63f) button_value_adjust_pane_cp3_vc

0x46a7,	// (0x0005f647) button_value_adjust_pane_cp5_vc

0x46af,	// (0x0005f64f) form_field_data_pane_vc_ParamLimits

0x46af,	// (0x0005f64f) form_field_data_pane_vc

0x46c6,	// (0x0005f666) form_field_data_pane_vc_cp2

0x46ce,	// (0x0005f66e) form_field_data_wide_pane_vc_ParamLimits

0x46ce,	// (0x0005f66e) form_field_data_wide_pane_vc

0x46e4,	// (0x0005f684) form_field_data_wide_pane_vc_cp2

0x46ec,	// (0x0005f68c) form_field_popup_pane_vc_ParamLimits

0x46ec,	// (0x0005f68c) form_field_popup_pane_vc

0x4703,	// (0x0005f6a3) form_field_popup_wide_pane_vc_ParamLimits

0x4703,	// (0x0005f6a3) form_field_popup_wide_pane_vc

0x4719,	// (0x0005f6b9) form_field_slider_pane_vc_ParamLimits

0x4719,	// (0x0005f6b9) form_field_slider_pane_vc

0x472c,	// (0x0005f6cc) form_field_slider_wide_pane_vc_ParamLimits

0x472c,	// (0x0005f6cc) form_field_slider_wide_pane_vc

0xcb21,	// (0x00067ac1) grid_touch_1_pane_ParamLimits

0xcb21,	// (0x00067ac1) grid_touch_1_pane

0xcb35,	// (0x00067ad5) grid_touch_2_pane_ParamLimits

0xcb35,	// (0x00067ad5) grid_touch_2_pane

0x47fa,	// (0x0005f79a) touch_pane_g1_ParamLimits

0x47fa,	// (0x0005f79a) touch_pane_g1

0x4763,	// (0x0005f703) cell_app_pane_cp_wide_ParamLimits

0x4763,	// (0x0005f703) cell_app_pane_cp_wide

0x4774,	// (0x0005f714) grid_popup_fast_wide_pane_ParamLimits

0x4774,	// (0x0005f714) grid_popup_fast_wide_pane

0x4788,	// (0x0005f728) scroll_pane_cp19_ParamLimits

0x4788,	// (0x0005f728) scroll_pane_cp19

0x8094,	// (0x00063034) bg_popup_window_pane_cp20

0x479c,	// (0x0005f73c) listscroll_popup_fast_wide_pane

0xcb5f,	// (0x00067aff) grid_indicator_nsta_pane

0x47a4,	// (0x0005f744) clock_nsta_pane_g1

0x47ad,	// (0x0005f74d) clock_nsta_pane_t1

0xcb6d,	// (0x00067b0d) cell_indicator_nsta_pane_ParamLimits

0xcb6d,	// (0x00067b0d) cell_indicator_nsta_pane

0x47fa,	// (0x0005f79a) cell_indicator_nsta_pane_g1

0xcb84,	// (0x00067b24) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0006aa42) cell_indicator_nsta_pane_g

0x4815,	// (0x0005f7b5) clock_nsta_pane_cp

0x481e,	// (0x0005f7be) indicator_nsta_pane_cp

0x4826,	// (0x0005f7c6) nsta_clock_indic_pane_g1

0x811e,	// (0x000630be) grid_indicator_pane

0xa284,	// (0x00065224) scroll_pane_cp29

0xf435,	// (0x0006a3d5) indicator_nsta_pane_cp2_ParamLimits

0xf435,	// (0x0006a3d5) indicator_nsta_pane_cp2

0x80e2,	// (0x00063082) main_apps_wheel_pane

0xc206,	// (0x000671a6) form_midp_field_text_pane_ParamLimits

0x2a56,	// (0x0005d9f6) scroll_bar_cp050_ParamLimits

0x4876,	// (0x0005f816) cell_indicator_pane_ParamLimits

0x4876,	// (0x0005f816) cell_indicator_pane

0x488f,	// (0x0005f82f) cell_indicator_pane_g1

0xcba3,	// (0x00067b43) grid_wheel_folder_pane_ParamLimits

0xcba3,	// (0x00067b43) grid_wheel_folder_pane

0xcbb1,	// (0x00067b51) list_wheel_apps_pane_ParamLimits

0xcbb1,	// (0x00067b51) list_wheel_apps_pane

0xcbbf,	// (0x00067b5f) main_apps_wheel_pane_g1_ParamLimits

0xcbbf,	// (0x00067b5f) main_apps_wheel_pane_g1

0xcbcb,	// (0x00067b6b) main_apps_wheel_pane_g2_ParamLimits

0xcbcb,	// (0x00067b6b) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0006aa5e) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0006aa5e) main_apps_wheel_pane_g

0xcbd9,	// (0x00067b79) main_apps_wheel_pane_t1_ParamLimits

0xcbd9,	// (0x00067b79) main_apps_wheel_pane_t1

0xcbed,	// (0x00067b8d) list_wheel_apps_pane_g1

0xcbf5,	// (0x00067b95) list_wheel_apps_pane_g2

0xcbfd,	// (0x00067b9d) list_wheel_apps_pane_g3

0xcc05,	// (0x00067ba5) list_wheel_apps_pane_g4

0xcc0f,	// (0x00067baf) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0006aa63) list_wheel_apps_pane_g

0xdf8c,	// (0x00068f2c) navi_icon_text_pane

0xafdd,	// (0x00065f7d) aid_fill_nsta

0x4956,	// (0x0005f8f6) navi_icon_text_pane_g1

0x4962,	// (0x0005f902) navi_icon_text_pane_t1

0xde7c,	// (0x00068e1c) list_set_graphic_pane_t1_ParamLimits

0xde7c,	// (0x00068e1c) list_set_graphic_pane_t1

0x3199,	// (0x0005e139) popup_midp_note_alarm_window_t6_ParamLimits

0x3199,	// (0x0005e139) popup_midp_note_alarm_window_t6

0x31ab,	// (0x0005e14b) popup_midp_note_alarm_window_t7_ParamLimits

0x31ab,	// (0x0005e14b) popup_midp_note_alarm_window_t7

0x31bd,	// (0x0005e15d) popup_midp_note_alarm_window_t8_ParamLimits

0x31bd,	// (0x0005e15d) popup_midp_note_alarm_window_t8

0x31cf,	// (0x0005e16f) popup_midp_note_alarm_window_t9_ParamLimits

0x31cf,	// (0x0005e16f) popup_midp_note_alarm_window_t9

0x31e1,	// (0x0005e181) popup_midp_note_alarm_window_t10_ParamLimits

0x31e1,	// (0x0005e181) popup_midp_note_alarm_window_t10

0x31f3,	// (0x0005e193) popup_midp_note_alarm_window_t11_ParamLimits

0x31f3,	// (0x0005e193) popup_midp_note_alarm_window_t11

0xc552,	// (0x000674f2) scroll_pane_cp17_ParamLimits

0xc552,	// (0x000674f2) scroll_pane_cp17

0x0a3e,	// (0x0005b9de) volume_small_pane_cp_g1

0x0e1b,	// (0x0005bdbb) volume_small_pane_cp_g2

0x0e24,	// (0x0005bdc4) volume_small_pane_cp_g3

0x0e2d,	// (0x0005bdcd) volume_small_pane_cp_g4

0x0e36,	// (0x0005bdd6) volume_small_pane_cp_g5

0x0de5,	// (0x0005bd85) volume_small_pane_cp_g6

0x0e3f,	// (0x0005bddf) volume_small_pane_cp_g7

0x0e48,	// (0x0005bde8) volume_small_pane_cp_g8

0x0e51,	// (0x0005bdf1) volume_small_pane_cp_g9

0x0e5a,	// (0x0005bdfa) volume_small_pane_cp_g10

0x0010,	// (0x0005afb0) midp_ticker_pane_g1_ParamLimits

0x001c,	// (0x0005afbc) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0006a6ee) midp_ticker_pane_g_ParamLimits

0x0028,	// (0x0005afc8) midp_ticker_pane_t1_ParamLimits

0xb001,	// (0x00065fa1) aid_fill_nsta_2

0x2a42,	// (0x0005d9e2) list_form2_midp_pane

0x3b4d,	// (0x0005eaed) midp_editing_number_pane_ParamLimits

0x3b5c,	// (0x0005eafc) midp_ticker_pane_ParamLimits

0x4974,	// (0x0005f914) form2_midp_field_pane

0x4998,	// (0x0005f938) scroll_pane_cp51

0x49b8,	// (0x0005f958) form2_midp_button_pane_ParamLimits

0x49b8,	// (0x0005f958) form2_midp_button_pane

0x49ca,	// (0x0005f96a) form2_midp_content_pane_ParamLimits

0x49ca,	// (0x0005f96a) form2_midp_content_pane

0x49e4,	// (0x0005f984) form2_midp_field_choice_group_pane

0x49ec,	// (0x0005f98c) form2_midp_field_pane_g1

0x49f4,	// (0x0005f994) form2_midp_field_pane_g2

0x49fc,	// (0x0005f99c) form2_midp_field_pane_g3

0x4a04,	// (0x0005f9a4) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0006aa88) form2_midp_field_pane_g

0x4a0c,	// (0x0005f9ac) form2_midp_gauge_slider_pane

0x4a14,	// (0x0005f9b4) form2_midp_gauge_wait_pane

0x4a1c,	// (0x0005f9bc) form2_midp_image_pane_ParamLimits

0x4a1c,	// (0x0005f9bc) form2_midp_image_pane

0xcc42,	// (0x00067be2) form2_midp_label_pane_ParamLimits

0xcc42,	// (0x00067be2) form2_midp_label_pane

0xcc5b,	// (0x00067bfb) form2_midp_label_pane_cp_ParamLimits

0xcc5b,	// (0x00067bfb) form2_midp_label_pane_cp

0x4a71,	// (0x0005fa11) form2_midp_string_pane_ParamLimits

0x4a71,	// (0x0005fa11) form2_midp_string_pane

0xb2f5,	// (0x00066295) form2_midp_text_pane_ParamLimits

0xb2f5,	// (0x00066295) form2_midp_text_pane

0x4a83,	// (0x0005fa23) form2_midp_time_pane

0x4a93,	// (0x0005fa33) input_focus_pane_cp51_ParamLimits

0x4a93,	// (0x0005fa33) input_focus_pane_cp51

0xcc7a,	// (0x00067c1a) form2_midp_label_pane_t1_ParamLimits

0xcc7a,	// (0x00067c1a) form2_midp_label_pane_t1

0xb30e,	// (0x000662ae) form2_mdip_text_pane_t1_ParamLimits

0xb30e,	// (0x000662ae) form2_mdip_text_pane_t1

0xe4a0,	// (0x00069440) form2_midp_time_pane_t1

0x4af4,	// (0x0005fa94) form2_midp_gauge_slider_pane_t1

0xccba,	// (0x00067c5a) form2_midp_gauge_slider_pane_t2

0xcccc,	// (0x00067c6c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0006aa91) form2_midp_gauge_slider_pane_t

0x4b2a,	// (0x0005faca) form2_midp_slider_pane

0x4b36,	// (0x0005fad6) form2_midp_gauge_wait_pane_t1

0x4b44,	// (0x0005fae4) form2_midp_wait_pane_ParamLimits

0x4b44,	// (0x0005fae4) form2_midp_wait_pane

0xccde,	// (0x00067c7e) list_single_2graphic_pane_cp4_ParamLimits

0xccde,	// (0x00067c7e) list_single_2graphic_pane_cp4

0xc15d,	// (0x000670fd) list_single_midp_graphic_pane_cp_ParamLimits

0xc15d,	// (0x000670fd) list_single_midp_graphic_pane_cp

0x8094,	// (0x00063034) list_highlight_pane_cp20

0x4b97,	// (0x0005fb37) list_single_2graphic_pane_g1_cp4

0x419f,	// (0x0005f13f) list_single_2graphic_pane_g2_cp4

0x4b9f,	// (0x0005fb3f) list_single_2graphic_pane_t1_cp4

0x80e2,	// (0x00063082) list_highlight_pane_cp21

0x4bae,	// (0x0005fb4e) list_single_midp_graphic_pane_g4_cp

0x4bbd,	// (0x0005fb5d) list_single_midp_graphic_pane_t1_cp

0xccf3,	// (0x00067c93) form2_mdip_string_pane_t1_ParamLimits

0xccf3,	// (0x00067c93) form2_mdip_string_pane_t1

0x8094,	// (0x00063034) bg_wml_button_pane_cp2

0x808a,	// (0x0006302a) form2_midp_image_pane_g1

0xdd66,	// (0x00068d06) list_double_large_graphic_pane_g5_ParamLimits

0xdd66,	// (0x00068d06) list_double_large_graphic_pane_g5

0xa509,	// (0x000654a9) midp_form_pane_ParamLimits

0x80e2,	// (0x00063082) main_apps_wheel_pane_ParamLimits

0xacbb,	// (0x00065c5b) popup_preview_window_ParamLimits

0xacbb,	// (0x00065c5b) popup_preview_window

0xaf88,	// (0x00065f28) popup_touch_info_window_ParamLimits

0xaf88,	// (0x00065f28) popup_touch_info_window

0xafa6,	// (0x00065f46) popup_touch_menu_window_ParamLimits

0xafa6,	// (0x00065f46) popup_touch_menu_window

0x8080,	// (0x00063020) bg_popup_sub_pane_cp6

0x4cd9,	// (0x0005fc79) list_touch_menu_pane

0xcd69,	// (0x00067d09) list_single_touch_menu_pane_ParamLimits

0xcd69,	// (0x00067d09) list_single_touch_menu_pane

0xcd7d,	// (0x00067d1d) list_single_touch_menu_pane_t1

0x80e2,	// (0x00063082) bg_popup_sub_pane_cp7_ParamLimits

0x80e2,	// (0x00063082) bg_popup_sub_pane_cp7

0x4d05,	// (0x0005fca5) heading_sub_pane

0x4d0d,	// (0x0005fcad) list_touch_info_pane_ParamLimits

0x4d0d,	// (0x0005fcad) list_touch_info_pane

0x4d1c,	// (0x0005fcbc) list_single_touch_info_pane_ParamLimits

0x4d1c,	// (0x0005fcbc) list_single_touch_info_pane

0x4d2e,	// (0x0005fcce) list_single_touch_info_pane_t1

0x4d3c,	// (0x0005fcdc) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0006aa9f) list_single_touch_info_pane_t

0xe0de,	// (0x0006907e) bg_popup_heading_pane_cp

0x4d4a,	// (0x0005fcea) heading_sub_pane_t1

0x2683,	// (0x0005d623) bg_popup_preview_window_pane_cp_ParamLimits

0x2683,	// (0x0005d623) bg_popup_preview_window_pane_cp

0x4d05,	// (0x0005fca5) heading_preview_pane

0x4d0d,	// (0x0005fcad) list_preview_pane_ParamLimits

0x4d0d,	// (0x0005fcad) list_preview_pane

0x4d58,	// (0x0005fcf8) popup_preview_window_g1

0x4d1c,	// (0x0005fcbc) list_single_preview_pane_ParamLimits

0x4d1c,	// (0x0005fcbc) list_single_preview_pane

0x4d60,	// (0x0005fd00) list_single_preview_pane_g1

0x4d68,	// (0x0005fd08) list_single_preview_pane_t1

0x4d2e,	// (0x0005fcce) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0006aaa4) list_single_preview_pane_t

0x4d76,	// (0x0005fd16) bg_popup_heading_pane_cp2_ParamLimits

0x4d76,	// (0x0005fd16) bg_popup_heading_pane_cp2

0x4d8c,	// (0x0005fd2c) heading_preview_pane_g1

0x4d94,	// (0x0005fd34) heading_preview_pane_t1_ParamLimits

0x4d94,	// (0x0005fd34) heading_preview_pane_t1

0x8135,	// (0x000630d5) soft_indicator_pane_t1_ParamLimits

0x841e,	// (0x000633be) scroll_pane_ParamLimits

0x87a8,	// (0x00063748) scroll_sc2_left_pane

0x87b1,	// (0x00063751) scroll_sc2_right_pane

0x87d0,	// (0x00063770) scroll_bg_pane_g1_ParamLimits

0x87e5,	// (0x00063785) scroll_bg_pane_g2_ParamLimits

0x87fd,	// (0x0006379d) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0006a679) scroll_bg_pane_g_ParamLimits

0x87d0,	// (0x00063770) scroll_handle_pane_g1_ParamLimits

0x8812,	// (0x000637b2) scroll_handle_pane_g2_ParamLimits

0x87fd,	// (0x0006379d) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0006a680) scroll_handle_pane_g_ParamLimits

0xa862,	// (0x00065802) popup_choice_list_window_ParamLimits

0xa862,	// (0x00065802) popup_choice_list_window

0x2541,	// (0x0005d4e1) choice_list_pane

0x25c3,	// (0x0005d563) cell_toolbar_pane_t1

0x25eb,	// (0x0005d58b) toolbar_button_pane_ParamLimits

0x36bf,	// (0x0005e65f) ai_gene_pane_1_t2_ParamLimits

0x36bf,	// (0x0005e65f) ai_gene_pane_1_t2

0x0001,

0xf8fc,	// (0x0006a89c) ai_gene_pane_1_t_ParamLimits

0xf8fc,	// (0x0006a89c) ai_gene_pane_1_t

0x4db1,	// (0x0005fd51) scroll_sc2_left_pane_g1

0x4db1,	// (0x0005fd51) scroll_sc2_right_pane_g1

0x20d0,	// (0x0005d070) bg_popup_sub_pane_cp10

0x4dbb,	// (0x0005fd5b) list_choice_list_pane

0xcd8b,	// (0x00067d2b) list_single_choice_list_pane_ParamLimits

0xcd8b,	// (0x00067d2b) list_single_choice_list_pane

0xcd9f,	// (0x00067d3f) list_single_choice_list_pane_g1

0xa0ae,	// (0x0006504e) list_single_choice_list_pane_t1_ParamLimits

0xa0ae,	// (0x0006504e) list_single_choice_list_pane_t1

0x4def,	// (0x0005fd8f) choice_list_pane_g1

0xcda7,	// (0x00067d47) choice_list_pane_t1

0x8080,	// (0x00063020) input_focus_pane_cp11

0x871d,	// (0x000636bd) title_pane_stacon_g2_ParamLimits

0x871d,	// (0x000636bd) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0006a65f) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0006a65f) title_pane_stacon_g

0xe0de,	// (0x0006907e) cursor_press_pane

0xa909,	// (0x000658a9) popup_fep_hwr_window_ParamLimits

0xa909,	// (0x000658a9) popup_fep_hwr_window

0x045f,	// (0x0005b3ff) popup_fep_vkb_window_ParamLimits

0x045f,	// (0x0005b3ff) popup_fep_vkb_window

0xcdb5,	// (0x00067d55) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0006aacd) fep_vkb_side_pane_g_ParamLimits

0x0ed7,	// (0x0005be77) fep_hwr_candidate_pane_ParamLimits

0x0ed7,	// (0x0005be77) fep_hwr_candidate_pane

0x0f01,	// (0x0005bea1) fep_hwr_side_pane_ParamLimits

0x0f01,	// (0x0005bea1) fep_hwr_side_pane

0x0f21,	// (0x0005bec1) fep_hwr_top_pane_ParamLimits

0x0f21,	// (0x0005bec1) fep_hwr_top_pane

0x0f39,	// (0x0005bed9) fep_hwr_write_pane_ParamLimits

0x0f39,	// (0x0005bed9) fep_hwr_write_pane

0xfb2d,	// (0x0006aacd) fep_vkb_side_pane_g

0x4e0d,	// (0x0005fdad) fep_hwr_top_pane_g1

0x4e1f,	// (0x0005fdbf) fep_hwr_top_pane_g2

0x0f73,	// (0x0005bf13) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0006aaa9) fep_hwr_top_pane_g

0x0f88,	// (0x0005bf28) fep_hwr_top_text_pane

0xbc43,	// (0x00066be3) fep_hwr_top_text_pane_g1

0x4e55,	// (0x0005fdf5) fep_hwr_top_text_pane_t1

0x107e,	// (0x0005c01e) fep_hwr_candidate_pane_g1

0x509a,	// (0x0006003a) fep_vkb_keypad_pane_g3_ParamLimits

0x509a,	// (0x0006003a) fep_vkb_keypad_pane_g3

0x50c2,	// (0x00060062) fep_vkb_keypad_pane_g4_ParamLimits

0x50c2,	// (0x00060062) fep_vkb_keypad_pane_g4

0x5131,	// (0x000600d1) fep_vkb_bottom_pane_g2_ParamLimits

0x5131,	// (0x000600d1) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0006aad4) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0006aad4) fep_vkb_bottom_pane_g

0x4db1,	// (0x0005fd51) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0006aade) cell_vkb_side_pane_g

0x51bc,	// (0x0006015c) cell_vkb_side_pane_t1

0x51ca,	// (0x0006016a) cell_vkb_side_pane_t1_copy1

0x4db1,	// (0x0005fd51) bg_fep_vkb_candidate_pane_g2

0x52f6,	// (0x00060296) cell_vkb_candidate_pane_ParamLimits

0x4e63,	// (0x0005fe03) aid_size_cell_vkb_ParamLimits

0x4e63,	// (0x0005fe03) aid_size_cell_vkb

0x52f6,	// (0x00060296) cell_vkb_candidate_pane

0x10a5,	// (0x0005c045) bg_popup_fep_shadow_pane_g1

0xcdcf,	// (0x00067d6f) fep_vkb_bottom_pane_ParamLimits

0xcdcf,	// (0x00067d6f) fep_vkb_bottom_pane

0x4f27,	// (0x0005fec7) fep_vkb_candidate_pane_ParamLimits

0x4f27,	// (0x0005fec7) fep_vkb_candidate_pane

0xcdf4,	// (0x00067d94) fep_vkb_keypad_pane_ParamLimits

0xcdf4,	// (0x00067d94) fep_vkb_keypad_pane

0xce29,	// (0x00067dc9) fep_vkb_side_pane_ParamLimits

0xce29,	// (0x00067dc9) fep_vkb_side_pane

0xce65,	// (0x00067e05) fep_vkb_top_pane_ParamLimits

0xce65,	// (0x00067e05) fep_vkb_top_pane

0x4ff3,	// (0x0005ff93) fep_vkb_top_pane_g1_ParamLimits

0x4ff3,	// (0x0005ff93) fep_vkb_top_pane_g1

0x5002,	// (0x0005ffa2) fep_vkb_top_pane_g2_ParamLimits

0x5002,	// (0x0005ffa2) fep_vkb_top_pane_g2

0x5011,	// (0x0005ffb1) fep_vkb_top_pane_g3_ParamLimits

0x5011,	// (0x0005ffb1) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0006aac4) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0006aac4) fep_vkb_top_pane_g

0x502f,	// (0x0005ffcf) fep_vkb_top_text_pane_ParamLimits

0x502f,	// (0x0005ffcf) fep_vkb_top_text_pane

0xce9a,	// (0x00067e3a) fep_vkb_side_pane_g1_ParamLimits

0xce9a,	// (0x00067e3a) fep_vkb_side_pane_g1

0x5089,	// (0x00060029) grid_vkb_side_pane_ParamLimits

0x5089,	// (0x00060029) grid_vkb_side_pane

0x10ad,	// (0x0005c04d) bg_popup_fep_shadow_pane_g2

0x10b6,	// (0x0005c056) bg_popup_fep_shadow_pane_g3

0x10be,	// (0x0005c05e) bg_popup_fep_shadow_pane_g4

0x10c7,	// (0x0005c067) bg_popup_fep_shadow_pane_g5

0x10d1,	// (0x0005c071) bg_popup_fep_shadow_pane_g6

0x10d9,	// (0x0005c079) bg_popup_fep_shadow_pane_g7

0x8512,	// (0x000634b2) bg_popup_fep_shadow_pane_g8

0x50e0,	// (0x00060080) grid_vkb_keypad_number_pane_ParamLimits

0x50e0,	// (0x00060080) grid_vkb_keypad_number_pane

0x50f0,	// (0x00060090) grid_vkb_keypad_pane_ParamLimits

0x50f0,	// (0x00060090) grid_vkb_keypad_pane

0x5116,	// (0x000600b6) fep_vkb_bottom_pane_g1_ParamLimits

0x5116,	// (0x000600b6) fep_vkb_bottom_pane_g1

0x513f,	// (0x000600df) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x513f,	// (0x000600df) grid_vkb_keypad_bottom_left_pane

0x5154,	// (0x000600f4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5154,	// (0x000600f4) grid_vkb_keypad_bottom_right_pane

0x5169,	// (0x00060109) fep_vkb_top_text_pane_g1

0xcee1,	// (0x00067e81) fep_vkb_top_text_pane_t1

0xcef3,	// (0x00067e93) cell_vkb_side_pane_ParamLimits

0xcef3,	// (0x00067e93) cell_vkb_side_pane

0x4db1,	// (0x0005fd51) cell_vkb_side_pane_g1

0x51d8,	// (0x00060178) cell_vkb_keypad_pane_ParamLimits

0x51d8,	// (0x00060178) cell_vkb_keypad_pane

0x524d,	// (0x000601ed) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0006aaf1) bg_popup_fep_shadow_pane_g

0x10eb,	// (0x0005c08b) cell_hwr_side_pane_g1

0x10eb,	// (0x0005c08b) cell_hwr_side_pane_g2

0x5257,	// (0x000601f7) cell_vkb_keypad_pane_t1

0xcf09,	// (0x00067ea9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf09,	// (0x00067ea9) cell_vkb_keypad_bottom_left_pane

0xcf1e,	// (0x00067ebe) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf1e,	// (0x00067ebe) cell_vkb_keypad_bottom_right_pane

0x4db1,	// (0x0005fd51) cell_vkb_keypad_bottom_left_pane_g1

0x4db1,	// (0x0005fd51) cell_vkb_keypad_bottom_right_pane_g1

0x52bb,	// (0x0006025b) cell_vkb_keypad_number_pane_ParamLimits

0x52bb,	// (0x0006025b) cell_vkb_keypad_number_pane

0x52da,	// (0x0006027a) cell_vkb_keypad_number_pane_g1

0x52e4,	// (0x00060284) cell_vkb_keypad_number_pane_g2

0x52ed,	// (0x0006028d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0006aae3) cell_vkb_keypad_number_pane_g

0x5257,	// (0x000601f7) cell_vkb_keypad_number_pane_t1

0x5311,	// (0x000602b1) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0006ab04) cell_hwr_side_pane_g

0x532a,	// (0x000602ca) cell_hwr_side_pane_t1

0x10f5,	// (0x0005c095) cell_hwr_side_pane_t1_copy1

0x1103,	// (0x0005c0a3) cell_hwr_candidate_pane_g1

0x1132,	// (0x0005c0d2) cell_hwr_candidate_pane_t1

0x4db1,	// (0x0005fd51) cell_vkb_candidate_pane_g2

0x536e,	// (0x0006030e) cell_vkb_candidate_pane_t1

0x0e9e,	// (0x0005be3e) bg_popup_fep_shadow_pane_ParamLimits

0x0e9e,	// (0x0005be3e) bg_popup_fep_shadow_pane

0x0f53,	// (0x0005bef3) bg_fep_hwr_top_pane_g4

0x4e31,	// (0x0005fdd1) bg_hwr_side_pane_g1_ParamLimits

0x4e31,	// (0x0005fdd1) bg_hwr_side_pane_g1

0xb340,	// (0x000662e0) cell_hwr_side_pane_ParamLimits

0xb340,	// (0x000662e0) cell_hwr_side_pane

0x0fff,	// (0x0005bf9f) fep_hwr_write_pane_g1_ParamLimits

0x0fff,	// (0x0005bf9f) fep_hwr_write_pane_g1

0x100c,	// (0x0005bfac) fep_hwr_write_pane_g2_ParamLimits

0x100c,	// (0x0005bfac) fep_hwr_write_pane_g2

0x1019,	// (0x0005bfb9) fep_hwr_write_pane_g3_ParamLimits

0x1019,	// (0x0005bfb9) fep_hwr_write_pane_g3

0xb360,	// (0x00066300) fep_hwr_write_pane_g4_ParamLimits

0xb360,	// (0x00066300) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0006aab0) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0006aab0) fep_hwr_write_pane_g

0x0f53,	// (0x0005bef3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0f53,	// (0x0005bef3) bg_fep_hwr_candidate_pane_g2

0x103c,	// (0x0005bfdc) cell_hwr_candidate_pane_ParamLimits

0x103c,	// (0x0005bfdc) cell_hwr_candidate_pane

0x107e,	// (0x0005c01e) fep_hwr_candidate_pane_g1_ParamLimits

0x4e91,	// (0x0005fe31) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4e91,	// (0x0005fe31) bg_popup_fep_shadow_pane_cp2

0x5021,	// (0x0005ffc1) fep_vkb_top_pane_g4_ParamLimits

0x5021,	// (0x0005ffc1) fep_vkb_top_pane_g4

0x5067,	// (0x00060007) fep_vkb_side_pane_g2_ParamLimits

0x5067,	// (0x00060007) fep_vkb_side_pane_g2

0x9dd4,	// (0x00064d74) list_setting_pane_t4_ParamLimits

0x9dd4,	// (0x00064d74) list_setting_pane_t4

0x9e6e,	// (0x00064e0e) list_setting_number_pane_t5_ParamLimits

0x9e6e,	// (0x00064e0e) list_setting_number_pane_t5

0xbc7a,	// (0x00066c1a) list_double_heading_pane_cp2_ParamLimits

0xbc7a,	// (0x00066c1a) list_double_heading_pane_cp2

0x4092,	// (0x0005f032) list_double_heading_pane_g1_cp2_ParamLimits

0x4092,	// (0x0005f032) list_double_heading_pane_g1_cp2

0x537c,	// (0x0006031c) list_double_heading_pane_g2_cp2_ParamLimits

0x537c,	// (0x0006031c) list_double_heading_pane_g2_cp2

0x5390,	// (0x00060330) list_double_heading_pane_t1_cp2_ParamLimits

0x5390,	// (0x00060330) list_double_heading_pane_t1_cp2

0x53a6,	// (0x00060346) list_double_heading_pane_t2_cp2_ParamLimits

0x53a6,	// (0x00060346) list_double_heading_pane_t2_cp2

0x8078,	// (0x00063018) aid_value_unit2

0xf1c6,	// (0x0006a166) popup_preview_fixed_window

0x821a,	// (0x000631ba) bg_popup_preview_window_pane_cp02

0x53b8,	// (0x00060358) list_preview_fixed_pane

0x53fe,	// (0x0006039e) list_empty_pane_fp_ParamLimits

0x53fe,	// (0x0006039e) list_empty_pane_fp

0x53fe,	// (0x0006039e) list_single_cale_day_pane_fp_ParamLimits

0x53fe,	// (0x0006039e) list_single_cale_day_pane_fp

0x53fe,	// (0x0006039e) list_single_graphic_heading_pane_fp_ParamLimits

0x53fe,	// (0x0006039e) list_single_graphic_heading_pane_fp

0x53fe,	// (0x0006039e) list_single_graphic_pane_fp_ParamLimits

0x53fe,	// (0x0006039e) list_single_graphic_pane_fp

0x53fe,	// (0x0006039e) list_single_heading_pane_fp_ParamLimits

0x53fe,	// (0x0006039e) list_single_heading_pane_fp

0x53fe,	// (0x0006039e) list_single_pane_fp_ParamLimits

0x53fe,	// (0x0006039e) list_single_pane_fp

0x5414,	// (0x000603b4) list_single_pane_fp_g1_ParamLimits

0x5414,	// (0x000603b4) list_single_pane_fp_g1

0x5420,	// (0x000603c0) list_single_pane_fp_g2_ParamLimits

0x5420,	// (0x000603c0) list_single_pane_fp_g2

0x542c,	// (0x000603cc) list_single_pane_fp_g3_ParamLimits

0x542c,	// (0x000603cc) list_single_pane_fp_g3

0x5440,	// (0x000603e0) list_single_pane_fp_g4_ParamLimits

0x5440,	// (0x000603e0) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0006ab17) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0006ab17) list_single_pane_fp_g

0xe4c0,	// (0x00069460) list_single_pane_fp_t1_ParamLimits

0xe4c0,	// (0x00069460) list_single_pane_fp_t1

0xe4d7,	// (0x00069477) list_single_graphic_pane_fp_g1_ParamLimits

0xe4d7,	// (0x00069477) list_single_graphic_pane_fp_g1

0x5414,	// (0x000603b4) list_single_graphic_pane_fp_g2_ParamLimits

0x5414,	// (0x000603b4) list_single_graphic_pane_fp_g2

0x5420,	// (0x000603c0) list_single_graphic_pane_fp_g3_ParamLimits

0x5420,	// (0x000603c0) list_single_graphic_pane_fp_g3

0x542c,	// (0x000603cc) list_single_graphic_pane_fp_g4_ParamLimits

0x542c,	// (0x000603cc) list_single_graphic_pane_fp_g4

0x5440,	// (0x000603e0) list_single_graphic_pane_fp_g5_ParamLimits

0x5440,	// (0x000603e0) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0006ab20) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0006ab20) list_single_graphic_pane_fp_g

0xe4e3,	// (0x00069483) list_single_graphic_pane_fp_t1_ParamLimits

0xe4e3,	// (0x00069483) list_single_graphic_pane_fp_t1

0xe4d7,	// (0x00069477) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe4d7,	// (0x00069477) list_single_graphic_heading_pane_fp_g1

0x5414,	// (0x000603b4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5414,	// (0x000603b4) list_single_graphic_heading_pane_fp_g2

0x5420,	// (0x000603c0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5420,	// (0x000603c0) list_single_graphic_heading_pane_fp_g3

0x542c,	// (0x000603cc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x542c,	// (0x000603cc) list_single_graphic_heading_pane_fp_g4

0x5440,	// (0x000603e0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5440,	// (0x000603e0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0006ab20) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0006ab20) list_single_graphic_heading_pane_fp_g

0xe4f9,	// (0x00069499) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe4f9,	// (0x00069499) list_single_graphic_heading_pane_fp_t1

0xe50f,	// (0x000694af) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe50f,	// (0x000694af) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0006ab2b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0006ab2b) list_single_graphic_heading_pane_fp_t

0xe521,	// (0x000694c1) list_single_cale_day_pane_fp_g1_ParamLimits

0xe521,	// (0x000694c1) list_single_cale_day_pane_fp_g1

0x544c,	// (0x000603ec) list_single_cale_day_pane_fp_g2_ParamLimits

0x544c,	// (0x000603ec) list_single_cale_day_pane_fp_g2

0x3fbd,	// (0x0005ef5d) list_single_cale_day_pane_fp_g3_ParamLimits

0x3fbd,	// (0x0005ef5d) list_single_cale_day_pane_fp_g3

0x3fe5,	// (0x0005ef85) list_single_cale_day_pane_fp_g4_ParamLimits

0x3fe5,	// (0x0005ef85) list_single_cale_day_pane_fp_g4

0x4009,	// (0x0005efa9) list_single_cale_day_pane_fp_g5_ParamLimits

0x4009,	// (0x0005efa9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0006ab30) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0006ab30) list_single_cale_day_pane_fp_g

0xe559,	// (0x000694f9) list_single_cale_day_pane_fp_t1_ParamLimits

0xe559,	// (0x000694f9) list_single_cale_day_pane_fp_t1

0xe57f,	// (0x0006951f) list_single_cale_day_pane_fp_t2_ParamLimits

0xe57f,	// (0x0006951f) list_single_cale_day_pane_fp_t2

0xe598,	// (0x00069538) list_single_cale_day_pane_fp_t3_ParamLimits

0xe598,	// (0x00069538) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0006ab3b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0006ab3b) list_single_cale_day_pane_fp_t

0x5414,	// (0x000603b4) list_empty_pane_fp_g1_ParamLimits

0x5414,	// (0x000603b4) list_empty_pane_fp_g1

0xe5b1,	// (0x00069551) list_empty_pane_fp_t1

0xe5bf,	// (0x0006955f) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0006ab42) list_empty_pane_fp_t

0x5414,	// (0x000603b4) list_single_heading_pane_fp_g1_ParamLimits

0x5414,	// (0x000603b4) list_single_heading_pane_fp_g1

0x5420,	// (0x000603c0) list_single_heading_pane_fp_g2_ParamLimits

0x5420,	// (0x000603c0) list_single_heading_pane_fp_g2

0x542c,	// (0x000603cc) list_single_heading_pane_fp_g3_ParamLimits

0x542c,	// (0x000603cc) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0006ab47) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0006ab47) list_single_heading_pane_fp_g

0xe5cd,	// (0x0006956d) list_single_heading_pane_fp_t1_ParamLimits

0xe5cd,	// (0x0006956d) list_single_heading_pane_fp_t1

0xe5df,	// (0x0006957f) list_single_heading_pane_fp_t2_ParamLimits

0xe5df,	// (0x0006957f) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0006ab4e) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0006ab4e) list_single_heading_pane_fp_t

0xa0fa,	// (0x0006509a) aid_size_cell_fast

0x81ef,	// (0x0006318f) soft_indicator_pane_cp1_t1

0xa103,	// (0x000650a3) cell_app_pane_cp2_ParamLimits

0xa103,	// (0x000650a3) cell_app_pane_cp2

0x0ec0,	// (0x0005be60) fep_hwr_candidate_drop_down_list_pane

0x1098,	// (0x0005c038) fep_hwr_candidate_pane_g3_ParamLimits

0x1098,	// (0x0005c038) fep_hwr_candidate_pane_g3

0xe4b3,	// (0x00069453) fep_hwr_candidate_pane_g4_ParamLimits

0xe4b3,	// (0x00069453) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0006aabd) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0006aabd) fep_hwr_candidate_pane_g

0x4f16,	// (0x0005feb6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4f16,	// (0x0005feb6) fep_vkb_candidate_drop_down_list_pane

0x5319,	// (0x000602b9) fep_vkb_candidate_pane_g3

0x5321,	// (0x000602c1) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0006aaea) fep_vkb_candidate_pane_g

0x1103,	// (0x0005c0a3) cell_hwr_candidate_pane_g1_ParamLimits

0x1111,	// (0x0005c0b1) cell_hwr_candidate_pane_g3_ParamLimits

0x1111,	// (0x0005c0b1) cell_hwr_candidate_pane_g3

0x6210,	// (0x000611b0) cell_hwr_candidate_pane_g4_ParamLimits

0x6210,	// (0x000611b0) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0006ab09) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0006ab09) cell_hwr_candidate_pane_g

0x5338,	// (0x000602d8) cell_vkb_candidate_pane_g3_ParamLimits

0x5338,	// (0x000602d8) cell_vkb_candidate_pane_g3

0x5353,	// (0x000602f3) cell_vkb_candidate_pane_g4_ParamLimits

0x5353,	// (0x000602f3) cell_vkb_candidate_pane_g4

0xcf39,	// (0x00067ed9) cell_app_pane_cp2_g1_ParamLimits

0xcf39,	// (0x00067ed9) cell_app_pane_cp2_g1

0x5476,	// (0x00060416) cell_app_pane_cp2_g2_ParamLimits

0x5476,	// (0x00060416) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0006ab53) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0006ab53) cell_app_pane_cp2_g

0x5482,	// (0x00060422) cell_app_pane_cp2_t1_ParamLimits

0x5482,	// (0x00060422) cell_app_pane_cp2_t1

0x84a2,	// (0x00063442) grid_highlight_pane_cp1_ParamLimits

0x84a2,	// (0x00063442) grid_highlight_pane_cp1

0x1150,	// (0x0005c0f0) cell_hwr_candidate_pane_cp1_ParamLimits

0x1150,	// (0x0005c0f0) cell_hwr_candidate_pane_cp1

0x1103,	// (0x0005c0a3) fep_hwr_candidate_drop_down_list_pane_g1

0x116f,	// (0x0005c10f) fep_hwr_candidate_drop_down_list_pane_g2

0x117c,	// (0x0005c11c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0006ab58) fep_hwr_candidate_drop_down_list_pane_g

0x1189,	// (0x0005c129) fep_hwr_candidate_drop_down_list_scroll_pane

0x1192,	// (0x0005c132) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1192,	// (0x0005c132) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x119f,	// (0x0005c13f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x119f,	// (0x0005c13f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x11ac,	// (0x0005c14c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x11ac,	// (0x0005c14c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x11b9,	// (0x0005c159) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x11b9,	// (0x0005c159) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x11d4,	// (0x0005c174) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x11d4,	// (0x0005c174) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x11ef,	// (0x0005c18f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x11ef,	// (0x0005c18f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x120a,	// (0x0005c1aa) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x120a,	// (0x0005c1aa) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1225,	// (0x0005c1c5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1225,	// (0x0005c1c5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0006ab5f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0006ab5f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5494,	// (0x00060434) cell_vkb_candidate_pane_cp1_ParamLimits

0x5494,	// (0x00060434) cell_vkb_candidate_pane_cp1

0x5021,	// (0x0005ffc1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5021,	// (0x0005ffc1) fep_vkb_candidate_drop_down_list_pane_g1

0x54b4,	// (0x00060454) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x54b4,	// (0x00060454) fep_vkb_candidate_drop_down_list_pane_g2

0x54c1,	// (0x00060461) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x54c1,	// (0x00060461) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0006ab70) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x0006ab70) fep_vkb_candidate_drop_down_list_pane_g

0x54ce,	// (0x0006046e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x54ce,	// (0x0006046e) fep_vkb_candidate_drop_down_list_scroll_pane

0x54db,	// (0x0006047b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x54db,	// (0x0006047b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x54e8,	// (0x00060488) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x54e8,	// (0x00060488) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x54f4,	// (0x00060494) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x54f4,	// (0x00060494) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5500,	// (0x000604a0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5500,	// (0x000604a0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5521,	// (0x000604c1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5521,	// (0x000604c1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5542,	// (0x000604e2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5542,	// (0x000604e2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5563,	// (0x00060503) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5563,	// (0x00060503) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5584,	// (0x00060524) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5584,	// (0x00060524) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0006ab77) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0006ab77) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x944d,	// (0x000643ed) title_pane_g1_ParamLimits

0x9460,	// (0x00064400) title_pane_g2_ParamLimits

0xf54e,	// (0x0006a4ee) title_pane_g_ParamLimits

0xbc33,	// (0x00066bd3) aid_call2_pane

0xbc3b,	// (0x00066bdb) aid_call_pane

0xbc43,	// (0x00066be3) popup_clock_analogue_window_g1

0xbc43,	// (0x00066be3) popup_clock_analogue_window_g2

0xf379,	// (0x0006a319) popup_clock_analogue_window_g3

0xf382,	// (0x0006a322) popup_clock_analogue_window_g4

0x808a,	// (0x0006302a) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0006a68e) popup_clock_analogue_window_g

0xf38a,	// (0x0006a32a) popup_clock_analogue_window_t1

0xf398,	// (0x0006a338) clock_digital_number_pane_ParamLimits

0xf398,	// (0x0006a338) clock_digital_number_pane

0xf3a4,	// (0x0006a344) clock_digital_number_pane_cp02_ParamLimits

0xf3a4,	// (0x0006a344) clock_digital_number_pane_cp02

0xf3b0,	// (0x0006a350) clock_digital_number_pane_cp03_ParamLimits

0xf3b0,	// (0x0006a350) clock_digital_number_pane_cp03

0xf3bc,	// (0x0006a35c) clock_digital_number_pane_cp04_ParamLimits

0xf3bc,	// (0x0006a35c) clock_digital_number_pane_cp04

0xf3c8,	// (0x0006a368) clock_digital_separator_pane_ParamLimits

0xf3c8,	// (0x0006a368) clock_digital_separator_pane

0xf3d4,	// (0x0006a374) popup_clock_digital_window_t1_ParamLimits

0xf3d4,	// (0x0006a374) popup_clock_digital_window_t1

0x808a,	// (0x0006302a) clock_digital_number_pane_g1

0x808a,	// (0x0006302a) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0006a699) clock_digital_number_pane_g

0x808a,	// (0x0006302a) clock_digital_separator_pane_g1

0x808a,	// (0x0006302a) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0006a699) clock_digital_separator_pane_g

0xafdd,	// (0x00065f7d) aid_fill_nsta_ParamLimits

0xbe3e,	// (0x00066dde) indicator_nsta_pane_ParamLimits

0x23d1,	// (0x0005d371) popup_clock_analogue_window

0x23d1,	// (0x0005d371) popup_clock_digital_window

0xcb5f,	// (0x00067aff) grid_indicator_nsta_pane_ParamLimits

0x47bb,	// (0x0005f75b) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0006aa3d) clock_nsta_pane_t

0xf35a,	// (0x0006a2fa) aid_size_max_handle

0xa1e1,	// (0x00065181) aid_size_min_handle

0xe0de,	// (0x0006907e) editor_scroll_pane

0x559f,	// (0x0006053f) ex_editor_pane

0x85c1,	// (0x00063561) scroll_pane_cp13

0x844a,	// (0x000633ea) scroll_pane_cp14

0xbc72,	// (0x00066c12) scroll_pane_cp36

0xa2ab,	// (0x0006524b) list_single_graphic_hl_pane_cp2_ParamLimits

0xa2ab,	// (0x0006524b) list_single_graphic_hl_pane_cp2

0xc94b,	// (0x000678eb) list_single_graphic_hl_pane_ParamLimits

0xc94b,	// (0x000678eb) list_single_graphic_hl_pane

0xb375,	// (0x00066315) aid_size_min_hl_cp1

0x55a7,	// (0x00060547) list_highlight_pane_cp34_ParamLimits

0x55a7,	// (0x00060547) list_highlight_pane_cp34

0x55b8,	// (0x00060558) list_single_graphic_hl_pane_g1_ParamLimits

0x55b8,	// (0x00060558) list_single_graphic_hl_pane_g1

0xb37e,	// (0x0006631e) list_single_graphic_hl_pane_g2_ParamLimits

0xb37e,	// (0x0006631e) list_single_graphic_hl_pane_g2

0xb37e,	// (0x0006631e) list_single_graphic_hl_pane_g3_ParamLimits

0xb37e,	// (0x0006631e) list_single_graphic_hl_pane_g3

0xe03d,	// (0x00068fdd) list_single_graphic_hl_pane_g4_ParamLimits

0xe03d,	// (0x00068fdd) list_single_graphic_hl_pane_g4

0x55f5,	// (0x00060595) list_single_graphic_hl_pane_g5_ParamLimits

0x55f5,	// (0x00060595) list_single_graphic_hl_pane_g5

0x0004,

0xfbe8,	// (0x0006ab88) list_single_graphic_hl_pane_g_ParamLimits

0xfbe8,	// (0x0006ab88) list_single_graphic_hl_pane_g

0xb38a,	// (0x0006632a) list_single_graphic_hl_pane_t1_ParamLimits

0xb38a,	// (0x0006632a) list_single_graphic_hl_pane_t1

0x55c5,	// (0x00060565) aid_size_min_hl_cp2

0x55ce,	// (0x0006056e) list_highlight_pane_cp34_cp2_ParamLimits

0x55ce,	// (0x0006056e) list_highlight_pane_cp34_cp2

0x55b8,	// (0x00060558) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x55b8,	// (0x00060558) list_single_graphic_hl_pane_g1_cp2

0x55db,	// (0x0006057b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x55db,	// (0x0006057b) list_single_graphic_hl_pane_g2_cp2

0xcf57,	// (0x00067ef7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf57,	// (0x00067ef7) list_single_graphic_hl_pane_g3_cp2

0xe03d,	// (0x00068fdd) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe03d,	// (0x00068fdd) list_single_graphic_hl_pane_g4_cp2

0x55f5,	// (0x00060595) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x55f5,	// (0x00060595) list_single_graphic_hl_pane_g5_cp2

0xa6da,	// (0x0006567a) control_pane_g4_ParamLimits

0xa6da,	// (0x0006567a) control_pane_g4

0x20d0,	// (0x0005d070) bg_popup_sub_pane_cp10_ParamLimits

0x4dbb,	// (0x0005fd5b) list_choice_list_pane_ParamLimits

0x4dca,	// (0x0005fd6a) scroll_pane_cp23

0x821a,	// (0x000631ba) bg_popup_preview_window_pane_cp02_ParamLimits

0x53b8,	// (0x00060358) list_preview_fixed_pane_ParamLimits

0x53ce,	// (0x0006036e) list_preview_fixed_pane_cp_ParamLimits

0x53ce,	// (0x0006036e) list_preview_fixed_pane_cp

0x53da,	// (0x0006037a) popup_preview_fixed_window_g1_ParamLimits

0x53da,	// (0x0006037a) popup_preview_fixed_window_g1

0x53e6,	// (0x00060386) popup_preview_fixed_window_g2_ParamLimits

0x53e6,	// (0x00060386) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0006ab10) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0006ab10) popup_preview_fixed_window_g

0xf2ce,	// (0x0006a26e) aid_navi_side_left_pane_ParamLimits

0xf2e3,	// (0x0006a283) aid_navi_side_right_pane_ParamLimits

0xf2fb,	// (0x0006a29b) navi_icon_pane_stacon_ParamLimits

0xf30f,	// (0x0006a2af) navi_navi_pane_stacon_ParamLimits

0xf2fb,	// (0x0006a29b) navi_text_pane_stacon_ParamLimits

0xf0eb,	// (0x0006a08b) main_text_info_pane

0x561f,	// (0x000605bf) listscroll_text_info_pane

0x5627,	// (0x000605c7) list_text_info_pane_ParamLimits

0x5627,	// (0x000605c7) list_text_info_pane

0x5636,	// (0x000605d6) scroll_pane_cp24_ParamLimits

0x5636,	// (0x000605d6) scroll_pane_cp24

0xcf65,	// (0x00067f05) list_text_info_pane_t1_ParamLimits

0xcf65,	// (0x00067f05) list_text_info_pane_t1

0xa87e,	// (0x0006581e) popup_fast_swap2_window_ParamLimits

0xa87e,	// (0x0006581e) popup_fast_swap2_window

0x5688,	// (0x00060628) aid_size_cell_fast2

0x8080,	// (0x00063020) bg_popup_window_pane_cp17

0x2a76,	// (0x0005da16) heading_pane_cp2

0x834e,	// (0x000632ee) listscroll_fast2_pane

0x5692,	// (0x00060632) grid_fast2_pane

0x569c,	// (0x0006063c) listscroll_fast2_pane_g1

0x56a4,	// (0x00060644) listscroll_fast2_pane_g2

0x0001,

0xfbf3,	// (0x0006ab93) listscroll_fast2_pane_g

0x85c1,	// (0x00063561) scroll_pane_cp26

0x56ae,	// (0x0006064e) cell_fast2_pane_ParamLimits

0x56ae,	// (0x0006064e) cell_fast2_pane

0x56c3,	// (0x00060663) cell_fast2_pane_g1

0x56cc,	// (0x0006066c) cell_fast2_pane_g2

0x56d5,	// (0x00060675) cell_fast2_pane_g3

0x0002,

0xfbf8,	// (0x0006ab98) cell_fast2_pane_g

0x8381,	// (0x00063321) grid_highlight_pane_cp9

0x0323,	// (0x0005b2c3) main_eswt_pane_ParamLimits

0x0323,	// (0x0005b2c3) main_eswt_pane

0x564b,	// (0x000605eb) list_single_text_info_pane

0x56dd,	// (0x0006067d) eswt_ctrl_button_pane

0x56dd,	// (0x0006067d) eswt_ctrl_canvas_pane

0xcf81,	// (0x00067f21) eswt_ctrl_combo_pane

0x56dd,	// (0x0006067d) eswt_ctrl_default_pane

0x56dd,	// (0x0006067d) eswt_ctrl_label_pane

0x56ed,	// (0x0006068d) eswt_ctrl_wait_pane

0xcf89,	// (0x00067f29) eswt_shell_pane

0x8080,	// (0x00063020) listscroll_eswt_app_pane

0x5715,	// (0x000606b5) popup_eswt_tasktip_window_ParamLimits

0x5715,	// (0x000606b5) popup_eswt_tasktip_window

0x2683,	// (0x0005d623) bg_popup_window_pane_cp18

0x5726,	// (0x000606c6) eswt_control_pane_g1_ParamLimits

0x5726,	// (0x000606c6) eswt_control_pane_g1

0x5733,	// (0x000606d3) eswt_control_pane_g2_ParamLimits

0x5733,	// (0x000606d3) eswt_control_pane_g2

0x5740,	// (0x000606e0) eswt_control_pane_g3_ParamLimits

0x5740,	// (0x000606e0) eswt_control_pane_g3

0x574d,	// (0x000606ed) eswt_control_pane_g4_ParamLimits

0x574d,	// (0x000606ed) eswt_control_pane_g4

0x0003,

0xfbff,	// (0x0006ab9f) eswt_control_pane_g_ParamLimits

0xfbff,	// (0x0006ab9f) eswt_control_pane_g

0x84a2,	// (0x00063442) bg_button_pane_ParamLimits

0x84a2,	// (0x00063442) bg_button_pane

0x8396,	// (0x00063336) common_borders_pane_copy2_ParamLimits

0x8396,	// (0x00063336) common_borders_pane_copy2

0x575a,	// (0x000606fa) control_button_pane_g1_ParamLimits

0x575a,	// (0x000606fa) control_button_pane_g1

0x5766,	// (0x00060706) control_button_pane_g2_ParamLimits

0x5766,	// (0x00060706) control_button_pane_g2

0x5772,	// (0x00060712) control_button_pane_g3_ParamLimits

0x5772,	// (0x00060712) control_button_pane_g3

0x0002,

0xfc08,	// (0x0006aba8) control_button_pane_g_ParamLimits

0xfc08,	// (0x0006aba8) control_button_pane_g

0x5786,	// (0x00060726) control_button_pane_t1

0x5794,	// (0x00060734) control_button_pane_t2

0x0001,

0xfc0f,	// (0x0006abaf) control_button_pane_t

0x25f7,	// (0x0005d597) bg_button_pane_g1

0x2607,	// (0x0005d5a7) bg_button_pane_g2

0x25ff,	// (0x0005d59f) bg_button_pane_g3

0x2617,	// (0x0005d5b7) bg_button_pane_g4

0x260f,	// (0x0005d5af) bg_button_pane_g5

0x261f,	// (0x0005d5bf) bg_button_pane_g6

0x2627,	// (0x0005d5c7) bg_button_pane_g7

0x2637,	// (0x0005d5d7) bg_button_pane_g8

0x262f,	// (0x0005d5cf) bg_button_pane_g9

0x0008,

0xf850,	// (0x0006a7f0) bg_button_pane_g

0x4d76,	// (0x0005fd16) common_borders_pane_ParamLimits

0x4d76,	// (0x0005fd16) common_borders_pane

0x5726,	// (0x000606c6) eswt_control_pane_g1_copy1_ParamLimits

0x5726,	// (0x000606c6) eswt_control_pane_g1_copy1

0x5733,	// (0x000606d3) eswt_control_pane_g2_copy1_ParamLimits

0x5733,	// (0x000606d3) eswt_control_pane_g2_copy1

0x5740,	// (0x000606e0) eswt_control_pane_g3_copy1_ParamLimits

0x5740,	// (0x000606e0) eswt_control_pane_g3_copy1

0x574d,	// (0x000606ed) eswt_control_pane_g4_copy1_ParamLimits

0x574d,	// (0x000606ed) eswt_control_pane_g4_copy1

0x4db1,	// (0x0005fd51) bg_eswt_ctrl_canvas_pane_g1

0x4d76,	// (0x0005fd16) common_borders_pane_cp2_ParamLimits

0x4d76,	// (0x0005fd16) common_borders_pane_cp2

0x4d76,	// (0x0005fd16) common_borders_pane_cp3_ParamLimits

0x4d76,	// (0x0005fd16) common_borders_pane_cp3

0x57a2,	// (0x00060742) separator_horizontal_pane

0x57aa,	// (0x0006074a) separator_vertical_pane

0x5726,	// (0x000606c6) eswt_control_pane_g1_copy2_ParamLimits

0x5726,	// (0x000606c6) eswt_control_pane_g1_copy2

0x5733,	// (0x000606d3) eswt_control_pane_g2_copy2_ParamLimits

0x5733,	// (0x000606d3) eswt_control_pane_g2_copy2

0x5740,	// (0x000606e0) eswt_control_pane_g3_copy2_ParamLimits

0x5740,	// (0x000606e0) eswt_control_pane_g3_copy2

0x574d,	// (0x000606ed) eswt_control_pane_g4_copy2_ParamLimits

0x574d,	// (0x000606ed) eswt_control_pane_g4_copy2

0x8080,	// (0x00063020) common_borders_pane_cp4

0x57b3,	// (0x00060753) separator_horizontal_pane_g1

0x57bc,	// (0x0006075c) separator_horizontal_pane_g2

0x57c5,	// (0x00060765) separator_horizontal_pane_g3

0x0002,

0xfc14,	// (0x0006abb4) separator_horizontal_pane_g

0x5726,	// (0x000606c6) eswt_control_pane_g1_copy3_ParamLimits

0x5726,	// (0x000606c6) eswt_control_pane_g1_copy3

0x5733,	// (0x000606d3) eswt_control_pane_g2_copy3_ParamLimits

0x5733,	// (0x000606d3) eswt_control_pane_g2_copy3

0x5740,	// (0x000606e0) eswt_control_pane_g3_copy3_ParamLimits

0x5740,	// (0x000606e0) eswt_control_pane_g3_copy3

0x574d,	// (0x000606ed) eswt_control_pane_g4_copy3_ParamLimits

0x574d,	// (0x000606ed) eswt_control_pane_g4_copy3

0x8080,	// (0x00063020) common_borders_pane_cp5

0x57ce,	// (0x0006076e) separator_vertical_pane_g1

0x57d7,	// (0x00060777) separator_vertical_pane_g2

0x57e0,	// (0x00060780) separator_vertical_pane_g3

0x0002,

0xfc1b,	// (0x0006abbb) separator_vertical_pane_g

0x5726,	// (0x000606c6) eswt_control_pane_g1_copy4_ParamLimits

0x5726,	// (0x000606c6) eswt_control_pane_g1_copy4

0x5733,	// (0x000606d3) eswt_control_pane_g2_copy4_ParamLimits

0x5733,	// (0x000606d3) eswt_control_pane_g2_copy4

0x5740,	// (0x000606e0) eswt_control_pane_g3_copy4_ParamLimits

0x5740,	// (0x000606e0) eswt_control_pane_g3_copy4

0x574d,	// (0x000606ed) eswt_control_pane_g4_copy4_ParamLimits

0x574d,	// (0x000606ed) eswt_control_pane_g4_copy4

0xcfa9,	// (0x00067f49) eswt_ctrl_combo_button_pane

0xcfb1,	// (0x00067f51) eswt_ctrl_input_pane

0xcfb9,	// (0x00067f59) popup_choice_list_window_cp70

0xcfc1,	// (0x00067f61) eswt_ctrl_input_pane_t1

0x8080,	// (0x00063020) input_focus_pane_cp70

0x4d76,	// (0x0005fd16) bg_button_pane_cp70_ParamLimits

0x4d76,	// (0x0005fd16) bg_button_pane_cp70

0xcfcf,	// (0x00067f6f) eswt_ctrl_combo_button_pane_g1

0x5817,	// (0x000607b7) wait_bar_pane_cp70

0x2683,	// (0x0005d623) bg_popup_window_pane_cp70_ParamLimits

0x2683,	// (0x0005d623) bg_popup_window_pane_cp70

0x581f,	// (0x000607bf) popup_eswt_tasktip_window_t1

0x5835,	// (0x000607d5) wait_bar_pane_cp71_ParamLimits

0x5835,	// (0x000607d5) wait_bar_pane_cp71

0x5841,	// (0x000607e1) grid_eswt_app_pane

0x87a8,	// (0x00063748) scroll_pane_cp70

0xcfd7,	// (0x00067f77) cell_eswt_app_pane_ParamLimits

0xcfd7,	// (0x00067f77) cell_eswt_app_pane

0xd001,	// (0x00067fa1) cell_eswt_app_pane_g1_ParamLimits

0xd001,	// (0x00067fa1) cell_eswt_app_pane_g1

0xd030,	// (0x00067fd0) cell_eswt_app_pane_g2_ParamLimits

0xd030,	// (0x00067fd0) cell_eswt_app_pane_g2

0x0001,

0xfc22,	// (0x0006abc2) cell_eswt_app_pane_g_ParamLimits

0xfc22,	// (0x0006abc2) cell_eswt_app_pane_g

0xd054,	// (0x00067ff4) cell_eswt_app_pane_t1_ParamLimits

0xd054,	// (0x00067ff4) cell_eswt_app_pane_t1

0x58ff,	// (0x0006089f) grid_highlight_pane_cp70_ParamLimits

0x58ff,	// (0x0006089f) grid_highlight_pane_cp70

0xdfe1,	// (0x00068f81) set_content_pane_g1

0xa66c,	// (0x0006560c) status_small_volume_pane

0xb3a0,	// (0x00066340) status_small_volume_pane_g1

0xb3a8,	// (0x00066348) volume_small2_pane

0xb3b1,	// (0x00066351) volume_small2_pane_g1

0xb3ba,	// (0x0006635a) volume_small2_pane_g2

0xb3c3,	// (0x00066363) volume_small2_pane_g3

0xb3cc,	// (0x0006636c) volume_small2_pane_g4

0xb3d5,	// (0x00066375) volume_small2_pane_g5

0xb3de,	// (0x0006637e) volume_small2_pane_g6

0xb3e7,	// (0x00066387) volume_small2_pane_g7

0xb3f0,	// (0x00066390) volume_small2_pane_g8

0xb3f9,	// (0x00066399) volume_small2_pane_g9

0xb402,	// (0x000663a2) volume_small2_pane_g10

0x0009,

0xfc27,	// (0x0006abc7) volume_small2_pane_g

0x5169,	// (0x00060109) fep_vkb_top_text_pane_g1_ParamLimits

0xcee1,	// (0x00067e81) fep_vkb_top_text_pane_t1_ParamLimits

0x53f2,	// (0x00060392) popup_preview_fixed_window_g3_ParamLimits

0x53f2,	// (0x00060392) popup_preview_fixed_window_g3

0xaf1b,	// (0x00065ebb) popup_toolbar_trans_pane

0xc7bf,	// (0x0006775f) aid_height_set_list_ParamLimits

0x39ca,	// (0x0005e96a) aid_size_parent_ParamLimits

0x20d0,	// (0x0005d070) list_highlight_pane_cp2_ParamLimits

0xdfe1,	// (0x00068f81) set_content_pane_g1_ParamLimits

0xc95d,	// (0x000678fd) list_single_image_pane_ParamLimits

0xc95d,	// (0x000678fd) list_single_image_pane

0xd086,	// (0x00068026) aid_size_cell_image_ParamLimits

0xd086,	// (0x00068026) aid_size_cell_image

0xd093,	// (0x00068033) grid_single_image_pane_ParamLimits

0xd093,	// (0x00068033) grid_single_image_pane

0x5420,	// (0x000603c0) list_single_image_pane_g1_ParamLimits

0x5420,	// (0x000603c0) list_single_image_pane_g1

0x542c,	// (0x000603cc) list_single_image_pane_g2_ParamLimits

0x542c,	// (0x000603cc) list_single_image_pane_g2

0x0001,

0xfc3c,	// (0x0006abdc) list_single_image_pane_g_ParamLimits

0xfc3c,	// (0x0006abdc) list_single_image_pane_g

0x5926,	// (0x000608c6) list_single_image_pane_t1_ParamLimits

0x5926,	// (0x000608c6) list_single_image_pane_t1

0xd09f,	// (0x0006803f) cell_image_list_pane_ParamLimits

0xd09f,	// (0x0006803f) cell_image_list_pane

0xd0b3,	// (0x00068053) cell_image_list_pane_g1

0xd0bc,	// (0x0006805c) cell_image_list_pane_g2

0x0001,

0xfc41,	// (0x0006abe1) cell_image_list_pane_g

0xd0c5,	// (0x00068065) aid_size_cell_tb_trans_pane

0x84a2,	// (0x00063442) bg_tb_trans_pane

0xd0d7,	// (0x00068077) grid_tb_trans_pane

0x25f7,	// (0x0005d597) bg_tb_trans_pane_g1

0x2607,	// (0x0005d5a7) bg_tb_trans_pane_g2

0x25ff,	// (0x0005d59f) bg_tb_trans_pane_g3

0x2617,	// (0x0005d5b7) bg_tb_trans_pane_g4

0x260f,	// (0x0005d5af) bg_tb_trans_pane_g5

0x2637,	// (0x0005d5d7) bg_tb_trans_pane_g6

0x262f,	// (0x0005d5cf) bg_tb_trans_pane_g7

0x261f,	// (0x0005d5bf) bg_tb_trans_pane_g8

0x2627,	// (0x0005d5c7) bg_tb_trans_pane_g9

0x0008,

0xfc46,	// (0x0006abe6) bg_tb_trans_pane_g

0xd0eb,	// (0x0006808b) cell_toolbar_trans_pane_ParamLimits

0xd0eb,	// (0x0006808b) cell_toolbar_trans_pane

0x4db1,	// (0x0005fd51) cell_toolbar_trans_pane_g1

0xcc26,	// (0x00067bc6) list_form2_midp_pane_t1

0xcc34,	// (0x00067bd4) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0006aa83) list_form2_midp_pane_t

0x4998,	// (0x0005f938) scroll_pane_cp51_ParamLimits

0x4b54,	// (0x0005faf4) form2_midp_wait_pane_g1

0x4b5d,	// (0x0005fafd) form2_midp_wait_pane_g2

0x4b66,	// (0x0005fb06) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0006aa98) form2_midp_wait_pane_g

0x80e2,	// (0x00063082) list_highlight_pane_cp21_ParamLimits

0x4bae,	// (0x0005fb4e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4bbd,	// (0x0005fb5d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3b7e,	// (0x0005eb1e) list_single_2graphic_im_pane_ParamLimits

0x3b7e,	// (0x0005eb1e) list_single_2graphic_im_pane

0xd111,	// (0x000680b1) list_single_2graphic_im_pane_g1_ParamLimits

0xd111,	// (0x000680b1) list_single_2graphic_im_pane_g1

0xd122,	// (0x000680c2) list_single_2graphic_im_pane_g2_ParamLimits

0xd122,	// (0x000680c2) list_single_2graphic_im_pane_g2

0xd12e,	// (0x000680ce) list_single_2graphic_im_pane_g3_ParamLimits

0xd12e,	// (0x000680ce) list_single_2graphic_im_pane_g3

0x0003,

0xfc59,	// (0x0006abf9) list_single_2graphic_im_pane_g_ParamLimits

0xfc59,	// (0x0006abf9) list_single_2graphic_im_pane_g

0xd142,	// (0x000680e2) list_single_2graphic_im_pane_t1_ParamLimits

0xd142,	// (0x000680e2) list_single_2graphic_im_pane_t1

0x53fe,	// (0x0006039e) list_single_graphic_2heading_pane_fp_ParamLimits

0x53fe,	// (0x0006039e) list_single_graphic_2heading_pane_fp

0xe4d7,	// (0x00069477) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe4d7,	// (0x00069477) list_single_graphic_2heading_pane_fp_g1

0x5414,	// (0x000603b4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5414,	// (0x000603b4) list_single_graphic_2heading_pane_fp_g2

0x5420,	// (0x000603c0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5420,	// (0x000603c0) list_single_graphic_2heading_pane_fp_g3

0x542c,	// (0x000603cc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x542c,	// (0x000603cc) list_single_graphic_2heading_pane_fp_g4

0x5440,	// (0x000603e0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5440,	// (0x000603e0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0006ab20) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0006ab20) list_single_graphic_2heading_pane_fp_g

0xe5f5,	// (0x00069595) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe5f5,	// (0x00069595) list_single_graphic_2heading_pane_fp_t1

0xe50f,	// (0x000694af) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe50f,	// (0x000694af) list_single_graphic_2heading_pane_fp_t2

0xe60b,	// (0x000695ab) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe60b,	// (0x000695ab) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc62,	// (0x0006ac02) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc62,	// (0x0006ac02) list_single_graphic_2heading_pane_fp_t

0x4e3d,	// (0x0005fddd) fep_hwr_write_pane_g5_ParamLimits

0x4e3d,	// (0x0005fddd) fep_hwr_write_pane_g5

0x4e49,	// (0x0005fde9) fep_hwr_write_pane_g6_ParamLimits

0x4e49,	// (0x0005fde9) fep_hwr_write_pane_g6

0xcf89,	// (0x00067f29) eswt_shell_pane_ParamLimits

0x2683,	// (0x0005d623) bg_popup_window_pane_cp18_ParamLimits

0x3912,	// (0x0005e8b2) heading_pane_cp70

0x581f,	// (0x000607bf) popup_eswt_tasktip_window_t1_ParamLimits

0xb038,	// (0x00065fd8) aid_touch_tab_arrow_left

0xb04e,	// (0x00065fee) aid_touch_tab_arrow_right

0x9478,	// (0x00064418) title_pane_g3_ParamLimits

0x9478,	// (0x00064418) title_pane_g3

0x846a,	// (0x0006340a) set_value_pane_g1

0xaf1b,	// (0x00065ebb) popup_toolbar_trans_pane_ParamLimits

0xd0c5,	// (0x00068065) aid_size_cell_tb_trans_pane_ParamLimits

0x84a2,	// (0x00063442) bg_tb_trans_pane_ParamLimits

0xd0d7,	// (0x00068077) grid_tb_trans_pane_ParamLimits

0x821a,	// (0x000631ba) cont_note_pane_ParamLimits

0x821a,	// (0x000631ba) cont_note_pane

0x8396,	// (0x00063336) cont_snote2_single_text_pane_ParamLimits

0x8396,	// (0x00063336) cont_snote2_single_text_pane

0x8396,	// (0x00063336) cont_snote2_single_graphic_pane_ParamLimits

0x8396,	// (0x00063336) cont_snote2_single_graphic_pane

0x2c95,	// (0x0005dc35) cont_note_wait_pane_ParamLimits

0x2c95,	// (0x0005dc35) cont_note_wait_pane

0x2c95,	// (0x0005dc35) cont_note_image_pane_ParamLimits

0x2c95,	// (0x0005dc35) cont_note_image_pane

0x5a1c,	// (0x000609bc) popup_note2_window_g1_ParamLimits

0x5a1c,	// (0x000609bc) popup_note2_window_g1

0xd180,	// (0x00068120) popup_note2_window_t1_ParamLimits

0xd180,	// (0x00068120) popup_note2_window_t1

0xd1c5,	// (0x00068165) popup_note2_window_t2_ParamLimits

0xd1c5,	// (0x00068165) popup_note2_window_t2

0xd20a,	// (0x000681aa) popup_note2_window_t3_ParamLimits

0xd20a,	// (0x000681aa) popup_note2_window_t3

0x5b1c,	// (0x00060abc) popup_note2_window_t4_ParamLimits

0x5b1c,	// (0x00060abc) popup_note2_window_t4

0x829e,	// (0x0006323e) popup_note2_window_t5_ParamLimits

0x829e,	// (0x0006323e) popup_note2_window_t5

0x0004,

0xfc6e,	// (0x0006ac0e) popup_note2_window_t_ParamLimits

0xfc6e,	// (0x0006ac0e) popup_note2_window_t

0x5b4b,	// (0x00060aeb) popup_note2_image_window_g1_ParamLimits

0x5b4b,	// (0x00060aeb) popup_note2_image_window_g1

0xd24f,	// (0x000681ef) popup_note2_image_window_g2_ParamLimits

0xd24f,	// (0x000681ef) popup_note2_image_window_g2

0x0001,

0xfc79,	// (0x0006ac19) popup_note2_image_window_g_ParamLimits

0xfc79,	// (0x0006ac19) popup_note2_image_window_g

0x5b69,	// (0x00060b09) popup_note2_image_window_t1_ParamLimits

0x5b69,	// (0x00060b09) popup_note2_image_window_t1

0x5b81,	// (0x00060b21) popup_note2_image_window_t2_ParamLimits

0x5b81,	// (0x00060b21) popup_note2_image_window_t2

0x5b99,	// (0x00060b39) popup_note2_image_window_t3_ParamLimits

0x5b99,	// (0x00060b39) popup_note2_image_window_t3

0x0002,

0xfc7e,	// (0x0006ac1e) popup_note2_image_window_t_ParamLimits

0xfc7e,	// (0x0006ac1e) popup_note2_image_window_t

0x2ca3,	// (0x0005dc43) popup_note2_wait_window_g1_ParamLimits

0x2ca3,	// (0x0005dc43) popup_note2_wait_window_g1

0x2caf,	// (0x0005dc4f) popup_note2_wait_window_g2_ParamLimits

0x2caf,	// (0x0005dc4f) popup_note2_wait_window_g2

0x2cbb,	// (0x0005dc5b) popup_note2_wait_window_g3_ParamLimits

0x2cbb,	// (0x0005dc5b) popup_note2_wait_window_g3

0x0002,

0xf832,	// (0x0006a7d2) popup_note2_wait_window_g_ParamLimits

0xf832,	// (0x0006a7d2) popup_note2_wait_window_g

0x5bb5,	// (0x00060b55) popup_note2_wait_window_t1_ParamLimits

0x5bb5,	// (0x00060b55) popup_note2_wait_window_t1

0x5bd3,	// (0x00060b73) popup_note2_wait_window_t2_ParamLimits

0x5bd3,	// (0x00060b73) popup_note2_wait_window_t2

0x5bf1,	// (0x00060b91) popup_note2_wait_window_t3_ParamLimits

0x5bf1,	// (0x00060b91) popup_note2_wait_window_t3

0x5c03,	// (0x00060ba3) popup_note2_wait_window_t4_ParamLimits

0x5c03,	// (0x00060ba3) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x0006ac25) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x0006ac25) popup_note2_wait_window_t

0x5c15,	// (0x00060bb5) wait_bar2_pane_ParamLimits

0x5c15,	// (0x00060bb5) wait_bar2_pane

0x5c2d,	// (0x00060bcd) popup_snote2_single_text_window_g1_ParamLimits

0x5c2d,	// (0x00060bcd) popup_snote2_single_text_window_g1

0x5c55,	// (0x00060bf5) popup_snote2_single_text_window_t1_ParamLimits

0x5c55,	// (0x00060bf5) popup_snote2_single_text_window_t1

0x5ca1,	// (0x00060c41) popup_snote2_single_text_window_t2_ParamLimits

0x5ca1,	// (0x00060c41) popup_snote2_single_text_window_t2

0x5ced,	// (0x00060c8d) popup_snote2_single_text_window_t3_ParamLimits

0x5ced,	// (0x00060c8d) popup_snote2_single_text_window_t3

0x5d2e,	// (0x00060cce) popup_snote2_single_text_window_t4_ParamLimits

0x5d2e,	// (0x00060cce) popup_snote2_single_text_window_t4

0x5d64,	// (0x00060d04) popup_snote2_single_text_window_t5_ParamLimits

0x5d64,	// (0x00060d04) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x0006ac2e) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x0006ac2e) popup_snote2_single_text_window_t

0xd261,	// (0x00068201) popup_snote2_single_graphic_window_g1_ParamLimits

0xd261,	// (0x00068201) popup_snote2_single_graphic_window_g1

0x5db7,	// (0x00060d57) popup_snote2_single_graphic_window_g2_ParamLimits

0x5db7,	// (0x00060d57) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x0006ac39) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x0006ac39) popup_snote2_single_graphic_window_g

0x5ddf,	// (0x00060d7f) popup_snote2_single_graphic_window_t1_ParamLimits

0x5ddf,	// (0x00060d7f) popup_snote2_single_graphic_window_t1

0x5e2b,	// (0x00060dcb) popup_snote2_single_graphic_window_t2_ParamLimits

0x5e2b,	// (0x00060dcb) popup_snote2_single_graphic_window_t2

0x5ced,	// (0x00060c8d) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ced,	// (0x00060c8d) popup_snote2_single_graphic_window_t3

0x5d2e,	// (0x00060cce) popup_snote2_single_graphic_window_t4_ParamLimits

0x5d2e,	// (0x00060cce) popup_snote2_single_graphic_window_t4

0x5d64,	// (0x00060d04) popup_snote2_single_graphic_window_t5_ParamLimits

0x5d64,	// (0x00060d04) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x0006ac3e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x0006ac3e) popup_snote2_single_graphic_window_t

0x4855,	// (0x0005f7f5) clock_nsta_pane_cp2_t1

0x4855,	// (0x0005f7f5) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0006aa59) clock_nsta_pane_cp2_t

0xddc9,	// (0x00068d69) form_field_data_wide_pane_g1_ParamLimits

0x84b0,	// (0x00063450) form_field_data_wide_pane_g2_ParamLimits

0x84b0,	// (0x00063450) form_field_data_wide_pane_g2

0x84bc,	// (0x0006345c) form_field_data_wide_pane_g3_ParamLimits

0x84bc,	// (0x0006345c) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0006a611) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0006a611) form_field_data_wide_pane_g

0xcb49,	// (0x00067ae9) grid_touch_3_pane_ParamLimits

0xcb49,	// (0x00067ae9) grid_touch_3_pane

0xd289,	// (0x00068229) cell_touch_3_pane_ParamLimits

0xd289,	// (0x00068229) cell_touch_3_pane

0x4db1,	// (0x0005fd51) cell_touch_3_pane_g1

0x4db1,	// (0x0005fd51) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0006aade) cell_touch_3_pane_g

0x82d0,	// (0x00063270) cont_query_data_pane

0x82d8,	// (0x00063278) cont_query_data_pane_cp1

0x5ea5,	// (0x00060e45) button_value_adjust_pane_cp7

0x5ead,	// (0x00060e4d) query_popup_pane_cp3

0xbca4,	// (0x00066c44) bg_popup_sub_pane_cp22_ParamLimits

0xa338,	// (0x000652d8) navi_navi_volume_pane_cp2

0xa347,	// (0x000652e7) popup_side_volume_key_window_g2

0xa356,	// (0x000652f6) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0006a6a7) popup_side_volume_key_window_g

0xa365,	// (0x00065305) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0006a6ae) popup_side_volume_key_window_t

0xa4b6,	// (0x00065456) popup_side_volume_key_window_ParamLimits

0x9c16,	// (0x00064bb6) list_double_graphic_pane_g4_ParamLimits

0x9c16,	// (0x00064bb6) list_double_graphic_pane_g4

0xc938,	// (0x000678d8) list_single_2heading_msg_pane_ParamLimits

0xc938,	// (0x000678d8) list_single_2heading_msg_pane

0xd2d2,	// (0x00068272) list_single_2heading_msg_pane_g1_ParamLimits

0xd2d2,	// (0x00068272) list_single_2heading_msg_pane_g1

0xd2de,	// (0x0006827e) list_single_2heading_msg_pane_g2_ParamLimits

0xd2de,	// (0x0006827e) list_single_2heading_msg_pane_g2

0xd2f1,	// (0x00068291) list_single_2heading_msg_pane_g3_ParamLimits

0xd2f1,	// (0x00068291) list_single_2heading_msg_pane_g3

0xd2fd,	// (0x0006829d) list_single_2heading_msg_pane_g4_ParamLimits

0xd2fd,	// (0x0006829d) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x0006ac49) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x0006ac49) list_single_2heading_msg_pane_g

0xb40b,	// (0x000663ab) list_single_2heading_msg_pane_t1_ParamLimits

0xb40b,	// (0x000663ab) list_single_2heading_msg_pane_t1

0xb433,	// (0x000663d3) list_single_2heading_msg_pane_t2_ParamLimits

0xb433,	// (0x000663d3) list_single_2heading_msg_pane_t2

0xb49e,	// (0x0006643e) list_single_2heading_msg_pane_t3_ParamLimits

0xb49e,	// (0x0006643e) list_single_2heading_msg_pane_t3

0xe62b,	// (0x000695cb) list_single_2heading_msg_pane_t4_ParamLimits

0xe62b,	// (0x000695cb) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x0006ac52) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x0006ac52) list_single_2heading_msg_pane_t

0x809e,	// (0x0006303e) title_pane_g4_ParamLimits

0x809e,	// (0x0006303e) title_pane_g4

0xf21f,	// (0x0006a1bf) title_pane_stacon_g3_ParamLimits

0xf21f,	// (0x0006a1bf) title_pane_stacon_g3

0x59df,	// (0x0006097f) list_single_2graphic_im_pane_g4_ParamLimits

0x59df,	// (0x0006097f) list_single_2graphic_im_pane_g4

0xc66c,	// (0x0006760c) popup_side_volume_key_window_cp

0x40b2,	// (0x0005f052) main_idle_act2_pane_t1

0x08fc,	// (0x0005b89c) toolbar_button_pane_g10

0x9a82,	// (0x00064a22) popup_toolbar_window_cp1

0x4846,	// (0x0005f7e6) clock_nsta_pane_cp_t1

0x4846,	// (0x0005f7e6) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0006aa54) clock_nsta_pane_cp_t

0xa338,	// (0x000652d8) navi_navi_volume_pane_cp2_ParamLimits

0xf3f3,	// (0x0006a393) popup_side_volume_key_window_g1_ParamLimits

0xa347,	// (0x000652e7) popup_side_volume_key_window_g2_ParamLimits

0xa356,	// (0x000652f6) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0006a6a7) popup_side_volume_key_window_g_ParamLimits

0x0eac,	// (0x0005be4c) fep_hwr_aid_pane

0x0f53,	// (0x0005bef3) bg_fep_hwr_top_pane_g4_ParamLimits

0x4e0d,	// (0x0005fdad) fep_hwr_top_pane_g1_ParamLimits

0x4e1f,	// (0x0005fdbf) fep_hwr_top_pane_g2_ParamLimits

0x0f73,	// (0x0005bf13) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0006aaa9) fep_hwr_top_pane_g_ParamLimits

0x0f88,	// (0x0005bf28) fep_hwr_top_text_pane_ParamLimits

0x349f,	// (0x0005e43f) aid_touch_tab_arrow_arrow_2

0x34a8,	// (0x0005e448) aid_touch_tab_arrow_left_2

0x0ec0,	// (0x0005be60) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0ef7,	// (0x0005be97) fep_hwr_prediction_pane

0x4f78,	// (0x0005ff18) fep_vkb_prediction_pane

0xcec1,	// (0x00067e61) fep_vkb_side_pane_g3_ParamLimits

0xcec1,	// (0x00067e61) fep_vkb_side_pane_g3

0x1103,	// (0x0005c0a3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x116f,	// (0x0005c10f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x117c,	// (0x0005c11c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0006ab58) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x137a,	// (0x0005c31a) fep_hwr_prediction_pane_g1

0x1384,	// (0x0005c324) fep_hwr_prediction_pane_g2

0x138c,	// (0x0005c32c) fep_hwr_prediction_pane_g3

0x1394,	// (0x0005c334) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0006ac5b) fep_hwr_prediction_pane_g

0x5ed2,	// (0x00060e72) fep_vkb_prediction_pane_g1

0x5edc,	// (0x00060e7c) fep_vkb_prediction_pane_g2

0x5ee4,	// (0x00060e84) fep_vkb_prediction_pane_g3

0x5eec,	// (0x00060e8c) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0006ac64) fep_vkb_prediction_pane_g

0xb1fd,	// (0x0006619d) slider_set_pane_g3

0xb211,	// (0x000661b1) slider_set_pane_g4

0xb229,	// (0x000661c9) slider_set_pane_g5

0xb1fd,	// (0x0006619d) slider_set_pane_g6

0xb23f,	// (0x000661df) slider_set_pane_g7

0x3b2b,	// (0x0005eacb) slider_form_pane_g3

0x3b34,	// (0x0005ead4) slider_form_pane_g4

0x3b3c,	// (0x0005eadc) slider_form_pane_g5

0x3b2b,	// (0x0005eacb) slider_form_pane_g6

0xc90a,	// (0x000678aa) slider_form_pane_g7

0x435d,	// (0x0005f2fd) slider_set_pane_vc_g3

0x4366,	// (0x0005f306) slider_set_pane_vc_g4

0x436f,	// (0x0005f30f) slider_set_pane_vc_g5

0x435d,	// (0x0005f2fd) slider_set_pane_vc_g6

0x4378,	// (0x0005f318) slider_set_pane_vc_g7

0x452a,	// (0x0005f4ca) slider_form_pane_vc_g1

0x4533,	// (0x0005f4d3) slider_form_pane_vc_g2

0x453c,	// (0x0005f4dc) slider_form_pane_vc_g3

0x452a,	// (0x0005f4ca) slider_form_pane_vc_g4

0x4545,	// (0x0005f4e5) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0006aa26) slider_form_pane_vc_g

0xf0eb,	// (0x0006a08b) main_idle_act3_pane

0x5ef4,	// (0x00060e94) ai3_links_pane

0xd315,	// (0x000682b5) popup_ai3_data_window_ParamLimits

0xd315,	// (0x000682b5) popup_ai3_data_window

0x8080,	// (0x00063020) grid_ai3_links_pane

0xd32d,	// (0x000682cd) cell_ai3_links_pane_ParamLimits

0xd32d,	// (0x000682cd) cell_ai3_links_pane

0x5f2d,	// (0x00060ecd) bg_popup_sub_pane_cp11

0x5f3a,	// (0x00060eda) cell_ai3_links_pane_g1

0x8080,	// (0x00063020) bg_popup_sub_pane_cp12

0x5f5f,	// (0x00060eff) heading_ai3_data_pane

0x5f67,	// (0x00060f07) list_ai3_gene_pane

0x5f73,	// (0x00060f13) popup_ai3_data_window_g1

0x5f7b,	// (0x00060f1b) heading_ai3_data_pane_g1

0x5f83,	// (0x00060f23) heading_ai3_data_pane_t1

0xd347,	// (0x000682e7) list_double_ai3_gene_pane_ParamLimits

0xd347,	// (0x000682e7) list_double_ai3_gene_pane

0x5f9e,	// (0x00060f3e) list_single_ai3_gene_pane_ParamLimits

0x5f9e,	// (0x00060f3e) list_single_ai3_gene_pane

0x4d76,	// (0x0005fd16) list_highlight_pane_cp7_ParamLimits

0x4d76,	// (0x0005fd16) list_highlight_pane_cp7

0x5fab,	// (0x00060f4b) list_single_a13_gene_pane_t1_ParamLimits

0x5fab,	// (0x00060f4b) list_single_a13_gene_pane_t1

0x5fc2,	// (0x00060f62) list_single_ai3_gene_pane_g1

0x5fcb,	// (0x00060f6b) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x0006ac6d) list_single_ai3_gene_pane_g

0x5fd3,	// (0x00060f73) list_double_ai3_gene_pane_g1_ParamLimits

0x5fd3,	// (0x00060f73) list_double_ai3_gene_pane_g1

0xd354,	// (0x000682f4) list_double_ai3_gene_pane_t1_ParamLimits

0xd354,	// (0x000682f4) list_double_ai3_gene_pane_t1

0x5ffb,	// (0x00060f9b) list_double_ai3_gene_pane_t2_ParamLimits

0x5ffb,	// (0x00060f9b) list_double_ai3_gene_pane_t2

0x6010,	// (0x00060fb0) list_double_ai3_gene_pane_t3_ParamLimits

0x6010,	// (0x00060fb0) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x0006ac72) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x0006ac72) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe621,	// (0x000695c1) aid_size_min_col_2

0xd2bc,	// (0x0006825c) aid_size_min_msg_ParamLimits

0xd2bc,	// (0x0006825c) aid_size_min_msg

0xced5,	// (0x00067e75) fep_vkb_top_text_pane_g2_ParamLimits

0xced5,	// (0x00067e75) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0006aad9) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0006aad9) fep_vkb_top_text_pane_g

0xf0eb,	// (0x0006a08b) main_hc_apps_shell_pane

0x602d,	// (0x00060fcd) grid_hc_apps_pane_ParamLimits

0x602d,	// (0x00060fcd) grid_hc_apps_pane

0x603c,	// (0x00060fdc) list_hc_apps_pane

0x6044,	// (0x00060fe4) scroll_pane_cp37_ParamLimits

0x6044,	// (0x00060fe4) scroll_pane_cp37

0xd370,	// (0x00068310) cell_hc_apps_pane_ParamLimits

0xd370,	// (0x00068310) cell_hc_apps_pane

0xd42e,	// (0x000683ce) cell_hc_apps_pane_g1_ParamLimits

0xd42e,	// (0x000683ce) cell_hc_apps_pane_g1

0x612f,	// (0x000610cf) cell_hc_apps_pane_g2_ParamLimits

0x612f,	// (0x000610cf) cell_hc_apps_pane_g2

0x614b,	// (0x000610eb) cell_hc_apps_pane_g3_ParamLimits

0x614b,	// (0x000610eb) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x0006ac79) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x0006ac79) cell_hc_apps_pane_g

0xd45b,	// (0x000683fb) cell_hc_apps_pane_t1_ParamLimits

0xd45b,	// (0x000683fb) cell_hc_apps_pane_t1

0x821a,	// (0x000631ba) grid_highlight_pane_cp10_ParamLimits

0x821a,	// (0x000631ba) grid_highlight_pane_cp10

0xd499,	// (0x00068439) list_single_hc_apps_pane_ParamLimits

0xd499,	// (0x00068439) list_single_hc_apps_pane

0xd4c9,	// (0x00068469) list_single_hc_apps_pane_g1

0xd4e2,	// (0x00068482) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x0006ac80) list_single_hc_apps_pane_g

0xd4fb,	// (0x0006849b) list_single_hc_apps_pane_g2_copy1

0xb50c,	// (0x000664ac) list_single_hc_apps_pane_t1

0x80e2,	// (0x00063082) bg_set_opt_pane_cp_ParamLimits

0x954c,	// (0x000644ec) setting_slider_pane_t1_ParamLimits

0x9565,	// (0x00064505) setting_slider_pane_t2_ParamLimits

0x957f,	// (0x0006451f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0006a4fe) setting_slider_pane_t_ParamLimits

0x9597,	// (0x00064537) slider_set_pane_ParamLimits

0x01f3,	// (0x0005b193) control_pane_g5_ParamLimits

0x01f3,	// (0x0005b193) control_pane_g5

0xc78c,	// (0x0006772c) slider_set_pane_g1_ParamLimits

0x0c1e,	// (0x0005bbbe) slider_set_pane_g2_ParamLimits

0xb1fd,	// (0x0006619d) slider_set_pane_g3_ParamLimits

0xb211,	// (0x000661b1) slider_set_pane_g4_ParamLimits

0xb229,	// (0x000661c9) slider_set_pane_g5_ParamLimits

0xb1fd,	// (0x0006619d) slider_set_pane_g6_ParamLimits

0xb23f,	// (0x000661df) slider_set_pane_g7_ParamLimits

0xf94e,	// (0x0006a8ee) slider_set_pane_g_ParamLimits

0xdf8c,	// (0x00068f2c) navi_icon_text_pane_ParamLimits

0xb001,	// (0x00065fa1) aid_fill_nsta_2_ParamLimits

0xb038,	// (0x00065fd8) aid_touch_tab_arrow_left_ParamLimits

0xb04e,	// (0x00065fee) aid_touch_tab_arrow_right_ParamLimits

0xbe14,	// (0x00066db4) clock_nsta_pane_ParamLimits

0x3481,	// (0x0005e421) navi_icon_pane_g1_ParamLimits

0x348d,	// (0x0005e42d) navi_text_pane_t1_ParamLimits

0x4956,	// (0x0005f8f6) navi_icon_text_pane_g1_ParamLimits

0x4962,	// (0x0005f902) navi_icon_text_pane_t1_ParamLimits

0xd4c9,	// (0x00068469) list_single_hc_apps_pane_g1_ParamLimits

0xd4e2,	// (0x00068482) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x0006ac80) list_single_hc_apps_pane_g_ParamLimits

0xd4fb,	// (0x0006849b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb50c,	// (0x000664ac) list_single_hc_apps_pane_t1_ParamLimits

0x937d,	// (0x0006431d) popup_toolbar2_fixed_window_ParamLimits

0x937d,	// (0x0006431d) popup_toolbar2_fixed_window

0xaf11,	// (0x00065eb1) popup_toolbar2_float_window

0x8080,	// (0x00063020) bg_popup_sub_pane_cp27

0x624a,	// (0x000611ea) grid_toolbar2_float_pane

0x8080,	// (0x00063020) bg_popup_sub_pane_cp26

0x624a,	// (0x000611ea) grid_toolbar2_fixed_pane

0xd517,	// (0x000684b7) cell_toolbar2_fixed_pane_ParamLimits

0xd517,	// (0x000684b7) cell_toolbar2_fixed_pane

0xd531,	// (0x000684d1) cell_toolbar2_fixed_pane_g1

0x06d2,	// (0x0005b672) toolbar2_fixed_button_pane

0x25f7,	// (0x0005d597) toolbar2_fixed_button_pane_g1

0x2607,	// (0x0005d5a7) toolbar2_fixed_button_pane_g2

0x25ff,	// (0x0005d59f) toolbar2_fixed_button_pane_g3

0x2617,	// (0x0005d5b7) toolbar2_fixed_button_pane_g4

0x260f,	// (0x0005d5af) toolbar2_fixed_button_pane_g5

0x261f,	// (0x0005d5bf) toolbar2_fixed_button_pane_g6

0x2627,	// (0x0005d5c7) toolbar2_fixed_button_pane_g7

0x2637,	// (0x0005d5d7) toolbar2_fixed_button_pane_g8

0x262f,	// (0x0005d5cf) toolbar2_fixed_button_pane_g9

0x0008,

0xf850,	// (0x0006a7f0) toolbar2_fixed_button_pane_g

0x626b,	// (0x0006120b) cell_toolbar2_float_pane_ParamLimits

0x626b,	// (0x0006120b) cell_toolbar2_float_pane

0x627c,	// (0x0006121c) cell_toolbar2_float_pane_g1

0x06d2,	// (0x0005b672) toolbar2_fixed_button_pane_cp

0xcdbd,	// (0x00067d5d) fep_vkb_accented_list_pane_ParamLimits

0xcdbd,	// (0x00067d5d) fep_vkb_accented_list_pane

0x10e3,	// (0x0005c083) bg_popup_fep_shadow_pane_g9

0xe0de,	// (0x0006907e) bg_popup_fep_shadow_pane_cp3

0x85a8,	// (0x00063548) list_accented_list_pane

0x6285,	// (0x00061225) list_single_accented_list_pane_ParamLimits

0x6285,	// (0x00061225) list_single_accented_list_pane

0xe0de,	// (0x0006907e) list_highlight_pane_cp10

0x6296,	// (0x00061236) list_single_accented_list_pane_t1

0xae3b,	// (0x00065ddb) popup_slider_window_ParamLimits

0xae3b,	// (0x00065ddb) popup_slider_window

0x5eb5,	// (0x00060e55) aid_indentation_list_msg

0xd622,	// (0x000685c2) bg_popup_window_pane_cp19

0x63bc,	// (0x0006135c) popup_slider_window_g1

0x63d8,	// (0x00061378) popup_slider_window_g2

0x63f4,	// (0x00061394) popup_slider_window_g3

0x0005,

0xfce5,	// (0x0006ac85) popup_slider_window_g

0x645a,	// (0x000613fa) popup_slider_window_t1

0x64ce,	// (0x0006146e) small_volume_slider_vertical_pane

0x4db1,	// (0x0005fd51) small_volume_slider_vertical_pane_g1

0x4db1,	// (0x0005fd51) small_volume_slider_vertical_pane_g2

0x64ea,	// (0x0006148a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x0006ac97) small_volume_slider_vertical_pane_g

0x92cb,	// (0x0006426b) area_side_right_pane_ParamLimits

0x92cb,	// (0x0006426b) area_side_right_pane

0xb53a,	// (0x000664da) aid_size_side_button_ParamLimits

0xb53a,	// (0x000664da) aid_size_side_button

0xb553,	// (0x000664f3) grid_sctrl_middle_pane_ParamLimits

0xb553,	// (0x000664f3) grid_sctrl_middle_pane

0x13fd,	// (0x0005c39d) sctrl_sk_bottom_pane

0x140e,	// (0x0005c3ae) sctrl_sk_top_pane

0x1420,	// (0x0005c3c0) aid_touch_sctrl_top

0x142d,	// (0x0005c3cd) bg_sctrl_sk_pane_ParamLimits

0x142d,	// (0x0005c3cd) bg_sctrl_sk_pane

0x143b,	// (0x0005c3db) sctrl_sk_top_pane_g1

0x1448,	// (0x0005c3e8) sctrl_sk_top_pane_t1

0x1420,	// (0x0005c3c0) aid_touch_sctrl_bottom

0x142d,	// (0x0005c3cd) bg_sctrl_sk_pane_cp_ParamLimits

0x142d,	// (0x0005c3cd) bg_sctrl_sk_pane_cp

0x1463,	// (0x0005c403) sctrl_sk_bottom_pane_g1

0x1448,	// (0x0005c3e8) sctrl_sk_bottom_pane_t1

0xb56d,	// (0x0006650d) cell_sctrl_middle_pane_ParamLimits

0xb56d,	// (0x0006650d) cell_sctrl_middle_pane

0xb57e,	// (0x0006651e) aid_touch_sctrl_middle_ParamLimits

0xb57e,	// (0x0006651e) aid_touch_sctrl_middle

0xb58b,	// (0x0006652b) bg_sctrl_middle_pane_ParamLimits

0xb58b,	// (0x0006652b) bg_sctrl_middle_pane

0x1ad0,	// (0x0005ca70) cell_sctrl_middle_pane_g1_ParamLimits

0x1ad0,	// (0x0005ca70) cell_sctrl_middle_pane_g1

0xb599,	// (0x00066539) cell_sctrl_middle_pane_g2_ParamLimits

0xb599,	// (0x00066539) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x0006aca3) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x0006aca3) cell_sctrl_middle_pane_g

0x25f7,	// (0x0005d597) bg_sctrl_middle_pane_g1

0x25ff,	// (0x0005d59f) bg_sctrl_middle_pane_g2

0x2607,	// (0x0005d5a7) bg_sctrl_middle_pane_g3

0x260f,	// (0x0005d5af) bg_sctrl_middle_pane_g4

0x2617,	// (0x0005d5b7) bg_sctrl_middle_pane_g5

0x261f,	// (0x0005d5bf) bg_sctrl_middle_pane_g6

0x2627,	// (0x0005d5c7) bg_sctrl_middle_pane_g7

0x262f,	// (0x0005d5cf) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x0006aca8) bg_sctrl_middle_pane_g

0x2637,	// (0x0005d5d7) bg_sctrl_middle_pane_g8_copy1

0x25f7,	// (0x0005d597) bg_sctrl_sk_pane_g1

0x2607,	// (0x0005d5a7) bg_sctrl_sk_pane_g2

0x25ff,	// (0x0005d59f) bg_sctrl_sk_pane_g3

0x0008,

0xf850,	// (0x0006a7f0) bg_sctrl_sk_pane_g

0x83e4,	// (0x00063384) aid_size_touch_scroll_bar

0x2617,	// (0x0005d5b7) bg_sctrl_sk_pane_g4

0x260f,	// (0x0005d5af) bg_sctrl_sk_pane_g5

0x261f,	// (0x0005d5bf) bg_sctrl_sk_pane_g6

0x2627,	// (0x0005d5c7) bg_sctrl_sk_pane_g7

0x2637,	// (0x0005d5d7) bg_sctrl_sk_pane_g8

0x262f,	// (0x0005d5cf) bg_sctrl_sk_pane_g9

0x03b9,	// (0x0005b359) popup_fep_china_hwr2_fs_candidate_window

0xa8db,	// (0x0006587b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa8db,	// (0x0006587b) popup_fep_china_hwr2_fs_control_window

0x1103,	// (0x0005c0a3) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x0006ac9e) sctrl_sk_top_pane_g

0xd6da,	// (0x0006867a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd6da,	// (0x0006867a) aid_fep_china_hwr2_fs_cell

0xd6ee,	// (0x0006868e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd6ee,	// (0x0006868e) bg_popup_fep_shadow_pane_cp4

0xd705,	// (0x000686a5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd705,	// (0x000686a5) bg_popup_fep_shadow_pane_cp5

0xd717,	// (0x000686b7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd717,	// (0x000686b7) popup_fep_china_hwr2_fs_control_bar_grid

0xd72b,	// (0x000686cb) popup_fep_china_hwr2_fs_control_funtion_grid

0x6546,	// (0x000614e6) aid_fep_china_hwr2_fs_candi_cell

0x8080,	// (0x00063020) bg_popup_fep_shadow_pane_cp6

0x6550,	// (0x000614f0) popup_fep_china_hwr2_fs_candidate_grid

0xd733,	// (0x000686d3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd733,	// (0x000686d3) cell_fep_china_hwr2_fs_funtion_grid

0x4db1,	// (0x0005fd51) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6572,	// (0x00061512) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6572,	// (0x00061512) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6580,	// (0x00061520) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6580,	// (0x00061520) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x0006acb9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x0006acb9) cell_fep_china_hwr2_fs_funtion_grid_g

0xd74b,	// (0x000686eb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd74b,	// (0x000686eb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd760,	// (0x00068700) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd760,	// (0x00068700) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x0006acbe) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x0006acbe) cell_fep_china_hwr2_fs_funtion_grid_t

0x65c7,	// (0x00061567) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x65cf,	// (0x0006156f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x65d7,	// (0x00061577) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x0006acc3) popup_fep_china_hwr2_fs_control_bar_grid_g

0x65df,	// (0x0006157f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x65df,	// (0x0006157f) cell_fep_china_hwr2_fs_candidate_grid

0x65f8,	// (0x00061598) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6600,	// (0x000615a0) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4db1,	// (0x0005fd51) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4db1,	// (0x0005fd51) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0006aade) cell_fep_china_hwr2_fs_candidate_grid_g

0x6608,	// (0x000615a8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x21f0,	// (0x0005d190) clock_nsta_pane_cp_24_ParamLimits

0x21f0,	// (0x0005d190) clock_nsta_pane_cp_24

0x226e,	// (0x0005d20e) indicator_nsta_pane_cp_24_ParamLimits

0x226e,	// (0x0005d20e) indicator_nsta_pane_cp_24

0x32fd,	// (0x0005e29d) heading_pane_g1

0x0001,

0xf8b5,	// (0x0006a855) heading_pane_g

0x3d94,	// (0x0005ed34) grid_sct_catagory_button_pane

0x3dc4,	// (0x0005ed64) scroll_pane_cp5_ParamLimits

0x49a4,	// (0x0005f944) button_value_adjust_pane_cp5_ParamLimits

0x49a4,	// (0x0005f944) button_value_adjust_pane_cp5

0x4a83,	// (0x0005fa23) form2_midp_time_pane_ParamLimits

0x6616,	// (0x000615b6) cell_sct_catagory_button_pane_ParamLimits

0x6616,	// (0x000615b6) cell_sct_catagory_button_pane

0x4d76,	// (0x0005fd16) bg_button_pane_cp01_ParamLimits

0x4d76,	// (0x0005fd16) bg_button_pane_cp01

0x4db1,	// (0x0005fd51) cell_sct_catagory_button_pane_g1

0xaeb4,	// (0x00065e54) popup_tb_extension_window

0xd77c,	// (0x0006871c) aid_size_cell_ext_ParamLimits

0xd77c,	// (0x0006871c) aid_size_cell_ext

0x8396,	// (0x00063336) bg_tb_trans_pane_cp1_ParamLimits

0x8396,	// (0x00063336) bg_tb_trans_pane_cp1

0xd7a2,	// (0x00068742) grid_tb_ext_pane_ParamLimits

0xd7a2,	// (0x00068742) grid_tb_ext_pane

0xd7e1,	// (0x00068781) cell_tb_ext_pane_ParamLimits

0xd7e1,	// (0x00068781) cell_tb_ext_pane

0xd809,	// (0x000687a9) cell_tb_ext_pane_g1_ParamLimits

0xd809,	// (0x000687a9) cell_tb_ext_pane_g1

0x66ac,	// (0x0006164c) cell_tb_ext_pane_t1

0x821a,	// (0x000631ba) list_highlight_pane_cp11_ParamLimits

0x821a,	// (0x000631ba) list_highlight_pane_cp11

0x9392,	// (0x00064332) popup_uni_indicator_window_ParamLimits

0x9392,	// (0x00064332) popup_uni_indicator_window

0x84a2,	// (0x00063442) bg_popup_sub_pane_cp14

0xd826,	// (0x000687c6) list_uniindi_pane

0xd832,	// (0x000687d2) uniindi_top_pane

0x821a,	// (0x000631ba) bg_uniindi_top_pane

0xd851,	// (0x000687f1) uniindi_top_pane_g1

0xd867,	// (0x00068807) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x0006acca) uniindi_top_pane_g

0xd884,	// (0x00068824) uniindi_top_pane_t1

0x675d,	// (0x000616fd) list_single_uniindi_pane_ParamLimits

0x675d,	// (0x000616fd) list_single_uniindi_pane

0x4db1,	// (0x0005fd51) bg_uniindi_top_pane_g1

0x676f,	// (0x0006170f) list_single_uniindi_pane_g1

0x6782,	// (0x00061722) list_single_uniindi_pane_t1

0xf0eb,	// (0x0006a08b) control_bg_pane

0x67a7,	// (0x00061747) bg_sctrl_sk_pane_cp1

0x67b0,	// (0x00061750) bg_sctrl_sk_pane_cp2

0x67b9,	// (0x00061759) control_bg_pane_g1

0x67c2,	// (0x00061762) control_bg_pane_g2

0x0001,

0xfd33,	// (0x0006acd3) control_bg_pane_g

0x47fa,	// (0x0005f79a) cell_indicator_nsta_pane_g1_ParamLimits

0xcb84,	// (0x00067b24) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0006aa42) cell_indicator_nsta_pane_g_ParamLimits

0xe4a0,	// (0x00069440) form2_midp_time_pane_t1_ParamLimits

0x0e9e,	// (0x0005be3e) main_idle_act4_pane_ParamLimits

0x0e9e,	// (0x0005be3e) main_idle_act4_pane

0xaeb4,	// (0x00065e54) popup_tb_extension_window_ParamLimits

0xd7c7,	// (0x00068767) tb_ext_find_pane_ParamLimits

0xd7c7,	// (0x00068767) tb_ext_find_pane

0x67cb,	// (0x0006176b) ai_gene_pane_1_cp1

0x007a,	// (0x0005b01a) ai_gene_pane_2_cp1

0xd8ae,	// (0x0006884e) list_single_idle_plugin_calendar_pane

0x67dc,	// (0x0006177c) list_single_idle_plugin_notification_pane

0x67e5,	// (0x00061785) list_single_idle_plugin_player_pane

0xd8b7,	// (0x00068857) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd8b7,	// (0x00068857) list_single_idle_plugin_shortcut_pane

0xd8df,	// (0x0006887f) main_idle_act4_pane_t1

0xd8f6,	// (0x00068896) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x0006acd8) main_idle_act4_pane_t

0xd90d,	// (0x000688ad) middle_sk_idle_act4_pane_ParamLimits

0xd90d,	// (0x000688ad) middle_sk_idle_act4_pane

0xd929,	// (0x000688c9) popup_clock_digital_analogue_window_cp2

0xd955,	// (0x000688f5) shortcut_wheel_idle_act4_pane_ParamLimits

0xd955,	// (0x000688f5) shortcut_wheel_idle_act4_pane

0x4db1,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g1

0x4db1,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g2

0x4db1,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g3

0x4db1,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g4

0x4db1,	// (0x0005fd51) shortcut_wheel_idle_act4_pane_g5

0x6878,	// (0x00061818) shortcut_wheel_idle_act4_pane_g6

0x6880,	// (0x00061820) shortcut_wheel_idle_act4_pane_g7

0x6888,	// (0x00061828) shortcut_wheel_idle_act4_pane_g8

0x6890,	// (0x00061830) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x0006acdd) shortcut_wheel_idle_act4_pane_g

0xd9d2,	// (0x00068972) middle_sk_idle_act4_pane_g1_ParamLimits

0xd9d2,	// (0x00068972) middle_sk_idle_act4_pane_g1

0xd9e0,	// (0x00068980) middle_sk_idle_act4_pane_g2_ParamLimits

0xd9e0,	// (0x00068980) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x0006ad00) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x0006ad00) middle_sk_idle_act4_pane_g

0xd9f8,	// (0x00068998) middle_sk_idle_act4_pane_t1_ParamLimits

0xd9f8,	// (0x00068998) middle_sk_idle_act4_pane_t1

0xda27,	// (0x000689c7) grid_ai_shortcut_pane_ParamLimits

0xda27,	// (0x000689c7) grid_ai_shortcut_pane

0xda44,	// (0x000689e4) list_highlight_pane_cp16_ParamLimits

0xda44,	// (0x000689e4) list_highlight_pane_cp16

0xda51,	// (0x000689f1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xda51,	// (0x000689f1) list_single_idle_plugin_shortcut_pane_g1

0xda5d,	// (0x000689fd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xda5d,	// (0x000689fd) list_single_idle_plugin_shortcut_pane_g2

0xda79,	// (0x00068a19) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xda79,	// (0x00068a19) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x0006ad05) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x0006ad05) list_single_idle_plugin_shortcut_pane_g

0xda8e,	// (0x00068a2e) cell_ai_shortcut_pane_ParamLimits

0xda8e,	// (0x00068a2e) cell_ai_shortcut_pane

0xdaa4,	// (0x00068a44) cell_ai_shortcut_pane_g1_ParamLimits

0xdaa4,	// (0x00068a44) cell_ai_shortcut_pane_g1

0x67cb,	// (0x0006176b) ai_gene_pane_1_cp2

0x69c0,	// (0x00061960) ai_gene_pane_2_cp2

0x69c8,	// (0x00061968) list_highlight_pane_cp15

0xdac6,	// (0x00068a66) list_single_idle_plugin_calendar_pane_g1

0x69c8,	// (0x00061968) list_highlight_pane_cp17

0x69d9,	// (0x00061979) list_single_idle_plugin_calendar_pane_g1_copy1

0x69e1,	// (0x00061981) list_single_idle_plugin_player_pane_g1

0x4154,	// (0x0005f0f4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x0006ad0c) list_single_idle_plugin_player_pane_g

0x69e9,	// (0x00061989) list_single_idle_plugin_player_pane_t1

0x69f7,	// (0x00061997) list_single_idle_plugin_player_pane_t2

0x6a05,	// (0x000619a5) list_single_idle_plugin_player_pane_t3

0x6a13,	// (0x000619b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x0006ad11) list_single_idle_plugin_player_pane_t

0x6a21,	// (0x000619c1) wait_bar_pane_cp15

0x6a29,	// (0x000619c9) grid_ai_notification_pane

0x4154,	// (0x0005f0f4) list_single_idle_plugin_notification_pane_g1

0xdace,	// (0x00068a6e) cell_ai_notification_pane_ParamLimits

0xdace,	// (0x00068a6e) cell_ai_notification_pane

0x6a3f,	// (0x000619df) cell_ai_notification_pane_g1

0x6a47,	// (0x000619e7) cell_ai_notification_pane_t1

0xdadb,	// (0x00068a7b) tb_ext_find_button_pane

0xdae3,	// (0x00068a83) tb_ext_find_pane_g1

0xdaeb,	// (0x00068a8b) tb_ext_find_pane_t1

0xbc43,	// (0x00066be3) tb_ext_find_button_pane_g1

0xdaf9,	// (0x00068a99) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x0006ad1a) tb_ext_find_button_pane_g

0xd8df,	// (0x0006887f) main_idle_act4_pane_t1_ParamLimits

0xd8f6,	// (0x00068896) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x0006acd8) main_idle_act4_pane_t_ParamLimits

0xd929,	// (0x000688c9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd941,	// (0x000688e1) sat_plugin_idle_act4_pane_ParamLimits

0xd941,	// (0x000688e1) sat_plugin_idle_act4_pane

0xdb02,	// (0x00068aa2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdb02,	// (0x00068aa2) sat_plugin_idle_act4_pane_t1

0xdb1a,	// (0x00068aba) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdb1a,	// (0x00068aba) sat_plugin_idle_act4_pane_t2

0xdb32,	// (0x00068ad2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdb32,	// (0x00068ad2) sat_plugin_idle_act4_pane_t3

0xdb4a,	// (0x00068aea) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdb4a,	// (0x00068aea) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x0006ad1f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x0006ad1f) sat_plugin_idle_act4_pane_t

0x930d,	// (0x000642ad) popup_battery_window_ParamLimits

0x930d,	// (0x000642ad) popup_battery_window

0x821a,	// (0x000631ba) bg_popup_sub_pane_cp25_ParamLimits

0x821a,	// (0x000631ba) bg_popup_sub_pane_cp25

0x6ac8,	// (0x00061a68) popup_battery_window_g1_ParamLimits

0x6ac8,	// (0x00061a68) popup_battery_window_g1

0x6ad4,	// (0x00061a74) popup_battery_window_t1_ParamLimits

0x6ad4,	// (0x00061a74) popup_battery_window_t1

0x6ae6,	// (0x00061a86) popup_battery_window_t2_ParamLimits

0x6ae6,	// (0x00061a86) popup_battery_window_t2

0x0001,

0xfd88,	// (0x0006ad28) popup_battery_window_t_ParamLimits

0xfd88,	// (0x0006ad28) popup_battery_window_t

0xa515,	// (0x000654b5) midp_canvas_pane_ParamLimits

0xa587,	// (0x00065527) midp_keypad_pane_ParamLimits

0xa587,	// (0x00065527) midp_keypad_pane

0x20d0,	// (0x0005d070) main_midp_pane_ParamLimits

0xcb91,	// (0x00067b31) signal_pane_g2_cp_ParamLimits

0xdb62,	// (0x00068b02) aid_size_cell_midp_keypad_ParamLimits

0xdb62,	// (0x00068b02) aid_size_cell_midp_keypad

0xdb80,	// (0x00068b20) midp_keyp_game_grid_pane_ParamLimits

0xdb80,	// (0x00068b20) midp_keyp_game_grid_pane

0xdba7,	// (0x00068b47) midp_keyp_rocker_pane_ParamLimits

0xdba7,	// (0x00068b47) midp_keyp_rocker_pane

0xdbf8,	// (0x00068b98) midp_keyp_sk_left_pane_ParamLimits

0xdbf8,	// (0x00068b98) midp_keyp_sk_left_pane

0xdc4c,	// (0x00068bec) midp_keyp_sk_right_pane_ParamLimits

0xdc4c,	// (0x00068bec) midp_keyp_sk_right_pane

0x8080,	// (0x00063020) bg_button_pane_cp03

0xdca0,	// (0x00068c40) midp_keyp_sk_left_pane_g1

0x8080,	// (0x00063020) bg_button_pane_cp04

0xdca0,	// (0x00068c40) midp_keyp_sk_right_pane_g1

0x4db1,	// (0x0005fd51) midp_keyp_rocker_pane_g1

0xdca9,	// (0x00068c49) keyp_game_cell_pane_ParamLimits

0xdca9,	// (0x00068c49) keyp_game_cell_pane

0x8080,	// (0x00063020) bg_button_pane_cp02

0xe650,	// (0x000695f0) keyp_game_cell_pane_g1

0x932d,	// (0x000642cd) popup_fep_vkb2_window_ParamLimits

0x932d,	// (0x000642cd) popup_fep_vkb2_window

0xb5a5,	// (0x00066545) aid_size_cell_vkb2_ParamLimits

0xb5a5,	// (0x00066545) aid_size_cell_vkb2

0xb5e3,	// (0x00066583) popup_fep_vkb2_window_g1_ParamLimits

0xb5e3,	// (0x00066583) popup_fep_vkb2_window_g1

0xb633,	// (0x000665d3) vkb2_area_bottom_pane_ParamLimits

0xb633,	// (0x000665d3) vkb2_area_bottom_pane

0xb687,	// (0x00066627) vkb2_area_keypad_pane_ParamLimits

0xb687,	// (0x00066627) vkb2_area_keypad_pane

0xb6cf,	// (0x0006666f) vkb2_area_top_pane_ParamLimits

0xb6cf,	// (0x0006666f) vkb2_area_top_pane

0xb755,	// (0x000666f5) vkb2_top_entry_pane_ParamLimits

0xb755,	// (0x000666f5) vkb2_top_entry_pane

0xb782,	// (0x00066722) vkb2_top_grid_left_pane_ParamLimits

0xb782,	// (0x00066722) vkb2_top_grid_left_pane

0xb7a2,	// (0x00066742) vkb2_top_grid_right_pane_ParamLimits

0xb7a2,	// (0x00066742) vkb2_top_grid_right_pane

0x16cf,	// (0x0005c66f) vkb2_cell_keypad_pane_ParamLimits

0x16cf,	// (0x0005c66f) vkb2_cell_keypad_pane

0xb7e8,	// (0x00066788) vkb2_area_bottom_grid_pane_ParamLimits

0xb7e8,	// (0x00066788) vkb2_area_bottom_grid_pane

0xb812,	// (0x000667b2) vkb2_area_bottom_pane_g1_ParamLimits

0xb812,	// (0x000667b2) vkb2_area_bottom_pane_g1

0xb838,	// (0x000667d8) vkb2_area_bottom_pane_g2_ParamLimits

0xb838,	// (0x000667d8) vkb2_area_bottom_pane_g2

0xb869,	// (0x00066809) vkb2_area_bottom_pane_g3_ParamLimits

0xb869,	// (0x00066809) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x0006ad2d) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x0006ad2d) vkb2_area_bottom_pane_g

0x1879,	// (0x0005c819) vkb2_top_cell_left_pane_ParamLimits

0x1879,	// (0x0005c819) vkb2_top_cell_left_pane

0xe659,	// (0x000695f9) vkb2_top_entry_pane_g1_ParamLimits

0xe659,	// (0x000695f9) vkb2_top_entry_pane_g1

0xe667,	// (0x00069607) vkb2_top_entry_pane_t1_ParamLimits

0xe667,	// (0x00069607) vkb2_top_entry_pane_t1

0x6c97,	// (0x00061c37) vkb2_top_entry_pane_t2_ParamLimits

0x6c97,	// (0x00061c37) vkb2_top_entry_pane_t2

0x6cc9,	// (0x00061c69) vkb2_top_entry_pane_t3_ParamLimits

0x6cc9,	// (0x00061c69) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x0006ad34) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x0006ad34) vkb2_top_entry_pane_t

0xb8d3,	// (0x00066873) vkb2_top_grid_right_pane_g1_ParamLimits

0xb8d3,	// (0x00066873) vkb2_top_grid_right_pane_g1

0x18dc,	// (0x0005c87c) vkb2_top_grid_right_pane_g2_ParamLimits

0x18dc,	// (0x0005c87c) vkb2_top_grid_right_pane_g2

0x18f4,	// (0x0005c894) vkb2_top_grid_right_pane_g3_ParamLimits

0x18f4,	// (0x0005c894) vkb2_top_grid_right_pane_g3

0xb8e9,	// (0x00066889) vkb2_top_grid_right_pane_g4_ParamLimits

0xb8e9,	// (0x00066889) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x0006ad3b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x0006ad3b) vkb2_top_grid_right_pane_g

0x1922,	// (0x0005c8c2) vkb2_top_cell_left_pane_g1

0x1939,	// (0x0005c8d9) vkb2_cell_keypad_pane_g1_ParamLimits

0x1939,	// (0x0005c8d9) vkb2_cell_keypad_pane_g1

0x6ced,	// (0x00061c8d) vkb2_cell_keypad_pane_t1_ParamLimits

0x6ced,	// (0x00061c8d) vkb2_cell_keypad_pane_t1

0x1947,	// (0x0005c8e7) vkb2_cell_bottom_grid_pane_ParamLimits

0x1947,	// (0x0005c8e7) vkb2_cell_bottom_grid_pane

0x1980,	// (0x0005c920) vkb2_cell_bottom_grid_pane_g1

0xd976,	// (0x00068916) aid_call2_pane_cp02

0xd97e,	// (0x0006891e) aid_call_pane_cp02

0xd986,	// (0x00068926) clock_digital_number_pane_cp10

0xd98e,	// (0x0006892e) clock_digital_number_pane_cp11

0xd996,	// (0x00068936) clock_digital_number_pane_cp12

0xd99e,	// (0x0006893e) clock_digital_number_pane_cp13

0xd9a6,	// (0x00068946) clock_digital_separator_pane_cp10

0xbc43,	// (0x00066be3) popup_clock_digital_analogue_window_cp2_g1

0xbc43,	// (0x00066be3) popup_clock_digital_analogue_window_cp2_g2

0xd9ae,	// (0x0006894e) popup_clock_digital_analogue_window_cp2_g3

0xbc43,	// (0x00066be3) popup_clock_digital_analogue_window_cp2_g4

0xd9ae,	// (0x0006894e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x0006acf0) popup_clock_digital_analogue_window_cp2_g

0xd9b6,	// (0x00068956) popup_clock_digital_analogue_window_cp2_t1

0xd9c4,	// (0x00068964) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x0006acfb) popup_clock_digital_analogue_window_cp2_t

0x4db1,	// (0x0005fd51) clock_digital_number_pane_cp10_g1

0x4db1,	// (0x0005fd51) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0006aade) clock_digital_number_pane_cp10_g

0x4db1,	// (0x0005fd51) clock_digital_separator_pane_cp10_g1

0x4db1,	// (0x0005fd51) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0006aade) clock_digital_separator_pane_cp10_g

0xd873,	// (0x00068813) uniindi_top_pane_g3

0x6726,	// (0x000616c6) uniindi_top_pane_g4

0x175a,	// (0x0005c6fa) vkb2_row_keypad_pane_ParamLimits

0x175a,	// (0x0005c6fa) vkb2_row_keypad_pane

0x199c,	// (0x0005c93c) vkb2_cell_t_keypad_pane_ParamLimits

0x199c,	// (0x0005c93c) vkb2_cell_t_keypad_pane

0x19ac,	// (0x0005c94c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x19ac,	// (0x0005c94c) vkb2_cell_t_keypad_pane_cp08

0x19bf,	// (0x0005c95f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x19bf,	// (0x0005c95f) vkb2_cell_t_keypad_pane_cp09

0x19d3,	// (0x0005c973) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x19d3,	// (0x0005c973) vkb2_cell_t_keypad_pane_cp01

0x19e4,	// (0x0005c984) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x19e4,	// (0x0005c984) vkb2_cell_t_keypad_pane_cp02

0x19f5,	// (0x0005c995) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x19f5,	// (0x0005c995) vkb2_cell_t_keypad_pane_cp03

0x1a06,	// (0x0005c9a6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1a06,	// (0x0005c9a6) vkb2_cell_t_keypad_pane_cp04

0x1a17,	// (0x0005c9b7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1a17,	// (0x0005c9b7) vkb2_cell_t_keypad_pane_cp05

0x1a28,	// (0x0005c9c8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1a28,	// (0x0005c9c8) vkb2_cell_t_keypad_pane_cp06

0x1a39,	// (0x0005c9d9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1a39,	// (0x0005c9d9) vkb2_cell_t_keypad_pane_cp07

0x1a4a,	// (0x0005c9ea) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1a4a,	// (0x0005c9ea) vkb2_cell_t_keypad_pane_cp10

0x1103,	// (0x0005c0a3) vkb2_cell_t_keypad_pane_g1

0x6d04,	// (0x00061ca4) vkb2_cell_t_keypad_pane_t1

0xf0eb,	// (0x0006a08b) popup_grid_graphic2_window

0xe6a0,	// (0x00069640) aid_size_cell_graphic2_ParamLimits

0xe6a0,	// (0x00069640) aid_size_cell_graphic2

0xe6de,	// (0x0006967e) bg_popup_window_pane_cp21_ParamLimits

0xe6de,	// (0x0006967e) bg_popup_window_pane_cp21

0xe6ec,	// (0x0006968c) graphic2_pages_pane_ParamLimits

0xe6ec,	// (0x0006968c) graphic2_pages_pane

0xe742,	// (0x000696e2) grid_graphic2_control_pane_ParamLimits

0xe742,	// (0x000696e2) grid_graphic2_control_pane

0xe78a,	// (0x0006972a) grid_graphic2_pane_ParamLimits

0xe78a,	// (0x0006972a) grid_graphic2_pane

0xe811,	// (0x000697b1) cell_graphic2_pane

0xf0eb,	// (0x0006a08b) main_comp_mode_pane

0x5f67,	// (0x00060f07) list_ai3_gene_pane_ParamLimits

0xd622,	// (0x000685c2) bg_popup_window_pane_cp19_ParamLimits

0x6360,	// (0x00061300) bg_touch_area_indi_pane_ParamLimits

0x6360,	// (0x00061300) bg_touch_area_indi_pane

0x6376,	// (0x00061316) bg_touch_area_indi_pane_cp01_ParamLimits

0x6376,	// (0x00061316) bg_touch_area_indi_pane_cp01

0x638c,	// (0x0006132c) bg_touch_area_indi_pane_cp02_ParamLimits

0x638c,	// (0x0006132c) bg_touch_area_indi_pane_cp02

0x63a2,	// (0x00061342) bg_touch_area_indi_pane_cp03_ParamLimits

0x63a2,	// (0x00061342) bg_touch_area_indi_pane_cp03

0x63bc,	// (0x0006135c) popup_slider_window_g1_ParamLimits

0x63d8,	// (0x00061378) popup_slider_window_g2_ParamLimits

0x63f4,	// (0x00061394) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x0006ac85) popup_slider_window_g_ParamLimits

0x645a,	// (0x000613fa) popup_slider_window_t1_ParamLimits

0x64ce,	// (0x0006146e) small_volume_slider_vertical_pane_ParamLimits

0xe811,	// (0x000697b1) cell_graphic2_pane_ParamLimits

0xe86c,	// (0x0006980c) bg_button_pane_cp10_ParamLimits

0xe86c,	// (0x0006980c) bg_button_pane_cp10

0xe87f,	// (0x0006981f) bg_button_pane_cp11_ParamLimits

0xe87f,	// (0x0006981f) bg_button_pane_cp11

0xe892,	// (0x00069832) graphic2_pages_pane_g1_ParamLimits

0xe892,	// (0x00069832) graphic2_pages_pane_g1

0xe8ad,	// (0x0006984d) graphic2_pages_pane_g2_ParamLimits

0xe8ad,	// (0x0006984d) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x0006ad49) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x0006ad49) graphic2_pages_pane_g

0xe8c5,	// (0x00069865) graphic2_pages_pane_t1_ParamLimits

0xe8c5,	// (0x00069865) graphic2_pages_pane_t1

0xe8dd,	// (0x0006987d) cell_graphic2_control_pane_ParamLimits

0xe8dd,	// (0x0006987d) cell_graphic2_control_pane

0xe90f,	// (0x000698af) cell_graphic2_pane_g1_ParamLimits

0xe90f,	// (0x000698af) cell_graphic2_pane_g1

0xdccd,	// (0x00068c6d) cell_graphic2_pane_g2_ParamLimits

0xdccd,	// (0x00068c6d) cell_graphic2_pane_g2

0xe4b3,	// (0x00069453) cell_graphic2_pane_g3_ParamLimits

0xe4b3,	// (0x00069453) cell_graphic2_pane_g3

0xdcda,	// (0x00068c7a) cell_graphic2_pane_g4_ParamLimits

0xdcda,	// (0x00068c7a) cell_graphic2_pane_g4

0xe91c,	// (0x000698bc) cell_graphic2_pane_g5_ParamLimits

0xe91c,	// (0x000698bc) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x0006ad4e) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x0006ad4e) cell_graphic2_pane_g

0xe93c,	// (0x000698dc) cell_graphic2_pane_t1_ParamLimits

0xe93c,	// (0x000698dc) cell_graphic2_pane_t1

0x32f1,	// (0x0005e291) grid_highlight_pane_cp11_ParamLimits

0x32f1,	// (0x0005e291) grid_highlight_pane_cp11

0x821a,	// (0x000631ba) bg_button_pane_cp05

0xe988,	// (0x00069928) cell_graphic2_control_pane_g1

0x4db1,	// (0x0005fd51) bg_touch_area_indi_pane_g1

0x6fe0,	// (0x00061f80) aid_cmod_rocker_key_size

0x6fea,	// (0x00061f8a) aid_cmode_itu_key_size

0x6ff4,	// (0x00061f94) main_cmode_video_pane

0x6ffe,	// (0x00061f9e) main_comp_mode_itu_pane

0x700a,	// (0x00061faa) main_comp_mode_rocker_pane

0x7016,	// (0x00061fb6) cell_cmode_rocker_pane_ParamLimits

0x7016,	// (0x00061fb6) cell_cmode_rocker_pane

0x7028,	// (0x00061fc8) cell_cmode_itu_pane_ParamLimits

0x7028,	// (0x00061fc8) cell_cmode_itu_pane

0x84a2,	// (0x00063442) bg_button_pane_cp06_ParamLimits

0x84a2,	// (0x00063442) bg_button_pane_cp06

0x5021,	// (0x0005ffc1) cell_cmode_rocker_pane_g1_ParamLimits

0x5021,	// (0x0005ffc1) cell_cmode_rocker_pane_g1

0x6572,	// (0x00061512) cell_cmode_rocker_pane_g2_ParamLimits

0x6572,	// (0x00061512) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x0006ad5e) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x0006ad5e) cell_cmode_rocker_pane_g

0x8080,	// (0x00063020) bg_button_pane_cp07

0x703d,	// (0x00061fdd) cell_cmode_itu_pane_g1

0x7046,	// (0x00061fe6) cell_cmode_itu_pane_t1

0x7054,	// (0x00061ff4) cell_cmode_itu_pane_t2

0x0001,

0xfdc3,	// (0x0006ad63) cell_cmode_itu_pane_t

0x6797,	// (0x00061737) aid_touch_ctrl_left

0x679f,	// (0x0006173f) aid_touch_ctrl_right

0x8080,	// (0x00063020) compa_mode_pane

0xe9ae,	// (0x0006994e) aid_cmod_rocker_key_size_cp

0xe9b8,	// (0x00069958) aid_cmode_itu_key_size_cp

0x7076,	// (0x00062016) compa_mode_pane_g1

0x707e,	// (0x0006201e) compa_mode_pane_g2

0x7086,	// (0x00062026) compa_mode_pane_g3

0x0002,

0xfdc8,	// (0x0006ad68) compa_mode_pane_g

0xe9c2,	// (0x00069962) main_comp_mode_itu_pane_cp

0xe9ca,	// (0x0006996a) main_comp_mode_rocker_pane_cp

0xe9d2,	// (0x00069972) cell_cmode_itu_pane_cp_ParamLimits

0xe9d2,	// (0x00069972) cell_cmode_itu_pane_cp

0xe9e7,	// (0x00069987) cell_cmode_rocker_pane_cp_ParamLimits

0xe9e7,	// (0x00069987) cell_cmode_rocker_pane_cp

0x84a2,	// (0x00063442) bg_button_pane_cp06_cp_ParamLimits

0x84a2,	// (0x00063442) bg_button_pane_cp06_cp

0x5021,	// (0x0005ffc1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5021,	// (0x0005ffc1) cell_cmode_rocker_pane_g1_cp

0x4db1,	// (0x0005fd51) cell_cmode_rocker_pane_g2_cp

0x8080,	// (0x00063020) bg_button_pane_cp07_cp

0xe9f9,	// (0x00069999) cell_cmode_itu_pane_g1_cp

0xea02,	// (0x000699a2) cell_cmode_itu_pane_t1_cp

0xea02,	// (0x000699a2) cell_cmode_itu_pane_t2_cp

0xc900,	// (0x000678a0) settings_code_pane_cp2

0x80e2,	// (0x00063082) bg_popup_window_pane_cp3_ParamLimits

0x8333,	// (0x000632d3) heading_pane_cp3_ParamLimits

0x833f,	// (0x000632df) listscroll_popup_graphic_pane_ParamLimits

0x0eac,	// (0x0005be4c) fep_hwr_aid_pane_ParamLimits

0x1420,	// (0x0005c3c0) aid_touch_sctrl_top_ParamLimits

0x143b,	// (0x0005c3db) sctrl_sk_top_pane_g1_ParamLimits

0x1103,	// (0x0005c0a3) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x0006ac9e) sctrl_sk_top_pane_g_ParamLimits

0x1448,	// (0x0005c3e8) sctrl_sk_top_pane_t1_ParamLimits

0x1420,	// (0x0005c3c0) aid_touch_sctrl_bottom_ParamLimits

0x1448,	// (0x0005c3e8) sctrl_sk_bottom_pane_t1_ParamLimits

0xd83f,	// (0x000687df) aid_area_touch_clock

0xb717,	// (0x000666b7) aid_vkb2_area_top_pane_cell_ParamLimits

0xb717,	// (0x000666b7) aid_vkb2_area_top_pane_cell

0xb7c2,	// (0x00066762) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb7c2,	// (0x00066762) aid_vkb2_area_bottom_pane_cell

0x6c4f,	// (0x00061bef) popup_char_count_window

0x70dc,	// (0x0006207c) popup_char_count_window_g1

0x70e5,	// (0x00062085) popup_char_count_window_g2

0x70ee,	// (0x0006208e) popup_char_count_window_g3

0x0002,

0xfdcf,	// (0x0006ad6f) popup_char_count_window_g

0x70f7,	// (0x00062097) popup_char_count_window_t1

0x14f7,	// (0x0005c497) popup_fep_char_preview_window_ParamLimits

0x14f7,	// (0x0005c497) popup_fep_char_preview_window

0xb737,	// (0x000666d7) vkb2_top_candi_pane_ParamLimits

0xb737,	// (0x000666d7) vkb2_top_candi_pane

0xea10,	// (0x000699b0) cell_vkb2_top_candi_pane_ParamLimits

0xea10,	// (0x000699b0) cell_vkb2_top_candi_pane

0x1a5f,	// (0x0005c9ff) bg_popup_fep_char_preview_window_ParamLimits

0x1a5f,	// (0x0005c9ff) bg_popup_fep_char_preview_window

0x1a6d,	// (0x0005ca0d) popup_fep_char_preview_window_t1_ParamLimits

0x1a6d,	// (0x0005ca0d) popup_fep_char_preview_window_t1

0x7152,	// (0x000620f2) bg_popup_fep_char_preview_window_g1

0x715a,	// (0x000620fa) bg_popup_fep_char_preview_window_g2

0x7162,	// (0x00062102) bg_popup_fep_char_preview_window_g3

0x716a,	// (0x0006210a) bg_popup_fep_char_preview_window_g4

0x7172,	// (0x00062112) bg_popup_fep_char_preview_window_g5

0x1aa7,	// (0x0005ca47) bg_popup_fep_char_preview_window_g6

0x717a,	// (0x0006211a) bg_popup_fep_char_preview_window_g7

0x7182,	// (0x00062122) bg_popup_fep_char_preview_window_g8

0x718a,	// (0x0006212a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd6,	// (0x0006ad76) bg_popup_fep_char_preview_window_g

0x1103,	// (0x0005c0a3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1103,	// (0x0005c0a3) cell_vkb2_top_candi_pane_g1

0x1111,	// (0x0005c0b1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1111,	// (0x0005c0b1) cell_vkb2_top_candi_pane_g2

0x6210,	// (0x000611b0) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6210,	// (0x000611b0) cell_vkb2_top_candi_pane_g3

0x1aaf,	// (0x0005ca4f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1aaf,	// (0x0005ca4f) cell_vkb2_top_candi_pane_g4

0x5521,	// (0x000604c1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5521,	// (0x000604c1) cell_vkb2_top_candi_pane_g5

0x1ad0,	// (0x0005ca70) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1ad0,	// (0x0005ca70) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde9,	// (0x0006ad89) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde9,	// (0x0006ad89) cell_vkb2_top_candi_pane_g

0x1ade,	// (0x0005ca7e) cell_vkb2_top_candi_pane_t1

0xb1e9,	// (0x00066189) aid_size_touch_slider_mark_ParamLimits

0xb1e9,	// (0x00066189) aid_size_touch_slider_mark

0xe728,	// (0x000696c8) grid_graphic2_catg_pane_ParamLimits

0xe728,	// (0x000696c8) grid_graphic2_catg_pane

0xe7e4,	// (0x00069784) popup_grid_graphic2_window_t1_ParamLimits

0xe7e4,	// (0x00069784) popup_grid_graphic2_window_t1

0xe7fa,	// (0x0006979a) popup_grid_graphic2_window_t2_ParamLimits

0xe7fa,	// (0x0006979a) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x0006ad44) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x0006ad44) popup_grid_graphic2_window_t

0x821a,	// (0x000631ba) bg_button_pane_cp05_ParamLimits

0xe988,	// (0x00069928) cell_graphic2_control_pane_g1_ParamLimits

0xea76,	// (0x00069a16) cell_graphic2_catg_pane_ParamLimits

0xea76,	// (0x00069a16) cell_graphic2_catg_pane

0x8080,	// (0x00063020) bg_button_pane_cp12

0xea88,	// (0x00069a28) cell_graphic2_catg_pane_g1

0x66ac,	// (0x0006164c) cell_tb_ext_pane_t1_ParamLimits

0x1899,	// (0x0005c839) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1899,	// (0x0005c839) vkb2_top_cell_right_narrow_pane

0x18b1,	// (0x0005c851) vkb2_top_cell_right_wide_pane_ParamLimits

0x18b1,	// (0x0005c851) vkb2_top_cell_right_wide_pane

0x0e9e,	// (0x0005be3e) bg_vkb2_func_pane_ParamLimits

0x0e9e,	// (0x0005be3e) bg_vkb2_func_pane

0x1922,	// (0x0005c8c2) vkb2_top_cell_left_pane_g1_ParamLimits

0x0e9e,	// (0x0005be3e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0e9e,	// (0x0005be3e) bg_vkb2_fuc_pane_cp03

0x1980,	// (0x0005c920) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x25ff,	// (0x0005d59f) bg_vkb2_func_pane_g1

0x2607,	// (0x0005d5a7) bg_vkb2_func_pane_g2

0x2617,	// (0x0005d5b7) bg_vkb2_func_pane_g3

0x260f,	// (0x0005d5af) bg_vkb2_func_pane_g4

0x261f,	// (0x0005d5bf) bg_vkb2_func_pane_g5

0x2627,	// (0x0005d5c7) bg_vkb2_func_pane_g6

0x262f,	// (0x0005d5cf) bg_vkb2_func_pane_g7

0x2637,	// (0x0005d5d7) bg_vkb2_func_pane_g8

0x25f7,	// (0x0005d597) bg_vkb2_func_pane_g9

0x0008,

0xfdf6,	// (0x0006ad96) bg_vkb2_func_pane_g

0x0e9e,	// (0x0005be3e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0e9e,	// (0x0005be3e) bg_vkb2_fuc_pane_cp01

0x1922,	// (0x0005c8c2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1922,	// (0x0005c8c2) vkb2_top_cell_right_wide_pane_g1

0x0e9e,	// (0x0005be3e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0e9e,	// (0x0005be3e) bg_vkb2_fuc_pane_cp02

0x1980,	// (0x0005c920) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1980,	// (0x0005c920) vkb2_top_cell_right_narrow_pane_g1

0xd564,	// (0x00068504) aid_touch_area_decrease_ParamLimits

0xd564,	// (0x00068504) aid_touch_area_decrease

0xd59e,	// (0x0006853e) aid_touch_area_increase_ParamLimits

0xd59e,	// (0x0006853e) aid_touch_area_increase

0xd5c6,	// (0x00068566) aid_touch_area_mute_ParamLimits

0xd5c6,	// (0x00068566) aid_touch_area_mute

0xd5ee,	// (0x0006858e) aid_touch_area_slider_ParamLimits

0xd5ee,	// (0x0006858e) aid_touch_area_slider

0xd62e,	// (0x000685ce) popup_slider_window_g4_ParamLimits

0xd62e,	// (0x000685ce) popup_slider_window_g4

0xd656,	// (0x000685f6) popup_slider_window_g5_ParamLimits

0xd656,	// (0x000685f6) popup_slider_window_g5

0xd68a,	// (0x0006862a) popup_slider_window_g6_ParamLimits

0xd68a,	// (0x0006862a) popup_slider_window_g6

0x6488,	// (0x00061428) popup_slider_window_t2_ParamLimits

0x6488,	// (0x00061428) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x0006ac92) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x0006ac92) popup_slider_window_t

0xd6a6,	// (0x00068646) slider_pane_ParamLimits

0xd6a6,	// (0x00068646) slider_pane

0x71ad,	// (0x0006214d) slider_pane_g1_ParamLimits

0x71ad,	// (0x0006214d) slider_pane_g1

0x71c1,	// (0x00062161) slider_pane_g2_ParamLimits

0x71c1,	// (0x00062161) slider_pane_g2

0x71d7,	// (0x00062177) slider_pane_g3_ParamLimits

0x71d7,	// (0x00062177) slider_pane_g3

0x0003,

0xfe09,	// (0x0006ada9) slider_pane_g_ParamLimits

0xfe09,	// (0x0006ada9) slider_pane_g

0xaefc,	// (0x00065e9c) popup_tb_float_extension_window_ParamLimits

0xaefc,	// (0x00065e9c) popup_tb_float_extension_window

0x7203,	// (0x000621a3) aid_size_cell_tb_float_ext

0x8080,	// (0x00063020) bg_popup_sub_window_cp28

0xea91,	// (0x00069a31) grid_tb_float_ext_pane

0xea9b,	// (0x00069a3b) cell_tb_float_ext_pane_ParamLimits

0xea9b,	// (0x00069a3b) cell_tb_float_ext_pane

0xeab5,	// (0x00069a55) cell_tb_float_ext_pane_g1

0xeabe,	// (0x00069a5e) grid_highlight_pane_cp12

0xb353,	// (0x000662f3) cell_last_hwr_side_pane_ParamLimits

0xb353,	// (0x000662f3) cell_last_hwr_side_pane

0x4db1,	// (0x0005fd51) cell_last_hwr_side_pane_g1

0x7245,	// (0x000621e5) cell_last_hwr_side_pane_g2

0x0001,

0xfe12,	// (0x0006adb2) cell_last_hwr_side_pane_g

0xb89e,	// (0x0006683e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb89e,	// (0x0006683e) vkb2_area_bottom_space_btn_pane

0x1103,	// (0x0005c0a3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6d04,	// (0x00061ca4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1ade,	// (0x0005ca7e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1afd,	// (0x0005ca9d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1afd,	// (0x0005ca9d) vkb2_area_bottom_space_btn_pane_g1

0x1b37,	// (0x0005cad7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1b37,	// (0x0005cad7) vkb2_area_bottom_space_btn_pane_g2

0x1b6d,	// (0x0005cb0d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1b6d,	// (0x0005cb0d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe17,	// (0x0006adb7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe17,	// (0x0006adb7) vkb2_area_bottom_space_btn_pane_g

0x0f61,	// (0x0005bf01) cel_fep_hwr_func_pane_ParamLimits

0x0f61,	// (0x0005bf01) cel_fep_hwr_func_pane

0xb328,	// (0x000662c8) cell_hwr_side_button_pane_ParamLimits

0xb328,	// (0x000662c8) cell_hwr_side_button_pane

0xd83f,	// (0x000687df) aid_area_touch_clock_ParamLimits

0x821a,	// (0x000631ba) bg_uniindi_top_pane_ParamLimits

0xd851,	// (0x000687f1) uniindi_top_pane_g1_ParamLimits

0xd867,	// (0x00068807) uniindi_top_pane_g2_ParamLimits

0xd873,	// (0x00068813) uniindi_top_pane_g3_ParamLimits

0x6726,	// (0x000616c6) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x0006acca) uniindi_top_pane_g_ParamLimits

0xd884,	// (0x00068824) uniindi_top_pane_t1_ParamLimits

0x821a,	// (0x000631ba) bg_vkb2_func_pane_cp01_ParamLimits

0x821a,	// (0x000631ba) bg_vkb2_func_pane_cp01

0x724e,	// (0x000621ee) cel_fep_hwr_func_pane_g1_ParamLimits

0x724e,	// (0x000621ee) cel_fep_hwr_func_pane_g1

0x821a,	// (0x000631ba) bg_vkb2_func_pane_cp02_ParamLimits

0x821a,	// (0x000631ba) bg_vkb2_func_pane_cp02

0x724e,	// (0x000621ee) cell_hwr_side_button_pane_g1_ParamLimits

0x724e,	// (0x000621ee) cell_hwr_side_button_pane_g1

0x247b,	// (0x0005d41b) status_pane_g4_ParamLimits

0x247b,	// (0x0005d41b) status_pane_g4

0x2495,	// (0x0005d435) status_pane_t1

0x4aec,	// (0x0005fa8c) form2_midp_gauge_slider_cont_pane

0x4af4,	// (0x0005fa94) form2_midp_gauge_slider_pane_t1_ParamLimits

0xccba,	// (0x00067c5a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcccc,	// (0x00067c6c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0006aa91) form2_midp_gauge_slider_pane_t_ParamLimits

0x4b2a,	// (0x0005faca) form2_midp_slider_pane_ParamLimits

0x14b7,	// (0x0005c457) aid_size_cell_func_vkb2_ParamLimits

0x14b7,	// (0x0005c457) aid_size_cell_func_vkb2

0x71ef,	// (0x0006218f) slider_pane_g4_ParamLimits

0x71ef,	// (0x0006218f) slider_pane_g4

0xb8ff,	// (0x0006689f) form2_midp_gauge_slider_pane_t2_cp01

0xb90d,	// (0x000668ad) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb90d,	// (0x000668ad) form2_midp_gauge_slider_pane_t3_cp01

0x1be2,	// (0x0005cb82) form2_midp_slider_pane_cp01

0x8080,	// (0x00063020) navi_smil_pane

0x7287,	// (0x00062227) navi_smil_pane_g1

0x728f,	// (0x0006222f) navi_smil_pane_t1

0x725c,	// (0x000621fc) form2_midp_slider_pane_g1

0x7265,	// (0x00062205) form2_midp_slider_pane_g2

0x726d,	// (0x0006220d) form2_midp_slider_pane_g3

0x725c,	// (0x000621fc) form2_midp_slider_pane_g4

0xeac7,	// (0x00069a67) form2_midp_slider_pane_g5

0x0004,

0xfe20,	// (0x0006adc0) form2_midp_slider_pane_g

0x1ba7,	// (0x0005cb47) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1ba7,	// (0x0005cb47) vkb2_area_bottom_space_btn_pane_g4

0xbe5f,	// (0x00066dff) lc0_navi_pane_ParamLimits

0xbe5f,	// (0x00066dff) lc0_navi_pane

0xbec9,	// (0x00066e69) lc0_stat_indi_pane_ParamLimits

0xbec9,	// (0x00066e69) lc0_stat_indi_pane

0xbede,	// (0x00066e7e) ls0_title_pane_ParamLimits

0xbede,	// (0x00066e7e) ls0_title_pane

0x84a2,	// (0x00063442) bg_popup_sub_pane_cp14_ParamLimits

0xd826,	// (0x000687c6) list_uniindi_pane_ParamLimits

0xd832,	// (0x000687d2) uniindi_top_pane_ParamLimits

0x676f,	// (0x0006170f) list_single_uniindi_pane_g1_ParamLimits

0x6782,	// (0x00061722) list_single_uniindi_pane_t1_ParamLimits

0xb92a,	// (0x000668ca) lc0_stat_clock_pane_ParamLimits

0xb92a,	// (0x000668ca) lc0_stat_clock_pane

0xead2,	// (0x00069a72) lc0_stat_indi_pane_g1_ParamLimits

0xead2,	// (0x00069a72) lc0_stat_indi_pane_g1

0xeadf,	// (0x00069a7f) lc0_stat_indi_pane_g2_ParamLimits

0xeadf,	// (0x00069a7f) lc0_stat_indi_pane_g2

0x0001,

0xfe2b,	// (0x0006adcb) lc0_stat_indi_pane_g_ParamLimits

0xfe2b,	// (0x0006adcb) lc0_stat_indi_pane_g

0xb93a,	// (0x000668da) lc0_uni_indicator_pane_ParamLimits

0xb93a,	// (0x000668da) lc0_uni_indicator_pane

0xeaec,	// (0x00069a8c) ls0_title_pane_g1_ParamLimits

0xeaec,	// (0x00069a8c) ls0_title_pane_g1

0xeb00,	// (0x00069aa0) ls0_title_pane_t1_ParamLimits

0xeb00,	// (0x00069aa0) ls0_title_pane_t1

0xb94a,	// (0x000668ea) lc0_uni_indicator_pane_g1_ParamLimits

0xb94a,	// (0x000668ea) lc0_uni_indicator_pane_g1

0x7301,	// (0x000622a1) lc0_stat_clock_pane_t1

0xf0eb,	// (0x0006a08b) main_ai5_pane

0x730f,	// (0x000622af) ai5_sk_pane_ParamLimits

0x730f,	// (0x000622af) ai5_sk_pane

0xeb2e,	// (0x00069ace) cell_ai5_widget_pane_ParamLimits

0xeb2e,	// (0x00069ace) cell_ai5_widget_pane

0x73d7,	// (0x00062377) aid_size_cell_widget_grid

0x73e5,	// (0x00062385) bg_ai5_widget_pane_ParamLimits

0x73e5,	// (0x00062385) bg_ai5_widget_pane

0x745d,	// (0x000623fd) cell_ai5_widget_pane_g2

0x7471,	// (0x00062411) cell_ai5_widget_pane_g3

0x748b,	// (0x0006242b) cell_ai5_widget_pane_g4

0x749b,	// (0x0006243b) cell_ai5_widget_pane_g5

0x74ab,	// (0x0006244b) cell_ai5_widget_pane_g6

0x74b7,	// (0x00062457) cell_ai5_widget_pane_g7

0x74ff,	// (0x0006249f) cell_ai5_widget_pane_t1_ParamLimits

0x74ff,	// (0x0006249f) cell_ai5_widget_pane_t1

0x751c,	// (0x000624bc) cell_ai5_widget_pane_t2_ParamLimits

0x751c,	// (0x000624bc) cell_ai5_widget_pane_t2

0x7534,	// (0x000624d4) cell_ai5_widget_pane_t3_ParamLimits

0x7534,	// (0x000624d4) cell_ai5_widget_pane_t3

0x754c,	// (0x000624ec) cell_ai5_widget_pane_t4_ParamLimits

0x754c,	// (0x000624ec) cell_ai5_widget_pane_t4

0x7572,	// (0x00062512) cell_ai5_widget_pane_t5_ParamLimits

0x7572,	// (0x00062512) cell_ai5_widget_pane_t5

0x7592,	// (0x00062532) cell_ai5_widget_pane_t6_ParamLimits

0x7592,	// (0x00062532) cell_ai5_widget_pane_t6

0x75a4,	// (0x00062544) cell_ai5_widget_pane_t7_ParamLimits

0x75a4,	// (0x00062544) cell_ai5_widget_pane_t7

0x75bd,	// (0x0006255d) cell_ai5_widget_pane_t8_ParamLimits

0x75bd,	// (0x0006255d) cell_ai5_widget_pane_t8

0x0009,

0xfe45,	// (0x0006ade5) cell_ai5_widget_pane_t_ParamLimits

0xfe45,	// (0x0006ade5) cell_ai5_widget_pane_t

0x761c,	// (0x000625bc) grid_ai5_widget_pane

0x84a2,	// (0x00063442) highlight_cell_ai5_widget_pane_ParamLimits

0x84a2,	// (0x00063442) highlight_cell_ai5_widget_pane

0xeb94,	// (0x00069b34) ai5_sk_left_pane

0xeb9e,	// (0x00069b3e) ai5_sk_middle_pane

0xeba8,	// (0x00069b48) ai5_sk_right_pane

0x7648,	// (0x000625e8) bg_ai5_widget_pane_g1_ParamLimits

0x7648,	// (0x000625e8) bg_ai5_widget_pane_g1

0x7654,	// (0x000625f4) bg_ai5_widget_pane_g2_ParamLimits

0x7654,	// (0x000625f4) bg_ai5_widget_pane_g2

0x7660,	// (0x00062600) bg_ai5_widget_pane_g3_ParamLimits

0x7660,	// (0x00062600) bg_ai5_widget_pane_g3

0x766c,	// (0x0006260c) bg_ai5_widget_pane_g4_ParamLimits

0x766c,	// (0x0006260c) bg_ai5_widget_pane_g4

0x7678,	// (0x00062618) bg_ai5_widget_pane_g5_ParamLimits

0x7678,	// (0x00062618) bg_ai5_widget_pane_g5

0x7684,	// (0x00062624) bg_ai5_widget_pane_g6_ParamLimits

0x7684,	// (0x00062624) bg_ai5_widget_pane_g6

0x7690,	// (0x00062630) bg_ai5_widget_pane_g7_ParamLimits

0x7690,	// (0x00062630) bg_ai5_widget_pane_g7

0x769c,	// (0x0006263c) bg_ai5_widget_pane_g8_ParamLimits

0x769c,	// (0x0006263c) bg_ai5_widget_pane_g8

0x76a8,	// (0x00062648) bg_ai5_widget_pane_g9_ParamLimits

0x76a8,	// (0x00062648) bg_ai5_widget_pane_g9

0x0008,

0xfe5a,	// (0x0006adfa) bg_ai5_widget_pane_g_ParamLimits

0xfe5a,	// (0x0006adfa) bg_ai5_widget_pane_g

0x76da,	// (0x0006267a) cell_shortcut_ai5_widget_pane_ParamLimits

0x76da,	// (0x0006267a) cell_shortcut_ai5_widget_pane

0xe0de,	// (0x0006907e) bg_cell_shortcut_ai5_widget_pane

0x76eb,	// (0x0006268b) cell_grid_ai5_widget_pane_g1

0xe0de,	// (0x0006907e) highlight_cell_shortcut_ai5_widget_pane

0x25ff,	// (0x0005d59f) ai5_sk_left_pane_g1

0x76f4,	// (0x00062694) ai5_sk_left_pane_g2

0x76fc,	// (0x0006269c) ai5_sk_left_pane_g3

0x7704,	// (0x000626a4) ai5_sk_left_pane_g4

0x0003,

0xfe6d,	// (0x0006ae0d) ai5_sk_left_pane_g

0x770c,	// (0x000626ac) ai5_sk_left_pane_t1

0x2607,	// (0x0005d5a7) ai5_sk_right_pane_g1

0x771a,	// (0x000626ba) ai5_sk_right_pane_g2

0x7722,	// (0x000626c2) ai5_sk_right_pane_g3

0x772a,	// (0x000626ca) ai5_sk_right_pane_g4

0x0003,

0xfe76,	// (0x0006ae16) ai5_sk_right_pane_g

0x7732,	// (0x000626d2) ai5_sk_right_pane_t1

0x2607,	// (0x0005d5a7) ai5_sk_middle_pane_g1

0x25ff,	// (0x0005d59f) ai5_sk_middle_pane_g2

0x261f,	// (0x0005d5bf) ai5_sk_middle_pane_g3

0x7722,	// (0x000626c2) ai5_sk_middle_pane_g4

0x76fc,	// (0x0006269c) ai5_sk_middle_pane_g5

0x7740,	// (0x000626e0) ai5_sk_middle_pane_g6

0xebb2,	// (0x00069b52) ai5_sk_middle_pane_g7

0x0006,

0xfe7f,	// (0x0006ae1f) ai5_sk_middle_pane_g

0xb020,	// (0x00065fc0) aid_touch_area_size_lc0_ParamLimits

0xb020,	// (0x00065fc0) aid_touch_area_size_lc0

0x1132,	// (0x0005c0d2) cell_hwr_candidate_pane_t1_ParamLimits

0x214c,	// (0x0005d0ec) aid_touch_navi_pane

0xbfd7,	// (0x00066f77) status_dt_navi_pane_ParamLimits

0xbfd7,	// (0x00066f77) status_dt_navi_pane

0xbfef,	// (0x00066f8f) status_dt_sta_pane_ParamLimits

0xbfef,	// (0x00066f8f) status_dt_sta_pane

0xebba,	// (0x00069b5a) dt_sta_controll_pane

0xebc7,	// (0x00069b67) dt_sta_indi_pane

0xebd4,	// (0x00069b74) dt_sta_title_pane

0x821a,	// (0x000631ba) bg_dt_sta_indi_pane_ParamLimits

0x821a,	// (0x000631ba) bg_dt_sta_indi_pane

0xebe6,	// (0x00069b86) dt_sta_battery_pane

0xebee,	// (0x00069b8e) dt_sta_indi_pane_g1

0x7792,	// (0x00062732) dt_sta_indi_pane_g2

0x779b,	// (0x0006273b) dt_sta_indi_pane_g3

0x0002,

0xfe8e,	// (0x0006ae2e) dt_sta_indi_pane_g

0x77a4,	// (0x00062744) dt_sta_signal_pane

0x84a2,	// (0x00063442) bg_dt_sta_title_pane_ParamLimits

0x84a2,	// (0x00063442) bg_dt_sta_title_pane

0x3451,	// (0x0005e3f1) dt_sta_title_pane_g1

0xebf7,	// (0x00069b97) dt_sta_title_pane_t1_ParamLimits

0xebf7,	// (0x00069b97) dt_sta_title_pane_t1

0x8080,	// (0x00063020) bg_dt_sta_control_pane

0xec0c,	// (0x00069bac) dt_sta_controll_pane_g1

0xec15,	// (0x00069bb5) bg_dt_sta_title_pane_g1

0xec1e,	// (0x00069bbe) bg_dt_sta_title_pane_g2

0xec27,	// (0x00069bc7) bg_dt_sta_title_pane_g3

0x0002,

0xfe95,	// (0x0006ae35) bg_dt_sta_title_pane_g

0x4db1,	// (0x0005fd51) bg_dt_sta_indi_pane_g1

0x77e6,	// (0x00062786) dt_sta_signal_pane_g1

0x77ee,	// (0x0006278e) dt_sta_signal_pane_g2

0x0001,

0xfe9c,	// (0x0006ae3c) dt_sta_signal_pane_g

0x77f6,	// (0x00062796) dt_sta_battery_pane_g1

0x77ff,	// (0x0006279f) dt_sta_battery_pane_t1

0x4db1,	// (0x0005fd51) bg_dt_sta_control_pane_g1

0xbcc6,	// (0x00066c66) fep_china_uni_eep_pane

0xbcce,	// (0x00066c6e) fep_china_uni_entry_pane_ParamLimits

0xbcde,	// (0x00066c7e) popup_fep_china_uni_window_g1_ParamLimits

0xbcee,	// (0x00066c8e) popup_fep_china_uni_window_g2_ParamLimits

0xbcee,	// (0x00066c8e) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0006a6b3) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0006a6b3) popup_fep_china_uni_window_g

0x780e,	// (0x000627ae) fep_china_uni_eep_pane_g1

0x7816,	// (0x000627b6) fep_china_uni_eep_pane_t1

0x727e,	// (0x0006221e) aid_touch_area_size_smil_player

0x22a2,	// (0x0005d242) lc0_clock_pane

0x2489,	// (0x0005d429) status_pane_g5_ParamLimits

0x2489,	// (0x0005d429) status_pane_g5

0xaa32,	// (0x000659d2) popup_keymap_window

0x2447,	// (0x0005d3e7) status_icon_pane

0x7471,	// (0x00062411) cell_ai5_widget_pane_g3_ParamLimits

0x748b,	// (0x0006242b) cell_ai5_widget_pane_g4_ParamLimits

0x749b,	// (0x0006243b) cell_ai5_widget_pane_g5_ParamLimits

0x74c3,	// (0x00062463) cell_ai5_widget_pane_g8_ParamLimits

0x74c3,	// (0x00062463) cell_ai5_widget_pane_g8

0x74d7,	// (0x00062477) cell_ai5_widget_pane_g9_ParamLimits

0x74d7,	// (0x00062477) cell_ai5_widget_pane_g9

0x74eb,	// (0x0006248b) cell_ai5_widget_pane_g10_ParamLimits

0x74eb,	// (0x0006248b) cell_ai5_widget_pane_g10

0x7825,	// (0x000627c5) status_icon_pane_g1

0x8080,	// (0x00063020) bg_popup_sub_pane_cp13

0x782d,	// (0x000627cd) popup_keymap_window_t1

0xa6f2,	// (0x00065692) control_pane_g6_ParamLimits

0xa6f2,	// (0x00065692) control_pane_g6

0xa6ff,	// (0x0006569f) control_pane_g7_ParamLimits

0xa6ff,	// (0x0006569f) control_pane_g7

0xa70c,	// (0x000656ac) control_pane_g8_ParamLimits

0xa70c,	// (0x000656ac) control_pane_g8

0xebba,	// (0x00069b5a) dt_sta_controll_pane_ParamLimits

0xebc7,	// (0x00069b67) dt_sta_indi_pane_ParamLimits

0xebd4,	// (0x00069b74) dt_sta_title_pane_ParamLimits

0x83ed,	// (0x0006338d) aid_size_touch_scroll_bar_cale

0x9321,	// (0x000642c1) popup_discreet_window_ParamLimits

0x9321,	// (0x000642c1) popup_discreet_window

0x9373,	// (0x00064313) popup_sk_window

0x2c95,	// (0x0005dc35) bg_popup_sub_pane_cp28_ParamLimits

0x2c95,	// (0x0005dc35) bg_popup_sub_pane_cp28

0x783b,	// (0x000627db) popup_discreet_window_g1_ParamLimits

0x783b,	// (0x000627db) popup_discreet_window_g1

0xec30,	// (0x00069bd0) popup_discreet_window_t1_ParamLimits

0xec30,	// (0x00069bd0) popup_discreet_window_t1

0x7879,	// (0x00062819) popup_discreet_window_t2_ParamLimits

0x7879,	// (0x00062819) popup_discreet_window_t2

0x0002,

0xfea1,	// (0x0006ae41) popup_discreet_window_t_ParamLimits

0xfea1,	// (0x0006ae41) popup_discreet_window_t

0x1c19,	// (0x0005cbb9) popup_sk_window_g1

0x1c23,	// (0x0005cbc3) popup_sk_window_g2

0x0001,

0xfea8,	// (0x0006ae48) popup_sk_window_g

0xb975,	// (0x00066915) popup_sk_window_t1

0xb983,	// (0x00066923) popup_sk_window_t1_copy1

0x745d,	// (0x000623fd) cell_ai5_widget_pane_g2_ParamLimits

0x75cf,	// (0x0006256f) cell_ai5_widget_pane_t9_ParamLimits

0x75cf,	// (0x0006256f) cell_ai5_widget_pane_t9

0x8080,	// (0x00063020) main_fep_fshwr2_pane

0xb991,	// (0x00066931) aid_fshwr2_btn_pane

0xb9a3,	// (0x00066943) aid_fshwr2_syb_pane

0xb9b5,	// (0x00066955) aid_fshwr2_txt_pane

0xb9c4,	// (0x00066964) fshwr2_func_candi_pane

0xb9e3,	// (0x00066983) fshwr2_hwr_syb_pane

0xb9fe,	// (0x0006699e) fshwr2_icf_pane

0xf0eb,	// (0x0006a08b) fshwr2_icf_bg_pane

0x1cc8,	// (0x0005cc68) fshwr2_icf_pane_t1_ParamLimits

0x1cc8,	// (0x0005cc68) fshwr2_icf_pane_t1

0xbc43,	// (0x00066be3) fshwr2_func_candi_pane_g1

0xec4e,	// (0x00069bee) fshwr2_func_candi_row_pane_ParamLimits

0xec4e,	// (0x00069bee) fshwr2_func_candi_row_pane

0xba2a,	// (0x000669ca) cell_fshwr2_syb_pane_ParamLimits

0xba2a,	// (0x000669ca) cell_fshwr2_syb_pane

0x1103,	// (0x0005c0a3) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1103,	// (0x0005c0a3) fshwr2_hwr_syb_pane_g1

0xf0eb,	// (0x0006a08b) bg_popup_call_pane_cp01

0xba40,	// (0x000669e0) fshwr2_func_candi_cell_pane_ParamLimits

0xba40,	// (0x000669e0) fshwr2_func_candi_cell_pane

0x2a7e,	// (0x0005da1e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2a7e,	// (0x0005da1e) fshwr2_func_candi_cell_bg_pane

0xba8b,	// (0x00066a2b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xba8b,	// (0x00066a2b) fshwr2_func_candi_cell_pane_g1

0xbac2,	// (0x00066a62) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbac2,	// (0x00066a62) fshwr2_func_candi_cell_pane_t1

0xf0eb,	// (0x0006a08b) bg_button_pane_cp08

0x78db,	// (0x0006287b) cell_fshwr2_syb_bg_pane

0xbadd,	// (0x00066a7d) cell_fshwr2_syb_bg_pane_g1

0xbae5,	// (0x00066a85) cell_fshwr2_syb_bg_pane_t1

0x84a2,	// (0x00063442) main_tmo_pane

0xc6b2,	// (0x00067652) uni_indicator_pane_g1_ParamLimits

0xc6c8,	// (0x00067668) uni_indicator_pane_g2_ParamLimits

0xc6de,	// (0x0006767e) uni_indicator_pane_g3_ParamLimits

0x37be,	// (0x0005e75e) uni_indicator_pane_g4_ParamLimits

0x37be,	// (0x0005e75e) uni_indicator_pane_g4

0x37d2,	// (0x0005e772) uni_indicator_pane_g5_ParamLimits

0x37d2,	// (0x0005e772) uni_indicator_pane_g5

0x37d2,	// (0x0005e772) uni_indicator_pane_g6_ParamLimits

0x37d2,	// (0x0005e772) uni_indicator_pane_g6

0xf90b,	// (0x0006a8ab) uni_indicator_pane_g_ParamLimits

0xd546,	// (0x000684e6) popup_tmo_note_window_ParamLimits

0xd546,	// (0x000684e6) popup_tmo_note_window

0x1499,	// (0x0005c439) fshwr2_bg_pane

0xbab3,	// (0x00066a53) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbab3,	// (0x00066a53) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfead,	// (0x0006ae4d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfead,	// (0x0006ae4d) fshwr2_func_candi_cell_pane_g

0x10eb,	// (0x0005c08b) bg_popup_window_pane_cp01

0x1d94,	// (0x0005cd34) bg_popup_window_pane_g1_cp01

0x78e3,	// (0x00062883) bg_popup_window_pane_cp22_ParamLimits

0x78e3,	// (0x00062883) bg_popup_window_pane_cp22

0xec71,	// (0x00069c11) listscroll_tmo_link_pane_ParamLimits

0xec71,	// (0x00069c11) listscroll_tmo_link_pane

0x7931,	// (0x000628d1) popup_tmo_note_window_g1_ParamLimits

0x7931,	// (0x000628d1) popup_tmo_note_window_g1

0xecb1,	// (0x00069c51) tmo_note_info_pane_ParamLimits

0xecb1,	// (0x00069c51) tmo_note_info_pane

0xeccb,	// (0x00069c6b) list_tmo_note_info_pane_g1_ParamLimits

0xeccb,	// (0x00069c6b) list_tmo_note_info_pane_g1

0x796f,	// (0x0006290f) list_tmo_note_info_pane_g2_ParamLimits

0x796f,	// (0x0006290f) list_tmo_note_info_pane_g2

0x0001,

0xfeb2,	// (0x0006ae52) list_tmo_note_info_pane_g_ParamLimits

0xfeb2,	// (0x0006ae52) list_tmo_note_info_pane_g

0x798b,	// (0x0006292b) list_tmo_note_info_text_pane_ParamLimits

0x798b,	// (0x0006292b) list_tmo_note_info_text_pane

0x7a0c,	// (0x000629ac) list_tmo_link_pane

0x7a19,	// (0x000629b9) scroll_pane_cp20

0x7a26,	// (0x000629c6) list_single_tmo_link_pane_ParamLimits

0x7a26,	// (0x000629c6) list_single_tmo_link_pane

0x7a36,	// (0x000629d6) list_single_tmo_link_pane_t1

0x7a44,	// (0x000629e4) list_tmo_note_info_text_pane_t1_ParamLimits

0x7a44,	// (0x000629e4) list_tmo_note_info_text_pane_t1

0xa046,	// (0x00064fe6) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa046,	// (0x00064fe6) aid_size_touch_scroll_bar_cp01

0x9f59,	// (0x00064ef9) aid_size_touch_slider_marker

0x9363,	// (0x00064303) popup_settings_window_ParamLimits

0x9363,	// (0x00064303) popup_settings_window

0xe0ee,	// (0x0006908e) popup_candi_list_indi_window

0x214c,	// (0x0005d0ec) aid_touch_navi_pane_ParamLimits

0x13f4,	// (0x0005c394) rs_clock_indi_pane

0x13fd,	// (0x0005c39d) sctrl_sk_bottom_pane_ParamLimits

0x140e,	// (0x0005c3ae) sctrl_sk_top_pane_ParamLimits

0xb5db,	// (0x0006657b) popup_fep_tooltip_window

0x73d7,	// (0x00062377) aid_size_cell_widget_grid_ParamLimits

0x7448,	// (0x000623e8) cell_ai5_widget_pane_g1_ParamLimits

0x7448,	// (0x000623e8) cell_ai5_widget_pane_g1

0x74ab,	// (0x0006244b) cell_ai5_widget_pane_g6_ParamLimits

0x74b7,	// (0x00062457) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe30,	// (0x0006add0) cell_ai5_widget_pane_g_ParamLimits

0xfe30,	// (0x0006add0) cell_ai5_widget_pane_g

0x75fe,	// (0x0006259e) cell_ai5_widget_pane_t10_ParamLimits

0x75fe,	// (0x0006259e) cell_ai5_widget_pane_t10

0x761c,	// (0x000625bc) grid_ai5_widget_pane_ParamLimits

0x76b4,	// (0x00062654) cell_contacts_ai5_widget_pane_ParamLimits

0x76b4,	// (0x00062654) cell_contacts_ai5_widget_pane

0x788e,	// (0x0006282e) popup_discreet_window_t3_ParamLimits

0x788e,	// (0x0006282e) popup_discreet_window_t3

0xba16,	// (0x000669b6) popup_fshwr2_char_preview_window_ParamLimits

0xba16,	// (0x000669b6) popup_fshwr2_char_preview_window

0xece2,	// (0x00069c82) tmo_note_info_pane_t1

0xecf7,	// (0x00069c97) tmo_note_info_pane_t2

0xed0e,	// (0x00069cae) tmo_note_info_pane_t3

0x79e8,	// (0x00062988) tmo_note_info_pane_t4

0x79fa,	// (0x0006299a) tmo_note_info_pane_t5

0x0004,

0xfeb7,	// (0x0006ae57) tmo_note_info_pane_t

0x7a0c,	// (0x000629ac) list_tmo_link_pane_ParamLimits

0x7a19,	// (0x000629b9) scroll_pane_cp20_ParamLimits

0xf0eb,	// (0x0006a08b) bg_popup_fep_char_preview_window_cp01

0xed23,	// (0x00069cc3) popup_fshwr2_char_preview_window_t1

0x7a6b,	// (0x00062a0b) popup_candi_list_indi_window_g1

0x7a74,	// (0x00062a14) bg_cell_contacts_ai5_widget_pane

0x7a80,	// (0x00062a20) cell_contacts_ai5_widget_pane_g1

0x5476,	// (0x00060416) cell_contacts_ai5_widget_pane_g2

0x7a95,	// (0x00062a35) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec2,	// (0x0006ae62) cell_contacts_ai5_widget_pane_g

0x7aa1,	// (0x00062a41) cell_contacts_ai5_widget_pane_t1

0x84a2,	// (0x00063442) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7b18,	// (0x00062ab8) settings_container_pane

0xe0de,	// (0x0006907e) listscroll_set_pane_copy1

0x44b3,	// (0x0005f453) scroll_pane_cp121_copy1

0x2a42,	// (0x0005d9e2) set_content_pane_copy1

0xed96,	// (0x00069d36) aid_height_set_list_copy1_ParamLimits

0xed96,	// (0x00069d36) aid_height_set_list_copy1

0x39ca,	// (0x0005e96a) aid_size_parent_copy1_ParamLimits

0x39ca,	// (0x0005e96a) aid_size_parent_copy1

0xeda2,	// (0x00069d42) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeda2,	// (0x00069d42) button_value_adjust_pane_cp6_copy1

0x20d0,	// (0x0005d070) list_highlight_pane_cp2_copy1_ParamLimits

0x20d0,	// (0x0005d070) list_highlight_pane_cp2_copy1

0xedb6,	// (0x00069d56) list_set_pane_copy1_ParamLimits

0xedb6,	// (0x00069d56) list_set_pane_copy1

0xed31,	// (0x00069cd1) main_pane_set_t1_copy1_ParamLimits

0xed31,	// (0x00069cd1) main_pane_set_t1_copy1

0xed6b,	// (0x00069d0b) main_pane_set_t2_copy1_ParamLimits

0xed6b,	// (0x00069d0b) main_pane_set_t2_copy1

0xee63,	// (0x00069e03) main_pane_set_t3_copy1

0xee71,	// (0x00069e11) main_pane_set_t4_copy1

0xed8a,	// (0x00069d2a) set_content_pane_g1_copy1_ParamLimits

0xed8a,	// (0x00069d2a) set_content_pane_g1_copy1

0xee7f,	// (0x00069e1f) setting_code_pane_copy1

0x7c15,	// (0x00062bb5) setting_slider_graphic_pane_copy1

0x7c15,	// (0x00062bb5) setting_slider_pane_copy1

0x7c15,	// (0x00062bb5) setting_text_pane_copy1

0x7c15,	// (0x00062bb5) setting_volume_pane_copy1

0xee7f,	// (0x00069e1f) settings_code_pane_cp2_copy1

0xee87,	// (0x00069e27) settings_code_pane_cp_copy1_ParamLimits

0xee87,	// (0x00069e27) settings_code_pane_cp_copy1

0xbaf4,	// (0x00066a94) volume_set_pane_copy1

0xee9b,	// (0x00069e3b) volume_set_pane_g10_copy1

0xeea3,	// (0x00069e43) volume_set_pane_g1_copy1

0xeeab,	// (0x00069e4b) volume_set_pane_g2_copy1

0xeeb3,	// (0x00069e53) volume_set_pane_g3_copy1

0xeebb,	// (0x00069e5b) volume_set_pane_g4_copy1

0xeec3,	// (0x00069e63) volume_set_pane_g5_copy1

0xeecb,	// (0x00069e6b) volume_set_pane_g6_copy1

0xeed3,	// (0x00069e73) volume_set_pane_g7_copy1

0xeedb,	// (0x00069e7b) volume_set_pane_g8_copy1

0xeee3,	// (0x00069e83) volume_set_pane_g9_copy1

0x80e2,	// (0x00063082) bg_set_opt_pane_cp_copy1_ParamLimits

0x80e2,	// (0x00063082) bg_set_opt_pane_cp_copy1

0xbafc,	// (0x00066a9c) setting_slider_pane_t1_copy1_ParamLimits

0xbafc,	// (0x00066a9c) setting_slider_pane_t1_copy1

0xbb1a,	// (0x00066aba) setting_slider_pane_t2_copy1_ParamLimits

0xbb1a,	// (0x00066aba) setting_slider_pane_t2_copy1

0xbb34,	// (0x00066ad4) setting_slider_pane_t3_copy1_ParamLimits

0xbb34,	// (0x00066ad4) setting_slider_pane_t3_copy1

0xbb4c,	// (0x00066aec) slider_set_pane_copy1_ParamLimits

0xbb4c,	// (0x00066aec) slider_set_pane_copy1

0x84fa,	// (0x0006349a) set_opt_bg_pane_g1_copy2

0x8502,	// (0x000634a2) set_opt_bg_pane_g2_copy2

0x7c81,	// (0x00062c21) set_opt_bg_pane_g3_copy2

0x8512,	// (0x000634b2) set_opt_bg_pane_g4_copy2

0x851a,	// (0x000634ba) set_opt_bg_pane_g5_copy2

0x8522,	// (0x000634c2) set_opt_bg_pane_g6_copy2

0xeeeb,	// (0x00069e8b) set_opt_bg_pane_g7_copy2

0x7c93,	// (0x00062c33) set_opt_bg_pane_g8_copy2

0x7c9d,	// (0x00062c3d) set_opt_bg_pane_g9_copy2

0xbb62,	// (0x00066b02) aid_size_touch_slider_mark_copy1_ParamLimits

0xbb62,	// (0x00066b02) aid_size_touch_slider_mark_copy1

0xeef3,	// (0x00069e93) slider_set_pane_g1_copy1

0x1e1f,	// (0x0005cdbf) slider_set_pane_g2_copy1

0xb1fd,	// (0x0006619d) slider_set_pane_g3_copy1_ParamLimits

0xb1fd,	// (0x0006619d) slider_set_pane_g3_copy1

0xb211,	// (0x000661b1) slider_set_pane_g4_copy1_ParamLimits

0xb211,	// (0x000661b1) slider_set_pane_g4_copy1

0xb229,	// (0x000661c9) slider_set_pane_g5_copy1_ParamLimits

0xb229,	// (0x000661c9) slider_set_pane_g5_copy1

0xb1fd,	// (0x0006619d) slider_set_pane_g6_copy1_ParamLimits

0xb1fd,	// (0x0006619d) slider_set_pane_g6_copy1

0xbb76,	// (0x00066b16) slider_set_pane_g7_copy1_ParamLimits

0xbb76,	// (0x00066b16) slider_set_pane_g7_copy1

0x8094,	// (0x00063034) bg_set_opt_pane_cp2_copy1

0xeefc,	// (0x00069e9c) setting_slider_graphic_pane_g1_copy1

0xef05,	// (0x00069ea5) setting_slider_graphic_pane_t1_copy1

0xef15,	// (0x00069eb5) setting_slider_graphic_pane_t2_copy1

0xef25,	// (0x00069ec5) slider_set_pane_cp_copy1

0x7ce9,	// (0x00062c89) input_focus_pane_cp1_copy1

0x7cf2,	// (0x00062c92) list_set_text_pane_copy1

0x7cfa,	// (0x00062c9a) setting_text_pane_g1_copy1

0xef35,	// (0x00069ed5) set_text_pane_t1_copy1

0x7ce9,	// (0x00062c89) input_focus_pane_cp2_copy1

0x7cfa,	// (0x00062c9a) setting_code_pane_g1_copy1

0x7d03,	// (0x00062ca3) setting_code_pane_t1_copy1

0x7d11,	// (0x00062cb1) list_set_graphic_pane_copy1

0x8094,	// (0x00063034) bg_set_opt_pane_cp4_copy1

0xde64,	// (0x00068e04) list_set_graphic_pane_g1_copy1_ParamLimits

0xde64,	// (0x00068e04) list_set_graphic_pane_g1_copy1

0x7d25,	// (0x00062cc5) list_set_graphic_pane_g2_copy1

0xde7c,	// (0x00068e1c) list_set_graphic_pane_t1_copy1_ParamLimits

0xde7c,	// (0x00068e1c) list_set_graphic_pane_t1_copy1

0x4db1,	// (0x0005fd51) rs_clock_indi_pane_g1

0x7d2d,	// (0x00062ccd) rs_clock_indi_pane_t1

0x7d3b,	// (0x00062cdb) rs_indi_pane

0x7d43,	// (0x00062ce3) rs_indi_pane_g1

0x7d4c,	// (0x00062cec) rs_indi_pane_g2

0x7a6b,	// (0x00062a0b) rs_indi_pane_g3

0x0002,

0xfec9,	// (0x0006ae69) rs_indi_pane_g

0xe0de,	// (0x0006907e) bg_popup_preview_window_pane_cp03

0x7d55,	// (0x00062cf5) popup_fep_tooltip_window_t1

0xd173,	// (0x00068113) popup_note2_window_g2_ParamLimits

0xd173,	// (0x00068113) popup_note2_window_g2

0x0001,

0xfc69,	// (0x0006ac09) popup_note2_window_g_ParamLimits

0xfc69,	// (0x0006ac09) popup_note2_window_g

0x5f2d,	// (0x00060ecd) bg_popup_sub_pane_cp11_ParamLimits

0x5f3a,	// (0x00060eda) cell_ai3_links_pane_g1_ParamLimits

0x5f51,	// (0x00060ef1) cell_ai3_links_pane_t1

0xef35,	// (0x00069ed5) set_text_pane_t1_copy1_ParamLimits

0xe01d,	// (0x00068fbd) cell_graphic_popup_pane_cp2_ParamLimits

0xe01d,	// (0x00068fbd) cell_graphic_popup_pane_cp2

0xef4f,	// (0x00069eef) cell_graphic_popup_pane_g1_cp2

0x8370,	// (0x00063310) cell_graphic_popup_pane_g2_cp2

0x7d6b,	// (0x00062d0b) cell_graphic_popup_pane_g3_cp2

0xef57,	// (0x00069ef7) cell_graphic_popup_pane_t2_cp2

0x8381,	// (0x00063321) grid_highlight_pane_cp3_cp2

0x8752,	// (0x000636f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84a2,	// (0x00063442) main_tmo_pane_ParamLimits

0xd53a,	// (0x000684da) popup_tmo_big_image_note_window

0x7437,	// (0x000623d7) cell_ai5_widget_list_pane

0x743f,	// (0x000623df) cell_ai5_widget_lrg_icon_pane

0xece2,	// (0x00069c82) tmo_note_info_pane_t1_ParamLimits

0xecf7,	// (0x00069c97) tmo_note_info_pane_t2_ParamLimits

0xed0e,	// (0x00069cae) tmo_note_info_pane_t3_ParamLimits

0x79e8,	// (0x00062988) tmo_note_info_pane_t4_ParamLimits

0x79fa,	// (0x0006299a) tmo_note_info_pane_t5_ParamLimits

0xfeb7,	// (0x0006ae57) tmo_note_info_pane_t_ParamLimits

0x7b18,	// (0x00062ab8) settings_container_pane_ParamLimits

0xef2d,	// (0x00069ecd) indicator_popup_pane_cp5

0xef2d,	// (0x00069ecd) indicator_popup_pane_cp6

0x7d11,	// (0x00062cb1) list_set_graphic_pane_copy1_ParamLimits

0x8080,	// (0x00063020) bg_popup_window_pane_cp23

0x7d81,	// (0x00062d21) popup_tmo_big_image_note_window_g1

0x7d8a,	// (0x00062d2a) popup_tmo_big_image_note_window_t1

0x7d9a,	// (0x00062d3a) popup_tmo_big_image_note_window_t2

0x7daa,	// (0x00062d4a) popup_tmo_big_image_note_window_t3

0x0002,

0xfed0,	// (0x0006ae70) popup_tmo_big_image_note_window_t

0x4db1,	// (0x0005fd51) cell_ai5_widget_lrg_icon_pane_g1

0x7dba,	// (0x00062d5a) cell_ai5_widget_lrg_icon_pane_t1

0x7dc8,	// (0x00062d68) cell_ai5_widget_list_row_pane_ParamLimits

0x7dc8,	// (0x00062d68) cell_ai5_widget_list_row_pane

0x7ddf,	// (0x00062d7f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7ddf,	// (0x00062d7f) cell_ai5_widget_list_row_pane_g1

0xef65,	// (0x00069f05) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xef65,	// (0x00069f05) cell_ai5_widget_list_row_pane_t1

0x7e17,	// (0x00062db7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7e17,	// (0x00062db7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed7,	// (0x0006ae77) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed7,	// (0x0006ae77) cell_ai5_widget_list_row_pane_t

0xf0eb,	// (0x0006a08b) main_fep_vtchi_ss_pane

0x7e5f,	// (0x00062dff) popup_fep_char_pre_window

0x7e67,	// (0x00062e07) popup_fep_ituss_window

0xefa9,	// (0x00069f49) popup_fep_vkbss_window

0xefb6,	// (0x00069f56) grid_vkbss_keypad_pane_ParamLimits

0xefb6,	// (0x00069f56) grid_vkbss_keypad_pane

0x7ec2,	// (0x00062e62) ituss_keypad_pane

0x1e49,	// (0x0005cde9) aid_vkbss_key_offset_ParamLimits

0x1e49,	// (0x0005cde9) aid_vkbss_key_offset

0xbb8c,	// (0x00066b2c) cell_vkbss_key_pane_ParamLimits

0xbb8c,	// (0x00066b2c) cell_vkbss_key_pane

0x2463,	// (0x0005d403) bg_cell_vkbss_key_g1_ParamLimits

0x2463,	// (0x0005d403) bg_cell_vkbss_key_g1

0xefc6,	// (0x00069f66) cell_vkbss_key_3p_pane_ParamLimits

0xefc6,	// (0x00069f66) cell_vkbss_key_3p_pane

0xefe0,	// (0x00069f80) cell_vkbss_key_g1_ParamLimits

0xefe0,	// (0x00069f80) cell_vkbss_key_g1

0xeffa,	// (0x00069f9a) cell_vkbss_key_t1_ParamLimits

0xeffa,	// (0x00069f9a) cell_vkbss_key_t1

0x1e6b,	// (0x0005ce0b) cell_ituss_key_pane_ParamLimits

0x1e6b,	// (0x0005ce0b) cell_ituss_key_pane

0x7f24,	// (0x00062ec4) bg_cell_ituss_key_g1_ParamLimits

0x7f24,	// (0x00062ec4) bg_cell_ituss_key_g1

0x7f30,	// (0x00062ed0) cell_ituss_key_pane_g1_ParamLimits

0x7f30,	// (0x00062ed0) cell_ituss_key_pane_g1

0x1e7c,	// (0x0005ce1c) cell_ituss_key_pane_g2_ParamLimits

0x1e7c,	// (0x0005ce1c) cell_ituss_key_pane_g2

0x0002,

0xfede,	// (0x0006ae7e) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0006ae7e) cell_ituss_key_pane_g

0x1ea8,	// (0x0005ce48) cell_ituss_key_t1_ParamLimits

0x1ea8,	// (0x0005ce48) cell_ituss_key_t1

0x1ee2,	// (0x0005ce82) cell_ituss_key_t2_ParamLimits

0x1ee2,	// (0x0005ce82) cell_ituss_key_t2

0x1f13,	// (0x0005ceb3) cell_ituss_key_t3_ParamLimits

0x1f13,	// (0x0005ceb3) cell_ituss_key_t3

0x1ee2,	// (0x0005ce82) cell_ituss_key_t4_ParamLimits

0x1ee2,	// (0x0005ce82) cell_ituss_key_t4

0x0004,

0xfee5,	// (0x0006ae85) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x0006ae85) cell_ituss_key_t

0x7f56,	// (0x00062ef6) cell_vkbss_key_3p_pane_g1

0x7f5e,	// (0x00062efe) cell_vkbss_key_3p_pane_g2

0x7f66,	// (0x00062f06) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef0,	// (0x0006ae90) cell_vkbss_key_3p_pane_g

0xe0de,	// (0x0006907e) bg_popup_fep_char_preview_window_cp02

0x7f6e,	// (0x00062f0e) popup_fep_char_pre_window_t1

0xeb8a,	// (0x00069b2a) main_ai5_sk_pane

0x7a74,	// (0x00062a14) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7a80,	// (0x00062a20) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5476,	// (0x00060416) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7a95,	// (0x00062a35) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec2,	// (0x0006ae62) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7aa1,	// (0x00062a41) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84a2,	// (0x00063442) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf025,	// (0x00069fc5) main_ai5_sk_pane_g1

0xc30b,	// (0x000672ab) popup_query_code_window_g1

0x7e7d,	// (0x00062e1d) popup_fep_vkb_icf_pane

0x7e9c,	// (0x00062e3c) popup_fep_vtchi_icf_pane

0x7f85,	// (0x00062f25) bg_icf_pane

0x7f91,	// (0x00062f31) list_vkb_icf_pane

0x7fa0,	// (0x00062f40) bg_icf_pane_cp01

0x7fb3,	// (0x00062f53) vtchi_icf_list_pane

0x7fc3,	// (0x00062f63) list_vkb_icf_pane_t1_ParamLimits

0x7fc3,	// (0x00062f63) list_vkb_icf_pane_t1

0x7fda,	// (0x00062f7a) vtchi_icf_list_pane_t1_ParamLimits

0x7fda,	// (0x00062f7a) vtchi_icf_list_pane_t1

0x7e67,	// (0x00062e07) popup_fep_ituss_window_ParamLimits

0x7e9c,	// (0x00062e3c) popup_fep_vtchi_icf_pane_ParamLimits

0x7ec2,	// (0x00062e62) ituss_keypad_pane_ParamLimits

0x1e3d,	// (0x0005cddd) ituss_sks_pane

0x7f85,	// (0x00062f25) bg_icf_pane_ParamLimits

0xef96,	// (0x00069f36) icf_edit_indi_pane_ParamLimits

0xef96,	// (0x00069f36) icf_edit_indi_pane

0x7f91,	// (0x00062f31) list_vkb_icf_pane_ParamLimits

0x7fa0,	// (0x00062f40) bg_icf_pane_cp01_ParamLimits

0x7e52,	// (0x00062df2) icf_edit_indi_pane_cp01_ParamLimits

0x7e52,	// (0x00062df2) icf_edit_indi_pane_cp01

0x7fbb,	// (0x00062f5b) vtchi_query_pane

0x724e,	// (0x000621ee) icf_edit_indi_pane_g1_ParamLimits

0x724e,	// (0x000621ee) icf_edit_indi_pane_g1

0xf02e,	// (0x00069fce) icf_edit_indi_pane_g2_ParamLimits

0xf02e,	// (0x00069fce) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x0006aea8) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x0006aea8) icf_edit_indi_pane_g

0xf040,	// (0x00069fe0) icf_edit_indi_pane_t1

0x7ff8,	// (0x00062f98) bg_input_focus_pane_cp042

0x83e4,	// (0x00063384) vtchi_button_pane

0x8001,	// (0x00062fa1) vtchi_query_pane_t1

0x800f,	// (0x00062faf) vtchi_query_pane_t2

0x801d,	// (0x00062fbd) vtchi_query_pane_t3

0x0002,

0xfef7,	// (0x0006ae97) vtchi_query_pane_t

0xf0eb,	// (0x0006a08b) bg_button_pane_cp13

0x802b,	// (0x00062fcb) vtchi_button_pane_g1

0x1f56,	// (0x0005cef6) ituss_sks_pane_g1

0x1f61,	// (0x0005cf01) ituss_sks_pane_g2

0x0001,

0xfefe,	// (0x0006ae9e) ituss_sks_pane_g

0x8033,	// (0x00062fd3) ituss_sks_pane_t1

0x8041,	// (0x00062fe1) ituss_sks_pane_t2

0x0001,

0xff03,	// (0x0006aea3) ituss_sks_pane_t

0x482e,	// (0x0005f7ce) indicator_nsta_pane_cp_g1

0x4836,	// (0x0005f7d6) indicator_nsta_pane_cp_g2

0x483e,	// (0x0005f7de) indicator_nsta_pane_cp_g3

0x482e,	// (0x0005f7ce) indicator_nsta_pane_cp_g4

0x4836,	// (0x0005f7d6) indicator_nsta_pane_cp_g5

0x483e,	// (0x0005f7de) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0006aa47) indicator_nsta_pane_cp_g

0xe967,	// (0x00069907) cell_graphic2_pane_t2_ParamLimits

0xe967,	// (0x00069907) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x0006ad59) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x0006ad59) cell_graphic2_pane_t

0xe9a0,	// (0x00069940) cell_graphic2_control_pane_t1

0xa30c,	// (0x000652ac) signal_pane_g3_ParamLimits

0xa30c,	// (0x000652ac) signal_pane_g3

0xa320,	// (0x000652c0) signal_pane_g4_ParamLimits

0xa320,	// (0x000652c0) signal_pane_g4

0x7e29,	// (0x00062dc9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7e29,	// (0x00062dc9) cell_ai5_widget_list_row_pane_t3

0x7f44,	// (0x00062ee4) cell_ituss_key_pane_t1_ParamLimits

0x7f44,	// (0x00062ee4) cell_ituss_key_pane_t1

0x2711,	// (0x0005d6b1) form_field_data_wide_pane_vc_t2_ParamLimits

0x2711,	// (0x0005d6b1) form_field_data_wide_pane_vc_t2

0x2725,	// (0x0005d6c5) form_field_data_wide_pane_vc_t3_ParamLimits

0x2725,	// (0x0005d6c5) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f3,	// (0x0006a793) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f3,	// (0x0006a793) form_field_data_wide_pane_vc_t

0x44f5,	// (0x0005f495) form_field_slider_wide_pane_vc_t3_ParamLimits

0x44f5,	// (0x0005f495) form_field_slider_wide_pane_vc_t3

0x45d3,	// (0x0005f573) form_field_popup_wide_pane_vc_t2_ParamLimits

0x45d3,	// (0x0005f573) form_field_popup_wide_pane_vc_t2

0x45ea,	// (0x0005f58a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x45ea,	// (0x0005f58a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0006aa36) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0006aa36) form_field_popup_wide_pane_vc_t

0xb991,	// (0x00066931) aid_fshwr2_btn_pane_ParamLimits

0xb9a3,	// (0x00066943) aid_fshwr2_syb_pane_ParamLimits

0xb9b5,	// (0x00066955) aid_fshwr2_txt_pane_ParamLimits

0x1499,	// (0x0005c439) fshwr2_bg_pane_ParamLimits

0xb9c4,	// (0x00066964) fshwr2_func_candi_pane_ParamLimits

0xb9e3,	// (0x00066983) fshwr2_hwr_syb_pane_ParamLimits

0xb9fe,	// (0x0006699e) fshwr2_icf_pane_ParamLimits

0x3fb1,	// (0x0005ef51) list_double_graphic_pane_vc_g4_ParamLimits

0x3fb1,	// (0x0005ef51) list_double_graphic_pane_vc_g4

0x1e9c,	// (0x0005ce3c) cell_ituss_key_pane_g3_ParamLimits

0x1e9c,	// (0x0005ce3c) cell_ituss_key_pane_g3

0x1f44,	// (0x0005cee4) cell_ituss_key_t5_ParamLimits

0x1f44,	// (0x0005cee4) cell_ituss_key_t5

0xefa9,	// (0x00069f49) popup_fep_vkbss_window_ParamLimits

0x73ce,	// (0x0006236e) aid_cell_ai5_quarter

0xf040,	// (0x00069fe0) icf_edit_indi_pane_t1_ParamLimits

0x978c,	// (0x0006472c) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x978c,	// (0x0006472c) aid_tch_indicator_popup_pane_cp2

0x979f,	// (0x0006473f) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x979f,	// (0x0006473f) aid_tch_query_popup_data_pane_cp2

0x2a7e,	// (0x0005da1e) aid_tch_query_popup_pane_ParamLimits

0x2a7e,	// (0x0005da1e) aid_tch_query_popup_pane

0x2a7e,	// (0x0005da1e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2a7e,	// (0x0005da1e) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
