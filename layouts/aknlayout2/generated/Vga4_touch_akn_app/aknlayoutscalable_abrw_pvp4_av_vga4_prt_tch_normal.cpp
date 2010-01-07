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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000ab34 };

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
0x68a8,	// (0x000113dc) Screen

0x68bc,	// (0x000113f0) application_window_ParamLimits

0x68bc,	// (0x000113f0) application_window

0x68d6,	// (0x0001140a) screen_g1

0x4caa,	// (0x0000f7de) area_bottom_pane_ParamLimits

0x4caa,	// (0x0000f7de) area_bottom_pane

0x4d6a,	// (0x0000f89e) area_top_pane_ParamLimits

0x4d6a,	// (0x0000f89e) area_top_pane

0x4e08,	// (0x0000f93c) main_pane_ParamLimits

0x4e08,	// (0x0000f93c) main_pane

0x68e0,	// (0x00011414) misc_graphics

0x9087,	// (0x00013bbb) battery_pane_ParamLimits

0x9087,	// (0x00013bbb) battery_pane

0x9df0,	// (0x00014924) bg_status_flat_pane_g8

0x9df8,	// (0x0001492c) bg_status_flat_pane_g9

0x914f,	// (0x00013c83) context_pane_ParamLimits

0x914f,	// (0x00013c83) context_pane

0x9273,	// (0x00013da7) navi_pane_ParamLimits

0x9273,	// (0x00013da7) navi_pane

0x9302,	// (0x00013e36) signal_pane_ParamLimits

0x9302,	// (0x00013e36) signal_pane

0x0008,

0xf8ad,	// (0x0001a3e1) bg_status_flat_pane_g

0x936f,	// (0x00013ea3) status_pane_g1_ParamLimits

0x936f,	// (0x00013ea3) status_pane_g1

0x9383,	// (0x00013eb7) status_pane_g2_ParamLimits

0x9383,	// (0x00013eb7) status_pane_g2

0x938f,	// (0x00013ec3) status_pane_g3_ParamLimits

0x938f,	// (0x00013ec3) status_pane_g3

0x0004,

0xf7db,	// (0x0001a30f) status_pane_g_ParamLimits

0xf7db,	// (0x0001a30f) status_pane_g

0x93c3,	// (0x00013ef7) title_pane_ParamLimits

0x93c3,	// (0x00013ef7) title_pane

0x9400,	// (0x00013f34) uni_indicator_pane_ParamLimits

0x9400,	// (0x00013f34) uni_indicator_pane

0x8974,	// (0x000134a8) bg_list_pane_ParamLimits

0x8974,	// (0x000134a8) bg_list_pane

0x8994,	// (0x000134c8) find_pane

0x899c,	// (0x000134d0) listscroll_app_pane_ParamLimits

0x899c,	// (0x000134d0) listscroll_app_pane

0x89a8,	// (0x000134dc) listscroll_form_pane

0x89b0,	// (0x000134e4) listscroll_gen_pane_ParamLimits

0x89b0,	// (0x000134e4) listscroll_gen_pane

0x89a8,	// (0x000134dc) listscroll_set_pane

0x7b55,	// (0x00012689) main_idle_act_pane

0x8648,	// (0x0001317c) main_idle_trad_pane

0x8648,	// (0x0001317c) main_list_empty_pane

0x89d6,	// (0x0001350a) main_midp_pane

0x89e2,	// (0x00013516) main_pane_g1_ParamLimits

0x89e2,	// (0x00013516) main_pane_g1

0x89f0,	// (0x00013524) popup_ai_message_window_ParamLimits

0x89f0,	// (0x00013524) popup_ai_message_window

0x8aa8,	// (0x000135dc) popup_fep_china_uni_window_ParamLimits

0x8aa8,	// (0x000135dc) popup_fep_china_uni_window

0x8b08,	// (0x0001363c) popup_fep_japan_candidate_window_ParamLimits

0x8b08,	// (0x0001363c) popup_fep_japan_candidate_window

0x8b32,	// (0x00013666) popup_fep_japan_predictive_window_ParamLimits

0x8b32,	// (0x00013666) popup_fep_japan_predictive_window

0x8b68,	// (0x0001369c) popup_find_window

0x8b75,	// (0x000136a9) popup_grid_graphic_window_ParamLimits

0x8b75,	// (0x000136a9) popup_grid_graphic_window

0x8ba3,	// (0x000136d7) popup_large_graphic_colour_window

0x8bc9,	// (0x000136fd) popup_menu_window_ParamLimits

0x8bc9,	// (0x000136fd) popup_menu_window

0x8d93,	// (0x000138c7) popup_note_image_window

0x8d7d,	// (0x000138b1) popup_note_wait_window_ParamLimits

0x8d7d,	// (0x000138b1) popup_note_wait_window

0x8d7d,	// (0x000138b1) popup_note_window_ParamLimits

0x8d7d,	// (0x000138b1) popup_note_window

0x8df9,	// (0x0001392d) popup_query_code_window_ParamLimits

0x8df9,	// (0x0001392d) popup_query_code_window

0x8e0f,	// (0x00013943) popup_query_data_code_window_ParamLimits

0x8e0f,	// (0x00013943) popup_query_data_code_window

0x8e32,	// (0x00013966) popup_query_data_window_ParamLimits

0x8e32,	// (0x00013966) popup_query_data_window

0x8e54,	// (0x00013988) popup_query_sat_info_window_ParamLimits

0x8e54,	// (0x00013988) popup_query_sat_info_window

0x8e93,	// (0x000139c7) popup_snote_single_graphic_window_ParamLimits

0x8e93,	// (0x000139c7) popup_snote_single_graphic_window

0x8e93,	// (0x000139c7) popup_snote_single_text_window_ParamLimits

0x8e93,	// (0x000139c7) popup_snote_single_text_window

0x8eaa,	// (0x000139de) popup_sub_window_general

0x8ff0,	// (0x00013b24) popup_window_general_ParamLimits

0x8ff0,	// (0x00013b24) popup_window_general

0x9009,	// (0x00013b3d) power_save_pane

0x557f,	// (0x000100b3) control_pane_g1_ParamLimits

0x557f,	// (0x000100b3) control_pane_g1

0x55a8,	// (0x000100dc) control_pane_g2_ParamLimits

0x55a8,	// (0x000100dc) control_pane_g2

0x8915,	// (0x00013449) control_pane_g3_ParamLimits

0x8915,	// (0x00013449) control_pane_g3

0x0007,

0xf7c3,	// (0x0001a2f7) control_pane_g_ParamLimits

0xf7c3,	// (0x0001a2f7) control_pane_g

0x55f3,	// (0x00010127) control_pane_t1_ParamLimits

0x55f3,	// (0x00010127) control_pane_t1

0x5645,	// (0x00010179) control_pane_t2_ParamLimits

0x5645,	// (0x00010179) control_pane_t2

0x0002,

0xf7d4,	// (0x0001a308) control_pane_t_ParamLimits

0xf7d4,	// (0x0001a308) control_pane_t

0x8836,	// (0x0001336a) navi_navi_volume_pane_cp1

0x883f,	// (0x00013373) status_small_icon_pane

0x8847,	// (0x0001337b) status_small_pane_g1_ParamLimits

0x8847,	// (0x0001337b) status_small_pane_g1

0x887b,	// (0x000133af) status_small_pane_g2_ParamLimits

0x887b,	// (0x000133af) status_small_pane_g2

0x8887,	// (0x000133bb) status_small_pane_g3_ParamLimits

0x8887,	// (0x000133bb) status_small_pane_g3

0x8893,	// (0x000133c7) status_small_pane_g4_ParamLimits

0x8893,	// (0x000133c7) status_small_pane_g4

0x889f,	// (0x000133d3) status_small_pane_g5_ParamLimits

0x889f,	// (0x000133d3) status_small_pane_g5

0x88ae,	// (0x000133e2) status_small_pane_g6_ParamLimits

0x88ae,	// (0x000133e2) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001a2e6) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001a2e6) status_small_pane_g

0x88de,	// (0x00013412) status_small_pane_t1

0x8901,	// (0x00013435) status_small_wait_pane_ParamLimits

0x8901,	// (0x00013435) status_small_wait_pane

0x8053,	// (0x00012b87) aid_levels_signal_ParamLimits

0x8053,	// (0x00012b87) aid_levels_signal

0x8065,	// (0x00012b99) signal_pane_g1_ParamLimits

0x8065,	// (0x00012b99) signal_pane_g1

0x807a,	// (0x00012bae) signal_pane_g2_ParamLimits

0x807a,	// (0x00012bae) signal_pane_g2

0x0001,

0xf747,	// (0x0001a27b) signal_pane_g_ParamLimits

0xf747,	// (0x0001a27b) signal_pane_g

0x808f,	// (0x00012bc3) context_pane_g1

0x68ea,	// (0x0001141e) title_pane_g1

0x6920,	// (0x00011454) title_pane_t1

0x6988,	// (0x000114bc) title_pane_t2

0x69ae,	// (0x000114e2) title_pane_t3

0x0002,

0xf59b,	// (0x0001a0cf) title_pane_t

0x9418,	// (0x00013f4c) aid_levels_battery_ParamLimits

0x9418,	// (0x00013f4c) aid_levels_battery

0x942c,	// (0x00013f60) battery_pane_g1_ParamLimits

0x942c,	// (0x00013f60) battery_pane_g1

0x9442,	// (0x00013f76) battery_pane_g2_ParamLimits

0x9442,	// (0x00013f76) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001a31a) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001a31a) battery_pane_g

0xa740,	// (0x00015274) uni_indicator_pane_g1

0xa755,	// (0x00015289) uni_indicator_pane_g2

0xa76b,	// (0x0001529f) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x0001a489) uni_indicator_pane_g

0x84b6,	// (0x00012fea) navi_icon_pane_ParamLimits

0x84b6,	// (0x00012fea) navi_icon_pane

0x83fd,	// (0x00012f31) navi_midp_pane

0x84d2,	// (0x00013006) navi_navi_pane

0x84dc,	// (0x00013010) navi_text_pane_ParamLimits

0x84dc,	// (0x00013010) navi_text_pane

0x68d6,	// (0x0001140a) status_small_wait_pane_g1

0x6e0c,	// (0x00011940) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x0001a484) status_small_wait_pane_g

0xa453,	// (0x00014f87) navi_navi_icon_text_pane

0xa45b,	// (0x00014f8f) navi_navi_pane_g1_ParamLimits

0xa45b,	// (0x00014f8f) navi_navi_pane_g1

0xa46d,	// (0x00014fa1) navi_navi_pane_g2_ParamLimits

0xa46d,	// (0x00014fa1) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x0001a452) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x0001a452) navi_navi_pane_g

0xa47f,	// (0x00014fb3) navi_navi_tabs_pane

0xa488,	// (0x00014fbc) navi_navi_text_pane

0xa453,	// (0x00014f87) navi_navi_volume_pane

0xa42c,	// (0x00014f60) navi_text_pane_t1

0xa41d,	// (0x00014f51) navi_icon_pane_g1

0xa370,	// (0x00014ea4) navi_navi_text_pane_t1

0x59e8,	// (0x0001051c) navi_navi_volume_pane_g1

0x59f0,	// (0x00010524) volume_small_pane

0xa2d6,	// (0x00014e0a) navi_navi_icon_text_pane_g1

0xa2de,	// (0x00014e12) navi_navi_icon_text_pane_t1

0x84d2,	// (0x00013006) navi_tabs_2_long_pane

0x84d2,	// (0x00013006) navi_tabs_2_pane

0x84d2,	// (0x00013006) navi_tabs_3_long_pane

0x84d2,	// (0x00013006) navi_tabs_3_pane

0x84d2,	// (0x00013006) navi_tabs_4_pane

0x59c8,	// (0x000104fc) tabs_2_active_pane_ParamLimits

0x59c8,	// (0x000104fc) tabs_2_active_pane

0x59d8,	// (0x0001050c) tabs_2_passive_pane_ParamLimits

0x59d8,	// (0x0001050c) tabs_2_passive_pane

0x5996,	// (0x000104ca) tabs_3_active_pane_ParamLimits

0x5996,	// (0x000104ca) tabs_3_active_pane

0x59a6,	// (0x000104da) tabs_3_passive_pane_ParamLimits

0x59a6,	// (0x000104da) tabs_3_passive_pane

0x59b7,	// (0x000104eb) tabs_3_passive_pane_cp_ParamLimits

0x59b7,	// (0x000104eb) tabs_3_passive_pane_cp

0x594a,	// (0x0001047e) tabs_4_active_pane_ParamLimits

0x594a,	// (0x0001047e) tabs_4_active_pane

0x595d,	// (0x00010491) tabs_4_passive_pane_ParamLimits

0x595d,	// (0x00010491) tabs_4_passive_pane

0x596e,	// (0x000104a2) tabs_4_passive_pane_cp_ParamLimits

0x596e,	// (0x000104a2) tabs_4_passive_pane_cp

0x597f,	// (0x000104b3) tabs_4_passive_pane_cp2_ParamLimits

0x597f,	// (0x000104b3) tabs_4_passive_pane_cp2

0x5926,	// (0x0001045a) tabs_2_long_active_pane_ParamLimits

0x5926,	// (0x0001045a) tabs_2_long_active_pane

0x5938,	// (0x0001046c) tabs_2_long_passive_pane_ParamLimits

0x5938,	// (0x0001046c) tabs_2_long_passive_pane

0x58e7,	// (0x0001041b) tabs_3_long_active_pane_ParamLimits

0x58e7,	// (0x0001041b) tabs_3_long_active_pane

0x58fa,	// (0x0001042e) tabs_3_long_passive_pane_ParamLimits

0x58fa,	// (0x0001042e) tabs_3_long_passive_pane

0x5913,	// (0x00010447) tabs_3_long_passive_pane_cp_ParamLimits

0x5913,	// (0x00010447) tabs_3_long_passive_pane_cp

0x588d,	// (0x000103c1) volume_small_pane_g1

0x5896,	// (0x000103ca) volume_small_pane_g2

0x589f,	// (0x000103d3) volume_small_pane_g3

0x58a8,	// (0x000103dc) volume_small_pane_g4

0x58b1,	// (0x000103e5) volume_small_pane_g5

0x58ba,	// (0x000103ee) volume_small_pane_g6

0x58c3,	// (0x000103f7) volume_small_pane_g7

0x58cc,	// (0x00010400) volume_small_pane_g8

0x58d5,	// (0x00010409) volume_small_pane_g9

0x58de,	// (0x00010412) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x0001a41e) volume_small_pane_g

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp2_ParamLimits

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp2

0x69ce,	// (0x00011502) tabs_3_active_pane_g1

0x69d6,	// (0x0001150a) tabs_3_active_pane_t1

0x69c0,	// (0x000114f4) bg_passive_tab_pane_cp2_ParamLimits

0x69c0,	// (0x000114f4) bg_passive_tab_pane_cp2

0x69ce,	// (0x00011502) tabs_3_passive_pane_g1

0x69d6,	// (0x0001150a) tabs_3_passive_pane_t1

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp3_ParamLimits

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp3

0x69e8,	// (0x0001151c) tabs_4_active_pane_g1

0x69f0,	// (0x00011524) tabs_4_active_pane_t1

0x69c0,	// (0x000114f4) bg_passive_tab_pane_cp3_ParamLimits

0x69c0,	// (0x000114f4) bg_passive_tab_pane_cp3

0x69e8,	// (0x0001151c) tabs_4_1_passive_pane_g1

0x69f0,	// (0x00011524) tabs_4_1_passive_pane_t1

0x89d6,	// (0x0001350a) list_highlight_pane_cp2

0xa9f7,	// (0x0001552b) list_set_pane_ParamLimits

0xa9f7,	// (0x0001552b) list_set_pane

0xaabf,	// (0x000155f3) main_pane_set_t1_ParamLimits

0xaabf,	// (0x000155f3) main_pane_set_t1

0xaadf,	// (0x00015613) main_pane_set_t2_ParamLimits

0xaadf,	// (0x00015613) main_pane_set_t2

0xaaf3,	// (0x00015627) main_pane_set_t3_ParamLimits

0xaaf3,	// (0x00015627) main_pane_set_t3

0xab07,	// (0x0001563b) main_pane_set_t4_ParamLimits

0xab07,	// (0x0001563b) main_pane_set_t4

0x0003,

0xf9ba,	// (0x0001a4ee) main_pane_set_t_ParamLimits

0xf9ba,	// (0x0001a4ee) main_pane_set_t

0xab27,	// (0x0001565b) setting_code_pane

0xab31,	// (0x00015665) setting_slider_graphic_pane

0xab31,	// (0x00015665) setting_slider_pane

0xab31,	// (0x00015665) setting_text_pane

0xab31,	// (0x00015665) setting_volume_pane

0x505f,	// (0x0000fb93) volume_set_pane

0x69c0,	// (0x000114f4) bg_set_opt_pane_cp

0x5069,	// (0x0000fb9d) setting_slider_pane_t1

0x507f,	// (0x0000fbb3) setting_slider_pane_t2

0x5099,	// (0x0000fbcd) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001a0d6) setting_slider_pane_t

0x50b1,	// (0x0000fbe5) slider_set_pane

0x68e0,	// (0x00011414) bg_set_opt_pane_cp2

0x6a02,	// (0x00011536) setting_slider_graphic_pane_g1

0x50c7,	// (0x0000fbfb) setting_slider_graphic_pane_t1

0x50d7,	// (0x0000fc0b) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001a0dd) setting_slider_graphic_pane_t

0x50e7,	// (0x0000fc1b) slider_set_pane_cp

0x68e0,	// (0x00011414) input_focus_pane_cp1

0xa9b8,	// (0x000154ec) list_set_text_pane

0x68d6,	// (0x0001140a) setting_text_pane_g1

0x68e0,	// (0x00011414) input_focus_pane_cp2

0x68d6,	// (0x0001140a) setting_code_pane_g1

0x6a0b,	// (0x0001153f) setting_code_pane_t1

0x6a19,	// (0x0001154d) set_text_pane_t1_ParamLimits

0x6a19,	// (0x0001154d) set_text_pane_t1

0x7938,	// (0x0001246c) set_opt_bg_pane_g1

0x7940,	// (0x00012474) set_opt_bg_pane_g2

0xa990,	// (0x000154c4) set_opt_bg_pane_g3

0x7950,	// (0x00012484) set_opt_bg_pane_g4

0x7958,	// (0x0001248c) set_opt_bg_pane_g5

0x7960,	// (0x00012494) set_opt_bg_pane_g6

0xa99a,	// (0x000154ce) set_opt_bg_pane_g7

0xa9a4,	// (0x000154d8) set_opt_bg_pane_g8

0xa9ae,	// (0x000154e2) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x0001a4db) set_opt_bg_pane_g

0xa983,	// (0x000154b7) slider_set_pane_g1

0x5a71,	// (0x000105a5) slider_set_pane_g2

0x0006,

0xf998,	// (0x0001a4cc) slider_set_pane_g

0x59f9,	// (0x0001052d) volume_set_pane_g1

0x5a03,	// (0x00010537) volume_set_pane_g2

0x5a0d,	// (0x00010541) volume_set_pane_g3

0x5a17,	// (0x0001054b) volume_set_pane_g4

0x5a21,	// (0x00010555) volume_set_pane_g5

0x5a2b,	// (0x0001055f) volume_set_pane_g6

0x5a35,	// (0x00010569) volume_set_pane_g7

0x5a3f,	// (0x00010573) volume_set_pane_g8

0x5a49,	// (0x0001057d) volume_set_pane_g9

0x5a53,	// (0x00010587) volume_set_pane_g10

0x0009,

0xf970,	// (0x0001a4a4) volume_set_pane_g

0x6a33,	// (0x00011567) indicator_pane_ParamLimits

0x6a33,	// (0x00011567) indicator_pane

0x6a3f,	// (0x00011573) main_idle_pane_g2_ParamLimits

0x6a3f,	// (0x00011573) main_idle_pane_g2

0x6a67,	// (0x0001159b) main_pane_idle_g1_ParamLimits

0x6a67,	// (0x0001159b) main_pane_idle_g1

0x6a75,	// (0x000115a9) popup_clock_digital_analogue_window_ParamLimits

0x6a75,	// (0x000115a9) popup_clock_digital_analogue_window

0x6a8c,	// (0x000115c0) soft_indicator_pane_ParamLimits

0x6a8c,	// (0x000115c0) soft_indicator_pane

0x6a9a,	// (0x000115ce) wallpaper_pane_ParamLimits

0x6a9a,	// (0x000115ce) wallpaper_pane

0x68d6,	// (0x0001140a) wallpaper_pane_g1

0x6aae,	// (0x000115e2) indicator_pane_g1_ParamLimits

0x6aae,	// (0x000115e2) indicator_pane_g1

0xae56,	// (0x0001598a) navi_navi_icon_text_pane_srt_g1

0x6ac9,	// (0x000115fd) soft_indicator_pane_t1

0x6ae3,	// (0x00011617) aid_ps_area_pane

0x6af4,	// (0x00011628) aid_ps_clock_pane

0x6b02,	// (0x00011636) aid_ps_indicator_pane

0x6b0e,	// (0x00011642) indicator_ps_pane_ParamLimits

0x6b0e,	// (0x00011642) indicator_ps_pane

0x6b1d,	// (0x00011651) power_save_pane_g1_ParamLimits

0x6b1d,	// (0x00011651) power_save_pane_g1

0x6b29,	// (0x0001165d) power_save_pane_g2_ParamLimits

0x6b29,	// (0x0001165d) power_save_pane_g2

0x4c5e,	// (0x0000f792) aid_navinavi_width_pane

0x6ae3,	// (0x00011617) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001a0e2) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001a0e2) power_save_pane_g

0x6b37,	// (0x0001166b) power_save_pane_t1_ParamLimits

0x6b37,	// (0x0001166b) power_save_pane_t1

0x6af4,	// (0x00011628) aid_ps_clock_pane_ParamLimits

0x6b02,	// (0x00011636) aid_ps_indicator_pane_ParamLimits

0x6b49,	// (0x0001167d) power_save_pane_t4_ParamLimits

0x6b49,	// (0x0001167d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001a0e7) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001a0e7) power_save_pane_t

0x6b73,	// (0x000116a7) power_save_t3_ParamLimits

0x6b73,	// (0x000116a7) power_save_t3

0x6b5e,	// (0x00011692) power_save_t2_ParamLimits

0x6b5e,	// (0x00011692) power_save_t2

0x6b88,	// (0x000116bc) indicator_ps_pane_g1

0x6b91,	// (0x000116c5) ai_gene_pane_ParamLimits

0x6b91,	// (0x000116c5) ai_gene_pane

0x6b9d,	// (0x000116d1) ai_links_pane_ParamLimits

0x6b9d,	// (0x000116d1) ai_links_pane

0x6ba9,	// (0x000116dd) indicator_pane_cp1_ParamLimits

0x6ba9,	// (0x000116dd) indicator_pane_cp1

0x6bb5,	// (0x000116e9) main_pane_idle_g1_cp_ParamLimits

0x6bb5,	// (0x000116e9) main_pane_idle_g1_cp

0x6bc1,	// (0x000116f5) popup_ai_links_title_window

0x6bca,	// (0x000116fe) soft_indicator_pane_cp1_ParamLimits

0x6bca,	// (0x000116fe) soft_indicator_pane_cp1

0xa72e,	// (0x00015262) ai_links_pane_g1

0xa737,	// (0x0001526b) grid_ai_links_pane

0xa713,	// (0x00015247) ai_gene_pane_1

0xa71c,	// (0x00015250) ai_gene_pane_2

0xa725,	// (0x00015259) list_highlight_pane_cp4

0xa6f3,	// (0x00015227) cell_ai_link_pane_ParamLimits

0xa6f3,	// (0x00015227) cell_ai_link_pane

0xa6eb,	// (0x0001521f) cell_ai_link_pane_g1

0x6e0c,	// (0x00011940) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x0001a47f) cell_ai_link_pane_g

0x68e0,	// (0x00011414) grid_highlight_cp2

0x68e0,	// (0x00011414) bg_popup_sub_pane_cp1

0x6be4,	// (0x00011718) popup_ai_links_title_window_t1

0xa637,	// (0x0001516b) ai_gene_pane_1_g1_ParamLimits

0xa637,	// (0x0001516b) ai_gene_pane_1_g1

0xa643,	// (0x00015177) ai_gene_pane_1_g2_ParamLimits

0xa643,	// (0x00015177) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x0001a475) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x0001a475) ai_gene_pane_1_g

0xa650,	// (0x00015184) ai_gene_pane_1_t1_ParamLimits

0xa650,	// (0x00015184) ai_gene_pane_1_t1

0xa684,	// (0x000151b8) grid_ai_soft_ind_pane

0xa622,	// (0x00015156) ai_gene_pane_2_t1_ParamLimits

0xa622,	// (0x00015156) ai_gene_pane_2_t1

0x6bf3,	// (0x00011727) main_pane_empty_t1_ParamLimits

0x6bf3,	// (0x00011727) main_pane_empty_t1

0x6c0b,	// (0x0001173f) main_pane_empty_t2_ParamLimits

0x6c0b,	// (0x0001173f) main_pane_empty_t2

0x6c20,	// (0x00011754) main_pane_empty_t3_ParamLimits

0x6c20,	// (0x00011754) main_pane_empty_t3

0x6c32,	// (0x00011766) main_pane_empty_t4_ParamLimits

0x6c32,	// (0x00011766) main_pane_empty_t4

0x6c44,	// (0x00011778) main_pane_empty_t5_ParamLimits

0x6c44,	// (0x00011778) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001a0ec) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001a0ec) main_pane_empty_t

0x7a16,	// (0x0001254a) bg_popup_window_pane_ParamLimits

0x7a16,	// (0x0001254a) bg_popup_window_pane

0xa37e,	// (0x00014eb2) find_popup_pane_cp2_ParamLimits

0xa37e,	// (0x00014eb2) find_popup_pane_cp2

0xa38a,	// (0x00014ebe) heading_pane_ParamLimits

0xa38a,	// (0x00014ebe) heading_pane

0x68e0,	// (0x00011414) bg_popup_sub_pane

0xa2f8,	// (0x00014e2c) bg_popup_window_pane_g1_ParamLimits

0xa2f8,	// (0x00014e2c) bg_popup_window_pane_g1

0xa304,	// (0x00014e38) bg_popup_window_pane_g2_ParamLimits

0xa304,	// (0x00014e38) bg_popup_window_pane_g2

0xa310,	// (0x00014e44) bg_popup_window_pane_g3_ParamLimits

0xa310,	// (0x00014e44) bg_popup_window_pane_g3

0xa31c,	// (0x00014e50) bg_popup_window_pane_g4_ParamLimits

0xa31c,	// (0x00014e50) bg_popup_window_pane_g4

0xa328,	// (0x00014e5c) bg_popup_window_pane_g5_ParamLimits

0xa328,	// (0x00014e5c) bg_popup_window_pane_g5

0xa334,	// (0x00014e68) bg_popup_window_pane_g6_ParamLimits

0xa334,	// (0x00014e68) bg_popup_window_pane_g6

0xa340,	// (0x00014e74) bg_popup_window_pane_g7_ParamLimits

0xa340,	// (0x00014e74) bg_popup_window_pane_g7

0xa34c,	// (0x00014e80) bg_popup_window_pane_g8_ParamLimits

0xa34c,	// (0x00014e80) bg_popup_window_pane_g8

0xa358,	// (0x00014e8c) bg_popup_window_pane_g9_ParamLimits

0xa358,	// (0x00014e8c) bg_popup_window_pane_g9

0xa364,	// (0x00014e98) bg_popup_window_pane_g10_ParamLimits

0xa364,	// (0x00014e98) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x0001a43d) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x0001a43d) bg_popup_window_pane_g

0xa28d,	// (0x00014dc1) bg_popup_heading_pane_ParamLimits

0xa28d,	// (0x00014dc1) bg_popup_heading_pane

0x5af9,	// (0x0001062d) tabs_4_passive_pane_cp_srt_ParamLimits

0x5af9,	// (0x0001062d) tabs_4_passive_pane_cp_srt

0x5b0b,	// (0x0001063f) tabs_4_passive_pane_srt_ParamLimits

0xa2a1,	// (0x00014dd5) heading_pane_g2

0x5b0b,	// (0x0001063f) tabs_4_passive_pane_srt

0x89d6,	// (0x0001350a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x89d6,	// (0x0001350a) bg_passive_tab_pane_cp3_srt

0xa2a9,	// (0x00014ddd) heading_pane_t1_ParamLimits

0xa2a9,	// (0x00014ddd) heading_pane_t1

0xa2c0,	// (0x00014df4) heading_pane_t2_ParamLimits

0xa2c0,	// (0x00014df4) heading_pane_t2

0x0001,

0xf904,	// (0x0001a438) heading_pane_t_ParamLimits

0xf904,	// (0x0001a438) heading_pane_t

0x9db8,	// (0x000148ec) bg_popup_heading_pane_g1

0x9e67,	// (0x0001499b) bg_popup_heading_pane_g2

0x9e71,	// (0x000149a5) bg_popup_heading_pane_g3

0x9e7b,	// (0x000149af) bg_popup_heading_pane_g4

0x9e85,	// (0x000149b9) bg_popup_heading_pane_g5

0x9e8f,	// (0x000149c3) bg_popup_heading_pane_g6

0x9e97,	// (0x000149cb) bg_popup_heading_pane_g7

0x9e9f,	// (0x000149d3) bg_popup_heading_pane_g8

0x9ea9,	// (0x000149dd) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x0001a3f4) bg_popup_heading_pane_g

0x9548,	// (0x0001407c) bg_popup_sub_pane_g1

0x9558,	// (0x0001408c) bg_popup_sub_pane_g2

0x9550,	// (0x00014084) bg_popup_sub_pane_g3

0x9568,	// (0x0001409c) bg_popup_sub_pane_g4

0x9560,	// (0x00014094) bg_popup_sub_pane_g5

0x9570,	// (0x000140a4) bg_popup_sub_pane_g6

0x9578,	// (0x000140ac) bg_popup_sub_pane_g7

0x9588,	// (0x000140bc) bg_popup_sub_pane_g8

0x9580,	// (0x000140b4) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x0001a3ce) bg_popup_sub_pane_g

0x6c56,	// (0x0001178a) bg_popup_window_pane_cp5_ParamLimits

0x6c56,	// (0x0001178a) bg_popup_window_pane_cp5

0x6c72,	// (0x000117a6) popup_note_window_g1_ParamLimits

0x6c72,	// (0x000117a6) popup_note_window_g1

0x6c7e,	// (0x000117b2) popup_note_window_t1_ParamLimits

0x6c7e,	// (0x000117b2) popup_note_window_t1

0x6c94,	// (0x000117c8) popup_note_window_t2_ParamLimits

0x6c94,	// (0x000117c8) popup_note_window_t2

0x6caa,	// (0x000117de) popup_note_window_t3_ParamLimits

0x6caa,	// (0x000117de) popup_note_window_t3

0x6cc0,	// (0x000117f4) popup_note_window_t4_ParamLimits

0x6cc0,	// (0x000117f4) popup_note_window_t4

0x6ce8,	// (0x0001181c) popup_note_window_t5_ParamLimits

0x6ce8,	// (0x0001181c) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001a0f7) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001a0f7) popup_note_window_t

0x6d0c,	// (0x00011840) bg_popup_window_pane_cp6_ParamLimits

0x6d0c,	// (0x00011840) bg_popup_window_pane_cp6

0x9d34,	// (0x00014868) popup_note_image_window_g1_ParamLimits

0x9d34,	// (0x00014868) popup_note_image_window_g1

0x9d40,	// (0x00014874) popup_note_image_window_g2_ParamLimits

0x9d40,	// (0x00014874) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x0001a3c2) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x0001a3c2) popup_note_image_window_g

0x9d59,	// (0x0001488d) popup_note_image_window_t1_ParamLimits

0x9d59,	// (0x0001488d) popup_note_image_window_t1

0x9d72,	// (0x000148a6) popup_note_image_window_t2_ParamLimits

0x9d72,	// (0x000148a6) popup_note_image_window_t2

0x9d8b,	// (0x000148bf) popup_note_image_window_t3_ParamLimits

0x9d8b,	// (0x000148bf) popup_note_image_window_t3

0x0002,

0xf893,	// (0x0001a3c7) popup_note_image_window_t_ParamLimits

0xf893,	// (0x0001a3c7) popup_note_image_window_t

0x9bf4,	// (0x00014728) bg_popup_window_pane_cp7_ParamLimits

0x9bf4,	// (0x00014728) bg_popup_window_pane_cp7

0x9c24,	// (0x00014758) popup_note_wait_window_g1_ParamLimits

0x9c24,	// (0x00014758) popup_note_wait_window_g1

0x9c30,	// (0x00014764) popup_note_wait_window_g2_ParamLimits

0x9c30,	// (0x00014764) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x0001a3b0) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x0001a3b0) popup_note_wait_window_g

0x9c48,	// (0x0001477c) popup_note_wait_window_t1_ParamLimits

0x9c48,	// (0x0001477c) popup_note_wait_window_t1

0x9c6f,	// (0x000147a3) popup_note_wait_window_t2_ParamLimits

0x9c6f,	// (0x000147a3) popup_note_wait_window_t2

0x9c8d,	// (0x000147c1) popup_note_wait_window_t3_ParamLimits

0x9c8d,	// (0x000147c1) popup_note_wait_window_t3

0x9ca0,	// (0x000147d4) popup_note_wait_window_t4_ParamLimits

0x9ca0,	// (0x000147d4) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x0001a3b7) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x0001a3b7) popup_note_wait_window_t

0x9cc5,	// (0x000147f9) wait_bar_pane_ParamLimits

0x9cc5,	// (0x000147f9) wait_bar_pane

0x68e0,	// (0x00011414) wait_anim_pane

0x68e0,	// (0x00011414) wait_border_pane

0x68d6,	// (0x0001140a) wait_anim_pane_g1

0x68d6,	// (0x0001140a) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001a276) wait_anim_pane_g

0x9b98,	// (0x000146cc) wait_border_pane_g1

0x9ba3,	// (0x000146d7) wait_border_pane_g2

0x9bac,	// (0x000146e0) wait_border_pane_g3

0x0002,

0xf875,	// (0x0001a3a9) wait_border_pane_g

0x9af4,	// (0x00014628) bg_popup_window_pane_cp16_ParamLimits

0x9af4,	// (0x00014628) bg_popup_window_pane_cp16

0x9b02,	// (0x00014636) indicator_popup_pane_cp4_ParamLimits

0x9b02,	// (0x00014636) indicator_popup_pane_cp4

0x9b16,	// (0x0001464a) popup_query_data_window_t1_ParamLimits

0x9b16,	// (0x0001464a) popup_query_data_window_t1

0x9b28,	// (0x0001465c) popup_query_data_window_t2_ParamLimits

0x9b28,	// (0x0001465c) popup_query_data_window_t2

0x9b41,	// (0x00014675) popup_query_data_window_t3_ParamLimits

0x9b41,	// (0x00014675) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x0001a3a2) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x0001a3a2) popup_query_data_window_t

0x9b5b,	// (0x0001468f) query_popup_data_pane_ParamLimits

0x9b5b,	// (0x0001468f) query_popup_data_pane

0x9b6f,	// (0x000146a3) query_popup_data_pane_cp1_ParamLimits

0x9b6f,	// (0x000146a3) query_popup_data_pane_cp1

0x6d0c,	// (0x00011840) bg_popup_window_pane_cp10_ParamLimits

0x6d0c,	// (0x00011840) bg_popup_window_pane_cp10

0x9a57,	// (0x0001458b) indicator_popup_pane_ParamLimits

0x9a57,	// (0x0001458b) indicator_popup_pane

0x6d6d,	// (0x000118a1) popup_query_code_window_t1_ParamLimits

0x6d6d,	// (0x000118a1) popup_query_code_window_t1

0x9a6f,	// (0x000145a3) popup_query_code_window_t2_ParamLimits

0x9a6f,	// (0x000145a3) popup_query_code_window_t2

0x9aad,	// (0x000145e1) popup_query_code_window_t3_ParamLimits

0x9aad,	// (0x000145e1) popup_query_code_window_t3

0x0002,

0xf867,	// (0x0001a39b) popup_query_code_window_t_ParamLimits

0xf867,	// (0x0001a39b) popup_query_code_window_t

0x9adc,	// (0x00014610) query_popup_pane_ParamLimits

0x9adc,	// (0x00014610) query_popup_pane

0x6d0c,	// (0x00011840) bg_popup_window_pane_cp15_ParamLimits

0x6d0c,	// (0x00011840) bg_popup_window_pane_cp15

0x6d2c,	// (0x00011860) indicator_popup_pane_cp1_ParamLimits

0x6d2c,	// (0x00011860) indicator_popup_pane_cp1

0x6d3f,	// (0x00011873) indicator_popup_pane_cp2_ParamLimits

0x6d3f,	// (0x00011873) indicator_popup_pane_cp2

0x6d5a,	// (0x0001188e) popup_query_data_code_window_g1_ParamLimits

0x6d5a,	// (0x0001188e) popup_query_data_code_window_g1

0x6d6d,	// (0x000118a1) popup_query_data_code_window_t1_ParamLimits

0x6d6d,	// (0x000118a1) popup_query_data_code_window_t1

0x6d7f,	// (0x000118b3) popup_query_data_code_window_t2_ParamLimits

0x6d7f,	// (0x000118b3) popup_query_data_code_window_t2

0x6d91,	// (0x000118c5) popup_query_data_code_window_t3_ParamLimits

0x6d91,	// (0x000118c5) popup_query_data_code_window_t3

0x6da7,	// (0x000118db) popup_query_data_code_window_t4_ParamLimits

0x6da7,	// (0x000118db) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001a102) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001a102) popup_query_data_code_window_t

0x5799,	// (0x000102cd) list_single_midp_graphic_pane_g3

0x6dc1,	// (0x000118f5) query_popup_data_pane_cp2_ParamLimits

0x6dd4,	// (0x00011908) query_popup_pane_cp2_ParamLimits

0x6dd4,	// (0x00011908) query_popup_pane_cp2

0x68e0,	// (0x00011414) bg_popup_window_pane_cp11

0x9a2b,	// (0x0001455f) heading_pane_cp5

0x6ec4,	// (0x000119f8) listscroll_popup_info_pane

0x68e0,	// (0x00011414) input_focus_pane_cp3

0x6def,	// (0x00011923) query_popup_pane_t1

0x6dfd,	// (0x00011931) list_popup_info_pane_ParamLimits

0x6dfd,	// (0x00011931) list_popup_info_pane

0x6e0c,	// (0x00011940) listscroll_popup_info_pane_g1

0x6e14,	// (0x00011948) scroll_pane_cp7

0x6e1e,	// (0x00011952) popup_info_list_pane_t1_ParamLimits

0x6e1e,	// (0x00011952) popup_info_list_pane_t1

0x6e38,	// (0x0001196c) popup_info_list_pane_t2_ParamLimits

0x6e38,	// (0x0001196c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001a10b) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001a10b) popup_info_list_pane_t

0x68e0,	// (0x00011414) bg_popup_window_pane_cp12

0xae70,	// (0x000159a4) find_popup_pane

0x69c0,	// (0x000114f4) bg_popup_window_pane_cp3

0x6e52,	// (0x00011986) heading_pane_cp3

0x6e5e,	// (0x00011992) listscroll_popup_graphic_pane

0x68e0,	// (0x00011414) bg_popup_window_pane_cp4

0x6eba,	// (0x000119ee) heading_pane_cp4

0x6ec4,	// (0x000119f8) listscroll_popup_colour_pane

0x6ecc,	// (0x00011a00) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6ecc,	// (0x00011a00) cell_large_graphic_colour_none_popup_pane

0x6ee0,	// (0x00011a14) grid_large_graphic_colour_popup_pane_ParamLimits

0x6ee0,	// (0x00011a14) grid_large_graphic_colour_popup_pane

0x6f0c,	// (0x00011a40) listscroll_popup_colour_pane_g1_ParamLimits

0x6f0c,	// (0x00011a40) listscroll_popup_colour_pane_g1

0x6f23,	// (0x00011a57) listscroll_popup_colour_pane_g2_ParamLimits

0x6f23,	// (0x00011a57) listscroll_popup_colour_pane_g2

0x6f3a,	// (0x00011a6e) listscroll_popup_colour_pane_g3_ParamLimits

0x6f3a,	// (0x00011a6e) listscroll_popup_colour_pane_g3

0x6f4a,	// (0x00011a7e) listscroll_popup_colour_pane_g4_ParamLimits

0x6f4a,	// (0x00011a7e) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001a110) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001a110) listscroll_popup_colour_pane_g

0x6f5e,	// (0x00011a92) scroll_pane_cp6_ParamLimits

0x6f5e,	// (0x00011a92) scroll_pane_cp6

0x6f70,	// (0x00011aa4) cell_large_graphic_colour_popup_pane_ParamLimits

0x6f70,	// (0x00011aa4) cell_large_graphic_colour_popup_pane

0x6f95,	// (0x00011ac9) cell_large_graphic_colour_none_popup_pane_t1

0x68e0,	// (0x00011414) grid_highlight_pane_cp5

0x6fa4,	// (0x00011ad8) cell_large_graphic_colour_popup_pane_g1

0x6fac,	// (0x00011ae0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001a119) cell_large_graphic_colour_popup_pane_g

0x6fb4,	// (0x00011ae8) cell_large_graphic_colour_popup_pane_g2_copy1

0x6fbd,	// (0x00011af1) grid_highlight_pane_cp4

0x6fc5,	// (0x00011af9) bg_popup_window_pane_cp8_ParamLimits

0x6fc5,	// (0x00011af9) bg_popup_window_pane_cp8

0x6fe0,	// (0x00011b14) popup_snote_single_text_window_g1_ParamLimits

0x6fe0,	// (0x00011b14) popup_snote_single_text_window_g1

0x6ff2,	// (0x00011b26) popup_snote_single_text_window_t1_ParamLimits

0x6ff2,	// (0x00011b26) popup_snote_single_text_window_t1

0x7005,	// (0x00011b39) popup_snote_single_text_window_t2_ParamLimits

0x7005,	// (0x00011b39) popup_snote_single_text_window_t2

0x7018,	// (0x00011b4c) popup_snote_single_text_window_t3_ParamLimits

0x7018,	// (0x00011b4c) popup_snote_single_text_window_t3

0x7051,	// (0x00011b85) popup_snote_single_text_window_t4_ParamLimits

0x7051,	// (0x00011b85) popup_snote_single_text_window_t4

0x7085,	// (0x00011bb9) popup_snote_single_text_window_t5_ParamLimits

0x7085,	// (0x00011bb9) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001a11e) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001a11e) popup_snote_single_text_window_t

0x70b4,	// (0x00011be8) bg_popup_window_pane_cp9_ParamLimits

0x70b4,	// (0x00011be8) bg_popup_window_pane_cp9

0x6fe0,	// (0x00011b14) popup_snote_single_graphic_window_g1_ParamLimits

0x6fe0,	// (0x00011b14) popup_snote_single_graphic_window_g1

0x70c2,	// (0x00011bf6) popup_snote_single_graphic_window_g2_ParamLimits

0x70c2,	// (0x00011bf6) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001a129) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001a129) popup_snote_single_graphic_window_g

0x70ce,	// (0x00011c02) popup_snote_single_graphic_window_t1_ParamLimits

0x70ce,	// (0x00011c02) popup_snote_single_graphic_window_t1

0x70e1,	// (0x00011c15) popup_snote_single_graphic_window_t2_ParamLimits

0x70e1,	// (0x00011c15) popup_snote_single_graphic_window_t2

0x70f4,	// (0x00011c28) popup_snote_single_graphic_window_t3_ParamLimits

0x70f4,	// (0x00011c28) popup_snote_single_graphic_window_t3

0x712d,	// (0x00011c61) popup_snote_single_graphic_window_t4_ParamLimits

0x712d,	// (0x00011c61) popup_snote_single_graphic_window_t4

0x7161,	// (0x00011c95) popup_snote_single_graphic_window_t5_ParamLimits

0x7161,	// (0x00011c95) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001a12e) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001a12e) popup_snote_single_graphic_window_t

0xadae,	// (0x000158e2) grid_graphic_popup_pane_ParamLimits

0xadae,	// (0x000158e2) grid_graphic_popup_pane

0xaddc,	// (0x00015910) listscroll_popup_graphic_pane_g1_ParamLimits

0xaddc,	// (0x00015910) listscroll_popup_graphic_pane_g1

0xadf0,	// (0x00015924) listscroll_popup_graphic_pane_g2_ParamLimits

0xadf0,	// (0x00015924) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x0001a518) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x0001a518) listscroll_popup_graphic_pane_g

0xae04,	// (0x00015938) scroll_pane_cp5

0xad56,	// (0x0001588a) cell_graphic_popup_pane_ParamLimits

0xad56,	// (0x0001588a) cell_graphic_popup_pane

0xad37,	// (0x0001586b) cell_graphic_popup_pane_g1

0xad3f,	// (0x00015873) cell_graphic_popup_pane_g2

0x6fb4,	// (0x00011ae8) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x0001a511) cell_graphic_popup_pane_g

0xad48,	// (0x0001587c) cell_graphic_popup_pane_t2

0x6fbd,	// (0x00011af1) grid_highlight_pane_cp3

0x71a2,	// (0x00011cd6) list_gen_pane_ParamLimits

0x71a2,	// (0x00011cd6) list_gen_pane

0x71d4,	// (0x00011d08) scroll_pane

0xac99,	// (0x000157cd) bg_list_pane_g1_ParamLimits

0xac99,	// (0x000157cd) bg_list_pane_g1

0xacb4,	// (0x000157e8) bg_list_pane_g2_ParamLimits

0xacb4,	// (0x000157e8) bg_list_pane_g2

0xacc7,	// (0x000157fb) bg_list_pane_g3_ParamLimits

0xacc7,	// (0x000157fb) bg_list_pane_g3

0xacd9,	// (0x0001580d) bg_list_pane_g4_ParamLimits

0xacd9,	// (0x0001580d) bg_list_pane_g4

0xaceb,	// (0x0001581f) bg_list_pane_g5_ParamLimits

0xaceb,	// (0x0001581f) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x0001a506) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x0001a506) bg_list_pane_g

0xabea,	// (0x0001571e) list_double2_graphic_large_graphic_pane_ParamLimits

0xabea,	// (0x0001571e) list_double2_graphic_large_graphic_pane

0xabea,	// (0x0001571e) list_double2_graphic_pane_ParamLimits

0xabea,	// (0x0001571e) list_double2_graphic_pane

0xabea,	// (0x0001571e) list_double2_large_graphic_pane_ParamLimits

0xabea,	// (0x0001571e) list_double2_large_graphic_pane

0xabea,	// (0x0001571e) list_double2_pane_ParamLimits

0xabea,	// (0x0001571e) list_double2_pane

0xabea,	// (0x0001571e) list_double_graphic_heading_pane_ParamLimits

0xabea,	// (0x0001571e) list_double_graphic_heading_pane

0xabea,	// (0x0001571e) list_double_graphic_pane_ParamLimits

0xabea,	// (0x0001571e) list_double_graphic_pane

0xabea,	// (0x0001571e) list_double_heading_pane_ParamLimits

0xabea,	// (0x0001571e) list_double_heading_pane

0xabea,	// (0x0001571e) list_double_large_graphic_pane_ParamLimits

0xabea,	// (0x0001571e) list_double_large_graphic_pane

0xabea,	// (0x0001571e) list_double_number_pane_ParamLimits

0xabea,	// (0x0001571e) list_double_number_pane

0xabea,	// (0x0001571e) list_double_pane_ParamLimits

0xabea,	// (0x0001571e) list_double_pane

0xabea,	// (0x0001571e) list_double_time_pane_ParamLimits

0xabea,	// (0x0001571e) list_double_time_pane

0xabea,	// (0x0001571e) list_setting_number_pane_ParamLimits

0xabea,	// (0x0001571e) list_setting_number_pane

0xabea,	// (0x0001571e) list_setting_pane_ParamLimits

0xabea,	// (0x0001571e) list_setting_pane

0xac29,	// (0x0001575d) list_single_2graphic_pane_ParamLimits

0xac29,	// (0x0001575d) list_single_2graphic_pane

0xac29,	// (0x0001575d) list_single_graphic_heading_pane_ParamLimits

0xac29,	// (0x0001575d) list_single_graphic_heading_pane

0xac29,	// (0x0001575d) list_single_graphic_pane_ParamLimits

0xac29,	// (0x0001575d) list_single_graphic_pane

0xac29,	// (0x0001575d) list_single_heading_pane_ParamLimits

0xac29,	// (0x0001575d) list_single_heading_pane

0xac81,	// (0x000157b5) list_single_large_graphic_pane_ParamLimits

0xac81,	// (0x000157b5) list_single_large_graphic_pane

0xac29,	// (0x0001575d) list_single_number_heading_pane_ParamLimits

0xac29,	// (0x0001575d) list_single_number_heading_pane

0xac29,	// (0x0001575d) list_single_number_pane_ParamLimits

0xac29,	// (0x0001575d) list_single_number_pane

0xac29,	// (0x0001575d) list_single_pane_ParamLimits

0xac29,	// (0x0001575d) list_single_pane

0x68e0,	// (0x00011414) list_highlight_pane_cp1

0x7214,	// (0x00011d48) list_single_pane_g1_ParamLimits

0x7214,	// (0x00011d48) list_single_pane_g1

0x7220,	// (0x00011d54) list_single_pane_g2_ParamLimits

0x7220,	// (0x00011d54) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001a140) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001a140) list_single_pane_g

0xaba3,	// (0x000156d7) list_single_pane_t1_ParamLimits

0xaba3,	// (0x000156d7) list_single_pane_t1

0x7214,	// (0x00011d48) list_single_number_pane_g1_ParamLimits

0x7214,	// (0x00011d48) list_single_number_pane_g1

0x7220,	// (0x00011d54) list_single_number_pane_g2_ParamLimits

0x7220,	// (0x00011d54) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001a140) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001a140) list_single_number_pane_g

0xa8ff,	// (0x00015433) list_single_number_pane_t1_ParamLimits

0xa8ff,	// (0x00015433) list_single_number_pane_t1

0xa915,	// (0x00015449) list_single_number_pane_t2_ParamLimits

0xa915,	// (0x00015449) list_single_number_pane_t2

0x0001,

0xf993,	// (0x0001a4c7) list_single_number_pane_t_ParamLimits

0xf993,	// (0x0001a4c7) list_single_number_pane_t

0x7208,	// (0x00011d3c) list_single_graphic_pane_g1_ParamLimits

0x7208,	// (0x00011d3c) list_single_graphic_pane_g1

0x7214,	// (0x00011d48) list_single_graphic_pane_g2_ParamLimits

0x7214,	// (0x00011d48) list_single_graphic_pane_g2

0x7220,	// (0x00011d54) list_single_graphic_pane_g3_ParamLimits

0x7220,	// (0x00011d54) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001a139) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001a139) list_single_graphic_pane_g

0x722c,	// (0x00011d60) list_single_graphic_pane_t1_ParamLimits

0x722c,	// (0x00011d60) list_single_graphic_pane_t1

0x7214,	// (0x00011d48) list_single_heading_pane_g1_ParamLimits

0x7214,	// (0x00011d48) list_single_heading_pane_g1

0x7220,	// (0x00011d54) list_single_heading_pane_g2_ParamLimits

0x7220,	// (0x00011d54) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a140) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a140) list_single_heading_pane_g

0x7242,	// (0x00011d76) list_single_heading_pane_t1_ParamLimits

0x7242,	// (0x00011d76) list_single_heading_pane_t1

0x7258,	// (0x00011d8c) list_single_heading_pane_t2_ParamLimits

0x7258,	// (0x00011d8c) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001a145) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001a145) list_single_heading_pane_t

0x7214,	// (0x00011d48) list_single_number_heading_pane_g1_ParamLimits

0x7214,	// (0x00011d48) list_single_number_heading_pane_g1

0x7220,	// (0x00011d54) list_single_number_heading_pane_g2_ParamLimits

0x7220,	// (0x00011d54) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a140) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a140) list_single_number_heading_pane_g

0x7242,	// (0x00011d76) list_single_number_heading_pane_t1_ParamLimits

0x7242,	// (0x00011d76) list_single_number_heading_pane_t1

0x726a,	// (0x00011d9e) list_single_number_heading_pane_t2_ParamLimits

0x726a,	// (0x00011d9e) list_single_number_heading_pane_t2

0x727c,	// (0x00011db0) list_single_number_heading_pane_t3_ParamLimits

0x727c,	// (0x00011db0) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001a14a) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001a14a) list_single_number_heading_pane_t

0x728e,	// (0x00011dc2) list_single_graphic_heading_pane_g1_ParamLimits

0x728e,	// (0x00011dc2) list_single_graphic_heading_pane_g1

0x729a,	// (0x00011dce) list_single_graphic_heading_pane_g4_ParamLimits

0x729a,	// (0x00011dce) list_single_graphic_heading_pane_g4

0x7220,	// (0x00011d54) list_single_graphic_heading_pane_g5_ParamLimits

0x7220,	// (0x00011d54) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001a151) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001a151) list_single_graphic_heading_pane_g

0x7242,	// (0x00011d76) list_single_graphic_heading_pane_t1_ParamLimits

0x7242,	// (0x00011d76) list_single_graphic_heading_pane_t1

0x72ab,	// (0x00011ddf) list_single_graphic_heading_pane_t2_ParamLimits

0x72ab,	// (0x00011ddf) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001a158) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001a158) list_single_graphic_heading_pane_t

0x72bd,	// (0x00011df1) list_single_large_graphic_pane_g1_ParamLimits

0x72bd,	// (0x00011df1) list_single_large_graphic_pane_g1

0x72c9,	// (0x00011dfd) list_single_large_graphic_pane_g2_ParamLimits

0x72c9,	// (0x00011dfd) list_single_large_graphic_pane_g2

0x72d5,	// (0x00011e09) list_single_large_graphic_pane_g3_ParamLimits

0x72d5,	// (0x00011e09) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001a15d) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001a15d) list_single_large_graphic_pane_g

0x9ba3,	// (0x000146d7) wait_border_pane_g2_copy1

0x72e1,	// (0x00011e15) list_single_large_graphic_pane_g4_cp2

0x72e9,	// (0x00011e1d) list_single_large_graphic_pane_t1_ParamLimits

0x72e9,	// (0x00011e1d) list_single_large_graphic_pane_t1

0x72ff,	// (0x00011e33) list_double_pane_g1_ParamLimits

0x72ff,	// (0x00011e33) list_double_pane_g1

0x730b,	// (0x00011e3f) list_double_pane_g2_ParamLimits

0x730b,	// (0x00011e3f) list_double_pane_g2

0x0001,

0xf630,	// (0x0001a164) list_double_pane_g_ParamLimits

0xf630,	// (0x0001a164) list_double_pane_g

0x7317,	// (0x00011e4b) list_double_pane_t1_ParamLimits

0x7317,	// (0x00011e4b) list_double_pane_t1

0x732d,	// (0x00011e61) list_double_pane_t2_ParamLimits

0x732d,	// (0x00011e61) list_double_pane_t2

0x0001,

0xf635,	// (0x0001a169) list_double_pane_t_ParamLimits

0xf635,	// (0x0001a169) list_double_pane_t

0x733f,	// (0x00011e73) list_double2_pane_g1_ParamLimits

0x733f,	// (0x00011e73) list_double2_pane_g1

0x7350,	// (0x00011e84) list_double2_pane_g2_ParamLimits

0x7350,	// (0x00011e84) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001a16e) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001a16e) list_double2_pane_g

0x735c,	// (0x00011e90) list_double2_pane_t1_ParamLimits

0x735c,	// (0x00011e90) list_double2_pane_t1

0x7372,	// (0x00011ea6) list_double2_pane_t2_ParamLimits

0x7372,	// (0x00011ea6) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001a173) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001a173) list_double2_pane_t

0x72ff,	// (0x00011e33) list_double_number_pane_g1_ParamLimits

0x72ff,	// (0x00011e33) list_double_number_pane_g1

0x730b,	// (0x00011e3f) list_double_number_pane_g2_ParamLimits

0x730b,	// (0x00011e3f) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001a164) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001a164) list_double_number_pane_g

0x7384,	// (0x00011eb8) list_double_number_pane_t1_ParamLimits

0x7384,	// (0x00011eb8) list_double_number_pane_t1

0x7396,	// (0x00011eca) list_double_number_pane_t2_ParamLimits

0x7396,	// (0x00011eca) list_double_number_pane_t2

0x73ac,	// (0x00011ee0) list_double_number_pane_t3_ParamLimits

0x73ac,	// (0x00011ee0) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001a178) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001a178) list_double_number_pane_t

0x73be,	// (0x00011ef2) list_double_graphic_pane_g1_ParamLimits

0x73be,	// (0x00011ef2) list_double_graphic_pane_g1

0x73ca,	// (0x00011efe) list_double_graphic_pane_g2_ParamLimits

0x73ca,	// (0x00011efe) list_double_graphic_pane_g2

0x73d9,	// (0x00011f0d) list_double_graphic_pane_g3_ParamLimits

0x73d9,	// (0x00011f0d) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001a17f) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001a17f) list_double_graphic_pane_g

0x73f1,	// (0x00011f25) list_double_graphic_pane_t1_ParamLimits

0x73f1,	// (0x00011f25) list_double_graphic_pane_t1

0x7407,	// (0x00011f3b) list_double_graphic_pane_t2_ParamLimits

0x7407,	// (0x00011f3b) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a188) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a188) list_double_graphic_pane_t

0x7419,	// (0x00011f4d) list_double2_graphic_pane_g1_ParamLimits

0x7419,	// (0x00011f4d) list_double2_graphic_pane_g1

0x7425,	// (0x00011f59) list_double2_graphic_pane_g2_ParamLimits

0x7425,	// (0x00011f59) list_double2_graphic_pane_g2

0x7350,	// (0x00011e84) list_double2_graphic_pane_g3_ParamLimits

0x7350,	// (0x00011e84) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001a18d) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001a18d) list_double2_graphic_pane_g

0x7431,	// (0x00011f65) list_double2_graphic_pane_t1_ParamLimits

0x7431,	// (0x00011f65) list_double2_graphic_pane_t1

0x7447,	// (0x00011f7b) list_double2_graphic_pane_t2_ParamLimits

0x7447,	// (0x00011f7b) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001a194) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001a194) list_double2_graphic_pane_t

0x7459,	// (0x00011f8d) list_double_large_graphic_pane_g1_ParamLimits

0x7459,	// (0x00011f8d) list_double_large_graphic_pane_g1

0x7484,	// (0x00011fb8) list_double_large_graphic_pane_g2_ParamLimits

0x7484,	// (0x00011fb8) list_double_large_graphic_pane_g2

0x730b,	// (0x00011e3f) list_double_large_graphic_pane_g3_ParamLimits

0x730b,	// (0x00011e3f) list_double_large_graphic_pane_g3

0x7495,	// (0x00011fc9) list_double_large_graphic_pane_g4_ParamLimits

0x7495,	// (0x00011fc9) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001a199) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001a199) list_double_large_graphic_pane_g

0x74bd,	// (0x00011ff1) list_double_large_graphic_pane_t1_ParamLimits

0x74bd,	// (0x00011ff1) list_double_large_graphic_pane_t1

0x74d6,	// (0x0001200a) list_double_large_graphic_pane_t2_ParamLimits

0x74d6,	// (0x0001200a) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001a1a4) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001a1a4) list_double_large_graphic_pane_t

0x74e8,	// (0x0001201c) list_double2_large_graphic_pane_g1_ParamLimits

0x74e8,	// (0x0001201c) list_double2_large_graphic_pane_g1

0x733f,	// (0x00011e73) list_double2_large_graphic_pane_g2_ParamLimits

0x733f,	// (0x00011e73) list_double2_large_graphic_pane_g2

0x7350,	// (0x00011e84) list_double2_large_graphic_pane_g3_ParamLimits

0x7350,	// (0x00011e84) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001a1a9) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001a1a9) list_double2_large_graphic_pane_g

0x74f4,	// (0x00012028) list_double2_large_graphic_pane_t1_ParamLimits

0x74f4,	// (0x00012028) list_double2_large_graphic_pane_t1

0x750a,	// (0x0001203e) list_double2_large_graphic_pane_t2_ParamLimits

0x750a,	// (0x0001203e) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001a1b0) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001a1b0) list_double2_large_graphic_pane_t

0x751c,	// (0x00012050) list_double_heading_pane_g1_ParamLimits

0x751c,	// (0x00012050) list_double_heading_pane_g1

0x752d,	// (0x00012061) list_double_heading_pane_g2_ParamLimits

0x752d,	// (0x00012061) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001a1b5) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001a1b5) list_double_heading_pane_g

0x7539,	// (0x0001206d) list_double_heading_pane_t1_ParamLimits

0x7539,	// (0x0001206d) list_double_heading_pane_t1

0x754f,	// (0x00012083) list_double_heading_pane_t2_ParamLimits

0x754f,	// (0x00012083) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001a1ba) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001a1ba) list_double_heading_pane_t

0x7561,	// (0x00012095) list_double_graphic_heading_pane_g1_ParamLimits

0x7561,	// (0x00012095) list_double_graphic_heading_pane_g1

0x751c,	// (0x00012050) list_double_graphic_heading_pane_g2_ParamLimits

0x751c,	// (0x00012050) list_double_graphic_heading_pane_g2

0x752d,	// (0x00012061) list_double_graphic_heading_pane_g3_ParamLimits

0x752d,	// (0x00012061) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001a1bf) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001a1bf) list_double_graphic_heading_pane_g

0x756d,	// (0x000120a1) list_double_graphic_heading_pane_t1_ParamLimits

0x756d,	// (0x000120a1) list_double_graphic_heading_pane_t1

0x7583,	// (0x000120b7) list_double_graphic_heading_pane_t2_ParamLimits

0x7583,	// (0x000120b7) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001a1c6) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001a1c6) list_double_graphic_heading_pane_t

0x7484,	// (0x00011fb8) list_double_time_pane_g1_ParamLimits

0x7484,	// (0x00011fb8) list_double_time_pane_g1

0x730b,	// (0x00011e3f) list_double_time_pane_g2_ParamLimits

0x730b,	// (0x00011e3f) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001a1cb) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001a1cb) list_double_time_pane_g

0x7595,	// (0x000120c9) list_double_time_pane_t1_ParamLimits

0x7595,	// (0x000120c9) list_double_time_pane_t1

0x75ab,	// (0x000120df) list_double_time_pane_t2_ParamLimits

0x75ab,	// (0x000120df) list_double_time_pane_t2

0x75bd,	// (0x000120f1) list_double_time_pane_t3_ParamLimits

0x75bd,	// (0x000120f1) list_double_time_pane_t3

0x75cf,	// (0x00012103) list_double_time_pane_t4_ParamLimits

0x75cf,	// (0x00012103) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001a1d0) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001a1d0) list_double_time_pane_t

0x7425,	// (0x00011f59) list_setting_pane_g1_ParamLimits

0x7425,	// (0x00011f59) list_setting_pane_g1

0x7350,	// (0x00011e84) list_setting_pane_g2_ParamLimits

0x7350,	// (0x00011e84) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001a1d9) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001a1d9) list_setting_pane_g

0x75e1,	// (0x00012115) list_setting_pane_t1_ParamLimits

0x75e1,	// (0x00012115) list_setting_pane_t1

0x75f8,	// (0x0001212c) list_setting_pane_t2_ParamLimits

0x75f8,	// (0x0001212c) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001a1de) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001a1de) list_setting_pane_t

0x7637,	// (0x0001216b) set_value_pane_cp_ParamLimits

0x7637,	// (0x0001216b) set_value_pane_cp

0x7425,	// (0x00011f59) list_setting_number_pane_g1_ParamLimits

0x7425,	// (0x00011f59) list_setting_number_pane_g1

0x7350,	// (0x00011e84) list_setting_number_pane_g2_ParamLimits

0x7350,	// (0x00011e84) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x0001a1d9) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x0001a1d9) list_setting_number_pane_g

0x7645,	// (0x00012179) list_setting_number_pane_t1_ParamLimits

0x7645,	// (0x00012179) list_setting_number_pane_t1

0x7659,	// (0x0001218d) list_setting_number_pane_t2_ParamLimits

0x7659,	// (0x0001218d) list_setting_number_pane_t2

0x7670,	// (0x000121a4) list_setting_number_pane_t3_ParamLimits

0x7670,	// (0x000121a4) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001a1e5) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001a1e5) list_setting_number_pane_t

0x7637,	// (0x0001216b) set_value_pane_ParamLimits

0x7637,	// (0x0001216b) set_value_pane

0x76b3,	// (0x000121e7) bg_set_opt_pane_ParamLimits

0x76b3,	// (0x000121e7) bg_set_opt_pane

0x76d4,	// (0x00012208) set_value_pane_t1

0x76e2,	// (0x00012216) slider_set_pane_cp3

0x76eb,	// (0x0001221f) volume_small_pane_cp

0x76f4,	// (0x00012228) list_form_gen_pane

0x76fd,	// (0x00012231) scroll_pane_cp8

0x7716,	// (0x0001224a) form_field_data_pane_ParamLimits

0x7716,	// (0x0001224a) form_field_data_pane

0x773c,	// (0x00012270) form_field_data_wide_pane_ParamLimits

0x773c,	// (0x00012270) form_field_data_wide_pane

0x7763,	// (0x00012297) form_field_popup_pane_ParamLimits

0x7763,	// (0x00012297) form_field_popup_pane

0x7785,	// (0x000122b9) form_field_popup_wide_pane_ParamLimits

0x7785,	// (0x000122b9) form_field_popup_wide_pane

0x77a6,	// (0x000122da) form_field_slider_pane_ParamLimits

0x77a6,	// (0x000122da) form_field_slider_pane

0x77b9,	// (0x000122ed) form_field_slider_wide_pane_ParamLimits

0x77b9,	// (0x000122ed) form_field_slider_wide_pane

0x77cc,	// (0x00012300) data_form_pane

0x77e2,	// (0x00012316) form_field_data_pane_t1

0x77fc,	// (0x00012330) input_focus_pane

0x780a,	// (0x0001233e) data_form_wide_pane

0x7842,	// (0x00012376) form_field_data_wide_pane_t1

0x6fd2,	// (0x00011b06) input_focus_pane_cp6

0x7864,	// (0x00012398) form_field_popup_pane_t1

0x77fc,	// (0x00012330) input_focus_pane_cp7

0x787e,	// (0x000123b2) list_form_pane

0x7892,	// (0x000123c6) form_field_popup_wide_pane_t1

0x77fc,	// (0x00012330) input_focus_pane_cp8

0x78a7,	// (0x000123db) list_form_wide_pane

0x78be,	// (0x000123f2) form_field_slider_pane_t1_ParamLimits

0x78be,	// (0x000123f2) form_field_slider_pane_t1

0x78d2,	// (0x00012406) form_field_slider_pane_t2_ParamLimits

0x78d2,	// (0x00012406) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001a1f5) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001a1f5) form_field_slider_pane_t

0x6c56,	// (0x0001178a) input_focus_pane_cp9_ParamLimits

0x6c56,	// (0x0001178a) input_focus_pane_cp9

0x78e4,	// (0x00012418) slider_cont_pane_ParamLimits

0x78e4,	// (0x00012418) slider_cont_pane

0x78f8,	// (0x0001242c) form_field_slider_wide_pane_t1_ParamLimits

0x78f8,	// (0x0001242c) form_field_slider_wide_pane_t1

0x790a,	// (0x0001243e) form_field_slider_wide_pane_t2_ParamLimits

0x790a,	// (0x0001243e) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001a1fa) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001a1fa) form_field_slider_wide_pane_t

0x6c56,	// (0x0001178a) input_focus_pane_cp10_ParamLimits

0x6c56,	// (0x0001178a) input_focus_pane_cp10

0x791c,	// (0x00012450) slider_cont_pane_cp1_ParamLimits

0x791c,	// (0x00012450) slider_cont_pane_cp1

0x7930,	// (0x00012464) slider_form_pane_cp

0x7938,	// (0x0001246c) input_focus_pane_g1

0x7940,	// (0x00012474) input_focus_pane_g2

0x7948,	// (0x0001247c) input_focus_pane_g3

0x7950,	// (0x00012484) input_focus_pane_g4

0x7958,	// (0x0001248c) input_focus_pane_g5

0x7960,	// (0x00012494) input_focus_pane_g6

0x7968,	// (0x0001249c) input_focus_pane_g7

0x7970,	// (0x000124a4) input_focus_pane_g8

0x7978,	// (0x000124ac) input_focus_pane_g9

0x68d6,	// (0x0001140a) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001a1ff) input_focus_pane_g

0x9bac,	// (0x000146e0) wait_border_pane_g3_copy1

0x7980,	// (0x000124b4) data_form_pane_t1

0x68d6,	// (0x0001140a) wait_anim_pane_g1_copy1

0xab84,	// (0x000156b8) data_form_wide_pane_t1

0x799f,	// (0x000124d3) list_form_graphic_pane_cp_ParamLimits

0x799f,	// (0x000124d3) list_form_graphic_pane_cp

0xab59,	// (0x0001568d) slider_form_pane_g1

0xab62,	// (0x00015696) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x0001a4f7) slider_form_pane_g

0x799f,	// (0x000124d3) list_form_graphic_pane_ParamLimits

0x799f,	// (0x000124d3) list_form_graphic_pane

0x79b1,	// (0x000124e5) list_form_graphic_pane_g1

0x79b9,	// (0x000124ed) list_form_graphic_pane_t1_ParamLimits

0x79b9,	// (0x000124ed) list_form_graphic_pane_t1

0x69c0,	// (0x000114f4) list_highlight_pane_cp5_ParamLimits

0x69c0,	// (0x000114f4) list_highlight_pane_cp5

0x79ce,	// (0x00012502) find_pane_g1

0x79d7,	// (0x0001250b) input_find_pane

0x79e0,	// (0x00012514) input_find_pane_g1_ParamLimits

0x79e0,	// (0x00012514) input_find_pane_g1

0x79ec,	// (0x00012520) input_find_pane_t1_ParamLimits

0x79ec,	// (0x00012520) input_find_pane_t1

0x7a01,	// (0x00012535) input_find_pane_t2_ParamLimits

0x7a01,	// (0x00012535) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001a214) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001a214) input_find_pane_t

0x7a16,	// (0x0001254a) input_focus_pane_cp5_ParamLimits

0x7a16,	// (0x0001254a) input_focus_pane_cp5

0x7a30,	// (0x00012564) bg_popup_window_pane_cp2_ParamLimits

0x7a30,	// (0x00012564) bg_popup_window_pane_cp2

0x7a3d,	// (0x00012571) listscroll_menu_pane_ParamLimits

0x7a3d,	// (0x00012571) listscroll_menu_pane

0x7a49,	// (0x0001257d) popup_submenu_window_ParamLimits

0x7a49,	// (0x0001257d) popup_submenu_window

0x7a79,	// (0x000125ad) find_popup_pane_g1

0x7a81,	// (0x000125b5) input_popup_find_pane_cp

0x7a16,	// (0x0001254a) input_focus_pane_cp4_ParamLimits

0x7a16,	// (0x0001254a) input_focus_pane_cp4

0x7a99,	// (0x000125cd) input_popup_find_pane_t1_ParamLimits

0x7a99,	// (0x000125cd) input_popup_find_pane_t1

0x68e0,	// (0x00011414) bg_popup_sub_pane_cp

0x7ac7,	// (0x000125fb) listscroll_popup_sub_pane

0x7acf,	// (0x00012603) list_submenu_pane_ParamLimits

0x7acf,	// (0x00012603) list_submenu_pane

0x7ae0,	// (0x00012614) scroll_pane_cp4

0x7ae8,	// (0x0001261c) list_single_popup_submenu_pane_ParamLimits

0x7ae8,	// (0x0001261c) list_single_popup_submenu_pane

0x7afd,	// (0x00012631) list_single_popup_submenu_pane_g1

0x7b05,	// (0x00012639) list_single_popup_submenu_pane_t1_ParamLimits

0x7b05,	// (0x00012639) list_single_popup_submenu_pane_t1

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp1_ParamLimits

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp1

0x7b1a,	// (0x0001264e) tabs_2_active_pane_g1

0x7b22,	// (0x00012656) tabs_2_active_pane_t1

0x69c0,	// (0x000114f4) bg_passive_tab_pane_cp1_ParamLimits

0x69c0,	// (0x000114f4) bg_passive_tab_pane_cp1

0x7b1a,	// (0x0001264e) tabs_2_passive_pane_g1

0x7b22,	// (0x00012656) tabs_2_passive_pane_t1

0x7b34,	// (0x00012668) bg_active_tab_pane_cp4

0x7b42,	// (0x00012676) tabs_2_long_active_pane_t1

0x7b55,	// (0x00012689) bg_passive_tab_pane_cp4

0x57a1,	// (0x000102d5) list_single_midp_graphic_pane_g4_ParamLimits

0x7b34,	// (0x00012668) bg_active_tab_pane_cp5

0x7b61,	// (0x00012695) tabs_3_long_active_pane_t1

0x7b55,	// (0x00012689) bg_passive_tab_pane_cp5

0x57a1,	// (0x000102d5) list_single_midp_graphic_pane_g4

0x69c0,	// (0x000114f4) bg_popup_window_pane_cp13_ParamLimits

0x69c0,	// (0x000114f4) bg_popup_window_pane_cp13

0x7b7c,	// (0x000126b0) listscroll_popup_fast_pane_ParamLimits

0x7b7c,	// (0x000126b0) listscroll_popup_fast_pane

0x7b8b,	// (0x000126bf) grid_popup_fast_pane_ParamLimits

0x7b8b,	// (0x000126bf) grid_popup_fast_pane

0x7b9d,	// (0x000126d1) scroll_pane_cp9_ParamLimits

0x7b9d,	// (0x000126d1) scroll_pane_cp9

0xc945,	// (0x00017479) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc945,	// (0x00017479) list_single_graphic_hl_pane_t1_cp2

0x7bc1,	// (0x000126f5) input_focus_pane_cp20_ParamLimits

0x7bc1,	// (0x000126f5) input_focus_pane_cp20

0x7bcf,	// (0x00012703) query_popup_data_pane_t1_ParamLimits

0x7bcf,	// (0x00012703) query_popup_data_pane_t1

0x7be2,	// (0x00012716) query_popup_data_pane_t2_ParamLimits

0x7be2,	// (0x00012716) query_popup_data_pane_t2

0x7c28,	// (0x0001275c) query_popup_data_pane_t3_ParamLimits

0x7c28,	// (0x0001275c) query_popup_data_pane_t3

0x7c69,	// (0x0001279d) query_popup_data_pane_t4_ParamLimits

0x7c69,	// (0x0001279d) query_popup_data_pane_t4

0x7ca5,	// (0x000127d9) query_popup_data_pane_t5_ParamLimits

0x7ca5,	// (0x000127d9) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001a219) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001a219) query_popup_data_pane_t

0x7938,	// (0x0001246c) bg_set_opt_pane_g1

0x7940,	// (0x00012474) bg_set_opt_pane_g2

0x7948,	// (0x0001247c) bg_set_opt_pane_g3

0x7950,	// (0x00012484) bg_set_opt_pane_g4

0x7958,	// (0x0001248c) bg_set_opt_pane_g5

0x7960,	// (0x00012494) bg_set_opt_pane_g6

0x7968,	// (0x0001249c) bg_set_opt_pane_g7

0x7970,	// (0x000124a4) bg_set_opt_pane_g8

0x7978,	// (0x000124ac) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001a224) bg_set_opt_pane_g

0x5392,	// (0x0000fec6) control_top_pane_stacon_ParamLimits

0x5392,	// (0x0000fec6) control_top_pane_stacon

0x53e5,	// (0x0000ff19) signal_pane_stacon_ParamLimits

0x53e5,	// (0x0000ff19) signal_pane_stacon

0x82dd,	// (0x00012e11) stacon_top_pane_g1_ParamLimits

0x82dd,	// (0x00012e11) stacon_top_pane_g1

0x540a,	// (0x0000ff3e) title_pane_stacon_ParamLimits

0x540a,	// (0x0000ff3e) title_pane_stacon

0x5434,	// (0x0000ff68) uni_indicator_pane_stacon_ParamLimits

0x5434,	// (0x0000ff68) uni_indicator_pane_stacon

0x544c,	// (0x0000ff80) battery_pane_stacon_ParamLimits

0x544c,	// (0x0000ff80) battery_pane_stacon

0x5490,	// (0x0000ffc4) control_bottom_pane_stacon_ParamLimits

0x5490,	// (0x0000ffc4) control_bottom_pane_stacon

0x54b3,	// (0x0000ffe7) navi_pane_stacon_ParamLimits

0x54b3,	// (0x0000ffe7) navi_pane_stacon

0x82ff,	// (0x00012e33) stacon_bottom_pane_g1_ParamLimits

0x82ff,	// (0x00012e33) stacon_bottom_pane_g1

0x50ef,	// (0x0000fc23) aid_levels_signal_lsc_ParamLimits

0x50ef,	// (0x0000fc23) aid_levels_signal_lsc

0x5106,	// (0x0000fc3a) signal_pane_stacon_g1_ParamLimits

0x5106,	// (0x0000fc3a) signal_pane_stacon_g1

0x511a,	// (0x0000fc4e) signal_pane_stacon_g2_ParamLimits

0x511a,	// (0x0000fc4e) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001a237) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001a237) signal_pane_stacon_g

0x514f,	// (0x0000fc83) title_pane_stacon_t1_ParamLimits

0x514f,	// (0x0000fc83) title_pane_stacon_t1

0x7ce9,	// (0x0001281d) uni_indicator_pane_stacon_g1

0x7cf3,	// (0x00012827) uni_indicator_pane_stacon_g2

0x7cfd,	// (0x00012831) uni_indicator_pane_stacon_g3

0x7d07,	// (0x0001283b) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001a243) uni_indicator_pane_stacon_g

0x5174,	// (0x0000fca8) control_top_pane_stacon_g1

0x517c,	// (0x0000fcb0) control_top_pane_stacon_t1_ParamLimits

0x517c,	// (0x0000fcb0) control_top_pane_stacon_t1

0x51b3,	// (0x0000fce7) aid_levels_battery_lsc_ParamLimits

0x51b3,	// (0x0000fce7) aid_levels_battery_lsc

0x51cb,	// (0x0000fcff) battery_pane_stacon_g1_ParamLimits

0x51cb,	// (0x0000fcff) battery_pane_stacon_g1

0x51de,	// (0x0000fd12) battery_pane_stacon_g2_ParamLimits

0x51de,	// (0x0000fd12) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001a24c) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001a24c) battery_pane_stacon_g

0x521c,	// (0x0000fd50) navi_icon_pane_stacon

0x5230,	// (0x0000fd64) navi_navi_pane_stacon

0x521c,	// (0x0000fd50) navi_text_pane_stacon

0x5174,	// (0x0000fca8) control_bottom_pane_stacon_g1

0x5246,	// (0x0000fd7a) control_bottom_pane_stacon_t1_ParamLimits

0x5246,	// (0x0000fd7a) control_bottom_pane_stacon_t1

0x7d2b,	// (0x0001285f) grid_app_pane_ParamLimits

0x7d2b,	// (0x0001285f) grid_app_pane

0x7d4f,	// (0x00012883) scroll_pane_cp15_ParamLimits

0x7d4f,	// (0x00012883) scroll_pane_cp15

0x7d64,	// (0x00012898) cell_app_pane_ParamLimits

0x7d64,	// (0x00012898) cell_app_pane

0x7d90,	// (0x000128c4) cell_app_pane_g1_ParamLimits

0x7d90,	// (0x000128c4) cell_app_pane_g1

0x7db4,	// (0x000128e8) cell_app_pane_g2_ParamLimits

0x7db4,	// (0x000128e8) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001a251) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001a251) cell_app_pane_g

0x7dc0,	// (0x000128f4) cell_app_pane_t1_ParamLimits

0x7dc0,	// (0x000128f4) cell_app_pane_t1

0x7dd2,	// (0x00012906) grid_highlight_pane_ParamLimits

0x7dd2,	// (0x00012906) grid_highlight_pane

0x7938,	// (0x0001246c) cell_highlight_pane_g1

0x7940,	// (0x00012474) cell_highlight_pane_g2

0x7948,	// (0x0001247c) cell_highlight_pane_g3

0x7950,	// (0x00012484) cell_highlight_pane_g4

0x7958,	// (0x0001248c) cell_highlight_pane_g5

0x7960,	// (0x00012494) cell_highlight_pane_g6

0x7968,	// (0x0001249c) cell_highlight_pane_g7

0x7970,	// (0x000124a4) cell_highlight_pane_g8

0x7978,	// (0x000124ac) cell_highlight_pane_g9

0x68d6,	// (0x0001140a) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001a1ff) cell_highlight_pane_g

0x7de3,	// (0x00012917) bg_scroll_pane

0x5290,	// (0x0000fdc4) scroll_handle_pane

0x7e2a,	// (0x0001295e) scroll_bg_pane_g1

0x7e3f,	// (0x00012973) scroll_bg_pane_g2

0x7e57,	// (0x0001298b) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001a256) scroll_bg_pane_g

0x7e6c,	// (0x000129a0) scroll_handle_focus_pane_ParamLimits

0x7e6c,	// (0x000129a0) scroll_handle_focus_pane

0x7e2a,	// (0x0001295e) scroll_handle_pane_g1

0x7e79,	// (0x000129ad) scroll_handle_pane_g2

0x7e57,	// (0x0001298b) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001a25d) scroll_handle_pane_g

0x7a16,	// (0x0001254a) bg_popup_sub_pane_cp21_ParamLimits

0x7a16,	// (0x0001254a) bg_popup_sub_pane_cp21

0x7e8d,	// (0x000129c1) popup_fep_japan_predictive_window_t1_ParamLimits

0x7e8d,	// (0x000129c1) popup_fep_japan_predictive_window_t1

0x7ea4,	// (0x000129d8) popup_fep_japan_predictive_window_t2_ParamLimits

0x7ea4,	// (0x000129d8) popup_fep_japan_predictive_window_t2

0x7ed7,	// (0x00012a0b) popup_fep_japan_predictive_window_t3_ParamLimits

0x7ed7,	// (0x00012a0b) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001a264) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001a264) popup_fep_japan_predictive_window_t

0x68e0,	// (0x00011414) bg_popup_sub_pane_cp23

0x7f0e,	// (0x00012a42) listscroll_japin_cand_pane

0x7f16,	// (0x00012a4a) popup_fep_japan_candidate_window_t1

0x7f24,	// (0x00012a58) candidate_pane_ParamLimits

0x7f24,	// (0x00012a58) candidate_pane

0x7f36,	// (0x00012a6a) scroll_pane_cp30

0x7f40,	// (0x00012a74) list_single_popup_jap_candidate_pane_ParamLimits

0x7f40,	// (0x00012a74) list_single_popup_jap_candidate_pane

0x68e0,	// (0x00011414) list_highlight_pane_cp30

0x7f54,	// (0x00012a88) list_single_popup_jap_candidate_pane_t1

0x7f63,	// (0x00012a97) level_1_signal

0x7f70,	// (0x00012aa4) level_2_signal

0x7f7d,	// (0x00012ab1) level_3_signal

0x7f8a,	// (0x00012abe) level_4_signal

0x7f97,	// (0x00012acb) level_5_signal

0x7fa4,	// (0x00012ad8) level_6_signal

0x7fb1,	// (0x00012ae5) level_7_signal

0x7f63,	// (0x00012a97) level_1_battery

0x7f70,	// (0x00012aa4) level_2_battery

0x7f7d,	// (0x00012ab1) level_3_battery

0x7f8a,	// (0x00012abe) level_4_battery

0x7f97,	// (0x00012acb) level_5_battery

0x7fa4,	// (0x00012ad8) level_6_battery

0x7fb1,	// (0x00012ae5) level_7_battery

0x7fd6,	// (0x00012b0a) list_menu_pane_ParamLimits

0x7fd6,	// (0x00012b0a) list_menu_pane

0x7fe7,	// (0x00012b1b) scroll_pane_cp25_ParamLimits

0x7fe7,	// (0x00012b1b) scroll_pane_cp25

0x8000,	// (0x00012b34) list_double2_graphic_pane_cp2_ParamLimits

0x8000,	// (0x00012b34) list_double2_graphic_pane_cp2

0x8000,	// (0x00012b34) list_double2_large_graphic_pane_cp2_ParamLimits

0x8000,	// (0x00012b34) list_double2_large_graphic_pane_cp2

0x8000,	// (0x00012b34) list_double2_pane_cp2_ParamLimits

0x8000,	// (0x00012b34) list_double2_pane_cp2

0x8000,	// (0x00012b34) list_double_graphic_pane_cp2_ParamLimits

0x8000,	// (0x00012b34) list_double_graphic_pane_cp2

0x8000,	// (0x00012b34) list_double_large_graphic_pane_cp2_ParamLimits

0x8000,	// (0x00012b34) list_double_large_graphic_pane_cp2

0x8000,	// (0x00012b34) list_double_number_pane_cp2_ParamLimits

0x8000,	// (0x00012b34) list_double_number_pane_cp2

0x8000,	// (0x00012b34) list_double_pane_cp2_ParamLimits

0x8000,	// (0x00012b34) list_double_pane_cp2

0x8026,	// (0x00012b5a) list_single_2graphic_pane_cp2_ParamLimits

0x8026,	// (0x00012b5a) list_single_2graphic_pane_cp2

0x8026,	// (0x00012b5a) list_single_graphic_heading_pane_cp2_ParamLimits

0x8026,	// (0x00012b5a) list_single_graphic_heading_pane_cp2

0x8026,	// (0x00012b5a) list_single_graphic_pane_cp2_ParamLimits

0x8026,	// (0x00012b5a) list_single_graphic_pane_cp2

0x8026,	// (0x00012b5a) list_single_heading_pane_cp2_ParamLimits

0x8026,	// (0x00012b5a) list_single_heading_pane_cp2

0x8043,	// (0x00012b77) list_single_large_graphic_pane_cp2_ParamLimits

0x8043,	// (0x00012b77) list_single_large_graphic_pane_cp2

0x8026,	// (0x00012b5a) list_single_number_heading_pane_cp2_ParamLimits

0x8026,	// (0x00012b5a) list_single_number_heading_pane_cp2

0x8026,	// (0x00012b5a) list_single_number_pane_cp2_ParamLimits

0x8026,	// (0x00012b5a) list_single_number_pane_cp2

0x8026,	// (0x00012b5a) list_single_pane_cp2_ParamLimits

0x8026,	// (0x00012b5a) list_single_pane_cp2

0x8098,	// (0x00012bcc) bg_popup_sub_pane_cp22

0x5342,	// (0x0000fe76) popup_side_volume_key_window_g1

0x536c,	// (0x0000fea0) popup_side_volume_key_window_t1

0x538a,	// (0x0000febe) volume_small_pane_cp1

0x6c56,	// (0x0001178a) bg_popup_sub_pane_cp24_ParamLimits

0x6c56,	// (0x0001178a) bg_popup_sub_pane_cp24

0x80ae,	// (0x00012be2) fep_china_uni_candidate_pane_ParamLimits

0x80ae,	// (0x00012be2) fep_china_uni_candidate_pane

0x80c2,	// (0x00012bf6) fep_china_uni_entry_pane

0x80d2,	// (0x00012c06) popup_fep_china_uni_window_g1

0x80ee,	// (0x00012c22) fep_china_uni_entry_pane_g1

0x80f8,	// (0x00012c2c) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001a291) fep_china_uni_entry_pane_g

0x8102,	// (0x00012c36) fep_entry_item_pane

0x810c,	// (0x00012c40) fep_candidate_item_pane

0x8114,	// (0x00012c48) fep_china_uni_candidate_pane_g1

0x811e,	// (0x00012c52) fep_china_uni_candidate_pane_g2

0x8126,	// (0x00012c5a) fep_china_uni_candidate_pane_g3

0x812e,	// (0x00012c62) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001a296) fep_china_uni_candidate_pane_g

0x68d6,	// (0x0001140a) fep_entry_item_pane_g1

0x8138,	// (0x00012c6c) fep_entry_item_pane_t1_ParamLimits

0x8138,	// (0x00012c6c) fep_entry_item_pane_t1

0x814e,	// (0x00012c82) fep_candidate_item_pane_t1_ParamLimits

0x814e,	// (0x00012c82) fep_candidate_item_pane_t1

0x8163,	// (0x00012c97) fep_candidate_item_pane_t2_ParamLimits

0x8163,	// (0x00012c97) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001a29f) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001a29f) fep_candidate_item_pane_t

0x69c0,	// (0x000114f4) list_highlight_pane_cp31_ParamLimits

0x69c0,	// (0x000114f4) list_highlight_pane_cp31

0x8175,	// (0x00012ca9) level_1_signal_lsc

0x817e,	// (0x00012cb2) level_2_signal_lsc

0x8187,	// (0x00012cbb) level_3_signal_lsc

0x8190,	// (0x00012cc4) level_4_signal_lsc

0x8199,	// (0x00012ccd) level_5_signal_lsc

0x81a2,	// (0x00012cd6) level_6_signal_lsc

0x81ab,	// (0x00012cdf) level_7_signal_lsc

0x81ab,	// (0x00012cdf) level_1_battery_lsc

0x81b4,	// (0x00012ce8) level_2_battery_lsc

0x81bd,	// (0x00012cf1) level_3_battery_lsc

0x81c6,	// (0x00012cfa) level_4_battery_lsc

0x81cf,	// (0x00012d03) level_5_battery_lsc

0x81d8,	// (0x00012d0c) level_6_battery_lsc

0x8175,	// (0x00012ca9) level_7_battery_lsc

0x81e1,	// (0x00012d15) scroll_handle_focus_pane_g1

0x81ea,	// (0x00012d1e) scroll_handle_focus_pane_g2

0x81f3,	// (0x00012d27) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001a2a4) scroll_handle_focus_pane_g

0x81fc,	// (0x00012d30) list_single_2graphic_pane_g1_ParamLimits

0x81fc,	// (0x00012d30) list_single_2graphic_pane_g1

0x729a,	// (0x00011dce) list_single_2graphic_pane_g2_ParamLimits

0x729a,	// (0x00011dce) list_single_2graphic_pane_g2

0x7220,	// (0x00011d54) list_single_2graphic_pane_g3_ParamLimits

0x7220,	// (0x00011d54) list_single_2graphic_pane_g3

0x8208,	// (0x00012d3c) list_single_2graphic_pane_g4_ParamLimits

0x8208,	// (0x00012d3c) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001a2ab) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001a2ab) list_single_2graphic_pane_g

0x8214,	// (0x00012d48) list_single_2graphic_pane_t1_ParamLimits

0x8214,	// (0x00012d48) list_single_2graphic_pane_t1

0x8242,	// (0x00012d76) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8242,	// (0x00012d76) list_double2_graphic_large_graphic_pane_g1

0x733f,	// (0x00011e73) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x733f,	// (0x00011e73) list_double2_graphic_large_graphic_pane_g2

0x7350,	// (0x00011e84) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7350,	// (0x00011e84) list_double2_graphic_large_graphic_pane_g3

0x8254,	// (0x00012d88) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8254,	// (0x00012d88) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001a2b4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001a2b4) list_double2_graphic_large_graphic_pane_g

0x8260,	// (0x00012d94) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8260,	// (0x00012d94) list_double2_graphic_large_graphic_pane_t1

0x8276,	// (0x00012daa) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8276,	// (0x00012daa) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001a2bd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001a2bd) list_double2_graphic_large_graphic_pane_t

0x83c1,	// (0x00012ef5) popup_fast_swap_window_ParamLimits

0x83c1,	// (0x00012ef5) popup_fast_swap_window

0x83df,	// (0x00012f13) popup_side_volume_key_window

0x83fd,	// (0x00012f31) stacon_top_pane

0x8407,	// (0x00012f3b) status_pane_ParamLimits

0x8407,	// (0x00012f3b) status_pane

0x83fd,	// (0x00012f31) status_small_pane

0x68e0,	// (0x00011414) control_pane

0x68e0,	// (0x00011414) stacon_bottom_pane

0x76fd,	// (0x00012231) scroll_pane_cp121

0x76f4,	// (0x00012228) set_content_pane

0x8288,	// (0x00012dbc) bg_active_tab_pane_g1_cp1

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp1

0x829a,	// (0x00012dce) bg_active_tab_pane_g3_cp1

0x8288,	// (0x00012dbc) bg_passive_tab_pane_g1_cp1

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp1

0x829a,	// (0x00012dce) bg_passive_tab_pane_g3_cp1

0x82a3,	// (0x00012dd7) bg_active_tab_pane_g1_cp2

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp2

0x82ac,	// (0x00012de0) bg_active_tab_pane_g3_cp2

0x82a3,	// (0x00012dd7) bg_passive_tab_pane_g1_cp2

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp2

0x82ac,	// (0x00012de0) bg_passive_tab_pane_g3_cp2

0x82b5,	// (0x00012de9) bg_active_tab_pane_g1_cp3

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp3

0x82be,	// (0x00012df2) bg_active_tab_pane_g3_cp3

0x82b5,	// (0x00012de9) bg_passive_tab_pane_g1_cp3

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp3

0x82be,	// (0x00012df2) bg_passive_tab_pane_g3_cp3

0x82c7,	// (0x00012dfb) bg_active_tab_pane_g1_cp4

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp4

0x82d2,	// (0x00012e06) bg_active_tab_pane_g3_cp4

0x82c7,	// (0x00012dfb) bg_passive_tab_pane_g1_cp4

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp4

0x82d2,	// (0x00012e06) bg_passive_tab_pane_g3_cp4

0x831b,	// (0x00012e4f) bg_active_tab_pane_g1_cp5

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp5

0x8324,	// (0x00012e58) bg_active_tab_pane_g3_cp5

0x831b,	// (0x00012e4f) bg_passive_tab_pane_g1_cp5

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp5

0x8324,	// (0x00012e58) bg_passive_tab_pane_g3_cp5

0x832d,	// (0x00012e61) list_set_graphic_pane_ParamLimits

0x832d,	// (0x00012e61) list_set_graphic_pane

0x68e0,	// (0x00011414) bg_set_opt_pane_cp4

0x8342,	// (0x00012e76) list_set_graphic_pane_g1_ParamLimits

0x8342,	// (0x00012e76) list_set_graphic_pane_g1

0x834e,	// (0x00012e82) list_set_graphic_pane_g2_ParamLimits

0x834e,	// (0x00012e82) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001a2c2) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001a2c2) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0001a624) volume_small_pane_cp_g

0x8372,	// (0x00012ea6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8372,	// (0x00012ea6) list_double2_large_graphic_pane_g1_cp2

0x8380,	// (0x00012eb4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8380,	// (0x00012eb4) list_double2_large_graphic_pane_g2_cp2

0x8391,	// (0x00012ec5) list_double2_large_graphic_pane_g3_cp2

0x8399,	// (0x00012ecd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8399,	// (0x00012ecd) list_double2_large_graphic_pane_t1_cp2

0x83af,	// (0x00012ee3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x83af,	// (0x00012ee3) list_double2_large_graphic_pane_t2_cp2

0xa696,	// (0x000151ca) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa696,	// (0x000151ca) list_double_large_graphic_pane_g1_cp2

0xa6a9,	// (0x000151dd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa6a9,	// (0x000151dd) list_double_large_graphic_pane_g2_cp2

0x8525,	// (0x00013059) list_double_large_graphic_pane_g3_cp2

0xa6ba,	// (0x000151ee) list_double_large_graphic_pane_g4_cp

0xa6c2,	// (0x000151f6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa6c2,	// (0x000151f6) list_double_large_graphic_pane_t1_cp2

0xa6d9,	// (0x0001520d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa6d9,	// (0x0001520d) list_double_large_graphic_pane_t2_cp2

0x8415,	// (0x00012f49) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8415,	// (0x00012f49) list_double2_graphic_pane_g1_cp2

0x8423,	// (0x00012f57) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8423,	// (0x00012f57) list_double2_graphic_pane_g2_cp2

0x8434,	// (0x00012f68) list_double2_graphic_pane_g3_cp2

0x843e,	// (0x00012f72) list_double2_graphic_pane_t1_cp2_ParamLimits

0x843e,	// (0x00012f72) list_double2_graphic_pane_t1_cp2

0x8454,	// (0x00012f88) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8454,	// (0x00012f88) list_double2_graphic_pane_t2_cp2

0x8466,	// (0x00012f9a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8466,	// (0x00012f9a) list_single_number_heading_pane_g1_cp2

0x8472,	// (0x00012fa6) list_single_number_heading_pane_g2_cp2

0x847a,	// (0x00012fae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x847a,	// (0x00012fae) list_single_number_heading_pane_t1_cp2

0x8490,	// (0x00012fc4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8490,	// (0x00012fc4) list_single_number_heading_pane_t2_cp2

0x84a4,	// (0x00012fd8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x84a4,	// (0x00012fd8) list_single_number_heading_pane_t3_cp2

0x8466,	// (0x00012f9a) list_single_heading_pane_g1_cp2_ParamLimits

0x8466,	// (0x00012f9a) list_single_heading_pane_g1_cp2

0x8472,	// (0x00012fa6) list_single_heading_pane_g2_cp2

0x847a,	// (0x00012fae) list_single_heading_pane_t1_cp2_ParamLimits

0x847a,	// (0x00012fae) list_single_heading_pane_t1_cp2

0xa490,	// (0x00014fc4) list_single_heading_pane_t2_cp2_ParamLimits

0xa490,	// (0x00014fc4) list_single_heading_pane_t2_cp2

0xa3d2,	// (0x00014f06) list_double_graphic_pane_g1_cp2_ParamLimits

0xa3d2,	// (0x00014f06) list_double_graphic_pane_g1_cp2

0xa3de,	// (0x00014f12) list_double_graphic_pane_g2_cp2_ParamLimits

0xa3de,	// (0x00014f12) list_double_graphic_pane_g2_cp2

0xa3ed,	// (0x00014f21) list_double_graphic_pane_g3_cp2

0xa3f5,	// (0x00014f29) list_double_graphic_pane_t1_cp2_ParamLimits

0xa3f5,	// (0x00014f29) list_double_graphic_pane_t1_cp2

0xa40b,	// (0x00014f3f) list_double_graphic_pane_t2_cp2_ParamLimits

0xa40b,	// (0x00014f3f) list_double_graphic_pane_t2_cp2

0x8519,	// (0x0001304d) list_double_number_pane_g1_cp2_ParamLimits

0x8519,	// (0x0001304d) list_double_number_pane_g1_cp2

0x8525,	// (0x00013059) list_double_number_pane_g2_cp2

0xa396,	// (0x00014eca) list_double_number_pane_t1_cp2_ParamLimits

0xa396,	// (0x00014eca) list_double_number_pane_t1_cp2

0xa3aa,	// (0x00014ede) list_double_number_pane_t2_cp2_ParamLimits

0xa3aa,	// (0x00014ede) list_double_number_pane_t2_cp2

0xa3c0,	// (0x00014ef4) list_double_number_pane_t3_cp2_ParamLimits

0xa3c0,	// (0x00014ef4) list_double_number_pane_t3_cp2

0xa27f,	// (0x00014db3) list_single_graphic_pane_g1_cp2_ParamLimits

0xa27f,	// (0x00014db3) list_single_graphic_pane_g1_cp2

0x857f,	// (0x000130b3) list_single_graphic_pane_g2_cp2_ParamLimits

0x857f,	// (0x000130b3) list_single_graphic_pane_g2_cp2

0x858b,	// (0x000130bf) list_single_graphic_pane_g3_cp2

0xa255,	// (0x00014d89) list_single_graphic_pane_t1_cp2_ParamLimits

0xa255,	// (0x00014d89) list_single_graphic_pane_t1_cp2

0x857f,	// (0x000130b3) list_single_number_pane_g1_cp2_ParamLimits

0x857f,	// (0x000130b3) list_single_number_pane_g1_cp2

0x858b,	// (0x000130bf) list_single_number_pane_g2_cp2

0xa255,	// (0x00014d89) list_single_number_pane_t1_cp2_ParamLimits

0xa255,	// (0x00014d89) list_single_number_pane_t1_cp2

0xa26b,	// (0x00014d9f) list_single_number_pane_t2_cp2_ParamLimits

0xa26b,	// (0x00014d9f) list_single_number_pane_t2_cp2

0x8380,	// (0x00012eb4) list_double2_pane_g1_cp2_ParamLimits

0x8380,	// (0x00012eb4) list_double2_pane_g1_cp2

0x8391,	// (0x00012ec5) list_double2_pane_g2_cp2

0x84f1,	// (0x00013025) list_double2_pane_t1_cp2_ParamLimits

0x84f1,	// (0x00013025) list_double2_pane_t1_cp2

0x8507,	// (0x0001303b) list_double2_pane_t2_cp2_ParamLimits

0x8507,	// (0x0001303b) list_double2_pane_t2_cp2

0x8519,	// (0x0001304d) list_double_pane_g1_cp2_ParamLimits

0x8519,	// (0x0001304d) list_double_pane_g1_cp2

0x8525,	// (0x00013059) list_double_pane_g2_cp2

0x852d,	// (0x00013061) list_double_pane_t1_cp2_ParamLimits

0x852d,	// (0x00013061) list_double_pane_t1_cp2

0x8543,	// (0x00013077) list_double_pane_t2_cp2_ParamLimits

0x8543,	// (0x00013077) list_double_pane_t2_cp2

0x856f,	// (0x000130a3) list_single_pane_cp2_g3

0x857f,	// (0x000130b3) list_single_pane_g1_cp2_ParamLimits

0x857f,	// (0x000130b3) list_single_pane_g1_cp2

0x858b,	// (0x000130bf) list_single_pane_g2_cp2

0x8593,	// (0x000130c7) list_single_pane_t1_cp2_ParamLimits

0x8593,	// (0x000130c7) list_single_pane_t1_cp2

0x85ab,	// (0x000130df) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x85ab,	// (0x000130df) list_single_large_graphic_pane_g1_cp2

0x85b9,	// (0x000130ed) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x85b9,	// (0x000130ed) list_single_large_graphic_pane_g2_cp2

0x85c5,	// (0x000130f9) list_single_large_graphic_pane_g3_cp2

0x85cd,	// (0x00013101) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x85cd,	// (0x00013101) list_single_large_graphic_pane_g4_cp1

0x85e7,	// (0x0001311b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x85e7,	// (0x0001311b) list_single_large_graphic_pane_t1_cp2

0xa21f,	// (0x00014d53) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa21f,	// (0x00014d53) list_single_graphic_heading_pane_g1_cp2

0xa1ec,	// (0x00014d20) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa1ec,	// (0x00014d20) list_single_graphic_heading_pane_g4_cp2

0x858b,	// (0x000130bf) list_single_graphic_heading_pane_g5_cp2

0xa22b,	// (0x00014d5f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa22b,	// (0x00014d5f) list_single_graphic_heading_pane_t1_cp2

0xa241,	// (0x00014d75) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa241,	// (0x00014d75) list_single_graphic_heading_pane_t2_cp2

0xa1e0,	// (0x00014d14) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa1e0,	// (0x00014d14) list_single_2graphic_pane_g1_cp2

0xa1ec,	// (0x00014d20) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa1ec,	// (0x00014d20) list_single_2graphic_pane_g2_cp2

0x858b,	// (0x000130bf) list_single_2graphic_pane_g3_cp2

0xa1fd,	// (0x00014d31) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa1fd,	// (0x00014d31) list_single_2graphic_pane_g4_cp2

0xa209,	// (0x00014d3d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa209,	// (0x00014d3d) list_single_2graphic_pane_t1_cp2

0x68d6,	// (0x0001140a) list_highlight_pane_g10_cp1

0x9db8,	// (0x000148ec) list_highlight_pane_g1_cp1

0x9dc0,	// (0x000148f4) list_highlight_pane_g2_cp1

0x9dc8,	// (0x000148fc) list_highlight_pane_g3_cp1

0x9dd0,	// (0x00014904) list_highlight_pane_g4_cp1

0x9dd8,	// (0x0001490c) list_highlight_pane_g5_cp1

0x9de0,	// (0x00014914) list_highlight_pane_g6_cp1

0x9de8,	// (0x0001491c) list_highlight_pane_g7_cp1

0x9df0,	// (0x00014924) list_highlight_pane_g8_cp1

0x9df8,	// (0x0001492c) list_highlight_pane_g9_cp1

0x9cd8,	// (0x0001480c) form_field_slider_pane_t3

0x9ce6,	// (0x0001481a) form_field_slider_pane_t4

0x9cf4,	// (0x00014828) slider_form_pane_ParamLimits

0x9cf4,	// (0x00014828) slider_form_pane

0x68e0,	// (0x00011414) control_abbreviations

0x68e0,	// (0x00011414) control_conventions

0x68e0,	// (0x00011414) control_definitions

0x68e0,	// (0x00011414) format_table_attribute

0xa4e6,	// (0x0001501a) bg_popup_preview_window_pane_g9

0x68e0,	// (0x00011414) format_table_data2

0x68e0,	// (0x00011414) format_table_data3

0x68e0,	// (0x00011414) format_table_data_example

0x0008,

0x68e0,	// (0x00011414) intro_purpose

0xf923,	// (0x0001a457) bg_popup_preview_window_pane_g

0x68e0,	// (0x00011414) texts_category

0x68e0,	// (0x00011414) texts_graphics

0x85fd,	// (0x00013131) text_digital

0x860c,	// (0x00013140) text_primary

0x861b,	// (0x0001314f) text_primary_small

0x862a,	// (0x0001315e) text_secondary

0x8639,	// (0x0001316d) text_title

0xad0b,	// (0x0001583f) bg_passive_tab_pane_g1_cp3_srt

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp3_srt

0xad14,	// (0x00015848) bg_passive_tab_pane_g3_cp3_srt

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp3_srt_ParamLimits

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp3_srt

0xad1d,	// (0x00015851) tabs_4_active_pane_srt_g1

0xad25,	// (0x00015859) tabs_4_active_pane_srt_t1_ParamLimits

0xad25,	// (0x00015859) tabs_4_active_pane_srt_t1

0xad0b,	// (0x0001583f) bg_active_tab_pane_g1_cp3_copy1

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp3_copy1

0xad14,	// (0x00015848) bg_active_tab_pane_g3_cp3_copy1

0x69c0,	// (0x000114f4) tabs_2_long_active_pane_srt_ParamLimits

0x69c0,	// (0x000114f4) tabs_2_long_active_pane_srt

0x69c0,	// (0x000114f4) tabs_2_long_passive_pane_srt_ParamLimits

0x69c0,	// (0x000114f4) tabs_2_long_passive_pane_srt

0x7b55,	// (0x00012689) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7b55,	// (0x00012689) bg_passive_tab_pane_cp4_srt

0xa95e,	// (0x00015492) bg_passive_tab_pane_g1_cp4_srt

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp4_srt

0xa967,	// (0x0001549b) bg_passive_tab_pane_g3_cp4_srt

0x7b34,	// (0x00012668) bg_active_tab_pane_cp4_srt_ParamLimits

0x7b34,	// (0x00012668) bg_active_tab_pane_cp4_srt

0xa970,	// (0x000154a4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa970,	// (0x000154a4) tabs_2_long_active_pane_srt_t1

0xa95e,	// (0x00015492) bg_active_tab_pane_g1_cp4_srt

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp4_srt

0xa967,	// (0x0001549b) bg_active_tab_pane_g3_cp4_srt

0x6c56,	// (0x0001178a) tabs_3_long_active_pane_srt_ParamLimits

0x6c56,	// (0x0001178a) tabs_3_long_active_pane_srt

0x6c56,	// (0x0001178a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6c56,	// (0x0001178a) tabs_3_long_passive_pane_cp_srt

0x6c56,	// (0x0001178a) tabs_3_long_passive_pane_srt_ParamLimits

0x6c56,	// (0x0001178a) tabs_3_long_passive_pane_srt

0x7b55,	// (0x00012689) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7b55,	// (0x00012689) bg_passive_tab_pane_cp5_srt

0x831b,	// (0x00012e4f) bg_passive_tab_pane_g1_cp5_srt

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp5_srt

0x8324,	// (0x00012e58) bg_passive_tab_pane_g3_cp5_srt

0x7b34,	// (0x00012668) bg_active_tab_pane_cp5_srt_ParamLimits

0x7b34,	// (0x00012668) bg_active_tab_pane_cp5_srt

0xa94c,	// (0x00015480) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa94c,	// (0x00015480) tabs_3_long_active_pane_srt_t1

0x831b,	// (0x00012e4f) bg_active_tab_pane_g1_cp5_srt

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp5_srt

0x8324,	// (0x00012e58) bg_active_tab_pane_g3_cp5_srt

0xa93e,	// (0x00015472) navi_text_pane_srt_t1

0xa936,	// (0x0001546a) navi_icon_pane_srt_g1

0x8810,	// (0x00013344) midp_editing_number_pane_srt

0x8648,	// (0x0001317c) midp_ticker_pane_srt

0x8818,	// (0x0001334c) midp_ticker_pane_srt_g1

0x8820,	// (0x00013354) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001a2e1) midp_ticker_pane_srt_g

0x8828,	// (0x0001335c) midp_ticker_pane_srt_t1

0xa927,	// (0x0001545b) midp_editing_number_pane_t1_copy1

0x8650,	// (0x00013184) listscroll_midp_pane

0x8650,	// (0x00013184) midp_form_pane

0x86be,	// (0x000131f2) midp_info_popup_window_ParamLimits

0x86be,	// (0x000131f2) midp_info_popup_window

0x7a16,	// (0x0001254a) bg_popup_sub_pane_cp50_ParamLimits

0x7a16,	// (0x0001254a) bg_popup_sub_pane_cp50

0x9a1f,	// (0x00014553) listscroll_midp_info_pane_ParamLimits

0x9a1f,	// (0x00014553) listscroll_midp_info_pane

0x9a07,	// (0x0001453b) listscroll_form_midp_pane_ParamLimits

0x9a07,	// (0x0001453b) listscroll_form_midp_pane

0x9a13,	// (0x00014547) scroll_bar_cp050

0x99e7,	// (0x0001451b) list_midp_pane

0xb962,	// (0x00016496) signal_pane_g2_cp

0x9921,	// (0x00014455) listscroll_midp_info_pane_t1_ParamLimits

0x9921,	// (0x00014455) listscroll_midp_info_pane_t1

0x9939,	// (0x0001446d) listscroll_midp_info_pane_t2_ParamLimits

0x9939,	// (0x0001446d) listscroll_midp_info_pane_t2

0x9977,	// (0x000144ab) listscroll_midp_info_pane_t3_ParamLimits

0x9977,	// (0x000144ab) listscroll_midp_info_pane_t3

0x99b1,	// (0x000144e5) listscroll_midp_info_pane_t4_ParamLimits

0x99b1,	// (0x000144e5) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x0001a392) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x0001a392) listscroll_midp_info_pane_t

0x7ae0,	// (0x00012614) scroll_pane_cp21

0x98bb,	// (0x000143ef) form_midp_field_choice_group_pane

0x98c4,	// (0x000143f8) form_midp_field_text_pane

0x9907,	// (0x0001443b) form_midp_field_time_pane

0x990f,	// (0x00014443) form_midp_gauge_slider_pane

0x9918,	// (0x0001444c) form_midp_gauge_wait_pane

0x68e0,	// (0x00011414) form_midp_image_pane

0x989b,	// (0x000143cf) list_single_midp_pane_ParamLimits

0x989b,	// (0x000143cf) list_single_midp_pane

0x985f,	// (0x00014393) form_midp_field_text_pane_t1

0x9664,	// (0x00014198) input_focus_pane_cp050

0x988a,	// (0x000143be) list_midp_form_text_pane

0x982e,	// (0x00014362) form_midp_field_choice_group_pane_t1

0x983c,	// (0x00014370) input_focus_pane_cp051

0x9850,	// (0x00014384) list_midp_choice_pane

0x68e0,	// (0x00011414) status_idle_pane

0x9812,	// (0x00014346) form_midp_field_time_pane_t1

0x68d6,	// (0x0001140a) wait_anim_pane_g2_copy1

0x9820,	// (0x00014354) form_midp_field_time_pane_t2

0x0001,

0x876e,	// (0x000132a2) aid_navinavi_width_2_pane

0xf859,	// (0x0001a38d) form_midp_field_time_pane_t

0x68e0,	// (0x00011414) input_focus_pane_cp052

0x68e0,	// (0x00011414) bg_input_focus_pane_cp040

0x97d2,	// (0x00014306) form_midp_gauge_slider_pane_t1

0x97e0,	// (0x00014314) form_midp_gauge_slider_pane_t2

0x97ee,	// (0x00014322) form_midp_gauge_slider_pane_t3

0x97fc,	// (0x00014330) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x0001a384) form_midp_gauge_slider_pane_t

0x980a,	// (0x0001433e) form_midp_slider_pane

0x69c0,	// (0x000114f4) bg_input_focus_pane_cp041_ParamLimits

0x69c0,	// (0x000114f4) bg_input_focus_pane_cp041

0x979f,	// (0x000142d3) form_midp_gauge_wait_pane_t1_ParamLimits

0x979f,	// (0x000142d3) form_midp_gauge_wait_pane_t1

0x97b1,	// (0x000142e5) form_midp_gauge_wait_pane_t2_ParamLimits

0x97b1,	// (0x000142e5) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x0001a37f) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x0001a37f) form_midp_gauge_wait_pane_t

0x97c3,	// (0x000142f7) form_midp_wait_pane_ParamLimits

0x97c3,	// (0x000142f7) form_midp_wait_pane

0x9767,	// (0x0001429b) form_midp_image_pane_g1

0x9770,	// (0x000142a4) form_midp_image_pane_t1

0x977f,	// (0x000142b3) form_midp_image_pane_t2

0x978e,	// (0x000142c2) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x0001a378) form_midp_image_pane_t

0x974f,	// (0x00014283) list_single_midp_pane_g1

0x9758,	// (0x0001428c) list_single_midp_pane_t1

0x9735,	// (0x00014269) list_midp_form_item_pane_ParamLimits

0x9735,	// (0x00014269) list_midp_form_item_pane

0x8716,	// (0x0001324a) list_midp_form_item_pane_t1

0x8725,	// (0x00013259) midp_ticker_pane_g1

0x8731,	// (0x00013265) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001a2c7) midp_ticker_pane_g

0x873d,	// (0x00013271) midp_ticker_pane_t1

0xabdb,	// (0x0001570f) midp_editing_number_pane_t1

0xabb9,	// (0x000156ed) midp_editing_number_pane

0xabc8,	// (0x000156fc) midp_ticker_pane

0xa8ef,	// (0x00015423) ai_message_heading_pane

0x68e0,	// (0x00011414) bg_popup_window_pane_cp14

0xa8f7,	// (0x0001542b) listscroll_ai_message_pane

0xa875,	// (0x000153a9) ai_message_heading_pane_g1_ParamLimits

0xa875,	// (0x000153a9) ai_message_heading_pane_g1

0xa881,	// (0x000153b5) ai_message_heading_pane_g2_ParamLimits

0xa881,	// (0x000153b5) ai_message_heading_pane_g2

0xa88f,	// (0x000153c3) ai_message_heading_pane_g3_ParamLimits

0xa88f,	// (0x000153c3) ai_message_heading_pane_g3

0xa89b,	// (0x000153cf) ai_message_heading_pane_g4_ParamLimits

0xa89b,	// (0x000153cf) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x0001a4b9) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x0001a4b9) ai_message_heading_pane_g

0xa8a7,	// (0x000153db) ai_message_heading_pane_t1_ParamLimits

0xa8a7,	// (0x000153db) ai_message_heading_pane_t1

0xa8c1,	// (0x000153f5) ai_message_heading_pane_t2_ParamLimits

0xa8c1,	// (0x000153f5) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x0001a4c2) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x0001a4c2) ai_message_heading_pane_t

0xa8d5,	// (0x00015409) bg_popup_heading_pane_cp1_ParamLimits

0xa8d5,	// (0x00015409) bg_popup_heading_pane_cp1

0xa863,	// (0x00015397) list_ai_message_pane_ParamLimits

0xa863,	// (0x00015397) list_ai_message_pane

0x7ae0,	// (0x00012614) scroll_pane_cp10

0xa7ff,	// (0x00015333) list_ai_message_pane_g1

0xa807,	// (0x0001533b) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x0001a496) list_ai_message_pane_g

0xa80f,	// (0x00015343) list_ai_message_pane_t1_ParamLimits

0xa80f,	// (0x00015343) list_ai_message_pane_t1

0xa824,	// (0x00015358) list_ai_message_pane_t2_ParamLimits

0xa824,	// (0x00015358) list_ai_message_pane_t2

0xa839,	// (0x0001536d) list_ai_message_pane_t3_ParamLimits

0xa839,	// (0x0001536d) list_ai_message_pane_t3

0xa84e,	// (0x00015382) list_ai_message_pane_t4_ParamLimits

0xa84e,	// (0x00015382) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x0001a49b) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x0001a49b) list_ai_message_pane_t

0xa7e8,	// (0x0001531c) cell_ai_soft_ind_pane_ParamLimits

0xa7e8,	// (0x0001531c) cell_ai_soft_ind_pane

0x874f,	// (0x00013283) cell_ai_soft_ind_pane_g1_ParamLimits

0x874f,	// (0x00013283) cell_ai_soft_ind_pane_g1

0x68e0,	// (0x00011414) grid_highlight_cp1

0x875c,	// (0x00013290) text_secondary_cp56_ParamLimits

0x875c,	// (0x00013290) text_secondary_cp56

0xa7bd,	// (0x000152f1) example_general_pane_ParamLimits

0xa7bd,	// (0x000152f1) example_general_pane

0xa7c9,	// (0x000152fd) example_parent_pane_g1_ParamLimits

0xa7c9,	// (0x000152fd) example_parent_pane_g1

0xa7d5,	// (0x00015309) example_parent_pane_t1_ParamLimits

0xa7d5,	// (0x00015309) example_parent_pane_t1

0x8da1,	// (0x000138d5) popup_preview_text_window_ParamLimits

0x8da1,	// (0x000138d5) popup_preview_text_window

0x8577,	// (0x000130ab) list_single_pane_cp2_g4

0x6d0c,	// (0x00011840) bg_popup_preview_window_pane_ParamLimits

0x6d0c,	// (0x00011840) bg_popup_preview_window_pane

0xa4f0,	// (0x00015024) popup_preview_text_window_t1_ParamLimits

0xa4f0,	// (0x00015024) popup_preview_text_window_t1

0xa50e,	// (0x00015042) popup_preview_text_window_t2_ParamLimits

0xa50e,	// (0x00015042) popup_preview_text_window_t2

0xa557,	// (0x0001508b) popup_preview_text_window_t3_ParamLimits

0xa557,	// (0x0001508b) popup_preview_text_window_t3

0xa59c,	// (0x000150d0) popup_preview_text_window_t4_ParamLimits

0xa59c,	// (0x000150d0) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x0001a46a) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x0001a46a) popup_preview_text_window_t

0xa61a,	// (0x0001514e) scroll_pane_cp11

0x9548,	// (0x0001407c) bg_popup_preview_window_pane_g1

0xa4a4,	// (0x00014fd8) bg_popup_preview_window_pane_g2

0xa4ae,	// (0x00014fe2) bg_popup_preview_window_pane_g3

0xa4b8,	// (0x00014fec) bg_popup_preview_window_pane_g4

0xa4c2,	// (0x00014ff6) bg_popup_preview_window_pane_g5

0xa4cc,	// (0x00015000) bg_popup_preview_window_pane_g6

0xa4d4,	// (0x00015008) bg_popup_preview_window_pane_g7

0xa4dc,	// (0x00015010) bg_popup_preview_window_pane_g8

0x4c6a,	// (0x0000f79e) aid_popup_width_pane

0x8d7d,	// (0x000138b1) popup_midp_note_alarm_window_ParamLimits

0x8d7d,	// (0x000138b1) popup_midp_note_alarm_window

0x77cc,	// (0x00012300) data_form_pane_ParamLimits

0x77d8,	// (0x0001230c) form_field_data_pane_g1

0x77e2,	// (0x00012316) form_field_data_pane_t1_ParamLimits

0x77fc,	// (0x00012330) input_focus_pane_ParamLimits

0x780a,	// (0x0001233e) data_form_wide_pane_ParamLimits

0x7816,	// (0x0001234a) form_field_data_wide_pane_g1

0x7842,	// (0x00012376) form_field_data_wide_pane_t1_ParamLimits

0x6fd2,	// (0x00011b06) input_focus_pane_cp6_ParamLimits

0x7a8b,	// (0x000125bf) input_popup_find_pane_g1_ParamLimits

0x7a8b,	// (0x000125bf) input_popup_find_pane_g1

0x51ef,	// (0x0000fd23) aid_navi_side_left_pane

0x5204,	// (0x0000fd38) aid_navi_side_right_pane

0x9eb3,	// (0x000149e7) bg_popup_window_pane_cp30_ParamLimits

0x9eb3,	// (0x000149e7) bg_popup_window_pane_cp30

0x9f2d,	// (0x00014a61) popup_midp_note_alarm_window_g1_ParamLimits

0x9f2d,	// (0x00014a61) popup_midp_note_alarm_window_g1

0x9f5d,	// (0x00014a91) popup_midp_note_alarm_window_t1_ParamLimits

0x9f5d,	// (0x00014a91) popup_midp_note_alarm_window_t1

0x9ffe,	// (0x00014b32) popup_midp_note_alarm_window_t2_ParamLimits

0x9ffe,	// (0x00014b32) popup_midp_note_alarm_window_t2

0xa0ac,	// (0x00014be0) popup_midp_note_alarm_window_t3_ParamLimits

0xa0ac,	// (0x00014be0) popup_midp_note_alarm_window_t3

0xa0de,	// (0x00014c12) popup_midp_note_alarm_window_t4_ParamLimits

0xa0de,	// (0x00014c12) popup_midp_note_alarm_window_t4

0xa104,	// (0x00014c38) popup_midp_note_alarm_window_t5_ParamLimits

0xa104,	// (0x00014c38) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x0001a407) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x0001a407) popup_midp_note_alarm_window_t

0xa1b0,	// (0x00014ce4) wait_bar_pane_cp1_ParamLimits

0xa1b0,	// (0x00014ce4) wait_bar_pane_cp1

0x68e0,	// (0x00011414) wait_anim_pane_copy1

0x68e0,	// (0x00011414) wait_border_pane_copy1

0x9b98,	// (0x000146cc) wait_border_pane_g1_copy1

0x785c,	// (0x00012390) form_field_popup_pane_g1

0x7864,	// (0x00012398) form_field_popup_pane_t1_ParamLimits

0x77fc,	// (0x00012330) input_focus_pane_cp7_ParamLimits

0x787e,	// (0x000123b2) list_form_pane_ParamLimits

0x788a,	// (0x000123be) form_field_popup_wide_pane_g1

0x7892,	// (0x000123c6) form_field_popup_wide_pane_t1_ParamLimits

0x77fc,	// (0x00012330) input_focus_pane_cp8_ParamLimits

0x78a7,	// (0x000123db) list_form_wide_pane_ParamLimits

0xad98,	// (0x000158cc) aid_size_cell_graphic_pane

0x7980,	// (0x000124b4) data_form_pane_t1_ParamLimits

0xab84,	// (0x000156b8) data_form_wide_pane_t1_ParamLimits

0x90c8,	// (0x00013bfc) bg_status_flat_pane

0x6920,	// (0x00011454) title_pane_t1_ParamLimits

0x6988,	// (0x000114bc) title_pane_t2_ParamLimits

0x69ae,	// (0x000114e2) title_pane_t3_ParamLimits

0xf59b,	// (0x0001a0cf) title_pane_t_ParamLimits

0x7f63,	// (0x00012a97) level_1_signal_ParamLimits

0x7f70,	// (0x00012aa4) level_2_signal_ParamLimits

0x7f7d,	// (0x00012ab1) level_3_signal_ParamLimits

0x7f8a,	// (0x00012abe) level_4_signal_ParamLimits

0x7f97,	// (0x00012acb) level_5_signal_ParamLimits

0x7fa4,	// (0x00012ad8) level_6_signal_ParamLimits

0x7fb1,	// (0x00012ae5) level_7_signal_ParamLimits

0x7f63,	// (0x00012a97) level_1_battery_ParamLimits

0x7f70,	// (0x00012aa4) level_2_battery_ParamLimits

0x7f7d,	// (0x00012ab1) level_3_battery_ParamLimits

0x7f8a,	// (0x00012abe) level_4_battery_ParamLimits

0x7f97,	// (0x00012acb) level_5_battery_ParamLimits

0x7fa4,	// (0x00012ad8) level_6_battery_ParamLimits

0x7fb1,	// (0x00012ae5) level_7_battery_ParamLimits

0x9db8,	// (0x000148ec) bg_status_flat_pane_g1

0x9dc0,	// (0x000148f4) bg_status_flat_pane_g2

0x9dc8,	// (0x000148fc) bg_status_flat_pane_g3

0x9dd0,	// (0x00014904) bg_status_flat_pane_g4

0x9dd8,	// (0x0001490c) bg_status_flat_pane_g5

0x9de0,	// (0x00014914) bg_status_flat_pane_g6

0x9de8,	// (0x0001491c) bg_status_flat_pane_g7

0x69d6,	// (0x0001150a) tabs_3_active_pane_t1_ParamLimits

0x69d6,	// (0x0001150a) tabs_3_passive_pane_t1_ParamLimits

0x69f0,	// (0x00011524) tabs_4_active_pane_t1_ParamLimits

0x69f0,	// (0x00011524) tabs_4_1_passive_pane_t1_ParamLimits

0x7b22,	// (0x00012656) tabs_2_active_pane_t1_ParamLimits

0x7b22,	// (0x00012656) tabs_2_passive_pane_t1_ParamLimits

0x7b34,	// (0x00012668) bg_active_tab_pane_cp4_ParamLimits

0x7b42,	// (0x00012676) tabs_2_long_active_pane_t1_ParamLimits

0x7b55,	// (0x00012689) bg_passive_tab_pane_cp4_ParamLimits

0x57d4,	// (0x00010308) list_single_midp_graphic_pane_t1_ParamLimits

0x7b34,	// (0x00012668) bg_active_tab_pane_cp5_ParamLimits

0x7b61,	// (0x00012695) tabs_3_long_active_pane_t1_ParamLimits

0x7b55,	// (0x00012689) bg_passive_tab_pane_cp5_ParamLimits

0x57d4,	// (0x00010308) list_single_midp_graphic_pane_t1

0x90c8,	// (0x00013bfc) bg_status_flat_pane_ParamLimits

0x9193,	// (0x00013cc7) indicator_pane_cp2_ParamLimits

0x9193,	// (0x00013cc7) indicator_pane_cp2

0x92d5,	// (0x00013e09) navi_pane_srt_ParamLimits

0x92d5,	// (0x00013e09) navi_pane_srt

0x92f9,	// (0x00013e2d) popup_clock_digital_analogue_window_cp1

0x6aba,	// (0x000115ee) indicator_pane_t1

0x8648,	// (0x0001317c) copy_highlight_pane

0x8648,	// (0x0001317c) cursor_graphics_pane

0x8648,	// (0x0001317c) graphic_within_text_pane

0x8648,	// (0x0001317c) link_highlight_pane

0xa5dd,	// (0x00015111) popup_preview_text_window_t5_ParamLimits

0xa5dd,	// (0x00015111) popup_preview_text_window_t5

0x8778,	// (0x000132ac) cursor_digital_pane

0x8778,	// (0x000132ac) cursor_primary_pane

0x8789,	// (0x000132bd) cursor_primary_small_pane

0x8791,	// (0x000132c5) cursor_secondary_pane

0x8799,	// (0x000132cd) cursor_title_pane

0x8778,	// (0x000132ac) link_highlight_digital_pane

0x8780,	// (0x000132b4) link_highlight_primary_pane

0x8789,	// (0x000132bd) link_highlight_primary_small_pane

0x8791,	// (0x000132c5) link_highlight_secondary_pane

0x8799,	// (0x000132cd) link_highlight_title_pane

0x8778,	// (0x000132ac) copy_highlight_digital_pane

0x8778,	// (0x000132ac) copy_highlight_primary_pane

0x8789,	// (0x000132bd) copy_highlight_primary_small_pane

0x8791,	// (0x000132c5) copy_highlight_secondary_pane

0x8799,	// (0x000132cd) copy_highlight_title_pane

0x8791,	// (0x000132c5) graphic_text_digital_pane

0x9e56,	// (0x0001498a) graphic_text_primary_pane

0x9e5f,	// (0x00014993) graphic_text_primary_small_pane

0x8789,	// (0x000132bd) graphic_text_secondary_pane

0x8778,	// (0x000132ac) graphic_text_title_pane

0x87a1,	// (0x000132d5) cursor_primary_pane_g1

0x9e48,	// (0x0001497c) cursor_text_primary_t1

0x9e30,	// (0x00014964) cursor_primary_small_pane_g1

0x9e3a,	// (0x0001496e) cursor_text_primary_small_t1

0x9e18,	// (0x0001494c) cursor_primary_small_pane_g1_copy1

0x9e22,	// (0x00014956) cursor_text_primary_small_t1_copy1

0x9e00,	// (0x00014934) cursor_text_title_t1

0x9e0e,	// (0x00014942) cursor_title_pane_g1

0x87a1,	// (0x000132d5) cursor_digital_pane_g1

0x87ab,	// (0x000132df) cursor_text_digital_t1

0x87b9,	// (0x000132ed) link_highlight_primary_pane_g1

0x9da9,	// (0x000148dd) link_highlight_primary_pane_t1

0x87b9,	// (0x000132ed) link_highlight_primary_small_pane_g1

0x87c1,	// (0x000132f5) link_highlight_primary_small_pane_t1

0x87d0,	// (0x00013304) link_highlight_secondary_pane_g1

0x87d8,	// (0x0001330c) link_highlight_secondary_pane_t1

0x9d1d,	// (0x00014851) link_highlight_title_pane_g1

0x9d25,	// (0x00014859) link_highlight_title_pane_t1

0x9d06,	// (0x0001483a) link_highlight_digital_pane_g1

0x9d0e,	// (0x00014842) link_highlight_digital_pane_t1

0x9bce,	// (0x00014702) copy_highlight_primary_pane_g1

0x9be5,	// (0x00014719) copy_highlight_primary_pane_t1

0x9bce,	// (0x00014702) copy_highlight_primary_small_pane_g1

0x9bd6,	// (0x0001470a) copy_highlight_primary_small_pane_t1

0x87e7,	// (0x0001331b) copy_highlight_secondary_pane_g1

0x87ef,	// (0x00013323) copy_highlight_secondary_pane_t1

0x9bb7,	// (0x000146eb) copy_highlight_title_pane_g1

0x9bbf,	// (0x000146f3) copy_highlight_title_pane_t1

0x9bce,	// (0x00014702) copy_highlight_digital_pane_g1

0xaf68,	// (0x00015a9c) copy_highlight_digital_pane_t1

0xaebc,	// (0x000159f0) graphic_text_primary_pane_g1

0xaf4c,	// (0x00015a80) graphic_text_primary_pane_t1

0xaf5a,	// (0x00015a8e) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x0001a536) graphic_text_primary_pane_t

0xaf28,	// (0x00015a5c) graphic_text_primary_small_pane_g1

0xaf30,	// (0x00015a64) graphic_text_primary_small_pane_t1

0xaf3e,	// (0x00015a72) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x0001a531) graphic_text_primary_small_pane_t

0xaf04,	// (0x00015a38) graphic_text_secondary_pane_g1

0xaf0c,	// (0x00015a40) graphic_text_secondary_pane_t1

0xaf1a,	// (0x00015a4e) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x0001a52c) graphic_text_secondary_pane_t

0xaee0,	// (0x00015a14) graphic_text_title_pane_g1

0xaee8,	// (0x00015a1c) graphic_text_title_pane_t1

0xaef6,	// (0x00015a2a) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x0001a527) graphic_text_title_pane_t

0xaebc,	// (0x000159f0) graphic_text_digital_pane_g1

0xaec4,	// (0x000159f8) graphic_text_digital_pane_t1

0xaed2,	// (0x00015a06) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0001a522) graphic_text_digital_pane_t

0x69c0,	// (0x000114f4) navi_icon_pane_srt_ParamLimits

0x69c0,	// (0x000114f4) navi_icon_pane_srt

0x68e0,	// (0x00011414) navi_midp_pane_srt

0x68e0,	// (0x00011414) navi_navi_pane_srt

0x69c0,	// (0x000114f4) navi_text_pane_srt_ParamLimits

0x69c0,	// (0x000114f4) navi_text_pane_srt

0xae87,	// (0x000159bb) navi_navi_icon_text_pane_srt

0xae8f,	// (0x000159c3) navi_navi_pane_srt_g1_ParamLimits

0xae8f,	// (0x000159c3) navi_navi_pane_srt_g1

0xaea1,	// (0x000159d5) navi_navi_pane_srt_g2_ParamLimits

0xaea1,	// (0x000159d5) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x0001a51d) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x0001a51d) navi_navi_pane_srt_g

0xaeb3,	// (0x000159e7) navi_navi_tabs_pane_srt

0xae87,	// (0x000159bb) navi_navi_text_pane_srt

0xae87,	// (0x000159bb) navi_navi_volume_pane_srt

0xae78,	// (0x000159ac) navi_navi_text_pane_srt_t1

0x5b70,	// (0x000106a4) navi_navi_volume_pane_srt_g1

0x5b78,	// (0x000106ac) volume_small_pane_srt_ParamLimits

0x5b78,	// (0x000106ac) volume_small_pane_srt

0x54d6,	// (0x0001000a) volume_small_pane_srt_g1_ParamLimits

0x54d6,	// (0x0001000a) volume_small_pane_srt_g1

0x54e6,	// (0x0001001a) volume_small_pane_srt_g2_ParamLimits

0x54e6,	// (0x0001001a) volume_small_pane_srt_g2

0x54f7,	// (0x0001002b) volume_small_pane_srt_g3_ParamLimits

0x54f7,	// (0x0001002b) volume_small_pane_srt_g3

0x5508,	// (0x0001003c) volume_small_pane_srt_g4_ParamLimits

0x5508,	// (0x0001003c) volume_small_pane_srt_g4

0x5519,	// (0x0001004d) volume_small_pane_srt_g5_ParamLimits

0x5519,	// (0x0001004d) volume_small_pane_srt_g5

0x552a,	// (0x0001005e) volume_small_pane_srt_g6_ParamLimits

0x552a,	// (0x0001005e) volume_small_pane_srt_g6

0x553b,	// (0x0001006f) volume_small_pane_srt_g7_ParamLimits

0x553b,	// (0x0001006f) volume_small_pane_srt_g7

0x554c,	// (0x00010080) volume_small_pane_srt_g8_ParamLimits

0x554c,	// (0x00010080) volume_small_pane_srt_g8

0x555d,	// (0x00010091) volume_small_pane_srt_g9_ParamLimits

0x555d,	// (0x00010091) volume_small_pane_srt_g9

0x556e,	// (0x000100a2) volume_small_pane_srt_g10_ParamLimits

0x556e,	// (0x000100a2) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001a2cc) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001a2cc) volume_small_pane_srt_g

0x6dc1,	// (0x000118f5) query_popup_data_pane_cp2

0xae5e,	// (0x00015992) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xae5e,	// (0x00015992) navi_navi_icon_text_pane_srt_t1

0x9e56,	// (0x0001498a) navi_tabs_2_long_pane_srt

0x9e56,	// (0x0001498a) navi_tabs_2_pane_srt

0x9e56,	// (0x0001498a) navi_tabs_3_long_pane_srt

0x9e56,	// (0x0001498a) navi_tabs_3_pane_srt

0x9e56,	// (0x0001498a) navi_tabs_4_pane_srt

0x5b50,	// (0x00010684) tabs_2_active_pane_srt_ParamLimits

0x5b50,	// (0x00010684) tabs_2_active_pane_srt

0x5b60,	// (0x00010694) tabs_2_passive_pane_srt_ParamLimits

0x5b60,	// (0x00010694) tabs_2_passive_pane_srt

0x89d6,	// (0x0001350a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x89d6,	// (0x0001350a) bg_passive_tab_pane_cp1_srt

0xae2a,	// (0x0001595e) bg_passive_tab_pane_g1_cp1_srt

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp1_srt

0xae33,	// (0x00015967) bg_passive_tab_pane_g3_cp1_srt

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp1_srt_ParamLimits

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp1_srt

0xae3c,	// (0x00015970) tabs_2_active_pane_srt_g1

0xae44,	// (0x00015978) tabs_2_active_pane_srt_t1_ParamLimits

0xae44,	// (0x00015978) tabs_2_active_pane_srt_t1

0xae2a,	// (0x0001595e) bg_active_tab_pane_g1_cp1_srt

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp1_srt

0xae33,	// (0x00015967) bg_active_tab_pane_g3_cp1_srt

0x5b1d,	// (0x00010651) tabs_3_active_pane_srt_ParamLimits

0x5b1d,	// (0x00010651) tabs_3_active_pane_srt

0x5b2e,	// (0x00010662) tabs_3_passive_pane_cp_srt_ParamLimits

0x5b2e,	// (0x00010662) tabs_3_passive_pane_cp_srt

0x5b3f,	// (0x00010673) tabs_3_passive_pane_srt_ParamLimits

0x5b3f,	// (0x00010673) tabs_3_passive_pane_srt

0x89d6,	// (0x0001350a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x89d6,	// (0x0001350a) bg_passive_tab_pane_cp2_srt

0x87fe,	// (0x00013332) bg_passive_tab_pane_g1_cp2_srt

0x8291,	// (0x00012dc5) bg_passive_tab_pane_g2_cp2_srt

0x8807,	// (0x0001333b) bg_passive_tab_pane_g3_cp2_srt

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp2_srt_ParamLimits

0x69c0,	// (0x000114f4) bg_active_tab_pane_cp2_srt

0xae10,	// (0x00015944) tabs_3_active_pane_srt_g1

0xae18,	// (0x0001594c) tabs_3_active_pane_srt_t1_ParamLimits

0xae18,	// (0x0001594c) tabs_3_active_pane_srt_t1

0x87fe,	// (0x00013332) bg_active_tab_pane_g1_cp2_srt

0x8291,	// (0x00012dc5) bg_active_tab_pane_g2_cp2_srt

0x8807,	// (0x0001333b) bg_active_tab_pane_g3_cp2_srt

0x5ad5,	// (0x00010609) tabs_4_active_pane_srt_ParamLimits

0x5ad5,	// (0x00010609) tabs_4_active_pane_srt

0x5ae7,	// (0x0001061b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5ae7,	// (0x0001061b) tabs_4_passive_pane_cp2_srt

0x895c,	// (0x00013490) aid_size_cell_toolbar

0x7b55,	// (0x00012689) main_idle_act_pane_ParamLimits

0x8ba3,	// (0x000136d7) popup_large_graphic_colour_window_ParamLimits

0x8f4a,	// (0x00013a7e) popup_toolbar_window_ParamLimits

0x8f4a,	// (0x00013a7e) popup_toolbar_window

0xabfe,	// (0x00015732) list_single_graphic_2heading_pane_ParamLimits

0xabfe,	// (0x00015732) list_single_graphic_2heading_pane

0x7d11,	// (0x00012845) aid_size_cell_apps_grid_lsc_pane

0x7d23,	// (0x00012857) aid_size_cell_apps_grid_prt_pane

0x89d6,	// (0x0001350a) bg_wml_button_pane_cp1_ParamLimits

0x89d6,	// (0x0001350a) bg_wml_button_pane_cp1

0x985f,	// (0x00014393) form_midp_field_text_pane_t1_ParamLimits

0x9664,	// (0x00014198) input_focus_pane_cp050_ParamLimits

0x988a,	// (0x000143be) list_midp_form_text_pane_ParamLimits

0x983c,	// (0x00014370) input_focus_pane_cp051_ParamLimits

0x9850,	// (0x00014384) list_midp_choice_pane_ParamLimits

0x96f5,	// (0x00014229) list_single_2graphic_pane_cp3_ParamLimits

0x96f5,	// (0x00014229) list_single_2graphic_pane_cp3

0x970e,	// (0x00014242) list_single_midp_graphic_pane_ParamLimits

0x970e,	// (0x00014242) list_single_midp_graphic_pane

0x56d8,	// (0x0001020c) list_single_graphic_2heading_pane_g1_ParamLimits

0x56d8,	// (0x0001020c) list_single_graphic_2heading_pane_g1

0x56e4,	// (0x00010218) list_single_graphic_2heading_pane_g4_ParamLimits

0x56e4,	// (0x00010218) list_single_graphic_2heading_pane_g4

0x56f0,	// (0x00010224) list_single_graphic_2heading_pane_g5_ParamLimits

0x56f0,	// (0x00010224) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001a31f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001a31f) list_single_graphic_2heading_pane_g

0x56fc,	// (0x00010230) list_single_graphic_2heading_pane_t1_ParamLimits

0x56fc,	// (0x00010230) list_single_graphic_2heading_pane_t1

0x5710,	// (0x00010244) list_single_graphic_2heading_pane_t2_ParamLimits

0x5710,	// (0x00010244) list_single_graphic_2heading_pane_t2

0x572c,	// (0x00010260) list_single_graphic_2heading_pane_t3_ParamLimits

0x572c,	// (0x00010260) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001a326) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001a326) list_single_graphic_2heading_pane_t

0x9458,	// (0x00013f8c) bg_popup_sub_pane_cp2

0x9482,	// (0x00013fb6) grid_toobar_pane

0x5744,	// (0x00010278) cell_toolbar_pane_ParamLimits

0x5744,	// (0x00010278) cell_toolbar_pane

0x94ec,	// (0x00014020) cell_toolbar_pane_g1_ParamLimits

0x94ec,	// (0x00014020) cell_toolbar_pane_g1

0x9500,	// (0x00014034) cell_toolbar_pane_g2_ParamLimits

0x9500,	// (0x00014034) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001a334) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001a334) cell_toolbar_pane_g

0x9522,	// (0x00014056) grid_highlight_pane_cp2_ParamLimits

0x9522,	// (0x00014056) grid_highlight_pane_cp2

0x953c,	// (0x00014070) toolbar_button_pane

0x9548,	// (0x0001407c) toolbar_button_pane_g1

0x9550,	// (0x00014084) toolbar_button_pane_g2

0x9558,	// (0x0001408c) toolbar_button_pane_g3

0x9560,	// (0x00014094) toolbar_button_pane_g4

0x9568,	// (0x0001409c) toolbar_button_pane_g5

0x9570,	// (0x000140a4) toolbar_button_pane_g6

0x9578,	// (0x000140ac) toolbar_button_pane_g7

0x9580,	// (0x000140b4) toolbar_button_pane_g8

0x9588,	// (0x000140bc) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0001a339) toolbar_button_pane_g

0x577c,	// (0x000102b0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x577c,	// (0x000102b0) list_single_2graphic_pane_g1_cp3

0x5788,	// (0x000102bc) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5788,	// (0x000102bc) list_single_2graphic_pane_g2_cp3

0x5799,	// (0x000102cd) list_single_2graphic_pane_g3_cp3

0x57a1,	// (0x000102d5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x57a1,	// (0x000102d5) list_single_2graphic_pane_g4_cp3

0x57ad,	// (0x000102e1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x57ad,	// (0x000102e1) list_single_2graphic_pane_t1_cp3

0x57c8,	// (0x000102fc) list_single_midp_graphic_pane_g2_ParamLimits

0x57c8,	// (0x000102fc) list_single_midp_graphic_pane_g2

0x8964,	// (0x00013498) aid_zoom_text_primary

0x896c,	// (0x000134a0) aid_zoom_text_secondary

0x88bb,	// (0x000133ef) status_small_pane_g7_ParamLimits

0x88bb,	// (0x000133ef) status_small_pane_g7

0x88de,	// (0x00013412) status_small_pane_t1_ParamLimits

0x68f7,	// (0x0001142b) title_pane_g2

0x0003,

0xf592,	// (0x0001a0c6) title_pane_g

0x6e6a,	// (0x0001199e) aid_size_cell_colour_1_pane_ParamLimits

0x6e6a,	// (0x0001199e) aid_size_cell_colour_1_pane

0x6e7e,	// (0x000119b2) aid_size_cell_colour_2_pane_ParamLimits

0x6e7e,	// (0x000119b2) aid_size_cell_colour_2_pane

0x6e92,	// (0x000119c6) aid_size_cell_colour_3_pane_ParamLimits

0x6e92,	// (0x000119c6) aid_size_cell_colour_3_pane

0x6ea6,	// (0x000119da) aid_size_cell_colour_4_pane_ParamLimits

0x6ea6,	// (0x000119da) aid_size_cell_colour_4_pane

0x512b,	// (0x0000fc5f) title_pane_stacon_g1_ParamLimits

0x512b,	// (0x0000fc5f) title_pane_stacon_g1

0x9c3c,	// (0x00014770) popup_note_wait_window_g3_ParamLimits

0x9c3c,	// (0x00014770) popup_note_wait_window_g3

0x9cb3,	// (0x000147e7) popup_note_wait_window_t5_ParamLimits

0x9cb3,	// (0x000147e7) popup_note_wait_window_t5

0x68e0,	// (0x00011414) main_feb_china_hwr_fs_writing_pane

0x8a6a,	// (0x0001359e) popup_feb_china_hwr_fs_window_ParamLimits

0x8a6a,	// (0x0001359e) popup_feb_china_hwr_fs_window

0x57ea,	// (0x0001031e) aid_size_cell_hwr_fs_ParamLimits

0x57ea,	// (0x0001031e) aid_size_cell_hwr_fs

0x9664,	// (0x00014198) bg_popup_sub_pane_cp3_ParamLimits

0x9664,	// (0x00014198) bg_popup_sub_pane_cp3

0x57ff,	// (0x00010333) grid_hwr_fs_pane_ParamLimits

0x57ff,	// (0x00010333) grid_hwr_fs_pane

0x5817,	// (0x0001034b) linegrid_hwr_fs_pane_ParamLimits

0x5817,	// (0x0001034b) linegrid_hwr_fs_pane

0x5827,	// (0x0001035b) cell_hwr_fs_pane_ParamLimits

0x5827,	// (0x0001035b) cell_hwr_fs_pane

0x9670,	// (0x000141a4) linegrid_hwr_fs_pane_g1_ParamLimits

0x9670,	// (0x000141a4) linegrid_hwr_fs_pane_g1

0x967c,	// (0x000141b0) linegrid_hwr_fs_pane_g2_ParamLimits

0x967c,	// (0x000141b0) linegrid_hwr_fs_pane_g2

0x968e,	// (0x000141c2) linegrid_hwr_fs_pane_g3_ParamLimits

0x968e,	// (0x000141c2) linegrid_hwr_fs_pane_g3

0x584b,	// (0x0001037f) linegrid_hwr_fs_pane_g4_ParamLimits

0x584b,	// (0x0001037f) linegrid_hwr_fs_pane_g4

0x5869,	// (0x0001039d) linegrid_hwr_fs_pane_g5_ParamLimits

0x5869,	// (0x0001039d) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x0001a364) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x0001a364) linegrid_hwr_fs_pane_g

0x969a,	// (0x000141ce) cell_hwr_fs_pane_g1_ParamLimits

0x969a,	// (0x000141ce) cell_hwr_fs_pane_g1

0x938f,	// (0x00013ec3) cell_hwr_fs_pane_g2_ParamLimits

0x938f,	// (0x00013ec3) cell_hwr_fs_pane_g2

0x96b0,	// (0x000141e4) cell_hwr_fs_pane_g3_ParamLimits

0x96b0,	// (0x000141e4) cell_hwr_fs_pane_g3

0x96bd,	// (0x000141f1) cell_hwr_fs_pane_g4_ParamLimits

0x96bd,	// (0x000141f1) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x0001a36f) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x0001a36f) cell_hwr_fs_pane_g

0x587f,	// (0x000103b3) cell_hwr_fs_pane_t1

0x68e0,	// (0x00011414) grid_highlight_pane_cp6

0x68e0,	// (0x00011414) main_idle_act2_pane

0x7ac7,	// (0x000125fb) aid_inside_area_popup_secondary

0xa2ec,	// (0x00014e20) aid_inside_area_window_primary_ParamLimits

0xa2ec,	// (0x00014e20) aid_inside_area_window_primary

0xaf77,	// (0x00015aab) ai2_news_ticker_pane

0xaf7f,	// (0x00015ab3) aid_size_cell_ai1_link_ParamLimits

0xaf7f,	// (0x00015ab3) aid_size_cell_ai1_link

0xaf99,	// (0x00015acd) popup_ai2_data_window_ParamLimits

0xaf99,	// (0x00015acd) popup_ai2_data_window

0xafb7,	// (0x00015aeb) popup_ai2_link_window_ParamLimits

0xafb7,	// (0x00015aeb) popup_ai2_link_window

0x9664,	// (0x00014198) bg_popup_sub_pane_cp4_ParamLimits

0x9664,	// (0x00014198) bg_popup_sub_pane_cp4

0xafcd,	// (0x00015b01) grid_ai2_link_pane_ParamLimits

0xafcd,	// (0x00015b01) grid_ai2_link_pane

0xafe4,	// (0x00015b18) popup_ai2_link_window_g1_ParamLimits

0xafe4,	// (0x00015b18) popup_ai2_link_window_g1

0xaff0,	// (0x00015b24) popup_ai2_link_window_g2_ParamLimits

0xaff0,	// (0x00015b24) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x0001a53b) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x0001a53b) popup_ai2_link_window_g

0xb001,	// (0x00015b35) ai2_mp_button_pane

0xb009,	// (0x00015b3d) ai2_mp_volume_pane

0x983c,	// (0x00014370) bg_popup_sub_pane_cp5_ParamLimits

0x983c,	// (0x00014370) bg_popup_sub_pane_cp5

0xb011,	// (0x00015b45) heading_ai2_gene_pane_ParamLimits

0xb011,	// (0x00015b45) heading_ai2_gene_pane

0xb01d,	// (0x00015b51) list_ai2_gene_pane_ParamLimits

0xb01d,	// (0x00015b51) list_ai2_gene_pane

0xb065,	// (0x00015b99) cell_ai2_link_pane_ParamLimits

0xb065,	// (0x00015b99) cell_ai2_link_pane

0xb07b,	// (0x00015baf) cell_ai2_link_pane_g1

0x68e0,	// (0x00011414) grid_highlight_pane_cp7

0x5b8d,	// (0x000106c1) ai2_mp_volume_pane_g1

0xb14e,	// (0x00015c82) ai2_mp_volume_pane_g2

0xb0c3,	// (0x00015bf7) list_ai2_gene_pane_t1

0xb156,	// (0x00015c8a) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0001a554) ai2_mp_volume_pane_g

0x5b95,	// (0x000106c9) volume_small_pane_cp3

0xb15e,	// (0x00015c92) aid_size_cell_ai2_button

0xb166,	// (0x00015c9a) grid_ai2_button_pane

0xb16f,	// (0x00015ca3) cell_ai2_button_pane_ParamLimits

0xb16f,	// (0x00015ca3) cell_ai2_button_pane

0x68d6,	// (0x0001140a) cell_ai2_button_pane_g1

0x68e0,	// (0x00011414) grid_highlight_pane_cp8

0xb10e,	// (0x00015c42) ai2_gene_pane_t1_ParamLimits

0xb10e,	// (0x00015c42) ai2_gene_pane_t1

0x8952,	// (0x00013486) aid_height_parent_landscape

0xa9c0,	// (0x000154f4) aid_height_set_list

0xa9d1,	// (0x00015505) aid_size_parent

0xad98,	// (0x000158cc) aid_size_cell_graphic_pane_ParamLimits

0xb02d,	// (0x00015b61) popup_ai2_data_window_g1_ParamLimits

0xb02d,	// (0x00015b61) popup_ai2_data_window_g1

0xb039,	// (0x00015b6d) ai2_news_ticker_pane_g1

0xb041,	// (0x00015b75) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x0001a540) ai2_news_ticker_pane_g

0xb049,	// (0x00015b7d) ai2_news_ticker_pane_t1

0xb057,	// (0x00015b8b) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0001a545) ai2_news_ticker_pane_t

0xb084,	// (0x00015bb8) heading_ai2_gene_pane_g1

0xb08c,	// (0x00015bc0) heading_ai2_gene_pane_t1_ParamLimits

0xb08c,	// (0x00015bc0) heading_ai2_gene_pane_t1

0xb0a1,	// (0x00015bd5) list_highlight_pane_cp6

0xb0a9,	// (0x00015bdd) ai2_gene_pane_ParamLimits

0xb0a9,	// (0x00015bdd) ai2_gene_pane

0xb0d1,	// (0x00015c05) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x0001a54a) list_ai2_gene_pane_t

0xb0df,	// (0x00015c13) list_highlight_pane_cp8_ParamLimits

0xb0df,	// (0x00015c13) list_highlight_pane_cp8

0xb0f0,	// (0x00015c24) ai2_gene_pane_g1_ParamLimits

0xb0f0,	// (0x00015c24) ai2_gene_pane_g1

0xb102,	// (0x00015c36) ai2_gene_pane_g2_ParamLimits

0xb102,	// (0x00015c36) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x0001a54f) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x0001a54f) ai2_gene_pane_g

0x71f7,	// (0x00011d2b) scroll_pane_cp12

0x5697,	// (0x000101cb) control_pane_t3_ParamLimits

0x5697,	// (0x000101cb) control_pane_t3

0x88cf,	// (0x00013403) status_small_pane_g8_ParamLimits

0x88cf,	// (0x00013403) status_small_pane_g8

0x8b68,	// (0x0001369c) popup_find_window_ParamLimits

0x8d93,	// (0x000138c7) popup_note_image_window_ParamLimits

0x94be,	// (0x00013ff2) list_double2_graphic_pane_vc_g1_ParamLimits

0x94be,	// (0x00013ff2) list_double2_graphic_pane_vc_g1

0x85b9,	// (0x000130ed) list_double2_graphic_pane_vc_g2_ParamLimits

0x85b9,	// (0x000130ed) list_double2_graphic_pane_vc_g2

0x94ca,	// (0x00013ffe) list_double2_graphic_pane_vc_g3_ParamLimits

0x94ca,	// (0x00013ffe) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001a32d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a32d) list_double2_graphic_pane_vc_g

0x94d6,	// (0x0001400a) list_double2_graphic_pane_vc_t1_ParamLimits

0x94d6,	// (0x0001400a) list_double2_graphic_pane_vc_t1

0x85b9,	// (0x000130ed) list_single_heading_pane_vc_g1_ParamLimits

0x85b9,	// (0x000130ed) list_single_heading_pane_vc_g1

0x94ca,	// (0x00013ffe) list_single_heading_pane_vc_g2_ParamLimits

0x94ca,	// (0x00013ffe) list_single_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a34e) list_single_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a34e) list_single_heading_pane_vc_g

0x9590,	// (0x000140c4) list_single_heading_pane_vc_t1_ParamLimits

0x9590,	// (0x000140c4) list_single_heading_pane_vc_t1

0x95a6,	// (0x000140da) list_single_heading_pane_vc_t2_ParamLimits

0x95a6,	// (0x000140da) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x0001a353) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x0001a353) list_single_heading_pane_vc_t

0x95ba,	// (0x000140ee) list_setting_number_pane_vc_g1_ParamLimits

0x95ba,	// (0x000140ee) list_setting_number_pane_vc_g1

0x95c6,	// (0x000140fa) list_setting_number_pane_vc_g2_ParamLimits

0x95c6,	// (0x000140fa) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x0001a358) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x0001a358) list_setting_number_pane_vc_g

0x95d2,	// (0x00014106) list_setting_number_pane_vc_t1_ParamLimits

0x95d2,	// (0x00014106) list_setting_number_pane_vc_t1

0x95e6,	// (0x0001411a) list_setting_number_pane_vc_t2_ParamLimits

0x95e6,	// (0x0001411a) list_setting_number_pane_vc_t2

0x9602,	// (0x00014136) list_setting_number_pane_vc_t3_ParamLimits

0x9602,	// (0x00014136) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x0001a35d) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x0001a35d) list_setting_number_pane_vc_t

0x962a,	// (0x0001415e) set_value_pane_vc_ParamLimits

0x962a,	// (0x0001415e) set_value_pane_vc

0xabfe,	// (0x00015732) list_double2_graphic_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double2_graphic_pane_vc

0xabfe,	// (0x00015732) list_double2_large_graphic_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double2_large_graphic_pane_vc

0xabfe,	// (0x00015732) list_double2_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double2_pane_vc

0xabfe,	// (0x00015732) list_double_graphic_heading_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double_graphic_heading_pane_vc

0xabfe,	// (0x00015732) list_double_graphic_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double_graphic_pane_vc

0xabfe,	// (0x00015732) list_double_heading_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double_heading_pane_vc

0xabfe,	// (0x00015732) list_double_large_graphic_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double_large_graphic_pane_vc

0xabfe,	// (0x00015732) list_double_number_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double_number_pane_vc

0xabfe,	// (0x00015732) list_double_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double_pane_vc

0xabfe,	// (0x00015732) list_double_time_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_double_time_pane_vc

0xabfe,	// (0x00015732) list_setting_number_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_setting_number_pane_vc

0xabfe,	// (0x00015732) list_setting_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_setting_pane_vc

0xabfe,	// (0x00015732) list_single_graphic_heading_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_single_graphic_heading_pane_vc

0xabfe,	// (0x00015732) list_single_heading_pane_vc_ParamLimits

0xabfe,	// (0x00015732) list_single_heading_pane_vc

0xac12,	// (0x00015746) list_single_number_heading_pane_vc_ParamLimits

0xac12,	// (0x00015746) list_single_number_heading_pane_vc

0x94be,	// (0x00013ff2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x94be,	// (0x00013ff2) list_double_graphic_heading_pane_vc_g1

0xb1a2,	// (0x00015cd6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb1a2,	// (0x00015cd6) list_double_graphic_heading_pane_vc_g2

0xb1ae,	// (0x00015ce2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb1ae,	// (0x00015ce2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa27,	// (0x0001a55b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa27,	// (0x0001a55b) list_double_graphic_heading_pane_vc_g

0xb1ba,	// (0x00015cee) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb1ba,	// (0x00015cee) list_double_graphic_heading_pane_vc_t1

0x9590,	// (0x000140c4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9590,	// (0x000140c4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x0001a562) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001a562) list_double_graphic_heading_pane_vc_t

0x95ba,	// (0x000140ee) list_setting_pane_vc_g1_ParamLimits

0x95ba,	// (0x000140ee) list_setting_pane_vc_g1

0x95c6,	// (0x000140fa) list_setting_pane_vc_g2_ParamLimits

0x95c6,	// (0x000140fa) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x0001a358) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x0001a358) list_setting_pane_vc_g

0xb3d7,	// (0x00015f0b) list_setting_pane_vc_t1_ParamLimits

0xb3d7,	// (0x00015f0b) list_setting_pane_vc_t1

0xb3eb,	// (0x00015f1f) list_setting_pane_vc_t2_ParamLimits

0xb3eb,	// (0x00015f1f) list_setting_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001a590) list_setting_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001a590) list_setting_pane_vc_t

0x962a,	// (0x0001415e) set_value_pane_cp_vc_ParamLimits

0x962a,	// (0x0001415e) set_value_pane_cp_vc

0x85b9,	// (0x000130ed) list_single_number_heading_pane_vc_g1_ParamLimits

0x85b9,	// (0x000130ed) list_single_number_heading_pane_vc_g1

0x94ca,	// (0x00013ffe) list_single_number_heading_pane_vc_g2_ParamLimits

0x94ca,	// (0x00013ffe) list_single_number_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a34e) list_single_number_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a34e) list_single_number_heading_pane_vc_g

0x9590,	// (0x000140c4) list_single_number_heading_pane_vc_t1_ParamLimits

0x9590,	// (0x000140c4) list_single_number_heading_pane_vc_t1

0xb40d,	// (0x00015f41) list_single_number_heading_pane_vc_t2_ParamLimits

0xb40d,	// (0x00015f41) list_single_number_heading_pane_vc_t2

0xb421,	// (0x00015f55) list_single_number_heading_pane_vc_t3_ParamLimits

0xb421,	// (0x00015f55) list_single_number_heading_pane_vc_t3

0x0002,

0xfa61,	// (0x0001a595) list_single_number_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0001a595) list_single_number_heading_pane_vc_t

0x94be,	// (0x00013ff2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x94be,	// (0x00013ff2) list_single_graphic_heading_pane_vc_g1

0x85b9,	// (0x000130ed) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x85b9,	// (0x000130ed) list_single_graphic_heading_pane_vc_g4

0x94ca,	// (0x00013ffe) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x94ca,	// (0x00013ffe) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001a32d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a32d) list_single_graphic_heading_pane_vc_g

0x9590,	// (0x000140c4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9590,	// (0x000140c4) list_single_graphic_heading_pane_vc_t1

0xb433,	// (0x00015f67) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb433,	// (0x00015f67) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a59c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a59c) list_single_graphic_heading_pane_vc_t

0x85b9,	// (0x000130ed) list_double2_pane_vc_g1_ParamLimits

0x85b9,	// (0x000130ed) list_double2_pane_vc_g1

0x94ca,	// (0x00013ffe) list_double2_pane_vc_g2_ParamLimits

0x94ca,	// (0x00013ffe) list_double2_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a34e) list_double2_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a34e) list_double2_pane_vc_g

0xb447,	// (0x00015f7b) list_double2_pane_vc_t1_ParamLimits

0xb447,	// (0x00015f7b) list_double2_pane_vc_t1

0xb45d,	// (0x00015f91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb45d,	// (0x00015f91) list_double2_large_graphic_pane_vc_g1

0x85b9,	// (0x000130ed) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x85b9,	// (0x000130ed) list_double2_large_graphic_pane_vc_g2

0x94ca,	// (0x00013ffe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x94ca,	// (0x00013ffe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa6d,	// (0x0001a5a1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a5a1) list_double2_large_graphic_pane_vc_g

0xb469,	// (0x00015f9d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb469,	// (0x00015f9d) list_double2_large_graphic_pane_vc_t1

0xb47f,	// (0x00015fb3) list_double_time_pane_vc_g1_ParamLimits

0xb47f,	// (0x00015fb3) list_double_time_pane_vc_g1

0xb48b,	// (0x00015fbf) list_double_time_pane_vc_g2_ParamLimits

0xb48b,	// (0x00015fbf) list_double_time_pane_vc_g2

0x0001,

0xfa74,	// (0x0001a5a8) list_double_time_pane_vc_g_ParamLimits

0xfa74,	// (0x0001a5a8) list_double_time_pane_vc_g

0xb497,	// (0x00015fcb) list_double_time_pane_vc_t1_ParamLimits

0xb497,	// (0x00015fcb) list_double_time_pane_vc_t1

0xb4f2,	// (0x00016026) list_double_time_pane_vc_t2_ParamLimits

0xb4f2,	// (0x00016026) list_double_time_pane_vc_t2

0xb512,	// (0x00016046) list_double_time_pane_vc_t3_ParamLimits

0xb512,	// (0x00016046) list_double_time_pane_vc_t3

0xb52a,	// (0x0001605e) list_double_time_pane_vc_t4_ParamLimits

0xb52a,	// (0x0001605e) list_double_time_pane_vc_t4

0x0003,

0xfa79,	// (0x0001a5ad) list_double_time_pane_vc_t_ParamLimits

0xfa79,	// (0x0001a5ad) list_double_time_pane_vc_t

0x85b9,	// (0x000130ed) list_double_pane_vc_g1_ParamLimits

0x85b9,	// (0x000130ed) list_double_pane_vc_g1

0x94ca,	// (0x00013ffe) list_double_pane_vc_g2_ParamLimits

0x94ca,	// (0x00013ffe) list_double_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a34e) list_double_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a34e) list_double_pane_vc_g

0xb53e,	// (0x00016072) list_double_pane_vc_t1_ParamLimits

0xb53e,	// (0x00016072) list_double_pane_vc_t1

0xb550,	// (0x00016084) list_double_pane_vc_t2_ParamLimits

0xb550,	// (0x00016084) list_double_pane_vc_t2

0x0001,

0xfa82,	// (0x0001a5b6) list_double_pane_vc_t_ParamLimits

0xfa82,	// (0x0001a5b6) list_double_pane_vc_t

0x85b9,	// (0x000130ed) list_double_number_pane_vc_g1_ParamLimits

0x85b9,	// (0x000130ed) list_double_number_pane_vc_g1

0x94ca,	// (0x00013ffe) list_double_number_pane_vc_g2_ParamLimits

0x94ca,	// (0x00013ffe) list_double_number_pane_vc_g2

0x0001,

0xf81a,	// (0x0001a34e) list_double_number_pane_vc_g_ParamLimits

0xf81a,	// (0x0001a34e) list_double_number_pane_vc_g

0xb568,	// (0x0001609c) list_double_number_pane_vc_t1_ParamLimits

0xb568,	// (0x0001609c) list_double_number_pane_vc_t1

0xb57c,	// (0x000160b0) list_double_number_pane_vc_t2_ParamLimits

0xb57c,	// (0x000160b0) list_double_number_pane_vc_t2

0xb550,	// (0x00016084) list_double_number_pane_vc_t3_ParamLimits

0xb550,	// (0x00016084) list_double_number_pane_vc_t3

0x0002,

0xfa87,	// (0x0001a5bb) list_double_number_pane_vc_t_ParamLimits

0xfa87,	// (0x0001a5bb) list_double_number_pane_vc_t

0xb58e,	// (0x000160c2) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb58e,	// (0x000160c2) list_double_large_graphic_pane_vc_g1

0xb59a,	// (0x000160ce) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb59a,	// (0x000160ce) list_double_large_graphic_pane_vc_g2

0x94ca,	// (0x00013ffe) list_double_large_graphic_pane_vc_g3_ParamLimits

0x94ca,	// (0x00013ffe) list_double_large_graphic_pane_vc_g3

0xb5a9,	// (0x000160dd) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb5a9,	// (0x000160dd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa8e,	// (0x0001a5c2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x0001a5c2) list_double_large_graphic_pane_vc_g

0xb5b5,	// (0x000160e9) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb5b5,	// (0x000160e9) list_double_large_graphic_pane_vc_t1

0xb5c7,	// (0x000160fb) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb5c7,	// (0x000160fb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa97,	// (0x0001a5cb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a5cb) list_double_large_graphic_pane_vc_t

0xb1a2,	// (0x00015cd6) list_double_heading_pane_vc_g1_ParamLimits

0xb1a2,	// (0x00015cd6) list_double_heading_pane_vc_g1

0xb1ae,	// (0x00015ce2) list_double_heading_pane_vc_g2_ParamLimits

0xb1ae,	// (0x00015ce2) list_double_heading_pane_vc_g2

0x0001,

0xfa9c,	// (0x0001a5d0) list_double_heading_pane_vc_g_ParamLimits

0xfa9c,	// (0x0001a5d0) list_double_heading_pane_vc_g

0xb5e0,	// (0x00016114) list_double_heading_pane_vc_t1_ParamLimits

0xb5e0,	// (0x00016114) list_double_heading_pane_vc_t1

0x9590,	// (0x000140c4) list_double_heading_pane_vc_t2_ParamLimits

0x9590,	// (0x000140c4) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0001a5d5) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0001a5d5) list_double_heading_pane_vc_t

0x94be,	// (0x00013ff2) list_double_graphic_pane_vc_g1_ParamLimits

0x94be,	// (0x00013ff2) list_double_graphic_pane_vc_g1

0xb5f4,	// (0x00016128) list_double_graphic_pane_vc_g2_ParamLimits

0xb5f4,	// (0x00016128) list_double_graphic_pane_vc_g2

0xb603,	// (0x00016137) list_double_graphic_pane_vc_g3_ParamLimits

0xb603,	// (0x00016137) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0001a5da) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0001a5da) list_double_graphic_pane_vc_g

0xb60f,	// (0x00016143) list_double_graphic_pane_vc_t1_ParamLimits

0xb60f,	// (0x00016143) list_double_graphic_pane_vc_t1

0xb550,	// (0x00016084) list_double_graphic_pane_vc_t2_ParamLimits

0xb550,	// (0x00016084) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0001a5e1) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0001a5e1) list_double_graphic_pane_vc_t

0x4c76,	// (0x0000f7aa) aid_size_cell_fastswap

0x4c7e,	// (0x0000f7b2) aid_size_cell_touch_ParamLimits

0x4c7e,	// (0x0000f7b2) aid_size_cell_touch

0x4ee9,	// (0x0000fa1d) popup_fast_swap_wide_window_ParamLimits

0x4ee9,	// (0x0000fa1d) popup_fast_swap_wide_window

0x4fff,	// (0x0000fb33) touch_pane_ParamLimits

0x4fff,	// (0x0000fb33) touch_pane

0x7706,	// (0x0001223a) button_value_adjust_pane_cp2

0x770e,	// (0x00012242) button_value_adjust_pane_cp4

0x7734,	// (0x00012268) form_field_data_pane_cp2

0x7759,	// (0x0001228d) form_field_data_wide_pane_cp2

0x7de3,	// (0x00012917) bg_scroll_pane_ParamLimits

0x5290,	// (0x0000fdc4) scroll_handle_pane_ParamLimits

0x52a4,	// (0x0000fdd8) scroll_sc2_down_pane_ParamLimits

0x52a4,	// (0x0000fdd8) scroll_sc2_down_pane

0x7e14,	// (0x00012948) scroll_sc2_up_pane_ParamLimits

0x7e14,	// (0x00012948) scroll_sc2_up_pane

0xba4a,	// (0x0001657e) grid_wheel_folder_pane_g1_ParamLimits

0xba4a,	// (0x0001657e) grid_wheel_folder_pane_g1

0x546e,	// (0x0000ffa2) clock_nsta_pane_cp2_ParamLimits

0x546e,	// (0x0000ffa2) clock_nsta_pane_cp2

0x8650,	// (0x00013184) listscroll_midp_pane_ParamLimits

0x865c,	// (0x00013190) midp_canvas_pane

0x894a,	// (0x0001347e) nsta_clock_indic_pane

0x89a8,	// (0x000134dc) listscroll_form_pane_vc

0x89c4,	// (0x000134f8) listscroll_set_pane_vc_ParamLimits

0x89c4,	// (0x000134f8) listscroll_set_pane_vc

0x90e4,	// (0x00013c18) clock_nsta_pane

0x9161,	// (0x00013c95) indicator_nsta_pane

0x9458,	// (0x00013f8c) bg_popup_sub_pane_cp2_ParamLimits

0x946c,	// (0x00013fa0) find_pane_cp2_ParamLimits

0x946c,	// (0x00013fa0) find_pane_cp2

0x9482,	// (0x00013fb6) grid_toobar_pane_ParamLimits

0x9638,	// (0x0001416c) list_form_gen_pane_vc_ParamLimits

0x9638,	// (0x0001416c) list_form_gen_pane_vc

0x964e,	// (0x00014182) scroll_pane_cp8_vc_ParamLimits

0x964e,	// (0x00014182) scroll_pane_cp8_vc

0x96ca,	// (0x000141fe) data_form_wide_pane_vc_ParamLimits

0x96ca,	// (0x000141fe) data_form_wide_pane_vc

0x96d6,	// (0x0001420a) form_field_data_wide_pane_vc_g1

0x96de,	// (0x00014212) form_field_data_wide_pane_vc_t1_ParamLimits

0x96de,	// (0x00014212) form_field_data_wide_pane_vc_t1

0x77fc,	// (0x00012330) input_focus_pane_cp6_vc_ParamLimits

0x77fc,	// (0x00012330) input_focus_pane_cp6_vc

0x99e7,	// (0x0001451b) list_midp_pane_ParamLimits

0x99f3,	// (0x00014527) scroll_pane_cp16_ParamLimits

0x99f3,	// (0x00014527) scroll_pane_cp16

0x9a33,	// (0x00014567) button_value_adjust_pane_ParamLimits

0x9a33,	// (0x00014567) button_value_adjust_pane

0xa9e3,	// (0x00015517) button_value_adjust_pane_cp6_ParamLimits

0xa9e3,	// (0x00015517) button_value_adjust_pane_cp6

0xab3d,	// (0x00015671) settings_code_pane_cp_ParamLimits

0xab3d,	// (0x00015671) settings_code_pane_cp

0x68d6,	// (0x0001140a) cell_touch_pane_g1

0x68d6,	// (0x0001140a) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001a276) cell_touch_pane_g

0xb181,	// (0x00015cb5) cell_touch_pane_cp_ParamLimits

0xb181,	// (0x00015cb5) cell_touch_pane_cp

0xb191,	// (0x00015cc5) cell_touch_pane_ParamLimits

0xb191,	// (0x00015cc5) cell_touch_pane

0x68d6,	// (0x0001140a) scroll_sc2_down_pane_g1

0x68d6,	// (0x0001140a) scroll_sc2_up_pane_g1

0x68e0,	// (0x00011414) bg_set_opt_pane_cp4_vc

0xb1ce,	// (0x00015d02) list_set_graphic_pane_vc_g1_ParamLimits

0xb1ce,	// (0x00015d02) list_set_graphic_pane_vc_g1

0xb1da,	// (0x00015d0e) list_set_graphic_pane_vc_g2_ParamLimits

0xb1da,	// (0x00015d0e) list_set_graphic_pane_vc_g2

0x0001,

0xfa33,	// (0x0001a567) list_set_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x0001a567) list_set_graphic_pane_vc_g

0xb1e6,	// (0x00015d1a) text_primary_small_cp13_vc_ParamLimits

0xb1e6,	// (0x00015d1a) text_primary_small_cp13_vc

0xb1fe,	// (0x00015d32) list_set_graphic_pane_vc_ParamLimits

0xb1fe,	// (0x00015d32) list_set_graphic_pane_vc

0x68e0,	// (0x00011414) input_focus_pane_cp2_vc

0x68d6,	// (0x0001140a) setting_code_pane_vc_g1

0xb212,	// (0x00015d46) setting_code_pane_vc_t1

0xb220,	// (0x00015d54) set_text_pane_vc_t1_ParamLimits

0xb220,	// (0x00015d54) set_text_pane_vc_t1

0x68e0,	// (0x00011414) input_focus_pane_cp1_vc

0xb23e,	// (0x00015d72) list_set_text_pane_vc

0x68d6,	// (0x0001140a) setting_text_pane_vc_g1

0x68e0,	// (0x00011414) bg_set_opt_pane_cp2_vc

0xb248,	// (0x00015d7c) setting_slider_graphic_pane_vc_g1

0xb250,	// (0x00015d84) setting_slider_graphic_pane_vc_t1

0xb25e,	// (0x00015d92) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x0001a56c) setting_slider_graphic_pane_vc_t

0xb26c,	// (0x00015da0) slider_set_pane_cp_vc

0xb274,	// (0x00015da8) slider_set_pane_vc_g1

0xb27d,	// (0x00015db1) slider_set_pane_vc_g2

0x0006,

0xfa3d,	// (0x0001a571) slider_set_pane_vc_g

0x7938,	// (0x0001246c) set_opt_bg_pane_g1_copy1

0x7940,	// (0x00012474) set_opt_bg_pane_g2_copy1

0xb2a9,	// (0x00015ddd) set_opt_bg_pane_g3_copy1

0x7950,	// (0x00012484) set_opt_bg_pane_g4_copy1

0x7958,	// (0x0001248c) set_opt_bg_pane_g5_copy1

0x7960,	// (0x00012494) set_opt_bg_pane_g6_copy1

0xb2b3,	// (0x00015de7) set_opt_bg_pane_g7_copy1

0xb2bd,	// (0x00015df1) set_opt_bg_pane_g8_copy1

0xb2c7,	// (0x00015dfb) set_opt_bg_pane_g9_copy1

0x68e0,	// (0x00011414) bg_set_opt_pane_cp_vc

0xb2d1,	// (0x00015e05) setting_slider_pane_vc_t1

0xb250,	// (0x00015d84) setting_slider_pane_vc_t2

0xb25e,	// (0x00015d92) setting_slider_pane_vc_t3

0x0002,

0xfa4c,	// (0x0001a580) setting_slider_pane_vc_t

0xb26c,	// (0x00015da0) slider_set_pane_vc

0x588d,	// (0x000103c1) volume_set_pane_vc_g1

0x5896,	// (0x000103ca) volume_set_pane_vc_g2

0x589f,	// (0x000103d3) volume_set_pane_vc_g3

0x58a8,	// (0x000103dc) volume_set_pane_vc_g4

0x58b1,	// (0x000103e5) volume_set_pane_vc_g5

0x58ba,	// (0x000103ee) volume_set_pane_vc_g6

0x58c3,	// (0x000103f7) volume_set_pane_vc_g7

0x58cc,	// (0x00010400) volume_set_pane_vc_g8

0x58d5,	// (0x00010409) volume_set_pane_vc_g9

0x58de,	// (0x00010412) volume_set_pane_vc_g10

0x0009,

0xf8ea,	// (0x0001a41e) volume_set_pane_vc_g

0xb2e0,	// (0x00015e14) volume_set_pane_vc

0xb2e8,	// (0x00015e1c) button_value_adjust_pane_cp1_vc

0xb2f2,	// (0x00015e26) list_highlight_pane_cp2_vc

0xb2fb,	// (0x00015e2f) list_set_pane_vc_ParamLimits

0xb2fb,	// (0x00015e2f) list_set_pane_vc

0xb365,	// (0x00015e99) main_pane_set_vc_t1_ParamLimits

0xb365,	// (0x00015e99) main_pane_set_vc_t1

0xb37a,	// (0x00015eae) main_pane_set_vc_t2_ParamLimits

0xb37a,	// (0x00015eae) main_pane_set_vc_t2

0xb38c,	// (0x00015ec0) main_pane_set_vc_t3_ParamLimits

0xb38c,	// (0x00015ec0) main_pane_set_vc_t3

0xb3a0,	// (0x00015ed4) main_pane_set_vc_t4_ParamLimits

0xb3a0,	// (0x00015ed4) main_pane_set_vc_t4

0x0003,

0xfa53,	// (0x0001a587) main_pane_set_vc_t_ParamLimits

0xfa53,	// (0x0001a587) main_pane_set_vc_t

0xb3b4,	// (0x00015ee8) setting_code_pane_vc_ParamLimits

0xb3b4,	// (0x00015ee8) setting_code_pane_vc

0xb3c5,	// (0x00015ef9) setting_slider_graphic_pane_vc

0xb3c5,	// (0x00015ef9) setting_slider_pane_vc

0xb3c5,	// (0x00015ef9) setting_text_pane_vc

0xb3c5,	// (0x00015ef9) setting_volume_pane_vc

0xb3cf,	// (0x00015f03) scroll_pane_cp121_vc

0x76f4,	// (0x00012228) set_content_pane_vc

0xb621,	// (0x00016155) button_value_adjust_pane_g1

0xb62a,	// (0x0001615e) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0001a5e6) button_value_adjust_pane_g

0xb633,	// (0x00016167) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb633,	// (0x00016167) form_field_slider_wide_pane_vc_t1

0xb647,	// (0x0001617b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb647,	// (0x0001617b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0001a5eb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0001a5eb) form_field_slider_wide_pane_vc_t

0x6c56,	// (0x0001178a) input_focus_pane_cp10_vc_ParamLimits

0x6c56,	// (0x0001178a) input_focus_pane_cp10_vc

0xb659,	// (0x0001618d) slider_cont_pane_cp1_vc_ParamLimits

0xb659,	// (0x0001618d) slider_cont_pane_cp1_vc

0xb274,	// (0x00015da8) slider_form_pane_g1_cp2

0xb27d,	// (0x00015db1) slider_form_pane_g2_cp2

0xb672,	// (0x000161a6) form_field_slider_pane_vc_t3

0xb680,	// (0x000161b4) form_field_slider_pane_vc_t4

0xb68e,	// (0x000161c2) slider_form_pane_vc_ParamLimits

0xb68e,	// (0x000161c2) slider_form_pane_vc

0xb69b,	// (0x000161cf) form_field_slider_pane_vc_t1_ParamLimits

0xb69b,	// (0x000161cf) form_field_slider_pane_vc_t1

0xb647,	// (0x0001617b) form_field_slider_pane_vc_t2_ParamLimits

0xb647,	// (0x0001617b) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0001a5fb) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0001a5fb) form_field_slider_pane_vc_t

0x6c56,	// (0x0001178a) input_focus_pane_cp9_vc_ParamLimits

0x6c56,	// (0x0001178a) input_focus_pane_cp9_vc

0xb6b7,	// (0x000161eb) slider_cont_pane_vc_ParamLimits

0xb6b7,	// (0x000161eb) slider_cont_pane_vc

0xb6c9,	// (0x000161fd) list_form_graphic_pane_cp_vc_ParamLimits

0xb6c9,	// (0x000161fd) list_form_graphic_pane_cp_vc

0x96d6,	// (0x0001420a) form_field_popup_wide_pane_vc_g1

0xb6de,	// (0x00016212) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb6de,	// (0x00016212) form_field_popup_wide_pane_vc_t1

0x77fc,	// (0x00012330) input_focus_pane_cp8_vc_ParamLimits

0x77fc,	// (0x00012330) input_focus_pane_cp8_vc

0xb6f5,	// (0x00016229) list_form_wide_pane_vc_ParamLimits

0xb6f5,	// (0x00016229) list_form_wide_pane_vc

0xb701,	// (0x00016235) list_form_graphic_pane_vc_g1

0xb709,	// (0x0001623d) list_form_graphic_pane_vc_t1_ParamLimits

0xb709,	// (0x0001623d) list_form_graphic_pane_vc_t1

0x69c0,	// (0x000114f4) list_highlight_pane_cp5_vc_ParamLimits

0x69c0,	// (0x000114f4) list_highlight_pane_cp5_vc

0xb725,	// (0x00016259) list_form_graphic_pane_vc_ParamLimits

0xb725,	// (0x00016259) list_form_graphic_pane_vc

0x96d6,	// (0x0001420a) form_field_popup_pane_vc_g1

0xb73b,	// (0x0001626f) form_field_popup_pane_vc_t1_ParamLimits

0xb73b,	// (0x0001626f) form_field_popup_pane_vc_t1

0x77fc,	// (0x00012330) input_focus_pane_cp7_vc_ParamLimits

0x77fc,	// (0x00012330) input_focus_pane_cp7_vc

0xb752,	// (0x00016286) list_form_pane_vc_ParamLimits

0xb752,	// (0x00016286) list_form_pane_vc

0xb75e,	// (0x00016292) data_form_pane_vc_t1_ParamLimits

0xb75e,	// (0x00016292) data_form_pane_vc_t1

0x7938,	// (0x0001246c) input_focus_pane_vc_g1

0x7940,	// (0x00012474) input_focus_pane_vc_g2

0x7948,	// (0x0001247c) input_focus_pane_vc_g3

0x7950,	// (0x00012484) input_focus_pane_vc_g4

0x7958,	// (0x0001248c) input_focus_pane_vc_g5

0x7960,	// (0x00012494) input_focus_pane_vc_g6

0x7968,	// (0x0001249c) input_focus_pane_vc_g7

0x7970,	// (0x000124a4) input_focus_pane_vc_g8

0x7978,	// (0x000124ac) input_focus_pane_vc_g9

0x68d6,	// (0x0001140a) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001a1ff) input_focus_pane_vc_g

0x96ca,	// (0x000141fe) data_form_pane_vc_ParamLimits

0x96ca,	// (0x000141fe) data_form_pane_vc

0x96d6,	// (0x0001420a) form_field_data_pane_vc_g1

0xb77b,	// (0x000162af) form_field_data_pane_vc_t1_ParamLimits

0xb77b,	// (0x000162af) form_field_data_pane_vc_t1

0x77fc,	// (0x00012330) input_focus_pane_vc_ParamLimits

0x77fc,	// (0x00012330) input_focus_pane_vc

0xb795,	// (0x000162c9) button_value_adjust_pane_cp3_vc

0xb79d,	// (0x000162d1) button_value_adjust_pane_cp5_vc

0xb7a5,	// (0x000162d9) form_field_data_pane_vc_ParamLimits

0xb7a5,	// (0x000162d9) form_field_data_pane_vc

0xb7c0,	// (0x000162f4) form_field_data_pane_vc_cp2

0xb7c8,	// (0x000162fc) form_field_data_wide_pane_vc_ParamLimits

0xb7c8,	// (0x000162fc) form_field_data_wide_pane_vc

0xb7e2,	// (0x00016316) form_field_data_wide_pane_vc_cp2

0xb7ea,	// (0x0001631e) form_field_popup_pane_vc_ParamLimits

0xb7ea,	// (0x0001631e) form_field_popup_pane_vc

0xb805,	// (0x00016339) form_field_popup_wide_pane_vc_ParamLimits

0xb805,	// (0x00016339) form_field_popup_wide_pane_vc

0xb81f,	// (0x00016353) form_field_slider_pane_vc_ParamLimits

0xb81f,	// (0x00016353) form_field_slider_pane_vc

0xb832,	// (0x00016366) form_field_slider_wide_pane_vc_ParamLimits

0xb832,	// (0x00016366) form_field_slider_wide_pane_vc

0xb845,	// (0x00016379) grid_touch_1_pane_ParamLimits

0xb845,	// (0x00016379) grid_touch_1_pane

0xb851,	// (0x00016385) grid_touch_2_pane_ParamLimits

0xb851,	// (0x00016385) grid_touch_2_pane

0x8915,	// (0x00013449) touch_pane_g1_ParamLimits

0x8915,	// (0x00013449) touch_pane_g1

0xb86b,	// (0x0001639f) cell_app_pane_cp_wide_ParamLimits

0xb86b,	// (0x0001639f) cell_app_pane_cp_wide

0xb87c,	// (0x000163b0) grid_popup_fast_wide_pane_ParamLimits

0xb87c,	// (0x000163b0) grid_popup_fast_wide_pane

0xb890,	// (0x000163c4) scroll_pane_cp19_ParamLimits

0xb890,	// (0x000163c4) scroll_pane_cp19

0x68e0,	// (0x00011414) bg_popup_window_pane_cp20

0xb8a4,	// (0x000163d8) listscroll_popup_fast_wide_pane

0x69c0,	// (0x000114f4) grid_indicator_nsta_pane

0xb8ac,	// (0x000163e0) clock_nsta_pane_g1

0xb8b5,	// (0x000163e9) clock_nsta_pane_t1

0xb8d1,	// (0x00016405) cell_indicator_nsta_pane_ParamLimits

0xb8d1,	// (0x00016405) cell_indicator_nsta_pane

0xb909,	// (0x0001643d) cell_indicator_nsta_pane_g1

0xb917,	// (0x0001644b) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0001a605) cell_indicator_nsta_pane_g

0xb92c,	// (0x00016460) clock_nsta_pane_cp

0xb934,	// (0x00016468) indicator_nsta_pane_cp

0xb93c,	// (0x00016470) nsta_clock_indic_pane_g1

0x6aa6,	// (0x000115da) grid_indicator_pane

0x7f06,	// (0x00012a3a) scroll_pane_cp29

0x53ba,	// (0x0000feee) indicator_nsta_pane_cp2_ParamLimits

0x53ba,	// (0x0000feee) indicator_nsta_pane_cp2

0x69c0,	// (0x000114f4) main_apps_wheel_pane

0x98c4,	// (0x000143f8) form_midp_field_text_pane_ParamLimits

0x9a13,	// (0x00014547) scroll_bar_cp050_ParamLimits

0xb974,	// (0x000164a8) cell_indicator_pane_ParamLimits

0xb974,	// (0x000164a8) cell_indicator_pane

0xb98c,	// (0x000164c0) cell_indicator_pane_g1

0xb996,	// (0x000164ca) grid_wheel_folder_pane_ParamLimits

0xb996,	// (0x000164ca) grid_wheel_folder_pane

0xb9aa,	// (0x000164de) list_wheel_apps_pane_ParamLimits

0xb9aa,	// (0x000164de) list_wheel_apps_pane

0xb9bd,	// (0x000164f1) main_apps_wheel_pane_g1_ParamLimits

0xb9bd,	// (0x000164f1) main_apps_wheel_pane_g1

0xb9d9,	// (0x0001650d) main_apps_wheel_pane_g2_ParamLimits

0xb9d9,	// (0x0001650d) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0001a614) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0001a614) main_apps_wheel_pane_g

0xb9f5,	// (0x00016529) main_apps_wheel_pane_t1_ParamLimits

0xb9f5,	// (0x00016529) main_apps_wheel_pane_t1

0xba1e,	// (0x00016552) list_wheel_apps_pane_g1

0xba26,	// (0x0001655a) list_wheel_apps_pane_g2

0xba2e,	// (0x00016562) list_wheel_apps_pane_g3

0xba36,	// (0x0001656a) list_wheel_apps_pane_g4

0xba40,	// (0x00016574) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0001a619) list_wheel_apps_pane_g

0x84c4,	// (0x00012ff8) navi_icon_text_pane

0x9011,	// (0x00013b45) aid_fill_nsta

0xba61,	// (0x00016595) navi_icon_text_pane_g1

0xba70,	// (0x000165a4) navi_icon_text_pane_t1

0x835a,	// (0x00012e8e) list_set_graphic_pane_t1_ParamLimits

0x835a,	// (0x00012e8e) list_set_graphic_pane_t1

0xa133,	// (0x00014c67) popup_midp_note_alarm_window_t6_ParamLimits

0xa133,	// (0x00014c67) popup_midp_note_alarm_window_t6

0xa145,	// (0x00014c79) popup_midp_note_alarm_window_t7_ParamLimits

0xa145,	// (0x00014c79) popup_midp_note_alarm_window_t7

0xa157,	// (0x00014c8b) popup_midp_note_alarm_window_t8_ParamLimits

0xa157,	// (0x00014c8b) popup_midp_note_alarm_window_t8

0xa169,	// (0x00014c9d) popup_midp_note_alarm_window_t9_ParamLimits

0xa169,	// (0x00014c9d) popup_midp_note_alarm_window_t9

0xa17b,	// (0x00014caf) popup_midp_note_alarm_window_t10_ParamLimits

0xa17b,	// (0x00014caf) popup_midp_note_alarm_window_t10

0xa18d,	// (0x00014cc1) popup_midp_note_alarm_window_t11_ParamLimits

0xa18d,	// (0x00014cc1) popup_midp_note_alarm_window_t11

0xa19f,	// (0x00014cd3) scroll_pane_cp17_ParamLimits

0xa19f,	// (0x00014cd3) scroll_pane_cp17

0x588d,	// (0x000103c1) volume_small_pane_cp_g1

0x5b9e,	// (0x000106d2) volume_small_pane_cp_g2

0x5ba7,	// (0x000106db) volume_small_pane_cp_g3

0x5bb0,	// (0x000106e4) volume_small_pane_cp_g4

0x5bb9,	// (0x000106ed) volume_small_pane_cp_g5

0x5bc2,	// (0x000106f6) volume_small_pane_cp_g6

0x5bcb,	// (0x000106ff) volume_small_pane_cp_g7

0x5bd4,	// (0x00010708) volume_small_pane_cp_g8

0x5bdd,	// (0x00010711) volume_small_pane_cp_g9

0x5be6,	// (0x0001071a) volume_small_pane_cp_g10

0x8725,	// (0x00013259) midp_ticker_pane_g1_ParamLimits

0x8731,	// (0x00013265) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001a2c7) midp_ticker_pane_g_ParamLimits

0x873d,	// (0x00013271) midp_ticker_pane_t1_ParamLimits

0x9027,	// (0x00013b5b) aid_fill_nsta_2

0x99ff,	// (0x00014533) list_form2_midp_pane

0xabb9,	// (0x000156ed) midp_editing_number_pane_ParamLimits

0xabc8,	// (0x000156fc) midp_ticker_pane_ParamLimits

0xba85,	// (0x000165b9) form2_midp_field_pane

0xbaa9,	// (0x000165dd) scroll_pane_cp51

0xbac9,	// (0x000165fd) form2_midp_button_pane_ParamLimits

0xbac9,	// (0x000165fd) form2_midp_button_pane

0xbadb,	// (0x0001660f) form2_midp_content_pane_ParamLimits

0xbadb,	// (0x0001660f) form2_midp_content_pane

0xbaf5,	// (0x00016629) form2_midp_field_choice_group_pane

0xbafd,	// (0x00016631) form2_midp_field_pane_g1

0xbb05,	// (0x00016639) form2_midp_field_pane_g2

0xbb0d,	// (0x00016641) form2_midp_field_pane_g3

0xbb15,	// (0x00016649) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0001a63e) form2_midp_field_pane_g

0xbb1d,	// (0x00016651) form2_midp_gauge_slider_pane

0xbb25,	// (0x00016659) form2_midp_gauge_wait_pane

0xbb2d,	// (0x00016661) form2_midp_image_pane_ParamLimits

0xbb2d,	// (0x00016661) form2_midp_image_pane

0xbb48,	// (0x0001667c) form2_midp_label_pane_ParamLimits

0xbb48,	// (0x0001667c) form2_midp_label_pane

0xbb67,	// (0x0001669b) form2_midp_label_pane_cp_ParamLimits

0xbb67,	// (0x0001669b) form2_midp_label_pane_cp

0xbb88,	// (0x000166bc) form2_midp_string_pane_ParamLimits

0xbb88,	// (0x000166bc) form2_midp_string_pane

0xbb9a,	// (0x000166ce) form2_midp_text_pane_ParamLimits

0xbb9a,	// (0x000166ce) form2_midp_text_pane

0xbbbb,	// (0x000166ef) form2_midp_time_pane

0xbbcb,	// (0x000166ff) input_focus_pane_cp51_ParamLimits

0xbbcb,	// (0x000166ff) input_focus_pane_cp51

0xbbe3,	// (0x00016717) form2_midp_label_pane_t1_ParamLimits

0xbbe3,	// (0x00016717) form2_midp_label_pane_t1

0xbc29,	// (0x0001675d) form2_mdip_text_pane_t1_ParamLimits

0xbc29,	// (0x0001675d) form2_mdip_text_pane_t1

0xbc4b,	// (0x0001677f) form2_midp_time_pane_t1

0xbc66,	// (0x0001679a) form2_midp_gauge_slider_pane_t1

0xbc78,	// (0x000167ac) form2_midp_gauge_slider_pane_t2

0xbc8a,	// (0x000167be) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0001a647) form2_midp_gauge_slider_pane_t

0xbc9c,	// (0x000167d0) form2_midp_slider_pane

0xbca8,	// (0x000167dc) form2_midp_gauge_wait_pane_t1

0xbcb6,	// (0x000167ea) form2_midp_wait_pane_ParamLimits

0xbcb6,	// (0x000167ea) form2_midp_wait_pane

0x96f5,	// (0x00014229) list_single_2graphic_pane_cp4_ParamLimits

0x96f5,	// (0x00014229) list_single_2graphic_pane_cp4

0xbce1,	// (0x00016815) list_single_midp_graphic_pane_cp_ParamLimits

0xbce1,	// (0x00016815) list_single_midp_graphic_pane_cp

0x68e0,	// (0x00011414) list_highlight_pane_cp20

0xbd05,	// (0x00016839) list_single_2graphic_pane_g1_cp4

0xb084,	// (0x00015bb8) list_single_2graphic_pane_g2_cp4

0xbd0d,	// (0x00016841) list_single_2graphic_pane_t1_cp4

0x69c0,	// (0x000114f4) list_highlight_pane_cp21

0xbd1c,	// (0x00016850) list_single_midp_graphic_pane_g4_cp

0xbd2b,	// (0x0001685f) list_single_midp_graphic_pane_t1_cp

0xbd40,	// (0x00016874) form2_mdip_string_pane_t1_ParamLimits

0xbd40,	// (0x00016874) form2_mdip_string_pane_t1

0x68e0,	// (0x00011414) bg_wml_button_pane_cp2

0x68d6,	// (0x0001140a) form2_midp_image_pane_g1

0x74a8,	// (0x00011fdc) list_double_large_graphic_pane_g5_ParamLimits

0x74a8,	// (0x00011fdc) list_double_large_graphic_pane_g5

0x8650,	// (0x00013184) midp_form_pane_ParamLimits

0x69c0,	// (0x000114f4) main_apps_wheel_pane_ParamLimits

0x8dbb,	// (0x000138ef) popup_preview_window_ParamLimits

0x8dbb,	// (0x000138ef) popup_preview_window

0x8fa2,	// (0x00013ad6) popup_touch_info_window_ParamLimits

0x8fa2,	// (0x00013ad6) popup_touch_info_window

0x8fc4,	// (0x00013af8) popup_touch_menu_window_ParamLimits

0x8fc4,	// (0x00013af8) popup_touch_menu_window

0x68cc,	// (0x00011400) bg_popup_sub_pane_cp6

0xbde5,	// (0x00016919) list_touch_menu_pane

0xbded,	// (0x00016921) list_single_touch_menu_pane_ParamLimits

0xbded,	// (0x00016921) list_single_touch_menu_pane

0xbe08,	// (0x0001693c) list_single_touch_menu_pane_t1

0x69c0,	// (0x000114f4) bg_popup_sub_pane_cp7_ParamLimits

0x69c0,	// (0x000114f4) bg_popup_sub_pane_cp7

0xbe16,	// (0x0001694a) heading_sub_pane

0xbe1e,	// (0x00016952) list_touch_info_pane_ParamLimits

0xbe1e,	// (0x00016952) list_touch_info_pane

0xbe2d,	// (0x00016961) list_single_touch_info_pane_ParamLimits

0xbe2d,	// (0x00016961) list_single_touch_info_pane

0xbe3f,	// (0x00016973) list_single_touch_info_pane_t1

0xbe4d,	// (0x00016981) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0001a655) list_single_touch_info_pane_t

0x8648,	// (0x0001317c) bg_popup_heading_pane_cp

0xbe5b,	// (0x0001698f) heading_sub_pane_t1

0x9664,	// (0x00014198) bg_popup_preview_window_pane_cp_ParamLimits

0x9664,	// (0x00014198) bg_popup_preview_window_pane_cp

0xbe16,	// (0x0001694a) heading_preview_pane

0xbe1e,	// (0x00016952) list_preview_pane_ParamLimits

0xbe1e,	// (0x00016952) list_preview_pane

0xbe69,	// (0x0001699d) popup_preview_window_g1

0xbe2d,	// (0x00016961) list_single_preview_pane_ParamLimits

0xbe2d,	// (0x00016961) list_single_preview_pane

0xbe71,	// (0x000169a5) list_single_preview_pane_g1

0xbe79,	// (0x000169ad) list_single_preview_pane_t1

0xbe3f,	// (0x00016973) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0001a65a) list_single_preview_pane_t

0xbe87,	// (0x000169bb) bg_popup_heading_pane_cp2_ParamLimits

0xbe87,	// (0x000169bb) bg_popup_heading_pane_cp2

0xbe9d,	// (0x000169d1) heading_preview_pane_g1

0xbea5,	// (0x000169d9) heading_preview_pane_t1_ParamLimits

0xbea5,	// (0x000169d9) heading_preview_pane_t1

0x6ac9,	// (0x000115fd) soft_indicator_pane_t1_ParamLimits

0x71d4,	// (0x00011d08) scroll_pane_ParamLimits

0x7e02,	// (0x00012936) scroll_sc2_left_pane

0x7e0b,	// (0x0001293f) scroll_sc2_right_pane

0x7e2a,	// (0x0001295e) scroll_bg_pane_g1_ParamLimits

0x7e3f,	// (0x00012973) scroll_bg_pane_g2_ParamLimits

0x7e57,	// (0x0001298b) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001a256) scroll_bg_pane_g_ParamLimits

0x7e2a,	// (0x0001295e) scroll_handle_pane_g1_ParamLimits

0x7e79,	// (0x000129ad) scroll_handle_pane_g2_ParamLimits

0x7e57,	// (0x0001298b) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001a25d) scroll_handle_pane_g_ParamLimits

0x8a06,	// (0x0001353a) popup_choice_list_window_ParamLimits

0x8a06,	// (0x0001353a) popup_choice_list_window

0x9464,	// (0x00013f98) choice_list_pane

0x9514,	// (0x00014048) cell_toolbar_pane_t1

0x953c,	// (0x00014070) toolbar_button_pane_ParamLimits

0xa66f,	// (0x000151a3) ai_gene_pane_1_t2_ParamLimits

0xa66f,	// (0x000151a3) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x0001a47a) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x0001a47a) ai_gene_pane_1_t

0xbec2,	// (0x000169f6) scroll_sc2_left_pane_g1

0xbec2,	// (0x000169f6) scroll_sc2_right_pane_g1

0x89d6,	// (0x0001350a) bg_popup_sub_pane_cp10

0xbecc,	// (0x00016a00) list_choice_list_pane

0xbee3,	// (0x00016a17) list_single_choice_list_pane_ParamLimits

0xbee3,	// (0x00016a17) list_single_choice_list_pane

0xbef7,	// (0x00016a2b) list_single_choice_list_pane_g1

0xbeff,	// (0x00016a33) list_single_choice_list_pane_t1_ParamLimits

0xbeff,	// (0x00016a33) list_single_choice_list_pane_t1

0xbf14,	// (0x00016a48) choice_list_pane_g1

0xbf1c,	// (0x00016a50) choice_list_pane_t1

0x68cc,	// (0x00011400) input_focus_pane_cp11

0x7cdc,	// (0x00012810) title_pane_stacon_g2_ParamLimits

0x7cdc,	// (0x00012810) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001a23c) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001a23c) title_pane_stacon_g

0x8648,	// (0x0001317c) cursor_press_pane

0x8abc,	// (0x000135f0) popup_fep_hwr_window_ParamLimits

0x8abc,	// (0x000135f0) popup_fep_hwr_window

0x8b46,	// (0x0001367a) popup_fep_vkb_window_ParamLimits

0x8b46,	// (0x0001367a) popup_fep_vkb_window

0xbf2a,	// (0x00016a5e) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0001a683) fep_vkb_side_pane_g_ParamLimits

0x5c28,	// (0x0001075c) fep_hwr_candidate_pane_ParamLimits

0x5c28,	// (0x0001075c) fep_hwr_candidate_pane

0x5c52,	// (0x00010786) fep_hwr_side_pane_ParamLimits

0x5c52,	// (0x00010786) fep_hwr_side_pane

0x5c74,	// (0x000107a8) fep_hwr_top_pane_ParamLimits

0x5c74,	// (0x000107a8) fep_hwr_top_pane

0x5c8c,	// (0x000107c0) fep_hwr_write_pane_ParamLimits

0x5c8c,	// (0x000107c0) fep_hwr_write_pane

0xfb4f,	// (0x0001a683) fep_vkb_side_pane_g

0xbf32,	// (0x00016a66) fep_hwr_top_pane_g1

0xbf44,	// (0x00016a78) fep_hwr_top_pane_g2

0x5cc6,	// (0x000107fa) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0001a65f) fep_hwr_top_pane_g

0x5cdb,	// (0x0001080f) fep_hwr_top_text_pane

0x7fce,	// (0x00012b02) fep_hwr_top_text_pane_g1

0xbf7a,	// (0x00016aae) fep_hwr_top_text_pane_t1

0x5de5,	// (0x00010919) fep_hwr_candidate_pane_g1

0xc1c5,	// (0x00016cf9) fep_vkb_keypad_pane_g3_ParamLimits

0xc1c5,	// (0x00016cf9) fep_vkb_keypad_pane_g3

0xc1f1,	// (0x00016d25) fep_vkb_keypad_pane_g4_ParamLimits

0xc1f1,	// (0x00016d25) fep_vkb_keypad_pane_g4

0xc276,	// (0x00016daa) fep_vkb_bottom_pane_g2_ParamLimits

0xc276,	// (0x00016daa) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0001a68a) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0001a68a) fep_vkb_bottom_pane_g

0xbec2,	// (0x000169f6) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0001a694) cell_vkb_side_pane_g

0xc301,	// (0x00016e35) cell_vkb_side_pane_t1

0xc30f,	// (0x00016e43) cell_vkb_side_pane_t1_copy1

0xbec2,	// (0x000169f6) bg_fep_vkb_candidate_pane_g2

0xc453,	// (0x00016f87) cell_vkb_candidate_pane_ParamLimits

0xbf88,	// (0x00016abc) aid_size_cell_vkb_ParamLimits

0xbf88,	// (0x00016abc) aid_size_cell_vkb

0xc453,	// (0x00016f87) cell_vkb_candidate_pane

0x5e0c,	// (0x00010940) bg_popup_fep_shadow_pane_g1

0xc01a,	// (0x00016b4e) fep_vkb_bottom_pane_ParamLimits

0xc01a,	// (0x00016b4e) fep_vkb_bottom_pane

0xc057,	// (0x00016b8b) fep_vkb_candidate_pane_ParamLimits

0xc057,	// (0x00016b8b) fep_vkb_candidate_pane

0xc073,	// (0x00016ba7) fep_vkb_keypad_pane_ParamLimits

0xc073,	// (0x00016ba7) fep_vkb_keypad_pane

0xc0a6,	// (0x00016bda) fep_vkb_side_pane_ParamLimits

0xc0a6,	// (0x00016bda) fep_vkb_side_pane

0xc0e2,	// (0x00016c16) fep_vkb_top_pane_ParamLimits

0xc0e2,	// (0x00016c16) fep_vkb_top_pane

0xc11e,	// (0x00016c52) fep_vkb_top_pane_g1_ParamLimits

0xc11e,	// (0x00016c52) fep_vkb_top_pane_g1

0xc12d,	// (0x00016c61) fep_vkb_top_pane_g2_ParamLimits

0xc12d,	// (0x00016c61) fep_vkb_top_pane_g2

0xc13c,	// (0x00016c70) fep_vkb_top_pane_g3_ParamLimits

0xc13c,	// (0x00016c70) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0001a67a) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0001a67a) fep_vkb_top_pane_g

0xc15a,	// (0x00016c8e) fep_vkb_top_text_pane_ParamLimits

0xc15a,	// (0x00016c8e) fep_vkb_top_text_pane

0xc16b,	// (0x00016c9f) fep_vkb_side_pane_g1_ParamLimits

0xc16b,	// (0x00016c9f) fep_vkb_side_pane_g1

0xc1b4,	// (0x00016ce8) grid_vkb_side_pane_ParamLimits

0xc1b4,	// (0x00016ce8) grid_vkb_side_pane

0x5e14,	// (0x00010948) bg_popup_fep_shadow_pane_g2

0x5e1d,	// (0x00010951) bg_popup_fep_shadow_pane_g3

0x5e25,	// (0x00010959) bg_popup_fep_shadow_pane_g4

0x5e2e,	// (0x00010962) bg_popup_fep_shadow_pane_g5

0x5e38,	// (0x0001096c) bg_popup_fep_shadow_pane_g6

0x5e40,	// (0x00010974) bg_popup_fep_shadow_pane_g7

0x7950,	// (0x00012484) bg_popup_fep_shadow_pane_g8

0xc221,	// (0x00016d55) grid_vkb_keypad_number_pane_ParamLimits

0xc221,	// (0x00016d55) grid_vkb_keypad_number_pane

0xc235,	// (0x00016d69) grid_vkb_keypad_pane_ParamLimits

0xc235,	// (0x00016d69) grid_vkb_keypad_pane

0xc25b,	// (0x00016d8f) fep_vkb_bottom_pane_g1_ParamLimits

0xc25b,	// (0x00016d8f) fep_vkb_bottom_pane_g1

0xc284,	// (0x00016db8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc284,	// (0x00016db8) grid_vkb_keypad_bottom_left_pane

0xc299,	// (0x00016dcd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc299,	// (0x00016dcd) grid_vkb_keypad_bottom_right_pane

0xc2ae,	// (0x00016de2) fep_vkb_top_text_pane_g1

0xc2c9,	// (0x00016dfd) fep_vkb_top_text_pane_t1

0xc2de,	// (0x00016e12) cell_vkb_side_pane_ParamLimits

0xc2de,	// (0x00016e12) cell_vkb_side_pane

0xbec2,	// (0x000169f6) cell_vkb_side_pane_g1

0xc31d,	// (0x00016e51) cell_vkb_keypad_pane_ParamLimits

0xc31d,	// (0x00016e51) cell_vkb_keypad_pane

0xc3aa,	// (0x00016ede) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0001a6a7) bg_popup_fep_shadow_pane_g

0x5e52,	// (0x00010986) cell_hwr_side_pane_g1

0x5e52,	// (0x00010986) cell_hwr_side_pane_g2

0xc3b4,	// (0x00016ee8) cell_vkb_keypad_pane_t1

0xc3c2,	// (0x00016ef6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3c2,	// (0x00016ef6) cell_vkb_keypad_bottom_left_pane

0xc3df,	// (0x00016f13) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3df,	// (0x00016f13) cell_vkb_keypad_bottom_right_pane

0xbec2,	// (0x000169f6) cell_vkb_keypad_bottom_left_pane_g1

0xbec2,	// (0x000169f6) cell_vkb_keypad_bottom_right_pane_g1

0xc418,	// (0x00016f4c) cell_vkb_keypad_number_pane_ParamLimits

0xc418,	// (0x00016f4c) cell_vkb_keypad_number_pane

0xc437,	// (0x00016f6b) cell_vkb_keypad_number_pane_g1

0xc441,	// (0x00016f75) cell_vkb_keypad_number_pane_g2

0xc44a,	// (0x00016f7e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0001a699) cell_vkb_keypad_number_pane_g

0xc3b4,	// (0x00016ee8) cell_vkb_keypad_number_pane_t1

0xc474,	// (0x00016fa8) fep_vkb_candidate_pane_g1

0x0001,

0xfb86,	// (0x0001a6ba) cell_hwr_side_pane_g

0xc48d,	// (0x00016fc1) cell_hwr_side_pane_t1

0x5e5c,	// (0x00010990) cell_hwr_side_pane_t1_copy1

0x5e6a,	// (0x0001099e) cell_hwr_candidate_pane_g1

0x5e99,	// (0x000109cd) cell_hwr_candidate_pane_t1

0xbec2,	// (0x000169f6) cell_vkb_candidate_pane_g2

0xc4d1,	// (0x00017005) cell_vkb_candidate_pane_t1

0x5bef,	// (0x00010723) bg_popup_fep_shadow_pane_ParamLimits

0x5bef,	// (0x00010723) bg_popup_fep_shadow_pane

0x5ca6,	// (0x000107da) bg_fep_hwr_top_pane_g4

0xbf56,	// (0x00016a8a) bg_hwr_side_pane_g1_ParamLimits

0xbf56,	// (0x00016a8a) bg_hwr_side_pane_g1

0x5d19,	// (0x0001084d) cell_hwr_side_pane_ParamLimits

0x5d19,	// (0x0001084d) cell_hwr_side_pane

0x5d56,	// (0x0001088a) fep_hwr_write_pane_g1_ParamLimits

0x5d56,	// (0x0001088a) fep_hwr_write_pane_g1

0x5d63,	// (0x00010897) fep_hwr_write_pane_g2_ParamLimits

0x5d63,	// (0x00010897) fep_hwr_write_pane_g2

0x5d70,	// (0x000108a4) fep_hwr_write_pane_g3_ParamLimits

0x5d70,	// (0x000108a4) fep_hwr_write_pane_g3

0x5d7e,	// (0x000108b2) fep_hwr_write_pane_g4_ParamLimits

0x5d7e,	// (0x000108b2) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0001a666) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0001a666) fep_hwr_write_pane_g

0x5ca6,	// (0x000107da) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5ca6,	// (0x000107da) bg_fep_hwr_candidate_pane_g2

0x5d93,	// (0x000108c7) cell_hwr_candidate_pane_ParamLimits

0x5d93,	// (0x000108c7) cell_hwr_candidate_pane

0x5de5,	// (0x00010919) fep_hwr_candidate_pane_g1_ParamLimits

0xbfb6,	// (0x00016aea) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbfb6,	// (0x00016aea) bg_popup_fep_shadow_pane_cp2

0xc14c,	// (0x00016c80) fep_vkb_top_pane_g4_ParamLimits

0xc14c,	// (0x00016c80) fep_vkb_top_pane_g4

0xc192,	// (0x00016cc6) fep_vkb_side_pane_g2_ParamLimits

0xc192,	// (0x00016cc6) fep_vkb_side_pane_g2

0x760c,	// (0x00012140) list_setting_pane_t4_ParamLimits

0x760c,	// (0x00012140) list_setting_pane_t4

0x7688,	// (0x000121bc) list_setting_number_pane_t5_ParamLimits

0x7688,	// (0x000121bc) list_setting_number_pane_t5

0x8010,	// (0x00012b44) list_double_heading_pane_cp2_ParamLimits

0x8010,	// (0x00012b44) list_double_heading_pane_cp2

0x7822,	// (0x00012356) list_double_heading_pane_g1_cp2_ParamLimits

0x7822,	// (0x00012356) list_double_heading_pane_g1_cp2

0x782e,	// (0x00012362) list_double_heading_pane_g2_cp2_ParamLimits

0x782e,	// (0x00012362) list_double_heading_pane_g2_cp2

0xc4df,	// (0x00017013) list_double_heading_pane_t1_cp2_ParamLimits

0xc4df,	// (0x00017013) list_double_heading_pane_t1_cp2

0xc4f5,	// (0x00017029) list_double_heading_pane_t2_cp2_ParamLimits

0xc4f5,	// (0x00017029) list_double_heading_pane_t2_cp2

0x68b4,	// (0x000113e8) aid_value_unit2

0x4f47,	// (0x0000fa7b) popup_preview_fixed_window

0x6c64,	// (0x00011798) bg_popup_preview_window_pane_cp02

0xc507,	// (0x0001703b) list_preview_fixed_pane

0xc54d,	// (0x00017081) list_empty_pane_fp_ParamLimits

0xc54d,	// (0x00017081) list_empty_pane_fp

0xc54d,	// (0x00017081) list_single_cale_day_pane_fp_ParamLimits

0xc54d,	// (0x00017081) list_single_cale_day_pane_fp

0xc54d,	// (0x00017081) list_single_graphic_heading_pane_fp_ParamLimits

0xc54d,	// (0x00017081) list_single_graphic_heading_pane_fp

0xc54d,	// (0x00017081) list_single_graphic_pane_fp_ParamLimits

0xc54d,	// (0x00017081) list_single_graphic_pane_fp

0xc54d,	// (0x00017081) list_single_heading_pane_fp_ParamLimits

0xc54d,	// (0x00017081) list_single_heading_pane_fp

0xc54d,	// (0x00017081) list_single_pane_fp_ParamLimits

0xc54d,	// (0x00017081) list_single_pane_fp

0xc566,	// (0x0001709a) list_single_pane_fp_g1_ParamLimits

0xc566,	// (0x0001709a) list_single_pane_fp_g1

0xc572,	// (0x000170a6) list_single_pane_fp_g2_ParamLimits

0xc572,	// (0x000170a6) list_single_pane_fp_g2

0xc57e,	// (0x000170b2) list_single_pane_fp_g3_ParamLimits

0xc57e,	// (0x000170b2) list_single_pane_fp_g3

0xc592,	// (0x000170c6) list_single_pane_fp_g4_ParamLimits

0xc592,	// (0x000170c6) list_single_pane_fp_g4

0x0003,

0xfb99,	// (0x0001a6cd) list_single_pane_fp_g_ParamLimits

0xfb99,	// (0x0001a6cd) list_single_pane_fp_g

0xc59e,	// (0x000170d2) list_single_pane_fp_t1_ParamLimits

0xc59e,	// (0x000170d2) list_single_pane_fp_t1

0xc5b5,	// (0x000170e9) list_single_graphic_pane_fp_g1_ParamLimits

0xc5b5,	// (0x000170e9) list_single_graphic_pane_fp_g1

0xc566,	// (0x0001709a) list_single_graphic_pane_fp_g2_ParamLimits

0xc566,	// (0x0001709a) list_single_graphic_pane_fp_g2

0xc572,	// (0x000170a6) list_single_graphic_pane_fp_g3_ParamLimits

0xc572,	// (0x000170a6) list_single_graphic_pane_fp_g3

0xc57e,	// (0x000170b2) list_single_graphic_pane_fp_g4_ParamLimits

0xc57e,	// (0x000170b2) list_single_graphic_pane_fp_g4

0xc592,	// (0x000170c6) list_single_graphic_pane_fp_g5_ParamLimits

0xc592,	// (0x000170c6) list_single_graphic_pane_fp_g5

0x0004,

0xfba2,	// (0x0001a6d6) list_single_graphic_pane_fp_g_ParamLimits

0xfba2,	// (0x0001a6d6) list_single_graphic_pane_fp_g

0xc5c1,	// (0x000170f5) list_single_graphic_pane_fp_t1_ParamLimits

0xc5c1,	// (0x000170f5) list_single_graphic_pane_fp_t1

0xc5b5,	// (0x000170e9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc5b5,	// (0x000170e9) list_single_graphic_heading_pane_fp_g1

0xc566,	// (0x0001709a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc566,	// (0x0001709a) list_single_graphic_heading_pane_fp_g2

0xc572,	// (0x000170a6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc572,	// (0x000170a6) list_single_graphic_heading_pane_fp_g3

0xc57e,	// (0x000170b2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc57e,	// (0x000170b2) list_single_graphic_heading_pane_fp_g4

0xc592,	// (0x000170c6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc592,	// (0x000170c6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0001a6d6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0001a6d6) list_single_graphic_heading_pane_fp_g

0xc5d7,	// (0x0001710b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc5d7,	// (0x0001710b) list_single_graphic_heading_pane_fp_t1

0xc5ed,	// (0x00017121) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc5ed,	// (0x00017121) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0001a6e1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0001a6e1) list_single_graphic_heading_pane_fp_t

0xc5ff,	// (0x00017133) list_single_cale_day_pane_fp_g1_ParamLimits

0xc5ff,	// (0x00017133) list_single_cale_day_pane_fp_g1

0xc637,	// (0x0001716b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc637,	// (0x0001716b) list_single_cale_day_pane_fp_g2

0xc643,	// (0x00017177) list_single_cale_day_pane_fp_g3_ParamLimits

0xc643,	// (0x00017177) list_single_cale_day_pane_fp_g3

0xc66b,	// (0x0001719f) list_single_cale_day_pane_fp_g4_ParamLimits

0xc66b,	// (0x0001719f) list_single_cale_day_pane_fp_g4

0xc68f,	// (0x000171c3) list_single_cale_day_pane_fp_g5_ParamLimits

0xc68f,	// (0x000171c3) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb2,	// (0x0001a6e6) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb2,	// (0x0001a6e6) list_single_cale_day_pane_fp_g

0xc6b3,	// (0x000171e7) list_single_cale_day_pane_fp_t1_ParamLimits

0xc6b3,	// (0x000171e7) list_single_cale_day_pane_fp_t1

0xc6d9,	// (0x0001720d) list_single_cale_day_pane_fp_t2_ParamLimits

0xc6d9,	// (0x0001720d) list_single_cale_day_pane_fp_t2

0xc6f2,	// (0x00017226) list_single_cale_day_pane_fp_t3_ParamLimits

0xc6f2,	// (0x00017226) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbd,	// (0x0001a6f1) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbd,	// (0x0001a6f1) list_single_cale_day_pane_fp_t

0xc566,	// (0x0001709a) list_empty_pane_fp_g1_ParamLimits

0xc566,	// (0x0001709a) list_empty_pane_fp_g1

0xc70b,	// (0x0001723f) list_empty_pane_fp_t1

0xc719,	// (0x0001724d) list_empty_pane_fp_t2

0x0001,

0xfbc4,	// (0x0001a6f8) list_empty_pane_fp_t

0xc566,	// (0x0001709a) list_single_heading_pane_fp_g1_ParamLimits

0xc566,	// (0x0001709a) list_single_heading_pane_fp_g1

0xc572,	// (0x000170a6) list_single_heading_pane_fp_g2_ParamLimits

0xc572,	// (0x000170a6) list_single_heading_pane_fp_g2

0xc57e,	// (0x000170b2) list_single_heading_pane_fp_g3_ParamLimits

0xc57e,	// (0x000170b2) list_single_heading_pane_fp_g3

0x0002,

0xfbc9,	// (0x0001a6fd) list_single_heading_pane_fp_g_ParamLimits

0xfbc9,	// (0x0001a6fd) list_single_heading_pane_fp_g

0xc727,	// (0x0001725b) list_single_heading_pane_fp_t1_ParamLimits

0xc727,	// (0x0001725b) list_single_heading_pane_fp_t1

0xc739,	// (0x0001726d) list_single_heading_pane_fp_t2_ParamLimits

0xc739,	// (0x0001726d) list_single_heading_pane_fp_t2

0x0001,

0xfbd0,	// (0x0001a704) list_single_heading_pane_fp_t_ParamLimits

0xfbd0,	// (0x0001a704) list_single_heading_pane_fp_t

0x7b73,	// (0x000126a7) aid_size_cell_fast

0x6bd6,	// (0x0001170a) soft_indicator_pane_cp1_t1

0x7bb0,	// (0x000126e4) cell_app_pane_cp2_ParamLimits

0x7bb0,	// (0x000126e4) cell_app_pane_cp2

0x5c11,	// (0x00010745) fep_hwr_candidate_drop_down_list_pane

0x5dff,	// (0x00010933) fep_hwr_candidate_pane_g3_ParamLimits

0x5dff,	// (0x00010933) fep_hwr_candidate_pane_g3

0x40ab,	// (0x0000ebdf) fep_hwr_candidate_pane_g4_ParamLimits

0x40ab,	// (0x0000ebdf) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001a673) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0001a673) fep_hwr_candidate_pane_g

0xc046,	// (0x00016b7a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc046,	// (0x00016b7a) fep_vkb_candidate_drop_down_list_pane

0xc47c,	// (0x00016fb0) fep_vkb_candidate_pane_g3

0xc484,	// (0x00016fb8) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0001a6a0) fep_vkb_candidate_pane_g

0x5e6a,	// (0x0001099e) cell_hwr_candidate_pane_g1_ParamLimits

0x5e78,	// (0x000109ac) cell_hwr_candidate_pane_g3_ParamLimits

0x5e78,	// (0x000109ac) cell_hwr_candidate_pane_g3

0xe0fc,	// (0x00018c30) cell_hwr_candidate_pane_g4_ParamLimits

0xe0fc,	// (0x00018c30) cell_hwr_candidate_pane_g4

0x0002,

0xfb8b,	// (0x0001a6bf) cell_hwr_candidate_pane_g_ParamLimits

0xfb8b,	// (0x0001a6bf) cell_hwr_candidate_pane_g

0xc49b,	// (0x00016fcf) cell_vkb_candidate_pane_g3_ParamLimits

0xc49b,	// (0x00016fcf) cell_vkb_candidate_pane_g3

0xc4b6,	// (0x00016fea) cell_vkb_candidate_pane_g4_ParamLimits

0xc4b6,	// (0x00016fea) cell_vkb_candidate_pane_g4

0xc74f,	// (0x00017283) cell_app_pane_cp2_g1_ParamLimits

0xc74f,	// (0x00017283) cell_app_pane_cp2_g1

0xc76d,	// (0x000172a1) cell_app_pane_cp2_g2_ParamLimits

0xc76d,	// (0x000172a1) cell_app_pane_cp2_g2

0x0001,

0xfbd5,	// (0x0001a709) cell_app_pane_cp2_g_ParamLimits

0xfbd5,	// (0x0001a709) cell_app_pane_cp2_g

0xc779,	// (0x000172ad) cell_app_pane_cp2_t1_ParamLimits

0xc779,	// (0x000172ad) cell_app_pane_cp2_t1

0x77fc,	// (0x00012330) grid_highlight_pane_cp1_ParamLimits

0x77fc,	// (0x00012330) grid_highlight_pane_cp1

0x5eb7,	// (0x000109eb) cell_hwr_candidate_pane_cp1_ParamLimits

0x5eb7,	// (0x000109eb) cell_hwr_candidate_pane_cp1

0x5e6a,	// (0x0001099e) fep_hwr_candidate_drop_down_list_pane_g1

0x5edb,	// (0x00010a0f) fep_hwr_candidate_drop_down_list_pane_g2

0x5ee8,	// (0x00010a1c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0001a70e) fep_hwr_candidate_drop_down_list_pane_g

0x5ef5,	// (0x00010a29) fep_hwr_candidate_drop_down_list_scroll_pane

0x5efe,	// (0x00010a32) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5efe,	// (0x00010a32) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5f0b,	// (0x00010a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5f0b,	// (0x00010a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5f18,	// (0x00010a4c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5f18,	// (0x00010a4c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5f25,	// (0x00010a59) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5f25,	// (0x00010a59) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5f40,	// (0x00010a74) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5f40,	// (0x00010a74) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5f5b,	// (0x00010a8f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5f5b,	// (0x00010a8f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5f76,	// (0x00010aaa) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5f76,	// (0x00010aaa) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5f91,	// (0x00010ac5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5f91,	// (0x00010ac5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0001a715) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0001a715) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc78b,	// (0x000172bf) cell_vkb_candidate_pane_cp1_ParamLimits

0xc78b,	// (0x000172bf) cell_vkb_candidate_pane_cp1

0xc14c,	// (0x00016c80) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc14c,	// (0x00016c80) fep_vkb_candidate_drop_down_list_pane_g1

0xc7b1,	// (0x000172e5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7b1,	// (0x000172e5) fep_vkb_candidate_drop_down_list_pane_g2

0xc7be,	// (0x000172f2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7be,	// (0x000172f2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf2,	// (0x0001a726) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf2,	// (0x0001a726) fep_vkb_candidate_drop_down_list_pane_g

0xc7cb,	// (0x000172ff) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7cb,	// (0x000172ff) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7d8,	// (0x0001730c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7d8,	// (0x0001730c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7e5,	// (0x00017319) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7e5,	// (0x00017319) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7f1,	// (0x00017325) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7f1,	// (0x00017325) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7fd,	// (0x00017331) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7fd,	// (0x00017331) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc81e,	// (0x00017352) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc81e,	// (0x00017352) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc83f,	// (0x00017373) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc83f,	// (0x00017373) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc860,	// (0x00017394) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc860,	// (0x00017394) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc881,	// (0x000173b5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc881,	// (0x000173b5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf9,	// (0x0001a72d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf9,	// (0x0001a72d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x68ea,	// (0x0001141e) title_pane_g1_ParamLimits

0x68f7,	// (0x0001142b) title_pane_g2_ParamLimits

0xf592,	// (0x0001a0c6) title_pane_g_ParamLimits

0x7fbe,	// (0x00012af2) aid_call2_pane

0x7fc6,	// (0x00012afa) aid_call_pane

0x7fce,	// (0x00012b02) popup_clock_analogue_window_g1

0x7fce,	// (0x00012b02) popup_clock_analogue_window_g2

0x52b9,	// (0x0000fded) popup_clock_analogue_window_g3

0x52c2,	// (0x0000fdf6) popup_clock_analogue_window_g4

0x68d6,	// (0x0001140a) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001a26b) popup_clock_analogue_window_g

0x52ca,	// (0x0000fdfe) popup_clock_analogue_window_t1

0x52d8,	// (0x0000fe0c) clock_digital_number_pane_ParamLimits

0x52d8,	// (0x0000fe0c) clock_digital_number_pane

0x52e4,	// (0x0000fe18) clock_digital_number_pane_cp02_ParamLimits

0x52e4,	// (0x0000fe18) clock_digital_number_pane_cp02

0x52f0,	// (0x0000fe24) clock_digital_number_pane_cp03_ParamLimits

0x52f0,	// (0x0000fe24) clock_digital_number_pane_cp03

0x52fc,	// (0x0000fe30) clock_digital_number_pane_cp04_ParamLimits

0x52fc,	// (0x0000fe30) clock_digital_number_pane_cp04

0x5308,	// (0x0000fe3c) clock_digital_separator_pane_ParamLimits

0x5308,	// (0x0000fe3c) clock_digital_separator_pane

0x5314,	// (0x0000fe48) popup_clock_digital_window_t1_ParamLimits

0x5314,	// (0x0000fe48) popup_clock_digital_window_t1

0x68d6,	// (0x0001140a) clock_digital_number_pane_g1

0x68d6,	// (0x0001140a) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001a276) clock_digital_number_pane_g

0x68d6,	// (0x0001140a) clock_digital_separator_pane_g1

0x68d6,	// (0x0001140a) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001a276) clock_digital_separator_pane_g

0x9011,	// (0x00013b45) aid_fill_nsta_ParamLimits

0x9161,	// (0x00013c95) indicator_nsta_pane_ParamLimits

0x92f1,	// (0x00013e25) popup_clock_analogue_window

0x92f1,	// (0x00013e25) popup_clock_digital_window

0x69c0,	// (0x000114f4) grid_indicator_nsta_pane_ParamLimits

0xb8c3,	// (0x000163f7) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0001a600) clock_nsta_pane_t

0x527d,	// (0x0000fdb1) aid_size_max_handle

0x5287,	// (0x0000fdbb) aid_size_min_handle

0x8648,	// (0x0001317c) editor_scroll_pane

0xc89c,	// (0x000173d0) ex_editor_pane

0x7ae0,	// (0x00012614) scroll_pane_cp13

0x7200,	// (0x00011d34) scroll_pane_cp14

0x7ff8,	// (0x00012b2c) scroll_pane_cp36

0x8026,	// (0x00012b5a) list_single_graphic_hl_pane_cp2_ParamLimits

0x8026,	// (0x00012b5a) list_single_graphic_hl_pane_cp2

0xac59,	// (0x0001578d) list_single_graphic_hl_pane_ParamLimits

0xac59,	// (0x0001578d) list_single_graphic_hl_pane

0xc8a4,	// (0x000173d8) aid_size_min_hl_cp1

0xc8ad,	// (0x000173e1) list_highlight_pane_cp34_ParamLimits

0xc8ad,	// (0x000173e1) list_highlight_pane_cp34

0xc8be,	// (0x000173f2) list_single_graphic_hl_pane_g1_ParamLimits

0xc8be,	// (0x000173f2) list_single_graphic_hl_pane_g1

0xc8cb,	// (0x000173ff) list_single_graphic_hl_pane_g2_ParamLimits

0xc8cb,	// (0x000173ff) list_single_graphic_hl_pane_g2

0xc8cb,	// (0x000173ff) list_single_graphic_hl_pane_g3_ParamLimits

0xc8cb,	// (0x000173ff) list_single_graphic_hl_pane_g3

0xb1a2,	// (0x00015cd6) list_single_graphic_hl_pane_g4_ParamLimits

0xb1a2,	// (0x00015cd6) list_single_graphic_hl_pane_g4

0xc8d7,	// (0x0001740b) list_single_graphic_hl_pane_g5_ParamLimits

0xc8d7,	// (0x0001740b) list_single_graphic_hl_pane_g5

0x0004,

0xfc0a,	// (0x0001a73e) list_single_graphic_hl_pane_g_ParamLimits

0xfc0a,	// (0x0001a73e) list_single_graphic_hl_pane_g

0xc8eb,	// (0x0001741f) list_single_graphic_hl_pane_t1_ParamLimits

0xc8eb,	// (0x0001741f) list_single_graphic_hl_pane_t1

0xc901,	// (0x00017435) aid_size_min_hl_cp2

0xc90a,	// (0x0001743e) list_highlight_pane_cp34_cp2_ParamLimits

0xc90a,	// (0x0001743e) list_highlight_pane_cp34_cp2

0xc8be,	// (0x000173f2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8be,	// (0x000173f2) list_single_graphic_hl_pane_g1_cp2

0xc917,	// (0x0001744b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc917,	// (0x0001744b) list_single_graphic_hl_pane_g2_cp2

0xc923,	// (0x00017457) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc923,	// (0x00017457) list_single_graphic_hl_pane_g3_cp2

0x7214,	// (0x00011d48) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7214,	// (0x00011d48) list_single_graphic_hl_pane_g4_cp2

0xc931,	// (0x00017465) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc931,	// (0x00017465) list_single_graphic_hl_pane_g5_cp2

0x55cd,	// (0x00010101) control_pane_g4_ParamLimits

0x55cd,	// (0x00010101) control_pane_g4

0x89d6,	// (0x0001350a) bg_popup_sub_pane_cp10_ParamLimits

0xbecc,	// (0x00016a00) list_choice_list_pane_ParamLimits

0xbedb,	// (0x00016a0f) scroll_pane_cp23

0x6c64,	// (0x00011798) bg_popup_preview_window_pane_cp02_ParamLimits

0xc507,	// (0x0001703b) list_preview_fixed_pane_ParamLimits

0xc51d,	// (0x00017051) list_preview_fixed_pane_cp_ParamLimits

0xc51d,	// (0x00017051) list_preview_fixed_pane_cp

0xc529,	// (0x0001705d) popup_preview_fixed_window_g1_ParamLimits

0xc529,	// (0x0001705d) popup_preview_fixed_window_g1

0xc535,	// (0x00017069) popup_preview_fixed_window_g2_ParamLimits

0xc535,	// (0x00017069) popup_preview_fixed_window_g2

0x0002,

0xfb92,	// (0x0001a6c6) popup_preview_fixed_window_g_ParamLimits

0xfb92,	// (0x0001a6c6) popup_preview_fixed_window_g

0x51ef,	// (0x0000fd23) aid_navi_side_left_pane_ParamLimits

0x5204,	// (0x0000fd38) aid_navi_side_right_pane_ParamLimits

0x521c,	// (0x0000fd50) navi_icon_pane_stacon_ParamLimits

0x5230,	// (0x0000fd64) navi_navi_pane_stacon_ParamLimits

0x521c,	// (0x0000fd50) navi_text_pane_stacon_ParamLimits

0x68cc,	// (0x00011400) main_text_info_pane

0xc95b,	// (0x0001748f) listscroll_text_info_pane

0xc963,	// (0x00017497) list_text_info_pane_ParamLimits

0xc963,	// (0x00017497) list_text_info_pane

0xc972,	// (0x000174a6) scroll_pane_cp24_ParamLimits

0xc972,	// (0x000174a6) scroll_pane_cp24

0xc990,	// (0x000174c4) list_text_info_pane_t1_ParamLimits

0xc990,	// (0x000174c4) list_text_info_pane_t1

0x8a24,	// (0x00013558) popup_fast_swap2_window_ParamLimits

0x8a24,	// (0x00013558) popup_fast_swap2_window

0xc9b5,	// (0x000174e9) aid_size_cell_fast2

0x68cc,	// (0x00011400) bg_popup_window_pane_cp17

0x9a2b,	// (0x0001455f) heading_pane_cp2

0x6ec4,	// (0x000119f8) listscroll_fast2_pane

0xc9bf,	// (0x000174f3) grid_fast2_pane

0xc9c9,	// (0x000174fd) listscroll_fast2_pane_g1

0xc9d3,	// (0x00017507) listscroll_fast2_pane_g2

0x0001,

0xfc15,	// (0x0001a749) listscroll_fast2_pane_g

0x7ae0,	// (0x00012614) scroll_pane_cp26

0xc9dd,	// (0x00017511) cell_fast2_pane_ParamLimits

0xc9dd,	// (0x00017511) cell_fast2_pane

0xc9f4,	// (0x00017528) cell_fast2_pane_g1

0xc9fd,	// (0x00017531) cell_fast2_pane_g2

0xca06,	// (0x0001753a) cell_fast2_pane_g3

0x0002,

0xfc1a,	// (0x0001a74e) cell_fast2_pane_g

0x6fbd,	// (0x00011af1) grid_highlight_pane_cp9

0x6fd2,	// (0x00011b06) main_eswt_pane_ParamLimits

0x6fd2,	// (0x00011b06) main_eswt_pane

0xc987,	// (0x000174bb) list_single_text_info_pane

0xca0e,	// (0x00017542) eswt_ctrl_button_pane

0xca0e,	// (0x00017542) eswt_ctrl_canvas_pane

0xca16,	// (0x0001754a) eswt_ctrl_combo_pane

0xca0e,	// (0x00017542) eswt_ctrl_default_pane

0xca0e,	// (0x00017542) eswt_ctrl_label_pane

0xca1e,	// (0x00017552) eswt_ctrl_wait_pane

0xca26,	// (0x0001755a) eswt_shell_pane

0x68cc,	// (0x00011400) listscroll_eswt_app_pane

0xca46,	// (0x0001757a) popup_eswt_tasktip_window_ParamLimits

0xca46,	// (0x0001757a) popup_eswt_tasktip_window

0x9664,	// (0x00014198) bg_popup_window_pane_cp18

0xca57,	// (0x0001758b) eswt_control_pane_g1_ParamLimits

0xca57,	// (0x0001758b) eswt_control_pane_g1

0xca64,	// (0x00017598) eswt_control_pane_g2_ParamLimits

0xca64,	// (0x00017598) eswt_control_pane_g2

0xca71,	// (0x000175a5) eswt_control_pane_g3_ParamLimits

0xca71,	// (0x000175a5) eswt_control_pane_g3

0xca7e,	// (0x000175b2) eswt_control_pane_g4_ParamLimits

0xca7e,	// (0x000175b2) eswt_control_pane_g4

0x0003,

0xfc21,	// (0x0001a755) eswt_control_pane_g_ParamLimits

0xfc21,	// (0x0001a755) eswt_control_pane_g

0x77fc,	// (0x00012330) bg_button_pane_ParamLimits

0x77fc,	// (0x00012330) bg_button_pane

0x6fd2,	// (0x00011b06) common_borders_pane_copy2_ParamLimits

0x6fd2,	// (0x00011b06) common_borders_pane_copy2

0xca8b,	// (0x000175bf) control_button_pane_g1_ParamLimits

0xca8b,	// (0x000175bf) control_button_pane_g1

0xca97,	// (0x000175cb) control_button_pane_g2_ParamLimits

0xca97,	// (0x000175cb) control_button_pane_g2

0xcaa3,	// (0x000175d7) control_button_pane_g3_ParamLimits

0xcaa3,	// (0x000175d7) control_button_pane_g3

0x0002,

0xfc2a,	// (0x0001a75e) control_button_pane_g_ParamLimits

0xfc2a,	// (0x0001a75e) control_button_pane_g

0xcab7,	// (0x000175eb) control_button_pane_t1

0xcac5,	// (0x000175f9) control_button_pane_t2

0x0001,

0xfc31,	// (0x0001a765) control_button_pane_t

0x9548,	// (0x0001407c) bg_button_pane_g1

0x9558,	// (0x0001408c) bg_button_pane_g2

0x9550,	// (0x00014084) bg_button_pane_g3

0x9568,	// (0x0001409c) bg_button_pane_g4

0x9560,	// (0x00014094) bg_button_pane_g5

0x9570,	// (0x000140a4) bg_button_pane_g6

0x9578,	// (0x000140ac) bg_button_pane_g7

0x9588,	// (0x000140bc) bg_button_pane_g8

0x9580,	// (0x000140b4) bg_button_pane_g9

0x0008,

0xf89a,	// (0x0001a3ce) bg_button_pane_g

0xbe87,	// (0x000169bb) common_borders_pane_ParamLimits

0xbe87,	// (0x000169bb) common_borders_pane

0xca57,	// (0x0001758b) eswt_control_pane_g1_copy1_ParamLimits

0xca57,	// (0x0001758b) eswt_control_pane_g1_copy1

0xca64,	// (0x00017598) eswt_control_pane_g2_copy1_ParamLimits

0xca64,	// (0x00017598) eswt_control_pane_g2_copy1

0xca71,	// (0x000175a5) eswt_control_pane_g3_copy1_ParamLimits

0xca71,	// (0x000175a5) eswt_control_pane_g3_copy1

0xca7e,	// (0x000175b2) eswt_control_pane_g4_copy1_ParamLimits

0xca7e,	// (0x000175b2) eswt_control_pane_g4_copy1

0xbec2,	// (0x000169f6) bg_eswt_ctrl_canvas_pane_g1

0xbe87,	// (0x000169bb) common_borders_pane_cp2_ParamLimits

0xbe87,	// (0x000169bb) common_borders_pane_cp2

0xbe87,	// (0x000169bb) common_borders_pane_cp3_ParamLimits

0xbe87,	// (0x000169bb) common_borders_pane_cp3

0xcad3,	// (0x00017607) separator_horizontal_pane

0xcadb,	// (0x0001760f) separator_vertical_pane

0xca57,	// (0x0001758b) eswt_control_pane_g1_copy2_ParamLimits

0xca57,	// (0x0001758b) eswt_control_pane_g1_copy2

0xca64,	// (0x00017598) eswt_control_pane_g2_copy2_ParamLimits

0xca64,	// (0x00017598) eswt_control_pane_g2_copy2

0xca71,	// (0x000175a5) eswt_control_pane_g3_copy2_ParamLimits

0xca71,	// (0x000175a5) eswt_control_pane_g3_copy2

0xca7e,	// (0x000175b2) eswt_control_pane_g4_copy2_ParamLimits

0xca7e,	// (0x000175b2) eswt_control_pane_g4_copy2

0x68cc,	// (0x00011400) common_borders_pane_cp4

0xcae4,	// (0x00017618) separator_horizontal_pane_g1

0xcaed,	// (0x00017621) separator_horizontal_pane_g2

0xcaf6,	// (0x0001762a) separator_horizontal_pane_g3

0x0002,

0xfc36,	// (0x0001a76a) separator_horizontal_pane_g

0xca57,	// (0x0001758b) eswt_control_pane_g1_copy3_ParamLimits

0xca57,	// (0x0001758b) eswt_control_pane_g1_copy3

0xca64,	// (0x00017598) eswt_control_pane_g2_copy3_ParamLimits

0xca64,	// (0x00017598) eswt_control_pane_g2_copy3

0xca71,	// (0x000175a5) eswt_control_pane_g3_copy3_ParamLimits

0xca71,	// (0x000175a5) eswt_control_pane_g3_copy3

0xca7e,	// (0x000175b2) eswt_control_pane_g4_copy3_ParamLimits

0xca7e,	// (0x000175b2) eswt_control_pane_g4_copy3

0x68cc,	// (0x00011400) common_borders_pane_cp5

0xcaff,	// (0x00017633) separator_vertical_pane_g1

0xcb08,	// (0x0001763c) separator_vertical_pane_g2

0xcb11,	// (0x00017645) separator_vertical_pane_g3

0x0002,

0xfc3d,	// (0x0001a771) separator_vertical_pane_g

0xca57,	// (0x0001758b) eswt_control_pane_g1_copy4_ParamLimits

0xca57,	// (0x0001758b) eswt_control_pane_g1_copy4

0xca64,	// (0x00017598) eswt_control_pane_g2_copy4_ParamLimits

0xca64,	// (0x00017598) eswt_control_pane_g2_copy4

0xca71,	// (0x000175a5) eswt_control_pane_g3_copy4_ParamLimits

0xca71,	// (0x000175a5) eswt_control_pane_g3_copy4

0xca7e,	// (0x000175b2) eswt_control_pane_g4_copy4_ParamLimits

0xca7e,	// (0x000175b2) eswt_control_pane_g4_copy4

0xcb1a,	// (0x0001764e) eswt_ctrl_combo_button_pane

0xcb22,	// (0x00017656) eswt_ctrl_input_pane

0xcb2a,	// (0x0001765e) popup_choice_list_window_cp70

0xcb32,	// (0x00017666) eswt_ctrl_input_pane_t1

0x68cc,	// (0x00011400) input_focus_pane_cp70

0xbe87,	// (0x000169bb) bg_button_pane_cp70_ParamLimits

0xbe87,	// (0x000169bb) bg_button_pane_cp70

0xcb40,	// (0x00017674) eswt_ctrl_combo_button_pane_g1

0xcb48,	// (0x0001767c) wait_bar_pane_cp70

0x9664,	// (0x00014198) bg_popup_window_pane_cp70_ParamLimits

0x9664,	// (0x00014198) bg_popup_window_pane_cp70

0xcb50,	// (0x00017684) popup_eswt_tasktip_window_t1

0xcb66,	// (0x0001769a) wait_bar_pane_cp71_ParamLimits

0xcb66,	// (0x0001769a) wait_bar_pane_cp71

0xcb72,	// (0x000176a6) grid_eswt_app_pane

0x7e02,	// (0x00012936) scroll_pane_cp70

0xcb7b,	// (0x000176af) cell_eswt_app_pane_ParamLimits

0xcb7b,	// (0x000176af) cell_eswt_app_pane

0xcbad,	// (0x000176e1) cell_eswt_app_pane_g1_ParamLimits

0xcbad,	// (0x000176e1) cell_eswt_app_pane_g1

0xcbdc,	// (0x00017710) cell_eswt_app_pane_g2_ParamLimits

0xcbdc,	// (0x00017710) cell_eswt_app_pane_g2

0x0001,

0xfc44,	// (0x0001a778) cell_eswt_app_pane_g_ParamLimits

0xfc44,	// (0x0001a778) cell_eswt_app_pane_g

0xcc05,	// (0x00017739) cell_eswt_app_pane_t1_ParamLimits

0xcc05,	// (0x00017739) cell_eswt_app_pane_t1

0xcc37,	// (0x0001776b) grid_highlight_pane_cp70_ParamLimits

0xcc37,	// (0x0001776b) grid_highlight_pane_cp70

0xab1b,	// (0x0001564f) set_content_pane_g1

0x88f8,	// (0x0001342c) status_small_volume_pane

0x5fac,	// (0x00010ae0) status_small_volume_pane_g1

0x5fb4,	// (0x00010ae8) volume_small2_pane

0x5fbd,	// (0x00010af1) volume_small2_pane_g1

0x5fc6,	// (0x00010afa) volume_small2_pane_g2

0x5fcf,	// (0x00010b03) volume_small2_pane_g3

0x5fd8,	// (0x00010b0c) volume_small2_pane_g4

0x5fe1,	// (0x00010b15) volume_small2_pane_g5

0x5fea,	// (0x00010b1e) volume_small2_pane_g6

0x5ff3,	// (0x00010b27) volume_small2_pane_g7

0x5ffc,	// (0x00010b30) volume_small2_pane_g8

0x6005,	// (0x00010b39) volume_small2_pane_g9

0x600e,	// (0x00010b42) volume_small2_pane_g10

0x0009,

0xfc49,	// (0x0001a77d) volume_small2_pane_g

0xc2ae,	// (0x00016de2) fep_vkb_top_text_pane_g1_ParamLimits

0xc2c9,	// (0x00016dfd) fep_vkb_top_text_pane_t1_ParamLimits

0xc541,	// (0x00017075) popup_preview_fixed_window_g3_ParamLimits

0xc541,	// (0x00017075) popup_preview_fixed_window_g3

0x8f35,	// (0x00013a69) popup_toolbar_trans_pane

0xa9c0,	// (0x000154f4) aid_height_set_list_ParamLimits

0xa9d1,	// (0x00015505) aid_size_parent_ParamLimits

0x89d6,	// (0x0001350a) list_highlight_pane_cp2_ParamLimits

0xab1b,	// (0x0001564f) set_content_pane_g1_ParamLimits

0xac6d,	// (0x000157a1) list_single_image_pane_ParamLimits

0xac6d,	// (0x000157a1) list_single_image_pane

0xcc43,	// (0x00017777) aid_size_cell_image_ParamLimits

0xcc43,	// (0x00017777) aid_size_cell_image

0xcc50,	// (0x00017784) grid_single_image_pane_ParamLimits

0xcc50,	// (0x00017784) grid_single_image_pane

0x7822,	// (0x00012356) list_single_image_pane_g1_ParamLimits

0x7822,	// (0x00012356) list_single_image_pane_g1

0x782e,	// (0x00012362) list_single_image_pane_g2_ParamLimits

0x782e,	// (0x00012362) list_single_image_pane_g2

0x0001,

0xfc5e,	// (0x0001a792) list_single_image_pane_g_ParamLimits

0xfc5e,	// (0x0001a792) list_single_image_pane_g

0xcc5e,	// (0x00017792) list_single_image_pane_t1_ParamLimits

0xcc5e,	// (0x00017792) list_single_image_pane_t1

0xcc74,	// (0x000177a8) cell_image_list_pane_ParamLimits

0xcc74,	// (0x000177a8) cell_image_list_pane

0xcc8a,	// (0x000177be) cell_image_list_pane_g1

0xcc93,	// (0x000177c7) cell_image_list_pane_g2

0x0001,

0xfc63,	// (0x0001a797) cell_image_list_pane_g

0xcc9c,	// (0x000177d0) aid_size_cell_tb_trans_pane

0x77fc,	// (0x00012330) bg_tb_trans_pane

0xccae,	// (0x000177e2) grid_tb_trans_pane

0x9548,	// (0x0001407c) bg_tb_trans_pane_g1

0x9558,	// (0x0001408c) bg_tb_trans_pane_g2

0x9550,	// (0x00014084) bg_tb_trans_pane_g3

0x9568,	// (0x0001409c) bg_tb_trans_pane_g4

0x9560,	// (0x00014094) bg_tb_trans_pane_g5

0x9588,	// (0x000140bc) bg_tb_trans_pane_g6

0x9580,	// (0x000140b4) bg_tb_trans_pane_g7

0x9570,	// (0x000140a4) bg_tb_trans_pane_g8

0x9578,	// (0x000140ac) bg_tb_trans_pane_g9

0x0008,

0xfc68,	// (0x0001a79c) bg_tb_trans_pane_g

0xccc2,	// (0x000177f6) cell_toolbar_trans_pane_ParamLimits

0xccc2,	// (0x000177f6) cell_toolbar_trans_pane

0xbec2,	// (0x000169f6) cell_toolbar_trans_pane_g1

0xba8d,	// (0x000165c1) list_form2_midp_pane_t1

0xba9b,	// (0x000165cf) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0001a639) list_form2_midp_pane_t

0xbaa9,	// (0x000165dd) scroll_pane_cp51_ParamLimits

0xbcc6,	// (0x000167fa) form2_midp_wait_pane_g1

0xbccf,	// (0x00016803) form2_midp_wait_pane_g2

0xbcd8,	// (0x0001680c) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0001a64e) form2_midp_wait_pane_g

0x69c0,	// (0x000114f4) list_highlight_pane_cp21_ParamLimits

0xbd1c,	// (0x00016850) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd2b,	// (0x0001685f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xac12,	// (0x00015746) list_single_2graphic_im_pane_ParamLimits

0xac12,	// (0x00015746) list_single_2graphic_im_pane

0xcce8,	// (0x0001781c) list_single_2graphic_im_pane_g1_ParamLimits

0xcce8,	// (0x0001781c) list_single_2graphic_im_pane_g1

0xccf9,	// (0x0001782d) list_single_2graphic_im_pane_g2_ParamLimits

0xccf9,	// (0x0001782d) list_single_2graphic_im_pane_g2

0xcd05,	// (0x00017839) list_single_2graphic_im_pane_g3_ParamLimits

0xcd05,	// (0x00017839) list_single_2graphic_im_pane_g3

0x0003,

0xfc7b,	// (0x0001a7af) list_single_2graphic_im_pane_g_ParamLimits

0xfc7b,	// (0x0001a7af) list_single_2graphic_im_pane_g

0xcd25,	// (0x00017859) list_single_2graphic_im_pane_t1_ParamLimits

0xcd25,	// (0x00017859) list_single_2graphic_im_pane_t1

0xc54d,	// (0x00017081) list_single_graphic_2heading_pane_fp_ParamLimits

0xc54d,	// (0x00017081) list_single_graphic_2heading_pane_fp

0xc5b5,	// (0x000170e9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc5b5,	// (0x000170e9) list_single_graphic_2heading_pane_fp_g1

0xc566,	// (0x0001709a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc566,	// (0x0001709a) list_single_graphic_2heading_pane_fp_g2

0xc572,	// (0x000170a6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc572,	// (0x000170a6) list_single_graphic_2heading_pane_fp_g3

0xc57e,	// (0x000170b2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc57e,	// (0x000170b2) list_single_graphic_2heading_pane_fp_g4

0xc592,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc592,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0001a6d6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0001a6d6) list_single_graphic_2heading_pane_fp_g

0xcd56,	// (0x0001788a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd56,	// (0x0001788a) list_single_graphic_2heading_pane_fp_t1

0xc5ed,	// (0x00017121) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc5ed,	// (0x00017121) list_single_graphic_2heading_pane_fp_t2

0xcd6c,	// (0x000178a0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcd6c,	// (0x000178a0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc84,	// (0x0001a7b8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc84,	// (0x0001a7b8) list_single_graphic_2heading_pane_fp_t

0xbf62,	// (0x00016a96) fep_hwr_write_pane_g5_ParamLimits

0xbf62,	// (0x00016a96) fep_hwr_write_pane_g5

0xbf6e,	// (0x00016aa2) fep_hwr_write_pane_g6_ParamLimits

0xbf6e,	// (0x00016aa2) fep_hwr_write_pane_g6

0xca26,	// (0x0001755a) eswt_shell_pane_ParamLimits

0x9664,	// (0x00014198) bg_popup_window_pane_cp18_ParamLimits

0xa8ef,	// (0x00015423) heading_pane_cp70

0xcb50,	// (0x00017684) popup_eswt_tasktip_window_t1_ParamLimits

0x9068,	// (0x00013b9c) aid_touch_tab_arrow_left

0x9077,	// (0x00013bab) aid_touch_tab_arrow_right

0x6908,	// (0x0001143c) title_pane_g3_ParamLimits

0x6908,	// (0x0001143c) title_pane_g3

0x76cb,	// (0x000121ff) set_value_pane_g1

0x8f35,	// (0x00013a69) popup_toolbar_trans_pane_ParamLimits

0xcc9c,	// (0x000177d0) aid_size_cell_tb_trans_pane_ParamLimits

0x77fc,	// (0x00012330) bg_tb_trans_pane_ParamLimits

0xccae,	// (0x000177e2) grid_tb_trans_pane_ParamLimits

0x6c64,	// (0x00011798) cont_note_pane_ParamLimits

0x6c64,	// (0x00011798) cont_note_pane

0x6fd2,	// (0x00011b06) cont_snote2_single_text_pane_ParamLimits

0x6fd2,	// (0x00011b06) cont_snote2_single_text_pane

0x6fd2,	// (0x00011b06) cont_snote2_single_graphic_pane_ParamLimits

0x6fd2,	// (0x00011b06) cont_snote2_single_graphic_pane

0x9c16,	// (0x0001474a) cont_note_wait_pane_ParamLimits

0x9c16,	// (0x0001474a) cont_note_wait_pane

0x9c16,	// (0x0001474a) cont_note_image_pane_ParamLimits

0x9c16,	// (0x0001474a) cont_note_image_pane

0xcd82,	// (0x000178b6) popup_note2_window_g1_ParamLimits

0xcd82,	// (0x000178b6) popup_note2_window_g1

0xcdb3,	// (0x000178e7) popup_note2_window_t1_ParamLimits

0xcdb3,	// (0x000178e7) popup_note2_window_t1

0xcdf8,	// (0x0001792c) popup_note2_window_t2_ParamLimits

0xcdf8,	// (0x0001792c) popup_note2_window_t2

0xce3d,	// (0x00017971) popup_note2_window_t3_ParamLimits

0xce3d,	// (0x00017971) popup_note2_window_t3

0xce82,	// (0x000179b6) popup_note2_window_t4_ParamLimits

0xce82,	// (0x000179b6) popup_note2_window_t4

0x6ce8,	// (0x0001181c) popup_note2_window_t5_ParamLimits

0x6ce8,	// (0x0001181c) popup_note2_window_t5

0x0004,

0xfc90,	// (0x0001a7c4) popup_note2_window_t_ParamLimits

0xfc90,	// (0x0001a7c4) popup_note2_window_t

0xceb1,	// (0x000179e5) popup_note2_image_window_g1_ParamLimits

0xceb1,	// (0x000179e5) popup_note2_image_window_g1

0xcebd,	// (0x000179f1) popup_note2_image_window_g2_ParamLimits

0xcebd,	// (0x000179f1) popup_note2_image_window_g2

0x0001,

0xfc9b,	// (0x0001a7cf) popup_note2_image_window_g_ParamLimits

0xfc9b,	// (0x0001a7cf) popup_note2_image_window_g

0xcecf,	// (0x00017a03) popup_note2_image_window_t1_ParamLimits

0xcecf,	// (0x00017a03) popup_note2_image_window_t1

0xcee7,	// (0x00017a1b) popup_note2_image_window_t2_ParamLimits

0xcee7,	// (0x00017a1b) popup_note2_image_window_t2

0xceff,	// (0x00017a33) popup_note2_image_window_t3_ParamLimits

0xceff,	// (0x00017a33) popup_note2_image_window_t3

0x0002,

0xfca0,	// (0x0001a7d4) popup_note2_image_window_t_ParamLimits

0xfca0,	// (0x0001a7d4) popup_note2_image_window_t

0x9c24,	// (0x00014758) popup_note2_wait_window_g1_ParamLimits

0x9c24,	// (0x00014758) popup_note2_wait_window_g1

0xcf1b,	// (0x00017a4f) popup_note2_wait_window_g2_ParamLimits

0xcf1b,	// (0x00017a4f) popup_note2_wait_window_g2

0x9c3c,	// (0x00014770) popup_note2_wait_window_g3_ParamLimits

0x9c3c,	// (0x00014770) popup_note2_wait_window_g3

0x0002,

0xfca7,	// (0x0001a7db) popup_note2_wait_window_g_ParamLimits

0xfca7,	// (0x0001a7db) popup_note2_wait_window_g

0xcf27,	// (0x00017a5b) popup_note2_wait_window_t1_ParamLimits

0xcf27,	// (0x00017a5b) popup_note2_wait_window_t1

0xcf45,	// (0x00017a79) popup_note2_wait_window_t2_ParamLimits

0xcf45,	// (0x00017a79) popup_note2_wait_window_t2

0xcf63,	// (0x00017a97) popup_note2_wait_window_t3_ParamLimits

0xcf63,	// (0x00017a97) popup_note2_wait_window_t3

0xcf75,	// (0x00017aa9) popup_note2_wait_window_t4_ParamLimits

0xcf75,	// (0x00017aa9) popup_note2_wait_window_t4

0x0003,

0xfcae,	// (0x0001a7e2) popup_note2_wait_window_t_ParamLimits

0xfcae,	// (0x0001a7e2) popup_note2_wait_window_t

0xcf87,	// (0x00017abb) wait_bar2_pane_ParamLimits

0xcf87,	// (0x00017abb) wait_bar2_pane

0xcf9f,	// (0x00017ad3) popup_snote2_single_text_window_g1_ParamLimits

0xcf9f,	// (0x00017ad3) popup_snote2_single_text_window_g1

0xcfc7,	// (0x00017afb) popup_snote2_single_text_window_t1_ParamLimits

0xcfc7,	// (0x00017afb) popup_snote2_single_text_window_t1

0xd013,	// (0x00017b47) popup_snote2_single_text_window_t2_ParamLimits

0xd013,	// (0x00017b47) popup_snote2_single_text_window_t2

0xd05f,	// (0x00017b93) popup_snote2_single_text_window_t3_ParamLimits

0xd05f,	// (0x00017b93) popup_snote2_single_text_window_t3

0xd0a0,	// (0x00017bd4) popup_snote2_single_text_window_t4_ParamLimits

0xd0a0,	// (0x00017bd4) popup_snote2_single_text_window_t4

0xd0d6,	// (0x00017c0a) popup_snote2_single_text_window_t5_ParamLimits

0xd0d6,	// (0x00017c0a) popup_snote2_single_text_window_t5

0x0004,

0xfcb7,	// (0x0001a7eb) popup_snote2_single_text_window_t_ParamLimits

0xfcb7,	// (0x0001a7eb) popup_snote2_single_text_window_t

0xd101,	// (0x00017c35) popup_snote2_single_graphic_window_g1_ParamLimits

0xd101,	// (0x00017c35) popup_snote2_single_graphic_window_g1

0xd129,	// (0x00017c5d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd129,	// (0x00017c5d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc2,	// (0x0001a7f6) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc2,	// (0x0001a7f6) popup_snote2_single_graphic_window_g

0xd151,	// (0x00017c85) popup_snote2_single_graphic_window_t1_ParamLimits

0xd151,	// (0x00017c85) popup_snote2_single_graphic_window_t1

0xd19d,	// (0x00017cd1) popup_snote2_single_graphic_window_t2_ParamLimits

0xd19d,	// (0x00017cd1) popup_snote2_single_graphic_window_t2

0xd05f,	// (0x00017b93) popup_snote2_single_graphic_window_t3_ParamLimits

0xd05f,	// (0x00017b93) popup_snote2_single_graphic_window_t3

0xd0a0,	// (0x00017bd4) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a0,	// (0x00017bd4) popup_snote2_single_graphic_window_t4

0xd0d6,	// (0x00017c0a) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0d6,	// (0x00017c0a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc7,	// (0x0001a7fb) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc7,	// (0x0001a7fb) popup_snote2_single_graphic_window_t

0xb953,	// (0x00016487) clock_nsta_pane_cp2_t1

0xb953,	// (0x00016487) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0001a60f) clock_nsta_pane_cp2_t

0x7816,	// (0x0001234a) form_field_data_wide_pane_g1_ParamLimits

0x7822,	// (0x00012356) form_field_data_wide_pane_g2_ParamLimits

0x7822,	// (0x00012356) form_field_data_wide_pane_g2

0x782e,	// (0x00012362) form_field_data_wide_pane_g3_ParamLimits

0x782e,	// (0x00012362) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001a1ee) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001a1ee) form_field_data_wide_pane_g

0xb85f,	// (0x00016393) grid_touch_3_pane_ParamLimits

0xb85f,	// (0x00016393) grid_touch_3_pane

0xd1e9,	// (0x00017d1d) cell_touch_3_pane_ParamLimits

0xd1e9,	// (0x00017d1d) cell_touch_3_pane

0xbec2,	// (0x000169f6) cell_touch_3_pane_g1

0xbec2,	// (0x000169f6) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0001a694) cell_touch_3_pane_g

0x6d1a,	// (0x0001184e) cont_query_data_pane

0x6d22,	// (0x00011856) cont_query_data_pane_cp1

0xd21c,	// (0x00017d50) button_value_adjust_pane_cp7

0xd224,	// (0x00017d58) query_popup_pane_cp3

0x8098,	// (0x00012bcc) bg_popup_sub_pane_cp22_ParamLimits

0x5333,	// (0x0000fe67) navi_navi_volume_pane_cp2

0x534e,	// (0x0000fe82) popup_side_volume_key_window_g2

0x535d,	// (0x0000fe91) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001a280) popup_side_volume_key_window_g

0x537a,	// (0x0000feae) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001a287) popup_side_volume_key_window_t

0x83df,	// (0x00012f13) popup_side_volume_key_window_ParamLimits

0x73e5,	// (0x00011f19) list_double_graphic_pane_g4_ParamLimits

0x73e5,	// (0x00011f19) list_double_graphic_pane_g4

0xac41,	// (0x00015775) list_single_2heading_msg_pane_ParamLimits

0xac41,	// (0x00015775) list_single_2heading_msg_pane

0xd255,	// (0x00017d89) list_single_2heading_msg_pane_g1_ParamLimits

0xd255,	// (0x00017d89) list_single_2heading_msg_pane_g1

0x7214,	// (0x00011d48) list_single_2heading_msg_pane_g2_ParamLimits

0x7214,	// (0x00011d48) list_single_2heading_msg_pane_g2

0xd261,	// (0x00017d95) list_single_2heading_msg_pane_g3_ParamLimits

0xd261,	// (0x00017d95) list_single_2heading_msg_pane_g3

0xd26d,	// (0x00017da1) list_single_2heading_msg_pane_g4_ParamLimits

0xd26d,	// (0x00017da1) list_single_2heading_msg_pane_g4

0x0003,

0xfcd2,	// (0x0001a806) list_single_2heading_msg_pane_g_ParamLimits

0xfcd2,	// (0x0001a806) list_single_2heading_msg_pane_g

0xd285,	// (0x00017db9) list_single_2heading_msg_pane_t1_ParamLimits

0xd285,	// (0x00017db9) list_single_2heading_msg_pane_t1

0xd2ad,	// (0x00017de1) list_single_2heading_msg_pane_t2_ParamLimits

0xd2ad,	// (0x00017de1) list_single_2heading_msg_pane_t2

0xd2dc,	// (0x00017e10) list_single_2heading_msg_pane_t3_ParamLimits

0xd2dc,	// (0x00017e10) list_single_2heading_msg_pane_t3

0xd315,	// (0x00017e49) list_single_2heading_msg_pane_t4_ParamLimits

0xd315,	// (0x00017e49) list_single_2heading_msg_pane_t4

0x0003,

0xfcdb,	// (0x0001a80f) list_single_2heading_msg_pane_t_ParamLimits

0xfcdb,	// (0x0001a80f) list_single_2heading_msg_pane_t

0x6914,	// (0x00011448) title_pane_g4_ParamLimits

0x6914,	// (0x00011448) title_pane_g4

0x513f,	// (0x0000fc73) title_pane_stacon_g3_ParamLimits

0x513f,	// (0x0000fc73) title_pane_stacon_g3

0xcd19,	// (0x0001784d) list_single_2graphic_im_pane_g4_ParamLimits

0xcd19,	// (0x0001784d) list_single_2graphic_im_pane_g4

0xa68c,	// (0x000151c0) popup_side_volume_key_window_cp

0xaf8b,	// (0x00015abf) main_idle_act2_pane_t1

0x5774,	// (0x000102a8) toolbar_button_pane_g10

0x71ca,	// (0x00011cfe) popup_toolbar_window_cp1

0xb944,	// (0x00016478) clock_nsta_pane_cp_t1

0xb944,	// (0x00016478) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0001a60a) clock_nsta_pane_cp_t

0x5333,	// (0x0000fe67) navi_navi_volume_pane_cp2_ParamLimits

0x5342,	// (0x0000fe76) popup_side_volume_key_window_g1_ParamLimits

0x534e,	// (0x0000fe82) popup_side_volume_key_window_g2_ParamLimits

0x535d,	// (0x0000fe91) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001a280) popup_side_volume_key_window_g_ParamLimits

0x5bfd,	// (0x00010731) fep_hwr_aid_pane

0x5ca6,	// (0x000107da) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf32,	// (0x00016a66) fep_hwr_top_pane_g1_ParamLimits

0xbf44,	// (0x00016a78) fep_hwr_top_pane_g2_ParamLimits

0x5cc6,	// (0x000107fa) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0001a65f) fep_hwr_top_pane_g_ParamLimits

0x5cdb,	// (0x0001080f) fep_hwr_top_text_pane_ParamLimits

0xa441,	// (0x00014f75) aid_touch_tab_arrow_arrow_2

0xa44a,	// (0x00014f7e) aid_touch_tab_arrow_left_2

0x5c11,	// (0x00010745) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5c48,	// (0x0001077c) fep_hwr_prediction_pane

0xc09a,	// (0x00016bce) fep_vkb_prediction_pane

0xc1a0,	// (0x00016cd4) fep_vkb_side_pane_g3_ParamLimits

0xc1a0,	// (0x00016cd4) fep_vkb_side_pane_g3

0x5e6a,	// (0x0001099e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5edb,	// (0x00010a0f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5ee8,	// (0x00010a1c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbda,	// (0x0001a70e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6017,	// (0x00010b4b) fep_hwr_prediction_pane_g1

0x6021,	// (0x00010b55) fep_hwr_prediction_pane_g2

0x6029,	// (0x00010b5d) fep_hwr_prediction_pane_g3

0x6031,	// (0x00010b65) fep_hwr_prediction_pane_g4

0x0003,

0xfce4,	// (0x0001a818) fep_hwr_prediction_pane_g

0xd33a,	// (0x00017e6e) fep_vkb_prediction_pane_g1

0xd344,	// (0x00017e78) fep_vkb_prediction_pane_g2

0xd34c,	// (0x00017e80) fep_vkb_prediction_pane_g3

0xd354,	// (0x00017e88) fep_vkb_prediction_pane_g4

0x0003,

0xfced,	// (0x0001a821) fep_vkb_prediction_pane_g

0x5a7d,	// (0x000105b1) slider_set_pane_g3

0x5a91,	// (0x000105c5) slider_set_pane_g4

0x5aa9,	// (0x000105dd) slider_set_pane_g5

0x5a7d,	// (0x000105b1) slider_set_pane_g6

0x5abf,	// (0x000105f3) slider_set_pane_g7

0xab62,	// (0x00015696) slider_form_pane_g3

0xab6b,	// (0x0001569f) slider_form_pane_g4

0xab73,	// (0x000156a7) slider_form_pane_g5

0xab62,	// (0x00015696) slider_form_pane_g6

0xab7b,	// (0x000156af) slider_form_pane_g7

0xb285,	// (0x00015db9) slider_set_pane_vc_g3

0xb28e,	// (0x00015dc2) slider_set_pane_vc_g4

0xb297,	// (0x00015dcb) slider_set_pane_vc_g5

0xb285,	// (0x00015db9) slider_set_pane_vc_g6

0xb2a0,	// (0x00015dd4) slider_set_pane_vc_g7

0xb285,	// (0x00015db9) slider_form_pane_vc_g1

0xb28e,	// (0x00015dc2) slider_form_pane_vc_g2

0xb297,	// (0x00015dcb) slider_form_pane_vc_g3

0xb285,	// (0x00015db9) slider_form_pane_vc_g4

0xb669,	// (0x0001619d) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0001a5f0) slider_form_pane_vc_g

0x68cc,	// (0x00011400) main_idle_act3_pane

0xd35c,	// (0x00017e90) ai3_links_pane

0xd365,	// (0x00017e99) popup_ai3_data_window_ParamLimits

0xd365,	// (0x00017e99) popup_ai3_data_window

0x68cc,	// (0x00011400) grid_ai3_links_pane

0xd383,	// (0x00017eb7) cell_ai3_links_pane_ParamLimits

0xd383,	// (0x00017eb7) cell_ai3_links_pane

0xd39d,	// (0x00017ed1) bg_popup_sub_pane_cp11

0xd3aa,	// (0x00017ede) cell_ai3_links_pane_g1

0x68cc,	// (0x00011400) bg_popup_sub_pane_cp12

0xd3cf,	// (0x00017f03) heading_ai3_data_pane

0xd3d7,	// (0x00017f0b) list_ai3_gene_pane

0xd3e3,	// (0x00017f17) popup_ai3_data_window_g1

0xd3eb,	// (0x00017f1f) heading_ai3_data_pane_g1

0xd3f3,	// (0x00017f27) heading_ai3_data_pane_t1

0xd401,	// (0x00017f35) list_double_ai3_gene_pane_ParamLimits

0xd401,	// (0x00017f35) list_double_ai3_gene_pane

0xd40e,	// (0x00017f42) list_single_ai3_gene_pane_ParamLimits

0xd40e,	// (0x00017f42) list_single_ai3_gene_pane

0xbe87,	// (0x000169bb) list_highlight_pane_cp7_ParamLimits

0xbe87,	// (0x000169bb) list_highlight_pane_cp7

0xd41b,	// (0x00017f4f) list_single_a13_gene_pane_t1_ParamLimits

0xd41b,	// (0x00017f4f) list_single_a13_gene_pane_t1

0xd432,	// (0x00017f66) list_single_ai3_gene_pane_g1

0xd43b,	// (0x00017f6f) list_single_ai3_gene_pane_g2

0x0001,

0xfcf6,	// (0x0001a82a) list_single_ai3_gene_pane_g

0xd443,	// (0x00017f77) list_double_ai3_gene_pane_g1_ParamLimits

0xd443,	// (0x00017f77) list_double_ai3_gene_pane_g1

0xd44f,	// (0x00017f83) list_double_ai3_gene_pane_t1_ParamLimits

0xd44f,	// (0x00017f83) list_double_ai3_gene_pane_t1

0xd46b,	// (0x00017f9f) list_double_ai3_gene_pane_t2_ParamLimits

0xd46b,	// (0x00017f9f) list_double_ai3_gene_pane_t2

0xd480,	// (0x00017fb4) list_double_ai3_gene_pane_t3_ParamLimits

0xd480,	// (0x00017fb4) list_double_ai3_gene_pane_t3

0x0002,

0xfcfb,	// (0x0001a82f) list_double_ai3_gene_pane_t_ParamLimits

0xfcfb,	// (0x0001a82f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd235,	// (0x00017d69) aid_size_min_col_2

0xd23f,	// (0x00017d73) aid_size_min_msg_ParamLimits

0xd23f,	// (0x00017d73) aid_size_min_msg

0xc2ba,	// (0x00016dee) fep_vkb_top_text_pane_g2_ParamLimits

0xc2ba,	// (0x00016dee) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0001a68f) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0001a68f) fep_vkb_top_text_pane_g

0x68cc,	// (0x00011400) main_hc_apps_shell_pane

0xd49d,	// (0x00017fd1) grid_hc_apps_pane_ParamLimits

0xd49d,	// (0x00017fd1) grid_hc_apps_pane

0xd4ac,	// (0x00017fe0) list_hc_apps_pane

0xd4b4,	// (0x00017fe8) scroll_pane_cp37_ParamLimits

0xd4b4,	// (0x00017fe8) scroll_pane_cp37

0xd4c0,	// (0x00017ff4) cell_hc_apps_pane_ParamLimits

0xd4c0,	// (0x00017ff4) cell_hc_apps_pane

0xd578,	// (0x000180ac) cell_hc_apps_pane_g1_ParamLimits

0xd578,	// (0x000180ac) cell_hc_apps_pane_g1

0xd5a9,	// (0x000180dd) cell_hc_apps_pane_g2_ParamLimits

0xd5a9,	// (0x000180dd) cell_hc_apps_pane_g2

0xd5c5,	// (0x000180f9) cell_hc_apps_pane_g3_ParamLimits

0xd5c5,	// (0x000180f9) cell_hc_apps_pane_g3

0x0002,

0xfd02,	// (0x0001a836) cell_hc_apps_pane_g_ParamLimits

0xfd02,	// (0x0001a836) cell_hc_apps_pane_g

0xd5e7,	// (0x0001811b) cell_hc_apps_pane_t1_ParamLimits

0xd5e7,	// (0x0001811b) cell_hc_apps_pane_t1

0x6c64,	// (0x00011798) grid_highlight_pane_cp10_ParamLimits

0x6c64,	// (0x00011798) grid_highlight_pane_cp10

0xd627,	// (0x0001815b) list_single_hc_apps_pane_ParamLimits

0xd627,	// (0x0001815b) list_single_hc_apps_pane

0xd666,	// (0x0001819a) list_single_hc_apps_pane_g1

0xd67f,	// (0x000181b3) list_single_hc_apps_pane_g2

0x0001,

0xfd09,	// (0x0001a83d) list_single_hc_apps_pane_g

0xd698,	// (0x000181cc) list_single_hc_apps_pane_g2_copy1

0xd6b4,	// (0x000181e8) list_single_hc_apps_pane_t1

0x69c0,	// (0x000114f4) bg_set_opt_pane_cp_ParamLimits

0x5069,	// (0x0000fb9d) setting_slider_pane_t1_ParamLimits

0x507f,	// (0x0000fbb3) setting_slider_pane_t2_ParamLimits

0x5099,	// (0x0000fbcd) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001a0d6) setting_slider_pane_t_ParamLimits

0x50b1,	// (0x0000fbe5) slider_set_pane_ParamLimits

0x55e4,	// (0x00010118) control_pane_g5_ParamLimits

0x55e4,	// (0x00010118) control_pane_g5

0xa983,	// (0x000154b7) slider_set_pane_g1_ParamLimits

0x5a71,	// (0x000105a5) slider_set_pane_g2_ParamLimits

0x5a7d,	// (0x000105b1) slider_set_pane_g3_ParamLimits

0x5a91,	// (0x000105c5) slider_set_pane_g4_ParamLimits

0x5aa9,	// (0x000105dd) slider_set_pane_g5_ParamLimits

0x5a7d,	// (0x000105b1) slider_set_pane_g6_ParamLimits

0x5abf,	// (0x000105f3) slider_set_pane_g7_ParamLimits

0xf998,	// (0x0001a4cc) slider_set_pane_g_ParamLimits

0x84c4,	// (0x00012ff8) navi_icon_text_pane_ParamLimits

0x9027,	// (0x00013b5b) aid_fill_nsta_2_ParamLimits

0x9068,	// (0x00013b9c) aid_touch_tab_arrow_left_ParamLimits

0x9077,	// (0x00013bab) aid_touch_tab_arrow_right_ParamLimits

0x90e4,	// (0x00013c18) clock_nsta_pane_ParamLimits

0xa41d,	// (0x00014f51) navi_icon_pane_g1_ParamLimits

0xa42c,	// (0x00014f60) navi_text_pane_t1_ParamLimits

0xba61,	// (0x00016595) navi_icon_text_pane_g1_ParamLimits

0xba70,	// (0x000165a4) navi_icon_text_pane_t1_ParamLimits

0xd666,	// (0x0001819a) list_single_hc_apps_pane_g1_ParamLimits

0xd67f,	// (0x000181b3) list_single_hc_apps_pane_g2_ParamLimits

0xfd09,	// (0x0001a83d) list_single_hc_apps_pane_g_ParamLimits

0xd698,	// (0x000181cc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6b4,	// (0x000181e8) list_single_hc_apps_pane_t1_ParamLimits

0x4f73,	// (0x0000faa7) popup_toolbar2_fixed_window_ParamLimits

0x4f73,	// (0x0000faa7) popup_toolbar2_fixed_window

0x8f2b,	// (0x00013a5f) popup_toolbar2_float_window

0x68cc,	// (0x00011400) bg_popup_sub_pane_cp27

0xd6e2,	// (0x00018216) grid_toolbar2_float_pane

0x68cc,	// (0x00011400) bg_popup_sub_pane_cp26

0xd6e2,	// (0x00018216) grid_toolbar2_fixed_pane

0xd6ea,	// (0x0001821e) cell_toolbar2_fixed_pane_ParamLimits

0xd6ea,	// (0x0001821e) cell_toolbar2_fixed_pane

0xd6fa,	// (0x0001822e) cell_toolbar2_fixed_pane_g1

0xd703,	// (0x00018237) toolbar2_fixed_button_pane

0x9548,	// (0x0001407c) toolbar2_fixed_button_pane_g1

0x9558,	// (0x0001408c) toolbar2_fixed_button_pane_g2

0x9550,	// (0x00014084) toolbar2_fixed_button_pane_g3

0x9568,	// (0x0001409c) toolbar2_fixed_button_pane_g4

0x9560,	// (0x00014094) toolbar2_fixed_button_pane_g5

0x9570,	// (0x000140a4) toolbar2_fixed_button_pane_g6

0x9578,	// (0x000140ac) toolbar2_fixed_button_pane_g7

0x9588,	// (0x000140bc) toolbar2_fixed_button_pane_g8

0x9580,	// (0x000140b4) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x0001a3ce) toolbar2_fixed_button_pane_g

0xd70b,	// (0x0001823f) cell_toolbar2_float_pane_ParamLimits

0xd70b,	// (0x0001823f) cell_toolbar2_float_pane

0xd71c,	// (0x00018250) cell_toolbar2_float_pane_g1

0xd703,	// (0x00018237) toolbar2_fixed_button_pane_cp

0xc008,	// (0x00016b3c) fep_vkb_accented_list_pane_ParamLimits

0xc008,	// (0x00016b3c) fep_vkb_accented_list_pane

0x5e4a,	// (0x0001097e) bg_popup_fep_shadow_pane_g9

0x8648,	// (0x0001317c) bg_popup_fep_shadow_pane_cp3

0x7ac7,	// (0x000125fb) list_accented_list_pane

0xd725,	// (0x00018259) list_single_accented_list_pane_ParamLimits

0xd725,	// (0x00018259) list_single_accented_list_pane

0x8648,	// (0x0001317c) list_highlight_pane_cp10

0xd736,	// (0x0001826a) list_single_accented_list_pane_t1

0x8e71,	// (0x000139a5) popup_slider_window_ParamLimits

0x8e71,	// (0x000139a5) popup_slider_window

0xd22c,	// (0x00017d60) aid_indentation_list_msg

0xd802,	// (0x00018336) bg_popup_window_pane_cp19

0xd870,	// (0x000183a4) popup_slider_window_g1

0xd88c,	// (0x000183c0) popup_slider_window_g2

0xd8a8,	// (0x000183dc) popup_slider_window_g3

0x0005,

0xfd0e,	// (0x0001a842) popup_slider_window_g

0xd904,	// (0x00018438) popup_slider_window_t1

0xd978,	// (0x000184ac) small_volume_slider_vertical_pane

0xbec2,	// (0x000169f6) small_volume_slider_vertical_pane_g1

0xbec2,	// (0x000169f6) small_volume_slider_vertical_pane_g2

0xd994,	// (0x000184c8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd20,	// (0x0001a854) small_volume_slider_vertical_pane_g

0x4d21,	// (0x0000f855) area_side_right_pane_ParamLimits

0x4d21,	// (0x0000f855) area_side_right_pane

0x6039,	// (0x00010b6d) aid_size_side_button_ParamLimits

0x6039,	// (0x00010b6d) aid_size_side_button

0x604d,	// (0x00010b81) grid_sctrl_middle_pane_ParamLimits

0x604d,	// (0x00010b81) grid_sctrl_middle_pane

0x606d,	// (0x00010ba1) sctrl_sk_bottom_pane

0x607e,	// (0x00010bb2) sctrl_sk_top_pane

0x6090,	// (0x00010bc4) aid_touch_sctrl_top

0x609d,	// (0x00010bd1) bg_sctrl_sk_pane_ParamLimits

0x609d,	// (0x00010bd1) bg_sctrl_sk_pane

0x60ab,	// (0x00010bdf) sctrl_sk_top_pane_g1

0x60b8,	// (0x00010bec) sctrl_sk_top_pane_t1

0x6090,	// (0x00010bc4) aid_touch_sctrl_bottom

0x609d,	// (0x00010bd1) bg_sctrl_sk_pane_cp_ParamLimits

0x609d,	// (0x00010bd1) bg_sctrl_sk_pane_cp

0x60d3,	// (0x00010c07) sctrl_sk_bottom_pane_g1

0x60b8,	// (0x00010bec) sctrl_sk_bottom_pane_t1

0x60dc,	// (0x00010c10) cell_sctrl_middle_pane_ParamLimits

0x60dc,	// (0x00010c10) cell_sctrl_middle_pane

0x60f9,	// (0x00010c2d) aid_touch_sctrl_middle_ParamLimits

0x60f9,	// (0x00010c2d) aid_touch_sctrl_middle

0x610b,	// (0x00010c3f) bg_sctrl_middle_pane_ParamLimits

0x610b,	// (0x00010c3f) bg_sctrl_middle_pane

0x5e6a,	// (0x0001099e) cell_sctrl_middle_pane_g1_ParamLimits

0x5e6a,	// (0x0001099e) cell_sctrl_middle_pane_g1

0x6119,	// (0x00010c4d) cell_sctrl_middle_pane_g2_ParamLimits

0x6119,	// (0x00010c4d) cell_sctrl_middle_pane_g2

0x0001,

0xfd2c,	// (0x0001a860) cell_sctrl_middle_pane_g_ParamLimits

0xfd2c,	// (0x0001a860) cell_sctrl_middle_pane_g

0x9548,	// (0x0001407c) bg_sctrl_middle_pane_g1

0x9550,	// (0x00014084) bg_sctrl_middle_pane_g2

0x9558,	// (0x0001408c) bg_sctrl_middle_pane_g3

0x9560,	// (0x00014094) bg_sctrl_middle_pane_g4

0x9568,	// (0x0001409c) bg_sctrl_middle_pane_g5

0x9570,	// (0x000140a4) bg_sctrl_middle_pane_g6

0x9578,	// (0x000140ac) bg_sctrl_middle_pane_g7

0x9580,	// (0x000140b4) bg_sctrl_middle_pane_g8

0x0007,

0xfd31,	// (0x0001a865) bg_sctrl_middle_pane_g

0x9588,	// (0x000140bc) bg_sctrl_middle_pane_g8_copy1

0x9548,	// (0x0001407c) bg_sctrl_sk_pane_g1

0x9558,	// (0x0001408c) bg_sctrl_sk_pane_g2

0x9550,	// (0x00014084) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x0001a3ce) bg_sctrl_sk_pane_g

0x7190,	// (0x00011cc4) aid_size_touch_scroll_bar

0x9568,	// (0x0001409c) bg_sctrl_sk_pane_g4

0x9560,	// (0x00014094) bg_sctrl_sk_pane_g5

0x9570,	// (0x000140a4) bg_sctrl_sk_pane_g6

0x9578,	// (0x000140ac) bg_sctrl_sk_pane_g7

0x9588,	// (0x000140bc) bg_sctrl_sk_pane_g8

0x9580,	// (0x000140b4) bg_sctrl_sk_pane_g9

0x8a88,	// (0x000135bc) popup_fep_china_hwr2_fs_candidate_window

0x8a92,	// (0x000135c6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8a92,	// (0x000135c6) popup_fep_china_hwr2_fs_control_window

0x5e6a,	// (0x0001099e) sctrl_sk_top_pane_g2

0x0001,

0xfd27,	// (0x0001a85b) sctrl_sk_top_pane_g

0xd99d,	// (0x000184d1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99d,	// (0x000184d1) aid_fep_china_hwr2_fs_cell

0xd9b0,	// (0x000184e4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b0,	// (0x000184e4) bg_popup_fep_shadow_pane_cp4

0xd9c9,	// (0x000184fd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9c9,	// (0x000184fd) bg_popup_fep_shadow_pane_cp5

0xd9db,	// (0x0001850f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9db,	// (0x0001850f) popup_fep_china_hwr2_fs_control_bar_grid

0xd9eb,	// (0x0001851f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f3,	// (0x00018527) aid_fep_china_hwr2_fs_candi_cell

0x68cc,	// (0x00011400) bg_popup_fep_shadow_pane_cp6

0xd9fd,	// (0x00018531) popup_fep_china_hwr2_fs_candidate_grid

0xda07,	// (0x0001853b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda07,	// (0x0001853b) cell_fep_china_hwr2_fs_funtion_grid

0xbec2,	// (0x000169f6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda1f,	// (0x00018553) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda1f,	// (0x00018553) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2d,	// (0x00018561) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2d,	// (0x00018561) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd42,	// (0x0001a876) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd42,	// (0x0001a876) cell_fep_china_hwr2_fs_funtion_grid_g

0xda43,	// (0x00018577) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda43,	// (0x00018577) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda58,	// (0x0001858c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda58,	// (0x0001858c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd47,	// (0x0001a87b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd47,	// (0x0001a87b) cell_fep_china_hwr2_fs_funtion_grid_t

0xda74,	// (0x000185a8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7c,	// (0x000185b0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda84,	// (0x000185b8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4c,	// (0x0001a880) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8c,	// (0x000185c0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8c,	// (0x000185c0) cell_fep_china_hwr2_fs_candidate_grid

0xdaab,	// (0x000185df) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab3,	// (0x000185e7) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbec2,	// (0x000169f6) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbec2,	// (0x000169f6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0001a694) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabb,	// (0x000185ef) cell_fep_china_hwr2_fs_candidate_grid_t1

0x90f7,	// (0x00013c2b) clock_nsta_pane_cp_24_ParamLimits

0x90f7,	// (0x00013c2b) clock_nsta_pane_cp_24

0x9177,	// (0x00013cab) indicator_nsta_pane_cp_24_ParamLimits

0x9177,	// (0x00013cab) indicator_nsta_pane_cp_24

0xa299,	// (0x00014dcd) heading_pane_g1

0x0001,

0xf8ff,	// (0x0001a433) heading_pane_g

0xadd2,	// (0x00015906) grid_sct_catagory_button_pane

0xae04,	// (0x00015938) scroll_pane_cp5_ParamLimits

0xbab5,	// (0x000165e9) button_value_adjust_pane_cp5_ParamLimits

0xbab5,	// (0x000165e9) button_value_adjust_pane_cp5

0xbbbb,	// (0x000166ef) form2_midp_time_pane_ParamLimits

0xdac9,	// (0x000185fd) cell_sct_catagory_button_pane_ParamLimits

0xdac9,	// (0x000185fd) cell_sct_catagory_button_pane

0xbe87,	// (0x000169bb) bg_button_pane_cp01_ParamLimits

0xbe87,	// (0x000169bb) bg_button_pane_cp01

0xbec2,	// (0x000169f6) cell_sct_catagory_button_pane_g1

0x8eb2,	// (0x000139e6) popup_tb_extension_window

0xdadb,	// (0x0001860f) aid_size_cell_ext_ParamLimits

0xdadb,	// (0x0001860f) aid_size_cell_ext

0x6c64,	// (0x00011798) bg_tb_trans_pane_cp1_ParamLimits

0x6c64,	// (0x00011798) bg_tb_trans_pane_cp1

0xdafb,	// (0x0001862f) grid_tb_ext_pane_ParamLimits

0xdafb,	// (0x0001862f) grid_tb_ext_pane

0xdb2b,	// (0x0001865f) cell_tb_ext_pane_ParamLimits

0xdb2b,	// (0x0001865f) cell_tb_ext_pane

0xdb42,	// (0x00018676) cell_tb_ext_pane_g1_ParamLimits

0xdb42,	// (0x00018676) cell_tb_ext_pane_g1

0xdb5f,	// (0x00018693) cell_tb_ext_pane_t1

0x6c64,	// (0x00011798) list_highlight_pane_cp11_ParamLimits

0x6c64,	// (0x00011798) list_highlight_pane_cp11

0x4f92,	// (0x0000fac6) popup_uni_indicator_window_ParamLimits

0x4f92,	// (0x0000fac6) popup_uni_indicator_window

0x77fc,	// (0x00012330) bg_popup_sub_pane_cp14

0xdb7a,	// (0x000186ae) list_uniindi_pane

0xdb86,	// (0x000186ba) uniindi_top_pane

0x6c64,	// (0x00011798) bg_uniindi_top_pane

0xdba7,	// (0x000186db) uniindi_top_pane_g1

0xdbbd,	// (0x000186f1) uniindi_top_pane_g2

0x0003,

0xfd53,	// (0x0001a887) uniindi_top_pane_g

0xdbe7,	// (0x0001871b) uniindi_top_pane_t1

0xdc13,	// (0x00018747) list_single_uniindi_pane_ParamLimits

0xdc13,	// (0x00018747) list_single_uniindi_pane

0xbec2,	// (0x000169f6) bg_uniindi_top_pane_g1

0xdc25,	// (0x00018759) list_single_uniindi_pane_g1

0xdc38,	// (0x0001876c) list_single_uniindi_pane_t1

0x4dfe,	// (0x0000f932) control_bg_pane

0xdc5d,	// (0x00018791) bg_sctrl_sk_pane_cp1

0xdc66,	// (0x0001879a) bg_sctrl_sk_pane_cp2

0xdc6f,	// (0x000187a3) control_bg_pane_g1

0xdc78,	// (0x000187ac) control_bg_pane_g2

0x0001,

0xfd5c,	// (0x0001a890) control_bg_pane_g

0xb909,	// (0x0001643d) cell_indicator_nsta_pane_g1_ParamLimits

0xb917,	// (0x0001644b) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0001a605) cell_indicator_nsta_pane_g_ParamLimits

0xbc4b,	// (0x0001677f) form2_midp_time_pane_t1_ParamLimits

0x6fd2,	// (0x00011b06) main_idle_act4_pane_ParamLimits

0x6fd2,	// (0x00011b06) main_idle_act4_pane

0x8eb2,	// (0x000139e6) popup_tb_extension_window_ParamLimits

0xdb1d,	// (0x00018651) tb_ext_find_pane_ParamLimits

0xdb1d,	// (0x00018651) tb_ext_find_pane

0xdc81,	// (0x000187b5) ai_gene_pane_1_cp1

0x8791,	// (0x000132c5) ai_gene_pane_2_cp1

0xdc89,	// (0x000187bd) list_single_idle_plugin_calendar_pane

0xdc92,	// (0x000187c6) list_single_idle_plugin_notification_pane

0xdc9b,	// (0x000187cf) list_single_idle_plugin_player_pane

0xdca4,	// (0x000187d8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca4,	// (0x000187d8) list_single_idle_plugin_shortcut_pane

0xdcc6,	// (0x000187fa) main_idle_act4_pane_t1

0xdcd8,	// (0x0001880c) main_idle_act4_pane_t2

0x0001,

0xfd61,	// (0x0001a895) main_idle_act4_pane_t

0xdcea,	// (0x0001881e) middle_sk_idle_act4_pane_ParamLimits

0xdcea,	// (0x0001881e) middle_sk_idle_act4_pane

0xdd00,	// (0x00018834) popup_clock_digital_analogue_window_cp2

0xdd1a,	// (0x0001884e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1a,	// (0x0001884e) shortcut_wheel_idle_act4_pane

0xbec2,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g1

0xbec2,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g2

0xbec2,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g3

0xbec2,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g4

0xbec2,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g5

0xdd2e,	// (0x00018862) shortcut_wheel_idle_act4_pane_g6

0xdd36,	// (0x0001886a) shortcut_wheel_idle_act4_pane_g7

0xdd3e,	// (0x00018872) shortcut_wheel_idle_act4_pane_g8

0xdd46,	// (0x0001887a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd66,	// (0x0001a89a) shortcut_wheel_idle_act4_pane_g

0xc14c,	// (0x00016c80) middle_sk_idle_act4_pane_g1_ParamLimits

0xc14c,	// (0x00016c80) middle_sk_idle_act4_pane_g1

0xddaa,	// (0x000188de) middle_sk_idle_act4_pane_g2_ParamLimits

0xddaa,	// (0x000188de) middle_sk_idle_act4_pane_g2

0x0001,

0xfd89,	// (0x0001a8bd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd89,	// (0x0001a8bd) middle_sk_idle_act4_pane_g

0xddb6,	// (0x000188ea) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb6,	// (0x000188ea) middle_sk_idle_act4_pane_t1

0xddd3,	// (0x00018907) grid_ai_shortcut_pane_ParamLimits

0xddd3,	// (0x00018907) grid_ai_shortcut_pane

0xddec,	// (0x00018920) list_highlight_pane_cp16_ParamLimits

0xddec,	// (0x00018920) list_highlight_pane_cp16

0xddf9,	// (0x0001892d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddf9,	// (0x0001892d) list_single_idle_plugin_shortcut_pane_g1

0xde05,	// (0x00018939) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde05,	// (0x00018939) list_single_idle_plugin_shortcut_pane_g2

0xde1f,	// (0x00018953) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde1f,	// (0x00018953) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8e,	// (0x0001a8c2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8e,	// (0x0001a8c2) list_single_idle_plugin_shortcut_pane_g

0xde32,	// (0x00018966) cell_ai_shortcut_pane_ParamLimits

0xde32,	// (0x00018966) cell_ai_shortcut_pane

0xde55,	// (0x00018989) cell_ai_shortcut_pane_g1_ParamLimits

0xde55,	// (0x00018989) cell_ai_shortcut_pane_g1

0xdc81,	// (0x000187b5) ai_gene_pane_1_cp2

0xde77,	// (0x000189ab) ai_gene_pane_2_cp2

0xde7f,	// (0x000189b3) list_highlight_pane_cp15

0xde88,	// (0x000189bc) list_single_idle_plugin_calendar_pane_g1

0xde7f,	// (0x000189b3) list_highlight_pane_cp17

0xde90,	// (0x000189c4) list_single_idle_plugin_calendar_pane_g1_copy1

0xde98,	// (0x000189cc) list_single_idle_plugin_player_pane_g1

0xb039,	// (0x00015b6d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd95,	// (0x0001a8c9) list_single_idle_plugin_player_pane_g

0xdea0,	// (0x000189d4) list_single_idle_plugin_player_pane_t1

0xdeae,	// (0x000189e2) list_single_idle_plugin_player_pane_t2

0xdebc,	// (0x000189f0) list_single_idle_plugin_player_pane_t3

0xdeca,	// (0x000189fe) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9a,	// (0x0001a8ce) list_single_idle_plugin_player_pane_t

0xded8,	// (0x00018a0c) wait_bar_pane_cp15

0xdee0,	// (0x00018a14) grid_ai_notification_pane

0xb039,	// (0x00015b6d) list_single_idle_plugin_notification_pane_g1

0xdee9,	// (0x00018a1d) cell_ai_notification_pane_ParamLimits

0xdee9,	// (0x00018a1d) cell_ai_notification_pane

0xdef6,	// (0x00018a2a) cell_ai_notification_pane_g1

0xdefe,	// (0x00018a32) cell_ai_notification_pane_t1

0xdf0c,	// (0x00018a40) tb_ext_find_button_pane

0xdf14,	// (0x00018a48) tb_ext_find_pane_g1

0xdf1c,	// (0x00018a50) tb_ext_find_pane_t1

0x7fce,	// (0x00012b02) tb_ext_find_button_pane_g1

0xdf2a,	// (0x00018a5e) tb_ext_find_button_pane_g2

0x0001,

0xfda3,	// (0x0001a8d7) tb_ext_find_button_pane_g

0xdcc6,	// (0x000187fa) main_idle_act4_pane_t1_ParamLimits

0xdcd8,	// (0x0001880c) main_idle_act4_pane_t2_ParamLimits

0xfd61,	// (0x0001a895) main_idle_act4_pane_t_ParamLimits

0xdd00,	// (0x00018834) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd0e,	// (0x00018842) sat_plugin_idle_act4_pane_ParamLimits

0xdd0e,	// (0x00018842) sat_plugin_idle_act4_pane

0xdf33,	// (0x00018a67) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf33,	// (0x00018a67) sat_plugin_idle_act4_pane_t1

0xdf46,	// (0x00018a7a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf46,	// (0x00018a7a) sat_plugin_idle_act4_pane_t2

0xdf59,	// (0x00018a8d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf59,	// (0x00018a8d) sat_plugin_idle_act4_pane_t3

0xdf6c,	// (0x00018aa0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6c,	// (0x00018aa0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda8,	// (0x0001a8dc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda8,	// (0x0001a8dc) sat_plugin_idle_act4_pane_t

0x4ec3,	// (0x0000f9f7) popup_battery_window_ParamLimits

0x4ec3,	// (0x0000f9f7) popup_battery_window

0x6c64,	// (0x00011798) bg_popup_sub_pane_cp25_ParamLimits

0x6c64,	// (0x00011798) bg_popup_sub_pane_cp25

0xdf7f,	// (0x00018ab3) popup_battery_window_g1_ParamLimits

0xdf7f,	// (0x00018ab3) popup_battery_window_g1

0xdf8b,	// (0x00018abf) popup_battery_window_t1_ParamLimits

0xdf8b,	// (0x00018abf) popup_battery_window_t1

0xdf9d,	// (0x00018ad1) popup_battery_window_t2_ParamLimits

0xdf9d,	// (0x00018ad1) popup_battery_window_t2

0x0001,

0xfdb1,	// (0x0001a8e5) popup_battery_window_t_ParamLimits

0xfdb1,	// (0x0001a8e5) popup_battery_window_t

0x865c,	// (0x00013190) midp_canvas_pane_ParamLimits

0x86d3,	// (0x00013207) midp_keypad_pane_ParamLimits

0x86d3,	// (0x00013207) midp_keypad_pane

0x89d6,	// (0x0001350a) main_midp_pane_ParamLimits

0xb962,	// (0x00016496) signal_pane_g2_cp_ParamLimits

0xdfba,	// (0x00018aee) aid_size_cell_midp_keypad_ParamLimits

0xdfba,	// (0x00018aee) aid_size_cell_midp_keypad

0xdfd4,	// (0x00018b08) midp_keyp_game_grid_pane_ParamLimits

0xdfd4,	// (0x00018b08) midp_keyp_game_grid_pane

0xdff4,	// (0x00018b28) midp_keyp_rocker_pane_ParamLimits

0xdff4,	// (0x00018b28) midp_keyp_rocker_pane

0xe023,	// (0x00018b57) midp_keyp_sk_left_pane_ParamLimits

0xe023,	// (0x00018b57) midp_keyp_sk_left_pane

0xe07d,	// (0x00018bb1) midp_keyp_sk_right_pane_ParamLimits

0xe07d,	// (0x00018bb1) midp_keyp_sk_right_pane

0x68cc,	// (0x00011400) bg_button_pane_cp03

0xe0d7,	// (0x00018c0b) midp_keyp_sk_left_pane_g1

0x68cc,	// (0x00011400) bg_button_pane_cp04

0xe0d7,	// (0x00018c0b) midp_keyp_sk_right_pane_g1

0xbec2,	// (0x000169f6) midp_keyp_rocker_pane_g1

0xe0e0,	// (0x00018c14) keyp_game_cell_pane_ParamLimits

0xe0e0,	// (0x00018c14) keyp_game_cell_pane

0x68cc,	// (0x00011400) bg_button_pane_cp02

0xe0f3,	// (0x00018c27) keyp_game_cell_pane_g1

0x4f0d,	// (0x0000fa41) popup_fep_vkb2_window_ParamLimits

0x4f0d,	// (0x0000fa41) popup_fep_vkb2_window

0x613b,	// (0x00010c6f) aid_size_cell_vkb2_ParamLimits

0x613b,	// (0x00010c6f) aid_size_cell_vkb2

0x6187,	// (0x00010cbb) popup_fep_vkb2_window_g1_ParamLimits

0x6187,	// (0x00010cbb) popup_fep_vkb2_window_g1

0x61cf,	// (0x00010d03) vkb2_area_bottom_pane_ParamLimits

0x61cf,	// (0x00010d03) vkb2_area_bottom_pane

0x6223,	// (0x00010d57) vkb2_area_keypad_pane_ParamLimits

0x6223,	// (0x00010d57) vkb2_area_keypad_pane

0x6269,	// (0x00010d9d) vkb2_area_top_pane_ParamLimits

0x6269,	// (0x00010d9d) vkb2_area_top_pane

0x62e3,	// (0x00010e17) vkb2_top_entry_pane_ParamLimits

0x62e3,	// (0x00010e17) vkb2_top_entry_pane

0x630d,	// (0x00010e41) vkb2_top_grid_left_pane_ParamLimits

0x630d,	// (0x00010e41) vkb2_top_grid_left_pane

0x632b,	// (0x00010e5f) vkb2_top_grid_right_pane_ParamLimits

0x632b,	// (0x00010e5f) vkb2_top_grid_right_pane

0x6349,	// (0x00010e7d) vkb2_cell_keypad_pane_ParamLimits

0x6349,	// (0x00010e7d) vkb2_cell_keypad_pane

0x63ff,	// (0x00010f33) vkb2_area_bottom_grid_pane_ParamLimits

0x63ff,	// (0x00010f33) vkb2_area_bottom_grid_pane

0x6425,	// (0x00010f59) vkb2_area_bottom_pane_g1_ParamLimits

0x6425,	// (0x00010f59) vkb2_area_bottom_pane_g1

0x6449,	// (0x00010f7d) vkb2_area_bottom_pane_g2_ParamLimits

0x6449,	// (0x00010f7d) vkb2_area_bottom_pane_g2

0x6477,	// (0x00010fab) vkb2_area_bottom_pane_g3_ParamLimits

0x6477,	// (0x00010fab) vkb2_area_bottom_pane_g3

0x0002,

0xfdb6,	// (0x0001a8ea) vkb2_area_bottom_pane_g_ParamLimits

0xfdb6,	// (0x0001a8ea) vkb2_area_bottom_pane_g

0x64d8,	// (0x0001100c) vkb2_top_cell_left_pane_ParamLimits

0x64d8,	// (0x0001100c) vkb2_top_cell_left_pane

0xe125,	// (0x00018c59) vkb2_top_entry_pane_g1_ParamLimits

0xe125,	// (0x00018c59) vkb2_top_entry_pane_g1

0xe133,	// (0x00018c67) vkb2_top_entry_pane_t1_ParamLimits

0xe133,	// (0x00018c67) vkb2_top_entry_pane_t1

0xe14b,	// (0x00018c7f) vkb2_top_entry_pane_t2_ParamLimits

0xe14b,	// (0x00018c7f) vkb2_top_entry_pane_t2

0xe163,	// (0x00018c97) vkb2_top_entry_pane_t3_ParamLimits

0xe163,	// (0x00018c97) vkb2_top_entry_pane_t3

0x0002,

0xfdbd,	// (0x0001a8f1) vkb2_top_entry_pane_t_ParamLimits

0xfdbd,	// (0x0001a8f1) vkb2_top_entry_pane_t

0x6525,	// (0x00011059) vkb2_top_grid_right_pane_g1_ParamLimits

0x6525,	// (0x00011059) vkb2_top_grid_right_pane_g1

0x653b,	// (0x0001106f) vkb2_top_grid_right_pane_g2_ParamLimits

0x653b,	// (0x0001106f) vkb2_top_grid_right_pane_g2

0x6553,	// (0x00011087) vkb2_top_grid_right_pane_g3_ParamLimits

0x6553,	// (0x00011087) vkb2_top_grid_right_pane_g3

0x656b,	// (0x0001109f) vkb2_top_grid_right_pane_g4_ParamLimits

0x656b,	// (0x0001109f) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc4,	// (0x0001a8f8) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc4,	// (0x0001a8f8) vkb2_top_grid_right_pane_g

0x6581,	// (0x000110b5) vkb2_top_cell_left_pane_g1

0x6598,	// (0x000110cc) vkb2_cell_keypad_pane_g1_ParamLimits

0x6598,	// (0x000110cc) vkb2_cell_keypad_pane_g1

0xe179,	// (0x00018cad) vkb2_cell_keypad_pane_t1_ParamLimits

0xe179,	// (0x00018cad) vkb2_cell_keypad_pane_t1

0x65bc,	// (0x000110f0) vkb2_cell_bottom_grid_pane_ParamLimits

0x65bc,	// (0x000110f0) vkb2_cell_bottom_grid_pane

0x65f5,	// (0x00011129) vkb2_cell_bottom_grid_pane_g1

0xdd4e,	// (0x00018882) aid_call2_pane_cp02

0xdd56,	// (0x0001888a) aid_call_pane_cp02

0xdd5e,	// (0x00018892) clock_digital_number_pane_cp10

0xdd66,	// (0x0001889a) clock_digital_number_pane_cp11

0xdd6e,	// (0x000188a2) clock_digital_number_pane_cp12

0xdd76,	// (0x000188aa) clock_digital_number_pane_cp13

0xdd7e,	// (0x000188b2) clock_digital_separator_pane_cp10

0x7fce,	// (0x00012b02) popup_clock_digital_analogue_window_cp2_g1

0x7fce,	// (0x00012b02) popup_clock_digital_analogue_window_cp2_g2

0xdd86,	// (0x000188ba) popup_clock_digital_analogue_window_cp2_g3

0x7fce,	// (0x00012b02) popup_clock_digital_analogue_window_cp2_g4

0xdd86,	// (0x000188ba) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd79,	// (0x0001a8ad) popup_clock_digital_analogue_window_cp2_g

0xdd8e,	// (0x000188c2) popup_clock_digital_analogue_window_cp2_t1

0xdd9c,	// (0x000188d0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd84,	// (0x0001a8b8) popup_clock_digital_analogue_window_cp2_t

0xbec2,	// (0x000169f6) clock_digital_number_pane_cp10_g1

0xbec2,	// (0x000169f6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0001a694) clock_digital_number_pane_cp10_g

0xbec2,	// (0x000169f6) clock_digital_separator_pane_cp10_g1

0xbec2,	// (0x000169f6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0001a694) clock_digital_separator_pane_cp10_g

0xdbc9,	// (0x000186fd) uniindi_top_pane_g3

0xdbda,	// (0x0001870e) uniindi_top_pane_g4

0x63b9,	// (0x00010eed) vkb2_row_keypad_pane_ParamLimits

0x63b9,	// (0x00010eed) vkb2_row_keypad_pane

0x6611,	// (0x00011145) vkb2_cell_t_keypad_pane_ParamLimits

0x6611,	// (0x00011145) vkb2_cell_t_keypad_pane

0x6621,	// (0x00011155) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6621,	// (0x00011155) vkb2_cell_t_keypad_pane_cp08

0x6636,	// (0x0001116a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6636,	// (0x0001116a) vkb2_cell_t_keypad_pane_cp09

0x664a,	// (0x0001117e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x664a,	// (0x0001117e) vkb2_cell_t_keypad_pane_cp01

0x665b,	// (0x0001118f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x665b,	// (0x0001118f) vkb2_cell_t_keypad_pane_cp02

0x666c,	// (0x000111a0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x666c,	// (0x000111a0) vkb2_cell_t_keypad_pane_cp03

0x667d,	// (0x000111b1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x667d,	// (0x000111b1) vkb2_cell_t_keypad_pane_cp04

0x668e,	// (0x000111c2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x668e,	// (0x000111c2) vkb2_cell_t_keypad_pane_cp05

0x669f,	// (0x000111d3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x669f,	// (0x000111d3) vkb2_cell_t_keypad_pane_cp06

0x66b2,	// (0x000111e6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x66b2,	// (0x000111e6) vkb2_cell_t_keypad_pane_cp07

0x66c7,	// (0x000111fb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x66c7,	// (0x000111fb) vkb2_cell_t_keypad_pane_cp10

0x5e6a,	// (0x0001099e) vkb2_cell_t_keypad_pane_g1

0xe190,	// (0x00018cc4) vkb2_cell_t_keypad_pane_t1

0x4dfe,	// (0x0000f932) popup_grid_graphic2_window

0xe1a2,	// (0x00018cd6) aid_size_cell_graphic2_ParamLimits

0xe1a2,	// (0x00018cd6) aid_size_cell_graphic2

0xc213,	// (0x00016d47) bg_popup_window_pane_cp21_ParamLimits

0xc213,	// (0x00016d47) bg_popup_window_pane_cp21

0xe1ce,	// (0x00018d02) graphic2_pages_pane_ParamLimits

0xe1ce,	// (0x00018d02) graphic2_pages_pane

0xe214,	// (0x00018d48) grid_graphic2_control_pane_ParamLimits

0xe214,	// (0x00018d48) grid_graphic2_control_pane

0xe242,	// (0x00018d76) grid_graphic2_pane_ParamLimits

0xe242,	// (0x00018d76) grid_graphic2_pane

0xe2a4,	// (0x00018dd8) cell_graphic2_pane

0x68cc,	// (0x00011400) main_comp_mode_pane

0xd3d7,	// (0x00017f0b) list_ai3_gene_pane_ParamLimits

0xd802,	// (0x00018336) bg_popup_window_pane_cp19_ParamLimits

0xd80e,	// (0x00018342) bg_touch_area_indi_pane_ParamLimits

0xd80e,	// (0x00018342) bg_touch_area_indi_pane

0xd824,	// (0x00018358) bg_touch_area_indi_pane_cp01_ParamLimits

0xd824,	// (0x00018358) bg_touch_area_indi_pane_cp01

0xd83c,	// (0x00018370) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83c,	// (0x00018370) bg_touch_area_indi_pane_cp02

0xd856,	// (0x0001838a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd856,	// (0x0001838a) bg_touch_area_indi_pane_cp03

0xd870,	// (0x000183a4) popup_slider_window_g1_ParamLimits

0xd88c,	// (0x000183c0) popup_slider_window_g2_ParamLimits

0xd8a8,	// (0x000183dc) popup_slider_window_g3_ParamLimits

0xfd0e,	// (0x0001a842) popup_slider_window_g_ParamLimits

0xd904,	// (0x00018438) popup_slider_window_t1_ParamLimits

0xd978,	// (0x000184ac) small_volume_slider_vertical_pane_ParamLimits

0xe2a4,	// (0x00018dd8) cell_graphic2_pane_ParamLimits

0xe2f9,	// (0x00018e2d) bg_button_pane_cp10_ParamLimits

0xe2f9,	// (0x00018e2d) bg_button_pane_cp10

0xe30e,	// (0x00018e42) bg_button_pane_cp11_ParamLimits

0xe30e,	// (0x00018e42) bg_button_pane_cp11

0xe323,	// (0x00018e57) graphic2_pages_pane_g1_ParamLimits

0xe323,	// (0x00018e57) graphic2_pages_pane_g1

0xe33e,	// (0x00018e72) graphic2_pages_pane_g2_ParamLimits

0xe33e,	// (0x00018e72) graphic2_pages_pane_g2

0x0001,

0xfdd2,	// (0x0001a906) graphic2_pages_pane_g_ParamLimits

0xfdd2,	// (0x0001a906) graphic2_pages_pane_g

0xe356,	// (0x00018e8a) graphic2_pages_pane_t1_ParamLimits

0xe356,	// (0x00018e8a) graphic2_pages_pane_t1

0xe36c,	// (0x00018ea0) cell_graphic2_control_pane_ParamLimits

0xe36c,	// (0x00018ea0) cell_graphic2_control_pane

0xe386,	// (0x00018eba) cell_graphic2_pane_g1_ParamLimits

0xe386,	// (0x00018eba) cell_graphic2_pane_g1

0xe393,	// (0x00018ec7) cell_graphic2_pane_g2_ParamLimits

0xe393,	// (0x00018ec7) cell_graphic2_pane_g2

0xe3a0,	// (0x00018ed4) cell_graphic2_pane_g3_ParamLimits

0xe3a0,	// (0x00018ed4) cell_graphic2_pane_g3

0xe3ad,	// (0x00018ee1) cell_graphic2_pane_g4_ParamLimits

0xe3ad,	// (0x00018ee1) cell_graphic2_pane_g4

0xe3ba,	// (0x00018eee) cell_graphic2_pane_g5_ParamLimits

0xe3ba,	// (0x00018eee) cell_graphic2_pane_g5

0x0004,

0xfdd7,	// (0x0001a90b) cell_graphic2_pane_g_ParamLimits

0xfdd7,	// (0x0001a90b) cell_graphic2_pane_g

0xe3d5,	// (0x00018f09) cell_graphic2_pane_t1_ParamLimits

0xe3d5,	// (0x00018f09) cell_graphic2_pane_t1

0x9664,	// (0x00014198) grid_highlight_pane_cp11_ParamLimits

0x9664,	// (0x00014198) grid_highlight_pane_cp11

0x77fc,	// (0x00012330) bg_button_pane_cp05

0xe3eb,	// (0x00018f1f) cell_graphic2_control_pane_g1

0xbec2,	// (0x000169f6) bg_touch_area_indi_pane_g1

0xe3f8,	// (0x00018f2c) aid_cmod_rocker_key_size

0xe402,	// (0x00018f36) aid_cmode_itu_key_size

0xe40c,	// (0x00018f40) main_cmode_video_pane

0xe416,	// (0x00018f4a) main_comp_mode_itu_pane

0xe422,	// (0x00018f56) main_comp_mode_rocker_pane

0xe42e,	// (0x00018f62) cell_cmode_rocker_pane_ParamLimits

0xe42e,	// (0x00018f62) cell_cmode_rocker_pane

0xe442,	// (0x00018f76) cell_cmode_itu_pane_ParamLimits

0xe442,	// (0x00018f76) cell_cmode_itu_pane

0x77fc,	// (0x00012330) bg_button_pane_cp06_ParamLimits

0x77fc,	// (0x00012330) bg_button_pane_cp06

0xc14c,	// (0x00016c80) cell_cmode_rocker_pane_g1_ParamLimits

0xc14c,	// (0x00016c80) cell_cmode_rocker_pane_g1

0xda1f,	// (0x00018553) cell_cmode_rocker_pane_g2_ParamLimits

0xda1f,	// (0x00018553) cell_cmode_rocker_pane_g2

0x0001,

0xfde2,	// (0x0001a916) cell_cmode_rocker_pane_g_ParamLimits

0xfde2,	// (0x0001a916) cell_cmode_rocker_pane_g

0x68cc,	// (0x00011400) bg_button_pane_cp07

0xe459,	// (0x00018f8d) cell_cmode_itu_pane_g1

0xe462,	// (0x00018f96) cell_cmode_itu_pane_t1

0xe470,	// (0x00018fa4) cell_cmode_itu_pane_t2

0x0001,

0xfde7,	// (0x0001a91b) cell_cmode_itu_pane_t

0xdc4d,	// (0x00018781) aid_touch_ctrl_left

0xdc55,	// (0x00018789) aid_touch_ctrl_right

0x68cc,	// (0x00011400) compa_mode_pane

0xe47e,	// (0x00018fb2) aid_cmod_rocker_key_size_cp

0xe488,	// (0x00018fbc) aid_cmode_itu_key_size_cp

0xe492,	// (0x00018fc6) compa_mode_pane_g1

0xe49a,	// (0x00018fce) compa_mode_pane_g2

0xe4a2,	// (0x00018fd6) compa_mode_pane_g3

0x0002,

0xfdec,	// (0x0001a920) compa_mode_pane_g

0xe4aa,	// (0x00018fde) main_comp_mode_itu_pane_cp

0xe4b2,	// (0x00018fe6) main_comp_mode_rocker_pane_cp

0xe4ba,	// (0x00018fee) cell_cmode_itu_pane_cp_ParamLimits

0xe4ba,	// (0x00018fee) cell_cmode_itu_pane_cp

0xe4cf,	// (0x00019003) cell_cmode_rocker_pane_cp_ParamLimits

0xe4cf,	// (0x00019003) cell_cmode_rocker_pane_cp

0x77fc,	// (0x00012330) bg_button_pane_cp06_cp_ParamLimits

0x77fc,	// (0x00012330) bg_button_pane_cp06_cp

0xc14c,	// (0x00016c80) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc14c,	// (0x00016c80) cell_cmode_rocker_pane_g1_cp

0xbec2,	// (0x000169f6) cell_cmode_rocker_pane_g2_cp

0x68cc,	// (0x00011400) bg_button_pane_cp07_cp

0xe4e1,	// (0x00019015) cell_cmode_itu_pane_g1_cp

0xe4ea,	// (0x0001901e) cell_cmode_itu_pane_t1_cp

0xe4ea,	// (0x0001901e) cell_cmode_itu_pane_t2_cp

0xab51,	// (0x00015685) settings_code_pane_cp2

0x69c0,	// (0x000114f4) bg_popup_window_pane_cp3_ParamLimits

0x6e52,	// (0x00011986) heading_pane_cp3_ParamLimits

0x6e5e,	// (0x00011992) listscroll_popup_graphic_pane_ParamLimits

0x5bfd,	// (0x00010731) fep_hwr_aid_pane_ParamLimits

0x6090,	// (0x00010bc4) aid_touch_sctrl_top_ParamLimits

0x60ab,	// (0x00010bdf) sctrl_sk_top_pane_g1_ParamLimits

0x5e6a,	// (0x0001099e) sctrl_sk_top_pane_g2_ParamLimits

0xfd27,	// (0x0001a85b) sctrl_sk_top_pane_g_ParamLimits

0x60b8,	// (0x00010bec) sctrl_sk_top_pane_t1_ParamLimits

0x6090,	// (0x00010bc4) aid_touch_sctrl_bottom_ParamLimits

0x60b8,	// (0x00010bec) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb93,	// (0x000186c7) aid_area_touch_clock

0x62ab,	// (0x00010ddf) aid_vkb2_area_top_pane_cell_ParamLimits

0x62ab,	// (0x00010ddf) aid_vkb2_area_top_pane_cell

0x63db,	// (0x00010f0f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x63db,	// (0x00010f0f) aid_vkb2_area_bottom_pane_cell

0xe11d,	// (0x00018c51) popup_char_count_window

0xe4f8,	// (0x0001902c) popup_char_count_window_g1

0xe501,	// (0x00019035) popup_char_count_window_g2

0xe50a,	// (0x0001903e) popup_char_count_window_g3

0x0002,

0xfdf3,	// (0x0001a927) popup_char_count_window_g

0xe513,	// (0x00019047) popup_char_count_window_t1

0x6165,	// (0x00010c99) popup_fep_char_preview_window_ParamLimits

0x6165,	// (0x00010c99) popup_fep_char_preview_window

0x62c9,	// (0x00010dfd) vkb2_top_candi_pane_ParamLimits

0x62c9,	// (0x00010dfd) vkb2_top_candi_pane

0xe521,	// (0x00019055) cell_vkb2_top_candi_pane_ParamLimits

0xe521,	// (0x00019055) cell_vkb2_top_candi_pane

0x66dc,	// (0x00011210) bg_popup_fep_char_preview_window_ParamLimits

0x66dc,	// (0x00011210) bg_popup_fep_char_preview_window

0x66ea,	// (0x0001121e) popup_fep_char_preview_window_t1_ParamLimits

0x66ea,	// (0x0001121e) popup_fep_char_preview_window_t1

0xe572,	// (0x000190a6) bg_popup_fep_char_preview_window_g1

0xe57a,	// (0x000190ae) bg_popup_fep_char_preview_window_g2

0xe582,	// (0x000190b6) bg_popup_fep_char_preview_window_g3

0xe58a,	// (0x000190be) bg_popup_fep_char_preview_window_g4

0xe592,	// (0x000190c6) bg_popup_fep_char_preview_window_g5

0x6724,	// (0x00011258) bg_popup_fep_char_preview_window_g6

0xe59a,	// (0x000190ce) bg_popup_fep_char_preview_window_g7

0xe5a2,	// (0x000190d6) bg_popup_fep_char_preview_window_g8

0xe5aa,	// (0x000190de) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfa,	// (0x0001a92e) bg_popup_fep_char_preview_window_g

0x5e6a,	// (0x0001099e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5e6a,	// (0x0001099e) cell_vkb2_top_candi_pane_g1

0x5e78,	// (0x000109ac) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5e78,	// (0x000109ac) cell_vkb2_top_candi_pane_g2

0xe0fc,	// (0x00018c30) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe0fc,	// (0x00018c30) cell_vkb2_top_candi_pane_g3

0x672c,	// (0x00011260) cell_vkb2_top_candi_pane_g4_ParamLimits

0x672c,	// (0x00011260) cell_vkb2_top_candi_pane_g4

0xc81e,	// (0x00017352) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc81e,	// (0x00017352) cell_vkb2_top_candi_pane_g5

0x674d,	// (0x00011281) cell_vkb2_top_candi_pane_g6_ParamLimits

0x674d,	// (0x00011281) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0d,	// (0x0001a941) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0d,	// (0x0001a941) cell_vkb2_top_candi_pane_g

0x675b,	// (0x0001128f) cell_vkb2_top_candi_pane_t1

0x5a5d,	// (0x00010591) aid_size_touch_slider_mark_ParamLimits

0x5a5d,	// (0x00010591) aid_size_touch_slider_mark

0xe204,	// (0x00018d38) grid_graphic2_catg_pane_ParamLimits

0xe204,	// (0x00018d38) grid_graphic2_catg_pane

0xe27e,	// (0x00018db2) popup_grid_graphic2_window_t1_ParamLimits

0xe27e,	// (0x00018db2) popup_grid_graphic2_window_t1

0xe290,	// (0x00018dc4) popup_grid_graphic2_window_t2_ParamLimits

0xe290,	// (0x00018dc4) popup_grid_graphic2_window_t2

0x0001,

0xfdcd,	// (0x0001a901) popup_grid_graphic2_window_t_ParamLimits

0xfdcd,	// (0x0001a901) popup_grid_graphic2_window_t

0x77fc,	// (0x00012330) bg_button_pane_cp05_ParamLimits

0xe3eb,	// (0x00018f1f) cell_graphic2_control_pane_g1_ParamLimits

0xe5b2,	// (0x000190e6) cell_graphic2_catg_pane_ParamLimits

0xe5b2,	// (0x000190e6) cell_graphic2_catg_pane

0x68cc,	// (0x00011400) bg_button_pane_cp12

0xe5c4,	// (0x000190f8) cell_graphic2_catg_pane_g1

0xdb5f,	// (0x00018693) cell_tb_ext_pane_t1_ParamLimits

0x64f8,	// (0x0001102c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x64f8,	// (0x0001102c) vkb2_top_cell_right_narrow_pane

0x6510,	// (0x00011044) vkb2_top_cell_right_wide_pane_ParamLimits

0x6510,	// (0x00011044) vkb2_top_cell_right_wide_pane

0x5bef,	// (0x00010723) bg_vkb2_func_pane_ParamLimits

0x5bef,	// (0x00010723) bg_vkb2_func_pane

0x6581,	// (0x000110b5) vkb2_top_cell_left_pane_g1_ParamLimits

0x5bef,	// (0x00010723) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5bef,	// (0x00010723) bg_vkb2_fuc_pane_cp03

0x65f5,	// (0x00011129) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9550,	// (0x00014084) bg_vkb2_func_pane_g1

0x9558,	// (0x0001408c) bg_vkb2_func_pane_g2

0x9568,	// (0x0001409c) bg_vkb2_func_pane_g3

0x9560,	// (0x00014094) bg_vkb2_func_pane_g4

0x9570,	// (0x000140a4) bg_vkb2_func_pane_g5

0x9578,	// (0x000140ac) bg_vkb2_func_pane_g6

0x9580,	// (0x000140b4) bg_vkb2_func_pane_g7

0x9588,	// (0x000140bc) bg_vkb2_func_pane_g8

0x9548,	// (0x0001407c) bg_vkb2_func_pane_g9

0x0008,

0xfe1a,	// (0x0001a94e) bg_vkb2_func_pane_g

0x5bef,	// (0x00010723) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5bef,	// (0x00010723) bg_vkb2_fuc_pane_cp01

0x6581,	// (0x000110b5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6581,	// (0x000110b5) vkb2_top_cell_right_wide_pane_g1

0x5bef,	// (0x00010723) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5bef,	// (0x00010723) bg_vkb2_fuc_pane_cp02

0x65f5,	// (0x00011129) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x65f5,	// (0x00011129) vkb2_top_cell_right_narrow_pane_g1

0xd780,	// (0x000182b4) aid_touch_area_decrease_ParamLimits

0xd780,	// (0x000182b4) aid_touch_area_decrease

0xd7a4,	// (0x000182d8) aid_touch_area_increase_ParamLimits

0xd7a4,	// (0x000182d8) aid_touch_area_increase

0xd7b0,	// (0x000182e4) aid_touch_area_mute_ParamLimits

0xd7b0,	// (0x000182e4) aid_touch_area_mute

0xd7d4,	// (0x00018308) aid_touch_area_slider_ParamLimits

0xd7d4,	// (0x00018308) aid_touch_area_slider

0xd8c4,	// (0x000183f8) popup_slider_window_g4_ParamLimits

0xd8c4,	// (0x000183f8) popup_slider_window_g4

0xd8d0,	// (0x00018404) popup_slider_window_g5_ParamLimits

0xd8d0,	// (0x00018404) popup_slider_window_g5

0xd8f2,	// (0x00018426) popup_slider_window_g6_ParamLimits

0xd8f2,	// (0x00018426) popup_slider_window_g6

0xd932,	// (0x00018466) popup_slider_window_t2_ParamLimits

0xd932,	// (0x00018466) popup_slider_window_t2

0x0001,

0xfd1b,	// (0x0001a84f) popup_slider_window_t_ParamLimits

0xfd1b,	// (0x0001a84f) popup_slider_window_t

0xd94a,	// (0x0001847e) slider_pane_ParamLimits

0xd94a,	// (0x0001847e) slider_pane

0xe5cd,	// (0x00019101) slider_pane_g1_ParamLimits

0xe5cd,	// (0x00019101) slider_pane_g1

0xe5e1,	// (0x00019115) slider_pane_g2_ParamLimits

0xe5e1,	// (0x00019115) slider_pane_g2

0xe5f7,	// (0x0001912b) slider_pane_g3_ParamLimits

0xe5f7,	// (0x0001912b) slider_pane_g3

0x0003,

0xfe2d,	// (0x0001a961) slider_pane_g_ParamLimits

0xfe2d,	// (0x0001a961) slider_pane_g

0x8f14,	// (0x00013a48) popup_tb_float_extension_window_ParamLimits

0x8f14,	// (0x00013a48) popup_tb_float_extension_window

0xe623,	// (0x00019157) aid_size_cell_tb_float_ext

0x68cc,	// (0x00011400) bg_popup_sub_window_cp28

0xe62f,	// (0x00019163) grid_tb_float_ext_pane

0xe63b,	// (0x0001916f) cell_tb_float_ext_pane_ParamLimits

0xe63b,	// (0x0001916f) cell_tb_float_ext_pane

0xe657,	// (0x0001918b) cell_tb_float_ext_pane_g1

0xe660,	// (0x00019194) grid_highlight_pane_cp12

0x5d44,	// (0x00010878) cell_last_hwr_side_pane_ParamLimits

0x5d44,	// (0x00010878) cell_last_hwr_side_pane

0xbec2,	// (0x000169f6) cell_last_hwr_side_pane_g1

0xe669,	// (0x0001919d) cell_last_hwr_side_pane_g2

0x0001,

0xfe36,	// (0x0001a96a) cell_last_hwr_side_pane_g

0x64a7,	// (0x00010fdb) vkb2_area_bottom_space_btn_pane_ParamLimits

0x64a7,	// (0x00010fdb) vkb2_area_bottom_space_btn_pane

0x5e6a,	// (0x0001099e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe190,	// (0x00018cc4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x675b,	// (0x0001128f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6779,	// (0x000112ad) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6779,	// (0x000112ad) vkb2_area_bottom_space_btn_pane_g1

0x67b3,	// (0x000112e7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x67b3,	// (0x000112e7) vkb2_area_bottom_space_btn_pane_g2

0x67e9,	// (0x0001131d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x67e9,	// (0x0001131d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3b,	// (0x0001a96f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3b,	// (0x0001a96f) vkb2_area_bottom_space_btn_pane_g

0x5cb4,	// (0x000107e8) cel_fep_hwr_func_pane_ParamLimits

0x5cb4,	// (0x000107e8) cel_fep_hwr_func_pane

0x5cf0,	// (0x00010824) cell_hwr_side_button_pane_ParamLimits

0x5cf0,	// (0x00010824) cell_hwr_side_button_pane

0xdb93,	// (0x000186c7) aid_area_touch_clock_ParamLimits

0x6c64,	// (0x00011798) bg_uniindi_top_pane_ParamLimits

0xdba7,	// (0x000186db) uniindi_top_pane_g1_ParamLimits

0xdbbd,	// (0x000186f1) uniindi_top_pane_g2_ParamLimits

0xdbc9,	// (0x000186fd) uniindi_top_pane_g3_ParamLimits

0xdbda,	// (0x0001870e) uniindi_top_pane_g4_ParamLimits

0xfd53,	// (0x0001a887) uniindi_top_pane_g_ParamLimits

0xdbe7,	// (0x0001871b) uniindi_top_pane_t1_ParamLimits

0x6c64,	// (0x00011798) bg_vkb2_func_pane_cp01_ParamLimits

0x6c64,	// (0x00011798) bg_vkb2_func_pane_cp01

0xe672,	// (0x000191a6) cel_fep_hwr_func_pane_g1_ParamLimits

0xe672,	// (0x000191a6) cel_fep_hwr_func_pane_g1

0x6c64,	// (0x00011798) bg_vkb2_func_pane_cp02_ParamLimits

0x6c64,	// (0x00011798) bg_vkb2_func_pane_cp02

0xe672,	// (0x000191a6) cell_hwr_side_button_pane_g1_ParamLimits

0xe672,	// (0x000191a6) cell_hwr_side_button_pane_g1

0x939b,	// (0x00013ecf) status_pane_g4_ParamLimits

0x939b,	// (0x00013ecf) status_pane_g4

0x93b5,	// (0x00013ee9) status_pane_t1

0xbc5e,	// (0x00016792) form2_midp_gauge_slider_cont_pane

0xbc66,	// (0x0001679a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc78,	// (0x000167ac) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc8a,	// (0x000167be) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0001a647) form2_midp_gauge_slider_pane_t_ParamLimits

0xbc9c,	// (0x000167d0) form2_midp_slider_pane_ParamLimits

0x612d,	// (0x00010c61) aid_size_cell_func_vkb2_ParamLimits

0x612d,	// (0x00010c61) aid_size_cell_func_vkb2

0xe60f,	// (0x00019143) slider_pane_g4_ParamLimits

0xe60f,	// (0x00019143) slider_pane_g4

0x6833,	// (0x00011367) form2_midp_gauge_slider_pane_t2_cp01

0x6841,	// (0x00011375) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6841,	// (0x00011375) form2_midp_gauge_slider_pane_t3_cp01

0x685e,	// (0x00011392) form2_midp_slider_pane_cp01

0x68cc,	// (0x00011400) navi_smil_pane

0xe6ab,	// (0x000191df) navi_smil_pane_g1

0xe6b3,	// (0x000191e7) navi_smil_pane_t1

0xe680,	// (0x000191b4) form2_midp_slider_pane_g1

0xe689,	// (0x000191bd) form2_midp_slider_pane_g2

0xe691,	// (0x000191c5) form2_midp_slider_pane_g3

0xe680,	// (0x000191b4) form2_midp_slider_pane_g4

0xe699,	// (0x000191cd) form2_midp_slider_pane_g5

0x0004,

0xfe44,	// (0x0001a978) form2_midp_slider_pane_g

0x6823,	// (0x00011357) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6823,	// (0x00011357) vkb2_area_bottom_space_btn_pane_g4

0x91b3,	// (0x00013ce7) lc0_navi_pane_ParamLimits

0x91b3,	// (0x00013ce7) lc0_navi_pane

0x922f,	// (0x00013d63) lc0_stat_indi_pane_ParamLimits

0x922f,	// (0x00013d63) lc0_stat_indi_pane

0x9246,	// (0x00013d7a) ls0_title_pane_ParamLimits

0x9246,	// (0x00013d7a) ls0_title_pane

0x77fc,	// (0x00012330) bg_popup_sub_pane_cp14_ParamLimits

0xdb7a,	// (0x000186ae) list_uniindi_pane_ParamLimits

0xdb86,	// (0x000186ba) uniindi_top_pane_ParamLimits

0xdc25,	// (0x00018759) list_single_uniindi_pane_g1_ParamLimits

0xdc38,	// (0x0001876c) list_single_uniindi_pane_t1_ParamLimits

0x6867,	// (0x0001139b) lc0_stat_clock_pane_ParamLimits

0x6867,	// (0x0001139b) lc0_stat_clock_pane

0xe6c1,	// (0x000191f5) lc0_stat_indi_pane_g1_ParamLimits

0xe6c1,	// (0x000191f5) lc0_stat_indi_pane_g1

0xe6ce,	// (0x00019202) lc0_stat_indi_pane_g2_ParamLimits

0xe6ce,	// (0x00019202) lc0_stat_indi_pane_g2

0x0001,

0xfe4f,	// (0x0001a983) lc0_stat_indi_pane_g_ParamLimits

0xfe4f,	// (0x0001a983) lc0_stat_indi_pane_g

0x6874,	// (0x000113a8) lc0_uni_indicator_pane_ParamLimits

0x6874,	// (0x000113a8) lc0_uni_indicator_pane

0xe6db,	// (0x0001920f) ls0_title_pane_g1_ParamLimits

0xe6db,	// (0x0001920f) ls0_title_pane_g1

0xe6ef,	// (0x00019223) ls0_title_pane_t1_ParamLimits

0xe6ef,	// (0x00019223) ls0_title_pane_t1

0x6881,	// (0x000113b5) lc0_uni_indicator_pane_g1_ParamLimits

0x6881,	// (0x000113b5) lc0_uni_indicator_pane_g1

0xe725,	// (0x00019259) lc0_stat_clock_pane_t1

0x68cc,	// (0x00011400) main_ai5_pane

0xe733,	// (0x00019267) ai5_sk_pane_ParamLimits

0xe733,	// (0x00019267) ai5_sk_pane

0xe740,	// (0x00019274) cell_ai5_widget_pane_ParamLimits

0xe740,	// (0x00019274) cell_ai5_widget_pane

0xe7b6,	// (0x000192ea) aid_size_cell_widget_grid

0xe7ca,	// (0x000192fe) bg_ai5_widget_pane_ParamLimits

0xe7ca,	// (0x000192fe) bg_ai5_widget_pane

0xe7f2,	// (0x00019326) cell_ai5_widget_pane_g2

0xe802,	// (0x00019336) cell_ai5_widget_pane_g3

0xe816,	// (0x0001934a) cell_ai5_widget_pane_g4

0xe822,	// (0x00019356) cell_ai5_widget_pane_g5

0xe82e,	// (0x00019362) cell_ai5_widget_pane_g6

0xe83c,	// (0x00019370) cell_ai5_widget_pane_g7

0xe884,	// (0x000193b8) cell_ai5_widget_pane_t1_ParamLimits

0xe884,	// (0x000193b8) cell_ai5_widget_pane_t1

0xe8a1,	// (0x000193d5) cell_ai5_widget_pane_t2_ParamLimits

0xe8a1,	// (0x000193d5) cell_ai5_widget_pane_t2

0xe8b9,	// (0x000193ed) cell_ai5_widget_pane_t3_ParamLimits

0xe8b9,	// (0x000193ed) cell_ai5_widget_pane_t3

0xe8d1,	// (0x00019405) cell_ai5_widget_pane_t4_ParamLimits

0xe8d1,	// (0x00019405) cell_ai5_widget_pane_t4

0xe8eb,	// (0x0001941f) cell_ai5_widget_pane_t5_ParamLimits

0xe8eb,	// (0x0001941f) cell_ai5_widget_pane_t5

0xe90a,	// (0x0001943e) cell_ai5_widget_pane_t6_ParamLimits

0xe90a,	// (0x0001943e) cell_ai5_widget_pane_t6

0xe91c,	// (0x00019450) cell_ai5_widget_pane_t7_ParamLimits

0xe91c,	// (0x00019450) cell_ai5_widget_pane_t7

0xe935,	// (0x00019469) cell_ai5_widget_pane_t8_ParamLimits

0xe935,	// (0x00019469) cell_ai5_widget_pane_t8

0x0009,

0xfe69,	// (0x0001a99d) cell_ai5_widget_pane_t_ParamLimits

0xfe69,	// (0x0001a99d) cell_ai5_widget_pane_t

0xe97d,	// (0x000194b1) grid_ai5_widget_pane

0x77fc,	// (0x00012330) highlight_cell_ai5_widget_pane_ParamLimits

0x77fc,	// (0x00012330) highlight_cell_ai5_widget_pane

0xe994,	// (0x000194c8) ai5_sk_left_pane

0xe99e,	// (0x000194d2) ai5_sk_middle_pane

0xe9a8,	// (0x000194dc) ai5_sk_right_pane

0xe9b2,	// (0x000194e6) bg_ai5_widget_pane_g1_ParamLimits

0xe9b2,	// (0x000194e6) bg_ai5_widget_pane_g1

0xe9be,	// (0x000194f2) bg_ai5_widget_pane_g2_ParamLimits

0xe9be,	// (0x000194f2) bg_ai5_widget_pane_g2

0xe9ca,	// (0x000194fe) bg_ai5_widget_pane_g3_ParamLimits

0xe9ca,	// (0x000194fe) bg_ai5_widget_pane_g3

0xe9d6,	// (0x0001950a) bg_ai5_widget_pane_g4_ParamLimits

0xe9d6,	// (0x0001950a) bg_ai5_widget_pane_g4

0xe9e2,	// (0x00019516) bg_ai5_widget_pane_g5_ParamLimits

0xe9e2,	// (0x00019516) bg_ai5_widget_pane_g5

0xe9ee,	// (0x00019522) bg_ai5_widget_pane_g6_ParamLimits

0xe9ee,	// (0x00019522) bg_ai5_widget_pane_g6

0xe9fa,	// (0x0001952e) bg_ai5_widget_pane_g7_ParamLimits

0xe9fa,	// (0x0001952e) bg_ai5_widget_pane_g7

0xea06,	// (0x0001953a) bg_ai5_widget_pane_g8_ParamLimits

0xea06,	// (0x0001953a) bg_ai5_widget_pane_g8

0xea12,	// (0x00019546) bg_ai5_widget_pane_g9_ParamLimits

0xea12,	// (0x00019546) bg_ai5_widget_pane_g9

0x0008,

0xfe7e,	// (0x0001a9b2) bg_ai5_widget_pane_g_ParamLimits

0xfe7e,	// (0x0001a9b2) bg_ai5_widget_pane_g

0xea39,	// (0x0001956d) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x0001956d) cell_shortcut_ai5_widget_pane

0x6aa6,	// (0x000115da) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x0001957f) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x00019588) highlight_cell_shortcut_ai5_widget_pane

0x9550,	// (0x00014084) ai5_sk_left_pane_g1

0xea5c,	// (0x00019590) ai5_sk_left_pane_g2

0xea64,	// (0x00019598) ai5_sk_left_pane_g3

0xea6c,	// (0x000195a0) ai5_sk_left_pane_g4

0x0003,

0xfe91,	// (0x0001a9c5) ai5_sk_left_pane_g

0xea74,	// (0x000195a8) ai5_sk_left_pane_t1

0x9558,	// (0x0001408c) ai5_sk_right_pane_g1

0xea82,	// (0x000195b6) ai5_sk_right_pane_g2

0xea8a,	// (0x000195be) ai5_sk_right_pane_g3

0xea92,	// (0x000195c6) ai5_sk_right_pane_g4

0x0003,

0xfe9a,	// (0x0001a9ce) ai5_sk_right_pane_g

0xea9a,	// (0x000195ce) ai5_sk_right_pane_t1

0x9558,	// (0x0001408c) ai5_sk_middle_pane_g1

0x9550,	// (0x00014084) ai5_sk_middle_pane_g2

0x9570,	// (0x000140a4) ai5_sk_middle_pane_g3

0xea8a,	// (0x000195be) ai5_sk_middle_pane_g4

0xea64,	// (0x00019598) ai5_sk_middle_pane_g5

0xeaa8,	// (0x000195dc) ai5_sk_middle_pane_g6

0xeab0,	// (0x000195e4) ai5_sk_middle_pane_g7

0x0006,

0xfea3,	// (0x0001a9d7) ai5_sk_middle_pane_g

0x9035,	// (0x00013b69) aid_touch_area_size_lc0_ParamLimits

0x9035,	// (0x00013b69) aid_touch_area_size_lc0

0x5e99,	// (0x000109cd) cell_hwr_candidate_pane_t1_ParamLimits

0x9053,	// (0x00013b87) aid_touch_navi_pane

0x9345,	// (0x00013e79) status_dt_navi_pane_ParamLimits

0x9345,	// (0x00013e79) status_dt_navi_pane

0x9352,	// (0x00013e86) status_dt_sta_pane_ParamLimits

0x9352,	// (0x00013e86) status_dt_sta_pane

0xeab8,	// (0x000195ec) dt_sta_controll_pane

0xeac5,	// (0x000195f9) dt_sta_indi_pane

0xead6,	// (0x0001960a) dt_sta_title_pane

0x6c64,	// (0x00011798) bg_dt_sta_indi_pane_ParamLimits

0x6c64,	// (0x00011798) bg_dt_sta_indi_pane

0xeae9,	// (0x0001961d) dt_sta_battery_pane

0xeaf1,	// (0x00019625) dt_sta_indi_pane_g1

0xeafa,	// (0x0001962e) dt_sta_indi_pane_g2

0xeb03,	// (0x00019637) dt_sta_indi_pane_g3

0x0002,

0xfeb2,	// (0x0001a9e6) dt_sta_indi_pane_g

0xeb0c,	// (0x00019640) dt_sta_signal_pane

0x77fc,	// (0x00012330) bg_dt_sta_title_pane_ParamLimits

0x77fc,	// (0x00012330) bg_dt_sta_title_pane

0xeb15,	// (0x00019649) dt_sta_title_pane_g1

0xeb1d,	// (0x00019651) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x00019651) dt_sta_title_pane_t1

0x68cc,	// (0x00011400) bg_dt_sta_control_pane

0xeb32,	// (0x00019666) dt_sta_controll_pane_g1

0xeb3b,	// (0x0001966f) bg_dt_sta_title_pane_g1

0xeb44,	// (0x00019678) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x00019681) bg_dt_sta_title_pane_g3

0x0002,

0xfeb9,	// (0x0001a9ed) bg_dt_sta_title_pane_g

0xbec2,	// (0x000169f6) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x0001968a) dt_sta_signal_pane_g1

0xeb5e,	// (0x00019692) dt_sta_signal_pane_g2

0x0001,

0xfec0,	// (0x0001a9f4) dt_sta_signal_pane_g

0xeb66,	// (0x0001969a) dt_sta_battery_pane_g1

0xeb6f,	// (0x000196a3) dt_sta_battery_pane_t1

0xbec2,	// (0x000169f6) bg_dt_sta_control_pane_g1

0x80ba,	// (0x00012bee) fep_china_uni_eep_pane

0x80c2,	// (0x00012bf6) fep_china_uni_entry_pane_ParamLimits

0x80d2,	// (0x00012c06) popup_fep_china_uni_window_g1_ParamLimits

0x80e2,	// (0x00012c16) popup_fep_china_uni_window_g2_ParamLimits

0x80e2,	// (0x00012c16) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001a28c) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001a28c) popup_fep_china_uni_window_g

0xeb7e,	// (0x000196b2) fep_china_uni_eep_pane_g1

0xeb86,	// (0x000196ba) fep_china_uni_eep_pane_t1

0xe6a2,	// (0x000191d6) aid_touch_area_size_smil_player

0x91ab,	// (0x00013cdf) lc0_clock_pane

0x93a9,	// (0x00013edd) status_pane_g5_ParamLimits

0x93a9,	// (0x00013edd) status_pane_g5

0x8b99,	// (0x000136cd) popup_keymap_window

0x9367,	// (0x00013e9b) status_icon_pane

0xe802,	// (0x00019336) cell_ai5_widget_pane_g3_ParamLimits

0xe816,	// (0x0001934a) cell_ai5_widget_pane_g4_ParamLimits

0xe822,	// (0x00019356) cell_ai5_widget_pane_g5_ParamLimits

0xe848,	// (0x0001937c) cell_ai5_widget_pane_g8_ParamLimits

0xe848,	// (0x0001937c) cell_ai5_widget_pane_g8

0xe85c,	// (0x00019390) cell_ai5_widget_pane_g9_ParamLimits

0xe85c,	// (0x00019390) cell_ai5_widget_pane_g9

0xe870,	// (0x000193a4) cell_ai5_widget_pane_g10_ParamLimits

0xe870,	// (0x000193a4) cell_ai5_widget_pane_g10

0xeb95,	// (0x000196c9) status_icon_pane_g1

0x68cc,	// (0x00011400) bg_popup_sub_pane_cp13

0xeb9d,	// (0x000196d1) popup_keymap_window_t1

0x8923,	// (0x00013457) control_pane_g6_ParamLimits

0x8923,	// (0x00013457) control_pane_g6

0x8930,	// (0x00013464) control_pane_g7_ParamLimits

0x8930,	// (0x00013464) control_pane_g7

0x893d,	// (0x00013471) control_pane_g8_ParamLimits

0x893d,	// (0x00013471) control_pane_g8

0xeab8,	// (0x000195ec) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x000195f9) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x0001960a) dt_sta_title_pane_ParamLimits

0x7199,	// (0x00011ccd) aid_size_touch_scroll_bar_cale

0x4edb,	// (0x0000fa0f) popup_discreet_window_ParamLimits

0x4edb,	// (0x0000fa0f) popup_discreet_window

0x4f69,	// (0x0000fa9d) popup_sk_window

0x9c16,	// (0x0001474a) bg_popup_sub_pane_cp28_ParamLimits

0x9c16,	// (0x0001474a) bg_popup_sub_pane_cp28

0xebab,	// (0x000196df) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x000196df) popup_discreet_window_g1

0xebcb,	// (0x000196ff) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x000196ff) popup_discreet_window_t1

0xebe9,	// (0x0001971d) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x0001971d) popup_discreet_window_t2

0x0002,

0xfec5,	// (0x0001a9f9) popup_discreet_window_t_ParamLimits

0xfec5,	// (0x0001a9f9) popup_discreet_window_t

0x6894,	// (0x000113c8) popup_sk_window_g1

0x689e,	// (0x000113d2) popup_sk_window_g2

0x0001,

0xfecc,	// (0x0001aa00) popup_sk_window_g

0xec3b,	// (0x0001976f) popup_sk_window_t1

0xec49,	// (0x0001977d) popup_sk_window_t1_copy1

0xe7f2,	// (0x00019326) cell_ai5_widget_pane_g2_ParamLimits

0xe947,	// (0x0001947b) cell_ai5_widget_pane_t9_ParamLimits

0xe947,	// (0x0001947b) cell_ai5_widget_pane_t9

0x68cc,	// (0x00011400) main_fep_fshwr2_pane

0xec57,	// (0x0001978b) aid_fshwr2_btn_pane

0xec5f,	// (0x00019793) aid_fshwr2_syb_pane

0xec67,	// (0x0001979b) aid_fshwr2_txt_pane

0xec6f,	// (0x000197a3) fshwr2_func_candi_pane

0xec79,	// (0x000197ad) fshwr2_hwr_syb_pane

0xec83,	// (0x000197b7) fshwr2_icf_pane

0x68cc,	// (0x00011400) fshwr2_icf_bg_pane

0xeca5,	// (0x000197d9) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x000197d9) fshwr2_icf_pane_t1

0xbec2,	// (0x000169f6) fshwr2_func_candi_pane_g1

0xecbc,	// (0x000197f0) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x000197f0) fshwr2_func_candi_row_pane

0xeccd,	// (0x00019801) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x00019801) cell_fshwr2_syb_pane

0xc14c,	// (0x00016c80) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc14c,	// (0x00016c80) fshwr2_hwr_syb_pane_g1

0x68cc,	// (0x00011400) bg_popup_call_pane_cp01

0xece7,	// (0x0001981b) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x0001981b) fshwr2_func_candi_cell_pane

0xed19,	// (0x0001984d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x0001984d) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00019867) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00019867) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x00019887) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x00019887) fshwr2_func_candi_cell_pane_t1

0x68cc,	// (0x00011400) bg_button_pane_cp08

0x8648,	// (0x0001317c) cell_fshwr2_syb_bg_pane

0xed66,	// (0x0001989a) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x000198a2) cell_fshwr2_syb_bg_pane_t1

0x77fc,	// (0x00012330) main_tmo_pane

0xa740,	// (0x00015274) uni_indicator_pane_g1_ParamLimits

0xa755,	// (0x00015289) uni_indicator_pane_g2_ParamLimits

0xa76b,	// (0x0001529f) uni_indicator_pane_g3_ParamLimits

0xa781,	// (0x000152b5) uni_indicator_pane_g4_ParamLimits

0xa781,	// (0x000152b5) uni_indicator_pane_g4

0xa795,	// (0x000152c9) uni_indicator_pane_g5_ParamLimits

0xa795,	// (0x000152c9) uni_indicator_pane_g5

0xa7a9,	// (0x000152dd) uni_indicator_pane_g6_ParamLimits

0xa7a9,	// (0x000152dd) uni_indicator_pane_g6

0xf955,	// (0x0001a489) uni_indicator_pane_g_ParamLimits

0xd750,	// (0x00018284) popup_tmo_note_window_ParamLimits

0xd750,	// (0x00018284) popup_tmo_note_window

0x68cc,	// (0x00011400) fshwr2_bg_pane

0xed44,	// (0x00019878) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00019878) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed1,	// (0x0001aa05) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed1,	// (0x0001aa05) fshwr2_func_candi_cell_pane_g

0xbec2,	// (0x000169f6) bg_popup_window_pane_cp01

0xed7d,	// (0x000198b1) bg_popup_window_pane_g1_cp01

0xed86,	// (0x000198ba) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x000198ba) bg_popup_window_pane_cp22

0xed94,	// (0x000198c8) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x000198c8) listscroll_tmo_link_pane

0xedd4,	// (0x00019908) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x00019908) popup_tmo_note_window_g1

0xede1,	// (0x00019915) tmo_note_info_pane_ParamLimits

0xede1,	// (0x00019915) tmo_note_info_pane

0xedfb,	// (0x0001992f) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x0001992f) list_tmo_note_info_pane_g1

0xee12,	// (0x00019946) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00019946) list_tmo_note_info_pane_g2

0x0001,

0xfed6,	// (0x0001aa0a) list_tmo_note_info_pane_g_ParamLimits

0xfed6,	// (0x0001aa0a) list_tmo_note_info_pane_g

0xee2e,	// (0x00019962) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x00019962) list_tmo_note_info_text_pane

0xeeb3,	// (0x000199e7) list_tmo_link_pane

0xeec0,	// (0x000199f4) scroll_pane_cp20

0xeecd,	// (0x00019a01) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x00019a01) list_single_tmo_link_pane

0xeedd,	// (0x00019a11) list_single_tmo_link_pane_t1

0xeeeb,	// (0x00019a1f) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x00019a1f) list_tmo_note_info_text_pane_t1

0x7a24,	// (0x00012558) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7a24,	// (0x00012558) aid_size_touch_scroll_bar_cp01

0x78b6,	// (0x000123ea) aid_size_touch_slider_marker

0x4f51,	// (0x0000fa85) popup_settings_window_ParamLimits

0x4f51,	// (0x0000fa85) popup_settings_window

0x89fe,	// (0x00013532) popup_candi_list_indi_window

0x9053,	// (0x00013b87) aid_touch_navi_pane_ParamLimits

0x6064,	// (0x00010b98) rs_clock_indi_pane

0x606d,	// (0x00010ba1) sctrl_sk_bottom_pane_ParamLimits

0x607e,	// (0x00010bb2) sctrl_sk_top_pane_ParamLimits

0x617f,	// (0x00010cb3) popup_fep_tooltip_window

0xe7b6,	// (0x000192ea) aid_size_cell_widget_grid_ParamLimits

0xe7e6,	// (0x0001931a) cell_ai5_widget_pane_g1_ParamLimits

0xe7e6,	// (0x0001931a) cell_ai5_widget_pane_g1

0xe82e,	// (0x00019362) cell_ai5_widget_pane_g6_ParamLimits

0xe83c,	// (0x00019370) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe54,	// (0x0001a988) cell_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0001a988) cell_ai5_widget_pane_g

0xe96b,	// (0x0001949f) cell_ai5_widget_pane_t10_ParamLimits

0xe96b,	// (0x0001949f) cell_ai5_widget_pane_t10

0xe97d,	// (0x000194b1) grid_ai5_widget_pane_ParamLimits

0xea1e,	// (0x00019552) cell_contacts_ai5_widget_pane_ParamLimits

0xea1e,	// (0x00019552) cell_contacts_ai5_widget_pane

0xebfe,	// (0x00019732) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x00019732) popup_discreet_window_t3

0xec8d,	// (0x000197c1) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x000197c1) popup_fshwr2_char_preview_window

0xee4c,	// (0x00019980) tmo_note_info_pane_t1

0xee61,	// (0x00019995) tmo_note_info_pane_t2

0xee7a,	// (0x000199ae) tmo_note_info_pane_t3

0xee8f,	// (0x000199c3) tmo_note_info_pane_t4

0xeea1,	// (0x000199d5) tmo_note_info_pane_t5

0x0004,

0xfedb,	// (0x0001aa0f) tmo_note_info_pane_t

0xeeb3,	// (0x000199e7) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x000199f4) scroll_pane_cp20_ParamLimits

0x68cc,	// (0x00011400) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00019a38) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00019a46) popup_candi_list_indi_window_g1

0xef1b,	// (0x00019a4f) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00019a5b) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x00019a6f) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x00019a7e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee6,	// (0x0001aa1a) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x00019a91) cell_contacts_ai5_widget_pane_t1

0x77fc,	// (0x00012330) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00019b0b) settings_container_pane

0x8648,	// (0x0001317c) listscroll_set_pane_copy1

0xb3cf,	// (0x00015f03) scroll_pane_cp121_copy1

0xefe3,	// (0x00019b17) set_content_pane_copy1

0xefeb,	// (0x00019b1f) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00019b1f) aid_height_set_list_copy1

0xa9d1,	// (0x00015505) aid_size_parent_copy1_ParamLimits

0xa9d1,	// (0x00015505) aid_size_parent_copy1

0xeff7,	// (0x00019b2b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00019b2b) button_value_adjust_pane_cp6_copy1

0x89d6,	// (0x0001350a) list_highlight_pane_cp2_copy1_ParamLimits

0x89d6,	// (0x0001350a) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00019b3f) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00019b3f) list_set_pane_copy1

0xef72,	// (0x00019aa6) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00019aa6) main_pane_set_t1_copy1

0xefac,	// (0x00019ae0) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00019ae0) main_pane_set_t2_copy1

0xf0d2,	// (0x00019c06) main_pane_set_t3_copy1

0xf0e0,	// (0x00019c14) main_pane_set_t4_copy1

0xefcb,	// (0x00019aff) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00019aff) set_content_pane_g1_copy1

0xf0ee,	// (0x00019c22) setting_code_pane_copy1

0xf0f8,	// (0x00019c2c) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00019c2c) setting_slider_pane_copy1

0xf102,	// (0x00019c36) setting_text_pane_copy1

0xf10c,	// (0x00019c40) setting_volume_pane_copy1

0xf115,	// (0x00019c49) settings_code_pane_cp2_copy1

0xf11d,	// (0x00019c51) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00019c51) settings_code_pane_cp_copy1

0xf131,	// (0x00019c65) volume_set_pane_copy1

0xf13d,	// (0x00019c71) volume_set_pane_g10_copy1

0xf149,	// (0x00019c7d) volume_set_pane_g1_copy1

0xf153,	// (0x00019c87) volume_set_pane_g2_copy1

0xf15d,	// (0x00019c91) volume_set_pane_g3_copy1

0xf167,	// (0x00019c9b) volume_set_pane_g4_copy1

0xf171,	// (0x00019ca5) volume_set_pane_g5_copy1

0xf17b,	// (0x00019caf) volume_set_pane_g6_copy1

0xf185,	// (0x00019cb9) volume_set_pane_g7_copy1

0xf18f,	// (0x00019cc3) volume_set_pane_g8_copy1

0xf199,	// (0x00019ccd) volume_set_pane_g9_copy1

0x69c0,	// (0x000114f4) bg_set_opt_pane_cp_copy1_ParamLimits

0x69c0,	// (0x000114f4) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00019cd7) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00019cd7) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00019cf5) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00019cf5) setting_slider_pane_t2_copy1

0xf1db,	// (0x00019d0f) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x00019d0f) setting_slider_pane_t3_copy1

0xf1f3,	// (0x00019d27) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x00019d27) slider_set_pane_copy1

0x7938,	// (0x0001246c) set_opt_bg_pane_g1_copy2

0x7940,	// (0x00012474) set_opt_bg_pane_g2_copy2

0xf209,	// (0x00019d3d) set_opt_bg_pane_g3_copy2

0x7950,	// (0x00012484) set_opt_bg_pane_g4_copy2

0x7958,	// (0x0001248c) set_opt_bg_pane_g5_copy2

0x7960,	// (0x00012494) set_opt_bg_pane_g6_copy2

0xf213,	// (0x00019d47) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x00019d51) set_opt_bg_pane_g8_copy2

0xf227,	// (0x00019d5b) set_opt_bg_pane_g9_copy2

0xf231,	// (0x00019d65) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x00019d65) aid_size_touch_slider_mark_copy1

0xf245,	// (0x00019d79) slider_set_pane_g1_copy1

0xf24e,	// (0x00019d82) slider_set_pane_g2_copy1

0xb4b0,	// (0x00015fe4) slider_set_pane_g3_copy1_ParamLimits

0xb4b0,	// (0x00015fe4) slider_set_pane_g3_copy1

0xb4c4,	// (0x00015ff8) slider_set_pane_g4_copy1_ParamLimits

0xb4c4,	// (0x00015ff8) slider_set_pane_g4_copy1

0xb4dc,	// (0x00016010) slider_set_pane_g5_copy1_ParamLimits

0xb4dc,	// (0x00016010) slider_set_pane_g5_copy1

0xb4b0,	// (0x00015fe4) slider_set_pane_g6_copy1_ParamLimits

0xb4b0,	// (0x00015fe4) slider_set_pane_g6_copy1

0xf256,	// (0x00019d8a) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x00019d8a) slider_set_pane_g7_copy1

0x68e0,	// (0x00011414) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x00019da0) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x00019da9) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x00019db9) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x00019dc9) slider_set_pane_cp_copy1

0xf2a5,	// (0x00019dd9) input_focus_pane_cp1_copy1

0xf2ae,	// (0x00019de2) list_set_text_pane_copy1

0xf2b6,	// (0x00019dea) setting_text_pane_g1_copy1

0x6a19,	// (0x0001154d) set_text_pane_t1_copy1

0xf2a5,	// (0x00019dd9) input_focus_pane_cp2_copy1

0xf2b6,	// (0x00019dea) setting_code_pane_g1_copy1

0xf2bf,	// (0x00019df3) setting_code_pane_t1_copy1

0xf2cd,	// (0x00019e01) list_set_graphic_pane_copy1

0x68e0,	// (0x00011414) bg_set_opt_pane_cp4_copy1

0x8342,	// (0x00012e76) list_set_graphic_pane_g1_copy1_ParamLimits

0x8342,	// (0x00012e76) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x00019e13) list_set_graphic_pane_g2_copy1

0x835a,	// (0x00012e8e) list_set_graphic_pane_t1_copy1_ParamLimits

0x835a,	// (0x00012e8e) list_set_graphic_pane_t1_copy1

0xbec2,	// (0x000169f6) rs_clock_indi_pane_g1

0xf2e7,	// (0x00019e1b) rs_clock_indi_pane_t1

0xf2f5,	// (0x00019e29) rs_indi_pane

0xf2fd,	// (0x00019e31) rs_indi_pane_g1

0xf306,	// (0x00019e3a) rs_indi_pane_g2

0xf30f,	// (0x00019e43) rs_indi_pane_g3

0x0002,

0xfeed,	// (0x0001aa21) rs_indi_pane_g

0x8648,	// (0x0001317c) bg_popup_preview_window_pane_cp03

0xf318,	// (0x00019e4c) popup_fep_tooltip_window_t1

0xcda6,	// (0x000178da) popup_note2_window_g2_ParamLimits

0xcda6,	// (0x000178da) popup_note2_window_g2

0x0001,

0xfc8b,	// (0x0001a7bf) popup_note2_window_g_ParamLimits

0xfc8b,	// (0x0001a7bf) popup_note2_window_g

0xd39d,	// (0x00017ed1) bg_popup_sub_pane_cp11_ParamLimits

0xd3aa,	// (0x00017ede) cell_ai3_links_pane_g1_ParamLimits

0xd3c1,	// (0x00017ef5) cell_ai3_links_pane_t1

0x6a19,	// (0x0001154d) set_text_pane_t1_copy1_ParamLimits

0x8555,	// (0x00013089) cell_graphic_popup_pane_cp2_ParamLimits

0x8555,	// (0x00013089) cell_graphic_popup_pane_cp2

0xf326,	// (0x00019e5a) cell_graphic_popup_pane_g1_cp2

0x6fac,	// (0x00011ae0) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x00019e62) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x00019e6a) cell_graphic_popup_pane_t2_cp2

0x6fbd,	// (0x00011af1) grid_highlight_pane_cp3_cp2

0x7d11,	// (0x00012845) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x77fc,	// (0x00012330) main_tmo_pane_ParamLimits

0xd744,	// (0x00018278) popup_tmo_big_image_note_window

0xe7d6,	// (0x0001930a) cell_ai5_widget_list_pane

0xe7de,	// (0x00019312) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x00019980) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x00019995) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x000199ae) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x000199c3) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x000199d5) tmo_note_info_pane_t5_ParamLimits

0xfedb,	// (0x0001aa0f) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00019b0b) settings_container_pane_ParamLimits

0xf29d,	// (0x00019dd1) indicator_popup_pane_cp5

0xf29d,	// (0x00019dd1) indicator_popup_pane_cp6

0xf2cd,	// (0x00019e01) list_set_graphic_pane_copy1_ParamLimits

0x68cc,	// (0x00011400) bg_popup_window_pane_cp23

0xf344,	// (0x00019e78) popup_tmo_big_image_note_window_g1

0xf350,	// (0x00019e84) popup_tmo_big_image_note_window_t1

0xf360,	// (0x00019e94) popup_tmo_big_image_note_window_t2

0xf370,	// (0x00019ea4) popup_tmo_big_image_note_window_t3

0x0002,

0xfef4,	// (0x0001aa28) popup_tmo_big_image_note_window_t

0xf380,	// (0x00019eb4) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x00019ebc) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x00019eca) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x00019eca) cell_ai5_widget_list_row_pane

0xf3af,	// (0x00019ee3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x00019ee3) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x00019ef0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x00019ef0) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x00019f08) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x00019f08) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefb,	// (0x0001aa2f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefb,	// (0x0001aa2f) cell_ai5_widget_list_row_pane_t

0x4dfe,	// (0x0000f932) main_fep_vtchi_ss_pane

0xf3e6,	// (0x00019f1a) popup_fep_char_pre_window

0xf3ee,	// (0x00019f22) popup_fep_ituss_window

0xf3f9,	// (0x00019f2d) popup_fep_vkbss_window

0xf404,	// (0x00019f38) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x00019f38) grid_vkbss_keypad_pane

0xf414,	// (0x00019f48) ituss_keypad_pane

0xf41c,	// (0x00019f50) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x00019f50) aid_vkbss_key_offset

0xf42b,	// (0x00019f5f) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00019f5f) cell_vkbss_key_pane

0xf441,	// (0x00019f75) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x00019f75) bg_cell_vkbss_key_g1

0xf44d,	// (0x00019f81) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x00019f81) cell_vkbss_key_3p_pane

0xf467,	// (0x00019f9b) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x00019f9b) cell_vkbss_key_g1

0xf481,	// (0x00019fb5) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x00019fb5) cell_vkbss_key_t1

0xf4ac,	// (0x00019fe0) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x00019fe0) cell_ituss_key_pane

0xf4bb,	// (0x00019fef) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x00019fef) bg_cell_ituss_key_g1

0xf4c7,	// (0x00019ffb) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x00019ffb) cell_ituss_key_pane_g1

0xf4d3,	// (0x0001a007) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x0001a007) cell_ituss_key_pane_g2

0x0001,

0xff00,	// (0x0001aa34) cell_ituss_key_pane_g_ParamLimits

0xff00,	// (0x0001aa34) cell_ituss_key_pane_g

0xf4e7,	// (0x0001a01b) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0001a01b) cell_ituss_key_t1

0xf505,	// (0x0001a039) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0001a039) cell_ituss_key_t2

0xf524,	// (0x0001a058) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0001a058) cell_ituss_key_t3

0xf543,	// (0x0001a077) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0001a077) cell_ituss_key_t4

0x0003,

0xff05,	// (0x0001aa39) cell_ituss_key_t_ParamLimits

0xff05,	// (0x0001aa39) cell_ituss_key_t

0xf562,	// (0x0001a096) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0001a09e) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0001a0a6) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0e,	// (0x0001aa42) cell_vkbss_key_3p_pane_g

0x68cc,	// (0x00011400) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0001a0ae) popup_fep_char_pre_window_t1

0xe7ac,	// (0x000192e0) main_ai5_sk_pane

0xef1b,	// (0x00019a4f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00019a5b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x00019a6f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x00019a7e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee6,	// (0x0001aa1a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x00019a91) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x77fc,	// (0x00012330) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0001a0bd) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
