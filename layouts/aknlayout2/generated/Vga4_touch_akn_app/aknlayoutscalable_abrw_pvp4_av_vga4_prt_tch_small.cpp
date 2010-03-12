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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00030249 };

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
0x520c,	// (0x00035455) Screen

0x5218,	// (0x00035461) application_window_ParamLimits

0x5218,	// (0x00035461) application_window

0xf278,	// (0x0003f4c1) screen_g1

0x5274,	// (0x000354bd) area_bottom_pane_ParamLimits

0x5274,	// (0x000354bd) area_bottom_pane

0x5334,	// (0x0003557d) area_top_pane_ParamLimits

0x5334,	// (0x0003557d) area_top_pane

0x53d2,	// (0x0003561b) main_pane_ParamLimits

0x53d2,	// (0x0003561b) main_pane

0xf282,	// (0x0003f4cb) misc_graphics

0x8c1f,	// (0x00038e68) battery_pane_ParamLimits

0x8c1f,	// (0x00038e68) battery_pane

0x9965,	// (0x00039bae) bg_status_flat_pane_g8

0x996d,	// (0x00039bb6) bg_status_flat_pane_g9

0x8ce7,	// (0x00038f30) context_pane_ParamLimits

0x8ce7,	// (0x00038f30) context_pane

0x8e0b,	// (0x00039054) navi_pane_ParamLimits

0x8e0b,	// (0x00039054) navi_pane

0x8e9b,	// (0x000390e4) signal_pane_ParamLimits

0x8e9b,	// (0x000390e4) signal_pane

0x0008,

0xf87f,	// (0x0003fac8) bg_status_flat_pane_g

0x8f08,	// (0x00039151) status_pane_g1_ParamLimits

0x8f08,	// (0x00039151) status_pane_g1

0x8f1c,	// (0x00039165) status_pane_g2_ParamLimits

0x8f1c,	// (0x00039165) status_pane_g2

0x8f28,	// (0x00039171) status_pane_g3_ParamLimits

0x8f28,	// (0x00039171) status_pane_g3

0x0004,

0xf7a6,	// (0x0003f9ef) status_pane_g_ParamLimits

0xf7a6,	// (0x0003f9ef) status_pane_g

0x8f5c,	// (0x000391a5) title_pane_ParamLimits

0x8f5c,	// (0x000391a5) title_pane

0x8f99,	// (0x000391e2) uni_indicator_pane_ParamLimits

0x8f99,	// (0x000391e2) uni_indicator_pane

0x8b39,	// (0x00038d82) bg_list_pane_ParamLimits

0x8b39,	// (0x00038d82) bg_list_pane

0x8b59,	// (0x00038da2) find_pane

0x8b61,	// (0x00038daa) listscroll_app_pane_ParamLimits

0x8b61,	// (0x00038daa) listscroll_app_pane

0x8b6d,	// (0x00038db6) listscroll_form_pane

0x6bf7,	// (0x00036e40) listscroll_gen_pane_ParamLimits

0x6bf7,	// (0x00036e40) listscroll_gen_pane

0x8b6d,	// (0x00038db6) listscroll_set_pane

0x6022,	// (0x0003626b) main_idle_act_pane

0x883b,	// (0x00038a84) main_idle_trad_pane

0x883b,	// (0x00038a84) main_list_empty_pane

0x8b87,	// (0x00038dd0) main_midp_pane

0x8b93,	// (0x00038ddc) main_pane_g1_ParamLimits

0x8b93,	// (0x00038ddc) main_pane_g1

0x6c19,	// (0x00036e62) popup_ai_message_window_ParamLimits

0x6c19,	// (0x00036e62) popup_ai_message_window

0x6ccd,	// (0x00036f16) popup_fep_china_uni_window_ParamLimits

0x6ccd,	// (0x00036f16) popup_fep_china_uni_window

0x6d2d,	// (0x00036f76) popup_fep_japan_candidate_window_ParamLimits

0x6d2d,	// (0x00036f76) popup_fep_japan_candidate_window

0x6d57,	// (0x00036fa0) popup_fep_japan_predictive_window_ParamLimits

0x6d57,	// (0x00036fa0) popup_fep_japan_predictive_window

0x6d8d,	// (0x00036fd6) popup_find_window

0x6d9a,	// (0x00036fe3) popup_grid_graphic_window_ParamLimits

0x6d9a,	// (0x00036fe3) popup_grid_graphic_window

0x6dc8,	// (0x00037011) popup_large_graphic_colour_window

0x6dee,	// (0x00037037) popup_menu_window_ParamLimits

0x6dee,	// (0x00037037) popup_menu_window

0x6fb8,	// (0x00037201) popup_note_image_window

0x6fa2,	// (0x000371eb) popup_note_wait_window_ParamLimits

0x6fa2,	// (0x000371eb) popup_note_wait_window

0x6fa2,	// (0x000371eb) popup_note_window_ParamLimits

0x6fa2,	// (0x000371eb) popup_note_window

0x701e,	// (0x00037267) popup_query_code_window_ParamLimits

0x701e,	// (0x00037267) popup_query_code_window

0x7034,	// (0x0003727d) popup_query_data_code_window_ParamLimits

0x7034,	// (0x0003727d) popup_query_data_code_window

0x7057,	// (0x000372a0) popup_query_data_window_ParamLimits

0x7057,	// (0x000372a0) popup_query_data_window

0x7079,	// (0x000372c2) popup_query_sat_info_window_ParamLimits

0x7079,	// (0x000372c2) popup_query_sat_info_window

0x70b8,	// (0x00037301) popup_snote_single_graphic_window_ParamLimits

0x70b8,	// (0x00037301) popup_snote_single_graphic_window

0x70b8,	// (0x00037301) popup_snote_single_text_window_ParamLimits

0x70b8,	// (0x00037301) popup_snote_single_text_window

0x70cf,	// (0x00037318) popup_sub_window_general

0x7215,	// (0x0003745e) popup_window_general_ParamLimits

0x7215,	// (0x0003745e) popup_window_general

0x8ba1,	// (0x00038dea) power_save_pane

0x6a93,	// (0x00036cdc) control_pane_g1_ParamLimits

0x6a93,	// (0x00036cdc) control_pane_g1

0x6abc,	// (0x00036d05) control_pane_g2_ParamLimits

0x6abc,	// (0x00036d05) control_pane_g2

0x8afc,	// (0x00038d45) control_pane_g3_ParamLimits

0x8afc,	// (0x00038d45) control_pane_g3

0x0007,

0xf78e,	// (0x0003f9d7) control_pane_g_ParamLimits

0xf78e,	// (0x0003f9d7) control_pane_g

0x6b04,	// (0x00036d4d) control_pane_t1_ParamLimits

0x6b04,	// (0x00036d4d) control_pane_t1

0x6b50,	// (0x00036d99) control_pane_t2_ParamLimits

0x6b50,	// (0x00036d99) control_pane_t2

0x0002,

0xf79f,	// (0x0003f9e8) control_pane_t_ParamLimits

0xf79f,	// (0x0003f9e8) control_pane_t

0x8a1d,	// (0x00038c66) navi_navi_volume_pane_cp1

0x8a26,	// (0x00038c6f) status_small_icon_pane

0x8a2e,	// (0x00038c77) status_small_pane_g1_ParamLimits

0x8a2e,	// (0x00038c77) status_small_pane_g1

0x8a62,	// (0x00038cab) status_small_pane_g2_ParamLimits

0x8a62,	// (0x00038cab) status_small_pane_g2

0x8a6e,	// (0x00038cb7) status_small_pane_g3_ParamLimits

0x8a6e,	// (0x00038cb7) status_small_pane_g3

0x8a7a,	// (0x00038cc3) status_small_pane_g4_ParamLimits

0x8a7a,	// (0x00038cc3) status_small_pane_g4

0x8a86,	// (0x00038ccf) status_small_pane_g5_ParamLimits

0x8a86,	// (0x00038ccf) status_small_pane_g5

0x8a95,	// (0x00038cde) status_small_pane_g6_ParamLimits

0x8a95,	// (0x00038cde) status_small_pane_g6

0x0007,

0xf77d,	// (0x0003f9c6) status_small_pane_g_ParamLimits

0xf77d,	// (0x0003f9c6) status_small_pane_g

0x8ac5,	// (0x00038d0e) status_small_pane_t1

0x8ae8,	// (0x00038d31) status_small_wait_pane_ParamLimits

0x8ae8,	// (0x00038d31) status_small_wait_pane

0x6402,	// (0x0003664b) aid_levels_signal_ParamLimits

0x6402,	// (0x0003664b) aid_levels_signal

0x6414,	// (0x0003665d) signal_pane_g1_ParamLimits

0x6414,	// (0x0003665d) signal_pane_g1

0x6429,	// (0x00036672) signal_pane_g2_ParamLimits

0x6429,	// (0x00036672) signal_pane_g2

0x0003,

0xf70e,	// (0x0003f957) signal_pane_g_ParamLimits

0xf70e,	// (0x0003f957) signal_pane_g

0x6464,	// (0x000366ad) context_pane_g1

0x5629,	// (0x00035872) title_pane_g1

0x5653,	// (0x0003589c) title_pane_t1

0xf298,	// (0x0003f4e1) title_pane_t2

0xf2be,	// (0x0003f507) title_pane_t3

0x0002,

0xf55d,	// (0x0003f7a6) title_pane_t

0x8fb1,	// (0x000391fa) aid_levels_battery_ParamLimits

0x8fb1,	// (0x000391fa) aid_levels_battery

0x8fc5,	// (0x0003920e) battery_pane_g1_ParamLimits

0x8fc5,	// (0x0003920e) battery_pane_g1

0x8fdb,	// (0x00039224) battery_pane_g2_ParamLimits

0x8fdb,	// (0x00039224) battery_pane_g2

0x0001,

0xf7b1,	// (0x0003f9fa) battery_pane_g_ParamLimits

0xf7b1,	// (0x0003f9fa) battery_pane_g

0xa2b5,	// (0x0003a4fe) uni_indicator_pane_g1

0xa2ca,	// (0x0003a513) uni_indicator_pane_g2

0xa2e0,	// (0x0003a529) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0003fb70) uni_indicator_pane_g

0x86a9,	// (0x000388f2) navi_icon_pane_ParamLimits

0x86a9,	// (0x000388f2) navi_icon_pane

0x6975,	// (0x00036bbe) navi_midp_pane

0x86c5,	// (0x0003890e) navi_navi_pane

0x86cf,	// (0x00038918) navi_text_pane_ParamLimits

0x86cf,	// (0x00038918) navi_text_pane

0xf278,	// (0x0003f4c1) status_small_wait_pane_g1

0x2190,	// (0x000323d9) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0003fb6b) status_small_wait_pane_g

0x9fc8,	// (0x0003a211) navi_navi_icon_text_pane

0x9fd0,	// (0x0003a219) navi_navi_pane_g1_ParamLimits

0x9fd0,	// (0x0003a219) navi_navi_pane_g1

0x9fe2,	// (0x0003a22b) navi_navi_pane_g2_ParamLimits

0x9fe2,	// (0x0003a22b) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0003fb39) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0003fb39) navi_navi_pane_g

0x9ff4,	// (0x0003a23d) navi_navi_tabs_pane

0x9ffd,	// (0x0003a246) navi_navi_text_pane

0x9fc8,	// (0x0003a211) navi_navi_volume_pane

0x9fa1,	// (0x0003a1ea) navi_text_pane_t1

0x9f92,	// (0x0003a1db) navi_icon_pane_g1

0x9ee5,	// (0x0003a12e) navi_navi_text_pane_t1

0x74f5,	// (0x0003773e) navi_navi_volume_pane_g1

0x74fd,	// (0x00037746) volume_small_pane

0x9e4b,	// (0x0003a094) navi_navi_icon_text_pane_g1

0x9e53,	// (0x0003a09c) navi_navi_icon_text_pane_t1

0x86c5,	// (0x0003890e) navi_tabs_2_long_pane

0x86c5,	// (0x0003890e) navi_tabs_2_pane

0x86c5,	// (0x0003890e) navi_tabs_3_long_pane

0x86c5,	// (0x0003890e) navi_tabs_3_pane

0x86c5,	// (0x0003890e) navi_tabs_4_pane

0x74d5,	// (0x0003771e) tabs_2_active_pane_ParamLimits

0x74d5,	// (0x0003771e) tabs_2_active_pane

0x74e5,	// (0x0003772e) tabs_2_passive_pane_ParamLimits

0x74e5,	// (0x0003772e) tabs_2_passive_pane

0x74a3,	// (0x000376ec) tabs_3_active_pane_ParamLimits

0x74a3,	// (0x000376ec) tabs_3_active_pane

0x74b3,	// (0x000376fc) tabs_3_passive_pane_ParamLimits

0x74b3,	// (0x000376fc) tabs_3_passive_pane

0x74c4,	// (0x0003770d) tabs_3_passive_pane_cp_ParamLimits

0x74c4,	// (0x0003770d) tabs_3_passive_pane_cp

0x7457,	// (0x000376a0) tabs_4_active_pane_ParamLimits

0x7457,	// (0x000376a0) tabs_4_active_pane

0x746a,	// (0x000376b3) tabs_4_passive_pane_ParamLimits

0x746a,	// (0x000376b3) tabs_4_passive_pane

0x747b,	// (0x000376c4) tabs_4_passive_pane_cp_ParamLimits

0x747b,	// (0x000376c4) tabs_4_passive_pane_cp

0x748c,	// (0x000376d5) tabs_4_passive_pane_cp2_ParamLimits

0x748c,	// (0x000376d5) tabs_4_passive_pane_cp2

0x7433,	// (0x0003767c) tabs_2_long_active_pane_ParamLimits

0x7433,	// (0x0003767c) tabs_2_long_active_pane

0x7445,	// (0x0003768e) tabs_2_long_passive_pane_ParamLimits

0x7445,	// (0x0003768e) tabs_2_long_passive_pane

0x73f4,	// (0x0003763d) tabs_3_long_active_pane_ParamLimits

0x73f4,	// (0x0003763d) tabs_3_long_active_pane

0x7407,	// (0x00037650) tabs_3_long_passive_pane_ParamLimits

0x7407,	// (0x00037650) tabs_3_long_passive_pane

0x7420,	// (0x00037669) tabs_3_long_passive_pane_cp_ParamLimits

0x7420,	// (0x00037669) tabs_3_long_passive_pane_cp

0x739a,	// (0x000375e3) volume_small_pane_g1

0x73a3,	// (0x000375ec) volume_small_pane_g2

0x73ac,	// (0x000375f5) volume_small_pane_g3

0x73b5,	// (0x000375fe) volume_small_pane_g4

0x73be,	// (0x00037607) volume_small_pane_g5

0x73c7,	// (0x00037610) volume_small_pane_g6

0x73d0,	// (0x00037619) volume_small_pane_g7

0x73d9,	// (0x00037622) volume_small_pane_g8

0x73e2,	// (0x0003762b) volume_small_pane_g9

0x73eb,	// (0x00037634) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0003fb05) volume_small_pane_g

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp2_ParamLimits

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp2

0x56bb,	// (0x00035904) tabs_3_active_pane_g1

0x56c3,	// (0x0003590c) tabs_3_active_pane_t1

0xf2d0,	// (0x0003f519) bg_passive_tab_pane_cp2_ParamLimits

0xf2d0,	// (0x0003f519) bg_passive_tab_pane_cp2

0x56bb,	// (0x00035904) tabs_3_passive_pane_g1

0x56c3,	// (0x0003590c) tabs_3_passive_pane_t1

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp3_ParamLimits

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp3

0x56d5,	// (0x0003591e) tabs_4_active_pane_g1

0x56dd,	// (0x00035926) tabs_4_active_pane_t1

0xf2d0,	// (0x0003f519) bg_passive_tab_pane_cp3_ParamLimits

0xf2d0,	// (0x0003f519) bg_passive_tab_pane_cp3

0x56d5,	// (0x0003591e) tabs_4_1_passive_pane_g1

0x56dd,	// (0x00035926) tabs_4_1_passive_pane_t1

0x8b87,	// (0x00038dd0) list_highlight_pane_cp2

0xa544,	// (0x0003a78d) list_set_pane_ParamLimits

0xa544,	// (0x0003a78d) list_set_pane

0xa60c,	// (0x0003a855) main_pane_set_t1_ParamLimits

0xa60c,	// (0x0003a855) main_pane_set_t1

0xa62c,	// (0x0003a875) main_pane_set_t2_ParamLimits

0xa62c,	// (0x0003a875) main_pane_set_t2

0xa640,	// (0x0003a889) main_pane_set_t3_ParamLimits

0xa640,	// (0x0003a889) main_pane_set_t3

0xa654,	// (0x0003a89d) main_pane_set_t4_ParamLimits

0xa654,	// (0x0003a89d) main_pane_set_t4

0x0003,

0xf98c,	// (0x0003fbd5) main_pane_set_t_ParamLimits

0xf98c,	// (0x0003fbd5) main_pane_set_t

0xa668,	// (0x0003a8b1) setting_code_pane

0xa672,	// (0x0003a8bb) setting_slider_graphic_pane

0xa672,	// (0x0003a8bb) setting_slider_pane

0xa672,	// (0x0003a8bb) setting_text_pane

0xa672,	// (0x0003a8bb) setting_volume_pane

0x56ef,	// (0x00035938) volume_set_pane

0xf2d0,	// (0x0003f519) bg_set_opt_pane_cp

0x56f9,	// (0x00035942) setting_slider_pane_t1

0x5712,	// (0x0003595b) setting_slider_pane_t2

0x572c,	// (0x00035975) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003f7ad) setting_slider_pane_t

0x5744,	// (0x0003598d) slider_set_pane

0xf282,	// (0x0003f4cb) bg_set_opt_pane_cp2

0xf2de,	// (0x0003f527) setting_slider_graphic_pane_g1

0x575a,	// (0x000359a3) setting_slider_graphic_pane_t1

0x576a,	// (0x000359b3) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003f7b4) setting_slider_graphic_pane_t

0x577a,	// (0x000359c3) slider_set_pane_cp

0xf282,	// (0x0003f4cb) input_focus_pane_cp1

0xa505,	// (0x0003a74e) list_set_text_pane

0xf278,	// (0x0003f4c1) setting_text_pane_g1

0xf282,	// (0x0003f4cb) input_focus_pane_cp2

0xf278,	// (0x0003f4c1) setting_code_pane_g1

0xf2e7,	// (0x0003f530) setting_code_pane_t1

0x3df9,	// (0x00034042) set_text_pane_t1_ParamLimits

0x3df9,	// (0x00034042) set_text_pane_t1

0x2531,	// (0x0003277a) set_opt_bg_pane_g1

0x2539,	// (0x00032782) set_opt_bg_pane_g2

0xa4dd,	// (0x0003a726) set_opt_bg_pane_g3

0x2549,	// (0x00032792) set_opt_bg_pane_g4

0x2551,	// (0x0003279a) set_opt_bg_pane_g5

0x2559,	// (0x000327a2) set_opt_bg_pane_g6

0xa4e7,	// (0x0003a730) set_opt_bg_pane_g7

0xa4f1,	// (0x0003a73a) set_opt_bg_pane_g8

0xa4fb,	// (0x0003a744) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0003fbc2) set_opt_bg_pane_g

0xa4d0,	// (0x0003a719) slider_set_pane_g1

0x75a6,	// (0x000377ef) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0003fbb3) slider_set_pane_g

0x7506,	// (0x0003774f) volume_set_pane_g1

0x7510,	// (0x00037759) volume_set_pane_g2

0x751a,	// (0x00037763) volume_set_pane_g3

0x7524,	// (0x0003776d) volume_set_pane_g4

0x752e,	// (0x00037777) volume_set_pane_g5

0x7538,	// (0x00037781) volume_set_pane_g6

0x7542,	// (0x0003778b) volume_set_pane_g7

0x754c,	// (0x00037795) volume_set_pane_g8

0x7556,	// (0x0003779f) volume_set_pane_g9

0x7560,	// (0x000377a9) volume_set_pane_g10

0x0009,

0xf942,	// (0x0003fb8b) volume_set_pane_g

0x5782,	// (0x000359cb) indicator_pane_ParamLimits

0x5782,	// (0x000359cb) indicator_pane

0x578e,	// (0x000359d7) main_idle_pane_g2_ParamLimits

0x578e,	// (0x000359d7) main_idle_pane_g2

0x57b6,	// (0x000359ff) main_pane_idle_g1_ParamLimits

0x57b6,	// (0x000359ff) main_pane_idle_g1

0xf2f5,	// (0x0003f53e) popup_clock_digital_analogue_window_ParamLimits

0xf2f5,	// (0x0003f53e) popup_clock_digital_analogue_window

0x57c4,	// (0x00035a0d) soft_indicator_pane_ParamLimits

0x57c4,	// (0x00035a0d) soft_indicator_pane

0x57d2,	// (0x00035a1b) wallpaper_pane_ParamLimits

0x57d2,	// (0x00035a1b) wallpaper_pane

0xf278,	// (0x0003f4c1) wallpaper_pane_g1

0x57de,	// (0x00035a27) indicator_pane_g1_ParamLimits

0x57de,	// (0x00035a27) indicator_pane_g1

0xa922,	// (0x0003ab6b) navi_navi_icon_text_pane_srt_g1

0xf323,	// (0x0003f56c) soft_indicator_pane_t1

0xf33d,	// (0x0003f586) aid_ps_area_pane

0x57ea,	// (0x00035a33) aid_ps_clock_pane

0xf34e,	// (0x0003f597) aid_ps_indicator_pane

0xf35a,	// (0x0003f5a3) indicator_ps_pane_ParamLimits

0xf35a,	// (0x0003f5a3) indicator_ps_pane

0xf369,	// (0x0003f5b2) power_save_pane_g1_ParamLimits

0xf369,	// (0x0003f5b2) power_save_pane_g1

0xf375,	// (0x0003f5be) power_save_pane_g2_ParamLimits

0xf375,	// (0x0003f5be) power_save_pane_g2

0x5228,	// (0x00035471) aid_navinavi_width_pane

0xf33d,	// (0x0003f586) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003f7b9) power_save_pane_g_ParamLimits

0xf570,	// (0x0003f7b9) power_save_pane_g

0xf383,	// (0x0003f5cc) power_save_pane_t1_ParamLimits

0xf383,	// (0x0003f5cc) power_save_pane_t1

0x57ea,	// (0x00035a33) aid_ps_clock_pane_ParamLimits

0xf34e,	// (0x0003f597) aid_ps_indicator_pane_ParamLimits

0xf395,	// (0x0003f5de) power_save_pane_t4_ParamLimits

0xf395,	// (0x0003f5de) power_save_pane_t4

0x0001,

0xf575,	// (0x0003f7be) power_save_pane_t_ParamLimits

0xf575,	// (0x0003f7be) power_save_pane_t

0xf3bf,	// (0x0003f608) power_save_t3_ParamLimits

0xf3bf,	// (0x0003f608) power_save_t3

0xf3aa,	// (0x0003f5f3) power_save_t2_ParamLimits

0xf3aa,	// (0x0003f5f3) power_save_t2

0xf3d4,	// (0x0003f61d) indicator_ps_pane_g1

0x57f8,	// (0x00035a41) ai_gene_pane_ParamLimits

0x57f8,	// (0x00035a41) ai_gene_pane

0x5804,	// (0x00035a4d) ai_links_pane_ParamLimits

0x5804,	// (0x00035a4d) ai_links_pane

0x5810,	// (0x00035a59) indicator_pane_cp1_ParamLimits

0x5810,	// (0x00035a59) indicator_pane_cp1

0x581c,	// (0x00035a65) main_pane_idle_g1_cp_ParamLimits

0x581c,	// (0x00035a65) main_pane_idle_g1_cp

0xf3dd,	// (0x0003f626) popup_ai_links_title_window

0x5828,	// (0x00035a71) soft_indicator_pane_cp1_ParamLimits

0x5828,	// (0x00035a71) soft_indicator_pane_cp1

0xa2a3,	// (0x0003a4ec) ai_links_pane_g1

0xa2ac,	// (0x0003a4f5) grid_ai_links_pane

0xa288,	// (0x0003a4d1) ai_gene_pane_1

0xa291,	// (0x0003a4da) ai_gene_pane_2

0xa29a,	// (0x0003a4e3) list_highlight_pane_cp4

0xa268,	// (0x0003a4b1) cell_ai_link_pane_ParamLimits

0xa268,	// (0x0003a4b1) cell_ai_link_pane

0xa260,	// (0x0003a4a9) cell_ai_link_pane_g1

0x2190,	// (0x000323d9) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0003fb66) cell_ai_link_pane_g

0xf282,	// (0x0003f4cb) grid_highlight_cp2

0xf282,	// (0x0003f4cb) bg_popup_sub_pane_cp1

0xf3f4,	// (0x0003f63d) popup_ai_links_title_window_t1

0xa1ac,	// (0x0003a3f5) ai_gene_pane_1_g1_ParamLimits

0xa1ac,	// (0x0003a3f5) ai_gene_pane_1_g1

0xa1b8,	// (0x0003a401) ai_gene_pane_1_g2_ParamLimits

0xa1b8,	// (0x0003a401) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0003fb5c) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0003fb5c) ai_gene_pane_1_g

0xa1c5,	// (0x0003a40e) ai_gene_pane_1_t1_ParamLimits

0xa1c5,	// (0x0003a40e) ai_gene_pane_1_t1

0xa1f9,	// (0x0003a442) grid_ai_soft_ind_pane

0xa197,	// (0x0003a3e0) ai_gene_pane_2_t1_ParamLimits

0xa197,	// (0x0003a3e0) ai_gene_pane_2_t1

0x5834,	// (0x00035a7d) main_pane_empty_t1_ParamLimits

0x5834,	// (0x00035a7d) main_pane_empty_t1

0x584c,	// (0x00035a95) main_pane_empty_t2_ParamLimits

0x584c,	// (0x00035a95) main_pane_empty_t2

0x5861,	// (0x00035aaa) main_pane_empty_t3_ParamLimits

0x5861,	// (0x00035aaa) main_pane_empty_t3

0x5873,	// (0x00035abc) main_pane_empty_t4_ParamLimits

0x5873,	// (0x00035abc) main_pane_empty_t4

0x5885,	// (0x00035ace) main_pane_empty_t5_ParamLimits

0x5885,	// (0x00035ace) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003f7c3) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003f7c3) main_pane_empty_t

0x2582,	// (0x000327cb) bg_popup_window_pane_ParamLimits

0x2582,	// (0x000327cb) bg_popup_window_pane

0x9ef3,	// (0x0003a13c) find_popup_pane_cp2_ParamLimits

0x9ef3,	// (0x0003a13c) find_popup_pane_cp2

0x9eff,	// (0x0003a148) heading_pane_ParamLimits

0x9eff,	// (0x0003a148) heading_pane

0xf282,	// (0x0003f4cb) bg_popup_sub_pane

0x9e6d,	// (0x0003a0b6) bg_popup_window_pane_g1_ParamLimits

0x9e6d,	// (0x0003a0b6) bg_popup_window_pane_g1

0x9e79,	// (0x0003a0c2) bg_popup_window_pane_g2_ParamLimits

0x9e79,	// (0x0003a0c2) bg_popup_window_pane_g2

0x9e85,	// (0x0003a0ce) bg_popup_window_pane_g3_ParamLimits

0x9e85,	// (0x0003a0ce) bg_popup_window_pane_g3

0x9e91,	// (0x0003a0da) bg_popup_window_pane_g4_ParamLimits

0x9e91,	// (0x0003a0da) bg_popup_window_pane_g4

0x9e9d,	// (0x0003a0e6) bg_popup_window_pane_g5_ParamLimits

0x9e9d,	// (0x0003a0e6) bg_popup_window_pane_g5

0x9ea9,	// (0x0003a0f2) bg_popup_window_pane_g6_ParamLimits

0x9ea9,	// (0x0003a0f2) bg_popup_window_pane_g6

0x9eb5,	// (0x0003a0fe) bg_popup_window_pane_g7_ParamLimits

0x9eb5,	// (0x0003a0fe) bg_popup_window_pane_g7

0x9ec1,	// (0x0003a10a) bg_popup_window_pane_g8_ParamLimits

0x9ec1,	// (0x0003a10a) bg_popup_window_pane_g8

0x9ecd,	// (0x0003a116) bg_popup_window_pane_g9_ParamLimits

0x9ecd,	// (0x0003a116) bg_popup_window_pane_g9

0x9ed9,	// (0x0003a122) bg_popup_window_pane_g10_ParamLimits

0x9ed9,	// (0x0003a122) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0003fb24) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0003fb24) bg_popup_window_pane_g

0x9e02,	// (0x0003a04b) bg_popup_heading_pane_ParamLimits

0x9e02,	// (0x0003a04b) bg_popup_heading_pane

0x76b7,	// (0x00037900) tabs_4_passive_pane_cp_srt_ParamLimits

0x76b7,	// (0x00037900) tabs_4_passive_pane_cp_srt

0x76c9,	// (0x00037912) tabs_4_passive_pane_srt_ParamLimits

0x9e16,	// (0x0003a05f) heading_pane_g2

0x76c9,	// (0x00037912) tabs_4_passive_pane_srt

0x8b87,	// (0x00038dd0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b87,	// (0x00038dd0) bg_passive_tab_pane_cp3_srt

0x9e1e,	// (0x0003a067) heading_pane_t1_ParamLimits

0x9e1e,	// (0x0003a067) heading_pane_t1

0x9e35,	// (0x0003a07e) heading_pane_t2_ParamLimits

0x9e35,	// (0x0003a07e) heading_pane_t2

0x0001,

0xf8d6,	// (0x0003fb1f) heading_pane_t_ParamLimits

0xf8d6,	// (0x0003fb1f) heading_pane_t

0x992d,	// (0x00039b76) bg_popup_heading_pane_g1

0x99dc,	// (0x00039c25) bg_popup_heading_pane_g2

0x99e6,	// (0x00039c2f) bg_popup_heading_pane_g3

0x99f0,	// (0x00039c39) bg_popup_heading_pane_g4

0x99fa,	// (0x00039c43) bg_popup_heading_pane_g5

0x9a04,	// (0x00039c4d) bg_popup_heading_pane_g6

0x9a0c,	// (0x00039c55) bg_popup_heading_pane_g7

0x9a14,	// (0x00039c5d) bg_popup_heading_pane_g8

0x9a1e,	// (0x00039c67) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0003fadb) bg_popup_heading_pane_g

0x90b3,	// (0x000392fc) bg_popup_sub_pane_g1

0x90c3,	// (0x0003930c) bg_popup_sub_pane_g2

0x90bb,	// (0x00039304) bg_popup_sub_pane_g3

0x90d3,	// (0x0003931c) bg_popup_sub_pane_g4

0x90cb,	// (0x00039314) bg_popup_sub_pane_g5

0x90db,	// (0x00039324) bg_popup_sub_pane_g6

0x90e3,	// (0x0003932c) bg_popup_sub_pane_g7

0x90f3,	// (0x0003933c) bg_popup_sub_pane_g8

0x90eb,	// (0x00039334) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0003fab5) bg_popup_sub_pane_g

0xf403,	// (0x0003f64c) bg_popup_window_pane_cp5_ParamLimits

0xf403,	// (0x0003f64c) bg_popup_window_pane_cp5

0xf41f,	// (0x0003f668) popup_note_window_g1_ParamLimits

0xf41f,	// (0x0003f668) popup_note_window_g1

0xf42b,	// (0x0003f674) popup_note_window_t1_ParamLimits

0xf42b,	// (0x0003f674) popup_note_window_t1

0xf441,	// (0x0003f68a) popup_note_window_t2_ParamLimits

0xf441,	// (0x0003f68a) popup_note_window_t2

0xf457,	// (0x0003f6a0) popup_note_window_t3_ParamLimits

0xf457,	// (0x0003f6a0) popup_note_window_t3

0xf46d,	// (0x0003f6b6) popup_note_window_t4_ParamLimits

0xf46d,	// (0x0003f6b6) popup_note_window_t4

0xf495,	// (0x0003f6de) popup_note_window_t5_ParamLimits

0xf495,	// (0x0003f6de) popup_note_window_t5

0x0004,

0xf585,	// (0x0003f7ce) popup_note_window_t_ParamLimits

0xf585,	// (0x0003f7ce) popup_note_window_t

0xf4b9,	// (0x0003f702) bg_popup_window_pane_cp6_ParamLimits

0xf4b9,	// (0x0003f702) bg_popup_window_pane_cp6

0x98a9,	// (0x00039af2) popup_note_image_window_g1_ParamLimits

0x98a9,	// (0x00039af2) popup_note_image_window_g1

0x98b5,	// (0x00039afe) popup_note_image_window_g2_ParamLimits

0x98b5,	// (0x00039afe) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0003faa9) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0003faa9) popup_note_image_window_g

0x98ce,	// (0x00039b17) popup_note_image_window_t1_ParamLimits

0x98ce,	// (0x00039b17) popup_note_image_window_t1

0x98e7,	// (0x00039b30) popup_note_image_window_t2_ParamLimits

0x98e7,	// (0x00039b30) popup_note_image_window_t2

0x9900,	// (0x00039b49) popup_note_image_window_t3_ParamLimits

0x9900,	// (0x00039b49) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0003faae) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0003faae) popup_note_image_window_t

0x9769,	// (0x000399b2) bg_popup_window_pane_cp7_ParamLimits

0x9769,	// (0x000399b2) bg_popup_window_pane_cp7

0x9799,	// (0x000399e2) popup_note_wait_window_g1_ParamLimits

0x9799,	// (0x000399e2) popup_note_wait_window_g1

0x97a5,	// (0x000399ee) popup_note_wait_window_g2_ParamLimits

0x97a5,	// (0x000399ee) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0003fa97) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0003fa97) popup_note_wait_window_g

0x97bd,	// (0x00039a06) popup_note_wait_window_t1_ParamLimits

0x97bd,	// (0x00039a06) popup_note_wait_window_t1

0x97e4,	// (0x00039a2d) popup_note_wait_window_t2_ParamLimits

0x97e4,	// (0x00039a2d) popup_note_wait_window_t2

0x9802,	// (0x00039a4b) popup_note_wait_window_t3_ParamLimits

0x9802,	// (0x00039a4b) popup_note_wait_window_t3

0x9815,	// (0x00039a5e) popup_note_wait_window_t4_ParamLimits

0x9815,	// (0x00039a5e) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0003fa9e) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0003fa9e) popup_note_wait_window_t

0x983a,	// (0x00039a83) wait_bar_pane_ParamLimits

0x983a,	// (0x00039a83) wait_bar_pane

0xf282,	// (0x0003f4cb) wait_anim_pane

0xf282,	// (0x0003f4cb) wait_border_pane

0xf278,	// (0x0003f4c1) wait_anim_pane_g1

0xf278,	// (0x0003f4c1) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0003f952) wait_anim_pane_g

0x970d,	// (0x00039956) wait_border_pane_g1

0x9718,	// (0x00039961) wait_border_pane_g2

0x9721,	// (0x0003996a) wait_border_pane_g3

0x0002,

0xf847,	// (0x0003fa90) wait_border_pane_g

0x9577,	// (0x000397c0) bg_popup_window_pane_cp16_ParamLimits

0x9577,	// (0x000397c0) bg_popup_window_pane_cp16

0x9677,	// (0x000398c0) indicator_popup_pane_cp4_ParamLimits

0x9677,	// (0x000398c0) indicator_popup_pane_cp4

0x968b,	// (0x000398d4) popup_query_data_window_t1_ParamLimits

0x968b,	// (0x000398d4) popup_query_data_window_t1

0x969d,	// (0x000398e6) popup_query_data_window_t2_ParamLimits

0x969d,	// (0x000398e6) popup_query_data_window_t2

0x96b6,	// (0x000398ff) popup_query_data_window_t3_ParamLimits

0x96b6,	// (0x000398ff) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0003fa89) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0003fa89) popup_query_data_window_t

0x96d0,	// (0x00039919) query_popup_data_pane_ParamLimits

0x96d0,	// (0x00039919) query_popup_data_pane

0x96e4,	// (0x0003992d) query_popup_data_pane_cp1_ParamLimits

0x96e4,	// (0x0003992d) query_popup_data_pane_cp1

0x9577,	// (0x000397c0) bg_popup_window_pane_cp10_ParamLimits

0x9577,	// (0x000397c0) bg_popup_window_pane_cp10

0x95a9,	// (0x000397f2) indicator_popup_pane_ParamLimits

0x95a9,	// (0x000397f2) indicator_popup_pane

0x95cb,	// (0x00039814) popup_query_code_window_t1_ParamLimits

0x95cb,	// (0x00039814) popup_query_code_window_t1

0x95e5,	// (0x0003982e) popup_query_code_window_t2_ParamLimits

0x95e5,	// (0x0003982e) popup_query_code_window_t2

0x962e,	// (0x00039877) popup_query_code_window_t3_ParamLimits

0x962e,	// (0x00039877) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0003fa82) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0003fa82) popup_query_code_window_t

0x965d,	// (0x000398a6) query_popup_pane_ParamLimits

0x965d,	// (0x000398a6) query_popup_pane

0xf4b9,	// (0x0003f702) bg_popup_window_pane_cp15_ParamLimits

0xf4b9,	// (0x0003f702) bg_popup_window_pane_cp15

0xf4d9,	// (0x0003f722) indicator_popup_pane_cp1_ParamLimits

0xf4d9,	// (0x0003f722) indicator_popup_pane_cp1

0xf4ec,	// (0x0003f735) indicator_popup_pane_cp2_ParamLimits

0xf4ec,	// (0x0003f735) indicator_popup_pane_cp2

0xf507,	// (0x0003f750) popup_query_data_code_window_g1_ParamLimits

0xf507,	// (0x0003f750) popup_query_data_code_window_g1

0xf51a,	// (0x0003f763) popup_query_data_code_window_t1_ParamLimits

0xf51a,	// (0x0003f763) popup_query_data_code_window_t1

0xf52c,	// (0x0003f775) popup_query_data_code_window_t2_ParamLimits

0xf52c,	// (0x0003f775) popup_query_data_code_window_t2

0xf53e,	// (0x0003f787) popup_query_data_code_window_t3_ParamLimits

0xf53e,	// (0x0003f787) popup_query_data_code_window_t3

0x212b,	// (0x00032374) popup_query_data_code_window_t4_ParamLimits

0x212b,	// (0x00032374) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003f7d9) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003f7d9) popup_query_data_code_window_t

0x7283,	// (0x000374cc) list_single_midp_graphic_pane_g3

0x2145,	// (0x0003238e) query_popup_data_pane_cp2_ParamLimits

0x2158,	// (0x000323a1) query_popup_pane_cp2_ParamLimits

0x2158,	// (0x000323a1) query_popup_pane_cp2

0xf282,	// (0x0003f4cb) bg_popup_window_pane_cp11

0x956f,	// (0x000397b8) heading_pane_cp5

0x21ee,	// (0x00032437) listscroll_popup_info_pane

0xf282,	// (0x0003f4cb) input_focus_pane_cp3

0x2173,	// (0x000323bc) query_popup_pane_t1

0x2181,	// (0x000323ca) list_popup_info_pane_ParamLimits

0x2181,	// (0x000323ca) list_popup_info_pane

0x2190,	// (0x000323d9) listscroll_popup_info_pane_g1

0x2198,	// (0x000323e1) scroll_pane_cp7

0x21a2,	// (0x000323eb) popup_info_list_pane_t1_ParamLimits

0x21a2,	// (0x000323eb) popup_info_list_pane_t1

0x21bc,	// (0x00032405) popup_info_list_pane_t2_ParamLimits

0x21bc,	// (0x00032405) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003f7e2) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003f7e2) popup_info_list_pane_t

0xf282,	// (0x0003f4cb) bg_popup_window_pane_cp12

0xa93c,	// (0x0003ab85) find_popup_pane

0xf2d0,	// (0x0003f519) bg_popup_window_pane_cp3

0x21d6,	// (0x0003241f) heading_pane_cp3

0x21e2,	// (0x0003242b) listscroll_popup_graphic_pane

0xf282,	// (0x0003f4cb) bg_popup_window_pane_cp4

0x58e7,	// (0x00035b30) heading_pane_cp4

0x21ee,	// (0x00032437) listscroll_popup_colour_pane

0x58f1,	// (0x00035b3a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x58f1,	// (0x00035b3a) cell_large_graphic_colour_none_popup_pane

0x5905,	// (0x00035b4e) grid_large_graphic_colour_popup_pane_ParamLimits

0x5905,	// (0x00035b4e) grid_large_graphic_colour_popup_pane

0x5931,	// (0x00035b7a) listscroll_popup_colour_pane_g1_ParamLimits

0x5931,	// (0x00035b7a) listscroll_popup_colour_pane_g1

0x5948,	// (0x00035b91) listscroll_popup_colour_pane_g2_ParamLimits

0x5948,	// (0x00035b91) listscroll_popup_colour_pane_g2

0x595f,	// (0x00035ba8) listscroll_popup_colour_pane_g3_ParamLimits

0x595f,	// (0x00035ba8) listscroll_popup_colour_pane_g3

0x596f,	// (0x00035bb8) listscroll_popup_colour_pane_g4_ParamLimits

0x596f,	// (0x00035bb8) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003f7e7) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003f7e7) listscroll_popup_colour_pane_g

0x21f6,	// (0x0003243f) scroll_pane_cp6_ParamLimits

0x21f6,	// (0x0003243f) scroll_pane_cp6

0x5983,	// (0x00035bcc) cell_large_graphic_colour_popup_pane_ParamLimits

0x5983,	// (0x00035bcc) cell_large_graphic_colour_popup_pane

0x2208,	// (0x00032451) cell_large_graphic_colour_none_popup_pane_t1

0xf282,	// (0x0003f4cb) grid_highlight_pane_cp5

0x2217,	// (0x00032460) cell_large_graphic_colour_popup_pane_g1

0x221f,	// (0x00032468) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003f7f0) cell_large_graphic_colour_popup_pane_g

0x2227,	// (0x00032470) cell_large_graphic_colour_popup_pane_g2_copy1

0x2230,	// (0x00032479) grid_highlight_pane_cp4

0x2238,	// (0x00032481) bg_popup_window_pane_cp8_ParamLimits

0x2238,	// (0x00032481) bg_popup_window_pane_cp8

0x2253,	// (0x0003249c) popup_snote_single_text_window_g1_ParamLimits

0x2253,	// (0x0003249c) popup_snote_single_text_window_g1

0x2265,	// (0x000324ae) popup_snote_single_text_window_t1_ParamLimits

0x2265,	// (0x000324ae) popup_snote_single_text_window_t1

0x2278,	// (0x000324c1) popup_snote_single_text_window_t2_ParamLimits

0x2278,	// (0x000324c1) popup_snote_single_text_window_t2

0x228b,	// (0x000324d4) popup_snote_single_text_window_t3_ParamLimits

0x228b,	// (0x000324d4) popup_snote_single_text_window_t3

0x22c4,	// (0x0003250d) popup_snote_single_text_window_t4_ParamLimits

0x22c4,	// (0x0003250d) popup_snote_single_text_window_t4

0x22f8,	// (0x00032541) popup_snote_single_text_window_t5_ParamLimits

0x22f8,	// (0x00032541) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003f7f5) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003f7f5) popup_snote_single_text_window_t

0x2327,	// (0x00032570) bg_popup_window_pane_cp9_ParamLimits

0x2327,	// (0x00032570) bg_popup_window_pane_cp9

0x2253,	// (0x0003249c) popup_snote_single_graphic_window_g1_ParamLimits

0x2253,	// (0x0003249c) popup_snote_single_graphic_window_g1

0x2335,	// (0x0003257e) popup_snote_single_graphic_window_g2_ParamLimits

0x2335,	// (0x0003257e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003f800) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003f800) popup_snote_single_graphic_window_g

0x2341,	// (0x0003258a) popup_snote_single_graphic_window_t1_ParamLimits

0x2341,	// (0x0003258a) popup_snote_single_graphic_window_t1

0x2354,	// (0x0003259d) popup_snote_single_graphic_window_t2_ParamLimits

0x2354,	// (0x0003259d) popup_snote_single_graphic_window_t2

0x2367,	// (0x000325b0) popup_snote_single_graphic_window_t3_ParamLimits

0x2367,	// (0x000325b0) popup_snote_single_graphic_window_t3

0x23a0,	// (0x000325e9) popup_snote_single_graphic_window_t4_ParamLimits

0x23a0,	// (0x000325e9) popup_snote_single_graphic_window_t4

0x23d4,	// (0x0003261d) popup_snote_single_graphic_window_t5_ParamLimits

0x23d4,	// (0x0003261d) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003f805) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003f805) popup_snote_single_graphic_window_t

0xa87a,	// (0x0003aac3) grid_graphic_popup_pane_ParamLimits

0xa87a,	// (0x0003aac3) grid_graphic_popup_pane

0xa8a8,	// (0x0003aaf1) listscroll_popup_graphic_pane_g1_ParamLimits

0xa8a8,	// (0x0003aaf1) listscroll_popup_graphic_pane_g1

0xa8bc,	// (0x0003ab05) listscroll_popup_graphic_pane_g2_ParamLimits

0xa8bc,	// (0x0003ab05) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0003fbff) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0003fbff) listscroll_popup_graphic_pane_g

0xa8d0,	// (0x0003ab19) scroll_pane_cp5

0xa822,	// (0x0003aa6b) cell_graphic_popup_pane_ParamLimits

0xa822,	// (0x0003aa6b) cell_graphic_popup_pane

0xa803,	// (0x0003aa4c) cell_graphic_popup_pane_g1

0xa80b,	// (0x0003aa54) cell_graphic_popup_pane_g2

0x2227,	// (0x00032470) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0003fbf8) cell_graphic_popup_pane_g

0xa814,	// (0x0003aa5d) cell_graphic_popup_pane_t2

0x2230,	// (0x00032479) grid_highlight_pane_cp3

0x2415,	// (0x0003265e) list_gen_pane_ParamLimits

0x2415,	// (0x0003265e) list_gen_pane

0x243d,	// (0x00032686) scroll_pane

0xa765,	// (0x0003a9ae) bg_list_pane_g1_ParamLimits

0xa765,	// (0x0003a9ae) bg_list_pane_g1

0xa780,	// (0x0003a9c9) bg_list_pane_g2_ParamLimits

0xa780,	// (0x0003a9c9) bg_list_pane_g2

0xa793,	// (0x0003a9dc) bg_list_pane_g3_ParamLimits

0xa793,	// (0x0003a9dc) bg_list_pane_g3

0xa7a5,	// (0x0003a9ee) bg_list_pane_g4_ParamLimits

0xa7a5,	// (0x0003a9ee) bg_list_pane_g4

0xa7b7,	// (0x0003aa00) bg_list_pane_g5_ParamLimits

0xa7b7,	// (0x0003aa00) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0003fbed) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0003fbed) bg_list_pane_g

0x764e,	// (0x00037897) list_double2_graphic_large_graphic_pane_ParamLimits

0x764e,	// (0x00037897) list_double2_graphic_large_graphic_pane

0x764e,	// (0x00037897) list_double2_graphic_pane_ParamLimits

0x764e,	// (0x00037897) list_double2_graphic_pane

0x764e,	// (0x00037897) list_double2_large_graphic_pane_ParamLimits

0x764e,	// (0x00037897) list_double2_large_graphic_pane

0x764e,	// (0x00037897) list_double2_pane_ParamLimits

0x764e,	// (0x00037897) list_double2_pane

0x764e,	// (0x00037897) list_double_graphic_heading_pane_ParamLimits

0x764e,	// (0x00037897) list_double_graphic_heading_pane

0x764e,	// (0x00037897) list_double_graphic_pane_ParamLimits

0x764e,	// (0x00037897) list_double_graphic_pane

0x764e,	// (0x00037897) list_double_heading_pane_ParamLimits

0x764e,	// (0x00037897) list_double_heading_pane

0x764e,	// (0x00037897) list_double_large_graphic_pane_ParamLimits

0x764e,	// (0x00037897) list_double_large_graphic_pane

0x764e,	// (0x00037897) list_double_number_pane_ParamLimits

0x764e,	// (0x00037897) list_double_number_pane

0x764e,	// (0x00037897) list_double_pane_ParamLimits

0x764e,	// (0x00037897) list_double_pane

0x764e,	// (0x00037897) list_double_time_pane_ParamLimits

0x764e,	// (0x00037897) list_double_time_pane

0x764e,	// (0x00037897) list_setting_number_pane_ParamLimits

0x764e,	// (0x00037897) list_setting_number_pane

0x764e,	// (0x00037897) list_setting_pane_ParamLimits

0x764e,	// (0x00037897) list_setting_pane

0xa721,	// (0x0003a96a) list_single_2graphic_pane_ParamLimits

0xa721,	// (0x0003a96a) list_single_2graphic_pane

0xa721,	// (0x0003a96a) list_single_graphic_heading_pane_ParamLimits

0xa721,	// (0x0003a96a) list_single_graphic_heading_pane

0xa721,	// (0x0003a96a) list_single_graphic_pane_ParamLimits

0xa721,	// (0x0003a96a) list_single_graphic_pane

0xa721,	// (0x0003a96a) list_single_heading_pane_ParamLimits

0xa721,	// (0x0003a96a) list_single_heading_pane

0x7678,	// (0x000378c1) list_single_large_graphic_pane_ParamLimits

0x7678,	// (0x000378c1) list_single_large_graphic_pane

0xa721,	// (0x0003a96a) list_single_number_heading_pane_ParamLimits

0xa721,	// (0x0003a96a) list_single_number_heading_pane

0xa721,	// (0x0003a96a) list_single_number_pane_ParamLimits

0xa721,	// (0x0003a96a) list_single_number_pane

0xa721,	// (0x0003a96a) list_single_pane_ParamLimits

0xa721,	// (0x0003a96a) list_single_pane

0xf282,	// (0x0003f4cb) list_highlight_pane_cp1

0x43a9,	// (0x000345f2) list_single_pane_g1_ParamLimits

0x43a9,	// (0x000345f2) list_single_pane_g1

0x59be,	// (0x00035c07) list_single_pane_g2_ParamLimits

0x59be,	// (0x00035c07) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0003f817) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0003f817) list_single_pane_g

0x7638,	// (0x00037881) list_single_pane_t1_ParamLimits

0x7638,	// (0x00037881) list_single_pane_t1

0x43a9,	// (0x000345f2) list_single_number_pane_g1_ParamLimits

0x43a9,	// (0x000345f2) list_single_number_pane_g1

0x59be,	// (0x00035c07) list_single_number_pane_g2_ParamLimits

0x59be,	// (0x00035c07) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0003f817) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0003f817) list_single_number_pane_g

0x756a,	// (0x000377b3) list_single_number_pane_t1_ParamLimits

0x756a,	// (0x000377b3) list_single_number_pane_t1

0x7580,	// (0x000377c9) list_single_number_pane_t2_ParamLimits

0x7580,	// (0x000377c9) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0003fbae) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0003fbae) list_single_number_pane_t

0x59b2,	// (0x00035bfb) list_single_graphic_pane_g1_ParamLimits

0x59b2,	// (0x00035bfb) list_single_graphic_pane_g1

0x43a9,	// (0x000345f2) list_single_graphic_pane_g2_ParamLimits

0x43a9,	// (0x000345f2) list_single_graphic_pane_g2

0x59be,	// (0x00035c07) list_single_graphic_pane_g3_ParamLimits

0x59be,	// (0x00035c07) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003f810) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003f810) list_single_graphic_pane_g

0x59ca,	// (0x00035c13) list_single_graphic_pane_t1_ParamLimits

0x59ca,	// (0x00035c13) list_single_graphic_pane_t1

0x43a9,	// (0x000345f2) list_single_heading_pane_g1_ParamLimits

0x43a9,	// (0x000345f2) list_single_heading_pane_g1

0x59be,	// (0x00035c07) list_single_heading_pane_g2_ParamLimits

0x59be,	// (0x00035c07) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003f817) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003f817) list_single_heading_pane_g

0x59e0,	// (0x00035c29) list_single_heading_pane_t1_ParamLimits

0x59e0,	// (0x00035c29) list_single_heading_pane_t1

0x59f6,	// (0x00035c3f) list_single_heading_pane_t2_ParamLimits

0x59f6,	// (0x00035c3f) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003f81c) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003f81c) list_single_heading_pane_t

0x43a9,	// (0x000345f2) list_single_number_heading_pane_g1_ParamLimits

0x43a9,	// (0x000345f2) list_single_number_heading_pane_g1

0x59be,	// (0x00035c07) list_single_number_heading_pane_g2_ParamLimits

0x59be,	// (0x00035c07) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003f817) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003f817) list_single_number_heading_pane_g

0x59e0,	// (0x00035c29) list_single_number_heading_pane_t1_ParamLimits

0x59e0,	// (0x00035c29) list_single_number_heading_pane_t1

0x5a08,	// (0x00035c51) list_single_number_heading_pane_t2_ParamLimits

0x5a08,	// (0x00035c51) list_single_number_heading_pane_t2

0x5a1a,	// (0x00035c63) list_single_number_heading_pane_t3_ParamLimits

0x5a1a,	// (0x00035c63) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003f821) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003f821) list_single_number_heading_pane_t

0x5a2c,	// (0x00035c75) list_single_graphic_heading_pane_g1_ParamLimits

0x5a2c,	// (0x00035c75) list_single_graphic_heading_pane_g1

0x5a38,	// (0x00035c81) list_single_graphic_heading_pane_g4_ParamLimits

0x5a38,	// (0x00035c81) list_single_graphic_heading_pane_g4

0x59be,	// (0x00035c07) list_single_graphic_heading_pane_g5_ParamLimits

0x59be,	// (0x00035c07) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0003f828) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0003f828) list_single_graphic_heading_pane_g

0x59e0,	// (0x00035c29) list_single_graphic_heading_pane_t1_ParamLimits

0x59e0,	// (0x00035c29) list_single_graphic_heading_pane_t1

0x5a49,	// (0x00035c92) list_single_graphic_heading_pane_t2_ParamLimits

0x5a49,	// (0x00035c92) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003f82f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003f82f) list_single_graphic_heading_pane_t

0x5a5b,	// (0x00035ca4) list_single_large_graphic_pane_g1_ParamLimits

0x5a5b,	// (0x00035ca4) list_single_large_graphic_pane_g1

0x43a9,	// (0x000345f2) list_single_large_graphic_pane_g2_ParamLimits

0x43a9,	// (0x000345f2) list_single_large_graphic_pane_g2

0x59be,	// (0x00035c07) list_single_large_graphic_pane_g3_ParamLimits

0x59be,	// (0x00035c07) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0003f834) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0003f834) list_single_large_graphic_pane_g

0x9718,	// (0x00039961) wait_border_pane_g2_copy1

0x5a67,	// (0x00035cb0) list_single_large_graphic_pane_g4_cp2

0x59e0,	// (0x00035c29) list_single_large_graphic_pane_t1_ParamLimits

0x59e0,	// (0x00035c29) list_single_large_graphic_pane_t1

0x5a6f,	// (0x00035cb8) list_double_pane_g1_ParamLimits

0x5a6f,	// (0x00035cb8) list_double_pane_g1

0x5a7b,	// (0x00035cc4) list_double_pane_g2_ParamLimits

0x5a7b,	// (0x00035cc4) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0003f83b) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0003f83b) list_double_pane_g

0x5a87,	// (0x00035cd0) list_double_pane_t1_ParamLimits

0x5a87,	// (0x00035cd0) list_double_pane_t1

0x5a9d,	// (0x00035ce6) list_double_pane_t2_ParamLimits

0x5a9d,	// (0x00035ce6) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003f840) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003f840) list_double_pane_t

0x5aaf,	// (0x00035cf8) list_double2_pane_g1_ParamLimits

0x5aaf,	// (0x00035cf8) list_double2_pane_g1

0x5ac0,	// (0x00035d09) list_double2_pane_g2_ParamLimits

0x5ac0,	// (0x00035d09) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0003f845) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0003f845) list_double2_pane_g

0x5acc,	// (0x00035d15) list_double2_pane_t1_ParamLimits

0x5acc,	// (0x00035d15) list_double2_pane_t1

0x5ae2,	// (0x00035d2b) list_double2_pane_t2_ParamLimits

0x5ae2,	// (0x00035d2b) list_double2_pane_t2

0x0001,

0xf601,	// (0x0003f84a) list_double2_pane_t_ParamLimits

0xf601,	// (0x0003f84a) list_double2_pane_t

0x5a6f,	// (0x00035cb8) list_double_number_pane_g1_ParamLimits

0x5a6f,	// (0x00035cb8) list_double_number_pane_g1

0x5a7b,	// (0x00035cc4) list_double_number_pane_g2_ParamLimits

0x5a7b,	// (0x00035cc4) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0003f83b) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0003f83b) list_double_number_pane_g

0x5af4,	// (0x00035d3d) list_double_number_pane_t1_ParamLimits

0x5af4,	// (0x00035d3d) list_double_number_pane_t1

0x5b06,	// (0x00035d4f) list_double_number_pane_t2_ParamLimits

0x5b06,	// (0x00035d4f) list_double_number_pane_t2

0x5b1c,	// (0x00035d65) list_double_number_pane_t3_ParamLimits

0x5b1c,	// (0x00035d65) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003f84f) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003f84f) list_double_number_pane_t

0x5b2e,	// (0x00035d77) list_double_graphic_pane_g1_ParamLimits

0x5b2e,	// (0x00035d77) list_double_graphic_pane_g1

0x5b3a,	// (0x00035d83) list_double_graphic_pane_g2_ParamLimits

0x5b3a,	// (0x00035d83) list_double_graphic_pane_g2

0x5b49,	// (0x00035d92) list_double_graphic_pane_g3_ParamLimits

0x5b49,	// (0x00035d92) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0003f856) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0003f856) list_double_graphic_pane_g

0x5b61,	// (0x00035daa) list_double_graphic_pane_t1_ParamLimits

0x5b61,	// (0x00035daa) list_double_graphic_pane_t1

0x5b77,	// (0x00035dc0) list_double_graphic_pane_t2_ParamLimits

0x5b77,	// (0x00035dc0) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003f85f) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003f85f) list_double_graphic_pane_t

0x5b89,	// (0x00035dd2) list_double2_graphic_pane_g1_ParamLimits

0x5b89,	// (0x00035dd2) list_double2_graphic_pane_g1

0x5b95,	// (0x00035dde) list_double2_graphic_pane_g2_ParamLimits

0x5b95,	// (0x00035dde) list_double2_graphic_pane_g2

0x5ba1,	// (0x00035dea) list_double2_graphic_pane_g3_ParamLimits

0x5ba1,	// (0x00035dea) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0003f864) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0003f864) list_double2_graphic_pane_g

0x5bad,	// (0x00035df6) list_double2_graphic_pane_t1_ParamLimits

0x5bad,	// (0x00035df6) list_double2_graphic_pane_t1

0x5bc3,	// (0x00035e0c) list_double2_graphic_pane_t2_ParamLimits

0x5bc3,	// (0x00035e0c) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0003f86b) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0003f86b) list_double2_graphic_pane_t

0x5bd5,	// (0x00035e1e) list_double_large_graphic_pane_g1_ParamLimits

0x5bd5,	// (0x00035e1e) list_double_large_graphic_pane_g1

0x5c00,	// (0x00035e49) list_double_large_graphic_pane_g2_ParamLimits

0x5c00,	// (0x00035e49) list_double_large_graphic_pane_g2

0x5a7b,	// (0x00035cc4) list_double_large_graphic_pane_g3_ParamLimits

0x5a7b,	// (0x00035cc4) list_double_large_graphic_pane_g3

0x5c11,	// (0x00035e5a) list_double_large_graphic_pane_g4_ParamLimits

0x5c11,	// (0x00035e5a) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003f870) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003f870) list_double_large_graphic_pane_g

0x5c24,	// (0x00035e6d) list_double_large_graphic_pane_t1_ParamLimits

0x5c24,	// (0x00035e6d) list_double_large_graphic_pane_t1

0x5c3d,	// (0x00035e86) list_double_large_graphic_pane_t2_ParamLimits

0x5c3d,	// (0x00035e86) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0003f87b) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0003f87b) list_double_large_graphic_pane_t

0x5c4f,	// (0x00035e98) list_double2_large_graphic_pane_g1_ParamLimits

0x5c4f,	// (0x00035e98) list_double2_large_graphic_pane_g1

0x5aaf,	// (0x00035cf8) list_double2_large_graphic_pane_g2_ParamLimits

0x5aaf,	// (0x00035cf8) list_double2_large_graphic_pane_g2

0x5ac0,	// (0x00035d09) list_double2_large_graphic_pane_g3_ParamLimits

0x5ac0,	// (0x00035d09) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003f880) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003f880) list_double2_large_graphic_pane_g

0x5c5b,	// (0x00035ea4) list_double2_large_graphic_pane_t1_ParamLimits

0x5c5b,	// (0x00035ea4) list_double2_large_graphic_pane_t1

0x5c71,	// (0x00035eba) list_double2_large_graphic_pane_t2_ParamLimits

0x5c71,	// (0x00035eba) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0003f887) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0003f887) list_double2_large_graphic_pane_t

0x5c83,	// (0x00035ecc) list_double_heading_pane_g1_ParamLimits

0x5c83,	// (0x00035ecc) list_double_heading_pane_g1

0x5c94,	// (0x00035edd) list_double_heading_pane_g2_ParamLimits

0x5c94,	// (0x00035edd) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0003f88c) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0003f88c) list_double_heading_pane_g

0x5ca0,	// (0x00035ee9) list_double_heading_pane_t1_ParamLimits

0x5ca0,	// (0x00035ee9) list_double_heading_pane_t1

0x5ae2,	// (0x00035d2b) list_double_heading_pane_t2_ParamLimits

0x5ae2,	// (0x00035d2b) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003f891) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003f891) list_double_heading_pane_t

0x5cb6,	// (0x00035eff) list_double_graphic_heading_pane_g1_ParamLimits

0x5cb6,	// (0x00035eff) list_double_graphic_heading_pane_g1

0x5c83,	// (0x00035ecc) list_double_graphic_heading_pane_g2_ParamLimits

0x5c83,	// (0x00035ecc) list_double_graphic_heading_pane_g2

0x5c94,	// (0x00035edd) list_double_graphic_heading_pane_g3_ParamLimits

0x5c94,	// (0x00035edd) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0003f896) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0003f896) list_double_graphic_heading_pane_g

0x5cc2,	// (0x00035f0b) list_double_graphic_heading_pane_t1_ParamLimits

0x5cc2,	// (0x00035f0b) list_double_graphic_heading_pane_t1

0x5bc3,	// (0x00035e0c) list_double_graphic_heading_pane_t2_ParamLimits

0x5bc3,	// (0x00035e0c) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0003f89d) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0003f89d) list_double_graphic_heading_pane_t

0x5c00,	// (0x00035e49) list_double_time_pane_g1_ParamLimits

0x5c00,	// (0x00035e49) list_double_time_pane_g1

0x5a7b,	// (0x00035cc4) list_double_time_pane_g2_ParamLimits

0x5a7b,	// (0x00035cc4) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0003f8a2) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0003f8a2) list_double_time_pane_g

0x5cd8,	// (0x00035f21) list_double_time_pane_t1_ParamLimits

0x5cd8,	// (0x00035f21) list_double_time_pane_t1

0x5cee,	// (0x00035f37) list_double_time_pane_t2_ParamLimits

0x5cee,	// (0x00035f37) list_double_time_pane_t2

0x5d00,	// (0x00035f49) list_double_time_pane_t3_ParamLimits

0x5d00,	// (0x00035f49) list_double_time_pane_t3

0x5d12,	// (0x00035f5b) list_double_time_pane_t4_ParamLimits

0x5d12,	// (0x00035f5b) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0003f8a7) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0003f8a7) list_double_time_pane_t

0x5d24,	// (0x00035f6d) list_setting_pane_g1_ParamLimits

0x5d24,	// (0x00035f6d) list_setting_pane_g1

0x5d30,	// (0x00035f79) list_setting_pane_g2_ParamLimits

0x5d30,	// (0x00035f79) list_setting_pane_g2

0x0001,

0xf667,	// (0x0003f8b0) list_setting_pane_g_ParamLimits

0xf667,	// (0x0003f8b0) list_setting_pane_g

0x5d3c,	// (0x00035f85) list_setting_pane_t1_ParamLimits

0x5d3c,	// (0x00035f85) list_setting_pane_t1

0x5d56,	// (0x00035f9f) list_setting_pane_t2_ParamLimits

0x5d56,	// (0x00035f9f) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0003f8b5) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0003f8b5) list_setting_pane_t

0x5d95,	// (0x00035fde) set_value_pane_cp_ParamLimits

0x5d95,	// (0x00035fde) set_value_pane_cp

0x5da3,	// (0x00035fec) list_setting_number_pane_g1_ParamLimits

0x5da3,	// (0x00035fec) list_setting_number_pane_g1

0x5daf,	// (0x00035ff8) list_setting_number_pane_g2_ParamLimits

0x5daf,	// (0x00035ff8) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0003f8bc) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0003f8bc) list_setting_number_pane_g

0x5dbb,	// (0x00036004) list_setting_number_pane_t1_ParamLimits

0x5dbb,	// (0x00036004) list_setting_number_pane_t1

0x5dd4,	// (0x0003601d) list_setting_number_pane_t2_ParamLimits

0x5dd4,	// (0x0003601d) list_setting_number_pane_t2

0x5dee,	// (0x00036037) list_setting_number_pane_t3_ParamLimits

0x5dee,	// (0x00036037) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0003f8c1) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0003f8c1) list_setting_number_pane_t

0x5d95,	// (0x00035fde) set_value_pane_ParamLimits

0x5d95,	// (0x00035fde) set_value_pane

0x2471,	// (0x000326ba) bg_set_opt_pane_ParamLimits

0x2471,	// (0x000326ba) bg_set_opt_pane

0x3e99,	// (0x000340e2) set_value_pane_t1

0x2492,	// (0x000326db) slider_set_pane_cp3

0x249b,	// (0x000326e4) volume_small_pane_cp

0x24a4,	// (0x000326ed) list_form_gen_pane

0x24ad,	// (0x000326f6) scroll_pane_cp8

0x5e31,	// (0x0003607a) form_field_data_pane_ParamLimits

0x5e31,	// (0x0003607a) form_field_data_pane

0x5e4f,	// (0x00036098) form_field_data_wide_pane_ParamLimits

0x5e4f,	// (0x00036098) form_field_data_wide_pane

0x3eaf,	// (0x000340f8) form_field_popup_pane_ParamLimits

0x3eaf,	// (0x000340f8) form_field_popup_pane

0x5e76,	// (0x000360bf) form_field_popup_wide_pane_ParamLimits

0x5e76,	// (0x000360bf) form_field_popup_wide_pane

0x3ed1,	// (0x0003411a) form_field_slider_pane_ParamLimits

0x3ed1,	// (0x0003411a) form_field_slider_pane

0x3ee4,	// (0x0003412d) form_field_slider_wide_pane_ParamLimits

0x3ee4,	// (0x0003412d) form_field_slider_wide_pane

0x24be,	// (0x00032707) data_form_pane

0x5ea1,	// (0x000360ea) form_field_data_pane_t1

0x24ca,	// (0x00032713) input_focus_pane

0x24d8,	// (0x00032721) data_form_wide_pane

0x3f03,	// (0x0003414c) form_field_data_wide_pane_t1

0x2245,	// (0x0003248e) input_focus_pane_cp6

0x5ebb,	// (0x00036104) form_field_popup_pane_t1

0x24ca,	// (0x00032713) input_focus_pane_cp7

0x2504,	// (0x0003274d) list_form_pane

0x3f2d,	// (0x00034176) form_field_popup_wide_pane_t1

0x24ca,	// (0x00032713) input_focus_pane_cp8

0x2510,	// (0x00032759) list_form_wide_pane

0x5edd,	// (0x00036126) form_field_slider_pane_t1_ParamLimits

0x5edd,	// (0x00036126) form_field_slider_pane_t1

0x5ef5,	// (0x0003613e) form_field_slider_pane_t2_ParamLimits

0x5ef5,	// (0x0003613e) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0003f8d1) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0003f8d1) form_field_slider_pane_t

0xf403,	// (0x0003f64c) input_focus_pane_cp9_ParamLimits

0xf403,	// (0x0003f64c) input_focus_pane_cp9

0x5f0a,	// (0x00036153) slider_cont_pane_ParamLimits

0x5f0a,	// (0x00036153) slider_cont_pane

0x251f,	// (0x00032768) form_field_slider_wide_pane_t1_ParamLimits

0x251f,	// (0x00032768) form_field_slider_wide_pane_t1

0x3f42,	// (0x0003418b) form_field_slider_wide_pane_t2_ParamLimits

0x3f42,	// (0x0003418b) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0003f8d6) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0003f8d6) form_field_slider_wide_pane_t

0xf403,	// (0x0003f64c) input_focus_pane_cp10_ParamLimits

0xf403,	// (0x0003f64c) input_focus_pane_cp10

0x5f1e,	// (0x00036167) slider_cont_pane_cp1_ParamLimits

0x5f1e,	// (0x00036167) slider_cont_pane_cp1

0x5f32,	// (0x0003617b) slider_form_pane_cp

0x2531,	// (0x0003277a) input_focus_pane_g1

0x2539,	// (0x00032782) input_focus_pane_g2

0x2541,	// (0x0003278a) input_focus_pane_g3

0x2549,	// (0x00032792) input_focus_pane_g4

0x2551,	// (0x0003279a) input_focus_pane_g5

0x2559,	// (0x000327a2) input_focus_pane_g6

0x2561,	// (0x000327aa) input_focus_pane_g7

0x2569,	// (0x000327b2) input_focus_pane_g8

0x2571,	// (0x000327ba) input_focus_pane_g9

0xf278,	// (0x0003f4c1) input_focus_pane_g10

0x0009,

0xf692,	// (0x0003f8db) input_focus_pane_g

0x9721,	// (0x0003996a) wait_border_pane_g3_copy1

0x5f3a,	// (0x00036183) data_form_pane_t1

0xf278,	// (0x0003f4c1) wait_anim_pane_g1_copy1

0x760a,	// (0x00037853) data_form_wide_pane_t1

0x5f57,	// (0x000361a0) list_form_graphic_pane_cp_ParamLimits

0x5f57,	// (0x000361a0) list_form_graphic_pane_cp

0xa69a,	// (0x0003a8e3) slider_form_pane_g1

0xa6a3,	// (0x0003a8ec) slider_form_pane_g2

0x0006,

0xf995,	// (0x0003fbde) slider_form_pane_g

0x3f54,	// (0x0003419d) list_form_graphic_pane_ParamLimits

0x3f54,	// (0x0003419d) list_form_graphic_pane

0x3f66,	// (0x000341af) list_form_graphic_pane_g1

0x3f6e,	// (0x000341b7) list_form_graphic_pane_t1_ParamLimits

0x3f6e,	// (0x000341b7) list_form_graphic_pane_t1

0xf2d0,	// (0x0003f519) list_highlight_pane_cp5_ParamLimits

0xf2d0,	// (0x0003f519) list_highlight_pane_cp5

0x5f6c,	// (0x000361b5) find_pane_g1

0x2579,	// (0x000327c2) input_find_pane

0x5f75,	// (0x000361be) input_find_pane_g1_ParamLimits

0x5f75,	// (0x000361be) input_find_pane_g1

0x5f81,	// (0x000361ca) input_find_pane_t1_ParamLimits

0x5f81,	// (0x000361ca) input_find_pane_t1

0x5f96,	// (0x000361df) input_find_pane_t2_ParamLimits

0x5f96,	// (0x000361df) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0003f8f0) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0003f8f0) input_find_pane_t

0x2582,	// (0x000327cb) input_focus_pane_cp5_ParamLimits

0x2582,	// (0x000327cb) input_focus_pane_cp5

0x2590,	// (0x000327d9) bg_popup_window_pane_cp2_ParamLimits

0x2590,	// (0x000327d9) bg_popup_window_pane_cp2

0x259d,	// (0x000327e6) listscroll_menu_pane_ParamLimits

0x259d,	// (0x000327e6) listscroll_menu_pane

0x5fb7,	// (0x00036200) popup_submenu_window_ParamLimits

0x5fb7,	// (0x00036200) popup_submenu_window

0x25a9,	// (0x000327f2) find_popup_pane_g1

0x25b1,	// (0x000327fa) input_popup_find_pane_cp

0x2582,	// (0x000327cb) input_focus_pane_cp4_ParamLimits

0x2582,	// (0x000327cb) input_focus_pane_cp4

0x25bb,	// (0x00032804) input_popup_find_pane_t1_ParamLimits

0x25bb,	// (0x00032804) input_popup_find_pane_t1

0xf282,	// (0x0003f4cb) bg_popup_sub_pane_cp

0x25e9,	// (0x00032832) listscroll_popup_sub_pane

0x25f1,	// (0x0003283a) list_submenu_pane_ParamLimits

0x25f1,	// (0x0003283a) list_submenu_pane

0x2602,	// (0x0003284b) scroll_pane_cp4

0x260a,	// (0x00032853) list_single_popup_submenu_pane_ParamLimits

0x260a,	// (0x00032853) list_single_popup_submenu_pane

0x261f,	// (0x00032868) list_single_popup_submenu_pane_g1

0x2627,	// (0x00032870) list_single_popup_submenu_pane_t1_ParamLimits

0x2627,	// (0x00032870) list_single_popup_submenu_pane_t1

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp1_ParamLimits

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp1

0x5ff5,	// (0x0003623e) tabs_2_active_pane_g1

0x5ffd,	// (0x00036246) tabs_2_active_pane_t1

0xf2d0,	// (0x0003f519) bg_passive_tab_pane_cp1_ParamLimits

0xf2d0,	// (0x0003f519) bg_passive_tab_pane_cp1

0x5ff5,	// (0x0003623e) tabs_2_passive_pane_g1

0x5ffd,	// (0x00036246) tabs_2_passive_pane_t1

0x29a3,	// (0x00032bec) bg_active_tab_pane_cp4

0x600f,	// (0x00036258) tabs_2_long_active_pane_t1

0x6022,	// (0x0003626b) bg_passive_tab_pane_cp4

0x728b,	// (0x000374d4) list_single_midp_graphic_pane_g4_ParamLimits

0x29a3,	// (0x00032bec) bg_active_tab_pane_cp5

0x602e,	// (0x00036277) tabs_3_long_active_pane_t1

0x6022,	// (0x0003626b) bg_passive_tab_pane_cp5

0x728b,	// (0x000374d4) list_single_midp_graphic_pane_g4

0xf2d0,	// (0x0003f519) bg_popup_window_pane_cp13_ParamLimits

0xf2d0,	// (0x0003f519) bg_popup_window_pane_cp13

0x2645,	// (0x0003288e) listscroll_popup_fast_pane_ParamLimits

0x2645,	// (0x0003288e) listscroll_popup_fast_pane

0x2654,	// (0x0003289d) grid_popup_fast_pane_ParamLimits

0x2654,	// (0x0003289d) grid_popup_fast_pane

0x2666,	// (0x000328af) scroll_pane_cp9_ParamLimits

0x2666,	// (0x000328af) scroll_pane_cp9

0xc025,	// (0x0003c26e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc025,	// (0x0003c26e) list_single_graphic_hl_pane_t1_cp2

0x268a,	// (0x000328d3) input_focus_pane_cp20_ParamLimits

0x268a,	// (0x000328d3) input_focus_pane_cp20

0x2698,	// (0x000328e1) query_popup_data_pane_t1_ParamLimits

0x2698,	// (0x000328e1) query_popup_data_pane_t1

0x26ab,	// (0x000328f4) query_popup_data_pane_t2_ParamLimits

0x26ab,	// (0x000328f4) query_popup_data_pane_t2

0x26f1,	// (0x0003293a) query_popup_data_pane_t3_ParamLimits

0x26f1,	// (0x0003293a) query_popup_data_pane_t3

0x2732,	// (0x0003297b) query_popup_data_pane_t4_ParamLimits

0x2732,	// (0x0003297b) query_popup_data_pane_t4

0x276e,	// (0x000329b7) query_popup_data_pane_t5_ParamLimits

0x276e,	// (0x000329b7) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0003f8f5) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0003f8f5) query_popup_data_pane_t

0x2531,	// (0x0003277a) bg_set_opt_pane_g1

0x2539,	// (0x00032782) bg_set_opt_pane_g2

0x2541,	// (0x0003278a) bg_set_opt_pane_g3

0x2549,	// (0x00032792) bg_set_opt_pane_g4

0x2551,	// (0x0003279a) bg_set_opt_pane_g5

0x2559,	// (0x000327a2) bg_set_opt_pane_g6

0x2561,	// (0x000327aa) bg_set_opt_pane_g7

0x2569,	// (0x000327b2) bg_set_opt_pane_g8

0x2571,	// (0x000327ba) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0003f900) bg_set_opt_pane_g

0x6711,	// (0x0003695a) control_top_pane_stacon_ParamLimits

0x6711,	// (0x0003695a) control_top_pane_stacon

0x6764,	// (0x000369ad) signal_pane_stacon_ParamLimits

0x6764,	// (0x000369ad) signal_pane_stacon

0x6789,	// (0x000369d2) stacon_top_pane_g1_ParamLimits

0x6789,	// (0x000369d2) stacon_top_pane_g1

0x67ab,	// (0x000369f4) title_pane_stacon_ParamLimits

0x67ab,	// (0x000369f4) title_pane_stacon

0x67d5,	// (0x00036a1e) uni_indicator_pane_stacon_ParamLimits

0x67d5,	// (0x00036a1e) uni_indicator_pane_stacon

0x67ed,	// (0x00036a36) battery_pane_stacon_ParamLimits

0x67ed,	// (0x00036a36) battery_pane_stacon

0x6831,	// (0x00036a7a) control_bottom_pane_stacon_ParamLimits

0x6831,	// (0x00036a7a) control_bottom_pane_stacon

0x6854,	// (0x00036a9d) navi_pane_stacon_ParamLimits

0x6854,	// (0x00036a9d) navi_pane_stacon

0x6877,	// (0x00036ac0) stacon_bottom_pane_g1_ParamLimits

0x6877,	// (0x00036ac0) stacon_bottom_pane_g1

0x6040,	// (0x00036289) aid_levels_signal_lsc_ParamLimits

0x6040,	// (0x00036289) aid_levels_signal_lsc

0x6057,	// (0x000362a0) signal_pane_stacon_g1_ParamLimits

0x6057,	// (0x000362a0) signal_pane_stacon_g1

0x606b,	// (0x000362b4) signal_pane_stacon_g2_ParamLimits

0x606b,	// (0x000362b4) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003f913) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003f913) signal_pane_stacon_g

0x60a0,	// (0x000362e9) title_pane_stacon_t1_ParamLimits

0x60a0,	// (0x000362e9) title_pane_stacon_t1

0x27c6,	// (0x00032a0f) uni_indicator_pane_stacon_g1

0x27d0,	// (0x00032a19) uni_indicator_pane_stacon_g2

0x27b2,	// (0x000329fb) uni_indicator_pane_stacon_g3

0x27bc,	// (0x00032a05) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0003f91f) uni_indicator_pane_stacon_g

0x60c5,	// (0x0003630e) control_top_pane_stacon_g1

0x60cd,	// (0x00036316) control_top_pane_stacon_t1_ParamLimits

0x60cd,	// (0x00036316) control_top_pane_stacon_t1

0x6104,	// (0x0003634d) aid_levels_battery_lsc_ParamLimits

0x6104,	// (0x0003634d) aid_levels_battery_lsc

0x611c,	// (0x00036365) battery_pane_stacon_g1_ParamLimits

0x611c,	// (0x00036365) battery_pane_stacon_g1

0x612f,	// (0x00036378) battery_pane_stacon_g2_ParamLimits

0x612f,	// (0x00036378) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0003f928) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0003f928) battery_pane_stacon_g

0x616d,	// (0x000363b6) navi_icon_pane_stacon

0x6181,	// (0x000363ca) navi_navi_pane_stacon

0x616d,	// (0x000363b6) navi_text_pane_stacon

0x60c5,	// (0x0003630e) control_bottom_pane_stacon_g1

0x6197,	// (0x000363e0) control_bottom_pane_stacon_t1_ParamLimits

0x6197,	// (0x000363e0) control_bottom_pane_stacon_t1

0x61ce,	// (0x00036417) grid_app_pane_ParamLimits

0x61ce,	// (0x00036417) grid_app_pane

0x61f2,	// (0x0003643b) scroll_pane_cp15_ParamLimits

0x61f2,	// (0x0003643b) scroll_pane_cp15

0x6207,	// (0x00036450) cell_app_pane_ParamLimits

0x6207,	// (0x00036450) cell_app_pane

0x6233,	// (0x0003647c) cell_app_pane_g1_ParamLimits

0x6233,	// (0x0003647c) cell_app_pane_g1

0x27f4,	// (0x00032a3d) cell_app_pane_g2_ParamLimits

0x27f4,	// (0x00032a3d) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0003f92d) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0003f92d) cell_app_pane_g

0x2800,	// (0x00032a49) cell_app_pane_t1_ParamLimits

0x2800,	// (0x00032a49) cell_app_pane_t1

0x2812,	// (0x00032a5b) grid_highlight_pane_ParamLimits

0x2812,	// (0x00032a5b) grid_highlight_pane

0x2531,	// (0x0003277a) cell_highlight_pane_g1

0x2539,	// (0x00032782) cell_highlight_pane_g2

0x2541,	// (0x0003278a) cell_highlight_pane_g3

0x2549,	// (0x00032792) cell_highlight_pane_g4

0x2551,	// (0x0003279a) cell_highlight_pane_g5

0x2559,	// (0x000327a2) cell_highlight_pane_g6

0x2561,	// (0x000327aa) cell_highlight_pane_g7

0x2569,	// (0x000327b2) cell_highlight_pane_g8

0x2571,	// (0x000327ba) cell_highlight_pane_g9

0xf278,	// (0x0003f4c1) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0003f8db) cell_highlight_pane_g

0x2823,	// (0x00032a6c) bg_scroll_pane

0x626a,	// (0x000364b3) scroll_handle_pane

0x286a,	// (0x00032ab3) scroll_bg_pane_g1

0x287f,	// (0x00032ac8) scroll_bg_pane_g2

0x2897,	// (0x00032ae0) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0003f932) scroll_bg_pane_g

0x28ac,	// (0x00032af5) scroll_handle_focus_pane_ParamLimits

0x28ac,	// (0x00032af5) scroll_handle_focus_pane

0x286a,	// (0x00032ab3) scroll_handle_pane_g1

0x28b9,	// (0x00032b02) scroll_handle_pane_g2

0x2897,	// (0x00032ae0) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0003f939) scroll_handle_pane_g

0x2582,	// (0x000327cb) bg_popup_sub_pane_cp21_ParamLimits

0x2582,	// (0x000327cb) bg_popup_sub_pane_cp21

0x28cd,	// (0x00032b16) popup_fep_japan_predictive_window_t1_ParamLimits

0x28cd,	// (0x00032b16) popup_fep_japan_predictive_window_t1

0x28e4,	// (0x00032b2d) popup_fep_japan_predictive_window_t2_ParamLimits

0x28e4,	// (0x00032b2d) popup_fep_japan_predictive_window_t2

0x2917,	// (0x00032b60) popup_fep_japan_predictive_window_t3_ParamLimits

0x2917,	// (0x00032b60) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0003f940) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0003f940) popup_fep_japan_predictive_window_t

0xf282,	// (0x0003f4cb) bg_popup_sub_pane_cp23

0x294e,	// (0x00032b97) listscroll_japin_cand_pane

0x2956,	// (0x00032b9f) popup_fep_japan_candidate_window_t1

0x2964,	// (0x00032bad) candidate_pane_ParamLimits

0x2964,	// (0x00032bad) candidate_pane

0x2976,	// (0x00032bbf) scroll_pane_cp30

0x2980,	// (0x00032bc9) list_single_popup_jap_candidate_pane_ParamLimits

0x2980,	// (0x00032bc9) list_single_popup_jap_candidate_pane

0xf282,	// (0x0003f4cb) list_highlight_pane_cp30

0x2994,	// (0x00032bdd) list_single_popup_jap_candidate_pane_t1

0x6293,	// (0x000364dc) level_1_signal

0x62a0,	// (0x000364e9) level_2_signal

0x62ad,	// (0x000364f6) level_3_signal

0x62ba,	// (0x00036503) level_4_signal

0x62c7,	// (0x00036510) level_5_signal

0x62d4,	// (0x0003651d) level_6_signal

0x62e1,	// (0x0003652a) level_7_signal

0x6293,	// (0x000364dc) level_1_battery

0x62a0,	// (0x000364e9) level_2_battery

0x62ad,	// (0x000364f6) level_3_battery

0x62ba,	// (0x00036503) level_4_battery

0x62c7,	// (0x00036510) level_5_battery

0x62d4,	// (0x0003651d) level_6_battery

0x62e1,	// (0x0003652a) level_7_battery

0x6325,	// (0x0003656e) list_menu_pane_ParamLimits

0x6325,	// (0x0003656e) list_menu_pane

0x633b,	// (0x00036584) scroll_pane_cp25_ParamLimits

0x633b,	// (0x00036584) scroll_pane_cp25

0x6354,	// (0x0003659d) list_double2_graphic_pane_cp2_ParamLimits

0x6354,	// (0x0003659d) list_double2_graphic_pane_cp2

0x6354,	// (0x0003659d) list_double2_large_graphic_pane_cp2_ParamLimits

0x6354,	// (0x0003659d) list_double2_large_graphic_pane_cp2

0x6354,	// (0x0003659d) list_double2_pane_cp2_ParamLimits

0x6354,	// (0x0003659d) list_double2_pane_cp2

0x6354,	// (0x0003659d) list_double_graphic_pane_cp2_ParamLimits

0x6354,	// (0x0003659d) list_double_graphic_pane_cp2

0x6354,	// (0x0003659d) list_double_large_graphic_pane_cp2_ParamLimits

0x6354,	// (0x0003659d) list_double_large_graphic_pane_cp2

0x6354,	// (0x0003659d) list_double_number_pane_cp2_ParamLimits

0x6354,	// (0x0003659d) list_double_number_pane_cp2

0x6354,	// (0x0003659d) list_double_pane_cp2_ParamLimits

0x6354,	// (0x0003659d) list_double_pane_cp2

0x637a,	// (0x000365c3) list_single_2graphic_pane_cp2_ParamLimits

0x637a,	// (0x000365c3) list_single_2graphic_pane_cp2

0x637a,	// (0x000365c3) list_single_graphic_heading_pane_cp2_ParamLimits

0x637a,	// (0x000365c3) list_single_graphic_heading_pane_cp2

0x637a,	// (0x000365c3) list_single_graphic_pane_cp2_ParamLimits

0x637a,	// (0x000365c3) list_single_graphic_pane_cp2

0x637a,	// (0x000365c3) list_single_heading_pane_cp2_ParamLimits

0x637a,	// (0x000365c3) list_single_heading_pane_cp2

0x6397,	// (0x000365e0) list_single_large_graphic_pane_cp2_ParamLimits

0x6397,	// (0x000365e0) list_single_large_graphic_pane_cp2

0x637a,	// (0x000365c3) list_single_number_heading_pane_cp2_ParamLimits

0x637a,	// (0x000365c3) list_single_number_heading_pane_cp2

0x637a,	// (0x000365c3) list_single_number_pane_cp2_ParamLimits

0x637a,	// (0x000365c3) list_single_number_pane_cp2

0x637a,	// (0x000365c3) list_single_pane_cp2_ParamLimits

0x637a,	// (0x000365c3) list_single_pane_cp2

0x646d,	// (0x000366b6) bg_popup_sub_pane_cp22

0x6492,	// (0x000366db) popup_side_volume_key_window_g1

0x64bc,	// (0x00036705) popup_side_volume_key_window_t1

0x64da,	// (0x00036723) volume_small_pane_cp1

0xf403,	// (0x0003f64c) bg_popup_sub_pane_cp24_ParamLimits

0xf403,	// (0x0003f64c) bg_popup_sub_pane_cp24

0x64e2,	// (0x0003672b) fep_china_uni_candidate_pane_ParamLimits

0x64e2,	// (0x0003672b) fep_china_uni_candidate_pane

0x64f6,	// (0x0003673f) fep_china_uni_entry_pane

0x6506,	// (0x0003674f) popup_fep_china_uni_window_g1

0x6522,	// (0x0003676b) fep_china_uni_entry_pane_g1

0x652c,	// (0x00036775) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0003f971) fep_china_uni_entry_pane_g

0x6536,	// (0x0003677f) fep_entry_item_pane

0x6540,	// (0x00036789) fep_candidate_item_pane

0x6548,	// (0x00036791) fep_china_uni_candidate_pane_g1

0x6552,	// (0x0003679b) fep_china_uni_candidate_pane_g2

0x655a,	// (0x000367a3) fep_china_uni_candidate_pane_g3

0x6562,	// (0x000367ab) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0003f976) fep_china_uni_candidate_pane_g

0xf278,	// (0x0003f4c1) fep_entry_item_pane_g1

0x656c,	// (0x000367b5) fep_entry_item_pane_t1_ParamLimits

0x656c,	// (0x000367b5) fep_entry_item_pane_t1

0x6582,	// (0x000367cb) fep_candidate_item_pane_t1_ParamLimits

0x6582,	// (0x000367cb) fep_candidate_item_pane_t1

0x6597,	// (0x000367e0) fep_candidate_item_pane_t2_ParamLimits

0x6597,	// (0x000367e0) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0003f97f) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0003f97f) fep_candidate_item_pane_t

0xf2d0,	// (0x0003f519) list_highlight_pane_cp31_ParamLimits

0xf2d0,	// (0x0003f519) list_highlight_pane_cp31

0x65a9,	// (0x000367f2) level_1_signal_lsc

0x65b2,	// (0x000367fb) level_2_signal_lsc

0x65bb,	// (0x00036804) level_3_signal_lsc

0x65c4,	// (0x0003680d) level_4_signal_lsc

0x65cd,	// (0x00036816) level_5_signal_lsc

0x65d6,	// (0x0003681f) level_6_signal_lsc

0x65df,	// (0x00036828) level_7_signal_lsc

0x65df,	// (0x00036828) level_1_battery_lsc

0x65e8,	// (0x00036831) level_2_battery_lsc

0x65f1,	// (0x0003683a) level_3_battery_lsc

0x65fa,	// (0x00036843) level_4_battery_lsc

0x6603,	// (0x0003684c) level_5_battery_lsc

0x660c,	// (0x00036855) level_6_battery_lsc

0x65a9,	// (0x000367f2) level_7_battery_lsc

0x6615,	// (0x0003685e) scroll_handle_focus_pane_g1

0x661e,	// (0x00036867) scroll_handle_focus_pane_g2

0x6627,	// (0x00036870) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0003f984) scroll_handle_focus_pane_g

0x6630,	// (0x00036879) list_single_2graphic_pane_g1_ParamLimits

0x6630,	// (0x00036879) list_single_2graphic_pane_g1

0x5a38,	// (0x00035c81) list_single_2graphic_pane_g2_ParamLimits

0x5a38,	// (0x00035c81) list_single_2graphic_pane_g2

0x59be,	// (0x00035c07) list_single_2graphic_pane_g3_ParamLimits

0x59be,	// (0x00035c07) list_single_2graphic_pane_g3

0x663c,	// (0x00036885) list_single_2graphic_pane_g4_ParamLimits

0x663c,	// (0x00036885) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0003f98b) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0003f98b) list_single_2graphic_pane_g

0x6648,	// (0x00036891) list_single_2graphic_pane_t1_ParamLimits

0x6648,	// (0x00036891) list_single_2graphic_pane_t1

0x6676,	// (0x000368bf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6676,	// (0x000368bf) list_double2_graphic_large_graphic_pane_g1

0x5aaf,	// (0x00035cf8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5aaf,	// (0x00035cf8) list_double2_graphic_large_graphic_pane_g2

0x5ac0,	// (0x00035d09) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5ac0,	// (0x00035d09) list_double2_graphic_large_graphic_pane_g3

0x6688,	// (0x000368d1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6688,	// (0x000368d1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0003f994) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0003f994) list_double2_graphic_large_graphic_pane_g

0x6694,	// (0x000368dd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6694,	// (0x000368dd) list_double2_graphic_large_graphic_pane_t1

0x66aa,	// (0x000368f3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x66aa,	// (0x000368f3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0003f99d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0003f99d) list_double2_graphic_large_graphic_pane_t

0x6939,	// (0x00036b82) popup_fast_swap_window_ParamLimits

0x6939,	// (0x00036b82) popup_fast_swap_window

0x6957,	// (0x00036ba0) popup_side_volume_key_window

0x6975,	// (0x00036bbe) stacon_top_pane

0x697f,	// (0x00036bc8) status_pane_ParamLimits

0x697f,	// (0x00036bc8) status_pane

0x6975,	// (0x00036bbe) status_small_pane

0xf282,	// (0x0003f4cb) control_pane

0xf282,	// (0x0003f4cb) stacon_bottom_pane

0x24ad,	// (0x000326f6) scroll_pane_cp121

0x24a4,	// (0x000326ed) set_content_pane

0x66bc,	// (0x00036905) bg_active_tab_pane_g1_cp1

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp1

0x66ce,	// (0x00036917) bg_active_tab_pane_g3_cp1

0x66bc,	// (0x00036905) bg_passive_tab_pane_g1_cp1

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp1

0x66ce,	// (0x00036917) bg_passive_tab_pane_g3_cp1

0x66d7,	// (0x00036920) bg_active_tab_pane_g1_cp2

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp2

0x66e0,	// (0x00036929) bg_active_tab_pane_g3_cp2

0x66d7,	// (0x00036920) bg_passive_tab_pane_g1_cp2

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp2

0x66e0,	// (0x00036929) bg_passive_tab_pane_g3_cp2

0x66e9,	// (0x00036932) bg_active_tab_pane_g1_cp3

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp3

0x66f2,	// (0x0003693b) bg_active_tab_pane_g3_cp3

0x66e9,	// (0x00036932) bg_passive_tab_pane_g1_cp3

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp3

0x66f2,	// (0x0003693b) bg_passive_tab_pane_g3_cp3

0x66fb,	// (0x00036944) bg_active_tab_pane_g1_cp4

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp4

0x6706,	// (0x0003694f) bg_active_tab_pane_g3_cp4

0x66fb,	// (0x00036944) bg_passive_tab_pane_g1_cp4

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp4

0x6706,	// (0x0003694f) bg_passive_tab_pane_g3_cp4

0x6893,	// (0x00036adc) bg_active_tab_pane_g1_cp5

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp5

0x689c,	// (0x00036ae5) bg_active_tab_pane_g3_cp5

0x6893,	// (0x00036adc) bg_passive_tab_pane_g1_cp5

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp5

0x689c,	// (0x00036ae5) bg_passive_tab_pane_g3_cp5

0x68a5,	// (0x00036aee) list_set_graphic_pane_ParamLimits

0x68a5,	// (0x00036aee) list_set_graphic_pane

0xf282,	// (0x0003f4cb) bg_set_opt_pane_cp4

0x68ba,	// (0x00036b03) list_set_graphic_pane_g1_ParamLimits

0x68ba,	// (0x00036b03) list_set_graphic_pane_g1

0x68c6,	// (0x00036b0f) list_set_graphic_pane_g2_ParamLimits

0x68c6,	// (0x00036b0f) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0003f9a2) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0003f9a2) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0003fd1c) volume_small_pane_cp_g

0x68ea,	// (0x00036b33) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x68ea,	// (0x00036b33) list_double2_large_graphic_pane_g1_cp2

0x68f8,	// (0x00036b41) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x68f8,	// (0x00036b41) list_double2_large_graphic_pane_g2_cp2

0x6909,	// (0x00036b52) list_double2_large_graphic_pane_g3_cp2

0x6911,	// (0x00036b5a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6911,	// (0x00036b5a) list_double2_large_graphic_pane_t1_cp2

0x6927,	// (0x00036b70) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6927,	// (0x00036b70) list_double2_large_graphic_pane_t2_cp2

0xa20b,	// (0x0003a454) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa20b,	// (0x0003a454) list_double_large_graphic_pane_g1_cp2

0xa21e,	// (0x0003a467) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa21e,	// (0x0003a467) list_double_large_graphic_pane_g2_cp2

0x8718,	// (0x00038961) list_double_large_graphic_pane_g3_cp2

0xa22f,	// (0x0003a478) list_double_large_graphic_pane_g4_cp

0xa237,	// (0x0003a480) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa237,	// (0x0003a480) list_double_large_graphic_pane_t1_cp2

0xa24e,	// (0x0003a497) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa24e,	// (0x0003a497) list_double_large_graphic_pane_t2_cp2

0x698d,	// (0x00036bd6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x698d,	// (0x00036bd6) list_double2_graphic_pane_g1_cp2

0x699b,	// (0x00036be4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x699b,	// (0x00036be4) list_double2_graphic_pane_g2_cp2

0x69ac,	// (0x00036bf5) list_double2_graphic_pane_g3_cp2

0x69b6,	// (0x00036bff) list_double2_graphic_pane_t1_cp2_ParamLimits

0x69b6,	// (0x00036bff) list_double2_graphic_pane_t1_cp2

0x69cc,	// (0x00036c15) list_double2_graphic_pane_t2_cp2_ParamLimits

0x69cc,	// (0x00036c15) list_double2_graphic_pane_t2_cp2

0x69de,	// (0x00036c27) list_single_number_heading_pane_g1_cp2_ParamLimits

0x69de,	// (0x00036c27) list_single_number_heading_pane_g1_cp2

0x8665,	// (0x000388ae) list_single_number_heading_pane_g2_cp2

0x866d,	// (0x000388b6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x866d,	// (0x000388b6) list_single_number_heading_pane_t1_cp2

0x8683,	// (0x000388cc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8683,	// (0x000388cc) list_single_number_heading_pane_t2_cp2

0x8697,	// (0x000388e0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8697,	// (0x000388e0) list_single_number_heading_pane_t3_cp2

0x69de,	// (0x00036c27) list_single_heading_pane_g1_cp2_ParamLimits

0x69de,	// (0x00036c27) list_single_heading_pane_g1_cp2

0x8665,	// (0x000388ae) list_single_heading_pane_g2_cp2

0x866d,	// (0x000388b6) list_single_heading_pane_t1_cp2_ParamLimits

0x866d,	// (0x000388b6) list_single_heading_pane_t1_cp2

0xa005,	// (0x0003a24e) list_single_heading_pane_t2_cp2_ParamLimits

0xa005,	// (0x0003a24e) list_single_heading_pane_t2_cp2

0x9f47,	// (0x0003a190) list_double_graphic_pane_g1_cp2_ParamLimits

0x9f47,	// (0x0003a190) list_double_graphic_pane_g1_cp2

0x9f53,	// (0x0003a19c) list_double_graphic_pane_g2_cp2_ParamLimits

0x9f53,	// (0x0003a19c) list_double_graphic_pane_g2_cp2

0x9f62,	// (0x0003a1ab) list_double_graphic_pane_g3_cp2

0x9f6a,	// (0x0003a1b3) list_double_graphic_pane_t1_cp2_ParamLimits

0x9f6a,	// (0x0003a1b3) list_double_graphic_pane_t1_cp2

0x9f80,	// (0x0003a1c9) list_double_graphic_pane_t2_cp2_ParamLimits

0x9f80,	// (0x0003a1c9) list_double_graphic_pane_t2_cp2

0x870c,	// (0x00038955) list_double_number_pane_g1_cp2_ParamLimits

0x870c,	// (0x00038955) list_double_number_pane_g1_cp2

0x8718,	// (0x00038961) list_double_number_pane_g2_cp2

0x9f0b,	// (0x0003a154) list_double_number_pane_t1_cp2_ParamLimits

0x9f0b,	// (0x0003a154) list_double_number_pane_t1_cp2

0x9f1f,	// (0x0003a168) list_double_number_pane_t2_cp2_ParamLimits

0x9f1f,	// (0x0003a168) list_double_number_pane_t2_cp2

0x9f35,	// (0x0003a17e) list_double_number_pane_t3_cp2_ParamLimits

0x9f35,	// (0x0003a17e) list_double_number_pane_t3_cp2

0x9df4,	// (0x0003a03d) list_single_graphic_pane_g1_cp2_ParamLimits

0x9df4,	// (0x0003a03d) list_single_graphic_pane_g1_cp2

0x8772,	// (0x000389bb) list_single_graphic_pane_g2_cp2_ParamLimits

0x8772,	// (0x000389bb) list_single_graphic_pane_g2_cp2

0x877e,	// (0x000389c7) list_single_graphic_pane_g3_cp2

0x9dca,	// (0x0003a013) list_single_graphic_pane_t1_cp2_ParamLimits

0x9dca,	// (0x0003a013) list_single_graphic_pane_t1_cp2

0x8772,	// (0x000389bb) list_single_number_pane_g1_cp2_ParamLimits

0x8772,	// (0x000389bb) list_single_number_pane_g1_cp2

0x877e,	// (0x000389c7) list_single_number_pane_g2_cp2

0x9dca,	// (0x0003a013) list_single_number_pane_t1_cp2_ParamLimits

0x9dca,	// (0x0003a013) list_single_number_pane_t1_cp2

0x9de0,	// (0x0003a029) list_single_number_pane_t2_cp2_ParamLimits

0x9de0,	// (0x0003a029) list_single_number_pane_t2_cp2

0x68f8,	// (0x00036b41) list_double2_pane_g1_cp2_ParamLimits

0x68f8,	// (0x00036b41) list_double2_pane_g1_cp2

0x6909,	// (0x00036b52) list_double2_pane_g2_cp2

0x86e4,	// (0x0003892d) list_double2_pane_t1_cp2_ParamLimits

0x86e4,	// (0x0003892d) list_double2_pane_t1_cp2

0x86fa,	// (0x00038943) list_double2_pane_t2_cp2_ParamLimits

0x86fa,	// (0x00038943) list_double2_pane_t2_cp2

0x870c,	// (0x00038955) list_double_pane_g1_cp2_ParamLimits

0x870c,	// (0x00038955) list_double_pane_g1_cp2

0x8718,	// (0x00038961) list_double_pane_g2_cp2

0x8720,	// (0x00038969) list_double_pane_t1_cp2_ParamLimits

0x8720,	// (0x00038969) list_double_pane_t1_cp2

0x8736,	// (0x0003897f) list_double_pane_t2_cp2_ParamLimits

0x8736,	// (0x0003897f) list_double_pane_t2_cp2

0x8762,	// (0x000389ab) list_single_pane_cp2_g3

0x8772,	// (0x000389bb) list_single_pane_g1_cp2_ParamLimits

0x8772,	// (0x000389bb) list_single_pane_g1_cp2

0x877e,	// (0x000389c7) list_single_pane_g2_cp2

0x8786,	// (0x000389cf) list_single_pane_t1_cp2_ParamLimits

0x8786,	// (0x000389cf) list_single_pane_t1_cp2

0x879e,	// (0x000389e7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x879e,	// (0x000389e7) list_single_large_graphic_pane_g1_cp2

0x87ac,	// (0x000389f5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x87ac,	// (0x000389f5) list_single_large_graphic_pane_g2_cp2

0x87b8,	// (0x00038a01) list_single_large_graphic_pane_g3_cp2

0x87c0,	// (0x00038a09) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x87c0,	// (0x00038a09) list_single_large_graphic_pane_g4_cp1

0x87da,	// (0x00038a23) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x87da,	// (0x00038a23) list_single_large_graphic_pane_t1_cp2

0x9d94,	// (0x00039fdd) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d94,	// (0x00039fdd) list_single_graphic_heading_pane_g1_cp2

0x9d61,	// (0x00039faa) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9d61,	// (0x00039faa) list_single_graphic_heading_pane_g4_cp2

0x877e,	// (0x000389c7) list_single_graphic_heading_pane_g5_cp2

0x9da0,	// (0x00039fe9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9da0,	// (0x00039fe9) list_single_graphic_heading_pane_t1_cp2

0x9db6,	// (0x00039fff) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9db6,	// (0x00039fff) list_single_graphic_heading_pane_t2_cp2

0x9d55,	// (0x00039f9e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9d55,	// (0x00039f9e) list_single_2graphic_pane_g1_cp2

0x9d61,	// (0x00039faa) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9d61,	// (0x00039faa) list_single_2graphic_pane_g2_cp2

0x877e,	// (0x000389c7) list_single_2graphic_pane_g3_cp2

0x9d72,	// (0x00039fbb) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9d72,	// (0x00039fbb) list_single_2graphic_pane_g4_cp2

0x9d7e,	// (0x00039fc7) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9d7e,	// (0x00039fc7) list_single_2graphic_pane_t1_cp2

0xf278,	// (0x0003f4c1) list_highlight_pane_g10_cp1

0x992d,	// (0x00039b76) list_highlight_pane_g1_cp1

0x9935,	// (0x00039b7e) list_highlight_pane_g2_cp1

0x993d,	// (0x00039b86) list_highlight_pane_g3_cp1

0x9945,	// (0x00039b8e) list_highlight_pane_g4_cp1

0x994d,	// (0x00039b96) list_highlight_pane_g5_cp1

0x9955,	// (0x00039b9e) list_highlight_pane_g6_cp1

0x995d,	// (0x00039ba6) list_highlight_pane_g7_cp1

0x9965,	// (0x00039bae) list_highlight_pane_g8_cp1

0x996d,	// (0x00039bb6) list_highlight_pane_g9_cp1

0x984d,	// (0x00039a96) form_field_slider_pane_t3

0x985b,	// (0x00039aa4) form_field_slider_pane_t4

0x9869,	// (0x00039ab2) slider_form_pane_ParamLimits

0x9869,	// (0x00039ab2) slider_form_pane

0xf282,	// (0x0003f4cb) control_abbreviations

0xf282,	// (0x0003f4cb) control_conventions

0xf282,	// (0x0003f4cb) control_definitions

0xf282,	// (0x0003f4cb) format_table_attribute

0xa05b,	// (0x0003a2a4) bg_popup_preview_window_pane_g9

0xf282,	// (0x0003f4cb) format_table_data2

0xf282,	// (0x0003f4cb) format_table_data3

0xf282,	// (0x0003f4cb) format_table_data_example

0x0008,

0xf282,	// (0x0003f4cb) intro_purpose

0xf8f5,	// (0x0003fb3e) bg_popup_preview_window_pane_g

0xf282,	// (0x0003f4cb) texts_category

0xf282,	// (0x0003f4cb) texts_graphics

0x87f0,	// (0x00038a39) text_digital

0x87ff,	// (0x00038a48) text_primary

0x880e,	// (0x00038a57) text_primary_small

0x881d,	// (0x00038a66) text_secondary

0x882c,	// (0x00038a75) text_title

0xa7d7,	// (0x0003aa20) bg_passive_tab_pane_g1_cp3_srt

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp3_srt

0xa7e0,	// (0x0003aa29) bg_passive_tab_pane_g3_cp3_srt

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp3_srt_ParamLimits

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp3_srt

0xa7e9,	// (0x0003aa32) tabs_4_active_pane_srt_g1

0xa7f1,	// (0x0003aa3a) tabs_4_active_pane_srt_t1_ParamLimits

0xa7f1,	// (0x0003aa3a) tabs_4_active_pane_srt_t1

0xa7d7,	// (0x0003aa20) bg_active_tab_pane_g1_cp3_copy1

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp3_copy1

0xa7e0,	// (0x0003aa29) bg_active_tab_pane_g3_cp3_copy1

0xf2d0,	// (0x0003f519) tabs_2_long_active_pane_srt_ParamLimits

0xf2d0,	// (0x0003f519) tabs_2_long_active_pane_srt

0xf2d0,	// (0x0003f519) tabs_2_long_passive_pane_srt_ParamLimits

0xf2d0,	// (0x0003f519) tabs_2_long_passive_pane_srt

0x6022,	// (0x0003626b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6022,	// (0x0003626b) bg_passive_tab_pane_cp4_srt

0xa4ab,	// (0x0003a6f4) bg_passive_tab_pane_g1_cp4_srt

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp4_srt

0xa4b4,	// (0x0003a6fd) bg_passive_tab_pane_g3_cp4_srt

0x29a3,	// (0x00032bec) bg_active_tab_pane_cp4_srt_ParamLimits

0x29a3,	// (0x00032bec) bg_active_tab_pane_cp4_srt

0xa4bd,	// (0x0003a706) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa4bd,	// (0x0003a706) tabs_2_long_active_pane_srt_t1

0xa4ab,	// (0x0003a6f4) bg_active_tab_pane_g1_cp4_srt

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp4_srt

0xa4b4,	// (0x0003a6fd) bg_active_tab_pane_g3_cp4_srt

0xf403,	// (0x0003f64c) tabs_3_long_active_pane_srt_ParamLimits

0xf403,	// (0x0003f64c) tabs_3_long_active_pane_srt

0xf403,	// (0x0003f64c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xf403,	// (0x0003f64c) tabs_3_long_passive_pane_cp_srt

0xf403,	// (0x0003f64c) tabs_3_long_passive_pane_srt_ParamLimits

0xf403,	// (0x0003f64c) tabs_3_long_passive_pane_srt

0x6022,	// (0x0003626b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6022,	// (0x0003626b) bg_passive_tab_pane_cp5_srt

0x6893,	// (0x00036adc) bg_passive_tab_pane_g1_cp5_srt

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp5_srt

0x689c,	// (0x00036ae5) bg_passive_tab_pane_g3_cp5_srt

0x29a3,	// (0x00032bec) bg_active_tab_pane_cp5_srt_ParamLimits

0x29a3,	// (0x00032bec) bg_active_tab_pane_cp5_srt

0xa499,	// (0x0003a6e2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa499,	// (0x0003a6e2) tabs_3_long_active_pane_srt_t1

0x6893,	// (0x00036adc) bg_active_tab_pane_g1_cp5_srt

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp5_srt

0x689c,	// (0x00036ae5) bg_active_tab_pane_g3_cp5_srt

0xa48b,	// (0x0003a6d4) navi_text_pane_srt_t1

0xa483,	// (0x0003a6cc) navi_icon_pane_srt_g1

0x89f7,	// (0x00038c40) midp_editing_number_pane_srt

0x883b,	// (0x00038a84) midp_ticker_pane_srt

0x89ff,	// (0x00038c48) midp_ticker_pane_srt_g1

0x8a07,	// (0x00038c50) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0003f9c1) midp_ticker_pane_srt_g

0x8a0f,	// (0x00038c58) midp_ticker_pane_srt_t1

0xa474,	// (0x0003a6bd) midp_editing_number_pane_t1_copy1

0x6022,	// (0x0003626b) listscroll_midp_pane

0x6022,	// (0x0003626b) midp_form_pane

0x88a5,	// (0x00038aee) midp_info_popup_window_ParamLimits

0x88a5,	// (0x00038aee) midp_info_popup_window

0x2582,	// (0x000327cb) bg_popup_sub_pane_cp50_ParamLimits

0x2582,	// (0x000327cb) bg_popup_sub_pane_cp50

0x9563,	// (0x000397ac) listscroll_midp_info_pane_ParamLimits

0x9563,	// (0x000397ac) listscroll_midp_info_pane

0x954b,	// (0x00039794) listscroll_form_midp_pane_ParamLimits

0x954b,	// (0x00039794) listscroll_form_midp_pane

0x9557,	// (0x000397a0) scroll_bar_cp050

0x952b,	// (0x00039774) list_midp_pane

0xb2bc,	// (0x0003b505) signal_pane_g2_cp

0x9465,	// (0x000396ae) listscroll_midp_info_pane_t1_ParamLimits

0x9465,	// (0x000396ae) listscroll_midp_info_pane_t1

0x947d,	// (0x000396c6) listscroll_midp_info_pane_t2_ParamLimits

0x947d,	// (0x000396c6) listscroll_midp_info_pane_t2

0x94bb,	// (0x00039704) listscroll_midp_info_pane_t3_ParamLimits

0x94bb,	// (0x00039704) listscroll_midp_info_pane_t3

0x94f5,	// (0x0003973e) listscroll_midp_info_pane_t4_ParamLimits

0x94f5,	// (0x0003973e) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0003fa79) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0003fa79) listscroll_midp_info_pane_t

0x2602,	// (0x0003284b) scroll_pane_cp21

0x93ff,	// (0x00039648) form_midp_field_choice_group_pane

0x9408,	// (0x00039651) form_midp_field_text_pane

0x944b,	// (0x00039694) form_midp_field_time_pane

0x9453,	// (0x0003969c) form_midp_gauge_slider_pane

0x945c,	// (0x000396a5) form_midp_gauge_wait_pane

0xf282,	// (0x0003f4cb) form_midp_image_pane

0x7377,	// (0x000375c0) list_single_midp_pane_ParamLimits

0x7377,	// (0x000375c0) list_single_midp_pane

0x93c3,	// (0x0003960c) form_midp_field_text_pane_t1

0x91af,	// (0x000393f8) input_focus_pane_cp050

0x93ee,	// (0x00039637) list_midp_form_text_pane

0x9392,	// (0x000395db) form_midp_field_choice_group_pane_t1

0x93a0,	// (0x000395e9) input_focus_pane_cp051

0x93b4,	// (0x000395fd) list_midp_choice_pane

0xf282,	// (0x0003f4cb) status_idle_pane

0x9376,	// (0x000395bf) form_midp_field_time_pane_t1

0xf278,	// (0x0003f4c1) wait_anim_pane_g2_copy1

0x9384,	// (0x000395cd) form_midp_field_time_pane_t2

0x0001,

0x8955,	// (0x00038b9e) aid_navinavi_width_2_pane

0xf82b,	// (0x0003fa74) form_midp_field_time_pane_t

0xf282,	// (0x0003f4cb) input_focus_pane_cp052

0xf282,	// (0x0003f4cb) bg_input_focus_pane_cp040

0x9336,	// (0x0003957f) form_midp_gauge_slider_pane_t1

0x9344,	// (0x0003958d) form_midp_gauge_slider_pane_t2

0x9352,	// (0x0003959b) form_midp_gauge_slider_pane_t3

0x9360,	// (0x000395a9) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0003fa6b) form_midp_gauge_slider_pane_t

0x936e,	// (0x000395b7) form_midp_slider_pane

0xf2d0,	// (0x0003f519) bg_input_focus_pane_cp041_ParamLimits

0xf2d0,	// (0x0003f519) bg_input_focus_pane_cp041

0x9303,	// (0x0003954c) form_midp_gauge_wait_pane_t1_ParamLimits

0x9303,	// (0x0003954c) form_midp_gauge_wait_pane_t1

0x9315,	// (0x0003955e) form_midp_gauge_wait_pane_t2_ParamLimits

0x9315,	// (0x0003955e) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0003fa66) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0003fa66) form_midp_gauge_wait_pane_t

0x9327,	// (0x00039570) form_midp_wait_pane_ParamLimits

0x9327,	// (0x00039570) form_midp_wait_pane

0x92cb,	// (0x00039514) form_midp_image_pane_g1

0x92d4,	// (0x0003951d) form_midp_image_pane_t1

0x92e3,	// (0x0003952c) form_midp_image_pane_t2

0x92f2,	// (0x0003953b) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0003fa5f) form_midp_image_pane_t

0x92c2,	// (0x0003950b) list_single_midp_pane_g1

0x403f,	// (0x00034288) list_single_midp_pane_t1

0x92a8,	// (0x000394f1) list_midp_form_item_pane_ParamLimits

0x92a8,	// (0x000394f1) list_midp_form_item_pane

0x88fd,	// (0x00038b46) list_midp_form_item_pane_t1

0x890c,	// (0x00038b55) midp_ticker_pane_g1

0x8918,	// (0x00038b61) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0003f9a7) midp_ticker_pane_g

0x8924,	// (0x00038b6d) midp_ticker_pane_t1

0xa6e7,	// (0x0003a930) midp_editing_number_pane_t1

0xa6c5,	// (0x0003a90e) midp_editing_number_pane

0xa6d4,	// (0x0003a91d) midp_ticker_pane

0xa464,	// (0x0003a6ad) ai_message_heading_pane

0xf282,	// (0x0003f4cb) bg_popup_window_pane_cp14

0xa46c,	// (0x0003a6b5) listscroll_ai_message_pane

0xa3ea,	// (0x0003a633) ai_message_heading_pane_g1_ParamLimits

0xa3ea,	// (0x0003a633) ai_message_heading_pane_g1

0xa3f6,	// (0x0003a63f) ai_message_heading_pane_g2_ParamLimits

0xa3f6,	// (0x0003a63f) ai_message_heading_pane_g2

0xa404,	// (0x0003a64d) ai_message_heading_pane_g3_ParamLimits

0xa404,	// (0x0003a64d) ai_message_heading_pane_g3

0xa410,	// (0x0003a659) ai_message_heading_pane_g4_ParamLimits

0xa410,	// (0x0003a659) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0003fba0) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0003fba0) ai_message_heading_pane_g

0xa41c,	// (0x0003a665) ai_message_heading_pane_t1_ParamLimits

0xa41c,	// (0x0003a665) ai_message_heading_pane_t1

0xa436,	// (0x0003a67f) ai_message_heading_pane_t2_ParamLimits

0xa436,	// (0x0003a67f) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0003fba9) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0003fba9) ai_message_heading_pane_t

0xa44a,	// (0x0003a693) bg_popup_heading_pane_cp1_ParamLimits

0xa44a,	// (0x0003a693) bg_popup_heading_pane_cp1

0xa3d8,	// (0x0003a621) list_ai_message_pane_ParamLimits

0xa3d8,	// (0x0003a621) list_ai_message_pane

0x2602,	// (0x0003284b) scroll_pane_cp10

0xa374,	// (0x0003a5bd) list_ai_message_pane_g1

0xa37c,	// (0x0003a5c5) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0003fb7d) list_ai_message_pane_g

0xa384,	// (0x0003a5cd) list_ai_message_pane_t1_ParamLimits

0xa384,	// (0x0003a5cd) list_ai_message_pane_t1

0xa399,	// (0x0003a5e2) list_ai_message_pane_t2_ParamLimits

0xa399,	// (0x0003a5e2) list_ai_message_pane_t2

0xa3ae,	// (0x0003a5f7) list_ai_message_pane_t3_ParamLimits

0xa3ae,	// (0x0003a5f7) list_ai_message_pane_t3

0xa3c3,	// (0x0003a60c) list_ai_message_pane_t4_ParamLimits

0xa3c3,	// (0x0003a60c) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0003fb82) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0003fb82) list_ai_message_pane_t

0xa35d,	// (0x0003a5a6) cell_ai_soft_ind_pane_ParamLimits

0xa35d,	// (0x0003a5a6) cell_ai_soft_ind_pane

0x8936,	// (0x00038b7f) cell_ai_soft_ind_pane_g1_ParamLimits

0x8936,	// (0x00038b7f) cell_ai_soft_ind_pane_g1

0xf282,	// (0x0003f4cb) grid_highlight_cp1

0x8943,	// (0x00038b8c) text_secondary_cp56_ParamLimits

0x8943,	// (0x00038b8c) text_secondary_cp56

0xa332,	// (0x0003a57b) example_general_pane_ParamLimits

0xa332,	// (0x0003a57b) example_general_pane

0xa33e,	// (0x0003a587) example_parent_pane_g1_ParamLimits

0xa33e,	// (0x0003a587) example_parent_pane_g1

0xa34a,	// (0x0003a593) example_parent_pane_t1_ParamLimits

0xa34a,	// (0x0003a593) example_parent_pane_t1

0x6fc6,	// (0x0003720f) popup_preview_text_window_ParamLimits

0x6fc6,	// (0x0003720f) popup_preview_text_window

0x876a,	// (0x000389b3) list_single_pane_cp2_g4

0xf4b9,	// (0x0003f702) bg_popup_preview_window_pane_ParamLimits

0xf4b9,	// (0x0003f702) bg_popup_preview_window_pane

0xa065,	// (0x0003a2ae) popup_preview_text_window_t1_ParamLimits

0xa065,	// (0x0003a2ae) popup_preview_text_window_t1

0xa083,	// (0x0003a2cc) popup_preview_text_window_t2_ParamLimits

0xa083,	// (0x0003a2cc) popup_preview_text_window_t2

0xa0cc,	// (0x0003a315) popup_preview_text_window_t3_ParamLimits

0xa0cc,	// (0x0003a315) popup_preview_text_window_t3

0xa111,	// (0x0003a35a) popup_preview_text_window_t4_ParamLimits

0xa111,	// (0x0003a35a) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0003fb51) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0003fb51) popup_preview_text_window_t

0xa18f,	// (0x0003a3d8) scroll_pane_cp11

0x90b3,	// (0x000392fc) bg_popup_preview_window_pane_g1

0xa019,	// (0x0003a262) bg_popup_preview_window_pane_g2

0xa023,	// (0x0003a26c) bg_popup_preview_window_pane_g3

0xa02d,	// (0x0003a276) bg_popup_preview_window_pane_g4

0xa037,	// (0x0003a280) bg_popup_preview_window_pane_g5

0xa041,	// (0x0003a28a) bg_popup_preview_window_pane_g6

0xa049,	// (0x0003a292) bg_popup_preview_window_pane_g7

0xa051,	// (0x0003a29a) bg_popup_preview_window_pane_g8

0x5234,	// (0x0003547d) aid_popup_width_pane

0x6fa2,	// (0x000371eb) popup_midp_note_alarm_window_ParamLimits

0x6fa2,	// (0x000371eb) popup_midp_note_alarm_window

0x24be,	// (0x00032707) data_form_pane_ParamLimits

0x5e97,	// (0x000360e0) form_field_data_pane_g1

0x5ea1,	// (0x000360ea) form_field_data_pane_t1_ParamLimits

0x24ca,	// (0x00032713) input_focus_pane_ParamLimits

0x24d8,	// (0x00032721) data_form_wide_pane_ParamLimits

0x3ef7,	// (0x00034140) form_field_data_wide_pane_g1

0x3f03,	// (0x0003414c) form_field_data_wide_pane_t1_ParamLimits

0x2245,	// (0x0003248e) input_focus_pane_cp6_ParamLimits

0x5fe7,	// (0x00036230) input_popup_find_pane_g1_ParamLimits

0x5fe7,	// (0x00036230) input_popup_find_pane_g1

0x6140,	// (0x00036389) aid_navi_side_left_pane

0x6155,	// (0x0003639e) aid_navi_side_right_pane

0x9a28,	// (0x00039c71) bg_popup_window_pane_cp30_ParamLimits

0x9a28,	// (0x00039c71) bg_popup_window_pane_cp30

0x9aa2,	// (0x00039ceb) popup_midp_note_alarm_window_g1_ParamLimits

0x9aa2,	// (0x00039ceb) popup_midp_note_alarm_window_g1

0x9ad2,	// (0x00039d1b) popup_midp_note_alarm_window_t1_ParamLimits

0x9ad2,	// (0x00039d1b) popup_midp_note_alarm_window_t1

0x9b73,	// (0x00039dbc) popup_midp_note_alarm_window_t2_ParamLimits

0x9b73,	// (0x00039dbc) popup_midp_note_alarm_window_t2

0x9c21,	// (0x00039e6a) popup_midp_note_alarm_window_t3_ParamLimits

0x9c21,	// (0x00039e6a) popup_midp_note_alarm_window_t3

0x9c53,	// (0x00039e9c) popup_midp_note_alarm_window_t4_ParamLimits

0x9c53,	// (0x00039e9c) popup_midp_note_alarm_window_t4

0x9c79,	// (0x00039ec2) popup_midp_note_alarm_window_t5_ParamLimits

0x9c79,	// (0x00039ec2) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0003faee) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0003faee) popup_midp_note_alarm_window_t

0x9d25,	// (0x00039f6e) wait_bar_pane_cp1_ParamLimits

0x9d25,	// (0x00039f6e) wait_bar_pane_cp1

0xf282,	// (0x0003f4cb) wait_anim_pane_copy1

0xf282,	// (0x0003f4cb) wait_border_pane_copy1

0x970d,	// (0x00039956) wait_border_pane_g1_copy1

0x3f1d,	// (0x00034166) form_field_popup_pane_g1

0x5ebb,	// (0x00036104) form_field_popup_pane_t1_ParamLimits

0x24ca,	// (0x00032713) input_focus_pane_cp7_ParamLimits

0x2504,	// (0x0003274d) list_form_pane_ParamLimits

0x3f25,	// (0x0003416e) form_field_popup_wide_pane_g1

0x3f2d,	// (0x00034176) form_field_popup_wide_pane_t1_ParamLimits

0x24ca,	// (0x00032713) input_focus_pane_cp8_ParamLimits

0x2510,	// (0x00032759) list_form_wide_pane_ParamLimits

0xa864,	// (0x0003aaad) aid_size_cell_graphic_pane

0x5f3a,	// (0x00036183) data_form_pane_t1_ParamLimits

0x760a,	// (0x00037853) data_form_wide_pane_t1_ParamLimits

0x8c60,	// (0x00038ea9) bg_status_flat_pane

0x5653,	// (0x0003589c) title_pane_t1_ParamLimits

0xf298,	// (0x0003f4e1) title_pane_t2_ParamLimits

0xf2be,	// (0x0003f507) title_pane_t3_ParamLimits

0xf55d,	// (0x0003f7a6) title_pane_t_ParamLimits

0x6293,	// (0x000364dc) level_1_signal_ParamLimits

0x62a0,	// (0x000364e9) level_2_signal_ParamLimits

0x62ad,	// (0x000364f6) level_3_signal_ParamLimits

0x62ba,	// (0x00036503) level_4_signal_ParamLimits

0x62c7,	// (0x00036510) level_5_signal_ParamLimits

0x62d4,	// (0x0003651d) level_6_signal_ParamLimits

0x62e1,	// (0x0003652a) level_7_signal_ParamLimits

0x6293,	// (0x000364dc) level_1_battery_ParamLimits

0x62a0,	// (0x000364e9) level_2_battery_ParamLimits

0x62ad,	// (0x000364f6) level_3_battery_ParamLimits

0x62ba,	// (0x00036503) level_4_battery_ParamLimits

0x62c7,	// (0x00036510) level_5_battery_ParamLimits

0x62d4,	// (0x0003651d) level_6_battery_ParamLimits

0x62e1,	// (0x0003652a) level_7_battery_ParamLimits

0x992d,	// (0x00039b76) bg_status_flat_pane_g1

0x9935,	// (0x00039b7e) bg_status_flat_pane_g2

0x993d,	// (0x00039b86) bg_status_flat_pane_g3

0x9945,	// (0x00039b8e) bg_status_flat_pane_g4

0x994d,	// (0x00039b96) bg_status_flat_pane_g5

0x9955,	// (0x00039b9e) bg_status_flat_pane_g6

0x995d,	// (0x00039ba6) bg_status_flat_pane_g7

0x56c3,	// (0x0003590c) tabs_3_active_pane_t1_ParamLimits

0x56c3,	// (0x0003590c) tabs_3_passive_pane_t1_ParamLimits

0x56dd,	// (0x00035926) tabs_4_active_pane_t1_ParamLimits

0x56dd,	// (0x00035926) tabs_4_1_passive_pane_t1_ParamLimits

0x5ffd,	// (0x00036246) tabs_2_active_pane_t1_ParamLimits

0x5ffd,	// (0x00036246) tabs_2_passive_pane_t1_ParamLimits

0x29a3,	// (0x00032bec) bg_active_tab_pane_cp4_ParamLimits

0x600f,	// (0x00036258) tabs_2_long_active_pane_t1_ParamLimits

0x6022,	// (0x0003626b) bg_passive_tab_pane_cp4_ParamLimits

0x72be,	// (0x00037507) list_single_midp_graphic_pane_t1_ParamLimits

0x29a3,	// (0x00032bec) bg_active_tab_pane_cp5_ParamLimits

0x602e,	// (0x00036277) tabs_3_long_active_pane_t1_ParamLimits

0x6022,	// (0x0003626b) bg_passive_tab_pane_cp5_ParamLimits

0x72be,	// (0x00037507) list_single_midp_graphic_pane_t1

0x8c60,	// (0x00038ea9) bg_status_flat_pane_ParamLimits

0x8d2b,	// (0x00038f74) indicator_pane_cp2_ParamLimits

0x8d2b,	// (0x00038f74) indicator_pane_cp2

0x8e6e,	// (0x000390b7) navi_pane_srt_ParamLimits

0x8e6e,	// (0x000390b7) navi_pane_srt

0x8e92,	// (0x000390db) popup_clock_digital_analogue_window_cp1

0xf314,	// (0x0003f55d) indicator_pane_t1

0x883b,	// (0x00038a84) copy_highlight_pane

0x883b,	// (0x00038a84) cursor_graphics_pane

0x883b,	// (0x00038a84) graphic_within_text_pane

0x883b,	// (0x00038a84) link_highlight_pane

0xa152,	// (0x0003a39b) popup_preview_text_window_t5_ParamLimits

0xa152,	// (0x0003a39b) popup_preview_text_window_t5

0x895f,	// (0x00038ba8) cursor_digital_pane

0x895f,	// (0x00038ba8) cursor_primary_pane

0x8970,	// (0x00038bb9) cursor_primary_small_pane

0x8978,	// (0x00038bc1) cursor_secondary_pane

0x8980,	// (0x00038bc9) cursor_title_pane

0x895f,	// (0x00038ba8) link_highlight_digital_pane

0x8967,	// (0x00038bb0) link_highlight_primary_pane

0x8970,	// (0x00038bb9) link_highlight_primary_small_pane

0x8978,	// (0x00038bc1) link_highlight_secondary_pane

0x8980,	// (0x00038bc9) link_highlight_title_pane

0x895f,	// (0x00038ba8) copy_highlight_digital_pane

0x895f,	// (0x00038ba8) copy_highlight_primary_pane

0x8970,	// (0x00038bb9) copy_highlight_primary_small_pane

0x8978,	// (0x00038bc1) copy_highlight_secondary_pane

0x8980,	// (0x00038bc9) copy_highlight_title_pane

0x8978,	// (0x00038bc1) graphic_text_digital_pane

0x99cb,	// (0x00039c14) graphic_text_primary_pane

0x99d4,	// (0x00039c1d) graphic_text_primary_small_pane

0x8970,	// (0x00038bb9) graphic_text_secondary_pane

0x895f,	// (0x00038ba8) graphic_text_title_pane

0x8988,	// (0x00038bd1) cursor_primary_pane_g1

0x99bd,	// (0x00039c06) cursor_text_primary_t1

0x99a5,	// (0x00039bee) cursor_primary_small_pane_g1

0x99af,	// (0x00039bf8) cursor_text_primary_small_t1

0x998d,	// (0x00039bd6) cursor_primary_small_pane_g1_copy1

0x9997,	// (0x00039be0) cursor_text_primary_small_t1_copy1

0x9975,	// (0x00039bbe) cursor_text_title_t1

0x9983,	// (0x00039bcc) cursor_title_pane_g1

0x8988,	// (0x00038bd1) cursor_digital_pane_g1

0x8992,	// (0x00038bdb) cursor_text_digital_t1

0x89a0,	// (0x00038be9) link_highlight_primary_pane_g1

0x991e,	// (0x00039b67) link_highlight_primary_pane_t1

0x89a0,	// (0x00038be9) link_highlight_primary_small_pane_g1

0x89a8,	// (0x00038bf1) link_highlight_primary_small_pane_t1

0x89b7,	// (0x00038c00) link_highlight_secondary_pane_g1

0x89bf,	// (0x00038c08) link_highlight_secondary_pane_t1

0x9892,	// (0x00039adb) link_highlight_title_pane_g1

0x989a,	// (0x00039ae3) link_highlight_title_pane_t1

0x987b,	// (0x00039ac4) link_highlight_digital_pane_g1

0x9883,	// (0x00039acc) link_highlight_digital_pane_t1

0x9743,	// (0x0003998c) copy_highlight_primary_pane_g1

0x975a,	// (0x000399a3) copy_highlight_primary_pane_t1

0x9743,	// (0x0003998c) copy_highlight_primary_small_pane_g1

0x974b,	// (0x00039994) copy_highlight_primary_small_pane_t1

0x89ce,	// (0x00038c17) copy_highlight_secondary_pane_g1

0x89d6,	// (0x00038c1f) copy_highlight_secondary_pane_t1

0x972c,	// (0x00039975) copy_highlight_title_pane_g1

0x9734,	// (0x0003997d) copy_highlight_title_pane_t1

0x9743,	// (0x0003998c) copy_highlight_digital_pane_g1

0xaa34,	// (0x0003ac7d) copy_highlight_digital_pane_t1

0xa988,	// (0x0003abd1) graphic_text_primary_pane_g1

0xaa18,	// (0x0003ac61) graphic_text_primary_pane_t1

0xaa26,	// (0x0003ac6f) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0003fc1d) graphic_text_primary_pane_t

0xa9f4,	// (0x0003ac3d) graphic_text_primary_small_pane_g1

0xa9fc,	// (0x0003ac45) graphic_text_primary_small_pane_t1

0xaa0a,	// (0x0003ac53) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0003fc18) graphic_text_primary_small_pane_t

0xa9d0,	// (0x0003ac19) graphic_text_secondary_pane_g1

0xa9d8,	// (0x0003ac21) graphic_text_secondary_pane_t1

0xa9e6,	// (0x0003ac2f) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0003fc13) graphic_text_secondary_pane_t

0xa9ac,	// (0x0003abf5) graphic_text_title_pane_g1

0xa9b4,	// (0x0003abfd) graphic_text_title_pane_t1

0xa9c2,	// (0x0003ac0b) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0003fc0e) graphic_text_title_pane_t

0xa988,	// (0x0003abd1) graphic_text_digital_pane_g1

0xa990,	// (0x0003abd9) graphic_text_digital_pane_t1

0xa99e,	// (0x0003abe7) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0003fc09) graphic_text_digital_pane_t

0xf2d0,	// (0x0003f519) navi_icon_pane_srt_ParamLimits

0xf2d0,	// (0x0003f519) navi_icon_pane_srt

0xf282,	// (0x0003f4cb) navi_midp_pane_srt

0xf282,	// (0x0003f4cb) navi_navi_pane_srt

0xf2d0,	// (0x0003f519) navi_text_pane_srt_ParamLimits

0xf2d0,	// (0x0003f519) navi_text_pane_srt

0xa953,	// (0x0003ab9c) navi_navi_icon_text_pane_srt

0xa95b,	// (0x0003aba4) navi_navi_pane_srt_g1_ParamLimits

0xa95b,	// (0x0003aba4) navi_navi_pane_srt_g1

0xa96d,	// (0x0003abb6) navi_navi_pane_srt_g2_ParamLimits

0xa96d,	// (0x0003abb6) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0003fc04) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0003fc04) navi_navi_pane_srt_g

0xa97f,	// (0x0003abc8) navi_navi_tabs_pane_srt

0xa953,	// (0x0003ab9c) navi_navi_text_pane_srt

0xa953,	// (0x0003ab9c) navi_navi_volume_pane_srt

0xa944,	// (0x0003ab8d) navi_navi_text_pane_srt_t1

0x772e,	// (0x00037977) navi_navi_volume_pane_srt_g1

0x7736,	// (0x0003797f) volume_small_pane_srt_ParamLimits

0x7736,	// (0x0003797f) volume_small_pane_srt

0x69ea,	// (0x00036c33) volume_small_pane_srt_g1_ParamLimits

0x69ea,	// (0x00036c33) volume_small_pane_srt_g1

0x69fa,	// (0x00036c43) volume_small_pane_srt_g2_ParamLimits

0x69fa,	// (0x00036c43) volume_small_pane_srt_g2

0x6a0b,	// (0x00036c54) volume_small_pane_srt_g3_ParamLimits

0x6a0b,	// (0x00036c54) volume_small_pane_srt_g3

0x6a1c,	// (0x00036c65) volume_small_pane_srt_g4_ParamLimits

0x6a1c,	// (0x00036c65) volume_small_pane_srt_g4

0x6a2d,	// (0x00036c76) volume_small_pane_srt_g5_ParamLimits

0x6a2d,	// (0x00036c76) volume_small_pane_srt_g5

0x6a3e,	// (0x00036c87) volume_small_pane_srt_g6_ParamLimits

0x6a3e,	// (0x00036c87) volume_small_pane_srt_g6

0x6a4f,	// (0x00036c98) volume_small_pane_srt_g7_ParamLimits

0x6a4f,	// (0x00036c98) volume_small_pane_srt_g7

0x6a60,	// (0x00036ca9) volume_small_pane_srt_g8_ParamLimits

0x6a60,	// (0x00036ca9) volume_small_pane_srt_g8

0x6a71,	// (0x00036cba) volume_small_pane_srt_g9_ParamLimits

0x6a71,	// (0x00036cba) volume_small_pane_srt_g9

0x6a82,	// (0x00036ccb) volume_small_pane_srt_g10_ParamLimits

0x6a82,	// (0x00036ccb) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0003f9ac) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0003f9ac) volume_small_pane_srt_g

0x2145,	// (0x0003238e) query_popup_data_pane_cp2

0xa92a,	// (0x0003ab73) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa92a,	// (0x0003ab73) navi_navi_icon_text_pane_srt_t1

0x99cb,	// (0x00039c14) navi_tabs_2_long_pane_srt

0x99cb,	// (0x00039c14) navi_tabs_2_pane_srt

0x99cb,	// (0x00039c14) navi_tabs_3_long_pane_srt

0x99cb,	// (0x00039c14) navi_tabs_3_pane_srt

0x99cb,	// (0x00039c14) navi_tabs_4_pane_srt

0x770e,	// (0x00037957) tabs_2_active_pane_srt_ParamLimits

0x770e,	// (0x00037957) tabs_2_active_pane_srt

0x771e,	// (0x00037967) tabs_2_passive_pane_srt_ParamLimits

0x771e,	// (0x00037967) tabs_2_passive_pane_srt

0x8b87,	// (0x00038dd0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b87,	// (0x00038dd0) bg_passive_tab_pane_cp1_srt

0xa8f6,	// (0x0003ab3f) bg_passive_tab_pane_g1_cp1_srt

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp1_srt

0xa8ff,	// (0x0003ab48) bg_passive_tab_pane_g3_cp1_srt

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp1_srt_ParamLimits

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp1_srt

0xa908,	// (0x0003ab51) tabs_2_active_pane_srt_g1

0xa910,	// (0x0003ab59) tabs_2_active_pane_srt_t1_ParamLimits

0xa910,	// (0x0003ab59) tabs_2_active_pane_srt_t1

0xa8f6,	// (0x0003ab3f) bg_active_tab_pane_g1_cp1_srt

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp1_srt

0xa8ff,	// (0x0003ab48) bg_active_tab_pane_g3_cp1_srt

0x76db,	// (0x00037924) tabs_3_active_pane_srt_ParamLimits

0x76db,	// (0x00037924) tabs_3_active_pane_srt

0x76ec,	// (0x00037935) tabs_3_passive_pane_cp_srt_ParamLimits

0x76ec,	// (0x00037935) tabs_3_passive_pane_cp_srt

0x76fd,	// (0x00037946) tabs_3_passive_pane_srt_ParamLimits

0x76fd,	// (0x00037946) tabs_3_passive_pane_srt

0x8b87,	// (0x00038dd0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b87,	// (0x00038dd0) bg_passive_tab_pane_cp2_srt

0x89e5,	// (0x00038c2e) bg_passive_tab_pane_g1_cp2_srt

0x66c5,	// (0x0003690e) bg_passive_tab_pane_g2_cp2_srt

0x89ee,	// (0x00038c37) bg_passive_tab_pane_g3_cp2_srt

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp2_srt_ParamLimits

0xf2d0,	// (0x0003f519) bg_active_tab_pane_cp2_srt

0xa8dc,	// (0x0003ab25) tabs_3_active_pane_srt_g1

0xa8e4,	// (0x0003ab2d) tabs_3_active_pane_srt_t1_ParamLimits

0xa8e4,	// (0x0003ab2d) tabs_3_active_pane_srt_t1

0x89e5,	// (0x00038c2e) bg_active_tab_pane_g1_cp2_srt

0x66c5,	// (0x0003690e) bg_active_tab_pane_g2_cp2_srt

0x89ee,	// (0x00038c37) bg_active_tab_pane_g3_cp2_srt

0x7693,	// (0x000378dc) tabs_4_active_pane_srt_ParamLimits

0x7693,	// (0x000378dc) tabs_4_active_pane_srt

0x76a5,	// (0x000378ee) tabs_4_passive_pane_cp2_srt_ParamLimits

0x76a5,	// (0x000378ee) tabs_4_passive_pane_cp2_srt

0x6be7,	// (0x00036e30) aid_size_cell_toolbar

0x6022,	// (0x0003626b) main_idle_act_pane_ParamLimits

0x6dc8,	// (0x00037011) popup_large_graphic_colour_window_ParamLimits

0x716f,	// (0x000373b8) popup_toolbar_window_ParamLimits

0x716f,	// (0x000373b8) popup_toolbar_window

0x4064,	// (0x000342ad) list_single_graphic_2heading_pane_ParamLimits

0x4064,	// (0x000342ad) list_single_graphic_2heading_pane

0x27da,	// (0x00032a23) aid_size_cell_apps_grid_lsc_pane

0x27ec,	// (0x00032a35) aid_size_cell_apps_grid_prt_pane

0x8b87,	// (0x00038dd0) bg_wml_button_pane_cp1_ParamLimits

0x8b87,	// (0x00038dd0) bg_wml_button_pane_cp1

0x93c3,	// (0x0003960c) form_midp_field_text_pane_t1_ParamLimits

0x91af,	// (0x000393f8) input_focus_pane_cp050_ParamLimits

0x93ee,	// (0x00039637) list_midp_form_text_pane_ParamLimits

0x93a0,	// (0x000395e9) input_focus_pane_cp051_ParamLimits

0x93b4,	// (0x000395fd) list_midp_choice_pane_ParamLimits

0x9268,	// (0x000394b1) list_single_2graphic_pane_cp3_ParamLimits

0x9268,	// (0x000394b1) list_single_2graphic_pane_cp3

0x9281,	// (0x000394ca) list_single_midp_graphic_pane_ParamLimits

0x9281,	// (0x000394ca) list_single_midp_graphic_pane

0x51a0,	// (0x000353e9) list_single_graphic_2heading_pane_g1_ParamLimits

0x51a0,	// (0x000353e9) list_single_graphic_2heading_pane_g1

0x51ac,	// (0x000353f5) list_single_graphic_2heading_pane_g4_ParamLimits

0x51ac,	// (0x000353f5) list_single_graphic_2heading_pane_g4

0x51b8,	// (0x00035401) list_single_graphic_2heading_pane_g5_ParamLimits

0x51b8,	// (0x00035401) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0003f9ff) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0003f9ff) list_single_graphic_2heading_pane_g

0x51c4,	// (0x0003540d) list_single_graphic_2heading_pane_t1_ParamLimits

0x51c4,	// (0x0003540d) list_single_graphic_2heading_pane_t1

0x51d8,	// (0x00035421) list_single_graphic_2heading_pane_t2_ParamLimits

0x51d8,	// (0x00035421) list_single_graphic_2heading_pane_t2

0x51f4,	// (0x0003543d) list_single_graphic_2heading_pane_t3_ParamLimits

0x51f4,	// (0x0003543d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0003fa06) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0003fa06) list_single_graphic_2heading_pane_t

0x8ff1,	// (0x0003923a) bg_popup_sub_pane_cp2

0x901b,	// (0x00039264) grid_toobar_pane

0x722e,	// (0x00037477) cell_toolbar_pane_ParamLimits

0x722e,	// (0x00037477) cell_toolbar_pane

0x9057,	// (0x000392a0) cell_toolbar_pane_g1_ParamLimits

0x9057,	// (0x000392a0) cell_toolbar_pane_g1

0x906b,	// (0x000392b4) cell_toolbar_pane_g2_ParamLimits

0x906b,	// (0x000392b4) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0003fa14) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0003fa14) cell_toolbar_pane_g

0x908d,	// (0x000392d6) grid_highlight_pane_cp2_ParamLimits

0x908d,	// (0x000392d6) grid_highlight_pane_cp2

0x90a7,	// (0x000392f0) toolbar_button_pane

0x90b3,	// (0x000392fc) toolbar_button_pane_g1

0x90bb,	// (0x00039304) toolbar_button_pane_g2

0x90c3,	// (0x0003930c) toolbar_button_pane_g3

0x90cb,	// (0x00039314) toolbar_button_pane_g4

0x90d3,	// (0x0003931c) toolbar_button_pane_g5

0x90db,	// (0x00039324) toolbar_button_pane_g6

0x90e3,	// (0x0003932c) toolbar_button_pane_g7

0x90eb,	// (0x00039334) toolbar_button_pane_g8

0x90f3,	// (0x0003933c) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0003fa19) toolbar_button_pane_g

0x7266,	// (0x000374af) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7266,	// (0x000374af) list_single_2graphic_pane_g1_cp3

0x7272,	// (0x000374bb) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7272,	// (0x000374bb) list_single_2graphic_pane_g2_cp3

0x7283,	// (0x000374cc) list_single_2graphic_pane_g3_cp3

0x728b,	// (0x000374d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x728b,	// (0x000374d4) list_single_2graphic_pane_g4_cp3

0x7297,	// (0x000374e0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7297,	// (0x000374e0) list_single_2graphic_pane_t1_cp3

0x72b2,	// (0x000374fb) list_single_midp_graphic_pane_g2_ParamLimits

0x72b2,	// (0x000374fb) list_single_midp_graphic_pane_g2

0x6bef,	// (0x00036e38) aid_zoom_text_primary

0x5198,	// (0x000353e1) aid_zoom_text_secondary

0x8aa2,	// (0x00038ceb) status_small_pane_g7_ParamLimits

0x8aa2,	// (0x00038ceb) status_small_pane_g7

0x8ac5,	// (0x00038d0e) status_small_pane_t1_ParamLimits

0x5636,	// (0x0003587f) title_pane_g2

0x0003,

0xf554,	// (0x0003f79d) title_pane_g

0x5897,	// (0x00035ae0) aid_size_cell_colour_1_pane_ParamLimits

0x5897,	// (0x00035ae0) aid_size_cell_colour_1_pane

0x58ab,	// (0x00035af4) aid_size_cell_colour_2_pane_ParamLimits

0x58ab,	// (0x00035af4) aid_size_cell_colour_2_pane

0x58bf,	// (0x00035b08) aid_size_cell_colour_3_pane_ParamLimits

0x58bf,	// (0x00035b08) aid_size_cell_colour_3_pane

0x58d3,	// (0x00035b1c) aid_size_cell_colour_4_pane_ParamLimits

0x58d3,	// (0x00035b1c) aid_size_cell_colour_4_pane

0x607c,	// (0x000362c5) title_pane_stacon_g1_ParamLimits

0x607c,	// (0x000362c5) title_pane_stacon_g1

0x97b1,	// (0x000399fa) popup_note_wait_window_g3_ParamLimits

0x97b1,	// (0x000399fa) popup_note_wait_window_g3

0x9828,	// (0x00039a71) popup_note_wait_window_t5_ParamLimits

0x9828,	// (0x00039a71) popup_note_wait_window_t5

0xf282,	// (0x0003f4cb) main_feb_china_hwr_fs_writing_pane

0x6c8f,	// (0x00036ed8) popup_feb_china_hwr_fs_window_ParamLimits

0x6c8f,	// (0x00036ed8) popup_feb_china_hwr_fs_window

0x72d4,	// (0x0003751d) aid_size_cell_hwr_fs_ParamLimits

0x72d4,	// (0x0003751d) aid_size_cell_hwr_fs

0x91af,	// (0x000393f8) bg_popup_sub_pane_cp3_ParamLimits

0x91af,	// (0x000393f8) bg_popup_sub_pane_cp3

0x72e9,	// (0x00037532) grid_hwr_fs_pane_ParamLimits

0x72e9,	// (0x00037532) grid_hwr_fs_pane

0x7301,	// (0x0003754a) linegrid_hwr_fs_pane_ParamLimits

0x7301,	// (0x0003754a) linegrid_hwr_fs_pane

0x7311,	// (0x0003755a) cell_hwr_fs_pane_ParamLimits

0x7311,	// (0x0003755a) cell_hwr_fs_pane

0x91bb,	// (0x00039404) linegrid_hwr_fs_pane_g1_ParamLimits

0x91bb,	// (0x00039404) linegrid_hwr_fs_pane_g1

0x91c7,	// (0x00039410) linegrid_hwr_fs_pane_g2_ParamLimits

0x91c7,	// (0x00039410) linegrid_hwr_fs_pane_g2

0x91d9,	// (0x00039422) linegrid_hwr_fs_pane_g3_ParamLimits

0x91d9,	// (0x00039422) linegrid_hwr_fs_pane_g3

0x7335,	// (0x0003757e) linegrid_hwr_fs_pane_g4_ParamLimits

0x7335,	// (0x0003757e) linegrid_hwr_fs_pane_g4

0x7353,	// (0x0003759c) linegrid_hwr_fs_pane_g5_ParamLimits

0x7353,	// (0x0003759c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0003fa44) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003fa44) linegrid_hwr_fs_pane_g

0x91e5,	// (0x0003942e) cell_hwr_fs_pane_g1_ParamLimits

0x91e5,	// (0x0003942e) cell_hwr_fs_pane_g1

0x8f28,	// (0x00039171) cell_hwr_fs_pane_g2_ParamLimits

0x8f28,	// (0x00039171) cell_hwr_fs_pane_g2

0x91fb,	// (0x00039444) cell_hwr_fs_pane_g3_ParamLimits

0x91fb,	// (0x00039444) cell_hwr_fs_pane_g3

0x9208,	// (0x00039451) cell_hwr_fs_pane_g4_ParamLimits

0x9208,	// (0x00039451) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0003fa4f) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0003fa4f) cell_hwr_fs_pane_g

0x7369,	// (0x000375b2) cell_hwr_fs_pane_t1

0xf282,	// (0x0003f4cb) grid_highlight_pane_cp6

0xf282,	// (0x0003f4cb) main_idle_act2_pane

0x25e9,	// (0x00032832) aid_inside_area_popup_secondary

0x9e61,	// (0x0003a0aa) aid_inside_area_window_primary_ParamLimits

0x9e61,	// (0x0003a0aa) aid_inside_area_window_primary

0xaa43,	// (0x0003ac8c) ai2_news_ticker_pane

0xaa4b,	// (0x0003ac94) aid_size_cell_ai1_link_ParamLimits

0xaa4b,	// (0x0003ac94) aid_size_cell_ai1_link

0xaa65,	// (0x0003acae) popup_ai2_data_window_ParamLimits

0xaa65,	// (0x0003acae) popup_ai2_data_window

0xaa83,	// (0x0003accc) popup_ai2_link_window_ParamLimits

0xaa83,	// (0x0003accc) popup_ai2_link_window

0x91af,	// (0x000393f8) bg_popup_sub_pane_cp4_ParamLimits

0x91af,	// (0x000393f8) bg_popup_sub_pane_cp4

0xaa99,	// (0x0003ace2) grid_ai2_link_pane_ParamLimits

0xaa99,	// (0x0003ace2) grid_ai2_link_pane

0xaab0,	// (0x0003acf9) popup_ai2_link_window_g1_ParamLimits

0xaab0,	// (0x0003acf9) popup_ai2_link_window_g1

0xaabc,	// (0x0003ad05) popup_ai2_link_window_g2_ParamLimits

0xaabc,	// (0x0003ad05) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0003fc22) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0003fc22) popup_ai2_link_window_g

0xaacd,	// (0x0003ad16) ai2_mp_button_pane

0xaad5,	// (0x0003ad1e) ai2_mp_volume_pane

0x93a0,	// (0x000395e9) bg_popup_sub_pane_cp5_ParamLimits

0x93a0,	// (0x000395e9) bg_popup_sub_pane_cp5

0xaadd,	// (0x0003ad26) heading_ai2_gene_pane_ParamLimits

0xaadd,	// (0x0003ad26) heading_ai2_gene_pane

0xaae9,	// (0x0003ad32) list_ai2_gene_pane_ParamLimits

0xaae9,	// (0x0003ad32) list_ai2_gene_pane

0xab31,	// (0x0003ad7a) cell_ai2_link_pane_ParamLimits

0xab31,	// (0x0003ad7a) cell_ai2_link_pane

0xab47,	// (0x0003ad90) cell_ai2_link_pane_g1

0xf282,	// (0x0003f4cb) grid_highlight_pane_cp7

0x774b,	// (0x00037994) ai2_mp_volume_pane_g1

0xac1a,	// (0x0003ae63) ai2_mp_volume_pane_g2

0xab8f,	// (0x0003add8) list_ai2_gene_pane_t1

0xac22,	// (0x0003ae6b) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0003fc3b) ai2_mp_volume_pane_g

0x7753,	// (0x0003799c) volume_small_pane_cp3

0xac2a,	// (0x0003ae73) aid_size_cell_ai2_button

0xac32,	// (0x0003ae7b) grid_ai2_button_pane

0xac3b,	// (0x0003ae84) cell_ai2_button_pane_ParamLimits

0xac3b,	// (0x0003ae84) cell_ai2_button_pane

0xf278,	// (0x0003f4c1) cell_ai2_button_pane_g1

0xf282,	// (0x0003f4cb) grid_highlight_pane_cp8

0xabda,	// (0x0003ae23) ai2_gene_pane_t1_ParamLimits

0xabda,	// (0x0003ae23) ai2_gene_pane_t1

0x6bdd,	// (0x00036e26) aid_height_parent_landscape

0xa50d,	// (0x0003a756) aid_height_set_list

0xa51e,	// (0x0003a767) aid_size_parent

0xa864,	// (0x0003aaad) aid_size_cell_graphic_pane_ParamLimits

0xaaf9,	// (0x0003ad42) popup_ai2_data_window_g1_ParamLimits

0xaaf9,	// (0x0003ad42) popup_ai2_data_window_g1

0xab05,	// (0x0003ad4e) ai2_news_ticker_pane_g1

0xab0d,	// (0x0003ad56) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0003fc27) ai2_news_ticker_pane_g

0xab15,	// (0x0003ad5e) ai2_news_ticker_pane_t1

0xab23,	// (0x0003ad6c) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0003fc2c) ai2_news_ticker_pane_t

0xab50,	// (0x0003ad99) heading_ai2_gene_pane_g1

0xab58,	// (0x0003ada1) heading_ai2_gene_pane_t1_ParamLimits

0xab58,	// (0x0003ada1) heading_ai2_gene_pane_t1

0xab6d,	// (0x0003adb6) list_highlight_pane_cp6

0xab75,	// (0x0003adbe) ai2_gene_pane_ParamLimits

0xab75,	// (0x0003adbe) ai2_gene_pane

0xab9d,	// (0x0003ade6) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0003fc31) list_ai2_gene_pane_t

0xabab,	// (0x0003adf4) list_highlight_pane_cp8_ParamLimits

0xabab,	// (0x0003adf4) list_highlight_pane_cp8

0xabbc,	// (0x0003ae05) ai2_gene_pane_g1_ParamLimits

0xabbc,	// (0x0003ae05) ai2_gene_pane_g1

0xabce,	// (0x0003ae17) ai2_gene_pane_g2_ParamLimits

0xabce,	// (0x0003ae17) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0003fc36) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0003fc36) ai2_gene_pane_g

0x2460,	// (0x000326a9) scroll_pane_cp12

0x6b9c,	// (0x00036de5) control_pane_t3_ParamLimits

0x6b9c,	// (0x00036de5) control_pane_t3

0x8ab6,	// (0x00038cff) status_small_pane_g8_ParamLimits

0x8ab6,	// (0x00038cff) status_small_pane_g8

0x6d8d,	// (0x00036fd6) popup_find_window_ParamLimits

0x6fb8,	// (0x00037201) popup_note_image_window_ParamLimits

0x3e3e,	// (0x00034087) list_double2_graphic_pane_vc_g1_ParamLimits

0x3e3e,	// (0x00034087) list_double2_graphic_pane_vc_g1

0x3fe7,	// (0x00034230) list_double2_graphic_pane_vc_g2_ParamLimits

0x3fe7,	// (0x00034230) list_double2_graphic_pane_vc_g2

0x3ff3,	// (0x0003423c) list_double2_graphic_pane_vc_g3_ParamLimits

0x3ff3,	// (0x0003423c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003fa0d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003fa0d) list_double2_graphic_pane_vc_g

0x3fff,	// (0x00034248) list_double2_graphic_pane_vc_t1_ParamLimits

0x3fff,	// (0x00034248) list_double2_graphic_pane_vc_t1

0x3e14,	// (0x0003405d) list_single_heading_pane_vc_g1_ParamLimits

0x3e14,	// (0x0003405d) list_single_heading_pane_vc_g1

0x3e20,	// (0x00034069) list_single_heading_pane_vc_g2_ParamLimits

0x3e20,	// (0x00034069) list_single_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003fa2e) list_single_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003fa2e) list_single_heading_pane_vc_g

0x4015,	// (0x0003425e) list_single_heading_pane_vc_t1_ParamLimits

0x4015,	// (0x0003425e) list_single_heading_pane_vc_t1

0x402d,	// (0x00034276) list_single_heading_pane_vc_t2_ParamLimits

0x402d,	// (0x00034276) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0003fa33) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0003fa33) list_single_heading_pane_vc_t

0x90fb,	// (0x00039344) list_setting_number_pane_vc_g1_ParamLimits

0x90fb,	// (0x00039344) list_setting_number_pane_vc_g1

0x9107,	// (0x00039350) list_setting_number_pane_vc_g2_ParamLimits

0x9107,	// (0x00039350) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003fa38) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003fa38) list_setting_number_pane_vc_g

0x9113,	// (0x0003935c) list_setting_number_pane_vc_t1_ParamLimits

0x9113,	// (0x0003935c) list_setting_number_pane_vc_t1

0x9127,	// (0x00039370) list_setting_number_pane_vc_t2_ParamLimits

0x9127,	// (0x00039370) list_setting_number_pane_vc_t2

0x9143,	// (0x0003938c) list_setting_number_pane_vc_t3_ParamLimits

0x9143,	// (0x0003938c) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0003fa3d) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0003fa3d) list_setting_number_pane_vc_t

0x9171,	// (0x000393ba) set_value_pane_vc_ParamLimits

0x9171,	// (0x000393ba) set_value_pane_vc

0x4064,	// (0x000342ad) list_double2_graphic_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_double2_graphic_pane_vc

0xa6f6,	// (0x0003a93f) list_double2_large_graphic_pane_vc_ParamLimits

0xa6f6,	// (0x0003a93f) list_double2_large_graphic_pane_vc

0x4064,	// (0x000342ad) list_double2_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_double2_pane_vc

0x4064,	// (0x000342ad) list_double_graphic_heading_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_double_graphic_heading_pane_vc

0x4064,	// (0x000342ad) list_double_graphic_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_double_graphic_pane_vc

0x4064,	// (0x000342ad) list_double_heading_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_double_heading_pane_vc

0xa6f6,	// (0x0003a93f) list_double_large_graphic_pane_vc_ParamLimits

0xa6f6,	// (0x0003a93f) list_double_large_graphic_pane_vc

0x4064,	// (0x000342ad) list_double_number_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_double_number_pane_vc

0x4064,	// (0x000342ad) list_double_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_double_pane_vc

0x4064,	// (0x000342ad) list_double_time_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_double_time_pane_vc

0x4064,	// (0x000342ad) list_setting_number_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_setting_number_pane_vc

0x4064,	// (0x000342ad) list_setting_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_setting_pane_vc

0x4064,	// (0x000342ad) list_single_graphic_heading_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_single_graphic_heading_pane_vc

0x4064,	// (0x000342ad) list_single_heading_pane_vc_ParamLimits

0x4064,	// (0x000342ad) list_single_heading_pane_vc

0xa70a,	// (0x0003a953) list_single_number_heading_pane_vc_ParamLimits

0xa70a,	// (0x0003a953) list_single_number_heading_pane_vc

0x3e3e,	// (0x00034087) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3e3e,	// (0x00034087) list_double_graphic_heading_pane_vc_g1

0x3e14,	// (0x0003405d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3e14,	// (0x0003405d) list_double_graphic_heading_pane_vc_g2

0x3e20,	// (0x00034069) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3e20,	// (0x00034069) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x0003fc42) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0003fc42) list_double_graphic_heading_pane_vc_g

0x4079,	// (0x000342c2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4079,	// (0x000342c2) list_double_graphic_heading_pane_vc_t1

0x4015,	// (0x0003425e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4015,	// (0x0003425e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x0003fc49) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x0003fc49) list_double_graphic_heading_pane_vc_t

0x90fb,	// (0x00039344) list_setting_pane_vc_g1_ParamLimits

0x90fb,	// (0x00039344) list_setting_pane_vc_g1

0x9107,	// (0x00039350) list_setting_pane_vc_g2_ParamLimits

0x9107,	// (0x00039350) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003fa38) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003fa38) list_setting_pane_vc_g

0xaea2,	// (0x0003b0eb) list_setting_pane_vc_t1_ParamLimits

0xaea2,	// (0x0003b0eb) list_setting_pane_vc_t1

0xaebe,	// (0x0003b107) list_setting_pane_vc_t2_ParamLimits

0xaebe,	// (0x0003b107) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003fc77) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003fc77) list_setting_pane_vc_t

0x9171,	// (0x000393ba) set_value_pane_cp_vc_ParamLimits

0x9171,	// (0x000393ba) set_value_pane_cp_vc

0x3e14,	// (0x0003405d) list_single_number_heading_pane_vc_g1_ParamLimits

0x3e14,	// (0x0003405d) list_single_number_heading_pane_vc_g1

0x3e20,	// (0x00034069) list_single_number_heading_pane_vc_g2_ParamLimits

0x3e20,	// (0x00034069) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003fa2e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003fa2e) list_single_number_heading_pane_vc_g

0x4015,	// (0x0003425e) list_single_number_heading_pane_vc_t1_ParamLimits

0x4015,	// (0x0003425e) list_single_number_heading_pane_vc_t1

0x408b,	// (0x000342d4) list_single_number_heading_pane_vc_t2_ParamLimits

0x408b,	// (0x000342d4) list_single_number_heading_pane_vc_t2

0x3e2c,	// (0x00034075) list_single_number_heading_pane_vc_t3_ParamLimits

0x3e2c,	// (0x00034075) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0003fc7c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0003fc7c) list_single_number_heading_pane_vc_t

0x3e3e,	// (0x00034087) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3e3e,	// (0x00034087) list_single_graphic_heading_pane_vc_g1

0x3e14,	// (0x0003405d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3e14,	// (0x0003405d) list_single_graphic_heading_pane_vc_g4

0x3e20,	// (0x00034069) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3e20,	// (0x00034069) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f9,	// (0x0003fc42) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0003fc42) list_single_graphic_heading_pane_vc_g

0x4015,	// (0x0003425e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4015,	// (0x0003425e) list_single_graphic_heading_pane_vc_t1

0x409d,	// (0x000342e6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x409d,	// (0x000342e6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x0003fc83) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x0003fc83) list_single_graphic_heading_pane_vc_t

0x3e14,	// (0x0003405d) list_double2_pane_vc_g1_ParamLimits

0x3e14,	// (0x0003405d) list_double2_pane_vc_g1

0x3e20,	// (0x00034069) list_double2_pane_vc_g2_ParamLimits

0x3e20,	// (0x00034069) list_double2_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003fa2e) list_double2_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003fa2e) list_double2_pane_vc_g

0x404e,	// (0x00034297) list_double2_pane_vc_t1_ParamLimits

0x404e,	// (0x00034297) list_double2_pane_vc_t1

0x3e4a,	// (0x00034093) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3e4a,	// (0x00034093) list_double2_large_graphic_pane_vc_g1

0x3e56,	// (0x0003409f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3e56,	// (0x0003409f) list_double2_large_graphic_pane_vc_g2

0x3e62,	// (0x000340ab) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3e62,	// (0x000340ab) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3f,	// (0x0003fc88) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3f,	// (0x0003fc88) list_double2_large_graphic_pane_vc_g

0x3e6e,	// (0x000340b7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3e6e,	// (0x000340b7) list_double2_large_graphic_pane_vc_t1

0x40af,	// (0x000342f8) list_double_time_pane_vc_g1_ParamLimits

0x40af,	// (0x000342f8) list_double_time_pane_vc_g1

0x40bb,	// (0x00034304) list_double_time_pane_vc_g2_ParamLimits

0x40bb,	// (0x00034304) list_double_time_pane_vc_g2

0x0001,

0xfa46,	// (0x0003fc8f) list_double_time_pane_vc_g_ParamLimits

0xfa46,	// (0x0003fc8f) list_double_time_pane_vc_g

0x40c7,	// (0x00034310) list_double_time_pane_vc_t1_ParamLimits

0x40c7,	// (0x00034310) list_double_time_pane_vc_t1

0x40f1,	// (0x0003433a) list_double_time_pane_vc_t2_ParamLimits

0x40f1,	// (0x0003433a) list_double_time_pane_vc_t2

0x413a,	// (0x00034383) list_double_time_pane_vc_t3_ParamLimits

0x413a,	// (0x00034383) list_double_time_pane_vc_t3

0x414c,	// (0x00034395) list_double_time_pane_vc_t4_ParamLimits

0x414c,	// (0x00034395) list_double_time_pane_vc_t4

0x0003,

0xfa4b,	// (0x0003fc94) list_double_time_pane_vc_t_ParamLimits

0xfa4b,	// (0x0003fc94) list_double_time_pane_vc_t

0x3e14,	// (0x0003405d) list_double_pane_vc_g1_ParamLimits

0x3e14,	// (0x0003405d) list_double_pane_vc_g1

0x3e20,	// (0x00034069) list_double_pane_vc_g2_ParamLimits

0x3e20,	// (0x00034069) list_double_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003fa2e) list_double_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003fa2e) list_double_pane_vc_g

0x4171,	// (0x000343ba) list_double_pane_vc_t1_ParamLimits

0x4171,	// (0x000343ba) list_double_pane_vc_t1

0x4185,	// (0x000343ce) list_double_pane_vc_t2_ParamLimits

0x4185,	// (0x000343ce) list_double_pane_vc_t2

0x0001,

0xfa54,	// (0x0003fc9d) list_double_pane_vc_t_ParamLimits

0xfa54,	// (0x0003fc9d) list_double_pane_vc_t

0x3e14,	// (0x0003405d) list_double_number_pane_vc_g1_ParamLimits

0x3e14,	// (0x0003405d) list_double_number_pane_vc_g1

0x3e20,	// (0x00034069) list_double_number_pane_vc_g2_ParamLimits

0x3e20,	// (0x00034069) list_double_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003fa2e) list_double_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003fa2e) list_double_number_pane_vc_g

0x419b,	// (0x000343e4) list_double_number_pane_vc_t1_ParamLimits

0x419b,	// (0x000343e4) list_double_number_pane_vc_t1

0x41af,	// (0x000343f8) list_double_number_pane_vc_t2_ParamLimits

0x41af,	// (0x000343f8) list_double_number_pane_vc_t2

0x4185,	// (0x000343ce) list_double_number_pane_vc_t3_ParamLimits

0x4185,	// (0x000343ce) list_double_number_pane_vc_t3

0x0002,

0xfa59,	// (0x0003fca2) list_double_number_pane_vc_t_ParamLimits

0xfa59,	// (0x0003fca2) list_double_number_pane_vc_t

0x41c3,	// (0x0003440c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x41c3,	// (0x0003440c) list_double_large_graphic_pane_vc_g1

0x41d4,	// (0x0003441d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x41d4,	// (0x0003441d) list_double_large_graphic_pane_vc_g2

0x3e62,	// (0x000340ab) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3e62,	// (0x000340ab) list_double_large_graphic_pane_vc_g3

0x41e3,	// (0x0003442c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x41e3,	// (0x0003442c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa60,	// (0x0003fca9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa60,	// (0x0003fca9) list_double_large_graphic_pane_vc_g

0x41ef,	// (0x00034438) list_double_large_graphic_pane_vc_t1_ParamLimits

0x41ef,	// (0x00034438) list_double_large_graphic_pane_vc_t1

0x4208,	// (0x00034451) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4208,	// (0x00034451) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa69,	// (0x0003fcb2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa69,	// (0x0003fcb2) list_double_large_graphic_pane_vc_t

0x3e14,	// (0x0003405d) list_double_heading_pane_vc_g1_ParamLimits

0x3e14,	// (0x0003405d) list_double_heading_pane_vc_g1

0x3e20,	// (0x00034069) list_double_heading_pane_vc_g2_ParamLimits

0x3e20,	// (0x00034069) list_double_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003fa2e) list_double_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003fa2e) list_double_heading_pane_vc_g

0x421f,	// (0x00034468) list_double_heading_pane_vc_t1_ParamLimits

0x421f,	// (0x00034468) list_double_heading_pane_vc_t1

0x4015,	// (0x0003425e) list_double_heading_pane_vc_t2_ParamLimits

0x4015,	// (0x0003425e) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0003fcb7) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0003fcb7) list_double_heading_pane_vc_t

0x4231,	// (0x0003447a) list_double_graphic_pane_vc_g1_ParamLimits

0x4231,	// (0x0003447a) list_double_graphic_pane_vc_g1

0x4241,	// (0x0003448a) list_double_graphic_pane_vc_g2_ParamLimits

0x4241,	// (0x0003448a) list_double_graphic_pane_vc_g2

0x4250,	// (0x00034499) list_double_graphic_pane_vc_g3_ParamLimits

0x4250,	// (0x00034499) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0003fcbc) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0003fcbc) list_double_graphic_pane_vc_g

0x425c,	// (0x000344a5) list_double_graphic_pane_vc_t1_ParamLimits

0x425c,	// (0x000344a5) list_double_graphic_pane_vc_t1

0x4185,	// (0x000343ce) list_double_graphic_pane_vc_t2_ParamLimits

0x4185,	// (0x000343ce) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0003fcc3) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0003fcc3) list_double_graphic_pane_vc_t

0x5240,	// (0x00035489) aid_size_cell_fastswap

0x5248,	// (0x00035491) aid_size_cell_touch_ParamLimits

0x5248,	// (0x00035491) aid_size_cell_touch

0x54b3,	// (0x000356fc) popup_fast_swap_wide_window_ParamLimits

0x54b3,	// (0x000356fc) popup_fast_swap_wide_window

0x55c9,	// (0x00035812) touch_pane_ParamLimits

0x55c9,	// (0x00035812) touch_pane

0x24b6,	// (0x000326ff) button_value_adjust_pane_cp2

0x24b6,	// (0x000326ff) button_value_adjust_pane_cp4

0x3ea7,	// (0x000340f0) form_field_data_pane_cp2

0x5e6c,	// (0x000360b5) form_field_data_wide_pane_cp2

0x2823,	// (0x00032a6c) bg_scroll_pane_ParamLimits

0x626a,	// (0x000364b3) scroll_handle_pane_ParamLimits

0x627e,	// (0x000364c7) scroll_sc2_down_pane_ParamLimits

0x627e,	// (0x000364c7) scroll_sc2_down_pane

0x2854,	// (0x00032a9d) scroll_sc2_up_pane_ParamLimits

0x2854,	// (0x00032a9d) scroll_sc2_up_pane

0xb3a4,	// (0x0003b5ed) grid_wheel_folder_pane_g1_ParamLimits

0xb3a4,	// (0x0003b5ed) grid_wheel_folder_pane_g1

0x680f,	// (0x00036a58) clock_nsta_pane_cp2_ParamLimits

0x680f,	// (0x00036a58) clock_nsta_pane_cp2

0x6022,	// (0x0003626b) listscroll_midp_pane_ParamLimits

0x8843,	// (0x00038a8c) midp_canvas_pane

0x8b31,	// (0x00038d7a) nsta_clock_indic_pane

0x8b6d,	// (0x00038db6) listscroll_form_pane_vc

0x8b75,	// (0x00038dbe) listscroll_set_pane_vc_ParamLimits

0x8b75,	// (0x00038dbe) listscroll_set_pane_vc

0x8c7c,	// (0x00038ec5) clock_nsta_pane

0x8cf9,	// (0x00038f42) indicator_nsta_pane

0x8ff1,	// (0x0003923a) bg_popup_sub_pane_cp2_ParamLimits

0x9005,	// (0x0003924e) find_pane_cp2_ParamLimits

0x9005,	// (0x0003924e) find_pane_cp2

0x901b,	// (0x00039264) grid_toobar_pane_ParamLimits

0x9183,	// (0x000393cc) list_form_gen_pane_vc_ParamLimits

0x9183,	// (0x000393cc) list_form_gen_pane_vc

0x9199,	// (0x000393e2) scroll_pane_cp8_vc_ParamLimits

0x9199,	// (0x000393e2) scroll_pane_cp8_vc

0x9215,	// (0x0003945e) data_form_wide_pane_vc_ParamLimits

0x9215,	// (0x0003945e) data_form_wide_pane_vc

0x9221,	// (0x0003946a) form_field_data_wide_pane_vc_g1

0x9229,	// (0x00039472) form_field_data_wide_pane_vc_t1_ParamLimits

0x9229,	// (0x00039472) form_field_data_wide_pane_vc_t1

0x24ca,	// (0x00032713) input_focus_pane_cp6_vc_ParamLimits

0x24ca,	// (0x00032713) input_focus_pane_cp6_vc

0x952b,	// (0x00039774) list_midp_pane_ParamLimits

0x9537,	// (0x00039780) scroll_pane_cp16_ParamLimits

0x9537,	// (0x00039780) scroll_pane_cp16

0x9585,	// (0x000397ce) button_value_adjust_pane_ParamLimits

0x9585,	// (0x000397ce) button_value_adjust_pane

0xa530,	// (0x0003a779) button_value_adjust_pane_cp6_ParamLimits

0xa530,	// (0x0003a779) button_value_adjust_pane_cp6

0xa67e,	// (0x0003a8c7) settings_code_pane_cp_ParamLimits

0xa67e,	// (0x0003a8c7) settings_code_pane_cp

0xf278,	// (0x0003f4c1) cell_touch_pane_g1

0xf278,	// (0x0003f4c1) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0003f952) cell_touch_pane_g

0xac4d,	// (0x0003ae96) cell_touch_pane_cp_ParamLimits

0xac4d,	// (0x0003ae96) cell_touch_pane_cp

0xac5d,	// (0x0003aea6) cell_touch_pane_ParamLimits

0xac5d,	// (0x0003aea6) cell_touch_pane

0xf278,	// (0x0003f4c1) scroll_sc2_down_pane_g1

0xf278,	// (0x0003f4c1) scroll_sc2_up_pane_g1

0xf282,	// (0x0003f4cb) bg_set_opt_pane_cp4_vc

0xac6e,	// (0x0003aeb7) list_set_graphic_pane_vc_g1_ParamLimits

0xac6e,	// (0x0003aeb7) list_set_graphic_pane_vc_g1

0xac7a,	// (0x0003aec3) list_set_graphic_pane_vc_g2_ParamLimits

0xac7a,	// (0x0003aec3) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x0003fc4e) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x0003fc4e) list_set_graphic_pane_vc_g

0xac86,	// (0x0003aecf) text_primary_small_cp13_vc_ParamLimits

0xac86,	// (0x0003aecf) text_primary_small_cp13_vc

0xac9e,	// (0x0003aee7) list_set_graphic_pane_vc_ParamLimits

0xac9e,	// (0x0003aee7) list_set_graphic_pane_vc

0xf282,	// (0x0003f4cb) input_focus_pane_cp2_vc

0xf278,	// (0x0003f4c1) setting_code_pane_vc_g1

0xf2e7,	// (0x0003f530) setting_code_pane_vc_t1

0xacb3,	// (0x0003aefc) set_text_pane_vc_t1_ParamLimits

0xacb3,	// (0x0003aefc) set_text_pane_vc_t1

0xf282,	// (0x0003f4cb) input_focus_pane_cp1_vc

0xacd1,	// (0x0003af1a) list_set_text_pane_vc

0xf278,	// (0x0003f4c1) setting_text_pane_vc_g1

0xf282,	// (0x0003f4cb) bg_set_opt_pane_cp2_vc

0xf2de,	// (0x0003f527) setting_slider_graphic_pane_vc_g1

0xacdb,	// (0x0003af24) setting_slider_graphic_pane_vc_t1

0xaced,	// (0x0003af36) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x0003fc53) setting_slider_graphic_pane_vc_t

0xacff,	// (0x0003af48) slider_set_pane_cp_vc

0xad09,	// (0x0003af52) slider_set_pane_vc_g1

0xad12,	// (0x0003af5b) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x0003fc58) slider_set_pane_vc_g

0x2531,	// (0x0003277a) set_opt_bg_pane_g1_copy1

0x2539,	// (0x00032782) set_opt_bg_pane_g2_copy1

0xad3e,	// (0x0003af87) set_opt_bg_pane_g3_copy1

0x2549,	// (0x00032792) set_opt_bg_pane_g4_copy1

0x2551,	// (0x0003279a) set_opt_bg_pane_g5_copy1

0x2559,	// (0x000327a2) set_opt_bg_pane_g6_copy1

0xad48,	// (0x0003af91) set_opt_bg_pane_g7_copy1

0xad52,	// (0x0003af9b) set_opt_bg_pane_g8_copy1

0xad5c,	// (0x0003afa5) set_opt_bg_pane_g9_copy1

0xf282,	// (0x0003f4cb) bg_set_opt_pane_cp_vc

0xad66,	// (0x0003afaf) setting_slider_pane_vc_t1

0xad75,	// (0x0003afbe) setting_slider_pane_vc_t2

0xad87,	// (0x0003afd0) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x0003fc67) setting_slider_pane_vc_t

0xad99,	// (0x0003afe2) slider_set_pane_vc

0x739a,	// (0x000375e3) volume_set_pane_vc_g1

0x73a3,	// (0x000375ec) volume_set_pane_vc_g2

0x73ac,	// (0x000375f5) volume_set_pane_vc_g3

0x73b5,	// (0x000375fe) volume_set_pane_vc_g4

0x73be,	// (0x00037607) volume_set_pane_vc_g5

0x73c7,	// (0x00037610) volume_set_pane_vc_g6

0x73d0,	// (0x00037619) volume_set_pane_vc_g7

0x73d9,	// (0x00037622) volume_set_pane_vc_g8

0x73e2,	// (0x0003762b) volume_set_pane_vc_g9

0x73eb,	// (0x00037634) volume_set_pane_vc_g10

0x0009,

0xf8bc,	// (0x0003fb05) volume_set_pane_vc_g

0xada3,	// (0x0003afec) volume_set_pane_vc

0xadad,	// (0x0003aff6) button_value_adjust_pane_cp1_vc

0xadb7,	// (0x0003b000) list_highlight_pane_cp2_vc

0xadc0,	// (0x0003b009) list_set_pane_vc_ParamLimits

0xadc0,	// (0x0003b009) list_set_pane_vc

0xae30,	// (0x0003b079) main_pane_set_vc_t1_ParamLimits

0xae30,	// (0x0003b079) main_pane_set_vc_t1

0xae45,	// (0x0003b08e) main_pane_set_vc_t2_ParamLimits

0xae45,	// (0x0003b08e) main_pane_set_vc_t2

0xae57,	// (0x0003b0a0) main_pane_set_vc_t3_ParamLimits

0xae57,	// (0x0003b0a0) main_pane_set_vc_t3

0xae6b,	// (0x0003b0b4) main_pane_set_vc_t4_ParamLimits

0xae6b,	// (0x0003b0b4) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0003fc6e) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0003fc6e) main_pane_set_vc_t

0xae7f,	// (0x0003b0c8) setting_code_pane_vc_ParamLimits

0xae7f,	// (0x0003b0c8) setting_code_pane_vc

0xae90,	// (0x0003b0d9) setting_slider_graphic_pane_vc

0xae90,	// (0x0003b0d9) setting_slider_pane_vc

0xae90,	// (0x0003b0d9) setting_text_pane_vc

0xae90,	// (0x0003b0d9) setting_volume_pane_vc

0xae9a,	// (0x0003b0e3) scroll_pane_cp121_vc

0x24a4,	// (0x000326ed) set_content_pane_vc

0xaeda,	// (0x0003b123) button_value_adjust_pane_g1

0xaee3,	// (0x0003b12c) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0003fcc8) button_value_adjust_pane_g

0xaeec,	// (0x0003b135) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaeec,	// (0x0003b135) form_field_slider_wide_pane_vc_t1

0xaf00,	// (0x0003b149) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaf00,	// (0x0003b149) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0003fccd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0003fccd) form_field_slider_wide_pane_vc_t

0xf403,	// (0x0003f64c) input_focus_pane_cp10_vc_ParamLimits

0xf403,	// (0x0003f64c) input_focus_pane_cp10_vc

0xaf2e,	// (0x0003b177) slider_cont_pane_cp1_vc_ParamLimits

0xaf2e,	// (0x0003b177) slider_cont_pane_cp1_vc

0xaf3e,	// (0x0003b187) slider_form_pane_g1_cp2

0xad12,	// (0x0003af5b) slider_form_pane_g2_cp2

0xaf6b,	// (0x0003b1b4) form_field_slider_pane_vc_t3

0xaf79,	// (0x0003b1c2) form_field_slider_pane_vc_t4

0xaf87,	// (0x0003b1d0) slider_form_pane_vc_ParamLimits

0xaf87,	// (0x0003b1d0) slider_form_pane_vc

0xaf94,	// (0x0003b1dd) form_field_slider_pane_vc_t1_ParamLimits

0xaf94,	// (0x0003b1dd) form_field_slider_pane_vc_t1

0xaf00,	// (0x0003b149) form_field_slider_pane_vc_t2_ParamLimits

0xaf00,	// (0x0003b149) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0003fcdf) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0003fcdf) form_field_slider_pane_vc_t

0xf403,	// (0x0003f64c) input_focus_pane_cp9_vc_ParamLimits

0xf403,	// (0x0003f64c) input_focus_pane_cp9_vc

0xafb0,	// (0x0003b1f9) slider_cont_pane_vc_ParamLimits

0xafb0,	// (0x0003b1f9) slider_cont_pane_vc

0xafc2,	// (0x0003b20b) list_form_graphic_pane_cp_vc_ParamLimits

0xafc2,	// (0x0003b20b) list_form_graphic_pane_cp_vc

0x9221,	// (0x0003946a) form_field_popup_wide_pane_vc_g1

0xafd7,	// (0x0003b220) form_field_popup_wide_pane_vc_t1_ParamLimits

0xafd7,	// (0x0003b220) form_field_popup_wide_pane_vc_t1

0x24ca,	// (0x00032713) input_focus_pane_cp8_vc_ParamLimits

0x24ca,	// (0x00032713) input_focus_pane_cp8_vc

0xb01c,	// (0x0003b265) list_form_wide_pane_vc_ParamLimits

0xb01c,	// (0x0003b265) list_form_wide_pane_vc

0xb028,	// (0x0003b271) list_form_graphic_pane_vc_g1

0xb030,	// (0x0003b279) list_form_graphic_pane_vc_t1_ParamLimits

0xb030,	// (0x0003b279) list_form_graphic_pane_vc_t1

0xf2d0,	// (0x0003f519) list_highlight_pane_cp5_vc_ParamLimits

0xf2d0,	// (0x0003f519) list_highlight_pane_cp5_vc

0xb04c,	// (0x0003b295) list_form_graphic_pane_vc_ParamLimits

0xb04c,	// (0x0003b295) list_form_graphic_pane_vc

0x9221,	// (0x0003946a) form_field_popup_pane_vc_g1

0xb062,	// (0x0003b2ab) form_field_popup_pane_vc_t1_ParamLimits

0xb062,	// (0x0003b2ab) form_field_popup_pane_vc_t1

0x24ca,	// (0x00032713) input_focus_pane_cp7_vc_ParamLimits

0x24ca,	// (0x00032713) input_focus_pane_cp7_vc

0xb079,	// (0x0003b2c2) list_form_pane_vc_ParamLimits

0xb079,	// (0x0003b2c2) list_form_pane_vc

0xb085,	// (0x0003b2ce) data_form_pane_vc_t1_ParamLimits

0xb085,	// (0x0003b2ce) data_form_pane_vc_t1

0x2531,	// (0x0003277a) input_focus_pane_vc_g1

0x2539,	// (0x00032782) input_focus_pane_vc_g2

0x2541,	// (0x0003278a) input_focus_pane_vc_g3

0x2549,	// (0x00032792) input_focus_pane_vc_g4

0x2551,	// (0x0003279a) input_focus_pane_vc_g5

0x2559,	// (0x000327a2) input_focus_pane_vc_g6

0x2561,	// (0x000327aa) input_focus_pane_vc_g7

0x2569,	// (0x000327b2) input_focus_pane_vc_g8

0x2571,	// (0x000327ba) input_focus_pane_vc_g9

0xf278,	// (0x0003f4c1) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0003f8db) input_focus_pane_vc_g

0x9215,	// (0x0003945e) data_form_pane_vc_ParamLimits

0x9215,	// (0x0003945e) data_form_pane_vc

0x9221,	// (0x0003946a) form_field_data_pane_vc_g1

0xb0a2,	// (0x0003b2eb) form_field_data_pane_vc_t1_ParamLimits

0xb0a2,	// (0x0003b2eb) form_field_data_pane_vc_t1

0x24ca,	// (0x00032713) input_focus_pane_vc_ParamLimits

0x24ca,	// (0x00032713) input_focus_pane_vc

0xb0bc,	// (0x0003b305) button_value_adjust_pane_cp3_vc

0xb0c4,	// (0x0003b30d) button_value_adjust_pane_cp5_vc

0xb0cc,	// (0x0003b315) form_field_data_pane_vc_ParamLimits

0xb0cc,	// (0x0003b315) form_field_data_pane_vc

0xb0e7,	// (0x0003b330) form_field_data_pane_vc_cp2

0xb0ef,	// (0x0003b338) form_field_data_wide_pane_vc_ParamLimits

0xb0ef,	// (0x0003b338) form_field_data_wide_pane_vc

0xb109,	// (0x0003b352) form_field_data_wide_pane_vc_cp2

0xb111,	// (0x0003b35a) form_field_popup_pane_vc_ParamLimits

0xb111,	// (0x0003b35a) form_field_popup_pane_vc

0xb12c,	// (0x0003b375) form_field_popup_wide_pane_vc_ParamLimits

0xb12c,	// (0x0003b375) form_field_popup_wide_pane_vc

0xb146,	// (0x0003b38f) form_field_slider_pane_vc_ParamLimits

0xb146,	// (0x0003b38f) form_field_slider_pane_vc

0xb159,	// (0x0003b3a2) form_field_slider_wide_pane_vc_ParamLimits

0xb159,	// (0x0003b3a2) form_field_slider_wide_pane_vc

0xb16c,	// (0x0003b3b5) grid_touch_1_pane_ParamLimits

0xb16c,	// (0x0003b3b5) grid_touch_1_pane

0xb178,	// (0x0003b3c1) grid_touch_2_pane_ParamLimits

0xb178,	// (0x0003b3c1) grid_touch_2_pane

0x8afc,	// (0x00038d45) touch_pane_g1_ParamLimits

0x8afc,	// (0x00038d45) touch_pane_g1

0xb192,	// (0x0003b3db) cell_app_pane_cp_wide_ParamLimits

0xb192,	// (0x0003b3db) cell_app_pane_cp_wide

0xb1a3,	// (0x0003b3ec) grid_popup_fast_wide_pane_ParamLimits

0xb1a3,	// (0x0003b3ec) grid_popup_fast_wide_pane

0xb1b7,	// (0x0003b400) scroll_pane_cp19_ParamLimits

0xb1b7,	// (0x0003b400) scroll_pane_cp19

0xf282,	// (0x0003f4cb) bg_popup_window_pane_cp20

0xb1cb,	// (0x0003b414) listscroll_popup_fast_wide_pane

0xf2d0,	// (0x0003f519) grid_indicator_nsta_pane

0xb1d3,	// (0x0003b41c) clock_nsta_pane_g1

0xb1dc,	// (0x0003b425) clock_nsta_pane_t1

0xb1f8,	// (0x0003b441) cell_indicator_nsta_pane_ParamLimits

0xb1f8,	// (0x0003b441) cell_indicator_nsta_pane

0xb230,	// (0x0003b479) cell_indicator_nsta_pane_g1

0xb23e,	// (0x0003b487) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0003fcf0) cell_indicator_nsta_pane_g

0xb254,	// (0x0003b49d) clock_nsta_pane_cp

0xb25c,	// (0x0003b4a5) indicator_nsta_pane_cp

0xb265,	// (0x0003b4ae) nsta_clock_indic_pane_g1

0xf30c,	// (0x0003f555) grid_indicator_pane

0x2946,	// (0x00032b8f) scroll_pane_cp29

0x6739,	// (0x00036982) indicator_nsta_pane_cp2_ParamLimits

0x6739,	// (0x00036982) indicator_nsta_pane_cp2

0xf2d0,	// (0x0003f519) main_apps_wheel_pane

0x9408,	// (0x00039651) form_midp_field_text_pane_ParamLimits

0x9557,	// (0x000397a0) scroll_bar_cp050_ParamLimits

0xb2ce,	// (0x0003b517) cell_indicator_pane_ParamLimits

0xb2ce,	// (0x0003b517) cell_indicator_pane

0xb2e6,	// (0x0003b52f) cell_indicator_pane_g1

0xb2f0,	// (0x0003b539) grid_wheel_folder_pane_ParamLimits

0xb2f0,	// (0x0003b539) grid_wheel_folder_pane

0xb304,	// (0x0003b54d) list_wheel_apps_pane_ParamLimits

0xb304,	// (0x0003b54d) list_wheel_apps_pane

0xb317,	// (0x0003b560) main_apps_wheel_pane_g1_ParamLimits

0xb317,	// (0x0003b560) main_apps_wheel_pane_g1

0xb333,	// (0x0003b57c) main_apps_wheel_pane_g2_ParamLimits

0xb333,	// (0x0003b57c) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0003fd0c) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0003fd0c) main_apps_wheel_pane_g

0xb34f,	// (0x0003b598) main_apps_wheel_pane_t1_ParamLimits

0xb34f,	// (0x0003b598) main_apps_wheel_pane_t1

0xb378,	// (0x0003b5c1) list_wheel_apps_pane_g1

0xb380,	// (0x0003b5c9) list_wheel_apps_pane_g2

0xb388,	// (0x0003b5d1) list_wheel_apps_pane_g3

0xb390,	// (0x0003b5d9) list_wheel_apps_pane_g4

0xb39a,	// (0x0003b5e3) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0003fd11) list_wheel_apps_pane_g

0x86b7,	// (0x00038900) navi_icon_text_pane

0x8ba9,	// (0x00038df2) aid_fill_nsta

0xb3bb,	// (0x0003b604) navi_icon_text_pane_g1

0xb3ca,	// (0x0003b613) navi_icon_text_pane_t1

0x68d2,	// (0x00036b1b) list_set_graphic_pane_t1_ParamLimits

0x68d2,	// (0x00036b1b) list_set_graphic_pane_t1

0x9ca8,	// (0x00039ef1) popup_midp_note_alarm_window_t6_ParamLimits

0x9ca8,	// (0x00039ef1) popup_midp_note_alarm_window_t6

0x9cba,	// (0x00039f03) popup_midp_note_alarm_window_t7_ParamLimits

0x9cba,	// (0x00039f03) popup_midp_note_alarm_window_t7

0x9ccc,	// (0x00039f15) popup_midp_note_alarm_window_t8_ParamLimits

0x9ccc,	// (0x00039f15) popup_midp_note_alarm_window_t8

0x9cde,	// (0x00039f27) popup_midp_note_alarm_window_t9_ParamLimits

0x9cde,	// (0x00039f27) popup_midp_note_alarm_window_t9

0x9cf0,	// (0x00039f39) popup_midp_note_alarm_window_t10_ParamLimits

0x9cf0,	// (0x00039f39) popup_midp_note_alarm_window_t10

0x9d02,	// (0x00039f4b) popup_midp_note_alarm_window_t11_ParamLimits

0x9d02,	// (0x00039f4b) popup_midp_note_alarm_window_t11

0x9d14,	// (0x00039f5d) scroll_pane_cp17_ParamLimits

0x9d14,	// (0x00039f5d) scroll_pane_cp17

0x739a,	// (0x000375e3) volume_small_pane_cp_g1

0x775c,	// (0x000379a5) volume_small_pane_cp_g2

0x7765,	// (0x000379ae) volume_small_pane_cp_g3

0x776e,	// (0x000379b7) volume_small_pane_cp_g4

0x7777,	// (0x000379c0) volume_small_pane_cp_g5

0x7780,	// (0x000379c9) volume_small_pane_cp_g6

0x7789,	// (0x000379d2) volume_small_pane_cp_g7

0x7792,	// (0x000379db) volume_small_pane_cp_g8

0x779b,	// (0x000379e4) volume_small_pane_cp_g9

0x77a4,	// (0x000379ed) volume_small_pane_cp_g10

0x890c,	// (0x00038b55) midp_ticker_pane_g1_ParamLimits

0x8918,	// (0x00038b61) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0003f9a7) midp_ticker_pane_g_ParamLimits

0x8924,	// (0x00038b6d) midp_ticker_pane_t1_ParamLimits

0x8bbf,	// (0x00038e08) aid_fill_nsta_2

0x9543,	// (0x0003978c) list_form2_midp_pane

0xa6c5,	// (0x0003a90e) midp_editing_number_pane_ParamLimits

0xa6d4,	// (0x0003a91d) midp_ticker_pane_ParamLimits

0xb3df,	// (0x0003b628) form2_midp_field_pane

0xb403,	// (0x0003b64c) scroll_pane_cp51

0xb423,	// (0x0003b66c) form2_midp_button_pane_ParamLimits

0xb423,	// (0x0003b66c) form2_midp_button_pane

0xb435,	// (0x0003b67e) form2_midp_content_pane_ParamLimits

0xb435,	// (0x0003b67e) form2_midp_content_pane

0xb44f,	// (0x0003b698) form2_midp_field_choice_group_pane

0xb457,	// (0x0003b6a0) form2_midp_field_pane_g1

0xb45f,	// (0x0003b6a8) form2_midp_field_pane_g2

0xb467,	// (0x0003b6b0) form2_midp_field_pane_g3

0xb46f,	// (0x0003b6b8) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0003fd36) form2_midp_field_pane_g

0xb477,	// (0x0003b6c0) form2_midp_gauge_slider_pane

0xb47f,	// (0x0003b6c8) form2_midp_gauge_wait_pane

0xb487,	// (0x0003b6d0) form2_midp_image_pane_ParamLimits

0xb487,	// (0x0003b6d0) form2_midp_image_pane

0xb4a2,	// (0x0003b6eb) form2_midp_label_pane_ParamLimits

0xb4a2,	// (0x0003b6eb) form2_midp_label_pane

0xb4c1,	// (0x0003b70a) form2_midp_label_pane_cp_ParamLimits

0xb4c1,	// (0x0003b70a) form2_midp_label_pane_cp

0xb4e2,	// (0x0003b72b) form2_midp_string_pane_ParamLimits

0xb4e2,	// (0x0003b72b) form2_midp_string_pane

0x4270,	// (0x000344b9) form2_midp_text_pane_ParamLimits

0x4270,	// (0x000344b9) form2_midp_text_pane

0xb4f4,	// (0x0003b73d) form2_midp_time_pane

0xb504,	// (0x0003b74d) input_focus_pane_cp51_ParamLimits

0xb504,	// (0x0003b74d) input_focus_pane_cp51

0xb51c,	// (0x0003b765) form2_midp_label_pane_t1_ParamLimits

0xb51c,	// (0x0003b765) form2_midp_label_pane_t1

0x4291,	// (0x000344da) form2_mdip_text_pane_t1_ParamLimits

0x4291,	// (0x000344da) form2_mdip_text_pane_t1

0x42b5,	// (0x000344fe) form2_midp_time_pane_t1

0xb56a,	// (0x0003b7b3) form2_midp_gauge_slider_pane_t1

0xb57c,	// (0x0003b7c5) form2_midp_gauge_slider_pane_t2

0xb58e,	// (0x0003b7d7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0003fd3f) form2_midp_gauge_slider_pane_t

0xb5a0,	// (0x0003b7e9) form2_midp_slider_pane

0xb5ac,	// (0x0003b7f5) form2_midp_gauge_wait_pane_t1

0xb5ba,	// (0x0003b803) form2_midp_wait_pane_ParamLimits

0xb5ba,	// (0x0003b803) form2_midp_wait_pane

0x9268,	// (0x000394b1) list_single_2graphic_pane_cp4_ParamLimits

0x9268,	// (0x000394b1) list_single_2graphic_pane_cp4

0xb5e5,	// (0x0003b82e) list_single_midp_graphic_pane_cp_ParamLimits

0xb5e5,	// (0x0003b82e) list_single_midp_graphic_pane_cp

0xf282,	// (0x0003f4cb) list_highlight_pane_cp20

0xb609,	// (0x0003b852) list_single_2graphic_pane_g1_cp4

0xab50,	// (0x0003ad99) list_single_2graphic_pane_g2_cp4

0xb611,	// (0x0003b85a) list_single_2graphic_pane_t1_cp4

0xf2d0,	// (0x0003f519) list_highlight_pane_cp21

0xb620,	// (0x0003b869) list_single_midp_graphic_pane_g4_cp

0xb62f,	// (0x0003b878) list_single_midp_graphic_pane_t1_cp

0xb644,	// (0x0003b88d) form2_mdip_string_pane_t1_ParamLimits

0xb644,	// (0x0003b88d) form2_mdip_string_pane_t1

0xf282,	// (0x0003f4cb) bg_wml_button_pane_cp2

0xf278,	// (0x0003f4c1) form2_midp_image_pane_g1

0x3e84,	// (0x000340cd) list_double_large_graphic_pane_g5_ParamLimits

0x3e84,	// (0x000340cd) list_double_large_graphic_pane_g5

0x6022,	// (0x0003626b) midp_form_pane_ParamLimits

0xf2d0,	// (0x0003f519) main_apps_wheel_pane_ParamLimits

0x6fe0,	// (0x00037229) popup_preview_window_ParamLimits

0x6fe0,	// (0x00037229) popup_preview_window

0x71c7,	// (0x00037410) popup_touch_info_window_ParamLimits

0x71c7,	// (0x00037410) popup_touch_info_window

0x71e9,	// (0x00037432) popup_touch_menu_window_ParamLimits

0x71e9,	// (0x00037432) popup_touch_menu_window

0xf26e,	// (0x0003f4b7) bg_popup_sub_pane_cp6

0xb6e9,	// (0x0003b932) list_touch_menu_pane

0xb6f1,	// (0x0003b93a) list_single_touch_menu_pane_ParamLimits

0xb6f1,	// (0x0003b93a) list_single_touch_menu_pane

0xb709,	// (0x0003b952) list_single_touch_menu_pane_t1

0xf2d0,	// (0x0003f519) bg_popup_sub_pane_cp7_ParamLimits

0xf2d0,	// (0x0003f519) bg_popup_sub_pane_cp7

0xb717,	// (0x0003b960) heading_sub_pane

0xb71f,	// (0x0003b968) list_touch_info_pane_ParamLimits

0xb71f,	// (0x0003b968) list_touch_info_pane

0xb72e,	// (0x0003b977) list_single_touch_info_pane_ParamLimits

0xb72e,	// (0x0003b977) list_single_touch_info_pane

0xb740,	// (0x0003b989) list_single_touch_info_pane_t1

0xb74e,	// (0x0003b997) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0003fd4d) list_single_touch_info_pane_t

0x883b,	// (0x00038a84) bg_popup_heading_pane_cp

0xb75c,	// (0x0003b9a5) heading_sub_pane_t1

0x91af,	// (0x000393f8) bg_popup_preview_window_pane_cp_ParamLimits

0x91af,	// (0x000393f8) bg_popup_preview_window_pane_cp

0xb717,	// (0x0003b960) heading_preview_pane

0xb71f,	// (0x0003b968) list_preview_pane_ParamLimits

0xb71f,	// (0x0003b968) list_preview_pane

0xb76a,	// (0x0003b9b3) popup_preview_window_g1

0xb72e,	// (0x0003b977) list_single_preview_pane_ParamLimits

0xb72e,	// (0x0003b977) list_single_preview_pane

0xb772,	// (0x0003b9bb) list_single_preview_pane_g1

0xb77a,	// (0x0003b9c3) list_single_preview_pane_t1

0xb740,	// (0x0003b989) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0003fd52) list_single_preview_pane_t

0xb788,	// (0x0003b9d1) bg_popup_heading_pane_cp2_ParamLimits

0xb788,	// (0x0003b9d1) bg_popup_heading_pane_cp2

0xb79e,	// (0x0003b9e7) heading_preview_pane_g1

0xb7a6,	// (0x0003b9ef) heading_preview_pane_t1_ParamLimits

0xb7a6,	// (0x0003b9ef) heading_preview_pane_t1

0xf323,	// (0x0003f56c) soft_indicator_pane_t1_ParamLimits

0x243d,	// (0x00032686) scroll_pane_ParamLimits

0x284b,	// (0x00032a94) scroll_sc2_left_pane

0x2842,	// (0x00032a8b) scroll_sc2_right_pane

0x286a,	// (0x00032ab3) scroll_bg_pane_g1_ParamLimits

0x287f,	// (0x00032ac8) scroll_bg_pane_g2_ParamLimits

0x2897,	// (0x00032ae0) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0003f932) scroll_bg_pane_g_ParamLimits

0x286a,	// (0x00032ab3) scroll_handle_pane_g1_ParamLimits

0x28b9,	// (0x00032b02) scroll_handle_pane_g2_ParamLimits

0x2897,	// (0x00032ae0) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0003f939) scroll_handle_pane_g_ParamLimits

0x6c27,	// (0x00036e70) popup_choice_list_window_ParamLimits

0x6c27,	// (0x00036e70) popup_choice_list_window

0x8ffd,	// (0x00039246) choice_list_pane

0x907f,	// (0x000392c8) cell_toolbar_pane_t1

0x90a7,	// (0x000392f0) toolbar_button_pane_ParamLimits

0xa1e4,	// (0x0003a42d) ai_gene_pane_1_t2_ParamLimits

0xa1e4,	// (0x0003a42d) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0003fb61) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0003fb61) ai_gene_pane_1_t

0xb7c3,	// (0x0003ba0c) scroll_sc2_left_pane_g1

0xb7c3,	// (0x0003ba0c) scroll_sc2_right_pane_g1

0x8b87,	// (0x00038dd0) bg_popup_sub_pane_cp10

0xb7cd,	// (0x0003ba16) list_choice_list_pane

0xb7e6,	// (0x0003ba2f) list_single_choice_list_pane_ParamLimits

0xb7e6,	// (0x0003ba2f) list_single_choice_list_pane

0xb7fe,	// (0x0003ba47) list_single_choice_list_pane_g1

0x2627,	// (0x00032870) list_single_choice_list_pane_t1_ParamLimits

0x2627,	// (0x00032870) list_single_choice_list_pane_t1

0xb806,	// (0x0003ba4f) choice_list_pane_g1

0xb80e,	// (0x0003ba57) choice_list_pane_t1

0xf26e,	// (0x0003f4b7) input_focus_pane_cp11

0x27a5,	// (0x000329ee) title_pane_stacon_g2_ParamLimits

0x27a5,	// (0x000329ee) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0003f918) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003f918) title_pane_stacon_g

0x883b,	// (0x00038a84) cursor_press_pane

0x6ce1,	// (0x00036f2a) popup_fep_hwr_window_ParamLimits

0x6ce1,	// (0x00036f2a) popup_fep_hwr_window

0x6d6b,	// (0x00036fb4) popup_fep_vkb_window_ParamLimits

0x6d6b,	// (0x00036fb4) popup_fep_vkb_window

0xb81c,	// (0x0003ba65) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0003fd7b) fep_vkb_side_pane_g_ParamLimits

0x77e6,	// (0x00037a2f) fep_hwr_candidate_pane_ParamLimits

0x77e6,	// (0x00037a2f) fep_hwr_candidate_pane

0x7810,	// (0x00037a59) fep_hwr_side_pane_ParamLimits

0x7810,	// (0x00037a59) fep_hwr_side_pane

0x7832,	// (0x00037a7b) fep_hwr_top_pane_ParamLimits

0x7832,	// (0x00037a7b) fep_hwr_top_pane

0x784a,	// (0x00037a93) fep_hwr_write_pane_ParamLimits

0x784a,	// (0x00037a93) fep_hwr_write_pane

0xfb32,	// (0x0003fd7b) fep_vkb_side_pane_g

0xb824,	// (0x0003ba6d) fep_hwr_top_pane_g1

0xb836,	// (0x0003ba7f) fep_hwr_top_pane_g2

0x7884,	// (0x00037acd) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0003fd57) fep_hwr_top_pane_g

0x7899,	// (0x00037ae2) fep_hwr_top_text_pane

0x62fe,	// (0x00036547) fep_hwr_top_text_pane_g1

0xb86c,	// (0x0003bab5) fep_hwr_top_text_pane_t1

0x79a3,	// (0x00037bec) fep_hwr_candidate_pane_g1

0xbab7,	// (0x0003bd00) fep_vkb_keypad_pane_g3_ParamLimits

0xbab7,	// (0x0003bd00) fep_vkb_keypad_pane_g3

0xbae3,	// (0x0003bd2c) fep_vkb_keypad_pane_g4_ParamLimits

0xbae3,	// (0x0003bd2c) fep_vkb_keypad_pane_g4

0xbb5a,	// (0x0003bda3) fep_vkb_bottom_pane_g2_ParamLimits

0xbb5a,	// (0x0003bda3) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0003fd82) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0003fd82) fep_vkb_bottom_pane_g

0xb7c3,	// (0x0003ba0c) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0003fd8c) cell_vkb_side_pane_g

0xbbe5,	// (0x0003be2e) cell_vkb_side_pane_t1

0xbbf3,	// (0x0003be3c) cell_vkb_side_pane_t1_copy1

0xb7c3,	// (0x0003ba0c) bg_fep_vkb_candidate_pane_g2

0xbd37,	// (0x0003bf80) cell_vkb_candidate_pane_ParamLimits

0xb87a,	// (0x0003bac3) aid_size_cell_vkb_ParamLimits

0xb87a,	// (0x0003bac3) aid_size_cell_vkb

0xbd37,	// (0x0003bf80) cell_vkb_candidate_pane

0x79ca,	// (0x00037c13) bg_popup_fep_shadow_pane_g1

0xb90c,	// (0x0003bb55) fep_vkb_bottom_pane_ParamLimits

0xb90c,	// (0x0003bb55) fep_vkb_bottom_pane

0xb949,	// (0x0003bb92) fep_vkb_candidate_pane_ParamLimits

0xb949,	// (0x0003bb92) fep_vkb_candidate_pane

0xb965,	// (0x0003bbae) fep_vkb_keypad_pane_ParamLimits

0xb965,	// (0x0003bbae) fep_vkb_keypad_pane

0xb998,	// (0x0003bbe1) fep_vkb_side_pane_ParamLimits

0xb998,	// (0x0003bbe1) fep_vkb_side_pane

0xb9d4,	// (0x0003bc1d) fep_vkb_top_pane_ParamLimits

0xb9d4,	// (0x0003bc1d) fep_vkb_top_pane

0xba10,	// (0x0003bc59) fep_vkb_top_pane_g1_ParamLimits

0xba10,	// (0x0003bc59) fep_vkb_top_pane_g1

0xba1f,	// (0x0003bc68) fep_vkb_top_pane_g2_ParamLimits

0xba1f,	// (0x0003bc68) fep_vkb_top_pane_g2

0xba2e,	// (0x0003bc77) fep_vkb_top_pane_g3_ParamLimits

0xba2e,	// (0x0003bc77) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0003fd72) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0003fd72) fep_vkb_top_pane_g

0xba4c,	// (0x0003bc95) fep_vkb_top_text_pane_ParamLimits

0xba4c,	// (0x0003bc95) fep_vkb_top_text_pane

0xba5d,	// (0x0003bca6) fep_vkb_side_pane_g1_ParamLimits

0xba5d,	// (0x0003bca6) fep_vkb_side_pane_g1

0xbaa6,	// (0x0003bcef) grid_vkb_side_pane_ParamLimits

0xbaa6,	// (0x0003bcef) grid_vkb_side_pane

0x79d2,	// (0x00037c1b) bg_popup_fep_shadow_pane_g2

0x79db,	// (0x00037c24) bg_popup_fep_shadow_pane_g3

0x79e3,	// (0x00037c2c) bg_popup_fep_shadow_pane_g4

0x79ec,	// (0x00037c35) bg_popup_fep_shadow_pane_g5

0x79f6,	// (0x00037c3f) bg_popup_fep_shadow_pane_g6

0x79fe,	// (0x00037c47) bg_popup_fep_shadow_pane_g7

0x2549,	// (0x00032792) bg_popup_fep_shadow_pane_g8

0xbb05,	// (0x0003bd4e) grid_vkb_keypad_number_pane_ParamLimits

0xbb05,	// (0x0003bd4e) grid_vkb_keypad_number_pane

0xbb19,	// (0x0003bd62) grid_vkb_keypad_pane_ParamLimits

0xbb19,	// (0x0003bd62) grid_vkb_keypad_pane

0xbb3f,	// (0x0003bd88) fep_vkb_bottom_pane_g1_ParamLimits

0xbb3f,	// (0x0003bd88) fep_vkb_bottom_pane_g1

0xbb68,	// (0x0003bdb1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb68,	// (0x0003bdb1) grid_vkb_keypad_bottom_left_pane

0xbb7d,	// (0x0003bdc6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbb7d,	// (0x0003bdc6) grid_vkb_keypad_bottom_right_pane

0xbb92,	// (0x0003bddb) fep_vkb_top_text_pane_g1

0xbbad,	// (0x0003bdf6) fep_vkb_top_text_pane_t1

0xbbc2,	// (0x0003be0b) cell_vkb_side_pane_ParamLimits

0xbbc2,	// (0x0003be0b) cell_vkb_side_pane

0xb7c3,	// (0x0003ba0c) cell_vkb_side_pane_g1

0xbc01,	// (0x0003be4a) cell_vkb_keypad_pane_ParamLimits

0xbc01,	// (0x0003be4a) cell_vkb_keypad_pane

0xbc8e,	// (0x0003bed7) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0003fd9f) bg_popup_fep_shadow_pane_g

0x7a10,	// (0x00037c59) cell_hwr_side_pane_g1

0x7a10,	// (0x00037c59) cell_hwr_side_pane_g2

0xbc98,	// (0x0003bee1) cell_vkb_keypad_pane_t1

0xbca6,	// (0x0003beef) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbca6,	// (0x0003beef) cell_vkb_keypad_bottom_left_pane

0xbcc3,	// (0x0003bf0c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbcc3,	// (0x0003bf0c) cell_vkb_keypad_bottom_right_pane

0xb7c3,	// (0x0003ba0c) cell_vkb_keypad_bottom_left_pane_g1

0xb7c3,	// (0x0003ba0c) cell_vkb_keypad_bottom_right_pane_g1

0xbcfc,	// (0x0003bf45) cell_vkb_keypad_number_pane_ParamLimits

0xbcfc,	// (0x0003bf45) cell_vkb_keypad_number_pane

0xbd1b,	// (0x0003bf64) cell_vkb_keypad_number_pane_g1

0xbd25,	// (0x0003bf6e) cell_vkb_keypad_number_pane_g2

0xbd2e,	// (0x0003bf77) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0003fd91) cell_vkb_keypad_number_pane_g

0xbc98,	// (0x0003bee1) cell_vkb_keypad_number_pane_t1

0xbd58,	// (0x0003bfa1) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0003fdb2) cell_hwr_side_pane_g

0xbd71,	// (0x0003bfba) cell_hwr_side_pane_t1

0x7a1a,	// (0x00037c63) cell_hwr_side_pane_t1_copy1

0x7a28,	// (0x00037c71) cell_hwr_candidate_pane_g1

0x7a57,	// (0x00037ca0) cell_hwr_candidate_pane_t1

0xb7c3,	// (0x0003ba0c) cell_vkb_candidate_pane_g2

0xbdb5,	// (0x0003bffe) cell_vkb_candidate_pane_t1

0x77ad,	// (0x000379f6) bg_popup_fep_shadow_pane_ParamLimits

0x77ad,	// (0x000379f6) bg_popup_fep_shadow_pane

0x7864,	// (0x00037aad) bg_fep_hwr_top_pane_g4

0xb848,	// (0x0003ba91) bg_hwr_side_pane_g1_ParamLimits

0xb848,	// (0x0003ba91) bg_hwr_side_pane_g1

0x78d7,	// (0x00037b20) cell_hwr_side_pane_ParamLimits

0x78d7,	// (0x00037b20) cell_hwr_side_pane

0x7914,	// (0x00037b5d) fep_hwr_write_pane_g1_ParamLimits

0x7914,	// (0x00037b5d) fep_hwr_write_pane_g1

0x7921,	// (0x00037b6a) fep_hwr_write_pane_g2_ParamLimits

0x7921,	// (0x00037b6a) fep_hwr_write_pane_g2

0x792e,	// (0x00037b77) fep_hwr_write_pane_g3_ParamLimits

0x792e,	// (0x00037b77) fep_hwr_write_pane_g3

0x793c,	// (0x00037b85) fep_hwr_write_pane_g4_ParamLimits

0x793c,	// (0x00037b85) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0003fd5e) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0003fd5e) fep_hwr_write_pane_g

0x7864,	// (0x00037aad) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7864,	// (0x00037aad) bg_fep_hwr_candidate_pane_g2

0x7951,	// (0x00037b9a) cell_hwr_candidate_pane_ParamLimits

0x7951,	// (0x00037b9a) cell_hwr_candidate_pane

0x79a3,	// (0x00037bec) fep_hwr_candidate_pane_g1_ParamLimits

0xb8a8,	// (0x0003baf1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb8a8,	// (0x0003baf1) bg_popup_fep_shadow_pane_cp2

0xba3e,	// (0x0003bc87) fep_vkb_top_pane_g4_ParamLimits

0xba3e,	// (0x0003bc87) fep_vkb_top_pane_g4

0xba84,	// (0x0003bccd) fep_vkb_side_pane_g2_ParamLimits

0xba84,	// (0x0003bccd) fep_vkb_side_pane_g2

0x5d6a,	// (0x00035fb3) list_setting_pane_t4_ParamLimits

0x5d6a,	// (0x00035fb3) list_setting_pane_t4

0x5e06,	// (0x0003604f) list_setting_number_pane_t5_ParamLimits

0x5e06,	// (0x0003604f) list_setting_number_pane_t5

0x6364,	// (0x000365ad) list_double_heading_pane_cp2_ParamLimits

0x6364,	// (0x000365ad) list_double_heading_pane_cp2

0x24e4,	// (0x0003272d) list_double_heading_pane_g1_cp2_ParamLimits

0x24e4,	// (0x0003272d) list_double_heading_pane_g1_cp2

0x24f0,	// (0x00032739) list_double_heading_pane_g2_cp2_ParamLimits

0x24f0,	// (0x00032739) list_double_heading_pane_g2_cp2

0xbdc3,	// (0x0003c00c) list_double_heading_pane_t1_cp2_ParamLimits

0xbdc3,	// (0x0003c00c) list_double_heading_pane_t1_cp2

0xbdd9,	// (0x0003c022) list_double_heading_pane_t2_cp2_ParamLimits

0xbdd9,	// (0x0003c022) list_double_heading_pane_t2_cp2

0xf266,	// (0x0003f4af) aid_value_unit2

0x5511,	// (0x0003575a) popup_preview_fixed_window

0xf411,	// (0x0003f65a) bg_popup_preview_window_pane_cp02

0xbdeb,	// (0x0003c034) list_preview_fixed_pane

0xbe31,	// (0x0003c07a) list_empty_pane_fp_ParamLimits

0xbe31,	// (0x0003c07a) list_empty_pane_fp

0xbe31,	// (0x0003c07a) list_single_cale_day_pane_fp_ParamLimits

0xbe31,	// (0x0003c07a) list_single_cale_day_pane_fp

0xbe31,	// (0x0003c07a) list_single_graphic_heading_pane_fp_ParamLimits

0xbe31,	// (0x0003c07a) list_single_graphic_heading_pane_fp

0xbe31,	// (0x0003c07a) list_single_graphic_pane_fp_ParamLimits

0xbe31,	// (0x0003c07a) list_single_graphic_pane_fp

0xbe31,	// (0x0003c07a) list_single_heading_pane_fp_ParamLimits

0xbe31,	// (0x0003c07a) list_single_heading_pane_fp

0xbe31,	// (0x0003c07a) list_single_pane_fp_ParamLimits

0xbe31,	// (0x0003c07a) list_single_pane_fp

0xbe4a,	// (0x0003c093) list_single_pane_fp_g1_ParamLimits

0xbe4a,	// (0x0003c093) list_single_pane_fp_g1

0x42c8,	// (0x00034511) list_single_pane_fp_g2_ParamLimits

0x42c8,	// (0x00034511) list_single_pane_fp_g2

0x42d4,	// (0x0003451d) list_single_pane_fp_g3_ParamLimits

0x42d4,	// (0x0003451d) list_single_pane_fp_g3

0xbe56,	// (0x0003c09f) list_single_pane_fp_g4_ParamLimits

0xbe56,	// (0x0003c09f) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0003fdc5) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003fdc5) list_single_pane_fp_g

0x42e8,	// (0x00034531) list_single_pane_fp_t1_ParamLimits

0x42e8,	// (0x00034531) list_single_pane_fp_t1

0x42ff,	// (0x00034548) list_single_graphic_pane_fp_g1_ParamLimits

0x42ff,	// (0x00034548) list_single_graphic_pane_fp_g1

0xbe4a,	// (0x0003c093) list_single_graphic_pane_fp_g2_ParamLimits

0xbe4a,	// (0x0003c093) list_single_graphic_pane_fp_g2

0x42c8,	// (0x00034511) list_single_graphic_pane_fp_g3_ParamLimits

0x42c8,	// (0x00034511) list_single_graphic_pane_fp_g3

0x42d4,	// (0x0003451d) list_single_graphic_pane_fp_g4_ParamLimits

0x42d4,	// (0x0003451d) list_single_graphic_pane_fp_g4

0xbe56,	// (0x0003c09f) list_single_graphic_pane_fp_g5_ParamLimits

0xbe56,	// (0x0003c09f) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0003fdce) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0003fdce) list_single_graphic_pane_fp_g

0x430b,	// (0x00034554) list_single_graphic_pane_fp_t1_ParamLimits

0x430b,	// (0x00034554) list_single_graphic_pane_fp_t1

0x42ff,	// (0x00034548) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x42ff,	// (0x00034548) list_single_graphic_heading_pane_fp_g1

0xbe4a,	// (0x0003c093) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe4a,	// (0x0003c093) list_single_graphic_heading_pane_fp_g2

0x42c8,	// (0x00034511) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x42c8,	// (0x00034511) list_single_graphic_heading_pane_fp_g3

0x42d4,	// (0x0003451d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x42d4,	// (0x0003451d) list_single_graphic_heading_pane_fp_g4

0xbe56,	// (0x0003c09f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbe56,	// (0x0003c09f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0003fdce) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0003fdce) list_single_graphic_heading_pane_fp_g

0x4321,	// (0x0003456a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4321,	// (0x0003456a) list_single_graphic_heading_pane_fp_t1

0x4337,	// (0x00034580) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4337,	// (0x00034580) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0003fdd9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0003fdd9) list_single_graphic_heading_pane_fp_t

0x4349,	// (0x00034592) list_single_cale_day_pane_fp_g1_ParamLimits

0x4349,	// (0x00034592) list_single_cale_day_pane_fp_g1

0xbe62,	// (0x0003c0ab) list_single_cale_day_pane_fp_g2_ParamLimits

0xbe62,	// (0x0003c0ab) list_single_cale_day_pane_fp_g2

0x4381,	// (0x000345ca) list_single_cale_day_pane_fp_g3_ParamLimits

0x4381,	// (0x000345ca) list_single_cale_day_pane_fp_g3

0x456e,	// (0x000347b7) list_single_cale_day_pane_fp_g4_ParamLimits

0x456e,	// (0x000347b7) list_single_cale_day_pane_fp_g4

0x4592,	// (0x000347db) list_single_cale_day_pane_fp_g5_ParamLimits

0x4592,	// (0x000347db) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0003fdde) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0003fdde) list_single_cale_day_pane_fp_g

0x45b6,	// (0x000347ff) list_single_cale_day_pane_fp_t1_ParamLimits

0x45b6,	// (0x000347ff) list_single_cale_day_pane_fp_t1

0x45dc,	// (0x00034825) list_single_cale_day_pane_fp_t2_ParamLimits

0x45dc,	// (0x00034825) list_single_cale_day_pane_fp_t2

0x45f5,	// (0x0003483e) list_single_cale_day_pane_fp_t3_ParamLimits

0x45f5,	// (0x0003483e) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0003fde9) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0003fde9) list_single_cale_day_pane_fp_t

0xbe4a,	// (0x0003c093) list_empty_pane_fp_g1_ParamLimits

0xbe4a,	// (0x0003c093) list_empty_pane_fp_g1

0x460e,	// (0x00034857) list_empty_pane_fp_t1

0x461c,	// (0x00034865) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0003fdf0) list_empty_pane_fp_t

0xbe4a,	// (0x0003c093) list_single_heading_pane_fp_g1_ParamLimits

0xbe4a,	// (0x0003c093) list_single_heading_pane_fp_g1

0x42c8,	// (0x00034511) list_single_heading_pane_fp_g2_ParamLimits

0x42c8,	// (0x00034511) list_single_heading_pane_fp_g2

0x42d4,	// (0x0003451d) list_single_heading_pane_fp_g3_ParamLimits

0x42d4,	// (0x0003451d) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0003fdf5) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0003fdf5) list_single_heading_pane_fp_g

0x462a,	// (0x00034873) list_single_heading_pane_fp_t1_ParamLimits

0x462a,	// (0x00034873) list_single_heading_pane_fp_t1

0x463c,	// (0x00034885) list_single_heading_pane_fp_t2_ParamLimits

0x463c,	// (0x00034885) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0003fdfc) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0003fdfc) list_single_heading_pane_fp_t

0x263c,	// (0x00032885) aid_size_cell_fast

0xf3e6,	// (0x0003f62f) soft_indicator_pane_cp1_t1

0x2679,	// (0x000328c2) cell_app_pane_cp2_ParamLimits

0x2679,	// (0x000328c2) cell_app_pane_cp2

0x77cf,	// (0x00037a18) fep_hwr_candidate_drop_down_list_pane

0x79bd,	// (0x00037c06) fep_hwr_candidate_pane_g3_ParamLimits

0x79bd,	// (0x00037c06) fep_hwr_candidate_pane_g3

0x346e,	// (0x000336b7) fep_hwr_candidate_pane_g4_ParamLimits

0x346e,	// (0x000336b7) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0003fd6b) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0003fd6b) fep_hwr_candidate_pane_g

0xb938,	// (0x0003bb81) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb938,	// (0x0003bb81) fep_vkb_candidate_drop_down_list_pane

0xbd60,	// (0x0003bfa9) fep_vkb_candidate_pane_g3

0xbd68,	// (0x0003bfb1) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0003fd98) fep_vkb_candidate_pane_g

0x7a28,	// (0x00037c71) cell_hwr_candidate_pane_g1_ParamLimits

0x7a36,	// (0x00037c7f) cell_hwr_candidate_pane_g3_ParamLimits

0x7a36,	// (0x00037c7f) cell_hwr_candidate_pane_g3

0xd8f5,	// (0x0003db3e) cell_hwr_candidate_pane_g4_ParamLimits

0xd8f5,	// (0x0003db3e) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0003fdb7) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0003fdb7) cell_hwr_candidate_pane_g

0xbd7f,	// (0x0003bfc8) cell_vkb_candidate_pane_g3_ParamLimits

0xbd7f,	// (0x0003bfc8) cell_vkb_candidate_pane_g3

0xbd9a,	// (0x0003bfe3) cell_vkb_candidate_pane_g4_ParamLimits

0xbd9a,	// (0x0003bfe3) cell_vkb_candidate_pane_g4

0xbe6e,	// (0x0003c0b7) cell_app_pane_cp2_g1_ParamLimits

0xbe6e,	// (0x0003c0b7) cell_app_pane_cp2_g1

0xbe8c,	// (0x0003c0d5) cell_app_pane_cp2_g2_ParamLimits

0xbe8c,	// (0x0003c0d5) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0003fe01) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0003fe01) cell_app_pane_cp2_g

0xbe98,	// (0x0003c0e1) cell_app_pane_cp2_t1_ParamLimits

0xbe98,	// (0x0003c0e1) cell_app_pane_cp2_t1

0x24ca,	// (0x00032713) grid_highlight_pane_cp1_ParamLimits

0x24ca,	// (0x00032713) grid_highlight_pane_cp1

0x7a75,	// (0x00037cbe) cell_hwr_candidate_pane_cp1_ParamLimits

0x7a75,	// (0x00037cbe) cell_hwr_candidate_pane_cp1

0x7a28,	// (0x00037c71) fep_hwr_candidate_drop_down_list_pane_g1

0x7a99,	// (0x00037ce2) fep_hwr_candidate_drop_down_list_pane_g2

0x7aa6,	// (0x00037cef) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0003fe06) fep_hwr_candidate_drop_down_list_pane_g

0x7ab3,	// (0x00037cfc) fep_hwr_candidate_drop_down_list_scroll_pane

0x7abc,	// (0x00037d05) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7abc,	// (0x00037d05) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7ac9,	// (0x00037d12) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ac9,	// (0x00037d12) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7ad6,	// (0x00037d1f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ad6,	// (0x00037d1f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7ae3,	// (0x00037d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ae3,	// (0x00037d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7afe,	// (0x00037d47) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7afe,	// (0x00037d47) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7b19,	// (0x00037d62) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b19,	// (0x00037d62) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7b34,	// (0x00037d7d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b34,	// (0x00037d7d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7b4f,	// (0x00037d98) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b4f,	// (0x00037d98) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0003fe0d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0003fe0d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbeaa,	// (0x0003c0f3) cell_vkb_candidate_pane_cp1_ParamLimits

0xbeaa,	// (0x0003c0f3) cell_vkb_candidate_pane_cp1

0xba3e,	// (0x0003bc87) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xba3e,	// (0x0003bc87) fep_vkb_candidate_drop_down_list_pane_g1

0xbed0,	// (0x0003c119) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbed0,	// (0x0003c119) fep_vkb_candidate_drop_down_list_pane_g2

0xbedd,	// (0x0003c126) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbedd,	// (0x0003c126) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0003fe1e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0003fe1e) fep_vkb_candidate_drop_down_list_pane_g

0xbeea,	// (0x0003c133) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbeea,	// (0x0003c133) fep_vkb_candidate_drop_down_list_scroll_pane

0xbef7,	// (0x0003c140) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbef7,	// (0x0003c140) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbf04,	// (0x0003c14d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbf04,	// (0x0003c14d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbf10,	// (0x0003c159) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf10,	// (0x0003c159) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbf1c,	// (0x0003c165) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbf1c,	// (0x0003c165) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbf3d,	// (0x0003c186) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbf3d,	// (0x0003c186) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbf5e,	// (0x0003c1a7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbf5e,	// (0x0003c1a7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbf7f,	// (0x0003c1c8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbf7f,	// (0x0003c1c8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbfa0,	// (0x0003c1e9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbfa0,	// (0x0003c1e9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0003fe25) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0003fe25) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5629,	// (0x00035872) title_pane_g1_ParamLimits

0x5636,	// (0x0003587f) title_pane_g2_ParamLimits

0xf554,	// (0x0003f79d) title_pane_g_ParamLimits

0x62ee,	// (0x00036537) aid_call2_pane

0x62f6,	// (0x0003653f) aid_call_pane

0x62fe,	// (0x00036547) popup_clock_analogue_window_g1

0x62fe,	// (0x00036547) popup_clock_analogue_window_g2

0x6306,	// (0x0003654f) popup_clock_analogue_window_g3

0x630f,	// (0x00036558) popup_clock_analogue_window_g4

0xf278,	// (0x0003f4c1) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0003f947) popup_clock_analogue_window_g

0x6317,	// (0x00036560) popup_clock_analogue_window_t1

0x63a7,	// (0x000365f0) clock_digital_number_pane_ParamLimits

0x63a7,	// (0x000365f0) clock_digital_number_pane

0x63b3,	// (0x000365fc) clock_digital_number_pane_cp02_ParamLimits

0x63b3,	// (0x000365fc) clock_digital_number_pane_cp02

0x63bf,	// (0x00036608) clock_digital_number_pane_cp03_ParamLimits

0x63bf,	// (0x00036608) clock_digital_number_pane_cp03

0x63cb,	// (0x00036614) clock_digital_number_pane_cp04_ParamLimits

0x63cb,	// (0x00036614) clock_digital_number_pane_cp04

0x63d7,	// (0x00036620) clock_digital_separator_pane_ParamLimits

0x63d7,	// (0x00036620) clock_digital_separator_pane

0x63e3,	// (0x0003662c) popup_clock_digital_window_t1_ParamLimits

0x63e3,	// (0x0003662c) popup_clock_digital_window_t1

0xf278,	// (0x0003f4c1) clock_digital_number_pane_g1

0xf278,	// (0x0003f4c1) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0003f952) clock_digital_number_pane_g

0xf278,	// (0x0003f4c1) clock_digital_separator_pane_g1

0xf278,	// (0x0003f4c1) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0003f952) clock_digital_separator_pane_g

0x8ba9,	// (0x00038df2) aid_fill_nsta_ParamLimits

0x8cf9,	// (0x00038f42) indicator_nsta_pane_ParamLimits

0x8e8a,	// (0x000390d3) popup_clock_analogue_window

0x8e8a,	// (0x000390d3) popup_clock_digital_window

0xf2d0,	// (0x0003f519) grid_indicator_nsta_pane_ParamLimits

0xb1ea,	// (0x0003b433) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0003fceb) clock_nsta_pane_t

0x6257,	// (0x000364a0) aid_size_max_handle

0x6261,	// (0x000364aa) aid_size_min_handle

0x883b,	// (0x00038a84) editor_scroll_pane

0xbfbb,	// (0x0003c204) ex_editor_pane

0x2602,	// (0x0003284b) scroll_pane_cp13

0x2469,	// (0x000326b2) scroll_pane_cp14

0x634c,	// (0x00036595) scroll_pane_cp36

0x637a,	// (0x000365c3) list_single_graphic_hl_pane_cp2_ParamLimits

0x637a,	// (0x000365c3) list_single_graphic_hl_pane_cp2

0x7663,	// (0x000378ac) list_single_graphic_hl_pane_ParamLimits

0x7663,	// (0x000378ac) list_single_graphic_hl_pane

0x4652,	// (0x0003489b) aid_size_min_hl_cp1

0xbfc3,	// (0x0003c20c) list_highlight_pane_cp34_ParamLimits

0xbfc3,	// (0x0003c20c) list_highlight_pane_cp34

0xbfd4,	// (0x0003c21d) list_single_graphic_hl_pane_g1_ParamLimits

0xbfd4,	// (0x0003c21d) list_single_graphic_hl_pane_g1

0x7b6a,	// (0x00037db3) list_single_graphic_hl_pane_g2_ParamLimits

0x7b6a,	// (0x00037db3) list_single_graphic_hl_pane_g2

0x7b6a,	// (0x00037db3) list_single_graphic_hl_pane_g3_ParamLimits

0x7b6a,	// (0x00037db3) list_single_graphic_hl_pane_g3

0x3e14,	// (0x0003405d) list_single_graphic_hl_pane_g4_ParamLimits

0x3e14,	// (0x0003405d) list_single_graphic_hl_pane_g4

0x7b76,	// (0x00037dbf) list_single_graphic_hl_pane_g5_ParamLimits

0x7b76,	// (0x00037dbf) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0003fe36) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0003fe36) list_single_graphic_hl_pane_g

0x7b8a,	// (0x00037dd3) list_single_graphic_hl_pane_t1_ParamLimits

0x7b8a,	// (0x00037dd3) list_single_graphic_hl_pane_t1

0xbfe1,	// (0x0003c22a) aid_size_min_hl_cp2

0xbfea,	// (0x0003c233) list_highlight_pane_cp34_cp2_ParamLimits

0xbfea,	// (0x0003c233) list_highlight_pane_cp34_cp2

0xbfd4,	// (0x0003c21d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbfd4,	// (0x0003c21d) list_single_graphic_hl_pane_g1_cp2

0xbff7,	// (0x0003c240) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbff7,	// (0x0003c240) list_single_graphic_hl_pane_g2_cp2

0xc003,	// (0x0003c24c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc003,	// (0x0003c24c) list_single_graphic_hl_pane_g3_cp2

0x29b1,	// (0x00032bfa) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x29b1,	// (0x00032bfa) list_single_graphic_hl_pane_g4_cp2

0xc011,	// (0x0003c25a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc011,	// (0x0003c25a) list_single_graphic_hl_pane_g5_cp2

0x6ae1,	// (0x00036d2a) control_pane_g4_ParamLimits

0x6ae1,	// (0x00036d2a) control_pane_g4

0x8b87,	// (0x00038dd0) bg_popup_sub_pane_cp10_ParamLimits

0xb7cd,	// (0x0003ba16) list_choice_list_pane_ParamLimits

0xb7dc,	// (0x0003ba25) scroll_pane_cp23

0xf411,	// (0x0003f65a) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdeb,	// (0x0003c034) list_preview_fixed_pane_ParamLimits

0xbe01,	// (0x0003c04a) list_preview_fixed_pane_cp_ParamLimits

0xbe01,	// (0x0003c04a) list_preview_fixed_pane_cp

0xbe0d,	// (0x0003c056) popup_preview_fixed_window_g1_ParamLimits

0xbe0d,	// (0x0003c056) popup_preview_fixed_window_g1

0xbe19,	// (0x0003c062) popup_preview_fixed_window_g2_ParamLimits

0xbe19,	// (0x0003c062) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0003fdbe) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0003fdbe) popup_preview_fixed_window_g

0x6140,	// (0x00036389) aid_navi_side_left_pane_ParamLimits

0x6155,	// (0x0003639e) aid_navi_side_right_pane_ParamLimits

0x616d,	// (0x000363b6) navi_icon_pane_stacon_ParamLimits

0x6181,	// (0x000363ca) navi_navi_pane_stacon_ParamLimits

0x616d,	// (0x000363b6) navi_text_pane_stacon_ParamLimits

0x53c8,	// (0x00035611) main_text_info_pane

0xc03b,	// (0x0003c284) listscroll_text_info_pane

0xc043,	// (0x0003c28c) list_text_info_pane_ParamLimits

0xc043,	// (0x0003c28c) list_text_info_pane

0xc052,	// (0x0003c29b) scroll_pane_cp24_ParamLimits

0xc052,	// (0x0003c29b) scroll_pane_cp24

0xc070,	// (0x0003c2b9) list_text_info_pane_t1_ParamLimits

0xc070,	// (0x0003c2b9) list_text_info_pane_t1

0x6c49,	// (0x00036e92) popup_fast_swap2_window_ParamLimits

0x6c49,	// (0x00036e92) popup_fast_swap2_window

0xc095,	// (0x0003c2de) aid_size_cell_fast2

0xf26e,	// (0x0003f4b7) bg_popup_window_pane_cp17

0x956f,	// (0x000397b8) heading_pane_cp2

0x21ee,	// (0x00032437) listscroll_fast2_pane

0xc09f,	// (0x0003c2e8) grid_fast2_pane

0xc0a9,	// (0x0003c2f2) listscroll_fast2_pane_g1

0xc0b3,	// (0x0003c2fc) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0003fe41) listscroll_fast2_pane_g

0x2602,	// (0x0003284b) scroll_pane_cp26

0xc0bd,	// (0x0003c306) cell_fast2_pane_ParamLimits

0xc0bd,	// (0x0003c306) cell_fast2_pane

0xc0d4,	// (0x0003c31d) cell_fast2_pane_g1

0xc0dd,	// (0x0003c326) cell_fast2_pane_g2

0xc0e6,	// (0x0003c32f) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0003fe46) cell_fast2_pane_g

0x2230,	// (0x00032479) grid_highlight_pane_cp9

0x6c0b,	// (0x00036e54) main_eswt_pane_ParamLimits

0x6c0b,	// (0x00036e54) main_eswt_pane

0xc067,	// (0x0003c2b0) list_single_text_info_pane

0xc0ee,	// (0x0003c337) eswt_ctrl_button_pane

0xc0ee,	// (0x0003c337) eswt_ctrl_canvas_pane

0xc0f6,	// (0x0003c33f) eswt_ctrl_combo_pane

0xc0ee,	// (0x0003c337) eswt_ctrl_default_pane

0xc0ee,	// (0x0003c337) eswt_ctrl_label_pane

0xc0fe,	// (0x0003c347) eswt_ctrl_wait_pane

0xc106,	// (0x0003c34f) eswt_shell_pane

0xf26e,	// (0x0003f4b7) listscroll_eswt_app_pane

0xc126,	// (0x0003c36f) popup_eswt_tasktip_window_ParamLimits

0xc126,	// (0x0003c36f) popup_eswt_tasktip_window

0x91af,	// (0x000393f8) bg_popup_window_pane_cp18

0xc137,	// (0x0003c380) eswt_control_pane_g1_ParamLimits

0xc137,	// (0x0003c380) eswt_control_pane_g1

0xc144,	// (0x0003c38d) eswt_control_pane_g2_ParamLimits

0xc144,	// (0x0003c38d) eswt_control_pane_g2

0xc151,	// (0x0003c39a) eswt_control_pane_g3_ParamLimits

0xc151,	// (0x0003c39a) eswt_control_pane_g3

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_ParamLimits

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0003fe4d) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0003fe4d) eswt_control_pane_g

0x24ca,	// (0x00032713) bg_button_pane_ParamLimits

0x24ca,	// (0x00032713) bg_button_pane

0x2245,	// (0x0003248e) common_borders_pane_copy2_ParamLimits

0x2245,	// (0x0003248e) common_borders_pane_copy2

0xc16b,	// (0x0003c3b4) control_button_pane_g1_ParamLimits

0xc16b,	// (0x0003c3b4) control_button_pane_g1

0xc177,	// (0x0003c3c0) control_button_pane_g2_ParamLimits

0xc177,	// (0x0003c3c0) control_button_pane_g2

0xc183,	// (0x0003c3cc) control_button_pane_g3_ParamLimits

0xc183,	// (0x0003c3cc) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0003fe56) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0003fe56) control_button_pane_g

0xc197,	// (0x0003c3e0) control_button_pane_t1

0xc1a5,	// (0x0003c3ee) control_button_pane_t2

0x0001,

0xfc14,	// (0x0003fe5d) control_button_pane_t

0x90b3,	// (0x000392fc) bg_button_pane_g1

0x90c3,	// (0x0003930c) bg_button_pane_g2

0x90bb,	// (0x00039304) bg_button_pane_g3

0x90d3,	// (0x0003931c) bg_button_pane_g4

0x90cb,	// (0x00039314) bg_button_pane_g5

0x90db,	// (0x00039324) bg_button_pane_g6

0x90e3,	// (0x0003932c) bg_button_pane_g7

0x90f3,	// (0x0003933c) bg_button_pane_g8

0x90eb,	// (0x00039334) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0003fab5) bg_button_pane_g

0xb788,	// (0x0003b9d1) common_borders_pane_ParamLimits

0xb788,	// (0x0003b9d1) common_borders_pane

0xc137,	// (0x0003c380) eswt_control_pane_g1_copy1_ParamLimits

0xc137,	// (0x0003c380) eswt_control_pane_g1_copy1

0xc144,	// (0x0003c38d) eswt_control_pane_g2_copy1_ParamLimits

0xc144,	// (0x0003c38d) eswt_control_pane_g2_copy1

0xc151,	// (0x0003c39a) eswt_control_pane_g3_copy1_ParamLimits

0xc151,	// (0x0003c39a) eswt_control_pane_g3_copy1

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_copy1_ParamLimits

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_copy1

0xb7c3,	// (0x0003ba0c) bg_eswt_ctrl_canvas_pane_g1

0xb788,	// (0x0003b9d1) common_borders_pane_cp2_ParamLimits

0xb788,	// (0x0003b9d1) common_borders_pane_cp2

0xb788,	// (0x0003b9d1) common_borders_pane_cp3_ParamLimits

0xb788,	// (0x0003b9d1) common_borders_pane_cp3

0xc1b3,	// (0x0003c3fc) separator_horizontal_pane

0xc1bb,	// (0x0003c404) separator_vertical_pane

0xc137,	// (0x0003c380) eswt_control_pane_g1_copy2_ParamLimits

0xc137,	// (0x0003c380) eswt_control_pane_g1_copy2

0xc144,	// (0x0003c38d) eswt_control_pane_g2_copy2_ParamLimits

0xc144,	// (0x0003c38d) eswt_control_pane_g2_copy2

0xc151,	// (0x0003c39a) eswt_control_pane_g3_copy2_ParamLimits

0xc151,	// (0x0003c39a) eswt_control_pane_g3_copy2

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_copy2_ParamLimits

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_copy2

0xf26e,	// (0x0003f4b7) common_borders_pane_cp4

0xc1c4,	// (0x0003c40d) separator_horizontal_pane_g1

0xc1cd,	// (0x0003c416) separator_horizontal_pane_g2

0xc1d6,	// (0x0003c41f) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0003fe62) separator_horizontal_pane_g

0xc137,	// (0x0003c380) eswt_control_pane_g1_copy3_ParamLimits

0xc137,	// (0x0003c380) eswt_control_pane_g1_copy3

0xc144,	// (0x0003c38d) eswt_control_pane_g2_copy3_ParamLimits

0xc144,	// (0x0003c38d) eswt_control_pane_g2_copy3

0xc151,	// (0x0003c39a) eswt_control_pane_g3_copy3_ParamLimits

0xc151,	// (0x0003c39a) eswt_control_pane_g3_copy3

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_copy3_ParamLimits

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_copy3

0xf26e,	// (0x0003f4b7) common_borders_pane_cp5

0xc1df,	// (0x0003c428) separator_vertical_pane_g1

0xc1e8,	// (0x0003c431) separator_vertical_pane_g2

0xc1f1,	// (0x0003c43a) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0003fe69) separator_vertical_pane_g

0xc137,	// (0x0003c380) eswt_control_pane_g1_copy4_ParamLimits

0xc137,	// (0x0003c380) eswt_control_pane_g1_copy4

0xc144,	// (0x0003c38d) eswt_control_pane_g2_copy4_ParamLimits

0xc144,	// (0x0003c38d) eswt_control_pane_g2_copy4

0xc151,	// (0x0003c39a) eswt_control_pane_g3_copy4_ParamLimits

0xc151,	// (0x0003c39a) eswt_control_pane_g3_copy4

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_copy4_ParamLimits

0xc15e,	// (0x0003c3a7) eswt_control_pane_g4_copy4

0xc1fa,	// (0x0003c443) eswt_ctrl_combo_button_pane

0xc202,	// (0x0003c44b) eswt_ctrl_input_pane

0xc20a,	// (0x0003c453) popup_choice_list_window_cp70

0xc212,	// (0x0003c45b) eswt_ctrl_input_pane_t1

0xf26e,	// (0x0003f4b7) input_focus_pane_cp70

0xb788,	// (0x0003b9d1) bg_button_pane_cp70_ParamLimits

0xb788,	// (0x0003b9d1) bg_button_pane_cp70

0xc220,	// (0x0003c469) eswt_ctrl_combo_button_pane_g1

0xc228,	// (0x0003c471) wait_bar_pane_cp70

0x91af,	// (0x000393f8) bg_popup_window_pane_cp70_ParamLimits

0x91af,	// (0x000393f8) bg_popup_window_pane_cp70

0xc230,	// (0x0003c479) popup_eswt_tasktip_window_t1

0xc246,	// (0x0003c48f) wait_bar_pane_cp71_ParamLimits

0xc246,	// (0x0003c48f) wait_bar_pane_cp71

0xc252,	// (0x0003c49b) grid_eswt_app_pane

0x284b,	// (0x00032a94) scroll_pane_cp70

0xc25b,	// (0x0003c4a4) cell_eswt_app_pane_ParamLimits

0xc25b,	// (0x0003c4a4) cell_eswt_app_pane

0xc28d,	// (0x0003c4d6) cell_eswt_app_pane_g1_ParamLimits

0xc28d,	// (0x0003c4d6) cell_eswt_app_pane_g1

0xc2bc,	// (0x0003c505) cell_eswt_app_pane_g2_ParamLimits

0xc2bc,	// (0x0003c505) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0003fe70) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0003fe70) cell_eswt_app_pane_g

0xc2e5,	// (0x0003c52e) cell_eswt_app_pane_t1_ParamLimits

0xc2e5,	// (0x0003c52e) cell_eswt_app_pane_t1

0xc317,	// (0x0003c560) grid_highlight_pane_cp70_ParamLimits

0xc317,	// (0x0003c560) grid_highlight_pane_cp70

0x870c,	// (0x00038955) set_content_pane_g1

0x8adf,	// (0x00038d28) status_small_volume_pane

0x7ba0,	// (0x00037de9) status_small_volume_pane_g1

0x7ba8,	// (0x00037df1) volume_small2_pane

0x7bb1,	// (0x00037dfa) volume_small2_pane_g1

0x7bba,	// (0x00037e03) volume_small2_pane_g2

0x7bc3,	// (0x00037e0c) volume_small2_pane_g3

0x7bcc,	// (0x00037e15) volume_small2_pane_g4

0x7bd5,	// (0x00037e1e) volume_small2_pane_g5

0x7bde,	// (0x00037e27) volume_small2_pane_g6

0x7be7,	// (0x00037e30) volume_small2_pane_g7

0x7bf0,	// (0x00037e39) volume_small2_pane_g8

0x7bf9,	// (0x00037e42) volume_small2_pane_g9

0x7c02,	// (0x00037e4b) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0003fe75) volume_small2_pane_g

0xbb92,	// (0x0003bddb) fep_vkb_top_text_pane_g1_ParamLimits

0xbbad,	// (0x0003bdf6) fep_vkb_top_text_pane_t1_ParamLimits

0xbe25,	// (0x0003c06e) popup_preview_fixed_window_g3_ParamLimits

0xbe25,	// (0x0003c06e) popup_preview_fixed_window_g3

0x715a,	// (0x000373a3) popup_toolbar_trans_pane

0xa50d,	// (0x0003a756) aid_height_set_list_ParamLimits

0xa51e,	// (0x0003a767) aid_size_parent_ParamLimits

0x8b87,	// (0x00038dd0) list_highlight_pane_cp2_ParamLimits

0x870c,	// (0x00038955) set_content_pane_g1_ParamLimits

0xa751,	// (0x0003a99a) list_single_image_pane_ParamLimits

0xa751,	// (0x0003a99a) list_single_image_pane

0xc323,	// (0x0003c56c) aid_size_cell_image_ParamLimits

0xc323,	// (0x0003c56c) aid_size_cell_image

0xc330,	// (0x0003c579) grid_single_image_pane_ParamLimits

0xc330,	// (0x0003c579) grid_single_image_pane

0x24e4,	// (0x0003272d) list_single_image_pane_g1_ParamLimits

0x24e4,	// (0x0003272d) list_single_image_pane_g1

0x24f0,	// (0x00032739) list_single_image_pane_g2_ParamLimits

0x24f0,	// (0x00032739) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0003fe8a) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0003fe8a) list_single_image_pane_g

0xc33e,	// (0x0003c587) list_single_image_pane_t1_ParamLimits

0xc33e,	// (0x0003c587) list_single_image_pane_t1

0xc354,	// (0x0003c59d) cell_image_list_pane_ParamLimits

0xc354,	// (0x0003c59d) cell_image_list_pane

0xc36a,	// (0x0003c5b3) cell_image_list_pane_g1

0xc373,	// (0x0003c5bc) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0003fe8f) cell_image_list_pane_g

0xc37c,	// (0x0003c5c5) aid_size_cell_tb_trans_pane

0x24ca,	// (0x00032713) bg_tb_trans_pane

0xc38e,	// (0x0003c5d7) grid_tb_trans_pane

0x90b3,	// (0x000392fc) bg_tb_trans_pane_g1

0x90c3,	// (0x0003930c) bg_tb_trans_pane_g2

0x90bb,	// (0x00039304) bg_tb_trans_pane_g3

0x90d3,	// (0x0003931c) bg_tb_trans_pane_g4

0x90cb,	// (0x00039314) bg_tb_trans_pane_g5

0x90f3,	// (0x0003933c) bg_tb_trans_pane_g6

0x90eb,	// (0x00039334) bg_tb_trans_pane_g7

0x90db,	// (0x00039324) bg_tb_trans_pane_g8

0x90e3,	// (0x0003932c) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0003fe94) bg_tb_trans_pane_g

0xc3a2,	// (0x0003c5eb) cell_toolbar_trans_pane_ParamLimits

0xc3a2,	// (0x0003c5eb) cell_toolbar_trans_pane

0xb7c3,	// (0x0003ba0c) cell_toolbar_trans_pane_g1

0xb3e7,	// (0x0003b630) list_form2_midp_pane_t1

0xb3f5,	// (0x0003b63e) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0003fd31) list_form2_midp_pane_t

0xb403,	// (0x0003b64c) scroll_pane_cp51_ParamLimits

0xb5ca,	// (0x0003b813) form2_midp_wait_pane_g1

0xb5d3,	// (0x0003b81c) form2_midp_wait_pane_g2

0xb5dc,	// (0x0003b825) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0003fd46) form2_midp_wait_pane_g

0xf2d0,	// (0x0003f519) list_highlight_pane_cp21_ParamLimits

0xb620,	// (0x0003b869) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb62f,	// (0x0003b878) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa70a,	// (0x0003a953) list_single_2graphic_im_pane_ParamLimits

0xa70a,	// (0x0003a953) list_single_2graphic_im_pane

0xc3c8,	// (0x0003c611) list_single_2graphic_im_pane_g1_ParamLimits

0xc3c8,	// (0x0003c611) list_single_2graphic_im_pane_g1

0xc3d9,	// (0x0003c622) list_single_2graphic_im_pane_g2_ParamLimits

0xc3d9,	// (0x0003c622) list_single_2graphic_im_pane_g2

0xc3e5,	// (0x0003c62e) list_single_2graphic_im_pane_g3_ParamLimits

0xc3e5,	// (0x0003c62e) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0003fea7) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0003fea7) list_single_2graphic_im_pane_g

0xc405,	// (0x0003c64e) list_single_2graphic_im_pane_t1_ParamLimits

0xc405,	// (0x0003c64e) list_single_2graphic_im_pane_t1

0xbe31,	// (0x0003c07a) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe31,	// (0x0003c07a) list_single_graphic_2heading_pane_fp

0x42ff,	// (0x00034548) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x42ff,	// (0x00034548) list_single_graphic_2heading_pane_fp_g1

0xbe4a,	// (0x0003c093) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe4a,	// (0x0003c093) list_single_graphic_2heading_pane_fp_g2

0x42c8,	// (0x00034511) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x42c8,	// (0x00034511) list_single_graphic_2heading_pane_fp_g3

0x42d4,	// (0x0003451d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x42d4,	// (0x0003451d) list_single_graphic_2heading_pane_fp_g4

0xbe56,	// (0x0003c09f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbe56,	// (0x0003c09f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0003fdce) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0003fdce) list_single_graphic_2heading_pane_fp_g

0x465b,	// (0x000348a4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x465b,	// (0x000348a4) list_single_graphic_2heading_pane_fp_t1

0x4337,	// (0x00034580) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4337,	// (0x00034580) list_single_graphic_2heading_pane_fp_t2

0x4671,	// (0x000348ba) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4671,	// (0x000348ba) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0003feb0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0003feb0) list_single_graphic_2heading_pane_fp_t

0xb854,	// (0x0003ba9d) fep_hwr_write_pane_g5_ParamLimits

0xb854,	// (0x0003ba9d) fep_hwr_write_pane_g5

0xb860,	// (0x0003baa9) fep_hwr_write_pane_g6_ParamLimits

0xb860,	// (0x0003baa9) fep_hwr_write_pane_g6

0xc106,	// (0x0003c34f) eswt_shell_pane_ParamLimits

0x91af,	// (0x000393f8) bg_popup_window_pane_cp18_ParamLimits

0xa464,	// (0x0003a6ad) heading_pane_cp70

0xc230,	// (0x0003c479) popup_eswt_tasktip_window_t1_ParamLimits

0x8c00,	// (0x00038e49) aid_touch_tab_arrow_left

0x8c0f,	// (0x00038e58) aid_touch_tab_arrow_right

0x5647,	// (0x00035890) title_pane_g3_ParamLimits

0x5647,	// (0x00035890) title_pane_g3

0x2489,	// (0x000326d2) set_value_pane_g1

0x715a,	// (0x000373a3) popup_toolbar_trans_pane_ParamLimits

0xc37c,	// (0x0003c5c5) aid_size_cell_tb_trans_pane_ParamLimits

0x24ca,	// (0x00032713) bg_tb_trans_pane_ParamLimits

0xc38e,	// (0x0003c5d7) grid_tb_trans_pane_ParamLimits

0xf411,	// (0x0003f65a) cont_note_pane_ParamLimits

0xf411,	// (0x0003f65a) cont_note_pane

0x2245,	// (0x0003248e) cont_snote2_single_text_pane_ParamLimits

0x2245,	// (0x0003248e) cont_snote2_single_text_pane

0x2245,	// (0x0003248e) cont_snote2_single_graphic_pane_ParamLimits

0x2245,	// (0x0003248e) cont_snote2_single_graphic_pane

0x978b,	// (0x000399d4) cont_note_wait_pane_ParamLimits

0x978b,	// (0x000399d4) cont_note_wait_pane

0x978b,	// (0x000399d4) cont_note_image_pane_ParamLimits

0x978b,	// (0x000399d4) cont_note_image_pane

0xc436,	// (0x0003c67f) popup_note2_window_g1_ParamLimits

0xc436,	// (0x0003c67f) popup_note2_window_g1

0xc467,	// (0x0003c6b0) popup_note2_window_t1_ParamLimits

0xc467,	// (0x0003c6b0) popup_note2_window_t1

0xc4ac,	// (0x0003c6f5) popup_note2_window_t2_ParamLimits

0xc4ac,	// (0x0003c6f5) popup_note2_window_t2

0xc4f1,	// (0x0003c73a) popup_note2_window_t3_ParamLimits

0xc4f1,	// (0x0003c73a) popup_note2_window_t3

0xc536,	// (0x0003c77f) popup_note2_window_t4_ParamLimits

0xc536,	// (0x0003c77f) popup_note2_window_t4

0xf495,	// (0x0003f6de) popup_note2_window_t5_ParamLimits

0xf495,	// (0x0003f6de) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0003febc) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0003febc) popup_note2_window_t

0xc565,	// (0x0003c7ae) popup_note2_image_window_g1_ParamLimits

0xc565,	// (0x0003c7ae) popup_note2_image_window_g1

0xc571,	// (0x0003c7ba) popup_note2_image_window_g2_ParamLimits

0xc571,	// (0x0003c7ba) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0003fec7) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0003fec7) popup_note2_image_window_g

0xc583,	// (0x0003c7cc) popup_note2_image_window_t1_ParamLimits

0xc583,	// (0x0003c7cc) popup_note2_image_window_t1

0xc59b,	// (0x0003c7e4) popup_note2_image_window_t2_ParamLimits

0xc59b,	// (0x0003c7e4) popup_note2_image_window_t2

0xc5b3,	// (0x0003c7fc) popup_note2_image_window_t3_ParamLimits

0xc5b3,	// (0x0003c7fc) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0003fecc) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0003fecc) popup_note2_image_window_t

0x9799,	// (0x000399e2) popup_note2_wait_window_g1_ParamLimits

0x9799,	// (0x000399e2) popup_note2_wait_window_g1

0xc5cf,	// (0x0003c818) popup_note2_wait_window_g2_ParamLimits

0xc5cf,	// (0x0003c818) popup_note2_wait_window_g2

0x97b1,	// (0x000399fa) popup_note2_wait_window_g3_ParamLimits

0x97b1,	// (0x000399fa) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0003fed3) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0003fed3) popup_note2_wait_window_g

0xc5db,	// (0x0003c824) popup_note2_wait_window_t1_ParamLimits

0xc5db,	// (0x0003c824) popup_note2_wait_window_t1

0xc5f9,	// (0x0003c842) popup_note2_wait_window_t2_ParamLimits

0xc5f9,	// (0x0003c842) popup_note2_wait_window_t2

0xc617,	// (0x0003c860) popup_note2_wait_window_t3_ParamLimits

0xc617,	// (0x0003c860) popup_note2_wait_window_t3

0xc629,	// (0x0003c872) popup_note2_wait_window_t4_ParamLimits

0xc629,	// (0x0003c872) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0003feda) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0003feda) popup_note2_wait_window_t

0xc63b,	// (0x0003c884) wait_bar2_pane_ParamLimits

0xc63b,	// (0x0003c884) wait_bar2_pane

0xc653,	// (0x0003c89c) popup_snote2_single_text_window_g1_ParamLimits

0xc653,	// (0x0003c89c) popup_snote2_single_text_window_g1

0xc67b,	// (0x0003c8c4) popup_snote2_single_text_window_t1_ParamLimits

0xc67b,	// (0x0003c8c4) popup_snote2_single_text_window_t1

0xc6c7,	// (0x0003c910) popup_snote2_single_text_window_t2_ParamLimits

0xc6c7,	// (0x0003c910) popup_snote2_single_text_window_t2

0xc713,	// (0x0003c95c) popup_snote2_single_text_window_t3_ParamLimits

0xc713,	// (0x0003c95c) popup_snote2_single_text_window_t3

0xc754,	// (0x0003c99d) popup_snote2_single_text_window_t4_ParamLimits

0xc754,	// (0x0003c99d) popup_snote2_single_text_window_t4

0xc78a,	// (0x0003c9d3) popup_snote2_single_text_window_t5_ParamLimits

0xc78a,	// (0x0003c9d3) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0003fee3) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0003fee3) popup_snote2_single_text_window_t

0xc7b5,	// (0x0003c9fe) popup_snote2_single_graphic_window_g1_ParamLimits

0xc7b5,	// (0x0003c9fe) popup_snote2_single_graphic_window_g1

0xc7dd,	// (0x0003ca26) popup_snote2_single_graphic_window_g2_ParamLimits

0xc7dd,	// (0x0003ca26) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0003feee) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0003feee) popup_snote2_single_graphic_window_g

0xc805,	// (0x0003ca4e) popup_snote2_single_graphic_window_t1_ParamLimits

0xc805,	// (0x0003ca4e) popup_snote2_single_graphic_window_t1

0xc851,	// (0x0003ca9a) popup_snote2_single_graphic_window_t2_ParamLimits

0xc851,	// (0x0003ca9a) popup_snote2_single_graphic_window_t2

0xc713,	// (0x0003c95c) popup_snote2_single_graphic_window_t3_ParamLimits

0xc713,	// (0x0003c95c) popup_snote2_single_graphic_window_t3

0xc754,	// (0x0003c99d) popup_snote2_single_graphic_window_t4_ParamLimits

0xc754,	// (0x0003c99d) popup_snote2_single_graphic_window_t4

0xc78a,	// (0x0003c9d3) popup_snote2_single_graphic_window_t5_ParamLimits

0xc78a,	// (0x0003c9d3) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0003fef3) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0003fef3) popup_snote2_single_graphic_window_t

0xb2ad,	// (0x0003b4f6) clock_nsta_pane_cp2_t1

0xb2ad,	// (0x0003b4f6) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0003fd07) clock_nsta_pane_cp2_t

0x3ef7,	// (0x00034140) form_field_data_wide_pane_g1_ParamLimits

0x24e4,	// (0x0003272d) form_field_data_wide_pane_g2_ParamLimits

0x24e4,	// (0x0003272d) form_field_data_wide_pane_g2

0x24f0,	// (0x00032739) form_field_data_wide_pane_g3_ParamLimits

0x24f0,	// (0x00032739) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0003f8ca) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0003f8ca) form_field_data_wide_pane_g

0xb186,	// (0x0003b3cf) grid_touch_3_pane_ParamLimits

0xb186,	// (0x0003b3cf) grid_touch_3_pane

0xc89d,	// (0x0003cae6) cell_touch_3_pane_ParamLimits

0xc89d,	// (0x0003cae6) cell_touch_3_pane

0xb7c3,	// (0x0003ba0c) cell_touch_3_pane_g1

0xb7c3,	// (0x0003ba0c) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0003fd8c) cell_touch_3_pane_g

0xf4c7,	// (0x0003f710) cont_query_data_pane

0xf4cf,	// (0x0003f718) cont_query_data_pane_cp1

0xc8d0,	// (0x0003cb19) button_value_adjust_pane_cp7

0xc8d8,	// (0x0003cb21) query_popup_pane_cp3

0x646d,	// (0x000366b6) bg_popup_sub_pane_cp22_ParamLimits

0x6483,	// (0x000366cc) navi_navi_volume_pane_cp2

0x649e,	// (0x000366e7) popup_side_volume_key_window_g2

0x64ad,	// (0x000366f6) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0003f960) popup_side_volume_key_window_g

0x64ca,	// (0x00036713) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0003f967) popup_side_volume_key_window_t

0x6957,	// (0x00036ba0) popup_side_volume_key_window_ParamLimits

0x5b55,	// (0x00035d9e) list_double_graphic_pane_g4_ParamLimits

0x5b55,	// (0x00035d9e) list_double_graphic_pane_g4

0xa739,	// (0x0003a982) list_single_2heading_msg_pane_ParamLimits

0xa739,	// (0x0003a982) list_single_2heading_msg_pane

0x7c0b,	// (0x00037e54) list_single_2heading_msg_pane_g1_ParamLimits

0x7c0b,	// (0x00037e54) list_single_2heading_msg_pane_g1

0x43a9,	// (0x000345f2) list_single_2heading_msg_pane_g2_ParamLimits

0x43a9,	// (0x000345f2) list_single_2heading_msg_pane_g2

0x7c17,	// (0x00037e60) list_single_2heading_msg_pane_g3_ParamLimits

0x7c17,	// (0x00037e60) list_single_2heading_msg_pane_g3

0x7c23,	// (0x00037e6c) list_single_2heading_msg_pane_g4_ParamLimits

0x7c23,	// (0x00037e6c) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0003fefe) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0003fefe) list_single_2heading_msg_pane_g

0x7c3b,	// (0x00037e84) list_single_2heading_msg_pane_t1_ParamLimits

0x7c3b,	// (0x00037e84) list_single_2heading_msg_pane_t1

0x7c63,	// (0x00037eac) list_single_2heading_msg_pane_t2_ParamLimits

0x7c63,	// (0x00037eac) list_single_2heading_msg_pane_t2

0x7c97,	// (0x00037ee0) list_single_2heading_msg_pane_t3_ParamLimits

0x7c97,	// (0x00037ee0) list_single_2heading_msg_pane_t3

0x4691,	// (0x000348da) list_single_2heading_msg_pane_t4_ParamLimits

0x4691,	// (0x000348da) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0003ff07) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0003ff07) list_single_2heading_msg_pane_t

0xf28c,	// (0x0003f4d5) title_pane_g4_ParamLimits

0xf28c,	// (0x0003f4d5) title_pane_g4

0x6090,	// (0x000362d9) title_pane_stacon_g3_ParamLimits

0x6090,	// (0x000362d9) title_pane_stacon_g3

0xc3f9,	// (0x0003c642) list_single_2graphic_im_pane_g4_ParamLimits

0xc3f9,	// (0x0003c642) list_single_2graphic_im_pane_g4

0xa201,	// (0x0003a44a) popup_side_volume_key_window_cp

0xaa57,	// (0x0003aca0) main_idle_act2_pane_t1

0x725e,	// (0x000374a7) toolbar_button_pane_g10

0x59a8,	// (0x00035bf1) popup_toolbar_window_cp1

0xb29e,	// (0x0003b4e7) clock_nsta_pane_cp_t1

0xb29e,	// (0x0003b4e7) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0003fd02) clock_nsta_pane_cp_t

0x6483,	// (0x000366cc) navi_navi_volume_pane_cp2_ParamLimits

0x6492,	// (0x000366db) popup_side_volume_key_window_g1_ParamLimits

0x649e,	// (0x000366e7) popup_side_volume_key_window_g2_ParamLimits

0x64ad,	// (0x000366f6) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0003f960) popup_side_volume_key_window_g_ParamLimits

0x77bb,	// (0x00037a04) fep_hwr_aid_pane

0x7864,	// (0x00037aad) bg_fep_hwr_top_pane_g4_ParamLimits

0xb824,	// (0x0003ba6d) fep_hwr_top_pane_g1_ParamLimits

0xb836,	// (0x0003ba7f) fep_hwr_top_pane_g2_ParamLimits

0x7884,	// (0x00037acd) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0003fd57) fep_hwr_top_pane_g_ParamLimits

0x7899,	// (0x00037ae2) fep_hwr_top_text_pane_ParamLimits

0x9fb6,	// (0x0003a1ff) aid_touch_tab_arrow_arrow_2

0x9fbf,	// (0x0003a208) aid_touch_tab_arrow_left_2

0x77cf,	// (0x00037a18) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7806,	// (0x00037a4f) fep_hwr_prediction_pane

0xb98c,	// (0x0003bbd5) fep_vkb_prediction_pane

0xba92,	// (0x0003bcdb) fep_vkb_side_pane_g3_ParamLimits

0xba92,	// (0x0003bcdb) fep_vkb_side_pane_g3

0x7a28,	// (0x00037c71) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7a99,	// (0x00037ce2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7aa6,	// (0x00037cef) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0003fe06) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7cd0,	// (0x00037f19) fep_hwr_prediction_pane_g1

0x7cda,	// (0x00037f23) fep_hwr_prediction_pane_g2

0x7ce2,	// (0x00037f2b) fep_hwr_prediction_pane_g3

0x7cea,	// (0x00037f33) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0003ff10) fep_hwr_prediction_pane_g

0xc8ff,	// (0x0003cb48) fep_vkb_prediction_pane_g1

0xc909,	// (0x0003cb52) fep_vkb_prediction_pane_g2

0xc911,	// (0x0003cb5a) fep_vkb_prediction_pane_g3

0xc919,	// (0x0003cb62) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0003ff19) fep_vkb_prediction_pane_g

0x75b2,	// (0x000377fb) slider_set_pane_g3

0x75c6,	// (0x0003780f) slider_set_pane_g4

0x75de,	// (0x00037827) slider_set_pane_g5

0x75b2,	// (0x000377fb) slider_set_pane_g6

0x75f4,	// (0x0003783d) slider_set_pane_g7

0xa6a3,	// (0x0003a8ec) slider_form_pane_g3

0xa6ac,	// (0x0003a8f5) slider_form_pane_g4

0xa6b4,	// (0x0003a8fd) slider_form_pane_g5

0xa6a3,	// (0x0003a8ec) slider_form_pane_g6

0xa6bc,	// (0x0003a905) slider_form_pane_g7

0xad1a,	// (0x0003af63) slider_set_pane_vc_g3

0xad23,	// (0x0003af6c) slider_set_pane_vc_g4

0xad2c,	// (0x0003af75) slider_set_pane_vc_g5

0xad1a,	// (0x0003af63) slider_set_pane_vc_g6

0xad35,	// (0x0003af7e) slider_set_pane_vc_g7

0xaf47,	// (0x0003b190) slider_form_pane_vc_g1

0xaf50,	// (0x0003b199) slider_form_pane_vc_g2

0xaf59,	// (0x0003b1a2) slider_form_pane_vc_g3

0xaf47,	// (0x0003b190) slider_form_pane_vc_g4

0xaf62,	// (0x0003b1ab) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0003fcd4) slider_form_pane_vc_g

0x53c8,	// (0x00035611) main_idle_act3_pane

0xc921,	// (0x0003cb6a) ai3_links_pane

0xc92a,	// (0x0003cb73) popup_ai3_data_window_ParamLimits

0xc92a,	// (0x0003cb73) popup_ai3_data_window

0xf26e,	// (0x0003f4b7) grid_ai3_links_pane

0xc948,	// (0x0003cb91) cell_ai3_links_pane_ParamLimits

0xc948,	// (0x0003cb91) cell_ai3_links_pane

0xc962,	// (0x0003cbab) bg_popup_sub_pane_cp11

0xc96f,	// (0x0003cbb8) cell_ai3_links_pane_g1

0xf26e,	// (0x0003f4b7) bg_popup_sub_pane_cp12

0xc994,	// (0x0003cbdd) heading_ai3_data_pane

0xc99c,	// (0x0003cbe5) list_ai3_gene_pane

0xc9a8,	// (0x0003cbf1) popup_ai3_data_window_g1

0xc9b0,	// (0x0003cbf9) heading_ai3_data_pane_g1

0xc9b8,	// (0x0003cc01) heading_ai3_data_pane_t1

0xc9c6,	// (0x0003cc0f) list_double_ai3_gene_pane_ParamLimits

0xc9c6,	// (0x0003cc0f) list_double_ai3_gene_pane

0xc9d3,	// (0x0003cc1c) list_single_ai3_gene_pane_ParamLimits

0xc9d3,	// (0x0003cc1c) list_single_ai3_gene_pane

0xb788,	// (0x0003b9d1) list_highlight_pane_cp7_ParamLimits

0xb788,	// (0x0003b9d1) list_highlight_pane_cp7

0xc9e0,	// (0x0003cc29) list_single_a13_gene_pane_t1_ParamLimits

0xc9e0,	// (0x0003cc29) list_single_a13_gene_pane_t1

0xc9f7,	// (0x0003cc40) list_single_ai3_gene_pane_g1

0xca00,	// (0x0003cc49) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0003ff22) list_single_ai3_gene_pane_g

0xca08,	// (0x0003cc51) list_double_ai3_gene_pane_g1_ParamLimits

0xca08,	// (0x0003cc51) list_double_ai3_gene_pane_g1

0xca14,	// (0x0003cc5d) list_double_ai3_gene_pane_t1_ParamLimits

0xca14,	// (0x0003cc5d) list_double_ai3_gene_pane_t1

0xca30,	// (0x0003cc79) list_double_ai3_gene_pane_t2_ParamLimits

0xca30,	// (0x0003cc79) list_double_ai3_gene_pane_t2

0xca45,	// (0x0003cc8e) list_double_ai3_gene_pane_t3_ParamLimits

0xca45,	// (0x0003cc8e) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0003ff27) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0003ff27) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4687,	// (0x000348d0) aid_size_min_col_2

0xc8e9,	// (0x0003cb32) aid_size_min_msg_ParamLimits

0xc8e9,	// (0x0003cb32) aid_size_min_msg

0xbb9e,	// (0x0003bde7) fep_vkb_top_text_pane_g2_ParamLimits

0xbb9e,	// (0x0003bde7) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0003fd87) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0003fd87) fep_vkb_top_text_pane_g

0x53c8,	// (0x00035611) main_hc_apps_shell_pane

0xca62,	// (0x0003ccab) grid_hc_apps_pane_ParamLimits

0xca62,	// (0x0003ccab) grid_hc_apps_pane

0xca71,	// (0x0003ccba) list_hc_apps_pane

0xca79,	// (0x0003ccc2) scroll_pane_cp37_ParamLimits

0xca79,	// (0x0003ccc2) scroll_pane_cp37

0xca85,	// (0x0003ccce) cell_hc_apps_pane_ParamLimits

0xca85,	// (0x0003ccce) cell_hc_apps_pane

0xcb3d,	// (0x0003cd86) cell_hc_apps_pane_g1_ParamLimits

0xcb3d,	// (0x0003cd86) cell_hc_apps_pane_g1

0xcb6e,	// (0x0003cdb7) cell_hc_apps_pane_g2_ParamLimits

0xcb6e,	// (0x0003cdb7) cell_hc_apps_pane_g2

0xcb8a,	// (0x0003cdd3) cell_hc_apps_pane_g3_ParamLimits

0xcb8a,	// (0x0003cdd3) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0003ff2e) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0003ff2e) cell_hc_apps_pane_g

0xcbac,	// (0x0003cdf5) cell_hc_apps_pane_t1_ParamLimits

0xcbac,	// (0x0003cdf5) cell_hc_apps_pane_t1

0xf411,	// (0x0003f65a) grid_highlight_pane_cp10_ParamLimits

0xf411,	// (0x0003f65a) grid_highlight_pane_cp10

0xcbec,	// (0x0003ce35) list_single_hc_apps_pane_ParamLimits

0xcbec,	// (0x0003ce35) list_single_hc_apps_pane

0xcc2b,	// (0x0003ce74) list_single_hc_apps_pane_g1

0x7cf2,	// (0x00037f3b) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0003ff35) list_single_hc_apps_pane_g

0x7d0b,	// (0x00037f54) list_single_hc_apps_pane_g2_copy1

0x7d27,	// (0x00037f70) list_single_hc_apps_pane_t1

0xf2d0,	// (0x0003f519) bg_set_opt_pane_cp_ParamLimits

0x56f9,	// (0x00035942) setting_slider_pane_t1_ParamLimits

0x5712,	// (0x0003595b) setting_slider_pane_t2_ParamLimits

0x572c,	// (0x00035975) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003f7ad) setting_slider_pane_t_ParamLimits

0x5744,	// (0x0003598d) slider_set_pane_ParamLimits

0x6af5,	// (0x00036d3e) control_pane_g5_ParamLimits

0x6af5,	// (0x00036d3e) control_pane_g5

0xa4d0,	// (0x0003a719) slider_set_pane_g1_ParamLimits

0x75a6,	// (0x000377ef) slider_set_pane_g2_ParamLimits

0x75b2,	// (0x000377fb) slider_set_pane_g3_ParamLimits

0x75c6,	// (0x0003780f) slider_set_pane_g4_ParamLimits

0x75de,	// (0x00037827) slider_set_pane_g5_ParamLimits

0x75b2,	// (0x000377fb) slider_set_pane_g6_ParamLimits

0x75f4,	// (0x0003783d) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0003fbb3) slider_set_pane_g_ParamLimits

0x86b7,	// (0x00038900) navi_icon_text_pane_ParamLimits

0x8bbf,	// (0x00038e08) aid_fill_nsta_2_ParamLimits

0x8c00,	// (0x00038e49) aid_touch_tab_arrow_left_ParamLimits

0x8c0f,	// (0x00038e58) aid_touch_tab_arrow_right_ParamLimits

0x8c7c,	// (0x00038ec5) clock_nsta_pane_ParamLimits

0x9f92,	// (0x0003a1db) navi_icon_pane_g1_ParamLimits

0x9fa1,	// (0x0003a1ea) navi_text_pane_t1_ParamLimits

0xb3bb,	// (0x0003b604) navi_icon_text_pane_g1_ParamLimits

0xb3ca,	// (0x0003b613) navi_icon_text_pane_t1_ParamLimits

0xcc2b,	// (0x0003ce74) list_single_hc_apps_pane_g1_ParamLimits

0x7cf2,	// (0x00037f3b) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0003ff35) list_single_hc_apps_pane_g_ParamLimits

0x7d0b,	// (0x00037f54) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7d27,	// (0x00037f70) list_single_hc_apps_pane_t1_ParamLimits

0x553d,	// (0x00035786) popup_toolbar2_fixed_window_ParamLimits

0x553d,	// (0x00035786) popup_toolbar2_fixed_window

0x7150,	// (0x00037399) popup_toolbar2_float_window

0xf26e,	// (0x0003f4b7) bg_popup_sub_pane_cp27

0xcc44,	// (0x0003ce8d) grid_toolbar2_float_pane

0xf26e,	// (0x0003f4b7) bg_popup_sub_pane_cp26

0xcc44,	// (0x0003ce8d) grid_toolbar2_fixed_pane

0xcc4c,	// (0x0003ce95) cell_toolbar2_fixed_pane_ParamLimits

0xcc4c,	// (0x0003ce95) cell_toolbar2_fixed_pane

0xcc5c,	// (0x0003cea5) cell_toolbar2_fixed_pane_g1

0xcc65,	// (0x0003ceae) toolbar2_fixed_button_pane

0x90b3,	// (0x000392fc) toolbar2_fixed_button_pane_g1

0x90c3,	// (0x0003930c) toolbar2_fixed_button_pane_g2

0x90bb,	// (0x00039304) toolbar2_fixed_button_pane_g3

0x90d3,	// (0x0003931c) toolbar2_fixed_button_pane_g4

0x90cb,	// (0x00039314) toolbar2_fixed_button_pane_g5

0x90db,	// (0x00039324) toolbar2_fixed_button_pane_g6

0x90e3,	// (0x0003932c) toolbar2_fixed_button_pane_g7

0x90f3,	// (0x0003933c) toolbar2_fixed_button_pane_g8

0x90eb,	// (0x00039334) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0003fab5) toolbar2_fixed_button_pane_g

0xcc6d,	// (0x0003ceb6) cell_toolbar2_float_pane_ParamLimits

0xcc6d,	// (0x0003ceb6) cell_toolbar2_float_pane

0xcc7e,	// (0x0003cec7) cell_toolbar2_float_pane_g1

0xcc65,	// (0x0003ceae) toolbar2_fixed_button_pane_cp

0xb8fa,	// (0x0003bb43) fep_vkb_accented_list_pane_ParamLimits

0xb8fa,	// (0x0003bb43) fep_vkb_accented_list_pane

0x7a08,	// (0x00037c51) bg_popup_fep_shadow_pane_g9

0x883b,	// (0x00038a84) bg_popup_fep_shadow_pane_cp3

0x25e9,	// (0x00032832) list_accented_list_pane

0xcc87,	// (0x0003ced0) list_single_accented_list_pane_ParamLimits

0xcc87,	// (0x0003ced0) list_single_accented_list_pane

0x883b,	// (0x00038a84) list_highlight_pane_cp10

0xcc98,	// (0x0003cee1) list_single_accented_list_pane_t1

0x7096,	// (0x000372df) popup_slider_window_ParamLimits

0x7096,	// (0x000372df) popup_slider_window

0xc8e0,	// (0x0003cb29) aid_indentation_list_msg

0xcd64,	// (0x0003cfad) bg_popup_window_pane_cp19

0xcdd2,	// (0x0003d01b) popup_slider_window_g1

0xcdee,	// (0x0003d037) popup_slider_window_g2

0xce0a,	// (0x0003d053) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0003ff3a) popup_slider_window_g

0xce66,	// (0x0003d0af) popup_slider_window_t1

0xceda,	// (0x0003d123) small_volume_slider_vertical_pane

0xb7c3,	// (0x0003ba0c) small_volume_slider_vertical_pane_g1

0xb7c3,	// (0x0003ba0c) small_volume_slider_vertical_pane_g2

0xcef6,	// (0x0003d13f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0003ff4c) small_volume_slider_vertical_pane_g

0x52eb,	// (0x00035534) area_side_right_pane_ParamLimits

0x52eb,	// (0x00035534) area_side_right_pane

0x7d55,	// (0x00037f9e) aid_size_side_button_ParamLimits

0x7d55,	// (0x00037f9e) aid_size_side_button

0x7d69,	// (0x00037fb2) grid_sctrl_middle_pane_ParamLimits

0x7d69,	// (0x00037fb2) grid_sctrl_middle_pane

0x7d89,	// (0x00037fd2) sctrl_sk_bottom_pane

0x7d9a,	// (0x00037fe3) sctrl_sk_top_pane

0x7dac,	// (0x00037ff5) aid_touch_sctrl_top

0x7db9,	// (0x00038002) bg_sctrl_sk_pane_ParamLimits

0x7db9,	// (0x00038002) bg_sctrl_sk_pane

0x7dc7,	// (0x00038010) sctrl_sk_top_pane_g1

0x7dd4,	// (0x0003801d) sctrl_sk_top_pane_t1

0x7dac,	// (0x00037ff5) aid_touch_sctrl_bottom

0x7db9,	// (0x00038002) bg_sctrl_sk_pane_cp_ParamLimits

0x7db9,	// (0x00038002) bg_sctrl_sk_pane_cp

0x7def,	// (0x00038038) sctrl_sk_bottom_pane_g1

0x7dd4,	// (0x0003801d) sctrl_sk_bottom_pane_t1

0x7df8,	// (0x00038041) cell_sctrl_middle_pane_ParamLimits

0x7df8,	// (0x00038041) cell_sctrl_middle_pane

0x7e15,	// (0x0003805e) aid_touch_sctrl_middle_ParamLimits

0x7e15,	// (0x0003805e) aid_touch_sctrl_middle

0x7e27,	// (0x00038070) bg_sctrl_middle_pane_ParamLimits

0x7e27,	// (0x00038070) bg_sctrl_middle_pane

0x7a28,	// (0x00037c71) cell_sctrl_middle_pane_g1_ParamLimits

0x7a28,	// (0x00037c71) cell_sctrl_middle_pane_g1

0x7e35,	// (0x0003807e) cell_sctrl_middle_pane_g2_ParamLimits

0x7e35,	// (0x0003807e) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0003ff58) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0003ff58) cell_sctrl_middle_pane_g

0x90b3,	// (0x000392fc) bg_sctrl_middle_pane_g1

0x90bb,	// (0x00039304) bg_sctrl_middle_pane_g2

0x90c3,	// (0x0003930c) bg_sctrl_middle_pane_g3

0x90cb,	// (0x00039314) bg_sctrl_middle_pane_g4

0x90d3,	// (0x0003931c) bg_sctrl_middle_pane_g5

0x90db,	// (0x00039324) bg_sctrl_middle_pane_g6

0x90e3,	// (0x0003932c) bg_sctrl_middle_pane_g7

0x90eb,	// (0x00039334) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0003ff5d) bg_sctrl_middle_pane_g

0x90f3,	// (0x0003933c) bg_sctrl_middle_pane_g8_copy1

0x90b3,	// (0x000392fc) bg_sctrl_sk_pane_g1

0x90c3,	// (0x0003930c) bg_sctrl_sk_pane_g2

0x90bb,	// (0x00039304) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0003fab5) bg_sctrl_sk_pane_g

0x2403,	// (0x0003264c) aid_size_touch_scroll_bar

0x90d3,	// (0x0003931c) bg_sctrl_sk_pane_g4

0x90cb,	// (0x00039314) bg_sctrl_sk_pane_g5

0x90db,	// (0x00039324) bg_sctrl_sk_pane_g6

0x90e3,	// (0x0003932c) bg_sctrl_sk_pane_g7

0x90f3,	// (0x0003933c) bg_sctrl_sk_pane_g8

0x90eb,	// (0x00039334) bg_sctrl_sk_pane_g9

0x6cad,	// (0x00036ef6) popup_fep_china_hwr2_fs_candidate_window

0x6cb7,	// (0x00036f00) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6cb7,	// (0x00036f00) popup_fep_china_hwr2_fs_control_window

0x7a28,	// (0x00037c71) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0003ff53) sctrl_sk_top_pane_g

0xceff,	// (0x0003d148) aid_fep_china_hwr2_fs_cell_ParamLimits

0xceff,	// (0x0003d148) aid_fep_china_hwr2_fs_cell

0xcf12,	// (0x0003d15b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf12,	// (0x0003d15b) bg_popup_fep_shadow_pane_cp4

0xcf2b,	// (0x0003d174) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf2b,	// (0x0003d174) bg_popup_fep_shadow_pane_cp5

0xcf3d,	// (0x0003d186) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf3d,	// (0x0003d186) popup_fep_china_hwr2_fs_control_bar_grid

0xcf4d,	// (0x0003d196) popup_fep_china_hwr2_fs_control_funtion_grid

0xcf55,	// (0x0003d19e) aid_fep_china_hwr2_fs_candi_cell

0xf26e,	// (0x0003f4b7) bg_popup_fep_shadow_pane_cp6

0xcf5f,	// (0x0003d1a8) popup_fep_china_hwr2_fs_candidate_grid

0xcf69,	// (0x0003d1b2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf69,	// (0x0003d1b2) cell_fep_china_hwr2_fs_funtion_grid

0xb7c3,	// (0x0003ba0c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcf81,	// (0x0003d1ca) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcf81,	// (0x0003d1ca) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcf8f,	// (0x0003d1d8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcf8f,	// (0x0003d1d8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0003ff6e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0003ff6e) cell_fep_china_hwr2_fs_funtion_grid_g

0xcfa5,	// (0x0003d1ee) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcfa5,	// (0x0003d1ee) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcfba,	// (0x0003d203) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcfba,	// (0x0003d203) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0003ff73) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0003ff73) cell_fep_china_hwr2_fs_funtion_grid_t

0xcfd6,	// (0x0003d21f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcfde,	// (0x0003d227) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcfe6,	// (0x0003d22f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0003ff78) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcfee,	// (0x0003d237) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcfee,	// (0x0003d237) cell_fep_china_hwr2_fs_candidate_grid

0xd00d,	// (0x0003d256) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd015,	// (0x0003d25e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb7c3,	// (0x0003ba0c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb7c3,	// (0x0003ba0c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0003fd8c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd01d,	// (0x0003d266) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8c8f,	// (0x00038ed8) clock_nsta_pane_cp_24_ParamLimits

0x8c8f,	// (0x00038ed8) clock_nsta_pane_cp_24

0x8d0f,	// (0x00038f58) indicator_nsta_pane_cp_24_ParamLimits

0x8d0f,	// (0x00038f58) indicator_nsta_pane_cp_24

0x9e0e,	// (0x0003a057) heading_pane_g1

0x0001,

0xf8d1,	// (0x0003fb1a) heading_pane_g

0xa89e,	// (0x0003aae7) grid_sct_catagory_button_pane

0xa8d0,	// (0x0003ab19) scroll_pane_cp5_ParamLimits

0xb40f,	// (0x0003b658) button_value_adjust_pane_cp5_ParamLimits

0xb40f,	// (0x0003b658) button_value_adjust_pane_cp5

0xb4f4,	// (0x0003b73d) form2_midp_time_pane_ParamLimits

0xd02b,	// (0x0003d274) cell_sct_catagory_button_pane_ParamLimits

0xd02b,	// (0x0003d274) cell_sct_catagory_button_pane

0xb788,	// (0x0003b9d1) bg_button_pane_cp01_ParamLimits

0xb788,	// (0x0003b9d1) bg_button_pane_cp01

0xb7c3,	// (0x0003ba0c) cell_sct_catagory_button_pane_g1

0x70d7,	// (0x00037320) popup_tb_extension_window

0xd03d,	// (0x0003d286) aid_size_cell_ext_ParamLimits

0xd03d,	// (0x0003d286) aid_size_cell_ext

0xf411,	// (0x0003f65a) bg_tb_trans_pane_cp1_ParamLimits

0xf411,	// (0x0003f65a) bg_tb_trans_pane_cp1

0xd05d,	// (0x0003d2a6) grid_tb_ext_pane_ParamLimits

0xd05d,	// (0x0003d2a6) grid_tb_ext_pane

0xd08d,	// (0x0003d2d6) cell_tb_ext_pane_ParamLimits

0xd08d,	// (0x0003d2d6) cell_tb_ext_pane

0xd0a4,	// (0x0003d2ed) cell_tb_ext_pane_g1_ParamLimits

0xd0a4,	// (0x0003d2ed) cell_tb_ext_pane_g1

0xd0c1,	// (0x0003d30a) cell_tb_ext_pane_t1

0xf411,	// (0x0003f65a) list_highlight_pane_cp11_ParamLimits

0xf411,	// (0x0003f65a) list_highlight_pane_cp11

0x555c,	// (0x000357a5) popup_uni_indicator_window_ParamLimits

0x555c,	// (0x000357a5) popup_uni_indicator_window

0x24ca,	// (0x00032713) bg_popup_sub_pane_cp14

0xd0dc,	// (0x0003d325) list_uniindi_pane

0xd0e8,	// (0x0003d331) uniindi_top_pane

0xf411,	// (0x0003f65a) bg_uniindi_top_pane

0xd109,	// (0x0003d352) uniindi_top_pane_g1

0xd11f,	// (0x0003d368) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0003ff7f) uniindi_top_pane_g

0xd149,	// (0x0003d392) uniindi_top_pane_t1

0xd175,	// (0x0003d3be) list_single_uniindi_pane_ParamLimits

0xd175,	// (0x0003d3be) list_single_uniindi_pane

0xb7c3,	// (0x0003ba0c) bg_uniindi_top_pane_g1

0xd187,	// (0x0003d3d0) list_single_uniindi_pane_g1

0xd19a,	// (0x0003d3e3) list_single_uniindi_pane_t1

0x53c8,	// (0x00035611) control_bg_pane

0xd1bf,	// (0x0003d408) bg_sctrl_sk_pane_cp1

0xd1c8,	// (0x0003d411) bg_sctrl_sk_pane_cp2

0xd1d1,	// (0x0003d41a) control_bg_pane_g1

0xd1da,	// (0x0003d423) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0003ff88) control_bg_pane_g

0xb230,	// (0x0003b479) cell_indicator_nsta_pane_g1_ParamLimits

0xb23e,	// (0x0003b487) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0003fcf0) cell_indicator_nsta_pane_g_ParamLimits

0x42b5,	// (0x000344fe) form2_midp_time_pane_t1_ParamLimits

0x6c0b,	// (0x00036e54) main_idle_act4_pane_ParamLimits

0x6c0b,	// (0x00036e54) main_idle_act4_pane

0x70d7,	// (0x00037320) popup_tb_extension_window_ParamLimits

0xd07f,	// (0x0003d2c8) tb_ext_find_pane_ParamLimits

0xd07f,	// (0x0003d2c8) tb_ext_find_pane

0xd1e3,	// (0x0003d42c) ai_gene_pane_1_cp1

0x8978,	// (0x00038bc1) ai_gene_pane_2_cp1

0xd1eb,	// (0x0003d434) list_single_idle_plugin_calendar_pane

0xd1f4,	// (0x0003d43d) list_single_idle_plugin_notification_pane

0xd1fd,	// (0x0003d446) list_single_idle_plugin_player_pane

0xd206,	// (0x0003d44f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd206,	// (0x0003d44f) list_single_idle_plugin_shortcut_pane

0xd228,	// (0x0003d471) main_idle_act4_pane_t1

0xd23a,	// (0x0003d483) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0003ff8d) main_idle_act4_pane_t

0xd24c,	// (0x0003d495) middle_sk_idle_act4_pane_ParamLimits

0xd24c,	// (0x0003d495) middle_sk_idle_act4_pane

0xd262,	// (0x0003d4ab) popup_clock_digital_analogue_window_cp2

0xd27c,	// (0x0003d4c5) shortcut_wheel_idle_act4_pane_ParamLimits

0xd27c,	// (0x0003d4c5) shortcut_wheel_idle_act4_pane

0xb7c3,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g1

0xb7c3,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g2

0xb7c3,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g3

0xb7c3,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g4

0xb7c3,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g5

0xd290,	// (0x0003d4d9) shortcut_wheel_idle_act4_pane_g6

0xd298,	// (0x0003d4e1) shortcut_wheel_idle_act4_pane_g7

0xd2a0,	// (0x0003d4e9) shortcut_wheel_idle_act4_pane_g8

0xd2a8,	// (0x0003d4f1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0003ff92) shortcut_wheel_idle_act4_pane_g

0xba3e,	// (0x0003bc87) middle_sk_idle_act4_pane_g1_ParamLimits

0xba3e,	// (0x0003bc87) middle_sk_idle_act4_pane_g1

0xd30c,	// (0x0003d555) middle_sk_idle_act4_pane_g2_ParamLimits

0xd30c,	// (0x0003d555) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0003ffb5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0003ffb5) middle_sk_idle_act4_pane_g

0xd318,	// (0x0003d561) middle_sk_idle_act4_pane_t1_ParamLimits

0xd318,	// (0x0003d561) middle_sk_idle_act4_pane_t1

0xd335,	// (0x0003d57e) grid_ai_shortcut_pane_ParamLimits

0xd335,	// (0x0003d57e) grid_ai_shortcut_pane

0xd34e,	// (0x0003d597) list_highlight_pane_cp16_ParamLimits

0xd34e,	// (0x0003d597) list_highlight_pane_cp16

0xd35b,	// (0x0003d5a4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd35b,	// (0x0003d5a4) list_single_idle_plugin_shortcut_pane_g1

0xd367,	// (0x0003d5b0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd367,	// (0x0003d5b0) list_single_idle_plugin_shortcut_pane_g2

0xd381,	// (0x0003d5ca) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd381,	// (0x0003d5ca) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0003ffba) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0003ffba) list_single_idle_plugin_shortcut_pane_g

0xd394,	// (0x0003d5dd) cell_ai_shortcut_pane_ParamLimits

0xd394,	// (0x0003d5dd) cell_ai_shortcut_pane

0xd3b7,	// (0x0003d600) cell_ai_shortcut_pane_g1_ParamLimits

0xd3b7,	// (0x0003d600) cell_ai_shortcut_pane_g1

0xd1e3,	// (0x0003d42c) ai_gene_pane_1_cp2

0xd3d9,	// (0x0003d622) ai_gene_pane_2_cp2

0xd3e1,	// (0x0003d62a) list_highlight_pane_cp15

0xd3ea,	// (0x0003d633) list_single_idle_plugin_calendar_pane_g1

0xd3e1,	// (0x0003d62a) list_highlight_pane_cp17

0xd3f2,	// (0x0003d63b) list_single_idle_plugin_calendar_pane_g1_copy1

0xd3fa,	// (0x0003d643) list_single_idle_plugin_player_pane_g1

0xab05,	// (0x0003ad4e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0003ffc1) list_single_idle_plugin_player_pane_g

0xd402,	// (0x0003d64b) list_single_idle_plugin_player_pane_t1

0xd410,	// (0x0003d659) list_single_idle_plugin_player_pane_t2

0xd41e,	// (0x0003d667) list_single_idle_plugin_player_pane_t3

0xd42c,	// (0x0003d675) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0003ffc6) list_single_idle_plugin_player_pane_t

0xd43a,	// (0x0003d683) wait_bar_pane_cp15

0xd442,	// (0x0003d68b) grid_ai_notification_pane

0xab05,	// (0x0003ad4e) list_single_idle_plugin_notification_pane_g1

0xd44b,	// (0x0003d694) cell_ai_notification_pane_ParamLimits

0xd44b,	// (0x0003d694) cell_ai_notification_pane

0xd458,	// (0x0003d6a1) cell_ai_notification_pane_g1

0xd460,	// (0x0003d6a9) cell_ai_notification_pane_t1

0xd46e,	// (0x0003d6b7) tb_ext_find_button_pane

0xd476,	// (0x0003d6bf) tb_ext_find_pane_g1

0xd47e,	// (0x0003d6c7) tb_ext_find_pane_t1

0x62fe,	// (0x00036547) tb_ext_find_button_pane_g1

0xd48c,	// (0x0003d6d5) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0003ffcf) tb_ext_find_button_pane_g

0xd228,	// (0x0003d471) main_idle_act4_pane_t1_ParamLimits

0xd23a,	// (0x0003d483) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0003ff8d) main_idle_act4_pane_t_ParamLimits

0xd262,	// (0x0003d4ab) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd270,	// (0x0003d4b9) sat_plugin_idle_act4_pane_ParamLimits

0xd270,	// (0x0003d4b9) sat_plugin_idle_act4_pane

0xd495,	// (0x0003d6de) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd495,	// (0x0003d6de) sat_plugin_idle_act4_pane_t1

0xd4a8,	// (0x0003d6f1) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4a8,	// (0x0003d6f1) sat_plugin_idle_act4_pane_t2

0xd4bb,	// (0x0003d704) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4bb,	// (0x0003d704) sat_plugin_idle_act4_pane_t3

0xd4ce,	// (0x0003d717) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4ce,	// (0x0003d717) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0003ffd4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0003ffd4) sat_plugin_idle_act4_pane_t

0x548d,	// (0x000356d6) popup_battery_window_ParamLimits

0x548d,	// (0x000356d6) popup_battery_window

0xf411,	// (0x0003f65a) bg_popup_sub_pane_cp25_ParamLimits

0xf411,	// (0x0003f65a) bg_popup_sub_pane_cp25

0xd4e1,	// (0x0003d72a) popup_battery_window_g1_ParamLimits

0xd4e1,	// (0x0003d72a) popup_battery_window_g1

0xd4ed,	// (0x0003d736) popup_battery_window_t1_ParamLimits

0xd4ed,	// (0x0003d736) popup_battery_window_t1

0xd4ff,	// (0x0003d748) popup_battery_window_t2_ParamLimits

0xd4ff,	// (0x0003d748) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0003ffdd) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0003ffdd) popup_battery_window_t

0x8843,	// (0x00038a8c) midp_canvas_pane_ParamLimits

0x88ba,	// (0x00038b03) midp_keypad_pane_ParamLimits

0x88ba,	// (0x00038b03) midp_keypad_pane

0x8b87,	// (0x00038dd0) main_midp_pane_ParamLimits

0xb2bc,	// (0x0003b505) signal_pane_g2_cp_ParamLimits

0xd51c,	// (0x0003d765) aid_size_cell_midp_keypad_ParamLimits

0xd51c,	// (0x0003d765) aid_size_cell_midp_keypad

0xd536,	// (0x0003d77f) midp_keyp_game_grid_pane_ParamLimits

0xd536,	// (0x0003d77f) midp_keyp_game_grid_pane

0xd556,	// (0x0003d79f) midp_keyp_rocker_pane_ParamLimits

0xd556,	// (0x0003d79f) midp_keyp_rocker_pane

0xd581,	// (0x0003d7ca) midp_keyp_sk_left_pane_ParamLimits

0xd581,	// (0x0003d7ca) midp_keyp_sk_left_pane

0xd5db,	// (0x0003d824) midp_keyp_sk_right_pane_ParamLimits

0xd5db,	// (0x0003d824) midp_keyp_sk_right_pane

0xf26e,	// (0x0003f4b7) bg_button_pane_cp03

0xd635,	// (0x0003d87e) midp_keyp_sk_left_pane_g1

0xf26e,	// (0x0003f4b7) bg_button_pane_cp04

0xd635,	// (0x0003d87e) midp_keyp_sk_right_pane_g1

0xb7c3,	// (0x0003ba0c) midp_keyp_rocker_pane_g1

0xd63e,	// (0x0003d887) keyp_game_cell_pane_ParamLimits

0xd63e,	// (0x0003d887) keyp_game_cell_pane

0xf26e,	// (0x0003f4b7) bg_button_pane_cp02

0xd651,	// (0x0003d89a) keyp_game_cell_pane_g1

0x54d7,	// (0x00035720) popup_fep_vkb2_window_ParamLimits

0x54d7,	// (0x00035720) popup_fep_vkb2_window

0x7e53,	// (0x0003809c) aid_size_cell_vkb2_ParamLimits

0x7e53,	// (0x0003809c) aid_size_cell_vkb2

0x7ea7,	// (0x000380f0) popup_fep_vkb2_window_g1_ParamLimits

0x7ea7,	// (0x000380f0) popup_fep_vkb2_window_g1

0x7eef,	// (0x00038138) vkb2_area_bottom_pane_ParamLimits

0x7eef,	// (0x00038138) vkb2_area_bottom_pane

0x7f43,	// (0x0003818c) vkb2_area_keypad_pane_ParamLimits

0x7f43,	// (0x0003818c) vkb2_area_keypad_pane

0x7f89,	// (0x000381d2) vkb2_area_top_pane_ParamLimits

0x7f89,	// (0x000381d2) vkb2_area_top_pane

0x8003,	// (0x0003824c) vkb2_top_entry_pane_ParamLimits

0x8003,	// (0x0003824c) vkb2_top_entry_pane

0x802d,	// (0x00038276) vkb2_top_grid_left_pane_ParamLimits

0x802d,	// (0x00038276) vkb2_top_grid_left_pane

0x804b,	// (0x00038294) vkb2_top_grid_right_pane_ParamLimits

0x804b,	// (0x00038294) vkb2_top_grid_right_pane

0x8069,	// (0x000382b2) vkb2_cell_keypad_pane_ParamLimits

0x8069,	// (0x000382b2) vkb2_cell_keypad_pane

0x813a,	// (0x00038383) vkb2_area_bottom_grid_pane_ParamLimits

0x813a,	// (0x00038383) vkb2_area_bottom_grid_pane

0x8160,	// (0x000383a9) vkb2_area_bottom_pane_g1_ParamLimits

0x8160,	// (0x000383a9) vkb2_area_bottom_pane_g1

0x8184,	// (0x000383cd) vkb2_area_bottom_pane_g2_ParamLimits

0x8184,	// (0x000383cd) vkb2_area_bottom_pane_g2

0x81b2,	// (0x000383fb) vkb2_area_bottom_pane_g3_ParamLimits

0x81b2,	// (0x000383fb) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0003ffe2) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0003ffe2) vkb2_area_bottom_pane_g

0x8213,	// (0x0003845c) vkb2_top_cell_left_pane_ParamLimits

0x8213,	// (0x0003845c) vkb2_top_cell_left_pane

0xd662,	// (0x0003d8ab) vkb2_top_entry_pane_g1_ParamLimits

0xd662,	// (0x0003d8ab) vkb2_top_entry_pane_g1

0xd670,	// (0x0003d8b9) vkb2_top_entry_pane_t1_ParamLimits

0xd670,	// (0x0003d8b9) vkb2_top_entry_pane_t1

0xd6a2,	// (0x0003d8eb) vkb2_top_entry_pane_t2_ParamLimits

0xd6a2,	// (0x0003d8eb) vkb2_top_entry_pane_t2

0xd6d4,	// (0x0003d91d) vkb2_top_entry_pane_t3_ParamLimits

0xd6d4,	// (0x0003d91d) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0003ffe9) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0003ffe9) vkb2_top_entry_pane_t

0x8260,	// (0x000384a9) vkb2_top_grid_right_pane_g1_ParamLimits

0x8260,	// (0x000384a9) vkb2_top_grid_right_pane_g1

0x8276,	// (0x000384bf) vkb2_top_grid_right_pane_g2_ParamLimits

0x8276,	// (0x000384bf) vkb2_top_grid_right_pane_g2

0x828e,	// (0x000384d7) vkb2_top_grid_right_pane_g3_ParamLimits

0x828e,	// (0x000384d7) vkb2_top_grid_right_pane_g3

0x82a6,	// (0x000384ef) vkb2_top_grid_right_pane_g4_ParamLimits

0x82a6,	// (0x000384ef) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0003fff0) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0003fff0) vkb2_top_grid_right_pane_g

0x82bc,	// (0x00038505) vkb2_top_cell_left_pane_g1

0x82d3,	// (0x0003851c) vkb2_cell_keypad_pane_g1_ParamLimits

0x82d3,	// (0x0003851c) vkb2_cell_keypad_pane_g1

0xd6f8,	// (0x0003d941) vkb2_cell_keypad_pane_t1_ParamLimits

0xd6f8,	// (0x0003d941) vkb2_cell_keypad_pane_t1

0x82e1,	// (0x0003852a) vkb2_cell_bottom_grid_pane_ParamLimits

0x82e1,	// (0x0003852a) vkb2_cell_bottom_grid_pane

0x831a,	// (0x00038563) vkb2_cell_bottom_grid_pane_g1

0xd2b0,	// (0x0003d4f9) aid_call2_pane_cp02

0xd2b8,	// (0x0003d501) aid_call_pane_cp02

0xd2c0,	// (0x0003d509) clock_digital_number_pane_cp10

0xd2c8,	// (0x0003d511) clock_digital_number_pane_cp11

0xd2d0,	// (0x0003d519) clock_digital_number_pane_cp12

0xd2d8,	// (0x0003d521) clock_digital_number_pane_cp13

0xd2e0,	// (0x0003d529) clock_digital_separator_pane_cp10

0x62fe,	// (0x00036547) popup_clock_digital_analogue_window_cp2_g1

0x62fe,	// (0x00036547) popup_clock_digital_analogue_window_cp2_g2

0xd2e8,	// (0x0003d531) popup_clock_digital_analogue_window_cp2_g3

0x62fe,	// (0x00036547) popup_clock_digital_analogue_window_cp2_g4

0xd2e8,	// (0x0003d531) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0003ffa5) popup_clock_digital_analogue_window_cp2_g

0xd2f0,	// (0x0003d539) popup_clock_digital_analogue_window_cp2_t1

0xd2fe,	// (0x0003d547) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0003ffb0) popup_clock_digital_analogue_window_cp2_t

0xb7c3,	// (0x0003ba0c) clock_digital_number_pane_cp10_g1

0xb7c3,	// (0x0003ba0c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0003fd8c) clock_digital_number_pane_cp10_g

0xb7c3,	// (0x0003ba0c) clock_digital_separator_pane_cp10_g1

0xb7c3,	// (0x0003ba0c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0003fd8c) clock_digital_separator_pane_cp10_g

0xd12b,	// (0x0003d374) uniindi_top_pane_g3

0xd13c,	// (0x0003d385) uniindi_top_pane_g4

0x80f4,	// (0x0003833d) vkb2_row_keypad_pane_ParamLimits

0x80f4,	// (0x0003833d) vkb2_row_keypad_pane

0x8336,	// (0x0003857f) vkb2_cell_t_keypad_pane_ParamLimits

0x8336,	// (0x0003857f) vkb2_cell_t_keypad_pane

0x8346,	// (0x0003858f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8346,	// (0x0003858f) vkb2_cell_t_keypad_pane_cp08

0x835b,	// (0x000385a4) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x835b,	// (0x000385a4) vkb2_cell_t_keypad_pane_cp09

0x836f,	// (0x000385b8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x836f,	// (0x000385b8) vkb2_cell_t_keypad_pane_cp01

0x8380,	// (0x000385c9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8380,	// (0x000385c9) vkb2_cell_t_keypad_pane_cp02

0x8391,	// (0x000385da) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8391,	// (0x000385da) vkb2_cell_t_keypad_pane_cp03

0x83a2,	// (0x000385eb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x83a2,	// (0x000385eb) vkb2_cell_t_keypad_pane_cp04

0x83b3,	// (0x000385fc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x83b3,	// (0x000385fc) vkb2_cell_t_keypad_pane_cp05

0x83c4,	// (0x0003860d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x83c4,	// (0x0003860d) vkb2_cell_t_keypad_pane_cp06

0x83d7,	// (0x00038620) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x83d7,	// (0x00038620) vkb2_cell_t_keypad_pane_cp07

0x83ec,	// (0x00038635) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x83ec,	// (0x00038635) vkb2_cell_t_keypad_pane_cp10

0x7a28,	// (0x00037c71) vkb2_cell_t_keypad_pane_g1

0xd70f,	// (0x0003d958) vkb2_cell_t_keypad_pane_t1

0x53c8,	// (0x00035611) popup_grid_graphic2_window

0xd721,	// (0x0003d96a) aid_size_cell_graphic2_ParamLimits

0xd721,	// (0x0003d96a) aid_size_cell_graphic2

0xd759,	// (0x0003d9a2) bg_popup_window_pane_cp21_ParamLimits

0xd759,	// (0x0003d9a2) bg_popup_window_pane_cp21

0xd767,	// (0x0003d9b0) graphic2_pages_pane_ParamLimits

0xd767,	// (0x0003d9b0) graphic2_pages_pane

0xd7ad,	// (0x0003d9f6) grid_graphic2_control_pane_ParamLimits

0xd7ad,	// (0x0003d9f6) grid_graphic2_control_pane

0xd7eb,	// (0x0003da34) grid_graphic2_pane_ParamLimits

0xd7eb,	// (0x0003da34) grid_graphic2_pane

0xd861,	// (0x0003daaa) cell_graphic2_pane

0x53c8,	// (0x00035611) main_comp_mode_pane

0xc99c,	// (0x0003cbe5) list_ai3_gene_pane_ParamLimits

0xcd64,	// (0x0003cfad) bg_popup_window_pane_cp19_ParamLimits

0xcd70,	// (0x0003cfb9) bg_touch_area_indi_pane_ParamLimits

0xcd70,	// (0x0003cfb9) bg_touch_area_indi_pane

0xcd86,	// (0x0003cfcf) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd86,	// (0x0003cfcf) bg_touch_area_indi_pane_cp01

0xcd9e,	// (0x0003cfe7) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd9e,	// (0x0003cfe7) bg_touch_area_indi_pane_cp02

0xcdb8,	// (0x0003d001) bg_touch_area_indi_pane_cp03_ParamLimits

0xcdb8,	// (0x0003d001) bg_touch_area_indi_pane_cp03

0xcdd2,	// (0x0003d01b) popup_slider_window_g1_ParamLimits

0xcdee,	// (0x0003d037) popup_slider_window_g2_ParamLimits

0xce0a,	// (0x0003d053) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0003ff3a) popup_slider_window_g_ParamLimits

0xce66,	// (0x0003d0af) popup_slider_window_t1_ParamLimits

0xceda,	// (0x0003d123) small_volume_slider_vertical_pane_ParamLimits

0xd861,	// (0x0003daaa) cell_graphic2_pane_ParamLimits

0xd916,	// (0x0003db5f) bg_button_pane_cp10_ParamLimits

0xd916,	// (0x0003db5f) bg_button_pane_cp10

0xd92b,	// (0x0003db74) bg_button_pane_cp11_ParamLimits

0xd92b,	// (0x0003db74) bg_button_pane_cp11

0xd940,	// (0x0003db89) graphic2_pages_pane_g1_ParamLimits

0xd940,	// (0x0003db89) graphic2_pages_pane_g1

0xd95b,	// (0x0003dba4) graphic2_pages_pane_g2_ParamLimits

0xd95b,	// (0x0003dba4) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0003fffe) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0003fffe) graphic2_pages_pane_g

0xd973,	// (0x0003dbbc) graphic2_pages_pane_t1_ParamLimits

0xd973,	// (0x0003dbbc) graphic2_pages_pane_t1

0xd989,	// (0x0003dbd2) cell_graphic2_control_pane_ParamLimits

0xd989,	// (0x0003dbd2) cell_graphic2_control_pane

0xd9ac,	// (0x0003dbf5) cell_graphic2_pane_g1_ParamLimits

0xd9ac,	// (0x0003dbf5) cell_graphic2_pane_g1

0xd9b9,	// (0x0003dc02) cell_graphic2_pane_g2_ParamLimits

0xd9b9,	// (0x0003dc02) cell_graphic2_pane_g2

0xd9c6,	// (0x0003dc0f) cell_graphic2_pane_g3_ParamLimits

0xd9c6,	// (0x0003dc0f) cell_graphic2_pane_g3

0xd9d3,	// (0x0003dc1c) cell_graphic2_pane_g4_ParamLimits

0xd9d3,	// (0x0003dc1c) cell_graphic2_pane_g4

0xd9e0,	// (0x0003dc29) cell_graphic2_pane_g5_ParamLimits

0xd9e0,	// (0x0003dc29) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x00040003) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x00040003) cell_graphic2_pane_g

0xd9fb,	// (0x0003dc44) cell_graphic2_pane_t1_ParamLimits

0xd9fb,	// (0x0003dc44) cell_graphic2_pane_t1

0x91af,	// (0x000393f8) grid_highlight_pane_cp11_ParamLimits

0x91af,	// (0x000393f8) grid_highlight_pane_cp11

0xf411,	// (0x0003f65a) bg_button_pane_cp05

0xda24,	// (0x0003dc6d) cell_graphic2_control_pane_g1

0xb7c3,	// (0x0003ba0c) bg_touch_area_indi_pane_g1

0xda4c,	// (0x0003dc95) aid_cmod_rocker_key_size

0xda56,	// (0x0003dc9f) aid_cmode_itu_key_size

0xda60,	// (0x0003dca9) main_cmode_video_pane

0xda6a,	// (0x0003dcb3) main_comp_mode_itu_pane

0xda76,	// (0x0003dcbf) main_comp_mode_rocker_pane

0xda82,	// (0x0003dccb) cell_cmode_rocker_pane_ParamLimits

0xda82,	// (0x0003dccb) cell_cmode_rocker_pane

0xda96,	// (0x0003dcdf) cell_cmode_itu_pane_ParamLimits

0xda96,	// (0x0003dcdf) cell_cmode_itu_pane

0x24ca,	// (0x00032713) bg_button_pane_cp06_ParamLimits

0x24ca,	// (0x00032713) bg_button_pane_cp06

0xba3e,	// (0x0003bc87) cell_cmode_rocker_pane_g1_ParamLimits

0xba3e,	// (0x0003bc87) cell_cmode_rocker_pane_g1

0xcf81,	// (0x0003d1ca) cell_cmode_rocker_pane_g2_ParamLimits

0xcf81,	// (0x0003d1ca) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00040013) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00040013) cell_cmode_rocker_pane_g

0xf26e,	// (0x0003f4b7) bg_button_pane_cp07

0xdaad,	// (0x0003dcf6) cell_cmode_itu_pane_g1

0xdab6,	// (0x0003dcff) cell_cmode_itu_pane_t1

0xdac4,	// (0x0003dd0d) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00040018) cell_cmode_itu_pane_t

0xd1af,	// (0x0003d3f8) aid_touch_ctrl_left

0xd1b7,	// (0x0003d400) aid_touch_ctrl_right

0xf26e,	// (0x0003f4b7) compa_mode_pane

0xdad2,	// (0x0003dd1b) aid_cmod_rocker_key_size_cp

0xdadc,	// (0x0003dd25) aid_cmode_itu_key_size_cp

0xdae6,	// (0x0003dd2f) compa_mode_pane_g1

0xdaee,	// (0x0003dd37) compa_mode_pane_g2

0xdaf6,	// (0x0003dd3f) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0004001d) compa_mode_pane_g

0xdafe,	// (0x0003dd47) main_comp_mode_itu_pane_cp

0xdb06,	// (0x0003dd4f) main_comp_mode_rocker_pane_cp

0xdb0e,	// (0x0003dd57) cell_cmode_itu_pane_cp_ParamLimits

0xdb0e,	// (0x0003dd57) cell_cmode_itu_pane_cp

0xdb23,	// (0x0003dd6c) cell_cmode_rocker_pane_cp_ParamLimits

0xdb23,	// (0x0003dd6c) cell_cmode_rocker_pane_cp

0x24ca,	// (0x00032713) bg_button_pane_cp06_cp_ParamLimits

0x24ca,	// (0x00032713) bg_button_pane_cp06_cp

0xba3e,	// (0x0003bc87) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xba3e,	// (0x0003bc87) cell_cmode_rocker_pane_g1_cp

0xb7c3,	// (0x0003ba0c) cell_cmode_rocker_pane_g2_cp

0xf26e,	// (0x0003f4b7) bg_button_pane_cp07_cp

0xdb35,	// (0x0003dd7e) cell_cmode_itu_pane_g1_cp

0xdb3e,	// (0x0003dd87) cell_cmode_itu_pane_t1_cp

0xdb3e,	// (0x0003dd87) cell_cmode_itu_pane_t2_cp

0xa692,	// (0x0003a8db) settings_code_pane_cp2

0xf2d0,	// (0x0003f519) bg_popup_window_pane_cp3_ParamLimits

0x21d6,	// (0x0003241f) heading_pane_cp3_ParamLimits

0x21e2,	// (0x0003242b) listscroll_popup_graphic_pane_ParamLimits

0x77bb,	// (0x00037a04) fep_hwr_aid_pane_ParamLimits

0x7dac,	// (0x00037ff5) aid_touch_sctrl_top_ParamLimits

0x7dc7,	// (0x00038010) sctrl_sk_top_pane_g1_ParamLimits

0x7a28,	// (0x00037c71) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0003ff53) sctrl_sk_top_pane_g_ParamLimits

0x7dd4,	// (0x0003801d) sctrl_sk_top_pane_t1_ParamLimits

0x7dac,	// (0x00037ff5) aid_touch_sctrl_bottom_ParamLimits

0x7dd4,	// (0x0003801d) sctrl_sk_bottom_pane_t1_ParamLimits

0xd0f5,	// (0x0003d33e) aid_area_touch_clock

0x7fcb,	// (0x00038214) aid_vkb2_area_top_pane_cell_ParamLimits

0x7fcb,	// (0x00038214) aid_vkb2_area_top_pane_cell

0x8116,	// (0x0003835f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8116,	// (0x0003835f) aid_vkb2_area_bottom_pane_cell

0xd65a,	// (0x0003d8a3) popup_char_count_window

0xdb4c,	// (0x0003dd95) popup_char_count_window_g1

0xdb55,	// (0x0003dd9e) popup_char_count_window_g2

0xdb5e,	// (0x0003dda7) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00040024) popup_char_count_window_g

0xdb67,	// (0x0003ddb0) popup_char_count_window_t1

0x7e85,	// (0x000380ce) popup_fep_char_preview_window_ParamLimits

0x7e85,	// (0x000380ce) popup_fep_char_preview_window

0x7fe9,	// (0x00038232) vkb2_top_candi_pane_ParamLimits

0x7fe9,	// (0x00038232) vkb2_top_candi_pane

0xdb75,	// (0x0003ddbe) cell_vkb2_top_candi_pane_ParamLimits

0xdb75,	// (0x0003ddbe) cell_vkb2_top_candi_pane

0x8401,	// (0x0003864a) bg_popup_fep_char_preview_window_ParamLimits

0x8401,	// (0x0003864a) bg_popup_fep_char_preview_window

0x840f,	// (0x00038658) popup_fep_char_preview_window_t1_ParamLimits

0x840f,	// (0x00038658) popup_fep_char_preview_window_t1

0xdbc6,	// (0x0003de0f) bg_popup_fep_char_preview_window_g1

0xdbce,	// (0x0003de17) bg_popup_fep_char_preview_window_g2

0xdbd6,	// (0x0003de1f) bg_popup_fep_char_preview_window_g3

0xdbde,	// (0x0003de27) bg_popup_fep_char_preview_window_g4

0xdbe6,	// (0x0003de2f) bg_popup_fep_char_preview_window_g5

0x8449,	// (0x00038692) bg_popup_fep_char_preview_window_g6

0xdbee,	// (0x0003de37) bg_popup_fep_char_preview_window_g7

0xdbf6,	// (0x0003de3f) bg_popup_fep_char_preview_window_g8

0xdbfe,	// (0x0003de47) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0004002b) bg_popup_fep_char_preview_window_g

0x7a28,	// (0x00037c71) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a28,	// (0x00037c71) cell_vkb2_top_candi_pane_g1

0x7a36,	// (0x00037c7f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7a36,	// (0x00037c7f) cell_vkb2_top_candi_pane_g2

0xd8f5,	// (0x0003db3e) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd8f5,	// (0x0003db3e) cell_vkb2_top_candi_pane_g3

0x8451,	// (0x0003869a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8451,	// (0x0003869a) cell_vkb2_top_candi_pane_g4

0xbf3d,	// (0x0003c186) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbf3d,	// (0x0003c186) cell_vkb2_top_candi_pane_g5

0x8472,	// (0x000386bb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8472,	// (0x000386bb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0004003e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0004003e) cell_vkb2_top_candi_pane_g

0x8480,	// (0x000386c9) cell_vkb2_top_candi_pane_t1

0x7592,	// (0x000377db) aid_size_touch_slider_mark_ParamLimits

0x7592,	// (0x000377db) aid_size_touch_slider_mark

0xd79d,	// (0x0003d9e6) grid_graphic2_catg_pane_ParamLimits

0xd79d,	// (0x0003d9e6) grid_graphic2_catg_pane

0xd83b,	// (0x0003da84) popup_grid_graphic2_window_t1_ParamLimits

0xd83b,	// (0x0003da84) popup_grid_graphic2_window_t1

0xd84d,	// (0x0003da96) popup_grid_graphic2_window_t2_ParamLimits

0xd84d,	// (0x0003da96) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0003fff9) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0003fff9) popup_grid_graphic2_window_t

0xf411,	// (0x0003f65a) bg_button_pane_cp05_ParamLimits

0xda24,	// (0x0003dc6d) cell_graphic2_control_pane_g1_ParamLimits

0xdc06,	// (0x0003de4f) cell_graphic2_catg_pane_ParamLimits

0xdc06,	// (0x0003de4f) cell_graphic2_catg_pane

0xf26e,	// (0x0003f4b7) bg_button_pane_cp12

0xdc18,	// (0x0003de61) cell_graphic2_catg_pane_g1

0xd0c1,	// (0x0003d30a) cell_tb_ext_pane_t1_ParamLimits

0x8233,	// (0x0003847c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8233,	// (0x0003847c) vkb2_top_cell_right_narrow_pane

0x824b,	// (0x00038494) vkb2_top_cell_right_wide_pane_ParamLimits

0x824b,	// (0x00038494) vkb2_top_cell_right_wide_pane

0x77ad,	// (0x000379f6) bg_vkb2_func_pane_ParamLimits

0x77ad,	// (0x000379f6) bg_vkb2_func_pane

0x82bc,	// (0x00038505) vkb2_top_cell_left_pane_g1_ParamLimits

0x77ad,	// (0x000379f6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x77ad,	// (0x000379f6) bg_vkb2_fuc_pane_cp03

0x831a,	// (0x00038563) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90bb,	// (0x00039304) bg_vkb2_func_pane_g1

0x90c3,	// (0x0003930c) bg_vkb2_func_pane_g2

0x90d3,	// (0x0003931c) bg_vkb2_func_pane_g3

0x90cb,	// (0x00039314) bg_vkb2_func_pane_g4

0x90db,	// (0x00039324) bg_vkb2_func_pane_g5

0x90e3,	// (0x0003932c) bg_vkb2_func_pane_g6

0x90eb,	// (0x00039334) bg_vkb2_func_pane_g7

0x90f3,	// (0x0003933c) bg_vkb2_func_pane_g8

0x90b3,	// (0x000392fc) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0004004b) bg_vkb2_func_pane_g

0x77ad,	// (0x000379f6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x77ad,	// (0x000379f6) bg_vkb2_fuc_pane_cp01

0x82bc,	// (0x00038505) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x82bc,	// (0x00038505) vkb2_top_cell_right_wide_pane_g1

0x77ad,	// (0x000379f6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x77ad,	// (0x000379f6) bg_vkb2_fuc_pane_cp02

0x831a,	// (0x00038563) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x831a,	// (0x00038563) vkb2_top_cell_right_narrow_pane_g1

0xcce2,	// (0x0003cf2b) aid_touch_area_decrease_ParamLimits

0xcce2,	// (0x0003cf2b) aid_touch_area_decrease

0xcd06,	// (0x0003cf4f) aid_touch_area_increase_ParamLimits

0xcd06,	// (0x0003cf4f) aid_touch_area_increase

0xcd12,	// (0x0003cf5b) aid_touch_area_mute_ParamLimits

0xcd12,	// (0x0003cf5b) aid_touch_area_mute

0xcd36,	// (0x0003cf7f) aid_touch_area_slider_ParamLimits

0xcd36,	// (0x0003cf7f) aid_touch_area_slider

0xce26,	// (0x0003d06f) popup_slider_window_g4_ParamLimits

0xce26,	// (0x0003d06f) popup_slider_window_g4

0xce32,	// (0x0003d07b) popup_slider_window_g5_ParamLimits

0xce32,	// (0x0003d07b) popup_slider_window_g5

0xce54,	// (0x0003d09d) popup_slider_window_g6_ParamLimits

0xce54,	// (0x0003d09d) popup_slider_window_g6

0xce94,	// (0x0003d0dd) popup_slider_window_t2_ParamLimits

0xce94,	// (0x0003d0dd) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0003ff47) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0003ff47) popup_slider_window_t

0xceac,	// (0x0003d0f5) slider_pane_ParamLimits

0xceac,	// (0x0003d0f5) slider_pane

0xdc21,	// (0x0003de6a) slider_pane_g1_ParamLimits

0xdc21,	// (0x0003de6a) slider_pane_g1

0xdc35,	// (0x0003de7e) slider_pane_g2_ParamLimits

0xdc35,	// (0x0003de7e) slider_pane_g2

0xdc4b,	// (0x0003de94) slider_pane_g3_ParamLimits

0xdc4b,	// (0x0003de94) slider_pane_g3

0x0003,

0xfe15,	// (0x0004005e) slider_pane_g_ParamLimits

0xfe15,	// (0x0004005e) slider_pane_g

0x7139,	// (0x00037382) popup_tb_float_extension_window_ParamLimits

0x7139,	// (0x00037382) popup_tb_float_extension_window

0xdc77,	// (0x0003dec0) aid_size_cell_tb_float_ext

0xf26e,	// (0x0003f4b7) bg_popup_sub_window_cp28

0xdc83,	// (0x0003decc) grid_tb_float_ext_pane

0xdc8f,	// (0x0003ded8) cell_tb_float_ext_pane_ParamLimits

0xdc8f,	// (0x0003ded8) cell_tb_float_ext_pane

0xdcab,	// (0x0003def4) cell_tb_float_ext_pane_g1

0xdcb4,	// (0x0003defd) grid_highlight_pane_cp12

0x7902,	// (0x00037b4b) cell_last_hwr_side_pane_ParamLimits

0x7902,	// (0x00037b4b) cell_last_hwr_side_pane

0xb7c3,	// (0x0003ba0c) cell_last_hwr_side_pane_g1

0xdcbd,	// (0x0003df06) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00040067) cell_last_hwr_side_pane_g

0x81e2,	// (0x0003842b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x81e2,	// (0x0003842b) vkb2_area_bottom_space_btn_pane

0x7a28,	// (0x00037c71) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd70f,	// (0x0003d958) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8480,	// (0x000386c9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x849e,	// (0x000386e7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x849e,	// (0x000386e7) vkb2_area_bottom_space_btn_pane_g1

0x84d8,	// (0x00038721) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x84d8,	// (0x00038721) vkb2_area_bottom_space_btn_pane_g2

0x850e,	// (0x00038757) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x850e,	// (0x00038757) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0004006c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0004006c) vkb2_area_bottom_space_btn_pane_g

0x7872,	// (0x00037abb) cel_fep_hwr_func_pane_ParamLimits

0x7872,	// (0x00037abb) cel_fep_hwr_func_pane

0x78ae,	// (0x00037af7) cell_hwr_side_button_pane_ParamLimits

0x78ae,	// (0x00037af7) cell_hwr_side_button_pane

0xd0f5,	// (0x0003d33e) aid_area_touch_clock_ParamLimits

0xf411,	// (0x0003f65a) bg_uniindi_top_pane_ParamLimits

0xd109,	// (0x0003d352) uniindi_top_pane_g1_ParamLimits

0xd11f,	// (0x0003d368) uniindi_top_pane_g2_ParamLimits

0xd12b,	// (0x0003d374) uniindi_top_pane_g3_ParamLimits

0xd13c,	// (0x0003d385) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0003ff7f) uniindi_top_pane_g_ParamLimits

0xd149,	// (0x0003d392) uniindi_top_pane_t1_ParamLimits

0xf411,	// (0x0003f65a) bg_vkb2_func_pane_cp01_ParamLimits

0xf411,	// (0x0003f65a) bg_vkb2_func_pane_cp01

0xdcc6,	// (0x0003df0f) cel_fep_hwr_func_pane_g1_ParamLimits

0xdcc6,	// (0x0003df0f) cel_fep_hwr_func_pane_g1

0xf411,	// (0x0003f65a) bg_vkb2_func_pane_cp02_ParamLimits

0xf411,	// (0x0003f65a) bg_vkb2_func_pane_cp02

0xdcc6,	// (0x0003df0f) cell_hwr_side_button_pane_g1_ParamLimits

0xdcc6,	// (0x0003df0f) cell_hwr_side_button_pane_g1

0x8f34,	// (0x0003917d) status_pane_g4_ParamLimits

0x8f34,	// (0x0003917d) status_pane_g4

0x8f4e,	// (0x00039197) status_pane_t1

0xb562,	// (0x0003b7ab) form2_midp_gauge_slider_cont_pane

0xb56a,	// (0x0003b7b3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb57c,	// (0x0003b7c5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb58e,	// (0x0003b7d7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0003fd3f) form2_midp_gauge_slider_pane_t_ParamLimits

0xb5a0,	// (0x0003b7e9) form2_midp_slider_pane_ParamLimits

0x7e45,	// (0x0003808e) aid_size_cell_func_vkb2_ParamLimits

0x7e45,	// (0x0003808e) aid_size_cell_func_vkb2

0xdc63,	// (0x0003deac) slider_pane_g4_ParamLimits

0xdc63,	// (0x0003deac) slider_pane_g4

0x8558,	// (0x000387a1) form2_midp_gauge_slider_pane_t2_cp01

0x8566,	// (0x000387af) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8566,	// (0x000387af) form2_midp_gauge_slider_pane_t3_cp01

0x8583,	// (0x000387cc) form2_midp_slider_pane_cp01

0xf26e,	// (0x0003f4b7) navi_smil_pane

0xdcff,	// (0x0003df48) navi_smil_pane_g1

0xdd07,	// (0x0003df50) navi_smil_pane_t1

0xdcd4,	// (0x0003df1d) form2_midp_slider_pane_g1

0xdcdd,	// (0x0003df26) form2_midp_slider_pane_g2

0xdce5,	// (0x0003df2e) form2_midp_slider_pane_g3

0xdcd4,	// (0x0003df1d) form2_midp_slider_pane_g4

0xdced,	// (0x0003df36) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00040075) form2_midp_slider_pane_g

0x8548,	// (0x00038791) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8548,	// (0x00038791) vkb2_area_bottom_space_btn_pane_g4

0x8d4b,	// (0x00038f94) lc0_navi_pane_ParamLimits

0x8d4b,	// (0x00038f94) lc0_navi_pane

0x8dc7,	// (0x00039010) lc0_stat_indi_pane_ParamLimits

0x8dc7,	// (0x00039010) lc0_stat_indi_pane

0x8dde,	// (0x00039027) ls0_title_pane_ParamLimits

0x8dde,	// (0x00039027) ls0_title_pane

0x24ca,	// (0x00032713) bg_popup_sub_pane_cp14_ParamLimits

0xd0dc,	// (0x0003d325) list_uniindi_pane_ParamLimits

0xd0e8,	// (0x0003d331) uniindi_top_pane_ParamLimits

0xd187,	// (0x0003d3d0) list_single_uniindi_pane_g1_ParamLimits

0xd19a,	// (0x0003d3e3) list_single_uniindi_pane_t1_ParamLimits

0x858c,	// (0x000387d5) lc0_stat_clock_pane_ParamLimits

0x858c,	// (0x000387d5) lc0_stat_clock_pane

0xdd15,	// (0x0003df5e) lc0_stat_indi_pane_g1_ParamLimits

0xdd15,	// (0x0003df5e) lc0_stat_indi_pane_g1

0xdd22,	// (0x0003df6b) lc0_stat_indi_pane_g2_ParamLimits

0xdd22,	// (0x0003df6b) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00040080) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00040080) lc0_stat_indi_pane_g

0x8599,	// (0x000387e2) lc0_uni_indicator_pane_ParamLimits

0x8599,	// (0x000387e2) lc0_uni_indicator_pane

0xdd2f,	// (0x0003df78) ls0_title_pane_g1_ParamLimits

0xdd2f,	// (0x0003df78) ls0_title_pane_g1

0xdd43,	// (0x0003df8c) ls0_title_pane_t1_ParamLimits

0xdd43,	// (0x0003df8c) ls0_title_pane_t1

0x85a6,	// (0x000387ef) lc0_uni_indicator_pane_g1_ParamLimits

0x85a6,	// (0x000387ef) lc0_uni_indicator_pane_g1

0xdd79,	// (0x0003dfc2) lc0_stat_clock_pane_t1

0x53c8,	// (0x00035611) main_ai5_pane

0xdd87,	// (0x0003dfd0) ai5_sk_pane_ParamLimits

0xdd87,	// (0x0003dfd0) ai5_sk_pane

0xdd94,	// (0x0003dfdd) cell_ai5_widget_pane_ParamLimits

0xdd94,	// (0x0003dfdd) cell_ai5_widget_pane

0xe330,	// (0x0003e579) aid_size_cell_widget_grid

0xe346,	// (0x0003e58f) bg_ai5_widget_pane_ParamLimits

0xe346,	// (0x0003e58f) bg_ai5_widget_pane

0xe3b0,	// (0x0003e5f9) cell_ai5_widget_pane_g2

0xe3c0,	// (0x0003e609) cell_ai5_widget_pane_g3

0xe3df,	// (0x0003e628) cell_ai5_widget_pane_g4

0xe3eb,	// (0x0003e634) cell_ai5_widget_pane_g5

0xe3f7,	// (0x0003e640) cell_ai5_widget_pane_g6

0xe403,	// (0x0003e64c) cell_ai5_widget_pane_g7

0xe44b,	// (0x0003e694) cell_ai5_widget_pane_t1_ParamLimits

0xe44b,	// (0x0003e694) cell_ai5_widget_pane_t1

0xe468,	// (0x0003e6b1) cell_ai5_widget_pane_t2_ParamLimits

0xe468,	// (0x0003e6b1) cell_ai5_widget_pane_t2

0xe480,	// (0x0003e6c9) cell_ai5_widget_pane_t3_ParamLimits

0xe480,	// (0x0003e6c9) cell_ai5_widget_pane_t3

0xe498,	// (0x0003e6e1) cell_ai5_widget_pane_t4_ParamLimits

0xe498,	// (0x0003e6e1) cell_ai5_widget_pane_t4

0xe4b2,	// (0x0003e6fb) cell_ai5_widget_pane_t5_ParamLimits

0xe4b2,	// (0x0003e6fb) cell_ai5_widget_pane_t5

0xe4d1,	// (0x0003e71a) cell_ai5_widget_pane_t6_ParamLimits

0xe4d1,	// (0x0003e71a) cell_ai5_widget_pane_t6

0xe4e3,	// (0x0003e72c) cell_ai5_widget_pane_t7_ParamLimits

0xe4e3,	// (0x0003e72c) cell_ai5_widget_pane_t7

0xe4fc,	// (0x0003e745) cell_ai5_widget_pane_t8_ParamLimits

0xe4fc,	// (0x0003e745) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0004009a) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0004009a) cell_ai5_widget_pane_t

0xe548,	// (0x0003e791) grid_ai5_widget_pane

0x24ca,	// (0x00032713) highlight_cell_ai5_widget_pane_ParamLimits

0x24ca,	// (0x00032713) highlight_cell_ai5_widget_pane

0xe560,	// (0x0003e7a9) ai5_sk_left_pane

0xe56a,	// (0x0003e7b3) ai5_sk_middle_pane

0xe574,	// (0x0003e7bd) ai5_sk_right_pane

0xe57e,	// (0x0003e7c7) bg_ai5_widget_pane_g1_ParamLimits

0xe57e,	// (0x0003e7c7) bg_ai5_widget_pane_g1

0xe58a,	// (0x0003e7d3) bg_ai5_widget_pane_g2_ParamLimits

0xe58a,	// (0x0003e7d3) bg_ai5_widget_pane_g2

0xe596,	// (0x0003e7df) bg_ai5_widget_pane_g3_ParamLimits

0xe596,	// (0x0003e7df) bg_ai5_widget_pane_g3

0xe5a2,	// (0x0003e7eb) bg_ai5_widget_pane_g4_ParamLimits

0xe5a2,	// (0x0003e7eb) bg_ai5_widget_pane_g4

0xe5ae,	// (0x0003e7f7) bg_ai5_widget_pane_g5_ParamLimits

0xe5ae,	// (0x0003e7f7) bg_ai5_widget_pane_g5

0xe5ba,	// (0x0003e803) bg_ai5_widget_pane_g6_ParamLimits

0xe5ba,	// (0x0003e803) bg_ai5_widget_pane_g6

0xe5c6,	// (0x0003e80f) bg_ai5_widget_pane_g7_ParamLimits

0xe5c6,	// (0x0003e80f) bg_ai5_widget_pane_g7

0xe5d2,	// (0x0003e81b) bg_ai5_widget_pane_g8_ParamLimits

0xe5d2,	// (0x0003e81b) bg_ai5_widget_pane_g8

0xe5de,	// (0x0003e827) bg_ai5_widget_pane_g9_ParamLimits

0xe5de,	// (0x0003e827) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x000400af) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x000400af) bg_ai5_widget_pane_g

0xe606,	// (0x0003e84f) cell_shortcut_ai5_widget_pane_ParamLimits

0xe606,	// (0x0003e84f) cell_shortcut_ai5_widget_pane

0xf30c,	// (0x0003f555) bg_cell_shortcut_ai5_widget_pane

0xe619,	// (0x0003e862) cell_grid_ai5_widget_pane_g1

0xe622,	// (0x0003e86b) highlight_cell_shortcut_ai5_widget_pane

0x90bb,	// (0x00039304) ai5_sk_left_pane_g1

0xe62a,	// (0x0003e873) ai5_sk_left_pane_g2

0xe632,	// (0x0003e87b) ai5_sk_left_pane_g3

0xe63a,	// (0x0003e883) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x000400c2) ai5_sk_left_pane_g

0xe642,	// (0x0003e88b) ai5_sk_left_pane_t1

0x90c3,	// (0x0003930c) ai5_sk_right_pane_g1

0xe650,	// (0x0003e899) ai5_sk_right_pane_g2

0xe658,	// (0x0003e8a1) ai5_sk_right_pane_g3

0xe660,	// (0x0003e8a9) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x000400cb) ai5_sk_right_pane_g

0xe668,	// (0x0003e8b1) ai5_sk_right_pane_t1

0x90c3,	// (0x0003930c) ai5_sk_middle_pane_g1

0x90bb,	// (0x00039304) ai5_sk_middle_pane_g2

0x90db,	// (0x00039324) ai5_sk_middle_pane_g3

0xe658,	// (0x0003e8a1) ai5_sk_middle_pane_g4

0xe632,	// (0x0003e87b) ai5_sk_middle_pane_g5

0xe676,	// (0x0003e8bf) ai5_sk_middle_pane_g6

0xe67e,	// (0x0003e8c7) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x000400d4) ai5_sk_middle_pane_g

0x8bcd,	// (0x00038e16) aid_touch_area_size_lc0_ParamLimits

0x8bcd,	// (0x00038e16) aid_touch_area_size_lc0

0x7a57,	// (0x00037ca0) cell_hwr_candidate_pane_t1_ParamLimits

0x8beb,	// (0x00038e34) aid_touch_navi_pane

0x8ede,	// (0x00039127) status_dt_navi_pane_ParamLimits

0x8ede,	// (0x00039127) status_dt_navi_pane

0x8eeb,	// (0x00039134) status_dt_sta_pane_ParamLimits

0x8eeb,	// (0x00039134) status_dt_sta_pane

0xe686,	// (0x0003e8cf) dt_sta_controll_pane

0xe693,	// (0x0003e8dc) dt_sta_indi_pane

0xe6a4,	// (0x0003e8ed) dt_sta_title_pane

0xf411,	// (0x0003f65a) bg_dt_sta_indi_pane_ParamLimits

0xf411,	// (0x0003f65a) bg_dt_sta_indi_pane

0xe6b7,	// (0x0003e900) dt_sta_battery_pane

0xe6bf,	// (0x0003e908) dt_sta_indi_pane_g1

0xe6c8,	// (0x0003e911) dt_sta_indi_pane_g2

0xe6d1,	// (0x0003e91a) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x000400e3) dt_sta_indi_pane_g

0xe6da,	// (0x0003e923) dt_sta_signal_pane

0x24ca,	// (0x00032713) bg_dt_sta_title_pane_ParamLimits

0x24ca,	// (0x00032713) bg_dt_sta_title_pane

0xe6e3,	// (0x0003e92c) dt_sta_title_pane_g1

0xe6eb,	// (0x0003e934) dt_sta_title_pane_t1_ParamLimits

0xe6eb,	// (0x0003e934) dt_sta_title_pane_t1

0xf26e,	// (0x0003f4b7) bg_dt_sta_control_pane

0xe700,	// (0x0003e949) dt_sta_controll_pane_g1

0xe709,	// (0x0003e952) bg_dt_sta_title_pane_g1

0xe712,	// (0x0003e95b) bg_dt_sta_title_pane_g2

0xe71b,	// (0x0003e964) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x000400ea) bg_dt_sta_title_pane_g

0xb7c3,	// (0x0003ba0c) bg_dt_sta_indi_pane_g1

0xe724,	// (0x0003e96d) dt_sta_signal_pane_g1

0xe72c,	// (0x0003e975) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x000400f1) dt_sta_signal_pane_g

0xe734,	// (0x0003e97d) dt_sta_battery_pane_g1

0xe73d,	// (0x0003e986) dt_sta_battery_pane_t1

0xb7c3,	// (0x0003ba0c) bg_dt_sta_control_pane_g1

0x64ee,	// (0x00036737) fep_china_uni_eep_pane

0x64f6,	// (0x0003673f) fep_china_uni_entry_pane_ParamLimits

0x6506,	// (0x0003674f) popup_fep_china_uni_window_g1_ParamLimits

0x6516,	// (0x0003675f) popup_fep_china_uni_window_g2_ParamLimits

0x6516,	// (0x0003675f) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0003f96c) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0003f96c) popup_fep_china_uni_window_g

0xe74c,	// (0x0003e995) fep_china_uni_eep_pane_g1

0xe754,	// (0x0003e99d) fep_china_uni_eep_pane_t1

0xdcf6,	// (0x0003df3f) aid_touch_area_size_smil_player

0x8d43,	// (0x00038f8c) lc0_clock_pane

0x8f42,	// (0x0003918b) status_pane_g5_ParamLimits

0x8f42,	// (0x0003918b) status_pane_g5

0x6dbe,	// (0x00037007) popup_keymap_window

0x8f00,	// (0x00039149) status_icon_pane

0xe3c0,	// (0x0003e609) cell_ai5_widget_pane_g3_ParamLimits

0xe3df,	// (0x0003e628) cell_ai5_widget_pane_g4_ParamLimits

0xe3eb,	// (0x0003e634) cell_ai5_widget_pane_g5_ParamLimits

0xe40f,	// (0x0003e658) cell_ai5_widget_pane_g8_ParamLimits

0xe40f,	// (0x0003e658) cell_ai5_widget_pane_g8

0xe423,	// (0x0003e66c) cell_ai5_widget_pane_g9_ParamLimits

0xe423,	// (0x0003e66c) cell_ai5_widget_pane_g9

0xe437,	// (0x0003e680) cell_ai5_widget_pane_g10_ParamLimits

0xe437,	// (0x0003e680) cell_ai5_widget_pane_g10

0xe763,	// (0x0003e9ac) status_icon_pane_g1

0xf26e,	// (0x0003f4b7) bg_popup_sub_pane_cp13

0xe76b,	// (0x0003e9b4) popup_keymap_window_t1

0x8b0a,	// (0x00038d53) control_pane_g6_ParamLimits

0x8b0a,	// (0x00038d53) control_pane_g6

0x8b17,	// (0x00038d60) control_pane_g7_ParamLimits

0x8b17,	// (0x00038d60) control_pane_g7

0x8b24,	// (0x00038d6d) control_pane_g8_ParamLimits

0x8b24,	// (0x00038d6d) control_pane_g8

0xe686,	// (0x0003e8cf) dt_sta_controll_pane_ParamLimits

0xe693,	// (0x0003e8dc) dt_sta_indi_pane_ParamLimits

0xe6a4,	// (0x0003e8ed) dt_sta_title_pane_ParamLimits

0x240c,	// (0x00032655) aid_size_touch_scroll_bar_cale

0x54a5,	// (0x000356ee) popup_discreet_window_ParamLimits

0x54a5,	// (0x000356ee) popup_discreet_window

0x5533,	// (0x0003577c) popup_sk_window

0x978b,	// (0x000399d4) bg_popup_sub_pane_cp28_ParamLimits

0x978b,	// (0x000399d4) bg_popup_sub_pane_cp28

0xe779,	// (0x0003e9c2) popup_discreet_window_g1_ParamLimits

0xe779,	// (0x0003e9c2) popup_discreet_window_g1

0xe799,	// (0x0003e9e2) popup_discreet_window_t1_ParamLimits

0xe799,	// (0x0003e9e2) popup_discreet_window_t1

0xe7b7,	// (0x0003ea00) popup_discreet_window_t2_ParamLimits

0xe7b7,	// (0x0003ea00) popup_discreet_window_t2

0x0002,

0xfead,	// (0x000400f6) popup_discreet_window_t_ParamLimits

0xfead,	// (0x000400f6) popup_discreet_window_t

0x85b9,	// (0x00038802) popup_sk_window_g1

0x85c3,	// (0x0003880c) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x000400fd) popup_sk_window_g

0x85cd,	// (0x00038816) popup_sk_window_t1

0x85dd,	// (0x00038826) popup_sk_window_t1_copy1

0xe3b0,	// (0x0003e5f9) cell_ai5_widget_pane_g2_ParamLimits

0xe50e,	// (0x0003e757) cell_ai5_widget_pane_t9_ParamLimits

0xe50e,	// (0x0003e757) cell_ai5_widget_pane_t9

0xf26e,	// (0x0003f4b7) main_fep_fshwr2_pane

0x85eb,	// (0x00038834) aid_fshwr2_btn_pane

0x85f7,	// (0x00038840) aid_fshwr2_syb_pane

0x8608,	// (0x00038851) aid_fshwr2_txt_pane

0x8614,	// (0x0003885d) fshwr2_func_candi_pane

0x8625,	// (0x0003886e) fshwr2_hwr_syb_pane

0x8638,	// (0x00038881) fshwr2_icf_pane

0xf26e,	// (0x0003f4b7) fshwr2_icf_bg_pane

0xe809,	// (0x0003ea52) fshwr2_icf_pane_t1_ParamLimits

0xe809,	// (0x0003ea52) fshwr2_icf_pane_t1

0xb7c3,	// (0x0003ba0c) fshwr2_func_candi_pane_g1

0xe820,	// (0x0003ea69) fshwr2_func_candi_row_pane_ParamLimits

0xe820,	// (0x0003ea69) fshwr2_func_candi_row_pane

0xe831,	// (0x0003ea7a) cell_fshwr2_syb_pane_ParamLimits

0xe831,	// (0x0003ea7a) cell_fshwr2_syb_pane

0xba3e,	// (0x0003bc87) fshwr2_hwr_syb_pane_g1_ParamLimits

0xba3e,	// (0x0003bc87) fshwr2_hwr_syb_pane_g1

0xf26e,	// (0x0003f4b7) bg_popup_call_pane_cp01

0xe84b,	// (0x0003ea94) fshwr2_func_candi_cell_pane_ParamLimits

0xe84b,	// (0x0003ea94) fshwr2_func_candi_cell_pane

0xe87d,	// (0x0003eac6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe87d,	// (0x0003eac6) fshwr2_func_candi_cell_bg_pane

0xe897,	// (0x0003eae0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe897,	// (0x0003eae0) fshwr2_func_candi_cell_pane_g1

0xe8b7,	// (0x0003eb00) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe8b7,	// (0x0003eb00) fshwr2_func_candi_cell_pane_t1

0xf26e,	// (0x0003f4b7) bg_button_pane_cp08

0x883b,	// (0x00038a84) cell_fshwr2_syb_bg_pane

0xe8ca,	// (0x0003eb13) cell_fshwr2_syb_bg_pane_g1

0xe8d2,	// (0x0003eb1b) cell_fshwr2_syb_bg_pane_t1

0x24ca,	// (0x00032713) main_tmo_pane

0xa2b5,	// (0x0003a4fe) uni_indicator_pane_g1_ParamLimits

0xa2ca,	// (0x0003a513) uni_indicator_pane_g2_ParamLimits

0xa2e0,	// (0x0003a529) uni_indicator_pane_g3_ParamLimits

0xa2f6,	// (0x0003a53f) uni_indicator_pane_g4_ParamLimits

0xa2f6,	// (0x0003a53f) uni_indicator_pane_g4

0xa30a,	// (0x0003a553) uni_indicator_pane_g5_ParamLimits

0xa30a,	// (0x0003a553) uni_indicator_pane_g5

0xa31e,	// (0x0003a567) uni_indicator_pane_g6_ParamLimits

0xa31e,	// (0x0003a567) uni_indicator_pane_g6

0xf927,	// (0x0003fb70) uni_indicator_pane_g_ParamLimits

0xccb2,	// (0x0003cefb) popup_tmo_note_window_ParamLimits

0xccb2,	// (0x0003cefb) popup_tmo_note_window

0x7e27,	// (0x00038070) fshwr2_bg_pane

0xe8a8,	// (0x0003eaf1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe8a8,	// (0x0003eaf1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00040102) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00040102) fshwr2_func_candi_cell_pane_g

0xb7c3,	// (0x0003ba0c) bg_popup_window_pane_cp01

0xe8e1,	// (0x0003eb2a) bg_popup_window_pane_g1_cp01

0xe8ea,	// (0x0003eb33) bg_popup_window_pane_cp22_ParamLimits

0xe8ea,	// (0x0003eb33) bg_popup_window_pane_cp22

0xe8f8,	// (0x0003eb41) listscroll_tmo_link_pane_ParamLimits

0xe8f8,	// (0x0003eb41) listscroll_tmo_link_pane

0xe938,	// (0x0003eb81) popup_tmo_note_window_g1_ParamLimits

0xe938,	// (0x0003eb81) popup_tmo_note_window_g1

0xe945,	// (0x0003eb8e) tmo_note_info_pane_ParamLimits

0xe945,	// (0x0003eb8e) tmo_note_info_pane

0xe95f,	// (0x0003eba8) list_tmo_note_info_pane_g1_ParamLimits

0xe95f,	// (0x0003eba8) list_tmo_note_info_pane_g1

0xe976,	// (0x0003ebbf) list_tmo_note_info_pane_g2_ParamLimits

0xe976,	// (0x0003ebbf) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00040107) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00040107) list_tmo_note_info_pane_g

0xe992,	// (0x0003ebdb) list_tmo_note_info_text_pane_ParamLimits

0xe992,	// (0x0003ebdb) list_tmo_note_info_text_pane

0xea17,	// (0x0003ec60) list_tmo_link_pane

0xea24,	// (0x0003ec6d) scroll_pane_cp20

0xea31,	// (0x0003ec7a) list_single_tmo_link_pane_ParamLimits

0xea31,	// (0x0003ec7a) list_single_tmo_link_pane

0xea41,	// (0x0003ec8a) list_single_tmo_link_pane_t1

0xea4f,	// (0x0003ec98) list_tmo_note_info_text_pane_t1_ParamLimits

0xea4f,	// (0x0003ec98) list_tmo_note_info_text_pane_t1

0x5fab,	// (0x000361f4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5fab,	// (0x000361f4) aid_size_touch_scroll_bar_cp01

0x5ed5,	// (0x0003611e) aid_size_touch_slider_marker

0x551b,	// (0x00035764) popup_settings_window_ParamLimits

0x551b,	// (0x00035764) popup_settings_window

0x3f8b,	// (0x000341d4) popup_candi_list_indi_window

0x8beb,	// (0x00038e34) aid_touch_navi_pane_ParamLimits

0x7d80,	// (0x00037fc9) rs_clock_indi_pane

0x7d89,	// (0x00037fd2) sctrl_sk_bottom_pane_ParamLimits

0x7d9a,	// (0x00037fe3) sctrl_sk_top_pane_ParamLimits

0x7e9f,	// (0x000380e8) popup_fep_tooltip_window

0xe330,	// (0x0003e579) aid_size_cell_widget_grid_ParamLimits

0xe3a4,	// (0x0003e5ed) cell_ai5_widget_pane_g1_ParamLimits

0xe3a4,	// (0x0003e5ed) cell_ai5_widget_pane_g1

0xe3f7,	// (0x0003e640) cell_ai5_widget_pane_g6_ParamLimits

0xe403,	// (0x0003e64c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00040085) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00040085) cell_ai5_widget_pane_g

0xe532,	// (0x0003e77b) cell_ai5_widget_pane_t10_ParamLimits

0xe532,	// (0x0003e77b) cell_ai5_widget_pane_t10

0xe548,	// (0x0003e791) grid_ai5_widget_pane_ParamLimits

0xe5ea,	// (0x0003e833) cell_contacts_ai5_widget_pane_ParamLimits

0xe5ea,	// (0x0003e833) cell_contacts_ai5_widget_pane

0xe7cc,	// (0x0003ea15) popup_discreet_window_t3_ParamLimits

0xe7cc,	// (0x0003ea15) popup_discreet_window_t3

0x864d,	// (0x00038896) popup_fshwr2_char_preview_window_ParamLimits

0x864d,	// (0x00038896) popup_fshwr2_char_preview_window

0xe9b0,	// (0x0003ebf9) tmo_note_info_pane_t1

0xe9c5,	// (0x0003ec0e) tmo_note_info_pane_t2

0xe9de,	// (0x0003ec27) tmo_note_info_pane_t3

0xe9f3,	// (0x0003ec3c) tmo_note_info_pane_t4

0xea05,	// (0x0003ec4e) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0004010c) tmo_note_info_pane_t

0xea17,	// (0x0003ec60) list_tmo_link_pane_ParamLimits

0xea24,	// (0x0003ec6d) scroll_pane_cp20_ParamLimits

0xf26e,	// (0x0003f4b7) bg_popup_fep_char_preview_window_cp01

0xea68,	// (0x0003ecb1) popup_fshwr2_char_preview_window_t1

0xea76,	// (0x0003ecbf) popup_candi_list_indi_window_g1

0xea7f,	// (0x0003ecc8) bg_cell_contacts_ai5_widget_pane

0xea8b,	// (0x0003ecd4) cell_contacts_ai5_widget_pane_g1

0xea9b,	// (0x0003ece4) cell_contacts_ai5_widget_pane_g2

0xeaa7,	// (0x0003ecf0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00040117) cell_contacts_ai5_widget_pane_g

0xeab3,	// (0x0003ecfc) cell_contacts_ai5_widget_pane_t1

0x24ca,	// (0x00032713) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeb2d,	// (0x0003ed76) settings_container_pane

0x883b,	// (0x00038a84) listscroll_set_pane_copy1

0xae9a,	// (0x0003b0e3) scroll_pane_cp121_copy1

0xeb39,	// (0x0003ed82) set_content_pane_copy1

0xeb41,	// (0x0003ed8a) aid_height_set_list_copy1_ParamLimits

0xeb41,	// (0x0003ed8a) aid_height_set_list_copy1

0xa51e,	// (0x0003a767) aid_size_parent_copy1_ParamLimits

0xa51e,	// (0x0003a767) aid_size_parent_copy1

0xeb4d,	// (0x0003ed96) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb4d,	// (0x0003ed96) button_value_adjust_pane_cp6_copy1

0x8b87,	// (0x00038dd0) list_highlight_pane_cp2_copy1_ParamLimits

0x8b87,	// (0x00038dd0) list_highlight_pane_cp2_copy1

0xeb61,	// (0x0003edaa) list_set_pane_copy1_ParamLimits

0xeb61,	// (0x0003edaa) list_set_pane_copy1

0xeac8,	// (0x0003ed11) main_pane_set_t1_copy1_ParamLimits

0xeac8,	// (0x0003ed11) main_pane_set_t1_copy1

0xeb02,	// (0x0003ed4b) main_pane_set_t2_copy1_ParamLimits

0xeb02,	// (0x0003ed4b) main_pane_set_t2_copy1

0xec28,	// (0x0003ee71) main_pane_set_t3_copy1

0xec36,	// (0x0003ee7f) main_pane_set_t4_copy1

0xeb21,	// (0x0003ed6a) set_content_pane_g1_copy1_ParamLimits

0xeb21,	// (0x0003ed6a) set_content_pane_g1_copy1

0xec44,	// (0x0003ee8d) setting_code_pane_copy1

0xec4c,	// (0x0003ee95) setting_slider_graphic_pane_copy1

0xec4c,	// (0x0003ee95) setting_slider_pane_copy1

0xec4c,	// (0x0003ee95) setting_text_pane_copy1

0xec4c,	// (0x0003ee95) setting_volume_pane_copy1

0xec44,	// (0x0003ee8d) settings_code_pane_cp2_copy1

0xec54,	// (0x0003ee9d) settings_code_pane_cp_copy1_ParamLimits

0xec54,	// (0x0003ee9d) settings_code_pane_cp_copy1

0xec68,	// (0x0003eeb1) volume_set_pane_copy1

0xec74,	// (0x0003eebd) volume_set_pane_g10_copy1

0xec80,	// (0x0003eec9) volume_set_pane_g1_copy1

0xec8a,	// (0x0003eed3) volume_set_pane_g2_copy1

0xec94,	// (0x0003eedd) volume_set_pane_g3_copy1

0xec9e,	// (0x0003eee7) volume_set_pane_g4_copy1

0xeca8,	// (0x0003eef1) volume_set_pane_g5_copy1

0xecb2,	// (0x0003eefb) volume_set_pane_g6_copy1

0xecbc,	// (0x0003ef05) volume_set_pane_g7_copy1

0xecc6,	// (0x0003ef0f) volume_set_pane_g8_copy1

0xecd0,	// (0x0003ef19) volume_set_pane_g9_copy1

0xf2d0,	// (0x0003f519) bg_set_opt_pane_cp_copy1_ParamLimits

0xf2d0,	// (0x0003f519) bg_set_opt_pane_cp_copy1

0xecda,	// (0x0003ef23) setting_slider_pane_t1_copy1_ParamLimits

0xecda,	// (0x0003ef23) setting_slider_pane_t1_copy1

0xecf8,	// (0x0003ef41) setting_slider_pane_t2_copy1_ParamLimits

0xecf8,	// (0x0003ef41) setting_slider_pane_t2_copy1

0xed12,	// (0x0003ef5b) setting_slider_pane_t3_copy1_ParamLimits

0xed12,	// (0x0003ef5b) setting_slider_pane_t3_copy1

0xed2a,	// (0x0003ef73) slider_set_pane_copy1_ParamLimits

0xed2a,	// (0x0003ef73) slider_set_pane_copy1

0x2531,	// (0x0003277a) set_opt_bg_pane_g1_copy2

0x2539,	// (0x00032782) set_opt_bg_pane_g2_copy2

0xed40,	// (0x0003ef89) set_opt_bg_pane_g3_copy2

0x2549,	// (0x00032792) set_opt_bg_pane_g4_copy2

0x2551,	// (0x0003279a) set_opt_bg_pane_g5_copy2

0x2559,	// (0x000327a2) set_opt_bg_pane_g6_copy2

0xed4a,	// (0x0003ef93) set_opt_bg_pane_g7_copy2

0xed54,	// (0x0003ef9d) set_opt_bg_pane_g8_copy2

0xed5e,	// (0x0003efa7) set_opt_bg_pane_g9_copy2

0xed68,	// (0x0003efb1) aid_size_touch_slider_mark_copy1_ParamLimits

0xed68,	// (0x0003efb1) aid_size_touch_slider_mark_copy1

0xed7c,	// (0x0003efc5) slider_set_pane_g1_copy1

0xed85,	// (0x0003efce) slider_set_pane_g2_copy1

0xd8b3,	// (0x0003dafc) slider_set_pane_g3_copy1_ParamLimits

0xd8b3,	// (0x0003dafc) slider_set_pane_g3_copy1

0xd8c7,	// (0x0003db10) slider_set_pane_g4_copy1_ParamLimits

0xd8c7,	// (0x0003db10) slider_set_pane_g4_copy1

0xd8df,	// (0x0003db28) slider_set_pane_g5_copy1_ParamLimits

0xd8df,	// (0x0003db28) slider_set_pane_g5_copy1

0xd8b3,	// (0x0003dafc) slider_set_pane_g6_copy1_ParamLimits

0xd8b3,	// (0x0003dafc) slider_set_pane_g6_copy1

0xed8d,	// (0x0003efd6) slider_set_pane_g7_copy1_ParamLimits

0xed8d,	// (0x0003efd6) slider_set_pane_g7_copy1

0xf282,	// (0x0003f4cb) bg_set_opt_pane_cp2_copy1

0xeda3,	// (0x0003efec) setting_slider_graphic_pane_g1_copy1

0xedac,	// (0x0003eff5) setting_slider_graphic_pane_t1_copy1

0xedbc,	// (0x0003f005) setting_slider_graphic_pane_t2_copy1

0xedcc,	// (0x0003f015) slider_set_pane_cp_copy1

0xeddc,	// (0x0003f025) input_focus_pane_cp1_copy1

0xede5,	// (0x0003f02e) list_set_text_pane_copy1

0xeded,	// (0x0003f036) setting_text_pane_g1_copy1

0x46b6,	// (0x000348ff) set_text_pane_t1_copy1

0xeddc,	// (0x0003f025) input_focus_pane_cp2_copy1

0xeded,	// (0x0003f036) setting_code_pane_g1_copy1

0xedf6,	// (0x0003f03f) setting_code_pane_t1_copy1

0xee04,	// (0x0003f04d) list_set_graphic_pane_copy1

0xf282,	// (0x0003f4cb) bg_set_opt_pane_cp4_copy1

0x68ba,	// (0x00036b03) list_set_graphic_pane_g1_copy1_ParamLimits

0x68ba,	// (0x00036b03) list_set_graphic_pane_g1_copy1

0xee16,	// (0x0003f05f) list_set_graphic_pane_g2_copy1

0x68d2,	// (0x00036b1b) list_set_graphic_pane_t1_copy1_ParamLimits

0x68d2,	// (0x00036b1b) list_set_graphic_pane_t1_copy1

0xb7c3,	// (0x0003ba0c) rs_clock_indi_pane_g1

0xee1e,	// (0x0003f067) rs_clock_indi_pane_t1

0xee2c,	// (0x0003f075) rs_indi_pane

0xee34,	// (0x0003f07d) rs_indi_pane_g1

0xee3d,	// (0x0003f086) rs_indi_pane_g2

0xee46,	// (0x0003f08f) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0004011e) rs_indi_pane_g

0x883b,	// (0x00038a84) bg_popup_preview_window_pane_cp03

0xee4f,	// (0x0003f098) popup_fep_tooltip_window_t1

0xc45a,	// (0x0003c6a3) popup_note2_window_g2_ParamLimits

0xc45a,	// (0x0003c6a3) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0003feb7) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0003feb7) popup_note2_window_g

0xc962,	// (0x0003cbab) bg_popup_sub_pane_cp11_ParamLimits

0xc96f,	// (0x0003cbb8) cell_ai3_links_pane_g1_ParamLimits

0xc986,	// (0x0003cbcf) cell_ai3_links_pane_t1

0x46b6,	// (0x000348ff) set_text_pane_t1_copy1_ParamLimits

0x8748,	// (0x00038991) cell_graphic_popup_pane_cp2_ParamLimits

0x8748,	// (0x00038991) cell_graphic_popup_pane_cp2

0xee5d,	// (0x0003f0a6) cell_graphic_popup_pane_g1_cp2

0x221f,	// (0x00032468) cell_graphic_popup_pane_g2_cp2

0xee65,	// (0x0003f0ae) cell_graphic_popup_pane_g3_cp2

0xee6d,	// (0x0003f0b6) cell_graphic_popup_pane_t2_cp2

0x2230,	// (0x00032479) grid_highlight_pane_cp3_cp2

0x27da,	// (0x00032a23) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x24ca,	// (0x00032713) main_tmo_pane_ParamLimits

0xcca6,	// (0x0003ceef) popup_tmo_big_image_note_window

0xe394,	// (0x0003e5dd) cell_ai5_widget_list_pane

0xe39c,	// (0x0003e5e5) cell_ai5_widget_lrg_icon_pane

0xe9b0,	// (0x0003ebf9) tmo_note_info_pane_t1_ParamLimits

0xe9c5,	// (0x0003ec0e) tmo_note_info_pane_t2_ParamLimits

0xe9de,	// (0x0003ec27) tmo_note_info_pane_t3_ParamLimits

0xe9f3,	// (0x0003ec3c) tmo_note_info_pane_t4_ParamLimits

0xea05,	// (0x0003ec4e) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0004010c) tmo_note_info_pane_t_ParamLimits

0xeb2d,	// (0x0003ed76) settings_container_pane_ParamLimits

0xedd4,	// (0x0003f01d) indicator_popup_pane_cp5

0xedd4,	// (0x0003f01d) indicator_popup_pane_cp6

0xee04,	// (0x0003f04d) list_set_graphic_pane_copy1_ParamLimits

0xf26e,	// (0x0003f4b7) bg_popup_window_pane_cp23

0xee7b,	// (0x0003f0c4) popup_tmo_big_image_note_window_g1

0xee87,	// (0x0003f0d0) popup_tmo_big_image_note_window_t1

0xee97,	// (0x0003f0e0) popup_tmo_big_image_note_window_t2

0xeea7,	// (0x0003f0f0) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00040125) popup_tmo_big_image_note_window_t

0xeeb7,	// (0x0003f100) cell_ai5_widget_lrg_icon_pane_g1

0xeebf,	// (0x0003f108) cell_ai5_widget_lrg_icon_pane_t1

0xeecd,	// (0x0003f116) cell_ai5_widget_list_row_pane_ParamLimits

0xeecd,	// (0x0003f116) cell_ai5_widget_list_row_pane

0xeee6,	// (0x0003f12f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeee6,	// (0x0003f12f) cell_ai5_widget_list_row_pane_g1

0xeef3,	// (0x0003f13c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeef3,	// (0x0003f13c) cell_ai5_widget_list_row_pane_t1

0xef0b,	// (0x0003f154) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xef0b,	// (0x0003f154) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0004012c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0004012c) cell_ai5_widget_list_row_pane_t

0x53c8,	// (0x00035611) main_fep_vtchi_ss_pane

0xef42,	// (0x0003f18b) popup_fep_char_pre_window

0xef4a,	// (0x0003f193) popup_fep_ituss_window

0xef6b,	// (0x0003f1b4) popup_fep_vkbss_window

0xef8c,	// (0x0003f1d5) grid_vkbss_keypad_pane_ParamLimits

0xef8c,	// (0x0003f1d5) grid_vkbss_keypad_pane

0xef9c,	// (0x0003f1e5) ituss_keypad_pane

0xefb8,	// (0x0003f201) aid_vkbss_key_offset_ParamLimits

0xefb8,	// (0x0003f201) aid_vkbss_key_offset

0xefc4,	// (0x0003f20d) cell_vkbss_key_pane_ParamLimits

0xefc4,	// (0x0003f20d) cell_vkbss_key_pane

0xefda,	// (0x0003f223) bg_cell_vkbss_key_g1_ParamLimits

0xefda,	// (0x0003f223) bg_cell_vkbss_key_g1

0xefe6,	// (0x0003f22f) cell_vkbss_key_3p_pane_ParamLimits

0xefe6,	// (0x0003f22f) cell_vkbss_key_3p_pane

0xf000,	// (0x0003f249) cell_vkbss_key_g1_ParamLimits

0xf000,	// (0x0003f249) cell_vkbss_key_g1

0xf01a,	// (0x0003f263) cell_vkbss_key_t1_ParamLimits

0xf01a,	// (0x0003f263) cell_vkbss_key_t1

0xf045,	// (0x0003f28e) cell_ituss_key_pane_ParamLimits

0xf045,	// (0x0003f28e) cell_ituss_key_pane

0xf056,	// (0x0003f29f) bg_cell_ituss_key_g1_ParamLimits

0xf056,	// (0x0003f29f) bg_cell_ituss_key_g1

0xf062,	// (0x0003f2ab) cell_ituss_key_pane_g1_ParamLimits

0xf062,	// (0x0003f2ab) cell_ituss_key_pane_g1

0xf076,	// (0x0003f2bf) cell_ituss_key_pane_g2_ParamLimits

0xf076,	// (0x0003f2bf) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x00040133) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x00040133) cell_ituss_key_pane_g

0xf0a1,	// (0x0003f2ea) cell_ituss_key_t1_ParamLimits

0xf0a1,	// (0x0003f2ea) cell_ituss_key_t1

0xf0cf,	// (0x0003f318) cell_ituss_key_t2_ParamLimits

0xf0cf,	// (0x0003f318) cell_ituss_key_t2

0xf100,	// (0x0003f349) cell_ituss_key_t3_ParamLimits

0xf100,	// (0x0003f349) cell_ituss_key_t3

0xf131,	// (0x0003f37a) cell_ituss_key_t4_ParamLimits

0xf131,	// (0x0003f37a) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x00040138) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x00040138) cell_ituss_key_t

0xf162,	// (0x0003f3ab) cell_vkbss_key_3p_pane_g1

0xf16a,	// (0x0003f3b3) cell_vkbss_key_3p_pane_g2

0xf172,	// (0x0003f3bb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x00040141) cell_vkbss_key_3p_pane_g

0xf26e,	// (0x0003f4b7) bg_popup_fep_char_preview_window_cp02

0xf17a,	// (0x0003f3c3) popup_fep_char_pre_window_t1

0xe326,	// (0x0003e56f) main_ai5_sk_pane

0xea7f,	// (0x0003ecc8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xea8b,	// (0x0003ecd4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xea9b,	// (0x0003ece4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeaa7,	// (0x0003ecf0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00040117) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeab3,	// (0x0003ecfc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x24ca,	// (0x00032713) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf189,	// (0x0003f3d2) main_ai5_sk_pane_g1

0x95c3,	// (0x0003980c) popup_query_code_window_g1

0xef60,	// (0x0003f1a9) popup_fep_vkb_icf_pane

0xef76,	// (0x0003f1bf) popup_fep_vtchi_icf_pane

0x24ca,	// (0x00032713) bg_icf_pane

0xf192,	// (0x0003f3db) list_vkb_icf_pane

0x24ca,	// (0x00032713) bg_icf_pane_cp01

0xf19e,	// (0x0003f3e7) vtchi_icf_list_pane

0xf1af,	// (0x0003f3f8) list_vkb_icf_pane_t1_ParamLimits

0xf1af,	// (0x0003f3f8) list_vkb_icf_pane_t1

0xf1c6,	// (0x0003f40f) vtchi_icf_list_pane_t1_ParamLimits

0xf1c6,	// (0x0003f40f) vtchi_icf_list_pane_t1

0xef4a,	// (0x0003f193) popup_fep_ituss_window_ParamLimits

0xef76,	// (0x0003f1bf) popup_fep_vtchi_icf_pane_ParamLimits

0xef9c,	// (0x0003f1e5) ituss_keypad_pane_ParamLimits

0xefac,	// (0x0003f1f5) ituss_sks_pane

0x24ca,	// (0x00032713) bg_icf_pane_ParamLimits

0xef33,	// (0x0003f17c) icf_edit_indi_pane_ParamLimits

0xef33,	// (0x0003f17c) icf_edit_indi_pane

0xf192,	// (0x0003f3db) list_vkb_icf_pane_ParamLimits

0x24ca,	// (0x00032713) bg_icf_pane_cp01_ParamLimits

0xef33,	// (0x0003f17c) icf_edit_indi_pane_cp01_ParamLimits

0xef33,	// (0x0003f17c) icf_edit_indi_pane_cp01

0xf1a6,	// (0x0003f3ef) vtchi_query_pane

0xba3e,	// (0x0003bc87) icf_edit_indi_pane_g1_ParamLimits

0xba3e,	// (0x0003bc87) icf_edit_indi_pane_g1

0xf249,	// (0x0003f492) icf_edit_indi_pane_g2_ParamLimits

0xf249,	// (0x0003f492) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x00040159) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x00040159) icf_edit_indi_pane_g

0xf258,	// (0x0003f4a1) icf_edit_indi_pane_t1

0xf1df,	// (0x0003f428) bg_input_focus_pane_cp042

0x2403,	// (0x0003264c) vtchi_button_pane

0xf1e8,	// (0x0003f431) vtchi_query_pane_t1

0xf1f6,	// (0x0003f43f) vtchi_query_pane_t2

0xf204,	// (0x0003f44d) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x00040148) vtchi_query_pane_t

0xf26e,	// (0x0003f4b7) bg_button_pane_cp13

0xf212,	// (0x0003f45b) vtchi_button_pane_g1

0xf21a,	// (0x0003f463) ituss_sks_pane_g1

0xf225,	// (0x0003f46e) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0004014f) ituss_sks_pane_g

0xf22d,	// (0x0003f476) ituss_sks_pane_t1

0xf23b,	// (0x0003f484) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x00040154) ituss_sks_pane_t

0xb26d,	// (0x0003b4b6) indicator_nsta_pane_cp_g1

0xb276,	// (0x0003b4bf) indicator_nsta_pane_cp_g2

0xb27e,	// (0x0003b4c7) indicator_nsta_pane_cp_g3

0xb286,	// (0x0003b4cf) indicator_nsta_pane_cp_g4

0xb28e,	// (0x0003b4d7) indicator_nsta_pane_cp_g5

0xb296,	// (0x0003b4df) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0003fcf5) indicator_nsta_pane_cp_g

0xda11,	// (0x0003dc5a) cell_graphic2_pane_t2_ParamLimits

0xda11,	// (0x0003dc5a) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0004000e) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0004000e) cell_graphic2_pane_t

0xda3e,	// (0x0003dc87) cell_graphic2_control_pane_t1

0x643e,	// (0x00036687) signal_pane_g3_ParamLimits

0x643e,	// (0x00036687) signal_pane_g3

0x6450,	// (0x00036699) signal_pane_g4_ParamLimits

0x6450,	// (0x00036699) signal_pane_g4

0xef1d,	// (0x0003f166) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xef1d,	// (0x0003f166) cell_ai5_widget_list_row_pane_t3

0xf08f,	// (0x0003f2d8) cell_ituss_key_pane_t1_ParamLimits

0xf08f,	// (0x0003f2d8) cell_ituss_key_pane_t1

0x9240,	// (0x00039489) form_field_data_wide_pane_vc_t2_ParamLimits

0x9240,	// (0x00039489) form_field_data_wide_pane_vc_t2

0x9254,	// (0x0003949d) form_field_data_wide_pane_vc_t3_ParamLimits

0x9254,	// (0x0003949d) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0003fa58) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0003fa58) form_field_data_wide_pane_vc_t

0xaf12,	// (0x0003b15b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xaf12,	// (0x0003b15b) form_field_slider_wide_pane_vc_t3

0xafee,	// (0x0003b237) form_field_popup_wide_pane_vc_t2_ParamLimits

0xafee,	// (0x0003b237) form_field_popup_wide_pane_vc_t2

0xb005,	// (0x0003b24e) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb005,	// (0x0003b24e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0003fce4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0003fce4) form_field_popup_wide_pane_vc_t

0x85eb,	// (0x00038834) aid_fshwr2_btn_pane_ParamLimits

0x85f7,	// (0x00038840) aid_fshwr2_syb_pane_ParamLimits

0x8608,	// (0x00038851) aid_fshwr2_txt_pane_ParamLimits

0x7e27,	// (0x00038070) fshwr2_bg_pane_ParamLimits

0x8614,	// (0x0003885d) fshwr2_func_candi_pane_ParamLimits

0x8625,	// (0x0003886e) fshwr2_hwr_syb_pane_ParamLimits

0x8638,	// (0x00038881) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
