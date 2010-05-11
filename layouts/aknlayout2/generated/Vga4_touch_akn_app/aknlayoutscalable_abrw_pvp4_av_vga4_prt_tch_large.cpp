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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005525d };

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
0x4a0e,	// (0x00059c6b) Screen

0x4a1a,	// (0x00059c77) application_window_ParamLimits

0x4a1a,	// (0x00059c77) application_window

0xc227,	// (0x00061484) screen_g1

0x4a76,	// (0x00059cd3) area_bottom_pane_ParamLimits

0x4a76,	// (0x00059cd3) area_bottom_pane

0x4b36,	// (0x00059d93) area_top_pane_ParamLimits

0x4b36,	// (0x00059d93) area_top_pane

0x4bd4,	// (0x00059e31) main_pane_ParamLimits

0x4bd4,	// (0x00059e31) main_pane

0xc231,	// (0x0006148e) misc_graphics

0x80cf,	// (0x0005d32c) battery_pane_ParamLimits

0x80cf,	// (0x0005d32c) battery_pane

0x8d8d,	// (0x0005dfea) bg_status_flat_pane_g8

0x8d95,	// (0x0005dff2) bg_status_flat_pane_g9

0x8197,	// (0x0005d3f4) context_pane_ParamLimits

0x8197,	// (0x0005d3f4) context_pane

0x82bb,	// (0x0005d518) navi_pane_ParamLimits

0x82bb,	// (0x0005d518) navi_pane

0x834b,	// (0x0005d5a8) signal_pane_ParamLimits

0x834b,	// (0x0005d5a8) signal_pane

0x0008,

0xf87e,	// (0x00064adb) bg_status_flat_pane_g

0x83b8,	// (0x0005d615) status_pane_g1_ParamLimits

0x83b8,	// (0x0005d615) status_pane_g1

0x83cc,	// (0x0005d629) status_pane_g2_ParamLimits

0x83cc,	// (0x0005d629) status_pane_g2

0x83d8,	// (0x0005d635) status_pane_g3_ParamLimits

0x83d8,	// (0x0005d635) status_pane_g3

0x0004,

0xf7a5,	// (0x00064a02) status_pane_g_ParamLimits

0xf7a5,	// (0x00064a02) status_pane_g

0x840c,	// (0x0005d669) title_pane_ParamLimits

0x840c,	// (0x0005d669) title_pane

0x8449,	// (0x0005d6a6) uni_indicator_pane_ParamLimits

0x8449,	// (0x0005d6a6) uni_indicator_pane

0x6378,	// (0x0005b5d5) bg_list_pane_ParamLimits

0x6378,	// (0x0005b5d5) bg_list_pane

0x6398,	// (0x0005b5f5) find_pane

0x63a0,	// (0x0005b5fd) listscroll_app_pane_ParamLimits

0x63a0,	// (0x0005b5fd) listscroll_app_pane

0x63ac,	// (0x0005b609) listscroll_form_pane

0x63b4,	// (0x0005b611) listscroll_gen_pane_ParamLimits

0x63b4,	// (0x0005b611) listscroll_gen_pane

0x63c8,	// (0x0005b625) listscroll_set_pane

0x58b8,	// (0x0005ab15) main_idle_act_pane

0x1077,	// (0x000562d4) main_idle_trad_pane

0x1077,	// (0x000562d4) main_list_empty_pane

0x63e2,	// (0x0005b63f) main_midp_pane

0x63ee,	// (0x0005b64b) main_pane_g1_ParamLimits

0x63ee,	// (0x0005b64b) main_pane_g1

0x63fc,	// (0x0005b659) popup_ai_message_window_ParamLimits

0x63fc,	// (0x0005b659) popup_ai_message_window

0x64b0,	// (0x0005b70d) popup_fep_china_uni_window_ParamLimits

0x64b0,	// (0x0005b70d) popup_fep_china_uni_window

0x6510,	// (0x0005b76d) popup_fep_japan_candidate_window_ParamLimits

0x6510,	// (0x0005b76d) popup_fep_japan_candidate_window

0x653a,	// (0x0005b797) popup_fep_japan_predictive_window_ParamLimits

0x653a,	// (0x0005b797) popup_fep_japan_predictive_window

0x6570,	// (0x0005b7cd) popup_find_window

0x657d,	// (0x0005b7da) popup_grid_graphic_window_ParamLimits

0x657d,	// (0x0005b7da) popup_grid_graphic_window

0x65ab,	// (0x0005b808) popup_large_graphic_colour_window

0x65d1,	// (0x0005b82e) popup_menu_window_ParamLimits

0x65d1,	// (0x0005b82e) popup_menu_window

0x7ddb,	// (0x0005d038) popup_note_image_window

0x7dc5,	// (0x0005d022) popup_note_wait_window_ParamLimits

0x7dc5,	// (0x0005d022) popup_note_wait_window

0x7dc5,	// (0x0005d022) popup_note_window_ParamLimits

0x7dc5,	// (0x0005d022) popup_note_window

0x7e41,	// (0x0005d09e) popup_query_code_window_ParamLimits

0x7e41,	// (0x0005d09e) popup_query_code_window

0x7e57,	// (0x0005d0b4) popup_query_data_code_window_ParamLimits

0x7e57,	// (0x0005d0b4) popup_query_data_code_window

0x7e7a,	// (0x0005d0d7) popup_query_data_window_ParamLimits

0x7e7a,	// (0x0005d0d7) popup_query_data_window

0x7e9c,	// (0x0005d0f9) popup_query_sat_info_window_ParamLimits

0x7e9c,	// (0x0005d0f9) popup_query_sat_info_window

0x7edb,	// (0x0005d138) popup_snote_single_graphic_window_ParamLimits

0x7edb,	// (0x0005d138) popup_snote_single_graphic_window

0x7edb,	// (0x0005d138) popup_snote_single_text_window_ParamLimits

0x7edb,	// (0x0005d138) popup_snote_single_text_window

0x7ef2,	// (0x0005d14f) popup_sub_window_general

0x8038,	// (0x0005d295) popup_window_general_ParamLimits

0x8038,	// (0x0005d295) popup_window_general

0x8051,	// (0x0005d2ae) power_save_pane

0x61ed,	// (0x0005b44a) control_pane_g1_ParamLimits

0x61ed,	// (0x0005b44a) control_pane_g1

0x6216,	// (0x0005b473) control_pane_g2_ParamLimits

0x6216,	// (0x0005b473) control_pane_g2

0x33f0,	// (0x0005864d) control_pane_g3_ParamLimits

0x33f0,	// (0x0005864d) control_pane_g3

0x0007,

0xf78d,	// (0x000649ea) control_pane_g_ParamLimits

0xf78d,	// (0x000649ea) control_pane_g

0x6285,	// (0x0005b4e2) control_pane_t1_ParamLimits

0x6285,	// (0x0005b4e2) control_pane_t1

0x62d1,	// (0x0005b52e) control_pane_t2_ParamLimits

0x62d1,	// (0x0005b52e) control_pane_t2

0x0002,

0xf79e,	// (0x000649fb) control_pane_t_ParamLimits

0xf79e,	// (0x000649fb) control_pane_t

0x6146,	// (0x0005b3a3) navi_navi_volume_pane_cp1

0x614e,	// (0x0005b3ab) status_small_icon_pane

0x33bc,	// (0x00058619) status_small_pane_g1_ParamLimits

0x33bc,	// (0x00058619) status_small_pane_g1

0x6156,	// (0x0005b3b3) status_small_pane_g2_ParamLimits

0x6156,	// (0x0005b3b3) status_small_pane_g2

0x6162,	// (0x0005b3bf) status_small_pane_g3_ParamLimits

0x6162,	// (0x0005b3bf) status_small_pane_g3

0x616e,	// (0x0005b3cb) status_small_pane_g4_ParamLimits

0x616e,	// (0x0005b3cb) status_small_pane_g4

0x617a,	// (0x0005b3d7) status_small_pane_g5_ParamLimits

0x617a,	// (0x0005b3d7) status_small_pane_g5

0x6188,	// (0x0005b3e5) status_small_pane_g6_ParamLimits

0x6188,	// (0x0005b3e5) status_small_pane_g6

0x0007,

0xf77c,	// (0x000649d9) status_small_pane_g_ParamLimits

0xf77c,	// (0x000649d9) status_small_pane_g

0x61b7,	// (0x0005b414) status_small_pane_t1

0x61d9,	// (0x0005b436) status_small_wait_pane_ParamLimits

0x61d9,	// (0x0005b436) status_small_wait_pane

0x5c2b,	// (0x0005ae88) aid_levels_signal_ParamLimits

0x5c2b,	// (0x0005ae88) aid_levels_signal

0x5c3d,	// (0x0005ae9a) signal_pane_g1_ParamLimits

0x5c3d,	// (0x0005ae9a) signal_pane_g1

0x5c52,	// (0x0005aeaf) signal_pane_g2_ParamLimits

0x5c52,	// (0x0005aeaf) signal_pane_g2

0x0003,

0xf70d,	// (0x0006496a) signal_pane_g_ParamLimits

0xf70d,	// (0x0006496a) signal_pane_g

0xf16f,	// (0x000643cc) context_pane_g1

0x4e33,	// (0x0005a090) title_pane_g1

0x4e51,	// (0x0005a0ae) title_pane_t1

0xc253,	// (0x000614b0) title_pane_t2

0xc279,	// (0x000614d6) title_pane_t3

0x0002,

0xf557,	// (0x000647b4) title_pane_t

0x8461,	// (0x0005d6be) aid_levels_battery_ParamLimits

0x8461,	// (0x0005d6be) aid_levels_battery

0x8475,	// (0x0005d6d2) battery_pane_g1_ParamLimits

0x8475,	// (0x0005d6d2) battery_pane_g1

0x848b,	// (0x0005d6e8) battery_pane_g2_ParamLimits

0x848b,	// (0x0005d6e8) battery_pane_g2

0x0001,

0xf7b0,	// (0x00064a0d) battery_pane_g_ParamLimits

0xf7b0,	// (0x00064a0d) battery_pane_g

0x96d7,	// (0x0005e934) uni_indicator_pane_g1

0x96ed,	// (0x0005e94a) uni_indicator_pane_g2

0x9703,	// (0x0005e960) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00064b83) uni_indicator_pane_g

0xf41d,	// (0x0006467a) navi_icon_pane_ParamLimits

0xf41d,	// (0x0006467a) navi_icon_pane

0xf3a1,	// (0x000645fe) navi_midp_pane

0xf439,	// (0x00064696) navi_navi_pane

0xf443,	// (0x000646a0) navi_text_pane_ParamLimits

0xf443,	// (0x000646a0) navi_text_pane

0xc227,	// (0x00061484) status_small_wait_pane_g1

0xc574,	// (0x000617d1) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00064b7e) status_small_wait_pane_g

0x93ea,	// (0x0005e647) navi_navi_icon_text_pane

0x93f2,	// (0x0005e64f) navi_navi_pane_g1_ParamLimits

0x93f2,	// (0x0005e64f) navi_navi_pane_g1

0x9404,	// (0x0005e661) navi_navi_pane_g2_ParamLimits

0x9404,	// (0x0005e661) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00064b4c) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00064b4c) navi_navi_pane_g

0x9416,	// (0x0005e673) navi_navi_tabs_pane

0x941f,	// (0x0005e67c) navi_navi_text_pane

0x93ea,	// (0x0005e647) navi_navi_volume_pane

0x93c6,	// (0x0005e623) navi_text_pane_t1

0x93ba,	// (0x0005e617) navi_icon_pane_g1

0x930d,	// (0x0005e56a) navi_navi_text_pane_t1

0x6a6c,	// (0x0005bcc9) navi_navi_volume_pane_g1

0x6a74,	// (0x0005bcd1) volume_small_pane

0x9273,	// (0x0005e4d0) navi_navi_icon_text_pane_g1

0x927b,	// (0x0005e4d8) navi_navi_icon_text_pane_t1

0xf439,	// (0x00064696) navi_tabs_2_long_pane

0xf439,	// (0x00064696) navi_tabs_2_pane

0xf439,	// (0x00064696) navi_tabs_3_long_pane

0xf439,	// (0x00064696) navi_tabs_3_pane

0xf439,	// (0x00064696) navi_tabs_4_pane

0x6a4c,	// (0x0005bca9) tabs_2_active_pane_ParamLimits

0x6a4c,	// (0x0005bca9) tabs_2_active_pane

0x6a5c,	// (0x0005bcb9) tabs_2_passive_pane_ParamLimits

0x6a5c,	// (0x0005bcb9) tabs_2_passive_pane

0x6a1a,	// (0x0005bc77) tabs_3_active_pane_ParamLimits

0x6a1a,	// (0x0005bc77) tabs_3_active_pane

0x6a2a,	// (0x0005bc87) tabs_3_passive_pane_ParamLimits

0x6a2a,	// (0x0005bc87) tabs_3_passive_pane

0x6a3b,	// (0x0005bc98) tabs_3_passive_pane_cp_ParamLimits

0x6a3b,	// (0x0005bc98) tabs_3_passive_pane_cp

0x69ce,	// (0x0005bc2b) tabs_4_active_pane_ParamLimits

0x69ce,	// (0x0005bc2b) tabs_4_active_pane

0x69e1,	// (0x0005bc3e) tabs_4_passive_pane_ParamLimits

0x69e1,	// (0x0005bc3e) tabs_4_passive_pane

0x69f2,	// (0x0005bc4f) tabs_4_passive_pane_cp_ParamLimits

0x69f2,	// (0x0005bc4f) tabs_4_passive_pane_cp

0x6a03,	// (0x0005bc60) tabs_4_passive_pane_cp2_ParamLimits

0x6a03,	// (0x0005bc60) tabs_4_passive_pane_cp2

0x69aa,	// (0x0005bc07) tabs_2_long_active_pane_ParamLimits

0x69aa,	// (0x0005bc07) tabs_2_long_active_pane

0x69bc,	// (0x0005bc19) tabs_2_long_passive_pane_ParamLimits

0x69bc,	// (0x0005bc19) tabs_2_long_passive_pane

0x696b,	// (0x0005bbc8) tabs_3_long_active_pane_ParamLimits

0x696b,	// (0x0005bbc8) tabs_3_long_active_pane

0x697e,	// (0x0005bbdb) tabs_3_long_passive_pane_ParamLimits

0x697e,	// (0x0005bbdb) tabs_3_long_passive_pane

0x6997,	// (0x0005bbf4) tabs_3_long_passive_pane_cp_ParamLimits

0x6997,	// (0x0005bbf4) tabs_3_long_passive_pane_cp

0x6911,	// (0x0005bb6e) volume_small_pane_g1

0x691a,	// (0x0005bb77) volume_small_pane_g2

0x6923,	// (0x0005bb80) volume_small_pane_g3

0x692c,	// (0x0005bb89) volume_small_pane_g4

0x6935,	// (0x0005bb92) volume_small_pane_g5

0x693e,	// (0x0005bb9b) volume_small_pane_g6

0x6947,	// (0x0005bba4) volume_small_pane_g7

0x6950,	// (0x0005bbad) volume_small_pane_g8

0x6959,	// (0x0005bbb6) volume_small_pane_g9

0x6962,	// (0x0005bbbf) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00064b18) volume_small_pane_g

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp2_ParamLimits

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp2

0x4eb9,	// (0x0005a116) tabs_3_active_pane_g1

0x4ec1,	// (0x0005a11e) tabs_3_active_pane_t1

0xc28b,	// (0x000614e8) bg_passive_tab_pane_cp2_ParamLimits

0xc28b,	// (0x000614e8) bg_passive_tab_pane_cp2

0x4eb9,	// (0x0005a116) tabs_3_passive_pane_g1

0x4ec1,	// (0x0005a11e) tabs_3_passive_pane_t1

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp3_ParamLimits

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp3

0x4ed3,	// (0x0005a130) tabs_4_active_pane_g1

0x4edb,	// (0x0005a138) tabs_4_active_pane_t1

0xc28b,	// (0x000614e8) bg_passive_tab_pane_cp3_ParamLimits

0xc28b,	// (0x000614e8) bg_passive_tab_pane_cp3

0x4ed3,	// (0x0005a130) tabs_4_1_passive_pane_g1

0x4edb,	// (0x0005a138) tabs_4_1_passive_pane_t1

0x63e2,	// (0x0005b63f) list_highlight_pane_cp2

0x9952,	// (0x0005ebaf) list_set_pane_ParamLimits

0x9952,	// (0x0005ebaf) list_set_pane

0x9a1a,	// (0x0005ec77) main_pane_set_t1_ParamLimits

0x9a1a,	// (0x0005ec77) main_pane_set_t1

0x9a3a,	// (0x0005ec97) main_pane_set_t2_ParamLimits

0x9a3a,	// (0x0005ec97) main_pane_set_t2

0x9a4e,	// (0x0005ecab) main_pane_set_t3_ParamLimits

0x9a4e,	// (0x0005ecab) main_pane_set_t3

0x9a62,	// (0x0005ecbf) main_pane_set_t4_ParamLimits

0x9a62,	// (0x0005ecbf) main_pane_set_t4

0x0003,

0xf98b,	// (0x00064be8) main_pane_set_t_ParamLimits

0xf98b,	// (0x00064be8) main_pane_set_t

0x9a76,	// (0x0005ecd3) setting_code_pane

0x9a80,	// (0x0005ecdd) setting_slider_graphic_pane

0x9a80,	// (0x0005ecdd) setting_slider_pane

0x9a80,	// (0x0005ecdd) setting_text_pane

0x9a80,	// (0x0005ecdd) setting_volume_pane

0x4eed,	// (0x0005a14a) volume_set_pane

0xc28b,	// (0x000614e8) bg_set_opt_pane_cp

0x4ef7,	// (0x0005a154) setting_slider_pane_t1

0x4f10,	// (0x0005a16d) setting_slider_pane_t2

0x4f2a,	// (0x0005a187) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000647bb) setting_slider_pane_t

0x4f42,	// (0x0005a19f) slider_set_pane

0xc231,	// (0x0006148e) bg_set_opt_pane_cp2

0xc299,	// (0x000614f6) setting_slider_graphic_pane_g1

0x4f58,	// (0x0005a1b5) setting_slider_graphic_pane_t1

0x4f68,	// (0x0005a1c5) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000647c2) setting_slider_graphic_pane_t

0x4f78,	// (0x0005a1d5) slider_set_pane_cp

0xc231,	// (0x0006148e) input_focus_pane_cp1

0x9913,	// (0x0005eb70) list_set_text_pane

0xc227,	// (0x00061484) setting_text_pane_g1

0xc231,	// (0x0006148e) input_focus_pane_cp2

0xc227,	// (0x00061484) setting_code_pane_g1

0xc2a2,	// (0x000614ff) setting_code_pane_t1

0x3154,	// (0x000583b1) set_text_pane_t1_ParamLimits

0x3154,	// (0x000583b1) set_text_pane_t1

0xe501,	// (0x0006375e) set_opt_bg_pane_g1

0xe509,	// (0x00063766) set_opt_bg_pane_g2

0x98eb,	// (0x0005eb48) set_opt_bg_pane_g3

0xe519,	// (0x00063776) set_opt_bg_pane_g4

0xe521,	// (0x0006377e) set_opt_bg_pane_g5

0xe529,	// (0x00063786) set_opt_bg_pane_g6

0x98f5,	// (0x0005eb52) set_opt_bg_pane_g7

0x98ff,	// (0x0005eb5c) set_opt_bg_pane_g8

0x9909,	// (0x0005eb66) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00064bd5) set_opt_bg_pane_g

0x98de,	// (0x0005eb3b) slider_set_pane_g1

0x6b1d,	// (0x0005bd7a) slider_set_pane_g2

0x0006,

0xf969,	// (0x00064bc6) slider_set_pane_g

0x6a7d,	// (0x0005bcda) volume_set_pane_g1

0x6a87,	// (0x0005bce4) volume_set_pane_g2

0x6a91,	// (0x0005bcee) volume_set_pane_g3

0x6a9b,	// (0x0005bcf8) volume_set_pane_g4

0x6aa5,	// (0x0005bd02) volume_set_pane_g5

0x6aaf,	// (0x0005bd0c) volume_set_pane_g6

0x6ab9,	// (0x0005bd16) volume_set_pane_g7

0x6ac3,	// (0x0005bd20) volume_set_pane_g8

0x6acd,	// (0x0005bd2a) volume_set_pane_g9

0x6ad7,	// (0x0005bd34) volume_set_pane_g10

0x0009,

0xf941,	// (0x00064b9e) volume_set_pane_g

0x4f80,	// (0x0005a1dd) indicator_pane_ParamLimits

0x4f80,	// (0x0005a1dd) indicator_pane

0x4f8c,	// (0x0005a1e9) main_idle_pane_g2_ParamLimits

0x4f8c,	// (0x0005a1e9) main_idle_pane_g2

0x4fb4,	// (0x0005a211) main_pane_idle_g1_ParamLimits

0x4fb4,	// (0x0005a211) main_pane_idle_g1

0xc2b0,	// (0x0006150d) popup_clock_digital_analogue_window_ParamLimits

0xc2b0,	// (0x0006150d) popup_clock_digital_analogue_window

0x4fc2,	// (0x0005a21f) soft_indicator_pane_ParamLimits

0x4fc2,	// (0x0005a21f) soft_indicator_pane

0x4fd0,	// (0x0005a22d) wallpaper_pane_ParamLimits

0x4fd0,	// (0x0005a22d) wallpaper_pane

0xc227,	// (0x00061484) wallpaper_pane_g1

0x4fdc,	// (0x0005a239) indicator_pane_g1_ParamLimits

0x4fdc,	// (0x0005a239) indicator_pane_g1

0x9d9c,	// (0x0005eff9) navi_navi_icon_text_pane_srt_g1

0xc2de,	// (0x0006153b) soft_indicator_pane_t1

0xc2f8,	// (0x00061555) aid_ps_area_pane

0x4fe8,	// (0x0005a245) aid_ps_clock_pane

0xc309,	// (0x00061566) aid_ps_indicator_pane

0xc315,	// (0x00061572) indicator_ps_pane_ParamLimits

0xc315,	// (0x00061572) indicator_ps_pane

0xc324,	// (0x00061581) power_save_pane_g1_ParamLimits

0xc324,	// (0x00061581) power_save_pane_g1

0xc330,	// (0x0006158d) power_save_pane_g2_ParamLimits

0xc330,	// (0x0006158d) power_save_pane_g2

0x4a2a,	// (0x00059c87) aid_navinavi_width_pane

0xc2f8,	// (0x00061555) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000647c7) power_save_pane_g_ParamLimits

0xf56a,	// (0x000647c7) power_save_pane_g

0xc33e,	// (0x0006159b) power_save_pane_t1_ParamLimits

0xc33e,	// (0x0006159b) power_save_pane_t1

0x4fe8,	// (0x0005a245) aid_ps_clock_pane_ParamLimits

0xc309,	// (0x00061566) aid_ps_indicator_pane_ParamLimits

0xc350,	// (0x000615ad) power_save_pane_t4_ParamLimits

0xc350,	// (0x000615ad) power_save_pane_t4

0x0001,

0xf56f,	// (0x000647cc) power_save_pane_t_ParamLimits

0xf56f,	// (0x000647cc) power_save_pane_t

0xc37a,	// (0x000615d7) power_save_t3_ParamLimits

0xc37a,	// (0x000615d7) power_save_t3

0xc365,	// (0x000615c2) power_save_t2_ParamLimits

0xc365,	// (0x000615c2) power_save_t2

0xc38f,	// (0x000615ec) indicator_ps_pane_g1

0x4ff6,	// (0x0005a253) ai_gene_pane_ParamLimits

0x4ff6,	// (0x0005a253) ai_gene_pane

0x5002,	// (0x0005a25f) ai_links_pane_ParamLimits

0x5002,	// (0x0005a25f) ai_links_pane

0x500e,	// (0x0005a26b) indicator_pane_cp1_ParamLimits

0x500e,	// (0x0005a26b) indicator_pane_cp1

0x501a,	// (0x0005a277) main_pane_idle_g1_cp_ParamLimits

0x501a,	// (0x0005a277) main_pane_idle_g1_cp

0xc398,	// (0x000615f5) popup_ai_links_title_window

0x5026,	// (0x0005a283) soft_indicator_pane_cp1_ParamLimits

0x5026,	// (0x0005a283) soft_indicator_pane_cp1

0x96c5,	// (0x0005e922) ai_links_pane_g1

0x96ce,	// (0x0005e92b) grid_ai_links_pane

0x96aa,	// (0x0005e907) ai_gene_pane_1

0x96b3,	// (0x0005e910) ai_gene_pane_2

0x96bc,	// (0x0005e919) list_highlight_pane_cp4

0x968a,	// (0x0005e8e7) cell_ai_link_pane_ParamLimits

0x968a,	// (0x0005e8e7) cell_ai_link_pane

0x9682,	// (0x0005e8df) cell_ai_link_pane_g1

0xc574,	// (0x000617d1) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00064b79) cell_ai_link_pane_g

0xc231,	// (0x0006148e) grid_highlight_cp2

0xc231,	// (0x0006148e) bg_popup_sub_pane_cp1

0xc3af,	// (0x0006160c) popup_ai_links_title_window_t1

0x95ce,	// (0x0005e82b) ai_gene_pane_1_g1_ParamLimits

0x95ce,	// (0x0005e82b) ai_gene_pane_1_g1

0x95da,	// (0x0005e837) ai_gene_pane_1_g2_ParamLimits

0x95da,	// (0x0005e837) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00064b6f) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00064b6f) ai_gene_pane_1_g

0x95e7,	// (0x0005e844) ai_gene_pane_1_t1_ParamLimits

0x95e7,	// (0x0005e844) ai_gene_pane_1_t1

0x961b,	// (0x0005e878) grid_ai_soft_ind_pane

0x95b9,	// (0x0005e816) ai_gene_pane_2_t1_ParamLimits

0x95b9,	// (0x0005e816) ai_gene_pane_2_t1

0x5032,	// (0x0005a28f) main_pane_empty_t1_ParamLimits

0x5032,	// (0x0005a28f) main_pane_empty_t1

0x504a,	// (0x0005a2a7) main_pane_empty_t2_ParamLimits

0x504a,	// (0x0005a2a7) main_pane_empty_t2

0x505f,	// (0x0005a2bc) main_pane_empty_t3_ParamLimits

0x505f,	// (0x0005a2bc) main_pane_empty_t3

0x5071,	// (0x0005a2ce) main_pane_empty_t4_ParamLimits

0x5071,	// (0x0005a2ce) main_pane_empty_t4

0x5083,	// (0x0005a2e0) main_pane_empty_t5_ParamLimits

0x5083,	// (0x0005a2e0) main_pane_empty_t5

0x0004,

0xf574,	// (0x000647d1) main_pane_empty_t_ParamLimits

0xf574,	// (0x000647d1) main_pane_empty_t

0xe552,	// (0x000637af) bg_popup_window_pane_ParamLimits

0xe552,	// (0x000637af) bg_popup_window_pane

0x931b,	// (0x0005e578) find_popup_pane_cp2_ParamLimits

0x931b,	// (0x0005e578) find_popup_pane_cp2

0x9327,	// (0x0005e584) heading_pane_ParamLimits

0x9327,	// (0x0005e584) heading_pane

0xc231,	// (0x0006148e) bg_popup_sub_pane

0x9295,	// (0x0005e4f2) bg_popup_window_pane_g1_ParamLimits

0x9295,	// (0x0005e4f2) bg_popup_window_pane_g1

0x92a1,	// (0x0005e4fe) bg_popup_window_pane_g2_ParamLimits

0x92a1,	// (0x0005e4fe) bg_popup_window_pane_g2

0x92ad,	// (0x0005e50a) bg_popup_window_pane_g3_ParamLimits

0x92ad,	// (0x0005e50a) bg_popup_window_pane_g3

0x92b9,	// (0x0005e516) bg_popup_window_pane_g4_ParamLimits

0x92b9,	// (0x0005e516) bg_popup_window_pane_g4

0x92c5,	// (0x0005e522) bg_popup_window_pane_g5_ParamLimits

0x92c5,	// (0x0005e522) bg_popup_window_pane_g5

0x92d1,	// (0x0005e52e) bg_popup_window_pane_g6_ParamLimits

0x92d1,	// (0x0005e52e) bg_popup_window_pane_g6

0x92dd,	// (0x0005e53a) bg_popup_window_pane_g7_ParamLimits

0x92dd,	// (0x0005e53a) bg_popup_window_pane_g7

0x92e9,	// (0x0005e546) bg_popup_window_pane_g8_ParamLimits

0x92e9,	// (0x0005e546) bg_popup_window_pane_g8

0x92f5,	// (0x0005e552) bg_popup_window_pane_g9_ParamLimits

0x92f5,	// (0x0005e552) bg_popup_window_pane_g9

0x9301,	// (0x0005e55e) bg_popup_window_pane_g10_ParamLimits

0x9301,	// (0x0005e55e) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00064b37) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00064b37) bg_popup_window_pane_g

0x922a,	// (0x0005e487) bg_popup_heading_pane_ParamLimits

0x922a,	// (0x0005e487) bg_popup_heading_pane

0x6bf1,	// (0x0005be4e) tabs_4_passive_pane_cp_srt_ParamLimits

0x6bf1,	// (0x0005be4e) tabs_4_passive_pane_cp_srt

0x6c03,	// (0x0005be60) tabs_4_passive_pane_srt_ParamLimits

0x923e,	// (0x0005e49b) heading_pane_g2

0x6c03,	// (0x0005be60) tabs_4_passive_pane_srt

0x63e2,	// (0x0005b63f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x63e2,	// (0x0005b63f) bg_passive_tab_pane_cp3_srt

0x9246,	// (0x0005e4a3) heading_pane_t1_ParamLimits

0x9246,	// (0x0005e4a3) heading_pane_t1

0x925d,	// (0x0005e4ba) heading_pane_t2_ParamLimits

0x925d,	// (0x0005e4ba) heading_pane_t2

0x0001,

0xf8d5,	// (0x00064b32) heading_pane_t_ParamLimits

0xf8d5,	// (0x00064b32) heading_pane_t

0x8d55,	// (0x0005dfb2) bg_popup_heading_pane_g1

0x8e04,	// (0x0005e061) bg_popup_heading_pane_g2

0x8e0e,	// (0x0005e06b) bg_popup_heading_pane_g3

0x8e18,	// (0x0005e075) bg_popup_heading_pane_g4

0x8e22,	// (0x0005e07f) bg_popup_heading_pane_g5

0x8e2c,	// (0x0005e089) bg_popup_heading_pane_g6

0x8e34,	// (0x0005e091) bg_popup_heading_pane_g7

0x8e3c,	// (0x0005e099) bg_popup_heading_pane_g8

0x8e46,	// (0x0005e0a3) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00064aee) bg_popup_heading_pane_g

0x8563,	// (0x0005d7c0) bg_popup_sub_pane_g1

0x8573,	// (0x0005d7d0) bg_popup_sub_pane_g2

0x856b,	// (0x0005d7c8) bg_popup_sub_pane_g3

0x8583,	// (0x0005d7e0) bg_popup_sub_pane_g4

0x857b,	// (0x0005d7d8) bg_popup_sub_pane_g5

0x858b,	// (0x0005d7e8) bg_popup_sub_pane_g6

0x8593,	// (0x0005d7f0) bg_popup_sub_pane_g7

0x85a3,	// (0x0005d800) bg_popup_sub_pane_g8

0x859b,	// (0x0005d7f8) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00064ac8) bg_popup_sub_pane_g

0xc3be,	// (0x0006161b) bg_popup_window_pane_cp5_ParamLimits

0xc3be,	// (0x0006161b) bg_popup_window_pane_cp5

0xc3da,	// (0x00061637) popup_note_window_g1_ParamLimits

0xc3da,	// (0x00061637) popup_note_window_g1

0xc3e6,	// (0x00061643) popup_note_window_t1_ParamLimits

0xc3e6,	// (0x00061643) popup_note_window_t1

0xc3fc,	// (0x00061659) popup_note_window_t2_ParamLimits

0xc3fc,	// (0x00061659) popup_note_window_t2

0xc412,	// (0x0006166f) popup_note_window_t3_ParamLimits

0xc412,	// (0x0006166f) popup_note_window_t3

0xc428,	// (0x00061685) popup_note_window_t4_ParamLimits

0xc428,	// (0x00061685) popup_note_window_t4

0xc450,	// (0x000616ad) popup_note_window_t5_ParamLimits

0xc450,	// (0x000616ad) popup_note_window_t5

0x0004,

0xf57f,	// (0x000647dc) popup_note_window_t_ParamLimits

0xf57f,	// (0x000647dc) popup_note_window_t

0xc474,	// (0x000616d1) bg_popup_window_pane_cp6_ParamLimits

0xc474,	// (0x000616d1) bg_popup_window_pane_cp6

0x8cd1,	// (0x0005df2e) popup_note_image_window_g1_ParamLimits

0x8cd1,	// (0x0005df2e) popup_note_image_window_g1

0x8cdd,	// (0x0005df3a) popup_note_image_window_g2_ParamLimits

0x8cdd,	// (0x0005df3a) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00064abc) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00064abc) popup_note_image_window_g

0x8cf6,	// (0x0005df53) popup_note_image_window_t1_ParamLimits

0x8cf6,	// (0x0005df53) popup_note_image_window_t1

0x8d0f,	// (0x0005df6c) popup_note_image_window_t2_ParamLimits

0x8d0f,	// (0x0005df6c) popup_note_image_window_t2

0x8d28,	// (0x0005df85) popup_note_image_window_t3_ParamLimits

0x8d28,	// (0x0005df85) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00064ac1) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00064ac1) popup_note_image_window_t

0x8b91,	// (0x0005ddee) bg_popup_window_pane_cp7_ParamLimits

0x8b91,	// (0x0005ddee) bg_popup_window_pane_cp7

0x8bc1,	// (0x0005de1e) popup_note_wait_window_g1_ParamLimits

0x8bc1,	// (0x0005de1e) popup_note_wait_window_g1

0x8bcd,	// (0x0005de2a) popup_note_wait_window_g2_ParamLimits

0x8bcd,	// (0x0005de2a) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00064aaa) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00064aaa) popup_note_wait_window_g

0x8be5,	// (0x0005de42) popup_note_wait_window_t1_ParamLimits

0x8be5,	// (0x0005de42) popup_note_wait_window_t1

0x8c0c,	// (0x0005de69) popup_note_wait_window_t2_ParamLimits

0x8c0c,	// (0x0005de69) popup_note_wait_window_t2

0x8c2a,	// (0x0005de87) popup_note_wait_window_t3_ParamLimits

0x8c2a,	// (0x0005de87) popup_note_wait_window_t3

0x8c3d,	// (0x0005de9a) popup_note_wait_window_t4_ParamLimits

0x8c3d,	// (0x0005de9a) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00064ab1) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00064ab1) popup_note_wait_window_t

0x8c62,	// (0x0005debf) wait_bar_pane_ParamLimits

0x8c62,	// (0x0005debf) wait_bar_pane

0xc231,	// (0x0006148e) wait_anim_pane

0xc231,	// (0x0006148e) wait_border_pane

0xc227,	// (0x00061484) wait_anim_pane_g1

0xc227,	// (0x00061484) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00064965) wait_anim_pane_g

0x8b35,	// (0x0005dd92) wait_border_pane_g1

0x8b40,	// (0x0005dd9d) wait_border_pane_g2

0x8b49,	// (0x0005dda6) wait_border_pane_g3

0x0002,

0xf846,	// (0x00064aa3) wait_border_pane_g

0x899f,	// (0x0005dbfc) bg_popup_window_pane_cp16_ParamLimits

0x899f,	// (0x0005dbfc) bg_popup_window_pane_cp16

0x8a9f,	// (0x0005dcfc) indicator_popup_pane_cp4_ParamLimits

0x8a9f,	// (0x0005dcfc) indicator_popup_pane_cp4

0x8ab3,	// (0x0005dd10) popup_query_data_window_t1_ParamLimits

0x8ab3,	// (0x0005dd10) popup_query_data_window_t1

0x8ac5,	// (0x0005dd22) popup_query_data_window_t2_ParamLimits

0x8ac5,	// (0x0005dd22) popup_query_data_window_t2

0x8ade,	// (0x0005dd3b) popup_query_data_window_t3_ParamLimits

0x8ade,	// (0x0005dd3b) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00064a9c) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00064a9c) popup_query_data_window_t

0x8af8,	// (0x0005dd55) query_popup_data_pane_ParamLimits

0x8af8,	// (0x0005dd55) query_popup_data_pane

0x8b0c,	// (0x0005dd69) query_popup_data_pane_cp1_ParamLimits

0x8b0c,	// (0x0005dd69) query_popup_data_pane_cp1

0x899f,	// (0x0005dbfc) bg_popup_window_pane_cp10_ParamLimits

0x899f,	// (0x0005dbfc) bg_popup_window_pane_cp10

0x89d1,	// (0x0005dc2e) indicator_popup_pane_ParamLimits

0x89d1,	// (0x0005dc2e) indicator_popup_pane

0x89f3,	// (0x0005dc50) popup_query_code_window_t1_ParamLimits

0x89f3,	// (0x0005dc50) popup_query_code_window_t1

0x8a0d,	// (0x0005dc6a) popup_query_code_window_t2_ParamLimits

0x8a0d,	// (0x0005dc6a) popup_query_code_window_t2

0x8a56,	// (0x0005dcb3) popup_query_code_window_t3_ParamLimits

0x8a56,	// (0x0005dcb3) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00064a95) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00064a95) popup_query_code_window_t

0x8a85,	// (0x0005dce2) query_popup_pane_ParamLimits

0x8a85,	// (0x0005dce2) query_popup_pane

0xc474,	// (0x000616d1) bg_popup_window_pane_cp15_ParamLimits

0xc474,	// (0x000616d1) bg_popup_window_pane_cp15

0xc494,	// (0x000616f1) indicator_popup_pane_cp1_ParamLimits

0xc494,	// (0x000616f1) indicator_popup_pane_cp1

0xc4a7,	// (0x00061704) indicator_popup_pane_cp2_ParamLimits

0xc4a7,	// (0x00061704) indicator_popup_pane_cp2

0xc4c2,	// (0x0006171f) popup_query_data_code_window_g1_ParamLimits

0xc4c2,	// (0x0006171f) popup_query_data_code_window_g1

0xc4d5,	// (0x00061732) popup_query_data_code_window_t1_ParamLimits

0xc4d5,	// (0x00061732) popup_query_data_code_window_t1

0xc4e7,	// (0x00061744) popup_query_data_code_window_t2_ParamLimits

0xc4e7,	// (0x00061744) popup_query_data_code_window_t2

0xc4f9,	// (0x00061756) popup_query_data_code_window_t3_ParamLimits

0xc4f9,	// (0x00061756) popup_query_data_code_window_t3

0xc50f,	// (0x0006176c) popup_query_data_code_window_t4_ParamLimits

0xc50f,	// (0x0006176c) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000647e7) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000647e7) popup_query_data_code_window_t

0x67e6,	// (0x0005ba43) list_single_midp_graphic_pane_g3

0xc529,	// (0x00061786) query_popup_data_pane_cp2_ParamLimits

0xc53c,	// (0x00061799) query_popup_pane_cp2_ParamLimits

0xc53c,	// (0x00061799) query_popup_pane_cp2

0xc231,	// (0x0006148e) bg_popup_window_pane_cp11

0x8997,	// (0x0005dbf4) heading_pane_cp5

0xc5d2,	// (0x0006182f) listscroll_popup_info_pane

0xc231,	// (0x0006148e) input_focus_pane_cp3

0xc557,	// (0x000617b4) query_popup_pane_t1

0xc565,	// (0x000617c2) list_popup_info_pane_ParamLimits

0xc565,	// (0x000617c2) list_popup_info_pane

0xc574,	// (0x000617d1) listscroll_popup_info_pane_g1

0xc57c,	// (0x000617d9) scroll_pane_cp7

0xc586,	// (0x000617e3) popup_info_list_pane_t1_ParamLimits

0xc586,	// (0x000617e3) popup_info_list_pane_t1

0xc5a0,	// (0x000617fd) popup_info_list_pane_t2_ParamLimits

0xc5a0,	// (0x000617fd) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000647f0) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000647f0) popup_info_list_pane_t

0xc231,	// (0x0006148e) bg_popup_window_pane_cp12

0x9db6,	// (0x0005f013) find_popup_pane

0xc28b,	// (0x000614e8) bg_popup_window_pane_cp3

0xc5ba,	// (0x00061817) heading_pane_cp3

0xc5c6,	// (0x00061823) listscroll_popup_graphic_pane

0xc231,	// (0x0006148e) bg_popup_window_pane_cp4

0x50e5,	// (0x0005a342) heading_pane_cp4

0xc5d2,	// (0x0006182f) listscroll_popup_colour_pane

0x50ef,	// (0x0005a34c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x50ef,	// (0x0005a34c) cell_large_graphic_colour_none_popup_pane

0x5103,	// (0x0005a360) grid_large_graphic_colour_popup_pane_ParamLimits

0x5103,	// (0x0005a360) grid_large_graphic_colour_popup_pane

0x512f,	// (0x0005a38c) listscroll_popup_colour_pane_g1_ParamLimits

0x512f,	// (0x0005a38c) listscroll_popup_colour_pane_g1

0x5146,	// (0x0005a3a3) listscroll_popup_colour_pane_g2_ParamLimits

0x5146,	// (0x0005a3a3) listscroll_popup_colour_pane_g2

0x515d,	// (0x0005a3ba) listscroll_popup_colour_pane_g3_ParamLimits

0x515d,	// (0x0005a3ba) listscroll_popup_colour_pane_g3

0x516d,	// (0x0005a3ca) listscroll_popup_colour_pane_g4_ParamLimits

0x516d,	// (0x0005a3ca) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000647f5) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000647f5) listscroll_popup_colour_pane_g

0xc5da,	// (0x00061837) scroll_pane_cp6_ParamLimits

0xc5da,	// (0x00061837) scroll_pane_cp6

0x5181,	// (0x0005a3de) cell_large_graphic_colour_popup_pane_ParamLimits

0x5181,	// (0x0005a3de) cell_large_graphic_colour_popup_pane

0xc5ec,	// (0x00061849) cell_large_graphic_colour_none_popup_pane_t1

0xc231,	// (0x0006148e) grid_highlight_pane_cp5

0xc5fb,	// (0x00061858) cell_large_graphic_colour_popup_pane_g1

0xc603,	// (0x00061860) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000647fe) cell_large_graphic_colour_popup_pane_g

0xc60b,	// (0x00061868) cell_large_graphic_colour_popup_pane_g2_copy1

0xc614,	// (0x00061871) grid_highlight_pane_cp4

0xc61c,	// (0x00061879) bg_popup_window_pane_cp8_ParamLimits

0xc61c,	// (0x00061879) bg_popup_window_pane_cp8

0xc637,	// (0x00061894) popup_snote_single_text_window_g1_ParamLimits

0xc637,	// (0x00061894) popup_snote_single_text_window_g1

0xc649,	// (0x000618a6) popup_snote_single_text_window_t1_ParamLimits

0xc649,	// (0x000618a6) popup_snote_single_text_window_t1

0xc65c,	// (0x000618b9) popup_snote_single_text_window_t2_ParamLimits

0xc65c,	// (0x000618b9) popup_snote_single_text_window_t2

0xc66f,	// (0x000618cc) popup_snote_single_text_window_t3_ParamLimits

0xc66f,	// (0x000618cc) popup_snote_single_text_window_t3

0xc6a8,	// (0x00061905) popup_snote_single_text_window_t4_ParamLimits

0xc6a8,	// (0x00061905) popup_snote_single_text_window_t4

0xc6dc,	// (0x00061939) popup_snote_single_text_window_t5_ParamLimits

0xc6dc,	// (0x00061939) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00064803) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00064803) popup_snote_single_text_window_t

0xc70b,	// (0x00061968) bg_popup_window_pane_cp9_ParamLimits

0xc70b,	// (0x00061968) bg_popup_window_pane_cp9

0xc637,	// (0x00061894) popup_snote_single_graphic_window_g1_ParamLimits

0xc637,	// (0x00061894) popup_snote_single_graphic_window_g1

0xc719,	// (0x00061976) popup_snote_single_graphic_window_g2_ParamLimits

0xc719,	// (0x00061976) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0006480e) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0006480e) popup_snote_single_graphic_window_g

0xc725,	// (0x00061982) popup_snote_single_graphic_window_t1_ParamLimits

0xc725,	// (0x00061982) popup_snote_single_graphic_window_t1

0xc738,	// (0x00061995) popup_snote_single_graphic_window_t2_ParamLimits

0xc738,	// (0x00061995) popup_snote_single_graphic_window_t2

0xc74b,	// (0x000619a8) popup_snote_single_graphic_window_t3_ParamLimits

0xc74b,	// (0x000619a8) popup_snote_single_graphic_window_t3

0xc784,	// (0x000619e1) popup_snote_single_graphic_window_t4_ParamLimits

0xc784,	// (0x000619e1) popup_snote_single_graphic_window_t4

0xc7b8,	// (0x00061a15) popup_snote_single_graphic_window_t5_ParamLimits

0xc7b8,	// (0x00061a15) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00064813) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00064813) popup_snote_single_graphic_window_t

0x9cf4,	// (0x0005ef51) grid_graphic_popup_pane_ParamLimits

0x9cf4,	// (0x0005ef51) grid_graphic_popup_pane

0x9d22,	// (0x0005ef7f) listscroll_popup_graphic_pane_g1_ParamLimits

0x9d22,	// (0x0005ef7f) listscroll_popup_graphic_pane_g1

0x9d36,	// (0x0005ef93) listscroll_popup_graphic_pane_g2_ParamLimits

0x9d36,	// (0x0005ef93) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00064c12) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00064c12) listscroll_popup_graphic_pane_g

0x9d4a,	// (0x0005efa7) scroll_pane_cp5

0x9c9c,	// (0x0005eef9) cell_graphic_popup_pane_ParamLimits

0x9c9c,	// (0x0005eef9) cell_graphic_popup_pane

0x9c7d,	// (0x0005eeda) cell_graphic_popup_pane_g1

0x9c85,	// (0x0005eee2) cell_graphic_popup_pane_g2

0xc60b,	// (0x00061868) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00064c0b) cell_graphic_popup_pane_g

0x9c8e,	// (0x0005eeeb) cell_graphic_popup_pane_t2

0xc614,	// (0x00061871) grid_highlight_pane_cp3

0xc7f9,	// (0x00061a56) list_gen_pane_ParamLimits

0xc7f9,	// (0x00061a56) list_gen_pane

0xc821,	// (0x00061a7e) scroll_pane

0x9bd5,	// (0x0005ee32) bg_list_pane_g1_ParamLimits

0x9bd5,	// (0x0005ee32) bg_list_pane_g1

0x9bf2,	// (0x0005ee4f) bg_list_pane_g2_ParamLimits

0x9bf2,	// (0x0005ee4f) bg_list_pane_g2

0x9c07,	// (0x0005ee64) bg_list_pane_g3_ParamLimits

0x9c07,	// (0x0005ee64) bg_list_pane_g3

0x9c1b,	// (0x0005ee78) bg_list_pane_g4_ParamLimits

0x9c1b,	// (0x0005ee78) bg_list_pane_g4

0x9c2f,	// (0x0005ee8c) bg_list_pane_g5_ParamLimits

0x9c2f,	// (0x0005ee8c) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00064c00) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00064c00) bg_list_pane_g

0x9b04,	// (0x0005ed61) list_double2_graphic_large_graphic_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double2_graphic_large_graphic_pane

0x9b04,	// (0x0005ed61) list_double2_graphic_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double2_graphic_pane

0x9b04,	// (0x0005ed61) list_double2_large_graphic_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double2_large_graphic_pane

0x9b04,	// (0x0005ed61) list_double2_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double2_pane

0x9b04,	// (0x0005ed61) list_double_graphic_heading_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double_graphic_heading_pane

0x9b04,	// (0x0005ed61) list_double_graphic_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double_graphic_pane

0x9b04,	// (0x0005ed61) list_double_heading_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double_heading_pane

0x9b04,	// (0x0005ed61) list_double_large_graphic_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double_large_graphic_pane

0x9b04,	// (0x0005ed61) list_double_number_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double_number_pane

0x9b04,	// (0x0005ed61) list_double_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double_pane

0x9b04,	// (0x0005ed61) list_double_time_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_double_time_pane

0x9b04,	// (0x0005ed61) list_setting_number_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_setting_number_pane

0x9b04,	// (0x0005ed61) list_setting_pane_ParamLimits

0x9b04,	// (0x0005ed61) list_setting_pane

0x9b65,	// (0x0005edc2) list_single_2graphic_pane_ParamLimits

0x9b65,	// (0x0005edc2) list_single_2graphic_pane

0x9b65,	// (0x0005edc2) list_single_graphic_heading_pane_ParamLimits

0x9b65,	// (0x0005edc2) list_single_graphic_heading_pane

0x9b65,	// (0x0005edc2) list_single_graphic_pane_ParamLimits

0x9b65,	// (0x0005edc2) list_single_graphic_pane

0x9b65,	// (0x0005edc2) list_single_heading_pane_ParamLimits

0x9b65,	// (0x0005edc2) list_single_heading_pane

0x9bbd,	// (0x0005ee1a) list_single_large_graphic_pane_ParamLimits

0x9bbd,	// (0x0005ee1a) list_single_large_graphic_pane

0x9b65,	// (0x0005edc2) list_single_number_heading_pane_ParamLimits

0x9b65,	// (0x0005edc2) list_single_number_heading_pane

0x9b65,	// (0x0005edc2) list_single_number_pane_ParamLimits

0x9b65,	// (0x0005edc2) list_single_number_pane

0x9b65,	// (0x0005edc2) list_single_pane_ParamLimits

0x9b65,	// (0x0005edc2) list_single_pane

0xc231,	// (0x0006148e) list_highlight_pane_cp1

0x1a89,	// (0x00056ce6) list_single_pane_g1_ParamLimits

0x1a89,	// (0x00056ce6) list_single_pane_g1

0x51bc,	// (0x0005a419) list_single_pane_g2_ParamLimits

0x51bc,	// (0x0005a419) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006482f) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006482f) list_single_pane_g

0x6bb7,	// (0x0005be14) list_single_pane_t1_ParamLimits

0x6bb7,	// (0x0005be14) list_single_pane_t1

0x1a89,	// (0x00056ce6) list_single_number_pane_g1_ParamLimits

0x1a89,	// (0x00056ce6) list_single_number_pane_g1

0x51bc,	// (0x0005a419) list_single_number_pane_g2_ParamLimits

0x51bc,	// (0x0005a419) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006482f) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006482f) list_single_number_pane_g

0x6ae1,	// (0x0005bd3e) list_single_number_pane_t1_ParamLimits

0x6ae1,	// (0x0005bd3e) list_single_number_pane_t1

0x6af7,	// (0x0005bd54) list_single_number_pane_t2_ParamLimits

0x6af7,	// (0x0005bd54) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00064bc1) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00064bc1) list_single_number_pane_t

0x51b0,	// (0x0005a40d) list_single_graphic_pane_g1_ParamLimits

0x51b0,	// (0x0005a40d) list_single_graphic_pane_g1

0x1a89,	// (0x00056ce6) list_single_graphic_pane_g2_ParamLimits

0x1a89,	// (0x00056ce6) list_single_graphic_pane_g2

0x51bc,	// (0x0005a419) list_single_graphic_pane_g3_ParamLimits

0x51bc,	// (0x0005a419) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0006481e) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0006481e) list_single_graphic_pane_g

0x51c8,	// (0x0005a425) list_single_graphic_pane_t1_ParamLimits

0x51c8,	// (0x0005a425) list_single_graphic_pane_t1

0x51de,	// (0x0005a43b) list_single_heading_pane_g1_ParamLimits

0x51de,	// (0x0005a43b) list_single_heading_pane_g1

0x51bc,	// (0x0005a419) list_single_heading_pane_g2_ParamLimits

0x51bc,	// (0x0005a419) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00064825) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00064825) list_single_heading_pane_g

0x51f1,	// (0x0005a44e) list_single_heading_pane_t1_ParamLimits

0x51f1,	// (0x0005a44e) list_single_heading_pane_t1

0x5207,	// (0x0005a464) list_single_heading_pane_t2_ParamLimits

0x5207,	// (0x0005a464) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0006482a) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0006482a) list_single_heading_pane_t

0x1a89,	// (0x00056ce6) list_single_number_heading_pane_g1_ParamLimits

0x1a89,	// (0x00056ce6) list_single_number_heading_pane_g1

0x51bc,	// (0x0005a419) list_single_number_heading_pane_g2_ParamLimits

0x51bc,	// (0x0005a419) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006482f) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006482f) list_single_number_heading_pane_g

0x5219,	// (0x0005a476) list_single_number_heading_pane_t1_ParamLimits

0x5219,	// (0x0005a476) list_single_number_heading_pane_t1

0x522f,	// (0x0005a48c) list_single_number_heading_pane_t2_ParamLimits

0x522f,	// (0x0005a48c) list_single_number_heading_pane_t2

0x5241,	// (0x0005a49e) list_single_number_heading_pane_t3_ParamLimits

0x5241,	// (0x0005a49e) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00064834) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00064834) list_single_number_heading_pane_t

0x5253,	// (0x0005a4b0) list_single_graphic_heading_pane_g1_ParamLimits

0x5253,	// (0x0005a4b0) list_single_graphic_heading_pane_g1

0x526b,	// (0x0005a4c8) list_single_graphic_heading_pane_g4_ParamLimits

0x526b,	// (0x0005a4c8) list_single_graphic_heading_pane_g4

0x51bc,	// (0x0005a419) list_single_graphic_heading_pane_g5_ParamLimits

0x51bc,	// (0x0005a419) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0006483b) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0006483b) list_single_graphic_heading_pane_g

0x5219,	// (0x0005a476) list_single_graphic_heading_pane_t1_ParamLimits

0x5219,	// (0x0005a476) list_single_graphic_heading_pane_t1

0x527c,	// (0x0005a4d9) list_single_graphic_heading_pane_t2_ParamLimits

0x527c,	// (0x0005a4d9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00064842) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00064842) list_single_graphic_heading_pane_t

0x5294,	// (0x0005a4f1) list_single_large_graphic_pane_g1_ParamLimits

0x5294,	// (0x0005a4f1) list_single_large_graphic_pane_g1

0x52a0,	// (0x0005a4fd) list_single_large_graphic_pane_g2_ParamLimits

0x52a0,	// (0x0005a4fd) list_single_large_graphic_pane_g2

0x52ac,	// (0x0005a509) list_single_large_graphic_pane_g3_ParamLimits

0x52ac,	// (0x0005a509) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00064847) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00064847) list_single_large_graphic_pane_g

0x8b40,	// (0x0005dd9d) wait_border_pane_g2_copy1

0x52b8,	// (0x0005a515) list_single_large_graphic_pane_g4_cp2

0x52c0,	// (0x0005a51d) list_single_large_graphic_pane_t1_ParamLimits

0x52c0,	// (0x0005a51d) list_single_large_graphic_pane_t1

0x52d6,	// (0x0005a533) list_double_pane_g1_ParamLimits

0x52d6,	// (0x0005a533) list_double_pane_g1

0x52e2,	// (0x0005a53f) list_double_pane_g2_ParamLimits

0x52e2,	// (0x0005a53f) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006484e) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006484e) list_double_pane_g

0x52ee,	// (0x0005a54b) list_double_pane_t1_ParamLimits

0x52ee,	// (0x0005a54b) list_double_pane_t1

0x5304,	// (0x0005a561) list_double_pane_t2_ParamLimits

0x5304,	// (0x0005a561) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00064853) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00064853) list_double_pane_t

0x5316,	// (0x0005a573) list_double2_pane_g1_ParamLimits

0x5316,	// (0x0005a573) list_double2_pane_g1

0x5327,	// (0x0005a584) list_double2_pane_g2_ParamLimits

0x5327,	// (0x0005a584) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00064858) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00064858) list_double2_pane_g

0x5333,	// (0x0005a590) list_double2_pane_t1_ParamLimits

0x5333,	// (0x0005a590) list_double2_pane_t1

0x5349,	// (0x0005a5a6) list_double2_pane_t2_ParamLimits

0x5349,	// (0x0005a5a6) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006485d) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006485d) list_double2_pane_t

0x52d6,	// (0x0005a533) list_double_number_pane_g1_ParamLimits

0x52d6,	// (0x0005a533) list_double_number_pane_g1

0x52e2,	// (0x0005a53f) list_double_number_pane_g2_ParamLimits

0x52e2,	// (0x0005a53f) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006484e) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006484e) list_double_number_pane_g

0x535b,	// (0x0005a5b8) list_double_number_pane_t1_ParamLimits

0x535b,	// (0x0005a5b8) list_double_number_pane_t1

0x536d,	// (0x0005a5ca) list_double_number_pane_t2_ParamLimits

0x536d,	// (0x0005a5ca) list_double_number_pane_t2

0x5383,	// (0x0005a5e0) list_double_number_pane_t3_ParamLimits

0x5383,	// (0x0005a5e0) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00064862) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00064862) list_double_number_pane_t

0x5395,	// (0x0005a5f2) list_double_graphic_pane_g1_ParamLimits

0x5395,	// (0x0005a5f2) list_double_graphic_pane_g1

0x53a1,	// (0x0005a5fe) list_double_graphic_pane_g2_ParamLimits

0x53a1,	// (0x0005a5fe) list_double_graphic_pane_g2

0x53b0,	// (0x0005a60d) list_double_graphic_pane_g3_ParamLimits

0x53b0,	// (0x0005a60d) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00064869) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00064869) list_double_graphic_pane_g

0x53c8,	// (0x0005a625) list_double_graphic_pane_t1_ParamLimits

0x53c8,	// (0x0005a625) list_double_graphic_pane_t1

0x53de,	// (0x0005a63b) list_double_graphic_pane_t2_ParamLimits

0x53de,	// (0x0005a63b) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00064872) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00064872) list_double_graphic_pane_t

0x3195,	// (0x000583f2) list_double2_graphic_pane_g1_ParamLimits

0x3195,	// (0x000583f2) list_double2_graphic_pane_g1

0x53f0,	// (0x0005a64d) list_double2_graphic_pane_g2_ParamLimits

0x53f0,	// (0x0005a64d) list_double2_graphic_pane_g2

0x53fc,	// (0x0005a659) list_double2_graphic_pane_g3_ParamLimits

0x53fc,	// (0x0005a659) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00064877) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00064877) list_double2_graphic_pane_g

0x5408,	// (0x0005a665) list_double2_graphic_pane_t1_ParamLimits

0x5408,	// (0x0005a665) list_double2_graphic_pane_t1

0x541e,	// (0x0005a67b) list_double2_graphic_pane_t2_ParamLimits

0x541e,	// (0x0005a67b) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0006487e) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0006487e) list_double2_graphic_pane_t

0x5430,	// (0x0005a68d) list_double_large_graphic_pane_g1_ParamLimits

0x5430,	// (0x0005a68d) list_double_large_graphic_pane_g1

0x545b,	// (0x0005a6b8) list_double_large_graphic_pane_g2_ParamLimits

0x545b,	// (0x0005a6b8) list_double_large_graphic_pane_g2

0x52e2,	// (0x0005a53f) list_double_large_graphic_pane_g3_ParamLimits

0x52e2,	// (0x0005a53f) list_double_large_graphic_pane_g3

0x5471,	// (0x0005a6ce) list_double_large_graphic_pane_g4_ParamLimits

0x5471,	// (0x0005a6ce) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00064883) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00064883) list_double_large_graphic_pane_g

0x5484,	// (0x0005a6e1) list_double_large_graphic_pane_t1_ParamLimits

0x5484,	// (0x0005a6e1) list_double_large_graphic_pane_t1

0x549d,	// (0x0005a6fa) list_double_large_graphic_pane_t2_ParamLimits

0x549d,	// (0x0005a6fa) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006488e) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006488e) list_double_large_graphic_pane_t

0x54af,	// (0x0005a70c) list_double2_large_graphic_pane_g1_ParamLimits

0x54af,	// (0x0005a70c) list_double2_large_graphic_pane_g1

0x54bb,	// (0x0005a718) list_double2_large_graphic_pane_g2_ParamLimits

0x54bb,	// (0x0005a718) list_double2_large_graphic_pane_g2

0x53fc,	// (0x0005a659) list_double2_large_graphic_pane_g3_ParamLimits

0x53fc,	// (0x0005a659) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00064893) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00064893) list_double2_large_graphic_pane_g

0x54cc,	// (0x0005a729) list_double2_large_graphic_pane_t1_ParamLimits

0x54cc,	// (0x0005a729) list_double2_large_graphic_pane_t1

0x54e2,	// (0x0005a73f) list_double2_large_graphic_pane_t2_ParamLimits

0x54e2,	// (0x0005a73f) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0006489a) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0006489a) list_double2_large_graphic_pane_t

0x54f4,	// (0x0005a751) list_double_heading_pane_g1_ParamLimits

0x54f4,	// (0x0005a751) list_double_heading_pane_g1

0x5505,	// (0x0005a762) list_double_heading_pane_g2_ParamLimits

0x5505,	// (0x0005a762) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0006489f) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0006489f) list_double_heading_pane_g

0x5511,	// (0x0005a76e) list_double_heading_pane_t1_ParamLimits

0x5511,	// (0x0005a76e) list_double_heading_pane_t1

0x5527,	// (0x0005a784) list_double_heading_pane_t2_ParamLimits

0x5527,	// (0x0005a784) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000648a4) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000648a4) list_double_heading_pane_t

0x5395,	// (0x0005a5f2) list_double_graphic_heading_pane_g1_ParamLimits

0x5395,	// (0x0005a5f2) list_double_graphic_heading_pane_g1

0x54f4,	// (0x0005a751) list_double_graphic_heading_pane_g2_ParamLimits

0x54f4,	// (0x0005a751) list_double_graphic_heading_pane_g2

0x5505,	// (0x0005a762) list_double_graphic_heading_pane_g3_ParamLimits

0x5505,	// (0x0005a762) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000648a9) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000648a9) list_double_graphic_heading_pane_g

0x5539,	// (0x0005a796) list_double_graphic_heading_pane_t1_ParamLimits

0x5539,	// (0x0005a796) list_double_graphic_heading_pane_t1

0x554f,	// (0x0005a7ac) list_double_graphic_heading_pane_t2_ParamLimits

0x554f,	// (0x0005a7ac) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000648b0) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000648b0) list_double_graphic_heading_pane_t

0x5561,	// (0x0005a7be) list_double_time_pane_g1_ParamLimits

0x5561,	// (0x0005a7be) list_double_time_pane_g1

0x5572,	// (0x0005a7cf) list_double_time_pane_g2_ParamLimits

0x5572,	// (0x0005a7cf) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000648b5) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000648b5) list_double_time_pane_g

0x557e,	// (0x0005a7db) list_double_time_pane_t1_ParamLimits

0x557e,	// (0x0005a7db) list_double_time_pane_t1

0x5594,	// (0x0005a7f1) list_double_time_pane_t2_ParamLimits

0x5594,	// (0x0005a7f1) list_double_time_pane_t2

0x55a6,	// (0x0005a803) list_double_time_pane_t3_ParamLimits

0x55a6,	// (0x0005a803) list_double_time_pane_t3

0x55b8,	// (0x0005a815) list_double_time_pane_t4_ParamLimits

0x55b8,	// (0x0005a815) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000648ba) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000648ba) list_double_time_pane_t

0x55ca,	// (0x0005a827) list_setting_pane_g1_ParamLimits

0x55ca,	// (0x0005a827) list_setting_pane_g1

0x55d6,	// (0x0005a833) list_setting_pane_g2_ParamLimits

0x55d6,	// (0x0005a833) list_setting_pane_g2

0x0001,

0xf666,	// (0x000648c3) list_setting_pane_g_ParamLimits

0xf666,	// (0x000648c3) list_setting_pane_g

0x55e2,	// (0x0005a83f) list_setting_pane_t1_ParamLimits

0x55e2,	// (0x0005a83f) list_setting_pane_t1

0x55fc,	// (0x0005a859) list_setting_pane_t2_ParamLimits

0x55fc,	// (0x0005a859) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000648c8) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000648c8) list_setting_pane_t

0x563b,	// (0x0005a898) set_value_pane_cp_ParamLimits

0x563b,	// (0x0005a898) set_value_pane_cp

0x5649,	// (0x0005a8a6) list_setting_number_pane_g1_ParamLimits

0x5649,	// (0x0005a8a6) list_setting_number_pane_g1

0x5655,	// (0x0005a8b2) list_setting_number_pane_g2_ParamLimits

0x5655,	// (0x0005a8b2) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000648cf) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000648cf) list_setting_number_pane_g

0x5661,	// (0x0005a8be) list_setting_number_pane_t1_ParamLimits

0x5661,	// (0x0005a8be) list_setting_number_pane_t1

0x567a,	// (0x0005a8d7) list_setting_number_pane_t2_ParamLimits

0x567a,	// (0x0005a8d7) list_setting_number_pane_t2

0x5694,	// (0x0005a8f1) list_setting_number_pane_t3_ParamLimits

0x5694,	// (0x0005a8f1) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000648d4) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000648d4) list_setting_number_pane_t

0x563b,	// (0x0005a898) set_value_pane_ParamLimits

0x563b,	// (0x0005a898) set_value_pane

0xe44d,	// (0x000636aa) bg_set_opt_pane_ParamLimits

0xe44d,	// (0x000636aa) bg_set_opt_pane

0x31a1,	// (0x000583fe) set_value_pane_t1

0xe46e,	// (0x000636cb) slider_set_pane_cp3

0xe477,	// (0x000636d4) volume_small_pane_cp

0xe480,	// (0x000636dd) list_form_gen_pane

0xe489,	// (0x000636e6) scroll_pane_cp8

0x56d7,	// (0x0005a934) form_field_data_pane_ParamLimits

0x56d7,	// (0x0005a934) form_field_data_pane

0x56f7,	// (0x0005a954) form_field_data_wide_pane_ParamLimits

0x56f7,	// (0x0005a954) form_field_data_wide_pane

0x571e,	// (0x0005a97b) form_field_popup_pane_ParamLimits

0x571e,	// (0x0005a97b) form_field_popup_pane

0x31bf,	// (0x0005841c) form_field_popup_wide_pane_ParamLimits

0x31bf,	// (0x0005841c) form_field_popup_wide_pane

0x31e0,	// (0x0005843d) form_field_slider_pane_ParamLimits

0x31e0,	// (0x0005843d) form_field_slider_pane

0x31f3,	// (0x00058450) form_field_slider_wide_pane_ParamLimits

0x31f3,	// (0x00058450) form_field_slider_wide_pane

0xe49a,	// (0x000636f7) data_form_pane

0x574a,	// (0x0005a9a7) form_field_data_pane_t1

0xe4a6,	// (0x00063703) input_focus_pane

0x3206,	// (0x00058463) data_form_wide_pane

0x3223,	// (0x00058480) form_field_data_wide_pane_t1

0xc629,	// (0x00061886) input_focus_pane_cp6

0x5764,	// (0x0005a9c1) form_field_popup_pane_t1

0xe4a6,	// (0x00063703) input_focus_pane_cp7

0xe4d4,	// (0x00063731) list_form_pane

0x324d,	// (0x000584aa) form_field_popup_wide_pane_t1

0xe4a6,	// (0x00063703) input_focus_pane_cp8

0xe4e0,	// (0x0006373d) list_form_wide_pane

0x5786,	// (0x0005a9e3) form_field_slider_pane_t1_ParamLimits

0x5786,	// (0x0005a9e3) form_field_slider_pane_t1

0x579e,	// (0x0005a9fb) form_field_slider_pane_t2_ParamLimits

0x579e,	// (0x0005a9fb) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000648e4) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000648e4) form_field_slider_pane_t

0xc3be,	// (0x0006161b) input_focus_pane_cp9_ParamLimits

0xc3be,	// (0x0006161b) input_focus_pane_cp9

0x57b3,	// (0x0005aa10) slider_cont_pane_ParamLimits

0x57b3,	// (0x0005aa10) slider_cont_pane

0xe4ef,	// (0x0006374c) form_field_slider_wide_pane_t1_ParamLimits

0xe4ef,	// (0x0006374c) form_field_slider_wide_pane_t1

0x3262,	// (0x000584bf) form_field_slider_wide_pane_t2_ParamLimits

0x3262,	// (0x000584bf) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000648e9) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000648e9) form_field_slider_wide_pane_t

0xc3be,	// (0x0006161b) input_focus_pane_cp10_ParamLimits

0xc3be,	// (0x0006161b) input_focus_pane_cp10

0x57c7,	// (0x0005aa24) slider_cont_pane_cp1_ParamLimits

0x57c7,	// (0x0005aa24) slider_cont_pane_cp1

0x57db,	// (0x0005aa38) slider_form_pane_cp

0xe501,	// (0x0006375e) input_focus_pane_g1

0xe509,	// (0x00063766) input_focus_pane_g2

0xe511,	// (0x0006376e) input_focus_pane_g3

0xe519,	// (0x00063776) input_focus_pane_g4

0xe521,	// (0x0006377e) input_focus_pane_g5

0xe529,	// (0x00063786) input_focus_pane_g6

0xe531,	// (0x0006378e) input_focus_pane_g7

0xe539,	// (0x00063796) input_focus_pane_g8

0xe541,	// (0x0006379e) input_focus_pane_g9

0xc227,	// (0x00061484) input_focus_pane_g10

0x0009,

0xf691,	// (0x000648ee) input_focus_pane_g

0x8b49,	// (0x0005dda6) wait_border_pane_g3_copy1

0x57e3,	// (0x0005aa40) data_form_pane_t1

0xc227,	// (0x00061484) wait_anim_pane_g1_copy1

0x6b81,	// (0x0005bdde) data_form_wide_pane_t1

0x3274,	// (0x000584d1) list_form_graphic_pane_cp_ParamLimits

0x3274,	// (0x000584d1) list_form_graphic_pane_cp

0x9aa8,	// (0x0005ed05) slider_form_pane_g1

0x9ab1,	// (0x0005ed0e) slider_form_pane_g2

0x0006,

0xf994,	// (0x00064bf1) slider_form_pane_g

0x3274,	// (0x000584d1) list_form_graphic_pane_ParamLimits

0x3274,	// (0x000584d1) list_form_graphic_pane

0x3286,	// (0x000584e3) list_form_graphic_pane_g1

0x328e,	// (0x000584eb) list_form_graphic_pane_t1_ParamLimits

0x328e,	// (0x000584eb) list_form_graphic_pane_t1

0xc28b,	// (0x000614e8) list_highlight_pane_cp5_ParamLimits

0xc28b,	// (0x000614e8) list_highlight_pane_cp5

0x5802,	// (0x0005aa5f) find_pane_g1

0xe549,	// (0x000637a6) input_find_pane

0x580b,	// (0x0005aa68) input_find_pane_g1_ParamLimits

0x580b,	// (0x0005aa68) input_find_pane_g1

0x5817,	// (0x0005aa74) input_find_pane_t1_ParamLimits

0x5817,	// (0x0005aa74) input_find_pane_t1

0x582c,	// (0x0005aa89) input_find_pane_t2_ParamLimits

0x582c,	// (0x0005aa89) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00064903) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00064903) input_find_pane_t

0xe552,	// (0x000637af) input_focus_pane_cp5_ParamLimits

0xe552,	// (0x000637af) input_focus_pane_cp5

0xe560,	// (0x000637bd) bg_popup_window_pane_cp2_ParamLimits

0xe560,	// (0x000637bd) bg_popup_window_pane_cp2

0xe56d,	// (0x000637ca) listscroll_menu_pane_ParamLimits

0xe56d,	// (0x000637ca) listscroll_menu_pane

0x584d,	// (0x0005aaaa) popup_submenu_window_ParamLimits

0x584d,	// (0x0005aaaa) popup_submenu_window

0xe579,	// (0x000637d6) find_popup_pane_g1

0xe581,	// (0x000637de) input_popup_find_pane_cp

0xe552,	// (0x000637af) input_focus_pane_cp4_ParamLimits

0xe552,	// (0x000637af) input_focus_pane_cp4

0xe58b,	// (0x000637e8) input_popup_find_pane_t1_ParamLimits

0xe58b,	// (0x000637e8) input_popup_find_pane_t1

0xc231,	// (0x0006148e) bg_popup_sub_pane_cp

0xe5b9,	// (0x00063816) listscroll_popup_sub_pane

0xe5c1,	// (0x0006381e) list_submenu_pane_ParamLimits

0xe5c1,	// (0x0006381e) list_submenu_pane

0xe5d2,	// (0x0006382f) scroll_pane_cp4

0xe5da,	// (0x00063837) list_single_popup_submenu_pane_ParamLimits

0xe5da,	// (0x00063837) list_single_popup_submenu_pane

0xe5ef,	// (0x0006384c) list_single_popup_submenu_pane_g1

0xe5f7,	// (0x00063854) list_single_popup_submenu_pane_t1_ParamLimits

0xe5f7,	// (0x00063854) list_single_popup_submenu_pane_t1

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp1_ParamLimits

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp1

0x588b,	// (0x0005aae8) tabs_2_active_pane_g1

0x5893,	// (0x0005aaf0) tabs_2_active_pane_t1

0xc28b,	// (0x000614e8) bg_passive_tab_pane_cp1_ParamLimits

0xc28b,	// (0x000614e8) bg_passive_tab_pane_cp1

0x588b,	// (0x0005aae8) tabs_2_passive_pane_g1

0x5893,	// (0x0005aaf0) tabs_2_passive_pane_t1

0x1702,	// (0x0005695f) bg_active_tab_pane_cp4

0x58a5,	// (0x0005ab02) tabs_2_long_active_pane_t1

0x58b8,	// (0x0005ab15) bg_passive_tab_pane_cp4

0x67ee,	// (0x0005ba4b) list_single_midp_graphic_pane_g4_ParamLimits

0x1702,	// (0x0005695f) bg_active_tab_pane_cp5

0x58c4,	// (0x0005ab21) tabs_3_long_active_pane_t1

0x58b8,	// (0x0005ab15) bg_passive_tab_pane_cp5

0x67ee,	// (0x0005ba4b) list_single_midp_graphic_pane_g4

0xc28b,	// (0x000614e8) bg_popup_window_pane_cp13_ParamLimits

0xc28b,	// (0x000614e8) bg_popup_window_pane_cp13

0xe615,	// (0x00063872) listscroll_popup_fast_pane_ParamLimits

0xe615,	// (0x00063872) listscroll_popup_fast_pane

0xe624,	// (0x00063881) grid_popup_fast_pane_ParamLimits

0xe624,	// (0x00063881) grid_popup_fast_pane

0xe636,	// (0x00063893) scroll_pane_cp9_ParamLimits

0xe636,	// (0x00063893) scroll_pane_cp9

0xb5f6,	// (0x00060853) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb5f6,	// (0x00060853) list_single_graphic_hl_pane_t1_cp2

0xedea,	// (0x00064047) input_focus_pane_cp20_ParamLimits

0xedea,	// (0x00064047) input_focus_pane_cp20

0xedf8,	// (0x00064055) query_popup_data_pane_t1_ParamLimits

0xedf8,	// (0x00064055) query_popup_data_pane_t1

0xee0b,	// (0x00064068) query_popup_data_pane_t2_ParamLimits

0xee0b,	// (0x00064068) query_popup_data_pane_t2

0xee51,	// (0x000640ae) query_popup_data_pane_t3_ParamLimits

0xee51,	// (0x000640ae) query_popup_data_pane_t3

0xee92,	// (0x000640ef) query_popup_data_pane_t4_ParamLimits

0xee92,	// (0x000640ef) query_popup_data_pane_t4

0xeece,	// (0x0006412b) query_popup_data_pane_t5_ParamLimits

0xeece,	// (0x0006412b) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00064908) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00064908) query_popup_data_pane_t

0xe501,	// (0x0006375e) bg_set_opt_pane_g1

0xe509,	// (0x00063766) bg_set_opt_pane_g2

0xe511,	// (0x0006376e) bg_set_opt_pane_g3

0xe519,	// (0x00063776) bg_set_opt_pane_g4

0xe521,	// (0x0006377e) bg_set_opt_pane_g5

0xe529,	// (0x00063786) bg_set_opt_pane_g6

0xe531,	// (0x0006378e) bg_set_opt_pane_g7

0xe539,	// (0x00063796) bg_set_opt_pane_g8

0xe541,	// (0x0006379e) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00064913) bg_set_opt_pane_g

0x5dc4,	// (0x0005b021) control_top_pane_stacon_ParamLimits

0x5dc4,	// (0x0005b021) control_top_pane_stacon

0x5e17,	// (0x0005b074) signal_pane_stacon_ParamLimits

0x5e17,	// (0x0005b074) signal_pane_stacon

0xf2e5,	// (0x00064542) stacon_top_pane_g1_ParamLimits

0xf2e5,	// (0x00064542) stacon_top_pane_g1

0x5e3c,	// (0x0005b099) title_pane_stacon_ParamLimits

0x5e3c,	// (0x0005b099) title_pane_stacon

0x5e66,	// (0x0005b0c3) uni_indicator_pane_stacon_ParamLimits

0x5e66,	// (0x0005b0c3) uni_indicator_pane_stacon

0x5e7e,	// (0x0005b0db) battery_pane_stacon_ParamLimits

0x5e7e,	// (0x0005b0db) battery_pane_stacon

0x5ec2,	// (0x0005b11f) control_bottom_pane_stacon_ParamLimits

0x5ec2,	// (0x0005b11f) control_bottom_pane_stacon

0x5ee5,	// (0x0005b142) navi_pane_stacon_ParamLimits

0x5ee5,	// (0x0005b142) navi_pane_stacon

0xf307,	// (0x00064564) stacon_bottom_pane_g1_ParamLimits

0xf307,	// (0x00064564) stacon_bottom_pane_g1

0x58d6,	// (0x0005ab33) aid_levels_signal_lsc_ParamLimits

0x58d6,	// (0x0005ab33) aid_levels_signal_lsc

0x58ed,	// (0x0005ab4a) signal_pane_stacon_g1_ParamLimits

0x58ed,	// (0x0005ab4a) signal_pane_stacon_g1

0x5901,	// (0x0005ab5e) signal_pane_stacon_g2_ParamLimits

0x5901,	// (0x0005ab5e) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00064926) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00064926) signal_pane_stacon_g

0x5936,	// (0x0005ab93) title_pane_stacon_t1_ParamLimits

0x5936,	// (0x0005ab93) title_pane_stacon_t1

0xef12,	// (0x0006416f) uni_indicator_pane_stacon_g1

0xef1c,	// (0x00064179) uni_indicator_pane_stacon_g2

0xef26,	// (0x00064183) uni_indicator_pane_stacon_g3

0xef30,	// (0x0006418d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00064932) uni_indicator_pane_stacon_g

0x595b,	// (0x0005abb8) control_top_pane_stacon_g1

0x5963,	// (0x0005abc0) control_top_pane_stacon_t1_ParamLimits

0x5963,	// (0x0005abc0) control_top_pane_stacon_t1

0x599a,	// (0x0005abf7) aid_levels_battery_lsc_ParamLimits

0x599a,	// (0x0005abf7) aid_levels_battery_lsc

0x59b2,	// (0x0005ac0f) battery_pane_stacon_g1_ParamLimits

0x59b2,	// (0x0005ac0f) battery_pane_stacon_g1

0x59c5,	// (0x0005ac22) battery_pane_stacon_g2_ParamLimits

0x59c5,	// (0x0005ac22) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0006493b) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0006493b) battery_pane_stacon_g

0x5a03,	// (0x0005ac60) navi_icon_pane_stacon

0x5a17,	// (0x0005ac74) navi_navi_pane_stacon

0x5a03,	// (0x0005ac60) navi_text_pane_stacon

0x595b,	// (0x0005abb8) control_bottom_pane_stacon_g1

0x5a2d,	// (0x0005ac8a) control_bottom_pane_stacon_t1_ParamLimits

0x5a2d,	// (0x0005ac8a) control_bottom_pane_stacon_t1

0x5a64,	// (0x0005acc1) grid_app_pane_ParamLimits

0x5a64,	// (0x0005acc1) grid_app_pane

0x5a88,	// (0x0005ace5) scroll_pane_cp15_ParamLimits

0x5a88,	// (0x0005ace5) scroll_pane_cp15

0x5a9b,	// (0x0005acf8) cell_app_pane_ParamLimits

0x5a9b,	// (0x0005acf8) cell_app_pane

0x5ac7,	// (0x0005ad24) cell_app_pane_g1_ParamLimits

0x5ac7,	// (0x0005ad24) cell_app_pane_g1

0xef54,	// (0x000641b1) cell_app_pane_g2_ParamLimits

0xef54,	// (0x000641b1) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00064940) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00064940) cell_app_pane_g

0xef60,	// (0x000641bd) cell_app_pane_t1_ParamLimits

0xef60,	// (0x000641bd) cell_app_pane_t1

0xef77,	// (0x000641d4) grid_highlight_pane_ParamLimits

0xef77,	// (0x000641d4) grid_highlight_pane

0xe501,	// (0x0006375e) cell_highlight_pane_g1

0xe509,	// (0x00063766) cell_highlight_pane_g2

0xe511,	// (0x0006376e) cell_highlight_pane_g3

0xe519,	// (0x00063776) cell_highlight_pane_g4

0xe521,	// (0x0006377e) cell_highlight_pane_g5

0xe529,	// (0x00063786) cell_highlight_pane_g6

0xe531,	// (0x0006378e) cell_highlight_pane_g7

0xe539,	// (0x00063796) cell_highlight_pane_g8

0xe541,	// (0x0006379e) cell_highlight_pane_g9

0xc227,	// (0x00061484) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000648ee) cell_highlight_pane_g

0xef88,	// (0x000641e5) bg_scroll_pane

0x5afa,	// (0x0005ad57) scroll_handle_pane

0xefcf,	// (0x0006422c) scroll_bg_pane_g1

0xefe4,	// (0x00064241) scroll_bg_pane_g2

0xeffc,	// (0x00064259) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00064945) scroll_bg_pane_g

0xf011,	// (0x0006426e) scroll_handle_focus_pane_ParamLimits

0xf011,	// (0x0006426e) scroll_handle_focus_pane

0xefcf,	// (0x0006422c) scroll_handle_pane_g1

0xf01e,	// (0x0006427b) scroll_handle_pane_g2

0xeffc,	// (0x00064259) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0006494c) scroll_handle_pane_g

0xe552,	// (0x000637af) bg_popup_sub_pane_cp21_ParamLimits

0xe552,	// (0x000637af) bg_popup_sub_pane_cp21

0xf032,	// (0x0006428f) popup_fep_japan_predictive_window_t1_ParamLimits

0xf032,	// (0x0006428f) popup_fep_japan_predictive_window_t1

0xf049,	// (0x000642a6) popup_fep_japan_predictive_window_t2_ParamLimits

0xf049,	// (0x000642a6) popup_fep_japan_predictive_window_t2

0xf07c,	// (0x000642d9) popup_fep_japan_predictive_window_t3_ParamLimits

0xf07c,	// (0x000642d9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00064953) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00064953) popup_fep_japan_predictive_window_t

0xc231,	// (0x0006148e) bg_popup_sub_pane_cp23

0xf0b3,	// (0x00064310) listscroll_japin_cand_pane

0xf0bb,	// (0x00064318) popup_fep_japan_candidate_window_t1

0xf0c9,	// (0x00064326) candidate_pane_ParamLimits

0xf0c9,	// (0x00064326) candidate_pane

0xf0db,	// (0x00064338) scroll_pane_cp30

0xf0e5,	// (0x00064342) list_single_popup_jap_candidate_pane_ParamLimits

0xf0e5,	// (0x00064342) list_single_popup_jap_candidate_pane

0xc231,	// (0x0006148e) list_highlight_pane_cp30

0xf0f9,	// (0x00064356) list_single_popup_jap_candidate_pane_t1

0x5b23,	// (0x0005ad80) level_1_signal

0x5b30,	// (0x0005ad8d) level_2_signal

0x5b3d,	// (0x0005ad9a) level_3_signal

0x5b4a,	// (0x0005ada7) level_4_signal

0x5b57,	// (0x0005adb4) level_5_signal

0x5b64,	// (0x0005adc1) level_6_signal

0x5b71,	// (0x0005adce) level_7_signal

0x5b23,	// (0x0005ad80) level_1_battery

0x5b30,	// (0x0005ad8d) level_2_battery

0x5b3d,	// (0x0005ad9a) level_3_battery

0x5b4a,	// (0x0005ada7) level_4_battery

0x5b57,	// (0x0005adb4) level_5_battery

0x5b64,	// (0x0005adc1) level_6_battery

0x5b71,	// (0x0005adce) level_7_battery

0xf120,	// (0x0006437d) list_menu_pane_ParamLimits

0xf120,	// (0x0006437d) list_menu_pane

0xf136,	// (0x00064393) scroll_pane_cp25_ParamLimits

0xf136,	// (0x00064393) scroll_pane_cp25

0xf14f,	// (0x000643ac) list_double2_graphic_pane_cp2_ParamLimits

0xf14f,	// (0x000643ac) list_double2_graphic_pane_cp2

0xf14f,	// (0x000643ac) list_double2_large_graphic_pane_cp2_ParamLimits

0xf14f,	// (0x000643ac) list_double2_large_graphic_pane_cp2

0xf14f,	// (0x000643ac) list_double2_pane_cp2_ParamLimits

0xf14f,	// (0x000643ac) list_double2_pane_cp2

0xf14f,	// (0x000643ac) list_double_graphic_pane_cp2_ParamLimits

0xf14f,	// (0x000643ac) list_double_graphic_pane_cp2

0xf14f,	// (0x000643ac) list_double_large_graphic_pane_cp2_ParamLimits

0xf14f,	// (0x000643ac) list_double_large_graphic_pane_cp2

0xf14f,	// (0x000643ac) list_double_number_pane_cp2_ParamLimits

0xf14f,	// (0x000643ac) list_double_number_pane_cp2

0xf14f,	// (0x000643ac) list_double_pane_cp2_ParamLimits

0xf14f,	// (0x000643ac) list_double_pane_cp2

0x5bb3,	// (0x0005ae10) list_single_2graphic_pane_cp2_ParamLimits

0x5bb3,	// (0x0005ae10) list_single_2graphic_pane_cp2

0x5bb3,	// (0x0005ae10) list_single_graphic_heading_pane_cp2_ParamLimits

0x5bb3,	// (0x0005ae10) list_single_graphic_heading_pane_cp2

0x5bb3,	// (0x0005ae10) list_single_graphic_pane_cp2_ParamLimits

0x5bb3,	// (0x0005ae10) list_single_graphic_pane_cp2

0x5bb3,	// (0x0005ae10) list_single_heading_pane_cp2_ParamLimits

0x5bb3,	// (0x0005ae10) list_single_heading_pane_cp2

0xf15f,	// (0x000643bc) list_single_large_graphic_pane_cp2_ParamLimits

0xf15f,	// (0x000643bc) list_single_large_graphic_pane_cp2

0x5bb3,	// (0x0005ae10) list_single_number_heading_pane_cp2_ParamLimits

0x5bb3,	// (0x0005ae10) list_single_number_heading_pane_cp2

0x5bb3,	// (0x0005ae10) list_single_number_pane_cp2_ParamLimits

0x5bb3,	// (0x0005ae10) list_single_number_pane_cp2

0x5bb3,	// (0x0005ae10) list_single_pane_cp2_ParamLimits

0x5bb3,	// (0x0005ae10) list_single_pane_cp2

0xf178,	// (0x000643d5) bg_popup_sub_pane_cp22

0x5c9c,	// (0x0005aef9) popup_side_volume_key_window_g1

0x5cc6,	// (0x0005af23) popup_side_volume_key_window_t1

0x5ce4,	// (0x0005af41) volume_small_pane_cp1

0xc3be,	// (0x0006161b) bg_popup_sub_pane_cp24_ParamLimits

0xc3be,	// (0x0006161b) bg_popup_sub_pane_cp24

0xf18e,	// (0x000643eb) fep_china_uni_candidate_pane_ParamLimits

0xf18e,	// (0x000643eb) fep_china_uni_candidate_pane

0xf1a2,	// (0x000643ff) fep_china_uni_entry_pane

0xf1b2,	// (0x0006440f) popup_fep_china_uni_window_g1

0xf1ce,	// (0x0006442b) fep_china_uni_entry_pane_g1

0xf1d8,	// (0x00064435) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00064984) fep_china_uni_entry_pane_g

0xf1e2,	// (0x0006443f) fep_entry_item_pane

0xf1ec,	// (0x00064449) fep_candidate_item_pane

0xf1f4,	// (0x00064451) fep_china_uni_candidate_pane_g1

0xf1fe,	// (0x0006445b) fep_china_uni_candidate_pane_g2

0xf206,	// (0x00064463) fep_china_uni_candidate_pane_g3

0xf20e,	// (0x0006446b) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00064989) fep_china_uni_candidate_pane_g

0xc227,	// (0x00061484) fep_entry_item_pane_g1

0xf218,	// (0x00064475) fep_entry_item_pane_t1_ParamLimits

0xf218,	// (0x00064475) fep_entry_item_pane_t1

0xf22e,	// (0x0006448b) fep_candidate_item_pane_t1_ParamLimits

0xf22e,	// (0x0006448b) fep_candidate_item_pane_t1

0xf243,	// (0x000644a0) fep_candidate_item_pane_t2_ParamLimits

0xf243,	// (0x000644a0) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00064992) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00064992) fep_candidate_item_pane_t

0xc28b,	// (0x000614e8) list_highlight_pane_cp31_ParamLimits

0xc28b,	// (0x000614e8) list_highlight_pane_cp31

0xf255,	// (0x000644b2) level_1_signal_lsc

0xf25e,	// (0x000644bb) level_2_signal_lsc

0xf267,	// (0x000644c4) level_3_signal_lsc

0xf270,	// (0x000644cd) level_4_signal_lsc

0xf279,	// (0x000644d6) level_5_signal_lsc

0xf282,	// (0x000644df) level_6_signal_lsc

0xf28b,	// (0x000644e8) level_7_signal_lsc

0xf28b,	// (0x000644e8) level_1_battery_lsc

0xf294,	// (0x000644f1) level_2_battery_lsc

0xf29d,	// (0x000644fa) level_3_battery_lsc

0xf2a6,	// (0x00064503) level_4_battery_lsc

0xf2af,	// (0x0006450c) level_5_battery_lsc

0xf2b8,	// (0x00064515) level_6_battery_lsc

0xf255,	// (0x000644b2) level_7_battery_lsc

0xf2c1,	// (0x0006451e) scroll_handle_focus_pane_g1

0xf2ca,	// (0x00064527) scroll_handle_focus_pane_g2

0xf2d3,	// (0x00064530) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00064997) scroll_handle_focus_pane_g

0x5cec,	// (0x0005af49) list_single_2graphic_pane_g1_ParamLimits

0x5cec,	// (0x0005af49) list_single_2graphic_pane_g1

0x526b,	// (0x0005a4c8) list_single_2graphic_pane_g2_ParamLimits

0x526b,	// (0x0005a4c8) list_single_2graphic_pane_g2

0x51bc,	// (0x0005a419) list_single_2graphic_pane_g3_ParamLimits

0x51bc,	// (0x0005a419) list_single_2graphic_pane_g3

0x5cf8,	// (0x0005af55) list_single_2graphic_pane_g4_ParamLimits

0x5cf8,	// (0x0005af55) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0006499e) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0006499e) list_single_2graphic_pane_g

0x5d04,	// (0x0005af61) list_single_2graphic_pane_t1_ParamLimits

0x5d04,	// (0x0005af61) list_single_2graphic_pane_t1

0x5d32,	// (0x0005af8f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5d32,	// (0x0005af8f) list_double2_graphic_large_graphic_pane_g1

0x54bb,	// (0x0005a718) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x54bb,	// (0x0005a718) list_double2_graphic_large_graphic_pane_g2

0x53fc,	// (0x0005a659) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x53fc,	// (0x0005a659) list_double2_graphic_large_graphic_pane_g3

0x5d44,	// (0x0005afa1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5d44,	// (0x0005afa1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000649a7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000649a7) list_double2_graphic_large_graphic_pane_g

0x5d50,	// (0x0005afad) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5d50,	// (0x0005afad) list_double2_graphic_large_graphic_pane_t1

0x5d66,	// (0x0005afc3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5d66,	// (0x0005afc3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000649b0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000649b0) list_double2_graphic_large_graphic_pane_t

0xf365,	// (0x000645c2) popup_fast_swap_window_ParamLimits

0xf365,	// (0x000645c2) popup_fast_swap_window

0xf383,	// (0x000645e0) popup_side_volume_key_window

0xf3a1,	// (0x000645fe) stacon_top_pane

0xf3ab,	// (0x00064608) status_pane_ParamLimits

0xf3ab,	// (0x00064608) status_pane

0x5f6c,	// (0x0005b1c9) status_small_pane

0xc231,	// (0x0006148e) control_pane

0xc231,	// (0x0006148e) stacon_bottom_pane

0xe489,	// (0x000636e6) scroll_pane_cp121

0xe480,	// (0x000636dd) set_content_pane

0x5d78,	// (0x0005afd5) bg_active_tab_pane_g1_cp1

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp1

0x5d81,	// (0x0005afde) bg_active_tab_pane_g3_cp1

0x5d78,	// (0x0005afd5) bg_passive_tab_pane_g1_cp1

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp1

0x5d81,	// (0x0005afde) bg_passive_tab_pane_g3_cp1

0x5d8a,	// (0x0005afe7) bg_active_tab_pane_g1_cp2

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp2

0x5d93,	// (0x0005aff0) bg_active_tab_pane_g3_cp2

0x5d8a,	// (0x0005afe7) bg_passive_tab_pane_g1_cp2

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp2

0x5d93,	// (0x0005aff0) bg_passive_tab_pane_g3_cp2

0x5d9c,	// (0x0005aff9) bg_active_tab_pane_g1_cp3

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp3

0x5da5,	// (0x0005b002) bg_active_tab_pane_g3_cp3

0x5d9c,	// (0x0005aff9) bg_passive_tab_pane_g1_cp3

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp3

0x5da5,	// (0x0005b002) bg_passive_tab_pane_g3_cp3

0x5dae,	// (0x0005b00b) bg_active_tab_pane_g1_cp4

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp4

0x5db9,	// (0x0005b016) bg_active_tab_pane_g3_cp4

0x5dae,	// (0x0005b00b) bg_passive_tab_pane_g1_cp4

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp4

0x5db9,	// (0x0005b016) bg_passive_tab_pane_g3_cp4

0xf323,	// (0x00064580) bg_active_tab_pane_g1_cp5

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp5

0xf32c,	// (0x00064589) bg_active_tab_pane_g3_cp5

0xf323,	// (0x00064580) bg_passive_tab_pane_g1_cp5

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp5

0xf32c,	// (0x00064589) bg_passive_tab_pane_g3_cp5

0x5f08,	// (0x0005b165) list_set_graphic_pane_ParamLimits

0x5f08,	// (0x0005b165) list_set_graphic_pane

0xc231,	// (0x0006148e) bg_set_opt_pane_cp4

0x5f1d,	// (0x0005b17a) list_set_graphic_pane_g1_ParamLimits

0x5f1d,	// (0x0005b17a) list_set_graphic_pane_g1

0x5f29,	// (0x0005b186) list_set_graphic_pane_g2_ParamLimits

0x5f29,	// (0x0005b186) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000649b5) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000649b5) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00064d36) volume_small_pane_cp_g

0x5f4d,	// (0x0005b1aa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5f4d,	// (0x0005b1aa) list_double2_large_graphic_pane_g1_cp2

0x5f5b,	// (0x0005b1b8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5f5b,	// (0x0005b1b8) list_double2_large_graphic_pane_g2_cp2

0xf335,	// (0x00064592) list_double2_large_graphic_pane_g3_cp2

0xf33d,	// (0x0006459a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf33d,	// (0x0006459a) list_double2_large_graphic_pane_t1_cp2

0xf353,	// (0x000645b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf353,	// (0x000645b0) list_double2_large_graphic_pane_t2_cp2

0x962d,	// (0x0005e88a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x962d,	// (0x0005e88a) list_double_large_graphic_pane_g1_cp2

0x9640,	// (0x0005e89d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9640,	// (0x0005e89d) list_double_large_graphic_pane_g2_cp2

0xf48c,	// (0x000646e9) list_double_large_graphic_pane_g3_cp2

0x9651,	// (0x0005e8ae) list_double_large_graphic_pane_g4_cp

0x9659,	// (0x0005e8b6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9659,	// (0x0005e8b6) list_double_large_graphic_pane_t1_cp2

0x9670,	// (0x0005e8cd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9670,	// (0x0005e8cd) list_double_large_graphic_pane_t2_cp2

0x5f77,	// (0x0005b1d4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5f77,	// (0x0005b1d4) list_double2_graphic_pane_g1_cp2

0x5f85,	// (0x0005b1e2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5f85,	// (0x0005b1e2) list_double2_graphic_pane_g2_cp2

0x5f96,	// (0x0005b1f3) list_double2_graphic_pane_g3_cp2

0xf3b9,	// (0x00064616) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf3b9,	// (0x00064616) list_double2_graphic_pane_t1_cp2

0xf3cf,	// (0x0006462c) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf3cf,	// (0x0006462c) list_double2_graphic_pane_t2_cp2

0xf3e1,	// (0x0006463e) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf3e1,	// (0x0006463e) list_single_number_heading_pane_g1_cp2

0xf3ed,	// (0x0006464a) list_single_number_heading_pane_g2_cp2

0xf3f5,	// (0x00064652) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf3f5,	// (0x00064652) list_single_number_heading_pane_t1_cp2

0x5fa0,	// (0x0005b1fd) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5fa0,	// (0x0005b1fd) list_single_number_heading_pane_t2_cp2

0xf40b,	// (0x00064668) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf40b,	// (0x00064668) list_single_number_heading_pane_t3_cp2

0xf3e1,	// (0x0006463e) list_single_heading_pane_g1_cp2_ParamLimits

0xf3e1,	// (0x0006463e) list_single_heading_pane_g1_cp2

0xf3ed,	// (0x0006464a) list_single_heading_pane_g2_cp2

0xf3f5,	// (0x00064652) list_single_heading_pane_t1_cp2_ParamLimits

0xf3f5,	// (0x00064652) list_single_heading_pane_t1_cp2

0x9427,	// (0x0005e684) list_single_heading_pane_t2_cp2_ParamLimits

0x9427,	// (0x0005e684) list_single_heading_pane_t2_cp2

0x936f,	// (0x0005e5cc) list_double_graphic_pane_g1_cp2_ParamLimits

0x936f,	// (0x0005e5cc) list_double_graphic_pane_g1_cp2

0x937b,	// (0x0005e5d8) list_double_graphic_pane_g2_cp2_ParamLimits

0x937b,	// (0x0005e5d8) list_double_graphic_pane_g2_cp2

0x938a,	// (0x0005e5e7) list_double_graphic_pane_g3_cp2

0x9392,	// (0x0005e5ef) list_double_graphic_pane_t1_cp2_ParamLimits

0x9392,	// (0x0005e5ef) list_double_graphic_pane_t1_cp2

0x93a8,	// (0x0005e605) list_double_graphic_pane_t2_cp2_ParamLimits

0x93a8,	// (0x0005e605) list_double_graphic_pane_t2_cp2

0xf480,	// (0x000646dd) list_double_number_pane_g1_cp2_ParamLimits

0xf480,	// (0x000646dd) list_double_number_pane_g1_cp2

0xf48c,	// (0x000646e9) list_double_number_pane_g2_cp2

0x9333,	// (0x0005e590) list_double_number_pane_t1_cp2_ParamLimits

0x9333,	// (0x0005e590) list_double_number_pane_t1_cp2

0x9347,	// (0x0005e5a4) list_double_number_pane_t2_cp2_ParamLimits

0x9347,	// (0x0005e5a4) list_double_number_pane_t2_cp2

0x935d,	// (0x0005e5ba) list_double_number_pane_t3_cp2_ParamLimits

0x935d,	// (0x0005e5ba) list_double_number_pane_t3_cp2

0x921c,	// (0x0005e479) list_single_graphic_pane_g1_cp2_ParamLimits

0x921c,	// (0x0005e479) list_single_graphic_pane_g1_cp2

0xf4cc,	// (0x00064729) list_single_graphic_pane_g2_cp2_ParamLimits

0xf4cc,	// (0x00064729) list_single_graphic_pane_g2_cp2

0xf4d8,	// (0x00064735) list_single_graphic_pane_g3_cp2

0x91f2,	// (0x0005e44f) list_single_graphic_pane_t1_cp2_ParamLimits

0x91f2,	// (0x0005e44f) list_single_graphic_pane_t1_cp2

0xf4cc,	// (0x00064729) list_single_number_pane_g1_cp2_ParamLimits

0xf4cc,	// (0x00064729) list_single_number_pane_g1_cp2

0xf4d8,	// (0x00064735) list_single_number_pane_g2_cp2

0x91f2,	// (0x0005e44f) list_single_number_pane_t1_cp2_ParamLimits

0x91f2,	// (0x0005e44f) list_single_number_pane_t1_cp2

0x9208,	// (0x0005e465) list_single_number_pane_t2_cp2_ParamLimits

0x9208,	// (0x0005e465) list_single_number_pane_t2_cp2

0x5f5b,	// (0x0005b1b8) list_double2_pane_g1_cp2_ParamLimits

0x5f5b,	// (0x0005b1b8) list_double2_pane_g1_cp2

0xf335,	// (0x00064592) list_double2_pane_g2_cp2

0xf458,	// (0x000646b5) list_double2_pane_t1_cp2_ParamLimits

0xf458,	// (0x000646b5) list_double2_pane_t1_cp2

0xf46e,	// (0x000646cb) list_double2_pane_t2_cp2_ParamLimits

0xf46e,	// (0x000646cb) list_double2_pane_t2_cp2

0xf480,	// (0x000646dd) list_double_pane_g1_cp2_ParamLimits

0xf480,	// (0x000646dd) list_double_pane_g1_cp2

0xf48c,	// (0x000646e9) list_double_pane_g2_cp2

0xf494,	// (0x000646f1) list_double_pane_t1_cp2_ParamLimits

0xf494,	// (0x000646f1) list_double_pane_t1_cp2

0xf4aa,	// (0x00064707) list_double_pane_t2_cp2_ParamLimits

0xf4aa,	// (0x00064707) list_double_pane_t2_cp2

0xf4bc,	// (0x00064719) list_single_pane_cp2_g3

0xf4cc,	// (0x00064729) list_single_pane_g1_cp2_ParamLimits

0xf4cc,	// (0x00064729) list_single_pane_g1_cp2

0xf4d8,	// (0x00064735) list_single_pane_g2_cp2

0xf4e0,	// (0x0006473d) list_single_pane_t1_cp2_ParamLimits

0xf4e0,	// (0x0006473d) list_single_pane_t1_cp2

0x5fce,	// (0x0005b22b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5fce,	// (0x0005b22b) list_single_large_graphic_pane_g1_cp2

0xe65a,	// (0x000638b7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe65a,	// (0x000638b7) list_single_large_graphic_pane_g2_cp2

0xf4f8,	// (0x00064755) list_single_large_graphic_pane_g3_cp2

0xf500,	// (0x0006475d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf500,	// (0x0006475d) list_single_large_graphic_pane_g4_cp1

0xf51a,	// (0x00064777) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf51a,	// (0x00064777) list_single_large_graphic_pane_t1_cp2

0x91bc,	// (0x0005e419) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x91bc,	// (0x0005e419) list_single_graphic_heading_pane_g1_cp2

0x9189,	// (0x0005e3e6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9189,	// (0x0005e3e6) list_single_graphic_heading_pane_g4_cp2

0xf4d8,	// (0x00064735) list_single_graphic_heading_pane_g5_cp2

0x91c8,	// (0x0005e425) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x91c8,	// (0x0005e425) list_single_graphic_heading_pane_t1_cp2

0x91de,	// (0x0005e43b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x91de,	// (0x0005e43b) list_single_graphic_heading_pane_t2_cp2

0x917d,	// (0x0005e3da) list_single_2graphic_pane_g1_cp2_ParamLimits

0x917d,	// (0x0005e3da) list_single_2graphic_pane_g1_cp2

0x9189,	// (0x0005e3e6) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9189,	// (0x0005e3e6) list_single_2graphic_pane_g2_cp2

0xf4d8,	// (0x00064735) list_single_2graphic_pane_g3_cp2

0x919a,	// (0x0005e3f7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x919a,	// (0x0005e3f7) list_single_2graphic_pane_g4_cp2

0x91a6,	// (0x0005e403) list_single_2graphic_pane_t1_cp2_ParamLimits

0x91a6,	// (0x0005e403) list_single_2graphic_pane_t1_cp2

0xc227,	// (0x00061484) list_highlight_pane_g10_cp1

0x8d55,	// (0x0005dfb2) list_highlight_pane_g1_cp1

0x8d5d,	// (0x0005dfba) list_highlight_pane_g2_cp1

0x8d65,	// (0x0005dfc2) list_highlight_pane_g3_cp1

0x8d6d,	// (0x0005dfca) list_highlight_pane_g4_cp1

0x8d75,	// (0x0005dfd2) list_highlight_pane_g5_cp1

0x8d7d,	// (0x0005dfda) list_highlight_pane_g6_cp1

0x8d85,	// (0x0005dfe2) list_highlight_pane_g7_cp1

0x8d8d,	// (0x0005dfea) list_highlight_pane_g8_cp1

0x8d95,	// (0x0005dff2) list_highlight_pane_g9_cp1

0x8c75,	// (0x0005ded2) form_field_slider_pane_t3

0x8c83,	// (0x0005dee0) form_field_slider_pane_t4

0x8c91,	// (0x0005deee) slider_form_pane_ParamLimits

0x8c91,	// (0x0005deee) slider_form_pane

0xc231,	// (0x0006148e) control_abbreviations

0xc231,	// (0x0006148e) control_conventions

0xc231,	// (0x0006148e) control_definitions

0xc231,	// (0x0006148e) format_table_attribute

0x947d,	// (0x0005e6da) bg_popup_preview_window_pane_g9

0xc231,	// (0x0006148e) format_table_data2

0xc231,	// (0x0006148e) format_table_data3

0xc231,	// (0x0006148e) format_table_data_example

0x0008,

0xc231,	// (0x0006148e) intro_purpose

0xf8f4,	// (0x00064b51) bg_popup_preview_window_pane_g

0xc231,	// (0x0006148e) texts_category

0xc231,	// (0x0006148e) texts_graphics

0xf530,	// (0x0006478d) text_digital

0xf53f,	// (0x0006479c) text_primary

0x104a,	// (0x000562a7) text_primary_small

0x1059,	// (0x000562b6) text_secondary

0x1068,	// (0x000562c5) text_title

0x9c51,	// (0x0005eeae) bg_passive_tab_pane_g1_cp3_srt

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp3_srt

0x9c5a,	// (0x0005eeb7) bg_passive_tab_pane_g3_cp3_srt

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp3_srt_ParamLimits

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp3_srt

0x9c63,	// (0x0005eec0) tabs_4_active_pane_srt_g1

0x9c6b,	// (0x0005eec8) tabs_4_active_pane_srt_t1_ParamLimits

0x9c6b,	// (0x0005eec8) tabs_4_active_pane_srt_t1

0x9c51,	// (0x0005eeae) bg_active_tab_pane_g1_cp3_copy1

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp3_copy1

0x9c5a,	// (0x0005eeb7) bg_active_tab_pane_g3_cp3_copy1

0xc28b,	// (0x000614e8) tabs_2_long_active_pane_srt_ParamLimits

0xc28b,	// (0x000614e8) tabs_2_long_active_pane_srt

0xc28b,	// (0x000614e8) tabs_2_long_passive_pane_srt_ParamLimits

0xc28b,	// (0x000614e8) tabs_2_long_passive_pane_srt

0x58b8,	// (0x0005ab15) bg_passive_tab_pane_cp4_srt_ParamLimits

0x58b8,	// (0x0005ab15) bg_passive_tab_pane_cp4_srt

0x98b9,	// (0x0005eb16) bg_passive_tab_pane_g1_cp4_srt

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp4_srt

0x98c2,	// (0x0005eb1f) bg_passive_tab_pane_g3_cp4_srt

0x1702,	// (0x0005695f) bg_active_tab_pane_cp4_srt_ParamLimits

0x1702,	// (0x0005695f) bg_active_tab_pane_cp4_srt

0x98cb,	// (0x0005eb28) tabs_2_long_active_pane_srt_t1_ParamLimits

0x98cb,	// (0x0005eb28) tabs_2_long_active_pane_srt_t1

0x98b9,	// (0x0005eb16) bg_active_tab_pane_g1_cp4_srt

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp4_srt

0x98c2,	// (0x0005eb1f) bg_active_tab_pane_g3_cp4_srt

0xc3be,	// (0x0006161b) tabs_3_long_active_pane_srt_ParamLimits

0xc3be,	// (0x0006161b) tabs_3_long_active_pane_srt

0xc3be,	// (0x0006161b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc3be,	// (0x0006161b) tabs_3_long_passive_pane_cp_srt

0xc3be,	// (0x0006161b) tabs_3_long_passive_pane_srt_ParamLimits

0xc3be,	// (0x0006161b) tabs_3_long_passive_pane_srt

0x58b8,	// (0x0005ab15) bg_passive_tab_pane_cp5_srt_ParamLimits

0x58b8,	// (0x0005ab15) bg_passive_tab_pane_cp5_srt

0xf323,	// (0x00064580) bg_passive_tab_pane_g1_cp5_srt

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp5_srt

0xf32c,	// (0x00064589) bg_passive_tab_pane_g3_cp5_srt

0x1702,	// (0x0005695f) bg_active_tab_pane_cp5_srt_ParamLimits

0x1702,	// (0x0005695f) bg_active_tab_pane_cp5_srt

0x98a7,	// (0x0005eb04) tabs_3_long_active_pane_srt_t1_ParamLimits

0x98a7,	// (0x0005eb04) tabs_3_long_active_pane_srt_t1

0xf323,	// (0x00064580) bg_active_tab_pane_g1_cp5_srt

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp5_srt

0xf32c,	// (0x00064589) bg_active_tab_pane_g3_cp5_srt

0x9899,	// (0x0005eaf6) navi_text_pane_srt_t1

0x9891,	// (0x0005eaee) navi_icon_pane_srt_g1

0x3396,	// (0x000585f3) midp_editing_number_pane_srt

0x1077,	// (0x000562d4) midp_ticker_pane_srt

0x339e,	// (0x000585fb) midp_ticker_pane_srt_g1

0x33a6,	// (0x00058603) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x000649d4) midp_ticker_pane_srt_g

0x33ae,	// (0x0005860b) midp_ticker_pane_srt_t1

0x9882,	// (0x0005eadf) midp_editing_number_pane_t1_copy1

0x58b8,	// (0x0005ab15) listscroll_midp_pane

0x58b8,	// (0x0005ab15) midp_form_pane

0x32a3,	// (0x00058500) midp_info_popup_window_ParamLimits

0x32a3,	// (0x00058500) midp_info_popup_window

0xe552,	// (0x000637af) bg_popup_sub_pane_cp50_ParamLimits

0xe552,	// (0x000637af) bg_popup_sub_pane_cp50

0x898b,	// (0x0005dbe8) listscroll_midp_info_pane_ParamLimits

0x898b,	// (0x0005dbe8) listscroll_midp_info_pane

0x8973,	// (0x0005dbd0) listscroll_form_midp_pane_ParamLimits

0x8973,	// (0x0005dbd0) listscroll_form_midp_pane

0x897f,	// (0x0005dbdc) scroll_bar_cp050

0x8953,	// (0x0005dbb0) list_midp_pane

0xa873,	// (0x0005fad0) signal_pane_g2_cp

0x888d,	// (0x0005daea) listscroll_midp_info_pane_t1_ParamLimits

0x888d,	// (0x0005daea) listscroll_midp_info_pane_t1

0x88a5,	// (0x0005db02) listscroll_midp_info_pane_t2_ParamLimits

0x88a5,	// (0x0005db02) listscroll_midp_info_pane_t2

0x88e3,	// (0x0005db40) listscroll_midp_info_pane_t3_ParamLimits

0x88e3,	// (0x0005db40) listscroll_midp_info_pane_t3

0x891d,	// (0x0005db7a) listscroll_midp_info_pane_t4_ParamLimits

0x891d,	// (0x0005db7a) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00064a8c) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00064a8c) listscroll_midp_info_pane_t

0xe5d2,	// (0x0006382f) scroll_pane_cp21

0x8827,	// (0x0005da84) form_midp_field_choice_group_pane

0x8830,	// (0x0005da8d) form_midp_field_text_pane

0x8873,	// (0x0005dad0) form_midp_field_time_pane

0x887b,	// (0x0005dad8) form_midp_gauge_slider_pane

0x8884,	// (0x0005dae1) form_midp_gauge_wait_pane

0xc231,	// (0x0006148e) form_midp_image_pane

0x68f2,	// (0x0005bb4f) list_single_midp_pane_ParamLimits

0x68f2,	// (0x0005bb4f) list_single_midp_pane

0x87eb,	// (0x0005da48) form_midp_field_text_pane_t1

0x85d7,	// (0x0005d834) input_focus_pane_cp050

0x8816,	// (0x0005da73) list_midp_form_text_pane

0x87ba,	// (0x0005da17) form_midp_field_choice_group_pane_t1

0x87c8,	// (0x0005da25) input_focus_pane_cp051

0x87dc,	// (0x0005da39) list_midp_choice_pane

0xc231,	// (0x0006148e) status_idle_pane

0x879e,	// (0x0005d9fb) form_midp_field_time_pane_t1

0xc227,	// (0x00061484) wait_anim_pane_g2_copy1

0x87ac,	// (0x0005da09) form_midp_field_time_pane_t2

0x0001,

0x32fe,	// (0x0005855b) aid_navinavi_width_2_pane

0xf82a,	// (0x00064a87) form_midp_field_time_pane_t

0xc231,	// (0x0006148e) input_focus_pane_cp052

0xc231,	// (0x0006148e) bg_input_focus_pane_cp040

0x875e,	// (0x0005d9bb) form_midp_gauge_slider_pane_t1

0x876c,	// (0x0005d9c9) form_midp_gauge_slider_pane_t2

0x877a,	// (0x0005d9d7) form_midp_gauge_slider_pane_t3

0x8788,	// (0x0005d9e5) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00064a7e) form_midp_gauge_slider_pane_t

0x8796,	// (0x0005d9f3) form_midp_slider_pane

0xc28b,	// (0x000614e8) bg_input_focus_pane_cp041_ParamLimits

0xc28b,	// (0x000614e8) bg_input_focus_pane_cp041

0x872b,	// (0x0005d988) form_midp_gauge_wait_pane_t1_ParamLimits

0x872b,	// (0x0005d988) form_midp_gauge_wait_pane_t1

0x873d,	// (0x0005d99a) form_midp_gauge_wait_pane_t2_ParamLimits

0x873d,	// (0x0005d99a) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00064a79) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00064a79) form_midp_gauge_wait_pane_t

0x874f,	// (0x0005d9ac) form_midp_wait_pane_ParamLimits

0x874f,	// (0x0005d9ac) form_midp_wait_pane

0x86f3,	// (0x0005d950) form_midp_image_pane_g1

0x86fc,	// (0x0005d959) form_midp_image_pane_t1

0x870b,	// (0x0005d968) form_midp_image_pane_t2

0x871a,	// (0x0005d977) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00064a72) form_midp_image_pane_t

0x86ea,	// (0x0005d947) list_single_midp_pane_g1

0x353e,	// (0x0005879b) list_single_midp_pane_t1

0x86d0,	// (0x0005d92d) list_midp_form_item_pane_ParamLimits

0x86d0,	// (0x0005d92d) list_midp_form_item_pane

0x32b8,	// (0x00058515) list_midp_form_item_pane_t1

0x32c7,	// (0x00058524) midp_ticker_pane_g1

0x32d3,	// (0x00058530) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x000649ba) midp_ticker_pane_g

0x6081,	// (0x0005b2de) midp_ticker_pane_t1

0x9af5,	// (0x0005ed52) midp_editing_number_pane_t1

0x9ad3,	// (0x0005ed30) midp_editing_number_pane

0x9ae2,	// (0x0005ed3f) midp_ticker_pane

0x9872,	// (0x0005eacf) ai_message_heading_pane

0xc231,	// (0x0006148e) bg_popup_window_pane_cp14

0x987a,	// (0x0005ead7) listscroll_ai_message_pane

0x97f8,	// (0x0005ea55) ai_message_heading_pane_g1_ParamLimits

0x97f8,	// (0x0005ea55) ai_message_heading_pane_g1

0x9804,	// (0x0005ea61) ai_message_heading_pane_g2_ParamLimits

0x9804,	// (0x0005ea61) ai_message_heading_pane_g2

0x9812,	// (0x0005ea6f) ai_message_heading_pane_g3_ParamLimits

0x9812,	// (0x0005ea6f) ai_message_heading_pane_g3

0x981e,	// (0x0005ea7b) ai_message_heading_pane_g4_ParamLimits

0x981e,	// (0x0005ea7b) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00064bb3) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00064bb3) ai_message_heading_pane_g

0x982a,	// (0x0005ea87) ai_message_heading_pane_t1_ParamLimits

0x982a,	// (0x0005ea87) ai_message_heading_pane_t1

0x9844,	// (0x0005eaa1) ai_message_heading_pane_t2_ParamLimits

0x9844,	// (0x0005eaa1) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00064bbc) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00064bbc) ai_message_heading_pane_t

0x9858,	// (0x0005eab5) bg_popup_heading_pane_cp1_ParamLimits

0x9858,	// (0x0005eab5) bg_popup_heading_pane_cp1

0x97e6,	// (0x0005ea43) list_ai_message_pane_ParamLimits

0x97e6,	// (0x0005ea43) list_ai_message_pane

0xe5d2,	// (0x0006382f) scroll_pane_cp10

0x9782,	// (0x0005e9df) list_ai_message_pane_g1

0x978a,	// (0x0005e9e7) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00064b90) list_ai_message_pane_g

0x9792,	// (0x0005e9ef) list_ai_message_pane_t1_ParamLimits

0x9792,	// (0x0005e9ef) list_ai_message_pane_t1

0x97a7,	// (0x0005ea04) list_ai_message_pane_t2_ParamLimits

0x97a7,	// (0x0005ea04) list_ai_message_pane_t2

0x97bc,	// (0x0005ea19) list_ai_message_pane_t3_ParamLimits

0x97bc,	// (0x0005ea19) list_ai_message_pane_t3

0x97d1,	// (0x0005ea2e) list_ai_message_pane_t4_ParamLimits

0x97d1,	// (0x0005ea2e) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00064b95) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00064b95) list_ai_message_pane_t

0x976b,	// (0x0005e9c8) cell_ai_soft_ind_pane_ParamLimits

0x976b,	// (0x0005e9c8) cell_ai_soft_ind_pane

0x32df,	// (0x0005853c) cell_ai_soft_ind_pane_g1_ParamLimits

0x32df,	// (0x0005853c) cell_ai_soft_ind_pane_g1

0xc231,	// (0x0006148e) grid_highlight_cp1

0x32ec,	// (0x00058549) text_secondary_cp56_ParamLimits

0x32ec,	// (0x00058549) text_secondary_cp56

0x9740,	// (0x0005e99d) example_general_pane_ParamLimits

0x9740,	// (0x0005e99d) example_general_pane

0x974c,	// (0x0005e9a9) example_parent_pane_g1_ParamLimits

0x974c,	// (0x0005e9a9) example_parent_pane_g1

0x9758,	// (0x0005e9b5) example_parent_pane_t1_ParamLimits

0x9758,	// (0x0005e9b5) example_parent_pane_t1

0x7de9,	// (0x0005d046) popup_preview_text_window_ParamLimits

0x7de9,	// (0x0005d046) popup_preview_text_window

0xf4c4,	// (0x00064721) list_single_pane_cp2_g4

0xc474,	// (0x000616d1) bg_popup_preview_window_pane_ParamLimits

0xc474,	// (0x000616d1) bg_popup_preview_window_pane

0x9487,	// (0x0005e6e4) popup_preview_text_window_t1_ParamLimits

0x9487,	// (0x0005e6e4) popup_preview_text_window_t1

0x94a5,	// (0x0005e702) popup_preview_text_window_t2_ParamLimits

0x94a5,	// (0x0005e702) popup_preview_text_window_t2

0x94ee,	// (0x0005e74b) popup_preview_text_window_t3_ParamLimits

0x94ee,	// (0x0005e74b) popup_preview_text_window_t3

0x9533,	// (0x0005e790) popup_preview_text_window_t4_ParamLimits

0x9533,	// (0x0005e790) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00064b64) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00064b64) popup_preview_text_window_t

0x95b1,	// (0x0005e80e) scroll_pane_cp11

0x8563,	// (0x0005d7c0) bg_popup_preview_window_pane_g1

0x943b,	// (0x0005e698) bg_popup_preview_window_pane_g2

0x9445,	// (0x0005e6a2) bg_popup_preview_window_pane_g3

0x944f,	// (0x0005e6ac) bg_popup_preview_window_pane_g4

0x9459,	// (0x0005e6b6) bg_popup_preview_window_pane_g5

0x9463,	// (0x0005e6c0) bg_popup_preview_window_pane_g6

0x946b,	// (0x0005e6c8) bg_popup_preview_window_pane_g7

0x9473,	// (0x0005e6d0) bg_popup_preview_window_pane_g8

0x4a36,	// (0x00059c93) aid_popup_width_pane

0x7dc5,	// (0x0005d022) popup_midp_note_alarm_window_ParamLimits

0x7dc5,	// (0x0005d022) popup_midp_note_alarm_window

0xe49a,	// (0x000636f7) data_form_pane_ParamLimits

0x5740,	// (0x0005a99d) form_field_data_pane_g1

0x574a,	// (0x0005a9a7) form_field_data_pane_t1_ParamLimits

0xe4a6,	// (0x00063703) input_focus_pane_ParamLimits

0x3206,	// (0x00058463) data_form_wide_pane_ParamLimits

0x3217,	// (0x00058474) form_field_data_wide_pane_g1

0x3223,	// (0x00058480) form_field_data_wide_pane_t1_ParamLimits

0xc629,	// (0x00061886) input_focus_pane_cp6_ParamLimits

0x587d,	// (0x0005aada) input_popup_find_pane_g1_ParamLimits

0x587d,	// (0x0005aada) input_popup_find_pane_g1

0x59d6,	// (0x0005ac33) aid_navi_side_left_pane

0x59eb,	// (0x0005ac48) aid_navi_side_right_pane

0x8e50,	// (0x0005e0ad) bg_popup_window_pane_cp30_ParamLimits

0x8e50,	// (0x0005e0ad) bg_popup_window_pane_cp30

0x8eca,	// (0x0005e127) popup_midp_note_alarm_window_g1_ParamLimits

0x8eca,	// (0x0005e127) popup_midp_note_alarm_window_g1

0x8efa,	// (0x0005e157) popup_midp_note_alarm_window_t1_ParamLimits

0x8efa,	// (0x0005e157) popup_midp_note_alarm_window_t1

0x8f9b,	// (0x0005e1f8) popup_midp_note_alarm_window_t2_ParamLimits

0x8f9b,	// (0x0005e1f8) popup_midp_note_alarm_window_t2

0x9049,	// (0x0005e2a6) popup_midp_note_alarm_window_t3_ParamLimits

0x9049,	// (0x0005e2a6) popup_midp_note_alarm_window_t3

0x907b,	// (0x0005e2d8) popup_midp_note_alarm_window_t4_ParamLimits

0x907b,	// (0x0005e2d8) popup_midp_note_alarm_window_t4

0x90a1,	// (0x0005e2fe) popup_midp_note_alarm_window_t5_ParamLimits

0x90a1,	// (0x0005e2fe) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00064b01) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00064b01) popup_midp_note_alarm_window_t

0x914d,	// (0x0005e3aa) wait_bar_pane_cp1_ParamLimits

0x914d,	// (0x0005e3aa) wait_bar_pane_cp1

0xc231,	// (0x0006148e) wait_anim_pane_copy1

0xc231,	// (0x0006148e) wait_border_pane_copy1

0x8b35,	// (0x0005dd92) wait_border_pane_g1_copy1

0x323d,	// (0x0005849a) form_field_popup_pane_g1

0x5764,	// (0x0005a9c1) form_field_popup_pane_t1_ParamLimits

0xe4a6,	// (0x00063703) input_focus_pane_cp7_ParamLimits

0xe4d4,	// (0x00063731) list_form_pane_ParamLimits

0x3245,	// (0x000584a2) form_field_popup_wide_pane_g1

0x324d,	// (0x000584aa) form_field_popup_wide_pane_t1_ParamLimits

0xe4a6,	// (0x00063703) input_focus_pane_cp8_ParamLimits

0xe4e0,	// (0x0006373d) list_form_wide_pane_ParamLimits

0x9cde,	// (0x0005ef3b) aid_size_cell_graphic_pane

0x57e3,	// (0x0005aa40) data_form_pane_t1_ParamLimits

0x6b81,	// (0x0005bdde) data_form_wide_pane_t1_ParamLimits

0x8110,	// (0x0005d36d) bg_status_flat_pane

0x4e51,	// (0x0005a0ae) title_pane_t1_ParamLimits

0xc253,	// (0x000614b0) title_pane_t2_ParamLimits

0xc279,	// (0x000614d6) title_pane_t3_ParamLimits

0xf557,	// (0x000647b4) title_pane_t_ParamLimits

0x5b23,	// (0x0005ad80) level_1_signal_ParamLimits

0x5b30,	// (0x0005ad8d) level_2_signal_ParamLimits

0x5b3d,	// (0x0005ad9a) level_3_signal_ParamLimits

0x5b4a,	// (0x0005ada7) level_4_signal_ParamLimits

0x5b57,	// (0x0005adb4) level_5_signal_ParamLimits

0x5b64,	// (0x0005adc1) level_6_signal_ParamLimits

0x5b71,	// (0x0005adce) level_7_signal_ParamLimits

0x5b23,	// (0x0005ad80) level_1_battery_ParamLimits

0x5b30,	// (0x0005ad8d) level_2_battery_ParamLimits

0x5b3d,	// (0x0005ad9a) level_3_battery_ParamLimits

0x5b4a,	// (0x0005ada7) level_4_battery_ParamLimits

0x5b57,	// (0x0005adb4) level_5_battery_ParamLimits

0x5b64,	// (0x0005adc1) level_6_battery_ParamLimits

0x5b71,	// (0x0005adce) level_7_battery_ParamLimits

0x8d55,	// (0x0005dfb2) bg_status_flat_pane_g1

0x8d5d,	// (0x0005dfba) bg_status_flat_pane_g2

0x8d65,	// (0x0005dfc2) bg_status_flat_pane_g3

0x8d6d,	// (0x0005dfca) bg_status_flat_pane_g4

0x8d75,	// (0x0005dfd2) bg_status_flat_pane_g5

0x8d7d,	// (0x0005dfda) bg_status_flat_pane_g6

0x8d85,	// (0x0005dfe2) bg_status_flat_pane_g7

0x4ec1,	// (0x0005a11e) tabs_3_active_pane_t1_ParamLimits

0x4ec1,	// (0x0005a11e) tabs_3_passive_pane_t1_ParamLimits

0x4edb,	// (0x0005a138) tabs_4_active_pane_t1_ParamLimits

0x4edb,	// (0x0005a138) tabs_4_1_passive_pane_t1_ParamLimits

0x5893,	// (0x0005aaf0) tabs_2_active_pane_t1_ParamLimits

0x5893,	// (0x0005aaf0) tabs_2_passive_pane_t1_ParamLimits

0x1702,	// (0x0005695f) bg_active_tab_pane_cp4_ParamLimits

0x58a5,	// (0x0005ab02) tabs_2_long_active_pane_t1_ParamLimits

0x58b8,	// (0x0005ab15) bg_passive_tab_pane_cp4_ParamLimits

0x6821,	// (0x0005ba7e) list_single_midp_graphic_pane_t1_ParamLimits

0x1702,	// (0x0005695f) bg_active_tab_pane_cp5_ParamLimits

0x58c4,	// (0x0005ab21) tabs_3_long_active_pane_t1_ParamLimits

0x58b8,	// (0x0005ab15) bg_passive_tab_pane_cp5_ParamLimits

0x6821,	// (0x0005ba7e) list_single_midp_graphic_pane_t1

0x8110,	// (0x0005d36d) bg_status_flat_pane_ParamLimits

0x81db,	// (0x0005d438) indicator_pane_cp2_ParamLimits

0x81db,	// (0x0005d438) indicator_pane_cp2

0x831e,	// (0x0005d57b) navi_pane_srt_ParamLimits

0x831e,	// (0x0005d57b) navi_pane_srt

0x8342,	// (0x0005d59f) popup_clock_digital_analogue_window_cp1

0xc2cf,	// (0x0006152c) indicator_pane_t1

0x1077,	// (0x000562d4) copy_highlight_pane

0x1077,	// (0x000562d4) cursor_graphics_pane

0x1077,	// (0x000562d4) graphic_within_text_pane

0x1077,	// (0x000562d4) link_highlight_pane

0x9574,	// (0x0005e7d1) popup_preview_text_window_t5_ParamLimits

0x9574,	// (0x0005e7d1) popup_preview_text_window_t5

0x3308,	// (0x00058565) cursor_digital_pane

0x3308,	// (0x00058565) cursor_primary_pane

0x3319,	// (0x00058576) cursor_primary_small_pane

0x3321,	// (0x0005857e) cursor_secondary_pane

0x3329,	// (0x00058586) cursor_title_pane

0x3308,	// (0x00058565) link_highlight_digital_pane

0x3310,	// (0x0005856d) link_highlight_primary_pane

0x3319,	// (0x00058576) link_highlight_primary_small_pane

0x3321,	// (0x0005857e) link_highlight_secondary_pane

0x3329,	// (0x00058586) link_highlight_title_pane

0x3308,	// (0x00058565) copy_highlight_digital_pane

0x3308,	// (0x00058565) copy_highlight_primary_pane

0x3319,	// (0x00058576) copy_highlight_primary_small_pane

0x3321,	// (0x0005857e) copy_highlight_secondary_pane

0x3329,	// (0x00058586) copy_highlight_title_pane

0x3321,	// (0x0005857e) graphic_text_digital_pane

0x8df3,	// (0x0005e050) graphic_text_primary_pane

0x8dfc,	// (0x0005e059) graphic_text_primary_small_pane

0x3319,	// (0x00058576) graphic_text_secondary_pane

0x3308,	// (0x00058565) graphic_text_title_pane

0x6093,	// (0x0005b2f0) cursor_primary_pane_g1

0x8de5,	// (0x0005e042) cursor_text_primary_t1

0x8dcd,	// (0x0005e02a) cursor_primary_small_pane_g1

0x8dd7,	// (0x0005e034) cursor_text_primary_small_t1

0x8db5,	// (0x0005e012) cursor_primary_small_pane_g1_copy1

0x8dbf,	// (0x0005e01c) cursor_text_primary_small_t1_copy1

0x8d9d,	// (0x0005dffa) cursor_text_title_t1

0x8dab,	// (0x0005e008) cursor_title_pane_g1

0x6093,	// (0x0005b2f0) cursor_digital_pane_g1

0x3331,	// (0x0005858e) cursor_text_digital_t1

0x333f,	// (0x0005859c) link_highlight_primary_pane_g1

0x8d46,	// (0x0005dfa3) link_highlight_primary_pane_t1

0x333f,	// (0x0005859c) link_highlight_primary_small_pane_g1

0x3347,	// (0x000585a4) link_highlight_primary_small_pane_t1

0x3356,	// (0x000585b3) link_highlight_secondary_pane_g1

0x335e,	// (0x000585bb) link_highlight_secondary_pane_t1

0x8cba,	// (0x0005df17) link_highlight_title_pane_g1

0x8cc2,	// (0x0005df1f) link_highlight_title_pane_t1

0x8ca3,	// (0x0005df00) link_highlight_digital_pane_g1

0x8cab,	// (0x0005df08) link_highlight_digital_pane_t1

0x8b6b,	// (0x0005ddc8) copy_highlight_primary_pane_g1

0x8b82,	// (0x0005dddf) copy_highlight_primary_pane_t1

0x8b6b,	// (0x0005ddc8) copy_highlight_primary_small_pane_g1

0x8b73,	// (0x0005ddd0) copy_highlight_primary_small_pane_t1

0x336d,	// (0x000585ca) copy_highlight_secondary_pane_g1

0x3375,	// (0x000585d2) copy_highlight_secondary_pane_t1

0x8b54,	// (0x0005ddb1) copy_highlight_title_pane_g1

0x8b5c,	// (0x0005ddb9) copy_highlight_title_pane_t1

0x8b6b,	// (0x0005ddc8) copy_highlight_digital_pane_g1

0xa03b,	// (0x0005f298) copy_highlight_digital_pane_t1

0x9e02,	// (0x0005f05f) graphic_text_primary_pane_g1

0xa01f,	// (0x0005f27c) graphic_text_primary_pane_t1

0xa02d,	// (0x0005f28a) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00064c30) graphic_text_primary_pane_t

0x9ffb,	// (0x0005f258) graphic_text_primary_small_pane_g1

0xa003,	// (0x0005f260) graphic_text_primary_small_pane_t1

0xa011,	// (0x0005f26e) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00064c2b) graphic_text_primary_small_pane_t

0x9e4a,	// (0x0005f0a7) graphic_text_secondary_pane_g1

0x9e52,	// (0x0005f0af) graphic_text_secondary_pane_t1

0x9fed,	// (0x0005f24a) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00064c26) graphic_text_secondary_pane_t

0x9e26,	// (0x0005f083) graphic_text_title_pane_g1

0x9e2e,	// (0x0005f08b) graphic_text_title_pane_t1

0x9e3c,	// (0x0005f099) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00064c21) graphic_text_title_pane_t

0x9e02,	// (0x0005f05f) graphic_text_digital_pane_g1

0x9e0a,	// (0x0005f067) graphic_text_digital_pane_t1

0x9e18,	// (0x0005f075) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00064c1c) graphic_text_digital_pane_t

0xc28b,	// (0x000614e8) navi_icon_pane_srt_ParamLimits

0xc28b,	// (0x000614e8) navi_icon_pane_srt

0xc231,	// (0x0006148e) navi_midp_pane_srt

0xc231,	// (0x0006148e) navi_navi_pane_srt

0xc28b,	// (0x000614e8) navi_text_pane_srt_ParamLimits

0xc28b,	// (0x000614e8) navi_text_pane_srt

0x9dcd,	// (0x0005f02a) navi_navi_icon_text_pane_srt

0x9dd5,	// (0x0005f032) navi_navi_pane_srt_g1_ParamLimits

0x9dd5,	// (0x0005f032) navi_navi_pane_srt_g1

0x9de7,	// (0x0005f044) navi_navi_pane_srt_g2_ParamLimits

0x9de7,	// (0x0005f044) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00064c17) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00064c17) navi_navi_pane_srt_g

0x9df9,	// (0x0005f056) navi_navi_tabs_pane_srt

0x9dcd,	// (0x0005f02a) navi_navi_text_pane_srt

0x9dcd,	// (0x0005f02a) navi_navi_volume_pane_srt

0x9dbe,	// (0x0005f01b) navi_navi_text_pane_srt_t1

0x6c68,	// (0x0005bec5) navi_navi_volume_pane_srt_g1

0x6c70,	// (0x0005becd) volume_small_pane_srt_ParamLimits

0x6c70,	// (0x0005becd) volume_small_pane_srt

0x609d,	// (0x0005b2fa) volume_small_pane_srt_g1_ParamLimits

0x609d,	// (0x0005b2fa) volume_small_pane_srt_g1

0x60ad,	// (0x0005b30a) volume_small_pane_srt_g2_ParamLimits

0x60ad,	// (0x0005b30a) volume_small_pane_srt_g2

0x60be,	// (0x0005b31b) volume_small_pane_srt_g3_ParamLimits

0x60be,	// (0x0005b31b) volume_small_pane_srt_g3

0x60cf,	// (0x0005b32c) volume_small_pane_srt_g4_ParamLimits

0x60cf,	// (0x0005b32c) volume_small_pane_srt_g4

0x60e0,	// (0x0005b33d) volume_small_pane_srt_g5_ParamLimits

0x60e0,	// (0x0005b33d) volume_small_pane_srt_g5

0x60f1,	// (0x0005b34e) volume_small_pane_srt_g6_ParamLimits

0x60f1,	// (0x0005b34e) volume_small_pane_srt_g6

0x6102,	// (0x0005b35f) volume_small_pane_srt_g7_ParamLimits

0x6102,	// (0x0005b35f) volume_small_pane_srt_g7

0x6113,	// (0x0005b370) volume_small_pane_srt_g8_ParamLimits

0x6113,	// (0x0005b370) volume_small_pane_srt_g8

0x6124,	// (0x0005b381) volume_small_pane_srt_g9_ParamLimits

0x6124,	// (0x0005b381) volume_small_pane_srt_g9

0x6135,	// (0x0005b392) volume_small_pane_srt_g10_ParamLimits

0x6135,	// (0x0005b392) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x000649bf) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x000649bf) volume_small_pane_srt_g

0xc529,	// (0x00061786) query_popup_data_pane_cp2

0x9da4,	// (0x0005f001) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x9da4,	// (0x0005f001) navi_navi_icon_text_pane_srt_t1

0x8df3,	// (0x0005e050) navi_tabs_2_long_pane_srt

0x8df3,	// (0x0005e050) navi_tabs_2_pane_srt

0x8df3,	// (0x0005e050) navi_tabs_3_long_pane_srt

0x8df3,	// (0x0005e050) navi_tabs_3_pane_srt

0x8df3,	// (0x0005e050) navi_tabs_4_pane_srt

0x6c48,	// (0x0005bea5) tabs_2_active_pane_srt_ParamLimits

0x6c48,	// (0x0005bea5) tabs_2_active_pane_srt

0x6c58,	// (0x0005beb5) tabs_2_passive_pane_srt_ParamLimits

0x6c58,	// (0x0005beb5) tabs_2_passive_pane_srt

0x63e2,	// (0x0005b63f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x63e2,	// (0x0005b63f) bg_passive_tab_pane_cp1_srt

0x9d70,	// (0x0005efcd) bg_passive_tab_pane_g1_cp1_srt

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp1_srt

0x9d79,	// (0x0005efd6) bg_passive_tab_pane_g3_cp1_srt

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp1_srt_ParamLimits

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp1_srt

0x9d82,	// (0x0005efdf) tabs_2_active_pane_srt_g1

0x9d8a,	// (0x0005efe7) tabs_2_active_pane_srt_t1_ParamLimits

0x9d8a,	// (0x0005efe7) tabs_2_active_pane_srt_t1

0x9d70,	// (0x0005efcd) bg_active_tab_pane_g1_cp1_srt

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp1_srt

0x9d79,	// (0x0005efd6) bg_active_tab_pane_g3_cp1_srt

0x6c15,	// (0x0005be72) tabs_3_active_pane_srt_ParamLimits

0x6c15,	// (0x0005be72) tabs_3_active_pane_srt

0x6c26,	// (0x0005be83) tabs_3_passive_pane_cp_srt_ParamLimits

0x6c26,	// (0x0005be83) tabs_3_passive_pane_cp_srt

0x6c37,	// (0x0005be94) tabs_3_passive_pane_srt_ParamLimits

0x6c37,	// (0x0005be94) tabs_3_passive_pane_srt

0x63e2,	// (0x0005b63f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x63e2,	// (0x0005b63f) bg_passive_tab_pane_cp2_srt

0x338d,	// (0x000585ea) bg_passive_tab_pane_g1_cp2_srt

0xf2dc,	// (0x00064539) bg_passive_tab_pane_g2_cp2_srt

0x3384,	// (0x000585e1) bg_passive_tab_pane_g3_cp2_srt

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp2_srt_ParamLimits

0xc28b,	// (0x000614e8) bg_active_tab_pane_cp2_srt

0x9d56,	// (0x0005efb3) tabs_3_active_pane_srt_g1

0x9d5e,	// (0x0005efbb) tabs_3_active_pane_srt_t1_ParamLimits

0x9d5e,	// (0x0005efbb) tabs_3_active_pane_srt_t1

0x338d,	// (0x000585ea) bg_active_tab_pane_g1_cp2_srt

0xf2dc,	// (0x00064539) bg_active_tab_pane_g2_cp2_srt

0x3384,	// (0x000585e1) bg_active_tab_pane_g3_cp2_srt

0x6bcd,	// (0x0005be2a) tabs_4_active_pane_srt_ParamLimits

0x6bcd,	// (0x0005be2a) tabs_4_active_pane_srt

0x6bdf,	// (0x0005be3c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6bdf,	// (0x0005be3c) tabs_4_passive_pane_cp2_srt

0x6370,	// (0x0005b5cd) aid_size_cell_toolbar

0x58b8,	// (0x0005ab15) main_idle_act_pane_ParamLimits

0x65ab,	// (0x0005b808) popup_large_graphic_colour_window_ParamLimits

0x7f92,	// (0x0005d1ef) popup_toolbar_window_ParamLimits

0x7f92,	// (0x0005d1ef) popup_toolbar_window

0x9b18,	// (0x0005ed75) list_single_graphic_2heading_pane_ParamLimits

0x9b18,	// (0x0005ed75) list_single_graphic_2heading_pane

0xef3a,	// (0x00064197) aid_size_cell_apps_grid_lsc_pane

0xef4c,	// (0x000641a9) aid_size_cell_apps_grid_prt_pane

0x63e2,	// (0x0005b63f) bg_wml_button_pane_cp1_ParamLimits

0x63e2,	// (0x0005b63f) bg_wml_button_pane_cp1

0x87eb,	// (0x0005da48) form_midp_field_text_pane_t1_ParamLimits

0x85d7,	// (0x0005d834) input_focus_pane_cp050_ParamLimits

0x8816,	// (0x0005da73) list_midp_form_text_pane_ParamLimits

0x87c8,	// (0x0005da25) input_focus_pane_cp051_ParamLimits

0x87dc,	// (0x0005da39) list_midp_choice_pane_ParamLimits

0x8690,	// (0x0005d8ed) list_single_2graphic_pane_cp3_ParamLimits

0x8690,	// (0x0005d8ed) list_single_2graphic_pane_cp3

0x86a9,	// (0x0005d906) list_single_midp_graphic_pane_ParamLimits

0x86a9,	// (0x0005d906) list_single_midp_graphic_pane

0x49a2,	// (0x00059bff) list_single_graphic_2heading_pane_g1_ParamLimits

0x49a2,	// (0x00059bff) list_single_graphic_2heading_pane_g1

0x49ae,	// (0x00059c0b) list_single_graphic_2heading_pane_g4_ParamLimits

0x49ae,	// (0x00059c0b) list_single_graphic_2heading_pane_g4

0x49ba,	// (0x00059c17) list_single_graphic_2heading_pane_g5_ParamLimits

0x49ba,	// (0x00059c17) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00064a12) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00064a12) list_single_graphic_2heading_pane_g

0x49c6,	// (0x00059c23) list_single_graphic_2heading_pane_t1_ParamLimits

0x49c6,	// (0x00059c23) list_single_graphic_2heading_pane_t1

0x49da,	// (0x00059c37) list_single_graphic_2heading_pane_t2_ParamLimits

0x49da,	// (0x00059c37) list_single_graphic_2heading_pane_t2

0x49f6,	// (0x00059c53) list_single_graphic_2heading_pane_t3_ParamLimits

0x49f6,	// (0x00059c53) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00064a19) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00064a19) list_single_graphic_2heading_pane_t

0x84a1,	// (0x0005d6fe) bg_popup_sub_pane_cp2

0x84cb,	// (0x0005d728) grid_toobar_pane

0x6785,	// (0x0005b9e2) cell_toolbar_pane_ParamLimits

0x6785,	// (0x0005b9e2) cell_toolbar_pane

0x8507,	// (0x0005d764) cell_toolbar_pane_g1_ParamLimits

0x8507,	// (0x0005d764) cell_toolbar_pane_g1

0x851b,	// (0x0005d778) cell_toolbar_pane_g2_ParamLimits

0x851b,	// (0x0005d778) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00064a27) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00064a27) cell_toolbar_pane_g

0x853d,	// (0x0005d79a) grid_highlight_pane_cp2_ParamLimits

0x853d,	// (0x0005d79a) grid_highlight_pane_cp2

0x8557,	// (0x0005d7b4) toolbar_button_pane

0x8563,	// (0x0005d7c0) toolbar_button_pane_g1

0x856b,	// (0x0005d7c8) toolbar_button_pane_g2

0x8573,	// (0x0005d7d0) toolbar_button_pane_g3

0x857b,	// (0x0005d7d8) toolbar_button_pane_g4

0x8583,	// (0x0005d7e0) toolbar_button_pane_g5

0x858b,	// (0x0005d7e8) toolbar_button_pane_g6

0x8593,	// (0x0005d7f0) toolbar_button_pane_g7

0x859b,	// (0x0005d7f8) toolbar_button_pane_g8

0x85a3,	// (0x0005d800) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00064a2c) toolbar_button_pane_g

0x67c9,	// (0x0005ba26) list_single_2graphic_pane_g1_cp3_ParamLimits

0x67c9,	// (0x0005ba26) list_single_2graphic_pane_g1_cp3

0x67d5,	// (0x0005ba32) list_single_2graphic_pane_g2_cp3_ParamLimits

0x67d5,	// (0x0005ba32) list_single_2graphic_pane_g2_cp3

0x67e6,	// (0x0005ba43) list_single_2graphic_pane_g3_cp3

0x67ee,	// (0x0005ba4b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x67ee,	// (0x0005ba4b) list_single_2graphic_pane_g4_cp3

0x67fa,	// (0x0005ba57) list_single_2graphic_pane_t1_cp3_ParamLimits

0x67fa,	// (0x0005ba57) list_single_2graphic_pane_t1_cp3

0x6815,	// (0x0005ba72) list_single_midp_graphic_pane_g2_ParamLimits

0x6815,	// (0x0005ba72) list_single_midp_graphic_pane_g2

0x33fe,	// (0x0005865b) aid_zoom_text_primary

0x3406,	// (0x00058663) aid_zoom_text_secondary

0x6194,	// (0x0005b3f1) status_small_pane_g7_ParamLimits

0x6194,	// (0x0005b3f1) status_small_pane_g7

0x61b7,	// (0x0005b414) status_small_pane_t1_ParamLimits

0x4e40,	// (0x0005a09d) title_pane_g2

0x0003,

0xf54e,	// (0x000647ab) title_pane_g

0x5095,	// (0x0005a2f2) aid_size_cell_colour_1_pane_ParamLimits

0x5095,	// (0x0005a2f2) aid_size_cell_colour_1_pane

0x50a9,	// (0x0005a306) aid_size_cell_colour_2_pane_ParamLimits

0x50a9,	// (0x0005a306) aid_size_cell_colour_2_pane

0x50bd,	// (0x0005a31a) aid_size_cell_colour_3_pane_ParamLimits

0x50bd,	// (0x0005a31a) aid_size_cell_colour_3_pane

0x50d1,	// (0x0005a32e) aid_size_cell_colour_4_pane_ParamLimits

0x50d1,	// (0x0005a32e) aid_size_cell_colour_4_pane

0x5912,	// (0x0005ab6f) title_pane_stacon_g1_ParamLimits

0x5912,	// (0x0005ab6f) title_pane_stacon_g1

0x8bd9,	// (0x0005de36) popup_note_wait_window_g3_ParamLimits

0x8bd9,	// (0x0005de36) popup_note_wait_window_g3

0x8c50,	// (0x0005dead) popup_note_wait_window_t5_ParamLimits

0x8c50,	// (0x0005dead) popup_note_wait_window_t5

0xc231,	// (0x0006148e) main_feb_china_hwr_fs_writing_pane

0x6472,	// (0x0005b6cf) popup_feb_china_hwr_fs_window_ParamLimits

0x6472,	// (0x0005b6cf) popup_feb_china_hwr_fs_window

0x684f,	// (0x0005baac) aid_size_cell_hwr_fs_ParamLimits

0x684f,	// (0x0005baac) aid_size_cell_hwr_fs

0x85d7,	// (0x0005d834) bg_popup_sub_pane_cp3_ParamLimits

0x85d7,	// (0x0005d834) bg_popup_sub_pane_cp3

0x6864,	// (0x0005bac1) grid_hwr_fs_pane_ParamLimits

0x6864,	// (0x0005bac1) grid_hwr_fs_pane

0x687c,	// (0x0005bad9) linegrid_hwr_fs_pane_ParamLimits

0x687c,	// (0x0005bad9) linegrid_hwr_fs_pane

0x688c,	// (0x0005bae9) cell_hwr_fs_pane_ParamLimits

0x688c,	// (0x0005bae9) cell_hwr_fs_pane

0x85e3,	// (0x0005d840) linegrid_hwr_fs_pane_g1_ParamLimits

0x85e3,	// (0x0005d840) linegrid_hwr_fs_pane_g1

0x85ef,	// (0x0005d84c) linegrid_hwr_fs_pane_g2_ParamLimits

0x85ef,	// (0x0005d84c) linegrid_hwr_fs_pane_g2

0x8601,	// (0x0005d85e) linegrid_hwr_fs_pane_g3_ParamLimits

0x8601,	// (0x0005d85e) linegrid_hwr_fs_pane_g3

0x68b0,	// (0x0005bb0d) linegrid_hwr_fs_pane_g4_ParamLimits

0x68b0,	// (0x0005bb0d) linegrid_hwr_fs_pane_g4

0x68ce,	// (0x0005bb2b) linegrid_hwr_fs_pane_g5_ParamLimits

0x68ce,	// (0x0005bb2b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00064a57) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00064a57) linegrid_hwr_fs_pane_g

0x860d,	// (0x0005d86a) cell_hwr_fs_pane_g1_ParamLimits

0x860d,	// (0x0005d86a) cell_hwr_fs_pane_g1

0x83d8,	// (0x0005d635) cell_hwr_fs_pane_g2_ParamLimits

0x83d8,	// (0x0005d635) cell_hwr_fs_pane_g2

0x8623,	// (0x0005d880) cell_hwr_fs_pane_g3_ParamLimits

0x8623,	// (0x0005d880) cell_hwr_fs_pane_g3

0x8630,	// (0x0005d88d) cell_hwr_fs_pane_g4_ParamLimits

0x8630,	// (0x0005d88d) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00064a62) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00064a62) cell_hwr_fs_pane_g

0x68e4,	// (0x0005bb41) cell_hwr_fs_pane_t1

0xc231,	// (0x0006148e) grid_highlight_pane_cp6

0xc231,	// (0x0006148e) main_idle_act2_pane

0xe5b9,	// (0x00063816) aid_inside_area_popup_secondary

0x9289,	// (0x0005e4e6) aid_inside_area_window_primary_ParamLimits

0x9289,	// (0x0005e4e6) aid_inside_area_window_primary

0xa04a,	// (0x0005f2a7) ai2_news_ticker_pane

0xa052,	// (0x0005f2af) aid_size_cell_ai1_link_ParamLimits

0xa052,	// (0x0005f2af) aid_size_cell_ai1_link

0xa06c,	// (0x0005f2c9) popup_ai2_data_window_ParamLimits

0xa06c,	// (0x0005f2c9) popup_ai2_data_window

0xa08a,	// (0x0005f2e7) popup_ai2_link_window_ParamLimits

0xa08a,	// (0x0005f2e7) popup_ai2_link_window

0x85d7,	// (0x0005d834) bg_popup_sub_pane_cp4_ParamLimits

0x85d7,	// (0x0005d834) bg_popup_sub_pane_cp4

0xa0a0,	// (0x0005f2fd) grid_ai2_link_pane_ParamLimits

0xa0a0,	// (0x0005f2fd) grid_ai2_link_pane

0xa0b7,	// (0x0005f314) popup_ai2_link_window_g1_ParamLimits

0xa0b7,	// (0x0005f314) popup_ai2_link_window_g1

0xa0c3,	// (0x0005f320) popup_ai2_link_window_g2_ParamLimits

0xa0c3,	// (0x0005f320) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00064c35) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00064c35) popup_ai2_link_window_g

0xa0d4,	// (0x0005f331) ai2_mp_button_pane

0xa0dc,	// (0x0005f339) ai2_mp_volume_pane

0x87c8,	// (0x0005da25) bg_popup_sub_pane_cp5_ParamLimits

0x87c8,	// (0x0005da25) bg_popup_sub_pane_cp5

0xa0e4,	// (0x0005f341) heading_ai2_gene_pane_ParamLimits

0xa0e4,	// (0x0005f341) heading_ai2_gene_pane

0xa0f0,	// (0x0005f34d) list_ai2_gene_pane_ParamLimits

0xa0f0,	// (0x0005f34d) list_ai2_gene_pane

0xa138,	// (0x0005f395) cell_ai2_link_pane_ParamLimits

0xa138,	// (0x0005f395) cell_ai2_link_pane

0xa14e,	// (0x0005f3ab) cell_ai2_link_pane_g1

0xc231,	// (0x0006148e) grid_highlight_pane_cp7

0x6c85,	// (0x0005bee2) ai2_mp_volume_pane_g1

0xa221,	// (0x0005f47e) ai2_mp_volume_pane_g2

0xa196,	// (0x0005f3f3) list_ai2_gene_pane_t1

0xa229,	// (0x0005f486) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00064c4e) ai2_mp_volume_pane_g

0x6c8d,	// (0x0005beea) volume_small_pane_cp3

0xa231,	// (0x0005f48e) aid_size_cell_ai2_button

0xa239,	// (0x0005f496) grid_ai2_button_pane

0xa242,	// (0x0005f49f) cell_ai2_button_pane_ParamLimits

0xa242,	// (0x0005f49f) cell_ai2_button_pane

0xc227,	// (0x00061484) cell_ai2_button_pane_g1

0xc231,	// (0x0006148e) grid_highlight_pane_cp8

0xa1e1,	// (0x0005f43e) ai2_gene_pane_t1_ParamLimits

0xa1e1,	// (0x0005f43e) ai2_gene_pane_t1

0x6366,	// (0x0005b5c3) aid_height_parent_landscape

0x991b,	// (0x0005eb78) aid_height_set_list

0x992c,	// (0x0005eb89) aid_size_parent

0x9cde,	// (0x0005ef3b) aid_size_cell_graphic_pane_ParamLimits

0xa100,	// (0x0005f35d) popup_ai2_data_window_g1_ParamLimits

0xa100,	// (0x0005f35d) popup_ai2_data_window_g1

0xa10c,	// (0x0005f369) ai2_news_ticker_pane_g1

0xa114,	// (0x0005f371) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00064c3a) ai2_news_ticker_pane_g

0xa11c,	// (0x0005f379) ai2_news_ticker_pane_t1

0xa12a,	// (0x0005f387) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00064c3f) ai2_news_ticker_pane_t

0xa157,	// (0x0005f3b4) heading_ai2_gene_pane_g1

0xa15f,	// (0x0005f3bc) heading_ai2_gene_pane_t1_ParamLimits

0xa15f,	// (0x0005f3bc) heading_ai2_gene_pane_t1

0xa174,	// (0x0005f3d1) list_highlight_pane_cp6

0xa17c,	// (0x0005f3d9) ai2_gene_pane_ParamLimits

0xa17c,	// (0x0005f3d9) ai2_gene_pane

0xa1a4,	// (0x0005f401) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00064c44) list_ai2_gene_pane_t

0xa1b2,	// (0x0005f40f) list_highlight_pane_cp8_ParamLimits

0xa1b2,	// (0x0005f40f) list_highlight_pane_cp8

0xa1c3,	// (0x0005f420) ai2_gene_pane_g1_ParamLimits

0xa1c3,	// (0x0005f420) ai2_gene_pane_g1

0xa1d5,	// (0x0005f432) ai2_gene_pane_g2_ParamLimits

0xa1d5,	// (0x0005f432) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00064c49) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00064c49) ai2_gene_pane_g

0xc844,	// (0x00061aa1) scroll_pane_cp12

0x631d,	// (0x0005b57a) control_pane_t3_ParamLimits

0x631d,	// (0x0005b57a) control_pane_t3

0x61a8,	// (0x0005b405) status_small_pane_g8_ParamLimits

0x61a8,	// (0x0005b405) status_small_pane_g8

0x6570,	// (0x0005b7cd) popup_find_window_ParamLimits

0x7ddb,	// (0x0005d038) popup_note_image_window_ParamLimits

0x3482,	// (0x000586df) list_double2_graphic_pane_vc_g1_ParamLimits

0x3482,	// (0x000586df) list_double2_graphic_pane_vc_g1

0xe65a,	// (0x000638b7) list_double2_graphic_pane_vc_g2_ParamLimits

0xe65a,	// (0x000638b7) list_double2_graphic_pane_vc_g2

0x67b5,	// (0x0005ba12) list_double2_graphic_pane_vc_g3_ParamLimits

0x67b5,	// (0x0005ba12) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00064a20) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00064a20) list_double2_graphic_pane_vc_g

0x348e,	// (0x000586eb) list_double2_graphic_pane_vc_t1_ParamLimits

0x348e,	// (0x000586eb) list_double2_graphic_pane_vc_t1

0xe65a,	// (0x000638b7) list_single_heading_pane_vc_g1_ParamLimits

0xe65a,	// (0x000638b7) list_single_heading_pane_vc_g1

0x67b5,	// (0x0005ba12) list_single_heading_pane_vc_g2_ParamLimits

0x67b5,	// (0x0005ba12) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00064a41) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00064a41) list_single_heading_pane_vc_g

0x34a4,	// (0x00058701) list_single_heading_pane_vc_t1_ParamLimits

0x34a4,	// (0x00058701) list_single_heading_pane_vc_t1

0x34bc,	// (0x00058719) list_single_heading_pane_vc_t2_ParamLimits

0x34bc,	// (0x00058719) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00064a46) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00064a46) list_single_heading_pane_vc_t

0x6837,	// (0x0005ba94) list_setting_number_pane_vc_g1_ParamLimits

0x6837,	// (0x0005ba94) list_setting_number_pane_vc_g1

0x6843,	// (0x0005baa0) list_setting_number_pane_vc_g2_ParamLimits

0x6843,	// (0x0005baa0) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00064a4b) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00064a4b) list_setting_number_pane_vc_g

0x34ce,	// (0x0005872b) list_setting_number_pane_vc_t1_ParamLimits

0x34ce,	// (0x0005872b) list_setting_number_pane_vc_t1

0x34e2,	// (0x0005873f) list_setting_number_pane_vc_t2_ParamLimits

0x34e2,	// (0x0005873f) list_setting_number_pane_vc_t2

0x34fe,	// (0x0005875b) list_setting_number_pane_vc_t3_ParamLimits

0x34fe,	// (0x0005875b) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00064a50) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00064a50) list_setting_number_pane_vc_t

0x352c,	// (0x00058789) set_value_pane_vc_ParamLimits

0x352c,	// (0x00058789) set_value_pane_vc

0x9b18,	// (0x0005ed75) list_double2_graphic_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double2_graphic_pane_vc

0x9b18,	// (0x0005ed75) list_double2_large_graphic_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double2_large_graphic_pane_vc

0x9b18,	// (0x0005ed75) list_double2_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double2_pane_vc

0x9b18,	// (0x0005ed75) list_double_graphic_heading_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double_graphic_heading_pane_vc

0x9b18,	// (0x0005ed75) list_double_graphic_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double_graphic_pane_vc

0x9b18,	// (0x0005ed75) list_double_heading_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double_heading_pane_vc

0x9b2c,	// (0x0005ed89) list_double_large_graphic_pane_vc_ParamLimits

0x9b2c,	// (0x0005ed89) list_double_large_graphic_pane_vc

0x9b18,	// (0x0005ed75) list_double_number_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double_number_pane_vc

0x9b18,	// (0x0005ed75) list_double_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double_pane_vc

0x9b18,	// (0x0005ed75) list_double_time_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_double_time_pane_vc

0x9b18,	// (0x0005ed75) list_setting_number_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_setting_number_pane_vc

0x9b18,	// (0x0005ed75) list_setting_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_setting_pane_vc

0x9b18,	// (0x0005ed75) list_single_graphic_heading_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_single_graphic_heading_pane_vc

0x9b18,	// (0x0005ed75) list_single_heading_pane_vc_ParamLimits

0x9b18,	// (0x0005ed75) list_single_heading_pane_vc

0x9b4e,	// (0x0005edab) list_single_number_heading_pane_vc_ParamLimits

0x9b4e,	// (0x0005edab) list_single_number_heading_pane_vc

0x3482,	// (0x000586df) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3482,	// (0x000586df) list_double_graphic_heading_pane_vc_g1

0x9e60,	// (0x0005f0bd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9e60,	// (0x0005f0bd) list_double_graphic_heading_pane_vc_g2

0x9e6c,	// (0x0005f0c9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9e6c,	// (0x0005f0c9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x00064c55) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x00064c55) list_double_graphic_heading_pane_vc_g

0x3563,	// (0x000587c0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3563,	// (0x000587c0) list_double_graphic_heading_pane_vc_t1

0x3579,	// (0x000587d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3579,	// (0x000587d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00064c5c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00064c5c) list_double_graphic_heading_pane_vc_t

0x6837,	// (0x0005ba94) list_setting_pane_vc_g1_ParamLimits

0x6837,	// (0x0005ba94) list_setting_pane_vc_g1

0x6843,	// (0x0005baa0) list_setting_pane_vc_g2_ParamLimits

0x6843,	// (0x0005baa0) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00064a4b) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00064a4b) list_setting_pane_vc_g

0x3597,	// (0x000587f4) list_setting_pane_vc_t1_ParamLimits

0x3597,	// (0x000587f4) list_setting_pane_vc_t1

0x35b3,	// (0x00058810) list_setting_pane_vc_t2_ParamLimits

0x35b3,	// (0x00058810) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00064c8a) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00064c8a) list_setting_pane_vc_t

0x352c,	// (0x00058789) set_value_pane_cp_vc_ParamLimits

0x352c,	// (0x00058789) set_value_pane_cp_vc

0xe65a,	// (0x000638b7) list_single_number_heading_pane_vc_g1_ParamLimits

0xe65a,	// (0x000638b7) list_single_number_heading_pane_vc_g1

0x67b5,	// (0x0005ba12) list_single_number_heading_pane_vc_g2_ParamLimits

0x67b5,	// (0x0005ba12) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00064a41) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00064a41) list_single_number_heading_pane_vc_g

0x34a4,	// (0x00058701) list_single_number_heading_pane_vc_t1_ParamLimits

0x34a4,	// (0x00058701) list_single_number_heading_pane_vc_t1

0x35cf,	// (0x0005882c) list_single_number_heading_pane_vc_t2_ParamLimits

0x35cf,	// (0x0005882c) list_single_number_heading_pane_vc_t2

0x3183,	// (0x000583e0) list_single_number_heading_pane_vc_t3_ParamLimits

0x3183,	// (0x000583e0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00064c8f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00064c8f) list_single_number_heading_pane_vc_t

0x3482,	// (0x000586df) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3482,	// (0x000586df) list_single_graphic_heading_pane_vc_g1

0xe65a,	// (0x000638b7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe65a,	// (0x000638b7) list_single_graphic_heading_pane_vc_g4

0x67b5,	// (0x0005ba12) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x67b5,	// (0x0005ba12) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00064a20) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00064a20) list_single_graphic_heading_pane_vc_g

0x34a4,	// (0x00058701) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x34a4,	// (0x00058701) list_single_graphic_heading_pane_vc_t1

0x35e1,	// (0x0005883e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x35e1,	// (0x0005883e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x00064c96) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x00064c96) list_single_graphic_heading_pane_vc_t

0xe65a,	// (0x000638b7) list_double2_pane_vc_g1_ParamLimits

0xe65a,	// (0x000638b7) list_double2_pane_vc_g1

0x67b5,	// (0x0005ba12) list_double2_pane_vc_g2_ParamLimits

0x67b5,	// (0x0005ba12) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00064a41) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00064a41) list_double2_pane_vc_g

0x354d,	// (0x000587aa) list_double2_pane_vc_t1_ParamLimits

0x354d,	// (0x000587aa) list_double2_pane_vc_t1

0x9e78,	// (0x0005f0d5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9e78,	// (0x0005f0d5) list_double2_large_graphic_pane_vc_g1

0xe65a,	// (0x000638b7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe65a,	// (0x000638b7) list_double2_large_graphic_pane_vc_g2

0x67b5,	// (0x0005ba12) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x67b5,	// (0x0005ba12) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00064c9b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00064c9b) list_double2_large_graphic_pane_vc_g

0x316d,	// (0x000583ca) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x316d,	// (0x000583ca) list_double2_large_graphic_pane_vc_t1

0x9e84,	// (0x0005f0e1) list_double_time_pane_vc_g1_ParamLimits

0x9e84,	// (0x0005f0e1) list_double_time_pane_vc_g1

0x9e90,	// (0x0005f0ed) list_double_time_pane_vc_g2_ParamLimits

0x9e90,	// (0x0005f0ed) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00064ca2) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00064ca2) list_double_time_pane_vc_g

0x35f3,	// (0x00058850) list_double_time_pane_vc_t1_ParamLimits

0x35f3,	// (0x00058850) list_double_time_pane_vc_t1

0x361d,	// (0x0005887a) list_double_time_pane_vc_t2_ParamLimits

0x361d,	// (0x0005887a) list_double_time_pane_vc_t2

0x3666,	// (0x000588c3) list_double_time_pane_vc_t3_ParamLimits

0x3666,	// (0x000588c3) list_double_time_pane_vc_t3

0x3678,	// (0x000588d5) list_double_time_pane_vc_t4_ParamLimits

0x3678,	// (0x000588d5) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x00064ca7) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x00064ca7) list_double_time_pane_vc_t

0xe65a,	// (0x000638b7) list_double_pane_vc_g1_ParamLimits

0xe65a,	// (0x000638b7) list_double_pane_vc_g1

0x67b5,	// (0x0005ba12) list_double_pane_vc_g2_ParamLimits

0x67b5,	// (0x0005ba12) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00064a41) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00064a41) list_double_pane_vc_g

0x369d,	// (0x000588fa) list_double_pane_vc_t1_ParamLimits

0x369d,	// (0x000588fa) list_double_pane_vc_t1

0x36b1,	// (0x0005890e) list_double_pane_vc_t2_ParamLimits

0x36b1,	// (0x0005890e) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00064cb0) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00064cb0) list_double_pane_vc_t

0xe65a,	// (0x000638b7) list_double_number_pane_vc_g1_ParamLimits

0xe65a,	// (0x000638b7) list_double_number_pane_vc_g1

0x67b5,	// (0x0005ba12) list_double_number_pane_vc_g2_ParamLimits

0x67b5,	// (0x0005ba12) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00064a41) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00064a41) list_double_number_pane_vc_g

0x36c7,	// (0x00058924) list_double_number_pane_vc_t1_ParamLimits

0x36c7,	// (0x00058924) list_double_number_pane_vc_t1

0x36db,	// (0x00058938) list_double_number_pane_vc_t2_ParamLimits

0x36db,	// (0x00058938) list_double_number_pane_vc_t2

0x36ef,	// (0x0005894c) list_double_number_pane_vc_t3_ParamLimits

0x36ef,	// (0x0005894c) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x00064cb5) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x00064cb5) list_double_number_pane_vc_t

0x9e9c,	// (0x0005f0f9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9e9c,	// (0x0005f0f9) list_double_large_graphic_pane_vc_g1

0x9ec4,	// (0x0005f121) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9ec4,	// (0x0005f121) list_double_large_graphic_pane_vc_g2

0x9ed8,	// (0x0005f135) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9ed8,	// (0x0005f135) list_double_large_graphic_pane_vc_g3

0x3705,	// (0x00058962) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3705,	// (0x00058962) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00064cbc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00064cbc) list_double_large_graphic_pane_vc_g

0x3715,	// (0x00058972) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3715,	// (0x00058972) list_double_large_graphic_pane_vc_t1

0x3737,	// (0x00058994) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3737,	// (0x00058994) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00064cc5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00064cc5) list_double_large_graphic_pane_vc_t

0x9e60,	// (0x0005f0bd) list_double_heading_pane_vc_g1_ParamLimits

0x9e60,	// (0x0005f0bd) list_double_heading_pane_vc_g1

0x9e6c,	// (0x0005f0c9) list_double_heading_pane_vc_g2_ParamLimits

0x9e6c,	// (0x0005f0c9) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00064cca) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00064cca) list_double_heading_pane_vc_g

0x3757,	// (0x000589b4) list_double_heading_pane_vc_t1_ParamLimits

0x3757,	// (0x000589b4) list_double_heading_pane_vc_t1

0x34a4,	// (0x00058701) list_double_heading_pane_vc_t2_ParamLimits

0x34a4,	// (0x00058701) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00064ccf) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00064ccf) list_double_heading_pane_vc_t

0x3769,	// (0x000589c6) list_double_graphic_pane_vc_g1_ParamLimits

0x3769,	// (0x000589c6) list_double_graphic_pane_vc_g1

0x9ee7,	// (0x0005f144) list_double_graphic_pane_vc_g2_ParamLimits

0x9ee7,	// (0x0005f144) list_double_graphic_pane_vc_g2

0xe65a,	// (0x000638b7) list_double_graphic_pane_vc_g3_ParamLimits

0xe65a,	// (0x000638b7) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x00064cd4) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x00064cd4) list_double_graphic_pane_vc_g

0x3775,	// (0x000589d2) list_double_graphic_pane_vc_t1_ParamLimits

0x3775,	// (0x000589d2) list_double_graphic_pane_vc_t1

0x379f,	// (0x000589fc) list_double_graphic_pane_vc_t2_ParamLimits

0x379f,	// (0x000589fc) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00064cdd) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00064cdd) list_double_graphic_pane_vc_t

0x4a42,	// (0x00059c9f) aid_size_cell_fastswap

0x4a4a,	// (0x00059ca7) aid_size_cell_touch_ParamLimits

0x4a4a,	// (0x00059ca7) aid_size_cell_touch

0x4cb5,	// (0x00059f12) popup_fast_swap_wide_window_ParamLimits

0x4cb5,	// (0x00059f12) popup_fast_swap_wide_window

0x4dd3,	// (0x0005a030) touch_pane_ParamLimits

0x4dd3,	// (0x0005a030) touch_pane

0xe492,	// (0x000636ef) button_value_adjust_pane_cp2

0x31af,	// (0x0005840c) button_value_adjust_pane_cp4

0x31b7,	// (0x00058414) form_field_data_pane_cp2

0x5714,	// (0x0005a971) form_field_data_wide_pane_cp2

0xef88,	// (0x000641e5) bg_scroll_pane_ParamLimits

0x5afa,	// (0x0005ad57) scroll_handle_pane_ParamLimits

0x5b0e,	// (0x0005ad6b) scroll_sc2_down_pane_ParamLimits

0x5b0e,	// (0x0005ad6b) scroll_sc2_down_pane

0xefb9,	// (0x00064216) scroll_sc2_up_pane_ParamLimits

0xefb9,	// (0x00064216) scroll_sc2_up_pane

0xa95b,	// (0x0005fbb8) grid_wheel_folder_pane_g1_ParamLimits

0xa95b,	// (0x0005fbb8) grid_wheel_folder_pane_g1

0x5ea0,	// (0x0005b0fd) clock_nsta_pane_cp2_ParamLimits

0x5ea0,	// (0x0005b0fd) clock_nsta_pane_cp2

0x58b8,	// (0x0005ab15) listscroll_midp_pane_ParamLimits

0x5fdc,	// (0x0005b239) midp_canvas_pane

0x635e,	// (0x0005b5bb) nsta_clock_indic_pane

0x63ac,	// (0x0005b609) listscroll_form_pane_vc

0x63d0,	// (0x0005b62d) listscroll_set_pane_vc_ParamLimits

0x63d0,	// (0x0005b62d) listscroll_set_pane_vc

0x812c,	// (0x0005d389) clock_nsta_pane

0x81a9,	// (0x0005d406) indicator_nsta_pane

0x84a1,	// (0x0005d6fe) bg_popup_sub_pane_cp2_ParamLimits

0x84b5,	// (0x0005d712) find_pane_cp2_ParamLimits

0x84b5,	// (0x0005d712) find_pane_cp2

0x84cb,	// (0x0005d728) grid_toobar_pane_ParamLimits

0x85ab,	// (0x0005d808) list_form_gen_pane_vc_ParamLimits

0x85ab,	// (0x0005d808) list_form_gen_pane_vc

0x85c1,	// (0x0005d81e) scroll_pane_cp8_vc_ParamLimits

0x85c1,	// (0x0005d81e) scroll_pane_cp8_vc

0x863d,	// (0x0005d89a) data_form_wide_pane_vc_ParamLimits

0x863d,	// (0x0005d89a) data_form_wide_pane_vc

0x8649,	// (0x0005d8a6) form_field_data_wide_pane_vc_g1

0x8651,	// (0x0005d8ae) form_field_data_wide_pane_vc_t1_ParamLimits

0x8651,	// (0x0005d8ae) form_field_data_wide_pane_vc_t1

0xe4a6,	// (0x00063703) input_focus_pane_cp6_vc_ParamLimits

0xe4a6,	// (0x00063703) input_focus_pane_cp6_vc

0x8953,	// (0x0005dbb0) list_midp_pane_ParamLimits

0x895f,	// (0x0005dbbc) scroll_pane_cp16_ParamLimits

0x895f,	// (0x0005dbbc) scroll_pane_cp16

0x89ad,	// (0x0005dc0a) button_value_adjust_pane_ParamLimits

0x89ad,	// (0x0005dc0a) button_value_adjust_pane

0x993e,	// (0x0005eb9b) button_value_adjust_pane_cp6_ParamLimits

0x993e,	// (0x0005eb9b) button_value_adjust_pane_cp6

0x9a8c,	// (0x0005ece9) settings_code_pane_cp_ParamLimits

0x9a8c,	// (0x0005ece9) settings_code_pane_cp

0xc227,	// (0x00061484) cell_touch_pane_g1

0xc227,	// (0x00061484) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00064965) cell_touch_pane_g

0xa254,	// (0x0005f4b1) cell_touch_pane_cp_ParamLimits

0xa254,	// (0x0005f4b1) cell_touch_pane_cp

0xa264,	// (0x0005f4c1) cell_touch_pane_ParamLimits

0xa264,	// (0x0005f4c1) cell_touch_pane

0xc227,	// (0x00061484) scroll_sc2_down_pane_g1

0xc227,	// (0x00061484) scroll_sc2_up_pane_g1

0xc231,	// (0x0006148e) bg_set_opt_pane_cp4_vc

0xa275,	// (0x0005f4d2) list_set_graphic_pane_vc_g1_ParamLimits

0xa275,	// (0x0005f4d2) list_set_graphic_pane_vc_g1

0x16b6,	// (0x00056913) list_set_graphic_pane_vc_g2_ParamLimits

0x16b6,	// (0x00056913) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00064c61) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00064c61) list_set_graphic_pane_vc_g

0xa281,	// (0x0005f4de) text_primary_small_cp13_vc_ParamLimits

0xa281,	// (0x0005f4de) text_primary_small_cp13_vc

0xa299,	// (0x0005f4f6) list_set_graphic_pane_vc_ParamLimits

0xa299,	// (0x0005f4f6) list_set_graphic_pane_vc

0xc231,	// (0x0006148e) input_focus_pane_cp2_vc

0xc227,	// (0x00061484) setting_code_pane_vc_g1

0xc2a2,	// (0x000614ff) setting_code_pane_vc_t1

0xa2ae,	// (0x0005f50b) set_text_pane_vc_t1_ParamLimits

0xa2ae,	// (0x0005f50b) set_text_pane_vc_t1

0xc231,	// (0x0006148e) input_focus_pane_cp1_vc

0xa2cc,	// (0x0005f529) list_set_text_pane_vc

0xc227,	// (0x00061484) setting_text_pane_vc_g1

0xc231,	// (0x0006148e) bg_set_opt_pane_cp2_vc

0xc299,	// (0x000614f6) setting_slider_graphic_pane_vc_g1

0xa2d6,	// (0x0005f533) setting_slider_graphic_pane_vc_t1

0xa2e8,	// (0x0005f545) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x00064c66) setting_slider_graphic_pane_vc_t

0xa2fa,	// (0x0005f557) slider_set_pane_cp_vc

0xa304,	// (0x0005f561) slider_set_pane_vc_g1

0xa30d,	// (0x0005f56a) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00064c6b) slider_set_pane_vc_g

0xe501,	// (0x0006375e) set_opt_bg_pane_g1_copy1

0xe509,	// (0x00063766) set_opt_bg_pane_g2_copy1

0xa339,	// (0x0005f596) set_opt_bg_pane_g3_copy1

0xe519,	// (0x00063776) set_opt_bg_pane_g4_copy1

0xe521,	// (0x0006377e) set_opt_bg_pane_g5_copy1

0xe529,	// (0x00063786) set_opt_bg_pane_g6_copy1

0xa343,	// (0x0005f5a0) set_opt_bg_pane_g7_copy1

0xa34d,	// (0x0005f5aa) set_opt_bg_pane_g8_copy1

0xa357,	// (0x0005f5b4) set_opt_bg_pane_g9_copy1

0xc231,	// (0x0006148e) bg_set_opt_pane_cp_vc

0xa361,	// (0x0005f5be) setting_slider_pane_vc_t1

0xa370,	// (0x0005f5cd) setting_slider_pane_vc_t2

0xa382,	// (0x0005f5df) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00064c7a) setting_slider_pane_vc_t

0xa394,	// (0x0005f5f1) slider_set_pane_vc

0x6911,	// (0x0005bb6e) volume_set_pane_vc_g1

0x691a,	// (0x0005bb77) volume_set_pane_vc_g2

0x6923,	// (0x0005bb80) volume_set_pane_vc_g3

0x692c,	// (0x0005bb89) volume_set_pane_vc_g4

0x6935,	// (0x0005bb92) volume_set_pane_vc_g5

0x693e,	// (0x0005bb9b) volume_set_pane_vc_g6

0x6947,	// (0x0005bba4) volume_set_pane_vc_g7

0x6950,	// (0x0005bbad) volume_set_pane_vc_g8

0x6959,	// (0x0005bbb6) volume_set_pane_vc_g9

0x6962,	// (0x0005bbbf) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00064b18) volume_set_pane_vc_g

0xa39e,	// (0x0005f5fb) volume_set_pane_vc

0xa3a8,	// (0x0005f605) button_value_adjust_pane_cp1_vc

0xa3b2,	// (0x0005f60f) list_highlight_pane_cp2_vc

0xa3bb,	// (0x0005f618) list_set_pane_vc_ParamLimits

0xa3bb,	// (0x0005f618) list_set_pane_vc

0xa42b,	// (0x0005f688) main_pane_set_vc_t1_ParamLimits

0xa42b,	// (0x0005f688) main_pane_set_vc_t1

0xa440,	// (0x0005f69d) main_pane_set_vc_t2_ParamLimits

0xa440,	// (0x0005f69d) main_pane_set_vc_t2

0xa452,	// (0x0005f6af) main_pane_set_vc_t3_ParamLimits

0xa452,	// (0x0005f6af) main_pane_set_vc_t3

0xa466,	// (0x0005f6c3) main_pane_set_vc_t4_ParamLimits

0xa466,	// (0x0005f6c3) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00064c81) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00064c81) main_pane_set_vc_t

0xa47a,	// (0x0005f6d7) setting_code_pane_vc_ParamLimits

0xa47a,	// (0x0005f6d7) setting_code_pane_vc

0xa48b,	// (0x0005f6e8) setting_slider_graphic_pane_vc

0xa48b,	// (0x0005f6e8) setting_slider_pane_vc

0xa48b,	// (0x0005f6e8) setting_text_pane_vc

0xa48b,	// (0x0005f6e8) setting_volume_pane_vc

0xa495,	// (0x0005f6f2) scroll_pane_cp121_vc

0xe480,	// (0x000636dd) set_content_pane_vc

0xa49d,	// (0x0005f6fa) button_value_adjust_pane_g1

0xa4a6,	// (0x0005f703) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00064ce2) button_value_adjust_pane_g

0xa4af,	// (0x0005f70c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa4af,	// (0x0005f70c) form_field_slider_wide_pane_vc_t1

0xa4c1,	// (0x0005f71e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa4c1,	// (0x0005f71e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x00064ce7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00064ce7) form_field_slider_wide_pane_vc_t

0xc3be,	// (0x0006161b) input_focus_pane_cp10_vc_ParamLimits

0xc3be,	// (0x0006161b) input_focus_pane_cp10_vc

0xa4ed,	// (0x0005f74a) slider_cont_pane_cp1_vc_ParamLimits

0xa4ed,	// (0x0005f74a) slider_cont_pane_cp1_vc

0xa4ff,	// (0x0005f75c) slider_form_pane_g1_cp2

0xa30d,	// (0x0005f56a) slider_form_pane_g2_cp2

0xa52c,	// (0x0005f789) form_field_slider_pane_vc_t3

0xa53a,	// (0x0005f797) form_field_slider_pane_vc_t4

0xa548,	// (0x0005f7a5) slider_form_pane_vc_ParamLimits

0xa548,	// (0x0005f7a5) slider_form_pane_vc

0xa555,	// (0x0005f7b2) form_field_slider_pane_vc_t1_ParamLimits

0xa555,	// (0x0005f7b2) form_field_slider_pane_vc_t1

0xa4c1,	// (0x0005f71e) form_field_slider_pane_vc_t2_ParamLimits

0xa4c1,	// (0x0005f71e) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00064cf9) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00064cf9) form_field_slider_pane_vc_t

0xc3be,	// (0x0006161b) input_focus_pane_cp9_vc_ParamLimits

0xc3be,	// (0x0006161b) input_focus_pane_cp9_vc

0xa56b,	// (0x0005f7c8) slider_cont_pane_vc_ParamLimits

0xa56b,	// (0x0005f7c8) slider_cont_pane_vc

0xa57f,	// (0x0005f7dc) list_form_graphic_pane_cp_vc_ParamLimits

0xa57f,	// (0x0005f7dc) list_form_graphic_pane_cp_vc

0x8649,	// (0x0005d8a6) form_field_popup_wide_pane_vc_g1

0xa594,	// (0x0005f7f1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa594,	// (0x0005f7f1) form_field_popup_wide_pane_vc_t1

0xe4a6,	// (0x00063703) input_focus_pane_cp8_vc_ParamLimits

0xe4a6,	// (0x00063703) input_focus_pane_cp8_vc

0xa5d9,	// (0x0005f836) list_form_wide_pane_vc_ParamLimits

0xa5d9,	// (0x0005f836) list_form_wide_pane_vc

0xa5e5,	// (0x0005f842) list_form_graphic_pane_vc_g1

0xa5ed,	// (0x0005f84a) list_form_graphic_pane_vc_t1_ParamLimits

0xa5ed,	// (0x0005f84a) list_form_graphic_pane_vc_t1

0xc28b,	// (0x000614e8) list_highlight_pane_cp5_vc_ParamLimits

0xc28b,	// (0x000614e8) list_highlight_pane_cp5_vc

0xa609,	// (0x0005f866) list_form_graphic_pane_vc_ParamLimits

0xa609,	// (0x0005f866) list_form_graphic_pane_vc

0x8649,	// (0x0005d8a6) form_field_popup_pane_vc_g1

0xa61f,	// (0x0005f87c) form_field_popup_pane_vc_t1_ParamLimits

0xa61f,	// (0x0005f87c) form_field_popup_pane_vc_t1

0xe4a6,	// (0x00063703) input_focus_pane_cp7_vc_ParamLimits

0xe4a6,	// (0x00063703) input_focus_pane_cp7_vc

0xa636,	// (0x0005f893) list_form_pane_vc_ParamLimits

0xa636,	// (0x0005f893) list_form_pane_vc

0xa642,	// (0x0005f89f) data_form_pane_vc_t1_ParamLimits

0xa642,	// (0x0005f89f) data_form_pane_vc_t1

0xe501,	// (0x0006375e) input_focus_pane_vc_g1

0xe509,	// (0x00063766) input_focus_pane_vc_g2

0xe511,	// (0x0006376e) input_focus_pane_vc_g3

0xe519,	// (0x00063776) input_focus_pane_vc_g4

0xe521,	// (0x0006377e) input_focus_pane_vc_g5

0xe529,	// (0x00063786) input_focus_pane_vc_g6

0xe531,	// (0x0006378e) input_focus_pane_vc_g7

0xe539,	// (0x00063796) input_focus_pane_vc_g8

0xe541,	// (0x0006379e) input_focus_pane_vc_g9

0xc227,	// (0x00061484) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000648ee) input_focus_pane_vc_g

0x863d,	// (0x0005d89a) data_form_pane_vc_ParamLimits

0x863d,	// (0x0005d89a) data_form_pane_vc

0x8649,	// (0x0005d8a6) form_field_data_pane_vc_g1

0xa65f,	// (0x0005f8bc) form_field_data_pane_vc_t1_ParamLimits

0xa65f,	// (0x0005f8bc) form_field_data_pane_vc_t1

0xe4a6,	// (0x00063703) input_focus_pane_vc_ParamLimits

0xe4a6,	// (0x00063703) input_focus_pane_vc

0xa679,	// (0x0005f8d6) button_value_adjust_pane_cp3_vc

0xa681,	// (0x0005f8de) button_value_adjust_pane_cp5_vc

0xa689,	// (0x0005f8e6) form_field_data_pane_vc_ParamLimits

0xa689,	// (0x0005f8e6) form_field_data_pane_vc

0xa6a4,	// (0x0005f901) form_field_data_pane_vc_cp2

0xa6ac,	// (0x0005f909) form_field_data_wide_pane_vc_ParamLimits

0xa6ac,	// (0x0005f909) form_field_data_wide_pane_vc

0xa6c6,	// (0x0005f923) form_field_data_wide_pane_vc_cp2

0xa6ce,	// (0x0005f92b) form_field_popup_pane_vc_ParamLimits

0xa6ce,	// (0x0005f92b) form_field_popup_pane_vc

0xa6e9,	// (0x0005f946) form_field_popup_wide_pane_vc_ParamLimits

0xa6e9,	// (0x0005f946) form_field_popup_wide_pane_vc

0xa703,	// (0x0005f960) form_field_slider_pane_vc_ParamLimits

0xa703,	// (0x0005f960) form_field_slider_pane_vc

0xa716,	// (0x0005f973) form_field_slider_wide_pane_vc_ParamLimits

0xa716,	// (0x0005f973) form_field_slider_wide_pane_vc

0xa729,	// (0x0005f986) grid_touch_1_pane_ParamLimits

0xa729,	// (0x0005f986) grid_touch_1_pane

0xa735,	// (0x0005f992) grid_touch_2_pane_ParamLimits

0xa735,	// (0x0005f992) grid_touch_2_pane

0x33f0,	// (0x0005864d) touch_pane_g1_ParamLimits

0x33f0,	// (0x0005864d) touch_pane_g1

0xa74f,	// (0x0005f9ac) cell_app_pane_cp_wide_ParamLimits

0xa74f,	// (0x0005f9ac) cell_app_pane_cp_wide

0xa760,	// (0x0005f9bd) grid_popup_fast_wide_pane_ParamLimits

0xa760,	// (0x0005f9bd) grid_popup_fast_wide_pane

0xa774,	// (0x0005f9d1) scroll_pane_cp19_ParamLimits

0xa774,	// (0x0005f9d1) scroll_pane_cp19

0xc231,	// (0x0006148e) bg_popup_window_pane_cp20

0xa788,	// (0x0005f9e5) listscroll_popup_fast_wide_pane

0xc28b,	// (0x000614e8) grid_indicator_nsta_pane

0xa790,	// (0x0005f9ed) clock_nsta_pane_g1

0xa799,	// (0x0005f9f6) clock_nsta_pane_t1

0xa7b5,	// (0x0005fa12) cell_indicator_nsta_pane_ParamLimits

0xa7b5,	// (0x0005fa12) cell_indicator_nsta_pane

0xa7e7,	// (0x0005fa44) cell_indicator_nsta_pane_g1

0xa7f5,	// (0x0005fa52) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00064d0a) cell_indicator_nsta_pane_g

0xa80b,	// (0x0005fa68) clock_nsta_pane_cp

0xa813,	// (0x0005fa70) indicator_nsta_pane_cp

0xa81c,	// (0x0005fa79) nsta_clock_indic_pane_g1

0xc2c7,	// (0x00061524) grid_indicator_pane

0xf0ab,	// (0x00064308) scroll_pane_cp29

0x5dec,	// (0x0005b049) indicator_nsta_pane_cp2_ParamLimits

0x5dec,	// (0x0005b049) indicator_nsta_pane_cp2

0xc28b,	// (0x000614e8) main_apps_wheel_pane

0x8830,	// (0x0005da8d) form_midp_field_text_pane_ParamLimits

0x897f,	// (0x0005dbdc) scroll_bar_cp050_ParamLimits

0xa885,	// (0x0005fae2) cell_indicator_pane_ParamLimits

0xa885,	// (0x0005fae2) cell_indicator_pane

0xa89d,	// (0x0005fafa) cell_indicator_pane_g1

0xa8a7,	// (0x0005fb04) grid_wheel_folder_pane_ParamLimits

0xa8a7,	// (0x0005fb04) grid_wheel_folder_pane

0xa8bb,	// (0x0005fb18) list_wheel_apps_pane_ParamLimits

0xa8bb,	// (0x0005fb18) list_wheel_apps_pane

0xa8ce,	// (0x0005fb2b) main_apps_wheel_pane_g1_ParamLimits

0xa8ce,	// (0x0005fb2b) main_apps_wheel_pane_g1

0xa8ea,	// (0x0005fb47) main_apps_wheel_pane_g2_ParamLimits

0xa8ea,	// (0x0005fb47) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00064d26) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00064d26) main_apps_wheel_pane_g

0xa906,	// (0x0005fb63) main_apps_wheel_pane_t1_ParamLimits

0xa906,	// (0x0005fb63) main_apps_wheel_pane_t1

0xa92f,	// (0x0005fb8c) list_wheel_apps_pane_g1

0xa937,	// (0x0005fb94) list_wheel_apps_pane_g2

0xa93f,	// (0x0005fb9c) list_wheel_apps_pane_g3

0xa947,	// (0x0005fba4) list_wheel_apps_pane_g4

0xa951,	// (0x0005fbae) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00064d2b) list_wheel_apps_pane_g

0xf42b,	// (0x00064688) navi_icon_text_pane

0x8059,	// (0x0005d2b6) aid_fill_nsta

0xa972,	// (0x0005fbcf) navi_icon_text_pane_g1

0xa97e,	// (0x0005fbdb) navi_icon_text_pane_t1

0x5f35,	// (0x0005b192) list_set_graphic_pane_t1_ParamLimits

0x5f35,	// (0x0005b192) list_set_graphic_pane_t1

0x90d0,	// (0x0005e32d) popup_midp_note_alarm_window_t6_ParamLimits

0x90d0,	// (0x0005e32d) popup_midp_note_alarm_window_t6

0x90e2,	// (0x0005e33f) popup_midp_note_alarm_window_t7_ParamLimits

0x90e2,	// (0x0005e33f) popup_midp_note_alarm_window_t7

0x90f4,	// (0x0005e351) popup_midp_note_alarm_window_t8_ParamLimits

0x90f4,	// (0x0005e351) popup_midp_note_alarm_window_t8

0x9106,	// (0x0005e363) popup_midp_note_alarm_window_t9_ParamLimits

0x9106,	// (0x0005e363) popup_midp_note_alarm_window_t9

0x9118,	// (0x0005e375) popup_midp_note_alarm_window_t10_ParamLimits

0x9118,	// (0x0005e375) popup_midp_note_alarm_window_t10

0x912a,	// (0x0005e387) popup_midp_note_alarm_window_t11_ParamLimits

0x912a,	// (0x0005e387) popup_midp_note_alarm_window_t11

0x913c,	// (0x0005e399) scroll_pane_cp17_ParamLimits

0x913c,	// (0x0005e399) scroll_pane_cp17

0x6911,	// (0x0005bb6e) volume_small_pane_cp_g1

0x6c96,	// (0x0005bef3) volume_small_pane_cp_g2

0x6c9f,	// (0x0005befc) volume_small_pane_cp_g3

0x6ca8,	// (0x0005bf05) volume_small_pane_cp_g4

0x6cb1,	// (0x0005bf0e) volume_small_pane_cp_g5

0x6cba,	// (0x0005bf17) volume_small_pane_cp_g6

0x6cc3,	// (0x0005bf20) volume_small_pane_cp_g7

0x6ccc,	// (0x0005bf29) volume_small_pane_cp_g8

0x6cd5,	// (0x0005bf32) volume_small_pane_cp_g9

0x6cde,	// (0x0005bf3b) volume_small_pane_cp_g10

0x32c7,	// (0x00058524) midp_ticker_pane_g1_ParamLimits

0x32d3,	// (0x00058530) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x000649ba) midp_ticker_pane_g_ParamLimits

0x6081,	// (0x0005b2de) midp_ticker_pane_t1_ParamLimits

0x806f,	// (0x0005d2cc) aid_fill_nsta_2

0x896b,	// (0x0005dbc8) list_form2_midp_pane

0x9ad3,	// (0x0005ed30) midp_editing_number_pane_ParamLimits

0x9ae2,	// (0x0005ed3f) midp_ticker_pane_ParamLimits

0xa990,	// (0x0005fbed) form2_midp_field_pane

0xa9b4,	// (0x0005fc11) scroll_pane_cp51

0xa9d4,	// (0x0005fc31) form2_midp_button_pane_ParamLimits

0xa9d4,	// (0x0005fc31) form2_midp_button_pane

0xa9e6,	// (0x0005fc43) form2_midp_content_pane_ParamLimits

0xa9e6,	// (0x0005fc43) form2_midp_content_pane

0xaa00,	// (0x0005fc5d) form2_midp_field_choice_group_pane

0xaa08,	// (0x0005fc65) form2_midp_field_pane_g1

0xaa10,	// (0x0005fc6d) form2_midp_field_pane_g2

0xaa18,	// (0x0005fc75) form2_midp_field_pane_g3

0xaa20,	// (0x0005fc7d) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00064d50) form2_midp_field_pane_g

0xaa28,	// (0x0005fc85) form2_midp_gauge_slider_pane

0xaa30,	// (0x0005fc8d) form2_midp_gauge_wait_pane

0xaa38,	// (0x0005fc95) form2_midp_image_pane_ParamLimits

0xaa38,	// (0x0005fc95) form2_midp_image_pane

0xaa53,	// (0x0005fcb0) form2_midp_label_pane_ParamLimits

0xaa53,	// (0x0005fcb0) form2_midp_label_pane

0xaa72,	// (0x0005fccf) form2_midp_label_pane_cp_ParamLimits

0xaa72,	// (0x0005fccf) form2_midp_label_pane_cp

0xaa93,	// (0x0005fcf0) form2_midp_string_pane_ParamLimits

0xaa93,	// (0x0005fcf0) form2_midp_string_pane

0x37bd,	// (0x00058a1a) form2_midp_text_pane_ParamLimits

0x37bd,	// (0x00058a1a) form2_midp_text_pane

0xaaa5,	// (0x0005fd02) form2_midp_time_pane

0xaab5,	// (0x0005fd12) input_focus_pane_cp51_ParamLimits

0xaab5,	// (0x0005fd12) input_focus_pane_cp51

0xaacd,	// (0x0005fd2a) form2_midp_label_pane_t1_ParamLimits

0xaacd,	// (0x0005fd2a) form2_midp_label_pane_t1

0x37e0,	// (0x00058a3d) form2_mdip_text_pane_t1_ParamLimits

0x37e0,	// (0x00058a3d) form2_mdip_text_pane_t1

0x37ff,	// (0x00058a5c) form2_midp_time_pane_t1

0xab1b,	// (0x0005fd78) form2_midp_gauge_slider_pane_t1

0xab2d,	// (0x0005fd8a) form2_midp_gauge_slider_pane_t2

0xab3f,	// (0x0005fd9c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00064d59) form2_midp_gauge_slider_pane_t

0xab51,	// (0x0005fdae) form2_midp_slider_pane

0xab5d,	// (0x0005fdba) form2_midp_gauge_wait_pane_t1

0xab6b,	// (0x0005fdc8) form2_midp_wait_pane_ParamLimits

0xab6b,	// (0x0005fdc8) form2_midp_wait_pane

0x8690,	// (0x0005d8ed) list_single_2graphic_pane_cp4_ParamLimits

0x8690,	// (0x0005d8ed) list_single_2graphic_pane_cp4

0xab96,	// (0x0005fdf3) list_single_midp_graphic_pane_cp_ParamLimits

0xab96,	// (0x0005fdf3) list_single_midp_graphic_pane_cp

0xc231,	// (0x0006148e) list_highlight_pane_cp20

0xabba,	// (0x0005fe17) list_single_2graphic_pane_g1_cp4

0xa157,	// (0x0005f3b4) list_single_2graphic_pane_g2_cp4

0xabc2,	// (0x0005fe1f) list_single_2graphic_pane_t1_cp4

0xc28b,	// (0x000614e8) list_highlight_pane_cp21

0xabd1,	// (0x0005fe2e) list_single_midp_graphic_pane_g4_cp

0xabe0,	// (0x0005fe3d) list_single_midp_graphic_pane_t1_cp

0xabf5,	// (0x0005fe52) form2_mdip_string_pane_t1_ParamLimits

0xabf5,	// (0x0005fe52) form2_mdip_string_pane_t1

0xc231,	// (0x0006148e) bg_wml_button_pane_cp2

0xc227,	// (0x00061484) form2_midp_image_pane_g1

0x3be1,	// (0x00058e3e) list_double_large_graphic_pane_g5_ParamLimits

0x3be1,	// (0x00058e3e) list_double_large_graphic_pane_g5

0x58b8,	// (0x0005ab15) midp_form_pane_ParamLimits

0xc28b,	// (0x000614e8) main_apps_wheel_pane_ParamLimits

0x7e03,	// (0x0005d060) popup_preview_window_ParamLimits

0x7e03,	// (0x0005d060) popup_preview_window

0x7fea,	// (0x0005d247) popup_touch_info_window_ParamLimits

0x7fea,	// (0x0005d247) popup_touch_info_window

0x800c,	// (0x0005d269) popup_touch_menu_window_ParamLimits

0x800c,	// (0x0005d269) popup_touch_menu_window

0xc21d,	// (0x0006147a) bg_popup_sub_pane_cp6

0xac9a,	// (0x0005fef7) list_touch_menu_pane

0xaca2,	// (0x0005feff) list_single_touch_menu_pane_ParamLimits

0xaca2,	// (0x0005feff) list_single_touch_menu_pane

0xacba,	// (0x0005ff17) list_single_touch_menu_pane_t1

0xc28b,	// (0x000614e8) bg_popup_sub_pane_cp7_ParamLimits

0xc28b,	// (0x000614e8) bg_popup_sub_pane_cp7

0xacc8,	// (0x0005ff25) heading_sub_pane

0xacd0,	// (0x0005ff2d) list_touch_info_pane_ParamLimits

0xacd0,	// (0x0005ff2d) list_touch_info_pane

0xacdf,	// (0x0005ff3c) list_single_touch_info_pane_ParamLimits

0xacdf,	// (0x0005ff3c) list_single_touch_info_pane

0xacf1,	// (0x0005ff4e) list_single_touch_info_pane_t1

0xacff,	// (0x0005ff5c) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00064d67) list_single_touch_info_pane_t

0x1077,	// (0x000562d4) bg_popup_heading_pane_cp

0xad0d,	// (0x0005ff6a) heading_sub_pane_t1

0x85d7,	// (0x0005d834) bg_popup_preview_window_pane_cp_ParamLimits

0x85d7,	// (0x0005d834) bg_popup_preview_window_pane_cp

0xacc8,	// (0x0005ff25) heading_preview_pane

0xacd0,	// (0x0005ff2d) list_preview_pane_ParamLimits

0xacd0,	// (0x0005ff2d) list_preview_pane

0xad1b,	// (0x0005ff78) popup_preview_window_g1

0xacdf,	// (0x0005ff3c) list_single_preview_pane_ParamLimits

0xacdf,	// (0x0005ff3c) list_single_preview_pane

0xad23,	// (0x0005ff80) list_single_preview_pane_g1

0xad2b,	// (0x0005ff88) list_single_preview_pane_t1

0xacf1,	// (0x0005ff4e) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00064d6c) list_single_preview_pane_t

0xad39,	// (0x0005ff96) bg_popup_heading_pane_cp2_ParamLimits

0xad39,	// (0x0005ff96) bg_popup_heading_pane_cp2

0xad4f,	// (0x0005ffac) heading_preview_pane_g1

0xad57,	// (0x0005ffb4) heading_preview_pane_t1_ParamLimits

0xad57,	// (0x0005ffb4) heading_preview_pane_t1

0xc2de,	// (0x0006153b) soft_indicator_pane_t1_ParamLimits

0xc821,	// (0x00061a7e) scroll_pane_ParamLimits

0xefa7,	// (0x00064204) scroll_sc2_left_pane

0xefb0,	// (0x0006420d) scroll_sc2_right_pane

0xefcf,	// (0x0006422c) scroll_bg_pane_g1_ParamLimits

0xefe4,	// (0x00064241) scroll_bg_pane_g2_ParamLimits

0xeffc,	// (0x00064259) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00064945) scroll_bg_pane_g_ParamLimits

0xefcf,	// (0x0006422c) scroll_handle_pane_g1_ParamLimits

0xf01e,	// (0x0006427b) scroll_handle_pane_g2_ParamLimits

0xeffc,	// (0x00064259) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0006494c) scroll_handle_pane_g_ParamLimits

0x640a,	// (0x0005b667) popup_choice_list_window_ParamLimits

0x640a,	// (0x0005b667) popup_choice_list_window

0x84ad,	// (0x0005d70a) choice_list_pane

0x852f,	// (0x0005d78c) cell_toolbar_pane_t1

0x8557,	// (0x0005d7b4) toolbar_button_pane_ParamLimits

0x9606,	// (0x0005e863) ai_gene_pane_1_t2_ParamLimits

0x9606,	// (0x0005e863) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00064b74) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00064b74) ai_gene_pane_1_t

0xad74,	// (0x0005ffd1) scroll_sc2_left_pane_g1

0xad74,	// (0x0005ffd1) scroll_sc2_right_pane_g1

0x63e2,	// (0x0005b63f) bg_popup_sub_pane_cp10

0xad7e,	// (0x0005ffdb) list_choice_list_pane

0xad97,	// (0x0005fff4) list_single_choice_list_pane_ParamLimits

0xad97,	// (0x0005fff4) list_single_choice_list_pane

0xadaf,	// (0x0006000c) list_single_choice_list_pane_g1

0xe5f7,	// (0x00063854) list_single_choice_list_pane_t1_ParamLimits

0xe5f7,	// (0x00063854) list_single_choice_list_pane_t1

0xadb7,	// (0x00060014) choice_list_pane_g1

0xadbf,	// (0x0006001c) choice_list_pane_t1

0xc21d,	// (0x0006147a) input_focus_pane_cp11

0xef05,	// (0x00064162) title_pane_stacon_g2_ParamLimits

0xef05,	// (0x00064162) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0006492b) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0006492b) title_pane_stacon_g

0x1077,	// (0x000562d4) cursor_press_pane

0x64c4,	// (0x0005b721) popup_fep_hwr_window_ParamLimits

0x64c4,	// (0x0005b721) popup_fep_hwr_window

0x654e,	// (0x0005b7ab) popup_fep_vkb_window_ParamLimits

0x654e,	// (0x0005b7ab) popup_fep_vkb_window

0xadcd,	// (0x0006002a) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00064d95) fep_vkb_side_pane_g_ParamLimits

0x6d20,	// (0x0005bf7d) fep_hwr_candidate_pane_ParamLimits

0x6d20,	// (0x0005bf7d) fep_hwr_candidate_pane

0x6d4a,	// (0x0005bfa7) fep_hwr_side_pane_ParamLimits

0x6d4a,	// (0x0005bfa7) fep_hwr_side_pane

0x6d6c,	// (0x0005bfc9) fep_hwr_top_pane_ParamLimits

0x6d6c,	// (0x0005bfc9) fep_hwr_top_pane

0x6d84,	// (0x0005bfe1) fep_hwr_write_pane_ParamLimits

0x6d84,	// (0x0005bfe1) fep_hwr_write_pane

0xfb38,	// (0x00064d95) fep_vkb_side_pane_g

0xadd5,	// (0x00060032) fep_hwr_top_pane_g1

0xade7,	// (0x00060044) fep_hwr_top_pane_g2

0x6dbe,	// (0x0005c01b) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00064d71) fep_hwr_top_pane_g

0x6dd3,	// (0x0005c030) fep_hwr_top_text_pane

0xf118,	// (0x00064375) fep_hwr_top_text_pane_g1

0xae1d,	// (0x0006007a) fep_hwr_top_text_pane_t1

0x6edd,	// (0x0005c13a) fep_hwr_candidate_pane_g1

0xb068,	// (0x000602c5) fep_vkb_keypad_pane_g3_ParamLimits

0xb068,	// (0x000602c5) fep_vkb_keypad_pane_g3

0xb094,	// (0x000602f1) fep_vkb_keypad_pane_g4_ParamLimits

0xb094,	// (0x000602f1) fep_vkb_keypad_pane_g4

0xb10b,	// (0x00060368) fep_vkb_bottom_pane_g2_ParamLimits

0xb10b,	// (0x00060368) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00064d9c) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00064d9c) fep_vkb_bottom_pane_g

0xad74,	// (0x0005ffd1) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00064da6) cell_vkb_side_pane_g

0xb196,	// (0x000603f3) cell_vkb_side_pane_t1

0xb1a4,	// (0x00060401) cell_vkb_side_pane_t1_copy1

0xad74,	// (0x0005ffd1) bg_fep_vkb_candidate_pane_g2

0xb2e8,	// (0x00060545) cell_vkb_candidate_pane_ParamLimits

0xae2b,	// (0x00060088) aid_size_cell_vkb_ParamLimits

0xae2b,	// (0x00060088) aid_size_cell_vkb

0xb2e8,	// (0x00060545) cell_vkb_candidate_pane

0x6f04,	// (0x0005c161) bg_popup_fep_shadow_pane_g1

0xaebd,	// (0x0006011a) fep_vkb_bottom_pane_ParamLimits

0xaebd,	// (0x0006011a) fep_vkb_bottom_pane

0xaefa,	// (0x00060157) fep_vkb_candidate_pane_ParamLimits

0xaefa,	// (0x00060157) fep_vkb_candidate_pane

0xaf16,	// (0x00060173) fep_vkb_keypad_pane_ParamLimits

0xaf16,	// (0x00060173) fep_vkb_keypad_pane

0xaf49,	// (0x000601a6) fep_vkb_side_pane_ParamLimits

0xaf49,	// (0x000601a6) fep_vkb_side_pane

0xaf85,	// (0x000601e2) fep_vkb_top_pane_ParamLimits

0xaf85,	// (0x000601e2) fep_vkb_top_pane

0xafc1,	// (0x0006021e) fep_vkb_top_pane_g1_ParamLimits

0xafc1,	// (0x0006021e) fep_vkb_top_pane_g1

0xafd0,	// (0x0006022d) fep_vkb_top_pane_g2_ParamLimits

0xafd0,	// (0x0006022d) fep_vkb_top_pane_g2

0xafdf,	// (0x0006023c) fep_vkb_top_pane_g3_ParamLimits

0xafdf,	// (0x0006023c) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00064d8c) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00064d8c) fep_vkb_top_pane_g

0xaffd,	// (0x0006025a) fep_vkb_top_text_pane_ParamLimits

0xaffd,	// (0x0006025a) fep_vkb_top_text_pane

0xb00e,	// (0x0006026b) fep_vkb_side_pane_g1_ParamLimits

0xb00e,	// (0x0006026b) fep_vkb_side_pane_g1

0xb057,	// (0x000602b4) grid_vkb_side_pane_ParamLimits

0xb057,	// (0x000602b4) grid_vkb_side_pane

0x6f0c,	// (0x0005c169) bg_popup_fep_shadow_pane_g2

0x6f15,	// (0x0005c172) bg_popup_fep_shadow_pane_g3

0x6f1d,	// (0x0005c17a) bg_popup_fep_shadow_pane_g4

0x6f26,	// (0x0005c183) bg_popup_fep_shadow_pane_g5

0x6f30,	// (0x0005c18d) bg_popup_fep_shadow_pane_g6

0x6f38,	// (0x0005c195) bg_popup_fep_shadow_pane_g7

0xe519,	// (0x00063776) bg_popup_fep_shadow_pane_g8

0xb0b6,	// (0x00060313) grid_vkb_keypad_number_pane_ParamLimits

0xb0b6,	// (0x00060313) grid_vkb_keypad_number_pane

0xb0ca,	// (0x00060327) grid_vkb_keypad_pane_ParamLimits

0xb0ca,	// (0x00060327) grid_vkb_keypad_pane

0xb0f0,	// (0x0006034d) fep_vkb_bottom_pane_g1_ParamLimits

0xb0f0,	// (0x0006034d) fep_vkb_bottom_pane_g1

0xb119,	// (0x00060376) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb119,	// (0x00060376) grid_vkb_keypad_bottom_left_pane

0xb12e,	// (0x0006038b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb12e,	// (0x0006038b) grid_vkb_keypad_bottom_right_pane

0xb143,	// (0x000603a0) fep_vkb_top_text_pane_g1

0xb15e,	// (0x000603bb) fep_vkb_top_text_pane_t1

0xb173,	// (0x000603d0) cell_vkb_side_pane_ParamLimits

0xb173,	// (0x000603d0) cell_vkb_side_pane

0xad74,	// (0x0005ffd1) cell_vkb_side_pane_g1

0xb1b2,	// (0x0006040f) cell_vkb_keypad_pane_ParamLimits

0xb1b2,	// (0x0006040f) cell_vkb_keypad_pane

0xb23f,	// (0x0006049c) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00064db9) bg_popup_fep_shadow_pane_g

0x6f4a,	// (0x0005c1a7) cell_hwr_side_pane_g1

0x6f4a,	// (0x0005c1a7) cell_hwr_side_pane_g2

0xb249,	// (0x000604a6) cell_vkb_keypad_pane_t1

0xb257,	// (0x000604b4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb257,	// (0x000604b4) cell_vkb_keypad_bottom_left_pane

0xb274,	// (0x000604d1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb274,	// (0x000604d1) cell_vkb_keypad_bottom_right_pane

0xad74,	// (0x0005ffd1) cell_vkb_keypad_bottom_left_pane_g1

0xad74,	// (0x0005ffd1) cell_vkb_keypad_bottom_right_pane_g1

0xb2ad,	// (0x0006050a) cell_vkb_keypad_number_pane_ParamLimits

0xb2ad,	// (0x0006050a) cell_vkb_keypad_number_pane

0xb2cc,	// (0x00060529) cell_vkb_keypad_number_pane_g1

0xb2d6,	// (0x00060533) cell_vkb_keypad_number_pane_g2

0xb2df,	// (0x0006053c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00064dab) cell_vkb_keypad_number_pane_g

0xb249,	// (0x000604a6) cell_vkb_keypad_number_pane_t1

0xb309,	// (0x00060566) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x00064dcc) cell_hwr_side_pane_g

0xb322,	// (0x0006057f) cell_hwr_side_pane_t1

0x6f54,	// (0x0005c1b1) cell_hwr_side_pane_t1_copy1

0x6f62,	// (0x0005c1bf) cell_hwr_candidate_pane_g1

0x6f91,	// (0x0005c1ee) cell_hwr_candidate_pane_t1

0xad74,	// (0x0005ffd1) cell_vkb_candidate_pane_g2

0xb366,	// (0x000605c3) cell_vkb_candidate_pane_t1

0x6ce7,	// (0x0005bf44) bg_popup_fep_shadow_pane_ParamLimits

0x6ce7,	// (0x0005bf44) bg_popup_fep_shadow_pane

0x6d9e,	// (0x0005bffb) bg_fep_hwr_top_pane_g4

0xadf9,	// (0x00060056) bg_hwr_side_pane_g1_ParamLimits

0xadf9,	// (0x00060056) bg_hwr_side_pane_g1

0x6e11,	// (0x0005c06e) cell_hwr_side_pane_ParamLimits

0x6e11,	// (0x0005c06e) cell_hwr_side_pane

0x6e4e,	// (0x0005c0ab) fep_hwr_write_pane_g1_ParamLimits

0x6e4e,	// (0x0005c0ab) fep_hwr_write_pane_g1

0x6e5b,	// (0x0005c0b8) fep_hwr_write_pane_g2_ParamLimits

0x6e5b,	// (0x0005c0b8) fep_hwr_write_pane_g2

0x6e68,	// (0x0005c0c5) fep_hwr_write_pane_g3_ParamLimits

0x6e68,	// (0x0005c0c5) fep_hwr_write_pane_g3

0x6e76,	// (0x0005c0d3) fep_hwr_write_pane_g4_ParamLimits

0x6e76,	// (0x0005c0d3) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00064d78) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00064d78) fep_hwr_write_pane_g

0x6d9e,	// (0x0005bffb) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6d9e,	// (0x0005bffb) bg_fep_hwr_candidate_pane_g2

0x6e8b,	// (0x0005c0e8) cell_hwr_candidate_pane_ParamLimits

0x6e8b,	// (0x0005c0e8) cell_hwr_candidate_pane

0x6edd,	// (0x0005c13a) fep_hwr_candidate_pane_g1_ParamLimits

0xae59,	// (0x000600b6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xae59,	// (0x000600b6) bg_popup_fep_shadow_pane_cp2

0xafef,	// (0x0006024c) fep_vkb_top_pane_g4_ParamLimits

0xafef,	// (0x0006024c) fep_vkb_top_pane_g4

0xb035,	// (0x00060292) fep_vkb_side_pane_g2_ParamLimits

0xb035,	// (0x00060292) fep_vkb_side_pane_g2

0x5610,	// (0x0005a86d) list_setting_pane_t4_ParamLimits

0x5610,	// (0x0005a86d) list_setting_pane_t4

0x56ac,	// (0x0005a909) list_setting_number_pane_t5_ParamLimits

0x56ac,	// (0x0005a909) list_setting_number_pane_t5

0x5b9d,	// (0x0005adfa) list_double_heading_pane_cp2_ParamLimits

0x5b9d,	// (0x0005adfa) list_double_heading_pane_cp2

0xb374,	// (0x000605d1) list_double_heading_pane_g1_cp2_ParamLimits

0xb374,	// (0x000605d1) list_double_heading_pane_g1_cp2

0xb380,	// (0x000605dd) list_double_heading_pane_g2_cp2_ParamLimits

0xb380,	// (0x000605dd) list_double_heading_pane_g2_cp2

0xb394,	// (0x000605f1) list_double_heading_pane_t1_cp2_ParamLimits

0xb394,	// (0x000605f1) list_double_heading_pane_t1_cp2

0xb3aa,	// (0x00060607) list_double_heading_pane_t2_cp2_ParamLimits

0xb3aa,	// (0x00060607) list_double_heading_pane_t2_cp2

0xc215,	// (0x00061472) aid_value_unit2

0x4d13,	// (0x00059f70) popup_preview_fixed_window

0xc3cc,	// (0x00061629) bg_popup_preview_window_pane_cp02

0xb3bc,	// (0x00060619) list_preview_fixed_pane

0xb402,	// (0x0006065f) list_empty_pane_fp_ParamLimits

0xb402,	// (0x0006065f) list_empty_pane_fp

0xb402,	// (0x0006065f) list_single_cale_day_pane_fp_ParamLimits

0xb402,	// (0x0006065f) list_single_cale_day_pane_fp

0xb402,	// (0x0006065f) list_single_graphic_heading_pane_fp_ParamLimits

0xb402,	// (0x0006065f) list_single_graphic_heading_pane_fp

0xb402,	// (0x0006065f) list_single_graphic_pane_fp_ParamLimits

0xb402,	// (0x0006065f) list_single_graphic_pane_fp

0xb402,	// (0x0006065f) list_single_heading_pane_fp_ParamLimits

0xb402,	// (0x0006065f) list_single_heading_pane_fp

0xb402,	// (0x0006065f) list_single_pane_fp_ParamLimits

0xb402,	// (0x0006065f) list_single_pane_fp

0xb41b,	// (0x00060678) list_single_pane_fp_g1_ParamLimits

0xb41b,	// (0x00060678) list_single_pane_fp_g1

0xb374,	// (0x000605d1) list_single_pane_fp_g2_ParamLimits

0xb374,	// (0x000605d1) list_single_pane_fp_g2

0xb380,	// (0x000605dd) list_single_pane_fp_g3_ParamLimits

0xb380,	// (0x000605dd) list_single_pane_fp_g3

0xb427,	// (0x00060684) list_single_pane_fp_g4_ParamLimits

0xb427,	// (0x00060684) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x00064ddf) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x00064ddf) list_single_pane_fp_g

0x3812,	// (0x00058a6f) list_single_pane_fp_t1_ParamLimits

0x3812,	// (0x00058a6f) list_single_pane_fp_t1

0x3829,	// (0x00058a86) list_single_graphic_pane_fp_g1_ParamLimits

0x3829,	// (0x00058a86) list_single_graphic_pane_fp_g1

0xb41b,	// (0x00060678) list_single_graphic_pane_fp_g2_ParamLimits

0xb41b,	// (0x00060678) list_single_graphic_pane_fp_g2

0xb374,	// (0x000605d1) list_single_graphic_pane_fp_g3_ParamLimits

0xb374,	// (0x000605d1) list_single_graphic_pane_fp_g3

0xb380,	// (0x000605dd) list_single_graphic_pane_fp_g4_ParamLimits

0xb380,	// (0x000605dd) list_single_graphic_pane_fp_g4

0xb427,	// (0x00060684) list_single_graphic_pane_fp_g5_ParamLimits

0xb427,	// (0x00060684) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064de8) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064de8) list_single_graphic_pane_fp_g

0x3835,	// (0x00058a92) list_single_graphic_pane_fp_t1_ParamLimits

0x3835,	// (0x00058a92) list_single_graphic_pane_fp_t1

0x3829,	// (0x00058a86) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3829,	// (0x00058a86) list_single_graphic_heading_pane_fp_g1

0xb41b,	// (0x00060678) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb41b,	// (0x00060678) list_single_graphic_heading_pane_fp_g2

0xb374,	// (0x000605d1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb374,	// (0x000605d1) list_single_graphic_heading_pane_fp_g3

0xb380,	// (0x000605dd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb380,	// (0x000605dd) list_single_graphic_heading_pane_fp_g4

0xb427,	// (0x00060684) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb427,	// (0x00060684) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064de8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064de8) list_single_graphic_heading_pane_fp_g

0x384b,	// (0x00058aa8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x384b,	// (0x00058aa8) list_single_graphic_heading_pane_fp_t1

0x3861,	// (0x00058abe) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3861,	// (0x00058abe) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x00064df3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x00064df3) list_single_graphic_heading_pane_fp_t

0x3873,	// (0x00058ad0) list_single_cale_day_pane_fp_g1_ParamLimits

0x3873,	// (0x00058ad0) list_single_cale_day_pane_fp_g1

0xb433,	// (0x00060690) list_single_cale_day_pane_fp_g2_ParamLimits

0xb433,	// (0x00060690) list_single_cale_day_pane_fp_g2

0x9f04,	// (0x0005f161) list_single_cale_day_pane_fp_g3_ParamLimits

0x9f04,	// (0x0005f161) list_single_cale_day_pane_fp_g3

0x9f2c,	// (0x0005f189) list_single_cale_day_pane_fp_g4_ParamLimits

0x9f2c,	// (0x0005f189) list_single_cale_day_pane_fp_g4

0x9f50,	// (0x0005f1ad) list_single_cale_day_pane_fp_g5_ParamLimits

0x9f50,	// (0x0005f1ad) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x00064df8) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x00064df8) list_single_cale_day_pane_fp_g

0x38ab,	// (0x00058b08) list_single_cale_day_pane_fp_t1_ParamLimits

0x38ab,	// (0x00058b08) list_single_cale_day_pane_fp_t1

0x38d1,	// (0x00058b2e) list_single_cale_day_pane_fp_t2_ParamLimits

0x38d1,	// (0x00058b2e) list_single_cale_day_pane_fp_t2

0x38ea,	// (0x00058b47) list_single_cale_day_pane_fp_t3_ParamLimits

0x38ea,	// (0x00058b47) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x00064e03) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x00064e03) list_single_cale_day_pane_fp_t

0xb41b,	// (0x00060678) list_empty_pane_fp_g1_ParamLimits

0xb41b,	// (0x00060678) list_empty_pane_fp_g1

0x3903,	// (0x00058b60) list_empty_pane_fp_t1

0x3911,	// (0x00058b6e) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x00064e0a) list_empty_pane_fp_t

0xb41b,	// (0x00060678) list_single_heading_pane_fp_g1_ParamLimits

0xb41b,	// (0x00060678) list_single_heading_pane_fp_g1

0xb374,	// (0x000605d1) list_single_heading_pane_fp_g2_ParamLimits

0xb374,	// (0x000605d1) list_single_heading_pane_fp_g2

0xb380,	// (0x000605dd) list_single_heading_pane_fp_g3_ParamLimits

0xb380,	// (0x000605dd) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x00064e0f) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00064e0f) list_single_heading_pane_fp_g

0x391f,	// (0x00058b7c) list_single_heading_pane_fp_t1_ParamLimits

0x391f,	// (0x00058b7c) list_single_heading_pane_fp_t1

0x3931,	// (0x00058b8e) list_single_heading_pane_fp_t2_ParamLimits

0x3931,	// (0x00058b8e) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x00064e16) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x00064e16) list_single_heading_pane_fp_t

0xe60c,	// (0x00063869) aid_size_cell_fast

0xc3a1,	// (0x000615fe) soft_indicator_pane_cp1_t1

0xe649,	// (0x000638a6) cell_app_pane_cp2_ParamLimits

0xe649,	// (0x000638a6) cell_app_pane_cp2

0x6d09,	// (0x0005bf66) fep_hwr_candidate_drop_down_list_pane

0x6ef7,	// (0x0005c154) fep_hwr_candidate_pane_g3_ParamLimits

0x6ef7,	// (0x0005c154) fep_hwr_candidate_pane_g3

0x284f,	// (0x00057aac) fep_hwr_candidate_pane_g4_ParamLimits

0x284f,	// (0x00057aac) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00064d85) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00064d85) fep_hwr_candidate_pane_g

0xaee9,	// (0x00060146) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xaee9,	// (0x00060146) fep_vkb_candidate_drop_down_list_pane

0xb311,	// (0x0006056e) fep_vkb_candidate_pane_g3

0xb319,	// (0x00060576) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00064db2) fep_vkb_candidate_pane_g

0x6f62,	// (0x0005c1bf) cell_hwr_candidate_pane_g1_ParamLimits

0x6f70,	// (0x0005c1cd) cell_hwr_candidate_pane_g3_ParamLimits

0x6f70,	// (0x0005c1cd) cell_hwr_candidate_pane_g3

0xc84d,	// (0x00061aaa) cell_hwr_candidate_pane_g4_ParamLimits

0xc84d,	// (0x00061aaa) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x00064dd1) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x00064dd1) cell_hwr_candidate_pane_g

0xb330,	// (0x0006058d) cell_vkb_candidate_pane_g3_ParamLimits

0xb330,	// (0x0006058d) cell_vkb_candidate_pane_g3

0xb34b,	// (0x000605a8) cell_vkb_candidate_pane_g4_ParamLimits

0xb34b,	// (0x000605a8) cell_vkb_candidate_pane_g4

0xb43f,	// (0x0006069c) cell_app_pane_cp2_g1_ParamLimits

0xb43f,	// (0x0006069c) cell_app_pane_cp2_g1

0xb45d,	// (0x000606ba) cell_app_pane_cp2_g2_ParamLimits

0xb45d,	// (0x000606ba) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x00064e1b) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x00064e1b) cell_app_pane_cp2_g

0xb469,	// (0x000606c6) cell_app_pane_cp2_t1_ParamLimits

0xb469,	// (0x000606c6) cell_app_pane_cp2_t1

0xe4a6,	// (0x00063703) grid_highlight_pane_cp1_ParamLimits

0xe4a6,	// (0x00063703) grid_highlight_pane_cp1

0x6faf,	// (0x0005c20c) cell_hwr_candidate_pane_cp1_ParamLimits

0x6faf,	// (0x0005c20c) cell_hwr_candidate_pane_cp1

0x6f62,	// (0x0005c1bf) fep_hwr_candidate_drop_down_list_pane_g1

0x6fd3,	// (0x0005c230) fep_hwr_candidate_drop_down_list_pane_g2

0x6fe0,	// (0x0005c23d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00064e20) fep_hwr_candidate_drop_down_list_pane_g

0x6fed,	// (0x0005c24a) fep_hwr_candidate_drop_down_list_scroll_pane

0x6ff6,	// (0x0005c253) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ff6,	// (0x0005c253) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7003,	// (0x0005c260) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7003,	// (0x0005c260) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7010,	// (0x0005c26d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7010,	// (0x0005c26d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x701d,	// (0x0005c27a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x701d,	// (0x0005c27a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7038,	// (0x0005c295) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7038,	// (0x0005c295) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7053,	// (0x0005c2b0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7053,	// (0x0005c2b0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x706e,	// (0x0005c2cb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x706e,	// (0x0005c2cb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7089,	// (0x0005c2e6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7089,	// (0x0005c2e6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00064e27) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00064e27) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb47b,	// (0x000606d8) cell_vkb_candidate_pane_cp1_ParamLimits

0xb47b,	// (0x000606d8) cell_vkb_candidate_pane_cp1

0xafef,	// (0x0006024c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xafef,	// (0x0006024c) fep_vkb_candidate_drop_down_list_pane_g1

0xb4a1,	// (0x000606fe) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb4a1,	// (0x000606fe) fep_vkb_candidate_drop_down_list_pane_g2

0xb4ae,	// (0x0006070b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb4ae,	// (0x0006070b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x00064e38) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x00064e38) fep_vkb_candidate_drop_down_list_pane_g

0xb4bb,	// (0x00060718) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb4bb,	// (0x00060718) fep_vkb_candidate_drop_down_list_scroll_pane

0xb4c8,	// (0x00060725) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb4c8,	// (0x00060725) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb4d5,	// (0x00060732) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb4d5,	// (0x00060732) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb4e1,	// (0x0006073e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb4e1,	// (0x0006073e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb4ed,	// (0x0006074a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb4ed,	// (0x0006074a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb50e,	// (0x0006076b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb50e,	// (0x0006076b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb52f,	// (0x0006078c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb52f,	// (0x0006078c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb550,	// (0x000607ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb550,	// (0x000607ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb571,	// (0x000607ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb571,	// (0x000607ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x00064e3f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x00064e3f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x4e33,	// (0x0005a090) title_pane_g1_ParamLimits

0x4e40,	// (0x0005a09d) title_pane_g2_ParamLimits

0xf54e,	// (0x000647ab) title_pane_g_ParamLimits

0xf108,	// (0x00064365) aid_call2_pane

0xf110,	// (0x0006436d) aid_call_pane

0xf118,	// (0x00064375) popup_clock_analogue_window_g1

0xf118,	// (0x00064375) popup_clock_analogue_window_g2

0x5b7e,	// (0x0005addb) popup_clock_analogue_window_g3

0x5b87,	// (0x0005ade4) popup_clock_analogue_window_g4

0xc227,	// (0x00061484) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0006495a) popup_clock_analogue_window_g

0x5b8f,	// (0x0005adec) popup_clock_analogue_window_t1

0x5bd0,	// (0x0005ae2d) clock_digital_number_pane_ParamLimits

0x5bd0,	// (0x0005ae2d) clock_digital_number_pane

0x5bdc,	// (0x0005ae39) clock_digital_number_pane_cp02_ParamLimits

0x5bdc,	// (0x0005ae39) clock_digital_number_pane_cp02

0x5be8,	// (0x0005ae45) clock_digital_number_pane_cp03_ParamLimits

0x5be8,	// (0x0005ae45) clock_digital_number_pane_cp03

0x5bf4,	// (0x0005ae51) clock_digital_number_pane_cp04_ParamLimits

0x5bf4,	// (0x0005ae51) clock_digital_number_pane_cp04

0x5c00,	// (0x0005ae5d) clock_digital_separator_pane_ParamLimits

0x5c00,	// (0x0005ae5d) clock_digital_separator_pane

0x5c0c,	// (0x0005ae69) popup_clock_digital_window_t1_ParamLimits

0x5c0c,	// (0x0005ae69) popup_clock_digital_window_t1

0xc227,	// (0x00061484) clock_digital_number_pane_g1

0xc227,	// (0x00061484) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00064965) clock_digital_number_pane_g

0xc227,	// (0x00061484) clock_digital_separator_pane_g1

0xc227,	// (0x00061484) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00064965) clock_digital_separator_pane_g

0x8059,	// (0x0005d2b6) aid_fill_nsta_ParamLimits

0x81a9,	// (0x0005d406) indicator_nsta_pane_ParamLimits

0x833a,	// (0x0005d597) popup_clock_analogue_window

0x833a,	// (0x0005d597) popup_clock_digital_window

0xc28b,	// (0x000614e8) grid_indicator_nsta_pane_ParamLimits

0xa7a7,	// (0x0005fa04) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00064d05) clock_nsta_pane_t

0x5ae7,	// (0x0005ad44) aid_size_max_handle

0x5af1,	// (0x0005ad4e) aid_size_min_handle

0x1077,	// (0x000562d4) editor_scroll_pane

0xb58c,	// (0x000607e9) ex_editor_pane

0xe5d2,	// (0x0006382f) scroll_pane_cp13

0xe445,	// (0x000636a2) scroll_pane_cp14

0xf147,	// (0x000643a4) scroll_pane_cp36

0x5bb3,	// (0x0005ae10) list_single_graphic_hl_pane_cp2_ParamLimits

0x5bb3,	// (0x0005ae10) list_single_graphic_hl_pane_cp2

0x9b95,	// (0x0005edf2) list_single_graphic_hl_pane_ParamLimits

0x9b95,	// (0x0005edf2) list_single_graphic_hl_pane

0x3947,	// (0x00058ba4) aid_size_min_hl_cp1

0xb594,	// (0x000607f1) list_highlight_pane_cp34_ParamLimits

0xb594,	// (0x000607f1) list_highlight_pane_cp34

0xb5a5,	// (0x00060802) list_single_graphic_hl_pane_g1_ParamLimits

0xb5a5,	// (0x00060802) list_single_graphic_hl_pane_g1

0x70a4,	// (0x0005c301) list_single_graphic_hl_pane_g2_ParamLimits

0x70a4,	// (0x0005c301) list_single_graphic_hl_pane_g2

0x70a4,	// (0x0005c301) list_single_graphic_hl_pane_g3_ParamLimits

0x70a4,	// (0x0005c301) list_single_graphic_hl_pane_g3

0x9e60,	// (0x0005f0bd) list_single_graphic_hl_pane_g4_ParamLimits

0x9e60,	// (0x0005f0bd) list_single_graphic_hl_pane_g4

0x9f74,	// (0x0005f1d1) list_single_graphic_hl_pane_g5_ParamLimits

0x9f74,	// (0x0005f1d1) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x00064e50) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x00064e50) list_single_graphic_hl_pane_g

0x70b0,	// (0x0005c30d) list_single_graphic_hl_pane_t1_ParamLimits

0x70b0,	// (0x0005c30d) list_single_graphic_hl_pane_t1

0xb5b2,	// (0x0006080f) aid_size_min_hl_cp2

0xb5bb,	// (0x00060818) list_highlight_pane_cp34_cp2_ParamLimits

0xb5bb,	// (0x00060818) list_highlight_pane_cp34_cp2

0xb5a5,	// (0x00060802) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb5a5,	// (0x00060802) list_single_graphic_hl_pane_g1_cp2

0xb5c8,	// (0x00060825) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb5c8,	// (0x00060825) list_single_graphic_hl_pane_g2_cp2

0xb5d4,	// (0x00060831) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb5d4,	// (0x00060831) list_single_graphic_hl_pane_g3_cp2

0x1a89,	// (0x00056ce6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1a89,	// (0x00056ce6) list_single_graphic_hl_pane_g4_cp2

0xb5e2,	// (0x0006083f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb5e2,	// (0x0006083f) list_single_graphic_hl_pane_g5_cp2

0x623b,	// (0x0005b498) control_pane_g4_ParamLimits

0x623b,	// (0x0005b498) control_pane_g4

0x63e2,	// (0x0005b63f) bg_popup_sub_pane_cp10_ParamLimits

0xad7e,	// (0x0005ffdb) list_choice_list_pane_ParamLimits

0xad8d,	// (0x0005ffea) scroll_pane_cp23

0xc3cc,	// (0x00061629) bg_popup_preview_window_pane_cp02_ParamLimits

0xb3bc,	// (0x00060619) list_preview_fixed_pane_ParamLimits

0xb3d2,	// (0x0006062f) list_preview_fixed_pane_cp_ParamLimits

0xb3d2,	// (0x0006062f) list_preview_fixed_pane_cp

0xb3de,	// (0x0006063b) popup_preview_fixed_window_g1_ParamLimits

0xb3de,	// (0x0006063b) popup_preview_fixed_window_g1

0xb3ea,	// (0x00060647) popup_preview_fixed_window_g2_ParamLimits

0xb3ea,	// (0x00060647) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x00064dd8) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x00064dd8) popup_preview_fixed_window_g

0x59d6,	// (0x0005ac33) aid_navi_side_left_pane_ParamLimits

0x59eb,	// (0x0005ac48) aid_navi_side_right_pane_ParamLimits

0x5a03,	// (0x0005ac60) navi_icon_pane_stacon_ParamLimits

0x5a17,	// (0x0005ac74) navi_navi_pane_stacon_ParamLimits

0x5a03,	// (0x0005ac60) navi_text_pane_stacon_ParamLimits

0xc21d,	// (0x0006147a) main_text_info_pane

0xb60c,	// (0x00060869) listscroll_text_info_pane

0xb614,	// (0x00060871) list_text_info_pane_ParamLimits

0xb614,	// (0x00060871) list_text_info_pane

0xb623,	// (0x00060880) scroll_pane_cp24_ParamLimits

0xb623,	// (0x00060880) scroll_pane_cp24

0xb641,	// (0x0006089e) list_text_info_pane_t1_ParamLimits

0xb641,	// (0x0006089e) list_text_info_pane_t1

0x642c,	// (0x0005b689) popup_fast_swap2_window_ParamLimits

0x642c,	// (0x0005b689) popup_fast_swap2_window

0xb666,	// (0x000608c3) aid_size_cell_fast2

0xc21d,	// (0x0006147a) bg_popup_window_pane_cp17

0x8997,	// (0x0005dbf4) heading_pane_cp2

0xc5d2,	// (0x0006182f) listscroll_fast2_pane

0xb670,	// (0x000608cd) grid_fast2_pane

0xb67a,	// (0x000608d7) listscroll_fast2_pane_g1

0xb684,	// (0x000608e1) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x00064e5b) listscroll_fast2_pane_g

0xe5d2,	// (0x0006382f) scroll_pane_cp26

0xb68e,	// (0x000608eb) cell_fast2_pane_ParamLimits

0xb68e,	// (0x000608eb) cell_fast2_pane

0xb6a5,	// (0x00060902) cell_fast2_pane_g1

0xb6ae,	// (0x0006090b) cell_fast2_pane_g2

0xb6b7,	// (0x00060914) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x00064e60) cell_fast2_pane_g

0xc614,	// (0x00061871) grid_highlight_pane_cp9

0xc629,	// (0x00061886) main_eswt_pane_ParamLimits

0xc629,	// (0x00061886) main_eswt_pane

0xb638,	// (0x00060895) list_single_text_info_pane

0xb6bf,	// (0x0006091c) eswt_ctrl_button_pane

0xb6bf,	// (0x0006091c) eswt_ctrl_canvas_pane

0xb6c7,	// (0x00060924) eswt_ctrl_combo_pane

0xb6bf,	// (0x0006091c) eswt_ctrl_default_pane

0xb6bf,	// (0x0006091c) eswt_ctrl_label_pane

0xb6cf,	// (0x0006092c) eswt_ctrl_wait_pane

0xb6d7,	// (0x00060934) eswt_shell_pane

0xc21d,	// (0x0006147a) listscroll_eswt_app_pane

0xb6f7,	// (0x00060954) popup_eswt_tasktip_window_ParamLimits

0xb6f7,	// (0x00060954) popup_eswt_tasktip_window

0x85d7,	// (0x0005d834) bg_popup_window_pane_cp18

0xb708,	// (0x00060965) eswt_control_pane_g1_ParamLimits

0xb708,	// (0x00060965) eswt_control_pane_g1

0xb715,	// (0x00060972) eswt_control_pane_g2_ParamLimits

0xb715,	// (0x00060972) eswt_control_pane_g2

0xb722,	// (0x0006097f) eswt_control_pane_g3_ParamLimits

0xb722,	// (0x0006097f) eswt_control_pane_g3

0xb72f,	// (0x0006098c) eswt_control_pane_g4_ParamLimits

0xb72f,	// (0x0006098c) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x00064e67) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x00064e67) eswt_control_pane_g

0xe4a6,	// (0x00063703) bg_button_pane_ParamLimits

0xe4a6,	// (0x00063703) bg_button_pane

0xc629,	// (0x00061886) common_borders_pane_copy2_ParamLimits

0xc629,	// (0x00061886) common_borders_pane_copy2

0xb73c,	// (0x00060999) control_button_pane_g1_ParamLimits

0xb73c,	// (0x00060999) control_button_pane_g1

0xb748,	// (0x000609a5) control_button_pane_g2_ParamLimits

0xb748,	// (0x000609a5) control_button_pane_g2

0xb754,	// (0x000609b1) control_button_pane_g3_ParamLimits

0xb754,	// (0x000609b1) control_button_pane_g3

0x0002,

0xfc13,	// (0x00064e70) control_button_pane_g_ParamLimits

0xfc13,	// (0x00064e70) control_button_pane_g

0xb768,	// (0x000609c5) control_button_pane_t1

0xb776,	// (0x000609d3) control_button_pane_t2

0x0001,

0xfc1a,	// (0x00064e77) control_button_pane_t

0x8563,	// (0x0005d7c0) bg_button_pane_g1

0x8573,	// (0x0005d7d0) bg_button_pane_g2

0x856b,	// (0x0005d7c8) bg_button_pane_g3

0x8583,	// (0x0005d7e0) bg_button_pane_g4

0x857b,	// (0x0005d7d8) bg_button_pane_g5

0x858b,	// (0x0005d7e8) bg_button_pane_g6

0x8593,	// (0x0005d7f0) bg_button_pane_g7

0x85a3,	// (0x0005d800) bg_button_pane_g8

0x859b,	// (0x0005d7f8) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00064ac8) bg_button_pane_g

0xad39,	// (0x0005ff96) common_borders_pane_ParamLimits

0xad39,	// (0x0005ff96) common_borders_pane

0xb708,	// (0x00060965) eswt_control_pane_g1_copy1_ParamLimits

0xb708,	// (0x00060965) eswt_control_pane_g1_copy1

0xb715,	// (0x00060972) eswt_control_pane_g2_copy1_ParamLimits

0xb715,	// (0x00060972) eswt_control_pane_g2_copy1

0xb722,	// (0x0006097f) eswt_control_pane_g3_copy1_ParamLimits

0xb722,	// (0x0006097f) eswt_control_pane_g3_copy1

0xb72f,	// (0x0006098c) eswt_control_pane_g4_copy1_ParamLimits

0xb72f,	// (0x0006098c) eswt_control_pane_g4_copy1

0xad74,	// (0x0005ffd1) bg_eswt_ctrl_canvas_pane_g1

0xad39,	// (0x0005ff96) common_borders_pane_cp2_ParamLimits

0xad39,	// (0x0005ff96) common_borders_pane_cp2

0xad39,	// (0x0005ff96) common_borders_pane_cp3_ParamLimits

0xad39,	// (0x0005ff96) common_borders_pane_cp3

0xb784,	// (0x000609e1) separator_horizontal_pane

0xb78c,	// (0x000609e9) separator_vertical_pane

0xb708,	// (0x00060965) eswt_control_pane_g1_copy2_ParamLimits

0xb708,	// (0x00060965) eswt_control_pane_g1_copy2

0xb715,	// (0x00060972) eswt_control_pane_g2_copy2_ParamLimits

0xb715,	// (0x00060972) eswt_control_pane_g2_copy2

0xb722,	// (0x0006097f) eswt_control_pane_g3_copy2_ParamLimits

0xb722,	// (0x0006097f) eswt_control_pane_g3_copy2

0xb72f,	// (0x0006098c) eswt_control_pane_g4_copy2_ParamLimits

0xb72f,	// (0x0006098c) eswt_control_pane_g4_copy2

0xc21d,	// (0x0006147a) common_borders_pane_cp4

0xb795,	// (0x000609f2) separator_horizontal_pane_g1

0xb79e,	// (0x000609fb) separator_horizontal_pane_g2

0xb7a7,	// (0x00060a04) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x00064e7c) separator_horizontal_pane_g

0xb708,	// (0x00060965) eswt_control_pane_g1_copy3_ParamLimits

0xb708,	// (0x00060965) eswt_control_pane_g1_copy3

0xb715,	// (0x00060972) eswt_control_pane_g2_copy3_ParamLimits

0xb715,	// (0x00060972) eswt_control_pane_g2_copy3

0xb722,	// (0x0006097f) eswt_control_pane_g3_copy3_ParamLimits

0xb722,	// (0x0006097f) eswt_control_pane_g3_copy3

0xb72f,	// (0x0006098c) eswt_control_pane_g4_copy3_ParamLimits

0xb72f,	// (0x0006098c) eswt_control_pane_g4_copy3

0xc21d,	// (0x0006147a) common_borders_pane_cp5

0xb7b0,	// (0x00060a0d) separator_vertical_pane_g1

0xb7b9,	// (0x00060a16) separator_vertical_pane_g2

0xb7c2,	// (0x00060a1f) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x00064e83) separator_vertical_pane_g

0xb708,	// (0x00060965) eswt_control_pane_g1_copy4_ParamLimits

0xb708,	// (0x00060965) eswt_control_pane_g1_copy4

0xb715,	// (0x00060972) eswt_control_pane_g2_copy4_ParamLimits

0xb715,	// (0x00060972) eswt_control_pane_g2_copy4

0xb722,	// (0x0006097f) eswt_control_pane_g3_copy4_ParamLimits

0xb722,	// (0x0006097f) eswt_control_pane_g3_copy4

0xb72f,	// (0x0006098c) eswt_control_pane_g4_copy4_ParamLimits

0xb72f,	// (0x0006098c) eswt_control_pane_g4_copy4

0xb7cb,	// (0x00060a28) eswt_ctrl_combo_button_pane

0xb7d3,	// (0x00060a30) eswt_ctrl_input_pane

0xb7db,	// (0x00060a38) popup_choice_list_window_cp70

0xb7e3,	// (0x00060a40) eswt_ctrl_input_pane_t1

0xc21d,	// (0x0006147a) input_focus_pane_cp70

0xad39,	// (0x0005ff96) bg_button_pane_cp70_ParamLimits

0xad39,	// (0x0005ff96) bg_button_pane_cp70

0xb7f1,	// (0x00060a4e) eswt_ctrl_combo_button_pane_g1

0xb7f9,	// (0x00060a56) wait_bar_pane_cp70

0x85d7,	// (0x0005d834) bg_popup_window_pane_cp70_ParamLimits

0x85d7,	// (0x0005d834) bg_popup_window_pane_cp70

0xb801,	// (0x00060a5e) popup_eswt_tasktip_window_t1

0xb817,	// (0x00060a74) wait_bar_pane_cp71_ParamLimits

0xb817,	// (0x00060a74) wait_bar_pane_cp71

0xb823,	// (0x00060a80) grid_eswt_app_pane

0xefa7,	// (0x00064204) scroll_pane_cp70

0xb82c,	// (0x00060a89) cell_eswt_app_pane_ParamLimits

0xb82c,	// (0x00060a89) cell_eswt_app_pane

0xb85e,	// (0x00060abb) cell_eswt_app_pane_g1_ParamLimits

0xb85e,	// (0x00060abb) cell_eswt_app_pane_g1

0xb88d,	// (0x00060aea) cell_eswt_app_pane_g2_ParamLimits

0xb88d,	// (0x00060aea) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x00064e8a) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x00064e8a) cell_eswt_app_pane_g

0xb8b6,	// (0x00060b13) cell_eswt_app_pane_t1_ParamLimits

0xb8b6,	// (0x00060b13) cell_eswt_app_pane_t1

0xb8e8,	// (0x00060b45) grid_highlight_pane_cp70_ParamLimits

0xb8e8,	// (0x00060b45) grid_highlight_pane_cp70

0xf480,	// (0x000646dd) set_content_pane_g1

0x61d1,	// (0x0005b42e) status_small_volume_pane

0x70c6,	// (0x0005c323) status_small_volume_pane_g1

0x70ce,	// (0x0005c32b) volume_small2_pane

0x70d7,	// (0x0005c334) volume_small2_pane_g1

0x70e0,	// (0x0005c33d) volume_small2_pane_g2

0x70e9,	// (0x0005c346) volume_small2_pane_g3

0x70f2,	// (0x0005c34f) volume_small2_pane_g4

0x70fb,	// (0x0005c358) volume_small2_pane_g5

0x7104,	// (0x0005c361) volume_small2_pane_g6

0x710d,	// (0x0005c36a) volume_small2_pane_g7

0x7116,	// (0x0005c373) volume_small2_pane_g8

0x711f,	// (0x0005c37c) volume_small2_pane_g9

0x7128,	// (0x0005c385) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x00064e8f) volume_small2_pane_g

0xb143,	// (0x000603a0) fep_vkb_top_text_pane_g1_ParamLimits

0xb15e,	// (0x000603bb) fep_vkb_top_text_pane_t1_ParamLimits

0xb3f6,	// (0x00060653) popup_preview_fixed_window_g3_ParamLimits

0xb3f6,	// (0x00060653) popup_preview_fixed_window_g3

0x7f7d,	// (0x0005d1da) popup_toolbar_trans_pane

0x991b,	// (0x0005eb78) aid_height_set_list_ParamLimits

0x992c,	// (0x0005eb89) aid_size_parent_ParamLimits

0x63e2,	// (0x0005b63f) list_highlight_pane_cp2_ParamLimits

0xf480,	// (0x000646dd) set_content_pane_g1_ParamLimits

0x9ba9,	// (0x0005ee06) list_single_image_pane_ParamLimits

0x9ba9,	// (0x0005ee06) list_single_image_pane

0xb8f4,	// (0x00060b51) aid_size_cell_image_ParamLimits

0xb8f4,	// (0x00060b51) aid_size_cell_image

0xb901,	// (0x00060b5e) grid_single_image_pane_ParamLimits

0xb901,	// (0x00060b5e) grid_single_image_pane

0xe4b4,	// (0x00063711) list_single_image_pane_g1_ParamLimits

0xe4b4,	// (0x00063711) list_single_image_pane_g1

0xe4c0,	// (0x0006371d) list_single_image_pane_g2_ParamLimits

0xe4c0,	// (0x0006371d) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x00064ea4) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x00064ea4) list_single_image_pane_g

0xb90f,	// (0x00060b6c) list_single_image_pane_t1_ParamLimits

0xb90f,	// (0x00060b6c) list_single_image_pane_t1

0xb925,	// (0x00060b82) cell_image_list_pane_ParamLimits

0xb925,	// (0x00060b82) cell_image_list_pane

0xb93b,	// (0x00060b98) cell_image_list_pane_g1

0xb944,	// (0x00060ba1) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x00064ea9) cell_image_list_pane_g

0xb94d,	// (0x00060baa) aid_size_cell_tb_trans_pane

0xe4a6,	// (0x00063703) bg_tb_trans_pane

0xb95f,	// (0x00060bbc) grid_tb_trans_pane

0x8563,	// (0x0005d7c0) bg_tb_trans_pane_g1

0x8573,	// (0x0005d7d0) bg_tb_trans_pane_g2

0x856b,	// (0x0005d7c8) bg_tb_trans_pane_g3

0x8583,	// (0x0005d7e0) bg_tb_trans_pane_g4

0x857b,	// (0x0005d7d8) bg_tb_trans_pane_g5

0x85a3,	// (0x0005d800) bg_tb_trans_pane_g6

0x859b,	// (0x0005d7f8) bg_tb_trans_pane_g7

0x858b,	// (0x0005d7e8) bg_tb_trans_pane_g8

0x8593,	// (0x0005d7f0) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x00064eae) bg_tb_trans_pane_g

0xb973,	// (0x00060bd0) cell_toolbar_trans_pane_ParamLimits

0xb973,	// (0x00060bd0) cell_toolbar_trans_pane

0xad74,	// (0x0005ffd1) cell_toolbar_trans_pane_g1

0xa998,	// (0x0005fbf5) list_form2_midp_pane_t1

0xa9a6,	// (0x0005fc03) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00064d4b) list_form2_midp_pane_t

0xa9b4,	// (0x0005fc11) scroll_pane_cp51_ParamLimits

0xab7b,	// (0x0005fdd8) form2_midp_wait_pane_g1

0xab84,	// (0x0005fde1) form2_midp_wait_pane_g2

0xab8d,	// (0x0005fdea) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00064d60) form2_midp_wait_pane_g

0xc28b,	// (0x000614e8) list_highlight_pane_cp21_ParamLimits

0xabd1,	// (0x0005fe2e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xabe0,	// (0x0005fe3d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9b4e,	// (0x0005edab) list_single_2graphic_im_pane_ParamLimits

0x9b4e,	// (0x0005edab) list_single_2graphic_im_pane

0xb999,	// (0x00060bf6) list_single_2graphic_im_pane_g1_ParamLimits

0xb999,	// (0x00060bf6) list_single_2graphic_im_pane_g1

0xb9aa,	// (0x00060c07) list_single_2graphic_im_pane_g2_ParamLimits

0xb9aa,	// (0x00060c07) list_single_2graphic_im_pane_g2

0xb9b6,	// (0x00060c13) list_single_2graphic_im_pane_g3_ParamLimits

0xb9b6,	// (0x00060c13) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x00064ec1) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x00064ec1) list_single_2graphic_im_pane_g

0xb9d6,	// (0x00060c33) list_single_2graphic_im_pane_t1_ParamLimits

0xb9d6,	// (0x00060c33) list_single_2graphic_im_pane_t1

0xb402,	// (0x0006065f) list_single_graphic_2heading_pane_fp_ParamLimits

0xb402,	// (0x0006065f) list_single_graphic_2heading_pane_fp

0x3829,	// (0x00058a86) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3829,	// (0x00058a86) list_single_graphic_2heading_pane_fp_g1

0xb41b,	// (0x00060678) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb41b,	// (0x00060678) list_single_graphic_2heading_pane_fp_g2

0xb374,	// (0x000605d1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb374,	// (0x000605d1) list_single_graphic_2heading_pane_fp_g3

0xb380,	// (0x000605dd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb380,	// (0x000605dd) list_single_graphic_2heading_pane_fp_g4

0xb427,	// (0x00060684) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb427,	// (0x00060684) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064de8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064de8) list_single_graphic_2heading_pane_fp_g

0x3950,	// (0x00058bad) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3950,	// (0x00058bad) list_single_graphic_2heading_pane_fp_t1

0x3861,	// (0x00058abe) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3861,	// (0x00058abe) list_single_graphic_2heading_pane_fp_t2

0x3966,	// (0x00058bc3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3966,	// (0x00058bc3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x00064eca) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x00064eca) list_single_graphic_2heading_pane_fp_t

0xae05,	// (0x00060062) fep_hwr_write_pane_g5_ParamLimits

0xae05,	// (0x00060062) fep_hwr_write_pane_g5

0xae11,	// (0x0006006e) fep_hwr_write_pane_g6_ParamLimits

0xae11,	// (0x0006006e) fep_hwr_write_pane_g6

0xb6d7,	// (0x00060934) eswt_shell_pane_ParamLimits

0x85d7,	// (0x0005d834) bg_popup_window_pane_cp18_ParamLimits

0x9872,	// (0x0005eacf) heading_pane_cp70

0xb801,	// (0x00060a5e) popup_eswt_tasktip_window_t1_ParamLimits

0x80b0,	// (0x0005d30d) aid_touch_tab_arrow_left

0x80bf,	// (0x0005d31c) aid_touch_tab_arrow_right

0xc23b,	// (0x00061498) title_pane_g3_ParamLimits

0xc23b,	// (0x00061498) title_pane_g3

0xe465,	// (0x000636c2) set_value_pane_g1

0x7f7d,	// (0x0005d1da) popup_toolbar_trans_pane_ParamLimits

0xb94d,	// (0x00060baa) aid_size_cell_tb_trans_pane_ParamLimits

0xe4a6,	// (0x00063703) bg_tb_trans_pane_ParamLimits

0xb95f,	// (0x00060bbc) grid_tb_trans_pane_ParamLimits

0xc3cc,	// (0x00061629) cont_note_pane_ParamLimits

0xc3cc,	// (0x00061629) cont_note_pane

0xc629,	// (0x00061886) cont_snote2_single_text_pane_ParamLimits

0xc629,	// (0x00061886) cont_snote2_single_text_pane

0xc629,	// (0x00061886) cont_snote2_single_graphic_pane_ParamLimits

0xc629,	// (0x00061886) cont_snote2_single_graphic_pane

0x8bb3,	// (0x0005de10) cont_note_wait_pane_ParamLimits

0x8bb3,	// (0x0005de10) cont_note_wait_pane

0x8bb3,	// (0x0005de10) cont_note_image_pane_ParamLimits

0x8bb3,	// (0x0005de10) cont_note_image_pane

0xba07,	// (0x00060c64) popup_note2_window_g1_ParamLimits

0xba07,	// (0x00060c64) popup_note2_window_g1

0xba38,	// (0x00060c95) popup_note2_window_t1_ParamLimits

0xba38,	// (0x00060c95) popup_note2_window_t1

0xba7d,	// (0x00060cda) popup_note2_window_t2_ParamLimits

0xba7d,	// (0x00060cda) popup_note2_window_t2

0xbac2,	// (0x00060d1f) popup_note2_window_t3_ParamLimits

0xbac2,	// (0x00060d1f) popup_note2_window_t3

0xbb07,	// (0x00060d64) popup_note2_window_t4_ParamLimits

0xbb07,	// (0x00060d64) popup_note2_window_t4

0xc450,	// (0x000616ad) popup_note2_window_t5_ParamLimits

0xc450,	// (0x000616ad) popup_note2_window_t5

0x0004,

0xfc79,	// (0x00064ed6) popup_note2_window_t_ParamLimits

0xfc79,	// (0x00064ed6) popup_note2_window_t

0xbb36,	// (0x00060d93) popup_note2_image_window_g1_ParamLimits

0xbb36,	// (0x00060d93) popup_note2_image_window_g1

0xbb42,	// (0x00060d9f) popup_note2_image_window_g2_ParamLimits

0xbb42,	// (0x00060d9f) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x00064ee1) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x00064ee1) popup_note2_image_window_g

0xbb54,	// (0x00060db1) popup_note2_image_window_t1_ParamLimits

0xbb54,	// (0x00060db1) popup_note2_image_window_t1

0xbb6c,	// (0x00060dc9) popup_note2_image_window_t2_ParamLimits

0xbb6c,	// (0x00060dc9) popup_note2_image_window_t2

0xbb84,	// (0x00060de1) popup_note2_image_window_t3_ParamLimits

0xbb84,	// (0x00060de1) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x00064ee6) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x00064ee6) popup_note2_image_window_t

0x8bc1,	// (0x0005de1e) popup_note2_wait_window_g1_ParamLimits

0x8bc1,	// (0x0005de1e) popup_note2_wait_window_g1

0xbba0,	// (0x00060dfd) popup_note2_wait_window_g2_ParamLimits

0xbba0,	// (0x00060dfd) popup_note2_wait_window_g2

0x8bd9,	// (0x0005de36) popup_note2_wait_window_g3_ParamLimits

0x8bd9,	// (0x0005de36) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x00064eed) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x00064eed) popup_note2_wait_window_g

0xbbac,	// (0x00060e09) popup_note2_wait_window_t1_ParamLimits

0xbbac,	// (0x00060e09) popup_note2_wait_window_t1

0xbbca,	// (0x00060e27) popup_note2_wait_window_t2_ParamLimits

0xbbca,	// (0x00060e27) popup_note2_wait_window_t2

0xbbe8,	// (0x00060e45) popup_note2_wait_window_t3_ParamLimits

0xbbe8,	// (0x00060e45) popup_note2_wait_window_t3

0xbbfa,	// (0x00060e57) popup_note2_wait_window_t4_ParamLimits

0xbbfa,	// (0x00060e57) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x00064ef4) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x00064ef4) popup_note2_wait_window_t

0xbc0c,	// (0x00060e69) wait_bar2_pane_ParamLimits

0xbc0c,	// (0x00060e69) wait_bar2_pane

0xbc24,	// (0x00060e81) popup_snote2_single_text_window_g1_ParamLimits

0xbc24,	// (0x00060e81) popup_snote2_single_text_window_g1

0xbc4c,	// (0x00060ea9) popup_snote2_single_text_window_t1_ParamLimits

0xbc4c,	// (0x00060ea9) popup_snote2_single_text_window_t1

0xbc98,	// (0x00060ef5) popup_snote2_single_text_window_t2_ParamLimits

0xbc98,	// (0x00060ef5) popup_snote2_single_text_window_t2

0xbce4,	// (0x00060f41) popup_snote2_single_text_window_t3_ParamLimits

0xbce4,	// (0x00060f41) popup_snote2_single_text_window_t3

0xbd25,	// (0x00060f82) popup_snote2_single_text_window_t4_ParamLimits

0xbd25,	// (0x00060f82) popup_snote2_single_text_window_t4

0xbd5b,	// (0x00060fb8) popup_snote2_single_text_window_t5_ParamLimits

0xbd5b,	// (0x00060fb8) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x00064efd) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x00064efd) popup_snote2_single_text_window_t

0xbd86,	// (0x00060fe3) popup_snote2_single_graphic_window_g1_ParamLimits

0xbd86,	// (0x00060fe3) popup_snote2_single_graphic_window_g1

0xbdae,	// (0x0006100b) popup_snote2_single_graphic_window_g2_ParamLimits

0xbdae,	// (0x0006100b) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x00064f08) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x00064f08) popup_snote2_single_graphic_window_g

0xbdd6,	// (0x00061033) popup_snote2_single_graphic_window_t1_ParamLimits

0xbdd6,	// (0x00061033) popup_snote2_single_graphic_window_t1

0xbe22,	// (0x0006107f) popup_snote2_single_graphic_window_t2_ParamLimits

0xbe22,	// (0x0006107f) popup_snote2_single_graphic_window_t2

0xbce4,	// (0x00060f41) popup_snote2_single_graphic_window_t3_ParamLimits

0xbce4,	// (0x00060f41) popup_snote2_single_graphic_window_t3

0xbd25,	// (0x00060f82) popup_snote2_single_graphic_window_t4_ParamLimits

0xbd25,	// (0x00060f82) popup_snote2_single_graphic_window_t4

0xbd5b,	// (0x00060fb8) popup_snote2_single_graphic_window_t5_ParamLimits

0xbd5b,	// (0x00060fb8) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x00064f0d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x00064f0d) popup_snote2_single_graphic_window_t

0xa864,	// (0x0005fac1) clock_nsta_pane_cp2_t1

0xa864,	// (0x0005fac1) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00064d21) clock_nsta_pane_cp2_t

0x3217,	// (0x00058474) form_field_data_wide_pane_g1_ParamLimits

0xe4b4,	// (0x00063711) form_field_data_wide_pane_g2_ParamLimits

0xe4b4,	// (0x00063711) form_field_data_wide_pane_g2

0xe4c0,	// (0x0006371d) form_field_data_wide_pane_g3_ParamLimits

0xe4c0,	// (0x0006371d) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000648dd) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000648dd) form_field_data_wide_pane_g

0xa743,	// (0x0005f9a0) grid_touch_3_pane_ParamLimits

0xa743,	// (0x0005f9a0) grid_touch_3_pane

0xbe6e,	// (0x000610cb) cell_touch_3_pane_ParamLimits

0xbe6e,	// (0x000610cb) cell_touch_3_pane

0xad74,	// (0x0005ffd1) cell_touch_3_pane_g1

0xad74,	// (0x0005ffd1) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00064da6) cell_touch_3_pane_g

0xc482,	// (0x000616df) cont_query_data_pane

0xc48a,	// (0x000616e7) cont_query_data_pane_cp1

0xbea1,	// (0x000610fe) button_value_adjust_pane_cp7

0xbea9,	// (0x00061106) query_popup_pane_cp3

0xf178,	// (0x000643d5) bg_popup_sub_pane_cp22_ParamLimits

0x5c8d,	// (0x0005aeea) navi_navi_volume_pane_cp2

0x5ca8,	// (0x0005af05) popup_side_volume_key_window_g2

0x5cb7,	// (0x0005af14) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00064973) popup_side_volume_key_window_g

0x5cd4,	// (0x0005af31) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0006497a) popup_side_volume_key_window_t

0xf383,	// (0x000645e0) popup_side_volume_key_window_ParamLimits

0x53bc,	// (0x0005a619) list_double_graphic_pane_g4_ParamLimits

0x53bc,	// (0x0005a619) list_double_graphic_pane_g4

0x9b7d,	// (0x0005edda) list_single_2heading_msg_pane_ParamLimits

0x9b7d,	// (0x0005edda) list_single_2heading_msg_pane

0x9f88,	// (0x0005f1e5) list_single_2heading_msg_pane_g1_ParamLimits

0x9f88,	// (0x0005f1e5) list_single_2heading_msg_pane_g1

0x1a89,	// (0x00056ce6) list_single_2heading_msg_pane_g2_ParamLimits

0x1a89,	// (0x00056ce6) list_single_2heading_msg_pane_g2

0x9f94,	// (0x0005f1f1) list_single_2heading_msg_pane_g3_ParamLimits

0x9f94,	// (0x0005f1f1) list_single_2heading_msg_pane_g3

0x9fa0,	// (0x0005f1fd) list_single_2heading_msg_pane_g4_ParamLimits

0x9fa0,	// (0x0005f1fd) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x00064f18) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x00064f18) list_single_2heading_msg_pane_g

0x7131,	// (0x0005c38e) list_single_2heading_msg_pane_t1_ParamLimits

0x7131,	// (0x0005c38e) list_single_2heading_msg_pane_t1

0x7159,	// (0x0005c3b6) list_single_2heading_msg_pane_t2_ParamLimits

0x7159,	// (0x0005c3b6) list_single_2heading_msg_pane_t2

0x7188,	// (0x0005c3e5) list_single_2heading_msg_pane_t3_ParamLimits

0x7188,	// (0x0005c3e5) list_single_2heading_msg_pane_t3

0x3986,	// (0x00058be3) list_single_2heading_msg_pane_t4_ParamLimits

0x3986,	// (0x00058be3) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x00064f21) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x00064f21) list_single_2heading_msg_pane_t

0xc247,	// (0x000614a4) title_pane_g4_ParamLimits

0xc247,	// (0x000614a4) title_pane_g4

0x5926,	// (0x0005ab83) title_pane_stacon_g3_ParamLimits

0x5926,	// (0x0005ab83) title_pane_stacon_g3

0xb9ca,	// (0x00060c27) list_single_2graphic_im_pane_g4_ParamLimits

0xb9ca,	// (0x00060c27) list_single_2graphic_im_pane_g4

0x9623,	// (0x0005e880) popup_side_volume_key_window_cp

0xa05e,	// (0x0005f2bb) main_idle_act2_pane_t1

0x67c1,	// (0x0005ba1e) toolbar_button_pane_g10

0x51a6,	// (0x0005a403) popup_toolbar_window_cp1

0xa855,	// (0x0005fab2) clock_nsta_pane_cp_t1

0xa855,	// (0x0005fab2) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00064d1c) clock_nsta_pane_cp_t

0x5c8d,	// (0x0005aeea) navi_navi_volume_pane_cp2_ParamLimits

0x5c9c,	// (0x0005aef9) popup_side_volume_key_window_g1_ParamLimits

0x5ca8,	// (0x0005af05) popup_side_volume_key_window_g2_ParamLimits

0x5cb7,	// (0x0005af14) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00064973) popup_side_volume_key_window_g_ParamLimits

0x6cf5,	// (0x0005bf52) fep_hwr_aid_pane

0x6d9e,	// (0x0005bffb) bg_fep_hwr_top_pane_g4_ParamLimits

0xadd5,	// (0x00060032) fep_hwr_top_pane_g1_ParamLimits

0xade7,	// (0x00060044) fep_hwr_top_pane_g2_ParamLimits

0x6dbe,	// (0x0005c01b) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00064d71) fep_hwr_top_pane_g_ParamLimits

0x6dd3,	// (0x0005c030) fep_hwr_top_text_pane_ParamLimits

0x93d8,	// (0x0005e635) aid_touch_tab_arrow_arrow_2

0x93e1,	// (0x0005e63e) aid_touch_tab_arrow_left_2

0x6d09,	// (0x0005bf66) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6d40,	// (0x0005bf9d) fep_hwr_prediction_pane

0xaf3d,	// (0x0006019a) fep_vkb_prediction_pane

0xb043,	// (0x000602a0) fep_vkb_side_pane_g3_ParamLimits

0xb043,	// (0x000602a0) fep_vkb_side_pane_g3

0x6f62,	// (0x0005c1bf) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6fd3,	// (0x0005c230) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6fe0,	// (0x0005c23d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x00064e20) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x71c1,	// (0x0005c41e) fep_hwr_prediction_pane_g1

0x71cb,	// (0x0005c428) fep_hwr_prediction_pane_g2

0x71d3,	// (0x0005c430) fep_hwr_prediction_pane_g3

0x71db,	// (0x0005c438) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x00064f2a) fep_hwr_prediction_pane_g

0xbed0,	// (0x0006112d) fep_vkb_prediction_pane_g1

0xbeda,	// (0x00061137) fep_vkb_prediction_pane_g2

0xbee2,	// (0x0006113f) fep_vkb_prediction_pane_g3

0xbeea,	// (0x00061147) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x00064f33) fep_vkb_prediction_pane_g

0x6b29,	// (0x0005bd86) slider_set_pane_g3

0x6b3d,	// (0x0005bd9a) slider_set_pane_g4

0x6b55,	// (0x0005bdb2) slider_set_pane_g5

0x6b29,	// (0x0005bd86) slider_set_pane_g6

0x6b6b,	// (0x0005bdc8) slider_set_pane_g7

0x9ab1,	// (0x0005ed0e) slider_form_pane_g3

0x9aba,	// (0x0005ed17) slider_form_pane_g4

0x9ac2,	// (0x0005ed1f) slider_form_pane_g5

0x9ab1,	// (0x0005ed0e) slider_form_pane_g6

0x9aca,	// (0x0005ed27) slider_form_pane_g7

0xa315,	// (0x0005f572) slider_set_pane_vc_g3

0xa31e,	// (0x0005f57b) slider_set_pane_vc_g4

0xa327,	// (0x0005f584) slider_set_pane_vc_g5

0xa315,	// (0x0005f572) slider_set_pane_vc_g6

0xa330,	// (0x0005f58d) slider_set_pane_vc_g7

0xa508,	// (0x0005f765) slider_form_pane_vc_g1

0xa511,	// (0x0005f76e) slider_form_pane_vc_g2

0xa51a,	// (0x0005f777) slider_form_pane_vc_g3

0xa508,	// (0x0005f765) slider_form_pane_vc_g4

0xa523,	// (0x0005f780) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00064cee) slider_form_pane_vc_g

0xc21d,	// (0x0006147a) main_idle_act3_pane

0xbef2,	// (0x0006114f) ai3_links_pane

0xbefb,	// (0x00061158) popup_ai3_data_window_ParamLimits

0xbefb,	// (0x00061158) popup_ai3_data_window

0xc21d,	// (0x0006147a) grid_ai3_links_pane

0xbf19,	// (0x00061176) cell_ai3_links_pane_ParamLimits

0xbf19,	// (0x00061176) cell_ai3_links_pane

0xbf33,	// (0x00061190) bg_popup_sub_pane_cp11

0xbf40,	// (0x0006119d) cell_ai3_links_pane_g1

0xc21d,	// (0x0006147a) bg_popup_sub_pane_cp12

0xbf65,	// (0x000611c2) heading_ai3_data_pane

0xbf6d,	// (0x000611ca) list_ai3_gene_pane

0xbf79,	// (0x000611d6) popup_ai3_data_window_g1

0xbf81,	// (0x000611de) heading_ai3_data_pane_g1

0xbf89,	// (0x000611e6) heading_ai3_data_pane_t1

0xbf97,	// (0x000611f4) list_double_ai3_gene_pane_ParamLimits

0xbf97,	// (0x000611f4) list_double_ai3_gene_pane

0xbfa4,	// (0x00061201) list_single_ai3_gene_pane_ParamLimits

0xbfa4,	// (0x00061201) list_single_ai3_gene_pane

0xad39,	// (0x0005ff96) list_highlight_pane_cp7_ParamLimits

0xad39,	// (0x0005ff96) list_highlight_pane_cp7

0xbfb1,	// (0x0006120e) list_single_a13_gene_pane_t1_ParamLimits

0xbfb1,	// (0x0006120e) list_single_a13_gene_pane_t1

0xbfc8,	// (0x00061225) list_single_ai3_gene_pane_g1

0xbfd1,	// (0x0006122e) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x00064f3c) list_single_ai3_gene_pane_g

0xbfd9,	// (0x00061236) list_double_ai3_gene_pane_g1_ParamLimits

0xbfd9,	// (0x00061236) list_double_ai3_gene_pane_g1

0xbfe5,	// (0x00061242) list_double_ai3_gene_pane_t1_ParamLimits

0xbfe5,	// (0x00061242) list_double_ai3_gene_pane_t1

0xc001,	// (0x0006125e) list_double_ai3_gene_pane_t2_ParamLimits

0xc001,	// (0x0006125e) list_double_ai3_gene_pane_t2

0xc016,	// (0x00061273) list_double_ai3_gene_pane_t3_ParamLimits

0xc016,	// (0x00061273) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x00064f41) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x00064f41) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x397c,	// (0x00058bd9) aid_size_min_col_2

0xbeba,	// (0x00061117) aid_size_min_msg_ParamLimits

0xbeba,	// (0x00061117) aid_size_min_msg

0xb14f,	// (0x000603ac) fep_vkb_top_text_pane_g2_ParamLimits

0xb14f,	// (0x000603ac) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00064da1) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00064da1) fep_vkb_top_text_pane_g

0xc21d,	// (0x0006147a) main_hc_apps_shell_pane

0xc033,	// (0x00061290) grid_hc_apps_pane_ParamLimits

0xc033,	// (0x00061290) grid_hc_apps_pane

0xc042,	// (0x0006129f) list_hc_apps_pane

0xc04a,	// (0x000612a7) scroll_pane_cp37_ParamLimits

0xc04a,	// (0x000612a7) scroll_pane_cp37

0xc056,	// (0x000612b3) cell_hc_apps_pane_ParamLimits

0xc056,	// (0x000612b3) cell_hc_apps_pane

0xc10e,	// (0x0006136b) cell_hc_apps_pane_g1_ParamLimits

0xc10e,	// (0x0006136b) cell_hc_apps_pane_g1

0xc13f,	// (0x0006139c) cell_hc_apps_pane_g2_ParamLimits

0xc13f,	// (0x0006139c) cell_hc_apps_pane_g2

0xc15b,	// (0x000613b8) cell_hc_apps_pane_g3_ParamLimits

0xc15b,	// (0x000613b8) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x00064f48) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x00064f48) cell_hc_apps_pane_g

0xc17d,	// (0x000613da) cell_hc_apps_pane_t1_ParamLimits

0xc17d,	// (0x000613da) cell_hc_apps_pane_t1

0xc3cc,	// (0x00061629) grid_highlight_pane_cp10_ParamLimits

0xc3cc,	// (0x00061629) grid_highlight_pane_cp10

0xc1bd,	// (0x0006141a) list_single_hc_apps_pane_ParamLimits

0xc1bd,	// (0x0006141a) list_single_hc_apps_pane

0xc1fc,	// (0x00061459) list_single_hc_apps_pane_g1

0x9fb8,	// (0x0005f215) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x00064f4f) list_single_hc_apps_pane_g

0x9fd1,	// (0x0005f22e) list_single_hc_apps_pane_g2_copy1

0x71e3,	// (0x0005c440) list_single_hc_apps_pane_t1

0xc28b,	// (0x000614e8) bg_set_opt_pane_cp_ParamLimits

0x4ef7,	// (0x0005a154) setting_slider_pane_t1_ParamLimits

0x4f10,	// (0x0005a16d) setting_slider_pane_t2_ParamLimits

0x4f2a,	// (0x0005a187) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000647bb) setting_slider_pane_t_ParamLimits

0x4f42,	// (0x0005a19f) slider_set_pane_ParamLimits

0x624f,	// (0x0005b4ac) control_pane_g5_ParamLimits

0x624f,	// (0x0005b4ac) control_pane_g5

0x98de,	// (0x0005eb3b) slider_set_pane_g1_ParamLimits

0x6b1d,	// (0x0005bd7a) slider_set_pane_g2_ParamLimits

0x6b29,	// (0x0005bd86) slider_set_pane_g3_ParamLimits

0x6b3d,	// (0x0005bd9a) slider_set_pane_g4_ParamLimits

0x6b55,	// (0x0005bdb2) slider_set_pane_g5_ParamLimits

0x6b29,	// (0x0005bd86) slider_set_pane_g6_ParamLimits

0x6b6b,	// (0x0005bdc8) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00064bc6) slider_set_pane_g_ParamLimits

0xf42b,	// (0x00064688) navi_icon_text_pane_ParamLimits

0x806f,	// (0x0005d2cc) aid_fill_nsta_2_ParamLimits

0x80b0,	// (0x0005d30d) aid_touch_tab_arrow_left_ParamLimits

0x80bf,	// (0x0005d31c) aid_touch_tab_arrow_right_ParamLimits

0x812c,	// (0x0005d389) clock_nsta_pane_ParamLimits

0x93ba,	// (0x0005e617) navi_icon_pane_g1_ParamLimits

0x93c6,	// (0x0005e623) navi_text_pane_t1_ParamLimits

0xa972,	// (0x0005fbcf) navi_icon_text_pane_g1_ParamLimits

0xa97e,	// (0x0005fbdb) navi_icon_text_pane_t1_ParamLimits

0xc1fc,	// (0x00061459) list_single_hc_apps_pane_g1_ParamLimits

0x9fb8,	// (0x0005f215) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x00064f4f) list_single_hc_apps_pane_g_ParamLimits

0x9fd1,	// (0x0005f22e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x71e3,	// (0x0005c440) list_single_hc_apps_pane_t1_ParamLimits

0x4d3f,	// (0x00059f9c) popup_toolbar2_fixed_window_ParamLimits

0x4d3f,	// (0x00059f9c) popup_toolbar2_fixed_window

0x7f73,	// (0x0005d1d0) popup_toolbar2_float_window

0xc21d,	// (0x0006147a) bg_popup_sub_pane_cp27

0xc86e,	// (0x00061acb) grid_toolbar2_float_pane

0xc21d,	// (0x0006147a) bg_popup_sub_pane_cp26

0xc86e,	// (0x00061acb) grid_toolbar2_fixed_pane

0xc876,	// (0x00061ad3) cell_toolbar2_fixed_pane_ParamLimits

0xc876,	// (0x00061ad3) cell_toolbar2_fixed_pane

0xc886,	// (0x00061ae3) cell_toolbar2_fixed_pane_g1

0xc88f,	// (0x00061aec) toolbar2_fixed_button_pane

0x8563,	// (0x0005d7c0) toolbar2_fixed_button_pane_g1

0x8573,	// (0x0005d7d0) toolbar2_fixed_button_pane_g2

0x856b,	// (0x0005d7c8) toolbar2_fixed_button_pane_g3

0x8583,	// (0x0005d7e0) toolbar2_fixed_button_pane_g4

0x857b,	// (0x0005d7d8) toolbar2_fixed_button_pane_g5

0x858b,	// (0x0005d7e8) toolbar2_fixed_button_pane_g6

0x8593,	// (0x0005d7f0) toolbar2_fixed_button_pane_g7

0x85a3,	// (0x0005d800) toolbar2_fixed_button_pane_g8

0x859b,	// (0x0005d7f8) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00064ac8) toolbar2_fixed_button_pane_g

0xc897,	// (0x00061af4) cell_toolbar2_float_pane_ParamLimits

0xc897,	// (0x00061af4) cell_toolbar2_float_pane

0xc8a8,	// (0x00061b05) cell_toolbar2_float_pane_g1

0xc88f,	// (0x00061aec) toolbar2_fixed_button_pane_cp

0xaeab,	// (0x00060108) fep_vkb_accented_list_pane_ParamLimits

0xaeab,	// (0x00060108) fep_vkb_accented_list_pane

0x6f42,	// (0x0005c19f) bg_popup_fep_shadow_pane_g9

0x1077,	// (0x000562d4) bg_popup_fep_shadow_pane_cp3

0xe5b9,	// (0x00063816) list_accented_list_pane

0xc8b1,	// (0x00061b0e) list_single_accented_list_pane_ParamLimits

0xc8b1,	// (0x00061b0e) list_single_accented_list_pane

0x1077,	// (0x000562d4) list_highlight_pane_cp10

0xc8c2,	// (0x00061b1f) list_single_accented_list_pane_t1

0x7eb9,	// (0x0005d116) popup_slider_window_ParamLimits

0x7eb9,	// (0x0005d116) popup_slider_window

0xbeb1,	// (0x0006110e) aid_indentation_list_msg

0xc98e,	// (0x00061beb) bg_popup_window_pane_cp19

0xc9fc,	// (0x00061c59) popup_slider_window_g1

0xca18,	// (0x00061c75) popup_slider_window_g2

0xca34,	// (0x00061c91) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x00064f54) popup_slider_window_g

0xca90,	// (0x00061ced) popup_slider_window_t1

0xcb04,	// (0x00061d61) small_volume_slider_vertical_pane

0xad74,	// (0x0005ffd1) small_volume_slider_vertical_pane_g1

0xad74,	// (0x0005ffd1) small_volume_slider_vertical_pane_g2

0xcb20,	// (0x00061d7d) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x00064f66) small_volume_slider_vertical_pane_g

0x4aed,	// (0x00059d4a) area_side_right_pane_ParamLimits

0x4aed,	// (0x00059d4a) area_side_right_pane

0x7211,	// (0x0005c46e) aid_size_side_button_ParamLimits

0x7211,	// (0x0005c46e) aid_size_side_button

0x7225,	// (0x0005c482) grid_sctrl_middle_pane_ParamLimits

0x7225,	// (0x0005c482) grid_sctrl_middle_pane

0x7245,	// (0x0005c4a2) sctrl_sk_bottom_pane

0x7256,	// (0x0005c4b3) sctrl_sk_top_pane

0x7268,	// (0x0005c4c5) aid_touch_sctrl_top

0x7275,	// (0x0005c4d2) bg_sctrl_sk_pane_ParamLimits

0x7275,	// (0x0005c4d2) bg_sctrl_sk_pane

0x7283,	// (0x0005c4e0) sctrl_sk_top_pane_g1

0x7290,	// (0x0005c4ed) sctrl_sk_top_pane_t1

0x7268,	// (0x0005c4c5) aid_touch_sctrl_bottom

0x7275,	// (0x0005c4d2) bg_sctrl_sk_pane_cp_ParamLimits

0x7275,	// (0x0005c4d2) bg_sctrl_sk_pane_cp

0x72ab,	// (0x0005c508) sctrl_sk_bottom_pane_g1

0x7290,	// (0x0005c4ed) sctrl_sk_bottom_pane_t1

0x72b4,	// (0x0005c511) cell_sctrl_middle_pane_ParamLimits

0x72b4,	// (0x0005c511) cell_sctrl_middle_pane

0x72d1,	// (0x0005c52e) aid_touch_sctrl_middle_ParamLimits

0x72d1,	// (0x0005c52e) aid_touch_sctrl_middle

0x72e3,	// (0x0005c540) bg_sctrl_middle_pane_ParamLimits

0x72e3,	// (0x0005c540) bg_sctrl_middle_pane

0x6f62,	// (0x0005c1bf) cell_sctrl_middle_pane_g1_ParamLimits

0x6f62,	// (0x0005c1bf) cell_sctrl_middle_pane_g1

0x72f1,	// (0x0005c54e) cell_sctrl_middle_pane_g2_ParamLimits

0x72f1,	// (0x0005c54e) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x00064f72) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x00064f72) cell_sctrl_middle_pane_g

0x8563,	// (0x0005d7c0) bg_sctrl_middle_pane_g1

0x856b,	// (0x0005d7c8) bg_sctrl_middle_pane_g2

0x8573,	// (0x0005d7d0) bg_sctrl_middle_pane_g3

0x857b,	// (0x0005d7d8) bg_sctrl_middle_pane_g4

0x8583,	// (0x0005d7e0) bg_sctrl_middle_pane_g5

0x858b,	// (0x0005d7e8) bg_sctrl_middle_pane_g6

0x8593,	// (0x0005d7f0) bg_sctrl_middle_pane_g7

0x859b,	// (0x0005d7f8) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x00064f77) bg_sctrl_middle_pane_g

0x85a3,	// (0x0005d800) bg_sctrl_middle_pane_g8_copy1

0x8563,	// (0x0005d7c0) bg_sctrl_sk_pane_g1

0x8573,	// (0x0005d7d0) bg_sctrl_sk_pane_g2

0x856b,	// (0x0005d7c8) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00064ac8) bg_sctrl_sk_pane_g

0xc7e7,	// (0x00061a44) aid_size_touch_scroll_bar

0x8583,	// (0x0005d7e0) bg_sctrl_sk_pane_g4

0x857b,	// (0x0005d7d8) bg_sctrl_sk_pane_g5

0x858b,	// (0x0005d7e8) bg_sctrl_sk_pane_g6

0x8593,	// (0x0005d7f0) bg_sctrl_sk_pane_g7

0x85a3,	// (0x0005d800) bg_sctrl_sk_pane_g8

0x859b,	// (0x0005d7f8) bg_sctrl_sk_pane_g9

0x6490,	// (0x0005b6ed) popup_fep_china_hwr2_fs_candidate_window

0x649a,	// (0x0005b6f7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x649a,	// (0x0005b6f7) popup_fep_china_hwr2_fs_control_window

0x6f62,	// (0x0005c1bf) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x00064f6d) sctrl_sk_top_pane_g

0xcb29,	// (0x00061d86) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcb29,	// (0x00061d86) aid_fep_china_hwr2_fs_cell

0xcb3c,	// (0x00061d99) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcb3c,	// (0x00061d99) bg_popup_fep_shadow_pane_cp4

0xcb55,	// (0x00061db2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcb55,	// (0x00061db2) bg_popup_fep_shadow_pane_cp5

0xcb67,	// (0x00061dc4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcb67,	// (0x00061dc4) popup_fep_china_hwr2_fs_control_bar_grid

0xcb77,	// (0x00061dd4) popup_fep_china_hwr2_fs_control_funtion_grid

0xcb7f,	// (0x00061ddc) aid_fep_china_hwr2_fs_candi_cell

0xc21d,	// (0x0006147a) bg_popup_fep_shadow_pane_cp6

0xcb89,	// (0x00061de6) popup_fep_china_hwr2_fs_candidate_grid

0xcb93,	// (0x00061df0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcb93,	// (0x00061df0) cell_fep_china_hwr2_fs_funtion_grid

0xad74,	// (0x0005ffd1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcbab,	// (0x00061e08) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcbab,	// (0x00061e08) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcbb9,	// (0x00061e16) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcbb9,	// (0x00061e16) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x00064f88) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x00064f88) cell_fep_china_hwr2_fs_funtion_grid_g

0xcbcf,	// (0x00061e2c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcbcf,	// (0x00061e2c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcbe4,	// (0x00061e41) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcbe4,	// (0x00061e41) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x00064f8d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x00064f8d) cell_fep_china_hwr2_fs_funtion_grid_t

0xcc00,	// (0x00061e5d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcc08,	// (0x00061e65) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcc10,	// (0x00061e6d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x00064f92) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcc18,	// (0x00061e75) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcc18,	// (0x00061e75) cell_fep_china_hwr2_fs_candidate_grid

0xcc37,	// (0x00061e94) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcc3f,	// (0x00061e9c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xad74,	// (0x0005ffd1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xad74,	// (0x0005ffd1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00064da6) cell_fep_china_hwr2_fs_candidate_grid_g

0xcc47,	// (0x00061ea4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x813f,	// (0x0005d39c) clock_nsta_pane_cp_24_ParamLimits

0x813f,	// (0x0005d39c) clock_nsta_pane_cp_24

0x81bf,	// (0x0005d41c) indicator_nsta_pane_cp_24_ParamLimits

0x81bf,	// (0x0005d41c) indicator_nsta_pane_cp_24

0x9236,	// (0x0005e493) heading_pane_g1

0x0001,

0xf8d0,	// (0x00064b2d) heading_pane_g

0x9d18,	// (0x0005ef75) grid_sct_catagory_button_pane

0x9d4a,	// (0x0005efa7) scroll_pane_cp5_ParamLimits

0xa9c0,	// (0x0005fc1d) button_value_adjust_pane_cp5_ParamLimits

0xa9c0,	// (0x0005fc1d) button_value_adjust_pane_cp5

0xaaa5,	// (0x0005fd02) form2_midp_time_pane_ParamLimits

0xcc55,	// (0x00061eb2) cell_sct_catagory_button_pane_ParamLimits

0xcc55,	// (0x00061eb2) cell_sct_catagory_button_pane

0xad39,	// (0x0005ff96) bg_button_pane_cp01_ParamLimits

0xad39,	// (0x0005ff96) bg_button_pane_cp01

0xad74,	// (0x0005ffd1) cell_sct_catagory_button_pane_g1

0x7efa,	// (0x0005d157) popup_tb_extension_window

0xcc67,	// (0x00061ec4) aid_size_cell_ext_ParamLimits

0xcc67,	// (0x00061ec4) aid_size_cell_ext

0xc3cc,	// (0x00061629) bg_tb_trans_pane_cp1_ParamLimits

0xc3cc,	// (0x00061629) bg_tb_trans_pane_cp1

0xcc87,	// (0x00061ee4) grid_tb_ext_pane_ParamLimits

0xcc87,	// (0x00061ee4) grid_tb_ext_pane

0xccb7,	// (0x00061f14) cell_tb_ext_pane_ParamLimits

0xccb7,	// (0x00061f14) cell_tb_ext_pane

0xccce,	// (0x00061f2b) cell_tb_ext_pane_g1_ParamLimits

0xccce,	// (0x00061f2b) cell_tb_ext_pane_g1

0xcceb,	// (0x00061f48) cell_tb_ext_pane_t1

0xc3cc,	// (0x00061629) list_highlight_pane_cp11_ParamLimits

0xc3cc,	// (0x00061629) list_highlight_pane_cp11

0x4d5e,	// (0x00059fbb) popup_uni_indicator_window_ParamLimits

0x4d5e,	// (0x00059fbb) popup_uni_indicator_window

0xe4a6,	// (0x00063703) bg_popup_sub_pane_cp14

0xcd06,	// (0x00061f63) list_uniindi_pane

0xcd12,	// (0x00061f6f) uniindi_top_pane

0xc3cc,	// (0x00061629) bg_uniindi_top_pane

0xcd33,	// (0x00061f90) uniindi_top_pane_g1

0xcd49,	// (0x00061fa6) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x00064f99) uniindi_top_pane_g

0xcd73,	// (0x00061fd0) uniindi_top_pane_t1

0xcd9f,	// (0x00061ffc) list_single_uniindi_pane_ParamLimits

0xcd9f,	// (0x00061ffc) list_single_uniindi_pane

0xad74,	// (0x0005ffd1) bg_uniindi_top_pane_g1

0xcdb1,	// (0x0006200e) list_single_uniindi_pane_g1

0xcdc4,	// (0x00062021) list_single_uniindi_pane_t1

0x4bca,	// (0x00059e27) control_bg_pane

0xcde9,	// (0x00062046) bg_sctrl_sk_pane_cp1

0xcdf2,	// (0x0006204f) bg_sctrl_sk_pane_cp2

0xcdfb,	// (0x00062058) control_bg_pane_g1

0xce04,	// (0x00062061) control_bg_pane_g2

0x0001,

0xfd45,	// (0x00064fa2) control_bg_pane_g

0xa7e7,	// (0x0005fa44) cell_indicator_nsta_pane_g1_ParamLimits

0xa7f5,	// (0x0005fa52) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00064d0a) cell_indicator_nsta_pane_g_ParamLimits

0x37ff,	// (0x00058a5c) form2_midp_time_pane_t1_ParamLimits

0xc629,	// (0x00061886) main_idle_act4_pane_ParamLimits

0xc629,	// (0x00061886) main_idle_act4_pane

0x7efa,	// (0x0005d157) popup_tb_extension_window_ParamLimits

0xcca9,	// (0x00061f06) tb_ext_find_pane_ParamLimits

0xcca9,	// (0x00061f06) tb_ext_find_pane

0xce0d,	// (0x0006206a) ai_gene_pane_1_cp1

0x3321,	// (0x0005857e) ai_gene_pane_2_cp1

0xce15,	// (0x00062072) list_single_idle_plugin_calendar_pane

0xce1e,	// (0x0006207b) list_single_idle_plugin_notification_pane

0xce27,	// (0x00062084) list_single_idle_plugin_player_pane

0xce30,	// (0x0006208d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xce30,	// (0x0006208d) list_single_idle_plugin_shortcut_pane

0xce52,	// (0x000620af) main_idle_act4_pane_t1

0xce64,	// (0x000620c1) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x00064fa7) main_idle_act4_pane_t

0xce76,	// (0x000620d3) middle_sk_idle_act4_pane_ParamLimits

0xce76,	// (0x000620d3) middle_sk_idle_act4_pane

0xce8c,	// (0x000620e9) popup_clock_digital_analogue_window_cp2

0xcea6,	// (0x00062103) shortcut_wheel_idle_act4_pane_ParamLimits

0xcea6,	// (0x00062103) shortcut_wheel_idle_act4_pane

0xad74,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g1

0xad74,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g2

0xad74,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g3

0xad74,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g4

0xad74,	// (0x0005ffd1) shortcut_wheel_idle_act4_pane_g5

0xceba,	// (0x00062117) shortcut_wheel_idle_act4_pane_g6

0xcec2,	// (0x0006211f) shortcut_wheel_idle_act4_pane_g7

0xceca,	// (0x00062127) shortcut_wheel_idle_act4_pane_g8

0xced2,	// (0x0006212f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x00064fac) shortcut_wheel_idle_act4_pane_g

0xafef,	// (0x0006024c) middle_sk_idle_act4_pane_g1_ParamLimits

0xafef,	// (0x0006024c) middle_sk_idle_act4_pane_g1

0xcf36,	// (0x00062193) middle_sk_idle_act4_pane_g2_ParamLimits

0xcf36,	// (0x00062193) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x00064fcf) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x00064fcf) middle_sk_idle_act4_pane_g

0xcf42,	// (0x0006219f) middle_sk_idle_act4_pane_t1_ParamLimits

0xcf42,	// (0x0006219f) middle_sk_idle_act4_pane_t1

0xcf5f,	// (0x000621bc) grid_ai_shortcut_pane_ParamLimits

0xcf5f,	// (0x000621bc) grid_ai_shortcut_pane

0xcf78,	// (0x000621d5) list_highlight_pane_cp16_ParamLimits

0xcf78,	// (0x000621d5) list_highlight_pane_cp16

0xcf85,	// (0x000621e2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcf85,	// (0x000621e2) list_single_idle_plugin_shortcut_pane_g1

0xcf91,	// (0x000621ee) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcf91,	// (0x000621ee) list_single_idle_plugin_shortcut_pane_g2

0xcfab,	// (0x00062208) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcfab,	// (0x00062208) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x00064fd4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x00064fd4) list_single_idle_plugin_shortcut_pane_g

0xcfbe,	// (0x0006221b) cell_ai_shortcut_pane_ParamLimits

0xcfbe,	// (0x0006221b) cell_ai_shortcut_pane

0xcfe1,	// (0x0006223e) cell_ai_shortcut_pane_g1_ParamLimits

0xcfe1,	// (0x0006223e) cell_ai_shortcut_pane_g1

0xce0d,	// (0x0006206a) ai_gene_pane_1_cp2

0xd003,	// (0x00062260) ai_gene_pane_2_cp2

0xd00b,	// (0x00062268) list_highlight_pane_cp15

0xd014,	// (0x00062271) list_single_idle_plugin_calendar_pane_g1

0xd00b,	// (0x00062268) list_highlight_pane_cp17

0xd01c,	// (0x00062279) list_single_idle_plugin_calendar_pane_g1_copy1

0xd024,	// (0x00062281) list_single_idle_plugin_player_pane_g1

0xa10c,	// (0x0005f369) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x00064fdb) list_single_idle_plugin_player_pane_g

0xd02c,	// (0x00062289) list_single_idle_plugin_player_pane_t1

0xd03a,	// (0x00062297) list_single_idle_plugin_player_pane_t2

0xd048,	// (0x000622a5) list_single_idle_plugin_player_pane_t3

0xd056,	// (0x000622b3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x00064fe0) list_single_idle_plugin_player_pane_t

0xd064,	// (0x000622c1) wait_bar_pane_cp15

0xd06c,	// (0x000622c9) grid_ai_notification_pane

0xa10c,	// (0x0005f369) list_single_idle_plugin_notification_pane_g1

0xd075,	// (0x000622d2) cell_ai_notification_pane_ParamLimits

0xd075,	// (0x000622d2) cell_ai_notification_pane

0xd082,	// (0x000622df) cell_ai_notification_pane_g1

0xd08a,	// (0x000622e7) cell_ai_notification_pane_t1

0xd098,	// (0x000622f5) tb_ext_find_button_pane

0xd0a0,	// (0x000622fd) tb_ext_find_pane_g1

0xd0a8,	// (0x00062305) tb_ext_find_pane_t1

0xf118,	// (0x00064375) tb_ext_find_button_pane_g1

0xd0b6,	// (0x00062313) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x00064fe9) tb_ext_find_button_pane_g

0xce52,	// (0x000620af) main_idle_act4_pane_t1_ParamLimits

0xce64,	// (0x000620c1) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x00064fa7) main_idle_act4_pane_t_ParamLimits

0xce8c,	// (0x000620e9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xce9a,	// (0x000620f7) sat_plugin_idle_act4_pane_ParamLimits

0xce9a,	// (0x000620f7) sat_plugin_idle_act4_pane

0xd0bf,	// (0x0006231c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd0bf,	// (0x0006231c) sat_plugin_idle_act4_pane_t1

0xd0d2,	// (0x0006232f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd0d2,	// (0x0006232f) sat_plugin_idle_act4_pane_t2

0xd0e5,	// (0x00062342) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd0e5,	// (0x00062342) sat_plugin_idle_act4_pane_t3

0xd0f8,	// (0x00062355) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd0f8,	// (0x00062355) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x00064fee) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x00064fee) sat_plugin_idle_act4_pane_t

0x4c8f,	// (0x00059eec) popup_battery_window_ParamLimits

0x4c8f,	// (0x00059eec) popup_battery_window

0xc3cc,	// (0x00061629) bg_popup_sub_pane_cp25_ParamLimits

0xc3cc,	// (0x00061629) bg_popup_sub_pane_cp25

0xd10b,	// (0x00062368) popup_battery_window_g1_ParamLimits

0xd10b,	// (0x00062368) popup_battery_window_g1

0xd117,	// (0x00062374) popup_battery_window_t1_ParamLimits

0xd117,	// (0x00062374) popup_battery_window_t1

0xd129,	// (0x00062386) popup_battery_window_t2_ParamLimits

0xd129,	// (0x00062386) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x00064ff7) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x00064ff7) popup_battery_window_t

0x5fdc,	// (0x0005b239) midp_canvas_pane_ParamLimits

0x603e,	// (0x0005b29b) midp_keypad_pane_ParamLimits

0x603e,	// (0x0005b29b) midp_keypad_pane

0x63e2,	// (0x0005b63f) main_midp_pane_ParamLimits

0xa873,	// (0x0005fad0) signal_pane_g2_cp_ParamLimits

0xd146,	// (0x000623a3) aid_size_cell_midp_keypad_ParamLimits

0xd146,	// (0x000623a3) aid_size_cell_midp_keypad

0xd160,	// (0x000623bd) midp_keyp_game_grid_pane_ParamLimits

0xd160,	// (0x000623bd) midp_keyp_game_grid_pane

0xd180,	// (0x000623dd) midp_keyp_rocker_pane_ParamLimits

0xd180,	// (0x000623dd) midp_keyp_rocker_pane

0xd1ab,	// (0x00062408) midp_keyp_sk_left_pane_ParamLimits

0xd1ab,	// (0x00062408) midp_keyp_sk_left_pane

0xd205,	// (0x00062462) midp_keyp_sk_right_pane_ParamLimits

0xd205,	// (0x00062462) midp_keyp_sk_right_pane

0xc21d,	// (0x0006147a) bg_button_pane_cp03

0xd25f,	// (0x000624bc) midp_keyp_sk_left_pane_g1

0xc21d,	// (0x0006147a) bg_button_pane_cp04

0xd25f,	// (0x000624bc) midp_keyp_sk_right_pane_g1

0xad74,	// (0x0005ffd1) midp_keyp_rocker_pane_g1

0xd268,	// (0x000624c5) keyp_game_cell_pane_ParamLimits

0xd268,	// (0x000624c5) keyp_game_cell_pane

0xc21d,	// (0x0006147a) bg_button_pane_cp02

0xd27b,	// (0x000624d8) keyp_game_cell_pane_g1

0x4cd9,	// (0x00059f36) popup_fep_vkb2_window_ParamLimits

0x4cd9,	// (0x00059f36) popup_fep_vkb2_window

0x730f,	// (0x0005c56c) aid_size_cell_vkb2_ParamLimits

0x730f,	// (0x0005c56c) aid_size_cell_vkb2

0x7363,	// (0x0005c5c0) popup_fep_vkb2_window_g1_ParamLimits

0x7363,	// (0x0005c5c0) popup_fep_vkb2_window_g1

0x73ab,	// (0x0005c608) vkb2_area_bottom_pane_ParamLimits

0x73ab,	// (0x0005c608) vkb2_area_bottom_pane

0x73ff,	// (0x0005c65c) vkb2_area_keypad_pane_ParamLimits

0x73ff,	// (0x0005c65c) vkb2_area_keypad_pane

0x7445,	// (0x0005c6a2) vkb2_area_top_pane_ParamLimits

0x7445,	// (0x0005c6a2) vkb2_area_top_pane

0x74bf,	// (0x0005c71c) vkb2_top_entry_pane_ParamLimits

0x74bf,	// (0x0005c71c) vkb2_top_entry_pane

0x74e9,	// (0x0005c746) vkb2_top_grid_left_pane_ParamLimits

0x74e9,	// (0x0005c746) vkb2_top_grid_left_pane

0x7507,	// (0x0005c764) vkb2_top_grid_right_pane_ParamLimits

0x7507,	// (0x0005c764) vkb2_top_grid_right_pane

0x7525,	// (0x0005c782) vkb2_cell_keypad_pane_ParamLimits

0x7525,	// (0x0005c782) vkb2_cell_keypad_pane

0x75f6,	// (0x0005c853) vkb2_area_bottom_grid_pane_ParamLimits

0x75f6,	// (0x0005c853) vkb2_area_bottom_grid_pane

0x761c,	// (0x0005c879) vkb2_area_bottom_pane_g1_ParamLimits

0x761c,	// (0x0005c879) vkb2_area_bottom_pane_g1

0x7640,	// (0x0005c89d) vkb2_area_bottom_pane_g2_ParamLimits

0x7640,	// (0x0005c89d) vkb2_area_bottom_pane_g2

0x766e,	// (0x0005c8cb) vkb2_area_bottom_pane_g3_ParamLimits

0x766e,	// (0x0005c8cb) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x00064ffc) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x00064ffc) vkb2_area_bottom_pane_g

0x76cf,	// (0x0005c92c) vkb2_top_cell_left_pane_ParamLimits

0x76cf,	// (0x0005c92c) vkb2_top_cell_left_pane

0xd28c,	// (0x000624e9) vkb2_top_entry_pane_g1_ParamLimits

0xd28c,	// (0x000624e9) vkb2_top_entry_pane_g1

0xd29a,	// (0x000624f7) vkb2_top_entry_pane_t1_ParamLimits

0xd29a,	// (0x000624f7) vkb2_top_entry_pane_t1

0xd2cc,	// (0x00062529) vkb2_top_entry_pane_t2_ParamLimits

0xd2cc,	// (0x00062529) vkb2_top_entry_pane_t2

0xd2fe,	// (0x0006255b) vkb2_top_entry_pane_t3_ParamLimits

0xd2fe,	// (0x0006255b) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x00065003) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x00065003) vkb2_top_entry_pane_t

0x771c,	// (0x0005c979) vkb2_top_grid_right_pane_g1_ParamLimits

0x771c,	// (0x0005c979) vkb2_top_grid_right_pane_g1

0x7732,	// (0x0005c98f) vkb2_top_grid_right_pane_g2_ParamLimits

0x7732,	// (0x0005c98f) vkb2_top_grid_right_pane_g2

0x774a,	// (0x0005c9a7) vkb2_top_grid_right_pane_g3_ParamLimits

0x774a,	// (0x0005c9a7) vkb2_top_grid_right_pane_g3

0x7762,	// (0x0005c9bf) vkb2_top_grid_right_pane_g4_ParamLimits

0x7762,	// (0x0005c9bf) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x0006500a) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x0006500a) vkb2_top_grid_right_pane_g

0x7778,	// (0x0005c9d5) vkb2_top_cell_left_pane_g1

0x778f,	// (0x0005c9ec) vkb2_cell_keypad_pane_g1_ParamLimits

0x778f,	// (0x0005c9ec) vkb2_cell_keypad_pane_g1

0xd322,	// (0x0006257f) vkb2_cell_keypad_pane_t1_ParamLimits

0xd322,	// (0x0006257f) vkb2_cell_keypad_pane_t1

0x779d,	// (0x0005c9fa) vkb2_cell_bottom_grid_pane_ParamLimits

0x779d,	// (0x0005c9fa) vkb2_cell_bottom_grid_pane

0x77d6,	// (0x0005ca33) vkb2_cell_bottom_grid_pane_g1

0xceda,	// (0x00062137) aid_call2_pane_cp02

0xcee2,	// (0x0006213f) aid_call_pane_cp02

0xceea,	// (0x00062147) clock_digital_number_pane_cp10

0xcef2,	// (0x0006214f) clock_digital_number_pane_cp11

0xcefa,	// (0x00062157) clock_digital_number_pane_cp12

0xcf02,	// (0x0006215f) clock_digital_number_pane_cp13

0xcf0a,	// (0x00062167) clock_digital_separator_pane_cp10

0xf118,	// (0x00064375) popup_clock_digital_analogue_window_cp2_g1

0xf118,	// (0x00064375) popup_clock_digital_analogue_window_cp2_g2

0xcf12,	// (0x0006216f) popup_clock_digital_analogue_window_cp2_g3

0xf118,	// (0x00064375) popup_clock_digital_analogue_window_cp2_g4

0xcf12,	// (0x0006216f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x00064fbf) popup_clock_digital_analogue_window_cp2_g

0xcf1a,	// (0x00062177) popup_clock_digital_analogue_window_cp2_t1

0xcf28,	// (0x00062185) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x00064fca) popup_clock_digital_analogue_window_cp2_t

0xad74,	// (0x0005ffd1) clock_digital_number_pane_cp10_g1

0xad74,	// (0x0005ffd1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00064da6) clock_digital_number_pane_cp10_g

0xad74,	// (0x0005ffd1) clock_digital_separator_pane_cp10_g1

0xad74,	// (0x0005ffd1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00064da6) clock_digital_separator_pane_cp10_g

0xcd55,	// (0x00061fb2) uniindi_top_pane_g3

0xcd66,	// (0x00061fc3) uniindi_top_pane_g4

0x75b0,	// (0x0005c80d) vkb2_row_keypad_pane_ParamLimits

0x75b0,	// (0x0005c80d) vkb2_row_keypad_pane

0x77f2,	// (0x0005ca4f) vkb2_cell_t_keypad_pane_ParamLimits

0x77f2,	// (0x0005ca4f) vkb2_cell_t_keypad_pane

0x7802,	// (0x0005ca5f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7802,	// (0x0005ca5f) vkb2_cell_t_keypad_pane_cp08

0x7817,	// (0x0005ca74) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7817,	// (0x0005ca74) vkb2_cell_t_keypad_pane_cp09

0x782b,	// (0x0005ca88) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x782b,	// (0x0005ca88) vkb2_cell_t_keypad_pane_cp01

0x783c,	// (0x0005ca99) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x783c,	// (0x0005ca99) vkb2_cell_t_keypad_pane_cp02

0x784d,	// (0x0005caaa) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x784d,	// (0x0005caaa) vkb2_cell_t_keypad_pane_cp03

0x785e,	// (0x0005cabb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x785e,	// (0x0005cabb) vkb2_cell_t_keypad_pane_cp04

0x786f,	// (0x0005cacc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x786f,	// (0x0005cacc) vkb2_cell_t_keypad_pane_cp05

0x7880,	// (0x0005cadd) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7880,	// (0x0005cadd) vkb2_cell_t_keypad_pane_cp06

0x7893,	// (0x0005caf0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7893,	// (0x0005caf0) vkb2_cell_t_keypad_pane_cp07

0x78a8,	// (0x0005cb05) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x78a8,	// (0x0005cb05) vkb2_cell_t_keypad_pane_cp10

0x6f62,	// (0x0005c1bf) vkb2_cell_t_keypad_pane_g1

0xd339,	// (0x00062596) vkb2_cell_t_keypad_pane_t1

0x4bca,	// (0x00059e27) popup_grid_graphic2_window

0xd34b,	// (0x000625a8) aid_size_cell_graphic2_ParamLimits

0xd34b,	// (0x000625a8) aid_size_cell_graphic2

0xd383,	// (0x000625e0) bg_popup_window_pane_cp21_ParamLimits

0xd383,	// (0x000625e0) bg_popup_window_pane_cp21

0xd391,	// (0x000625ee) graphic2_pages_pane_ParamLimits

0xd391,	// (0x000625ee) graphic2_pages_pane

0xd3d7,	// (0x00062634) grid_graphic2_control_pane_ParamLimits

0xd3d7,	// (0x00062634) grid_graphic2_control_pane

0xd415,	// (0x00062672) grid_graphic2_pane_ParamLimits

0xd415,	// (0x00062672) grid_graphic2_pane

0xd48b,	// (0x000626e8) cell_graphic2_pane

0xc21d,	// (0x0006147a) main_comp_mode_pane

0xbf6d,	// (0x000611ca) list_ai3_gene_pane_ParamLimits

0xc98e,	// (0x00061beb) bg_popup_window_pane_cp19_ParamLimits

0xc99a,	// (0x00061bf7) bg_touch_area_indi_pane_ParamLimits

0xc99a,	// (0x00061bf7) bg_touch_area_indi_pane

0xc9b0,	// (0x00061c0d) bg_touch_area_indi_pane_cp01_ParamLimits

0xc9b0,	// (0x00061c0d) bg_touch_area_indi_pane_cp01

0xc9c8,	// (0x00061c25) bg_touch_area_indi_pane_cp02_ParamLimits

0xc9c8,	// (0x00061c25) bg_touch_area_indi_pane_cp02

0xc9e2,	// (0x00061c3f) bg_touch_area_indi_pane_cp03_ParamLimits

0xc9e2,	// (0x00061c3f) bg_touch_area_indi_pane_cp03

0xc9fc,	// (0x00061c59) popup_slider_window_g1_ParamLimits

0xca18,	// (0x00061c75) popup_slider_window_g2_ParamLimits

0xca34,	// (0x00061c91) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x00064f54) popup_slider_window_g_ParamLimits

0xca90,	// (0x00061ced) popup_slider_window_t1_ParamLimits

0xcb04,	// (0x00061d61) small_volume_slider_vertical_pane_ParamLimits

0xd48b,	// (0x000626e8) cell_graphic2_pane_ParamLimits

0xd4dd,	// (0x0006273a) bg_button_pane_cp10_ParamLimits

0xd4dd,	// (0x0006273a) bg_button_pane_cp10

0xd4f2,	// (0x0006274f) bg_button_pane_cp11_ParamLimits

0xd4f2,	// (0x0006274f) bg_button_pane_cp11

0xd507,	// (0x00062764) graphic2_pages_pane_g1_ParamLimits

0xd507,	// (0x00062764) graphic2_pages_pane_g1

0xd522,	// (0x0006277f) graphic2_pages_pane_g2_ParamLimits

0xd522,	// (0x0006277f) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x00065018) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x00065018) graphic2_pages_pane_g

0xd53a,	// (0x00062797) graphic2_pages_pane_t1_ParamLimits

0xd53a,	// (0x00062797) graphic2_pages_pane_t1

0xd550,	// (0x000627ad) cell_graphic2_control_pane_ParamLimits

0xd550,	// (0x000627ad) cell_graphic2_control_pane

0xd573,	// (0x000627d0) cell_graphic2_pane_g1_ParamLimits

0xd573,	// (0x000627d0) cell_graphic2_pane_g1

0xd580,	// (0x000627dd) cell_graphic2_pane_g2_ParamLimits

0xd580,	// (0x000627dd) cell_graphic2_pane_g2

0xd58d,	// (0x000627ea) cell_graphic2_pane_g3_ParamLimits

0xd58d,	// (0x000627ea) cell_graphic2_pane_g3

0xd59a,	// (0x000627f7) cell_graphic2_pane_g4_ParamLimits

0xd59a,	// (0x000627f7) cell_graphic2_pane_g4

0xd5a7,	// (0x00062804) cell_graphic2_pane_g5_ParamLimits

0xd5a7,	// (0x00062804) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x0006501d) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x0006501d) cell_graphic2_pane_g

0xd5c2,	// (0x0006281f) cell_graphic2_pane_t1_ParamLimits

0xd5c2,	// (0x0006281f) cell_graphic2_pane_t1

0x85d7,	// (0x0005d834) grid_highlight_pane_cp11_ParamLimits

0x85d7,	// (0x0005d834) grid_highlight_pane_cp11

0xc3cc,	// (0x00061629) bg_button_pane_cp05

0xd5eb,	// (0x00062848) cell_graphic2_control_pane_g1

0xad74,	// (0x0005ffd1) bg_touch_area_indi_pane_g1

0xd613,	// (0x00062870) aid_cmod_rocker_key_size

0xd61d,	// (0x0006287a) aid_cmode_itu_key_size

0xd627,	// (0x00062884) main_cmode_video_pane

0xd631,	// (0x0006288e) main_comp_mode_itu_pane

0xd63d,	// (0x0006289a) main_comp_mode_rocker_pane

0xd649,	// (0x000628a6) cell_cmode_rocker_pane_ParamLimits

0xd649,	// (0x000628a6) cell_cmode_rocker_pane

0xd65d,	// (0x000628ba) cell_cmode_itu_pane_ParamLimits

0xd65d,	// (0x000628ba) cell_cmode_itu_pane

0xe4a6,	// (0x00063703) bg_button_pane_cp06_ParamLimits

0xe4a6,	// (0x00063703) bg_button_pane_cp06

0xafef,	// (0x0006024c) cell_cmode_rocker_pane_g1_ParamLimits

0xafef,	// (0x0006024c) cell_cmode_rocker_pane_g1

0xcbab,	// (0x00061e08) cell_cmode_rocker_pane_g2_ParamLimits

0xcbab,	// (0x00061e08) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x0006502d) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x0006502d) cell_cmode_rocker_pane_g

0xc21d,	// (0x0006147a) bg_button_pane_cp07

0xd674,	// (0x000628d1) cell_cmode_itu_pane_g1

0xd67d,	// (0x000628da) cell_cmode_itu_pane_t1

0xd68b,	// (0x000628e8) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x00065032) cell_cmode_itu_pane_t

0xcdd9,	// (0x00062036) aid_touch_ctrl_left

0xcde1,	// (0x0006203e) aid_touch_ctrl_right

0xc21d,	// (0x0006147a) compa_mode_pane

0xd699,	// (0x000628f6) aid_cmod_rocker_key_size_cp

0xd6a3,	// (0x00062900) aid_cmode_itu_key_size_cp

0xd6ad,	// (0x0006290a) compa_mode_pane_g1

0xd6b5,	// (0x00062912) compa_mode_pane_g2

0xd6bd,	// (0x0006291a) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x00065037) compa_mode_pane_g

0xd6c5,	// (0x00062922) main_comp_mode_itu_pane_cp

0xd6cd,	// (0x0006292a) main_comp_mode_rocker_pane_cp

0xd6d5,	// (0x00062932) cell_cmode_itu_pane_cp_ParamLimits

0xd6d5,	// (0x00062932) cell_cmode_itu_pane_cp

0xd6ea,	// (0x00062947) cell_cmode_rocker_pane_cp_ParamLimits

0xd6ea,	// (0x00062947) cell_cmode_rocker_pane_cp

0xe4a6,	// (0x00063703) bg_button_pane_cp06_cp_ParamLimits

0xe4a6,	// (0x00063703) bg_button_pane_cp06_cp

0xafef,	// (0x0006024c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xafef,	// (0x0006024c) cell_cmode_rocker_pane_g1_cp

0xad74,	// (0x0005ffd1) cell_cmode_rocker_pane_g2_cp

0xc21d,	// (0x0006147a) bg_button_pane_cp07_cp

0xd6fc,	// (0x00062959) cell_cmode_itu_pane_g1_cp

0xd705,	// (0x00062962) cell_cmode_itu_pane_t1_cp

0xd705,	// (0x00062962) cell_cmode_itu_pane_t2_cp

0x9aa0,	// (0x0005ecfd) settings_code_pane_cp2

0xc28b,	// (0x000614e8) bg_popup_window_pane_cp3_ParamLimits

0xc5ba,	// (0x00061817) heading_pane_cp3_ParamLimits

0xc5c6,	// (0x00061823) listscroll_popup_graphic_pane_ParamLimits

0x6cf5,	// (0x0005bf52) fep_hwr_aid_pane_ParamLimits

0x7268,	// (0x0005c4c5) aid_touch_sctrl_top_ParamLimits

0x7283,	// (0x0005c4e0) sctrl_sk_top_pane_g1_ParamLimits

0x6f62,	// (0x0005c1bf) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x00064f6d) sctrl_sk_top_pane_g_ParamLimits

0x7290,	// (0x0005c4ed) sctrl_sk_top_pane_t1_ParamLimits

0x7268,	// (0x0005c4c5) aid_touch_sctrl_bottom_ParamLimits

0x7290,	// (0x0005c4ed) sctrl_sk_bottom_pane_t1_ParamLimits

0xcd1f,	// (0x00061f7c) aid_area_touch_clock

0x7487,	// (0x0005c6e4) aid_vkb2_area_top_pane_cell_ParamLimits

0x7487,	// (0x0005c6e4) aid_vkb2_area_top_pane_cell

0x75d2,	// (0x0005c82f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x75d2,	// (0x0005c82f) aid_vkb2_area_bottom_pane_cell

0xd284,	// (0x000624e1) popup_char_count_window

0xd713,	// (0x00062970) popup_char_count_window_g1

0xd71c,	// (0x00062979) popup_char_count_window_g2

0xd725,	// (0x00062982) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x0006503e) popup_char_count_window_g

0xd72e,	// (0x0006298b) popup_char_count_window_t1

0x7341,	// (0x0005c59e) popup_fep_char_preview_window_ParamLimits

0x7341,	// (0x0005c59e) popup_fep_char_preview_window

0x74a5,	// (0x0005c702) vkb2_top_candi_pane_ParamLimits

0x74a5,	// (0x0005c702) vkb2_top_candi_pane

0xd73c,	// (0x00062999) cell_vkb2_top_candi_pane_ParamLimits

0xd73c,	// (0x00062999) cell_vkb2_top_candi_pane

0x78bd,	// (0x0005cb1a) bg_popup_fep_char_preview_window_ParamLimits

0x78bd,	// (0x0005cb1a) bg_popup_fep_char_preview_window

0x78cb,	// (0x0005cb28) popup_fep_char_preview_window_t1_ParamLimits

0x78cb,	// (0x0005cb28) popup_fep_char_preview_window_t1

0xd78d,	// (0x000629ea) bg_popup_fep_char_preview_window_g1

0xd795,	// (0x000629f2) bg_popup_fep_char_preview_window_g2

0xd79d,	// (0x000629fa) bg_popup_fep_char_preview_window_g3

0xd7a5,	// (0x00062a02) bg_popup_fep_char_preview_window_g4

0xd7ad,	// (0x00062a0a) bg_popup_fep_char_preview_window_g5

0x7905,	// (0x0005cb62) bg_popup_fep_char_preview_window_g6

0xd7b5,	// (0x00062a12) bg_popup_fep_char_preview_window_g7

0xd7bd,	// (0x00062a1a) bg_popup_fep_char_preview_window_g8

0xd7c5,	// (0x00062a22) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x00065045) bg_popup_fep_char_preview_window_g

0x6f62,	// (0x0005c1bf) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6f62,	// (0x0005c1bf) cell_vkb2_top_candi_pane_g1

0x6f70,	// (0x0005c1cd) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6f70,	// (0x0005c1cd) cell_vkb2_top_candi_pane_g2

0xc84d,	// (0x00061aaa) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc84d,	// (0x00061aaa) cell_vkb2_top_candi_pane_g3

0x790d,	// (0x0005cb6a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x790d,	// (0x0005cb6a) cell_vkb2_top_candi_pane_g4

0xb50e,	// (0x0006076b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb50e,	// (0x0006076b) cell_vkb2_top_candi_pane_g5

0x792e,	// (0x0005cb8b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x792e,	// (0x0005cb8b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x00065058) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x00065058) cell_vkb2_top_candi_pane_g

0x793c,	// (0x0005cb99) cell_vkb2_top_candi_pane_t1

0x6b09,	// (0x0005bd66) aid_size_touch_slider_mark_ParamLimits

0x6b09,	// (0x0005bd66) aid_size_touch_slider_mark

0xd3c7,	// (0x00062624) grid_graphic2_catg_pane_ParamLimits

0xd3c7,	// (0x00062624) grid_graphic2_catg_pane

0xd465,	// (0x000626c2) popup_grid_graphic2_window_t1_ParamLimits

0xd465,	// (0x000626c2) popup_grid_graphic2_window_t1

0xd477,	// (0x000626d4) popup_grid_graphic2_window_t2_ParamLimits

0xd477,	// (0x000626d4) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x00065013) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x00065013) popup_grid_graphic2_window_t

0xc3cc,	// (0x00061629) bg_button_pane_cp05_ParamLimits

0xd5eb,	// (0x00062848) cell_graphic2_control_pane_g1_ParamLimits

0xd7cd,	// (0x00062a2a) cell_graphic2_catg_pane_ParamLimits

0xd7cd,	// (0x00062a2a) cell_graphic2_catg_pane

0xc21d,	// (0x0006147a) bg_button_pane_cp12

0xd7df,	// (0x00062a3c) cell_graphic2_catg_pane_g1

0xcceb,	// (0x00061f48) cell_tb_ext_pane_t1_ParamLimits

0x76ef,	// (0x0005c94c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x76ef,	// (0x0005c94c) vkb2_top_cell_right_narrow_pane

0x7707,	// (0x0005c964) vkb2_top_cell_right_wide_pane_ParamLimits

0x7707,	// (0x0005c964) vkb2_top_cell_right_wide_pane

0x6ce7,	// (0x0005bf44) bg_vkb2_func_pane_ParamLimits

0x6ce7,	// (0x0005bf44) bg_vkb2_func_pane

0x7778,	// (0x0005c9d5) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ce7,	// (0x0005bf44) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ce7,	// (0x0005bf44) bg_vkb2_fuc_pane_cp03

0x77d6,	// (0x0005ca33) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x856b,	// (0x0005d7c8) bg_vkb2_func_pane_g1

0x8573,	// (0x0005d7d0) bg_vkb2_func_pane_g2

0x8583,	// (0x0005d7e0) bg_vkb2_func_pane_g3

0x857b,	// (0x0005d7d8) bg_vkb2_func_pane_g4

0x858b,	// (0x0005d7e8) bg_vkb2_func_pane_g5

0x8593,	// (0x0005d7f0) bg_vkb2_func_pane_g6

0x859b,	// (0x0005d7f8) bg_vkb2_func_pane_g7

0x85a3,	// (0x0005d800) bg_vkb2_func_pane_g8

0x8563,	// (0x0005d7c0) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x00065065) bg_vkb2_func_pane_g

0x6ce7,	// (0x0005bf44) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ce7,	// (0x0005bf44) bg_vkb2_fuc_pane_cp01

0x7778,	// (0x0005c9d5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7778,	// (0x0005c9d5) vkb2_top_cell_right_wide_pane_g1

0x6ce7,	// (0x0005bf44) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ce7,	// (0x0005bf44) bg_vkb2_fuc_pane_cp02

0x77d6,	// (0x0005ca33) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x77d6,	// (0x0005ca33) vkb2_top_cell_right_narrow_pane_g1

0xc90c,	// (0x00061b69) aid_touch_area_decrease_ParamLimits

0xc90c,	// (0x00061b69) aid_touch_area_decrease

0xc930,	// (0x00061b8d) aid_touch_area_increase_ParamLimits

0xc930,	// (0x00061b8d) aid_touch_area_increase

0xc93c,	// (0x00061b99) aid_touch_area_mute_ParamLimits

0xc93c,	// (0x00061b99) aid_touch_area_mute

0xc960,	// (0x00061bbd) aid_touch_area_slider_ParamLimits

0xc960,	// (0x00061bbd) aid_touch_area_slider

0xca50,	// (0x00061cad) popup_slider_window_g4_ParamLimits

0xca50,	// (0x00061cad) popup_slider_window_g4

0xca5c,	// (0x00061cb9) popup_slider_window_g5_ParamLimits

0xca5c,	// (0x00061cb9) popup_slider_window_g5

0xca7e,	// (0x00061cdb) popup_slider_window_g6_ParamLimits

0xca7e,	// (0x00061cdb) popup_slider_window_g6

0xcabe,	// (0x00061d1b) popup_slider_window_t2_ParamLimits

0xcabe,	// (0x00061d1b) popup_slider_window_t2

0x0001,

0xfd04,	// (0x00064f61) popup_slider_window_t_ParamLimits

0xfd04,	// (0x00064f61) popup_slider_window_t

0xcad6,	// (0x00061d33) slider_pane_ParamLimits

0xcad6,	// (0x00061d33) slider_pane

0xd7e8,	// (0x00062a45) slider_pane_g1_ParamLimits

0xd7e8,	// (0x00062a45) slider_pane_g1

0xd7fc,	// (0x00062a59) slider_pane_g2_ParamLimits

0xd7fc,	// (0x00062a59) slider_pane_g2

0xd812,	// (0x00062a6f) slider_pane_g3_ParamLimits

0xd812,	// (0x00062a6f) slider_pane_g3

0x0003,

0xfe1b,	// (0x00065078) slider_pane_g_ParamLimits

0xfe1b,	// (0x00065078) slider_pane_g

0x7f5c,	// (0x0005d1b9) popup_tb_float_extension_window_ParamLimits

0x7f5c,	// (0x0005d1b9) popup_tb_float_extension_window

0xd83e,	// (0x00062a9b) aid_size_cell_tb_float_ext

0xc21d,	// (0x0006147a) bg_popup_sub_window_cp28

0xd84a,	// (0x00062aa7) grid_tb_float_ext_pane

0xd856,	// (0x00062ab3) cell_tb_float_ext_pane_ParamLimits

0xd856,	// (0x00062ab3) cell_tb_float_ext_pane

0xd872,	// (0x00062acf) cell_tb_float_ext_pane_g1

0xd87b,	// (0x00062ad8) grid_highlight_pane_cp12

0x6e3c,	// (0x0005c099) cell_last_hwr_side_pane_ParamLimits

0x6e3c,	// (0x0005c099) cell_last_hwr_side_pane

0xad74,	// (0x0005ffd1) cell_last_hwr_side_pane_g1

0xd884,	// (0x00062ae1) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x00065081) cell_last_hwr_side_pane_g

0x769e,	// (0x0005c8fb) vkb2_area_bottom_space_btn_pane_ParamLimits

0x769e,	// (0x0005c8fb) vkb2_area_bottom_space_btn_pane

0x6f62,	// (0x0005c1bf) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd339,	// (0x00062596) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x793c,	// (0x0005cb99) cell_vkb2_top_candi_pane_t1_ParamLimits

0x795a,	// (0x0005cbb7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x795a,	// (0x0005cbb7) vkb2_area_bottom_space_btn_pane_g1

0x7994,	// (0x0005cbf1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7994,	// (0x0005cbf1) vkb2_area_bottom_space_btn_pane_g2

0x79ca,	// (0x0005cc27) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x79ca,	// (0x0005cc27) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x00065086) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x00065086) vkb2_area_bottom_space_btn_pane_g

0x6dac,	// (0x0005c009) cel_fep_hwr_func_pane_ParamLimits

0x6dac,	// (0x0005c009) cel_fep_hwr_func_pane

0x6de8,	// (0x0005c045) cell_hwr_side_button_pane_ParamLimits

0x6de8,	// (0x0005c045) cell_hwr_side_button_pane

0xcd1f,	// (0x00061f7c) aid_area_touch_clock_ParamLimits

0xc3cc,	// (0x00061629) bg_uniindi_top_pane_ParamLimits

0xcd33,	// (0x00061f90) uniindi_top_pane_g1_ParamLimits

0xcd49,	// (0x00061fa6) uniindi_top_pane_g2_ParamLimits

0xcd55,	// (0x00061fb2) uniindi_top_pane_g3_ParamLimits

0xcd66,	// (0x00061fc3) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x00064f99) uniindi_top_pane_g_ParamLimits

0xcd73,	// (0x00061fd0) uniindi_top_pane_t1_ParamLimits

0xc3cc,	// (0x00061629) bg_vkb2_func_pane_cp01_ParamLimits

0xc3cc,	// (0x00061629) bg_vkb2_func_pane_cp01

0xd88d,	// (0x00062aea) cel_fep_hwr_func_pane_g1_ParamLimits

0xd88d,	// (0x00062aea) cel_fep_hwr_func_pane_g1

0xc3cc,	// (0x00061629) bg_vkb2_func_pane_cp02_ParamLimits

0xc3cc,	// (0x00061629) bg_vkb2_func_pane_cp02

0xd88d,	// (0x00062aea) cell_hwr_side_button_pane_g1_ParamLimits

0xd88d,	// (0x00062aea) cell_hwr_side_button_pane_g1

0x83e4,	// (0x0005d641) status_pane_g4_ParamLimits

0x83e4,	// (0x0005d641) status_pane_g4

0x83fe,	// (0x0005d65b) status_pane_t1

0xab13,	// (0x0005fd70) form2_midp_gauge_slider_cont_pane

0xab1b,	// (0x0005fd78) form2_midp_gauge_slider_pane_t1_ParamLimits

0xab2d,	// (0x0005fd8a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xab3f,	// (0x0005fd9c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00064d59) form2_midp_gauge_slider_pane_t_ParamLimits

0xab51,	// (0x0005fdae) form2_midp_slider_pane_ParamLimits

0x7301,	// (0x0005c55e) aid_size_cell_func_vkb2_ParamLimits

0x7301,	// (0x0005c55e) aid_size_cell_func_vkb2

0xd82a,	// (0x00062a87) slider_pane_g4_ParamLimits

0xd82a,	// (0x00062a87) slider_pane_g4

0x7a14,	// (0x0005cc71) form2_midp_gauge_slider_pane_t2_cp01

0x7a22,	// (0x0005cc7f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a22,	// (0x0005cc7f) form2_midp_gauge_slider_pane_t3_cp01

0x7a3f,	// (0x0005cc9c) form2_midp_slider_pane_cp01

0xc21d,	// (0x0006147a) navi_smil_pane

0xd8c6,	// (0x00062b23) navi_smil_pane_g1

0xd8ce,	// (0x00062b2b) navi_smil_pane_t1

0xd89b,	// (0x00062af8) form2_midp_slider_pane_g1

0xd8a4,	// (0x00062b01) form2_midp_slider_pane_g2

0xd8ac,	// (0x00062b09) form2_midp_slider_pane_g3

0xd89b,	// (0x00062af8) form2_midp_slider_pane_g4

0xd8b4,	// (0x00062b11) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x0006508f) form2_midp_slider_pane_g

0x7a04,	// (0x0005cc61) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a04,	// (0x0005cc61) vkb2_area_bottom_space_btn_pane_g4

0x81fb,	// (0x0005d458) lc0_navi_pane_ParamLimits

0x81fb,	// (0x0005d458) lc0_navi_pane

0x8277,	// (0x0005d4d4) lc0_stat_indi_pane_ParamLimits

0x8277,	// (0x0005d4d4) lc0_stat_indi_pane

0x828e,	// (0x0005d4eb) ls0_title_pane_ParamLimits

0x828e,	// (0x0005d4eb) ls0_title_pane

0xe4a6,	// (0x00063703) bg_popup_sub_pane_cp14_ParamLimits

0xcd06,	// (0x00061f63) list_uniindi_pane_ParamLimits

0xcd12,	// (0x00061f6f) uniindi_top_pane_ParamLimits

0xcdb1,	// (0x0006200e) list_single_uniindi_pane_g1_ParamLimits

0xcdc4,	// (0x00062021) list_single_uniindi_pane_t1_ParamLimits

0x7a48,	// (0x0005cca5) lc0_stat_clock_pane_ParamLimits

0x7a48,	// (0x0005cca5) lc0_stat_clock_pane

0xd8dc,	// (0x00062b39) lc0_stat_indi_pane_g1_ParamLimits

0xd8dc,	// (0x00062b39) lc0_stat_indi_pane_g1

0xd8e9,	// (0x00062b46) lc0_stat_indi_pane_g2_ParamLimits

0xd8e9,	// (0x00062b46) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x0006509a) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x0006509a) lc0_stat_indi_pane_g

0x7a55,	// (0x0005ccb2) lc0_uni_indicator_pane_ParamLimits

0x7a55,	// (0x0005ccb2) lc0_uni_indicator_pane

0xd8f6,	// (0x00062b53) ls0_title_pane_g1_ParamLimits

0xd8f6,	// (0x00062b53) ls0_title_pane_g1

0xd90a,	// (0x00062b67) ls0_title_pane_t1_ParamLimits

0xd90a,	// (0x00062b67) ls0_title_pane_t1

0x7a62,	// (0x0005ccbf) lc0_uni_indicator_pane_g1_ParamLimits

0x7a62,	// (0x0005ccbf) lc0_uni_indicator_pane_g1

0xd940,	// (0x00062b9d) lc0_stat_clock_pane_t1

0xc21d,	// (0x0006147a) main_ai5_pane

0xd94e,	// (0x00062bab) ai5_sk_pane_ParamLimits

0xd94e,	// (0x00062bab) ai5_sk_pane

0xd95b,	// (0x00062bb8) cell_ai5_widget_pane_ParamLimits

0xd95b,	// (0x00062bb8) cell_ai5_widget_pane

0xdef7,	// (0x00063154) aid_size_cell_widget_grid

0xdf05,	// (0x00063162) bg_ai5_widget_pane_ParamLimits

0xdf05,	// (0x00063162) bg_ai5_widget_pane

0xdf79,	// (0x000631d6) cell_ai5_widget_pane_g2

0xdf89,	// (0x000631e6) cell_ai5_widget_pane_g3

0xdfa0,	// (0x000631fd) cell_ai5_widget_pane_g4

0xdfac,	// (0x00063209) cell_ai5_widget_pane_g5

0xdfb8,	// (0x00063215) cell_ai5_widget_pane_g6

0xdfc4,	// (0x00063221) cell_ai5_widget_pane_g7

0xe00c,	// (0x00063269) cell_ai5_widget_pane_t1_ParamLimits

0xe00c,	// (0x00063269) cell_ai5_widget_pane_t1

0xe029,	// (0x00063286) cell_ai5_widget_pane_t2_ParamLimits

0xe029,	// (0x00063286) cell_ai5_widget_pane_t2

0xe041,	// (0x0006329e) cell_ai5_widget_pane_t3_ParamLimits

0xe041,	// (0x0006329e) cell_ai5_widget_pane_t3

0xe059,	// (0x000632b6) cell_ai5_widget_pane_t4_ParamLimits

0xe059,	// (0x000632b6) cell_ai5_widget_pane_t4

0xe076,	// (0x000632d3) cell_ai5_widget_pane_t5_ParamLimits

0xe076,	// (0x000632d3) cell_ai5_widget_pane_t5

0xe095,	// (0x000632f2) cell_ai5_widget_pane_t6_ParamLimits

0xe095,	// (0x000632f2) cell_ai5_widget_pane_t6

0xe0a7,	// (0x00063304) cell_ai5_widget_pane_t7_ParamLimits

0xe0a7,	// (0x00063304) cell_ai5_widget_pane_t7

0xe0c0,	// (0x0006331d) cell_ai5_widget_pane_t8_ParamLimits

0xe0c0,	// (0x0006331d) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x000650b4) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x000650b4) cell_ai5_widget_pane_t

0xe114,	// (0x00063371) grid_ai5_widget_pane

0xe4a6,	// (0x00063703) highlight_cell_ai5_widget_pane_ParamLimits

0xe4a6,	// (0x00063703) highlight_cell_ai5_widget_pane

0xe122,	// (0x0006337f) ai5_sk_left_pane

0xe12c,	// (0x00063389) ai5_sk_middle_pane

0xe136,	// (0x00063393) ai5_sk_right_pane

0xe140,	// (0x0006339d) bg_ai5_widget_pane_g1_ParamLimits

0xe140,	// (0x0006339d) bg_ai5_widget_pane_g1

0xe14c,	// (0x000633a9) bg_ai5_widget_pane_g2_ParamLimits

0xe14c,	// (0x000633a9) bg_ai5_widget_pane_g2

0xe158,	// (0x000633b5) bg_ai5_widget_pane_g3_ParamLimits

0xe158,	// (0x000633b5) bg_ai5_widget_pane_g3

0xe164,	// (0x000633c1) bg_ai5_widget_pane_g4_ParamLimits

0xe164,	// (0x000633c1) bg_ai5_widget_pane_g4

0xe170,	// (0x000633cd) bg_ai5_widget_pane_g5_ParamLimits

0xe170,	// (0x000633cd) bg_ai5_widget_pane_g5

0xe17c,	// (0x000633d9) bg_ai5_widget_pane_g6_ParamLimits

0xe17c,	// (0x000633d9) bg_ai5_widget_pane_g6

0xe188,	// (0x000633e5) bg_ai5_widget_pane_g7_ParamLimits

0xe188,	// (0x000633e5) bg_ai5_widget_pane_g7

0xe194,	// (0x000633f1) bg_ai5_widget_pane_g8_ParamLimits

0xe194,	// (0x000633f1) bg_ai5_widget_pane_g8

0xe1a0,	// (0x000633fd) bg_ai5_widget_pane_g9_ParamLimits

0xe1a0,	// (0x000633fd) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x000650c9) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x000650c9) bg_ai5_widget_pane_g

0xe1d8,	// (0x00063435) cell_shortcut_ai5_widget_pane_ParamLimits

0xe1d8,	// (0x00063435) cell_shortcut_ai5_widget_pane

0x1077,	// (0x000562d4) bg_cell_shortcut_ai5_widget_pane

0xe1eb,	// (0x00063448) cell_grid_ai5_widget_pane_g1

0x1077,	// (0x000562d4) highlight_cell_shortcut_ai5_widget_pane

0x856b,	// (0x0005d7c8) ai5_sk_left_pane_g1

0xe1f4,	// (0x00063451) ai5_sk_left_pane_g2

0xe1fc,	// (0x00063459) ai5_sk_left_pane_g3

0xe204,	// (0x00063461) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x000650dc) ai5_sk_left_pane_g

0xe20c,	// (0x00063469) ai5_sk_left_pane_t1

0x8573,	// (0x0005d7d0) ai5_sk_right_pane_g1

0xe21a,	// (0x00063477) ai5_sk_right_pane_g2

0xe222,	// (0x0006347f) ai5_sk_right_pane_g3

0xe22a,	// (0x00063487) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x000650e5) ai5_sk_right_pane_g

0xe232,	// (0x0006348f) ai5_sk_right_pane_t1

0x8573,	// (0x0005d7d0) ai5_sk_middle_pane_g1

0x856b,	// (0x0005d7c8) ai5_sk_middle_pane_g2

0x858b,	// (0x0005d7e8) ai5_sk_middle_pane_g3

0xe222,	// (0x0006347f) ai5_sk_middle_pane_g4

0xe1fc,	// (0x00063459) ai5_sk_middle_pane_g5

0xe240,	// (0x0006349d) ai5_sk_middle_pane_g6

0xe248,	// (0x000634a5) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x000650ee) ai5_sk_middle_pane_g

0x807d,	// (0x0005d2da) aid_touch_area_size_lc0_ParamLimits

0x807d,	// (0x0005d2da) aid_touch_area_size_lc0

0x6f91,	// (0x0005c1ee) cell_hwr_candidate_pane_t1_ParamLimits

0x809b,	// (0x0005d2f8) aid_touch_navi_pane

0x838e,	// (0x0005d5eb) status_dt_navi_pane_ParamLimits

0x838e,	// (0x0005d5eb) status_dt_navi_pane

0x839b,	// (0x0005d5f8) status_dt_sta_pane_ParamLimits

0x839b,	// (0x0005d5f8) status_dt_sta_pane

0xe250,	// (0x000634ad) dt_sta_controll_pane

0xe25d,	// (0x000634ba) dt_sta_indi_pane

0xe26e,	// (0x000634cb) dt_sta_title_pane

0xc3cc,	// (0x00061629) bg_dt_sta_indi_pane_ParamLimits

0xc3cc,	// (0x00061629) bg_dt_sta_indi_pane

0xe281,	// (0x000634de) dt_sta_battery_pane

0xe289,	// (0x000634e6) dt_sta_indi_pane_g1

0xe292,	// (0x000634ef) dt_sta_indi_pane_g2

0xe29b,	// (0x000634f8) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x000650fd) dt_sta_indi_pane_g

0xe2a4,	// (0x00063501) dt_sta_signal_pane

0xe4a6,	// (0x00063703) bg_dt_sta_title_pane_ParamLimits

0xe4a6,	// (0x00063703) bg_dt_sta_title_pane

0xe2ad,	// (0x0006350a) dt_sta_title_pane_g1

0xe2b5,	// (0x00063512) dt_sta_title_pane_t1_ParamLimits

0xe2b5,	// (0x00063512) dt_sta_title_pane_t1

0xc21d,	// (0x0006147a) bg_dt_sta_control_pane

0xe2ca,	// (0x00063527) dt_sta_controll_pane_g1

0xe2d3,	// (0x00063530) bg_dt_sta_title_pane_g1

0xe2dc,	// (0x00063539) bg_dt_sta_title_pane_g2

0xe2e5,	// (0x00063542) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x00065104) bg_dt_sta_title_pane_g

0xad74,	// (0x0005ffd1) bg_dt_sta_indi_pane_g1

0xe2ee,	// (0x0006354b) dt_sta_signal_pane_g1

0xe2f6,	// (0x00063553) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x0006510b) dt_sta_signal_pane_g

0xe2fe,	// (0x0006355b) dt_sta_battery_pane_g1

0xe307,	// (0x00063564) dt_sta_battery_pane_t1

0xad74,	// (0x0005ffd1) bg_dt_sta_control_pane_g1

0xf19a,	// (0x000643f7) fep_china_uni_eep_pane

0xf1a2,	// (0x000643ff) fep_china_uni_entry_pane_ParamLimits

0xf1b2,	// (0x0006440f) popup_fep_china_uni_window_g1_ParamLimits

0xf1c2,	// (0x0006441f) popup_fep_china_uni_window_g2_ParamLimits

0xf1c2,	// (0x0006441f) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0006497f) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0006497f) popup_fep_china_uni_window_g

0xe316,	// (0x00063573) fep_china_uni_eep_pane_g1

0xe31e,	// (0x0006357b) fep_china_uni_eep_pane_t1

0xd8bd,	// (0x00062b1a) aid_touch_area_size_smil_player

0x81f3,	// (0x0005d450) lc0_clock_pane

0x83f2,	// (0x0005d64f) status_pane_g5_ParamLimits

0x83f2,	// (0x0005d64f) status_pane_g5

0x65a1,	// (0x0005b7fe) popup_keymap_window

0x83b0,	// (0x0005d60d) status_icon_pane

0xdf89,	// (0x000631e6) cell_ai5_widget_pane_g3_ParamLimits

0xdfa0,	// (0x000631fd) cell_ai5_widget_pane_g4_ParamLimits

0xdfac,	// (0x00063209) cell_ai5_widget_pane_g5_ParamLimits

0xdfd0,	// (0x0006322d) cell_ai5_widget_pane_g8_ParamLimits

0xdfd0,	// (0x0006322d) cell_ai5_widget_pane_g8

0xdfe4,	// (0x00063241) cell_ai5_widget_pane_g9_ParamLimits

0xdfe4,	// (0x00063241) cell_ai5_widget_pane_g9

0xdff8,	// (0x00063255) cell_ai5_widget_pane_g10_ParamLimits

0xdff8,	// (0x00063255) cell_ai5_widget_pane_g10

0xe32d,	// (0x0006358a) status_icon_pane_g1

0xc21d,	// (0x0006147a) bg_popup_sub_pane_cp13

0xe335,	// (0x00063592) popup_keymap_window_t1

0x625e,	// (0x0005b4bb) control_pane_g6_ParamLimits

0x625e,	// (0x0005b4bb) control_pane_g6

0x626b,	// (0x0005b4c8) control_pane_g7_ParamLimits

0x626b,	// (0x0005b4c8) control_pane_g7

0x6278,	// (0x0005b4d5) control_pane_g8_ParamLimits

0x6278,	// (0x0005b4d5) control_pane_g8

0xe250,	// (0x000634ad) dt_sta_controll_pane_ParamLimits

0xe25d,	// (0x000634ba) dt_sta_indi_pane_ParamLimits

0xe26e,	// (0x000634cb) dt_sta_title_pane_ParamLimits

0xc7f0,	// (0x00061a4d) aid_size_touch_scroll_bar_cale

0x4ca7,	// (0x00059f04) popup_discreet_window_ParamLimits

0x4ca7,	// (0x00059f04) popup_discreet_window

0x4d35,	// (0x00059f92) popup_sk_window

0x8bb3,	// (0x0005de10) bg_popup_sub_pane_cp28_ParamLimits

0x8bb3,	// (0x0005de10) bg_popup_sub_pane_cp28

0xe343,	// (0x000635a0) popup_discreet_window_g1_ParamLimits

0xe343,	// (0x000635a0) popup_discreet_window_g1

0xe363,	// (0x000635c0) popup_discreet_window_t1_ParamLimits

0xe363,	// (0x000635c0) popup_discreet_window_t1

0xe381,	// (0x000635de) popup_discreet_window_t2_ParamLimits

0xe381,	// (0x000635de) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x00065110) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x00065110) popup_discreet_window_t

0x7a75,	// (0x0005ccd2) popup_sk_window_g1

0x7a7f,	// (0x0005ccdc) popup_sk_window_g2

0x0001,

0xfeba,	// (0x00065117) popup_sk_window_g

0x7a89,	// (0x0005cce6) popup_sk_window_t1

0x7a99,	// (0x0005ccf6) popup_sk_window_t1_copy1

0xdf79,	// (0x000631d6) cell_ai5_widget_pane_g2_ParamLimits

0xe0d2,	// (0x0006332f) cell_ai5_widget_pane_t9_ParamLimits

0xe0d2,	// (0x0006332f) cell_ai5_widget_pane_t9

0xc21d,	// (0x0006147a) main_fep_fshwr2_pane

0x7aa7,	// (0x0005cd04) aid_fshwr2_btn_pane

0x7ab3,	// (0x0005cd10) aid_fshwr2_syb_pane

0x7abf,	// (0x0005cd1c) aid_fshwr2_txt_pane

0x7acb,	// (0x0005cd28) fshwr2_func_candi_pane

0x7ade,	// (0x0005cd3b) fshwr2_hwr_syb_pane

0x7aec,	// (0x0005cd49) fshwr2_icf_pane

0x4bca,	// (0x00059e27) fshwr2_icf_bg_pane

0x7b1b,	// (0x0005cd78) fshwr2_icf_pane_t1_ParamLimits

0x7b1b,	// (0x0005cd78) fshwr2_icf_pane_t1

0xf118,	// (0x00064375) fshwr2_func_candi_pane_g1

0xe3d3,	// (0x00063630) fshwr2_func_candi_row_pane_ParamLimits

0xe3d3,	// (0x00063630) fshwr2_func_candi_row_pane

0x7b33,	// (0x0005cd90) cell_fshwr2_syb_pane_ParamLimits

0x7b33,	// (0x0005cd90) cell_fshwr2_syb_pane

0x6f62,	// (0x0005c1bf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6f62,	// (0x0005c1bf) fshwr2_hwr_syb_pane_g1

0x4bca,	// (0x00059e27) bg_popup_call_pane_cp01

0x7b49,	// (0x0005cda6) fshwr2_func_candi_cell_pane_ParamLimits

0x7b49,	// (0x0005cda6) fshwr2_func_candi_cell_pane

0xe3e3,	// (0x00063640) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe3e3,	// (0x00063640) fshwr2_func_candi_cell_bg_pane

0x7b93,	// (0x0005cdf0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7b93,	// (0x0005cdf0) fshwr2_func_candi_cell_pane_g1

0x7bb3,	// (0x0005ce10) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7bb3,	// (0x0005ce10) fshwr2_func_candi_cell_pane_t1

0x4bca,	// (0x00059e27) bg_button_pane_cp08

0xe3ef,	// (0x0006364c) cell_fshwr2_syb_bg_pane

0x7bc6,	// (0x0005ce23) cell_fshwr2_syb_bg_pane_g1

0x7bce,	// (0x0005ce2b) cell_fshwr2_syb_bg_pane_t1

0xe4a6,	// (0x00063703) main_tmo_pane

0x96d7,	// (0x0005e934) uni_indicator_pane_g1_ParamLimits

0x96ed,	// (0x0005e94a) uni_indicator_pane_g2_ParamLimits

0x9703,	// (0x0005e960) uni_indicator_pane_g3_ParamLimits

0x9718,	// (0x0005e975) uni_indicator_pane_g4_ParamLimits

0x9718,	// (0x0005e975) uni_indicator_pane_g4

0x972c,	// (0x0005e989) uni_indicator_pane_g5_ParamLimits

0x972c,	// (0x0005e989) uni_indicator_pane_g5

0x972c,	// (0x0005e989) uni_indicator_pane_g6_ParamLimits

0x972c,	// (0x0005e989) uni_indicator_pane_g6

0xf926,	// (0x00064b83) uni_indicator_pane_g_ParamLimits

0xc8dc,	// (0x00061b39) popup_tmo_note_window_ParamLimits

0xc8dc,	// (0x00061b39) popup_tmo_note_window

0x72e3,	// (0x0005c540) fshwr2_bg_pane

0x7ba4,	// (0x0005ce01) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7ba4,	// (0x0005ce01) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x0006511c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x0006511c) fshwr2_func_candi_cell_pane_g

0x6f4a,	// (0x0005c1a7) bg_popup_window_pane_cp01

0x7bdd,	// (0x0005ce3a) bg_popup_window_pane_g1_cp01

0xe3f7,	// (0x00063654) bg_popup_window_pane_cp22_ParamLimits

0xe3f7,	// (0x00063654) bg_popup_window_pane_cp22

0xe405,	// (0x00063662) listscroll_tmo_link_pane_ParamLimits

0xe405,	// (0x00063662) listscroll_tmo_link_pane

0xe666,	// (0x000638c3) popup_tmo_note_window_g1_ParamLimits

0xe666,	// (0x000638c3) popup_tmo_note_window_g1

0xe673,	// (0x000638d0) tmo_note_info_pane_ParamLimits

0xe673,	// (0x000638d0) tmo_note_info_pane

0xe68d,	// (0x000638ea) list_tmo_note_info_pane_g1_ParamLimits

0xe68d,	// (0x000638ea) list_tmo_note_info_pane_g1

0xe6a4,	// (0x00063901) list_tmo_note_info_pane_g2_ParamLimits

0xe6a4,	// (0x00063901) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x00065121) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x00065121) list_tmo_note_info_pane_g

0xe6c0,	// (0x0006391d) list_tmo_note_info_text_pane_ParamLimits

0xe6c0,	// (0x0006391d) list_tmo_note_info_text_pane

0xe745,	// (0x000639a2) list_tmo_link_pane

0xe752,	// (0x000639af) scroll_pane_cp20

0xe75f,	// (0x000639bc) list_single_tmo_link_pane_ParamLimits

0xe75f,	// (0x000639bc) list_single_tmo_link_pane

0xe76f,	// (0x000639cc) list_single_tmo_link_pane_t1

0xe77d,	// (0x000639da) list_tmo_note_info_text_pane_t1_ParamLimits

0xe77d,	// (0x000639da) list_tmo_note_info_text_pane_t1

0x5841,	// (0x0005aa9e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5841,	// (0x0005aa9e) aid_size_touch_scroll_bar_cp01

0x577e,	// (0x0005a9db) aid_size_touch_slider_marker

0x4d1d,	// (0x00059f7a) popup_settings_window_ParamLimits

0x4d1d,	// (0x00059f7a) popup_settings_window

0x340e,	// (0x0005866b) popup_candi_list_indi_window

0x809b,	// (0x0005d2f8) aid_touch_navi_pane_ParamLimits

0x723c,	// (0x0005c499) rs_clock_indi_pane

0x7245,	// (0x0005c4a2) sctrl_sk_bottom_pane_ParamLimits

0x7256,	// (0x0005c4b3) sctrl_sk_top_pane_ParamLimits

0x735b,	// (0x0005c5b8) popup_fep_tooltip_window

0xdef7,	// (0x00063154) aid_size_cell_widget_grid_ParamLimits

0xdf64,	// (0x000631c1) cell_ai5_widget_pane_g1_ParamLimits

0xdf64,	// (0x000631c1) cell_ai5_widget_pane_g1

0xdfb8,	// (0x00063215) cell_ai5_widget_pane_g6_ParamLimits

0xdfc4,	// (0x00063221) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x0006509f) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0006509f) cell_ai5_widget_pane_g

0xe0f6,	// (0x00063353) cell_ai5_widget_pane_t10_ParamLimits

0xe0f6,	// (0x00063353) cell_ai5_widget_pane_t10

0xe114,	// (0x00063371) grid_ai5_widget_pane_ParamLimits

0xe1ac,	// (0x00063409) cell_contacts_ai5_widget_pane_ParamLimits

0xe1ac,	// (0x00063409) cell_contacts_ai5_widget_pane

0xe396,	// (0x000635f3) popup_discreet_window_t3_ParamLimits

0xe396,	// (0x000635f3) popup_discreet_window_t3

0x7b03,	// (0x0005cd60) popup_fshwr2_char_preview_window_ParamLimits

0x7b03,	// (0x0005cd60) popup_fshwr2_char_preview_window

0xe6de,	// (0x0006393b) tmo_note_info_pane_t1

0xe6f3,	// (0x00063950) tmo_note_info_pane_t2

0xe70c,	// (0x00063969) tmo_note_info_pane_t3

0xe721,	// (0x0006397e) tmo_note_info_pane_t4

0xe733,	// (0x00063990) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x00065126) tmo_note_info_pane_t

0xe745,	// (0x000639a2) list_tmo_link_pane_ParamLimits

0xe752,	// (0x000639af) scroll_pane_cp20_ParamLimits

0x4bca,	// (0x00059e27) bg_popup_fep_char_preview_window_cp01

0xe796,	// (0x000639f3) popup_fshwr2_char_preview_window_t1

0xe7a4,	// (0x00063a01) popup_candi_list_indi_window_g1

0xe7ad,	// (0x00063a0a) bg_cell_contacts_ai5_widget_pane

0xe7b9,	// (0x00063a16) cell_contacts_ai5_widget_pane_g1

0xe7ce,	// (0x00063a2b) cell_contacts_ai5_widget_pane_g2

0xe7da,	// (0x00063a37) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x00065131) cell_contacts_ai5_widget_pane_g

0xe7e6,	// (0x00063a43) cell_contacts_ai5_widget_pane_t1

0xe4a6,	// (0x00063703) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe85d,	// (0x00063aba) settings_container_pane

0x1077,	// (0x000562d4) listscroll_set_pane_copy1

0xa495,	// (0x0005f6f2) scroll_pane_cp121_copy1

0xe869,	// (0x00063ac6) set_content_pane_copy1

0xe871,	// (0x00063ace) aid_height_set_list_copy1_ParamLimits

0xe871,	// (0x00063ace) aid_height_set_list_copy1

0x992c,	// (0x0005eb89) aid_size_parent_copy1_ParamLimits

0x992c,	// (0x0005eb89) aid_size_parent_copy1

0xe87d,	// (0x00063ada) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe87d,	// (0x00063ada) button_value_adjust_pane_cp6_copy1

0x63e2,	// (0x0005b63f) list_highlight_pane_cp2_copy1_ParamLimits

0x63e2,	// (0x0005b63f) list_highlight_pane_cp2_copy1

0xe891,	// (0x00063aee) list_set_pane_copy1_ParamLimits

0xe891,	// (0x00063aee) list_set_pane_copy1

0xe7f8,	// (0x00063a55) main_pane_set_t1_copy1_ParamLimits

0xe7f8,	// (0x00063a55) main_pane_set_t1_copy1

0xe832,	// (0x00063a8f) main_pane_set_t2_copy1_ParamLimits

0xe832,	// (0x00063a8f) main_pane_set_t2_copy1

0xe958,	// (0x00063bb5) main_pane_set_t3_copy1

0xe966,	// (0x00063bc3) main_pane_set_t4_copy1

0xe851,	// (0x00063aae) set_content_pane_g1_copy1_ParamLimits

0xe851,	// (0x00063aae) set_content_pane_g1_copy1

0xe974,	// (0x00063bd1) setting_code_pane_copy1

0xe97c,	// (0x00063bd9) setting_slider_graphic_pane_copy1

0xe97c,	// (0x00063bd9) setting_slider_pane_copy1

0xe97c,	// (0x00063bd9) setting_text_pane_copy1

0xe97c,	// (0x00063bd9) setting_volume_pane_copy1

0xe974,	// (0x00063bd1) settings_code_pane_cp2_copy1

0xe984,	// (0x00063be1) settings_code_pane_cp_copy1_ParamLimits

0xe984,	// (0x00063be1) settings_code_pane_cp_copy1

0x7be6,	// (0x0005ce43) volume_set_pane_copy1

0xe998,	// (0x00063bf5) volume_set_pane_g10_copy1

0xe9a4,	// (0x00063c01) volume_set_pane_g1_copy1

0xe9ae,	// (0x00063c0b) volume_set_pane_g2_copy1

0xe9b8,	// (0x00063c15) volume_set_pane_g3_copy1

0xe9c2,	// (0x00063c1f) volume_set_pane_g4_copy1

0xe9cc,	// (0x00063c29) volume_set_pane_g5_copy1

0xe9d6,	// (0x00063c33) volume_set_pane_g6_copy1

0xe9e0,	// (0x00063c3d) volume_set_pane_g7_copy1

0xe9ea,	// (0x00063c47) volume_set_pane_g8_copy1

0xe9f4,	// (0x00063c51) volume_set_pane_g9_copy1

0xc28b,	// (0x000614e8) bg_set_opt_pane_cp_copy1_ParamLimits

0xc28b,	// (0x000614e8) bg_set_opt_pane_cp_copy1

0x7bf2,	// (0x0005ce4f) setting_slider_pane_t1_copy1_ParamLimits

0x7bf2,	// (0x0005ce4f) setting_slider_pane_t1_copy1

0x7c10,	// (0x0005ce6d) setting_slider_pane_t2_copy1_ParamLimits

0x7c10,	// (0x0005ce6d) setting_slider_pane_t2_copy1

0x7c2a,	// (0x0005ce87) setting_slider_pane_t3_copy1_ParamLimits

0x7c2a,	// (0x0005ce87) setting_slider_pane_t3_copy1

0x7c42,	// (0x0005ce9f) slider_set_pane_copy1_ParamLimits

0x7c42,	// (0x0005ce9f) slider_set_pane_copy1

0xe501,	// (0x0006375e) set_opt_bg_pane_g1_copy2

0xe509,	// (0x00063766) set_opt_bg_pane_g2_copy2

0xe9fe,	// (0x00063c5b) set_opt_bg_pane_g3_copy2

0xe519,	// (0x00063776) set_opt_bg_pane_g4_copy2

0xe521,	// (0x0006377e) set_opt_bg_pane_g5_copy2

0xe529,	// (0x00063786) set_opt_bg_pane_g6_copy2

0xea08,	// (0x00063c65) set_opt_bg_pane_g7_copy2

0xea12,	// (0x00063c6f) set_opt_bg_pane_g8_copy2

0xea1c,	// (0x00063c79) set_opt_bg_pane_g9_copy2

0x7c58,	// (0x0005ceb5) aid_size_touch_slider_mark_copy1_ParamLimits

0x7c58,	// (0x0005ceb5) aid_size_touch_slider_mark_copy1

0xea26,	// (0x00063c83) slider_set_pane_g1_copy1

0x7c6c,	// (0x0005cec9) slider_set_pane_g2_copy1

0x6b29,	// (0x0005bd86) slider_set_pane_g3_copy1_ParamLimits

0x6b29,	// (0x0005bd86) slider_set_pane_g3_copy1

0x6b3d,	// (0x0005bd9a) slider_set_pane_g4_copy1_ParamLimits

0x6b3d,	// (0x0005bd9a) slider_set_pane_g4_copy1

0x6b55,	// (0x0005bdb2) slider_set_pane_g5_copy1_ParamLimits

0x6b55,	// (0x0005bdb2) slider_set_pane_g5_copy1

0x6b29,	// (0x0005bd86) slider_set_pane_g6_copy1_ParamLimits

0x6b29,	// (0x0005bd86) slider_set_pane_g6_copy1

0x7c74,	// (0x0005ced1) slider_set_pane_g7_copy1_ParamLimits

0x7c74,	// (0x0005ced1) slider_set_pane_g7_copy1

0xc231,	// (0x0006148e) bg_set_opt_pane_cp2_copy1

0xea2f,	// (0x00063c8c) setting_slider_graphic_pane_g1_copy1

0xea38,	// (0x00063c95) setting_slider_graphic_pane_t1_copy1

0xea48,	// (0x00063ca5) setting_slider_graphic_pane_t2_copy1

0xea58,	// (0x00063cb5) slider_set_pane_cp_copy1

0xea68,	// (0x00063cc5) input_focus_pane_cp1_copy1

0xea71,	// (0x00063cce) list_set_text_pane_copy1

0xea79,	// (0x00063cd6) setting_text_pane_g1_copy1

0x3154,	// (0x000583b1) set_text_pane_t1_copy1

0xea68,	// (0x00063cc5) input_focus_pane_cp2_copy1

0xea79,	// (0x00063cd6) setting_code_pane_g1_copy1

0xea82,	// (0x00063cdf) setting_code_pane_t1_copy1

0xea90,	// (0x00063ced) list_set_graphic_pane_copy1

0xc231,	// (0x0006148e) bg_set_opt_pane_cp4_copy1

0x5f1d,	// (0x0005b17a) list_set_graphic_pane_g1_copy1_ParamLimits

0x5f1d,	// (0x0005b17a) list_set_graphic_pane_g1_copy1

0xeaa2,	// (0x00063cff) list_set_graphic_pane_g2_copy1

0x5f35,	// (0x0005b192) list_set_graphic_pane_t1_copy1_ParamLimits

0x5f35,	// (0x0005b192) list_set_graphic_pane_t1_copy1

0xad74,	// (0x0005ffd1) rs_clock_indi_pane_g1

0xeaaa,	// (0x00063d07) rs_clock_indi_pane_t1

0xeab8,	// (0x00063d15) rs_indi_pane

0xeac0,	// (0x00063d1d) rs_indi_pane_g1

0xeac9,	// (0x00063d26) rs_indi_pane_g2

0xead2,	// (0x00063d2f) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x00065138) rs_indi_pane_g

0x1077,	// (0x000562d4) bg_popup_preview_window_pane_cp03

0xeadb,	// (0x00063d38) popup_fep_tooltip_window_t1

0xba2b,	// (0x00060c88) popup_note2_window_g2_ParamLimits

0xba2b,	// (0x00060c88) popup_note2_window_g2

0x0001,

0xfc74,	// (0x00064ed1) popup_note2_window_g_ParamLimits

0xfc74,	// (0x00064ed1) popup_note2_window_g

0xbf33,	// (0x00061190) bg_popup_sub_pane_cp11_ParamLimits

0xbf40,	// (0x0006119d) cell_ai3_links_pane_g1_ParamLimits

0xbf57,	// (0x000611b4) cell_ai3_links_pane_t1

0x3154,	// (0x000583b1) set_text_pane_t1_copy1_ParamLimits

0x5fb4,	// (0x0005b211) cell_graphic_popup_pane_cp2_ParamLimits

0x5fb4,	// (0x0005b211) cell_graphic_popup_pane_cp2

0xeae9,	// (0x00063d46) cell_graphic_popup_pane_g1_cp2

0xc603,	// (0x00061860) cell_graphic_popup_pane_g2_cp2

0xeaf1,	// (0x00063d4e) cell_graphic_popup_pane_g3_cp2

0xeaf9,	// (0x00063d56) cell_graphic_popup_pane_t2_cp2

0xc614,	// (0x00061871) grid_highlight_pane_cp3_cp2

0xef3a,	// (0x00064197) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe4a6,	// (0x00063703) main_tmo_pane_ParamLimits

0xc8d0,	// (0x00061b2d) popup_tmo_big_image_note_window

0xdf53,	// (0x000631b0) cell_ai5_widget_list_pane

0xdf5b,	// (0x000631b8) cell_ai5_widget_lrg_icon_pane

0xe6de,	// (0x0006393b) tmo_note_info_pane_t1_ParamLimits

0xe6f3,	// (0x00063950) tmo_note_info_pane_t2_ParamLimits

0xe70c,	// (0x00063969) tmo_note_info_pane_t3_ParamLimits

0xe721,	// (0x0006397e) tmo_note_info_pane_t4_ParamLimits

0xe733,	// (0x00063990) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x00065126) tmo_note_info_pane_t_ParamLimits

0xe85d,	// (0x00063aba) settings_container_pane_ParamLimits

0xea60,	// (0x00063cbd) indicator_popup_pane_cp5

0xea60,	// (0x00063cbd) indicator_popup_pane_cp6

0xea90,	// (0x00063ced) list_set_graphic_pane_copy1_ParamLimits

0xc21d,	// (0x0006147a) bg_popup_window_pane_cp23

0xeb07,	// (0x00063d64) popup_tmo_big_image_note_window_g1

0xeb13,	// (0x00063d70) popup_tmo_big_image_note_window_t1

0xeb23,	// (0x00063d80) popup_tmo_big_image_note_window_t2

0xeb33,	// (0x00063d90) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x0006513f) popup_tmo_big_image_note_window_t

0xad74,	// (0x0005ffd1) cell_ai5_widget_lrg_icon_pane_g1

0xeb43,	// (0x00063da0) cell_ai5_widget_lrg_icon_pane_t1

0xeb51,	// (0x00063dae) cell_ai5_widget_list_row_pane_ParamLimits

0xeb51,	// (0x00063dae) cell_ai5_widget_list_row_pane

0xeb69,	// (0x00063dc6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeb69,	// (0x00063dc6) cell_ai5_widget_list_row_pane_g1

0xeb76,	// (0x00063dd3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeb76,	// (0x00063dd3) cell_ai5_widget_list_row_pane_t1

0xeba1,	// (0x00063dfe) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeba1,	// (0x00063dfe) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee9,	// (0x00065146) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x00065146) cell_ai5_widget_list_row_pane_t

0x4bca,	// (0x00059e27) main_fep_vtchi_ss_pane

0xebe5,	// (0x00063e42) popup_fep_char_pre_window

0xebed,	// (0x00063e4a) popup_fep_ituss_window

0xec0e,	// (0x00063e6b) popup_fep_vkbss_window

0xec2f,	// (0x00063e8c) grid_vkbss_keypad_pane_ParamLimits

0xec2f,	// (0x00063e8c) grid_vkbss_keypad_pane

0xec3f,	// (0x00063e9c) ituss_keypad_pane

0x7c96,	// (0x0005cef3) aid_vkbss_key_offset_ParamLimits

0x7c96,	// (0x0005cef3) aid_vkbss_key_offset

0x7ca2,	// (0x0005ceff) cell_vkbss_key_pane_ParamLimits

0x7ca2,	// (0x0005ceff) cell_vkbss_key_pane

0xec4e,	// (0x00063eab) bg_cell_vkbss_key_g1_ParamLimits

0xec4e,	// (0x00063eab) bg_cell_vkbss_key_g1

0xec5a,	// (0x00063eb7) cell_vkbss_key_3p_pane_ParamLimits

0xec5a,	// (0x00063eb7) cell_vkbss_key_3p_pane

0xec74,	// (0x00063ed1) cell_vkbss_key_g1_ParamLimits

0xec74,	// (0x00063ed1) cell_vkbss_key_g1

0xec8e,	// (0x00063eeb) cell_vkbss_key_t1_ParamLimits

0xec8e,	// (0x00063eeb) cell_vkbss_key_t1

0x7cb8,	// (0x0005cf15) cell_ituss_key_pane_ParamLimits

0x7cb8,	// (0x0005cf15) cell_ituss_key_pane

0xecb9,	// (0x00063f16) bg_cell_ituss_key_g1_ParamLimits

0xecb9,	// (0x00063f16) bg_cell_ituss_key_g1

0xecc5,	// (0x00063f22) cell_ituss_key_pane_g1_ParamLimits

0xecc5,	// (0x00063f22) cell_ituss_key_pane_g1

0x7cc9,	// (0x0005cf26) cell_ituss_key_pane_g2_ParamLimits

0x7cc9,	// (0x0005cf26) cell_ituss_key_pane_g2

0x0002,

0xfef0,	// (0x0006514d) cell_ituss_key_pane_g_ParamLimits

0xfef0,	// (0x0006514d) cell_ituss_key_pane_g

0x7cf5,	// (0x0005cf52) cell_ituss_key_t1_ParamLimits

0x7cf5,	// (0x0005cf52) cell_ituss_key_t1

0x7d2f,	// (0x0005cf8c) cell_ituss_key_t2_ParamLimits

0x7d2f,	// (0x0005cf8c) cell_ituss_key_t2

0x7d60,	// (0x0005cfbd) cell_ituss_key_t3_ParamLimits

0x7d60,	// (0x0005cfbd) cell_ituss_key_t3

0x7d2f,	// (0x0005cf8c) cell_ituss_key_t4_ParamLimits

0x7d2f,	// (0x0005cf8c) cell_ituss_key_t4

0x0004,

0xfef7,	// (0x00065154) cell_ituss_key_t_ParamLimits

0xfef7,	// (0x00065154) cell_ituss_key_t

0xeceb,	// (0x00063f48) cell_vkbss_key_3p_pane_g1

0xecf3,	// (0x00063f50) cell_vkbss_key_3p_pane_g2

0xecfb,	// (0x00063f58) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0006515f) cell_vkbss_key_3p_pane_g

0x4bca,	// (0x00059e27) bg_popup_fep_char_preview_window_cp02

0x7da3,	// (0x0005d000) popup_fep_char_pre_window_t1

0xdeed,	// (0x0006314a) main_ai5_sk_pane

0xe7ad,	// (0x00063a0a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe7b9,	// (0x00063a16) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe7ce,	// (0x00063a2b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe7da,	// (0x00063a37) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x00065131) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe7e6,	// (0x00063a43) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe4a6,	// (0x00063703) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed03,	// (0x00063f60) main_ai5_sk_pane_g1

0x89eb,	// (0x0005dc48) popup_query_code_window_g1

0xec03,	// (0x00063e60) popup_fep_vkb_icf_pane

0xec19,	// (0x00063e76) popup_fep_vtchi_icf_pane

0xed0c,	// (0x00063f69) bg_icf_pane

0xed18,	// (0x00063f75) list_vkb_icf_pane

0xed24,	// (0x00063f81) bg_icf_pane_cp01

0xed37,	// (0x00063f94) vtchi_icf_list_pane

0xed48,	// (0x00063fa5) list_vkb_icf_pane_t1_ParamLimits

0xed48,	// (0x00063fa5) list_vkb_icf_pane_t1

0xed5e,	// (0x00063fbb) vtchi_icf_list_pane_t1_ParamLimits

0xed5e,	// (0x00063fbb) vtchi_icf_list_pane_t1

0xebed,	// (0x00063e4a) popup_fep_ituss_window_ParamLimits

0xec19,	// (0x00063e76) popup_fep_vtchi_icf_pane_ParamLimits

0xec3f,	// (0x00063e9c) ituss_keypad_pane_ParamLimits

0x7c8a,	// (0x0005cee7) ituss_sks_pane

0xed0c,	// (0x00063f69) bg_icf_pane_ParamLimits

0xebc9,	// (0x00063e26) icf_edit_indi_pane_ParamLimits

0xebc9,	// (0x00063e26) icf_edit_indi_pane

0xed18,	// (0x00063f75) list_vkb_icf_pane_ParamLimits

0xed24,	// (0x00063f81) bg_icf_pane_cp01_ParamLimits

0xebd8,	// (0x00063e35) icf_edit_indi_pane_cp01_ParamLimits

0xebd8,	// (0x00063e35) icf_edit_indi_pane_cp01

0xed3f,	// (0x00063f9c) vtchi_query_pane

0xafef,	// (0x0006024c) icf_edit_indi_pane_g1_ParamLimits

0xafef,	// (0x0006024c) icf_edit_indi_pane_g1

0xedcd,	// (0x0006402a) icf_edit_indi_pane_g2_ParamLimits

0xedcd,	// (0x0006402a) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00065177) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00065177) icf_edit_indi_pane_g

0xeddc,	// (0x00064039) icf_edit_indi_pane_t1

0xed76,	// (0x00063fd3) bg_input_focus_pane_cp042

0xc7e7,	// (0x00061a44) vtchi_button_pane

0xed7f,	// (0x00063fdc) vtchi_query_pane_t1

0xed8d,	// (0x00063fea) vtchi_query_pane_t2

0xed9b,	// (0x00063ff8) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00065166) vtchi_query_pane_t

0x4bca,	// (0x00059e27) bg_button_pane_cp13

0xeda9,	// (0x00064006) vtchi_button_pane_g1

0x7db2,	// (0x0005d00f) ituss_sks_pane_g1

0x7dbd,	// (0x0005d01a) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x0006516d) ituss_sks_pane_g

0xedb1,	// (0x0006400e) ituss_sks_pane_t1

0xedbf,	// (0x0006401c) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00065172) ituss_sks_pane_t

0xa824,	// (0x0005fa81) indicator_nsta_pane_cp_g1

0xa82d,	// (0x0005fa8a) indicator_nsta_pane_cp_g2

0xa835,	// (0x0005fa92) indicator_nsta_pane_cp_g3

0xa83d,	// (0x0005fa9a) indicator_nsta_pane_cp_g4

0xa845,	// (0x0005faa2) indicator_nsta_pane_cp_g5

0xa84d,	// (0x0005faaa) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00064d0f) indicator_nsta_pane_cp_g

0xd5d8,	// (0x00062835) cell_graphic2_pane_t2_ParamLimits

0xd5d8,	// (0x00062835) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x00065028) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x00065028) cell_graphic2_pane_t

0xd605,	// (0x00062862) cell_graphic2_control_pane_t1

0x5c67,	// (0x0005aec4) signal_pane_g3_ParamLimits

0x5c67,	// (0x0005aec4) signal_pane_g3

0x5c79,	// (0x0005aed6) signal_pane_g4_ParamLimits

0x5c79,	// (0x0005aed6) signal_pane_g4

0xebb3,	// (0x00063e10) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xebb3,	// (0x00063e10) cell_ai5_widget_list_row_pane_t3

0xecd9,	// (0x00063f36) cell_ituss_key_pane_t1_ParamLimits

0xecd9,	// (0x00063f36) cell_ituss_key_pane_t1

0x8668,	// (0x0005d8c5) form_field_data_wide_pane_vc_t2_ParamLimits

0x8668,	// (0x0005d8c5) form_field_data_wide_pane_vc_t2

0x867c,	// (0x0005d8d9) form_field_data_wide_pane_vc_t3_ParamLimits

0x867c,	// (0x0005d8d9) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00064a6b) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00064a6b) form_field_data_wide_pane_vc_t

0xa4d5,	// (0x0005f732) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa4d5,	// (0x0005f732) form_field_slider_wide_pane_vc_t3

0xa5ab,	// (0x0005f808) form_field_popup_wide_pane_vc_t2_ParamLimits

0xa5ab,	// (0x0005f808) form_field_popup_wide_pane_vc_t2

0xa5c2,	// (0x0005f81f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xa5c2,	// (0x0005f81f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00064cfe) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00064cfe) form_field_popup_wide_pane_vc_t

0x7aa7,	// (0x0005cd04) aid_fshwr2_btn_pane_ParamLimits

0x7ab3,	// (0x0005cd10) aid_fshwr2_syb_pane_ParamLimits

0x7abf,	// (0x0005cd1c) aid_fshwr2_txt_pane_ParamLimits

0x72e3,	// (0x0005c540) fshwr2_bg_pane_ParamLimits

0x7acb,	// (0x0005cd28) fshwr2_func_candi_pane_ParamLimits

0x7ade,	// (0x0005cd3b) fshwr2_hwr_syb_pane_ParamLimits

0x7aec,	// (0x0005cd49) fshwr2_icf_pane_ParamLimits

0x9ef8,	// (0x0005f155) list_double_graphic_pane_vc_g4_ParamLimits

0x9ef8,	// (0x0005f155) list_double_graphic_pane_vc_g4

0x7ce9,	// (0x0005cf46) cell_ituss_key_pane_g3_ParamLimits

0x7ce9,	// (0x0005cf46) cell_ituss_key_pane_g3

0x7d91,	// (0x0005cfee) cell_ituss_key_t5_ParamLimits

0x7d91,	// (0x0005cfee) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
