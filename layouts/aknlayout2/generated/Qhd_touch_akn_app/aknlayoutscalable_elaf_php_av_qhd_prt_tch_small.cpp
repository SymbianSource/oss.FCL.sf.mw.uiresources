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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ec72 };

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
0x2352,	// (0x00010fc4) Screen

0x2366,	// (0x00010fd8) application_window_ParamLimits

0x2366,	// (0x00010fd8) application_window

0x2380,	// (0x00010ff2) screen_g1

0xd3ff,	// (0x0001c071) area_bottom_pane_ParamLimits

0xd3ff,	// (0x0001c071) area_bottom_pane

0xd4bf,	// (0x0001c131) area_top_pane_ParamLimits

0xd4bf,	// (0x0001c131) area_top_pane

0xd553,	// (0x0001c1c5) main_pane_ParamLimits

0xd553,	// (0x0001c1c5) main_pane

0x238a,	// (0x00010ffc) misc_graphics

0x4a56,	// (0x000136c8) battery_pane_ParamLimits

0x4a56,	// (0x000136c8) battery_pane

0x57da,	// (0x0001444c) bg_status_flat_pane_g8

0x57e2,	// (0x00014454) bg_status_flat_pane_g9

0x4b18,	// (0x0001378a) context_pane_ParamLimits

0x4b18,	// (0x0001378a) context_pane

0x4c2e,	// (0x000138a0) navi_pane_ParamLimits

0x4c2e,	// (0x000138a0) navi_pane

0x4cab,	// (0x0001391d) signal_pane_ParamLimits

0x4cab,	// (0x0001391d) signal_pane

0x0008,

0xf8b2,	// (0x0001e524) bg_status_flat_pane_g

0x4d18,	// (0x0001398a) status_pane_g1_ParamLimits

0x4d18,	// (0x0001398a) status_pane_g1

0x4d2c,	// (0x0001399e) status_pane_g2_ParamLimits

0x4d2c,	// (0x0001399e) status_pane_g2

0x4d38,	// (0x000139aa) status_pane_g3_ParamLimits

0x4d38,	// (0x000139aa) status_pane_g3

0x0004,

0xf7e0,	// (0x0001e452) status_pane_g_ParamLimits

0xf7e0,	// (0x0001e452) status_pane_g

0x4d6c,	// (0x000139de) title_pane_ParamLimits

0x4d6c,	// (0x000139de) title_pane

0x4da9,	// (0x00013a1b) uni_indicator_pane_ParamLimits

0x4da9,	// (0x00013a1b) uni_indicator_pane

0x43c3,	// (0x00013035) bg_list_pane_ParamLimits

0x43c3,	// (0x00013035) bg_list_pane

0xcb76,	// (0x0001b7e8) find_pane

0x43eb,	// (0x0001305d) listscroll_app_pane_ParamLimits

0x43eb,	// (0x0001305d) listscroll_app_pane

0x43f7,	// (0x00013069) listscroll_form_pane

0xcb7e,	// (0x0001b7f0) listscroll_gen_pane_ParamLimits

0xcb7e,	// (0x0001b7f0) listscroll_gen_pane

0x43f7,	// (0x00013069) listscroll_set_pane

0x35bc,	// (0x0001222e) main_idle_act_pane

0x409b,	// (0x00012d0d) main_idle_trad_pane

0x409b,	// (0x00012d0d) main_list_empty_pane

0x4425,	// (0x00013097) main_midp_pane

0x4431,	// (0x000130a3) main_pane_g1_ParamLimits

0x4431,	// (0x000130a3) main_pane_g1

0x443f,	// (0x000130b1) popup_ai_message_window_ParamLimits

0x443f,	// (0x000130b1) popup_ai_message_window

0x44e9,	// (0x0001315b) popup_fep_china_uni_window_ParamLimits

0x44e9,	// (0x0001315b) popup_fep_china_uni_window

0x4545,	// (0x000131b7) popup_fep_japan_candidate_window_ParamLimits

0x4545,	// (0x000131b7) popup_fep_japan_candidate_window

0x4565,	// (0x000131d7) popup_fep_japan_predictive_window_ParamLimits

0x4565,	// (0x000131d7) popup_fep_japan_predictive_window

0x4595,	// (0x00013207) popup_find_window

0x45a2,	// (0x00013214) popup_grid_graphic_window_ParamLimits

0x45a2,	// (0x00013214) popup_grid_graphic_window

0x45ca,	// (0x0001323c) popup_large_graphic_colour_window

0x45f0,	// (0x00013262) popup_menu_window_ParamLimits

0x45f0,	// (0x00013262) popup_menu_window

0x47a8,	// (0x0001341a) popup_note_image_window

0x4794,	// (0x00013406) popup_note_wait_window_ParamLimits

0x4794,	// (0x00013406) popup_note_wait_window

0x4794,	// (0x00013406) popup_note_window_ParamLimits

0x4794,	// (0x00013406) popup_note_window

0x47fe,	// (0x00013470) popup_query_code_window_ParamLimits

0x47fe,	// (0x00013470) popup_query_code_window

0x4812,	// (0x00013484) popup_query_data_code_window_ParamLimits

0x4812,	// (0x00013484) popup_query_data_code_window

0x482f,	// (0x000134a1) popup_query_data_window_ParamLimits

0x482f,	// (0x000134a1) popup_query_data_window

0x484b,	// (0x000134bd) popup_query_sat_info_window_ParamLimits

0x484b,	// (0x000134bd) popup_query_sat_info_window

0x4884,	// (0x000134f6) popup_snote_single_graphic_window_ParamLimits

0x4884,	// (0x000134f6) popup_snote_single_graphic_window

0x4884,	// (0x000134f6) popup_snote_single_text_window_ParamLimits

0x4884,	// (0x000134f6) popup_snote_single_text_window

0x4899,	// (0x0001350b) popup_sub_window_general

0x49c9,	// (0x0001363b) popup_window_general_ParamLimits

0x49c9,	// (0x0001363b) popup_window_general

0x49de,	// (0x00013650) power_save_pane

0xdcb2,	// (0x0001c924) control_pane_g1_ParamLimits

0xdcb2,	// (0x0001c924) control_pane_g1

0xdcdb,	// (0x0001c94d) control_pane_g2_ParamLimits

0xdcdb,	// (0x0001c94d) control_pane_g2

0x4364,	// (0x00012fd6) control_pane_g3_ParamLimits

0x4364,	// (0x00012fd6) control_pane_g3

0x0007,

0xf7c8,	// (0x0001e43a) control_pane_g_ParamLimits

0xf7c8,	// (0x0001e43a) control_pane_g

0xdd19,	// (0x0001c98b) control_pane_t1_ParamLimits

0xdd19,	// (0x0001c98b) control_pane_t1

0xdd6b,	// (0x0001c9dd) control_pane_t2_ParamLimits

0xdd6b,	// (0x0001c9dd) control_pane_t2

0x0002,

0xf7d9,	// (0x0001e44b) control_pane_t_ParamLimits

0xf7d9,	// (0x0001e44b) control_pane_t

0x4285,	// (0x00012ef7) navi_navi_volume_pane_cp1

0x428e,	// (0x00012f00) status_small_icon_pane

0x4296,	// (0x00012f08) status_small_pane_g1_ParamLimits

0x4296,	// (0x00012f08) status_small_pane_g1

0x42ca,	// (0x00012f3c) status_small_pane_g2_ParamLimits

0x42ca,	// (0x00012f3c) status_small_pane_g2

0x42d6,	// (0x00012f48) status_small_pane_g3_ParamLimits

0x42d6,	// (0x00012f48) status_small_pane_g3

0x42e2,	// (0x00012f54) status_small_pane_g4_ParamLimits

0x42e2,	// (0x00012f54) status_small_pane_g4

0x42ee,	// (0x00012f60) status_small_pane_g5_ParamLimits

0x42ee,	// (0x00012f60) status_small_pane_g5

0x42fd,	// (0x00012f6f) status_small_pane_g6_ParamLimits

0x42fd,	// (0x00012f6f) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0001e429) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0001e429) status_small_pane_g

0x432d,	// (0x00012f9f) status_small_pane_t1

0x4350,	// (0x00012fc2) status_small_wait_pane_ParamLimits

0x4350,	// (0x00012fc2) status_small_wait_pane

0x3aaf,	// (0x00012721) aid_levels_signal_ParamLimits

0x3aaf,	// (0x00012721) aid_levels_signal

0x3ac1,	// (0x00012733) signal_pane_g1_ParamLimits

0x3ac1,	// (0x00012733) signal_pane_g1

0x3ad6,	// (0x00012748) signal_pane_g2_ParamLimits

0x3ad6,	// (0x00012748) signal_pane_g2

0x0001,

0xf74c,	// (0x0001e3be) signal_pane_g_ParamLimits

0xf74c,	// (0x0001e3be) signal_pane_g

0x3aeb,	// (0x0001275d) context_pane_g1

0x2394,	// (0x00011006) title_pane_g1

0x23ca,	// (0x0001103c) title_pane_t1

0x2432,	// (0x000110a4) title_pane_t2

0x2458,	// (0x000110ca) title_pane_t3

0x0002,

0xf59b,	// (0x0001e20d) title_pane_t

0x4dc1,	// (0x00013a33) aid_levels_battery_ParamLimits

0x4dc1,	// (0x00013a33) aid_levels_battery

0x4dd5,	// (0x00013a47) battery_pane_g1_ParamLimits

0x4dd5,	// (0x00013a47) battery_pane_g1

0x4deb,	// (0x00013a5d) battery_pane_g2_ParamLimits

0x4deb,	// (0x00013a5d) battery_pane_g2

0x0001,

0xf7eb,	// (0x0001e45d) battery_pane_g_ParamLimits

0xf7eb,	// (0x0001e45d) battery_pane_g

0x6116,	// (0x00014d88) uni_indicator_pane_g1

0x612b,	// (0x00014d9d) uni_indicator_pane_g2

0x6141,	// (0x00014db3) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0001e5cc) uni_indicator_pane_g

0x3f0d,	// (0x00012b7f) navi_icon_pane_ParamLimits

0x3f0d,	// (0x00012b7f) navi_icon_pane

0x3e56,	// (0x00012ac8) navi_midp_pane

0x3f29,	// (0x00012b9b) navi_navi_pane

0x3f33,	// (0x00012ba5) navi_text_pane_ParamLimits

0x3f33,	// (0x00012ba5) navi_text_pane

0x2380,	// (0x00010ff2) status_small_wait_pane_g1

0x28a1,	// (0x00011513) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0001e5c7) status_small_wait_pane_g

0x5e3b,	// (0x00014aad) navi_navi_icon_text_pane

0x5e55,	// (0x00014ac7) navi_navi_pane_g1_ParamLimits

0x5e55,	// (0x00014ac7) navi_navi_pane_g1

0x5e43,	// (0x00014ab5) navi_navi_pane_g2_ParamLimits

0x5e43,	// (0x00014ab5) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0001e595) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0001e595) navi_navi_pane_g

0x5e67,	// (0x00014ad9) navi_navi_tabs_pane

0x5e70,	// (0x00014ae2) navi_navi_text_pane

0x5e3b,	// (0x00014aad) navi_navi_volume_pane

0x5e14,	// (0x00014a86) navi_text_pane_t1

0x5e05,	// (0x00014a77) navi_icon_pane_g1

0x5d58,	// (0x000149ca) navi_navi_text_pane_t1

0xe07d,	// (0x0001ccef) navi_navi_volume_pane_g1

0xe085,	// (0x0001ccf7) volume_small_pane

0x5cbe,	// (0x00014930) navi_navi_icon_text_pane_g1

0x5cc6,	// (0x00014938) navi_navi_icon_text_pane_t1

0x3f29,	// (0x00012b9b) navi_tabs_2_long_pane

0x3f29,	// (0x00012b9b) navi_tabs_2_pane

0x3f29,	// (0x00012b9b) navi_tabs_3_long_pane

0x3f29,	// (0x00012b9b) navi_tabs_3_pane

0x3f29,	// (0x00012b9b) navi_tabs_4_pane

0xe05d,	// (0x0001cccf) tabs_2_active_pane_ParamLimits

0xe05d,	// (0x0001cccf) tabs_2_active_pane

0xe06d,	// (0x0001ccdf) tabs_2_passive_pane_ParamLimits

0xe06d,	// (0x0001ccdf) tabs_2_passive_pane

0xe02b,	// (0x0001cc9d) tabs_3_active_pane_ParamLimits

0xe02b,	// (0x0001cc9d) tabs_3_active_pane

0xe03b,	// (0x0001ccad) tabs_3_passive_pane_ParamLimits

0xe03b,	// (0x0001ccad) tabs_3_passive_pane

0xe04c,	// (0x0001ccbe) tabs_3_passive_pane_cp_ParamLimits

0xe04c,	// (0x0001ccbe) tabs_3_passive_pane_cp

0xdfe7,	// (0x0001cc59) tabs_4_active_pane_ParamLimits

0xdfe7,	// (0x0001cc59) tabs_4_active_pane

0xdff8,	// (0x0001cc6a) tabs_4_passive_pane_ParamLimits

0xdff8,	// (0x0001cc6a) tabs_4_passive_pane

0xe009,	// (0x0001cc7b) tabs_4_passive_pane_cp_ParamLimits

0xe009,	// (0x0001cc7b) tabs_4_passive_pane_cp

0xe01a,	// (0x0001cc8c) tabs_4_passive_pane_cp2_ParamLimits

0xe01a,	// (0x0001cc8c) tabs_4_passive_pane_cp2

0xdfc3,	// (0x0001cc35) tabs_2_long_active_pane_ParamLimits

0xdfc3,	// (0x0001cc35) tabs_2_long_active_pane

0xdfd5,	// (0x0001cc47) tabs_2_long_passive_pane_ParamLimits

0xdfd5,	// (0x0001cc47) tabs_2_long_passive_pane

0xdf84,	// (0x0001cbf6) tabs_3_long_active_pane_ParamLimits

0xdf84,	// (0x0001cbf6) tabs_3_long_active_pane

0xdf97,	// (0x0001cc09) tabs_3_long_passive_pane_ParamLimits

0xdf97,	// (0x0001cc09) tabs_3_long_passive_pane

0xdfb0,	// (0x0001cc22) tabs_3_long_passive_pane_cp_ParamLimits

0xdfb0,	// (0x0001cc22) tabs_3_long_passive_pane_cp

0xdf2a,	// (0x0001cb9c) volume_small_pane_g1

0xdf33,	// (0x0001cba5) volume_small_pane_g2

0xdf3c,	// (0x0001cbae) volume_small_pane_g3

0xdf45,	// (0x0001cbb7) volume_small_pane_g4

0xdf4e,	// (0x0001cbc0) volume_small_pane_g5

0xdf57,	// (0x0001cbc9) volume_small_pane_g6

0xdf60,	// (0x0001cbd2) volume_small_pane_g7

0xdf69,	// (0x0001cbdb) volume_small_pane_g8

0xdf72,	// (0x0001cbe4) volume_small_pane_g9

0xdf7b,	// (0x0001cbed) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0001e561) volume_small_pane_g

0x246a,	// (0x000110dc) bg_active_tab_pane_cp2_ParamLimits

0x246a,	// (0x000110dc) bg_active_tab_pane_cp2

0x2478,	// (0x000110ea) tabs_3_active_pane_g1

0x2480,	// (0x000110f2) tabs_3_active_pane_t1

0x246a,	// (0x000110dc) bg_passive_tab_pane_cp2_ParamLimits

0x246a,	// (0x000110dc) bg_passive_tab_pane_cp2

0x2478,	// (0x000110ea) tabs_3_passive_pane_g1

0x2480,	// (0x000110f2) tabs_3_passive_pane_t1

0x246a,	// (0x000110dc) bg_active_tab_pane_cp3_ParamLimits

0x246a,	// (0x000110dc) bg_active_tab_pane_cp3

0x2492,	// (0x00011104) tabs_4_active_pane_g1

0x249a,	// (0x0001110c) tabs_4_active_pane_t1

0x246a,	// (0x000110dc) bg_passive_tab_pane_cp3_ParamLimits

0x246a,	// (0x000110dc) bg_passive_tab_pane_cp3

0x2492,	// (0x00011104) tabs_4_1_passive_pane_g1

0x249a,	// (0x0001110c) tabs_4_1_passive_pane_t1

0x4425,	// (0x00013097) list_highlight_pane_cp2

0x63c7,	// (0x00015039) list_set_pane_ParamLimits

0x63c7,	// (0x00015039) list_set_pane

0x646d,	// (0x000150df) main_pane_set_t1_ParamLimits

0x646d,	// (0x000150df) main_pane_set_t1

0x648d,	// (0x000150ff) main_pane_set_t2_ParamLimits

0x648d,	// (0x000150ff) main_pane_set_t2

0x64a1,	// (0x00015113) main_pane_set_t3_ParamLimits

0x64a1,	// (0x00015113) main_pane_set_t3

0x64b3,	// (0x00015125) main_pane_set_t4_ParamLimits

0x64b3,	// (0x00015125) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0001e631) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0001e631) main_pane_set_t

0x64c5,	// (0x00015137) setting_code_pane

0x64d1,	// (0x00015143) setting_slider_graphic_pane

0x64d1,	// (0x00015143) setting_slider_pane

0x64d1,	// (0x00015143) setting_text_pane

0x64d1,	// (0x00015143) setting_volume_pane

0xd798,	// (0x0001c40a) volume_set_pane

0x246a,	// (0x000110dc) bg_set_opt_pane_cp

0xd7a0,	// (0x0001c412) setting_slider_pane_t1

0xd7b9,	// (0x0001c42b) setting_slider_pane_t2

0xd7d3,	// (0x0001c445) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001e214) setting_slider_pane_t

0xd7eb,	// (0x0001c45d) slider_set_pane

0x238a,	// (0x00010ffc) bg_set_opt_pane_cp2

0x24ac,	// (0x0001111e) setting_slider_graphic_pane_g1

0xd801,	// (0x0001c473) setting_slider_graphic_pane_t1

0xd811,	// (0x0001c483) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001e21b) setting_slider_graphic_pane_t

0xd821,	// (0x0001c493) slider_set_pane_cp

0x238a,	// (0x00010ffc) input_focus_pane_cp1

0x6386,	// (0x00014ff8) list_set_text_pane

0x2380,	// (0x00010ff2) setting_text_pane_g1

0x238a,	// (0x00010ffc) input_focus_pane_cp2

0x2380,	// (0x00010ff2) setting_code_pane_g1

0x24b5,	// (0x00011127) setting_code_pane_t1

0xc3a3,	// (0x0001b015) set_text_pane_t1_ParamLimits

0xc3a3,	// (0x0001b015) set_text_pane_t1

0x3389,	// (0x00011ffb) set_opt_bg_pane_g1

0x3391,	// (0x00012003) set_opt_bg_pane_g2

0x6360,	// (0x00014fd2) set_opt_bg_pane_g3

0x33a1,	// (0x00012013) set_opt_bg_pane_g4

0x33a9,	// (0x0001201b) set_opt_bg_pane_g5

0x33b1,	// (0x00012023) set_opt_bg_pane_g6

0x636a,	// (0x00014fdc) set_opt_bg_pane_g7

0x6372,	// (0x00014fe4) set_opt_bg_pane_g8

0x637c,	// (0x00014fee) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0001e61e) set_opt_bg_pane_g

0x6353,	// (0x00014fc5) slider_set_pane_g1

0xe0f2,	// (0x0001cd64) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0001e60f) slider_set_pane_g

0xe08e,	// (0x0001cd00) volume_set_pane_g1

0xe096,	// (0x0001cd08) volume_set_pane_g2

0xe09e,	// (0x0001cd10) volume_set_pane_g3

0xe0a6,	// (0x0001cd18) volume_set_pane_g4

0xe0ae,	// (0x0001cd20) volume_set_pane_g5

0xe0b6,	// (0x0001cd28) volume_set_pane_g6

0xe0be,	// (0x0001cd30) volume_set_pane_g7

0xe0c6,	// (0x0001cd38) volume_set_pane_g8

0xe0ce,	// (0x0001cd40) volume_set_pane_g9

0xe0d6,	// (0x0001cd48) volume_set_pane_g10

0x0009,

0xf975,	// (0x0001e5e7) volume_set_pane_g

0x24dd,	// (0x0001114f) indicator_pane_ParamLimits

0x24dd,	// (0x0001114f) indicator_pane

0x24e9,	// (0x0001115b) main_idle_pane_g2_ParamLimits

0x24e9,	// (0x0001115b) main_idle_pane_g2

0x2511,	// (0x00011183) main_pane_idle_g1_ParamLimits

0x2511,	// (0x00011183) main_pane_idle_g1

0x251e,	// (0x00011190) popup_clock_digital_analogue_window_ParamLimits

0x251e,	// (0x00011190) popup_clock_digital_analogue_window

0x2535,	// (0x000111a7) soft_indicator_pane_ParamLimits

0x2535,	// (0x000111a7) soft_indicator_pane

0x2541,	// (0x000111b3) wallpaper_pane_ParamLimits

0x2541,	// (0x000111b3) wallpaper_pane

0x2380,	// (0x00010ff2) wallpaper_pane_g1

0x2555,	// (0x000111c7) indicator_pane_g1_ParamLimits

0x2555,	// (0x000111c7) indicator_pane_g1

0x682d,	// (0x0001549f) navi_navi_icon_text_pane_srt_g1

0x2570,	// (0x000111e2) soft_indicator_pane_t1

0x258a,	// (0x000111fc) aid_ps_area_pane

0x259b,	// (0x0001120d) aid_ps_clock_pane

0x25a9,	// (0x0001121b) aid_ps_indicator_pane

0x25b5,	// (0x00011227) indicator_ps_pane_ParamLimits

0x25b5,	// (0x00011227) indicator_ps_pane

0x25c4,	// (0x00011236) power_save_pane_g1_ParamLimits

0x25c4,	// (0x00011236) power_save_pane_g1

0x25d0,	// (0x00011242) power_save_pane_g2_ParamLimits

0x25d0,	// (0x00011242) power_save_pane_g2

0xd3b3,	// (0x0001c025) aid_navinavi_width_pane

0x258a,	// (0x000111fc) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001e220) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001e220) power_save_pane_g

0x25de,	// (0x00011250) power_save_pane_t1_ParamLimits

0x25de,	// (0x00011250) power_save_pane_t1

0x259b,	// (0x0001120d) aid_ps_clock_pane_ParamLimits

0x25a9,	// (0x0001121b) aid_ps_indicator_pane_ParamLimits

0x25f0,	// (0x00011262) power_save_pane_t4_ParamLimits

0x25f0,	// (0x00011262) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001e225) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001e225) power_save_pane_t

0x261a,	// (0x0001128c) power_save_t3_ParamLimits

0x261a,	// (0x0001128c) power_save_t3

0x2605,	// (0x00011277) power_save_t2_ParamLimits

0x2605,	// (0x00011277) power_save_t2

0x262f,	// (0x000112a1) indicator_ps_pane_g1

0x2638,	// (0x000112aa) ai_gene_pane_ParamLimits

0x2638,	// (0x000112aa) ai_gene_pane

0x2644,	// (0x000112b6) ai_links_pane_ParamLimits

0x2644,	// (0x000112b6) ai_links_pane

0x2650,	// (0x000112c2) indicator_pane_cp1_ParamLimits

0x2650,	// (0x000112c2) indicator_pane_cp1

0x265c,	// (0x000112ce) main_pane_idle_g1_cp_ParamLimits

0x265c,	// (0x000112ce) main_pane_idle_g1_cp

0x2668,	// (0x000112da) popup_ai_links_title_window

0x2671,	// (0x000112e3) soft_indicator_pane_cp1_ParamLimits

0x2671,	// (0x000112e3) soft_indicator_pane_cp1

0x6104,	// (0x00014d76) ai_links_pane_g1

0x610d,	// (0x00014d7f) grid_ai_links_pane

0x60e7,	// (0x00014d59) ai_gene_pane_1

0x60f2,	// (0x00014d64) ai_gene_pane_2

0x60fb,	// (0x00014d6d) list_highlight_pane_cp4

0x60cb,	// (0x00014d3d) cell_ai_link_pane_ParamLimits

0x60cb,	// (0x00014d3d) cell_ai_link_pane

0x60c3,	// (0x00014d35) cell_ai_link_pane_g1

0x28a1,	// (0x00011513) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0001e5c2) cell_ai_link_pane_g

0x238a,	// (0x00010ffc) grid_highlight_cp2

0x238a,	// (0x00010ffc) bg_popup_sub_pane_cp1

0x268b,	// (0x000112fd) popup_ai_links_title_window_t1

0x6011,	// (0x00014c83) ai_gene_pane_1_g1_ParamLimits

0x6011,	// (0x00014c83) ai_gene_pane_1_g1

0x601d,	// (0x00014c8f) ai_gene_pane_1_g2_ParamLimits

0x601d,	// (0x00014c8f) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0001e5b8) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0001e5b8) ai_gene_pane_1_g

0x602a,	// (0x00014c9c) ai_gene_pane_1_t1_ParamLimits

0x602a,	// (0x00014c9c) ai_gene_pane_1_t1

0x605e,	// (0x00014cd0) grid_ai_soft_ind_pane

0x5ffc,	// (0x00014c6e) ai_gene_pane_2_t1_ParamLimits

0x5ffc,	// (0x00014c6e) ai_gene_pane_2_t1

0x269a,	// (0x0001130c) main_pane_empty_t1_ParamLimits

0x269a,	// (0x0001130c) main_pane_empty_t1

0x26b2,	// (0x00011324) main_pane_empty_t2_ParamLimits

0x26b2,	// (0x00011324) main_pane_empty_t2

0x26c7,	// (0x00011339) main_pane_empty_t3_ParamLimits

0x26c7,	// (0x00011339) main_pane_empty_t3

0x26d9,	// (0x0001134b) main_pane_empty_t4_ParamLimits

0x26d9,	// (0x0001134b) main_pane_empty_t4

0x26eb,	// (0x0001135d) main_pane_empty_t5_ParamLimits

0x26eb,	// (0x0001135d) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001e22a) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001e22a) main_pane_empty_t

0x3486,	// (0x000120f8) bg_popup_window_pane_ParamLimits

0x3486,	// (0x000120f8) bg_popup_window_pane

0x5d66,	// (0x000149d8) find_popup_pane_cp2_ParamLimits

0x5d66,	// (0x000149d8) find_popup_pane_cp2

0x5d72,	// (0x000149e4) heading_pane_ParamLimits

0x5d72,	// (0x000149e4) heading_pane

0x238a,	// (0x00010ffc) bg_popup_sub_pane

0x5ce0,	// (0x00014952) bg_popup_window_pane_g1_ParamLimits

0x5ce0,	// (0x00014952) bg_popup_window_pane_g1

0x5cec,	// (0x0001495e) bg_popup_window_pane_g2_ParamLimits

0x5cec,	// (0x0001495e) bg_popup_window_pane_g2

0x5cf8,	// (0x0001496a) bg_popup_window_pane_g3_ParamLimits

0x5cf8,	// (0x0001496a) bg_popup_window_pane_g3

0x5d04,	// (0x00014976) bg_popup_window_pane_g4_ParamLimits

0x5d04,	// (0x00014976) bg_popup_window_pane_g4

0x5d10,	// (0x00014982) bg_popup_window_pane_g5_ParamLimits

0x5d10,	// (0x00014982) bg_popup_window_pane_g5

0x5d1c,	// (0x0001498e) bg_popup_window_pane_g6_ParamLimits

0x5d1c,	// (0x0001498e) bg_popup_window_pane_g6

0x5d28,	// (0x0001499a) bg_popup_window_pane_g7_ParamLimits

0x5d28,	// (0x0001499a) bg_popup_window_pane_g7

0x5d34,	// (0x000149a6) bg_popup_window_pane_g8_ParamLimits

0x5d34,	// (0x000149a6) bg_popup_window_pane_g8

0x5d40,	// (0x000149b2) bg_popup_window_pane_g9_ParamLimits

0x5d40,	// (0x000149b2) bg_popup_window_pane_g9

0x5d4c,	// (0x000149be) bg_popup_window_pane_g10_ParamLimits

0x5d4c,	// (0x000149be) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0001e580) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0001e580) bg_popup_window_pane_g

0x5c75,	// (0x000148e7) bg_popup_heading_pane_ParamLimits

0x5c75,	// (0x000148e7) bg_popup_heading_pane

0xe17a,	// (0x0001cdec) tabs_4_passive_pane_cp_srt_ParamLimits

0xe17a,	// (0x0001cdec) tabs_4_passive_pane_cp_srt

0xe18c,	// (0x0001cdfe) tabs_4_passive_pane_srt_ParamLimits

0x5c89,	// (0x000148fb) heading_pane_g2

0xe18c,	// (0x0001cdfe) tabs_4_passive_pane_srt

0x4425,	// (0x00013097) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4425,	// (0x00013097) bg_passive_tab_pane_cp3_srt

0x5c91,	// (0x00014903) heading_pane_t1_ParamLimits

0x5c91,	// (0x00014903) heading_pane_t1

0x5ca8,	// (0x0001491a) heading_pane_t2_ParamLimits

0x5ca8,	// (0x0001491a) heading_pane_t2

0x0001,

0xf909,	// (0x0001e57b) heading_pane_t_ParamLimits

0xf909,	// (0x0001e57b) heading_pane_t

0x57a2,	// (0x00014414) bg_popup_heading_pane_g1

0x5851,	// (0x000144c3) bg_popup_heading_pane_g2

0x585b,	// (0x000144cd) bg_popup_heading_pane_g3

0x5865,	// (0x000144d7) bg_popup_heading_pane_g4

0x586f,	// (0x000144e1) bg_popup_heading_pane_g5

0x5879,	// (0x000144eb) bg_popup_heading_pane_g6

0x5881,	// (0x000144f3) bg_popup_heading_pane_g7

0x5889,	// (0x000144fb) bg_popup_heading_pane_g8

0x5893,	// (0x00014505) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0001e537) bg_popup_heading_pane_g

0x4efd,	// (0x00013b6f) bg_popup_sub_pane_g1

0x4f0d,	// (0x00013b7f) bg_popup_sub_pane_g2

0x4f05,	// (0x00013b77) bg_popup_sub_pane_g3

0x4f1d,	// (0x00013b8f) bg_popup_sub_pane_g4

0x4f15,	// (0x00013b87) bg_popup_sub_pane_g5

0x4f25,	// (0x00013b97) bg_popup_sub_pane_g6

0x4f2d,	// (0x00013b9f) bg_popup_sub_pane_g7

0x4f3d,	// (0x00013baf) bg_popup_sub_pane_g8

0x4f35,	// (0x00013ba7) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0001e511) bg_popup_sub_pane_g

0x26ff,	// (0x00011371) bg_popup_window_pane_cp5_ParamLimits

0x26ff,	// (0x00011371) bg_popup_window_pane_cp5

0x271b,	// (0x0001138d) popup_note_window_g1_ParamLimits

0x271b,	// (0x0001138d) popup_note_window_g1

0x2727,	// (0x00011399) popup_note_window_t1_ParamLimits

0x2727,	// (0x00011399) popup_note_window_t1

0x273d,	// (0x000113af) popup_note_window_t2_ParamLimits

0x273d,	// (0x000113af) popup_note_window_t2

0x2753,	// (0x000113c5) popup_note_window_t3_ParamLimits

0x2753,	// (0x000113c5) popup_note_window_t3

0x2769,	// (0x000113db) popup_note_window_t4_ParamLimits

0x2769,	// (0x000113db) popup_note_window_t4

0x2791,	// (0x00011403) popup_note_window_t5_ParamLimits

0x2791,	// (0x00011403) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001e235) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001e235) popup_note_window_t

0x27b5,	// (0x00011427) bg_popup_window_pane_cp6_ParamLimits

0x27b5,	// (0x00011427) bg_popup_window_pane_cp6

0x571e,	// (0x00014390) popup_note_image_window_g1_ParamLimits

0x571e,	// (0x00014390) popup_note_image_window_g1

0x572a,	// (0x0001439c) popup_note_image_window_g2_ParamLimits

0x572a,	// (0x0001439c) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0001e505) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0001e505) popup_note_image_window_g

0x5743,	// (0x000143b5) popup_note_image_window_t1_ParamLimits

0x5743,	// (0x000143b5) popup_note_image_window_t1

0x575c,	// (0x000143ce) popup_note_image_window_t2_ParamLimits

0x575c,	// (0x000143ce) popup_note_image_window_t2

0x5775,	// (0x000143e7) popup_note_image_window_t3_ParamLimits

0x5775,	// (0x000143e7) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0001e50a) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0001e50a) popup_note_image_window_t

0x55df,	// (0x00014251) bg_popup_window_pane_cp7_ParamLimits

0x55df,	// (0x00014251) bg_popup_window_pane_cp7

0x560f,	// (0x00014281) popup_note_wait_window_g1_ParamLimits

0x560f,	// (0x00014281) popup_note_wait_window_g1

0x561b,	// (0x0001428d) popup_note_wait_window_g2_ParamLimits

0x561b,	// (0x0001428d) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0001e4f3) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0001e4f3) popup_note_wait_window_g

0x5633,	// (0x000142a5) popup_note_wait_window_t1_ParamLimits

0x5633,	// (0x000142a5) popup_note_wait_window_t1

0x565a,	// (0x000142cc) popup_note_wait_window_t2_ParamLimits

0x565a,	// (0x000142cc) popup_note_wait_window_t2

0x5677,	// (0x000142e9) popup_note_wait_window_t3_ParamLimits

0x5677,	// (0x000142e9) popup_note_wait_window_t3

0x568a,	// (0x000142fc) popup_note_wait_window_t4_ParamLimits

0x568a,	// (0x000142fc) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0001e4fa) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0001e4fa) popup_note_wait_window_t

0x56af,	// (0x00014321) wait_bar_pane_ParamLimits

0x56af,	// (0x00014321) wait_bar_pane

0x238a,	// (0x00010ffc) wait_anim_pane

0x238a,	// (0x00010ffc) wait_border_pane

0x2380,	// (0x00010ff2) wait_anim_pane_g1

0x2380,	// (0x00010ff2) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0001e3b9) wait_anim_pane_g

0x5583,	// (0x000141f5) wait_border_pane_g1

0x558e,	// (0x00014200) wait_border_pane_g2

0x5597,	// (0x00014209) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0001e4ec) wait_border_pane_g

0x54e0,	// (0x00014152) bg_popup_window_pane_cp16_ParamLimits

0x54e0,	// (0x00014152) bg_popup_window_pane_cp16

0x54ee,	// (0x00014160) indicator_popup_pane_cp4_ParamLimits

0x54ee,	// (0x00014160) indicator_popup_pane_cp4

0x5502,	// (0x00014174) popup_query_data_window_t1_ParamLimits

0x5502,	// (0x00014174) popup_query_data_window_t1

0x5514,	// (0x00014186) popup_query_data_window_t2_ParamLimits

0x5514,	// (0x00014186) popup_query_data_window_t2

0x552d,	// (0x0001419f) popup_query_data_window_t3_ParamLimits

0x552d,	// (0x0001419f) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0001e4e5) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0001e4e5) popup_query_data_window_t

0x5547,	// (0x000141b9) query_popup_data_pane_ParamLimits

0x5547,	// (0x000141b9) query_popup_data_pane

0x555b,	// (0x000141cd) query_popup_data_pane_cp1_ParamLimits

0x555b,	// (0x000141cd) query_popup_data_pane_cp1

0x27b5,	// (0x00011427) bg_popup_window_pane_cp10_ParamLimits

0x27b5,	// (0x00011427) bg_popup_window_pane_cp10

0x5443,	// (0x000140b5) indicator_popup_pane_ParamLimits

0x5443,	// (0x000140b5) indicator_popup_pane

0x280c,	// (0x0001147e) popup_query_code_window_t1_ParamLimits

0x280c,	// (0x0001147e) popup_query_code_window_t1

0x545b,	// (0x000140cd) popup_query_code_window_t2_ParamLimits

0x545b,	// (0x000140cd) popup_query_code_window_t2

0x5499,	// (0x0001410b) popup_query_code_window_t3_ParamLimits

0x5499,	// (0x0001410b) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0001e4de) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0001e4de) popup_query_code_window_t

0x54c8,	// (0x0001413a) query_popup_pane_ParamLimits

0x54c8,	// (0x0001413a) query_popup_pane

0x27b5,	// (0x00011427) bg_popup_window_pane_cp15_ParamLimits

0x27b5,	// (0x00011427) bg_popup_window_pane_cp15

0x27d3,	// (0x00011445) indicator_popup_pane_cp1_ParamLimits

0x27d3,	// (0x00011445) indicator_popup_pane_cp1

0x27e6,	// (0x00011458) indicator_popup_pane_cp2_ParamLimits

0x27e6,	// (0x00011458) indicator_popup_pane_cp2

0x27f9,	// (0x0001146b) popup_query_data_code_window_g1_ParamLimits

0x27f9,	// (0x0001146b) popup_query_data_code_window_g1

0x280c,	// (0x0001147e) popup_query_data_code_window_t1_ParamLimits

0x280c,	// (0x0001147e) popup_query_data_code_window_t1

0x281e,	// (0x00011490) popup_query_data_code_window_t2_ParamLimits

0x281e,	// (0x00011490) popup_query_data_code_window_t2

0x2830,	// (0x000114a2) popup_query_data_code_window_t3_ParamLimits

0x2830,	// (0x000114a2) popup_query_data_code_window_t3

0x2846,	// (0x000114b8) popup_query_data_code_window_t4_ParamLimits

0x2846,	// (0x000114b8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001e240) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001e240) popup_query_data_code_window_t

0xde53,	// (0x0001cac5) list_single_midp_graphic_pane_g3

0x285e,	// (0x000114d0) query_popup_data_pane_cp2_ParamLimits

0x2871,	// (0x000114e3) query_popup_pane_cp2_ParamLimits

0x2871,	// (0x000114e3) query_popup_pane_cp2

0x238a,	// (0x00010ffc) bg_popup_window_pane_cp11

0x5417,	// (0x00014089) heading_pane_cp5

0x2959,	// (0x000115cb) listscroll_popup_info_pane

0x238a,	// (0x00010ffc) input_focus_pane_cp3

0x2884,	// (0x000114f6) query_popup_pane_t1

0x2892,	// (0x00011504) list_popup_info_pane_ParamLimits

0x2892,	// (0x00011504) list_popup_info_pane

0x28a1,	// (0x00011513) listscroll_popup_info_pane_g1

0x28a9,	// (0x0001151b) scroll_pane_cp7

0x28b3,	// (0x00011525) popup_info_list_pane_t1_ParamLimits

0x28b3,	// (0x00011525) popup_info_list_pane_t1

0x28cd,	// (0x0001153f) popup_info_list_pane_t2_ParamLimits

0x28cd,	// (0x0001153f) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001e249) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001e249) popup_info_list_pane_t

0x238a,	// (0x00010ffc) bg_popup_window_pane_cp12

0x6847,	// (0x000154b9) find_popup_pane

0x246a,	// (0x000110dc) bg_popup_window_pane_cp3

0x28e7,	// (0x00011559) heading_pane_cp3

0x28f3,	// (0x00011565) listscroll_popup_graphic_pane

0x238a,	// (0x00010ffc) bg_popup_window_pane_cp4

0x294f,	// (0x000115c1) heading_pane_cp4

0x2959,	// (0x000115cb) listscroll_popup_colour_pane

0x2961,	// (0x000115d3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2961,	// (0x000115d3) cell_large_graphic_colour_none_popup_pane

0x2975,	// (0x000115e7) grid_large_graphic_colour_popup_pane_ParamLimits

0x2975,	// (0x000115e7) grid_large_graphic_colour_popup_pane

0x29a1,	// (0x00011613) listscroll_popup_colour_pane_g1_ParamLimits

0x29a1,	// (0x00011613) listscroll_popup_colour_pane_g1

0x29b8,	// (0x0001162a) listscroll_popup_colour_pane_g2_ParamLimits

0x29b8,	// (0x0001162a) listscroll_popup_colour_pane_g2

0x29cf,	// (0x00011641) listscroll_popup_colour_pane_g3_ParamLimits

0x29cf,	// (0x00011641) listscroll_popup_colour_pane_g3

0x29df,	// (0x00011651) listscroll_popup_colour_pane_g4_ParamLimits

0x29df,	// (0x00011651) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001e24e) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001e24e) listscroll_popup_colour_pane_g

0x29f3,	// (0x00011665) scroll_pane_cp6_ParamLimits

0x29f3,	// (0x00011665) scroll_pane_cp6

0x2a05,	// (0x00011677) cell_large_graphic_colour_popup_pane_ParamLimits

0x2a05,	// (0x00011677) cell_large_graphic_colour_popup_pane

0x2a24,	// (0x00011696) cell_large_graphic_colour_none_popup_pane_t1

0x238a,	// (0x00010ffc) grid_highlight_pane_cp5

0x2a33,	// (0x000116a5) cell_large_graphic_colour_popup_pane_g1

0x2a3b,	// (0x000116ad) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001e257) cell_large_graphic_colour_popup_pane_g

0x2a43,	// (0x000116b5) cell_large_graphic_colour_popup_pane_g2_copy1

0x2a4c,	// (0x000116be) grid_highlight_pane_cp4

0x2a54,	// (0x000116c6) bg_popup_window_pane_cp8_ParamLimits

0x2a54,	// (0x000116c6) bg_popup_window_pane_cp8

0x2a6f,	// (0x000116e1) popup_snote_single_text_window_g1_ParamLimits

0x2a6f,	// (0x000116e1) popup_snote_single_text_window_g1

0x2a81,	// (0x000116f3) popup_snote_single_text_window_t1_ParamLimits

0x2a81,	// (0x000116f3) popup_snote_single_text_window_t1

0x2a94,	// (0x00011706) popup_snote_single_text_window_t2_ParamLimits

0x2a94,	// (0x00011706) popup_snote_single_text_window_t2

0x2aa7,	// (0x00011719) popup_snote_single_text_window_t3_ParamLimits

0x2aa7,	// (0x00011719) popup_snote_single_text_window_t3

0x2ae0,	// (0x00011752) popup_snote_single_text_window_t4_ParamLimits

0x2ae0,	// (0x00011752) popup_snote_single_text_window_t4

0x2b14,	// (0x00011786) popup_snote_single_text_window_t5_ParamLimits

0x2b14,	// (0x00011786) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001e25c) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001e25c) popup_snote_single_text_window_t

0x2b43,	// (0x000117b5) bg_popup_window_pane_cp9_ParamLimits

0x2b43,	// (0x000117b5) bg_popup_window_pane_cp9

0x2a6f,	// (0x000116e1) popup_snote_single_graphic_window_g1_ParamLimits

0x2a6f,	// (0x000116e1) popup_snote_single_graphic_window_g1

0x2b51,	// (0x000117c3) popup_snote_single_graphic_window_g2_ParamLimits

0x2b51,	// (0x000117c3) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001e267) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001e267) popup_snote_single_graphic_window_g

0x2b5d,	// (0x000117cf) popup_snote_single_graphic_window_t1_ParamLimits

0x2b5d,	// (0x000117cf) popup_snote_single_graphic_window_t1

0x2b70,	// (0x000117e2) popup_snote_single_graphic_window_t2_ParamLimits

0x2b70,	// (0x000117e2) popup_snote_single_graphic_window_t2

0x2b83,	// (0x000117f5) popup_snote_single_graphic_window_t3_ParamLimits

0x2b83,	// (0x000117f5) popup_snote_single_graphic_window_t3

0x2bbc,	// (0x0001182e) popup_snote_single_graphic_window_t4_ParamLimits

0x2bbc,	// (0x0001182e) popup_snote_single_graphic_window_t4

0x2bf0,	// (0x00011862) popup_snote_single_graphic_window_t5_ParamLimits

0x2bf0,	// (0x00011862) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001e26c) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001e26c) popup_snote_single_graphic_window_t

0x678b,	// (0x000153fd) grid_graphic_popup_pane_ParamLimits

0x678b,	// (0x000153fd) grid_graphic_popup_pane

0x67b3,	// (0x00015425) listscroll_popup_graphic_pane_g1_ParamLimits

0x67b3,	// (0x00015425) listscroll_popup_graphic_pane_g1

0x67c7,	// (0x00015439) listscroll_popup_graphic_pane_g2_ParamLimits

0x67c7,	// (0x00015439) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0001e65b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0001e65b) listscroll_popup_graphic_pane_g

0x67db,	// (0x0001544d) scroll_pane_cp5

0x6734,	// (0x000153a6) cell_graphic_popup_pane_ParamLimits

0x6734,	// (0x000153a6) cell_graphic_popup_pane

0x6715,	// (0x00015387) cell_graphic_popup_pane_g1

0x671d,	// (0x0001538f) cell_graphic_popup_pane_g2

0x2a43,	// (0x000116b5) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0001e654) cell_graphic_popup_pane_g

0x6726,	// (0x00015398) cell_graphic_popup_pane_t2

0x2a4c,	// (0x000116be) grid_highlight_pane_cp3

0x2c31,	// (0x000118a3) list_gen_pane_ParamLimits

0x2c31,	// (0x000118a3) list_gen_pane

0x2c63,	// (0x000118d5) scroll_pane

0x6677,	// (0x000152e9) bg_list_pane_g1_ParamLimits

0x6677,	// (0x000152e9) bg_list_pane_g1

0x6692,	// (0x00015304) bg_list_pane_g2_ParamLimits

0x6692,	// (0x00015304) bg_list_pane_g2

0x66a5,	// (0x00015317) bg_list_pane_g3_ParamLimits

0x66a5,	// (0x00015317) bg_list_pane_g3

0x66b7,	// (0x00015329) bg_list_pane_g4_ParamLimits

0x66b7,	// (0x00015329) bg_list_pane_g4

0x66c9,	// (0x0001533b) bg_list_pane_g5_ParamLimits

0x66c9,	// (0x0001533b) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0001e649) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0001e649) bg_list_pane_g

0x658a,	// (0x000151fc) list_double2_graphic_large_graphic_pane_ParamLimits

0x658a,	// (0x000151fc) list_double2_graphic_large_graphic_pane

0x658a,	// (0x000151fc) list_double2_graphic_pane_ParamLimits

0x658a,	// (0x000151fc) list_double2_graphic_pane

0x658a,	// (0x000151fc) list_double2_large_graphic_pane_ParamLimits

0x658a,	// (0x000151fc) list_double2_large_graphic_pane

0xcd0b,	// (0x0001b97d) list_double2_pane_ParamLimits

0xcd0b,	// (0x0001b97d) list_double2_pane

0x658a,	// (0x000151fc) list_double_graphic_heading_pane_ParamLimits

0x658a,	// (0x000151fc) list_double_graphic_heading_pane

0x658a,	// (0x000151fc) list_double_graphic_pane_ParamLimits

0x658a,	// (0x000151fc) list_double_graphic_pane

0x658a,	// (0x000151fc) list_double_heading_pane_ParamLimits

0x658a,	// (0x000151fc) list_double_heading_pane

0x658a,	// (0x000151fc) list_double_large_graphic_pane_ParamLimits

0x658a,	// (0x000151fc) list_double_large_graphic_pane

0x658a,	// (0x000151fc) list_double_number_pane_ParamLimits

0x658a,	// (0x000151fc) list_double_number_pane

0x658a,	// (0x000151fc) list_double_pane_ParamLimits

0x658a,	// (0x000151fc) list_double_pane

0x658a,	// (0x000151fc) list_double_time_pane_ParamLimits

0x658a,	// (0x000151fc) list_double_time_pane

0x658a,	// (0x000151fc) list_setting_number_pane_ParamLimits

0x658a,	// (0x000151fc) list_setting_number_pane

0x658a,	// (0x000151fc) list_setting_pane_ParamLimits

0x658a,	// (0x000151fc) list_setting_pane

0xcd46,	// (0x0001b9b8) list_single_2graphic_pane_ParamLimits

0xcd46,	// (0x0001b9b8) list_single_2graphic_pane

0xcd46,	// (0x0001b9b8) list_single_graphic_heading_pane_ParamLimits

0xcd46,	// (0x0001b9b8) list_single_graphic_heading_pane

0xcd46,	// (0x0001b9b8) list_single_graphic_pane_ParamLimits

0xcd46,	// (0x0001b9b8) list_single_graphic_pane

0xcd46,	// (0x0001b9b8) list_single_heading_pane_ParamLimits

0xcd46,	// (0x0001b9b8) list_single_heading_pane

0xcda1,	// (0x0001ba13) list_single_large_graphic_pane_ParamLimits

0xcda1,	// (0x0001ba13) list_single_large_graphic_pane

0xcd46,	// (0x0001b9b8) list_single_number_heading_pane_ParamLimits

0xcd46,	// (0x0001b9b8) list_single_number_heading_pane

0xcd46,	// (0x0001b9b8) list_single_number_pane_ParamLimits

0xcd46,	// (0x0001b9b8) list_single_number_pane

0xcd46,	// (0x0001b9b8) list_single_pane_ParamLimits

0xcd46,	// (0x0001b9b8) list_single_pane

0x238a,	// (0x00010ffc) list_highlight_pane_cp1

0xc3ca,	// (0x0001b03c) list_single_pane_g1_ParamLimits

0xc3ca,	// (0x0001b03c) list_single_pane_g1

0xc3d6,	// (0x0001b048) list_single_pane_g2_ParamLimits

0xc3d6,	// (0x0001b048) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001e27e) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001e27e) list_single_pane_g

0xccf5,	// (0x0001b967) list_single_pane_t1_ParamLimits

0xccf5,	// (0x0001b967) list_single_pane_t1

0xc3ca,	// (0x0001b03c) list_single_number_pane_g1_ParamLimits

0xc3ca,	// (0x0001b03c) list_single_number_pane_g1

0xc3d6,	// (0x0001b048) list_single_number_pane_g2_ParamLimits

0xc3d6,	// (0x0001b048) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001e27e) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001e27e) list_single_number_pane_g

0xcc9f,	// (0x0001b911) list_single_number_pane_t1_ParamLimits

0xcc9f,	// (0x0001b911) list_single_number_pane_t1

0xccb5,	// (0x0001b927) list_single_number_pane_t2_ParamLimits

0xccb5,	// (0x0001b927) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0001e60a) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0001e60a) list_single_number_pane_t

0xc3be,	// (0x0001b030) list_single_graphic_pane_g1_ParamLimits

0xc3be,	// (0x0001b030) list_single_graphic_pane_g1

0xc3ca,	// (0x0001b03c) list_single_graphic_pane_g2_ParamLimits

0xc3ca,	// (0x0001b03c) list_single_graphic_pane_g2

0xc3d6,	// (0x0001b048) list_single_graphic_pane_g3_ParamLimits

0xc3d6,	// (0x0001b048) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001e277) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001e277) list_single_graphic_pane_g

0xc3e2,	// (0x0001b054) list_single_graphic_pane_t1_ParamLimits

0xc3e2,	// (0x0001b054) list_single_graphic_pane_t1

0xc3ca,	// (0x0001b03c) list_single_heading_pane_g1_ParamLimits

0xc3ca,	// (0x0001b03c) list_single_heading_pane_g1

0xc3d6,	// (0x0001b048) list_single_heading_pane_g2_ParamLimits

0xc3d6,	// (0x0001b048) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001e27e) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001e27e) list_single_heading_pane_g

0xc3f8,	// (0x0001b06a) list_single_heading_pane_t1_ParamLimits

0xc3f8,	// (0x0001b06a) list_single_heading_pane_t1

0xc40e,	// (0x0001b080) list_single_heading_pane_t2_ParamLimits

0xc40e,	// (0x0001b080) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001e283) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001e283) list_single_heading_pane_t

0xc3ca,	// (0x0001b03c) list_single_number_heading_pane_g1_ParamLimits

0xc3ca,	// (0x0001b03c) list_single_number_heading_pane_g1

0xc3d6,	// (0x0001b048) list_single_number_heading_pane_g2_ParamLimits

0xc3d6,	// (0x0001b048) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001e27e) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001e27e) list_single_number_heading_pane_g

0xc3f8,	// (0x0001b06a) list_single_number_heading_pane_t1_ParamLimits

0xc3f8,	// (0x0001b06a) list_single_number_heading_pane_t1

0xc420,	// (0x0001b092) list_single_number_heading_pane_t2_ParamLimits

0xc420,	// (0x0001b092) list_single_number_heading_pane_t2

0xc432,	// (0x0001b0a4) list_single_number_heading_pane_t3_ParamLimits

0xc432,	// (0x0001b0a4) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001e288) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001e288) list_single_number_heading_pane_t

0xc444,	// (0x0001b0b6) list_single_graphic_heading_pane_g1_ParamLimits

0xc444,	// (0x0001b0b6) list_single_graphic_heading_pane_g1

0xc450,	// (0x0001b0c2) list_single_graphic_heading_pane_g4_ParamLimits

0xc450,	// (0x0001b0c2) list_single_graphic_heading_pane_g4

0xc3d6,	// (0x0001b048) list_single_graphic_heading_pane_g5_ParamLimits

0xc3d6,	// (0x0001b048) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001e28f) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001e28f) list_single_graphic_heading_pane_g

0xc3f8,	// (0x0001b06a) list_single_graphic_heading_pane_t1_ParamLimits

0xc3f8,	// (0x0001b06a) list_single_graphic_heading_pane_t1

0xc461,	// (0x0001b0d3) list_single_graphic_heading_pane_t2_ParamLimits

0xc461,	// (0x0001b0d3) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001e296) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001e296) list_single_graphic_heading_pane_t

0xc473,	// (0x0001b0e5) list_single_large_graphic_pane_g1_ParamLimits

0xc473,	// (0x0001b0e5) list_single_large_graphic_pane_g1

0xc47f,	// (0x0001b0f1) list_single_large_graphic_pane_g2_ParamLimits

0xc47f,	// (0x0001b0f1) list_single_large_graphic_pane_g2

0xc48b,	// (0x0001b0fd) list_single_large_graphic_pane_g3_ParamLimits

0xc48b,	// (0x0001b0fd) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001e29b) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001e29b) list_single_large_graphic_pane_g

0x558e,	// (0x00014200) wait_border_pane_g2_copy1

0xc497,	// (0x0001b109) list_single_large_graphic_pane_g4_cp2

0xc49f,	// (0x0001b111) list_single_large_graphic_pane_t1_ParamLimits

0xc49f,	// (0x0001b111) list_single_large_graphic_pane_t1

0xc4b5,	// (0x0001b127) list_double_pane_g1_ParamLimits

0xc4b5,	// (0x0001b127) list_double_pane_g1

0xc4c1,	// (0x0001b133) list_double_pane_g2_ParamLimits

0xc4c1,	// (0x0001b133) list_double_pane_g2

0x0001,

0xf630,	// (0x0001e2a2) list_double_pane_g_ParamLimits

0xf630,	// (0x0001e2a2) list_double_pane_g

0xc4cd,	// (0x0001b13f) list_double_pane_t1_ParamLimits

0xc4cd,	// (0x0001b13f) list_double_pane_t1

0xc4e3,	// (0x0001b155) list_double_pane_t2_ParamLimits

0xc4e3,	// (0x0001b155) list_double_pane_t2

0x0001,

0xf635,	// (0x0001e2a7) list_double_pane_t_ParamLimits

0xf635,	// (0x0001e2a7) list_double_pane_t

0xc4f5,	// (0x0001b167) list_double2_pane_g1_ParamLimits

0xc4f5,	// (0x0001b167) list_double2_pane_g1

0xc506,	// (0x0001b178) list_double2_pane_g2_ParamLimits

0xc506,	// (0x0001b178) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001e2ac) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001e2ac) list_double2_pane_g

0xc512,	// (0x0001b184) list_double2_pane_t1_ParamLimits

0xc512,	// (0x0001b184) list_double2_pane_t1

0xc528,	// (0x0001b19a) list_double2_pane_t2_ParamLimits

0xc528,	// (0x0001b19a) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001e2b1) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001e2b1) list_double2_pane_t

0xc4b5,	// (0x0001b127) list_double_number_pane_g1_ParamLimits

0xc4b5,	// (0x0001b127) list_double_number_pane_g1

0xc4c1,	// (0x0001b133) list_double_number_pane_g2_ParamLimits

0xc4c1,	// (0x0001b133) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001e2a2) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001e2a2) list_double_number_pane_g

0xc53a,	// (0x0001b1ac) list_double_number_pane_t1_ParamLimits

0xc53a,	// (0x0001b1ac) list_double_number_pane_t1

0xc54c,	// (0x0001b1be) list_double_number_pane_t2_ParamLimits

0xc54c,	// (0x0001b1be) list_double_number_pane_t2

0xc562,	// (0x0001b1d4) list_double_number_pane_t3_ParamLimits

0xc562,	// (0x0001b1d4) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001e2b6) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001e2b6) list_double_number_pane_t

0xc574,	// (0x0001b1e6) list_double_graphic_pane_g1_ParamLimits

0xc574,	// (0x0001b1e6) list_double_graphic_pane_g1

0xc580,	// (0x0001b1f2) list_double_graphic_pane_g2_ParamLimits

0xc580,	// (0x0001b1f2) list_double_graphic_pane_g2

0xc58f,	// (0x0001b201) list_double_graphic_pane_g3_ParamLimits

0xc58f,	// (0x0001b201) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001e2bd) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001e2bd) list_double_graphic_pane_g

0xc5a7,	// (0x0001b219) list_double_graphic_pane_t1_ParamLimits

0xc5a7,	// (0x0001b219) list_double_graphic_pane_t1

0xc5bd,	// (0x0001b22f) list_double_graphic_pane_t2_ParamLimits

0xc5bd,	// (0x0001b22f) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001e2c6) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001e2c6) list_double_graphic_pane_t

0xc5cf,	// (0x0001b241) list_double2_graphic_pane_g1_ParamLimits

0xc5cf,	// (0x0001b241) list_double2_graphic_pane_g1

0xc5db,	// (0x0001b24d) list_double2_graphic_pane_g2_ParamLimits

0xc5db,	// (0x0001b24d) list_double2_graphic_pane_g2

0xc5e7,	// (0x0001b259) list_double2_graphic_pane_g3_ParamLimits

0xc5e7,	// (0x0001b259) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001e2cb) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001e2cb) list_double2_graphic_pane_g

0xc5f3,	// (0x0001b265) list_double2_graphic_pane_t1_ParamLimits

0xc5f3,	// (0x0001b265) list_double2_graphic_pane_t1

0xc609,	// (0x0001b27b) list_double2_graphic_pane_t2_ParamLimits

0xc609,	// (0x0001b27b) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001e2d2) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001e2d2) list_double2_graphic_pane_t

0xc61b,	// (0x0001b28d) list_double_large_graphic_pane_g1_ParamLimits

0xc61b,	// (0x0001b28d) list_double_large_graphic_pane_g1

0xc644,	// (0x0001b2b6) list_double_large_graphic_pane_g2_ParamLimits

0xc644,	// (0x0001b2b6) list_double_large_graphic_pane_g2

0xc4c1,	// (0x0001b133) list_double_large_graphic_pane_g3_ParamLimits

0xc4c1,	// (0x0001b133) list_double_large_graphic_pane_g3

0xc655,	// (0x0001b2c7) list_double_large_graphic_pane_g4_ParamLimits

0xc655,	// (0x0001b2c7) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001e2d7) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001e2d7) list_double_large_graphic_pane_g

0xc67a,	// (0x0001b2ec) list_double_large_graphic_pane_t1_ParamLimits

0xc67a,	// (0x0001b2ec) list_double_large_graphic_pane_t1

0xc693,	// (0x0001b305) list_double_large_graphic_pane_t2_ParamLimits

0xc693,	// (0x0001b305) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001e2e2) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001e2e2) list_double_large_graphic_pane_t

0xc6a5,	// (0x0001b317) list_double2_large_graphic_pane_g1_ParamLimits

0xc6a5,	// (0x0001b317) list_double2_large_graphic_pane_g1

0xc6b1,	// (0x0001b323) list_double2_large_graphic_pane_g2_ParamLimits

0xc6b1,	// (0x0001b323) list_double2_large_graphic_pane_g2

0xc5e7,	// (0x0001b259) list_double2_large_graphic_pane_g3_ParamLimits

0xc5e7,	// (0x0001b259) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001e2e7) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001e2e7) list_double2_large_graphic_pane_g

0xc6c2,	// (0x0001b334) list_double2_large_graphic_pane_t1_ParamLimits

0xc6c2,	// (0x0001b334) list_double2_large_graphic_pane_t1

0xc6d8,	// (0x0001b34a) list_double2_large_graphic_pane_t2_ParamLimits

0xc6d8,	// (0x0001b34a) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001e2ee) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001e2ee) list_double2_large_graphic_pane_t

0xc6ea,	// (0x0001b35c) list_double_heading_pane_g1_ParamLimits

0xc6ea,	// (0x0001b35c) list_double_heading_pane_g1

0xc6fb,	// (0x0001b36d) list_double_heading_pane_g2_ParamLimits

0xc6fb,	// (0x0001b36d) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001e2f3) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001e2f3) list_double_heading_pane_g

0xc707,	// (0x0001b379) list_double_heading_pane_t1_ParamLimits

0xc707,	// (0x0001b379) list_double_heading_pane_t1

0xc71d,	// (0x0001b38f) list_double_heading_pane_t2_ParamLimits

0xc71d,	// (0x0001b38f) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001e2f8) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001e2f8) list_double_heading_pane_t

0xc5cf,	// (0x0001b241) list_double_graphic_heading_pane_g1_ParamLimits

0xc5cf,	// (0x0001b241) list_double_graphic_heading_pane_g1

0xc6ea,	// (0x0001b35c) list_double_graphic_heading_pane_g2_ParamLimits

0xc6ea,	// (0x0001b35c) list_double_graphic_heading_pane_g2

0xc6fb,	// (0x0001b36d) list_double_graphic_heading_pane_g3_ParamLimits

0xc6fb,	// (0x0001b36d) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001e2fd) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001e2fd) list_double_graphic_heading_pane_g

0xc72f,	// (0x0001b3a1) list_double_graphic_heading_pane_t1_ParamLimits

0xc72f,	// (0x0001b3a1) list_double_graphic_heading_pane_t1

0xc609,	// (0x0001b27b) list_double_graphic_heading_pane_t2_ParamLimits

0xc609,	// (0x0001b27b) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001e304) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001e304) list_double_graphic_heading_pane_t

0xc644,	// (0x0001b2b6) list_double_time_pane_g1_ParamLimits

0xc644,	// (0x0001b2b6) list_double_time_pane_g1

0xc4c1,	// (0x0001b133) list_double_time_pane_g2_ParamLimits

0xc4c1,	// (0x0001b133) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001e309) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001e309) list_double_time_pane_g

0xc745,	// (0x0001b3b7) list_double_time_pane_t1_ParamLimits

0xc745,	// (0x0001b3b7) list_double_time_pane_t1

0xc75b,	// (0x0001b3cd) list_double_time_pane_t2_ParamLimits

0xc75b,	// (0x0001b3cd) list_double_time_pane_t2

0xc76d,	// (0x0001b3df) list_double_time_pane_t3_ParamLimits

0xc76d,	// (0x0001b3df) list_double_time_pane_t3

0xc77f,	// (0x0001b3f1) list_double_time_pane_t4_ParamLimits

0xc77f,	// (0x0001b3f1) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001e30e) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001e30e) list_double_time_pane_t

0xc5db,	// (0x0001b24d) list_setting_pane_g1_ParamLimits

0xc5db,	// (0x0001b24d) list_setting_pane_g1

0xc5e7,	// (0x0001b259) list_setting_pane_g2_ParamLimits

0xc5e7,	// (0x0001b259) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001e317) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001e317) list_setting_pane_g

0xc791,	// (0x0001b403) list_setting_pane_t1_ParamLimits

0xc791,	// (0x0001b403) list_setting_pane_t1

0xc7ab,	// (0x0001b41d) list_setting_pane_t2_ParamLimits

0xc7ab,	// (0x0001b41d) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001e31c) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001e31c) list_setting_pane_t

0xc7ea,	// (0x0001b45c) set_value_pane_cp_ParamLimits

0xc7ea,	// (0x0001b45c) set_value_pane_cp

0xc7f6,	// (0x0001b468) list_setting_number_pane_g1_ParamLimits

0xc7f6,	// (0x0001b468) list_setting_number_pane_g1

0xc802,	// (0x0001b474) list_setting_number_pane_g2_ParamLimits

0xc802,	// (0x0001b474) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0001e323) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0001e323) list_setting_number_pane_g

0xc80e,	// (0x0001b480) list_setting_number_pane_t1_ParamLimits

0xc80e,	// (0x0001b480) list_setting_number_pane_t1

0xc827,	// (0x0001b499) list_setting_number_pane_t2_ParamLimits

0xc827,	// (0x0001b499) list_setting_number_pane_t2

0xc841,	// (0x0001b4b3) list_setting_number_pane_t3_ParamLimits

0xc841,	// (0x0001b4b3) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0001e328) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0001e328) list_setting_number_pane_t

0xc7ea,	// (0x0001b45c) set_value_pane_ParamLimits

0xc7ea,	// (0x0001b45c) set_value_pane

0x3118,	// (0x00011d8a) bg_set_opt_pane_ParamLimits

0x3118,	// (0x00011d8a) bg_set_opt_pane

0xc884,	// (0x0001b4f6) set_value_pane_t1

0x3147,	// (0x00011db9) slider_set_pane_cp3

0x3150,	// (0x00011dc2) volume_small_pane_cp

0x3159,	// (0x00011dcb) list_form_gen_pane

0x3162,	// (0x00011dd4) scroll_pane_cp8

0xc89a,	// (0x0001b50c) form_field_data_pane_ParamLimits

0xc89a,	// (0x0001b50c) form_field_data_pane

0xc8ba,	// (0x0001b52c) form_field_data_wide_pane_ParamLimits

0xc8ba,	// (0x0001b52c) form_field_data_wide_pane

0xc8db,	// (0x0001b54d) form_field_popup_pane_ParamLimits

0xc8db,	// (0x0001b54d) form_field_popup_pane

0xc8fb,	// (0x0001b56d) form_field_popup_wide_pane_ParamLimits

0xc8fb,	// (0x0001b56d) form_field_popup_wide_pane

0xc918,	// (0x0001b58a) form_field_slider_pane_ParamLimits

0xc918,	// (0x0001b58a) form_field_slider_pane

0xc92b,	// (0x0001b59d) form_field_slider_wide_pane_ParamLimits

0xc92b,	// (0x0001b59d) form_field_slider_wide_pane

0x3223,	// (0x00011e95) data_form_pane

0xc948,	// (0x0001b5ba) form_field_data_pane_t1

0x3251,	// (0x00011ec3) input_focus_pane

0x325f,	// (0x00011ed1) data_form_wide_pane

0xc96c,	// (0x0001b5de) form_field_data_wide_pane_t1

0x2a61,	// (0x000116d3) input_focus_pane_cp6

0xc98e,	// (0x0001b600) form_field_popup_pane_t1

0x3251,	// (0x00011ec3) input_focus_pane_cp7

0x32d1,	// (0x00011f43) list_form_pane

0xc9ae,	// (0x0001b620) form_field_popup_wide_pane_t1

0x3251,	// (0x00011ec3) input_focus_pane_cp8

0x32fa,	// (0x00011f6c) list_form_wide_pane

0xc9cb,	// (0x0001b63d) form_field_slider_pane_t1_ParamLimits

0xc9cb,	// (0x0001b63d) form_field_slider_pane_t1

0xc9e1,	// (0x0001b653) form_field_slider_pane_t2_ParamLimits

0xc9e1,	// (0x0001b653) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0001e338) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0001e338) form_field_slider_pane_t

0x26ff,	// (0x00011371) input_focus_pane_cp9_ParamLimits

0x26ff,	// (0x00011371) input_focus_pane_cp9

0xc9f6,	// (0x0001b668) slider_cont_pane_ParamLimits

0xc9f6,	// (0x0001b668) slider_cont_pane

0x3349,	// (0x00011fbb) form_field_slider_wide_pane_t1_ParamLimits

0x3349,	// (0x00011fbb) form_field_slider_wide_pane_t1

0xca0a,	// (0x0001b67c) form_field_slider_wide_pane_t2_ParamLimits

0xca0a,	// (0x0001b67c) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0001e33d) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0001e33d) form_field_slider_wide_pane_t

0x26ff,	// (0x00011371) input_focus_pane_cp10_ParamLimits

0x26ff,	// (0x00011371) input_focus_pane_cp10

0xca1c,	// (0x0001b68e) slider_cont_pane_cp1_ParamLimits

0xca1c,	// (0x0001b68e) slider_cont_pane_cp1

0xca30,	// (0x0001b6a2) slider_form_pane_cp

0x3389,	// (0x00011ffb) input_focus_pane_g1

0x3391,	// (0x00012003) input_focus_pane_g2

0x3399,	// (0x0001200b) input_focus_pane_g3

0x33a1,	// (0x00012013) input_focus_pane_g4

0x33a9,	// (0x0001201b) input_focus_pane_g5

0x33b1,	// (0x00012023) input_focus_pane_g6

0x33b9,	// (0x0001202b) input_focus_pane_g7

0x33c1,	// (0x00012033) input_focus_pane_g8

0x33c9,	// (0x0001203b) input_focus_pane_g9

0x2380,	// (0x00010ff2) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0001e342) input_focus_pane_g

0x5597,	// (0x00014209) wait_border_pane_g3_copy1

0xca38,	// (0x0001b6aa) data_form_pane_t1

0x2380,	// (0x00010ff2) wait_anim_pane_g1_copy1

0xccc7,	// (0x0001b939) data_form_wide_pane_t1

0xca53,	// (0x0001b6c5) list_form_graphic_pane_cp_ParamLimits

0xca53,	// (0x0001b6c5) list_form_graphic_pane_cp

0x64fb,	// (0x0001516d) slider_form_pane_g1

0x6504,	// (0x00015176) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0001e63a) slider_form_pane_g

0xca6c,	// (0x0001b6de) list_form_graphic_pane_ParamLimits

0xca6c,	// (0x0001b6de) list_form_graphic_pane

0xca88,	// (0x0001b6fa) list_form_graphic_pane_g1

0xca90,	// (0x0001b702) list_form_graphic_pane_t1_ParamLimits

0xca90,	// (0x0001b702) list_form_graphic_pane_t1

0x246a,	// (0x000110dc) list_highlight_pane_cp5_ParamLimits

0x246a,	// (0x000110dc) list_highlight_pane_cp5

0xcaa5,	// (0x0001b717) find_pane_g1

0x3447,	// (0x000120b9) input_find_pane

0xcaae,	// (0x0001b720) input_find_pane_g1_ParamLimits

0xcaae,	// (0x0001b720) input_find_pane_g1

0xcaba,	// (0x0001b72c) input_find_pane_t1_ParamLimits

0xcaba,	// (0x0001b72c) input_find_pane_t1

0xcacf,	// (0x0001b741) input_find_pane_t2_ParamLimits

0xcacf,	// (0x0001b741) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0001e357) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0001e357) input_find_pane_t

0x3486,	// (0x000120f8) input_focus_pane_cp5_ParamLimits

0x3486,	// (0x000120f8) input_focus_pane_cp5

0x34a0,	// (0x00012112) bg_popup_window_pane_cp2_ParamLimits

0x34a0,	// (0x00012112) bg_popup_window_pane_cp2

0x34ad,	// (0x0001211f) listscroll_menu_pane_ParamLimits

0x34ad,	// (0x0001211f) listscroll_menu_pane

0x34b9,	// (0x0001212b) popup_submenu_window_ParamLimits

0x34b9,	// (0x0001212b) popup_submenu_window

0x34e3,	// (0x00012155) find_popup_pane_g1

0x34eb,	// (0x0001215d) input_popup_find_pane_cp

0x3486,	// (0x000120f8) input_focus_pane_cp4_ParamLimits

0x3486,	// (0x000120f8) input_focus_pane_cp4

0x3501,	// (0x00012173) input_popup_find_pane_t1_ParamLimits

0x3501,	// (0x00012173) input_popup_find_pane_t1

0x238a,	// (0x00010ffc) bg_popup_sub_pane_cp

0x352f,	// (0x000121a1) listscroll_popup_sub_pane

0x3537,	// (0x000121a9) list_submenu_pane_ParamLimits

0x3537,	// (0x000121a9) list_submenu_pane

0x3548,	// (0x000121ba) scroll_pane_cp4

0x3550,	// (0x000121c2) list_single_popup_submenu_pane_ParamLimits

0x3550,	// (0x000121c2) list_single_popup_submenu_pane

0x3564,	// (0x000121d6) list_single_popup_submenu_pane_g1

0x356c,	// (0x000121de) list_single_popup_submenu_pane_t1_ParamLimits

0x356c,	// (0x000121de) list_single_popup_submenu_pane_t1

0x246a,	// (0x000110dc) bg_active_tab_pane_cp1_ParamLimits

0x246a,	// (0x000110dc) bg_active_tab_pane_cp1

0x3581,	// (0x000121f3) tabs_2_active_pane_g1

0x3589,	// (0x000121fb) tabs_2_active_pane_t1

0x246a,	// (0x000110dc) bg_passive_tab_pane_cp1_ParamLimits

0x246a,	// (0x000110dc) bg_passive_tab_pane_cp1

0x3581,	// (0x000121f3) tabs_2_passive_pane_g1

0x3589,	// (0x000121fb) tabs_2_passive_pane_t1

0x359b,	// (0x0001220d) bg_active_tab_pane_cp4

0x35a9,	// (0x0001221b) tabs_2_long_active_pane_t1

0x35bc,	// (0x0001222e) bg_passive_tab_pane_cp4

0x3cab,	// (0x0001291d) list_single_midp_graphic_pane_g4_ParamLimits

0x359b,	// (0x0001220d) bg_active_tab_pane_cp5

0x35c8,	// (0x0001223a) tabs_3_long_active_pane_t1

0x35bc,	// (0x0001222e) bg_passive_tab_pane_cp5

0x3cab,	// (0x0001291d) list_single_midp_graphic_pane_g4

0x246a,	// (0x000110dc) bg_popup_window_pane_cp13_ParamLimits

0x246a,	// (0x000110dc) bg_popup_window_pane_cp13

0x35e3,	// (0x00012255) listscroll_popup_fast_pane_ParamLimits

0x35e3,	// (0x00012255) listscroll_popup_fast_pane

0x35f2,	// (0x00012264) grid_popup_fast_pane_ParamLimits

0x35f2,	// (0x00012264) grid_popup_fast_pane

0x3604,	// (0x00012276) scroll_pane_cp9_ParamLimits

0x3604,	// (0x00012276) scroll_pane_cp9

0x82ad,	// (0x00016f1f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x82ad,	// (0x00016f1f) list_single_graphic_hl_pane_t1_cp2

0x3628,	// (0x0001229a) input_focus_pane_cp20_ParamLimits

0x3628,	// (0x0001229a) input_focus_pane_cp20

0x3636,	// (0x000122a8) query_popup_data_pane_t1_ParamLimits

0x3636,	// (0x000122a8) query_popup_data_pane_t1

0x3649,	// (0x000122bb) query_popup_data_pane_t2_ParamLimits

0x3649,	// (0x000122bb) query_popup_data_pane_t2

0x368f,	// (0x00012301) query_popup_data_pane_t3_ParamLimits

0x368f,	// (0x00012301) query_popup_data_pane_t3

0x36d0,	// (0x00012342) query_popup_data_pane_t4_ParamLimits

0x36d0,	// (0x00012342) query_popup_data_pane_t4

0x370c,	// (0x0001237e) query_popup_data_pane_t5_ParamLimits

0x370c,	// (0x0001237e) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0001e35c) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0001e35c) query_popup_data_pane_t

0x3389,	// (0x00011ffb) bg_set_opt_pane_g1

0x3391,	// (0x00012003) bg_set_opt_pane_g2

0x3399,	// (0x0001200b) bg_set_opt_pane_g3

0x33a1,	// (0x00012013) bg_set_opt_pane_g4

0x33a9,	// (0x0001201b) bg_set_opt_pane_g5

0x33b1,	// (0x00012023) bg_set_opt_pane_g6

0x33b9,	// (0x0001202b) bg_set_opt_pane_g7

0x33c1,	// (0x00012033) bg_set_opt_pane_g8

0x33c9,	// (0x0001203b) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0001e367) bg_set_opt_pane_g

0xdac8,	// (0x0001c73a) control_top_pane_stacon_ParamLimits

0xdac8,	// (0x0001c73a) control_top_pane_stacon

0xdb1b,	// (0x0001c78d) signal_pane_stacon_ParamLimits

0xdb1b,	// (0x0001c78d) signal_pane_stacon

0x3d34,	// (0x000129a6) stacon_top_pane_g1_ParamLimits

0x3d34,	// (0x000129a6) stacon_top_pane_g1

0xdb40,	// (0x0001c7b2) title_pane_stacon_ParamLimits

0xdb40,	// (0x0001c7b2) title_pane_stacon

0xdb6a,	// (0x0001c7dc) uni_indicator_pane_stacon_ParamLimits

0xdb6a,	// (0x0001c7dc) uni_indicator_pane_stacon

0xdb7f,	// (0x0001c7f1) battery_pane_stacon_ParamLimits

0xdb7f,	// (0x0001c7f1) battery_pane_stacon

0xdbc3,	// (0x0001c835) control_bottom_pane_stacon_ParamLimits

0xdbc3,	// (0x0001c835) control_bottom_pane_stacon

0xdbe6,	// (0x0001c858) navi_pane_stacon_ParamLimits

0xdbe6,	// (0x0001c858) navi_pane_stacon

0x3d56,	// (0x000129c8) stacon_bottom_pane_g1_ParamLimits

0x3d56,	// (0x000129c8) stacon_bottom_pane_g1

0xd829,	// (0x0001c49b) aid_levels_signal_lsc_ParamLimits

0xd829,	// (0x0001c49b) aid_levels_signal_lsc

0xd840,	// (0x0001c4b2) signal_pane_stacon_g1_ParamLimits

0xd840,	// (0x0001c4b2) signal_pane_stacon_g1

0xd854,	// (0x0001c4c6) signal_pane_stacon_g2_ParamLimits

0xd854,	// (0x0001c4c6) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0001e37a) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0001e37a) signal_pane_stacon_g

0xd889,	// (0x0001c4fb) title_pane_stacon_t1_ParamLimits

0xd889,	// (0x0001c4fb) title_pane_stacon_t1

0x3764,	// (0x000123d6) uni_indicator_pane_stacon_g1

0x376e,	// (0x000123e0) uni_indicator_pane_stacon_g2

0x3750,	// (0x000123c2) uni_indicator_pane_stacon_g3

0x375a,	// (0x000123cc) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0001e386) uni_indicator_pane_stacon_g

0xd8ae,	// (0x0001c520) control_top_pane_stacon_g1

0xd8b6,	// (0x0001c528) control_top_pane_stacon_t1_ParamLimits

0xd8b6,	// (0x0001c528) control_top_pane_stacon_t1

0xd8ed,	// (0x0001c55f) aid_levels_battery_lsc_ParamLimits

0xd8ed,	// (0x0001c55f) aid_levels_battery_lsc

0xd905,	// (0x0001c577) battery_pane_stacon_g1_ParamLimits

0xd905,	// (0x0001c577) battery_pane_stacon_g1

0xd918,	// (0x0001c58a) battery_pane_stacon_g2_ParamLimits

0xd918,	// (0x0001c58a) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0001e38f) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0001e38f) battery_pane_stacon_g

0xd956,	// (0x0001c5c8) navi_icon_pane_stacon

0xd96a,	// (0x0001c5dc) navi_navi_pane_stacon

0xd956,	// (0x0001c5c8) navi_text_pane_stacon

0xd8ae,	// (0x0001c520) control_bottom_pane_stacon_g1

0xd97e,	// (0x0001c5f0) control_bottom_pane_stacon_t1_ParamLimits

0xd97e,	// (0x0001c5f0) control_bottom_pane_stacon_t1

0x3792,	// (0x00012404) grid_app_pane_ParamLimits

0x3792,	// (0x00012404) grid_app_pane

0x37b6,	// (0x00012428) scroll_pane_cp15_ParamLimits

0x37b6,	// (0x00012428) scroll_pane_cp15

0x37cb,	// (0x0001243d) cell_app_pane_ParamLimits

0x37cb,	// (0x0001243d) cell_app_pane

0x37ef,	// (0x00012461) cell_app_pane_g1_ParamLimits

0x37ef,	// (0x00012461) cell_app_pane_g1

0x3813,	// (0x00012485) cell_app_pane_g2_ParamLimits

0x3813,	// (0x00012485) cell_app_pane_g2

0x0001,

0xf722,	// (0x0001e394) cell_app_pane_g_ParamLimits

0xf722,	// (0x0001e394) cell_app_pane_g

0x381f,	// (0x00012491) cell_app_pane_t1_ParamLimits

0x381f,	// (0x00012491) cell_app_pane_t1

0x3831,	// (0x000124a3) grid_highlight_pane_ParamLimits

0x3831,	// (0x000124a3) grid_highlight_pane

0x3389,	// (0x00011ffb) cell_highlight_pane_g1

0x3391,	// (0x00012003) cell_highlight_pane_g2

0x3399,	// (0x0001200b) cell_highlight_pane_g3

0x33a1,	// (0x00012013) cell_highlight_pane_g4

0x33a9,	// (0x0001201b) cell_highlight_pane_g5

0x33b1,	// (0x00012023) cell_highlight_pane_g6

0x33b9,	// (0x0001202b) cell_highlight_pane_g7

0x33c1,	// (0x00012033) cell_highlight_pane_g8

0x33c9,	// (0x0001203b) cell_highlight_pane_g9

0x2380,	// (0x00010ff2) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0001e342) cell_highlight_pane_g

0x3842,	// (0x000124b4) bg_scroll_pane

0xd9c8,	// (0x0001c63a) scroll_handle_pane

0x3889,	// (0x000124fb) scroll_bg_pane_g1

0x389e,	// (0x00012510) scroll_bg_pane_g2

0x38b6,	// (0x00012528) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0001e399) scroll_bg_pane_g

0x38cb,	// (0x0001253d) scroll_handle_focus_pane_ParamLimits

0x38cb,	// (0x0001253d) scroll_handle_focus_pane

0x3889,	// (0x000124fb) scroll_handle_pane_g1

0x38d8,	// (0x0001254a) scroll_handle_pane_g2

0x38b6,	// (0x00012528) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0001e3a0) scroll_handle_pane_g

0x3486,	// (0x000120f8) bg_popup_sub_pane_cp21_ParamLimits

0x3486,	// (0x000120f8) bg_popup_sub_pane_cp21

0x38ec,	// (0x0001255e) popup_fep_japan_predictive_window_t1_ParamLimits

0x38ec,	// (0x0001255e) popup_fep_japan_predictive_window_t1

0x3906,	// (0x00012578) popup_fep_japan_predictive_window_t2_ParamLimits

0x3906,	// (0x00012578) popup_fep_japan_predictive_window_t2

0x3939,	// (0x000125ab) popup_fep_japan_predictive_window_t3_ParamLimits

0x3939,	// (0x000125ab) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0001e3a7) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0001e3a7) popup_fep_japan_predictive_window_t

0x238a,	// (0x00010ffc) bg_popup_sub_pane_cp23

0x3970,	// (0x000125e2) listscroll_japin_cand_pane

0x3978,	// (0x000125ea) popup_fep_japan_candidate_window_t1

0x3986,	// (0x000125f8) candidate_pane_ParamLimits

0x3986,	// (0x000125f8) candidate_pane

0x3998,	// (0x0001260a) scroll_pane_cp30

0x39a0,	// (0x00012612) list_single_popup_jap_candidate_pane_ParamLimits

0x39a0,	// (0x00012612) list_single_popup_jap_candidate_pane

0x238a,	// (0x00010ffc) list_highlight_pane_cp30

0x39b5,	// (0x00012627) list_single_popup_jap_candidate_pane_t1

0x39c4,	// (0x00012636) level_1_signal

0x39d1,	// (0x00012643) level_2_signal

0x39de,	// (0x00012650) level_3_signal

0x39eb,	// (0x0001265d) level_4_signal

0x39f8,	// (0x0001266a) level_5_signal

0x3a05,	// (0x00012677) level_6_signal

0x3a12,	// (0x00012684) level_7_signal

0x39c4,	// (0x00012636) level_1_battery

0x39d1,	// (0x00012643) level_2_battery

0x39de,	// (0x00012650) level_3_battery

0x39eb,	// (0x0001265d) level_4_battery

0x39f8,	// (0x0001266a) level_5_battery

0x3a05,	// (0x00012677) level_6_battery

0x3a12,	// (0x00012684) level_7_battery

0x3a37,	// (0x000126a9) list_menu_pane_ParamLimits

0x3a37,	// (0x000126a9) list_menu_pane

0x3a48,	// (0x000126ba) scroll_pane_cp25_ParamLimits

0x3a48,	// (0x000126ba) scroll_pane_cp25

0x3a61,	// (0x000126d3) list_double2_graphic_pane_cp2_ParamLimits

0x3a61,	// (0x000126d3) list_double2_graphic_pane_cp2

0x3a61,	// (0x000126d3) list_double2_large_graphic_pane_cp2_ParamLimits

0x3a61,	// (0x000126d3) list_double2_large_graphic_pane_cp2

0x3a61,	// (0x000126d3) list_double2_pane_cp2_ParamLimits

0x3a61,	// (0x000126d3) list_double2_pane_cp2

0x3a61,	// (0x000126d3) list_double_graphic_pane_cp2_ParamLimits

0x3a61,	// (0x000126d3) list_double_graphic_pane_cp2

0x3a61,	// (0x000126d3) list_double_large_graphic_pane_cp2_ParamLimits

0x3a61,	// (0x000126d3) list_double_large_graphic_pane_cp2

0x3a61,	// (0x000126d3) list_double_number_pane_cp2_ParamLimits

0x3a61,	// (0x000126d3) list_double_number_pane_cp2

0x3a61,	// (0x000126d3) list_double_pane_cp2_ParamLimits

0x3a61,	// (0x000126d3) list_double_pane_cp2

0x3a85,	// (0x000126f7) list_single_2graphic_pane_cp2_ParamLimits

0x3a85,	// (0x000126f7) list_single_2graphic_pane_cp2

0x3a85,	// (0x000126f7) list_single_graphic_heading_pane_cp2_ParamLimits

0x3a85,	// (0x000126f7) list_single_graphic_heading_pane_cp2

0x3a85,	// (0x000126f7) list_single_graphic_pane_cp2_ParamLimits

0x3a85,	// (0x000126f7) list_single_graphic_pane_cp2

0x3a85,	// (0x000126f7) list_single_heading_pane_cp2_ParamLimits

0x3a85,	// (0x000126f7) list_single_heading_pane_cp2

0x3a9e,	// (0x00012710) list_single_large_graphic_pane_cp2_ParamLimits

0x3a9e,	// (0x00012710) list_single_large_graphic_pane_cp2

0x3a85,	// (0x000126f7) list_single_number_heading_pane_cp2_ParamLimits

0x3a85,	// (0x000126f7) list_single_number_heading_pane_cp2

0x3a85,	// (0x000126f7) list_single_number_pane_cp2_ParamLimits

0x3a85,	// (0x000126f7) list_single_number_pane_cp2

0x3a85,	// (0x000126f7) list_single_pane_cp2_ParamLimits

0x3a85,	// (0x000126f7) list_single_pane_cp2

0x3af4,	// (0x00012766) bg_popup_sub_pane_cp22

0xda7a,	// (0x0001c6ec) popup_side_volume_key_window_g1

0xdaa4,	// (0x0001c716) popup_side_volume_key_window_t1

0xdac0,	// (0x0001c732) volume_small_pane_cp1

0x26ff,	// (0x00011371) bg_popup_sub_pane_cp24_ParamLimits

0x26ff,	// (0x00011371) bg_popup_sub_pane_cp24

0x3b0a,	// (0x0001277c) fep_china_uni_candidate_pane_ParamLimits

0x3b0a,	// (0x0001277c) fep_china_uni_candidate_pane

0x3b1e,	// (0x00012790) fep_china_uni_entry_pane

0x3b2e,	// (0x000127a0) popup_fep_china_uni_window_g1

0x3b4a,	// (0x000127bc) fep_china_uni_entry_pane_g1

0x3b52,	// (0x000127c4) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0001e3d4) fep_china_uni_entry_pane_g

0x3b5a,	// (0x000127cc) fep_entry_item_pane

0x3b64,	// (0x000127d6) fep_candidate_item_pane

0x3b6c,	// (0x000127de) fep_china_uni_candidate_pane_g1

0x3b74,	// (0x000127e6) fep_china_uni_candidate_pane_g2

0x3b7c,	// (0x000127ee) fep_china_uni_candidate_pane_g3

0x3b84,	// (0x000127f6) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0001e3d9) fep_china_uni_candidate_pane_g

0x2380,	// (0x00010ff2) fep_entry_item_pane_g1

0x3b8c,	// (0x000127fe) fep_entry_item_pane_t1_ParamLimits

0x3b8c,	// (0x000127fe) fep_entry_item_pane_t1

0x3ba2,	// (0x00012814) fep_candidate_item_pane_t1_ParamLimits

0x3ba2,	// (0x00012814) fep_candidate_item_pane_t1

0x3bb7,	// (0x00012829) fep_candidate_item_pane_t2_ParamLimits

0x3bb7,	// (0x00012829) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0001e3e2) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0001e3e2) fep_candidate_item_pane_t

0x246a,	// (0x000110dc) list_highlight_pane_cp31_ParamLimits

0x246a,	// (0x000110dc) list_highlight_pane_cp31

0x3bc9,	// (0x0001283b) level_1_signal_lsc

0x3bd2,	// (0x00012844) level_2_signal_lsc

0x3bdb,	// (0x0001284d) level_3_signal_lsc

0x3be4,	// (0x00012856) level_4_signal_lsc

0x3bed,	// (0x0001285f) level_5_signal_lsc

0x3bf6,	// (0x00012868) level_6_signal_lsc

0x3bff,	// (0x00012871) level_7_signal_lsc

0x3bff,	// (0x00012871) level_1_battery_lsc

0x3c08,	// (0x0001287a) level_2_battery_lsc

0x3c11,	// (0x00012883) level_3_battery_lsc

0x3c1a,	// (0x0001288c) level_4_battery_lsc

0x3c23,	// (0x00012895) level_5_battery_lsc

0x3c2c,	// (0x0001289e) level_6_battery_lsc

0x3bc9,	// (0x0001283b) level_7_battery_lsc

0x3c35,	// (0x000128a7) scroll_handle_focus_pane_g1

0x3c3e,	// (0x000128b0) scroll_handle_focus_pane_g2

0x3c47,	// (0x000128b9) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0001e3e7) scroll_handle_focus_pane_g

0xcae4,	// (0x0001b756) list_single_2graphic_pane_g1_ParamLimits

0xcae4,	// (0x0001b756) list_single_2graphic_pane_g1

0xc450,	// (0x0001b0c2) list_single_2graphic_pane_g2_ParamLimits

0xc450,	// (0x0001b0c2) list_single_2graphic_pane_g2

0xc3d6,	// (0x0001b048) list_single_2graphic_pane_g3_ParamLimits

0xc3d6,	// (0x0001b048) list_single_2graphic_pane_g3

0xcaf0,	// (0x0001b762) list_single_2graphic_pane_g4_ParamLimits

0xcaf0,	// (0x0001b762) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0001e3ee) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0001e3ee) list_single_2graphic_pane_g

0xcafc,	// (0x0001b76e) list_single_2graphic_pane_t1_ParamLimits

0xcafc,	// (0x0001b76e) list_single_2graphic_pane_t1

0xcb2a,	// (0x0001b79c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcb2a,	// (0x0001b79c) list_double2_graphic_large_graphic_pane_g1

0xc6b1,	// (0x0001b323) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc6b1,	// (0x0001b323) list_double2_graphic_large_graphic_pane_g2

0xc5e7,	// (0x0001b259) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc5e7,	// (0x0001b259) list_double2_graphic_large_graphic_pane_g3

0xcb3a,	// (0x0001b7ac) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcb3a,	// (0x0001b7ac) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0001e3f7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0001e3f7) list_double2_graphic_large_graphic_pane_g

0xcb46,	// (0x0001b7b8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcb46,	// (0x0001b7b8) list_double2_graphic_large_graphic_pane_t1

0xcb5c,	// (0x0001b7ce) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcb5c,	// (0x0001b7ce) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0001e400) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0001e400) list_double2_graphic_large_graphic_pane_t

0x3e1e,	// (0x00012a90) popup_fast_swap_window_ParamLimits

0x3e1e,	// (0x00012a90) popup_fast_swap_window

0x3e3a,	// (0x00012aac) popup_side_volume_key_window

0x3e56,	// (0x00012ac8) stacon_top_pane

0x3e60,	// (0x00012ad2) status_pane_ParamLimits

0x3e60,	// (0x00012ad2) status_pane

0x3e56,	// (0x00012ac8) status_small_pane

0x238a,	// (0x00010ffc) control_pane

0x238a,	// (0x00010ffc) stacon_bottom_pane

0x3162,	// (0x00011dd4) scroll_pane_cp121

0x3159,	// (0x00011dcb) set_content_pane

0x3cf1,	// (0x00012963) bg_active_tab_pane_g1_cp1

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp1

0x3cdf,	// (0x00012951) bg_active_tab_pane_g3_cp1

0x3cf1,	// (0x00012963) bg_passive_tab_pane_g1_cp1

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp1

0x3cdf,	// (0x00012951) bg_passive_tab_pane_g3_cp1

0x3d03,	// (0x00012975) bg_active_tab_pane_g1_cp2

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp2

0x3cfa,	// (0x0001296c) bg_active_tab_pane_g3_cp2

0x3d03,	// (0x00012975) bg_passive_tab_pane_g1_cp2

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp2

0x3cfa,	// (0x0001296c) bg_passive_tab_pane_g3_cp2

0x3d15,	// (0x00012987) bg_active_tab_pane_g1_cp3

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp3

0x3d0c,	// (0x0001297e) bg_active_tab_pane_g3_cp3

0x3d15,	// (0x00012987) bg_passive_tab_pane_g1_cp3

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp3

0x3d0c,	// (0x0001297e) bg_passive_tab_pane_g3_cp3

0x3d29,	// (0x0001299b) bg_active_tab_pane_g1_cp4

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp4

0x3d1e,	// (0x00012990) bg_active_tab_pane_g3_cp4

0x3d29,	// (0x0001299b) bg_passive_tab_pane_g1_cp4

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp4

0x3d1e,	// (0x00012990) bg_passive_tab_pane_g3_cp4

0x3d7b,	// (0x000129ed) bg_active_tab_pane_g1_cp5

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp5

0x3d72,	// (0x000129e4) bg_active_tab_pane_g3_cp5

0x3d7b,	// (0x000129ed) bg_passive_tab_pane_g1_cp5

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp5

0x3d72,	// (0x000129e4) bg_passive_tab_pane_g3_cp5

0x3d84,	// (0x000129f6) list_set_graphic_pane_ParamLimits

0x3d84,	// (0x000129f6) list_set_graphic_pane

0x238a,	// (0x00010ffc) bg_set_opt_pane_cp4

0x3da1,	// (0x00012a13) list_set_graphic_pane_g1_ParamLimits

0x3da1,	// (0x00012a13) list_set_graphic_pane_g1

0x3dad,	// (0x00012a1f) list_set_graphic_pane_g2_ParamLimits

0x3dad,	// (0x00012a1f) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0001e405) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0001e405) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0001e762) volume_small_pane_cp_g

0x3dd1,	// (0x00012a43) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3dd1,	// (0x00012a43) list_double2_large_graphic_pane_g1_cp2

0x3ddd,	// (0x00012a4f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3ddd,	// (0x00012a4f) list_double2_large_graphic_pane_g2_cp2

0x3dee,	// (0x00012a60) list_double2_large_graphic_pane_g3_cp2

0x3df6,	// (0x00012a68) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3df6,	// (0x00012a68) list_double2_large_graphic_pane_t1_cp2

0x3e0c,	// (0x00012a7e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3e0c,	// (0x00012a7e) list_double2_large_graphic_pane_t2_cp2

0x6070,	// (0x00014ce2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6070,	// (0x00014ce2) list_double_large_graphic_pane_g1_cp2

0x6081,	// (0x00014cf3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6081,	// (0x00014cf3) list_double_large_graphic_pane_g2_cp2

0x3f7c,	// (0x00012bee) list_double_large_graphic_pane_g3_cp2

0x6092,	// (0x00014d04) list_double_large_graphic_pane_g4_cp

0x609a,	// (0x00014d0c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x609a,	// (0x00014d0c) list_double_large_graphic_pane_t1_cp2

0x60b1,	// (0x00014d23) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x60b1,	// (0x00014d23) list_double_large_graphic_pane_t2_cp2

0x3e6e,	// (0x00012ae0) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3e6e,	// (0x00012ae0) list_double2_graphic_pane_g1_cp2

0x3e7c,	// (0x00012aee) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3e7c,	// (0x00012aee) list_double2_graphic_pane_g2_cp2

0x3e8d,	// (0x00012aff) list_double2_graphic_pane_g3_cp2

0x3e97,	// (0x00012b09) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3e97,	// (0x00012b09) list_double2_graphic_pane_t1_cp2

0x3ead,	// (0x00012b1f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3ead,	// (0x00012b1f) list_double2_graphic_pane_t2_cp2

0x3ebf,	// (0x00012b31) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3ebf,	// (0x00012b31) list_single_number_heading_pane_g1_cp2

0x3ecb,	// (0x00012b3d) list_single_number_heading_pane_g2_cp2

0x3ed3,	// (0x00012b45) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3ed3,	// (0x00012b45) list_single_number_heading_pane_t1_cp2

0x3ee9,	// (0x00012b5b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3ee9,	// (0x00012b5b) list_single_number_heading_pane_t2_cp2

0x3efb,	// (0x00012b6d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3efb,	// (0x00012b6d) list_single_number_heading_pane_t3_cp2

0x3ebf,	// (0x00012b31) list_single_heading_pane_g1_cp2_ParamLimits

0x3ebf,	// (0x00012b31) list_single_heading_pane_g1_cp2

0x3ecb,	// (0x00012b3d) list_single_heading_pane_g2_cp2

0x3ed3,	// (0x00012b45) list_single_heading_pane_t1_cp2_ParamLimits

0x3ed3,	// (0x00012b45) list_single_heading_pane_t1_cp2

0x5e78,	// (0x00014aea) list_single_heading_pane_t2_cp2_ParamLimits

0x5e78,	// (0x00014aea) list_single_heading_pane_t2_cp2

0x5dba,	// (0x00014a2c) list_double_graphic_pane_g1_cp2_ParamLimits

0x5dba,	// (0x00014a2c) list_double_graphic_pane_g1_cp2

0x5dc6,	// (0x00014a38) list_double_graphic_pane_g2_cp2_ParamLimits

0x5dc6,	// (0x00014a38) list_double_graphic_pane_g2_cp2

0x5dd5,	// (0x00014a47) list_double_graphic_pane_g3_cp2

0x5ddd,	// (0x00014a4f) list_double_graphic_pane_t1_cp2_ParamLimits

0x5ddd,	// (0x00014a4f) list_double_graphic_pane_t1_cp2

0x5df3,	// (0x00014a65) list_double_graphic_pane_t2_cp2_ParamLimits

0x5df3,	// (0x00014a65) list_double_graphic_pane_t2_cp2

0x3f70,	// (0x00012be2) list_double_number_pane_g1_cp2_ParamLimits

0x3f70,	// (0x00012be2) list_double_number_pane_g1_cp2

0x3f7c,	// (0x00012bee) list_double_number_pane_g2_cp2

0x5d7e,	// (0x000149f0) list_double_number_pane_t1_cp2_ParamLimits

0x5d7e,	// (0x000149f0) list_double_number_pane_t1_cp2

0x5d92,	// (0x00014a04) list_double_number_pane_t2_cp2_ParamLimits

0x5d92,	// (0x00014a04) list_double_number_pane_t2_cp2

0x5da8,	// (0x00014a1a) list_double_number_pane_t3_cp2_ParamLimits

0x5da8,	// (0x00014a1a) list_double_number_pane_t3_cp2

0x5c67,	// (0x000148d9) list_single_graphic_pane_g1_cp2_ParamLimits

0x5c67,	// (0x000148d9) list_single_graphic_pane_g1_cp2

0x3fd4,	// (0x00012c46) list_single_graphic_pane_g2_cp2_ParamLimits

0x3fd4,	// (0x00012c46) list_single_graphic_pane_g2_cp2

0x3fe0,	// (0x00012c52) list_single_graphic_pane_g3_cp2

0x5c3d,	// (0x000148af) list_single_graphic_pane_t1_cp2_ParamLimits

0x5c3d,	// (0x000148af) list_single_graphic_pane_t1_cp2

0x3fd4,	// (0x00012c46) list_single_number_pane_g1_cp2_ParamLimits

0x3fd4,	// (0x00012c46) list_single_number_pane_g1_cp2

0x3fe0,	// (0x00012c52) list_single_number_pane_g2_cp2

0x5c3d,	// (0x000148af) list_single_number_pane_t1_cp2_ParamLimits

0x5c3d,	// (0x000148af) list_single_number_pane_t1_cp2

0x5c53,	// (0x000148c5) list_single_number_pane_t2_cp2_ParamLimits

0x5c53,	// (0x000148c5) list_single_number_pane_t2_cp2

0x3ddd,	// (0x00012a4f) list_double2_pane_g1_cp2_ParamLimits

0x3ddd,	// (0x00012a4f) list_double2_pane_g1_cp2

0x3dee,	// (0x00012a60) list_double2_pane_g2_cp2

0x3f48,	// (0x00012bba) list_double2_pane_t1_cp2_ParamLimits

0x3f48,	// (0x00012bba) list_double2_pane_t1_cp2

0x3f5e,	// (0x00012bd0) list_double2_pane_t2_cp2_ParamLimits

0x3f5e,	// (0x00012bd0) list_double2_pane_t2_cp2

0x3f70,	// (0x00012be2) list_double_pane_g1_cp2_ParamLimits

0x3f70,	// (0x00012be2) list_double_pane_g1_cp2

0x3f7c,	// (0x00012bee) list_double_pane_g2_cp2

0x3f84,	// (0x00012bf6) list_double_pane_t1_cp2_ParamLimits

0x3f84,	// (0x00012bf6) list_double_pane_t1_cp2

0x3f9a,	// (0x00012c0c) list_double_pane_t2_cp2_ParamLimits

0x3f9a,	// (0x00012c0c) list_double_pane_t2_cp2

0x3fc4,	// (0x00012c36) list_single_pane_cp2_g3

0x3fd4,	// (0x00012c46) list_single_pane_g1_cp2_ParamLimits

0x3fd4,	// (0x00012c46) list_single_pane_g1_cp2

0x3fe0,	// (0x00012c52) list_single_pane_g2_cp2

0x3fe8,	// (0x00012c5a) list_single_pane_t1_cp2_ParamLimits

0x3fe8,	// (0x00012c5a) list_single_pane_t1_cp2

0x4000,	// (0x00012c72) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4000,	// (0x00012c72) list_single_large_graphic_pane_g1_cp2

0x400c,	// (0x00012c7e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x400c,	// (0x00012c7e) list_single_large_graphic_pane_g2_cp2

0x4018,	// (0x00012c8a) list_single_large_graphic_pane_g3_cp2

0x4020,	// (0x00012c92) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4020,	// (0x00012c92) list_single_large_graphic_pane_g4_cp1

0x403a,	// (0x00012cac) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x403a,	// (0x00012cac) list_single_large_graphic_pane_t1_cp2

0x5c09,	// (0x0001487b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5c09,	// (0x0001487b) list_single_graphic_heading_pane_g1_cp2

0x5bd6,	// (0x00014848) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5bd6,	// (0x00014848) list_single_graphic_heading_pane_g4_cp2

0x3fe0,	// (0x00012c52) list_single_graphic_heading_pane_g5_cp2

0x5c15,	// (0x00014887) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5c15,	// (0x00014887) list_single_graphic_heading_pane_t1_cp2

0x5c2b,	// (0x0001489d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5c2b,	// (0x0001489d) list_single_graphic_heading_pane_t2_cp2

0x5bca,	// (0x0001483c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5bca,	// (0x0001483c) list_single_2graphic_pane_g1_cp2

0x5bd6,	// (0x00014848) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5bd6,	// (0x00014848) list_single_2graphic_pane_g2_cp2

0x3fe0,	// (0x00012c52) list_single_2graphic_pane_g3_cp2

0x5be7,	// (0x00014859) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5be7,	// (0x00014859) list_single_2graphic_pane_g4_cp2

0x5bf3,	// (0x00014865) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5bf3,	// (0x00014865) list_single_2graphic_pane_t1_cp2

0x2380,	// (0x00010ff2) list_highlight_pane_g10_cp1

0x57a2,	// (0x00014414) list_highlight_pane_g1_cp1

0x57aa,	// (0x0001441c) list_highlight_pane_g2_cp1

0x57b2,	// (0x00014424) list_highlight_pane_g3_cp1

0x57ba,	// (0x0001442c) list_highlight_pane_g4_cp1

0x57c2,	// (0x00014434) list_highlight_pane_g5_cp1

0x57ca,	// (0x0001443c) list_highlight_pane_g6_cp1

0x57d2,	// (0x00014444) list_highlight_pane_g7_cp1

0x57da,	// (0x0001444c) list_highlight_pane_g8_cp1

0x57e2,	// (0x00014454) list_highlight_pane_g9_cp1

0x56c2,	// (0x00014334) form_field_slider_pane_t3

0x56d0,	// (0x00014342) form_field_slider_pane_t4

0x56de,	// (0x00014350) slider_form_pane_ParamLimits

0x56de,	// (0x00014350) slider_form_pane

0x238a,	// (0x00010ffc) control_abbreviations

0x238a,	// (0x00010ffc) control_conventions

0x238a,	// (0x00010ffc) control_definitions

0x238a,	// (0x00010ffc) format_table_attribute

0x5ec2,	// (0x00014b34) bg_popup_preview_window_pane_g9

0x238a,	// (0x00010ffc) format_table_data2

0x238a,	// (0x00010ffc) format_table_data3

0x238a,	// (0x00010ffc) format_table_data_example

0x0008,

0x238a,	// (0x00010ffc) intro_purpose

0xf928,	// (0x0001e59a) bg_popup_preview_window_pane_g

0x238a,	// (0x00010ffc) texts_category

0x238a,	// (0x00010ffc) texts_graphics

0x4050,	// (0x00012cc2) text_digital

0x405f,	// (0x00012cd1) text_primary

0x406e,	// (0x00012ce0) text_primary_small

0x407d,	// (0x00012cef) text_secondary

0x408c,	// (0x00012cfe) text_title

0x66f2,	// (0x00015364) bg_passive_tab_pane_g1_cp3_srt

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp3_srt

0x66e9,	// (0x0001535b) bg_passive_tab_pane_g3_cp3_srt

0x246a,	// (0x000110dc) bg_active_tab_pane_cp3_srt_ParamLimits

0x246a,	// (0x000110dc) bg_active_tab_pane_cp3_srt

0x66fb,	// (0x0001536d) tabs_4_active_pane_srt_g1

0x6703,	// (0x00015375) tabs_4_active_pane_srt_t1_ParamLimits

0x6703,	// (0x00015375) tabs_4_active_pane_srt_t1

0x66f2,	// (0x00015364) bg_active_tab_pane_g1_cp3_copy1

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp3_copy1

0x66e9,	// (0x0001535b) bg_active_tab_pane_g3_cp3_copy1

0x246a,	// (0x000110dc) tabs_2_long_active_pane_srt_ParamLimits

0x246a,	// (0x000110dc) tabs_2_long_active_pane_srt

0x246a,	// (0x000110dc) tabs_2_long_passive_pane_srt_ParamLimits

0x246a,	// (0x000110dc) tabs_2_long_passive_pane_srt

0x35bc,	// (0x0001222e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x35bc,	// (0x0001222e) bg_passive_tab_pane_cp4_srt

0x6337,	// (0x00014fa9) bg_passive_tab_pane_g1_cp4_srt

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp4_srt

0x632e,	// (0x00014fa0) bg_passive_tab_pane_g3_cp4_srt

0x359b,	// (0x0001220d) bg_active_tab_pane_cp4_srt_ParamLimits

0x359b,	// (0x0001220d) bg_active_tab_pane_cp4_srt

0x6340,	// (0x00014fb2) tabs_2_long_active_pane_srt_t1_ParamLimits

0x6340,	// (0x00014fb2) tabs_2_long_active_pane_srt_t1

0x6337,	// (0x00014fa9) bg_active_tab_pane_g1_cp4_srt

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp4_srt

0x632e,	// (0x00014fa0) bg_active_tab_pane_g3_cp4_srt

0x26ff,	// (0x00011371) tabs_3_long_active_pane_srt_ParamLimits

0x26ff,	// (0x00011371) tabs_3_long_active_pane_srt

0x26ff,	// (0x00011371) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x26ff,	// (0x00011371) tabs_3_long_passive_pane_cp_srt

0x26ff,	// (0x00011371) tabs_3_long_passive_pane_srt_ParamLimits

0x26ff,	// (0x00011371) tabs_3_long_passive_pane_srt

0x35bc,	// (0x0001222e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x35bc,	// (0x0001222e) bg_passive_tab_pane_cp5_srt

0x3d7b,	// (0x000129ed) bg_passive_tab_pane_g1_cp5_srt

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp5_srt

0x3d72,	// (0x000129e4) bg_passive_tab_pane_g3_cp5_srt

0x359b,	// (0x0001220d) bg_active_tab_pane_cp5_srt_ParamLimits

0x359b,	// (0x0001220d) bg_active_tab_pane_cp5_srt

0x631c,	// (0x00014f8e) tabs_3_long_active_pane_srt_t1_ParamLimits

0x631c,	// (0x00014f8e) tabs_3_long_active_pane_srt_t1

0x3d7b,	// (0x000129ed) bg_active_tab_pane_g1_cp5_srt

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp5_srt

0x3d72,	// (0x000129e4) bg_active_tab_pane_g3_cp5_srt

0x630e,	// (0x00014f80) navi_text_pane_srt_t1

0x6306,	// (0x00014f78) navi_icon_pane_srt_g1

0x425f,	// (0x00012ed1) midp_editing_number_pane_srt

0x409b,	// (0x00012d0d) midp_ticker_pane_srt

0x4267,	// (0x00012ed9) midp_ticker_pane_srt_g1

0x426f,	// (0x00012ee1) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0001e424) midp_ticker_pane_srt_g

0x4277,	// (0x00012ee9) midp_ticker_pane_srt_t1

0x62f7,	// (0x00014f69) midp_editing_number_pane_t1_copy1

0x40a3,	// (0x00012d15) listscroll_midp_pane

0x40a3,	// (0x00012d15) midp_form_pane

0x4111,	// (0x00012d83) midp_info_popup_window_ParamLimits

0x4111,	// (0x00012d83) midp_info_popup_window

0x3486,	// (0x000120f8) bg_popup_sub_pane_cp50_ParamLimits

0x3486,	// (0x000120f8) bg_popup_sub_pane_cp50

0x540b,	// (0x0001407d) listscroll_midp_info_pane_ParamLimits

0x540b,	// (0x0001407d) listscroll_midp_info_pane

0x53f3,	// (0x00014065) listscroll_form_midp_pane_ParamLimits

0x53f3,	// (0x00014065) listscroll_form_midp_pane

0x53ff,	// (0x00014071) scroll_bar_cp050

0x53d3,	// (0x00014045) list_midp_pane

0x72d8,	// (0x00015f4a) signal_pane_g2_cp

0x530d,	// (0x00013f7f) listscroll_midp_info_pane_t1_ParamLimits

0x530d,	// (0x00013f7f) listscroll_midp_info_pane_t1

0x5325,	// (0x00013f97) listscroll_midp_info_pane_t2_ParamLimits

0x5325,	// (0x00013f97) listscroll_midp_info_pane_t2

0x5363,	// (0x00013fd5) listscroll_midp_info_pane_t3_ParamLimits

0x5363,	// (0x00013fd5) listscroll_midp_info_pane_t3

0x539d,	// (0x0001400f) listscroll_midp_info_pane_t4_ParamLimits

0x539d,	// (0x0001400f) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0001e4d5) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0001e4d5) listscroll_midp_info_pane_t

0x3548,	// (0x000121ba) scroll_pane_cp21

0x52ab,	// (0x00013f1d) form_midp_field_choice_group_pane

0x52b4,	// (0x00013f26) form_midp_field_text_pane

0x52f3,	// (0x00013f65) form_midp_field_time_pane

0x52fb,	// (0x00013f6d) form_midp_gauge_slider_pane

0x5304,	// (0x00013f76) form_midp_gauge_wait_pane

0x238a,	// (0x00010ffc) form_midp_image_pane

0xcc6d,	// (0x0001b8df) list_single_midp_pane_ParamLimits

0xcc6d,	// (0x0001b8df) list_single_midp_pane

0x5234,	// (0x00013ea6) form_midp_field_text_pane_t1

0x5017,	// (0x00013c89) input_focus_pane_cp050

0x526b,	// (0x00013edd) list_midp_form_text_pane

0x5203,	// (0x00013e75) form_midp_field_choice_group_pane_t1

0x5211,	// (0x00013e83) input_focus_pane_cp051

0x5225,	// (0x00013e97) list_midp_choice_pane

0x238a,	// (0x00010ffc) status_idle_pane

0x51e7,	// (0x00013e59) form_midp_field_time_pane_t1

0x2380,	// (0x00010ff2) wait_anim_pane_g2_copy1

0x51f5,	// (0x00013e67) form_midp_field_time_pane_t2

0x0001,

0x41bf,	// (0x00012e31) aid_navinavi_width_2_pane

0xf85e,	// (0x0001e4d0) form_midp_field_time_pane_t

0x238a,	// (0x00010ffc) input_focus_pane_cp052

0x238a,	// (0x00010ffc) bg_input_focus_pane_cp040

0x51a7,	// (0x00013e19) form_midp_gauge_slider_pane_t1

0x51b5,	// (0x00013e27) form_midp_gauge_slider_pane_t2

0x51c3,	// (0x00013e35) form_midp_gauge_slider_pane_t3

0x51d1,	// (0x00013e43) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0001e4c7) form_midp_gauge_slider_pane_t

0x51df,	// (0x00013e51) form_midp_slider_pane

0x246a,	// (0x000110dc) bg_input_focus_pane_cp041_ParamLimits

0x246a,	// (0x000110dc) bg_input_focus_pane_cp041

0x5174,	// (0x00013de6) form_midp_gauge_wait_pane_t1_ParamLimits

0x5174,	// (0x00013de6) form_midp_gauge_wait_pane_t1

0x5186,	// (0x00013df8) form_midp_gauge_wait_pane_t2_ParamLimits

0x5186,	// (0x00013df8) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0001e4c2) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0001e4c2) form_midp_gauge_wait_pane_t

0x5198,	// (0x00013e0a) form_midp_wait_pane_ParamLimits

0x5198,	// (0x00013e0a) form_midp_wait_pane

0x513e,	// (0x00013db0) form_midp_image_pane_g1

0x5147,	// (0x00013db9) form_midp_image_pane_t1

0x5156,	// (0x00013dc8) form_midp_image_pane_t2

0x5165,	// (0x00013dd7) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0001e4bb) form_midp_image_pane_t

0x5126,	// (0x00013d98) list_single_midp_pane_g1

0xcc5e,	// (0x0001b8d0) list_single_midp_pane_t1

0x50fe,	// (0x00013d70) list_midp_form_item_pane_ParamLimits

0x50fe,	// (0x00013d70) list_midp_form_item_pane

0x4167,	// (0x00012dd9) list_midp_form_item_pane_t1

0x4176,	// (0x00012de8) midp_ticker_pane_g1

0x4182,	// (0x00012df4) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0001e40a) midp_ticker_pane_g

0x418e,	// (0x00012e00) midp_ticker_pane_t1

0x657b,	// (0x000151ed) midp_editing_number_pane_t1

0x6559,	// (0x000151cb) midp_editing_number_pane

0x6568,	// (0x000151da) midp_ticker_pane

0x62bf,	// (0x00014f31) ai_message_heading_pane

0x238a,	// (0x00010ffc) bg_popup_window_pane_cp14

0x62c7,	// (0x00014f39) listscroll_ai_message_pane

0x6249,	// (0x00014ebb) ai_message_heading_pane_g1_ParamLimits

0x6249,	// (0x00014ebb) ai_message_heading_pane_g1

0x6255,	// (0x00014ec7) ai_message_heading_pane_g2_ParamLimits

0x6255,	// (0x00014ec7) ai_message_heading_pane_g2

0x6261,	// (0x00014ed3) ai_message_heading_pane_g3_ParamLimits

0x6261,	// (0x00014ed3) ai_message_heading_pane_g3

0x626d,	// (0x00014edf) ai_message_heading_pane_g4_ParamLimits

0x626d,	// (0x00014edf) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0001e5fc) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0001e5fc) ai_message_heading_pane_g

0x6279,	// (0x00014eeb) ai_message_heading_pane_t1_ParamLimits

0x6279,	// (0x00014eeb) ai_message_heading_pane_t1

0x6293,	// (0x00014f05) ai_message_heading_pane_t2_ParamLimits

0x6293,	// (0x00014f05) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0001e605) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0001e605) ai_message_heading_pane_t

0x62a5,	// (0x00014f17) bg_popup_heading_pane_cp1_ParamLimits

0x62a5,	// (0x00014f17) bg_popup_heading_pane_cp1

0x6237,	// (0x00014ea9) list_ai_message_pane_ParamLimits

0x6237,	// (0x00014ea9) list_ai_message_pane

0x3548,	// (0x000121ba) scroll_pane_cp10

0x61d3,	// (0x00014e45) list_ai_message_pane_g1

0x61db,	// (0x00014e4d) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0001e5d9) list_ai_message_pane_g

0x61e3,	// (0x00014e55) list_ai_message_pane_t1_ParamLimits

0x61e3,	// (0x00014e55) list_ai_message_pane_t1

0x61f8,	// (0x00014e6a) list_ai_message_pane_t2_ParamLimits

0x61f8,	// (0x00014e6a) list_ai_message_pane_t2

0x620d,	// (0x00014e7f) list_ai_message_pane_t3_ParamLimits

0x620d,	// (0x00014e7f) list_ai_message_pane_t3

0x6222,	// (0x00014e94) list_ai_message_pane_t4_ParamLimits

0x6222,	// (0x00014e94) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0001e5de) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0001e5de) list_ai_message_pane_t

0x61be,	// (0x00014e30) cell_ai_soft_ind_pane_ParamLimits

0x61be,	// (0x00014e30) cell_ai_soft_ind_pane

0x41a0,	// (0x00012e12) cell_ai_soft_ind_pane_g1_ParamLimits

0x41a0,	// (0x00012e12) cell_ai_soft_ind_pane_g1

0x238a,	// (0x00010ffc) grid_highlight_cp1

0x41ad,	// (0x00012e1f) text_secondary_cp56_ParamLimits

0x41ad,	// (0x00012e1f) text_secondary_cp56

0x6193,	// (0x00014e05) example_general_pane_ParamLimits

0x6193,	// (0x00014e05) example_general_pane

0x619f,	// (0x00014e11) example_parent_pane_g1_ParamLimits

0x619f,	// (0x00014e11) example_parent_pane_g1

0x61ab,	// (0x00014e1d) example_parent_pane_t1_ParamLimits

0x61ab,	// (0x00014e1d) example_parent_pane_t1

0x47b6,	// (0x00013428) popup_preview_text_window_ParamLimits

0x47b6,	// (0x00013428) popup_preview_text_window

0x3fcc,	// (0x00012c3e) list_single_pane_cp2_g4

0x27b5,	// (0x00011427) bg_popup_preview_window_pane_ParamLimits

0x27b5,	// (0x00011427) bg_popup_preview_window_pane

0x5eca,	// (0x00014b3c) popup_preview_text_window_t1_ParamLimits

0x5eca,	// (0x00014b3c) popup_preview_text_window_t1

0x5ee8,	// (0x00014b5a) popup_preview_text_window_t2_ParamLimits

0x5ee8,	// (0x00014b5a) popup_preview_text_window_t2

0x5f31,	// (0x00014ba3) popup_preview_text_window_t3_ParamLimits

0x5f31,	// (0x00014ba3) popup_preview_text_window_t3

0x5f76,	// (0x00014be8) popup_preview_text_window_t4_ParamLimits

0x5f76,	// (0x00014be8) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0001e5ad) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0001e5ad) popup_preview_text_window_t

0x5ff4,	// (0x00014c66) scroll_pane_cp11

0x4efd,	// (0x00013b6f) bg_popup_preview_window_pane_g1

0x5e8a,	// (0x00014afc) bg_popup_preview_window_pane_g2

0x5e92,	// (0x00014b04) bg_popup_preview_window_pane_g3

0x5e9a,	// (0x00014b0c) bg_popup_preview_window_pane_g4

0x5ea2,	// (0x00014b14) bg_popup_preview_window_pane_g5

0x5eaa,	// (0x00014b1c) bg_popup_preview_window_pane_g6

0x5eb2,	// (0x00014b24) bg_popup_preview_window_pane_g7

0x5eba,	// (0x00014b2c) bg_popup_preview_window_pane_g8

0xd3bf,	// (0x0001c031) aid_popup_width_pane

0x4794,	// (0x00013406) popup_midp_note_alarm_window_ParamLimits

0x4794,	// (0x00013406) popup_midp_note_alarm_window

0x3223,	// (0x00011e95) data_form_pane_ParamLimits

0xc93e,	// (0x0001b5b0) form_field_data_pane_g1

0xc948,	// (0x0001b5ba) form_field_data_pane_t1_ParamLimits

0x3251,	// (0x00011ec3) input_focus_pane_ParamLimits

0x325f,	// (0x00011ed1) data_form_wide_pane_ParamLimits

0xc960,	// (0x0001b5d2) form_field_data_wide_pane_g1

0xc96c,	// (0x0001b5de) form_field_data_wide_pane_t1_ParamLimits

0x2a61,	// (0x000116d3) input_focus_pane_cp6_ParamLimits

0x34f5,	// (0x00012167) input_popup_find_pane_g1_ParamLimits

0x34f5,	// (0x00012167) input_popup_find_pane_g1

0xd929,	// (0x0001c59b) aid_navi_side_left_pane

0xd93e,	// (0x0001c5b0) aid_navi_side_right_pane

0x589d,	// (0x0001450f) bg_popup_window_pane_cp30_ParamLimits

0x589d,	// (0x0001450f) bg_popup_window_pane_cp30

0x5917,	// (0x00014589) popup_midp_note_alarm_window_g1_ParamLimits

0x5917,	// (0x00014589) popup_midp_note_alarm_window_g1

0x5947,	// (0x000145b9) popup_midp_note_alarm_window_t1_ParamLimits

0x5947,	// (0x000145b9) popup_midp_note_alarm_window_t1

0x59e8,	// (0x0001465a) popup_midp_note_alarm_window_t2_ParamLimits

0x59e8,	// (0x0001465a) popup_midp_note_alarm_window_t2

0x5a96,	// (0x00014708) popup_midp_note_alarm_window_t3_ParamLimits

0x5a96,	// (0x00014708) popup_midp_note_alarm_window_t3

0x5ac8,	// (0x0001473a) popup_midp_note_alarm_window_t4_ParamLimits

0x5ac8,	// (0x0001473a) popup_midp_note_alarm_window_t4

0x5aee,	// (0x00014760) popup_midp_note_alarm_window_t5_ParamLimits

0x5aee,	// (0x00014760) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0001e54a) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0001e54a) popup_midp_note_alarm_window_t

0x5b9a,	// (0x0001480c) wait_bar_pane_cp1_ParamLimits

0x5b9a,	// (0x0001480c) wait_bar_pane_cp1

0x238a,	// (0x00010ffc) wait_anim_pane_copy1

0x238a,	// (0x00010ffc) wait_border_pane_copy1

0x5583,	// (0x000141f5) wait_border_pane_g1_copy1

0xc986,	// (0x0001b5f8) form_field_popup_pane_g1

0xc98e,	// (0x0001b600) form_field_popup_pane_t1_ParamLimits

0x3251,	// (0x00011ec3) input_focus_pane_cp7_ParamLimits

0x32d1,	// (0x00011f43) list_form_pane_ParamLimits

0xc9a6,	// (0x0001b618) form_field_popup_wide_pane_g1

0xc9ae,	// (0x0001b620) form_field_popup_wide_pane_t1_ParamLimits

0x3251,	// (0x00011ec3) input_focus_pane_cp8_ParamLimits

0x32fa,	// (0x00011f6c) list_form_wide_pane_ParamLimits

0x6775,	// (0x000153e7) aid_size_cell_graphic_pane

0xca38,	// (0x0001b6aa) data_form_pane_t1_ParamLimits

0xccc7,	// (0x0001b939) data_form_wide_pane_t1_ParamLimits

0x4a97,	// (0x00013709) bg_status_flat_pane

0x23ca,	// (0x0001103c) title_pane_t1_ParamLimits

0x2432,	// (0x000110a4) title_pane_t2_ParamLimits

0x2458,	// (0x000110ca) title_pane_t3_ParamLimits

0xf59b,	// (0x0001e20d) title_pane_t_ParamLimits

0x39c4,	// (0x00012636) level_1_signal_ParamLimits

0x39d1,	// (0x00012643) level_2_signal_ParamLimits

0x39de,	// (0x00012650) level_3_signal_ParamLimits

0x39eb,	// (0x0001265d) level_4_signal_ParamLimits

0x39f8,	// (0x0001266a) level_5_signal_ParamLimits

0x3a05,	// (0x00012677) level_6_signal_ParamLimits

0x3a12,	// (0x00012684) level_7_signal_ParamLimits

0x39c4,	// (0x00012636) level_1_battery_ParamLimits

0x39d1,	// (0x00012643) level_2_battery_ParamLimits

0x39de,	// (0x00012650) level_3_battery_ParamLimits

0x39eb,	// (0x0001265d) level_4_battery_ParamLimits

0x39f8,	// (0x0001266a) level_5_battery_ParamLimits

0x3a05,	// (0x00012677) level_6_battery_ParamLimits

0x3a12,	// (0x00012684) level_7_battery_ParamLimits

0x57a2,	// (0x00014414) bg_status_flat_pane_g1

0x57aa,	// (0x0001441c) bg_status_flat_pane_g2

0x57b2,	// (0x00014424) bg_status_flat_pane_g3

0x57ba,	// (0x0001442c) bg_status_flat_pane_g4

0x57c2,	// (0x00014434) bg_status_flat_pane_g5

0x57ca,	// (0x0001443c) bg_status_flat_pane_g6

0x57d2,	// (0x00014444) bg_status_flat_pane_g7

0x2480,	// (0x000110f2) tabs_3_active_pane_t1_ParamLimits

0x2480,	// (0x000110f2) tabs_3_passive_pane_t1_ParamLimits

0x249a,	// (0x0001110c) tabs_4_active_pane_t1_ParamLimits

0x249a,	// (0x0001110c) tabs_4_1_passive_pane_t1_ParamLimits

0x3589,	// (0x000121fb) tabs_2_active_pane_t1_ParamLimits

0x3589,	// (0x000121fb) tabs_2_passive_pane_t1_ParamLimits

0x359b,	// (0x0001220d) bg_active_tab_pane_cp4_ParamLimits

0x35a9,	// (0x0001221b) tabs_2_long_active_pane_t1_ParamLimits

0x35bc,	// (0x0001222e) bg_passive_tab_pane_cp4_ParamLimits

0xde77,	// (0x0001cae9) list_single_midp_graphic_pane_t1_ParamLimits

0x359b,	// (0x0001220d) bg_active_tab_pane_cp5_ParamLimits

0x35c8,	// (0x0001223a) tabs_3_long_active_pane_t1_ParamLimits

0x35bc,	// (0x0001222e) bg_passive_tab_pane_cp5_ParamLimits

0xde77,	// (0x0001cae9) list_single_midp_graphic_pane_t1

0x4a97,	// (0x00013709) bg_status_flat_pane_ParamLimits

0x4b5a,	// (0x000137cc) indicator_pane_cp2_ParamLimits

0x4b5a,	// (0x000137cc) indicator_pane_cp2

0x4c7e,	// (0x000138f0) navi_pane_srt_ParamLimits

0x4c7e,	// (0x000138f0) navi_pane_srt

0x4ca2,	// (0x00013914) popup_clock_digital_analogue_window_cp1

0x2561,	// (0x000111d3) indicator_pane_t1

0x409b,	// (0x00012d0d) copy_highlight_pane

0x409b,	// (0x00012d0d) cursor_graphics_pane

0x409b,	// (0x00012d0d) graphic_within_text_pane

0x409b,	// (0x00012d0d) link_highlight_pane

0x5fb7,	// (0x00014c29) popup_preview_text_window_t5_ParamLimits

0x5fb7,	// (0x00014c29) popup_preview_text_window_t5

0x41c7,	// (0x00012e39) cursor_digital_pane

0x41c7,	// (0x00012e39) cursor_primary_pane

0x41d8,	// (0x00012e4a) cursor_primary_small_pane

0x41e0,	// (0x00012e52) cursor_secondary_pane

0x41e8,	// (0x00012e5a) cursor_title_pane

0x41c7,	// (0x00012e39) link_highlight_digital_pane

0x41cf,	// (0x00012e41) link_highlight_primary_pane

0x41d8,	// (0x00012e4a) link_highlight_primary_small_pane

0x41e0,	// (0x00012e52) link_highlight_secondary_pane

0x41e8,	// (0x00012e5a) link_highlight_title_pane

0x41c7,	// (0x00012e39) copy_highlight_digital_pane

0x41c7,	// (0x00012e39) copy_highlight_primary_pane

0x41d8,	// (0x00012e4a) copy_highlight_primary_small_pane

0x41e0,	// (0x00012e52) copy_highlight_secondary_pane

0x41e8,	// (0x00012e5a) copy_highlight_title_pane

0x41e0,	// (0x00012e52) graphic_text_digital_pane

0x5840,	// (0x000144b2) graphic_text_primary_pane

0x5849,	// (0x000144bb) graphic_text_primary_small_pane

0x41d8,	// (0x00012e4a) graphic_text_secondary_pane

0x41c7,	// (0x00012e39) graphic_text_title_pane

0x41f0,	// (0x00012e62) cursor_primary_pane_g1

0x5832,	// (0x000144a4) cursor_text_primary_t1

0x581a,	// (0x0001448c) cursor_primary_small_pane_g1

0x5824,	// (0x00014496) cursor_text_primary_small_t1

0x5802,	// (0x00014474) cursor_primary_small_pane_g1_copy1

0x580c,	// (0x0001447e) cursor_text_primary_small_t1_copy1

0x57ea,	// (0x0001445c) cursor_text_title_t1

0x57f8,	// (0x0001446a) cursor_title_pane_g1

0x41f0,	// (0x00012e62) cursor_digital_pane_g1

0x41fa,	// (0x00012e6c) cursor_text_digital_t1

0x421f,	// (0x00012e91) link_highlight_primary_pane_g1

0x5793,	// (0x00014405) link_highlight_primary_pane_t1

0x4208,	// (0x00012e7a) link_highlight_primary_small_pane_g1

0x4210,	// (0x00012e82) link_highlight_primary_small_pane_t1

0x421f,	// (0x00012e91) link_highlight_secondary_pane_g1

0x4227,	// (0x00012e99) link_highlight_secondary_pane_t1

0x5707,	// (0x00014379) link_highlight_title_pane_g1

0x570f,	// (0x00014381) link_highlight_title_pane_t1

0x56f0,	// (0x00014362) link_highlight_digital_pane_g1

0x56f8,	// (0x0001436a) link_highlight_digital_pane_t1

0x55c8,	// (0x0001423a) copy_highlight_primary_pane_g1

0x55d0,	// (0x00014242) copy_highlight_primary_pane_t1

0x55a2,	// (0x00014214) copy_highlight_primary_small_pane_g1

0x55b9,	// (0x0001422b) copy_highlight_primary_small_pane_t1

0x4236,	// (0x00012ea8) copy_highlight_secondary_pane_g1

0x423e,	// (0x00012eb0) copy_highlight_secondary_pane_t1

0x55a2,	// (0x00014214) copy_highlight_title_pane_g1

0x55aa,	// (0x0001421c) copy_highlight_title_pane_t1

0x55c8,	// (0x0001423a) copy_highlight_digital_pane_g1

0x693f,	// (0x000155b1) copy_highlight_digital_pane_t1

0x6893,	// (0x00015505) graphic_text_primary_pane_g1

0x6923,	// (0x00015595) graphic_text_primary_pane_t1

0x6931,	// (0x000155a3) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0001e679) graphic_text_primary_pane_t

0x68ff,	// (0x00015571) graphic_text_primary_small_pane_g1

0x6907,	// (0x00015579) graphic_text_primary_small_pane_t1

0x6915,	// (0x00015587) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0001e674) graphic_text_primary_small_pane_t

0x68db,	// (0x0001554d) graphic_text_secondary_pane_g1

0x68e3,	// (0x00015555) graphic_text_secondary_pane_t1

0x68f1,	// (0x00015563) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0001e66f) graphic_text_secondary_pane_t

0x68b7,	// (0x00015529) graphic_text_title_pane_g1

0x68bf,	// (0x00015531) graphic_text_title_pane_t1

0x68cd,	// (0x0001553f) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0001e66a) graphic_text_title_pane_t

0x6893,	// (0x00015505) graphic_text_digital_pane_g1

0x689b,	// (0x0001550d) graphic_text_digital_pane_t1

0x68a9,	// (0x0001551b) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0001e665) graphic_text_digital_pane_t

0x246a,	// (0x000110dc) navi_icon_pane_srt_ParamLimits

0x246a,	// (0x000110dc) navi_icon_pane_srt

0x238a,	// (0x00010ffc) navi_midp_pane_srt

0x238a,	// (0x00010ffc) navi_navi_pane_srt

0x246a,	// (0x000110dc) navi_text_pane_srt_ParamLimits

0x246a,	// (0x000110dc) navi_text_pane_srt

0x685e,	// (0x000154d0) navi_navi_icon_text_pane_srt

0x6878,	// (0x000154ea) navi_navi_pane_srt_g1_ParamLimits

0x6878,	// (0x000154ea) navi_navi_pane_srt_g1

0x6866,	// (0x000154d8) navi_navi_pane_srt_g2_ParamLimits

0x6866,	// (0x000154d8) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0001e660) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0001e660) navi_navi_pane_srt_g

0x688a,	// (0x000154fc) navi_navi_tabs_pane_srt

0x685e,	// (0x000154d0) navi_navi_text_pane_srt

0x685e,	// (0x000154d0) navi_navi_volume_pane_srt

0x684f,	// (0x000154c1) navi_navi_text_pane_srt_t1

0xe1f1,	// (0x0001ce63) navi_navi_volume_pane_srt_g1

0xe1f9,	// (0x0001ce6b) volume_small_pane_srt_ParamLimits

0xe1f9,	// (0x0001ce6b) volume_small_pane_srt

0xdc09,	// (0x0001c87b) volume_small_pane_srt_g1_ParamLimits

0xdc09,	// (0x0001c87b) volume_small_pane_srt_g1

0xdc19,	// (0x0001c88b) volume_small_pane_srt_g2_ParamLimits

0xdc19,	// (0x0001c88b) volume_small_pane_srt_g2

0xdc2a,	// (0x0001c89c) volume_small_pane_srt_g3_ParamLimits

0xdc2a,	// (0x0001c89c) volume_small_pane_srt_g3

0xdc3b,	// (0x0001c8ad) volume_small_pane_srt_g4_ParamLimits

0xdc3b,	// (0x0001c8ad) volume_small_pane_srt_g4

0xdc4c,	// (0x0001c8be) volume_small_pane_srt_g5_ParamLimits

0xdc4c,	// (0x0001c8be) volume_small_pane_srt_g5

0xdc5d,	// (0x0001c8cf) volume_small_pane_srt_g6_ParamLimits

0xdc5d,	// (0x0001c8cf) volume_small_pane_srt_g6

0xdc6e,	// (0x0001c8e0) volume_small_pane_srt_g7_ParamLimits

0xdc6e,	// (0x0001c8e0) volume_small_pane_srt_g7

0xdc7f,	// (0x0001c8f1) volume_small_pane_srt_g8_ParamLimits

0xdc7f,	// (0x0001c8f1) volume_small_pane_srt_g8

0xdc90,	// (0x0001c902) volume_small_pane_srt_g9_ParamLimits

0xdc90,	// (0x0001c902) volume_small_pane_srt_g9

0xdca1,	// (0x0001c913) volume_small_pane_srt_g10_ParamLimits

0xdca1,	// (0x0001c913) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0001e40f) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0001e40f) volume_small_pane_srt_g

0x285e,	// (0x000114d0) query_popup_data_pane_cp2

0x6835,	// (0x000154a7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6835,	// (0x000154a7) navi_navi_icon_text_pane_srt_t1

0x5840,	// (0x000144b2) navi_tabs_2_long_pane_srt

0x5840,	// (0x000144b2) navi_tabs_2_pane_srt

0x5840,	// (0x000144b2) navi_tabs_3_long_pane_srt

0x5840,	// (0x000144b2) navi_tabs_3_pane_srt

0x5840,	// (0x000144b2) navi_tabs_4_pane_srt

0xe1d1,	// (0x0001ce43) tabs_2_active_pane_srt_ParamLimits

0xe1d1,	// (0x0001ce43) tabs_2_active_pane_srt

0xe1e1,	// (0x0001ce53) tabs_2_passive_pane_srt_ParamLimits

0xe1e1,	// (0x0001ce53) tabs_2_passive_pane_srt

0x4425,	// (0x00013097) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4425,	// (0x00013097) bg_passive_tab_pane_cp1_srt

0x680a,	// (0x0001547c) bg_passive_tab_pane_g1_cp1_srt

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp1_srt

0x6801,	// (0x00015473) bg_passive_tab_pane_g3_cp1_srt

0x246a,	// (0x000110dc) bg_active_tab_pane_cp1_srt_ParamLimits

0x246a,	// (0x000110dc) bg_active_tab_pane_cp1_srt

0x6813,	// (0x00015485) tabs_2_active_pane_srt_g1

0x681b,	// (0x0001548d) tabs_2_active_pane_srt_t1_ParamLimits

0x681b,	// (0x0001548d) tabs_2_active_pane_srt_t1

0x680a,	// (0x0001547c) bg_active_tab_pane_g1_cp1_srt

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp1_srt

0x6801,	// (0x00015473) bg_active_tab_pane_g3_cp1_srt

0xe19e,	// (0x0001ce10) tabs_3_active_pane_srt_ParamLimits

0xe19e,	// (0x0001ce10) tabs_3_active_pane_srt

0xe1af,	// (0x0001ce21) tabs_3_passive_pane_cp_srt_ParamLimits

0xe1af,	// (0x0001ce21) tabs_3_passive_pane_cp_srt

0xe1c0,	// (0x0001ce32) tabs_3_passive_pane_srt_ParamLimits

0xe1c0,	// (0x0001ce32) tabs_3_passive_pane_srt

0x4425,	// (0x00013097) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4425,	// (0x00013097) bg_passive_tab_pane_cp2_srt

0x4256,	// (0x00012ec8) bg_passive_tab_pane_g1_cp2_srt

0x3ce8,	// (0x0001295a) bg_passive_tab_pane_g2_cp2_srt

0x424d,	// (0x00012ebf) bg_passive_tab_pane_g3_cp2_srt

0x246a,	// (0x000110dc) bg_active_tab_pane_cp2_srt_ParamLimits

0x246a,	// (0x000110dc) bg_active_tab_pane_cp2_srt

0x67e7,	// (0x00015459) tabs_3_active_pane_srt_g1

0x67ef,	// (0x00015461) tabs_3_active_pane_srt_t1_ParamLimits

0x67ef,	// (0x00015461) tabs_3_active_pane_srt_t1

0x4256,	// (0x00012ec8) bg_active_tab_pane_g1_cp2_srt

0x3ce8,	// (0x0001295a) bg_active_tab_pane_g2_cp2_srt

0x424d,	// (0x00012ebf) bg_active_tab_pane_g3_cp2_srt

0xe156,	// (0x0001cdc8) tabs_4_active_pane_srt_ParamLimits

0xe156,	// (0x0001cdc8) tabs_4_active_pane_srt

0xe168,	// (0x0001cdda) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe168,	// (0x0001cdda) tabs_4_passive_pane_cp2_srt

0x43ab,	// (0x0001301d) aid_size_cell_toolbar

0x35bc,	// (0x0001222e) main_idle_act_pane_ParamLimits

0x45ca,	// (0x0001323c) popup_large_graphic_colour_window_ParamLimits

0x4931,	// (0x000135a3) popup_toolbar_window_ParamLimits

0x4931,	// (0x000135a3) popup_toolbar_window

0x65a5,	// (0x00015217) list_single_graphic_2heading_pane_ParamLimits

0x65a5,	// (0x00015217) list_single_graphic_2heading_pane

0x3778,	// (0x000123ea) aid_size_cell_apps_grid_lsc_pane

0x378a,	// (0x000123fc) aid_size_cell_apps_grid_prt_pane

0x4425,	// (0x00013097) bg_wml_button_pane_cp1_ParamLimits

0x4425,	// (0x00013097) bg_wml_button_pane_cp1

0x5234,	// (0x00013ea6) form_midp_field_text_pane_t1_ParamLimits

0x5017,	// (0x00013c89) input_focus_pane_cp050_ParamLimits

0x526b,	// (0x00013edd) list_midp_form_text_pane_ParamLimits

0x5211,	// (0x00013e83) input_focus_pane_cp051_ParamLimits

0x5225,	// (0x00013e97) list_midp_choice_pane_ParamLimits

0x50a8,	// (0x00013d1a) list_single_2graphic_pane_cp3_ParamLimits

0x50a8,	// (0x00013d1a) list_single_2graphic_pane_cp3

0x50cc,	// (0x00013d3e) list_single_midp_graphic_pane_ParamLimits

0x50cc,	// (0x00013d3e) list_single_midp_graphic_pane

0xcb9a,	// (0x0001b80c) list_single_graphic_2heading_pane_g1_ParamLimits

0xcb9a,	// (0x0001b80c) list_single_graphic_2heading_pane_g1

0xcba6,	// (0x0001b818) list_single_graphic_2heading_pane_g4_ParamLimits

0xcba6,	// (0x0001b818) list_single_graphic_2heading_pane_g4

0xcbb2,	// (0x0001b824) list_single_graphic_2heading_pane_g5_ParamLimits

0xcbb2,	// (0x0001b824) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0001e462) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0001e462) list_single_graphic_2heading_pane_g

0xcbbe,	// (0x0001b830) list_single_graphic_2heading_pane_t1_ParamLimits

0xcbbe,	// (0x0001b830) list_single_graphic_2heading_pane_t1

0xcbd2,	// (0x0001b844) list_single_graphic_2heading_pane_t2_ParamLimits

0xcbd2,	// (0x0001b844) list_single_graphic_2heading_pane_t2

0xcbee,	// (0x0001b860) list_single_graphic_2heading_pane_t3_ParamLimits

0xcbee,	// (0x0001b860) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0001e469) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0001e469) list_single_graphic_2heading_pane_t

0x4e01,	// (0x00013a73) bg_popup_sub_pane_cp2

0x4e2b,	// (0x00013a9d) grid_toobar_pane

0xddfe,	// (0x0001ca70) cell_toolbar_pane_ParamLimits

0xddfe,	// (0x0001ca70) cell_toolbar_pane

0x4ea1,	// (0x00013b13) cell_toolbar_pane_g1_ParamLimits

0x4ea1,	// (0x00013b13) cell_toolbar_pane_g1

0x4eb5,	// (0x00013b27) cell_toolbar_pane_g2_ParamLimits

0x4eb5,	// (0x00013b27) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x0001e477) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x0001e477) cell_toolbar_pane_g

0x4ed7,	// (0x00013b49) grid_highlight_pane_cp2_ParamLimits

0x4ed7,	// (0x00013b49) grid_highlight_pane_cp2

0x4ef1,	// (0x00013b63) toolbar_button_pane

0x4efd,	// (0x00013b6f) toolbar_button_pane_g1

0x4f0d,	// (0x00013b7f) toolbar_button_pane_g2

0x4f05,	// (0x00013b77) toolbar_button_pane_g3

0x4f1d,	// (0x00013b8f) toolbar_button_pane_g4

0x4f15,	// (0x00013b87) toolbar_button_pane_g5

0x4f25,	// (0x00013b97) toolbar_button_pane_g6

0x4f2d,	// (0x00013b9f) toolbar_button_pane_g7

0x4f3d,	// (0x00013baf) toolbar_button_pane_g8

0x4f35,	// (0x00013ba7) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x0001e47c) toolbar_button_pane_g

0xde36,	// (0x0001caa8) list_single_2graphic_pane_g1_cp3_ParamLimits

0xde36,	// (0x0001caa8) list_single_2graphic_pane_g1_cp3

0xde42,	// (0x0001cab4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xde42,	// (0x0001cab4) list_single_2graphic_pane_g2_cp3

0xde53,	// (0x0001cac5) list_single_2graphic_pane_g3_cp3

0x3cab,	// (0x0001291d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3cab,	// (0x0001291d) list_single_2graphic_pane_g4_cp3

0xde5b,	// (0x0001cacd) list_single_2graphic_pane_t1_cp3_ParamLimits

0xde5b,	// (0x0001cacd) list_single_2graphic_pane_t1_cp3

0x2eb4,	// (0x00011b26) list_single_midp_graphic_pane_g2_ParamLimits

0x2eb4,	// (0x00011b26) list_single_midp_graphic_pane_g2

0x43bb,	// (0x0001302d) aid_zoom_text_primary

0xcb6e,	// (0x0001b7e0) aid_zoom_text_secondary

0x430a,	// (0x00012f7c) status_small_pane_g7_ParamLimits

0x430a,	// (0x00012f7c) status_small_pane_g7

0x432d,	// (0x00012f9f) status_small_pane_t1_ParamLimits

0x23a1,	// (0x00011013) title_pane_g2

0x0003,

0xf592,	// (0x0001e204) title_pane_g

0x28ff,	// (0x00011571) aid_size_cell_colour_1_pane_ParamLimits

0x28ff,	// (0x00011571) aid_size_cell_colour_1_pane

0x2913,	// (0x00011585) aid_size_cell_colour_2_pane_ParamLimits

0x2913,	// (0x00011585) aid_size_cell_colour_2_pane

0x2927,	// (0x00011599) aid_size_cell_colour_3_pane_ParamLimits

0x2927,	// (0x00011599) aid_size_cell_colour_3_pane

0x293b,	// (0x000115ad) aid_size_cell_colour_4_pane_ParamLimits

0x293b,	// (0x000115ad) aid_size_cell_colour_4_pane

0xd865,	// (0x0001c4d7) title_pane_stacon_g1_ParamLimits

0xd865,	// (0x0001c4d7) title_pane_stacon_g1

0x5627,	// (0x00014299) popup_note_wait_window_g3_ParamLimits

0x5627,	// (0x00014299) popup_note_wait_window_g3

0x569d,	// (0x0001430f) popup_note_wait_window_t5_ParamLimits

0x569d,	// (0x0001430f) popup_note_wait_window_t5

0x238a,	// (0x00010ffc) main_feb_china_hwr_fs_writing_pane

0x44af,	// (0x00013121) popup_feb_china_hwr_fs_window_ParamLimits

0x44af,	// (0x00013121) popup_feb_china_hwr_fs_window

0xde8d,	// (0x0001caff) aid_size_cell_hwr_fs_ParamLimits

0xde8d,	// (0x0001caff) aid_size_cell_hwr_fs

0x5017,	// (0x00013c89) bg_popup_sub_pane_cp3_ParamLimits

0x5017,	// (0x00013c89) bg_popup_sub_pane_cp3

0xdea2,	// (0x0001cb14) grid_hwr_fs_pane_ParamLimits

0xdea2,	// (0x0001cb14) grid_hwr_fs_pane

0xdeba,	// (0x0001cb2c) linegrid_hwr_fs_pane_ParamLimits

0xdeba,	// (0x0001cb2c) linegrid_hwr_fs_pane

0xdeca,	// (0x0001cb3c) cell_hwr_fs_pane_ParamLimits

0xdeca,	// (0x0001cb3c) cell_hwr_fs_pane

0x5023,	// (0x00013c95) linegrid_hwr_fs_pane_g1_ParamLimits

0x5023,	// (0x00013c95) linegrid_hwr_fs_pane_g1

0x502f,	// (0x00013ca1) linegrid_hwr_fs_pane_g2_ParamLimits

0x502f,	// (0x00013ca1) linegrid_hwr_fs_pane_g2

0x5041,	// (0x00013cb3) linegrid_hwr_fs_pane_g3_ParamLimits

0x5041,	// (0x00013cb3) linegrid_hwr_fs_pane_g3

0xdeec,	// (0x0001cb5e) linegrid_hwr_fs_pane_g4_ParamLimits

0xdeec,	// (0x0001cb5e) linegrid_hwr_fs_pane_g4

0xdf06,	// (0x0001cb78) linegrid_hwr_fs_pane_g5_ParamLimits

0xdf06,	// (0x0001cb78) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0001e4a7) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0001e4a7) linegrid_hwr_fs_pane_g

0x504d,	// (0x00013cbf) cell_hwr_fs_pane_g1_ParamLimits

0x504d,	// (0x00013cbf) cell_hwr_fs_pane_g1

0x4d38,	// (0x000139aa) cell_hwr_fs_pane_g2_ParamLimits

0x4d38,	// (0x000139aa) cell_hwr_fs_pane_g2

0x5063,	// (0x00013cd5) cell_hwr_fs_pane_g3_ParamLimits

0x5063,	// (0x00013cd5) cell_hwr_fs_pane_g3

0x5070,	// (0x00013ce2) cell_hwr_fs_pane_g4_ParamLimits

0x5070,	// (0x00013ce2) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0001e4b2) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0001e4b2) cell_hwr_fs_pane_g

0xdf1c,	// (0x0001cb8e) cell_hwr_fs_pane_t1

0x238a,	// (0x00010ffc) grid_highlight_pane_cp6

0x238a,	// (0x00010ffc) main_idle_act2_pane

0x352f,	// (0x000121a1) aid_inside_area_popup_secondary

0x5cd4,	// (0x00014946) aid_inside_area_window_primary_ParamLimits

0x5cd4,	// (0x00014946) aid_inside_area_window_primary

0x694e,	// (0x000155c0) ai2_news_ticker_pane

0x6956,	// (0x000155c8) aid_size_cell_ai1_link_ParamLimits

0x6956,	// (0x000155c8) aid_size_cell_ai1_link

0x6970,	// (0x000155e2) popup_ai2_data_window_ParamLimits

0x6970,	// (0x000155e2) popup_ai2_data_window

0x6986,	// (0x000155f8) popup_ai2_link_window_ParamLimits

0x6986,	// (0x000155f8) popup_ai2_link_window

0x5017,	// (0x00013c89) bg_popup_sub_pane_cp4_ParamLimits

0x5017,	// (0x00013c89) bg_popup_sub_pane_cp4

0x699a,	// (0x0001560c) grid_ai2_link_pane_ParamLimits

0x699a,	// (0x0001560c) grid_ai2_link_pane

0x69b1,	// (0x00015623) popup_ai2_link_window_g1_ParamLimits

0x69b1,	// (0x00015623) popup_ai2_link_window_g1

0x69bd,	// (0x0001562f) popup_ai2_link_window_g2_ParamLimits

0x69bd,	// (0x0001562f) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0001e67e) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0001e67e) popup_ai2_link_window_g

0x69cc,	// (0x0001563e) ai2_mp_button_pane

0x69d4,	// (0x00015646) ai2_mp_volume_pane

0x5211,	// (0x00013e83) bg_popup_sub_pane_cp5_ParamLimits

0x5211,	// (0x00013e83) bg_popup_sub_pane_cp5

0x69dc,	// (0x0001564e) heading_ai2_gene_pane_ParamLimits

0x69dc,	// (0x0001564e) heading_ai2_gene_pane

0x69e8,	// (0x0001565a) list_ai2_gene_pane_ParamLimits

0x69e8,	// (0x0001565a) list_ai2_gene_pane

0x6a30,	// (0x000156a2) cell_ai2_link_pane_ParamLimits

0x6a30,	// (0x000156a2) cell_ai2_link_pane

0x6a46,	// (0x000156b8) cell_ai2_link_pane_g1

0x238a,	// (0x00010ffc) grid_highlight_pane_cp7

0xe20e,	// (0x0001ce80) ai2_mp_volume_pane_g1

0x6b1e,	// (0x00015790) ai2_mp_volume_pane_g2

0x6a8b,	// (0x000156fd) list_ai2_gene_pane_t1

0x6b16,	// (0x00015788) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0001e697) ai2_mp_volume_pane_g

0xe216,	// (0x0001ce88) volume_small_pane_cp3

0x6b26,	// (0x00015798) aid_size_cell_ai2_button

0x6b2e,	// (0x000157a0) grid_ai2_button_pane

0x6b37,	// (0x000157a9) cell_ai2_button_pane_ParamLimits

0x6b37,	// (0x000157a9) cell_ai2_button_pane

0x2380,	// (0x00010ff2) cell_ai2_button_pane_g1

0x238a,	// (0x00010ffc) grid_highlight_pane_cp8

0x6ad6,	// (0x00015748) ai2_gene_pane_t1_ParamLimits

0x6ad6,	// (0x00015748) ai2_gene_pane_t1

0x43a1,	// (0x00013013) aid_height_parent_landscape

0x638e,	// (0x00015000) aid_height_set_list

0x639f,	// (0x00015011) aid_size_parent

0x6775,	// (0x000153e7) aid_size_cell_graphic_pane_ParamLimits

0x69f8,	// (0x0001566a) popup_ai2_data_window_g1_ParamLimits

0x69f8,	// (0x0001566a) popup_ai2_data_window_g1

0x6a04,	// (0x00015676) ai2_news_ticker_pane_g1

0x6a0c,	// (0x0001567e) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0001e683) ai2_news_ticker_pane_g

0x6a14,	// (0x00015686) ai2_news_ticker_pane_t1

0x6a22,	// (0x00015694) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0001e688) ai2_news_ticker_pane_t

0x6a4f,	// (0x000156c1) heading_ai2_gene_pane_g1

0x6a57,	// (0x000156c9) heading_ai2_gene_pane_t1_ParamLimits

0x6a57,	// (0x000156c9) heading_ai2_gene_pane_t1

0x6a6c,	// (0x000156de) list_highlight_pane_cp6

0x6a74,	// (0x000156e6) ai2_gene_pane_ParamLimits

0x6a74,	// (0x000156e6) ai2_gene_pane

0x6a99,	// (0x0001570b) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0001e68d) list_ai2_gene_pane_t

0x6aa7,	// (0x00015719) list_highlight_pane_cp8_ParamLimits

0x6aa7,	// (0x00015719) list_highlight_pane_cp8

0x6ab8,	// (0x0001572a) ai2_gene_pane_g1_ParamLimits

0x6ab8,	// (0x0001572a) ai2_gene_pane_g1

0x6aca,	// (0x0001573c) ai2_gene_pane_g2_ParamLimits

0x6aca,	// (0x0001573c) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0001e692) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0001e692) ai2_gene_pane_g

0x2c86,	// (0x000118f8) scroll_pane_cp12

0xddbd,	// (0x0001ca2f) control_pane_t3_ParamLimits

0xddbd,	// (0x0001ca2f) control_pane_t3

0x431e,	// (0x00012f90) status_small_pane_g8_ParamLimits

0x431e,	// (0x00012f90) status_small_pane_g8

0x4595,	// (0x00013207) popup_find_window_ParamLimits

0x47a8,	// (0x0001341a) popup_note_image_window_ParamLimits

0xcb9a,	// (0x0001b80c) list_double2_graphic_pane_vc_g1_ParamLimits

0xcb9a,	// (0x0001b80c) list_double2_graphic_pane_vc_g1

0xcc06,	// (0x0001b878) list_double2_graphic_pane_vc_g2_ParamLimits

0xcc06,	// (0x0001b878) list_double2_graphic_pane_vc_g2

0xcc12,	// (0x0001b884) list_double2_graphic_pane_vc_g3_ParamLimits

0xcc12,	// (0x0001b884) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x0001e470) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x0001e470) list_double2_graphic_pane_vc_g

0xcc1e,	// (0x0001b890) list_double2_graphic_pane_vc_t1_ParamLimits

0xcc1e,	// (0x0001b890) list_double2_graphic_pane_vc_t1

0xcba6,	// (0x0001b818) list_single_heading_pane_vc_g1_ParamLimits

0xcba6,	// (0x0001b818) list_single_heading_pane_vc_g1

0xcbb2,	// (0x0001b824) list_single_heading_pane_vc_g2_ParamLimits

0xcbb2,	// (0x0001b824) list_single_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0001e491) list_single_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0001e491) list_single_heading_pane_vc_g

0xcc34,	// (0x0001b8a6) list_single_heading_pane_vc_t1_ParamLimits

0xcc34,	// (0x0001b8a6) list_single_heading_pane_vc_t1

0xcc4a,	// (0x0001b8bc) list_single_heading_pane_vc_t2_ParamLimits

0xcc4a,	// (0x0001b8bc) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0001e496) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0001e496) list_single_heading_pane_vc_t

0x4f6f,	// (0x00013be1) list_setting_number_pane_vc_g1_ParamLimits

0x4f6f,	// (0x00013be1) list_setting_number_pane_vc_g1

0x4f7b,	// (0x00013bed) list_setting_number_pane_vc_g2_ParamLimits

0x4f7b,	// (0x00013bed) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0001e49b) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0001e49b) list_setting_number_pane_vc_g

0x4f87,	// (0x00013bf9) list_setting_number_pane_vc_t1_ParamLimits

0x4f87,	// (0x00013bf9) list_setting_number_pane_vc_t1

0x4f9b,	// (0x00013c0d) list_setting_number_pane_vc_t2_ParamLimits

0x4f9b,	// (0x00013c0d) list_setting_number_pane_vc_t2

0x4fb7,	// (0x00013c29) list_setting_number_pane_vc_t3_ParamLimits

0x4fb7,	// (0x00013c29) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0001e4a0) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0001e4a0) list_setting_number_pane_vc_t

0x4fdd,	// (0x00013c4f) set_value_pane_vc_ParamLimits

0x4fdd,	// (0x00013c4f) set_value_pane_vc

0x65a5,	// (0x00015217) list_double2_graphic_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double2_graphic_pane_vc

0x65a5,	// (0x00015217) list_double2_large_graphic_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double2_large_graphic_pane_vc

0x65a5,	// (0x00015217) list_double2_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double2_pane_vc

0x65a5,	// (0x00015217) list_double_graphic_heading_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double_graphic_heading_pane_vc

0x65a5,	// (0x00015217) list_double_graphic_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double_graphic_pane_vc

0x65a5,	// (0x00015217) list_double_heading_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double_heading_pane_vc

0x65a5,	// (0x00015217) list_double_large_graphic_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double_large_graphic_pane_vc

0x65a5,	// (0x00015217) list_double_number_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double_number_pane_vc

0x65a5,	// (0x00015217) list_double_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double_pane_vc

0x65a5,	// (0x00015217) list_double_time_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_double_time_pane_vc

0x65a5,	// (0x00015217) list_setting_number_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_setting_number_pane_vc

0x65a5,	// (0x00015217) list_setting_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_setting_pane_vc

0x65a5,	// (0x00015217) list_single_graphic_heading_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_single_graphic_heading_pane_vc

0x65a5,	// (0x00015217) list_single_heading_pane_vc_ParamLimits

0x65a5,	// (0x00015217) list_single_heading_pane_vc

0xcd27,	// (0x0001b999) list_single_number_heading_pane_vc_ParamLimits

0xcd27,	// (0x0001b999) list_single_number_heading_pane_vc

0xcdc3,	// (0x0001ba35) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xcdc3,	// (0x0001ba35) list_double_graphic_heading_pane_vc_g1

0xcba6,	// (0x0001b818) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xcba6,	// (0x0001b818) list_double_graphic_heading_pane_vc_g2

0xcbb2,	// (0x0001b824) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xcbb2,	// (0x0001b824) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0001e69e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0001e69e) list_double_graphic_heading_pane_vc_g

0xcdcf,	// (0x0001ba41) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xcdcf,	// (0x0001ba41) list_double_graphic_heading_pane_vc_t1

0xcc34,	// (0x0001b8a6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xcc34,	// (0x0001b8a6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0001e6a5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0001e6a5) list_double_graphic_heading_pane_vc_t

0x4f6f,	// (0x00013be1) list_setting_pane_vc_g1_ParamLimits

0x4f6f,	// (0x00013be1) list_setting_pane_vc_g1

0x4f7b,	// (0x00013bed) list_setting_pane_vc_g2_ParamLimits

0x4f7b,	// (0x00013bed) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0001e49b) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0001e49b) list_setting_pane_vc_g

0x6d8f,	// (0x00015a01) list_setting_pane_vc_t1_ParamLimits

0x6d8f,	// (0x00015a01) list_setting_pane_vc_t1

0x6da3,	// (0x00015a15) list_setting_pane_vc_t2_ParamLimits

0x6da3,	// (0x00015a15) list_setting_pane_vc_t2

0x0001,

0xfa61,	// (0x0001e6d3) list_setting_pane_vc_t_ParamLimits

0xfa61,	// (0x0001e6d3) list_setting_pane_vc_t

0x4fdd,	// (0x00013c4f) set_value_pane_cp_vc_ParamLimits

0x4fdd,	// (0x00013c4f) set_value_pane_cp_vc

0xcba6,	// (0x0001b818) list_single_number_heading_pane_vc_g1_ParamLimits

0xcba6,	// (0x0001b818) list_single_number_heading_pane_vc_g1

0xcbb2,	// (0x0001b824) list_single_number_heading_pane_vc_g2_ParamLimits

0xcbb2,	// (0x0001b824) list_single_number_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0001e491) list_single_number_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0001e491) list_single_number_heading_pane_vc_g

0xcc34,	// (0x0001b8a6) list_single_number_heading_pane_vc_t1_ParamLimits

0xcc34,	// (0x0001b8a6) list_single_number_heading_pane_vc_t1

0xcde3,	// (0x0001ba55) list_single_number_heading_pane_vc_t2_ParamLimits

0xcde3,	// (0x0001ba55) list_single_number_heading_pane_vc_t2

0xcdf7,	// (0x0001ba69) list_single_number_heading_pane_vc_t3_ParamLimits

0xcdf7,	// (0x0001ba69) list_single_number_heading_pane_vc_t3

0x0002,

0xfa66,	// (0x0001e6d8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0001e6d8) list_single_number_heading_pane_vc_t

0xcb9a,	// (0x0001b80c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xcb9a,	// (0x0001b80c) list_single_graphic_heading_pane_vc_g1

0xcba6,	// (0x0001b818) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xcba6,	// (0x0001b818) list_single_graphic_heading_pane_vc_g4

0xcbb2,	// (0x0001b824) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xcbb2,	// (0x0001b824) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f0,	// (0x0001e462) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f0,	// (0x0001e462) list_single_graphic_heading_pane_vc_g

0xcc34,	// (0x0001b8a6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xcc34,	// (0x0001b8a6) list_single_graphic_heading_pane_vc_t1

0xce09,	// (0x0001ba7b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xce09,	// (0x0001ba7b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001e6df) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001e6df) list_single_graphic_heading_pane_vc_t

0xcba6,	// (0x0001b818) list_double2_pane_vc_g1_ParamLimits

0xcba6,	// (0x0001b818) list_double2_pane_vc_g1

0xcbb2,	// (0x0001b824) list_double2_pane_vc_g2_ParamLimits

0xcbb2,	// (0x0001b824) list_double2_pane_vc_g2

0x0001,

0xf81f,	// (0x0001e491) list_double2_pane_vc_g_ParamLimits

0xf81f,	// (0x0001e491) list_double2_pane_vc_g

0xce1d,	// (0x0001ba8f) list_double2_pane_vc_t1_ParamLimits

0xce1d,	// (0x0001ba8f) list_double2_pane_vc_t1

0xce33,	// (0x0001baa5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xce33,	// (0x0001baa5) list_double2_large_graphic_pane_vc_g1

0xcba6,	// (0x0001b818) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xcba6,	// (0x0001b818) list_double2_large_graphic_pane_vc_g2

0xcbb2,	// (0x0001b824) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcbb2,	// (0x0001b824) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa72,	// (0x0001e6e4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x0001e6e4) list_double2_large_graphic_pane_vc_g

0xce3f,	// (0x0001bab1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xce3f,	// (0x0001bab1) list_double2_large_graphic_pane_vc_t1

0xce55,	// (0x0001bac7) list_double_time_pane_vc_g1_ParamLimits

0xce55,	// (0x0001bac7) list_double_time_pane_vc_g1

0xce61,	// (0x0001bad3) list_double_time_pane_vc_g2_ParamLimits

0xce61,	// (0x0001bad3) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x0001e6eb) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x0001e6eb) list_double_time_pane_vc_g

0xce6d,	// (0x0001badf) list_double_time_pane_vc_t1_ParamLimits

0xce6d,	// (0x0001badf) list_double_time_pane_vc_t1

0xce86,	// (0x0001baf8) list_double_time_pane_vc_t2_ParamLimits

0xce86,	// (0x0001baf8) list_double_time_pane_vc_t2

0xcec1,	// (0x0001bb33) list_double_time_pane_vc_t3_ParamLimits

0xcec1,	// (0x0001bb33) list_double_time_pane_vc_t3

0xced9,	// (0x0001bb4b) list_double_time_pane_vc_t4_ParamLimits

0xced9,	// (0x0001bb4b) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x0001e6f0) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x0001e6f0) list_double_time_pane_vc_t

0xcba6,	// (0x0001b818) list_double_pane_vc_g1_ParamLimits

0xcba6,	// (0x0001b818) list_double_pane_vc_g1

0xcbb2,	// (0x0001b824) list_double_pane_vc_g2_ParamLimits

0xcbb2,	// (0x0001b824) list_double_pane_vc_g2

0x0001,

0xf81f,	// (0x0001e491) list_double_pane_vc_g_ParamLimits

0xf81f,	// (0x0001e491) list_double_pane_vc_g

0xceed,	// (0x0001bb5f) list_double_pane_vc_t1_ParamLimits

0xceed,	// (0x0001bb5f) list_double_pane_vc_t1

0xceff,	// (0x0001bb71) list_double_pane_vc_t2_ParamLimits

0xceff,	// (0x0001bb71) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0001e6f9) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0001e6f9) list_double_pane_vc_t

0xcba6,	// (0x0001b818) list_double_number_pane_vc_g1_ParamLimits

0xcba6,	// (0x0001b818) list_double_number_pane_vc_g1

0xcbb2,	// (0x0001b824) list_double_number_pane_vc_g2_ParamLimits

0xcbb2,	// (0x0001b824) list_double_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0001e491) list_double_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0001e491) list_double_number_pane_vc_g

0xcf17,	// (0x0001bb89) list_double_number_pane_vc_t1_ParamLimits

0xcf17,	// (0x0001bb89) list_double_number_pane_vc_t1

0xcf2b,	// (0x0001bb9d) list_double_number_pane_vc_t2_ParamLimits

0xcf2b,	// (0x0001bb9d) list_double_number_pane_vc_t2

0xceff,	// (0x0001bb71) list_double_number_pane_vc_t3_ParamLimits

0xceff,	// (0x0001bb71) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x0001e6fe) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x0001e6fe) list_double_number_pane_vc_t

0xcf3d,	// (0x0001bbaf) list_double_large_graphic_pane_vc_g1_ParamLimits

0xcf3d,	// (0x0001bbaf) list_double_large_graphic_pane_vc_g1

0xcf49,	// (0x0001bbbb) list_double_large_graphic_pane_vc_g2_ParamLimits

0xcf49,	// (0x0001bbbb) list_double_large_graphic_pane_vc_g2

0xcbb2,	// (0x0001b824) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcbb2,	// (0x0001b824) list_double_large_graphic_pane_vc_g3

0xcf58,	// (0x0001bbca) list_double_large_graphic_pane_vc_g4_ParamLimits

0xcf58,	// (0x0001bbca) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x0001e705) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0001e705) list_double_large_graphic_pane_vc_g

0xcf64,	// (0x0001bbd6) list_double_large_graphic_pane_vc_t1_ParamLimits

0xcf64,	// (0x0001bbd6) list_double_large_graphic_pane_vc_t1

0xcf76,	// (0x0001bbe8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xcf76,	// (0x0001bbe8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x0001e70e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x0001e70e) list_double_large_graphic_pane_vc_t

0xcba6,	// (0x0001b818) list_double_heading_pane_vc_g1_ParamLimits

0xcba6,	// (0x0001b818) list_double_heading_pane_vc_g1

0xcbb2,	// (0x0001b824) list_double_heading_pane_vc_g2_ParamLimits

0xcbb2,	// (0x0001b824) list_double_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0001e491) list_double_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0001e491) list_double_heading_pane_vc_g

0xcf8f,	// (0x0001bc01) list_double_heading_pane_vc_t1_ParamLimits

0xcf8f,	// (0x0001bc01) list_double_heading_pane_vc_t1

0xcc34,	// (0x0001b8a6) list_double_heading_pane_vc_t2_ParamLimits

0xcc34,	// (0x0001b8a6) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0001e713) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0001e713) list_double_heading_pane_vc_t

0xcfa3,	// (0x0001bc15) list_double_graphic_pane_vc_g1_ParamLimits

0xcfa3,	// (0x0001bc15) list_double_graphic_pane_vc_g1

0xcfb3,	// (0x0001bc25) list_double_graphic_pane_vc_g2_ParamLimits

0xcfb3,	// (0x0001bc25) list_double_graphic_pane_vc_g2

0xcfc2,	// (0x0001bc34) list_double_graphic_pane_vc_g3_ParamLimits

0xcfc2,	// (0x0001bc34) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0001e718) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0001e718) list_double_graphic_pane_vc_g

0xcfce,	// (0x0001bc40) list_double_graphic_pane_vc_t1_ParamLimits

0xcfce,	// (0x0001bc40) list_double_graphic_pane_vc_t1

0xceff,	// (0x0001bb71) list_double_graphic_pane_vc_t2_ParamLimits

0xceff,	// (0x0001bb71) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0001e71f) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0001e71f) list_double_graphic_pane_vc_t

0xd3cb,	// (0x0001c03d) aid_size_cell_fastswap

0xd3d3,	// (0x0001c045) aid_size_cell_touch_ParamLimits

0xd3d3,	// (0x0001c045) aid_size_cell_touch

0xd62e,	// (0x0001c2a0) popup_fast_swap_wide_window_ParamLimits

0xd62e,	// (0x0001c2a0) popup_fast_swap_wide_window

0xd738,	// (0x0001c3aa) touch_pane_ParamLimits

0xd738,	// (0x0001c3aa) touch_pane

0x316b,	// (0x00011ddd) button_value_adjust_pane_cp2

0xc892,	// (0x0001b504) button_value_adjust_pane_cp4

0xc8b2,	// (0x0001b524) form_field_data_pane_cp2

0xc8d1,	// (0x0001b543) form_field_data_wide_pane_cp2

0x3842,	// (0x000124b4) bg_scroll_pane_ParamLimits

0xd9c8,	// (0x0001c63a) scroll_handle_pane_ParamLimits

0xd9dc,	// (0x0001c64e) scroll_sc2_down_pane_ParamLimits

0xd9dc,	// (0x0001c64e) scroll_sc2_down_pane

0x3873,	// (0x000124e5) scroll_sc2_up_pane_ParamLimits

0x3873,	// (0x000124e5) scroll_sc2_up_pane

0x73ab,	// (0x0001601d) grid_wheel_folder_pane_g1_ParamLimits

0x73ab,	// (0x0001601d) grid_wheel_folder_pane_g1

0xdba1,	// (0x0001c813) clock_nsta_pane_cp2_ParamLimits

0xdba1,	// (0x0001c813) clock_nsta_pane_cp2

0x40a3,	// (0x00012d15) listscroll_midp_pane_ParamLimits

0x40af,	// (0x00012d21) midp_canvas_pane

0x4399,	// (0x0001300b) nsta_clock_indic_pane

0x43f7,	// (0x00013069) listscroll_form_pane_vc

0x4413,	// (0x00013085) listscroll_set_pane_vc_ParamLimits

0x4413,	// (0x00013085) listscroll_set_pane_vc

0x4ab3,	// (0x00013725) clock_nsta_pane

0x4b28,	// (0x0001379a) indicator_nsta_pane

0x4e01,	// (0x00013a73) bg_popup_sub_pane_cp2_ParamLimits

0x4e15,	// (0x00013a87) find_pane_cp2_ParamLimits

0x4e15,	// (0x00013a87) find_pane_cp2

0x4e2b,	// (0x00013a9d) grid_toobar_pane_ParamLimits

0x4feb,	// (0x00013c5d) list_form_gen_pane_vc_ParamLimits

0x4feb,	// (0x00013c5d) list_form_gen_pane_vc

0x5001,	// (0x00013c73) scroll_pane_cp8_vc_ParamLimits

0x5001,	// (0x00013c73) scroll_pane_cp8_vc

0x507d,	// (0x00013cef) data_form_wide_pane_vc_ParamLimits

0x507d,	// (0x00013cef) data_form_wide_pane_vc

0x5089,	// (0x00013cfb) form_field_data_wide_pane_vc_g1

0x5091,	// (0x00013d03) form_field_data_wide_pane_vc_t1_ParamLimits

0x5091,	// (0x00013d03) form_field_data_wide_pane_vc_t1

0x3251,	// (0x00011ec3) input_focus_pane_cp6_vc_ParamLimits

0x3251,	// (0x00011ec3) input_focus_pane_cp6_vc

0x53d3,	// (0x00014045) list_midp_pane_ParamLimits

0x53df,	// (0x00014051) scroll_pane_cp16_ParamLimits

0x53df,	// (0x00014051) scroll_pane_cp16

0x541f,	// (0x00014091) button_value_adjust_pane_ParamLimits

0x541f,	// (0x00014091) button_value_adjust_pane

0x63b1,	// (0x00015023) button_value_adjust_pane_cp6_ParamLimits

0x63b1,	// (0x00015023) button_value_adjust_pane_cp6

0x64db,	// (0x0001514d) settings_code_pane_cp_ParamLimits

0x64db,	// (0x0001514d) settings_code_pane_cp

0x2380,	// (0x00010ff2) cell_touch_pane_g1

0x2380,	// (0x00010ff2) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0001e3b9) cell_touch_pane_g

0x6b49,	// (0x000157bb) cell_touch_pane_cp_ParamLimits

0x6b49,	// (0x000157bb) cell_touch_pane_cp

0x6b59,	// (0x000157cb) cell_touch_pane_ParamLimits

0x6b59,	// (0x000157cb) cell_touch_pane

0x2380,	// (0x00010ff2) scroll_sc2_down_pane_g1

0x2380,	// (0x00010ff2) scroll_sc2_up_pane_g1

0x238a,	// (0x00010ffc) bg_set_opt_pane_cp4_vc

0x6b8b,	// (0x000157fd) list_set_graphic_pane_vc_g1_ParamLimits

0x6b8b,	// (0x000157fd) list_set_graphic_pane_vc_g1

0x6b97,	// (0x00015809) list_set_graphic_pane_vc_g2_ParamLimits

0x6b97,	// (0x00015809) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0001e6aa) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0001e6aa) list_set_graphic_pane_vc_g

0x6ba3,	// (0x00015815) text_primary_small_cp13_vc_ParamLimits

0x6ba3,	// (0x00015815) text_primary_small_cp13_vc

0x6bbb,	// (0x0001582d) list_set_graphic_pane_vc_ParamLimits

0x6bbb,	// (0x0001582d) list_set_graphic_pane_vc

0x238a,	// (0x00010ffc) input_focus_pane_cp2_vc

0x2380,	// (0x00010ff2) setting_code_pane_vc_g1

0x6bcf,	// (0x00015841) setting_code_pane_vc_t1

0x6bdd,	// (0x0001584f) set_text_pane_vc_t1_ParamLimits

0x6bdd,	// (0x0001584f) set_text_pane_vc_t1

0x238a,	// (0x00010ffc) input_focus_pane_cp1_vc

0x6bf8,	// (0x0001586a) list_set_text_pane_vc

0x2380,	// (0x00010ff2) setting_text_pane_vc_g1

0x238a,	// (0x00010ffc) bg_set_opt_pane_cp2_vc

0x6c02,	// (0x00015874) setting_slider_graphic_pane_vc_g1

0x6c0a,	// (0x0001587c) setting_slider_graphic_pane_vc_t1

0x6c18,	// (0x0001588a) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001e6af) setting_slider_graphic_pane_vc_t

0x6c26,	// (0x00015898) slider_set_pane_cp_vc

0x6c2e,	// (0x000158a0) slider_set_pane_vc_g1

0x6c37,	// (0x000158a9) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0001e6b4) slider_set_pane_vc_g

0x3389,	// (0x00011ffb) set_opt_bg_pane_g1_copy1

0x3391,	// (0x00012003) set_opt_bg_pane_g2_copy1

0x6c63,	// (0x000158d5) set_opt_bg_pane_g3_copy1

0x33a1,	// (0x00012013) set_opt_bg_pane_g4_copy1

0x33a9,	// (0x0001201b) set_opt_bg_pane_g5_copy1

0x33b1,	// (0x00012023) set_opt_bg_pane_g6_copy1

0x6c6d,	// (0x000158df) set_opt_bg_pane_g7_copy1

0x6c75,	// (0x000158e7) set_opt_bg_pane_g8_copy1

0x6c7f,	// (0x000158f1) set_opt_bg_pane_g9_copy1

0x238a,	// (0x00010ffc) bg_set_opt_pane_cp_vc

0x6c89,	// (0x000158fb) setting_slider_pane_vc_t1

0x6c0a,	// (0x0001587c) setting_slider_pane_vc_t2

0x6c18,	// (0x0001588a) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0001e6c3) setting_slider_pane_vc_t

0x6c26,	// (0x00015898) slider_set_pane_vc

0xdf2a,	// (0x0001cb9c) volume_set_pane_vc_g1

0xdf33,	// (0x0001cba5) volume_set_pane_vc_g2

0xdf3c,	// (0x0001cbae) volume_set_pane_vc_g3

0xdf45,	// (0x0001cbb7) volume_set_pane_vc_g4

0xdf4e,	// (0x0001cbc0) volume_set_pane_vc_g5

0xdf57,	// (0x0001cbc9) volume_set_pane_vc_g6

0xdf60,	// (0x0001cbd2) volume_set_pane_vc_g7

0xdf69,	// (0x0001cbdb) volume_set_pane_vc_g8

0xdf72,	// (0x0001cbe4) volume_set_pane_vc_g9

0xdf7b,	// (0x0001cbed) volume_set_pane_vc_g10

0x0009,

0xf8ef,	// (0x0001e561) volume_set_pane_vc_g

0x6c98,	// (0x0001590a) volume_set_pane_vc

0x6ca0,	// (0x00015912) button_value_adjust_pane_cp1_vc

0x6caa,	// (0x0001591c) list_highlight_pane_cp2_vc

0x6cb3,	// (0x00015925) list_set_pane_vc_ParamLimits

0x6cb3,	// (0x00015925) list_set_pane_vc

0x6d1d,	// (0x0001598f) main_pane_set_vc_t1_ParamLimits

0x6d1d,	// (0x0001598f) main_pane_set_vc_t1

0x6d32,	// (0x000159a4) main_pane_set_vc_t2_ParamLimits

0x6d32,	// (0x000159a4) main_pane_set_vc_t2

0x6d44,	// (0x000159b6) main_pane_set_vc_t3_ParamLimits

0x6d44,	// (0x000159b6) main_pane_set_vc_t3

0x6d58,	// (0x000159ca) main_pane_set_vc_t4_ParamLimits

0x6d58,	// (0x000159ca) main_pane_set_vc_t4

0x0003,

0xfa58,	// (0x0001e6ca) main_pane_set_vc_t_ParamLimits

0xfa58,	// (0x0001e6ca) main_pane_set_vc_t

0x6d6c,	// (0x000159de) setting_code_pane_vc_ParamLimits

0x6d6c,	// (0x000159de) setting_code_pane_vc

0x6d7d,	// (0x000159ef) setting_slider_graphic_pane_vc

0x6d7d,	// (0x000159ef) setting_slider_pane_vc

0x6d7d,	// (0x000159ef) setting_text_pane_vc

0x6d7d,	// (0x000159ef) setting_volume_pane_vc

0x6d87,	// (0x000159f9) scroll_pane_cp121_vc

0x3159,	// (0x00011dcb) set_content_pane_vc

0x6faa,	// (0x00015c1c) button_value_adjust_pane_g1

0x6fb3,	// (0x00015c25) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0001e724) button_value_adjust_pane_g

0x6fbc,	// (0x00015c2e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6fbc,	// (0x00015c2e) form_field_slider_wide_pane_vc_t1

0x6fd0,	// (0x00015c42) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6fd0,	// (0x00015c42) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0001e729) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0001e729) form_field_slider_wide_pane_vc_t

0x26ff,	// (0x00011371) input_focus_pane_cp10_vc_ParamLimits

0x26ff,	// (0x00011371) input_focus_pane_cp10_vc

0x6fe2,	// (0x00015c54) slider_cont_pane_cp1_vc_ParamLimits

0x6fe2,	// (0x00015c54) slider_cont_pane_cp1_vc

0x6c2e,	// (0x000158a0) slider_form_pane_g1_cp2

0x6c37,	// (0x000158a9) slider_form_pane_g2_cp2

0x6ffb,	// (0x00015c6d) form_field_slider_pane_vc_t3

0x7009,	// (0x00015c7b) form_field_slider_pane_vc_t4

0x7017,	// (0x00015c89) slider_form_pane_vc_ParamLimits

0x7017,	// (0x00015c89) slider_form_pane_vc

0x7024,	// (0x00015c96) form_field_slider_pane_vc_t1_ParamLimits

0x7024,	// (0x00015c96) form_field_slider_pane_vc_t1

0x6fd0,	// (0x00015c42) form_field_slider_pane_vc_t2_ParamLimits

0x6fd0,	// (0x00015c42) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0001e739) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0001e739) form_field_slider_pane_vc_t

0x26ff,	// (0x00011371) input_focus_pane_cp9_vc_ParamLimits

0x26ff,	// (0x00011371) input_focus_pane_cp9_vc

0x7040,	// (0x00015cb2) slider_cont_pane_vc_ParamLimits

0x7040,	// (0x00015cb2) slider_cont_pane_vc

0x7052,	// (0x00015cc4) list_form_graphic_pane_cp_vc_ParamLimits

0x7052,	// (0x00015cc4) list_form_graphic_pane_cp_vc

0x5089,	// (0x00013cfb) form_field_popup_wide_pane_vc_g1

0x7067,	// (0x00015cd9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7067,	// (0x00015cd9) form_field_popup_wide_pane_vc_t1

0x3251,	// (0x00011ec3) input_focus_pane_cp8_vc_ParamLimits

0x3251,	// (0x00011ec3) input_focus_pane_cp8_vc

0x707e,	// (0x00015cf0) list_form_wide_pane_vc_ParamLimits

0x707e,	// (0x00015cf0) list_form_wide_pane_vc

0x708a,	// (0x00015cfc) list_form_graphic_pane_vc_g1

0x7092,	// (0x00015d04) list_form_graphic_pane_vc_t1_ParamLimits

0x7092,	// (0x00015d04) list_form_graphic_pane_vc_t1

0x246a,	// (0x000110dc) list_highlight_pane_cp5_vc_ParamLimits

0x246a,	// (0x000110dc) list_highlight_pane_cp5_vc

0x70ae,	// (0x00015d20) list_form_graphic_pane_vc_ParamLimits

0x70ae,	// (0x00015d20) list_form_graphic_pane_vc

0x5089,	// (0x00013cfb) form_field_popup_pane_vc_g1

0x70c4,	// (0x00015d36) form_field_popup_pane_vc_t1_ParamLimits

0x70c4,	// (0x00015d36) form_field_popup_pane_vc_t1

0x3251,	// (0x00011ec3) input_focus_pane_cp7_vc_ParamLimits

0x3251,	// (0x00011ec3) input_focus_pane_cp7_vc

0x70db,	// (0x00015d4d) list_form_pane_vc_ParamLimits

0x70db,	// (0x00015d4d) list_form_pane_vc

0x70e7,	// (0x00015d59) data_form_pane_vc_t1_ParamLimits

0x70e7,	// (0x00015d59) data_form_pane_vc_t1

0x3389,	// (0x00011ffb) input_focus_pane_vc_g1

0x3391,	// (0x00012003) input_focus_pane_vc_g2

0x3399,	// (0x0001200b) input_focus_pane_vc_g3

0x33a1,	// (0x00012013) input_focus_pane_vc_g4

0x33a9,	// (0x0001201b) input_focus_pane_vc_g5

0x33b1,	// (0x00012023) input_focus_pane_vc_g6

0x33b9,	// (0x0001202b) input_focus_pane_vc_g7

0x33c1,	// (0x00012033) input_focus_pane_vc_g8

0x33c9,	// (0x0001203b) input_focus_pane_vc_g9

0x2380,	// (0x00010ff2) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0001e342) input_focus_pane_vc_g

0x507d,	// (0x00013cef) data_form_pane_vc_ParamLimits

0x507d,	// (0x00013cef) data_form_pane_vc

0x5089,	// (0x00013cfb) form_field_data_pane_vc_g1

0x7102,	// (0x00015d74) form_field_data_pane_vc_t1_ParamLimits

0x7102,	// (0x00015d74) form_field_data_pane_vc_t1

0x3251,	// (0x00011ec3) input_focus_pane_vc_ParamLimits

0x3251,	// (0x00011ec3) input_focus_pane_vc

0x711c,	// (0x00015d8e) button_value_adjust_pane_cp3_vc

0x7124,	// (0x00015d96) button_value_adjust_pane_cp5_vc

0x712c,	// (0x00015d9e) form_field_data_pane_vc_ParamLimits

0x712c,	// (0x00015d9e) form_field_data_pane_vc

0x7143,	// (0x00015db5) form_field_data_pane_vc_cp2

0x714b,	// (0x00015dbd) form_field_data_wide_pane_vc_ParamLimits

0x714b,	// (0x00015dbd) form_field_data_wide_pane_vc

0x7161,	// (0x00015dd3) form_field_data_wide_pane_vc_cp2

0x7169,	// (0x00015ddb) form_field_popup_pane_vc_ParamLimits

0x7169,	// (0x00015ddb) form_field_popup_pane_vc

0x7180,	// (0x00015df2) form_field_popup_wide_pane_vc_ParamLimits

0x7180,	// (0x00015df2) form_field_popup_wide_pane_vc

0x7196,	// (0x00015e08) form_field_slider_pane_vc_ParamLimits

0x7196,	// (0x00015e08) form_field_slider_pane_vc

0x71a9,	// (0x00015e1b) form_field_slider_wide_pane_vc_ParamLimits

0x71a9,	// (0x00015e1b) form_field_slider_wide_pane_vc

0x71bc,	// (0x00015e2e) grid_touch_1_pane_ParamLimits

0x71bc,	// (0x00015e2e) grid_touch_1_pane

0x71c8,	// (0x00015e3a) grid_touch_2_pane_ParamLimits

0x71c8,	// (0x00015e3a) grid_touch_2_pane

0x4364,	// (0x00012fd6) touch_pane_g1_ParamLimits

0x4364,	// (0x00012fd6) touch_pane_g1

0x71e0,	// (0x00015e52) cell_app_pane_cp_wide_ParamLimits

0x71e0,	// (0x00015e52) cell_app_pane_cp_wide

0x71f1,	// (0x00015e63) grid_popup_fast_wide_pane_ParamLimits

0x71f1,	// (0x00015e63) grid_popup_fast_wide_pane

0x7205,	// (0x00015e77) scroll_pane_cp19_ParamLimits

0x7205,	// (0x00015e77) scroll_pane_cp19

0x238a,	// (0x00010ffc) bg_popup_window_pane_cp20

0x7219,	// (0x00015e8b) listscroll_popup_fast_wide_pane

0x246a,	// (0x000110dc) grid_indicator_nsta_pane

0x7221,	// (0x00015e93) clock_nsta_pane_g1

0x722a,	// (0x00015e9c) clock_nsta_pane_t1

0x7246,	// (0x00015eb8) cell_indicator_nsta_pane_ParamLimits

0x7246,	// (0x00015eb8) cell_indicator_nsta_pane

0x727e,	// (0x00015ef0) cell_indicator_nsta_pane_g1

0x728c,	// (0x00015efe) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0001e743) cell_indicator_nsta_pane_g

0x72a2,	// (0x00015f14) clock_nsta_pane_cp

0x72aa,	// (0x00015f1c) indicator_nsta_pane_cp

0x72b2,	// (0x00015f24) nsta_clock_indic_pane_g1

0x254d,	// (0x000111bf) grid_indicator_pane

0x3968,	// (0x000125da) scroll_pane_cp29

0xdaf0,	// (0x0001c762) indicator_nsta_pane_cp2_ParamLimits

0xdaf0,	// (0x0001c762) indicator_nsta_pane_cp2

0x246a,	// (0x000110dc) main_apps_wheel_pane

0x52b4,	// (0x00013f26) form_midp_field_text_pane_ParamLimits

0x53ff,	// (0x00014071) scroll_bar_cp050_ParamLimits

0x72ea,	// (0x00015f5c) cell_indicator_pane_ParamLimits

0x72ea,	// (0x00015f5c) cell_indicator_pane

0x7301,	// (0x00015f73) cell_indicator_pane_g1

0x730b,	// (0x00015f7d) grid_wheel_folder_pane_ParamLimits

0x730b,	// (0x00015f7d) grid_wheel_folder_pane

0x731f,	// (0x00015f91) list_wheel_apps_pane_ParamLimits

0x731f,	// (0x00015f91) list_wheel_apps_pane

0x7330,	// (0x00015fa2) main_apps_wheel_pane_g1_ParamLimits

0x7330,	// (0x00015fa2) main_apps_wheel_pane_g1

0x7344,	// (0x00015fb6) main_apps_wheel_pane_g2_ParamLimits

0x7344,	// (0x00015fb6) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0001e752) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0001e752) main_apps_wheel_pane_g

0x735c,	// (0x00015fce) main_apps_wheel_pane_t1_ParamLimits

0x735c,	// (0x00015fce) main_apps_wheel_pane_t1

0x737f,	// (0x00015ff1) list_wheel_apps_pane_g1

0x7387,	// (0x00015ff9) list_wheel_apps_pane_g2

0x738f,	// (0x00016001) list_wheel_apps_pane_g3

0x7397,	// (0x00016009) list_wheel_apps_pane_g4

0x73a1,	// (0x00016013) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0001e757) list_wheel_apps_pane_g

0x3f1b,	// (0x00012b8d) navi_icon_text_pane

0x49e6,	// (0x00013658) aid_fill_nsta

0x73c4,	// (0x00016036) navi_icon_text_pane_g1

0x73d3,	// (0x00016045) navi_icon_text_pane_t1

0x3db9,	// (0x00012a2b) list_set_graphic_pane_t1_ParamLimits

0x3db9,	// (0x00012a2b) list_set_graphic_pane_t1

0x5b1d,	// (0x0001478f) popup_midp_note_alarm_window_t6_ParamLimits

0x5b1d,	// (0x0001478f) popup_midp_note_alarm_window_t6

0x5b2f,	// (0x000147a1) popup_midp_note_alarm_window_t7_ParamLimits

0x5b2f,	// (0x000147a1) popup_midp_note_alarm_window_t7

0x5b41,	// (0x000147b3) popup_midp_note_alarm_window_t8_ParamLimits

0x5b41,	// (0x000147b3) popup_midp_note_alarm_window_t8

0x5b53,	// (0x000147c5) popup_midp_note_alarm_window_t9_ParamLimits

0x5b53,	// (0x000147c5) popup_midp_note_alarm_window_t9

0x5b65,	// (0x000147d7) popup_midp_note_alarm_window_t10_ParamLimits

0x5b65,	// (0x000147d7) popup_midp_note_alarm_window_t10

0x5b77,	// (0x000147e9) popup_midp_note_alarm_window_t11_ParamLimits

0x5b77,	// (0x000147e9) popup_midp_note_alarm_window_t11

0x5b89,	// (0x000147fb) scroll_pane_cp17_ParamLimits

0x5b89,	// (0x000147fb) scroll_pane_cp17

0xdf2a,	// (0x0001cb9c) volume_small_pane_cp_g1

0xe21f,	// (0x0001ce91) volume_small_pane_cp_g2

0xe228,	// (0x0001ce9a) volume_small_pane_cp_g3

0xe231,	// (0x0001cea3) volume_small_pane_cp_g4

0xe23a,	// (0x0001ceac) volume_small_pane_cp_g5

0xe243,	// (0x0001ceb5) volume_small_pane_cp_g6

0xe24c,	// (0x0001cebe) volume_small_pane_cp_g7

0xe255,	// (0x0001cec7) volume_small_pane_cp_g8

0xe25e,	// (0x0001ced0) volume_small_pane_cp_g9

0xe267,	// (0x0001ced9) volume_small_pane_cp_g10

0x4176,	// (0x00012de8) midp_ticker_pane_g1_ParamLimits

0x4182,	// (0x00012df4) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0001e40a) midp_ticker_pane_g_ParamLimits

0x418e,	// (0x00012e00) midp_ticker_pane_t1_ParamLimits

0x49fc,	// (0x0001366e) aid_fill_nsta_2

0x53eb,	// (0x0001405d) list_form2_midp_pane

0x6559,	// (0x000151cb) midp_editing_number_pane_ParamLimits

0x6568,	// (0x000151da) midp_ticker_pane_ParamLimits

0x73e8,	// (0x0001605a) form2_midp_field_pane

0x740c,	// (0x0001607e) scroll_pane_cp51

0x742c,	// (0x0001609e) form2_midp_button_pane_ParamLimits

0x742c,	// (0x0001609e) form2_midp_button_pane

0x743e,	// (0x000160b0) form2_midp_content_pane_ParamLimits

0x743e,	// (0x000160b0) form2_midp_content_pane

0x7458,	// (0x000160ca) form2_midp_field_choice_group_pane

0x7460,	// (0x000160d2) form2_midp_field_pane_g1

0x7468,	// (0x000160da) form2_midp_field_pane_g2

0x7470,	// (0x000160e2) form2_midp_field_pane_g3

0x7478,	// (0x000160ea) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0001e77c) form2_midp_field_pane_g

0x7480,	// (0x000160f2) form2_midp_gauge_slider_pane

0x7488,	// (0x000160fa) form2_midp_gauge_wait_pane

0x7490,	// (0x00016102) form2_midp_image_pane_ParamLimits

0x7490,	// (0x00016102) form2_midp_image_pane

0x74ab,	// (0x0001611d) form2_midp_label_pane_ParamLimits

0x74ab,	// (0x0001611d) form2_midp_label_pane

0x74c4,	// (0x00016136) form2_midp_label_pane_cp_ParamLimits

0x74c4,	// (0x00016136) form2_midp_label_pane_cp

0x74e5,	// (0x00016157) form2_midp_string_pane_ParamLimits

0x74e5,	// (0x00016157) form2_midp_string_pane

0xcfe0,	// (0x0001bc52) form2_midp_text_pane_ParamLimits

0xcfe0,	// (0x0001bc52) form2_midp_text_pane

0x7514,	// (0x00016186) form2_midp_time_pane

0x7524,	// (0x00016196) input_focus_pane_cp51_ParamLimits

0x7524,	// (0x00016196) input_focus_pane_cp51

0x753c,	// (0x000161ae) form2_midp_label_pane_t1_ParamLimits

0x753c,	// (0x000161ae) form2_midp_label_pane_t1

0xcffb,	// (0x0001bc6d) form2_mdip_text_pane_t1_ParamLimits

0xcffb,	// (0x0001bc6d) form2_mdip_text_pane_t1

0xd019,	// (0x0001bc8b) form2_midp_time_pane_t1

0x75b7,	// (0x00016229) form2_midp_gauge_slider_pane_t1

0x75c9,	// (0x0001623b) form2_midp_gauge_slider_pane_t2

0x75db,	// (0x0001624d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0001e785) form2_midp_gauge_slider_pane_t

0x75ed,	// (0x0001625f) form2_midp_slider_pane

0x75f9,	// (0x0001626b) form2_midp_gauge_wait_pane_t1

0x7607,	// (0x00016279) form2_midp_wait_pane_ParamLimits

0x7607,	// (0x00016279) form2_midp_wait_pane

0x50a8,	// (0x00013d1a) list_single_2graphic_pane_cp4_ParamLimits

0x50a8,	// (0x00013d1a) list_single_2graphic_pane_cp4

0x7632,	// (0x000162a4) list_single_midp_graphic_pane_cp_ParamLimits

0x7632,	// (0x000162a4) list_single_midp_graphic_pane_cp

0x238a,	// (0x00010ffc) list_highlight_pane_cp20

0x7661,	// (0x000162d3) list_single_2graphic_pane_g1_cp4

0x7669,	// (0x000162db) list_single_2graphic_pane_g2_cp4

0x7671,	// (0x000162e3) list_single_2graphic_pane_t1_cp4

0x246a,	// (0x000110dc) list_highlight_pane_cp21

0x7680,	// (0x000162f2) list_single_midp_graphic_pane_g4_cp

0x768f,	// (0x00016301) list_single_midp_graphic_pane_t1_cp

0x76a4,	// (0x00016316) form2_mdip_string_pane_t1_ParamLimits

0x76a4,	// (0x00016316) form2_mdip_string_pane_t1

0x238a,	// (0x00010ffc) bg_wml_button_pane_cp2

0x2380,	// (0x00010ff2) form2_midp_image_pane_g1

0xc665,	// (0x0001b2d7) list_double_large_graphic_pane_g5_ParamLimits

0xc665,	// (0x0001b2d7) list_double_large_graphic_pane_g5

0x40a3,	// (0x00012d15) midp_form_pane_ParamLimits

0x246a,	// (0x000110dc) main_apps_wheel_pane_ParamLimits

0x47ce,	// (0x00013440) popup_preview_window_ParamLimits

0x47ce,	// (0x00013440) popup_preview_window

0x4989,	// (0x000135fb) popup_touch_info_window_ParamLimits

0x4989,	// (0x000135fb) popup_touch_info_window

0x49a7,	// (0x00013619) popup_touch_menu_window_ParamLimits

0x49a7,	// (0x00013619) popup_touch_menu_window

0x2376,	// (0x00010fe8) bg_popup_sub_pane_cp6

0x779d,	// (0x0001640f) list_touch_menu_pane

0x77a5,	// (0x00016417) list_single_touch_menu_pane_ParamLimits

0x77a5,	// (0x00016417) list_single_touch_menu_pane

0x77bc,	// (0x0001642e) list_single_touch_menu_pane_t1

0x246a,	// (0x000110dc) bg_popup_sub_pane_cp7_ParamLimits

0x246a,	// (0x000110dc) bg_popup_sub_pane_cp7

0x77ca,	// (0x0001643c) heading_sub_pane

0x77d2,	// (0x00016444) list_touch_info_pane_ParamLimits

0x77d2,	// (0x00016444) list_touch_info_pane

0x77e1,	// (0x00016453) list_single_touch_info_pane_ParamLimits

0x77e1,	// (0x00016453) list_single_touch_info_pane

0x77f3,	// (0x00016465) list_single_touch_info_pane_t1

0x7801,	// (0x00016473) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0001e793) list_single_touch_info_pane_t

0x409b,	// (0x00012d0d) bg_popup_heading_pane_cp

0x780f,	// (0x00016481) heading_sub_pane_t1

0x5017,	// (0x00013c89) bg_popup_preview_window_pane_cp_ParamLimits

0x5017,	// (0x00013c89) bg_popup_preview_window_pane_cp

0x77ca,	// (0x0001643c) heading_preview_pane

0x77d2,	// (0x00016444) list_preview_pane_ParamLimits

0x77d2,	// (0x00016444) list_preview_pane

0x781d,	// (0x0001648f) popup_preview_window_g1

0x77e1,	// (0x00016453) list_single_preview_pane_ParamLimits

0x77e1,	// (0x00016453) list_single_preview_pane

0x7825,	// (0x00016497) list_single_preview_pane_g1

0x782d,	// (0x0001649f) list_single_preview_pane_t1

0x77f3,	// (0x00016465) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0001e798) list_single_preview_pane_t

0x783b,	// (0x000164ad) bg_popup_heading_pane_cp2_ParamLimits

0x783b,	// (0x000164ad) bg_popup_heading_pane_cp2

0x7851,	// (0x000164c3) heading_preview_pane_g1

0x7859,	// (0x000164cb) heading_preview_pane_t1_ParamLimits

0x7859,	// (0x000164cb) heading_preview_pane_t1

0x2570,	// (0x000111e2) soft_indicator_pane_t1_ParamLimits

0x2c63,	// (0x000118d5) scroll_pane_ParamLimits

0x386a,	// (0x000124dc) scroll_sc2_left_pane

0x3861,	// (0x000124d3) scroll_sc2_right_pane

0x3889,	// (0x000124fb) scroll_bg_pane_g1_ParamLimits

0x389e,	// (0x00012510) scroll_bg_pane_g2_ParamLimits

0x38b6,	// (0x00012528) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0001e399) scroll_bg_pane_g_ParamLimits

0x3889,	// (0x000124fb) scroll_handle_pane_g1_ParamLimits

0x38d8,	// (0x0001254a) scroll_handle_pane_g2_ParamLimits

0x38b6,	// (0x00012528) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0001e3a0) scroll_handle_pane_g_ParamLimits

0x4455,	// (0x000130c7) popup_choice_list_window_ParamLimits

0x4455,	// (0x000130c7) popup_choice_list_window

0x4e0d,	// (0x00013a7f) choice_list_pane

0x4ec9,	// (0x00013b3b) cell_toolbar_pane_t1

0x4ef1,	// (0x00013b63) toolbar_button_pane_ParamLimits

0x6049,	// (0x00014cbb) ai_gene_pane_1_t2_ParamLimits

0x6049,	// (0x00014cbb) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0001e5bd) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0001e5bd) ai_gene_pane_1_t

0x7876,	// (0x000164e8) scroll_sc2_left_pane_g1

0x7876,	// (0x000164e8) scroll_sc2_right_pane_g1

0x4425,	// (0x00013097) bg_popup_sub_pane_cp10

0x7880,	// (0x000164f2) list_choice_list_pane

0x7897,	// (0x00016509) list_single_choice_list_pane_ParamLimits

0x7897,	// (0x00016509) list_single_choice_list_pane

0x78ab,	// (0x0001651d) list_single_choice_list_pane_g1

0x78b3,	// (0x00016525) list_single_choice_list_pane_t1_ParamLimits

0x78b3,	// (0x00016525) list_single_choice_list_pane_t1

0x78c8,	// (0x0001653a) choice_list_pane_g1

0x78d0,	// (0x00016542) choice_list_pane_t1

0x2376,	// (0x00010fe8) input_focus_pane_cp11

0x3743,	// (0x000123b5) title_pane_stacon_g2_ParamLimits

0x3743,	// (0x000123b5) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0001e37f) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0001e37f) title_pane_stacon_g

0x409b,	// (0x00012d0d) cursor_press_pane

0x44fd,	// (0x0001316f) popup_fep_hwr_window_ParamLimits

0x44fd,	// (0x0001316f) popup_fep_hwr_window

0x4577,	// (0x000131e9) popup_fep_vkb_window_ParamLimits

0x4577,	// (0x000131e9) popup_fep_vkb_window

0x78de,	// (0x00016550) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0001e7c1) fep_vkb_side_pane_g_ParamLimits

0xe29b,	// (0x0001cf0d) fep_hwr_candidate_pane_ParamLimits

0xe29b,	// (0x0001cf0d) fep_hwr_candidate_pane

0xe2c5,	// (0x0001cf37) fep_hwr_side_pane_ParamLimits

0xe2c5,	// (0x0001cf37) fep_hwr_side_pane

0xe2e5,	// (0x0001cf57) fep_hwr_top_pane_ParamLimits

0xe2e5,	// (0x0001cf57) fep_hwr_top_pane

0xe2fd,	// (0x0001cf6f) fep_hwr_write_pane_ParamLimits

0xe2fd,	// (0x0001cf6f) fep_hwr_write_pane

0xfb4f,	// (0x0001e7c1) fep_vkb_side_pane_g

0x7906,	// (0x00016578) fep_hwr_top_pane_g1

0x78f4,	// (0x00016566) fep_hwr_top_pane_g2

0xe329,	// (0x0001cf9b) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0001e79d) fep_hwr_top_pane_g

0xe33e,	// (0x0001cfb0) fep_hwr_top_text_pane

0x3a2f,	// (0x000126a1) fep_hwr_top_text_pane_g1

0x793c,	// (0x000165ae) fep_hwr_top_text_pane_t1

0xe434,	// (0x0001d0a6) fep_hwr_candidate_pane_g1

0x7b8f,	// (0x00016801) fep_vkb_keypad_pane_g3_ParamLimits

0x7b8f,	// (0x00016801) fep_vkb_keypad_pane_g3

0x7bb7,	// (0x00016829) fep_vkb_keypad_pane_g4_ParamLimits

0x7bb7,	// (0x00016829) fep_vkb_keypad_pane_g4

0x7c26,	// (0x00016898) fep_vkb_bottom_pane_g2_ParamLimits

0x7c26,	// (0x00016898) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0001e7c8) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0001e7c8) fep_vkb_bottom_pane_g

0x7876,	// (0x000164e8) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0001e7d2) cell_vkb_side_pane_g

0x7cb1,	// (0x00016923) cell_vkb_side_pane_t1

0x7cbf,	// (0x00016931) cell_vkb_side_pane_t1_copy1

0x7876,	// (0x000164e8) bg_fep_vkb_candidate_pane_g2

0x7deb,	// (0x00016a5d) cell_vkb_candidate_pane_ParamLimits

0x794a,	// (0x000165bc) aid_size_cell_vkb_ParamLimits

0x794a,	// (0x000165bc) aid_size_cell_vkb

0x7deb,	// (0x00016a5d) cell_vkb_candidate_pane

0xe44e,	// (0x0001d0c0) bg_popup_fep_shadow_pane_g1

0x79d8,	// (0x0001664a) fep_vkb_bottom_pane_ParamLimits

0x79d8,	// (0x0001664a) fep_vkb_bottom_pane

0x7a0e,	// (0x00016680) fep_vkb_candidate_pane_ParamLimits

0x7a0e,	// (0x00016680) fep_vkb_candidate_pane

0x7a2a,	// (0x0001669c) fep_vkb_keypad_pane_ParamLimits

0x7a2a,	// (0x0001669c) fep_vkb_keypad_pane

0x7a70,	// (0x000166e2) fep_vkb_side_pane_ParamLimits

0x7a70,	// (0x000166e2) fep_vkb_side_pane

0x7aac,	// (0x0001671e) fep_vkb_top_pane_ParamLimits

0x7aac,	// (0x0001671e) fep_vkb_top_pane

0x7ae8,	// (0x0001675a) fep_vkb_top_pane_g1_ParamLimits

0x7ae8,	// (0x0001675a) fep_vkb_top_pane_g1

0x7af7,	// (0x00016769) fep_vkb_top_pane_g2_ParamLimits

0x7af7,	// (0x00016769) fep_vkb_top_pane_g2

0x7b06,	// (0x00016778) fep_vkb_top_pane_g3_ParamLimits

0x7b06,	// (0x00016778) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0001e7b8) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0001e7b8) fep_vkb_top_pane_g

0x7b24,	// (0x00016796) fep_vkb_top_text_pane_ParamLimits

0x7b24,	// (0x00016796) fep_vkb_top_text_pane

0x7b35,	// (0x000167a7) fep_vkb_side_pane_g1_ParamLimits

0x7b35,	// (0x000167a7) fep_vkb_side_pane_g1

0x7b7e,	// (0x000167f0) grid_vkb_side_pane_ParamLimits

0x7b7e,	// (0x000167f0) grid_vkb_side_pane

0xe456,	// (0x0001d0c8) bg_popup_fep_shadow_pane_g2

0xe45f,	// (0x0001d0d1) bg_popup_fep_shadow_pane_g3

0xe467,	// (0x0001d0d9) bg_popup_fep_shadow_pane_g4

0xe470,	// (0x0001d0e2) bg_popup_fep_shadow_pane_g5

0xe47a,	// (0x0001d0ec) bg_popup_fep_shadow_pane_g6

0xe482,	// (0x0001d0f4) bg_popup_fep_shadow_pane_g7

0x33a9,	// (0x0001201b) bg_popup_fep_shadow_pane_g8

0x7bd5,	// (0x00016847) grid_vkb_keypad_number_pane_ParamLimits

0x7bd5,	// (0x00016847) grid_vkb_keypad_number_pane

0x7be5,	// (0x00016857) grid_vkb_keypad_pane_ParamLimits

0x7be5,	// (0x00016857) grid_vkb_keypad_pane

0x7c0b,	// (0x0001687d) fep_vkb_bottom_pane_g1_ParamLimits

0x7c0b,	// (0x0001687d) fep_vkb_bottom_pane_g1

0x7c34,	// (0x000168a6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7c34,	// (0x000168a6) grid_vkb_keypad_bottom_left_pane

0x7c49,	// (0x000168bb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7c49,	// (0x000168bb) grid_vkb_keypad_bottom_right_pane

0x7c5e,	// (0x000168d0) fep_vkb_top_text_pane_g1

0x7c79,	// (0x000168eb) fep_vkb_top_text_pane_t1

0x7c8e,	// (0x00016900) cell_vkb_side_pane_ParamLimits

0x7c8e,	// (0x00016900) cell_vkb_side_pane

0x7876,	// (0x000164e8) cell_vkb_side_pane_g1

0x7ccd,	// (0x0001693f) cell_vkb_keypad_pane_ParamLimits

0x7ccd,	// (0x0001693f) cell_vkb_keypad_pane

0x7d42,	// (0x000169b4) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0001e7e5) bg_popup_fep_shadow_pane_g

0x7876,	// (0x000164e8) cell_hwr_side_pane_g1

0x7876,	// (0x000164e8) cell_hwr_side_pane_g2

0x7d4c,	// (0x000169be) cell_vkb_keypad_pane_t1

0x7d5a,	// (0x000169cc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x7d5a,	// (0x000169cc) cell_vkb_keypad_bottom_left_pane

0x7d77,	// (0x000169e9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x7d77,	// (0x000169e9) cell_vkb_keypad_bottom_right_pane

0x7876,	// (0x000164e8) cell_vkb_keypad_bottom_left_pane_g1

0x7876,	// (0x000164e8) cell_vkb_keypad_bottom_right_pane_g1

0x7db0,	// (0x00016a22) cell_vkb_keypad_number_pane_ParamLimits

0x7db0,	// (0x00016a22) cell_vkb_keypad_number_pane

0x7dcf,	// (0x00016a41) cell_vkb_keypad_number_pane_g1

0x7dd9,	// (0x00016a4b) cell_vkb_keypad_number_pane_g2

0x7de2,	// (0x00016a54) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0001e7d7) cell_vkb_keypad_number_pane_g

0x7d4c,	// (0x000169be) cell_vkb_keypad_number_pane_t1

0x7e06,	// (0x00016a78) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x0001e7d2) cell_hwr_side_pane_g

0x7e1f,	// (0x00016a91) cell_hwr_side_pane_t1

0xe494,	// (0x0001d106) cell_hwr_side_pane_t1_copy1

0x7b16,	// (0x00016788) cell_hwr_candidate_pane_g1

0xe4a2,	// (0x0001d114) cell_hwr_candidate_pane_t1

0x7876,	// (0x000164e8) cell_vkb_candidate_pane_g2

0x7e63,	// (0x00016ad5) cell_vkb_candidate_pane_t1

0x78e6,	// (0x00016558) bg_popup_fep_shadow_pane_ParamLimits

0x78e6,	// (0x00016558) bg_popup_fep_shadow_pane

0xb26f,	// (0x00019ee1) bg_fep_hwr_top_pane_g4

0x7918,	// (0x0001658a) bg_hwr_side_pane_g1_ParamLimits

0x7918,	// (0x0001658a) bg_hwr_side_pane_g1

0xe37a,	// (0x0001cfec) cell_hwr_side_pane_ParamLimits

0xe37a,	// (0x0001cfec) cell_hwr_side_pane

0xe3b5,	// (0x0001d027) fep_hwr_write_pane_g1_ParamLimits

0xe3b5,	// (0x0001d027) fep_hwr_write_pane_g1

0xe3c2,	// (0x0001d034) fep_hwr_write_pane_g2_ParamLimits

0xe3c2,	// (0x0001d034) fep_hwr_write_pane_g2

0xe3cf,	// (0x0001d041) fep_hwr_write_pane_g3_ParamLimits

0xe3cf,	// (0x0001d041) fep_hwr_write_pane_g3

0xe3dd,	// (0x0001d04f) fep_hwr_write_pane_g4_ParamLimits

0xe3dd,	// (0x0001d04f) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0001e7a4) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0001e7a4) fep_hwr_write_pane_g

0xb26f,	// (0x00019ee1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xb26f,	// (0x00019ee1) bg_fep_hwr_candidate_pane_g2

0xe3f2,	// (0x0001d064) cell_hwr_candidate_pane_ParamLimits

0xe3f2,	// (0x0001d064) cell_hwr_candidate_pane

0xe434,	// (0x0001d0a6) fep_hwr_candidate_pane_g1_ParamLimits

0x7978,	// (0x000165ea) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7978,	// (0x000165ea) bg_popup_fep_shadow_pane_cp2

0x7b16,	// (0x00016788) fep_vkb_top_pane_g4_ParamLimits

0x7b16,	// (0x00016788) fep_vkb_top_pane_g4

0x7b5c,	// (0x000167ce) fep_vkb_side_pane_g2_ParamLimits

0x7b5c,	// (0x000167ce) fep_vkb_side_pane_g2

0xc7bf,	// (0x0001b431) list_setting_pane_t4_ParamLimits

0xc7bf,	// (0x0001b431) list_setting_pane_t4

0xc859,	// (0x0001b4cb) list_setting_number_pane_t5_ParamLimits

0xc859,	// (0x0001b4cb) list_setting_number_pane_t5

0x3a71,	// (0x000126e3) list_double_heading_pane_cp2_ParamLimits

0x3a71,	// (0x000126e3) list_double_heading_pane_cp2

0x3277,	// (0x00011ee9) list_double_heading_pane_g1_cp2_ParamLimits

0x3277,	// (0x00011ee9) list_double_heading_pane_g1_cp2

0x3283,	// (0x00011ef5) list_double_heading_pane_g2_cp2_ParamLimits

0x3283,	// (0x00011ef5) list_double_heading_pane_g2_cp2

0x7e71,	// (0x00016ae3) list_double_heading_pane_t1_cp2_ParamLimits

0x7e71,	// (0x00016ae3) list_double_heading_pane_t1_cp2

0x7e87,	// (0x00016af9) list_double_heading_pane_t2_cp2_ParamLimits

0x7e87,	// (0x00016af9) list_double_heading_pane_t2_cp2

0x235e,	// (0x00010fd0) aid_value_unit2

0xd688,	// (0x0001c2fa) popup_preview_fixed_window

0x270d,	// (0x0001137f) bg_popup_preview_window_pane_cp02

0x7e99,	// (0x00016b0b) list_preview_fixed_pane

0x7edf,	// (0x00016b51) list_empty_pane_fp_ParamLimits

0x7edf,	// (0x00016b51) list_empty_pane_fp

0x7edf,	// (0x00016b51) list_single_cale_day_pane_fp_ParamLimits

0x7edf,	// (0x00016b51) list_single_cale_day_pane_fp

0x7edf,	// (0x00016b51) list_single_graphic_heading_pane_fp_ParamLimits

0x7edf,	// (0x00016b51) list_single_graphic_heading_pane_fp

0x7edf,	// (0x00016b51) list_single_graphic_pane_fp_ParamLimits

0x7edf,	// (0x00016b51) list_single_graphic_pane_fp

0x7edf,	// (0x00016b51) list_single_heading_pane_fp_ParamLimits

0x7edf,	// (0x00016b51) list_single_heading_pane_fp

0x7edf,	// (0x00016b51) list_single_pane_fp_ParamLimits

0x7edf,	// (0x00016b51) list_single_pane_fp

0x7ef4,	// (0x00016b66) list_single_pane_fp_g1_ParamLimits

0x7ef4,	// (0x00016b66) list_single_pane_fp_g1

0xd02c,	// (0x0001bc9e) list_single_pane_fp_g2_ParamLimits

0xd02c,	// (0x0001bc9e) list_single_pane_fp_g2

0xd038,	// (0x0001bcaa) list_single_pane_fp_g3_ParamLimits

0xd038,	// (0x0001bcaa) list_single_pane_fp_g3

0x7f14,	// (0x00016b86) list_single_pane_fp_g4_ParamLimits

0x7f14,	// (0x00016b86) list_single_pane_fp_g4

0x0003,

0xfb94,	// (0x0001e806) list_single_pane_fp_g_ParamLimits

0xfb94,	// (0x0001e806) list_single_pane_fp_g

0xd04c,	// (0x0001bcbe) list_single_pane_fp_t1_ParamLimits

0xd04c,	// (0x0001bcbe) list_single_pane_fp_t1

0xd063,	// (0x0001bcd5) list_single_graphic_pane_fp_g1_ParamLimits

0xd063,	// (0x0001bcd5) list_single_graphic_pane_fp_g1

0x7ef4,	// (0x00016b66) list_single_graphic_pane_fp_g2_ParamLimits

0x7ef4,	// (0x00016b66) list_single_graphic_pane_fp_g2

0xd02c,	// (0x0001bc9e) list_single_graphic_pane_fp_g3_ParamLimits

0xd02c,	// (0x0001bc9e) list_single_graphic_pane_fp_g3

0xd038,	// (0x0001bcaa) list_single_graphic_pane_fp_g4_ParamLimits

0xd038,	// (0x0001bcaa) list_single_graphic_pane_fp_g4

0x7f14,	// (0x00016b86) list_single_graphic_pane_fp_g5_ParamLimits

0x7f14,	// (0x00016b86) list_single_graphic_pane_fp_g5

0x0004,

0xfb9d,	// (0x0001e80f) list_single_graphic_pane_fp_g_ParamLimits

0xfb9d,	// (0x0001e80f) list_single_graphic_pane_fp_g

0xd06f,	// (0x0001bce1) list_single_graphic_pane_fp_t1_ParamLimits

0xd06f,	// (0x0001bce1) list_single_graphic_pane_fp_t1

0xd063,	// (0x0001bcd5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd063,	// (0x0001bcd5) list_single_graphic_heading_pane_fp_g1

0x7ef4,	// (0x00016b66) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7ef4,	// (0x00016b66) list_single_graphic_heading_pane_fp_g2

0xd02c,	// (0x0001bc9e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd02c,	// (0x0001bc9e) list_single_graphic_heading_pane_fp_g3

0xd038,	// (0x0001bcaa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd038,	// (0x0001bcaa) list_single_graphic_heading_pane_fp_g4

0x7f14,	// (0x00016b86) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7f14,	// (0x00016b86) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x0001e80f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x0001e80f) list_single_graphic_heading_pane_fp_g

0xd085,	// (0x0001bcf7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd085,	// (0x0001bcf7) list_single_graphic_heading_pane_fp_t1

0xd09b,	// (0x0001bd0d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd09b,	// (0x0001bd0d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0001e81a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0001e81a) list_single_graphic_heading_pane_fp_t

0xd0ad,	// (0x0001bd1f) list_single_cale_day_pane_fp_g1_ParamLimits

0xd0ad,	// (0x0001bd1f) list_single_cale_day_pane_fp_g1

0x7fb9,	// (0x00016c2b) list_single_cale_day_pane_fp_g2_ParamLimits

0x7fb9,	// (0x00016c2b) list_single_cale_day_pane_fp_g2

0xd0e5,	// (0x0001bd57) list_single_cale_day_pane_fp_g3_ParamLimits

0xd0e5,	// (0x0001bd57) list_single_cale_day_pane_fp_g3

0xd10d,	// (0x0001bd7f) list_single_cale_day_pane_fp_g4_ParamLimits

0xd10d,	// (0x0001bd7f) list_single_cale_day_pane_fp_g4

0xd131,	// (0x0001bda3) list_single_cale_day_pane_fp_g5_ParamLimits

0xd131,	// (0x0001bda3) list_single_cale_day_pane_fp_g5

0x0004,

0xfbad,	// (0x0001e81f) list_single_cale_day_pane_fp_g_ParamLimits

0xfbad,	// (0x0001e81f) list_single_cale_day_pane_fp_g

0xd155,	// (0x0001bdc7) list_single_cale_day_pane_fp_t1_ParamLimits

0xd155,	// (0x0001bdc7) list_single_cale_day_pane_fp_t1

0xd17b,	// (0x0001bded) list_single_cale_day_pane_fp_t2_ParamLimits

0xd17b,	// (0x0001bded) list_single_cale_day_pane_fp_t2

0xd194,	// (0x0001be06) list_single_cale_day_pane_fp_t3_ParamLimits

0xd194,	// (0x0001be06) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb8,	// (0x0001e82a) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb8,	// (0x0001e82a) list_single_cale_day_pane_fp_t

0x7ef4,	// (0x00016b66) list_empty_pane_fp_g1_ParamLimits

0x7ef4,	// (0x00016b66) list_empty_pane_fp_g1

0xd1ad,	// (0x0001be1f) list_empty_pane_fp_t1

0xd1bb,	// (0x0001be2d) list_empty_pane_fp_t2

0x0001,

0xfbbf,	// (0x0001e831) list_empty_pane_fp_t

0x7ef4,	// (0x00016b66) list_single_heading_pane_fp_g1_ParamLimits

0x7ef4,	// (0x00016b66) list_single_heading_pane_fp_g1

0xd02c,	// (0x0001bc9e) list_single_heading_pane_fp_g2_ParamLimits

0xd02c,	// (0x0001bc9e) list_single_heading_pane_fp_g2

0xd038,	// (0x0001bcaa) list_single_heading_pane_fp_g3_ParamLimits

0xd038,	// (0x0001bcaa) list_single_heading_pane_fp_g3

0x0002,

0xfbc4,	// (0x0001e836) list_single_heading_pane_fp_g_ParamLimits

0xfbc4,	// (0x0001e836) list_single_heading_pane_fp_g

0xd1c9,	// (0x0001be3b) list_single_heading_pane_fp_t1_ParamLimits

0xd1c9,	// (0x0001be3b) list_single_heading_pane_fp_t1

0xd1db,	// (0x0001be4d) list_single_heading_pane_fp_t2_ParamLimits

0xd1db,	// (0x0001be4d) list_single_heading_pane_fp_t2

0x0001,

0xfbcb,	// (0x0001e83d) list_single_heading_pane_fp_t_ParamLimits

0xfbcb,	// (0x0001e83d) list_single_heading_pane_fp_t

0x35da,	// (0x0001224c) aid_size_cell_fast

0x267d,	// (0x000112ef) soft_indicator_pane_cp1_t1

0x3617,	// (0x00012289) cell_app_pane_cp2_ParamLimits

0x3617,	// (0x00012289) cell_app_pane_cp2

0xe284,	// (0x0001cef6) fep_hwr_candidate_drop_down_list_pane

0xb27d,	// (0x00019eef) fep_hwr_candidate_pane_g3_ParamLimits

0xb27d,	// (0x00019eef) fep_hwr_candidate_pane_g3

0xb28a,	// (0x00019efc) fep_hwr_candidate_pane_g4_ParamLimits

0xb28a,	// (0x00019efc) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001e7b1) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0001e7b1) fep_hwr_candidate_pane_g

0x79fd,	// (0x0001666f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x79fd,	// (0x0001666f) fep_vkb_candidate_drop_down_list_pane

0x7e0e,	// (0x00016a80) fep_vkb_candidate_pane_g3

0x7e16,	// (0x00016a88) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0001e7de) fep_vkb_candidate_pane_g

0x7b16,	// (0x00016788) cell_hwr_candidate_pane_g1_ParamLimits

0x8127,	// (0x00016d99) cell_hwr_candidate_pane_g3_ParamLimits

0x8127,	// (0x00016d99) cell_hwr_candidate_pane_g3

0x8148,	// (0x00016dba) cell_hwr_candidate_pane_g4_ParamLimits

0x8148,	// (0x00016dba) cell_hwr_candidate_pane_g4

0x0002,

0xfb86,	// (0x0001e7f8) cell_hwr_candidate_pane_g_ParamLimits

0xfb86,	// (0x0001e7f8) cell_hwr_candidate_pane_g

0x7e2d,	// (0x00016a9f) cell_vkb_candidate_pane_g3_ParamLimits

0x7e2d,	// (0x00016a9f) cell_vkb_candidate_pane_g3

0x7e48,	// (0x00016aba) cell_vkb_candidate_pane_g4_ParamLimits

0x7e48,	// (0x00016aba) cell_vkb_candidate_pane_g4

0x80d1,	// (0x00016d43) cell_app_pane_cp2_g1_ParamLimits

0x80d1,	// (0x00016d43) cell_app_pane_cp2_g1

0x80ef,	// (0x00016d61) cell_app_pane_cp2_g2_ParamLimits

0x80ef,	// (0x00016d61) cell_app_pane_cp2_g2

0x0001,

0xfbd0,	// (0x0001e842) cell_app_pane_cp2_g_ParamLimits

0xfbd0,	// (0x0001e842) cell_app_pane_cp2_g

0x80fb,	// (0x00016d6d) cell_app_pane_cp2_t1_ParamLimits

0x80fb,	// (0x00016d6d) cell_app_pane_cp2_t1

0x3251,	// (0x00011ec3) grid_highlight_pane_cp1_ParamLimits

0x3251,	// (0x00011ec3) grid_highlight_pane_cp1

0xe4c0,	// (0x0001d132) cell_hwr_candidate_pane_cp1_ParamLimits

0xe4c0,	// (0x0001d132) cell_hwr_candidate_pane_cp1

0x7b16,	// (0x00016788) fep_hwr_candidate_drop_down_list_pane_g1

0x810d,	// (0x00016d7f) fep_hwr_candidate_drop_down_list_pane_g2

0x811a,	// (0x00016d8c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0001e847) fep_hwr_candidate_drop_down_list_pane_g

0xe4df,	// (0x0001d151) fep_hwr_candidate_drop_down_list_scroll_pane

0xe4e8,	// (0x0001d15a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe4e8,	// (0x0001d15a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe4f5,	// (0x0001d167) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe4f5,	// (0x0001d167) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe502,	// (0x0001d174) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe502,	// (0x0001d174) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7e2d,	// (0x00016a9f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e2d,	// (0x00016a9f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7e48,	// (0x00016aba) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e48,	// (0x00016aba) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe50f,	// (0x0001d181) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe50f,	// (0x0001d181) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe52a,	// (0x0001d19c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe52a,	// (0x0001d19c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe545,	// (0x0001d1b7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe545,	// (0x0001d1b7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0001e84e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0001e84e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8169,	// (0x00016ddb) cell_vkb_candidate_pane_cp1_ParamLimits

0x8169,	// (0x00016ddb) cell_vkb_candidate_pane_cp1

0x7b16,	// (0x00016788) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7b16,	// (0x00016788) fep_vkb_candidate_drop_down_list_pane_g1

0x810d,	// (0x00016d7f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x810d,	// (0x00016d7f) fep_vkb_candidate_drop_down_list_pane_g2

0x811a,	// (0x00016d8c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x811a,	// (0x00016d8c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0001e847) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0001e847) fep_vkb_candidate_drop_down_list_pane_g

0x8189,	// (0x00016dfb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8189,	// (0x00016dfb) fep_vkb_candidate_drop_down_list_scroll_pane

0x8196,	// (0x00016e08) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8196,	// (0x00016e08) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x81a3,	// (0x00016e15) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x81a3,	// (0x00016e15) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x81af,	// (0x00016e21) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x81af,	// (0x00016e21) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8127,	// (0x00016d99) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8127,	// (0x00016d99) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8148,	// (0x00016dba) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8148,	// (0x00016dba) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x81bb,	// (0x00016e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x81bb,	// (0x00016e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x81dc,	// (0x00016e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x81dc,	// (0x00016e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x81fd,	// (0x00016e6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x81fd,	// (0x00016e6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbed,	// (0x0001e85f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbed,	// (0x0001e85f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x2394,	// (0x00011006) title_pane_g1_ParamLimits

0x23a1,	// (0x00011013) title_pane_g2_ParamLimits

0xf592,	// (0x0001e204) title_pane_g_ParamLimits

0x3a27,	// (0x00012699) aid_call2_pane

0x3a1f,	// (0x00012691) aid_call_pane

0x3a2f,	// (0x000126a1) popup_clock_analogue_window_g1

0x3a2f,	// (0x000126a1) popup_clock_analogue_window_g2

0xd9f1,	// (0x0001c663) popup_clock_analogue_window_g3

0xd9fa,	// (0x0001c66c) popup_clock_analogue_window_g4

0x2380,	// (0x00010ff2) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0001e3ae) popup_clock_analogue_window_g

0xda02,	// (0x0001c674) popup_clock_analogue_window_t1

0xda10,	// (0x0001c682) clock_digital_number_pane_ParamLimits

0xda10,	// (0x0001c682) clock_digital_number_pane

0xda1c,	// (0x0001c68e) clock_digital_number_pane_cp02_ParamLimits

0xda1c,	// (0x0001c68e) clock_digital_number_pane_cp02

0xda28,	// (0x0001c69a) clock_digital_number_pane_cp03_ParamLimits

0xda28,	// (0x0001c69a) clock_digital_number_pane_cp03

0xda34,	// (0x0001c6a6) clock_digital_number_pane_cp04_ParamLimits

0xda34,	// (0x0001c6a6) clock_digital_number_pane_cp04

0xda40,	// (0x0001c6b2) clock_digital_separator_pane_ParamLimits

0xda40,	// (0x0001c6b2) clock_digital_separator_pane

0xda4c,	// (0x0001c6be) popup_clock_digital_window_t1_ParamLimits

0xda4c,	// (0x0001c6be) popup_clock_digital_window_t1

0x2380,	// (0x00010ff2) clock_digital_number_pane_g1

0x2380,	// (0x00010ff2) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0001e3b9) clock_digital_number_pane_g

0x2380,	// (0x00010ff2) clock_digital_separator_pane_g1

0x2380,	// (0x00010ff2) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0001e3b9) clock_digital_separator_pane_g

0x49e6,	// (0x00013658) aid_fill_nsta_ParamLimits

0x4b28,	// (0x0001379a) indicator_nsta_pane_ParamLimits

0x4c9a,	// (0x0001390c) popup_clock_analogue_window

0x4c9a,	// (0x0001390c) popup_clock_digital_window

0x246a,	// (0x000110dc) grid_indicator_nsta_pane_ParamLimits

0x7238,	// (0x00015eaa) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0001e73e) clock_nsta_pane_t

0xd9b5,	// (0x0001c627) aid_size_max_handle

0xd9bf,	// (0x0001c631) aid_size_min_handle

0x409b,	// (0x00012d0d) editor_scroll_pane

0x8218,	// (0x00016e8a) ex_editor_pane

0x3548,	// (0x000121ba) scroll_pane_cp13

0x2c8f,	// (0x00011901) scroll_pane_cp14

0x3a59,	// (0x000126cb) scroll_pane_cp36

0x3a85,	// (0x000126f7) list_single_graphic_hl_pane_cp2_ParamLimits

0x3a85,	// (0x000126f7) list_single_graphic_hl_pane_cp2

0x6624,	// (0x00015296) list_single_graphic_hl_pane_ParamLimits

0x6624,	// (0x00015296) list_single_graphic_hl_pane

0xd1f1,	// (0x0001be63) aid_size_min_hl_cp1

0x8229,	// (0x00016e9b) list_highlight_pane_cp34_ParamLimits

0x8229,	// (0x00016e9b) list_highlight_pane_cp34

0x823a,	// (0x00016eac) list_single_graphic_hl_pane_g1_ParamLimits

0x823a,	// (0x00016eac) list_single_graphic_hl_pane_g1

0xd1fa,	// (0x0001be6c) list_single_graphic_hl_pane_g2_ParamLimits

0xd1fa,	// (0x0001be6c) list_single_graphic_hl_pane_g2

0xd1fa,	// (0x0001be6c) list_single_graphic_hl_pane_g3_ParamLimits

0xd1fa,	// (0x0001be6c) list_single_graphic_hl_pane_g3

0xcc06,	// (0x0001b878) list_single_graphic_hl_pane_g4_ParamLimits

0xcc06,	// (0x0001b878) list_single_graphic_hl_pane_g4

0xd206,	// (0x0001be78) list_single_graphic_hl_pane_g5_ParamLimits

0xd206,	// (0x0001be78) list_single_graphic_hl_pane_g5

0x0004,

0xfbfe,	// (0x0001e870) list_single_graphic_hl_pane_g_ParamLimits

0xfbfe,	// (0x0001e870) list_single_graphic_hl_pane_g

0xd21a,	// (0x0001be8c) list_single_graphic_hl_pane_t1_ParamLimits

0xd21a,	// (0x0001be8c) list_single_graphic_hl_pane_t1

0x827d,	// (0x00016eef) aid_size_min_hl_cp2

0x8286,	// (0x00016ef8) list_highlight_pane_cp34_cp2_ParamLimits

0x8286,	// (0x00016ef8) list_highlight_pane_cp34_cp2

0x823a,	// (0x00016eac) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x823a,	// (0x00016eac) list_single_graphic_hl_pane_g1_cp2

0x8293,	// (0x00016f05) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8293,	// (0x00016f05) list_single_graphic_hl_pane_g2_cp2

0x829f,	// (0x00016f11) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x829f,	// (0x00016f11) list_single_graphic_hl_pane_g3_cp2

0x4e73,	// (0x00013ae5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4e73,	// (0x00013ae5) list_single_graphic_hl_pane_g4_cp2

0x8253,	// (0x00016ec5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8253,	// (0x00016ec5) list_single_graphic_hl_pane_g5_cp2

0xdcfe,	// (0x0001c970) control_pane_g4_ParamLimits

0xdcfe,	// (0x0001c970) control_pane_g4

0x4425,	// (0x00013097) bg_popup_sub_pane_cp10_ParamLimits

0x7880,	// (0x000164f2) list_choice_list_pane_ParamLimits

0x788f,	// (0x00016501) scroll_pane_cp23

0x270d,	// (0x0001137f) bg_popup_preview_window_pane_cp02_ParamLimits

0x7e99,	// (0x00016b0b) list_preview_fixed_pane_ParamLimits

0x7eaf,	// (0x00016b21) list_preview_fixed_pane_cp_ParamLimits

0x7eaf,	// (0x00016b21) list_preview_fixed_pane_cp

0x7ebb,	// (0x00016b2d) popup_preview_fixed_window_g1_ParamLimits

0x7ebb,	// (0x00016b2d) popup_preview_fixed_window_g1

0x7ec7,	// (0x00016b39) popup_preview_fixed_window_g2_ParamLimits

0x7ec7,	// (0x00016b39) popup_preview_fixed_window_g2

0x0002,

0xfb8d,	// (0x0001e7ff) popup_preview_fixed_window_g_ParamLimits

0xfb8d,	// (0x0001e7ff) popup_preview_fixed_window_g

0xd929,	// (0x0001c59b) aid_navi_side_left_pane_ParamLimits

0xd93e,	// (0x0001c5b0) aid_navi_side_right_pane_ParamLimits

0xd956,	// (0x0001c5c8) navi_icon_pane_stacon_ParamLimits

0xd96a,	// (0x0001c5dc) navi_navi_pane_stacon_ParamLimits

0xd956,	// (0x0001c5c8) navi_text_pane_stacon_ParamLimits

0x2376,	// (0x00010fe8) main_text_info_pane

0x82c3,	// (0x00016f35) listscroll_text_info_pane

0x82cb,	// (0x00016f3d) list_text_info_pane_ParamLimits

0x82cb,	// (0x00016f3d) list_text_info_pane

0x82da,	// (0x00016f4c) scroll_pane_cp24_ParamLimits

0x82da,	// (0x00016f4c) scroll_pane_cp24

0x82f8,	// (0x00016f6a) list_text_info_pane_t1_ParamLimits

0x82f8,	// (0x00016f6a) list_text_info_pane_t1

0x446f,	// (0x000130e1) popup_fast_swap2_window_ParamLimits

0x446f,	// (0x000130e1) popup_fast_swap2_window

0x8329,	// (0x00016f9b) aid_size_cell_fast2

0x2376,	// (0x00010fe8) bg_popup_window_pane_cp17

0x5417,	// (0x00014089) heading_pane_cp2

0x2959,	// (0x000115cb) listscroll_fast2_pane

0x8333,	// (0x00016fa5) grid_fast2_pane

0x833d,	// (0x00016faf) listscroll_fast2_pane_g1

0x8345,	// (0x00016fb7) listscroll_fast2_pane_g2

0x0001,

0xfc09,	// (0x0001e87b) listscroll_fast2_pane_g

0x3548,	// (0x000121ba) scroll_pane_cp26

0x834f,	// (0x00016fc1) cell_fast2_pane_ParamLimits

0x834f,	// (0x00016fc1) cell_fast2_pane

0x8364,	// (0x00016fd6) cell_fast2_pane_g1

0x836d,	// (0x00016fdf) cell_fast2_pane_g2

0x8376,	// (0x00016fe8) cell_fast2_pane_g3

0x0002,

0xfc0e,	// (0x0001e880) cell_fast2_pane_g

0x2a4c,	// (0x000116be) grid_highlight_pane_cp9

0x2a61,	// (0x000116d3) main_eswt_pane_ParamLimits

0x2a61,	// (0x000116d3) main_eswt_pane

0x82ef,	// (0x00016f61) list_single_text_info_pane

0x837e,	// (0x00016ff0) eswt_ctrl_button_pane

0x837e,	// (0x00016ff0) eswt_ctrl_canvas_pane

0x8386,	// (0x00016ff8) eswt_ctrl_combo_pane

0x837e,	// (0x00016ff0) eswt_ctrl_default_pane

0x837e,	// (0x00016ff0) eswt_ctrl_label_pane

0x838e,	// (0x00017000) eswt_ctrl_wait_pane

0x8396,	// (0x00017008) eswt_shell_pane

0x2376,	// (0x00010fe8) listscroll_eswt_app_pane

0x83b6,	// (0x00017028) popup_eswt_tasktip_window_ParamLimits

0x83b6,	// (0x00017028) popup_eswt_tasktip_window

0x5017,	// (0x00013c89) bg_popup_window_pane_cp18

0x83c7,	// (0x00017039) eswt_control_pane_g1_ParamLimits

0x83c7,	// (0x00017039) eswt_control_pane_g1

0x83d4,	// (0x00017046) eswt_control_pane_g2_ParamLimits

0x83d4,	// (0x00017046) eswt_control_pane_g2

0x83e1,	// (0x00017053) eswt_control_pane_g3_ParamLimits

0x83e1,	// (0x00017053) eswt_control_pane_g3

0x83ee,	// (0x00017060) eswt_control_pane_g4_ParamLimits

0x83ee,	// (0x00017060) eswt_control_pane_g4

0x0003,

0xfc15,	// (0x0001e887) eswt_control_pane_g_ParamLimits

0xfc15,	// (0x0001e887) eswt_control_pane_g

0x3251,	// (0x00011ec3) bg_button_pane_ParamLimits

0x3251,	// (0x00011ec3) bg_button_pane

0x2a61,	// (0x000116d3) common_borders_pane_copy2_ParamLimits

0x2a61,	// (0x000116d3) common_borders_pane_copy2

0x83fb,	// (0x0001706d) control_button_pane_g1_ParamLimits

0x83fb,	// (0x0001706d) control_button_pane_g1

0x8407,	// (0x00017079) control_button_pane_g2_ParamLimits

0x8407,	// (0x00017079) control_button_pane_g2

0x8413,	// (0x00017085) control_button_pane_g3_ParamLimits

0x8413,	// (0x00017085) control_button_pane_g3

0x0002,

0xfc1e,	// (0x0001e890) control_button_pane_g_ParamLimits

0xfc1e,	// (0x0001e890) control_button_pane_g

0x8427,	// (0x00017099) control_button_pane_t1

0x8435,	// (0x000170a7) control_button_pane_t2

0x0001,

0xfc25,	// (0x0001e897) control_button_pane_t

0x4efd,	// (0x00013b6f) bg_button_pane_g1

0x4f0d,	// (0x00013b7f) bg_button_pane_g2

0x4f05,	// (0x00013b77) bg_button_pane_g3

0x4f1d,	// (0x00013b8f) bg_button_pane_g4

0x4f15,	// (0x00013b87) bg_button_pane_g5

0x4f25,	// (0x00013b97) bg_button_pane_g6

0x4f2d,	// (0x00013b9f) bg_button_pane_g7

0x4f3d,	// (0x00013baf) bg_button_pane_g8

0x4f35,	// (0x00013ba7) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0001e511) bg_button_pane_g

0x783b,	// (0x000164ad) common_borders_pane_ParamLimits

0x783b,	// (0x000164ad) common_borders_pane

0x83c7,	// (0x00017039) eswt_control_pane_g1_copy1_ParamLimits

0x83c7,	// (0x00017039) eswt_control_pane_g1_copy1

0x83d4,	// (0x00017046) eswt_control_pane_g2_copy1_ParamLimits

0x83d4,	// (0x00017046) eswt_control_pane_g2_copy1

0x83e1,	// (0x00017053) eswt_control_pane_g3_copy1_ParamLimits

0x83e1,	// (0x00017053) eswt_control_pane_g3_copy1

0x83ee,	// (0x00017060) eswt_control_pane_g4_copy1_ParamLimits

0x83ee,	// (0x00017060) eswt_control_pane_g4_copy1

0x7876,	// (0x000164e8) bg_eswt_ctrl_canvas_pane_g1

0x783b,	// (0x000164ad) common_borders_pane_cp2_ParamLimits

0x783b,	// (0x000164ad) common_borders_pane_cp2

0x783b,	// (0x000164ad) common_borders_pane_cp3_ParamLimits

0x783b,	// (0x000164ad) common_borders_pane_cp3

0x8443,	// (0x000170b5) separator_horizontal_pane

0x844b,	// (0x000170bd) separator_vertical_pane

0x83c7,	// (0x00017039) eswt_control_pane_g1_copy2_ParamLimits

0x83c7,	// (0x00017039) eswt_control_pane_g1_copy2

0x83d4,	// (0x00017046) eswt_control_pane_g2_copy2_ParamLimits

0x83d4,	// (0x00017046) eswt_control_pane_g2_copy2

0x83e1,	// (0x00017053) eswt_control_pane_g3_copy2_ParamLimits

0x83e1,	// (0x00017053) eswt_control_pane_g3_copy2

0x83ee,	// (0x00017060) eswt_control_pane_g4_copy2_ParamLimits

0x83ee,	// (0x00017060) eswt_control_pane_g4_copy2

0x2376,	// (0x00010fe8) common_borders_pane_cp4

0x8454,	// (0x000170c6) separator_horizontal_pane_g1

0x845d,	// (0x000170cf) separator_horizontal_pane_g2

0x8466,	// (0x000170d8) separator_horizontal_pane_g3

0x0002,

0xfc2a,	// (0x0001e89c) separator_horizontal_pane_g

0x83c7,	// (0x00017039) eswt_control_pane_g1_copy3_ParamLimits

0x83c7,	// (0x00017039) eswt_control_pane_g1_copy3

0x83d4,	// (0x00017046) eswt_control_pane_g2_copy3_ParamLimits

0x83d4,	// (0x00017046) eswt_control_pane_g2_copy3

0x83e1,	// (0x00017053) eswt_control_pane_g3_copy3_ParamLimits

0x83e1,	// (0x00017053) eswt_control_pane_g3_copy3

0x83ee,	// (0x00017060) eswt_control_pane_g4_copy3_ParamLimits

0x83ee,	// (0x00017060) eswt_control_pane_g4_copy3

0x2376,	// (0x00010fe8) common_borders_pane_cp5

0x846f,	// (0x000170e1) separator_vertical_pane_g1

0x8478,	// (0x000170ea) separator_vertical_pane_g2

0x8481,	// (0x000170f3) separator_vertical_pane_g3

0x0002,

0xfc31,	// (0x0001e8a3) separator_vertical_pane_g

0x83c7,	// (0x00017039) eswt_control_pane_g1_copy4_ParamLimits

0x83c7,	// (0x00017039) eswt_control_pane_g1_copy4

0x83d4,	// (0x00017046) eswt_control_pane_g2_copy4_ParamLimits

0x83d4,	// (0x00017046) eswt_control_pane_g2_copy4

0x83e1,	// (0x00017053) eswt_control_pane_g3_copy4_ParamLimits

0x83e1,	// (0x00017053) eswt_control_pane_g3_copy4

0x83ee,	// (0x00017060) eswt_control_pane_g4_copy4_ParamLimits

0x83ee,	// (0x00017060) eswt_control_pane_g4_copy4

0x848a,	// (0x000170fc) eswt_ctrl_combo_button_pane

0x8492,	// (0x00017104) eswt_ctrl_input_pane

0x849a,	// (0x0001710c) popup_choice_list_window_cp70

0x84a2,	// (0x00017114) eswt_ctrl_input_pane_t1

0x2376,	// (0x00010fe8) input_focus_pane_cp70

0x783b,	// (0x000164ad) bg_button_pane_cp70_ParamLimits

0x783b,	// (0x000164ad) bg_button_pane_cp70

0x84b0,	// (0x00017122) eswt_ctrl_combo_button_pane_g1

0x84b8,	// (0x0001712a) wait_bar_pane_cp70

0x5017,	// (0x00013c89) bg_popup_window_pane_cp70_ParamLimits

0x5017,	// (0x00013c89) bg_popup_window_pane_cp70

0x84c0,	// (0x00017132) popup_eswt_tasktip_window_t1

0x84d6,	// (0x00017148) wait_bar_pane_cp71_ParamLimits

0x84d6,	// (0x00017148) wait_bar_pane_cp71

0x84e2,	// (0x00017154) grid_eswt_app_pane

0x3861,	// (0x000124d3) scroll_pane_cp70

0x84eb,	// (0x0001715d) cell_eswt_app_pane_ParamLimits

0x84eb,	// (0x0001715d) cell_eswt_app_pane

0x851b,	// (0x0001718d) cell_eswt_app_pane_g1_ParamLimits

0x851b,	// (0x0001718d) cell_eswt_app_pane_g1

0x854a,	// (0x000171bc) cell_eswt_app_pane_g2_ParamLimits

0x854a,	// (0x000171bc) cell_eswt_app_pane_g2

0x0001,

0xfc38,	// (0x0001e8aa) cell_eswt_app_pane_g_ParamLimits

0xfc38,	// (0x0001e8aa) cell_eswt_app_pane_g

0x8573,	// (0x000171e5) cell_eswt_app_pane_t1_ParamLimits

0x8573,	// (0x000171e5) cell_eswt_app_pane_t1

0x85a5,	// (0x00017217) grid_highlight_pane_cp70_ParamLimits

0x85a5,	// (0x00017217) grid_highlight_pane_cp70

0x3f70,	// (0x00012be2) set_content_pane_g1

0x4347,	// (0x00012fb9) status_small_volume_pane

0xe560,	// (0x0001d1d2) status_small_volume_pane_g1

0xe568,	// (0x0001d1da) volume_small2_pane

0xe571,	// (0x0001d1e3) volume_small2_pane_g1

0xe57a,	// (0x0001d1ec) volume_small2_pane_g2

0xe583,	// (0x0001d1f5) volume_small2_pane_g3

0xe58c,	// (0x0001d1fe) volume_small2_pane_g4

0xe595,	// (0x0001d207) volume_small2_pane_g5

0xe59e,	// (0x0001d210) volume_small2_pane_g6

0xe5a7,	// (0x0001d219) volume_small2_pane_g7

0xe5b0,	// (0x0001d222) volume_small2_pane_g8

0xe5b9,	// (0x0001d22b) volume_small2_pane_g9

0xe5c2,	// (0x0001d234) volume_small2_pane_g10

0x0009,

0xfc3d,	// (0x0001e8af) volume_small2_pane_g

0x7c5e,	// (0x000168d0) fep_vkb_top_text_pane_g1_ParamLimits

0x7c79,	// (0x000168eb) fep_vkb_top_text_pane_t1_ParamLimits

0x7ed3,	// (0x00016b45) popup_preview_fixed_window_g3_ParamLimits

0x7ed3,	// (0x00016b45) popup_preview_fixed_window_g3

0x491c,	// (0x0001358e) popup_toolbar_trans_pane

0x638e,	// (0x00015000) aid_height_set_list_ParamLimits

0x639f,	// (0x00015011) aid_size_parent_ParamLimits

0x4425,	// (0x00013097) list_highlight_pane_cp2_ParamLimits

0x3f70,	// (0x00012be2) set_content_pane_g1_ParamLimits

0xcd86,	// (0x0001b9f8) list_single_image_pane_ParamLimits

0xcd86,	// (0x0001b9f8) list_single_image_pane

0x85b1,	// (0x00017223) aid_size_cell_image_ParamLimits

0x85b1,	// (0x00017223) aid_size_cell_image

0x85be,	// (0x00017230) grid_single_image_pane_ParamLimits

0x85be,	// (0x00017230) grid_single_image_pane

0x2eb4,	// (0x00011b26) list_single_image_pane_g1_ParamLimits

0x2eb4,	// (0x00011b26) list_single_image_pane_g1

0x7f00,	// (0x00016b72) list_single_image_pane_g2_ParamLimits

0x7f00,	// (0x00016b72) list_single_image_pane_g2

0x0001,

0xfc52,	// (0x0001e8c4) list_single_image_pane_g_ParamLimits

0xfc52,	// (0x0001e8c4) list_single_image_pane_g

0x2deb,	// (0x00011a5d) list_single_image_pane_t1_ParamLimits

0x2deb,	// (0x00011a5d) list_single_image_pane_t1

0x85cc,	// (0x0001723e) cell_image_list_pane_ParamLimits

0x85cc,	// (0x0001723e) cell_image_list_pane

0x85df,	// (0x00017251) cell_image_list_pane_g1

0x85e8,	// (0x0001725a) cell_image_list_pane_g2

0x0001,

0xfc57,	// (0x0001e8c9) cell_image_list_pane_g

0x85f1,	// (0x00017263) aid_size_cell_tb_trans_pane

0x3251,	// (0x00011ec3) bg_tb_trans_pane

0x8603,	// (0x00017275) grid_tb_trans_pane

0x4efd,	// (0x00013b6f) bg_tb_trans_pane_g1

0x4f0d,	// (0x00013b7f) bg_tb_trans_pane_g2

0x4f05,	// (0x00013b77) bg_tb_trans_pane_g3

0x4f1d,	// (0x00013b8f) bg_tb_trans_pane_g4

0x4f15,	// (0x00013b87) bg_tb_trans_pane_g5

0x4f3d,	// (0x00013baf) bg_tb_trans_pane_g6

0x4f35,	// (0x00013ba7) bg_tb_trans_pane_g7

0x4f25,	// (0x00013b97) bg_tb_trans_pane_g8

0x4f2d,	// (0x00013b9f) bg_tb_trans_pane_g9

0x0008,

0xfc5c,	// (0x0001e8ce) bg_tb_trans_pane_g

0x8617,	// (0x00017289) cell_toolbar_trans_pane_ParamLimits

0x8617,	// (0x00017289) cell_toolbar_trans_pane

0x7876,	// (0x000164e8) cell_toolbar_trans_pane_g1

0x73f0,	// (0x00016062) list_form2_midp_pane_t1

0x73fe,	// (0x00016070) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0001e777) list_form2_midp_pane_t

0x740c,	// (0x0001607e) scroll_pane_cp51_ParamLimits

0x7617,	// (0x00016289) form2_midp_wait_pane_g1

0x7620,	// (0x00016292) form2_midp_wait_pane_g2

0x7629,	// (0x0001629b) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0001e78c) form2_midp_wait_pane_g

0x246a,	// (0x000110dc) list_highlight_pane_cp21_ParamLimits

0x7680,	// (0x000162f2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x768f,	// (0x00016301) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xcd27,	// (0x0001b999) list_single_2graphic_im_pane_ParamLimits

0xcd27,	// (0x0001b999) list_single_2graphic_im_pane

0x863d,	// (0x000172af) list_single_2graphic_im_pane_g1_ParamLimits

0x863d,	// (0x000172af) list_single_2graphic_im_pane_g1

0x864e,	// (0x000172c0) list_single_2graphic_im_pane_g2_ParamLimits

0x864e,	// (0x000172c0) list_single_2graphic_im_pane_g2

0x865a,	// (0x000172cc) list_single_2graphic_im_pane_g3_ParamLimits

0x865a,	// (0x000172cc) list_single_2graphic_im_pane_g3

0x0003,

0xfc6f,	// (0x0001e8e1) list_single_2graphic_im_pane_g_ParamLimits

0xfc6f,	// (0x0001e8e1) list_single_2graphic_im_pane_g

0x867a,	// (0x000172ec) list_single_2graphic_im_pane_t1_ParamLimits

0x867a,	// (0x000172ec) list_single_2graphic_im_pane_t1

0x7edf,	// (0x00016b51) list_single_graphic_2heading_pane_fp_ParamLimits

0x7edf,	// (0x00016b51) list_single_graphic_2heading_pane_fp

0xd063,	// (0x0001bcd5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd063,	// (0x0001bcd5) list_single_graphic_2heading_pane_fp_g1

0x7ef4,	// (0x00016b66) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7ef4,	// (0x00016b66) list_single_graphic_2heading_pane_fp_g2

0xd02c,	// (0x0001bc9e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd02c,	// (0x0001bc9e) list_single_graphic_2heading_pane_fp_g3

0xd038,	// (0x0001bcaa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd038,	// (0x0001bcaa) list_single_graphic_2heading_pane_fp_g4

0x7f14,	// (0x00016b86) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7f14,	// (0x00016b86) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x0001e80f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x0001e80f) list_single_graphic_2heading_pane_fp_g

0xd230,	// (0x0001bea2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd230,	// (0x0001bea2) list_single_graphic_2heading_pane_fp_t1

0xd09b,	// (0x0001bd0d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd09b,	// (0x0001bd0d) list_single_graphic_2heading_pane_fp_t2

0xd246,	// (0x0001beb8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd246,	// (0x0001beb8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc78,	// (0x0001e8ea) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc78,	// (0x0001e8ea) list_single_graphic_2heading_pane_fp_t

0x7924,	// (0x00016596) fep_hwr_write_pane_g5_ParamLimits

0x7924,	// (0x00016596) fep_hwr_write_pane_g5

0x7930,	// (0x000165a2) fep_hwr_write_pane_g6_ParamLimits

0x7930,	// (0x000165a2) fep_hwr_write_pane_g6

0x8396,	// (0x00017008) eswt_shell_pane_ParamLimits

0x5017,	// (0x00013c89) bg_popup_window_pane_cp18_ParamLimits

0x62bf,	// (0x00014f31) heading_pane_cp70

0x84c0,	// (0x00017132) popup_eswt_tasktip_window_t1_ParamLimits

0x4a3b,	// (0x000136ad) aid_touch_tab_arrow_left

0x4a47,	// (0x000136b9) aid_touch_tab_arrow_right

0x23b2,	// (0x00011024) title_pane_g3_ParamLimits

0x23b2,	// (0x00011024) title_pane_g3

0x3130,	// (0x00011da2) set_value_pane_g1

0x491c,	// (0x0001358e) popup_toolbar_trans_pane_ParamLimits

0x85f1,	// (0x00017263) aid_size_cell_tb_trans_pane_ParamLimits

0x3251,	// (0x00011ec3) bg_tb_trans_pane_ParamLimits

0x8603,	// (0x00017275) grid_tb_trans_pane_ParamLimits

0x270d,	// (0x0001137f) cont_note_pane_ParamLimits

0x270d,	// (0x0001137f) cont_note_pane

0x2a61,	// (0x000116d3) cont_snote2_single_text_pane_ParamLimits

0x2a61,	// (0x000116d3) cont_snote2_single_text_pane

0x2a61,	// (0x000116d3) cont_snote2_single_graphic_pane_ParamLimits

0x2a61,	// (0x000116d3) cont_snote2_single_graphic_pane

0x5601,	// (0x00014273) cont_note_wait_pane_ParamLimits

0x5601,	// (0x00014273) cont_note_wait_pane

0x5601,	// (0x00014273) cont_note_image_pane_ParamLimits

0x5601,	// (0x00014273) cont_note_image_pane

0x86d7,	// (0x00017349) popup_note2_window_g1_ParamLimits

0x86d7,	// (0x00017349) popup_note2_window_g1

0x8708,	// (0x0001737a) popup_note2_window_t1_ParamLimits

0x8708,	// (0x0001737a) popup_note2_window_t1

0x874d,	// (0x000173bf) popup_note2_window_t2_ParamLimits

0x874d,	// (0x000173bf) popup_note2_window_t2

0x8792,	// (0x00017404) popup_note2_window_t3_ParamLimits

0x8792,	// (0x00017404) popup_note2_window_t3

0x87d7,	// (0x00017449) popup_note2_window_t4_ParamLimits

0x87d7,	// (0x00017449) popup_note2_window_t4

0x2791,	// (0x00011403) popup_note2_window_t5_ParamLimits

0x2791,	// (0x00011403) popup_note2_window_t5

0x0004,

0xfc84,	// (0x0001e8f6) popup_note2_window_t_ParamLimits

0xfc84,	// (0x0001e8f6) popup_note2_window_t

0x8806,	// (0x00017478) popup_note2_image_window_g1_ParamLimits

0x8806,	// (0x00017478) popup_note2_image_window_g1

0x8812,	// (0x00017484) popup_note2_image_window_g2_ParamLimits

0x8812,	// (0x00017484) popup_note2_image_window_g2

0x0001,

0xfc8f,	// (0x0001e901) popup_note2_image_window_g_ParamLimits

0xfc8f,	// (0x0001e901) popup_note2_image_window_g

0x8824,	// (0x00017496) popup_note2_image_window_t1_ParamLimits

0x8824,	// (0x00017496) popup_note2_image_window_t1

0x883c,	// (0x000174ae) popup_note2_image_window_t2_ParamLimits

0x883c,	// (0x000174ae) popup_note2_image_window_t2

0x8854,	// (0x000174c6) popup_note2_image_window_t3_ParamLimits

0x8854,	// (0x000174c6) popup_note2_image_window_t3

0x0002,

0xfc94,	// (0x0001e906) popup_note2_image_window_t_ParamLimits

0xfc94,	// (0x0001e906) popup_note2_image_window_t

0x560f,	// (0x00014281) popup_note2_wait_window_g1_ParamLimits

0x560f,	// (0x00014281) popup_note2_wait_window_g1

0x8870,	// (0x000174e2) popup_note2_wait_window_g2_ParamLimits

0x8870,	// (0x000174e2) popup_note2_wait_window_g2

0x5627,	// (0x00014299) popup_note2_wait_window_g3_ParamLimits

0x5627,	// (0x00014299) popup_note2_wait_window_g3

0x0002,

0xfc9b,	// (0x0001e90d) popup_note2_wait_window_g_ParamLimits

0xfc9b,	// (0x0001e90d) popup_note2_wait_window_g

0x887c,	// (0x000174ee) popup_note2_wait_window_t1_ParamLimits

0x887c,	// (0x000174ee) popup_note2_wait_window_t1

0x889a,	// (0x0001750c) popup_note2_wait_window_t2_ParamLimits

0x889a,	// (0x0001750c) popup_note2_wait_window_t2

0x88b8,	// (0x0001752a) popup_note2_wait_window_t3_ParamLimits

0x88b8,	// (0x0001752a) popup_note2_wait_window_t3

0x88ca,	// (0x0001753c) popup_note2_wait_window_t4_ParamLimits

0x88ca,	// (0x0001753c) popup_note2_wait_window_t4

0x0003,

0xfca2,	// (0x0001e914) popup_note2_wait_window_t_ParamLimits

0xfca2,	// (0x0001e914) popup_note2_wait_window_t

0x88dc,	// (0x0001754e) wait_bar2_pane_ParamLimits

0x88dc,	// (0x0001754e) wait_bar2_pane

0x88f4,	// (0x00017566) popup_snote2_single_text_window_g1_ParamLimits

0x88f4,	// (0x00017566) popup_snote2_single_text_window_g1

0x891c,	// (0x0001758e) popup_snote2_single_text_window_t1_ParamLimits

0x891c,	// (0x0001758e) popup_snote2_single_text_window_t1

0x8968,	// (0x000175da) popup_snote2_single_text_window_t2_ParamLimits

0x8968,	// (0x000175da) popup_snote2_single_text_window_t2

0x89b4,	// (0x00017626) popup_snote2_single_text_window_t3_ParamLimits

0x89b4,	// (0x00017626) popup_snote2_single_text_window_t3

0x89f5,	// (0x00017667) popup_snote2_single_text_window_t4_ParamLimits

0x89f5,	// (0x00017667) popup_snote2_single_text_window_t4

0x8a2b,	// (0x0001769d) popup_snote2_single_text_window_t5_ParamLimits

0x8a2b,	// (0x0001769d) popup_snote2_single_text_window_t5

0x0004,

0xfcab,	// (0x0001e91d) popup_snote2_single_text_window_t_ParamLimits

0xfcab,	// (0x0001e91d) popup_snote2_single_text_window_t

0x8a56,	// (0x000176c8) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a56,	// (0x000176c8) popup_snote2_single_graphic_window_g1

0x8a7e,	// (0x000176f0) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a7e,	// (0x000176f0) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb6,	// (0x0001e928) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb6,	// (0x0001e928) popup_snote2_single_graphic_window_g

0x8aa6,	// (0x00017718) popup_snote2_single_graphic_window_t1_ParamLimits

0x8aa6,	// (0x00017718) popup_snote2_single_graphic_window_t1

0x8af2,	// (0x00017764) popup_snote2_single_graphic_window_t2_ParamLimits

0x8af2,	// (0x00017764) popup_snote2_single_graphic_window_t2

0x89b4,	// (0x00017626) popup_snote2_single_graphic_window_t3_ParamLimits

0x89b4,	// (0x00017626) popup_snote2_single_graphic_window_t3

0x89f5,	// (0x00017667) popup_snote2_single_graphic_window_t4_ParamLimits

0x89f5,	// (0x00017667) popup_snote2_single_graphic_window_t4

0x8a2b,	// (0x0001769d) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a2b,	// (0x0001769d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbb,	// (0x0001e92d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbb,	// (0x0001e92d) popup_snote2_single_graphic_window_t

0x72c9,	// (0x00015f3b) clock_nsta_pane_cp2_t1

0x72c9,	// (0x00015f3b) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0001e74d) clock_nsta_pane_cp2_t

0xc960,	// (0x0001b5d2) form_field_data_wide_pane_g1_ParamLimits

0x3277,	// (0x00011ee9) form_field_data_wide_pane_g2_ParamLimits

0x3277,	// (0x00011ee9) form_field_data_wide_pane_g2

0x3283,	// (0x00011ef5) form_field_data_wide_pane_g3_ParamLimits

0x3283,	// (0x00011ef5) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0001e331) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0001e331) form_field_data_wide_pane_g

0x71d4,	// (0x00015e46) grid_touch_3_pane_ParamLimits

0x71d4,	// (0x00015e46) grid_touch_3_pane

0x8b3e,	// (0x000177b0) cell_touch_3_pane_ParamLimits

0x8b3e,	// (0x000177b0) cell_touch_3_pane

0x7876,	// (0x000164e8) cell_touch_3_pane_g1

0x7876,	// (0x000164e8) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0001e7d2) cell_touch_3_pane_g

0x27c3,	// (0x00011435) cont_query_data_pane

0x27cb,	// (0x0001143d) cont_query_data_pane_cp1

0x8b6c,	// (0x000177de) button_value_adjust_pane_cp7

0x8b74,	// (0x000177e6) query_popup_pane_cp3

0x3af4,	// (0x00012766) bg_popup_sub_pane_cp22_ParamLimits

0xda6b,	// (0x0001c6dd) navi_navi_volume_pane_cp2

0xda86,	// (0x0001c6f8) popup_side_volume_key_window_g2

0xda95,	// (0x0001c707) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0001e3c3) popup_side_volume_key_window_g

0xdab2,	// (0x0001c724) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0001e3ca) popup_side_volume_key_window_t

0x3e3a,	// (0x00012aac) popup_side_volume_key_window_ParamLimits

0xc59b,	// (0x0001b20d) list_double_graphic_pane_g4_ParamLimits

0xc59b,	// (0x0001b20d) list_double_graphic_pane_g4

0xcd66,	// (0x0001b9d8) list_single_2heading_msg_pane_ParamLimits

0xcd66,	// (0x0001b9d8) list_single_2heading_msg_pane

0xd266,	// (0x0001bed8) list_single_2heading_msg_pane_g1_ParamLimits

0xd266,	// (0x0001bed8) list_single_2heading_msg_pane_g1

0xc3ca,	// (0x0001b03c) list_single_2heading_msg_pane_g2_ParamLimits

0xc3ca,	// (0x0001b03c) list_single_2heading_msg_pane_g2

0xd272,	// (0x0001bee4) list_single_2heading_msg_pane_g3_ParamLimits

0xd272,	// (0x0001bee4) list_single_2heading_msg_pane_g3

0xd27e,	// (0x0001bef0) list_single_2heading_msg_pane_g4_ParamLimits

0xd27e,	// (0x0001bef0) list_single_2heading_msg_pane_g4

0x0003,

0xfcc6,	// (0x0001e938) list_single_2heading_msg_pane_g_ParamLimits

0xfcc6,	// (0x0001e938) list_single_2heading_msg_pane_g

0xd296,	// (0x0001bf08) list_single_2heading_msg_pane_t1_ParamLimits

0xd296,	// (0x0001bf08) list_single_2heading_msg_pane_t1

0xd2be,	// (0x0001bf30) list_single_2heading_msg_pane_t2_ParamLimits

0xd2be,	// (0x0001bf30) list_single_2heading_msg_pane_t2

0xd2f2,	// (0x0001bf64) list_single_2heading_msg_pane_t3_ParamLimits

0xd2f2,	// (0x0001bf64) list_single_2heading_msg_pane_t3

0xd32b,	// (0x0001bf9d) list_single_2heading_msg_pane_t4_ParamLimits

0xd32b,	// (0x0001bf9d) list_single_2heading_msg_pane_t4

0x0003,

0xfccf,	// (0x0001e941) list_single_2heading_msg_pane_t_ParamLimits

0xfccf,	// (0x0001e941) list_single_2heading_msg_pane_t

0x23be,	// (0x00011030) title_pane_g4_ParamLimits

0x23be,	// (0x00011030) title_pane_g4

0xd879,	// (0x0001c4eb) title_pane_stacon_g3_ParamLimits

0xd879,	// (0x0001c4eb) title_pane_stacon_g3

0x866e,	// (0x000172e0) list_single_2graphic_im_pane_g4_ParamLimits

0x866e,	// (0x000172e0) list_single_2graphic_im_pane_g4

0x6066,	// (0x00014cd8) popup_side_volume_key_window_cp

0x6962,	// (0x000155d4) main_idle_act2_pane_t1

0xde2e,	// (0x0001caa0) toolbar_button_pane_g10

0x2c59,	// (0x000118cb) popup_toolbar_window_cp1

0x72ba,	// (0x00015f2c) clock_nsta_pane_cp_t1

0x72ba,	// (0x00015f2c) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0001e748) clock_nsta_pane_cp_t

0xda6b,	// (0x0001c6dd) navi_navi_volume_pane_cp2_ParamLimits

0xda7a,	// (0x0001c6ec) popup_side_volume_key_window_g1_ParamLimits

0xda86,	// (0x0001c6f8) popup_side_volume_key_window_g2_ParamLimits

0xda95,	// (0x0001c707) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0001e3c3) popup_side_volume_key_window_g_ParamLimits

0xe270,	// (0x0001cee2) fep_hwr_aid_pane

0xb26f,	// (0x00019ee1) bg_fep_hwr_top_pane_g4_ParamLimits

0x7906,	// (0x00016578) fep_hwr_top_pane_g1_ParamLimits

0x78f4,	// (0x00016566) fep_hwr_top_pane_g2_ParamLimits

0xe329,	// (0x0001cf9b) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0001e79d) fep_hwr_top_pane_g_ParamLimits

0xe33e,	// (0x0001cfb0) fep_hwr_top_text_pane_ParamLimits

0x5e32,	// (0x00014aa4) aid_touch_tab_arrow_arrow_2

0x5e29,	// (0x00014a9b) aid_touch_tab_arrow_left_2

0xe284,	// (0x0001cef6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe2bb,	// (0x0001cf2d) fep_hwr_prediction_pane

0x7a66,	// (0x000166d8) fep_vkb_prediction_pane

0x7b6a,	// (0x000167dc) fep_vkb_side_pane_g3_ParamLimits

0x7b6a,	// (0x000167dc) fep_vkb_side_pane_g3

0x7b16,	// (0x00016788) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x810d,	// (0x00016d7f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x811a,	// (0x00016d8c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd5,	// (0x0001e847) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8c88,	// (0x000178fa) fep_hwr_prediction_pane_g1

0xe5cb,	// (0x0001d23d) fep_hwr_prediction_pane_g2

0xe5d3,	// (0x0001d245) fep_hwr_prediction_pane_g3

0xe5db,	// (0x0001d24d) fep_hwr_prediction_pane_g4

0x0003,

0xfcd8,	// (0x0001e94a) fep_hwr_prediction_pane_g

0x8c88,	// (0x000178fa) fep_vkb_prediction_pane_g1

0x8c92,	// (0x00017904) fep_vkb_prediction_pane_g2

0x8c9a,	// (0x0001790c) fep_vkb_prediction_pane_g3

0x8ca2,	// (0x00017914) fep_vkb_prediction_pane_g4

0x0003,

0xfce1,	// (0x0001e953) fep_vkb_prediction_pane_g

0xe0fe,	// (0x0001cd70) slider_set_pane_g3

0xe112,	// (0x0001cd84) slider_set_pane_g4

0xe12a,	// (0x0001cd9c) slider_set_pane_g5

0xe0fe,	// (0x0001cd70) slider_set_pane_g6

0xe140,	// (0x0001cdb2) slider_set_pane_g7

0x6504,	// (0x00015176) slider_form_pane_g3

0x650d,	// (0x0001517f) slider_form_pane_g4

0x6515,	// (0x00015187) slider_form_pane_g5

0x6504,	// (0x00015176) slider_form_pane_g6

0x651d,	// (0x0001518f) slider_form_pane_g7

0x6c3f,	// (0x000158b1) slider_set_pane_vc_g3

0x6c48,	// (0x000158ba) slider_set_pane_vc_g4

0x6c51,	// (0x000158c3) slider_set_pane_vc_g5

0x6c3f,	// (0x000158b1) slider_set_pane_vc_g6

0x6c5a,	// (0x000158cc) slider_set_pane_vc_g7

0x6c3f,	// (0x000158b1) slider_form_pane_vc_g1

0x6c48,	// (0x000158ba) slider_form_pane_vc_g2

0x6c51,	// (0x000158c3) slider_form_pane_vc_g3

0x6c3f,	// (0x000158b1) slider_form_pane_vc_g4

0x6ff2,	// (0x00015c64) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0001e72e) slider_form_pane_vc_g

0x2376,	// (0x00010fe8) main_idle_act3_pane

0x8caa,	// (0x0001791c) ai3_links_pane

0x8cb3,	// (0x00017925) popup_ai3_data_window_ParamLimits

0x8cb3,	// (0x00017925) popup_ai3_data_window

0x2376,	// (0x00010fe8) grid_ai3_links_pane

0x8ccd,	// (0x0001793f) cell_ai3_links_pane_ParamLimits

0x8ccd,	// (0x0001793f) cell_ai3_links_pane

0x8ce5,	// (0x00017957) bg_popup_sub_pane_cp11

0x8cf2,	// (0x00017964) cell_ai3_links_pane_g1

0x2376,	// (0x00010fe8) bg_popup_sub_pane_cp12

0x8d17,	// (0x00017989) heading_ai3_data_pane

0x8d1f,	// (0x00017991) list_ai3_gene_pane

0x8d2b,	// (0x0001799d) popup_ai3_data_window_g1

0x8d33,	// (0x000179a5) heading_ai3_data_pane_g1

0x8d3b,	// (0x000179ad) heading_ai3_data_pane_t1

0x8d49,	// (0x000179bb) list_double_ai3_gene_pane_ParamLimits

0x8d49,	// (0x000179bb) list_double_ai3_gene_pane

0x8d56,	// (0x000179c8) list_single_ai3_gene_pane_ParamLimits

0x8d56,	// (0x000179c8) list_single_ai3_gene_pane

0x783b,	// (0x000164ad) list_highlight_pane_cp7_ParamLimits

0x783b,	// (0x000164ad) list_highlight_pane_cp7

0x8d63,	// (0x000179d5) list_single_a13_gene_pane_t1_ParamLimits

0x8d63,	// (0x000179d5) list_single_a13_gene_pane_t1

0x8d7a,	// (0x000179ec) list_single_ai3_gene_pane_g1

0x8d83,	// (0x000179f5) list_single_ai3_gene_pane_g2

0x0001,

0xfcea,	// (0x0001e95c) list_single_ai3_gene_pane_g

0x8d8b,	// (0x000179fd) list_double_ai3_gene_pane_g1_ParamLimits

0x8d8b,	// (0x000179fd) list_double_ai3_gene_pane_g1

0x8d97,	// (0x00017a09) list_double_ai3_gene_pane_t1_ParamLimits

0x8d97,	// (0x00017a09) list_double_ai3_gene_pane_t1

0x8db3,	// (0x00017a25) list_double_ai3_gene_pane_t2_ParamLimits

0x8db3,	// (0x00017a25) list_double_ai3_gene_pane_t2

0x8dc9,	// (0x00017a3b) list_double_ai3_gene_pane_t3_ParamLimits

0x8dc9,	// (0x00017a3b) list_double_ai3_gene_pane_t3

0x0002,

0xfcef,	// (0x0001e961) list_double_ai3_gene_pane_t_ParamLimits

0xfcef,	// (0x0001e961) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd25c,	// (0x0001bece) aid_size_min_col_2

0x8b8f,	// (0x00017801) aid_size_min_msg_ParamLimits

0x8b8f,	// (0x00017801) aid_size_min_msg

0x7c6a,	// (0x000168dc) fep_vkb_top_text_pane_g2_ParamLimits

0x7c6a,	// (0x000168dc) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0001e7cd) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0001e7cd) fep_vkb_top_text_pane_g

0x2376,	// (0x00010fe8) main_hc_apps_shell_pane

0x8de6,	// (0x00017a58) grid_hc_apps_pane_ParamLimits

0x8de6,	// (0x00017a58) grid_hc_apps_pane

0x8df5,	// (0x00017a67) list_hc_apps_pane

0x8dfd,	// (0x00017a6f) scroll_pane_cp37_ParamLimits

0x8dfd,	// (0x00017a6f) scroll_pane_cp37

0x8e09,	// (0x00017a7b) cell_hc_apps_pane_ParamLimits

0x8e09,	// (0x00017a7b) cell_hc_apps_pane

0x8eb7,	// (0x00017b29) cell_hc_apps_pane_g1_ParamLimits

0x8eb7,	// (0x00017b29) cell_hc_apps_pane_g1

0x8ee8,	// (0x00017b5a) cell_hc_apps_pane_g2_ParamLimits

0x8ee8,	// (0x00017b5a) cell_hc_apps_pane_g2

0x8f04,	// (0x00017b76) cell_hc_apps_pane_g3_ParamLimits

0x8f04,	// (0x00017b76) cell_hc_apps_pane_g3

0x0002,

0xfcf6,	// (0x0001e968) cell_hc_apps_pane_g_ParamLimits

0xfcf6,	// (0x0001e968) cell_hc_apps_pane_g

0x8f26,	// (0x00017b98) cell_hc_apps_pane_t1_ParamLimits

0x8f26,	// (0x00017b98) cell_hc_apps_pane_t1

0x270d,	// (0x0001137f) grid_highlight_pane_cp10_ParamLimits

0x270d,	// (0x0001137f) grid_highlight_pane_cp10

0x8f66,	// (0x00017bd8) list_single_hc_apps_pane_ParamLimits

0x8f66,	// (0x00017bd8) list_single_hc_apps_pane

0x8fc2,	// (0x00017c34) list_single_hc_apps_pane_g1

0xd350,	// (0x0001bfc2) list_single_hc_apps_pane_g2

0x0001,

0xfcfd,	// (0x0001e96f) list_single_hc_apps_pane_g

0xd369,	// (0x0001bfdb) list_single_hc_apps_pane_g2_copy1

0xd385,	// (0x0001bff7) list_single_hc_apps_pane_t1

0x246a,	// (0x000110dc) bg_set_opt_pane_cp_ParamLimits

0xd7a0,	// (0x0001c412) setting_slider_pane_t1_ParamLimits

0xd7b9,	// (0x0001c42b) setting_slider_pane_t2_ParamLimits

0xd7d3,	// (0x0001c445) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001e214) setting_slider_pane_t_ParamLimits

0xd7eb,	// (0x0001c45d) slider_set_pane_ParamLimits

0xdd0a,	// (0x0001c97c) control_pane_g5_ParamLimits

0xdd0a,	// (0x0001c97c) control_pane_g5

0x6353,	// (0x00014fc5) slider_set_pane_g1_ParamLimits

0xe0f2,	// (0x0001cd64) slider_set_pane_g2_ParamLimits

0xe0fe,	// (0x0001cd70) slider_set_pane_g3_ParamLimits

0xe112,	// (0x0001cd84) slider_set_pane_g4_ParamLimits

0xe12a,	// (0x0001cd9c) slider_set_pane_g5_ParamLimits

0xe0fe,	// (0x0001cd70) slider_set_pane_g6_ParamLimits

0xe140,	// (0x0001cdb2) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0001e60f) slider_set_pane_g_ParamLimits

0x3f1b,	// (0x00012b8d) navi_icon_text_pane_ParamLimits

0x49fc,	// (0x0001366e) aid_fill_nsta_2_ParamLimits

0x4a3b,	// (0x000136ad) aid_touch_tab_arrow_left_ParamLimits

0x4a47,	// (0x000136b9) aid_touch_tab_arrow_right_ParamLimits

0x4ab3,	// (0x00013725) clock_nsta_pane_ParamLimits

0x5e05,	// (0x00014a77) navi_icon_pane_g1_ParamLimits

0x5e14,	// (0x00014a86) navi_text_pane_t1_ParamLimits

0x73c4,	// (0x00016036) navi_icon_text_pane_g1_ParamLimits

0x73d3,	// (0x00016045) navi_icon_text_pane_t1_ParamLimits

0x8fc2,	// (0x00017c34) list_single_hc_apps_pane_g1_ParamLimits

0xd350,	// (0x0001bfc2) list_single_hc_apps_pane_g2_ParamLimits

0xfcfd,	// (0x0001e96f) list_single_hc_apps_pane_g_ParamLimits

0xd369,	// (0x0001bfdb) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd385,	// (0x0001bff7) list_single_hc_apps_pane_t1_ParamLimits

0xd6b4,	// (0x0001c326) popup_toolbar2_fixed_window_ParamLimits

0xd6b4,	// (0x0001c326) popup_toolbar2_fixed_window

0x4912,	// (0x00013584) popup_toolbar2_float_window

0x2376,	// (0x00010fe8) bg_popup_sub_pane_cp27

0x903e,	// (0x00017cb0) grid_toolbar2_float_pane

0x2376,	// (0x00010fe8) bg_popup_sub_pane_cp26

0x903e,	// (0x00017cb0) grid_toolbar2_fixed_pane

0x9046,	// (0x00017cb8) cell_toolbar2_fixed_pane_ParamLimits

0x9046,	// (0x00017cb8) cell_toolbar2_fixed_pane

0x9056,	// (0x00017cc8) cell_toolbar2_fixed_pane_g1

0x905f,	// (0x00017cd1) toolbar2_fixed_button_pane

0x4efd,	// (0x00013b6f) toolbar2_fixed_button_pane_g1

0x4f0d,	// (0x00013b7f) toolbar2_fixed_button_pane_g2

0x4f05,	// (0x00013b77) toolbar2_fixed_button_pane_g3

0x4f1d,	// (0x00013b8f) toolbar2_fixed_button_pane_g4

0x4f15,	// (0x00013b87) toolbar2_fixed_button_pane_g5

0x4f25,	// (0x00013b97) toolbar2_fixed_button_pane_g6

0x4f2d,	// (0x00013b9f) toolbar2_fixed_button_pane_g7

0x4f3d,	// (0x00013baf) toolbar2_fixed_button_pane_g8

0x4f35,	// (0x00013ba7) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0001e511) toolbar2_fixed_button_pane_g

0x9067,	// (0x00017cd9) cell_toolbar2_float_pane_ParamLimits

0x9067,	// (0x00017cd9) cell_toolbar2_float_pane

0x9078,	// (0x00017cea) cell_toolbar2_float_pane_g1

0x905f,	// (0x00017cd1) toolbar2_fixed_button_pane_cp

0x79c6,	// (0x00016638) fep_vkb_accented_list_pane_ParamLimits

0x79c6,	// (0x00016638) fep_vkb_accented_list_pane

0xe48c,	// (0x0001d0fe) bg_popup_fep_shadow_pane_g9

0x409b,	// (0x00012d0d) bg_popup_fep_shadow_pane_cp3

0x352f,	// (0x000121a1) list_accented_list_pane

0x9081,	// (0x00017cf3) list_single_accented_list_pane_ParamLimits

0x9081,	// (0x00017cf3) list_single_accented_list_pane

0x409b,	// (0x00012d0d) list_highlight_pane_cp10

0x9092,	// (0x00017d04) list_single_accented_list_pane_t1

0x4862,	// (0x000134d4) popup_slider_window_ParamLimits

0x4862,	// (0x000134d4) popup_slider_window

0x8b7c,	// (0x000177ee) aid_indentation_list_msg

0x914c,	// (0x00017dbe) bg_popup_window_pane_cp19

0x91b6,	// (0x00017e28) popup_slider_window_g1

0x91d2,	// (0x00017e44) popup_slider_window_g2

0x91ee,	// (0x00017e60) popup_slider_window_g3

0x0005,

0xfd02,	// (0x0001e974) popup_slider_window_g

0x924a,	// (0x00017ebc) popup_slider_window_t1

0x92be,	// (0x00017f30) small_volume_slider_vertical_pane

0x7876,	// (0x000164e8) small_volume_slider_vertical_pane_g1

0x7876,	// (0x000164e8) small_volume_slider_vertical_pane_g2

0x92da,	// (0x00017f4c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd14,	// (0x0001e986) small_volume_slider_vertical_pane_g

0xd476,	// (0x0001c0e8) area_side_right_pane_ParamLimits

0xd476,	// (0x0001c0e8) area_side_right_pane

0xe5e3,	// (0x0001d255) aid_size_side_button_ParamLimits

0xe5e3,	// (0x0001d255) aid_size_side_button

0xe5f7,	// (0x0001d269) grid_sctrl_middle_pane_ParamLimits

0xe5f7,	// (0x0001d269) grid_sctrl_middle_pane

0xe617,	// (0x0001d289) sctrl_sk_bottom_pane

0xe628,	// (0x0001d29a) sctrl_sk_top_pane

0xe63a,	// (0x0001d2ac) aid_touch_sctrl_top

0x270d,	// (0x0001137f) bg_sctrl_sk_pane_ParamLimits

0x270d,	// (0x0001137f) bg_sctrl_sk_pane

0xe647,	// (0x0001d2b9) sctrl_sk_top_pane_g1

0xe654,	// (0x0001d2c6) sctrl_sk_top_pane_t1

0xe63a,	// (0x0001d2ac) aid_touch_sctrl_bottom

0x270d,	// (0x0001137f) bg_sctrl_sk_pane_cp_ParamLimits

0x270d,	// (0x0001137f) bg_sctrl_sk_pane_cp

0xe66f,	// (0x0001d2e1) sctrl_sk_bottom_pane_g1

0xe654,	// (0x0001d2c6) sctrl_sk_bottom_pane_t1

0xe678,	// (0x0001d2ea) cell_sctrl_middle_pane_ParamLimits

0xe678,	// (0x0001d2ea) cell_sctrl_middle_pane

0xe693,	// (0x0001d305) aid_touch_sctrl_middle_ParamLimits

0xe693,	// (0x0001d305) aid_touch_sctrl_middle

0x3251,	// (0x00011ec3) bg_sctrl_middle_pane_ParamLimits

0x3251,	// (0x00011ec3) bg_sctrl_middle_pane

0x7b16,	// (0x00016788) cell_sctrl_middle_pane_g1_ParamLimits

0x7b16,	// (0x00016788) cell_sctrl_middle_pane_g1

0xe6a5,	// (0x0001d317) cell_sctrl_middle_pane_g2_ParamLimits

0xe6a5,	// (0x0001d317) cell_sctrl_middle_pane_g2

0x0001,

0xfd20,	// (0x0001e992) cell_sctrl_middle_pane_g_ParamLimits

0xfd20,	// (0x0001e992) cell_sctrl_middle_pane_g

0x4efd,	// (0x00013b6f) bg_sctrl_middle_pane_g1

0x4f0d,	// (0x00013b7f) bg_sctrl_middle_pane_g2

0x4f05,	// (0x00013b77) bg_sctrl_middle_pane_g3

0x4f1d,	// (0x00013b8f) bg_sctrl_middle_pane_g4

0x4f15,	// (0x00013b87) bg_sctrl_middle_pane_g5

0x4f25,	// (0x00013b97) bg_sctrl_middle_pane_g6

0x4f2d,	// (0x00013b9f) bg_sctrl_middle_pane_g7

0x4f3d,	// (0x00013baf) bg_sctrl_middle_pane_g8

0x0007,

0xfd25,	// (0x0001e997) bg_sctrl_middle_pane_g

0x4f35,	// (0x00013ba7) bg_sctrl_middle_pane_g8_copy1

0x4efd,	// (0x00013b6f) bg_sctrl_sk_pane_g1

0x4f0d,	// (0x00013b7f) bg_sctrl_sk_pane_g2

0x4f05,	// (0x00013b77) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0001e511) bg_sctrl_sk_pane_g

0x2c1f,	// (0x00011891) aid_size_touch_scroll_bar

0x4f1d,	// (0x00013b8f) bg_sctrl_sk_pane_g4

0x4f15,	// (0x00013b87) bg_sctrl_sk_pane_g5

0x4f25,	// (0x00013b97) bg_sctrl_sk_pane_g6

0x4f2d,	// (0x00013b9f) bg_sctrl_sk_pane_g7

0x4f3d,	// (0x00013baf) bg_sctrl_sk_pane_g8

0x4f35,	// (0x00013ba7) bg_sctrl_sk_pane_g9

0x44cd,	// (0x0001313f) popup_fep_china_hwr2_fs_candidate_window

0x44d7,	// (0x00013149) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x44d7,	// (0x00013149) popup_fep_china_hwr2_fs_control_window

0x7b16,	// (0x00016788) sctrl_sk_top_pane_g2

0x0001,

0xfd1b,	// (0x0001e98d) sctrl_sk_top_pane_g

0x92e3,	// (0x00017f55) aid_fep_china_hwr2_fs_cell_ParamLimits

0x92e3,	// (0x00017f55) aid_fep_china_hwr2_fs_cell

0x92f5,	// (0x00017f67) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x92f5,	// (0x00017f67) bg_popup_fep_shadow_pane_cp4

0x930c,	// (0x00017f7e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x930c,	// (0x00017f7e) bg_popup_fep_shadow_pane_cp5

0x931e,	// (0x00017f90) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x931e,	// (0x00017f90) popup_fep_china_hwr2_fs_control_bar_grid

0x932e,	// (0x00017fa0) popup_fep_china_hwr2_fs_control_funtion_grid

0x9336,	// (0x00017fa8) aid_fep_china_hwr2_fs_candi_cell

0x2376,	// (0x00010fe8) bg_popup_fep_shadow_pane_cp6

0x9340,	// (0x00017fb2) popup_fep_china_hwr2_fs_candidate_grid

0x934a,	// (0x00017fbc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x934a,	// (0x00017fbc) cell_fep_china_hwr2_fs_funtion_grid

0x7876,	// (0x000164e8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9362,	// (0x00017fd4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9362,	// (0x00017fd4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9370,	// (0x00017fe2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9370,	// (0x00017fe2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd36,	// (0x0001e9a8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd36,	// (0x0001e9a8) cell_fep_china_hwr2_fs_funtion_grid_g

0x9386,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9386,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_t1

0x939b,	// (0x0001800d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x939b,	// (0x0001800d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3b,	// (0x0001e9ad) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3b,	// (0x0001e9ad) cell_fep_china_hwr2_fs_funtion_grid_t

0x93b7,	// (0x00018029) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x93bf,	// (0x00018031) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x93c7,	// (0x00018039) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd40,	// (0x0001e9b2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x93cf,	// (0x00018041) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x93cf,	// (0x00018041) cell_fep_china_hwr2_fs_candidate_grid

0x93e8,	// (0x0001805a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x93f0,	// (0x00018062) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7876,	// (0x000164e8) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7876,	// (0x000164e8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0001e7d2) cell_fep_china_hwr2_fs_candidate_grid_g

0x93f8,	// (0x0001806a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4ac0,	// (0x00013732) clock_nsta_pane_cp_24_ParamLimits

0x4ac0,	// (0x00013732) clock_nsta_pane_cp_24

0x4b3e,	// (0x000137b0) indicator_nsta_pane_cp_24_ParamLimits

0x4b3e,	// (0x000137b0) indicator_nsta_pane_cp_24

0x5c81,	// (0x000148f3) heading_pane_g1

0x0001,

0xf904,	// (0x0001e576) heading_pane_g

0x67ab,	// (0x0001541d) grid_sct_catagory_button_pane

0x67db,	// (0x0001544d) scroll_pane_cp5_ParamLimits

0x7418,	// (0x0001608a) button_value_adjust_pane_cp5_ParamLimits

0x7418,	// (0x0001608a) button_value_adjust_pane_cp5

0x7514,	// (0x00016186) form2_midp_time_pane_ParamLimits

0x9406,	// (0x00018078) cell_sct_catagory_button_pane_ParamLimits

0x9406,	// (0x00018078) cell_sct_catagory_button_pane

0x783b,	// (0x000164ad) bg_button_pane_cp01_ParamLimits

0x783b,	// (0x000164ad) bg_button_pane_cp01

0x7876,	// (0x000164e8) cell_sct_catagory_button_pane_g1

0x48a1,	// (0x00013513) popup_tb_extension_window

0x9418,	// (0x0001808a) aid_size_cell_ext_ParamLimits

0x9418,	// (0x0001808a) aid_size_cell_ext

0x270d,	// (0x0001137f) bg_tb_trans_pane_cp1_ParamLimits

0x270d,	// (0x0001137f) bg_tb_trans_pane_cp1

0x9438,	// (0x000180aa) grid_tb_ext_pane_ParamLimits

0x9438,	// (0x000180aa) grid_tb_ext_pane

0x9466,	// (0x000180d8) cell_tb_ext_pane_ParamLimits

0x9466,	// (0x000180d8) cell_tb_ext_pane

0x947d,	// (0x000180ef) cell_tb_ext_pane_g1_ParamLimits

0x947d,	// (0x000180ef) cell_tb_ext_pane_g1

0x949a,	// (0x0001810c) cell_tb_ext_pane_t1

0x270d,	// (0x0001137f) list_highlight_pane_cp11_ParamLimits

0x270d,	// (0x0001137f) list_highlight_pane_cp11

0xd6d3,	// (0x0001c345) popup_uni_indicator_window_ParamLimits

0xd6d3,	// (0x0001c345) popup_uni_indicator_window

0x3251,	// (0x00011ec3) bg_popup_sub_pane_cp14

0x94b5,	// (0x00018127) list_uniindi_pane

0x94c1,	// (0x00018133) uniindi_top_pane

0x270d,	// (0x0001137f) bg_uniindi_top_pane

0x94e0,	// (0x00018152) uniindi_top_pane_g1

0x94f6,	// (0x00018168) uniindi_top_pane_g2

0x0003,

0xfd47,	// (0x0001e9b9) uniindi_top_pane_g

0x9520,	// (0x00018192) uniindi_top_pane_t1

0x954a,	// (0x000181bc) list_single_uniindi_pane_ParamLimits

0x954a,	// (0x000181bc) list_single_uniindi_pane

0x7876,	// (0x000164e8) bg_uniindi_top_pane_g1

0x955d,	// (0x000181cf) list_single_uniindi_pane_g1

0x9570,	// (0x000181e2) list_single_uniindi_pane_t1

0x2376,	// (0x00010fe8) control_bg_pane

0x9595,	// (0x00018207) bg_sctrl_sk_pane_cp1

0x959e,	// (0x00018210) bg_sctrl_sk_pane_cp2

0x95a7,	// (0x00018219) control_bg_pane_g1

0x95b0,	// (0x00018222) control_bg_pane_g2

0x0001,

0xfd50,	// (0x0001e9c2) control_bg_pane_g

0x727e,	// (0x00015ef0) cell_indicator_nsta_pane_g1_ParamLimits

0x728c,	// (0x00015efe) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0001e743) cell_indicator_nsta_pane_g_ParamLimits

0xd019,	// (0x0001bc8b) form2_midp_time_pane_t1_ParamLimits

0x2a61,	// (0x000116d3) main_idle_act4_pane_ParamLimits

0x2a61,	// (0x000116d3) main_idle_act4_pane

0x48a1,	// (0x00013513) popup_tb_extension_window_ParamLimits

0x9456,	// (0x000180c8) tb_ext_find_pane_ParamLimits

0x9456,	// (0x000180c8) tb_ext_find_pane

0x95b9,	// (0x0001822b) ai_gene_pane_1_cp1

0x41e0,	// (0x00012e52) ai_gene_pane_2_cp1

0x95c1,	// (0x00018233) list_single_idle_plugin_calendar_pane

0x95ca,	// (0x0001823c) list_single_idle_plugin_notification_pane

0x95d3,	// (0x00018245) list_single_idle_plugin_player_pane

0x95dc,	// (0x0001824e) list_single_idle_plugin_shortcut_pane_ParamLimits

0x95dc,	// (0x0001824e) list_single_idle_plugin_shortcut_pane

0x95fe,	// (0x00018270) main_idle_act4_pane_t1

0x9610,	// (0x00018282) main_idle_act4_pane_t2

0x0001,

0xfd55,	// (0x0001e9c7) main_idle_act4_pane_t

0x9622,	// (0x00018294) middle_sk_idle_act4_pane_ParamLimits

0x9622,	// (0x00018294) middle_sk_idle_act4_pane

0x9638,	// (0x000182aa) popup_clock_digital_analogue_window_cp2

0x9652,	// (0x000182c4) shortcut_wheel_idle_act4_pane_ParamLimits

0x9652,	// (0x000182c4) shortcut_wheel_idle_act4_pane

0x7876,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g1

0x7876,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g2

0x7876,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g3

0x7876,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g4

0x7876,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g5

0x9666,	// (0x000182d8) shortcut_wheel_idle_act4_pane_g6

0x966e,	// (0x000182e0) shortcut_wheel_idle_act4_pane_g7

0x9676,	// (0x000182e8) shortcut_wheel_idle_act4_pane_g8

0x967e,	// (0x000182f0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5a,	// (0x0001e9cc) shortcut_wheel_idle_act4_pane_g

0x7b16,	// (0x00016788) middle_sk_idle_act4_pane_g1_ParamLimits

0x7b16,	// (0x00016788) middle_sk_idle_act4_pane_g1

0x96e2,	// (0x00018354) middle_sk_idle_act4_pane_g2_ParamLimits

0x96e2,	// (0x00018354) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7d,	// (0x0001e9ef) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7d,	// (0x0001e9ef) middle_sk_idle_act4_pane_g

0x96ee,	// (0x00018360) middle_sk_idle_act4_pane_t1_ParamLimits

0x96ee,	// (0x00018360) middle_sk_idle_act4_pane_t1

0x970b,	// (0x0001837d) grid_ai_shortcut_pane_ParamLimits

0x970b,	// (0x0001837d) grid_ai_shortcut_pane

0x9724,	// (0x00018396) list_highlight_pane_cp16_ParamLimits

0x9724,	// (0x00018396) list_highlight_pane_cp16

0x9731,	// (0x000183a3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x9731,	// (0x000183a3) list_single_idle_plugin_shortcut_pane_g1

0x973d,	// (0x000183af) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x973d,	// (0x000183af) list_single_idle_plugin_shortcut_pane_g2

0x9755,	// (0x000183c7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x9755,	// (0x000183c7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd82,	// (0x0001e9f4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd82,	// (0x0001e9f4) list_single_idle_plugin_shortcut_pane_g

0x9768,	// (0x000183da) cell_ai_shortcut_pane_ParamLimits

0x9768,	// (0x000183da) cell_ai_shortcut_pane

0x978c,	// (0x000183fe) cell_ai_shortcut_pane_g1_ParamLimits

0x978c,	// (0x000183fe) cell_ai_shortcut_pane_g1

0x95b9,	// (0x0001822b) ai_gene_pane_1_cp2

0x97ae,	// (0x00018420) ai_gene_pane_2_cp2

0x97b6,	// (0x00018428) list_highlight_pane_cp15

0x97bf,	// (0x00018431) list_single_idle_plugin_calendar_pane_g1

0x97b6,	// (0x00018428) list_highlight_pane_cp17

0x97c7,	// (0x00018439) list_single_idle_plugin_calendar_pane_g1_copy1

0x97cf,	// (0x00018441) list_single_idle_plugin_player_pane_g1

0x6a04,	// (0x00015676) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd89,	// (0x0001e9fb) list_single_idle_plugin_player_pane_g

0x97d7,	// (0x00018449) list_single_idle_plugin_player_pane_t1

0x97e5,	// (0x00018457) list_single_idle_plugin_player_pane_t2

0x97f3,	// (0x00018465) list_single_idle_plugin_player_pane_t3

0x9801,	// (0x00018473) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8e,	// (0x0001ea00) list_single_idle_plugin_player_pane_t

0x980f,	// (0x00018481) wait_bar_pane_cp15

0x9817,	// (0x00018489) grid_ai_notification_pane

0x6a04,	// (0x00015676) list_single_idle_plugin_notification_pane_g1

0x9820,	// (0x00018492) cell_ai_notification_pane_ParamLimits

0x9820,	// (0x00018492) cell_ai_notification_pane

0x982d,	// (0x0001849f) cell_ai_notification_pane_g1

0x9835,	// (0x000184a7) cell_ai_notification_pane_t1

0x9843,	// (0x000184b5) tb_ext_find_button_pane

0x984b,	// (0x000184bd) tb_ext_find_pane_g1

0x9853,	// (0x000184c5) tb_ext_find_pane_t1

0x3a2f,	// (0x000126a1) tb_ext_find_button_pane_g1

0x9861,	// (0x000184d3) tb_ext_find_button_pane_g2

0x0001,

0xfd97,	// (0x0001ea09) tb_ext_find_button_pane_g

0x95fe,	// (0x00018270) main_idle_act4_pane_t1_ParamLimits

0x9610,	// (0x00018282) main_idle_act4_pane_t2_ParamLimits

0xfd55,	// (0x0001e9c7) main_idle_act4_pane_t_ParamLimits

0x9638,	// (0x000182aa) popup_clock_digital_analogue_window_cp2_ParamLimits

0x9646,	// (0x000182b8) sat_plugin_idle_act4_pane_ParamLimits

0x9646,	// (0x000182b8) sat_plugin_idle_act4_pane

0x986a,	// (0x000184dc) sat_plugin_idle_act4_pane_t1_ParamLimits

0x986a,	// (0x000184dc) sat_plugin_idle_act4_pane_t1

0x987d,	// (0x000184ef) sat_plugin_idle_act4_pane_t2_ParamLimits

0x987d,	// (0x000184ef) sat_plugin_idle_act4_pane_t2

0x9890,	// (0x00018502) sat_plugin_idle_act4_pane_t3_ParamLimits

0x9890,	// (0x00018502) sat_plugin_idle_act4_pane_t3

0x98a3,	// (0x00018515) sat_plugin_idle_act4_pane_t4_ParamLimits

0x98a3,	// (0x00018515) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9c,	// (0x0001ea0e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9c,	// (0x0001ea0e) sat_plugin_idle_act4_pane_t

0xd60e,	// (0x0001c280) popup_battery_window_ParamLimits

0xd60e,	// (0x0001c280) popup_battery_window

0x270d,	// (0x0001137f) bg_popup_sub_pane_cp25_ParamLimits

0x270d,	// (0x0001137f) bg_popup_sub_pane_cp25

0x98b6,	// (0x00018528) popup_battery_window_g1_ParamLimits

0x98b6,	// (0x00018528) popup_battery_window_g1

0x98c2,	// (0x00018534) popup_battery_window_t1_ParamLimits

0x98c2,	// (0x00018534) popup_battery_window_t1

0x98d4,	// (0x00018546) popup_battery_window_t2_ParamLimits

0x98d4,	// (0x00018546) popup_battery_window_t2

0x0001,

0xfda5,	// (0x0001ea17) popup_battery_window_t_ParamLimits

0xfda5,	// (0x0001ea17) popup_battery_window_t

0x40af,	// (0x00012d21) midp_canvas_pane_ParamLimits

0x4124,	// (0x00012d96) midp_keypad_pane_ParamLimits

0x4124,	// (0x00012d96) midp_keypad_pane

0x4425,	// (0x00013097) main_midp_pane_ParamLimits

0x72d8,	// (0x00015f4a) signal_pane_g2_cp_ParamLimits

0x98f1,	// (0x00018563) aid_size_cell_midp_keypad_ParamLimits

0x98f1,	// (0x00018563) aid_size_cell_midp_keypad

0x990b,	// (0x0001857d) midp_keyp_game_grid_pane_ParamLimits

0x990b,	// (0x0001857d) midp_keyp_game_grid_pane

0x992b,	// (0x0001859d) midp_keyp_rocker_pane_ParamLimits

0x992b,	// (0x0001859d) midp_keyp_rocker_pane

0x9964,	// (0x000185d6) midp_keyp_sk_left_pane_ParamLimits

0x9964,	// (0x000185d6) midp_keyp_sk_left_pane

0x99be,	// (0x00018630) midp_keyp_sk_right_pane_ParamLimits

0x99be,	// (0x00018630) midp_keyp_sk_right_pane

0x2376,	// (0x00010fe8) bg_button_pane_cp03

0x9a18,	// (0x0001868a) midp_keyp_sk_left_pane_g1

0x2376,	// (0x00010fe8) bg_button_pane_cp04

0x9a18,	// (0x0001868a) midp_keyp_sk_right_pane_g1

0x7876,	// (0x000164e8) midp_keyp_rocker_pane_g1

0x9a21,	// (0x00018693) keyp_game_cell_pane_ParamLimits

0x9a21,	// (0x00018693) keyp_game_cell_pane

0x2376,	// (0x00010fe8) bg_button_pane_cp02

0x9a34,	// (0x000186a6) keyp_game_cell_pane_g1

0xd652,	// (0x0001c2c4) popup_fep_vkb2_window_ParamLimits

0xd652,	// (0x0001c2c4) popup_fep_vkb2_window

0xe6c6,	// (0x0001d338) aid_size_cell_vkb2_ParamLimits

0xe6c6,	// (0x0001d338) aid_size_cell_vkb2

0xe71a,	// (0x0001d38c) popup_fep_vkb2_window_g1_ParamLimits

0xe71a,	// (0x0001d38c) popup_fep_vkb2_window_g1

0xe762,	// (0x0001d3d4) vkb2_area_bottom_pane_ParamLimits

0xe762,	// (0x0001d3d4) vkb2_area_bottom_pane

0xe7ae,	// (0x0001d420) vkb2_area_keypad_pane_ParamLimits

0xe7ae,	// (0x0001d420) vkb2_area_keypad_pane

0xe7f0,	// (0x0001d462) vkb2_area_top_pane_ParamLimits

0xe7f0,	// (0x0001d462) vkb2_area_top_pane

0xe86a,	// (0x0001d4dc) vkb2_top_entry_pane_ParamLimits

0xe86a,	// (0x0001d4dc) vkb2_top_entry_pane

0xe894,	// (0x0001d506) vkb2_top_grid_left_pane_ParamLimits

0xe894,	// (0x0001d506) vkb2_top_grid_left_pane

0xe8b2,	// (0x0001d524) vkb2_top_grid_right_pane_ParamLimits

0xe8b2,	// (0x0001d524) vkb2_top_grid_right_pane

0xe8d0,	// (0x0001d542) vkb2_cell_keypad_pane_ParamLimits

0xe8d0,	// (0x0001d542) vkb2_cell_keypad_pane

0xe9a1,	// (0x0001d613) vkb2_area_bottom_grid_pane_ParamLimits

0xe9a1,	// (0x0001d613) vkb2_area_bottom_grid_pane

0xe9c7,	// (0x0001d639) vkb2_area_bottom_pane_g1_ParamLimits

0xe9c7,	// (0x0001d639) vkb2_area_bottom_pane_g1

0xe9eb,	// (0x0001d65d) vkb2_area_bottom_pane_g2_ParamLimits

0xe9eb,	// (0x0001d65d) vkb2_area_bottom_pane_g2

0xea19,	// (0x0001d68b) vkb2_area_bottom_pane_g3_ParamLimits

0xea19,	// (0x0001d68b) vkb2_area_bottom_pane_g3

0x0002,

0xfdaa,	// (0x0001ea1c) vkb2_area_bottom_pane_g_ParamLimits

0xfdaa,	// (0x0001ea1c) vkb2_area_bottom_pane_g

0xea7a,	// (0x0001d6ec) vkb2_top_cell_left_pane_ParamLimits

0xea7a,	// (0x0001d6ec) vkb2_top_cell_left_pane

0x9a45,	// (0x000186b7) vkb2_top_entry_pane_g1_ParamLimits

0x9a45,	// (0x000186b7) vkb2_top_entry_pane_g1

0x9a53,	// (0x000186c5) vkb2_top_entry_pane_t1_ParamLimits

0x9a53,	// (0x000186c5) vkb2_top_entry_pane_t1

0x9a85,	// (0x000186f7) vkb2_top_entry_pane_t2_ParamLimits

0x9a85,	// (0x000186f7) vkb2_top_entry_pane_t2

0x9ab7,	// (0x00018729) vkb2_top_entry_pane_t3_ParamLimits

0x9ab7,	// (0x00018729) vkb2_top_entry_pane_t3

0x0002,

0xfdb1,	// (0x0001ea23) vkb2_top_entry_pane_t_ParamLimits

0xfdb1,	// (0x0001ea23) vkb2_top_entry_pane_t

0xeac7,	// (0x0001d739) vkb2_top_grid_right_pane_g1_ParamLimits

0xeac7,	// (0x0001d739) vkb2_top_grid_right_pane_g1

0xeadd,	// (0x0001d74f) vkb2_top_grid_right_pane_g2_ParamLimits

0xeadd,	// (0x0001d74f) vkb2_top_grid_right_pane_g2

0xeaf5,	// (0x0001d767) vkb2_top_grid_right_pane_g3_ParamLimits

0xeaf5,	// (0x0001d767) vkb2_top_grid_right_pane_g3

0xeb0d,	// (0x0001d77f) vkb2_top_grid_right_pane_g4_ParamLimits

0xeb0d,	// (0x0001d77f) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb8,	// (0x0001ea2a) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb8,	// (0x0001ea2a) vkb2_top_grid_right_pane_g

0xeb23,	// (0x0001d795) vkb2_top_cell_left_pane_g1

0xeb3a,	// (0x0001d7ac) vkb2_cell_keypad_pane_g1_ParamLimits

0xeb3a,	// (0x0001d7ac) vkb2_cell_keypad_pane_g1

0x9acd,	// (0x0001873f) vkb2_cell_keypad_pane_t1_ParamLimits

0x9acd,	// (0x0001873f) vkb2_cell_keypad_pane_t1

0xeb48,	// (0x0001d7ba) vkb2_cell_bottom_grid_pane_ParamLimits

0xeb48,	// (0x0001d7ba) vkb2_cell_bottom_grid_pane

0xeb81,	// (0x0001d7f3) vkb2_cell_bottom_grid_pane_g1

0x9686,	// (0x000182f8) aid_call2_pane_cp02

0x968e,	// (0x00018300) aid_call_pane_cp02

0x9696,	// (0x00018308) clock_digital_number_pane_cp10

0x969e,	// (0x00018310) clock_digital_number_pane_cp11

0x96a6,	// (0x00018318) clock_digital_number_pane_cp12

0x96ae,	// (0x00018320) clock_digital_number_pane_cp13

0x96b6,	// (0x00018328) clock_digital_separator_pane_cp10

0x3a2f,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g1

0x3a2f,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g2

0x96be,	// (0x00018330) popup_clock_digital_analogue_window_cp2_g3

0x3a2f,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g4

0x96be,	// (0x00018330) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6d,	// (0x0001e9df) popup_clock_digital_analogue_window_cp2_g

0x96c6,	// (0x00018338) popup_clock_digital_analogue_window_cp2_t1

0x96d4,	// (0x00018346) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd78,	// (0x0001e9ea) popup_clock_digital_analogue_window_cp2_t

0x7876,	// (0x000164e8) clock_digital_number_pane_cp10_g1

0x7876,	// (0x000164e8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0001e7d2) clock_digital_number_pane_cp10_g

0x7876,	// (0x000164e8) clock_digital_separator_pane_cp10_g1

0x7876,	// (0x000164e8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0001e7d2) clock_digital_separator_pane_cp10_g

0x9502,	// (0x00018174) uniindi_top_pane_g3

0x9513,	// (0x00018185) uniindi_top_pane_g4

0xe95b,	// (0x0001d5cd) vkb2_row_keypad_pane_ParamLimits

0xe95b,	// (0x0001d5cd) vkb2_row_keypad_pane

0xeb9d,	// (0x0001d80f) vkb2_cell_t_keypad_pane_ParamLimits

0xeb9d,	// (0x0001d80f) vkb2_cell_t_keypad_pane

0xebad,	// (0x0001d81f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xebad,	// (0x0001d81f) vkb2_cell_t_keypad_pane_cp08

0xebc0,	// (0x0001d832) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xebc0,	// (0x0001d832) vkb2_cell_t_keypad_pane_cp09

0xebd4,	// (0x0001d846) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xebd4,	// (0x0001d846) vkb2_cell_t_keypad_pane_cp01

0xebe5,	// (0x0001d857) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xebe5,	// (0x0001d857) vkb2_cell_t_keypad_pane_cp02

0xebf6,	// (0x0001d868) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xebf6,	// (0x0001d868) vkb2_cell_t_keypad_pane_cp03

0xec07,	// (0x0001d879) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xec07,	// (0x0001d879) vkb2_cell_t_keypad_pane_cp04

0xec18,	// (0x0001d88a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xec18,	// (0x0001d88a) vkb2_cell_t_keypad_pane_cp05

0xec29,	// (0x0001d89b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xec29,	// (0x0001d89b) vkb2_cell_t_keypad_pane_cp06

0xec3a,	// (0x0001d8ac) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xec3a,	// (0x0001d8ac) vkb2_cell_t_keypad_pane_cp07

0xec4b,	// (0x0001d8bd) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xec4b,	// (0x0001d8bd) vkb2_cell_t_keypad_pane_cp10

0x7b16,	// (0x00016788) vkb2_cell_t_keypad_pane_g1

0x9ae4,	// (0x00018756) vkb2_cell_t_keypad_pane_t1

0x2376,	// (0x00010fe8) popup_grid_graphic2_window

0x9af6,	// (0x00018768) aid_size_cell_graphic2_ParamLimits

0x9af6,	// (0x00018768) aid_size_cell_graphic2

0x78e6,	// (0x00016558) bg_popup_window_pane_cp21_ParamLimits

0x78e6,	// (0x00016558) bg_popup_window_pane_cp21

0x9b22,	// (0x00018794) graphic2_pages_pane_ParamLimits

0x9b22,	// (0x00018794) graphic2_pages_pane

0x9b68,	// (0x000187da) grid_graphic2_control_pane_ParamLimits

0x9b68,	// (0x000187da) grid_graphic2_control_pane

0x9b96,	// (0x00018808) grid_graphic2_pane_ParamLimits

0x9b96,	// (0x00018808) grid_graphic2_pane

0x9bf6,	// (0x00018868) cell_graphic2_pane

0x2376,	// (0x00010fe8) main_comp_mode_pane

0x8d1f,	// (0x00017991) list_ai3_gene_pane_ParamLimits

0x914c,	// (0x00017dbe) bg_popup_window_pane_cp19_ParamLimits

0x9158,	// (0x00017dca) bg_touch_area_indi_pane_ParamLimits

0x9158,	// (0x00017dca) bg_touch_area_indi_pane

0x916e,	// (0x00017de0) bg_touch_area_indi_pane_cp01_ParamLimits

0x916e,	// (0x00017de0) bg_touch_area_indi_pane_cp01

0x9184,	// (0x00017df6) bg_touch_area_indi_pane_cp02_ParamLimits

0x9184,	// (0x00017df6) bg_touch_area_indi_pane_cp02

0x919c,	// (0x00017e0e) bg_touch_area_indi_pane_cp03_ParamLimits

0x919c,	// (0x00017e0e) bg_touch_area_indi_pane_cp03

0x91b6,	// (0x00017e28) popup_slider_window_g1_ParamLimits

0x91d2,	// (0x00017e44) popup_slider_window_g2_ParamLimits

0x91ee,	// (0x00017e60) popup_slider_window_g3_ParamLimits

0xfd02,	// (0x0001e974) popup_slider_window_g_ParamLimits

0x924a,	// (0x00017ebc) popup_slider_window_t1_ParamLimits

0x92be,	// (0x00017f30) small_volume_slider_vertical_pane_ParamLimits

0x9bf6,	// (0x00018868) cell_graphic2_pane_ParamLimits

0x9c45,	// (0x000188b7) bg_button_pane_cp10_ParamLimits

0x9c45,	// (0x000188b7) bg_button_pane_cp10

0x9c58,	// (0x000188ca) bg_button_pane_cp11_ParamLimits

0x9c58,	// (0x000188ca) bg_button_pane_cp11

0x9c6b,	// (0x000188dd) graphic2_pages_pane_g1_ParamLimits

0x9c6b,	// (0x000188dd) graphic2_pages_pane_g1

0x9c86,	// (0x000188f8) graphic2_pages_pane_g2_ParamLimits

0x9c86,	// (0x000188f8) graphic2_pages_pane_g2

0x0001,

0xfdc6,	// (0x0001ea38) graphic2_pages_pane_g_ParamLimits

0xfdc6,	// (0x0001ea38) graphic2_pages_pane_g

0x9c9e,	// (0x00018910) graphic2_pages_pane_t1_ParamLimits

0x9c9e,	// (0x00018910) graphic2_pages_pane_t1

0x9cb6,	// (0x00018928) cell_graphic2_control_pane_ParamLimits

0x9cb6,	// (0x00018928) cell_graphic2_control_pane

0x9cd0,	// (0x00018942) cell_graphic2_pane_g1_ParamLimits

0x9cd0,	// (0x00018942) cell_graphic2_pane_g1

0x9cdd,	// (0x0001894f) cell_graphic2_pane_g2_ParamLimits

0x9cdd,	// (0x0001894f) cell_graphic2_pane_g2

0x9cea,	// (0x0001895c) cell_graphic2_pane_g3_ParamLimits

0x9cea,	// (0x0001895c) cell_graphic2_pane_g3

0x9cf7,	// (0x00018969) cell_graphic2_pane_g4_ParamLimits

0x9cf7,	// (0x00018969) cell_graphic2_pane_g4

0x9d04,	// (0x00018976) cell_graphic2_pane_g5_ParamLimits

0x9d04,	// (0x00018976) cell_graphic2_pane_g5

0x0004,

0xfdcb,	// (0x0001ea3d) cell_graphic2_pane_g_ParamLimits

0xfdcb,	// (0x0001ea3d) cell_graphic2_pane_g

0x9d1f,	// (0x00018991) cell_graphic2_pane_t1_ParamLimits

0x9d1f,	// (0x00018991) cell_graphic2_pane_t1

0x5017,	// (0x00013c89) grid_highlight_pane_cp11_ParamLimits

0x5017,	// (0x00013c89) grid_highlight_pane_cp11

0x3251,	// (0x00011ec3) bg_button_pane_cp05

0x9d35,	// (0x000189a7) cell_graphic2_control_pane_g1

0x7876,	// (0x000164e8) bg_touch_area_indi_pane_g1

0x9d42,	// (0x000189b4) aid_cmod_rocker_key_size

0x9d4c,	// (0x000189be) aid_cmode_itu_key_size

0x9d56,	// (0x000189c8) main_cmode_video_pane

0x9d60,	// (0x000189d2) main_comp_mode_itu_pane

0x9d6c,	// (0x000189de) main_comp_mode_rocker_pane

0x9d78,	// (0x000189ea) cell_cmode_rocker_pane_ParamLimits

0x9d78,	// (0x000189ea) cell_cmode_rocker_pane

0x9d8a,	// (0x000189fc) cell_cmode_itu_pane_ParamLimits

0x9d8a,	// (0x000189fc) cell_cmode_itu_pane

0x3251,	// (0x00011ec3) bg_button_pane_cp06_ParamLimits

0x3251,	// (0x00011ec3) bg_button_pane_cp06

0x7b16,	// (0x00016788) cell_cmode_rocker_pane_g1_ParamLimits

0x7b16,	// (0x00016788) cell_cmode_rocker_pane_g1

0x9362,	// (0x00017fd4) cell_cmode_rocker_pane_g2_ParamLimits

0x9362,	// (0x00017fd4) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0001ea48) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0001ea48) cell_cmode_rocker_pane_g

0x2376,	// (0x00010fe8) bg_button_pane_cp07

0x9d9f,	// (0x00018a11) cell_cmode_itu_pane_g1

0x9da8,	// (0x00018a1a) cell_cmode_itu_pane_t1

0x9db6,	// (0x00018a28) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0001ea4d) cell_cmode_itu_pane_t

0x9585,	// (0x000181f7) aid_touch_ctrl_left

0x958d,	// (0x000181ff) aid_touch_ctrl_right

0x2376,	// (0x00010fe8) compa_mode_pane

0x9dc4,	// (0x00018a36) aid_cmod_rocker_key_size_cp

0x9dce,	// (0x00018a40) aid_cmode_itu_key_size_cp

0x9dd8,	// (0x00018a4a) compa_mode_pane_g1

0x9de0,	// (0x00018a52) compa_mode_pane_g2

0x9de8,	// (0x00018a5a) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0001ea52) compa_mode_pane_g

0x9df0,	// (0x00018a62) main_comp_mode_itu_pane_cp

0x9df8,	// (0x00018a6a) main_comp_mode_rocker_pane_cp

0x9e00,	// (0x00018a72) cell_cmode_itu_pane_cp_ParamLimits

0x9e00,	// (0x00018a72) cell_cmode_itu_pane_cp

0x9e15,	// (0x00018a87) cell_cmode_rocker_pane_cp_ParamLimits

0x9e15,	// (0x00018a87) cell_cmode_rocker_pane_cp

0x3251,	// (0x00011ec3) bg_button_pane_cp06_cp_ParamLimits

0x3251,	// (0x00011ec3) bg_button_pane_cp06_cp

0x7b16,	// (0x00016788) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7b16,	// (0x00016788) cell_cmode_rocker_pane_g1_cp

0x7876,	// (0x000164e8) cell_cmode_rocker_pane_g2_cp

0x2376,	// (0x00010fe8) bg_button_pane_cp07_cp

0x6504,	// (0x00015176) cell_cmode_itu_pane_g1_cp

0x9e27,	// (0x00018a99) cell_cmode_itu_pane_t1_cp

0x9e27,	// (0x00018a99) cell_cmode_itu_pane_t2_cp

0x64f1,	// (0x00015163) settings_code_pane_cp2

0x246a,	// (0x000110dc) bg_popup_window_pane_cp3_ParamLimits

0x28e7,	// (0x00011559) heading_pane_cp3_ParamLimits

0x28f3,	// (0x00011565) listscroll_popup_graphic_pane_ParamLimits

0xe270,	// (0x0001cee2) fep_hwr_aid_pane_ParamLimits

0xe63a,	// (0x0001d2ac) aid_touch_sctrl_top_ParamLimits

0xe647,	// (0x0001d2b9) sctrl_sk_top_pane_g1_ParamLimits

0x7b16,	// (0x00016788) sctrl_sk_top_pane_g2_ParamLimits

0xfd1b,	// (0x0001e98d) sctrl_sk_top_pane_g_ParamLimits

0xe654,	// (0x0001d2c6) sctrl_sk_top_pane_t1_ParamLimits

0xe63a,	// (0x0001d2ac) aid_touch_sctrl_bottom_ParamLimits

0xe654,	// (0x0001d2c6) sctrl_sk_bottom_pane_t1_ParamLimits

0x94ce,	// (0x00018140) aid_area_touch_clock

0xe832,	// (0x0001d4a4) aid_vkb2_area_top_pane_cell_ParamLimits

0xe832,	// (0x0001d4a4) aid_vkb2_area_top_pane_cell

0xe97d,	// (0x0001d5ef) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe97d,	// (0x0001d5ef) aid_vkb2_area_bottom_pane_cell

0x9a3d,	// (0x000186af) popup_char_count_window

0x9e35,	// (0x00018aa7) popup_char_count_window_g1

0x9e3e,	// (0x00018ab0) popup_char_count_window_g2

0x9e47,	// (0x00018ab9) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0001ea59) popup_char_count_window_g

0x9e50,	// (0x00018ac2) popup_char_count_window_t1

0xe6f8,	// (0x0001d36a) popup_fep_char_preview_window_ParamLimits

0xe6f8,	// (0x0001d36a) popup_fep_char_preview_window

0xe850,	// (0x0001d4c2) vkb2_top_candi_pane_ParamLimits

0xe850,	// (0x0001d4c2) vkb2_top_candi_pane

0x9e5e,	// (0x00018ad0) cell_vkb2_top_candi_pane_ParamLimits

0x9e5e,	// (0x00018ad0) cell_vkb2_top_candi_pane

0x5601,	// (0x00014273) bg_popup_fep_char_preview_window_ParamLimits

0x5601,	// (0x00014273) bg_popup_fep_char_preview_window

0xec60,	// (0x0001d8d2) popup_fep_char_preview_window_t1_ParamLimits

0xec60,	// (0x0001d8d2) popup_fep_char_preview_window_t1

0x9ebb,	// (0x00018b2d) bg_popup_fep_char_preview_window_g1

0x9eb3,	// (0x00018b25) bg_popup_fep_char_preview_window_g2

0x9eab,	// (0x00018b1d) bg_popup_fep_char_preview_window_g3

0x9ecb,	// (0x00018b3d) bg_popup_fep_char_preview_window_g4

0x9ec3,	// (0x00018b35) bg_popup_fep_char_preview_window_g5

0xec9a,	// (0x0001d90c) bg_popup_fep_char_preview_window_g6

0x9efc,	// (0x00018b6e) bg_popup_fep_char_preview_window_g7

0x9ef4,	// (0x00018b66) bg_popup_fep_char_preview_window_g8

0x9f04,	// (0x00018b76) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0001ea60) bg_popup_fep_char_preview_window_g

0x7b16,	// (0x00016788) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7b16,	// (0x00016788) cell_vkb2_top_candi_pane_g1

0x8127,	// (0x00016d99) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8127,	// (0x00016d99) cell_vkb2_top_candi_pane_g2

0x8148,	// (0x00016dba) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8148,	// (0x00016dba) cell_vkb2_top_candi_pane_g3

0xeca2,	// (0x0001d914) cell_vkb2_top_candi_pane_g4_ParamLimits

0xeca2,	// (0x0001d914) cell_vkb2_top_candi_pane_g4

0x9ed3,	// (0x00018b45) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9ed3,	// (0x00018b45) cell_vkb2_top_candi_pane_g5

0x9362,	// (0x00017fd4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9362,	// (0x00017fd4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0001ea73) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0001ea73) cell_vkb2_top_candi_pane_g

0xecc3,	// (0x0001d935) cell_vkb2_top_candi_pane_t1

0xe0de,	// (0x0001cd50) aid_size_touch_slider_mark_ParamLimits

0xe0de,	// (0x0001cd50) aid_size_touch_slider_mark

0x9b58,	// (0x000187ca) grid_graphic2_catg_pane_ParamLimits

0x9b58,	// (0x000187ca) grid_graphic2_catg_pane

0x9bd2,	// (0x00018844) popup_grid_graphic2_window_t1_ParamLimits

0x9bd2,	// (0x00018844) popup_grid_graphic2_window_t1

0x9be4,	// (0x00018856) popup_grid_graphic2_window_t2_ParamLimits

0x9be4,	// (0x00018856) popup_grid_graphic2_window_t2

0x0001,

0xfdc1,	// (0x0001ea33) popup_grid_graphic2_window_t_ParamLimits

0xfdc1,	// (0x0001ea33) popup_grid_graphic2_window_t

0x3251,	// (0x00011ec3) bg_button_pane_cp05_ParamLimits

0x9d35,	// (0x000189a7) cell_graphic2_control_pane_g1_ParamLimits

0x9f0c,	// (0x00018b7e) cell_graphic2_catg_pane_ParamLimits

0x9f0c,	// (0x00018b7e) cell_graphic2_catg_pane

0x2376,	// (0x00010fe8) bg_button_pane_cp12

0x9f1e,	// (0x00018b90) cell_graphic2_catg_pane_g1

0x949a,	// (0x0001810c) cell_tb_ext_pane_t1_ParamLimits

0xea9a,	// (0x0001d70c) vkb2_top_cell_right_narrow_pane_ParamLimits

0xea9a,	// (0x0001d70c) vkb2_top_cell_right_narrow_pane

0xeab2,	// (0x0001d724) vkb2_top_cell_right_wide_pane_ParamLimits

0xeab2,	// (0x0001d724) vkb2_top_cell_right_wide_pane

0x78e6,	// (0x00016558) bg_vkb2_func_pane_ParamLimits

0x78e6,	// (0x00016558) bg_vkb2_func_pane

0xeb23,	// (0x0001d795) vkb2_top_cell_left_pane_g1_ParamLimits

0x78e6,	// (0x00016558) bg_vkb2_fuc_pane_cp03_ParamLimits

0x78e6,	// (0x00016558) bg_vkb2_fuc_pane_cp03

0xeb81,	// (0x0001d7f3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4f0d,	// (0x00013b7f) bg_vkb2_func_pane_g1

0x4f05,	// (0x00013b77) bg_vkb2_func_pane_g2

0x4f15,	// (0x00013b87) bg_vkb2_func_pane_g3

0x4f1d,	// (0x00013b8f) bg_vkb2_func_pane_g4

0x4f25,	// (0x00013b97) bg_vkb2_func_pane_g5

0x4f2d,	// (0x00013b9f) bg_vkb2_func_pane_g6

0x4f3d,	// (0x00013baf) bg_vkb2_func_pane_g7

0x4f35,	// (0x00013ba7) bg_vkb2_func_pane_g8

0x4efd,	// (0x00013b6f) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0001ea80) bg_vkb2_func_pane_g

0x78e6,	// (0x00016558) bg_vkb2_fuc_pane_cp01_ParamLimits

0x78e6,	// (0x00016558) bg_vkb2_fuc_pane_cp01

0xeb23,	// (0x0001d795) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xeb23,	// (0x0001d795) vkb2_top_cell_right_wide_pane_g1

0x78e6,	// (0x00016558) bg_vkb2_fuc_pane_cp02_ParamLimits

0x78e6,	// (0x00016558) bg_vkb2_fuc_pane_cp02

0xeb81,	// (0x0001d7f3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xeb81,	// (0x0001d7f3) vkb2_top_cell_right_narrow_pane_g1

0x90d0,	// (0x00017d42) aid_touch_area_decrease_ParamLimits

0x90d0,	// (0x00017d42) aid_touch_area_decrease

0x90ee,	// (0x00017d60) aid_touch_area_increase_ParamLimits

0x90ee,	// (0x00017d60) aid_touch_area_increase

0x90fa,	// (0x00017d6c) aid_touch_area_mute_ParamLimits

0x90fa,	// (0x00017d6c) aid_touch_area_mute

0x911e,	// (0x00017d90) aid_touch_area_slider_ParamLimits

0x911e,	// (0x00017d90) aid_touch_area_slider

0x920a,	// (0x00017e7c) popup_slider_window_g4_ParamLimits

0x920a,	// (0x00017e7c) popup_slider_window_g4

0x9216,	// (0x00017e88) popup_slider_window_g5_ParamLimits

0x9216,	// (0x00017e88) popup_slider_window_g5

0x9238,	// (0x00017eaa) popup_slider_window_g6_ParamLimits

0x9238,	// (0x00017eaa) popup_slider_window_g6

0x9278,	// (0x00017eea) popup_slider_window_t2_ParamLimits

0x9278,	// (0x00017eea) popup_slider_window_t2

0x0001,

0xfd0f,	// (0x0001e981) popup_slider_window_t_ParamLimits

0xfd0f,	// (0x0001e981) popup_slider_window_t

0x9290,	// (0x00017f02) slider_pane_ParamLimits

0x9290,	// (0x00017f02) slider_pane

0x9f27,	// (0x00018b99) slider_pane_g1_ParamLimits

0x9f27,	// (0x00018b99) slider_pane_g1

0x9f3b,	// (0x00018bad) slider_pane_g2_ParamLimits

0x9f3b,	// (0x00018bad) slider_pane_g2

0x9f51,	// (0x00018bc3) slider_pane_g3_ParamLimits

0x9f51,	// (0x00018bc3) slider_pane_g3

0x0003,

0xfe21,	// (0x0001ea93) slider_pane_g_ParamLimits

0xfe21,	// (0x0001ea93) slider_pane_g

0x48fd,	// (0x0001356f) popup_tb_float_extension_window_ParamLimits

0x48fd,	// (0x0001356f) popup_tb_float_extension_window

0x9f7d,	// (0x00018bef) aid_size_cell_tb_float_ext

0x2376,	// (0x00010fe8) bg_popup_sub_window_cp28

0x9f89,	// (0x00018bfb) grid_tb_float_ext_pane

0x9f93,	// (0x00018c05) cell_tb_float_ext_pane_ParamLimits

0x9f93,	// (0x00018c05) cell_tb_float_ext_pane

0x9fad,	// (0x00018c1f) cell_tb_float_ext_pane_g1

0x9fb6,	// (0x00018c28) grid_highlight_pane_cp12

0xe3a3,	// (0x0001d015) cell_last_hwr_side_pane_ParamLimits

0xe3a3,	// (0x0001d015) cell_last_hwr_side_pane

0x7876,	// (0x000164e8) cell_last_hwr_side_pane_g1

0x9fbf,	// (0x00018c31) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0001ea9c) cell_last_hwr_side_pane_g

0xea49,	// (0x0001d6bb) vkb2_area_bottom_space_btn_pane_ParamLimits

0xea49,	// (0x0001d6bb) vkb2_area_bottom_space_btn_pane

0x7b16,	// (0x00016788) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9ae4,	// (0x00018756) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xecc3,	// (0x0001d935) cell_vkb2_top_candi_pane_t1_ParamLimits

0xece2,	// (0x0001d954) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xece2,	// (0x0001d954) vkb2_area_bottom_space_btn_pane_g1

0xed1c,	// (0x0001d98e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xed1c,	// (0x0001d98e) vkb2_area_bottom_space_btn_pane_g2

0xed52,	// (0x0001d9c4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xed52,	// (0x0001d9c4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0001eaa1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0001eaa1) vkb2_area_bottom_space_btn_pane_g

0xe317,	// (0x0001cf89) cel_fep_hwr_func_pane_ParamLimits

0xe317,	// (0x0001cf89) cel_fep_hwr_func_pane

0xe353,	// (0x0001cfc5) cell_hwr_side_button_pane_ParamLimits

0xe353,	// (0x0001cfc5) cell_hwr_side_button_pane

0x94ce,	// (0x00018140) aid_area_touch_clock_ParamLimits

0x270d,	// (0x0001137f) bg_uniindi_top_pane_ParamLimits

0x94e0,	// (0x00018152) uniindi_top_pane_g1_ParamLimits

0x94f6,	// (0x00018168) uniindi_top_pane_g2_ParamLimits

0x9502,	// (0x00018174) uniindi_top_pane_g3_ParamLimits

0x9513,	// (0x00018185) uniindi_top_pane_g4_ParamLimits

0xfd47,	// (0x0001e9b9) uniindi_top_pane_g_ParamLimits

0x9520,	// (0x00018192) uniindi_top_pane_t1_ParamLimits

0x270d,	// (0x0001137f) bg_vkb2_func_pane_cp01_ParamLimits

0x270d,	// (0x0001137f) bg_vkb2_func_pane_cp01

0xb297,	// (0x00019f09) cel_fep_hwr_func_pane_g1_ParamLimits

0xb297,	// (0x00019f09) cel_fep_hwr_func_pane_g1

0x270d,	// (0x0001137f) bg_vkb2_func_pane_cp02_ParamLimits

0x270d,	// (0x0001137f) bg_vkb2_func_pane_cp02

0xb297,	// (0x00019f09) cell_hwr_side_button_pane_g1_ParamLimits

0xb297,	// (0x00019f09) cell_hwr_side_button_pane_g1

0x4d44,	// (0x000139b6) status_pane_g4_ParamLimits

0x4d44,	// (0x000139b6) status_pane_g4

0x4d5e,	// (0x000139d0) status_pane_t1

0x75af,	// (0x00016221) form2_midp_gauge_slider_cont_pane

0x75b7,	// (0x00016229) form2_midp_gauge_slider_pane_t1_ParamLimits

0x75c9,	// (0x0001623b) form2_midp_gauge_slider_pane_t2_ParamLimits

0x75db,	// (0x0001624d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0001e785) form2_midp_gauge_slider_pane_t_ParamLimits

0x75ed,	// (0x0001625f) form2_midp_slider_pane_ParamLimits

0xe6b8,	// (0x0001d32a) aid_size_cell_func_vkb2_ParamLimits

0xe6b8,	// (0x0001d32a) aid_size_cell_func_vkb2

0x9f69,	// (0x00018bdb) slider_pane_g4_ParamLimits

0x9f69,	// (0x00018bdb) slider_pane_g4

0xed9c,	// (0x0001da0e) form2_midp_gauge_slider_pane_t2_cp01

0xedaa,	// (0x0001da1c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xedaa,	// (0x0001da1c) form2_midp_gauge_slider_pane_t3_cp01

0xedc7,	// (0x0001da39) form2_midp_slider_pane_cp01

0x2376,	// (0x00010fe8) navi_smil_pane

0xb2c7,	// (0x00019f39) navi_smil_pane_g1

0xb2cf,	// (0x00019f41) navi_smil_pane_t1

0xb2a5,	// (0x00019f17) form2_midp_slider_pane_g1

0xb2ae,	// (0x00019f20) form2_midp_slider_pane_g2

0xb2b6,	// (0x00019f28) form2_midp_slider_pane_g3

0xb2a5,	// (0x00019f17) form2_midp_slider_pane_g4

0xedd0,	// (0x0001da42) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0001eaaa) form2_midp_slider_pane_g

0xed8c,	// (0x0001d9fe) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xed8c,	// (0x0001d9fe) vkb2_area_bottom_space_btn_pane_g4

0x4b7a,	// (0x000137ec) lc0_navi_pane_ParamLimits

0x4b7a,	// (0x000137ec) lc0_navi_pane

0x4bf0,	// (0x00013862) lc0_stat_indi_pane_ParamLimits

0x4bf0,	// (0x00013862) lc0_stat_indi_pane

0x4c07,	// (0x00013879) ls0_title_pane_ParamLimits

0x4c07,	// (0x00013879) ls0_title_pane

0x3251,	// (0x00011ec3) bg_popup_sub_pane_cp14_ParamLimits

0x94b5,	// (0x00018127) list_uniindi_pane_ParamLimits

0x94c1,	// (0x00018133) uniindi_top_pane_ParamLimits

0x955d,	// (0x000181cf) list_single_uniindi_pane_g1_ParamLimits

0x9570,	// (0x000181e2) list_single_uniindi_pane_t1_ParamLimits

0xedd9,	// (0x0001da4b) lc0_stat_clock_pane_ParamLimits

0xedd9,	// (0x0001da4b) lc0_stat_clock_pane

0xede6,	// (0x0001da58) lc0_stat_indi_pane_g1_ParamLimits

0xede6,	// (0x0001da58) lc0_stat_indi_pane_g1

0xedf3,	// (0x0001da65) lc0_stat_indi_pane_g2_ParamLimits

0xedf3,	// (0x0001da65) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0001eab5) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0001eab5) lc0_stat_indi_pane_g

0xee00,	// (0x0001da72) lc0_uni_indicator_pane_ParamLimits

0xee00,	// (0x0001da72) lc0_uni_indicator_pane

0xb2dd,	// (0x00019f4f) ls0_title_pane_g1_ParamLimits

0xb2dd,	// (0x00019f4f) ls0_title_pane_g1

0xee0d,	// (0x0001da7f) ls0_title_pane_t1_ParamLimits

0xee0d,	// (0x0001da7f) ls0_title_pane_t1

0xee43,	// (0x0001dab5) lc0_uni_indicator_pane_g1_ParamLimits

0xee43,	// (0x0001dab5) lc0_uni_indicator_pane_g1

0xb2f1,	// (0x00019f63) lc0_stat_clock_pane_t1

0x2376,	// (0x00010fe8) main_ai5_pane

0xb2ff,	// (0x00019f71) ai5_sk_pane_ParamLimits

0xb2ff,	// (0x00019f71) ai5_sk_pane

0xee57,	// (0x0001dac9) cell_ai5_widget_pane_ParamLimits

0xee57,	// (0x0001dac9) cell_ai5_widget_pane

0xb30c,	// (0x00019f7e) aid_size_cell_widget_grid

0xb31e,	// (0x00019f90) bg_ai5_widget_pane_ParamLimits

0xb31e,	// (0x00019f90) bg_ai5_widget_pane

0xeef5,	// (0x0001db67) cell_ai5_widget_pane_g2

0xef05,	// (0x0001db77) cell_ai5_widget_pane_g3

0xef19,	// (0x0001db8b) cell_ai5_widget_pane_g4

0xef25,	// (0x0001db97) cell_ai5_widget_pane_g5

0xef31,	// (0x0001dba3) cell_ai5_widget_pane_g6

0xef3d,	// (0x0001dbaf) cell_ai5_widget_pane_g7

0xef85,	// (0x0001dbf7) cell_ai5_widget_pane_t1_ParamLimits

0xef85,	// (0x0001dbf7) cell_ai5_widget_pane_t1

0xefa2,	// (0x0001dc14) cell_ai5_widget_pane_t2_ParamLimits

0xefa2,	// (0x0001dc14) cell_ai5_widget_pane_t2

0xefba,	// (0x0001dc2c) cell_ai5_widget_pane_t3_ParamLimits

0xefba,	// (0x0001dc2c) cell_ai5_widget_pane_t3

0xefd2,	// (0x0001dc44) cell_ai5_widget_pane_t4_ParamLimits

0xefd2,	// (0x0001dc44) cell_ai5_widget_pane_t4

0xefec,	// (0x0001dc5e) cell_ai5_widget_pane_t5_ParamLimits

0xefec,	// (0x0001dc5e) cell_ai5_widget_pane_t5

0xb32a,	// (0x00019f9c) cell_ai5_widget_pane_t6_ParamLimits

0xb32a,	// (0x00019f9c) cell_ai5_widget_pane_t6

0xb33c,	// (0x00019fae) cell_ai5_widget_pane_t7_ParamLimits

0xb33c,	// (0x00019fae) cell_ai5_widget_pane_t7

0xf00b,	// (0x0001dc7d) cell_ai5_widget_pane_t8_ParamLimits

0xf00b,	// (0x0001dc7d) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0001eacf) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0001eacf) cell_ai5_widget_pane_t

0xf053,	// (0x0001dcc5) grid_ai5_widget_pane

0x3251,	// (0x00011ec3) highlight_cell_ai5_widget_pane_ParamLimits

0x3251,	// (0x00011ec3) highlight_cell_ai5_widget_pane

0xf06b,	// (0x0001dcdd) ai5_sk_left_pane

0xf075,	// (0x0001dce7) ai5_sk_middle_pane

0xf07f,	// (0x0001dcf1) ai5_sk_right_pane

0xb355,	// (0x00019fc7) bg_ai5_widget_pane_g1_ParamLimits

0xb355,	// (0x00019fc7) bg_ai5_widget_pane_g1

0xb361,	// (0x00019fd3) bg_ai5_widget_pane_g2_ParamLimits

0xb361,	// (0x00019fd3) bg_ai5_widget_pane_g2

0xb36d,	// (0x00019fdf) bg_ai5_widget_pane_g3_ParamLimits

0xb36d,	// (0x00019fdf) bg_ai5_widget_pane_g3

0xb379,	// (0x00019feb) bg_ai5_widget_pane_g4_ParamLimits

0xb379,	// (0x00019feb) bg_ai5_widget_pane_g4

0xb385,	// (0x00019ff7) bg_ai5_widget_pane_g5_ParamLimits

0xb385,	// (0x00019ff7) bg_ai5_widget_pane_g5

0xb391,	// (0x0001a003) bg_ai5_widget_pane_g6_ParamLimits

0xb391,	// (0x0001a003) bg_ai5_widget_pane_g6

0xb39d,	// (0x0001a00f) bg_ai5_widget_pane_g7_ParamLimits

0xb39d,	// (0x0001a00f) bg_ai5_widget_pane_g7

0xb3a9,	// (0x0001a01b) bg_ai5_widget_pane_g8_ParamLimits

0xb3a9,	// (0x0001a01b) bg_ai5_widget_pane_g8

0xb3b5,	// (0x0001a027) bg_ai5_widget_pane_g9_ParamLimits

0xb3b5,	// (0x0001a027) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0001eae4) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0001eae4) bg_ai5_widget_pane_g

0xb3c1,	// (0x0001a033) cell_shortcut_ai5_widget_pane_ParamLimits

0xb3c1,	// (0x0001a033) cell_shortcut_ai5_widget_pane

0x254d,	// (0x000111bf) bg_cell_shortcut_ai5_widget_pane

0xb3d3,	// (0x0001a045) cell_grid_ai5_widget_pane_g1

0xb3dc,	// (0x0001a04e) highlight_cell_shortcut_ai5_widget_pane

0x4f05,	// (0x00013b77) ai5_sk_left_pane_g1

0xb3e4,	// (0x0001a056) ai5_sk_left_pane_g2

0xb3ec,	// (0x0001a05e) ai5_sk_left_pane_g3

0xb3f4,	// (0x0001a066) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0001eaf7) ai5_sk_left_pane_g

0xb3fc,	// (0x0001a06e) ai5_sk_left_pane_t1

0x4f0d,	// (0x00013b7f) ai5_sk_right_pane_g1

0xb40a,	// (0x0001a07c) ai5_sk_right_pane_g2

0xb412,	// (0x0001a084) ai5_sk_right_pane_g3

0xb41a,	// (0x0001a08c) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0001eb00) ai5_sk_right_pane_g

0xb422,	// (0x0001a094) ai5_sk_right_pane_t1

0x4f0d,	// (0x00013b7f) ai5_sk_middle_pane_g1

0x4f05,	// (0x00013b77) ai5_sk_middle_pane_g2

0x4f25,	// (0x00013b97) ai5_sk_middle_pane_g3

0xb412,	// (0x0001a084) ai5_sk_middle_pane_g4

0xb3ec,	// (0x0001a05e) ai5_sk_middle_pane_g5

0xb430,	// (0x0001a0a2) ai5_sk_middle_pane_g6

0xf0a5,	// (0x0001dd17) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0001eb09) ai5_sk_middle_pane_g

0x4a0a,	// (0x0001367c) aid_touch_area_size_lc0_ParamLimits

0x4a0a,	// (0x0001367c) aid_touch_area_size_lc0

0xe4a2,	// (0x0001d114) cell_hwr_candidate_pane_t1_ParamLimits

0x4a26,	// (0x00013698) aid_touch_navi_pane

0x4cee,	// (0x00013960) status_dt_navi_pane_ParamLimits

0x4cee,	// (0x00013960) status_dt_navi_pane

0x4cfb,	// (0x0001396d) status_dt_sta_pane_ParamLimits

0x4cfb,	// (0x0001396d) status_dt_sta_pane

0xf0ad,	// (0x0001dd1f) dt_sta_controll_pane

0xf0ba,	// (0x0001dd2c) dt_sta_indi_pane

0xf0cb,	// (0x0001dd3d) dt_sta_title_pane

0x270d,	// (0x0001137f) bg_dt_sta_indi_pane_ParamLimits

0x270d,	// (0x0001137f) bg_dt_sta_indi_pane

0xb438,	// (0x0001a0aa) dt_sta_battery_pane

0xf0de,	// (0x0001dd50) dt_sta_indi_pane_g1

0xf0e7,	// (0x0001dd59) dt_sta_indi_pane_g2

0xf0f0,	// (0x0001dd62) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0001eb18) dt_sta_indi_pane_g

0xf0f9,	// (0x0001dd6b) dt_sta_signal_pane

0x3251,	// (0x00011ec3) bg_dt_sta_title_pane_ParamLimits

0x3251,	// (0x00011ec3) bg_dt_sta_title_pane

0xf102,	// (0x0001dd74) dt_sta_title_pane_g1

0xf10a,	// (0x0001dd7c) dt_sta_title_pane_t1_ParamLimits

0xf10a,	// (0x0001dd7c) dt_sta_title_pane_t1

0x2376,	// (0x00010fe8) bg_dt_sta_control_pane

0xf11f,	// (0x0001dd91) dt_sta_controll_pane_g1

0xf128,	// (0x0001dd9a) bg_dt_sta_title_pane_g1

0xf131,	// (0x0001dda3) bg_dt_sta_title_pane_g2

0xf13a,	// (0x0001ddac) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0001eb1f) bg_dt_sta_title_pane_g

0x7876,	// (0x000164e8) bg_dt_sta_indi_pane_g1

0xb440,	// (0x0001a0b2) dt_sta_signal_pane_g1

0xb448,	// (0x0001a0ba) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0001eb26) dt_sta_signal_pane_g

0xb450,	// (0x0001a0c2) dt_sta_battery_pane_g1

0xb459,	// (0x0001a0cb) dt_sta_battery_pane_t1

0x7876,	// (0x000164e8) bg_dt_sta_control_pane_g1

0x3b16,	// (0x00012788) fep_china_uni_eep_pane

0x3b1e,	// (0x00012790) fep_china_uni_entry_pane_ParamLimits

0x3b2e,	// (0x000127a0) popup_fep_china_uni_window_g1_ParamLimits

0x3b3e,	// (0x000127b0) popup_fep_china_uni_window_g2_ParamLimits

0x3b3e,	// (0x000127b0) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0001e3cf) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0001e3cf) popup_fep_china_uni_window_g

0xb468,	// (0x0001a0da) fep_china_uni_eep_pane_g1

0xb470,	// (0x0001a0e2) fep_china_uni_eep_pane_t1

0xb2be,	// (0x00019f30) aid_touch_area_size_smil_player

0x4b72,	// (0x000137e4) lc0_clock_pane

0x4d52,	// (0x000139c4) status_pane_g5_ParamLimits

0x4d52,	// (0x000139c4) status_pane_g5

0x45c2,	// (0x00013234) popup_keymap_window

0x4d10,	// (0x00013982) status_icon_pane

0xef05,	// (0x0001db77) cell_ai5_widget_pane_g3_ParamLimits

0xef19,	// (0x0001db8b) cell_ai5_widget_pane_g4_ParamLimits

0xef25,	// (0x0001db97) cell_ai5_widget_pane_g5_ParamLimits

0xef49,	// (0x0001dbbb) cell_ai5_widget_pane_g8_ParamLimits

0xef49,	// (0x0001dbbb) cell_ai5_widget_pane_g8

0xef5d,	// (0x0001dbcf) cell_ai5_widget_pane_g9_ParamLimits

0xef5d,	// (0x0001dbcf) cell_ai5_widget_pane_g9

0xef71,	// (0x0001dbe3) cell_ai5_widget_pane_g10_ParamLimits

0xef71,	// (0x0001dbe3) cell_ai5_widget_pane_g10

0xb47f,	// (0x0001a0f1) status_icon_pane_g1

0x2376,	// (0x00010fe8) bg_popup_sub_pane_cp13

0xb487,	// (0x0001a0f9) popup_keymap_window_t1

0x438c,	// (0x00012ffe) control_pane_g6_ParamLimits

0x438c,	// (0x00012ffe) control_pane_g6

0x437f,	// (0x00012ff1) control_pane_g7_ParamLimits

0x437f,	// (0x00012ff1) control_pane_g7

0x4372,	// (0x00012fe4) control_pane_g8_ParamLimits

0x4372,	// (0x00012fe4) control_pane_g8

0xf0ad,	// (0x0001dd1f) dt_sta_controll_pane_ParamLimits

0xf0ba,	// (0x0001dd2c) dt_sta_indi_pane_ParamLimits

0xf0cb,	// (0x0001dd3d) dt_sta_title_pane_ParamLimits

0x2c28,	// (0x0001189a) aid_size_touch_scroll_bar_cale

0xd622,	// (0x0001c294) popup_discreet_window_ParamLimits

0xd622,	// (0x0001c294) popup_discreet_window

0xd6aa,	// (0x0001c31c) popup_sk_window

0x5601,	// (0x00014273) bg_popup_sub_pane_cp28_ParamLimits

0x5601,	// (0x00014273) bg_popup_sub_pane_cp28

0xb495,	// (0x0001a107) popup_discreet_window_g1_ParamLimits

0xb495,	// (0x0001a107) popup_discreet_window_g1

0xb4b5,	// (0x0001a127) popup_discreet_window_t1_ParamLimits

0xb4b5,	// (0x0001a127) popup_discreet_window_t1

0xb4d3,	// (0x0001a145) popup_discreet_window_t2_ParamLimits

0xb4d3,	// (0x0001a145) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0001eb2b) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0001eb2b) popup_discreet_window_t

0xf143,	// (0x0001ddb5) popup_sk_window_g1

0xf14d,	// (0x0001ddbf) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0001eb32) popup_sk_window_g

0xb533,	// (0x0001a1a5) popup_sk_window_t1

0xb525,	// (0x0001a197) popup_sk_window_t1_copy1

0xeef5,	// (0x0001db67) cell_ai5_widget_pane_g2_ParamLimits

0xf01d,	// (0x0001dc8f) cell_ai5_widget_pane_t9_ParamLimits

0xf01d,	// (0x0001dc8f) cell_ai5_widget_pane_t9

0x2376,	// (0x00010fe8) main_fep_fshwr2_pane

0xf157,	// (0x0001ddc9) aid_fshwr2_btn_pane

0xf15f,	// (0x0001ddd1) aid_fshwr2_syb_pane

0xf167,	// (0x0001ddd9) aid_fshwr2_txt_pane

0xf16f,	// (0x0001dde1) fshwr2_func_candi_pane

0xf17b,	// (0x0001dded) fshwr2_hwr_syb_pane

0xf187,	// (0x0001ddf9) fshwr2_icf_pane

0x2376,	// (0x00010fe8) fshwr2_icf_bg_pane

0xf191,	// (0x0001de03) fshwr2_icf_pane_t1_ParamLimits

0xf191,	// (0x0001de03) fshwr2_icf_pane_t1

0x7876,	// (0x000164e8) fshwr2_func_candi_pane_g1

0xb555,	// (0x0001a1c7) fshwr2_func_candi_row_pane_ParamLimits

0xb555,	// (0x0001a1c7) fshwr2_func_candi_row_pane

0xf1a8,	// (0x0001de1a) cell_fshwr2_syb_pane_ParamLimits

0xf1a8,	// (0x0001de1a) cell_fshwr2_syb_pane

0x7b16,	// (0x00016788) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7b16,	// (0x00016788) fshwr2_hwr_syb_pane_g1

0x2376,	// (0x00010fe8) bg_popup_call_pane_cp01

0xb566,	// (0x0001a1d8) fshwr2_func_candi_cell_pane_ParamLimits

0xb566,	// (0x0001a1d8) fshwr2_func_candi_cell_pane

0xb597,	// (0x0001a209) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb597,	// (0x0001a209) fshwr2_func_candi_cell_bg_pane

0xb5b1,	// (0x0001a223) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb5b1,	// (0x0001a223) fshwr2_func_candi_cell_pane_g1

0xb5d9,	// (0x0001a24b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb5d9,	// (0x0001a24b) fshwr2_func_candi_cell_pane_t1

0x2376,	// (0x00010fe8) bg_button_pane_cp08

0x409b,	// (0x00012d0d) cell_fshwr2_syb_bg_pane

0xf1c2,	// (0x0001de34) cell_fshwr2_syb_bg_pane_g1

0xf1ca,	// (0x0001de3c) cell_fshwr2_syb_bg_pane_t1

0x3251,	// (0x00011ec3) main_tmo_pane

0x6116,	// (0x00014d88) uni_indicator_pane_g1_ParamLimits

0x612b,	// (0x00014d9d) uni_indicator_pane_g2_ParamLimits

0x6141,	// (0x00014db3) uni_indicator_pane_g3_ParamLimits

0x6157,	// (0x00014dc9) uni_indicator_pane_g4_ParamLimits

0x6157,	// (0x00014dc9) uni_indicator_pane_g4

0x616b,	// (0x00014ddd) uni_indicator_pane_g5_ParamLimits

0x616b,	// (0x00014ddd) uni_indicator_pane_g5

0x617f,	// (0x00014df1) uni_indicator_pane_g6_ParamLimits

0x617f,	// (0x00014df1) uni_indicator_pane_g6

0xf95a,	// (0x0001e5cc) uni_indicator_pane_g_ParamLimits

0x90ac,	// (0x00017d1e) popup_tmo_note_window_ParamLimits

0x90ac,	// (0x00017d1e) popup_tmo_note_window

0x2376,	// (0x00010fe8) fshwr2_bg_pane

0xb5ca,	// (0x0001a23c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb5ca,	// (0x0001a23c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0001eb37) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0001eb37) fshwr2_func_candi_cell_pane_g

0x7876,	// (0x000164e8) bg_popup_window_pane_cp01

0xb5ec,	// (0x0001a25e) bg_popup_window_pane_g1_cp01

0xb5f5,	// (0x0001a267) bg_popup_window_pane_cp22_ParamLimits

0xb5f5,	// (0x0001a267) bg_popup_window_pane_cp22

0xb603,	// (0x0001a275) listscroll_tmo_link_pane_ParamLimits

0xb603,	// (0x0001a275) listscroll_tmo_link_pane

0xb643,	// (0x0001a2b5) popup_tmo_note_window_g1_ParamLimits

0xb643,	// (0x0001a2b5) popup_tmo_note_window_g1

0xb650,	// (0x0001a2c2) tmo_note_info_pane_ParamLimits

0xb650,	// (0x0001a2c2) tmo_note_info_pane

0xf1d9,	// (0x0001de4b) list_tmo_note_info_pane_g1_ParamLimits

0xf1d9,	// (0x0001de4b) list_tmo_note_info_pane_g1

0xb66a,	// (0x0001a2dc) list_tmo_note_info_pane_g2_ParamLimits

0xb66a,	// (0x0001a2dc) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0001eb3c) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0001eb3c) list_tmo_note_info_pane_g

0xb686,	// (0x0001a2f8) list_tmo_note_info_text_pane_ParamLimits

0xb686,	// (0x0001a2f8) list_tmo_note_info_text_pane

0xb6c8,	// (0x0001a33a) list_tmo_link_pane

0xb6d5,	// (0x0001a347) scroll_pane_cp20

0xb6e2,	// (0x0001a354) list_single_tmo_link_pane_ParamLimits

0xb6e2,	// (0x0001a354) list_single_tmo_link_pane

0xb6f2,	// (0x0001a364) list_single_tmo_link_pane_t1

0xb700,	// (0x0001a372) list_tmo_note_info_text_pane_t1_ParamLimits

0xb700,	// (0x0001a372) list_tmo_note_info_text_pane_t1

0x3494,	// (0x00012106) aid_size_touch_scroll_bar_cp01_ParamLimits

0x3494,	// (0x00012106) aid_size_touch_scroll_bar_cp01

0xc9c3,	// (0x0001b635) aid_size_touch_slider_marker

0xd692,	// (0x0001c304) popup_settings_window_ParamLimits

0xd692,	// (0x0001c304) popup_settings_window

0xcb92,	// (0x0001b804) popup_candi_list_indi_window

0x4a26,	// (0x00013698) aid_touch_navi_pane_ParamLimits

0xe60e,	// (0x0001d280) rs_clock_indi_pane

0xe617,	// (0x0001d289) sctrl_sk_bottom_pane_ParamLimits

0xe628,	// (0x0001d29a) sctrl_sk_top_pane_ParamLimits

0xe712,	// (0x0001d384) popup_fep_tooltip_window

0xb30c,	// (0x00019f7e) aid_size_cell_widget_grid_ParamLimits

0xeee9,	// (0x0001db5b) cell_ai5_widget_pane_g1_ParamLimits

0xeee9,	// (0x0001db5b) cell_ai5_widget_pane_g1

0xef31,	// (0x0001dba3) cell_ai5_widget_pane_g6_ParamLimits

0xef3d,	// (0x0001dbaf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0001eaba) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0001eaba) cell_ai5_widget_pane_g

0xf041,	// (0x0001dcb3) cell_ai5_widget_pane_t10_ParamLimits

0xf041,	// (0x0001dcb3) cell_ai5_widget_pane_t10

0xf053,	// (0x0001dcc5) grid_ai5_widget_pane_ParamLimits

0xf089,	// (0x0001dcfb) cell_contacts_ai5_widget_pane_ParamLimits

0xf089,	// (0x0001dcfb) cell_contacts_ai5_widget_pane

0xb4e8,	// (0x0001a15a) popup_discreet_window_t3_ParamLimits

0xb4e8,	// (0x0001a15a) popup_discreet_window_t3

0xb541,	// (0x0001a1b3) popup_fshwr2_char_preview_window_ParamLimits

0xb541,	// (0x0001a1b3) popup_fshwr2_char_preview_window

0xf1f0,	// (0x0001de62) tmo_note_info_pane_t1

0xf205,	// (0x0001de77) tmo_note_info_pane_t2

0xf21a,	// (0x0001de8c) tmo_note_info_pane_t3

0xb6a4,	// (0x0001a316) tmo_note_info_pane_t4

0xb6b6,	// (0x0001a328) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0001eb41) tmo_note_info_pane_t

0xb6c8,	// (0x0001a33a) list_tmo_link_pane_ParamLimits

0xb6d5,	// (0x0001a347) scroll_pane_cp20_ParamLimits

0x2376,	// (0x00010fe8) bg_popup_fep_char_preview_window_cp01

0xb719,	// (0x0001a38b) popup_fshwr2_char_preview_window_t1

0xb727,	// (0x0001a399) popup_candi_list_indi_window_g1

0xb730,	// (0x0001a3a2) bg_cell_contacts_ai5_widget_pane

0xf22f,	// (0x0001dea1) cell_contacts_ai5_widget_pane_g1

0xf244,	// (0x0001deb6) cell_contacts_ai5_widget_pane_g2

0xf253,	// (0x0001dec5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0001eb4c) cell_contacts_ai5_widget_pane_g

0xf267,	// (0x0001ded9) cell_contacts_ai5_widget_pane_t1

0x3251,	// (0x00011ec3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2de,	// (0x0001df50) settings_container_pane

0x409b,	// (0x00012d0d) listscroll_set_pane_copy1

0x6d87,	// (0x000159f9) scroll_pane_cp121_copy1

0xb73c,	// (0x0001a3ae) set_content_pane_copy1

0xf2ea,	// (0x0001df5c) aid_height_set_list_copy1_ParamLimits

0xf2ea,	// (0x0001df5c) aid_height_set_list_copy1

0x639f,	// (0x00015011) aid_size_parent_copy1_ParamLimits

0x639f,	// (0x00015011) aid_size_parent_copy1

0xf2f6,	// (0x0001df68) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf2f6,	// (0x0001df68) button_value_adjust_pane_cp6_copy1

0x4425,	// (0x00013097) list_highlight_pane_cp2_copy1_ParamLimits

0x4425,	// (0x00013097) list_highlight_pane_cp2_copy1

0xf30a,	// (0x0001df7c) list_set_pane_copy1_ParamLimits

0xf30a,	// (0x0001df7c) list_set_pane_copy1

0xf279,	// (0x0001deeb) main_pane_set_t1_copy1_ParamLimits

0xf279,	// (0x0001deeb) main_pane_set_t1_copy1

0xf2b3,	// (0x0001df25) main_pane_set_t2_copy1_ParamLimits

0xf2b3,	// (0x0001df25) main_pane_set_t2_copy1

0xf3b7,	// (0x0001e029) main_pane_set_t3_copy1

0xf3c5,	// (0x0001e037) main_pane_set_t4_copy1

0xf2d2,	// (0x0001df44) set_content_pane_g1_copy1_ParamLimits

0xf2d2,	// (0x0001df44) set_content_pane_g1_copy1

0xf3d3,	// (0x0001e045) setting_code_pane_copy1

0xb744,	// (0x0001a3b6) setting_slider_graphic_pane_copy1

0xb744,	// (0x0001a3b6) setting_slider_pane_copy1

0xb74e,	// (0x0001a3c0) setting_text_pane_copy1

0xb758,	// (0x0001a3ca) setting_volume_pane_copy1

0xf3dd,	// (0x0001e04f) settings_code_pane_cp2_copy1

0xf3e5,	// (0x0001e057) settings_code_pane_cp_copy1_ParamLimits

0xf3e5,	// (0x0001e057) settings_code_pane_cp_copy1

0xf3f9,	// (0x0001e06b) volume_set_pane_copy1

0xf401,	// (0x0001e073) volume_set_pane_g10_copy1

0xf409,	// (0x0001e07b) volume_set_pane_g1_copy1

0xf411,	// (0x0001e083) volume_set_pane_g2_copy1

0xf419,	// (0x0001e08b) volume_set_pane_g3_copy1

0xf421,	// (0x0001e093) volume_set_pane_g4_copy1

0xf429,	// (0x0001e09b) volume_set_pane_g5_copy1

0xf431,	// (0x0001e0a3) volume_set_pane_g6_copy1

0xf439,	// (0x0001e0ab) volume_set_pane_g7_copy1

0xf441,	// (0x0001e0b3) volume_set_pane_g8_copy1

0xf449,	// (0x0001e0bb) volume_set_pane_g9_copy1

0x246a,	// (0x000110dc) bg_set_opt_pane_cp_copy1_ParamLimits

0x246a,	// (0x000110dc) bg_set_opt_pane_cp_copy1

0xb761,	// (0x0001a3d3) setting_slider_pane_t1_copy1_ParamLimits

0xb761,	// (0x0001a3d3) setting_slider_pane_t1_copy1

0xf451,	// (0x0001e0c3) setting_slider_pane_t2_copy1_ParamLimits

0xf451,	// (0x0001e0c3) setting_slider_pane_t2_copy1

0xf46b,	// (0x0001e0dd) setting_slider_pane_t3_copy1_ParamLimits

0xf46b,	// (0x0001e0dd) setting_slider_pane_t3_copy1

0xf483,	// (0x0001e0f5) slider_set_pane_copy1_ParamLimits

0xf483,	// (0x0001e0f5) slider_set_pane_copy1

0x3389,	// (0x00011ffb) set_opt_bg_pane_g1_copy2

0x3391,	// (0x00012003) set_opt_bg_pane_g2_copy2

0xb77f,	// (0x0001a3f1) set_opt_bg_pane_g3_copy2

0x33a1,	// (0x00012013) set_opt_bg_pane_g4_copy2

0x33a9,	// (0x0001201b) set_opt_bg_pane_g5_copy2

0x33b1,	// (0x00012023) set_opt_bg_pane_g6_copy2

0xf499,	// (0x0001e10b) set_opt_bg_pane_g7_copy2

0xb789,	// (0x0001a3fb) set_opt_bg_pane_g8_copy2

0xb793,	// (0x0001a405) set_opt_bg_pane_g9_copy2

0xf4a1,	// (0x0001e113) aid_size_touch_slider_mark_copy1_ParamLimits

0xf4a1,	// (0x0001e113) aid_size_touch_slider_mark_copy1

0xb79d,	// (0x0001a40f) slider_set_pane_g1_copy1

0xf4b5,	// (0x0001e127) slider_set_pane_g2_copy1

0xe0fe,	// (0x0001cd70) slider_set_pane_g3_copy1_ParamLimits

0xe0fe,	// (0x0001cd70) slider_set_pane_g3_copy1

0xe112,	// (0x0001cd84) slider_set_pane_g4_copy1_ParamLimits

0xe112,	// (0x0001cd84) slider_set_pane_g4_copy1

0xe12a,	// (0x0001cd9c) slider_set_pane_g5_copy1_ParamLimits

0xe12a,	// (0x0001cd9c) slider_set_pane_g5_copy1

0xe0fe,	// (0x0001cd70) slider_set_pane_g6_copy1_ParamLimits

0xe0fe,	// (0x0001cd70) slider_set_pane_g6_copy1

0xf4bd,	// (0x0001e12f) slider_set_pane_g7_copy1_ParamLimits

0xf4bd,	// (0x0001e12f) slider_set_pane_g7_copy1

0x238a,	// (0x00010ffc) bg_set_opt_pane_cp2_copy1

0xb7a6,	// (0x0001a418) setting_slider_graphic_pane_g1_copy1

0xf4d3,	// (0x0001e145) setting_slider_graphic_pane_t1_copy1

0xf4e3,	// (0x0001e155) setting_slider_graphic_pane_t2_copy1

0xf4f3,	// (0x0001e165) slider_set_pane_cp_copy1

0xb7b7,	// (0x0001a429) input_focus_pane_cp1_copy1

0xb7c0,	// (0x0001a432) list_set_text_pane_copy1

0xb7c8,	// (0x0001a43a) setting_text_pane_g1_copy1

0xc3a3,	// (0x0001b015) set_text_pane_t1_copy1

0xb7b7,	// (0x0001a429) input_focus_pane_cp2_copy1

0xb7c8,	// (0x0001a43a) setting_code_pane_g1_copy1

0xf4fb,	// (0x0001e16d) setting_code_pane_t1_copy1

0xf509,	// (0x0001e17b) list_set_graphic_pane_copy1

0x238a,	// (0x00010ffc) bg_set_opt_pane_cp4_copy1

0x3da1,	// (0x00012a13) list_set_graphic_pane_g1_copy1_ParamLimits

0x3da1,	// (0x00012a13) list_set_graphic_pane_g1_copy1

0xf51b,	// (0x0001e18d) list_set_graphic_pane_g2_copy1

0x3db9,	// (0x00012a2b) list_set_graphic_pane_t1_copy1_ParamLimits

0x3db9,	// (0x00012a2b) list_set_graphic_pane_t1_copy1

0x7876,	// (0x000164e8) rs_clock_indi_pane_g1

0xb7d1,	// (0x0001a443) rs_clock_indi_pane_t1

0xb438,	// (0x0001a0aa) rs_indi_pane

0xb7df,	// (0x0001a451) rs_indi_pane_g1

0xb7e8,	// (0x0001a45a) rs_indi_pane_g2

0xb7f1,	// (0x0001a463) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0001eb53) rs_indi_pane_g

0x409b,	// (0x00012d0d) bg_popup_preview_window_pane_cp03

0xb7fa,	// (0x0001a46c) popup_fep_tooltip_window_t1

0x86fb,	// (0x0001736d) popup_note2_window_g2_ParamLimits

0x86fb,	// (0x0001736d) popup_note2_window_g2

0x0001,

0xfc7f,	// (0x0001e8f1) popup_note2_window_g_ParamLimits

0xfc7f,	// (0x0001e8f1) popup_note2_window_g

0x8ce5,	// (0x00017957) bg_popup_sub_pane_cp11_ParamLimits

0x8cf2,	// (0x00017964) cell_ai3_links_pane_g1_ParamLimits

0x8d09,	// (0x0001797b) cell_ai3_links_pane_t1

0xc3a3,	// (0x0001b015) set_text_pane_t1_copy1_ParamLimits

0x3fac,	// (0x00012c1e) cell_graphic_popup_pane_cp2_ParamLimits

0x3fac,	// (0x00012c1e) cell_graphic_popup_pane_cp2

0xb808,	// (0x0001a47a) cell_graphic_popup_pane_g1_cp2

0x2a3b,	// (0x000116ad) cell_graphic_popup_pane_g2_cp2

0xb810,	// (0x0001a482) cell_graphic_popup_pane_g3_cp2

0xb818,	// (0x0001a48a) cell_graphic_popup_pane_t2_cp2

0x2a4c,	// (0x000116be) grid_highlight_pane_cp3_cp2

0x3778,	// (0x000123ea) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3251,	// (0x00011ec3) main_tmo_pane_ParamLimits

0x90a0,	// (0x00017d12) popup_tmo_big_image_note_window

0xeed9,	// (0x0001db4b) cell_ai5_widget_list_pane

0xeee1,	// (0x0001db53) cell_ai5_widget_lrg_icon_pane

0xf1f0,	// (0x0001de62) tmo_note_info_pane_t1_ParamLimits

0xf205,	// (0x0001de77) tmo_note_info_pane_t2_ParamLimits

0xf21a,	// (0x0001de8c) tmo_note_info_pane_t3_ParamLimits

0xb6a4,	// (0x0001a316) tmo_note_info_pane_t4_ParamLimits

0xb6b6,	// (0x0001a328) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0001eb41) tmo_note_info_pane_t_ParamLimits

0xf2de,	// (0x0001df50) settings_container_pane_ParamLimits

0xb7af,	// (0x0001a421) indicator_popup_pane_cp5

0xb7af,	// (0x0001a421) indicator_popup_pane_cp6

0xf509,	// (0x0001e17b) list_set_graphic_pane_copy1_ParamLimits

0x2376,	// (0x00010fe8) bg_popup_window_pane_cp23

0xb826,	// (0x0001a498) popup_tmo_big_image_note_window_g1

0xb830,	// (0x0001a4a2) popup_tmo_big_image_note_window_t1

0xb840,	// (0x0001a4b2) popup_tmo_big_image_note_window_t2

0xb850,	// (0x0001a4c2) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0001eb5a) popup_tmo_big_image_note_window_t

0xf523,	// (0x0001e195) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0001e19d) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0001e1ab) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0001e1ab) cell_ai5_widget_list_row_pane

0xf552,	// (0x0001e1c4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0001e1c4) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0001e1d1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0001e1d1) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0001e1e9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0001e1e9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeef,	// (0x0001eb61) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0001eb61) cell_ai5_widget_list_row_pane_t

0x2376,	// (0x00010fe8) main_fep_vtchi_ss_pane

0xb860,	// (0x0001a4d2) popup_fep_char_pre_window

0xb868,	// (0x0001a4da) popup_fep_ituss_window

0xb873,	// (0x0001a4e5) popup_fep_vkbss_window

0xb87c,	// (0x0001a4ee) grid_vkbss_keypad_pane_ParamLimits

0xb87c,	// (0x0001a4ee) grid_vkbss_keypad_pane

0xb88c,	// (0x0001a4fe) ituss_keypad_pane

0xb894,	// (0x0001a506) aid_vkbss_key_offset_ParamLimits

0xb894,	// (0x0001a506) aid_vkbss_key_offset

0xb8a3,	// (0x0001a515) cell_vkbss_key_pane_ParamLimits

0xb8a3,	// (0x0001a515) cell_vkbss_key_pane

0xb8b9,	// (0x0001a52b) bg_cell_vkbss_key_g1_ParamLimits

0xb8b9,	// (0x0001a52b) bg_cell_vkbss_key_g1

0xb8c5,	// (0x0001a537) cell_vkbss_key_3p_pane_ParamLimits

0xb8c5,	// (0x0001a537) cell_vkbss_key_3p_pane

0xb8df,	// (0x0001a551) cell_vkbss_key_g1_ParamLimits

0xb8df,	// (0x0001a551) cell_vkbss_key_g1

0xb8f9,	// (0x0001a56b) cell_vkbss_key_t1_ParamLimits

0xb8f9,	// (0x0001a56b) cell_vkbss_key_t1

0xb924,	// (0x0001a596) cell_ituss_key_pane_ParamLimits

0xb924,	// (0x0001a596) cell_ituss_key_pane

0xb933,	// (0x0001a5a5) bg_cell_ituss_key_g1_ParamLimits

0xb933,	// (0x0001a5a5) bg_cell_ituss_key_g1

0xb93f,	// (0x0001a5b1) cell_ituss_key_pane_g1_ParamLimits

0xb93f,	// (0x0001a5b1) cell_ituss_key_pane_g1

0xb94b,	// (0x0001a5bd) cell_ituss_key_pane_g2_ParamLimits

0xb94b,	// (0x0001a5bd) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x0001eb66) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0001eb66) cell_ituss_key_pane_g

0xb95e,	// (0x0001a5d0) cell_ituss_key_t1_ParamLimits

0xb95e,	// (0x0001a5d0) cell_ituss_key_t1

0xb97c,	// (0x0001a5ee) cell_ituss_key_t2_ParamLimits

0xb97c,	// (0x0001a5ee) cell_ituss_key_t2

0xb99b,	// (0x0001a60d) cell_ituss_key_t3_ParamLimits

0xb99b,	// (0x0001a60d) cell_ituss_key_t3

0xb9ba,	// (0x0001a62c) cell_ituss_key_t4_ParamLimits

0xb9ba,	// (0x0001a62c) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x0001eb6b) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0001eb6b) cell_ituss_key_t

0xb9d9,	// (0x0001a64b) cell_vkbss_key_3p_pane_g1

0xb9e1,	// (0x0001a653) cell_vkbss_key_3p_pane_g2

0xb9e9,	// (0x0001a65b) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0001eb74) cell_vkbss_key_3p_pane_g

0x2376,	// (0x00010fe8) bg_popup_fep_char_preview_window_cp02

0xb9f1,	// (0x0001a663) popup_fep_char_pre_window_t1

0xeecf,	// (0x0001db41) main_ai5_sk_pane

0xb730,	// (0x0001a3a2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf22f,	// (0x0001dea1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf244,	// (0x0001deb6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf253,	// (0x0001dec5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0001eb4c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf267,	// (0x0001ded9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3251,	// (0x00011ec3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0001e1fb) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
