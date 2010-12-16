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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00047377 };

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
0xa3b7,	// (0x0005172e) Screen

0xa3c3,	// (0x0005173a) application_window_ParamLimits

0xa3c3,	// (0x0005173a) application_window

0x6f60,	// (0x0004e2d7) screen_g1

0xa3fb,	// (0x00051772) area_bottom_pane_ParamLimits

0xa3fb,	// (0x00051772) area_bottom_pane

0xf1b9,	// (0x00056530) area_top_pane_ParamLimits

0xf1b9,	// (0x00056530) area_top_pane

0xf24d,	// (0x000565c4) main_pane_ParamLimits

0xf24d,	// (0x000565c4) main_pane

0x6f6a,	// (0x0004e2e1) misc_graphics

0xbce2,	// (0x00053059) battery_pane_ParamLimits

0xbce2,	// (0x00053059) battery_pane

0x3db9,	// (0x0004b130) bg_status_flat_pane_g8

0x3dc1,	// (0x0004b138) bg_status_flat_pane_g9

0x31bd,	// (0x0004a534) context_pane_ParamLimits

0x31bd,	// (0x0004a534) context_pane

0xbe59,	// (0x000531d0) navi_pane_ParamLimits

0xbe59,	// (0x000531d0) navi_pane

0xbee1,	// (0x00053258) signal_pane_ParamLimits

0xbee1,	// (0x00053258) signal_pane

0x0008,

0xf852,	// (0x00056bc9) bg_status_flat_pane_g

0xc80b,	// (0x00053b82) status_pane_g1_ParamLimits

0xc80b,	// (0x00053b82) status_pane_g1

0xc821,	// (0x00053b98) status_pane_g2_ParamLimits

0xc821,	// (0x00053b98) status_pane_g2

0x33f4,	// (0x0004a76b) status_pane_g3_ParamLimits

0x33f4,	// (0x0004a76b) status_pane_g3

0x0004,

0xf77e,	// (0x00056af5) status_pane_g_ParamLimits

0xf77e,	// (0x00056af5) status_pane_g

0xc82d,	// (0x00053ba4) title_pane_ParamLimits

0xc82d,	// (0x00053ba4) title_pane

0xc890,	// (0x00053c07) uni_indicator_pane_ParamLimits

0xc890,	// (0x00053c07) uni_indicator_pane

0x3021,	// (0x0004a398) bg_list_pane_ParamLimits

0x3021,	// (0x0004a398) bg_list_pane

0xb51c,	// (0x00052893) find_pane

0x35ed,	// (0x0004a964) listscroll_app_pane_ParamLimits

0x35ed,	// (0x0004a964) listscroll_app_pane

0x3055,	// (0x0004a3cc) listscroll_form_pane

0xb524,	// (0x0005289b) listscroll_gen_pane_ParamLimits

0xb524,	// (0x0005289b) listscroll_gen_pane

0x0928,	// (0x00047c9f) listscroll_set_pane

0x4946,	// (0x0004bcbd) main_idle_act_pane

0x2d1a,	// (0x0004a091) main_idle_trad_pane

0x2d1a,	// (0x0004a091) main_list_empty_pane

0x3049,	// (0x0004a3c0) main_midp_pane

0x306f,	// (0x0004a3e6) main_pane_g1_ParamLimits

0x306f,	// (0x0004a3e6) main_pane_g1

0xb538,	// (0x000528af) popup_ai_message_window_ParamLimits

0xb538,	// (0x000528af) popup_ai_message_window

0xb5d8,	// (0x0005294f) popup_fep_china_uni_window_ParamLimits

0xb5d8,	// (0x0005294f) popup_fep_china_uni_window

0x0a44,	// (0x00047dbb) popup_fep_japan_candidate_window_ParamLimits

0x0a44,	// (0x00047dbb) popup_fep_japan_candidate_window

0x0a6e,	// (0x00047de5) popup_fep_japan_predictive_window_ParamLimits

0x0a6e,	// (0x00047de5) popup_fep_japan_predictive_window

0xb638,	// (0x000529af) popup_find_window

0xb655,	// (0x000529cc) popup_grid_graphic_window_ParamLimits

0xb655,	// (0x000529cc) popup_grid_graphic_window

0x0ae1,	// (0x00047e58) popup_large_graphic_colour_window

0xb6ff,	// (0x00052a76) popup_menu_window_ParamLimits

0xb6ff,	// (0x00052a76) popup_menu_window

0xb8ef,	// (0x00052c66) popup_note_image_window

0xb8af,	// (0x00052c26) popup_note_wait_window_ParamLimits

0xb8af,	// (0x00052c26) popup_note_wait_window

0xb907,	// (0x00052c7e) popup_note_window_ParamLimits

0xb907,	// (0x00052c7e) popup_note_window

0xb9b5,	// (0x00052d2c) popup_query_code_window_ParamLimits

0xb9b5,	// (0x00052d2c) popup_query_code_window

0x0d4d,	// (0x000480c4) popup_query_data_code_window_ParamLimits

0x0d4d,	// (0x000480c4) popup_query_data_code_window

0xb9f5,	// (0x00052d6c) popup_query_data_window_ParamLimits

0xb9f5,	// (0x00052d6c) popup_query_data_window

0xba89,	// (0x00052e00) popup_query_sat_info_window_ParamLimits

0xba89,	// (0x00052e00) popup_query_sat_info_window

0xbb34,	// (0x00052eab) popup_snote_single_graphic_window_ParamLimits

0xbb34,	// (0x00052eab) popup_snote_single_graphic_window

0xbb34,	// (0x00052eab) popup_snote_single_text_window_ParamLimits

0xbb34,	// (0x00052eab) popup_snote_single_text_window

0x0de8,	// (0x0004815f) popup_sub_window_general

0x0f2e,	// (0x000482a5) popup_window_general_ParamLimits

0x0f2e,	// (0x000482a5) popup_window_general

0x307d,	// (0x0004a3f4) power_save_pane

0x07cb,	// (0x00047b42) control_pane_g1_ParamLimits

0x07cb,	// (0x00047b42) control_pane_g1

0x07ee,	// (0x00047b65) control_pane_g2_ParamLimits

0x07ee,	// (0x00047b65) control_pane_g2

0x2fe4,	// (0x0004a35b) control_pane_g3_ParamLimits

0x2fe4,	// (0x0004a35b) control_pane_g3

0x0007,

0xf766,	// (0x00056add) control_pane_g_ParamLimits

0xf766,	// (0x00056add) control_pane_g

0xb433,	// (0x000527aa) control_pane_t1_ParamLimits

0xb433,	// (0x000527aa) control_pane_t1

0xb483,	// (0x000527fa) control_pane_t2_ParamLimits

0xb483,	// (0x000527fa) control_pane_t2

0x0002,

0xf777,	// (0x00056aee) control_pane_t_ParamLimits

0xf777,	// (0x00056aee) control_pane_t

0x2f09,	// (0x0004a280) navi_navi_volume_pane_cp1

0x2f11,	// (0x0004a288) status_small_icon_pane

0x2f19,	// (0x0004a290) status_small_pane_g1_ParamLimits

0x2f19,	// (0x0004a290) status_small_pane_g1

0x2f4d,	// (0x0004a2c4) status_small_pane_g2_ParamLimits

0x2f4d,	// (0x0004a2c4) status_small_pane_g2

0x2f59,	// (0x0004a2d0) status_small_pane_g3_ParamLimits

0x2f59,	// (0x0004a2d0) status_small_pane_g3

0xb3e5,	// (0x0005275c) status_small_pane_g4_ParamLimits

0xb3e5,	// (0x0005275c) status_small_pane_g4

0xb3f3,	// (0x0005276a) status_small_pane_g5_ParamLimits

0xb3f3,	// (0x0005276a) status_small_pane_g5

0x2f7f,	// (0x0004a2f6) status_small_pane_g6_ParamLimits

0x2f7f,	// (0x0004a2f6) status_small_pane_g6

0x0007,

0xf755,	// (0x00056acc) status_small_pane_g_ParamLimits

0xf755,	// (0x00056acc) status_small_pane_g

0x2fae,	// (0x0004a325) status_small_pane_t1

0xb409,	// (0x00052780) status_small_wait_pane_ParamLimits

0xb409,	// (0x00052780) status_small_wait_pane

0xb287,	// (0x000525fe) aid_levels_signal_ParamLimits

0xb287,	// (0x000525fe) aid_levels_signal

0xb29f,	// (0x00052616) signal_pane_g1_ParamLimits

0xb29f,	// (0x00052616) signal_pane_g1

0xb2ba,	// (0x00052631) signal_pane_g2_ParamLimits

0xb2ba,	// (0x00052631) signal_pane_g2

0x0003,

0xf6e6,	// (0x00056a5d) signal_pane_g_ParamLimits

0xf6e6,	// (0x00056a5d) signal_pane_g

0x27e9,	// (0x00049b60) context_pane_g1

0xa5a5,	// (0x0005191c) title_pane_g1

0xa5e8,	// (0x0005195f) title_pane_t1

0x6f80,	// (0x0004e2f7) title_pane_t2

0x6fa6,	// (0x0004e31d) title_pane_t3

0x0002,

0xf530,	// (0x000568a7) title_pane_t

0xc8b8,	// (0x00053c2f) aid_levels_battery_ParamLimits

0xc8b8,	// (0x00053c2f) aid_levels_battery

0xc8d4,	// (0x00053c4b) battery_pane_g1_ParamLimits

0xc8d4,	// (0x00053c4b) battery_pane_g1

0xc8f1,	// (0x00053c68) battery_pane_g2_ParamLimits

0xc8f1,	// (0x00053c68) battery_pane_g2

0x0001,

0xf789,	// (0x00056b00) battery_pane_g_ParamLimits

0xf789,	// (0x00056b00) battery_pane_g

0xcb23,	// (0x00053e9a) uni_indicator_pane_g1

0xcb39,	// (0x00053eb0) uni_indicator_pane_g2

0xcb4f,	// (0x00053ec6) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x00056c71) uni_indicator_pane_g

0x2b79,	// (0x00049ef0) navi_icon_pane_ParamLimits

0x2b79,	// (0x00049ef0) navi_icon_pane

0x2acc,	// (0x00049e43) navi_midp_pane

0x2b95,	// (0x00049f0c) navi_navi_pane

0x2b9f,	// (0x00049f16) navi_text_pane_ParamLimits

0x2b9f,	// (0x00049f16) navi_text_pane

0x6f60,	// (0x0004e2d7) status_small_wait_pane_g1

0xab1d,	// (0x00051e94) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x00056c6c) status_small_wait_pane_g

0xcac2,	// (0x00053e39) navi_navi_icon_text_pane

0xcaca,	// (0x00053e41) navi_navi_pane_g1_ParamLimits

0xcaca,	// (0x00053e41) navi_navi_pane_g1

0xcadc,	// (0x00053e53) navi_navi_pane_g2_ParamLimits

0xcadc,	// (0x00053e53) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x00056c3a) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x00056c3a) navi_navi_pane_g

0x4442,	// (0x0004b7b9) navi_navi_tabs_pane

0xcaee,	// (0x00053e65) navi_navi_text_pane

0xcac2,	// (0x00053e39) navi_navi_volume_pane

0xcab0,	// (0x00053e27) navi_text_pane_t1

0xcaa4,	// (0x00053e1b) navi_icon_pane_g1

0x4339,	// (0x0004b6b0) navi_navi_text_pane_t1

0xc034,	// (0x000533ab) navi_navi_volume_pane_g1

0xc03c,	// (0x000533b3) volume_small_pane

0xca00,	// (0x00053d77) navi_navi_icon_text_pane_g1

0xca08,	// (0x00053d7f) navi_navi_icon_text_pane_t1

0x2b95,	// (0x00049f0c) navi_tabs_2_long_pane

0x2b95,	// (0x00049f0c) navi_tabs_2_pane

0x2b95,	// (0x00049f0c) navi_tabs_3_long_pane

0x2b95,	// (0x00049f0c) navi_tabs_3_pane

0x2b95,	// (0x00049f0c) navi_tabs_4_pane

0x11e7,	// (0x0004855e) tabs_2_active_pane_ParamLimits

0x11e7,	// (0x0004855e) tabs_2_active_pane

0x11f7,	// (0x0004856e) tabs_2_passive_pane_ParamLimits

0x11f7,	// (0x0004856e) tabs_2_passive_pane

0x11b5,	// (0x0004852c) tabs_3_active_pane_ParamLimits

0x11b5,	// (0x0004852c) tabs_3_active_pane

0x11c5,	// (0x0004853c) tabs_3_passive_pane_ParamLimits

0x11c5,	// (0x0004853c) tabs_3_passive_pane

0x11d6,	// (0x0004854d) tabs_3_passive_pane_cp_ParamLimits

0x11d6,	// (0x0004854d) tabs_3_passive_pane_cp

0x1169,	// (0x000484e0) tabs_4_active_pane_ParamLimits

0x1169,	// (0x000484e0) tabs_4_active_pane

0x117c,	// (0x000484f3) tabs_4_passive_pane_ParamLimits

0x117c,	// (0x000484f3) tabs_4_passive_pane

0x118d,	// (0x00048504) tabs_4_passive_pane_cp_ParamLimits

0x118d,	// (0x00048504) tabs_4_passive_pane_cp

0x119e,	// (0x00048515) tabs_4_passive_pane_cp2_ParamLimits

0x119e,	// (0x00048515) tabs_4_passive_pane_cp2

0x1145,	// (0x000484bc) tabs_2_long_active_pane_ParamLimits

0x1145,	// (0x000484bc) tabs_2_long_active_pane

0x1157,	// (0x000484ce) tabs_2_long_passive_pane_ParamLimits

0x1157,	// (0x000484ce) tabs_2_long_passive_pane

0x1106,	// (0x0004847d) tabs_3_long_active_pane_ParamLimits

0x1106,	// (0x0004847d) tabs_3_long_active_pane

0x1119,	// (0x00048490) tabs_3_long_passive_pane_ParamLimits

0x1119,	// (0x00048490) tabs_3_long_passive_pane

0x1132,	// (0x000484a9) tabs_3_long_passive_pane_cp_ParamLimits

0x1132,	// (0x000484a9) tabs_3_long_passive_pane_cp

0x10ac,	// (0x00048423) volume_small_pane_g1

0xbfe3,	// (0x0005335a) volume_small_pane_g2

0xbfec,	// (0x00053363) volume_small_pane_g3

0xbff5,	// (0x0005336c) volume_small_pane_g4

0xbffe,	// (0x00053375) volume_small_pane_g5

0xc007,	// (0x0005337e) volume_small_pane_g6

0xc010,	// (0x00053387) volume_small_pane_g7

0xc019,	// (0x00053390) volume_small_pane_g8

0xc022,	// (0x00053399) volume_small_pane_g9

0xc02b,	// (0x000533a2) volume_small_pane_g10

0x0009,

0xf88f,	// (0x00056c06) volume_small_pane_g

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp2_ParamLimits

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp2

0xa674,	// (0x000519eb) tabs_3_active_pane_g1

0xa67c,	// (0x000519f3) tabs_3_active_pane_t1

0x6ff4,	// (0x0004e36b) bg_passive_tab_pane_cp2_ParamLimits

0x6ff4,	// (0x0004e36b) bg_passive_tab_pane_cp2

0xa674,	// (0x000519eb) tabs_3_passive_pane_g1

0xa67c,	// (0x000519f3) tabs_3_passive_pane_t1

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp3_ParamLimits

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp3

0xa68e,	// (0x00051a05) tabs_4_active_pane_g1

0xa696,	// (0x00051a0d) tabs_4_active_pane_t1

0x6ff4,	// (0x0004e36b) bg_passive_tab_pane_cp3_ParamLimits

0x6ff4,	// (0x0004e36b) bg_passive_tab_pane_cp3

0xa68e,	// (0x00051a05) tabs_4_1_passive_pane_g1

0xa696,	// (0x00051a0d) tabs_4_1_passive_pane_t1

0x3049,	// (0x0004a3c0) list_highlight_pane_cp2

0xcbe2,	// (0x00053f59) list_set_pane_ParamLimits

0xcbe2,	// (0x00053f59) list_set_pane

0xcca4,	// (0x0005401b) main_pane_set_t1_ParamLimits

0xcca4,	// (0x0005401b) main_pane_set_t1

0xccc4,	// (0x0005403b) main_pane_set_t2_ParamLimits

0xccc4,	// (0x0005403b) main_pane_set_t2

0xccd8,	// (0x0005404f) main_pane_set_t3_ParamLimits

0xccd8,	// (0x0005404f) main_pane_set_t3

0xccec,	// (0x00054063) main_pane_set_t4_ParamLimits

0xccec,	// (0x00054063) main_pane_set_t4

0x0003,

0xf95f,	// (0x00056cd6) main_pane_set_t_ParamLimits

0xf95f,	// (0x00056cd6) main_pane_set_t

0xcd00,	// (0x00054077) setting_code_pane

0x4a94,	// (0x0004be0b) setting_slider_graphic_pane

0x4a94,	// (0x0004be0b) setting_slider_pane

0x4a94,	// (0x0004be0b) setting_text_pane

0x4a94,	// (0x0004be0b) setting_volume_pane

0xf494,	// (0x0005680b) volume_set_pane

0x6fb8,	// (0x0004e32f) bg_set_opt_pane_cp

0xf49e,	// (0x00056815) setting_slider_pane_t1

0xf4b7,	// (0x0005682e) setting_slider_pane_t2

0xf4d1,	// (0x00056848) setting_slider_pane_t3

0x0002,

0xf537,	// (0x000568ae) setting_slider_pane_t

0xf4e9,	// (0x00056860) slider_set_pane

0x6f6a,	// (0x0004e2e1) bg_set_opt_pane_cp2

0x6fc6,	// (0x0004e33d) setting_slider_graphic_pane_g1

0xf4ff,	// (0x00056876) setting_slider_graphic_pane_t1

0xf50f,	// (0x00056886) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x000568b5) setting_slider_graphic_pane_t

0xf51f,	// (0x00056896) slider_set_pane_cp

0x6f6a,	// (0x0004e2e1) input_focus_pane_cp1

0x492d,	// (0x0004bca4) list_set_text_pane

0x6f60,	// (0x0004e2d7) setting_text_pane_g1

0x6f6a,	// (0x0004e2e1) input_focus_pane_cp2

0x6f60,	// (0x0004e2d7) setting_code_pane_g1

0x6fcf,	// (0x0004e346) setting_code_pane_t1

0xe47d,	// (0x000557f4) set_text_pane_t1_ParamLimits

0xe47d,	// (0x000557f4) set_text_pane_t1

0xb014,	// (0x0005238b) set_opt_bg_pane_g1

0xb01c,	// (0x00052393) set_opt_bg_pane_g2

0x4905,	// (0x0004bc7c) set_opt_bg_pane_g3

0xb02c,	// (0x000523a3) set_opt_bg_pane_g4

0xb034,	// (0x000523ab) set_opt_bg_pane_g5

0xb03c,	// (0x000523b3) set_opt_bg_pane_g6

0x490f,	// (0x0004bc86) set_opt_bg_pane_g7

0x4919,	// (0x0004bc90) set_opt_bg_pane_g8

0x4923,	// (0x0004bc9a) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x00056cc3) set_opt_bg_pane_g

0x48f8,	// (0x0004bc6f) slider_set_pane_g1

0x1290,	// (0x00048607) slider_set_pane_g2

0x0006,

0xf93d,	// (0x00056cb4) slider_set_pane_g

0x1218,	// (0x0004858f) volume_set_pane_g1

0x1222,	// (0x00048599) volume_set_pane_g2

0x122c,	// (0x000485a3) volume_set_pane_g3

0x1236,	// (0x000485ad) volume_set_pane_g4

0x1240,	// (0x000485b7) volume_set_pane_g5

0x124a,	// (0x000485c1) volume_set_pane_g6

0x1254,	// (0x000485cb) volume_set_pane_g7

0x125e,	// (0x000485d5) volume_set_pane_g8

0x1268,	// (0x000485df) volume_set_pane_g9

0x1272,	// (0x000485e9) volume_set_pane_g10

0x0009,

0xf915,	// (0x00056c8c) volume_set_pane_g

0xa6a8,	// (0x00051a1f) indicator_pane_ParamLimits

0xa6a8,	// (0x00051a1f) indicator_pane

0xa6d4,	// (0x00051a4b) main_idle_pane_g2_ParamLimits

0xa6d4,	// (0x00051a4b) main_idle_pane_g2

0xa70c,	// (0x00051a83) main_pane_idle_g1_ParamLimits

0xa70c,	// (0x00051a83) main_pane_idle_g1

0x6fdd,	// (0x0004e354) popup_clock_digital_analogue_window_ParamLimits

0x6fdd,	// (0x0004e354) popup_clock_digital_analogue_window

0xa736,	// (0x00051aad) soft_indicator_pane_ParamLimits

0xa736,	// (0x00051aad) soft_indicator_pane

0xa752,	// (0x00051ac9) wallpaper_pane_ParamLimits

0xa752,	// (0x00051ac9) wallpaper_pane

0x6f60,	// (0x0004e2d7) wallpaper_pane_g1

0xa76c,	// (0x00051ae3) indicator_pane_g1_ParamLimits

0xa76c,	// (0x00051ae3) indicator_pane_g1

0x4d60,	// (0x0004c0d7) navi_navi_icon_text_pane_srt_g1

0xa794,	// (0x00051b0b) soft_indicator_pane_t1

0xa7ae,	// (0x00051b25) aid_ps_area_pane

0xa7bf,	// (0x00051b36) aid_ps_clock_pane

0xa7cd,	// (0x00051b44) aid_ps_indicator_pane

0xa7d9,	// (0x00051b50) indicator_ps_pane_ParamLimits

0xa7d9,	// (0x00051b50) indicator_ps_pane

0xa7e8,	// (0x00051b5f) power_save_pane_g1_ParamLimits

0xa7e8,	// (0x00051b5f) power_save_pane_g1

0xa7f4,	// (0x00051b6b) power_save_pane_g2_ParamLimits

0xa7f4,	// (0x00051b6b) power_save_pane_g2

0xf14a,	// (0x000564c1) aid_navinavi_width_pane

0xa7ae,	// (0x00051b25) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x000568ba) power_save_pane_g_ParamLimits

0xf543,	// (0x000568ba) power_save_pane_g

0xa802,	// (0x00051b79) power_save_pane_t1_ParamLimits

0xa802,	// (0x00051b79) power_save_pane_t1

0xa7bf,	// (0x00051b36) aid_ps_clock_pane_ParamLimits

0xa7cd,	// (0x00051b44) aid_ps_indicator_pane_ParamLimits

0xa814,	// (0x00051b8b) power_save_pane_t4_ParamLimits

0xa814,	// (0x00051b8b) power_save_pane_t4

0x0001,

0xf548,	// (0x000568bf) power_save_pane_t_ParamLimits

0xf548,	// (0x000568bf) power_save_pane_t

0xa83e,	// (0x00051bb5) power_save_t3_ParamLimits

0xa83e,	// (0x00051bb5) power_save_t3

0xa829,	// (0x00051ba0) power_save_t2_ParamLimits

0xa829,	// (0x00051ba0) power_save_t2

0xa853,	// (0x00051bca) indicator_ps_pane_g1

0xa85c,	// (0x00051bd3) ai_gene_pane_ParamLimits

0xa85c,	// (0x00051bd3) ai_gene_pane

0xa873,	// (0x00051bea) ai_links_pane_ParamLimits

0xa873,	// (0x00051bea) ai_links_pane

0xa88b,	// (0x00051c02) indicator_pane_cp1_ParamLimits

0xa88b,	// (0x00051c02) indicator_pane_cp1

0xa89a,	// (0x00051c11) main_pane_idle_g1_cp_ParamLimits

0xa89a,	// (0x00051c11) main_pane_idle_g1_cp

0xa8b2,	// (0x00051c29) popup_ai_links_title_window

0xa8bb,	// (0x00051c32) soft_indicator_pane_cp1_ParamLimits

0xa8bb,	// (0x00051c32) soft_indicator_pane_cp1

0x46f1,	// (0x0004ba68) ai_links_pane_g1

0x46fa,	// (0x0004ba71) grid_ai_links_pane

0xcb1a,	// (0x00053e91) ai_gene_pane_1

0x46df,	// (0x0004ba56) ai_gene_pane_2

0x46e8,	// (0x0004ba5f) list_highlight_pane_cp4

0xcaf6,	// (0x00053e6d) cell_ai_link_pane_ParamLimits

0xcaf6,	// (0x00053e6d) cell_ai_link_pane

0x46ae,	// (0x0004ba25) cell_ai_link_pane_g1

0xab1d,	// (0x00051e94) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x00056c67) cell_ai_link_pane_g

0x6f6a,	// (0x0004e2e1) grid_highlight_cp2

0x6f6a,	// (0x0004e2e1) bg_popup_sub_pane_cp1

0xa8dd,	// (0x00051c54) popup_ai_links_title_window_t1

0x45fa,	// (0x0004b971) ai_gene_pane_1_g1_ParamLimits

0x45fa,	// (0x0004b971) ai_gene_pane_1_g1

0x4606,	// (0x0004b97d) ai_gene_pane_1_g2_ParamLimits

0x4606,	// (0x0004b97d) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x00056c5d) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x00056c5d) ai_gene_pane_1_g

0x4613,	// (0x0004b98a) ai_gene_pane_1_t1_ParamLimits

0x4613,	// (0x0004b98a) ai_gene_pane_1_t1

0x4647,	// (0x0004b9be) grid_ai_soft_ind_pane

0x45e5,	// (0x0004b95c) ai_gene_pane_2_t1_ParamLimits

0x45e5,	// (0x0004b95c) ai_gene_pane_2_t1

0xa8ec,	// (0x00051c63) main_pane_empty_t1_ParamLimits

0xa8ec,	// (0x00051c63) main_pane_empty_t1

0xa904,	// (0x00051c7b) main_pane_empty_t2_ParamLimits

0xa904,	// (0x00051c7b) main_pane_empty_t2

0xa919,	// (0x00051c90) main_pane_empty_t3_ParamLimits

0xa919,	// (0x00051c90) main_pane_empty_t3

0xa92b,	// (0x00051ca2) main_pane_empty_t4_ParamLimits

0xa92b,	// (0x00051ca2) main_pane_empty_t4

0xa93d,	// (0x00051cb4) main_pane_empty_t5_ParamLimits

0xa93d,	// (0x00051cb4) main_pane_empty_t5

0x0004,

0xf54d,	// (0x000568c4) main_pane_empty_t_ParamLimits

0xf54d,	// (0x000568c4) main_pane_empty_t

0xe52f,	// (0x000558a6) bg_popup_window_pane_ParamLimits

0xe52f,	// (0x000558a6) bg_popup_window_pane

0x4347,	// (0x0004b6be) find_popup_pane_cp2_ParamLimits

0x4347,	// (0x0004b6be) find_popup_pane_cp2

0x4353,	// (0x0004b6ca) heading_pane_ParamLimits

0x4353,	// (0x0004b6ca) heading_pane

0x6f6a,	// (0x0004e2e1) bg_popup_sub_pane

0xca25,	// (0x00053d9c) bg_popup_window_pane_g1_ParamLimits

0xca25,	// (0x00053d9c) bg_popup_window_pane_g1

0xca34,	// (0x00053dab) bg_popup_window_pane_g2_ParamLimits

0xca34,	// (0x00053dab) bg_popup_window_pane_g2

0xca40,	// (0x00053db7) bg_popup_window_pane_g3_ParamLimits

0xca40,	// (0x00053db7) bg_popup_window_pane_g3

0xca4c,	// (0x00053dc3) bg_popup_window_pane_g4_ParamLimits

0xca4c,	// (0x00053dc3) bg_popup_window_pane_g4

0xca5b,	// (0x00053dd2) bg_popup_window_pane_g5_ParamLimits

0xca5b,	// (0x00053dd2) bg_popup_window_pane_g5

0xca6b,	// (0x00053de2) bg_popup_window_pane_g6_ParamLimits

0xca6b,	// (0x00053de2) bg_popup_window_pane_g6

0xca77,	// (0x00053dee) bg_popup_window_pane_g7_ParamLimits

0xca77,	// (0x00053dee) bg_popup_window_pane_g7

0xca86,	// (0x00053dfd) bg_popup_window_pane_g8_ParamLimits

0xca86,	// (0x00053dfd) bg_popup_window_pane_g8

0xca95,	// (0x00053e0c) bg_popup_window_pane_g9_ParamLimits

0xca95,	// (0x00053e0c) bg_popup_window_pane_g9

0x432d,	// (0x0004b6a4) bg_popup_window_pane_g10_ParamLimits

0x432d,	// (0x0004b6a4) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x00056c25) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x00056c25) bg_popup_window_pane_g

0x4256,	// (0x0004b5cd) bg_popup_heading_pane_ParamLimits

0x4256,	// (0x0004b5cd) bg_popup_heading_pane

0x1373,	// (0x000486ea) tabs_4_passive_pane_cp_srt_ParamLimits

0x1373,	// (0x000486ea) tabs_4_passive_pane_cp_srt

0x1385,	// (0x000486fc) tabs_4_passive_pane_srt_ParamLimits

0x426a,	// (0x0004b5e1) heading_pane_g2

0x1385,	// (0x000486fc) tabs_4_passive_pane_srt

0x35ed,	// (0x0004a964) bg_passive_tab_pane_cp3_srt_ParamLimits

0x35ed,	// (0x0004a964) bg_passive_tab_pane_cp3_srt

0x4272,	// (0x0004b5e9) heading_pane_t1_ParamLimits

0x4272,	// (0x0004b5e9) heading_pane_t1

0x4289,	// (0x0004b600) heading_pane_t2_ParamLimits

0x4289,	// (0x0004b600) heading_pane_t2

0x0001,

0xf8a9,	// (0x00056c20) heading_pane_t_ParamLimits

0xf8a9,	// (0x00056c20) heading_pane_t

0x3d81,	// (0x0004b0f8) bg_popup_heading_pane_g1

0x3e30,	// (0x0004b1a7) bg_popup_heading_pane_g2

0x3e3a,	// (0x0004b1b1) bg_popup_heading_pane_g3

0x3e44,	// (0x0004b1bb) bg_popup_heading_pane_g4

0x3e4e,	// (0x0004b1c5) bg_popup_heading_pane_g5

0x3e58,	// (0x0004b1cf) bg_popup_heading_pane_g6

0x3e60,	// (0x0004b1d7) bg_popup_heading_pane_g7

0x3e68,	// (0x0004b1df) bg_popup_heading_pane_g8

0x3e72,	// (0x0004b1e9) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x00056bdc) bg_popup_heading_pane_g

0x3579,	// (0x0004a8f0) bg_popup_sub_pane_g1

0x3581,	// (0x0004a8f8) bg_popup_sub_pane_g2

0x3589,	// (0x0004a900) bg_popup_sub_pane_g3

0x3591,	// (0x0004a908) bg_popup_sub_pane_g4

0x3599,	// (0x0004a910) bg_popup_sub_pane_g5

0x35a1,	// (0x0004a918) bg_popup_sub_pane_g6

0x35a9,	// (0x0004a920) bg_popup_sub_pane_g7

0x35b1,	// (0x0004a928) bg_popup_sub_pane_g8

0x35b9,	// (0x0004a930) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x00056bb6) bg_popup_sub_pane_g

0x6ff4,	// (0x0004e36b) bg_popup_window_pane_cp5_ParamLimits

0x6ff4,	// (0x0004e36b) bg_popup_window_pane_cp5

0xa95d,	// (0x00051cd4) popup_note_window_g1_ParamLimits

0xa95d,	// (0x00051cd4) popup_note_window_g1

0xa969,	// (0x00051ce0) popup_note_window_t1_ParamLimits

0xa969,	// (0x00051ce0) popup_note_window_t1

0xa97f,	// (0x00051cf6) popup_note_window_t2_ParamLimits

0xa97f,	// (0x00051cf6) popup_note_window_t2

0xa995,	// (0x00051d0c) popup_note_window_t3_ParamLimits

0xa995,	// (0x00051d0c) popup_note_window_t3

0xa9ab,	// (0x00051d22) popup_note_window_t4_ParamLimits

0xa9ab,	// (0x00051d22) popup_note_window_t4

0xa9d3,	// (0x00051d4a) popup_note_window_t5_ParamLimits

0xa9d3,	// (0x00051d4a) popup_note_window_t5

0x0004,

0xf558,	// (0x000568cf) popup_note_window_t_ParamLimits

0xf558,	// (0x000568cf) popup_note_window_t

0xaa1d,	// (0x00051d94) bg_popup_window_pane_cp6_ParamLimits

0xaa1d,	// (0x00051d94) bg_popup_window_pane_cp6

0x3cfd,	// (0x0004b074) popup_note_image_window_g1_ParamLimits

0x3cfd,	// (0x0004b074) popup_note_image_window_g1

0x3d09,	// (0x0004b080) popup_note_image_window_g2_ParamLimits

0x3d09,	// (0x0004b080) popup_note_image_window_g2

0x0001,

0xf833,	// (0x00056baa) popup_note_image_window_g_ParamLimits

0xf833,	// (0x00056baa) popup_note_image_window_g

0x3d22,	// (0x0004b099) popup_note_image_window_t1_ParamLimits

0x3d22,	// (0x0004b099) popup_note_image_window_t1

0x3d3b,	// (0x0004b0b2) popup_note_image_window_t2_ParamLimits

0x3d3b,	// (0x0004b0b2) popup_note_image_window_t2

0x3d54,	// (0x0004b0cb) popup_note_image_window_t3_ParamLimits

0x3d54,	// (0x0004b0cb) popup_note_image_window_t3

0x0002,

0xf838,	// (0x00056baf) popup_note_image_window_t_ParamLimits

0xf838,	// (0x00056baf) popup_note_image_window_t

0x3bbd,	// (0x0004af34) bg_popup_window_pane_cp7_ParamLimits

0x3bbd,	// (0x0004af34) bg_popup_window_pane_cp7

0x3bed,	// (0x0004af64) popup_note_wait_window_g1_ParamLimits

0x3bed,	// (0x0004af64) popup_note_wait_window_g1

0x3bf9,	// (0x0004af70) popup_note_wait_window_g2_ParamLimits

0x3bf9,	// (0x0004af70) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x00056b98) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x00056b98) popup_note_wait_window_g

0x3c11,	// (0x0004af88) popup_note_wait_window_t1_ParamLimits

0x3c11,	// (0x0004af88) popup_note_wait_window_t1

0x3c38,	// (0x0004afaf) popup_note_wait_window_t2_ParamLimits

0x3c38,	// (0x0004afaf) popup_note_wait_window_t2

0x3c56,	// (0x0004afcd) popup_note_wait_window_t3_ParamLimits

0x3c56,	// (0x0004afcd) popup_note_wait_window_t3

0x3c69,	// (0x0004afe0) popup_note_wait_window_t4_ParamLimits

0x3c69,	// (0x0004afe0) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x00056b9f) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x00056b9f) popup_note_wait_window_t

0x3c8e,	// (0x0004b005) wait_bar_pane_ParamLimits

0x3c8e,	// (0x0004b005) wait_bar_pane

0x6f6a,	// (0x0004e2e1) wait_anim_pane

0x6f6a,	// (0x0004e2e1) wait_border_pane

0x6f60,	// (0x0004e2d7) wait_anim_pane_g1

0x6f60,	// (0x0004e2d7) wait_anim_pane_g2

0x0001,

0xf6e1,	// (0x00056a58) wait_anim_pane_g

0x3b61,	// (0x0004aed8) wait_border_pane_g1

0x3b6c,	// (0x0004aee3) wait_border_pane_g2

0x3b75,	// (0x0004aeec) wait_border_pane_g3

0x0002,

0xf81a,	// (0x00056b91) wait_border_pane_g

0x39cb,	// (0x0004ad42) bg_popup_window_pane_cp16_ParamLimits

0x39cb,	// (0x0004ad42) bg_popup_window_pane_cp16

0x3acb,	// (0x0004ae42) indicator_popup_pane_cp4_ParamLimits

0x3acb,	// (0x0004ae42) indicator_popup_pane_cp4

0x3adf,	// (0x0004ae56) popup_query_data_window_t1_ParamLimits

0x3adf,	// (0x0004ae56) popup_query_data_window_t1

0x3af1,	// (0x0004ae68) popup_query_data_window_t2_ParamLimits

0x3af1,	// (0x0004ae68) popup_query_data_window_t2

0x3b0a,	// (0x0004ae81) popup_query_data_window_t3_ParamLimits

0x3b0a,	// (0x0004ae81) popup_query_data_window_t3

0x0002,

0xf813,	// (0x00056b8a) popup_query_data_window_t_ParamLimits

0xf813,	// (0x00056b8a) popup_query_data_window_t

0x3b24,	// (0x0004ae9b) query_popup_data_pane_ParamLimits

0x3b24,	// (0x0004ae9b) query_popup_data_pane

0x3b38,	// (0x0004aeaf) query_popup_data_pane_cp1_ParamLimits

0x3b38,	// (0x0004aeaf) query_popup_data_pane_cp1

0x39cb,	// (0x0004ad42) bg_popup_window_pane_cp10_ParamLimits

0x39cb,	// (0x0004ad42) bg_popup_window_pane_cp10

0x39fd,	// (0x0004ad74) indicator_popup_pane_ParamLimits

0x39fd,	// (0x0004ad74) indicator_popup_pane

0x3a1f,	// (0x0004ad96) popup_query_code_window_t1_ParamLimits

0x3a1f,	// (0x0004ad96) popup_query_code_window_t1

0x3a39,	// (0x0004adb0) popup_query_code_window_t2_ParamLimits

0x3a39,	// (0x0004adb0) popup_query_code_window_t2

0x3a82,	// (0x0004adf9) popup_query_code_window_t3_ParamLimits

0x3a82,	// (0x0004adf9) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x00056b83) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x00056b83) popup_query_code_window_t

0x3ab1,	// (0x0004ae28) query_popup_pane_ParamLimits

0x3ab1,	// (0x0004ae28) query_popup_pane

0xaa1d,	// (0x00051d94) bg_popup_window_pane_cp15_ParamLimits

0xaa1d,	// (0x00051d94) bg_popup_window_pane_cp15

0xaa3d,	// (0x00051db4) indicator_popup_pane_cp1_ParamLimits

0xaa3d,	// (0x00051db4) indicator_popup_pane_cp1

0xaa50,	// (0x00051dc7) indicator_popup_pane_cp2_ParamLimits

0xaa50,	// (0x00051dc7) indicator_popup_pane_cp2

0xaa6b,	// (0x00051de2) popup_query_data_code_window_g1_ParamLimits

0xaa6b,	// (0x00051de2) popup_query_data_code_window_g1

0xaa7e,	// (0x00051df5) popup_query_data_code_window_t1_ParamLimits

0xaa7e,	// (0x00051df5) popup_query_data_code_window_t1

0xaa90,	// (0x00051e07) popup_query_data_code_window_t2_ParamLimits

0xaa90,	// (0x00051e07) popup_query_data_code_window_t2

0xaaa2,	// (0x00051e19) popup_query_data_code_window_t3_ParamLimits

0xaaa2,	// (0x00051e19) popup_query_data_code_window_t3

0xaab8,	// (0x00051e2f) popup_query_data_code_window_t4_ParamLimits

0xaab8,	// (0x00051e2f) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x000568da) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x000568da) popup_query_data_code_window_t

0x2b35,	// (0x00049eac) list_single_midp_graphic_pane_g3

0xaad2,	// (0x00051e49) query_popup_data_pane_cp2_ParamLimits

0xaae5,	// (0x00051e5c) query_popup_pane_cp2_ParamLimits

0xaae5,	// (0x00051e5c) query_popup_pane_cp2

0x6f6a,	// (0x0004e2e1) bg_popup_window_pane_cp11

0x39af,	// (0x0004ad26) heading_pane_cp5

0x39b7,	// (0x0004ad2e) listscroll_popup_info_pane

0x6f6a,	// (0x0004e2e1) input_focus_pane_cp3

0xab00,	// (0x00051e77) query_popup_pane_t1

0xab0e,	// (0x00051e85) list_popup_info_pane_ParamLimits

0xab0e,	// (0x00051e85) list_popup_info_pane

0xab1d,	// (0x00051e94) listscroll_popup_info_pane_g1

0xab25,	// (0x00051e9c) scroll_pane_cp7

0xab2f,	// (0x00051ea6) popup_info_list_pane_t1_ParamLimits

0xab2f,	// (0x00051ea6) popup_info_list_pane_t1

0xab49,	// (0x00051ec0) popup_info_list_pane_t2_ParamLimits

0xab49,	// (0x00051ec0) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x000568e3) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x000568e3) popup_info_list_pane_t

0x6f6a,	// (0x0004e2e1) bg_popup_window_pane_cp12

0x4d7a,	// (0x0004c0f1) find_popup_pane

0x6fb8,	// (0x0004e32f) bg_popup_window_pane_cp3

0xab63,	// (0x00051eda) heading_pane_cp3

0xab72,	// (0x00051ee9) listscroll_popup_graphic_pane

0x6f6a,	// (0x0004e2e1) bg_popup_window_pane_cp4

0xabd2,	// (0x00051f49) heading_pane_cp4

0xabdc,	// (0x00051f53) listscroll_popup_colour_pane

0xabe4,	// (0x00051f5b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xabe4,	// (0x00051f5b) cell_large_graphic_colour_none_popup_pane

0xabf8,	// (0x00051f6f) grid_large_graphic_colour_popup_pane_ParamLimits

0xabf8,	// (0x00051f6f) grid_large_graphic_colour_popup_pane

0xac20,	// (0x00051f97) listscroll_popup_colour_pane_g1_ParamLimits

0xac20,	// (0x00051f97) listscroll_popup_colour_pane_g1

0xac37,	// (0x00051fae) listscroll_popup_colour_pane_g2_ParamLimits

0xac37,	// (0x00051fae) listscroll_popup_colour_pane_g2

0xac4e,	// (0x00051fc5) listscroll_popup_colour_pane_g3_ParamLimits

0xac4e,	// (0x00051fc5) listscroll_popup_colour_pane_g3

0xac5e,	// (0x00051fd5) listscroll_popup_colour_pane_g4_ParamLimits

0xac5e,	// (0x00051fd5) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x000568e8) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x000568e8) listscroll_popup_colour_pane_g

0xac6e,	// (0x00051fe5) scroll_pane_cp6_ParamLimits

0xac6e,	// (0x00051fe5) scroll_pane_cp6

0xac80,	// (0x00051ff7) cell_large_graphic_colour_popup_pane_ParamLimits

0xac80,	// (0x00051ff7) cell_large_graphic_colour_popup_pane

0xaca1,	// (0x00052018) cell_large_graphic_colour_none_popup_pane_t1

0x6f6a,	// (0x0004e2e1) grid_highlight_pane_cp5

0xacb0,	// (0x00052027) cell_large_graphic_colour_popup_pane_g1

0xacb8,	// (0x0005202f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x000568f1) cell_large_graphic_colour_popup_pane_g

0xacc0,	// (0x00052037) cell_large_graphic_colour_popup_pane_g2_copy1

0xacc9,	// (0x00052040) grid_highlight_pane_cp4

0xacd1,	// (0x00052048) bg_popup_window_pane_cp8_ParamLimits

0xacd1,	// (0x00052048) bg_popup_window_pane_cp8

0xacec,	// (0x00052063) popup_snote_single_text_window_g1_ParamLimits

0xacec,	// (0x00052063) popup_snote_single_text_window_g1

0xacfe,	// (0x00052075) popup_snote_single_text_window_t1_ParamLimits

0xacfe,	// (0x00052075) popup_snote_single_text_window_t1

0xad11,	// (0x00052088) popup_snote_single_text_window_t2_ParamLimits

0xad11,	// (0x00052088) popup_snote_single_text_window_t2

0xad24,	// (0x0005209b) popup_snote_single_text_window_t3_ParamLimits

0xad24,	// (0x0005209b) popup_snote_single_text_window_t3

0xad5d,	// (0x000520d4) popup_snote_single_text_window_t4_ParamLimits

0xad5d,	// (0x000520d4) popup_snote_single_text_window_t4

0xad91,	// (0x00052108) popup_snote_single_text_window_t5_ParamLimits

0xad91,	// (0x00052108) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x000568f6) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x000568f6) popup_snote_single_text_window_t

0xadc0,	// (0x00052137) bg_popup_window_pane_cp9_ParamLimits

0xadc0,	// (0x00052137) bg_popup_window_pane_cp9

0xacec,	// (0x00052063) popup_snote_single_graphic_window_g1_ParamLimits

0xacec,	// (0x00052063) popup_snote_single_graphic_window_g1

0xadce,	// (0x00052145) popup_snote_single_graphic_window_g2_ParamLimits

0xadce,	// (0x00052145) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00056901) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00056901) popup_snote_single_graphic_window_g

0xadda,	// (0x00052151) popup_snote_single_graphic_window_t1_ParamLimits

0xadda,	// (0x00052151) popup_snote_single_graphic_window_t1

0xaded,	// (0x00052164) popup_snote_single_graphic_window_t2_ParamLimits

0xaded,	// (0x00052164) popup_snote_single_graphic_window_t2

0xae00,	// (0x00052177) popup_snote_single_graphic_window_t3_ParamLimits

0xae00,	// (0x00052177) popup_snote_single_graphic_window_t3

0xae39,	// (0x000521b0) popup_snote_single_graphic_window_t4_ParamLimits

0xae39,	// (0x000521b0) popup_snote_single_graphic_window_t4

0xae6d,	// (0x000521e4) popup_snote_single_graphic_window_t5_ParamLimits

0xae6d,	// (0x000521e4) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00056906) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00056906) popup_snote_single_graphic_window_t

0x4cb8,	// (0x0004c02f) grid_graphic_popup_pane_ParamLimits

0x4cb8,	// (0x0004c02f) grid_graphic_popup_pane

0x4ce6,	// (0x0004c05d) listscroll_popup_graphic_pane_g1_ParamLimits

0x4ce6,	// (0x0004c05d) listscroll_popup_graphic_pane_g1

0xce10,	// (0x00054187) listscroll_popup_graphic_pane_g2_ParamLimits

0xce10,	// (0x00054187) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x00056d00) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x00056d00) listscroll_popup_graphic_pane_g

0x4d0e,	// (0x0004c085) scroll_pane_cp5

0xcdc4,	// (0x0005413b) cell_graphic_popup_pane_ParamLimits

0xcdc4,	// (0x0005413b) cell_graphic_popup_pane

0x4c28,	// (0x0004bf9f) cell_graphic_popup_pane_g1

0x4c30,	// (0x0004bfa7) cell_graphic_popup_pane_g2

0xacc0,	// (0x00052037) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x00056cf9) cell_graphic_popup_pane_g

0x4c39,	// (0x0004bfb0) cell_graphic_popup_pane_t2

0xacc9,	// (0x00052040) grid_highlight_pane_cp3

0xaeae,	// (0x00052225) list_gen_pane_ParamLimits

0xaeae,	// (0x00052225) list_gen_pane

0xaee0,	// (0x00052257) scroll_pane

0xcd7b,	// (0x000540f2) bg_list_pane_g1_ParamLimits

0xcd7b,	// (0x000540f2) bg_list_pane_g1

0x4b9d,	// (0x0004bf14) bg_list_pane_g2_ParamLimits

0x4b9d,	// (0x0004bf14) bg_list_pane_g2

0x4bb2,	// (0x0004bf29) bg_list_pane_g3_ParamLimits

0x4bb2,	// (0x0004bf29) bg_list_pane_g3

0x4bc6,	// (0x0004bf3d) bg_list_pane_g4_ParamLimits

0x4bc6,	// (0x0004bf3d) bg_list_pane_g4

0xcd98,	// (0x0005410f) bg_list_pane_g5_ParamLimits

0xcd98,	// (0x0005410f) bg_list_pane_g5

0x0004,

0xf977,	// (0x00056cee) bg_list_pane_g_ParamLimits

0xf977,	// (0x00056cee) bg_list_pane_g

0xc045,	// (0x000533bc) list_double2_graphic_large_graphic_pane_ParamLimits

0xc045,	// (0x000533bc) list_double2_graphic_large_graphic_pane

0xc045,	// (0x000533bc) list_double2_graphic_pane_ParamLimits

0xc045,	// (0x000533bc) list_double2_graphic_pane

0xc045,	// (0x000533bc) list_double2_large_graphic_pane_ParamLimits

0xc045,	// (0x000533bc) list_double2_large_graphic_pane

0xc045,	// (0x000533bc) list_double2_pane_ParamLimits

0xc045,	// (0x000533bc) list_double2_pane

0xc045,	// (0x000533bc) list_double_graphic_heading_pane_ParamLimits

0xc045,	// (0x000533bc) list_double_graphic_heading_pane

0xc045,	// (0x000533bc) list_double_graphic_pane_ParamLimits

0xc045,	// (0x000533bc) list_double_graphic_pane

0xc045,	// (0x000533bc) list_double_heading_pane_ParamLimits

0xc045,	// (0x000533bc) list_double_heading_pane

0xc045,	// (0x000533bc) list_double_large_graphic_pane_ParamLimits

0xc045,	// (0x000533bc) list_double_large_graphic_pane

0xc045,	// (0x000533bc) list_double_number_pane_ParamLimits

0xc045,	// (0x000533bc) list_double_number_pane

0xc045,	// (0x000533bc) list_double_pane_ParamLimits

0xc045,	// (0x000533bc) list_double_pane

0xc045,	// (0x000533bc) list_double_time_pane_ParamLimits

0xc045,	// (0x000533bc) list_double_time_pane

0xc045,	// (0x000533bc) list_setting_number_pane_ParamLimits

0xc045,	// (0x000533bc) list_setting_number_pane

0xc045,	// (0x000533bc) list_setting_pane_ParamLimits

0xc045,	// (0x000533bc) list_setting_pane

0xcd3e,	// (0x000540b5) list_single_2graphic_pane_ParamLimits

0xcd3e,	// (0x000540b5) list_single_2graphic_pane

0xcd3e,	// (0x000540b5) list_single_graphic_heading_pane_ParamLimits

0xcd3e,	// (0x000540b5) list_single_graphic_heading_pane

0xcd3e,	// (0x000540b5) list_single_graphic_pane_ParamLimits

0xcd3e,	// (0x000540b5) list_single_graphic_pane

0xcd3e,	// (0x000540b5) list_single_heading_pane_ParamLimits

0xcd3e,	// (0x000540b5) list_single_heading_pane

0xcd3e,	// (0x000540b5) list_single_large_graphic_pane_ParamLimits

0xcd3e,	// (0x000540b5) list_single_large_graphic_pane

0xcd3e,	// (0x000540b5) list_single_number_heading_pane_ParamLimits

0xcd3e,	// (0x000540b5) list_single_number_heading_pane

0xcd3e,	// (0x000540b5) list_single_number_pane_ParamLimits

0xcd3e,	// (0x000540b5) list_single_number_pane

0xcd3e,	// (0x000540b5) list_single_pane_ParamLimits

0xcd3e,	// (0x000540b5) list_single_pane

0x6f6a,	// (0x0004e2e1) list_highlight_pane_cp1

0x0f77,	// (0x000482ee) list_single_pane_g1_ParamLimits

0x0f77,	// (0x000482ee) list_single_pane_g1

0x0f83,	// (0x000482fa) list_single_pane_g2_ParamLimits

0x0f83,	// (0x000482fa) list_single_pane_g2

0x0001,

0xf5ab,	// (0x00056922) list_single_pane_g_ParamLimits

0xf5ab,	// (0x00056922) list_single_pane_g

0xee66,	// (0x000561dd) list_single_pane_t1_ParamLimits

0xee66,	// (0x000561dd) list_single_pane_t1

0x0f77,	// (0x000482ee) list_single_number_pane_g1_ParamLimits

0x0f77,	// (0x000482ee) list_single_number_pane_g1

0x0f83,	// (0x000482fa) list_single_number_pane_g2_ParamLimits

0x0f83,	// (0x000482fa) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x00056922) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x00056922) list_single_number_pane_g

0xed97,	// (0x0005610e) list_single_number_pane_t1_ParamLimits

0xed97,	// (0x0005610e) list_single_number_pane_t1

0xee54,	// (0x000561cb) list_single_number_pane_t2_ParamLimits

0xee54,	// (0x000561cb) list_single_number_pane_t2

0x0001,

0xf938,	// (0x00056caf) list_single_number_pane_t_ParamLimits

0xf938,	// (0x00056caf) list_single_number_pane_t

0x9bb1,	// (0x00050f28) list_single_graphic_pane_g1_ParamLimits

0x9bb1,	// (0x00050f28) list_single_graphic_pane_g1

0x0f77,	// (0x000482ee) list_single_graphic_pane_g2_ParamLimits

0x0f77,	// (0x000482ee) list_single_graphic_pane_g2

0x0f83,	// (0x000482fa) list_single_graphic_pane_g3_ParamLimits

0x0f83,	// (0x000482fa) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00056911) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00056911) list_single_graphic_pane_g

0x9bbd,	// (0x00050f34) list_single_graphic_pane_t1_ParamLimits

0x9bbd,	// (0x00050f34) list_single_graphic_pane_t1

0x9bd3,	// (0x00050f4a) list_single_heading_pane_g1_ParamLimits

0x9bd3,	// (0x00050f4a) list_single_heading_pane_g1

0x0f83,	// (0x000482fa) list_single_heading_pane_g2_ParamLimits

0x0f83,	// (0x000482fa) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00056918) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00056918) list_single_heading_pane_g

0x9be6,	// (0x00050f5d) list_single_heading_pane_t1_ParamLimits

0x9be6,	// (0x00050f5d) list_single_heading_pane_t1

0xaf14,	// (0x0005228b) list_single_heading_pane_t2_ParamLimits

0xaf14,	// (0x0005228b) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0005691d) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0005691d) list_single_heading_pane_t

0x0f77,	// (0x000482ee) list_single_number_heading_pane_g1_ParamLimits

0x0f77,	// (0x000482ee) list_single_number_heading_pane_g1

0x0f83,	// (0x000482fa) list_single_number_heading_pane_g2_ParamLimits

0x0f83,	// (0x000482fa) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x00056922) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x00056922) list_single_number_heading_pane_g

0xec19,	// (0x00055f90) list_single_number_heading_pane_t1_ParamLimits

0xec19,	// (0x00055f90) list_single_number_heading_pane_t1

0x9bfc,	// (0x00050f73) list_single_number_heading_pane_t2_ParamLimits

0x9bfc,	// (0x00050f73) list_single_number_heading_pane_t2

0xec2f,	// (0x00055fa6) list_single_number_heading_pane_t3_ParamLimits

0xec2f,	// (0x00055fa6) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x00056927) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x00056927) list_single_number_heading_pane_t

0xec41,	// (0x00055fb8) list_single_graphic_heading_pane_g1_ParamLimits

0xec41,	// (0x00055fb8) list_single_graphic_heading_pane_g1

0xaf26,	// (0x0005229d) list_single_graphic_heading_pane_g4_ParamLimits

0xaf26,	// (0x0005229d) list_single_graphic_heading_pane_g4

0x0f83,	// (0x000482fa) list_single_graphic_heading_pane_g5_ParamLimits

0x0f83,	// (0x000482fa) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x0005692e) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x0005692e) list_single_graphic_heading_pane_g

0xec19,	// (0x00055f90) list_single_graphic_heading_pane_t1_ParamLimits

0xec19,	// (0x00055f90) list_single_graphic_heading_pane_t1

0x9c0e,	// (0x00050f85) list_single_graphic_heading_pane_t2_ParamLimits

0x9c0e,	// (0x00050f85) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x00056935) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x00056935) list_single_graphic_heading_pane_t

0x1418,	// (0x0004878f) list_single_large_graphic_pane_g1_ParamLimits

0x1418,	// (0x0004878f) list_single_large_graphic_pane_g1

0x0f77,	// (0x000482ee) list_single_large_graphic_pane_g2_ParamLimits

0x0f77,	// (0x000482ee) list_single_large_graphic_pane_g2

0x0f83,	// (0x000482fa) list_single_large_graphic_pane_g3_ParamLimits

0x0f83,	// (0x000482fa) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x0005693a) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x0005693a) list_single_large_graphic_pane_g

0x3b6c,	// (0x0004aee3) wait_border_pane_g2_copy1

0xaf37,	// (0x000522ae) list_single_large_graphic_pane_g4_cp2

0xec4d,	// (0x00055fc4) list_single_large_graphic_pane_t1_ParamLimits

0xec4d,	// (0x00055fc4) list_single_large_graphic_pane_t1

0xaf3f,	// (0x000522b6) list_double_pane_g1_ParamLimits

0xaf3f,	// (0x000522b6) list_double_pane_g1

0xaf4b,	// (0x000522c2) list_double_pane_g2_ParamLimits

0xaf4b,	// (0x000522c2) list_double_pane_g2

0x0001,

0xf5ca,	// (0x00056941) list_double_pane_g_ParamLimits

0xf5ca,	// (0x00056941) list_double_pane_g

0x9c20,	// (0x00050f97) list_double_pane_t1_ParamLimits

0x9c20,	// (0x00050f97) list_double_pane_t1

0x9c36,	// (0x00050fad) list_double_pane_t2_ParamLimits

0x9c36,	// (0x00050fad) list_double_pane_t2

0x0001,

0xf5cf,	// (0x00056946) list_double_pane_t_ParamLimits

0xf5cf,	// (0x00056946) list_double_pane_t

0x9c48,	// (0x00050fbf) list_double2_pane_g1_ParamLimits

0x9c48,	// (0x00050fbf) list_double2_pane_g1

0x9c59,	// (0x00050fd0) list_double2_pane_g2_ParamLimits

0x9c59,	// (0x00050fd0) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x0005694b) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x0005694b) list_double2_pane_g

0x9c65,	// (0x00050fdc) list_double2_pane_t1_ParamLimits

0x9c65,	// (0x00050fdc) list_double2_pane_t1

0x9c7b,	// (0x00050ff2) list_double2_pane_t2_ParamLimits

0x9c7b,	// (0x00050ff2) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x00056950) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x00056950) list_double2_pane_t

0xaf3f,	// (0x000522b6) list_double_number_pane_g1_ParamLimits

0xaf3f,	// (0x000522b6) list_double_number_pane_g1

0xaf4b,	// (0x000522c2) list_double_number_pane_g2_ParamLimits

0xaf4b,	// (0x000522c2) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x00056941) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x00056941) list_double_number_pane_g

0x9c8d,	// (0x00051004) list_double_number_pane_t1_ParamLimits

0x9c8d,	// (0x00051004) list_double_number_pane_t1

0x9c9f,	// (0x00051016) list_double_number_pane_t2_ParamLimits

0x9c9f,	// (0x00051016) list_double_number_pane_t2

0x9cb5,	// (0x0005102c) list_double_number_pane_t3_ParamLimits

0x9cb5,	// (0x0005102c) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x00056955) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x00056955) list_double_number_pane_t

0x9cc7,	// (0x0005103e) list_double_graphic_pane_g1_ParamLimits

0x9cc7,	// (0x0005103e) list_double_graphic_pane_g1

0x9cd3,	// (0x0005104a) list_double_graphic_pane_g2_ParamLimits

0x9cd3,	// (0x0005104a) list_double_graphic_pane_g2

0x9ce2,	// (0x00051059) list_double_graphic_pane_g3_ParamLimits

0x9ce2,	// (0x00051059) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x0005695c) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0005695c) list_double_graphic_pane_g

0x9cfa,	// (0x00051071) list_double_graphic_pane_t1_ParamLimits

0x9cfa,	// (0x00051071) list_double_graphic_pane_t1

0x9d10,	// (0x00051087) list_double_graphic_pane_t2_ParamLimits

0x9d10,	// (0x00051087) list_double_graphic_pane_t2

0x0001,

0xf5ee,	// (0x00056965) list_double_graphic_pane_t_ParamLimits

0xf5ee,	// (0x00056965) list_double_graphic_pane_t

0x9d22,	// (0x00051099) list_double2_graphic_pane_g1_ParamLimits

0x9d22,	// (0x00051099) list_double2_graphic_pane_g1

0x61e1,	// (0x0004d558) list_double2_graphic_pane_g2_ParamLimits

0x61e1,	// (0x0004d558) list_double2_graphic_pane_g2

0x9d2e,	// (0x000510a5) list_double2_graphic_pane_g3_ParamLimits

0x9d2e,	// (0x000510a5) list_double2_graphic_pane_g3

0x0002,

0xf5f3,	// (0x0005696a) list_double2_graphic_pane_g_ParamLimits

0xf5f3,	// (0x0005696a) list_double2_graphic_pane_g

0x9d3a,	// (0x000510b1) list_double2_graphic_pane_t1_ParamLimits

0x9d3a,	// (0x000510b1) list_double2_graphic_pane_t1

0x9d50,	// (0x000510c7) list_double2_graphic_pane_t2_ParamLimits

0x9d50,	// (0x000510c7) list_double2_graphic_pane_t2

0x0001,

0xf5fa,	// (0x00056971) list_double2_graphic_pane_t_ParamLimits

0xf5fa,	// (0x00056971) list_double2_graphic_pane_t

0x9d62,	// (0x000510d9) list_double_large_graphic_pane_g1_ParamLimits

0x9d62,	// (0x000510d9) list_double_large_graphic_pane_g1

0x9d81,	// (0x000510f8) list_double_large_graphic_pane_g2_ParamLimits

0x9d81,	// (0x000510f8) list_double_large_graphic_pane_g2

0xaf4b,	// (0x000522c2) list_double_large_graphic_pane_g3_ParamLimits

0xaf4b,	// (0x000522c2) list_double_large_graphic_pane_g3

0x9d97,	// (0x0005110e) list_double_large_graphic_pane_g4_ParamLimits

0x9d97,	// (0x0005110e) list_double_large_graphic_pane_g4

0x0004,

0xf5ff,	// (0x00056976) list_double_large_graphic_pane_g_ParamLimits

0xf5ff,	// (0x00056976) list_double_large_graphic_pane_g

0x9daa,	// (0x00051121) list_double_large_graphic_pane_t1_ParamLimits

0x9daa,	// (0x00051121) list_double_large_graphic_pane_t1

0x9dc3,	// (0x0005113a) list_double_large_graphic_pane_t2_ParamLimits

0x9dc3,	// (0x0005113a) list_double_large_graphic_pane_t2

0x0001,

0xf60a,	// (0x00056981) list_double_large_graphic_pane_t_ParamLimits

0xf60a,	// (0x00056981) list_double_large_graphic_pane_t

0xaf57,	// (0x000522ce) list_double2_large_graphic_pane_g1_ParamLimits

0xaf57,	// (0x000522ce) list_double2_large_graphic_pane_g1

0x9dd5,	// (0x0005114c) list_double2_large_graphic_pane_g2_ParamLimits

0x9dd5,	// (0x0005114c) list_double2_large_graphic_pane_g2

0x9d2e,	// (0x000510a5) list_double2_large_graphic_pane_g3_ParamLimits

0x9d2e,	// (0x000510a5) list_double2_large_graphic_pane_g3

0x0002,

0xf60f,	// (0x00056986) list_double2_large_graphic_pane_g_ParamLimits

0xf60f,	// (0x00056986) list_double2_large_graphic_pane_g

0x9de6,	// (0x0005115d) list_double2_large_graphic_pane_t1_ParamLimits

0x9de6,	// (0x0005115d) list_double2_large_graphic_pane_t1

0x9dfc,	// (0x00051173) list_double2_large_graphic_pane_t2_ParamLimits

0x9dfc,	// (0x00051173) list_double2_large_graphic_pane_t2

0x0001,

0xf616,	// (0x0005698d) list_double2_large_graphic_pane_t_ParamLimits

0xf616,	// (0x0005698d) list_double2_large_graphic_pane_t

0x9e0e,	// (0x00051185) list_double_heading_pane_g1_ParamLimits

0x9e0e,	// (0x00051185) list_double_heading_pane_g1

0x9e1f,	// (0x00051196) list_double_heading_pane_g2_ParamLimits

0x9e1f,	// (0x00051196) list_double_heading_pane_g2

0x0001,

0xf61b,	// (0x00056992) list_double_heading_pane_g_ParamLimits

0xf61b,	// (0x00056992) list_double_heading_pane_g

0x9e2b,	// (0x000511a2) list_double_heading_pane_t1_ParamLimits

0x9e2b,	// (0x000511a2) list_double_heading_pane_t1

0x9e41,	// (0x000511b8) list_double_heading_pane_t2_ParamLimits

0x9e41,	// (0x000511b8) list_double_heading_pane_t2

0x0001,

0xf620,	// (0x00056997) list_double_heading_pane_t_ParamLimits

0xf620,	// (0x00056997) list_double_heading_pane_t

0x9e53,	// (0x000511ca) list_double_graphic_heading_pane_g1_ParamLimits

0x9e53,	// (0x000511ca) list_double_graphic_heading_pane_g1

0x9e0e,	// (0x00051185) list_double_graphic_heading_pane_g2_ParamLimits

0x9e0e,	// (0x00051185) list_double_graphic_heading_pane_g2

0x9e1f,	// (0x00051196) list_double_graphic_heading_pane_g3_ParamLimits

0x9e1f,	// (0x00051196) list_double_graphic_heading_pane_g3

0x0002,

0xf625,	// (0x0005699c) list_double_graphic_heading_pane_g_ParamLimits

0xf625,	// (0x0005699c) list_double_graphic_heading_pane_g

0x9e5f,	// (0x000511d6) list_double_graphic_heading_pane_t1_ParamLimits

0x9e5f,	// (0x000511d6) list_double_graphic_heading_pane_t1

0x9e75,	// (0x000511ec) list_double_graphic_heading_pane_t2_ParamLimits

0x9e75,	// (0x000511ec) list_double_graphic_heading_pane_t2

0x0001,

0xf62c,	// (0x000569a3) list_double_graphic_heading_pane_t_ParamLimits

0xf62c,	// (0x000569a3) list_double_graphic_heading_pane_t

0x9e87,	// (0x000511fe) list_double_time_pane_g1_ParamLimits

0x9e87,	// (0x000511fe) list_double_time_pane_g1

0x9e98,	// (0x0005120f) list_double_time_pane_g2_ParamLimits

0x9e98,	// (0x0005120f) list_double_time_pane_g2

0x0001,

0xf631,	// (0x000569a8) list_double_time_pane_g_ParamLimits

0xf631,	// (0x000569a8) list_double_time_pane_g

0x9ea4,	// (0x0005121b) list_double_time_pane_t1_ParamLimits

0x9ea4,	// (0x0005121b) list_double_time_pane_t1

0x9eba,	// (0x00051231) list_double_time_pane_t2_ParamLimits

0x9eba,	// (0x00051231) list_double_time_pane_t2

0x9ecc,	// (0x00051243) list_double_time_pane_t3_ParamLimits

0x9ecc,	// (0x00051243) list_double_time_pane_t3

0x9ede,	// (0x00051255) list_double_time_pane_t4_ParamLimits

0x9ede,	// (0x00051255) list_double_time_pane_t4

0x0003,

0xf636,	// (0x000569ad) list_double_time_pane_t_ParamLimits

0xf636,	// (0x000569ad) list_double_time_pane_t

0x9ef0,	// (0x00051267) list_setting_pane_g1_ParamLimits

0x9ef0,	// (0x00051267) list_setting_pane_g1

0x9efc,	// (0x00051273) list_setting_pane_g2_ParamLimits

0x9efc,	// (0x00051273) list_setting_pane_g2

0x0001,

0xf63f,	// (0x000569b6) list_setting_pane_g_ParamLimits

0xf63f,	// (0x000569b6) list_setting_pane_g

0x9f08,	// (0x0005127f) list_setting_pane_t1_ParamLimits

0x9f08,	// (0x0005127f) list_setting_pane_t1

0x9f22,	// (0x00051299) list_setting_pane_t2_ParamLimits

0x9f22,	// (0x00051299) list_setting_pane_t2

0x0002,

0xf644,	// (0x000569bb) list_setting_pane_t_ParamLimits

0xf644,	// (0x000569bb) list_setting_pane_t

0x9f61,	// (0x000512d8) set_value_pane_cp_ParamLimits

0x9f61,	// (0x000512d8) set_value_pane_cp

0x9f6f,	// (0x000512e6) list_setting_number_pane_g1_ParamLimits

0x9f6f,	// (0x000512e6) list_setting_number_pane_g1

0x9f7b,	// (0x000512f2) list_setting_number_pane_g2_ParamLimits

0x9f7b,	// (0x000512f2) list_setting_number_pane_g2

0x0001,

0xf64b,	// (0x000569c2) list_setting_number_pane_g_ParamLimits

0xf64b,	// (0x000569c2) list_setting_number_pane_g

0x9f87,	// (0x000512fe) list_setting_number_pane_t1_ParamLimits

0x9f87,	// (0x000512fe) list_setting_number_pane_t1

0x9fa0,	// (0x00051317) list_setting_number_pane_t2_ParamLimits

0x9fa0,	// (0x00051317) list_setting_number_pane_t2

0x9fba,	// (0x00051331) list_setting_number_pane_t3_ParamLimits

0x9fba,	// (0x00051331) list_setting_number_pane_t3

0x0003,

0xf650,	// (0x000569c7) list_setting_number_pane_t_ParamLimits

0xf650,	// (0x000569c7) list_setting_number_pane_t

0x9f61,	// (0x000512d8) set_value_pane_ParamLimits

0x9f61,	// (0x000512d8) set_value_pane

0xaf63,	// (0x000522da) bg_set_opt_pane_ParamLimits

0xaf63,	// (0x000522da) bg_set_opt_pane

0xe496,	// (0x0005580d) set_value_pane_t1

0xaf84,	// (0x000522fb) slider_set_pane_cp3

0xaf8d,	// (0x00052304) volume_small_pane_cp

0xaf96,	// (0x0005230d) list_form_gen_pane

0xaf9f,	// (0x00052316) scroll_pane_cp8

0x9ffd,	// (0x00051374) form_field_data_pane_ParamLimits

0x9ffd,	// (0x00051374) form_field_data_pane

0xa01a,	// (0x00051391) form_field_data_wide_pane_ParamLimits

0xa01a,	// (0x00051391) form_field_data_wide_pane

0xa03e,	// (0x000513b5) form_field_popup_pane_ParamLimits

0xa03e,	// (0x000513b5) form_field_popup_pane

0xe4b4,	// (0x0005582b) form_field_popup_wide_pane_ParamLimits

0xe4b4,	// (0x0005582b) form_field_popup_wide_pane

0xe4d5,	// (0x0005584c) form_field_slider_pane_ParamLimits

0xe4d5,	// (0x0005584c) form_field_slider_pane

0xec63,	// (0x00055fda) form_field_slider_wide_pane_ParamLimits

0xec63,	// (0x00055fda) form_field_slider_wide_pane

0xafb0,	// (0x00052327) data_form_pane

0xa06a,	// (0x000513e1) form_field_data_pane_t1

0xafbc,	// (0x00052333) input_focus_pane

0xec76,	// (0x00055fed) data_form_wide_pane

0xec93,	// (0x0005600a) form_field_data_wide_pane_t1

0xacde,	// (0x00052055) input_focus_pane_cp6

0xa084,	// (0x000513fb) form_field_popup_pane_t1

0xafbc,	// (0x00052333) input_focus_pane_cp7

0xafea,	// (0x00052361) list_form_pane

0xecbd,	// (0x00056034) form_field_popup_wide_pane_t1

0xafbc,	// (0x00052333) input_focus_pane_cp8

0xaff6,	// (0x0005236d) list_form_wide_pane

0xa0a6,	// (0x0005141d) form_field_slider_pane_t1_ParamLimits

0xa0a6,	// (0x0005141d) form_field_slider_pane_t1

0xa0be,	// (0x00051435) form_field_slider_pane_t2_ParamLimits

0xa0be,	// (0x00051435) form_field_slider_pane_t2

0x0001,

0xf660,	// (0x000569d7) form_field_slider_pane_t_ParamLimits

0xf660,	// (0x000569d7) form_field_slider_pane_t

0x6ff4,	// (0x0004e36b) input_focus_pane_cp9_ParamLimits

0x6ff4,	// (0x0004e36b) input_focus_pane_cp9

0xa0d3,	// (0x0005144a) slider_cont_pane_ParamLimits

0xa0d3,	// (0x0005144a) slider_cont_pane

0xb002,	// (0x00052379) form_field_slider_wide_pane_t1_ParamLimits

0xb002,	// (0x00052379) form_field_slider_wide_pane_t1

0xecd2,	// (0x00056049) form_field_slider_wide_pane_t2_ParamLimits

0xecd2,	// (0x00056049) form_field_slider_wide_pane_t2

0x0001,

0xf665,	// (0x000569dc) form_field_slider_wide_pane_t_ParamLimits

0xf665,	// (0x000569dc) form_field_slider_wide_pane_t

0x6ff4,	// (0x0004e36b) input_focus_pane_cp10_ParamLimits

0x6ff4,	// (0x0004e36b) input_focus_pane_cp10

0xa0e7,	// (0x0005145e) slider_cont_pane_cp1_ParamLimits

0xa0e7,	// (0x0005145e) slider_cont_pane_cp1

0xa0fb,	// (0x00051472) slider_form_pane_cp

0xb014,	// (0x0005238b) input_focus_pane_g1

0xb01c,	// (0x00052393) input_focus_pane_g2

0xb024,	// (0x0005239b) input_focus_pane_g3

0xb02c,	// (0x000523a3) input_focus_pane_g4

0xb034,	// (0x000523ab) input_focus_pane_g5

0xb03c,	// (0x000523b3) input_focus_pane_g6

0xb044,	// (0x000523bb) input_focus_pane_g7

0xb04c,	// (0x000523c3) input_focus_pane_g8

0xb054,	// (0x000523cb) input_focus_pane_g9

0x6f60,	// (0x0004e2d7) input_focus_pane_g10

0x0009,

0xf66a,	// (0x000569e1) input_focus_pane_g

0x3b75,	// (0x0004aeec) wait_border_pane_g3_copy1

0xa103,	// (0x0005147a) data_form_pane_t1

0x6f60,	// (0x0004e2d7) wait_anim_pane_g1_copy1

0xa1f7,	// (0x0005156e) data_form_wide_pane_t1

0xece4,	// (0x0005605b) list_form_graphic_pane_cp_ParamLimits

0xece4,	// (0x0005605b) list_form_graphic_pane_cp

0x4abc,	// (0x0004be33) slider_form_pane_g1

0x4ac5,	// (0x0004be3c) slider_form_pane_g2

0x0006,

0xf968,	// (0x00056cdf) slider_form_pane_g

0xa11f,	// (0x00051496) list_form_graphic_pane_ParamLimits

0xa11f,	// (0x00051496) list_form_graphic_pane

0xecf6,	// (0x0005606d) list_form_graphic_pane_g1

0xecfe,	// (0x00056075) list_form_graphic_pane_t1_ParamLimits

0xecfe,	// (0x00056075) list_form_graphic_pane_t1

0x6fb8,	// (0x0004e32f) list_highlight_pane_cp5_ParamLimits

0x6fb8,	// (0x0004e32f) list_highlight_pane_cp5

0xa130,	// (0x000514a7) find_pane_g1

0xe4e8,	// (0x0005585f) input_find_pane

0xa139,	// (0x000514b0) input_find_pane_g1_ParamLimits

0xa139,	// (0x000514b0) input_find_pane_g1

0xa145,	// (0x000514bc) input_find_pane_t1_ParamLimits

0xa145,	// (0x000514bc) input_find_pane_t1

0xa15a,	// (0x000514d1) input_find_pane_t2_ParamLimits

0xa15a,	// (0x000514d1) input_find_pane_t2

0x0001,

0xf67f,	// (0x000569f6) input_find_pane_t_ParamLimits

0xf67f,	// (0x000569f6) input_find_pane_t

0xe4f1,	// (0x00055868) input_focus_pane_cp5_ParamLimits

0xe4f1,	// (0x00055868) input_focus_pane_cp5

0xe504,	// (0x0005587b) bg_popup_window_pane_cp2_ParamLimits

0xe504,	// (0x0005587b) bg_popup_window_pane_cp2

0xe511,	// (0x00055888) listscroll_menu_pane_ParamLimits

0xe511,	// (0x00055888) listscroll_menu_pane

0xb068,	// (0x000523df) popup_submenu_window_ParamLimits

0xb068,	// (0x000523df) popup_submenu_window

0xe51d,	// (0x00055894) find_popup_pane_g1

0xe525,	// (0x0005589c) input_popup_find_pane_cp

0xe52f,	// (0x000558a6) input_focus_pane_cp4_ParamLimits

0xe52f,	// (0x000558a6) input_focus_pane_cp4

0xe53d,	// (0x000558b4) input_popup_find_pane_t1_ParamLimits

0xe53d,	// (0x000558b4) input_popup_find_pane_t1

0x6f6a,	// (0x0004e2e1) bg_popup_sub_pane_cp

0xe56b,	// (0x000558e2) listscroll_popup_sub_pane

0xe573,	// (0x000558ea) list_submenu_pane_ParamLimits

0xe573,	// (0x000558ea) list_submenu_pane

0xe584,	// (0x000558fb) scroll_pane_cp4

0xe58c,	// (0x00055903) list_single_popup_submenu_pane_ParamLimits

0xe58c,	// (0x00055903) list_single_popup_submenu_pane

0xe5a1,	// (0x00055918) list_single_popup_submenu_pane_g1

0xe5a9,	// (0x00055920) list_single_popup_submenu_pane_t1_ParamLimits

0xe5a9,	// (0x00055920) list_single_popup_submenu_pane_t1

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp1_ParamLimits

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp1

0xb0a6,	// (0x0005241d) tabs_2_active_pane_g1

0xb0ae,	// (0x00052425) tabs_2_active_pane_t1

0x6ff4,	// (0x0004e36b) bg_passive_tab_pane_cp1_ParamLimits

0x6ff4,	// (0x0004e36b) bg_passive_tab_pane_cp1

0xb0a6,	// (0x0005241d) tabs_2_passive_pane_g1

0xb0ae,	// (0x00052425) tabs_2_passive_pane_t1

0x6fb8,	// (0x0004e32f) bg_active_tab_pane_cp4

0xb0c0,	// (0x00052437) tabs_2_long_active_pane_t1

0x3049,	// (0x0004a3c0) bg_passive_tab_pane_cp4

0x0fb4,	// (0x0004832b) list_single_midp_graphic_pane_g4_ParamLimits

0x6fb8,	// (0x0004e32f) bg_active_tab_pane_cp5

0xb0d3,	// (0x0005244a) tabs_3_long_active_pane_t1

0x3049,	// (0x0004a3c0) bg_passive_tab_pane_cp5

0x0fb4,	// (0x0004832b) list_single_midp_graphic_pane_g4

0x6fb8,	// (0x0004e32f) bg_popup_window_pane_cp13_ParamLimits

0x6fb8,	// (0x0004e32f) bg_popup_window_pane_cp13

0xe5c7,	// (0x0005593e) listscroll_popup_fast_pane_ParamLimits

0xe5c7,	// (0x0005593e) listscroll_popup_fast_pane

0xe5d6,	// (0x0005594d) grid_popup_fast_pane_ParamLimits

0xe5d6,	// (0x0005594d) grid_popup_fast_pane

0xe5e8,	// (0x0005595f) scroll_pane_cp9_ParamLimits

0xe5e8,	// (0x0005595f) scroll_pane_cp9

0x642d,	// (0x0004d7a4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x642d,	// (0x0004d7a4) list_single_graphic_hl_pane_t1_cp2

0xe60c,	// (0x00055983) input_focus_pane_cp20_ParamLimits

0xe60c,	// (0x00055983) input_focus_pane_cp20

0xe61a,	// (0x00055991) query_popup_data_pane_t1_ParamLimits

0xe61a,	// (0x00055991) query_popup_data_pane_t1

0xe62d,	// (0x000559a4) query_popup_data_pane_t2_ParamLimits

0xe62d,	// (0x000559a4) query_popup_data_pane_t2

0xe673,	// (0x000559ea) query_popup_data_pane_t3_ParamLimits

0xe673,	// (0x000559ea) query_popup_data_pane_t3

0xe6b4,	// (0x00055a2b) query_popup_data_pane_t4_ParamLimits

0xe6b4,	// (0x00055a2b) query_popup_data_pane_t4

0xe6f0,	// (0x00055a67) query_popup_data_pane_t5_ParamLimits

0xe6f0,	// (0x00055a67) query_popup_data_pane_t5

0x0004,

0xf684,	// (0x000569fb) query_popup_data_pane_t_ParamLimits

0xf684,	// (0x000569fb) query_popup_data_pane_t

0xb014,	// (0x0005238b) bg_set_opt_pane_g1

0xb01c,	// (0x00052393) bg_set_opt_pane_g2

0xb024,	// (0x0005239b) bg_set_opt_pane_g3

0xb02c,	// (0x000523a3) bg_set_opt_pane_g4

0xb034,	// (0x000523ab) bg_set_opt_pane_g5

0xb03c,	// (0x000523b3) bg_set_opt_pane_g6

0xb044,	// (0x000523bb) bg_set_opt_pane_g7

0xb04c,	// (0x000523c3) bg_set_opt_pane_g8

0xb054,	// (0x000523cb) bg_set_opt_pane_g9

0x0008,

0xf68f,	// (0x00056a06) bg_set_opt_pane_g

0x05e1,	// (0x00047958) control_top_pane_stacon_ParamLimits

0x05e1,	// (0x00047958) control_top_pane_stacon

0x0634,	// (0x000479ab) signal_pane_stacon_ParamLimits

0x0634,	// (0x000479ab) signal_pane_stacon

0x29ab,	// (0x00049d22) stacon_top_pane_g1_ParamLimits

0x29ab,	// (0x00049d22) stacon_top_pane_g1

0x0659,	// (0x000479d0) title_pane_stacon_ParamLimits

0x0659,	// (0x000479d0) title_pane_stacon

0x0683,	// (0x000479fa) uni_indicator_pane_stacon_ParamLimits

0x0683,	// (0x000479fa) uni_indicator_pane_stacon

0x0698,	// (0x00047a0f) battery_pane_stacon_ParamLimits

0x0698,	// (0x00047a0f) battery_pane_stacon

0x06dc,	// (0x00047a53) control_bottom_pane_stacon_ParamLimits

0x06dc,	// (0x00047a53) control_bottom_pane_stacon

0x06ff,	// (0x00047a76) navi_pane_stacon_ParamLimits

0x06ff,	// (0x00047a76) navi_pane_stacon

0x29cd,	// (0x00049d44) stacon_bottom_pane_g1_ParamLimits

0x29cd,	// (0x00049d44) stacon_bottom_pane_g1

0x021e,	// (0x00047595) aid_levels_signal_lsc_ParamLimits

0x021e,	// (0x00047595) aid_levels_signal_lsc

0x0235,	// (0x000475ac) signal_pane_stacon_g1_ParamLimits

0x0235,	// (0x000475ac) signal_pane_stacon_g1

0x0249,	// (0x000475c0) signal_pane_stacon_g2_ParamLimits

0x0249,	// (0x000475c0) signal_pane_stacon_g2

0x0001,

0xf6a2,	// (0x00056a19) signal_pane_stacon_g_ParamLimits

0xf6a2,	// (0x00056a19) signal_pane_stacon_g

0x027e,	// (0x000475f5) title_pane_stacon_t1_ParamLimits

0x027e,	// (0x000475f5) title_pane_stacon_t1

0xe734,	// (0x00055aab) uni_indicator_pane_stacon_g1

0xe73e,	// (0x00055ab5) uni_indicator_pane_stacon_g2

0xe748,	// (0x00055abf) uni_indicator_pane_stacon_g3

0xe752,	// (0x00055ac9) uni_indicator_pane_stacon_g4

0x0003,

0xf6ae,	// (0x00056a25) uni_indicator_pane_stacon_g

0x02a3,	// (0x0004761a) control_top_pane_stacon_g1

0x02ab,	// (0x00047622) control_top_pane_stacon_t1_ParamLimits

0x02ab,	// (0x00047622) control_top_pane_stacon_t1

0x02e2,	// (0x00047659) aid_levels_battery_lsc_ParamLimits

0x02e2,	// (0x00047659) aid_levels_battery_lsc

0x02fa,	// (0x00047671) battery_pane_stacon_g1_ParamLimits

0x02fa,	// (0x00047671) battery_pane_stacon_g1

0x030c,	// (0x00047683) battery_pane_stacon_g2_ParamLimits

0x030c,	// (0x00047683) battery_pane_stacon_g2

0x0001,

0xf6b7,	// (0x00056a2e) battery_pane_stacon_g_ParamLimits

0xf6b7,	// (0x00056a2e) battery_pane_stacon_g

0x034a,	// (0x000476c1) navi_icon_pane_stacon

0x035e,	// (0x000476d5) navi_navi_pane_stacon

0x034a,	// (0x000476c1) navi_text_pane_stacon

0x0374,	// (0x000476eb) control_bottom_pane_stacon_g1

0x037c,	// (0x000476f3) control_bottom_pane_stacon_t1_ParamLimits

0x037c,	// (0x000476f3) control_bottom_pane_stacon_t1

0xb0e5,	// (0x0005245c) grid_app_pane_ParamLimits

0xb0e5,	// (0x0005245c) grid_app_pane

0xb11d,	// (0x00052494) scroll_pane_cp15_ParamLimits

0xb11d,	// (0x00052494) scroll_pane_cp15

0xb132,	// (0x000524a9) cell_app_pane_ParamLimits

0xb132,	// (0x000524a9) cell_app_pane

0xb17d,	// (0x000524f4) cell_app_pane_g1_ParamLimits

0xb17d,	// (0x000524f4) cell_app_pane_g1

0xe776,	// (0x00055aed) cell_app_pane_g2_ParamLimits

0xe776,	// (0x00055aed) cell_app_pane_g2

0x0001,

0xf6bc,	// (0x00056a33) cell_app_pane_g_ParamLimits

0xf6bc,	// (0x00056a33) cell_app_pane_g

0xb1a1,	// (0x00052518) cell_app_pane_t1_ParamLimits

0xb1a1,	// (0x00052518) cell_app_pane_t1

0xe782,	// (0x00055af9) grid_highlight_pane_ParamLimits

0xe782,	// (0x00055af9) grid_highlight_pane

0xb014,	// (0x0005238b) cell_highlight_pane_g1

0xb01c,	// (0x00052393) cell_highlight_pane_g2

0xb024,	// (0x0005239b) cell_highlight_pane_g3

0xb02c,	// (0x000523a3) cell_highlight_pane_g4

0xb034,	// (0x000523ab) cell_highlight_pane_g5

0xb03c,	// (0x000523b3) cell_highlight_pane_g6

0xb044,	// (0x000523bb) cell_highlight_pane_g7

0xb04c,	// (0x000523c3) cell_highlight_pane_g8

0xb054,	// (0x000523cb) cell_highlight_pane_g9

0x6f60,	// (0x0004e2d7) cell_highlight_pane_g10

0x0009,

0xf66a,	// (0x000569e1) cell_highlight_pane_g

0xe793,	// (0x00055b0a) bg_scroll_pane

0x047c,	// (0x000477f3) scroll_handle_pane

0xe7da,	// (0x00055b51) scroll_bg_pane_g1

0xe7ef,	// (0x00055b66) scroll_bg_pane_g2

0xe807,	// (0x00055b7e) scroll_bg_pane_g3

0x0002,

0xf6c1,	// (0x00056a38) scroll_bg_pane_g

0xe81c,	// (0x00055b93) scroll_handle_focus_pane_ParamLimits

0xe81c,	// (0x00055b93) scroll_handle_focus_pane

0xe7da,	// (0x00055b51) scroll_handle_pane_g1

0xe829,	// (0x00055ba0) scroll_handle_pane_g2

0xe807,	// (0x00055b7e) scroll_handle_pane_g3

0x0002,

0xf6c8,	// (0x00056a3f) scroll_handle_pane_g

0xe52f,	// (0x000558a6) bg_popup_sub_pane_cp21_ParamLimits

0xe52f,	// (0x000558a6) bg_popup_sub_pane_cp21

0xe83d,	// (0x00055bb4) popup_fep_japan_predictive_window_t1_ParamLimits

0xe83d,	// (0x00055bb4) popup_fep_japan_predictive_window_t1

0xe854,	// (0x00055bcb) popup_fep_japan_predictive_window_t2_ParamLimits

0xe854,	// (0x00055bcb) popup_fep_japan_predictive_window_t2

0xe887,	// (0x00055bfe) popup_fep_japan_predictive_window_t3_ParamLimits

0xe887,	// (0x00055bfe) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cf,	// (0x00056a46) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cf,	// (0x00056a46) popup_fep_japan_predictive_window_t

0x6f6a,	// (0x0004e2e1) bg_popup_sub_pane_cp23

0xe8be,	// (0x00055c35) listscroll_japin_cand_pane

0xe8c6,	// (0x00055c3d) popup_fep_japan_candidate_window_t1

0xe8d4,	// (0x00055c4b) candidate_pane_ParamLimits

0xe8d4,	// (0x00055c4b) candidate_pane

0xe8e6,	// (0x00055c5d) scroll_pane_cp30

0xe8f0,	// (0x00055c67) list_single_popup_jap_candidate_pane_ParamLimits

0xe8f0,	// (0x00055c67) list_single_popup_jap_candidate_pane

0x6f6a,	// (0x0004e2e1) list_highlight_pane_cp30

0xe904,	// (0x00055c7b) list_single_popup_jap_candidate_pane_t1

0xb1db,	// (0x00052552) level_1_signal

0xb1ed,	// (0x00052564) level_2_signal

0xb200,	// (0x00052577) level_3_signal

0xb213,	// (0x0005258a) level_4_signal

0xb226,	// (0x0005259d) level_5_signal

0xb239,	// (0x000525b0) level_6_signal

0xb24c,	// (0x000525c3) level_7_signal

0xb1db,	// (0x00052552) level_1_battery

0xb1ed,	// (0x00052564) level_2_battery

0xb200,	// (0x00052577) level_3_battery

0xb213,	// (0x0005258a) level_4_battery

0xb226,	// (0x0005259d) level_5_battery

0xb239,	// (0x000525b0) level_6_battery

0xb24c,	// (0x000525c3) level_7_battery

0x26f5,	// (0x00049a6c) list_menu_pane_ParamLimits

0x26f5,	// (0x00049a6c) list_menu_pane

0x270b,	// (0x00049a82) scroll_pane_cp25_ParamLimits

0x270b,	// (0x00049a82) scroll_pane_cp25

0x2724,	// (0x00049a9b) list_double2_graphic_pane_cp2_ParamLimits

0x2724,	// (0x00049a9b) list_double2_graphic_pane_cp2

0x2724,	// (0x00049a9b) list_double2_large_graphic_pane_cp2_ParamLimits

0x2724,	// (0x00049a9b) list_double2_large_graphic_pane_cp2

0x2724,	// (0x00049a9b) list_double2_pane_cp2_ParamLimits

0x2724,	// (0x00049a9b) list_double2_pane_cp2

0x2724,	// (0x00049a9b) list_double_graphic_pane_cp2_ParamLimits

0x2724,	// (0x00049a9b) list_double_graphic_pane_cp2

0x2724,	// (0x00049a9b) list_double_large_graphic_pane_cp2_ParamLimits

0x2724,	// (0x00049a9b) list_double_large_graphic_pane_cp2

0x2724,	// (0x00049a9b) list_double_number_pane_cp2_ParamLimits

0x2724,	// (0x00049a9b) list_double_number_pane_cp2

0x2724,	// (0x00049a9b) list_double_pane_cp2_ParamLimits

0x2724,	// (0x00049a9b) list_double_pane_cp2

0xb25f,	// (0x000525d6) list_single_2graphic_pane_cp2_ParamLimits

0xb25f,	// (0x000525d6) list_single_2graphic_pane_cp2

0xb25f,	// (0x000525d6) list_single_graphic_heading_pane_cp2_ParamLimits

0xb25f,	// (0x000525d6) list_single_graphic_heading_pane_cp2

0xb25f,	// (0x000525d6) list_single_graphic_pane_cp2_ParamLimits

0xb25f,	// (0x000525d6) list_single_graphic_pane_cp2

0xb25f,	// (0x000525d6) list_single_heading_pane_cp2_ParamLimits

0xb25f,	// (0x000525d6) list_single_heading_pane_cp2

0x2767,	// (0x00049ade) list_single_large_graphic_pane_cp2_ParamLimits

0x2767,	// (0x00049ade) list_single_large_graphic_pane_cp2

0xb25f,	// (0x000525d6) list_single_number_heading_pane_cp2_ParamLimits

0xb25f,	// (0x000525d6) list_single_number_heading_pane_cp2

0xb25f,	// (0x000525d6) list_single_number_pane_cp2_ParamLimits

0xb25f,	// (0x000525d6) list_single_number_pane_cp2

0xb273,	// (0x000525ea) list_single_pane_cp2_ParamLimits

0xb273,	// (0x000525ea) list_single_pane_cp2

0x27f2,	// (0x00049b69) bg_popup_sub_pane_cp22

0x0562,	// (0x000478d9) popup_side_volume_key_window_g1

0x058c,	// (0x00047903) popup_side_volume_key_window_t1

0x05aa,	// (0x00047921) volume_small_pane_cp1

0x6ff4,	// (0x0004e36b) bg_popup_sub_pane_cp24_ParamLimits

0x6ff4,	// (0x0004e36b) bg_popup_sub_pane_cp24

0x2808,	// (0x00049b7f) fep_china_uni_candidate_pane_ParamLimits

0x2808,	// (0x00049b7f) fep_china_uni_candidate_pane

0x281c,	// (0x00049b93) fep_china_uni_entry_pane

0x282c,	// (0x00049ba3) popup_fep_china_uni_window_g1

0x2848,	// (0x00049bbf) fep_china_uni_entry_pane_g1

0x2852,	// (0x00049bc9) fep_china_uni_entry_pane_g2

0x0001,

0xf700,	// (0x00056a77) fep_china_uni_entry_pane_g

0x285c,	// (0x00049bd3) fep_entry_item_pane

0x2866,	// (0x00049bdd) fep_candidate_item_pane

0x286e,	// (0x00049be5) fep_china_uni_candidate_pane_g1

0x2878,	// (0x00049bef) fep_china_uni_candidate_pane_g2

0x2880,	// (0x00049bf7) fep_china_uni_candidate_pane_g3

0x2888,	// (0x00049bff) fep_china_uni_candidate_pane_g4

0x0003,

0xf705,	// (0x00056a7c) fep_china_uni_candidate_pane_g

0x6f60,	// (0x0004e2d7) fep_entry_item_pane_g1

0x2892,	// (0x00049c09) fep_entry_item_pane_t1_ParamLimits

0x2892,	// (0x00049c09) fep_entry_item_pane_t1

0x28a8,	// (0x00049c1f) fep_candidate_item_pane_t1_ParamLimits

0x28a8,	// (0x00049c1f) fep_candidate_item_pane_t1

0x28bd,	// (0x00049c34) fep_candidate_item_pane_t2_ParamLimits

0x28bd,	// (0x00049c34) fep_candidate_item_pane_t2

0x0001,

0xf70e,	// (0x00056a85) fep_candidate_item_pane_t_ParamLimits

0xf70e,	// (0x00056a85) fep_candidate_item_pane_t

0x6fb8,	// (0x0004e32f) list_highlight_pane_cp31_ParamLimits

0x6fb8,	// (0x0004e32f) list_highlight_pane_cp31

0x28cf,	// (0x00049c46) level_1_signal_lsc

0x28d8,	// (0x00049c4f) level_2_signal_lsc

0x28e1,	// (0x00049c58) level_3_signal_lsc

0x28ea,	// (0x00049c61) level_4_signal_lsc

0x28f3,	// (0x00049c6a) level_5_signal_lsc

0x28fc,	// (0x00049c73) level_6_signal_lsc

0x2905,	// (0x00049c7c) level_7_signal_lsc

0x2905,	// (0x00049c7c) level_1_battery_lsc

0x290e,	// (0x00049c85) level_2_battery_lsc

0x2917,	// (0x00049c8e) level_3_battery_lsc

0x2920,	// (0x00049c97) level_4_battery_lsc

0x2929,	// (0x00049ca0) level_5_battery_lsc

0x2932,	// (0x00049ca9) level_6_battery_lsc

0x28cf,	// (0x00049c46) level_7_battery_lsc

0x293b,	// (0x00049cb2) scroll_handle_focus_pane_g1

0x2944,	// (0x00049cbb) scroll_handle_focus_pane_g2

0x294d,	// (0x00049cc4) scroll_handle_focus_pane_g3

0x0002,

0xf713,	// (0x00056a8a) scroll_handle_focus_pane_g

0xa16f,	// (0x000514e6) list_single_2graphic_pane_g1_ParamLimits

0xa16f,	// (0x000514e6) list_single_2graphic_pane_g1

0xaf26,	// (0x0005229d) list_single_2graphic_pane_g2_ParamLimits

0xaf26,	// (0x0005229d) list_single_2graphic_pane_g2

0x0f83,	// (0x000482fa) list_single_2graphic_pane_g3_ParamLimits

0x0f83,	// (0x000482fa) list_single_2graphic_pane_g3

0xb302,	// (0x00052679) list_single_2graphic_pane_g4_ParamLimits

0xb302,	// (0x00052679) list_single_2graphic_pane_g4

0x0003,

0xf71a,	// (0x00056a91) list_single_2graphic_pane_g_ParamLimits

0xf71a,	// (0x00056a91) list_single_2graphic_pane_g

0xa17b,	// (0x000514f2) list_single_2graphic_pane_t1_ParamLimits

0xa17b,	// (0x000514f2) list_single_2graphic_pane_t1

0xb313,	// (0x0005268a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb313,	// (0x0005268a) list_double2_graphic_large_graphic_pane_g1

0x9dd5,	// (0x0005114c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9dd5,	// (0x0005114c) list_double2_graphic_large_graphic_pane_g2

0x9d2e,	// (0x000510a5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9d2e,	// (0x000510a5) list_double2_graphic_large_graphic_pane_g3

0xa1a9,	// (0x00051520) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa1a9,	// (0x00051520) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf723,	// (0x00056a9a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf723,	// (0x00056a9a) list_double2_graphic_large_graphic_pane_g

0xa1b5,	// (0x0005152c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa1b5,	// (0x0005152c) list_double2_graphic_large_graphic_pane_t1

0xa1cb,	// (0x00051542) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa1cb,	// (0x00051542) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72c,	// (0x00056aa3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72c,	// (0x00056aa3) list_double2_graphic_large_graphic_pane_t

0x2a90,	// (0x00049e07) popup_fast_swap_window_ParamLimits

0x2a90,	// (0x00049e07) popup_fast_swap_window

0x2aae,	// (0x00049e25) popup_side_volume_key_window

0x2acc,	// (0x00049e43) stacon_top_pane

0x2ad6,	// (0x00049e4d) status_pane_ParamLimits

0x2ad6,	// (0x00049e4d) status_pane

0x6f56,	// (0x0004e2cd) status_small_pane

0x6f6a,	// (0x0004e2e1) control_pane

0x6f6a,	// (0x0004e2e1) stacon_bottom_pane

0xaf9f,	// (0x00052316) scroll_pane_cp121

0xaf96,	// (0x0005230d) set_content_pane

0x2956,	// (0x00049ccd) bg_active_tab_pane_g1_cp1

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp1

0x2968,	// (0x00049cdf) bg_active_tab_pane_g3_cp1

0x2956,	// (0x00049ccd) bg_passive_tab_pane_g1_cp1

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp1

0x2968,	// (0x00049cdf) bg_passive_tab_pane_g3_cp1

0x2971,	// (0x00049ce8) bg_active_tab_pane_g1_cp2

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp2

0x297a,	// (0x00049cf1) bg_active_tab_pane_g3_cp2

0x2971,	// (0x00049ce8) bg_passive_tab_pane_g1_cp2

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp2

0x297a,	// (0x00049cf1) bg_passive_tab_pane_g3_cp2

0x2983,	// (0x00049cfa) bg_active_tab_pane_g1_cp3

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp3

0x298c,	// (0x00049d03) bg_active_tab_pane_g3_cp3

0x2983,	// (0x00049cfa) bg_passive_tab_pane_g1_cp3

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp3

0x298c,	// (0x00049d03) bg_passive_tab_pane_g3_cp3

0x2995,	// (0x00049d0c) bg_active_tab_pane_g1_cp4

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp4

0x29a0,	// (0x00049d17) bg_active_tab_pane_g3_cp4

0x2995,	// (0x00049d0c) bg_passive_tab_pane_g1_cp4

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp4

0x29a0,	// (0x00049d17) bg_passive_tab_pane_g3_cp4

0x29e9,	// (0x00049d60) bg_active_tab_pane_g1_cp5

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp5

0x29f2,	// (0x00049d69) bg_active_tab_pane_g3_cp5

0x29e9,	// (0x00049d60) bg_passive_tab_pane_g1_cp5

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp5

0x29f2,	// (0x00049d69) bg_passive_tab_pane_g3_cp5

0x50dc,	// (0x0004c453) list_set_graphic_pane_ParamLimits

0x50dc,	// (0x0004c453) list_set_graphic_pane

0x6f6a,	// (0x0004e2e1) bg_set_opt_pane_cp4

0x2a11,	// (0x00049d88) list_set_graphic_pane_g1_ParamLimits

0x2a11,	// (0x00049d88) list_set_graphic_pane_g1

0x2a1d,	// (0x00049d94) list_set_graphic_pane_g2_ParamLimits

0x2a1d,	// (0x00049d94) list_set_graphic_pane_g2

0x0001,

0xf731,	// (0x00056aa8) list_set_graphic_pane_g_ParamLimits

0xf731,	// (0x00056aa8) list_set_graphic_pane_g

0x0009,

0xfab6,	// (0x00056e2d) volume_small_pane_cp_g

0x2a41,	// (0x00049db8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2a41,	// (0x00049db8) list_double2_large_graphic_pane_g1_cp2

0x2a4f,	// (0x00049dc6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2a4f,	// (0x00049dc6) list_double2_large_graphic_pane_g2_cp2

0x2a60,	// (0x00049dd7) list_double2_large_graphic_pane_g3_cp2

0x2a68,	// (0x00049ddf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2a68,	// (0x00049ddf) list_double2_large_graphic_pane_t1_cp2

0x2a7e,	// (0x00049df5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2a7e,	// (0x00049df5) list_double2_large_graphic_pane_t2_cp2

0x4659,	// (0x0004b9d0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4659,	// (0x0004b9d0) list_double_large_graphic_pane_g1_cp2

0x466c,	// (0x0004b9e3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x466c,	// (0x0004b9e3) list_double_large_graphic_pane_g2_cp2

0x2be8,	// (0x00049f5f) list_double_large_graphic_pane_g3_cp2

0x467d,	// (0x0004b9f4) list_double_large_graphic_pane_g4_cp

0x4685,	// (0x0004b9fc) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4685,	// (0x0004b9fc) list_double_large_graphic_pane_t1_cp2

0x469c,	// (0x0004ba13) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x469c,	// (0x0004ba13) list_double_large_graphic_pane_t2_cp2

0x2ae4,	// (0x00049e5b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2ae4,	// (0x00049e5b) list_double2_graphic_pane_g1_cp2

0x2af2,	// (0x00049e69) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2af2,	// (0x00049e69) list_double2_graphic_pane_g2_cp2

0x2b03,	// (0x00049e7a) list_double2_graphic_pane_g3_cp2

0x2b0d,	// (0x00049e84) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2b0d,	// (0x00049e84) list_double2_graphic_pane_t1_cp2

0x2b23,	// (0x00049e9a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2b23,	// (0x00049e9a) list_double2_graphic_pane_t2_cp2

0x26aa,	// (0x00049a21) list_single_number_heading_pane_g1_cp2_ParamLimits

0x26aa,	// (0x00049a21) list_single_number_heading_pane_g1_cp2

0x2b35,	// (0x00049eac) list_single_number_heading_pane_g2_cp2

0x2b3d,	// (0x00049eb4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2b3d,	// (0x00049eb4) list_single_number_heading_pane_t1_cp2

0x2b53,	// (0x00049eca) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2b53,	// (0x00049eca) list_single_number_heading_pane_t2_cp2

0x2b67,	// (0x00049ede) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2b67,	// (0x00049ede) list_single_number_heading_pane_t3_cp2

0x26aa,	// (0x00049a21) list_single_heading_pane_g1_cp2_ParamLimits

0x26aa,	// (0x00049a21) list_single_heading_pane_g1_cp2

0x2b35,	// (0x00049eac) list_single_heading_pane_g2_cp2

0x2b3d,	// (0x00049eb4) list_single_heading_pane_t1_cp2_ParamLimits

0x2b3d,	// (0x00049eb4) list_single_heading_pane_t1_cp2

0x4453,	// (0x0004b7ca) list_single_heading_pane_t2_cp2_ParamLimits

0x4453,	// (0x0004b7ca) list_single_heading_pane_t2_cp2

0x439b,	// (0x0004b712) list_double_graphic_pane_g1_cp2_ParamLimits

0x439b,	// (0x0004b712) list_double_graphic_pane_g1_cp2

0x43a7,	// (0x0004b71e) list_double_graphic_pane_g2_cp2_ParamLimits

0x43a7,	// (0x0004b71e) list_double_graphic_pane_g2_cp2

0x43b6,	// (0x0004b72d) list_double_graphic_pane_g3_cp2

0x43be,	// (0x0004b735) list_double_graphic_pane_t1_cp2_ParamLimits

0x43be,	// (0x0004b735) list_double_graphic_pane_t1_cp2

0x43d4,	// (0x0004b74b) list_double_graphic_pane_t2_cp2_ParamLimits

0x43d4,	// (0x0004b74b) list_double_graphic_pane_t2_cp2

0x2bdc,	// (0x00049f53) list_double_number_pane_g1_cp2_ParamLimits

0x2bdc,	// (0x00049f53) list_double_number_pane_g1_cp2

0x2be8,	// (0x00049f5f) list_double_number_pane_g2_cp2

0x435f,	// (0x0004b6d6) list_double_number_pane_t1_cp2_ParamLimits

0x435f,	// (0x0004b6d6) list_double_number_pane_t1_cp2

0x4373,	// (0x0004b6ea) list_double_number_pane_t2_cp2_ParamLimits

0x4373,	// (0x0004b6ea) list_double_number_pane_t2_cp2

0x4389,	// (0x0004b700) list_double_number_pane_t3_cp2_ParamLimits

0x4389,	// (0x0004b700) list_double_number_pane_t3_cp2

0x4248,	// (0x0004b5bf) list_single_graphic_pane_g1_cp2_ParamLimits

0x4248,	// (0x0004b5bf) list_single_graphic_pane_g1_cp2

0x2c51,	// (0x00049fc8) list_single_graphic_pane_g2_cp2_ParamLimits

0x2c51,	// (0x00049fc8) list_single_graphic_pane_g2_cp2

0x2c5d,	// (0x00049fd4) list_single_graphic_pane_g3_cp2

0x421e,	// (0x0004b595) list_single_graphic_pane_t1_cp2_ParamLimits

0x421e,	// (0x0004b595) list_single_graphic_pane_t1_cp2

0x2c51,	// (0x00049fc8) list_single_number_pane_g1_cp2_ParamLimits

0x2c51,	// (0x00049fc8) list_single_number_pane_g1_cp2

0x2c5d,	// (0x00049fd4) list_single_number_pane_g2_cp2

0x421e,	// (0x0004b595) list_single_number_pane_t1_cp2_ParamLimits

0x421e,	// (0x0004b595) list_single_number_pane_t1_cp2

0x4234,	// (0x0004b5ab) list_single_number_pane_t2_cp2_ParamLimits

0x4234,	// (0x0004b5ab) list_single_number_pane_t2_cp2

0x2a4f,	// (0x00049dc6) list_double2_pane_g1_cp2_ParamLimits

0x2a4f,	// (0x00049dc6) list_double2_pane_g1_cp2

0x2a60,	// (0x00049dd7) list_double2_pane_g2_cp2

0x2bb4,	// (0x00049f2b) list_double2_pane_t1_cp2_ParamLimits

0x2bb4,	// (0x00049f2b) list_double2_pane_t1_cp2

0x2bca,	// (0x00049f41) list_double2_pane_t2_cp2_ParamLimits

0x2bca,	// (0x00049f41) list_double2_pane_t2_cp2

0x2bdc,	// (0x00049f53) list_double_pane_g1_cp2_ParamLimits

0x2bdc,	// (0x00049f53) list_double_pane_g1_cp2

0x2be8,	// (0x00049f5f) list_double_pane_g2_cp2

0x2bf0,	// (0x00049f67) list_double_pane_t1_cp2_ParamLimits

0x2bf0,	// (0x00049f67) list_double_pane_t1_cp2

0x2c06,	// (0x00049f7d) list_double_pane_t2_cp2_ParamLimits

0x2c06,	// (0x00049f7d) list_double_pane_t2_cp2

0x2c41,	// (0x00049fb8) list_single_pane_cp2_g3

0x2c51,	// (0x00049fc8) list_single_pane_g1_cp2_ParamLimits

0x2c51,	// (0x00049fc8) list_single_pane_g1_cp2

0x2c5d,	// (0x00049fd4) list_single_pane_g2_cp2

0x2c65,	// (0x00049fdc) list_single_pane_t1_cp2_ParamLimits

0x2c65,	// (0x00049fdc) list_single_pane_t1_cp2

0x2c7d,	// (0x00049ff4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2c7d,	// (0x00049ff4) list_single_large_graphic_pane_g1_cp2

0x2c8b,	// (0x0004a002) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2c8b,	// (0x0004a002) list_single_large_graphic_pane_g2_cp2

0x2c97,	// (0x0004a00e) list_single_large_graphic_pane_g3_cp2

0x2c9f,	// (0x0004a016) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2c9f,	// (0x0004a016) list_single_large_graphic_pane_g4_cp1

0x2cb9,	// (0x0004a030) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2cb9,	// (0x0004a030) list_single_large_graphic_pane_t1_cp2

0x41e8,	// (0x0004b55f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x41e8,	// (0x0004b55f) list_single_graphic_heading_pane_g1_cp2

0x41b5,	// (0x0004b52c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x41b5,	// (0x0004b52c) list_single_graphic_heading_pane_g4_cp2

0x2c5d,	// (0x00049fd4) list_single_graphic_heading_pane_g5_cp2

0x41f4,	// (0x0004b56b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x41f4,	// (0x0004b56b) list_single_graphic_heading_pane_t1_cp2

0x420a,	// (0x0004b581) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x420a,	// (0x0004b581) list_single_graphic_heading_pane_t2_cp2

0x41a9,	// (0x0004b520) list_single_2graphic_pane_g1_cp2_ParamLimits

0x41a9,	// (0x0004b520) list_single_2graphic_pane_g1_cp2

0x41b5,	// (0x0004b52c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x41b5,	// (0x0004b52c) list_single_2graphic_pane_g2_cp2

0x2c5d,	// (0x00049fd4) list_single_2graphic_pane_g3_cp2

0x41c6,	// (0x0004b53d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x41c6,	// (0x0004b53d) list_single_2graphic_pane_g4_cp2

0x41d2,	// (0x0004b549) list_single_2graphic_pane_t1_cp2_ParamLimits

0x41d2,	// (0x0004b549) list_single_2graphic_pane_t1_cp2

0x6f60,	// (0x0004e2d7) list_highlight_pane_g10_cp1

0x3d81,	// (0x0004b0f8) list_highlight_pane_g1_cp1

0x3d89,	// (0x0004b100) list_highlight_pane_g2_cp1

0x3d91,	// (0x0004b108) list_highlight_pane_g3_cp1

0x3d99,	// (0x0004b110) list_highlight_pane_g4_cp1

0x3da1,	// (0x0004b118) list_highlight_pane_g5_cp1

0x3da9,	// (0x0004b120) list_highlight_pane_g6_cp1

0x3db1,	// (0x0004b128) list_highlight_pane_g7_cp1

0x3db9,	// (0x0004b130) list_highlight_pane_g8_cp1

0x3dc1,	// (0x0004b138) list_highlight_pane_g9_cp1

0xc9c6,	// (0x00053d3d) form_field_slider_pane_t3

0xc9d4,	// (0x00053d4b) form_field_slider_pane_t4

0x3cbd,	// (0x0004b034) slider_form_pane_ParamLimits

0x3cbd,	// (0x0004b034) slider_form_pane

0x6f6a,	// (0x0004e2e1) control_abbreviations

0x6f6a,	// (0x0004e2e1) control_conventions

0x6f6a,	// (0x0004e2e1) control_definitions

0x6f6a,	// (0x0004e2e1) format_table_attribute

0x44a9,	// (0x0004b820) bg_popup_preview_window_pane_g9

0x6f6a,	// (0x0004e2e1) format_table_data2

0x6f6a,	// (0x0004e2e1) format_table_data3

0x6f6a,	// (0x0004e2e1) format_table_data_example

0x0008,

0x6f6a,	// (0x0004e2e1) intro_purpose

0xf8c8,	// (0x00056c3f) bg_popup_preview_window_pane_g

0x6f6a,	// (0x0004e2e1) texts_category

0x6f6a,	// (0x0004e2e1) texts_graphics

0x2ccf,	// (0x0004a046) text_digital

0x2cde,	// (0x0004a055) text_primary

0x2ced,	// (0x0004a064) text_primary_small

0x2cfc,	// (0x0004a073) text_secondary

0x2d0b,	// (0x0004a082) text_title

0x4bfc,	// (0x0004bf73) bg_passive_tab_pane_g1_cp3_srt

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp3_srt

0x4c05,	// (0x0004bf7c) bg_passive_tab_pane_g3_cp3_srt

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp3_srt_ParamLimits

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp3_srt

0x4c0e,	// (0x0004bf85) tabs_4_active_pane_srt_g1

0xcdae,	// (0x00054125) tabs_4_active_pane_srt_t1_ParamLimits

0xcdae,	// (0x00054125) tabs_4_active_pane_srt_t1

0x4bfc,	// (0x0004bf73) bg_active_tab_pane_g1_cp3_copy1

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp3_copy1

0x4c05,	// (0x0004bf7c) bg_active_tab_pane_g3_cp3_copy1

0x6fb8,	// (0x0004e32f) tabs_2_long_active_pane_srt_ParamLimits

0x6fb8,	// (0x0004e32f) tabs_2_long_active_pane_srt

0x6fb8,	// (0x0004e32f) tabs_2_long_passive_pane_srt_ParamLimits

0x6fb8,	// (0x0004e32f) tabs_2_long_passive_pane_srt

0x3049,	// (0x0004a3c0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3049,	// (0x0004a3c0) bg_passive_tab_pane_cp4_srt

0x48d3,	// (0x0004bc4a) bg_passive_tab_pane_g1_cp4_srt

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp4_srt

0x48dc,	// (0x0004bc53) bg_passive_tab_pane_g3_cp4_srt

0x6fb8,	// (0x0004e32f) bg_active_tab_pane_cp4_srt_ParamLimits

0x6fb8,	// (0x0004e32f) bg_active_tab_pane_cp4_srt

0xcba6,	// (0x00053f1d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcba6,	// (0x00053f1d) tabs_2_long_active_pane_srt_t1

0x48d3,	// (0x0004bc4a) bg_active_tab_pane_g1_cp4_srt

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp4_srt

0x48dc,	// (0x0004bc53) bg_active_tab_pane_g3_cp4_srt

0x6ff4,	// (0x0004e36b) tabs_3_long_active_pane_srt_ParamLimits

0x6ff4,	// (0x0004e36b) tabs_3_long_active_pane_srt

0x6ff4,	// (0x0004e36b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6ff4,	// (0x0004e36b) tabs_3_long_passive_pane_cp_srt

0x6ff4,	// (0x0004e36b) tabs_3_long_passive_pane_srt_ParamLimits

0x6ff4,	// (0x0004e36b) tabs_3_long_passive_pane_srt

0x3049,	// (0x0004a3c0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3049,	// (0x0004a3c0) bg_passive_tab_pane_cp5_srt

0x29e9,	// (0x00049d60) bg_passive_tab_pane_g1_cp5_srt

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp5_srt

0x29f2,	// (0x00049d69) bg_passive_tab_pane_g3_cp5_srt

0x6fb8,	// (0x0004e32f) bg_active_tab_pane_cp5_srt_ParamLimits

0x6fb8,	// (0x0004e32f) bg_active_tab_pane_cp5_srt

0xcb90,	// (0x00053f07) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcb90,	// (0x00053f07) tabs_3_long_active_pane_srt_t1

0x29e9,	// (0x00049d60) bg_active_tab_pane_g1_cp5_srt

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp5_srt

0x29f2,	// (0x00049d69) bg_active_tab_pane_g3_cp5_srt

0x48b3,	// (0x0004bc2a) navi_text_pane_srt_t1

0x48ab,	// (0x0004bc22) navi_icon_pane_srt_g1

0x2ee3,	// (0x0004a25a) midp_editing_number_pane_srt

0x2d1a,	// (0x0004a091) midp_ticker_pane_srt

0x2eeb,	// (0x0004a262) midp_ticker_pane_srt_g1

0x2ef3,	// (0x0004a26a) midp_ticker_pane_srt_g2

0x0001,

0xf750,	// (0x00056ac7) midp_ticker_pane_srt_g

0x2efb,	// (0x0004a272) midp_ticker_pane_srt_t1

0x489c,	// (0x0004bc13) midp_editing_number_pane_t1_copy1

0xb325,	// (0x0005269c) listscroll_midp_pane

0xb325,	// (0x0005269c) midp_form_pane

0x2d91,	// (0x0004a108) midp_info_popup_window_ParamLimits

0x2d91,	// (0x0004a108) midp_info_popup_window

0xe52f,	// (0x000558a6) bg_popup_sub_pane_cp50_ParamLimits

0xe52f,	// (0x000558a6) bg_popup_sub_pane_cp50

0x39a3,	// (0x0004ad1a) listscroll_midp_info_pane_ParamLimits

0x39a3,	// (0x0004ad1a) listscroll_midp_info_pane

0x3983,	// (0x0004acfa) listscroll_form_midp_pane_ParamLimits

0x3983,	// (0x0004acfa) listscroll_form_midp_pane

0x398f,	// (0x0004ad06) scroll_bar_cp050

0x3983,	// (0x0004acfa) list_midp_pane

0x56b9,	// (0x0004ca30) signal_pane_g2_cp

0x389d,	// (0x0004ac14) listscroll_midp_info_pane_t1_ParamLimits

0x389d,	// (0x0004ac14) listscroll_midp_info_pane_t1

0x38b5,	// (0x0004ac2c) listscroll_midp_info_pane_t2_ParamLimits

0x38b5,	// (0x0004ac2c) listscroll_midp_info_pane_t2

0x38f3,	// (0x0004ac6a) listscroll_midp_info_pane_t3_ParamLimits

0x38f3,	// (0x0004ac6a) listscroll_midp_info_pane_t3

0x392d,	// (0x0004aca4) listscroll_midp_info_pane_t4_ParamLimits

0x392d,	// (0x0004aca4) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x00056b7a) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x00056b7a) listscroll_midp_info_pane_t

0xe584,	// (0x000558fb) scroll_pane_cp21

0x3837,	// (0x0004abae) form_midp_field_choice_group_pane

0x3840,	// (0x0004abb7) form_midp_field_text_pane

0x3883,	// (0x0004abfa) form_midp_field_time_pane

0x388b,	// (0x0004ac02) form_midp_gauge_slider_pane

0x3894,	// (0x0004ac0b) form_midp_gauge_wait_pane

0x6f6a,	// (0x0004e2e1) form_midp_image_pane

0xa1dd,	// (0x00051554) list_single_midp_pane_ParamLimits

0xa1dd,	// (0x00051554) list_single_midp_pane

0xc9a1,	// (0x00053d18) form_midp_field_text_pane_t1

0x35ed,	// (0x0004a964) input_focus_pane_cp050

0x3826,	// (0x0004ab9d) list_midp_form_text_pane

0x37ca,	// (0x0004ab41) form_midp_field_choice_group_pane_t1

0x37d8,	// (0x0004ab4f) input_focus_pane_cp051

0x37ec,	// (0x0004ab63) list_midp_choice_pane

0x6f6a,	// (0x0004e2e1) status_idle_pane

0x37ae,	// (0x0004ab25) form_midp_field_time_pane_t1

0x6f60,	// (0x0004e2d7) wait_anim_pane_g2_copy1

0x37bc,	// (0x0004ab33) form_midp_field_time_pane_t2

0x0001,

0x2e41,	// (0x0004a1b8) aid_navinavi_width_2_pane

0xf7fe,	// (0x00056b75) form_midp_field_time_pane_t

0x6f6a,	// (0x0004e2e1) input_focus_pane_cp052

0x6f6a,	// (0x0004e2e1) bg_input_focus_pane_cp040

0x376e,	// (0x0004aae5) form_midp_gauge_slider_pane_t1

0x377c,	// (0x0004aaf3) form_midp_gauge_slider_pane_t2

0xc985,	// (0x00053cfc) form_midp_gauge_slider_pane_t3

0xc993,	// (0x00053d0a) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x00056b6c) form_midp_gauge_slider_pane_t

0x37a6,	// (0x0004ab1d) form_midp_slider_pane

0x6fb8,	// (0x0004e32f) bg_input_focus_pane_cp041_ParamLimits

0x6fb8,	// (0x0004e32f) bg_input_focus_pane_cp041

0x373b,	// (0x0004aab2) form_midp_gauge_wait_pane_t1_ParamLimits

0x373b,	// (0x0004aab2) form_midp_gauge_wait_pane_t1

0x374d,	// (0x0004aac4) form_midp_gauge_wait_pane_t2_ParamLimits

0x374d,	// (0x0004aac4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x00056b67) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x00056b67) form_midp_gauge_wait_pane_t

0x375f,	// (0x0004aad6) form_midp_wait_pane_ParamLimits

0x375f,	// (0x0004aad6) form_midp_wait_pane

0x3703,	// (0x0004aa7a) form_midp_image_pane_g1

0x370c,	// (0x0004aa83) form_midp_image_pane_t1

0x371b,	// (0x0004aa92) form_midp_image_pane_t2

0x372a,	// (0x0004aaa1) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x00056b60) form_midp_image_pane_t

0x36fa,	// (0x0004aa71) list_single_midp_pane_g1

0xee45,	// (0x000561bc) list_single_midp_pane_t1

0xc96e,	// (0x00053ce5) list_midp_form_item_pane_ParamLimits

0xc96e,	// (0x00053ce5) list_midp_form_item_pane

0x2de9,	// (0x0004a160) list_midp_form_item_pane_t1

0x2df8,	// (0x0004a16f) midp_ticker_pane_g1

0x2e04,	// (0x0004a17b) midp_ticker_pane_g2

0x0001,

0xf736,	// (0x00056aad) midp_ticker_pane_g

0xb3c9,	// (0x00052740) midp_ticker_pane_t1

0xcd2f,	// (0x000540a6) midp_editing_number_pane_t1

0x4ae7,	// (0x0004be5e) midp_editing_number_pane

0x4af6,	// (0x0004be6d) midp_ticker_pane

0x39af,	// (0x0004ad26) ai_message_heading_pane

0x6f6a,	// (0x0004e2e1) bg_popup_window_pane_cp14

0x39b7,	// (0x0004ad2e) listscroll_ai_message_pane

0x4822,	// (0x0004bb99) ai_message_heading_pane_g1_ParamLimits

0x4822,	// (0x0004bb99) ai_message_heading_pane_g1

0x482e,	// (0x0004bba5) ai_message_heading_pane_g2_ParamLimits

0x482e,	// (0x0004bba5) ai_message_heading_pane_g2

0x483c,	// (0x0004bbb3) ai_message_heading_pane_g3_ParamLimits

0x483c,	// (0x0004bbb3) ai_message_heading_pane_g3

0x4848,	// (0x0004bbbf) ai_message_heading_pane_g4_ParamLimits

0x4848,	// (0x0004bbbf) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x00056ca1) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x00056ca1) ai_message_heading_pane_g

0x4854,	// (0x0004bbcb) ai_message_heading_pane_t1_ParamLimits

0x4854,	// (0x0004bbcb) ai_message_heading_pane_t1

0x486e,	// (0x0004bbe5) ai_message_heading_pane_t2_ParamLimits

0x486e,	// (0x0004bbe5) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x00056caa) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x00056caa) ai_message_heading_pane_t

0x4882,	// (0x0004bbf9) bg_popup_heading_pane_cp1_ParamLimits

0x4882,	// (0x0004bbf9) bg_popup_heading_pane_cp1

0x4810,	// (0x0004bb87) list_ai_message_pane_ParamLimits

0x4810,	// (0x0004bb87) list_ai_message_pane

0xe584,	// (0x000558fb) scroll_pane_cp10

0x47ac,	// (0x0004bb23) list_ai_message_pane_g1

0x47b4,	// (0x0004bb2b) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x00056c7e) list_ai_message_pane_g

0x47bc,	// (0x0004bb33) list_ai_message_pane_t1_ParamLimits

0x47bc,	// (0x0004bb33) list_ai_message_pane_t1

0x47d1,	// (0x0004bb48) list_ai_message_pane_t2_ParamLimits

0x47d1,	// (0x0004bb48) list_ai_message_pane_t2

0x47e6,	// (0x0004bb5d) list_ai_message_pane_t3_ParamLimits

0x47e6,	// (0x0004bb5d) list_ai_message_pane_t3

0x47fb,	// (0x0004bb72) list_ai_message_pane_t4_ParamLimits

0x47fb,	// (0x0004bb72) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x00056c83) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x00056c83) list_ai_message_pane_t

0xcb76,	// (0x00053eed) cell_ai_soft_ind_pane_ParamLimits

0xcb76,	// (0x00053eed) cell_ai_soft_ind_pane

0x2e22,	// (0x0004a199) cell_ai_soft_ind_pane_g1_ParamLimits

0x2e22,	// (0x0004a199) cell_ai_soft_ind_pane_g1

0x6f6a,	// (0x0004e2e1) grid_highlight_cp1

0x2e2f,	// (0x0004a1a6) text_secondary_cp56_ParamLimits

0x2e2f,	// (0x0004a1a6) text_secondary_cp56

0x476a,	// (0x0004bae1) example_general_pane_ParamLimits

0x476a,	// (0x0004bae1) example_general_pane

0x4776,	// (0x0004baed) example_parent_pane_g1_ParamLimits

0x4776,	// (0x0004baed) example_parent_pane_g1

0x4782,	// (0x0004baf9) example_parent_pane_t1_ParamLimits

0x4782,	// (0x0004baf9) example_parent_pane_t1

0xb93f,	// (0x00052cb6) popup_preview_text_window_ParamLimits

0xb93f,	// (0x00052cb6) popup_preview_text_window

0x2c49,	// (0x00049fc0) list_single_pane_cp2_g4

0xaa1d,	// (0x00051d94) bg_popup_preview_window_pane_ParamLimits

0xaa1d,	// (0x00051d94) bg_popup_preview_window_pane

0x44b3,	// (0x0004b82a) popup_preview_text_window_t1_ParamLimits

0x44b3,	// (0x0004b82a) popup_preview_text_window_t1

0x44d1,	// (0x0004b848) popup_preview_text_window_t2_ParamLimits

0x44d1,	// (0x0004b848) popup_preview_text_window_t2

0x451a,	// (0x0004b891) popup_preview_text_window_t3_ParamLimits

0x451a,	// (0x0004b891) popup_preview_text_window_t3

0x455f,	// (0x0004b8d6) popup_preview_text_window_t4_ParamLimits

0x455f,	// (0x0004b8d6) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x00056c52) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x00056c52) popup_preview_text_window_t

0x45dd,	// (0x0004b954) scroll_pane_cp11

0x3579,	// (0x0004a8f0) bg_popup_preview_window_pane_g1

0x4467,	// (0x0004b7de) bg_popup_preview_window_pane_g2

0x4471,	// (0x0004b7e8) bg_popup_preview_window_pane_g3

0x447b,	// (0x0004b7f2) bg_popup_preview_window_pane_g4

0x4485,	// (0x0004b7fc) bg_popup_preview_window_pane_g5

0x448f,	// (0x0004b806) bg_popup_preview_window_pane_g6

0x4497,	// (0x0004b80e) bg_popup_preview_window_pane_g7

0x449f,	// (0x0004b816) bg_popup_preview_window_pane_g8

0xf156,	// (0x000564cd) aid_popup_width_pane

0xb8af,	// (0x00052c26) popup_midp_note_alarm_window_ParamLimits

0xb8af,	// (0x00052c26) popup_midp_note_alarm_window

0xafb0,	// (0x00052327) data_form_pane_ParamLimits

0xa060,	// (0x000513d7) form_field_data_pane_g1

0xa06a,	// (0x000513e1) form_field_data_pane_t1_ParamLimits

0xafbc,	// (0x00052333) input_focus_pane_ParamLimits

0xec76,	// (0x00055fed) data_form_wide_pane_ParamLimits

0xec87,	// (0x00055ffe) form_field_data_wide_pane_g1

0xec93,	// (0x0005600a) form_field_data_wide_pane_t1_ParamLimits

0xacde,	// (0x00052055) input_focus_pane_cp6_ParamLimits

0xb098,	// (0x0005240f) input_popup_find_pane_g1_ParamLimits

0xb098,	// (0x0005240f) input_popup_find_pane_g1

0x031d,	// (0x00047694) aid_navi_side_left_pane

0x0332,	// (0x000476a9) aid_navi_side_right_pane

0x3e7c,	// (0x0004b1f3) bg_popup_window_pane_cp30_ParamLimits

0x3e7c,	// (0x0004b1f3) bg_popup_window_pane_cp30

0x3ef6,	// (0x0004b26d) popup_midp_note_alarm_window_g1_ParamLimits

0x3ef6,	// (0x0004b26d) popup_midp_note_alarm_window_g1

0x3f26,	// (0x0004b29d) popup_midp_note_alarm_window_t1_ParamLimits

0x3f26,	// (0x0004b29d) popup_midp_note_alarm_window_t1

0x3fc7,	// (0x0004b33e) popup_midp_note_alarm_window_t2_ParamLimits

0x3fc7,	// (0x0004b33e) popup_midp_note_alarm_window_t2

0x4075,	// (0x0004b3ec) popup_midp_note_alarm_window_t3_ParamLimits

0x4075,	// (0x0004b3ec) popup_midp_note_alarm_window_t3

0x40a7,	// (0x0004b41e) popup_midp_note_alarm_window_t4_ParamLimits

0x40a7,	// (0x0004b41e) popup_midp_note_alarm_window_t4

0x40cd,	// (0x0004b444) popup_midp_note_alarm_window_t5_ParamLimits

0x40cd,	// (0x0004b444) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x00056bef) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x00056bef) popup_midp_note_alarm_window_t

0x4179,	// (0x0004b4f0) wait_bar_pane_cp1_ParamLimits

0x4179,	// (0x0004b4f0) wait_bar_pane_cp1

0x6f6a,	// (0x0004e2e1) wait_anim_pane_copy1

0x6f6a,	// (0x0004e2e1) wait_border_pane_copy1

0x3b61,	// (0x0004aed8) wait_border_pane_g1_copy1

0xecad,	// (0x00056024) form_field_popup_pane_g1

0xa084,	// (0x000513fb) form_field_popup_pane_t1_ParamLimits

0xafbc,	// (0x00052333) input_focus_pane_cp7_ParamLimits

0xafea,	// (0x00052361) list_form_pane_ParamLimits

0xecb5,	// (0x0005602c) form_field_popup_wide_pane_g1

0xecbd,	// (0x00056034) form_field_popup_wide_pane_t1_ParamLimits

0xafbc,	// (0x00052333) input_focus_pane_cp8_ParamLimits

0xaff6,	// (0x0005236d) list_form_wide_pane_ParamLimits

0x4ca0,	// (0x0004c017) aid_size_cell_graphic_pane

0xa103,	// (0x0005147a) data_form_pane_t1_ParamLimits

0xa1f7,	// (0x0005156e) data_form_wide_pane_t1_ParamLimits

0xbd41,	// (0x000530b8) bg_status_flat_pane

0xa5e8,	// (0x0005195f) title_pane_t1_ParamLimits

0x6f80,	// (0x0004e2f7) title_pane_t2_ParamLimits

0x6fa6,	// (0x0004e31d) title_pane_t3_ParamLimits

0xf530,	// (0x000568a7) title_pane_t_ParamLimits

0xb1db,	// (0x00052552) level_1_signal_ParamLimits

0xb1ed,	// (0x00052564) level_2_signal_ParamLimits

0xb200,	// (0x00052577) level_3_signal_ParamLimits

0xb213,	// (0x0005258a) level_4_signal_ParamLimits

0xb226,	// (0x0005259d) level_5_signal_ParamLimits

0xb239,	// (0x000525b0) level_6_signal_ParamLimits

0xb24c,	// (0x000525c3) level_7_signal_ParamLimits

0xb1db,	// (0x00052552) level_1_battery_ParamLimits

0xb1ed,	// (0x00052564) level_2_battery_ParamLimits

0xb200,	// (0x00052577) level_3_battery_ParamLimits

0xb213,	// (0x0005258a) level_4_battery_ParamLimits

0xb226,	// (0x0005259d) level_5_battery_ParamLimits

0xb239,	// (0x000525b0) level_6_battery_ParamLimits

0xb24c,	// (0x000525c3) level_7_battery_ParamLimits

0x3d81,	// (0x0004b0f8) bg_status_flat_pane_g1

0x3d89,	// (0x0004b100) bg_status_flat_pane_g2

0x3d91,	// (0x0004b108) bg_status_flat_pane_g3

0x3d99,	// (0x0004b110) bg_status_flat_pane_g4

0x3da1,	// (0x0004b118) bg_status_flat_pane_g5

0x3da9,	// (0x0004b120) bg_status_flat_pane_g6

0x3db1,	// (0x0004b128) bg_status_flat_pane_g7

0xa67c,	// (0x000519f3) tabs_3_active_pane_t1_ParamLimits

0xa67c,	// (0x000519f3) tabs_3_passive_pane_t1_ParamLimits

0xa696,	// (0x00051a0d) tabs_4_active_pane_t1_ParamLimits

0xa696,	// (0x00051a0d) tabs_4_1_passive_pane_t1_ParamLimits

0xb0ae,	// (0x00052425) tabs_2_active_pane_t1_ParamLimits

0xb0ae,	// (0x00052425) tabs_2_passive_pane_t1_ParamLimits

0x6fb8,	// (0x0004e32f) bg_active_tab_pane_cp4_ParamLimits

0xb0c0,	// (0x00052437) tabs_2_long_active_pane_t1_ParamLimits

0x3049,	// (0x0004a3c0) bg_passive_tab_pane_cp4_ParamLimits

0x0fdb,	// (0x00048352) list_single_midp_graphic_pane_t1_ParamLimits

0x6fb8,	// (0x0004e32f) bg_active_tab_pane_cp5_ParamLimits

0xb0d3,	// (0x0005244a) tabs_3_long_active_pane_t1_ParamLimits

0x3049,	// (0x0004a3c0) bg_passive_tab_pane_cp5_ParamLimits

0x0fdb,	// (0x00048352) list_single_midp_graphic_pane_t1

0xbd41,	// (0x000530b8) bg_status_flat_pane_ParamLimits

0x3201,	// (0x0004a578) indicator_pane_cp2_ParamLimits

0x3201,	// (0x0004a578) indicator_pane_cp2

0xbed5,	// (0x0005324c) navi_pane_srt_ParamLimits

0xbed5,	// (0x0005324c) navi_pane_srt

0x3366,	// (0x0004a6dd) popup_clock_digital_analogue_window_cp1

0xa785,	// (0x00051afc) indicator_pane_t1

0x2d1a,	// (0x0004a091) copy_highlight_pane

0x2d1a,	// (0x0004a091) cursor_graphics_pane

0x2d1a,	// (0x0004a091) graphic_within_text_pane

0x2d1a,	// (0x0004a091) link_highlight_pane

0x45a0,	// (0x0004b917) popup_preview_text_window_t5_ParamLimits

0x45a0,	// (0x0004b917) popup_preview_text_window_t5

0x2e4b,	// (0x0004a1c2) cursor_digital_pane

0x2e4b,	// (0x0004a1c2) cursor_primary_pane

0x2e5c,	// (0x0004a1d3) cursor_primary_small_pane

0x2e64,	// (0x0004a1db) cursor_secondary_pane

0x2e6c,	// (0x0004a1e3) cursor_title_pane

0x2e4b,	// (0x0004a1c2) link_highlight_digital_pane

0x2e53,	// (0x0004a1ca) link_highlight_primary_pane

0x2e5c,	// (0x0004a1d3) link_highlight_primary_small_pane

0x2e64,	// (0x0004a1db) link_highlight_secondary_pane

0x2e6c,	// (0x0004a1e3) link_highlight_title_pane

0x2e4b,	// (0x0004a1c2) copy_highlight_digital_pane

0x2e4b,	// (0x0004a1c2) copy_highlight_primary_pane

0x2e5c,	// (0x0004a1d3) copy_highlight_primary_small_pane

0x2e64,	// (0x0004a1db) copy_highlight_secondary_pane

0x2e6c,	// (0x0004a1e3) copy_highlight_title_pane

0x2e64,	// (0x0004a1db) graphic_text_digital_pane

0x3e1f,	// (0x0004b196) graphic_text_primary_pane

0x3e28,	// (0x0004b19f) graphic_text_primary_small_pane

0x2e5c,	// (0x0004a1d3) graphic_text_secondary_pane

0x2e4b,	// (0x0004a1c2) graphic_text_title_pane

0xb3db,	// (0x00052752) cursor_primary_pane_g1

0x3e11,	// (0x0004b188) cursor_text_primary_t1

0xc9f6,	// (0x00053d6d) cursor_primary_small_pane_g1

0x3e03,	// (0x0004b17a) cursor_text_primary_small_t1

0xc9ec,	// (0x00053d63) cursor_primary_small_pane_g1_copy1

0x3deb,	// (0x0004b162) cursor_text_primary_small_t1_copy1

0x3dc9,	// (0x0004b140) cursor_text_title_t1

0xc9e2,	// (0x00053d59) cursor_title_pane_g1

0xb3db,	// (0x00052752) cursor_digital_pane_g1

0x2e7e,	// (0x0004a1f5) cursor_text_digital_t1

0x2e8c,	// (0x0004a203) link_highlight_primary_pane_g1

0x3d72,	// (0x0004b0e9) link_highlight_primary_pane_t1

0x2e8c,	// (0x0004a203) link_highlight_primary_small_pane_g1

0x2e94,	// (0x0004a20b) link_highlight_primary_small_pane_t1

0x2ea3,	// (0x0004a21a) link_highlight_secondary_pane_g1

0x2eab,	// (0x0004a222) link_highlight_secondary_pane_t1

0x3ce6,	// (0x0004b05d) link_highlight_title_pane_g1

0x3cee,	// (0x0004b065) link_highlight_title_pane_t1

0x3ccf,	// (0x0004b046) link_highlight_digital_pane_g1

0x3cd7,	// (0x0004b04e) link_highlight_digital_pane_t1

0x3b97,	// (0x0004af0e) copy_highlight_primary_pane_g1

0x3bae,	// (0x0004af25) copy_highlight_primary_pane_t1

0x3b97,	// (0x0004af0e) copy_highlight_primary_small_pane_g1

0x3b9f,	// (0x0004af16) copy_highlight_primary_small_pane_t1

0x2eba,	// (0x0004a231) copy_highlight_secondary_pane_g1

0x2ec2,	// (0x0004a239) copy_highlight_secondary_pane_t1

0x3b80,	// (0x0004aef7) copy_highlight_title_pane_g1

0x3b88,	// (0x0004aeff) copy_highlight_title_pane_t1

0x3b97,	// (0x0004af0e) copy_highlight_digital_pane_g1

0x4e72,	// (0x0004c1e9) copy_highlight_digital_pane_t1

0x4dc6,	// (0x0004c13d) graphic_text_primary_pane_g1

0x4e56,	// (0x0004c1cd) graphic_text_primary_pane_t1

0x4e64,	// (0x0004c1db) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x00056d1e) graphic_text_primary_pane_t

0x4e32,	// (0x0004c1a9) graphic_text_primary_small_pane_g1

0x4e3a,	// (0x0004c1b1) graphic_text_primary_small_pane_t1

0x4e48,	// (0x0004c1bf) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x00056d19) graphic_text_primary_small_pane_t

0x4e0e,	// (0x0004c185) graphic_text_secondary_pane_g1

0x4e16,	// (0x0004c18d) graphic_text_secondary_pane_t1

0x4e24,	// (0x0004c19b) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x00056d14) graphic_text_secondary_pane_t

0x4dea,	// (0x0004c161) graphic_text_title_pane_g1

0x4df2,	// (0x0004c169) graphic_text_title_pane_t1

0x4e00,	// (0x0004c177) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x00056d0f) graphic_text_title_pane_t

0x4dc6,	// (0x0004c13d) graphic_text_digital_pane_g1

0x4dce,	// (0x0004c145) graphic_text_digital_pane_t1

0x4ddc,	// (0x0004c153) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x00056d0a) graphic_text_digital_pane_t

0x6fb8,	// (0x0004e32f) navi_icon_pane_srt_ParamLimits

0x6fb8,	// (0x0004e32f) navi_icon_pane_srt

0x6f6a,	// (0x0004e2e1) navi_midp_pane_srt

0x6f6a,	// (0x0004e2e1) navi_navi_pane_srt

0x6fb8,	// (0x0004e32f) navi_text_pane_srt_ParamLimits

0x6fb8,	// (0x0004e32f) navi_text_pane_srt

0x4d91,	// (0x0004c108) navi_navi_icon_text_pane_srt

0x4d99,	// (0x0004c110) navi_navi_pane_srt_g1_ParamLimits

0x4d99,	// (0x0004c110) navi_navi_pane_srt_g1

0x4dab,	// (0x0004c122) navi_navi_pane_srt_g2_ParamLimits

0x4dab,	// (0x0004c122) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x00056d05) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x00056d05) navi_navi_pane_srt_g

0x4dbd,	// (0x0004c134) navi_navi_tabs_pane_srt

0x4d91,	// (0x0004c108) navi_navi_text_pane_srt

0x4d91,	// (0x0004c108) navi_navi_volume_pane_srt

0x4d82,	// (0x0004c0f9) navi_navi_text_pane_srt_t1

0x13ea,	// (0x00048761) navi_navi_volume_pane_srt_g1

0x13f2,	// (0x00048769) volume_small_pane_srt_ParamLimits

0x13f2,	// (0x00048769) volume_small_pane_srt

0x0722,	// (0x00047a99) volume_small_pane_srt_g1_ParamLimits

0x0722,	// (0x00047a99) volume_small_pane_srt_g1

0x0732,	// (0x00047aa9) volume_small_pane_srt_g2_ParamLimits

0x0732,	// (0x00047aa9) volume_small_pane_srt_g2

0x0743,	// (0x00047aba) volume_small_pane_srt_g3_ParamLimits

0x0743,	// (0x00047aba) volume_small_pane_srt_g3

0x0754,	// (0x00047acb) volume_small_pane_srt_g4_ParamLimits

0x0754,	// (0x00047acb) volume_small_pane_srt_g4

0x0765,	// (0x00047adc) volume_small_pane_srt_g5_ParamLimits

0x0765,	// (0x00047adc) volume_small_pane_srt_g5

0x0776,	// (0x00047aed) volume_small_pane_srt_g6_ParamLimits

0x0776,	// (0x00047aed) volume_small_pane_srt_g6

0x0787,	// (0x00047afe) volume_small_pane_srt_g7_ParamLimits

0x0787,	// (0x00047afe) volume_small_pane_srt_g7

0x0798,	// (0x00047b0f) volume_small_pane_srt_g8_ParamLimits

0x0798,	// (0x00047b0f) volume_small_pane_srt_g8

0x07a9,	// (0x00047b20) volume_small_pane_srt_g9_ParamLimits

0x07a9,	// (0x00047b20) volume_small_pane_srt_g9

0x07ba,	// (0x00047b31) volume_small_pane_srt_g10_ParamLimits

0x07ba,	// (0x00047b31) volume_small_pane_srt_g10

0x0009,

0xf73b,	// (0x00056ab2) volume_small_pane_srt_g_ParamLimits

0xf73b,	// (0x00056ab2) volume_small_pane_srt_g

0xaad2,	// (0x00051e49) query_popup_data_pane_cp2

0x4d68,	// (0x0004c0df) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4d68,	// (0x0004c0df) navi_navi_icon_text_pane_srt_t1

0x3e1f,	// (0x0004b196) navi_tabs_2_long_pane_srt

0x3e1f,	// (0x0004b196) navi_tabs_2_pane_srt

0x3e1f,	// (0x0004b196) navi_tabs_3_long_pane_srt

0x3e1f,	// (0x0004b196) navi_tabs_3_pane_srt

0x3e1f,	// (0x0004b196) navi_tabs_4_pane_srt

0x13ca,	// (0x00048741) tabs_2_active_pane_srt_ParamLimits

0x13ca,	// (0x00048741) tabs_2_active_pane_srt

0x13da,	// (0x00048751) tabs_2_passive_pane_srt_ParamLimits

0x13da,	// (0x00048751) tabs_2_passive_pane_srt

0x35ed,	// (0x0004a964) bg_passive_tab_pane_cp1_srt_ParamLimits

0x35ed,	// (0x0004a964) bg_passive_tab_pane_cp1_srt

0x4d34,	// (0x0004c0ab) bg_passive_tab_pane_g1_cp1_srt

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp1_srt

0x4d3d,	// (0x0004c0b4) bg_passive_tab_pane_g3_cp1_srt

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp1_srt_ParamLimits

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp1_srt

0x4d46,	// (0x0004c0bd) tabs_2_active_pane_srt_g1

0xce3a,	// (0x000541b1) tabs_2_active_pane_srt_t1_ParamLimits

0xce3a,	// (0x000541b1) tabs_2_active_pane_srt_t1

0x4d34,	// (0x0004c0ab) bg_active_tab_pane_g1_cp1_srt

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp1_srt

0x4d3d,	// (0x0004c0b4) bg_active_tab_pane_g3_cp1_srt

0x1397,	// (0x0004870e) tabs_3_active_pane_srt_ParamLimits

0x1397,	// (0x0004870e) tabs_3_active_pane_srt

0x13a8,	// (0x0004871f) tabs_3_passive_pane_cp_srt_ParamLimits

0x13a8,	// (0x0004871f) tabs_3_passive_pane_cp_srt

0x13b9,	// (0x00048730) tabs_3_passive_pane_srt_ParamLimits

0x13b9,	// (0x00048730) tabs_3_passive_pane_srt

0x35ed,	// (0x0004a964) bg_passive_tab_pane_cp2_srt_ParamLimits

0x35ed,	// (0x0004a964) bg_passive_tab_pane_cp2_srt

0x2ed1,	// (0x0004a248) bg_passive_tab_pane_g1_cp2_srt

0x295f,	// (0x00049cd6) bg_passive_tab_pane_g2_cp2_srt

0x2eda,	// (0x0004a251) bg_passive_tab_pane_g3_cp2_srt

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp2_srt_ParamLimits

0x6ff4,	// (0x0004e36b) bg_active_tab_pane_cp2_srt

0x4d1a,	// (0x0004c091) tabs_3_active_pane_srt_g1

0xce24,	// (0x0005419b) tabs_3_active_pane_srt_t1_ParamLimits

0xce24,	// (0x0005419b) tabs_3_active_pane_srt_t1

0x2ed1,	// (0x0004a248) bg_active_tab_pane_g1_cp2_srt

0x295f,	// (0x00049cd6) bg_active_tab_pane_g2_cp2_srt

0x2eda,	// (0x0004a251) bg_active_tab_pane_g3_cp2_srt

0x134f,	// (0x000486c6) tabs_4_active_pane_srt_ParamLimits

0x134f,	// (0x000486c6) tabs_4_active_pane_srt

0x1361,	// (0x000486d8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1361,	// (0x000486d8) tabs_4_passive_pane_cp2_srt

0x090c,	// (0x00047c83) aid_size_cell_toolbar

0x4946,	// (0x0004bcbd) main_idle_act_pane_ParamLimits

0x0ae1,	// (0x00047e58) popup_large_graphic_colour_window_ParamLimits

0xbc05,	// (0x00052f7c) popup_toolbar_window_ParamLimits

0xbc05,	// (0x00052f7c) popup_toolbar_window

0x4b2f,	// (0x0004bea6) list_single_graphic_2heading_pane_ParamLimits

0x4b2f,	// (0x0004bea6) list_single_graphic_2heading_pane

0xe75c,	// (0x00055ad3) aid_size_cell_apps_grid_lsc_pane

0xe76e,	// (0x00055ae5) aid_size_cell_apps_grid_prt_pane

0x3049,	// (0x0004a3c0) bg_wml_button_pane_cp1_ParamLimits

0x3049,	// (0x0004a3c0) bg_wml_button_pane_cp1

0xc9a1,	// (0x00053d18) form_midp_field_text_pane_t1_ParamLimits

0x35ed,	// (0x0004a964) input_focus_pane_cp050_ParamLimits

0x3826,	// (0x0004ab9d) list_midp_form_text_pane_ParamLimits

0x37d8,	// (0x0004ab4f) input_focus_pane_cp051_ParamLimits

0x37ec,	// (0x0004ab63) list_midp_choice_pane_ParamLimits

0xc93a,	// (0x00053cb1) list_single_2graphic_pane_cp3_ParamLimits

0xc93a,	// (0x00053cb1) list_single_2graphic_pane_cp3

0xc94d,	// (0x00053cc4) list_single_midp_graphic_pane_ParamLimits

0xc94d,	// (0x00053cc4) list_single_midp_graphic_pane

0xed2b,	// (0x000560a2) list_single_graphic_2heading_pane_g1_ParamLimits

0xed2b,	// (0x000560a2) list_single_graphic_2heading_pane_g1

0xed37,	// (0x000560ae) list_single_graphic_2heading_pane_g4_ParamLimits

0xed37,	// (0x000560ae) list_single_graphic_2heading_pane_g4

0xed43,	// (0x000560ba) list_single_graphic_2heading_pane_g5_ParamLimits

0xed43,	// (0x000560ba) list_single_graphic_2heading_pane_g5

0x0002,

0xf78e,	// (0x00056b05) list_single_graphic_2heading_pane_g_ParamLimits

0xf78e,	// (0x00056b05) list_single_graphic_2heading_pane_g

0xed4f,	// (0x000560c6) list_single_graphic_2heading_pane_t1_ParamLimits

0xed4f,	// (0x000560c6) list_single_graphic_2heading_pane_t1

0xed63,	// (0x000560da) list_single_graphic_2heading_pane_t2_ParamLimits

0xed63,	// (0x000560da) list_single_graphic_2heading_pane_t2

0xed7f,	// (0x000560f6) list_single_graphic_2heading_pane_t3_ParamLimits

0xed7f,	// (0x000560f6) list_single_graphic_2heading_pane_t3

0x0002,

0xf795,	// (0x00056b0c) list_single_graphic_2heading_pane_t_ParamLimits

0xf795,	// (0x00056b0c) list_single_graphic_2heading_pane_t

0x34b7,	// (0x0004a82e) bg_popup_sub_pane_cp2

0x34e1,	// (0x0004a858) grid_toobar_pane

0x0f47,	// (0x000482be) cell_toolbar_pane_ParamLimits

0x0f47,	// (0x000482be) cell_toolbar_pane

0x351d,	// (0x0004a894) cell_toolbar_pane_g1_ParamLimits

0x351d,	// (0x0004a894) cell_toolbar_pane_g1

0x3531,	// (0x0004a8a8) cell_toolbar_pane_g2_ParamLimits

0x3531,	// (0x0004a8a8) cell_toolbar_pane_g2

0x0001,

0xf7a3,	// (0x00056b1a) cell_toolbar_pane_g_ParamLimits

0xf7a3,	// (0x00056b1a) cell_toolbar_pane_g

0x3553,	// (0x0004a8ca) grid_highlight_pane_cp2_ParamLimits

0x3553,	// (0x0004a8ca) grid_highlight_pane_cp2

0x356d,	// (0x0004a8e4) toolbar_button_pane

0x3579,	// (0x0004a8f0) toolbar_button_pane_g1

0x3581,	// (0x0004a8f8) toolbar_button_pane_g2

0x3589,	// (0x0004a900) toolbar_button_pane_g3

0x3591,	// (0x0004a908) toolbar_button_pane_g4

0x3599,	// (0x0004a910) toolbar_button_pane_g5

0x35a1,	// (0x0004a918) toolbar_button_pane_g6

0x35a9,	// (0x0004a920) toolbar_button_pane_g7

0x35b1,	// (0x0004a928) toolbar_button_pane_g8

0x35b9,	// (0x0004a930) toolbar_button_pane_g9

0x0009,

0xf7a8,	// (0x00056b1f) toolbar_button_pane_g

0x0f97,	// (0x0004830e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0f97,	// (0x0004830e) list_single_2graphic_pane_g1_cp3

0xbf71,	// (0x000532e8) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbf71,	// (0x000532e8) list_single_2graphic_pane_g2_cp3

0x2b35,	// (0x00049eac) list_single_2graphic_pane_g3_cp3

0x0fb4,	// (0x0004832b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0fb4,	// (0x0004832b) list_single_2graphic_pane_g4_cp3

0x0fc0,	// (0x00048337) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0fc0,	// (0x00048337) list_single_2graphic_pane_t1_cp3

0x26aa,	// (0x00049a21) list_single_midp_graphic_pane_g2_ParamLimits

0x26aa,	// (0x00049a21) list_single_midp_graphic_pane_g2

0xed13,	// (0x0005608a) aid_zoom_text_primary

0xed1b,	// (0x00056092) aid_zoom_text_secondary

0x2f8b,	// (0x0004a302) status_small_pane_g7_ParamLimits

0x2f8b,	// (0x0004a302) status_small_pane_g7

0x2fae,	// (0x0004a325) status_small_pane_t1_ParamLimits

0xa5b8,	// (0x0005192f) title_pane_g2

0x0003,

0xf527,	// (0x0005689e) title_pane_g

0xab82,	// (0x00051ef9) aid_size_cell_colour_1_pane_ParamLimits

0xab82,	// (0x00051ef9) aid_size_cell_colour_1_pane

0xab96,	// (0x00051f0d) aid_size_cell_colour_2_pane_ParamLimits

0xab96,	// (0x00051f0d) aid_size_cell_colour_2_pane

0xabaa,	// (0x00051f21) aid_size_cell_colour_3_pane_ParamLimits

0xabaa,	// (0x00051f21) aid_size_cell_colour_3_pane

0xabbe,	// (0x00051f35) aid_size_cell_colour_4_pane_ParamLimits

0xabbe,	// (0x00051f35) aid_size_cell_colour_4_pane

0x025a,	// (0x000475d1) title_pane_stacon_g1_ParamLimits

0x025a,	// (0x000475d1) title_pane_stacon_g1

0x3c05,	// (0x0004af7c) popup_note_wait_window_g3_ParamLimits

0x3c05,	// (0x0004af7c) popup_note_wait_window_g3

0x3c7c,	// (0x0004aff3) popup_note_wait_window_t5_ParamLimits

0x3c7c,	// (0x0004aff3) popup_note_wait_window_t5

0x6f6a,	// (0x0004e2e1) main_feb_china_hwr_fs_writing_pane

0xb596,	// (0x0005290d) popup_feb_china_hwr_fs_window_ParamLimits

0xb596,	// (0x0005290d) popup_feb_china_hwr_fs_window

0xbf82,	// (0x000532f9) aid_size_cell_hwr_fs_ParamLimits

0xbf82,	// (0x000532f9) aid_size_cell_hwr_fs

0x35ed,	// (0x0004a964) bg_popup_sub_pane_cp3_ParamLimits

0x35ed,	// (0x0004a964) bg_popup_sub_pane_cp3

0xbf97,	// (0x0005330e) grid_hwr_fs_pane_ParamLimits

0xbf97,	// (0x0005330e) grid_hwr_fs_pane

0x1036,	// (0x000483ad) linegrid_hwr_fs_pane_ParamLimits

0x1036,	// (0x000483ad) linegrid_hwr_fs_pane

0xbfaf,	// (0x00053326) cell_hwr_fs_pane_ParamLimits

0xbfaf,	// (0x00053326) cell_hwr_fs_pane

0x35f9,	// (0x0004a970) linegrid_hwr_fs_pane_g1_ParamLimits

0x35f9,	// (0x0004a970) linegrid_hwr_fs_pane_g1

0xc90e,	// (0x00053c85) linegrid_hwr_fs_pane_g2_ParamLimits

0xc90e,	// (0x00053c85) linegrid_hwr_fs_pane_g2

0x3617,	// (0x0004a98e) linegrid_hwr_fs_pane_g3_ParamLimits

0x3617,	// (0x0004a98e) linegrid_hwr_fs_pane_g3

0x106a,	// (0x000483e1) linegrid_hwr_fs_pane_g4_ParamLimits

0x106a,	// (0x000483e1) linegrid_hwr_fs_pane_g4

0x1088,	// (0x000483ff) linegrid_hwr_fs_pane_g5_ParamLimits

0x1088,	// (0x000483ff) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x00056b45) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x00056b45) linegrid_hwr_fs_pane_g

0x3623,	// (0x0004a99a) cell_hwr_fs_pane_g1_ParamLimits

0x3623,	// (0x0004a99a) cell_hwr_fs_pane_g1

0x33f4,	// (0x0004a76b) cell_hwr_fs_pane_g2_ParamLimits

0x33f4,	// (0x0004a76b) cell_hwr_fs_pane_g2

0xc920,	// (0x00053c97) cell_hwr_fs_pane_g3_ParamLimits

0xc920,	// (0x00053c97) cell_hwr_fs_pane_g3

0xc92d,	// (0x00053ca4) cell_hwr_fs_pane_g4_ParamLimits

0xc92d,	// (0x00053ca4) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x00056b50) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x00056b50) cell_hwr_fs_pane_g

0xbfd5,	// (0x0005334c) cell_hwr_fs_pane_t1

0x6f6a,	// (0x0004e2e1) grid_highlight_pane_cp6

0x6f6a,	// (0x0004e2e1) main_idle_act2_pane

0xe56b,	// (0x000558e2) aid_inside_area_popup_secondary

0xca16,	// (0x00053d8d) aid_inside_area_window_primary_ParamLimits

0xca16,	// (0x00053d8d) aid_inside_area_window_primary

0x4e81,	// (0x0004c1f8) ai2_news_ticker_pane

0x4e89,	// (0x0004c200) aid_size_cell_ai1_link_ParamLimits

0x4e89,	// (0x0004c200) aid_size_cell_ai1_link

0x4ea3,	// (0x0004c21a) popup_ai2_data_window_ParamLimits

0x4ea3,	// (0x0004c21a) popup_ai2_data_window

0x4ec1,	// (0x0004c238) popup_ai2_link_window_ParamLimits

0x4ec1,	// (0x0004c238) popup_ai2_link_window

0x35ed,	// (0x0004a964) bg_popup_sub_pane_cp4_ParamLimits

0x35ed,	// (0x0004a964) bg_popup_sub_pane_cp4

0x4ed7,	// (0x0004c24e) grid_ai2_link_pane_ParamLimits

0x4ed7,	// (0x0004c24e) grid_ai2_link_pane

0x4eee,	// (0x0004c265) popup_ai2_link_window_g1_ParamLimits

0x4eee,	// (0x0004c265) popup_ai2_link_window_g1

0x4efa,	// (0x0004c271) popup_ai2_link_window_g2_ParamLimits

0x4efa,	// (0x0004c271) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x00056d23) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x00056d23) popup_ai2_link_window_g

0x4f0b,	// (0x0004c282) ai2_mp_button_pane

0x4f13,	// (0x0004c28a) ai2_mp_volume_pane

0x37d8,	// (0x0004ab4f) bg_popup_sub_pane_cp5_ParamLimits

0x37d8,	// (0x0004ab4f) bg_popup_sub_pane_cp5

0x4f1b,	// (0x0004c292) heading_ai2_gene_pane_ParamLimits

0x4f1b,	// (0x0004c292) heading_ai2_gene_pane

0x4f27,	// (0x0004c29e) list_ai2_gene_pane_ParamLimits

0x4f27,	// (0x0004c29e) list_ai2_gene_pane

0x4f6f,	// (0x0004c2e6) cell_ai2_link_pane_ParamLimits

0x4f6f,	// (0x0004c2e6) cell_ai2_link_pane

0x4f85,	// (0x0004c2fc) cell_ai2_link_pane_g1

0x6f6a,	// (0x0004e2e1) grid_highlight_pane_cp7

0x1407,	// (0x0004877e) ai2_mp_volume_pane_g1

0x5058,	// (0x0004c3cf) ai2_mp_volume_pane_g2

0x4fcd,	// (0x0004c344) list_ai2_gene_pane_t1

0x5060,	// (0x0004c3d7) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x00056d3c) ai2_mp_volume_pane_g

0x140f,	// (0x00048786) volume_small_pane_cp3

0x5068,	// (0x0004c3df) aid_size_cell_ai2_button

0x5070,	// (0x0004c3e7) grid_ai2_button_pane

0x5079,	// (0x0004c3f0) cell_ai2_button_pane_ParamLimits

0x5079,	// (0x0004c3f0) cell_ai2_button_pane

0x6f60,	// (0x0004e2d7) cell_ai2_button_pane_g1

0x6f6a,	// (0x0004e2e1) grid_highlight_pane_cp8

0x5018,	// (0x0004c38f) ai2_gene_pane_t1_ParamLimits

0x5018,	// (0x0004c38f) ai2_gene_pane_t1

0xb512,	// (0x00052889) aid_height_parent_landscape

0xcbbd,	// (0x00053f34) aid_height_set_list

0x4946,	// (0x0004bcbd) aid_size_parent

0x4ca0,	// (0x0004c017) aid_size_cell_graphic_pane_ParamLimits

0x4f37,	// (0x0004c2ae) popup_ai2_data_window_g1_ParamLimits

0x4f37,	// (0x0004c2ae) popup_ai2_data_window_g1

0x4f43,	// (0x0004c2ba) ai2_news_ticker_pane_g1

0x4f4b,	// (0x0004c2c2) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x00056d28) ai2_news_ticker_pane_g

0x4f53,	// (0x0004c2ca) ai2_news_ticker_pane_t1

0x4f61,	// (0x0004c2d8) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x00056d2d) ai2_news_ticker_pane_t

0x4f8e,	// (0x0004c305) heading_ai2_gene_pane_g1

0x4f96,	// (0x0004c30d) heading_ai2_gene_pane_t1_ParamLimits

0x4f96,	// (0x0004c30d) heading_ai2_gene_pane_t1

0x4fab,	// (0x0004c322) list_highlight_pane_cp6

0x4fb3,	// (0x0004c32a) ai2_gene_pane_ParamLimits

0x4fb3,	// (0x0004c32a) ai2_gene_pane

0x4fdb,	// (0x0004c352) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x00056d32) list_ai2_gene_pane_t

0x4fe9,	// (0x0004c360) list_highlight_pane_cp8_ParamLimits

0x4fe9,	// (0x0004c360) list_highlight_pane_cp8

0x4ffa,	// (0x0004c371) ai2_gene_pane_g1_ParamLimits

0x4ffa,	// (0x0004c371) ai2_gene_pane_g1

0x500c,	// (0x0004c383) ai2_gene_pane_g2_ParamLimits

0x500c,	// (0x0004c383) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x00056d37) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x00056d37) ai2_gene_pane_g

0xaf03,	// (0x0005227a) scroll_pane_cp12

0xb4d1,	// (0x00052848) control_pane_t3_ParamLimits

0xb4d1,	// (0x00052848) control_pane_t3

0x2f9f,	// (0x0004a316) status_small_pane_g8_ParamLimits

0x2f9f,	// (0x0004a316) status_small_pane_g8

0xb638,	// (0x000529af) popup_find_window_ParamLimits

0xb8ef,	// (0x00052c66) popup_note_image_window_ParamLimits

0xec41,	// (0x00055fb8) list_double2_graphic_pane_vc_g1_ParamLimits

0xec41,	// (0x00055fb8) list_double2_graphic_pane_vc_g1

0x0f77,	// (0x000482ee) list_double2_graphic_pane_vc_g2_ParamLimits

0x0f77,	// (0x000482ee) list_double2_graphic_pane_vc_g2

0x0f83,	// (0x000482fa) list_double2_graphic_pane_vc_g3_ParamLimits

0x0f83,	// (0x000482fa) list_double2_graphic_pane_vc_g3

0x0002,

0xf79c,	// (0x00056b13) list_double2_graphic_pane_vc_g_ParamLimits

0xf79c,	// (0x00056b13) list_double2_graphic_pane_vc_g

0xed97,	// (0x0005610e) list_double2_graphic_pane_vc_t1_ParamLimits

0xed97,	// (0x0005610e) list_double2_graphic_pane_vc_t1

0x0f77,	// (0x000482ee) list_single_heading_pane_vc_g1_ParamLimits

0x0f77,	// (0x000482ee) list_single_heading_pane_vc_g1

0x0f83,	// (0x000482fa) list_single_heading_pane_vc_g2_ParamLimits

0x0f83,	// (0x000482fa) list_single_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00056922) list_single_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00056922) list_single_heading_pane_vc_g

0xedad,	// (0x00056124) list_single_heading_pane_vc_t1_ParamLimits

0xedad,	// (0x00056124) list_single_heading_pane_vc_t1

0xedc3,	// (0x0005613a) list_single_heading_pane_vc_t2_ParamLimits

0xedc3,	// (0x0005613a) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x00056b34) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x00056b34) list_single_heading_pane_vc_t

0x0ff1,	// (0x00048368) list_setting_number_pane_vc_g1_ParamLimits

0x0ff1,	// (0x00048368) list_setting_number_pane_vc_g1

0x0ffd,	// (0x00048374) list_setting_number_pane_vc_g2_ParamLimits

0x0ffd,	// (0x00048374) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x00056b39) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x00056b39) list_setting_number_pane_vc_g

0xedd5,	// (0x0005614c) list_setting_number_pane_vc_t1_ParamLimits

0xedd5,	// (0x0005614c) list_setting_number_pane_vc_t1

0xede9,	// (0x00056160) list_setting_number_pane_vc_t2_ParamLimits

0xede9,	// (0x00056160) list_setting_number_pane_vc_t2

0xee05,	// (0x0005617c) list_setting_number_pane_vc_t3_ParamLimits

0xee05,	// (0x0005617c) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x00056b3e) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x00056b3e) list_setting_number_pane_vc_t

0xee33,	// (0x000561aa) set_value_pane_vc_ParamLimits

0xee33,	// (0x000561aa) set_value_pane_vc

0x4b2f,	// (0x0004bea6) list_double2_graphic_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double2_graphic_pane_vc

0x4b2f,	// (0x0004bea6) list_double2_large_graphic_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double2_large_graphic_pane_vc

0x4b2f,	// (0x0004bea6) list_double2_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double2_pane_vc

0x4b2f,	// (0x0004bea6) list_double_graphic_heading_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double_graphic_heading_pane_vc

0x4b2f,	// (0x0004bea6) list_double_graphic_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double_graphic_pane_vc

0x4b2f,	// (0x0004bea6) list_double_heading_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double_heading_pane_vc

0x4b43,	// (0x0004beba) list_double_large_graphic_pane_vc_ParamLimits

0x4b43,	// (0x0004beba) list_double_large_graphic_pane_vc

0x4b2f,	// (0x0004bea6) list_double_number_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double_number_pane_vc

0x4b2f,	// (0x0004bea6) list_double_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double_pane_vc

0x4b2f,	// (0x0004bea6) list_double_time_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_double_time_pane_vc

0x4b2f,	// (0x0004bea6) list_setting_number_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_setting_number_pane_vc

0x4b2f,	// (0x0004bea6) list_setting_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_setting_pane_vc

0x4b2f,	// (0x0004bea6) list_single_graphic_heading_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_single_graphic_heading_pane_vc

0x4b2f,	// (0x0004bea6) list_single_heading_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_single_heading_pane_vc

0x4b2f,	// (0x0004bea6) list_single_number_heading_pane_vc_ParamLimits

0x4b2f,	// (0x0004bea6) list_single_number_heading_pane_vc

0xee7c,	// (0x000561f3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xee7c,	// (0x000561f3) list_double_graphic_heading_pane_vc_g1

0x0f77,	// (0x000482ee) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0f77,	// (0x000482ee) list_double_graphic_heading_pane_vc_g2

0x0f83,	// (0x000482fa) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0f83,	// (0x000482fa) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x00056d43) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x00056d43) list_double_graphic_heading_pane_vc_g

0xee88,	// (0x000561ff) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xee88,	// (0x000561ff) list_double_graphic_heading_pane_vc_t1

0xee9e,	// (0x00056215) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xee9e,	// (0x00056215) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x00056d4a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x00056d4a) list_double_graphic_heading_pane_vc_t

0x0ff1,	// (0x00048368) list_setting_pane_vc_g1_ParamLimits

0x0ff1,	// (0x00048368) list_setting_pane_vc_g1

0x0ffd,	// (0x00048374) list_setting_pane_vc_g2_ParamLimits

0x0ffd,	// (0x00048374) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x00056b39) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x00056b39) list_setting_pane_vc_g

0xeebc,	// (0x00056233) list_setting_pane_vc_t1_ParamLimits

0xeebc,	// (0x00056233) list_setting_pane_vc_t1

0xeed8,	// (0x0005624f) list_setting_pane_vc_t2_ParamLimits

0xeed8,	// (0x0005624f) list_setting_pane_vc_t2

0x0001,

0xfa16,	// (0x00056d8d) list_setting_pane_vc_t_ParamLimits

0xfa16,	// (0x00056d8d) list_setting_pane_vc_t

0xee33,	// (0x000561aa) set_value_pane_cp_vc_ParamLimits

0xee33,	// (0x000561aa) set_value_pane_cp_vc

0x0f77,	// (0x000482ee) list_single_number_heading_pane_vc_g1_ParamLimits

0x0f77,	// (0x000482ee) list_single_number_heading_pane_vc_g1

0x0f83,	// (0x000482fa) list_single_number_heading_pane_vc_g2_ParamLimits

0x0f83,	// (0x000482fa) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00056922) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00056922) list_single_number_heading_pane_vc_g

0xec19,	// (0x00055f90) list_single_number_heading_pane_vc_t1_ParamLimits

0xec19,	// (0x00055f90) list_single_number_heading_pane_vc_t1

0xeef4,	// (0x0005626b) list_single_number_heading_pane_vc_t2_ParamLimits

0xeef4,	// (0x0005626b) list_single_number_heading_pane_vc_t2

0xec2f,	// (0x00055fa6) list_single_number_heading_pane_vc_t3_ParamLimits

0xec2f,	// (0x00055fa6) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1b,	// (0x00056d92) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1b,	// (0x00056d92) list_single_number_heading_pane_vc_t

0xec41,	// (0x00055fb8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec41,	// (0x00055fb8) list_single_graphic_heading_pane_vc_g1

0x0f77,	// (0x000482ee) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0f77,	// (0x000482ee) list_single_graphic_heading_pane_vc_g4

0x0f83,	// (0x000482fa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0f83,	// (0x000482fa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79c,	// (0x00056b13) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79c,	// (0x00056b13) list_single_graphic_heading_pane_vc_g

0xec19,	// (0x00055f90) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xec19,	// (0x00055f90) list_single_graphic_heading_pane_vc_t1

0xef0a,	// (0x00056281) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef0a,	// (0x00056281) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa22,	// (0x00056d99) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x00056d99) list_single_graphic_heading_pane_vc_t

0x0f77,	// (0x000482ee) list_double2_pane_vc_g1_ParamLimits

0x0f77,	// (0x000482ee) list_double2_pane_vc_g1

0x0f83,	// (0x000482fa) list_double2_pane_vc_g2_ParamLimits

0x0f83,	// (0x000482fa) list_double2_pane_vc_g2

0x0001,

0xf5ab,	// (0x00056922) list_double2_pane_vc_g_ParamLimits

0xf5ab,	// (0x00056922) list_double2_pane_vc_g

0xee66,	// (0x000561dd) list_double2_pane_vc_t1_ParamLimits

0xee66,	// (0x000561dd) list_double2_pane_vc_t1

0x1418,	// (0x0004878f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1418,	// (0x0004878f) list_double2_large_graphic_pane_vc_g1

0x0f77,	// (0x000482ee) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0f77,	// (0x000482ee) list_double2_large_graphic_pane_vc_g2

0x0f83,	// (0x000482fa) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0f83,	// (0x000482fa) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c3,	// (0x0005693a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c3,	// (0x0005693a) list_double2_large_graphic_pane_vc_g

0xec4d,	// (0x00055fc4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xec4d,	// (0x00055fc4) list_double2_large_graphic_pane_vc_t1

0x1424,	// (0x0004879b) list_double_time_pane_vc_g1_ParamLimits

0x1424,	// (0x0004879b) list_double_time_pane_vc_g1

0x1430,	// (0x000487a7) list_double_time_pane_vc_g2_ParamLimits

0x1430,	// (0x000487a7) list_double_time_pane_vc_g2

0x0001,

0xfa27,	// (0x00056d9e) list_double_time_pane_vc_g_ParamLimits

0xfa27,	// (0x00056d9e) list_double_time_pane_vc_g

0xef1c,	// (0x00056293) list_double_time_pane_vc_t1_ParamLimits

0xef1c,	// (0x00056293) list_double_time_pane_vc_t1

0xef46,	// (0x000562bd) list_double_time_pane_vc_t2_ParamLimits

0xef46,	// (0x000562bd) list_double_time_pane_vc_t2

0xef8f,	// (0x00056306) list_double_time_pane_vc_t3_ParamLimits

0xef8f,	// (0x00056306) list_double_time_pane_vc_t3

0xefa1,	// (0x00056318) list_double_time_pane_vc_t4_ParamLimits

0xefa1,	// (0x00056318) list_double_time_pane_vc_t4

0x0003,

0xfa2c,	// (0x00056da3) list_double_time_pane_vc_t_ParamLimits

0xfa2c,	// (0x00056da3) list_double_time_pane_vc_t

0x0f77,	// (0x000482ee) list_double_pane_vc_g1_ParamLimits

0x0f77,	// (0x000482ee) list_double_pane_vc_g1

0x0f83,	// (0x000482fa) list_double_pane_vc_g2_ParamLimits

0x0f83,	// (0x000482fa) list_double_pane_vc_g2

0x0001,

0xf5ab,	// (0x00056922) list_double_pane_vc_g_ParamLimits

0xf5ab,	// (0x00056922) list_double_pane_vc_g

0xefb5,	// (0x0005632c) list_double_pane_vc_t1_ParamLimits

0xefb5,	// (0x0005632c) list_double_pane_vc_t1

0xefc9,	// (0x00056340) list_double_pane_vc_t2_ParamLimits

0xefc9,	// (0x00056340) list_double_pane_vc_t2

0x0001,

0xfa35,	// (0x00056dac) list_double_pane_vc_t_ParamLimits

0xfa35,	// (0x00056dac) list_double_pane_vc_t

0x0f77,	// (0x000482ee) list_double_number_pane_vc_g1_ParamLimits

0x0f77,	// (0x000482ee) list_double_number_pane_vc_g1

0x0f83,	// (0x000482fa) list_double_number_pane_vc_g2_ParamLimits

0x0f83,	// (0x000482fa) list_double_number_pane_vc_g2

0x0001,

0xf5ab,	// (0x00056922) list_double_number_pane_vc_g_ParamLimits

0xf5ab,	// (0x00056922) list_double_number_pane_vc_g

0xee54,	// (0x000561cb) list_double_number_pane_vc_t1_ParamLimits

0xee54,	// (0x000561cb) list_double_number_pane_vc_t1

0xefdf,	// (0x00056356) list_double_number_pane_vc_t2_ParamLimits

0xefdf,	// (0x00056356) list_double_number_pane_vc_t2

0xeff3,	// (0x0005636a) list_double_number_pane_vc_t3_ParamLimits

0xeff3,	// (0x0005636a) list_double_number_pane_vc_t3

0x0002,

0xfa3a,	// (0x00056db1) list_double_number_pane_vc_t_ParamLimits

0xfa3a,	// (0x00056db1) list_double_number_pane_vc_t

0x143c,	// (0x000487b3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x143c,	// (0x000487b3) list_double_large_graphic_pane_vc_g1

0x145e,	// (0x000487d5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x145e,	// (0x000487d5) list_double_large_graphic_pane_vc_g2

0x1472,	// (0x000487e9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1472,	// (0x000487e9) list_double_large_graphic_pane_vc_g3

0xf00b,	// (0x00056382) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf00b,	// (0x00056382) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa41,	// (0x00056db8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa41,	// (0x00056db8) list_double_large_graphic_pane_vc_g

0xf017,	// (0x0005638e) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf017,	// (0x0005638e) list_double_large_graphic_pane_vc_t1

0xf033,	// (0x000563aa) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf033,	// (0x000563aa) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4a,	// (0x00056dc1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4a,	// (0x00056dc1) list_double_large_graphic_pane_vc_t

0x0f77,	// (0x000482ee) list_double_heading_pane_vc_g1_ParamLimits

0x0f77,	// (0x000482ee) list_double_heading_pane_vc_g1

0x0f83,	// (0x000482fa) list_double_heading_pane_vc_g2_ParamLimits

0x0f83,	// (0x000482fa) list_double_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00056922) list_double_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00056922) list_double_heading_pane_vc_g

0xf053,	// (0x000563ca) list_double_heading_pane_vc_t1_ParamLimits

0xf053,	// (0x000563ca) list_double_heading_pane_vc_t1

0xf065,	// (0x000563dc) list_double_heading_pane_vc_t2_ParamLimits

0xf065,	// (0x000563dc) list_double_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x00056dc6) list_double_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x00056dc6) list_double_heading_pane_vc_t

0xf07d,	// (0x000563f4) list_double_graphic_pane_vc_g1_ParamLimits

0xf07d,	// (0x000563f4) list_double_graphic_pane_vc_g1

0x1481,	// (0x000487f8) list_double_graphic_pane_vc_g2_ParamLimits

0x1481,	// (0x000487f8) list_double_graphic_pane_vc_g2

0x0f77,	// (0x000482ee) list_double_graphic_pane_vc_g3_ParamLimits

0x0f77,	// (0x000482ee) list_double_graphic_pane_vc_g3

0x0003,

0xfa54,	// (0x00056dcb) list_double_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00056dcb) list_double_graphic_pane_vc_g

0xf089,	// (0x00056400) list_double_graphic_pane_vc_t1_ParamLimits

0xf089,	// (0x00056400) list_double_graphic_pane_vc_t1

0xf0b3,	// (0x0005642a) list_double_graphic_pane_vc_t2_ParamLimits

0xf0b3,	// (0x0005642a) list_double_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00056dd4) list_double_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00056dd4) list_double_graphic_pane_vc_t

0xf162,	// (0x000564d9) aid_size_cell_fastswap

0xa3d3,	// (0x0005174a) aid_size_cell_touch_ParamLimits

0xa3d3,	// (0x0005174a) aid_size_cell_touch

0xf32e,	// (0x000566a5) popup_fast_swap_wide_window_ParamLimits

0xf32e,	// (0x000566a5) popup_fast_swap_wide_window

0xa54f,	// (0x000518c6) touch_pane_ParamLimits

0xa54f,	// (0x000518c6) touch_pane

0xafa8,	// (0x0005231f) button_value_adjust_pane_cp2

0xe4a4,	// (0x0005581b) button_value_adjust_pane_cp4

0xe4ac,	// (0x00055823) form_field_data_pane_cp2

0xa034,	// (0x000513ab) form_field_data_wide_pane_cp2

0xe793,	// (0x00055b0a) bg_scroll_pane_ParamLimits

0x047c,	// (0x000477f3) scroll_handle_pane_ParamLimits

0x0490,	// (0x00047807) scroll_sc2_down_pane_ParamLimits

0x0490,	// (0x00047807) scroll_sc2_down_pane

0xe7c4,	// (0x00055b3b) scroll_sc2_up_pane_ParamLimits

0xe7c4,	// (0x00055b3b) scroll_sc2_up_pane

0xcf7c,	// (0x000542f3) grid_wheel_folder_pane_g1_ParamLimits

0xcf7c,	// (0x000542f3) grid_wheel_folder_pane_g1

0x06ba,	// (0x00047a31) clock_nsta_pane_cp2_ParamLimits

0x06ba,	// (0x00047a31) clock_nsta_pane_cp2

0xb325,	// (0x0005269c) listscroll_midp_pane_ParamLimits

0xb331,	// (0x000526a8) midp_canvas_pane

0x3019,	// (0x0004a390) nsta_clock_indic_pane

0x3055,	// (0x0004a3cc) listscroll_form_pane_vc

0x305d,	// (0x0004a3d4) listscroll_set_pane_vc_ParamLimits

0x305d,	// (0x0004a3d4) listscroll_set_pane_vc

0xbd69,	// (0x000530e0) clock_nsta_pane

0xbd93,	// (0x0005310a) indicator_nsta_pane

0x34b7,	// (0x0004a82e) bg_popup_sub_pane_cp2_ParamLimits

0x34cb,	// (0x0004a842) find_pane_cp2_ParamLimits

0x34cb,	// (0x0004a842) find_pane_cp2

0x34e1,	// (0x0004a858) grid_toobar_pane_ParamLimits

0x35c1,	// (0x0004a938) list_form_gen_pane_vc_ParamLimits

0x35c1,	// (0x0004a938) list_form_gen_pane_vc

0x35d7,	// (0x0004a94e) scroll_pane_cp8_vc_ParamLimits

0x35d7,	// (0x0004a94e) scroll_pane_cp8_vc

0x3653,	// (0x0004a9ca) data_form_wide_pane_vc_ParamLimits

0x3653,	// (0x0004a9ca) data_form_wide_pane_vc

0x365f,	// (0x0004a9d6) form_field_data_wide_pane_vc_g1

0x3667,	// (0x0004a9de) form_field_data_wide_pane_vc_t1_ParamLimits

0x3667,	// (0x0004a9de) form_field_data_wide_pane_vc_t1

0xafbc,	// (0x00052333) input_focus_pane_cp6_vc_ParamLimits

0xafbc,	// (0x00052333) input_focus_pane_cp6_vc

0x3983,	// (0x0004acfa) list_midp_pane_ParamLimits

0x4d0e,	// (0x0004c085) scroll_pane_cp16_ParamLimits

0x4d0e,	// (0x0004c085) scroll_pane_cp16

0x39d9,	// (0x0004ad50) button_value_adjust_pane_ParamLimits

0x39d9,	// (0x0004ad50) button_value_adjust_pane

0xcbce,	// (0x00053f45) button_value_adjust_pane_cp6_ParamLimits

0xcbce,	// (0x00053f45) button_value_adjust_pane_cp6

0xcd0a,	// (0x00054081) settings_code_pane_cp_ParamLimits

0xcd0a,	// (0x00054081) settings_code_pane_cp

0x6f60,	// (0x0004e2d7) cell_touch_pane_g1

0x6f60,	// (0x0004e2d7) cell_touch_pane_g2

0x0001,

0xf6e1,	// (0x00056a58) cell_touch_pane_g

0xce50,	// (0x000541c7) cell_touch_pane_cp_ParamLimits

0xce50,	// (0x000541c7) cell_touch_pane_cp

0xce6c,	// (0x000541e3) cell_touch_pane_ParamLimits

0xce6c,	// (0x000541e3) cell_touch_pane

0x6f60,	// (0x0004e2d7) scroll_sc2_down_pane_g1

0x6f60,	// (0x0004e2d7) scroll_sc2_up_pane_g1

0x6f6a,	// (0x0004e2e1) bg_set_opt_pane_cp4_vc

0x50ac,	// (0x0004c423) list_set_graphic_pane_vc_g1_ParamLimits

0x50ac,	// (0x0004c423) list_set_graphic_pane_vc_g1

0x50b8,	// (0x0004c42f) list_set_graphic_pane_vc_g2_ParamLimits

0x50b8,	// (0x0004c42f) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x00056d4f) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x00056d4f) list_set_graphic_pane_vc_g

0x50c4,	// (0x0004c43b) text_primary_small_cp13_vc_ParamLimits

0x50c4,	// (0x0004c43b) text_primary_small_cp13_vc

0x50dc,	// (0x0004c453) list_set_graphic_pane_vc_ParamLimits

0x50dc,	// (0x0004c453) list_set_graphic_pane_vc

0x6f6a,	// (0x0004e2e1) input_focus_pane_cp2_vc

0x6f60,	// (0x0004e2d7) setting_code_pane_vc_g1

0x6fcf,	// (0x0004e346) setting_code_pane_vc_t1

0x50ef,	// (0x0004c466) set_text_pane_vc_t1_ParamLimits

0x50ef,	// (0x0004c466) set_text_pane_vc_t1

0x6f6a,	// (0x0004e2e1) input_focus_pane_cp1_vc

0x5110,	// (0x0004c487) list_set_text_pane_vc

0x6f60,	// (0x0004e2d7) setting_text_pane_vc_g1

0x6f6a,	// (0x0004e2e1) bg_set_opt_pane_cp2_vc

0x6fc6,	// (0x0004e33d) setting_slider_graphic_pane_vc_g1

0x511a,	// (0x0004c491) setting_slider_graphic_pane_vc_t1

0x512c,	// (0x0004c4a3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x00056d54) setting_slider_graphic_pane_vc_t

0x513e,	// (0x0004c4b5) slider_set_pane_cp_vc

0x5148,	// (0x0004c4bf) slider_set_pane_vc_g1

0x5151,	// (0x0004c4c8) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x00056d59) slider_set_pane_vc_g

0xb014,	// (0x0005238b) set_opt_bg_pane_g1_copy1

0xb01c,	// (0x00052393) set_opt_bg_pane_g2_copy1

0x517d,	// (0x0004c4f4) set_opt_bg_pane_g3_copy1

0xb02c,	// (0x000523a3) set_opt_bg_pane_g4_copy1

0xb034,	// (0x000523ab) set_opt_bg_pane_g5_copy1

0xb03c,	// (0x000523b3) set_opt_bg_pane_g6_copy1

0x5187,	// (0x0004c4fe) set_opt_bg_pane_g7_copy1

0x5191,	// (0x0004c508) set_opt_bg_pane_g8_copy1

0x519b,	// (0x0004c512) set_opt_bg_pane_g9_copy1

0x6f6a,	// (0x0004e2e1) bg_set_opt_pane_cp_vc

0x51a5,	// (0x0004c51c) setting_slider_pane_vc_t1

0x51b4,	// (0x0004c52b) setting_slider_pane_vc_t2

0x51c6,	// (0x0004c53d) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x00056d68) setting_slider_pane_vc_t

0x51d8,	// (0x0004c54f) slider_set_pane_vc

0x10ac,	// (0x00048423) volume_set_pane_vc_g1

0x10b5,	// (0x0004842c) volume_set_pane_vc_g2

0x10be,	// (0x00048435) volume_set_pane_vc_g3

0x10c7,	// (0x0004843e) volume_set_pane_vc_g4

0x10d0,	// (0x00048447) volume_set_pane_vc_g5

0x10d9,	// (0x00048450) volume_set_pane_vc_g6

0x10e2,	// (0x00048459) volume_set_pane_vc_g7

0x10eb,	// (0x00048462) volume_set_pane_vc_g8

0x10f4,	// (0x0004846b) volume_set_pane_vc_g9

0x10fd,	// (0x00048474) volume_set_pane_vc_g10

0x0009,

0xf9f8,	// (0x00056d6f) volume_set_pane_vc_g

0x51e2,	// (0x0004c559) volume_set_pane_vc

0x51ec,	// (0x0004c563) button_value_adjust_pane_cp1_vc

0x51f6,	// (0x0004c56d) list_highlight_pane_cp2_vc

0x51ff,	// (0x0004c576) list_set_pane_vc_ParamLimits

0x51ff,	// (0x0004c576) list_set_pane_vc

0x526d,	// (0x0004c5e4) main_pane_set_vc_t1_ParamLimits

0x526d,	// (0x0004c5e4) main_pane_set_vc_t1

0x5282,	// (0x0004c5f9) main_pane_set_vc_t2_ParamLimits

0x5282,	// (0x0004c5f9) main_pane_set_vc_t2

0x5294,	// (0x0004c60b) main_pane_set_vc_t3_ParamLimits

0x5294,	// (0x0004c60b) main_pane_set_vc_t3

0x52a8,	// (0x0004c61f) main_pane_set_vc_t4_ParamLimits

0x52a8,	// (0x0004c61f) main_pane_set_vc_t4

0x0003,

0xfa0d,	// (0x00056d84) main_pane_set_vc_t_ParamLimits

0xfa0d,	// (0x00056d84) main_pane_set_vc_t

0x52bc,	// (0x0004c633) setting_code_pane_vc_ParamLimits

0x52bc,	// (0x0004c633) setting_code_pane_vc

0x52cd,	// (0x0004c644) setting_slider_graphic_pane_vc

0x52cd,	// (0x0004c644) setting_slider_pane_vc

0x52cd,	// (0x0004c644) setting_text_pane_vc

0x52cd,	// (0x0004c644) setting_volume_pane_vc

0x52d7,	// (0x0004c64e) scroll_pane_cp121_vc

0xaf96,	// (0x0005230d) set_content_pane_vc

0x52df,	// (0x0004c656) button_value_adjust_pane_g1

0x52e8,	// (0x0004c65f) button_value_adjust_pane_g2

0x0001,

0xfa62,	// (0x00056dd9) button_value_adjust_pane_g

0x52f1,	// (0x0004c668) form_field_slider_wide_pane_vc_t1_ParamLimits

0x52f1,	// (0x0004c668) form_field_slider_wide_pane_vc_t1

0x5303,	// (0x0004c67a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5303,	// (0x0004c67a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa67,	// (0x00056dde) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x00056dde) form_field_slider_wide_pane_vc_t

0x6ff4,	// (0x0004e36b) input_focus_pane_cp10_vc_ParamLimits

0x6ff4,	// (0x0004e36b) input_focus_pane_cp10_vc

0x532f,	// (0x0004c6a6) slider_cont_pane_cp1_vc_ParamLimits

0x532f,	// (0x0004c6a6) slider_cont_pane_cp1_vc

0x5341,	// (0x0004c6b8) slider_form_pane_g1_cp2

0x5151,	// (0x0004c4c8) slider_form_pane_g2_cp2

0x536e,	// (0x0004c6e5) form_field_slider_pane_vc_t3

0x537c,	// (0x0004c6f3) form_field_slider_pane_vc_t4

0x538a,	// (0x0004c701) slider_form_pane_vc_ParamLimits

0x538a,	// (0x0004c701) slider_form_pane_vc

0x5397,	// (0x0004c70e) form_field_slider_pane_vc_t1_ParamLimits

0x5397,	// (0x0004c70e) form_field_slider_pane_vc_t1

0x5303,	// (0x0004c67a) form_field_slider_pane_vc_t2_ParamLimits

0x5303,	// (0x0004c67a) form_field_slider_pane_vc_t2

0x0001,

0xfa79,	// (0x00056df0) form_field_slider_pane_vc_t_ParamLimits

0xfa79,	// (0x00056df0) form_field_slider_pane_vc_t

0x6ff4,	// (0x0004e36b) input_focus_pane_cp9_vc_ParamLimits

0x6ff4,	// (0x0004e36b) input_focus_pane_cp9_vc

0x53ad,	// (0x0004c724) slider_cont_pane_vc_ParamLimits

0x53ad,	// (0x0004c724) slider_cont_pane_vc

0x53c1,	// (0x0004c738) list_form_graphic_pane_cp_vc_ParamLimits

0x53c1,	// (0x0004c738) list_form_graphic_pane_cp_vc

0x365f,	// (0x0004a9d6) form_field_popup_wide_pane_vc_g1

0x53d6,	// (0x0004c74d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x53d6,	// (0x0004c74d) form_field_popup_wide_pane_vc_t1

0xafbc,	// (0x00052333) input_focus_pane_cp8_vc_ParamLimits

0xafbc,	// (0x00052333) input_focus_pane_cp8_vc

0x541b,	// (0x0004c792) list_form_wide_pane_vc_ParamLimits

0x541b,	// (0x0004c792) list_form_wide_pane_vc

0x5427,	// (0x0004c79e) list_form_graphic_pane_vc_g1

0x542f,	// (0x0004c7a6) list_form_graphic_pane_vc_t1_ParamLimits

0x542f,	// (0x0004c7a6) list_form_graphic_pane_vc_t1

0x6fb8,	// (0x0004e32f) list_highlight_pane_cp5_vc_ParamLimits

0x6fb8,	// (0x0004e32f) list_highlight_pane_cp5_vc

0x544b,	// (0x0004c7c2) list_form_graphic_pane_vc_ParamLimits

0x544b,	// (0x0004c7c2) list_form_graphic_pane_vc

0x365f,	// (0x0004a9d6) form_field_popup_pane_vc_g1

0x5461,	// (0x0004c7d8) form_field_popup_pane_vc_t1_ParamLimits

0x5461,	// (0x0004c7d8) form_field_popup_pane_vc_t1

0xafbc,	// (0x00052333) input_focus_pane_cp7_vc_ParamLimits

0xafbc,	// (0x00052333) input_focus_pane_cp7_vc

0x5478,	// (0x0004c7ef) list_form_pane_vc_ParamLimits

0x5478,	// (0x0004c7ef) list_form_pane_vc

0x5484,	// (0x0004c7fb) data_form_pane_vc_t1_ParamLimits

0x5484,	// (0x0004c7fb) data_form_pane_vc_t1

0xb014,	// (0x0005238b) input_focus_pane_vc_g1

0xb01c,	// (0x00052393) input_focus_pane_vc_g2

0xb024,	// (0x0005239b) input_focus_pane_vc_g3

0xb02c,	// (0x000523a3) input_focus_pane_vc_g4

0xb034,	// (0x000523ab) input_focus_pane_vc_g5

0xb03c,	// (0x000523b3) input_focus_pane_vc_g6

0xb044,	// (0x000523bb) input_focus_pane_vc_g7

0xb04c,	// (0x000523c3) input_focus_pane_vc_g8

0xb054,	// (0x000523cb) input_focus_pane_vc_g9

0x6f60,	// (0x0004e2d7) input_focus_pane_vc_g10

0x0009,

0xf66a,	// (0x000569e1) input_focus_pane_vc_g

0x3653,	// (0x0004a9ca) data_form_pane_vc_ParamLimits

0x3653,	// (0x0004a9ca) data_form_pane_vc

0x365f,	// (0x0004a9d6) form_field_data_pane_vc_g1

0x54a1,	// (0x0004c818) form_field_data_pane_vc_t1_ParamLimits

0x54a1,	// (0x0004c818) form_field_data_pane_vc_t1

0xafbc,	// (0x00052333) input_focus_pane_vc_ParamLimits

0xafbc,	// (0x00052333) input_focus_pane_vc

0x54bb,	// (0x0004c832) button_value_adjust_pane_cp3_vc

0x54c3,	// (0x0004c83a) button_value_adjust_pane_cp5_vc

0x54cb,	// (0x0004c842) form_field_data_pane_vc_ParamLimits

0x54cb,	// (0x0004c842) form_field_data_pane_vc

0x54e6,	// (0x0004c85d) form_field_data_pane_vc_cp2

0x54ee,	// (0x0004c865) form_field_data_wide_pane_vc_ParamLimits

0x54ee,	// (0x0004c865) form_field_data_wide_pane_vc

0x5508,	// (0x0004c87f) form_field_data_wide_pane_vc_cp2

0x5510,	// (0x0004c887) form_field_popup_pane_vc_ParamLimits

0x5510,	// (0x0004c887) form_field_popup_pane_vc

0x552b,	// (0x0004c8a2) form_field_popup_wide_pane_vc_ParamLimits

0x552b,	// (0x0004c8a2) form_field_popup_wide_pane_vc

0x5545,	// (0x0004c8bc) form_field_slider_pane_vc_ParamLimits

0x5545,	// (0x0004c8bc) form_field_slider_pane_vc

0x5558,	// (0x0004c8cf) form_field_slider_wide_pane_vc_ParamLimits

0x5558,	// (0x0004c8cf) form_field_slider_wide_pane_vc

0xce8a,	// (0x00054201) grid_touch_1_pane_ParamLimits

0xce8a,	// (0x00054201) grid_touch_1_pane

0xce9e,	// (0x00054215) grid_touch_2_pane_ParamLimits

0xce9e,	// (0x00054215) grid_touch_2_pane

0x563e,	// (0x0004c9b5) touch_pane_g1_ParamLimits

0x563e,	// (0x0004c9b5) touch_pane_g1

0x5591,	// (0x0004c908) cell_app_pane_cp_wide_ParamLimits

0x5591,	// (0x0004c908) cell_app_pane_cp_wide

0x55a2,	// (0x0004c919) grid_popup_fast_wide_pane_ParamLimits

0x55a2,	// (0x0004c919) grid_popup_fast_wide_pane

0x55b6,	// (0x0004c92d) scroll_pane_cp19_ParamLimits

0x55b6,	// (0x0004c92d) scroll_pane_cp19

0x6f6a,	// (0x0004e2e1) bg_popup_window_pane_cp20

0x55ca,	// (0x0004c941) listscroll_popup_fast_wide_pane

0xceca,	// (0x00054241) grid_indicator_nsta_pane

0x55e4,	// (0x0004c95b) clock_nsta_pane_g1

0x55ed,	// (0x0004c964) clock_nsta_pane_t1

0xced6,	// (0x0005424d) cell_indicator_nsta_pane_ParamLimits

0xced6,	// (0x0005424d) cell_indicator_nsta_pane

0x563e,	// (0x0004c9b5) cell_indicator_nsta_pane_g1

0xcef1,	// (0x00054268) cell_indicator_nsta_pane_g2

0x0001,

0xfa8a,	// (0x00056e01) cell_indicator_nsta_pane_g

0x565f,	// (0x0004c9d6) clock_nsta_pane_cp

0x5668,	// (0x0004c9df) indicator_nsta_pane_cp

0x5672,	// (0x0004c9e9) nsta_clock_indic_pane_g1

0xa764,	// (0x00051adb) grid_indicator_pane

0xe8b6,	// (0x00055c2d) scroll_pane_cp29

0x0609,	// (0x00047980) indicator_nsta_pane_cp2_ParamLimits

0x0609,	// (0x00047980) indicator_nsta_pane_cp2

0x6fb8,	// (0x0004e32f) main_apps_wheel_pane

0x3840,	// (0x0004abb7) form_midp_field_text_pane_ParamLimits

0x398f,	// (0x0004ad06) scroll_bar_cp050_ParamLimits

0x56cb,	// (0x0004ca42) cell_indicator_pane_ParamLimits

0x56cb,	// (0x0004ca42) cell_indicator_pane

0x56e3,	// (0x0004ca5a) cell_indicator_pane_g1

0xcefe,	// (0x00054275) grid_wheel_folder_pane_ParamLimits

0xcefe,	// (0x00054275) grid_wheel_folder_pane

0xcf0c,	// (0x00054283) list_wheel_apps_pane_ParamLimits

0xcf0c,	// (0x00054283) list_wheel_apps_pane

0xcf1a,	// (0x00054291) main_apps_wheel_pane_g1_ParamLimits

0xcf1a,	// (0x00054291) main_apps_wheel_pane_g1

0xcf2a,	// (0x000542a1) main_apps_wheel_pane_g2_ParamLimits

0xcf2a,	// (0x000542a1) main_apps_wheel_pane_g2

0x0001,

0xfaa6,	// (0x00056e1d) main_apps_wheel_pane_g_ParamLimits

0xfaa6,	// (0x00056e1d) main_apps_wheel_pane_g

0xcf3a,	// (0x000542b1) main_apps_wheel_pane_t1_ParamLimits

0xcf3a,	// (0x000542b1) main_apps_wheel_pane_t1

0xcf52,	// (0x000542c9) list_wheel_apps_pane_g1

0xcf5a,	// (0x000542d1) list_wheel_apps_pane_g2

0xcf62,	// (0x000542d9) list_wheel_apps_pane_g3

0xcf6a,	// (0x000542e1) list_wheel_apps_pane_g4

0xcf72,	// (0x000542e9) list_wheel_apps_pane_g5

0x0004,

0xfaab,	// (0x00056e22) list_wheel_apps_pane_g

0x2b87,	// (0x00049efe) navi_icon_text_pane

0xbc5d,	// (0x00052fd4) aid_fill_nsta

0xcf8d,	// (0x00054304) navi_icon_text_pane_g1

0xcf99,	// (0x00054310) navi_icon_text_pane_t1

0x2a29,	// (0x00049da0) list_set_graphic_pane_t1_ParamLimits

0x2a29,	// (0x00049da0) list_set_graphic_pane_t1

0x40fc,	// (0x0004b473) popup_midp_note_alarm_window_t6_ParamLimits

0x40fc,	// (0x0004b473) popup_midp_note_alarm_window_t6

0x410e,	// (0x0004b485) popup_midp_note_alarm_window_t7_ParamLimits

0x410e,	// (0x0004b485) popup_midp_note_alarm_window_t7

0x4120,	// (0x0004b497) popup_midp_note_alarm_window_t8_ParamLimits

0x4120,	// (0x0004b497) popup_midp_note_alarm_window_t8

0x4132,	// (0x0004b4a9) popup_midp_note_alarm_window_t9_ParamLimits

0x4132,	// (0x0004b4a9) popup_midp_note_alarm_window_t9

0x4144,	// (0x0004b4bb) popup_midp_note_alarm_window_t10_ParamLimits

0x4144,	// (0x0004b4bb) popup_midp_note_alarm_window_t10

0x4156,	// (0x0004b4cd) popup_midp_note_alarm_window_t11_ParamLimits

0x4156,	// (0x0004b4cd) popup_midp_note_alarm_window_t11

0x4168,	// (0x0004b4df) scroll_pane_cp17_ParamLimits

0x4168,	// (0x0004b4df) scroll_pane_cp17

0x10ac,	// (0x00048423) volume_small_pane_cp_g1

0x149e,	// (0x00048815) volume_small_pane_cp_g2

0x14a7,	// (0x0004881e) volume_small_pane_cp_g3

0x14b0,	// (0x00048827) volume_small_pane_cp_g4

0x14b9,	// (0x00048830) volume_small_pane_cp_g5

0x14c2,	// (0x00048839) volume_small_pane_cp_g6

0x14cb,	// (0x00048842) volume_small_pane_cp_g7

0x14d4,	// (0x0004884b) volume_small_pane_cp_g8

0x14dd,	// (0x00048854) volume_small_pane_cp_g9

0x14e6,	// (0x0004885d) volume_small_pane_cp_g10

0x2df8,	// (0x0004a16f) midp_ticker_pane_g1_ParamLimits

0x2e04,	// (0x0004a17b) midp_ticker_pane_g2_ParamLimits

0xf736,	// (0x00056aad) midp_ticker_pane_g_ParamLimits

0xb3c9,	// (0x00052740) midp_ticker_pane_t1_ParamLimits

0xbc81,	// (0x00052ff8) aid_fill_nsta_2

0x397b,	// (0x0004acf2) list_form2_midp_pane

0x4ae7,	// (0x0004be5e) midp_editing_number_pane_ParamLimits

0x4af6,	// (0x0004be6d) midp_ticker_pane_ParamLimits

0x57d6,	// (0x0004cb4d) form2_midp_field_pane

0x57fa,	// (0x0004cb71) scroll_pane_cp51

0x581a,	// (0x0004cb91) form2_midp_button_pane_ParamLimits

0x581a,	// (0x0004cb91) form2_midp_button_pane

0x582c,	// (0x0004cba3) form2_midp_content_pane_ParamLimits

0x582c,	// (0x0004cba3) form2_midp_content_pane

0x5846,	// (0x0004cbbd) form2_midp_field_choice_group_pane

0x584e,	// (0x0004cbc5) form2_midp_field_pane_g1

0x5856,	// (0x0004cbcd) form2_midp_field_pane_g2

0x585e,	// (0x0004cbd5) form2_midp_field_pane_g3

0x5866,	// (0x0004cbdd) form2_midp_field_pane_g4

0x0003,

0xfad0,	// (0x00056e47) form2_midp_field_pane_g

0x586e,	// (0x0004cbe5) form2_midp_gauge_slider_pane

0x5876,	// (0x0004cbed) form2_midp_gauge_wait_pane

0x587e,	// (0x0004cbf5) form2_midp_image_pane_ParamLimits

0x587e,	// (0x0004cbf5) form2_midp_image_pane

0x5899,	// (0x0004cc10) form2_midp_label_pane_ParamLimits

0x5899,	// (0x0004cc10) form2_midp_label_pane

0xcfc7,	// (0x0005433e) form2_midp_label_pane_cp_ParamLimits

0xcfc7,	// (0x0005433e) form2_midp_label_pane_cp

0x58d9,	// (0x0004cc50) form2_midp_string_pane_ParamLimits

0x58d9,	// (0x0004cc50) form2_midp_string_pane

0xa227,	// (0x0005159e) form2_midp_text_pane_ParamLimits

0xa227,	// (0x0005159e) form2_midp_text_pane

0x58eb,	// (0x0004cc62) form2_midp_time_pane

0x58fb,	// (0x0004cc72) input_focus_pane_cp51_ParamLimits

0x58fb,	// (0x0004cc72) input_focus_pane_cp51

0x5913,	// (0x0004cc8a) form2_midp_label_pane_t1_ParamLimits

0x5913,	// (0x0004cc8a) form2_midp_label_pane_t1

0xa24a,	// (0x000515c1) form2_mdip_text_pane_t1_ParamLimits

0xa24a,	// (0x000515c1) form2_mdip_text_pane_t1

0xf0d6,	// (0x0005644d) form2_midp_time_pane_t1

0x5961,	// (0x0004ccd8) form2_midp_gauge_slider_pane_t1

0xcfe8,	// (0x0005435f) form2_midp_gauge_slider_pane_t2

0xcffa,	// (0x00054371) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad9,	// (0x00056e50) form2_midp_gauge_slider_pane_t

0x5997,	// (0x0004cd0e) form2_midp_slider_pane

0x59a3,	// (0x0004cd1a) form2_midp_gauge_wait_pane_t1

0x59b1,	// (0x0004cd28) form2_midp_wait_pane_ParamLimits

0x59b1,	// (0x0004cd28) form2_midp_wait_pane

0x36a6,	// (0x0004aa1d) list_single_2graphic_pane_cp4_ParamLimits

0x36a6,	// (0x0004aa1d) list_single_2graphic_pane_cp4

0xc94d,	// (0x00053cc4) list_single_midp_graphic_pane_cp_ParamLimits

0xc94d,	// (0x00053cc4) list_single_midp_graphic_pane_cp

0x6f6a,	// (0x0004e2e1) list_highlight_pane_cp20

0x59f5,	// (0x0004cd6c) list_single_2graphic_pane_g1_cp4

0x4f8e,	// (0x0004c305) list_single_2graphic_pane_g2_cp4

0x59fd,	// (0x0004cd74) list_single_2graphic_pane_t1_cp4

0x6fb8,	// (0x0004e32f) list_highlight_pane_cp21

0x5a0c,	// (0x0004cd83) list_single_midp_graphic_pane_g4_cp

0x5a1b,	// (0x0004cd92) list_single_midp_graphic_pane_t1_cp

0xd00c,	// (0x00054383) form2_mdip_string_pane_t1_ParamLimits

0xd00c,	// (0x00054383) form2_mdip_string_pane_t1

0x6f6a,	// (0x0004e2e1) bg_wml_button_pane_cp2

0x6f60,	// (0x0004e2d7) form2_midp_image_pane_g1

0x0149,	// (0x000474c0) list_double_large_graphic_pane_g5_ParamLimits

0x0149,	// (0x000474c0) list_double_large_graphic_pane_g5

0xb325,	// (0x0005269c) midp_form_pane_ParamLimits

0x6fb8,	// (0x0004e32f) main_apps_wheel_pane_ParamLimits

0xb975,	// (0x00052cec) popup_preview_window_ParamLimits

0xb975,	// (0x00052cec) popup_preview_window

0x0ee0,	// (0x00048257) popup_touch_info_window_ParamLimits

0x0ee0,	// (0x00048257) popup_touch_info_window

0x0f02,	// (0x00048279) popup_touch_menu_window_ParamLimits

0x0f02,	// (0x00048279) popup_touch_menu_window

0x6f56,	// (0x0004e2cd) bg_popup_sub_pane_cp6

0x5acc,	// (0x0004ce43) list_touch_menu_pane

0x5ad4,	// (0x0004ce4b) list_single_touch_menu_pane_ParamLimits

0x5ad4,	// (0x0004ce4b) list_single_touch_menu_pane

0x5aec,	// (0x0004ce63) list_single_touch_menu_pane_t1

0x6fb8,	// (0x0004e32f) bg_popup_sub_pane_cp7_ParamLimits

0x6fb8,	// (0x0004e32f) bg_popup_sub_pane_cp7

0x39af,	// (0x0004ad26) heading_sub_pane

0x5afa,	// (0x0004ce71) list_touch_info_pane_ParamLimits

0x5afa,	// (0x0004ce71) list_touch_info_pane

0x5b0a,	// (0x0004ce81) list_single_touch_info_pane_ParamLimits

0x5b0a,	// (0x0004ce81) list_single_touch_info_pane

0x5b1c,	// (0x0004ce93) list_single_touch_info_pane_t1

0x5b2a,	// (0x0004cea1) list_single_touch_info_pane_t2

0x0001,

0xfae7,	// (0x00056e5e) list_single_touch_info_pane_t

0x2d1a,	// (0x0004a091) bg_popup_heading_pane_cp

0x5b38,	// (0x0004ceaf) heading_sub_pane_t1

0x35ed,	// (0x0004a964) bg_popup_preview_window_pane_cp_ParamLimits

0x35ed,	// (0x0004a964) bg_popup_preview_window_pane_cp

0x39af,	// (0x0004ad26) heading_preview_pane

0x5afa,	// (0x0004ce71) list_preview_pane_ParamLimits

0x5afa,	// (0x0004ce71) list_preview_pane

0x5b46,	// (0x0004cebd) popup_preview_window_g1

0x5b0a,	// (0x0004ce81) list_single_preview_pane_ParamLimits

0x5b0a,	// (0x0004ce81) list_single_preview_pane

0x5b4e,	// (0x0004cec5) list_single_preview_pane_g1

0x5b56,	// (0x0004cecd) list_single_preview_pane_t1

0x5b1c,	// (0x0004ce93) list_single_preview_pane_t2

0x0001,

0xfaec,	// (0x00056e63) list_single_preview_pane_t

0x5b64,	// (0x0004cedb) bg_popup_heading_pane_cp2_ParamLimits

0x5b64,	// (0x0004cedb) bg_popup_heading_pane_cp2

0x5b7a,	// (0x0004cef1) heading_preview_pane_g1

0x5b82,	// (0x0004cef9) heading_preview_pane_t1_ParamLimits

0x5b82,	// (0x0004cef9) heading_preview_pane_t1

0xa794,	// (0x00051b0b) soft_indicator_pane_t1_ParamLimits

0xaee0,	// (0x00052257) scroll_pane_ParamLimits

0xe7b2,	// (0x00055b29) scroll_sc2_left_pane

0xe7bb,	// (0x00055b32) scroll_sc2_right_pane

0xe7da,	// (0x00055b51) scroll_bg_pane_g1_ParamLimits

0xe7ef,	// (0x00055b66) scroll_bg_pane_g2_ParamLimits

0xe807,	// (0x00055b7e) scroll_bg_pane_g3_ParamLimits

0xf6c1,	// (0x00056a38) scroll_bg_pane_g_ParamLimits

0xe7da,	// (0x00055b51) scroll_handle_pane_g1_ParamLimits

0xe829,	// (0x00055ba0) scroll_handle_pane_g2_ParamLimits

0xe807,	// (0x00055b7e) scroll_handle_pane_g3_ParamLimits

0xf6c8,	// (0x00056a3f) scroll_handle_pane_g_ParamLimits

0x093e,	// (0x00047cb5) popup_choice_list_window_ParamLimits

0x093e,	// (0x00047cb5) popup_choice_list_window

0x34c3,	// (0x0004a83a) choice_list_pane

0x3545,	// (0x0004a8bc) cell_toolbar_pane_t1

0x356d,	// (0x0004a8e4) toolbar_button_pane_ParamLimits

0x4632,	// (0x0004b9a9) ai_gene_pane_1_t2_ParamLimits

0x4632,	// (0x0004b9a9) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x00056c62) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x00056c62) ai_gene_pane_1_t

0x5b9f,	// (0x0004cf16) scroll_sc2_left_pane_g1

0x5b9f,	// (0x0004cf16) scroll_sc2_right_pane_g1

0x3049,	// (0x0004a3c0) bg_popup_sub_pane_cp10

0x5ba9,	// (0x0004cf20) list_choice_list_pane

0x5bc2,	// (0x0004cf39) list_single_choice_list_pane_ParamLimits

0x5bc2,	// (0x0004cf39) list_single_choice_list_pane

0x5bda,	// (0x0004cf51) list_single_choice_list_pane_g1

0xe5a9,	// (0x00055920) list_single_choice_list_pane_t1_ParamLimits

0xe5a9,	// (0x00055920) list_single_choice_list_pane_t1

0x5be2,	// (0x0004cf59) choice_list_pane_g1

0x5bea,	// (0x0004cf61) choice_list_pane_t1

0x6f56,	// (0x0004e2cd) input_focus_pane_cp11

0xe727,	// (0x00055a9e) title_pane_stacon_g2_ParamLimits

0xe727,	// (0x00055a9e) title_pane_stacon_g2

0x0002,

0xf6a7,	// (0x00056a1e) title_pane_stacon_g_ParamLimits

0xf6a7,	// (0x00056a1e) title_pane_stacon_g

0x2d1a,	// (0x0004a091) cursor_press_pane

0xb5ec,	// (0x00052963) popup_fep_hwr_window_ParamLimits

0xb5ec,	// (0x00052963) popup_fep_hwr_window

0x0a82,	// (0x00047df9) popup_fep_vkb_window_ParamLimits

0x0a82,	// (0x00047df9) popup_fep_vkb_window

0x5bf8,	// (0x0004cf6f) cursor_press_pane_g1

0x0002,

0xfb15,	// (0x00056e8c) fep_vkb_side_pane_g_ParamLimits

0x1528,	// (0x0004889f) fep_hwr_candidate_pane_ParamLimits

0x1528,	// (0x0004889f) fep_hwr_candidate_pane

0x1552,	// (0x000488c9) fep_hwr_side_pane_ParamLimits

0x1552,	// (0x000488c9) fep_hwr_side_pane

0x1574,	// (0x000488eb) fep_hwr_top_pane_ParamLimits

0x1574,	// (0x000488eb) fep_hwr_top_pane

0x158c,	// (0x00048903) fep_hwr_write_pane_ParamLimits

0x158c,	// (0x00048903) fep_hwr_write_pane

0xfb15,	// (0x00056e8c) fep_vkb_side_pane_g

0x5c00,	// (0x0004cf77) fep_hwr_top_pane_g1

0x5c12,	// (0x0004cf89) fep_hwr_top_pane_g2

0x15b8,	// (0x0004892f) fep_hwr_top_pane_g3

0x0002,

0xfaf1,	// (0x00056e68) fep_hwr_top_pane_g

0x15cd,	// (0x00048944) fep_hwr_top_text_pane

0x26ed,	// (0x00049a64) fep_hwr_top_text_pane_g1

0x5c48,	// (0x0004cfbf) fep_hwr_top_text_pane_t1

0x16d7,	// (0x00048a4e) fep_hwr_candidate_pane_g1

0x5e93,	// (0x0004d20a) fep_vkb_keypad_pane_g3_ParamLimits

0x5e93,	// (0x0004d20a) fep_vkb_keypad_pane_g3

0x5ebf,	// (0x0004d236) fep_vkb_keypad_pane_g4_ParamLimits

0x5ebf,	// (0x0004d236) fep_vkb_keypad_pane_g4

0x5f36,	// (0x0004d2ad) fep_vkb_bottom_pane_g2_ParamLimits

0x5f36,	// (0x0004d2ad) fep_vkb_bottom_pane_g2

0x0001,

0xfb1c,	// (0x00056e93) fep_vkb_bottom_pane_g_ParamLimits

0xfb1c,	// (0x00056e93) fep_vkb_bottom_pane_g

0x5b9f,	// (0x0004cf16) cell_vkb_side_pane_g2

0x0001,

0xfb26,	// (0x00056e9d) cell_vkb_side_pane_g

0x5fc1,	// (0x0004d338) cell_vkb_side_pane_t1

0x5fcf,	// (0x0004d346) cell_vkb_side_pane_t1_copy1

0x5b9f,	// (0x0004cf16) bg_fep_vkb_candidate_pane_g2

0x6113,	// (0x0004d48a) cell_vkb_candidate_pane_ParamLimits

0x5c56,	// (0x0004cfcd) aid_size_cell_vkb_ParamLimits

0x5c56,	// (0x0004cfcd) aid_size_cell_vkb

0x6113,	// (0x0004d48a) cell_vkb_candidate_pane

0x16f1,	// (0x00048a68) bg_popup_fep_shadow_pane_g1

0xd0ca,	// (0x00054441) fep_vkb_bottom_pane_ParamLimits

0xd0ca,	// (0x00054441) fep_vkb_bottom_pane

0x5d25,	// (0x0004d09c) fep_vkb_candidate_pane_ParamLimits

0x5d25,	// (0x0004d09c) fep_vkb_candidate_pane

0xd0f6,	// (0x0005446d) fep_vkb_keypad_pane_ParamLimits

0xd0f6,	// (0x0005446d) fep_vkb_keypad_pane

0xd11d,	// (0x00054494) fep_vkb_side_pane_ParamLimits

0xd11d,	// (0x00054494) fep_vkb_side_pane

0xd159,	// (0x000544d0) fep_vkb_top_pane_ParamLimits

0xd159,	// (0x000544d0) fep_vkb_top_pane

0x5dec,	// (0x0004d163) fep_vkb_top_pane_g1_ParamLimits

0x5dec,	// (0x0004d163) fep_vkb_top_pane_g1

0x5dfb,	// (0x0004d172) fep_vkb_top_pane_g2_ParamLimits

0x5dfb,	// (0x0004d172) fep_vkb_top_pane_g2

0x5e0a,	// (0x0004d181) fep_vkb_top_pane_g3_ParamLimits

0x5e0a,	// (0x0004d181) fep_vkb_top_pane_g3

0x0003,

0xfb0c,	// (0x00056e83) fep_vkb_top_pane_g_ParamLimits

0xfb0c,	// (0x00056e83) fep_vkb_top_pane_g

0x5e28,	// (0x0004d19f) fep_vkb_top_text_pane_ParamLimits

0x5e28,	// (0x0004d19f) fep_vkb_top_text_pane

0xd195,	// (0x0005450c) fep_vkb_side_pane_g1_ParamLimits

0xd195,	// (0x0005450c) fep_vkb_side_pane_g1

0x5e82,	// (0x0004d1f9) grid_vkb_side_pane_ParamLimits

0x5e82,	// (0x0004d1f9) grid_vkb_side_pane

0x16f9,	// (0x00048a70) bg_popup_fep_shadow_pane_g2

0x1702,	// (0x00048a79) bg_popup_fep_shadow_pane_g3

0x170a,	// (0x00048a81) bg_popup_fep_shadow_pane_g4

0x1713,	// (0x00048a8a) bg_popup_fep_shadow_pane_g5

0x171d,	// (0x00048a94) bg_popup_fep_shadow_pane_g6

0x1725,	// (0x00048a9c) bg_popup_fep_shadow_pane_g7

0xb034,	// (0x000523ab) bg_popup_fep_shadow_pane_g8

0x5ee1,	// (0x0004d258) grid_vkb_keypad_number_pane_ParamLimits

0x5ee1,	// (0x0004d258) grid_vkb_keypad_number_pane

0x5ef5,	// (0x0004d26c) grid_vkb_keypad_pane_ParamLimits

0x5ef5,	// (0x0004d26c) grid_vkb_keypad_pane

0x5f1b,	// (0x0004d292) fep_vkb_bottom_pane_g1_ParamLimits

0x5f1b,	// (0x0004d292) fep_vkb_bottom_pane_g1

0x5f44,	// (0x0004d2bb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5f44,	// (0x0004d2bb) grid_vkb_keypad_bottom_left_pane

0x5f59,	// (0x0004d2d0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5f59,	// (0x0004d2d0) grid_vkb_keypad_bottom_right_pane

0x5f6e,	// (0x0004d2e5) fep_vkb_top_text_pane_g1

0xd1dc,	// (0x00054553) fep_vkb_top_text_pane_t1

0xd1ee,	// (0x00054565) cell_vkb_side_pane_ParamLimits

0xd1ee,	// (0x00054565) cell_vkb_side_pane

0x5b9f,	// (0x0004cf16) cell_vkb_side_pane_g1

0x5fdd,	// (0x0004d354) cell_vkb_keypad_pane_ParamLimits

0x5fdd,	// (0x0004d354) cell_vkb_keypad_pane

0x606a,	// (0x0004d3e1) cell_vkb_keypad_pane_g1

0x0008,

0xfb39,	// (0x00056eb0) bg_popup_fep_shadow_pane_g

0x5b9f,	// (0x0004cf16) cell_hwr_side_pane_g1

0x5b9f,	// (0x0004cf16) cell_hwr_side_pane_g2

0x6074,	// (0x0004d3eb) cell_vkb_keypad_pane_t1

0xd204,	// (0x0005457b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd204,	// (0x0005457b) cell_vkb_keypad_bottom_left_pane

0xd219,	// (0x00054590) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd219,	// (0x00054590) cell_vkb_keypad_bottom_right_pane

0x5b9f,	// (0x0004cf16) cell_vkb_keypad_bottom_left_pane_g1

0x5b9f,	// (0x0004cf16) cell_vkb_keypad_bottom_right_pane_g1

0x60d8,	// (0x0004d44f) cell_vkb_keypad_number_pane_ParamLimits

0x60d8,	// (0x0004d44f) cell_vkb_keypad_number_pane

0x60f7,	// (0x0004d46e) cell_vkb_keypad_number_pane_g1

0x6101,	// (0x0004d478) cell_vkb_keypad_number_pane_g2

0x610a,	// (0x0004d481) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2b,	// (0x00056ea2) cell_vkb_keypad_number_pane_g

0x6074,	// (0x0004d3eb) cell_vkb_keypad_number_pane_t1

0x6134,	// (0x0004d4ab) fep_vkb_candidate_pane_g1

0x0001,

0xfb26,	// (0x00056e9d) cell_hwr_side_pane_g

0x614d,	// (0x0004d4c4) cell_hwr_side_pane_t1

0x1737,	// (0x00048aae) cell_hwr_side_pane_t1_copy1

0x5e1a,	// (0x0004d191) cell_hwr_candidate_pane_g1

0x1745,	// (0x00048abc) cell_hwr_candidate_pane_t1

0x5b9f,	// (0x0004cf16) cell_vkb_candidate_pane_g2

0x61d3,	// (0x0004d54a) cell_vkb_candidate_pane_t1

0x14ef,	// (0x00048866) bg_popup_fep_shadow_pane_ParamLimits

0x14ef,	// (0x00048866) bg_popup_fep_shadow_pane

0xd090,	// (0x00054407) bg_fep_hwr_top_pane_g4

0x5c24,	// (0x0004cf9b) bg_hwr_side_pane_g1_ParamLimits

0x5c24,	// (0x0004cf9b) bg_hwr_side_pane_g1

0xc086,	// (0x000533fd) cell_hwr_side_pane_ParamLimits

0xc086,	// (0x000533fd) cell_hwr_side_pane

0x1648,	// (0x000489bf) fep_hwr_write_pane_g1_ParamLimits

0x1648,	// (0x000489bf) fep_hwr_write_pane_g1

0x1655,	// (0x000489cc) fep_hwr_write_pane_g2_ParamLimits

0x1655,	// (0x000489cc) fep_hwr_write_pane_g2

0x1662,	// (0x000489d9) fep_hwr_write_pane_g3_ParamLimits

0x1662,	// (0x000489d9) fep_hwr_write_pane_g3

0xc0a6,	// (0x0005341d) fep_hwr_write_pane_g4_ParamLimits

0xc0a6,	// (0x0005341d) fep_hwr_write_pane_g4

0x0005,

0xfaf8,	// (0x00056e6f) fep_hwr_write_pane_g_ParamLimits

0xfaf8,	// (0x00056e6f) fep_hwr_write_pane_g

0xd090,	// (0x00054407) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd090,	// (0x00054407) bg_fep_hwr_candidate_pane_g2

0x1685,	// (0x000489fc) cell_hwr_candidate_pane_ParamLimits

0x1685,	// (0x000489fc) cell_hwr_candidate_pane

0x16d7,	// (0x00048a4e) fep_hwr_candidate_pane_g1_ParamLimits

0x5c84,	// (0x0004cffb) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5c84,	// (0x0004cffb) bg_popup_fep_shadow_pane_cp2

0x5e1a,	// (0x0004d191) fep_vkb_top_pane_g4_ParamLimits

0x5e1a,	// (0x0004d191) fep_vkb_top_pane_g4

0x5e60,	// (0x0004d1d7) fep_vkb_side_pane_g2_ParamLimits

0x5e60,	// (0x0004d1d7) fep_vkb_side_pane_g2

0x9f36,	// (0x000512ad) list_setting_pane_t4_ParamLimits

0x9f36,	// (0x000512ad) list_setting_pane_t4

0x9fd2,	// (0x00051349) list_setting_number_pane_t5_ParamLimits

0x9fd2,	// (0x00051349) list_setting_number_pane_t5

0x2724,	// (0x00049a9b) list_double_heading_pane_cp2_ParamLimits

0x2724,	// (0x00049a9b) list_double_heading_pane_cp2

0x61e1,	// (0x0004d558) list_double_heading_pane_g1_cp2_ParamLimits

0x61e1,	// (0x0004d558) list_double_heading_pane_g1_cp2

0x61ed,	// (0x0004d564) list_double_heading_pane_g2_cp2_ParamLimits

0x61ed,	// (0x0004d564) list_double_heading_pane_g2_cp2

0x6201,	// (0x0004d578) list_double_heading_pane_t1_cp2_ParamLimits

0x6201,	// (0x0004d578) list_double_heading_pane_t1_cp2

0x6217,	// (0x0004d58e) list_double_heading_pane_t2_cp2_ParamLimits

0x6217,	// (0x0004d58e) list_double_heading_pane_t2_cp2

0x6f4e,	// (0x0004e2c5) aid_value_unit2

0xf352,	// (0x000566c9) popup_preview_fixed_window

0xa94f,	// (0x00051cc6) bg_popup_preview_window_pane_cp02

0x6229,	// (0x0004d5a0) list_preview_fixed_pane

0x626f,	// (0x0004d5e6) list_empty_pane_fp_ParamLimits

0x626f,	// (0x0004d5e6) list_empty_pane_fp

0x626f,	// (0x0004d5e6) list_single_cale_day_pane_fp_ParamLimits

0x626f,	// (0x0004d5e6) list_single_cale_day_pane_fp

0x626f,	// (0x0004d5e6) list_single_graphic_heading_pane_fp_ParamLimits

0x626f,	// (0x0004d5e6) list_single_graphic_heading_pane_fp

0x626f,	// (0x0004d5e6) list_single_graphic_pane_fp_ParamLimits

0x626f,	// (0x0004d5e6) list_single_graphic_pane_fp

0x626f,	// (0x0004d5e6) list_single_heading_pane_fp_ParamLimits

0x626f,	// (0x0004d5e6) list_single_heading_pane_fp

0x626f,	// (0x0004d5e6) list_single_pane_fp_ParamLimits

0x626f,	// (0x0004d5e6) list_single_pane_fp

0x6288,	// (0x0004d5ff) list_single_pane_fp_g1_ParamLimits

0x6288,	// (0x0004d5ff) list_single_pane_fp_g1

0x1763,	// (0x00048ada) list_single_pane_fp_g2_ParamLimits

0x1763,	// (0x00048ada) list_single_pane_fp_g2

0x176f,	// (0x00048ae6) list_single_pane_fp_g3_ParamLimits

0x176f,	// (0x00048ae6) list_single_pane_fp_g3

0x6294,	// (0x0004d60b) list_single_pane_fp_g4_ParamLimits

0x6294,	// (0x0004d60b) list_single_pane_fp_g4

0x0003,

0xfb5a,	// (0x00056ed1) list_single_pane_fp_g_ParamLimits

0xfb5a,	// (0x00056ed1) list_single_pane_fp_g

0xf0e9,	// (0x00056460) list_single_pane_fp_t1_ParamLimits

0xf0e9,	// (0x00056460) list_single_pane_fp_t1

0xf100,	// (0x00056477) list_single_graphic_pane_fp_g1_ParamLimits

0xf100,	// (0x00056477) list_single_graphic_pane_fp_g1

0x6288,	// (0x0004d5ff) list_single_graphic_pane_fp_g2_ParamLimits

0x6288,	// (0x0004d5ff) list_single_graphic_pane_fp_g2

0x1763,	// (0x00048ada) list_single_graphic_pane_fp_g3_ParamLimits

0x1763,	// (0x00048ada) list_single_graphic_pane_fp_g3

0x176f,	// (0x00048ae6) list_single_graphic_pane_fp_g4_ParamLimits

0x176f,	// (0x00048ae6) list_single_graphic_pane_fp_g4

0x6294,	// (0x0004d60b) list_single_graphic_pane_fp_g5_ParamLimits

0x6294,	// (0x0004d60b) list_single_graphic_pane_fp_g5

0x0004,

0xfb63,	// (0x00056eda) list_single_graphic_pane_fp_g_ParamLimits

0xfb63,	// (0x00056eda) list_single_graphic_pane_fp_g

0xf10c,	// (0x00056483) list_single_graphic_pane_fp_t1_ParamLimits

0xf10c,	// (0x00056483) list_single_graphic_pane_fp_t1

0xf100,	// (0x00056477) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf100,	// (0x00056477) list_single_graphic_heading_pane_fp_g1

0x6288,	// (0x0004d5ff) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6288,	// (0x0004d5ff) list_single_graphic_heading_pane_fp_g2

0x1763,	// (0x00048ada) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1763,	// (0x00048ada) list_single_graphic_heading_pane_fp_g3

0x176f,	// (0x00048ae6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x176f,	// (0x00048ae6) list_single_graphic_heading_pane_fp_g4

0x6294,	// (0x0004d60b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6294,	// (0x0004d60b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb63,	// (0x00056eda) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb63,	// (0x00056eda) list_single_graphic_heading_pane_fp_g

0xf122,	// (0x00056499) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf122,	// (0x00056499) list_single_graphic_heading_pane_fp_t1

0xf138,	// (0x000564af) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf138,	// (0x000564af) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6e,	// (0x00056ee5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6e,	// (0x00056ee5) list_single_graphic_heading_pane_fp_t

0xf35c,	// (0x000566d3) list_single_cale_day_pane_fp_g1_ParamLimits

0xf35c,	// (0x000566d3) list_single_cale_day_pane_fp_g1

0x62a0,	// (0x0004d617) list_single_cale_day_pane_fp_g2_ParamLimits

0x62a0,	// (0x0004d617) list_single_cale_day_pane_fp_g2

0x1783,	// (0x00048afa) list_single_cale_day_pane_fp_g3_ParamLimits

0x1783,	// (0x00048afa) list_single_cale_day_pane_fp_g3

0x17ab,	// (0x00048b22) list_single_cale_day_pane_fp_g4_ParamLimits

0x17ab,	// (0x00048b22) list_single_cale_day_pane_fp_g4

0x17cf,	// (0x00048b46) list_single_cale_day_pane_fp_g5_ParamLimits

0x17cf,	// (0x00048b46) list_single_cale_day_pane_fp_g5

0x0004,

0xfb73,	// (0x00056eea) list_single_cale_day_pane_fp_g_ParamLimits

0xfb73,	// (0x00056eea) list_single_cale_day_pane_fp_g

0xf394,	// (0x0005670b) list_single_cale_day_pane_fp_t1_ParamLimits

0xf394,	// (0x0005670b) list_single_cale_day_pane_fp_t1

0xf3ba,	// (0x00056731) list_single_cale_day_pane_fp_t2_ParamLimits

0xf3ba,	// (0x00056731) list_single_cale_day_pane_fp_t2

0xf3d3,	// (0x0005674a) list_single_cale_day_pane_fp_t3_ParamLimits

0xf3d3,	// (0x0005674a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7e,	// (0x00056ef5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7e,	// (0x00056ef5) list_single_cale_day_pane_fp_t

0x6288,	// (0x0004d5ff) list_empty_pane_fp_g1_ParamLimits

0x6288,	// (0x0004d5ff) list_empty_pane_fp_g1

0xf3ec,	// (0x00056763) list_empty_pane_fp_t1

0xf3fa,	// (0x00056771) list_empty_pane_fp_t2

0x0001,

0xfb85,	// (0x00056efc) list_empty_pane_fp_t

0x6288,	// (0x0004d5ff) list_single_heading_pane_fp_g1_ParamLimits

0x6288,	// (0x0004d5ff) list_single_heading_pane_fp_g1

0x1763,	// (0x00048ada) list_single_heading_pane_fp_g2_ParamLimits

0x1763,	// (0x00048ada) list_single_heading_pane_fp_g2

0x176f,	// (0x00048ae6) list_single_heading_pane_fp_g3_ParamLimits

0x176f,	// (0x00048ae6) list_single_heading_pane_fp_g3

0x0002,

0xfb8a,	// (0x00056f01) list_single_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00056f01) list_single_heading_pane_fp_g

0xf408,	// (0x0005677f) list_single_heading_pane_fp_t1_ParamLimits

0xf408,	// (0x0005677f) list_single_heading_pane_fp_t1

0xf41a,	// (0x00056791) list_single_heading_pane_fp_t2_ParamLimits

0xf41a,	// (0x00056791) list_single_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00056f08) list_single_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00056f08) list_single_heading_pane_fp_t

0xe5be,	// (0x00055935) aid_size_cell_fast

0xa8cf,	// (0x00051c46) soft_indicator_pane_cp1_t1

0xe5fb,	// (0x00055972) cell_app_pane_cp2_ParamLimits

0xe5fb,	// (0x00055972) cell_app_pane_cp2

0x1511,	// (0x00048888) fep_hwr_candidate_drop_down_list_pane

0xd09e,	// (0x00054415) fep_hwr_candidate_pane_g3_ParamLimits

0xd09e,	// (0x00054415) fep_hwr_candidate_pane_g3

0xd0ab,	// (0x00054422) fep_hwr_candidate_pane_g4_ParamLimits

0xd0ab,	// (0x00054422) fep_hwr_candidate_pane_g4

0x0002,

0xfb05,	// (0x00056e7c) fep_hwr_candidate_pane_g_ParamLimits

0xfb05,	// (0x00056e7c) fep_hwr_candidate_pane_g

0x5d14,	// (0x0004d08b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5d14,	// (0x0004d08b) fep_vkb_candidate_drop_down_list_pane

0x613c,	// (0x0004d4b3) fep_vkb_candidate_pane_g3

0x6144,	// (0x0004d4bb) fep_vkb_candidate_pane_g4

0x0002,

0xfb32,	// (0x00056ea9) fep_vkb_candidate_pane_g

0x5e1a,	// (0x0004d191) cell_hwr_candidate_pane_g1_ParamLimits

0x615b,	// (0x0004d4d2) cell_hwr_candidate_pane_g3_ParamLimits

0x615b,	// (0x0004d4d2) cell_hwr_candidate_pane_g3

0x617c,	// (0x0004d4f3) cell_hwr_candidate_pane_g4_ParamLimits

0x617c,	// (0x0004d4f3) cell_hwr_candidate_pane_g4

0x0002,

0xfb4c,	// (0x00056ec3) cell_hwr_candidate_pane_g_ParamLimits

0xfb4c,	// (0x00056ec3) cell_hwr_candidate_pane_g

0x619d,	// (0x0004d514) cell_vkb_candidate_pane_g3_ParamLimits

0x619d,	// (0x0004d514) cell_vkb_candidate_pane_g3

0x61b8,	// (0x0004d52f) cell_vkb_candidate_pane_g4_ParamLimits

0x61b8,	// (0x0004d52f) cell_vkb_candidate_pane_g4

0x62ac,	// (0x0004d623) cell_app_pane_cp2_g1_ParamLimits

0x62ac,	// (0x0004d623) cell_app_pane_cp2_g1

0x62ca,	// (0x0004d641) cell_app_pane_cp2_g2_ParamLimits

0x62ca,	// (0x0004d641) cell_app_pane_cp2_g2

0x0001,

0xfb96,	// (0x00056f0d) cell_app_pane_cp2_g_ParamLimits

0xfb96,	// (0x00056f0d) cell_app_pane_cp2_g

0x62d6,	// (0x0004d64d) cell_app_pane_cp2_t1_ParamLimits

0x62d6,	// (0x0004d64d) cell_app_pane_cp2_t1

0xafbc,	// (0x00052333) grid_highlight_pane_cp1_ParamLimits

0xafbc,	// (0x00052333) grid_highlight_pane_cp1

0x17f3,	// (0x00048b6a) cell_hwr_candidate_pane_cp1_ParamLimits

0x17f3,	// (0x00048b6a) cell_hwr_candidate_pane_cp1

0x5e1a,	// (0x0004d191) fep_hwr_candidate_drop_down_list_pane_g1

0x62e8,	// (0x0004d65f) fep_hwr_candidate_drop_down_list_pane_g2

0x62f5,	// (0x0004d66c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9b,	// (0x00056f12) fep_hwr_candidate_drop_down_list_pane_g

0x1817,	// (0x00048b8e) fep_hwr_candidate_drop_down_list_scroll_pane

0x1820,	// (0x00048b97) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1820,	// (0x00048b97) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x182d,	// (0x00048ba4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x182d,	// (0x00048ba4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x183a,	// (0x00048bb1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x183a,	// (0x00048bb1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x619d,	// (0x0004d514) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x619d,	// (0x0004d514) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x61b8,	// (0x0004d52f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x61b8,	// (0x0004d52f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1847,	// (0x00048bbe) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1847,	// (0x00048bbe) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1862,	// (0x00048bd9) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1862,	// (0x00048bd9) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x187d,	// (0x00048bf4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x187d,	// (0x00048bf4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba2,	// (0x00056f19) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba2,	// (0x00056f19) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6302,	// (0x0004d679) cell_vkb_candidate_pane_cp1_ParamLimits

0x6302,	// (0x0004d679) cell_vkb_candidate_pane_cp1

0x5e1a,	// (0x0004d191) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5e1a,	// (0x0004d191) fep_vkb_candidate_drop_down_list_pane_g1

0x62e8,	// (0x0004d65f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x62e8,	// (0x0004d65f) fep_vkb_candidate_drop_down_list_pane_g2

0x62f5,	// (0x0004d66c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x62f5,	// (0x0004d66c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9b,	// (0x00056f12) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9b,	// (0x00056f12) fep_vkb_candidate_drop_down_list_pane_g

0x6328,	// (0x0004d69f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6328,	// (0x0004d69f) fep_vkb_candidate_drop_down_list_scroll_pane

0x6335,	// (0x0004d6ac) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6335,	// (0x0004d6ac) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6342,	// (0x0004d6b9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6342,	// (0x0004d6b9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x634e,	// (0x0004d6c5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x634e,	// (0x0004d6c5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x615b,	// (0x0004d4d2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x615b,	// (0x0004d4d2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x617c,	// (0x0004d4f3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x617c,	// (0x0004d4f3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x635a,	// (0x0004d6d1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x635a,	// (0x0004d6d1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x637b,	// (0x0004d6f2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x637b,	// (0x0004d6f2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x639c,	// (0x0004d713) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x639c,	// (0x0004d713) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x00056f2a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x00056f2a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa5a5,	// (0x0005191c) title_pane_g1_ParamLimits

0xa5b8,	// (0x0005192f) title_pane_g2_ParamLimits

0xf527,	// (0x0005689e) title_pane_g_ParamLimits

0x26dd,	// (0x00049a54) aid_call2_pane

0x26e5,	// (0x00049a5c) aid_call_pane

0x26ed,	// (0x00049a64) popup_clock_analogue_window_g1

0x26ed,	// (0x00049a64) popup_clock_analogue_window_g2

0x04d9,	// (0x00047850) popup_clock_analogue_window_g3

0x04e2,	// (0x00047859) popup_clock_analogue_window_g4

0x6f60,	// (0x0004e2d7) popup_clock_analogue_window_g5

0x0004,

0xf6d6,	// (0x00056a4d) popup_clock_analogue_window_g

0x04ea,	// (0x00047861) popup_clock_analogue_window_t1

0x04f8,	// (0x0004786f) clock_digital_number_pane_ParamLimits

0x04f8,	// (0x0004786f) clock_digital_number_pane

0x0504,	// (0x0004787b) clock_digital_number_pane_cp02_ParamLimits

0x0504,	// (0x0004787b) clock_digital_number_pane_cp02

0x0510,	// (0x00047887) clock_digital_number_pane_cp03_ParamLimits

0x0510,	// (0x00047887) clock_digital_number_pane_cp03

0x051c,	// (0x00047893) clock_digital_number_pane_cp04_ParamLimits

0x051c,	// (0x00047893) clock_digital_number_pane_cp04

0x0528,	// (0x0004789f) clock_digital_separator_pane_ParamLimits

0x0528,	// (0x0004789f) clock_digital_separator_pane

0x0534,	// (0x000478ab) popup_clock_digital_window_t1_ParamLimits

0x0534,	// (0x000478ab) popup_clock_digital_window_t1

0x6f60,	// (0x0004e2d7) clock_digital_number_pane_g1

0x6f60,	// (0x0004e2d7) clock_digital_number_pane_g2

0x0001,

0xf6e1,	// (0x00056a58) clock_digital_number_pane_g

0x6f60,	// (0x0004e2d7) clock_digital_separator_pane_g1

0x6f60,	// (0x0004e2d7) clock_digital_separator_pane_g2

0x0001,

0xf6e1,	// (0x00056a58) clock_digital_separator_pane_g

0xbc5d,	// (0x00052fd4) aid_fill_nsta_ParamLimits

0xbd93,	// (0x0005310a) indicator_nsta_pane_ParamLimits

0x335e,	// (0x0004a6d5) popup_clock_analogue_window

0x335e,	// (0x0004a6d5) popup_clock_digital_window

0xceca,	// (0x00054241) grid_indicator_nsta_pane_ParamLimits

0x55fb,	// (0x0004c972) clock_nsta_pane_t2

0x0001,

0xfa85,	// (0x00056dfc) clock_nsta_pane_t

0x0469,	// (0x000477e0) aid_size_max_handle

0xb1d2,	// (0x00052549) aid_size_min_handle

0x2d1a,	// (0x0004a091) editor_scroll_pane

0x63b7,	// (0x0004d72e) ex_editor_pane

0xe584,	// (0x000558fb) scroll_pane_cp13

0xaf0c,	// (0x00052283) scroll_pane_cp14

0x271c,	// (0x00049a93) scroll_pane_cp36

0xb25f,	// (0x000525d6) list_single_graphic_hl_pane_cp2_ParamLimits

0xb25f,	// (0x000525d6) list_single_graphic_hl_pane_cp2

0xcd53,	// (0x000540ca) list_single_graphic_hl_pane_ParamLimits

0xcd53,	// (0x000540ca) list_single_graphic_hl_pane

0xf430,	// (0x000567a7) aid_size_min_hl_cp1

0x63bf,	// (0x0004d736) list_highlight_pane_cp34_ParamLimits

0x63bf,	// (0x0004d736) list_highlight_pane_cp34

0x63d0,	// (0x0004d747) list_single_graphic_hl_pane_g1_ParamLimits

0x63d0,	// (0x0004d747) list_single_graphic_hl_pane_g1

0xa266,	// (0x000515dd) list_single_graphic_hl_pane_g2_ParamLimits

0xa266,	// (0x000515dd) list_single_graphic_hl_pane_g2

0xa266,	// (0x000515dd) list_single_graphic_hl_pane_g3_ParamLimits

0xa266,	// (0x000515dd) list_single_graphic_hl_pane_g3

0x2c51,	// (0x00049fc8) list_single_graphic_hl_pane_g4_ParamLimits

0x2c51,	// (0x00049fc8) list_single_graphic_hl_pane_g4

0xc0bb,	// (0x00053432) list_single_graphic_hl_pane_g5_ParamLimits

0xc0bb,	// (0x00053432) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x00056f3b) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x00056f3b) list_single_graphic_hl_pane_g

0xa272,	// (0x000515e9) list_single_graphic_hl_pane_t1_ParamLimits

0xa272,	// (0x000515e9) list_single_graphic_hl_pane_t1

0x63dd,	// (0x0004d754) aid_size_min_hl_cp2

0x63e6,	// (0x0004d75d) list_highlight_pane_cp34_cp2_ParamLimits

0x63e6,	// (0x0004d75d) list_highlight_pane_cp34_cp2

0x63d0,	// (0x0004d747) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x63d0,	// (0x0004d747) list_single_graphic_hl_pane_g1_cp2

0x63f3,	// (0x0004d76a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x63f3,	// (0x0004d76a) list_single_graphic_hl_pane_g2_cp2

0x63ff,	// (0x0004d776) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x63ff,	// (0x0004d776) list_single_graphic_hl_pane_g3_cp2

0x640d,	// (0x0004d784) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x640d,	// (0x0004d784) list_single_graphic_hl_pane_g4_cp2

0x6419,	// (0x0004d790) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6419,	// (0x0004d790) list_single_graphic_hl_pane_g5_cp2

0xb41d,	// (0x00052794) control_pane_g4_ParamLimits

0xb41d,	// (0x00052794) control_pane_g4

0x3049,	// (0x0004a3c0) bg_popup_sub_pane_cp10_ParamLimits

0x5ba9,	// (0x0004cf20) list_choice_list_pane_ParamLimits

0x5bb8,	// (0x0004cf2f) scroll_pane_cp23

0xa94f,	// (0x00051cc6) bg_popup_preview_window_pane_cp02_ParamLimits

0x6229,	// (0x0004d5a0) list_preview_fixed_pane_ParamLimits

0x623f,	// (0x0004d5b6) list_preview_fixed_pane_cp_ParamLimits

0x623f,	// (0x0004d5b6) list_preview_fixed_pane_cp

0x624b,	// (0x0004d5c2) popup_preview_fixed_window_g1_ParamLimits

0x624b,	// (0x0004d5c2) popup_preview_fixed_window_g1

0x6257,	// (0x0004d5ce) popup_preview_fixed_window_g2_ParamLimits

0x6257,	// (0x0004d5ce) popup_preview_fixed_window_g2

0x0002,

0xfb53,	// (0x00056eca) popup_preview_fixed_window_g_ParamLimits

0xfb53,	// (0x00056eca) popup_preview_fixed_window_g

0x031d,	// (0x00047694) aid_navi_side_left_pane_ParamLimits

0x0332,	// (0x000476a9) aid_navi_side_right_pane_ParamLimits

0x034a,	// (0x000476c1) navi_icon_pane_stacon_ParamLimits

0x035e,	// (0x000476d5) navi_navi_pane_stacon_ParamLimits

0x034a,	// (0x000476c1) navi_text_pane_stacon_ParamLimits

0x6f56,	// (0x0004e2cd) main_text_info_pane

0x6443,	// (0x0004d7ba) listscroll_text_info_pane

0x644b,	// (0x0004d7c2) list_text_info_pane_ParamLimits

0x644b,	// (0x0004d7c2) list_text_info_pane

0x645a,	// (0x0004d7d1) scroll_pane_cp24_ParamLimits

0x645a,	// (0x0004d7d1) scroll_pane_cp24

0xd234,	// (0x000545ab) list_text_info_pane_t1_ParamLimits

0xd234,	// (0x000545ab) list_text_info_pane_t1

0xb550,	// (0x000528c7) popup_fast_swap2_window_ParamLimits

0xb550,	// (0x000528c7) popup_fast_swap2_window

0x649d,	// (0x0004d814) aid_size_cell_fast2

0x6f56,	// (0x0004e2cd) bg_popup_window_pane_cp17

0x39af,	// (0x0004ad26) heading_pane_cp2

0x64a7,	// (0x0004d81e) listscroll_fast2_pane

0x64af,	// (0x0004d826) grid_fast2_pane

0x64b9,	// (0x0004d830) listscroll_fast2_pane_g1

0x64c3,	// (0x0004d83a) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x00056f46) listscroll_fast2_pane_g

0xe584,	// (0x000558fb) scroll_pane_cp26

0x64cd,	// (0x0004d844) cell_fast2_pane_ParamLimits

0x64cd,	// (0x0004d844) cell_fast2_pane

0x64e4,	// (0x0004d85b) cell_fast2_pane_g1

0x64ed,	// (0x0004d864) cell_fast2_pane_g2

0x64f6,	// (0x0004d86d) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x00056f4b) cell_fast2_pane_g

0xacc9,	// (0x00052040) grid_highlight_pane_cp9

0xacde,	// (0x00052055) main_eswt_pane_ParamLimits

0xacde,	// (0x00052055) main_eswt_pane

0x646f,	// (0x0004d7e6) list_single_text_info_pane

0x64fe,	// (0x0004d875) eswt_ctrl_button_pane

0x64fe,	// (0x0004d875) eswt_ctrl_canvas_pane

0x6506,	// (0x0004d87d) eswt_ctrl_combo_pane

0x64fe,	// (0x0004d875) eswt_ctrl_default_pane

0x64fe,	// (0x0004d875) eswt_ctrl_label_pane

0x650e,	// (0x0004d885) eswt_ctrl_wait_pane

0x6516,	// (0x0004d88d) eswt_shell_pane

0x6f56,	// (0x0004e2cd) listscroll_eswt_app_pane

0x6536,	// (0x0004d8ad) popup_eswt_tasktip_window_ParamLimits

0x6536,	// (0x0004d8ad) popup_eswt_tasktip_window

0x35ed,	// (0x0004a964) bg_popup_window_pane_cp18

0x6547,	// (0x0004d8be) eswt_control_pane_g1_ParamLimits

0x6547,	// (0x0004d8be) eswt_control_pane_g1

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_ParamLimits

0x6554,	// (0x0004d8cb) eswt_control_pane_g2

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_ParamLimits

0x6561,	// (0x0004d8d8) eswt_control_pane_g3

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_ParamLimits

0x656e,	// (0x0004d8e5) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x00056f52) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x00056f52) eswt_control_pane_g

0xafbc,	// (0x00052333) bg_button_pane_ParamLimits

0xafbc,	// (0x00052333) bg_button_pane

0xacde,	// (0x00052055) common_borders_pane_copy2_ParamLimits

0xacde,	// (0x00052055) common_borders_pane_copy2

0x657b,	// (0x0004d8f2) control_button_pane_g1_ParamLimits

0x657b,	// (0x0004d8f2) control_button_pane_g1

0x6587,	// (0x0004d8fe) control_button_pane_g2_ParamLimits

0x6587,	// (0x0004d8fe) control_button_pane_g2

0x6593,	// (0x0004d90a) control_button_pane_g3_ParamLimits

0x6593,	// (0x0004d90a) control_button_pane_g3

0x0002,

0xfbe4,	// (0x00056f5b) control_button_pane_g_ParamLimits

0xfbe4,	// (0x00056f5b) control_button_pane_g

0x65a7,	// (0x0004d91e) control_button_pane_t1

0x65b5,	// (0x0004d92c) control_button_pane_t2

0x0001,

0xfbeb,	// (0x00056f62) control_button_pane_t

0x3579,	// (0x0004a8f0) bg_button_pane_g1

0x3581,	// (0x0004a8f8) bg_button_pane_g2

0x3589,	// (0x0004a900) bg_button_pane_g3

0x3591,	// (0x0004a908) bg_button_pane_g4

0x3599,	// (0x0004a910) bg_button_pane_g5

0x35a1,	// (0x0004a918) bg_button_pane_g6

0x35a9,	// (0x0004a920) bg_button_pane_g7

0x35b1,	// (0x0004a928) bg_button_pane_g8

0x35b9,	// (0x0004a930) bg_button_pane_g9

0x0008,

0xf83f,	// (0x00056bb6) bg_button_pane_g

0x5b64,	// (0x0004cedb) common_borders_pane_ParamLimits

0x5b64,	// (0x0004cedb) common_borders_pane

0x6547,	// (0x0004d8be) eswt_control_pane_g1_copy1_ParamLimits

0x6547,	// (0x0004d8be) eswt_control_pane_g1_copy1

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_copy1_ParamLimits

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_copy1

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_copy1_ParamLimits

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_copy1

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_copy1_ParamLimits

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_copy1

0x5b9f,	// (0x0004cf16) bg_eswt_ctrl_canvas_pane_g1

0x5b64,	// (0x0004cedb) common_borders_pane_cp2_ParamLimits

0x5b64,	// (0x0004cedb) common_borders_pane_cp2

0x5b64,	// (0x0004cedb) common_borders_pane_cp3_ParamLimits

0x5b64,	// (0x0004cedb) common_borders_pane_cp3

0x65c3,	// (0x0004d93a) separator_horizontal_pane

0x65cb,	// (0x0004d942) separator_vertical_pane

0x6547,	// (0x0004d8be) eswt_control_pane_g1_copy2_ParamLimits

0x6547,	// (0x0004d8be) eswt_control_pane_g1_copy2

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_copy2_ParamLimits

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_copy2

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_copy2_ParamLimits

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_copy2

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_copy2_ParamLimits

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_copy2

0x6f56,	// (0x0004e2cd) common_borders_pane_cp4

0x65d4,	// (0x0004d94b) separator_horizontal_pane_g1

0x65dd,	// (0x0004d954) separator_horizontal_pane_g2

0x65e6,	// (0x0004d95d) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x00056f67) separator_horizontal_pane_g

0x6547,	// (0x0004d8be) eswt_control_pane_g1_copy3_ParamLimits

0x6547,	// (0x0004d8be) eswt_control_pane_g1_copy3

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_copy3_ParamLimits

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_copy3

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_copy3_ParamLimits

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_copy3

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_copy3_ParamLimits

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_copy3

0x6f56,	// (0x0004e2cd) common_borders_pane_cp5

0x65ef,	// (0x0004d966) separator_vertical_pane_g1

0x65f8,	// (0x0004d96f) separator_vertical_pane_g2

0x6601,	// (0x0004d978) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x00056f6e) separator_vertical_pane_g

0x6547,	// (0x0004d8be) eswt_control_pane_g1_copy4_ParamLimits

0x6547,	// (0x0004d8be) eswt_control_pane_g1_copy4

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_copy4_ParamLimits

0x6554,	// (0x0004d8cb) eswt_control_pane_g2_copy4

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_copy4_ParamLimits

0x6561,	// (0x0004d8d8) eswt_control_pane_g3_copy4

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_copy4_ParamLimits

0x656e,	// (0x0004d8e5) eswt_control_pane_g4_copy4

0xd256,	// (0x000545cd) eswt_ctrl_combo_button_pane

0xd25e,	// (0x000545d5) eswt_ctrl_input_pane

0xd266,	// (0x000545dd) popup_choice_list_window_cp70

0xd26e,	// (0x000545e5) eswt_ctrl_input_pane_t1

0x6f56,	// (0x0004e2cd) input_focus_pane_cp70

0x5b64,	// (0x0004cedb) bg_button_pane_cp70_ParamLimits

0x5b64,	// (0x0004cedb) bg_button_pane_cp70

0xd27c,	// (0x000545f3) eswt_ctrl_combo_button_pane_g1

0x6638,	// (0x0004d9af) wait_bar_pane_cp70

0x35ed,	// (0x0004a964) bg_popup_window_pane_cp70_ParamLimits

0x35ed,	// (0x0004a964) bg_popup_window_pane_cp70

0x6640,	// (0x0004d9b7) popup_eswt_tasktip_window_t1

0x6656,	// (0x0004d9cd) wait_bar_pane_cp71_ParamLimits

0x6656,	// (0x0004d9cd) wait_bar_pane_cp71

0x6662,	// (0x0004d9d9) grid_eswt_app_pane

0xe7bb,	// (0x00055b32) scroll_pane_cp70

0xd284,	// (0x000545fb) cell_eswt_app_pane_ParamLimits

0xd284,	// (0x000545fb) cell_eswt_app_pane

0xd2b6,	// (0x0005462d) cell_eswt_app_pane_g1_ParamLimits

0xd2b6,	// (0x0005462d) cell_eswt_app_pane_g1

0xd2e5,	// (0x0005465c) cell_eswt_app_pane_g2_ParamLimits

0xd2e5,	// (0x0005465c) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x00056f75) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x00056f75) cell_eswt_app_pane_g

0xd30e,	// (0x00054685) cell_eswt_app_pane_t1_ParamLimits

0xd30e,	// (0x00054685) cell_eswt_app_pane_t1

0x6727,	// (0x0004da9e) grid_highlight_pane_cp70_ParamLimits

0x6727,	// (0x0004da9e) grid_highlight_pane_cp70

0x2bdc,	// (0x00049f53) set_content_pane_g1

0xb401,	// (0x00052778) status_small_volume_pane

0xc0cf,	// (0x00053446) status_small_volume_pane_g1

0xc0d7,	// (0x0005344e) volume_small2_pane

0xc0e0,	// (0x00053457) volume_small2_pane_g1

0xc0e9,	// (0x00053460) volume_small2_pane_g2

0xc0f2,	// (0x00053469) volume_small2_pane_g3

0xc0fb,	// (0x00053472) volume_small2_pane_g4

0xc104,	// (0x0005347b) volume_small2_pane_g5

0xc10d,	// (0x00053484) volume_small2_pane_g6

0xc116,	// (0x0005348d) volume_small2_pane_g7

0xc11f,	// (0x00053496) volume_small2_pane_g8

0xc128,	// (0x0005349f) volume_small2_pane_g9

0xc131,	// (0x000534a8) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x00056f7a) volume_small2_pane_g

0x5f6e,	// (0x0004d2e5) fep_vkb_top_text_pane_g1_ParamLimits

0xd1dc,	// (0x00054553) fep_vkb_top_text_pane_t1_ParamLimits

0x6263,	// (0x0004d5da) popup_preview_fixed_window_g3_ParamLimits

0x6263,	// (0x0004d5da) popup_preview_fixed_window_g3

0xbbf0,	// (0x00052f67) popup_toolbar_trans_pane

0xcbbd,	// (0x00053f34) aid_height_set_list_ParamLimits

0x4946,	// (0x0004bcbd) aid_size_parent_ParamLimits

0x3049,	// (0x0004a3c0) list_highlight_pane_cp2_ParamLimits

0x2bdc,	// (0x00049f53) set_content_pane_g1_ParamLimits

0xcd67,	// (0x000540de) list_single_image_pane_ParamLimits

0xcd67,	// (0x000540de) list_single_image_pane

0xd340,	// (0x000546b7) aid_size_cell_image_ParamLimits

0xd340,	// (0x000546b7) aid_size_cell_image

0xd34d,	// (0x000546c4) grid_single_image_pane_ParamLimits

0xd34d,	// (0x000546c4) grid_single_image_pane

0xafca,	// (0x00052341) list_single_image_pane_g1_ParamLimits

0xafca,	// (0x00052341) list_single_image_pane_g1

0xafd6,	// (0x0005234d) list_single_image_pane_g2_ParamLimits

0xafd6,	// (0x0005234d) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x00056f8f) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x00056f8f) list_single_image_pane_g

0x674e,	// (0x0004dac5) list_single_image_pane_t1_ParamLimits

0x674e,	// (0x0004dac5) list_single_image_pane_t1

0xd35b,	// (0x000546d2) cell_image_list_pane_ParamLimits

0xd35b,	// (0x000546d2) cell_image_list_pane

0xd371,	// (0x000546e8) cell_image_list_pane_g1

0xd37a,	// (0x000546f1) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x00056f94) cell_image_list_pane_g

0x678e,	// (0x0004db05) aid_size_cell_tb_trans_pane

0xafbc,	// (0x00052333) bg_tb_trans_pane

0x67a0,	// (0x0004db17) grid_tb_trans_pane

0x3579,	// (0x0004a8f0) bg_tb_trans_pane_g1

0x3581,	// (0x0004a8f8) bg_tb_trans_pane_g2

0x3589,	// (0x0004a900) bg_tb_trans_pane_g3

0x3591,	// (0x0004a908) bg_tb_trans_pane_g4

0x3599,	// (0x0004a910) bg_tb_trans_pane_g5

0x35b1,	// (0x0004a928) bg_tb_trans_pane_g6

0x35b9,	// (0x0004a930) bg_tb_trans_pane_g7

0x35a1,	// (0x0004a918) bg_tb_trans_pane_g8

0x35a9,	// (0x0004a920) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x00056f99) bg_tb_trans_pane_g

0x67b4,	// (0x0004db2b) cell_toolbar_trans_pane_ParamLimits

0x67b4,	// (0x0004db2b) cell_toolbar_trans_pane

0x5b9f,	// (0x0004cf16) cell_toolbar_trans_pane_g1

0xcfab,	// (0x00054322) list_form2_midp_pane_t1

0xcfb9,	// (0x00054330) list_form2_midp_pane_t2

0x0001,

0xfacb,	// (0x00056e42) list_form2_midp_pane_t

0x57fa,	// (0x0004cb71) scroll_pane_cp51_ParamLimits

0x59c1,	// (0x0004cd38) form2_midp_wait_pane_g1

0x59ca,	// (0x0004cd41) form2_midp_wait_pane_g2

0x59d3,	// (0x0004cd4a) form2_midp_wait_pane_g3

0x0002,

0xfae0,	// (0x00056e57) form2_midp_wait_pane_g

0x6fb8,	// (0x0004e32f) list_highlight_pane_cp21_ParamLimits

0x5a0c,	// (0x0004cd83) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5a1b,	// (0x0004cd92) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4b2f,	// (0x0004bea6) list_single_2graphic_im_pane_ParamLimits

0x4b2f,	// (0x0004bea6) list_single_2graphic_im_pane

0xd383,	// (0x000546fa) list_single_2graphic_im_pane_g1_ParamLimits

0xd383,	// (0x000546fa) list_single_2graphic_im_pane_g1

0xd394,	// (0x0005470b) list_single_2graphic_im_pane_g2_ParamLimits

0xd394,	// (0x0005470b) list_single_2graphic_im_pane_g2

0xd3a0,	// (0x00054717) list_single_2graphic_im_pane_g3_ParamLimits

0xd3a0,	// (0x00054717) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x00056fac) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x00056fac) list_single_2graphic_im_pane_g

0xd3b4,	// (0x0005472b) list_single_2graphic_im_pane_t1_ParamLimits

0xd3b4,	// (0x0005472b) list_single_2graphic_im_pane_t1

0x626f,	// (0x0004d5e6) list_single_graphic_2heading_pane_fp_ParamLimits

0x626f,	// (0x0004d5e6) list_single_graphic_2heading_pane_fp

0xf100,	// (0x00056477) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf100,	// (0x00056477) list_single_graphic_2heading_pane_fp_g1

0x6288,	// (0x0004d5ff) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6288,	// (0x0004d5ff) list_single_graphic_2heading_pane_fp_g2

0x1763,	// (0x00048ada) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1763,	// (0x00048ada) list_single_graphic_2heading_pane_fp_g3

0x176f,	// (0x00048ae6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x176f,	// (0x00048ae6) list_single_graphic_2heading_pane_fp_g4

0x6294,	// (0x0004d60b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6294,	// (0x0004d60b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb63,	// (0x00056eda) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb63,	// (0x00056eda) list_single_graphic_2heading_pane_fp_g

0xf439,	// (0x000567b0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf439,	// (0x000567b0) list_single_graphic_2heading_pane_fp_t1

0xf138,	// (0x000564af) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf138,	// (0x000564af) list_single_graphic_2heading_pane_fp_t2

0xf44f,	// (0x000567c6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf44f,	// (0x000567c6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x00056fb5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x00056fb5) list_single_graphic_2heading_pane_fp_t

0x5c30,	// (0x0004cfa7) fep_hwr_write_pane_g5_ParamLimits

0x5c30,	// (0x0004cfa7) fep_hwr_write_pane_g5

0x5c3c,	// (0x0004cfb3) fep_hwr_write_pane_g6_ParamLimits

0x5c3c,	// (0x0004cfb3) fep_hwr_write_pane_g6

0x6516,	// (0x0004d88d) eswt_shell_pane_ParamLimits

0x35ed,	// (0x0004a964) bg_popup_window_pane_cp18_ParamLimits

0x39af,	// (0x0004ad26) heading_pane_cp70

0x6640,	// (0x0004d9b7) popup_eswt_tasktip_window_t1_ParamLimits

0xbcba,	// (0x00053031) aid_touch_tab_arrow_left

0xbcce,	// (0x00053045) aid_touch_tab_arrow_right

0xa5dc,	// (0x00051953) title_pane_g3_ParamLimits

0xa5dc,	// (0x00051953) title_pane_g3

0xaf7b,	// (0x000522f2) set_value_pane_g1

0xbbf0,	// (0x00052f67) popup_toolbar_trans_pane_ParamLimits

0x678e,	// (0x0004db05) aid_size_cell_tb_trans_pane_ParamLimits

0xafbc,	// (0x00052333) bg_tb_trans_pane_ParamLimits

0x67a0,	// (0x0004db17) grid_tb_trans_pane_ParamLimits

0xa94f,	// (0x00051cc6) cont_note_pane_ParamLimits

0xa94f,	// (0x00051cc6) cont_note_pane

0xacde,	// (0x00052055) cont_snote2_single_text_pane_ParamLimits

0xacde,	// (0x00052055) cont_snote2_single_text_pane

0xacde,	// (0x00052055) cont_snote2_single_graphic_pane_ParamLimits

0xacde,	// (0x00052055) cont_snote2_single_graphic_pane

0x3bdf,	// (0x0004af56) cont_note_wait_pane_ParamLimits

0x3bdf,	// (0x0004af56) cont_note_wait_pane

0x3bdf,	// (0x0004af56) cont_note_image_pane_ParamLimits

0x3bdf,	// (0x0004af56) cont_note_image_pane

0x6848,	// (0x0004dbbf) popup_note2_window_g1_ParamLimits

0x6848,	// (0x0004dbbf) popup_note2_window_g1

0x6879,	// (0x0004dbf0) popup_note2_window_t1_ParamLimits

0x6879,	// (0x0004dbf0) popup_note2_window_t1

0x68be,	// (0x0004dc35) popup_note2_window_t2_ParamLimits

0x68be,	// (0x0004dc35) popup_note2_window_t2

0x6903,	// (0x0004dc7a) popup_note2_window_t3_ParamLimits

0x6903,	// (0x0004dc7a) popup_note2_window_t3

0x6948,	// (0x0004dcbf) popup_note2_window_t4_ParamLimits

0x6948,	// (0x0004dcbf) popup_note2_window_t4

0xa9d3,	// (0x00051d4a) popup_note2_window_t5_ParamLimits

0xa9d3,	// (0x00051d4a) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x00056fc1) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x00056fc1) popup_note2_window_t

0x6977,	// (0x0004dcee) popup_note2_image_window_g1_ParamLimits

0x6977,	// (0x0004dcee) popup_note2_image_window_g1

0x6983,	// (0x0004dcfa) popup_note2_image_window_g2_ParamLimits

0x6983,	// (0x0004dcfa) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x00056fcc) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x00056fcc) popup_note2_image_window_g

0x6995,	// (0x0004dd0c) popup_note2_image_window_t1_ParamLimits

0x6995,	// (0x0004dd0c) popup_note2_image_window_t1

0x69ad,	// (0x0004dd24) popup_note2_image_window_t2_ParamLimits

0x69ad,	// (0x0004dd24) popup_note2_image_window_t2

0x69c5,	// (0x0004dd3c) popup_note2_image_window_t3_ParamLimits

0x69c5,	// (0x0004dd3c) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x00056fd1) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x00056fd1) popup_note2_image_window_t

0x3bed,	// (0x0004af64) popup_note2_wait_window_g1_ParamLimits

0x3bed,	// (0x0004af64) popup_note2_wait_window_g1

0x69e1,	// (0x0004dd58) popup_note2_wait_window_g2_ParamLimits

0x69e1,	// (0x0004dd58) popup_note2_wait_window_g2

0x3c05,	// (0x0004af7c) popup_note2_wait_window_g3_ParamLimits

0x3c05,	// (0x0004af7c) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x00056fd8) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x00056fd8) popup_note2_wait_window_g

0x69ed,	// (0x0004dd64) popup_note2_wait_window_t1_ParamLimits

0x69ed,	// (0x0004dd64) popup_note2_wait_window_t1

0x6a0b,	// (0x0004dd82) popup_note2_wait_window_t2_ParamLimits

0x6a0b,	// (0x0004dd82) popup_note2_wait_window_t2

0x6a29,	// (0x0004dda0) popup_note2_wait_window_t3_ParamLimits

0x6a29,	// (0x0004dda0) popup_note2_wait_window_t3

0x6a3b,	// (0x0004ddb2) popup_note2_wait_window_t4_ParamLimits

0x6a3b,	// (0x0004ddb2) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x00056fdf) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x00056fdf) popup_note2_wait_window_t

0x6a4d,	// (0x0004ddc4) wait_bar2_pane_ParamLimits

0x6a4d,	// (0x0004ddc4) wait_bar2_pane

0x6a65,	// (0x0004dddc) popup_snote2_single_text_window_g1_ParamLimits

0x6a65,	// (0x0004dddc) popup_snote2_single_text_window_g1

0x6a8d,	// (0x0004de04) popup_snote2_single_text_window_t1_ParamLimits

0x6a8d,	// (0x0004de04) popup_snote2_single_text_window_t1

0x6ad9,	// (0x0004de50) popup_snote2_single_text_window_t2_ParamLimits

0x6ad9,	// (0x0004de50) popup_snote2_single_text_window_t2

0x6b25,	// (0x0004de9c) popup_snote2_single_text_window_t3_ParamLimits

0x6b25,	// (0x0004de9c) popup_snote2_single_text_window_t3

0x6b66,	// (0x0004dedd) popup_snote2_single_text_window_t4_ParamLimits

0x6b66,	// (0x0004dedd) popup_snote2_single_text_window_t4

0x6b9c,	// (0x0004df13) popup_snote2_single_text_window_t5_ParamLimits

0x6b9c,	// (0x0004df13) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x00056fe8) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x00056fe8) popup_snote2_single_text_window_t

0x6bc7,	// (0x0004df3e) popup_snote2_single_graphic_window_g1_ParamLimits

0x6bc7,	// (0x0004df3e) popup_snote2_single_graphic_window_g1

0x6bef,	// (0x0004df66) popup_snote2_single_graphic_window_g2_ParamLimits

0x6bef,	// (0x0004df66) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x00056ff3) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x00056ff3) popup_snote2_single_graphic_window_g

0x6c17,	// (0x0004df8e) popup_snote2_single_graphic_window_t1_ParamLimits

0x6c17,	// (0x0004df8e) popup_snote2_single_graphic_window_t1

0x6c63,	// (0x0004dfda) popup_snote2_single_graphic_window_t2_ParamLimits

0x6c63,	// (0x0004dfda) popup_snote2_single_graphic_window_t2

0x6b25,	// (0x0004de9c) popup_snote2_single_graphic_window_t3_ParamLimits

0x6b25,	// (0x0004de9c) popup_snote2_single_graphic_window_t3

0x6b66,	// (0x0004dedd) popup_snote2_single_graphic_window_t4_ParamLimits

0x6b66,	// (0x0004dedd) popup_snote2_single_graphic_window_t4

0x6b9c,	// (0x0004df13) popup_snote2_single_graphic_window_t5_ParamLimits

0x6b9c,	// (0x0004df13) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x00056ff8) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x00056ff8) popup_snote2_single_graphic_window_t

0x56aa,	// (0x0004ca21) clock_nsta_pane_cp2_t1

0x56aa,	// (0x0004ca21) clock_nsta_pane_cp2_t2

0x0001,

0xfaa1,	// (0x00056e18) clock_nsta_pane_cp2_t

0xec87,	// (0x00055ffe) form_field_data_wide_pane_g1_ParamLimits

0xafca,	// (0x00052341) form_field_data_wide_pane_g2_ParamLimits

0xafca,	// (0x00052341) form_field_data_wide_pane_g2

0xafd6,	// (0x0005234d) form_field_data_wide_pane_g3_ParamLimits

0xafd6,	// (0x0005234d) form_field_data_wide_pane_g3

0x0002,

0xf659,	// (0x000569d0) form_field_data_wide_pane_g_ParamLimits

0xf659,	// (0x000569d0) form_field_data_wide_pane_g

0xceb4,	// (0x0005422b) grid_touch_3_pane_ParamLimits

0xceb4,	// (0x0005422b) grid_touch_3_pane

0xd3e5,	// (0x0005475c) cell_touch_3_pane_ParamLimits

0xd3e5,	// (0x0005475c) cell_touch_3_pane

0x5b9f,	// (0x0004cf16) cell_touch_3_pane_g1

0x5b9f,	// (0x0004cf16) cell_touch_3_pane_g2

0x0001,

0xfb26,	// (0x00056e9d) cell_touch_3_pane_g

0xaa2b,	// (0x00051da2) cont_query_data_pane

0xaa33,	// (0x00051daa) cont_query_data_pane_cp1

0x6ce2,	// (0x0004e059) button_value_adjust_pane_cp7

0x6cea,	// (0x0004e061) query_popup_pane_cp3

0x27f2,	// (0x00049b69) bg_popup_sub_pane_cp22_ParamLimits

0x0553,	// (0x000478ca) navi_navi_volume_pane_cp2

0x056e,	// (0x000478e5) popup_side_volume_key_window_g2

0x057d,	// (0x000478f4) popup_side_volume_key_window_g3

0x0002,

0xf6ef,	// (0x00056a66) popup_side_volume_key_window_g

0x059a,	// (0x00047911) popup_side_volume_key_window_t2

0x0001,

0xf6f6,	// (0x00056a6d) popup_side_volume_key_window_t

0x2aae,	// (0x00049e25) popup_side_volume_key_window_ParamLimits

0x9cee,	// (0x00051065) list_double_graphic_pane_g4_ParamLimits

0x9cee,	// (0x00051065) list_double_graphic_pane_g4

0xc059,	// (0x000533d0) list_single_2heading_msg_pane_ParamLimits

0xc059,	// (0x000533d0) list_single_2heading_msg_pane

0xc13a,	// (0x000534b1) list_single_2heading_msg_pane_g1_ParamLimits

0xc13a,	// (0x000534b1) list_single_2heading_msg_pane_g1

0xc146,	// (0x000534bd) list_single_2heading_msg_pane_g2_ParamLimits

0xc146,	// (0x000534bd) list_single_2heading_msg_pane_g2

0xc159,	// (0x000534d0) list_single_2heading_msg_pane_g3_ParamLimits

0xc159,	// (0x000534d0) list_single_2heading_msg_pane_g3

0xc165,	// (0x000534dc) list_single_2heading_msg_pane_g4_ParamLimits

0xc165,	// (0x000534dc) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x00057003) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x00057003) list_single_2heading_msg_pane_g

0xa288,	// (0x000515ff) list_single_2heading_msg_pane_t1_ParamLimits

0xa288,	// (0x000515ff) list_single_2heading_msg_pane_t1

0xa2b0,	// (0x00051627) list_single_2heading_msg_pane_t2_ParamLimits

0xa2b0,	// (0x00051627) list_single_2heading_msg_pane_t2

0xa31b,	// (0x00051692) list_single_2heading_msg_pane_t3_ParamLimits

0xa31b,	// (0x00051692) list_single_2heading_msg_pane_t3

0xf46f,	// (0x000567e6) list_single_2heading_msg_pane_t4_ParamLimits

0xf46f,	// (0x000567e6) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0005700c) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0005700c) list_single_2heading_msg_pane_t

0x6f74,	// (0x0004e2eb) title_pane_g4_ParamLimits

0x6f74,	// (0x0004e2eb) title_pane_g4

0x026e,	// (0x000475e5) title_pane_stacon_g3_ParamLimits

0x026e,	// (0x000475e5) title_pane_stacon_g3

0x680b,	// (0x0004db82) list_single_2graphic_im_pane_g4_ParamLimits

0x680b,	// (0x0004db82) list_single_2graphic_im_pane_g4

0x464f,	// (0x0004b9c6) popup_side_volume_key_window_cp

0x4e95,	// (0x0004c20c) main_idle_act2_pane_t1

0x0f8f,	// (0x00048306) toolbar_button_pane_g10

0xaed6,	// (0x0005224d) popup_toolbar_window_cp1

0x569b,	// (0x0004ca12) clock_nsta_pane_cp_t1

0x569b,	// (0x0004ca12) clock_nsta_pane_cp_t2

0x0001,

0xfa9c,	// (0x00056e13) clock_nsta_pane_cp_t

0x0553,	// (0x000478ca) navi_navi_volume_pane_cp2_ParamLimits

0x0562,	// (0x000478d9) popup_side_volume_key_window_g1_ParamLimits

0x056e,	// (0x000478e5) popup_side_volume_key_window_g2_ParamLimits

0x057d,	// (0x000478f4) popup_side_volume_key_window_g3_ParamLimits

0xf6ef,	// (0x00056a66) popup_side_volume_key_window_g_ParamLimits

0x14fd,	// (0x00048874) fep_hwr_aid_pane

0xd090,	// (0x00054407) bg_fep_hwr_top_pane_g4_ParamLimits

0x5c00,	// (0x0004cf77) fep_hwr_top_pane_g1_ParamLimits

0x5c12,	// (0x0004cf89) fep_hwr_top_pane_g2_ParamLimits

0x15b8,	// (0x0004892f) fep_hwr_top_pane_g3_ParamLimits

0xfaf1,	// (0x00056e68) fep_hwr_top_pane_g_ParamLimits

0x15cd,	// (0x00048944) fep_hwr_top_text_pane_ParamLimits

0x4404,	// (0x0004b77b) aid_touch_tab_arrow_arrow_2

0x440d,	// (0x0004b784) aid_touch_tab_arrow_left_2

0x1511,	// (0x00048888) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1548,	// (0x000488bf) fep_hwr_prediction_pane

0x5d68,	// (0x0004d0df) fep_vkb_prediction_pane

0xd1bc,	// (0x00054533) fep_vkb_side_pane_g3_ParamLimits

0xd1bc,	// (0x00054533) fep_vkb_side_pane_g3

0x5e1a,	// (0x0004d191) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x62e8,	// (0x0004d65f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x62f5,	// (0x0004d66c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9b,	// (0x00056f12) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6d11,	// (0x0004e088) fep_hwr_prediction_pane_g1

0x194b,	// (0x00048cc2) fep_hwr_prediction_pane_g2

0x1953,	// (0x00048cca) fep_hwr_prediction_pane_g3

0x195b,	// (0x00048cd2) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x00057015) fep_hwr_prediction_pane_g

0x6d11,	// (0x0004e088) fep_vkb_prediction_pane_g1

0x6d1b,	// (0x0004e092) fep_vkb_prediction_pane_g2

0x6d23,	// (0x0004e09a) fep_vkb_prediction_pane_g3

0x6d2b,	// (0x0004e0a2) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0005701e) fep_vkb_prediction_pane_g

0x129c,	// (0x00048613) slider_set_pane_g3

0x12b0,	// (0x00048627) slider_set_pane_g4

0x12c8,	// (0x0004863f) slider_set_pane_g5

0x129c,	// (0x00048613) slider_set_pane_g6

0x12de,	// (0x00048655) slider_set_pane_g7

0x4ac5,	// (0x0004be3c) slider_form_pane_g3

0x4ace,	// (0x0004be45) slider_form_pane_g4

0x4ad6,	// (0x0004be4d) slider_form_pane_g5

0x4ac5,	// (0x0004be3c) slider_form_pane_g6

0xcd26,	// (0x0005409d) slider_form_pane_g7

0x5159,	// (0x0004c4d0) slider_set_pane_vc_g3

0x5162,	// (0x0004c4d9) slider_set_pane_vc_g4

0x516b,	// (0x0004c4e2) slider_set_pane_vc_g5

0x5159,	// (0x0004c4d0) slider_set_pane_vc_g6

0x5174,	// (0x0004c4eb) slider_set_pane_vc_g7

0x534a,	// (0x0004c6c1) slider_form_pane_vc_g1

0x5353,	// (0x0004c6ca) slider_form_pane_vc_g2

0x535c,	// (0x0004c6d3) slider_form_pane_vc_g3

0x534a,	// (0x0004c6c1) slider_form_pane_vc_g4

0x5365,	// (0x0004c6dc) slider_form_pane_vc_g5

0x0004,

0xfa6e,	// (0x00056de5) slider_form_pane_vc_g

0x6f56,	// (0x0004e2cd) main_idle_act3_pane

0x6d33,	// (0x0004e0aa) ai3_links_pane

0xd431,	// (0x000547a8) popup_ai3_data_window_ParamLimits

0xd431,	// (0x000547a8) popup_ai3_data_window

0x6f56,	// (0x0004e2cd) grid_ai3_links_pane

0xd44f,	// (0x000547c6) cell_ai3_links_pane_ParamLimits

0xd44f,	// (0x000547c6) cell_ai3_links_pane

0x6d74,	// (0x0004e0eb) bg_popup_sub_pane_cp11

0x6d81,	// (0x0004e0f8) cell_ai3_links_pane_g1

0x6f56,	// (0x0004e2cd) bg_popup_sub_pane_cp12

0x6da6,	// (0x0004e11d) heading_ai3_data_pane

0x6dae,	// (0x0004e125) list_ai3_gene_pane

0x6dba,	// (0x0004e131) popup_ai3_data_window_g1

0x6dc2,	// (0x0004e139) heading_ai3_data_pane_g1

0x6dca,	// (0x0004e141) heading_ai3_data_pane_t1

0x6dd8,	// (0x0004e14f) list_double_ai3_gene_pane_ParamLimits

0x6dd8,	// (0x0004e14f) list_double_ai3_gene_pane

0x6de5,	// (0x0004e15c) list_single_ai3_gene_pane_ParamLimits

0x6de5,	// (0x0004e15c) list_single_ai3_gene_pane

0x5b64,	// (0x0004cedb) list_highlight_pane_cp7_ParamLimits

0x5b64,	// (0x0004cedb) list_highlight_pane_cp7

0x6df2,	// (0x0004e169) list_single_a13_gene_pane_t1_ParamLimits

0x6df2,	// (0x0004e169) list_single_a13_gene_pane_t1

0x6e09,	// (0x0004e180) list_single_ai3_gene_pane_g1

0x6e12,	// (0x0004e189) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x00057027) list_single_ai3_gene_pane_g

0x6e1a,	// (0x0004e191) list_double_ai3_gene_pane_g1_ParamLimits

0x6e1a,	// (0x0004e191) list_double_ai3_gene_pane_g1

0x6e26,	// (0x0004e19d) list_double_ai3_gene_pane_t1_ParamLimits

0x6e26,	// (0x0004e19d) list_double_ai3_gene_pane_t1

0x6e42,	// (0x0004e1b9) list_double_ai3_gene_pane_t2_ParamLimits

0x6e42,	// (0x0004e1b9) list_double_ai3_gene_pane_t2

0x6e57,	// (0x0004e1ce) list_double_ai3_gene_pane_t3_ParamLimits

0x6e57,	// (0x0004e1ce) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0005702c) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0005702c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf465,	// (0x000567dc) aid_size_min_col_2

0xd41b,	// (0x00054792) aid_size_min_msg_ParamLimits

0xd41b,	// (0x00054792) aid_size_min_msg

0xd1d0,	// (0x00054547) fep_vkb_top_text_pane_g2_ParamLimits

0xd1d0,	// (0x00054547) fep_vkb_top_text_pane_g2

0x0001,

0xfb21,	// (0x00056e98) fep_vkb_top_text_pane_g_ParamLimits

0xfb21,	// (0x00056e98) fep_vkb_top_text_pane_g

0x6f56,	// (0x0004e2cd) main_hc_apps_shell_pane

0x6e74,	// (0x0004e1eb) grid_hc_apps_pane_ParamLimits

0x6e74,	// (0x0004e1eb) grid_hc_apps_pane

0x6e86,	// (0x0004e1fd) list_hc_apps_pane

0x6e8e,	// (0x0004e205) scroll_pane_cp37_ParamLimits

0x6e8e,	// (0x0004e205) scroll_pane_cp37

0xd469,	// (0x000547e0) cell_hc_apps_pane_ParamLimits

0xd469,	// (0x000547e0) cell_hc_apps_pane

0xd52f,	// (0x000548a6) cell_hc_apps_pane_g1_ParamLimits

0xd52f,	// (0x000548a6) cell_hc_apps_pane_g1

0x702e,	// (0x0004e3a5) cell_hc_apps_pane_g2_ParamLimits

0x702e,	// (0x0004e3a5) cell_hc_apps_pane_g2

0x704a,	// (0x0004e3c1) cell_hc_apps_pane_g3_ParamLimits

0x704a,	// (0x0004e3c1) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x00057033) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x00057033) cell_hc_apps_pane_g

0xd55b,	// (0x000548d2) cell_hc_apps_pane_t1_ParamLimits

0xd55b,	// (0x000548d2) cell_hc_apps_pane_t1

0xa94f,	// (0x00051cc6) grid_highlight_pane_cp10_ParamLimits

0xa94f,	// (0x00051cc6) grid_highlight_pane_cp10

0xd599,	// (0x00054910) list_single_hc_apps_pane_ParamLimits

0xd599,	// (0x00054910) list_single_hc_apps_pane

0xd5cc,	// (0x00054943) list_single_hc_apps_pane_g1

0xc17d,	// (0x000534f4) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0005703a) list_single_hc_apps_pane_g

0xc196,	// (0x0005350d) list_single_hc_apps_pane_g2_copy1

0xa389,	// (0x00051700) list_single_hc_apps_pane_t1

0x6fb8,	// (0x0004e32f) bg_set_opt_pane_cp_ParamLimits

0xf49e,	// (0x00056815) setting_slider_pane_t1_ParamLimits

0xf4b7,	// (0x0005682e) setting_slider_pane_t2_ParamLimits

0xf4d1,	// (0x00056848) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x000568ae) setting_slider_pane_t_ParamLimits

0xf4e9,	// (0x00056860) slider_set_pane_ParamLimits

0x0824,	// (0x00047b9b) control_pane_g5_ParamLimits

0x0824,	// (0x00047b9b) control_pane_g5

0x48f8,	// (0x0004bc6f) slider_set_pane_g1_ParamLimits

0x1290,	// (0x00048607) slider_set_pane_g2_ParamLimits

0x129c,	// (0x00048613) slider_set_pane_g3_ParamLimits

0x12b0,	// (0x00048627) slider_set_pane_g4_ParamLimits

0x12c8,	// (0x0004863f) slider_set_pane_g5_ParamLimits

0x129c,	// (0x00048613) slider_set_pane_g6_ParamLimits

0x12de,	// (0x00048655) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x00056cb4) slider_set_pane_g_ParamLimits

0x2b87,	// (0x00049efe) navi_icon_text_pane_ParamLimits

0xbc81,	// (0x00052ff8) aid_fill_nsta_2_ParamLimits

0xbcba,	// (0x00053031) aid_touch_tab_arrow_left_ParamLimits

0xbcce,	// (0x00053045) aid_touch_tab_arrow_right_ParamLimits

0xbd69,	// (0x000530e0) clock_nsta_pane_ParamLimits

0xcaa4,	// (0x00053e1b) navi_icon_pane_g1_ParamLimits

0xcab0,	// (0x00053e27) navi_text_pane_t1_ParamLimits

0xcf8d,	// (0x00054304) navi_icon_text_pane_g1_ParamLimits

0xcf99,	// (0x00054310) navi_icon_text_pane_t1_ParamLimits

0xd5cc,	// (0x00054943) list_single_hc_apps_pane_g1_ParamLimits

0xc17d,	// (0x000534f4) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0005703a) list_single_hc_apps_pane_g_ParamLimits

0xc196,	// (0x0005350d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa389,	// (0x00051700) list_single_hc_apps_pane_t1_ParamLimits

0xa4cb,	// (0x00051842) popup_toolbar2_fixed_window_ParamLimits

0xa4cb,	// (0x00051842) popup_toolbar2_fixed_window

0xbbe6,	// (0x00052f5d) popup_toolbar2_float_window

0x6f56,	// (0x0004e2cd) bg_popup_sub_pane_cp27

0x7104,	// (0x0004e47b) grid_toolbar2_float_pane

0x6f56,	// (0x0004e2cd) bg_popup_sub_pane_cp26

0x7104,	// (0x0004e47b) grid_toolbar2_fixed_pane

0xd5e5,	// (0x0005495c) cell_toolbar2_fixed_pane_ParamLimits

0xd5e5,	// (0x0005495c) cell_toolbar2_fixed_pane

0xd5ff,	// (0x00054976) cell_toolbar2_fixed_pane_g1

0x7125,	// (0x0004e49c) toolbar2_fixed_button_pane

0x3579,	// (0x0004a8f0) toolbar2_fixed_button_pane_g1

0x3581,	// (0x0004a8f8) toolbar2_fixed_button_pane_g2

0x3589,	// (0x0004a900) toolbar2_fixed_button_pane_g3

0x3591,	// (0x0004a908) toolbar2_fixed_button_pane_g4

0x3599,	// (0x0004a910) toolbar2_fixed_button_pane_g5

0x35a1,	// (0x0004a918) toolbar2_fixed_button_pane_g6

0x35a9,	// (0x0004a920) toolbar2_fixed_button_pane_g7

0x35b1,	// (0x0004a928) toolbar2_fixed_button_pane_g8

0x35b9,	// (0x0004a930) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x00056bb6) toolbar2_fixed_button_pane_g

0x712d,	// (0x0004e4a4) cell_toolbar2_float_pane_ParamLimits

0x712d,	// (0x0004e4a4) cell_toolbar2_float_pane

0x713e,	// (0x0004e4b5) cell_toolbar2_float_pane_g1

0x7125,	// (0x0004e49c) toolbar2_fixed_button_pane_cp

0xd0b8,	// (0x0005442f) fep_vkb_accented_list_pane_ParamLimits

0xd0b8,	// (0x0005442f) fep_vkb_accented_list_pane

0x172f,	// (0x00048aa6) bg_popup_fep_shadow_pane_g9

0x2d1a,	// (0x0004a091) bg_popup_fep_shadow_pane_cp3

0xe56b,	// (0x000558e2) list_accented_list_pane

0x7147,	// (0x0004e4be) list_single_accented_list_pane_ParamLimits

0x7147,	// (0x0004e4be) list_single_accented_list_pane

0x2d1a,	// (0x0004a091) list_highlight_pane_cp10

0x7158,	// (0x0004e4cf) list_single_accented_list_pane_t1

0xbb02,	// (0x00052e79) popup_slider_window_ParamLimits

0xbb02,	// (0x00052e79) popup_slider_window

0x6cf2,	// (0x0004e069) aid_indentation_list_msg

0xd702,	// (0x00054a79) bg_popup_window_pane_cp19

0x7294,	// (0x0004e60b) popup_slider_window_g1

0x72b0,	// (0x0004e627) popup_slider_window_g2

0x72cc,	// (0x0004e643) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0005703f) popup_slider_window_g

0x7332,	// (0x0004e6a9) popup_slider_window_t1

0x73a6,	// (0x0004e71d) small_volume_slider_vertical_pane

0x5b9f,	// (0x0004cf16) small_volume_slider_vertical_pane_g1

0x5b9f,	// (0x0004cf16) small_volume_slider_vertical_pane_g2

0x73c2,	// (0x0004e739) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x00057051) small_volume_slider_vertical_pane_g

0xf16a,	// (0x000564e1) area_side_right_pane_ParamLimits

0xf16a,	// (0x000564e1) area_side_right_pane

0xc1b2,	// (0x00053529) aid_size_side_button_ParamLimits

0xc1b2,	// (0x00053529) aid_size_side_button

0xc1cb,	// (0x00053542) grid_sctrl_middle_pane_ParamLimits

0xc1cb,	// (0x00053542) grid_sctrl_middle_pane

0x19cb,	// (0x00048d42) sctrl_sk_bottom_pane

0x19dc,	// (0x00048d53) sctrl_sk_top_pane

0x19ee,	// (0x00048d65) aid_touch_sctrl_top

0xa94f,	// (0x00051cc6) bg_sctrl_sk_pane_ParamLimits

0xa94f,	// (0x00051cc6) bg_sctrl_sk_pane

0x19fb,	// (0x00048d72) sctrl_sk_top_pane_g1

0x1a08,	// (0x00048d7f) sctrl_sk_top_pane_t1

0x19ee,	// (0x00048d65) aid_touch_sctrl_bottom

0xa94f,	// (0x00051cc6) bg_sctrl_sk_pane_cp_ParamLimits

0xa94f,	// (0x00051cc6) bg_sctrl_sk_pane_cp

0x1a23,	// (0x00048d9a) sctrl_sk_bottom_pane_g1

0x1a08,	// (0x00048d7f) sctrl_sk_bottom_pane_t1

0xc1ea,	// (0x00053561) cell_sctrl_middle_pane_ParamLimits

0xc1ea,	// (0x00053561) cell_sctrl_middle_pane

0xc211,	// (0x00053588) aid_touch_sctrl_middle_ParamLimits

0xc211,	// (0x00053588) aid_touch_sctrl_middle

0xa94f,	// (0x00051cc6) bg_sctrl_middle_pane_ParamLimits

0xa94f,	// (0x00051cc6) bg_sctrl_middle_pane

0x8166,	// (0x0004f4dd) cell_sctrl_middle_pane_g1_ParamLimits

0x8166,	// (0x0004f4dd) cell_sctrl_middle_pane_g1

0xc225,	// (0x0005359c) cell_sctrl_middle_pane_g2_ParamLimits

0xc225,	// (0x0005359c) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0005705d) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0005705d) cell_sctrl_middle_pane_g

0x3579,	// (0x0004a8f0) bg_sctrl_middle_pane_g1

0x3581,	// (0x0004a8f8) bg_sctrl_middle_pane_g2

0x3589,	// (0x0004a900) bg_sctrl_middle_pane_g3

0x3591,	// (0x0004a908) bg_sctrl_middle_pane_g4

0x3599,	// (0x0004a910) bg_sctrl_middle_pane_g5

0x35a1,	// (0x0004a918) bg_sctrl_middle_pane_g6

0x35a9,	// (0x0004a920) bg_sctrl_middle_pane_g7

0x35b1,	// (0x0004a928) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x00057062) bg_sctrl_middle_pane_g

0x35b9,	// (0x0004a930) bg_sctrl_middle_pane_g8_copy1

0x3579,	// (0x0004a8f0) bg_sctrl_sk_pane_g1

0x3581,	// (0x0004a8f8) bg_sctrl_sk_pane_g2

0x3589,	// (0x0004a900) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x00056bb6) bg_sctrl_sk_pane_g

0xae9c,	// (0x00052213) aid_size_touch_scroll_bar

0x3591,	// (0x0004a908) bg_sctrl_sk_pane_g4

0x3599,	// (0x0004a910) bg_sctrl_sk_pane_g5

0x35a1,	// (0x0004a918) bg_sctrl_sk_pane_g6

0x35a9,	// (0x0004a920) bg_sctrl_sk_pane_g7

0x35b1,	// (0x0004a928) bg_sctrl_sk_pane_g8

0x35b9,	// (0x0004a930) bg_sctrl_sk_pane_g9

0x09c4,	// (0x00047d3b) popup_fep_china_hwr2_fs_candidate_window

0xb5b4,	// (0x0005292b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb5b4,	// (0x0005292b) popup_fep_china_hwr2_fs_control_window

0x5e1a,	// (0x0004d191) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x00057058) sctrl_sk_top_pane_g

0xd7ba,	// (0x00054b31) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7ba,	// (0x00054b31) aid_fep_china_hwr2_fs_cell

0xd7d0,	// (0x00054b47) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7d0,	// (0x00054b47) bg_popup_fep_shadow_pane_cp4

0xd7e7,	// (0x00054b5e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7e7,	// (0x00054b5e) bg_popup_fep_shadow_pane_cp5

0xd7f9,	// (0x00054b70) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7f9,	// (0x00054b70) popup_fep_china_hwr2_fs_control_bar_grid

0xd80d,	// (0x00054b84) popup_fep_china_hwr2_fs_control_funtion_grid

0x7421,	// (0x0004e798) aid_fep_china_hwr2_fs_candi_cell

0x6f56,	// (0x0004e2cd) bg_popup_fep_shadow_pane_cp6

0x742b,	// (0x0004e7a2) popup_fep_china_hwr2_fs_candidate_grid

0xd815,	// (0x00054b8c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd815,	// (0x00054b8c) cell_fep_china_hwr2_fs_funtion_grid

0x5b9f,	// (0x0004cf16) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x744d,	// (0x0004e7c4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x744d,	// (0x0004e7c4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x745b,	// (0x0004e7d2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x745b,	// (0x0004e7d2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x00057073) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x00057073) cell_fep_china_hwr2_fs_funtion_grid_g

0xd82d,	// (0x00054ba4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd82d,	// (0x00054ba4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd842,	// (0x00054bb9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd842,	// (0x00054bb9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x00057078) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x00057078) cell_fep_china_hwr2_fs_funtion_grid_t

0x74a2,	// (0x0004e819) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x74aa,	// (0x0004e821) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x74b2,	// (0x0004e829) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0005707d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x74ba,	// (0x0004e831) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x74ba,	// (0x0004e831) cell_fep_china_hwr2_fs_candidate_grid

0x74d9,	// (0x0004e850) popup_fep_china_hwr2_fs_candidate_grid_g20

0x74e1,	// (0x0004e858) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5b9f,	// (0x0004cf16) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5b9f,	// (0x0004cf16) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb26,	// (0x00056e9d) cell_fep_china_hwr2_fs_candidate_grid_g

0x74e9,	// (0x0004e860) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3165,	// (0x0004a4dc) clock_nsta_pane_cp_24_ParamLimits

0x3165,	// (0x0004a4dc) clock_nsta_pane_cp_24

0x31e5,	// (0x0004a55c) indicator_nsta_pane_cp_24_ParamLimits

0x31e5,	// (0x0004a55c) indicator_nsta_pane_cp_24

0x4262,	// (0x0004b5d9) heading_pane_g1

0x0001,

0xf8a4,	// (0x00056c1b) heading_pane_g

0x4cdc,	// (0x0004c053) grid_sct_catagory_button_pane

0x4d0e,	// (0x0004c085) scroll_pane_cp5_ParamLimits

0x5806,	// (0x0004cb7d) button_value_adjust_pane_cp5_ParamLimits

0x5806,	// (0x0004cb7d) button_value_adjust_pane_cp5

0x58eb,	// (0x0004cc62) form2_midp_time_pane_ParamLimits

0x74f7,	// (0x0004e86e) cell_sct_catagory_button_pane_ParamLimits

0x74f7,	// (0x0004e86e) cell_sct_catagory_button_pane

0x5b64,	// (0x0004cedb) bg_button_pane_cp01_ParamLimits

0x5b64,	// (0x0004cedb) bg_button_pane_cp01

0x5b9f,	// (0x0004cf16) cell_sct_catagory_button_pane_g1

0xbb83,	// (0x00052efa) popup_tb_extension_window

0xd85e,	// (0x00054bd5) aid_size_cell_ext_ParamLimits

0xd85e,	// (0x00054bd5) aid_size_cell_ext

0xacde,	// (0x00052055) bg_tb_trans_pane_cp1_ParamLimits

0xacde,	// (0x00052055) bg_tb_trans_pane_cp1

0xd884,	// (0x00054bfb) grid_tb_ext_pane_ParamLimits

0xd884,	// (0x00054bfb) grid_tb_ext_pane

0xd8c1,	// (0x00054c38) cell_tb_ext_pane_ParamLimits

0xd8c1,	// (0x00054c38) cell_tb_ext_pane

0xd8e9,	// (0x00054c60) cell_tb_ext_pane_g1_ParamLimits

0xd8e9,	// (0x00054c60) cell_tb_ext_pane_g1

0x758b,	// (0x0004e902) cell_tb_ext_pane_t1

0xa94f,	// (0x00051cc6) list_highlight_pane_cp11_ParamLimits

0xa94f,	// (0x00051cc6) list_highlight_pane_cp11

0xa4e0,	// (0x00051857) popup_uni_indicator_window_ParamLimits

0xa4e0,	// (0x00051857) popup_uni_indicator_window

0xafbc,	// (0x00052333) bg_popup_sub_pane_cp14

0x75a8,	// (0x0004e91f) list_uniindi_pane

0x75b4,	// (0x0004e92b) uniindi_top_pane

0xa94f,	// (0x00051cc6) bg_uniindi_top_pane

0x75d5,	// (0x0004e94c) uniindi_top_pane_g1

0x75eb,	// (0x0004e962) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x00057084) uniindi_top_pane_g

0x7615,	// (0x0004e98c) uniindi_top_pane_t1

0x7641,	// (0x0004e9b8) list_single_uniindi_pane_ParamLimits

0x7641,	// (0x0004e9b8) list_single_uniindi_pane

0x5b9f,	// (0x0004cf16) bg_uniindi_top_pane_g1

0x7654,	// (0x0004e9cb) list_single_uniindi_pane_g1

0x7667,	// (0x0004e9de) list_single_uniindi_pane_t1

0x6f56,	// (0x0004e2cd) control_bg_pane

0x768c,	// (0x0004ea03) bg_sctrl_sk_pane_cp1

0x7695,	// (0x0004ea0c) bg_sctrl_sk_pane_cp2

0x769e,	// (0x0004ea15) control_bg_pane_g1

0x76a7,	// (0x0004ea1e) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0005708d) control_bg_pane_g

0x563e,	// (0x0004c9b5) cell_indicator_nsta_pane_g1_ParamLimits

0xcef1,	// (0x00054268) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8a,	// (0x00056e01) cell_indicator_nsta_pane_g_ParamLimits

0xf0d6,	// (0x0005644d) form2_midp_time_pane_t1_ParamLimits

0x14ef,	// (0x00048866) main_idle_act4_pane_ParamLimits

0x14ef,	// (0x00048866) main_idle_act4_pane

0xbb83,	// (0x00052efa) popup_tb_extension_window_ParamLimits

0xd8a9,	// (0x00054c20) tb_ext_find_pane_ParamLimits

0xd8a9,	// (0x00054c20) tb_ext_find_pane

0x76b0,	// (0x0004ea27) ai_gene_pane_1_cp1

0x2e64,	// (0x0004a1db) ai_gene_pane_2_cp1

0x76b8,	// (0x0004ea2f) list_single_idle_plugin_calendar_pane

0x76c1,	// (0x0004ea38) list_single_idle_plugin_notification_pane

0x76ca,	// (0x0004ea41) list_single_idle_plugin_player_pane

0xd906,	// (0x00054c7d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd906,	// (0x00054c7d) list_single_idle_plugin_shortcut_pane

0xd92e,	// (0x00054ca5) main_idle_act4_pane_t1

0xd946,	// (0x00054cbd) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x00057092) main_idle_act4_pane_t

0xd95e,	// (0x00054cd5) middle_sk_idle_act4_pane_ParamLimits

0xd95e,	// (0x00054cd5) middle_sk_idle_act4_pane

0xd97a,	// (0x00054cf1) popup_clock_digital_analogue_window_cp2

0xd9a1,	// (0x00054d18) shortcut_wheel_idle_act4_pane_ParamLimits

0xd9a1,	// (0x00054d18) shortcut_wheel_idle_act4_pane

0x5b9f,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g1

0x5b9f,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g2

0x5b9f,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g3

0x5b9f,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g4

0x5b9f,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g5

0x775d,	// (0x0004ead4) shortcut_wheel_idle_act4_pane_g6

0x7765,	// (0x0004eadc) shortcut_wheel_idle_act4_pane_g7

0x776d,	// (0x0004eae4) shortcut_wheel_idle_act4_pane_g8

0x7775,	// (0x0004eaec) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x00057097) shortcut_wheel_idle_act4_pane_g

0xd090,	// (0x00054407) middle_sk_idle_act4_pane_g1_ParamLimits

0xd090,	// (0x00054407) middle_sk_idle_act4_pane_g1

0xda1e,	// (0x00054d95) middle_sk_idle_act4_pane_g2_ParamLimits

0xda1e,	// (0x00054d95) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x000570ba) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x000570ba) middle_sk_idle_act4_pane_g

0xda36,	// (0x00054dad) middle_sk_idle_act4_pane_t1_ParamLimits

0xda36,	// (0x00054dad) middle_sk_idle_act4_pane_t1

0xda65,	// (0x00054ddc) grid_ai_shortcut_pane_ParamLimits

0xda65,	// (0x00054ddc) grid_ai_shortcut_pane

0xda82,	// (0x00054df9) list_highlight_pane_cp16_ParamLimits

0xda82,	// (0x00054df9) list_highlight_pane_cp16

0xda8f,	// (0x00054e06) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xda8f,	// (0x00054e06) list_single_idle_plugin_shortcut_pane_g1

0xda9b,	// (0x00054e12) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xda9b,	// (0x00054e12) list_single_idle_plugin_shortcut_pane_g2

0xdab9,	// (0x00054e30) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdab9,	// (0x00054e30) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x000570bf) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x000570bf) list_single_idle_plugin_shortcut_pane_g

0xdace,	// (0x00054e45) cell_ai_shortcut_pane_ParamLimits

0xdace,	// (0x00054e45) cell_ai_shortcut_pane

0xdae4,	// (0x00054e5b) cell_ai_shortcut_pane_g1_ParamLimits

0xdae4,	// (0x00054e5b) cell_ai_shortcut_pane_g1

0x76b0,	// (0x0004ea27) ai_gene_pane_1_cp2

0x78a6,	// (0x0004ec1d) ai_gene_pane_2_cp2

0x78ae,	// (0x0004ec25) list_highlight_pane_cp15

0x78b7,	// (0x0004ec2e) list_single_idle_plugin_calendar_pane_g1

0x78ae,	// (0x0004ec25) list_highlight_pane_cp17

0x78bf,	// (0x0004ec36) list_single_idle_plugin_calendar_pane_g1_copy1

0x78c7,	// (0x0004ec3e) list_single_idle_plugin_player_pane_g1

0x4f43,	// (0x0004c2ba) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x000570c6) list_single_idle_plugin_player_pane_g

0x78cf,	// (0x0004ec46) list_single_idle_plugin_player_pane_t1

0x78dd,	// (0x0004ec54) list_single_idle_plugin_player_pane_t2

0x78eb,	// (0x0004ec62) list_single_idle_plugin_player_pane_t3

0x78f9,	// (0x0004ec70) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x000570cb) list_single_idle_plugin_player_pane_t

0x7907,	// (0x0004ec7e) wait_bar_pane_cp15

0x790f,	// (0x0004ec86) grid_ai_notification_pane

0x4f43,	// (0x0004c2ba) list_single_idle_plugin_notification_pane_g1

0xdb06,	// (0x00054e7d) cell_ai_notification_pane_ParamLimits

0xdb06,	// (0x00054e7d) cell_ai_notification_pane

0x7925,	// (0x0004ec9c) cell_ai_notification_pane_g1

0x792d,	// (0x0004eca4) cell_ai_notification_pane_t1

0xdb13,	// (0x00054e8a) tb_ext_find_button_pane

0xdb1b,	// (0x00054e92) tb_ext_find_pane_g1

0xdb23,	// (0x00054e9a) tb_ext_find_pane_t1

0x26ed,	// (0x00049a64) tb_ext_find_button_pane_g1

0x7959,	// (0x0004ecd0) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x000570d4) tb_ext_find_button_pane_g

0xd92e,	// (0x00054ca5) main_idle_act4_pane_t1_ParamLimits

0xd946,	// (0x00054cbd) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x00057092) main_idle_act4_pane_t_ParamLimits

0xd97a,	// (0x00054cf1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd991,	// (0x00054d08) sat_plugin_idle_act4_pane_ParamLimits

0xd991,	// (0x00054d08) sat_plugin_idle_act4_pane

0xdb31,	// (0x00054ea8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdb31,	// (0x00054ea8) sat_plugin_idle_act4_pane_t1

0xdb49,	// (0x00054ec0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdb49,	// (0x00054ec0) sat_plugin_idle_act4_pane_t2

0xdb61,	// (0x00054ed8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdb61,	// (0x00054ed8) sat_plugin_idle_act4_pane_t3

0xdb79,	// (0x00054ef0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdb79,	// (0x00054ef0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x000570d9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x000570d9) sat_plugin_idle_act4_pane_t

0xf308,	// (0x0005667f) popup_battery_window_ParamLimits

0xf308,	// (0x0005667f) popup_battery_window

0xa94f,	// (0x00051cc6) bg_popup_sub_pane_cp25_ParamLimits

0xa94f,	// (0x00051cc6) bg_popup_sub_pane_cp25

0x79ae,	// (0x0004ed25) popup_battery_window_g1_ParamLimits

0x79ae,	// (0x0004ed25) popup_battery_window_g1

0x79ba,	// (0x0004ed31) popup_battery_window_t1_ParamLimits

0x79ba,	// (0x0004ed31) popup_battery_window_t1

0x79cc,	// (0x0004ed43) popup_battery_window_t2_ParamLimits

0x79cc,	// (0x0004ed43) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x000570e2) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x000570e2) popup_battery_window_t

0xb331,	// (0x000526a8) midp_canvas_pane_ParamLimits

0xb38d,	// (0x00052704) midp_keypad_pane_ParamLimits

0xb38d,	// (0x00052704) midp_keypad_pane

0x3049,	// (0x0004a3c0) main_midp_pane_ParamLimits

0x56b9,	// (0x0004ca30) signal_pane_g2_cp_ParamLimits

0xdb91,	// (0x00054f08) aid_size_cell_midp_keypad_ParamLimits

0xdb91,	// (0x00054f08) aid_size_cell_midp_keypad

0xdbaf,	// (0x00054f26) midp_keyp_game_grid_pane_ParamLimits

0xdbaf,	// (0x00054f26) midp_keyp_game_grid_pane

0xdbd6,	// (0x00054f4d) midp_keyp_rocker_pane_ParamLimits

0xdbd6,	// (0x00054f4d) midp_keyp_rocker_pane

0xdc25,	// (0x00054f9c) midp_keyp_sk_left_pane_ParamLimits

0xdc25,	// (0x00054f9c) midp_keyp_sk_left_pane

0xdc7b,	// (0x00054ff2) midp_keyp_sk_right_pane_ParamLimits

0xdc7b,	// (0x00054ff2) midp_keyp_sk_right_pane

0x6f56,	// (0x0004e2cd) bg_button_pane_cp03

0xdcd1,	// (0x00055048) midp_keyp_sk_left_pane_g1

0x6f56,	// (0x0004e2cd) bg_button_pane_cp04

0xdcd1,	// (0x00055048) midp_keyp_sk_right_pane_g1

0x5b9f,	// (0x0004cf16) midp_keyp_rocker_pane_g1

0xdcd9,	// (0x00055050) keyp_game_cell_pane_ParamLimits

0xdcd9,	// (0x00055050) keyp_game_cell_pane

0x6f56,	// (0x0004e2cd) bg_button_pane_cp02

0xdcff,	// (0x00055076) keyp_game_cell_pane_g1

0xa477,	// (0x000517ee) popup_fep_vkb2_window_ParamLimits

0xa477,	// (0x000517ee) popup_fep_vkb2_window

0xc237,	// (0x000535ae) aid_size_cell_vkb2_ParamLimits

0xc237,	// (0x000535ae) aid_size_cell_vkb2

0xc263,	// (0x000535da) popup_fep_vkb2_window_g1_ParamLimits

0xc263,	// (0x000535da) popup_fep_vkb2_window_g1

0xc2b3,	// (0x0005362a) vkb2_area_bottom_pane_ParamLimits

0xc2b3,	// (0x0005362a) vkb2_area_bottom_pane

0xc30f,	// (0x00053686) vkb2_area_keypad_pane_ParamLimits

0xc30f,	// (0x00053686) vkb2_area_keypad_pane

0xc35d,	// (0x000536d4) vkb2_area_top_pane_ParamLimits

0xc35d,	// (0x000536d4) vkb2_area_top_pane

0xc3ea,	// (0x00053761) vkb2_top_entry_pane_ParamLimits

0xc3ea,	// (0x00053761) vkb2_top_entry_pane

0xc417,	// (0x0005378e) vkb2_top_grid_left_pane_ParamLimits

0xc417,	// (0x0005378e) vkb2_top_grid_left_pane

0xc438,	// (0x000537af) vkb2_top_grid_right_pane_ParamLimits

0xc438,	// (0x000537af) vkb2_top_grid_right_pane

0x1c8f,	// (0x00049006) vkb2_cell_keypad_pane_ParamLimits

0x1c8f,	// (0x00049006) vkb2_cell_keypad_pane

0xc480,	// (0x000537f7) vkb2_area_bottom_grid_pane_ParamLimits

0xc480,	// (0x000537f7) vkb2_area_bottom_grid_pane

0xc4aa,	// (0x00053821) vkb2_area_bottom_pane_g1_ParamLimits

0xc4aa,	// (0x00053821) vkb2_area_bottom_pane_g1

0xc4d0,	// (0x00053847) vkb2_area_bottom_pane_g2_ParamLimits

0xc4d0,	// (0x00053847) vkb2_area_bottom_pane_g2

0xc501,	// (0x00053878) vkb2_area_bottom_pane_g3_ParamLimits

0xc501,	// (0x00053878) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x000570e7) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x000570e7) vkb2_area_bottom_pane_g

0x1e39,	// (0x000491b0) vkb2_top_cell_left_pane_ParamLimits

0x1e39,	// (0x000491b0) vkb2_top_cell_left_pane

0xdd08,	// (0x0005507f) vkb2_top_entry_pane_g1_ParamLimits

0xdd08,	// (0x0005507f) vkb2_top_entry_pane_g1

0xdd16,	// (0x0005508d) vkb2_top_entry_pane_t1_ParamLimits

0xdd16,	// (0x0005508d) vkb2_top_entry_pane_t1

0x7b76,	// (0x0004eeed) vkb2_top_entry_pane_t2_ParamLimits

0x7b76,	// (0x0004eeed) vkb2_top_entry_pane_t2

0x7ba8,	// (0x0004ef1f) vkb2_top_entry_pane_t3_ParamLimits

0x7ba8,	// (0x0004ef1f) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x000570ee) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x000570ee) vkb2_top_entry_pane_t

0xc56b,	// (0x000538e2) vkb2_top_grid_right_pane_g1_ParamLimits

0xc56b,	// (0x000538e2) vkb2_top_grid_right_pane_g1

0x1e9c,	// (0x00049213) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e9c,	// (0x00049213) vkb2_top_grid_right_pane_g2

0x1eb4,	// (0x0004922b) vkb2_top_grid_right_pane_g3_ParamLimits

0x1eb4,	// (0x0004922b) vkb2_top_grid_right_pane_g3

0xc581,	// (0x000538f8) vkb2_top_grid_right_pane_g4_ParamLimits

0xc581,	// (0x000538f8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x000570f5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x000570f5) vkb2_top_grid_right_pane_g

0x1ee2,	// (0x00049259) vkb2_top_cell_left_pane_g1

0x1ef9,	// (0x00049270) vkb2_cell_keypad_pane_g1_ParamLimits

0x1ef9,	// (0x00049270) vkb2_cell_keypad_pane_g1

0x7bcc,	// (0x0004ef43) vkb2_cell_keypad_pane_t1_ParamLimits

0x7bcc,	// (0x0004ef43) vkb2_cell_keypad_pane_t1

0x1f07,	// (0x0004927e) vkb2_cell_bottom_grid_pane_ParamLimits

0x1f07,	// (0x0004927e) vkb2_cell_bottom_grid_pane

0x1f40,	// (0x000492b7) vkb2_cell_bottom_grid_pane_g1

0xd9c2,	// (0x00054d39) aid_call2_pane_cp02

0xd9ca,	// (0x00054d41) aid_call_pane_cp02

0xd9d2,	// (0x00054d49) clock_digital_number_pane_cp10

0xd9da,	// (0x00054d51) clock_digital_number_pane_cp11

0xd9e2,	// (0x00054d59) clock_digital_number_pane_cp12

0xd9ea,	// (0x00054d61) clock_digital_number_pane_cp13

0xd9f2,	// (0x00054d69) clock_digital_separator_pane_cp10

0x26ed,	// (0x00049a64) popup_clock_digital_analogue_window_cp2_g1

0x26ed,	// (0x00049a64) popup_clock_digital_analogue_window_cp2_g2

0xd9fa,	// (0x00054d71) popup_clock_digital_analogue_window_cp2_g3

0x26ed,	// (0x00049a64) popup_clock_digital_analogue_window_cp2_g4

0xd9fa,	// (0x00054d71) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x000570aa) popup_clock_digital_analogue_window_cp2_g

0xda02,	// (0x00054d79) popup_clock_digital_analogue_window_cp2_t1

0xda10,	// (0x00054d87) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x000570b5) popup_clock_digital_analogue_window_cp2_t

0x5b9f,	// (0x0004cf16) clock_digital_number_pane_cp10_g1

0x5b9f,	// (0x0004cf16) clock_digital_number_pane_cp10_g2

0x0001,

0xfb26,	// (0x00056e9d) clock_digital_number_pane_cp10_g

0x5b9f,	// (0x0004cf16) clock_digital_separator_pane_cp10_g1

0x5b9f,	// (0x0004cf16) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb26,	// (0x00056e9d) clock_digital_separator_pane_cp10_g

0x75f7,	// (0x0004e96e) uniindi_top_pane_g3

0x7608,	// (0x0004e97f) uniindi_top_pane_g4

0x1d1a,	// (0x00049091) vkb2_row_keypad_pane_ParamLimits

0x1d1a,	// (0x00049091) vkb2_row_keypad_pane

0x1f5c,	// (0x000492d3) vkb2_cell_t_keypad_pane_ParamLimits

0x1f5c,	// (0x000492d3) vkb2_cell_t_keypad_pane

0x1f6c,	// (0x000492e3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f6c,	// (0x000492e3) vkb2_cell_t_keypad_pane_cp08

0x1f81,	// (0x000492f8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f81,	// (0x000492f8) vkb2_cell_t_keypad_pane_cp09

0x1f95,	// (0x0004930c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f95,	// (0x0004930c) vkb2_cell_t_keypad_pane_cp01

0x1fa6,	// (0x0004931d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1fa6,	// (0x0004931d) vkb2_cell_t_keypad_pane_cp02

0x1fb7,	// (0x0004932e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1fb7,	// (0x0004932e) vkb2_cell_t_keypad_pane_cp03

0x1fc8,	// (0x0004933f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1fc8,	// (0x0004933f) vkb2_cell_t_keypad_pane_cp04

0x1fd9,	// (0x00049350) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1fd9,	// (0x00049350) vkb2_cell_t_keypad_pane_cp05

0x1fea,	// (0x00049361) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1fea,	// (0x00049361) vkb2_cell_t_keypad_pane_cp06

0x1ffd,	// (0x00049374) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1ffd,	// (0x00049374) vkb2_cell_t_keypad_pane_cp07

0x2012,	// (0x00049389) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2012,	// (0x00049389) vkb2_cell_t_keypad_pane_cp10

0x5e1a,	// (0x0004d191) vkb2_cell_t_keypad_pane_g1

0x7be3,	// (0x0004ef5a) vkb2_cell_t_keypad_pane_t1

0x6f56,	// (0x0004e2cd) popup_grid_graphic2_window

0xdd4f,	// (0x000550c6) aid_size_cell_graphic2_ParamLimits

0xdd4f,	// (0x000550c6) aid_size_cell_graphic2

0xdd8d,	// (0x00055104) bg_popup_window_pane_cp21_ParamLimits

0xdd8d,	// (0x00055104) bg_popup_window_pane_cp21

0xdd9b,	// (0x00055112) graphic2_pages_pane_ParamLimits

0xdd9b,	// (0x00055112) graphic2_pages_pane

0xddf3,	// (0x0005516a) grid_graphic2_control_pane_ParamLimits

0xddf3,	// (0x0005516a) grid_graphic2_control_pane

0xde3b,	// (0x000551b2) grid_graphic2_pane_ParamLimits

0xde3b,	// (0x000551b2) grid_graphic2_pane

0xdec6,	// (0x0005523d) cell_graphic2_pane

0x6f56,	// (0x0004e2cd) main_comp_mode_pane

0x6dae,	// (0x0004e125) list_ai3_gene_pane_ParamLimits

0xd702,	// (0x00054a79) bg_popup_window_pane_cp19_ParamLimits

0x7234,	// (0x0004e5ab) bg_touch_area_indi_pane_ParamLimits

0x7234,	// (0x0004e5ab) bg_touch_area_indi_pane

0x724a,	// (0x0004e5c1) bg_touch_area_indi_pane_cp01_ParamLimits

0x724a,	// (0x0004e5c1) bg_touch_area_indi_pane_cp01

0x7260,	// (0x0004e5d7) bg_touch_area_indi_pane_cp02_ParamLimits

0x7260,	// (0x0004e5d7) bg_touch_area_indi_pane_cp02

0x727a,	// (0x0004e5f1) bg_touch_area_indi_pane_cp03_ParamLimits

0x727a,	// (0x0004e5f1) bg_touch_area_indi_pane_cp03

0x7294,	// (0x0004e60b) popup_slider_window_g1_ParamLimits

0x72b0,	// (0x0004e627) popup_slider_window_g2_ParamLimits

0x72cc,	// (0x0004e643) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0005703f) popup_slider_window_g_ParamLimits

0x7332,	// (0x0004e6a9) popup_slider_window_t1_ParamLimits

0x73a6,	// (0x0004e71d) small_volume_slider_vertical_pane_ParamLimits

0xdec6,	// (0x0005523d) cell_graphic2_pane_ParamLimits

0xdf28,	// (0x0005529f) bg_button_pane_cp10_ParamLimits

0xdf28,	// (0x0005529f) bg_button_pane_cp10

0xdf3b,	// (0x000552b2) bg_button_pane_cp11_ParamLimits

0xdf3b,	// (0x000552b2) bg_button_pane_cp11

0xdf4e,	// (0x000552c5) graphic2_pages_pane_g1_ParamLimits

0xdf4e,	// (0x000552c5) graphic2_pages_pane_g1

0xdf69,	// (0x000552e0) graphic2_pages_pane_g2_ParamLimits

0xdf69,	// (0x000552e0) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x00057103) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x00057103) graphic2_pages_pane_g

0xdf81,	// (0x000552f8) graphic2_pages_pane_t1_ParamLimits

0xdf81,	// (0x000552f8) graphic2_pages_pane_t1

0xdf99,	// (0x00055310) cell_graphic2_control_pane_ParamLimits

0xdf99,	// (0x00055310) cell_graphic2_control_pane

0xdfcd,	// (0x00055344) cell_graphic2_pane_g1_ParamLimits

0xdfcd,	// (0x00055344) cell_graphic2_pane_g1

0xd09e,	// (0x00054415) cell_graphic2_pane_g2_ParamLimits

0xd09e,	// (0x00054415) cell_graphic2_pane_g2

0xdfda,	// (0x00055351) cell_graphic2_pane_g3_ParamLimits

0xdfda,	// (0x00055351) cell_graphic2_pane_g3

0xd0ab,	// (0x00054422) cell_graphic2_pane_g4_ParamLimits

0xd0ab,	// (0x00054422) cell_graphic2_pane_g4

0xdfe7,	// (0x0005535e) cell_graphic2_pane_g5_ParamLimits

0xdfe7,	// (0x0005535e) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x00057108) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x00057108) cell_graphic2_pane_g

0xe003,	// (0x0005537a) cell_graphic2_pane_t1_ParamLimits

0xe003,	// (0x0005537a) cell_graphic2_pane_t1

0x4256,	// (0x0004b5cd) grid_highlight_pane_cp11_ParamLimits

0x4256,	// (0x0004b5cd) grid_highlight_pane_cp11

0xa94f,	// (0x00051cc6) bg_button_pane_cp05

0xe04c,	// (0x000553c3) cell_graphic2_control_pane_g1

0x5b9f,	// (0x0004cf16) bg_touch_area_indi_pane_g1

0x7ec6,	// (0x0004f23d) aid_cmod_rocker_key_size

0x7ed0,	// (0x0004f247) aid_cmode_itu_key_size

0x7eda,	// (0x0004f251) main_cmode_video_pane

0x7ee4,	// (0x0004f25b) main_comp_mode_itu_pane

0x7ef0,	// (0x0004f267) main_comp_mode_rocker_pane

0x7efc,	// (0x0004f273) cell_cmode_rocker_pane_ParamLimits

0x7efc,	// (0x0004f273) cell_cmode_rocker_pane

0x7f10,	// (0x0004f287) cell_cmode_itu_pane_ParamLimits

0x7f10,	// (0x0004f287) cell_cmode_itu_pane

0xafbc,	// (0x00052333) bg_button_pane_cp06_ParamLimits

0xafbc,	// (0x00052333) bg_button_pane_cp06

0x5e1a,	// (0x0004d191) cell_cmode_rocker_pane_g1_ParamLimits

0x5e1a,	// (0x0004d191) cell_cmode_rocker_pane_g1

0x744d,	// (0x0004e7c4) cell_cmode_rocker_pane_g2_ParamLimits

0x744d,	// (0x0004e7c4) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x00057118) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x00057118) cell_cmode_rocker_pane_g

0x6f56,	// (0x0004e2cd) bg_button_pane_cp07

0x7f27,	// (0x0004f29e) cell_cmode_itu_pane_g1

0x7f30,	// (0x0004f2a7) cell_cmode_itu_pane_t1

0x7f3e,	// (0x0004f2b5) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0005711d) cell_cmode_itu_pane_t

0x767c,	// (0x0004e9f3) aid_touch_ctrl_left

0x7684,	// (0x0004e9fb) aid_touch_ctrl_right

0x6f56,	// (0x0004e2cd) compa_mode_pane

0xe074,	// (0x000553eb) aid_cmod_rocker_key_size_cp

0xe07e,	// (0x000553f5) aid_cmode_itu_key_size_cp

0x7f60,	// (0x0004f2d7) compa_mode_pane_g1

0x7f68,	// (0x0004f2df) compa_mode_pane_g2

0x7f70,	// (0x0004f2e7) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x00057122) compa_mode_pane_g

0xe088,	// (0x000553ff) main_comp_mode_itu_pane_cp

0xe090,	// (0x00055407) main_comp_mode_rocker_pane_cp

0xe098,	// (0x0005540f) cell_cmode_itu_pane_cp_ParamLimits

0xe098,	// (0x0005540f) cell_cmode_itu_pane_cp

0xe0ad,	// (0x00055424) cell_cmode_rocker_pane_cp_ParamLimits

0xe0ad,	// (0x00055424) cell_cmode_rocker_pane_cp

0xafbc,	// (0x00052333) bg_button_pane_cp06_cp_ParamLimits

0xafbc,	// (0x00052333) bg_button_pane_cp06_cp

0x5e1a,	// (0x0004d191) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5e1a,	// (0x0004d191) cell_cmode_rocker_pane_g1_cp

0x5b9f,	// (0x0004cf16) cell_cmode_rocker_pane_g2_cp

0x6f56,	// (0x0004e2cd) bg_button_pane_cp07_cp

0xe0bf,	// (0x00055436) cell_cmode_itu_pane_g1_cp

0xe0c8,	// (0x0005543f) cell_cmode_itu_pane_t1_cp

0xe0c8,	// (0x0005543f) cell_cmode_itu_pane_t2_cp

0xcd1e,	// (0x00054095) settings_code_pane_cp2

0x6fb8,	// (0x0004e32f) bg_popup_window_pane_cp3_ParamLimits

0xab63,	// (0x00051eda) heading_pane_cp3_ParamLimits

0xab72,	// (0x00051ee9) listscroll_popup_graphic_pane_ParamLimits

0x14fd,	// (0x00048874) fep_hwr_aid_pane_ParamLimits

0x19ee,	// (0x00048d65) aid_touch_sctrl_top_ParamLimits

0x19fb,	// (0x00048d72) sctrl_sk_top_pane_g1_ParamLimits

0x5e1a,	// (0x0004d191) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x00057058) sctrl_sk_top_pane_g_ParamLimits

0x1a08,	// (0x00048d7f) sctrl_sk_top_pane_t1_ParamLimits

0x19ee,	// (0x00048d65) aid_touch_sctrl_bottom_ParamLimits

0x1a08,	// (0x00048d7f) sctrl_sk_bottom_pane_t1_ParamLimits

0x75c1,	// (0x0004e938) aid_area_touch_clock

0xc3a9,	// (0x00053720) aid_vkb2_area_top_pane_cell_ParamLimits

0xc3a9,	// (0x00053720) aid_vkb2_area_top_pane_cell

0xc459,	// (0x000537d0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc459,	// (0x000537d0) aid_vkb2_area_bottom_pane_cell

0x7b2e,	// (0x0004eea5) popup_char_count_window

0x7fc6,	// (0x0004f33d) popup_char_count_window_g1

0x7fcf,	// (0x0004f346) popup_char_count_window_g2

0x7fd8,	// (0x0004f34f) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x00057129) popup_char_count_window_g

0x7fe1,	// (0x0004f358) popup_char_count_window_t1

0x1aa3,	// (0x00048e1a) popup_fep_char_preview_window_ParamLimits

0x1aa3,	// (0x00048e1a) popup_fep_char_preview_window

0xc3c9,	// (0x00053740) vkb2_top_candi_pane_ParamLimits

0xc3c9,	// (0x00053740) vkb2_top_candi_pane

0xe0d6,	// (0x0005544d) cell_vkb2_top_candi_pane_ParamLimits

0xe0d6,	// (0x0005544d) cell_vkb2_top_candi_pane

0x3bdf,	// (0x0004af56) bg_popup_fep_char_preview_window_ParamLimits

0x3bdf,	// (0x0004af56) bg_popup_fep_char_preview_window

0x2027,	// (0x0004939e) popup_fep_char_preview_window_t1_ParamLimits

0x2027,	// (0x0004939e) popup_fep_char_preview_window_t1

0x803d,	// (0x0004f3b4) bg_popup_fep_char_preview_window_g1

0x8045,	// (0x0004f3bc) bg_popup_fep_char_preview_window_g2

0x804d,	// (0x0004f3c4) bg_popup_fep_char_preview_window_g3

0x8055,	// (0x0004f3cc) bg_popup_fep_char_preview_window_g4

0x805d,	// (0x0004f3d4) bg_popup_fep_char_preview_window_g5

0x8065,	// (0x0004f3dc) bg_popup_fep_char_preview_window_g6

0x806d,	// (0x0004f3e4) bg_popup_fep_char_preview_window_g7

0x8075,	// (0x0004f3ec) bg_popup_fep_char_preview_window_g8

0x807d,	// (0x0004f3f4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x00057130) bg_popup_fep_char_preview_window_g

0x5e1a,	// (0x0004d191) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5e1a,	// (0x0004d191) cell_vkb2_top_candi_pane_g1

0x615b,	// (0x0004d4d2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x615b,	// (0x0004d4d2) cell_vkb2_top_candi_pane_g2

0x617c,	// (0x0004d4f3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x617c,	// (0x0004d4f3) cell_vkb2_top_candi_pane_g3

0x2069,	// (0x000493e0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2069,	// (0x000493e0) cell_vkb2_top_candi_pane_g4

0x8085,	// (0x0004f3fc) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8085,	// (0x0004f3fc) cell_vkb2_top_candi_pane_g5

0x744d,	// (0x0004e7c4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x744d,	// (0x0004e7c4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x00057145) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x00057145) cell_vkb2_top_candi_pane_g

0x208a,	// (0x00049401) cell_vkb2_top_candi_pane_t1

0x127c,	// (0x000485f3) aid_size_touch_slider_mark_ParamLimits

0x127c,	// (0x000485f3) aid_size_touch_slider_mark

0xddd7,	// (0x0005514e) grid_graphic2_catg_pane_ParamLimits

0xddd7,	// (0x0005514e) grid_graphic2_catg_pane

0xde95,	// (0x0005520c) popup_grid_graphic2_window_t1_ParamLimits

0xde95,	// (0x0005520c) popup_grid_graphic2_window_t1

0xdeab,	// (0x00055222) popup_grid_graphic2_window_t2_ParamLimits

0xdeab,	// (0x00055222) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x000570fe) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x000570fe) popup_grid_graphic2_window_t

0xa94f,	// (0x00051cc6) bg_button_pane_cp05_ParamLimits

0xe04c,	// (0x000553c3) cell_graphic2_control_pane_g1_ParamLimits

0xe13a,	// (0x000554b1) cell_graphic2_catg_pane_ParamLimits

0xe13a,	// (0x000554b1) cell_graphic2_catg_pane

0x6f56,	// (0x0004e2cd) bg_button_pane_cp12

0xe14c,	// (0x000554c3) cell_graphic2_catg_pane_g1

0x758b,	// (0x0004e902) cell_tb_ext_pane_t1_ParamLimits

0x1e59,	// (0x000491d0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1e59,	// (0x000491d0) vkb2_top_cell_right_narrow_pane

0x1e71,	// (0x000491e8) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e71,	// (0x000491e8) vkb2_top_cell_right_wide_pane

0x14ef,	// (0x00048866) bg_vkb2_func_pane_ParamLimits

0x14ef,	// (0x00048866) bg_vkb2_func_pane

0x1ee2,	// (0x00049259) vkb2_top_cell_left_pane_g1_ParamLimits

0x14ef,	// (0x00048866) bg_vkb2_fuc_pane_cp03_ParamLimits

0x14ef,	// (0x00048866) bg_vkb2_fuc_pane_cp03

0x1f40,	// (0x000492b7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3581,	// (0x0004a8f8) bg_vkb2_func_pane_g1

0x3589,	// (0x0004a900) bg_vkb2_func_pane_g2

0x3599,	// (0x0004a910) bg_vkb2_func_pane_g3

0x3591,	// (0x0004a908) bg_vkb2_func_pane_g4

0x35a1,	// (0x0004a918) bg_vkb2_func_pane_g5

0x35a9,	// (0x0004a920) bg_vkb2_func_pane_g6

0x35b1,	// (0x0004a928) bg_vkb2_func_pane_g7

0x35b9,	// (0x0004a930) bg_vkb2_func_pane_g8

0x3579,	// (0x0004a8f0) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x00057152) bg_vkb2_func_pane_g

0x14ef,	// (0x00048866) bg_vkb2_fuc_pane_cp01_ParamLimits

0x14ef,	// (0x00048866) bg_vkb2_fuc_pane_cp01

0x1ee2,	// (0x00049259) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1ee2,	// (0x00049259) vkb2_top_cell_right_wide_pane_g1

0x14ef,	// (0x00048866) bg_vkb2_fuc_pane_cp02_ParamLimits

0x14ef,	// (0x00048866) bg_vkb2_fuc_pane_cp02

0x20a8,	// (0x0004941f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x20a8,	// (0x0004941f) vkb2_top_cell_right_narrow_pane_g1

0xd644,	// (0x000549bb) aid_touch_area_decrease_ParamLimits

0xd644,	// (0x000549bb) aid_touch_area_decrease

0xd67e,	// (0x000549f5) aid_touch_area_increase_ParamLimits

0xd67e,	// (0x000549f5) aid_touch_area_increase

0xd6a6,	// (0x00054a1d) aid_touch_area_mute_ParamLimits

0xd6a6,	// (0x00054a1d) aid_touch_area_mute

0xd6ce,	// (0x00054a45) aid_touch_area_slider_ParamLimits

0xd6ce,	// (0x00054a45) aid_touch_area_slider

0xd70e,	// (0x00054a85) popup_slider_window_g4_ParamLimits

0xd70e,	// (0x00054a85) popup_slider_window_g4

0xd736,	// (0x00054aad) popup_slider_window_g5_ParamLimits

0xd736,	// (0x00054aad) popup_slider_window_g5

0xd76a,	// (0x00054ae1) popup_slider_window_g6_ParamLimits

0xd76a,	// (0x00054ae1) popup_slider_window_g6

0x7360,	// (0x0004e6d7) popup_slider_window_t2_ParamLimits

0x7360,	// (0x0004e6d7) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0005704c) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0005704c) popup_slider_window_t

0xd786,	// (0x00054afd) slider_pane_ParamLimits

0xd786,	// (0x00054afd) slider_pane

0x80c1,	// (0x0004f438) slider_pane_g1_ParamLimits

0x80c1,	// (0x0004f438) slider_pane_g1

0x80d5,	// (0x0004f44c) slider_pane_g2_ParamLimits

0x80d5,	// (0x0004f44c) slider_pane_g2

0x80eb,	// (0x0004f462) slider_pane_g3_ParamLimits

0x80eb,	// (0x0004f462) slider_pane_g3

0x0003,

0xfdee,	// (0x00057165) slider_pane_g_ParamLimits

0xfdee,	// (0x00057165) slider_pane_g

0xbbcf,	// (0x00052f46) popup_tb_float_extension_window_ParamLimits

0xbbcf,	// (0x00052f46) popup_tb_float_extension_window

0x8117,	// (0x0004f48e) aid_size_cell_tb_float_ext

0x6f56,	// (0x0004e2cd) bg_popup_sub_window_cp28

0x8123,	// (0x0004f49a) grid_tb_float_ext_pane

0x812f,	// (0x0004f4a6) cell_tb_float_ext_pane_ParamLimits

0x812f,	// (0x0004f4a6) cell_tb_float_ext_pane

0x814b,	// (0x0004f4c2) cell_tb_float_ext_pane_g1

0x8154,	// (0x0004f4cb) grid_highlight_pane_cp12

0xc099,	// (0x00053410) cell_last_hwr_side_pane_ParamLimits

0xc099,	// (0x00053410) cell_last_hwr_side_pane

0x5b9f,	// (0x0004cf16) cell_last_hwr_side_pane_g1

0x815d,	// (0x0004f4d4) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0005716e) cell_last_hwr_side_pane_g

0xc536,	// (0x000538ad) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc536,	// (0x000538ad) vkb2_area_bottom_space_btn_pane

0x5e1a,	// (0x0004d191) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7be3,	// (0x0004ef5a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x208a,	// (0x00049401) cell_vkb2_top_candi_pane_t1_ParamLimits

0x20c4,	// (0x0004943b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x20c4,	// (0x0004943b) vkb2_area_bottom_space_btn_pane_g1

0x20fe,	// (0x00049475) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x20fe,	// (0x00049475) vkb2_area_bottom_space_btn_pane_g2

0x2134,	// (0x000494ab) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2134,	// (0x000494ab) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x00057173) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x00057173) vkb2_area_bottom_space_btn_pane_g

0x15a6,	// (0x0004891d) cel_fep_hwr_func_pane_ParamLimits

0x15a6,	// (0x0004891d) cel_fep_hwr_func_pane

0xc06e,	// (0x000533e5) cell_hwr_side_button_pane_ParamLimits

0xc06e,	// (0x000533e5) cell_hwr_side_button_pane

0x75c1,	// (0x0004e938) aid_area_touch_clock_ParamLimits

0xa94f,	// (0x00051cc6) bg_uniindi_top_pane_ParamLimits

0x75d5,	// (0x0004e94c) uniindi_top_pane_g1_ParamLimits

0x75eb,	// (0x0004e962) uniindi_top_pane_g2_ParamLimits

0x75f7,	// (0x0004e96e) uniindi_top_pane_g3_ParamLimits

0x7608,	// (0x0004e97f) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x00057084) uniindi_top_pane_g_ParamLimits

0x7615,	// (0x0004e98c) uniindi_top_pane_t1_ParamLimits

0xa94f,	// (0x00051cc6) bg_vkb2_func_pane_cp01_ParamLimits

0xa94f,	// (0x00051cc6) bg_vkb2_func_pane_cp01

0x8166,	// (0x0004f4dd) cel_fep_hwr_func_pane_g1_ParamLimits

0x8166,	// (0x0004f4dd) cel_fep_hwr_func_pane_g1

0xa94f,	// (0x00051cc6) bg_vkb2_func_pane_cp02_ParamLimits

0xa94f,	// (0x00051cc6) bg_vkb2_func_pane_cp02

0x8166,	// (0x0004f4dd) cell_hwr_side_button_pane_g1_ParamLimits

0x8166,	// (0x0004f4dd) cell_hwr_side_button_pane_g1

0x3400,	// (0x0004a777) status_pane_g4_ParamLimits

0x3400,	// (0x0004a777) status_pane_g4

0x341a,	// (0x0004a791) status_pane_t1

0x5959,	// (0x0004ccd0) form2_midp_gauge_slider_cont_pane

0x5961,	// (0x0004ccd8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcfe8,	// (0x0005435f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcffa,	// (0x00054371) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad9,	// (0x00056e50) form2_midp_gauge_slider_pane_t_ParamLimits

0x5997,	// (0x0004cd0e) form2_midp_slider_pane_ParamLimits

0x1a6b,	// (0x00048de2) aid_size_cell_func_vkb2_ParamLimits

0x1a6b,	// (0x00048de2) aid_size_cell_func_vkb2

0x8103,	// (0x0004f47a) slider_pane_g4_ParamLimits

0x8103,	// (0x0004f47a) slider_pane_g4

0xc59f,	// (0x00053916) form2_midp_gauge_slider_pane_t2_cp01

0xc5ad,	// (0x00053924) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc5ad,	// (0x00053924) form2_midp_gauge_slider_pane_t3_cp01

0x21a9,	// (0x00049520) form2_midp_slider_pane_cp01

0x6f56,	// (0x0004e2cd) navi_smil_pane

0x819f,	// (0x0004f516) navi_smil_pane_g1

0x81a7,	// (0x0004f51e) navi_smil_pane_t1

0x8174,	// (0x0004f4eb) form2_midp_slider_pane_g1

0x817d,	// (0x0004f4f4) form2_midp_slider_pane_g2

0x8185,	// (0x0004f4fc) form2_midp_slider_pane_g3

0x8174,	// (0x0004f4eb) form2_midp_slider_pane_g4

0xe155,	// (0x000554cc) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0005717c) form2_midp_slider_pane_g

0x216e,	// (0x000494e5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x216e,	// (0x000494e5) vkb2_area_bottom_space_btn_pane_g4

0xbdb4,	// (0x0005312b) lc0_navi_pane_ParamLimits

0xbdb4,	// (0x0005312b) lc0_navi_pane

0xbe24,	// (0x0005319b) lc0_stat_indi_pane_ParamLimits

0xbe24,	// (0x0005319b) lc0_stat_indi_pane

0xbe39,	// (0x000531b0) ls0_title_pane_ParamLimits

0xbe39,	// (0x000531b0) ls0_title_pane

0xafbc,	// (0x00052333) bg_popup_sub_pane_cp14_ParamLimits

0x75a8,	// (0x0004e91f) list_uniindi_pane_ParamLimits

0x75b4,	// (0x0004e92b) uniindi_top_pane_ParamLimits

0x7654,	// (0x0004e9cb) list_single_uniindi_pane_g1_ParamLimits

0x7667,	// (0x0004e9de) list_single_uniindi_pane_t1_ParamLimits

0xc5ca,	// (0x00053941) lc0_stat_clock_pane_ParamLimits

0xc5ca,	// (0x00053941) lc0_stat_clock_pane

0xe15e,	// (0x000554d5) lc0_stat_indi_pane_g1_ParamLimits

0xe15e,	// (0x000554d5) lc0_stat_indi_pane_g1

0xe16b,	// (0x000554e2) lc0_stat_indi_pane_g2_ParamLimits

0xe16b,	// (0x000554e2) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x00057187) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x00057187) lc0_stat_indi_pane_g

0xc5d7,	// (0x0005394e) lc0_uni_indicator_pane_ParamLimits

0xc5d7,	// (0x0005394e) lc0_uni_indicator_pane

0xe178,	// (0x000554ef) ls0_title_pane_g1_ParamLimits

0xe178,	// (0x000554ef) ls0_title_pane_g1

0xe18c,	// (0x00055503) ls0_title_pane_t1_ParamLimits

0xe18c,	// (0x00055503) ls0_title_pane_t1

0xc5e4,	// (0x0005395b) lc0_uni_indicator_pane_g1_ParamLimits

0xc5e4,	// (0x0005395b) lc0_uni_indicator_pane_g1

0x8219,	// (0x0004f590) lc0_stat_clock_pane_t1

0x6f56,	// (0x0004e2cd) main_ai5_pane

0x822f,	// (0x0004f5a6) ai5_sk_pane_ParamLimits

0x822f,	// (0x0004f5a6) ai5_sk_pane

0xe1c2,	// (0x00055539) cell_ai5_widget_pane_ParamLimits

0xe1c2,	// (0x00055539) cell_ai5_widget_pane

0xe241,	// (0x000555b8) aid_size_cell_widget_grid

0x82e9,	// (0x0004f660) bg_ai5_widget_pane_ParamLimits

0x82e9,	// (0x0004f660) bg_ai5_widget_pane

0xe277,	// (0x000555ee) cell_ai5_widget_pane_g2

0xe28b,	// (0x00055602) cell_ai5_widget_pane_g3

0xe2a5,	// (0x0005561c) cell_ai5_widget_pane_g4

0xe2b5,	// (0x0005562c) cell_ai5_widget_pane_g5

0x83b5,	// (0x0004f72c) cell_ai5_widget_pane_g6

0xe2c5,	// (0x0005563c) cell_ai5_widget_pane_g7

0xe2e9,	// (0x00055660) cell_ai5_widget_pane_t1_ParamLimits

0xe2e9,	// (0x00055660) cell_ai5_widget_pane_t1

0x844b,	// (0x0004f7c2) cell_ai5_widget_pane_t2_ParamLimits

0x844b,	// (0x0004f7c2) cell_ai5_widget_pane_t2

0x8463,	// (0x0004f7da) cell_ai5_widget_pane_t3_ParamLimits

0x8463,	// (0x0004f7da) cell_ai5_widget_pane_t3

0xe306,	// (0x0005567d) cell_ai5_widget_pane_t4_ParamLimits

0xe306,	// (0x0005567d) cell_ai5_widget_pane_t4

0xe32c,	// (0x000556a3) cell_ai5_widget_pane_t5_ParamLimits

0xe32c,	// (0x000556a3) cell_ai5_widget_pane_t5

0x84c1,	// (0x0004f838) cell_ai5_widget_pane_t6_ParamLimits

0x84c1,	// (0x0004f838) cell_ai5_widget_pane_t6

0x84d3,	// (0x0004f84a) cell_ai5_widget_pane_t7_ParamLimits

0x84d3,	// (0x0004f84a) cell_ai5_widget_pane_t7

0x84f2,	// (0x0004f869) cell_ai5_widget_pane_t8_ParamLimits

0x84f2,	// (0x0004f869) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x000571a7) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x000571a7) cell_ai5_widget_pane_t

0xe3be,	// (0x00055735) grid_ai5_widget_pane

0xafbc,	// (0x00052333) highlight_cell_ai5_widget_pane_ParamLimits

0xafbc,	// (0x00052333) highlight_cell_ai5_widget_pane

0xe3d2,	// (0x00055749) ai5_sk_left_pane

0xe3dc,	// (0x00055753) ai5_sk_middle_pane

0xe3e6,	// (0x0005575d) ai5_sk_right_pane

0x85a8,	// (0x0004f91f) bg_ai5_widget_pane_g1_ParamLimits

0x85a8,	// (0x0004f91f) bg_ai5_widget_pane_g1

0x85b4,	// (0x0004f92b) bg_ai5_widget_pane_g2_ParamLimits

0x85b4,	// (0x0004f92b) bg_ai5_widget_pane_g2

0x85c0,	// (0x0004f937) bg_ai5_widget_pane_g3_ParamLimits

0x85c0,	// (0x0004f937) bg_ai5_widget_pane_g3

0x85cc,	// (0x0004f943) bg_ai5_widget_pane_g4_ParamLimits

0x85cc,	// (0x0004f943) bg_ai5_widget_pane_g4

0x85d8,	// (0x0004f94f) bg_ai5_widget_pane_g5_ParamLimits

0x85d8,	// (0x0004f94f) bg_ai5_widget_pane_g5

0x85e4,	// (0x0004f95b) bg_ai5_widget_pane_g6_ParamLimits

0x85e4,	// (0x0004f95b) bg_ai5_widget_pane_g6

0x85f0,	// (0x0004f967) bg_ai5_widget_pane_g7_ParamLimits

0x85f0,	// (0x0004f967) bg_ai5_widget_pane_g7

0x85fc,	// (0x0004f973) bg_ai5_widget_pane_g8_ParamLimits

0x85fc,	// (0x0004f973) bg_ai5_widget_pane_g8

0x8608,	// (0x0004f97f) bg_ai5_widget_pane_g9_ParamLimits

0x8608,	// (0x0004f97f) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x000571c0) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x000571c0) bg_ai5_widget_pane_g

0xe41c,	// (0x00055793) cell_shortcut_ai5_widget_pane_ParamLimits

0xe41c,	// (0x00055793) cell_shortcut_ai5_widget_pane

0x2d1a,	// (0x0004a091) bg_cell_shortcut_ai5_widget_pane

0x8653,	// (0x0004f9ca) cell_grid_ai5_widget_pane_g1

0x2d1a,	// (0x0004a091) highlight_cell_shortcut_ai5_widget_pane

0x3589,	// (0x0004a900) ai5_sk_left_pane_g1

0x865c,	// (0x0004f9d3) ai5_sk_left_pane_g2

0x8664,	// (0x0004f9db) ai5_sk_left_pane_g3

0x866c,	// (0x0004f9e3) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x000571d3) ai5_sk_left_pane_g

0x8674,	// (0x0004f9eb) ai5_sk_left_pane_t1

0x3581,	// (0x0004a8f8) ai5_sk_right_pane_g1

0x8682,	// (0x0004f9f9) ai5_sk_right_pane_g2

0x868a,	// (0x0004fa01) ai5_sk_right_pane_g3

0x8692,	// (0x0004fa09) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x000571dc) ai5_sk_right_pane_g

0x869a,	// (0x0004fa11) ai5_sk_right_pane_t1

0x3581,	// (0x0004a8f8) ai5_sk_middle_pane_g1

0x3589,	// (0x0004a900) ai5_sk_middle_pane_g2

0x35a1,	// (0x0004a918) ai5_sk_middle_pane_g3

0x868a,	// (0x0004fa01) ai5_sk_middle_pane_g4

0x8664,	// (0x0004f9db) ai5_sk_middle_pane_g5

0x86a8,	// (0x0004fa1f) ai5_sk_middle_pane_g6

0xe42f,	// (0x000557a6) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x000571e5) ai5_sk_middle_pane_g

0xbca0,	// (0x00053017) aid_touch_area_size_lc0_ParamLimits

0xbca0,	// (0x00053017) aid_touch_area_size_lc0

0x1745,	// (0x00048abc) cell_hwr_candidate_pane_t1_ParamLimits

0x30c7,	// (0x0004a43e) aid_touch_navi_pane

0xbf42,	// (0x000532b9) status_dt_navi_pane_ParamLimits

0xbf42,	// (0x000532b9) status_dt_navi_pane

0xbf5a,	// (0x000532d1) status_dt_sta_pane_ParamLimits

0xbf5a,	// (0x000532d1) status_dt_sta_pane

0xe437,	// (0x000557ae) dt_sta_controll_pane

0xe444,	// (0x000557bb) dt_sta_indi_pane

0xe451,	// (0x000557c8) dt_sta_title_pane

0xa94f,	// (0x00051cc6) bg_dt_sta_indi_pane_ParamLimits

0xa94f,	// (0x00051cc6) bg_dt_sta_indi_pane

0xe463,	// (0x000557da) dt_sta_battery_pane

0xe46b,	// (0x000557e2) dt_sta_indi_pane_g1

0xe474,	// (0x000557eb) dt_sta_indi_pane_g2

0xe913,	// (0x00055c8a) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x000571f4) dt_sta_indi_pane_g

0xe91c,	// (0x00055c93) dt_sta_signal_pane

0xafbc,	// (0x00052333) bg_dt_sta_title_pane_ParamLimits

0xafbc,	// (0x00052333) bg_dt_sta_title_pane

0xe925,	// (0x00055c9c) dt_sta_title_pane_g1

0xe92d,	// (0x00055ca4) dt_sta_title_pane_t1_ParamLimits

0xe92d,	// (0x00055ca4) dt_sta_title_pane_t1

0x6f56,	// (0x0004e2cd) bg_dt_sta_control_pane

0xe942,	// (0x00055cb9) dt_sta_controll_pane_g1

0xe94b,	// (0x00055cc2) bg_dt_sta_title_pane_g1

0xe954,	// (0x00055ccb) bg_dt_sta_title_pane_g2

0xe95d,	// (0x00055cd4) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x000571fb) bg_dt_sta_title_pane_g

0x5b9f,	// (0x0004cf16) bg_dt_sta_indi_pane_g1

0x8756,	// (0x0004facd) dt_sta_signal_pane_g1

0x875e,	// (0x0004fad5) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x00057202) dt_sta_signal_pane_g

0x8766,	// (0x0004fadd) dt_sta_battery_pane_g1

0x876f,	// (0x0004fae6) dt_sta_battery_pane_t1

0x5b9f,	// (0x0004cf16) bg_dt_sta_control_pane_g1

0x2814,	// (0x00049b8b) fep_china_uni_eep_pane

0x281c,	// (0x00049b93) fep_china_uni_entry_pane_ParamLimits

0x282c,	// (0x00049ba3) popup_fep_china_uni_window_g1_ParamLimits

0x283c,	// (0x00049bb3) popup_fep_china_uni_window_g2_ParamLimits

0x283c,	// (0x00049bb3) popup_fep_china_uni_window_g2

0x0001,

0xf6fb,	// (0x00056a72) popup_fep_china_uni_window_g_ParamLimits

0xf6fb,	// (0x00056a72) popup_fep_china_uni_window_g

0x877e,	// (0x0004faf5) fep_china_uni_eep_pane_g1

0x8786,	// (0x0004fafd) fep_china_uni_eep_pane_t1

0x8196,	// (0x0004f50d) aid_touch_area_size_smil_player

0x3219,	// (0x0004a590) lc0_clock_pane

0x340e,	// (0x0004a785) status_pane_g5_ParamLimits

0x340e,	// (0x0004a785) status_pane_g5

0xb6f5,	// (0x00052a6c) popup_keymap_window

0x33d4,	// (0x0004a74b) status_icon_pane

0xe28b,	// (0x00055602) cell_ai5_widget_pane_g3_ParamLimits

0xe2a5,	// (0x0005561c) cell_ai5_widget_pane_g4_ParamLimits

0xe2b5,	// (0x0005562c) cell_ai5_widget_pane_g5_ParamLimits

0x83ce,	// (0x0004f745) cell_ai5_widget_pane_g8_ParamLimits

0x83ce,	// (0x0004f745) cell_ai5_widget_pane_g8

0x83e2,	// (0x0004f759) cell_ai5_widget_pane_g9_ParamLimits

0x83e2,	// (0x0004f759) cell_ai5_widget_pane_g9

0x83f6,	// (0x0004f76d) cell_ai5_widget_pane_g10_ParamLimits

0x83f6,	// (0x0004f76d) cell_ai5_widget_pane_g10

0x8795,	// (0x0004fb0c) status_icon_pane_g1

0x6f56,	// (0x0004e2cd) bg_popup_sub_pane_cp13

0x879d,	// (0x0004fb14) popup_keymap_window_t1

0x2ff2,	// (0x0004a369) control_pane_g6_ParamLimits

0x2ff2,	// (0x0004a369) control_pane_g6

0x2fff,	// (0x0004a376) control_pane_g7_ParamLimits

0x2fff,	// (0x0004a376) control_pane_g7

0x300c,	// (0x0004a383) control_pane_g8_ParamLimits

0x300c,	// (0x0004a383) control_pane_g8

0xe437,	// (0x000557ae) dt_sta_controll_pane_ParamLimits

0xe444,	// (0x000557bb) dt_sta_indi_pane_ParamLimits

0xe451,	// (0x000557c8) dt_sta_title_pane_ParamLimits

0xaea5,	// (0x0005221c) aid_size_touch_scroll_bar_cale

0xf320,	// (0x00056697) popup_discreet_window_ParamLimits

0xf320,	// (0x00056697) popup_discreet_window

0xa4c1,	// (0x00051838) popup_sk_window

0x3bdf,	// (0x0004af56) bg_popup_sub_pane_cp28_ParamLimits

0x3bdf,	// (0x0004af56) bg_popup_sub_pane_cp28

0x87ab,	// (0x0004fb22) popup_discreet_window_g1_ParamLimits

0x87ab,	// (0x0004fb22) popup_discreet_window_g1

0x87cb,	// (0x0004fb42) popup_discreet_window_t1_ParamLimits

0x87cb,	// (0x0004fb42) popup_discreet_window_t1

0x87e9,	// (0x0004fb60) popup_discreet_window_t2_ParamLimits

0x87e9,	// (0x0004fb60) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x00057207) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x00057207) popup_discreet_window_t

0x21df,	// (0x00049556) popup_sk_window_g1

0x21e9,	// (0x00049560) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0005720e) popup_sk_window_g

0x21f1,	// (0x00049568) popup_sk_window_t1

0x21ff,	// (0x00049576) popup_sk_window_t1_copy1

0xe277,	// (0x000555ee) cell_ai5_widget_pane_g2_ParamLimits

0xe34c,	// (0x000556c3) cell_ai5_widget_pane_t9_ParamLimits

0xe34c,	// (0x000556c3) cell_ai5_widget_pane_t9

0x6f56,	// (0x0004e2cd) main_fep_fshwr2_pane

0xc603,	// (0x0005397a) aid_fshwr2_btn_pane

0xc617,	// (0x0005398e) aid_fshwr2_syb_pane

0xc62b,	// (0x000539a2) aid_fshwr2_txt_pane

0xc63b,	// (0x000539b2) fshwr2_func_candi_pane

0xc65d,	// (0x000539d4) fshwr2_hwr_syb_pane

0xc681,	// (0x000539f8) fshwr2_icf_pane

0x6f56,	// (0x0004e2cd) fshwr2_icf_bg_pane

0x22ab,	// (0x00049622) fshwr2_icf_pane_t1_ParamLimits

0x22ab,	// (0x00049622) fshwr2_icf_pane_t1

0x26ed,	// (0x00049a64) fshwr2_func_candi_pane_g1

0xe966,	// (0x00055cdd) fshwr2_func_candi_row_pane_ParamLimits

0xe966,	// (0x00055cdd) fshwr2_func_candi_row_pane

0xc6b1,	// (0x00053a28) cell_fshwr2_syb_pane_ParamLimits

0xc6b1,	// (0x00053a28) cell_fshwr2_syb_pane

0x8166,	// (0x0004f4dd) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8166,	// (0x0004f4dd) fshwr2_hwr_syb_pane_g1

0x6f56,	// (0x0004e2cd) bg_popup_call_pane_cp01

0xc6d9,	// (0x00053a50) fshwr2_func_candi_cell_pane_ParamLimits

0xc6d9,	// (0x00053a50) fshwr2_func_candi_cell_pane

0x39bf,	// (0x0004ad36) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x39bf,	// (0x0004ad36) fshwr2_func_candi_cell_bg_pane

0xc724,	// (0x00053a9b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc724,	// (0x00053a9b) fshwr2_func_candi_cell_pane_g1

0xc75b,	// (0x00053ad2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc75b,	// (0x00053ad2) fshwr2_func_candi_cell_pane_t1

0x6f56,	// (0x0004e2cd) bg_button_pane_cp08

0x3049,	// (0x0004a3c0) cell_fshwr2_syb_bg_pane

0xc776,	// (0x00053aed) cell_fshwr2_syb_bg_pane_g1

0xc78a,	// (0x00053b01) cell_fshwr2_syb_bg_pane_t1

0xafbc,	// (0x00052333) main_tmo_pane

0xcb23,	// (0x00053e9a) uni_indicator_pane_g1_ParamLimits

0xcb39,	// (0x00053eb0) uni_indicator_pane_g2_ParamLimits

0xcb4f,	// (0x00053ec6) uni_indicator_pane_g3_ParamLimits

0xcb62,	// (0x00053ed9) uni_indicator_pane_g4_ParamLimits

0xcb62,	// (0x00053ed9) uni_indicator_pane_g4

0x4756,	// (0x0004bacd) uni_indicator_pane_g5_ParamLimits

0x4756,	// (0x0004bacd) uni_indicator_pane_g5

0x4756,	// (0x0004bacd) uni_indicator_pane_g6_ParamLimits

0x4756,	// (0x0004bacd) uni_indicator_pane_g6

0xf8fa,	// (0x00056c71) uni_indicator_pane_g_ParamLimits

0xd614,	// (0x0005498b) popup_tmo_note_window_ParamLimits

0xd614,	// (0x0005498b) popup_tmo_note_window

0xafbc,	// (0x00052333) fshwr2_bg_pane

0xc74c,	// (0x00053ac3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc74c,	// (0x00053ac3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x00057213) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x00057213) fshwr2_func_candi_cell_pane_g

0x5b9f,	// (0x0004cf16) bg_popup_window_pane_cp01

0x239d,	// (0x00049714) bg_popup_window_pane_g1_cp01

0x885e,	// (0x0004fbd5) bg_popup_window_pane_cp22_ParamLimits

0x885e,	// (0x0004fbd5) bg_popup_window_pane_cp22

0x886c,	// (0x0004fbe3) listscroll_tmo_link_pane_ParamLimits

0x886c,	// (0x0004fbe3) listscroll_tmo_link_pane

0x88ac,	// (0x0004fc23) popup_tmo_note_window_g1_ParamLimits

0x88ac,	// (0x0004fc23) popup_tmo_note_window_g1

0x88b9,	// (0x0004fc30) tmo_note_info_pane_ParamLimits

0x88b9,	// (0x0004fc30) tmo_note_info_pane

0xe98d,	// (0x00055d04) list_tmo_note_info_pane_g1_ParamLimits

0xe98d,	// (0x00055d04) list_tmo_note_info_pane_g1

0x88ea,	// (0x0004fc61) list_tmo_note_info_pane_g2_ParamLimits

0x88ea,	// (0x0004fc61) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x00057218) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x00057218) list_tmo_note_info_pane_g

0x8906,	// (0x0004fc7d) list_tmo_note_info_text_pane_ParamLimits

0x8906,	// (0x0004fc7d) list_tmo_note_info_text_pane

0x898b,	// (0x0004fd02) list_tmo_link_pane

0x8998,	// (0x0004fd0f) scroll_pane_cp20

0x89a5,	// (0x0004fd1c) list_single_tmo_link_pane_ParamLimits

0x89a5,	// (0x0004fd1c) list_single_tmo_link_pane

0x89b5,	// (0x0004fd2c) list_single_tmo_link_pane_t1

0x89c3,	// (0x0004fd3a) list_tmo_note_info_text_pane_t1_ParamLimits

0x89c3,	// (0x0004fd3a) list_tmo_note_info_text_pane_t1

0xb05c,	// (0x000523d3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb05c,	// (0x000523d3) aid_size_touch_scroll_bar_cp01

0xa09e,	// (0x00051415) aid_size_touch_slider_marker

0xa4b1,	// (0x00051828) popup_settings_window_ParamLimits

0xa4b1,	// (0x00051828) popup_settings_window

0xed23,	// (0x0005609a) popup_candi_list_indi_window

0x30c7,	// (0x0004a43e) aid_touch_navi_pane_ParamLimits

0x19c2,	// (0x00048d39) rs_clock_indi_pane

0x19cb,	// (0x00048d42) sctrl_sk_bottom_pane_ParamLimits

0x19dc,	// (0x00048d53) sctrl_sk_top_pane_ParamLimits

0x1abd,	// (0x00048e34) popup_fep_tooltip_window

0xe241,	// (0x000555b8) aid_size_cell_widget_grid_ParamLimits

0xe260,	// (0x000555d7) cell_ai5_widget_pane_g1_ParamLimits

0xe260,	// (0x000555d7) cell_ai5_widget_pane_g1

0x83b5,	// (0x0004f72c) cell_ai5_widget_pane_g6_ParamLimits

0xe2c5,	// (0x0005563c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0005718c) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0005718c) cell_ai5_widget_pane_g

0xe37b,	// (0x000556f2) cell_ai5_widget_pane_t10_ParamLimits

0xe37b,	// (0x000556f2) cell_ai5_widget_pane_t10

0xe3be,	// (0x00055735) grid_ai5_widget_pane_ParamLimits

0xe3f0,	// (0x00055767) cell_contacts_ai5_widget_pane_ParamLimits

0xe3f0,	// (0x00055767) cell_contacts_ai5_widget_pane

0x87fe,	// (0x0004fb75) popup_discreet_window_t3_ParamLimits

0x87fe,	// (0x0004fb75) popup_discreet_window_t3

0xc69d,	// (0x00053a14) popup_fshwr2_char_preview_window_ParamLimits

0xc69d,	// (0x00053a14) popup_fshwr2_char_preview_window

0xe9a4,	// (0x00055d1b) tmo_note_info_pane_t1

0xe9b9,	// (0x00055d30) tmo_note_info_pane_t2

0xe9d2,	// (0x00055d49) tmo_note_info_pane_t3

0x8967,	// (0x0004fcde) tmo_note_info_pane_t4

0x8979,	// (0x0004fcf0) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0005721d) tmo_note_info_pane_t

0x898b,	// (0x0004fd02) list_tmo_link_pane_ParamLimits

0x8998,	// (0x0004fd0f) scroll_pane_cp20_ParamLimits

0x6f56,	// (0x0004e2cd) bg_popup_fep_char_preview_window_cp01

0x89dc,	// (0x0004fd53) popup_fshwr2_char_preview_window_t1

0x89ea,	// (0x0004fd61) popup_candi_list_indi_window_g1

0x89f3,	// (0x0004fd6a) bg_cell_contacts_ai5_widget_pane

0xe9e7,	// (0x00055d5e) cell_contacts_ai5_widget_pane_g1

0x8a14,	// (0x0004fd8b) cell_contacts_ai5_widget_pane_g2

0x8a20,	// (0x0004fd97) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x00057228) cell_contacts_ai5_widget_pane_g

0x8a2c,	// (0x0004fda3) cell_contacts_ai5_widget_pane_t1

0xafbc,	// (0x00052333) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8aa3,	// (0x0004fe1a) settings_container_pane

0x2d1a,	// (0x0004a091) listscroll_set_pane_copy1

0x52d7,	// (0x0004c64e) scroll_pane_cp121_copy1

0x8aaf,	// (0x0004fe26) set_content_pane_copy1

0x8ab7,	// (0x0004fe2e) aid_height_set_list_copy1_ParamLimits

0x8ab7,	// (0x0004fe2e) aid_height_set_list_copy1

0x4946,	// (0x0004bcbd) aid_size_parent_copy1_ParamLimits

0x4946,	// (0x0004bcbd) aid_size_parent_copy1

0x8ac3,	// (0x0004fe3a) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8ac3,	// (0x0004fe3a) button_value_adjust_pane_cp6_copy1

0x3049,	// (0x0004a3c0) list_highlight_pane_cp2_copy1_ParamLimits

0x3049,	// (0x0004a3c0) list_highlight_pane_cp2_copy1

0x8ad7,	// (0x0004fe4e) list_set_pane_copy1_ParamLimits

0x8ad7,	// (0x0004fe4e) list_set_pane_copy1

0x8a3e,	// (0x0004fdb5) main_pane_set_t1_copy1_ParamLimits

0x8a3e,	// (0x0004fdb5) main_pane_set_t1_copy1

0x8a78,	// (0x0004fdef) main_pane_set_t2_copy1_ParamLimits

0x8a78,	// (0x0004fdef) main_pane_set_t2_copy1

0x8b98,	// (0x0004ff0f) main_pane_set_t3_copy1

0x8ba6,	// (0x0004ff1d) main_pane_set_t4_copy1

0x8a97,	// (0x0004fe0e) set_content_pane_g1_copy1_ParamLimits

0x8a97,	// (0x0004fe0e) set_content_pane_g1_copy1

0x8bb4,	// (0x0004ff2b) setting_code_pane_copy1

0x8bbc,	// (0x0004ff33) setting_slider_graphic_pane_copy1

0x8bbc,	// (0x0004ff33) setting_slider_pane_copy1

0x8bc4,	// (0x0004ff3b) setting_text_pane_copy1

0x8bc4,	// (0x0004ff3b) setting_volume_pane_copy1

0x8bb4,	// (0x0004ff2b) settings_code_pane_cp2_copy1

0x8bcc,	// (0x0004ff43) settings_code_pane_cp_copy1_ParamLimits

0x8bcc,	// (0x0004ff43) settings_code_pane_cp_copy1

0x23a6,	// (0x0004971d) volume_set_pane_copy1

0x8be0,	// (0x0004ff57) volume_set_pane_g10_copy1

0x8bec,	// (0x0004ff63) volume_set_pane_g1_copy1

0x8bf6,	// (0x0004ff6d) volume_set_pane_g2_copy1

0x8c00,	// (0x0004ff77) volume_set_pane_g3_copy1

0x8c0a,	// (0x0004ff81) volume_set_pane_g4_copy1

0x8c14,	// (0x0004ff8b) volume_set_pane_g5_copy1

0x8c1e,	// (0x0004ff95) volume_set_pane_g6_copy1

0x8c28,	// (0x0004ff9f) volume_set_pane_g7_copy1

0x8c32,	// (0x0004ffa9) volume_set_pane_g8_copy1

0x8c3c,	// (0x0004ffb3) volume_set_pane_g9_copy1

0x6fb8,	// (0x0004e32f) bg_set_opt_pane_cp_copy1_ParamLimits

0x6fb8,	// (0x0004e32f) bg_set_opt_pane_cp_copy1

0x23b2,	// (0x00049729) setting_slider_pane_t1_copy1_ParamLimits

0x23b2,	// (0x00049729) setting_slider_pane_t1_copy1

0x23d1,	// (0x00049748) setting_slider_pane_t2_copy1_ParamLimits

0x23d1,	// (0x00049748) setting_slider_pane_t2_copy1

0x23eb,	// (0x00049762) setting_slider_pane_t3_copy1_ParamLimits

0x23eb,	// (0x00049762) setting_slider_pane_t3_copy1

0x2403,	// (0x0004977a) slider_set_pane_copy1_ParamLimits

0x2403,	// (0x0004977a) slider_set_pane_copy1

0xb014,	// (0x0005238b) set_opt_bg_pane_g1_copy2

0xb01c,	// (0x00052393) set_opt_bg_pane_g2_copy2

0x8c48,	// (0x0004ffbf) set_opt_bg_pane_g3_copy2

0xb02c,	// (0x000523a3) set_opt_bg_pane_g4_copy2

0xb034,	// (0x000523ab) set_opt_bg_pane_g5_copy2

0xb03c,	// (0x000523b3) set_opt_bg_pane_g6_copy2

0x8c52,	// (0x0004ffc9) set_opt_bg_pane_g7_copy2

0x8c5c,	// (0x0004ffd3) set_opt_bg_pane_g8_copy2

0x8c66,	// (0x0004ffdd) set_opt_bg_pane_g9_copy2

0x2419,	// (0x00049790) aid_size_touch_slider_mark_copy1_ParamLimits

0x2419,	// (0x00049790) aid_size_touch_slider_mark_copy1

0x8c70,	// (0x0004ffe7) slider_set_pane_g1_copy1

0x242d,	// (0x000497a4) slider_set_pane_g2_copy1

0x129c,	// (0x00048613) slider_set_pane_g3_copy1_ParamLimits

0x129c,	// (0x00048613) slider_set_pane_g3_copy1

0x12b0,	// (0x00048627) slider_set_pane_g4_copy1_ParamLimits

0x12b0,	// (0x00048627) slider_set_pane_g4_copy1

0x12c8,	// (0x0004863f) slider_set_pane_g5_copy1_ParamLimits

0x12c8,	// (0x0004863f) slider_set_pane_g5_copy1

0x129c,	// (0x00048613) slider_set_pane_g6_copy1_ParamLimits

0x129c,	// (0x00048613) slider_set_pane_g6_copy1

0x2435,	// (0x000497ac) slider_set_pane_g7_copy1_ParamLimits

0x2435,	// (0x000497ac) slider_set_pane_g7_copy1

0x6f6a,	// (0x0004e2e1) bg_set_opt_pane_cp2_copy1

0x8c79,	// (0x0004fff0) setting_slider_graphic_pane_g1_copy1

0x8c82,	// (0x0004fff9) setting_slider_graphic_pane_t1_copy1

0x8c92,	// (0x00050009) setting_slider_graphic_pane_t2_copy1

0x8ca2,	// (0x00050019) slider_set_pane_cp_copy1

0x8cb2,	// (0x00050029) input_focus_pane_cp1_copy1

0x8cbb,	// (0x00050032) list_set_text_pane_copy1

0x8cc3,	// (0x0005003a) setting_text_pane_g1_copy1

0xe47d,	// (0x000557f4) set_text_pane_t1_copy1

0x8cb2,	// (0x00050029) input_focus_pane_cp2_copy1

0x8cc3,	// (0x0005003a) setting_code_pane_g1_copy1

0x8ccc,	// (0x00050043) setting_code_pane_t1_copy1

0x50dc,	// (0x0004c453) list_set_graphic_pane_copy1

0x6f6a,	// (0x0004e2e1) bg_set_opt_pane_cp4_copy1

0x2a11,	// (0x00049d88) list_set_graphic_pane_g1_copy1_ParamLimits

0x2a11,	// (0x00049d88) list_set_graphic_pane_g1_copy1

0x8cda,	// (0x00050051) list_set_graphic_pane_g2_copy1

0x2a29,	// (0x00049da0) list_set_graphic_pane_t1_copy1_ParamLimits

0x2a29,	// (0x00049da0) list_set_graphic_pane_t1_copy1

0x5b9f,	// (0x0004cf16) rs_clock_indi_pane_g1

0x8ce2,	// (0x00050059) rs_clock_indi_pane_t1

0x8cf0,	// (0x00050067) rs_indi_pane

0x8cf8,	// (0x0005006f) rs_indi_pane_g1

0x8d01,	// (0x00050078) rs_indi_pane_g2

0x89ea,	// (0x0004fd61) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0005722f) rs_indi_pane_g

0x2d1a,	// (0x0004a091) bg_popup_preview_window_pane_cp03

0x8d0a,	// (0x00050081) popup_fep_tooltip_window_t1

0x686c,	// (0x0004dbe3) popup_note2_window_g2_ParamLimits

0x686c,	// (0x0004dbe3) popup_note2_window_g2

0x0001,

0xfc45,	// (0x00056fbc) popup_note2_window_g_ParamLimits

0xfc45,	// (0x00056fbc) popup_note2_window_g

0x6d74,	// (0x0004e0eb) bg_popup_sub_pane_cp11_ParamLimits

0x6d81,	// (0x0004e0f8) cell_ai3_links_pane_g1_ParamLimits

0x6d98,	// (0x0004e10f) cell_ai3_links_pane_t1

0xe47d,	// (0x000557f4) set_text_pane_t1_copy1_ParamLimits

0x2c18,	// (0x00049f8f) cell_graphic_popup_pane_cp2_ParamLimits

0x2c18,	// (0x00049f8f) cell_graphic_popup_pane_cp2

0x8d18,	// (0x0005008f) cell_graphic_popup_pane_g1_cp2

0xacb8,	// (0x0005202f) cell_graphic_popup_pane_g2_cp2

0x8d20,	// (0x00050097) cell_graphic_popup_pane_g3_cp2

0x8d28,	// (0x0005009f) cell_graphic_popup_pane_t2_cp2

0xacc9,	// (0x00052040) grid_highlight_pane_cp3_cp2

0xe75c,	// (0x00055ad3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xafbc,	// (0x00052333) main_tmo_pane_ParamLimits

0xd608,	// (0x0005497f) popup_tmo_big_image_note_window

0xe24f,	// (0x000555c6) cell_ai5_widget_list_pane

0xe257,	// (0x000555ce) cell_ai5_widget_lrg_icon_pane

0xe9a4,	// (0x00055d1b) tmo_note_info_pane_t1_ParamLimits

0xe9b9,	// (0x00055d30) tmo_note_info_pane_t2_ParamLimits

0xe9d2,	// (0x00055d49) tmo_note_info_pane_t3_ParamLimits

0x8967,	// (0x0004fcde) tmo_note_info_pane_t4_ParamLimits

0x8979,	// (0x0004fcf0) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0005721d) tmo_note_info_pane_t_ParamLimits

0x8aa3,	// (0x0004fe1a) settings_container_pane_ParamLimits

0x8caa,	// (0x00050021) indicator_popup_pane_cp5

0x8caa,	// (0x00050021) indicator_popup_pane_cp6

0x50dc,	// (0x0004c453) list_set_graphic_pane_copy1_ParamLimits

0x6f56,	// (0x0004e2cd) bg_popup_window_pane_cp23

0x8d36,	// (0x000500ad) popup_tmo_big_image_note_window_g1

0x8d42,	// (0x000500b9) popup_tmo_big_image_note_window_t1

0x8d52,	// (0x000500c9) popup_tmo_big_image_note_window_t2

0x8d62,	// (0x000500d9) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x00057236) popup_tmo_big_image_note_window_t

0x5b9f,	// (0x0004cf16) cell_ai5_widget_lrg_icon_pane_g1

0xe9fc,	// (0x00055d73) cell_ai5_widget_lrg_icon_pane_t1

0xea0a,	// (0x00055d81) cell_ai5_widget_list_row_pane_ParamLimits

0xea0a,	// (0x00055d81) cell_ai5_widget_list_row_pane

0xea22,	// (0x00055d99) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea22,	// (0x00055d99) cell_ai5_widget_list_row_pane_g1

0xea2f,	// (0x00055da6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea2f,	// (0x00055da6) cell_ai5_widget_list_row_pane_t1

0xea5a,	// (0x00055dd1) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xea5a,	// (0x00055dd1) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0005723d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0005723d) cell_ai5_widget_list_row_pane_t

0x6f56,	// (0x0004e2cd) main_fep_vtchi_ss_pane

0x8e20,	// (0x00050197) popup_fep_char_pre_window

0x8e28,	// (0x0005019f) popup_fep_ituss_window

0xea91,	// (0x00055e08) popup_fep_vkbss_window

0x3049,	// (0x0004a3c0) grid_vkbss_keypad_pane_ParamLimits

0x3049,	// (0x0004a3c0) grid_vkbss_keypad_pane

0x8ea2,	// (0x00050219) ituss_keypad_pane

0x2476,	// (0x000497ed) aid_vkbss_key_offset_ParamLimits

0x2476,	// (0x000497ed) aid_vkbss_key_offset

0xc7b4,	// (0x00053b2b) cell_vkbss_key_pane_ParamLimits

0xc7b4,	// (0x00053b2b) cell_vkbss_key_pane

0x8eae,	// (0x00050225) bg_cell_vkbss_key_g1_ParamLimits

0x8eae,	// (0x00050225) bg_cell_vkbss_key_g1

0xeaa0,	// (0x00055e17) cell_vkbss_key_3p_pane_ParamLimits

0xeaa0,	// (0x00055e17) cell_vkbss_key_3p_pane

0xead6,	// (0x00055e4d) cell_vkbss_key_g1_ParamLimits

0xead6,	// (0x00055e4d) cell_vkbss_key_g1

0xeb0c,	// (0x00055e83) cell_vkbss_key_t1_ParamLimits

0xeb0c,	// (0x00055e83) cell_vkbss_key_t1

0x24e4,	// (0x0004985b) cell_ituss_key_pane_ParamLimits

0x24e4,	// (0x0004985b) cell_ituss_key_pane

0x8f82,	// (0x000502f9) bg_cell_ituss_key_g1_ParamLimits

0x8f82,	// (0x000502f9) bg_cell_ituss_key_g1

0x8f8e,	// (0x00050305) cell_ituss_key_pane_g1_ParamLimits

0x8f8e,	// (0x00050305) cell_ituss_key_pane_g1

0x24f5,	// (0x0004986c) cell_ituss_key_pane_g2_ParamLimits

0x24f5,	// (0x0004986c) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x00057244) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x00057244) cell_ituss_key_pane_g

0x2579,	// (0x000498f0) cell_ituss_key_t1_ParamLimits

0x2579,	// (0x000498f0) cell_ituss_key_t1

0x25b3,	// (0x0004992a) cell_ituss_key_t2_ParamLimits

0x25b3,	// (0x0004992a) cell_ituss_key_t2

0x25e5,	// (0x0004995c) cell_ituss_key_t3_ParamLimits

0x25e5,	// (0x0004995c) cell_ituss_key_t3

0x2616,	// (0x0004998d) cell_ituss_key_t4_ParamLimits

0x2616,	// (0x0004998d) cell_ituss_key_t4

0x0005,

0xfeda,	// (0x00057251) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x00057251) cell_ituss_key_t

0xeb68,	// (0x00055edf) cell_vkbss_key_3p_pane_g1

0xeb70,	// (0x00055ee7) cell_vkbss_key_3p_pane_g2

0xeb78,	// (0x00055eef) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0005725e) cell_vkbss_key_3p_pane_g

0x2d1a,	// (0x0004a091) bg_popup_fep_char_preview_window_cp02

0x8fcc,	// (0x00050343) popup_fep_char_pre_window_t1

0xe22e,	// (0x000555a5) main_ai5_sk_pane

0x89f3,	// (0x0004fd6a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe9e7,	// (0x00055d5e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8a14,	// (0x0004fd8b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8a20,	// (0x0004fd97) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x00057228) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8a2c,	// (0x0004fda3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xafbc,	// (0x00052333) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb80,	// (0x00055ef7) main_ai5_sk_pane_g1

0x3a17,	// (0x0004ad8e) popup_query_code_window_g1

0xea82,	// (0x00055df9) popup_fep_vkb_icf_pane

0x8e76,	// (0x000501ed) popup_fep_vtchi_icf_pane

0x8fe3,	// (0x0005035a) bg_icf_pane

0x8fe3,	// (0x0005035a) list_vkb_icf_pane

0x8fef,	// (0x00050366) bg_icf_pane_cp01

0x9002,	// (0x00050379) vtchi_icf_list_pane

0xebd5,	// (0x00055f4c) list_vkb_icf_pane_t1_ParamLimits

0xebd5,	// (0x00055f4c) list_vkb_icf_pane_t1

0x907b,	// (0x000503f2) vtchi_icf_list_pane_t1_ParamLimits

0x907b,	// (0x000503f2) vtchi_icf_list_pane_t1

0x8e28,	// (0x0005019f) popup_fep_ituss_window_ParamLimits

0x8e76,	// (0x000501ed) popup_fep_vtchi_icf_pane_ParamLimits

0x8ea2,	// (0x00050219) ituss_keypad_pane_ParamLimits

0x246c,	// (0x000497e3) ituss_sks_pane

0x8fe3,	// (0x0005035a) bg_icf_pane_ParamLimits

0x8df8,	// (0x0005016f) icf_edit_indi_pane_ParamLimits

0x8df8,	// (0x0005016f) icf_edit_indi_pane

0x8fe3,	// (0x0005035a) list_vkb_icf_pane_ParamLimits

0x8fef,	// (0x00050366) bg_icf_pane_cp01_ParamLimits

0x8e13,	// (0x0005018a) icf_edit_indi_pane_cp01_ParamLimits

0x8e13,	// (0x0005018a) icf_edit_indi_pane_cp01

0x9002,	// (0x00050379) vtchi_query_pane

0x8166,	// (0x0004f4dd) icf_edit_indi_pane_g1_ParamLimits

0x8166,	// (0x0004f4dd) icf_edit_indi_pane_g1

0xebec,	// (0x00055f63) icf_edit_indi_pane_g2_ParamLimits

0xebec,	// (0x00055f63) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x00057289) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x00057289) icf_edit_indi_pane_g

0xec00,	// (0x00055f77) icf_edit_indi_pane_t1

0x9094,	// (0x0005040b) bg_input_focus_pane_cp042

0xae9c,	// (0x00052213) vtchi_button_pane

0x909d,	// (0x00050414) vtchi_query_pane_t1

0x90ab,	// (0x00050422) vtchi_query_pane_t2

0x90b9,	// (0x00050430) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x00057278) vtchi_query_pane_t

0x6f56,	// (0x0004e2cd) bg_button_pane_cp13

0x90c7,	// (0x0005043e) vtchi_button_pane_g1

0x2697,	// (0x00049a0e) ituss_sks_pane_g1

0x26a2,	// (0x00049a19) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0005727f) ituss_sks_pane_g

0x90cf,	// (0x00050446) ituss_sks_pane_t1

0x90dd,	// (0x00050454) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x00057284) ituss_sks_pane_t

0x567a,	// (0x0004c9f1) indicator_nsta_pane_cp_g1

0x5683,	// (0x0004c9fa) indicator_nsta_pane_cp_g2

0x568b,	// (0x0004ca02) indicator_nsta_pane_cp_g3

0x5693,	// (0x0004ca0a) indicator_nsta_pane_cp_g4

0x5683,	// (0x0004c9fa) indicator_nsta_pane_cp_g5

0x568b,	// (0x0004ca02) indicator_nsta_pane_cp_g6

0x0005,

0xfa8f,	// (0x00056e06) indicator_nsta_pane_cp_g

0xe02e,	// (0x000553a5) cell_graphic2_pane_t2_ParamLimits

0xe02e,	// (0x000553a5) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x00057113) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x00057113) cell_graphic2_pane_t

0xe066,	// (0x000553dd) cell_graphic2_control_pane_t1

0xb2d6,	// (0x0005264d) signal_pane_g3_ParamLimits

0xb2d6,	// (0x0005264d) signal_pane_g3

0xb2ea,	// (0x00052661) signal_pane_g4_ParamLimits

0xb2ea,	// (0x00052661) signal_pane_g4

0xea6c,	// (0x00055de3) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xea6c,	// (0x00055de3) cell_ai5_widget_list_row_pane_t3

0x8fa2,	// (0x00050319) cell_ituss_key_pane_t1_ParamLimits

0x8fa2,	// (0x00050319) cell_ituss_key_pane_t1

0x367e,	// (0x0004a9f5) form_field_data_wide_pane_vc_t2_ParamLimits

0x367e,	// (0x0004a9f5) form_field_data_wide_pane_vc_t2

0x3692,	// (0x0004aa09) form_field_data_wide_pane_vc_t3_ParamLimits

0x3692,	// (0x0004aa09) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x00056b59) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x00056b59) form_field_data_wide_pane_vc_t

0x5317,	// (0x0004c68e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5317,	// (0x0004c68e) form_field_slider_wide_pane_vc_t3

0x53ed,	// (0x0004c764) form_field_popup_wide_pane_vc_t2_ParamLimits

0x53ed,	// (0x0004c764) form_field_popup_wide_pane_vc_t2

0x5404,	// (0x0004c77b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5404,	// (0x0004c77b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7e,	// (0x00056df5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x00056df5) form_field_popup_wide_pane_vc_t

0xc603,	// (0x0005397a) aid_fshwr2_btn_pane_ParamLimits

0xc617,	// (0x0005398e) aid_fshwr2_syb_pane_ParamLimits

0xc62b,	// (0x000539a2) aid_fshwr2_txt_pane_ParamLimits

0xafbc,	// (0x00052333) fshwr2_bg_pane_ParamLimits

0xc63b,	// (0x000539b2) fshwr2_func_candi_pane_ParamLimits

0xc65d,	// (0x000539d4) fshwr2_hwr_syb_pane_ParamLimits

0xc681,	// (0x000539f8) fshwr2_icf_pane_ParamLimits

0x1492,	// (0x00048809) list_double_graphic_pane_vc_g4_ParamLimits

0x1492,	// (0x00048809) list_double_graphic_pane_vc_g4

0x2515,	// (0x0004988c) cell_ituss_key_pane_g3_ParamLimits

0x2515,	// (0x0004988c) cell_ituss_key_pane_g3

0x2647,	// (0x000499be) cell_ituss_key_t5_ParamLimits

0x2647,	// (0x000499be) cell_ituss_key_t5

0xea91,	// (0x00055e08) popup_fep_vkbss_window_ParamLimits

0xe238,	// (0x000555af) aid_cell_ai5_quarter

0xec00,	// (0x00055f77) icf_edit_indi_pane_t1_ParamLimits

0xa9f7,	// (0x00051d6e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xa9f7,	// (0x00051d6e) aid_tch_indicator_popup_pane_cp2

0xaa0a,	// (0x00051d81) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xaa0a,	// (0x00051d81) aid_tch_query_popup_data_pane_cp2

0x39bf,	// (0x0004ad36) aid_tch_query_popup_pane_ParamLimits

0x39bf,	// (0x0004ad36) aid_tch_query_popup_pane

0x39bf,	// (0x0004ad36) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x39bf,	// (0x0004ad36) aid_tch_query_popup_data_pane_cp1

0x3049,	// (0x0004a3c0) cell_fshwr2_syb_bg_pane_ParamLimits

0xc776,	// (0x00053aed) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc78a,	// (0x00053b01) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xea82,	// (0x00055df9) popup_fep_vkb_icf_pane_ParamLimits

0xc597,	// (0x0005390e) bg_popup_fep_char_preview_window_g10

0xe2d1,	// (0x00055648) cell_ai5_widget_pane_g11_ParamLimits

0xe2d1,	// (0x00055648) cell_ai5_widget_pane_g11

0x8416,	// (0x0004f78d) cell_ai5_widget_pane_g12_ParamLimits

0x8416,	// (0x0004f78d) cell_ai5_widget_pane_g12

0xe2dd,	// (0x00055654) cell_ai5_widget_pane_g13_ParamLimits

0xe2dd,	// (0x00055654) cell_ai5_widget_pane_g13

0xe39a,	// (0x00055711) cell_ai5_widget_pane_t11_ParamLimits

0xe39a,	// (0x00055711) cell_ai5_widget_pane_t11

0xe3ac,	// (0x00055723) cell_ai5_widget_pane_t12_ParamLimits

0xe3ac,	// (0x00055723) cell_ai5_widget_pane_t12

0x2521,	// (0x00049898) cell_ituss_key_pane_g4_ParamLimits

0x2521,	// (0x00049898) cell_ituss_key_pane_g4

0x253d,	// (0x000498b4) cell_ituss_key_pane_g5_ParamLimits

0x253d,	// (0x000498b4) cell_ituss_key_pane_g5

0x2559,	// (0x000498d0) cell_ituss_key_pane_g6_ParamLimits

0x2559,	// (0x000498d0) cell_ituss_key_pane_g6

0x3579,	// (0x0004a8f0) bg_icf_pane_g1

0xeb89,	// (0x00055f00) bg_icf_pane_g2

0xeb93,	// (0x00055f0a) bg_icf_pane_g3

0xeb9b,	// (0x00055f12) bg_icf_pane_g4

0xeba5,	// (0x00055f1c) bg_icf_pane_g5

0xebaf,	// (0x00055f26) bg_icf_pane_g6

0xebb9,	// (0x00055f30) bg_icf_pane_g7

0xebc1,	// (0x00055f38) bg_icf_pane_g8

0xebcb,	// (0x00055f42) bg_icf_pane_g9

0x0008,

0xfeee,	// (0x00057265) bg_icf_pane_g

0x8e8f,	// (0x00050206) popup_hyb_candi_window_ParamLimits

0x8e8f,	// (0x00050206) popup_hyb_candi_window

0x35ed,	// (0x0004a964) bg_popup_sub_pane_cp01_ParamLimits

0x35ed,	// (0x0004a964) bg_popup_sub_pane_cp01

0x9118,	// (0x0005048f) entry_hyb_candi_pane_ParamLimits

0x9118,	// (0x0005048f) entry_hyb_candi_pane

0x9127,	// (0x0005049e) grid_hyb_candi_pane_ParamLimits

0x9127,	// (0x0005049e) grid_hyb_candi_pane

0x913c,	// (0x000504b3) grid_hyb_phrase_pane_ParamLimits

0x913c,	// (0x000504b3) grid_hyb_phrase_pane

0x914b,	// (0x000504c2) cell_hyb_candi_pane_ParamLimits

0x914b,	// (0x000504c2) cell_hyb_candi_pane

0xaea5,	// (0x0005221c) cell_hyb_candi_scroll_pane

0x26ed,	// (0x00049a64) cell_hyb_candi_pane_g1

0x9167,	// (0x000504de) cell_hyb_candi_pane_t1

0x9175,	// (0x000504ec) cell_hyb_phrase_pane

0x26ed,	// (0x00049a64) cell_hyb_phrase_pane_g1

0x917e,	// (0x000504f5) cell_hyb_phrase_pane_t1

0x918c,	// (0x00050503) entry_hyb_candi_pane_t1

0x2d1a,	// (0x0004a091) input_focus_pane_cp06

0x919a,	// (0x00050511) cell_hyb_candi_scroll_pane_g1

0x91a2,	// (0x00050519) cell_hyb_candi_scroll_pane_g1_aid

0x91aa,	// (0x00050521) cell_hyb_candi_scroll_pane_g2

0x91b2,	// (0x00050529) cell_hyb_candi_scroll_pane_g2_aid

0x91ba,	// (0x00050531) cell_hyb_candi_scroll_pane_g3

0x91c2,	// (0x00050539) cell_hyb_candi_scroll_pane_g4

0xe1ba,	// (0x00055531) ai5_page_g1

0x2659,	// (0x000499d0) cell_ituss_key_t6_ParamLimits

0x2659,	// (0x000499d0) cell_ituss_key_t6

0xc7a0,	// (0x00053b17) icf_edit_indi_pane_cp02_ParamLimits

0xc7a0,	// (0x00053b17) icf_edit_indi_pane_cp02

0x245f,	// (0x000497d6) icf_edit_indi_pane_cp03_ParamLimits

0x245f,	// (0x000497d6) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
