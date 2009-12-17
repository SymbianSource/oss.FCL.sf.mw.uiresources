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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000096a8 };

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
0x791c,	// (0x00010fc4) Screen

0x7930,	// (0x00010fd8) application_window_ParamLimits

0x7930,	// (0x00010fd8) application_window

0x794a,	// (0x00010ff2) screen_g1

0x5d55,	// (0x0000f3fd) area_bottom_pane_ParamLimits

0x5d55,	// (0x0000f3fd) area_bottom_pane

0x5e15,	// (0x0000f4bd) area_top_pane_ParamLimits

0x5e15,	// (0x0000f4bd) area_top_pane

0x5eb3,	// (0x0000f55b) main_pane_ParamLimits

0x5eb3,	// (0x0000f55b) main_pane

0x7954,	// (0x00010ffc) misc_graphics

0xa020,	// (0x000136c8) battery_pane_ParamLimits

0xa020,	// (0x000136c8) battery_pane

0xada4,	// (0x0001444c) bg_status_flat_pane_g8

0xadac,	// (0x00014454) bg_status_flat_pane_g9

0xa0e2,	// (0x0001378a) context_pane_ParamLimits

0xa0e2,	// (0x0001378a) context_pane

0xa1f8,	// (0x000138a0) navi_pane_ParamLimits

0xa1f8,	// (0x000138a0) navi_pane

0xa275,	// (0x0001391d) signal_pane_ParamLimits

0xa275,	// (0x0001391d) signal_pane

0x0008,

0xf8ad,	// (0x00018f55) bg_status_flat_pane_g

0xa2e2,	// (0x0001398a) status_pane_g1_ParamLimits

0xa2e2,	// (0x0001398a) status_pane_g1

0xa2f6,	// (0x0001399e) status_pane_g2_ParamLimits

0xa2f6,	// (0x0001399e) status_pane_g2

0xa302,	// (0x000139aa) status_pane_g3_ParamLimits

0xa302,	// (0x000139aa) status_pane_g3

0x0004,

0xf7db,	// (0x00018e83) status_pane_g_ParamLimits

0xf7db,	// (0x00018e83) status_pane_g

0xa336,	// (0x000139de) title_pane_ParamLimits

0xa336,	// (0x000139de) title_pane

0xa373,	// (0x00013a1b) uni_indicator_pane_ParamLimits

0xa373,	// (0x00013a1b) uni_indicator_pane

0x998d,	// (0x00013035) bg_list_pane_ParamLimits

0x998d,	// (0x00013035) bg_list_pane

0x99ad,	// (0x00013055) find_pane

0x99b5,	// (0x0001305d) listscroll_app_pane_ParamLimits

0x99b5,	// (0x0001305d) listscroll_app_pane

0x99c1,	// (0x00013069) listscroll_form_pane

0x99c9,	// (0x00013071) listscroll_gen_pane_ParamLimits

0x99c9,	// (0x00013071) listscroll_gen_pane

0x99c1,	// (0x00013069) listscroll_set_pane

0x8b86,	// (0x0001222e) main_idle_act_pane

0x9665,	// (0x00012d0d) main_idle_trad_pane

0x9665,	// (0x00012d0d) main_list_empty_pane

0x99ef,	// (0x00013097) main_midp_pane

0x99fb,	// (0x000130a3) main_pane_g1_ParamLimits

0x99fb,	// (0x000130a3) main_pane_g1

0x9a09,	// (0x000130b1) popup_ai_message_window_ParamLimits

0x9a09,	// (0x000130b1) popup_ai_message_window

0x9ab3,	// (0x0001315b) popup_fep_china_uni_window_ParamLimits

0x9ab3,	// (0x0001315b) popup_fep_china_uni_window

0x9b0f,	// (0x000131b7) popup_fep_japan_candidate_window_ParamLimits

0x9b0f,	// (0x000131b7) popup_fep_japan_candidate_window

0x9b2f,	// (0x000131d7) popup_fep_japan_predictive_window_ParamLimits

0x9b2f,	// (0x000131d7) popup_fep_japan_predictive_window

0x9b5f,	// (0x00013207) popup_find_window

0x9b6c,	// (0x00013214) popup_grid_graphic_window_ParamLimits

0x9b6c,	// (0x00013214) popup_grid_graphic_window

0x9b94,	// (0x0001323c) popup_large_graphic_colour_window

0x9bba,	// (0x00013262) popup_menu_window_ParamLimits

0x9bba,	// (0x00013262) popup_menu_window

0x9d72,	// (0x0001341a) popup_note_image_window

0x9d5e,	// (0x00013406) popup_note_wait_window_ParamLimits

0x9d5e,	// (0x00013406) popup_note_wait_window

0x9d5e,	// (0x00013406) popup_note_window_ParamLimits

0x9d5e,	// (0x00013406) popup_note_window

0x9dc8,	// (0x00013470) popup_query_code_window_ParamLimits

0x9dc8,	// (0x00013470) popup_query_code_window

0x9ddc,	// (0x00013484) popup_query_data_code_window_ParamLimits

0x9ddc,	// (0x00013484) popup_query_data_code_window

0x9df9,	// (0x000134a1) popup_query_data_window_ParamLimits

0x9df9,	// (0x000134a1) popup_query_data_window

0x9e15,	// (0x000134bd) popup_query_sat_info_window_ParamLimits

0x9e15,	// (0x000134bd) popup_query_sat_info_window

0x9e4e,	// (0x000134f6) popup_snote_single_graphic_window_ParamLimits

0x9e4e,	// (0x000134f6) popup_snote_single_graphic_window

0x9e4e,	// (0x000134f6) popup_snote_single_text_window_ParamLimits

0x9e4e,	// (0x000134f6) popup_snote_single_text_window

0x9e63,	// (0x0001350b) popup_sub_window_general

0x9f93,	// (0x0001363b) popup_window_general_ParamLimits

0x9f93,	// (0x0001363b) popup_window_general

0x9fa8,	// (0x00013650) power_save_pane

0x6612,	// (0x0000fcba) control_pane_g1_ParamLimits

0x6612,	// (0x0000fcba) control_pane_g1

0x663b,	// (0x0000fce3) control_pane_g2_ParamLimits

0x663b,	// (0x0000fce3) control_pane_g2

0x992e,	// (0x00012fd6) control_pane_g3_ParamLimits

0x992e,	// (0x00012fd6) control_pane_g3

0x0007,

0xf7c3,	// (0x00018e6b) control_pane_g_ParamLimits

0xf7c3,	// (0x00018e6b) control_pane_g

0x6679,	// (0x0000fd21) control_pane_t1_ParamLimits

0x6679,	// (0x0000fd21) control_pane_t1

0x66cb,	// (0x0000fd73) control_pane_t2_ParamLimits

0x66cb,	// (0x0000fd73) control_pane_t2

0x0002,

0xf7d4,	// (0x00018e7c) control_pane_t_ParamLimits

0xf7d4,	// (0x00018e7c) control_pane_t

0x984f,	// (0x00012ef7) navi_navi_volume_pane_cp1

0x9858,	// (0x00012f00) status_small_icon_pane

0x9860,	// (0x00012f08) status_small_pane_g1_ParamLimits

0x9860,	// (0x00012f08) status_small_pane_g1

0x9894,	// (0x00012f3c) status_small_pane_g2_ParamLimits

0x9894,	// (0x00012f3c) status_small_pane_g2

0x98a0,	// (0x00012f48) status_small_pane_g3_ParamLimits

0x98a0,	// (0x00012f48) status_small_pane_g3

0x98ac,	// (0x00012f54) status_small_pane_g4_ParamLimits

0x98ac,	// (0x00012f54) status_small_pane_g4

0x98b8,	// (0x00012f60) status_small_pane_g5_ParamLimits

0x98b8,	// (0x00012f60) status_small_pane_g5

0x98c7,	// (0x00012f6f) status_small_pane_g6_ParamLimits

0x98c7,	// (0x00012f6f) status_small_pane_g6

0x0007,

0xf7b2,	// (0x00018e5a) status_small_pane_g_ParamLimits

0xf7b2,	// (0x00018e5a) status_small_pane_g

0x98f7,	// (0x00012f9f) status_small_pane_t1

0x991a,	// (0x00012fc2) status_small_wait_pane_ParamLimits

0x991a,	// (0x00012fc2) status_small_wait_pane

0x9079,	// (0x00012721) aid_levels_signal_ParamLimits

0x9079,	// (0x00012721) aid_levels_signal

0x908b,	// (0x00012733) signal_pane_g1_ParamLimits

0x908b,	// (0x00012733) signal_pane_g1

0x90a0,	// (0x00012748) signal_pane_g2_ParamLimits

0x90a0,	// (0x00012748) signal_pane_g2

0x0001,

0xf747,	// (0x00018def) signal_pane_g_ParamLimits

0xf747,	// (0x00018def) signal_pane_g

0x90b5,	// (0x0001275d) context_pane_g1

0x795e,	// (0x00011006) title_pane_g1

0x7994,	// (0x0001103c) title_pane_t1

0x79fc,	// (0x000110a4) title_pane_t2

0x7a22,	// (0x000110ca) title_pane_t3

0x0002,

0xf59b,	// (0x00018c43) title_pane_t

0xa38b,	// (0x00013a33) aid_levels_battery_ParamLimits

0xa38b,	// (0x00013a33) aid_levels_battery

0xa39f,	// (0x00013a47) battery_pane_g1_ParamLimits

0xa39f,	// (0x00013a47) battery_pane_g1

0xa3b5,	// (0x00013a5d) battery_pane_g2_ParamLimits

0xa3b5,	// (0x00013a5d) battery_pane_g2

0x0001,

0xf7e6,	// (0x00018e8e) battery_pane_g_ParamLimits

0xf7e6,	// (0x00018e8e) battery_pane_g

0xb6e0,	// (0x00014d88) uni_indicator_pane_g1

0xb6f5,	// (0x00014d9d) uni_indicator_pane_g2

0xb70b,	// (0x00014db3) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x00018ffd) uni_indicator_pane_g

0x94d7,	// (0x00012b7f) navi_icon_pane_ParamLimits

0x94d7,	// (0x00012b7f) navi_icon_pane

0x9420,	// (0x00012ac8) navi_midp_pane

0x94f3,	// (0x00012b9b) navi_navi_pane

0x94fd,	// (0x00012ba5) navi_text_pane_ParamLimits

0x94fd,	// (0x00012ba5) navi_text_pane

0x794a,	// (0x00010ff2) status_small_wait_pane_g1

0x7e6b,	// (0x00011513) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x00018ff8) status_small_wait_pane_g

0xb405,	// (0x00014aad) navi_navi_icon_text_pane

0xb40d,	// (0x00014ab5) navi_navi_pane_g1_ParamLimits

0xb40d,	// (0x00014ab5) navi_navi_pane_g1

0xb41f,	// (0x00014ac7) navi_navi_pane_g2_ParamLimits

0xb41f,	// (0x00014ac7) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x00018fc6) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x00018fc6) navi_navi_pane_g

0xb431,	// (0x00014ad9) navi_navi_tabs_pane

0xb43a,	// (0x00014ae2) navi_navi_text_pane

0xb405,	// (0x00014aad) navi_navi_volume_pane

0xb3de,	// (0x00014a86) navi_text_pane_t1

0xb3cf,	// (0x00014a77) navi_icon_pane_g1

0xb322,	// (0x000149ca) navi_navi_text_pane_t1

0x6a61,	// (0x00010109) navi_navi_volume_pane_g1

0x6a69,	// (0x00010111) volume_small_pane

0xb288,	// (0x00014930) navi_navi_icon_text_pane_g1

0xb290,	// (0x00014938) navi_navi_icon_text_pane_t1

0x94f3,	// (0x00012b9b) navi_tabs_2_long_pane

0x94f3,	// (0x00012b9b) navi_tabs_2_pane

0x94f3,	// (0x00012b9b) navi_tabs_3_long_pane

0x94f3,	// (0x00012b9b) navi_tabs_3_pane

0x94f3,	// (0x00012b9b) navi_tabs_4_pane

0x6a41,	// (0x000100e9) tabs_2_active_pane_ParamLimits

0x6a41,	// (0x000100e9) tabs_2_active_pane

0x6a51,	// (0x000100f9) tabs_2_passive_pane_ParamLimits

0x6a51,	// (0x000100f9) tabs_2_passive_pane

0x6a0f,	// (0x000100b7) tabs_3_active_pane_ParamLimits

0x6a0f,	// (0x000100b7) tabs_3_active_pane

0x6a1f,	// (0x000100c7) tabs_3_passive_pane_ParamLimits

0x6a1f,	// (0x000100c7) tabs_3_passive_pane

0x6a30,	// (0x000100d8) tabs_3_passive_pane_cp_ParamLimits

0x6a30,	// (0x000100d8) tabs_3_passive_pane_cp

0x69cb,	// (0x00010073) tabs_4_active_pane_ParamLimits

0x69cb,	// (0x00010073) tabs_4_active_pane

0x69dc,	// (0x00010084) tabs_4_passive_pane_ParamLimits

0x69dc,	// (0x00010084) tabs_4_passive_pane

0x69ed,	// (0x00010095) tabs_4_passive_pane_cp_ParamLimits

0x69ed,	// (0x00010095) tabs_4_passive_pane_cp

0x69fe,	// (0x000100a6) tabs_4_passive_pane_cp2_ParamLimits

0x69fe,	// (0x000100a6) tabs_4_passive_pane_cp2

0x69a7,	// (0x0001004f) tabs_2_long_active_pane_ParamLimits

0x69a7,	// (0x0001004f) tabs_2_long_active_pane

0x69b9,	// (0x00010061) tabs_2_long_passive_pane_ParamLimits

0x69b9,	// (0x00010061) tabs_2_long_passive_pane

0x6968,	// (0x00010010) tabs_3_long_active_pane_ParamLimits

0x6968,	// (0x00010010) tabs_3_long_active_pane

0x697b,	// (0x00010023) tabs_3_long_passive_pane_ParamLimits

0x697b,	// (0x00010023) tabs_3_long_passive_pane

0x6994,	// (0x0001003c) tabs_3_long_passive_pane_cp_ParamLimits

0x6994,	// (0x0001003c) tabs_3_long_passive_pane_cp

0x690e,	// (0x0000ffb6) volume_small_pane_g1

0x6917,	// (0x0000ffbf) volume_small_pane_g2

0x6920,	// (0x0000ffc8) volume_small_pane_g3

0x6929,	// (0x0000ffd1) volume_small_pane_g4

0x6932,	// (0x0000ffda) volume_small_pane_g5

0x693b,	// (0x0000ffe3) volume_small_pane_g6

0x6944,	// (0x0000ffec) volume_small_pane_g7

0x694d,	// (0x0000fff5) volume_small_pane_g8

0x6956,	// (0x0000fffe) volume_small_pane_g9

0x695f,	// (0x00010007) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x00018f92) volume_small_pane_g

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp2_ParamLimits

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp2

0x7a42,	// (0x000110ea) tabs_3_active_pane_g1

0x7a4a,	// (0x000110f2) tabs_3_active_pane_t1

0x7a34,	// (0x000110dc) bg_passive_tab_pane_cp2_ParamLimits

0x7a34,	// (0x000110dc) bg_passive_tab_pane_cp2

0x7a42,	// (0x000110ea) tabs_3_passive_pane_g1

0x7a4a,	// (0x000110f2) tabs_3_passive_pane_t1

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp3_ParamLimits

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp3

0x7a5c,	// (0x00011104) tabs_4_active_pane_g1

0x7a64,	// (0x0001110c) tabs_4_active_pane_t1

0x7a34,	// (0x000110dc) bg_passive_tab_pane_cp3_ParamLimits

0x7a34,	// (0x000110dc) bg_passive_tab_pane_cp3

0x7a5c,	// (0x00011104) tabs_4_1_passive_pane_g1

0x7a64,	// (0x0001110c) tabs_4_1_passive_pane_t1

0x99ef,	// (0x00013097) list_highlight_pane_cp2

0xb991,	// (0x00015039) list_set_pane_ParamLimits

0xb991,	// (0x00015039) list_set_pane

0xba37,	// (0x000150df) main_pane_set_t1_ParamLimits

0xba37,	// (0x000150df) main_pane_set_t1

0xba57,	// (0x000150ff) main_pane_set_t2_ParamLimits

0xba57,	// (0x000150ff) main_pane_set_t2

0xba6b,	// (0x00015113) main_pane_set_t3_ParamLimits

0xba6b,	// (0x00015113) main_pane_set_t3

0xba7d,	// (0x00015125) main_pane_set_t4_ParamLimits

0xba7d,	// (0x00015125) main_pane_set_t4

0x0003,

0xf9ba,	// (0x00019062) main_pane_set_t_ParamLimits

0xf9ba,	// (0x00019062) main_pane_set_t

0xba8f,	// (0x00015137) setting_code_pane

0xba9b,	// (0x00015143) setting_slider_graphic_pane

0xba9b,	// (0x00015143) setting_slider_pane

0xba9b,	// (0x00015143) setting_text_pane

0xba9b,	// (0x00015143) setting_volume_pane

0x60f8,	// (0x0000f7a0) volume_set_pane

0x7a34,	// (0x000110dc) bg_set_opt_pane_cp

0x6100,	// (0x0000f7a8) setting_slider_pane_t1

0x6119,	// (0x0000f7c1) setting_slider_pane_t2

0x6133,	// (0x0000f7db) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00018c4a) setting_slider_pane_t

0x614b,	// (0x0000f7f3) slider_set_pane

0x7954,	// (0x00010ffc) bg_set_opt_pane_cp2

0x7a76,	// (0x0001111e) setting_slider_graphic_pane_g1

0x6161,	// (0x0000f809) setting_slider_graphic_pane_t1

0x6171,	// (0x0000f819) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00018c51) setting_slider_graphic_pane_t

0x6181,	// (0x0000f829) slider_set_pane_cp

0x7954,	// (0x00010ffc) input_focus_pane_cp1

0xb950,	// (0x00014ff8) list_set_text_pane

0x794a,	// (0x00010ff2) setting_text_pane_g1

0x7954,	// (0x00010ffc) input_focus_pane_cp2

0x794a,	// (0x00010ff2) setting_code_pane_g1

0x7a7f,	// (0x00011127) setting_code_pane_t1

0x7a8d,	// (0x00011135) set_text_pane_t1_ParamLimits

0x7a8d,	// (0x00011135) set_text_pane_t1

0x8953,	// (0x00011ffb) set_opt_bg_pane_g1

0x895b,	// (0x00012003) set_opt_bg_pane_g2

0xb92a,	// (0x00014fd2) set_opt_bg_pane_g3

0x896b,	// (0x00012013) set_opt_bg_pane_g4

0x8973,	// (0x0001201b) set_opt_bg_pane_g5

0x897b,	// (0x00012023) set_opt_bg_pane_g6

0xb934,	// (0x00014fdc) set_opt_bg_pane_g7

0xb93c,	// (0x00014fe4) set_opt_bg_pane_g8

0xb946,	// (0x00014fee) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x0001904f) set_opt_bg_pane_g

0xb91d,	// (0x00014fc5) slider_set_pane_g1

0x6ad6,	// (0x0001017e) slider_set_pane_g2

0x0006,

0xf998,	// (0x00019040) slider_set_pane_g

0x6a72,	// (0x0001011a) volume_set_pane_g1

0x6a7a,	// (0x00010122) volume_set_pane_g2

0x6a82,	// (0x0001012a) volume_set_pane_g3

0x6a8a,	// (0x00010132) volume_set_pane_g4

0x6a92,	// (0x0001013a) volume_set_pane_g5

0x6a9a,	// (0x00010142) volume_set_pane_g6

0x6aa2,	// (0x0001014a) volume_set_pane_g7

0x6aaa,	// (0x00010152) volume_set_pane_g8

0x6ab2,	// (0x0001015a) volume_set_pane_g9

0x6aba,	// (0x00010162) volume_set_pane_g10

0x0009,

0xf970,	// (0x00019018) volume_set_pane_g

0x7aa7,	// (0x0001114f) indicator_pane_ParamLimits

0x7aa7,	// (0x0001114f) indicator_pane

0x7ab3,	// (0x0001115b) main_idle_pane_g2_ParamLimits

0x7ab3,	// (0x0001115b) main_idle_pane_g2

0x7adb,	// (0x00011183) main_pane_idle_g1_ParamLimits

0x7adb,	// (0x00011183) main_pane_idle_g1

0x7ae8,	// (0x00011190) popup_clock_digital_analogue_window_ParamLimits

0x7ae8,	// (0x00011190) popup_clock_digital_analogue_window

0x7aff,	// (0x000111a7) soft_indicator_pane_ParamLimits

0x7aff,	// (0x000111a7) soft_indicator_pane

0x7b0b,	// (0x000111b3) wallpaper_pane_ParamLimits

0x7b0b,	// (0x000111b3) wallpaper_pane

0x794a,	// (0x00010ff2) wallpaper_pane_g1

0x7b1f,	// (0x000111c7) indicator_pane_g1_ParamLimits

0x7b1f,	// (0x000111c7) indicator_pane_g1

0xbdf7,	// (0x0001549f) navi_navi_icon_text_pane_srt_g1

0x7b3a,	// (0x000111e2) soft_indicator_pane_t1

0x7b54,	// (0x000111fc) aid_ps_area_pane

0x7b65,	// (0x0001120d) aid_ps_clock_pane

0x7b73,	// (0x0001121b) aid_ps_indicator_pane

0x7b7f,	// (0x00011227) indicator_ps_pane_ParamLimits

0x7b7f,	// (0x00011227) indicator_ps_pane

0x7b8e,	// (0x00011236) power_save_pane_g1_ParamLimits

0x7b8e,	// (0x00011236) power_save_pane_g1

0x7b9a,	// (0x00011242) power_save_pane_g2_ParamLimits

0x7b9a,	// (0x00011242) power_save_pane_g2

0x5d09,	// (0x0000f3b1) aid_navinavi_width_pane

0x7b54,	// (0x000111fc) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00018c56) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00018c56) power_save_pane_g

0x7ba8,	// (0x00011250) power_save_pane_t1_ParamLimits

0x7ba8,	// (0x00011250) power_save_pane_t1

0x7b65,	// (0x0001120d) aid_ps_clock_pane_ParamLimits

0x7b73,	// (0x0001121b) aid_ps_indicator_pane_ParamLimits

0x7bba,	// (0x00011262) power_save_pane_t4_ParamLimits

0x7bba,	// (0x00011262) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00018c5b) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00018c5b) power_save_pane_t

0x7be4,	// (0x0001128c) power_save_t3_ParamLimits

0x7be4,	// (0x0001128c) power_save_t3

0x7bcf,	// (0x00011277) power_save_t2_ParamLimits

0x7bcf,	// (0x00011277) power_save_t2

0x7bf9,	// (0x000112a1) indicator_ps_pane_g1

0x7c02,	// (0x000112aa) ai_gene_pane_ParamLimits

0x7c02,	// (0x000112aa) ai_gene_pane

0x7c0e,	// (0x000112b6) ai_links_pane_ParamLimits

0x7c0e,	// (0x000112b6) ai_links_pane

0x7c1a,	// (0x000112c2) indicator_pane_cp1_ParamLimits

0x7c1a,	// (0x000112c2) indicator_pane_cp1

0x7c26,	// (0x000112ce) main_pane_idle_g1_cp_ParamLimits

0x7c26,	// (0x000112ce) main_pane_idle_g1_cp

0x7c32,	// (0x000112da) popup_ai_links_title_window

0x7c3b,	// (0x000112e3) soft_indicator_pane_cp1_ParamLimits

0x7c3b,	// (0x000112e3) soft_indicator_pane_cp1

0xb6ce,	// (0x00014d76) ai_links_pane_g1

0xb6d7,	// (0x00014d7f) grid_ai_links_pane

0xb6b1,	// (0x00014d59) ai_gene_pane_1

0xb6bc,	// (0x00014d64) ai_gene_pane_2

0xb6c5,	// (0x00014d6d) list_highlight_pane_cp4

0xb695,	// (0x00014d3d) cell_ai_link_pane_ParamLimits

0xb695,	// (0x00014d3d) cell_ai_link_pane

0xb68d,	// (0x00014d35) cell_ai_link_pane_g1

0x7e6b,	// (0x00011513) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x00018ff3) cell_ai_link_pane_g

0x7954,	// (0x00010ffc) grid_highlight_cp2

0x7954,	// (0x00010ffc) bg_popup_sub_pane_cp1

0x7c55,	// (0x000112fd) popup_ai_links_title_window_t1

0xb5db,	// (0x00014c83) ai_gene_pane_1_g1_ParamLimits

0xb5db,	// (0x00014c83) ai_gene_pane_1_g1

0xb5e7,	// (0x00014c8f) ai_gene_pane_1_g2_ParamLimits

0xb5e7,	// (0x00014c8f) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x00018fe9) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x00018fe9) ai_gene_pane_1_g

0xb5f4,	// (0x00014c9c) ai_gene_pane_1_t1_ParamLimits

0xb5f4,	// (0x00014c9c) ai_gene_pane_1_t1

0xb628,	// (0x00014cd0) grid_ai_soft_ind_pane

0xb5c6,	// (0x00014c6e) ai_gene_pane_2_t1_ParamLimits

0xb5c6,	// (0x00014c6e) ai_gene_pane_2_t1

0x7c64,	// (0x0001130c) main_pane_empty_t1_ParamLimits

0x7c64,	// (0x0001130c) main_pane_empty_t1

0x7c7c,	// (0x00011324) main_pane_empty_t2_ParamLimits

0x7c7c,	// (0x00011324) main_pane_empty_t2

0x7c91,	// (0x00011339) main_pane_empty_t3_ParamLimits

0x7c91,	// (0x00011339) main_pane_empty_t3

0x7ca3,	// (0x0001134b) main_pane_empty_t4_ParamLimits

0x7ca3,	// (0x0001134b) main_pane_empty_t4

0x7cb5,	// (0x0001135d) main_pane_empty_t5_ParamLimits

0x7cb5,	// (0x0001135d) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00018c60) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00018c60) main_pane_empty_t

0x8a50,	// (0x000120f8) bg_popup_window_pane_ParamLimits

0x8a50,	// (0x000120f8) bg_popup_window_pane

0xb330,	// (0x000149d8) find_popup_pane_cp2_ParamLimits

0xb330,	// (0x000149d8) find_popup_pane_cp2

0xb33c,	// (0x000149e4) heading_pane_ParamLimits

0xb33c,	// (0x000149e4) heading_pane

0x7954,	// (0x00010ffc) bg_popup_sub_pane

0xb2aa,	// (0x00014952) bg_popup_window_pane_g1_ParamLimits

0xb2aa,	// (0x00014952) bg_popup_window_pane_g1

0xb2b6,	// (0x0001495e) bg_popup_window_pane_g2_ParamLimits

0xb2b6,	// (0x0001495e) bg_popup_window_pane_g2

0xb2c2,	// (0x0001496a) bg_popup_window_pane_g3_ParamLimits

0xb2c2,	// (0x0001496a) bg_popup_window_pane_g3

0xb2ce,	// (0x00014976) bg_popup_window_pane_g4_ParamLimits

0xb2ce,	// (0x00014976) bg_popup_window_pane_g4

0xb2da,	// (0x00014982) bg_popup_window_pane_g5_ParamLimits

0xb2da,	// (0x00014982) bg_popup_window_pane_g5

0xb2e6,	// (0x0001498e) bg_popup_window_pane_g6_ParamLimits

0xb2e6,	// (0x0001498e) bg_popup_window_pane_g6

0xb2f2,	// (0x0001499a) bg_popup_window_pane_g7_ParamLimits

0xb2f2,	// (0x0001499a) bg_popup_window_pane_g7

0xb2fe,	// (0x000149a6) bg_popup_window_pane_g8_ParamLimits

0xb2fe,	// (0x000149a6) bg_popup_window_pane_g8

0xb30a,	// (0x000149b2) bg_popup_window_pane_g9_ParamLimits

0xb30a,	// (0x000149b2) bg_popup_window_pane_g9

0xb316,	// (0x000149be) bg_popup_window_pane_g10_ParamLimits

0xb316,	// (0x000149be) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x00018fb1) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x00018fb1) bg_popup_window_pane_g

0xb23f,	// (0x000148e7) bg_popup_heading_pane_ParamLimits

0xb23f,	// (0x000148e7) bg_popup_heading_pane

0x6b5e,	// (0x00010206) tabs_4_passive_pane_cp_srt_ParamLimits

0x6b5e,	// (0x00010206) tabs_4_passive_pane_cp_srt

0x6b70,	// (0x00010218) tabs_4_passive_pane_srt_ParamLimits

0xb253,	// (0x000148fb) heading_pane_g2

0x6b70,	// (0x00010218) tabs_4_passive_pane_srt

0x99ef,	// (0x00013097) bg_passive_tab_pane_cp3_srt_ParamLimits

0x99ef,	// (0x00013097) bg_passive_tab_pane_cp3_srt

0xb25b,	// (0x00014903) heading_pane_t1_ParamLimits

0xb25b,	// (0x00014903) heading_pane_t1

0xb272,	// (0x0001491a) heading_pane_t2_ParamLimits

0xb272,	// (0x0001491a) heading_pane_t2

0x0001,

0xf904,	// (0x00018fac) heading_pane_t_ParamLimits

0xf904,	// (0x00018fac) heading_pane_t

0xad6c,	// (0x00014414) bg_popup_heading_pane_g1

0xae1b,	// (0x000144c3) bg_popup_heading_pane_g2

0xae25,	// (0x000144cd) bg_popup_heading_pane_g3

0xae2f,	// (0x000144d7) bg_popup_heading_pane_g4

0xae39,	// (0x000144e1) bg_popup_heading_pane_g5

0xae43,	// (0x000144eb) bg_popup_heading_pane_g6

0xae4b,	// (0x000144f3) bg_popup_heading_pane_g7

0xae53,	// (0x000144fb) bg_popup_heading_pane_g8

0xae5d,	// (0x00014505) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x00018f68) bg_popup_heading_pane_g

0xa4c7,	// (0x00013b6f) bg_popup_sub_pane_g1

0xa4d7,	// (0x00013b7f) bg_popup_sub_pane_g2

0xa4cf,	// (0x00013b77) bg_popup_sub_pane_g3

0xa4e7,	// (0x00013b8f) bg_popup_sub_pane_g4

0xa4df,	// (0x00013b87) bg_popup_sub_pane_g5

0xa4ef,	// (0x00013b97) bg_popup_sub_pane_g6

0xa4f7,	// (0x00013b9f) bg_popup_sub_pane_g7

0xa507,	// (0x00013baf) bg_popup_sub_pane_g8

0xa4ff,	// (0x00013ba7) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x00018f42) bg_popup_sub_pane_g

0x7cc9,	// (0x00011371) bg_popup_window_pane_cp5_ParamLimits

0x7cc9,	// (0x00011371) bg_popup_window_pane_cp5

0x7ce5,	// (0x0001138d) popup_note_window_g1_ParamLimits

0x7ce5,	// (0x0001138d) popup_note_window_g1

0x7cf1,	// (0x00011399) popup_note_window_t1_ParamLimits

0x7cf1,	// (0x00011399) popup_note_window_t1

0x7d07,	// (0x000113af) popup_note_window_t2_ParamLimits

0x7d07,	// (0x000113af) popup_note_window_t2

0x7d1d,	// (0x000113c5) popup_note_window_t3_ParamLimits

0x7d1d,	// (0x000113c5) popup_note_window_t3

0x7d33,	// (0x000113db) popup_note_window_t4_ParamLimits

0x7d33,	// (0x000113db) popup_note_window_t4

0x7d5b,	// (0x00011403) popup_note_window_t5_ParamLimits

0x7d5b,	// (0x00011403) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00018c6b) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00018c6b) popup_note_window_t

0x7d7f,	// (0x00011427) bg_popup_window_pane_cp6_ParamLimits

0x7d7f,	// (0x00011427) bg_popup_window_pane_cp6

0xace8,	// (0x00014390) popup_note_image_window_g1_ParamLimits

0xace8,	// (0x00014390) popup_note_image_window_g1

0xacf4,	// (0x0001439c) popup_note_image_window_g2_ParamLimits

0xacf4,	// (0x0001439c) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x00018f36) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x00018f36) popup_note_image_window_g

0xad0d,	// (0x000143b5) popup_note_image_window_t1_ParamLimits

0xad0d,	// (0x000143b5) popup_note_image_window_t1

0xad26,	// (0x000143ce) popup_note_image_window_t2_ParamLimits

0xad26,	// (0x000143ce) popup_note_image_window_t2

0xad3f,	// (0x000143e7) popup_note_image_window_t3_ParamLimits

0xad3f,	// (0x000143e7) popup_note_image_window_t3

0x0002,

0xf893,	// (0x00018f3b) popup_note_image_window_t_ParamLimits

0xf893,	// (0x00018f3b) popup_note_image_window_t

0xaba9,	// (0x00014251) bg_popup_window_pane_cp7_ParamLimits

0xaba9,	// (0x00014251) bg_popup_window_pane_cp7

0xabd9,	// (0x00014281) popup_note_wait_window_g1_ParamLimits

0xabd9,	// (0x00014281) popup_note_wait_window_g1

0xabe5,	// (0x0001428d) popup_note_wait_window_g2_ParamLimits

0xabe5,	// (0x0001428d) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x00018f24) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x00018f24) popup_note_wait_window_g

0xabfd,	// (0x000142a5) popup_note_wait_window_t1_ParamLimits

0xabfd,	// (0x000142a5) popup_note_wait_window_t1

0xac24,	// (0x000142cc) popup_note_wait_window_t2_ParamLimits

0xac24,	// (0x000142cc) popup_note_wait_window_t2

0xac41,	// (0x000142e9) popup_note_wait_window_t3_ParamLimits

0xac41,	// (0x000142e9) popup_note_wait_window_t3

0xac54,	// (0x000142fc) popup_note_wait_window_t4_ParamLimits

0xac54,	// (0x000142fc) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x00018f2b) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x00018f2b) popup_note_wait_window_t

0xac79,	// (0x00014321) wait_bar_pane_ParamLimits

0xac79,	// (0x00014321) wait_bar_pane

0x7954,	// (0x00010ffc) wait_anim_pane

0x7954,	// (0x00010ffc) wait_border_pane

0x794a,	// (0x00010ff2) wait_anim_pane_g1

0x794a,	// (0x00010ff2) wait_anim_pane_g2

0x0001,

0xf742,	// (0x00018dea) wait_anim_pane_g

0xab4d,	// (0x000141f5) wait_border_pane_g1

0xab58,	// (0x00014200) wait_border_pane_g2

0xab61,	// (0x00014209) wait_border_pane_g3

0x0002,

0xf875,	// (0x00018f1d) wait_border_pane_g

0xaaaa,	// (0x00014152) bg_popup_window_pane_cp16_ParamLimits

0xaaaa,	// (0x00014152) bg_popup_window_pane_cp16

0xaab8,	// (0x00014160) indicator_popup_pane_cp4_ParamLimits

0xaab8,	// (0x00014160) indicator_popup_pane_cp4

0xaacc,	// (0x00014174) popup_query_data_window_t1_ParamLimits

0xaacc,	// (0x00014174) popup_query_data_window_t1

0xaade,	// (0x00014186) popup_query_data_window_t2_ParamLimits

0xaade,	// (0x00014186) popup_query_data_window_t2

0xaaf7,	// (0x0001419f) popup_query_data_window_t3_ParamLimits

0xaaf7,	// (0x0001419f) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x00018f16) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x00018f16) popup_query_data_window_t

0xab11,	// (0x000141b9) query_popup_data_pane_ParamLimits

0xab11,	// (0x000141b9) query_popup_data_pane

0xab25,	// (0x000141cd) query_popup_data_pane_cp1_ParamLimits

0xab25,	// (0x000141cd) query_popup_data_pane_cp1

0x7d7f,	// (0x00011427) bg_popup_window_pane_cp10_ParamLimits

0x7d7f,	// (0x00011427) bg_popup_window_pane_cp10

0xaa0d,	// (0x000140b5) indicator_popup_pane_ParamLimits

0xaa0d,	// (0x000140b5) indicator_popup_pane

0x7dd6,	// (0x0001147e) popup_query_code_window_t1_ParamLimits

0x7dd6,	// (0x0001147e) popup_query_code_window_t1

0xaa25,	// (0x000140cd) popup_query_code_window_t2_ParamLimits

0xaa25,	// (0x000140cd) popup_query_code_window_t2

0xaa63,	// (0x0001410b) popup_query_code_window_t3_ParamLimits

0xaa63,	// (0x0001410b) popup_query_code_window_t3

0x0002,

0xf867,	// (0x00018f0f) popup_query_code_window_t_ParamLimits

0xf867,	// (0x00018f0f) popup_query_code_window_t

0xaa92,	// (0x0001413a) query_popup_pane_ParamLimits

0xaa92,	// (0x0001413a) query_popup_pane

0x7d7f,	// (0x00011427) bg_popup_window_pane_cp15_ParamLimits

0x7d7f,	// (0x00011427) bg_popup_window_pane_cp15

0x7d9d,	// (0x00011445) indicator_popup_pane_cp1_ParamLimits

0x7d9d,	// (0x00011445) indicator_popup_pane_cp1

0x7db0,	// (0x00011458) indicator_popup_pane_cp2_ParamLimits

0x7db0,	// (0x00011458) indicator_popup_pane_cp2

0x7dc3,	// (0x0001146b) popup_query_data_code_window_g1_ParamLimits

0x7dc3,	// (0x0001146b) popup_query_data_code_window_g1

0x7dd6,	// (0x0001147e) popup_query_data_code_window_t1_ParamLimits

0x7dd6,	// (0x0001147e) popup_query_data_code_window_t1

0x7de8,	// (0x00011490) popup_query_data_code_window_t2_ParamLimits

0x7de8,	// (0x00011490) popup_query_data_code_window_t2

0x7dfa,	// (0x000114a2) popup_query_data_code_window_t3_ParamLimits

0x7dfa,	// (0x000114a2) popup_query_data_code_window_t3

0x7e10,	// (0x000114b8) popup_query_data_code_window_t4_ParamLimits

0x7e10,	// (0x000114b8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00018c76) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00018c76) popup_query_data_code_window_t

0x681f,	// (0x0000fec7) list_single_midp_graphic_pane_g3

0x7e28,	// (0x000114d0) query_popup_data_pane_cp2_ParamLimits

0x7e3b,	// (0x000114e3) query_popup_pane_cp2_ParamLimits

0x7e3b,	// (0x000114e3) query_popup_pane_cp2

0x7954,	// (0x00010ffc) bg_popup_window_pane_cp11

0xa9e1,	// (0x00014089) heading_pane_cp5

0x7f23,	// (0x000115cb) listscroll_popup_info_pane

0x7954,	// (0x00010ffc) input_focus_pane_cp3

0x7e4e,	// (0x000114f6) query_popup_pane_t1

0x7e5c,	// (0x00011504) list_popup_info_pane_ParamLimits

0x7e5c,	// (0x00011504) list_popup_info_pane

0x7e6b,	// (0x00011513) listscroll_popup_info_pane_g1

0x7e73,	// (0x0001151b) scroll_pane_cp7

0x7e7d,	// (0x00011525) popup_info_list_pane_t1_ParamLimits

0x7e7d,	// (0x00011525) popup_info_list_pane_t1

0x7e97,	// (0x0001153f) popup_info_list_pane_t2_ParamLimits

0x7e97,	// (0x0001153f) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00018c7f) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00018c7f) popup_info_list_pane_t

0x7954,	// (0x00010ffc) bg_popup_window_pane_cp12

0xbe11,	// (0x000154b9) find_popup_pane

0x7a34,	// (0x000110dc) bg_popup_window_pane_cp3

0x7eb1,	// (0x00011559) heading_pane_cp3

0x7ebd,	// (0x00011565) listscroll_popup_graphic_pane

0x7954,	// (0x00010ffc) bg_popup_window_pane_cp4

0x7f19,	// (0x000115c1) heading_pane_cp4

0x7f23,	// (0x000115cb) listscroll_popup_colour_pane

0x7f2b,	// (0x000115d3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7f2b,	// (0x000115d3) cell_large_graphic_colour_none_popup_pane

0x7f3f,	// (0x000115e7) grid_large_graphic_colour_popup_pane_ParamLimits

0x7f3f,	// (0x000115e7) grid_large_graphic_colour_popup_pane

0x7f6b,	// (0x00011613) listscroll_popup_colour_pane_g1_ParamLimits

0x7f6b,	// (0x00011613) listscroll_popup_colour_pane_g1

0x7f82,	// (0x0001162a) listscroll_popup_colour_pane_g2_ParamLimits

0x7f82,	// (0x0001162a) listscroll_popup_colour_pane_g2

0x7f99,	// (0x00011641) listscroll_popup_colour_pane_g3_ParamLimits

0x7f99,	// (0x00011641) listscroll_popup_colour_pane_g3

0x7fa9,	// (0x00011651) listscroll_popup_colour_pane_g4_ParamLimits

0x7fa9,	// (0x00011651) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00018c84) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00018c84) listscroll_popup_colour_pane_g

0x7fbd,	// (0x00011665) scroll_pane_cp6_ParamLimits

0x7fbd,	// (0x00011665) scroll_pane_cp6

0x7fcf,	// (0x00011677) cell_large_graphic_colour_popup_pane_ParamLimits

0x7fcf,	// (0x00011677) cell_large_graphic_colour_popup_pane

0x7fee,	// (0x00011696) cell_large_graphic_colour_none_popup_pane_t1

0x7954,	// (0x00010ffc) grid_highlight_pane_cp5

0x7ffd,	// (0x000116a5) cell_large_graphic_colour_popup_pane_g1

0x8005,	// (0x000116ad) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00018c8d) cell_large_graphic_colour_popup_pane_g

0x800d,	// (0x000116b5) cell_large_graphic_colour_popup_pane_g2_copy1

0x8016,	// (0x000116be) grid_highlight_pane_cp4

0x801e,	// (0x000116c6) bg_popup_window_pane_cp8_ParamLimits

0x801e,	// (0x000116c6) bg_popup_window_pane_cp8

0x8039,	// (0x000116e1) popup_snote_single_text_window_g1_ParamLimits

0x8039,	// (0x000116e1) popup_snote_single_text_window_g1

0x804b,	// (0x000116f3) popup_snote_single_text_window_t1_ParamLimits

0x804b,	// (0x000116f3) popup_snote_single_text_window_t1

0x805e,	// (0x00011706) popup_snote_single_text_window_t2_ParamLimits

0x805e,	// (0x00011706) popup_snote_single_text_window_t2

0x8071,	// (0x00011719) popup_snote_single_text_window_t3_ParamLimits

0x8071,	// (0x00011719) popup_snote_single_text_window_t3

0x80aa,	// (0x00011752) popup_snote_single_text_window_t4_ParamLimits

0x80aa,	// (0x00011752) popup_snote_single_text_window_t4

0x80de,	// (0x00011786) popup_snote_single_text_window_t5_ParamLimits

0x80de,	// (0x00011786) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00018c92) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00018c92) popup_snote_single_text_window_t

0x810d,	// (0x000117b5) bg_popup_window_pane_cp9_ParamLimits

0x810d,	// (0x000117b5) bg_popup_window_pane_cp9

0x8039,	// (0x000116e1) popup_snote_single_graphic_window_g1_ParamLimits

0x8039,	// (0x000116e1) popup_snote_single_graphic_window_g1

0x811b,	// (0x000117c3) popup_snote_single_graphic_window_g2_ParamLimits

0x811b,	// (0x000117c3) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00018c9d) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00018c9d) popup_snote_single_graphic_window_g

0x8127,	// (0x000117cf) popup_snote_single_graphic_window_t1_ParamLimits

0x8127,	// (0x000117cf) popup_snote_single_graphic_window_t1

0x813a,	// (0x000117e2) popup_snote_single_graphic_window_t2_ParamLimits

0x813a,	// (0x000117e2) popup_snote_single_graphic_window_t2

0x814d,	// (0x000117f5) popup_snote_single_graphic_window_t3_ParamLimits

0x814d,	// (0x000117f5) popup_snote_single_graphic_window_t3

0x8186,	// (0x0001182e) popup_snote_single_graphic_window_t4_ParamLimits

0x8186,	// (0x0001182e) popup_snote_single_graphic_window_t4

0x81ba,	// (0x00011862) popup_snote_single_graphic_window_t5_ParamLimits

0x81ba,	// (0x00011862) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00018ca2) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00018ca2) popup_snote_single_graphic_window_t

0xbd55,	// (0x000153fd) grid_graphic_popup_pane_ParamLimits

0xbd55,	// (0x000153fd) grid_graphic_popup_pane

0xbd7d,	// (0x00015425) listscroll_popup_graphic_pane_g1_ParamLimits

0xbd7d,	// (0x00015425) listscroll_popup_graphic_pane_g1

0xbd91,	// (0x00015439) listscroll_popup_graphic_pane_g2_ParamLimits

0xbd91,	// (0x00015439) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x0001908c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x0001908c) listscroll_popup_graphic_pane_g

0xbda5,	// (0x0001544d) scroll_pane_cp5

0xbcfe,	// (0x000153a6) cell_graphic_popup_pane_ParamLimits

0xbcfe,	// (0x000153a6) cell_graphic_popup_pane

0xbcdf,	// (0x00015387) cell_graphic_popup_pane_g1

0xbce7,	// (0x0001538f) cell_graphic_popup_pane_g2

0x800d,	// (0x000116b5) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x00019085) cell_graphic_popup_pane_g

0xbcf0,	// (0x00015398) cell_graphic_popup_pane_t2

0x8016,	// (0x000116be) grid_highlight_pane_cp3

0x81fb,	// (0x000118a3) list_gen_pane_ParamLimits

0x81fb,	// (0x000118a3) list_gen_pane

0x822d,	// (0x000118d5) scroll_pane

0xbc41,	// (0x000152e9) bg_list_pane_g1_ParamLimits

0xbc41,	// (0x000152e9) bg_list_pane_g1

0xbc5c,	// (0x00015304) bg_list_pane_g2_ParamLimits

0xbc5c,	// (0x00015304) bg_list_pane_g2

0xbc6f,	// (0x00015317) bg_list_pane_g3_ParamLimits

0xbc6f,	// (0x00015317) bg_list_pane_g3

0xbc81,	// (0x00015329) bg_list_pane_g4_ParamLimits

0xbc81,	// (0x00015329) bg_list_pane_g4

0xbc93,	// (0x0001533b) bg_list_pane_g5_ParamLimits

0xbc93,	// (0x0001533b) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x0001907a) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x0001907a) bg_list_pane_g

0xbb54,	// (0x000151fc) list_double2_graphic_large_graphic_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double2_graphic_large_graphic_pane

0xbb54,	// (0x000151fc) list_double2_graphic_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double2_graphic_pane

0xbb54,	// (0x000151fc) list_double2_large_graphic_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double2_large_graphic_pane

0xbb54,	// (0x000151fc) list_double2_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double2_pane

0xbb54,	// (0x000151fc) list_double_graphic_heading_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double_graphic_heading_pane

0xbb54,	// (0x000151fc) list_double_graphic_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double_graphic_pane

0xbb54,	// (0x000151fc) list_double_heading_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double_heading_pane

0xbb54,	// (0x000151fc) list_double_large_graphic_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double_large_graphic_pane

0xbb54,	// (0x000151fc) list_double_number_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double_number_pane

0xbb54,	// (0x000151fc) list_double_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double_pane

0xbb54,	// (0x000151fc) list_double_time_pane_ParamLimits

0xbb54,	// (0x000151fc) list_double_time_pane

0xbb54,	// (0x000151fc) list_setting_number_pane_ParamLimits

0xbb54,	// (0x000151fc) list_setting_number_pane

0xbb54,	// (0x000151fc) list_setting_pane_ParamLimits

0xbb54,	// (0x000151fc) list_setting_pane

0xbbb0,	// (0x00015258) list_single_2graphic_pane_ParamLimits

0xbbb0,	// (0x00015258) list_single_2graphic_pane

0xbbb0,	// (0x00015258) list_single_graphic_heading_pane_ParamLimits

0xbbb0,	// (0x00015258) list_single_graphic_heading_pane

0xbbb0,	// (0x00015258) list_single_graphic_pane_ParamLimits

0xbbb0,	// (0x00015258) list_single_graphic_pane

0xbbb0,	// (0x00015258) list_single_heading_pane_ParamLimits

0xbbb0,	// (0x00015258) list_single_heading_pane

0xbc22,	// (0x000152ca) list_single_large_graphic_pane_ParamLimits

0xbc22,	// (0x000152ca) list_single_large_graphic_pane

0xbbb0,	// (0x00015258) list_single_number_heading_pane_ParamLimits

0xbbb0,	// (0x00015258) list_single_number_heading_pane

0xbbb0,	// (0x00015258) list_single_number_pane_ParamLimits

0xbbb0,	// (0x00015258) list_single_number_pane

0xbbb0,	// (0x00015258) list_single_pane_ParamLimits

0xbbb0,	// (0x00015258) list_single_pane

0x7954,	// (0x00010ffc) list_highlight_pane_cp1

0x826d,	// (0x00011915) list_single_pane_g1_ParamLimits

0x826d,	// (0x00011915) list_single_pane_g1

0x8279,	// (0x00011921) list_single_pane_g2_ParamLimits

0x8279,	// (0x00011921) list_single_pane_g2

0x0001,

0xf60c,	// (0x00018cb4) list_single_pane_g_ParamLimits

0xf60c,	// (0x00018cb4) list_single_pane_g

0xbb0d,	// (0x000151b5) list_single_pane_t1_ParamLimits

0xbb0d,	// (0x000151b5) list_single_pane_t1

0x826d,	// (0x00011915) list_single_number_pane_g1_ParamLimits

0x826d,	// (0x00011915) list_single_number_pane_g1

0x8279,	// (0x00011921) list_single_number_pane_g2_ParamLimits

0x8279,	// (0x00011921) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00018cb4) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00018cb4) list_single_number_pane_g

0xb899,	// (0x00014f41) list_single_number_pane_t1_ParamLimits

0xb899,	// (0x00014f41) list_single_number_pane_t1

0xb8af,	// (0x00014f57) list_single_number_pane_t2_ParamLimits

0xb8af,	// (0x00014f57) list_single_number_pane_t2

0x0001,

0xf993,	// (0x0001903b) list_single_number_pane_t_ParamLimits

0xf993,	// (0x0001903b) list_single_number_pane_t

0x8261,	// (0x00011909) list_single_graphic_pane_g1_ParamLimits

0x8261,	// (0x00011909) list_single_graphic_pane_g1

0x826d,	// (0x00011915) list_single_graphic_pane_g2_ParamLimits

0x826d,	// (0x00011915) list_single_graphic_pane_g2

0x8279,	// (0x00011921) list_single_graphic_pane_g3_ParamLimits

0x8279,	// (0x00011921) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00018cad) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00018cad) list_single_graphic_pane_g

0x8285,	// (0x0001192d) list_single_graphic_pane_t1_ParamLimits

0x8285,	// (0x0001192d) list_single_graphic_pane_t1

0x826d,	// (0x00011915) list_single_heading_pane_g1_ParamLimits

0x826d,	// (0x00011915) list_single_heading_pane_g1

0x8279,	// (0x00011921) list_single_heading_pane_g2_ParamLimits

0x8279,	// (0x00011921) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00018cb4) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00018cb4) list_single_heading_pane_g

0x829b,	// (0x00011943) list_single_heading_pane_t1_ParamLimits

0x829b,	// (0x00011943) list_single_heading_pane_t1

0x82b1,	// (0x00011959) list_single_heading_pane_t2_ParamLimits

0x82b1,	// (0x00011959) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00018cb9) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00018cb9) list_single_heading_pane_t

0x826d,	// (0x00011915) list_single_number_heading_pane_g1_ParamLimits

0x826d,	// (0x00011915) list_single_number_heading_pane_g1

0x8279,	// (0x00011921) list_single_number_heading_pane_g2_ParamLimits

0x8279,	// (0x00011921) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00018cb4) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00018cb4) list_single_number_heading_pane_g

0x829b,	// (0x00011943) list_single_number_heading_pane_t1_ParamLimits

0x829b,	// (0x00011943) list_single_number_heading_pane_t1

0x82c3,	// (0x0001196b) list_single_number_heading_pane_t2_ParamLimits

0x82c3,	// (0x0001196b) list_single_number_heading_pane_t2

0x82d5,	// (0x0001197d) list_single_number_heading_pane_t3_ParamLimits

0x82d5,	// (0x0001197d) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00018cbe) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00018cbe) list_single_number_heading_pane_t

0x82e7,	// (0x0001198f) list_single_graphic_heading_pane_g1_ParamLimits

0x82e7,	// (0x0001198f) list_single_graphic_heading_pane_g1

0x82f3,	// (0x0001199b) list_single_graphic_heading_pane_g4_ParamLimits

0x82f3,	// (0x0001199b) list_single_graphic_heading_pane_g4

0x8279,	// (0x00011921) list_single_graphic_heading_pane_g5_ParamLimits

0x8279,	// (0x00011921) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00018cc5) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00018cc5) list_single_graphic_heading_pane_g

0x829b,	// (0x00011943) list_single_graphic_heading_pane_t1_ParamLimits

0x829b,	// (0x00011943) list_single_graphic_heading_pane_t1

0x8304,	// (0x000119ac) list_single_graphic_heading_pane_t2_ParamLimits

0x8304,	// (0x000119ac) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00018ccc) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00018ccc) list_single_graphic_heading_pane_t

0x8316,	// (0x000119be) list_single_large_graphic_pane_g1_ParamLimits

0x8316,	// (0x000119be) list_single_large_graphic_pane_g1

0x8322,	// (0x000119ca) list_single_large_graphic_pane_g2_ParamLimits

0x8322,	// (0x000119ca) list_single_large_graphic_pane_g2

0x832e,	// (0x000119d6) list_single_large_graphic_pane_g3_ParamLimits

0x832e,	// (0x000119d6) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00018cd1) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00018cd1) list_single_large_graphic_pane_g

0xab58,	// (0x00014200) wait_border_pane_g2_copy1

0x833a,	// (0x000119e2) list_single_large_graphic_pane_g4_cp2

0x8342,	// (0x000119ea) list_single_large_graphic_pane_t1_ParamLimits

0x8342,	// (0x000119ea) list_single_large_graphic_pane_t1

0x8358,	// (0x00011a00) list_double_pane_g1_ParamLimits

0x8358,	// (0x00011a00) list_double_pane_g1

0x8364,	// (0x00011a0c) list_double_pane_g2_ParamLimits

0x8364,	// (0x00011a0c) list_double_pane_g2

0x0001,

0xf630,	// (0x00018cd8) list_double_pane_g_ParamLimits

0xf630,	// (0x00018cd8) list_double_pane_g

0x8370,	// (0x00011a18) list_double_pane_t1_ParamLimits

0x8370,	// (0x00011a18) list_double_pane_t1

0x8386,	// (0x00011a2e) list_double_pane_t2_ParamLimits

0x8386,	// (0x00011a2e) list_double_pane_t2

0x0001,

0xf635,	// (0x00018cdd) list_double_pane_t_ParamLimits

0xf635,	// (0x00018cdd) list_double_pane_t

0x8398,	// (0x00011a40) list_double2_pane_g1_ParamLimits

0x8398,	// (0x00011a40) list_double2_pane_g1

0x83a9,	// (0x00011a51) list_double2_pane_g2_ParamLimits

0x83a9,	// (0x00011a51) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00018ce2) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00018ce2) list_double2_pane_g

0x83b5,	// (0x00011a5d) list_double2_pane_t1_ParamLimits

0x83b5,	// (0x00011a5d) list_double2_pane_t1

0x83cb,	// (0x00011a73) list_double2_pane_t2_ParamLimits

0x83cb,	// (0x00011a73) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00018ce7) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00018ce7) list_double2_pane_t

0x8358,	// (0x00011a00) list_double_number_pane_g1_ParamLimits

0x8358,	// (0x00011a00) list_double_number_pane_g1

0x8364,	// (0x00011a0c) list_double_number_pane_g2_ParamLimits

0x8364,	// (0x00011a0c) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00018cd8) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00018cd8) list_double_number_pane_g

0x83dd,	// (0x00011a85) list_double_number_pane_t1_ParamLimits

0x83dd,	// (0x00011a85) list_double_number_pane_t1

0x83ef,	// (0x00011a97) list_double_number_pane_t2_ParamLimits

0x83ef,	// (0x00011a97) list_double_number_pane_t2

0x8405,	// (0x00011aad) list_double_number_pane_t3_ParamLimits

0x8405,	// (0x00011aad) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00018cec) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00018cec) list_double_number_pane_t

0x8417,	// (0x00011abf) list_double_graphic_pane_g1_ParamLimits

0x8417,	// (0x00011abf) list_double_graphic_pane_g1

0x8423,	// (0x00011acb) list_double_graphic_pane_g2_ParamLimits

0x8423,	// (0x00011acb) list_double_graphic_pane_g2

0x8432,	// (0x00011ada) list_double_graphic_pane_g3_ParamLimits

0x8432,	// (0x00011ada) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00018cf3) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00018cf3) list_double_graphic_pane_g

0x844a,	// (0x00011af2) list_double_graphic_pane_t1_ParamLimits

0x844a,	// (0x00011af2) list_double_graphic_pane_t1

0x8460,	// (0x00011b08) list_double_graphic_pane_t2_ParamLimits

0x8460,	// (0x00011b08) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00018cfc) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00018cfc) list_double_graphic_pane_t

0x8472,	// (0x00011b1a) list_double2_graphic_pane_g1_ParamLimits

0x8472,	// (0x00011b1a) list_double2_graphic_pane_g1

0x847e,	// (0x00011b26) list_double2_graphic_pane_g2_ParamLimits

0x847e,	// (0x00011b26) list_double2_graphic_pane_g2

0x83a9,	// (0x00011a51) list_double2_graphic_pane_g3_ParamLimits

0x83a9,	// (0x00011a51) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00018d01) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00018d01) list_double2_graphic_pane_g

0x848a,	// (0x00011b32) list_double2_graphic_pane_t1_ParamLimits

0x848a,	// (0x00011b32) list_double2_graphic_pane_t1

0x84a0,	// (0x00011b48) list_double2_graphic_pane_t2_ParamLimits

0x84a0,	// (0x00011b48) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00018d08) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00018d08) list_double2_graphic_pane_t

0x84b2,	// (0x00011b5a) list_double_large_graphic_pane_g1_ParamLimits

0x84b2,	// (0x00011b5a) list_double_large_graphic_pane_g1

0x84db,	// (0x00011b83) list_double_large_graphic_pane_g2_ParamLimits

0x84db,	// (0x00011b83) list_double_large_graphic_pane_g2

0x8364,	// (0x00011a0c) list_double_large_graphic_pane_g3_ParamLimits

0x8364,	// (0x00011a0c) list_double_large_graphic_pane_g3

0x84ec,	// (0x00011b94) list_double_large_graphic_pane_g4_ParamLimits

0x84ec,	// (0x00011b94) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00018d0d) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00018d0d) list_double_large_graphic_pane_g

0x8512,	// (0x00011bba) list_double_large_graphic_pane_t1_ParamLimits

0x8512,	// (0x00011bba) list_double_large_graphic_pane_t1

0x852b,	// (0x00011bd3) list_double_large_graphic_pane_t2_ParamLimits

0x852b,	// (0x00011bd3) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00018d18) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00018d18) list_double_large_graphic_pane_t

0x853d,	// (0x00011be5) list_double2_large_graphic_pane_g1_ParamLimits

0x853d,	// (0x00011be5) list_double2_large_graphic_pane_g1

0x8398,	// (0x00011a40) list_double2_large_graphic_pane_g2_ParamLimits

0x8398,	// (0x00011a40) list_double2_large_graphic_pane_g2

0x83a9,	// (0x00011a51) list_double2_large_graphic_pane_g3_ParamLimits

0x83a9,	// (0x00011a51) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00018d1d) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00018d1d) list_double2_large_graphic_pane_g

0x8549,	// (0x00011bf1) list_double2_large_graphic_pane_t1_ParamLimits

0x8549,	// (0x00011bf1) list_double2_large_graphic_pane_t1

0x855f,	// (0x00011c07) list_double2_large_graphic_pane_t2_ParamLimits

0x855f,	// (0x00011c07) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00018d24) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00018d24) list_double2_large_graphic_pane_t

0x8571,	// (0x00011c19) list_double_heading_pane_g1_ParamLimits

0x8571,	// (0x00011c19) list_double_heading_pane_g1

0x8582,	// (0x00011c2a) list_double_heading_pane_g2_ParamLimits

0x8582,	// (0x00011c2a) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00018d29) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00018d29) list_double_heading_pane_g

0x858e,	// (0x00011c36) list_double_heading_pane_t1_ParamLimits

0x858e,	// (0x00011c36) list_double_heading_pane_t1

0x83cb,	// (0x00011a73) list_double_heading_pane_t2_ParamLimits

0x83cb,	// (0x00011a73) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00018d2e) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00018d2e) list_double_heading_pane_t

0x85a4,	// (0x00011c4c) list_double_graphic_heading_pane_g1_ParamLimits

0x85a4,	// (0x00011c4c) list_double_graphic_heading_pane_g1

0x8571,	// (0x00011c19) list_double_graphic_heading_pane_g2_ParamLimits

0x8571,	// (0x00011c19) list_double_graphic_heading_pane_g2

0x8582,	// (0x00011c2a) list_double_graphic_heading_pane_g3_ParamLimits

0x8582,	// (0x00011c2a) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00018d33) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00018d33) list_double_graphic_heading_pane_g

0x85b0,	// (0x00011c58) list_double_graphic_heading_pane_t1_ParamLimits

0x85b0,	// (0x00011c58) list_double_graphic_heading_pane_t1

0x84a0,	// (0x00011b48) list_double_graphic_heading_pane_t2_ParamLimits

0x84a0,	// (0x00011b48) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00018d3a) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00018d3a) list_double_graphic_heading_pane_t

0x84db,	// (0x00011b83) list_double_time_pane_g1_ParamLimits

0x84db,	// (0x00011b83) list_double_time_pane_g1

0x8364,	// (0x00011a0c) list_double_time_pane_g2_ParamLimits

0x8364,	// (0x00011a0c) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00018d3f) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00018d3f) list_double_time_pane_g

0x85c6,	// (0x00011c6e) list_double_time_pane_t1_ParamLimits

0x85c6,	// (0x00011c6e) list_double_time_pane_t1

0x85dc,	// (0x00011c84) list_double_time_pane_t2_ParamLimits

0x85dc,	// (0x00011c84) list_double_time_pane_t2

0x85ee,	// (0x00011c96) list_double_time_pane_t3_ParamLimits

0x85ee,	// (0x00011c96) list_double_time_pane_t3

0x8600,	// (0x00011ca8) list_double_time_pane_t4_ParamLimits

0x8600,	// (0x00011ca8) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00018d44) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00018d44) list_double_time_pane_t

0x847e,	// (0x00011b26) list_setting_pane_g1_ParamLimits

0x847e,	// (0x00011b26) list_setting_pane_g1

0x83a9,	// (0x00011a51) list_setting_pane_g2_ParamLimits

0x83a9,	// (0x00011a51) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00018d4d) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00018d4d) list_setting_pane_g

0x8612,	// (0x00011cba) list_setting_pane_t1_ParamLimits

0x8612,	// (0x00011cba) list_setting_pane_t1

0x8629,	// (0x00011cd1) list_setting_pane_t2_ParamLimits

0x8629,	// (0x00011cd1) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00018d52) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00018d52) list_setting_pane_t

0x8668,	// (0x00011d10) set_value_pane_cp_ParamLimits

0x8668,	// (0x00011d10) set_value_pane_cp

0x847e,	// (0x00011b26) list_setting_number_pane_g1_ParamLimits

0x847e,	// (0x00011b26) list_setting_number_pane_g1

0x83a9,	// (0x00011a51) list_setting_number_pane_g2_ParamLimits

0x83a9,	// (0x00011a51) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x00018d4d) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x00018d4d) list_setting_number_pane_g

0x8674,	// (0x00011d1c) list_setting_number_pane_t1_ParamLimits

0x8674,	// (0x00011d1c) list_setting_number_pane_t1

0x8688,	// (0x00011d30) list_setting_number_pane_t2_ParamLimits

0x8688,	// (0x00011d30) list_setting_number_pane_t2

0x869f,	// (0x00011d47) list_setting_number_pane_t3_ParamLimits

0x869f,	// (0x00011d47) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x00018d59) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x00018d59) list_setting_number_pane_t

0x8668,	// (0x00011d10) set_value_pane_ParamLimits

0x8668,	// (0x00011d10) set_value_pane

0x86e2,	// (0x00011d8a) bg_set_opt_pane_ParamLimits

0x86e2,	// (0x00011d8a) bg_set_opt_pane

0x8703,	// (0x00011dab) set_value_pane_t1

0x8711,	// (0x00011db9) slider_set_pane_cp3

0x871a,	// (0x00011dc2) volume_small_pane_cp

0x8723,	// (0x00011dcb) list_form_gen_pane

0x872c,	// (0x00011dd4) scroll_pane_cp8

0x8745,	// (0x00011ded) form_field_data_pane_ParamLimits

0x8745,	// (0x00011ded) form_field_data_pane

0x8767,	// (0x00011e0f) form_field_data_wide_pane_ParamLimits

0x8767,	// (0x00011e0f) form_field_data_wide_pane

0x878a,	// (0x00011e32) form_field_popup_pane_ParamLimits

0x878a,	// (0x00011e32) form_field_popup_pane

0x87aa,	// (0x00011e52) form_field_popup_wide_pane_ParamLimits

0x87aa,	// (0x00011e52) form_field_popup_wide_pane

0x87c7,	// (0x00011e6f) form_field_slider_pane_ParamLimits

0x87c7,	// (0x00011e6f) form_field_slider_pane

0x87da,	// (0x00011e82) form_field_slider_wide_pane_ParamLimits

0x87da,	// (0x00011e82) form_field_slider_wide_pane

0x87ed,	// (0x00011e95) data_form_pane

0x8803,	// (0x00011eab) form_field_data_pane_t1

0x881b,	// (0x00011ec3) input_focus_pane

0x8829,	// (0x00011ed1) data_form_wide_pane

0x8861,	// (0x00011f09) form_field_data_wide_pane_t1

0x802b,	// (0x000116d3) input_focus_pane_cp6

0x8883,	// (0x00011f2b) form_field_popup_pane_t1

0x881b,	// (0x00011ec3) input_focus_pane_cp7

0x889b,	// (0x00011f43) list_form_pane

0x88af,	// (0x00011f57) form_field_popup_wide_pane_t1

0x881b,	// (0x00011ec3) input_focus_pane_cp8

0x88c4,	// (0x00011f6c) list_form_wide_pane

0x88db,	// (0x00011f83) form_field_slider_pane_t1_ParamLimits

0x88db,	// (0x00011f83) form_field_slider_pane_t1

0x88ed,	// (0x00011f95) form_field_slider_pane_t2_ParamLimits

0x88ed,	// (0x00011f95) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x00018d69) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x00018d69) form_field_slider_pane_t

0x7cc9,	// (0x00011371) input_focus_pane_cp9_ParamLimits

0x7cc9,	// (0x00011371) input_focus_pane_cp9

0x88ff,	// (0x00011fa7) slider_cont_pane_ParamLimits

0x88ff,	// (0x00011fa7) slider_cont_pane

0x8913,	// (0x00011fbb) form_field_slider_wide_pane_t1_ParamLimits

0x8913,	// (0x00011fbb) form_field_slider_wide_pane_t1

0x8925,	// (0x00011fcd) form_field_slider_wide_pane_t2_ParamLimits

0x8925,	// (0x00011fcd) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x00018d6e) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x00018d6e) form_field_slider_wide_pane_t

0x7cc9,	// (0x00011371) input_focus_pane_cp10_ParamLimits

0x7cc9,	// (0x00011371) input_focus_pane_cp10

0x8937,	// (0x00011fdf) slider_cont_pane_cp1_ParamLimits

0x8937,	// (0x00011fdf) slider_cont_pane_cp1

0x894b,	// (0x00011ff3) slider_form_pane_cp

0x8953,	// (0x00011ffb) input_focus_pane_g1

0x895b,	// (0x00012003) input_focus_pane_g2

0x8963,	// (0x0001200b) input_focus_pane_g3

0x896b,	// (0x00012013) input_focus_pane_g4

0x8973,	// (0x0001201b) input_focus_pane_g5

0x897b,	// (0x00012023) input_focus_pane_g6

0x8983,	// (0x0001202b) input_focus_pane_g7

0x898b,	// (0x00012033) input_focus_pane_g8

0x8993,	// (0x0001203b) input_focus_pane_g9

0x794a,	// (0x00010ff2) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x00018d73) input_focus_pane_g

0xab61,	// (0x00014209) wait_border_pane_g3_copy1

0x899b,	// (0x00012043) data_form_pane_t1

0x794a,	// (0x00010ff2) wait_anim_pane_g1_copy1

0xbaf0,	// (0x00015198) data_form_wide_pane_t1

0x89b6,	// (0x0001205e) list_form_graphic_pane_cp_ParamLimits

0x89b6,	// (0x0001205e) list_form_graphic_pane_cp

0xbac5,	// (0x0001516d) slider_form_pane_g1

0xbace,	// (0x00015176) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x0001906b) slider_form_pane_g

0x89cf,	// (0x00012077) list_form_graphic_pane_ParamLimits

0x89cf,	// (0x00012077) list_form_graphic_pane

0x89eb,	// (0x00012093) list_form_graphic_pane_g1

0x89f3,	// (0x0001209b) list_form_graphic_pane_t1_ParamLimits

0x89f3,	// (0x0001209b) list_form_graphic_pane_t1

0x7a34,	// (0x000110dc) list_highlight_pane_cp5_ParamLimits

0x7a34,	// (0x000110dc) list_highlight_pane_cp5

0x8a08,	// (0x000120b0) find_pane_g1

0x8a11,	// (0x000120b9) input_find_pane

0x8a1a,	// (0x000120c2) input_find_pane_g1_ParamLimits

0x8a1a,	// (0x000120c2) input_find_pane_g1

0x8a26,	// (0x000120ce) input_find_pane_t1_ParamLimits

0x8a26,	// (0x000120ce) input_find_pane_t1

0x8a3b,	// (0x000120e3) input_find_pane_t2_ParamLimits

0x8a3b,	// (0x000120e3) input_find_pane_t2

0x0001,

0xf6e0,	// (0x00018d88) input_find_pane_t_ParamLimits

0xf6e0,	// (0x00018d88) input_find_pane_t

0x8a50,	// (0x000120f8) input_focus_pane_cp5_ParamLimits

0x8a50,	// (0x000120f8) input_focus_pane_cp5

0x8a6a,	// (0x00012112) bg_popup_window_pane_cp2_ParamLimits

0x8a6a,	// (0x00012112) bg_popup_window_pane_cp2

0x8a77,	// (0x0001211f) listscroll_menu_pane_ParamLimits

0x8a77,	// (0x0001211f) listscroll_menu_pane

0x8a83,	// (0x0001212b) popup_submenu_window_ParamLimits

0x8a83,	// (0x0001212b) popup_submenu_window

0x8aad,	// (0x00012155) find_popup_pane_g1

0x8ab5,	// (0x0001215d) input_popup_find_pane_cp

0x8a50,	// (0x000120f8) input_focus_pane_cp4_ParamLimits

0x8a50,	// (0x000120f8) input_focus_pane_cp4

0x8acb,	// (0x00012173) input_popup_find_pane_t1_ParamLimits

0x8acb,	// (0x00012173) input_popup_find_pane_t1

0x7954,	// (0x00010ffc) bg_popup_sub_pane_cp

0x8af9,	// (0x000121a1) listscroll_popup_sub_pane

0x8b01,	// (0x000121a9) list_submenu_pane_ParamLimits

0x8b01,	// (0x000121a9) list_submenu_pane

0x8b12,	// (0x000121ba) scroll_pane_cp4

0x8b1a,	// (0x000121c2) list_single_popup_submenu_pane_ParamLimits

0x8b1a,	// (0x000121c2) list_single_popup_submenu_pane

0x8b2e,	// (0x000121d6) list_single_popup_submenu_pane_g1

0x8b36,	// (0x000121de) list_single_popup_submenu_pane_t1_ParamLimits

0x8b36,	// (0x000121de) list_single_popup_submenu_pane_t1

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp1_ParamLimits

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp1

0x8b4b,	// (0x000121f3) tabs_2_active_pane_g1

0x8b53,	// (0x000121fb) tabs_2_active_pane_t1

0x7a34,	// (0x000110dc) bg_passive_tab_pane_cp1_ParamLimits

0x7a34,	// (0x000110dc) bg_passive_tab_pane_cp1

0x8b4b,	// (0x000121f3) tabs_2_passive_pane_g1

0x8b53,	// (0x000121fb) tabs_2_passive_pane_t1

0x8b65,	// (0x0001220d) bg_active_tab_pane_cp4

0x8b73,	// (0x0001221b) tabs_2_long_active_pane_t1

0x8b86,	// (0x0001222e) bg_passive_tab_pane_cp4

0x6827,	// (0x0000fecf) list_single_midp_graphic_pane_g4_ParamLimits

0x8b65,	// (0x0001220d) bg_active_tab_pane_cp5

0x8b92,	// (0x0001223a) tabs_3_long_active_pane_t1

0x8b86,	// (0x0001222e) bg_passive_tab_pane_cp5

0x6827,	// (0x0000fecf) list_single_midp_graphic_pane_g4

0x7a34,	// (0x000110dc) bg_popup_window_pane_cp13_ParamLimits

0x7a34,	// (0x000110dc) bg_popup_window_pane_cp13

0x8bad,	// (0x00012255) listscroll_popup_fast_pane_ParamLimits

0x8bad,	// (0x00012255) listscroll_popup_fast_pane

0x8bbc,	// (0x00012264) grid_popup_fast_pane_ParamLimits

0x8bbc,	// (0x00012264) grid_popup_fast_pane

0x8bce,	// (0x00012276) scroll_pane_cp9_ParamLimits

0x8bce,	// (0x00012276) scroll_pane_cp9

0xd877,	// (0x00016f1f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd877,	// (0x00016f1f) list_single_graphic_hl_pane_t1_cp2

0x8bf2,	// (0x0001229a) input_focus_pane_cp20_ParamLimits

0x8bf2,	// (0x0001229a) input_focus_pane_cp20

0x8c00,	// (0x000122a8) query_popup_data_pane_t1_ParamLimits

0x8c00,	// (0x000122a8) query_popup_data_pane_t1

0x8c13,	// (0x000122bb) query_popup_data_pane_t2_ParamLimits

0x8c13,	// (0x000122bb) query_popup_data_pane_t2

0x8c59,	// (0x00012301) query_popup_data_pane_t3_ParamLimits

0x8c59,	// (0x00012301) query_popup_data_pane_t3

0x8c9a,	// (0x00012342) query_popup_data_pane_t4_ParamLimits

0x8c9a,	// (0x00012342) query_popup_data_pane_t4

0x8cd6,	// (0x0001237e) query_popup_data_pane_t5_ParamLimits

0x8cd6,	// (0x0001237e) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00018d8d) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00018d8d) query_popup_data_pane_t

0x8953,	// (0x00011ffb) bg_set_opt_pane_g1

0x895b,	// (0x00012003) bg_set_opt_pane_g2

0x8963,	// (0x0001200b) bg_set_opt_pane_g3

0x896b,	// (0x00012013) bg_set_opt_pane_g4

0x8973,	// (0x0001201b) bg_set_opt_pane_g5

0x897b,	// (0x00012023) bg_set_opt_pane_g6

0x8983,	// (0x0001202b) bg_set_opt_pane_g7

0x898b,	// (0x00012033) bg_set_opt_pane_g8

0x8993,	// (0x0001203b) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x00018d98) bg_set_opt_pane_g

0x6428,	// (0x0000fad0) control_top_pane_stacon_ParamLimits

0x6428,	// (0x0000fad0) control_top_pane_stacon

0x647b,	// (0x0000fb23) signal_pane_stacon_ParamLimits

0x647b,	// (0x0000fb23) signal_pane_stacon

0x92fe,	// (0x000129a6) stacon_top_pane_g1_ParamLimits

0x92fe,	// (0x000129a6) stacon_top_pane_g1

0x64a0,	// (0x0000fb48) title_pane_stacon_ParamLimits

0x64a0,	// (0x0000fb48) title_pane_stacon

0x64ca,	// (0x0000fb72) uni_indicator_pane_stacon_ParamLimits

0x64ca,	// (0x0000fb72) uni_indicator_pane_stacon

0x64df,	// (0x0000fb87) battery_pane_stacon_ParamLimits

0x64df,	// (0x0000fb87) battery_pane_stacon

0x6523,	// (0x0000fbcb) control_bottom_pane_stacon_ParamLimits

0x6523,	// (0x0000fbcb) control_bottom_pane_stacon

0x6546,	// (0x0000fbee) navi_pane_stacon_ParamLimits

0x6546,	// (0x0000fbee) navi_pane_stacon

0x9320,	// (0x000129c8) stacon_bottom_pane_g1_ParamLimits

0x9320,	// (0x000129c8) stacon_bottom_pane_g1

0x6189,	// (0x0000f831) aid_levels_signal_lsc_ParamLimits

0x6189,	// (0x0000f831) aid_levels_signal_lsc

0x61a0,	// (0x0000f848) signal_pane_stacon_g1_ParamLimits

0x61a0,	// (0x0000f848) signal_pane_stacon_g1

0x61b4,	// (0x0000f85c) signal_pane_stacon_g2_ParamLimits

0x61b4,	// (0x0000f85c) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00018dab) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00018dab) signal_pane_stacon_g

0x61e9,	// (0x0000f891) title_pane_stacon_t1_ParamLimits

0x61e9,	// (0x0000f891) title_pane_stacon_t1

0x8d1a,	// (0x000123c2) uni_indicator_pane_stacon_g1

0x8d24,	// (0x000123cc) uni_indicator_pane_stacon_g2

0x8d2e,	// (0x000123d6) uni_indicator_pane_stacon_g3

0x8d38,	// (0x000123e0) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x00018db7) uni_indicator_pane_stacon_g

0x620e,	// (0x0000f8b6) control_top_pane_stacon_g1

0x6216,	// (0x0000f8be) control_top_pane_stacon_t1_ParamLimits

0x6216,	// (0x0000f8be) control_top_pane_stacon_t1

0x624d,	// (0x0000f8f5) aid_levels_battery_lsc_ParamLimits

0x624d,	// (0x0000f8f5) aid_levels_battery_lsc

0x6265,	// (0x0000f90d) battery_pane_stacon_g1_ParamLimits

0x6265,	// (0x0000f90d) battery_pane_stacon_g1

0x6278,	// (0x0000f920) battery_pane_stacon_g2_ParamLimits

0x6278,	// (0x0000f920) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x00018dc0) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x00018dc0) battery_pane_stacon_g

0x62b6,	// (0x0000f95e) navi_icon_pane_stacon

0x62ca,	// (0x0000f972) navi_navi_pane_stacon

0x62b6,	// (0x0000f95e) navi_text_pane_stacon

0x620e,	// (0x0000f8b6) control_bottom_pane_stacon_g1

0x62de,	// (0x0000f986) control_bottom_pane_stacon_t1_ParamLimits

0x62de,	// (0x0000f986) control_bottom_pane_stacon_t1

0x8d5c,	// (0x00012404) grid_app_pane_ParamLimits

0x8d5c,	// (0x00012404) grid_app_pane

0x8d80,	// (0x00012428) scroll_pane_cp15_ParamLimits

0x8d80,	// (0x00012428) scroll_pane_cp15

0x8d95,	// (0x0001243d) cell_app_pane_ParamLimits

0x8d95,	// (0x0001243d) cell_app_pane

0x8db9,	// (0x00012461) cell_app_pane_g1_ParamLimits

0x8db9,	// (0x00012461) cell_app_pane_g1

0x8ddd,	// (0x00012485) cell_app_pane_g2_ParamLimits

0x8ddd,	// (0x00012485) cell_app_pane_g2

0x0001,

0xf71d,	// (0x00018dc5) cell_app_pane_g_ParamLimits

0xf71d,	// (0x00018dc5) cell_app_pane_g

0x8de9,	// (0x00012491) cell_app_pane_t1_ParamLimits

0x8de9,	// (0x00012491) cell_app_pane_t1

0x8dfb,	// (0x000124a3) grid_highlight_pane_ParamLimits

0x8dfb,	// (0x000124a3) grid_highlight_pane

0x8953,	// (0x00011ffb) cell_highlight_pane_g1

0x895b,	// (0x00012003) cell_highlight_pane_g2

0x8963,	// (0x0001200b) cell_highlight_pane_g3

0x896b,	// (0x00012013) cell_highlight_pane_g4

0x8973,	// (0x0001201b) cell_highlight_pane_g5

0x897b,	// (0x00012023) cell_highlight_pane_g6

0x8983,	// (0x0001202b) cell_highlight_pane_g7

0x898b,	// (0x00012033) cell_highlight_pane_g8

0x8993,	// (0x0001203b) cell_highlight_pane_g9

0x794a,	// (0x00010ff2) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x00018d73) cell_highlight_pane_g

0x8e0c,	// (0x000124b4) bg_scroll_pane

0x6328,	// (0x0000f9d0) scroll_handle_pane

0x8e53,	// (0x000124fb) scroll_bg_pane_g1

0x8e68,	// (0x00012510) scroll_bg_pane_g2

0x8e80,	// (0x00012528) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x00018dca) scroll_bg_pane_g

0x8e95,	// (0x0001253d) scroll_handle_focus_pane_ParamLimits

0x8e95,	// (0x0001253d) scroll_handle_focus_pane

0x8e53,	// (0x000124fb) scroll_handle_pane_g1

0x8ea2,	// (0x0001254a) scroll_handle_pane_g2

0x8e80,	// (0x00012528) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x00018dd1) scroll_handle_pane_g

0x8a50,	// (0x000120f8) bg_popup_sub_pane_cp21_ParamLimits

0x8a50,	// (0x000120f8) bg_popup_sub_pane_cp21

0x8eb6,	// (0x0001255e) popup_fep_japan_predictive_window_t1_ParamLimits

0x8eb6,	// (0x0001255e) popup_fep_japan_predictive_window_t1

0x8ed0,	// (0x00012578) popup_fep_japan_predictive_window_t2_ParamLimits

0x8ed0,	// (0x00012578) popup_fep_japan_predictive_window_t2

0x8f03,	// (0x000125ab) popup_fep_japan_predictive_window_t3_ParamLimits

0x8f03,	// (0x000125ab) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x00018dd8) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x00018dd8) popup_fep_japan_predictive_window_t

0x7954,	// (0x00010ffc) bg_popup_sub_pane_cp23

0x8f3a,	// (0x000125e2) listscroll_japin_cand_pane

0x8f42,	// (0x000125ea) popup_fep_japan_candidate_window_t1

0x8f50,	// (0x000125f8) candidate_pane_ParamLimits

0x8f50,	// (0x000125f8) candidate_pane

0x8f62,	// (0x0001260a) scroll_pane_cp30

0x8f6a,	// (0x00012612) list_single_popup_jap_candidate_pane_ParamLimits

0x8f6a,	// (0x00012612) list_single_popup_jap_candidate_pane

0x7954,	// (0x00010ffc) list_highlight_pane_cp30

0x8f7f,	// (0x00012627) list_single_popup_jap_candidate_pane_t1

0x8f8e,	// (0x00012636) level_1_signal

0x8f9b,	// (0x00012643) level_2_signal

0x8fa8,	// (0x00012650) level_3_signal

0x8fb5,	// (0x0001265d) level_4_signal

0x8fc2,	// (0x0001266a) level_5_signal

0x8fcf,	// (0x00012677) level_6_signal

0x8fdc,	// (0x00012684) level_7_signal

0x8f8e,	// (0x00012636) level_1_battery

0x8f9b,	// (0x00012643) level_2_battery

0x8fa8,	// (0x00012650) level_3_battery

0x8fb5,	// (0x0001265d) level_4_battery

0x8fc2,	// (0x0001266a) level_5_battery

0x8fcf,	// (0x00012677) level_6_battery

0x8fdc,	// (0x00012684) level_7_battery

0x9001,	// (0x000126a9) list_menu_pane_ParamLimits

0x9001,	// (0x000126a9) list_menu_pane

0x9012,	// (0x000126ba) scroll_pane_cp25_ParamLimits

0x9012,	// (0x000126ba) scroll_pane_cp25

0x902b,	// (0x000126d3) list_double2_graphic_pane_cp2_ParamLimits

0x902b,	// (0x000126d3) list_double2_graphic_pane_cp2

0x902b,	// (0x000126d3) list_double2_large_graphic_pane_cp2_ParamLimits

0x902b,	// (0x000126d3) list_double2_large_graphic_pane_cp2

0x902b,	// (0x000126d3) list_double2_pane_cp2_ParamLimits

0x902b,	// (0x000126d3) list_double2_pane_cp2

0x902b,	// (0x000126d3) list_double_graphic_pane_cp2_ParamLimits

0x902b,	// (0x000126d3) list_double_graphic_pane_cp2

0x902b,	// (0x000126d3) list_double_large_graphic_pane_cp2_ParamLimits

0x902b,	// (0x000126d3) list_double_large_graphic_pane_cp2

0x902b,	// (0x000126d3) list_double_number_pane_cp2_ParamLimits

0x902b,	// (0x000126d3) list_double_number_pane_cp2

0x902b,	// (0x000126d3) list_double_pane_cp2_ParamLimits

0x902b,	// (0x000126d3) list_double_pane_cp2

0x904f,	// (0x000126f7) list_single_2graphic_pane_cp2_ParamLimits

0x904f,	// (0x000126f7) list_single_2graphic_pane_cp2

0x904f,	// (0x000126f7) list_single_graphic_heading_pane_cp2_ParamLimits

0x904f,	// (0x000126f7) list_single_graphic_heading_pane_cp2

0x904f,	// (0x000126f7) list_single_graphic_pane_cp2_ParamLimits

0x904f,	// (0x000126f7) list_single_graphic_pane_cp2

0x904f,	// (0x000126f7) list_single_heading_pane_cp2_ParamLimits

0x904f,	// (0x000126f7) list_single_heading_pane_cp2

0x9068,	// (0x00012710) list_single_large_graphic_pane_cp2_ParamLimits

0x9068,	// (0x00012710) list_single_large_graphic_pane_cp2

0x904f,	// (0x000126f7) list_single_number_heading_pane_cp2_ParamLimits

0x904f,	// (0x000126f7) list_single_number_heading_pane_cp2

0x904f,	// (0x000126f7) list_single_number_pane_cp2_ParamLimits

0x904f,	// (0x000126f7) list_single_number_pane_cp2

0x904f,	// (0x000126f7) list_single_pane_cp2_ParamLimits

0x904f,	// (0x000126f7) list_single_pane_cp2

0x90be,	// (0x00012766) bg_popup_sub_pane_cp22

0x63da,	// (0x0000fa82) popup_side_volume_key_window_g1

0x6404,	// (0x0000faac) popup_side_volume_key_window_t1

0x6420,	// (0x0000fac8) volume_small_pane_cp1

0x7cc9,	// (0x00011371) bg_popup_sub_pane_cp24_ParamLimits

0x7cc9,	// (0x00011371) bg_popup_sub_pane_cp24

0x90d4,	// (0x0001277c) fep_china_uni_candidate_pane_ParamLimits

0x90d4,	// (0x0001277c) fep_china_uni_candidate_pane

0x90e8,	// (0x00012790) fep_china_uni_entry_pane

0x90f8,	// (0x000127a0) popup_fep_china_uni_window_g1

0x9114,	// (0x000127bc) fep_china_uni_entry_pane_g1

0x911c,	// (0x000127c4) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x00018e05) fep_china_uni_entry_pane_g

0x9124,	// (0x000127cc) fep_entry_item_pane

0x912e,	// (0x000127d6) fep_candidate_item_pane

0x9136,	// (0x000127de) fep_china_uni_candidate_pane_g1

0x913e,	// (0x000127e6) fep_china_uni_candidate_pane_g2

0x9146,	// (0x000127ee) fep_china_uni_candidate_pane_g3

0x914e,	// (0x000127f6) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x00018e0a) fep_china_uni_candidate_pane_g

0x794a,	// (0x00010ff2) fep_entry_item_pane_g1

0x9156,	// (0x000127fe) fep_entry_item_pane_t1_ParamLimits

0x9156,	// (0x000127fe) fep_entry_item_pane_t1

0x916c,	// (0x00012814) fep_candidate_item_pane_t1_ParamLimits

0x916c,	// (0x00012814) fep_candidate_item_pane_t1

0x9181,	// (0x00012829) fep_candidate_item_pane_t2_ParamLimits

0x9181,	// (0x00012829) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x00018e13) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x00018e13) fep_candidate_item_pane_t

0x7a34,	// (0x000110dc) list_highlight_pane_cp31_ParamLimits

0x7a34,	// (0x000110dc) list_highlight_pane_cp31

0x9193,	// (0x0001283b) level_1_signal_lsc

0x919c,	// (0x00012844) level_2_signal_lsc

0x91a5,	// (0x0001284d) level_3_signal_lsc

0x91ae,	// (0x00012856) level_4_signal_lsc

0x91b7,	// (0x0001285f) level_5_signal_lsc

0x91c0,	// (0x00012868) level_6_signal_lsc

0x91c9,	// (0x00012871) level_7_signal_lsc

0x91c9,	// (0x00012871) level_1_battery_lsc

0x91d2,	// (0x0001287a) level_2_battery_lsc

0x91db,	// (0x00012883) level_3_battery_lsc

0x91e4,	// (0x0001288c) level_4_battery_lsc

0x91ed,	// (0x00012895) level_5_battery_lsc

0x91f6,	// (0x0001289e) level_6_battery_lsc

0x9193,	// (0x0001283b) level_7_battery_lsc

0x91ff,	// (0x000128a7) scroll_handle_focus_pane_g1

0x9208,	// (0x000128b0) scroll_handle_focus_pane_g2

0x9211,	// (0x000128b9) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x00018e18) scroll_handle_focus_pane_g

0x921a,	// (0x000128c2) list_single_2graphic_pane_g1_ParamLimits

0x921a,	// (0x000128c2) list_single_2graphic_pane_g1

0x82f3,	// (0x0001199b) list_single_2graphic_pane_g2_ParamLimits

0x82f3,	// (0x0001199b) list_single_2graphic_pane_g2

0x8279,	// (0x00011921) list_single_2graphic_pane_g3_ParamLimits

0x8279,	// (0x00011921) list_single_2graphic_pane_g3

0x9226,	// (0x000128ce) list_single_2graphic_pane_g4_ParamLimits

0x9226,	// (0x000128ce) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x00018e1f) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x00018e1f) list_single_2graphic_pane_g

0x9237,	// (0x000128df) list_single_2graphic_pane_t1_ParamLimits

0x9237,	// (0x000128df) list_single_2graphic_pane_t1

0x9265,	// (0x0001290d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9265,	// (0x0001290d) list_double2_graphic_large_graphic_pane_g1

0x8398,	// (0x00011a40) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8398,	// (0x00011a40) list_double2_graphic_large_graphic_pane_g2

0x83a9,	// (0x00011a51) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x83a9,	// (0x00011a51) list_double2_graphic_large_graphic_pane_g3

0x9275,	// (0x0001291d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9275,	// (0x0001291d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x00018e28) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x00018e28) list_double2_graphic_large_graphic_pane_g

0x9281,	// (0x00012929) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9281,	// (0x00012929) list_double2_graphic_large_graphic_pane_t1

0x9297,	// (0x0001293f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9297,	// (0x0001293f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x00018e31) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x00018e31) list_double2_graphic_large_graphic_pane_t

0x93e8,	// (0x00012a90) popup_fast_swap_window_ParamLimits

0x93e8,	// (0x00012a90) popup_fast_swap_window

0x9404,	// (0x00012aac) popup_side_volume_key_window

0x9420,	// (0x00012ac8) stacon_top_pane

0x942a,	// (0x00012ad2) status_pane_ParamLimits

0x942a,	// (0x00012ad2) status_pane

0x9420,	// (0x00012ac8) status_small_pane

0x7954,	// (0x00010ffc) control_pane

0x7954,	// (0x00010ffc) stacon_bottom_pane

0x872c,	// (0x00011dd4) scroll_pane_cp121

0x8723,	// (0x00011dcb) set_content_pane

0x92a9,	// (0x00012951) bg_active_tab_pane_g1_cp1

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp1

0x92bb,	// (0x00012963) bg_active_tab_pane_g3_cp1

0x92a9,	// (0x00012951) bg_passive_tab_pane_g1_cp1

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp1

0x92bb,	// (0x00012963) bg_passive_tab_pane_g3_cp1

0x92c4,	// (0x0001296c) bg_active_tab_pane_g1_cp2

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp2

0x92cd,	// (0x00012975) bg_active_tab_pane_g3_cp2

0x92c4,	// (0x0001296c) bg_passive_tab_pane_g1_cp2

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp2

0x92cd,	// (0x00012975) bg_passive_tab_pane_g3_cp2

0x92d6,	// (0x0001297e) bg_active_tab_pane_g1_cp3

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp3

0x92df,	// (0x00012987) bg_active_tab_pane_g3_cp3

0x92d6,	// (0x0001297e) bg_passive_tab_pane_g1_cp3

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp3

0x92df,	// (0x00012987) bg_passive_tab_pane_g3_cp3

0x92e8,	// (0x00012990) bg_active_tab_pane_g1_cp4

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp4

0x92f3,	// (0x0001299b) bg_active_tab_pane_g3_cp4

0x92e8,	// (0x00012990) bg_passive_tab_pane_g1_cp4

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp4

0x92f3,	// (0x0001299b) bg_passive_tab_pane_g3_cp4

0x933c,	// (0x000129e4) bg_active_tab_pane_g1_cp5

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp5

0x9345,	// (0x000129ed) bg_active_tab_pane_g3_cp5

0x933c,	// (0x000129e4) bg_passive_tab_pane_g1_cp5

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp5

0x9345,	// (0x000129ed) bg_passive_tab_pane_g3_cp5

0x934e,	// (0x000129f6) list_set_graphic_pane_ParamLimits

0x934e,	// (0x000129f6) list_set_graphic_pane

0x7954,	// (0x00010ffc) bg_set_opt_pane_cp4

0x936b,	// (0x00012a13) list_set_graphic_pane_g1_ParamLimits

0x936b,	// (0x00012a13) list_set_graphic_pane_g1

0x9377,	// (0x00012a1f) list_set_graphic_pane_g2_ParamLimits

0x9377,	// (0x00012a1f) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x00018e36) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x00018e36) list_set_graphic_pane_g

0x0009,

0xfaeb,	// (0x00019193) volume_small_pane_cp_g

0x939b,	// (0x00012a43) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x939b,	// (0x00012a43) list_double2_large_graphic_pane_g1_cp2

0x93a7,	// (0x00012a4f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x93a7,	// (0x00012a4f) list_double2_large_graphic_pane_g2_cp2

0x93b8,	// (0x00012a60) list_double2_large_graphic_pane_g3_cp2

0x93c0,	// (0x00012a68) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x93c0,	// (0x00012a68) list_double2_large_graphic_pane_t1_cp2

0x93d6,	// (0x00012a7e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x93d6,	// (0x00012a7e) list_double2_large_graphic_pane_t2_cp2

0xb63a,	// (0x00014ce2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb63a,	// (0x00014ce2) list_double_large_graphic_pane_g1_cp2

0xb64b,	// (0x00014cf3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb64b,	// (0x00014cf3) list_double_large_graphic_pane_g2_cp2

0x9546,	// (0x00012bee) list_double_large_graphic_pane_g3_cp2

0xb65c,	// (0x00014d04) list_double_large_graphic_pane_g4_cp

0xb664,	// (0x00014d0c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xb664,	// (0x00014d0c) list_double_large_graphic_pane_t1_cp2

0xb67b,	// (0x00014d23) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xb67b,	// (0x00014d23) list_double_large_graphic_pane_t2_cp2

0x9438,	// (0x00012ae0) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9438,	// (0x00012ae0) list_double2_graphic_pane_g1_cp2

0x9446,	// (0x00012aee) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9446,	// (0x00012aee) list_double2_graphic_pane_g2_cp2

0x9457,	// (0x00012aff) list_double2_graphic_pane_g3_cp2

0x9461,	// (0x00012b09) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9461,	// (0x00012b09) list_double2_graphic_pane_t1_cp2

0x9477,	// (0x00012b1f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9477,	// (0x00012b1f) list_double2_graphic_pane_t2_cp2

0x9489,	// (0x00012b31) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9489,	// (0x00012b31) list_single_number_heading_pane_g1_cp2

0x9495,	// (0x00012b3d) list_single_number_heading_pane_g2_cp2

0x949d,	// (0x00012b45) list_single_number_heading_pane_t1_cp2_ParamLimits

0x949d,	// (0x00012b45) list_single_number_heading_pane_t1_cp2

0x94b3,	// (0x00012b5b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x94b3,	// (0x00012b5b) list_single_number_heading_pane_t2_cp2

0x94c5,	// (0x00012b6d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x94c5,	// (0x00012b6d) list_single_number_heading_pane_t3_cp2

0x9489,	// (0x00012b31) list_single_heading_pane_g1_cp2_ParamLimits

0x9489,	// (0x00012b31) list_single_heading_pane_g1_cp2

0x9495,	// (0x00012b3d) list_single_heading_pane_g2_cp2

0x949d,	// (0x00012b45) list_single_heading_pane_t1_cp2_ParamLimits

0x949d,	// (0x00012b45) list_single_heading_pane_t1_cp2

0xb442,	// (0x00014aea) list_single_heading_pane_t2_cp2_ParamLimits

0xb442,	// (0x00014aea) list_single_heading_pane_t2_cp2

0xb384,	// (0x00014a2c) list_double_graphic_pane_g1_cp2_ParamLimits

0xb384,	// (0x00014a2c) list_double_graphic_pane_g1_cp2

0xb390,	// (0x00014a38) list_double_graphic_pane_g2_cp2_ParamLimits

0xb390,	// (0x00014a38) list_double_graphic_pane_g2_cp2

0xb39f,	// (0x00014a47) list_double_graphic_pane_g3_cp2

0xb3a7,	// (0x00014a4f) list_double_graphic_pane_t1_cp2_ParamLimits

0xb3a7,	// (0x00014a4f) list_double_graphic_pane_t1_cp2

0xb3bd,	// (0x00014a65) list_double_graphic_pane_t2_cp2_ParamLimits

0xb3bd,	// (0x00014a65) list_double_graphic_pane_t2_cp2

0x953a,	// (0x00012be2) list_double_number_pane_g1_cp2_ParamLimits

0x953a,	// (0x00012be2) list_double_number_pane_g1_cp2

0x9546,	// (0x00012bee) list_double_number_pane_g2_cp2

0xb348,	// (0x000149f0) list_double_number_pane_t1_cp2_ParamLimits

0xb348,	// (0x000149f0) list_double_number_pane_t1_cp2

0xb35c,	// (0x00014a04) list_double_number_pane_t2_cp2_ParamLimits

0xb35c,	// (0x00014a04) list_double_number_pane_t2_cp2

0xb372,	// (0x00014a1a) list_double_number_pane_t3_cp2_ParamLimits

0xb372,	// (0x00014a1a) list_double_number_pane_t3_cp2

0xb231,	// (0x000148d9) list_single_graphic_pane_g1_cp2_ParamLimits

0xb231,	// (0x000148d9) list_single_graphic_pane_g1_cp2

0x959e,	// (0x00012c46) list_single_graphic_pane_g2_cp2_ParamLimits

0x959e,	// (0x00012c46) list_single_graphic_pane_g2_cp2

0x95aa,	// (0x00012c52) list_single_graphic_pane_g3_cp2

0xb207,	// (0x000148af) list_single_graphic_pane_t1_cp2_ParamLimits

0xb207,	// (0x000148af) list_single_graphic_pane_t1_cp2

0x959e,	// (0x00012c46) list_single_number_pane_g1_cp2_ParamLimits

0x959e,	// (0x00012c46) list_single_number_pane_g1_cp2

0x95aa,	// (0x00012c52) list_single_number_pane_g2_cp2

0xb207,	// (0x000148af) list_single_number_pane_t1_cp2_ParamLimits

0xb207,	// (0x000148af) list_single_number_pane_t1_cp2

0xb21d,	// (0x000148c5) list_single_number_pane_t2_cp2_ParamLimits

0xb21d,	// (0x000148c5) list_single_number_pane_t2_cp2

0x93a7,	// (0x00012a4f) list_double2_pane_g1_cp2_ParamLimits

0x93a7,	// (0x00012a4f) list_double2_pane_g1_cp2

0x93b8,	// (0x00012a60) list_double2_pane_g2_cp2

0x9512,	// (0x00012bba) list_double2_pane_t1_cp2_ParamLimits

0x9512,	// (0x00012bba) list_double2_pane_t1_cp2

0x9528,	// (0x00012bd0) list_double2_pane_t2_cp2_ParamLimits

0x9528,	// (0x00012bd0) list_double2_pane_t2_cp2

0x953a,	// (0x00012be2) list_double_pane_g1_cp2_ParamLimits

0x953a,	// (0x00012be2) list_double_pane_g1_cp2

0x9546,	// (0x00012bee) list_double_pane_g2_cp2

0x954e,	// (0x00012bf6) list_double_pane_t1_cp2_ParamLimits

0x954e,	// (0x00012bf6) list_double_pane_t1_cp2

0x9564,	// (0x00012c0c) list_double_pane_t2_cp2_ParamLimits

0x9564,	// (0x00012c0c) list_double_pane_t2_cp2

0x958e,	// (0x00012c36) list_single_pane_cp2_g3

0x959e,	// (0x00012c46) list_single_pane_g1_cp2_ParamLimits

0x959e,	// (0x00012c46) list_single_pane_g1_cp2

0x95aa,	// (0x00012c52) list_single_pane_g2_cp2

0x95b2,	// (0x00012c5a) list_single_pane_t1_cp2_ParamLimits

0x95b2,	// (0x00012c5a) list_single_pane_t1_cp2

0x95ca,	// (0x00012c72) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x95ca,	// (0x00012c72) list_single_large_graphic_pane_g1_cp2

0x95d6,	// (0x00012c7e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x95d6,	// (0x00012c7e) list_single_large_graphic_pane_g2_cp2

0x95e2,	// (0x00012c8a) list_single_large_graphic_pane_g3_cp2

0x95ea,	// (0x00012c92) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x95ea,	// (0x00012c92) list_single_large_graphic_pane_g4_cp1

0x9604,	// (0x00012cac) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9604,	// (0x00012cac) list_single_large_graphic_pane_t1_cp2

0xb1d3,	// (0x0001487b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb1d3,	// (0x0001487b) list_single_graphic_heading_pane_g1_cp2

0xb1a0,	// (0x00014848) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb1a0,	// (0x00014848) list_single_graphic_heading_pane_g4_cp2

0x95aa,	// (0x00012c52) list_single_graphic_heading_pane_g5_cp2

0xb1df,	// (0x00014887) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb1df,	// (0x00014887) list_single_graphic_heading_pane_t1_cp2

0xb1f5,	// (0x0001489d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb1f5,	// (0x0001489d) list_single_graphic_heading_pane_t2_cp2

0xb194,	// (0x0001483c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb194,	// (0x0001483c) list_single_2graphic_pane_g1_cp2

0xb1a0,	// (0x00014848) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb1a0,	// (0x00014848) list_single_2graphic_pane_g2_cp2

0x95aa,	// (0x00012c52) list_single_2graphic_pane_g3_cp2

0xb1b1,	// (0x00014859) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb1b1,	// (0x00014859) list_single_2graphic_pane_g4_cp2

0xb1bd,	// (0x00014865) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb1bd,	// (0x00014865) list_single_2graphic_pane_t1_cp2

0x794a,	// (0x00010ff2) list_highlight_pane_g10_cp1

0xad6c,	// (0x00014414) list_highlight_pane_g1_cp1

0xad74,	// (0x0001441c) list_highlight_pane_g2_cp1

0xad7c,	// (0x00014424) list_highlight_pane_g3_cp1

0xad84,	// (0x0001442c) list_highlight_pane_g4_cp1

0xad8c,	// (0x00014434) list_highlight_pane_g5_cp1

0xad94,	// (0x0001443c) list_highlight_pane_g6_cp1

0xad9c,	// (0x00014444) list_highlight_pane_g7_cp1

0xada4,	// (0x0001444c) list_highlight_pane_g8_cp1

0xadac,	// (0x00014454) list_highlight_pane_g9_cp1

0xac8c,	// (0x00014334) form_field_slider_pane_t3

0xac9a,	// (0x00014342) form_field_slider_pane_t4

0xaca8,	// (0x00014350) slider_form_pane_ParamLimits

0xaca8,	// (0x00014350) slider_form_pane

0x7954,	// (0x00010ffc) control_abbreviations

0x7954,	// (0x00010ffc) control_conventions

0x7954,	// (0x00010ffc) control_definitions

0x7954,	// (0x00010ffc) format_table_attribute

0xb48c,	// (0x00014b34) bg_popup_preview_window_pane_g9

0x7954,	// (0x00010ffc) format_table_data2

0x7954,	// (0x00010ffc) format_table_data3

0x7954,	// (0x00010ffc) format_table_data_example

0x0008,

0x7954,	// (0x00010ffc) intro_purpose

0xf923,	// (0x00018fcb) bg_popup_preview_window_pane_g

0x7954,	// (0x00010ffc) texts_category

0x7954,	// (0x00010ffc) texts_graphics

0x961a,	// (0x00012cc2) text_digital

0x9629,	// (0x00012cd1) text_primary

0x9638,	// (0x00012ce0) text_primary_small

0x9647,	// (0x00012cef) text_secondary

0x9656,	// (0x00012cfe) text_title

0xbcb3,	// (0x0001535b) bg_passive_tab_pane_g1_cp3_srt

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp3_srt

0xbcbc,	// (0x00015364) bg_passive_tab_pane_g3_cp3_srt

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp3_srt_ParamLimits

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp3_srt

0xbcc5,	// (0x0001536d) tabs_4_active_pane_srt_g1

0xbccd,	// (0x00015375) tabs_4_active_pane_srt_t1_ParamLimits

0xbccd,	// (0x00015375) tabs_4_active_pane_srt_t1

0xbcb3,	// (0x0001535b) bg_active_tab_pane_g1_cp3_copy1

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp3_copy1

0xbcbc,	// (0x00015364) bg_active_tab_pane_g3_cp3_copy1

0x7a34,	// (0x000110dc) tabs_2_long_active_pane_srt_ParamLimits

0x7a34,	// (0x000110dc) tabs_2_long_active_pane_srt

0x7a34,	// (0x000110dc) tabs_2_long_passive_pane_srt_ParamLimits

0x7a34,	// (0x000110dc) tabs_2_long_passive_pane_srt

0x8b86,	// (0x0001222e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8b86,	// (0x0001222e) bg_passive_tab_pane_cp4_srt

0xb8f8,	// (0x00014fa0) bg_passive_tab_pane_g1_cp4_srt

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp4_srt

0xb901,	// (0x00014fa9) bg_passive_tab_pane_g3_cp4_srt

0x8b65,	// (0x0001220d) bg_active_tab_pane_cp4_srt_ParamLimits

0x8b65,	// (0x0001220d) bg_active_tab_pane_cp4_srt

0xb90a,	// (0x00014fb2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb90a,	// (0x00014fb2) tabs_2_long_active_pane_srt_t1

0xb8f8,	// (0x00014fa0) bg_active_tab_pane_g1_cp4_srt

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp4_srt

0xb901,	// (0x00014fa9) bg_active_tab_pane_g3_cp4_srt

0x7cc9,	// (0x00011371) tabs_3_long_active_pane_srt_ParamLimits

0x7cc9,	// (0x00011371) tabs_3_long_active_pane_srt

0x7cc9,	// (0x00011371) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7cc9,	// (0x00011371) tabs_3_long_passive_pane_cp_srt

0x7cc9,	// (0x00011371) tabs_3_long_passive_pane_srt_ParamLimits

0x7cc9,	// (0x00011371) tabs_3_long_passive_pane_srt

0x8b86,	// (0x0001222e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8b86,	// (0x0001222e) bg_passive_tab_pane_cp5_srt

0x933c,	// (0x000129e4) bg_passive_tab_pane_g1_cp5_srt

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp5_srt

0x9345,	// (0x000129ed) bg_passive_tab_pane_g3_cp5_srt

0x8b65,	// (0x0001220d) bg_active_tab_pane_cp5_srt_ParamLimits

0x8b65,	// (0x0001220d) bg_active_tab_pane_cp5_srt

0xb8e6,	// (0x00014f8e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb8e6,	// (0x00014f8e) tabs_3_long_active_pane_srt_t1

0x933c,	// (0x000129e4) bg_active_tab_pane_g1_cp5_srt

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp5_srt

0x9345,	// (0x000129ed) bg_active_tab_pane_g3_cp5_srt

0xb8d8,	// (0x00014f80) navi_text_pane_srt_t1

0xb8d0,	// (0x00014f78) navi_icon_pane_srt_g1

0x9829,	// (0x00012ed1) midp_editing_number_pane_srt

0x9665,	// (0x00012d0d) midp_ticker_pane_srt

0x9831,	// (0x00012ed9) midp_ticker_pane_srt_g1

0x9839,	// (0x00012ee1) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x00018e55) midp_ticker_pane_srt_g

0x9841,	// (0x00012ee9) midp_ticker_pane_srt_t1

0xb8c1,	// (0x00014f69) midp_editing_number_pane_t1_copy1

0x966d,	// (0x00012d15) listscroll_midp_pane

0x966d,	// (0x00012d15) midp_form_pane

0x96db,	// (0x00012d83) midp_info_popup_window_ParamLimits

0x96db,	// (0x00012d83) midp_info_popup_window

0x8a50,	// (0x000120f8) bg_popup_sub_pane_cp50_ParamLimits

0x8a50,	// (0x000120f8) bg_popup_sub_pane_cp50

0xa9d5,	// (0x0001407d) listscroll_midp_info_pane_ParamLimits

0xa9d5,	// (0x0001407d) listscroll_midp_info_pane

0xa9bd,	// (0x00014065) listscroll_form_midp_pane_ParamLimits

0xa9bd,	// (0x00014065) listscroll_form_midp_pane

0xa9c9,	// (0x00014071) scroll_bar_cp050

0xa99d,	// (0x00014045) list_midp_pane

0xc8a2,	// (0x00015f4a) signal_pane_g2_cp

0xa8d7,	// (0x00013f7f) listscroll_midp_info_pane_t1_ParamLimits

0xa8d7,	// (0x00013f7f) listscroll_midp_info_pane_t1

0xa8ef,	// (0x00013f97) listscroll_midp_info_pane_t2_ParamLimits

0xa8ef,	// (0x00013f97) listscroll_midp_info_pane_t2

0xa92d,	// (0x00013fd5) listscroll_midp_info_pane_t3_ParamLimits

0xa92d,	// (0x00013fd5) listscroll_midp_info_pane_t3

0xa967,	// (0x0001400f) listscroll_midp_info_pane_t4_ParamLimits

0xa967,	// (0x0001400f) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x00018f06) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x00018f06) listscroll_midp_info_pane_t

0x8b12,	// (0x000121ba) scroll_pane_cp21

0xa875,	// (0x00013f1d) form_midp_field_choice_group_pane

0xa87e,	// (0x00013f26) form_midp_field_text_pane

0xa8bd,	// (0x00013f65) form_midp_field_time_pane

0xa8c5,	// (0x00013f6d) form_midp_gauge_slider_pane

0xa8ce,	// (0x00013f76) form_midp_gauge_wait_pane

0x7954,	// (0x00010ffc) form_midp_image_pane

0xa846,	// (0x00013eee) list_single_midp_pane_ParamLimits

0xa846,	// (0x00013eee) list_single_midp_pane

0xa7fe,	// (0x00013ea6) form_midp_field_text_pane_t1

0xa5e1,	// (0x00013c89) input_focus_pane_cp050

0xa835,	// (0x00013edd) list_midp_form_text_pane

0xa7cd,	// (0x00013e75) form_midp_field_choice_group_pane_t1

0xa7db,	// (0x00013e83) input_focus_pane_cp051

0xa7ef,	// (0x00013e97) list_midp_choice_pane

0x7954,	// (0x00010ffc) status_idle_pane

0xa7b1,	// (0x00013e59) form_midp_field_time_pane_t1

0x794a,	// (0x00010ff2) wait_anim_pane_g2_copy1

0xa7bf,	// (0x00013e67) form_midp_field_time_pane_t2

0x0001,

0x9789,	// (0x00012e31) aid_navinavi_width_2_pane

0xf859,	// (0x00018f01) form_midp_field_time_pane_t

0x7954,	// (0x00010ffc) input_focus_pane_cp052

0x7954,	// (0x00010ffc) bg_input_focus_pane_cp040

0xa771,	// (0x00013e19) form_midp_gauge_slider_pane_t1

0xa77f,	// (0x00013e27) form_midp_gauge_slider_pane_t2

0xa78d,	// (0x00013e35) form_midp_gauge_slider_pane_t3

0xa79b,	// (0x00013e43) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x00018ef8) form_midp_gauge_slider_pane_t

0xa7a9,	// (0x00013e51) form_midp_slider_pane

0x7a34,	// (0x000110dc) bg_input_focus_pane_cp041_ParamLimits

0x7a34,	// (0x000110dc) bg_input_focus_pane_cp041

0xa73e,	// (0x00013de6) form_midp_gauge_wait_pane_t1_ParamLimits

0xa73e,	// (0x00013de6) form_midp_gauge_wait_pane_t1

0xa750,	// (0x00013df8) form_midp_gauge_wait_pane_t2_ParamLimits

0xa750,	// (0x00013df8) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x00018ef3) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x00018ef3) form_midp_gauge_wait_pane_t

0xa762,	// (0x00013e0a) form_midp_wait_pane_ParamLimits

0xa762,	// (0x00013e0a) form_midp_wait_pane

0xa708,	// (0x00013db0) form_midp_image_pane_g1

0xa711,	// (0x00013db9) form_midp_image_pane_t1

0xa720,	// (0x00013dc8) form_midp_image_pane_t2

0xa72f,	// (0x00013dd7) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x00018eec) form_midp_image_pane_t

0xa6f0,	// (0x00013d98) list_single_midp_pane_g1

0xa6f9,	// (0x00013da1) list_single_midp_pane_t1

0xa6c8,	// (0x00013d70) list_midp_form_item_pane_ParamLimits

0xa6c8,	// (0x00013d70) list_midp_form_item_pane

0x9731,	// (0x00012dd9) list_midp_form_item_pane_t1

0x9740,	// (0x00012de8) midp_ticker_pane_g1

0x974c,	// (0x00012df4) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x00018e3b) midp_ticker_pane_g

0x9758,	// (0x00012e00) midp_ticker_pane_t1

0xbb45,	// (0x000151ed) midp_editing_number_pane_t1

0xbb23,	// (0x000151cb) midp_editing_number_pane

0xbb32,	// (0x000151da) midp_ticker_pane

0xb889,	// (0x00014f31) ai_message_heading_pane

0x7954,	// (0x00010ffc) bg_popup_window_pane_cp14

0xb891,	// (0x00014f39) listscroll_ai_message_pane

0xb813,	// (0x00014ebb) ai_message_heading_pane_g1_ParamLimits

0xb813,	// (0x00014ebb) ai_message_heading_pane_g1

0xb81f,	// (0x00014ec7) ai_message_heading_pane_g2_ParamLimits

0xb81f,	// (0x00014ec7) ai_message_heading_pane_g2

0xb82b,	// (0x00014ed3) ai_message_heading_pane_g3_ParamLimits

0xb82b,	// (0x00014ed3) ai_message_heading_pane_g3

0xb837,	// (0x00014edf) ai_message_heading_pane_g4_ParamLimits

0xb837,	// (0x00014edf) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x0001902d) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x0001902d) ai_message_heading_pane_g

0xb843,	// (0x00014eeb) ai_message_heading_pane_t1_ParamLimits

0xb843,	// (0x00014eeb) ai_message_heading_pane_t1

0xb85d,	// (0x00014f05) ai_message_heading_pane_t2_ParamLimits

0xb85d,	// (0x00014f05) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x00019036) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x00019036) ai_message_heading_pane_t

0xb86f,	// (0x00014f17) bg_popup_heading_pane_cp1_ParamLimits

0xb86f,	// (0x00014f17) bg_popup_heading_pane_cp1

0xb801,	// (0x00014ea9) list_ai_message_pane_ParamLimits

0xb801,	// (0x00014ea9) list_ai_message_pane

0x8b12,	// (0x000121ba) scroll_pane_cp10

0xb79d,	// (0x00014e45) list_ai_message_pane_g1

0xb7a5,	// (0x00014e4d) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x0001900a) list_ai_message_pane_g

0xb7ad,	// (0x00014e55) list_ai_message_pane_t1_ParamLimits

0xb7ad,	// (0x00014e55) list_ai_message_pane_t1

0xb7c2,	// (0x00014e6a) list_ai_message_pane_t2_ParamLimits

0xb7c2,	// (0x00014e6a) list_ai_message_pane_t2

0xb7d7,	// (0x00014e7f) list_ai_message_pane_t3_ParamLimits

0xb7d7,	// (0x00014e7f) list_ai_message_pane_t3

0xb7ec,	// (0x00014e94) list_ai_message_pane_t4_ParamLimits

0xb7ec,	// (0x00014e94) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x0001900f) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x0001900f) list_ai_message_pane_t

0xb788,	// (0x00014e30) cell_ai_soft_ind_pane_ParamLimits

0xb788,	// (0x00014e30) cell_ai_soft_ind_pane

0x976a,	// (0x00012e12) cell_ai_soft_ind_pane_g1_ParamLimits

0x976a,	// (0x00012e12) cell_ai_soft_ind_pane_g1

0x7954,	// (0x00010ffc) grid_highlight_cp1

0x9777,	// (0x00012e1f) text_secondary_cp56_ParamLimits

0x9777,	// (0x00012e1f) text_secondary_cp56

0xb75d,	// (0x00014e05) example_general_pane_ParamLimits

0xb75d,	// (0x00014e05) example_general_pane

0xb769,	// (0x00014e11) example_parent_pane_g1_ParamLimits

0xb769,	// (0x00014e11) example_parent_pane_g1

0xb775,	// (0x00014e1d) example_parent_pane_t1_ParamLimits

0xb775,	// (0x00014e1d) example_parent_pane_t1

0x9d80,	// (0x00013428) popup_preview_text_window_ParamLimits

0x9d80,	// (0x00013428) popup_preview_text_window

0x9596,	// (0x00012c3e) list_single_pane_cp2_g4

0x7d7f,	// (0x00011427) bg_popup_preview_window_pane_ParamLimits

0x7d7f,	// (0x00011427) bg_popup_preview_window_pane

0xb494,	// (0x00014b3c) popup_preview_text_window_t1_ParamLimits

0xb494,	// (0x00014b3c) popup_preview_text_window_t1

0xb4b2,	// (0x00014b5a) popup_preview_text_window_t2_ParamLimits

0xb4b2,	// (0x00014b5a) popup_preview_text_window_t2

0xb4fb,	// (0x00014ba3) popup_preview_text_window_t3_ParamLimits

0xb4fb,	// (0x00014ba3) popup_preview_text_window_t3

0xb540,	// (0x00014be8) popup_preview_text_window_t4_ParamLimits

0xb540,	// (0x00014be8) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x00018fde) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x00018fde) popup_preview_text_window_t

0xb5be,	// (0x00014c66) scroll_pane_cp11

0xa4c7,	// (0x00013b6f) bg_popup_preview_window_pane_g1

0xb454,	// (0x00014afc) bg_popup_preview_window_pane_g2

0xb45c,	// (0x00014b04) bg_popup_preview_window_pane_g3

0xb464,	// (0x00014b0c) bg_popup_preview_window_pane_g4

0xb46c,	// (0x00014b14) bg_popup_preview_window_pane_g5

0xb474,	// (0x00014b1c) bg_popup_preview_window_pane_g6

0xb47c,	// (0x00014b24) bg_popup_preview_window_pane_g7

0xb484,	// (0x00014b2c) bg_popup_preview_window_pane_g8

0x5d15,	// (0x0000f3bd) aid_popup_width_pane

0x9d5e,	// (0x00013406) popup_midp_note_alarm_window_ParamLimits

0x9d5e,	// (0x00013406) popup_midp_note_alarm_window

0x87ed,	// (0x00011e95) data_form_pane_ParamLimits

0x87f9,	// (0x00011ea1) form_field_data_pane_g1

0x8803,	// (0x00011eab) form_field_data_pane_t1_ParamLimits

0x881b,	// (0x00011ec3) input_focus_pane_ParamLimits

0x8829,	// (0x00011ed1) data_form_wide_pane_ParamLimits

0x8835,	// (0x00011edd) form_field_data_wide_pane_g1

0x8861,	// (0x00011f09) form_field_data_wide_pane_t1_ParamLimits

0x802b,	// (0x000116d3) input_focus_pane_cp6_ParamLimits

0x8abf,	// (0x00012167) input_popup_find_pane_g1_ParamLimits

0x8abf,	// (0x00012167) input_popup_find_pane_g1

0x6289,	// (0x0000f931) aid_navi_side_left_pane

0x629e,	// (0x0000f946) aid_navi_side_right_pane

0xae67,	// (0x0001450f) bg_popup_window_pane_cp30_ParamLimits

0xae67,	// (0x0001450f) bg_popup_window_pane_cp30

0xaee1,	// (0x00014589) popup_midp_note_alarm_window_g1_ParamLimits

0xaee1,	// (0x00014589) popup_midp_note_alarm_window_g1

0xaf11,	// (0x000145b9) popup_midp_note_alarm_window_t1_ParamLimits

0xaf11,	// (0x000145b9) popup_midp_note_alarm_window_t1

0xafb2,	// (0x0001465a) popup_midp_note_alarm_window_t2_ParamLimits

0xafb2,	// (0x0001465a) popup_midp_note_alarm_window_t2

0xb060,	// (0x00014708) popup_midp_note_alarm_window_t3_ParamLimits

0xb060,	// (0x00014708) popup_midp_note_alarm_window_t3

0xb092,	// (0x0001473a) popup_midp_note_alarm_window_t4_ParamLimits

0xb092,	// (0x0001473a) popup_midp_note_alarm_window_t4

0xb0b8,	// (0x00014760) popup_midp_note_alarm_window_t5_ParamLimits

0xb0b8,	// (0x00014760) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x00018f7b) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x00018f7b) popup_midp_note_alarm_window_t

0xb164,	// (0x0001480c) wait_bar_pane_cp1_ParamLimits

0xb164,	// (0x0001480c) wait_bar_pane_cp1

0x7954,	// (0x00010ffc) wait_anim_pane_copy1

0x7954,	// (0x00010ffc) wait_border_pane_copy1

0xab4d,	// (0x000141f5) wait_border_pane_g1_copy1

0x887b,	// (0x00011f23) form_field_popup_pane_g1

0x8883,	// (0x00011f2b) form_field_popup_pane_t1_ParamLimits

0x881b,	// (0x00011ec3) input_focus_pane_cp7_ParamLimits

0x889b,	// (0x00011f43) list_form_pane_ParamLimits

0x88a7,	// (0x00011f4f) form_field_popup_wide_pane_g1

0x88af,	// (0x00011f57) form_field_popup_wide_pane_t1_ParamLimits

0x881b,	// (0x00011ec3) input_focus_pane_cp8_ParamLimits

0x88c4,	// (0x00011f6c) list_form_wide_pane_ParamLimits

0xbd3f,	// (0x000153e7) aid_size_cell_graphic_pane

0x899b,	// (0x00012043) data_form_pane_t1_ParamLimits

0xbaf0,	// (0x00015198) data_form_wide_pane_t1_ParamLimits

0xa061,	// (0x00013709) bg_status_flat_pane

0x7994,	// (0x0001103c) title_pane_t1_ParamLimits

0x79fc,	// (0x000110a4) title_pane_t2_ParamLimits

0x7a22,	// (0x000110ca) title_pane_t3_ParamLimits

0xf59b,	// (0x00018c43) title_pane_t_ParamLimits

0x8f8e,	// (0x00012636) level_1_signal_ParamLimits

0x8f9b,	// (0x00012643) level_2_signal_ParamLimits

0x8fa8,	// (0x00012650) level_3_signal_ParamLimits

0x8fb5,	// (0x0001265d) level_4_signal_ParamLimits

0x8fc2,	// (0x0001266a) level_5_signal_ParamLimits

0x8fcf,	// (0x00012677) level_6_signal_ParamLimits

0x8fdc,	// (0x00012684) level_7_signal_ParamLimits

0x8f8e,	// (0x00012636) level_1_battery_ParamLimits

0x8f9b,	// (0x00012643) level_2_battery_ParamLimits

0x8fa8,	// (0x00012650) level_3_battery_ParamLimits

0x8fb5,	// (0x0001265d) level_4_battery_ParamLimits

0x8fc2,	// (0x0001266a) level_5_battery_ParamLimits

0x8fcf,	// (0x00012677) level_6_battery_ParamLimits

0x8fdc,	// (0x00012684) level_7_battery_ParamLimits

0xad6c,	// (0x00014414) bg_status_flat_pane_g1

0xad74,	// (0x0001441c) bg_status_flat_pane_g2

0xad7c,	// (0x00014424) bg_status_flat_pane_g3

0xad84,	// (0x0001442c) bg_status_flat_pane_g4

0xad8c,	// (0x00014434) bg_status_flat_pane_g5

0xad94,	// (0x0001443c) bg_status_flat_pane_g6

0xad9c,	// (0x00014444) bg_status_flat_pane_g7

0x7a4a,	// (0x000110f2) tabs_3_active_pane_t1_ParamLimits

0x7a4a,	// (0x000110f2) tabs_3_passive_pane_t1_ParamLimits

0x7a64,	// (0x0001110c) tabs_4_active_pane_t1_ParamLimits

0x7a64,	// (0x0001110c) tabs_4_1_passive_pane_t1_ParamLimits

0x8b53,	// (0x000121fb) tabs_2_active_pane_t1_ParamLimits

0x8b53,	// (0x000121fb) tabs_2_passive_pane_t1_ParamLimits

0x8b65,	// (0x0001220d) bg_active_tab_pane_cp4_ParamLimits

0x8b73,	// (0x0001221b) tabs_2_long_active_pane_t1_ParamLimits

0x8b86,	// (0x0001222e) bg_passive_tab_pane_cp4_ParamLimits

0x685b,	// (0x0000ff03) list_single_midp_graphic_pane_t1_ParamLimits

0x8b65,	// (0x0001220d) bg_active_tab_pane_cp5_ParamLimits

0x8b92,	// (0x0001223a) tabs_3_long_active_pane_t1_ParamLimits

0x8b86,	// (0x0001222e) bg_passive_tab_pane_cp5_ParamLimits

0x685b,	// (0x0000ff03) list_single_midp_graphic_pane_t1

0xa061,	// (0x00013709) bg_status_flat_pane_ParamLimits

0xa124,	// (0x000137cc) indicator_pane_cp2_ParamLimits

0xa124,	// (0x000137cc) indicator_pane_cp2

0xa248,	// (0x000138f0) navi_pane_srt_ParamLimits

0xa248,	// (0x000138f0) navi_pane_srt

0xa26c,	// (0x00013914) popup_clock_digital_analogue_window_cp1

0x7b2b,	// (0x000111d3) indicator_pane_t1

0x9665,	// (0x00012d0d) copy_highlight_pane

0x9665,	// (0x00012d0d) cursor_graphics_pane

0x9665,	// (0x00012d0d) graphic_within_text_pane

0x9665,	// (0x00012d0d) link_highlight_pane

0xb581,	// (0x00014c29) popup_preview_text_window_t5_ParamLimits

0xb581,	// (0x00014c29) popup_preview_text_window_t5

0x9791,	// (0x00012e39) cursor_digital_pane

0x9791,	// (0x00012e39) cursor_primary_pane

0x97a2,	// (0x00012e4a) cursor_primary_small_pane

0x97aa,	// (0x00012e52) cursor_secondary_pane

0x97b2,	// (0x00012e5a) cursor_title_pane

0x9791,	// (0x00012e39) link_highlight_digital_pane

0x9799,	// (0x00012e41) link_highlight_primary_pane

0x97a2,	// (0x00012e4a) link_highlight_primary_small_pane

0x97aa,	// (0x00012e52) link_highlight_secondary_pane

0x97b2,	// (0x00012e5a) link_highlight_title_pane

0x9791,	// (0x00012e39) copy_highlight_digital_pane

0x9791,	// (0x00012e39) copy_highlight_primary_pane

0x97a2,	// (0x00012e4a) copy_highlight_primary_small_pane

0x97aa,	// (0x00012e52) copy_highlight_secondary_pane

0x97b2,	// (0x00012e5a) copy_highlight_title_pane

0x97aa,	// (0x00012e52) graphic_text_digital_pane

0xae0a,	// (0x000144b2) graphic_text_primary_pane

0xae13,	// (0x000144bb) graphic_text_primary_small_pane

0x97a2,	// (0x00012e4a) graphic_text_secondary_pane

0x9791,	// (0x00012e39) graphic_text_title_pane

0x97ba,	// (0x00012e62) cursor_primary_pane_g1

0xadfc,	// (0x000144a4) cursor_text_primary_t1

0xade4,	// (0x0001448c) cursor_primary_small_pane_g1

0xadee,	// (0x00014496) cursor_text_primary_small_t1

0xadcc,	// (0x00014474) cursor_primary_small_pane_g1_copy1

0xadd6,	// (0x0001447e) cursor_text_primary_small_t1_copy1

0xadb4,	// (0x0001445c) cursor_text_title_t1

0xadc2,	// (0x0001446a) cursor_title_pane_g1

0x97ba,	// (0x00012e62) cursor_digital_pane_g1

0x97c4,	// (0x00012e6c) cursor_text_digital_t1

0x97e9,	// (0x00012e91) link_highlight_primary_pane_g1

0xad5d,	// (0x00014405) link_highlight_primary_pane_t1

0x97d2,	// (0x00012e7a) link_highlight_primary_small_pane_g1

0x97da,	// (0x00012e82) link_highlight_primary_small_pane_t1

0x97e9,	// (0x00012e91) link_highlight_secondary_pane_g1

0x97f1,	// (0x00012e99) link_highlight_secondary_pane_t1

0xacd1,	// (0x00014379) link_highlight_title_pane_g1

0xacd9,	// (0x00014381) link_highlight_title_pane_t1

0xacba,	// (0x00014362) link_highlight_digital_pane_g1

0xacc2,	// (0x0001436a) link_highlight_digital_pane_t1

0xab92,	// (0x0001423a) copy_highlight_primary_pane_g1

0xab9a,	// (0x00014242) copy_highlight_primary_pane_t1

0xab6c,	// (0x00014214) copy_highlight_primary_small_pane_g1

0xab83,	// (0x0001422b) copy_highlight_primary_small_pane_t1

0x9800,	// (0x00012ea8) copy_highlight_secondary_pane_g1

0x9808,	// (0x00012eb0) copy_highlight_secondary_pane_t1

0xab6c,	// (0x00014214) copy_highlight_title_pane_g1

0xab74,	// (0x0001421c) copy_highlight_title_pane_t1

0xab92,	// (0x0001423a) copy_highlight_digital_pane_g1

0xbf09,	// (0x000155b1) copy_highlight_digital_pane_t1

0xbe5d,	// (0x00015505) graphic_text_primary_pane_g1

0xbeed,	// (0x00015595) graphic_text_primary_pane_t1

0xbefb,	// (0x000155a3) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x000190aa) graphic_text_primary_pane_t

0xbec9,	// (0x00015571) graphic_text_primary_small_pane_g1

0xbed1,	// (0x00015579) graphic_text_primary_small_pane_t1

0xbedf,	// (0x00015587) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x000190a5) graphic_text_primary_small_pane_t

0xbea5,	// (0x0001554d) graphic_text_secondary_pane_g1

0xbead,	// (0x00015555) graphic_text_secondary_pane_t1

0xbebb,	// (0x00015563) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x000190a0) graphic_text_secondary_pane_t

0xbe81,	// (0x00015529) graphic_text_title_pane_g1

0xbe89,	// (0x00015531) graphic_text_title_pane_t1

0xbe97,	// (0x0001553f) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x0001909b) graphic_text_title_pane_t

0xbe5d,	// (0x00015505) graphic_text_digital_pane_g1

0xbe65,	// (0x0001550d) graphic_text_digital_pane_t1

0xbe73,	// (0x0001551b) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x00019096) graphic_text_digital_pane_t

0x7a34,	// (0x000110dc) navi_icon_pane_srt_ParamLimits

0x7a34,	// (0x000110dc) navi_icon_pane_srt

0x7954,	// (0x00010ffc) navi_midp_pane_srt

0x7954,	// (0x00010ffc) navi_navi_pane_srt

0x7a34,	// (0x000110dc) navi_text_pane_srt_ParamLimits

0x7a34,	// (0x000110dc) navi_text_pane_srt

0xbe28,	// (0x000154d0) navi_navi_icon_text_pane_srt

0xbe30,	// (0x000154d8) navi_navi_pane_srt_g1_ParamLimits

0xbe30,	// (0x000154d8) navi_navi_pane_srt_g1

0xbe42,	// (0x000154ea) navi_navi_pane_srt_g2_ParamLimits

0xbe42,	// (0x000154ea) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x00019091) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x00019091) navi_navi_pane_srt_g

0xbe54,	// (0x000154fc) navi_navi_tabs_pane_srt

0xbe28,	// (0x000154d0) navi_navi_text_pane_srt

0xbe28,	// (0x000154d0) navi_navi_volume_pane_srt

0xbe19,	// (0x000154c1) navi_navi_text_pane_srt_t1

0x6bd5,	// (0x0001027d) navi_navi_volume_pane_srt_g1

0x6bdd,	// (0x00010285) volume_small_pane_srt_ParamLimits

0x6bdd,	// (0x00010285) volume_small_pane_srt

0x6569,	// (0x0000fc11) volume_small_pane_srt_g1_ParamLimits

0x6569,	// (0x0000fc11) volume_small_pane_srt_g1

0x6579,	// (0x0000fc21) volume_small_pane_srt_g2_ParamLimits

0x6579,	// (0x0000fc21) volume_small_pane_srt_g2

0x658a,	// (0x0000fc32) volume_small_pane_srt_g3_ParamLimits

0x658a,	// (0x0000fc32) volume_small_pane_srt_g3

0x659b,	// (0x0000fc43) volume_small_pane_srt_g4_ParamLimits

0x659b,	// (0x0000fc43) volume_small_pane_srt_g4

0x65ac,	// (0x0000fc54) volume_small_pane_srt_g5_ParamLimits

0x65ac,	// (0x0000fc54) volume_small_pane_srt_g5

0x65bd,	// (0x0000fc65) volume_small_pane_srt_g6_ParamLimits

0x65bd,	// (0x0000fc65) volume_small_pane_srt_g6

0x65ce,	// (0x0000fc76) volume_small_pane_srt_g7_ParamLimits

0x65ce,	// (0x0000fc76) volume_small_pane_srt_g7

0x65df,	// (0x0000fc87) volume_small_pane_srt_g8_ParamLimits

0x65df,	// (0x0000fc87) volume_small_pane_srt_g8

0x65f0,	// (0x0000fc98) volume_small_pane_srt_g9_ParamLimits

0x65f0,	// (0x0000fc98) volume_small_pane_srt_g9

0x6601,	// (0x0000fca9) volume_small_pane_srt_g10_ParamLimits

0x6601,	// (0x0000fca9) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x00018e40) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x00018e40) volume_small_pane_srt_g

0x7e28,	// (0x000114d0) query_popup_data_pane_cp2

0xbdff,	// (0x000154a7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xbdff,	// (0x000154a7) navi_navi_icon_text_pane_srt_t1

0xae0a,	// (0x000144b2) navi_tabs_2_long_pane_srt

0xae0a,	// (0x000144b2) navi_tabs_2_pane_srt

0xae0a,	// (0x000144b2) navi_tabs_3_long_pane_srt

0xae0a,	// (0x000144b2) navi_tabs_3_pane_srt

0xae0a,	// (0x000144b2) navi_tabs_4_pane_srt

0x6bb5,	// (0x0001025d) tabs_2_active_pane_srt_ParamLimits

0x6bb5,	// (0x0001025d) tabs_2_active_pane_srt

0x6bc5,	// (0x0001026d) tabs_2_passive_pane_srt_ParamLimits

0x6bc5,	// (0x0001026d) tabs_2_passive_pane_srt

0x99ef,	// (0x00013097) bg_passive_tab_pane_cp1_srt_ParamLimits

0x99ef,	// (0x00013097) bg_passive_tab_pane_cp1_srt

0xbdcb,	// (0x00015473) bg_passive_tab_pane_g1_cp1_srt

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp1_srt

0xbdd4,	// (0x0001547c) bg_passive_tab_pane_g3_cp1_srt

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp1_srt_ParamLimits

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp1_srt

0xbddd,	// (0x00015485) tabs_2_active_pane_srt_g1

0xbde5,	// (0x0001548d) tabs_2_active_pane_srt_t1_ParamLimits

0xbde5,	// (0x0001548d) tabs_2_active_pane_srt_t1

0xbdcb,	// (0x00015473) bg_active_tab_pane_g1_cp1_srt

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp1_srt

0xbdd4,	// (0x0001547c) bg_active_tab_pane_g3_cp1_srt

0x6b82,	// (0x0001022a) tabs_3_active_pane_srt_ParamLimits

0x6b82,	// (0x0001022a) tabs_3_active_pane_srt

0x6b93,	// (0x0001023b) tabs_3_passive_pane_cp_srt_ParamLimits

0x6b93,	// (0x0001023b) tabs_3_passive_pane_cp_srt

0x6ba4,	// (0x0001024c) tabs_3_passive_pane_srt_ParamLimits

0x6ba4,	// (0x0001024c) tabs_3_passive_pane_srt

0x99ef,	// (0x00013097) bg_passive_tab_pane_cp2_srt_ParamLimits

0x99ef,	// (0x00013097) bg_passive_tab_pane_cp2_srt

0x9817,	// (0x00012ebf) bg_passive_tab_pane_g1_cp2_srt

0x92b2,	// (0x0001295a) bg_passive_tab_pane_g2_cp2_srt

0x9820,	// (0x00012ec8) bg_passive_tab_pane_g3_cp2_srt

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp2_srt_ParamLimits

0x7a34,	// (0x000110dc) bg_active_tab_pane_cp2_srt

0xbdb1,	// (0x00015459) tabs_3_active_pane_srt_g1

0xbdb9,	// (0x00015461) tabs_3_active_pane_srt_t1_ParamLimits

0xbdb9,	// (0x00015461) tabs_3_active_pane_srt_t1

0x9817,	// (0x00012ebf) bg_active_tab_pane_g1_cp2_srt

0x92b2,	// (0x0001295a) bg_active_tab_pane_g2_cp2_srt

0x9820,	// (0x00012ec8) bg_active_tab_pane_g3_cp2_srt

0x6b3a,	// (0x000101e2) tabs_4_active_pane_srt_ParamLimits

0x6b3a,	// (0x000101e2) tabs_4_active_pane_srt

0x6b4c,	// (0x000101f4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6b4c,	// (0x000101f4) tabs_4_passive_pane_cp2_srt

0x9975,	// (0x0001301d) aid_size_cell_toolbar

0x8b86,	// (0x0001222e) main_idle_act_pane_ParamLimits

0x9b94,	// (0x0001323c) popup_large_graphic_colour_window_ParamLimits

0x9efb,	// (0x000135a3) popup_toolbar_window_ParamLimits

0x9efb,	// (0x000135a3) popup_toolbar_window

0xbb6f,	// (0x00015217) list_single_graphic_2heading_pane_ParamLimits

0xbb6f,	// (0x00015217) list_single_graphic_2heading_pane

0x8d42,	// (0x000123ea) aid_size_cell_apps_grid_lsc_pane

0x8d54,	// (0x000123fc) aid_size_cell_apps_grid_prt_pane

0x99ef,	// (0x00013097) bg_wml_button_pane_cp1_ParamLimits

0x99ef,	// (0x00013097) bg_wml_button_pane_cp1

0xa7fe,	// (0x00013ea6) form_midp_field_text_pane_t1_ParamLimits

0xa5e1,	// (0x00013c89) input_focus_pane_cp050_ParamLimits

0xa835,	// (0x00013edd) list_midp_form_text_pane_ParamLimits

0xa7db,	// (0x00013e83) input_focus_pane_cp051_ParamLimits

0xa7ef,	// (0x00013e97) list_midp_choice_pane_ParamLimits

0xa672,	// (0x00013d1a) list_single_2graphic_pane_cp3_ParamLimits

0xa672,	// (0x00013d1a) list_single_2graphic_pane_cp3

0xa696,	// (0x00013d3e) list_single_midp_graphic_pane_ParamLimits

0xa696,	// (0x00013d3e) list_single_midp_graphic_pane

0x675e,	// (0x0000fe06) list_single_graphic_2heading_pane_g1_ParamLimits

0x675e,	// (0x0000fe06) list_single_graphic_2heading_pane_g1

0x676a,	// (0x0000fe12) list_single_graphic_2heading_pane_g4_ParamLimits

0x676a,	// (0x0000fe12) list_single_graphic_2heading_pane_g4

0x6776,	// (0x0000fe1e) list_single_graphic_2heading_pane_g5_ParamLimits

0x6776,	// (0x0000fe1e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00018e93) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00018e93) list_single_graphic_2heading_pane_g

0x6782,	// (0x0000fe2a) list_single_graphic_2heading_pane_t1_ParamLimits

0x6782,	// (0x0000fe2a) list_single_graphic_2heading_pane_t1

0x6796,	// (0x0000fe3e) list_single_graphic_2heading_pane_t2_ParamLimits

0x6796,	// (0x0000fe3e) list_single_graphic_2heading_pane_t2

0x67b2,	// (0x0000fe5a) list_single_graphic_2heading_pane_t3_ParamLimits

0x67b2,	// (0x0000fe5a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x00018e9a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x00018e9a) list_single_graphic_2heading_pane_t

0xa3cb,	// (0x00013a73) bg_popup_sub_pane_cp2

0xa3f5,	// (0x00013a9d) grid_toobar_pane

0x67ca,	// (0x0000fe72) cell_toolbar_pane_ParamLimits

0x67ca,	// (0x0000fe72) cell_toolbar_pane

0xa46b,	// (0x00013b13) cell_toolbar_pane_g1_ParamLimits

0xa46b,	// (0x00013b13) cell_toolbar_pane_g1

0xa47f,	// (0x00013b27) cell_toolbar_pane_g2_ParamLimits

0xa47f,	// (0x00013b27) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x00018ea8) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x00018ea8) cell_toolbar_pane_g

0xa4a1,	// (0x00013b49) grid_highlight_pane_cp2_ParamLimits

0xa4a1,	// (0x00013b49) grid_highlight_pane_cp2

0xa4bb,	// (0x00013b63) toolbar_button_pane

0xa4c7,	// (0x00013b6f) toolbar_button_pane_g1

0xa4cf,	// (0x00013b77) toolbar_button_pane_g2

0xa4d7,	// (0x00013b7f) toolbar_button_pane_g3

0xa4df,	// (0x00013b87) toolbar_button_pane_g4

0xa4e7,	// (0x00013b8f) toolbar_button_pane_g5

0xa4ef,	// (0x00013b97) toolbar_button_pane_g6

0xa4f7,	// (0x00013b9f) toolbar_button_pane_g7

0xa4ff,	// (0x00013ba7) toolbar_button_pane_g8

0xa507,	// (0x00013baf) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x00018ead) toolbar_button_pane_g

0x6802,	// (0x0000feaa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6802,	// (0x0000feaa) list_single_2graphic_pane_g1_cp3

0x680e,	// (0x0000feb6) list_single_2graphic_pane_g2_cp3_ParamLimits

0x680e,	// (0x0000feb6) list_single_2graphic_pane_g2_cp3

0x681f,	// (0x0000fec7) list_single_2graphic_pane_g3_cp3

0x6827,	// (0x0000fecf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6827,	// (0x0000fecf) list_single_2graphic_pane_g4_cp3

0x6833,	// (0x0000fedb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6833,	// (0x0000fedb) list_single_2graphic_pane_t1_cp3

0x684f,	// (0x0000fef7) list_single_midp_graphic_pane_g2_ParamLimits

0x684f,	// (0x0000fef7) list_single_midp_graphic_pane_g2

0x997d,	// (0x00013025) aid_zoom_text_primary

0x9985,	// (0x0001302d) aid_zoom_text_secondary

0x98d4,	// (0x00012f7c) status_small_pane_g7_ParamLimits

0x98d4,	// (0x00012f7c) status_small_pane_g7

0x98f7,	// (0x00012f9f) status_small_pane_t1_ParamLimits

0x796b,	// (0x00011013) title_pane_g2

0x0003,

0xf592,	// (0x00018c3a) title_pane_g

0x7ec9,	// (0x00011571) aid_size_cell_colour_1_pane_ParamLimits

0x7ec9,	// (0x00011571) aid_size_cell_colour_1_pane

0x7edd,	// (0x00011585) aid_size_cell_colour_2_pane_ParamLimits

0x7edd,	// (0x00011585) aid_size_cell_colour_2_pane

0x7ef1,	// (0x00011599) aid_size_cell_colour_3_pane_ParamLimits

0x7ef1,	// (0x00011599) aid_size_cell_colour_3_pane

0x7f05,	// (0x000115ad) aid_size_cell_colour_4_pane_ParamLimits

0x7f05,	// (0x000115ad) aid_size_cell_colour_4_pane

0x61c5,	// (0x0000f86d) title_pane_stacon_g1_ParamLimits

0x61c5,	// (0x0000f86d) title_pane_stacon_g1

0xabf1,	// (0x00014299) popup_note_wait_window_g3_ParamLimits

0xabf1,	// (0x00014299) popup_note_wait_window_g3

0xac67,	// (0x0001430f) popup_note_wait_window_t5_ParamLimits

0xac67,	// (0x0001430f) popup_note_wait_window_t5

0x7954,	// (0x00010ffc) main_feb_china_hwr_fs_writing_pane

0x9a79,	// (0x00013121) popup_feb_china_hwr_fs_window_ParamLimits

0x9a79,	// (0x00013121) popup_feb_china_hwr_fs_window

0x6871,	// (0x0000ff19) aid_size_cell_hwr_fs_ParamLimits

0x6871,	// (0x0000ff19) aid_size_cell_hwr_fs

0xa5e1,	// (0x00013c89) bg_popup_sub_pane_cp3_ParamLimits

0xa5e1,	// (0x00013c89) bg_popup_sub_pane_cp3

0x6886,	// (0x0000ff2e) grid_hwr_fs_pane_ParamLimits

0x6886,	// (0x0000ff2e) grid_hwr_fs_pane

0x689e,	// (0x0000ff46) linegrid_hwr_fs_pane_ParamLimits

0x689e,	// (0x0000ff46) linegrid_hwr_fs_pane

0x68ae,	// (0x0000ff56) cell_hwr_fs_pane_ParamLimits

0x68ae,	// (0x0000ff56) cell_hwr_fs_pane

0xa5ed,	// (0x00013c95) linegrid_hwr_fs_pane_g1_ParamLimits

0xa5ed,	// (0x00013c95) linegrid_hwr_fs_pane_g1

0xa5f9,	// (0x00013ca1) linegrid_hwr_fs_pane_g2_ParamLimits

0xa5f9,	// (0x00013ca1) linegrid_hwr_fs_pane_g2

0xa60b,	// (0x00013cb3) linegrid_hwr_fs_pane_g3_ParamLimits

0xa60b,	// (0x00013cb3) linegrid_hwr_fs_pane_g3

0x68d0,	// (0x0000ff78) linegrid_hwr_fs_pane_g4_ParamLimits

0x68d0,	// (0x0000ff78) linegrid_hwr_fs_pane_g4

0x68ea,	// (0x0000ff92) linegrid_hwr_fs_pane_g5_ParamLimits

0x68ea,	// (0x0000ff92) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x00018ed8) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x00018ed8) linegrid_hwr_fs_pane_g

0xa617,	// (0x00013cbf) cell_hwr_fs_pane_g1_ParamLimits

0xa617,	// (0x00013cbf) cell_hwr_fs_pane_g1

0xa302,	// (0x000139aa) cell_hwr_fs_pane_g2_ParamLimits

0xa302,	// (0x000139aa) cell_hwr_fs_pane_g2

0xa62d,	// (0x00013cd5) cell_hwr_fs_pane_g3_ParamLimits

0xa62d,	// (0x00013cd5) cell_hwr_fs_pane_g3

0xa63a,	// (0x00013ce2) cell_hwr_fs_pane_g4_ParamLimits

0xa63a,	// (0x00013ce2) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00018ee3) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00018ee3) cell_hwr_fs_pane_g

0x6900,	// (0x0000ffa8) cell_hwr_fs_pane_t1

0x7954,	// (0x00010ffc) grid_highlight_pane_cp6

0x7954,	// (0x00010ffc) main_idle_act2_pane

0x8af9,	// (0x000121a1) aid_inside_area_popup_secondary

0xb29e,	// (0x00014946) aid_inside_area_window_primary_ParamLimits

0xb29e,	// (0x00014946) aid_inside_area_window_primary

0xbf18,	// (0x000155c0) ai2_news_ticker_pane

0xbf20,	// (0x000155c8) aid_size_cell_ai1_link_ParamLimits

0xbf20,	// (0x000155c8) aid_size_cell_ai1_link

0xbf3a,	// (0x000155e2) popup_ai2_data_window_ParamLimits

0xbf3a,	// (0x000155e2) popup_ai2_data_window

0xbf50,	// (0x000155f8) popup_ai2_link_window_ParamLimits

0xbf50,	// (0x000155f8) popup_ai2_link_window

0xa5e1,	// (0x00013c89) bg_popup_sub_pane_cp4_ParamLimits

0xa5e1,	// (0x00013c89) bg_popup_sub_pane_cp4

0xbf64,	// (0x0001560c) grid_ai2_link_pane_ParamLimits

0xbf64,	// (0x0001560c) grid_ai2_link_pane

0xbf7b,	// (0x00015623) popup_ai2_link_window_g1_ParamLimits

0xbf7b,	// (0x00015623) popup_ai2_link_window_g1

0xbf87,	// (0x0001562f) popup_ai2_link_window_g2_ParamLimits

0xbf87,	// (0x0001562f) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x000190af) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x000190af) popup_ai2_link_window_g

0xbf96,	// (0x0001563e) ai2_mp_button_pane

0xbf9e,	// (0x00015646) ai2_mp_volume_pane

0xa7db,	// (0x00013e83) bg_popup_sub_pane_cp5_ParamLimits

0xa7db,	// (0x00013e83) bg_popup_sub_pane_cp5

0xbfa6,	// (0x0001564e) heading_ai2_gene_pane_ParamLimits

0xbfa6,	// (0x0001564e) heading_ai2_gene_pane

0xbfb2,	// (0x0001565a) list_ai2_gene_pane_ParamLimits

0xbfb2,	// (0x0001565a) list_ai2_gene_pane

0xbffa,	// (0x000156a2) cell_ai2_link_pane_ParamLimits

0xbffa,	// (0x000156a2) cell_ai2_link_pane

0xc010,	// (0x000156b8) cell_ai2_link_pane_g1

0x7954,	// (0x00010ffc) grid_highlight_pane_cp7

0x6bf2,	// (0x0001029a) ai2_mp_volume_pane_g1

0xc0e0,	// (0x00015788) ai2_mp_volume_pane_g2

0xc055,	// (0x000156fd) list_ai2_gene_pane_t1

0xc0e8,	// (0x00015790) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x000190c8) ai2_mp_volume_pane_g

0x6bfa,	// (0x000102a2) volume_small_pane_cp3

0xc0f0,	// (0x00015798) aid_size_cell_ai2_button

0xc0f8,	// (0x000157a0) grid_ai2_button_pane

0xc101,	// (0x000157a9) cell_ai2_button_pane_ParamLimits

0xc101,	// (0x000157a9) cell_ai2_button_pane

0x794a,	// (0x00010ff2) cell_ai2_button_pane_g1

0x7954,	// (0x00010ffc) grid_highlight_pane_cp8

0xc0a0,	// (0x00015748) ai2_gene_pane_t1_ParamLimits

0xc0a0,	// (0x00015748) ai2_gene_pane_t1

0x996b,	// (0x00013013) aid_height_parent_landscape

0xb958,	// (0x00015000) aid_height_set_list

0xb969,	// (0x00015011) aid_size_parent

0xbd3f,	// (0x000153e7) aid_size_cell_graphic_pane_ParamLimits

0xbfc2,	// (0x0001566a) popup_ai2_data_window_g1_ParamLimits

0xbfc2,	// (0x0001566a) popup_ai2_data_window_g1

0xbfce,	// (0x00015676) ai2_news_ticker_pane_g1

0xbfd6,	// (0x0001567e) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x000190b4) ai2_news_ticker_pane_g

0xbfde,	// (0x00015686) ai2_news_ticker_pane_t1

0xbfec,	// (0x00015694) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x000190b9) ai2_news_ticker_pane_t

0xc019,	// (0x000156c1) heading_ai2_gene_pane_g1

0xc021,	// (0x000156c9) heading_ai2_gene_pane_t1_ParamLimits

0xc021,	// (0x000156c9) heading_ai2_gene_pane_t1

0xc036,	// (0x000156de) list_highlight_pane_cp6

0xc03e,	// (0x000156e6) ai2_gene_pane_ParamLimits

0xc03e,	// (0x000156e6) ai2_gene_pane

0xc063,	// (0x0001570b) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x000190be) list_ai2_gene_pane_t

0xc071,	// (0x00015719) list_highlight_pane_cp8_ParamLimits

0xc071,	// (0x00015719) list_highlight_pane_cp8

0xc082,	// (0x0001572a) ai2_gene_pane_g1_ParamLimits

0xc082,	// (0x0001572a) ai2_gene_pane_g1

0xc094,	// (0x0001573c) ai2_gene_pane_g2_ParamLimits

0xc094,	// (0x0001573c) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x000190c3) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x000190c3) ai2_gene_pane_g

0x8250,	// (0x000118f8) scroll_pane_cp12

0x671d,	// (0x0000fdc5) control_pane_t3_ParamLimits

0x671d,	// (0x0000fdc5) control_pane_t3

0x98e8,	// (0x00012f90) status_small_pane_g8_ParamLimits

0x98e8,	// (0x00012f90) status_small_pane_g8

0x9b5f,	// (0x00013207) popup_find_window_ParamLimits

0x9d72,	// (0x0001341a) popup_note_image_window_ParamLimits

0xa431,	// (0x00013ad9) list_double2_graphic_pane_vc_g1_ParamLimits

0xa431,	// (0x00013ad9) list_double2_graphic_pane_vc_g1

0xa43d,	// (0x00013ae5) list_double2_graphic_pane_vc_g2_ParamLimits

0xa43d,	// (0x00013ae5) list_double2_graphic_pane_vc_g2

0xa449,	// (0x00013af1) list_double2_graphic_pane_vc_g3_ParamLimits

0xa449,	// (0x00013af1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x00018ea1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x00018ea1) list_double2_graphic_pane_vc_g

0xa455,	// (0x00013afd) list_double2_graphic_pane_vc_t1_ParamLimits

0xa455,	// (0x00013afd) list_double2_graphic_pane_vc_t1

0xa43d,	// (0x00013ae5) list_single_heading_pane_vc_g1_ParamLimits

0xa43d,	// (0x00013ae5) list_single_heading_pane_vc_g1

0xa449,	// (0x00013af1) list_single_heading_pane_vc_g2_ParamLimits

0xa449,	// (0x00013af1) list_single_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018ec2) list_single_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018ec2) list_single_heading_pane_vc_g

0xa50f,	// (0x00013bb7) list_single_heading_pane_vc_t1_ParamLimits

0xa50f,	// (0x00013bb7) list_single_heading_pane_vc_t1

0xa525,	// (0x00013bcd) list_single_heading_pane_vc_t2_ParamLimits

0xa525,	// (0x00013bcd) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x00018ec7) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x00018ec7) list_single_heading_pane_vc_t

0xa539,	// (0x00013be1) list_setting_number_pane_vc_g1_ParamLimits

0xa539,	// (0x00013be1) list_setting_number_pane_vc_g1

0xa545,	// (0x00013bed) list_setting_number_pane_vc_g2_ParamLimits

0xa545,	// (0x00013bed) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x00018ecc) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x00018ecc) list_setting_number_pane_vc_g

0xa551,	// (0x00013bf9) list_setting_number_pane_vc_t1_ParamLimits

0xa551,	// (0x00013bf9) list_setting_number_pane_vc_t1

0xa565,	// (0x00013c0d) list_setting_number_pane_vc_t2_ParamLimits

0xa565,	// (0x00013c0d) list_setting_number_pane_vc_t2

0xa581,	// (0x00013c29) list_setting_number_pane_vc_t3_ParamLimits

0xa581,	// (0x00013c29) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x00018ed1) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x00018ed1) list_setting_number_pane_vc_t

0xa5a7,	// (0x00013c4f) set_value_pane_vc_ParamLimits

0xa5a7,	// (0x00013c4f) set_value_pane_vc

0xbb6f,	// (0x00015217) list_double2_graphic_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_double2_graphic_pane_vc

0xbb81,	// (0x00015229) list_double2_large_graphic_pane_vc_ParamLimits

0xbb81,	// (0x00015229) list_double2_large_graphic_pane_vc

0xbb6f,	// (0x00015217) list_double2_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_double2_pane_vc

0xbb6f,	// (0x00015217) list_double_graphic_heading_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_double_graphic_heading_pane_vc

0xbb6f,	// (0x00015217) list_double_graphic_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_double_graphic_pane_vc

0xbb6f,	// (0x00015217) list_double_heading_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_double_heading_pane_vc

0xbb81,	// (0x00015229) list_double_large_graphic_pane_vc_ParamLimits

0xbb81,	// (0x00015229) list_double_large_graphic_pane_vc

0xbb6f,	// (0x00015217) list_double_number_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_double_number_pane_vc

0xbb6f,	// (0x00015217) list_double_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_double_pane_vc

0xbb6f,	// (0x00015217) list_double_time_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_double_time_pane_vc

0xbb6f,	// (0x00015217) list_setting_number_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_setting_number_pane_vc

0xbb6f,	// (0x00015217) list_setting_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_setting_pane_vc

0xbb6f,	// (0x00015217) list_single_graphic_heading_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_single_graphic_heading_pane_vc

0xbb6f,	// (0x00015217) list_single_heading_pane_vc_ParamLimits

0xbb6f,	// (0x00015217) list_single_heading_pane_vc

0xbb92,	// (0x0001523a) list_single_number_heading_pane_vc_ParamLimits

0xbb92,	// (0x0001523a) list_single_number_heading_pane_vc

0xc135,	// (0x000157dd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc135,	// (0x000157dd) list_double_graphic_heading_pane_vc_g1

0xa43d,	// (0x00013ae5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa43d,	// (0x00013ae5) list_double_graphic_heading_pane_vc_g2

0xa449,	// (0x00013af1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa449,	// (0x00013af1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa27,	// (0x000190cf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa27,	// (0x000190cf) list_double_graphic_heading_pane_vc_g

0xc141,	// (0x000157e9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc141,	// (0x000157e9) list_double_graphic_heading_pane_vc_t1

0xa50f,	// (0x00013bb7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa50f,	// (0x00013bb7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2e,	// (0x000190d6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x000190d6) list_double_graphic_heading_pane_vc_t

0xa539,	// (0x00013be1) list_setting_pane_vc_g1_ParamLimits

0xa539,	// (0x00013be1) list_setting_pane_vc_g1

0xa545,	// (0x00013bed) list_setting_pane_vc_g2_ParamLimits

0xa545,	// (0x00013bed) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x00018ecc) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x00018ecc) list_setting_pane_vc_g

0xc359,	// (0x00015a01) list_setting_pane_vc_t1_ParamLimits

0xc359,	// (0x00015a01) list_setting_pane_vc_t1

0xc36d,	// (0x00015a15) list_setting_pane_vc_t2_ParamLimits

0xc36d,	// (0x00015a15) list_setting_pane_vc_t2

0x0001,

0xfa5c,	// (0x00019104) list_setting_pane_vc_t_ParamLimits

0xfa5c,	// (0x00019104) list_setting_pane_vc_t

0xa5a7,	// (0x00013c4f) set_value_pane_cp_vc_ParamLimits

0xa5a7,	// (0x00013c4f) set_value_pane_cp_vc

0xa43d,	// (0x00013ae5) list_single_number_heading_pane_vc_g1_ParamLimits

0xa43d,	// (0x00013ae5) list_single_number_heading_pane_vc_g1

0xa449,	// (0x00013af1) list_single_number_heading_pane_vc_g2_ParamLimits

0xa449,	// (0x00013af1) list_single_number_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018ec2) list_single_number_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018ec2) list_single_number_heading_pane_vc_g

0xa50f,	// (0x00013bb7) list_single_number_heading_pane_vc_t1_ParamLimits

0xa50f,	// (0x00013bb7) list_single_number_heading_pane_vc_t1

0xc38f,	// (0x00015a37) list_single_number_heading_pane_vc_t2_ParamLimits

0xc38f,	// (0x00015a37) list_single_number_heading_pane_vc_t2

0xc3a3,	// (0x00015a4b) list_single_number_heading_pane_vc_t3_ParamLimits

0xc3a3,	// (0x00015a4b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa61,	// (0x00019109) list_single_number_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x00019109) list_single_number_heading_pane_vc_t

0xa431,	// (0x00013ad9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa431,	// (0x00013ad9) list_single_graphic_heading_pane_vc_g1

0xa43d,	// (0x00013ae5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa43d,	// (0x00013ae5) list_single_graphic_heading_pane_vc_g4

0xa449,	// (0x00013af1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa449,	// (0x00013af1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x00018ea1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x00018ea1) list_single_graphic_heading_pane_vc_g

0xa50f,	// (0x00013bb7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xa50f,	// (0x00013bb7) list_single_graphic_heading_pane_vc_t1

0xc3b5,	// (0x00015a5d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc3b5,	// (0x00015a5d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x00019110) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x00019110) list_single_graphic_heading_pane_vc_t

0xa43d,	// (0x00013ae5) list_double2_pane_vc_g1_ParamLimits

0xa43d,	// (0x00013ae5) list_double2_pane_vc_g1

0xa449,	// (0x00013af1) list_double2_pane_vc_g2_ParamLimits

0xa449,	// (0x00013af1) list_double2_pane_vc_g2

0x0001,

0xf81a,	// (0x00018ec2) list_double2_pane_vc_g_ParamLimits

0xf81a,	// (0x00018ec2) list_double2_pane_vc_g

0xc3c9,	// (0x00015a71) list_double2_pane_vc_t1_ParamLimits

0xc3c9,	// (0x00015a71) list_double2_pane_vc_t1

0xc3df,	// (0x00015a87) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc3df,	// (0x00015a87) list_double2_large_graphic_pane_vc_g1

0xc3eb,	// (0x00015a93) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc3eb,	// (0x00015a93) list_double2_large_graphic_pane_vc_g2

0xc3f7,	// (0x00015a9f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc3f7,	// (0x00015a9f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa6d,	// (0x00019115) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x00019115) list_double2_large_graphic_pane_vc_g

0xc403,	// (0x00015aab) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc403,	// (0x00015aab) list_double2_large_graphic_pane_vc_t1

0xc419,	// (0x00015ac1) list_double_time_pane_vc_g1_ParamLimits

0xc419,	// (0x00015ac1) list_double_time_pane_vc_g1

0xc425,	// (0x00015acd) list_double_time_pane_vc_g2_ParamLimits

0xc425,	// (0x00015acd) list_double_time_pane_vc_g2

0x0001,

0xfa74,	// (0x0001911c) list_double_time_pane_vc_g_ParamLimits

0xfa74,	// (0x0001911c) list_double_time_pane_vc_g

0xc431,	// (0x00015ad9) list_double_time_pane_vc_t1_ParamLimits

0xc431,	// (0x00015ad9) list_double_time_pane_vc_t1

0xc44a,	// (0x00015af2) list_double_time_pane_vc_t2_ParamLimits

0xc44a,	// (0x00015af2) list_double_time_pane_vc_t2

0xc465,	// (0x00015b0d) list_double_time_pane_vc_t3_ParamLimits

0xc465,	// (0x00015b0d) list_double_time_pane_vc_t3

0xc47d,	// (0x00015b25) list_double_time_pane_vc_t4_ParamLimits

0xc47d,	// (0x00015b25) list_double_time_pane_vc_t4

0x0003,

0xfa79,	// (0x00019121) list_double_time_pane_vc_t_ParamLimits

0xfa79,	// (0x00019121) list_double_time_pane_vc_t

0xa43d,	// (0x00013ae5) list_double_pane_vc_g1_ParamLimits

0xa43d,	// (0x00013ae5) list_double_pane_vc_g1

0xa449,	// (0x00013af1) list_double_pane_vc_g2_ParamLimits

0xa449,	// (0x00013af1) list_double_pane_vc_g2

0x0001,

0xf81a,	// (0x00018ec2) list_double_pane_vc_g_ParamLimits

0xf81a,	// (0x00018ec2) list_double_pane_vc_g

0xc491,	// (0x00015b39) list_double_pane_vc_t1_ParamLimits

0xc491,	// (0x00015b39) list_double_pane_vc_t1

0xc4a3,	// (0x00015b4b) list_double_pane_vc_t2_ParamLimits

0xc4a3,	// (0x00015b4b) list_double_pane_vc_t2

0x0001,

0xfa82,	// (0x0001912a) list_double_pane_vc_t_ParamLimits

0xfa82,	// (0x0001912a) list_double_pane_vc_t

0xa43d,	// (0x00013ae5) list_double_number_pane_vc_g1_ParamLimits

0xa43d,	// (0x00013ae5) list_double_number_pane_vc_g1

0xa449,	// (0x00013af1) list_double_number_pane_vc_g2_ParamLimits

0xa449,	// (0x00013af1) list_double_number_pane_vc_g2

0x0001,

0xf81a,	// (0x00018ec2) list_double_number_pane_vc_g_ParamLimits

0xf81a,	// (0x00018ec2) list_double_number_pane_vc_g

0xc4bb,	// (0x00015b63) list_double_number_pane_vc_t1_ParamLimits

0xc4bb,	// (0x00015b63) list_double_number_pane_vc_t1

0xc4cf,	// (0x00015b77) list_double_number_pane_vc_t2_ParamLimits

0xc4cf,	// (0x00015b77) list_double_number_pane_vc_t2

0xc4a3,	// (0x00015b4b) list_double_number_pane_vc_t3_ParamLimits

0xc4a3,	// (0x00015b4b) list_double_number_pane_vc_t3

0x0002,

0xfa87,	// (0x0001912f) list_double_number_pane_vc_t_ParamLimits

0xfa87,	// (0x0001912f) list_double_number_pane_vc_t

0xc4e1,	// (0x00015b89) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc4e1,	// (0x00015b89) list_double_large_graphic_pane_vc_g1

0xc4ed,	// (0x00015b95) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc4ed,	// (0x00015b95) list_double_large_graphic_pane_vc_g2

0xc3f7,	// (0x00015a9f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc3f7,	// (0x00015a9f) list_double_large_graphic_pane_vc_g3

0xc4fc,	// (0x00015ba4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc4fc,	// (0x00015ba4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa8e,	// (0x00019136) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x00019136) list_double_large_graphic_pane_vc_g

0xc508,	// (0x00015bb0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc508,	// (0x00015bb0) list_double_large_graphic_pane_vc_t1

0xc51a,	// (0x00015bc2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc51a,	// (0x00015bc2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa97,	// (0x0001913f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa97,	// (0x0001913f) list_double_large_graphic_pane_vc_t

0xa43d,	// (0x00013ae5) list_double_heading_pane_vc_g1_ParamLimits

0xa43d,	// (0x00013ae5) list_double_heading_pane_vc_g1

0xa449,	// (0x00013af1) list_double_heading_pane_vc_g2_ParamLimits

0xa449,	// (0x00013af1) list_double_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018ec2) list_double_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018ec2) list_double_heading_pane_vc_g

0xc533,	// (0x00015bdb) list_double_heading_pane_vc_t1_ParamLimits

0xc533,	// (0x00015bdb) list_double_heading_pane_vc_t1

0xa50f,	// (0x00013bb7) list_double_heading_pane_vc_t2_ParamLimits

0xa50f,	// (0x00013bb7) list_double_heading_pane_vc_t2

0x0001,

0xfa9c,	// (0x00019144) list_double_heading_pane_vc_t_ParamLimits

0xfa9c,	// (0x00019144) list_double_heading_pane_vc_t

0xa431,	// (0x00013ad9) list_double_graphic_pane_vc_g1_ParamLimits

0xa431,	// (0x00013ad9) list_double_graphic_pane_vc_g1

0xc547,	// (0x00015bef) list_double_graphic_pane_vc_g2_ParamLimits

0xc547,	// (0x00015bef) list_double_graphic_pane_vc_g2

0xc556,	// (0x00015bfe) list_double_graphic_pane_vc_g3_ParamLimits

0xc556,	// (0x00015bfe) list_double_graphic_pane_vc_g3

0x0002,

0xfaa1,	// (0x00019149) list_double_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x00019149) list_double_graphic_pane_vc_g

0xc562,	// (0x00015c0a) list_double_graphic_pane_vc_t1_ParamLimits

0xc562,	// (0x00015c0a) list_double_graphic_pane_vc_t1

0xc4a3,	// (0x00015b4b) list_double_graphic_pane_vc_t2_ParamLimits

0xc4a3,	// (0x00015b4b) list_double_graphic_pane_vc_t2

0x0001,

0xfaa8,	// (0x00019150) list_double_graphic_pane_vc_t_ParamLimits

0xfaa8,	// (0x00019150) list_double_graphic_pane_vc_t

0x5d21,	// (0x0000f3c9) aid_size_cell_fastswap

0x5d29,	// (0x0000f3d1) aid_size_cell_touch_ParamLimits

0x5d29,	// (0x0000f3d1) aid_size_cell_touch

0x5f8e,	// (0x0000f636) popup_fast_swap_wide_window_ParamLimits

0x5f8e,	// (0x0000f636) popup_fast_swap_wide_window

0x6098,	// (0x0000f740) touch_pane_ParamLimits

0x6098,	// (0x0000f740) touch_pane

0x8735,	// (0x00011ddd) button_value_adjust_pane_cp2

0x873d,	// (0x00011de5) button_value_adjust_pane_cp4

0x875f,	// (0x00011e07) form_field_data_pane_cp2

0x8780,	// (0x00011e28) form_field_data_wide_pane_cp2

0x8e0c,	// (0x000124b4) bg_scroll_pane_ParamLimits

0x6328,	// (0x0000f9d0) scroll_handle_pane_ParamLimits

0x633c,	// (0x0000f9e4) scroll_sc2_down_pane_ParamLimits

0x633c,	// (0x0000f9e4) scroll_sc2_down_pane

0x8e3d,	// (0x000124e5) scroll_sc2_up_pane_ParamLimits

0x8e3d,	// (0x000124e5) scroll_sc2_up_pane

0xc975,	// (0x0001601d) grid_wheel_folder_pane_g1_ParamLimits

0xc975,	// (0x0001601d) grid_wheel_folder_pane_g1

0x6501,	// (0x0000fba9) clock_nsta_pane_cp2_ParamLimits

0x6501,	// (0x0000fba9) clock_nsta_pane_cp2

0x966d,	// (0x00012d15) listscroll_midp_pane_ParamLimits

0x9679,	// (0x00012d21) midp_canvas_pane

0x9963,	// (0x0001300b) nsta_clock_indic_pane

0x99c1,	// (0x00013069) listscroll_form_pane_vc

0x99dd,	// (0x00013085) listscroll_set_pane_vc_ParamLimits

0x99dd,	// (0x00013085) listscroll_set_pane_vc

0xa07d,	// (0x00013725) clock_nsta_pane

0xa0f2,	// (0x0001379a) indicator_nsta_pane

0xa3cb,	// (0x00013a73) bg_popup_sub_pane_cp2_ParamLimits

0xa3df,	// (0x00013a87) find_pane_cp2_ParamLimits

0xa3df,	// (0x00013a87) find_pane_cp2

0xa3f5,	// (0x00013a9d) grid_toobar_pane_ParamLimits

0xa5b5,	// (0x00013c5d) list_form_gen_pane_vc_ParamLimits

0xa5b5,	// (0x00013c5d) list_form_gen_pane_vc

0xa5cb,	// (0x00013c73) scroll_pane_cp8_vc_ParamLimits

0xa5cb,	// (0x00013c73) scroll_pane_cp8_vc

0xa647,	// (0x00013cef) data_form_wide_pane_vc_ParamLimits

0xa647,	// (0x00013cef) data_form_wide_pane_vc

0xa653,	// (0x00013cfb) form_field_data_wide_pane_vc_g1

0xa65b,	// (0x00013d03) form_field_data_wide_pane_vc_t1_ParamLimits

0xa65b,	// (0x00013d03) form_field_data_wide_pane_vc_t1

0x881b,	// (0x00011ec3) input_focus_pane_cp6_vc_ParamLimits

0x881b,	// (0x00011ec3) input_focus_pane_cp6_vc

0xa99d,	// (0x00014045) list_midp_pane_ParamLimits

0xa9a9,	// (0x00014051) scroll_pane_cp16_ParamLimits

0xa9a9,	// (0x00014051) scroll_pane_cp16

0xa9e9,	// (0x00014091) button_value_adjust_pane_ParamLimits

0xa9e9,	// (0x00014091) button_value_adjust_pane

0xb97b,	// (0x00015023) button_value_adjust_pane_cp6_ParamLimits

0xb97b,	// (0x00015023) button_value_adjust_pane_cp6

0xbaa5,	// (0x0001514d) settings_code_pane_cp_ParamLimits

0xbaa5,	// (0x0001514d) settings_code_pane_cp

0x794a,	// (0x00010ff2) cell_touch_pane_g1

0x794a,	// (0x00010ff2) cell_touch_pane_g2

0x0001,

0xf742,	// (0x00018dea) cell_touch_pane_g

0xc113,	// (0x000157bb) cell_touch_pane_cp_ParamLimits

0xc113,	// (0x000157bb) cell_touch_pane_cp

0xc123,	// (0x000157cb) cell_touch_pane_ParamLimits

0xc123,	// (0x000157cb) cell_touch_pane

0x794a,	// (0x00010ff2) scroll_sc2_down_pane_g1

0x794a,	// (0x00010ff2) scroll_sc2_up_pane_g1

0x7954,	// (0x00010ffc) bg_set_opt_pane_cp4_vc

0xc155,	// (0x000157fd) list_set_graphic_pane_vc_g1_ParamLimits

0xc155,	// (0x000157fd) list_set_graphic_pane_vc_g1

0xc161,	// (0x00015809) list_set_graphic_pane_vc_g2_ParamLimits

0xc161,	// (0x00015809) list_set_graphic_pane_vc_g2

0x0001,

0xfa33,	// (0x000190db) list_set_graphic_pane_vc_g_ParamLimits

0xfa33,	// (0x000190db) list_set_graphic_pane_vc_g

0xc16d,	// (0x00015815) text_primary_small_cp13_vc_ParamLimits

0xc16d,	// (0x00015815) text_primary_small_cp13_vc

0xc185,	// (0x0001582d) list_set_graphic_pane_vc_ParamLimits

0xc185,	// (0x0001582d) list_set_graphic_pane_vc

0x7954,	// (0x00010ffc) input_focus_pane_cp2_vc

0x794a,	// (0x00010ff2) setting_code_pane_vc_g1

0xc199,	// (0x00015841) setting_code_pane_vc_t1

0xc1a7,	// (0x0001584f) set_text_pane_vc_t1_ParamLimits

0xc1a7,	// (0x0001584f) set_text_pane_vc_t1

0x7954,	// (0x00010ffc) input_focus_pane_cp1_vc

0xc1c2,	// (0x0001586a) list_set_text_pane_vc

0x794a,	// (0x00010ff2) setting_text_pane_vc_g1

0x7954,	// (0x00010ffc) bg_set_opt_pane_cp2_vc

0xc1cc,	// (0x00015874) setting_slider_graphic_pane_vc_g1

0xc1d4,	// (0x0001587c) setting_slider_graphic_pane_vc_t1

0xc1e2,	// (0x0001588a) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x000190e0) setting_slider_graphic_pane_vc_t

0xc1f0,	// (0x00015898) slider_set_pane_cp_vc

0xc1f8,	// (0x000158a0) slider_set_pane_vc_g1

0xc201,	// (0x000158a9) slider_set_pane_vc_g2

0x0006,

0xfa3d,	// (0x000190e5) slider_set_pane_vc_g

0x8953,	// (0x00011ffb) set_opt_bg_pane_g1_copy1

0x895b,	// (0x00012003) set_opt_bg_pane_g2_copy1

0xc22d,	// (0x000158d5) set_opt_bg_pane_g3_copy1

0x896b,	// (0x00012013) set_opt_bg_pane_g4_copy1

0x8973,	// (0x0001201b) set_opt_bg_pane_g5_copy1

0x897b,	// (0x00012023) set_opt_bg_pane_g6_copy1

0xc237,	// (0x000158df) set_opt_bg_pane_g7_copy1

0xc23f,	// (0x000158e7) set_opt_bg_pane_g8_copy1

0xc249,	// (0x000158f1) set_opt_bg_pane_g9_copy1

0x7954,	// (0x00010ffc) bg_set_opt_pane_cp_vc

0xc253,	// (0x000158fb) setting_slider_pane_vc_t1

0xc1d4,	// (0x0001587c) setting_slider_pane_vc_t2

0xc1e2,	// (0x0001588a) setting_slider_pane_vc_t3

0x0002,

0xfa4c,	// (0x000190f4) setting_slider_pane_vc_t

0xc1f0,	// (0x00015898) slider_set_pane_vc

0x690e,	// (0x0000ffb6) volume_set_pane_vc_g1

0x6917,	// (0x0000ffbf) volume_set_pane_vc_g2

0x6920,	// (0x0000ffc8) volume_set_pane_vc_g3

0x6929,	// (0x0000ffd1) volume_set_pane_vc_g4

0x6932,	// (0x0000ffda) volume_set_pane_vc_g5

0x693b,	// (0x0000ffe3) volume_set_pane_vc_g6

0x6944,	// (0x0000ffec) volume_set_pane_vc_g7

0x694d,	// (0x0000fff5) volume_set_pane_vc_g8

0x6956,	// (0x0000fffe) volume_set_pane_vc_g9

0x695f,	// (0x00010007) volume_set_pane_vc_g10

0x0009,

0xf8ea,	// (0x00018f92) volume_set_pane_vc_g

0xc262,	// (0x0001590a) volume_set_pane_vc

0xc26a,	// (0x00015912) button_value_adjust_pane_cp1_vc

0xc274,	// (0x0001591c) list_highlight_pane_cp2_vc

0xc27d,	// (0x00015925) list_set_pane_vc_ParamLimits

0xc27d,	// (0x00015925) list_set_pane_vc

0xc2e7,	// (0x0001598f) main_pane_set_vc_t1_ParamLimits

0xc2e7,	// (0x0001598f) main_pane_set_vc_t1

0xc2fc,	// (0x000159a4) main_pane_set_vc_t2_ParamLimits

0xc2fc,	// (0x000159a4) main_pane_set_vc_t2

0xc30e,	// (0x000159b6) main_pane_set_vc_t3_ParamLimits

0xc30e,	// (0x000159b6) main_pane_set_vc_t3

0xc322,	// (0x000159ca) main_pane_set_vc_t4_ParamLimits

0xc322,	// (0x000159ca) main_pane_set_vc_t4

0x0003,

0xfa53,	// (0x000190fb) main_pane_set_vc_t_ParamLimits

0xfa53,	// (0x000190fb) main_pane_set_vc_t

0xc336,	// (0x000159de) setting_code_pane_vc_ParamLimits

0xc336,	// (0x000159de) setting_code_pane_vc

0xc347,	// (0x000159ef) setting_slider_graphic_pane_vc

0xc347,	// (0x000159ef) setting_slider_pane_vc

0xc347,	// (0x000159ef) setting_text_pane_vc

0xc347,	// (0x000159ef) setting_volume_pane_vc

0xc351,	// (0x000159f9) scroll_pane_cp121_vc

0x8723,	// (0x00011dcb) set_content_pane_vc

0xc574,	// (0x00015c1c) button_value_adjust_pane_g1

0xc57d,	// (0x00015c25) button_value_adjust_pane_g2

0x0001,

0xfaad,	// (0x00019155) button_value_adjust_pane_g

0xc586,	// (0x00015c2e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc586,	// (0x00015c2e) form_field_slider_wide_pane_vc_t1

0xc59a,	// (0x00015c42) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc59a,	// (0x00015c42) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab2,	// (0x0001915a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab2,	// (0x0001915a) form_field_slider_wide_pane_vc_t

0x7cc9,	// (0x00011371) input_focus_pane_cp10_vc_ParamLimits

0x7cc9,	// (0x00011371) input_focus_pane_cp10_vc

0xc5ac,	// (0x00015c54) slider_cont_pane_cp1_vc_ParamLimits

0xc5ac,	// (0x00015c54) slider_cont_pane_cp1_vc

0xc1f8,	// (0x000158a0) slider_form_pane_g1_cp2

0xc201,	// (0x000158a9) slider_form_pane_g2_cp2

0xc5c5,	// (0x00015c6d) form_field_slider_pane_vc_t3

0xc5d3,	// (0x00015c7b) form_field_slider_pane_vc_t4

0xc5e1,	// (0x00015c89) slider_form_pane_vc_ParamLimits

0xc5e1,	// (0x00015c89) slider_form_pane_vc

0xc5ee,	// (0x00015c96) form_field_slider_pane_vc_t1_ParamLimits

0xc5ee,	// (0x00015c96) form_field_slider_pane_vc_t1

0xc59a,	// (0x00015c42) form_field_slider_pane_vc_t2_ParamLimits

0xc59a,	// (0x00015c42) form_field_slider_pane_vc_t2

0x0001,

0xfac2,	// (0x0001916a) form_field_slider_pane_vc_t_ParamLimits

0xfac2,	// (0x0001916a) form_field_slider_pane_vc_t

0x7cc9,	// (0x00011371) input_focus_pane_cp9_vc_ParamLimits

0x7cc9,	// (0x00011371) input_focus_pane_cp9_vc

0xc60a,	// (0x00015cb2) slider_cont_pane_vc_ParamLimits

0xc60a,	// (0x00015cb2) slider_cont_pane_vc

0xc61c,	// (0x00015cc4) list_form_graphic_pane_cp_vc_ParamLimits

0xc61c,	// (0x00015cc4) list_form_graphic_pane_cp_vc

0xa653,	// (0x00013cfb) form_field_popup_wide_pane_vc_g1

0xc631,	// (0x00015cd9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xc631,	// (0x00015cd9) form_field_popup_wide_pane_vc_t1

0x881b,	// (0x00011ec3) input_focus_pane_cp8_vc_ParamLimits

0x881b,	// (0x00011ec3) input_focus_pane_cp8_vc

0xc648,	// (0x00015cf0) list_form_wide_pane_vc_ParamLimits

0xc648,	// (0x00015cf0) list_form_wide_pane_vc

0xc654,	// (0x00015cfc) list_form_graphic_pane_vc_g1

0xc65c,	// (0x00015d04) list_form_graphic_pane_vc_t1_ParamLimits

0xc65c,	// (0x00015d04) list_form_graphic_pane_vc_t1

0x7a34,	// (0x000110dc) list_highlight_pane_cp5_vc_ParamLimits

0x7a34,	// (0x000110dc) list_highlight_pane_cp5_vc

0xc678,	// (0x00015d20) list_form_graphic_pane_vc_ParamLimits

0xc678,	// (0x00015d20) list_form_graphic_pane_vc

0xa653,	// (0x00013cfb) form_field_popup_pane_vc_g1

0xc68e,	// (0x00015d36) form_field_popup_pane_vc_t1_ParamLimits

0xc68e,	// (0x00015d36) form_field_popup_pane_vc_t1

0x881b,	// (0x00011ec3) input_focus_pane_cp7_vc_ParamLimits

0x881b,	// (0x00011ec3) input_focus_pane_cp7_vc

0xc6a5,	// (0x00015d4d) list_form_pane_vc_ParamLimits

0xc6a5,	// (0x00015d4d) list_form_pane_vc

0xc6b1,	// (0x00015d59) data_form_pane_vc_t1_ParamLimits

0xc6b1,	// (0x00015d59) data_form_pane_vc_t1

0x8953,	// (0x00011ffb) input_focus_pane_vc_g1

0x895b,	// (0x00012003) input_focus_pane_vc_g2

0x8963,	// (0x0001200b) input_focus_pane_vc_g3

0x896b,	// (0x00012013) input_focus_pane_vc_g4

0x8973,	// (0x0001201b) input_focus_pane_vc_g5

0x897b,	// (0x00012023) input_focus_pane_vc_g6

0x8983,	// (0x0001202b) input_focus_pane_vc_g7

0x898b,	// (0x00012033) input_focus_pane_vc_g8

0x8993,	// (0x0001203b) input_focus_pane_vc_g9

0x794a,	// (0x00010ff2) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x00018d73) input_focus_pane_vc_g

0xa647,	// (0x00013cef) data_form_pane_vc_ParamLimits

0xa647,	// (0x00013cef) data_form_pane_vc

0xa653,	// (0x00013cfb) form_field_data_pane_vc_g1

0xc6cc,	// (0x00015d74) form_field_data_pane_vc_t1_ParamLimits

0xc6cc,	// (0x00015d74) form_field_data_pane_vc_t1

0x881b,	// (0x00011ec3) input_focus_pane_vc_ParamLimits

0x881b,	// (0x00011ec3) input_focus_pane_vc

0xc6e6,	// (0x00015d8e) button_value_adjust_pane_cp3_vc

0xc6ee,	// (0x00015d96) button_value_adjust_pane_cp5_vc

0xc6f6,	// (0x00015d9e) form_field_data_pane_vc_ParamLimits

0xc6f6,	// (0x00015d9e) form_field_data_pane_vc

0xc70d,	// (0x00015db5) form_field_data_pane_vc_cp2

0xc715,	// (0x00015dbd) form_field_data_wide_pane_vc_ParamLimits

0xc715,	// (0x00015dbd) form_field_data_wide_pane_vc

0xc72b,	// (0x00015dd3) form_field_data_wide_pane_vc_cp2

0xc733,	// (0x00015ddb) form_field_popup_pane_vc_ParamLimits

0xc733,	// (0x00015ddb) form_field_popup_pane_vc

0xc74a,	// (0x00015df2) form_field_popup_wide_pane_vc_ParamLimits

0xc74a,	// (0x00015df2) form_field_popup_wide_pane_vc

0xc760,	// (0x00015e08) form_field_slider_pane_vc_ParamLimits

0xc760,	// (0x00015e08) form_field_slider_pane_vc

0xc773,	// (0x00015e1b) form_field_slider_wide_pane_vc_ParamLimits

0xc773,	// (0x00015e1b) form_field_slider_wide_pane_vc

0xc786,	// (0x00015e2e) grid_touch_1_pane_ParamLimits

0xc786,	// (0x00015e2e) grid_touch_1_pane

0xc792,	// (0x00015e3a) grid_touch_2_pane_ParamLimits

0xc792,	// (0x00015e3a) grid_touch_2_pane

0x992e,	// (0x00012fd6) touch_pane_g1_ParamLimits

0x992e,	// (0x00012fd6) touch_pane_g1

0xc7aa,	// (0x00015e52) cell_app_pane_cp_wide_ParamLimits

0xc7aa,	// (0x00015e52) cell_app_pane_cp_wide

0xc7bb,	// (0x00015e63) grid_popup_fast_wide_pane_ParamLimits

0xc7bb,	// (0x00015e63) grid_popup_fast_wide_pane

0xc7cf,	// (0x00015e77) scroll_pane_cp19_ParamLimits

0xc7cf,	// (0x00015e77) scroll_pane_cp19

0x7954,	// (0x00010ffc) bg_popup_window_pane_cp20

0xc7e3,	// (0x00015e8b) listscroll_popup_fast_wide_pane

0x7a34,	// (0x000110dc) grid_indicator_nsta_pane

0xc7eb,	// (0x00015e93) clock_nsta_pane_g1

0xc7f4,	// (0x00015e9c) clock_nsta_pane_t1

0xc810,	// (0x00015eb8) cell_indicator_nsta_pane_ParamLimits

0xc810,	// (0x00015eb8) cell_indicator_nsta_pane

0xc848,	// (0x00015ef0) cell_indicator_nsta_pane_g1

0xc856,	// (0x00015efe) cell_indicator_nsta_pane_g2

0x0001,

0xfacc,	// (0x00019174) cell_indicator_nsta_pane_g

0xc86c,	// (0x00015f14) clock_nsta_pane_cp

0xc874,	// (0x00015f1c) indicator_nsta_pane_cp

0xc87c,	// (0x00015f24) nsta_clock_indic_pane_g1

0x7b17,	// (0x000111bf) grid_indicator_pane

0x8f32,	// (0x000125da) scroll_pane_cp29

0x6450,	// (0x0000faf8) indicator_nsta_pane_cp2_ParamLimits

0x6450,	// (0x0000faf8) indicator_nsta_pane_cp2

0x7a34,	// (0x000110dc) main_apps_wheel_pane

0xa87e,	// (0x00013f26) form_midp_field_text_pane_ParamLimits

0xa9c9,	// (0x00014071) scroll_bar_cp050_ParamLimits

0xc8b4,	// (0x00015f5c) cell_indicator_pane_ParamLimits

0xc8b4,	// (0x00015f5c) cell_indicator_pane

0xc8cb,	// (0x00015f73) cell_indicator_pane_g1

0xc8d5,	// (0x00015f7d) grid_wheel_folder_pane_ParamLimits

0xc8d5,	// (0x00015f7d) grid_wheel_folder_pane

0xc8e9,	// (0x00015f91) list_wheel_apps_pane_ParamLimits

0xc8e9,	// (0x00015f91) list_wheel_apps_pane

0xc8fa,	// (0x00015fa2) main_apps_wheel_pane_g1_ParamLimits

0xc8fa,	// (0x00015fa2) main_apps_wheel_pane_g1

0xc90e,	// (0x00015fb6) main_apps_wheel_pane_g2_ParamLimits

0xc90e,	// (0x00015fb6) main_apps_wheel_pane_g2

0x0001,

0xfadb,	// (0x00019183) main_apps_wheel_pane_g_ParamLimits

0xfadb,	// (0x00019183) main_apps_wheel_pane_g

0xc926,	// (0x00015fce) main_apps_wheel_pane_t1_ParamLimits

0xc926,	// (0x00015fce) main_apps_wheel_pane_t1

0xc949,	// (0x00015ff1) list_wheel_apps_pane_g1

0xc951,	// (0x00015ff9) list_wheel_apps_pane_g2

0xc959,	// (0x00016001) list_wheel_apps_pane_g3

0xc961,	// (0x00016009) list_wheel_apps_pane_g4

0xc96b,	// (0x00016013) list_wheel_apps_pane_g5

0x0004,

0xfae0,	// (0x00019188) list_wheel_apps_pane_g

0x94e5,	// (0x00012b8d) navi_icon_text_pane

0x9fb0,	// (0x00013658) aid_fill_nsta

0xc98e,	// (0x00016036) navi_icon_text_pane_g1

0xc99d,	// (0x00016045) navi_icon_text_pane_t1

0x9383,	// (0x00012a2b) list_set_graphic_pane_t1_ParamLimits

0x9383,	// (0x00012a2b) list_set_graphic_pane_t1

0xb0e7,	// (0x0001478f) popup_midp_note_alarm_window_t6_ParamLimits

0xb0e7,	// (0x0001478f) popup_midp_note_alarm_window_t6

0xb0f9,	// (0x000147a1) popup_midp_note_alarm_window_t7_ParamLimits

0xb0f9,	// (0x000147a1) popup_midp_note_alarm_window_t7

0xb10b,	// (0x000147b3) popup_midp_note_alarm_window_t8_ParamLimits

0xb10b,	// (0x000147b3) popup_midp_note_alarm_window_t8

0xb11d,	// (0x000147c5) popup_midp_note_alarm_window_t9_ParamLimits

0xb11d,	// (0x000147c5) popup_midp_note_alarm_window_t9

0xb12f,	// (0x000147d7) popup_midp_note_alarm_window_t10_ParamLimits

0xb12f,	// (0x000147d7) popup_midp_note_alarm_window_t10

0xb141,	// (0x000147e9) popup_midp_note_alarm_window_t11_ParamLimits

0xb141,	// (0x000147e9) popup_midp_note_alarm_window_t11

0xb153,	// (0x000147fb) scroll_pane_cp17_ParamLimits

0xb153,	// (0x000147fb) scroll_pane_cp17

0x690e,	// (0x0000ffb6) volume_small_pane_cp_g1

0x6c03,	// (0x000102ab) volume_small_pane_cp_g2

0x6c0c,	// (0x000102b4) volume_small_pane_cp_g3

0x6c15,	// (0x000102bd) volume_small_pane_cp_g4

0x6c1e,	// (0x000102c6) volume_small_pane_cp_g5

0x6c27,	// (0x000102cf) volume_small_pane_cp_g6

0x6c30,	// (0x000102d8) volume_small_pane_cp_g7

0x6c39,	// (0x000102e1) volume_small_pane_cp_g8

0x6c42,	// (0x000102ea) volume_small_pane_cp_g9

0x6c4b,	// (0x000102f3) volume_small_pane_cp_g10

0x9740,	// (0x00012de8) midp_ticker_pane_g1_ParamLimits

0x974c,	// (0x00012df4) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x00018e3b) midp_ticker_pane_g_ParamLimits

0x9758,	// (0x00012e00) midp_ticker_pane_t1_ParamLimits

0x9fc6,	// (0x0001366e) aid_fill_nsta_2

0xa9b5,	// (0x0001405d) list_form2_midp_pane

0xbb23,	// (0x000151cb) midp_editing_number_pane_ParamLimits

0xbb32,	// (0x000151da) midp_ticker_pane_ParamLimits

0xc9b2,	// (0x0001605a) form2_midp_field_pane

0xc9d6,	// (0x0001607e) scroll_pane_cp51

0xc9f6,	// (0x0001609e) form2_midp_button_pane_ParamLimits

0xc9f6,	// (0x0001609e) form2_midp_button_pane

0xca08,	// (0x000160b0) form2_midp_content_pane_ParamLimits

0xca08,	// (0x000160b0) form2_midp_content_pane

0xca22,	// (0x000160ca) form2_midp_field_choice_group_pane

0xca2a,	// (0x000160d2) form2_midp_field_pane_g1

0xca32,	// (0x000160da) form2_midp_field_pane_g2

0xca3a,	// (0x000160e2) form2_midp_field_pane_g3

0xca42,	// (0x000160ea) form2_midp_field_pane_g4

0x0003,

0xfb05,	// (0x000191ad) form2_midp_field_pane_g

0xca4a,	// (0x000160f2) form2_midp_gauge_slider_pane

0xca52,	// (0x000160fa) form2_midp_gauge_wait_pane

0xca5a,	// (0x00016102) form2_midp_image_pane_ParamLimits

0xca5a,	// (0x00016102) form2_midp_image_pane

0xca75,	// (0x0001611d) form2_midp_label_pane_ParamLimits

0xca75,	// (0x0001611d) form2_midp_label_pane

0xca8e,	// (0x00016136) form2_midp_label_pane_cp_ParamLimits

0xca8e,	// (0x00016136) form2_midp_label_pane_cp

0xcaaf,	// (0x00016157) form2_midp_string_pane_ParamLimits

0xcaaf,	// (0x00016157) form2_midp_string_pane

0xcac1,	// (0x00016169) form2_midp_text_pane_ParamLimits

0xcac1,	// (0x00016169) form2_midp_text_pane

0xcade,	// (0x00016186) form2_midp_time_pane

0xcaee,	// (0x00016196) input_focus_pane_cp51_ParamLimits

0xcaee,	// (0x00016196) input_focus_pane_cp51

0xcb06,	// (0x000161ae) form2_midp_label_pane_t1_ParamLimits

0xcb06,	// (0x000161ae) form2_midp_label_pane_t1

0xcb47,	// (0x000161ef) form2_mdip_text_pane_t1_ParamLimits

0xcb47,	// (0x000161ef) form2_mdip_text_pane_t1

0xcb66,	// (0x0001620e) form2_midp_time_pane_t1

0xcb81,	// (0x00016229) form2_midp_gauge_slider_pane_t1

0xcb93,	// (0x0001623b) form2_midp_gauge_slider_pane_t2

0xcba5,	// (0x0001624d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0e,	// (0x000191b6) form2_midp_gauge_slider_pane_t

0xcbb7,	// (0x0001625f) form2_midp_slider_pane

0xcbc3,	// (0x0001626b) form2_midp_gauge_wait_pane_t1

0xcbd1,	// (0x00016279) form2_midp_wait_pane_ParamLimits

0xcbd1,	// (0x00016279) form2_midp_wait_pane

0xa672,	// (0x00013d1a) list_single_2graphic_pane_cp4_ParamLimits

0xa672,	// (0x00013d1a) list_single_2graphic_pane_cp4

0xcbfc,	// (0x000162a4) list_single_midp_graphic_pane_cp_ParamLimits

0xcbfc,	// (0x000162a4) list_single_midp_graphic_pane_cp

0x7954,	// (0x00010ffc) list_highlight_pane_cp20

0xcc2b,	// (0x000162d3) list_single_2graphic_pane_g1_cp4

0xcc33,	// (0x000162db) list_single_2graphic_pane_g2_cp4

0xcc3b,	// (0x000162e3) list_single_2graphic_pane_t1_cp4

0x7a34,	// (0x000110dc) list_highlight_pane_cp21

0xcc4a,	// (0x000162f2) list_single_midp_graphic_pane_g4_cp

0xcc59,	// (0x00016301) list_single_midp_graphic_pane_t1_cp

0xcc6e,	// (0x00016316) form2_mdip_string_pane_t1_ParamLimits

0xcc6e,	// (0x00016316) form2_mdip_string_pane_t1

0x7954,	// (0x00010ffc) bg_wml_button_pane_cp2

0x794a,	// (0x00010ff2) form2_midp_image_pane_g1

0x84fd,	// (0x00011ba5) list_double_large_graphic_pane_g5_ParamLimits

0x84fd,	// (0x00011ba5) list_double_large_graphic_pane_g5

0x966d,	// (0x00012d15) midp_form_pane_ParamLimits

0x7a34,	// (0x000110dc) main_apps_wheel_pane_ParamLimits

0x9d98,	// (0x00013440) popup_preview_window_ParamLimits

0x9d98,	// (0x00013440) popup_preview_window

0x9f53,	// (0x000135fb) popup_touch_info_window_ParamLimits

0x9f53,	// (0x000135fb) popup_touch_info_window

0x9f71,	// (0x00013619) popup_touch_menu_window_ParamLimits

0x9f71,	// (0x00013619) popup_touch_menu_window

0x7940,	// (0x00010fe8) bg_popup_sub_pane_cp6

0xcd67,	// (0x0001640f) list_touch_menu_pane

0xcd6f,	// (0x00016417) list_single_touch_menu_pane_ParamLimits

0xcd6f,	// (0x00016417) list_single_touch_menu_pane

0xcd86,	// (0x0001642e) list_single_touch_menu_pane_t1

0x7a34,	// (0x000110dc) bg_popup_sub_pane_cp7_ParamLimits

0x7a34,	// (0x000110dc) bg_popup_sub_pane_cp7

0xcd94,	// (0x0001643c) heading_sub_pane

0xcd9c,	// (0x00016444) list_touch_info_pane_ParamLimits

0xcd9c,	// (0x00016444) list_touch_info_pane

0xcdab,	// (0x00016453) list_single_touch_info_pane_ParamLimits

0xcdab,	// (0x00016453) list_single_touch_info_pane

0xcdbd,	// (0x00016465) list_single_touch_info_pane_t1

0xcdcb,	// (0x00016473) list_single_touch_info_pane_t2

0x0001,

0xfb1c,	// (0x000191c4) list_single_touch_info_pane_t

0x9665,	// (0x00012d0d) bg_popup_heading_pane_cp

0xcdd9,	// (0x00016481) heading_sub_pane_t1

0xa5e1,	// (0x00013c89) bg_popup_preview_window_pane_cp_ParamLimits

0xa5e1,	// (0x00013c89) bg_popup_preview_window_pane_cp

0xcd94,	// (0x0001643c) heading_preview_pane

0xcd9c,	// (0x00016444) list_preview_pane_ParamLimits

0xcd9c,	// (0x00016444) list_preview_pane

0xcde7,	// (0x0001648f) popup_preview_window_g1

0xcdab,	// (0x00016453) list_single_preview_pane_ParamLimits

0xcdab,	// (0x00016453) list_single_preview_pane

0xcdef,	// (0x00016497) list_single_preview_pane_g1

0xcdf7,	// (0x0001649f) list_single_preview_pane_t1

0xcdbd,	// (0x00016465) list_single_preview_pane_t2

0x0001,

0xfb21,	// (0x000191c9) list_single_preview_pane_t

0xce05,	// (0x000164ad) bg_popup_heading_pane_cp2_ParamLimits

0xce05,	// (0x000164ad) bg_popup_heading_pane_cp2

0xce1b,	// (0x000164c3) heading_preview_pane_g1

0xce23,	// (0x000164cb) heading_preview_pane_t1_ParamLimits

0xce23,	// (0x000164cb) heading_preview_pane_t1

0x7b3a,	// (0x000111e2) soft_indicator_pane_t1_ParamLimits

0x822d,	// (0x000118d5) scroll_pane_ParamLimits

0x8e2b,	// (0x000124d3) scroll_sc2_left_pane

0x8e34,	// (0x000124dc) scroll_sc2_right_pane

0x8e53,	// (0x000124fb) scroll_bg_pane_g1_ParamLimits

0x8e68,	// (0x00012510) scroll_bg_pane_g2_ParamLimits

0x8e80,	// (0x00012528) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x00018dca) scroll_bg_pane_g_ParamLimits

0x8e53,	// (0x000124fb) scroll_handle_pane_g1_ParamLimits

0x8ea2,	// (0x0001254a) scroll_handle_pane_g2_ParamLimits

0x8e80,	// (0x00012528) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x00018dd1) scroll_handle_pane_g_ParamLimits

0x9a1f,	// (0x000130c7) popup_choice_list_window_ParamLimits

0x9a1f,	// (0x000130c7) popup_choice_list_window

0xa3d7,	// (0x00013a7f) choice_list_pane

0xa493,	// (0x00013b3b) cell_toolbar_pane_t1

0xa4bb,	// (0x00013b63) toolbar_button_pane_ParamLimits

0xb613,	// (0x00014cbb) ai_gene_pane_1_t2_ParamLimits

0xb613,	// (0x00014cbb) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x00018fee) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x00018fee) ai_gene_pane_1_t

0xce40,	// (0x000164e8) scroll_sc2_left_pane_g1

0xce40,	// (0x000164e8) scroll_sc2_right_pane_g1

0x99ef,	// (0x00013097) bg_popup_sub_pane_cp10

0xce4a,	// (0x000164f2) list_choice_list_pane

0xce61,	// (0x00016509) list_single_choice_list_pane_ParamLimits

0xce61,	// (0x00016509) list_single_choice_list_pane

0xce75,	// (0x0001651d) list_single_choice_list_pane_g1

0xce7d,	// (0x00016525) list_single_choice_list_pane_t1_ParamLimits

0xce7d,	// (0x00016525) list_single_choice_list_pane_t1

0xce92,	// (0x0001653a) choice_list_pane_g1

0xce9a,	// (0x00016542) choice_list_pane_t1

0x7940,	// (0x00010fe8) input_focus_pane_cp11

0x8d0d,	// (0x000123b5) title_pane_stacon_g2_ParamLimits

0x8d0d,	// (0x000123b5) title_pane_stacon_g2

0x0002,

0xf708,	// (0x00018db0) title_pane_stacon_g_ParamLimits

0xf708,	// (0x00018db0) title_pane_stacon_g

0x9665,	// (0x00012d0d) cursor_press_pane

0x9ac7,	// (0x0001316f) popup_fep_hwr_window_ParamLimits

0x9ac7,	// (0x0001316f) popup_fep_hwr_window

0x9b41,	// (0x000131e9) popup_fep_vkb_window_ParamLimits

0x9b41,	// (0x000131e9) popup_fep_vkb_window

0xcea8,	// (0x00016550) cursor_press_pane_g1

0x0002,

0xfb4a,	// (0x000191f2) fep_vkb_side_pane_g_ParamLimits

0x6c8d,	// (0x00010335) fep_hwr_candidate_pane_ParamLimits

0x6c8d,	// (0x00010335) fep_hwr_candidate_pane

0x6cb7,	// (0x0001035f) fep_hwr_side_pane_ParamLimits

0x6cb7,	// (0x0001035f) fep_hwr_side_pane

0x6cd7,	// (0x0001037f) fep_hwr_top_pane_ParamLimits

0x6cd7,	// (0x0001037f) fep_hwr_top_pane

0x6cef,	// (0x00010397) fep_hwr_write_pane_ParamLimits

0x6cef,	// (0x00010397) fep_hwr_write_pane

0xfb4a,	// (0x000191f2) fep_vkb_side_pane_g

0xcebe,	// (0x00016566) fep_hwr_top_pane_g1

0xced0,	// (0x00016578) fep_hwr_top_pane_g2

0x6d29,	// (0x000103d1) fep_hwr_top_pane_g3

0x0002,

0xfb26,	// (0x000191ce) fep_hwr_top_pane_g

0x6d3e,	// (0x000103e6) fep_hwr_top_text_pane

0x8ff9,	// (0x000126a1) fep_hwr_top_text_pane_g1

0xcf06,	// (0x000165ae) fep_hwr_top_text_pane_t1

0x6e34,	// (0x000104dc) fep_hwr_candidate_pane_g1

0xd159,	// (0x00016801) fep_vkb_keypad_pane_g3_ParamLimits

0xd159,	// (0x00016801) fep_vkb_keypad_pane_g3

0xd181,	// (0x00016829) fep_vkb_keypad_pane_g4_ParamLimits

0xd181,	// (0x00016829) fep_vkb_keypad_pane_g4

0xd1f0,	// (0x00016898) fep_vkb_bottom_pane_g2_ParamLimits

0xd1f0,	// (0x00016898) fep_vkb_bottom_pane_g2

0x0001,

0xfb51,	// (0x000191f9) fep_vkb_bottom_pane_g_ParamLimits

0xfb51,	// (0x000191f9) fep_vkb_bottom_pane_g

0xce40,	// (0x000164e8) cell_vkb_side_pane_g2

0x0001,

0xfb5b,	// (0x00019203) cell_vkb_side_pane_g

0xd27b,	// (0x00016923) cell_vkb_side_pane_t1

0xd289,	// (0x00016931) cell_vkb_side_pane_t1_copy1

0xce40,	// (0x000164e8) bg_fep_vkb_candidate_pane_g2

0xd3b5,	// (0x00016a5d) cell_vkb_candidate_pane_ParamLimits

0xcf14,	// (0x000165bc) aid_size_cell_vkb_ParamLimits

0xcf14,	// (0x000165bc) aid_size_cell_vkb

0xd3b5,	// (0x00016a5d) cell_vkb_candidate_pane

0x6e5b,	// (0x00010503) bg_popup_fep_shadow_pane_g1

0xcfa2,	// (0x0001664a) fep_vkb_bottom_pane_ParamLimits

0xcfa2,	// (0x0001664a) fep_vkb_bottom_pane

0xcfd8,	// (0x00016680) fep_vkb_candidate_pane_ParamLimits

0xcfd8,	// (0x00016680) fep_vkb_candidate_pane

0xcff4,	// (0x0001669c) fep_vkb_keypad_pane_ParamLimits

0xcff4,	// (0x0001669c) fep_vkb_keypad_pane

0xd03a,	// (0x000166e2) fep_vkb_side_pane_ParamLimits

0xd03a,	// (0x000166e2) fep_vkb_side_pane

0xd076,	// (0x0001671e) fep_vkb_top_pane_ParamLimits

0xd076,	// (0x0001671e) fep_vkb_top_pane

0xd0b2,	// (0x0001675a) fep_vkb_top_pane_g1_ParamLimits

0xd0b2,	// (0x0001675a) fep_vkb_top_pane_g1

0xd0c1,	// (0x00016769) fep_vkb_top_pane_g2_ParamLimits

0xd0c1,	// (0x00016769) fep_vkb_top_pane_g2

0xd0d0,	// (0x00016778) fep_vkb_top_pane_g3_ParamLimits

0xd0d0,	// (0x00016778) fep_vkb_top_pane_g3

0x0003,

0xfb41,	// (0x000191e9) fep_vkb_top_pane_g_ParamLimits

0xfb41,	// (0x000191e9) fep_vkb_top_pane_g

0xd0ee,	// (0x00016796) fep_vkb_top_text_pane_ParamLimits

0xd0ee,	// (0x00016796) fep_vkb_top_text_pane

0xd0ff,	// (0x000167a7) fep_vkb_side_pane_g1_ParamLimits

0xd0ff,	// (0x000167a7) fep_vkb_side_pane_g1

0xd148,	// (0x000167f0) grid_vkb_side_pane_ParamLimits

0xd148,	// (0x000167f0) grid_vkb_side_pane

0x6e63,	// (0x0001050b) bg_popup_fep_shadow_pane_g2

0x6e6c,	// (0x00010514) bg_popup_fep_shadow_pane_g3

0x6e74,	// (0x0001051c) bg_popup_fep_shadow_pane_g4

0x6e7d,	// (0x00010525) bg_popup_fep_shadow_pane_g5

0x6e87,	// (0x0001052f) bg_popup_fep_shadow_pane_g6

0x6e8f,	// (0x00010537) bg_popup_fep_shadow_pane_g7

0x896b,	// (0x00012013) bg_popup_fep_shadow_pane_g8

0xd19f,	// (0x00016847) grid_vkb_keypad_number_pane_ParamLimits

0xd19f,	// (0x00016847) grid_vkb_keypad_number_pane

0xd1af,	// (0x00016857) grid_vkb_keypad_pane_ParamLimits

0xd1af,	// (0x00016857) grid_vkb_keypad_pane

0xd1d5,	// (0x0001687d) fep_vkb_bottom_pane_g1_ParamLimits

0xd1d5,	// (0x0001687d) fep_vkb_bottom_pane_g1

0xd1fe,	// (0x000168a6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd1fe,	// (0x000168a6) grid_vkb_keypad_bottom_left_pane

0xd213,	// (0x000168bb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd213,	// (0x000168bb) grid_vkb_keypad_bottom_right_pane

0xd228,	// (0x000168d0) fep_vkb_top_text_pane_g1

0xd243,	// (0x000168eb) fep_vkb_top_text_pane_t1

0xd258,	// (0x00016900) cell_vkb_side_pane_ParamLimits

0xd258,	// (0x00016900) cell_vkb_side_pane

0xce40,	// (0x000164e8) cell_vkb_side_pane_g1

0xd297,	// (0x0001693f) cell_vkb_keypad_pane_ParamLimits

0xd297,	// (0x0001693f) cell_vkb_keypad_pane

0xd30c,	// (0x000169b4) cell_vkb_keypad_pane_g1

0x0008,

0xfb6e,	// (0x00019216) bg_popup_fep_shadow_pane_g

0x6ea1,	// (0x00010549) cell_hwr_side_pane_g1

0x6ea1,	// (0x00010549) cell_hwr_side_pane_g2

0xd316,	// (0x000169be) cell_vkb_keypad_pane_t1

0xd324,	// (0x000169cc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd324,	// (0x000169cc) cell_vkb_keypad_bottom_left_pane

0xd341,	// (0x000169e9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd341,	// (0x000169e9) cell_vkb_keypad_bottom_right_pane

0xce40,	// (0x000164e8) cell_vkb_keypad_bottom_left_pane_g1

0xce40,	// (0x000164e8) cell_vkb_keypad_bottom_right_pane_g1

0xd37a,	// (0x00016a22) cell_vkb_keypad_number_pane_ParamLimits

0xd37a,	// (0x00016a22) cell_vkb_keypad_number_pane

0xd399,	// (0x00016a41) cell_vkb_keypad_number_pane_g1

0xd3a3,	// (0x00016a4b) cell_vkb_keypad_number_pane_g2

0xd3ac,	// (0x00016a54) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb60,	// (0x00019208) cell_vkb_keypad_number_pane_g

0xd316,	// (0x000169be) cell_vkb_keypad_number_pane_t1

0xd3d0,	// (0x00016a78) fep_vkb_candidate_pane_g1

0x0001,

0xfb81,	// (0x00019229) cell_hwr_side_pane_g

0xd3e9,	// (0x00016a91) cell_hwr_side_pane_t1

0x6eab,	// (0x00010553) cell_hwr_side_pane_t1_copy1

0x6eb9,	// (0x00010561) cell_hwr_candidate_pane_g1

0x6ee8,	// (0x00010590) cell_hwr_candidate_pane_t1

0xce40,	// (0x000164e8) cell_vkb_candidate_pane_g2

0xd42d,	// (0x00016ad5) cell_vkb_candidate_pane_t1

0x6c54,	// (0x000102fc) bg_popup_fep_shadow_pane_ParamLimits

0x6c54,	// (0x000102fc) bg_popup_fep_shadow_pane

0x6d09,	// (0x000103b1) bg_fep_hwr_top_pane_g4

0xcee2,	// (0x0001658a) bg_hwr_side_pane_g1_ParamLimits

0xcee2,	// (0x0001658a) bg_hwr_side_pane_g1

0x6d7a,	// (0x00010422) cell_hwr_side_pane_ParamLimits

0x6d7a,	// (0x00010422) cell_hwr_side_pane

0x6db5,	// (0x0001045d) fep_hwr_write_pane_g1_ParamLimits

0x6db5,	// (0x0001045d) fep_hwr_write_pane_g1

0x6dc2,	// (0x0001046a) fep_hwr_write_pane_g2_ParamLimits

0x6dc2,	// (0x0001046a) fep_hwr_write_pane_g2

0x6dcf,	// (0x00010477) fep_hwr_write_pane_g3_ParamLimits

0x6dcf,	// (0x00010477) fep_hwr_write_pane_g3

0x6ddd,	// (0x00010485) fep_hwr_write_pane_g4_ParamLimits

0x6ddd,	// (0x00010485) fep_hwr_write_pane_g4

0x0005,

0xfb2d,	// (0x000191d5) fep_hwr_write_pane_g_ParamLimits

0xfb2d,	// (0x000191d5) fep_hwr_write_pane_g

0x6d09,	// (0x000103b1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6d09,	// (0x000103b1) bg_fep_hwr_candidate_pane_g2

0x6df2,	// (0x0001049a) cell_hwr_candidate_pane_ParamLimits

0x6df2,	// (0x0001049a) cell_hwr_candidate_pane

0x6e34,	// (0x000104dc) fep_hwr_candidate_pane_g1_ParamLimits

0xcf42,	// (0x000165ea) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xcf42,	// (0x000165ea) bg_popup_fep_shadow_pane_cp2

0xd0e0,	// (0x00016788) fep_vkb_top_pane_g4_ParamLimits

0xd0e0,	// (0x00016788) fep_vkb_top_pane_g4

0xd126,	// (0x000167ce) fep_vkb_side_pane_g2_ParamLimits

0xd126,	// (0x000167ce) fep_vkb_side_pane_g2

0x863d,	// (0x00011ce5) list_setting_pane_t4_ParamLimits

0x863d,	// (0x00011ce5) list_setting_pane_t4

0x86b7,	// (0x00011d5f) list_setting_number_pane_t5_ParamLimits

0x86b7,	// (0x00011d5f) list_setting_number_pane_t5

0x903b,	// (0x000126e3) list_double_heading_pane_cp2_ParamLimits

0x903b,	// (0x000126e3) list_double_heading_pane_cp2

0x8841,	// (0x00011ee9) list_double_heading_pane_g1_cp2_ParamLimits

0x8841,	// (0x00011ee9) list_double_heading_pane_g1_cp2

0x884d,	// (0x00011ef5) list_double_heading_pane_g2_cp2_ParamLimits

0x884d,	// (0x00011ef5) list_double_heading_pane_g2_cp2

0xd43b,	// (0x00016ae3) list_double_heading_pane_t1_cp2_ParamLimits

0xd43b,	// (0x00016ae3) list_double_heading_pane_t1_cp2

0xd451,	// (0x00016af9) list_double_heading_pane_t2_cp2_ParamLimits

0xd451,	// (0x00016af9) list_double_heading_pane_t2_cp2

0x7928,	// (0x00010fd0) aid_value_unit2

0x5fe8,	// (0x0000f690) popup_preview_fixed_window

0x7cd7,	// (0x0001137f) bg_popup_preview_window_pane_cp02

0xd463,	// (0x00016b0b) list_preview_fixed_pane

0xd4a9,	// (0x00016b51) list_empty_pane_fp_ParamLimits

0xd4a9,	// (0x00016b51) list_empty_pane_fp

0xd4a9,	// (0x00016b51) list_single_cale_day_pane_fp_ParamLimits

0xd4a9,	// (0x00016b51) list_single_cale_day_pane_fp

0xd4a9,	// (0x00016b51) list_single_graphic_heading_pane_fp_ParamLimits

0xd4a9,	// (0x00016b51) list_single_graphic_heading_pane_fp

0xd4a9,	// (0x00016b51) list_single_graphic_pane_fp_ParamLimits

0xd4a9,	// (0x00016b51) list_single_graphic_pane_fp

0xd4a9,	// (0x00016b51) list_single_heading_pane_fp_ParamLimits

0xd4a9,	// (0x00016b51) list_single_heading_pane_fp

0xd4a9,	// (0x00016b51) list_single_pane_fp_ParamLimits

0xd4a9,	// (0x00016b51) list_single_pane_fp

0xd4be,	// (0x00016b66) list_single_pane_fp_g1_ParamLimits

0xd4be,	// (0x00016b66) list_single_pane_fp_g1

0x847e,	// (0x00011b26) list_single_pane_fp_g2_ParamLimits

0x847e,	// (0x00011b26) list_single_pane_fp_g2

0xd4ca,	// (0x00016b72) list_single_pane_fp_g3_ParamLimits

0xd4ca,	// (0x00016b72) list_single_pane_fp_g3

0xd4de,	// (0x00016b86) list_single_pane_fp_g4_ParamLimits

0xd4de,	// (0x00016b86) list_single_pane_fp_g4

0x0003,

0xfb94,	// (0x0001923c) list_single_pane_fp_g_ParamLimits

0xfb94,	// (0x0001923c) list_single_pane_fp_g

0xd4ea,	// (0x00016b92) list_single_pane_fp_t1_ParamLimits

0xd4ea,	// (0x00016b92) list_single_pane_fp_t1

0xd501,	// (0x00016ba9) list_single_graphic_pane_fp_g1_ParamLimits

0xd501,	// (0x00016ba9) list_single_graphic_pane_fp_g1

0xd4be,	// (0x00016b66) list_single_graphic_pane_fp_g2_ParamLimits

0xd4be,	// (0x00016b66) list_single_graphic_pane_fp_g2

0x847e,	// (0x00011b26) list_single_graphic_pane_fp_g3_ParamLimits

0x847e,	// (0x00011b26) list_single_graphic_pane_fp_g3

0xd4ca,	// (0x00016b72) list_single_graphic_pane_fp_g4_ParamLimits

0xd4ca,	// (0x00016b72) list_single_graphic_pane_fp_g4

0xd4de,	// (0x00016b86) list_single_graphic_pane_fp_g5_ParamLimits

0xd4de,	// (0x00016b86) list_single_graphic_pane_fp_g5

0x0004,

0xfb9d,	// (0x00019245) list_single_graphic_pane_fp_g_ParamLimits

0xfb9d,	// (0x00019245) list_single_graphic_pane_fp_g

0xd50d,	// (0x00016bb5) list_single_graphic_pane_fp_t1_ParamLimits

0xd50d,	// (0x00016bb5) list_single_graphic_pane_fp_t1

0xd501,	// (0x00016ba9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd501,	// (0x00016ba9) list_single_graphic_heading_pane_fp_g1

0xd4be,	// (0x00016b66) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd4be,	// (0x00016b66) list_single_graphic_heading_pane_fp_g2

0x847e,	// (0x00011b26) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x847e,	// (0x00011b26) list_single_graphic_heading_pane_fp_g3

0xd4ca,	// (0x00016b72) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd4ca,	// (0x00016b72) list_single_graphic_heading_pane_fp_g4

0xd4de,	// (0x00016b86) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd4de,	// (0x00016b86) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x00019245) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00019245) list_single_graphic_heading_pane_fp_g

0xd523,	// (0x00016bcb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd523,	// (0x00016bcb) list_single_graphic_heading_pane_fp_t1

0xd539,	// (0x00016be1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd539,	// (0x00016be1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x00019250) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x00019250) list_single_graphic_heading_pane_fp_t

0xd54b,	// (0x00016bf3) list_single_cale_day_pane_fp_g1_ParamLimits

0xd54b,	// (0x00016bf3) list_single_cale_day_pane_fp_g1

0xd583,	// (0x00016c2b) list_single_cale_day_pane_fp_g2_ParamLimits

0xd583,	// (0x00016c2b) list_single_cale_day_pane_fp_g2

0xd58f,	// (0x00016c37) list_single_cale_day_pane_fp_g3_ParamLimits

0xd58f,	// (0x00016c37) list_single_cale_day_pane_fp_g3

0xd5b7,	// (0x00016c5f) list_single_cale_day_pane_fp_g4_ParamLimits

0xd5b7,	// (0x00016c5f) list_single_cale_day_pane_fp_g4

0xd5db,	// (0x00016c83) list_single_cale_day_pane_fp_g5_ParamLimits

0xd5db,	// (0x00016c83) list_single_cale_day_pane_fp_g5

0x0004,

0xfbad,	// (0x00019255) list_single_cale_day_pane_fp_g_ParamLimits

0xfbad,	// (0x00019255) list_single_cale_day_pane_fp_g

0xd5ff,	// (0x00016ca7) list_single_cale_day_pane_fp_t1_ParamLimits

0xd5ff,	// (0x00016ca7) list_single_cale_day_pane_fp_t1

0xd625,	// (0x00016ccd) list_single_cale_day_pane_fp_t2_ParamLimits

0xd625,	// (0x00016ccd) list_single_cale_day_pane_fp_t2

0xd63e,	// (0x00016ce6) list_single_cale_day_pane_fp_t3_ParamLimits

0xd63e,	// (0x00016ce6) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb8,	// (0x00019260) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb8,	// (0x00019260) list_single_cale_day_pane_fp_t

0xd4be,	// (0x00016b66) list_empty_pane_fp_g1_ParamLimits

0xd4be,	// (0x00016b66) list_empty_pane_fp_g1

0xd657,	// (0x00016cff) list_empty_pane_fp_t1

0xd665,	// (0x00016d0d) list_empty_pane_fp_t2

0x0001,

0xfbbf,	// (0x00019267) list_empty_pane_fp_t

0xd4be,	// (0x00016b66) list_single_heading_pane_fp_g1_ParamLimits

0xd4be,	// (0x00016b66) list_single_heading_pane_fp_g1

0x847e,	// (0x00011b26) list_single_heading_pane_fp_g2_ParamLimits

0x847e,	// (0x00011b26) list_single_heading_pane_fp_g2

0xd4ca,	// (0x00016b72) list_single_heading_pane_fp_g3_ParamLimits

0xd4ca,	// (0x00016b72) list_single_heading_pane_fp_g3

0x0002,

0xfbc4,	// (0x0001926c) list_single_heading_pane_fp_g_ParamLimits

0xfbc4,	// (0x0001926c) list_single_heading_pane_fp_g

0xd673,	// (0x00016d1b) list_single_heading_pane_fp_t1_ParamLimits

0xd673,	// (0x00016d1b) list_single_heading_pane_fp_t1

0xd685,	// (0x00016d2d) list_single_heading_pane_fp_t2_ParamLimits

0xd685,	// (0x00016d2d) list_single_heading_pane_fp_t2

0x0001,

0xfbcb,	// (0x00019273) list_single_heading_pane_fp_t_ParamLimits

0xfbcb,	// (0x00019273) list_single_heading_pane_fp_t

0x8ba4,	// (0x0001224c) aid_size_cell_fast

0x7c47,	// (0x000112ef) soft_indicator_pane_cp1_t1

0x8be1,	// (0x00012289) cell_app_pane_cp2_ParamLimits

0x8be1,	// (0x00012289) cell_app_pane_cp2

0x6c76,	// (0x0001031e) fep_hwr_candidate_drop_down_list_pane

0x6e4e,	// (0x000104f6) fep_hwr_candidate_pane_g3_ParamLimits

0x6e4e,	// (0x000104f6) fep_hwr_candidate_pane_g3

0x5140,	// (0x0000e7e8) fep_hwr_candidate_pane_g4_ParamLimits

0x5140,	// (0x0000e7e8) fep_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x000191e2) fep_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x000191e2) fep_hwr_candidate_pane_g

0xcfc7,	// (0x0001666f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcfc7,	// (0x0001666f) fep_vkb_candidate_drop_down_list_pane

0xd3d8,	// (0x00016a80) fep_vkb_candidate_pane_g3

0xd3e0,	// (0x00016a88) fep_vkb_candidate_pane_g4

0x0002,

0xfb67,	// (0x0001920f) fep_vkb_candidate_pane_g

0x6eb9,	// (0x00010561) cell_hwr_candidate_pane_g1_ParamLimits

0x6ec7,	// (0x0001056f) cell_hwr_candidate_pane_g3_ParamLimits

0x6ec7,	// (0x0001056f) cell_hwr_candidate_pane_g3

0xf49d,	// (0x00018b45) cell_hwr_candidate_pane_g4_ParamLimits

0xf49d,	// (0x00018b45) cell_hwr_candidate_pane_g4

0x0002,

0xfb86,	// (0x0001922e) cell_hwr_candidate_pane_g_ParamLimits

0xfb86,	// (0x0001922e) cell_hwr_candidate_pane_g

0xd3f7,	// (0x00016a9f) cell_vkb_candidate_pane_g3_ParamLimits

0xd3f7,	// (0x00016a9f) cell_vkb_candidate_pane_g3

0xd412,	// (0x00016aba) cell_vkb_candidate_pane_g4_ParamLimits

0xd412,	// (0x00016aba) cell_vkb_candidate_pane_g4

0xd69b,	// (0x00016d43) cell_app_pane_cp2_g1_ParamLimits

0xd69b,	// (0x00016d43) cell_app_pane_cp2_g1

0xd6b9,	// (0x00016d61) cell_app_pane_cp2_g2_ParamLimits

0xd6b9,	// (0x00016d61) cell_app_pane_cp2_g2

0x0001,

0xfbd0,	// (0x00019278) cell_app_pane_cp2_g_ParamLimits

0xfbd0,	// (0x00019278) cell_app_pane_cp2_g

0xd6c5,	// (0x00016d6d) cell_app_pane_cp2_t1_ParamLimits

0xd6c5,	// (0x00016d6d) cell_app_pane_cp2_t1

0x881b,	// (0x00011ec3) grid_highlight_pane_cp1_ParamLimits

0x881b,	// (0x00011ec3) grid_highlight_pane_cp1

0x6f06,	// (0x000105ae) cell_hwr_candidate_pane_cp1_ParamLimits

0x6f06,	// (0x000105ae) cell_hwr_candidate_pane_cp1

0x6eb9,	// (0x00010561) fep_hwr_candidate_drop_down_list_pane_g1

0x6f25,	// (0x000105cd) fep_hwr_candidate_drop_down_list_pane_g2

0x6f32,	// (0x000105da) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0001927d) fep_hwr_candidate_drop_down_list_pane_g

0x6f3f,	// (0x000105e7) fep_hwr_candidate_drop_down_list_scroll_pane

0x6f48,	// (0x000105f0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6f48,	// (0x000105f0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6f55,	// (0x000105fd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6f55,	// (0x000105fd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6f62,	// (0x0001060a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6f62,	// (0x0001060a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6f6f,	// (0x00010617) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6f6f,	// (0x00010617) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f8a,	// (0x00010632) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f8a,	// (0x00010632) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6fa5,	// (0x0001064d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6fa5,	// (0x0001064d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6fc0,	// (0x00010668) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6fc0,	// (0x00010668) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6fdb,	// (0x00010683) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6fdb,	// (0x00010683) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x00019284) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x00019284) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd733,	// (0x00016ddb) cell_vkb_candidate_pane_cp1_ParamLimits

0xd733,	// (0x00016ddb) cell_vkb_candidate_pane_cp1

0xd0e0,	// (0x00016788) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd0e0,	// (0x00016788) fep_vkb_candidate_drop_down_list_pane_g1

0xd6d7,	// (0x00016d7f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd6d7,	// (0x00016d7f) fep_vkb_candidate_drop_down_list_pane_g2

0xd6e4,	// (0x00016d8c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd6e4,	// (0x00016d8c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbed,	// (0x00019295) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbed,	// (0x00019295) fep_vkb_candidate_drop_down_list_pane_g

0xd753,	// (0x00016dfb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd753,	// (0x00016dfb) fep_vkb_candidate_drop_down_list_scroll_pane

0xd760,	// (0x00016e08) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd760,	// (0x00016e08) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd76d,	// (0x00016e15) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd76d,	// (0x00016e15) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd779,	// (0x00016e21) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd779,	// (0x00016e21) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd6f1,	// (0x00016d99) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd6f1,	// (0x00016d99) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd712,	// (0x00016dba) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd712,	// (0x00016dba) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd785,	// (0x00016e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd785,	// (0x00016e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd7a6,	// (0x00016e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd7a6,	// (0x00016e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd7c7,	// (0x00016e6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd7c7,	// (0x00016e6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf4,	// (0x0001929c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf4,	// (0x0001929c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x795e,	// (0x00011006) title_pane_g1_ParamLimits

0x796b,	// (0x00011013) title_pane_g2_ParamLimits

0xf592,	// (0x00018c3a) title_pane_g_ParamLimits

0x8fe9,	// (0x00012691) aid_call2_pane

0x8ff1,	// (0x00012699) aid_call_pane

0x8ff9,	// (0x000126a1) popup_clock_analogue_window_g1

0x8ff9,	// (0x000126a1) popup_clock_analogue_window_g2

0x6351,	// (0x0000f9f9) popup_clock_analogue_window_g3

0x635a,	// (0x0000fa02) popup_clock_analogue_window_g4

0x794a,	// (0x00010ff2) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x00018ddf) popup_clock_analogue_window_g

0x6362,	// (0x0000fa0a) popup_clock_analogue_window_t1

0x6370,	// (0x0000fa18) clock_digital_number_pane_ParamLimits

0x6370,	// (0x0000fa18) clock_digital_number_pane

0x637c,	// (0x0000fa24) clock_digital_number_pane_cp02_ParamLimits

0x637c,	// (0x0000fa24) clock_digital_number_pane_cp02

0x6388,	// (0x0000fa30) clock_digital_number_pane_cp03_ParamLimits

0x6388,	// (0x0000fa30) clock_digital_number_pane_cp03

0x6394,	// (0x0000fa3c) clock_digital_number_pane_cp04_ParamLimits

0x6394,	// (0x0000fa3c) clock_digital_number_pane_cp04

0x63a0,	// (0x0000fa48) clock_digital_separator_pane_ParamLimits

0x63a0,	// (0x0000fa48) clock_digital_separator_pane

0x63ac,	// (0x0000fa54) popup_clock_digital_window_t1_ParamLimits

0x63ac,	// (0x0000fa54) popup_clock_digital_window_t1

0x794a,	// (0x00010ff2) clock_digital_number_pane_g1

0x794a,	// (0x00010ff2) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x00018dea) clock_digital_number_pane_g

0x794a,	// (0x00010ff2) clock_digital_separator_pane_g1

0x794a,	// (0x00010ff2) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x00018dea) clock_digital_separator_pane_g

0x9fb0,	// (0x00013658) aid_fill_nsta_ParamLimits

0xa0f2,	// (0x0001379a) indicator_nsta_pane_ParamLimits

0xa264,	// (0x0001390c) popup_clock_analogue_window

0xa264,	// (0x0001390c) popup_clock_digital_window

0x7a34,	// (0x000110dc) grid_indicator_nsta_pane_ParamLimits

0xc802,	// (0x00015eaa) clock_nsta_pane_t2

0x0001,

0xfac7,	// (0x0001916f) clock_nsta_pane_t

0x6315,	// (0x0000f9bd) aid_size_max_handle

0x631f,	// (0x0000f9c7) aid_size_min_handle

0x9665,	// (0x00012d0d) editor_scroll_pane

0xd7e2,	// (0x00016e8a) ex_editor_pane

0x8b12,	// (0x000121ba) scroll_pane_cp13

0x8259,	// (0x00011901) scroll_pane_cp14

0x9023,	// (0x000126cb) scroll_pane_cp36

0x904f,	// (0x000126f7) list_single_graphic_hl_pane_cp2_ParamLimits

0x904f,	// (0x000126f7) list_single_graphic_hl_pane_cp2

0xbbee,	// (0x00015296) list_single_graphic_hl_pane_ParamLimits

0xbbee,	// (0x00015296) list_single_graphic_hl_pane

0xd7ea,	// (0x00016e92) aid_size_min_hl_cp1

0xd7f3,	// (0x00016e9b) list_highlight_pane_cp34_ParamLimits

0xd7f3,	// (0x00016e9b) list_highlight_pane_cp34

0xd804,	// (0x00016eac) list_single_graphic_hl_pane_g1_ParamLimits

0xd804,	// (0x00016eac) list_single_graphic_hl_pane_g1

0xd811,	// (0x00016eb9) list_single_graphic_hl_pane_g2_ParamLimits

0xd811,	// (0x00016eb9) list_single_graphic_hl_pane_g2

0xd811,	// (0x00016eb9) list_single_graphic_hl_pane_g3_ParamLimits

0xd811,	// (0x00016eb9) list_single_graphic_hl_pane_g3

0xa43d,	// (0x00013ae5) list_single_graphic_hl_pane_g4_ParamLimits

0xa43d,	// (0x00013ae5) list_single_graphic_hl_pane_g4

0xd81d,	// (0x00016ec5) list_single_graphic_hl_pane_g5_ParamLimits

0xd81d,	// (0x00016ec5) list_single_graphic_hl_pane_g5

0x0004,

0xfc05,	// (0x000192ad) list_single_graphic_hl_pane_g_ParamLimits

0xfc05,	// (0x000192ad) list_single_graphic_hl_pane_g

0xd831,	// (0x00016ed9) list_single_graphic_hl_pane_t1_ParamLimits

0xd831,	// (0x00016ed9) list_single_graphic_hl_pane_t1

0xd847,	// (0x00016eef) aid_size_min_hl_cp2

0xd850,	// (0x00016ef8) list_highlight_pane_cp34_cp2_ParamLimits

0xd850,	// (0x00016ef8) list_highlight_pane_cp34_cp2

0xd804,	// (0x00016eac) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd804,	// (0x00016eac) list_single_graphic_hl_pane_g1_cp2

0xd85d,	// (0x00016f05) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd85d,	// (0x00016f05) list_single_graphic_hl_pane_g2_cp2

0xd869,	// (0x00016f11) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd869,	// (0x00016f11) list_single_graphic_hl_pane_g3_cp2

0xa43d,	// (0x00013ae5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa43d,	// (0x00013ae5) list_single_graphic_hl_pane_g4_cp2

0xd81d,	// (0x00016ec5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd81d,	// (0x00016ec5) list_single_graphic_hl_pane_g5_cp2

0x665e,	// (0x0000fd06) control_pane_g4_ParamLimits

0x665e,	// (0x0000fd06) control_pane_g4

0x99ef,	// (0x00013097) bg_popup_sub_pane_cp10_ParamLimits

0xce4a,	// (0x000164f2) list_choice_list_pane_ParamLimits

0xce59,	// (0x00016501) scroll_pane_cp23

0x7cd7,	// (0x0001137f) bg_popup_preview_window_pane_cp02_ParamLimits

0xd463,	// (0x00016b0b) list_preview_fixed_pane_ParamLimits

0xd479,	// (0x00016b21) list_preview_fixed_pane_cp_ParamLimits

0xd479,	// (0x00016b21) list_preview_fixed_pane_cp

0xd485,	// (0x00016b2d) popup_preview_fixed_window_g1_ParamLimits

0xd485,	// (0x00016b2d) popup_preview_fixed_window_g1

0xd491,	// (0x00016b39) popup_preview_fixed_window_g2_ParamLimits

0xd491,	// (0x00016b39) popup_preview_fixed_window_g2

0x0002,

0xfb8d,	// (0x00019235) popup_preview_fixed_window_g_ParamLimits

0xfb8d,	// (0x00019235) popup_preview_fixed_window_g

0x6289,	// (0x0000f931) aid_navi_side_left_pane_ParamLimits

0x629e,	// (0x0000f946) aid_navi_side_right_pane_ParamLimits

0x62b6,	// (0x0000f95e) navi_icon_pane_stacon_ParamLimits

0x62ca,	// (0x0000f972) navi_navi_pane_stacon_ParamLimits

0x62b6,	// (0x0000f95e) navi_text_pane_stacon_ParamLimits

0x7940,	// (0x00010fe8) main_text_info_pane

0xd88d,	// (0x00016f35) listscroll_text_info_pane

0xd895,	// (0x00016f3d) list_text_info_pane_ParamLimits

0xd895,	// (0x00016f3d) list_text_info_pane

0xd8a4,	// (0x00016f4c) scroll_pane_cp24_ParamLimits

0xd8a4,	// (0x00016f4c) scroll_pane_cp24

0xd8c2,	// (0x00016f6a) list_text_info_pane_t1_ParamLimits

0xd8c2,	// (0x00016f6a) list_text_info_pane_t1

0x9a39,	// (0x000130e1) popup_fast_swap2_window_ParamLimits

0x9a39,	// (0x000130e1) popup_fast_swap2_window

0xd8f3,	// (0x00016f9b) aid_size_cell_fast2

0x7940,	// (0x00010fe8) bg_popup_window_pane_cp17

0xa9e1,	// (0x00014089) heading_pane_cp2

0x7f23,	// (0x000115cb) listscroll_fast2_pane

0xd8fd,	// (0x00016fa5) grid_fast2_pane

0xd907,	// (0x00016faf) listscroll_fast2_pane_g1

0xd90f,	// (0x00016fb7) listscroll_fast2_pane_g2

0x0001,

0xfc10,	// (0x000192b8) listscroll_fast2_pane_g

0x8b12,	// (0x000121ba) scroll_pane_cp26

0xd919,	// (0x00016fc1) cell_fast2_pane_ParamLimits

0xd919,	// (0x00016fc1) cell_fast2_pane

0xd92e,	// (0x00016fd6) cell_fast2_pane_g1

0xd937,	// (0x00016fdf) cell_fast2_pane_g2

0xd940,	// (0x00016fe8) cell_fast2_pane_g3

0x0002,

0xfc15,	// (0x000192bd) cell_fast2_pane_g

0x8016,	// (0x000116be) grid_highlight_pane_cp9

0x802b,	// (0x000116d3) main_eswt_pane_ParamLimits

0x802b,	// (0x000116d3) main_eswt_pane

0xd8b9,	// (0x00016f61) list_single_text_info_pane

0xd948,	// (0x00016ff0) eswt_ctrl_button_pane

0xd948,	// (0x00016ff0) eswt_ctrl_canvas_pane

0xd950,	// (0x00016ff8) eswt_ctrl_combo_pane

0xd948,	// (0x00016ff0) eswt_ctrl_default_pane

0xd948,	// (0x00016ff0) eswt_ctrl_label_pane

0xd958,	// (0x00017000) eswt_ctrl_wait_pane

0xd960,	// (0x00017008) eswt_shell_pane

0x7940,	// (0x00010fe8) listscroll_eswt_app_pane

0xd980,	// (0x00017028) popup_eswt_tasktip_window_ParamLimits

0xd980,	// (0x00017028) popup_eswt_tasktip_window

0xa5e1,	// (0x00013c89) bg_popup_window_pane_cp18

0xd991,	// (0x00017039) eswt_control_pane_g1_ParamLimits

0xd991,	// (0x00017039) eswt_control_pane_g1

0xd99e,	// (0x00017046) eswt_control_pane_g2_ParamLimits

0xd99e,	// (0x00017046) eswt_control_pane_g2

0xd9ab,	// (0x00017053) eswt_control_pane_g3_ParamLimits

0xd9ab,	// (0x00017053) eswt_control_pane_g3

0xd9b8,	// (0x00017060) eswt_control_pane_g4_ParamLimits

0xd9b8,	// (0x00017060) eswt_control_pane_g4

0x0003,

0xfc1c,	// (0x000192c4) eswt_control_pane_g_ParamLimits

0xfc1c,	// (0x000192c4) eswt_control_pane_g

0x881b,	// (0x00011ec3) bg_button_pane_ParamLimits

0x881b,	// (0x00011ec3) bg_button_pane

0x802b,	// (0x000116d3) common_borders_pane_copy2_ParamLimits

0x802b,	// (0x000116d3) common_borders_pane_copy2

0xd9c5,	// (0x0001706d) control_button_pane_g1_ParamLimits

0xd9c5,	// (0x0001706d) control_button_pane_g1

0xd9d1,	// (0x00017079) control_button_pane_g2_ParamLimits

0xd9d1,	// (0x00017079) control_button_pane_g2

0xd9dd,	// (0x00017085) control_button_pane_g3_ParamLimits

0xd9dd,	// (0x00017085) control_button_pane_g3

0x0002,

0xfc25,	// (0x000192cd) control_button_pane_g_ParamLimits

0xfc25,	// (0x000192cd) control_button_pane_g

0xd9f1,	// (0x00017099) control_button_pane_t1

0xd9ff,	// (0x000170a7) control_button_pane_t2

0x0001,

0xfc2c,	// (0x000192d4) control_button_pane_t

0xa4c7,	// (0x00013b6f) bg_button_pane_g1

0xa4d7,	// (0x00013b7f) bg_button_pane_g2

0xa4cf,	// (0x00013b77) bg_button_pane_g3

0xa4e7,	// (0x00013b8f) bg_button_pane_g4

0xa4df,	// (0x00013b87) bg_button_pane_g5

0xa4ef,	// (0x00013b97) bg_button_pane_g6

0xa4f7,	// (0x00013b9f) bg_button_pane_g7

0xa507,	// (0x00013baf) bg_button_pane_g8

0xa4ff,	// (0x00013ba7) bg_button_pane_g9

0x0008,

0xf89a,	// (0x00018f42) bg_button_pane_g

0xce05,	// (0x000164ad) common_borders_pane_ParamLimits

0xce05,	// (0x000164ad) common_borders_pane

0xd991,	// (0x00017039) eswt_control_pane_g1_copy1_ParamLimits

0xd991,	// (0x00017039) eswt_control_pane_g1_copy1

0xd99e,	// (0x00017046) eswt_control_pane_g2_copy1_ParamLimits

0xd99e,	// (0x00017046) eswt_control_pane_g2_copy1

0xd9ab,	// (0x00017053) eswt_control_pane_g3_copy1_ParamLimits

0xd9ab,	// (0x00017053) eswt_control_pane_g3_copy1

0xd9b8,	// (0x00017060) eswt_control_pane_g4_copy1_ParamLimits

0xd9b8,	// (0x00017060) eswt_control_pane_g4_copy1

0xce40,	// (0x000164e8) bg_eswt_ctrl_canvas_pane_g1

0xce05,	// (0x000164ad) common_borders_pane_cp2_ParamLimits

0xce05,	// (0x000164ad) common_borders_pane_cp2

0xce05,	// (0x000164ad) common_borders_pane_cp3_ParamLimits

0xce05,	// (0x000164ad) common_borders_pane_cp3

0xda0d,	// (0x000170b5) separator_horizontal_pane

0xda15,	// (0x000170bd) separator_vertical_pane

0xd991,	// (0x00017039) eswt_control_pane_g1_copy2_ParamLimits

0xd991,	// (0x00017039) eswt_control_pane_g1_copy2

0xd99e,	// (0x00017046) eswt_control_pane_g2_copy2_ParamLimits

0xd99e,	// (0x00017046) eswt_control_pane_g2_copy2

0xd9ab,	// (0x00017053) eswt_control_pane_g3_copy2_ParamLimits

0xd9ab,	// (0x00017053) eswt_control_pane_g3_copy2

0xd9b8,	// (0x00017060) eswt_control_pane_g4_copy2_ParamLimits

0xd9b8,	// (0x00017060) eswt_control_pane_g4_copy2

0x7940,	// (0x00010fe8) common_borders_pane_cp4

0xda1e,	// (0x000170c6) separator_horizontal_pane_g1

0xda27,	// (0x000170cf) separator_horizontal_pane_g2

0xda30,	// (0x000170d8) separator_horizontal_pane_g3

0x0002,

0xfc31,	// (0x000192d9) separator_horizontal_pane_g

0xd991,	// (0x00017039) eswt_control_pane_g1_copy3_ParamLimits

0xd991,	// (0x00017039) eswt_control_pane_g1_copy3

0xd99e,	// (0x00017046) eswt_control_pane_g2_copy3_ParamLimits

0xd99e,	// (0x00017046) eswt_control_pane_g2_copy3

0xd9ab,	// (0x00017053) eswt_control_pane_g3_copy3_ParamLimits

0xd9ab,	// (0x00017053) eswt_control_pane_g3_copy3

0xd9b8,	// (0x00017060) eswt_control_pane_g4_copy3_ParamLimits

0xd9b8,	// (0x00017060) eswt_control_pane_g4_copy3

0x7940,	// (0x00010fe8) common_borders_pane_cp5

0xda39,	// (0x000170e1) separator_vertical_pane_g1

0xda42,	// (0x000170ea) separator_vertical_pane_g2

0xda4b,	// (0x000170f3) separator_vertical_pane_g3

0x0002,

0xfc38,	// (0x000192e0) separator_vertical_pane_g

0xd991,	// (0x00017039) eswt_control_pane_g1_copy4_ParamLimits

0xd991,	// (0x00017039) eswt_control_pane_g1_copy4

0xd99e,	// (0x00017046) eswt_control_pane_g2_copy4_ParamLimits

0xd99e,	// (0x00017046) eswt_control_pane_g2_copy4

0xd9ab,	// (0x00017053) eswt_control_pane_g3_copy4_ParamLimits

0xd9ab,	// (0x00017053) eswt_control_pane_g3_copy4

0xd9b8,	// (0x00017060) eswt_control_pane_g4_copy4_ParamLimits

0xd9b8,	// (0x00017060) eswt_control_pane_g4_copy4

0xda54,	// (0x000170fc) eswt_ctrl_combo_button_pane

0xda5c,	// (0x00017104) eswt_ctrl_input_pane

0xda64,	// (0x0001710c) popup_choice_list_window_cp70

0xda6c,	// (0x00017114) eswt_ctrl_input_pane_t1

0x7940,	// (0x00010fe8) input_focus_pane_cp70

0xce05,	// (0x000164ad) bg_button_pane_cp70_ParamLimits

0xce05,	// (0x000164ad) bg_button_pane_cp70

0xda7a,	// (0x00017122) eswt_ctrl_combo_button_pane_g1

0xda82,	// (0x0001712a) wait_bar_pane_cp70

0xa5e1,	// (0x00013c89) bg_popup_window_pane_cp70_ParamLimits

0xa5e1,	// (0x00013c89) bg_popup_window_pane_cp70

0xda8a,	// (0x00017132) popup_eswt_tasktip_window_t1

0xdaa0,	// (0x00017148) wait_bar_pane_cp71_ParamLimits

0xdaa0,	// (0x00017148) wait_bar_pane_cp71

0xdaac,	// (0x00017154) grid_eswt_app_pane

0x8e2b,	// (0x000124d3) scroll_pane_cp70

0xdab5,	// (0x0001715d) cell_eswt_app_pane_ParamLimits

0xdab5,	// (0x0001715d) cell_eswt_app_pane

0xdae5,	// (0x0001718d) cell_eswt_app_pane_g1_ParamLimits

0xdae5,	// (0x0001718d) cell_eswt_app_pane_g1

0xdb14,	// (0x000171bc) cell_eswt_app_pane_g2_ParamLimits

0xdb14,	// (0x000171bc) cell_eswt_app_pane_g2

0x0001,

0xfc3f,	// (0x000192e7) cell_eswt_app_pane_g_ParamLimits

0xfc3f,	// (0x000192e7) cell_eswt_app_pane_g

0xdb3d,	// (0x000171e5) cell_eswt_app_pane_t1_ParamLimits

0xdb3d,	// (0x000171e5) cell_eswt_app_pane_t1

0xdb6f,	// (0x00017217) grid_highlight_pane_cp70_ParamLimits

0xdb6f,	// (0x00017217) grid_highlight_pane_cp70

0x953a,	// (0x00012be2) set_content_pane_g1

0x9911,	// (0x00012fb9) status_small_volume_pane

0x6ff6,	// (0x0001069e) status_small_volume_pane_g1

0x6ffe,	// (0x000106a6) volume_small2_pane

0x7007,	// (0x000106af) volume_small2_pane_g1

0x7010,	// (0x000106b8) volume_small2_pane_g2

0x7019,	// (0x000106c1) volume_small2_pane_g3

0x7022,	// (0x000106ca) volume_small2_pane_g4

0x702b,	// (0x000106d3) volume_small2_pane_g5

0x7034,	// (0x000106dc) volume_small2_pane_g6

0x703d,	// (0x000106e5) volume_small2_pane_g7

0x7046,	// (0x000106ee) volume_small2_pane_g8

0x704f,	// (0x000106f7) volume_small2_pane_g9

0x7058,	// (0x00010700) volume_small2_pane_g10

0x0009,

0xfc44,	// (0x000192ec) volume_small2_pane_g

0xd228,	// (0x000168d0) fep_vkb_top_text_pane_g1_ParamLimits

0xd243,	// (0x000168eb) fep_vkb_top_text_pane_t1_ParamLimits

0xd49d,	// (0x00016b45) popup_preview_fixed_window_g3_ParamLimits

0xd49d,	// (0x00016b45) popup_preview_fixed_window_g3

0x9ee6,	// (0x0001358e) popup_toolbar_trans_pane

0xb958,	// (0x00015000) aid_height_set_list_ParamLimits

0xb969,	// (0x00015011) aid_size_parent_ParamLimits

0x99ef,	// (0x00013097) list_highlight_pane_cp2_ParamLimits

0x953a,	// (0x00012be2) set_content_pane_g1_ParamLimits

0xbc0a,	// (0x000152b2) list_single_image_pane_ParamLimits

0xbc0a,	// (0x000152b2) list_single_image_pane

0xdb7b,	// (0x00017223) aid_size_cell_image_ParamLimits

0xdb7b,	// (0x00017223) aid_size_cell_image

0xdb88,	// (0x00017230) grid_single_image_pane_ParamLimits

0xdb88,	// (0x00017230) grid_single_image_pane

0x847e,	// (0x00011b26) list_single_image_pane_g1_ParamLimits

0x847e,	// (0x00011b26) list_single_image_pane_g1

0xd4ca,	// (0x00016b72) list_single_image_pane_g2_ParamLimits

0xd4ca,	// (0x00016b72) list_single_image_pane_g2

0x0001,

0xfc59,	// (0x00019301) list_single_image_pane_g_ParamLimits

0xfc59,	// (0x00019301) list_single_image_pane_g

0x83b5,	// (0x00011a5d) list_single_image_pane_t1_ParamLimits

0x83b5,	// (0x00011a5d) list_single_image_pane_t1

0xdb96,	// (0x0001723e) cell_image_list_pane_ParamLimits

0xdb96,	// (0x0001723e) cell_image_list_pane

0xdba9,	// (0x00017251) cell_image_list_pane_g1

0xdbb2,	// (0x0001725a) cell_image_list_pane_g2

0x0001,

0xfc5e,	// (0x00019306) cell_image_list_pane_g

0xdbbb,	// (0x00017263) aid_size_cell_tb_trans_pane

0x881b,	// (0x00011ec3) bg_tb_trans_pane

0xdbcd,	// (0x00017275) grid_tb_trans_pane

0xa4c7,	// (0x00013b6f) bg_tb_trans_pane_g1

0xa4d7,	// (0x00013b7f) bg_tb_trans_pane_g2

0xa4cf,	// (0x00013b77) bg_tb_trans_pane_g3

0xa4e7,	// (0x00013b8f) bg_tb_trans_pane_g4

0xa4df,	// (0x00013b87) bg_tb_trans_pane_g5

0xa507,	// (0x00013baf) bg_tb_trans_pane_g6

0xa4ff,	// (0x00013ba7) bg_tb_trans_pane_g7

0xa4ef,	// (0x00013b97) bg_tb_trans_pane_g8

0xa4f7,	// (0x00013b9f) bg_tb_trans_pane_g9

0x0008,

0xfc63,	// (0x0001930b) bg_tb_trans_pane_g

0xdbe1,	// (0x00017289) cell_toolbar_trans_pane_ParamLimits

0xdbe1,	// (0x00017289) cell_toolbar_trans_pane

0xce40,	// (0x000164e8) cell_toolbar_trans_pane_g1

0xc9ba,	// (0x00016062) list_form2_midp_pane_t1

0xc9c8,	// (0x00016070) list_form2_midp_pane_t2

0x0001,

0xfb00,	// (0x000191a8) list_form2_midp_pane_t

0xc9d6,	// (0x0001607e) scroll_pane_cp51_ParamLimits

0xcbe1,	// (0x00016289) form2_midp_wait_pane_g1

0xcbea,	// (0x00016292) form2_midp_wait_pane_g2

0xcbf3,	// (0x0001629b) form2_midp_wait_pane_g3

0x0002,

0xfb15,	// (0x000191bd) form2_midp_wait_pane_g

0x7a34,	// (0x000110dc) list_highlight_pane_cp21_ParamLimits

0xcc4a,	// (0x000162f2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xcc59,	// (0x00016301) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbb92,	// (0x0001523a) list_single_2graphic_im_pane_ParamLimits

0xbb92,	// (0x0001523a) list_single_2graphic_im_pane

0xdc07,	// (0x000172af) list_single_2graphic_im_pane_g1_ParamLimits

0xdc07,	// (0x000172af) list_single_2graphic_im_pane_g1

0xdc18,	// (0x000172c0) list_single_2graphic_im_pane_g2_ParamLimits

0xdc18,	// (0x000172c0) list_single_2graphic_im_pane_g2

0xdc24,	// (0x000172cc) list_single_2graphic_im_pane_g3_ParamLimits

0xdc24,	// (0x000172cc) list_single_2graphic_im_pane_g3

0x0003,

0xfc76,	// (0x0001931e) list_single_2graphic_im_pane_g_ParamLimits

0xfc76,	// (0x0001931e) list_single_2graphic_im_pane_g

0xdc44,	// (0x000172ec) list_single_2graphic_im_pane_t1_ParamLimits

0xdc44,	// (0x000172ec) list_single_2graphic_im_pane_t1

0xd4a9,	// (0x00016b51) list_single_graphic_2heading_pane_fp_ParamLimits

0xd4a9,	// (0x00016b51) list_single_graphic_2heading_pane_fp

0xd501,	// (0x00016ba9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd501,	// (0x00016ba9) list_single_graphic_2heading_pane_fp_g1

0xd4be,	// (0x00016b66) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd4be,	// (0x00016b66) list_single_graphic_2heading_pane_fp_g2

0x847e,	// (0x00011b26) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x847e,	// (0x00011b26) list_single_graphic_2heading_pane_fp_g3

0xd4ca,	// (0x00016b72) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd4ca,	// (0x00016b72) list_single_graphic_2heading_pane_fp_g4

0xd4de,	// (0x00016b86) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd4de,	// (0x00016b86) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x00019245) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00019245) list_single_graphic_2heading_pane_fp_g

0xdc75,	// (0x0001731d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdc75,	// (0x0001731d) list_single_graphic_2heading_pane_fp_t1

0xd539,	// (0x00016be1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd539,	// (0x00016be1) list_single_graphic_2heading_pane_fp_t2

0xdc8b,	// (0x00017333) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdc8b,	// (0x00017333) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7f,	// (0x00019327) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7f,	// (0x00019327) list_single_graphic_2heading_pane_fp_t

0xceee,	// (0x00016596) fep_hwr_write_pane_g5_ParamLimits

0xceee,	// (0x00016596) fep_hwr_write_pane_g5

0xcefa,	// (0x000165a2) fep_hwr_write_pane_g6_ParamLimits

0xcefa,	// (0x000165a2) fep_hwr_write_pane_g6

0xd960,	// (0x00017008) eswt_shell_pane_ParamLimits

0xa5e1,	// (0x00013c89) bg_popup_window_pane_cp18_ParamLimits

0xb889,	// (0x00014f31) heading_pane_cp70

0xda8a,	// (0x00017132) popup_eswt_tasktip_window_t1_ParamLimits

0xa005,	// (0x000136ad) aid_touch_tab_arrow_left

0xa011,	// (0x000136b9) aid_touch_tab_arrow_right

0x797c,	// (0x00011024) title_pane_g3_ParamLimits

0x797c,	// (0x00011024) title_pane_g3

0x86fa,	// (0x00011da2) set_value_pane_g1

0x9ee6,	// (0x0001358e) popup_toolbar_trans_pane_ParamLimits

0xdbbb,	// (0x00017263) aid_size_cell_tb_trans_pane_ParamLimits

0x881b,	// (0x00011ec3) bg_tb_trans_pane_ParamLimits

0xdbcd,	// (0x00017275) grid_tb_trans_pane_ParamLimits

0x7cd7,	// (0x0001137f) cont_note_pane_ParamLimits

0x7cd7,	// (0x0001137f) cont_note_pane

0x802b,	// (0x000116d3) cont_snote2_single_text_pane_ParamLimits

0x802b,	// (0x000116d3) cont_snote2_single_text_pane

0x802b,	// (0x000116d3) cont_snote2_single_graphic_pane_ParamLimits

0x802b,	// (0x000116d3) cont_snote2_single_graphic_pane

0xabcb,	// (0x00014273) cont_note_wait_pane_ParamLimits

0xabcb,	// (0x00014273) cont_note_wait_pane

0xabcb,	// (0x00014273) cont_note_image_pane_ParamLimits

0xabcb,	// (0x00014273) cont_note_image_pane

0xdca1,	// (0x00017349) popup_note2_window_g1_ParamLimits

0xdca1,	// (0x00017349) popup_note2_window_g1

0xdcd2,	// (0x0001737a) popup_note2_window_t1_ParamLimits

0xdcd2,	// (0x0001737a) popup_note2_window_t1

0xdd17,	// (0x000173bf) popup_note2_window_t2_ParamLimits

0xdd17,	// (0x000173bf) popup_note2_window_t2

0xdd5c,	// (0x00017404) popup_note2_window_t3_ParamLimits

0xdd5c,	// (0x00017404) popup_note2_window_t3

0xdda1,	// (0x00017449) popup_note2_window_t4_ParamLimits

0xdda1,	// (0x00017449) popup_note2_window_t4

0x7d5b,	// (0x00011403) popup_note2_window_t5_ParamLimits

0x7d5b,	// (0x00011403) popup_note2_window_t5

0x0004,

0xfc8b,	// (0x00019333) popup_note2_window_t_ParamLimits

0xfc8b,	// (0x00019333) popup_note2_window_t

0xddd0,	// (0x00017478) popup_note2_image_window_g1_ParamLimits

0xddd0,	// (0x00017478) popup_note2_image_window_g1

0xdddc,	// (0x00017484) popup_note2_image_window_g2_ParamLimits

0xdddc,	// (0x00017484) popup_note2_image_window_g2

0x0001,

0xfc96,	// (0x0001933e) popup_note2_image_window_g_ParamLimits

0xfc96,	// (0x0001933e) popup_note2_image_window_g

0xddee,	// (0x00017496) popup_note2_image_window_t1_ParamLimits

0xddee,	// (0x00017496) popup_note2_image_window_t1

0xde06,	// (0x000174ae) popup_note2_image_window_t2_ParamLimits

0xde06,	// (0x000174ae) popup_note2_image_window_t2

0xde1e,	// (0x000174c6) popup_note2_image_window_t3_ParamLimits

0xde1e,	// (0x000174c6) popup_note2_image_window_t3

0x0002,

0xfc9b,	// (0x00019343) popup_note2_image_window_t_ParamLimits

0xfc9b,	// (0x00019343) popup_note2_image_window_t

0xabd9,	// (0x00014281) popup_note2_wait_window_g1_ParamLimits

0xabd9,	// (0x00014281) popup_note2_wait_window_g1

0xde3a,	// (0x000174e2) popup_note2_wait_window_g2_ParamLimits

0xde3a,	// (0x000174e2) popup_note2_wait_window_g2

0xabf1,	// (0x00014299) popup_note2_wait_window_g3_ParamLimits

0xabf1,	// (0x00014299) popup_note2_wait_window_g3

0x0002,

0xfca2,	// (0x0001934a) popup_note2_wait_window_g_ParamLimits

0xfca2,	// (0x0001934a) popup_note2_wait_window_g

0xde46,	// (0x000174ee) popup_note2_wait_window_t1_ParamLimits

0xde46,	// (0x000174ee) popup_note2_wait_window_t1

0xde64,	// (0x0001750c) popup_note2_wait_window_t2_ParamLimits

0xde64,	// (0x0001750c) popup_note2_wait_window_t2

0xde82,	// (0x0001752a) popup_note2_wait_window_t3_ParamLimits

0xde82,	// (0x0001752a) popup_note2_wait_window_t3

0xde94,	// (0x0001753c) popup_note2_wait_window_t4_ParamLimits

0xde94,	// (0x0001753c) popup_note2_wait_window_t4

0x0003,

0xfca9,	// (0x00019351) popup_note2_wait_window_t_ParamLimits

0xfca9,	// (0x00019351) popup_note2_wait_window_t

0xdea6,	// (0x0001754e) wait_bar2_pane_ParamLimits

0xdea6,	// (0x0001754e) wait_bar2_pane

0xdebe,	// (0x00017566) popup_snote2_single_text_window_g1_ParamLimits

0xdebe,	// (0x00017566) popup_snote2_single_text_window_g1

0xdee6,	// (0x0001758e) popup_snote2_single_text_window_t1_ParamLimits

0xdee6,	// (0x0001758e) popup_snote2_single_text_window_t1

0xdf32,	// (0x000175da) popup_snote2_single_text_window_t2_ParamLimits

0xdf32,	// (0x000175da) popup_snote2_single_text_window_t2

0xdf7e,	// (0x00017626) popup_snote2_single_text_window_t3_ParamLimits

0xdf7e,	// (0x00017626) popup_snote2_single_text_window_t3

0xdfbf,	// (0x00017667) popup_snote2_single_text_window_t4_ParamLimits

0xdfbf,	// (0x00017667) popup_snote2_single_text_window_t4

0xdff5,	// (0x0001769d) popup_snote2_single_text_window_t5_ParamLimits

0xdff5,	// (0x0001769d) popup_snote2_single_text_window_t5

0x0004,

0xfcb2,	// (0x0001935a) popup_snote2_single_text_window_t_ParamLimits

0xfcb2,	// (0x0001935a) popup_snote2_single_text_window_t

0xe020,	// (0x000176c8) popup_snote2_single_graphic_window_g1_ParamLimits

0xe020,	// (0x000176c8) popup_snote2_single_graphic_window_g1

0xe048,	// (0x000176f0) popup_snote2_single_graphic_window_g2_ParamLimits

0xe048,	// (0x000176f0) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbd,	// (0x00019365) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbd,	// (0x00019365) popup_snote2_single_graphic_window_g

0xe070,	// (0x00017718) popup_snote2_single_graphic_window_t1_ParamLimits

0xe070,	// (0x00017718) popup_snote2_single_graphic_window_t1

0xe0bc,	// (0x00017764) popup_snote2_single_graphic_window_t2_ParamLimits

0xe0bc,	// (0x00017764) popup_snote2_single_graphic_window_t2

0xdf7e,	// (0x00017626) popup_snote2_single_graphic_window_t3_ParamLimits

0xdf7e,	// (0x00017626) popup_snote2_single_graphic_window_t3

0xdfbf,	// (0x00017667) popup_snote2_single_graphic_window_t4_ParamLimits

0xdfbf,	// (0x00017667) popup_snote2_single_graphic_window_t4

0xdff5,	// (0x0001769d) popup_snote2_single_graphic_window_t5_ParamLimits

0xdff5,	// (0x0001769d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc2,	// (0x0001936a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc2,	// (0x0001936a) popup_snote2_single_graphic_window_t

0xc893,	// (0x00015f3b) clock_nsta_pane_cp2_t1

0xc893,	// (0x00015f3b) clock_nsta_pane_cp2_t2

0x0001,

0xfad6,	// (0x0001917e) clock_nsta_pane_cp2_t

0x8835,	// (0x00011edd) form_field_data_wide_pane_g1_ParamLimits

0x8841,	// (0x00011ee9) form_field_data_wide_pane_g2_ParamLimits

0x8841,	// (0x00011ee9) form_field_data_wide_pane_g2

0x884d,	// (0x00011ef5) form_field_data_wide_pane_g3_ParamLimits

0x884d,	// (0x00011ef5) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x00018d62) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x00018d62) form_field_data_wide_pane_g

0xc79e,	// (0x00015e46) grid_touch_3_pane_ParamLimits

0xc79e,	// (0x00015e46) grid_touch_3_pane

0xe108,	// (0x000177b0) cell_touch_3_pane_ParamLimits

0xe108,	// (0x000177b0) cell_touch_3_pane

0xce40,	// (0x000164e8) cell_touch_3_pane_g1

0xce40,	// (0x000164e8) cell_touch_3_pane_g2

0x0001,

0xfb5b,	// (0x00019203) cell_touch_3_pane_g

0x7d8d,	// (0x00011435) cont_query_data_pane

0x7d95,	// (0x0001143d) cont_query_data_pane_cp1

0xe136,	// (0x000177de) button_value_adjust_pane_cp7

0xe13e,	// (0x000177e6) query_popup_pane_cp3

0x90be,	// (0x00012766) bg_popup_sub_pane_cp22_ParamLimits

0x63cb,	// (0x0000fa73) navi_navi_volume_pane_cp2

0x63e6,	// (0x0000fa8e) popup_side_volume_key_window_g2

0x63f5,	// (0x0000fa9d) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x00018df4) popup_side_volume_key_window_g

0x6412,	// (0x0000faba) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x00018dfb) popup_side_volume_key_window_t

0x9404,	// (0x00012aac) popup_side_volume_key_window_ParamLimits

0x843e,	// (0x00011ae6) list_double_graphic_pane_g4_ParamLimits

0x843e,	// (0x00011ae6) list_double_graphic_pane_g4

0xbbcf,	// (0x00015277) list_single_2heading_msg_pane_ParamLimits

0xbbcf,	// (0x00015277) list_single_2heading_msg_pane

0xe16d,	// (0x00017815) list_single_2heading_msg_pane_g1_ParamLimits

0xe16d,	// (0x00017815) list_single_2heading_msg_pane_g1

0x959e,	// (0x00012c46) list_single_2heading_msg_pane_g2_ParamLimits

0x959e,	// (0x00012c46) list_single_2heading_msg_pane_g2

0xe179,	// (0x00017821) list_single_2heading_msg_pane_g3_ParamLimits

0xe179,	// (0x00017821) list_single_2heading_msg_pane_g3

0xe185,	// (0x0001782d) list_single_2heading_msg_pane_g4_ParamLimits

0xe185,	// (0x0001782d) list_single_2heading_msg_pane_g4

0x0003,

0xfccd,	// (0x00019375) list_single_2heading_msg_pane_g_ParamLimits

0xfccd,	// (0x00019375) list_single_2heading_msg_pane_g

0xe19d,	// (0x00017845) list_single_2heading_msg_pane_t1_ParamLimits

0xe19d,	// (0x00017845) list_single_2heading_msg_pane_t1

0xe1c5,	// (0x0001786d) list_single_2heading_msg_pane_t2_ParamLimits

0xe1c5,	// (0x0001786d) list_single_2heading_msg_pane_t2

0xe1f4,	// (0x0001789c) list_single_2heading_msg_pane_t3_ParamLimits

0xe1f4,	// (0x0001789c) list_single_2heading_msg_pane_t3

0xe22d,	// (0x000178d5) list_single_2heading_msg_pane_t4_ParamLimits

0xe22d,	// (0x000178d5) list_single_2heading_msg_pane_t4

0x0003,

0xfcd6,	// (0x0001937e) list_single_2heading_msg_pane_t_ParamLimits

0xfcd6,	// (0x0001937e) list_single_2heading_msg_pane_t

0x7988,	// (0x00011030) title_pane_g4_ParamLimits

0x7988,	// (0x00011030) title_pane_g4

0x61d9,	// (0x0000f881) title_pane_stacon_g3_ParamLimits

0x61d9,	// (0x0000f881) title_pane_stacon_g3

0xdc38,	// (0x000172e0) list_single_2graphic_im_pane_g4_ParamLimits

0xdc38,	// (0x000172e0) list_single_2graphic_im_pane_g4

0xb630,	// (0x00014cd8) popup_side_volume_key_window_cp

0xbf2c,	// (0x000155d4) main_idle_act2_pane_t1

0x67fa,	// (0x0000fea2) toolbar_button_pane_g10

0x8223,	// (0x000118cb) popup_toolbar_window_cp1

0xc884,	// (0x00015f2c) clock_nsta_pane_cp_t1

0xc884,	// (0x00015f2c) clock_nsta_pane_cp_t2

0x0001,

0xfad1,	// (0x00019179) clock_nsta_pane_cp_t

0x63cb,	// (0x0000fa73) navi_navi_volume_pane_cp2_ParamLimits

0x63da,	// (0x0000fa82) popup_side_volume_key_window_g1_ParamLimits

0x63e6,	// (0x0000fa8e) popup_side_volume_key_window_g2_ParamLimits

0x63f5,	// (0x0000fa9d) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x00018df4) popup_side_volume_key_window_g_ParamLimits

0x6c62,	// (0x0001030a) fep_hwr_aid_pane

0x6d09,	// (0x000103b1) bg_fep_hwr_top_pane_g4_ParamLimits

0xcebe,	// (0x00016566) fep_hwr_top_pane_g1_ParamLimits

0xced0,	// (0x00016578) fep_hwr_top_pane_g2_ParamLimits

0x6d29,	// (0x000103d1) fep_hwr_top_pane_g3_ParamLimits

0xfb26,	// (0x000191ce) fep_hwr_top_pane_g_ParamLimits

0x6d3e,	// (0x000103e6) fep_hwr_top_text_pane_ParamLimits

0xb3f3,	// (0x00014a9b) aid_touch_tab_arrow_arrow_2

0xb3fc,	// (0x00014aa4) aid_touch_tab_arrow_left_2

0x6c76,	// (0x0001031e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6cad,	// (0x00010355) fep_hwr_prediction_pane

0xd030,	// (0x000166d8) fep_vkb_prediction_pane

0xd134,	// (0x000167dc) fep_vkb_side_pane_g3_ParamLimits

0xd134,	// (0x000167dc) fep_vkb_side_pane_g3

0x6eb9,	// (0x00010561) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6f25,	// (0x000105cd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6f32,	// (0x000105da) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd5,	// (0x0001927d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7061,	// (0x00010709) fep_hwr_prediction_pane_g1

0x706b,	// (0x00010713) fep_hwr_prediction_pane_g2

0x7073,	// (0x0001071b) fep_hwr_prediction_pane_g3

0x707b,	// (0x00010723) fep_hwr_prediction_pane_g4

0x0003,

0xfcdf,	// (0x00019387) fep_hwr_prediction_pane_g

0xe252,	// (0x000178fa) fep_vkb_prediction_pane_g1

0xe25c,	// (0x00017904) fep_vkb_prediction_pane_g2

0xe264,	// (0x0001790c) fep_vkb_prediction_pane_g3

0xe26c,	// (0x00017914) fep_vkb_prediction_pane_g4

0x0003,

0xfce8,	// (0x00019390) fep_vkb_prediction_pane_g

0x6ae2,	// (0x0001018a) slider_set_pane_g3

0x6af6,	// (0x0001019e) slider_set_pane_g4

0x6b0e,	// (0x000101b6) slider_set_pane_g5

0x6ae2,	// (0x0001018a) slider_set_pane_g6

0x6b24,	// (0x000101cc) slider_set_pane_g7

0xbace,	// (0x00015176) slider_form_pane_g3

0xbad7,	// (0x0001517f) slider_form_pane_g4

0xbadf,	// (0x00015187) slider_form_pane_g5

0xbace,	// (0x00015176) slider_form_pane_g6

0xbae7,	// (0x0001518f) slider_form_pane_g7

0xc209,	// (0x000158b1) slider_set_pane_vc_g3

0xc212,	// (0x000158ba) slider_set_pane_vc_g4

0xc21b,	// (0x000158c3) slider_set_pane_vc_g5

0xc209,	// (0x000158b1) slider_set_pane_vc_g6

0xc224,	// (0x000158cc) slider_set_pane_vc_g7

0xc209,	// (0x000158b1) slider_form_pane_vc_g1

0xc212,	// (0x000158ba) slider_form_pane_vc_g2

0xc21b,	// (0x000158c3) slider_form_pane_vc_g3

0xc209,	// (0x000158b1) slider_form_pane_vc_g4

0xc5bc,	// (0x00015c64) slider_form_pane_vc_g5

0x0004,

0xfab7,	// (0x0001915f) slider_form_pane_vc_g

0x7940,	// (0x00010fe8) main_idle_act3_pane

0xe274,	// (0x0001791c) ai3_links_pane

0xe27d,	// (0x00017925) popup_ai3_data_window_ParamLimits

0xe27d,	// (0x00017925) popup_ai3_data_window

0x7940,	// (0x00010fe8) grid_ai3_links_pane

0xe297,	// (0x0001793f) cell_ai3_links_pane_ParamLimits

0xe297,	// (0x0001793f) cell_ai3_links_pane

0xe2af,	// (0x00017957) bg_popup_sub_pane_cp11

0xe2bc,	// (0x00017964) cell_ai3_links_pane_g1

0x7940,	// (0x00010fe8) bg_popup_sub_pane_cp12

0xe2e1,	// (0x00017989) heading_ai3_data_pane

0xe2e9,	// (0x00017991) list_ai3_gene_pane

0xe2f5,	// (0x0001799d) popup_ai3_data_window_g1

0xe2fd,	// (0x000179a5) heading_ai3_data_pane_g1

0xe305,	// (0x000179ad) heading_ai3_data_pane_t1

0xe313,	// (0x000179bb) list_double_ai3_gene_pane_ParamLimits

0xe313,	// (0x000179bb) list_double_ai3_gene_pane

0xe320,	// (0x000179c8) list_single_ai3_gene_pane_ParamLimits

0xe320,	// (0x000179c8) list_single_ai3_gene_pane

0xce05,	// (0x000164ad) list_highlight_pane_cp7_ParamLimits

0xce05,	// (0x000164ad) list_highlight_pane_cp7

0xe32d,	// (0x000179d5) list_single_a13_gene_pane_t1_ParamLimits

0xe32d,	// (0x000179d5) list_single_a13_gene_pane_t1

0xe344,	// (0x000179ec) list_single_ai3_gene_pane_g1

0xe34d,	// (0x000179f5) list_single_ai3_gene_pane_g2

0x0001,

0xfcf1,	// (0x00019399) list_single_ai3_gene_pane_g

0xe355,	// (0x000179fd) list_double_ai3_gene_pane_g1_ParamLimits

0xe355,	// (0x000179fd) list_double_ai3_gene_pane_g1

0xe361,	// (0x00017a09) list_double_ai3_gene_pane_t1_ParamLimits

0xe361,	// (0x00017a09) list_double_ai3_gene_pane_t1

0xe37d,	// (0x00017a25) list_double_ai3_gene_pane_t2_ParamLimits

0xe37d,	// (0x00017a25) list_double_ai3_gene_pane_t2

0xe393,	// (0x00017a3b) list_double_ai3_gene_pane_t3_ParamLimits

0xe393,	// (0x00017a3b) list_double_ai3_gene_pane_t3

0x0002,

0xfcf6,	// (0x0001939e) list_double_ai3_gene_pane_t_ParamLimits

0xfcf6,	// (0x0001939e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe14f,	// (0x000177f7) aid_size_min_col_2

0xe159,	// (0x00017801) aid_size_min_msg_ParamLimits

0xe159,	// (0x00017801) aid_size_min_msg

0xd234,	// (0x000168dc) fep_vkb_top_text_pane_g2_ParamLimits

0xd234,	// (0x000168dc) fep_vkb_top_text_pane_g2

0x0001,

0xfb56,	// (0x000191fe) fep_vkb_top_text_pane_g_ParamLimits

0xfb56,	// (0x000191fe) fep_vkb_top_text_pane_g

0x7940,	// (0x00010fe8) main_hc_apps_shell_pane

0xe3b0,	// (0x00017a58) grid_hc_apps_pane_ParamLimits

0xe3b0,	// (0x00017a58) grid_hc_apps_pane

0xe3bf,	// (0x00017a67) list_hc_apps_pane

0xe3c7,	// (0x00017a6f) scroll_pane_cp37_ParamLimits

0xe3c7,	// (0x00017a6f) scroll_pane_cp37

0xe3d3,	// (0x00017a7b) cell_hc_apps_pane_ParamLimits

0xe3d3,	// (0x00017a7b) cell_hc_apps_pane

0xe481,	// (0x00017b29) cell_hc_apps_pane_g1_ParamLimits

0xe481,	// (0x00017b29) cell_hc_apps_pane_g1

0xe4b2,	// (0x00017b5a) cell_hc_apps_pane_g2_ParamLimits

0xe4b2,	// (0x00017b5a) cell_hc_apps_pane_g2

0xe4ce,	// (0x00017b76) cell_hc_apps_pane_g3_ParamLimits

0xe4ce,	// (0x00017b76) cell_hc_apps_pane_g3

0x0002,

0xfcfd,	// (0x000193a5) cell_hc_apps_pane_g_ParamLimits

0xfcfd,	// (0x000193a5) cell_hc_apps_pane_g

0xe4f0,	// (0x00017b98) cell_hc_apps_pane_t1_ParamLimits

0xe4f0,	// (0x00017b98) cell_hc_apps_pane_t1

0x7cd7,	// (0x0001137f) grid_highlight_pane_cp10_ParamLimits

0x7cd7,	// (0x0001137f) grid_highlight_pane_cp10

0xe530,	// (0x00017bd8) list_single_hc_apps_pane_ParamLimits

0xe530,	// (0x00017bd8) list_single_hc_apps_pane

0xe58c,	// (0x00017c34) list_single_hc_apps_pane_g1

0xe5a5,	// (0x00017c4d) list_single_hc_apps_pane_g2

0x0001,

0xfd04,	// (0x000193ac) list_single_hc_apps_pane_g

0xe5be,	// (0x00017c66) list_single_hc_apps_pane_g2_copy1

0xe5da,	// (0x00017c82) list_single_hc_apps_pane_t1

0x7a34,	// (0x000110dc) bg_set_opt_pane_cp_ParamLimits

0x6100,	// (0x0000f7a8) setting_slider_pane_t1_ParamLimits

0x6119,	// (0x0000f7c1) setting_slider_pane_t2_ParamLimits

0x6133,	// (0x0000f7db) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00018c4a) setting_slider_pane_t_ParamLimits

0x614b,	// (0x0000f7f3) slider_set_pane_ParamLimits

0x666a,	// (0x0000fd12) control_pane_g5_ParamLimits

0x666a,	// (0x0000fd12) control_pane_g5

0xb91d,	// (0x00014fc5) slider_set_pane_g1_ParamLimits

0x6ad6,	// (0x0001017e) slider_set_pane_g2_ParamLimits

0x6ae2,	// (0x0001018a) slider_set_pane_g3_ParamLimits

0x6af6,	// (0x0001019e) slider_set_pane_g4_ParamLimits

0x6b0e,	// (0x000101b6) slider_set_pane_g5_ParamLimits

0x6ae2,	// (0x0001018a) slider_set_pane_g6_ParamLimits

0x6b24,	// (0x000101cc) slider_set_pane_g7_ParamLimits

0xf998,	// (0x00019040) slider_set_pane_g_ParamLimits

0x94e5,	// (0x00012b8d) navi_icon_text_pane_ParamLimits

0x9fc6,	// (0x0001366e) aid_fill_nsta_2_ParamLimits

0xa005,	// (0x000136ad) aid_touch_tab_arrow_left_ParamLimits

0xa011,	// (0x000136b9) aid_touch_tab_arrow_right_ParamLimits

0xa07d,	// (0x00013725) clock_nsta_pane_ParamLimits

0xb3cf,	// (0x00014a77) navi_icon_pane_g1_ParamLimits

0xb3de,	// (0x00014a86) navi_text_pane_t1_ParamLimits

0xc98e,	// (0x00016036) navi_icon_text_pane_g1_ParamLimits

0xc99d,	// (0x00016045) navi_icon_text_pane_t1_ParamLimits

0xe58c,	// (0x00017c34) list_single_hc_apps_pane_g1_ParamLimits

0xe5a5,	// (0x00017c4d) list_single_hc_apps_pane_g2_ParamLimits

0xfd04,	// (0x000193ac) list_single_hc_apps_pane_g_ParamLimits

0xe5be,	// (0x00017c66) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe5da,	// (0x00017c82) list_single_hc_apps_pane_t1_ParamLimits

0x6014,	// (0x0000f6bc) popup_toolbar2_fixed_window_ParamLimits

0x6014,	// (0x0000f6bc) popup_toolbar2_fixed_window

0x9edc,	// (0x00013584) popup_toolbar2_float_window

0x7940,	// (0x00010fe8) bg_popup_sub_pane_cp27

0xe608,	// (0x00017cb0) grid_toolbar2_float_pane

0x7940,	// (0x00010fe8) bg_popup_sub_pane_cp26

0xe608,	// (0x00017cb0) grid_toolbar2_fixed_pane

0xe610,	// (0x00017cb8) cell_toolbar2_fixed_pane_ParamLimits

0xe610,	// (0x00017cb8) cell_toolbar2_fixed_pane

0xe620,	// (0x00017cc8) cell_toolbar2_fixed_pane_g1

0xe629,	// (0x00017cd1) toolbar2_fixed_button_pane

0xa4c7,	// (0x00013b6f) toolbar2_fixed_button_pane_g1

0xa4d7,	// (0x00013b7f) toolbar2_fixed_button_pane_g2

0xa4cf,	// (0x00013b77) toolbar2_fixed_button_pane_g3

0xa4e7,	// (0x00013b8f) toolbar2_fixed_button_pane_g4

0xa4df,	// (0x00013b87) toolbar2_fixed_button_pane_g5

0xa4ef,	// (0x00013b97) toolbar2_fixed_button_pane_g6

0xa4f7,	// (0x00013b9f) toolbar2_fixed_button_pane_g7

0xa507,	// (0x00013baf) toolbar2_fixed_button_pane_g8

0xa4ff,	// (0x00013ba7) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x00018f42) toolbar2_fixed_button_pane_g

0xe631,	// (0x00017cd9) cell_toolbar2_float_pane_ParamLimits

0xe631,	// (0x00017cd9) cell_toolbar2_float_pane

0xe642,	// (0x00017cea) cell_toolbar2_float_pane_g1

0xe629,	// (0x00017cd1) toolbar2_fixed_button_pane_cp

0xcf90,	// (0x00016638) fep_vkb_accented_list_pane_ParamLimits

0xcf90,	// (0x00016638) fep_vkb_accented_list_pane

0x6e99,	// (0x00010541) bg_popup_fep_shadow_pane_g9

0x9665,	// (0x00012d0d) bg_popup_fep_shadow_pane_cp3

0x8af9,	// (0x000121a1) list_accented_list_pane

0xe64b,	// (0x00017cf3) list_single_accented_list_pane_ParamLimits

0xe64b,	// (0x00017cf3) list_single_accented_list_pane

0x9665,	// (0x00012d0d) list_highlight_pane_cp10

0xe65c,	// (0x00017d04) list_single_accented_list_pane_t1

0x9e2c,	// (0x000134d4) popup_slider_window_ParamLimits

0x9e2c,	// (0x000134d4) popup_slider_window

0xe146,	// (0x000177ee) aid_indentation_list_msg

0xe716,	// (0x00017dbe) bg_popup_window_pane_cp19

0xe780,	// (0x00017e28) popup_slider_window_g1

0xe79c,	// (0x00017e44) popup_slider_window_g2

0xe7b8,	// (0x00017e60) popup_slider_window_g3

0x0005,

0xfd09,	// (0x000193b1) popup_slider_window_g

0xe814,	// (0x00017ebc) popup_slider_window_t1

0xe888,	// (0x00017f30) small_volume_slider_vertical_pane

0xce40,	// (0x000164e8) small_volume_slider_vertical_pane_g1

0xce40,	// (0x000164e8) small_volume_slider_vertical_pane_g2

0xe8a4,	// (0x00017f4c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1b,	// (0x000193c3) small_volume_slider_vertical_pane_g

0x5dcc,	// (0x0000f474) area_side_right_pane_ParamLimits

0x5dcc,	// (0x0000f474) area_side_right_pane

0x7083,	// (0x0001072b) aid_size_side_button_ParamLimits

0x7083,	// (0x0001072b) aid_size_side_button

0x7097,	// (0x0001073f) grid_sctrl_middle_pane_ParamLimits

0x7097,	// (0x0001073f) grid_sctrl_middle_pane

0x70b7,	// (0x0001075f) sctrl_sk_bottom_pane

0x70c8,	// (0x00010770) sctrl_sk_top_pane

0x70da,	// (0x00010782) aid_touch_sctrl_top

0x70e7,	// (0x0001078f) bg_sctrl_sk_pane_ParamLimits

0x70e7,	// (0x0001078f) bg_sctrl_sk_pane

0x70f5,	// (0x0001079d) sctrl_sk_top_pane_g1

0x7102,	// (0x000107aa) sctrl_sk_top_pane_t1

0x70da,	// (0x00010782) aid_touch_sctrl_bottom

0x70e7,	// (0x0001078f) bg_sctrl_sk_pane_cp_ParamLimits

0x70e7,	// (0x0001078f) bg_sctrl_sk_pane_cp

0x711d,	// (0x000107c5) sctrl_sk_bottom_pane_g1

0x7102,	// (0x000107aa) sctrl_sk_bottom_pane_t1

0x7126,	// (0x000107ce) cell_sctrl_middle_pane_ParamLimits

0x7126,	// (0x000107ce) cell_sctrl_middle_pane

0x7141,	// (0x000107e9) aid_touch_sctrl_middle_ParamLimits

0x7141,	// (0x000107e9) aid_touch_sctrl_middle

0x7153,	// (0x000107fb) bg_sctrl_middle_pane_ParamLimits

0x7153,	// (0x000107fb) bg_sctrl_middle_pane

0x6eb9,	// (0x00010561) cell_sctrl_middle_pane_g1_ParamLimits

0x6eb9,	// (0x00010561) cell_sctrl_middle_pane_g1

0x7161,	// (0x00010809) cell_sctrl_middle_pane_g2_ParamLimits

0x7161,	// (0x00010809) cell_sctrl_middle_pane_g2

0x0001,

0xfd27,	// (0x000193cf) cell_sctrl_middle_pane_g_ParamLimits

0xfd27,	// (0x000193cf) cell_sctrl_middle_pane_g

0xa4c7,	// (0x00013b6f) bg_sctrl_middle_pane_g1

0xa4cf,	// (0x00013b77) bg_sctrl_middle_pane_g2

0xa4d7,	// (0x00013b7f) bg_sctrl_middle_pane_g3

0xa4df,	// (0x00013b87) bg_sctrl_middle_pane_g4

0xa4e7,	// (0x00013b8f) bg_sctrl_middle_pane_g5

0xa4ef,	// (0x00013b97) bg_sctrl_middle_pane_g6

0xa4f7,	// (0x00013b9f) bg_sctrl_middle_pane_g7

0xa4ff,	// (0x00013ba7) bg_sctrl_middle_pane_g8

0x0007,

0xfd2c,	// (0x000193d4) bg_sctrl_middle_pane_g

0xa507,	// (0x00013baf) bg_sctrl_middle_pane_g8_copy1

0xa4c7,	// (0x00013b6f) bg_sctrl_sk_pane_g1

0xa4d7,	// (0x00013b7f) bg_sctrl_sk_pane_g2

0xa4cf,	// (0x00013b77) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x00018f42) bg_sctrl_sk_pane_g

0x81e9,	// (0x00011891) aid_size_touch_scroll_bar

0xa4e7,	// (0x00013b8f) bg_sctrl_sk_pane_g4

0xa4df,	// (0x00013b87) bg_sctrl_sk_pane_g5

0xa4ef,	// (0x00013b97) bg_sctrl_sk_pane_g6

0xa4f7,	// (0x00013b9f) bg_sctrl_sk_pane_g7

0xa507,	// (0x00013baf) bg_sctrl_sk_pane_g8

0xa4ff,	// (0x00013ba7) bg_sctrl_sk_pane_g9

0x9a97,	// (0x0001313f) popup_fep_china_hwr2_fs_candidate_window

0x9aa1,	// (0x00013149) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9aa1,	// (0x00013149) popup_fep_china_hwr2_fs_control_window

0x6eb9,	// (0x00010561) sctrl_sk_top_pane_g2

0x0001,

0xfd22,	// (0x000193ca) sctrl_sk_top_pane_g

0xe8ad,	// (0x00017f55) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe8ad,	// (0x00017f55) aid_fep_china_hwr2_fs_cell

0xe8bf,	// (0x00017f67) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe8bf,	// (0x00017f67) bg_popup_fep_shadow_pane_cp4

0xe8d6,	// (0x00017f7e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe8d6,	// (0x00017f7e) bg_popup_fep_shadow_pane_cp5

0xe8e8,	// (0x00017f90) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8e8,	// (0x00017f90) popup_fep_china_hwr2_fs_control_bar_grid

0xe8f8,	// (0x00017fa0) popup_fep_china_hwr2_fs_control_funtion_grid

0xe900,	// (0x00017fa8) aid_fep_china_hwr2_fs_candi_cell

0x7940,	// (0x00010fe8) bg_popup_fep_shadow_pane_cp6

0xe90a,	// (0x00017fb2) popup_fep_china_hwr2_fs_candidate_grid

0xe914,	// (0x00017fbc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe914,	// (0x00017fbc) cell_fep_china_hwr2_fs_funtion_grid

0xce40,	// (0x000164e8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe92c,	// (0x00017fd4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe92c,	// (0x00017fd4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe93a,	// (0x00017fe2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe93a,	// (0x00017fe2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3d,	// (0x000193e5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3d,	// (0x000193e5) cell_fep_china_hwr2_fs_funtion_grid_g

0xe950,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe950,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe965,	// (0x0001800d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe965,	// (0x0001800d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd42,	// (0x000193ea) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd42,	// (0x000193ea) cell_fep_china_hwr2_fs_funtion_grid_t

0xe981,	// (0x00018029) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe989,	// (0x00018031) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe991,	// (0x00018039) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd47,	// (0x000193ef) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe999,	// (0x00018041) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe999,	// (0x00018041) cell_fep_china_hwr2_fs_candidate_grid

0xe9b2,	// (0x0001805a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe9ba,	// (0x00018062) popup_fep_china_hwr2_fs_candidate_grid_g21

0xce40,	// (0x000164e8) cell_fep_china_hwr2_fs_candidate_grid_g1

0xce40,	// (0x000164e8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5b,	// (0x00019203) cell_fep_china_hwr2_fs_candidate_grid_g

0xe9c2,	// (0x0001806a) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa08a,	// (0x00013732) clock_nsta_pane_cp_24_ParamLimits

0xa08a,	// (0x00013732) clock_nsta_pane_cp_24

0xa108,	// (0x000137b0) indicator_nsta_pane_cp_24_ParamLimits

0xa108,	// (0x000137b0) indicator_nsta_pane_cp_24

0xb24b,	// (0x000148f3) heading_pane_g1

0x0001,

0xf8ff,	// (0x00018fa7) heading_pane_g

0xbd75,	// (0x0001541d) grid_sct_catagory_button_pane

0xbda5,	// (0x0001544d) scroll_pane_cp5_ParamLimits

0xc9e2,	// (0x0001608a) button_value_adjust_pane_cp5_ParamLimits

0xc9e2,	// (0x0001608a) button_value_adjust_pane_cp5

0xcade,	// (0x00016186) form2_midp_time_pane_ParamLimits

0xe9d0,	// (0x00018078) cell_sct_catagory_button_pane_ParamLimits

0xe9d0,	// (0x00018078) cell_sct_catagory_button_pane

0xce05,	// (0x000164ad) bg_button_pane_cp01_ParamLimits

0xce05,	// (0x000164ad) bg_button_pane_cp01

0xce40,	// (0x000164e8) cell_sct_catagory_button_pane_g1

0x9e6b,	// (0x00013513) popup_tb_extension_window

0xe9e2,	// (0x0001808a) aid_size_cell_ext_ParamLimits

0xe9e2,	// (0x0001808a) aid_size_cell_ext

0x7cd7,	// (0x0001137f) bg_tb_trans_pane_cp1_ParamLimits

0x7cd7,	// (0x0001137f) bg_tb_trans_pane_cp1

0xea02,	// (0x000180aa) grid_tb_ext_pane_ParamLimits

0xea02,	// (0x000180aa) grid_tb_ext_pane

0xea30,	// (0x000180d8) cell_tb_ext_pane_ParamLimits

0xea30,	// (0x000180d8) cell_tb_ext_pane

0xea47,	// (0x000180ef) cell_tb_ext_pane_g1_ParamLimits

0xea47,	// (0x000180ef) cell_tb_ext_pane_g1

0xea64,	// (0x0001810c) cell_tb_ext_pane_t1

0x7cd7,	// (0x0001137f) list_highlight_pane_cp11_ParamLimits

0x7cd7,	// (0x0001137f) list_highlight_pane_cp11

0x6033,	// (0x0000f6db) popup_uni_indicator_window_ParamLimits

0x6033,	// (0x0000f6db) popup_uni_indicator_window

0x881b,	// (0x00011ec3) bg_popup_sub_pane_cp14

0xea7f,	// (0x00018127) list_uniindi_pane

0xea8b,	// (0x00018133) uniindi_top_pane

0x7cd7,	// (0x0001137f) bg_uniindi_top_pane

0xeaaa,	// (0x00018152) uniindi_top_pane_g1

0xeac0,	// (0x00018168) uniindi_top_pane_g2

0x0003,

0xfd4e,	// (0x000193f6) uniindi_top_pane_g

0xeaea,	// (0x00018192) uniindi_top_pane_t1

0xeb14,	// (0x000181bc) list_single_uniindi_pane_ParamLimits

0xeb14,	// (0x000181bc) list_single_uniindi_pane

0xce40,	// (0x000164e8) bg_uniindi_top_pane_g1

0xeb27,	// (0x000181cf) list_single_uniindi_pane_g1

0xeb3a,	// (0x000181e2) list_single_uniindi_pane_t1

0x5ea9,	// (0x0000f551) control_bg_pane

0xeb5f,	// (0x00018207) bg_sctrl_sk_pane_cp1

0xeb68,	// (0x00018210) bg_sctrl_sk_pane_cp2

0xeb71,	// (0x00018219) control_bg_pane_g1

0xeb7a,	// (0x00018222) control_bg_pane_g2

0x0001,

0xfd57,	// (0x000193ff) control_bg_pane_g

0xc848,	// (0x00015ef0) cell_indicator_nsta_pane_g1_ParamLimits

0xc856,	// (0x00015efe) cell_indicator_nsta_pane_g2_ParamLimits

0xfacc,	// (0x00019174) cell_indicator_nsta_pane_g_ParamLimits

0xcb66,	// (0x0001620e) form2_midp_time_pane_t1_ParamLimits

0x802b,	// (0x000116d3) main_idle_act4_pane_ParamLimits

0x802b,	// (0x000116d3) main_idle_act4_pane

0x9e6b,	// (0x00013513) popup_tb_extension_window_ParamLimits

0xea20,	// (0x000180c8) tb_ext_find_pane_ParamLimits

0xea20,	// (0x000180c8) tb_ext_find_pane

0xeb83,	// (0x0001822b) ai_gene_pane_1_cp1

0x97aa,	// (0x00012e52) ai_gene_pane_2_cp1

0xeb8b,	// (0x00018233) list_single_idle_plugin_calendar_pane

0xeb94,	// (0x0001823c) list_single_idle_plugin_notification_pane

0xeb9d,	// (0x00018245) list_single_idle_plugin_player_pane

0xeba6,	// (0x0001824e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeba6,	// (0x0001824e) list_single_idle_plugin_shortcut_pane

0xebc8,	// (0x00018270) main_idle_act4_pane_t1

0xebda,	// (0x00018282) main_idle_act4_pane_t2

0x0001,

0xfd5c,	// (0x00019404) main_idle_act4_pane_t

0xebec,	// (0x00018294) middle_sk_idle_act4_pane_ParamLimits

0xebec,	// (0x00018294) middle_sk_idle_act4_pane

0xec02,	// (0x000182aa) popup_clock_digital_analogue_window_cp2

0xec1c,	// (0x000182c4) shortcut_wheel_idle_act4_pane_ParamLimits

0xec1c,	// (0x000182c4) shortcut_wheel_idle_act4_pane

0xce40,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g1

0xce40,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g2

0xce40,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g3

0xce40,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g4

0xce40,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g5

0xec30,	// (0x000182d8) shortcut_wheel_idle_act4_pane_g6

0xec38,	// (0x000182e0) shortcut_wheel_idle_act4_pane_g7

0xec40,	// (0x000182e8) shortcut_wheel_idle_act4_pane_g8

0xec48,	// (0x000182f0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd61,	// (0x00019409) shortcut_wheel_idle_act4_pane_g

0xd0e0,	// (0x00016788) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0e0,	// (0x00016788) middle_sk_idle_act4_pane_g1

0xecac,	// (0x00018354) middle_sk_idle_act4_pane_g2_ParamLimits

0xecac,	// (0x00018354) middle_sk_idle_act4_pane_g2

0x0001,

0xfd84,	// (0x0001942c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd84,	// (0x0001942c) middle_sk_idle_act4_pane_g

0xecb8,	// (0x00018360) middle_sk_idle_act4_pane_t1_ParamLimits

0xecb8,	// (0x00018360) middle_sk_idle_act4_pane_t1

0xecd5,	// (0x0001837d) grid_ai_shortcut_pane_ParamLimits

0xecd5,	// (0x0001837d) grid_ai_shortcut_pane

0xecee,	// (0x00018396) list_highlight_pane_cp16_ParamLimits

0xecee,	// (0x00018396) list_highlight_pane_cp16

0xecfb,	// (0x000183a3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xecfb,	// (0x000183a3) list_single_idle_plugin_shortcut_pane_g1

0xed07,	// (0x000183af) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xed07,	// (0x000183af) list_single_idle_plugin_shortcut_pane_g2

0xed1f,	// (0x000183c7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xed1f,	// (0x000183c7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd89,	// (0x00019431) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd89,	// (0x00019431) list_single_idle_plugin_shortcut_pane_g

0xed32,	// (0x000183da) cell_ai_shortcut_pane_ParamLimits

0xed32,	// (0x000183da) cell_ai_shortcut_pane

0xed56,	// (0x000183fe) cell_ai_shortcut_pane_g1_ParamLimits

0xed56,	// (0x000183fe) cell_ai_shortcut_pane_g1

0xeb83,	// (0x0001822b) ai_gene_pane_1_cp2

0xed78,	// (0x00018420) ai_gene_pane_2_cp2

0xed80,	// (0x00018428) list_highlight_pane_cp15

0xed89,	// (0x00018431) list_single_idle_plugin_calendar_pane_g1

0xed80,	// (0x00018428) list_highlight_pane_cp17

0xed91,	// (0x00018439) list_single_idle_plugin_calendar_pane_g1_copy1

0xed99,	// (0x00018441) list_single_idle_plugin_player_pane_g1

0xbfce,	// (0x00015676) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd90,	// (0x00019438) list_single_idle_plugin_player_pane_g

0xeda1,	// (0x00018449) list_single_idle_plugin_player_pane_t1

0xedaf,	// (0x00018457) list_single_idle_plugin_player_pane_t2

0xedbd,	// (0x00018465) list_single_idle_plugin_player_pane_t3

0xedcb,	// (0x00018473) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd95,	// (0x0001943d) list_single_idle_plugin_player_pane_t

0xedd9,	// (0x00018481) wait_bar_pane_cp15

0xede1,	// (0x00018489) grid_ai_notification_pane

0xbfce,	// (0x00015676) list_single_idle_plugin_notification_pane_g1

0xedea,	// (0x00018492) cell_ai_notification_pane_ParamLimits

0xedea,	// (0x00018492) cell_ai_notification_pane

0xedf7,	// (0x0001849f) cell_ai_notification_pane_g1

0xedff,	// (0x000184a7) cell_ai_notification_pane_t1

0xee0d,	// (0x000184b5) tb_ext_find_button_pane

0xee15,	// (0x000184bd) tb_ext_find_pane_g1

0xee1d,	// (0x000184c5) tb_ext_find_pane_t1

0x8ff9,	// (0x000126a1) tb_ext_find_button_pane_g1

0xee2b,	// (0x000184d3) tb_ext_find_button_pane_g2

0x0001,

0xfd9e,	// (0x00019446) tb_ext_find_button_pane_g

0xebc8,	// (0x00018270) main_idle_act4_pane_t1_ParamLimits

0xebda,	// (0x00018282) main_idle_act4_pane_t2_ParamLimits

0xfd5c,	// (0x00019404) main_idle_act4_pane_t_ParamLimits

0xec02,	// (0x000182aa) popup_clock_digital_analogue_window_cp2_ParamLimits

0xec10,	// (0x000182b8) sat_plugin_idle_act4_pane_ParamLimits

0xec10,	// (0x000182b8) sat_plugin_idle_act4_pane

0xee34,	// (0x000184dc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xee34,	// (0x000184dc) sat_plugin_idle_act4_pane_t1

0xee47,	// (0x000184ef) sat_plugin_idle_act4_pane_t2_ParamLimits

0xee47,	// (0x000184ef) sat_plugin_idle_act4_pane_t2

0xee5a,	// (0x00018502) sat_plugin_idle_act4_pane_t3_ParamLimits

0xee5a,	// (0x00018502) sat_plugin_idle_act4_pane_t3

0xee6d,	// (0x00018515) sat_plugin_idle_act4_pane_t4_ParamLimits

0xee6d,	// (0x00018515) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda3,	// (0x0001944b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda3,	// (0x0001944b) sat_plugin_idle_act4_pane_t

0x5f6e,	// (0x0000f616) popup_battery_window_ParamLimits

0x5f6e,	// (0x0000f616) popup_battery_window

0x7cd7,	// (0x0001137f) bg_popup_sub_pane_cp25_ParamLimits

0x7cd7,	// (0x0001137f) bg_popup_sub_pane_cp25

0xee80,	// (0x00018528) popup_battery_window_g1_ParamLimits

0xee80,	// (0x00018528) popup_battery_window_g1

0xee8c,	// (0x00018534) popup_battery_window_t1_ParamLimits

0xee8c,	// (0x00018534) popup_battery_window_t1

0xee9e,	// (0x00018546) popup_battery_window_t2_ParamLimits

0xee9e,	// (0x00018546) popup_battery_window_t2

0x0001,

0xfdac,	// (0x00019454) popup_battery_window_t_ParamLimits

0xfdac,	// (0x00019454) popup_battery_window_t

0x9679,	// (0x00012d21) midp_canvas_pane_ParamLimits

0x96ee,	// (0x00012d96) midp_keypad_pane_ParamLimits

0x96ee,	// (0x00012d96) midp_keypad_pane

0x99ef,	// (0x00013097) main_midp_pane_ParamLimits

0xc8a2,	// (0x00015f4a) signal_pane_g2_cp_ParamLimits

0xeebb,	// (0x00018563) aid_size_cell_midp_keypad_ParamLimits

0xeebb,	// (0x00018563) aid_size_cell_midp_keypad

0xeed5,	// (0x0001857d) midp_keyp_game_grid_pane_ParamLimits

0xeed5,	// (0x0001857d) midp_keyp_game_grid_pane

0xeef5,	// (0x0001859d) midp_keyp_rocker_pane_ParamLimits

0xeef5,	// (0x0001859d) midp_keyp_rocker_pane

0xef2e,	// (0x000185d6) midp_keyp_sk_left_pane_ParamLimits

0xef2e,	// (0x000185d6) midp_keyp_sk_left_pane

0xef88,	// (0x00018630) midp_keyp_sk_right_pane_ParamLimits

0xef88,	// (0x00018630) midp_keyp_sk_right_pane

0x7940,	// (0x00010fe8) bg_button_pane_cp03

0xefe2,	// (0x0001868a) midp_keyp_sk_left_pane_g1

0x7940,	// (0x00010fe8) bg_button_pane_cp04

0xefe2,	// (0x0001868a) midp_keyp_sk_right_pane_g1

0xce40,	// (0x000164e8) midp_keyp_rocker_pane_g1

0xefeb,	// (0x00018693) keyp_game_cell_pane_ParamLimits

0xefeb,	// (0x00018693) keyp_game_cell_pane

0x7940,	// (0x00010fe8) bg_button_pane_cp02

0xeffe,	// (0x000186a6) keyp_game_cell_pane_g1

0x5fb2,	// (0x0000f65a) popup_fep_vkb2_window_ParamLimits

0x5fb2,	// (0x0000f65a) popup_fep_vkb2_window

0x7182,	// (0x0001082a) aid_size_cell_vkb2_ParamLimits

0x7182,	// (0x0001082a) aid_size_cell_vkb2

0x71d6,	// (0x0001087e) popup_fep_vkb2_window_g1_ParamLimits

0x71d6,	// (0x0001087e) popup_fep_vkb2_window_g1

0x721e,	// (0x000108c6) vkb2_area_bottom_pane_ParamLimits

0x721e,	// (0x000108c6) vkb2_area_bottom_pane

0x726a,	// (0x00010912) vkb2_area_keypad_pane_ParamLimits

0x726a,	// (0x00010912) vkb2_area_keypad_pane

0x72ac,	// (0x00010954) vkb2_area_top_pane_ParamLimits

0x72ac,	// (0x00010954) vkb2_area_top_pane

0x7326,	// (0x000109ce) vkb2_top_entry_pane_ParamLimits

0x7326,	// (0x000109ce) vkb2_top_entry_pane

0x7350,	// (0x000109f8) vkb2_top_grid_left_pane_ParamLimits

0x7350,	// (0x000109f8) vkb2_top_grid_left_pane

0x736e,	// (0x00010a16) vkb2_top_grid_right_pane_ParamLimits

0x736e,	// (0x00010a16) vkb2_top_grid_right_pane

0x738c,	// (0x00010a34) vkb2_cell_keypad_pane_ParamLimits

0x738c,	// (0x00010a34) vkb2_cell_keypad_pane

0x745d,	// (0x00010b05) vkb2_area_bottom_grid_pane_ParamLimits

0x745d,	// (0x00010b05) vkb2_area_bottom_grid_pane

0x7483,	// (0x00010b2b) vkb2_area_bottom_pane_g1_ParamLimits

0x7483,	// (0x00010b2b) vkb2_area_bottom_pane_g1

0x74a7,	// (0x00010b4f) vkb2_area_bottom_pane_g2_ParamLimits

0x74a7,	// (0x00010b4f) vkb2_area_bottom_pane_g2

0x74d5,	// (0x00010b7d) vkb2_area_bottom_pane_g3_ParamLimits

0x74d5,	// (0x00010b7d) vkb2_area_bottom_pane_g3

0x0002,

0xfdb1,	// (0x00019459) vkb2_area_bottom_pane_g_ParamLimits

0xfdb1,	// (0x00019459) vkb2_area_bottom_pane_g

0x7536,	// (0x00010bde) vkb2_top_cell_left_pane_ParamLimits

0x7536,	// (0x00010bde) vkb2_top_cell_left_pane

0xf00f,	// (0x000186b7) vkb2_top_entry_pane_g1_ParamLimits

0xf00f,	// (0x000186b7) vkb2_top_entry_pane_g1

0xf01d,	// (0x000186c5) vkb2_top_entry_pane_t1_ParamLimits

0xf01d,	// (0x000186c5) vkb2_top_entry_pane_t1

0xf04f,	// (0x000186f7) vkb2_top_entry_pane_t2_ParamLimits

0xf04f,	// (0x000186f7) vkb2_top_entry_pane_t2

0xf081,	// (0x00018729) vkb2_top_entry_pane_t3_ParamLimits

0xf081,	// (0x00018729) vkb2_top_entry_pane_t3

0x0002,

0xfdb8,	// (0x00019460) vkb2_top_entry_pane_t_ParamLimits

0xfdb8,	// (0x00019460) vkb2_top_entry_pane_t

0x7583,	// (0x00010c2b) vkb2_top_grid_right_pane_g1_ParamLimits

0x7583,	// (0x00010c2b) vkb2_top_grid_right_pane_g1

0x7599,	// (0x00010c41) vkb2_top_grid_right_pane_g2_ParamLimits

0x7599,	// (0x00010c41) vkb2_top_grid_right_pane_g2

0x75b1,	// (0x00010c59) vkb2_top_grid_right_pane_g3_ParamLimits

0x75b1,	// (0x00010c59) vkb2_top_grid_right_pane_g3

0x75c9,	// (0x00010c71) vkb2_top_grid_right_pane_g4_ParamLimits

0x75c9,	// (0x00010c71) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbf,	// (0x00019467) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbf,	// (0x00019467) vkb2_top_grid_right_pane_g

0x75df,	// (0x00010c87) vkb2_top_cell_left_pane_g1

0x75f6,	// (0x00010c9e) vkb2_cell_keypad_pane_g1_ParamLimits

0x75f6,	// (0x00010c9e) vkb2_cell_keypad_pane_g1

0xf097,	// (0x0001873f) vkb2_cell_keypad_pane_t1_ParamLimits

0xf097,	// (0x0001873f) vkb2_cell_keypad_pane_t1

0x7604,	// (0x00010cac) vkb2_cell_bottom_grid_pane_ParamLimits

0x7604,	// (0x00010cac) vkb2_cell_bottom_grid_pane

0x763d,	// (0x00010ce5) vkb2_cell_bottom_grid_pane_g1

0xec50,	// (0x000182f8) aid_call2_pane_cp02

0xec58,	// (0x00018300) aid_call_pane_cp02

0xec60,	// (0x00018308) clock_digital_number_pane_cp10

0xec68,	// (0x00018310) clock_digital_number_pane_cp11

0xec70,	// (0x00018318) clock_digital_number_pane_cp12

0xec78,	// (0x00018320) clock_digital_number_pane_cp13

0xec80,	// (0x00018328) clock_digital_separator_pane_cp10

0x8ff9,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g1

0x8ff9,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g2

0xec88,	// (0x00018330) popup_clock_digital_analogue_window_cp2_g3

0x8ff9,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g4

0xec88,	// (0x00018330) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd74,	// (0x0001941c) popup_clock_digital_analogue_window_cp2_g

0xec90,	// (0x00018338) popup_clock_digital_analogue_window_cp2_t1

0xec9e,	// (0x00018346) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7f,	// (0x00019427) popup_clock_digital_analogue_window_cp2_t

0xce40,	// (0x000164e8) clock_digital_number_pane_cp10_g1

0xce40,	// (0x000164e8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5b,	// (0x00019203) clock_digital_number_pane_cp10_g

0xce40,	// (0x000164e8) clock_digital_separator_pane_cp10_g1

0xce40,	// (0x000164e8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5b,	// (0x00019203) clock_digital_separator_pane_cp10_g

0xeacc,	// (0x00018174) uniindi_top_pane_g3

0xeadd,	// (0x00018185) uniindi_top_pane_g4

0x7417,	// (0x00010abf) vkb2_row_keypad_pane_ParamLimits

0x7417,	// (0x00010abf) vkb2_row_keypad_pane

0x7659,	// (0x00010d01) vkb2_cell_t_keypad_pane_ParamLimits

0x7659,	// (0x00010d01) vkb2_cell_t_keypad_pane

0x7669,	// (0x00010d11) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7669,	// (0x00010d11) vkb2_cell_t_keypad_pane_cp08

0x767c,	// (0x00010d24) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x767c,	// (0x00010d24) vkb2_cell_t_keypad_pane_cp09

0x7690,	// (0x00010d38) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7690,	// (0x00010d38) vkb2_cell_t_keypad_pane_cp01

0x76a1,	// (0x00010d49) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x76a1,	// (0x00010d49) vkb2_cell_t_keypad_pane_cp02

0x76b2,	// (0x00010d5a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x76b2,	// (0x00010d5a) vkb2_cell_t_keypad_pane_cp03

0x76c3,	// (0x00010d6b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x76c3,	// (0x00010d6b) vkb2_cell_t_keypad_pane_cp04

0x76d4,	// (0x00010d7c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x76d4,	// (0x00010d7c) vkb2_cell_t_keypad_pane_cp05

0x76e5,	// (0x00010d8d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x76e5,	// (0x00010d8d) vkb2_cell_t_keypad_pane_cp06

0x76f6,	// (0x00010d9e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x76f6,	// (0x00010d9e) vkb2_cell_t_keypad_pane_cp07

0x7707,	// (0x00010daf) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7707,	// (0x00010daf) vkb2_cell_t_keypad_pane_cp10

0x6eb9,	// (0x00010561) vkb2_cell_t_keypad_pane_g1

0xf0ae,	// (0x00018756) vkb2_cell_t_keypad_pane_t1

0x5ea9,	// (0x0000f551) popup_grid_graphic2_window

0xf0c0,	// (0x00018768) aid_size_cell_graphic2_ParamLimits

0xf0c0,	// (0x00018768) aid_size_cell_graphic2

0xceb0,	// (0x00016558) bg_popup_window_pane_cp21_ParamLimits

0xceb0,	// (0x00016558) bg_popup_window_pane_cp21

0xf0ec,	// (0x00018794) graphic2_pages_pane_ParamLimits

0xf0ec,	// (0x00018794) graphic2_pages_pane

0xf132,	// (0x000187da) grid_graphic2_control_pane_ParamLimits

0xf132,	// (0x000187da) grid_graphic2_control_pane

0xf160,	// (0x00018808) grid_graphic2_pane_ParamLimits

0xf160,	// (0x00018808) grid_graphic2_pane

0xf1c0,	// (0x00018868) cell_graphic2_pane

0x7940,	// (0x00010fe8) main_comp_mode_pane

0xe2e9,	// (0x00017991) list_ai3_gene_pane_ParamLimits

0xe716,	// (0x00017dbe) bg_popup_window_pane_cp19_ParamLimits

0xe722,	// (0x00017dca) bg_touch_area_indi_pane_ParamLimits

0xe722,	// (0x00017dca) bg_touch_area_indi_pane

0xe738,	// (0x00017de0) bg_touch_area_indi_pane_cp01_ParamLimits

0xe738,	// (0x00017de0) bg_touch_area_indi_pane_cp01

0xe74e,	// (0x00017df6) bg_touch_area_indi_pane_cp02_ParamLimits

0xe74e,	// (0x00017df6) bg_touch_area_indi_pane_cp02

0xe766,	// (0x00017e0e) bg_touch_area_indi_pane_cp03_ParamLimits

0xe766,	// (0x00017e0e) bg_touch_area_indi_pane_cp03

0xe780,	// (0x00017e28) popup_slider_window_g1_ParamLimits

0xe79c,	// (0x00017e44) popup_slider_window_g2_ParamLimits

0xe7b8,	// (0x00017e60) popup_slider_window_g3_ParamLimits

0xfd09,	// (0x000193b1) popup_slider_window_g_ParamLimits

0xe814,	// (0x00017ebc) popup_slider_window_t1_ParamLimits

0xe888,	// (0x00017f30) small_volume_slider_vertical_pane_ParamLimits

0xf1c0,	// (0x00018868) cell_graphic2_pane_ParamLimits

0xf20f,	// (0x000188b7) bg_button_pane_cp10_ParamLimits

0xf20f,	// (0x000188b7) bg_button_pane_cp10

0xf222,	// (0x000188ca) bg_button_pane_cp11_ParamLimits

0xf222,	// (0x000188ca) bg_button_pane_cp11

0xf235,	// (0x000188dd) graphic2_pages_pane_g1_ParamLimits

0xf235,	// (0x000188dd) graphic2_pages_pane_g1

0xf250,	// (0x000188f8) graphic2_pages_pane_g2_ParamLimits

0xf250,	// (0x000188f8) graphic2_pages_pane_g2

0x0001,

0xfdcd,	// (0x00019475) graphic2_pages_pane_g_ParamLimits

0xfdcd,	// (0x00019475) graphic2_pages_pane_g

0xf268,	// (0x00018910) graphic2_pages_pane_t1_ParamLimits

0xf268,	// (0x00018910) graphic2_pages_pane_t1

0xf280,	// (0x00018928) cell_graphic2_control_pane_ParamLimits

0xf280,	// (0x00018928) cell_graphic2_control_pane

0xf29a,	// (0x00018942) cell_graphic2_pane_g1_ParamLimits

0xf29a,	// (0x00018942) cell_graphic2_pane_g1

0xf2a7,	// (0x0001894f) cell_graphic2_pane_g2_ParamLimits

0xf2a7,	// (0x0001894f) cell_graphic2_pane_g2

0xf2b4,	// (0x0001895c) cell_graphic2_pane_g3_ParamLimits

0xf2b4,	// (0x0001895c) cell_graphic2_pane_g3

0xf2c1,	// (0x00018969) cell_graphic2_pane_g4_ParamLimits

0xf2c1,	// (0x00018969) cell_graphic2_pane_g4

0xf2ce,	// (0x00018976) cell_graphic2_pane_g5_ParamLimits

0xf2ce,	// (0x00018976) cell_graphic2_pane_g5

0x0004,

0xfdd2,	// (0x0001947a) cell_graphic2_pane_g_ParamLimits

0xfdd2,	// (0x0001947a) cell_graphic2_pane_g

0xf2e9,	// (0x00018991) cell_graphic2_pane_t1_ParamLimits

0xf2e9,	// (0x00018991) cell_graphic2_pane_t1

0xa5e1,	// (0x00013c89) grid_highlight_pane_cp11_ParamLimits

0xa5e1,	// (0x00013c89) grid_highlight_pane_cp11

0x881b,	// (0x00011ec3) bg_button_pane_cp05

0xf2ff,	// (0x000189a7) cell_graphic2_control_pane_g1

0xce40,	// (0x000164e8) bg_touch_area_indi_pane_g1

0xf30c,	// (0x000189b4) aid_cmod_rocker_key_size

0xf316,	// (0x000189be) aid_cmode_itu_key_size

0xf320,	// (0x000189c8) main_cmode_video_pane

0xf32a,	// (0x000189d2) main_comp_mode_itu_pane

0xf336,	// (0x000189de) main_comp_mode_rocker_pane

0xf342,	// (0x000189ea) cell_cmode_rocker_pane_ParamLimits

0xf342,	// (0x000189ea) cell_cmode_rocker_pane

0xf354,	// (0x000189fc) cell_cmode_itu_pane_ParamLimits

0xf354,	// (0x000189fc) cell_cmode_itu_pane

0x881b,	// (0x00011ec3) bg_button_pane_cp06_ParamLimits

0x881b,	// (0x00011ec3) bg_button_pane_cp06

0xd0e0,	// (0x00016788) cell_cmode_rocker_pane_g1_ParamLimits

0xd0e0,	// (0x00016788) cell_cmode_rocker_pane_g1

0xe92c,	// (0x00017fd4) cell_cmode_rocker_pane_g2_ParamLimits

0xe92c,	// (0x00017fd4) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x00019485) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x00019485) cell_cmode_rocker_pane_g

0x7940,	// (0x00010fe8) bg_button_pane_cp07

0xf369,	// (0x00018a11) cell_cmode_itu_pane_g1

0xf372,	// (0x00018a1a) cell_cmode_itu_pane_t1

0xf380,	// (0x00018a28) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x0001948a) cell_cmode_itu_pane_t

0xeb4f,	// (0x000181f7) aid_touch_ctrl_left

0xeb57,	// (0x000181ff) aid_touch_ctrl_right

0x7940,	// (0x00010fe8) compa_mode_pane

0xf38e,	// (0x00018a36) aid_cmod_rocker_key_size_cp

0xf398,	// (0x00018a40) aid_cmode_itu_key_size_cp

0xf3a2,	// (0x00018a4a) compa_mode_pane_g1

0xf3aa,	// (0x00018a52) compa_mode_pane_g2

0xf3b2,	// (0x00018a5a) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x0001948f) compa_mode_pane_g

0xf3ba,	// (0x00018a62) main_comp_mode_itu_pane_cp

0xf3c2,	// (0x00018a6a) main_comp_mode_rocker_pane_cp

0xf3ca,	// (0x00018a72) cell_cmode_itu_pane_cp_ParamLimits

0xf3ca,	// (0x00018a72) cell_cmode_itu_pane_cp

0xf3df,	// (0x00018a87) cell_cmode_rocker_pane_cp_ParamLimits

0xf3df,	// (0x00018a87) cell_cmode_rocker_pane_cp

0x881b,	// (0x00011ec3) bg_button_pane_cp06_cp_ParamLimits

0x881b,	// (0x00011ec3) bg_button_pane_cp06_cp

0xd0e0,	// (0x00016788) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd0e0,	// (0x00016788) cell_cmode_rocker_pane_g1_cp

0xce40,	// (0x000164e8) cell_cmode_rocker_pane_g2_cp

0x7940,	// (0x00010fe8) bg_button_pane_cp07_cp

0xbace,	// (0x00015176) cell_cmode_itu_pane_g1_cp

0xf3f1,	// (0x00018a99) cell_cmode_itu_pane_t1_cp

0xf3f1,	// (0x00018a99) cell_cmode_itu_pane_t2_cp

0xbabb,	// (0x00015163) settings_code_pane_cp2

0x7a34,	// (0x000110dc) bg_popup_window_pane_cp3_ParamLimits

0x7eb1,	// (0x00011559) heading_pane_cp3_ParamLimits

0x7ebd,	// (0x00011565) listscroll_popup_graphic_pane_ParamLimits

0x6c62,	// (0x0001030a) fep_hwr_aid_pane_ParamLimits

0x70da,	// (0x00010782) aid_touch_sctrl_top_ParamLimits

0x70f5,	// (0x0001079d) sctrl_sk_top_pane_g1_ParamLimits

0x6eb9,	// (0x00010561) sctrl_sk_top_pane_g2_ParamLimits

0xfd22,	// (0x000193ca) sctrl_sk_top_pane_g_ParamLimits

0x7102,	// (0x000107aa) sctrl_sk_top_pane_t1_ParamLimits

0x70da,	// (0x00010782) aid_touch_sctrl_bottom_ParamLimits

0x7102,	// (0x000107aa) sctrl_sk_bottom_pane_t1_ParamLimits

0xea98,	// (0x00018140) aid_area_touch_clock

0x72ee,	// (0x00010996) aid_vkb2_area_top_pane_cell_ParamLimits

0x72ee,	// (0x00010996) aid_vkb2_area_top_pane_cell

0x7439,	// (0x00010ae1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7439,	// (0x00010ae1) aid_vkb2_area_bottom_pane_cell

0xf007,	// (0x000186af) popup_char_count_window

0xf3ff,	// (0x00018aa7) popup_char_count_window_g1

0xf408,	// (0x00018ab0) popup_char_count_window_g2

0xf411,	// (0x00018ab9) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x00019496) popup_char_count_window_g

0xf41a,	// (0x00018ac2) popup_char_count_window_t1

0x71b4,	// (0x0001085c) popup_fep_char_preview_window_ParamLimits

0x71b4,	// (0x0001085c) popup_fep_char_preview_window

0x730c,	// (0x000109b4) vkb2_top_candi_pane_ParamLimits

0x730c,	// (0x000109b4) vkb2_top_candi_pane

0xf428,	// (0x00018ad0) cell_vkb2_top_candi_pane_ParamLimits

0xf428,	// (0x00018ad0) cell_vkb2_top_candi_pane

0x771c,	// (0x00010dc4) bg_popup_fep_char_preview_window_ParamLimits

0x771c,	// (0x00010dc4) bg_popup_fep_char_preview_window

0x772a,	// (0x00010dd2) popup_fep_char_preview_window_t1_ParamLimits

0x772a,	// (0x00010dd2) popup_fep_char_preview_window_t1

0xf475,	// (0x00018b1d) bg_popup_fep_char_preview_window_g1

0xf47d,	// (0x00018b25) bg_popup_fep_char_preview_window_g2

0xf485,	// (0x00018b2d) bg_popup_fep_char_preview_window_g3

0xf4be,	// (0x00018b66) bg_popup_fep_char_preview_window_g4

0xf4c6,	// (0x00018b6e) bg_popup_fep_char_preview_window_g5

0x7764,	// (0x00010e0c) bg_popup_fep_char_preview_window_g6

0xf48d,	// (0x00018b35) bg_popup_fep_char_preview_window_g7

0xf495,	// (0x00018b3d) bg_popup_fep_char_preview_window_g8

0xf4ce,	// (0x00018b76) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x0001949d) bg_popup_fep_char_preview_window_g

0x6eb9,	// (0x00010561) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6eb9,	// (0x00010561) cell_vkb2_top_candi_pane_g1

0x6ec7,	// (0x0001056f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6ec7,	// (0x0001056f) cell_vkb2_top_candi_pane_g2

0xf49d,	// (0x00018b45) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf49d,	// (0x00018b45) cell_vkb2_top_candi_pane_g3

0x776c,	// (0x00010e14) cell_vkb2_top_candi_pane_g4_ParamLimits

0x776c,	// (0x00010e14) cell_vkb2_top_candi_pane_g4

0xd712,	// (0x00016dba) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd712,	// (0x00016dba) cell_vkb2_top_candi_pane_g5

0x778d,	// (0x00010e35) cell_vkb2_top_candi_pane_g6_ParamLimits

0x778d,	// (0x00010e35) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x000194b0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x000194b0) cell_vkb2_top_candi_pane_g

0x779b,	// (0x00010e43) cell_vkb2_top_candi_pane_t1

0x6ac2,	// (0x0001016a) aid_size_touch_slider_mark_ParamLimits

0x6ac2,	// (0x0001016a) aid_size_touch_slider_mark

0xf122,	// (0x000187ca) grid_graphic2_catg_pane_ParamLimits

0xf122,	// (0x000187ca) grid_graphic2_catg_pane

0xf19c,	// (0x00018844) popup_grid_graphic2_window_t1_ParamLimits

0xf19c,	// (0x00018844) popup_grid_graphic2_window_t1

0xf1ae,	// (0x00018856) popup_grid_graphic2_window_t2_ParamLimits

0xf1ae,	// (0x00018856) popup_grid_graphic2_window_t2

0x0001,

0xfdc8,	// (0x00019470) popup_grid_graphic2_window_t_ParamLimits

0xfdc8,	// (0x00019470) popup_grid_graphic2_window_t

0x881b,	// (0x00011ec3) bg_button_pane_cp05_ParamLimits

0xf2ff,	// (0x000189a7) cell_graphic2_control_pane_g1_ParamLimits

0xf4d6,	// (0x00018b7e) cell_graphic2_catg_pane_ParamLimits

0xf4d6,	// (0x00018b7e) cell_graphic2_catg_pane

0x7940,	// (0x00010fe8) bg_button_pane_cp12

0xf4e8,	// (0x00018b90) cell_graphic2_catg_pane_g1

0xea64,	// (0x0001810c) cell_tb_ext_pane_t1_ParamLimits

0x7556,	// (0x00010bfe) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7556,	// (0x00010bfe) vkb2_top_cell_right_narrow_pane

0x756e,	// (0x00010c16) vkb2_top_cell_right_wide_pane_ParamLimits

0x756e,	// (0x00010c16) vkb2_top_cell_right_wide_pane

0x6c54,	// (0x000102fc) bg_vkb2_func_pane_ParamLimits

0x6c54,	// (0x000102fc) bg_vkb2_func_pane

0x75df,	// (0x00010c87) vkb2_top_cell_left_pane_g1_ParamLimits

0x6c54,	// (0x000102fc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6c54,	// (0x000102fc) bg_vkb2_fuc_pane_cp03

0x763d,	// (0x00010ce5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa4cf,	// (0x00013b77) bg_vkb2_func_pane_g1

0xa4d7,	// (0x00013b7f) bg_vkb2_func_pane_g2

0xa4e7,	// (0x00013b8f) bg_vkb2_func_pane_g3

0xa4df,	// (0x00013b87) bg_vkb2_func_pane_g4

0xa4ef,	// (0x00013b97) bg_vkb2_func_pane_g5

0xa4f7,	// (0x00013b9f) bg_vkb2_func_pane_g6

0xa4ff,	// (0x00013ba7) bg_vkb2_func_pane_g7

0xa507,	// (0x00013baf) bg_vkb2_func_pane_g8

0xa4c7,	// (0x00013b6f) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x000194bd) bg_vkb2_func_pane_g

0x6c54,	// (0x000102fc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6c54,	// (0x000102fc) bg_vkb2_fuc_pane_cp01

0x75df,	// (0x00010c87) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x75df,	// (0x00010c87) vkb2_top_cell_right_wide_pane_g1

0x6c54,	// (0x000102fc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6c54,	// (0x000102fc) bg_vkb2_fuc_pane_cp02

0x763d,	// (0x00010ce5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x763d,	// (0x00010ce5) vkb2_top_cell_right_narrow_pane_g1

0xe69a,	// (0x00017d42) aid_touch_area_decrease_ParamLimits

0xe69a,	// (0x00017d42) aid_touch_area_decrease

0xe6b8,	// (0x00017d60) aid_touch_area_increase_ParamLimits

0xe6b8,	// (0x00017d60) aid_touch_area_increase

0xe6c4,	// (0x00017d6c) aid_touch_area_mute_ParamLimits

0xe6c4,	// (0x00017d6c) aid_touch_area_mute

0xe6e8,	// (0x00017d90) aid_touch_area_slider_ParamLimits

0xe6e8,	// (0x00017d90) aid_touch_area_slider

0xe7d4,	// (0x00017e7c) popup_slider_window_g4_ParamLimits

0xe7d4,	// (0x00017e7c) popup_slider_window_g4

0xe7e0,	// (0x00017e88) popup_slider_window_g5_ParamLimits

0xe7e0,	// (0x00017e88) popup_slider_window_g5

0xe802,	// (0x00017eaa) popup_slider_window_g6_ParamLimits

0xe802,	// (0x00017eaa) popup_slider_window_g6

0xe842,	// (0x00017eea) popup_slider_window_t2_ParamLimits

0xe842,	// (0x00017eea) popup_slider_window_t2

0x0001,

0xfd16,	// (0x000193be) popup_slider_window_t_ParamLimits

0xfd16,	// (0x000193be) popup_slider_window_t

0xe85a,	// (0x00017f02) slider_pane_ParamLimits

0xe85a,	// (0x00017f02) slider_pane

0xf4f1,	// (0x00018b99) slider_pane_g1_ParamLimits

0xf4f1,	// (0x00018b99) slider_pane_g1

0xf505,	// (0x00018bad) slider_pane_g2_ParamLimits

0xf505,	// (0x00018bad) slider_pane_g2

0xf51b,	// (0x00018bc3) slider_pane_g3_ParamLimits

0xf51b,	// (0x00018bc3) slider_pane_g3

0x0003,

0xfe28,	// (0x000194d0) slider_pane_g_ParamLimits

0xfe28,	// (0x000194d0) slider_pane_g

0x9ec7,	// (0x0001356f) popup_tb_float_extension_window_ParamLimits

0x9ec7,	// (0x0001356f) popup_tb_float_extension_window

0xf547,	// (0x00018bef) aid_size_cell_tb_float_ext

0x7940,	// (0x00010fe8) bg_popup_sub_window_cp28

0xf553,	// (0x00018bfb) grid_tb_float_ext_pane

0xf55d,	// (0x00018c05) cell_tb_float_ext_pane_ParamLimits

0xf55d,	// (0x00018c05) cell_tb_float_ext_pane

0xf577,	// (0x00018c1f) cell_tb_float_ext_pane_g1

0xf580,	// (0x00018c28) grid_highlight_pane_cp12

0x6da3,	// (0x0001044b) cell_last_hwr_side_pane_ParamLimits

0x6da3,	// (0x0001044b) cell_last_hwr_side_pane

0xce40,	// (0x000164e8) cell_last_hwr_side_pane_g1

0xf589,	// (0x00018c31) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x000194d9) cell_last_hwr_side_pane_g

0x7505,	// (0x00010bad) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7505,	// (0x00010bad) vkb2_area_bottom_space_btn_pane

0x6eb9,	// (0x00010561) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf0ae,	// (0x00018756) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x779b,	// (0x00010e43) cell_vkb2_top_candi_pane_t1_ParamLimits

0x77ba,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x77ba,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g1

0x77f4,	// (0x00010e9c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x77f4,	// (0x00010e9c) vkb2_area_bottom_space_btn_pane_g2

0x782a,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x782a,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x000194de) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x000194de) vkb2_area_bottom_space_btn_pane_g

0x6d17,	// (0x000103bf) cel_fep_hwr_func_pane_ParamLimits

0x6d17,	// (0x000103bf) cel_fep_hwr_func_pane

0x6d53,	// (0x000103fb) cell_hwr_side_button_pane_ParamLimits

0x6d53,	// (0x000103fb) cell_hwr_side_button_pane

0xea98,	// (0x00018140) aid_area_touch_clock_ParamLimits

0x7cd7,	// (0x0001137f) bg_uniindi_top_pane_ParamLimits

0xeaaa,	// (0x00018152) uniindi_top_pane_g1_ParamLimits

0xeac0,	// (0x00018168) uniindi_top_pane_g2_ParamLimits

0xeacc,	// (0x00018174) uniindi_top_pane_g3_ParamLimits

0xeadd,	// (0x00018185) uniindi_top_pane_g4_ParamLimits

0xfd4e,	// (0x000193f6) uniindi_top_pane_g_ParamLimits

0xeaea,	// (0x00018192) uniindi_top_pane_t1_ParamLimits

0x7cd7,	// (0x0001137f) bg_vkb2_func_pane_cp01_ParamLimits

0x7cd7,	// (0x0001137f) bg_vkb2_func_pane_cp01

0x0027,	// (0x000096cf) cel_fep_hwr_func_pane_g1_ParamLimits

0x0027,	// (0x000096cf) cel_fep_hwr_func_pane_g1

0x7cd7,	// (0x0001137f) bg_vkb2_func_pane_cp02_ParamLimits

0x7cd7,	// (0x0001137f) bg_vkb2_func_pane_cp02

0x0027,	// (0x000096cf) cell_hwr_side_button_pane_g1_ParamLimits

0x0027,	// (0x000096cf) cell_hwr_side_button_pane_g1

0xa30e,	// (0x000139b6) status_pane_g4_ParamLimits

0xa30e,	// (0x000139b6) status_pane_g4

0xa328,	// (0x000139d0) status_pane_t1

0xcb79,	// (0x00016221) form2_midp_gauge_slider_cont_pane

0xcb81,	// (0x00016229) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb93,	// (0x0001623b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcba5,	// (0x0001624d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0e,	// (0x000191b6) form2_midp_gauge_slider_pane_t_ParamLimits

0xcbb7,	// (0x0001625f) form2_midp_slider_pane_ParamLimits

0x7174,	// (0x0001081c) aid_size_cell_func_vkb2_ParamLimits

0x7174,	// (0x0001081c) aid_size_cell_func_vkb2

0xf533,	// (0x00018bdb) slider_pane_g4_ParamLimits

0xf533,	// (0x00018bdb) slider_pane_g4

0x7874,	// (0x00010f1c) form2_midp_gauge_slider_pane_t2_cp01

0x7882,	// (0x00010f2a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7882,	// (0x00010f2a) form2_midp_gauge_slider_pane_t3_cp01

0x789f,	// (0x00010f47) form2_midp_slider_pane_cp01

0x7940,	// (0x00010fe8) navi_smil_pane

0x0094,	// (0x0000973c) navi_smil_pane_g1

0x009c,	// (0x00009744) navi_smil_pane_t1

0x0069,	// (0x00009711) form2_midp_slider_pane_g1

0x0072,	// (0x0000971a) form2_midp_slider_pane_g2

0x007a,	// (0x00009722) form2_midp_slider_pane_g3

0x0069,	// (0x00009711) form2_midp_slider_pane_g4

0x0082,	// (0x0000972a) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x000194e7) form2_midp_slider_pane_g

0x7864,	// (0x00010f0c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7864,	// (0x00010f0c) vkb2_area_bottom_space_btn_pane_g4

0xa144,	// (0x000137ec) lc0_navi_pane_ParamLimits

0xa144,	// (0x000137ec) lc0_navi_pane

0xa1ba,	// (0x00013862) lc0_stat_indi_pane_ParamLimits

0xa1ba,	// (0x00013862) lc0_stat_indi_pane

0xa1d1,	// (0x00013879) ls0_title_pane_ParamLimits

0xa1d1,	// (0x00013879) ls0_title_pane

0x881b,	// (0x00011ec3) bg_popup_sub_pane_cp14_ParamLimits

0xea7f,	// (0x00018127) list_uniindi_pane_ParamLimits

0xea8b,	// (0x00018133) uniindi_top_pane_ParamLimits

0xeb27,	// (0x000181cf) list_single_uniindi_pane_g1_ParamLimits

0xeb3a,	// (0x000181e2) list_single_uniindi_pane_t1_ParamLimits

0x78a8,	// (0x00010f50) lc0_stat_clock_pane_ParamLimits

0x78a8,	// (0x00010f50) lc0_stat_clock_pane

0x00c4,	// (0x0000976c) lc0_stat_indi_pane_g1_ParamLimits

0x00c4,	// (0x0000976c) lc0_stat_indi_pane_g1

0x00b7,	// (0x0000975f) lc0_stat_indi_pane_g2_ParamLimits

0x00b7,	// (0x0000975f) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x000194f2) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x000194f2) lc0_stat_indi_pane_g

0x78b5,	// (0x00010f5d) lc0_uni_indicator_pane_ParamLimits

0x78b5,	// (0x00010f5d) lc0_uni_indicator_pane

0x00de,	// (0x00009786) ls0_title_pane_g1_ParamLimits

0x00de,	// (0x00009786) ls0_title_pane_g1

0x00f2,	// (0x0000979a) ls0_title_pane_t1_ParamLimits

0x00f2,	// (0x0000979a) ls0_title_pane_t1

0x78c2,	// (0x00010f6a) lc0_uni_indicator_pane_g1_ParamLimits

0x78c2,	// (0x00010f6a) lc0_uni_indicator_pane_g1

0x013c,	// (0x000097e4) lc0_stat_clock_pane_t1

0x7940,	// (0x00010fe8) main_ai5_pane

0x014a,	// (0x000097f2) ai5_sk_pane_ParamLimits

0x014a,	// (0x000097f2) ai5_sk_pane

0x0157,	// (0x000097ff) cell_ai5_widget_pane_ParamLimits

0x0157,	// (0x000097ff) cell_ai5_widget_pane

0x01d9,	// (0x00009881) aid_size_cell_widget_grid

0x01eb,	// (0x00009893) bg_ai5_widget_pane_ParamLimits

0x01eb,	// (0x00009893) bg_ai5_widget_pane

0x0213,	// (0x000098bb) cell_ai5_widget_pane_g2

0x0223,	// (0x000098cb) cell_ai5_widget_pane_g3

0x0237,	// (0x000098df) cell_ai5_widget_pane_g4

0x0243,	// (0x000098eb) cell_ai5_widget_pane_g5

0x024f,	// (0x000098f7) cell_ai5_widget_pane_g6

0x025b,	// (0x00009903) cell_ai5_widget_pane_g7

0x02a3,	// (0x0000994b) cell_ai5_widget_pane_t1_ParamLimits

0x02a3,	// (0x0000994b) cell_ai5_widget_pane_t1

0x02c0,	// (0x00009968) cell_ai5_widget_pane_t2_ParamLimits

0x02c0,	// (0x00009968) cell_ai5_widget_pane_t2

0x02d8,	// (0x00009980) cell_ai5_widget_pane_t3_ParamLimits

0x02d8,	// (0x00009980) cell_ai5_widget_pane_t3

0x02f0,	// (0x00009998) cell_ai5_widget_pane_t4_ParamLimits

0x02f0,	// (0x00009998) cell_ai5_widget_pane_t4

0x030a,	// (0x000099b2) cell_ai5_widget_pane_t5_ParamLimits

0x030a,	// (0x000099b2) cell_ai5_widget_pane_t5

0x0329,	// (0x000099d1) cell_ai5_widget_pane_t6_ParamLimits

0x0329,	// (0x000099d1) cell_ai5_widget_pane_t6

0x033b,	// (0x000099e3) cell_ai5_widget_pane_t7_ParamLimits

0x033b,	// (0x000099e3) cell_ai5_widget_pane_t7

0x0354,	// (0x000099fc) cell_ai5_widget_pane_t8_ParamLimits

0x0354,	// (0x000099fc) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x0001950c) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x0001950c) cell_ai5_widget_pane_t

0x039c,	// (0x00009a44) grid_ai5_widget_pane

0x881b,	// (0x00011ec3) highlight_cell_ai5_widget_pane_ParamLimits

0x881b,	// (0x00011ec3) highlight_cell_ai5_widget_pane

0x03b4,	// (0x00009a5c) ai5_sk_left_pane

0x03be,	// (0x00009a66) ai5_sk_middle_pane

0x03c8,	// (0x00009a70) ai5_sk_right_pane

0x03d2,	// (0x00009a7a) bg_ai5_widget_pane_g1_ParamLimits

0x03d2,	// (0x00009a7a) bg_ai5_widget_pane_g1

0x03de,	// (0x00009a86) bg_ai5_widget_pane_g2_ParamLimits

0x03de,	// (0x00009a86) bg_ai5_widget_pane_g2

0x03ea,	// (0x00009a92) bg_ai5_widget_pane_g3_ParamLimits

0x03ea,	// (0x00009a92) bg_ai5_widget_pane_g3

0x03f6,	// (0x00009a9e) bg_ai5_widget_pane_g4_ParamLimits

0x03f6,	// (0x00009a9e) bg_ai5_widget_pane_g4

0x0402,	// (0x00009aaa) bg_ai5_widget_pane_g5_ParamLimits

0x0402,	// (0x00009aaa) bg_ai5_widget_pane_g5

0x040e,	// (0x00009ab6) bg_ai5_widget_pane_g6_ParamLimits

0x040e,	// (0x00009ab6) bg_ai5_widget_pane_g6

0x041a,	// (0x00009ac2) bg_ai5_widget_pane_g7_ParamLimits

0x041a,	// (0x00009ac2) bg_ai5_widget_pane_g7

0x0426,	// (0x00009ace) bg_ai5_widget_pane_g8_ParamLimits

0x0426,	// (0x00009ace) bg_ai5_widget_pane_g8

0x0432,	// (0x00009ada) bg_ai5_widget_pane_g9_ParamLimits

0x0432,	// (0x00009ada) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x00019521) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x00019521) bg_ai5_widget_pane_g

0x045a,	// (0x00009b02) cell_shortcut_ai5_widget_pane_ParamLimits

0x045a,	// (0x00009b02) cell_shortcut_ai5_widget_pane

0x7b17,	// (0x000111bf) bg_cell_shortcut_ai5_widget_pane

0x046c,	// (0x00009b14) cell_grid_ai5_widget_pane_g1

0x0475,	// (0x00009b1d) highlight_cell_shortcut_ai5_widget_pane

0xa4cf,	// (0x00013b77) ai5_sk_left_pane_g1

0x047d,	// (0x00009b25) ai5_sk_left_pane_g2

0x0485,	// (0x00009b2d) ai5_sk_left_pane_g3

0x048d,	// (0x00009b35) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x00019534) ai5_sk_left_pane_g

0x0495,	// (0x00009b3d) ai5_sk_left_pane_t1

0xa4d7,	// (0x00013b7f) ai5_sk_right_pane_g1

0x04a3,	// (0x00009b4b) ai5_sk_right_pane_g2

0x04ab,	// (0x00009b53) ai5_sk_right_pane_g3

0x04b3,	// (0x00009b5b) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x0001953d) ai5_sk_right_pane_g

0x04bb,	// (0x00009b63) ai5_sk_right_pane_t1

0xa4d7,	// (0x00013b7f) ai5_sk_middle_pane_g1

0xa4cf,	// (0x00013b77) ai5_sk_middle_pane_g2

0xa4ef,	// (0x00013b97) ai5_sk_middle_pane_g3

0x04ab,	// (0x00009b53) ai5_sk_middle_pane_g4

0x0485,	// (0x00009b2d) ai5_sk_middle_pane_g5

0x04c9,	// (0x00009b71) ai5_sk_middle_pane_g6

0x04d1,	// (0x00009b79) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x00019546) ai5_sk_middle_pane_g

0x9fd4,	// (0x0001367c) aid_touch_area_size_lc0_ParamLimits

0x9fd4,	// (0x0001367c) aid_touch_area_size_lc0

0x6ee8,	// (0x00010590) cell_hwr_candidate_pane_t1_ParamLimits

0x9ff0,	// (0x00013698) aid_touch_navi_pane

0xa2b8,	// (0x00013960) status_dt_navi_pane_ParamLimits

0xa2b8,	// (0x00013960) status_dt_navi_pane

0xa2c5,	// (0x0001396d) status_dt_sta_pane_ParamLimits

0xa2c5,	// (0x0001396d) status_dt_sta_pane

0x04d9,	// (0x00009b81) dt_sta_controll_pane

0x04e6,	// (0x00009b8e) dt_sta_indi_pane

0x04f7,	// (0x00009b9f) dt_sta_title_pane

0x7cd7,	// (0x0001137f) bg_dt_sta_indi_pane_ParamLimits

0x7cd7,	// (0x0001137f) bg_dt_sta_indi_pane

0x050a,	// (0x00009bb2) dt_sta_battery_pane

0x0512,	// (0x00009bba) dt_sta_indi_pane_g1

0x051b,	// (0x00009bc3) dt_sta_indi_pane_g2

0x0524,	// (0x00009bcc) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x00019555) dt_sta_indi_pane_g

0x052d,	// (0x00009bd5) dt_sta_signal_pane

0x881b,	// (0x00011ec3) bg_dt_sta_title_pane_ParamLimits

0x881b,	// (0x00011ec3) bg_dt_sta_title_pane

0x0536,	// (0x00009bde) dt_sta_title_pane_g1

0x053e,	// (0x00009be6) dt_sta_title_pane_t1_ParamLimits

0x053e,	// (0x00009be6) dt_sta_title_pane_t1

0x7940,	// (0x00010fe8) bg_dt_sta_control_pane

0x0553,	// (0x00009bfb) dt_sta_controll_pane_g1

0x055c,	// (0x00009c04) bg_dt_sta_title_pane_g1

0x0565,	// (0x00009c0d) bg_dt_sta_title_pane_g2

0x056e,	// (0x00009c16) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x0001955c) bg_dt_sta_title_pane_g

0xce40,	// (0x000164e8) bg_dt_sta_indi_pane_g1

0x0577,	// (0x00009c1f) dt_sta_signal_pane_g1

0x057f,	// (0x00009c27) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x00019563) dt_sta_signal_pane_g

0x0587,	// (0x00009c2f) dt_sta_battery_pane_g1

0x0590,	// (0x00009c38) dt_sta_battery_pane_t1

0xce40,	// (0x000164e8) bg_dt_sta_control_pane_g1

0x90e0,	// (0x00012788) fep_china_uni_eep_pane

0x90e8,	// (0x00012790) fep_china_uni_entry_pane_ParamLimits

0x90f8,	// (0x000127a0) popup_fep_china_uni_window_g1_ParamLimits

0x9108,	// (0x000127b0) popup_fep_china_uni_window_g2_ParamLimits

0x9108,	// (0x000127b0) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x00018e00) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x00018e00) popup_fep_china_uni_window_g

0x059f,	// (0x00009c47) fep_china_uni_eep_pane_g1

0x05a7,	// (0x00009c4f) fep_china_uni_eep_pane_t1

0x008b,	// (0x00009733) aid_touch_area_size_smil_player

0xa13c,	// (0x000137e4) lc0_clock_pane

0xa31c,	// (0x000139c4) status_pane_g5_ParamLimits

0xa31c,	// (0x000139c4) status_pane_g5

0x9b8c,	// (0x00013234) popup_keymap_window

0xa2da,	// (0x00013982) status_icon_pane

0x0223,	// (0x000098cb) cell_ai5_widget_pane_g3_ParamLimits

0x0237,	// (0x000098df) cell_ai5_widget_pane_g4_ParamLimits

0x0243,	// (0x000098eb) cell_ai5_widget_pane_g5_ParamLimits

0x0267,	// (0x0000990f) cell_ai5_widget_pane_g8_ParamLimits

0x0267,	// (0x0000990f) cell_ai5_widget_pane_g8

0x027b,	// (0x00009923) cell_ai5_widget_pane_g9_ParamLimits

0x027b,	// (0x00009923) cell_ai5_widget_pane_g9

0x028f,	// (0x00009937) cell_ai5_widget_pane_g10_ParamLimits

0x028f,	// (0x00009937) cell_ai5_widget_pane_g10

0x05b6,	// (0x00009c5e) status_icon_pane_g1

0x7940,	// (0x00010fe8) bg_popup_sub_pane_cp13

0x05be,	// (0x00009c66) popup_keymap_window_t1

0x993c,	// (0x00012fe4) control_pane_g6_ParamLimits

0x993c,	// (0x00012fe4) control_pane_g6

0x9949,	// (0x00012ff1) control_pane_g7_ParamLimits

0x9949,	// (0x00012ff1) control_pane_g7

0x9956,	// (0x00012ffe) control_pane_g8_ParamLimits

0x9956,	// (0x00012ffe) control_pane_g8

0x04d9,	// (0x00009b81) dt_sta_controll_pane_ParamLimits

0x04e6,	// (0x00009b8e) dt_sta_indi_pane_ParamLimits

0x04f7,	// (0x00009b9f) dt_sta_title_pane_ParamLimits

0x81f2,	// (0x0001189a) aid_size_touch_scroll_bar_cale

0x5f82,	// (0x0000f62a) popup_discreet_window_ParamLimits

0x5f82,	// (0x0000f62a) popup_discreet_window

0x600a,	// (0x0000f6b2) popup_sk_window

0xabcb,	// (0x00014273) bg_popup_sub_pane_cp28_ParamLimits

0xabcb,	// (0x00014273) bg_popup_sub_pane_cp28

0x05cc,	// (0x00009c74) popup_discreet_window_g1_ParamLimits

0x05cc,	// (0x00009c74) popup_discreet_window_g1

0x05ec,	// (0x00009c94) popup_discreet_window_t1_ParamLimits

0x05ec,	// (0x00009c94) popup_discreet_window_t1

0x060a,	// (0x00009cb2) popup_discreet_window_t2_ParamLimits

0x060a,	// (0x00009cb2) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x00019568) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x00019568) popup_discreet_window_t

0x78d6,	// (0x00010f7e) popup_sk_window_g1

0x78e0,	// (0x00010f88) popup_sk_window_g2

0x0001,

0xfec7,	// (0x0001956f) popup_sk_window_g

0x067e,	// (0x00009d26) popup_sk_window_t1

0x0670,	// (0x00009d18) popup_sk_window_t1_copy1

0x0213,	// (0x000098bb) cell_ai5_widget_pane_g2_ParamLimits

0x0366,	// (0x00009a0e) cell_ai5_widget_pane_t9_ParamLimits

0x0366,	// (0x00009a0e) cell_ai5_widget_pane_t9

0x7940,	// (0x00010fe8) main_fep_fshwr2_pane

0x068c,	// (0x00009d34) aid_fshwr2_btn_pane

0x0694,	// (0x00009d3c) aid_fshwr2_syb_pane

0x069c,	// (0x00009d44) aid_fshwr2_txt_pane

0x06a4,	// (0x00009d4c) fshwr2_func_candi_pane

0x06b0,	// (0x00009d58) fshwr2_hwr_syb_pane

0x06bc,	// (0x00009d64) fshwr2_icf_pane

0x7940,	// (0x00010fe8) fshwr2_icf_bg_pane

0x06da,	// (0x00009d82) fshwr2_icf_pane_t1_ParamLimits

0x06da,	// (0x00009d82) fshwr2_icf_pane_t1

0xce40,	// (0x000164e8) fshwr2_func_candi_pane_g1

0x06f1,	// (0x00009d99) fshwr2_func_candi_row_pane_ParamLimits

0x06f1,	// (0x00009d99) fshwr2_func_candi_row_pane

0x0702,	// (0x00009daa) cell_fshwr2_syb_pane_ParamLimits

0x0702,	// (0x00009daa) cell_fshwr2_syb_pane

0xd0e0,	// (0x00016788) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd0e0,	// (0x00016788) fshwr2_hwr_syb_pane_g1

0x7940,	// (0x00010fe8) bg_popup_call_pane_cp01

0x071c,	// (0x00009dc4) fshwr2_func_candi_cell_pane_ParamLimits

0x071c,	// (0x00009dc4) fshwr2_func_candi_cell_pane

0x074d,	// (0x00009df5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x074d,	// (0x00009df5) fshwr2_func_candi_cell_bg_pane

0x0767,	// (0x00009e0f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x0767,	// (0x00009e0f) fshwr2_func_candi_cell_pane_g1

0x078f,	// (0x00009e37) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x078f,	// (0x00009e37) fshwr2_func_candi_cell_pane_t1

0x7940,	// (0x00010fe8) bg_button_pane_cp08

0x9665,	// (0x00012d0d) cell_fshwr2_syb_bg_pane

0x07a2,	// (0x00009e4a) cell_fshwr2_syb_bg_pane_g1

0x07aa,	// (0x00009e52) cell_fshwr2_syb_bg_pane_t1

0x881b,	// (0x00011ec3) main_tmo_pane

0xb6e0,	// (0x00014d88) uni_indicator_pane_g1_ParamLimits

0xb6f5,	// (0x00014d9d) uni_indicator_pane_g2_ParamLimits

0xb70b,	// (0x00014db3) uni_indicator_pane_g3_ParamLimits

0xb721,	// (0x00014dc9) uni_indicator_pane_g4_ParamLimits

0xb721,	// (0x00014dc9) uni_indicator_pane_g4

0xb735,	// (0x00014ddd) uni_indicator_pane_g5_ParamLimits

0xb735,	// (0x00014ddd) uni_indicator_pane_g5

0xb749,	// (0x00014df1) uni_indicator_pane_g6_ParamLimits

0xb749,	// (0x00014df1) uni_indicator_pane_g6

0xf955,	// (0x00018ffd) uni_indicator_pane_g_ParamLimits

0xe676,	// (0x00017d1e) popup_tmo_note_window_ParamLimits

0xe676,	// (0x00017d1e) popup_tmo_note_window

0x7940,	// (0x00010fe8) fshwr2_bg_pane

0x0780,	// (0x00009e28) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x0780,	// (0x00009e28) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x00019574) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x00019574) fshwr2_func_candi_cell_pane_g

0xce40,	// (0x000164e8) bg_popup_window_pane_cp01

0x07b9,	// (0x00009e61) bg_popup_window_pane_g1_cp01

0x07c2,	// (0x00009e6a) bg_popup_window_pane_cp22_ParamLimits

0x07c2,	// (0x00009e6a) bg_popup_window_pane_cp22

0x07d0,	// (0x00009e78) listscroll_tmo_link_pane_ParamLimits

0x07d0,	// (0x00009e78) listscroll_tmo_link_pane

0x0810,	// (0x00009eb8) popup_tmo_note_window_g1_ParamLimits

0x0810,	// (0x00009eb8) popup_tmo_note_window_g1

0x081d,	// (0x00009ec5) tmo_note_info_pane_ParamLimits

0x081d,	// (0x00009ec5) tmo_note_info_pane

0x0837,	// (0x00009edf) list_tmo_note_info_pane_g1_ParamLimits

0x0837,	// (0x00009edf) list_tmo_note_info_pane_g1

0x084e,	// (0x00009ef6) list_tmo_note_info_pane_g2_ParamLimits

0x084e,	// (0x00009ef6) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x00019579) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x00019579) list_tmo_note_info_pane_g

0x086a,	// (0x00009f12) list_tmo_note_info_text_pane_ParamLimits

0x086a,	// (0x00009f12) list_tmo_note_info_text_pane

0x08eb,	// (0x00009f93) list_tmo_link_pane

0x08f8,	// (0x00009fa0) scroll_pane_cp20

0x0905,	// (0x00009fad) list_single_tmo_link_pane_ParamLimits

0x0905,	// (0x00009fad) list_single_tmo_link_pane

0x0915,	// (0x00009fbd) list_single_tmo_link_pane_t1

0x0923,	// (0x00009fcb) list_tmo_note_info_text_pane_t1_ParamLimits

0x0923,	// (0x00009fcb) list_tmo_note_info_text_pane_t1

0x8a5e,	// (0x00012106) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8a5e,	// (0x00012106) aid_size_touch_scroll_bar_cp01

0x88d3,	// (0x00011f7b) aid_size_touch_slider_marker

0x5ff2,	// (0x0000f69a) popup_settings_window_ParamLimits

0x5ff2,	// (0x0000f69a) popup_settings_window

0x9a17,	// (0x000130bf) popup_candi_list_indi_window

0x9ff0,	// (0x00013698) aid_touch_navi_pane_ParamLimits

0x70ae,	// (0x00010756) rs_clock_indi_pane

0x70b7,	// (0x0001075f) sctrl_sk_bottom_pane_ParamLimits

0x70c8,	// (0x00010770) sctrl_sk_top_pane_ParamLimits

0x71ce,	// (0x00010876) popup_fep_tooltip_window

0x01d9,	// (0x00009881) aid_size_cell_widget_grid_ParamLimits

0x0207,	// (0x000098af) cell_ai5_widget_pane_g1_ParamLimits

0x0207,	// (0x000098af) cell_ai5_widget_pane_g1

0x024f,	// (0x000098f7) cell_ai5_widget_pane_g6_ParamLimits

0x025b,	// (0x00009903) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x000194f7) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x000194f7) cell_ai5_widget_pane_g

0x038a,	// (0x00009a32) cell_ai5_widget_pane_t10_ParamLimits

0x038a,	// (0x00009a32) cell_ai5_widget_pane_t10

0x039c,	// (0x00009a44) grid_ai5_widget_pane_ParamLimits

0x043e,	// (0x00009ae6) cell_contacts_ai5_widget_pane_ParamLimits

0x043e,	// (0x00009ae6) cell_contacts_ai5_widget_pane

0x061f,	// (0x00009cc7) popup_discreet_window_t3_ParamLimits

0x061f,	// (0x00009cc7) popup_discreet_window_t3

0x06c6,	// (0x00009d6e) popup_fshwr2_char_preview_window_ParamLimits

0x06c6,	// (0x00009d6e) popup_fshwr2_char_preview_window

0x0888,	// (0x00009f30) tmo_note_info_pane_t1

0x089d,	// (0x00009f45) tmo_note_info_pane_t2

0x08b2,	// (0x00009f5a) tmo_note_info_pane_t3

0x08c7,	// (0x00009f6f) tmo_note_info_pane_t4

0x08d9,	// (0x00009f81) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x0001957e) tmo_note_info_pane_t

0x08eb,	// (0x00009f93) list_tmo_link_pane_ParamLimits

0x08f8,	// (0x00009fa0) scroll_pane_cp20_ParamLimits

0x7940,	// (0x00010fe8) bg_popup_fep_char_preview_window_cp01

0x093c,	// (0x00009fe4) popup_fshwr2_char_preview_window_t1

0x094a,	// (0x00009ff2) popup_candi_list_indi_window_g1

0x0953,	// (0x00009ffb) bg_cell_contacts_ai5_widget_pane

0x095f,	// (0x0000a007) cell_contacts_ai5_widget_pane_g1

0x0974,	// (0x0000a01c) cell_contacts_ai5_widget_pane_g2

0x0983,	// (0x0000a02b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x00019589) cell_contacts_ai5_widget_pane_g

0x0997,	// (0x0000a03f) cell_contacts_ai5_widget_pane_t1

0x881b,	// (0x00011ec3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0a0e,	// (0x0000a0b6) settings_container_pane

0x9665,	// (0x00012d0d) listscroll_set_pane_copy1

0xc351,	// (0x000159f9) scroll_pane_cp121_copy1

0x0a1a,	// (0x0000a0c2) set_content_pane_copy1

0x0a22,	// (0x0000a0ca) aid_height_set_list_copy1_ParamLimits

0x0a22,	// (0x0000a0ca) aid_height_set_list_copy1

0xb969,	// (0x00015011) aid_size_parent_copy1_ParamLimits

0xb969,	// (0x00015011) aid_size_parent_copy1

0x0a2e,	// (0x0000a0d6) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0a2e,	// (0x0000a0d6) button_value_adjust_pane_cp6_copy1

0x99ef,	// (0x00013097) list_highlight_pane_cp2_copy1_ParamLimits

0x99ef,	// (0x00013097) list_highlight_pane_cp2_copy1

0x0a42,	// (0x0000a0ea) list_set_pane_copy1_ParamLimits

0x0a42,	// (0x0000a0ea) list_set_pane_copy1

0x09a9,	// (0x0000a051) main_pane_set_t1_copy1_ParamLimits

0x09a9,	// (0x0000a051) main_pane_set_t1_copy1

0x09e3,	// (0x0000a08b) main_pane_set_t2_copy1_ParamLimits

0x09e3,	// (0x0000a08b) main_pane_set_t2_copy1

0x0aef,	// (0x0000a197) main_pane_set_t3_copy1

0x0afd,	// (0x0000a1a5) main_pane_set_t4_copy1

0x0a02,	// (0x0000a0aa) set_content_pane_g1_copy1_ParamLimits

0x0a02,	// (0x0000a0aa) set_content_pane_g1_copy1

0x0b0b,	// (0x0000a1b3) setting_code_pane_copy1

0x0b15,	// (0x0000a1bd) setting_slider_graphic_pane_copy1

0x0b15,	// (0x0000a1bd) setting_slider_pane_copy1

0x0b1f,	// (0x0000a1c7) setting_text_pane_copy1

0x0b29,	// (0x0000a1d1) setting_volume_pane_copy1

0x0b32,	// (0x0000a1da) settings_code_pane_cp2_copy1

0x0b3a,	// (0x0000a1e2) settings_code_pane_cp_copy1_ParamLimits

0x0b3a,	// (0x0000a1e2) settings_code_pane_cp_copy1

0x0b4e,	// (0x0000a1f6) volume_set_pane_copy1

0x0b56,	// (0x0000a1fe) volume_set_pane_g10_copy1

0x0b5e,	// (0x0000a206) volume_set_pane_g1_copy1

0x0b66,	// (0x0000a20e) volume_set_pane_g2_copy1

0x0b6e,	// (0x0000a216) volume_set_pane_g3_copy1

0x0b76,	// (0x0000a21e) volume_set_pane_g4_copy1

0x0b7e,	// (0x0000a226) volume_set_pane_g5_copy1

0x0b86,	// (0x0000a22e) volume_set_pane_g6_copy1

0x0b8e,	// (0x0000a236) volume_set_pane_g7_copy1

0x0b96,	// (0x0000a23e) volume_set_pane_g8_copy1

0x0b9e,	// (0x0000a246) volume_set_pane_g9_copy1

0x7a34,	// (0x000110dc) bg_set_opt_pane_cp_copy1_ParamLimits

0x7a34,	// (0x000110dc) bg_set_opt_pane_cp_copy1

0x0ba6,	// (0x0000a24e) setting_slider_pane_t1_copy1_ParamLimits

0x0ba6,	// (0x0000a24e) setting_slider_pane_t1_copy1

0x0bc4,	// (0x0000a26c) setting_slider_pane_t2_copy1_ParamLimits

0x0bc4,	// (0x0000a26c) setting_slider_pane_t2_copy1

0x0bde,	// (0x0000a286) setting_slider_pane_t3_copy1_ParamLimits

0x0bde,	// (0x0000a286) setting_slider_pane_t3_copy1

0x0bf6,	// (0x0000a29e) slider_set_pane_copy1_ParamLimits

0x0bf6,	// (0x0000a29e) slider_set_pane_copy1

0x8953,	// (0x00011ffb) set_opt_bg_pane_g1_copy2

0x895b,	// (0x00012003) set_opt_bg_pane_g2_copy2

0x0c0c,	// (0x0000a2b4) set_opt_bg_pane_g3_copy2

0x896b,	// (0x00012013) set_opt_bg_pane_g4_copy2

0x8973,	// (0x0001201b) set_opt_bg_pane_g5_copy2

0x897b,	// (0x00012023) set_opt_bg_pane_g6_copy2

0x0c16,	// (0x0000a2be) set_opt_bg_pane_g7_copy2

0x0c1e,	// (0x0000a2c6) set_opt_bg_pane_g8_copy2

0x0c28,	// (0x0000a2d0) set_opt_bg_pane_g9_copy2

0x78ea,	// (0x00010f92) aid_size_touch_slider_mark_copy1_ParamLimits

0x78ea,	// (0x00010f92) aid_size_touch_slider_mark_copy1

0x0c46,	// (0x0000a2ee) slider_set_pane_g1_copy1

0x78fe,	// (0x00010fa6) slider_set_pane_g2_copy1

0x6ae2,	// (0x0001018a) slider_set_pane_g3_copy1_ParamLimits

0x6ae2,	// (0x0001018a) slider_set_pane_g3_copy1

0x6af6,	// (0x0001019e) slider_set_pane_g4_copy1_ParamLimits

0x6af6,	// (0x0001019e) slider_set_pane_g4_copy1

0x6b0e,	// (0x000101b6) slider_set_pane_g5_copy1_ParamLimits

0x6b0e,	// (0x000101b6) slider_set_pane_g5_copy1

0x6ae2,	// (0x0001018a) slider_set_pane_g6_copy1_ParamLimits

0x6ae2,	// (0x0001018a) slider_set_pane_g6_copy1

0x7906,	// (0x00010fae) slider_set_pane_g7_copy1_ParamLimits

0x7906,	// (0x00010fae) slider_set_pane_g7_copy1

0x7954,	// (0x00010ffc) bg_set_opt_pane_cp2_copy1

0x0c6d,	// (0x0000a315) setting_slider_graphic_pane_g1_copy1

0x0c76,	// (0x0000a31e) setting_slider_graphic_pane_t1_copy1

0x0c86,	// (0x0000a32e) setting_slider_graphic_pane_t2_copy1

0x0c96,	// (0x0000a33e) slider_set_pane_cp_copy1

0x0ca6,	// (0x0000a34e) input_focus_pane_cp1_copy1

0x0caf,	// (0x0000a357) list_set_text_pane_copy1

0x0cb7,	// (0x0000a35f) setting_text_pane_g1_copy1

0x7a8d,	// (0x00011135) set_text_pane_t1_copy1

0x0ca6,	// (0x0000a34e) input_focus_pane_cp2_copy1

0x0cb7,	// (0x0000a35f) setting_code_pane_g1_copy1

0x0cc0,	// (0x0000a368) setting_code_pane_t1_copy1

0x0cce,	// (0x0000a376) list_set_graphic_pane_copy1

0x7954,	// (0x00010ffc) bg_set_opt_pane_cp4_copy1

0x936b,	// (0x00012a13) list_set_graphic_pane_g1_copy1_ParamLimits

0x936b,	// (0x00012a13) list_set_graphic_pane_g1_copy1

0x0ce0,	// (0x0000a388) list_set_graphic_pane_g2_copy1

0x9383,	// (0x00012a2b) list_set_graphic_pane_t1_copy1_ParamLimits

0x9383,	// (0x00012a2b) list_set_graphic_pane_t1_copy1

0xce40,	// (0x000164e8) rs_clock_indi_pane_g1

0x0ce8,	// (0x0000a390) rs_clock_indi_pane_t1

0x050a,	// (0x00009bb2) rs_indi_pane

0x0cf6,	// (0x0000a39e) rs_indi_pane_g1

0x0cff,	// (0x0000a3a7) rs_indi_pane_g2

0x0d08,	// (0x0000a3b0) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x00019590) rs_indi_pane_g

0x9665,	// (0x00012d0d) bg_popup_preview_window_pane_cp03

0x0d11,	// (0x0000a3b9) popup_fep_tooltip_window_t1

0xdcc5,	// (0x0001736d) popup_note2_window_g2_ParamLimits

0xdcc5,	// (0x0001736d) popup_note2_window_g2

0x0001,

0xfc86,	// (0x0001932e) popup_note2_window_g_ParamLimits

0xfc86,	// (0x0001932e) popup_note2_window_g

0xe2af,	// (0x00017957) bg_popup_sub_pane_cp11_ParamLimits

0xe2bc,	// (0x00017964) cell_ai3_links_pane_g1_ParamLimits

0xe2d3,	// (0x0001797b) cell_ai3_links_pane_t1

0x7a8d,	// (0x00011135) set_text_pane_t1_copy1_ParamLimits

0x9576,	// (0x00012c1e) cell_graphic_popup_pane_cp2_ParamLimits

0x9576,	// (0x00012c1e) cell_graphic_popup_pane_cp2

0x0d1f,	// (0x0000a3c7) cell_graphic_popup_pane_g1_cp2

0x8005,	// (0x000116ad) cell_graphic_popup_pane_g2_cp2

0x0d27,	// (0x0000a3cf) cell_graphic_popup_pane_g3_cp2

0x0d2f,	// (0x0000a3d7) cell_graphic_popup_pane_t2_cp2

0x8016,	// (0x000116be) grid_highlight_pane_cp3_cp2

0x8d42,	// (0x000123ea) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x881b,	// (0x00011ec3) main_tmo_pane_ParamLimits

0xe66a,	// (0x00017d12) popup_tmo_big_image_note_window

0x01f7,	// (0x0000989f) cell_ai5_widget_list_pane

0x01ff,	// (0x000098a7) cell_ai5_widget_lrg_icon_pane

0x0888,	// (0x00009f30) tmo_note_info_pane_t1_ParamLimits

0x089d,	// (0x00009f45) tmo_note_info_pane_t2_ParamLimits

0x08b2,	// (0x00009f5a) tmo_note_info_pane_t3_ParamLimits

0x08c7,	// (0x00009f6f) tmo_note_info_pane_t4_ParamLimits

0x08d9,	// (0x00009f81) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x0001957e) tmo_note_info_pane_t_ParamLimits

0x0a0e,	// (0x0000a0b6) settings_container_pane_ParamLimits

0x0c9e,	// (0x0000a346) indicator_popup_pane_cp5

0x0c9e,	// (0x0000a346) indicator_popup_pane_cp6

0x0cce,	// (0x0000a376) list_set_graphic_pane_copy1_ParamLimits

0x7940,	// (0x00010fe8) bg_popup_window_pane_cp23

0x0d3d,	// (0x0000a3e5) popup_tmo_big_image_note_window_g1

0x0d47,	// (0x0000a3ef) popup_tmo_big_image_note_window_t1

0x0d57,	// (0x0000a3ff) popup_tmo_big_image_note_window_t2

0x0d67,	// (0x0000a40f) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x00019597) popup_tmo_big_image_note_window_t

0x0d77,	// (0x0000a41f) cell_ai5_widget_lrg_icon_pane_g1

0x0d7f,	// (0x0000a427) cell_ai5_widget_lrg_icon_pane_t1

0x0d8d,	// (0x0000a435) cell_ai5_widget_list_row_pane_ParamLimits

0x0d8d,	// (0x0000a435) cell_ai5_widget_list_row_pane

0x0da6,	// (0x0000a44e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0da6,	// (0x0000a44e) cell_ai5_widget_list_row_pane_g1

0x0db3,	// (0x0000a45b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0db3,	// (0x0000a45b) cell_ai5_widget_list_row_pane_t1

0x0dcb,	// (0x0000a473) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0dcb,	// (0x0000a473) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef6,	// (0x0001959e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x0001959e) cell_ai5_widget_list_row_pane_t

0x5ea9,	// (0x0000f551) main_fep_vtchi_ss_pane

0x0ddd,	// (0x0000a485) popup_fep_char_pre_window

0x0de5,	// (0x0000a48d) popup_fep_ituss_window

0x0df0,	// (0x0000a498) popup_fep_vkbss_window

0x0df9,	// (0x0000a4a1) grid_vkbss_keypad_pane_ParamLimits

0x0df9,	// (0x0000a4a1) grid_vkbss_keypad_pane

0x0e09,	// (0x0000a4b1) ituss_keypad_pane

0x0e11,	// (0x0000a4b9) aid_vkbss_key_offset_ParamLimits

0x0e11,	// (0x0000a4b9) aid_vkbss_key_offset

0x0e20,	// (0x0000a4c8) cell_vkbss_key_pane_ParamLimits

0x0e20,	// (0x0000a4c8) cell_vkbss_key_pane

0x0e36,	// (0x0000a4de) bg_cell_vkbss_key_g1_ParamLimits

0x0e36,	// (0x0000a4de) bg_cell_vkbss_key_g1

0x0e42,	// (0x0000a4ea) cell_vkbss_key_3p_pane_ParamLimits

0x0e42,	// (0x0000a4ea) cell_vkbss_key_3p_pane

0x0e5c,	// (0x0000a504) cell_vkbss_key_g1_ParamLimits

0x0e5c,	// (0x0000a504) cell_vkbss_key_g1

0x0e76,	// (0x0000a51e) cell_vkbss_key_t1_ParamLimits

0x0e76,	// (0x0000a51e) cell_vkbss_key_t1

0x0ea1,	// (0x0000a549) cell_ituss_key_pane_ParamLimits

0x0ea1,	// (0x0000a549) cell_ituss_key_pane

0x0eb0,	// (0x0000a558) bg_cell_ituss_key_g1_ParamLimits

0x0eb0,	// (0x0000a558) bg_cell_ituss_key_g1

0x0ebc,	// (0x0000a564) cell_ituss_key_pane_g1_ParamLimits

0x0ebc,	// (0x0000a564) cell_ituss_key_pane_g1

0x0ec8,	// (0x0000a570) cell_ituss_key_pane_g2_ParamLimits

0x0ec8,	// (0x0000a570) cell_ituss_key_pane_g2

0x0001,

0xfefb,	// (0x000195a3) cell_ituss_key_pane_g_ParamLimits

0xfefb,	// (0x000195a3) cell_ituss_key_pane_g

0x0edb,	// (0x0000a583) cell_ituss_key_t1_ParamLimits

0x0edb,	// (0x0000a583) cell_ituss_key_t1

0x0ef9,	// (0x0000a5a1) cell_ituss_key_t2_ParamLimits

0x0ef9,	// (0x0000a5a1) cell_ituss_key_t2

0x0f18,	// (0x0000a5c0) cell_ituss_key_t3_ParamLimits

0x0f18,	// (0x0000a5c0) cell_ituss_key_t3

0x0f37,	// (0x0000a5df) cell_ituss_key_t4_ParamLimits

0x0f37,	// (0x0000a5df) cell_ituss_key_t4

0x0003,

0xff00,	// (0x000195a8) cell_ituss_key_t_ParamLimits

0xff00,	// (0x000195a8) cell_ituss_key_t

0x0f56,	// (0x0000a5fe) cell_vkbss_key_3p_pane_g1

0x0f5e,	// (0x0000a606) cell_vkbss_key_3p_pane_g2

0x0f66,	// (0x0000a60e) cell_vkbss_key_3p_pane_g3

0x0002,

0xff09,	// (0x000195b1) cell_vkbss_key_3p_pane_g

0x7940,	// (0x00010fe8) bg_popup_fep_char_preview_window_cp02

0x0f6e,	// (0x0000a616) popup_fep_char_pre_window_t1

0x01cf,	// (0x00009877) main_ai5_sk_pane

0x0953,	// (0x00009ffb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x095f,	// (0x0000a007) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0974,	// (0x0000a01c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0983,	// (0x0000a02b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x00019589) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0997,	// (0x0000a03f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x881b,	// (0x00011ec3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0f7d,	// (0x0000a625) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
