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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004317a };

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
0x5c48,	// (0x00048dc2) Screen

0x5c54,	// (0x00048dce) application_window_ParamLimits

0x5c54,	// (0x00048dce) application_window

0xe23e,	// (0x000513b8) screen_g1

0x5cb0,	// (0x00048e2a) area_bottom_pane_ParamLimits

0x5cb0,	// (0x00048e2a) area_bottom_pane

0x5d70,	// (0x00048eea) area_top_pane_ParamLimits

0x5d70,	// (0x00048eea) area_top_pane

0x5e04,	// (0x00048f7e) main_pane_ParamLimits

0x5e04,	// (0x00048f7e) main_pane

0xe248,	// (0x000513c2) misc_graphics

0x8c13,	// (0x0004bd8d) battery_pane_ParamLimits

0x8c13,	// (0x0004bd8d) battery_pane

0x98d1,	// (0x0004ca4b) bg_status_flat_pane_g8

0x98d9,	// (0x0004ca53) bg_status_flat_pane_g9

0x8cdb,	// (0x0004be55) context_pane_ParamLimits

0x8cdb,	// (0x0004be55) context_pane

0x8dff,	// (0x0004bf79) navi_pane_ParamLimits

0x8dff,	// (0x0004bf79) navi_pane

0x8e8f,	// (0x0004c009) signal_pane_ParamLimits

0x8e8f,	// (0x0004c009) signal_pane

0x0008,

0xf87e,	// (0x000529f8) bg_status_flat_pane_g

0x8efc,	// (0x0004c076) status_pane_g1_ParamLimits

0x8efc,	// (0x0004c076) status_pane_g1

0x8f10,	// (0x0004c08a) status_pane_g2_ParamLimits

0x8f10,	// (0x0004c08a) status_pane_g2

0x8f1c,	// (0x0004c096) status_pane_g3_ParamLimits

0x8f1c,	// (0x0004c096) status_pane_g3

0x0004,

0xf7a5,	// (0x0005291f) status_pane_g_ParamLimits

0xf7a5,	// (0x0005291f) status_pane_g

0x8f50,	// (0x0004c0ca) title_pane_ParamLimits

0x8f50,	// (0x0004c0ca) title_pane

0x8f8d,	// (0x0004c107) uni_indicator_pane_ParamLimits

0x8f8d,	// (0x0004c107) uni_indicator_pane

0x6f6a,	// (0x0004a0e4) bg_list_pane_ParamLimits

0x6f6a,	// (0x0004a0e4) bg_list_pane

0x6f8a,	// (0x0004a104) find_pane

0x6f92,	// (0x0004a10c) listscroll_app_pane_ParamLimits

0x6f92,	// (0x0004a10c) listscroll_app_pane

0x6f9e,	// (0x0004a118) listscroll_form_pane

0x6fa6,	// (0x0004a120) listscroll_gen_pane_ParamLimits

0x6fa6,	// (0x0004a120) listscroll_gen_pane

0x6fba,	// (0x0004a134) listscroll_set_pane

0x6518,	// (0x00049692) main_idle_act_pane

0x11d3,	// (0x0004434d) main_idle_trad_pane

0x11d3,	// (0x0004434d) main_list_empty_pane

0x6fd4,	// (0x0004a14e) main_midp_pane

0x6fe0,	// (0x0004a15a) main_pane_g1_ParamLimits

0x6fe0,	// (0x0004a15a) main_pane_g1

0x6fee,	// (0x0004a168) popup_ai_message_window_ParamLimits

0x6fee,	// (0x0004a168) popup_ai_message_window

0x70a2,	// (0x0004a21c) popup_fep_china_uni_window_ParamLimits

0x70a2,	// (0x0004a21c) popup_fep_china_uni_window

0x7102,	// (0x0004a27c) popup_fep_japan_candidate_window_ParamLimits

0x7102,	// (0x0004a27c) popup_fep_japan_candidate_window

0x712c,	// (0x0004a2a6) popup_fep_japan_predictive_window_ParamLimits

0x712c,	// (0x0004a2a6) popup_fep_japan_predictive_window

0x7162,	// (0x0004a2dc) popup_find_window

0x716f,	// (0x0004a2e9) popup_grid_graphic_window_ParamLimits

0x716f,	// (0x0004a2e9) popup_grid_graphic_window

0x719d,	// (0x0004a317) popup_large_graphic_colour_window

0x71c3,	// (0x0004a33d) popup_menu_window_ParamLimits

0x71c3,	// (0x0004a33d) popup_menu_window

0x891f,	// (0x0004ba99) popup_note_image_window

0x8909,	// (0x0004ba83) popup_note_wait_window_ParamLimits

0x8909,	// (0x0004ba83) popup_note_wait_window

0x8909,	// (0x0004ba83) popup_note_window_ParamLimits

0x8909,	// (0x0004ba83) popup_note_window

0x8985,	// (0x0004baff) popup_query_code_window_ParamLimits

0x8985,	// (0x0004baff) popup_query_code_window

0x899b,	// (0x0004bb15) popup_query_data_code_window_ParamLimits

0x899b,	// (0x0004bb15) popup_query_data_code_window

0x89be,	// (0x0004bb38) popup_query_data_window_ParamLimits

0x89be,	// (0x0004bb38) popup_query_data_window

0x89e0,	// (0x0004bb5a) popup_query_sat_info_window_ParamLimits

0x89e0,	// (0x0004bb5a) popup_query_sat_info_window

0x8a1f,	// (0x0004bb99) popup_snote_single_graphic_window_ParamLimits

0x8a1f,	// (0x0004bb99) popup_snote_single_graphic_window

0x8a1f,	// (0x0004bb99) popup_snote_single_text_window_ParamLimits

0x8a1f,	// (0x0004bb99) popup_snote_single_text_window

0x8a36,	// (0x0004bbb0) popup_sub_window_general

0x8b7c,	// (0x0004bcf6) popup_window_general_ParamLimits

0x8b7c,	// (0x0004bcf6) popup_window_general

0x8b95,	// (0x0004bd0f) power_save_pane

0x6ddf,	// (0x00049f59) control_pane_g1_ParamLimits

0x6ddf,	// (0x00049f59) control_pane_g1

0x6e08,	// (0x00049f82) control_pane_g2_ParamLimits

0x6e08,	// (0x00049f82) control_pane_g2

0x4399,	// (0x00047513) control_pane_g3_ParamLimits

0x4399,	// (0x00047513) control_pane_g3

0x0007,

0xf78d,	// (0x00052907) control_pane_g_ParamLimits

0xf78d,	// (0x00052907) control_pane_g

0x6e77,	// (0x00049ff1) control_pane_t1_ParamLimits

0x6e77,	// (0x00049ff1) control_pane_t1

0x6ec3,	// (0x0004a03d) control_pane_t2_ParamLimits

0x6ec3,	// (0x0004a03d) control_pane_t2

0x0002,

0xf79e,	// (0x00052918) control_pane_t_ParamLimits

0xf79e,	// (0x00052918) control_pane_t

0x6d38,	// (0x00049eb2) navi_navi_volume_pane_cp1

0x6d40,	// (0x00049eba) status_small_icon_pane

0x4365,	// (0x000474df) status_small_pane_g1_ParamLimits

0x4365,	// (0x000474df) status_small_pane_g1

0x6d48,	// (0x00049ec2) status_small_pane_g2_ParamLimits

0x6d48,	// (0x00049ec2) status_small_pane_g2

0x6d54,	// (0x00049ece) status_small_pane_g3_ParamLimits

0x6d54,	// (0x00049ece) status_small_pane_g3

0x6d60,	// (0x00049eda) status_small_pane_g4_ParamLimits

0x6d60,	// (0x00049eda) status_small_pane_g4

0x6d6c,	// (0x00049ee6) status_small_pane_g5_ParamLimits

0x6d6c,	// (0x00049ee6) status_small_pane_g5

0x6d7a,	// (0x00049ef4) status_small_pane_g6_ParamLimits

0x6d7a,	// (0x00049ef4) status_small_pane_g6

0x0007,

0xf77c,	// (0x000528f6) status_small_pane_g_ParamLimits

0xf77c,	// (0x000528f6) status_small_pane_g

0x6da9,	// (0x00049f23) status_small_pane_t1

0x6dcb,	// (0x00049f45) status_small_wait_pane_ParamLimits

0x6dcb,	// (0x00049f45) status_small_wait_pane

0x688b,	// (0x00049a05) aid_levels_signal_ParamLimits

0x688b,	// (0x00049a05) aid_levels_signal

0x689d,	// (0x00049a17) signal_pane_g1_ParamLimits

0x689d,	// (0x00049a17) signal_pane_g1

0x68b2,	// (0x00049a2c) signal_pane_g2_ParamLimits

0x68b2,	// (0x00049a2c) signal_pane_g2

0x0003,

0xf70d,	// (0x00052887) signal_pane_g_ParamLimits

0xf70d,	// (0x00052887) signal_pane_g

0x0dbb,	// (0x00043f35) context_pane_g1

0x6063,	// (0x000491dd) title_pane_g1

0x6081,	// (0x000491fb) title_pane_t1

0xe26a,	// (0x000513e4) title_pane_t2

0xe290,	// (0x0005140a) title_pane_t3

0x0002,

0xf557,	// (0x000526d1) title_pane_t

0x8fa5,	// (0x0004c11f) aid_levels_battery_ParamLimits

0x8fa5,	// (0x0004c11f) aid_levels_battery

0x8fb9,	// (0x0004c133) battery_pane_g1_ParamLimits

0x8fb9,	// (0x0004c133) battery_pane_g1

0x8fcf,	// (0x0004c149) battery_pane_g2_ParamLimits

0x8fcf,	// (0x0004c149) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005292a) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005292a) battery_pane_g

0xa21b,	// (0x0004d395) uni_indicator_pane_g1

0xa231,	// (0x0004d3ab) uni_indicator_pane_g2

0xa247,	// (0x0004d3c1) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00052aa0) uni_indicator_pane_g

0x1069,	// (0x000441e3) navi_icon_pane_ParamLimits

0x1069,	// (0x000441e3) navi_icon_pane

0x0fed,	// (0x00044167) navi_midp_pane

0x1085,	// (0x000441ff) navi_navi_pane

0x108f,	// (0x00044209) navi_text_pane_ParamLimits

0x108f,	// (0x00044209) navi_text_pane

0xe23e,	// (0x000513b8) status_small_wait_pane_g1

0xe58b,	// (0x00051705) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00052a9b) status_small_wait_pane_g

0x9f2e,	// (0x0004d0a8) navi_navi_icon_text_pane

0x9f36,	// (0x0004d0b0) navi_navi_pane_g1_ParamLimits

0x9f36,	// (0x0004d0b0) navi_navi_pane_g1

0x9f48,	// (0x0004d0c2) navi_navi_pane_g2_ParamLimits

0x9f48,	// (0x0004d0c2) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00052a69) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00052a69) navi_navi_pane_g

0x9f5a,	// (0x0004d0d4) navi_navi_tabs_pane

0x9f63,	// (0x0004d0dd) navi_navi_text_pane

0x9f2e,	// (0x0004d0a8) navi_navi_volume_pane

0x9f0a,	// (0x0004d084) navi_text_pane_t1

0x9efe,	// (0x0004d078) navi_icon_pane_g1

0x9e51,	// (0x0004cfcb) navi_navi_text_pane_t1

0x762b,	// (0x0004a7a5) navi_navi_volume_pane_g1

0x7633,	// (0x0004a7ad) volume_small_pane

0x9db7,	// (0x0004cf31) navi_navi_icon_text_pane_g1

0x9dbf,	// (0x0004cf39) navi_navi_icon_text_pane_t1

0x1085,	// (0x000441ff) navi_tabs_2_long_pane

0x1085,	// (0x000441ff) navi_tabs_2_pane

0x1085,	// (0x000441ff) navi_tabs_3_long_pane

0x1085,	// (0x000441ff) navi_tabs_3_pane

0x1085,	// (0x000441ff) navi_tabs_4_pane

0x760b,	// (0x0004a785) tabs_2_active_pane_ParamLimits

0x760b,	// (0x0004a785) tabs_2_active_pane

0x761b,	// (0x0004a795) tabs_2_passive_pane_ParamLimits

0x761b,	// (0x0004a795) tabs_2_passive_pane

0x75d9,	// (0x0004a753) tabs_3_active_pane_ParamLimits

0x75d9,	// (0x0004a753) tabs_3_active_pane

0x75e9,	// (0x0004a763) tabs_3_passive_pane_ParamLimits

0x75e9,	// (0x0004a763) tabs_3_passive_pane

0x75fa,	// (0x0004a774) tabs_3_passive_pane_cp_ParamLimits

0x75fa,	// (0x0004a774) tabs_3_passive_pane_cp

0x758d,	// (0x0004a707) tabs_4_active_pane_ParamLimits

0x758d,	// (0x0004a707) tabs_4_active_pane

0x75a0,	// (0x0004a71a) tabs_4_passive_pane_ParamLimits

0x75a0,	// (0x0004a71a) tabs_4_passive_pane

0x75b1,	// (0x0004a72b) tabs_4_passive_pane_cp_ParamLimits

0x75b1,	// (0x0004a72b) tabs_4_passive_pane_cp

0x75c2,	// (0x0004a73c) tabs_4_passive_pane_cp2_ParamLimits

0x75c2,	// (0x0004a73c) tabs_4_passive_pane_cp2

0x7569,	// (0x0004a6e3) tabs_2_long_active_pane_ParamLimits

0x7569,	// (0x0004a6e3) tabs_2_long_active_pane

0x757b,	// (0x0004a6f5) tabs_2_long_passive_pane_ParamLimits

0x757b,	// (0x0004a6f5) tabs_2_long_passive_pane

0x752a,	// (0x0004a6a4) tabs_3_long_active_pane_ParamLimits

0x752a,	// (0x0004a6a4) tabs_3_long_active_pane

0x753d,	// (0x0004a6b7) tabs_3_long_passive_pane_ParamLimits

0x753d,	// (0x0004a6b7) tabs_3_long_passive_pane

0x7556,	// (0x0004a6d0) tabs_3_long_passive_pane_cp_ParamLimits

0x7556,	// (0x0004a6d0) tabs_3_long_passive_pane_cp

0x74d0,	// (0x0004a64a) volume_small_pane_g1

0x74d9,	// (0x0004a653) volume_small_pane_g2

0x74e2,	// (0x0004a65c) volume_small_pane_g3

0x74eb,	// (0x0004a665) volume_small_pane_g4

0x74f4,	// (0x0004a66e) volume_small_pane_g5

0x74fd,	// (0x0004a677) volume_small_pane_g6

0x7506,	// (0x0004a680) volume_small_pane_g7

0x750f,	// (0x0004a689) volume_small_pane_g8

0x7518,	// (0x0004a692) volume_small_pane_g9

0x7521,	// (0x0004a69b) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00052a35) volume_small_pane_g

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp2_ParamLimits

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp2

0x60e9,	// (0x00049263) tabs_3_active_pane_g1

0x60f1,	// (0x0004926b) tabs_3_active_pane_t1

0xe2a2,	// (0x0005141c) bg_passive_tab_pane_cp2_ParamLimits

0xe2a2,	// (0x0005141c) bg_passive_tab_pane_cp2

0x60e9,	// (0x00049263) tabs_3_passive_pane_g1

0x60f1,	// (0x0004926b) tabs_3_passive_pane_t1

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp3_ParamLimits

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp3

0x6103,	// (0x0004927d) tabs_4_active_pane_g1

0x610b,	// (0x00049285) tabs_4_active_pane_t1

0xe2a2,	// (0x0005141c) bg_passive_tab_pane_cp3_ParamLimits

0xe2a2,	// (0x0005141c) bg_passive_tab_pane_cp3

0x6103,	// (0x0004927d) tabs_4_1_passive_pane_g1

0x610b,	// (0x00049285) tabs_4_1_passive_pane_t1

0x6fd4,	// (0x0004a14e) list_highlight_pane_cp2

0xa496,	// (0x0004d610) list_set_pane_ParamLimits

0xa496,	// (0x0004d610) list_set_pane

0xa55e,	// (0x0004d6d8) main_pane_set_t1_ParamLimits

0xa55e,	// (0x0004d6d8) main_pane_set_t1

0xa57e,	// (0x0004d6f8) main_pane_set_t2_ParamLimits

0xa57e,	// (0x0004d6f8) main_pane_set_t2

0xa592,	// (0x0004d70c) main_pane_set_t3_ParamLimits

0xa592,	// (0x0004d70c) main_pane_set_t3

0xa5a6,	// (0x0004d720) main_pane_set_t4_ParamLimits

0xa5a6,	// (0x0004d720) main_pane_set_t4

0x0003,

0xf98b,	// (0x00052b05) main_pane_set_t_ParamLimits

0xf98b,	// (0x00052b05) main_pane_set_t

0xa5ba,	// (0x0004d734) setting_code_pane

0xa5c4,	// (0x0004d73e) setting_slider_graphic_pane

0xa5c4,	// (0x0004d73e) setting_slider_pane

0xa5c4,	// (0x0004d73e) setting_text_pane

0xa5c4,	// (0x0004d73e) setting_volume_pane

0x611d,	// (0x00049297) volume_set_pane

0xe2a2,	// (0x0005141c) bg_set_opt_pane_cp

0x6127,	// (0x000492a1) setting_slider_pane_t1

0x6140,	// (0x000492ba) setting_slider_pane_t2

0x615a,	// (0x000492d4) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000526d8) setting_slider_pane_t

0x6172,	// (0x000492ec) slider_set_pane

0xe248,	// (0x000513c2) bg_set_opt_pane_cp2

0xe2b0,	// (0x0005142a) setting_slider_graphic_pane_g1

0x6188,	// (0x00049302) setting_slider_graphic_pane_t1

0x6198,	// (0x00049312) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000526df) setting_slider_graphic_pane_t

0x61a8,	// (0x00049322) slider_set_pane_cp

0xe248,	// (0x000513c2) input_focus_pane_cp1

0xa457,	// (0x0004d5d1) list_set_text_pane

0xe23e,	// (0x000513b8) setting_text_pane_g1

0xe248,	// (0x000513c2) input_focus_pane_cp2

0xe23e,	// (0x000513b8) setting_code_pane_g1

0xe2b9,	// (0x00051433) setting_code_pane_t1

0x4d86,	// (0x00047f00) set_text_pane_t1_ParamLimits

0x4d86,	// (0x00047f00) set_text_pane_t1

0x08dd,	// (0x00043a57) set_opt_bg_pane_g1

0x08e5,	// (0x00043a5f) set_opt_bg_pane_g2

0xa42f,	// (0x0004d5a9) set_opt_bg_pane_g3

0x08f5,	// (0x00043a6f) set_opt_bg_pane_g4

0x08fd,	// (0x00043a77) set_opt_bg_pane_g5

0x0905,	// (0x00043a7f) set_opt_bg_pane_g6

0xa439,	// (0x0004d5b3) set_opt_bg_pane_g7

0xa443,	// (0x0004d5bd) set_opt_bg_pane_g8

0xa44d,	// (0x0004d5c7) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00052af2) set_opt_bg_pane_g

0xa422,	// (0x0004d59c) slider_set_pane_g1

0x76b4,	// (0x0004a82e) slider_set_pane_g2

0x0006,

0xf969,	// (0x00052ae3) slider_set_pane_g

0x763c,	// (0x0004a7b6) volume_set_pane_g1

0x7646,	// (0x0004a7c0) volume_set_pane_g2

0x7650,	// (0x0004a7ca) volume_set_pane_g3

0x765a,	// (0x0004a7d4) volume_set_pane_g4

0x7664,	// (0x0004a7de) volume_set_pane_g5

0x766e,	// (0x0004a7e8) volume_set_pane_g6

0x7678,	// (0x0004a7f2) volume_set_pane_g7

0x7682,	// (0x0004a7fc) volume_set_pane_g8

0x768c,	// (0x0004a806) volume_set_pane_g9

0x7696,	// (0x0004a810) volume_set_pane_g10

0x0009,

0xf941,	// (0x00052abb) volume_set_pane_g

0x61b0,	// (0x0004932a) indicator_pane_ParamLimits

0x61b0,	// (0x0004932a) indicator_pane

0x61bc,	// (0x00049336) main_idle_pane_g2_ParamLimits

0x61bc,	// (0x00049336) main_idle_pane_g2

0x61e4,	// (0x0004935e) main_pane_idle_g1_ParamLimits

0x61e4,	// (0x0004935e) main_pane_idle_g1

0xe2c7,	// (0x00051441) popup_clock_digital_analogue_window_ParamLimits

0xe2c7,	// (0x00051441) popup_clock_digital_analogue_window

0x61f2,	// (0x0004936c) soft_indicator_pane_ParamLimits

0x61f2,	// (0x0004936c) soft_indicator_pane

0x6200,	// (0x0004937a) wallpaper_pane_ParamLimits

0x6200,	// (0x0004937a) wallpaper_pane

0xe23e,	// (0x000513b8) wallpaper_pane_g1

0x620c,	// (0x00049386) indicator_pane_g1_ParamLimits

0x620c,	// (0x00049386) indicator_pane_g1

0xa8a0,	// (0x0004da1a) navi_navi_icon_text_pane_srt_g1

0xe2f5,	// (0x0005146f) soft_indicator_pane_t1

0xe30f,	// (0x00051489) aid_ps_area_pane

0x6218,	// (0x00049392) aid_ps_clock_pane

0xe320,	// (0x0005149a) aid_ps_indicator_pane

0xe32c,	// (0x000514a6) indicator_ps_pane_ParamLimits

0xe32c,	// (0x000514a6) indicator_ps_pane

0xe33b,	// (0x000514b5) power_save_pane_g1_ParamLimits

0xe33b,	// (0x000514b5) power_save_pane_g1

0xe347,	// (0x000514c1) power_save_pane_g2_ParamLimits

0xe347,	// (0x000514c1) power_save_pane_g2

0x5c64,	// (0x00048dde) aid_navinavi_width_pane

0xe30f,	// (0x00051489) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000526e4) power_save_pane_g_ParamLimits

0xf56a,	// (0x000526e4) power_save_pane_g

0xe355,	// (0x000514cf) power_save_pane_t1_ParamLimits

0xe355,	// (0x000514cf) power_save_pane_t1

0x6218,	// (0x00049392) aid_ps_clock_pane_ParamLimits

0xe320,	// (0x0005149a) aid_ps_indicator_pane_ParamLimits

0xe367,	// (0x000514e1) power_save_pane_t4_ParamLimits

0xe367,	// (0x000514e1) power_save_pane_t4

0x0001,

0xf56f,	// (0x000526e9) power_save_pane_t_ParamLimits

0xf56f,	// (0x000526e9) power_save_pane_t

0xe391,	// (0x0005150b) power_save_t3_ParamLimits

0xe391,	// (0x0005150b) power_save_t3

0xe37c,	// (0x000514f6) power_save_t2_ParamLimits

0xe37c,	// (0x000514f6) power_save_t2

0xe3a6,	// (0x00051520) indicator_ps_pane_g1

0x6226,	// (0x000493a0) ai_gene_pane_ParamLimits

0x6226,	// (0x000493a0) ai_gene_pane

0x6232,	// (0x000493ac) ai_links_pane_ParamLimits

0x6232,	// (0x000493ac) ai_links_pane

0x623e,	// (0x000493b8) indicator_pane_cp1_ParamLimits

0x623e,	// (0x000493b8) indicator_pane_cp1

0x624a,	// (0x000493c4) main_pane_idle_g1_cp_ParamLimits

0x624a,	// (0x000493c4) main_pane_idle_g1_cp

0xe3af,	// (0x00051529) popup_ai_links_title_window

0x6256,	// (0x000493d0) soft_indicator_pane_cp1_ParamLimits

0x6256,	// (0x000493d0) soft_indicator_pane_cp1

0xa209,	// (0x0004d383) ai_links_pane_g1

0xa212,	// (0x0004d38c) grid_ai_links_pane

0xa1ee,	// (0x0004d368) ai_gene_pane_1

0xa1f7,	// (0x0004d371) ai_gene_pane_2

0xa200,	// (0x0004d37a) list_highlight_pane_cp4

0xa1ce,	// (0x0004d348) cell_ai_link_pane_ParamLimits

0xa1ce,	// (0x0004d348) cell_ai_link_pane

0xa1c6,	// (0x0004d340) cell_ai_link_pane_g1

0xe58b,	// (0x00051705) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00052a96) cell_ai_link_pane_g

0xe248,	// (0x000513c2) grid_highlight_cp2

0xe248,	// (0x000513c2) bg_popup_sub_pane_cp1

0xe3c6,	// (0x00051540) popup_ai_links_title_window_t1

0xa112,	// (0x0004d28c) ai_gene_pane_1_g1_ParamLimits

0xa112,	// (0x0004d28c) ai_gene_pane_1_g1

0xa11e,	// (0x0004d298) ai_gene_pane_1_g2_ParamLimits

0xa11e,	// (0x0004d298) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00052a8c) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00052a8c) ai_gene_pane_1_g

0xa12b,	// (0x0004d2a5) ai_gene_pane_1_t1_ParamLimits

0xa12b,	// (0x0004d2a5) ai_gene_pane_1_t1

0xa15f,	// (0x0004d2d9) grid_ai_soft_ind_pane

0xa0fd,	// (0x0004d277) ai_gene_pane_2_t1_ParamLimits

0xa0fd,	// (0x0004d277) ai_gene_pane_2_t1

0x6262,	// (0x000493dc) main_pane_empty_t1_ParamLimits

0x6262,	// (0x000493dc) main_pane_empty_t1

0x627a,	// (0x000493f4) main_pane_empty_t2_ParamLimits

0x627a,	// (0x000493f4) main_pane_empty_t2

0x628f,	// (0x00049409) main_pane_empty_t3_ParamLimits

0x628f,	// (0x00049409) main_pane_empty_t3

0x62a1,	// (0x0004941b) main_pane_empty_t4_ParamLimits

0x62a1,	// (0x0004941b) main_pane_empty_t4

0x62b3,	// (0x0004942d) main_pane_empty_t5_ParamLimits

0x62b3,	// (0x0004942d) main_pane_empty_t5

0x0004,

0xf574,	// (0x000526ee) main_pane_empty_t_ParamLimits

0xf574,	// (0x000526ee) main_pane_empty_t

0x092e,	// (0x00043aa8) bg_popup_window_pane_ParamLimits

0x092e,	// (0x00043aa8) bg_popup_window_pane

0x9e5f,	// (0x0004cfd9) find_popup_pane_cp2_ParamLimits

0x9e5f,	// (0x0004cfd9) find_popup_pane_cp2

0x9e6b,	// (0x0004cfe5) heading_pane_ParamLimits

0x9e6b,	// (0x0004cfe5) heading_pane

0xe248,	// (0x000513c2) bg_popup_sub_pane

0x9dd9,	// (0x0004cf53) bg_popup_window_pane_g1_ParamLimits

0x9dd9,	// (0x0004cf53) bg_popup_window_pane_g1

0x9de5,	// (0x0004cf5f) bg_popup_window_pane_g2_ParamLimits

0x9de5,	// (0x0004cf5f) bg_popup_window_pane_g2

0x9df1,	// (0x0004cf6b) bg_popup_window_pane_g3_ParamLimits

0x9df1,	// (0x0004cf6b) bg_popup_window_pane_g3

0x9dfd,	// (0x0004cf77) bg_popup_window_pane_g4_ParamLimits

0x9dfd,	// (0x0004cf77) bg_popup_window_pane_g4

0x9e09,	// (0x0004cf83) bg_popup_window_pane_g5_ParamLimits

0x9e09,	// (0x0004cf83) bg_popup_window_pane_g5

0x9e15,	// (0x0004cf8f) bg_popup_window_pane_g6_ParamLimits

0x9e15,	// (0x0004cf8f) bg_popup_window_pane_g6

0x9e21,	// (0x0004cf9b) bg_popup_window_pane_g7_ParamLimits

0x9e21,	// (0x0004cf9b) bg_popup_window_pane_g7

0x9e2d,	// (0x0004cfa7) bg_popup_window_pane_g8_ParamLimits

0x9e2d,	// (0x0004cfa7) bg_popup_window_pane_g8

0x9e39,	// (0x0004cfb3) bg_popup_window_pane_g9_ParamLimits

0x9e39,	// (0x0004cfb3) bg_popup_window_pane_g9

0x9e45,	// (0x0004cfbf) bg_popup_window_pane_g10_ParamLimits

0x9e45,	// (0x0004cfbf) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00052a54) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00052a54) bg_popup_window_pane_g

0x9d6e,	// (0x0004cee8) bg_popup_heading_pane_ParamLimits

0x9d6e,	// (0x0004cee8) bg_popup_heading_pane

0x777c,	// (0x0004a8f6) tabs_4_passive_pane_cp_srt_ParamLimits

0x777c,	// (0x0004a8f6) tabs_4_passive_pane_cp_srt

0x778e,	// (0x0004a908) tabs_4_passive_pane_srt_ParamLimits

0x9d82,	// (0x0004cefc) heading_pane_g2

0x778e,	// (0x0004a908) tabs_4_passive_pane_srt

0x6fd4,	// (0x0004a14e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6fd4,	// (0x0004a14e) bg_passive_tab_pane_cp3_srt

0x9d8a,	// (0x0004cf04) heading_pane_t1_ParamLimits

0x9d8a,	// (0x0004cf04) heading_pane_t1

0x9da1,	// (0x0004cf1b) heading_pane_t2_ParamLimits

0x9da1,	// (0x0004cf1b) heading_pane_t2

0x0001,

0xf8d5,	// (0x00052a4f) heading_pane_t_ParamLimits

0xf8d5,	// (0x00052a4f) heading_pane_t

0x9899,	// (0x0004ca13) bg_popup_heading_pane_g1

0x9948,	// (0x0004cac2) bg_popup_heading_pane_g2

0x9952,	// (0x0004cacc) bg_popup_heading_pane_g3

0x995c,	// (0x0004cad6) bg_popup_heading_pane_g4

0x9966,	// (0x0004cae0) bg_popup_heading_pane_g5

0x9970,	// (0x0004caea) bg_popup_heading_pane_g6

0x9978,	// (0x0004caf2) bg_popup_heading_pane_g7

0x9980,	// (0x0004cafa) bg_popup_heading_pane_g8

0x998a,	// (0x0004cb04) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00052a0b) bg_popup_heading_pane_g

0x90a7,	// (0x0004c221) bg_popup_sub_pane_g1

0x90af,	// (0x0004c229) bg_popup_sub_pane_g2

0x90b7,	// (0x0004c231) bg_popup_sub_pane_g3

0x90bf,	// (0x0004c239) bg_popup_sub_pane_g4

0x90c7,	// (0x0004c241) bg_popup_sub_pane_g5

0x90cf,	// (0x0004c249) bg_popup_sub_pane_g6

0x90d7,	// (0x0004c251) bg_popup_sub_pane_g7

0x90df,	// (0x0004c259) bg_popup_sub_pane_g8

0x90e7,	// (0x0004c261) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x000529e5) bg_popup_sub_pane_g

0xe3d5,	// (0x0005154f) bg_popup_window_pane_cp5_ParamLimits

0xe3d5,	// (0x0005154f) bg_popup_window_pane_cp5

0xe3f1,	// (0x0005156b) popup_note_window_g1_ParamLimits

0xe3f1,	// (0x0005156b) popup_note_window_g1

0xe3fd,	// (0x00051577) popup_note_window_t1_ParamLimits

0xe3fd,	// (0x00051577) popup_note_window_t1

0xe413,	// (0x0005158d) popup_note_window_t2_ParamLimits

0xe413,	// (0x0005158d) popup_note_window_t2

0xe429,	// (0x000515a3) popup_note_window_t3_ParamLimits

0xe429,	// (0x000515a3) popup_note_window_t3

0xe43f,	// (0x000515b9) popup_note_window_t4_ParamLimits

0xe43f,	// (0x000515b9) popup_note_window_t4

0xe467,	// (0x000515e1) popup_note_window_t5_ParamLimits

0xe467,	// (0x000515e1) popup_note_window_t5

0x0004,

0xf57f,	// (0x000526f9) popup_note_window_t_ParamLimits

0xf57f,	// (0x000526f9) popup_note_window_t

0xe48b,	// (0x00051605) bg_popup_window_pane_cp6_ParamLimits

0xe48b,	// (0x00051605) bg_popup_window_pane_cp6

0x9815,	// (0x0004c98f) popup_note_image_window_g1_ParamLimits

0x9815,	// (0x0004c98f) popup_note_image_window_g1

0x9821,	// (0x0004c99b) popup_note_image_window_g2_ParamLimits

0x9821,	// (0x0004c99b) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x000529d9) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x000529d9) popup_note_image_window_g

0x983a,	// (0x0004c9b4) popup_note_image_window_t1_ParamLimits

0x983a,	// (0x0004c9b4) popup_note_image_window_t1

0x9853,	// (0x0004c9cd) popup_note_image_window_t2_ParamLimits

0x9853,	// (0x0004c9cd) popup_note_image_window_t2

0x986c,	// (0x0004c9e6) popup_note_image_window_t3_ParamLimits

0x986c,	// (0x0004c9e6) popup_note_image_window_t3

0x0002,

0xf864,	// (0x000529de) popup_note_image_window_t_ParamLimits

0xf864,	// (0x000529de) popup_note_image_window_t

0x96d5,	// (0x0004c84f) bg_popup_window_pane_cp7_ParamLimits

0x96d5,	// (0x0004c84f) bg_popup_window_pane_cp7

0x9705,	// (0x0004c87f) popup_note_wait_window_g1_ParamLimits

0x9705,	// (0x0004c87f) popup_note_wait_window_g1

0x9711,	// (0x0004c88b) popup_note_wait_window_g2_ParamLimits

0x9711,	// (0x0004c88b) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x000529c7) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x000529c7) popup_note_wait_window_g

0x9729,	// (0x0004c8a3) popup_note_wait_window_t1_ParamLimits

0x9729,	// (0x0004c8a3) popup_note_wait_window_t1

0x9750,	// (0x0004c8ca) popup_note_wait_window_t2_ParamLimits

0x9750,	// (0x0004c8ca) popup_note_wait_window_t2

0x976e,	// (0x0004c8e8) popup_note_wait_window_t3_ParamLimits

0x976e,	// (0x0004c8e8) popup_note_wait_window_t3

0x9781,	// (0x0004c8fb) popup_note_wait_window_t4_ParamLimits

0x9781,	// (0x0004c8fb) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x000529ce) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x000529ce) popup_note_wait_window_t

0x97a6,	// (0x0004c920) wait_bar_pane_ParamLimits

0x97a6,	// (0x0004c920) wait_bar_pane

0xe248,	// (0x000513c2) wait_anim_pane

0xe248,	// (0x000513c2) wait_border_pane

0xe23e,	// (0x000513b8) wait_anim_pane_g1

0xe23e,	// (0x000513b8) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00052882) wait_anim_pane_g

0x9679,	// (0x0004c7f3) wait_border_pane_g1

0x9684,	// (0x0004c7fe) wait_border_pane_g2

0x968d,	// (0x0004c807) wait_border_pane_g3

0x0002,

0xf846,	// (0x000529c0) wait_border_pane_g

0x94e3,	// (0x0004c65d) bg_popup_window_pane_cp16_ParamLimits

0x94e3,	// (0x0004c65d) bg_popup_window_pane_cp16

0x95e3,	// (0x0004c75d) indicator_popup_pane_cp4_ParamLimits

0x95e3,	// (0x0004c75d) indicator_popup_pane_cp4

0x95f7,	// (0x0004c771) popup_query_data_window_t1_ParamLimits

0x95f7,	// (0x0004c771) popup_query_data_window_t1

0x9609,	// (0x0004c783) popup_query_data_window_t2_ParamLimits

0x9609,	// (0x0004c783) popup_query_data_window_t2

0x9622,	// (0x0004c79c) popup_query_data_window_t3_ParamLimits

0x9622,	// (0x0004c79c) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x000529b9) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x000529b9) popup_query_data_window_t

0x963c,	// (0x0004c7b6) query_popup_data_pane_ParamLimits

0x963c,	// (0x0004c7b6) query_popup_data_pane

0x9650,	// (0x0004c7ca) query_popup_data_pane_cp1_ParamLimits

0x9650,	// (0x0004c7ca) query_popup_data_pane_cp1

0x94e3,	// (0x0004c65d) bg_popup_window_pane_cp10_ParamLimits

0x94e3,	// (0x0004c65d) bg_popup_window_pane_cp10

0x9515,	// (0x0004c68f) indicator_popup_pane_ParamLimits

0x9515,	// (0x0004c68f) indicator_popup_pane

0x9537,	// (0x0004c6b1) popup_query_code_window_t1_ParamLimits

0x9537,	// (0x0004c6b1) popup_query_code_window_t1

0x9551,	// (0x0004c6cb) popup_query_code_window_t2_ParamLimits

0x9551,	// (0x0004c6cb) popup_query_code_window_t2

0x959a,	// (0x0004c714) popup_query_code_window_t3_ParamLimits

0x959a,	// (0x0004c714) popup_query_code_window_t3

0x0002,

0xf838,	// (0x000529b2) popup_query_code_window_t_ParamLimits

0xf838,	// (0x000529b2) popup_query_code_window_t

0x95c9,	// (0x0004c743) query_popup_pane_ParamLimits

0x95c9,	// (0x0004c743) query_popup_pane

0xe48b,	// (0x00051605) bg_popup_window_pane_cp15_ParamLimits

0xe48b,	// (0x00051605) bg_popup_window_pane_cp15

0xe4ab,	// (0x00051625) indicator_popup_pane_cp1_ParamLimits

0xe4ab,	// (0x00051625) indicator_popup_pane_cp1

0xe4be,	// (0x00051638) indicator_popup_pane_cp2_ParamLimits

0xe4be,	// (0x00051638) indicator_popup_pane_cp2

0xe4d9,	// (0x00051653) popup_query_data_code_window_g1_ParamLimits

0xe4d9,	// (0x00051653) popup_query_data_code_window_g1

0xe4ec,	// (0x00051666) popup_query_data_code_window_t1_ParamLimits

0xe4ec,	// (0x00051666) popup_query_data_code_window_t1

0xe4fe,	// (0x00051678) popup_query_data_code_window_t2_ParamLimits

0xe4fe,	// (0x00051678) popup_query_data_code_window_t2

0xe510,	// (0x0005168a) popup_query_data_code_window_t3_ParamLimits

0xe510,	// (0x0005168a) popup_query_data_code_window_t3

0xe526,	// (0x000516a0) popup_query_data_code_window_t4_ParamLimits

0xe526,	// (0x000516a0) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00052704) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00052704) popup_query_data_code_window_t

0x1039,	// (0x000441b3) list_single_midp_graphic_pane_g3

0xe540,	// (0x000516ba) query_popup_data_pane_cp2_ParamLimits

0xe553,	// (0x000516cd) query_popup_pane_cp2_ParamLimits

0xe553,	// (0x000516cd) query_popup_pane_cp2

0xe248,	// (0x000513c2) bg_popup_window_pane_cp11

0x94db,	// (0x0004c655) heading_pane_cp5

0xe5e9,	// (0x00051763) listscroll_popup_info_pane

0xe248,	// (0x000513c2) input_focus_pane_cp3

0xe56e,	// (0x000516e8) query_popup_pane_t1

0xe57c,	// (0x000516f6) list_popup_info_pane_ParamLimits

0xe57c,	// (0x000516f6) list_popup_info_pane

0xe58b,	// (0x00051705) listscroll_popup_info_pane_g1

0xe593,	// (0x0005170d) scroll_pane_cp7

0xe59d,	// (0x00051717) popup_info_list_pane_t1_ParamLimits

0xe59d,	// (0x00051717) popup_info_list_pane_t1

0xe5b7,	// (0x00051731) popup_info_list_pane_t2_ParamLimits

0xe5b7,	// (0x00051731) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005270d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005270d) popup_info_list_pane_t

0xe248,	// (0x000513c2) bg_popup_window_pane_cp12

0xa8ba,	// (0x0004da34) find_popup_pane

0xe2a2,	// (0x0005141c) bg_popup_window_pane_cp3

0xe5d1,	// (0x0005174b) heading_pane_cp3

0xe5dd,	// (0x00051757) listscroll_popup_graphic_pane

0xe248,	// (0x000513c2) bg_popup_window_pane_cp4

0x6315,	// (0x0004948f) heading_pane_cp4

0xe5e9,	// (0x00051763) listscroll_popup_colour_pane

0x631f,	// (0x00049499) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x631f,	// (0x00049499) cell_large_graphic_colour_none_popup_pane

0x6333,	// (0x000494ad) grid_large_graphic_colour_popup_pane_ParamLimits

0x6333,	// (0x000494ad) grid_large_graphic_colour_popup_pane

0x635f,	// (0x000494d9) listscroll_popup_colour_pane_g1_ParamLimits

0x635f,	// (0x000494d9) listscroll_popup_colour_pane_g1

0x6376,	// (0x000494f0) listscroll_popup_colour_pane_g2_ParamLimits

0x6376,	// (0x000494f0) listscroll_popup_colour_pane_g2

0x638d,	// (0x00049507) listscroll_popup_colour_pane_g3_ParamLimits

0x638d,	// (0x00049507) listscroll_popup_colour_pane_g3

0x639d,	// (0x00049517) listscroll_popup_colour_pane_g4_ParamLimits

0x639d,	// (0x00049517) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00052712) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00052712) listscroll_popup_colour_pane_g

0xe5f1,	// (0x0005176b) scroll_pane_cp6_ParamLimits

0xe5f1,	// (0x0005176b) scroll_pane_cp6

0x63b1,	// (0x0004952b) cell_large_graphic_colour_popup_pane_ParamLimits

0x63b1,	// (0x0004952b) cell_large_graphic_colour_popup_pane

0xe603,	// (0x0005177d) cell_large_graphic_colour_none_popup_pane_t1

0xe248,	// (0x000513c2) grid_highlight_pane_cp5

0xe612,	// (0x0005178c) cell_large_graphic_colour_popup_pane_g1

0xe61a,	// (0x00051794) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005271b) cell_large_graphic_colour_popup_pane_g

0xe622,	// (0x0005179c) cell_large_graphic_colour_popup_pane_g2_copy1

0xe62b,	// (0x000517a5) grid_highlight_pane_cp4

0xe633,	// (0x000517ad) bg_popup_window_pane_cp8_ParamLimits

0xe633,	// (0x000517ad) bg_popup_window_pane_cp8

0xe64e,	// (0x000517c8) popup_snote_single_text_window_g1_ParamLimits

0xe64e,	// (0x000517c8) popup_snote_single_text_window_g1

0xe660,	// (0x000517da) popup_snote_single_text_window_t1_ParamLimits

0xe660,	// (0x000517da) popup_snote_single_text_window_t1

0xe673,	// (0x000517ed) popup_snote_single_text_window_t2_ParamLimits

0xe673,	// (0x000517ed) popup_snote_single_text_window_t2

0xe686,	// (0x00051800) popup_snote_single_text_window_t3_ParamLimits

0xe686,	// (0x00051800) popup_snote_single_text_window_t3

0xe6bf,	// (0x00051839) popup_snote_single_text_window_t4_ParamLimits

0xe6bf,	// (0x00051839) popup_snote_single_text_window_t4

0xe6f3,	// (0x0005186d) popup_snote_single_text_window_t5_ParamLimits

0xe6f3,	// (0x0005186d) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00052720) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00052720) popup_snote_single_text_window_t

0xe722,	// (0x0005189c) bg_popup_window_pane_cp9_ParamLimits

0xe722,	// (0x0005189c) bg_popup_window_pane_cp9

0xe64e,	// (0x000517c8) popup_snote_single_graphic_window_g1_ParamLimits

0xe64e,	// (0x000517c8) popup_snote_single_graphic_window_g1

0xe730,	// (0x000518aa) popup_snote_single_graphic_window_g2_ParamLimits

0xe730,	// (0x000518aa) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005272b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005272b) popup_snote_single_graphic_window_g

0xe73c,	// (0x000518b6) popup_snote_single_graphic_window_t1_ParamLimits

0xe73c,	// (0x000518b6) popup_snote_single_graphic_window_t1

0xe74f,	// (0x000518c9) popup_snote_single_graphic_window_t2_ParamLimits

0xe74f,	// (0x000518c9) popup_snote_single_graphic_window_t2

0xe762,	// (0x000518dc) popup_snote_single_graphic_window_t3_ParamLimits

0xe762,	// (0x000518dc) popup_snote_single_graphic_window_t3

0xe79b,	// (0x00051915) popup_snote_single_graphic_window_t4_ParamLimits

0xe79b,	// (0x00051915) popup_snote_single_graphic_window_t4

0xe7cf,	// (0x00051949) popup_snote_single_graphic_window_t5_ParamLimits

0xe7cf,	// (0x00051949) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00052730) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00052730) popup_snote_single_graphic_window_t

0xa7f8,	// (0x0004d972) grid_graphic_popup_pane_ParamLimits

0xa7f8,	// (0x0004d972) grid_graphic_popup_pane

0xa826,	// (0x0004d9a0) listscroll_popup_graphic_pane_g1_ParamLimits

0xa826,	// (0x0004d9a0) listscroll_popup_graphic_pane_g1

0xa83a,	// (0x0004d9b4) listscroll_popup_graphic_pane_g2_ParamLimits

0xa83a,	// (0x0004d9b4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00052b2f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00052b2f) listscroll_popup_graphic_pane_g

0xa84e,	// (0x0004d9c8) scroll_pane_cp5

0xa7a0,	// (0x0004d91a) cell_graphic_popup_pane_ParamLimits

0xa7a0,	// (0x0004d91a) cell_graphic_popup_pane

0xa781,	// (0x0004d8fb) cell_graphic_popup_pane_g1

0xa789,	// (0x0004d903) cell_graphic_popup_pane_g2

0xe622,	// (0x0005179c) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00052b28) cell_graphic_popup_pane_g

0xa792,	// (0x0004d90c) cell_graphic_popup_pane_t2

0xe62b,	// (0x000517a5) grid_highlight_pane_cp3

0xe810,	// (0x0005198a) list_gen_pane_ParamLimits

0xe810,	// (0x0005198a) list_gen_pane

0xe838,	// (0x000519b2) scroll_pane

0xa6d9,	// (0x0004d853) bg_list_pane_g1_ParamLimits

0xa6d9,	// (0x0004d853) bg_list_pane_g1

0xa6f6,	// (0x0004d870) bg_list_pane_g2_ParamLimits

0xa6f6,	// (0x0004d870) bg_list_pane_g2

0xa70b,	// (0x0004d885) bg_list_pane_g3_ParamLimits

0xa70b,	// (0x0004d885) bg_list_pane_g3

0xa71f,	// (0x0004d899) bg_list_pane_g4_ParamLimits

0xa71f,	// (0x0004d899) bg_list_pane_g4

0xa733,	// (0x0004d8ad) bg_list_pane_g5_ParamLimits

0xa733,	// (0x0004d8ad) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00052b1d) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00052b1d) bg_list_pane_g

0x7718,	// (0x0004a892) list_double2_graphic_large_graphic_pane_ParamLimits

0x7718,	// (0x0004a892) list_double2_graphic_large_graphic_pane

0x7718,	// (0x0004a892) list_double2_graphic_pane_ParamLimits

0x7718,	// (0x0004a892) list_double2_graphic_pane

0x7718,	// (0x0004a892) list_double2_large_graphic_pane_ParamLimits

0x7718,	// (0x0004a892) list_double2_large_graphic_pane

0x7718,	// (0x0004a892) list_double2_pane_ParamLimits

0x7718,	// (0x0004a892) list_double2_pane

0x7718,	// (0x0004a892) list_double_graphic_heading_pane_ParamLimits

0x7718,	// (0x0004a892) list_double_graphic_heading_pane

0x7718,	// (0x0004a892) list_double_graphic_pane_ParamLimits

0x7718,	// (0x0004a892) list_double_graphic_pane

0x7718,	// (0x0004a892) list_double_heading_pane_ParamLimits

0x7718,	// (0x0004a892) list_double_heading_pane

0x7718,	// (0x0004a892) list_double_large_graphic_pane_ParamLimits

0x7718,	// (0x0004a892) list_double_large_graphic_pane

0x7718,	// (0x0004a892) list_double_number_pane_ParamLimits

0x7718,	// (0x0004a892) list_double_number_pane

0x7718,	// (0x0004a892) list_double_pane_ParamLimits

0x7718,	// (0x0004a892) list_double_pane

0x7718,	// (0x0004a892) list_double_time_pane_ParamLimits

0x7718,	// (0x0004a892) list_double_time_pane

0x7718,	// (0x0004a892) list_setting_number_pane_ParamLimits

0x7718,	// (0x0004a892) list_setting_number_pane

0x7718,	// (0x0004a892) list_setting_pane_ParamLimits

0x7718,	// (0x0004a892) list_setting_pane

0xa695,	// (0x0004d80f) list_single_2graphic_pane_ParamLimits

0xa695,	// (0x0004d80f) list_single_2graphic_pane

0xa695,	// (0x0004d80f) list_single_graphic_heading_pane_ParamLimits

0xa695,	// (0x0004d80f) list_single_graphic_heading_pane

0xa695,	// (0x0004d80f) list_single_graphic_pane_ParamLimits

0xa695,	// (0x0004d80f) list_single_graphic_pane

0xa695,	// (0x0004d80f) list_single_heading_pane_ParamLimits

0xa695,	// (0x0004d80f) list_single_heading_pane

0x7740,	// (0x0004a8ba) list_single_large_graphic_pane_ParamLimits

0x7740,	// (0x0004a8ba) list_single_large_graphic_pane

0xa695,	// (0x0004d80f) list_single_number_heading_pane_ParamLimits

0xa695,	// (0x0004d80f) list_single_number_heading_pane

0xa695,	// (0x0004d80f) list_single_number_pane_ParamLimits

0xa695,	// (0x0004d80f) list_single_number_pane

0xa695,	// (0x0004d80f) list_single_pane_ParamLimits

0xa695,	// (0x0004d80f) list_single_pane

0xe248,	// (0x000513c2) list_highlight_pane_cp1

0x1bdf,	// (0x00044d59) list_single_pane_g1_ParamLimits

0x1bdf,	// (0x00044d59) list_single_pane_g1

0x63e0,	// (0x0004955a) list_single_pane_g2_ParamLimits

0x63e0,	// (0x0004955a) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005274c) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005274c) list_single_pane_g

0x56cc,	// (0x00048846) list_single_pane_t1_ParamLimits

0x56cc,	// (0x00048846) list_single_pane_t1

0x1bdf,	// (0x00044d59) list_single_number_pane_g1_ParamLimits

0x1bdf,	// (0x00044d59) list_single_number_pane_g1

0x63e0,	// (0x0004955a) list_single_number_pane_g2_ParamLimits

0x63e0,	// (0x0004955a) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005274c) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005274c) list_single_number_pane_g

0x566e,	// (0x000487e8) list_single_number_pane_t1_ParamLimits

0x566e,	// (0x000487e8) list_single_number_pane_t1

0x5684,	// (0x000487fe) list_single_number_pane_t2_ParamLimits

0x5684,	// (0x000487fe) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00052ade) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00052ade) list_single_number_pane_t

0x4d9f,	// (0x00047f19) list_single_graphic_pane_g1_ParamLimits

0x4d9f,	// (0x00047f19) list_single_graphic_pane_g1

0x1bdf,	// (0x00044d59) list_single_graphic_pane_g2_ParamLimits

0x1bdf,	// (0x00044d59) list_single_graphic_pane_g2

0x63e0,	// (0x0004955a) list_single_graphic_pane_g3_ParamLimits

0x63e0,	// (0x0004955a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005273b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005273b) list_single_graphic_pane_g

0x4dab,	// (0x00047f25) list_single_graphic_pane_t1_ParamLimits

0x4dab,	// (0x00047f25) list_single_graphic_pane_t1

0x4dc1,	// (0x00047f3b) list_single_heading_pane_g1_ParamLimits

0x4dc1,	// (0x00047f3b) list_single_heading_pane_g1

0x63e0,	// (0x0004955a) list_single_heading_pane_g2_ParamLimits

0x63e0,	// (0x0004955a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00052742) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00052742) list_single_heading_pane_g

0x4dd4,	// (0x00047f4e) list_single_heading_pane_t1_ParamLimits

0x4dd4,	// (0x00047f4e) list_single_heading_pane_t1

0x63ec,	// (0x00049566) list_single_heading_pane_t2_ParamLimits

0x63ec,	// (0x00049566) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00052747) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00052747) list_single_heading_pane_t

0x1bdf,	// (0x00044d59) list_single_number_heading_pane_g1_ParamLimits

0x1bdf,	// (0x00044d59) list_single_number_heading_pane_g1

0x63e0,	// (0x0004955a) list_single_number_heading_pane_g2_ParamLimits

0x63e0,	// (0x0004955a) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005274c) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005274c) list_single_number_heading_pane_g

0x4dea,	// (0x00047f64) list_single_number_heading_pane_t1_ParamLimits

0x4dea,	// (0x00047f64) list_single_number_heading_pane_t1

0x4e00,	// (0x00047f7a) list_single_number_heading_pane_t2_ParamLimits

0x4e00,	// (0x00047f7a) list_single_number_heading_pane_t2

0x4e12,	// (0x00047f8c) list_single_number_heading_pane_t3_ParamLimits

0x4e12,	// (0x00047f8c) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00052751) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00052751) list_single_number_heading_pane_t

0x4e24,	// (0x00047f9e) list_single_graphic_heading_pane_g1_ParamLimits

0x4e24,	// (0x00047f9e) list_single_graphic_heading_pane_g1

0x63fe,	// (0x00049578) list_single_graphic_heading_pane_g4_ParamLimits

0x63fe,	// (0x00049578) list_single_graphic_heading_pane_g4

0x63e0,	// (0x0004955a) list_single_graphic_heading_pane_g5_ParamLimits

0x63e0,	// (0x0004955a) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00052758) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00052758) list_single_graphic_heading_pane_g

0x4dea,	// (0x00047f64) list_single_graphic_heading_pane_t1_ParamLimits

0x4dea,	// (0x00047f64) list_single_graphic_heading_pane_t1

0x4e3c,	// (0x00047fb6) list_single_graphic_heading_pane_t2_ParamLimits

0x4e3c,	// (0x00047fb6) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005275f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005275f) list_single_graphic_heading_pane_t

0x640f,	// (0x00049589) list_single_large_graphic_pane_g1_ParamLimits

0x640f,	// (0x00049589) list_single_large_graphic_pane_g1

0x641b,	// (0x00049595) list_single_large_graphic_pane_g2_ParamLimits

0x641b,	// (0x00049595) list_single_large_graphic_pane_g2

0x6427,	// (0x000495a1) list_single_large_graphic_pane_g3_ParamLimits

0x6427,	// (0x000495a1) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00052764) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00052764) list_single_large_graphic_pane_g

0x9684,	// (0x0004c7fe) wait_border_pane_g2_copy1

0x6433,	// (0x000495ad) list_single_large_graphic_pane_g4_cp2

0x4e54,	// (0x00047fce) list_single_large_graphic_pane_t1_ParamLimits

0x4e54,	// (0x00047fce) list_single_large_graphic_pane_t1

0x643b,	// (0x000495b5) list_double_pane_g1_ParamLimits

0x643b,	// (0x000495b5) list_double_pane_g1

0x6447,	// (0x000495c1) list_double_pane_g2_ParamLimits

0x6447,	// (0x000495c1) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005276b) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005276b) list_double_pane_g

0x4e6a,	// (0x00047fe4) list_double_pane_t1_ParamLimits

0x4e6a,	// (0x00047fe4) list_double_pane_t1

0x4e80,	// (0x00047ffa) list_double_pane_t2_ParamLimits

0x4e80,	// (0x00047ffa) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00052770) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00052770) list_double_pane_t

0x4e92,	// (0x0004800c) list_double2_pane_g1_ParamLimits

0x4e92,	// (0x0004800c) list_double2_pane_g1

0x4ea3,	// (0x0004801d) list_double2_pane_g2_ParamLimits

0x4ea3,	// (0x0004801d) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00052775) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00052775) list_double2_pane_g

0x4eaf,	// (0x00048029) list_double2_pane_t1_ParamLimits

0x4eaf,	// (0x00048029) list_double2_pane_t1

0x4ec5,	// (0x0004803f) list_double2_pane_t2_ParamLimits

0x4ec5,	// (0x0004803f) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005277a) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005277a) list_double2_pane_t

0x643b,	// (0x000495b5) list_double_number_pane_g1_ParamLimits

0x643b,	// (0x000495b5) list_double_number_pane_g1

0x6447,	// (0x000495c1) list_double_number_pane_g2_ParamLimits

0x6447,	// (0x000495c1) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005276b) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005276b) list_double_number_pane_g

0x4ed7,	// (0x00048051) list_double_number_pane_t1_ParamLimits

0x4ed7,	// (0x00048051) list_double_number_pane_t1

0x4ee9,	// (0x00048063) list_double_number_pane_t2_ParamLimits

0x4ee9,	// (0x00048063) list_double_number_pane_t2

0x4eff,	// (0x00048079) list_double_number_pane_t3_ParamLimits

0x4eff,	// (0x00048079) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005277f) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005277f) list_double_number_pane_t

0x4f11,	// (0x0004808b) list_double_graphic_pane_g1_ParamLimits

0x4f11,	// (0x0004808b) list_double_graphic_pane_g1

0x4f1d,	// (0x00048097) list_double_graphic_pane_g2_ParamLimits

0x4f1d,	// (0x00048097) list_double_graphic_pane_g2

0x4f2c,	// (0x000480a6) list_double_graphic_pane_g3_ParamLimits

0x4f2c,	// (0x000480a6) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00052786) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00052786) list_double_graphic_pane_g

0x4f44,	// (0x000480be) list_double_graphic_pane_t1_ParamLimits

0x4f44,	// (0x000480be) list_double_graphic_pane_t1

0x4f5a,	// (0x000480d4) list_double_graphic_pane_t2_ParamLimits

0x4f5a,	// (0x000480d4) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005278f) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005278f) list_double_graphic_pane_t

0x4f6c,	// (0x000480e6) list_double2_graphic_pane_g1_ParamLimits

0x4f6c,	// (0x000480e6) list_double2_graphic_pane_g1

0x6453,	// (0x000495cd) list_double2_graphic_pane_g2_ParamLimits

0x6453,	// (0x000495cd) list_double2_graphic_pane_g2

0x645f,	// (0x000495d9) list_double2_graphic_pane_g3_ParamLimits

0x645f,	// (0x000495d9) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00052794) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00052794) list_double2_graphic_pane_g

0x4f78,	// (0x000480f2) list_double2_graphic_pane_t1_ParamLimits

0x4f78,	// (0x000480f2) list_double2_graphic_pane_t1

0x4f8e,	// (0x00048108) list_double2_graphic_pane_t2_ParamLimits

0x4f8e,	// (0x00048108) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005279b) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005279b) list_double2_graphic_pane_t

0x4fa0,	// (0x0004811a) list_double_large_graphic_pane_g1_ParamLimits

0x4fa0,	// (0x0004811a) list_double_large_graphic_pane_g1

0x4fcb,	// (0x00048145) list_double_large_graphic_pane_g2_ParamLimits

0x4fcb,	// (0x00048145) list_double_large_graphic_pane_g2

0x6447,	// (0x000495c1) list_double_large_graphic_pane_g3_ParamLimits

0x6447,	// (0x000495c1) list_double_large_graphic_pane_g3

0x4fe1,	// (0x0004815b) list_double_large_graphic_pane_g4_ParamLimits

0x4fe1,	// (0x0004815b) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000527a0) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000527a0) list_double_large_graphic_pane_g

0x4ff4,	// (0x0004816e) list_double_large_graphic_pane_t1_ParamLimits

0x4ff4,	// (0x0004816e) list_double_large_graphic_pane_t1

0x500d,	// (0x00048187) list_double_large_graphic_pane_t2_ParamLimits

0x500d,	// (0x00048187) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000527ab) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000527ab) list_double_large_graphic_pane_t

0x6480,	// (0x000495fa) list_double2_large_graphic_pane_g1_ParamLimits

0x6480,	// (0x000495fa) list_double2_large_graphic_pane_g1

0x501f,	// (0x00048199) list_double2_large_graphic_pane_g2_ParamLimits

0x501f,	// (0x00048199) list_double2_large_graphic_pane_g2

0x645f,	// (0x000495d9) list_double2_large_graphic_pane_g3_ParamLimits

0x645f,	// (0x000495d9) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000527b0) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000527b0) list_double2_large_graphic_pane_g

0x5030,	// (0x000481aa) list_double2_large_graphic_pane_t1_ParamLimits

0x5030,	// (0x000481aa) list_double2_large_graphic_pane_t1

0x5046,	// (0x000481c0) list_double2_large_graphic_pane_t2_ParamLimits

0x5046,	// (0x000481c0) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000527b7) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000527b7) list_double2_large_graphic_pane_t

0x5058,	// (0x000481d2) list_double_heading_pane_g1_ParamLimits

0x5058,	// (0x000481d2) list_double_heading_pane_g1

0x648c,	// (0x00049606) list_double_heading_pane_g2_ParamLimits

0x648c,	// (0x00049606) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000527bc) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000527bc) list_double_heading_pane_g

0x5069,	// (0x000481e3) list_double_heading_pane_t1_ParamLimits

0x5069,	// (0x000481e3) list_double_heading_pane_t1

0x507f,	// (0x000481f9) list_double_heading_pane_t2_ParamLimits

0x507f,	// (0x000481f9) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000527c1) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000527c1) list_double_heading_pane_t

0x4f11,	// (0x0004808b) list_double_graphic_heading_pane_g1_ParamLimits

0x4f11,	// (0x0004808b) list_double_graphic_heading_pane_g1

0x5058,	// (0x000481d2) list_double_graphic_heading_pane_g2_ParamLimits

0x5058,	// (0x000481d2) list_double_graphic_heading_pane_g2

0x648c,	// (0x00049606) list_double_graphic_heading_pane_g3_ParamLimits

0x648c,	// (0x00049606) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000527c6) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000527c6) list_double_graphic_heading_pane_g

0x5091,	// (0x0004820b) list_double_graphic_heading_pane_t1_ParamLimits

0x5091,	// (0x0004820b) list_double_graphic_heading_pane_t1

0x50a7,	// (0x00048221) list_double_graphic_heading_pane_t2_ParamLimits

0x50a7,	// (0x00048221) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000527cd) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000527cd) list_double_graphic_heading_pane_t

0x50b9,	// (0x00048233) list_double_time_pane_g1_ParamLimits

0x50b9,	// (0x00048233) list_double_time_pane_g1

0x50ca,	// (0x00048244) list_double_time_pane_g2_ParamLimits

0x50ca,	// (0x00048244) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000527d2) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000527d2) list_double_time_pane_g

0x50d6,	// (0x00048250) list_double_time_pane_t1_ParamLimits

0x50d6,	// (0x00048250) list_double_time_pane_t1

0x50ec,	// (0x00048266) list_double_time_pane_t2_ParamLimits

0x50ec,	// (0x00048266) list_double_time_pane_t2

0x50fe,	// (0x00048278) list_double_time_pane_t3_ParamLimits

0x50fe,	// (0x00048278) list_double_time_pane_t3

0x5110,	// (0x0004828a) list_double_time_pane_t4_ParamLimits

0x5110,	// (0x0004828a) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000527d7) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000527d7) list_double_time_pane_t

0x5122,	// (0x0004829c) list_setting_pane_g1_ParamLimits

0x5122,	// (0x0004829c) list_setting_pane_g1

0x512e,	// (0x000482a8) list_setting_pane_g2_ParamLimits

0x512e,	// (0x000482a8) list_setting_pane_g2

0x0001,

0xf666,	// (0x000527e0) list_setting_pane_g_ParamLimits

0xf666,	// (0x000527e0) list_setting_pane_g

0x513a,	// (0x000482b4) list_setting_pane_t1_ParamLimits

0x513a,	// (0x000482b4) list_setting_pane_t1

0x5154,	// (0x000482ce) list_setting_pane_t2_ParamLimits

0x5154,	// (0x000482ce) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000527e5) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000527e5) list_setting_pane_t

0x5193,	// (0x0004830d) set_value_pane_cp_ParamLimits

0x5193,	// (0x0004830d) set_value_pane_cp

0x51a1,	// (0x0004831b) list_setting_number_pane_g1_ParamLimits

0x51a1,	// (0x0004831b) list_setting_number_pane_g1

0x51ad,	// (0x00048327) list_setting_number_pane_g2_ParamLimits

0x51ad,	// (0x00048327) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000527ec) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000527ec) list_setting_number_pane_g

0x51b9,	// (0x00048333) list_setting_number_pane_t1_ParamLimits

0x51b9,	// (0x00048333) list_setting_number_pane_t1

0x51d2,	// (0x0004834c) list_setting_number_pane_t2_ParamLimits

0x51d2,	// (0x0004834c) list_setting_number_pane_t2

0x51ec,	// (0x00048366) list_setting_number_pane_t3_ParamLimits

0x51ec,	// (0x00048366) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000527f1) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000527f1) list_setting_number_pane_t

0x5193,	// (0x0004830d) set_value_pane_ParamLimits

0x5193,	// (0x0004830d) set_value_pane

0x0829,	// (0x000439a3) bg_set_opt_pane_ParamLimits

0x0829,	// (0x000439a3) bg_set_opt_pane

0x522f,	// (0x000483a9) set_value_pane_t1

0x084a,	// (0x000439c4) slider_set_pane_cp3

0x0853,	// (0x000439cd) volume_small_pane_cp

0x085c,	// (0x000439d6) list_form_gen_pane

0x0865,	// (0x000439df) scroll_pane_cp8

0x5245,	// (0x000483bf) form_field_data_pane_ParamLimits

0x5245,	// (0x000483bf) form_field_data_pane

0x526d,	// (0x000483e7) form_field_data_wide_pane_ParamLimits

0x526d,	// (0x000483e7) form_field_data_wide_pane

0x5294,	// (0x0004840e) form_field_popup_pane_ParamLimits

0x5294,	// (0x0004840e) form_field_popup_pane

0x52b6,	// (0x00048430) form_field_popup_wide_pane_ParamLimits

0x52b6,	// (0x00048430) form_field_popup_wide_pane

0x52d7,	// (0x00048451) form_field_slider_pane_ParamLimits

0x52d7,	// (0x00048451) form_field_slider_pane

0x52ea,	// (0x00048464) form_field_slider_wide_pane_ParamLimits

0x52ea,	// (0x00048464) form_field_slider_wide_pane

0x0876,	// (0x000439f0) data_form_pane

0x5307,	// (0x00048481) form_field_data_pane_t1

0x0882,	// (0x000439fc) input_focus_pane

0x5321,	// (0x0004849b) data_form_wide_pane

0x533e,	// (0x000484b8) form_field_data_wide_pane_t1

0xe640,	// (0x000517ba) input_focus_pane_cp6

0x5360,	// (0x000484da) form_field_popup_pane_t1

0x0882,	// (0x000439fc) input_focus_pane_cp7

0x08b0,	// (0x00043a2a) list_form_pane

0x5382,	// (0x000484fc) form_field_popup_wide_pane_t1

0x0882,	// (0x000439fc) input_focus_pane_cp8

0x08bc,	// (0x00043a36) list_form_wide_pane

0x539f,	// (0x00048519) form_field_slider_pane_t1_ParamLimits

0x539f,	// (0x00048519) form_field_slider_pane_t1

0x53b7,	// (0x00048531) form_field_slider_pane_t2_ParamLimits

0x53b7,	// (0x00048531) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00052801) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00052801) form_field_slider_pane_t

0xe3d5,	// (0x0005154f) input_focus_pane_cp9_ParamLimits

0xe3d5,	// (0x0005154f) input_focus_pane_cp9

0x53cc,	// (0x00048546) slider_cont_pane_ParamLimits

0x53cc,	// (0x00048546) slider_cont_pane

0x08cb,	// (0x00043a45) form_field_slider_wide_pane_t1_ParamLimits

0x08cb,	// (0x00043a45) form_field_slider_wide_pane_t1

0x53e0,	// (0x0004855a) form_field_slider_wide_pane_t2_ParamLimits

0x53e0,	// (0x0004855a) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00052806) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00052806) form_field_slider_wide_pane_t

0xe3d5,	// (0x0005154f) input_focus_pane_cp10_ParamLimits

0xe3d5,	// (0x0005154f) input_focus_pane_cp10

0x53f2,	// (0x0004856c) slider_cont_pane_cp1_ParamLimits

0x53f2,	// (0x0004856c) slider_cont_pane_cp1

0x5406,	// (0x00048580) slider_form_pane_cp

0x08dd,	// (0x00043a57) input_focus_pane_g1

0x08e5,	// (0x00043a5f) input_focus_pane_g2

0x08ed,	// (0x00043a67) input_focus_pane_g3

0x08f5,	// (0x00043a6f) input_focus_pane_g4

0x08fd,	// (0x00043a77) input_focus_pane_g5

0x0905,	// (0x00043a7f) input_focus_pane_g6

0x090d,	// (0x00043a87) input_focus_pane_g7

0x0915,	// (0x00043a8f) input_focus_pane_g8

0x091d,	// (0x00043a97) input_focus_pane_g9

0xe23e,	// (0x000513b8) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005280b) input_focus_pane_g

0x968d,	// (0x0004c807) wait_border_pane_g3_copy1

0x540e,	// (0x00048588) data_form_pane_t1

0xe23e,	// (0x000513b8) wait_anim_pane_g1_copy1

0x5696,	// (0x00048810) data_form_wide_pane_t1

0x542d,	// (0x000485a7) list_form_graphic_pane_cp_ParamLimits

0x542d,	// (0x000485a7) list_form_graphic_pane_cp

0xa5ec,	// (0x0004d766) slider_form_pane_g1

0xa5f5,	// (0x0004d76f) slider_form_pane_g2

0x0006,

0xf994,	// (0x00052b0e) slider_form_pane_g

0x542d,	// (0x000485a7) list_form_graphic_pane_ParamLimits

0x542d,	// (0x000485a7) list_form_graphic_pane

0x543f,	// (0x000485b9) list_form_graphic_pane_g1

0x5447,	// (0x000485c1) list_form_graphic_pane_t1_ParamLimits

0x5447,	// (0x000485c1) list_form_graphic_pane_t1

0xe2a2,	// (0x0005141c) list_highlight_pane_cp5_ParamLimits

0xe2a2,	// (0x0005141c) list_highlight_pane_cp5

0x6498,	// (0x00049612) find_pane_g1

0x0925,	// (0x00043a9f) input_find_pane

0x545c,	// (0x000485d6) input_find_pane_g1_ParamLimits

0x545c,	// (0x000485d6) input_find_pane_g1

0x5468,	// (0x000485e2) input_find_pane_t1_ParamLimits

0x5468,	// (0x000485e2) input_find_pane_t1

0x547d,	// (0x000485f7) input_find_pane_t2_ParamLimits

0x547d,	// (0x000485f7) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00052820) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00052820) input_find_pane_t

0x092e,	// (0x00043aa8) input_focus_pane_cp5_ParamLimits

0x092e,	// (0x00043aa8) input_focus_pane_cp5

0x093c,	// (0x00043ab6) bg_popup_window_pane_cp2_ParamLimits

0x093c,	// (0x00043ab6) bg_popup_window_pane_cp2

0x0949,	// (0x00043ac3) listscroll_menu_pane_ParamLimits

0x0949,	// (0x00043ac3) listscroll_menu_pane

0x64ad,	// (0x00049627) popup_submenu_window_ParamLimits

0x64ad,	// (0x00049627) popup_submenu_window

0x0955,	// (0x00043acf) find_popup_pane_g1

0x095d,	// (0x00043ad7) input_popup_find_pane_cp

0x092e,	// (0x00043aa8) input_focus_pane_cp4_ParamLimits

0x092e,	// (0x00043aa8) input_focus_pane_cp4

0x0967,	// (0x00043ae1) input_popup_find_pane_t1_ParamLimits

0x0967,	// (0x00043ae1) input_popup_find_pane_t1

0xe248,	// (0x000513c2) bg_popup_sub_pane_cp

0x0995,	// (0x00043b0f) listscroll_popup_sub_pane

0x099d,	// (0x00043b17) list_submenu_pane_ParamLimits

0x099d,	// (0x00043b17) list_submenu_pane

0x09ae,	// (0x00043b28) scroll_pane_cp4

0x09b6,	// (0x00043b30) list_single_popup_submenu_pane_ParamLimits

0x09b6,	// (0x00043b30) list_single_popup_submenu_pane

0x09cb,	// (0x00043b45) list_single_popup_submenu_pane_g1

0x09d3,	// (0x00043b4d) list_single_popup_submenu_pane_t1_ParamLimits

0x09d3,	// (0x00043b4d) list_single_popup_submenu_pane_t1

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp1_ParamLimits

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp1

0x64eb,	// (0x00049665) tabs_2_active_pane_g1

0x64f3,	// (0x0004966d) tabs_2_active_pane_t1

0xe2a2,	// (0x0005141c) bg_passive_tab_pane_cp1_ParamLimits

0xe2a2,	// (0x0005141c) bg_passive_tab_pane_cp1

0x64eb,	// (0x00049665) tabs_2_passive_pane_g1

0x64f3,	// (0x0004966d) tabs_2_passive_pane_t1

0x1872,	// (0x000449ec) bg_active_tab_pane_cp4

0x6505,	// (0x0004967f) tabs_2_long_active_pane_t1

0x6518,	// (0x00049692) bg_passive_tab_pane_cp4

0x73d8,	// (0x0004a552) list_single_midp_graphic_pane_g4_ParamLimits

0x1872,	// (0x000449ec) bg_active_tab_pane_cp5

0x6524,	// (0x0004969e) tabs_3_long_active_pane_t1

0x6518,	// (0x00049692) bg_passive_tab_pane_cp5

0x73d8,	// (0x0004a552) list_single_midp_graphic_pane_g4

0xe2a2,	// (0x0005141c) bg_popup_window_pane_cp13_ParamLimits

0xe2a2,	// (0x0005141c) bg_popup_window_pane_cp13

0x09f1,	// (0x00043b6b) listscroll_popup_fast_pane_ParamLimits

0x09f1,	// (0x00043b6b) listscroll_popup_fast_pane

0x0a00,	// (0x00043b7a) grid_popup_fast_pane_ParamLimits

0x0a00,	// (0x00043b7a) grid_popup_fast_pane

0x0a12,	// (0x00043b8c) scroll_pane_cp9_ParamLimits

0x0a12,	// (0x00043b8c) scroll_pane_cp9

0xbf6d,	// (0x0004f0e7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbf6d,	// (0x0004f0e7) list_single_graphic_hl_pane_t1_cp2

0x0a36,	// (0x00043bb0) input_focus_pane_cp20_ParamLimits

0x0a36,	// (0x00043bb0) input_focus_pane_cp20

0x0a44,	// (0x00043bbe) query_popup_data_pane_t1_ParamLimits

0x0a44,	// (0x00043bbe) query_popup_data_pane_t1

0x0a57,	// (0x00043bd1) query_popup_data_pane_t2_ParamLimits

0x0a57,	// (0x00043bd1) query_popup_data_pane_t2

0x0a9d,	// (0x00043c17) query_popup_data_pane_t3_ParamLimits

0x0a9d,	// (0x00043c17) query_popup_data_pane_t3

0x0ade,	// (0x00043c58) query_popup_data_pane_t4_ParamLimits

0x0ade,	// (0x00043c58) query_popup_data_pane_t4

0x0b1a,	// (0x00043c94) query_popup_data_pane_t5_ParamLimits

0x0b1a,	// (0x00043c94) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00052825) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00052825) query_popup_data_pane_t

0x08dd,	// (0x00043a57) bg_set_opt_pane_g1

0x08e5,	// (0x00043a5f) bg_set_opt_pane_g2

0x08ed,	// (0x00043a67) bg_set_opt_pane_g3

0x08f5,	// (0x00043a6f) bg_set_opt_pane_g4

0x08fd,	// (0x00043a77) bg_set_opt_pane_g5

0x0905,	// (0x00043a7f) bg_set_opt_pane_g6

0x090d,	// (0x00043a87) bg_set_opt_pane_g7

0x0915,	// (0x00043a8f) bg_set_opt_pane_g8

0x091d,	// (0x00043a97) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00052830) bg_set_opt_pane_g

0x69b6,	// (0x00049b30) control_top_pane_stacon_ParamLimits

0x69b6,	// (0x00049b30) control_top_pane_stacon

0x6a09,	// (0x00049b83) signal_pane_stacon_ParamLimits

0x6a09,	// (0x00049b83) signal_pane_stacon

0x0f31,	// (0x000440ab) stacon_top_pane_g1_ParamLimits

0x0f31,	// (0x000440ab) stacon_top_pane_g1

0x6a2e,	// (0x00049ba8) title_pane_stacon_ParamLimits

0x6a2e,	// (0x00049ba8) title_pane_stacon

0x6a58,	// (0x00049bd2) uni_indicator_pane_stacon_ParamLimits

0x6a58,	// (0x00049bd2) uni_indicator_pane_stacon

0x6a70,	// (0x00049bea) battery_pane_stacon_ParamLimits

0x6a70,	// (0x00049bea) battery_pane_stacon

0x6ab4,	// (0x00049c2e) control_bottom_pane_stacon_ParamLimits

0x6ab4,	// (0x00049c2e) control_bottom_pane_stacon

0x6ad7,	// (0x00049c51) navi_pane_stacon_ParamLimits

0x6ad7,	// (0x00049c51) navi_pane_stacon

0x0f53,	// (0x000440cd) stacon_bottom_pane_g1_ParamLimits

0x0f53,	// (0x000440cd) stacon_bottom_pane_g1

0x6536,	// (0x000496b0) aid_levels_signal_lsc_ParamLimits

0x6536,	// (0x000496b0) aid_levels_signal_lsc

0x654d,	// (0x000496c7) signal_pane_stacon_g1_ParamLimits

0x654d,	// (0x000496c7) signal_pane_stacon_g1

0x6561,	// (0x000496db) signal_pane_stacon_g2_ParamLimits

0x6561,	// (0x000496db) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00052843) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00052843) signal_pane_stacon_g

0x6596,	// (0x00049710) title_pane_stacon_t1_ParamLimits

0x6596,	// (0x00049710) title_pane_stacon_t1

0x0b72,	// (0x00043cec) uni_indicator_pane_stacon_g1

0x0b7c,	// (0x00043cf6) uni_indicator_pane_stacon_g2

0x0b5e,	// (0x00043cd8) uni_indicator_pane_stacon_g3

0x0b68,	// (0x00043ce2) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005284f) uni_indicator_pane_stacon_g

0x65bb,	// (0x00049735) control_top_pane_stacon_g1

0x65c3,	// (0x0004973d) control_top_pane_stacon_t1_ParamLimits

0x65c3,	// (0x0004973d) control_top_pane_stacon_t1

0x65fa,	// (0x00049774) aid_levels_battery_lsc_ParamLimits

0x65fa,	// (0x00049774) aid_levels_battery_lsc

0x6612,	// (0x0004978c) battery_pane_stacon_g1_ParamLimits

0x6612,	// (0x0004978c) battery_pane_stacon_g1

0x6625,	// (0x0004979f) battery_pane_stacon_g2_ParamLimits

0x6625,	// (0x0004979f) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00052858) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00052858) battery_pane_stacon_g

0x6663,	// (0x000497dd) navi_icon_pane_stacon

0x6677,	// (0x000497f1) navi_navi_pane_stacon

0x6663,	// (0x000497dd) navi_text_pane_stacon

0x65bb,	// (0x00049735) control_bottom_pane_stacon_g1

0x668d,	// (0x00049807) control_bottom_pane_stacon_t1_ParamLimits

0x668d,	// (0x00049807) control_bottom_pane_stacon_t1

0x66c4,	// (0x0004983e) grid_app_pane_ParamLimits

0x66c4,	// (0x0004983e) grid_app_pane

0x66e8,	// (0x00049862) scroll_pane_cp15_ParamLimits

0x66e8,	// (0x00049862) scroll_pane_cp15

0x66fb,	// (0x00049875) cell_app_pane_ParamLimits

0x66fb,	// (0x00049875) cell_app_pane

0x6727,	// (0x000498a1) cell_app_pane_g1_ParamLimits

0x6727,	// (0x000498a1) cell_app_pane_g1

0x0ba0,	// (0x00043d1a) cell_app_pane_g2_ParamLimits

0x0ba0,	// (0x00043d1a) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005285d) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005285d) cell_app_pane_g

0x0bac,	// (0x00043d26) cell_app_pane_t1_ParamLimits

0x0bac,	// (0x00043d26) cell_app_pane_t1

0x0bc3,	// (0x00043d3d) grid_highlight_pane_ParamLimits

0x0bc3,	// (0x00043d3d) grid_highlight_pane

0x08dd,	// (0x00043a57) cell_highlight_pane_g1

0x08e5,	// (0x00043a5f) cell_highlight_pane_g2

0x08ed,	// (0x00043a67) cell_highlight_pane_g3

0x08f5,	// (0x00043a6f) cell_highlight_pane_g4

0x08fd,	// (0x00043a77) cell_highlight_pane_g5

0x0905,	// (0x00043a7f) cell_highlight_pane_g6

0x090d,	// (0x00043a87) cell_highlight_pane_g7

0x0915,	// (0x00043a8f) cell_highlight_pane_g8

0x091d,	// (0x00043a97) cell_highlight_pane_g9

0xe23e,	// (0x000513b8) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005280b) cell_highlight_pane_g

0x0bd4,	// (0x00043d4e) bg_scroll_pane

0x675a,	// (0x000498d4) scroll_handle_pane

0x0c1b,	// (0x00043d95) scroll_bg_pane_g1

0x0c30,	// (0x00043daa) scroll_bg_pane_g2

0x0c48,	// (0x00043dc2) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00052862) scroll_bg_pane_g

0x0c5d,	// (0x00043dd7) scroll_handle_focus_pane_ParamLimits

0x0c5d,	// (0x00043dd7) scroll_handle_focus_pane

0x0c1b,	// (0x00043d95) scroll_handle_pane_g1

0x0c6a,	// (0x00043de4) scroll_handle_pane_g2

0x0c48,	// (0x00043dc2) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00052869) scroll_handle_pane_g

0x092e,	// (0x00043aa8) bg_popup_sub_pane_cp21_ParamLimits

0x092e,	// (0x00043aa8) bg_popup_sub_pane_cp21

0x0c7e,	// (0x00043df8) popup_fep_japan_predictive_window_t1_ParamLimits

0x0c7e,	// (0x00043df8) popup_fep_japan_predictive_window_t1

0x0c95,	// (0x00043e0f) popup_fep_japan_predictive_window_t2_ParamLimits

0x0c95,	// (0x00043e0f) popup_fep_japan_predictive_window_t2

0x0cc8,	// (0x00043e42) popup_fep_japan_predictive_window_t3_ParamLimits

0x0cc8,	// (0x00043e42) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00052870) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00052870) popup_fep_japan_predictive_window_t

0xe248,	// (0x000513c2) bg_popup_sub_pane_cp23

0x0cff,	// (0x00043e79) listscroll_japin_cand_pane

0x0d07,	// (0x00043e81) popup_fep_japan_candidate_window_t1

0x0d15,	// (0x00043e8f) candidate_pane_ParamLimits

0x0d15,	// (0x00043e8f) candidate_pane

0x0d27,	// (0x00043ea1) scroll_pane_cp30

0x0d31,	// (0x00043eab) list_single_popup_jap_candidate_pane_ParamLimits

0x0d31,	// (0x00043eab) list_single_popup_jap_candidate_pane

0xe248,	// (0x000513c2) list_highlight_pane_cp30

0x0d45,	// (0x00043ebf) list_single_popup_jap_candidate_pane_t1

0x6783,	// (0x000498fd) level_1_signal

0x6790,	// (0x0004990a) level_2_signal

0x679d,	// (0x00049917) level_3_signal

0x67aa,	// (0x00049924) level_4_signal

0x67b7,	// (0x00049931) level_5_signal

0x67c4,	// (0x0004993e) level_6_signal

0x67d1,	// (0x0004994b) level_7_signal

0x6783,	// (0x000498fd) level_1_battery

0x6790,	// (0x0004990a) level_2_battery

0x679d,	// (0x00049917) level_3_battery

0x67aa,	// (0x00049924) level_4_battery

0x67b7,	// (0x00049931) level_5_battery

0x67c4,	// (0x0004993e) level_6_battery

0x67d1,	// (0x0004994b) level_7_battery

0x0d6c,	// (0x00043ee6) list_menu_pane_ParamLimits

0x0d6c,	// (0x00043ee6) list_menu_pane

0x0d82,	// (0x00043efc) scroll_pane_cp25_ParamLimits

0x0d82,	// (0x00043efc) scroll_pane_cp25

0x0d9b,	// (0x00043f15) list_double2_graphic_pane_cp2_ParamLimits

0x0d9b,	// (0x00043f15) list_double2_graphic_pane_cp2

0x0d9b,	// (0x00043f15) list_double2_large_graphic_pane_cp2_ParamLimits

0x0d9b,	// (0x00043f15) list_double2_large_graphic_pane_cp2

0x0d9b,	// (0x00043f15) list_double2_pane_cp2_ParamLimits

0x0d9b,	// (0x00043f15) list_double2_pane_cp2

0x0d9b,	// (0x00043f15) list_double_graphic_pane_cp2_ParamLimits

0x0d9b,	// (0x00043f15) list_double_graphic_pane_cp2

0x0d9b,	// (0x00043f15) list_double_large_graphic_pane_cp2_ParamLimits

0x0d9b,	// (0x00043f15) list_double_large_graphic_pane_cp2

0x0d9b,	// (0x00043f15) list_double_number_pane_cp2_ParamLimits

0x0d9b,	// (0x00043f15) list_double_number_pane_cp2

0x0d9b,	// (0x00043f15) list_double_pane_cp2_ParamLimits

0x0d9b,	// (0x00043f15) list_double_pane_cp2

0x6813,	// (0x0004998d) list_single_2graphic_pane_cp2_ParamLimits

0x6813,	// (0x0004998d) list_single_2graphic_pane_cp2

0x6813,	// (0x0004998d) list_single_graphic_heading_pane_cp2_ParamLimits

0x6813,	// (0x0004998d) list_single_graphic_heading_pane_cp2

0x6813,	// (0x0004998d) list_single_graphic_pane_cp2_ParamLimits

0x6813,	// (0x0004998d) list_single_graphic_pane_cp2

0x6813,	// (0x0004998d) list_single_heading_pane_cp2_ParamLimits

0x6813,	// (0x0004998d) list_single_heading_pane_cp2

0x0dab,	// (0x00043f25) list_single_large_graphic_pane_cp2_ParamLimits

0x0dab,	// (0x00043f25) list_single_large_graphic_pane_cp2

0x6813,	// (0x0004998d) list_single_number_heading_pane_cp2_ParamLimits

0x6813,	// (0x0004998d) list_single_number_heading_pane_cp2

0x6813,	// (0x0004998d) list_single_number_pane_cp2_ParamLimits

0x6813,	// (0x0004998d) list_single_number_pane_cp2

0x6813,	// (0x0004998d) list_single_pane_cp2_ParamLimits

0x6813,	// (0x0004998d) list_single_pane_cp2

0x0dc4,	// (0x00043f3e) bg_popup_sub_pane_cp22

0x68fc,	// (0x00049a76) popup_side_volume_key_window_g1

0x6926,	// (0x00049aa0) popup_side_volume_key_window_t1

0x6944,	// (0x00049abe) volume_small_pane_cp1

0xe3d5,	// (0x0005154f) bg_popup_sub_pane_cp24_ParamLimits

0xe3d5,	// (0x0005154f) bg_popup_sub_pane_cp24

0x0dda,	// (0x00043f54) fep_china_uni_candidate_pane_ParamLimits

0x0dda,	// (0x00043f54) fep_china_uni_candidate_pane

0x0dee,	// (0x00043f68) fep_china_uni_entry_pane

0x0dfe,	// (0x00043f78) popup_fep_china_uni_window_g1

0x0e1a,	// (0x00043f94) fep_china_uni_entry_pane_g1

0x0e24,	// (0x00043f9e) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x000528a1) fep_china_uni_entry_pane_g

0x0e2e,	// (0x00043fa8) fep_entry_item_pane

0x0e38,	// (0x00043fb2) fep_candidate_item_pane

0x0e40,	// (0x00043fba) fep_china_uni_candidate_pane_g1

0x0e4a,	// (0x00043fc4) fep_china_uni_candidate_pane_g2

0x0e52,	// (0x00043fcc) fep_china_uni_candidate_pane_g3

0x0e5a,	// (0x00043fd4) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x000528a6) fep_china_uni_candidate_pane_g

0xe23e,	// (0x000513b8) fep_entry_item_pane_g1

0x0e64,	// (0x00043fde) fep_entry_item_pane_t1_ParamLimits

0x0e64,	// (0x00043fde) fep_entry_item_pane_t1

0x0e7a,	// (0x00043ff4) fep_candidate_item_pane_t1_ParamLimits

0x0e7a,	// (0x00043ff4) fep_candidate_item_pane_t1

0x0e8f,	// (0x00044009) fep_candidate_item_pane_t2_ParamLimits

0x0e8f,	// (0x00044009) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x000528af) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x000528af) fep_candidate_item_pane_t

0xe2a2,	// (0x0005141c) list_highlight_pane_cp31_ParamLimits

0xe2a2,	// (0x0005141c) list_highlight_pane_cp31

0x0ea1,	// (0x0004401b) level_1_signal_lsc

0x0eaa,	// (0x00044024) level_2_signal_lsc

0x0eb3,	// (0x0004402d) level_3_signal_lsc

0x0ebc,	// (0x00044036) level_4_signal_lsc

0x0ec5,	// (0x0004403f) level_5_signal_lsc

0x0ece,	// (0x00044048) level_6_signal_lsc

0x0ed7,	// (0x00044051) level_7_signal_lsc

0x0ed7,	// (0x00044051) level_1_battery_lsc

0x0ee0,	// (0x0004405a) level_2_battery_lsc

0x0ee9,	// (0x00044063) level_3_battery_lsc

0x0ef2,	// (0x0004406c) level_4_battery_lsc

0x0efb,	// (0x00044075) level_5_battery_lsc

0x0f04,	// (0x0004407e) level_6_battery_lsc

0x0ea1,	// (0x0004401b) level_7_battery_lsc

0x0f0d,	// (0x00044087) scroll_handle_focus_pane_g1

0x0f16,	// (0x00044090) scroll_handle_focus_pane_g2

0x0f1f,	// (0x00044099) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x000528b4) scroll_handle_focus_pane_g

0x5492,	// (0x0004860c) list_single_2graphic_pane_g1_ParamLimits

0x5492,	// (0x0004860c) list_single_2graphic_pane_g1

0x63fe,	// (0x00049578) list_single_2graphic_pane_g2_ParamLimits

0x63fe,	// (0x00049578) list_single_2graphic_pane_g2

0x63e0,	// (0x0004955a) list_single_2graphic_pane_g3_ParamLimits

0x63e0,	// (0x0004955a) list_single_2graphic_pane_g3

0x694c,	// (0x00049ac6) list_single_2graphic_pane_g4_ParamLimits

0x694c,	// (0x00049ac6) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x000528bb) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x000528bb) list_single_2graphic_pane_g

0x549e,	// (0x00048618) list_single_2graphic_pane_t1_ParamLimits

0x549e,	// (0x00048618) list_single_2graphic_pane_t1

0x6958,	// (0x00049ad2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6958,	// (0x00049ad2) list_double2_graphic_large_graphic_pane_g1

0x501f,	// (0x00048199) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x501f,	// (0x00048199) list_double2_graphic_large_graphic_pane_g2

0x645f,	// (0x000495d9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x645f,	// (0x000495d9) list_double2_graphic_large_graphic_pane_g3

0x54cc,	// (0x00048646) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x54cc,	// (0x00048646) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000528c4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000528c4) list_double2_graphic_large_graphic_pane_g

0x54d8,	// (0x00048652) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x54d8,	// (0x00048652) list_double2_graphic_large_graphic_pane_t1

0x54ee,	// (0x00048668) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x54ee,	// (0x00048668) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000528cd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000528cd) list_double2_graphic_large_graphic_pane_t

0x0fb1,	// (0x0004412b) popup_fast_swap_window_ParamLimits

0x0fb1,	// (0x0004412b) popup_fast_swap_window

0x0fcf,	// (0x00044149) popup_side_volume_key_window

0x0fed,	// (0x00044167) stacon_top_pane

0x0ff7,	// (0x00044171) status_pane_ParamLimits

0x0ff7,	// (0x00044171) status_pane

0x6b5e,	// (0x00049cd8) status_small_pane

0xe248,	// (0x000513c2) control_pane

0xe248,	// (0x000513c2) stacon_bottom_pane

0x0865,	// (0x000439df) scroll_pane_cp121

0x085c,	// (0x000439d6) set_content_pane

0x696a,	// (0x00049ae4) bg_active_tab_pane_g1_cp1

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp1

0x6973,	// (0x00049aed) bg_active_tab_pane_g3_cp1

0x696a,	// (0x00049ae4) bg_passive_tab_pane_g1_cp1

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp1

0x6973,	// (0x00049aed) bg_passive_tab_pane_g3_cp1

0x697c,	// (0x00049af6) bg_active_tab_pane_g1_cp2

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp2

0x6985,	// (0x00049aff) bg_active_tab_pane_g3_cp2

0x697c,	// (0x00049af6) bg_passive_tab_pane_g1_cp2

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp2

0x6985,	// (0x00049aff) bg_passive_tab_pane_g3_cp2

0x698e,	// (0x00049b08) bg_active_tab_pane_g1_cp3

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp3

0x6997,	// (0x00049b11) bg_active_tab_pane_g3_cp3

0x698e,	// (0x00049b08) bg_passive_tab_pane_g1_cp3

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp3

0x6997,	// (0x00049b11) bg_passive_tab_pane_g3_cp3

0x69a0,	// (0x00049b1a) bg_active_tab_pane_g1_cp4

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp4

0x69ab,	// (0x00049b25) bg_active_tab_pane_g3_cp4

0x69a0,	// (0x00049b1a) bg_passive_tab_pane_g1_cp4

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp4

0x69ab,	// (0x00049b25) bg_passive_tab_pane_g3_cp4

0x0f78,	// (0x000440f2) bg_active_tab_pane_g1_cp5

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp5

0x0f6f,	// (0x000440e9) bg_active_tab_pane_g3_cp5

0x0f78,	// (0x000440f2) bg_passive_tab_pane_g1_cp5

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp5

0x0f6f,	// (0x000440e9) bg_passive_tab_pane_g3_cp5

0x6afa,	// (0x00049c74) list_set_graphic_pane_ParamLimits

0x6afa,	// (0x00049c74) list_set_graphic_pane

0xe248,	// (0x000513c2) bg_set_opt_pane_cp4

0x6b0f,	// (0x00049c89) list_set_graphic_pane_g1_ParamLimits

0x6b0f,	// (0x00049c89) list_set_graphic_pane_g1

0x6b1b,	// (0x00049c95) list_set_graphic_pane_g2_ParamLimits

0x6b1b,	// (0x00049c95) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000528d2) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000528d2) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00052c53) volume_small_pane_cp_g

0x6b3f,	// (0x00049cb9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6b3f,	// (0x00049cb9) list_double2_large_graphic_pane_g1_cp2

0x6b4d,	// (0x00049cc7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6b4d,	// (0x00049cc7) list_double2_large_graphic_pane_g2_cp2

0x0f81,	// (0x000440fb) list_double2_large_graphic_pane_g3_cp2

0x0f89,	// (0x00044103) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0f89,	// (0x00044103) list_double2_large_graphic_pane_t1_cp2

0x0f9f,	// (0x00044119) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0f9f,	// (0x00044119) list_double2_large_graphic_pane_t2_cp2

0xa171,	// (0x0004d2eb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa171,	// (0x0004d2eb) list_double_large_graphic_pane_g1_cp2

0xa184,	// (0x0004d2fe) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa184,	// (0x0004d2fe) list_double_large_graphic_pane_g2_cp2

0x10d8,	// (0x00044252) list_double_large_graphic_pane_g3_cp2

0xa195,	// (0x0004d30f) list_double_large_graphic_pane_g4_cp

0xa19d,	// (0x0004d317) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa19d,	// (0x0004d317) list_double_large_graphic_pane_t1_cp2

0xa1b4,	// (0x0004d32e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa1b4,	// (0x0004d32e) list_double_large_graphic_pane_t2_cp2

0x6b69,	// (0x00049ce3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6b69,	// (0x00049ce3) list_double2_graphic_pane_g1_cp2

0x6b77,	// (0x00049cf1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6b77,	// (0x00049cf1) list_double2_graphic_pane_g2_cp2

0x6b88,	// (0x00049d02) list_double2_graphic_pane_g3_cp2

0x1005,	// (0x0004417f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1005,	// (0x0004417f) list_double2_graphic_pane_t1_cp2

0x101b,	// (0x00044195) list_double2_graphic_pane_t2_cp2_ParamLimits

0x101b,	// (0x00044195) list_double2_graphic_pane_t2_cp2

0x102d,	// (0x000441a7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x102d,	// (0x000441a7) list_single_number_heading_pane_g1_cp2

0x1039,	// (0x000441b3) list_single_number_heading_pane_g2_cp2

0x1041,	// (0x000441bb) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1041,	// (0x000441bb) list_single_number_heading_pane_t1_cp2

0x6b92,	// (0x00049d0c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6b92,	// (0x00049d0c) list_single_number_heading_pane_t2_cp2

0x1057,	// (0x000441d1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1057,	// (0x000441d1) list_single_number_heading_pane_t3_cp2

0x102d,	// (0x000441a7) list_single_heading_pane_g1_cp2_ParamLimits

0x102d,	// (0x000441a7) list_single_heading_pane_g1_cp2

0x1039,	// (0x000441b3) list_single_heading_pane_g2_cp2

0x1041,	// (0x000441bb) list_single_heading_pane_t1_cp2_ParamLimits

0x1041,	// (0x000441bb) list_single_heading_pane_t1_cp2

0x9f6b,	// (0x0004d0e5) list_single_heading_pane_t2_cp2_ParamLimits

0x9f6b,	// (0x0004d0e5) list_single_heading_pane_t2_cp2

0x9eb3,	// (0x0004d02d) list_double_graphic_pane_g1_cp2_ParamLimits

0x9eb3,	// (0x0004d02d) list_double_graphic_pane_g1_cp2

0x9ebf,	// (0x0004d039) list_double_graphic_pane_g2_cp2_ParamLimits

0x9ebf,	// (0x0004d039) list_double_graphic_pane_g2_cp2

0x9ece,	// (0x0004d048) list_double_graphic_pane_g3_cp2

0x9ed6,	// (0x0004d050) list_double_graphic_pane_t1_cp2_ParamLimits

0x9ed6,	// (0x0004d050) list_double_graphic_pane_t1_cp2

0x9eec,	// (0x0004d066) list_double_graphic_pane_t2_cp2_ParamLimits

0x9eec,	// (0x0004d066) list_double_graphic_pane_t2_cp2

0x10cc,	// (0x00044246) list_double_number_pane_g1_cp2_ParamLimits

0x10cc,	// (0x00044246) list_double_number_pane_g1_cp2

0x10d8,	// (0x00044252) list_double_number_pane_g2_cp2

0x9e77,	// (0x0004cff1) list_double_number_pane_t1_cp2_ParamLimits

0x9e77,	// (0x0004cff1) list_double_number_pane_t1_cp2

0x9e8b,	// (0x0004d005) list_double_number_pane_t2_cp2_ParamLimits

0x9e8b,	// (0x0004d005) list_double_number_pane_t2_cp2

0x9ea1,	// (0x0004d01b) list_double_number_pane_t3_cp2_ParamLimits

0x9ea1,	// (0x0004d01b) list_double_number_pane_t3_cp2

0x9d60,	// (0x0004ceda) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d60,	// (0x0004ceda) list_single_graphic_pane_g1_cp2

0x1118,	// (0x00044292) list_single_graphic_pane_g2_cp2_ParamLimits

0x1118,	// (0x00044292) list_single_graphic_pane_g2_cp2

0x1124,	// (0x0004429e) list_single_graphic_pane_g3_cp2

0x9d36,	// (0x0004ceb0) list_single_graphic_pane_t1_cp2_ParamLimits

0x9d36,	// (0x0004ceb0) list_single_graphic_pane_t1_cp2

0x1118,	// (0x00044292) list_single_number_pane_g1_cp2_ParamLimits

0x1118,	// (0x00044292) list_single_number_pane_g1_cp2

0x1124,	// (0x0004429e) list_single_number_pane_g2_cp2

0x9d36,	// (0x0004ceb0) list_single_number_pane_t1_cp2_ParamLimits

0x9d36,	// (0x0004ceb0) list_single_number_pane_t1_cp2

0x9d4c,	// (0x0004cec6) list_single_number_pane_t2_cp2_ParamLimits

0x9d4c,	// (0x0004cec6) list_single_number_pane_t2_cp2

0x6b4d,	// (0x00049cc7) list_double2_pane_g1_cp2_ParamLimits

0x6b4d,	// (0x00049cc7) list_double2_pane_g1_cp2

0x0f81,	// (0x000440fb) list_double2_pane_g2_cp2

0x10a4,	// (0x0004421e) list_double2_pane_t1_cp2_ParamLimits

0x10a4,	// (0x0004421e) list_double2_pane_t1_cp2

0x10ba,	// (0x00044234) list_double2_pane_t2_cp2_ParamLimits

0x10ba,	// (0x00044234) list_double2_pane_t2_cp2

0x10cc,	// (0x00044246) list_double_pane_g1_cp2_ParamLimits

0x10cc,	// (0x00044246) list_double_pane_g1_cp2

0x10d8,	// (0x00044252) list_double_pane_g2_cp2

0x10e0,	// (0x0004425a) list_double_pane_t1_cp2_ParamLimits

0x10e0,	// (0x0004425a) list_double_pane_t1_cp2

0x10f6,	// (0x00044270) list_double_pane_t2_cp2_ParamLimits

0x10f6,	// (0x00044270) list_double_pane_t2_cp2

0x1108,	// (0x00044282) list_single_pane_cp2_g3

0x1118,	// (0x00044292) list_single_pane_g1_cp2_ParamLimits

0x1118,	// (0x00044292) list_single_pane_g1_cp2

0x1124,	// (0x0004429e) list_single_pane_g2_cp2

0x112c,	// (0x000442a6) list_single_pane_t1_cp2_ParamLimits

0x112c,	// (0x000442a6) list_single_pane_t1_cp2

0x6bc0,	// (0x00049d3a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6bc0,	// (0x00049d3a) list_single_large_graphic_pane_g1_cp2

0x1144,	// (0x000442be) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1144,	// (0x000442be) list_single_large_graphic_pane_g2_cp2

0x1150,	// (0x000442ca) list_single_large_graphic_pane_g3_cp2

0x1158,	// (0x000442d2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1158,	// (0x000442d2) list_single_large_graphic_pane_g4_cp1

0x1172,	// (0x000442ec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1172,	// (0x000442ec) list_single_large_graphic_pane_t1_cp2

0x9d00,	// (0x0004ce7a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d00,	// (0x0004ce7a) list_single_graphic_heading_pane_g1_cp2

0x9ccd,	// (0x0004ce47) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9ccd,	// (0x0004ce47) list_single_graphic_heading_pane_g4_cp2

0x1124,	// (0x0004429e) list_single_graphic_heading_pane_g5_cp2

0x9d0c,	// (0x0004ce86) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9d0c,	// (0x0004ce86) list_single_graphic_heading_pane_t1_cp2

0x9d22,	// (0x0004ce9c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9d22,	// (0x0004ce9c) list_single_graphic_heading_pane_t2_cp2

0x9cc1,	// (0x0004ce3b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9cc1,	// (0x0004ce3b) list_single_2graphic_pane_g1_cp2

0x9ccd,	// (0x0004ce47) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9ccd,	// (0x0004ce47) list_single_2graphic_pane_g2_cp2

0x1124,	// (0x0004429e) list_single_2graphic_pane_g3_cp2

0x9cde,	// (0x0004ce58) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9cde,	// (0x0004ce58) list_single_2graphic_pane_g4_cp2

0x9cea,	// (0x0004ce64) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9cea,	// (0x0004ce64) list_single_2graphic_pane_t1_cp2

0xe23e,	// (0x000513b8) list_highlight_pane_g10_cp1

0x9899,	// (0x0004ca13) list_highlight_pane_g1_cp1

0x98a1,	// (0x0004ca1b) list_highlight_pane_g2_cp1

0x98a9,	// (0x0004ca23) list_highlight_pane_g3_cp1

0x98b1,	// (0x0004ca2b) list_highlight_pane_g4_cp1

0x98b9,	// (0x0004ca33) list_highlight_pane_g5_cp1

0x98c1,	// (0x0004ca3b) list_highlight_pane_g6_cp1

0x98c9,	// (0x0004ca43) list_highlight_pane_g7_cp1

0x98d1,	// (0x0004ca4b) list_highlight_pane_g8_cp1

0x98d9,	// (0x0004ca53) list_highlight_pane_g9_cp1

0x97b9,	// (0x0004c933) form_field_slider_pane_t3

0x97c7,	// (0x0004c941) form_field_slider_pane_t4

0x97d5,	// (0x0004c94f) slider_form_pane_ParamLimits

0x97d5,	// (0x0004c94f) slider_form_pane

0xe248,	// (0x000513c2) control_abbreviations

0xe248,	// (0x000513c2) control_conventions

0xe248,	// (0x000513c2) control_definitions

0xe248,	// (0x000513c2) format_table_attribute

0x9fc1,	// (0x0004d13b) bg_popup_preview_window_pane_g9

0xe248,	// (0x000513c2) format_table_data2

0xe248,	// (0x000513c2) format_table_data3

0xe248,	// (0x000513c2) format_table_data_example

0x0008,

0xe248,	// (0x000513c2) intro_purpose

0xf8f4,	// (0x00052a6e) bg_popup_preview_window_pane_g

0xe248,	// (0x000513c2) texts_category

0xe248,	// (0x000513c2) texts_graphics

0x1188,	// (0x00044302) text_digital

0x1197,	// (0x00044311) text_primary

0x11a6,	// (0x00044320) text_primary_small

0x11b5,	// (0x0004432f) text_secondary

0x11c4,	// (0x0004433e) text_title

0xa755,	// (0x0004d8cf) bg_passive_tab_pane_g1_cp3_srt

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp3_srt

0xa75e,	// (0x0004d8d8) bg_passive_tab_pane_g3_cp3_srt

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp3_srt_ParamLimits

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp3_srt

0xa767,	// (0x0004d8e1) tabs_4_active_pane_srt_g1

0xa76f,	// (0x0004d8e9) tabs_4_active_pane_srt_t1_ParamLimits

0xa76f,	// (0x0004d8e9) tabs_4_active_pane_srt_t1

0xa755,	// (0x0004d8cf) bg_active_tab_pane_g1_cp3_copy1

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp3_copy1

0xa75e,	// (0x0004d8d8) bg_active_tab_pane_g3_cp3_copy1

0xe2a2,	// (0x0005141c) tabs_2_long_active_pane_srt_ParamLimits

0xe2a2,	// (0x0005141c) tabs_2_long_active_pane_srt

0xe2a2,	// (0x0005141c) tabs_2_long_passive_pane_srt_ParamLimits

0xe2a2,	// (0x0005141c) tabs_2_long_passive_pane_srt

0x6518,	// (0x00049692) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6518,	// (0x00049692) bg_passive_tab_pane_cp4_srt

0xa3fd,	// (0x0004d577) bg_passive_tab_pane_g1_cp4_srt

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp4_srt

0xa406,	// (0x0004d580) bg_passive_tab_pane_g3_cp4_srt

0x1872,	// (0x000449ec) bg_active_tab_pane_cp4_srt_ParamLimits

0x1872,	// (0x000449ec) bg_active_tab_pane_cp4_srt

0xa40f,	// (0x0004d589) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa40f,	// (0x0004d589) tabs_2_long_active_pane_srt_t1

0xa3fd,	// (0x0004d577) bg_active_tab_pane_g1_cp4_srt

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp4_srt

0xa406,	// (0x0004d580) bg_active_tab_pane_g3_cp4_srt

0xe3d5,	// (0x0005154f) tabs_3_long_active_pane_srt_ParamLimits

0xe3d5,	// (0x0005154f) tabs_3_long_active_pane_srt

0xe3d5,	// (0x0005154f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe3d5,	// (0x0005154f) tabs_3_long_passive_pane_cp_srt

0xe3d5,	// (0x0005154f) tabs_3_long_passive_pane_srt_ParamLimits

0xe3d5,	// (0x0005154f) tabs_3_long_passive_pane_srt

0x6518,	// (0x00049692) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6518,	// (0x00049692) bg_passive_tab_pane_cp5_srt

0x0f78,	// (0x000440f2) bg_passive_tab_pane_g1_cp5_srt

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp5_srt

0x0f6f,	// (0x000440e9) bg_passive_tab_pane_g3_cp5_srt

0x1872,	// (0x000449ec) bg_active_tab_pane_cp5_srt_ParamLimits

0x1872,	// (0x000449ec) bg_active_tab_pane_cp5_srt

0xa3eb,	// (0x0004d565) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa3eb,	// (0x0004d565) tabs_3_long_active_pane_srt_t1

0x0f78,	// (0x000440f2) bg_active_tab_pane_g1_cp5_srt

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp5_srt

0x0f6f,	// (0x000440e9) bg_active_tab_pane_g3_cp5_srt

0xa3dd,	// (0x0004d557) navi_text_pane_srt_t1

0xa3d5,	// (0x0004d54f) navi_icon_pane_srt_g1

0x433f,	// (0x000474b9) midp_editing_number_pane_srt

0x11d3,	// (0x0004434d) midp_ticker_pane_srt

0x4347,	// (0x000474c1) midp_ticker_pane_srt_g1

0x434f,	// (0x000474c9) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x000528f1) midp_ticker_pane_srt_g

0x4357,	// (0x000474d1) midp_ticker_pane_srt_t1

0xa3c6,	// (0x0004d540) midp_editing_number_pane_t1_copy1

0x6518,	// (0x00049692) listscroll_midp_pane

0x6518,	// (0x00049692) midp_form_pane

0x41a3,	// (0x0004731d) midp_info_popup_window_ParamLimits

0x41a3,	// (0x0004731d) midp_info_popup_window

0x092e,	// (0x00043aa8) bg_popup_sub_pane_cp50_ParamLimits

0x092e,	// (0x00043aa8) bg_popup_sub_pane_cp50

0x94cf,	// (0x0004c649) listscroll_midp_info_pane_ParamLimits

0x94cf,	// (0x0004c649) listscroll_midp_info_pane

0x94b7,	// (0x0004c631) listscroll_form_midp_pane_ParamLimits

0x94b7,	// (0x0004c631) listscroll_form_midp_pane

0x94c3,	// (0x0004c63d) scroll_bar_cp050

0x9497,	// (0x0004c611) list_midp_pane

0xb1ea,	// (0x0004e364) signal_pane_g2_cp

0x93d1,	// (0x0004c54b) listscroll_midp_info_pane_t1_ParamLimits

0x93d1,	// (0x0004c54b) listscroll_midp_info_pane_t1

0x93e9,	// (0x0004c563) listscroll_midp_info_pane_t2_ParamLimits

0x93e9,	// (0x0004c563) listscroll_midp_info_pane_t2

0x9427,	// (0x0004c5a1) listscroll_midp_info_pane_t3_ParamLimits

0x9427,	// (0x0004c5a1) listscroll_midp_info_pane_t3

0x9461,	// (0x0004c5db) listscroll_midp_info_pane_t4_ParamLimits

0x9461,	// (0x0004c5db) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x000529a9) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x000529a9) listscroll_midp_info_pane_t

0x09ae,	// (0x00043b28) scroll_pane_cp21

0x936b,	// (0x0004c4e5) form_midp_field_choice_group_pane

0x9374,	// (0x0004c4ee) form_midp_field_text_pane

0x93b7,	// (0x0004c531) form_midp_field_time_pane

0x93bf,	// (0x0004c539) form_midp_gauge_slider_pane

0x93c8,	// (0x0004c542) form_midp_gauge_wait_pane

0xe248,	// (0x000513c2) form_midp_image_pane

0x564f,	// (0x000487c9) list_single_midp_pane_ParamLimits

0x564f,	// (0x000487c9) list_single_midp_pane

0x932f,	// (0x0004c4a9) form_midp_field_text_pane_t1

0x911b,	// (0x0004c295) input_focus_pane_cp050

0x935a,	// (0x0004c4d4) list_midp_form_text_pane

0x92fe,	// (0x0004c478) form_midp_field_choice_group_pane_t1

0x930c,	// (0x0004c486) input_focus_pane_cp051

0x9320,	// (0x0004c49a) list_midp_choice_pane

0xe248,	// (0x000513c2) status_idle_pane

0x92e2,	// (0x0004c45c) form_midp_field_time_pane_t1

0xe23e,	// (0x000513b8) wait_anim_pane_g2_copy1

0x92f0,	// (0x0004c46a) form_midp_field_time_pane_t2

0x0001,

0x41fe,	// (0x00047378) aid_navinavi_width_2_pane

0xf82a,	// (0x000529a4) form_midp_field_time_pane_t

0xe248,	// (0x000513c2) input_focus_pane_cp052

0xe248,	// (0x000513c2) bg_input_focus_pane_cp040

0x92a2,	// (0x0004c41c) form_midp_gauge_slider_pane_t1

0x92b0,	// (0x0004c42a) form_midp_gauge_slider_pane_t2

0x92be,	// (0x0004c438) form_midp_gauge_slider_pane_t3

0x92cc,	// (0x0004c446) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0005299b) form_midp_gauge_slider_pane_t

0x92da,	// (0x0004c454) form_midp_slider_pane

0xe2a2,	// (0x0005141c) bg_input_focus_pane_cp041_ParamLimits

0xe2a2,	// (0x0005141c) bg_input_focus_pane_cp041

0x926f,	// (0x0004c3e9) form_midp_gauge_wait_pane_t1_ParamLimits

0x926f,	// (0x0004c3e9) form_midp_gauge_wait_pane_t1

0x9281,	// (0x0004c3fb) form_midp_gauge_wait_pane_t2_ParamLimits

0x9281,	// (0x0004c3fb) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00052996) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00052996) form_midp_gauge_wait_pane_t

0x9293,	// (0x0004c40d) form_midp_wait_pane_ParamLimits

0x9293,	// (0x0004c40d) form_midp_wait_pane

0x9237,	// (0x0004c3b1) form_midp_image_pane_g1

0x9240,	// (0x0004c3ba) form_midp_image_pane_t1

0x924f,	// (0x0004c3c9) form_midp_image_pane_t2

0x925e,	// (0x0004c3d8) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0005298f) form_midp_image_pane_t

0x922e,	// (0x0004c3a8) list_single_midp_pane_g1

0x5640,	// (0x000487ba) list_single_midp_pane_t1

0x9214,	// (0x0004c38e) list_midp_form_item_pane_ParamLimits

0x9214,	// (0x0004c38e) list_midp_form_item_pane

0x41b8,	// (0x00047332) list_midp_form_item_pane_t1

0x41c7,	// (0x00047341) midp_ticker_pane_g1

0x41d3,	// (0x0004734d) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x000528d7) midp_ticker_pane_g

0x6c73,	// (0x00049ded) midp_ticker_pane_t1

0xa639,	// (0x0004d7b3) midp_editing_number_pane_t1

0xa617,	// (0x0004d791) midp_editing_number_pane

0xa626,	// (0x0004d7a0) midp_ticker_pane

0xa3b6,	// (0x0004d530) ai_message_heading_pane

0xe248,	// (0x000513c2) bg_popup_window_pane_cp14

0xa3be,	// (0x0004d538) listscroll_ai_message_pane

0xa33c,	// (0x0004d4b6) ai_message_heading_pane_g1_ParamLimits

0xa33c,	// (0x0004d4b6) ai_message_heading_pane_g1

0xa348,	// (0x0004d4c2) ai_message_heading_pane_g2_ParamLimits

0xa348,	// (0x0004d4c2) ai_message_heading_pane_g2

0xa356,	// (0x0004d4d0) ai_message_heading_pane_g3_ParamLimits

0xa356,	// (0x0004d4d0) ai_message_heading_pane_g3

0xa362,	// (0x0004d4dc) ai_message_heading_pane_g4_ParamLimits

0xa362,	// (0x0004d4dc) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00052ad0) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00052ad0) ai_message_heading_pane_g

0xa36e,	// (0x0004d4e8) ai_message_heading_pane_t1_ParamLimits

0xa36e,	// (0x0004d4e8) ai_message_heading_pane_t1

0xa388,	// (0x0004d502) ai_message_heading_pane_t2_ParamLimits

0xa388,	// (0x0004d502) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00052ad9) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00052ad9) ai_message_heading_pane_t

0xa39c,	// (0x0004d516) bg_popup_heading_pane_cp1_ParamLimits

0xa39c,	// (0x0004d516) bg_popup_heading_pane_cp1

0xa32a,	// (0x0004d4a4) list_ai_message_pane_ParamLimits

0xa32a,	// (0x0004d4a4) list_ai_message_pane

0x09ae,	// (0x00043b28) scroll_pane_cp10

0xa2c6,	// (0x0004d440) list_ai_message_pane_g1

0xa2ce,	// (0x0004d448) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00052aad) list_ai_message_pane_g

0xa2d6,	// (0x0004d450) list_ai_message_pane_t1_ParamLimits

0xa2d6,	// (0x0004d450) list_ai_message_pane_t1

0xa2eb,	// (0x0004d465) list_ai_message_pane_t2_ParamLimits

0xa2eb,	// (0x0004d465) list_ai_message_pane_t2

0xa300,	// (0x0004d47a) list_ai_message_pane_t3_ParamLimits

0xa300,	// (0x0004d47a) list_ai_message_pane_t3

0xa315,	// (0x0004d48f) list_ai_message_pane_t4_ParamLimits

0xa315,	// (0x0004d48f) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00052ab2) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00052ab2) list_ai_message_pane_t

0xa2af,	// (0x0004d429) cell_ai_soft_ind_pane_ParamLimits

0xa2af,	// (0x0004d429) cell_ai_soft_ind_pane

0x41df,	// (0x00047359) cell_ai_soft_ind_pane_g1_ParamLimits

0x41df,	// (0x00047359) cell_ai_soft_ind_pane_g1

0xe248,	// (0x000513c2) grid_highlight_cp1

0x41ec,	// (0x00047366) text_secondary_cp56_ParamLimits

0x41ec,	// (0x00047366) text_secondary_cp56

0xa284,	// (0x0004d3fe) example_general_pane_ParamLimits

0xa284,	// (0x0004d3fe) example_general_pane

0xa290,	// (0x0004d40a) example_parent_pane_g1_ParamLimits

0xa290,	// (0x0004d40a) example_parent_pane_g1

0xa29c,	// (0x0004d416) example_parent_pane_t1_ParamLimits

0xa29c,	// (0x0004d416) example_parent_pane_t1

0x892d,	// (0x0004baa7) popup_preview_text_window_ParamLimits

0x892d,	// (0x0004baa7) popup_preview_text_window

0x1110,	// (0x0004428a) list_single_pane_cp2_g4

0xe48b,	// (0x00051605) bg_popup_preview_window_pane_ParamLimits

0xe48b,	// (0x00051605) bg_popup_preview_window_pane

0x9fcb,	// (0x0004d145) popup_preview_text_window_t1_ParamLimits

0x9fcb,	// (0x0004d145) popup_preview_text_window_t1

0x9fe9,	// (0x0004d163) popup_preview_text_window_t2_ParamLimits

0x9fe9,	// (0x0004d163) popup_preview_text_window_t2

0xa032,	// (0x0004d1ac) popup_preview_text_window_t3_ParamLimits

0xa032,	// (0x0004d1ac) popup_preview_text_window_t3

0xa077,	// (0x0004d1f1) popup_preview_text_window_t4_ParamLimits

0xa077,	// (0x0004d1f1) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00052a81) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00052a81) popup_preview_text_window_t

0xa0f5,	// (0x0004d26f) scroll_pane_cp11

0x90a7,	// (0x0004c221) bg_popup_preview_window_pane_g1

0x9f7f,	// (0x0004d0f9) bg_popup_preview_window_pane_g2

0x9f89,	// (0x0004d103) bg_popup_preview_window_pane_g3

0x9f93,	// (0x0004d10d) bg_popup_preview_window_pane_g4

0x9f9d,	// (0x0004d117) bg_popup_preview_window_pane_g5

0x9fa7,	// (0x0004d121) bg_popup_preview_window_pane_g6

0x9faf,	// (0x0004d129) bg_popup_preview_window_pane_g7

0x9fb7,	// (0x0004d131) bg_popup_preview_window_pane_g8

0x5c70,	// (0x00048dea) aid_popup_width_pane

0x8909,	// (0x0004ba83) popup_midp_note_alarm_window_ParamLimits

0x8909,	// (0x0004ba83) popup_midp_note_alarm_window

0x0876,	// (0x000439f0) data_form_pane_ParamLimits

0x52fd,	// (0x00048477) form_field_data_pane_g1

0x5307,	// (0x00048481) form_field_data_pane_t1_ParamLimits

0x0882,	// (0x000439fc) input_focus_pane_ParamLimits

0x5321,	// (0x0004849b) data_form_wide_pane_ParamLimits

0x5332,	// (0x000484ac) form_field_data_wide_pane_g1

0x533e,	// (0x000484b8) form_field_data_wide_pane_t1_ParamLimits

0xe640,	// (0x000517ba) input_focus_pane_cp6_ParamLimits

0x64dd,	// (0x00049657) input_popup_find_pane_g1_ParamLimits

0x64dd,	// (0x00049657) input_popup_find_pane_g1

0x6636,	// (0x000497b0) aid_navi_side_left_pane

0x664b,	// (0x000497c5) aid_navi_side_right_pane

0x9994,	// (0x0004cb0e) bg_popup_window_pane_cp30_ParamLimits

0x9994,	// (0x0004cb0e) bg_popup_window_pane_cp30

0x9a0e,	// (0x0004cb88) popup_midp_note_alarm_window_g1_ParamLimits

0x9a0e,	// (0x0004cb88) popup_midp_note_alarm_window_g1

0x9a3e,	// (0x0004cbb8) popup_midp_note_alarm_window_t1_ParamLimits

0x9a3e,	// (0x0004cbb8) popup_midp_note_alarm_window_t1

0x9adf,	// (0x0004cc59) popup_midp_note_alarm_window_t2_ParamLimits

0x9adf,	// (0x0004cc59) popup_midp_note_alarm_window_t2

0x9b8d,	// (0x0004cd07) popup_midp_note_alarm_window_t3_ParamLimits

0x9b8d,	// (0x0004cd07) popup_midp_note_alarm_window_t3

0x9bbf,	// (0x0004cd39) popup_midp_note_alarm_window_t4_ParamLimits

0x9bbf,	// (0x0004cd39) popup_midp_note_alarm_window_t4

0x9be5,	// (0x0004cd5f) popup_midp_note_alarm_window_t5_ParamLimits

0x9be5,	// (0x0004cd5f) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00052a1e) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00052a1e) popup_midp_note_alarm_window_t

0x9c91,	// (0x0004ce0b) wait_bar_pane_cp1_ParamLimits

0x9c91,	// (0x0004ce0b) wait_bar_pane_cp1

0xe248,	// (0x000513c2) wait_anim_pane_copy1

0xe248,	// (0x000513c2) wait_border_pane_copy1

0x9679,	// (0x0004c7f3) wait_border_pane_g1_copy1

0x5358,	// (0x000484d2) form_field_popup_pane_g1

0x5360,	// (0x000484da) form_field_popup_pane_t1_ParamLimits

0x0882,	// (0x000439fc) input_focus_pane_cp7_ParamLimits

0x08b0,	// (0x00043a2a) list_form_pane_ParamLimits

0x537a,	// (0x000484f4) form_field_popup_wide_pane_g1

0x5382,	// (0x000484fc) form_field_popup_wide_pane_t1_ParamLimits

0x0882,	// (0x000439fc) input_focus_pane_cp8_ParamLimits

0x08bc,	// (0x00043a36) list_form_wide_pane_ParamLimits

0xa7e2,	// (0x0004d95c) aid_size_cell_graphic_pane

0x540e,	// (0x00048588) data_form_pane_t1_ParamLimits

0x5696,	// (0x00048810) data_form_wide_pane_t1_ParamLimits

0x8c54,	// (0x0004bdce) bg_status_flat_pane

0x6081,	// (0x000491fb) title_pane_t1_ParamLimits

0xe26a,	// (0x000513e4) title_pane_t2_ParamLimits

0xe290,	// (0x0005140a) title_pane_t3_ParamLimits

0xf557,	// (0x000526d1) title_pane_t_ParamLimits

0x6783,	// (0x000498fd) level_1_signal_ParamLimits

0x6790,	// (0x0004990a) level_2_signal_ParamLimits

0x679d,	// (0x00049917) level_3_signal_ParamLimits

0x67aa,	// (0x00049924) level_4_signal_ParamLimits

0x67b7,	// (0x00049931) level_5_signal_ParamLimits

0x67c4,	// (0x0004993e) level_6_signal_ParamLimits

0x67d1,	// (0x0004994b) level_7_signal_ParamLimits

0x6783,	// (0x000498fd) level_1_battery_ParamLimits

0x6790,	// (0x0004990a) level_2_battery_ParamLimits

0x679d,	// (0x00049917) level_3_battery_ParamLimits

0x67aa,	// (0x00049924) level_4_battery_ParamLimits

0x67b7,	// (0x00049931) level_5_battery_ParamLimits

0x67c4,	// (0x0004993e) level_6_battery_ParamLimits

0x67d1,	// (0x0004994b) level_7_battery_ParamLimits

0x9899,	// (0x0004ca13) bg_status_flat_pane_g1

0x98a1,	// (0x0004ca1b) bg_status_flat_pane_g2

0x98a9,	// (0x0004ca23) bg_status_flat_pane_g3

0x98b1,	// (0x0004ca2b) bg_status_flat_pane_g4

0x98b9,	// (0x0004ca33) bg_status_flat_pane_g5

0x98c1,	// (0x0004ca3b) bg_status_flat_pane_g6

0x98c9,	// (0x0004ca43) bg_status_flat_pane_g7

0x60f1,	// (0x0004926b) tabs_3_active_pane_t1_ParamLimits

0x60f1,	// (0x0004926b) tabs_3_passive_pane_t1_ParamLimits

0x610b,	// (0x00049285) tabs_4_active_pane_t1_ParamLimits

0x610b,	// (0x00049285) tabs_4_1_passive_pane_t1_ParamLimits

0x64f3,	// (0x0004966d) tabs_2_active_pane_t1_ParamLimits

0x64f3,	// (0x0004966d) tabs_2_passive_pane_t1_ParamLimits

0x1872,	// (0x000449ec) bg_active_tab_pane_cp4_ParamLimits

0x6505,	// (0x0004967f) tabs_2_long_active_pane_t1_ParamLimits

0x6518,	// (0x00049692) bg_passive_tab_pane_cp4_ParamLimits

0x73ff,	// (0x0004a579) list_single_midp_graphic_pane_t1_ParamLimits

0x1872,	// (0x000449ec) bg_active_tab_pane_cp5_ParamLimits

0x6524,	// (0x0004969e) tabs_3_long_active_pane_t1_ParamLimits

0x6518,	// (0x00049692) bg_passive_tab_pane_cp5_ParamLimits

0x73ff,	// (0x0004a579) list_single_midp_graphic_pane_t1

0x8c54,	// (0x0004bdce) bg_status_flat_pane_ParamLimits

0x8d1f,	// (0x0004be99) indicator_pane_cp2_ParamLimits

0x8d1f,	// (0x0004be99) indicator_pane_cp2

0x8e62,	// (0x0004bfdc) navi_pane_srt_ParamLimits

0x8e62,	// (0x0004bfdc) navi_pane_srt

0x8e86,	// (0x0004c000) popup_clock_digital_analogue_window_cp1

0xe2e6,	// (0x00051460) indicator_pane_t1

0x11d3,	// (0x0004434d) copy_highlight_pane

0x11d3,	// (0x0004434d) cursor_graphics_pane

0x11d3,	// (0x0004434d) graphic_within_text_pane

0x11d3,	// (0x0004434d) link_highlight_pane

0xa0b8,	// (0x0004d232) popup_preview_text_window_t5_ParamLimits

0xa0b8,	// (0x0004d232) popup_preview_text_window_t5

0x4208,	// (0x00047382) cursor_digital_pane

0x4208,	// (0x00047382) cursor_primary_pane

0x4219,	// (0x00047393) cursor_primary_small_pane

0x4221,	// (0x0004739b) cursor_secondary_pane

0x4229,	// (0x000473a3) cursor_title_pane

0x4208,	// (0x00047382) link_highlight_digital_pane

0x4210,	// (0x0004738a) link_highlight_primary_pane

0x4219,	// (0x00047393) link_highlight_primary_small_pane

0x4221,	// (0x0004739b) link_highlight_secondary_pane

0x4229,	// (0x000473a3) link_highlight_title_pane

0x4208,	// (0x00047382) copy_highlight_digital_pane

0x4208,	// (0x00047382) copy_highlight_primary_pane

0x4219,	// (0x00047393) copy_highlight_primary_small_pane

0x4221,	// (0x0004739b) copy_highlight_secondary_pane

0x4229,	// (0x000473a3) copy_highlight_title_pane

0x4221,	// (0x0004739b) graphic_text_digital_pane

0x9937,	// (0x0004cab1) graphic_text_primary_pane

0x9940,	// (0x0004caba) graphic_text_primary_small_pane

0x4219,	// (0x00047393) graphic_text_secondary_pane

0x4208,	// (0x00047382) graphic_text_title_pane

0x6c85,	// (0x00049dff) cursor_primary_pane_g1

0x9929,	// (0x0004caa3) cursor_text_primary_t1

0x9911,	// (0x0004ca8b) cursor_primary_small_pane_g1

0x991b,	// (0x0004ca95) cursor_text_primary_small_t1

0x98f9,	// (0x0004ca73) cursor_primary_small_pane_g1_copy1

0x9903,	// (0x0004ca7d) cursor_text_primary_small_t1_copy1

0x98e1,	// (0x0004ca5b) cursor_text_title_t1

0x98ef,	// (0x0004ca69) cursor_title_pane_g1

0x6c85,	// (0x00049dff) cursor_digital_pane_g1

0x4231,	// (0x000473ab) cursor_text_digital_t1

0x423f,	// (0x000473b9) link_highlight_primary_pane_g1

0x988a,	// (0x0004ca04) link_highlight_primary_pane_t1

0x423f,	// (0x000473b9) link_highlight_primary_small_pane_g1

0x4247,	// (0x000473c1) link_highlight_primary_small_pane_t1

0x4256,	// (0x000473d0) link_highlight_secondary_pane_g1

0x425e,	// (0x000473d8) link_highlight_secondary_pane_t1

0x97fe,	// (0x0004c978) link_highlight_title_pane_g1

0x9806,	// (0x0004c980) link_highlight_title_pane_t1

0x97e7,	// (0x0004c961) link_highlight_digital_pane_g1

0x97ef,	// (0x0004c969) link_highlight_digital_pane_t1

0x96af,	// (0x0004c829) copy_highlight_primary_pane_g1

0x96c6,	// (0x0004c840) copy_highlight_primary_pane_t1

0x96af,	// (0x0004c829) copy_highlight_primary_small_pane_g1

0x96b7,	// (0x0004c831) copy_highlight_primary_small_pane_t1

0x426d,	// (0x000473e7) copy_highlight_secondary_pane_g1

0x4275,	// (0x000473ef) copy_highlight_secondary_pane_t1

0x9698,	// (0x0004c812) copy_highlight_title_pane_g1

0x96a0,	// (0x0004c81a) copy_highlight_title_pane_t1

0x96af,	// (0x0004c829) copy_highlight_digital_pane_g1

0xa9b2,	// (0x0004db2c) copy_highlight_digital_pane_t1

0xa906,	// (0x0004da80) graphic_text_primary_pane_g1

0xa996,	// (0x0004db10) graphic_text_primary_pane_t1

0xa9a4,	// (0x0004db1e) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00052b4d) graphic_text_primary_pane_t

0xa972,	// (0x0004daec) graphic_text_primary_small_pane_g1

0xa97a,	// (0x0004daf4) graphic_text_primary_small_pane_t1

0xa988,	// (0x0004db02) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00052b48) graphic_text_primary_small_pane_t

0xa94e,	// (0x0004dac8) graphic_text_secondary_pane_g1

0xa956,	// (0x0004dad0) graphic_text_secondary_pane_t1

0xa964,	// (0x0004dade) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00052b43) graphic_text_secondary_pane_t

0xa92a,	// (0x0004daa4) graphic_text_title_pane_g1

0xa932,	// (0x0004daac) graphic_text_title_pane_t1

0xa940,	// (0x0004daba) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00052b3e) graphic_text_title_pane_t

0xa906,	// (0x0004da80) graphic_text_digital_pane_g1

0xa90e,	// (0x0004da88) graphic_text_digital_pane_t1

0xa91c,	// (0x0004da96) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00052b39) graphic_text_digital_pane_t

0xe2a2,	// (0x0005141c) navi_icon_pane_srt_ParamLimits

0xe2a2,	// (0x0005141c) navi_icon_pane_srt

0xe248,	// (0x000513c2) navi_midp_pane_srt

0xe248,	// (0x000513c2) navi_navi_pane_srt

0xe2a2,	// (0x0005141c) navi_text_pane_srt_ParamLimits

0xe2a2,	// (0x0005141c) navi_text_pane_srt

0xa8d1,	// (0x0004da4b) navi_navi_icon_text_pane_srt

0xa8d9,	// (0x0004da53) navi_navi_pane_srt_g1_ParamLimits

0xa8d9,	// (0x0004da53) navi_navi_pane_srt_g1

0xa8eb,	// (0x0004da65) navi_navi_pane_srt_g2_ParamLimits

0xa8eb,	// (0x0004da65) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00052b34) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00052b34) navi_navi_pane_srt_g

0xa8fd,	// (0x0004da77) navi_navi_tabs_pane_srt

0xa8d1,	// (0x0004da4b) navi_navi_text_pane_srt

0xa8d1,	// (0x0004da4b) navi_navi_volume_pane_srt

0xa8c2,	// (0x0004da3c) navi_navi_text_pane_srt_t1

0x77f3,	// (0x0004a96d) navi_navi_volume_pane_srt_g1

0x77fb,	// (0x0004a975) volume_small_pane_srt_ParamLimits

0x77fb,	// (0x0004a975) volume_small_pane_srt

0x6c8f,	// (0x00049e09) volume_small_pane_srt_g1_ParamLimits

0x6c8f,	// (0x00049e09) volume_small_pane_srt_g1

0x6c9f,	// (0x00049e19) volume_small_pane_srt_g2_ParamLimits

0x6c9f,	// (0x00049e19) volume_small_pane_srt_g2

0x6cb0,	// (0x00049e2a) volume_small_pane_srt_g3_ParamLimits

0x6cb0,	// (0x00049e2a) volume_small_pane_srt_g3

0x6cc1,	// (0x00049e3b) volume_small_pane_srt_g4_ParamLimits

0x6cc1,	// (0x00049e3b) volume_small_pane_srt_g4

0x6cd2,	// (0x00049e4c) volume_small_pane_srt_g5_ParamLimits

0x6cd2,	// (0x00049e4c) volume_small_pane_srt_g5

0x6ce3,	// (0x00049e5d) volume_small_pane_srt_g6_ParamLimits

0x6ce3,	// (0x00049e5d) volume_small_pane_srt_g6

0x6cf4,	// (0x00049e6e) volume_small_pane_srt_g7_ParamLimits

0x6cf4,	// (0x00049e6e) volume_small_pane_srt_g7

0x6d05,	// (0x00049e7f) volume_small_pane_srt_g8_ParamLimits

0x6d05,	// (0x00049e7f) volume_small_pane_srt_g8

0x6d16,	// (0x00049e90) volume_small_pane_srt_g9_ParamLimits

0x6d16,	// (0x00049e90) volume_small_pane_srt_g9

0x6d27,	// (0x00049ea1) volume_small_pane_srt_g10_ParamLimits

0x6d27,	// (0x00049ea1) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x000528dc) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x000528dc) volume_small_pane_srt_g

0xe540,	// (0x000516ba) query_popup_data_pane_cp2

0xa8a8,	// (0x0004da22) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa8a8,	// (0x0004da22) navi_navi_icon_text_pane_srt_t1

0x9937,	// (0x0004cab1) navi_tabs_2_long_pane_srt

0x9937,	// (0x0004cab1) navi_tabs_2_pane_srt

0x9937,	// (0x0004cab1) navi_tabs_3_long_pane_srt

0x9937,	// (0x0004cab1) navi_tabs_3_pane_srt

0x9937,	// (0x0004cab1) navi_tabs_4_pane_srt

0x77d3,	// (0x0004a94d) tabs_2_active_pane_srt_ParamLimits

0x77d3,	// (0x0004a94d) tabs_2_active_pane_srt

0x77e3,	// (0x0004a95d) tabs_2_passive_pane_srt_ParamLimits

0x77e3,	// (0x0004a95d) tabs_2_passive_pane_srt

0x6fd4,	// (0x0004a14e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6fd4,	// (0x0004a14e) bg_passive_tab_pane_cp1_srt

0xa874,	// (0x0004d9ee) bg_passive_tab_pane_g1_cp1_srt

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp1_srt

0xa87d,	// (0x0004d9f7) bg_passive_tab_pane_g3_cp1_srt

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp1_srt_ParamLimits

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp1_srt

0xa886,	// (0x0004da00) tabs_2_active_pane_srt_g1

0xa88e,	// (0x0004da08) tabs_2_active_pane_srt_t1_ParamLimits

0xa88e,	// (0x0004da08) tabs_2_active_pane_srt_t1

0xa874,	// (0x0004d9ee) bg_active_tab_pane_g1_cp1_srt

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp1_srt

0xa87d,	// (0x0004d9f7) bg_active_tab_pane_g3_cp1_srt

0x77a0,	// (0x0004a91a) tabs_3_active_pane_srt_ParamLimits

0x77a0,	// (0x0004a91a) tabs_3_active_pane_srt

0x77b1,	// (0x0004a92b) tabs_3_passive_pane_cp_srt_ParamLimits

0x77b1,	// (0x0004a92b) tabs_3_passive_pane_cp_srt

0x77c2,	// (0x0004a93c) tabs_3_passive_pane_srt_ParamLimits

0x77c2,	// (0x0004a93c) tabs_3_passive_pane_srt

0x6fd4,	// (0x0004a14e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6fd4,	// (0x0004a14e) bg_passive_tab_pane_cp2_srt

0x4336,	// (0x000474b0) bg_passive_tab_pane_g1_cp2_srt

0x0f28,	// (0x000440a2) bg_passive_tab_pane_g2_cp2_srt

0x432d,	// (0x000474a7) bg_passive_tab_pane_g3_cp2_srt

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp2_srt_ParamLimits

0xe2a2,	// (0x0005141c) bg_active_tab_pane_cp2_srt

0xa85a,	// (0x0004d9d4) tabs_3_active_pane_srt_g1

0xa862,	// (0x0004d9dc) tabs_3_active_pane_srt_t1_ParamLimits

0xa862,	// (0x0004d9dc) tabs_3_active_pane_srt_t1

0x4336,	// (0x000474b0) bg_active_tab_pane_g1_cp2_srt

0x0f28,	// (0x000440a2) bg_active_tab_pane_g2_cp2_srt

0x432d,	// (0x000474a7) bg_active_tab_pane_g3_cp2_srt

0x7758,	// (0x0004a8d2) tabs_4_active_pane_srt_ParamLimits

0x7758,	// (0x0004a8d2) tabs_4_active_pane_srt

0x776a,	// (0x0004a8e4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x776a,	// (0x0004a8e4) tabs_4_passive_pane_cp2_srt

0x6f62,	// (0x0004a0dc) aid_size_cell_toolbar

0x6518,	// (0x00049692) main_idle_act_pane_ParamLimits

0x719d,	// (0x0004a317) popup_large_graphic_colour_window_ParamLimits

0x8ad6,	// (0x0004bc50) popup_toolbar_window_ParamLimits

0x8ad6,	// (0x0004bc50) popup_toolbar_window

0xa648,	// (0x0004d7c2) list_single_graphic_2heading_pane_ParamLimits

0xa648,	// (0x0004d7c2) list_single_graphic_2heading_pane

0x0b86,	// (0x00043d00) aid_size_cell_apps_grid_lsc_pane

0x0b98,	// (0x00043d12) aid_size_cell_apps_grid_prt_pane

0x6fd4,	// (0x0004a14e) bg_wml_button_pane_cp1_ParamLimits

0x6fd4,	// (0x0004a14e) bg_wml_button_pane_cp1

0x932f,	// (0x0004c4a9) form_midp_field_text_pane_t1_ParamLimits

0x911b,	// (0x0004c295) input_focus_pane_cp050_ParamLimits

0x935a,	// (0x0004c4d4) list_midp_form_text_pane_ParamLimits

0x930c,	// (0x0004c486) input_focus_pane_cp051_ParamLimits

0x9320,	// (0x0004c49a) list_midp_choice_pane_ParamLimits

0x91d4,	// (0x0004c34e) list_single_2graphic_pane_cp3_ParamLimits

0x91d4,	// (0x0004c34e) list_single_2graphic_pane_cp3

0x91ed,	// (0x0004c367) list_single_midp_graphic_pane_ParamLimits

0x91ed,	// (0x0004c367) list_single_midp_graphic_pane

0x5518,	// (0x00048692) list_single_graphic_2heading_pane_g1_ParamLimits

0x5518,	// (0x00048692) list_single_graphic_2heading_pane_g1

0x5524,	// (0x0004869e) list_single_graphic_2heading_pane_g4_ParamLimits

0x5524,	// (0x0004869e) list_single_graphic_2heading_pane_g4

0x5530,	// (0x000486aa) list_single_graphic_2heading_pane_g5_ParamLimits

0x5530,	// (0x000486aa) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005292f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005292f) list_single_graphic_2heading_pane_g

0x553c,	// (0x000486b6) list_single_graphic_2heading_pane_t1_ParamLimits

0x553c,	// (0x000486b6) list_single_graphic_2heading_pane_t1

0x5550,	// (0x000486ca) list_single_graphic_2heading_pane_t2_ParamLimits

0x5550,	// (0x000486ca) list_single_graphic_2heading_pane_t2

0x556c,	// (0x000486e6) list_single_graphic_2heading_pane_t3_ParamLimits

0x556c,	// (0x000486e6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00052936) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00052936) list_single_graphic_2heading_pane_t

0x8fe5,	// (0x0004c15f) bg_popup_sub_pane_cp2

0x900f,	// (0x0004c189) grid_toobar_pane

0x7377,	// (0x0004a4f1) cell_toolbar_pane_ParamLimits

0x7377,	// (0x0004a4f1) cell_toolbar_pane

0x904b,	// (0x0004c1c5) cell_toolbar_pane_g1_ParamLimits

0x904b,	// (0x0004c1c5) cell_toolbar_pane_g1

0x905f,	// (0x0004c1d9) cell_toolbar_pane_g2_ParamLimits

0x905f,	// (0x0004c1d9) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00052944) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00052944) cell_toolbar_pane_g

0x9081,	// (0x0004c1fb) grid_highlight_pane_cp2_ParamLimits

0x9081,	// (0x0004c1fb) grid_highlight_pane_cp2

0x909b,	// (0x0004c215) toolbar_button_pane

0x90a7,	// (0x0004c221) toolbar_button_pane_g1

0x90af,	// (0x0004c229) toolbar_button_pane_g2

0x90b7,	// (0x0004c231) toolbar_button_pane_g3

0x90bf,	// (0x0004c239) toolbar_button_pane_g4

0x90c7,	// (0x0004c241) toolbar_button_pane_g5

0x90cf,	// (0x0004c249) toolbar_button_pane_g6

0x90d7,	// (0x0004c251) toolbar_button_pane_g7

0x90df,	// (0x0004c259) toolbar_button_pane_g8

0x90e7,	// (0x0004c261) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00052949) toolbar_button_pane_g

0x73bb,	// (0x0004a535) list_single_2graphic_pane_g1_cp3_ParamLimits

0x73bb,	// (0x0004a535) list_single_2graphic_pane_g1_cp3

0x73c7,	// (0x0004a541) list_single_2graphic_pane_g2_cp3_ParamLimits

0x73c7,	// (0x0004a541) list_single_2graphic_pane_g2_cp3

0x1039,	// (0x000441b3) list_single_2graphic_pane_g3_cp3

0x73d8,	// (0x0004a552) list_single_2graphic_pane_g4_cp3_ParamLimits

0x73d8,	// (0x0004a552) list_single_2graphic_pane_g4_cp3

0x73e4,	// (0x0004a55e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x73e4,	// (0x0004a55e) list_single_2graphic_pane_t1_cp3

0x102d,	// (0x000441a7) list_single_midp_graphic_pane_g2_ParamLimits

0x102d,	// (0x000441a7) list_single_midp_graphic_pane_g2

0x5500,	// (0x0004867a) aid_zoom_text_primary

0x5508,	// (0x00048682) aid_zoom_text_secondary

0x6d86,	// (0x00049f00) status_small_pane_g7_ParamLimits

0x6d86,	// (0x00049f00) status_small_pane_g7

0x6da9,	// (0x00049f23) status_small_pane_t1_ParamLimits

0x6070,	// (0x000491ea) title_pane_g2

0x0003,

0xf54e,	// (0x000526c8) title_pane_g

0x62c5,	// (0x0004943f) aid_size_cell_colour_1_pane_ParamLimits

0x62c5,	// (0x0004943f) aid_size_cell_colour_1_pane

0x62d9,	// (0x00049453) aid_size_cell_colour_2_pane_ParamLimits

0x62d9,	// (0x00049453) aid_size_cell_colour_2_pane

0x62ed,	// (0x00049467) aid_size_cell_colour_3_pane_ParamLimits

0x62ed,	// (0x00049467) aid_size_cell_colour_3_pane

0x6301,	// (0x0004947b) aid_size_cell_colour_4_pane_ParamLimits

0x6301,	// (0x0004947b) aid_size_cell_colour_4_pane

0x6572,	// (0x000496ec) title_pane_stacon_g1_ParamLimits

0x6572,	// (0x000496ec) title_pane_stacon_g1

0x971d,	// (0x0004c897) popup_note_wait_window_g3_ParamLimits

0x971d,	// (0x0004c897) popup_note_wait_window_g3

0x9794,	// (0x0004c90e) popup_note_wait_window_t5_ParamLimits

0x9794,	// (0x0004c90e) popup_note_wait_window_t5

0xe248,	// (0x000513c2) main_feb_china_hwr_fs_writing_pane

0x7064,	// (0x0004a1de) popup_feb_china_hwr_fs_window_ParamLimits

0x7064,	// (0x0004a1de) popup_feb_china_hwr_fs_window

0x742d,	// (0x0004a5a7) aid_size_cell_hwr_fs_ParamLimits

0x742d,	// (0x0004a5a7) aid_size_cell_hwr_fs

0x911b,	// (0x0004c295) bg_popup_sub_pane_cp3_ParamLimits

0x911b,	// (0x0004c295) bg_popup_sub_pane_cp3

0x7442,	// (0x0004a5bc) grid_hwr_fs_pane_ParamLimits

0x7442,	// (0x0004a5bc) grid_hwr_fs_pane

0x745a,	// (0x0004a5d4) linegrid_hwr_fs_pane_ParamLimits

0x745a,	// (0x0004a5d4) linegrid_hwr_fs_pane

0x746a,	// (0x0004a5e4) cell_hwr_fs_pane_ParamLimits

0x746a,	// (0x0004a5e4) cell_hwr_fs_pane

0x9127,	// (0x0004c2a1) linegrid_hwr_fs_pane_g1_ParamLimits

0x9127,	// (0x0004c2a1) linegrid_hwr_fs_pane_g1

0x9133,	// (0x0004c2ad) linegrid_hwr_fs_pane_g2_ParamLimits

0x9133,	// (0x0004c2ad) linegrid_hwr_fs_pane_g2

0x9145,	// (0x0004c2bf) linegrid_hwr_fs_pane_g3_ParamLimits

0x9145,	// (0x0004c2bf) linegrid_hwr_fs_pane_g3

0x748e,	// (0x0004a608) linegrid_hwr_fs_pane_g4_ParamLimits

0x748e,	// (0x0004a608) linegrid_hwr_fs_pane_g4

0x74ac,	// (0x0004a626) linegrid_hwr_fs_pane_g5_ParamLimits

0x74ac,	// (0x0004a626) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00052974) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00052974) linegrid_hwr_fs_pane_g

0x9151,	// (0x0004c2cb) cell_hwr_fs_pane_g1_ParamLimits

0x9151,	// (0x0004c2cb) cell_hwr_fs_pane_g1

0x8f1c,	// (0x0004c096) cell_hwr_fs_pane_g2_ParamLimits

0x8f1c,	// (0x0004c096) cell_hwr_fs_pane_g2

0x9167,	// (0x0004c2e1) cell_hwr_fs_pane_g3_ParamLimits

0x9167,	// (0x0004c2e1) cell_hwr_fs_pane_g3

0x9174,	// (0x0004c2ee) cell_hwr_fs_pane_g4_ParamLimits

0x9174,	// (0x0004c2ee) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0005297f) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0005297f) cell_hwr_fs_pane_g

0x74c2,	// (0x0004a63c) cell_hwr_fs_pane_t1

0xe248,	// (0x000513c2) grid_highlight_pane_cp6

0xe248,	// (0x000513c2) main_idle_act2_pane

0x0995,	// (0x00043b0f) aid_inside_area_popup_secondary

0x9dcd,	// (0x0004cf47) aid_inside_area_window_primary_ParamLimits

0x9dcd,	// (0x0004cf47) aid_inside_area_window_primary

0xa9c1,	// (0x0004db3b) ai2_news_ticker_pane

0xa9c9,	// (0x0004db43) aid_size_cell_ai1_link_ParamLimits

0xa9c9,	// (0x0004db43) aid_size_cell_ai1_link

0xa9e3,	// (0x0004db5d) popup_ai2_data_window_ParamLimits

0xa9e3,	// (0x0004db5d) popup_ai2_data_window

0xaa01,	// (0x0004db7b) popup_ai2_link_window_ParamLimits

0xaa01,	// (0x0004db7b) popup_ai2_link_window

0x911b,	// (0x0004c295) bg_popup_sub_pane_cp4_ParamLimits

0x911b,	// (0x0004c295) bg_popup_sub_pane_cp4

0xaa17,	// (0x0004db91) grid_ai2_link_pane_ParamLimits

0xaa17,	// (0x0004db91) grid_ai2_link_pane

0xaa2e,	// (0x0004dba8) popup_ai2_link_window_g1_ParamLimits

0xaa2e,	// (0x0004dba8) popup_ai2_link_window_g1

0xaa3a,	// (0x0004dbb4) popup_ai2_link_window_g2_ParamLimits

0xaa3a,	// (0x0004dbb4) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00052b52) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00052b52) popup_ai2_link_window_g

0xaa4b,	// (0x0004dbc5) ai2_mp_button_pane

0xaa53,	// (0x0004dbcd) ai2_mp_volume_pane

0x930c,	// (0x0004c486) bg_popup_sub_pane_cp5_ParamLimits

0x930c,	// (0x0004c486) bg_popup_sub_pane_cp5

0xaa5b,	// (0x0004dbd5) heading_ai2_gene_pane_ParamLimits

0xaa5b,	// (0x0004dbd5) heading_ai2_gene_pane

0xaa67,	// (0x0004dbe1) list_ai2_gene_pane_ParamLimits

0xaa67,	// (0x0004dbe1) list_ai2_gene_pane

0xaaaf,	// (0x0004dc29) cell_ai2_link_pane_ParamLimits

0xaaaf,	// (0x0004dc29) cell_ai2_link_pane

0xaac5,	// (0x0004dc3f) cell_ai2_link_pane_g1

0xe248,	// (0x000513c2) grid_highlight_pane_cp7

0x7810,	// (0x0004a98a) ai2_mp_volume_pane_g1

0xab98,	// (0x0004dd12) ai2_mp_volume_pane_g2

0xab0d,	// (0x0004dc87) list_ai2_gene_pane_t1

0xaba0,	// (0x0004dd1a) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00052b6b) ai2_mp_volume_pane_g

0x7818,	// (0x0004a992) volume_small_pane_cp3

0xaba8,	// (0x0004dd22) aid_size_cell_ai2_button

0xabb0,	// (0x0004dd2a) grid_ai2_button_pane

0xabb9,	// (0x0004dd33) cell_ai2_button_pane_ParamLimits

0xabb9,	// (0x0004dd33) cell_ai2_button_pane

0xe23e,	// (0x000513b8) cell_ai2_button_pane_g1

0xe248,	// (0x000513c2) grid_highlight_pane_cp8

0xab58,	// (0x0004dcd2) ai2_gene_pane_t1_ParamLimits

0xab58,	// (0x0004dcd2) ai2_gene_pane_t1

0x6f58,	// (0x0004a0d2) aid_height_parent_landscape

0xa45f,	// (0x0004d5d9) aid_height_set_list

0xa470,	// (0x0004d5ea) aid_size_parent

0xa7e2,	// (0x0004d95c) aid_size_cell_graphic_pane_ParamLimits

0xaa77,	// (0x0004dbf1) popup_ai2_data_window_g1_ParamLimits

0xaa77,	// (0x0004dbf1) popup_ai2_data_window_g1

0xaa83,	// (0x0004dbfd) ai2_news_ticker_pane_g1

0xaa8b,	// (0x0004dc05) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00052b57) ai2_news_ticker_pane_g

0xaa93,	// (0x0004dc0d) ai2_news_ticker_pane_t1

0xaaa1,	// (0x0004dc1b) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00052b5c) ai2_news_ticker_pane_t

0xaace,	// (0x0004dc48) heading_ai2_gene_pane_g1

0xaad6,	// (0x0004dc50) heading_ai2_gene_pane_t1_ParamLimits

0xaad6,	// (0x0004dc50) heading_ai2_gene_pane_t1

0xaaeb,	// (0x0004dc65) list_highlight_pane_cp6

0xaaf3,	// (0x0004dc6d) ai2_gene_pane_ParamLimits

0xaaf3,	// (0x0004dc6d) ai2_gene_pane

0xab1b,	// (0x0004dc95) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00052b61) list_ai2_gene_pane_t

0xab29,	// (0x0004dca3) list_highlight_pane_cp8_ParamLimits

0xab29,	// (0x0004dca3) list_highlight_pane_cp8

0xab3a,	// (0x0004dcb4) ai2_gene_pane_g1_ParamLimits

0xab3a,	// (0x0004dcb4) ai2_gene_pane_g1

0xab4c,	// (0x0004dcc6) ai2_gene_pane_g2_ParamLimits

0xab4c,	// (0x0004dcc6) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00052b66) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00052b66) ai2_gene_pane_g

0xe85b,	// (0x000519d5) scroll_pane_cp12

0x6f0f,	// (0x0004a089) control_pane_t3_ParamLimits

0x6f0f,	// (0x0004a089) control_pane_t3

0x6d9a,	// (0x00049f14) status_small_pane_g8_ParamLimits

0x6d9a,	// (0x00049f14) status_small_pane_g8

0x7162,	// (0x0004a2dc) popup_find_window_ParamLimits

0x891f,	// (0x0004ba99) popup_note_image_window_ParamLimits

0x5584,	// (0x000486fe) list_double2_graphic_pane_vc_g1_ParamLimits

0x5584,	// (0x000486fe) list_double2_graphic_pane_vc_g1

0x1144,	// (0x000442be) list_double2_graphic_pane_vc_g2_ParamLimits

0x1144,	// (0x000442be) list_double2_graphic_pane_vc_g2

0x73a7,	// (0x0004a521) list_double2_graphic_pane_vc_g3_ParamLimits

0x73a7,	// (0x0004a521) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005293d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005293d) list_double2_graphic_pane_vc_g

0x5590,	// (0x0004870a) list_double2_graphic_pane_vc_t1_ParamLimits

0x5590,	// (0x0004870a) list_double2_graphic_pane_vc_t1

0x1144,	// (0x000442be) list_single_heading_pane_vc_g1_ParamLimits

0x1144,	// (0x000442be) list_single_heading_pane_vc_g1

0x73a7,	// (0x0004a521) list_single_heading_pane_vc_g2_ParamLimits

0x73a7,	// (0x0004a521) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005295e) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005295e) list_single_heading_pane_vc_g

0x55a6,	// (0x00048720) list_single_heading_pane_vc_t1_ParamLimits

0x55a6,	// (0x00048720) list_single_heading_pane_vc_t1

0x55be,	// (0x00048738) list_single_heading_pane_vc_t2_ParamLimits

0x55be,	// (0x00048738) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00052963) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00052963) list_single_heading_pane_vc_t

0x7415,	// (0x0004a58f) list_setting_number_pane_vc_g1_ParamLimits

0x7415,	// (0x0004a58f) list_setting_number_pane_vc_g1

0x7421,	// (0x0004a59b) list_setting_number_pane_vc_g2_ParamLimits

0x7421,	// (0x0004a59b) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00052968) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00052968) list_setting_number_pane_vc_g

0x55d0,	// (0x0004874a) list_setting_number_pane_vc_t1_ParamLimits

0x55d0,	// (0x0004874a) list_setting_number_pane_vc_t1

0x55e4,	// (0x0004875e) list_setting_number_pane_vc_t2_ParamLimits

0x55e4,	// (0x0004875e) list_setting_number_pane_vc_t2

0x5600,	// (0x0004877a) list_setting_number_pane_vc_t3_ParamLimits

0x5600,	// (0x0004877a) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0005296d) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0005296d) list_setting_number_pane_vc_t

0x562e,	// (0x000487a8) set_value_pane_vc_ParamLimits

0x562e,	// (0x000487a8) set_value_pane_vc

0xa648,	// (0x0004d7c2) list_double2_graphic_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double2_graphic_pane_vc

0xa648,	// (0x0004d7c2) list_double2_large_graphic_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double2_large_graphic_pane_vc

0xa648,	// (0x0004d7c2) list_double2_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double2_pane_vc

0xa648,	// (0x0004d7c2) list_double_graphic_heading_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double_graphic_heading_pane_vc

0xa648,	// (0x0004d7c2) list_double_graphic_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double_graphic_pane_vc

0xa648,	// (0x0004d7c2) list_double_heading_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double_heading_pane_vc

0xa65c,	// (0x0004d7d6) list_double_large_graphic_pane_vc_ParamLimits

0xa65c,	// (0x0004d7d6) list_double_large_graphic_pane_vc

0xa648,	// (0x0004d7c2) list_double_number_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double_number_pane_vc

0xa648,	// (0x0004d7c2) list_double_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double_pane_vc

0xa648,	// (0x0004d7c2) list_double_time_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_double_time_pane_vc

0xa648,	// (0x0004d7c2) list_setting_number_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_setting_number_pane_vc

0xa648,	// (0x0004d7c2) list_setting_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_setting_pane_vc

0xa648,	// (0x0004d7c2) list_single_graphic_heading_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_single_graphic_heading_pane_vc

0xa648,	// (0x0004d7c2) list_single_heading_pane_vc_ParamLimits

0xa648,	// (0x0004d7c2) list_single_heading_pane_vc

0xa67e,	// (0x0004d7f8) list_single_number_heading_pane_vc_ParamLimits

0xa67e,	// (0x0004d7f8) list_single_number_heading_pane_vc

0x5584,	// (0x000486fe) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5584,	// (0x000486fe) list_double_graphic_heading_pane_vc_g1

0x7821,	// (0x0004a99b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7821,	// (0x0004a99b) list_double_graphic_heading_pane_vc_g2

0x782d,	// (0x0004a9a7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x782d,	// (0x0004a9a7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x00052b72) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x00052b72) list_double_graphic_heading_pane_vc_g

0x56e2,	// (0x0004885c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56e2,	// (0x0004885c) list_double_graphic_heading_pane_vc_t1

0x56f8,	// (0x00048872) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x56f8,	// (0x00048872) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00052b79) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00052b79) list_double_graphic_heading_pane_vc_t

0x7415,	// (0x0004a58f) list_setting_pane_vc_g1_ParamLimits

0x7415,	// (0x0004a58f) list_setting_pane_vc_g1

0x7421,	// (0x0004a59b) list_setting_pane_vc_g2_ParamLimits

0x7421,	// (0x0004a59b) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00052968) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00052968) list_setting_pane_vc_g

0x5716,	// (0x00048890) list_setting_pane_vc_t1_ParamLimits

0x5716,	// (0x00048890) list_setting_pane_vc_t1

0x5732,	// (0x000488ac) list_setting_pane_vc_t2_ParamLimits

0x5732,	// (0x000488ac) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00052ba7) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00052ba7) list_setting_pane_vc_t

0x562e,	// (0x000487a8) set_value_pane_cp_vc_ParamLimits

0x562e,	// (0x000487a8) set_value_pane_cp_vc

0x1144,	// (0x000442be) list_single_number_heading_pane_vc_g1_ParamLimits

0x1144,	// (0x000442be) list_single_number_heading_pane_vc_g1

0x73a7,	// (0x0004a521) list_single_number_heading_pane_vc_g2_ParamLimits

0x73a7,	// (0x0004a521) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005295e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005295e) list_single_number_heading_pane_vc_g

0x55a6,	// (0x00048720) list_single_number_heading_pane_vc_t1_ParamLimits

0x55a6,	// (0x00048720) list_single_number_heading_pane_vc_t1

0x574e,	// (0x000488c8) list_single_number_heading_pane_vc_t2_ParamLimits

0x574e,	// (0x000488c8) list_single_number_heading_pane_vc_t2

0x5760,	// (0x000488da) list_single_number_heading_pane_vc_t3_ParamLimits

0x5760,	// (0x000488da) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00052bac) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00052bac) list_single_number_heading_pane_vc_t

0x5584,	// (0x000486fe) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5584,	// (0x000486fe) list_single_graphic_heading_pane_vc_g1

0x1144,	// (0x000442be) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1144,	// (0x000442be) list_single_graphic_heading_pane_vc_g4

0x73a7,	// (0x0004a521) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x73a7,	// (0x0004a521) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005293d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005293d) list_single_graphic_heading_pane_vc_g

0x55a6,	// (0x00048720) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x55a6,	// (0x00048720) list_single_graphic_heading_pane_vc_t1

0x5772,	// (0x000488ec) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5772,	// (0x000488ec) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x00052bb3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x00052bb3) list_single_graphic_heading_pane_vc_t

0x1144,	// (0x000442be) list_double2_pane_vc_g1_ParamLimits

0x1144,	// (0x000442be) list_double2_pane_vc_g1

0x73a7,	// (0x0004a521) list_double2_pane_vc_g2_ParamLimits

0x73a7,	// (0x0004a521) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005295e) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005295e) list_double2_pane_vc_g

0x5784,	// (0x000488fe) list_double2_pane_vc_t1_ParamLimits

0x5784,	// (0x000488fe) list_double2_pane_vc_t1

0x7839,	// (0x0004a9b3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7839,	// (0x0004a9b3) list_double2_large_graphic_pane_vc_g1

0x1144,	// (0x000442be) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1144,	// (0x000442be) list_double2_large_graphic_pane_vc_g2

0x73a7,	// (0x0004a521) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x73a7,	// (0x0004a521) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00052bb8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00052bb8) list_double2_large_graphic_pane_vc_g

0x579a,	// (0x00048914) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x579a,	// (0x00048914) list_double2_large_graphic_pane_vc_t1

0x7845,	// (0x0004a9bf) list_double_time_pane_vc_g1_ParamLimits

0x7845,	// (0x0004a9bf) list_double_time_pane_vc_g1

0x7851,	// (0x0004a9cb) list_double_time_pane_vc_g2_ParamLimits

0x7851,	// (0x0004a9cb) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00052bbf) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00052bbf) list_double_time_pane_vc_g

0x57b0,	// (0x0004892a) list_double_time_pane_vc_t1_ParamLimits

0x57b0,	// (0x0004892a) list_double_time_pane_vc_t1

0x57da,	// (0x00048954) list_double_time_pane_vc_t2_ParamLimits

0x57da,	// (0x00048954) list_double_time_pane_vc_t2

0x5823,	// (0x0004899d) list_double_time_pane_vc_t3_ParamLimits

0x5823,	// (0x0004899d) list_double_time_pane_vc_t3

0x5835,	// (0x000489af) list_double_time_pane_vc_t4_ParamLimits

0x5835,	// (0x000489af) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x00052bc4) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x00052bc4) list_double_time_pane_vc_t

0x1144,	// (0x000442be) list_double_pane_vc_g1_ParamLimits

0x1144,	// (0x000442be) list_double_pane_vc_g1

0x73a7,	// (0x0004a521) list_double_pane_vc_g2_ParamLimits

0x73a7,	// (0x0004a521) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005295e) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005295e) list_double_pane_vc_g

0x585a,	// (0x000489d4) list_double_pane_vc_t1_ParamLimits

0x585a,	// (0x000489d4) list_double_pane_vc_t1

0x586e,	// (0x000489e8) list_double_pane_vc_t2_ParamLimits

0x586e,	// (0x000489e8) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00052bcd) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00052bcd) list_double_pane_vc_t

0x1144,	// (0x000442be) list_double_number_pane_vc_g1_ParamLimits

0x1144,	// (0x000442be) list_double_number_pane_vc_g1

0x73a7,	// (0x0004a521) list_double_number_pane_vc_g2_ParamLimits

0x73a7,	// (0x0004a521) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005295e) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005295e) list_double_number_pane_vc_g

0x5884,	// (0x000489fe) list_double_number_pane_vc_t1_ParamLimits

0x5884,	// (0x000489fe) list_double_number_pane_vc_t1

0x5898,	// (0x00048a12) list_double_number_pane_vc_t2_ParamLimits

0x5898,	// (0x00048a12) list_double_number_pane_vc_t2

0x58ac,	// (0x00048a26) list_double_number_pane_vc_t3_ParamLimits

0x58ac,	// (0x00048a26) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x00052bd2) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x00052bd2) list_double_number_pane_vc_t

0x785d,	// (0x0004a9d7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x785d,	// (0x0004a9d7) list_double_large_graphic_pane_vc_g1

0x7885,	// (0x0004a9ff) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7885,	// (0x0004a9ff) list_double_large_graphic_pane_vc_g2

0x7899,	// (0x0004aa13) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7899,	// (0x0004aa13) list_double_large_graphic_pane_vc_g3

0x58c2,	// (0x00048a3c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x58c2,	// (0x00048a3c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00052bd9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00052bd9) list_double_large_graphic_pane_vc_g

0x58d2,	// (0x00048a4c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x58d2,	// (0x00048a4c) list_double_large_graphic_pane_vc_t1

0x58f4,	// (0x00048a6e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x58f4,	// (0x00048a6e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00052be2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00052be2) list_double_large_graphic_pane_vc_t

0x7821,	// (0x0004a99b) list_double_heading_pane_vc_g1_ParamLimits

0x7821,	// (0x0004a99b) list_double_heading_pane_vc_g1

0x782d,	// (0x0004a9a7) list_double_heading_pane_vc_g2_ParamLimits

0x782d,	// (0x0004a9a7) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00052be7) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00052be7) list_double_heading_pane_vc_g

0x5914,	// (0x00048a8e) list_double_heading_pane_vc_t1_ParamLimits

0x5914,	// (0x00048a8e) list_double_heading_pane_vc_t1

0x55a6,	// (0x00048720) list_double_heading_pane_vc_t2_ParamLimits

0x55a6,	// (0x00048720) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00052bec) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00052bec) list_double_heading_pane_vc_t

0x5926,	// (0x00048aa0) list_double_graphic_pane_vc_g1_ParamLimits

0x5926,	// (0x00048aa0) list_double_graphic_pane_vc_g1

0x78a8,	// (0x0004aa22) list_double_graphic_pane_vc_g2_ParamLimits

0x78a8,	// (0x0004aa22) list_double_graphic_pane_vc_g2

0x1144,	// (0x000442be) list_double_graphic_pane_vc_g3_ParamLimits

0x1144,	// (0x000442be) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x00052bf1) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x00052bf1) list_double_graphic_pane_vc_g

0x5932,	// (0x00048aac) list_double_graphic_pane_vc_t1_ParamLimits

0x5932,	// (0x00048aac) list_double_graphic_pane_vc_t1

0x595c,	// (0x00048ad6) list_double_graphic_pane_vc_t2_ParamLimits

0x595c,	// (0x00048ad6) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00052bfa) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00052bfa) list_double_graphic_pane_vc_t

0x5c7c,	// (0x00048df6) aid_size_cell_fastswap

0x5c84,	// (0x00048dfe) aid_size_cell_touch_ParamLimits

0x5c84,	// (0x00048dfe) aid_size_cell_touch

0x5ee5,	// (0x0004905f) popup_fast_swap_wide_window_ParamLimits

0x5ee5,	// (0x0004905f) popup_fast_swap_wide_window

0x6003,	// (0x0004917d) touch_pane_ParamLimits

0x6003,	// (0x0004917d) touch_pane

0x086e,	// (0x000439e8) button_value_adjust_pane_cp2

0x523d,	// (0x000483b7) button_value_adjust_pane_cp4

0x5265,	// (0x000483df) form_field_data_pane_cp2

0x528a,	// (0x00048404) form_field_data_wide_pane_cp2

0x0bd4,	// (0x00043d4e) bg_scroll_pane_ParamLimits

0x675a,	// (0x000498d4) scroll_handle_pane_ParamLimits

0x676e,	// (0x000498e8) scroll_sc2_down_pane_ParamLimits

0x676e,	// (0x000498e8) scroll_sc2_down_pane

0x0c05,	// (0x00043d7f) scroll_sc2_up_pane_ParamLimits

0x0c05,	// (0x00043d7f) scroll_sc2_up_pane

0xb2d2,	// (0x0004e44c) grid_wheel_folder_pane_g1_ParamLimits

0xb2d2,	// (0x0004e44c) grid_wheel_folder_pane_g1

0x6a92,	// (0x00049c0c) clock_nsta_pane_cp2_ParamLimits

0x6a92,	// (0x00049c0c) clock_nsta_pane_cp2

0x6518,	// (0x00049692) listscroll_midp_pane_ParamLimits

0x6bce,	// (0x00049d48) midp_canvas_pane

0x6f50,	// (0x0004a0ca) nsta_clock_indic_pane

0x6f9e,	// (0x0004a118) listscroll_form_pane_vc

0x6fc2,	// (0x0004a13c) listscroll_set_pane_vc_ParamLimits

0x6fc2,	// (0x0004a13c) listscroll_set_pane_vc

0x8c70,	// (0x0004bdea) clock_nsta_pane

0x8ced,	// (0x0004be67) indicator_nsta_pane

0x8fe5,	// (0x0004c15f) bg_popup_sub_pane_cp2_ParamLimits

0x8ff9,	// (0x0004c173) find_pane_cp2_ParamLimits

0x8ff9,	// (0x0004c173) find_pane_cp2

0x900f,	// (0x0004c189) grid_toobar_pane_ParamLimits

0x90ef,	// (0x0004c269) list_form_gen_pane_vc_ParamLimits

0x90ef,	// (0x0004c269) list_form_gen_pane_vc

0x9105,	// (0x0004c27f) scroll_pane_cp8_vc_ParamLimits

0x9105,	// (0x0004c27f) scroll_pane_cp8_vc

0x9181,	// (0x0004c2fb) data_form_wide_pane_vc_ParamLimits

0x9181,	// (0x0004c2fb) data_form_wide_pane_vc

0x918d,	// (0x0004c307) form_field_data_wide_pane_vc_g1

0x9195,	// (0x0004c30f) form_field_data_wide_pane_vc_t1_ParamLimits

0x9195,	// (0x0004c30f) form_field_data_wide_pane_vc_t1

0x0882,	// (0x000439fc) input_focus_pane_cp6_vc_ParamLimits

0x0882,	// (0x000439fc) input_focus_pane_cp6_vc

0x9497,	// (0x0004c611) list_midp_pane_ParamLimits

0x94a3,	// (0x0004c61d) scroll_pane_cp16_ParamLimits

0x94a3,	// (0x0004c61d) scroll_pane_cp16

0x94f1,	// (0x0004c66b) button_value_adjust_pane_ParamLimits

0x94f1,	// (0x0004c66b) button_value_adjust_pane

0xa482,	// (0x0004d5fc) button_value_adjust_pane_cp6_ParamLimits

0xa482,	// (0x0004d5fc) button_value_adjust_pane_cp6

0xa5d0,	// (0x0004d74a) settings_code_pane_cp_ParamLimits

0xa5d0,	// (0x0004d74a) settings_code_pane_cp

0xe23e,	// (0x000513b8) cell_touch_pane_g1

0xe23e,	// (0x000513b8) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00052882) cell_touch_pane_g

0xabcb,	// (0x0004dd45) cell_touch_pane_cp_ParamLimits

0xabcb,	// (0x0004dd45) cell_touch_pane_cp

0xabdb,	// (0x0004dd55) cell_touch_pane_ParamLimits

0xabdb,	// (0x0004dd55) cell_touch_pane

0xe23e,	// (0x000513b8) scroll_sc2_down_pane_g1

0xe23e,	// (0x000513b8) scroll_sc2_up_pane_g1

0xe248,	// (0x000513c2) bg_set_opt_pane_cp4_vc

0xabec,	// (0x0004dd66) list_set_graphic_pane_vc_g1_ParamLimits

0xabec,	// (0x0004dd66) list_set_graphic_pane_vc_g1

0x1826,	// (0x000449a0) list_set_graphic_pane_vc_g2_ParamLimits

0x1826,	// (0x000449a0) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00052b7e) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00052b7e) list_set_graphic_pane_vc_g

0xabf8,	// (0x0004dd72) text_primary_small_cp13_vc_ParamLimits

0xabf8,	// (0x0004dd72) text_primary_small_cp13_vc

0xac10,	// (0x0004dd8a) list_set_graphic_pane_vc_ParamLimits

0xac10,	// (0x0004dd8a) list_set_graphic_pane_vc

0xe248,	// (0x000513c2) input_focus_pane_cp2_vc

0xe23e,	// (0x000513b8) setting_code_pane_vc_g1

0xe2b9,	// (0x00051433) setting_code_pane_vc_t1

0xac25,	// (0x0004dd9f) set_text_pane_vc_t1_ParamLimits

0xac25,	// (0x0004dd9f) set_text_pane_vc_t1

0xe248,	// (0x000513c2) input_focus_pane_cp1_vc

0xac43,	// (0x0004ddbd) list_set_text_pane_vc

0xe23e,	// (0x000513b8) setting_text_pane_vc_g1

0xe248,	// (0x000513c2) bg_set_opt_pane_cp2_vc

0xe2b0,	// (0x0005142a) setting_slider_graphic_pane_vc_g1

0xac4d,	// (0x0004ddc7) setting_slider_graphic_pane_vc_t1

0xac5f,	// (0x0004ddd9) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x00052b83) setting_slider_graphic_pane_vc_t

0xac71,	// (0x0004ddeb) slider_set_pane_cp_vc

0xac7b,	// (0x0004ddf5) slider_set_pane_vc_g1

0xac84,	// (0x0004ddfe) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00052b88) slider_set_pane_vc_g

0x08dd,	// (0x00043a57) set_opt_bg_pane_g1_copy1

0x08e5,	// (0x00043a5f) set_opt_bg_pane_g2_copy1

0xacb0,	// (0x0004de2a) set_opt_bg_pane_g3_copy1

0x08f5,	// (0x00043a6f) set_opt_bg_pane_g4_copy1

0x08fd,	// (0x00043a77) set_opt_bg_pane_g5_copy1

0x0905,	// (0x00043a7f) set_opt_bg_pane_g6_copy1

0xacba,	// (0x0004de34) set_opt_bg_pane_g7_copy1

0xacc4,	// (0x0004de3e) set_opt_bg_pane_g8_copy1

0xacce,	// (0x0004de48) set_opt_bg_pane_g9_copy1

0xe248,	// (0x000513c2) bg_set_opt_pane_cp_vc

0xacd8,	// (0x0004de52) setting_slider_pane_vc_t1

0xace7,	// (0x0004de61) setting_slider_pane_vc_t2

0xacf9,	// (0x0004de73) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00052b97) setting_slider_pane_vc_t

0xad0b,	// (0x0004de85) slider_set_pane_vc

0x74d0,	// (0x0004a64a) volume_set_pane_vc_g1

0x74d9,	// (0x0004a653) volume_set_pane_vc_g2

0x74e2,	// (0x0004a65c) volume_set_pane_vc_g3

0x74eb,	// (0x0004a665) volume_set_pane_vc_g4

0x74f4,	// (0x0004a66e) volume_set_pane_vc_g5

0x74fd,	// (0x0004a677) volume_set_pane_vc_g6

0x7506,	// (0x0004a680) volume_set_pane_vc_g7

0x750f,	// (0x0004a689) volume_set_pane_vc_g8

0x7518,	// (0x0004a692) volume_set_pane_vc_g9

0x7521,	// (0x0004a69b) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00052a35) volume_set_pane_vc_g

0xad15,	// (0x0004de8f) volume_set_pane_vc

0xad1f,	// (0x0004de99) button_value_adjust_pane_cp1_vc

0xad29,	// (0x0004dea3) list_highlight_pane_cp2_vc

0xad32,	// (0x0004deac) list_set_pane_vc_ParamLimits

0xad32,	// (0x0004deac) list_set_pane_vc

0xada2,	// (0x0004df1c) main_pane_set_vc_t1_ParamLimits

0xada2,	// (0x0004df1c) main_pane_set_vc_t1

0xadb7,	// (0x0004df31) main_pane_set_vc_t2_ParamLimits

0xadb7,	// (0x0004df31) main_pane_set_vc_t2

0xadc9,	// (0x0004df43) main_pane_set_vc_t3_ParamLimits

0xadc9,	// (0x0004df43) main_pane_set_vc_t3

0xaddd,	// (0x0004df57) main_pane_set_vc_t4_ParamLimits

0xaddd,	// (0x0004df57) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00052b9e) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00052b9e) main_pane_set_vc_t

0xadf1,	// (0x0004df6b) setting_code_pane_vc_ParamLimits

0xadf1,	// (0x0004df6b) setting_code_pane_vc

0xae02,	// (0x0004df7c) setting_slider_graphic_pane_vc

0xae02,	// (0x0004df7c) setting_slider_pane_vc

0xae02,	// (0x0004df7c) setting_text_pane_vc

0xae02,	// (0x0004df7c) setting_volume_pane_vc

0xae0c,	// (0x0004df86) scroll_pane_cp121_vc

0x085c,	// (0x000439d6) set_content_pane_vc

0xae14,	// (0x0004df8e) button_value_adjust_pane_g1

0xae1d,	// (0x0004df97) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00052bff) button_value_adjust_pane_g

0xae26,	// (0x0004dfa0) form_field_slider_wide_pane_vc_t1_ParamLimits

0xae26,	// (0x0004dfa0) form_field_slider_wide_pane_vc_t1

0xae38,	// (0x0004dfb2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xae38,	// (0x0004dfb2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x00052c04) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00052c04) form_field_slider_wide_pane_vc_t

0xe3d5,	// (0x0005154f) input_focus_pane_cp10_vc_ParamLimits

0xe3d5,	// (0x0005154f) input_focus_pane_cp10_vc

0xae64,	// (0x0004dfde) slider_cont_pane_cp1_vc_ParamLimits

0xae64,	// (0x0004dfde) slider_cont_pane_cp1_vc

0xae76,	// (0x0004dff0) slider_form_pane_g1_cp2

0xac84,	// (0x0004ddfe) slider_form_pane_g2_cp2

0xaea3,	// (0x0004e01d) form_field_slider_pane_vc_t3

0xaeb1,	// (0x0004e02b) form_field_slider_pane_vc_t4

0xaebf,	// (0x0004e039) slider_form_pane_vc_ParamLimits

0xaebf,	// (0x0004e039) slider_form_pane_vc

0xaecc,	// (0x0004e046) form_field_slider_pane_vc_t1_ParamLimits

0xaecc,	// (0x0004e046) form_field_slider_pane_vc_t1

0xae38,	// (0x0004dfb2) form_field_slider_pane_vc_t2_ParamLimits

0xae38,	// (0x0004dfb2) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00052c16) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00052c16) form_field_slider_pane_vc_t

0xe3d5,	// (0x0005154f) input_focus_pane_cp9_vc_ParamLimits

0xe3d5,	// (0x0005154f) input_focus_pane_cp9_vc

0xaee2,	// (0x0004e05c) slider_cont_pane_vc_ParamLimits

0xaee2,	// (0x0004e05c) slider_cont_pane_vc

0xaef6,	// (0x0004e070) list_form_graphic_pane_cp_vc_ParamLimits

0xaef6,	// (0x0004e070) list_form_graphic_pane_cp_vc

0x918d,	// (0x0004c307) form_field_popup_wide_pane_vc_g1

0xaf0b,	// (0x0004e085) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf0b,	// (0x0004e085) form_field_popup_wide_pane_vc_t1

0x0882,	// (0x000439fc) input_focus_pane_cp8_vc_ParamLimits

0x0882,	// (0x000439fc) input_focus_pane_cp8_vc

0xaf50,	// (0x0004e0ca) list_form_wide_pane_vc_ParamLimits

0xaf50,	// (0x0004e0ca) list_form_wide_pane_vc

0xaf5c,	// (0x0004e0d6) list_form_graphic_pane_vc_g1

0xaf64,	// (0x0004e0de) list_form_graphic_pane_vc_t1_ParamLimits

0xaf64,	// (0x0004e0de) list_form_graphic_pane_vc_t1

0xe2a2,	// (0x0005141c) list_highlight_pane_cp5_vc_ParamLimits

0xe2a2,	// (0x0005141c) list_highlight_pane_cp5_vc

0xaf80,	// (0x0004e0fa) list_form_graphic_pane_vc_ParamLimits

0xaf80,	// (0x0004e0fa) list_form_graphic_pane_vc

0x918d,	// (0x0004c307) form_field_popup_pane_vc_g1

0xaf96,	// (0x0004e110) form_field_popup_pane_vc_t1_ParamLimits

0xaf96,	// (0x0004e110) form_field_popup_pane_vc_t1

0x0882,	// (0x000439fc) input_focus_pane_cp7_vc_ParamLimits

0x0882,	// (0x000439fc) input_focus_pane_cp7_vc

0xafad,	// (0x0004e127) list_form_pane_vc_ParamLimits

0xafad,	// (0x0004e127) list_form_pane_vc

0xafb9,	// (0x0004e133) data_form_pane_vc_t1_ParamLimits

0xafb9,	// (0x0004e133) data_form_pane_vc_t1

0x08dd,	// (0x00043a57) input_focus_pane_vc_g1

0x08e5,	// (0x00043a5f) input_focus_pane_vc_g2

0x08ed,	// (0x00043a67) input_focus_pane_vc_g3

0x08f5,	// (0x00043a6f) input_focus_pane_vc_g4

0x08fd,	// (0x00043a77) input_focus_pane_vc_g5

0x0905,	// (0x00043a7f) input_focus_pane_vc_g6

0x090d,	// (0x00043a87) input_focus_pane_vc_g7

0x0915,	// (0x00043a8f) input_focus_pane_vc_g8

0x091d,	// (0x00043a97) input_focus_pane_vc_g9

0xe23e,	// (0x000513b8) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005280b) input_focus_pane_vc_g

0x9181,	// (0x0004c2fb) data_form_pane_vc_ParamLimits

0x9181,	// (0x0004c2fb) data_form_pane_vc

0x918d,	// (0x0004c307) form_field_data_pane_vc_g1

0xafd6,	// (0x0004e150) form_field_data_pane_vc_t1_ParamLimits

0xafd6,	// (0x0004e150) form_field_data_pane_vc_t1

0x0882,	// (0x000439fc) input_focus_pane_vc_ParamLimits

0x0882,	// (0x000439fc) input_focus_pane_vc

0xaff0,	// (0x0004e16a) button_value_adjust_pane_cp3_vc

0xaff8,	// (0x0004e172) button_value_adjust_pane_cp5_vc

0xb000,	// (0x0004e17a) form_field_data_pane_vc_ParamLimits

0xb000,	// (0x0004e17a) form_field_data_pane_vc

0xb01b,	// (0x0004e195) form_field_data_pane_vc_cp2

0xb023,	// (0x0004e19d) form_field_data_wide_pane_vc_ParamLimits

0xb023,	// (0x0004e19d) form_field_data_wide_pane_vc

0xb03d,	// (0x0004e1b7) form_field_data_wide_pane_vc_cp2

0xb045,	// (0x0004e1bf) form_field_popup_pane_vc_ParamLimits

0xb045,	// (0x0004e1bf) form_field_popup_pane_vc

0xb060,	// (0x0004e1da) form_field_popup_wide_pane_vc_ParamLimits

0xb060,	// (0x0004e1da) form_field_popup_wide_pane_vc

0xb07a,	// (0x0004e1f4) form_field_slider_pane_vc_ParamLimits

0xb07a,	// (0x0004e1f4) form_field_slider_pane_vc

0xb08d,	// (0x0004e207) form_field_slider_wide_pane_vc_ParamLimits

0xb08d,	// (0x0004e207) form_field_slider_wide_pane_vc

0xb0a0,	// (0x0004e21a) grid_touch_1_pane_ParamLimits

0xb0a0,	// (0x0004e21a) grid_touch_1_pane

0xb0ac,	// (0x0004e226) grid_touch_2_pane_ParamLimits

0xb0ac,	// (0x0004e226) grid_touch_2_pane

0x4399,	// (0x00047513) touch_pane_g1_ParamLimits

0x4399,	// (0x00047513) touch_pane_g1

0xb0c6,	// (0x0004e240) cell_app_pane_cp_wide_ParamLimits

0xb0c6,	// (0x0004e240) cell_app_pane_cp_wide

0xb0d7,	// (0x0004e251) grid_popup_fast_wide_pane_ParamLimits

0xb0d7,	// (0x0004e251) grid_popup_fast_wide_pane

0xb0eb,	// (0x0004e265) scroll_pane_cp19_ParamLimits

0xb0eb,	// (0x0004e265) scroll_pane_cp19

0xe248,	// (0x000513c2) bg_popup_window_pane_cp20

0xb0ff,	// (0x0004e279) listscroll_popup_fast_wide_pane

0xe2a2,	// (0x0005141c) grid_indicator_nsta_pane

0xb107,	// (0x0004e281) clock_nsta_pane_g1

0xb110,	// (0x0004e28a) clock_nsta_pane_t1

0xb12c,	// (0x0004e2a6) cell_indicator_nsta_pane_ParamLimits

0xb12c,	// (0x0004e2a6) cell_indicator_nsta_pane

0xb15e,	// (0x0004e2d8) cell_indicator_nsta_pane_g1

0xb16c,	// (0x0004e2e6) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00052c27) cell_indicator_nsta_pane_g

0xb182,	// (0x0004e2fc) clock_nsta_pane_cp

0xb18a,	// (0x0004e304) indicator_nsta_pane_cp

0xb193,	// (0x0004e30d) nsta_clock_indic_pane_g1

0xe2de,	// (0x00051458) grid_indicator_pane

0x0cf7,	// (0x00043e71) scroll_pane_cp29

0x69de,	// (0x00049b58) indicator_nsta_pane_cp2_ParamLimits

0x69de,	// (0x00049b58) indicator_nsta_pane_cp2

0xe2a2,	// (0x0005141c) main_apps_wheel_pane

0x9374,	// (0x0004c4ee) form_midp_field_text_pane_ParamLimits

0x94c3,	// (0x0004c63d) scroll_bar_cp050_ParamLimits

0xb1fc,	// (0x0004e376) cell_indicator_pane_ParamLimits

0xb1fc,	// (0x0004e376) cell_indicator_pane

0xb214,	// (0x0004e38e) cell_indicator_pane_g1

0xb21e,	// (0x0004e398) grid_wheel_folder_pane_ParamLimits

0xb21e,	// (0x0004e398) grid_wheel_folder_pane

0xb232,	// (0x0004e3ac) list_wheel_apps_pane_ParamLimits

0xb232,	// (0x0004e3ac) list_wheel_apps_pane

0xb245,	// (0x0004e3bf) main_apps_wheel_pane_g1_ParamLimits

0xb245,	// (0x0004e3bf) main_apps_wheel_pane_g1

0xb261,	// (0x0004e3db) main_apps_wheel_pane_g2_ParamLimits

0xb261,	// (0x0004e3db) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00052c43) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00052c43) main_apps_wheel_pane_g

0xb27d,	// (0x0004e3f7) main_apps_wheel_pane_t1_ParamLimits

0xb27d,	// (0x0004e3f7) main_apps_wheel_pane_t1

0xb2a6,	// (0x0004e420) list_wheel_apps_pane_g1

0xb2ae,	// (0x0004e428) list_wheel_apps_pane_g2

0xb2b6,	// (0x0004e430) list_wheel_apps_pane_g3

0xb2be,	// (0x0004e438) list_wheel_apps_pane_g4

0xb2c8,	// (0x0004e442) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00052c48) list_wheel_apps_pane_g

0x1077,	// (0x000441f1) navi_icon_text_pane

0x8b9d,	// (0x0004bd17) aid_fill_nsta

0xb2e9,	// (0x0004e463) navi_icon_text_pane_g1

0xb2f5,	// (0x0004e46f) navi_icon_text_pane_t1

0x6b27,	// (0x00049ca1) list_set_graphic_pane_t1_ParamLimits

0x6b27,	// (0x00049ca1) list_set_graphic_pane_t1

0x9c14,	// (0x0004cd8e) popup_midp_note_alarm_window_t6_ParamLimits

0x9c14,	// (0x0004cd8e) popup_midp_note_alarm_window_t6

0x9c26,	// (0x0004cda0) popup_midp_note_alarm_window_t7_ParamLimits

0x9c26,	// (0x0004cda0) popup_midp_note_alarm_window_t7

0x9c38,	// (0x0004cdb2) popup_midp_note_alarm_window_t8_ParamLimits

0x9c38,	// (0x0004cdb2) popup_midp_note_alarm_window_t8

0x9c4a,	// (0x0004cdc4) popup_midp_note_alarm_window_t9_ParamLimits

0x9c4a,	// (0x0004cdc4) popup_midp_note_alarm_window_t9

0x9c5c,	// (0x0004cdd6) popup_midp_note_alarm_window_t10_ParamLimits

0x9c5c,	// (0x0004cdd6) popup_midp_note_alarm_window_t10

0x9c6e,	// (0x0004cde8) popup_midp_note_alarm_window_t11_ParamLimits

0x9c6e,	// (0x0004cde8) popup_midp_note_alarm_window_t11

0x9c80,	// (0x0004cdfa) scroll_pane_cp17_ParamLimits

0x9c80,	// (0x0004cdfa) scroll_pane_cp17

0x74d0,	// (0x0004a64a) volume_small_pane_cp_g1

0x78c5,	// (0x0004aa3f) volume_small_pane_cp_g2

0x78ce,	// (0x0004aa48) volume_small_pane_cp_g3

0x78d7,	// (0x0004aa51) volume_small_pane_cp_g4

0x78e0,	// (0x0004aa5a) volume_small_pane_cp_g5

0x78e9,	// (0x0004aa63) volume_small_pane_cp_g6

0x78f2,	// (0x0004aa6c) volume_small_pane_cp_g7

0x78fb,	// (0x0004aa75) volume_small_pane_cp_g8

0x7904,	// (0x0004aa7e) volume_small_pane_cp_g9

0x790d,	// (0x0004aa87) volume_small_pane_cp_g10

0x41c7,	// (0x00047341) midp_ticker_pane_g1_ParamLimits

0x41d3,	// (0x0004734d) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x000528d7) midp_ticker_pane_g_ParamLimits

0x6c73,	// (0x00049ded) midp_ticker_pane_t1_ParamLimits

0x8bb3,	// (0x0004bd2d) aid_fill_nsta_2

0x94af,	// (0x0004c629) list_form2_midp_pane

0xa617,	// (0x0004d791) midp_editing_number_pane_ParamLimits

0xa626,	// (0x0004d7a0) midp_ticker_pane_ParamLimits

0xb307,	// (0x0004e481) form2_midp_field_pane

0xb32b,	// (0x0004e4a5) scroll_pane_cp51

0xb34b,	// (0x0004e4c5) form2_midp_button_pane_ParamLimits

0xb34b,	// (0x0004e4c5) form2_midp_button_pane

0xb35d,	// (0x0004e4d7) form2_midp_content_pane_ParamLimits

0xb35d,	// (0x0004e4d7) form2_midp_content_pane

0xb377,	// (0x0004e4f1) form2_midp_field_choice_group_pane

0xb37f,	// (0x0004e4f9) form2_midp_field_pane_g1

0xb387,	// (0x0004e501) form2_midp_field_pane_g2

0xb38f,	// (0x0004e509) form2_midp_field_pane_g3

0xb397,	// (0x0004e511) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00052c6d) form2_midp_field_pane_g

0xb39f,	// (0x0004e519) form2_midp_gauge_slider_pane

0xb3a7,	// (0x0004e521) form2_midp_gauge_wait_pane

0xb3af,	// (0x0004e529) form2_midp_image_pane_ParamLimits

0xb3af,	// (0x0004e529) form2_midp_image_pane

0xb3ca,	// (0x0004e544) form2_midp_label_pane_ParamLimits

0xb3ca,	// (0x0004e544) form2_midp_label_pane

0xb3e9,	// (0x0004e563) form2_midp_label_pane_cp_ParamLimits

0xb3e9,	// (0x0004e563) form2_midp_label_pane_cp

0xb40a,	// (0x0004e584) form2_midp_string_pane_ParamLimits

0xb40a,	// (0x0004e584) form2_midp_string_pane

0x597a,	// (0x00048af4) form2_midp_text_pane_ParamLimits

0x597a,	// (0x00048af4) form2_midp_text_pane

0xb41c,	// (0x0004e596) form2_midp_time_pane

0xb42c,	// (0x0004e5a6) input_focus_pane_cp51_ParamLimits

0xb42c,	// (0x0004e5a6) input_focus_pane_cp51

0xb444,	// (0x0004e5be) form2_midp_label_pane_t1_ParamLimits

0xb444,	// (0x0004e5be) form2_midp_label_pane_t1

0x599d,	// (0x00048b17) form2_mdip_text_pane_t1_ParamLimits

0x599d,	// (0x00048b17) form2_mdip_text_pane_t1

0x59bc,	// (0x00048b36) form2_midp_time_pane_t1

0xb492,	// (0x0004e60c) form2_midp_gauge_slider_pane_t1

0xb4a4,	// (0x0004e61e) form2_midp_gauge_slider_pane_t2

0xb4b6,	// (0x0004e630) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00052c76) form2_midp_gauge_slider_pane_t

0xb4c8,	// (0x0004e642) form2_midp_slider_pane

0xb4d4,	// (0x0004e64e) form2_midp_gauge_wait_pane_t1

0xb4e2,	// (0x0004e65c) form2_midp_wait_pane_ParamLimits

0xb4e2,	// (0x0004e65c) form2_midp_wait_pane

0x91d4,	// (0x0004c34e) list_single_2graphic_pane_cp4_ParamLimits

0x91d4,	// (0x0004c34e) list_single_2graphic_pane_cp4

0xb50d,	// (0x0004e687) list_single_midp_graphic_pane_cp_ParamLimits

0xb50d,	// (0x0004e687) list_single_midp_graphic_pane_cp

0xe248,	// (0x000513c2) list_highlight_pane_cp20

0xb531,	// (0x0004e6ab) list_single_2graphic_pane_g1_cp4

0xaace,	// (0x0004dc48) list_single_2graphic_pane_g2_cp4

0xb539,	// (0x0004e6b3) list_single_2graphic_pane_t1_cp4

0xe2a2,	// (0x0005141c) list_highlight_pane_cp21

0xb548,	// (0x0004e6c2) list_single_midp_graphic_pane_g4_cp

0xb557,	// (0x0004e6d1) list_single_midp_graphic_pane_t1_cp

0xb56c,	// (0x0004e6e6) form2_mdip_string_pane_t1_ParamLimits

0xb56c,	// (0x0004e6e6) form2_mdip_string_pane_t1

0xe248,	// (0x000513c2) bg_wml_button_pane_cp2

0xe23e,	// (0x000513b8) form2_midp_image_pane_g1

0x646b,	// (0x000495e5) list_double_large_graphic_pane_g5_ParamLimits

0x646b,	// (0x000495e5) list_double_large_graphic_pane_g5

0x6518,	// (0x00049692) midp_form_pane_ParamLimits

0xe2a2,	// (0x0005141c) main_apps_wheel_pane_ParamLimits

0x8947,	// (0x0004bac1) popup_preview_window_ParamLimits

0x8947,	// (0x0004bac1) popup_preview_window

0x8b2e,	// (0x0004bca8) popup_touch_info_window_ParamLimits

0x8b2e,	// (0x0004bca8) popup_touch_info_window

0x8b50,	// (0x0004bcca) popup_touch_menu_window_ParamLimits

0x8b50,	// (0x0004bcca) popup_touch_menu_window

0xe234,	// (0x000513ae) bg_popup_sub_pane_cp6

0xb611,	// (0x0004e78b) list_touch_menu_pane

0xb619,	// (0x0004e793) list_single_touch_menu_pane_ParamLimits

0xb619,	// (0x0004e793) list_single_touch_menu_pane

0xb631,	// (0x0004e7ab) list_single_touch_menu_pane_t1

0xe2a2,	// (0x0005141c) bg_popup_sub_pane_cp7_ParamLimits

0xe2a2,	// (0x0005141c) bg_popup_sub_pane_cp7

0xb63f,	// (0x0004e7b9) heading_sub_pane

0xb647,	// (0x0004e7c1) list_touch_info_pane_ParamLimits

0xb647,	// (0x0004e7c1) list_touch_info_pane

0xb656,	// (0x0004e7d0) list_single_touch_info_pane_ParamLimits

0xb656,	// (0x0004e7d0) list_single_touch_info_pane

0xb668,	// (0x0004e7e2) list_single_touch_info_pane_t1

0xb676,	// (0x0004e7f0) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00052c84) list_single_touch_info_pane_t

0x11d3,	// (0x0004434d) bg_popup_heading_pane_cp

0xb684,	// (0x0004e7fe) heading_sub_pane_t1

0x911b,	// (0x0004c295) bg_popup_preview_window_pane_cp_ParamLimits

0x911b,	// (0x0004c295) bg_popup_preview_window_pane_cp

0xb63f,	// (0x0004e7b9) heading_preview_pane

0xb647,	// (0x0004e7c1) list_preview_pane_ParamLimits

0xb647,	// (0x0004e7c1) list_preview_pane

0xb692,	// (0x0004e80c) popup_preview_window_g1

0xb656,	// (0x0004e7d0) list_single_preview_pane_ParamLimits

0xb656,	// (0x0004e7d0) list_single_preview_pane

0xb69a,	// (0x0004e814) list_single_preview_pane_g1

0xb6a2,	// (0x0004e81c) list_single_preview_pane_t1

0xb668,	// (0x0004e7e2) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00052c89) list_single_preview_pane_t

0xb6b0,	// (0x0004e82a) bg_popup_heading_pane_cp2_ParamLimits

0xb6b0,	// (0x0004e82a) bg_popup_heading_pane_cp2

0xb6c6,	// (0x0004e840) heading_preview_pane_g1

0xb6ce,	// (0x0004e848) heading_preview_pane_t1_ParamLimits

0xb6ce,	// (0x0004e848) heading_preview_pane_t1

0xe2f5,	// (0x0005146f) soft_indicator_pane_t1_ParamLimits

0xe838,	// (0x000519b2) scroll_pane_ParamLimits

0x0bfc,	// (0x00043d76) scroll_sc2_left_pane

0x0bf3,	// (0x00043d6d) scroll_sc2_right_pane

0x0c1b,	// (0x00043d95) scroll_bg_pane_g1_ParamLimits

0x0c30,	// (0x00043daa) scroll_bg_pane_g2_ParamLimits

0x0c48,	// (0x00043dc2) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00052862) scroll_bg_pane_g_ParamLimits

0x0c1b,	// (0x00043d95) scroll_handle_pane_g1_ParamLimits

0x0c6a,	// (0x00043de4) scroll_handle_pane_g2_ParamLimits

0x0c48,	// (0x00043dc2) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00052869) scroll_handle_pane_g_ParamLimits

0x6ffc,	// (0x0004a176) popup_choice_list_window_ParamLimits

0x6ffc,	// (0x0004a176) popup_choice_list_window

0x8ff1,	// (0x0004c16b) choice_list_pane

0x9073,	// (0x0004c1ed) cell_toolbar_pane_t1

0x909b,	// (0x0004c215) toolbar_button_pane_ParamLimits

0xa14a,	// (0x0004d2c4) ai_gene_pane_1_t2_ParamLimits

0xa14a,	// (0x0004d2c4) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00052a91) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00052a91) ai_gene_pane_1_t

0xb6eb,	// (0x0004e865) scroll_sc2_left_pane_g1

0xb6eb,	// (0x0004e865) scroll_sc2_right_pane_g1

0x6fd4,	// (0x0004a14e) bg_popup_sub_pane_cp10

0xb6f5,	// (0x0004e86f) list_choice_list_pane

0xb70e,	// (0x0004e888) list_single_choice_list_pane_ParamLimits

0xb70e,	// (0x0004e888) list_single_choice_list_pane

0xb726,	// (0x0004e8a0) list_single_choice_list_pane_g1

0x09d3,	// (0x00043b4d) list_single_choice_list_pane_t1_ParamLimits

0x09d3,	// (0x00043b4d) list_single_choice_list_pane_t1

0xb72e,	// (0x0004e8a8) choice_list_pane_g1

0xb736,	// (0x0004e8b0) choice_list_pane_t1

0xe234,	// (0x000513ae) input_focus_pane_cp11

0x0b51,	// (0x00043ccb) title_pane_stacon_g2_ParamLimits

0x0b51,	// (0x00043ccb) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00052848) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00052848) title_pane_stacon_g

0x11d3,	// (0x0004434d) cursor_press_pane

0x70b6,	// (0x0004a230) popup_fep_hwr_window_ParamLimits

0x70b6,	// (0x0004a230) popup_fep_hwr_window

0x7140,	// (0x0004a2ba) popup_fep_vkb_window_ParamLimits

0x7140,	// (0x0004a2ba) popup_fep_vkb_window

0xb744,	// (0x0004e8be) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00052cb2) fep_vkb_side_pane_g_ParamLimits

0x7941,	// (0x0004aabb) fep_hwr_candidate_pane_ParamLimits

0x7941,	// (0x0004aabb) fep_hwr_candidate_pane

0x796b,	// (0x0004aae5) fep_hwr_side_pane_ParamLimits

0x796b,	// (0x0004aae5) fep_hwr_side_pane

0x798d,	// (0x0004ab07) fep_hwr_top_pane_ParamLimits

0x798d,	// (0x0004ab07) fep_hwr_top_pane

0x79a5,	// (0x0004ab1f) fep_hwr_write_pane_ParamLimits

0x79a5,	// (0x0004ab1f) fep_hwr_write_pane

0xfb38,	// (0x00052cb2) fep_vkb_side_pane_g

0xb74c,	// (0x0004e8c6) fep_hwr_top_pane_g1

0xb75e,	// (0x0004e8d8) fep_hwr_top_pane_g2

0x79d1,	// (0x0004ab4b) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00052c8e) fep_hwr_top_pane_g

0x79e6,	// (0x0004ab60) fep_hwr_top_text_pane

0x0d64,	// (0x00043ede) fep_hwr_top_text_pane_g1

0xb794,	// (0x0004e90e) fep_hwr_top_text_pane_t1

0x7af0,	// (0x0004ac6a) fep_hwr_candidate_pane_g1

0xb9df,	// (0x0004eb59) fep_vkb_keypad_pane_g3_ParamLimits

0xb9df,	// (0x0004eb59) fep_vkb_keypad_pane_g3

0xba0b,	// (0x0004eb85) fep_vkb_keypad_pane_g4_ParamLimits

0xba0b,	// (0x0004eb85) fep_vkb_keypad_pane_g4

0xba82,	// (0x0004ebfc) fep_vkb_bottom_pane_g2_ParamLimits

0xba82,	// (0x0004ebfc) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00052cb9) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00052cb9) fep_vkb_bottom_pane_g

0xb6eb,	// (0x0004e865) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00052cc3) cell_vkb_side_pane_g

0xbb0d,	// (0x0004ec87) cell_vkb_side_pane_t1

0xbb1b,	// (0x0004ec95) cell_vkb_side_pane_t1_copy1

0xb6eb,	// (0x0004e865) bg_fep_vkb_candidate_pane_g2

0xbc5f,	// (0x0004edd9) cell_vkb_candidate_pane_ParamLimits

0xb7a2,	// (0x0004e91c) aid_size_cell_vkb_ParamLimits

0xb7a2,	// (0x0004e91c) aid_size_cell_vkb

0xbc5f,	// (0x0004edd9) cell_vkb_candidate_pane

0x7b0a,	// (0x0004ac84) bg_popup_fep_shadow_pane_g1

0xb834,	// (0x0004e9ae) fep_vkb_bottom_pane_ParamLimits

0xb834,	// (0x0004e9ae) fep_vkb_bottom_pane

0xb871,	// (0x0004e9eb) fep_vkb_candidate_pane_ParamLimits

0xb871,	// (0x0004e9eb) fep_vkb_candidate_pane

0xb88d,	// (0x0004ea07) fep_vkb_keypad_pane_ParamLimits

0xb88d,	// (0x0004ea07) fep_vkb_keypad_pane

0xb8c0,	// (0x0004ea3a) fep_vkb_side_pane_ParamLimits

0xb8c0,	// (0x0004ea3a) fep_vkb_side_pane

0xb8fc,	// (0x0004ea76) fep_vkb_top_pane_ParamLimits

0xb8fc,	// (0x0004ea76) fep_vkb_top_pane

0xb938,	// (0x0004eab2) fep_vkb_top_pane_g1_ParamLimits

0xb938,	// (0x0004eab2) fep_vkb_top_pane_g1

0xb947,	// (0x0004eac1) fep_vkb_top_pane_g2_ParamLimits

0xb947,	// (0x0004eac1) fep_vkb_top_pane_g2

0xb956,	// (0x0004ead0) fep_vkb_top_pane_g3_ParamLimits

0xb956,	// (0x0004ead0) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00052ca9) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00052ca9) fep_vkb_top_pane_g

0xb974,	// (0x0004eaee) fep_vkb_top_text_pane_ParamLimits

0xb974,	// (0x0004eaee) fep_vkb_top_text_pane

0xb985,	// (0x0004eaff) fep_vkb_side_pane_g1_ParamLimits

0xb985,	// (0x0004eaff) fep_vkb_side_pane_g1

0xb9ce,	// (0x0004eb48) grid_vkb_side_pane_ParamLimits

0xb9ce,	// (0x0004eb48) grid_vkb_side_pane

0x7b12,	// (0x0004ac8c) bg_popup_fep_shadow_pane_g2

0x7b1b,	// (0x0004ac95) bg_popup_fep_shadow_pane_g3

0x7b23,	// (0x0004ac9d) bg_popup_fep_shadow_pane_g4

0x7b2c,	// (0x0004aca6) bg_popup_fep_shadow_pane_g5

0x7b36,	// (0x0004acb0) bg_popup_fep_shadow_pane_g6

0x7b3e,	// (0x0004acb8) bg_popup_fep_shadow_pane_g7

0x08fd,	// (0x00043a77) bg_popup_fep_shadow_pane_g8

0xba2d,	// (0x0004eba7) grid_vkb_keypad_number_pane_ParamLimits

0xba2d,	// (0x0004eba7) grid_vkb_keypad_number_pane

0xba41,	// (0x0004ebbb) grid_vkb_keypad_pane_ParamLimits

0xba41,	// (0x0004ebbb) grid_vkb_keypad_pane

0xba67,	// (0x0004ebe1) fep_vkb_bottom_pane_g1_ParamLimits

0xba67,	// (0x0004ebe1) fep_vkb_bottom_pane_g1

0xba90,	// (0x0004ec0a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xba90,	// (0x0004ec0a) grid_vkb_keypad_bottom_left_pane

0xbaa5,	// (0x0004ec1f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbaa5,	// (0x0004ec1f) grid_vkb_keypad_bottom_right_pane

0xbaba,	// (0x0004ec34) fep_vkb_top_text_pane_g1

0xbad5,	// (0x0004ec4f) fep_vkb_top_text_pane_t1

0xbaea,	// (0x0004ec64) cell_vkb_side_pane_ParamLimits

0xbaea,	// (0x0004ec64) cell_vkb_side_pane

0xb6eb,	// (0x0004e865) cell_vkb_side_pane_g1

0xbb29,	// (0x0004eca3) cell_vkb_keypad_pane_ParamLimits

0xbb29,	// (0x0004eca3) cell_vkb_keypad_pane

0xbbb6,	// (0x0004ed30) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00052cd6) bg_popup_fep_shadow_pane_g

0xb6eb,	// (0x0004e865) cell_hwr_side_pane_g1

0xb6eb,	// (0x0004e865) cell_hwr_side_pane_g2

0xbbc0,	// (0x0004ed3a) cell_vkb_keypad_pane_t1

0xbbce,	// (0x0004ed48) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbbce,	// (0x0004ed48) cell_vkb_keypad_bottom_left_pane

0xbbeb,	// (0x0004ed65) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbbeb,	// (0x0004ed65) cell_vkb_keypad_bottom_right_pane

0xb6eb,	// (0x0004e865) cell_vkb_keypad_bottom_left_pane_g1

0xb6eb,	// (0x0004e865) cell_vkb_keypad_bottom_right_pane_g1

0xbc24,	// (0x0004ed9e) cell_vkb_keypad_number_pane_ParamLimits

0xbc24,	// (0x0004ed9e) cell_vkb_keypad_number_pane

0xbc43,	// (0x0004edbd) cell_vkb_keypad_number_pane_g1

0xbc4d,	// (0x0004edc7) cell_vkb_keypad_number_pane_g2

0xbc56,	// (0x0004edd0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00052cc8) cell_vkb_keypad_number_pane_g

0xbbc0,	// (0x0004ed3a) cell_vkb_keypad_number_pane_t1

0xbc80,	// (0x0004edfa) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00052cc3) cell_hwr_side_pane_g

0xbc99,	// (0x0004ee13) cell_hwr_side_pane_t1

0x7b50,	// (0x0004acca) cell_hwr_side_pane_t1_copy1

0xb966,	// (0x0004eae0) cell_hwr_candidate_pane_g1

0x7b5e,	// (0x0004acd8) cell_hwr_candidate_pane_t1

0xb6eb,	// (0x0004e865) cell_vkb_candidate_pane_g2

0xbd1f,	// (0x0004ee99) cell_vkb_candidate_pane_t1

0xf540,	// (0x000526ba) bg_popup_fep_shadow_pane_ParamLimits

0xf540,	// (0x000526ba) bg_popup_fep_shadow_pane

0x23ed,	// (0x00045567) bg_fep_hwr_top_pane_g4

0xb770,	// (0x0004e8ea) bg_hwr_side_pane_g1_ParamLimits

0xb770,	// (0x0004e8ea) bg_hwr_side_pane_g1

0x7a24,	// (0x0004ab9e) cell_hwr_side_pane_ParamLimits

0x7a24,	// (0x0004ab9e) cell_hwr_side_pane

0x7a61,	// (0x0004abdb) fep_hwr_write_pane_g1_ParamLimits

0x7a61,	// (0x0004abdb) fep_hwr_write_pane_g1

0x7a6e,	// (0x0004abe8) fep_hwr_write_pane_g2_ParamLimits

0x7a6e,	// (0x0004abe8) fep_hwr_write_pane_g2

0x7a7b,	// (0x0004abf5) fep_hwr_write_pane_g3_ParamLimits

0x7a7b,	// (0x0004abf5) fep_hwr_write_pane_g3

0x7a89,	// (0x0004ac03) fep_hwr_write_pane_g4_ParamLimits

0x7a89,	// (0x0004ac03) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00052c95) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00052c95) fep_hwr_write_pane_g

0x23ed,	// (0x00045567) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x23ed,	// (0x00045567) bg_fep_hwr_candidate_pane_g2

0x7a9e,	// (0x0004ac18) cell_hwr_candidate_pane_ParamLimits

0x7a9e,	// (0x0004ac18) cell_hwr_candidate_pane

0x7af0,	// (0x0004ac6a) fep_hwr_candidate_pane_g1_ParamLimits

0xb7d0,	// (0x0004e94a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb7d0,	// (0x0004e94a) bg_popup_fep_shadow_pane_cp2

0xb966,	// (0x0004eae0) fep_vkb_top_pane_g4_ParamLimits

0xb966,	// (0x0004eae0) fep_vkb_top_pane_g4

0xb9ac,	// (0x0004eb26) fep_vkb_side_pane_g2_ParamLimits

0xb9ac,	// (0x0004eb26) fep_vkb_side_pane_g2

0x5168,	// (0x000482e2) list_setting_pane_t4_ParamLimits

0x5168,	// (0x000482e2) list_setting_pane_t4

0x5204,	// (0x0004837e) list_setting_number_pane_t5_ParamLimits

0x5204,	// (0x0004837e) list_setting_number_pane_t5

0x67fd,	// (0x00049977) list_double_heading_pane_cp2_ParamLimits

0x67fd,	// (0x00049977) list_double_heading_pane_cp2

0xbd2d,	// (0x0004eea7) list_double_heading_pane_g1_cp2_ParamLimits

0xbd2d,	// (0x0004eea7) list_double_heading_pane_g1_cp2

0xbd39,	// (0x0004eeb3) list_double_heading_pane_g2_cp2_ParamLimits

0xbd39,	// (0x0004eeb3) list_double_heading_pane_g2_cp2

0xbd4d,	// (0x0004eec7) list_double_heading_pane_t1_cp2_ParamLimits

0xbd4d,	// (0x0004eec7) list_double_heading_pane_t1_cp2

0xbd63,	// (0x0004eedd) list_double_heading_pane_t2_cp2_ParamLimits

0xbd63,	// (0x0004eedd) list_double_heading_pane_t2_cp2

0xe22c,	// (0x000513a6) aid_value_unit2

0x5f43,	// (0x000490bd) popup_preview_fixed_window

0xe3e3,	// (0x0005155d) bg_popup_preview_window_pane_cp02

0xbd75,	// (0x0004eeef) list_preview_fixed_pane

0xbdbb,	// (0x0004ef35) list_empty_pane_fp_ParamLimits

0xbdbb,	// (0x0004ef35) list_empty_pane_fp

0xbdbb,	// (0x0004ef35) list_single_cale_day_pane_fp_ParamLimits

0xbdbb,	// (0x0004ef35) list_single_cale_day_pane_fp

0xbdbb,	// (0x0004ef35) list_single_graphic_heading_pane_fp_ParamLimits

0xbdbb,	// (0x0004ef35) list_single_graphic_heading_pane_fp

0xbdbb,	// (0x0004ef35) list_single_graphic_pane_fp_ParamLimits

0xbdbb,	// (0x0004ef35) list_single_graphic_pane_fp

0xbdbb,	// (0x0004ef35) list_single_heading_pane_fp_ParamLimits

0xbdbb,	// (0x0004ef35) list_single_heading_pane_fp

0xbdbb,	// (0x0004ef35) list_single_pane_fp_ParamLimits

0xbdbb,	// (0x0004ef35) list_single_pane_fp

0xbdd4,	// (0x0004ef4e) list_single_pane_fp_g1_ParamLimits

0xbdd4,	// (0x0004ef4e) list_single_pane_fp_g1

0xbd2d,	// (0x0004eea7) list_single_pane_fp_g2_ParamLimits

0xbd2d,	// (0x0004eea7) list_single_pane_fp_g2

0xbd39,	// (0x0004eeb3) list_single_pane_fp_g3_ParamLimits

0xbd39,	// (0x0004eeb3) list_single_pane_fp_g3

0xbde0,	// (0x0004ef5a) list_single_pane_fp_g4_ParamLimits

0xbde0,	// (0x0004ef5a) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x00052cf7) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x00052cf7) list_single_pane_fp_g

0x59cf,	// (0x00048b49) list_single_pane_fp_t1_ParamLimits

0x59cf,	// (0x00048b49) list_single_pane_fp_t1

0x59e6,	// (0x00048b60) list_single_graphic_pane_fp_g1_ParamLimits

0x59e6,	// (0x00048b60) list_single_graphic_pane_fp_g1

0xbdd4,	// (0x0004ef4e) list_single_graphic_pane_fp_g2_ParamLimits

0xbdd4,	// (0x0004ef4e) list_single_graphic_pane_fp_g2

0xbd2d,	// (0x0004eea7) list_single_graphic_pane_fp_g3_ParamLimits

0xbd2d,	// (0x0004eea7) list_single_graphic_pane_fp_g3

0xbd39,	// (0x0004eeb3) list_single_graphic_pane_fp_g4_ParamLimits

0xbd39,	// (0x0004eeb3) list_single_graphic_pane_fp_g4

0xbde0,	// (0x0004ef5a) list_single_graphic_pane_fp_g5_ParamLimits

0xbde0,	// (0x0004ef5a) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x00052d00) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x00052d00) list_single_graphic_pane_fp_g

0x59f2,	// (0x00048b6c) list_single_graphic_pane_fp_t1_ParamLimits

0x59f2,	// (0x00048b6c) list_single_graphic_pane_fp_t1

0x59e6,	// (0x00048b60) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x59e6,	// (0x00048b60) list_single_graphic_heading_pane_fp_g1

0xbdd4,	// (0x0004ef4e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbdd4,	// (0x0004ef4e) list_single_graphic_heading_pane_fp_g2

0xbd2d,	// (0x0004eea7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbd2d,	// (0x0004eea7) list_single_graphic_heading_pane_fp_g3

0xbd39,	// (0x0004eeb3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbd39,	// (0x0004eeb3) list_single_graphic_heading_pane_fp_g4

0xbde0,	// (0x0004ef5a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbde0,	// (0x0004ef5a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00052d00) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00052d00) list_single_graphic_heading_pane_fp_g

0x5a08,	// (0x00048b82) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a08,	// (0x00048b82) list_single_graphic_heading_pane_fp_t1

0x5a1e,	// (0x00048b98) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a1e,	// (0x00048b98) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00052d0b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00052d0b) list_single_graphic_heading_pane_fp_t

0x5a30,	// (0x00048baa) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a30,	// (0x00048baa) list_single_cale_day_pane_fp_g1

0xbdec,	// (0x0004ef66) list_single_cale_day_pane_fp_g2_ParamLimits

0xbdec,	// (0x0004ef66) list_single_cale_day_pane_fp_g2

0x7b7c,	// (0x0004acf6) list_single_cale_day_pane_fp_g3_ParamLimits

0x7b7c,	// (0x0004acf6) list_single_cale_day_pane_fp_g3

0x7ba4,	// (0x0004ad1e) list_single_cale_day_pane_fp_g4_ParamLimits

0x7ba4,	// (0x0004ad1e) list_single_cale_day_pane_fp_g4

0x7bc8,	// (0x0004ad42) list_single_cale_day_pane_fp_g5_ParamLimits

0x7bc8,	// (0x0004ad42) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x00052d10) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x00052d10) list_single_cale_day_pane_fp_g

0x5a68,	// (0x00048be2) list_single_cale_day_pane_fp_t1_ParamLimits

0x5a68,	// (0x00048be2) list_single_cale_day_pane_fp_t1

0x5a8e,	// (0x00048c08) list_single_cale_day_pane_fp_t2_ParamLimits

0x5a8e,	// (0x00048c08) list_single_cale_day_pane_fp_t2

0x5aa7,	// (0x00048c21) list_single_cale_day_pane_fp_t3_ParamLimits

0x5aa7,	// (0x00048c21) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x00052d1b) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x00052d1b) list_single_cale_day_pane_fp_t

0xbdd4,	// (0x0004ef4e) list_empty_pane_fp_g1_ParamLimits

0xbdd4,	// (0x0004ef4e) list_empty_pane_fp_g1

0x5ac0,	// (0x00048c3a) list_empty_pane_fp_t1

0x5ace,	// (0x00048c48) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x00052d22) list_empty_pane_fp_t

0xbdd4,	// (0x0004ef4e) list_single_heading_pane_fp_g1_ParamLimits

0xbdd4,	// (0x0004ef4e) list_single_heading_pane_fp_g1

0xbd2d,	// (0x0004eea7) list_single_heading_pane_fp_g2_ParamLimits

0xbd2d,	// (0x0004eea7) list_single_heading_pane_fp_g2

0xbd39,	// (0x0004eeb3) list_single_heading_pane_fp_g3_ParamLimits

0xbd39,	// (0x0004eeb3) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x00052d27) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00052d27) list_single_heading_pane_fp_g

0x5adc,	// (0x00048c56) list_single_heading_pane_fp_t1_ParamLimits

0x5adc,	// (0x00048c56) list_single_heading_pane_fp_t1

0x5aee,	// (0x00048c68) list_single_heading_pane_fp_t2_ParamLimits

0x5aee,	// (0x00048c68) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x00052d2e) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x00052d2e) list_single_heading_pane_fp_t

0x09e8,	// (0x00043b62) aid_size_cell_fast

0xe3b8,	// (0x00051532) soft_indicator_pane_cp1_t1

0x0a25,	// (0x00043b9f) cell_app_pane_cp2_ParamLimits

0x0a25,	// (0x00043b9f) cell_app_pane_cp2

0x792a,	// (0x0004aaa4) fep_hwr_candidate_drop_down_list_pane

0x285f,	// (0x000459d9) fep_hwr_candidate_pane_g3_ParamLimits

0x285f,	// (0x000459d9) fep_hwr_candidate_pane_g3

0x286c,	// (0x000459e6) fep_hwr_candidate_pane_g4_ParamLimits

0x286c,	// (0x000459e6) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00052ca2) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00052ca2) fep_hwr_candidate_pane_g

0xb860,	// (0x0004e9da) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb860,	// (0x0004e9da) fep_vkb_candidate_drop_down_list_pane

0xbc88,	// (0x0004ee02) fep_vkb_candidate_pane_g3

0xbc90,	// (0x0004ee0a) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00052ccf) fep_vkb_candidate_pane_g

0xb966,	// (0x0004eae0) cell_hwr_candidate_pane_g1_ParamLimits

0xbca7,	// (0x0004ee21) cell_hwr_candidate_pane_g3_ParamLimits

0xbca7,	// (0x0004ee21) cell_hwr_candidate_pane_g3

0xbcc8,	// (0x0004ee42) cell_hwr_candidate_pane_g4_ParamLimits

0xbcc8,	// (0x0004ee42) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x00052ce9) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x00052ce9) cell_hwr_candidate_pane_g

0xbce9,	// (0x0004ee63) cell_vkb_candidate_pane_g3_ParamLimits

0xbce9,	// (0x0004ee63) cell_vkb_candidate_pane_g3

0xbd04,	// (0x0004ee7e) cell_vkb_candidate_pane_g4_ParamLimits

0xbd04,	// (0x0004ee7e) cell_vkb_candidate_pane_g4

0xbdf8,	// (0x0004ef72) cell_app_pane_cp2_g1_ParamLimits

0xbdf8,	// (0x0004ef72) cell_app_pane_cp2_g1

0xbe16,	// (0x0004ef90) cell_app_pane_cp2_g2_ParamLimits

0xbe16,	// (0x0004ef90) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x00052d33) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x00052d33) cell_app_pane_cp2_g

0xbe22,	// (0x0004ef9c) cell_app_pane_cp2_t1_ParamLimits

0xbe22,	// (0x0004ef9c) cell_app_pane_cp2_t1

0x0882,	// (0x000439fc) grid_highlight_pane_cp1_ParamLimits

0x0882,	// (0x000439fc) grid_highlight_pane_cp1

0x7bec,	// (0x0004ad66) cell_hwr_candidate_pane_cp1_ParamLimits

0x7bec,	// (0x0004ad66) cell_hwr_candidate_pane_cp1

0xb966,	// (0x0004eae0) fep_hwr_candidate_drop_down_list_pane_g1

0xbe34,	// (0x0004efae) fep_hwr_candidate_drop_down_list_pane_g2

0xbe41,	// (0x0004efbb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00052d38) fep_hwr_candidate_drop_down_list_pane_g

0x7c10,	// (0x0004ad8a) fep_hwr_candidate_drop_down_list_scroll_pane

0x7c19,	// (0x0004ad93) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c19,	// (0x0004ad93) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7c26,	// (0x0004ada0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c26,	// (0x0004ada0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7c33,	// (0x0004adad) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c33,	// (0x0004adad) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbce9,	// (0x0004ee63) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbce9,	// (0x0004ee63) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbd04,	// (0x0004ee7e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbd04,	// (0x0004ee7e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7c40,	// (0x0004adba) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c40,	// (0x0004adba) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7c5b,	// (0x0004add5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c5b,	// (0x0004add5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7c76,	// (0x0004adf0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c76,	// (0x0004adf0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x00052d3f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x00052d3f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbe4e,	// (0x0004efc8) cell_vkb_candidate_pane_cp1_ParamLimits

0xbe4e,	// (0x0004efc8) cell_vkb_candidate_pane_cp1

0xb966,	// (0x0004eae0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb966,	// (0x0004eae0) fep_vkb_candidate_drop_down_list_pane_g1

0xbe34,	// (0x0004efae) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbe34,	// (0x0004efae) fep_vkb_candidate_drop_down_list_pane_g2

0xbe41,	// (0x0004efbb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbe41,	// (0x0004efbb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00052d38) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x00052d38) fep_vkb_candidate_drop_down_list_pane_g

0xbe74,	// (0x0004efee) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbe74,	// (0x0004efee) fep_vkb_candidate_drop_down_list_scroll_pane

0xbe81,	// (0x0004effb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbe81,	// (0x0004effb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbe8e,	// (0x0004f008) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbe8e,	// (0x0004f008) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbe9a,	// (0x0004f014) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbe9a,	// (0x0004f014) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbca7,	// (0x0004ee21) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbca7,	// (0x0004ee21) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbcc8,	// (0x0004ee42) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbcc8,	// (0x0004ee42) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbea6,	// (0x0004f020) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbea6,	// (0x0004f020) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbec7,	// (0x0004f041) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbec7,	// (0x0004f041) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbee8,	// (0x0004f062) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbee8,	// (0x0004f062) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00052d50) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00052d50) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6063,	// (0x000491dd) title_pane_g1_ParamLimits

0x6070,	// (0x000491ea) title_pane_g2_ParamLimits

0xf54e,	// (0x000526c8) title_pane_g_ParamLimits

0x0d5c,	// (0x00043ed6) aid_call2_pane

0x0d54,	// (0x00043ece) aid_call_pane

0x0d64,	// (0x00043ede) popup_clock_analogue_window_g1

0x0d64,	// (0x00043ede) popup_clock_analogue_window_g2

0x67de,	// (0x00049958) popup_clock_analogue_window_g3

0x67e7,	// (0x00049961) popup_clock_analogue_window_g4

0xe23e,	// (0x000513b8) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00052877) popup_clock_analogue_window_g

0x67ef,	// (0x00049969) popup_clock_analogue_window_t1

0x6830,	// (0x000499aa) clock_digital_number_pane_ParamLimits

0x6830,	// (0x000499aa) clock_digital_number_pane

0x683c,	// (0x000499b6) clock_digital_number_pane_cp02_ParamLimits

0x683c,	// (0x000499b6) clock_digital_number_pane_cp02

0x6848,	// (0x000499c2) clock_digital_number_pane_cp03_ParamLimits

0x6848,	// (0x000499c2) clock_digital_number_pane_cp03

0x6854,	// (0x000499ce) clock_digital_number_pane_cp04_ParamLimits

0x6854,	// (0x000499ce) clock_digital_number_pane_cp04

0x6860,	// (0x000499da) clock_digital_separator_pane_ParamLimits

0x6860,	// (0x000499da) clock_digital_separator_pane

0x686c,	// (0x000499e6) popup_clock_digital_window_t1_ParamLimits

0x686c,	// (0x000499e6) popup_clock_digital_window_t1

0xe23e,	// (0x000513b8) clock_digital_number_pane_g1

0xe23e,	// (0x000513b8) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00052882) clock_digital_number_pane_g

0xe23e,	// (0x000513b8) clock_digital_separator_pane_g1

0xe23e,	// (0x000513b8) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00052882) clock_digital_separator_pane_g

0x8b9d,	// (0x0004bd17) aid_fill_nsta_ParamLimits

0x8ced,	// (0x0004be67) indicator_nsta_pane_ParamLimits

0x8e7e,	// (0x0004bff8) popup_clock_analogue_window

0x8e7e,	// (0x0004bff8) popup_clock_digital_window

0xe2a2,	// (0x0005141c) grid_indicator_nsta_pane_ParamLimits

0xb11e,	// (0x0004e298) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00052c22) clock_nsta_pane_t

0x6747,	// (0x000498c1) aid_size_max_handle

0x6751,	// (0x000498cb) aid_size_min_handle

0x11d3,	// (0x0004434d) editor_scroll_pane

0xbf03,	// (0x0004f07d) ex_editor_pane

0x09ae,	// (0x00043b28) scroll_pane_cp13

0x0821,	// (0x0004399b) scroll_pane_cp14

0x0d93,	// (0x00043f0d) scroll_pane_cp36

0x6813,	// (0x0004998d) list_single_graphic_hl_pane_cp2_ParamLimits

0x6813,	// (0x0004998d) list_single_graphic_hl_pane_cp2

0x772c,	// (0x0004a8a6) list_single_graphic_hl_pane_ParamLimits

0x772c,	// (0x0004a8a6) list_single_graphic_hl_pane

0x5b04,	// (0x00048c7e) aid_size_min_hl_cp1

0xbf0b,	// (0x0004f085) list_highlight_pane_cp34_ParamLimits

0xbf0b,	// (0x0004f085) list_highlight_pane_cp34

0xbf1c,	// (0x0004f096) list_single_graphic_hl_pane_g1_ParamLimits

0xbf1c,	// (0x0004f096) list_single_graphic_hl_pane_g1

0x5b0d,	// (0x00048c87) list_single_graphic_hl_pane_g2_ParamLimits

0x5b0d,	// (0x00048c87) list_single_graphic_hl_pane_g2

0x5b0d,	// (0x00048c87) list_single_graphic_hl_pane_g3_ParamLimits

0x5b0d,	// (0x00048c87) list_single_graphic_hl_pane_g3

0x7821,	// (0x0004a99b) list_single_graphic_hl_pane_g4_ParamLimits

0x7821,	// (0x0004a99b) list_single_graphic_hl_pane_g4

0x7c91,	// (0x0004ae0b) list_single_graphic_hl_pane_g5_ParamLimits

0x7c91,	// (0x0004ae0b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00052d61) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00052d61) list_single_graphic_hl_pane_g

0x5b19,	// (0x00048c93) list_single_graphic_hl_pane_t1_ParamLimits

0x5b19,	// (0x00048c93) list_single_graphic_hl_pane_t1

0xbf29,	// (0x0004f0a3) aid_size_min_hl_cp2

0xbf32,	// (0x0004f0ac) list_highlight_pane_cp34_cp2_ParamLimits

0xbf32,	// (0x0004f0ac) list_highlight_pane_cp34_cp2

0xbf1c,	// (0x0004f096) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbf1c,	// (0x0004f096) list_single_graphic_hl_pane_g1_cp2

0xbf3f,	// (0x0004f0b9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbf3f,	// (0x0004f0b9) list_single_graphic_hl_pane_g2_cp2

0xbf4b,	// (0x0004f0c5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbf4b,	// (0x0004f0c5) list_single_graphic_hl_pane_g3_cp2

0x1bdf,	// (0x00044d59) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1bdf,	// (0x00044d59) list_single_graphic_hl_pane_g4_cp2

0xbf59,	// (0x0004f0d3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbf59,	// (0x0004f0d3) list_single_graphic_hl_pane_g5_cp2

0x6e2d,	// (0x00049fa7) control_pane_g4_ParamLimits

0x6e2d,	// (0x00049fa7) control_pane_g4

0x6fd4,	// (0x0004a14e) bg_popup_sub_pane_cp10_ParamLimits

0xb6f5,	// (0x0004e86f) list_choice_list_pane_ParamLimits

0xb704,	// (0x0004e87e) scroll_pane_cp23

0xe3e3,	// (0x0005155d) bg_popup_preview_window_pane_cp02_ParamLimits

0xbd75,	// (0x0004eeef) list_preview_fixed_pane_ParamLimits

0xbd8b,	// (0x0004ef05) list_preview_fixed_pane_cp_ParamLimits

0xbd8b,	// (0x0004ef05) list_preview_fixed_pane_cp

0xbd97,	// (0x0004ef11) popup_preview_fixed_window_g1_ParamLimits

0xbd97,	// (0x0004ef11) popup_preview_fixed_window_g1

0xbda3,	// (0x0004ef1d) popup_preview_fixed_window_g2_ParamLimits

0xbda3,	// (0x0004ef1d) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x00052cf0) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x00052cf0) popup_preview_fixed_window_g

0x6636,	// (0x000497b0) aid_navi_side_left_pane_ParamLimits

0x664b,	// (0x000497c5) aid_navi_side_right_pane_ParamLimits

0x6663,	// (0x000497dd) navi_icon_pane_stacon_ParamLimits

0x6677,	// (0x000497f1) navi_navi_pane_stacon_ParamLimits

0x6663,	// (0x000497dd) navi_text_pane_stacon_ParamLimits

0xe234,	// (0x000513ae) main_text_info_pane

0xbf83,	// (0x0004f0fd) listscroll_text_info_pane

0xbf8b,	// (0x0004f105) list_text_info_pane_ParamLimits

0xbf8b,	// (0x0004f105) list_text_info_pane

0xbf9a,	// (0x0004f114) scroll_pane_cp24_ParamLimits

0xbf9a,	// (0x0004f114) scroll_pane_cp24

0xbfb8,	// (0x0004f132) list_text_info_pane_t1_ParamLimits

0xbfb8,	// (0x0004f132) list_text_info_pane_t1

0x701e,	// (0x0004a198) popup_fast_swap2_window_ParamLimits

0x701e,	// (0x0004a198) popup_fast_swap2_window

0xbfdd,	// (0x0004f157) aid_size_cell_fast2

0xe234,	// (0x000513ae) bg_popup_window_pane_cp17

0x94db,	// (0x0004c655) heading_pane_cp2

0xe5e9,	// (0x00051763) listscroll_fast2_pane

0xbfe7,	// (0x0004f161) grid_fast2_pane

0xbff1,	// (0x0004f16b) listscroll_fast2_pane_g1

0xbffb,	// (0x0004f175) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00052d6c) listscroll_fast2_pane_g

0x09ae,	// (0x00043b28) scroll_pane_cp26

0xc005,	// (0x0004f17f) cell_fast2_pane_ParamLimits

0xc005,	// (0x0004f17f) cell_fast2_pane

0xc01c,	// (0x0004f196) cell_fast2_pane_g1

0xc025,	// (0x0004f19f) cell_fast2_pane_g2

0xc02e,	// (0x0004f1a8) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00052d71) cell_fast2_pane_g

0xe62b,	// (0x000517a5) grid_highlight_pane_cp9

0xe640,	// (0x000517ba) main_eswt_pane_ParamLimits

0xe640,	// (0x000517ba) main_eswt_pane

0xbfaf,	// (0x0004f129) list_single_text_info_pane

0xc036,	// (0x0004f1b0) eswt_ctrl_button_pane

0xc036,	// (0x0004f1b0) eswt_ctrl_canvas_pane

0xc03e,	// (0x0004f1b8) eswt_ctrl_combo_pane

0xc036,	// (0x0004f1b0) eswt_ctrl_default_pane

0xc036,	// (0x0004f1b0) eswt_ctrl_label_pane

0xc046,	// (0x0004f1c0) eswt_ctrl_wait_pane

0xc04e,	// (0x0004f1c8) eswt_shell_pane

0xe234,	// (0x000513ae) listscroll_eswt_app_pane

0xc06e,	// (0x0004f1e8) popup_eswt_tasktip_window_ParamLimits

0xc06e,	// (0x0004f1e8) popup_eswt_tasktip_window

0x911b,	// (0x0004c295) bg_popup_window_pane_cp18

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_ParamLimits

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1

0xc08c,	// (0x0004f206) eswt_control_pane_g2_ParamLimits

0xc08c,	// (0x0004f206) eswt_control_pane_g2

0xc099,	// (0x0004f213) eswt_control_pane_g3_ParamLimits

0xc099,	// (0x0004f213) eswt_control_pane_g3

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_ParamLimits

0xc0a6,	// (0x0004f220) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00052d78) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00052d78) eswt_control_pane_g

0x0882,	// (0x000439fc) bg_button_pane_ParamLimits

0x0882,	// (0x000439fc) bg_button_pane

0xe640,	// (0x000517ba) common_borders_pane_copy2_ParamLimits

0xe640,	// (0x000517ba) common_borders_pane_copy2

0xc0b3,	// (0x0004f22d) control_button_pane_g1_ParamLimits

0xc0b3,	// (0x0004f22d) control_button_pane_g1

0xc0bf,	// (0x0004f239) control_button_pane_g2_ParamLimits

0xc0bf,	// (0x0004f239) control_button_pane_g2

0xc0cb,	// (0x0004f245) control_button_pane_g3_ParamLimits

0xc0cb,	// (0x0004f245) control_button_pane_g3

0x0002,

0xfc07,	// (0x00052d81) control_button_pane_g_ParamLimits

0xfc07,	// (0x00052d81) control_button_pane_g

0xc0df,	// (0x0004f259) control_button_pane_t1

0xc0ed,	// (0x0004f267) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00052d88) control_button_pane_t

0x90a7,	// (0x0004c221) bg_button_pane_g1

0x90af,	// (0x0004c229) bg_button_pane_g2

0x90b7,	// (0x0004c231) bg_button_pane_g3

0x90bf,	// (0x0004c239) bg_button_pane_g4

0x90c7,	// (0x0004c241) bg_button_pane_g5

0x90cf,	// (0x0004c249) bg_button_pane_g6

0x90d7,	// (0x0004c251) bg_button_pane_g7

0x90df,	// (0x0004c259) bg_button_pane_g8

0x90e7,	// (0x0004c261) bg_button_pane_g9

0x0008,

0xf86b,	// (0x000529e5) bg_button_pane_g

0xb6b0,	// (0x0004e82a) common_borders_pane_ParamLimits

0xb6b0,	// (0x0004e82a) common_borders_pane

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_copy1_ParamLimits

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_copy1

0xc08c,	// (0x0004f206) eswt_control_pane_g2_copy1_ParamLimits

0xc08c,	// (0x0004f206) eswt_control_pane_g2_copy1

0xc099,	// (0x0004f213) eswt_control_pane_g3_copy1_ParamLimits

0xc099,	// (0x0004f213) eswt_control_pane_g3_copy1

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_copy1_ParamLimits

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_copy1

0xb6eb,	// (0x0004e865) bg_eswt_ctrl_canvas_pane_g1

0xb6b0,	// (0x0004e82a) common_borders_pane_cp2_ParamLimits

0xb6b0,	// (0x0004e82a) common_borders_pane_cp2

0xb6b0,	// (0x0004e82a) common_borders_pane_cp3_ParamLimits

0xb6b0,	// (0x0004e82a) common_borders_pane_cp3

0xc0fb,	// (0x0004f275) separator_horizontal_pane

0xc103,	// (0x0004f27d) separator_vertical_pane

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_copy2_ParamLimits

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_copy2

0xc08c,	// (0x0004f206) eswt_control_pane_g2_copy2_ParamLimits

0xc08c,	// (0x0004f206) eswt_control_pane_g2_copy2

0xc099,	// (0x0004f213) eswt_control_pane_g3_copy2_ParamLimits

0xc099,	// (0x0004f213) eswt_control_pane_g3_copy2

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_copy2_ParamLimits

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_copy2

0xe234,	// (0x000513ae) common_borders_pane_cp4

0xc10c,	// (0x0004f286) separator_horizontal_pane_g1

0xc115,	// (0x0004f28f) separator_horizontal_pane_g2

0xc11e,	// (0x0004f298) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00052d8d) separator_horizontal_pane_g

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_copy3_ParamLimits

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_copy3

0xc08c,	// (0x0004f206) eswt_control_pane_g2_copy3_ParamLimits

0xc08c,	// (0x0004f206) eswt_control_pane_g2_copy3

0xc099,	// (0x0004f213) eswt_control_pane_g3_copy3_ParamLimits

0xc099,	// (0x0004f213) eswt_control_pane_g3_copy3

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_copy3_ParamLimits

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_copy3

0xe234,	// (0x000513ae) common_borders_pane_cp5

0xc127,	// (0x0004f2a1) separator_vertical_pane_g1

0xc130,	// (0x0004f2aa) separator_vertical_pane_g2

0xc139,	// (0x0004f2b3) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00052d94) separator_vertical_pane_g

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_copy4_ParamLimits

0xc07f,	// (0x0004f1f9) eswt_control_pane_g1_copy4

0xc08c,	// (0x0004f206) eswt_control_pane_g2_copy4_ParamLimits

0xc08c,	// (0x0004f206) eswt_control_pane_g2_copy4

0xc099,	// (0x0004f213) eswt_control_pane_g3_copy4_ParamLimits

0xc099,	// (0x0004f213) eswt_control_pane_g3_copy4

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_copy4_ParamLimits

0xc0a6,	// (0x0004f220) eswt_control_pane_g4_copy4

0xc142,	// (0x0004f2bc) eswt_ctrl_combo_button_pane

0xc14a,	// (0x0004f2c4) eswt_ctrl_input_pane

0xc152,	// (0x0004f2cc) popup_choice_list_window_cp70

0xc15a,	// (0x0004f2d4) eswt_ctrl_input_pane_t1

0xe234,	// (0x000513ae) input_focus_pane_cp70

0xb6b0,	// (0x0004e82a) bg_button_pane_cp70_ParamLimits

0xb6b0,	// (0x0004e82a) bg_button_pane_cp70

0xc168,	// (0x0004f2e2) eswt_ctrl_combo_button_pane_g1

0xc170,	// (0x0004f2ea) wait_bar_pane_cp70

0x911b,	// (0x0004c295) bg_popup_window_pane_cp70_ParamLimits

0x911b,	// (0x0004c295) bg_popup_window_pane_cp70

0xc178,	// (0x0004f2f2) popup_eswt_tasktip_window_t1

0xc18e,	// (0x0004f308) wait_bar_pane_cp71_ParamLimits

0xc18e,	// (0x0004f308) wait_bar_pane_cp71

0xc19a,	// (0x0004f314) grid_eswt_app_pane

0x0bf3,	// (0x00043d6d) scroll_pane_cp70

0xc1a3,	// (0x0004f31d) cell_eswt_app_pane_ParamLimits

0xc1a3,	// (0x0004f31d) cell_eswt_app_pane

0xc1d5,	// (0x0004f34f) cell_eswt_app_pane_g1_ParamLimits

0xc1d5,	// (0x0004f34f) cell_eswt_app_pane_g1

0xc204,	// (0x0004f37e) cell_eswt_app_pane_g2_ParamLimits

0xc204,	// (0x0004f37e) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00052d9b) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00052d9b) cell_eswt_app_pane_g

0xc22d,	// (0x0004f3a7) cell_eswt_app_pane_t1_ParamLimits

0xc22d,	// (0x0004f3a7) cell_eswt_app_pane_t1

0xc25f,	// (0x0004f3d9) grid_highlight_pane_cp70_ParamLimits

0xc25f,	// (0x0004f3d9) grid_highlight_pane_cp70

0x10cc,	// (0x00044246) set_content_pane_g1

0x6dc3,	// (0x00049f3d) status_small_volume_pane

0x7ca5,	// (0x0004ae1f) status_small_volume_pane_g1

0x7cad,	// (0x0004ae27) volume_small2_pane

0x7cb6,	// (0x0004ae30) volume_small2_pane_g1

0x7cbf,	// (0x0004ae39) volume_small2_pane_g2

0x7cc8,	// (0x0004ae42) volume_small2_pane_g3

0x7cd1,	// (0x0004ae4b) volume_small2_pane_g4

0x7cda,	// (0x0004ae54) volume_small2_pane_g5

0x7ce3,	// (0x0004ae5d) volume_small2_pane_g6

0x7cec,	// (0x0004ae66) volume_small2_pane_g7

0x7cf5,	// (0x0004ae6f) volume_small2_pane_g8

0x7cfe,	// (0x0004ae78) volume_small2_pane_g9

0x7d07,	// (0x0004ae81) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00052da0) volume_small2_pane_g

0xbaba,	// (0x0004ec34) fep_vkb_top_text_pane_g1_ParamLimits

0xbad5,	// (0x0004ec4f) fep_vkb_top_text_pane_t1_ParamLimits

0xbdaf,	// (0x0004ef29) popup_preview_fixed_window_g3_ParamLimits

0xbdaf,	// (0x0004ef29) popup_preview_fixed_window_g3

0x8ac1,	// (0x0004bc3b) popup_toolbar_trans_pane

0xa45f,	// (0x0004d5d9) aid_height_set_list_ParamLimits

0xa470,	// (0x0004d5ea) aid_size_parent_ParamLimits

0x6fd4,	// (0x0004a14e) list_highlight_pane_cp2_ParamLimits

0x10cc,	// (0x00044246) set_content_pane_g1_ParamLimits

0xa6c5,	// (0x0004d83f) list_single_image_pane_ParamLimits

0xa6c5,	// (0x0004d83f) list_single_image_pane

0xc26b,	// (0x0004f3e5) aid_size_cell_image_ParamLimits

0xc26b,	// (0x0004f3e5) aid_size_cell_image

0xc278,	// (0x0004f3f2) grid_single_image_pane_ParamLimits

0xc278,	// (0x0004f3f2) grid_single_image_pane

0x0890,	// (0x00043a0a) list_single_image_pane_g1_ParamLimits

0x0890,	// (0x00043a0a) list_single_image_pane_g1

0x089c,	// (0x00043a16) list_single_image_pane_g2_ParamLimits

0x089c,	// (0x00043a16) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00052db5) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00052db5) list_single_image_pane_g

0xc286,	// (0x0004f400) list_single_image_pane_t1_ParamLimits

0xc286,	// (0x0004f400) list_single_image_pane_t1

0xc29c,	// (0x0004f416) cell_image_list_pane_ParamLimits

0xc29c,	// (0x0004f416) cell_image_list_pane

0xc2b2,	// (0x0004f42c) cell_image_list_pane_g1

0xc2bb,	// (0x0004f435) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00052dba) cell_image_list_pane_g

0xc2c4,	// (0x0004f43e) aid_size_cell_tb_trans_pane

0x0882,	// (0x000439fc) bg_tb_trans_pane

0xc2d6,	// (0x0004f450) grid_tb_trans_pane

0x90a7,	// (0x0004c221) bg_tb_trans_pane_g1

0x90af,	// (0x0004c229) bg_tb_trans_pane_g2

0x90b7,	// (0x0004c231) bg_tb_trans_pane_g3

0x90bf,	// (0x0004c239) bg_tb_trans_pane_g4

0x90c7,	// (0x0004c241) bg_tb_trans_pane_g5

0x90df,	// (0x0004c259) bg_tb_trans_pane_g6

0x90e7,	// (0x0004c261) bg_tb_trans_pane_g7

0x90cf,	// (0x0004c249) bg_tb_trans_pane_g8

0x90d7,	// (0x0004c251) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00052dbf) bg_tb_trans_pane_g

0xc2ea,	// (0x0004f464) cell_toolbar_trans_pane_ParamLimits

0xc2ea,	// (0x0004f464) cell_toolbar_trans_pane

0xb6eb,	// (0x0004e865) cell_toolbar_trans_pane_g1

0xb30f,	// (0x0004e489) list_form2_midp_pane_t1

0xb31d,	// (0x0004e497) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00052c68) list_form2_midp_pane_t

0xb32b,	// (0x0004e4a5) scroll_pane_cp51_ParamLimits

0xb4f2,	// (0x0004e66c) form2_midp_wait_pane_g1

0xb4fb,	// (0x0004e675) form2_midp_wait_pane_g2

0xb504,	// (0x0004e67e) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00052c7d) form2_midp_wait_pane_g

0xe2a2,	// (0x0005141c) list_highlight_pane_cp21_ParamLimits

0xb548,	// (0x0004e6c2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb557,	// (0x0004e6d1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa67e,	// (0x0004d7f8) list_single_2graphic_im_pane_ParamLimits

0xa67e,	// (0x0004d7f8) list_single_2graphic_im_pane

0xc310,	// (0x0004f48a) list_single_2graphic_im_pane_g1_ParamLimits

0xc310,	// (0x0004f48a) list_single_2graphic_im_pane_g1

0xc321,	// (0x0004f49b) list_single_2graphic_im_pane_g2_ParamLimits

0xc321,	// (0x0004f49b) list_single_2graphic_im_pane_g2

0xc32d,	// (0x0004f4a7) list_single_2graphic_im_pane_g3_ParamLimits

0xc32d,	// (0x0004f4a7) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00052dd2) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00052dd2) list_single_2graphic_im_pane_g

0xc34d,	// (0x0004f4c7) list_single_2graphic_im_pane_t1_ParamLimits

0xc34d,	// (0x0004f4c7) list_single_2graphic_im_pane_t1

0xbdbb,	// (0x0004ef35) list_single_graphic_2heading_pane_fp_ParamLimits

0xbdbb,	// (0x0004ef35) list_single_graphic_2heading_pane_fp

0x59e6,	// (0x00048b60) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x59e6,	// (0x00048b60) list_single_graphic_2heading_pane_fp_g1

0xbdd4,	// (0x0004ef4e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbdd4,	// (0x0004ef4e) list_single_graphic_2heading_pane_fp_g2

0xbd2d,	// (0x0004eea7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbd2d,	// (0x0004eea7) list_single_graphic_2heading_pane_fp_g3

0xbd39,	// (0x0004eeb3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbd39,	// (0x0004eeb3) list_single_graphic_2heading_pane_fp_g4

0xbde0,	// (0x0004ef5a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbde0,	// (0x0004ef5a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00052d00) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00052d00) list_single_graphic_2heading_pane_fp_g

0x5b2f,	// (0x00048ca9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5b2f,	// (0x00048ca9) list_single_graphic_2heading_pane_fp_t1

0x5a1e,	// (0x00048b98) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a1e,	// (0x00048b98) list_single_graphic_2heading_pane_fp_t2

0x5b45,	// (0x00048cbf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5b45,	// (0x00048cbf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00052ddb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00052ddb) list_single_graphic_2heading_pane_fp_t

0xb77c,	// (0x0004e8f6) fep_hwr_write_pane_g5_ParamLimits

0xb77c,	// (0x0004e8f6) fep_hwr_write_pane_g5

0xb788,	// (0x0004e902) fep_hwr_write_pane_g6_ParamLimits

0xb788,	// (0x0004e902) fep_hwr_write_pane_g6

0xc04e,	// (0x0004f1c8) eswt_shell_pane_ParamLimits

0x911b,	// (0x0004c295) bg_popup_window_pane_cp18_ParamLimits

0xa3b6,	// (0x0004d530) heading_pane_cp70

0xc178,	// (0x0004f2f2) popup_eswt_tasktip_window_t1_ParamLimits

0x8bf4,	// (0x0004bd6e) aid_touch_tab_arrow_left

0x8c03,	// (0x0004bd7d) aid_touch_tab_arrow_right

0xe252,	// (0x000513cc) title_pane_g3_ParamLimits

0xe252,	// (0x000513cc) title_pane_g3

0x0841,	// (0x000439bb) set_value_pane_g1

0x8ac1,	// (0x0004bc3b) popup_toolbar_trans_pane_ParamLimits

0xc2c4,	// (0x0004f43e) aid_size_cell_tb_trans_pane_ParamLimits

0x0882,	// (0x000439fc) bg_tb_trans_pane_ParamLimits

0xc2d6,	// (0x0004f450) grid_tb_trans_pane_ParamLimits

0xe3e3,	// (0x0005155d) cont_note_pane_ParamLimits

0xe3e3,	// (0x0005155d) cont_note_pane

0xe640,	// (0x000517ba) cont_snote2_single_text_pane_ParamLimits

0xe640,	// (0x000517ba) cont_snote2_single_text_pane

0xe640,	// (0x000517ba) cont_snote2_single_graphic_pane_ParamLimits

0xe640,	// (0x000517ba) cont_snote2_single_graphic_pane

0x96f7,	// (0x0004c871) cont_note_wait_pane_ParamLimits

0x96f7,	// (0x0004c871) cont_note_wait_pane

0x96f7,	// (0x0004c871) cont_note_image_pane_ParamLimits

0x96f7,	// (0x0004c871) cont_note_image_pane

0xc37e,	// (0x0004f4f8) popup_note2_window_g1_ParamLimits

0xc37e,	// (0x0004f4f8) popup_note2_window_g1

0xc3af,	// (0x0004f529) popup_note2_window_t1_ParamLimits

0xc3af,	// (0x0004f529) popup_note2_window_t1

0xc3f4,	// (0x0004f56e) popup_note2_window_t2_ParamLimits

0xc3f4,	// (0x0004f56e) popup_note2_window_t2

0xc439,	// (0x0004f5b3) popup_note2_window_t3_ParamLimits

0xc439,	// (0x0004f5b3) popup_note2_window_t3

0xc47e,	// (0x0004f5f8) popup_note2_window_t4_ParamLimits

0xc47e,	// (0x0004f5f8) popup_note2_window_t4

0xe467,	// (0x000515e1) popup_note2_window_t5_ParamLimits

0xe467,	// (0x000515e1) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00052de7) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00052de7) popup_note2_window_t

0xc4ad,	// (0x0004f627) popup_note2_image_window_g1_ParamLimits

0xc4ad,	// (0x0004f627) popup_note2_image_window_g1

0xc4b9,	// (0x0004f633) popup_note2_image_window_g2_ParamLimits

0xc4b9,	// (0x0004f633) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00052df2) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00052df2) popup_note2_image_window_g

0xc4cb,	// (0x0004f645) popup_note2_image_window_t1_ParamLimits

0xc4cb,	// (0x0004f645) popup_note2_image_window_t1

0xc4e3,	// (0x0004f65d) popup_note2_image_window_t2_ParamLimits

0xc4e3,	// (0x0004f65d) popup_note2_image_window_t2

0xc4fb,	// (0x0004f675) popup_note2_image_window_t3_ParamLimits

0xc4fb,	// (0x0004f675) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00052df7) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00052df7) popup_note2_image_window_t

0x9705,	// (0x0004c87f) popup_note2_wait_window_g1_ParamLimits

0x9705,	// (0x0004c87f) popup_note2_wait_window_g1

0xc517,	// (0x0004f691) popup_note2_wait_window_g2_ParamLimits

0xc517,	// (0x0004f691) popup_note2_wait_window_g2

0x971d,	// (0x0004c897) popup_note2_wait_window_g3_ParamLimits

0x971d,	// (0x0004c897) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00052dfe) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00052dfe) popup_note2_wait_window_g

0xc523,	// (0x0004f69d) popup_note2_wait_window_t1_ParamLimits

0xc523,	// (0x0004f69d) popup_note2_wait_window_t1

0xc541,	// (0x0004f6bb) popup_note2_wait_window_t2_ParamLimits

0xc541,	// (0x0004f6bb) popup_note2_wait_window_t2

0xc55f,	// (0x0004f6d9) popup_note2_wait_window_t3_ParamLimits

0xc55f,	// (0x0004f6d9) popup_note2_wait_window_t3

0xc571,	// (0x0004f6eb) popup_note2_wait_window_t4_ParamLimits

0xc571,	// (0x0004f6eb) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00052e05) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00052e05) popup_note2_wait_window_t

0xc583,	// (0x0004f6fd) wait_bar2_pane_ParamLimits

0xc583,	// (0x0004f6fd) wait_bar2_pane

0xc59b,	// (0x0004f715) popup_snote2_single_text_window_g1_ParamLimits

0xc59b,	// (0x0004f715) popup_snote2_single_text_window_g1

0xc5c3,	// (0x0004f73d) popup_snote2_single_text_window_t1_ParamLimits

0xc5c3,	// (0x0004f73d) popup_snote2_single_text_window_t1

0xc60f,	// (0x0004f789) popup_snote2_single_text_window_t2_ParamLimits

0xc60f,	// (0x0004f789) popup_snote2_single_text_window_t2

0xc65b,	// (0x0004f7d5) popup_snote2_single_text_window_t3_ParamLimits

0xc65b,	// (0x0004f7d5) popup_snote2_single_text_window_t3

0xc69c,	// (0x0004f816) popup_snote2_single_text_window_t4_ParamLimits

0xc69c,	// (0x0004f816) popup_snote2_single_text_window_t4

0xc6d2,	// (0x0004f84c) popup_snote2_single_text_window_t5_ParamLimits

0xc6d2,	// (0x0004f84c) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00052e0e) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00052e0e) popup_snote2_single_text_window_t

0xc6fd,	// (0x0004f877) popup_snote2_single_graphic_window_g1_ParamLimits

0xc6fd,	// (0x0004f877) popup_snote2_single_graphic_window_g1

0xc725,	// (0x0004f89f) popup_snote2_single_graphic_window_g2_ParamLimits

0xc725,	// (0x0004f89f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00052e19) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00052e19) popup_snote2_single_graphic_window_g

0xc74d,	// (0x0004f8c7) popup_snote2_single_graphic_window_t1_ParamLimits

0xc74d,	// (0x0004f8c7) popup_snote2_single_graphic_window_t1

0xc799,	// (0x0004f913) popup_snote2_single_graphic_window_t2_ParamLimits

0xc799,	// (0x0004f913) popup_snote2_single_graphic_window_t2

0xc65b,	// (0x0004f7d5) popup_snote2_single_graphic_window_t3_ParamLimits

0xc65b,	// (0x0004f7d5) popup_snote2_single_graphic_window_t3

0xc69c,	// (0x0004f816) popup_snote2_single_graphic_window_t4_ParamLimits

0xc69c,	// (0x0004f816) popup_snote2_single_graphic_window_t4

0xc6d2,	// (0x0004f84c) popup_snote2_single_graphic_window_t5_ParamLimits

0xc6d2,	// (0x0004f84c) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00052e1e) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00052e1e) popup_snote2_single_graphic_window_t

0xb1db,	// (0x0004e355) clock_nsta_pane_cp2_t1

0xb1db,	// (0x0004e355) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00052c3e) clock_nsta_pane_cp2_t

0x5332,	// (0x000484ac) form_field_data_wide_pane_g1_ParamLimits

0x0890,	// (0x00043a0a) form_field_data_wide_pane_g2_ParamLimits

0x0890,	// (0x00043a0a) form_field_data_wide_pane_g2

0x089c,	// (0x00043a16) form_field_data_wide_pane_g3_ParamLimits

0x089c,	// (0x00043a16) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000527fa) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000527fa) form_field_data_wide_pane_g

0xb0ba,	// (0x0004e234) grid_touch_3_pane_ParamLimits

0xb0ba,	// (0x0004e234) grid_touch_3_pane

0xc7e5,	// (0x0004f95f) cell_touch_3_pane_ParamLimits

0xc7e5,	// (0x0004f95f) cell_touch_3_pane

0xb6eb,	// (0x0004e865) cell_touch_3_pane_g1

0xb6eb,	// (0x0004e865) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00052cc3) cell_touch_3_pane_g

0xe499,	// (0x00051613) cont_query_data_pane

0xe4a1,	// (0x0005161b) cont_query_data_pane_cp1

0xc818,	// (0x0004f992) button_value_adjust_pane_cp7

0xc820,	// (0x0004f99a) query_popup_pane_cp3

0x0dc4,	// (0x00043f3e) bg_popup_sub_pane_cp22_ParamLimits

0x68ed,	// (0x00049a67) navi_navi_volume_pane_cp2

0x6908,	// (0x00049a82) popup_side_volume_key_window_g2

0x6917,	// (0x00049a91) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00052890) popup_side_volume_key_window_g

0x6934,	// (0x00049aae) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00052897) popup_side_volume_key_window_t

0x0fcf,	// (0x00044149) popup_side_volume_key_window_ParamLimits

0x4f38,	// (0x000480b2) list_double_graphic_pane_g4_ParamLimits

0x4f38,	// (0x000480b2) list_double_graphic_pane_g4

0xa6ad,	// (0x0004d827) list_single_2heading_msg_pane_ParamLimits

0xa6ad,	// (0x0004d827) list_single_2heading_msg_pane

0x7d10,	// (0x0004ae8a) list_single_2heading_msg_pane_g1_ParamLimits

0x7d10,	// (0x0004ae8a) list_single_2heading_msg_pane_g1

0x1bdf,	// (0x00044d59) list_single_2heading_msg_pane_g2_ParamLimits

0x1bdf,	// (0x00044d59) list_single_2heading_msg_pane_g2

0x7d1c,	// (0x0004ae96) list_single_2heading_msg_pane_g3_ParamLimits

0x7d1c,	// (0x0004ae96) list_single_2heading_msg_pane_g3

0x7d28,	// (0x0004aea2) list_single_2heading_msg_pane_g4_ParamLimits

0x7d28,	// (0x0004aea2) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00052e29) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00052e29) list_single_2heading_msg_pane_g

0x5b65,	// (0x00048cdf) list_single_2heading_msg_pane_t1_ParamLimits

0x5b65,	// (0x00048cdf) list_single_2heading_msg_pane_t1

0x5b8d,	// (0x00048d07) list_single_2heading_msg_pane_t2_ParamLimits

0x5b8d,	// (0x00048d07) list_single_2heading_msg_pane_t2

0x5bbc,	// (0x00048d36) list_single_2heading_msg_pane_t3_ParamLimits

0x5bbc,	// (0x00048d36) list_single_2heading_msg_pane_t3

0x5bf5,	// (0x00048d6f) list_single_2heading_msg_pane_t4_ParamLimits

0x5bf5,	// (0x00048d6f) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00052e32) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00052e32) list_single_2heading_msg_pane_t

0xe25e,	// (0x000513d8) title_pane_g4_ParamLimits

0xe25e,	// (0x000513d8) title_pane_g4

0x6586,	// (0x00049700) title_pane_stacon_g3_ParamLimits

0x6586,	// (0x00049700) title_pane_stacon_g3

0xc341,	// (0x0004f4bb) list_single_2graphic_im_pane_g4_ParamLimits

0xc341,	// (0x0004f4bb) list_single_2graphic_im_pane_g4

0xa167,	// (0x0004d2e1) popup_side_volume_key_window_cp

0xa9d5,	// (0x0004db4f) main_idle_act2_pane_t1

0x73b3,	// (0x0004a52d) toolbar_button_pane_g10

0x63d6,	// (0x00049550) popup_toolbar_window_cp1

0xb1cc,	// (0x0004e346) clock_nsta_pane_cp_t1

0xb1cc,	// (0x0004e346) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00052c39) clock_nsta_pane_cp_t

0x68ed,	// (0x00049a67) navi_navi_volume_pane_cp2_ParamLimits

0x68fc,	// (0x00049a76) popup_side_volume_key_window_g1_ParamLimits

0x6908,	// (0x00049a82) popup_side_volume_key_window_g2_ParamLimits

0x6917,	// (0x00049a91) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00052890) popup_side_volume_key_window_g_ParamLimits

0x7916,	// (0x0004aa90) fep_hwr_aid_pane

0x23ed,	// (0x00045567) bg_fep_hwr_top_pane_g4_ParamLimits

0xb74c,	// (0x0004e8c6) fep_hwr_top_pane_g1_ParamLimits

0xb75e,	// (0x0004e8d8) fep_hwr_top_pane_g2_ParamLimits

0x79d1,	// (0x0004ab4b) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00052c8e) fep_hwr_top_pane_g_ParamLimits

0x79e6,	// (0x0004ab60) fep_hwr_top_text_pane_ParamLimits

0x9f1c,	// (0x0004d096) aid_touch_tab_arrow_arrow_2

0x9f25,	// (0x0004d09f) aid_touch_tab_arrow_left_2

0x792a,	// (0x0004aaa4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7961,	// (0x0004aadb) fep_hwr_prediction_pane

0xb8b4,	// (0x0004ea2e) fep_vkb_prediction_pane

0xb9ba,	// (0x0004eb34) fep_vkb_side_pane_g3_ParamLimits

0xb9ba,	// (0x0004eb34) fep_vkb_side_pane_g3

0xb966,	// (0x0004eae0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbe34,	// (0x0004efae) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbe41,	// (0x0004efbb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x00052d38) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc847,	// (0x0004f9c1) fep_hwr_prediction_pane_g1

0x7d40,	// (0x0004aeba) fep_hwr_prediction_pane_g2

0x7d48,	// (0x0004aec2) fep_hwr_prediction_pane_g3

0x7d50,	// (0x0004aeca) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00052e3b) fep_hwr_prediction_pane_g

0xc847,	// (0x0004f9c1) fep_vkb_prediction_pane_g1

0xc851,	// (0x0004f9cb) fep_vkb_prediction_pane_g2

0xc859,	// (0x0004f9d3) fep_vkb_prediction_pane_g3

0xc861,	// (0x0004f9db) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x00052e44) fep_vkb_prediction_pane_g

0x76c0,	// (0x0004a83a) slider_set_pane_g3

0x76d4,	// (0x0004a84e) slider_set_pane_g4

0x76ec,	// (0x0004a866) slider_set_pane_g5

0x76c0,	// (0x0004a83a) slider_set_pane_g6

0x7702,	// (0x0004a87c) slider_set_pane_g7

0xa5f5,	// (0x0004d76f) slider_form_pane_g3

0xa5fe,	// (0x0004d778) slider_form_pane_g4

0xa606,	// (0x0004d780) slider_form_pane_g5

0xa5f5,	// (0x0004d76f) slider_form_pane_g6

0xa60e,	// (0x0004d788) slider_form_pane_g7

0xac8c,	// (0x0004de06) slider_set_pane_vc_g3

0xac95,	// (0x0004de0f) slider_set_pane_vc_g4

0xac9e,	// (0x0004de18) slider_set_pane_vc_g5

0xac8c,	// (0x0004de06) slider_set_pane_vc_g6

0xaca7,	// (0x0004de21) slider_set_pane_vc_g7

0xae7f,	// (0x0004dff9) slider_form_pane_vc_g1

0xae88,	// (0x0004e002) slider_form_pane_vc_g2

0xae91,	// (0x0004e00b) slider_form_pane_vc_g3

0xae7f,	// (0x0004dff9) slider_form_pane_vc_g4

0xae9a,	// (0x0004e014) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00052c0b) slider_form_pane_vc_g

0xe234,	// (0x000513ae) main_idle_act3_pane

0xc869,	// (0x0004f9e3) ai3_links_pane

0xc872,	// (0x0004f9ec) popup_ai3_data_window_ParamLimits

0xc872,	// (0x0004f9ec) popup_ai3_data_window

0xe234,	// (0x000513ae) grid_ai3_links_pane

0xc890,	// (0x0004fa0a) cell_ai3_links_pane_ParamLimits

0xc890,	// (0x0004fa0a) cell_ai3_links_pane

0xc8aa,	// (0x0004fa24) bg_popup_sub_pane_cp11

0xc8b7,	// (0x0004fa31) cell_ai3_links_pane_g1

0xe234,	// (0x000513ae) bg_popup_sub_pane_cp12

0xc8dc,	// (0x0004fa56) heading_ai3_data_pane

0xc8e4,	// (0x0004fa5e) list_ai3_gene_pane

0xc8f0,	// (0x0004fa6a) popup_ai3_data_window_g1

0xc8f8,	// (0x0004fa72) heading_ai3_data_pane_g1

0xc900,	// (0x0004fa7a) heading_ai3_data_pane_t1

0xc90e,	// (0x0004fa88) list_double_ai3_gene_pane_ParamLimits

0xc90e,	// (0x0004fa88) list_double_ai3_gene_pane

0xc91b,	// (0x0004fa95) list_single_ai3_gene_pane_ParamLimits

0xc91b,	// (0x0004fa95) list_single_ai3_gene_pane

0xb6b0,	// (0x0004e82a) list_highlight_pane_cp7_ParamLimits

0xb6b0,	// (0x0004e82a) list_highlight_pane_cp7

0xc928,	// (0x0004faa2) list_single_a13_gene_pane_t1_ParamLimits

0xc928,	// (0x0004faa2) list_single_a13_gene_pane_t1

0xc93f,	// (0x0004fab9) list_single_ai3_gene_pane_g1

0xc948,	// (0x0004fac2) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00052e4d) list_single_ai3_gene_pane_g

0xc950,	// (0x0004faca) list_double_ai3_gene_pane_g1_ParamLimits

0xc950,	// (0x0004faca) list_double_ai3_gene_pane_g1

0xc95c,	// (0x0004fad6) list_double_ai3_gene_pane_t1_ParamLimits

0xc95c,	// (0x0004fad6) list_double_ai3_gene_pane_t1

0xc978,	// (0x0004faf2) list_double_ai3_gene_pane_t2_ParamLimits

0xc978,	// (0x0004faf2) list_double_ai3_gene_pane_t2

0xc98d,	// (0x0004fb07) list_double_ai3_gene_pane_t3_ParamLimits

0xc98d,	// (0x0004fb07) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00052e52) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00052e52) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b5b,	// (0x00048cd5) aid_size_min_col_2

0xc831,	// (0x0004f9ab) aid_size_min_msg_ParamLimits

0xc831,	// (0x0004f9ab) aid_size_min_msg

0xbac6,	// (0x0004ec40) fep_vkb_top_text_pane_g2_ParamLimits

0xbac6,	// (0x0004ec40) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00052cbe) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00052cbe) fep_vkb_top_text_pane_g

0xe234,	// (0x000513ae) main_hc_apps_shell_pane

0xc9aa,	// (0x0004fb24) grid_hc_apps_pane_ParamLimits

0xc9aa,	// (0x0004fb24) grid_hc_apps_pane

0xc9b9,	// (0x0004fb33) list_hc_apps_pane

0xc9c1,	// (0x0004fb3b) scroll_pane_cp37_ParamLimits

0xc9c1,	// (0x0004fb3b) scroll_pane_cp37

0xc9cd,	// (0x0004fb47) cell_hc_apps_pane_ParamLimits

0xc9cd,	// (0x0004fb47) cell_hc_apps_pane

0xca85,	// (0x0004fbff) cell_hc_apps_pane_g1_ParamLimits

0xca85,	// (0x0004fbff) cell_hc_apps_pane_g1

0xcab6,	// (0x0004fc30) cell_hc_apps_pane_g2_ParamLimits

0xcab6,	// (0x0004fc30) cell_hc_apps_pane_g2

0xcad2,	// (0x0004fc4c) cell_hc_apps_pane_g3_ParamLimits

0xcad2,	// (0x0004fc4c) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00052e59) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00052e59) cell_hc_apps_pane_g

0xcaf4,	// (0x0004fc6e) cell_hc_apps_pane_t1_ParamLimits

0xcaf4,	// (0x0004fc6e) cell_hc_apps_pane_t1

0xe3e3,	// (0x0005155d) grid_highlight_pane_cp10_ParamLimits

0xe3e3,	// (0x0005155d) grid_highlight_pane_cp10

0xcb34,	// (0x0004fcae) list_single_hc_apps_pane_ParamLimits

0xcb34,	// (0x0004fcae) list_single_hc_apps_pane

0xcb73,	// (0x0004fced) list_single_hc_apps_pane_g1

0x7d58,	// (0x0004aed2) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00052e60) list_single_hc_apps_pane_g

0x7d71,	// (0x0004aeeb) list_single_hc_apps_pane_g2_copy1

0x5c1a,	// (0x00048d94) list_single_hc_apps_pane_t1

0xe2a2,	// (0x0005141c) bg_set_opt_pane_cp_ParamLimits

0x6127,	// (0x000492a1) setting_slider_pane_t1_ParamLimits

0x6140,	// (0x000492ba) setting_slider_pane_t2_ParamLimits

0x615a,	// (0x000492d4) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000526d8) setting_slider_pane_t_ParamLimits

0x6172,	// (0x000492ec) slider_set_pane_ParamLimits

0x6e41,	// (0x00049fbb) control_pane_g5_ParamLimits

0x6e41,	// (0x00049fbb) control_pane_g5

0xa422,	// (0x0004d59c) slider_set_pane_g1_ParamLimits

0x76b4,	// (0x0004a82e) slider_set_pane_g2_ParamLimits

0x76c0,	// (0x0004a83a) slider_set_pane_g3_ParamLimits

0x76d4,	// (0x0004a84e) slider_set_pane_g4_ParamLimits

0x76ec,	// (0x0004a866) slider_set_pane_g5_ParamLimits

0x76c0,	// (0x0004a83a) slider_set_pane_g6_ParamLimits

0x7702,	// (0x0004a87c) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00052ae3) slider_set_pane_g_ParamLimits

0x1077,	// (0x000441f1) navi_icon_text_pane_ParamLimits

0x8bb3,	// (0x0004bd2d) aid_fill_nsta_2_ParamLimits

0x8bf4,	// (0x0004bd6e) aid_touch_tab_arrow_left_ParamLimits

0x8c03,	// (0x0004bd7d) aid_touch_tab_arrow_right_ParamLimits

0x8c70,	// (0x0004bdea) clock_nsta_pane_ParamLimits

0x9efe,	// (0x0004d078) navi_icon_pane_g1_ParamLimits

0x9f0a,	// (0x0004d084) navi_text_pane_t1_ParamLimits

0xb2e9,	// (0x0004e463) navi_icon_text_pane_g1_ParamLimits

0xb2f5,	// (0x0004e46f) navi_icon_text_pane_t1_ParamLimits

0xcb73,	// (0x0004fced) list_single_hc_apps_pane_g1_ParamLimits

0x7d58,	// (0x0004aed2) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00052e60) list_single_hc_apps_pane_g_ParamLimits

0x7d71,	// (0x0004aeeb) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5c1a,	// (0x00048d94) list_single_hc_apps_pane_t1_ParamLimits

0x5f6f,	// (0x000490e9) popup_toolbar2_fixed_window_ParamLimits

0x5f6f,	// (0x000490e9) popup_toolbar2_fixed_window

0x8ab7,	// (0x0004bc31) popup_toolbar2_float_window

0xe234,	// (0x000513ae) bg_popup_sub_pane_cp27

0xcb8c,	// (0x0004fd06) grid_toolbar2_float_pane

0xe234,	// (0x000513ae) bg_popup_sub_pane_cp26

0xcb8c,	// (0x0004fd06) grid_toolbar2_fixed_pane

0xcb94,	// (0x0004fd0e) cell_toolbar2_fixed_pane_ParamLimits

0xcb94,	// (0x0004fd0e) cell_toolbar2_fixed_pane

0xcba4,	// (0x0004fd1e) cell_toolbar2_fixed_pane_g1

0xcbad,	// (0x0004fd27) toolbar2_fixed_button_pane

0x90a7,	// (0x0004c221) toolbar2_fixed_button_pane_g1

0x90af,	// (0x0004c229) toolbar2_fixed_button_pane_g2

0x90b7,	// (0x0004c231) toolbar2_fixed_button_pane_g3

0x90bf,	// (0x0004c239) toolbar2_fixed_button_pane_g4

0x90c7,	// (0x0004c241) toolbar2_fixed_button_pane_g5

0x90cf,	// (0x0004c249) toolbar2_fixed_button_pane_g6

0x90d7,	// (0x0004c251) toolbar2_fixed_button_pane_g7

0x90df,	// (0x0004c259) toolbar2_fixed_button_pane_g8

0x90e7,	// (0x0004c261) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x000529e5) toolbar2_fixed_button_pane_g

0xcbb5,	// (0x0004fd2f) cell_toolbar2_float_pane_ParamLimits

0xcbb5,	// (0x0004fd2f) cell_toolbar2_float_pane

0xcbc6,	// (0x0004fd40) cell_toolbar2_float_pane_g1

0xcbad,	// (0x0004fd27) toolbar2_fixed_button_pane_cp

0xb822,	// (0x0004e99c) fep_vkb_accented_list_pane_ParamLimits

0xb822,	// (0x0004e99c) fep_vkb_accented_list_pane

0x7b48,	// (0x0004acc2) bg_popup_fep_shadow_pane_g9

0x11d3,	// (0x0004434d) bg_popup_fep_shadow_pane_cp3

0x0995,	// (0x00043b0f) list_accented_list_pane

0xcbcf,	// (0x0004fd49) list_single_accented_list_pane_ParamLimits

0xcbcf,	// (0x0004fd49) list_single_accented_list_pane

0x11d3,	// (0x0004434d) list_highlight_pane_cp10

0xcbe0,	// (0x0004fd5a) list_single_accented_list_pane_t1

0x89fd,	// (0x0004bb77) popup_slider_window_ParamLimits

0x89fd,	// (0x0004bb77) popup_slider_window

0xc828,	// (0x0004f9a2) aid_indentation_list_msg

0xccac,	// (0x0004fe26) bg_popup_window_pane_cp19

0xcd1a,	// (0x0004fe94) popup_slider_window_g1

0xcd36,	// (0x0004feb0) popup_slider_window_g2

0xcd52,	// (0x0004fecc) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00052e65) popup_slider_window_g

0xcdae,	// (0x0004ff28) popup_slider_window_t1

0xce22,	// (0x0004ff9c) small_volume_slider_vertical_pane

0xb6eb,	// (0x0004e865) small_volume_slider_vertical_pane_g1

0xb6eb,	// (0x0004e865) small_volume_slider_vertical_pane_g2

0xce3e,	// (0x0004ffb8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x00052e77) small_volume_slider_vertical_pane_g

0x5d27,	// (0x00048ea1) area_side_right_pane_ParamLimits

0x5d27,	// (0x00048ea1) area_side_right_pane

0x7d8d,	// (0x0004af07) aid_size_side_button_ParamLimits

0x7d8d,	// (0x0004af07) aid_size_side_button

0x7da1,	// (0x0004af1b) grid_sctrl_middle_pane_ParamLimits

0x7da1,	// (0x0004af1b) grid_sctrl_middle_pane

0x7dc1,	// (0x0004af3b) sctrl_sk_bottom_pane

0x7dd2,	// (0x0004af4c) sctrl_sk_top_pane

0x7de4,	// (0x0004af5e) aid_touch_sctrl_top

0xe3e3,	// (0x0005155d) bg_sctrl_sk_pane_ParamLimits

0xe3e3,	// (0x0005155d) bg_sctrl_sk_pane

0x7df1,	// (0x0004af6b) sctrl_sk_top_pane_g1

0x7dfe,	// (0x0004af78) sctrl_sk_top_pane_t1

0x7de4,	// (0x0004af5e) aid_touch_sctrl_bottom

0xe3e3,	// (0x0005155d) bg_sctrl_sk_pane_cp_ParamLimits

0xe3e3,	// (0x0005155d) bg_sctrl_sk_pane_cp

0x7e19,	// (0x0004af93) sctrl_sk_bottom_pane_g1

0x7dfe,	// (0x0004af78) sctrl_sk_bottom_pane_t1

0x7e22,	// (0x0004af9c) cell_sctrl_middle_pane_ParamLimits

0x7e22,	// (0x0004af9c) cell_sctrl_middle_pane

0x7e3f,	// (0x0004afb9) aid_touch_sctrl_middle_ParamLimits

0x7e3f,	// (0x0004afb9) aid_touch_sctrl_middle

0x0882,	// (0x000439fc) bg_sctrl_middle_pane_ParamLimits

0x0882,	// (0x000439fc) bg_sctrl_middle_pane

0xb966,	// (0x0004eae0) cell_sctrl_middle_pane_g1_ParamLimits

0xb966,	// (0x0004eae0) cell_sctrl_middle_pane_g1

0x7e51,	// (0x0004afcb) cell_sctrl_middle_pane_g2_ParamLimits

0x7e51,	// (0x0004afcb) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00052e83) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00052e83) cell_sctrl_middle_pane_g

0x90a7,	// (0x0004c221) bg_sctrl_middle_pane_g1

0x90af,	// (0x0004c229) bg_sctrl_middle_pane_g2

0x90b7,	// (0x0004c231) bg_sctrl_middle_pane_g3

0x90bf,	// (0x0004c239) bg_sctrl_middle_pane_g4

0x90c7,	// (0x0004c241) bg_sctrl_middle_pane_g5

0x90cf,	// (0x0004c249) bg_sctrl_middle_pane_g6

0x90d7,	// (0x0004c251) bg_sctrl_middle_pane_g7

0x90df,	// (0x0004c259) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x00052e88) bg_sctrl_middle_pane_g

0x90e7,	// (0x0004c261) bg_sctrl_middle_pane_g8_copy1

0x90a7,	// (0x0004c221) bg_sctrl_sk_pane_g1

0x90af,	// (0x0004c229) bg_sctrl_sk_pane_g2

0x90b7,	// (0x0004c231) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x000529e5) bg_sctrl_sk_pane_g

0xe7fe,	// (0x00051978) aid_size_touch_scroll_bar

0x90bf,	// (0x0004c239) bg_sctrl_sk_pane_g4

0x90c7,	// (0x0004c241) bg_sctrl_sk_pane_g5

0x90cf,	// (0x0004c249) bg_sctrl_sk_pane_g6

0x90d7,	// (0x0004c251) bg_sctrl_sk_pane_g7

0x90df,	// (0x0004c259) bg_sctrl_sk_pane_g8

0x90e7,	// (0x0004c261) bg_sctrl_sk_pane_g9

0x7082,	// (0x0004a1fc) popup_fep_china_hwr2_fs_candidate_window

0x708c,	// (0x0004a206) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x708c,	// (0x0004a206) popup_fep_china_hwr2_fs_control_window

0xb966,	// (0x0004eae0) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00052e7e) sctrl_sk_top_pane_g

0xce47,	// (0x0004ffc1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce47,	// (0x0004ffc1) aid_fep_china_hwr2_fs_cell

0xce5a,	// (0x0004ffd4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce5a,	// (0x0004ffd4) bg_popup_fep_shadow_pane_cp4

0xce73,	// (0x0004ffed) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce73,	// (0x0004ffed) bg_popup_fep_shadow_pane_cp5

0xce85,	// (0x0004ffff) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce85,	// (0x0004ffff) popup_fep_china_hwr2_fs_control_bar_grid

0xce95,	// (0x0005000f) popup_fep_china_hwr2_fs_control_funtion_grid

0xce9d,	// (0x00050017) aid_fep_china_hwr2_fs_candi_cell

0xe234,	// (0x000513ae) bg_popup_fep_shadow_pane_cp6

0xcea7,	// (0x00050021) popup_fep_china_hwr2_fs_candidate_grid

0xceb1,	// (0x0005002b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xceb1,	// (0x0005002b) cell_fep_china_hwr2_fs_funtion_grid

0xb6eb,	// (0x0004e865) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcec9,	// (0x00050043) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcec9,	// (0x00050043) cell_fep_china_hwr2_fs_funtion_grid_g1

0xced7,	// (0x00050051) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xced7,	// (0x00050051) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x00052e99) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x00052e99) cell_fep_china_hwr2_fs_funtion_grid_g

0xceed,	// (0x00050067) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xceed,	// (0x00050067) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcf02,	// (0x0005007c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcf02,	// (0x0005007c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x00052e9e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x00052e9e) cell_fep_china_hwr2_fs_funtion_grid_t

0xcf1e,	// (0x00050098) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcf26,	// (0x000500a0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcf2e,	// (0x000500a8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x00052ea3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcf36,	// (0x000500b0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcf36,	// (0x000500b0) cell_fep_china_hwr2_fs_candidate_grid

0xcf55,	// (0x000500cf) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcf5d,	// (0x000500d7) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb6eb,	// (0x0004e865) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb6eb,	// (0x0004e865) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00052cc3) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf65,	// (0x000500df) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8c83,	// (0x0004bdfd) clock_nsta_pane_cp_24_ParamLimits

0x8c83,	// (0x0004bdfd) clock_nsta_pane_cp_24

0x8d03,	// (0x0004be7d) indicator_nsta_pane_cp_24_ParamLimits

0x8d03,	// (0x0004be7d) indicator_nsta_pane_cp_24

0x9d7a,	// (0x0004cef4) heading_pane_g1

0x0001,

0xf8d0,	// (0x00052a4a) heading_pane_g

0xa81c,	// (0x0004d996) grid_sct_catagory_button_pane

0xa84e,	// (0x0004d9c8) scroll_pane_cp5_ParamLimits

0xb337,	// (0x0004e4b1) button_value_adjust_pane_cp5_ParamLimits

0xb337,	// (0x0004e4b1) button_value_adjust_pane_cp5

0xb41c,	// (0x0004e596) form2_midp_time_pane_ParamLimits

0xcf73,	// (0x000500ed) cell_sct_catagory_button_pane_ParamLimits

0xcf73,	// (0x000500ed) cell_sct_catagory_button_pane

0xb6b0,	// (0x0004e82a) bg_button_pane_cp01_ParamLimits

0xb6b0,	// (0x0004e82a) bg_button_pane_cp01

0xb6eb,	// (0x0004e865) cell_sct_catagory_button_pane_g1

0x8a3e,	// (0x0004bbb8) popup_tb_extension_window

0xcf85,	// (0x000500ff) aid_size_cell_ext_ParamLimits

0xcf85,	// (0x000500ff) aid_size_cell_ext

0xe3e3,	// (0x0005155d) bg_tb_trans_pane_cp1_ParamLimits

0xe3e3,	// (0x0005155d) bg_tb_trans_pane_cp1

0xcfa5,	// (0x0005011f) grid_tb_ext_pane_ParamLimits

0xcfa5,	// (0x0005011f) grid_tb_ext_pane

0xcfd5,	// (0x0005014f) cell_tb_ext_pane_ParamLimits

0xcfd5,	// (0x0005014f) cell_tb_ext_pane

0xcfec,	// (0x00050166) cell_tb_ext_pane_g1_ParamLimits

0xcfec,	// (0x00050166) cell_tb_ext_pane_g1

0xd009,	// (0x00050183) cell_tb_ext_pane_t1

0xe3e3,	// (0x0005155d) list_highlight_pane_cp11_ParamLimits

0xe3e3,	// (0x0005155d) list_highlight_pane_cp11

0x5f8e,	// (0x00049108) popup_uni_indicator_window_ParamLimits

0x5f8e,	// (0x00049108) popup_uni_indicator_window

0x0882,	// (0x000439fc) bg_popup_sub_pane_cp14

0xd024,	// (0x0005019e) list_uniindi_pane

0xd030,	// (0x000501aa) uniindi_top_pane

0xe3e3,	// (0x0005155d) bg_uniindi_top_pane

0xd051,	// (0x000501cb) uniindi_top_pane_g1

0xd067,	// (0x000501e1) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x00052eaa) uniindi_top_pane_g

0xd091,	// (0x0005020b) uniindi_top_pane_t1

0xd0bd,	// (0x00050237) list_single_uniindi_pane_ParamLimits

0xd0bd,	// (0x00050237) list_single_uniindi_pane

0xb6eb,	// (0x0004e865) bg_uniindi_top_pane_g1

0xd0cf,	// (0x00050249) list_single_uniindi_pane_g1

0xd0e2,	// (0x0005025c) list_single_uniindi_pane_t1

0xe234,	// (0x000513ae) control_bg_pane

0xd107,	// (0x00050281) bg_sctrl_sk_pane_cp1

0xd110,	// (0x0005028a) bg_sctrl_sk_pane_cp2

0xd119,	// (0x00050293) control_bg_pane_g1

0xd122,	// (0x0005029c) control_bg_pane_g2

0x0001,

0xfd39,	// (0x00052eb3) control_bg_pane_g

0xb15e,	// (0x0004e2d8) cell_indicator_nsta_pane_g1_ParamLimits

0xb16c,	// (0x0004e2e6) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00052c27) cell_indicator_nsta_pane_g_ParamLimits

0x59bc,	// (0x00048b36) form2_midp_time_pane_t1_ParamLimits

0xe640,	// (0x000517ba) main_idle_act4_pane_ParamLimits

0xe640,	// (0x000517ba) main_idle_act4_pane

0x8a3e,	// (0x0004bbb8) popup_tb_extension_window_ParamLimits

0xcfc7,	// (0x00050141) tb_ext_find_pane_ParamLimits

0xcfc7,	// (0x00050141) tb_ext_find_pane

0xd12b,	// (0x000502a5) ai_gene_pane_1_cp1

0x4221,	// (0x0004739b) ai_gene_pane_2_cp1

0xd133,	// (0x000502ad) list_single_idle_plugin_calendar_pane

0xd13c,	// (0x000502b6) list_single_idle_plugin_notification_pane

0xd145,	// (0x000502bf) list_single_idle_plugin_player_pane

0xd14e,	// (0x000502c8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd14e,	// (0x000502c8) list_single_idle_plugin_shortcut_pane

0xd170,	// (0x000502ea) main_idle_act4_pane_t1

0xd182,	// (0x000502fc) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x00052eb8) main_idle_act4_pane_t

0xd194,	// (0x0005030e) middle_sk_idle_act4_pane_ParamLimits

0xd194,	// (0x0005030e) middle_sk_idle_act4_pane

0xd1aa,	// (0x00050324) popup_clock_digital_analogue_window_cp2

0xd1c4,	// (0x0005033e) shortcut_wheel_idle_act4_pane_ParamLimits

0xd1c4,	// (0x0005033e) shortcut_wheel_idle_act4_pane

0xb6eb,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g1

0xb6eb,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g2

0xb6eb,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g3

0xb6eb,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g4

0xb6eb,	// (0x0004e865) shortcut_wheel_idle_act4_pane_g5

0xd1d8,	// (0x00050352) shortcut_wheel_idle_act4_pane_g6

0xd1e0,	// (0x0005035a) shortcut_wheel_idle_act4_pane_g7

0xd1e8,	// (0x00050362) shortcut_wheel_idle_act4_pane_g8

0xd1f0,	// (0x0005036a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x00052ebd) shortcut_wheel_idle_act4_pane_g

0xb966,	// (0x0004eae0) middle_sk_idle_act4_pane_g1_ParamLimits

0xb966,	// (0x0004eae0) middle_sk_idle_act4_pane_g1

0xd254,	// (0x000503ce) middle_sk_idle_act4_pane_g2_ParamLimits

0xd254,	// (0x000503ce) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x00052ee0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x00052ee0) middle_sk_idle_act4_pane_g

0xd260,	// (0x000503da) middle_sk_idle_act4_pane_t1_ParamLimits

0xd260,	// (0x000503da) middle_sk_idle_act4_pane_t1

0xd27d,	// (0x000503f7) grid_ai_shortcut_pane_ParamLimits

0xd27d,	// (0x000503f7) grid_ai_shortcut_pane

0xd296,	// (0x00050410) list_highlight_pane_cp16_ParamLimits

0xd296,	// (0x00050410) list_highlight_pane_cp16

0xd2a3,	// (0x0005041d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd2a3,	// (0x0005041d) list_single_idle_plugin_shortcut_pane_g1

0xd2af,	// (0x00050429) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd2af,	// (0x00050429) list_single_idle_plugin_shortcut_pane_g2

0xd2c9,	// (0x00050443) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd2c9,	// (0x00050443) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00052ee5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00052ee5) list_single_idle_plugin_shortcut_pane_g

0xd2dc,	// (0x00050456) cell_ai_shortcut_pane_ParamLimits

0xd2dc,	// (0x00050456) cell_ai_shortcut_pane

0xd2ff,	// (0x00050479) cell_ai_shortcut_pane_g1_ParamLimits

0xd2ff,	// (0x00050479) cell_ai_shortcut_pane_g1

0xd12b,	// (0x000502a5) ai_gene_pane_1_cp2

0xd321,	// (0x0005049b) ai_gene_pane_2_cp2

0xd329,	// (0x000504a3) list_highlight_pane_cp15

0xd332,	// (0x000504ac) list_single_idle_plugin_calendar_pane_g1

0xd329,	// (0x000504a3) list_highlight_pane_cp17

0xd33a,	// (0x000504b4) list_single_idle_plugin_calendar_pane_g1_copy1

0xd342,	// (0x000504bc) list_single_idle_plugin_player_pane_g1

0xaa83,	// (0x0004dbfd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00052eec) list_single_idle_plugin_player_pane_g

0xd34a,	// (0x000504c4) list_single_idle_plugin_player_pane_t1

0xd358,	// (0x000504d2) list_single_idle_plugin_player_pane_t2

0xd366,	// (0x000504e0) list_single_idle_plugin_player_pane_t3

0xd374,	// (0x000504ee) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00052ef1) list_single_idle_plugin_player_pane_t

0xd382,	// (0x000504fc) wait_bar_pane_cp15

0xd38a,	// (0x00050504) grid_ai_notification_pane

0xaa83,	// (0x0004dbfd) list_single_idle_plugin_notification_pane_g1

0xd393,	// (0x0005050d) cell_ai_notification_pane_ParamLimits

0xd393,	// (0x0005050d) cell_ai_notification_pane

0xd3a0,	// (0x0005051a) cell_ai_notification_pane_g1

0xd3a8,	// (0x00050522) cell_ai_notification_pane_t1

0xd3b6,	// (0x00050530) tb_ext_find_button_pane

0xd3be,	// (0x00050538) tb_ext_find_pane_g1

0xd3c6,	// (0x00050540) tb_ext_find_pane_t1

0x0d64,	// (0x00043ede) tb_ext_find_button_pane_g1

0xd3d4,	// (0x0005054e) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00052efa) tb_ext_find_button_pane_g

0xd170,	// (0x000502ea) main_idle_act4_pane_t1_ParamLimits

0xd182,	// (0x000502fc) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x00052eb8) main_idle_act4_pane_t_ParamLimits

0xd1aa,	// (0x00050324) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd1b8,	// (0x00050332) sat_plugin_idle_act4_pane_ParamLimits

0xd1b8,	// (0x00050332) sat_plugin_idle_act4_pane

0xd3dd,	// (0x00050557) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd3dd,	// (0x00050557) sat_plugin_idle_act4_pane_t1

0xd3f0,	// (0x0005056a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd3f0,	// (0x0005056a) sat_plugin_idle_act4_pane_t2

0xd403,	// (0x0005057d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd403,	// (0x0005057d) sat_plugin_idle_act4_pane_t3

0xd416,	// (0x00050590) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd416,	// (0x00050590) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00052eff) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00052eff) sat_plugin_idle_act4_pane_t

0x5ebf,	// (0x00049039) popup_battery_window_ParamLimits

0x5ebf,	// (0x00049039) popup_battery_window

0xe3e3,	// (0x0005155d) bg_popup_sub_pane_cp25_ParamLimits

0xe3e3,	// (0x0005155d) bg_popup_sub_pane_cp25

0xd429,	// (0x000505a3) popup_battery_window_g1_ParamLimits

0xd429,	// (0x000505a3) popup_battery_window_g1

0xd435,	// (0x000505af) popup_battery_window_t1_ParamLimits

0xd435,	// (0x000505af) popup_battery_window_t1

0xd447,	// (0x000505c1) popup_battery_window_t2_ParamLimits

0xd447,	// (0x000505c1) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x00052f08) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x00052f08) popup_battery_window_t

0x6bce,	// (0x00049d48) midp_canvas_pane_ParamLimits

0x6c30,	// (0x00049daa) midp_keypad_pane_ParamLimits

0x6c30,	// (0x00049daa) midp_keypad_pane

0x6fd4,	// (0x0004a14e) main_midp_pane_ParamLimits

0xb1ea,	// (0x0004e364) signal_pane_g2_cp_ParamLimits

0xd464,	// (0x000505de) aid_size_cell_midp_keypad_ParamLimits

0xd464,	// (0x000505de) aid_size_cell_midp_keypad

0xd47e,	// (0x000505f8) midp_keyp_game_grid_pane_ParamLimits

0xd47e,	// (0x000505f8) midp_keyp_game_grid_pane

0xd49e,	// (0x00050618) midp_keyp_rocker_pane_ParamLimits

0xd49e,	// (0x00050618) midp_keyp_rocker_pane

0xd4c9,	// (0x00050643) midp_keyp_sk_left_pane_ParamLimits

0xd4c9,	// (0x00050643) midp_keyp_sk_left_pane

0xd523,	// (0x0005069d) midp_keyp_sk_right_pane_ParamLimits

0xd523,	// (0x0005069d) midp_keyp_sk_right_pane

0xe234,	// (0x000513ae) bg_button_pane_cp03

0xd57d,	// (0x000506f7) midp_keyp_sk_left_pane_g1

0xe234,	// (0x000513ae) bg_button_pane_cp04

0xd57d,	// (0x000506f7) midp_keyp_sk_right_pane_g1

0xb6eb,	// (0x0004e865) midp_keyp_rocker_pane_g1

0xd586,	// (0x00050700) keyp_game_cell_pane_ParamLimits

0xd586,	// (0x00050700) keyp_game_cell_pane

0xe234,	// (0x000513ae) bg_button_pane_cp02

0xd599,	// (0x00050713) keyp_game_cell_pane_g1

0x5f09,	// (0x00049083) popup_fep_vkb2_window_ParamLimits

0x5f09,	// (0x00049083) popup_fep_vkb2_window

0x7e6f,	// (0x0004afe9) aid_size_cell_vkb2_ParamLimits

0x7e6f,	// (0x0004afe9) aid_size_cell_vkb2

0x7ec3,	// (0x0004b03d) popup_fep_vkb2_window_g1_ParamLimits

0x7ec3,	// (0x0004b03d) popup_fep_vkb2_window_g1

0x7f0b,	// (0x0004b085) vkb2_area_bottom_pane_ParamLimits

0x7f0b,	// (0x0004b085) vkb2_area_bottom_pane

0x7f5f,	// (0x0004b0d9) vkb2_area_keypad_pane_ParamLimits

0x7f5f,	// (0x0004b0d9) vkb2_area_keypad_pane

0x7fa5,	// (0x0004b11f) vkb2_area_top_pane_ParamLimits

0x7fa5,	// (0x0004b11f) vkb2_area_top_pane

0x801f,	// (0x0004b199) vkb2_top_entry_pane_ParamLimits

0x801f,	// (0x0004b199) vkb2_top_entry_pane

0x8049,	// (0x0004b1c3) vkb2_top_grid_left_pane_ParamLimits

0x8049,	// (0x0004b1c3) vkb2_top_grid_left_pane

0x8067,	// (0x0004b1e1) vkb2_top_grid_right_pane_ParamLimits

0x8067,	// (0x0004b1e1) vkb2_top_grid_right_pane

0x8085,	// (0x0004b1ff) vkb2_cell_keypad_pane_ParamLimits

0x8085,	// (0x0004b1ff) vkb2_cell_keypad_pane

0x8156,	// (0x0004b2d0) vkb2_area_bottom_grid_pane_ParamLimits

0x8156,	// (0x0004b2d0) vkb2_area_bottom_grid_pane

0x817c,	// (0x0004b2f6) vkb2_area_bottom_pane_g1_ParamLimits

0x817c,	// (0x0004b2f6) vkb2_area_bottom_pane_g1

0x81a0,	// (0x0004b31a) vkb2_area_bottom_pane_g2_ParamLimits

0x81a0,	// (0x0004b31a) vkb2_area_bottom_pane_g2

0x81ce,	// (0x0004b348) vkb2_area_bottom_pane_g3_ParamLimits

0x81ce,	// (0x0004b348) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00052f0d) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00052f0d) vkb2_area_bottom_pane_g

0x822f,	// (0x0004b3a9) vkb2_top_cell_left_pane_ParamLimits

0x822f,	// (0x0004b3a9) vkb2_top_cell_left_pane

0xd5aa,	// (0x00050724) vkb2_top_entry_pane_g1_ParamLimits

0xd5aa,	// (0x00050724) vkb2_top_entry_pane_g1

0xd5b8,	// (0x00050732) vkb2_top_entry_pane_t1_ParamLimits

0xd5b8,	// (0x00050732) vkb2_top_entry_pane_t1

0xd5ea,	// (0x00050764) vkb2_top_entry_pane_t2_ParamLimits

0xd5ea,	// (0x00050764) vkb2_top_entry_pane_t2

0xd61c,	// (0x00050796) vkb2_top_entry_pane_t3_ParamLimits

0xd61c,	// (0x00050796) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x00052f14) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x00052f14) vkb2_top_entry_pane_t

0x827c,	// (0x0004b3f6) vkb2_top_grid_right_pane_g1_ParamLimits

0x827c,	// (0x0004b3f6) vkb2_top_grid_right_pane_g1

0x8292,	// (0x0004b40c) vkb2_top_grid_right_pane_g2_ParamLimits

0x8292,	// (0x0004b40c) vkb2_top_grid_right_pane_g2

0x82aa,	// (0x0004b424) vkb2_top_grid_right_pane_g3_ParamLimits

0x82aa,	// (0x0004b424) vkb2_top_grid_right_pane_g3

0x82c2,	// (0x0004b43c) vkb2_top_grid_right_pane_g4_ParamLimits

0x82c2,	// (0x0004b43c) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x00052f1b) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x00052f1b) vkb2_top_grid_right_pane_g

0x82d8,	// (0x0004b452) vkb2_top_cell_left_pane_g1

0x82ef,	// (0x0004b469) vkb2_cell_keypad_pane_g1_ParamLimits

0x82ef,	// (0x0004b469) vkb2_cell_keypad_pane_g1

0xd640,	// (0x000507ba) vkb2_cell_keypad_pane_t1_ParamLimits

0xd640,	// (0x000507ba) vkb2_cell_keypad_pane_t1

0x82fd,	// (0x0004b477) vkb2_cell_bottom_grid_pane_ParamLimits

0x82fd,	// (0x0004b477) vkb2_cell_bottom_grid_pane

0x8336,	// (0x0004b4b0) vkb2_cell_bottom_grid_pane_g1

0xd1f8,	// (0x00050372) aid_call2_pane_cp02

0xd200,	// (0x0005037a) aid_call_pane_cp02

0xd208,	// (0x00050382) clock_digital_number_pane_cp10

0xd210,	// (0x0005038a) clock_digital_number_pane_cp11

0xd218,	// (0x00050392) clock_digital_number_pane_cp12

0xd220,	// (0x0005039a) clock_digital_number_pane_cp13

0xd228,	// (0x000503a2) clock_digital_separator_pane_cp10

0x0d64,	// (0x00043ede) popup_clock_digital_analogue_window_cp2_g1

0x0d64,	// (0x00043ede) popup_clock_digital_analogue_window_cp2_g2

0xd230,	// (0x000503aa) popup_clock_digital_analogue_window_cp2_g3

0x0d64,	// (0x00043ede) popup_clock_digital_analogue_window_cp2_g4

0xd230,	// (0x000503aa) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x00052ed0) popup_clock_digital_analogue_window_cp2_g

0xd238,	// (0x000503b2) popup_clock_digital_analogue_window_cp2_t1

0xd246,	// (0x000503c0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x00052edb) popup_clock_digital_analogue_window_cp2_t

0xb6eb,	// (0x0004e865) clock_digital_number_pane_cp10_g1

0xb6eb,	// (0x0004e865) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00052cc3) clock_digital_number_pane_cp10_g

0xb6eb,	// (0x0004e865) clock_digital_separator_pane_cp10_g1

0xb6eb,	// (0x0004e865) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00052cc3) clock_digital_separator_pane_cp10_g

0xd073,	// (0x000501ed) uniindi_top_pane_g3

0xd084,	// (0x000501fe) uniindi_top_pane_g4

0x8110,	// (0x0004b28a) vkb2_row_keypad_pane_ParamLimits

0x8110,	// (0x0004b28a) vkb2_row_keypad_pane

0x8352,	// (0x0004b4cc) vkb2_cell_t_keypad_pane_ParamLimits

0x8352,	// (0x0004b4cc) vkb2_cell_t_keypad_pane

0x8362,	// (0x0004b4dc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8362,	// (0x0004b4dc) vkb2_cell_t_keypad_pane_cp08

0x8377,	// (0x0004b4f1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8377,	// (0x0004b4f1) vkb2_cell_t_keypad_pane_cp09

0x838b,	// (0x0004b505) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x838b,	// (0x0004b505) vkb2_cell_t_keypad_pane_cp01

0x839c,	// (0x0004b516) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x839c,	// (0x0004b516) vkb2_cell_t_keypad_pane_cp02

0x83ad,	// (0x0004b527) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x83ad,	// (0x0004b527) vkb2_cell_t_keypad_pane_cp03

0x83be,	// (0x0004b538) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x83be,	// (0x0004b538) vkb2_cell_t_keypad_pane_cp04

0x83cf,	// (0x0004b549) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x83cf,	// (0x0004b549) vkb2_cell_t_keypad_pane_cp05

0x83e0,	// (0x0004b55a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x83e0,	// (0x0004b55a) vkb2_cell_t_keypad_pane_cp06

0x83f3,	// (0x0004b56d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x83f3,	// (0x0004b56d) vkb2_cell_t_keypad_pane_cp07

0x8408,	// (0x0004b582) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8408,	// (0x0004b582) vkb2_cell_t_keypad_pane_cp10

0xb966,	// (0x0004eae0) vkb2_cell_t_keypad_pane_g1

0xd657,	// (0x000507d1) vkb2_cell_t_keypad_pane_t1

0xe234,	// (0x000513ae) popup_grid_graphic2_window

0xd669,	// (0x000507e3) aid_size_cell_graphic2_ParamLimits

0xd669,	// (0x000507e3) aid_size_cell_graphic2

0xd6a1,	// (0x0005081b) bg_popup_window_pane_cp21_ParamLimits

0xd6a1,	// (0x0005081b) bg_popup_window_pane_cp21

0xd6af,	// (0x00050829) graphic2_pages_pane_ParamLimits

0xd6af,	// (0x00050829) graphic2_pages_pane

0xd6f5,	// (0x0005086f) grid_graphic2_control_pane_ParamLimits

0xd6f5,	// (0x0005086f) grid_graphic2_control_pane

0xd733,	// (0x000508ad) grid_graphic2_pane_ParamLimits

0xd733,	// (0x000508ad) grid_graphic2_pane

0xd7a9,	// (0x00050923) cell_graphic2_pane

0xe234,	// (0x000513ae) main_comp_mode_pane

0xc8e4,	// (0x0004fa5e) list_ai3_gene_pane_ParamLimits

0xccac,	// (0x0004fe26) bg_popup_window_pane_cp19_ParamLimits

0xccb8,	// (0x0004fe32) bg_touch_area_indi_pane_ParamLimits

0xccb8,	// (0x0004fe32) bg_touch_area_indi_pane

0xccce,	// (0x0004fe48) bg_touch_area_indi_pane_cp01_ParamLimits

0xccce,	// (0x0004fe48) bg_touch_area_indi_pane_cp01

0xcce6,	// (0x0004fe60) bg_touch_area_indi_pane_cp02_ParamLimits

0xcce6,	// (0x0004fe60) bg_touch_area_indi_pane_cp02

0xcd00,	// (0x0004fe7a) bg_touch_area_indi_pane_cp03_ParamLimits

0xcd00,	// (0x0004fe7a) bg_touch_area_indi_pane_cp03

0xcd1a,	// (0x0004fe94) popup_slider_window_g1_ParamLimits

0xcd36,	// (0x0004feb0) popup_slider_window_g2_ParamLimits

0xcd52,	// (0x0004fecc) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00052e65) popup_slider_window_g_ParamLimits

0xcdae,	// (0x0004ff28) popup_slider_window_t1_ParamLimits

0xce22,	// (0x0004ff9c) small_volume_slider_vertical_pane_ParamLimits

0xd7a9,	// (0x00050923) cell_graphic2_pane_ParamLimits

0xd7fb,	// (0x00050975) bg_button_pane_cp10_ParamLimits

0xd7fb,	// (0x00050975) bg_button_pane_cp10

0xd810,	// (0x0005098a) bg_button_pane_cp11_ParamLimits

0xd810,	// (0x0005098a) bg_button_pane_cp11

0xd825,	// (0x0005099f) graphic2_pages_pane_g1_ParamLimits

0xd825,	// (0x0005099f) graphic2_pages_pane_g1

0xd840,	// (0x000509ba) graphic2_pages_pane_g2_ParamLimits

0xd840,	// (0x000509ba) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x00052f29) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x00052f29) graphic2_pages_pane_g

0xd858,	// (0x000509d2) graphic2_pages_pane_t1_ParamLimits

0xd858,	// (0x000509d2) graphic2_pages_pane_t1

0xd86e,	// (0x000509e8) cell_graphic2_control_pane_ParamLimits

0xd86e,	// (0x000509e8) cell_graphic2_control_pane

0xd891,	// (0x00050a0b) cell_graphic2_pane_g1_ParamLimits

0xd891,	// (0x00050a0b) cell_graphic2_pane_g1

0xd89e,	// (0x00050a18) cell_graphic2_pane_g2_ParamLimits

0xd89e,	// (0x00050a18) cell_graphic2_pane_g2

0xd8ab,	// (0x00050a25) cell_graphic2_pane_g3_ParamLimits

0xd8ab,	// (0x00050a25) cell_graphic2_pane_g3

0xd8b8,	// (0x00050a32) cell_graphic2_pane_g4_ParamLimits

0xd8b8,	// (0x00050a32) cell_graphic2_pane_g4

0xd8c5,	// (0x00050a3f) cell_graphic2_pane_g5_ParamLimits

0xd8c5,	// (0x00050a3f) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x00052f2e) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x00052f2e) cell_graphic2_pane_g

0xd8e0,	// (0x00050a5a) cell_graphic2_pane_t1_ParamLimits

0xd8e0,	// (0x00050a5a) cell_graphic2_pane_t1

0x911b,	// (0x0004c295) grid_highlight_pane_cp11_ParamLimits

0x911b,	// (0x0004c295) grid_highlight_pane_cp11

0xe3e3,	// (0x0005155d) bg_button_pane_cp05

0xd909,	// (0x00050a83) cell_graphic2_control_pane_g1

0xb6eb,	// (0x0004e865) bg_touch_area_indi_pane_g1

0xd931,	// (0x00050aab) aid_cmod_rocker_key_size

0xd93b,	// (0x00050ab5) aid_cmode_itu_key_size

0xd945,	// (0x00050abf) main_cmode_video_pane

0xd94f,	// (0x00050ac9) main_comp_mode_itu_pane

0xd95b,	// (0x00050ad5) main_comp_mode_rocker_pane

0xd967,	// (0x00050ae1) cell_cmode_rocker_pane_ParamLimits

0xd967,	// (0x00050ae1) cell_cmode_rocker_pane

0xd97b,	// (0x00050af5) cell_cmode_itu_pane_ParamLimits

0xd97b,	// (0x00050af5) cell_cmode_itu_pane

0x0882,	// (0x000439fc) bg_button_pane_cp06_ParamLimits

0x0882,	// (0x000439fc) bg_button_pane_cp06

0xb966,	// (0x0004eae0) cell_cmode_rocker_pane_g1_ParamLimits

0xb966,	// (0x0004eae0) cell_cmode_rocker_pane_g1

0xcec9,	// (0x00050043) cell_cmode_rocker_pane_g2_ParamLimits

0xcec9,	// (0x00050043) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x00052f3e) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x00052f3e) cell_cmode_rocker_pane_g

0xe234,	// (0x000513ae) bg_button_pane_cp07

0xd992,	// (0x00050b0c) cell_cmode_itu_pane_g1

0xd99b,	// (0x00050b15) cell_cmode_itu_pane_t1

0xd9a9,	// (0x00050b23) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x00052f43) cell_cmode_itu_pane_t

0xd0f7,	// (0x00050271) aid_touch_ctrl_left

0xd0ff,	// (0x00050279) aid_touch_ctrl_right

0xe234,	// (0x000513ae) compa_mode_pane

0xd9b7,	// (0x00050b31) aid_cmod_rocker_key_size_cp

0xd9c1,	// (0x00050b3b) aid_cmode_itu_key_size_cp

0xd9cb,	// (0x00050b45) compa_mode_pane_g1

0xd9d3,	// (0x00050b4d) compa_mode_pane_g2

0xd9db,	// (0x00050b55) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x00052f48) compa_mode_pane_g

0xd9e3,	// (0x00050b5d) main_comp_mode_itu_pane_cp

0xd9eb,	// (0x00050b65) main_comp_mode_rocker_pane_cp

0xd9f3,	// (0x00050b6d) cell_cmode_itu_pane_cp_ParamLimits

0xd9f3,	// (0x00050b6d) cell_cmode_itu_pane_cp

0xda08,	// (0x00050b82) cell_cmode_rocker_pane_cp_ParamLimits

0xda08,	// (0x00050b82) cell_cmode_rocker_pane_cp

0x0882,	// (0x000439fc) bg_button_pane_cp06_cp_ParamLimits

0x0882,	// (0x000439fc) bg_button_pane_cp06_cp

0xb966,	// (0x0004eae0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb966,	// (0x0004eae0) cell_cmode_rocker_pane_g1_cp

0xb6eb,	// (0x0004e865) cell_cmode_rocker_pane_g2_cp

0xe234,	// (0x000513ae) bg_button_pane_cp07_cp

0xda1a,	// (0x00050b94) cell_cmode_itu_pane_g1_cp

0xda23,	// (0x00050b9d) cell_cmode_itu_pane_t1_cp

0xda23,	// (0x00050b9d) cell_cmode_itu_pane_t2_cp

0xa5e4,	// (0x0004d75e) settings_code_pane_cp2

0xe2a2,	// (0x0005141c) bg_popup_window_pane_cp3_ParamLimits

0xe5d1,	// (0x0005174b) heading_pane_cp3_ParamLimits

0xe5dd,	// (0x00051757) listscroll_popup_graphic_pane_ParamLimits

0x7916,	// (0x0004aa90) fep_hwr_aid_pane_ParamLimits

0x7de4,	// (0x0004af5e) aid_touch_sctrl_top_ParamLimits

0x7df1,	// (0x0004af6b) sctrl_sk_top_pane_g1_ParamLimits

0xb966,	// (0x0004eae0) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00052e7e) sctrl_sk_top_pane_g_ParamLimits

0x7dfe,	// (0x0004af78) sctrl_sk_top_pane_t1_ParamLimits

0x7de4,	// (0x0004af5e) aid_touch_sctrl_bottom_ParamLimits

0x7dfe,	// (0x0004af78) sctrl_sk_bottom_pane_t1_ParamLimits

0xd03d,	// (0x000501b7) aid_area_touch_clock

0x7fe7,	// (0x0004b161) aid_vkb2_area_top_pane_cell_ParamLimits

0x7fe7,	// (0x0004b161) aid_vkb2_area_top_pane_cell

0x8132,	// (0x0004b2ac) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8132,	// (0x0004b2ac) aid_vkb2_area_bottom_pane_cell

0xd5a2,	// (0x0005071c) popup_char_count_window

0xda31,	// (0x00050bab) popup_char_count_window_g1

0xda3a,	// (0x00050bb4) popup_char_count_window_g2

0xda43,	// (0x00050bbd) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x00052f4f) popup_char_count_window_g

0xda4c,	// (0x00050bc6) popup_char_count_window_t1

0x7ea1,	// (0x0004b01b) popup_fep_char_preview_window_ParamLimits

0x7ea1,	// (0x0004b01b) popup_fep_char_preview_window

0x8005,	// (0x0004b17f) vkb2_top_candi_pane_ParamLimits

0x8005,	// (0x0004b17f) vkb2_top_candi_pane

0xda5a,	// (0x00050bd4) cell_vkb2_top_candi_pane_ParamLimits

0xda5a,	// (0x00050bd4) cell_vkb2_top_candi_pane

0x96f7,	// (0x0004c871) bg_popup_fep_char_preview_window_ParamLimits

0x96f7,	// (0x0004c871) bg_popup_fep_char_preview_window

0x841d,	// (0x0004b597) popup_fep_char_preview_window_t1_ParamLimits

0x841d,	// (0x0004b597) popup_fep_char_preview_window_t1

0xdaab,	// (0x00050c25) bg_popup_fep_char_preview_window_g1

0xdab3,	// (0x00050c2d) bg_popup_fep_char_preview_window_g2

0xdabb,	// (0x00050c35) bg_popup_fep_char_preview_window_g3

0xdac3,	// (0x00050c3d) bg_popup_fep_char_preview_window_g4

0xdacb,	// (0x00050c45) bg_popup_fep_char_preview_window_g5

0x8457,	// (0x0004b5d1) bg_popup_fep_char_preview_window_g6

0xdad3,	// (0x00050c4d) bg_popup_fep_char_preview_window_g7

0xdadb,	// (0x00050c55) bg_popup_fep_char_preview_window_g8

0xdae3,	// (0x00050c5d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x00052f56) bg_popup_fep_char_preview_window_g

0xb966,	// (0x0004eae0) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb966,	// (0x0004eae0) cell_vkb2_top_candi_pane_g1

0xbca7,	// (0x0004ee21) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbca7,	// (0x0004ee21) cell_vkb2_top_candi_pane_g2

0xbcc8,	// (0x0004ee42) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbcc8,	// (0x0004ee42) cell_vkb2_top_candi_pane_g3

0x845f,	// (0x0004b5d9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x845f,	// (0x0004b5d9) cell_vkb2_top_candi_pane_g4

0xdaeb,	// (0x00050c65) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdaeb,	// (0x00050c65) cell_vkb2_top_candi_pane_g5

0xcec9,	// (0x00050043) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcec9,	// (0x00050043) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x00052f69) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x00052f69) cell_vkb2_top_candi_pane_g

0x8480,	// (0x0004b5fa) cell_vkb2_top_candi_pane_t1

0x76a0,	// (0x0004a81a) aid_size_touch_slider_mark_ParamLimits

0x76a0,	// (0x0004a81a) aid_size_touch_slider_mark

0xd6e5,	// (0x0005085f) grid_graphic2_catg_pane_ParamLimits

0xd6e5,	// (0x0005085f) grid_graphic2_catg_pane

0xd783,	// (0x000508fd) popup_grid_graphic2_window_t1_ParamLimits

0xd783,	// (0x000508fd) popup_grid_graphic2_window_t1

0xd795,	// (0x0005090f) popup_grid_graphic2_window_t2_ParamLimits

0xd795,	// (0x0005090f) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x00052f24) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x00052f24) popup_grid_graphic2_window_t

0xe3e3,	// (0x0005155d) bg_button_pane_cp05_ParamLimits

0xd909,	// (0x00050a83) cell_graphic2_control_pane_g1_ParamLimits

0xdb0c,	// (0x00050c86) cell_graphic2_catg_pane_ParamLimits

0xdb0c,	// (0x00050c86) cell_graphic2_catg_pane

0xe234,	// (0x000513ae) bg_button_pane_cp12

0xdb1e,	// (0x00050c98) cell_graphic2_catg_pane_g1

0xd009,	// (0x00050183) cell_tb_ext_pane_t1_ParamLimits

0x824f,	// (0x0004b3c9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x824f,	// (0x0004b3c9) vkb2_top_cell_right_narrow_pane

0x8267,	// (0x0004b3e1) vkb2_top_cell_right_wide_pane_ParamLimits

0x8267,	// (0x0004b3e1) vkb2_top_cell_right_wide_pane

0xf540,	// (0x000526ba) bg_vkb2_func_pane_ParamLimits

0xf540,	// (0x000526ba) bg_vkb2_func_pane

0x82d8,	// (0x0004b452) vkb2_top_cell_left_pane_g1_ParamLimits

0xf540,	// (0x000526ba) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf540,	// (0x000526ba) bg_vkb2_fuc_pane_cp03

0x8336,	// (0x0004b4b0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90af,	// (0x0004c229) bg_vkb2_func_pane_g1

0x90b7,	// (0x0004c231) bg_vkb2_func_pane_g2

0x90c7,	// (0x0004c241) bg_vkb2_func_pane_g3

0x90bf,	// (0x0004c239) bg_vkb2_func_pane_g4

0x90cf,	// (0x0004c249) bg_vkb2_func_pane_g5

0x90d7,	// (0x0004c251) bg_vkb2_func_pane_g6

0x90df,	// (0x0004c259) bg_vkb2_func_pane_g7

0x90e7,	// (0x0004c261) bg_vkb2_func_pane_g8

0x90a7,	// (0x0004c221) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x00052f76) bg_vkb2_func_pane_g

0xf540,	// (0x000526ba) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf540,	// (0x000526ba) bg_vkb2_fuc_pane_cp01

0x82d8,	// (0x0004b452) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x82d8,	// (0x0004b452) vkb2_top_cell_right_wide_pane_g1

0xf540,	// (0x000526ba) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf540,	// (0x000526ba) bg_vkb2_fuc_pane_cp02

0x8336,	// (0x0004b4b0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8336,	// (0x0004b4b0) vkb2_top_cell_right_narrow_pane_g1

0xcc2a,	// (0x0004fda4) aid_touch_area_decrease_ParamLimits

0xcc2a,	// (0x0004fda4) aid_touch_area_decrease

0xcc4e,	// (0x0004fdc8) aid_touch_area_increase_ParamLimits

0xcc4e,	// (0x0004fdc8) aid_touch_area_increase

0xcc5a,	// (0x0004fdd4) aid_touch_area_mute_ParamLimits

0xcc5a,	// (0x0004fdd4) aid_touch_area_mute

0xcc7e,	// (0x0004fdf8) aid_touch_area_slider_ParamLimits

0xcc7e,	// (0x0004fdf8) aid_touch_area_slider

0xcd6e,	// (0x0004fee8) popup_slider_window_g4_ParamLimits

0xcd6e,	// (0x0004fee8) popup_slider_window_g4

0xcd7a,	// (0x0004fef4) popup_slider_window_g5_ParamLimits

0xcd7a,	// (0x0004fef4) popup_slider_window_g5

0xcd9c,	// (0x0004ff16) popup_slider_window_g6_ParamLimits

0xcd9c,	// (0x0004ff16) popup_slider_window_g6

0xcddc,	// (0x0004ff56) popup_slider_window_t2_ParamLimits

0xcddc,	// (0x0004ff56) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00052e72) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00052e72) popup_slider_window_t

0xcdf4,	// (0x0004ff6e) slider_pane_ParamLimits

0xcdf4,	// (0x0004ff6e) slider_pane

0xdb27,	// (0x00050ca1) slider_pane_g1_ParamLimits

0xdb27,	// (0x00050ca1) slider_pane_g1

0xdb3b,	// (0x00050cb5) slider_pane_g2_ParamLimits

0xdb3b,	// (0x00050cb5) slider_pane_g2

0xdb51,	// (0x00050ccb) slider_pane_g3_ParamLimits

0xdb51,	// (0x00050ccb) slider_pane_g3

0x0003,

0xfe0f,	// (0x00052f89) slider_pane_g_ParamLimits

0xfe0f,	// (0x00052f89) slider_pane_g

0x8aa0,	// (0x0004bc1a) popup_tb_float_extension_window_ParamLimits

0x8aa0,	// (0x0004bc1a) popup_tb_float_extension_window

0xdb7d,	// (0x00050cf7) aid_size_cell_tb_float_ext

0xe234,	// (0x000513ae) bg_popup_sub_window_cp28

0xdb89,	// (0x00050d03) grid_tb_float_ext_pane

0xdb95,	// (0x00050d0f) cell_tb_float_ext_pane_ParamLimits

0xdb95,	// (0x00050d0f) cell_tb_float_ext_pane

0xdbb1,	// (0x00050d2b) cell_tb_float_ext_pane_g1

0xdbba,	// (0x00050d34) grid_highlight_pane_cp12

0x7a4f,	// (0x0004abc9) cell_last_hwr_side_pane_ParamLimits

0x7a4f,	// (0x0004abc9) cell_last_hwr_side_pane

0xb6eb,	// (0x0004e865) cell_last_hwr_side_pane_g1

0xdbc3,	// (0x00050d3d) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x00052f92) cell_last_hwr_side_pane_g

0x81fe,	// (0x0004b378) vkb2_area_bottom_space_btn_pane_ParamLimits

0x81fe,	// (0x0004b378) vkb2_area_bottom_space_btn_pane

0xb966,	// (0x0004eae0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd657,	// (0x000507d1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8480,	// (0x0004b5fa) cell_vkb2_top_candi_pane_t1_ParamLimits

0x849e,	// (0x0004b618) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x849e,	// (0x0004b618) vkb2_area_bottom_space_btn_pane_g1

0x84d8,	// (0x0004b652) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x84d8,	// (0x0004b652) vkb2_area_bottom_space_btn_pane_g2

0x850e,	// (0x0004b688) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x850e,	// (0x0004b688) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x00052f97) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x00052f97) vkb2_area_bottom_space_btn_pane_g

0x79bf,	// (0x0004ab39) cel_fep_hwr_func_pane_ParamLimits

0x79bf,	// (0x0004ab39) cel_fep_hwr_func_pane

0x79fb,	// (0x0004ab75) cell_hwr_side_button_pane_ParamLimits

0x79fb,	// (0x0004ab75) cell_hwr_side_button_pane

0xd03d,	// (0x000501b7) aid_area_touch_clock_ParamLimits

0xe3e3,	// (0x0005155d) bg_uniindi_top_pane_ParamLimits

0xd051,	// (0x000501cb) uniindi_top_pane_g1_ParamLimits

0xd067,	// (0x000501e1) uniindi_top_pane_g2_ParamLimits

0xd073,	// (0x000501ed) uniindi_top_pane_g3_ParamLimits

0xd084,	// (0x000501fe) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x00052eaa) uniindi_top_pane_g_ParamLimits

0xd091,	// (0x0005020b) uniindi_top_pane_t1_ParamLimits

0xe3e3,	// (0x0005155d) bg_vkb2_func_pane_cp01_ParamLimits

0xe3e3,	// (0x0005155d) bg_vkb2_func_pane_cp01

0xdbcc,	// (0x00050d46) cel_fep_hwr_func_pane_g1_ParamLimits

0xdbcc,	// (0x00050d46) cel_fep_hwr_func_pane_g1

0xe3e3,	// (0x0005155d) bg_vkb2_func_pane_cp02_ParamLimits

0xe3e3,	// (0x0005155d) bg_vkb2_func_pane_cp02

0xdbcc,	// (0x00050d46) cell_hwr_side_button_pane_g1_ParamLimits

0xdbcc,	// (0x00050d46) cell_hwr_side_button_pane_g1

0x8f28,	// (0x0004c0a2) status_pane_g4_ParamLimits

0x8f28,	// (0x0004c0a2) status_pane_g4

0x8f42,	// (0x0004c0bc) status_pane_t1

0xb48a,	// (0x0004e604) form2_midp_gauge_slider_cont_pane

0xb492,	// (0x0004e60c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb4a4,	// (0x0004e61e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb4b6,	// (0x0004e630) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00052c76) form2_midp_gauge_slider_pane_t_ParamLimits

0xb4c8,	// (0x0004e642) form2_midp_slider_pane_ParamLimits

0x7e61,	// (0x0004afdb) aid_size_cell_func_vkb2_ParamLimits

0x7e61,	// (0x0004afdb) aid_size_cell_func_vkb2

0xdb69,	// (0x00050ce3) slider_pane_g4_ParamLimits

0xdb69,	// (0x00050ce3) slider_pane_g4

0x8558,	// (0x0004b6d2) form2_midp_gauge_slider_pane_t2_cp01

0x8566,	// (0x0004b6e0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8566,	// (0x0004b6e0) form2_midp_gauge_slider_pane_t3_cp01

0x8583,	// (0x0004b6fd) form2_midp_slider_pane_cp01

0xe234,	// (0x000513ae) navi_smil_pane

0xdc05,	// (0x00050d7f) navi_smil_pane_g1

0xdc0d,	// (0x00050d87) navi_smil_pane_t1

0xdbda,	// (0x00050d54) form2_midp_slider_pane_g1

0xdbe3,	// (0x00050d5d) form2_midp_slider_pane_g2

0xdbeb,	// (0x00050d65) form2_midp_slider_pane_g3

0xdbda,	// (0x00050d54) form2_midp_slider_pane_g4

0xdbf3,	// (0x00050d6d) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x00052fa0) form2_midp_slider_pane_g

0x8548,	// (0x0004b6c2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8548,	// (0x0004b6c2) vkb2_area_bottom_space_btn_pane_g4

0x8d3f,	// (0x0004beb9) lc0_navi_pane_ParamLimits

0x8d3f,	// (0x0004beb9) lc0_navi_pane

0x8dbb,	// (0x0004bf35) lc0_stat_indi_pane_ParamLimits

0x8dbb,	// (0x0004bf35) lc0_stat_indi_pane

0x8dd2,	// (0x0004bf4c) ls0_title_pane_ParamLimits

0x8dd2,	// (0x0004bf4c) ls0_title_pane

0x0882,	// (0x000439fc) bg_popup_sub_pane_cp14_ParamLimits

0xd024,	// (0x0005019e) list_uniindi_pane_ParamLimits

0xd030,	// (0x000501aa) uniindi_top_pane_ParamLimits

0xd0cf,	// (0x00050249) list_single_uniindi_pane_g1_ParamLimits

0xd0e2,	// (0x0005025c) list_single_uniindi_pane_t1_ParamLimits

0x858c,	// (0x0004b706) lc0_stat_clock_pane_ParamLimits

0x858c,	// (0x0004b706) lc0_stat_clock_pane

0xdc1b,	// (0x00050d95) lc0_stat_indi_pane_g1_ParamLimits

0xdc1b,	// (0x00050d95) lc0_stat_indi_pane_g1

0xdc28,	// (0x00050da2) lc0_stat_indi_pane_g2_ParamLimits

0xdc28,	// (0x00050da2) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x00052fab) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x00052fab) lc0_stat_indi_pane_g

0x8599,	// (0x0004b713) lc0_uni_indicator_pane_ParamLimits

0x8599,	// (0x0004b713) lc0_uni_indicator_pane

0xdc35,	// (0x00050daf) ls0_title_pane_g1_ParamLimits

0xdc35,	// (0x00050daf) ls0_title_pane_g1

0xdc49,	// (0x00050dc3) ls0_title_pane_t1_ParamLimits

0xdc49,	// (0x00050dc3) ls0_title_pane_t1

0x85a6,	// (0x0004b720) lc0_uni_indicator_pane_g1_ParamLimits

0x85a6,	// (0x0004b720) lc0_uni_indicator_pane_g1

0xdc7f,	// (0x00050df9) lc0_stat_clock_pane_t1

0xe234,	// (0x000513ae) main_ai5_pane

0xdc8d,	// (0x00050e07) ai5_sk_pane_ParamLimits

0xdc8d,	// (0x00050e07) ai5_sk_pane

0xdc9a,	// (0x00050e14) cell_ai5_widget_pane_ParamLimits

0xdc9a,	// (0x00050e14) cell_ai5_widget_pane

0xe86e,	// (0x000519e8) aid_size_cell_widget_grid

0xe87c,	// (0x000519f6) bg_ai5_widget_pane_ParamLimits

0xe87c,	// (0x000519f6) bg_ai5_widget_pane

0xe8f0,	// (0x00051a6a) cell_ai5_widget_pane_g2

0xe900,	// (0x00051a7a) cell_ai5_widget_pane_g3

0xe917,	// (0x00051a91) cell_ai5_widget_pane_g4

0xe923,	// (0x00051a9d) cell_ai5_widget_pane_g5

0xe92f,	// (0x00051aa9) cell_ai5_widget_pane_g6

0xe93b,	// (0x00051ab5) cell_ai5_widget_pane_g7

0xe983,	// (0x00051afd) cell_ai5_widget_pane_t1_ParamLimits

0xe983,	// (0x00051afd) cell_ai5_widget_pane_t1

0xe9a0,	// (0x00051b1a) cell_ai5_widget_pane_t2_ParamLimits

0xe9a0,	// (0x00051b1a) cell_ai5_widget_pane_t2

0xe9b8,	// (0x00051b32) cell_ai5_widget_pane_t3_ParamLimits

0xe9b8,	// (0x00051b32) cell_ai5_widget_pane_t3

0xe9d0,	// (0x00051b4a) cell_ai5_widget_pane_t4_ParamLimits

0xe9d0,	// (0x00051b4a) cell_ai5_widget_pane_t4

0xe9ed,	// (0x00051b67) cell_ai5_widget_pane_t5_ParamLimits

0xe9ed,	// (0x00051b67) cell_ai5_widget_pane_t5

0xea0c,	// (0x00051b86) cell_ai5_widget_pane_t6_ParamLimits

0xea0c,	// (0x00051b86) cell_ai5_widget_pane_t6

0xea1e,	// (0x00051b98) cell_ai5_widget_pane_t7_ParamLimits

0xea1e,	// (0x00051b98) cell_ai5_widget_pane_t7

0xea37,	// (0x00051bb1) cell_ai5_widget_pane_t8_ParamLimits

0xea37,	// (0x00051bb1) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x00052fc5) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x00052fc5) cell_ai5_widget_pane_t

0xea8b,	// (0x00051c05) grid_ai5_widget_pane

0x0882,	// (0x000439fc) highlight_cell_ai5_widget_pane_ParamLimits

0x0882,	// (0x000439fc) highlight_cell_ai5_widget_pane

0xea99,	// (0x00051c13) ai5_sk_left_pane

0xeaa3,	// (0x00051c1d) ai5_sk_middle_pane

0xeaad,	// (0x00051c27) ai5_sk_right_pane

0xeab7,	// (0x00051c31) bg_ai5_widget_pane_g1_ParamLimits

0xeab7,	// (0x00051c31) bg_ai5_widget_pane_g1

0xeac3,	// (0x00051c3d) bg_ai5_widget_pane_g2_ParamLimits

0xeac3,	// (0x00051c3d) bg_ai5_widget_pane_g2

0xeacf,	// (0x00051c49) bg_ai5_widget_pane_g3_ParamLimits

0xeacf,	// (0x00051c49) bg_ai5_widget_pane_g3

0xeadb,	// (0x00051c55) bg_ai5_widget_pane_g4_ParamLimits

0xeadb,	// (0x00051c55) bg_ai5_widget_pane_g4

0xeae7,	// (0x00051c61) bg_ai5_widget_pane_g5_ParamLimits

0xeae7,	// (0x00051c61) bg_ai5_widget_pane_g5

0xeaf3,	// (0x00051c6d) bg_ai5_widget_pane_g6_ParamLimits

0xeaf3,	// (0x00051c6d) bg_ai5_widget_pane_g6

0xeaff,	// (0x00051c79) bg_ai5_widget_pane_g7_ParamLimits

0xeaff,	// (0x00051c79) bg_ai5_widget_pane_g7

0xeb0b,	// (0x00051c85) bg_ai5_widget_pane_g8_ParamLimits

0xeb0b,	// (0x00051c85) bg_ai5_widget_pane_g8

0xeb17,	// (0x00051c91) bg_ai5_widget_pane_g9_ParamLimits

0xeb17,	// (0x00051c91) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x00052fda) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x00052fda) bg_ai5_widget_pane_g

0xeb4f,	// (0x00051cc9) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb4f,	// (0x00051cc9) cell_shortcut_ai5_widget_pane

0x11d3,	// (0x0004434d) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x00051cdc) cell_grid_ai5_widget_pane_g1

0x11d3,	// (0x0004434d) highlight_cell_shortcut_ai5_widget_pane

0x90b7,	// (0x0004c231) ai5_sk_left_pane_g1

0xeb6b,	// (0x00051ce5) ai5_sk_left_pane_g2

0xeb73,	// (0x00051ced) ai5_sk_left_pane_g3

0xeb7b,	// (0x00051cf5) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00052fed) ai5_sk_left_pane_g

0xeb83,	// (0x00051cfd) ai5_sk_left_pane_t1

0x90af,	// (0x0004c229) ai5_sk_right_pane_g1

0xeb91,	// (0x00051d0b) ai5_sk_right_pane_g2

0xeb99,	// (0x00051d13) ai5_sk_right_pane_g3

0xeba1,	// (0x00051d1b) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x00052ff6) ai5_sk_right_pane_g

0xeba9,	// (0x00051d23) ai5_sk_right_pane_t1

0x90af,	// (0x0004c229) ai5_sk_middle_pane_g1

0x90b7,	// (0x0004c231) ai5_sk_middle_pane_g2

0x90cf,	// (0x0004c249) ai5_sk_middle_pane_g3

0xeb99,	// (0x00051d13) ai5_sk_middle_pane_g4

0xeb73,	// (0x00051ced) ai5_sk_middle_pane_g5

0xebb7,	// (0x00051d31) ai5_sk_middle_pane_g6

0xebbf,	// (0x00051d39) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x00052fff) ai5_sk_middle_pane_g

0x8bc1,	// (0x0004bd3b) aid_touch_area_size_lc0_ParamLimits

0x8bc1,	// (0x0004bd3b) aid_touch_area_size_lc0

0x7b5e,	// (0x0004acd8) cell_hwr_candidate_pane_t1_ParamLimits

0x8bdf,	// (0x0004bd59) aid_touch_navi_pane

0x8ed2,	// (0x0004c04c) status_dt_navi_pane_ParamLimits

0x8ed2,	// (0x0004c04c) status_dt_navi_pane

0x8edf,	// (0x0004c059) status_dt_sta_pane_ParamLimits

0x8edf,	// (0x0004c059) status_dt_sta_pane

0xebc7,	// (0x00051d41) dt_sta_controll_pane

0xebd4,	// (0x00051d4e) dt_sta_indi_pane

0xebe5,	// (0x00051d5f) dt_sta_title_pane

0xe3e3,	// (0x0005155d) bg_dt_sta_indi_pane_ParamLimits

0xe3e3,	// (0x0005155d) bg_dt_sta_indi_pane

0xebf8,	// (0x00051d72) dt_sta_battery_pane

0xec00,	// (0x00051d7a) dt_sta_indi_pane_g1

0xec09,	// (0x00051d83) dt_sta_indi_pane_g2

0xec12,	// (0x00051d8c) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x0005300e) dt_sta_indi_pane_g

0xec1b,	// (0x00051d95) dt_sta_signal_pane

0x0882,	// (0x000439fc) bg_dt_sta_title_pane_ParamLimits

0x0882,	// (0x000439fc) bg_dt_sta_title_pane

0xec24,	// (0x00051d9e) dt_sta_title_pane_g1

0xec2c,	// (0x00051da6) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x00051da6) dt_sta_title_pane_t1

0xe234,	// (0x000513ae) bg_dt_sta_control_pane

0xec41,	// (0x00051dbb) dt_sta_controll_pane_g1

0xec4a,	// (0x00051dc4) bg_dt_sta_title_pane_g1

0xec53,	// (0x00051dcd) bg_dt_sta_title_pane_g2

0xec5c,	// (0x00051dd6) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x00053015) bg_dt_sta_title_pane_g

0xb6eb,	// (0x0004e865) bg_dt_sta_indi_pane_g1

0xec65,	// (0x00051ddf) dt_sta_signal_pane_g1

0xec6d,	// (0x00051de7) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x0005301c) dt_sta_signal_pane_g

0xec75,	// (0x00051def) dt_sta_battery_pane_g1

0xec7e,	// (0x00051df8) dt_sta_battery_pane_t1

0xb6eb,	// (0x0004e865) bg_dt_sta_control_pane_g1

0x0de6,	// (0x00043f60) fep_china_uni_eep_pane

0x0dee,	// (0x00043f68) fep_china_uni_entry_pane_ParamLimits

0x0dfe,	// (0x00043f78) popup_fep_china_uni_window_g1_ParamLimits

0x0e0e,	// (0x00043f88) popup_fep_china_uni_window_g2_ParamLimits

0x0e0e,	// (0x00043f88) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005289c) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005289c) popup_fep_china_uni_window_g

0xec8d,	// (0x00051e07) fep_china_uni_eep_pane_g1

0xec95,	// (0x00051e0f) fep_china_uni_eep_pane_t1

0xdbfc,	// (0x00050d76) aid_touch_area_size_smil_player

0x8d37,	// (0x0004beb1) lc0_clock_pane

0x8f36,	// (0x0004c0b0) status_pane_g5_ParamLimits

0x8f36,	// (0x0004c0b0) status_pane_g5

0x7193,	// (0x0004a30d) popup_keymap_window

0x8ef4,	// (0x0004c06e) status_icon_pane

0xe900,	// (0x00051a7a) cell_ai5_widget_pane_g3_ParamLimits

0xe917,	// (0x00051a91) cell_ai5_widget_pane_g4_ParamLimits

0xe923,	// (0x00051a9d) cell_ai5_widget_pane_g5_ParamLimits

0xe947,	// (0x00051ac1) cell_ai5_widget_pane_g8_ParamLimits

0xe947,	// (0x00051ac1) cell_ai5_widget_pane_g8

0xe95b,	// (0x00051ad5) cell_ai5_widget_pane_g9_ParamLimits

0xe95b,	// (0x00051ad5) cell_ai5_widget_pane_g9

0xe96f,	// (0x00051ae9) cell_ai5_widget_pane_g10_ParamLimits

0xe96f,	// (0x00051ae9) cell_ai5_widget_pane_g10

0xeca4,	// (0x00051e1e) status_icon_pane_g1

0xe234,	// (0x000513ae) bg_popup_sub_pane_cp13

0xecac,	// (0x00051e26) popup_keymap_window_t1

0x6e50,	// (0x00049fca) control_pane_g6_ParamLimits

0x6e50,	// (0x00049fca) control_pane_g6

0x6e5d,	// (0x00049fd7) control_pane_g7_ParamLimits

0x6e5d,	// (0x00049fd7) control_pane_g7

0x6e6a,	// (0x00049fe4) control_pane_g8_ParamLimits

0x6e6a,	// (0x00049fe4) control_pane_g8

0xebc7,	// (0x00051d41) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x00051d4e) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x00051d5f) dt_sta_title_pane_ParamLimits

0xe807,	// (0x00051981) aid_size_touch_scroll_bar_cale

0x5ed7,	// (0x00049051) popup_discreet_window_ParamLimits

0x5ed7,	// (0x00049051) popup_discreet_window

0x5f65,	// (0x000490df) popup_sk_window

0x96f7,	// (0x0004c871) bg_popup_sub_pane_cp28_ParamLimits

0x96f7,	// (0x0004c871) bg_popup_sub_pane_cp28

0xecba,	// (0x00051e34) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x00051e34) popup_discreet_window_g1

0xecda,	// (0x00051e54) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x00051e54) popup_discreet_window_t1

0xecf8,	// (0x00051e72) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x00051e72) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x00053021) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x00053021) popup_discreet_window_t

0x85b9,	// (0x0004b733) popup_sk_window_g1

0x85c3,	// (0x0004b73d) popup_sk_window_g2

0x0001,

0xfeae,	// (0x00053028) popup_sk_window_g

0x85cd,	// (0x0004b747) popup_sk_window_t1

0x85dd,	// (0x0004b757) popup_sk_window_t1_copy1

0xe8f0,	// (0x00051a6a) cell_ai5_widget_pane_g2_ParamLimits

0xea49,	// (0x00051bc3) cell_ai5_widget_pane_t9_ParamLimits

0xea49,	// (0x00051bc3) cell_ai5_widget_pane_t9

0xe234,	// (0x000513ae) main_fep_fshwr2_pane

0x85eb,	// (0x0004b765) aid_fshwr2_btn_pane

0x85f7,	// (0x0004b771) aid_fshwr2_syb_pane

0x8603,	// (0x0004b77d) aid_fshwr2_txt_pane

0x860f,	// (0x0004b789) fshwr2_func_candi_pane

0x8622,	// (0x0004b79c) fshwr2_hwr_syb_pane

0x8630,	// (0x0004b7aa) fshwr2_icf_pane

0xe234,	// (0x000513ae) fshwr2_icf_bg_pane

0x865f,	// (0x0004b7d9) fshwr2_icf_pane_t1_ParamLimits

0x865f,	// (0x0004b7d9) fshwr2_icf_pane_t1

0x0d64,	// (0x00043ede) fshwr2_func_candi_pane_g1

0xed4a,	// (0x00051ec4) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x00051ec4) fshwr2_func_candi_row_pane

0x8677,	// (0x0004b7f1) cell_fshwr2_syb_pane_ParamLimits

0x8677,	// (0x0004b7f1) cell_fshwr2_syb_pane

0xb966,	// (0x0004eae0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb966,	// (0x0004eae0) fshwr2_hwr_syb_pane_g1

0xe234,	// (0x000513ae) bg_popup_call_pane_cp01

0x868d,	// (0x0004b807) fshwr2_func_candi_cell_pane_ParamLimits

0x868d,	// (0x0004b807) fshwr2_func_candi_cell_pane

0xed5a,	// (0x00051ed4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed5a,	// (0x00051ed4) fshwr2_func_candi_cell_bg_pane

0x86d7,	// (0x0004b851) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x86d7,	// (0x0004b851) fshwr2_func_candi_cell_pane_g1

0x86f7,	// (0x0004b871) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x86f7,	// (0x0004b871) fshwr2_func_candi_cell_pane_t1

0xe234,	// (0x000513ae) bg_button_pane_cp08

0xed66,	// (0x00051ee0) cell_fshwr2_syb_bg_pane

0x870a,	// (0x0004b884) cell_fshwr2_syb_bg_pane_g1

0x8712,	// (0x0004b88c) cell_fshwr2_syb_bg_pane_t1

0x0882,	// (0x000439fc) main_tmo_pane

0xa21b,	// (0x0004d395) uni_indicator_pane_g1_ParamLimits

0xa231,	// (0x0004d3ab) uni_indicator_pane_g2_ParamLimits

0xa247,	// (0x0004d3c1) uni_indicator_pane_g3_ParamLimits

0xa25c,	// (0x0004d3d6) uni_indicator_pane_g4_ParamLimits

0xa25c,	// (0x0004d3d6) uni_indicator_pane_g4

0xa270,	// (0x0004d3ea) uni_indicator_pane_g5_ParamLimits

0xa270,	// (0x0004d3ea) uni_indicator_pane_g5

0xa270,	// (0x0004d3ea) uni_indicator_pane_g6_ParamLimits

0xa270,	// (0x0004d3ea) uni_indicator_pane_g6

0xf926,	// (0x00052aa0) uni_indicator_pane_g_ParamLimits

0xcbfa,	// (0x0004fd74) popup_tmo_note_window_ParamLimits

0xcbfa,	// (0x0004fd74) popup_tmo_note_window

0x0882,	// (0x000439fc) fshwr2_bg_pane

0x86e8,	// (0x0004b862) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x86e8,	// (0x0004b862) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x0005302d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x0005302d) fshwr2_func_candi_cell_pane_g

0xb6eb,	// (0x0004e865) bg_popup_window_pane_cp01

0x8721,	// (0x0004b89b) bg_popup_window_pane_g1_cp01

0xed6e,	// (0x00051ee8) bg_popup_window_pane_cp22_ParamLimits

0xed6e,	// (0x00051ee8) bg_popup_window_pane_cp22

0xed7c,	// (0x00051ef6) listscroll_tmo_link_pane_ParamLimits

0xed7c,	// (0x00051ef6) listscroll_tmo_link_pane

0xedbc,	// (0x00051f36) popup_tmo_note_window_g1_ParamLimits

0xedbc,	// (0x00051f36) popup_tmo_note_window_g1

0xedc9,	// (0x00051f43) tmo_note_info_pane_ParamLimits

0xedc9,	// (0x00051f43) tmo_note_info_pane

0xede3,	// (0x00051f5d) list_tmo_note_info_pane_g1_ParamLimits

0xede3,	// (0x00051f5d) list_tmo_note_info_pane_g1

0xedfa,	// (0x00051f74) list_tmo_note_info_pane_g2_ParamLimits

0xedfa,	// (0x00051f74) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x00053032) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x00053032) list_tmo_note_info_pane_g

0xee16,	// (0x00051f90) list_tmo_note_info_text_pane_ParamLimits

0xee16,	// (0x00051f90) list_tmo_note_info_text_pane

0xee9b,	// (0x00052015) list_tmo_link_pane

0xeea8,	// (0x00052022) scroll_pane_cp20

0xeeb5,	// (0x0005202f) list_single_tmo_link_pane_ParamLimits

0xeeb5,	// (0x0005202f) list_single_tmo_link_pane

0xeec5,	// (0x0005203f) list_single_tmo_link_pane_t1

0xeed3,	// (0x0005204d) list_tmo_note_info_text_pane_t1_ParamLimits

0xeed3,	// (0x0005204d) list_tmo_note_info_text_pane_t1

0x64a1,	// (0x0004961b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x64a1,	// (0x0004961b) aid_size_touch_scroll_bar_cp01

0x5397,	// (0x00048511) aid_size_touch_slider_marker

0x5f4d,	// (0x000490c7) popup_settings_window_ParamLimits

0x5f4d,	// (0x000490c7) popup_settings_window

0x5510,	// (0x0004868a) popup_candi_list_indi_window

0x8bdf,	// (0x0004bd59) aid_touch_navi_pane_ParamLimits

0x7db8,	// (0x0004af32) rs_clock_indi_pane

0x7dc1,	// (0x0004af3b) sctrl_sk_bottom_pane_ParamLimits

0x7dd2,	// (0x0004af4c) sctrl_sk_top_pane_ParamLimits

0x7ebb,	// (0x0004b035) popup_fep_tooltip_window

0xe86e,	// (0x000519e8) aid_size_cell_widget_grid_ParamLimits

0xe8db,	// (0x00051a55) cell_ai5_widget_pane_g1_ParamLimits

0xe8db,	// (0x00051a55) cell_ai5_widget_pane_g1

0xe92f,	// (0x00051aa9) cell_ai5_widget_pane_g6_ParamLimits

0xe93b,	// (0x00051ab5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x00052fb0) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00052fb0) cell_ai5_widget_pane_g

0xea6d,	// (0x00051be7) cell_ai5_widget_pane_t10_ParamLimits

0xea6d,	// (0x00051be7) cell_ai5_widget_pane_t10

0xea8b,	// (0x00051c05) grid_ai5_widget_pane_ParamLimits

0xeb23,	// (0x00051c9d) cell_contacts_ai5_widget_pane_ParamLimits

0xeb23,	// (0x00051c9d) cell_contacts_ai5_widget_pane

0xed0d,	// (0x00051e87) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x00051e87) popup_discreet_window_t3

0x8647,	// (0x0004b7c1) popup_fshwr2_char_preview_window_ParamLimits

0x8647,	// (0x0004b7c1) popup_fshwr2_char_preview_window

0xee34,	// (0x00051fae) tmo_note_info_pane_t1

0xee49,	// (0x00051fc3) tmo_note_info_pane_t2

0xee62,	// (0x00051fdc) tmo_note_info_pane_t3

0xee77,	// (0x00051ff1) tmo_note_info_pane_t4

0xee89,	// (0x00052003) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x00053037) tmo_note_info_pane_t

0xee9b,	// (0x00052015) list_tmo_link_pane_ParamLimits

0xeea8,	// (0x00052022) scroll_pane_cp20_ParamLimits

0xe234,	// (0x000513ae) bg_popup_fep_char_preview_window_cp01

0xeeec,	// (0x00052066) popup_fshwr2_char_preview_window_t1

0xeefa,	// (0x00052074) popup_candi_list_indi_window_g1

0xef03,	// (0x0005207d) bg_cell_contacts_ai5_widget_pane

0xef0f,	// (0x00052089) cell_contacts_ai5_widget_pane_g1

0xef24,	// (0x0005209e) cell_contacts_ai5_widget_pane_g2

0xef30,	// (0x000520aa) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x00053042) cell_contacts_ai5_widget_pane_g

0xef3c,	// (0x000520b6) cell_contacts_ai5_widget_pane_t1

0x0882,	// (0x000439fc) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefb3,	// (0x0005212d) settings_container_pane

0x11d3,	// (0x0004434d) listscroll_set_pane_copy1

0xae0c,	// (0x0004df86) scroll_pane_cp121_copy1

0xefbf,	// (0x00052139) set_content_pane_copy1

0xefc7,	// (0x00052141) aid_height_set_list_copy1_ParamLimits

0xefc7,	// (0x00052141) aid_height_set_list_copy1

0xa470,	// (0x0004d5ea) aid_size_parent_copy1_ParamLimits

0xa470,	// (0x0004d5ea) aid_size_parent_copy1

0xefd3,	// (0x0005214d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd3,	// (0x0005214d) button_value_adjust_pane_cp6_copy1

0x6fd4,	// (0x0004a14e) list_highlight_pane_cp2_copy1_ParamLimits

0x6fd4,	// (0x0004a14e) list_highlight_pane_cp2_copy1

0xefe7,	// (0x00052161) list_set_pane_copy1_ParamLimits

0xefe7,	// (0x00052161) list_set_pane_copy1

0xef4e,	// (0x000520c8) main_pane_set_t1_copy1_ParamLimits

0xef4e,	// (0x000520c8) main_pane_set_t1_copy1

0xef88,	// (0x00052102) main_pane_set_t2_copy1_ParamLimits

0xef88,	// (0x00052102) main_pane_set_t2_copy1

0xf0ae,	// (0x00052228) main_pane_set_t3_copy1

0xf0bc,	// (0x00052236) main_pane_set_t4_copy1

0xefa7,	// (0x00052121) set_content_pane_g1_copy1_ParamLimits

0xefa7,	// (0x00052121) set_content_pane_g1_copy1

0xf0ca,	// (0x00052244) setting_code_pane_copy1

0xf0d2,	// (0x0005224c) setting_slider_graphic_pane_copy1

0xf0d2,	// (0x0005224c) setting_slider_pane_copy1

0xf0d2,	// (0x0005224c) setting_text_pane_copy1

0xf0d2,	// (0x0005224c) setting_volume_pane_copy1

0xf0ca,	// (0x00052244) settings_code_pane_cp2_copy1

0xf0da,	// (0x00052254) settings_code_pane_cp_copy1_ParamLimits

0xf0da,	// (0x00052254) settings_code_pane_cp_copy1

0x872a,	// (0x0004b8a4) volume_set_pane_copy1

0xf0ee,	// (0x00052268) volume_set_pane_g10_copy1

0xf0fa,	// (0x00052274) volume_set_pane_g1_copy1

0xf104,	// (0x0005227e) volume_set_pane_g2_copy1

0xf10e,	// (0x00052288) volume_set_pane_g3_copy1

0xf118,	// (0x00052292) volume_set_pane_g4_copy1

0xf122,	// (0x0005229c) volume_set_pane_g5_copy1

0xf12c,	// (0x000522a6) volume_set_pane_g6_copy1

0xf136,	// (0x000522b0) volume_set_pane_g7_copy1

0xf140,	// (0x000522ba) volume_set_pane_g8_copy1

0xf14a,	// (0x000522c4) volume_set_pane_g9_copy1

0xe2a2,	// (0x0005141c) bg_set_opt_pane_cp_copy1_ParamLimits

0xe2a2,	// (0x0005141c) bg_set_opt_pane_cp_copy1

0x8736,	// (0x0004b8b0) setting_slider_pane_t1_copy1_ParamLimits

0x8736,	// (0x0004b8b0) setting_slider_pane_t1_copy1

0x8754,	// (0x0004b8ce) setting_slider_pane_t2_copy1_ParamLimits

0x8754,	// (0x0004b8ce) setting_slider_pane_t2_copy1

0x876e,	// (0x0004b8e8) setting_slider_pane_t3_copy1_ParamLimits

0x876e,	// (0x0004b8e8) setting_slider_pane_t3_copy1

0x8786,	// (0x0004b900) slider_set_pane_copy1_ParamLimits

0x8786,	// (0x0004b900) slider_set_pane_copy1

0x08dd,	// (0x00043a57) set_opt_bg_pane_g1_copy2

0x08e5,	// (0x00043a5f) set_opt_bg_pane_g2_copy2

0xf154,	// (0x000522ce) set_opt_bg_pane_g3_copy2

0x08f5,	// (0x00043a6f) set_opt_bg_pane_g4_copy2

0x08fd,	// (0x00043a77) set_opt_bg_pane_g5_copy2

0x0905,	// (0x00043a7f) set_opt_bg_pane_g6_copy2

0xf15e,	// (0x000522d8) set_opt_bg_pane_g7_copy2

0xf168,	// (0x000522e2) set_opt_bg_pane_g8_copy2

0xf172,	// (0x000522ec) set_opt_bg_pane_g9_copy2

0x879c,	// (0x0004b916) aid_size_touch_slider_mark_copy1_ParamLimits

0x879c,	// (0x0004b916) aid_size_touch_slider_mark_copy1

0xf17c,	// (0x000522f6) slider_set_pane_g1_copy1

0x87b0,	// (0x0004b92a) slider_set_pane_g2_copy1

0x76c0,	// (0x0004a83a) slider_set_pane_g3_copy1_ParamLimits

0x76c0,	// (0x0004a83a) slider_set_pane_g3_copy1

0x76d4,	// (0x0004a84e) slider_set_pane_g4_copy1_ParamLimits

0x76d4,	// (0x0004a84e) slider_set_pane_g4_copy1

0x76ec,	// (0x0004a866) slider_set_pane_g5_copy1_ParamLimits

0x76ec,	// (0x0004a866) slider_set_pane_g5_copy1

0x76c0,	// (0x0004a83a) slider_set_pane_g6_copy1_ParamLimits

0x76c0,	// (0x0004a83a) slider_set_pane_g6_copy1

0x87b8,	// (0x0004b932) slider_set_pane_g7_copy1_ParamLimits

0x87b8,	// (0x0004b932) slider_set_pane_g7_copy1

0xe248,	// (0x000513c2) bg_set_opt_pane_cp2_copy1

0xf185,	// (0x000522ff) setting_slider_graphic_pane_g1_copy1

0xf18e,	// (0x00052308) setting_slider_graphic_pane_t1_copy1

0xf19e,	// (0x00052318) setting_slider_graphic_pane_t2_copy1

0xf1ae,	// (0x00052328) slider_set_pane_cp_copy1

0xf1be,	// (0x00052338) input_focus_pane_cp1_copy1

0xf1c7,	// (0x00052341) list_set_text_pane_copy1

0xf1cf,	// (0x00052349) setting_text_pane_g1_copy1

0x4d86,	// (0x00047f00) set_text_pane_t1_copy1

0xf1be,	// (0x00052338) input_focus_pane_cp2_copy1

0xf1cf,	// (0x00052349) setting_code_pane_g1_copy1

0xf1d8,	// (0x00052352) setting_code_pane_t1_copy1

0xf1e6,	// (0x00052360) list_set_graphic_pane_copy1

0xe248,	// (0x000513c2) bg_set_opt_pane_cp4_copy1

0x6b0f,	// (0x00049c89) list_set_graphic_pane_g1_copy1_ParamLimits

0x6b0f,	// (0x00049c89) list_set_graphic_pane_g1_copy1

0xf1f8,	// (0x00052372) list_set_graphic_pane_g2_copy1

0x6b27,	// (0x00049ca1) list_set_graphic_pane_t1_copy1_ParamLimits

0x6b27,	// (0x00049ca1) list_set_graphic_pane_t1_copy1

0xb6eb,	// (0x0004e865) rs_clock_indi_pane_g1

0xf200,	// (0x0005237a) rs_clock_indi_pane_t1

0xf20e,	// (0x00052388) rs_indi_pane

0xf216,	// (0x00052390) rs_indi_pane_g1

0xf21f,	// (0x00052399) rs_indi_pane_g2

0xf228,	// (0x000523a2) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x00053049) rs_indi_pane_g

0x11d3,	// (0x0004434d) bg_popup_preview_window_pane_cp03

0xf231,	// (0x000523ab) popup_fep_tooltip_window_t1

0xc3a2,	// (0x0004f51c) popup_note2_window_g2_ParamLimits

0xc3a2,	// (0x0004f51c) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00052de2) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00052de2) popup_note2_window_g

0xc8aa,	// (0x0004fa24) bg_popup_sub_pane_cp11_ParamLimits

0xc8b7,	// (0x0004fa31) cell_ai3_links_pane_g1_ParamLimits

0xc8ce,	// (0x0004fa48) cell_ai3_links_pane_t1

0x4d86,	// (0x00047f00) set_text_pane_t1_copy1_ParamLimits

0x6ba6,	// (0x00049d20) cell_graphic_popup_pane_cp2_ParamLimits

0x6ba6,	// (0x00049d20) cell_graphic_popup_pane_cp2

0xf23f,	// (0x000523b9) cell_graphic_popup_pane_g1_cp2

0xe61a,	// (0x00051794) cell_graphic_popup_pane_g2_cp2

0xf247,	// (0x000523c1) cell_graphic_popup_pane_g3_cp2

0xf24f,	// (0x000523c9) cell_graphic_popup_pane_t2_cp2

0xe62b,	// (0x000517a5) grid_highlight_pane_cp3_cp2

0x0b86,	// (0x00043d00) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0882,	// (0x000439fc) main_tmo_pane_ParamLimits

0xcbee,	// (0x0004fd68) popup_tmo_big_image_note_window

0xe8ca,	// (0x00051a44) cell_ai5_widget_list_pane

0xe8d2,	// (0x00051a4c) cell_ai5_widget_lrg_icon_pane

0xee34,	// (0x00051fae) tmo_note_info_pane_t1_ParamLimits

0xee49,	// (0x00051fc3) tmo_note_info_pane_t2_ParamLimits

0xee62,	// (0x00051fdc) tmo_note_info_pane_t3_ParamLimits

0xee77,	// (0x00051ff1) tmo_note_info_pane_t4_ParamLimits

0xee89,	// (0x00052003) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x00053037) tmo_note_info_pane_t_ParamLimits

0xefb3,	// (0x0005212d) settings_container_pane_ParamLimits

0xf1b6,	// (0x00052330) indicator_popup_pane_cp5

0xf1b6,	// (0x00052330) indicator_popup_pane_cp6

0xf1e6,	// (0x00052360) list_set_graphic_pane_copy1_ParamLimits

0xe234,	// (0x000513ae) bg_popup_window_pane_cp23

0xf25d,	// (0x000523d7) popup_tmo_big_image_note_window_g1

0xf269,	// (0x000523e3) popup_tmo_big_image_note_window_t1

0xf279,	// (0x000523f3) popup_tmo_big_image_note_window_t2

0xf289,	// (0x00052403) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x00053050) popup_tmo_big_image_note_window_t

0xb6eb,	// (0x0004e865) cell_ai5_widget_lrg_icon_pane_g1

0xf299,	// (0x00052413) cell_ai5_widget_lrg_icon_pane_t1

0xf2a7,	// (0x00052421) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a7,	// (0x00052421) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x00052439) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x00052439) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x00052446) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x00052446) cell_ai5_widget_list_row_pane_t1

0xf2f7,	// (0x00052471) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2f7,	// (0x00052471) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x00053057) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x00053057) cell_ai5_widget_list_row_pane_t

0xe234,	// (0x000513ae) main_fep_vtchi_ss_pane

0xf33b,	// (0x000524b5) popup_fep_char_pre_window

0xf343,	// (0x000524bd) popup_fep_ituss_window

0xf364,	// (0x000524de) popup_fep_vkbss_window

0xf385,	// (0x000524ff) grid_vkbss_keypad_pane_ParamLimits

0xf385,	// (0x000524ff) grid_vkbss_keypad_pane

0xf395,	// (0x0005250f) ituss_keypad_pane

0x87da,	// (0x0004b954) aid_vkbss_key_offset_ParamLimits

0x87da,	// (0x0004b954) aid_vkbss_key_offset

0x87e6,	// (0x0004b960) cell_vkbss_key_pane_ParamLimits

0x87e6,	// (0x0004b960) cell_vkbss_key_pane

0xf3a4,	// (0x0005251e) bg_cell_vkbss_key_g1_ParamLimits

0xf3a4,	// (0x0005251e) bg_cell_vkbss_key_g1

0xf3b0,	// (0x0005252a) cell_vkbss_key_3p_pane_ParamLimits

0xf3b0,	// (0x0005252a) cell_vkbss_key_3p_pane

0xf3ca,	// (0x00052544) cell_vkbss_key_g1_ParamLimits

0xf3ca,	// (0x00052544) cell_vkbss_key_g1

0xf3e4,	// (0x0005255e) cell_vkbss_key_t1_ParamLimits

0xf3e4,	// (0x0005255e) cell_vkbss_key_t1

0x87fc,	// (0x0004b976) cell_ituss_key_pane_ParamLimits

0x87fc,	// (0x0004b976) cell_ituss_key_pane

0xf40f,	// (0x00052589) bg_cell_ituss_key_g1_ParamLimits

0xf40f,	// (0x00052589) bg_cell_ituss_key_g1

0xf41b,	// (0x00052595) cell_ituss_key_pane_g1_ParamLimits

0xf41b,	// (0x00052595) cell_ituss_key_pane_g1

0x880d,	// (0x0004b987) cell_ituss_key_pane_g2_ParamLimits

0x880d,	// (0x0004b987) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x0005305e) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x0005305e) cell_ituss_key_pane_g

0x8839,	// (0x0004b9b3) cell_ituss_key_t1_ParamLimits

0x8839,	// (0x0004b9b3) cell_ituss_key_t1

0x8873,	// (0x0004b9ed) cell_ituss_key_t2_ParamLimits

0x8873,	// (0x0004b9ed) cell_ituss_key_t2

0x88a4,	// (0x0004ba1e) cell_ituss_key_t3_ParamLimits

0x88a4,	// (0x0004ba1e) cell_ituss_key_t3

0x8873,	// (0x0004b9ed) cell_ituss_key_t4_ParamLimits

0x8873,	// (0x0004b9ed) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x00053065) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x00053065) cell_ituss_key_t

0xf441,	// (0x000525bb) cell_vkbss_key_3p_pane_g1

0xf449,	// (0x000525c3) cell_vkbss_key_3p_pane_g2

0xf451,	// (0x000525cb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00053070) cell_vkbss_key_3p_pane_g

0xe234,	// (0x000513ae) bg_popup_fep_char_preview_window_cp02

0x88e7,	// (0x0004ba61) popup_fep_char_pre_window_t1

0xe864,	// (0x000519de) main_ai5_sk_pane

0xef03,	// (0x0005207d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef0f,	// (0x00052089) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef24,	// (0x0005209e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef30,	// (0x000520aa) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x00053042) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef3c,	// (0x000520b6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0882,	// (0x000439fc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf459,	// (0x000525d3) main_ai5_sk_pane_g1

0x952f,	// (0x0004c6a9) popup_query_code_window_g1

0xf359,	// (0x000524d3) popup_fep_vkb_icf_pane

0xf36f,	// (0x000524e9) popup_fep_vtchi_icf_pane

0xf462,	// (0x000525dc) bg_icf_pane

0xf46e,	// (0x000525e8) list_vkb_icf_pane

0xf47a,	// (0x000525f4) bg_icf_pane_cp01

0xf48d,	// (0x00052607) vtchi_icf_list_pane

0xf49e,	// (0x00052618) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x00052618) list_vkb_icf_pane_t1

0xf4b4,	// (0x0005262e) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0005262e) vtchi_icf_list_pane_t1

0xf343,	// (0x000524bd) popup_fep_ituss_window_ParamLimits

0xf36f,	// (0x000524e9) popup_fep_vtchi_icf_pane_ParamLimits

0xf395,	// (0x0005250f) ituss_keypad_pane_ParamLimits

0x87ce,	// (0x0004b948) ituss_sks_pane

0xf462,	// (0x000525dc) bg_icf_pane_ParamLimits

0xf31f,	// (0x00052499) icf_edit_indi_pane_ParamLimits

0xf31f,	// (0x00052499) icf_edit_indi_pane

0xf46e,	// (0x000525e8) list_vkb_icf_pane_ParamLimits

0xf47a,	// (0x000525f4) bg_icf_pane_cp01_ParamLimits

0xf32e,	// (0x000524a8) icf_edit_indi_pane_cp01_ParamLimits

0xf32e,	// (0x000524a8) icf_edit_indi_pane_cp01

0xf495,	// (0x0005260f) vtchi_query_pane

0xb966,	// (0x0004eae0) icf_edit_indi_pane_g1_ParamLimits

0xb966,	// (0x0004eae0) icf_edit_indi_pane_g1

0xf523,	// (0x0005269d) icf_edit_indi_pane_g2_ParamLimits

0xf523,	// (0x0005269d) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x00053088) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x00053088) icf_edit_indi_pane_g

0xf532,	// (0x000526ac) icf_edit_indi_pane_t1

0xf4cc,	// (0x00052646) bg_input_focus_pane_cp042

0xe7fe,	// (0x00051978) vtchi_button_pane

0xf4d5,	// (0x0005264f) vtchi_query_pane_t1

0xf4e3,	// (0x0005265d) vtchi_query_pane_t2

0xf4f1,	// (0x0005266b) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00053077) vtchi_query_pane_t

0xe234,	// (0x000513ae) bg_button_pane_cp13

0xf4ff,	// (0x00052679) vtchi_button_pane_g1

0x88f6,	// (0x0004ba70) ituss_sks_pane_g1

0x8901,	// (0x0004ba7b) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005307e) ituss_sks_pane_g

0xf507,	// (0x00052681) ituss_sks_pane_t1

0xf515,	// (0x0005268f) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x00053083) ituss_sks_pane_t

0xb19b,	// (0x0004e315) indicator_nsta_pane_cp_g1

0xb1a4,	// (0x0004e31e) indicator_nsta_pane_cp_g2

0xb1ac,	// (0x0004e326) indicator_nsta_pane_cp_g3

0xb1b4,	// (0x0004e32e) indicator_nsta_pane_cp_g4

0xb1bc,	// (0x0004e336) indicator_nsta_pane_cp_g5

0xb1c4,	// (0x0004e33e) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00052c2c) indicator_nsta_pane_cp_g

0xd8f6,	// (0x00050a70) cell_graphic2_pane_t2_ParamLimits

0xd8f6,	// (0x00050a70) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x00052f39) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x00052f39) cell_graphic2_pane_t

0xd923,	// (0x00050a9d) cell_graphic2_control_pane_t1

0x68c7,	// (0x00049a41) signal_pane_g3_ParamLimits

0x68c7,	// (0x00049a41) signal_pane_g3

0x68d9,	// (0x00049a53) signal_pane_g4_ParamLimits

0x68d9,	// (0x00049a53) signal_pane_g4

0xf309,	// (0x00052483) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf309,	// (0x00052483) cell_ai5_widget_list_row_pane_t3

0xf42f,	// (0x000525a9) cell_ituss_key_pane_t1_ParamLimits

0xf42f,	// (0x000525a9) cell_ituss_key_pane_t1

0x91ac,	// (0x0004c326) form_field_data_wide_pane_vc_t2_ParamLimits

0x91ac,	// (0x0004c326) form_field_data_wide_pane_vc_t2

0x91c0,	// (0x0004c33a) form_field_data_wide_pane_vc_t3_ParamLimits

0x91c0,	// (0x0004c33a) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00052988) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00052988) form_field_data_wide_pane_vc_t

0xae4c,	// (0x0004dfc6) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae4c,	// (0x0004dfc6) form_field_slider_wide_pane_vc_t3

0xaf22,	// (0x0004e09c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaf22,	// (0x0004e09c) form_field_popup_wide_pane_vc_t2

0xaf39,	// (0x0004e0b3) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf39,	// (0x0004e0b3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00052c1b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00052c1b) form_field_popup_wide_pane_vc_t

0x85eb,	// (0x0004b765) aid_fshwr2_btn_pane_ParamLimits

0x85f7,	// (0x0004b771) aid_fshwr2_syb_pane_ParamLimits

0x8603,	// (0x0004b77d) aid_fshwr2_txt_pane_ParamLimits

0x0882,	// (0x000439fc) fshwr2_bg_pane_ParamLimits

0x860f,	// (0x0004b789) fshwr2_func_candi_pane_ParamLimits

0x8622,	// (0x0004b79c) fshwr2_hwr_syb_pane_ParamLimits

0x8630,	// (0x0004b7aa) fshwr2_icf_pane_ParamLimits

0x78b9,	// (0x0004aa33) list_double_graphic_pane_vc_g4_ParamLimits

0x78b9,	// (0x0004aa33) list_double_graphic_pane_vc_g4

0x882d,	// (0x0004b9a7) cell_ituss_key_pane_g3_ParamLimits

0x882d,	// (0x0004b9a7) cell_ituss_key_pane_g3

0x88d5,	// (0x0004ba4f) cell_ituss_key_t5_ParamLimits

0x88d5,	// (0x0004ba4f) cell_ituss_key_t5

0xf364,	// (0x000524de) popup_fep_vkbss_window_ParamLimits
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
	0, // AknLayoutScalable_Avkon::Tpopup_fep_vkbss_window_ParamLimits_sig*,
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
