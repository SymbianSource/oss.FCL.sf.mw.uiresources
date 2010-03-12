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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00036d16 };

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
0x945c,	// (0x00040172) Screen

0x9468,	// (0x0004017e) application_window_ParamLimits

0x9468,	// (0x0004017e) application_window

0x87ab,	// (0x0003f4c1) screen_g1

0x94a0,	// (0x000401b6) area_bottom_pane_ParamLimits

0x94a0,	// (0x000401b6) area_bottom_pane

0xeac7,	// (0x000457dd) area_top_pane_ParamLimits

0xeac7,	// (0x000457dd) area_top_pane

0xeb65,	// (0x0004587b) main_pane_ParamLimits

0xeb65,	// (0x0004587b) main_pane

0x87b5,	// (0x0003f4cb) misc_graphics

0xad59,	// (0x00041a6f) battery_pane_ParamLimits

0xad59,	// (0x00041a6f) battery_pane

0x2e98,	// (0x00039bae) bg_status_flat_pane_g8

0x2ea0,	// (0x00039bb6) bg_status_flat_pane_g9

0x221a,	// (0x00038f30) context_pane_ParamLimits

0x221a,	// (0x00038f30) context_pane

0xc078,	// (0x00042d8e) navi_pane_ParamLimits

0xc078,	// (0x00042d8e) navi_pane

0xc102,	// (0x00042e18) signal_pane_ParamLimits

0xc102,	// (0x00042e18) signal_pane

0x0008,

0xf87a,	// (0x00046590) bg_status_flat_pane_g

0xc192,	// (0x00042ea8) status_pane_g1_ParamLimits

0xc192,	// (0x00042ea8) status_pane_g1

0xc1a8,	// (0x00042ebe) status_pane_g2_ParamLimits

0xc1a8,	// (0x00042ebe) status_pane_g2

0x245b,	// (0x00039171) status_pane_g3_ParamLimits

0x245b,	// (0x00039171) status_pane_g3

0x0004,

0xf7a6,	// (0x000464bc) status_pane_g_ParamLimits

0xf7a6,	// (0x000464bc) status_pane_g

0xc1b4,	// (0x00042eca) title_pane_ParamLimits

0xc1b4,	// (0x00042eca) title_pane

0xc217,	// (0x00042f2d) uni_indicator_pane_ParamLimits

0xc217,	// (0x00042f2d) uni_indicator_pane

0x206c,	// (0x00038d82) bg_list_pane_ParamLimits

0x206c,	// (0x00038d82) bg_list_pane

0xa5a1,	// (0x000412b7) find_pane

0xa5a9,	// (0x000412bf) listscroll_app_pane_ParamLimits

0xa5a9,	// (0x000412bf) listscroll_app_pane

0x20a0,	// (0x00038db6) listscroll_form_pane

0x9448,	// (0x0004015e) listscroll_gen_pane_ParamLimits

0x9448,	// (0x0004015e) listscroll_gen_pane

0x20a0,	// (0x00038db6) listscroll_set_pane

0x3a51,	// (0x0003a767) main_idle_act_pane

0x1d6e,	// (0x00038a84) main_idle_trad_pane

0x1d6e,	// (0x00038a84) main_list_empty_pane

0x20ba,	// (0x00038dd0) main_midp_pane

0x20c6,	// (0x00038ddc) main_pane_g1_ParamLimits

0x20c6,	// (0x00038ddc) main_pane_g1

0xa5b5,	// (0x000412cb) popup_ai_message_window_ParamLimits

0xa5b5,	// (0x000412cb) popup_ai_message_window

0xa655,	// (0x0004136b) popup_fep_china_uni_window_ParamLimits

0xa655,	// (0x0004136b) popup_fep_china_uni_window

0x0260,	// (0x00036f76) popup_fep_japan_candidate_window_ParamLimits

0x0260,	// (0x00036f76) popup_fep_japan_candidate_window

0x028a,	// (0x00036fa0) popup_fep_japan_predictive_window_ParamLimits

0x028a,	// (0x00036fa0) popup_fep_japan_predictive_window

0xa6b5,	// (0x000413cb) popup_find_window

0xa6d2,	// (0x000413e8) popup_grid_graphic_window_ParamLimits

0xa6d2,	// (0x000413e8) popup_grid_graphic_window

0x02fb,	// (0x00037011) popup_large_graphic_colour_window

0xa776,	// (0x0004148c) popup_menu_window_ParamLimits

0xa776,	// (0x0004148c) popup_menu_window

0xa966,	// (0x0004167c) popup_note_image_window

0xa926,	// (0x0004163c) popup_note_wait_window_ParamLimits

0xa926,	// (0x0004163c) popup_note_wait_window

0xa97e,	// (0x00041694) popup_note_window_ParamLimits

0xa97e,	// (0x00041694) popup_note_window

0xaa2c,	// (0x00041742) popup_query_code_window_ParamLimits

0xaa2c,	// (0x00041742) popup_query_code_window

0x0567,	// (0x0003727d) popup_query_data_code_window_ParamLimits

0x0567,	// (0x0003727d) popup_query_data_code_window

0xaa6c,	// (0x00041782) popup_query_data_window_ParamLimits

0xaa6c,	// (0x00041782) popup_query_data_window

0xab00,	// (0x00041816) popup_query_sat_info_window_ParamLimits

0xab00,	// (0x00041816) popup_query_sat_info_window

0xabab,	// (0x000418c1) popup_snote_single_graphic_window_ParamLimits

0xabab,	// (0x000418c1) popup_snote_single_graphic_window

0xabab,	// (0x000418c1) popup_snote_single_text_window_ParamLimits

0xabab,	// (0x000418c1) popup_snote_single_text_window

0x0602,	// (0x00037318) popup_sub_window_general

0x0748,	// (0x0003745e) popup_window_general_ParamLimits

0x0748,	// (0x0003745e) popup_window_general

0x20d4,	// (0x00038dea) power_save_pane

0xa40f,	// (0x00041125) control_pane_g1_ParamLimits

0xa40f,	// (0x00041125) control_pane_g1

0xa438,	// (0x0004114e) control_pane_g2_ParamLimits

0xa438,	// (0x0004114e) control_pane_g2

0x202f,	// (0x00038d45) control_pane_g3_ParamLimits

0x202f,	// (0x00038d45) control_pane_g3

0x0007,

0xf78e,	// (0x000464a4) control_pane_g_ParamLimits

0xf78e,	// (0x000464a4) control_pane_g

0xa49a,	// (0x000411b0) control_pane_t1_ParamLimits

0xa49a,	// (0x000411b0) control_pane_t1

0xa4f8,	// (0x0004120e) control_pane_t2_ParamLimits

0xa4f8,	// (0x0004120e) control_pane_t2

0x0002,

0xf79f,	// (0x000464b5) control_pane_t_ParamLimits

0xf79f,	// (0x000464b5) control_pane_t

0x1f50,	// (0x00038c66) navi_navi_volume_pane_cp1

0x1f59,	// (0x00038c6f) status_small_icon_pane

0x1f61,	// (0x00038c77) status_small_pane_g1_ParamLimits

0x1f61,	// (0x00038c77) status_small_pane_g1

0x1f95,	// (0x00038cab) status_small_pane_g2_ParamLimits

0x1f95,	// (0x00038cab) status_small_pane_g2

0x1fa1,	// (0x00038cb7) status_small_pane_g3_ParamLimits

0x1fa1,	// (0x00038cb7) status_small_pane_g3

0x1fad,	// (0x00038cc3) status_small_pane_g4_ParamLimits

0x1fad,	// (0x00038cc3) status_small_pane_g4

0x1fb9,	// (0x00038ccf) status_small_pane_g5_ParamLimits

0x1fb9,	// (0x00038ccf) status_small_pane_g5

0x1fc8,	// (0x00038cde) status_small_pane_g6_ParamLimits

0x1fc8,	// (0x00038cde) status_small_pane_g6

0x0007,

0xf77d,	// (0x00046493) status_small_pane_g_ParamLimits

0xf77d,	// (0x00046493) status_small_pane_g

0x1ff8,	// (0x00038d0e) status_small_pane_t1

0x201b,	// (0x00038d31) status_small_wait_pane_ParamLimits

0x201b,	// (0x00038d31) status_small_wait_pane

0xa159,	// (0x00040e6f) aid_levels_signal_ParamLimits

0xa159,	// (0x00040e6f) aid_levels_signal

0xa171,	// (0x00040e87) signal_pane_g1_ParamLimits

0xa171,	// (0x00040e87) signal_pane_g1

0xa18c,	// (0x00040ea2) signal_pane_g2_ParamLimits

0xa18c,	// (0x00040ea2) signal_pane_g2

0x0003,

0xf70e,	// (0x00046424) signal_pane_g_ParamLimits

0xf70e,	// (0x00046424) signal_pane_g

0xf08a,	// (0x00045da0) context_pane_g1

0x961d,	// (0x00040333) title_pane_g1

0x9654,	// (0x0004036a) title_pane_t1

0x87cb,	// (0x0003f4e1) title_pane_t2

0x87f1,	// (0x0003f507) title_pane_t3

0x0002,

0xf55d,	// (0x00046273) title_pane_t

0xc23f,	// (0x00042f55) aid_levels_battery_ParamLimits

0xc23f,	// (0x00042f55) aid_levels_battery

0xc25b,	// (0x00042f71) battery_pane_g1_ParamLimits

0xc25b,	// (0x00042f71) battery_pane_g1

0xc278,	// (0x00042f8e) battery_pane_g2_ParamLimits

0xc278,	// (0x00042f8e) battery_pane_g2

0x0001,

0xf7b1,	// (0x000464c7) battery_pane_g_ParamLimits

0xf7b1,	// (0x000464c7) battery_pane_g

0xc52e,	// (0x00043244) uni_indicator_pane_g1

0xc543,	// (0x00043259) uni_indicator_pane_g2

0xc558,	// (0x0004326e) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x00046638) uni_indicator_pane_g

0x1bdc,	// (0x000388f2) navi_icon_pane_ParamLimits

0x1bdc,	// (0x000388f2) navi_icon_pane

0xf45f,	// (0x00046175) navi_midp_pane

0x1bf8,	// (0x0003890e) navi_navi_pane

0x1c02,	// (0x00038918) navi_text_pane_ParamLimits

0x1c02,	// (0x00038918) navi_text_pane

0x87ab,	// (0x0003f4c1) status_small_wait_pane_g1

0xb74d,	// (0x00042463) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x00046633) status_small_wait_pane_g

0xc495,	// (0x000431ab) navi_navi_icon_text_pane

0xc49d,	// (0x000431b3) navi_navi_pane_g1_ParamLimits

0xc49d,	// (0x000431b3) navi_navi_pane_g1

0xc4af,	// (0x000431c5) navi_navi_pane_g2_ParamLimits

0xc4af,	// (0x000431c5) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x00046601) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x00046601) navi_navi_pane_g

0x3527,	// (0x0003a23d) navi_navi_tabs_pane

0xc4c1,	// (0x000431d7) navi_navi_text_pane

0xc495,	// (0x000431ab) navi_navi_volume_pane

0xc483,	// (0x00043199) navi_text_pane_t1

0xc477,	// (0x0004318d) navi_icon_pane_g1

0x3418,	// (0x0003a12e) navi_navi_text_pane_t1

0xafa0,	// (0x00041cb6) navi_navi_volume_pane_g1

0xafa8,	// (0x00041cbe) volume_small_pane

0xc3bf,	// (0x000430d5) navi_navi_icon_text_pane_g1

0xc3c7,	// (0x000430dd) navi_navi_icon_text_pane_t1

0x1bf8,	// (0x0003890e) navi_tabs_2_long_pane

0x1bf8,	// (0x0003890e) navi_tabs_2_pane

0x1bf8,	// (0x0003890e) navi_tabs_3_long_pane

0x1bf8,	// (0x0003890e) navi_tabs_3_pane

0x1bf8,	// (0x0003890e) navi_tabs_4_pane

0xaf80,	// (0x00041c96) tabs_2_active_pane_ParamLimits

0xaf80,	// (0x00041c96) tabs_2_active_pane

0xaf90,	// (0x00041ca6) tabs_2_passive_pane_ParamLimits

0xaf90,	// (0x00041ca6) tabs_2_passive_pane

0xaf4e,	// (0x00041c64) tabs_3_active_pane_ParamLimits

0xaf4e,	// (0x00041c64) tabs_3_active_pane

0xaf5e,	// (0x00041c74) tabs_3_passive_pane_ParamLimits

0xaf5e,	// (0x00041c74) tabs_3_passive_pane

0xaf6f,	// (0x00041c85) tabs_3_passive_pane_cp_ParamLimits

0xaf6f,	// (0x00041c85) tabs_3_passive_pane_cp

0xaf0a,	// (0x00041c20) tabs_4_active_pane_ParamLimits

0xaf0a,	// (0x00041c20) tabs_4_active_pane

0xaf1b,	// (0x00041c31) tabs_4_passive_pane_ParamLimits

0xaf1b,	// (0x00041c31) tabs_4_passive_pane

0xaf2c,	// (0x00041c42) tabs_4_passive_pane_cp_ParamLimits

0xaf2c,	// (0x00041c42) tabs_4_passive_pane_cp

0xaf3d,	// (0x00041c53) tabs_4_passive_pane_cp2_ParamLimits

0xaf3d,	// (0x00041c53) tabs_4_passive_pane_cp2

0xaee6,	// (0x00041bfc) tabs_2_long_active_pane_ParamLimits

0xaee6,	// (0x00041bfc) tabs_2_long_active_pane

0xaef8,	// (0x00041c0e) tabs_2_long_passive_pane_ParamLimits

0xaef8,	// (0x00041c0e) tabs_2_long_passive_pane

0xae9b,	// (0x00041bb1) tabs_3_long_active_pane_ParamLimits

0xae9b,	// (0x00041bb1) tabs_3_long_active_pane

0xaeb4,	// (0x00041bca) tabs_3_long_passive_pane_ParamLimits

0xaeb4,	// (0x00041bca) tabs_3_long_passive_pane

0xaecd,	// (0x00041be3) tabs_3_long_passive_pane_cp_ParamLimits

0xaecd,	// (0x00041be3) tabs_3_long_passive_pane_cp

0x08cd,	// (0x000375e3) volume_small_pane_g1

0xae4a,	// (0x00041b60) volume_small_pane_g2

0xae53,	// (0x00041b69) volume_small_pane_g3

0xae5c,	// (0x00041b72) volume_small_pane_g4

0xae65,	// (0x00041b7b) volume_small_pane_g5

0xae6e,	// (0x00041b84) volume_small_pane_g6

0xae77,	// (0x00041b8d) volume_small_pane_g7

0xae80,	// (0x00041b96) volume_small_pane_g8

0xae89,	// (0x00041b9f) volume_small_pane_g9

0xae92,	// (0x00041ba8) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x000465cd) volume_small_pane_g

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp2_ParamLimits

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp2

0x96e0,	// (0x000403f6) tabs_3_active_pane_g1

0x96e8,	// (0x000403fe) tabs_3_active_pane_t1

0x8936,	// (0x0003f64c) bg_passive_tab_pane_cp2_ParamLimits

0x8936,	// (0x0003f64c) bg_passive_tab_pane_cp2

0x96e0,	// (0x000403f6) tabs_3_passive_pane_g1

0x96e8,	// (0x000403fe) tabs_3_passive_pane_t1

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp3_ParamLimits

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp3

0x96fa,	// (0x00040410) tabs_4_active_pane_g1

0x9702,	// (0x00040418) tabs_4_active_pane_t1

0x8936,	// (0x0003f64c) bg_passive_tab_pane_cp3_ParamLimits

0x8936,	// (0x0003f64c) bg_passive_tab_pane_cp3

0x96fa,	// (0x00040410) tabs_4_1_passive_pane_g1

0x9702,	// (0x00040418) tabs_4_1_passive_pane_t1

0x20ba,	// (0x00038dd0) list_highlight_pane_cp2

0xc616,	// (0x0004332c) list_set_pane_ParamLimits

0xc616,	// (0x0004332c) list_set_pane

0xc6de,	// (0x000433f4) main_pane_set_t1_ParamLimits

0xc6de,	// (0x000433f4) main_pane_set_t1

0xc6fe,	// (0x00043414) main_pane_set_t2_ParamLimits

0xc6fe,	// (0x00043414) main_pane_set_t2

0xc712,	// (0x00043428) main_pane_set_t3_ParamLimits

0xc712,	// (0x00043428) main_pane_set_t3

0xc726,	// (0x0004343c) main_pane_set_t4_ParamLimits

0xc726,	// (0x0004343c) main_pane_set_t4

0x0003,

0xf987,	// (0x0004669d) main_pane_set_t_ParamLimits

0xf987,	// (0x0004669d) main_pane_set_t

0xc73a,	// (0x00043450) setting_code_pane

0x3ba5,	// (0x0003a8bb) setting_slider_graphic_pane

0x3ba5,	// (0x0003a8bb) setting_slider_pane

0x3ba5,	// (0x0003a8bb) setting_text_pane

0x3ba5,	// (0x0003a8bb) setting_volume_pane

0xece1,	// (0x000459f7) volume_set_pane

0x8803,	// (0x0003f519) bg_set_opt_pane_cp

0xeceb,	// (0x00045a01) setting_slider_pane_t1

0xed04,	// (0x00045a1a) setting_slider_pane_t2

0xed1e,	// (0x00045a34) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004627a) setting_slider_pane_t

0xed36,	// (0x00045a4c) slider_set_pane

0x87b5,	// (0x0003f4cb) bg_set_opt_pane_cp2

0x8811,	// (0x0003f527) setting_slider_graphic_pane_g1

0xed4c,	// (0x00045a62) setting_slider_graphic_pane_t1

0xed5c,	// (0x00045a72) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00046281) setting_slider_graphic_pane_t

0xed6c,	// (0x00045a82) slider_set_pane_cp

0x87b5,	// (0x0003f4cb) input_focus_pane_cp1

0x3a38,	// (0x0003a74e) list_set_text_pane

0x87ab,	// (0x0003f4c1) setting_text_pane_g1

0x87b5,	// (0x0003f4cb) input_focus_pane_cp2

0x87ab,	// (0x0003f4c1) setting_code_pane_g1

0x881a,	// (0x0003f530) setting_code_pane_t1

0xd25f,	// (0x00043f75) set_text_pane_t1_ParamLimits

0xd25f,	// (0x00043f75) set_text_pane_t1

0xbaee,	// (0x00042804) set_opt_bg_pane_g1

0xbaf6,	// (0x0004280c) set_opt_bg_pane_g2

0x3a10,	// (0x0003a726) set_opt_bg_pane_g3

0xbb06,	// (0x0004281c) set_opt_bg_pane_g4

0xbb0e,	// (0x00042824) set_opt_bg_pane_g5

0xbb16,	// (0x0004282c) set_opt_bg_pane_g6

0x3a1a,	// (0x0003a730) set_opt_bg_pane_g7

0x3a24,	// (0x0003a73a) set_opt_bg_pane_g8

0x3a2e,	// (0x0003a744) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0004668a) set_opt_bg_pane_g

0x3a03,	// (0x0003a719) slider_set_pane_g1

0x0ad9,	// (0x000377ef) slider_set_pane_g2

0x0006,

0xf965,	// (0x0004667b) slider_set_pane_g

0x0a39,	// (0x0003774f) volume_set_pane_g1

0x0a43,	// (0x00037759) volume_set_pane_g2

0x0a4d,	// (0x00037763) volume_set_pane_g3

0x0a57,	// (0x0003776d) volume_set_pane_g4

0x0a61,	// (0x00037777) volume_set_pane_g5

0x0a6b,	// (0x00037781) volume_set_pane_g6

0x0a75,	// (0x0003778b) volume_set_pane_g7

0x0a7f,	// (0x00037795) volume_set_pane_g8

0x0a89,	// (0x0003779f) volume_set_pane_g9

0x0a93,	// (0x000377a9) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00046653) volume_set_pane_g

0x9714,	// (0x0004042a) indicator_pane_ParamLimits

0x9714,	// (0x0004042a) indicator_pane

0x9740,	// (0x00040456) main_idle_pane_g2_ParamLimits

0x9740,	// (0x00040456) main_idle_pane_g2

0x9778,	// (0x0004048e) main_pane_idle_g1_ParamLimits

0x9778,	// (0x0004048e) main_pane_idle_g1

0x8828,	// (0x0003f53e) popup_clock_digital_analogue_window_ParamLimits

0x8828,	// (0x0003f53e) popup_clock_digital_analogue_window

0x97a6,	// (0x000404bc) soft_indicator_pane_ParamLimits

0x97a6,	// (0x000404bc) soft_indicator_pane

0x97c2,	// (0x000404d8) wallpaper_pane_ParamLimits

0x97c2,	// (0x000404d8) wallpaper_pane

0x87ab,	// (0x0003f4c1) wallpaper_pane_g1

0x97d4,	// (0x000404ea) indicator_pane_g1_ParamLimits

0x97d4,	// (0x000404ea) indicator_pane_g1

0x3e55,	// (0x0003ab6b) navi_navi_icon_text_pane_srt_g1

0x8856,	// (0x0003f56c) soft_indicator_pane_t1

0x8870,	// (0x0003f586) aid_ps_area_pane

0x97ed,	// (0x00040503) aid_ps_clock_pane

0x8881,	// (0x0003f597) aid_ps_indicator_pane

0x888d,	// (0x0003f5a3) indicator_ps_pane_ParamLimits

0x888d,	// (0x0003f5a3) indicator_ps_pane

0x889c,	// (0x0003f5b2) power_save_pane_g1_ParamLimits

0x889c,	// (0x0003f5b2) power_save_pane_g1

0x88a8,	// (0x0003f5be) power_save_pane_g2_ParamLimits

0x88a8,	// (0x0003f5be) power_save_pane_g2

0xeaa7,	// (0x000457bd) aid_navinavi_width_pane

0x8870,	// (0x0003f586) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00046286) power_save_pane_g_ParamLimits

0xf570,	// (0x00046286) power_save_pane_g

0x88b6,	// (0x0003f5cc) power_save_pane_t1_ParamLimits

0x88b6,	// (0x0003f5cc) power_save_pane_t1

0x97ed,	// (0x00040503) aid_ps_clock_pane_ParamLimits

0x8881,	// (0x0003f597) aid_ps_indicator_pane_ParamLimits

0x88c8,	// (0x0003f5de) power_save_pane_t4_ParamLimits

0x88c8,	// (0x0003f5de) power_save_pane_t4

0x0001,

0xf575,	// (0x0004628b) power_save_pane_t_ParamLimits

0xf575,	// (0x0004628b) power_save_pane_t

0x88f2,	// (0x0003f608) power_save_t3_ParamLimits

0x88f2,	// (0x0003f608) power_save_t3

0x88dd,	// (0x0003f5f3) power_save_t2_ParamLimits

0x88dd,	// (0x0003f5f3) power_save_t2

0x8907,	// (0x0003f61d) indicator_ps_pane_g1

0x97fb,	// (0x00040511) ai_gene_pane_ParamLimits

0x97fb,	// (0x00040511) ai_gene_pane

0x9812,	// (0x00040528) ai_links_pane_ParamLimits

0x9812,	// (0x00040528) ai_links_pane

0x982a,	// (0x00040540) indicator_pane_cp1_ParamLimits

0x982a,	// (0x00040540) indicator_pane_cp1

0x9839,	// (0x0004054f) main_pane_idle_g1_cp_ParamLimits

0x9839,	// (0x0004054f) main_pane_idle_g1_cp

0x8910,	// (0x0003f626) popup_ai_links_title_window

0x9851,	// (0x00040567) soft_indicator_pane_cp1_ParamLimits

0x9851,	// (0x00040567) soft_indicator_pane_cp1

0x37d6,	// (0x0003a4ec) ai_links_pane_g1

0x37df,	// (0x0003a4f5) grid_ai_links_pane

0xc525,	// (0x0004323b) ai_gene_pane_1

0x37c4,	// (0x0003a4da) ai_gene_pane_2

0x37cd,	// (0x0003a4e3) list_highlight_pane_cp4

0xc501,	// (0x00043217) cell_ai_link_pane_ParamLimits

0xc501,	// (0x00043217) cell_ai_link_pane

0x3793,	// (0x0003a4a9) cell_ai_link_pane_g1

0xb74d,	// (0x00042463) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0004662e) cell_ai_link_pane_g

0x87b5,	// (0x0003f4cb) grid_highlight_cp2

0x87b5,	// (0x0003f4cb) bg_popup_sub_pane_cp1

0x8927,	// (0x0003f63d) popup_ai_links_title_window_t1

0x36df,	// (0x0003a3f5) ai_gene_pane_1_g1_ParamLimits

0x36df,	// (0x0003a3f5) ai_gene_pane_1_g1

0x36eb,	// (0x0003a401) ai_gene_pane_1_g2_ParamLimits

0x36eb,	// (0x0003a401) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00046624) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00046624) ai_gene_pane_1_g

0x36f8,	// (0x0003a40e) ai_gene_pane_1_t1_ParamLimits

0x36f8,	// (0x0003a40e) ai_gene_pane_1_t1

0x372c,	// (0x0003a442) grid_ai_soft_ind_pane

0x36ca,	// (0x0003a3e0) ai_gene_pane_2_t1_ParamLimits

0x36ca,	// (0x0003a3e0) ai_gene_pane_2_t1

0x9865,	// (0x0004057b) main_pane_empty_t1_ParamLimits

0x9865,	// (0x0004057b) main_pane_empty_t1

0x987d,	// (0x00040593) main_pane_empty_t2_ParamLimits

0x987d,	// (0x00040593) main_pane_empty_t2

0x9892,	// (0x000405a8) main_pane_empty_t3_ParamLimits

0x9892,	// (0x000405a8) main_pane_empty_t3

0x98a4,	// (0x000405ba) main_pane_empty_t4_ParamLimits

0x98a4,	// (0x000405ba) main_pane_empty_t4

0x98b6,	// (0x000405cc) main_pane_empty_t5_ParamLimits

0x98b6,	// (0x000405cc) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00046290) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00046290) main_pane_empty_t

0xbb3f,	// (0x00042855) bg_popup_window_pane_ParamLimits

0xbb3f,	// (0x00042855) bg_popup_window_pane

0x3426,	// (0x0003a13c) find_popup_pane_cp2_ParamLimits

0x3426,	// (0x0003a13c) find_popup_pane_cp2

0x3432,	// (0x0003a148) heading_pane_ParamLimits

0x3432,	// (0x0003a148) heading_pane

0x87b5,	// (0x0003f4cb) bg_popup_sub_pane

0xc3e4,	// (0x000430fa) bg_popup_window_pane_g1_ParamLimits

0xc3e4,	// (0x000430fa) bg_popup_window_pane_g1

0xc3f3,	// (0x00043109) bg_popup_window_pane_g2_ParamLimits

0xc3f3,	// (0x00043109) bg_popup_window_pane_g2

0xc3ff,	// (0x00043115) bg_popup_window_pane_g3_ParamLimits

0xc3ff,	// (0x00043115) bg_popup_window_pane_g3

0xc40b,	// (0x00043121) bg_popup_window_pane_g4_ParamLimits

0xc40b,	// (0x00043121) bg_popup_window_pane_g4

0xc41a,	// (0x00043130) bg_popup_window_pane_g5_ParamLimits

0xc41a,	// (0x00043130) bg_popup_window_pane_g5

0xc42a,	// (0x00043140) bg_popup_window_pane_g6_ParamLimits

0xc42a,	// (0x00043140) bg_popup_window_pane_g6

0xc436,	// (0x0004314c) bg_popup_window_pane_g7_ParamLimits

0xc436,	// (0x0004314c) bg_popup_window_pane_g7

0xc445,	// (0x0004315b) bg_popup_window_pane_g8_ParamLimits

0xc445,	// (0x0004315b) bg_popup_window_pane_g8

0xc454,	// (0x0004316a) bg_popup_window_pane_g9_ParamLimits

0xc454,	// (0x0004316a) bg_popup_window_pane_g9

0x340c,	// (0x0003a122) bg_popup_window_pane_g10_ParamLimits

0x340c,	// (0x0003a122) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x000465ec) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x000465ec) bg_popup_window_pane_g

0x3335,	// (0x0003a04b) bg_popup_heading_pane_ParamLimits

0x3335,	// (0x0003a04b) bg_popup_heading_pane

0x0bea,	// (0x00037900) tabs_4_passive_pane_cp_srt_ParamLimits

0x0bea,	// (0x00037900) tabs_4_passive_pane_cp_srt

0x0bfc,	// (0x00037912) tabs_4_passive_pane_srt_ParamLimits

0x3349,	// (0x0003a05f) heading_pane_g2

0x0bfc,	// (0x00037912) tabs_4_passive_pane_srt

0x26e2,	// (0x000393f8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x26e2,	// (0x000393f8) bg_passive_tab_pane_cp3_srt

0x3351,	// (0x0003a067) heading_pane_t1_ParamLimits

0x3351,	// (0x0003a067) heading_pane_t1

0x3368,	// (0x0003a07e) heading_pane_t2_ParamLimits

0x3368,	// (0x0003a07e) heading_pane_t2

0x0001,

0xf8d1,	// (0x000465e7) heading_pane_t_ParamLimits

0xf8d1,	// (0x000465e7) heading_pane_t

0x2e60,	// (0x00039b76) bg_popup_heading_pane_g1

0x2f0f,	// (0x00039c25) bg_popup_heading_pane_g2

0x2f19,	// (0x00039c2f) bg_popup_heading_pane_g3

0x2f23,	// (0x00039c39) bg_popup_heading_pane_g4

0x2f2d,	// (0x00039c43) bg_popup_heading_pane_g5

0x2f37,	// (0x00039c4d) bg_popup_heading_pane_g6

0x2f3f,	// (0x00039c55) bg_popup_heading_pane_g7

0x2f47,	// (0x00039c5d) bg_popup_heading_pane_g8

0x2f51,	// (0x00039c67) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x000465a3) bg_popup_heading_pane_g

0x25e6,	// (0x000392fc) bg_popup_sub_pane_g1

0x25f6,	// (0x0003930c) bg_popup_sub_pane_g2

0x25ee,	// (0x00039304) bg_popup_sub_pane_g3

0x2606,	// (0x0003931c) bg_popup_sub_pane_g4

0x25fe,	// (0x00039314) bg_popup_sub_pane_g5

0x260e,	// (0x00039324) bg_popup_sub_pane_g6

0x2616,	// (0x0003932c) bg_popup_sub_pane_g7

0x2626,	// (0x0003933c) bg_popup_sub_pane_g8

0x261e,	// (0x00039334) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0004657d) bg_popup_sub_pane_g

0x8936,	// (0x0003f64c) bg_popup_window_pane_cp5_ParamLimits

0x8936,	// (0x0003f64c) bg_popup_window_pane_cp5

0x8952,	// (0x0003f668) popup_note_window_g1_ParamLimits

0x8952,	// (0x0003f668) popup_note_window_g1

0x895e,	// (0x0003f674) popup_note_window_t1_ParamLimits

0x895e,	// (0x0003f674) popup_note_window_t1

0x8974,	// (0x0003f68a) popup_note_window_t2_ParamLimits

0x8974,	// (0x0003f68a) popup_note_window_t2

0x898a,	// (0x0003f6a0) popup_note_window_t3_ParamLimits

0x898a,	// (0x0003f6a0) popup_note_window_t3

0x89a0,	// (0x0003f6b6) popup_note_window_t4_ParamLimits

0x89a0,	// (0x0003f6b6) popup_note_window_t4

0x89c8,	// (0x0003f6de) popup_note_window_t5_ParamLimits

0x89c8,	// (0x0003f6de) popup_note_window_t5

0x0004,

0xf585,	// (0x0004629b) popup_note_window_t_ParamLimits

0xf585,	// (0x0004629b) popup_note_window_t

0x89ec,	// (0x0003f702) bg_popup_window_pane_cp6_ParamLimits

0x89ec,	// (0x0003f702) bg_popup_window_pane_cp6

0x2ddc,	// (0x00039af2) popup_note_image_window_g1_ParamLimits

0x2ddc,	// (0x00039af2) popup_note_image_window_g1

0x2de8,	// (0x00039afe) popup_note_image_window_g2_ParamLimits

0x2de8,	// (0x00039afe) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x00046571) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x00046571) popup_note_image_window_g

0x2e01,	// (0x00039b17) popup_note_image_window_t1_ParamLimits

0x2e01,	// (0x00039b17) popup_note_image_window_t1

0x2e1a,	// (0x00039b30) popup_note_image_window_t2_ParamLimits

0x2e1a,	// (0x00039b30) popup_note_image_window_t2

0x2e33,	// (0x00039b49) popup_note_image_window_t3_ParamLimits

0x2e33,	// (0x00039b49) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00046576) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00046576) popup_note_image_window_t

0x2c9c,	// (0x000399b2) bg_popup_window_pane_cp7_ParamLimits

0x2c9c,	// (0x000399b2) bg_popup_window_pane_cp7

0x2ccc,	// (0x000399e2) popup_note_wait_window_g1_ParamLimits

0x2ccc,	// (0x000399e2) popup_note_wait_window_g1

0x2cd8,	// (0x000399ee) popup_note_wait_window_g2_ParamLimits

0x2cd8,	// (0x000399ee) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0004655f) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0004655f) popup_note_wait_window_g

0x2cf0,	// (0x00039a06) popup_note_wait_window_t1_ParamLimits

0x2cf0,	// (0x00039a06) popup_note_wait_window_t1

0x2d17,	// (0x00039a2d) popup_note_wait_window_t2_ParamLimits

0x2d17,	// (0x00039a2d) popup_note_wait_window_t2

0x2d35,	// (0x00039a4b) popup_note_wait_window_t3_ParamLimits

0x2d35,	// (0x00039a4b) popup_note_wait_window_t3

0x2d48,	// (0x00039a5e) popup_note_wait_window_t4_ParamLimits

0x2d48,	// (0x00039a5e) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00046566) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00046566) popup_note_wait_window_t

0x2d6d,	// (0x00039a83) wait_bar_pane_ParamLimits

0x2d6d,	// (0x00039a83) wait_bar_pane

0x87b5,	// (0x0003f4cb) wait_anim_pane

0x87b5,	// (0x0003f4cb) wait_border_pane

0x87ab,	// (0x0003f4c1) wait_anim_pane_g1

0x87ab,	// (0x0003f4c1) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0004641f) wait_anim_pane_g

0x2c40,	// (0x00039956) wait_border_pane_g1

0x2c4b,	// (0x00039961) wait_border_pane_g2

0x2c54,	// (0x0003996a) wait_border_pane_g3

0x0002,

0xf842,	// (0x00046558) wait_border_pane_g

0x2aaa,	// (0x000397c0) bg_popup_window_pane_cp16_ParamLimits

0x2aaa,	// (0x000397c0) bg_popup_window_pane_cp16

0x2baa,	// (0x000398c0) indicator_popup_pane_cp4_ParamLimits

0x2baa,	// (0x000398c0) indicator_popup_pane_cp4

0x2bbe,	// (0x000398d4) popup_query_data_window_t1_ParamLimits

0x2bbe,	// (0x000398d4) popup_query_data_window_t1

0x2bd0,	// (0x000398e6) popup_query_data_window_t2_ParamLimits

0x2bd0,	// (0x000398e6) popup_query_data_window_t2

0x2be9,	// (0x000398ff) popup_query_data_window_t3_ParamLimits

0x2be9,	// (0x000398ff) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x00046551) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x00046551) popup_query_data_window_t

0x2c03,	// (0x00039919) query_popup_data_pane_ParamLimits

0x2c03,	// (0x00039919) query_popup_data_pane

0x2c17,	// (0x0003992d) query_popup_data_pane_cp1_ParamLimits

0x2c17,	// (0x0003992d) query_popup_data_pane_cp1

0x2aaa,	// (0x000397c0) bg_popup_window_pane_cp10_ParamLimits

0x2aaa,	// (0x000397c0) bg_popup_window_pane_cp10

0x2adc,	// (0x000397f2) indicator_popup_pane_ParamLimits

0x2adc,	// (0x000397f2) indicator_popup_pane

0x2afe,	// (0x00039814) popup_query_code_window_t1_ParamLimits

0x2afe,	// (0x00039814) popup_query_code_window_t1

0x2b18,	// (0x0003982e) popup_query_code_window_t2_ParamLimits

0x2b18,	// (0x0003982e) popup_query_code_window_t2

0x2b61,	// (0x00039877) popup_query_code_window_t3_ParamLimits

0x2b61,	// (0x00039877) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0004654a) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0004654a) popup_query_code_window_t

0x2b90,	// (0x000398a6) query_popup_pane_ParamLimits

0x2b90,	// (0x000398a6) query_popup_pane

0x89ec,	// (0x0003f702) bg_popup_window_pane_cp15_ParamLimits

0x89ec,	// (0x0003f702) bg_popup_window_pane_cp15

0x8a0c,	// (0x0003f722) indicator_popup_pane_cp1_ParamLimits

0x8a0c,	// (0x0003f722) indicator_popup_pane_cp1

0x8a1f,	// (0x0003f735) indicator_popup_pane_cp2_ParamLimits

0x8a1f,	// (0x0003f735) indicator_popup_pane_cp2

0x8a3a,	// (0x0003f750) popup_query_data_code_window_g1_ParamLimits

0x8a3a,	// (0x0003f750) popup_query_data_code_window_g1

0x8a4d,	// (0x0003f763) popup_query_data_code_window_t1_ParamLimits

0x8a4d,	// (0x0003f763) popup_query_data_code_window_t1

0x8a5f,	// (0x0003f775) popup_query_data_code_window_t2_ParamLimits

0x8a5f,	// (0x0003f775) popup_query_data_code_window_t2

0x8a71,	// (0x0003f787) popup_query_data_code_window_t3_ParamLimits

0x8a71,	// (0x0003f787) popup_query_data_code_window_t3

0xb6e8,	// (0x000423fe) popup_query_data_code_window_t4_ParamLimits

0xb6e8,	// (0x000423fe) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000462a6) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000462a6) popup_query_data_code_window_t

0x07b6,	// (0x000374cc) list_single_midp_graphic_pane_g3

0xb702,	// (0x00042418) query_popup_data_pane_cp2_ParamLimits

0xb715,	// (0x0004242b) query_popup_pane_cp2_ParamLimits

0xb715,	// (0x0004242b) query_popup_pane_cp2

0x87b5,	// (0x0003f4cb) bg_popup_window_pane_cp11

0x2aa2,	// (0x000397b8) heading_pane_cp5

0xb7ab,	// (0x000424c1) listscroll_popup_info_pane

0x87b5,	// (0x0003f4cb) input_focus_pane_cp3

0xb730,	// (0x00042446) query_popup_pane_t1

0xb73e,	// (0x00042454) list_popup_info_pane_ParamLimits

0xb73e,	// (0x00042454) list_popup_info_pane

0xb74d,	// (0x00042463) listscroll_popup_info_pane_g1

0xb755,	// (0x0004246b) scroll_pane_cp7

0xb75f,	// (0x00042475) popup_info_list_pane_t1_ParamLimits

0xb75f,	// (0x00042475) popup_info_list_pane_t1

0xb779,	// (0x0004248f) popup_info_list_pane_t2_ParamLimits

0xb779,	// (0x0004248f) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000462af) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000462af) popup_info_list_pane_t

0x87b5,	// (0x0003f4cb) bg_popup_window_pane_cp12

0x3e6f,	// (0x0003ab85) find_popup_pane

0x8803,	// (0x0003f519) bg_popup_window_pane_cp3

0xb793,	// (0x000424a9) heading_pane_cp3

0xb79f,	// (0x000424b5) listscroll_popup_graphic_pane

0x87b5,	// (0x0003f4cb) bg_popup_window_pane_cp4

0x9918,	// (0x0004062e) heading_pane_cp4

0xb7ab,	// (0x000424c1) listscroll_popup_colour_pane

0x9922,	// (0x00040638) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9922,	// (0x00040638) cell_large_graphic_colour_none_popup_pane

0x9936,	// (0x0004064c) grid_large_graphic_colour_popup_pane_ParamLimits

0x9936,	// (0x0004064c) grid_large_graphic_colour_popup_pane

0x995a,	// (0x00040670) listscroll_popup_colour_pane_g1_ParamLimits

0x995a,	// (0x00040670) listscroll_popup_colour_pane_g1

0x9971,	// (0x00040687) listscroll_popup_colour_pane_g2_ParamLimits

0x9971,	// (0x00040687) listscroll_popup_colour_pane_g2

0x9988,	// (0x0004069e) listscroll_popup_colour_pane_g3_ParamLimits

0x9988,	// (0x0004069e) listscroll_popup_colour_pane_g3

0x9998,	// (0x000406ae) listscroll_popup_colour_pane_g4_ParamLimits

0x9998,	// (0x000406ae) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000462b4) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000462b4) listscroll_popup_colour_pane_g

0xb7b3,	// (0x000424c9) scroll_pane_cp6_ParamLimits

0xb7b3,	// (0x000424c9) scroll_pane_cp6

0x99a8,	// (0x000406be) cell_large_graphic_colour_popup_pane_ParamLimits

0x99a8,	// (0x000406be) cell_large_graphic_colour_popup_pane

0xb7c5,	// (0x000424db) cell_large_graphic_colour_none_popup_pane_t1

0x87b5,	// (0x0003f4cb) grid_highlight_pane_cp5

0xb7d4,	// (0x000424ea) cell_large_graphic_colour_popup_pane_g1

0xb7dc,	// (0x000424f2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000462bd) cell_large_graphic_colour_popup_pane_g

0xb7e4,	// (0x000424fa) cell_large_graphic_colour_popup_pane_g2_copy1

0xb7ed,	// (0x00042503) grid_highlight_pane_cp4

0xb7f5,	// (0x0004250b) bg_popup_window_pane_cp8_ParamLimits

0xb7f5,	// (0x0004250b) bg_popup_window_pane_cp8

0xb810,	// (0x00042526) popup_snote_single_text_window_g1_ParamLimits

0xb810,	// (0x00042526) popup_snote_single_text_window_g1

0xb822,	// (0x00042538) popup_snote_single_text_window_t1_ParamLimits

0xb822,	// (0x00042538) popup_snote_single_text_window_t1

0xb835,	// (0x0004254b) popup_snote_single_text_window_t2_ParamLimits

0xb835,	// (0x0004254b) popup_snote_single_text_window_t2

0xb848,	// (0x0004255e) popup_snote_single_text_window_t3_ParamLimits

0xb848,	// (0x0004255e) popup_snote_single_text_window_t3

0xb881,	// (0x00042597) popup_snote_single_text_window_t4_ParamLimits

0xb881,	// (0x00042597) popup_snote_single_text_window_t4

0xb8b5,	// (0x000425cb) popup_snote_single_text_window_t5_ParamLimits

0xb8b5,	// (0x000425cb) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000462c2) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000462c2) popup_snote_single_text_window_t

0xb8e4,	// (0x000425fa) bg_popup_window_pane_cp9_ParamLimits

0xb8e4,	// (0x000425fa) bg_popup_window_pane_cp9

0xb810,	// (0x00042526) popup_snote_single_graphic_window_g1_ParamLimits

0xb810,	// (0x00042526) popup_snote_single_graphic_window_g1

0xb8f2,	// (0x00042608) popup_snote_single_graphic_window_g2_ParamLimits

0xb8f2,	// (0x00042608) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000462cd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000462cd) popup_snote_single_graphic_window_g

0xb8fe,	// (0x00042614) popup_snote_single_graphic_window_t1_ParamLimits

0xb8fe,	// (0x00042614) popup_snote_single_graphic_window_t1

0xb911,	// (0x00042627) popup_snote_single_graphic_window_t2_ParamLimits

0xb911,	// (0x00042627) popup_snote_single_graphic_window_t2

0xb924,	// (0x0004263a) popup_snote_single_graphic_window_t3_ParamLimits

0xb924,	// (0x0004263a) popup_snote_single_graphic_window_t3

0xb95d,	// (0x00042673) popup_snote_single_graphic_window_t4_ParamLimits

0xb95d,	// (0x00042673) popup_snote_single_graphic_window_t4

0xb991,	// (0x000426a7) popup_snote_single_graphic_window_t5_ParamLimits

0xb991,	// (0x000426a7) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000462d2) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000462d2) popup_snote_single_graphic_window_t

0x3dad,	// (0x0003aac3) grid_graphic_popup_pane_ParamLimits

0x3dad,	// (0x0003aac3) grid_graphic_popup_pane

0x3ddb,	// (0x0003aaf1) listscroll_popup_graphic_pane_g1_ParamLimits

0x3ddb,	// (0x0003aaf1) listscroll_popup_graphic_pane_g1

0xc84f,	// (0x00043565) listscroll_popup_graphic_pane_g2_ParamLimits

0xc84f,	// (0x00043565) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x000466c7) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x000466c7) listscroll_popup_graphic_pane_g

0x3e03,	// (0x0003ab19) scroll_pane_cp5

0xc80e,	// (0x00043524) cell_graphic_popup_pane_ParamLimits

0xc80e,	// (0x00043524) cell_graphic_popup_pane

0x3d36,	// (0x0003aa4c) cell_graphic_popup_pane_g1

0x3d3e,	// (0x0003aa54) cell_graphic_popup_pane_g2

0xb7e4,	// (0x000424fa) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x000466c0) cell_graphic_popup_pane_g

0x3d47,	// (0x0003aa5d) cell_graphic_popup_pane_t2

0xb7ed,	// (0x00042503) grid_highlight_pane_cp3

0xb9d2,	// (0x000426e8) list_gen_pane_ParamLimits

0xb9d2,	// (0x000426e8) list_gen_pane

0xb9fa,	// (0x00042710) scroll_pane

0xc7c9,	// (0x000434df) bg_list_pane_g1_ParamLimits

0xc7c9,	// (0x000434df) bg_list_pane_g1

0x3cb3,	// (0x0003a9c9) bg_list_pane_g2_ParamLimits

0x3cb3,	// (0x0003a9c9) bg_list_pane_g2

0x3cc6,	// (0x0003a9dc) bg_list_pane_g3_ParamLimits

0x3cc6,	// (0x0003a9dc) bg_list_pane_g3

0x3cd8,	// (0x0003a9ee) bg_list_pane_g4_ParamLimits

0x3cd8,	// (0x0003a9ee) bg_list_pane_g4

0xc7e4,	// (0x000434fa) bg_list_pane_g5_ParamLimits

0xc7e4,	// (0x000434fa) bg_list_pane_g5

0x0004,

0xf99f,	// (0x000466b5) bg_list_pane_g_ParamLimits

0xf99f,	// (0x000466b5) bg_list_pane_g

0xc778,	// (0x0004348e) list_double2_graphic_large_graphic_pane_ParamLimits

0xc778,	// (0x0004348e) list_double2_graphic_large_graphic_pane

0xc778,	// (0x0004348e) list_double2_graphic_pane_ParamLimits

0xc778,	// (0x0004348e) list_double2_graphic_pane

0xc778,	// (0x0004348e) list_double2_large_graphic_pane_ParamLimits

0xc778,	// (0x0004348e) list_double2_large_graphic_pane

0xc78c,	// (0x000434a2) list_double2_pane_ParamLimits

0xc78c,	// (0x000434a2) list_double2_pane

0xc778,	// (0x0004348e) list_double_graphic_heading_pane_ParamLimits

0xc778,	// (0x0004348e) list_double_graphic_heading_pane

0xc778,	// (0x0004348e) list_double_graphic_pane_ParamLimits

0xc778,	// (0x0004348e) list_double_graphic_pane

0xc778,	// (0x0004348e) list_double_heading_pane_ParamLimits

0xc778,	// (0x0004348e) list_double_heading_pane

0xc778,	// (0x0004348e) list_double_large_graphic_pane_ParamLimits

0xc778,	// (0x0004348e) list_double_large_graphic_pane

0xc778,	// (0x0004348e) list_double_number_pane_ParamLimits

0xc778,	// (0x0004348e) list_double_number_pane

0xc778,	// (0x0004348e) list_double_pane_ParamLimits

0xc778,	// (0x0004348e) list_double_pane

0xc778,	// (0x0004348e) list_double_time_pane_ParamLimits

0xc778,	// (0x0004348e) list_double_time_pane

0xc778,	// (0x0004348e) list_setting_number_pane_ParamLimits

0xc778,	// (0x0004348e) list_setting_number_pane

0xc778,	// (0x0004348e) list_setting_pane_ParamLimits

0xc778,	// (0x0004348e) list_setting_pane

0xafef,	// (0x00041d05) list_single_2graphic_pane_ParamLimits

0xafef,	// (0x00041d05) list_single_2graphic_pane

0xafef,	// (0x00041d05) list_single_graphic_heading_pane_ParamLimits

0xafef,	// (0x00041d05) list_single_graphic_heading_pane

0xafef,	// (0x00041d05) list_single_graphic_pane_ParamLimits

0xafef,	// (0x00041d05) list_single_graphic_pane

0xafef,	// (0x00041d05) list_single_heading_pane_ParamLimits

0xafef,	// (0x00041d05) list_single_heading_pane

0xc78c,	// (0x000434a2) list_single_large_graphic_pane_ParamLimits

0xc78c,	// (0x000434a2) list_single_large_graphic_pane

0xafef,	// (0x00041d05) list_single_number_heading_pane_ParamLimits

0xafef,	// (0x00041d05) list_single_number_heading_pane

0xafef,	// (0x00041d05) list_single_number_pane_ParamLimits

0xafef,	// (0x00041d05) list_single_number_pane

0xafef,	// (0x00041d05) list_single_pane_ParamLimits

0xafef,	// (0x00041d05) list_single_pane

0x87b5,	// (0x0003f4cb) list_highlight_pane_cp1

0xd27a,	// (0x00043f90) list_single_pane_g1_ParamLimits

0xd27a,	// (0x00043f90) list_single_pane_g1

0xd286,	// (0x00043f9c) list_single_pane_g2_ParamLimits

0xd286,	// (0x00043f9c) list_single_pane_g2

0x0001,

0xf5ce,	// (0x000462e4) list_single_pane_g_ParamLimits

0xf5ce,	// (0x000462e4) list_single_pane_g

0xd458,	// (0x0004416e) list_single_pane_t1_ParamLimits

0xd458,	// (0x0004416e) list_single_pane_t1

0xd27a,	// (0x00043f90) list_single_number_pane_g1_ParamLimits

0xd27a,	// (0x00043f90) list_single_number_pane_g1

0xd286,	// (0x00043f9c) list_single_number_pane_g2_ParamLimits

0xd286,	// (0x00043f9c) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x000462e4) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x000462e4) list_single_number_pane_g

0xd409,	// (0x0004411f) list_single_number_pane_t1_ParamLimits

0xd409,	// (0x0004411f) list_single_number_pane_t1

0xafb1,	// (0x00041cc7) list_single_number_pane_t2_ParamLimits

0xafb1,	// (0x00041cc7) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00046676) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00046676) list_single_number_pane_t

0x99d3,	// (0x000406e9) list_single_graphic_pane_g1_ParamLimits

0x99d3,	// (0x000406e9) list_single_graphic_pane_g1

0xd27a,	// (0x00043f90) list_single_graphic_pane_g2_ParamLimits

0xd27a,	// (0x00043f90) list_single_graphic_pane_g2

0xd286,	// (0x00043f9c) list_single_graphic_pane_g3_ParamLimits

0xd286,	// (0x00043f9c) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000462dd) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000462dd) list_single_graphic_pane_g

0x99df,	// (0x000406f5) list_single_graphic_pane_t1_ParamLimits

0x99df,	// (0x000406f5) list_single_graphic_pane_t1

0xd27a,	// (0x00043f90) list_single_heading_pane_g1_ParamLimits

0xd27a,	// (0x00043f90) list_single_heading_pane_g1

0xd286,	// (0x00043f9c) list_single_heading_pane_g2_ParamLimits

0xd286,	// (0x00043f9c) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000462e4) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000462e4) list_single_heading_pane_g

0x99f5,	// (0x0004070b) list_single_heading_pane_t1_ParamLimits

0x99f5,	// (0x0004070b) list_single_heading_pane_t1

0x9a0b,	// (0x00040721) list_single_heading_pane_t2_ParamLimits

0x9a0b,	// (0x00040721) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000462e9) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000462e9) list_single_heading_pane_t

0xd27a,	// (0x00043f90) list_single_number_heading_pane_g1_ParamLimits

0xd27a,	// (0x00043f90) list_single_number_heading_pane_g1

0xd286,	// (0x00043f9c) list_single_number_heading_pane_g2_ParamLimits

0xd286,	// (0x00043f9c) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x000462e4) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x000462e4) list_single_number_heading_pane_g

0x99f5,	// (0x0004070b) list_single_number_heading_pane_t1_ParamLimits

0x99f5,	// (0x0004070b) list_single_number_heading_pane_t1

0x9a1d,	// (0x00040733) list_single_number_heading_pane_t2_ParamLimits

0x9a1d,	// (0x00040733) list_single_number_heading_pane_t2

0xd292,	// (0x00043fa8) list_single_number_heading_pane_t3_ParamLimits

0xd292,	// (0x00043fa8) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x000462ee) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x000462ee) list_single_number_heading_pane_t

0xd2a4,	// (0x00043fba) list_single_graphic_heading_pane_g1_ParamLimits

0xd2a4,	// (0x00043fba) list_single_graphic_heading_pane_g1

0x9a2f,	// (0x00040745) list_single_graphic_heading_pane_g4_ParamLimits

0x9a2f,	// (0x00040745) list_single_graphic_heading_pane_g4

0xd286,	// (0x00043f9c) list_single_graphic_heading_pane_g5_ParamLimits

0xd286,	// (0x00043f9c) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x000462f5) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x000462f5) list_single_graphic_heading_pane_g

0x99f5,	// (0x0004070b) list_single_graphic_heading_pane_t1_ParamLimits

0x99f5,	// (0x0004070b) list_single_graphic_heading_pane_t1

0x9a40,	// (0x00040756) list_single_graphic_heading_pane_t2_ParamLimits

0x9a40,	// (0x00040756) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x000462fc) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x000462fc) list_single_graphic_heading_pane_t

0xd2b0,	// (0x00043fc6) list_single_large_graphic_pane_g1_ParamLimits

0xd2b0,	// (0x00043fc6) list_single_large_graphic_pane_g1

0xd2bc,	// (0x00043fd2) list_single_large_graphic_pane_g2_ParamLimits

0xd2bc,	// (0x00043fd2) list_single_large_graphic_pane_g2

0xd2c8,	// (0x00043fde) list_single_large_graphic_pane_g3_ParamLimits

0xd2c8,	// (0x00043fde) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00046301) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00046301) list_single_large_graphic_pane_g

0x2c4b,	// (0x00039961) wait_border_pane_g2_copy1

0x9a52,	// (0x00040768) list_single_large_graphic_pane_g4_cp2

0xd2d4,	// (0x00043fea) list_single_large_graphic_pane_t1_ParamLimits

0xd2d4,	// (0x00043fea) list_single_large_graphic_pane_t1

0x9a5a,	// (0x00040770) list_double_pane_g1_ParamLimits

0x9a5a,	// (0x00040770) list_double_pane_g1

0x9a66,	// (0x0004077c) list_double_pane_g2_ParamLimits

0x9a66,	// (0x0004077c) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00046308) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00046308) list_double_pane_g

0x9a72,	// (0x00040788) list_double_pane_t1_ParamLimits

0x9a72,	// (0x00040788) list_double_pane_t1

0x9a88,	// (0x0004079e) list_double_pane_t2_ParamLimits

0x9a88,	// (0x0004079e) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0004630d) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0004630d) list_double_pane_t

0x9a9a,	// (0x000407b0) list_double2_pane_g1_ParamLimits

0x9a9a,	// (0x000407b0) list_double2_pane_g1

0x9aab,	// (0x000407c1) list_double2_pane_g2_ParamLimits

0x9aab,	// (0x000407c1) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00046312) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00046312) list_double2_pane_g

0x9ab7,	// (0x000407cd) list_double2_pane_t1_ParamLimits

0x9ab7,	// (0x000407cd) list_double2_pane_t1

0x9acd,	// (0x000407e3) list_double2_pane_t2_ParamLimits

0x9acd,	// (0x000407e3) list_double2_pane_t2

0x0001,

0xf601,	// (0x00046317) list_double2_pane_t_ParamLimits

0xf601,	// (0x00046317) list_double2_pane_t

0x9a5a,	// (0x00040770) list_double_number_pane_g1_ParamLimits

0x9a5a,	// (0x00040770) list_double_number_pane_g1

0x9a66,	// (0x0004077c) list_double_number_pane_g2_ParamLimits

0x9a66,	// (0x0004077c) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00046308) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00046308) list_double_number_pane_g

0x9adf,	// (0x000407f5) list_double_number_pane_t1_ParamLimits

0x9adf,	// (0x000407f5) list_double_number_pane_t1

0x9af1,	// (0x00040807) list_double_number_pane_t2_ParamLimits

0x9af1,	// (0x00040807) list_double_number_pane_t2

0x9b07,	// (0x0004081d) list_double_number_pane_t3_ParamLimits

0x9b07,	// (0x0004081d) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0004631c) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0004631c) list_double_number_pane_t

0x9b19,	// (0x0004082f) list_double_graphic_pane_g1_ParamLimits

0x9b19,	// (0x0004082f) list_double_graphic_pane_g1

0x9b25,	// (0x0004083b) list_double_graphic_pane_g2_ParamLimits

0x9b25,	// (0x0004083b) list_double_graphic_pane_g2

0x9b34,	// (0x0004084a) list_double_graphic_pane_g3_ParamLimits

0x9b34,	// (0x0004084a) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00046323) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00046323) list_double_graphic_pane_g

0x9b4c,	// (0x00040862) list_double_graphic_pane_t1_ParamLimits

0x9b4c,	// (0x00040862) list_double_graphic_pane_t1

0x9b62,	// (0x00040878) list_double_graphic_pane_t2_ParamLimits

0x9b62,	// (0x00040878) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0004632c) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0004632c) list_double_graphic_pane_t

0x9b19,	// (0x0004082f) list_double2_graphic_pane_g1_ParamLimits

0x9b19,	// (0x0004082f) list_double2_graphic_pane_g1

0x9b74,	// (0x0004088a) list_double2_graphic_pane_g2_ParamLimits

0x9b74,	// (0x0004088a) list_double2_graphic_pane_g2

0x9b80,	// (0x00040896) list_double2_graphic_pane_g3_ParamLimits

0x9b80,	// (0x00040896) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00046331) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00046331) list_double2_graphic_pane_g

0x9af1,	// (0x00040807) list_double2_graphic_pane_t1_ParamLimits

0x9af1,	// (0x00040807) list_double2_graphic_pane_t1

0x9b8c,	// (0x000408a2) list_double2_graphic_pane_t2_ParamLimits

0x9b8c,	// (0x000408a2) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00046338) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00046338) list_double2_graphic_pane_t

0x9b9e,	// (0x000408b4) list_double_large_graphic_pane_g1_ParamLimits

0x9b9e,	// (0x000408b4) list_double_large_graphic_pane_g1

0x9bc9,	// (0x000408df) list_double_large_graphic_pane_g2_ParamLimits

0x9bc9,	// (0x000408df) list_double_large_graphic_pane_g2

0x9a66,	// (0x0004077c) list_double_large_graphic_pane_g3_ParamLimits

0x9a66,	// (0x0004077c) list_double_large_graphic_pane_g3

0x9bda,	// (0x000408f0) list_double_large_graphic_pane_g4_ParamLimits

0x9bda,	// (0x000408f0) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0004633d) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0004633d) list_double_large_graphic_pane_g

0x9bec,	// (0x00040902) list_double_large_graphic_pane_t1_ParamLimits

0x9bec,	// (0x00040902) list_double_large_graphic_pane_t1

0x9c05,	// (0x0004091b) list_double_large_graphic_pane_t2_ParamLimits

0x9c05,	// (0x0004091b) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00046348) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00046348) list_double_large_graphic_pane_t

0x9c17,	// (0x0004092d) list_double2_large_graphic_pane_g1_ParamLimits

0x9c17,	// (0x0004092d) list_double2_large_graphic_pane_g1

0x9bc9,	// (0x000408df) list_double2_large_graphic_pane_g2_ParamLimits

0x9bc9,	// (0x000408df) list_double2_large_graphic_pane_g2

0x9a66,	// (0x0004077c) list_double2_large_graphic_pane_g3_ParamLimits

0x9a66,	// (0x0004077c) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0004634d) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0004634d) list_double2_large_graphic_pane_g

0x9c23,	// (0x00040939) list_double2_large_graphic_pane_t1_ParamLimits

0x9c23,	// (0x00040939) list_double2_large_graphic_pane_t1

0x9c39,	// (0x0004094f) list_double2_large_graphic_pane_t2_ParamLimits

0x9c39,	// (0x0004094f) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00046354) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00046354) list_double2_large_graphic_pane_t

0x9c4b,	// (0x00040961) list_double_heading_pane_g1_ParamLimits

0x9c4b,	// (0x00040961) list_double_heading_pane_g1

0x9c5c,	// (0x00040972) list_double_heading_pane_g2_ParamLimits

0x9c5c,	// (0x00040972) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00046359) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00046359) list_double_heading_pane_g

0x9c68,	// (0x0004097e) list_double_heading_pane_t1_ParamLimits

0x9c68,	// (0x0004097e) list_double_heading_pane_t1

0x9c7e,	// (0x00040994) list_double_heading_pane_t2_ParamLimits

0x9c7e,	// (0x00040994) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0004635e) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0004635e) list_double_heading_pane_t

0x9c90,	// (0x000409a6) list_double_graphic_heading_pane_g1_ParamLimits

0x9c90,	// (0x000409a6) list_double_graphic_heading_pane_g1

0x9c4b,	// (0x00040961) list_double_graphic_heading_pane_g2_ParamLimits

0x9c4b,	// (0x00040961) list_double_graphic_heading_pane_g2

0x9c5c,	// (0x00040972) list_double_graphic_heading_pane_g3_ParamLimits

0x9c5c,	// (0x00040972) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00046363) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00046363) list_double_graphic_heading_pane_g

0x9c9c,	// (0x000409b2) list_double_graphic_heading_pane_t1_ParamLimits

0x9c9c,	// (0x000409b2) list_double_graphic_heading_pane_t1

0x9cb2,	// (0x000409c8) list_double_graphic_heading_pane_t2_ParamLimits

0x9cb2,	// (0x000409c8) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0004636a) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0004636a) list_double_graphic_heading_pane_t

0x9bc9,	// (0x000408df) list_double_time_pane_g1_ParamLimits

0x9bc9,	// (0x000408df) list_double_time_pane_g1

0x9a66,	// (0x0004077c) list_double_time_pane_g2_ParamLimits

0x9a66,	// (0x0004077c) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0004636f) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0004636f) list_double_time_pane_g

0x9c23,	// (0x00040939) list_double_time_pane_t1_ParamLimits

0x9c23,	// (0x00040939) list_double_time_pane_t1

0x9cc4,	// (0x000409da) list_double_time_pane_t2_ParamLimits

0x9cc4,	// (0x000409da) list_double_time_pane_t2

0x9cd6,	// (0x000409ec) list_double_time_pane_t3_ParamLimits

0x9cd6,	// (0x000409ec) list_double_time_pane_t3

0x9ce8,	// (0x000409fe) list_double_time_pane_t4_ParamLimits

0x9ce8,	// (0x000409fe) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00046374) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00046374) list_double_time_pane_t

0x9cfa,	// (0x00040a10) list_setting_pane_g1_ParamLimits

0x9cfa,	// (0x00040a10) list_setting_pane_g1

0x9d06,	// (0x00040a1c) list_setting_pane_g2_ParamLimits

0x9d06,	// (0x00040a1c) list_setting_pane_g2

0x0001,

0xf667,	// (0x0004637d) list_setting_pane_g_ParamLimits

0xf667,	// (0x0004637d) list_setting_pane_g

0x9d12,	// (0x00040a28) list_setting_pane_t1_ParamLimits

0x9d12,	// (0x00040a28) list_setting_pane_t1

0x9d2c,	// (0x00040a42) list_setting_pane_t2_ParamLimits

0x9d2c,	// (0x00040a42) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00046382) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00046382) list_setting_pane_t

0x9d6b,	// (0x00040a81) set_value_pane_cp_ParamLimits

0x9d6b,	// (0x00040a81) set_value_pane_cp

0x9d79,	// (0x00040a8f) list_setting_number_pane_g1_ParamLimits

0x9d79,	// (0x00040a8f) list_setting_number_pane_g1

0x9d85,	// (0x00040a9b) list_setting_number_pane_g2_ParamLimits

0x9d85,	// (0x00040a9b) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00046389) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00046389) list_setting_number_pane_g

0x9d91,	// (0x00040aa7) list_setting_number_pane_t1_ParamLimits

0x9d91,	// (0x00040aa7) list_setting_number_pane_t1

0x9daa,	// (0x00040ac0) list_setting_number_pane_t2_ParamLimits

0x9daa,	// (0x00040ac0) list_setting_number_pane_t2

0x9dc4,	// (0x00040ada) list_setting_number_pane_t3_ParamLimits

0x9dc4,	// (0x00040ada) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0004638e) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0004638e) list_setting_number_pane_t

0x9d6b,	// (0x00040a81) set_value_pane_ParamLimits

0x9d6b,	// (0x00040a81) set_value_pane

0xba2e,	// (0x00042744) bg_set_opt_pane_ParamLimits

0xba2e,	// (0x00042744) bg_set_opt_pane

0xd2ff,	// (0x00044015) set_value_pane_t1

0xba4f,	// (0x00042765) slider_set_pane_cp3

0xba58,	// (0x0004276e) volume_small_pane_cp

0xba61,	// (0x00042777) list_form_gen_pane

0xba6a,	// (0x00042780) scroll_pane_cp8

0x9e07,	// (0x00040b1d) form_field_data_pane_ParamLimits

0x9e07,	// (0x00040b1d) form_field_data_pane

0x9e22,	// (0x00040b38) form_field_data_wide_pane_ParamLimits

0x9e22,	// (0x00040b38) form_field_data_wide_pane

0xd315,	// (0x0004402b) form_field_popup_pane_ParamLimits

0xd315,	// (0x0004402b) form_field_popup_pane

0x9e46,	// (0x00040b5c) form_field_popup_wide_pane_ParamLimits

0x9e46,	// (0x00040b5c) form_field_popup_wide_pane

0xd337,	// (0x0004404d) form_field_slider_pane_ParamLimits

0xd337,	// (0x0004404d) form_field_slider_pane

0xd34a,	// (0x00044060) form_field_slider_wide_pane_ParamLimits

0xd34a,	// (0x00044060) form_field_slider_wide_pane

0xba7b,	// (0x00042791) data_form_pane

0x9e71,	// (0x00040b87) form_field_data_pane_t1

0xba87,	// (0x0004279d) input_focus_pane

0xba95,	// (0x000427ab) data_form_wide_pane

0xd369,	// (0x0004407f) form_field_data_wide_pane_t1

0xb802,	// (0x00042518) input_focus_pane_cp6

0x9e8b,	// (0x00040ba1) form_field_popup_pane_t1

0xba87,	// (0x0004279d) input_focus_pane_cp7

0xbac1,	// (0x000427d7) list_form_pane

0xd393,	// (0x000440a9) form_field_popup_wide_pane_t1

0xba87,	// (0x0004279d) input_focus_pane_cp8

0xbacd,	// (0x000427e3) list_form_wide_pane

0x9ead,	// (0x00040bc3) form_field_slider_pane_t1_ParamLimits

0x9ead,	// (0x00040bc3) form_field_slider_pane_t1

0x9ec5,	// (0x00040bdb) form_field_slider_pane_t2_ParamLimits

0x9ec5,	// (0x00040bdb) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0004639e) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0004639e) form_field_slider_pane_t

0x8936,	// (0x0003f64c) input_focus_pane_cp9_ParamLimits

0x8936,	// (0x0003f64c) input_focus_pane_cp9

0x9eda,	// (0x00040bf0) slider_cont_pane_ParamLimits

0x9eda,	// (0x00040bf0) slider_cont_pane

0xbadc,	// (0x000427f2) form_field_slider_wide_pane_t1_ParamLimits

0xbadc,	// (0x000427f2) form_field_slider_wide_pane_t1

0xd3a8,	// (0x000440be) form_field_slider_wide_pane_t2_ParamLimits

0xd3a8,	// (0x000440be) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x000463a3) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x000463a3) form_field_slider_wide_pane_t

0x8936,	// (0x0003f64c) input_focus_pane_cp10_ParamLimits

0x8936,	// (0x0003f64c) input_focus_pane_cp10

0x9eee,	// (0x00040c04) slider_cont_pane_cp1_ParamLimits

0x9eee,	// (0x00040c04) slider_cont_pane_cp1

0x9f02,	// (0x00040c18) slider_form_pane_cp

0xbaee,	// (0x00042804) input_focus_pane_g1

0xbaf6,	// (0x0004280c) input_focus_pane_g2

0xbafe,	// (0x00042814) input_focus_pane_g3

0xbb06,	// (0x0004281c) input_focus_pane_g4

0xbb0e,	// (0x00042824) input_focus_pane_g5

0xbb16,	// (0x0004282c) input_focus_pane_g6

0xbb1e,	// (0x00042834) input_focus_pane_g7

0xbb26,	// (0x0004283c) input_focus_pane_g8

0xbb2e,	// (0x00042844) input_focus_pane_g9

0x87ab,	// (0x0003f4c1) input_focus_pane_g10

0x0009,

0xf692,	// (0x000463a8) input_focus_pane_g

0x2c54,	// (0x0003996a) wait_border_pane_g3_copy1

0x9f0a,	// (0x00040c20) data_form_pane_t1

0x87ab,	// (0x0003f4c1) wait_anim_pane_g1_copy1

0xafc3,	// (0x00041cd9) data_form_wide_pane_t1

0xd3ba,	// (0x000440d0) list_form_graphic_pane_cp_ParamLimits

0xd3ba,	// (0x000440d0) list_form_graphic_pane_cp

0x3bcd,	// (0x0003a8e3) slider_form_pane_g1

0x3bd6,	// (0x0003a8ec) slider_form_pane_g2

0x0006,

0xf990,	// (0x000466a6) slider_form_pane_g

0xd3ba,	// (0x000440d0) list_form_graphic_pane_ParamLimits

0xd3ba,	// (0x000440d0) list_form_graphic_pane

0xd3cc,	// (0x000440e2) list_form_graphic_pane_g1

0xd3d4,	// (0x000440ea) list_form_graphic_pane_t1_ParamLimits

0xd3d4,	// (0x000440ea) list_form_graphic_pane_t1

0x8803,	// (0x0003f519) list_highlight_pane_cp5_ParamLimits

0x8803,	// (0x0003f519) list_highlight_pane_cp5

0x9f24,	// (0x00040c3a) find_pane_g1

0xbb36,	// (0x0004284c) input_find_pane

0x9f2d,	// (0x00040c43) input_find_pane_g1_ParamLimits

0x9f2d,	// (0x00040c43) input_find_pane_g1

0x9f39,	// (0x00040c4f) input_find_pane_t1_ParamLimits

0x9f39,	// (0x00040c4f) input_find_pane_t1

0x9f4e,	// (0x00040c64) input_find_pane_t2_ParamLimits

0x9f4e,	// (0x00040c64) input_find_pane_t2

0x0001,

0xf6a7,	// (0x000463bd) input_find_pane_t_ParamLimits

0xf6a7,	// (0x000463bd) input_find_pane_t

0xbb3f,	// (0x00042855) input_focus_pane_cp5_ParamLimits

0xbb3f,	// (0x00042855) input_focus_pane_cp5

0xbb4d,	// (0x00042863) bg_popup_window_pane_cp2_ParamLimits

0xbb4d,	// (0x00042863) bg_popup_window_pane_cp2

0xbb5a,	// (0x00042870) listscroll_menu_pane_ParamLimits

0xbb5a,	// (0x00042870) listscroll_menu_pane

0x9f6f,	// (0x00040c85) popup_submenu_window_ParamLimits

0x9f6f,	// (0x00040c85) popup_submenu_window

0xbb66,	// (0x0004287c) find_popup_pane_g1

0xbb6e,	// (0x00042884) input_popup_find_pane_cp

0xbb3f,	// (0x00042855) input_focus_pane_cp4_ParamLimits

0xbb3f,	// (0x00042855) input_focus_pane_cp4

0xbb78,	// (0x0004288e) input_popup_find_pane_t1_ParamLimits

0xbb78,	// (0x0004288e) input_popup_find_pane_t1

0x87b5,	// (0x0003f4cb) bg_popup_sub_pane_cp

0xbba6,	// (0x000428bc) listscroll_popup_sub_pane

0xbbae,	// (0x000428c4) list_submenu_pane_ParamLimits

0xbbae,	// (0x000428c4) list_submenu_pane

0xbbbf,	// (0x000428d5) scroll_pane_cp4

0xbbc7,	// (0x000428dd) list_single_popup_submenu_pane_ParamLimits

0xbbc7,	// (0x000428dd) list_single_popup_submenu_pane

0xbbdc,	// (0x000428f2) list_single_popup_submenu_pane_g1

0xbbe4,	// (0x000428fa) list_single_popup_submenu_pane_t1_ParamLimits

0xbbe4,	// (0x000428fa) list_single_popup_submenu_pane_t1

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp1_ParamLimits

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp1

0x9fad,	// (0x00040cc3) tabs_2_active_pane_g1

0x9fb5,	// (0x00040ccb) tabs_2_active_pane_t1

0x8936,	// (0x0003f64c) bg_passive_tab_pane_cp1_ParamLimits

0x8936,	// (0x0003f64c) bg_passive_tab_pane_cp1

0x9fad,	// (0x00040cc3) tabs_2_passive_pane_g1

0x9fb5,	// (0x00040ccb) tabs_2_passive_pane_t1

0x8803,	// (0x0003f519) bg_active_tab_pane_cp4

0x9fc7,	// (0x00040cdd) tabs_2_long_active_pane_t1

0x20ba,	// (0x00038dd0) bg_passive_tab_pane_cp4

0x07be,	// (0x000374d4) list_single_midp_graphic_pane_g4_ParamLimits

0x8803,	// (0x0003f519) bg_active_tab_pane_cp5

0x9fda,	// (0x00040cf0) tabs_3_long_active_pane_t1

0x20ba,	// (0x00038dd0) bg_passive_tab_pane_cp5

0x07be,	// (0x000374d4) list_single_midp_graphic_pane_g4

0x8803,	// (0x0003f519) bg_popup_window_pane_cp13_ParamLimits

0x8803,	// (0x0003f519) bg_popup_window_pane_cp13

0xbc02,	// (0x00042918) listscroll_popup_fast_pane_ParamLimits

0xbc02,	// (0x00042918) listscroll_popup_fast_pane

0xbc11,	// (0x00042927) grid_popup_fast_pane_ParamLimits

0xbc11,	// (0x00042927) grid_popup_fast_pane

0xbc23,	// (0x00042939) scroll_pane_cp9_ParamLimits

0xbc23,	// (0x00042939) scroll_pane_cp9

0x5558,	// (0x0003c26e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5558,	// (0x0003c26e) list_single_graphic_hl_pane_t1_cp2

0xbc47,	// (0x0004295d) input_focus_pane_cp20_ParamLimits

0xbc47,	// (0x0004295d) input_focus_pane_cp20

0xbc55,	// (0x0004296b) query_popup_data_pane_t1_ParamLimits

0xbc55,	// (0x0004296b) query_popup_data_pane_t1

0xbc68,	// (0x0004297e) query_popup_data_pane_t2_ParamLimits

0xbc68,	// (0x0004297e) query_popup_data_pane_t2

0xbcae,	// (0x000429c4) query_popup_data_pane_t3_ParamLimits

0xbcae,	// (0x000429c4) query_popup_data_pane_t3

0xbcef,	// (0x00042a05) query_popup_data_pane_t4_ParamLimits

0xbcef,	// (0x00042a05) query_popup_data_pane_t4

0xbd2b,	// (0x00042a41) query_popup_data_pane_t5_ParamLimits

0xbd2b,	// (0x00042a41) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x000463c2) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x000463c2) query_popup_data_pane_t

0xbaee,	// (0x00042804) bg_set_opt_pane_g1

0xbaf6,	// (0x0004280c) bg_set_opt_pane_g2

0xbafe,	// (0x00042814) bg_set_opt_pane_g3

0xbb06,	// (0x0004281c) bg_set_opt_pane_g4

0xbb0e,	// (0x00042824) bg_set_opt_pane_g5

0xbb16,	// (0x0004282c) bg_set_opt_pane_g6

0xbb1e,	// (0x00042834) bg_set_opt_pane_g7

0xbb26,	// (0x0004283c) bg_set_opt_pane_g8

0xbb2e,	// (0x00042844) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x000463cd) bg_set_opt_pane_g

0xf25f,	// (0x00045f75) control_top_pane_stacon_ParamLimits

0xf25f,	// (0x00045f75) control_top_pane_stacon

0xf2b2,	// (0x00045fc8) signal_pane_stacon_ParamLimits

0xf2b2,	// (0x00045fc8) signal_pane_stacon

0xf2d7,	// (0x00045fed) stacon_top_pane_g1_ParamLimits

0xf2d7,	// (0x00045fed) stacon_top_pane_g1

0xf2f9,	// (0x0004600f) title_pane_stacon_ParamLimits

0xf2f9,	// (0x0004600f) title_pane_stacon

0xf323,	// (0x00046039) uni_indicator_pane_stacon_ParamLimits

0xf323,	// (0x00046039) uni_indicator_pane_stacon

0xf33b,	// (0x00046051) battery_pane_stacon_ParamLimits

0xf33b,	// (0x00046051) battery_pane_stacon

0xf37f,	// (0x00046095) control_bottom_pane_stacon_ParamLimits

0xf37f,	// (0x00046095) control_bottom_pane_stacon

0xf3a2,	// (0x000460b8) navi_pane_stacon_ParamLimits

0xf3a2,	// (0x000460b8) navi_pane_stacon

0xf3c5,	// (0x000460db) stacon_bottom_pane_g1_ParamLimits

0xf3c5,	// (0x000460db) stacon_bottom_pane_g1

0xede8,	// (0x00045afe) aid_levels_signal_lsc_ParamLimits

0xede8,	// (0x00045afe) aid_levels_signal_lsc

0xedff,	// (0x00045b15) signal_pane_stacon_g1_ParamLimits

0xedff,	// (0x00045b15) signal_pane_stacon_g1

0xee13,	// (0x00045b29) signal_pane_stacon_g2_ParamLimits

0xee13,	// (0x00045b29) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000463e0) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000463e0) signal_pane_stacon_g

0xee48,	// (0x00045b5e) title_pane_stacon_t1_ParamLimits

0xee48,	// (0x00045b5e) title_pane_stacon_t1

0xbd6f,	// (0x00042a85) uni_indicator_pane_stacon_g1

0xbd79,	// (0x00042a8f) uni_indicator_pane_stacon_g2

0xbd83,	// (0x00042a99) uni_indicator_pane_stacon_g3

0xbd8d,	// (0x00042aa3) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x000463ec) uni_indicator_pane_stacon_g

0xee6d,	// (0x00045b83) control_top_pane_stacon_g1

0xee75,	// (0x00045b8b) control_top_pane_stacon_t1_ParamLimits

0xee75,	// (0x00045b8b) control_top_pane_stacon_t1

0xeeac,	// (0x00045bc2) aid_levels_battery_lsc_ParamLimits

0xeeac,	// (0x00045bc2) aid_levels_battery_lsc

0xeec4,	// (0x00045bda) battery_pane_stacon_g1_ParamLimits

0xeec4,	// (0x00045bda) battery_pane_stacon_g1

0xeed7,	// (0x00045bed) battery_pane_stacon_g2_ParamLimits

0xeed7,	// (0x00045bed) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x000463f5) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x000463f5) battery_pane_stacon_g

0xef15,	// (0x00045c2b) navi_icon_pane_stacon

0xef29,	// (0x00045c3f) navi_navi_pane_stacon

0xef15,	// (0x00045c2b) navi_text_pane_stacon

0xee6d,	// (0x00045b83) control_bottom_pane_stacon_g1

0xef3f,	// (0x00045c55) control_bottom_pane_stacon_t1_ParamLimits

0xef3f,	// (0x00045c55) control_bottom_pane_stacon_t1

0x9fec,	// (0x00040d02) grid_app_pane_ParamLimits

0x9fec,	// (0x00040d02) grid_app_pane

0xa024,	// (0x00040d3a) scroll_pane_cp15_ParamLimits

0xa024,	// (0x00040d3a) scroll_pane_cp15

0xa03d,	// (0x00040d53) cell_app_pane_ParamLimits

0xa03d,	// (0x00040d53) cell_app_pane

0xa07e,	// (0x00040d94) cell_app_pane_g1_ParamLimits

0xa07e,	// (0x00040d94) cell_app_pane_g1

0xbdb1,	// (0x00042ac7) cell_app_pane_g2_ParamLimits

0xbdb1,	// (0x00042ac7) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x000463fa) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x000463fa) cell_app_pane_g

0xbdbd,	// (0x00042ad3) cell_app_pane_t1_ParamLimits

0xbdbd,	// (0x00042ad3) cell_app_pane_t1

0xbdcf,	// (0x00042ae5) grid_highlight_pane_ParamLimits

0xbdcf,	// (0x00042ae5) grid_highlight_pane

0xbaee,	// (0x00042804) cell_highlight_pane_g1

0xbaf6,	// (0x0004280c) cell_highlight_pane_g2

0xbafe,	// (0x00042814) cell_highlight_pane_g3

0xbb06,	// (0x0004281c) cell_highlight_pane_g4

0xbb0e,	// (0x00042824) cell_highlight_pane_g5

0xbb16,	// (0x0004282c) cell_highlight_pane_g6

0xbb1e,	// (0x00042834) cell_highlight_pane_g7

0xbb26,	// (0x0004283c) cell_highlight_pane_g8

0xbb2e,	// (0x00042844) cell_highlight_pane_g9

0x87ab,	// (0x0003f4c1) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x000463a8) cell_highlight_pane_g

0xbde0,	// (0x00042af6) bg_scroll_pane

0xef80,	// (0x00045c96) scroll_handle_pane

0xbe27,	// (0x00042b3d) scroll_bg_pane_g1

0xbe3c,	// (0x00042b52) scroll_bg_pane_g2

0xbe54,	// (0x00042b6a) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x000463ff) scroll_bg_pane_g

0xbe69,	// (0x00042b7f) scroll_handle_focus_pane_ParamLimits

0xbe69,	// (0x00042b7f) scroll_handle_focus_pane

0xbe27,	// (0x00042b3d) scroll_handle_pane_g1

0xbe76,	// (0x00042b8c) scroll_handle_pane_g2

0xbe54,	// (0x00042b6a) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00046406) scroll_handle_pane_g

0xbb3f,	// (0x00042855) bg_popup_sub_pane_cp21_ParamLimits

0xbb3f,	// (0x00042855) bg_popup_sub_pane_cp21

0xbe8a,	// (0x00042ba0) popup_fep_japan_predictive_window_t1_ParamLimits

0xbe8a,	// (0x00042ba0) popup_fep_japan_predictive_window_t1

0xbea1,	// (0x00042bb7) popup_fep_japan_predictive_window_t2_ParamLimits

0xbea1,	// (0x00042bb7) popup_fep_japan_predictive_window_t2

0xbed4,	// (0x00042bea) popup_fep_japan_predictive_window_t3_ParamLimits

0xbed4,	// (0x00042bea) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0004640d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0004640d) popup_fep_japan_predictive_window_t

0x87b5,	// (0x0003f4cb) bg_popup_sub_pane_cp23

0xbf0b,	// (0x00042c21) listscroll_japin_cand_pane

0xbf13,	// (0x00042c29) popup_fep_japan_candidate_window_t1

0xbf21,	// (0x00042c37) candidate_pane_ParamLimits

0xbf21,	// (0x00042c37) candidate_pane

0xbf33,	// (0x00042c49) scroll_pane_cp30

0xbf3d,	// (0x00042c53) list_single_popup_jap_candidate_pane_ParamLimits

0xbf3d,	// (0x00042c53) list_single_popup_jap_candidate_pane

0x87b5,	// (0x0003f4cb) list_highlight_pane_cp30

0xbf51,	// (0x00042c67) list_single_popup_jap_candidate_pane_t1

0xa0ab,	// (0x00040dc1) level_1_signal

0xa0bd,	// (0x00040dd3) level_2_signal

0xa0d0,	// (0x00040de6) level_3_signal

0xa0e3,	// (0x00040df9) level_4_signal

0xa0f6,	// (0x00040e0c) level_5_signal

0xa109,	// (0x00040e1f) level_6_signal

0xa11c,	// (0x00040e32) level_7_signal

0xa0ab,	// (0x00040dc1) level_1_battery

0xa0bd,	// (0x00040dd3) level_2_battery

0xa0d0,	// (0x00040de6) level_3_battery

0xa0e3,	// (0x00040df9) level_4_battery

0xa0f6,	// (0x00040e0c) level_5_battery

0xa109,	// (0x00040e1f) level_6_battery

0xa11c,	// (0x00040e32) level_7_battery

0xefe0,	// (0x00045cf6) list_menu_pane_ParamLimits

0xefe0,	// (0x00045cf6) list_menu_pane

0xeff6,	// (0x00045d0c) scroll_pane_cp25_ParamLimits

0xeff6,	// (0x00045d0c) scroll_pane_cp25

0xf00f,	// (0x00045d25) list_double2_graphic_pane_cp2_ParamLimits

0xf00f,	// (0x00045d25) list_double2_graphic_pane_cp2

0xf00f,	// (0x00045d25) list_double2_large_graphic_pane_cp2_ParamLimits

0xf00f,	// (0x00045d25) list_double2_large_graphic_pane_cp2

0xf00f,	// (0x00045d25) list_double2_pane_cp2_ParamLimits

0xf00f,	// (0x00045d25) list_double2_pane_cp2

0xf00f,	// (0x00045d25) list_double_graphic_pane_cp2_ParamLimits

0xf00f,	// (0x00045d25) list_double_graphic_pane_cp2

0xf00f,	// (0x00045d25) list_double_large_graphic_pane_cp2_ParamLimits

0xf00f,	// (0x00045d25) list_double_large_graphic_pane_cp2

0xf00f,	// (0x00045d25) list_double_number_pane_cp2_ParamLimits

0xf00f,	// (0x00045d25) list_double_number_pane_cp2

0xf00f,	// (0x00045d25) list_double_pane_cp2_ParamLimits

0xf00f,	// (0x00045d25) list_double_pane_cp2

0xa142,	// (0x00040e58) list_single_2graphic_pane_cp2_ParamLimits

0xa142,	// (0x00040e58) list_single_2graphic_pane_cp2

0xa142,	// (0x00040e58) list_single_graphic_heading_pane_cp2_ParamLimits

0xa142,	// (0x00040e58) list_single_graphic_heading_pane_cp2

0xa142,	// (0x00040e58) list_single_graphic_pane_cp2_ParamLimits

0xa142,	// (0x00040e58) list_single_graphic_pane_cp2

0xa142,	// (0x00040e58) list_single_heading_pane_cp2_ParamLimits

0xa142,	// (0x00040e58) list_single_heading_pane_cp2

0xf01f,	// (0x00045d35) list_single_large_graphic_pane_cp2_ParamLimits

0xf01f,	// (0x00045d35) list_single_large_graphic_pane_cp2

0xa142,	// (0x00040e58) list_single_number_heading_pane_cp2_ParamLimits

0xa142,	// (0x00040e58) list_single_number_heading_pane_cp2

0xa142,	// (0x00040e58) list_single_number_pane_cp2_ParamLimits

0xa142,	// (0x00040e58) list_single_number_pane_cp2

0xa142,	// (0x00040e58) list_single_pane_cp2_ParamLimits

0xa142,	// (0x00040e58) list_single_pane_cp2

0xf093,	// (0x00045da9) bg_popup_sub_pane_cp22

0xf0b8,	// (0x00045dce) popup_side_volume_key_window_g1

0xf0e2,	// (0x00045df8) popup_side_volume_key_window_t1

0xf100,	// (0x00045e16) volume_small_pane_cp1

0x8936,	// (0x0003f64c) bg_popup_sub_pane_cp24_ParamLimits

0x8936,	// (0x0003f64c) bg_popup_sub_pane_cp24

0xf108,	// (0x00045e1e) fep_china_uni_candidate_pane_ParamLimits

0xf108,	// (0x00045e1e) fep_china_uni_candidate_pane

0xf11c,	// (0x00045e32) fep_china_uni_entry_pane

0xf12c,	// (0x00045e42) popup_fep_china_uni_window_g1

0xf148,	// (0x00045e5e) fep_china_uni_entry_pane_g1

0xf152,	// (0x00045e68) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0004643e) fep_china_uni_entry_pane_g

0xf15c,	// (0x00045e72) fep_entry_item_pane

0xf166,	// (0x00045e7c) fep_candidate_item_pane

0xf16e,	// (0x00045e84) fep_china_uni_candidate_pane_g1

0xf178,	// (0x00045e8e) fep_china_uni_candidate_pane_g2

0xf180,	// (0x00045e96) fep_china_uni_candidate_pane_g3

0xf188,	// (0x00045e9e) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00046443) fep_china_uni_candidate_pane_g

0x87ab,	// (0x0003f4c1) fep_entry_item_pane_g1

0xf192,	// (0x00045ea8) fep_entry_item_pane_t1_ParamLimits

0xf192,	// (0x00045ea8) fep_entry_item_pane_t1

0xf1a8,	// (0x00045ebe) fep_candidate_item_pane_t1_ParamLimits

0xf1a8,	// (0x00045ebe) fep_candidate_item_pane_t1

0xf1bd,	// (0x00045ed3) fep_candidate_item_pane_t2_ParamLimits

0xf1bd,	// (0x00045ed3) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0004644c) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0004644c) fep_candidate_item_pane_t

0x8803,	// (0x0003f519) list_highlight_pane_cp31_ParamLimits

0x8803,	// (0x0003f519) list_highlight_pane_cp31

0xf1cf,	// (0x00045ee5) level_1_signal_lsc

0xf1d8,	// (0x00045eee) level_2_signal_lsc

0xf1e1,	// (0x00045ef7) level_3_signal_lsc

0xf1ea,	// (0x00045f00) level_4_signal_lsc

0xf1f3,	// (0x00045f09) level_5_signal_lsc

0xf1fc,	// (0x00045f12) level_6_signal_lsc

0xf205,	// (0x00045f1b) level_7_signal_lsc

0xf205,	// (0x00045f1b) level_1_battery_lsc

0xf20e,	// (0x00045f24) level_2_battery_lsc

0xf217,	// (0x00045f2d) level_3_battery_lsc

0xf220,	// (0x00045f36) level_4_battery_lsc

0xf229,	// (0x00045f3f) level_5_battery_lsc

0xf232,	// (0x00045f48) level_6_battery_lsc

0xf1cf,	// (0x00045ee5) level_7_battery_lsc

0xf23b,	// (0x00045f51) scroll_handle_focus_pane_g1

0xf244,	// (0x00045f5a) scroll_handle_focus_pane_g2

0xf24d,	// (0x00045f63) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00046451) scroll_handle_focus_pane_g

0xa1d4,	// (0x00040eea) list_single_2graphic_pane_g1_ParamLimits

0xa1d4,	// (0x00040eea) list_single_2graphic_pane_g1

0x9a2f,	// (0x00040745) list_single_2graphic_pane_g2_ParamLimits

0x9a2f,	// (0x00040745) list_single_2graphic_pane_g2

0xd286,	// (0x00043f9c) list_single_2graphic_pane_g3_ParamLimits

0xd286,	// (0x00043f9c) list_single_2graphic_pane_g3

0xa1e0,	// (0x00040ef6) list_single_2graphic_pane_g4_ParamLimits

0xa1e0,	// (0x00040ef6) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00046458) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00046458) list_single_2graphic_pane_g

0xa1ec,	// (0x00040f02) list_single_2graphic_pane_t1_ParamLimits

0xa1ec,	// (0x00040f02) list_single_2graphic_pane_t1

0xa21a,	// (0x00040f30) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa21a,	// (0x00040f30) list_double2_graphic_large_graphic_pane_g1

0x9bc9,	// (0x000408df) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9bc9,	// (0x000408df) list_double2_graphic_large_graphic_pane_g2

0x9a66,	// (0x0004077c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a66,	// (0x0004077c) list_double2_graphic_large_graphic_pane_g3

0xa22c,	// (0x00040f42) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa22c,	// (0x00040f42) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00046461) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00046461) list_double2_graphic_large_graphic_pane_g

0xa238,	// (0x00040f4e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa238,	// (0x00040f4e) list_double2_graphic_large_graphic_pane_t1

0xa24e,	// (0x00040f64) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa24e,	// (0x00040f64) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0004646a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0004646a) list_double2_graphic_large_graphic_pane_t

0xf423,	// (0x00046139) popup_fast_swap_window_ParamLimits

0xf423,	// (0x00046139) popup_fast_swap_window

0xf441,	// (0x00046157) popup_side_volume_key_window

0xf45f,	// (0x00046175) stacon_top_pane

0xf469,	// (0x0004617f) status_pane_ParamLimits

0xf469,	// (0x0004617f) status_pane

0xf45f,	// (0x00046175) status_small_pane

0x87b5,	// (0x0003f4cb) control_pane

0x87b5,	// (0x0003f4cb) stacon_bottom_pane

0xba6a,	// (0x00042780) scroll_pane_cp121

0xba61,	// (0x00042777) set_content_pane

0xa260,	// (0x00040f76) bg_active_tab_pane_g1_cp1

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp1

0xa269,	// (0x00040f7f) bg_active_tab_pane_g3_cp1

0xa260,	// (0x00040f76) bg_passive_tab_pane_g1_cp1

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp1

0xa269,	// (0x00040f7f) bg_passive_tab_pane_g3_cp1

0xa272,	// (0x00040f88) bg_active_tab_pane_g1_cp2

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp2

0xa27b,	// (0x00040f91) bg_active_tab_pane_g3_cp2

0xa272,	// (0x00040f88) bg_passive_tab_pane_g1_cp2

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp2

0xa27b,	// (0x00040f91) bg_passive_tab_pane_g3_cp2

0xa284,	// (0x00040f9a) bg_active_tab_pane_g1_cp3

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp3

0xa28d,	// (0x00040fa3) bg_active_tab_pane_g3_cp3

0xa284,	// (0x00040f9a) bg_passive_tab_pane_g1_cp3

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp3

0xa28d,	// (0x00040fa3) bg_passive_tab_pane_g3_cp3

0xa296,	// (0x00040fac) bg_active_tab_pane_g1_cp4

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp4

0xa29f,	// (0x00040fb5) bg_active_tab_pane_g3_cp4

0xa296,	// (0x00040fac) bg_passive_tab_pane_g1_cp4

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp4

0xa29f,	// (0x00040fb5) bg_passive_tab_pane_g3_cp4

0xf3e1,	// (0x000460f7) bg_active_tab_pane_g1_cp5

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp5

0xf3ea,	// (0x00046100) bg_active_tab_pane_g3_cp5

0xf3e1,	// (0x000460f7) bg_passive_tab_pane_g1_cp5

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp5

0xf3ea,	// (0x00046100) bg_passive_tab_pane_g3_cp5

0x41d1,	// (0x0003aee7) list_set_graphic_pane_ParamLimits

0x41d1,	// (0x0003aee7) list_set_graphic_pane

0x87b5,	// (0x0003f4cb) bg_set_opt_pane_cp4

0xa2a8,	// (0x00040fbe) list_set_graphic_pane_g1_ParamLimits

0xa2a8,	// (0x00040fbe) list_set_graphic_pane_g1

0xa2b4,	// (0x00040fca) list_set_graphic_pane_g2_ParamLimits

0xa2b4,	// (0x00040fca) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0004646f) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0004646f) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x000467f2) volume_small_pane_cp_g

0xa2d8,	// (0x00040fee) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa2d8,	// (0x00040fee) list_double2_large_graphic_pane_g1_cp2

0xa2e6,	// (0x00040ffc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa2e6,	// (0x00040ffc) list_double2_large_graphic_pane_g2_cp2

0xf3f3,	// (0x00046109) list_double2_large_graphic_pane_g3_cp2

0xf3fb,	// (0x00046111) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf3fb,	// (0x00046111) list_double2_large_graphic_pane_t1_cp2

0xf411,	// (0x00046127) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf411,	// (0x00046127) list_double2_large_graphic_pane_t2_cp2

0xc4dd,	// (0x000431f3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc4dd,	// (0x000431f3) list_double_large_graphic_pane_g1_cp2

0xc4f0,	// (0x00043206) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc4f0,	// (0x00043206) list_double_large_graphic_pane_g2_cp2

0x1c4b,	// (0x00038961) list_double_large_graphic_pane_g3_cp2

0x3762,	// (0x0003a478) list_double_large_graphic_pane_g4_cp

0x376a,	// (0x0003a480) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x376a,	// (0x0003a480) list_double_large_graphic_pane_t1_cp2

0x3781,	// (0x0003a497) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3781,	// (0x0003a497) list_double_large_graphic_pane_t2_cp2

0xa2f7,	// (0x0004100d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa2f7,	// (0x0004100d) list_double2_graphic_pane_g1_cp2

0xa305,	// (0x0004101b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa305,	// (0x0004101b) list_double2_graphic_pane_g2_cp2

0xa316,	// (0x0004102c) list_double2_graphic_pane_g3_cp2

0xf477,	// (0x0004618d) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf477,	// (0x0004618d) list_double2_graphic_pane_t1_cp2

0xf48d,	// (0x000461a3) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf48d,	// (0x000461a3) list_double2_graphic_pane_t2_cp2

0xf49f,	// (0x000461b5) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf49f,	// (0x000461b5) list_single_number_heading_pane_g1_cp2

0x1b98,	// (0x000388ae) list_single_number_heading_pane_g2_cp2

0x1ba0,	// (0x000388b6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1ba0,	// (0x000388b6) list_single_number_heading_pane_t1_cp2

0xa320,	// (0x00041036) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa320,	// (0x00041036) list_single_number_heading_pane_t2_cp2

0x1bca,	// (0x000388e0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1bca,	// (0x000388e0) list_single_number_heading_pane_t3_cp2

0xf49f,	// (0x000461b5) list_single_heading_pane_g1_cp2_ParamLimits

0xf49f,	// (0x000461b5) list_single_heading_pane_g1_cp2

0x1b98,	// (0x000388ae) list_single_heading_pane_g2_cp2

0x1ba0,	// (0x000388b6) list_single_heading_pane_t1_cp2_ParamLimits

0x1ba0,	// (0x000388b6) list_single_heading_pane_t1_cp2

0xc4c9,	// (0x000431df) list_single_heading_pane_t2_cp2_ParamLimits

0xc4c9,	// (0x000431df) list_single_heading_pane_t2_cp2

0x347a,	// (0x0003a190) list_double_graphic_pane_g1_cp2_ParamLimits

0x347a,	// (0x0003a190) list_double_graphic_pane_g1_cp2

0x3486,	// (0x0003a19c) list_double_graphic_pane_g2_cp2_ParamLimits

0x3486,	// (0x0003a19c) list_double_graphic_pane_g2_cp2

0x3495,	// (0x0003a1ab) list_double_graphic_pane_g3_cp2

0x349d,	// (0x0003a1b3) list_double_graphic_pane_t1_cp2_ParamLimits

0x349d,	// (0x0003a1b3) list_double_graphic_pane_t1_cp2

0x34b3,	// (0x0003a1c9) list_double_graphic_pane_t2_cp2_ParamLimits

0x34b3,	// (0x0003a1c9) list_double_graphic_pane_t2_cp2

0x1c3f,	// (0x00038955) list_double_number_pane_g1_cp2_ParamLimits

0x1c3f,	// (0x00038955) list_double_number_pane_g1_cp2

0x1c4b,	// (0x00038961) list_double_number_pane_g2_cp2

0xc463,	// (0x00043179) list_double_number_pane_t1_cp2_ParamLimits

0xc463,	// (0x00043179) list_double_number_pane_t1_cp2

0x3452,	// (0x0003a168) list_double_number_pane_t2_cp2_ParamLimits

0x3452,	// (0x0003a168) list_double_number_pane_t2_cp2

0x3468,	// (0x0003a17e) list_double_number_pane_t3_cp2_ParamLimits

0x3468,	// (0x0003a17e) list_double_number_pane_t3_cp2

0xc3b1,	// (0x000430c7) list_single_graphic_pane_g1_cp2_ParamLimits

0xc3b1,	// (0x000430c7) list_single_graphic_pane_g1_cp2

0x1ca5,	// (0x000389bb) list_single_graphic_pane_g2_cp2_ParamLimits

0x1ca5,	// (0x000389bb) list_single_graphic_pane_g2_cp2

0x1cb1,	// (0x000389c7) list_single_graphic_pane_g3_cp2

0x32fd,	// (0x0003a013) list_single_graphic_pane_t1_cp2_ParamLimits

0x32fd,	// (0x0003a013) list_single_graphic_pane_t1_cp2

0x1ca5,	// (0x000389bb) list_single_number_pane_g1_cp2_ParamLimits

0x1ca5,	// (0x000389bb) list_single_number_pane_g1_cp2

0x1cb1,	// (0x000389c7) list_single_number_pane_g2_cp2

0x32fd,	// (0x0003a013) list_single_number_pane_t1_cp2_ParamLimits

0x32fd,	// (0x0003a013) list_single_number_pane_t1_cp2

0xc39d,	// (0x000430b3) list_single_number_pane_t2_cp2_ParamLimits

0xc39d,	// (0x000430b3) list_single_number_pane_t2_cp2

0xa2e6,	// (0x00040ffc) list_double2_pane_g1_cp2_ParamLimits

0xa2e6,	// (0x00040ffc) list_double2_pane_g1_cp2

0xf3f3,	// (0x00046109) list_double2_pane_g2_cp2

0x1c17,	// (0x0003892d) list_double2_pane_t1_cp2_ParamLimits

0x1c17,	// (0x0003892d) list_double2_pane_t1_cp2

0x1c2d,	// (0x00038943) list_double2_pane_t2_cp2_ParamLimits

0x1c2d,	// (0x00038943) list_double2_pane_t2_cp2

0x1c3f,	// (0x00038955) list_double_pane_g1_cp2_ParamLimits

0x1c3f,	// (0x00038955) list_double_pane_g1_cp2

0x1c4b,	// (0x00038961) list_double_pane_g2_cp2

0x1c53,	// (0x00038969) list_double_pane_t1_cp2_ParamLimits

0x1c53,	// (0x00038969) list_double_pane_t1_cp2

0x1c69,	// (0x0003897f) list_double_pane_t2_cp2_ParamLimits

0x1c69,	// (0x0003897f) list_double_pane_t2_cp2

0x1c95,	// (0x000389ab) list_single_pane_cp2_g3

0x1ca5,	// (0x000389bb) list_single_pane_g1_cp2_ParamLimits

0x1ca5,	// (0x000389bb) list_single_pane_g1_cp2

0x1cb1,	// (0x000389c7) list_single_pane_g2_cp2

0x1cb9,	// (0x000389cf) list_single_pane_t1_cp2_ParamLimits

0x1cb9,	// (0x000389cf) list_single_pane_t1_cp2

0xa34e,	// (0x00041064) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa34e,	// (0x00041064) list_single_large_graphic_pane_g1_cp2

0x1cdf,	// (0x000389f5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1cdf,	// (0x000389f5) list_single_large_graphic_pane_g2_cp2

0x1ceb,	// (0x00038a01) list_single_large_graphic_pane_g3_cp2

0x1cf3,	// (0x00038a09) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1cf3,	// (0x00038a09) list_single_large_graphic_pane_g4_cp1

0x1d0d,	// (0x00038a23) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1d0d,	// (0x00038a23) list_single_large_graphic_pane_t1_cp2

0x32c7,	// (0x00039fdd) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x32c7,	// (0x00039fdd) list_single_graphic_heading_pane_g1_cp2

0xc378,	// (0x0004308e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc378,	// (0x0004308e) list_single_graphic_heading_pane_g4_cp2

0x1cb1,	// (0x000389c7) list_single_graphic_heading_pane_g5_cp2

0x32d3,	// (0x00039fe9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x32d3,	// (0x00039fe9) list_single_graphic_heading_pane_t1_cp2

0xc389,	// (0x0004309f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc389,	// (0x0004309f) list_single_graphic_heading_pane_t2_cp2

0x3288,	// (0x00039f9e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3288,	// (0x00039f9e) list_single_2graphic_pane_g1_cp2

0xc378,	// (0x0004308e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc378,	// (0x0004308e) list_single_2graphic_pane_g2_cp2

0x1cb1,	// (0x000389c7) list_single_2graphic_pane_g3_cp2

0x32a5,	// (0x00039fbb) list_single_2graphic_pane_g4_cp2_ParamLimits

0x32a5,	// (0x00039fbb) list_single_2graphic_pane_g4_cp2

0x32b1,	// (0x00039fc7) list_single_2graphic_pane_t1_cp2_ParamLimits

0x32b1,	// (0x00039fc7) list_single_2graphic_pane_t1_cp2

0x87ab,	// (0x0003f4c1) list_highlight_pane_g10_cp1

0x2e60,	// (0x00039b76) list_highlight_pane_g1_cp1

0x2e68,	// (0x00039b7e) list_highlight_pane_g2_cp1

0x2e70,	// (0x00039b86) list_highlight_pane_g3_cp1

0x2e78,	// (0x00039b8e) list_highlight_pane_g4_cp1

0x2e80,	// (0x00039b96) list_highlight_pane_g5_cp1

0x2e88,	// (0x00039b9e) list_highlight_pane_g6_cp1

0x2e90,	// (0x00039ba6) list_highlight_pane_g7_cp1

0x2e98,	// (0x00039bae) list_highlight_pane_g8_cp1

0x2ea0,	// (0x00039bb6) list_highlight_pane_g9_cp1

0xc33e,	// (0x00043054) form_field_slider_pane_t3

0xc34c,	// (0x00043062) form_field_slider_pane_t4

0x2d9c,	// (0x00039ab2) slider_form_pane_ParamLimits

0x2d9c,	// (0x00039ab2) slider_form_pane

0x87b5,	// (0x0003f4cb) control_abbreviations

0x87b5,	// (0x0003f4cb) control_conventions

0x87b5,	// (0x0003f4cb) control_definitions

0x87b5,	// (0x0003f4cb) format_table_attribute

0x358e,	// (0x0003a2a4) bg_popup_preview_window_pane_g9

0x87b5,	// (0x0003f4cb) format_table_data2

0x87b5,	// (0x0003f4cb) format_table_data3

0x87b5,	// (0x0003f4cb) format_table_data_example

0x0008,

0x87b5,	// (0x0003f4cb) intro_purpose

0xf8f0,	// (0x00046606) bg_popup_preview_window_pane_g

0x87b5,	// (0x0003f4cb) texts_category

0x87b5,	// (0x0003f4cb) texts_graphics

0x1d23,	// (0x00038a39) text_digital

0x1d32,	// (0x00038a48) text_primary

0x1d41,	// (0x00038a57) text_primary_small

0x1d50,	// (0x00038a66) text_secondary

0x1d5f,	// (0x00038a75) text_title

0x3d0a,	// (0x0003aa20) bg_passive_tab_pane_g1_cp3_srt

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp3_srt

0x3d13,	// (0x0003aa29) bg_passive_tab_pane_g3_cp3_srt

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp3_srt_ParamLimits

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp3_srt

0x3d1c,	// (0x0003aa32) tabs_4_active_pane_srt_g1

0xc7f8,	// (0x0004350e) tabs_4_active_pane_srt_t1_ParamLimits

0xc7f8,	// (0x0004350e) tabs_4_active_pane_srt_t1

0x3d0a,	// (0x0003aa20) bg_active_tab_pane_g1_cp3_copy1

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp3_copy1

0x3d13,	// (0x0003aa29) bg_active_tab_pane_g3_cp3_copy1

0x8803,	// (0x0003f519) tabs_2_long_active_pane_srt_ParamLimits

0x8803,	// (0x0003f519) tabs_2_long_active_pane_srt

0x8803,	// (0x0003f519) tabs_2_long_passive_pane_srt_ParamLimits

0x8803,	// (0x0003f519) tabs_2_long_passive_pane_srt

0x20ba,	// (0x00038dd0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x20ba,	// (0x00038dd0) bg_passive_tab_pane_cp4_srt

0x39de,	// (0x0003a6f4) bg_passive_tab_pane_g1_cp4_srt

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp4_srt

0x39e7,	// (0x0003a6fd) bg_passive_tab_pane_g3_cp4_srt

0x8803,	// (0x0003f519) bg_active_tab_pane_cp4_srt_ParamLimits

0x8803,	// (0x0003f519) bg_active_tab_pane_cp4_srt

0xc5da,	// (0x000432f0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc5da,	// (0x000432f0) tabs_2_long_active_pane_srt_t1

0x39de,	// (0x0003a6f4) bg_active_tab_pane_g1_cp4_srt

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp4_srt

0x39e7,	// (0x0003a6fd) bg_active_tab_pane_g3_cp4_srt

0x8936,	// (0x0003f64c) tabs_3_long_active_pane_srt_ParamLimits

0x8936,	// (0x0003f64c) tabs_3_long_active_pane_srt

0x8936,	// (0x0003f64c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8936,	// (0x0003f64c) tabs_3_long_passive_pane_cp_srt

0x8936,	// (0x0003f64c) tabs_3_long_passive_pane_srt_ParamLimits

0x8936,	// (0x0003f64c) tabs_3_long_passive_pane_srt

0x20ba,	// (0x00038dd0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x20ba,	// (0x00038dd0) bg_passive_tab_pane_cp5_srt

0xf3e1,	// (0x000460f7) bg_passive_tab_pane_g1_cp5_srt

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp5_srt

0xf3ea,	// (0x00046100) bg_passive_tab_pane_g3_cp5_srt

0x8803,	// (0x0003f519) bg_active_tab_pane_cp5_srt_ParamLimits

0x8803,	// (0x0003f519) bg_active_tab_pane_cp5_srt

0xc5c4,	// (0x000432da) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc5c4,	// (0x000432da) tabs_3_long_active_pane_srt_t1

0xf3e1,	// (0x000460f7) bg_active_tab_pane_g1_cp5_srt

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp5_srt

0xf3ea,	// (0x00046100) bg_active_tab_pane_g3_cp5_srt

0x39be,	// (0x0003a6d4) navi_text_pane_srt_t1

0x39b6,	// (0x0003a6cc) navi_icon_pane_srt_g1

0x1f2a,	// (0x00038c40) midp_editing_number_pane_srt

0x1d6e,	// (0x00038a84) midp_ticker_pane_srt

0x1f32,	// (0x00038c48) midp_ticker_pane_srt_g1

0x1f3a,	// (0x00038c50) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0004648e) midp_ticker_pane_srt_g

0x1f42,	// (0x00038c58) midp_ticker_pane_srt_t1

0x39a7,	// (0x0003a6bd) midp_editing_number_pane_t1_copy1

0x20ba,	// (0x00038dd0) listscroll_midp_pane

0x20ba,	// (0x00038dd0) midp_form_pane

0x1dd8,	// (0x00038aee) midp_info_popup_window_ParamLimits

0x1dd8,	// (0x00038aee) midp_info_popup_window

0xbb3f,	// (0x00042855) bg_popup_sub_pane_cp50_ParamLimits

0xbb3f,	// (0x00042855) bg_popup_sub_pane_cp50

0x2a96,	// (0x000397ac) listscroll_midp_info_pane_ParamLimits

0x2a96,	// (0x000397ac) listscroll_midp_info_pane

0x2a7e,	// (0x00039794) listscroll_form_midp_pane_ParamLimits

0x2a7e,	// (0x00039794) listscroll_form_midp_pane

0x2a8a,	// (0x000397a0) scroll_bar_cp050

0xc332,	// (0x00043048) list_midp_pane

0x47ef,	// (0x0003b505) signal_pane_g2_cp

0x2998,	// (0x000396ae) listscroll_midp_info_pane_t1_ParamLimits

0x2998,	// (0x000396ae) listscroll_midp_info_pane_t1

0x29b0,	// (0x000396c6) listscroll_midp_info_pane_t2_ParamLimits

0x29b0,	// (0x000396c6) listscroll_midp_info_pane_t2

0x29ee,	// (0x00039704) listscroll_midp_info_pane_t3_ParamLimits

0x29ee,	// (0x00039704) listscroll_midp_info_pane_t3

0x2a28,	// (0x0003973e) listscroll_midp_info_pane_t4_ParamLimits

0x2a28,	// (0x0003973e) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x00046541) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x00046541) listscroll_midp_info_pane_t

0xbbbf,	// (0x000428d5) scroll_pane_cp21

0x2932,	// (0x00039648) form_midp_field_choice_group_pane

0x293b,	// (0x00039651) form_midp_field_text_pane

0x297e,	// (0x00039694) form_midp_field_time_pane

0x2986,	// (0x0003969c) form_midp_gauge_slider_pane

0x298f,	// (0x000396a5) form_midp_gauge_wait_pane

0x87b5,	// (0x0003f4cb) form_midp_image_pane

0xae2a,	// (0x00041b40) list_single_midp_pane_ParamLimits

0xae2a,	// (0x00041b40) list_single_midp_pane

0xc30a,	// (0x00043020) form_midp_field_text_pane_t1

0x26e2,	// (0x000393f8) input_focus_pane_cp050

0x2921,	// (0x00039637) list_midp_form_text_pane

0x28c5,	// (0x000395db) form_midp_field_choice_group_pane_t1

0x28d3,	// (0x000395e9) input_focus_pane_cp051

0x28e7,	// (0x000395fd) list_midp_choice_pane

0x87b5,	// (0x0003f4cb) status_idle_pane

0x28a9,	// (0x000395bf) form_midp_field_time_pane_t1

0x87ab,	// (0x0003f4c1) wait_anim_pane_g2_copy1

0x28b7,	// (0x000395cd) form_midp_field_time_pane_t2

0x0001,

0x1e88,	// (0x00038b9e) aid_navinavi_width_2_pane

0xf826,	// (0x0004653c) form_midp_field_time_pane_t

0x87b5,	// (0x0003f4cb) input_focus_pane_cp052

0x87b5,	// (0x0003f4cb) bg_input_focus_pane_cp040

0x2869,	// (0x0003957f) form_midp_gauge_slider_pane_t1

0x2877,	// (0x0003958d) form_midp_gauge_slider_pane_t2

0xc2ee,	// (0x00043004) form_midp_gauge_slider_pane_t3

0xc2fc,	// (0x00043012) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x00046533) form_midp_gauge_slider_pane_t

0x28a1,	// (0x000395b7) form_midp_slider_pane

0x8803,	// (0x0003f519) bg_input_focus_pane_cp041_ParamLimits

0x8803,	// (0x0003f519) bg_input_focus_pane_cp041

0x2836,	// (0x0003954c) form_midp_gauge_wait_pane_t1_ParamLimits

0x2836,	// (0x0003954c) form_midp_gauge_wait_pane_t1

0x2848,	// (0x0003955e) form_midp_gauge_wait_pane_t2_ParamLimits

0x2848,	// (0x0003955e) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0004652e) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0004652e) form_midp_gauge_wait_pane_t

0x285a,	// (0x00039570) form_midp_wait_pane_ParamLimits

0x285a,	// (0x00039570) form_midp_wait_pane

0x27fe,	// (0x00039514) form_midp_image_pane_g1

0x2807,	// (0x0003951d) form_midp_image_pane_t1

0x2816,	// (0x0003952c) form_midp_image_pane_t2

0x2825,	// (0x0003953b) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00046527) form_midp_image_pane_t

0x27f5,	// (0x0003950b) list_single_midp_pane_g1

0xd449,	// (0x0004415f) list_single_midp_pane_t1

0xc2d7,	// (0x00042fed) list_midp_form_item_pane_ParamLimits

0xc2d7,	// (0x00042fed) list_midp_form_item_pane

0x1e30,	// (0x00038b46) list_midp_form_item_pane_t1

0x1e3f,	// (0x00038b55) midp_ticker_pane_g1

0x1e4b,	// (0x00038b61) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00046474) midp_ticker_pane_g

0xa3f3,	// (0x00041109) midp_ticker_pane_t1

0xc769,	// (0x0004347f) midp_editing_number_pane_t1

0x3bf8,	// (0x0003a90e) midp_editing_number_pane

0x3c07,	// (0x0003a91d) midp_ticker_pane

0x3997,	// (0x0003a6ad) ai_message_heading_pane

0x87b5,	// (0x0003f4cb) bg_popup_window_pane_cp14

0x399f,	// (0x0003a6b5) listscroll_ai_message_pane

0x391d,	// (0x0003a633) ai_message_heading_pane_g1_ParamLimits

0x391d,	// (0x0003a633) ai_message_heading_pane_g1

0x3929,	// (0x0003a63f) ai_message_heading_pane_g2_ParamLimits

0x3929,	// (0x0003a63f) ai_message_heading_pane_g2

0x3937,	// (0x0003a64d) ai_message_heading_pane_g3_ParamLimits

0x3937,	// (0x0003a64d) ai_message_heading_pane_g3

0x3943,	// (0x0003a659) ai_message_heading_pane_g4_ParamLimits

0x3943,	// (0x0003a659) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00046668) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00046668) ai_message_heading_pane_g

0x394f,	// (0x0003a665) ai_message_heading_pane_t1_ParamLimits

0x394f,	// (0x0003a665) ai_message_heading_pane_t1

0x3969,	// (0x0003a67f) ai_message_heading_pane_t2_ParamLimits

0x3969,	// (0x0003a67f) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00046671) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00046671) ai_message_heading_pane_t

0x397d,	// (0x0003a693) bg_popup_heading_pane_cp1_ParamLimits

0x397d,	// (0x0003a693) bg_popup_heading_pane_cp1

0x390b,	// (0x0003a621) list_ai_message_pane_ParamLimits

0x390b,	// (0x0003a621) list_ai_message_pane

0xbbbf,	// (0x000428d5) scroll_pane_cp10

0x38a7,	// (0x0003a5bd) list_ai_message_pane_g1

0x38af,	// (0x0003a5c5) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x00046645) list_ai_message_pane_g

0x38b7,	// (0x0003a5cd) list_ai_message_pane_t1_ParamLimits

0x38b7,	// (0x0003a5cd) list_ai_message_pane_t1

0x38cc,	// (0x0003a5e2) list_ai_message_pane_t2_ParamLimits

0x38cc,	// (0x0003a5e2) list_ai_message_pane_t2

0x38e1,	// (0x0003a5f7) list_ai_message_pane_t3_ParamLimits

0x38e1,	// (0x0003a5f7) list_ai_message_pane_t3

0x38f6,	// (0x0003a60c) list_ai_message_pane_t4_ParamLimits

0x38f6,	// (0x0003a60c) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0004664a) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0004664a) list_ai_message_pane_t

0xc5aa,	// (0x000432c0) cell_ai_soft_ind_pane_ParamLimits

0xc5aa,	// (0x000432c0) cell_ai_soft_ind_pane

0x1e69,	// (0x00038b7f) cell_ai_soft_ind_pane_g1_ParamLimits

0x1e69,	// (0x00038b7f) cell_ai_soft_ind_pane_g1

0x87b5,	// (0x0003f4cb) grid_highlight_cp1

0x1e76,	// (0x00038b8c) text_secondary_cp56_ParamLimits

0x1e76,	// (0x00038b8c) text_secondary_cp56

0x3865,	// (0x0003a57b) example_general_pane_ParamLimits

0x3865,	// (0x0003a57b) example_general_pane

0x3871,	// (0x0003a587) example_parent_pane_g1_ParamLimits

0x3871,	// (0x0003a587) example_parent_pane_g1

0x387d,	// (0x0003a593) example_parent_pane_t1_ParamLimits

0x387d,	// (0x0003a593) example_parent_pane_t1

0xa9b6,	// (0x000416cc) popup_preview_text_window_ParamLimits

0xa9b6,	// (0x000416cc) popup_preview_text_window

0x1c9d,	// (0x000389b3) list_single_pane_cp2_g4

0x89ec,	// (0x0003f702) bg_popup_preview_window_pane_ParamLimits

0x89ec,	// (0x0003f702) bg_popup_preview_window_pane

0x3598,	// (0x0003a2ae) popup_preview_text_window_t1_ParamLimits

0x3598,	// (0x0003a2ae) popup_preview_text_window_t1

0x35b6,	// (0x0003a2cc) popup_preview_text_window_t2_ParamLimits

0x35b6,	// (0x0003a2cc) popup_preview_text_window_t2

0x35ff,	// (0x0003a315) popup_preview_text_window_t3_ParamLimits

0x35ff,	// (0x0003a315) popup_preview_text_window_t3

0x3644,	// (0x0003a35a) popup_preview_text_window_t4_ParamLimits

0x3644,	// (0x0003a35a) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00046619) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00046619) popup_preview_text_window_t

0x36c2,	// (0x0003a3d8) scroll_pane_cp11

0x25e6,	// (0x000392fc) bg_popup_preview_window_pane_g1

0x354c,	// (0x0003a262) bg_popup_preview_window_pane_g2

0x3556,	// (0x0003a26c) bg_popup_preview_window_pane_g3

0x3560,	// (0x0003a276) bg_popup_preview_window_pane_g4

0x356a,	// (0x0003a280) bg_popup_preview_window_pane_g5

0x3574,	// (0x0003a28a) bg_popup_preview_window_pane_g6

0x357c,	// (0x0003a292) bg_popup_preview_window_pane_g7

0x3584,	// (0x0003a29a) bg_popup_preview_window_pane_g8

0xeab3,	// (0x000457c9) aid_popup_width_pane

0xa926,	// (0x0004163c) popup_midp_note_alarm_window_ParamLimits

0xa926,	// (0x0004163c) popup_midp_note_alarm_window

0xba7b,	// (0x00042791) data_form_pane_ParamLimits

0x9e67,	// (0x00040b7d) form_field_data_pane_g1

0x9e71,	// (0x00040b87) form_field_data_pane_t1_ParamLimits

0xba87,	// (0x0004279d) input_focus_pane_ParamLimits

0xba95,	// (0x000427ab) data_form_wide_pane_ParamLimits

0xd35d,	// (0x00044073) form_field_data_wide_pane_g1

0xd369,	// (0x0004407f) form_field_data_wide_pane_t1_ParamLimits

0xb802,	// (0x00042518) input_focus_pane_cp6_ParamLimits

0x9f9f,	// (0x00040cb5) input_popup_find_pane_g1_ParamLimits

0x9f9f,	// (0x00040cb5) input_popup_find_pane_g1

0xeee8,	// (0x00045bfe) aid_navi_side_left_pane

0xeefd,	// (0x00045c13) aid_navi_side_right_pane

0x2f5b,	// (0x00039c71) bg_popup_window_pane_cp30_ParamLimits

0x2f5b,	// (0x00039c71) bg_popup_window_pane_cp30

0x2fd5,	// (0x00039ceb) popup_midp_note_alarm_window_g1_ParamLimits

0x2fd5,	// (0x00039ceb) popup_midp_note_alarm_window_g1

0x3005,	// (0x00039d1b) popup_midp_note_alarm_window_t1_ParamLimits

0x3005,	// (0x00039d1b) popup_midp_note_alarm_window_t1

0x30a6,	// (0x00039dbc) popup_midp_note_alarm_window_t2_ParamLimits

0x30a6,	// (0x00039dbc) popup_midp_note_alarm_window_t2

0x3154,	// (0x00039e6a) popup_midp_note_alarm_window_t3_ParamLimits

0x3154,	// (0x00039e6a) popup_midp_note_alarm_window_t3

0x3186,	// (0x00039e9c) popup_midp_note_alarm_window_t4_ParamLimits

0x3186,	// (0x00039e9c) popup_midp_note_alarm_window_t4

0x31ac,	// (0x00039ec2) popup_midp_note_alarm_window_t5_ParamLimits

0x31ac,	// (0x00039ec2) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x000465b6) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x000465b6) popup_midp_note_alarm_window_t

0x3258,	// (0x00039f6e) wait_bar_pane_cp1_ParamLimits

0x3258,	// (0x00039f6e) wait_bar_pane_cp1

0x87b5,	// (0x0003f4cb) wait_anim_pane_copy1

0x87b5,	// (0x0003f4cb) wait_border_pane_copy1

0x2c40,	// (0x00039956) wait_border_pane_g1_copy1

0xd383,	// (0x00044099) form_field_popup_pane_g1

0x9e8b,	// (0x00040ba1) form_field_popup_pane_t1_ParamLimits

0xba87,	// (0x0004279d) input_focus_pane_cp7_ParamLimits

0xbac1,	// (0x000427d7) list_form_pane_ParamLimits

0xd38b,	// (0x000440a1) form_field_popup_wide_pane_g1

0xd393,	// (0x000440a9) form_field_popup_wide_pane_t1_ParamLimits

0xba87,	// (0x0004279d) input_focus_pane_cp8_ParamLimits

0xbacd,	// (0x000427e3) list_form_wide_pane_ParamLimits

0x3d97,	// (0x0003aaad) aid_size_cell_graphic_pane

0x9f0a,	// (0x00040c20) data_form_pane_t1_ParamLimits

0xafc3,	// (0x00041cd9) data_form_wide_pane_t1_ParamLimits

0xbf60,	// (0x00042c76) bg_status_flat_pane

0x9654,	// (0x0004036a) title_pane_t1_ParamLimits

0x87cb,	// (0x0003f4e1) title_pane_t2_ParamLimits

0x87f1,	// (0x0003f507) title_pane_t3_ParamLimits

0xf55d,	// (0x00046273) title_pane_t_ParamLimits

0xa0ab,	// (0x00040dc1) level_1_signal_ParamLimits

0xa0bd,	// (0x00040dd3) level_2_signal_ParamLimits

0xa0d0,	// (0x00040de6) level_3_signal_ParamLimits

0xa0e3,	// (0x00040df9) level_4_signal_ParamLimits

0xa0f6,	// (0x00040e0c) level_5_signal_ParamLimits

0xa109,	// (0x00040e1f) level_6_signal_ParamLimits

0xa11c,	// (0x00040e32) level_7_signal_ParamLimits

0xa0ab,	// (0x00040dc1) level_1_battery_ParamLimits

0xa0bd,	// (0x00040dd3) level_2_battery_ParamLimits

0xa0d0,	// (0x00040de6) level_3_battery_ParamLimits

0xa0e3,	// (0x00040df9) level_4_battery_ParamLimits

0xa0f6,	// (0x00040e0c) level_5_battery_ParamLimits

0xa109,	// (0x00040e1f) level_6_battery_ParamLimits

0xa11c,	// (0x00040e32) level_7_battery_ParamLimits

0x2e60,	// (0x00039b76) bg_status_flat_pane_g1

0x2e68,	// (0x00039b7e) bg_status_flat_pane_g2

0x2e70,	// (0x00039b86) bg_status_flat_pane_g3

0x2e78,	// (0x00039b8e) bg_status_flat_pane_g4

0x2e80,	// (0x00039b96) bg_status_flat_pane_g5

0x2e88,	// (0x00039b9e) bg_status_flat_pane_g6

0x2e90,	// (0x00039ba6) bg_status_flat_pane_g7

0x96e8,	// (0x000403fe) tabs_3_active_pane_t1_ParamLimits

0x96e8,	// (0x000403fe) tabs_3_passive_pane_t1_ParamLimits

0x9702,	// (0x00040418) tabs_4_active_pane_t1_ParamLimits

0x9702,	// (0x00040418) tabs_4_1_passive_pane_t1_ParamLimits

0x9fb5,	// (0x00040ccb) tabs_2_active_pane_t1_ParamLimits

0x9fb5,	// (0x00040ccb) tabs_2_passive_pane_t1_ParamLimits

0x8803,	// (0x0003f519) bg_active_tab_pane_cp4_ParamLimits

0x9fc7,	// (0x00040cdd) tabs_2_long_active_pane_t1_ParamLimits

0x20ba,	// (0x00038dd0) bg_passive_tab_pane_cp4_ParamLimits

0x07f1,	// (0x00037507) list_single_midp_graphic_pane_t1_ParamLimits

0x8803,	// (0x0003f519) bg_active_tab_pane_cp5_ParamLimits

0x9fda,	// (0x00040cf0) tabs_3_long_active_pane_t1_ParamLimits

0x20ba,	// (0x00038dd0) bg_passive_tab_pane_cp5_ParamLimits

0x07f1,	// (0x00037507) list_single_midp_graphic_pane_t1

0xbf60,	// (0x00042c76) bg_status_flat_pane_ParamLimits

0x225e,	// (0x00038f74) indicator_pane_cp2_ParamLimits

0x225e,	// (0x00038f74) indicator_pane_cp2

0xc0f6,	// (0x00042e0c) navi_pane_srt_ParamLimits

0xc0f6,	// (0x00042e0c) navi_pane_srt

0x23c5,	// (0x000390db) popup_clock_digital_analogue_window_cp1

0x8847,	// (0x0003f55d) indicator_pane_t1

0x1d6e,	// (0x00038a84) copy_highlight_pane

0x1d6e,	// (0x00038a84) cursor_graphics_pane

0x1d6e,	// (0x00038a84) graphic_within_text_pane

0x1d6e,	// (0x00038a84) link_highlight_pane

0x3685,	// (0x0003a39b) popup_preview_text_window_t5_ParamLimits

0x3685,	// (0x0003a39b) popup_preview_text_window_t5

0x1e92,	// (0x00038ba8) cursor_digital_pane

0x1e92,	// (0x00038ba8) cursor_primary_pane

0x1ea3,	// (0x00038bb9) cursor_primary_small_pane

0x1eab,	// (0x00038bc1) cursor_secondary_pane

0x1eb3,	// (0x00038bc9) cursor_title_pane

0x1e92,	// (0x00038ba8) link_highlight_digital_pane

0x1e9a,	// (0x00038bb0) link_highlight_primary_pane

0x1ea3,	// (0x00038bb9) link_highlight_primary_small_pane

0x1eab,	// (0x00038bc1) link_highlight_secondary_pane

0x1eb3,	// (0x00038bc9) link_highlight_title_pane

0x1e92,	// (0x00038ba8) copy_highlight_digital_pane

0x1e92,	// (0x00038ba8) copy_highlight_primary_pane

0x1ea3,	// (0x00038bb9) copy_highlight_primary_small_pane

0x1eab,	// (0x00038bc1) copy_highlight_secondary_pane

0x1eb3,	// (0x00038bc9) copy_highlight_title_pane

0x1eab,	// (0x00038bc1) graphic_text_digital_pane

0x2efe,	// (0x00039c14) graphic_text_primary_pane

0x2f07,	// (0x00039c1d) graphic_text_primary_small_pane

0x1ea3,	// (0x00038bb9) graphic_text_secondary_pane

0x1e92,	// (0x00038ba8) graphic_text_title_pane

0xa405,	// (0x0004111b) cursor_primary_pane_g1

0x2ef0,	// (0x00039c06) cursor_text_primary_t1

0xc36e,	// (0x00043084) cursor_primary_small_pane_g1

0x2ee2,	// (0x00039bf8) cursor_text_primary_small_t1

0xc364,	// (0x0004307a) cursor_primary_small_pane_g1_copy1

0x2eca,	// (0x00039be0) cursor_text_primary_small_t1_copy1

0x2ea8,	// (0x00039bbe) cursor_text_title_t1

0xc35a,	// (0x00043070) cursor_title_pane_g1

0xa405,	// (0x0004111b) cursor_digital_pane_g1

0x1ec5,	// (0x00038bdb) cursor_text_digital_t1

0x1ed3,	// (0x00038be9) link_highlight_primary_pane_g1

0x2e51,	// (0x00039b67) link_highlight_primary_pane_t1

0x1ed3,	// (0x00038be9) link_highlight_primary_small_pane_g1

0x1edb,	// (0x00038bf1) link_highlight_primary_small_pane_t1

0x1eea,	// (0x00038c00) link_highlight_secondary_pane_g1

0x1ef2,	// (0x00038c08) link_highlight_secondary_pane_t1

0x2dc5,	// (0x00039adb) link_highlight_title_pane_g1

0x2dcd,	// (0x00039ae3) link_highlight_title_pane_t1

0x2dae,	// (0x00039ac4) link_highlight_digital_pane_g1

0x2db6,	// (0x00039acc) link_highlight_digital_pane_t1

0x2c76,	// (0x0003998c) copy_highlight_primary_pane_g1

0x2c8d,	// (0x000399a3) copy_highlight_primary_pane_t1

0x2c76,	// (0x0003998c) copy_highlight_primary_small_pane_g1

0x2c7e,	// (0x00039994) copy_highlight_primary_small_pane_t1

0x1f01,	// (0x00038c17) copy_highlight_secondary_pane_g1

0x1f09,	// (0x00038c1f) copy_highlight_secondary_pane_t1

0x2c5f,	// (0x00039975) copy_highlight_title_pane_g1

0x2c67,	// (0x0003997d) copy_highlight_title_pane_t1

0x2c76,	// (0x0003998c) copy_highlight_digital_pane_g1

0x3f67,	// (0x0003ac7d) copy_highlight_digital_pane_t1

0x3ebb,	// (0x0003abd1) graphic_text_primary_pane_g1

0x3f4b,	// (0x0003ac61) graphic_text_primary_pane_t1

0x3f59,	// (0x0003ac6f) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x000466e5) graphic_text_primary_pane_t

0x3f27,	// (0x0003ac3d) graphic_text_primary_small_pane_g1

0x3f2f,	// (0x0003ac45) graphic_text_primary_small_pane_t1

0x3f3d,	// (0x0003ac53) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x000466e0) graphic_text_primary_small_pane_t

0x3f03,	// (0x0003ac19) graphic_text_secondary_pane_g1

0x3f0b,	// (0x0003ac21) graphic_text_secondary_pane_t1

0x3f19,	// (0x0003ac2f) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x000466db) graphic_text_secondary_pane_t

0x3edf,	// (0x0003abf5) graphic_text_title_pane_g1

0x3ee7,	// (0x0003abfd) graphic_text_title_pane_t1

0x3ef5,	// (0x0003ac0b) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x000466d6) graphic_text_title_pane_t

0x3ebb,	// (0x0003abd1) graphic_text_digital_pane_g1

0x3ec3,	// (0x0003abd9) graphic_text_digital_pane_t1

0x3ed1,	// (0x0003abe7) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x000466d1) graphic_text_digital_pane_t

0x8803,	// (0x0003f519) navi_icon_pane_srt_ParamLimits

0x8803,	// (0x0003f519) navi_icon_pane_srt

0x87b5,	// (0x0003f4cb) navi_midp_pane_srt

0x87b5,	// (0x0003f4cb) navi_navi_pane_srt

0x8803,	// (0x0003f519) navi_text_pane_srt_ParamLimits

0x8803,	// (0x0003f519) navi_text_pane_srt

0x3e86,	// (0x0003ab9c) navi_navi_icon_text_pane_srt

0x3e8e,	// (0x0003aba4) navi_navi_pane_srt_g1_ParamLimits

0x3e8e,	// (0x0003aba4) navi_navi_pane_srt_g1

0x3ea0,	// (0x0003abb6) navi_navi_pane_srt_g2_ParamLimits

0x3ea0,	// (0x0003abb6) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x000466cc) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x000466cc) navi_navi_pane_srt_g

0x3eb2,	// (0x0003abc8) navi_navi_tabs_pane_srt

0x3e86,	// (0x0003ab9c) navi_navi_text_pane_srt

0x3e86,	// (0x0003ab9c) navi_navi_volume_pane_srt

0x3e77,	// (0x0003ab8d) navi_navi_text_pane_srt_t1

0x0c61,	// (0x00037977) navi_navi_volume_pane_srt_g1

0x0c69,	// (0x0003797f) volume_small_pane_srt_ParamLimits

0x0c69,	// (0x0003797f) volume_small_pane_srt

0xf4ab,	// (0x000461c1) volume_small_pane_srt_g1_ParamLimits

0xf4ab,	// (0x000461c1) volume_small_pane_srt_g1

0xf4bb,	// (0x000461d1) volume_small_pane_srt_g2_ParamLimits

0xf4bb,	// (0x000461d1) volume_small_pane_srt_g2

0xf4cc,	// (0x000461e2) volume_small_pane_srt_g3_ParamLimits

0xf4cc,	// (0x000461e2) volume_small_pane_srt_g3

0xf4dd,	// (0x000461f3) volume_small_pane_srt_g4_ParamLimits

0xf4dd,	// (0x000461f3) volume_small_pane_srt_g4

0xf4ee,	// (0x00046204) volume_small_pane_srt_g5_ParamLimits

0xf4ee,	// (0x00046204) volume_small_pane_srt_g5

0xf4ff,	// (0x00046215) volume_small_pane_srt_g6_ParamLimits

0xf4ff,	// (0x00046215) volume_small_pane_srt_g6

0xf510,	// (0x00046226) volume_small_pane_srt_g7_ParamLimits

0xf510,	// (0x00046226) volume_small_pane_srt_g7

0xf521,	// (0x00046237) volume_small_pane_srt_g8_ParamLimits

0xf521,	// (0x00046237) volume_small_pane_srt_g8

0xf532,	// (0x00046248) volume_small_pane_srt_g9_ParamLimits

0xf532,	// (0x00046248) volume_small_pane_srt_g9

0xf543,	// (0x00046259) volume_small_pane_srt_g10_ParamLimits

0xf543,	// (0x00046259) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00046479) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00046479) volume_small_pane_srt_g

0xb702,	// (0x00042418) query_popup_data_pane_cp2

0x3e5d,	// (0x0003ab73) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3e5d,	// (0x0003ab73) navi_navi_icon_text_pane_srt_t1

0x2efe,	// (0x00039c14) navi_tabs_2_long_pane_srt

0x2efe,	// (0x00039c14) navi_tabs_2_pane_srt

0x2efe,	// (0x00039c14) navi_tabs_3_long_pane_srt

0x2efe,	// (0x00039c14) navi_tabs_3_pane_srt

0x2efe,	// (0x00039c14) navi_tabs_4_pane_srt

0x0c41,	// (0x00037957) tabs_2_active_pane_srt_ParamLimits

0x0c41,	// (0x00037957) tabs_2_active_pane_srt

0x0c51,	// (0x00037967) tabs_2_passive_pane_srt_ParamLimits

0x0c51,	// (0x00037967) tabs_2_passive_pane_srt

0x26e2,	// (0x000393f8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x26e2,	// (0x000393f8) bg_passive_tab_pane_cp1_srt

0x3e29,	// (0x0003ab3f) bg_passive_tab_pane_g1_cp1_srt

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp1_srt

0x3e32,	// (0x0003ab48) bg_passive_tab_pane_g3_cp1_srt

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp1_srt_ParamLimits

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp1_srt

0x3e3b,	// (0x0003ab51) tabs_2_active_pane_srt_g1

0xc879,	// (0x0004358f) tabs_2_active_pane_srt_t1_ParamLimits

0xc879,	// (0x0004358f) tabs_2_active_pane_srt_t1

0x3e29,	// (0x0003ab3f) bg_active_tab_pane_g1_cp1_srt

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp1_srt

0x3e32,	// (0x0003ab48) bg_active_tab_pane_g3_cp1_srt

0x0c0e,	// (0x00037924) tabs_3_active_pane_srt_ParamLimits

0x0c0e,	// (0x00037924) tabs_3_active_pane_srt

0x0c1f,	// (0x00037935) tabs_3_passive_pane_cp_srt_ParamLimits

0x0c1f,	// (0x00037935) tabs_3_passive_pane_cp_srt

0x0c30,	// (0x00037946) tabs_3_passive_pane_srt_ParamLimits

0x0c30,	// (0x00037946) tabs_3_passive_pane_srt

0x26e2,	// (0x000393f8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x26e2,	// (0x000393f8) bg_passive_tab_pane_cp2_srt

0x1f18,	// (0x00038c2e) bg_passive_tab_pane_g1_cp2_srt

0xf256,	// (0x00045f6c) bg_passive_tab_pane_g2_cp2_srt

0x1f21,	// (0x00038c37) bg_passive_tab_pane_g3_cp2_srt

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp2_srt_ParamLimits

0x8936,	// (0x0003f64c) bg_active_tab_pane_cp2_srt

0x3e0f,	// (0x0003ab25) tabs_3_active_pane_srt_g1

0xc863,	// (0x00043579) tabs_3_active_pane_srt_t1_ParamLimits

0xc863,	// (0x00043579) tabs_3_active_pane_srt_t1

0x1f18,	// (0x00038c2e) bg_active_tab_pane_g1_cp2_srt

0xf256,	// (0x00045f6c) bg_active_tab_pane_g2_cp2_srt

0x1f21,	// (0x00038c37) bg_active_tab_pane_g3_cp2_srt

0x0bc6,	// (0x000378dc) tabs_4_active_pane_srt_ParamLimits

0x0bc6,	// (0x000378dc) tabs_4_active_pane_srt

0x0bd8,	// (0x000378ee) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0bd8,	// (0x000378ee) tabs_4_passive_pane_cp2_srt

0x011a,	// (0x00036e30) aid_size_cell_toolbar

0x3a51,	// (0x0003a767) main_idle_act_pane_ParamLimits

0x02fb,	// (0x00037011) popup_large_graphic_colour_window_ParamLimits

0xac7c,	// (0x00041992) popup_toolbar_window_ParamLimits

0xac7c,	// (0x00041992) popup_toolbar_window

0xd46e,	// (0x00044184) list_single_graphic_2heading_pane_ParamLimits

0xd46e,	// (0x00044184) list_single_graphic_2heading_pane

0xbd97,	// (0x00042aad) aid_size_cell_apps_grid_lsc_pane

0xbda9,	// (0x00042abf) aid_size_cell_apps_grid_prt_pane

0x20ba,	// (0x00038dd0) bg_wml_button_pane_cp1_ParamLimits

0x20ba,	// (0x00038dd0) bg_wml_button_pane_cp1

0xc30a,	// (0x00043020) form_midp_field_text_pane_t1_ParamLimits

0x26e2,	// (0x000393f8) input_focus_pane_cp050_ParamLimits

0x2921,	// (0x00039637) list_midp_form_text_pane_ParamLimits

0x28d3,	// (0x000395e9) input_focus_pane_cp051_ParamLimits

0x28e7,	// (0x000395fd) list_midp_choice_pane_ParamLimits

0xc2c1,	// (0x00042fd7) list_single_2graphic_pane_cp3_ParamLimits

0xc2c1,	// (0x00042fd7) list_single_2graphic_pane_cp3

0x4b18,	// (0x0003b82e) list_single_midp_graphic_pane_ParamLimits

0x4b18,	// (0x0003b82e) list_single_midp_graphic_pane

0xed7c,	// (0x00045a92) list_single_graphic_2heading_pane_g1_ParamLimits

0xed7c,	// (0x00045a92) list_single_graphic_2heading_pane_g1

0xed88,	// (0x00045a9e) list_single_graphic_2heading_pane_g4_ParamLimits

0xed88,	// (0x00045a9e) list_single_graphic_2heading_pane_g4

0xed94,	// (0x00045aaa) list_single_graphic_2heading_pane_g5_ParamLimits

0xed94,	// (0x00045aaa) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x000464cc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x000464cc) list_single_graphic_2heading_pane_g

0xeda0,	// (0x00045ab6) list_single_graphic_2heading_pane_t1_ParamLimits

0xeda0,	// (0x00045ab6) list_single_graphic_2heading_pane_t1

0xedb4,	// (0x00045aca) list_single_graphic_2heading_pane_t2_ParamLimits

0xedb4,	// (0x00045aca) list_single_graphic_2heading_pane_t2

0xedd0,	// (0x00045ae6) list_single_graphic_2heading_pane_t3_ParamLimits

0xedd0,	// (0x00045ae6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x000464d3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x000464d3) list_single_graphic_2heading_pane_t

0x2524,	// (0x0003923a) bg_popup_sub_pane_cp2

0x254e,	// (0x00039264) grid_toobar_pane

0x0761,	// (0x00037477) cell_toolbar_pane_ParamLimits

0x0761,	// (0x00037477) cell_toolbar_pane

0x258a,	// (0x000392a0) cell_toolbar_pane_g1_ParamLimits

0x258a,	// (0x000392a0) cell_toolbar_pane_g1

0x259e,	// (0x000392b4) cell_toolbar_pane_g2_ParamLimits

0x259e,	// (0x000392b4) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x000464e1) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x000464e1) cell_toolbar_pane_g

0x25c0,	// (0x000392d6) grid_highlight_pane_cp2_ParamLimits

0x25c0,	// (0x000392d6) grid_highlight_pane_cp2

0x25da,	// (0x000392f0) toolbar_button_pane

0x25e6,	// (0x000392fc) toolbar_button_pane_g1

0x25ee,	// (0x00039304) toolbar_button_pane_g2

0x25f6,	// (0x0003930c) toolbar_button_pane_g3

0x25fe,	// (0x00039314) toolbar_button_pane_g4

0x2606,	// (0x0003931c) toolbar_button_pane_g5

0x260e,	// (0x00039324) toolbar_button_pane_g6

0x2616,	// (0x0003932c) toolbar_button_pane_g7

0x261e,	// (0x00039334) toolbar_button_pane_g8

0x2626,	// (0x0003933c) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x000464e6) toolbar_button_pane_g

0x0799,	// (0x000374af) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0799,	// (0x000374af) list_single_2graphic_pane_g1_cp3

0xadb8,	// (0x00041ace) list_single_2graphic_pane_g2_cp3_ParamLimits

0xadb8,	// (0x00041ace) list_single_2graphic_pane_g2_cp3

0x07b6,	// (0x000374cc) list_single_2graphic_pane_g3_cp3

0x07be,	// (0x000374d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07be,	// (0x000374d4) list_single_2graphic_pane_g4_cp3

0x07ca,	// (0x000374e0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x07ca,	// (0x000374e0) list_single_2graphic_pane_t1_cp3

0x07e5,	// (0x000374fb) list_single_midp_graphic_pane_g2_ParamLimits

0x07e5,	// (0x000374fb) list_single_midp_graphic_pane_g2

0x0122,	// (0x00036e38) aid_zoom_text_primary

0xed74,	// (0x00045a8a) aid_zoom_text_secondary

0x1fd5,	// (0x00038ceb) status_small_pane_g7_ParamLimits

0x1fd5,	// (0x00038ceb) status_small_pane_g7

0x1ff8,	// (0x00038d0e) status_small_pane_t1_ParamLimits

0x9630,	// (0x00040346) title_pane_g2

0x0003,

0xf554,	// (0x0004626a) title_pane_g

0x98c8,	// (0x000405de) aid_size_cell_colour_1_pane_ParamLimits

0x98c8,	// (0x000405de) aid_size_cell_colour_1_pane

0x98dc,	// (0x000405f2) aid_size_cell_colour_2_pane_ParamLimits

0x98dc,	// (0x000405f2) aid_size_cell_colour_2_pane

0x98f0,	// (0x00040606) aid_size_cell_colour_3_pane_ParamLimits

0x98f0,	// (0x00040606) aid_size_cell_colour_3_pane

0x9904,	// (0x0004061a) aid_size_cell_colour_4_pane_ParamLimits

0x9904,	// (0x0004061a) aid_size_cell_colour_4_pane

0xee24,	// (0x00045b3a) title_pane_stacon_g1_ParamLimits

0xee24,	// (0x00045b3a) title_pane_stacon_g1

0x2ce4,	// (0x000399fa) popup_note_wait_window_g3_ParamLimits

0x2ce4,	// (0x000399fa) popup_note_wait_window_g3

0x2d5b,	// (0x00039a71) popup_note_wait_window_t5_ParamLimits

0x2d5b,	// (0x00039a71) popup_note_wait_window_t5

0x87b5,	// (0x0003f4cb) main_feb_china_hwr_fs_writing_pane

0xa613,	// (0x00041329) popup_feb_china_hwr_fs_window_ParamLimits

0xa613,	// (0x00041329) popup_feb_china_hwr_fs_window

0xadc9,	// (0x00041adf) aid_size_cell_hwr_fs_ParamLimits

0xadc9,	// (0x00041adf) aid_size_cell_hwr_fs

0x26e2,	// (0x000393f8) bg_popup_sub_pane_cp3_ParamLimits

0x26e2,	// (0x000393f8) bg_popup_sub_pane_cp3

0xadde,	// (0x00041af4) grid_hwr_fs_pane_ParamLimits

0xadde,	// (0x00041af4) grid_hwr_fs_pane

0x0834,	// (0x0003754a) linegrid_hwr_fs_pane_ParamLimits

0x0834,	// (0x0003754a) linegrid_hwr_fs_pane

0xadf6,	// (0x00041b0c) cell_hwr_fs_pane_ParamLimits

0xadf6,	// (0x00041b0c) cell_hwr_fs_pane

0x26ee,	// (0x00039404) linegrid_hwr_fs_pane_g1_ParamLimits

0x26ee,	// (0x00039404) linegrid_hwr_fs_pane_g1

0xc295,	// (0x00042fab) linegrid_hwr_fs_pane_g2_ParamLimits

0xc295,	// (0x00042fab) linegrid_hwr_fs_pane_g2

0x270c,	// (0x00039422) linegrid_hwr_fs_pane_g3_ParamLimits

0x270c,	// (0x00039422) linegrid_hwr_fs_pane_g3

0x0868,	// (0x0003757e) linegrid_hwr_fs_pane_g4_ParamLimits

0x0868,	// (0x0003757e) linegrid_hwr_fs_pane_g4

0x0886,	// (0x0003759c) linegrid_hwr_fs_pane_g5_ParamLimits

0x0886,	// (0x0003759c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0004650c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0004650c) linegrid_hwr_fs_pane_g

0x2718,	// (0x0003942e) cell_hwr_fs_pane_g1_ParamLimits

0x2718,	// (0x0003942e) cell_hwr_fs_pane_g1

0x245b,	// (0x00039171) cell_hwr_fs_pane_g2_ParamLimits

0x245b,	// (0x00039171) cell_hwr_fs_pane_g2

0xc2a7,	// (0x00042fbd) cell_hwr_fs_pane_g3_ParamLimits

0xc2a7,	// (0x00042fbd) cell_hwr_fs_pane_g3

0xc2b4,	// (0x00042fca) cell_hwr_fs_pane_g4_ParamLimits

0xc2b4,	// (0x00042fca) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00046517) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00046517) cell_hwr_fs_pane_g

0xae1c,	// (0x00041b32) cell_hwr_fs_pane_t1

0x87b5,	// (0x0003f4cb) grid_highlight_pane_cp6

0x87b5,	// (0x0003f4cb) main_idle_act2_pane

0xbba6,	// (0x000428bc) aid_inside_area_popup_secondary

0xc3d5,	// (0x000430eb) aid_inside_area_window_primary_ParamLimits

0xc3d5,	// (0x000430eb) aid_inside_area_window_primary

0x3f76,	// (0x0003ac8c) ai2_news_ticker_pane

0x3f7e,	// (0x0003ac94) aid_size_cell_ai1_link_ParamLimits

0x3f7e,	// (0x0003ac94) aid_size_cell_ai1_link

0x3f98,	// (0x0003acae) popup_ai2_data_window_ParamLimits

0x3f98,	// (0x0003acae) popup_ai2_data_window

0x3fb6,	// (0x0003accc) popup_ai2_link_window_ParamLimits

0x3fb6,	// (0x0003accc) popup_ai2_link_window

0x26e2,	// (0x000393f8) bg_popup_sub_pane_cp4_ParamLimits

0x26e2,	// (0x000393f8) bg_popup_sub_pane_cp4

0x3fcc,	// (0x0003ace2) grid_ai2_link_pane_ParamLimits

0x3fcc,	// (0x0003ace2) grid_ai2_link_pane

0x3fe3,	// (0x0003acf9) popup_ai2_link_window_g1_ParamLimits

0x3fe3,	// (0x0003acf9) popup_ai2_link_window_g1

0x3fef,	// (0x0003ad05) popup_ai2_link_window_g2_ParamLimits

0x3fef,	// (0x0003ad05) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x000466ea) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x000466ea) popup_ai2_link_window_g

0x4000,	// (0x0003ad16) ai2_mp_button_pane

0x4008,	// (0x0003ad1e) ai2_mp_volume_pane

0x28d3,	// (0x000395e9) bg_popup_sub_pane_cp5_ParamLimits

0x28d3,	// (0x000395e9) bg_popup_sub_pane_cp5

0x4010,	// (0x0003ad26) heading_ai2_gene_pane_ParamLimits

0x4010,	// (0x0003ad26) heading_ai2_gene_pane

0x401c,	// (0x0003ad32) list_ai2_gene_pane_ParamLimits

0x401c,	// (0x0003ad32) list_ai2_gene_pane

0x4064,	// (0x0003ad7a) cell_ai2_link_pane_ParamLimits

0x4064,	// (0x0003ad7a) cell_ai2_link_pane

0x407a,	// (0x0003ad90) cell_ai2_link_pane_g1

0x87b5,	// (0x0003f4cb) grid_highlight_pane_cp7

0x0c7e,	// (0x00037994) ai2_mp_volume_pane_g1

0x414d,	// (0x0003ae63) ai2_mp_volume_pane_g2

0x40c2,	// (0x0003add8) list_ai2_gene_pane_t1

0x4155,	// (0x0003ae6b) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x00046703) ai2_mp_volume_pane_g

0x0c86,	// (0x0003799c) volume_small_pane_cp3

0x415d,	// (0x0003ae73) aid_size_cell_ai2_button

0x4165,	// (0x0003ae7b) grid_ai2_button_pane

0x416e,	// (0x0003ae84) cell_ai2_button_pane_ParamLimits

0x416e,	// (0x0003ae84) cell_ai2_button_pane

0x87ab,	// (0x0003f4c1) cell_ai2_button_pane_g1

0x87b5,	// (0x0003f4cb) grid_highlight_pane_cp8

0x410d,	// (0x0003ae23) ai2_gene_pane_t1_ParamLimits

0x410d,	// (0x0003ae23) ai2_gene_pane_t1

0xa597,	// (0x000412ad) aid_height_parent_landscape

0xc5f1,	// (0x00043307) aid_height_set_list

0x3a51,	// (0x0003a767) aid_size_parent

0x3d97,	// (0x0003aaad) aid_size_cell_graphic_pane_ParamLimits

0x402c,	// (0x0003ad42) popup_ai2_data_window_g1_ParamLimits

0x402c,	// (0x0003ad42) popup_ai2_data_window_g1

0x4038,	// (0x0003ad4e) ai2_news_ticker_pane_g1

0x4040,	// (0x0003ad56) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x000466ef) ai2_news_ticker_pane_g

0x4048,	// (0x0003ad5e) ai2_news_ticker_pane_t1

0x4056,	// (0x0003ad6c) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x000466f4) ai2_news_ticker_pane_t

0x4083,	// (0x0003ad99) heading_ai2_gene_pane_g1

0x408b,	// (0x0003ada1) heading_ai2_gene_pane_t1_ParamLimits

0x408b,	// (0x0003ada1) heading_ai2_gene_pane_t1

0x40a0,	// (0x0003adb6) list_highlight_pane_cp6

0x40a8,	// (0x0003adbe) ai2_gene_pane_ParamLimits

0x40a8,	// (0x0003adbe) ai2_gene_pane

0x40d0,	// (0x0003ade6) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x000466f9) list_ai2_gene_pane_t

0x40de,	// (0x0003adf4) list_highlight_pane_cp8_ParamLimits

0x40de,	// (0x0003adf4) list_highlight_pane_cp8

0x40ef,	// (0x0003ae05) ai2_gene_pane_g1_ParamLimits

0x40ef,	// (0x0003ae05) ai2_gene_pane_g1

0x4101,	// (0x0003ae17) ai2_gene_pane_g2_ParamLimits

0x4101,	// (0x0003ae17) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x000466fe) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x000466fe) ai2_gene_pane_g

0xba1d,	// (0x00042733) scroll_pane_cp12

0xa556,	// (0x0004126c) control_pane_t3_ParamLimits

0xa556,	// (0x0004126c) control_pane_t3

0x1fe9,	// (0x00038cff) status_small_pane_g8_ParamLimits

0x1fe9,	// (0x00038cff) status_small_pane_g8

0xa6b5,	// (0x000413cb) popup_find_window_ParamLimits

0xa966,	// (0x0004167c) popup_note_image_window_ParamLimits

0xd2a4,	// (0x00043fba) list_double2_graphic_pane_vc_g1_ParamLimits

0xd2a4,	// (0x00043fba) list_double2_graphic_pane_vc_g1

0xd3f1,	// (0x00044107) list_double2_graphic_pane_vc_g2_ParamLimits

0xd3f1,	// (0x00044107) list_double2_graphic_pane_vc_g2

0xd3fd,	// (0x00044113) list_double2_graphic_pane_vc_g3_ParamLimits

0xd3fd,	// (0x00044113) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x000464da) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x000464da) list_double2_graphic_pane_vc_g

0xd409,	// (0x0004411f) list_double2_graphic_pane_vc_t1_ParamLimits

0xd409,	// (0x0004411f) list_double2_graphic_pane_vc_t1

0xd27a,	// (0x00043f90) list_single_heading_pane_vc_g1_ParamLimits

0xd27a,	// (0x00043f90) list_single_heading_pane_vc_g1

0xd286,	// (0x00043f9c) list_single_heading_pane_vc_g2_ParamLimits

0xd286,	// (0x00043f9c) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000462e4) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000462e4) list_single_heading_pane_vc_g

0xd41f,	// (0x00044135) list_single_heading_pane_vc_t1_ParamLimits

0xd41f,	// (0x00044135) list_single_heading_pane_vc_t1

0xd437,	// (0x0004414d) list_single_heading_pane_vc_t2_ParamLimits

0xd437,	// (0x0004414d) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x000464fb) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x000464fb) list_single_heading_pane_vc_t

0x262e,	// (0x00039344) list_setting_number_pane_vc_g1_ParamLimits

0x262e,	// (0x00039344) list_setting_number_pane_vc_g1

0x263a,	// (0x00039350) list_setting_number_pane_vc_g2_ParamLimits

0x263a,	// (0x00039350) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00046500) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00046500) list_setting_number_pane_vc_g

0x2646,	// (0x0003935c) list_setting_number_pane_vc_t1_ParamLimits

0x2646,	// (0x0003935c) list_setting_number_pane_vc_t1

0x265a,	// (0x00039370) list_setting_number_pane_vc_t2_ParamLimits

0x265a,	// (0x00039370) list_setting_number_pane_vc_t2

0x2676,	// (0x0003938c) list_setting_number_pane_vc_t3_ParamLimits

0x2676,	// (0x0003938c) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00046505) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00046505) list_setting_number_pane_vc_t

0x26a4,	// (0x000393ba) set_value_pane_vc_ParamLimits

0x26a4,	// (0x000393ba) set_value_pane_vc

0xd46e,	// (0x00044184) list_double2_graphic_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_double2_graphic_pane_vc

0x3c29,	// (0x0003a93f) list_double2_large_graphic_pane_vc_ParamLimits

0x3c29,	// (0x0003a93f) list_double2_large_graphic_pane_vc

0xd46e,	// (0x00044184) list_double2_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_double2_pane_vc

0xd46e,	// (0x00044184) list_double_graphic_heading_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_double_graphic_heading_pane_vc

0xd46e,	// (0x00044184) list_double_graphic_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_double_graphic_pane_vc

0xd46e,	// (0x00044184) list_double_heading_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_double_heading_pane_vc

0x3c29,	// (0x0003a93f) list_double_large_graphic_pane_vc_ParamLimits

0x3c29,	// (0x0003a93f) list_double_large_graphic_pane_vc

0xd46e,	// (0x00044184) list_double_number_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_double_number_pane_vc

0xd46e,	// (0x00044184) list_double_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_double_pane_vc

0xd46e,	// (0x00044184) list_double_time_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_double_time_pane_vc

0xd46e,	// (0x00044184) list_setting_number_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_setting_number_pane_vc

0xd46e,	// (0x00044184) list_setting_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_setting_pane_vc

0xd46e,	// (0x00044184) list_single_graphic_heading_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_single_graphic_heading_pane_vc

0xd46e,	// (0x00044184) list_single_heading_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_single_heading_pane_vc

0xd46e,	// (0x00044184) list_single_number_heading_pane_vc_ParamLimits

0xd46e,	// (0x00044184) list_single_number_heading_pane_vc

0xd2a4,	// (0x00043fba) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd2a4,	// (0x00043fba) list_double_graphic_heading_pane_vc_g1

0xd27a,	// (0x00043f90) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd27a,	// (0x00043f90) list_double_graphic_heading_pane_vc_g2

0xd286,	// (0x00043f9c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd286,	// (0x00043f9c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0004670a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0004670a) list_double_graphic_heading_pane_vc_g

0xd483,	// (0x00044199) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd483,	// (0x00044199) list_double_graphic_heading_pane_vc_t1

0xd41f,	// (0x00044135) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd41f,	// (0x00044135) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x00046711) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x00046711) list_double_graphic_heading_pane_vc_t

0x262e,	// (0x00039344) list_setting_pane_vc_g1_ParamLimits

0x262e,	// (0x00039344) list_setting_pane_vc_g1

0x263a,	// (0x00039350) list_setting_pane_vc_g2_ParamLimits

0x263a,	// (0x00039350) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00046500) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00046500) list_setting_pane_vc_g

0x43d5,	// (0x0003b0eb) list_setting_pane_vc_t1_ParamLimits

0x43d5,	// (0x0003b0eb) list_setting_pane_vc_t1

0x43f1,	// (0x0003b107) list_setting_pane_vc_t2_ParamLimits

0x43f1,	// (0x0003b107) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x00046754) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x00046754) list_setting_pane_vc_t

0x26a4,	// (0x000393ba) set_value_pane_cp_vc_ParamLimits

0x26a4,	// (0x000393ba) set_value_pane_cp_vc

0xd27a,	// (0x00043f90) list_single_number_heading_pane_vc_g1_ParamLimits

0xd27a,	// (0x00043f90) list_single_number_heading_pane_vc_g1

0xd286,	// (0x00043f9c) list_single_number_heading_pane_vc_g2_ParamLimits

0xd286,	// (0x00043f9c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000462e4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000462e4) list_single_number_heading_pane_vc_g

0xd41f,	// (0x00044135) list_single_number_heading_pane_vc_t1_ParamLimits

0xd41f,	// (0x00044135) list_single_number_heading_pane_vc_t1

0xd495,	// (0x000441ab) list_single_number_heading_pane_vc_t2_ParamLimits

0xd495,	// (0x000441ab) list_single_number_heading_pane_vc_t2

0xd292,	// (0x00043fa8) list_single_number_heading_pane_vc_t3_ParamLimits

0xd292,	// (0x00043fa8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x00046759) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00046759) list_single_number_heading_pane_vc_t

0xd2a4,	// (0x00043fba) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd2a4,	// (0x00043fba) list_single_graphic_heading_pane_vc_g1

0xd27a,	// (0x00043f90) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd27a,	// (0x00043f90) list_single_graphic_heading_pane_vc_g4

0xd286,	// (0x00043f9c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd286,	// (0x00043f9c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x0004670a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0004670a) list_single_graphic_heading_pane_vc_g

0xd41f,	// (0x00044135) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd41f,	// (0x00044135) list_single_graphic_heading_pane_vc_t1

0xd4a7,	// (0x000441bd) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd4a7,	// (0x000441bd) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x00046760) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x00046760) list_single_graphic_heading_pane_vc_t

0xd27a,	// (0x00043f90) list_double2_pane_vc_g1_ParamLimits

0xd27a,	// (0x00043f90) list_double2_pane_vc_g1

0xd286,	// (0x00043f9c) list_double2_pane_vc_g2_ParamLimits

0xd286,	// (0x00043f9c) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x000462e4) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x000462e4) list_double2_pane_vc_g

0xd458,	// (0x0004416e) list_double2_pane_vc_t1_ParamLimits

0xd458,	// (0x0004416e) list_double2_pane_vc_t1

0xd2b0,	// (0x00043fc6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd2b0,	// (0x00043fc6) list_double2_large_graphic_pane_vc_g1

0xd2bc,	// (0x00043fd2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd2bc,	// (0x00043fd2) list_double2_large_graphic_pane_vc_g2

0xd2c8,	// (0x00043fde) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd2c8,	// (0x00043fde) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00046301) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00046301) list_double2_large_graphic_pane_vc_g

0xd2d4,	// (0x00043fea) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd2d4,	// (0x00043fea) list_double2_large_graphic_pane_vc_t1

0xd4b9,	// (0x000441cf) list_double_time_pane_vc_g1_ParamLimits

0xd4b9,	// (0x000441cf) list_double_time_pane_vc_g1

0xd4c5,	// (0x000441db) list_double_time_pane_vc_g2_ParamLimits

0xd4c5,	// (0x000441db) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x00046765) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x00046765) list_double_time_pane_vc_g

0xd4d1,	// (0x000441e7) list_double_time_pane_vc_t1_ParamLimits

0xd4d1,	// (0x000441e7) list_double_time_pane_vc_t1

0xd4fb,	// (0x00044211) list_double_time_pane_vc_t2_ParamLimits

0xd4fb,	// (0x00044211) list_double_time_pane_vc_t2

0xd544,	// (0x0004425a) list_double_time_pane_vc_t3_ParamLimits

0xd544,	// (0x0004425a) list_double_time_pane_vc_t3

0xd556,	// (0x0004426c) list_double_time_pane_vc_t4_ParamLimits

0xd556,	// (0x0004426c) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x0004676a) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x0004676a) list_double_time_pane_vc_t

0xd27a,	// (0x00043f90) list_double_pane_vc_g1_ParamLimits

0xd27a,	// (0x00043f90) list_double_pane_vc_g1

0xd286,	// (0x00043f9c) list_double_pane_vc_g2_ParamLimits

0xd286,	// (0x00043f9c) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x000462e4) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x000462e4) list_double_pane_vc_g

0xd57b,	// (0x00044291) list_double_pane_vc_t1_ParamLimits

0xd57b,	// (0x00044291) list_double_pane_vc_t1

0xd58f,	// (0x000442a5) list_double_pane_vc_t2_ParamLimits

0xd58f,	// (0x000442a5) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x00046773) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x00046773) list_double_pane_vc_t

0xd27a,	// (0x00043f90) list_double_number_pane_vc_g1_ParamLimits

0xd27a,	// (0x00043f90) list_double_number_pane_vc_g1

0xd286,	// (0x00043f9c) list_double_number_pane_vc_g2_ParamLimits

0xd286,	// (0x00043f9c) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x000462e4) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x000462e4) list_double_number_pane_vc_g

0xd5a5,	// (0x000442bb) list_double_number_pane_vc_t1_ParamLimits

0xd5a5,	// (0x000442bb) list_double_number_pane_vc_t1

0xd5b9,	// (0x000442cf) list_double_number_pane_vc_t2_ParamLimits

0xd5b9,	// (0x000442cf) list_double_number_pane_vc_t2

0xd58f,	// (0x000442a5) list_double_number_pane_vc_t3_ParamLimits

0xd58f,	// (0x000442a5) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x00046778) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x00046778) list_double_number_pane_vc_t

0xd5cd,	// (0x000442e3) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd5cd,	// (0x000442e3) list_double_large_graphic_pane_vc_g1

0xd5de,	// (0x000442f4) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd5de,	// (0x000442f4) list_double_large_graphic_pane_vc_g2

0xd2c8,	// (0x00043fde) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd2c8,	// (0x00043fde) list_double_large_graphic_pane_vc_g3

0xd5ed,	// (0x00044303) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd5ed,	// (0x00044303) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0004677f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0004677f) list_double_large_graphic_pane_vc_g

0xd5f9,	// (0x0004430f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd5f9,	// (0x0004430f) list_double_large_graphic_pane_vc_t1

0xd612,	// (0x00044328) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd612,	// (0x00044328) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x00046788) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x00046788) list_double_large_graphic_pane_vc_t

0xd27a,	// (0x00043f90) list_double_heading_pane_vc_g1_ParamLimits

0xd27a,	// (0x00043f90) list_double_heading_pane_vc_g1

0xd286,	// (0x00043f9c) list_double_heading_pane_vc_g2_ParamLimits

0xd286,	// (0x00043f9c) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000462e4) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000462e4) list_double_heading_pane_vc_g

0xd629,	// (0x0004433f) list_double_heading_pane_vc_t1_ParamLimits

0xd629,	// (0x0004433f) list_double_heading_pane_vc_t1

0xd41f,	// (0x00044135) list_double_heading_pane_vc_t2_ParamLimits

0xd41f,	// (0x00044135) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0004678d) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0004678d) list_double_heading_pane_vc_t

0xd63b,	// (0x00044351) list_double_graphic_pane_vc_g1_ParamLimits

0xd63b,	// (0x00044351) list_double_graphic_pane_vc_g1

0xd64b,	// (0x00044361) list_double_graphic_pane_vc_g2_ParamLimits

0xd64b,	// (0x00044361) list_double_graphic_pane_vc_g2

0xd65a,	// (0x00044370) list_double_graphic_pane_vc_g3_ParamLimits

0xd65a,	// (0x00044370) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00046792) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00046792) list_double_graphic_pane_vc_g

0xd666,	// (0x0004437c) list_double_graphic_pane_vc_t1_ParamLimits

0xd666,	// (0x0004437c) list_double_graphic_pane_vc_t1

0xd58f,	// (0x000442a5) list_double_graphic_pane_vc_t2_ParamLimits

0xd58f,	// (0x000442a5) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00046799) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00046799) list_double_graphic_pane_vc_t

0xeabf,	// (0x000457d5) aid_size_cell_fastswap

0x9478,	// (0x0004018e) aid_size_cell_touch_ParamLimits

0x9478,	// (0x0004018e) aid_size_cell_touch

0xec46,	// (0x0004595c) popup_fast_swap_wide_window_ParamLimits

0xec46,	// (0x0004595c) popup_fast_swap_wide_window

0x95c7,	// (0x000402dd) touch_pane_ParamLimits

0x95c7,	// (0x000402dd) touch_pane

0xba73,	// (0x00042789) button_value_adjust_pane_cp2

0xba73,	// (0x00042789) button_value_adjust_pane_cp4

0xd30d,	// (0x00044023) form_field_data_pane_cp2

0x9e3c,	// (0x00040b52) form_field_data_wide_pane_cp2

0xbde0,	// (0x00042af6) bg_scroll_pane_ParamLimits

0xef80,	// (0x00045c96) scroll_handle_pane_ParamLimits

0xef94,	// (0x00045caa) scroll_sc2_down_pane_ParamLimits

0xef94,	// (0x00045caa) scroll_sc2_down_pane

0xbe11,	// (0x00042b27) scroll_sc2_up_pane_ParamLimits

0xbe11,	// (0x00042b27) scroll_sc2_up_pane

0xc9c8,	// (0x000436de) grid_wheel_folder_pane_g1_ParamLimits

0xc9c8,	// (0x000436de) grid_wheel_folder_pane_g1

0xf35d,	// (0x00046073) clock_nsta_pane_cp2_ParamLimits

0xf35d,	// (0x00046073) clock_nsta_pane_cp2

0x20ba,	// (0x00038dd0) listscroll_midp_pane_ParamLimits

0xa35c,	// (0x00041072) midp_canvas_pane

0x2064,	// (0x00038d7a) nsta_clock_indic_pane

0x20a0,	// (0x00038db6) listscroll_form_pane_vc

0x20a8,	// (0x00038dbe) listscroll_set_pane_vc_ParamLimits

0x20a8,	// (0x00038dbe) listscroll_set_pane_vc

0xbf88,	// (0x00042c9e) clock_nsta_pane

0xbfb2,	// (0x00042cc8) indicator_nsta_pane

0x2524,	// (0x0003923a) bg_popup_sub_pane_cp2_ParamLimits

0x2538,	// (0x0003924e) find_pane_cp2_ParamLimits

0x2538,	// (0x0003924e) find_pane_cp2

0x254e,	// (0x00039264) grid_toobar_pane_ParamLimits

0x26b6,	// (0x000393cc) list_form_gen_pane_vc_ParamLimits

0x26b6,	// (0x000393cc) list_form_gen_pane_vc

0x26cc,	// (0x000393e2) scroll_pane_cp8_vc_ParamLimits

0x26cc,	// (0x000393e2) scroll_pane_cp8_vc

0x2748,	// (0x0003945e) data_form_wide_pane_vc_ParamLimits

0x2748,	// (0x0003945e) data_form_wide_pane_vc

0x2754,	// (0x0003946a) form_field_data_wide_pane_vc_g1

0x275c,	// (0x00039472) form_field_data_wide_pane_vc_t1_ParamLimits

0x275c,	// (0x00039472) form_field_data_wide_pane_vc_t1

0xba87,	// (0x0004279d) input_focus_pane_cp6_vc_ParamLimits

0xba87,	// (0x0004279d) input_focus_pane_cp6_vc

0xc332,	// (0x00043048) list_midp_pane_ParamLimits

0x3e03,	// (0x0003ab19) scroll_pane_cp16_ParamLimits

0x3e03,	// (0x0003ab19) scroll_pane_cp16

0x2ab8,	// (0x000397ce) button_value_adjust_pane_ParamLimits

0x2ab8,	// (0x000397ce) button_value_adjust_pane

0xc602,	// (0x00043318) button_value_adjust_pane_cp6_ParamLimits

0xc602,	// (0x00043318) button_value_adjust_pane_cp6

0xc744,	// (0x0004345a) settings_code_pane_cp_ParamLimits

0xc744,	// (0x0004345a) settings_code_pane_cp

0x87ab,	// (0x0003f4c1) cell_touch_pane_g1

0x87ab,	// (0x0003f4c1) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0004641f) cell_touch_pane_g

0xc88f,	// (0x000435a5) cell_touch_pane_cp_ParamLimits

0xc88f,	// (0x000435a5) cell_touch_pane_cp

0xc8ab,	// (0x000435c1) cell_touch_pane_ParamLimits

0xc8ab,	// (0x000435c1) cell_touch_pane

0x87ab,	// (0x0003f4c1) scroll_sc2_down_pane_g1

0x87ab,	// (0x0003f4c1) scroll_sc2_up_pane_g1

0x87b5,	// (0x0003f4cb) bg_set_opt_pane_cp4_vc

0x41a1,	// (0x0003aeb7) list_set_graphic_pane_vc_g1_ParamLimits

0x41a1,	// (0x0003aeb7) list_set_graphic_pane_vc_g1

0x41ad,	// (0x0003aec3) list_set_graphic_pane_vc_g2_ParamLimits

0x41ad,	// (0x0003aec3) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x00046716) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x00046716) list_set_graphic_pane_vc_g

0x41b9,	// (0x0003aecf) text_primary_small_cp13_vc_ParamLimits

0x41b9,	// (0x0003aecf) text_primary_small_cp13_vc

0x41d1,	// (0x0003aee7) list_set_graphic_pane_vc_ParamLimits

0x41d1,	// (0x0003aee7) list_set_graphic_pane_vc

0x87b5,	// (0x0003f4cb) input_focus_pane_cp2_vc

0x87ab,	// (0x0003f4c1) setting_code_pane_vc_g1

0x881a,	// (0x0003f530) setting_code_pane_vc_t1

0x41e6,	// (0x0003aefc) set_text_pane_vc_t1_ParamLimits

0x41e6,	// (0x0003aefc) set_text_pane_vc_t1

0x87b5,	// (0x0003f4cb) input_focus_pane_cp1_vc

0x4204,	// (0x0003af1a) list_set_text_pane_vc

0x87ab,	// (0x0003f4c1) setting_text_pane_vc_g1

0x87b5,	// (0x0003f4cb) bg_set_opt_pane_cp2_vc

0x8811,	// (0x0003f527) setting_slider_graphic_pane_vc_g1

0x420e,	// (0x0003af24) setting_slider_graphic_pane_vc_t1

0x4220,	// (0x0003af36) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0004671b) setting_slider_graphic_pane_vc_t

0x4232,	// (0x0003af48) slider_set_pane_cp_vc

0x423c,	// (0x0003af52) slider_set_pane_vc_g1

0x4245,	// (0x0003af5b) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x00046720) slider_set_pane_vc_g

0xbaee,	// (0x00042804) set_opt_bg_pane_g1_copy1

0xbaf6,	// (0x0004280c) set_opt_bg_pane_g2_copy1

0x4271,	// (0x0003af87) set_opt_bg_pane_g3_copy1

0xbb06,	// (0x0004281c) set_opt_bg_pane_g4_copy1

0xbb0e,	// (0x00042824) set_opt_bg_pane_g5_copy1

0xbb16,	// (0x0004282c) set_opt_bg_pane_g6_copy1

0x427b,	// (0x0003af91) set_opt_bg_pane_g7_copy1

0x4285,	// (0x0003af9b) set_opt_bg_pane_g8_copy1

0x428f,	// (0x0003afa5) set_opt_bg_pane_g9_copy1

0x87b5,	// (0x0003f4cb) bg_set_opt_pane_cp_vc

0x4299,	// (0x0003afaf) setting_slider_pane_vc_t1

0x42a8,	// (0x0003afbe) setting_slider_pane_vc_t2

0x42ba,	// (0x0003afd0) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0004672f) setting_slider_pane_vc_t

0x42cc,	// (0x0003afe2) slider_set_pane_vc

0x08cd,	// (0x000375e3) volume_set_pane_vc_g1

0x08d6,	// (0x000375ec) volume_set_pane_vc_g2

0x08df,	// (0x000375f5) volume_set_pane_vc_g3

0x08e8,	// (0x000375fe) volume_set_pane_vc_g4

0x08f1,	// (0x00037607) volume_set_pane_vc_g5

0x08fa,	// (0x00037610) volume_set_pane_vc_g6

0x0903,	// (0x00037619) volume_set_pane_vc_g7

0x090c,	// (0x00037622) volume_set_pane_vc_g8

0x0915,	// (0x0003762b) volume_set_pane_vc_g9

0x091e,	// (0x00037634) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x00046736) volume_set_pane_vc_g

0x42d6,	// (0x0003afec) volume_set_pane_vc

0x42e0,	// (0x0003aff6) button_value_adjust_pane_cp1_vc

0x42ea,	// (0x0003b000) list_highlight_pane_cp2_vc

0x42f3,	// (0x0003b009) list_set_pane_vc_ParamLimits

0x42f3,	// (0x0003b009) list_set_pane_vc

0x4363,	// (0x0003b079) main_pane_set_vc_t1_ParamLimits

0x4363,	// (0x0003b079) main_pane_set_vc_t1

0x4378,	// (0x0003b08e) main_pane_set_vc_t2_ParamLimits

0x4378,	// (0x0003b08e) main_pane_set_vc_t2

0x438a,	// (0x0003b0a0) main_pane_set_vc_t3_ParamLimits

0x438a,	// (0x0003b0a0) main_pane_set_vc_t3

0x439e,	// (0x0003b0b4) main_pane_set_vc_t4_ParamLimits

0x439e,	// (0x0003b0b4) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0004674b) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0004674b) main_pane_set_vc_t

0x43b2,	// (0x0003b0c8) setting_code_pane_vc_ParamLimits

0x43b2,	// (0x0003b0c8) setting_code_pane_vc

0x43c3,	// (0x0003b0d9) setting_slider_graphic_pane_vc

0x43c3,	// (0x0003b0d9) setting_slider_pane_vc

0x43c3,	// (0x0003b0d9) setting_text_pane_vc

0x43c3,	// (0x0003b0d9) setting_volume_pane_vc

0x43cd,	// (0x0003b0e3) scroll_pane_cp121_vc

0xba61,	// (0x00042777) set_content_pane_vc

0x440d,	// (0x0003b123) button_value_adjust_pane_g1

0x4416,	// (0x0003b12c) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0004679e) button_value_adjust_pane_g

0x441f,	// (0x0003b135) form_field_slider_wide_pane_vc_t1_ParamLimits

0x441f,	// (0x0003b135) form_field_slider_wide_pane_vc_t1

0x4433,	// (0x0003b149) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4433,	// (0x0003b149) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x000467a3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x000467a3) form_field_slider_wide_pane_vc_t

0x8936,	// (0x0003f64c) input_focus_pane_cp10_vc_ParamLimits

0x8936,	// (0x0003f64c) input_focus_pane_cp10_vc

0x4461,	// (0x0003b177) slider_cont_pane_cp1_vc_ParamLimits

0x4461,	// (0x0003b177) slider_cont_pane_cp1_vc

0x4471,	// (0x0003b187) slider_form_pane_g1_cp2

0x4245,	// (0x0003af5b) slider_form_pane_g2_cp2

0x449e,	// (0x0003b1b4) form_field_slider_pane_vc_t3

0x44ac,	// (0x0003b1c2) form_field_slider_pane_vc_t4

0x44ba,	// (0x0003b1d0) slider_form_pane_vc_ParamLimits

0x44ba,	// (0x0003b1d0) slider_form_pane_vc

0x44c7,	// (0x0003b1dd) form_field_slider_pane_vc_t1_ParamLimits

0x44c7,	// (0x0003b1dd) form_field_slider_pane_vc_t1

0x4433,	// (0x0003b149) form_field_slider_pane_vc_t2_ParamLimits

0x4433,	// (0x0003b149) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x000467b5) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x000467b5) form_field_slider_pane_vc_t

0x8936,	// (0x0003f64c) input_focus_pane_cp9_vc_ParamLimits

0x8936,	// (0x0003f64c) input_focus_pane_cp9_vc

0x44e3,	// (0x0003b1f9) slider_cont_pane_vc_ParamLimits

0x44e3,	// (0x0003b1f9) slider_cont_pane_vc

0x44f5,	// (0x0003b20b) list_form_graphic_pane_cp_vc_ParamLimits

0x44f5,	// (0x0003b20b) list_form_graphic_pane_cp_vc

0x2754,	// (0x0003946a) form_field_popup_wide_pane_vc_g1

0x450a,	// (0x0003b220) form_field_popup_wide_pane_vc_t1_ParamLimits

0x450a,	// (0x0003b220) form_field_popup_wide_pane_vc_t1

0xba87,	// (0x0004279d) input_focus_pane_cp8_vc_ParamLimits

0xba87,	// (0x0004279d) input_focus_pane_cp8_vc

0x454f,	// (0x0003b265) list_form_wide_pane_vc_ParamLimits

0x454f,	// (0x0003b265) list_form_wide_pane_vc

0x455b,	// (0x0003b271) list_form_graphic_pane_vc_g1

0x4563,	// (0x0003b279) list_form_graphic_pane_vc_t1_ParamLimits

0x4563,	// (0x0003b279) list_form_graphic_pane_vc_t1

0x8803,	// (0x0003f519) list_highlight_pane_cp5_vc_ParamLimits

0x8803,	// (0x0003f519) list_highlight_pane_cp5_vc

0x457f,	// (0x0003b295) list_form_graphic_pane_vc_ParamLimits

0x457f,	// (0x0003b295) list_form_graphic_pane_vc

0x2754,	// (0x0003946a) form_field_popup_pane_vc_g1

0x4595,	// (0x0003b2ab) form_field_popup_pane_vc_t1_ParamLimits

0x4595,	// (0x0003b2ab) form_field_popup_pane_vc_t1

0xba87,	// (0x0004279d) input_focus_pane_cp7_vc_ParamLimits

0xba87,	// (0x0004279d) input_focus_pane_cp7_vc

0x45ac,	// (0x0003b2c2) list_form_pane_vc_ParamLimits

0x45ac,	// (0x0003b2c2) list_form_pane_vc

0x45b8,	// (0x0003b2ce) data_form_pane_vc_t1_ParamLimits

0x45b8,	// (0x0003b2ce) data_form_pane_vc_t1

0xbaee,	// (0x00042804) input_focus_pane_vc_g1

0xbaf6,	// (0x0004280c) input_focus_pane_vc_g2

0xbafe,	// (0x00042814) input_focus_pane_vc_g3

0xbb06,	// (0x0004281c) input_focus_pane_vc_g4

0xbb0e,	// (0x00042824) input_focus_pane_vc_g5

0xbb16,	// (0x0004282c) input_focus_pane_vc_g6

0xbb1e,	// (0x00042834) input_focus_pane_vc_g7

0xbb26,	// (0x0004283c) input_focus_pane_vc_g8

0xbb2e,	// (0x00042844) input_focus_pane_vc_g9

0x87ab,	// (0x0003f4c1) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x000463a8) input_focus_pane_vc_g

0x2748,	// (0x0003945e) data_form_pane_vc_ParamLimits

0x2748,	// (0x0003945e) data_form_pane_vc

0x2754,	// (0x0003946a) form_field_data_pane_vc_g1

0x45d5,	// (0x0003b2eb) form_field_data_pane_vc_t1_ParamLimits

0x45d5,	// (0x0003b2eb) form_field_data_pane_vc_t1

0xba87,	// (0x0004279d) input_focus_pane_vc_ParamLimits

0xba87,	// (0x0004279d) input_focus_pane_vc

0x45ef,	// (0x0003b305) button_value_adjust_pane_cp3_vc

0x45f7,	// (0x0003b30d) button_value_adjust_pane_cp5_vc

0x45ff,	// (0x0003b315) form_field_data_pane_vc_ParamLimits

0x45ff,	// (0x0003b315) form_field_data_pane_vc

0x461a,	// (0x0003b330) form_field_data_pane_vc_cp2

0x4622,	// (0x0003b338) form_field_data_wide_pane_vc_ParamLimits

0x4622,	// (0x0003b338) form_field_data_wide_pane_vc

0x463c,	// (0x0003b352) form_field_data_wide_pane_vc_cp2

0x4644,	// (0x0003b35a) form_field_popup_pane_vc_ParamLimits

0x4644,	// (0x0003b35a) form_field_popup_pane_vc

0x465f,	// (0x0003b375) form_field_popup_wide_pane_vc_ParamLimits

0x465f,	// (0x0003b375) form_field_popup_wide_pane_vc

0x4679,	// (0x0003b38f) form_field_slider_pane_vc_ParamLimits

0x4679,	// (0x0003b38f) form_field_slider_pane_vc

0x468c,	// (0x0003b3a2) form_field_slider_wide_pane_vc_ParamLimits

0x468c,	// (0x0003b3a2) form_field_slider_wide_pane_vc

0xc8c9,	// (0x000435df) grid_touch_1_pane_ParamLimits

0xc8c9,	// (0x000435df) grid_touch_1_pane

0xc8dd,	// (0x000435f3) grid_touch_2_pane_ParamLimits

0xc8dd,	// (0x000435f3) grid_touch_2_pane

0x4763,	// (0x0003b479) touch_pane_g1_ParamLimits

0x4763,	// (0x0003b479) touch_pane_g1

0x46c5,	// (0x0003b3db) cell_app_pane_cp_wide_ParamLimits

0x46c5,	// (0x0003b3db) cell_app_pane_cp_wide

0x46d6,	// (0x0003b3ec) grid_popup_fast_wide_pane_ParamLimits

0x46d6,	// (0x0003b3ec) grid_popup_fast_wide_pane

0x46ea,	// (0x0003b400) scroll_pane_cp19_ParamLimits

0x46ea,	// (0x0003b400) scroll_pane_cp19

0x87b5,	// (0x0003f4cb) bg_popup_window_pane_cp20

0x46fe,	// (0x0003b414) listscroll_popup_fast_wide_pane

0xc909,	// (0x0004361f) grid_indicator_nsta_pane

0x4706,	// (0x0003b41c) clock_nsta_pane_g1

0x470f,	// (0x0003b425) clock_nsta_pane_t1

0xc917,	// (0x0004362d) cell_indicator_nsta_pane_ParamLimits

0xc917,	// (0x0004362d) cell_indicator_nsta_pane

0x4763,	// (0x0003b479) cell_indicator_nsta_pane_g1

0xc934,	// (0x0004364a) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x000467c6) cell_indicator_nsta_pane_g

0x4787,	// (0x0003b49d) clock_nsta_pane_cp

0x478f,	// (0x0003b4a5) indicator_nsta_pane_cp

0x4798,	// (0x0003b4ae) nsta_clock_indic_pane_g1

0x883f,	// (0x0003f555) grid_indicator_pane

0xbf03,	// (0x00042c19) scroll_pane_cp29

0xf287,	// (0x00045f9d) indicator_nsta_pane_cp2_ParamLimits

0xf287,	// (0x00045f9d) indicator_nsta_pane_cp2

0x8803,	// (0x0003f519) main_apps_wheel_pane

0x293b,	// (0x00039651) form_midp_field_text_pane_ParamLimits

0x2a8a,	// (0x000397a0) scroll_bar_cp050_ParamLimits

0x4801,	// (0x0003b517) cell_indicator_pane_ParamLimits

0x4801,	// (0x0003b517) cell_indicator_pane

0x4819,	// (0x0003b52f) cell_indicator_pane_g1

0xc94a,	// (0x00043660) grid_wheel_folder_pane_ParamLimits

0xc94a,	// (0x00043660) grid_wheel_folder_pane

0xc958,	// (0x0004366e) list_wheel_apps_pane_ParamLimits

0xc958,	// (0x0004366e) list_wheel_apps_pane

0xc966,	// (0x0004367c) main_apps_wheel_pane_g1_ParamLimits

0xc966,	// (0x0004367c) main_apps_wheel_pane_g1

0xc976,	// (0x0004368c) main_apps_wheel_pane_g2_ParamLimits

0xc976,	// (0x0004368c) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x000467e2) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x000467e2) main_apps_wheel_pane_g

0xc986,	// (0x0004369c) main_apps_wheel_pane_t1_ParamLimits

0xc986,	// (0x0004369c) main_apps_wheel_pane_t1

0xc99e,	// (0x000436b4) list_wheel_apps_pane_g1

0xc9a6,	// (0x000436bc) list_wheel_apps_pane_g2

0xc9ae,	// (0x000436c4) list_wheel_apps_pane_g3

0xc9b6,	// (0x000436cc) list_wheel_apps_pane_g4

0xc9be,	// (0x000436d4) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x000467e7) list_wheel_apps_pane_g

0x1bea,	// (0x00038900) navi_icon_text_pane

0xacd4,	// (0x000419ea) aid_fill_nsta

0xc9db,	// (0x000436f1) navi_icon_text_pane_g1

0xc9e7,	// (0x000436fd) navi_icon_text_pane_t1

0xa2c0,	// (0x00040fd6) list_set_graphic_pane_t1_ParamLimits

0xa2c0,	// (0x00040fd6) list_set_graphic_pane_t1

0x31db,	// (0x00039ef1) popup_midp_note_alarm_window_t6_ParamLimits

0x31db,	// (0x00039ef1) popup_midp_note_alarm_window_t6

0x31ed,	// (0x00039f03) popup_midp_note_alarm_window_t7_ParamLimits

0x31ed,	// (0x00039f03) popup_midp_note_alarm_window_t7

0x31ff,	// (0x00039f15) popup_midp_note_alarm_window_t8_ParamLimits

0x31ff,	// (0x00039f15) popup_midp_note_alarm_window_t8

0x3211,	// (0x00039f27) popup_midp_note_alarm_window_t9_ParamLimits

0x3211,	// (0x00039f27) popup_midp_note_alarm_window_t9

0x3223,	// (0x00039f39) popup_midp_note_alarm_window_t10_ParamLimits

0x3223,	// (0x00039f39) popup_midp_note_alarm_window_t10

0x3235,	// (0x00039f4b) popup_midp_note_alarm_window_t11_ParamLimits

0x3235,	// (0x00039f4b) popup_midp_note_alarm_window_t11

0x3247,	// (0x00039f5d) scroll_pane_cp17_ParamLimits

0x3247,	// (0x00039f5d) scroll_pane_cp17

0x08cd,	// (0x000375e3) volume_small_pane_cp_g1

0x0c8f,	// (0x000379a5) volume_small_pane_cp_g2

0x0c98,	// (0x000379ae) volume_small_pane_cp_g3

0x0ca1,	// (0x000379b7) volume_small_pane_cp_g4

0x0caa,	// (0x000379c0) volume_small_pane_cp_g5

0x0cb3,	// (0x000379c9) volume_small_pane_cp_g6

0x0cbc,	// (0x000379d2) volume_small_pane_cp_g7

0x0cc5,	// (0x000379db) volume_small_pane_cp_g8

0x0cce,	// (0x000379e4) volume_small_pane_cp_g9

0x0cd7,	// (0x000379ed) volume_small_pane_cp_g10

0x1e3f,	// (0x00038b55) midp_ticker_pane_g1_ParamLimits

0x1e4b,	// (0x00038b61) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00046474) midp_ticker_pane_g_ParamLimits

0xa3f3,	// (0x00041109) midp_ticker_pane_t1_ParamLimits

0xacf8,	// (0x00041a0e) aid_fill_nsta_2

0x2a76,	// (0x0003978c) list_form2_midp_pane

0x3bf8,	// (0x0003a90e) midp_editing_number_pane_ParamLimits

0x3c07,	// (0x0003a91d) midp_ticker_pane_ParamLimits

0x4912,	// (0x0003b628) form2_midp_field_pane

0x4936,	// (0x0003b64c) scroll_pane_cp51

0x4956,	// (0x0003b66c) form2_midp_button_pane_ParamLimits

0x4956,	// (0x0003b66c) form2_midp_button_pane

0x4968,	// (0x0003b67e) form2_midp_content_pane_ParamLimits

0x4968,	// (0x0003b67e) form2_midp_content_pane

0x4982,	// (0x0003b698) form2_midp_field_choice_group_pane

0x498a,	// (0x0003b6a0) form2_midp_field_pane_g1

0x4992,	// (0x0003b6a8) form2_midp_field_pane_g2

0x499a,	// (0x0003b6b0) form2_midp_field_pane_g3

0x49a2,	// (0x0003b6b8) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0004680c) form2_midp_field_pane_g

0x49aa,	// (0x0003b6c0) form2_midp_gauge_slider_pane

0x49b2,	// (0x0003b6c8) form2_midp_gauge_wait_pane

0x49ba,	// (0x0003b6d0) form2_midp_image_pane_ParamLimits

0x49ba,	// (0x0003b6d0) form2_midp_image_pane

0x49d5,	// (0x0003b6eb) form2_midp_label_pane_ParamLimits

0x49d5,	// (0x0003b6eb) form2_midp_label_pane

0xca15,	// (0x0004372b) form2_midp_label_pane_cp_ParamLimits

0xca15,	// (0x0004372b) form2_midp_label_pane_cp

0x4a15,	// (0x0003b72b) form2_midp_string_pane_ParamLimits

0x4a15,	// (0x0003b72b) form2_midp_string_pane

0xd67a,	// (0x00044390) form2_midp_text_pane_ParamLimits

0xd67a,	// (0x00044390) form2_midp_text_pane

0x4a27,	// (0x0003b73d) form2_midp_time_pane

0x4a37,	// (0x0003b74d) input_focus_pane_cp51_ParamLimits

0x4a37,	// (0x0003b74d) input_focus_pane_cp51

0x4a4f,	// (0x0003b765) form2_midp_label_pane_t1_ParamLimits

0x4a4f,	// (0x0003b765) form2_midp_label_pane_t1

0xd69b,	// (0x000443b1) form2_mdip_text_pane_t1_ParamLimits

0xd69b,	// (0x000443b1) form2_mdip_text_pane_t1

0xd6bf,	// (0x000443d5) form2_midp_time_pane_t1

0x4a9d,	// (0x0003b7b3) form2_midp_gauge_slider_pane_t1

0xca36,	// (0x0004374c) form2_midp_gauge_slider_pane_t2

0xca48,	// (0x0004375e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00046815) form2_midp_gauge_slider_pane_t

0x4ad3,	// (0x0003b7e9) form2_midp_slider_pane

0x4adf,	// (0x0003b7f5) form2_midp_gauge_wait_pane_t1

0x4aed,	// (0x0003b803) form2_midp_wait_pane_ParamLimits

0x4aed,	// (0x0003b803) form2_midp_wait_pane

0x279b,	// (0x000394b1) list_single_2graphic_pane_cp4_ParamLimits

0x279b,	// (0x000394b1) list_single_2graphic_pane_cp4

0x4b18,	// (0x0003b82e) list_single_midp_graphic_pane_cp_ParamLimits

0x4b18,	// (0x0003b82e) list_single_midp_graphic_pane_cp

0x87b5,	// (0x0003f4cb) list_highlight_pane_cp20

0x4b3c,	// (0x0003b852) list_single_2graphic_pane_g1_cp4

0x4083,	// (0x0003ad99) list_single_2graphic_pane_g2_cp4

0x4b44,	// (0x0003b85a) list_single_2graphic_pane_t1_cp4

0x8803,	// (0x0003f519) list_highlight_pane_cp21

0x4b53,	// (0x0003b869) list_single_midp_graphic_pane_g4_cp

0x4b62,	// (0x0003b878) list_single_midp_graphic_pane_t1_cp

0xca5a,	// (0x00043770) form2_mdip_string_pane_t1_ParamLimits

0xca5a,	// (0x00043770) form2_mdip_string_pane_t1

0x87b5,	// (0x0003f4cb) bg_wml_button_pane_cp2

0x87ab,	// (0x0003f4c1) form2_midp_image_pane_g1

0xd2ea,	// (0x00044000) list_double_large_graphic_pane_g5_ParamLimits

0xd2ea,	// (0x00044000) list_double_large_graphic_pane_g5

0x20ba,	// (0x00038dd0) midp_form_pane_ParamLimits

0x8803,	// (0x0003f519) main_apps_wheel_pane_ParamLimits

0xa9ec,	// (0x00041702) popup_preview_window_ParamLimits

0xa9ec,	// (0x00041702) popup_preview_window

0x06fa,	// (0x00037410) popup_touch_info_window_ParamLimits

0x06fa,	// (0x00037410) popup_touch_info_window

0x071c,	// (0x00037432) popup_touch_menu_window_ParamLimits

0x071c,	// (0x00037432) popup_touch_menu_window

0x87a1,	// (0x0003f4b7) bg_popup_sub_pane_cp6

0x4c1c,	// (0x0003b932) list_touch_menu_pane

0x4c24,	// (0x0003b93a) list_single_touch_menu_pane_ParamLimits

0x4c24,	// (0x0003b93a) list_single_touch_menu_pane

0x4c3c,	// (0x0003b952) list_single_touch_menu_pane_t1

0x8803,	// (0x0003f519) bg_popup_sub_pane_cp7_ParamLimits

0x8803,	// (0x0003f519) bg_popup_sub_pane_cp7

0x4c4a,	// (0x0003b960) heading_sub_pane

0x4c52,	// (0x0003b968) list_touch_info_pane_ParamLimits

0x4c52,	// (0x0003b968) list_touch_info_pane

0x4c61,	// (0x0003b977) list_single_touch_info_pane_ParamLimits

0x4c61,	// (0x0003b977) list_single_touch_info_pane

0x4c73,	// (0x0003b989) list_single_touch_info_pane_t1

0x4c81,	// (0x0003b997) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00046823) list_single_touch_info_pane_t

0x1d6e,	// (0x00038a84) bg_popup_heading_pane_cp

0x4c8f,	// (0x0003b9a5) heading_sub_pane_t1

0x26e2,	// (0x000393f8) bg_popup_preview_window_pane_cp_ParamLimits

0x26e2,	// (0x000393f8) bg_popup_preview_window_pane_cp

0x4c4a,	// (0x0003b960) heading_preview_pane

0x4c52,	// (0x0003b968) list_preview_pane_ParamLimits

0x4c52,	// (0x0003b968) list_preview_pane

0x4c9d,	// (0x0003b9b3) popup_preview_window_g1

0x4c61,	// (0x0003b977) list_single_preview_pane_ParamLimits

0x4c61,	// (0x0003b977) list_single_preview_pane

0x4ca5,	// (0x0003b9bb) list_single_preview_pane_g1

0x4cad,	// (0x0003b9c3) list_single_preview_pane_t1

0x4c73,	// (0x0003b989) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00046828) list_single_preview_pane_t

0x4cbb,	// (0x0003b9d1) bg_popup_heading_pane_cp2_ParamLimits

0x4cbb,	// (0x0003b9d1) bg_popup_heading_pane_cp2

0x4cd1,	// (0x0003b9e7) heading_preview_pane_g1

0x4cd9,	// (0x0003b9ef) heading_preview_pane_t1_ParamLimits

0x4cd9,	// (0x0003b9ef) heading_preview_pane_t1

0x8856,	// (0x0003f56c) soft_indicator_pane_t1_ParamLimits

0xb9fa,	// (0x00042710) scroll_pane_ParamLimits

0xbdff,	// (0x00042b15) scroll_sc2_left_pane

0xbe08,	// (0x00042b1e) scroll_sc2_right_pane

0xbe27,	// (0x00042b3d) scroll_bg_pane_g1_ParamLimits

0xbe3c,	// (0x00042b52) scroll_bg_pane_g2_ParamLimits

0xbe54,	// (0x00042b6a) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x000463ff) scroll_bg_pane_g_ParamLimits

0xbe27,	// (0x00042b3d) scroll_handle_pane_g1_ParamLimits

0xbe76,	// (0x00042b8c) scroll_handle_pane_g2_ParamLimits

0xbe54,	// (0x00042b6a) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00046406) scroll_handle_pane_g_ParamLimits

0x015a,	// (0x00036e70) popup_choice_list_window_ParamLimits

0x015a,	// (0x00036e70) popup_choice_list_window

0x2530,	// (0x00039246) choice_list_pane

0x25b2,	// (0x000392c8) cell_toolbar_pane_t1

0x25da,	// (0x000392f0) toolbar_button_pane_ParamLimits

0x3717,	// (0x0003a42d) ai_gene_pane_1_t2_ParamLimits

0x3717,	// (0x0003a42d) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00046629) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00046629) ai_gene_pane_1_t

0x4cf6,	// (0x0003ba0c) scroll_sc2_left_pane_g1

0x4cf6,	// (0x0003ba0c) scroll_sc2_right_pane_g1

0x20ba,	// (0x00038dd0) bg_popup_sub_pane_cp10

0x4d00,	// (0x0003ba16) list_choice_list_pane

0x4d19,	// (0x0003ba2f) list_single_choice_list_pane_ParamLimits

0x4d19,	// (0x0003ba2f) list_single_choice_list_pane

0x4d31,	// (0x0003ba47) list_single_choice_list_pane_g1

0xbbe4,	// (0x000428fa) list_single_choice_list_pane_t1_ParamLimits

0xbbe4,	// (0x000428fa) list_single_choice_list_pane_t1

0x4d39,	// (0x0003ba4f) choice_list_pane_g1

0x4d41,	// (0x0003ba57) choice_list_pane_t1

0x87a1,	// (0x0003f4b7) input_focus_pane_cp11

0xbd62,	// (0x00042a78) title_pane_stacon_g2_ParamLimits

0xbd62,	// (0x00042a78) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x000463e5) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000463e5) title_pane_stacon_g

0x1d6e,	// (0x00038a84) cursor_press_pane

0xa669,	// (0x0004137f) popup_fep_hwr_window_ParamLimits

0xa669,	// (0x0004137f) popup_fep_hwr_window

0x029e,	// (0x00036fb4) popup_fep_vkb_window_ParamLimits

0x029e,	// (0x00036fb4) popup_fep_vkb_window

0x4d4f,	// (0x0003ba65) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00046851) fep_vkb_side_pane_g_ParamLimits

0x0d19,	// (0x00037a2f) fep_hwr_candidate_pane_ParamLimits

0x0d19,	// (0x00037a2f) fep_hwr_candidate_pane

0x0d43,	// (0x00037a59) fep_hwr_side_pane_ParamLimits

0x0d43,	// (0x00037a59) fep_hwr_side_pane

0x0d65,	// (0x00037a7b) fep_hwr_top_pane_ParamLimits

0x0d65,	// (0x00037a7b) fep_hwr_top_pane

0x0d7d,	// (0x00037a93) fep_hwr_write_pane_ParamLimits

0x0d7d,	// (0x00037a93) fep_hwr_write_pane

0xfb3b,	// (0x00046851) fep_vkb_side_pane_g

0x4d57,	// (0x0003ba6d) fep_hwr_top_pane_g1

0x4d69,	// (0x0003ba7f) fep_hwr_top_pane_g2

0x0db7,	// (0x00037acd) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0004682d) fep_hwr_top_pane_g

0x0dcc,	// (0x00037ae2) fep_hwr_top_text_pane

0xefb9,	// (0x00045ccf) fep_hwr_top_text_pane_g1

0x4d9f,	// (0x0003bab5) fep_hwr_top_text_pane_t1

0x0ed6,	// (0x00037bec) fep_hwr_candidate_pane_g1

0x4fea,	// (0x0003bd00) fep_vkb_keypad_pane_g3_ParamLimits

0x4fea,	// (0x0003bd00) fep_vkb_keypad_pane_g3

0x5016,	// (0x0003bd2c) fep_vkb_keypad_pane_g4_ParamLimits

0x5016,	// (0x0003bd2c) fep_vkb_keypad_pane_g4

0x508d,	// (0x0003bda3) fep_vkb_bottom_pane_g2_ParamLimits

0x508d,	// (0x0003bda3) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00046858) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00046858) fep_vkb_bottom_pane_g

0x4cf6,	// (0x0003ba0c) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00046862) cell_vkb_side_pane_g

0x5118,	// (0x0003be2e) cell_vkb_side_pane_t1

0x5126,	// (0x0003be3c) cell_vkb_side_pane_t1_copy1

0x4cf6,	// (0x0003ba0c) bg_fep_vkb_candidate_pane_g2

0x526a,	// (0x0003bf80) cell_vkb_candidate_pane_ParamLimits

0x4dad,	// (0x0003bac3) aid_size_cell_vkb_ParamLimits

0x4dad,	// (0x0003bac3) aid_size_cell_vkb

0x526a,	// (0x0003bf80) cell_vkb_candidate_pane

0x0efd,	// (0x00037c13) bg_popup_fep_shadow_pane_g1

0xcb02,	// (0x00043818) fep_vkb_bottom_pane_ParamLimits

0xcb02,	// (0x00043818) fep_vkb_bottom_pane

0x4e7c,	// (0x0003bb92) fep_vkb_candidate_pane_ParamLimits

0x4e7c,	// (0x0003bb92) fep_vkb_candidate_pane

0xcb2e,	// (0x00043844) fep_vkb_keypad_pane_ParamLimits

0xcb2e,	// (0x00043844) fep_vkb_keypad_pane

0xcb55,	// (0x0004386b) fep_vkb_side_pane_ParamLimits

0xcb55,	// (0x0004386b) fep_vkb_side_pane

0xcb91,	// (0x000438a7) fep_vkb_top_pane_ParamLimits

0xcb91,	// (0x000438a7) fep_vkb_top_pane

0x4f43,	// (0x0003bc59) fep_vkb_top_pane_g1_ParamLimits

0x4f43,	// (0x0003bc59) fep_vkb_top_pane_g1

0x4f52,	// (0x0003bc68) fep_vkb_top_pane_g2_ParamLimits

0x4f52,	// (0x0003bc68) fep_vkb_top_pane_g2

0x4f61,	// (0x0003bc77) fep_vkb_top_pane_g3_ParamLimits

0x4f61,	// (0x0003bc77) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00046848) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00046848) fep_vkb_top_pane_g

0x4f7f,	// (0x0003bc95) fep_vkb_top_text_pane_ParamLimits

0x4f7f,	// (0x0003bc95) fep_vkb_top_text_pane

0xcbcd,	// (0x000438e3) fep_vkb_side_pane_g1_ParamLimits

0xcbcd,	// (0x000438e3) fep_vkb_side_pane_g1

0x4fd9,	// (0x0003bcef) grid_vkb_side_pane_ParamLimits

0x4fd9,	// (0x0003bcef) grid_vkb_side_pane

0x0f05,	// (0x00037c1b) bg_popup_fep_shadow_pane_g2

0x0f0e,	// (0x00037c24) bg_popup_fep_shadow_pane_g3

0x0f16,	// (0x00037c2c) bg_popup_fep_shadow_pane_g4

0x0f1f,	// (0x00037c35) bg_popup_fep_shadow_pane_g5

0x0f29,	// (0x00037c3f) bg_popup_fep_shadow_pane_g6

0x0f31,	// (0x00037c47) bg_popup_fep_shadow_pane_g7

0xbb06,	// (0x0004281c) bg_popup_fep_shadow_pane_g8

0x5038,	// (0x0003bd4e) grid_vkb_keypad_number_pane_ParamLimits

0x5038,	// (0x0003bd4e) grid_vkb_keypad_number_pane

0x504c,	// (0x0003bd62) grid_vkb_keypad_pane_ParamLimits

0x504c,	// (0x0003bd62) grid_vkb_keypad_pane

0x5072,	// (0x0003bd88) fep_vkb_bottom_pane_g1_ParamLimits

0x5072,	// (0x0003bd88) fep_vkb_bottom_pane_g1

0x509b,	// (0x0003bdb1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x509b,	// (0x0003bdb1) grid_vkb_keypad_bottom_left_pane

0x50b0,	// (0x0003bdc6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x50b0,	// (0x0003bdc6) grid_vkb_keypad_bottom_right_pane

0x50c5,	// (0x0003bddb) fep_vkb_top_text_pane_g1

0xcc14,	// (0x0004392a) fep_vkb_top_text_pane_t1

0xcc26,	// (0x0004393c) cell_vkb_side_pane_ParamLimits

0xcc26,	// (0x0004393c) cell_vkb_side_pane

0x4cf6,	// (0x0003ba0c) cell_vkb_side_pane_g1

0x5134,	// (0x0003be4a) cell_vkb_keypad_pane_ParamLimits

0x5134,	// (0x0003be4a) cell_vkb_keypad_pane

0x51c1,	// (0x0003bed7) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00046875) bg_popup_fep_shadow_pane_g

0x0f43,	// (0x00037c59) cell_hwr_side_pane_g1

0x0f43,	// (0x00037c59) cell_hwr_side_pane_g2

0x51cb,	// (0x0003bee1) cell_vkb_keypad_pane_t1

0xcc3c,	// (0x00043952) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcc3c,	// (0x00043952) cell_vkb_keypad_bottom_left_pane

0xcc51,	// (0x00043967) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc51,	// (0x00043967) cell_vkb_keypad_bottom_right_pane

0x4cf6,	// (0x0003ba0c) cell_vkb_keypad_bottom_left_pane_g1

0x4cf6,	// (0x0003ba0c) cell_vkb_keypad_bottom_right_pane_g1

0x522f,	// (0x0003bf45) cell_vkb_keypad_number_pane_ParamLimits

0x522f,	// (0x0003bf45) cell_vkb_keypad_number_pane

0x524e,	// (0x0003bf64) cell_vkb_keypad_number_pane_g1

0x5258,	// (0x0003bf6e) cell_vkb_keypad_number_pane_g2

0x5261,	// (0x0003bf77) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00046867) cell_vkb_keypad_number_pane_g

0x51cb,	// (0x0003bee1) cell_vkb_keypad_number_pane_t1

0x528b,	// (0x0003bfa1) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00046888) cell_hwr_side_pane_g

0x52a4,	// (0x0003bfba) cell_hwr_side_pane_t1

0x0f4d,	// (0x00037c63) cell_hwr_side_pane_t1_copy1

0x0f5b,	// (0x00037c71) cell_hwr_candidate_pane_g1

0x0f8a,	// (0x00037ca0) cell_hwr_candidate_pane_t1

0x4cf6,	// (0x0003ba0c) cell_vkb_candidate_pane_g2

0x52e8,	// (0x0003bffe) cell_vkb_candidate_pane_t1

0x0ce0,	// (0x000379f6) bg_popup_fep_shadow_pane_ParamLimits

0x0ce0,	// (0x000379f6) bg_popup_fep_shadow_pane

0x0d97,	// (0x00037aad) bg_fep_hwr_top_pane_g4

0x4d7b,	// (0x0003ba91) bg_hwr_side_pane_g1_ParamLimits

0x4d7b,	// (0x0003ba91) bg_hwr_side_pane_g1

0xb033,	// (0x00041d49) cell_hwr_side_pane_ParamLimits

0xb033,	// (0x00041d49) cell_hwr_side_pane

0x0e47,	// (0x00037b5d) fep_hwr_write_pane_g1_ParamLimits

0x0e47,	// (0x00037b5d) fep_hwr_write_pane_g1

0x0e54,	// (0x00037b6a) fep_hwr_write_pane_g2_ParamLimits

0x0e54,	// (0x00037b6a) fep_hwr_write_pane_g2

0x0e61,	// (0x00037b77) fep_hwr_write_pane_g3_ParamLimits

0x0e61,	// (0x00037b77) fep_hwr_write_pane_g3

0xb053,	// (0x00041d69) fep_hwr_write_pane_g4_ParamLimits

0xb053,	// (0x00041d69) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00046834) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00046834) fep_hwr_write_pane_g

0x0d97,	// (0x00037aad) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d97,	// (0x00037aad) bg_fep_hwr_candidate_pane_g2

0x0e84,	// (0x00037b9a) cell_hwr_candidate_pane_ParamLimits

0x0e84,	// (0x00037b9a) cell_hwr_candidate_pane

0x0ed6,	// (0x00037bec) fep_hwr_candidate_pane_g1_ParamLimits

0x4ddb,	// (0x0003baf1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4ddb,	// (0x0003baf1) bg_popup_fep_shadow_pane_cp2

0x4f71,	// (0x0003bc87) fep_vkb_top_pane_g4_ParamLimits

0x4f71,	// (0x0003bc87) fep_vkb_top_pane_g4

0x4fb7,	// (0x0003bccd) fep_vkb_side_pane_g2_ParamLimits

0x4fb7,	// (0x0003bccd) fep_vkb_side_pane_g2

0x9d40,	// (0x00040a56) list_setting_pane_t4_ParamLimits

0x9d40,	// (0x00040a56) list_setting_pane_t4

0x9ddc,	// (0x00040af2) list_setting_number_pane_t5_ParamLimits

0x9ddc,	// (0x00040af2) list_setting_number_pane_t5

0xa12f,	// (0x00040e45) list_double_heading_pane_cp2_ParamLimits

0xa12f,	// (0x00040e45) list_double_heading_pane_cp2

0xbaa1,	// (0x000427b7) list_double_heading_pane_g1_cp2_ParamLimits

0xbaa1,	// (0x000427b7) list_double_heading_pane_g1_cp2

0xbaad,	// (0x000427c3) list_double_heading_pane_g2_cp2_ParamLimits

0xbaad,	// (0x000427c3) list_double_heading_pane_g2_cp2

0x52f6,	// (0x0003c00c) list_double_heading_pane_t1_cp2_ParamLimits

0x52f6,	// (0x0003c00c) list_double_heading_pane_t1_cp2

0x530c,	// (0x0003c022) list_double_heading_pane_t2_cp2_ParamLimits

0x530c,	// (0x0003c022) list_double_heading_pane_t2_cp2

0x8799,	// (0x0003f4af) aid_value_unit2

0xec6a,	// (0x00045980) popup_preview_fixed_window

0x8944,	// (0x0003f65a) bg_popup_preview_window_pane_cp02

0x531e,	// (0x0003c034) list_preview_fixed_pane

0x5364,	// (0x0003c07a) list_empty_pane_fp_ParamLimits

0x5364,	// (0x0003c07a) list_empty_pane_fp

0x5364,	// (0x0003c07a) list_single_cale_day_pane_fp_ParamLimits

0x5364,	// (0x0003c07a) list_single_cale_day_pane_fp

0x5364,	// (0x0003c07a) list_single_graphic_heading_pane_fp_ParamLimits

0x5364,	// (0x0003c07a) list_single_graphic_heading_pane_fp

0x5364,	// (0x0003c07a) list_single_graphic_pane_fp_ParamLimits

0x5364,	// (0x0003c07a) list_single_graphic_pane_fp

0x5364,	// (0x0003c07a) list_single_heading_pane_fp_ParamLimits

0x5364,	// (0x0003c07a) list_single_heading_pane_fp

0x5364,	// (0x0003c07a) list_single_pane_fp_ParamLimits

0x5364,	// (0x0003c07a) list_single_pane_fp

0x537d,	// (0x0003c093) list_single_pane_fp_g1_ParamLimits

0x537d,	// (0x0003c093) list_single_pane_fp_g1

0xd6df,	// (0x000443f5) list_single_pane_fp_g2_ParamLimits

0xd6df,	// (0x000443f5) list_single_pane_fp_g2

0xd6eb,	// (0x00044401) list_single_pane_fp_g3_ParamLimits

0xd6eb,	// (0x00044401) list_single_pane_fp_g3

0x5389,	// (0x0003c09f) list_single_pane_fp_g4_ParamLimits

0x5389,	// (0x0003c09f) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0004689b) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0004689b) list_single_pane_fp_g

0xd6ff,	// (0x00044415) list_single_pane_fp_t1_ParamLimits

0xd6ff,	// (0x00044415) list_single_pane_fp_t1

0xd716,	// (0x0004442c) list_single_graphic_pane_fp_g1_ParamLimits

0xd716,	// (0x0004442c) list_single_graphic_pane_fp_g1

0x537d,	// (0x0003c093) list_single_graphic_pane_fp_g2_ParamLimits

0x537d,	// (0x0003c093) list_single_graphic_pane_fp_g2

0xd6df,	// (0x000443f5) list_single_graphic_pane_fp_g3_ParamLimits

0xd6df,	// (0x000443f5) list_single_graphic_pane_fp_g3

0xd6eb,	// (0x00044401) list_single_graphic_pane_fp_g4_ParamLimits

0xd6eb,	// (0x00044401) list_single_graphic_pane_fp_g4

0x5389,	// (0x0003c09f) list_single_graphic_pane_fp_g5_ParamLimits

0x5389,	// (0x0003c09f) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x000468a4) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x000468a4) list_single_graphic_pane_fp_g

0xd722,	// (0x00044438) list_single_graphic_pane_fp_t1_ParamLimits

0xd722,	// (0x00044438) list_single_graphic_pane_fp_t1

0xd716,	// (0x0004442c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd716,	// (0x0004442c) list_single_graphic_heading_pane_fp_g1

0x537d,	// (0x0003c093) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x537d,	// (0x0003c093) list_single_graphic_heading_pane_fp_g2

0xd6df,	// (0x000443f5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd6df,	// (0x000443f5) list_single_graphic_heading_pane_fp_g3

0xd6eb,	// (0x00044401) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd6eb,	// (0x00044401) list_single_graphic_heading_pane_fp_g4

0x5389,	// (0x0003c09f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5389,	// (0x0003c09f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x000468a4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x000468a4) list_single_graphic_heading_pane_fp_g

0xd738,	// (0x0004444e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd738,	// (0x0004444e) list_single_graphic_heading_pane_fp_t1

0xd74e,	// (0x00044464) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd74e,	// (0x00044464) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x000468af) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x000468af) list_single_graphic_heading_pane_fp_t

0xd760,	// (0x00044476) list_single_cale_day_pane_fp_g1_ParamLimits

0xd760,	// (0x00044476) list_single_cale_day_pane_fp_g1

0x5395,	// (0x0003c0ab) list_single_cale_day_pane_fp_g2_ParamLimits

0x5395,	// (0x0003c0ab) list_single_cale_day_pane_fp_g2

0xd798,	// (0x000444ae) list_single_cale_day_pane_fp_g3_ParamLimits

0xd798,	// (0x000444ae) list_single_cale_day_pane_fp_g3

0xd7c0,	// (0x000444d6) list_single_cale_day_pane_fp_g4_ParamLimits

0xd7c0,	// (0x000444d6) list_single_cale_day_pane_fp_g4

0xd7e4,	// (0x000444fa) list_single_cale_day_pane_fp_g5_ParamLimits

0xd7e4,	// (0x000444fa) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x000468b4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x000468b4) list_single_cale_day_pane_fp_g

0xd808,	// (0x0004451e) list_single_cale_day_pane_fp_t1_ParamLimits

0xd808,	// (0x0004451e) list_single_cale_day_pane_fp_t1

0xd82e,	// (0x00044544) list_single_cale_day_pane_fp_t2_ParamLimits

0xd82e,	// (0x00044544) list_single_cale_day_pane_fp_t2

0xd847,	// (0x0004455d) list_single_cale_day_pane_fp_t3_ParamLimits

0xd847,	// (0x0004455d) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x000468bf) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x000468bf) list_single_cale_day_pane_fp_t

0x537d,	// (0x0003c093) list_empty_pane_fp_g1_ParamLimits

0x537d,	// (0x0003c093) list_empty_pane_fp_g1

0xd860,	// (0x00044576) list_empty_pane_fp_t1

0xd86e,	// (0x00044584) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x000468c6) list_empty_pane_fp_t

0x537d,	// (0x0003c093) list_single_heading_pane_fp_g1_ParamLimits

0x537d,	// (0x0003c093) list_single_heading_pane_fp_g1

0xd6df,	// (0x000443f5) list_single_heading_pane_fp_g2_ParamLimits

0xd6df,	// (0x000443f5) list_single_heading_pane_fp_g2

0xd6eb,	// (0x00044401) list_single_heading_pane_fp_g3_ParamLimits

0xd6eb,	// (0x00044401) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x000468cb) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x000468cb) list_single_heading_pane_fp_g

0xd87c,	// (0x00044592) list_single_heading_pane_fp_t1_ParamLimits

0xd87c,	// (0x00044592) list_single_heading_pane_fp_t1

0xd88e,	// (0x000445a4) list_single_heading_pane_fp_t2_ParamLimits

0xd88e,	// (0x000445a4) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x000468d2) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x000468d2) list_single_heading_pane_fp_t

0xbbf9,	// (0x0004290f) aid_size_cell_fast

0x8919,	// (0x0003f62f) soft_indicator_pane_cp1_t1

0xbc36,	// (0x0004294c) cell_app_pane_cp2_ParamLimits

0xbc36,	// (0x0004294c) cell_app_pane_cp2

0x0d02,	// (0x00037a18) fep_hwr_candidate_drop_down_list_pane

0x0ef0,	// (0x00037c06) fep_hwr_candidate_pane_g3_ParamLimits

0x0ef0,	// (0x00037c06) fep_hwr_candidate_pane_g3

0xd6d2,	// (0x000443e8) fep_hwr_candidate_pane_g4_ParamLimits

0xd6d2,	// (0x000443e8) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00046841) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00046841) fep_hwr_candidate_pane_g

0x4e6b,	// (0x0003bb81) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4e6b,	// (0x0003bb81) fep_vkb_candidate_drop_down_list_pane

0x5293,	// (0x0003bfa9) fep_vkb_candidate_pane_g3

0x529b,	// (0x0003bfb1) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0004686e) fep_vkb_candidate_pane_g

0x0f5b,	// (0x00037c71) cell_hwr_candidate_pane_g1_ParamLimits

0x0f69,	// (0x00037c7f) cell_hwr_candidate_pane_g3_ParamLimits

0x0f69,	// (0x00037c7f) cell_hwr_candidate_pane_g3

0x6e28,	// (0x0003db3e) cell_hwr_candidate_pane_g4_ParamLimits

0x6e28,	// (0x0003db3e) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0004688d) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0004688d) cell_hwr_candidate_pane_g

0x52b2,	// (0x0003bfc8) cell_vkb_candidate_pane_g3_ParamLimits

0x52b2,	// (0x0003bfc8) cell_vkb_candidate_pane_g3

0x52cd,	// (0x0003bfe3) cell_vkb_candidate_pane_g4_ParamLimits

0x52cd,	// (0x0003bfe3) cell_vkb_candidate_pane_g4

0x53a1,	// (0x0003c0b7) cell_app_pane_cp2_g1_ParamLimits

0x53a1,	// (0x0003c0b7) cell_app_pane_cp2_g1

0x53bf,	// (0x0003c0d5) cell_app_pane_cp2_g2_ParamLimits

0x53bf,	// (0x0003c0d5) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x000468d7) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x000468d7) cell_app_pane_cp2_g

0x53cb,	// (0x0003c0e1) cell_app_pane_cp2_t1_ParamLimits

0x53cb,	// (0x0003c0e1) cell_app_pane_cp2_t1

0xba87,	// (0x0004279d) grid_highlight_pane_cp1_ParamLimits

0xba87,	// (0x0004279d) grid_highlight_pane_cp1

0x0fa8,	// (0x00037cbe) cell_hwr_candidate_pane_cp1_ParamLimits

0x0fa8,	// (0x00037cbe) cell_hwr_candidate_pane_cp1

0x0f5b,	// (0x00037c71) fep_hwr_candidate_drop_down_list_pane_g1

0x0fcc,	// (0x00037ce2) fep_hwr_candidate_drop_down_list_pane_g2

0x0fd9,	// (0x00037cef) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x000468dc) fep_hwr_candidate_drop_down_list_pane_g

0x0fe6,	// (0x00037cfc) fep_hwr_candidate_drop_down_list_scroll_pane

0x0fef,	// (0x00037d05) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0fef,	// (0x00037d05) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0ffc,	// (0x00037d12) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0ffc,	// (0x00037d12) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1009,	// (0x00037d1f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1009,	// (0x00037d1f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1016,	// (0x00037d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1016,	// (0x00037d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1031,	// (0x00037d47) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1031,	// (0x00037d47) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x104c,	// (0x00037d62) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x104c,	// (0x00037d62) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1067,	// (0x00037d7d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1067,	// (0x00037d7d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1082,	// (0x00037d98) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1082,	// (0x00037d98) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x000468e3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x000468e3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x53dd,	// (0x0003c0f3) cell_vkb_candidate_pane_cp1_ParamLimits

0x53dd,	// (0x0003c0f3) cell_vkb_candidate_pane_cp1

0x4f71,	// (0x0003bc87) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4f71,	// (0x0003bc87) fep_vkb_candidate_drop_down_list_pane_g1

0x5403,	// (0x0003c119) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5403,	// (0x0003c119) fep_vkb_candidate_drop_down_list_pane_g2

0x5410,	// (0x0003c126) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5410,	// (0x0003c126) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x000468f4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x000468f4) fep_vkb_candidate_drop_down_list_pane_g

0x541d,	// (0x0003c133) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x541d,	// (0x0003c133) fep_vkb_candidate_drop_down_list_scroll_pane

0x542a,	// (0x0003c140) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x542a,	// (0x0003c140) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5437,	// (0x0003c14d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5437,	// (0x0003c14d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5443,	// (0x0003c159) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5443,	// (0x0003c159) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x544f,	// (0x0003c165) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x544f,	// (0x0003c165) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5470,	// (0x0003c186) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5470,	// (0x0003c186) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5491,	// (0x0003c1a7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5491,	// (0x0003c1a7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x54b2,	// (0x0003c1c8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x54b2,	// (0x0003c1c8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x54d3,	// (0x0003c1e9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x54d3,	// (0x0003c1e9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x000468fb) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x000468fb) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x961d,	// (0x00040333) title_pane_g1_ParamLimits

0x9630,	// (0x00040346) title_pane_g2_ParamLimits

0xf554,	// (0x0004626a) title_pane_g_ParamLimits

0xefa9,	// (0x00045cbf) aid_call2_pane

0xefb1,	// (0x00045cc7) aid_call_pane

0xefb9,	// (0x00045ccf) popup_clock_analogue_window_g1

0xefb9,	// (0x00045ccf) popup_clock_analogue_window_g2

0xefc1,	// (0x00045cd7) popup_clock_analogue_window_g3

0xefca,	// (0x00045ce0) popup_clock_analogue_window_g4

0x87ab,	// (0x0003f4c1) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00046414) popup_clock_analogue_window_g

0xefd2,	// (0x00045ce8) popup_clock_analogue_window_t1

0xf02f,	// (0x00045d45) clock_digital_number_pane_ParamLimits

0xf02f,	// (0x00045d45) clock_digital_number_pane

0xf03b,	// (0x00045d51) clock_digital_number_pane_cp02_ParamLimits

0xf03b,	// (0x00045d51) clock_digital_number_pane_cp02

0xf047,	// (0x00045d5d) clock_digital_number_pane_cp03_ParamLimits

0xf047,	// (0x00045d5d) clock_digital_number_pane_cp03

0xf053,	// (0x00045d69) clock_digital_number_pane_cp04_ParamLimits

0xf053,	// (0x00045d69) clock_digital_number_pane_cp04

0xf05f,	// (0x00045d75) clock_digital_separator_pane_ParamLimits

0xf05f,	// (0x00045d75) clock_digital_separator_pane

0xf06b,	// (0x00045d81) popup_clock_digital_window_t1_ParamLimits

0xf06b,	// (0x00045d81) popup_clock_digital_window_t1

0x87ab,	// (0x0003f4c1) clock_digital_number_pane_g1

0x87ab,	// (0x0003f4c1) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0004641f) clock_digital_number_pane_g

0x87ab,	// (0x0003f4c1) clock_digital_separator_pane_g1

0x87ab,	// (0x0003f4c1) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0004641f) clock_digital_separator_pane_g

0xacd4,	// (0x000419ea) aid_fill_nsta_ParamLimits

0xbfb2,	// (0x00042cc8) indicator_nsta_pane_ParamLimits

0x23bd,	// (0x000390d3) popup_clock_analogue_window

0x23bd,	// (0x000390d3) popup_clock_digital_window

0xc909,	// (0x0004361f) grid_indicator_nsta_pane_ParamLimits

0x471d,	// (0x0003b433) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x000467c1) clock_nsta_pane_t

0xef76,	// (0x00045c8c) aid_size_max_handle

0xa0a2,	// (0x00040db8) aid_size_min_handle

0x1d6e,	// (0x00038a84) editor_scroll_pane

0x54ee,	// (0x0003c204) ex_editor_pane

0xbbbf,	// (0x000428d5) scroll_pane_cp13

0xba26,	// (0x0004273c) scroll_pane_cp14

0xf007,	// (0x00045d1d) scroll_pane_cp36

0xa142,	// (0x00040e58) list_single_graphic_hl_pane_cp2_ParamLimits

0xa142,	// (0x00040e58) list_single_graphic_hl_pane_cp2

0xc7a1,	// (0x000434b7) list_single_graphic_hl_pane_ParamLimits

0xc7a1,	// (0x000434b7) list_single_graphic_hl_pane

0xd8a4,	// (0x000445ba) aid_size_min_hl_cp1

0x54f6,	// (0x0003c20c) list_highlight_pane_cp34_ParamLimits

0x54f6,	// (0x0003c20c) list_highlight_pane_cp34

0x5507,	// (0x0003c21d) list_single_graphic_hl_pane_g1_ParamLimits

0x5507,	// (0x0003c21d) list_single_graphic_hl_pane_g1

0xb068,	// (0x00041d7e) list_single_graphic_hl_pane_g2_ParamLimits

0xb068,	// (0x00041d7e) list_single_graphic_hl_pane_g2

0xb068,	// (0x00041d7e) list_single_graphic_hl_pane_g3_ParamLimits

0xb068,	// (0x00041d7e) list_single_graphic_hl_pane_g3

0xd8ad,	// (0x000445c3) list_single_graphic_hl_pane_g4_ParamLimits

0xd8ad,	// (0x000445c3) list_single_graphic_hl_pane_g4

0xb074,	// (0x00041d8a) list_single_graphic_hl_pane_g5_ParamLimits

0xb074,	// (0x00041d8a) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0004690c) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0004690c) list_single_graphic_hl_pane_g

0xb088,	// (0x00041d9e) list_single_graphic_hl_pane_t1_ParamLimits

0xb088,	// (0x00041d9e) list_single_graphic_hl_pane_t1

0x5514,	// (0x0003c22a) aid_size_min_hl_cp2

0x551d,	// (0x0003c233) list_highlight_pane_cp34_cp2_ParamLimits

0x551d,	// (0x0003c233) list_highlight_pane_cp34_cp2

0x5507,	// (0x0003c21d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5507,	// (0x0003c21d) list_single_graphic_hl_pane_g1_cp2

0x552a,	// (0x0003c240) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x552a,	// (0x0003c240) list_single_graphic_hl_pane_g2_cp2

0xcc6c,	// (0x00043982) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcc6c,	// (0x00043982) list_single_graphic_hl_pane_g3_cp2

0xcc7a,	// (0x00043990) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcc7a,	// (0x00043990) list_single_graphic_hl_pane_g4_cp2

0x5544,	// (0x0003c25a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5544,	// (0x0003c25a) list_single_graphic_hl_pane_g5_cp2

0xa45d,	// (0x00041173) control_pane_g4_ParamLimits

0xa45d,	// (0x00041173) control_pane_g4

0x20ba,	// (0x00038dd0) bg_popup_sub_pane_cp10_ParamLimits

0x4d00,	// (0x0003ba16) list_choice_list_pane_ParamLimits

0x4d0f,	// (0x0003ba25) scroll_pane_cp23

0x8944,	// (0x0003f65a) bg_popup_preview_window_pane_cp02_ParamLimits

0x531e,	// (0x0003c034) list_preview_fixed_pane_ParamLimits

0x5334,	// (0x0003c04a) list_preview_fixed_pane_cp_ParamLimits

0x5334,	// (0x0003c04a) list_preview_fixed_pane_cp

0x5340,	// (0x0003c056) popup_preview_fixed_window_g1_ParamLimits

0x5340,	// (0x0003c056) popup_preview_fixed_window_g1

0x534c,	// (0x0003c062) popup_preview_fixed_window_g2_ParamLimits

0x534c,	// (0x0003c062) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00046894) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00046894) popup_preview_fixed_window_g

0xeee8,	// (0x00045bfe) aid_navi_side_left_pane_ParamLimits

0xeefd,	// (0x00045c13) aid_navi_side_right_pane_ParamLimits

0xef15,	// (0x00045c2b) navi_icon_pane_stacon_ParamLimits

0xef29,	// (0x00045c3f) navi_navi_pane_stacon_ParamLimits

0xef15,	// (0x00045c2b) navi_text_pane_stacon_ParamLimits

0xeb5b,	// (0x00045871) main_text_info_pane

0x556e,	// (0x0003c284) listscroll_text_info_pane

0x5576,	// (0x0003c28c) list_text_info_pane_ParamLimits

0x5576,	// (0x0003c28c) list_text_info_pane

0x5585,	// (0x0003c29b) scroll_pane_cp24_ParamLimits

0x5585,	// (0x0003c29b) scroll_pane_cp24

0xcc86,	// (0x0004399c) list_text_info_pane_t1_ParamLimits

0xcc86,	// (0x0004399c) list_text_info_pane_t1

0xa5cd,	// (0x000412e3) popup_fast_swap2_window_ParamLimits

0xa5cd,	// (0x000412e3) popup_fast_swap2_window

0x55c8,	// (0x0003c2de) aid_size_cell_fast2

0x87a1,	// (0x0003f4b7) bg_popup_window_pane_cp17

0x2aa2,	// (0x000397b8) heading_pane_cp2

0xb7ab,	// (0x000424c1) listscroll_fast2_pane

0x55d2,	// (0x0003c2e8) grid_fast2_pane

0x55dc,	// (0x0003c2f2) listscroll_fast2_pane_g1

0x55e6,	// (0x0003c2fc) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x00046917) listscroll_fast2_pane_g

0xbbbf,	// (0x000428d5) scroll_pane_cp26

0x55f0,	// (0x0003c306) cell_fast2_pane_ParamLimits

0x55f0,	// (0x0003c306) cell_fast2_pane

0x5607,	// (0x0003c31d) cell_fast2_pane_g1

0x5610,	// (0x0003c326) cell_fast2_pane_g2

0x5619,	// (0x0003c32f) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0004691c) cell_fast2_pane_g

0xb7ed,	// (0x00042503) grid_highlight_pane_cp9

0x013e,	// (0x00036e54) main_eswt_pane_ParamLimits

0x013e,	// (0x00036e54) main_eswt_pane

0x559a,	// (0x0003c2b0) list_single_text_info_pane

0x5621,	// (0x0003c337) eswt_ctrl_button_pane

0x5621,	// (0x0003c337) eswt_ctrl_canvas_pane

0x5629,	// (0x0003c33f) eswt_ctrl_combo_pane

0x5621,	// (0x0003c337) eswt_ctrl_default_pane

0x5621,	// (0x0003c337) eswt_ctrl_label_pane

0x5631,	// (0x0003c347) eswt_ctrl_wait_pane

0x5639,	// (0x0003c34f) eswt_shell_pane

0x87a1,	// (0x0003f4b7) listscroll_eswt_app_pane

0x5659,	// (0x0003c36f) popup_eswt_tasktip_window_ParamLimits

0x5659,	// (0x0003c36f) popup_eswt_tasktip_window

0x26e2,	// (0x000393f8) bg_popup_window_pane_cp18

0x566a,	// (0x0003c380) eswt_control_pane_g1_ParamLimits

0x566a,	// (0x0003c380) eswt_control_pane_g1

0x5677,	// (0x0003c38d) eswt_control_pane_g2_ParamLimits

0x5677,	// (0x0003c38d) eswt_control_pane_g2

0x5684,	// (0x0003c39a) eswt_control_pane_g3_ParamLimits

0x5684,	// (0x0003c39a) eswt_control_pane_g3

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_ParamLimits

0x5691,	// (0x0003c3a7) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x00046923) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x00046923) eswt_control_pane_g

0xba87,	// (0x0004279d) bg_button_pane_ParamLimits

0xba87,	// (0x0004279d) bg_button_pane

0xb802,	// (0x00042518) common_borders_pane_copy2_ParamLimits

0xb802,	// (0x00042518) common_borders_pane_copy2

0x569e,	// (0x0003c3b4) control_button_pane_g1_ParamLimits

0x569e,	// (0x0003c3b4) control_button_pane_g1

0x56aa,	// (0x0003c3c0) control_button_pane_g2_ParamLimits

0x56aa,	// (0x0003c3c0) control_button_pane_g2

0x56b6,	// (0x0003c3cc) control_button_pane_g3_ParamLimits

0x56b6,	// (0x0003c3cc) control_button_pane_g3

0x0002,

0xfc16,	// (0x0004692c) control_button_pane_g_ParamLimits

0xfc16,	// (0x0004692c) control_button_pane_g

0x56ca,	// (0x0003c3e0) control_button_pane_t1

0x56d8,	// (0x0003c3ee) control_button_pane_t2

0x0001,

0xfc1d,	// (0x00046933) control_button_pane_t

0x25e6,	// (0x000392fc) bg_button_pane_g1

0x25f6,	// (0x0003930c) bg_button_pane_g2

0x25ee,	// (0x00039304) bg_button_pane_g3

0x2606,	// (0x0003931c) bg_button_pane_g4

0x25fe,	// (0x00039314) bg_button_pane_g5

0x260e,	// (0x00039324) bg_button_pane_g6

0x2616,	// (0x0003932c) bg_button_pane_g7

0x2626,	// (0x0003933c) bg_button_pane_g8

0x261e,	// (0x00039334) bg_button_pane_g9

0x0008,

0xf867,	// (0x0004657d) bg_button_pane_g

0x4cbb,	// (0x0003b9d1) common_borders_pane_ParamLimits

0x4cbb,	// (0x0003b9d1) common_borders_pane

0x566a,	// (0x0003c380) eswt_control_pane_g1_copy1_ParamLimits

0x566a,	// (0x0003c380) eswt_control_pane_g1_copy1

0x5677,	// (0x0003c38d) eswt_control_pane_g2_copy1_ParamLimits

0x5677,	// (0x0003c38d) eswt_control_pane_g2_copy1

0x5684,	// (0x0003c39a) eswt_control_pane_g3_copy1_ParamLimits

0x5684,	// (0x0003c39a) eswt_control_pane_g3_copy1

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_copy1_ParamLimits

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_copy1

0x4cf6,	// (0x0003ba0c) bg_eswt_ctrl_canvas_pane_g1

0x4cbb,	// (0x0003b9d1) common_borders_pane_cp2_ParamLimits

0x4cbb,	// (0x0003b9d1) common_borders_pane_cp2

0x4cbb,	// (0x0003b9d1) common_borders_pane_cp3_ParamLimits

0x4cbb,	// (0x0003b9d1) common_borders_pane_cp3

0x56e6,	// (0x0003c3fc) separator_horizontal_pane

0x56ee,	// (0x0003c404) separator_vertical_pane

0x566a,	// (0x0003c380) eswt_control_pane_g1_copy2_ParamLimits

0x566a,	// (0x0003c380) eswt_control_pane_g1_copy2

0x5677,	// (0x0003c38d) eswt_control_pane_g2_copy2_ParamLimits

0x5677,	// (0x0003c38d) eswt_control_pane_g2_copy2

0x5684,	// (0x0003c39a) eswt_control_pane_g3_copy2_ParamLimits

0x5684,	// (0x0003c39a) eswt_control_pane_g3_copy2

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_copy2_ParamLimits

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_copy2

0x87a1,	// (0x0003f4b7) common_borders_pane_cp4

0x56f7,	// (0x0003c40d) separator_horizontal_pane_g1

0x5700,	// (0x0003c416) separator_horizontal_pane_g2

0x5709,	// (0x0003c41f) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00046938) separator_horizontal_pane_g

0x566a,	// (0x0003c380) eswt_control_pane_g1_copy3_ParamLimits

0x566a,	// (0x0003c380) eswt_control_pane_g1_copy3

0x5677,	// (0x0003c38d) eswt_control_pane_g2_copy3_ParamLimits

0x5677,	// (0x0003c38d) eswt_control_pane_g2_copy3

0x5684,	// (0x0003c39a) eswt_control_pane_g3_copy3_ParamLimits

0x5684,	// (0x0003c39a) eswt_control_pane_g3_copy3

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_copy3_ParamLimits

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_copy3

0x87a1,	// (0x0003f4b7) common_borders_pane_cp5

0x5712,	// (0x0003c428) separator_vertical_pane_g1

0x571b,	// (0x0003c431) separator_vertical_pane_g2

0x5724,	// (0x0003c43a) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0004693f) separator_vertical_pane_g

0x566a,	// (0x0003c380) eswt_control_pane_g1_copy4_ParamLimits

0x566a,	// (0x0003c380) eswt_control_pane_g1_copy4

0x5677,	// (0x0003c38d) eswt_control_pane_g2_copy4_ParamLimits

0x5677,	// (0x0003c38d) eswt_control_pane_g2_copy4

0x5684,	// (0x0003c39a) eswt_control_pane_g3_copy4_ParamLimits

0x5684,	// (0x0003c39a) eswt_control_pane_g3_copy4

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_copy4_ParamLimits

0x5691,	// (0x0003c3a7) eswt_control_pane_g4_copy4

0xcca8,	// (0x000439be) eswt_ctrl_combo_button_pane

0xccb0,	// (0x000439c6) eswt_ctrl_input_pane

0xccb8,	// (0x000439ce) popup_choice_list_window_cp70

0xccc0,	// (0x000439d6) eswt_ctrl_input_pane_t1

0x87a1,	// (0x0003f4b7) input_focus_pane_cp70

0x4cbb,	// (0x0003b9d1) bg_button_pane_cp70_ParamLimits

0x4cbb,	// (0x0003b9d1) bg_button_pane_cp70

0xccce,	// (0x000439e4) eswt_ctrl_combo_button_pane_g1

0x575b,	// (0x0003c471) wait_bar_pane_cp70

0x26e2,	// (0x000393f8) bg_popup_window_pane_cp70_ParamLimits

0x26e2,	// (0x000393f8) bg_popup_window_pane_cp70

0x5763,	// (0x0003c479) popup_eswt_tasktip_window_t1

0x5779,	// (0x0003c48f) wait_bar_pane_cp71_ParamLimits

0x5779,	// (0x0003c48f) wait_bar_pane_cp71

0x5785,	// (0x0003c49b) grid_eswt_app_pane

0xbdff,	// (0x00042b15) scroll_pane_cp70

0xccd6,	// (0x000439ec) cell_eswt_app_pane_ParamLimits

0xccd6,	// (0x000439ec) cell_eswt_app_pane

0xcd08,	// (0x00043a1e) cell_eswt_app_pane_g1_ParamLimits

0xcd08,	// (0x00043a1e) cell_eswt_app_pane_g1

0xcd37,	// (0x00043a4d) cell_eswt_app_pane_g2_ParamLimits

0xcd37,	// (0x00043a4d) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x00046946) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x00046946) cell_eswt_app_pane_g

0xcd60,	// (0x00043a76) cell_eswt_app_pane_t1_ParamLimits

0xcd60,	// (0x00043a76) cell_eswt_app_pane_t1

0x584a,	// (0x0003c560) grid_highlight_pane_cp70_ParamLimits

0x584a,	// (0x0003c560) grid_highlight_pane_cp70

0x1c3f,	// (0x00038955) set_content_pane_g1

0x2012,	// (0x00038d28) status_small_volume_pane

0x10d3,	// (0x00037de9) status_small_volume_pane_g1

0x10db,	// (0x00037df1) volume_small2_pane

0x10e4,	// (0x00037dfa) volume_small2_pane_g1

0x10ed,	// (0x00037e03) volume_small2_pane_g2

0x10f6,	// (0x00037e0c) volume_small2_pane_g3

0x10ff,	// (0x00037e15) volume_small2_pane_g4

0x1108,	// (0x00037e1e) volume_small2_pane_g5

0x1111,	// (0x00037e27) volume_small2_pane_g6

0x111a,	// (0x00037e30) volume_small2_pane_g7

0x1123,	// (0x00037e39) volume_small2_pane_g8

0x112c,	// (0x00037e42) volume_small2_pane_g9

0x1135,	// (0x00037e4b) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0004694b) volume_small2_pane_g

0x50c5,	// (0x0003bddb) fep_vkb_top_text_pane_g1_ParamLimits

0xcc14,	// (0x0004392a) fep_vkb_top_text_pane_t1_ParamLimits

0x5358,	// (0x0003c06e) popup_preview_fixed_window_g3_ParamLimits

0x5358,	// (0x0003c06e) popup_preview_fixed_window_g3

0xac67,	// (0x0004197d) popup_toolbar_trans_pane

0xc5f1,	// (0x00043307) aid_height_set_list_ParamLimits

0x3a51,	// (0x0003a767) aid_size_parent_ParamLimits

0x20ba,	// (0x00038dd0) list_highlight_pane_cp2_ParamLimits

0x1c3f,	// (0x00038955) set_content_pane_g1_ParamLimits

0xc7b5,	// (0x000434cb) list_single_image_pane_ParamLimits

0xc7b5,	// (0x000434cb) list_single_image_pane

0xcd92,	// (0x00043aa8) aid_size_cell_image_ParamLimits

0xcd92,	// (0x00043aa8) aid_size_cell_image

0xcd9f,	// (0x00043ab5) grid_single_image_pane_ParamLimits

0xcd9f,	// (0x00043ab5) grid_single_image_pane

0xbaa1,	// (0x000427b7) list_single_image_pane_g1_ParamLimits

0xbaa1,	// (0x000427b7) list_single_image_pane_g1

0xbaad,	// (0x000427c3) list_single_image_pane_g2_ParamLimits

0xbaad,	// (0x000427c3) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00046960) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00046960) list_single_image_pane_g

0x5871,	// (0x0003c587) list_single_image_pane_t1_ParamLimits

0x5871,	// (0x0003c587) list_single_image_pane_t1

0xcdad,	// (0x00043ac3) cell_image_list_pane_ParamLimits

0xcdad,	// (0x00043ac3) cell_image_list_pane

0xcdc1,	// (0x00043ad7) cell_image_list_pane_g1

0xcdca,	// (0x00043ae0) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00046965) cell_image_list_pane_g

0x58af,	// (0x0003c5c5) aid_size_cell_tb_trans_pane

0xba87,	// (0x0004279d) bg_tb_trans_pane

0x58c1,	// (0x0003c5d7) grid_tb_trans_pane

0x25e6,	// (0x000392fc) bg_tb_trans_pane_g1

0x25f6,	// (0x0003930c) bg_tb_trans_pane_g2

0x25ee,	// (0x00039304) bg_tb_trans_pane_g3

0x2606,	// (0x0003931c) bg_tb_trans_pane_g4

0x25fe,	// (0x00039314) bg_tb_trans_pane_g5

0x2626,	// (0x0003933c) bg_tb_trans_pane_g6

0x261e,	// (0x00039334) bg_tb_trans_pane_g7

0x260e,	// (0x00039324) bg_tb_trans_pane_g8

0x2616,	// (0x0003932c) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0004696a) bg_tb_trans_pane_g

0x58d5,	// (0x0003c5eb) cell_toolbar_trans_pane_ParamLimits

0x58d5,	// (0x0003c5eb) cell_toolbar_trans_pane

0x4cf6,	// (0x0003ba0c) cell_toolbar_trans_pane_g1

0xc9f9,	// (0x0004370f) list_form2_midp_pane_t1

0xca07,	// (0x0004371d) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00046807) list_form2_midp_pane_t

0x4936,	// (0x0003b64c) scroll_pane_cp51_ParamLimits

0x4afd,	// (0x0003b813) form2_midp_wait_pane_g1

0x4b06,	// (0x0003b81c) form2_midp_wait_pane_g2

0x4b0f,	// (0x0003b825) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0004681c) form2_midp_wait_pane_g

0x8803,	// (0x0003f519) list_highlight_pane_cp21_ParamLimits

0x4b53,	// (0x0003b869) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4b62,	// (0x0003b878) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd46e,	// (0x00044184) list_single_2graphic_im_pane_ParamLimits

0xd46e,	// (0x00044184) list_single_2graphic_im_pane

0xcdd3,	// (0x00043ae9) list_single_2graphic_im_pane_g1_ParamLimits

0xcdd3,	// (0x00043ae9) list_single_2graphic_im_pane_g1

0xcde4,	// (0x00043afa) list_single_2graphic_im_pane_g2_ParamLimits

0xcde4,	// (0x00043afa) list_single_2graphic_im_pane_g2

0xcdf0,	// (0x00043b06) list_single_2graphic_im_pane_g3_ParamLimits

0xcdf0,	// (0x00043b06) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0004697d) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0004697d) list_single_2graphic_im_pane_g

0xce04,	// (0x00043b1a) list_single_2graphic_im_pane_t1_ParamLimits

0xce04,	// (0x00043b1a) list_single_2graphic_im_pane_t1

0x5364,	// (0x0003c07a) list_single_graphic_2heading_pane_fp_ParamLimits

0x5364,	// (0x0003c07a) list_single_graphic_2heading_pane_fp

0xd716,	// (0x0004442c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd716,	// (0x0004442c) list_single_graphic_2heading_pane_fp_g1

0x537d,	// (0x0003c093) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x537d,	// (0x0003c093) list_single_graphic_2heading_pane_fp_g2

0xd6df,	// (0x000443f5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd6df,	// (0x000443f5) list_single_graphic_2heading_pane_fp_g3

0xd6eb,	// (0x00044401) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd6eb,	// (0x00044401) list_single_graphic_2heading_pane_fp_g4

0x5389,	// (0x0003c09f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5389,	// (0x0003c09f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x000468a4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x000468a4) list_single_graphic_2heading_pane_fp_g

0xd8b9,	// (0x000445cf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd8b9,	// (0x000445cf) list_single_graphic_2heading_pane_fp_t1

0xd74e,	// (0x00044464) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd74e,	// (0x00044464) list_single_graphic_2heading_pane_fp_t2

0xd8cf,	// (0x000445e5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd8cf,	// (0x000445e5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00046986) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00046986) list_single_graphic_2heading_pane_fp_t

0x4d87,	// (0x0003ba9d) fep_hwr_write_pane_g5_ParamLimits

0x4d87,	// (0x0003ba9d) fep_hwr_write_pane_g5

0x4d93,	// (0x0003baa9) fep_hwr_write_pane_g6_ParamLimits

0x4d93,	// (0x0003baa9) fep_hwr_write_pane_g6

0x5639,	// (0x0003c34f) eswt_shell_pane_ParamLimits

0x26e2,	// (0x000393f8) bg_popup_window_pane_cp18_ParamLimits

0x3997,	// (0x0003a6ad) heading_pane_cp70

0x5763,	// (0x0003c479) popup_eswt_tasktip_window_t1_ParamLimits

0xad31,	// (0x00041a47) aid_touch_tab_arrow_left

0xad45,	// (0x00041a5b) aid_touch_tab_arrow_right

0x9648,	// (0x0004035e) title_pane_g3_ParamLimits

0x9648,	// (0x0004035e) title_pane_g3

0xba46,	// (0x0004275c) set_value_pane_g1

0xac67,	// (0x0004197d) popup_toolbar_trans_pane_ParamLimits

0x58af,	// (0x0003c5c5) aid_size_cell_tb_trans_pane_ParamLimits

0xba87,	// (0x0004279d) bg_tb_trans_pane_ParamLimits

0x58c1,	// (0x0003c5d7) grid_tb_trans_pane_ParamLimits

0x8944,	// (0x0003f65a) cont_note_pane_ParamLimits

0x8944,	// (0x0003f65a) cont_note_pane

0xb802,	// (0x00042518) cont_snote2_single_text_pane_ParamLimits

0xb802,	// (0x00042518) cont_snote2_single_text_pane

0xb802,	// (0x00042518) cont_snote2_single_graphic_pane_ParamLimits

0xb802,	// (0x00042518) cont_snote2_single_graphic_pane

0x2cbe,	// (0x000399d4) cont_note_wait_pane_ParamLimits

0x2cbe,	// (0x000399d4) cont_note_wait_pane

0x2cbe,	// (0x000399d4) cont_note_image_pane_ParamLimits

0x2cbe,	// (0x000399d4) cont_note_image_pane

0x5969,	// (0x0003c67f) popup_note2_window_g1_ParamLimits

0x5969,	// (0x0003c67f) popup_note2_window_g1

0x599a,	// (0x0003c6b0) popup_note2_window_t1_ParamLimits

0x599a,	// (0x0003c6b0) popup_note2_window_t1

0x59df,	// (0x0003c6f5) popup_note2_window_t2_ParamLimits

0x59df,	// (0x0003c6f5) popup_note2_window_t2

0x5a24,	// (0x0003c73a) popup_note2_window_t3_ParamLimits

0x5a24,	// (0x0003c73a) popup_note2_window_t3

0x5a69,	// (0x0003c77f) popup_note2_window_t4_ParamLimits

0x5a69,	// (0x0003c77f) popup_note2_window_t4

0x89c8,	// (0x0003f6de) popup_note2_window_t5_ParamLimits

0x89c8,	// (0x0003f6de) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00046992) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00046992) popup_note2_window_t

0x5a98,	// (0x0003c7ae) popup_note2_image_window_g1_ParamLimits

0x5a98,	// (0x0003c7ae) popup_note2_image_window_g1

0x5aa4,	// (0x0003c7ba) popup_note2_image_window_g2_ParamLimits

0x5aa4,	// (0x0003c7ba) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0004699d) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0004699d) popup_note2_image_window_g

0x5ab6,	// (0x0003c7cc) popup_note2_image_window_t1_ParamLimits

0x5ab6,	// (0x0003c7cc) popup_note2_image_window_t1

0x5ace,	// (0x0003c7e4) popup_note2_image_window_t2_ParamLimits

0x5ace,	// (0x0003c7e4) popup_note2_image_window_t2

0x5ae6,	// (0x0003c7fc) popup_note2_image_window_t3_ParamLimits

0x5ae6,	// (0x0003c7fc) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x000469a2) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x000469a2) popup_note2_image_window_t

0x2ccc,	// (0x000399e2) popup_note2_wait_window_g1_ParamLimits

0x2ccc,	// (0x000399e2) popup_note2_wait_window_g1

0x5b02,	// (0x0003c818) popup_note2_wait_window_g2_ParamLimits

0x5b02,	// (0x0003c818) popup_note2_wait_window_g2

0x2ce4,	// (0x000399fa) popup_note2_wait_window_g3_ParamLimits

0x2ce4,	// (0x000399fa) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x000469a9) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x000469a9) popup_note2_wait_window_g

0x5b0e,	// (0x0003c824) popup_note2_wait_window_t1_ParamLimits

0x5b0e,	// (0x0003c824) popup_note2_wait_window_t1

0x5b2c,	// (0x0003c842) popup_note2_wait_window_t2_ParamLimits

0x5b2c,	// (0x0003c842) popup_note2_wait_window_t2

0x5b4a,	// (0x0003c860) popup_note2_wait_window_t3_ParamLimits

0x5b4a,	// (0x0003c860) popup_note2_wait_window_t3

0x5b5c,	// (0x0003c872) popup_note2_wait_window_t4_ParamLimits

0x5b5c,	// (0x0003c872) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x000469b0) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x000469b0) popup_note2_wait_window_t

0x5b6e,	// (0x0003c884) wait_bar2_pane_ParamLimits

0x5b6e,	// (0x0003c884) wait_bar2_pane

0x5b86,	// (0x0003c89c) popup_snote2_single_text_window_g1_ParamLimits

0x5b86,	// (0x0003c89c) popup_snote2_single_text_window_g1

0x5bae,	// (0x0003c8c4) popup_snote2_single_text_window_t1_ParamLimits

0x5bae,	// (0x0003c8c4) popup_snote2_single_text_window_t1

0x5bfa,	// (0x0003c910) popup_snote2_single_text_window_t2_ParamLimits

0x5bfa,	// (0x0003c910) popup_snote2_single_text_window_t2

0x5c46,	// (0x0003c95c) popup_snote2_single_text_window_t3_ParamLimits

0x5c46,	// (0x0003c95c) popup_snote2_single_text_window_t3

0x5c87,	// (0x0003c99d) popup_snote2_single_text_window_t4_ParamLimits

0x5c87,	// (0x0003c99d) popup_snote2_single_text_window_t4

0x5cbd,	// (0x0003c9d3) popup_snote2_single_text_window_t5_ParamLimits

0x5cbd,	// (0x0003c9d3) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x000469b9) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x000469b9) popup_snote2_single_text_window_t

0x5ce8,	// (0x0003c9fe) popup_snote2_single_graphic_window_g1_ParamLimits

0x5ce8,	// (0x0003c9fe) popup_snote2_single_graphic_window_g1

0x5d10,	// (0x0003ca26) popup_snote2_single_graphic_window_g2_ParamLimits

0x5d10,	// (0x0003ca26) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x000469c4) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x000469c4) popup_snote2_single_graphic_window_g

0x5d38,	// (0x0003ca4e) popup_snote2_single_graphic_window_t1_ParamLimits

0x5d38,	// (0x0003ca4e) popup_snote2_single_graphic_window_t1

0x5d84,	// (0x0003ca9a) popup_snote2_single_graphic_window_t2_ParamLimits

0x5d84,	// (0x0003ca9a) popup_snote2_single_graphic_window_t2

0x5c46,	// (0x0003c95c) popup_snote2_single_graphic_window_t3_ParamLimits

0x5c46,	// (0x0003c95c) popup_snote2_single_graphic_window_t3

0x5c87,	// (0x0003c99d) popup_snote2_single_graphic_window_t4_ParamLimits

0x5c87,	// (0x0003c99d) popup_snote2_single_graphic_window_t4

0x5cbd,	// (0x0003c9d3) popup_snote2_single_graphic_window_t5_ParamLimits

0x5cbd,	// (0x0003c9d3) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x000469c9) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x000469c9) popup_snote2_single_graphic_window_t

0x47e0,	// (0x0003b4f6) clock_nsta_pane_cp2_t1

0x47e0,	// (0x0003b4f6) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x000467dd) clock_nsta_pane_cp2_t

0xd35d,	// (0x00044073) form_field_data_wide_pane_g1_ParamLimits

0xbaa1,	// (0x000427b7) form_field_data_wide_pane_g2_ParamLimits

0xbaa1,	// (0x000427b7) form_field_data_wide_pane_g2

0xbaad,	// (0x000427c3) form_field_data_wide_pane_g3_ParamLimits

0xbaad,	// (0x000427c3) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00046397) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00046397) form_field_data_wide_pane_g

0xc8f3,	// (0x00043609) grid_touch_3_pane_ParamLimits

0xc8f3,	// (0x00043609) grid_touch_3_pane

0xce35,	// (0x00043b4b) cell_touch_3_pane_ParamLimits

0xce35,	// (0x00043b4b) cell_touch_3_pane

0x4cf6,	// (0x0003ba0c) cell_touch_3_pane_g1

0x4cf6,	// (0x0003ba0c) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00046862) cell_touch_3_pane_g

0x89fa,	// (0x0003f710) cont_query_data_pane

0x8a02,	// (0x0003f718) cont_query_data_pane_cp1

0x5e03,	// (0x0003cb19) button_value_adjust_pane_cp7

0x5e0b,	// (0x0003cb21) query_popup_pane_cp3

0xf093,	// (0x00045da9) bg_popup_sub_pane_cp22_ParamLimits

0xf0a9,	// (0x00045dbf) navi_navi_volume_pane_cp2

0xf0c4,	// (0x00045dda) popup_side_volume_key_window_g2

0xf0d3,	// (0x00045de9) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0004642d) popup_side_volume_key_window_g

0xf0f0,	// (0x00045e06) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00046434) popup_side_volume_key_window_t

0xf441,	// (0x00046157) popup_side_volume_key_window_ParamLimits

0x9b40,	// (0x00040856) list_double_graphic_pane_g4_ParamLimits

0x9b40,	// (0x00040856) list_double_graphic_pane_g4

0xb005,	// (0x00041d1b) list_single_2heading_msg_pane_ParamLimits

0xb005,	// (0x00041d1b) list_single_2heading_msg_pane

0xb09e,	// (0x00041db4) list_single_2heading_msg_pane_g1_ParamLimits

0xb09e,	// (0x00041db4) list_single_2heading_msg_pane_g1

0xb0aa,	// (0x00041dc0) list_single_2heading_msg_pane_g2_ParamLimits

0xb0aa,	// (0x00041dc0) list_single_2heading_msg_pane_g2

0xb0bd,	// (0x00041dd3) list_single_2heading_msg_pane_g3_ParamLimits

0xb0bd,	// (0x00041dd3) list_single_2heading_msg_pane_g3

0xb0c9,	// (0x00041ddf) list_single_2heading_msg_pane_g4_ParamLimits

0xb0c9,	// (0x00041ddf) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x000469d4) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x000469d4) list_single_2heading_msg_pane_g

0xb0e1,	// (0x00041df7) list_single_2heading_msg_pane_t1_ParamLimits

0xb0e1,	// (0x00041df7) list_single_2heading_msg_pane_t1

0xb109,	// (0x00041e1f) list_single_2heading_msg_pane_t2_ParamLimits

0xb109,	// (0x00041e1f) list_single_2heading_msg_pane_t2

0xb174,	// (0x00041e8a) list_single_2heading_msg_pane_t3_ParamLimits

0xb174,	// (0x00041e8a) list_single_2heading_msg_pane_t3

0xd8ef,	// (0x00044605) list_single_2heading_msg_pane_t4_ParamLimits

0xd8ef,	// (0x00044605) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x000469dd) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x000469dd) list_single_2heading_msg_pane_t

0x87bf,	// (0x0003f4d5) title_pane_g4_ParamLimits

0x87bf,	// (0x0003f4d5) title_pane_g4

0xee38,	// (0x00045b4e) title_pane_stacon_g3_ParamLimits

0xee38,	// (0x00045b4e) title_pane_stacon_g3

0x592c,	// (0x0003c642) list_single_2graphic_im_pane_g4_ParamLimits

0x592c,	// (0x0003c642) list_single_2graphic_im_pane_g4

0x3734,	// (0x0003a44a) popup_side_volume_key_window_cp

0x3f8a,	// (0x0003aca0) main_idle_act2_pane_t1

0x0791,	// (0x000374a7) toolbar_button_pane_g10

0x99c9,	// (0x000406df) popup_toolbar_window_cp1

0x47d1,	// (0x0003b4e7) clock_nsta_pane_cp_t1

0x47d1,	// (0x0003b4e7) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x000467d8) clock_nsta_pane_cp_t

0xf0a9,	// (0x00045dbf) navi_navi_volume_pane_cp2_ParamLimits

0xf0b8,	// (0x00045dce) popup_side_volume_key_window_g1_ParamLimits

0xf0c4,	// (0x00045dda) popup_side_volume_key_window_g2_ParamLimits

0xf0d3,	// (0x00045de9) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0004642d) popup_side_volume_key_window_g_ParamLimits

0x0cee,	// (0x00037a04) fep_hwr_aid_pane

0x0d97,	// (0x00037aad) bg_fep_hwr_top_pane_g4_ParamLimits

0x4d57,	// (0x0003ba6d) fep_hwr_top_pane_g1_ParamLimits

0x4d69,	// (0x0003ba7f) fep_hwr_top_pane_g2_ParamLimits

0x0db7,	// (0x00037acd) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0004682d) fep_hwr_top_pane_g_ParamLimits

0x0dcc,	// (0x00037ae2) fep_hwr_top_text_pane_ParamLimits

0x34e9,	// (0x0003a1ff) aid_touch_tab_arrow_arrow_2

0x34f2,	// (0x0003a208) aid_touch_tab_arrow_left_2

0x0d02,	// (0x00037a18) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0d39,	// (0x00037a4f) fep_hwr_prediction_pane

0x4ebf,	// (0x0003bbd5) fep_vkb_prediction_pane

0xcbf4,	// (0x0004390a) fep_vkb_side_pane_g3_ParamLimits

0xcbf4,	// (0x0004390a) fep_vkb_side_pane_g3

0x0f5b,	// (0x00037c71) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0fcc,	// (0x00037ce2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0fd9,	// (0x00037cef) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x000468dc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1203,	// (0x00037f19) fep_hwr_prediction_pane_g1

0x120d,	// (0x00037f23) fep_hwr_prediction_pane_g2

0x1215,	// (0x00037f2b) fep_hwr_prediction_pane_g3

0x121d,	// (0x00037f33) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x000469e6) fep_hwr_prediction_pane_g

0x5e32,	// (0x0003cb48) fep_vkb_prediction_pane_g1

0x5e3c,	// (0x0003cb52) fep_vkb_prediction_pane_g2

0x5e44,	// (0x0003cb5a) fep_vkb_prediction_pane_g3

0x5e4c,	// (0x0003cb62) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x000469ef) fep_vkb_prediction_pane_g

0x0ae5,	// (0x000377fb) slider_set_pane_g3

0x0af9,	// (0x0003780f) slider_set_pane_g4

0x0b11,	// (0x00037827) slider_set_pane_g5

0x0ae5,	// (0x000377fb) slider_set_pane_g6

0x0b27,	// (0x0003783d) slider_set_pane_g7

0x3bd6,	// (0x0003a8ec) slider_form_pane_g3

0x3bdf,	// (0x0003a8f5) slider_form_pane_g4

0x3be7,	// (0x0003a8fd) slider_form_pane_g5

0x3bd6,	// (0x0003a8ec) slider_form_pane_g6

0xc760,	// (0x00043476) slider_form_pane_g7

0x424d,	// (0x0003af63) slider_set_pane_vc_g3

0x4256,	// (0x0003af6c) slider_set_pane_vc_g4

0x425f,	// (0x0003af75) slider_set_pane_vc_g5

0x424d,	// (0x0003af63) slider_set_pane_vc_g6

0x4268,	// (0x0003af7e) slider_set_pane_vc_g7

0x447a,	// (0x0003b190) slider_form_pane_vc_g1

0x4483,	// (0x0003b199) slider_form_pane_vc_g2

0x448c,	// (0x0003b1a2) slider_form_pane_vc_g3

0x447a,	// (0x0003b190) slider_form_pane_vc_g4

0x4495,	// (0x0003b1ab) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x000467aa) slider_form_pane_vc_g

0xeb5b,	// (0x00045871) main_idle_act3_pane

0x5e54,	// (0x0003cb6a) ai3_links_pane

0xce7f,	// (0x00043b95) popup_ai3_data_window_ParamLimits

0xce7f,	// (0x00043b95) popup_ai3_data_window

0x87a1,	// (0x0003f4b7) grid_ai3_links_pane

0xce9d,	// (0x00043bb3) cell_ai3_links_pane_ParamLimits

0xce9d,	// (0x00043bb3) cell_ai3_links_pane

0x5e95,	// (0x0003cbab) bg_popup_sub_pane_cp11

0x5ea2,	// (0x0003cbb8) cell_ai3_links_pane_g1

0x87a1,	// (0x0003f4b7) bg_popup_sub_pane_cp12

0x5ec7,	// (0x0003cbdd) heading_ai3_data_pane

0x5ecf,	// (0x0003cbe5) list_ai3_gene_pane

0x5edb,	// (0x0003cbf1) popup_ai3_data_window_g1

0x5ee3,	// (0x0003cbf9) heading_ai3_data_pane_g1

0x5eeb,	// (0x0003cc01) heading_ai3_data_pane_t1

0x5ef9,	// (0x0003cc0f) list_double_ai3_gene_pane_ParamLimits

0x5ef9,	// (0x0003cc0f) list_double_ai3_gene_pane

0x5f06,	// (0x0003cc1c) list_single_ai3_gene_pane_ParamLimits

0x5f06,	// (0x0003cc1c) list_single_ai3_gene_pane

0x4cbb,	// (0x0003b9d1) list_highlight_pane_cp7_ParamLimits

0x4cbb,	// (0x0003b9d1) list_highlight_pane_cp7

0x5f13,	// (0x0003cc29) list_single_a13_gene_pane_t1_ParamLimits

0x5f13,	// (0x0003cc29) list_single_a13_gene_pane_t1

0x5f2a,	// (0x0003cc40) list_single_ai3_gene_pane_g1

0x5f33,	// (0x0003cc49) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x000469f8) list_single_ai3_gene_pane_g

0x5f3b,	// (0x0003cc51) list_double_ai3_gene_pane_g1_ParamLimits

0x5f3b,	// (0x0003cc51) list_double_ai3_gene_pane_g1

0x5f47,	// (0x0003cc5d) list_double_ai3_gene_pane_t1_ParamLimits

0x5f47,	// (0x0003cc5d) list_double_ai3_gene_pane_t1

0x5f63,	// (0x0003cc79) list_double_ai3_gene_pane_t2_ParamLimits

0x5f63,	// (0x0003cc79) list_double_ai3_gene_pane_t2

0x5f78,	// (0x0003cc8e) list_double_ai3_gene_pane_t3_ParamLimits

0x5f78,	// (0x0003cc8e) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x000469fd) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x000469fd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd8e5,	// (0x000445fb) aid_size_min_col_2

0xce69,	// (0x00043b7f) aid_size_min_msg_ParamLimits

0xce69,	// (0x00043b7f) aid_size_min_msg

0xcc08,	// (0x0004391e) fep_vkb_top_text_pane_g2_ParamLimits

0xcc08,	// (0x0004391e) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0004685d) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0004685d) fep_vkb_top_text_pane_g

0xeb5b,	// (0x00045871) main_hc_apps_shell_pane

0x5f95,	// (0x0003ccab) grid_hc_apps_pane_ParamLimits

0x5f95,	// (0x0003ccab) grid_hc_apps_pane

0x5fa4,	// (0x0003ccba) list_hc_apps_pane

0x5fac,	// (0x0003ccc2) scroll_pane_cp37_ParamLimits

0x5fac,	// (0x0003ccc2) scroll_pane_cp37

0xceb7,	// (0x00043bcd) cell_hc_apps_pane_ParamLimits

0xceb7,	// (0x00043bcd) cell_hc_apps_pane

0xcf81,	// (0x00043c97) cell_hc_apps_pane_g1_ParamLimits

0xcf81,	// (0x00043c97) cell_hc_apps_pane_g1

0x60a1,	// (0x0003cdb7) cell_hc_apps_pane_g2_ParamLimits

0x60a1,	// (0x0003cdb7) cell_hc_apps_pane_g2

0x60bd,	// (0x0003cdd3) cell_hc_apps_pane_g3_ParamLimits

0x60bd,	// (0x0003cdd3) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x00046a04) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x00046a04) cell_hc_apps_pane_g

0xcfae,	// (0x00043cc4) cell_hc_apps_pane_t1_ParamLimits

0xcfae,	// (0x00043cc4) cell_hc_apps_pane_t1

0x8944,	// (0x0003f65a) grid_highlight_pane_cp10_ParamLimits

0x8944,	// (0x0003f65a) grid_highlight_pane_cp10

0xcfee,	// (0x00043d04) list_single_hc_apps_pane_ParamLimits

0xcfee,	// (0x00043d04) list_single_hc_apps_pane

0xd028,	// (0x00043d3e) list_single_hc_apps_pane_g1

0xb1e2,	// (0x00041ef8) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x00046a0b) list_single_hc_apps_pane_g

0xb1fb,	// (0x00041f11) list_single_hc_apps_pane_g2_copy1

0xb217,	// (0x00041f2d) list_single_hc_apps_pane_t1

0x8803,	// (0x0003f519) bg_set_opt_pane_cp_ParamLimits

0xeceb,	// (0x00045a01) setting_slider_pane_t1_ParamLimits

0xed04,	// (0x00045a1a) setting_slider_pane_t2_ParamLimits

0xed1e,	// (0x00045a34) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004627a) setting_slider_pane_t_ParamLimits

0xed36,	// (0x00045a4c) slider_set_pane_ParamLimits

0x0028,	// (0x00036d3e) control_pane_g5_ParamLimits

0x0028,	// (0x00036d3e) control_pane_g5

0x3a03,	// (0x0003a719) slider_set_pane_g1_ParamLimits

0x0ad9,	// (0x000377ef) slider_set_pane_g2_ParamLimits

0x0ae5,	// (0x000377fb) slider_set_pane_g3_ParamLimits

0x0af9,	// (0x0003780f) slider_set_pane_g4_ParamLimits

0x0b11,	// (0x00037827) slider_set_pane_g5_ParamLimits

0x0ae5,	// (0x000377fb) slider_set_pane_g6_ParamLimits

0x0b27,	// (0x0003783d) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0004667b) slider_set_pane_g_ParamLimits

0x1bea,	// (0x00038900) navi_icon_text_pane_ParamLimits

0xacf8,	// (0x00041a0e) aid_fill_nsta_2_ParamLimits

0xad31,	// (0x00041a47) aid_touch_tab_arrow_left_ParamLimits

0xad45,	// (0x00041a5b) aid_touch_tab_arrow_right_ParamLimits

0xbf88,	// (0x00042c9e) clock_nsta_pane_ParamLimits

0xc477,	// (0x0004318d) navi_icon_pane_g1_ParamLimits

0xc483,	// (0x00043199) navi_text_pane_t1_ParamLimits

0xc9db,	// (0x000436f1) navi_icon_text_pane_g1_ParamLimits

0xc9e7,	// (0x000436fd) navi_icon_text_pane_t1_ParamLimits

0xd028,	// (0x00043d3e) list_single_hc_apps_pane_g1_ParamLimits

0xb1e2,	// (0x00041ef8) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x00046a0b) list_single_hc_apps_pane_g_ParamLimits

0xb1fb,	// (0x00041f11) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb217,	// (0x00041f2d) list_single_hc_apps_pane_t1_ParamLimits

0x95b2,	// (0x000402c8) popup_toolbar2_fixed_window_ParamLimits

0x95b2,	// (0x000402c8) popup_toolbar2_fixed_window

0xac5d,	// (0x00041973) popup_toolbar2_float_window

0x87a1,	// (0x0003f4b7) bg_popup_sub_pane_cp27

0x6177,	// (0x0003ce8d) grid_toolbar2_float_pane

0x87a1,	// (0x0003f4b7) bg_popup_sub_pane_cp26

0x6177,	// (0x0003ce8d) grid_toolbar2_fixed_pane

0xd041,	// (0x00043d57) cell_toolbar2_fixed_pane_ParamLimits

0xd041,	// (0x00043d57) cell_toolbar2_fixed_pane

0xd05e,	// (0x00043d74) cell_toolbar2_fixed_pane_g1

0x6198,	// (0x0003ceae) toolbar2_fixed_button_pane

0x25e6,	// (0x000392fc) toolbar2_fixed_button_pane_g1

0x25f6,	// (0x0003930c) toolbar2_fixed_button_pane_g2

0x25ee,	// (0x00039304) toolbar2_fixed_button_pane_g3

0x2606,	// (0x0003931c) toolbar2_fixed_button_pane_g4

0x25fe,	// (0x00039314) toolbar2_fixed_button_pane_g5

0x260e,	// (0x00039324) toolbar2_fixed_button_pane_g6

0x2616,	// (0x0003932c) toolbar2_fixed_button_pane_g7

0x2626,	// (0x0003933c) toolbar2_fixed_button_pane_g8

0x261e,	// (0x00039334) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0004657d) toolbar2_fixed_button_pane_g

0x61a0,	// (0x0003ceb6) cell_toolbar2_float_pane_ParamLimits

0x61a0,	// (0x0003ceb6) cell_toolbar2_float_pane

0x61b1,	// (0x0003cec7) cell_toolbar2_float_pane_g1

0x6198,	// (0x0003ceae) toolbar2_fixed_button_pane_cp

0xcaf0,	// (0x00043806) fep_vkb_accented_list_pane_ParamLimits

0xcaf0,	// (0x00043806) fep_vkb_accented_list_pane

0x0f3b,	// (0x00037c51) bg_popup_fep_shadow_pane_g9

0x1d6e,	// (0x00038a84) bg_popup_fep_shadow_pane_cp3

0xbba6,	// (0x000428bc) list_accented_list_pane

0x61ba,	// (0x0003ced0) list_single_accented_list_pane_ParamLimits

0x61ba,	// (0x0003ced0) list_single_accented_list_pane

0x1d6e,	// (0x00038a84) list_highlight_pane_cp10

0x61cb,	// (0x0003cee1) list_single_accented_list_pane_t1

0xab79,	// (0x0004188f) popup_slider_window_ParamLimits

0xab79,	// (0x0004188f) popup_slider_window

0x5e13,	// (0x0003cb29) aid_indentation_list_msg

0xd169,	// (0x00043e7f) bg_popup_window_pane_cp19

0x6305,	// (0x0003d01b) popup_slider_window_g1

0x6321,	// (0x0003d037) popup_slider_window_g2

0x633d,	// (0x0003d053) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x00046a10) popup_slider_window_g

0x6399,	// (0x0003d0af) popup_slider_window_t1

0x640d,	// (0x0003d123) small_volume_slider_vertical_pane

0x4cf6,	// (0x0003ba0c) small_volume_slider_vertical_pane_g1

0x4cf6,	// (0x0003ba0c) small_volume_slider_vertical_pane_g2

0x6429,	// (0x0003d13f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x00046a22) small_volume_slider_vertical_pane_g

0x951c,	// (0x00040232) area_side_right_pane_ParamLimits

0x951c,	// (0x00040232) area_side_right_pane

0xb245,	// (0x00041f5b) aid_size_side_button_ParamLimits

0xb245,	// (0x00041f5b) aid_size_side_button

0xb25e,	// (0x00041f74) grid_sctrl_middle_pane_ParamLimits

0xb25e,	// (0x00041f74) grid_sctrl_middle_pane

0x12bc,	// (0x00037fd2) sctrl_sk_bottom_pane

0x12cd,	// (0x00037fe3) sctrl_sk_top_pane

0x12df,	// (0x00037ff5) aid_touch_sctrl_top

0x12ec,	// (0x00038002) bg_sctrl_sk_pane_ParamLimits

0x12ec,	// (0x00038002) bg_sctrl_sk_pane

0x12fa,	// (0x00038010) sctrl_sk_top_pane_g1

0x1307,	// (0x0003801d) sctrl_sk_top_pane_t1

0x12df,	// (0x00037ff5) aid_touch_sctrl_bottom

0x12ec,	// (0x00038002) bg_sctrl_sk_pane_cp_ParamLimits

0x12ec,	// (0x00038002) bg_sctrl_sk_pane_cp

0x1322,	// (0x00038038) sctrl_sk_bottom_pane_g1

0x1307,	// (0x0003801d) sctrl_sk_bottom_pane_t1

0xb278,	// (0x00041f8e) cell_sctrl_middle_pane_ParamLimits

0xb278,	// (0x00041f8e) cell_sctrl_middle_pane

0xb28b,	// (0x00041fa1) aid_touch_sctrl_middle_ParamLimits

0xb28b,	// (0x00041fa1) aid_touch_sctrl_middle

0xb298,	// (0x00041fae) bg_sctrl_middle_pane_ParamLimits

0xb298,	// (0x00041fae) bg_sctrl_middle_pane

0x19a5,	// (0x000386bb) cell_sctrl_middle_pane_g1_ParamLimits

0x19a5,	// (0x000386bb) cell_sctrl_middle_pane_g1

0xb2a6,	// (0x00041fbc) cell_sctrl_middle_pane_g2_ParamLimits

0xb2a6,	// (0x00041fbc) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x00046a2e) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x00046a2e) cell_sctrl_middle_pane_g

0x25e6,	// (0x000392fc) bg_sctrl_middle_pane_g1

0x25ee,	// (0x00039304) bg_sctrl_middle_pane_g2

0x25f6,	// (0x0003930c) bg_sctrl_middle_pane_g3

0x25fe,	// (0x00039314) bg_sctrl_middle_pane_g4

0x2606,	// (0x0003931c) bg_sctrl_middle_pane_g5

0x260e,	// (0x00039324) bg_sctrl_middle_pane_g6

0x2616,	// (0x0003932c) bg_sctrl_middle_pane_g7

0x261e,	// (0x00039334) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x00046a33) bg_sctrl_middle_pane_g

0x2626,	// (0x0003933c) bg_sctrl_middle_pane_g8_copy1

0x25e6,	// (0x000392fc) bg_sctrl_sk_pane_g1

0x25f6,	// (0x0003930c) bg_sctrl_sk_pane_g2

0x25ee,	// (0x00039304) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0004657d) bg_sctrl_sk_pane_g

0xb9c0,	// (0x000426d6) aid_size_touch_scroll_bar

0x2606,	// (0x0003931c) bg_sctrl_sk_pane_g4

0x25fe,	// (0x00039314) bg_sctrl_sk_pane_g5

0x260e,	// (0x00039324) bg_sctrl_sk_pane_g6

0x2616,	// (0x0003932c) bg_sctrl_sk_pane_g7

0x2626,	// (0x0003933c) bg_sctrl_sk_pane_g8

0x261e,	// (0x00039334) bg_sctrl_sk_pane_g9

0x01e0,	// (0x00036ef6) popup_fep_china_hwr2_fs_candidate_window

0xa631,	// (0x00041347) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa631,	// (0x00041347) popup_fep_china_hwr2_fs_control_window

0x0f5b,	// (0x00037c71) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x00046a29) sctrl_sk_top_pane_g

0xd221,	// (0x00043f37) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd221,	// (0x00043f37) aid_fep_china_hwr2_fs_cell

0xd914,	// (0x0004462a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd914,	// (0x0004462a) bg_popup_fep_shadow_pane_cp4

0xd92b,	// (0x00044641) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd92b,	// (0x00044641) bg_popup_fep_shadow_pane_cp5

0xd93d,	// (0x00044653) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd93d,	// (0x00044653) popup_fep_china_hwr2_fs_control_bar_grid

0xd951,	// (0x00044667) popup_fep_china_hwr2_fs_control_funtion_grid

0x6488,	// (0x0003d19e) aid_fep_china_hwr2_fs_candi_cell

0x87a1,	// (0x0003f4b7) bg_popup_fep_shadow_pane_cp6

0x6492,	// (0x0003d1a8) popup_fep_china_hwr2_fs_candidate_grid

0xd959,	// (0x0004466f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd959,	// (0x0004466f) cell_fep_china_hwr2_fs_funtion_grid

0x4cf6,	// (0x0003ba0c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x64b4,	// (0x0003d1ca) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x64b4,	// (0x0003d1ca) cell_fep_china_hwr2_fs_funtion_grid_g1

0x64c2,	// (0x0003d1d8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x64c2,	// (0x0003d1d8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x00046a44) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x00046a44) cell_fep_china_hwr2_fs_funtion_grid_g

0xd971,	// (0x00044687) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd971,	// (0x00044687) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd986,	// (0x0004469c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd986,	// (0x0004469c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x00046a49) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x00046a49) cell_fep_china_hwr2_fs_funtion_grid_t

0x6509,	// (0x0003d21f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6511,	// (0x0003d227) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6519,	// (0x0003d22f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x00046a4e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6521,	// (0x0003d237) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6521,	// (0x0003d237) cell_fep_china_hwr2_fs_candidate_grid

0x6540,	// (0x0003d256) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6548,	// (0x0003d25e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4cf6,	// (0x0003ba0c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4cf6,	// (0x0003ba0c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00046862) cell_fep_china_hwr2_fs_candidate_grid_g

0x6550,	// (0x0003d266) cell_fep_china_hwr2_fs_candidate_grid_t1

0x21c2,	// (0x00038ed8) clock_nsta_pane_cp_24_ParamLimits

0x21c2,	// (0x00038ed8) clock_nsta_pane_cp_24

0x2242,	// (0x00038f58) indicator_nsta_pane_cp_24_ParamLimits

0x2242,	// (0x00038f58) indicator_nsta_pane_cp_24

0x3341,	// (0x0003a057) heading_pane_g1

0x0001,

0xf8cc,	// (0x000465e2) heading_pane_g

0x3dd1,	// (0x0003aae7) grid_sct_catagory_button_pane

0x3e03,	// (0x0003ab19) scroll_pane_cp5_ParamLimits

0x4942,	// (0x0003b658) button_value_adjust_pane_cp5_ParamLimits

0x4942,	// (0x0003b658) button_value_adjust_pane_cp5

0x4a27,	// (0x0003b73d) form2_midp_time_pane_ParamLimits

0x655e,	// (0x0003d274) cell_sct_catagory_button_pane_ParamLimits

0x655e,	// (0x0003d274) cell_sct_catagory_button_pane

0x4cbb,	// (0x0003b9d1) bg_button_pane_cp01_ParamLimits

0x4cbb,	// (0x0003b9d1) bg_button_pane_cp01

0x4cf6,	// (0x0003ba0c) cell_sct_catagory_button_pane_g1

0xabfa,	// (0x00041910) popup_tb_extension_window

0xd9a2,	// (0x000446b8) aid_size_cell_ext_ParamLimits

0xd9a2,	// (0x000446b8) aid_size_cell_ext

0xb802,	// (0x00042518) bg_tb_trans_pane_cp1_ParamLimits

0xb802,	// (0x00042518) bg_tb_trans_pane_cp1

0xd9c8,	// (0x000446de) grid_tb_ext_pane_ParamLimits

0xd9c8,	// (0x000446de) grid_tb_ext_pane

0xda08,	// (0x0004471e) cell_tb_ext_pane_ParamLimits

0xda08,	// (0x0004471e) cell_tb_ext_pane

0xda30,	// (0x00044746) cell_tb_ext_pane_g1_ParamLimits

0xda30,	// (0x00044746) cell_tb_ext_pane_g1

0x65f4,	// (0x0003d30a) cell_tb_ext_pane_t1

0x8944,	// (0x0003f65a) list_highlight_pane_cp11_ParamLimits

0x8944,	// (0x0003f65a) list_highlight_pane_cp11

0xec74,	// (0x0004598a) popup_uni_indicator_window_ParamLimits

0xec74,	// (0x0004598a) popup_uni_indicator_window

0xba87,	// (0x0004279d) bg_popup_sub_pane_cp14

0x660f,	// (0x0003d325) list_uniindi_pane

0x661b,	// (0x0003d331) uniindi_top_pane

0x8944,	// (0x0003f65a) bg_uniindi_top_pane

0x663c,	// (0x0003d352) uniindi_top_pane_g1

0x6652,	// (0x0003d368) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x00046a55) uniindi_top_pane_g

0x667c,	// (0x0003d392) uniindi_top_pane_t1

0x66a8,	// (0x0003d3be) list_single_uniindi_pane_ParamLimits

0x66a8,	// (0x0003d3be) list_single_uniindi_pane

0x4cf6,	// (0x0003ba0c) bg_uniindi_top_pane_g1

0x66ba,	// (0x0003d3d0) list_single_uniindi_pane_g1

0x66cd,	// (0x0003d3e3) list_single_uniindi_pane_t1

0xeb5b,	// (0x00045871) control_bg_pane

0x66f2,	// (0x0003d408) bg_sctrl_sk_pane_cp1

0x66fb,	// (0x0003d411) bg_sctrl_sk_pane_cp2

0x6704,	// (0x0003d41a) control_bg_pane_g1

0x670d,	// (0x0003d423) control_bg_pane_g2

0x0001,

0xfd48,	// (0x00046a5e) control_bg_pane_g

0x4763,	// (0x0003b479) cell_indicator_nsta_pane_g1_ParamLimits

0xc934,	// (0x0004364a) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x000467c6) cell_indicator_nsta_pane_g_ParamLimits

0xd6bf,	// (0x000443d5) form2_midp_time_pane_t1_ParamLimits

0x0ce0,	// (0x000379f6) main_idle_act4_pane_ParamLimits

0x0ce0,	// (0x000379f6) main_idle_act4_pane

0xabfa,	// (0x00041910) popup_tb_extension_window_ParamLimits

0xd9f0,	// (0x00044706) tb_ext_find_pane_ParamLimits

0xd9f0,	// (0x00044706) tb_ext_find_pane

0x6716,	// (0x0003d42c) ai_gene_pane_1_cp1

0x1eab,	// (0x00038bc1) ai_gene_pane_2_cp1

0x671e,	// (0x0003d434) list_single_idle_plugin_calendar_pane

0x6727,	// (0x0003d43d) list_single_idle_plugin_notification_pane

0x6730,	// (0x0003d446) list_single_idle_plugin_player_pane

0xda4d,	// (0x00044763) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4d,	// (0x00044763) list_single_idle_plugin_shortcut_pane

0xda75,	// (0x0004478b) main_idle_act4_pane_t1

0xda8d,	// (0x000447a3) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x00046a63) main_idle_act4_pane_t

0xdaa5,	// (0x000447bb) middle_sk_idle_act4_pane_ParamLimits

0xdaa5,	// (0x000447bb) middle_sk_idle_act4_pane

0xdac1,	// (0x000447d7) popup_clock_digital_analogue_window_cp2

0xdae8,	// (0x000447fe) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae8,	// (0x000447fe) shortcut_wheel_idle_act4_pane

0x4cf6,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g1

0x4cf6,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g2

0x4cf6,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g3

0x4cf6,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g4

0x4cf6,	// (0x0003ba0c) shortcut_wheel_idle_act4_pane_g5

0x67c3,	// (0x0003d4d9) shortcut_wheel_idle_act4_pane_g6

0x67cb,	// (0x0003d4e1) shortcut_wheel_idle_act4_pane_g7

0x67d3,	// (0x0003d4e9) shortcut_wheel_idle_act4_pane_g8

0x67db,	// (0x0003d4f1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x00046a68) shortcut_wheel_idle_act4_pane_g

0xd237,	// (0x00043f4d) middle_sk_idle_act4_pane_g1_ParamLimits

0xd237,	// (0x00043f4d) middle_sk_idle_act4_pane_g1

0xdb65,	// (0x0004487b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb65,	// (0x0004487b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00046a8b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00046a8b) middle_sk_idle_act4_pane_g

0xdb7d,	// (0x00044893) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb7d,	// (0x00044893) middle_sk_idle_act4_pane_t1

0xdbac,	// (0x000448c2) grid_ai_shortcut_pane_ParamLimits

0xdbac,	// (0x000448c2) grid_ai_shortcut_pane

0xdbc9,	// (0x000448df) list_highlight_pane_cp16_ParamLimits

0xdbc9,	// (0x000448df) list_highlight_pane_cp16

0xdbd6,	// (0x000448ec) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbd6,	// (0x000448ec) list_single_idle_plugin_shortcut_pane_g1

0xdbe2,	// (0x000448f8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbe2,	// (0x000448f8) list_single_idle_plugin_shortcut_pane_g2

0xdc00,	// (0x00044916) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc00,	// (0x00044916) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x00046a90) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x00046a90) list_single_idle_plugin_shortcut_pane_g

0xdc15,	// (0x0004492b) cell_ai_shortcut_pane_ParamLimits

0xdc15,	// (0x0004492b) cell_ai_shortcut_pane

0xdc2b,	// (0x00044941) cell_ai_shortcut_pane_g1_ParamLimits

0xdc2b,	// (0x00044941) cell_ai_shortcut_pane_g1

0x6716,	// (0x0003d42c) ai_gene_pane_1_cp2

0x690c,	// (0x0003d622) ai_gene_pane_2_cp2

0x6914,	// (0x0003d62a) list_highlight_pane_cp15

0x691d,	// (0x0003d633) list_single_idle_plugin_calendar_pane_g1

0x6914,	// (0x0003d62a) list_highlight_pane_cp17

0x6925,	// (0x0003d63b) list_single_idle_plugin_calendar_pane_g1_copy1

0x692d,	// (0x0003d643) list_single_idle_plugin_player_pane_g1

0x4038,	// (0x0003ad4e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x00046a97) list_single_idle_plugin_player_pane_g

0x6935,	// (0x0003d64b) list_single_idle_plugin_player_pane_t1

0x6943,	// (0x0003d659) list_single_idle_plugin_player_pane_t2

0x6951,	// (0x0003d667) list_single_idle_plugin_player_pane_t3

0x695f,	// (0x0003d675) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x00046a9c) list_single_idle_plugin_player_pane_t

0x696d,	// (0x0003d683) wait_bar_pane_cp15

0x6975,	// (0x0003d68b) grid_ai_notification_pane

0x4038,	// (0x0003ad4e) list_single_idle_plugin_notification_pane_g1

0xdc4d,	// (0x00044963) cell_ai_notification_pane_ParamLimits

0xdc4d,	// (0x00044963) cell_ai_notification_pane

0x698b,	// (0x0003d6a1) cell_ai_notification_pane_g1

0x6993,	// (0x0003d6a9) cell_ai_notification_pane_t1

0xdc5a,	// (0x00044970) tb_ext_find_button_pane

0xdc62,	// (0x00044978) tb_ext_find_pane_g1

0xdc6a,	// (0x00044980) tb_ext_find_pane_t1

0xefb9,	// (0x00045ccf) tb_ext_find_button_pane_g1

0x69bf,	// (0x0003d6d5) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x00046aa5) tb_ext_find_button_pane_g

0xda75,	// (0x0004478b) main_idle_act4_pane_t1_ParamLimits

0xda8d,	// (0x000447a3) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x00046a63) main_idle_act4_pane_t_ParamLimits

0xdac1,	// (0x000447d7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdad8,	// (0x000447ee) sat_plugin_idle_act4_pane_ParamLimits

0xdad8,	// (0x000447ee) sat_plugin_idle_act4_pane

0xdc78,	// (0x0004498e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdc78,	// (0x0004498e) sat_plugin_idle_act4_pane_t1

0xdc90,	// (0x000449a6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdc90,	// (0x000449a6) sat_plugin_idle_act4_pane_t2

0xdca8,	// (0x000449be) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdca8,	// (0x000449be) sat_plugin_idle_act4_pane_t3

0xdcc0,	// (0x000449d6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdcc0,	// (0x000449d6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x00046aaa) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x00046aaa) sat_plugin_idle_act4_pane_t

0xec20,	// (0x00045936) popup_battery_window_ParamLimits

0xec20,	// (0x00045936) popup_battery_window

0x8944,	// (0x0003f65a) bg_popup_sub_pane_cp25_ParamLimits

0x8944,	// (0x0003f65a) bg_popup_sub_pane_cp25

0x6a14,	// (0x0003d72a) popup_battery_window_g1_ParamLimits

0x6a14,	// (0x0003d72a) popup_battery_window_g1

0x6a20,	// (0x0003d736) popup_battery_window_t1_ParamLimits

0x6a20,	// (0x0003d736) popup_battery_window_t1

0x6a32,	// (0x0003d748) popup_battery_window_t2_ParamLimits

0x6a32,	// (0x0003d748) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x00046ab3) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x00046ab3) popup_battery_window_t

0xa35c,	// (0x00041072) midp_canvas_pane_ParamLimits

0xa3b7,	// (0x000410cd) midp_keypad_pane_ParamLimits

0xa3b7,	// (0x000410cd) midp_keypad_pane

0x20ba,	// (0x00038dd0) main_midp_pane_ParamLimits

0x47ef,	// (0x0003b505) signal_pane_g2_cp_ParamLimits

0xdcd8,	// (0x000449ee) aid_size_cell_midp_keypad_ParamLimits

0xdcd8,	// (0x000449ee) aid_size_cell_midp_keypad

0xdcf6,	// (0x00044a0c) midp_keyp_game_grid_pane_ParamLimits

0xdcf6,	// (0x00044a0c) midp_keyp_game_grid_pane

0xdd1d,	// (0x00044a33) midp_keyp_rocker_pane_ParamLimits

0xdd1d,	// (0x00044a33) midp_keyp_rocker_pane

0xdd5c,	// (0x00044a72) midp_keyp_sk_left_pane_ParamLimits

0xdd5c,	// (0x00044a72) midp_keyp_sk_left_pane

0xddb0,	// (0x00044ac6) midp_keyp_sk_right_pane_ParamLimits

0xddb0,	// (0x00044ac6) midp_keyp_sk_right_pane

0x87a1,	// (0x0003f4b7) bg_button_pane_cp03

0xde04,	// (0x00044b1a) midp_keyp_sk_left_pane_g1

0x87a1,	// (0x0003f4b7) bg_button_pane_cp04

0xde04,	// (0x00044b1a) midp_keyp_sk_right_pane_g1

0x4cf6,	// (0x0003ba0c) midp_keyp_rocker_pane_g1

0xde0d,	// (0x00044b23) keyp_game_cell_pane_ParamLimits

0xde0d,	// (0x00044b23) keyp_game_cell_pane

0x87a1,	// (0x0003f4b7) bg_button_pane_cp02

0xde33,	// (0x00044b49) keyp_game_cell_pane_g1

0x955e,	// (0x00040274) popup_fep_vkb2_window_ParamLimits

0x955e,	// (0x00040274) popup_fep_vkb2_window

0xb2b2,	// (0x00041fc8) aid_size_cell_vkb2_ParamLimits

0xb2b2,	// (0x00041fc8) aid_size_cell_vkb2

0xb2e8,	// (0x00041ffe) popup_fep_vkb2_window_g1_ParamLimits

0xb2e8,	// (0x00041ffe) popup_fep_vkb2_window_g1

0xb338,	// (0x0004204e) vkb2_area_bottom_pane_ParamLimits

0xb338,	// (0x0004204e) vkb2_area_bottom_pane

0xb394,	// (0x000420aa) vkb2_area_keypad_pane_ParamLimits

0xb394,	// (0x000420aa) vkb2_area_keypad_pane

0xb3e2,	// (0x000420f8) vkb2_area_top_pane_ParamLimits

0xb3e2,	// (0x000420f8) vkb2_area_top_pane

0xb468,	// (0x0004217e) vkb2_top_entry_pane_ParamLimits

0xb468,	// (0x0004217e) vkb2_top_entry_pane

0xb495,	// (0x000421ab) vkb2_top_grid_left_pane_ParamLimits

0xb495,	// (0x000421ab) vkb2_top_grid_left_pane

0xb4b5,	// (0x000421cb) vkb2_top_grid_right_pane_ParamLimits

0xb4b5,	// (0x000421cb) vkb2_top_grid_right_pane

0x159c,	// (0x000382b2) vkb2_cell_keypad_pane_ParamLimits

0x159c,	// (0x000382b2) vkb2_cell_keypad_pane

0xb4fb,	// (0x00042211) vkb2_area_bottom_grid_pane_ParamLimits

0xb4fb,	// (0x00042211) vkb2_area_bottom_grid_pane

0xb525,	// (0x0004223b) vkb2_area_bottom_pane_g1_ParamLimits

0xb525,	// (0x0004223b) vkb2_area_bottom_pane_g1

0xb54b,	// (0x00042261) vkb2_area_bottom_pane_g2_ParamLimits

0xb54b,	// (0x00042261) vkb2_area_bottom_pane_g2

0xb57c,	// (0x00042292) vkb2_area_bottom_pane_g3_ParamLimits

0xb57c,	// (0x00042292) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x00046ab8) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x00046ab8) vkb2_area_bottom_pane_g

0x1746,	// (0x0003845c) vkb2_top_cell_left_pane_ParamLimits

0x1746,	// (0x0003845c) vkb2_top_cell_left_pane

0xde3c,	// (0x00044b52) vkb2_top_entry_pane_g1_ParamLimits

0xde3c,	// (0x00044b52) vkb2_top_entry_pane_g1

0xde4a,	// (0x00044b60) vkb2_top_entry_pane_t1_ParamLimits

0xde4a,	// (0x00044b60) vkb2_top_entry_pane_t1

0x6bd5,	// (0x0003d8eb) vkb2_top_entry_pane_t2_ParamLimits

0x6bd5,	// (0x0003d8eb) vkb2_top_entry_pane_t2

0x6c07,	// (0x0003d91d) vkb2_top_entry_pane_t3_ParamLimits

0x6c07,	// (0x0003d91d) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x00046abf) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x00046abf) vkb2_top_entry_pane_t

0xb5e6,	// (0x000422fc) vkb2_top_grid_right_pane_g1_ParamLimits

0xb5e6,	// (0x000422fc) vkb2_top_grid_right_pane_g1

0x17a9,	// (0x000384bf) vkb2_top_grid_right_pane_g2_ParamLimits

0x17a9,	// (0x000384bf) vkb2_top_grid_right_pane_g2

0x17c1,	// (0x000384d7) vkb2_top_grid_right_pane_g3_ParamLimits

0x17c1,	// (0x000384d7) vkb2_top_grid_right_pane_g3

0xb5fc,	// (0x00042312) vkb2_top_grid_right_pane_g4_ParamLimits

0xb5fc,	// (0x00042312) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x00046ac6) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x00046ac6) vkb2_top_grid_right_pane_g

0x17ef,	// (0x00038505) vkb2_top_cell_left_pane_g1

0x1806,	// (0x0003851c) vkb2_cell_keypad_pane_g1_ParamLimits

0x1806,	// (0x0003851c) vkb2_cell_keypad_pane_g1

0x6c2b,	// (0x0003d941) vkb2_cell_keypad_pane_t1_ParamLimits

0x6c2b,	// (0x0003d941) vkb2_cell_keypad_pane_t1

0x1814,	// (0x0003852a) vkb2_cell_bottom_grid_pane_ParamLimits

0x1814,	// (0x0003852a) vkb2_cell_bottom_grid_pane

0x184d,	// (0x00038563) vkb2_cell_bottom_grid_pane_g1

0xdb09,	// (0x0004481f) aid_call2_pane_cp02

0xdb11,	// (0x00044827) aid_call_pane_cp02

0xdb19,	// (0x0004482f) clock_digital_number_pane_cp10

0xdb21,	// (0x00044837) clock_digital_number_pane_cp11

0xdb29,	// (0x0004483f) clock_digital_number_pane_cp12

0xdb31,	// (0x00044847) clock_digital_number_pane_cp13

0xdb39,	// (0x0004484f) clock_digital_separator_pane_cp10

0xefb9,	// (0x00045ccf) popup_clock_digital_analogue_window_cp2_g1

0xefb9,	// (0x00045ccf) popup_clock_digital_analogue_window_cp2_g2

0xdb41,	// (0x00044857) popup_clock_digital_analogue_window_cp2_g3

0xefb9,	// (0x00045ccf) popup_clock_digital_analogue_window_cp2_g4

0xdb41,	// (0x00044857) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00046a7b) popup_clock_digital_analogue_window_cp2_g

0xdb49,	// (0x0004485f) popup_clock_digital_analogue_window_cp2_t1

0xdb57,	// (0x0004486d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x00046a86) popup_clock_digital_analogue_window_cp2_t

0x4cf6,	// (0x0003ba0c) clock_digital_number_pane_cp10_g1

0x4cf6,	// (0x0003ba0c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00046862) clock_digital_number_pane_cp10_g

0x4cf6,	// (0x0003ba0c) clock_digital_separator_pane_cp10_g1

0x4cf6,	// (0x0003ba0c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00046862) clock_digital_separator_pane_cp10_g

0x665e,	// (0x0003d374) uniindi_top_pane_g3

0x666f,	// (0x0003d385) uniindi_top_pane_g4

0x1627,	// (0x0003833d) vkb2_row_keypad_pane_ParamLimits

0x1627,	// (0x0003833d) vkb2_row_keypad_pane

0x1869,	// (0x0003857f) vkb2_cell_t_keypad_pane_ParamLimits

0x1869,	// (0x0003857f) vkb2_cell_t_keypad_pane

0x1879,	// (0x0003858f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1879,	// (0x0003858f) vkb2_cell_t_keypad_pane_cp08

0x188e,	// (0x000385a4) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x188e,	// (0x000385a4) vkb2_cell_t_keypad_pane_cp09

0x18a2,	// (0x000385b8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x18a2,	// (0x000385b8) vkb2_cell_t_keypad_pane_cp01

0x18b3,	// (0x000385c9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x18b3,	// (0x000385c9) vkb2_cell_t_keypad_pane_cp02

0x18c4,	// (0x000385da) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x18c4,	// (0x000385da) vkb2_cell_t_keypad_pane_cp03

0x18d5,	// (0x000385eb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x18d5,	// (0x000385eb) vkb2_cell_t_keypad_pane_cp04

0x18e6,	// (0x000385fc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x18e6,	// (0x000385fc) vkb2_cell_t_keypad_pane_cp05

0x18f7,	// (0x0003860d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x18f7,	// (0x0003860d) vkb2_cell_t_keypad_pane_cp06

0x190a,	// (0x00038620) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x190a,	// (0x00038620) vkb2_cell_t_keypad_pane_cp07

0x191f,	// (0x00038635) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x191f,	// (0x00038635) vkb2_cell_t_keypad_pane_cp10

0x0f5b,	// (0x00037c71) vkb2_cell_t_keypad_pane_g1

0x6c42,	// (0x0003d958) vkb2_cell_t_keypad_pane_t1

0xeb5b,	// (0x00045871) popup_grid_graphic2_window

0xde83,	// (0x00044b99) aid_size_cell_graphic2_ParamLimits

0xde83,	// (0x00044b99) aid_size_cell_graphic2

0xdec1,	// (0x00044bd7) bg_popup_window_pane_cp21_ParamLimits

0xdec1,	// (0x00044bd7) bg_popup_window_pane_cp21

0xdecf,	// (0x00044be5) graphic2_pages_pane_ParamLimits

0xdecf,	// (0x00044be5) graphic2_pages_pane

0xdf27,	// (0x00044c3d) grid_graphic2_control_pane_ParamLimits

0xdf27,	// (0x00044c3d) grid_graphic2_control_pane

0xdf6f,	// (0x00044c85) grid_graphic2_pane_ParamLimits

0xdf6f,	// (0x00044c85) grid_graphic2_pane

0xdffa,	// (0x00044d10) cell_graphic2_pane

0xeb5b,	// (0x00045871) main_comp_mode_pane

0x5ecf,	// (0x0003cbe5) list_ai3_gene_pane_ParamLimits

0xd169,	// (0x00043e7f) bg_popup_window_pane_cp19_ParamLimits

0x62a3,	// (0x0003cfb9) bg_touch_area_indi_pane_ParamLimits

0x62a3,	// (0x0003cfb9) bg_touch_area_indi_pane

0x62b9,	// (0x0003cfcf) bg_touch_area_indi_pane_cp01_ParamLimits

0x62b9,	// (0x0003cfcf) bg_touch_area_indi_pane_cp01

0x62d1,	// (0x0003cfe7) bg_touch_area_indi_pane_cp02_ParamLimits

0x62d1,	// (0x0003cfe7) bg_touch_area_indi_pane_cp02

0x62eb,	// (0x0003d001) bg_touch_area_indi_pane_cp03_ParamLimits

0x62eb,	// (0x0003d001) bg_touch_area_indi_pane_cp03

0x6305,	// (0x0003d01b) popup_slider_window_g1_ParamLimits

0x6321,	// (0x0003d037) popup_slider_window_g2_ParamLimits

0x633d,	// (0x0003d053) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x00046a10) popup_slider_window_g_ParamLimits

0x6399,	// (0x0003d0af) popup_slider_window_t1_ParamLimits

0x640d,	// (0x0003d123) small_volume_slider_vertical_pane_ParamLimits

0xdffa,	// (0x00044d10) cell_graphic2_pane_ParamLimits

0xe05d,	// (0x00044d73) bg_button_pane_cp10_ParamLimits

0xe05d,	// (0x00044d73) bg_button_pane_cp10

0xe070,	// (0x00044d86) bg_button_pane_cp11_ParamLimits

0xe070,	// (0x00044d86) bg_button_pane_cp11

0xe083,	// (0x00044d99) graphic2_pages_pane_g1_ParamLimits

0xe083,	// (0x00044d99) graphic2_pages_pane_g1

0xe09e,	// (0x00044db4) graphic2_pages_pane_g2_ParamLimits

0xe09e,	// (0x00044db4) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x00046ad4) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x00046ad4) graphic2_pages_pane_g

0xe0b6,	// (0x00044dcc) graphic2_pages_pane_t1_ParamLimits

0xe0b6,	// (0x00044dcc) graphic2_pages_pane_t1

0xe0ce,	// (0x00044de4) cell_graphic2_control_pane_ParamLimits

0xe0ce,	// (0x00044de4) cell_graphic2_control_pane

0xe102,	// (0x00044e18) cell_graphic2_pane_g1_ParamLimits

0xe102,	// (0x00044e18) cell_graphic2_pane_g1

0xd245,	// (0x00043f5b) cell_graphic2_pane_g2_ParamLimits

0xd245,	// (0x00043f5b) cell_graphic2_pane_g2

0xd6d2,	// (0x000443e8) cell_graphic2_pane_g3_ParamLimits

0xd6d2,	// (0x000443e8) cell_graphic2_pane_g3

0xd252,	// (0x00043f68) cell_graphic2_pane_g4_ParamLimits

0xd252,	// (0x00043f68) cell_graphic2_pane_g4

0xe10f,	// (0x00044e25) cell_graphic2_pane_g5_ParamLimits

0xe10f,	// (0x00044e25) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x00046ad9) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x00046ad9) cell_graphic2_pane_g

0xe12f,	// (0x00044e45) cell_graphic2_pane_t1_ParamLimits

0xe12f,	// (0x00044e45) cell_graphic2_pane_t1

0x3335,	// (0x0003a04b) grid_highlight_pane_cp11_ParamLimits

0x3335,	// (0x0003a04b) grid_highlight_pane_cp11

0x8944,	// (0x0003f65a) bg_button_pane_cp05

0xe164,	// (0x00044e7a) cell_graphic2_control_pane_g1

0x4cf6,	// (0x0003ba0c) bg_touch_area_indi_pane_g1

0x6f7f,	// (0x0003dc95) aid_cmod_rocker_key_size

0x6f89,	// (0x0003dc9f) aid_cmode_itu_key_size

0x6f93,	// (0x0003dca9) main_cmode_video_pane

0x6f9d,	// (0x0003dcb3) main_comp_mode_itu_pane

0x6fa9,	// (0x0003dcbf) main_comp_mode_rocker_pane

0x6fb5,	// (0x0003dccb) cell_cmode_rocker_pane_ParamLimits

0x6fb5,	// (0x0003dccb) cell_cmode_rocker_pane

0x6fc9,	// (0x0003dcdf) cell_cmode_itu_pane_ParamLimits

0x6fc9,	// (0x0003dcdf) cell_cmode_itu_pane

0xba87,	// (0x0004279d) bg_button_pane_cp06_ParamLimits

0xba87,	// (0x0004279d) bg_button_pane_cp06

0x4f71,	// (0x0003bc87) cell_cmode_rocker_pane_g1_ParamLimits

0x4f71,	// (0x0003bc87) cell_cmode_rocker_pane_g1

0x64b4,	// (0x0003d1ca) cell_cmode_rocker_pane_g2_ParamLimits

0x64b4,	// (0x0003d1ca) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x00046ae9) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x00046ae9) cell_cmode_rocker_pane_g

0x87a1,	// (0x0003f4b7) bg_button_pane_cp07

0x6fe0,	// (0x0003dcf6) cell_cmode_itu_pane_g1

0x6fe9,	// (0x0003dcff) cell_cmode_itu_pane_t1

0x6ff7,	// (0x0003dd0d) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x00046aee) cell_cmode_itu_pane_t

0x66e2,	// (0x0003d3f8) aid_touch_ctrl_left

0x66ea,	// (0x0003d400) aid_touch_ctrl_right

0x87a1,	// (0x0003f4b7) compa_mode_pane

0xe18a,	// (0x00044ea0) aid_cmod_rocker_key_size_cp

0xe194,	// (0x00044eaa) aid_cmode_itu_key_size_cp

0x7019,	// (0x0003dd2f) compa_mode_pane_g1

0x7021,	// (0x0003dd37) compa_mode_pane_g2

0x7029,	// (0x0003dd3f) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x00046af3) compa_mode_pane_g

0xe19e,	// (0x00044eb4) main_comp_mode_itu_pane_cp

0xe1a6,	// (0x00044ebc) main_comp_mode_rocker_pane_cp

0xe1ae,	// (0x00044ec4) cell_cmode_itu_pane_cp_ParamLimits

0xe1ae,	// (0x00044ec4) cell_cmode_itu_pane_cp

0xe1c3,	// (0x00044ed9) cell_cmode_rocker_pane_cp_ParamLimits

0xe1c3,	// (0x00044ed9) cell_cmode_rocker_pane_cp

0xba87,	// (0x0004279d) bg_button_pane_cp06_cp_ParamLimits

0xba87,	// (0x0004279d) bg_button_pane_cp06_cp

0x4f71,	// (0x0003bc87) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4f71,	// (0x0003bc87) cell_cmode_rocker_pane_g1_cp

0x4cf6,	// (0x0003ba0c) cell_cmode_rocker_pane_g2_cp

0x87a1,	// (0x0003f4b7) bg_button_pane_cp07_cp

0xe1d5,	// (0x00044eeb) cell_cmode_itu_pane_g1_cp

0xe1de,	// (0x00044ef4) cell_cmode_itu_pane_t1_cp

0xe1de,	// (0x00044ef4) cell_cmode_itu_pane_t2_cp

0xc758,	// (0x0004346e) settings_code_pane_cp2

0x8803,	// (0x0003f519) bg_popup_window_pane_cp3_ParamLimits

0xb793,	// (0x000424a9) heading_pane_cp3_ParamLimits

0xb79f,	// (0x000424b5) listscroll_popup_graphic_pane_ParamLimits

0x0cee,	// (0x00037a04) fep_hwr_aid_pane_ParamLimits

0x12df,	// (0x00037ff5) aid_touch_sctrl_top_ParamLimits

0x12fa,	// (0x00038010) sctrl_sk_top_pane_g1_ParamLimits

0x0f5b,	// (0x00037c71) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x00046a29) sctrl_sk_top_pane_g_ParamLimits

0x1307,	// (0x0003801d) sctrl_sk_top_pane_t1_ParamLimits

0x12df,	// (0x00037ff5) aid_touch_sctrl_bottom_ParamLimits

0x1307,	// (0x0003801d) sctrl_sk_bottom_pane_t1_ParamLimits

0x6628,	// (0x0003d33e) aid_area_touch_clock

0xb42a,	// (0x00042140) aid_vkb2_area_top_pane_cell_ParamLimits

0xb42a,	// (0x00042140) aid_vkb2_area_top_pane_cell

0xb4d5,	// (0x000421eb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb4d5,	// (0x000421eb) aid_vkb2_area_bottom_pane_cell

0x6b8d,	// (0x0003d8a3) popup_char_count_window

0x707f,	// (0x0003dd95) popup_char_count_window_g1

0x7088,	// (0x0003dd9e) popup_char_count_window_g2

0x7091,	// (0x0003dda7) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x00046afa) popup_char_count_window_g

0x709a,	// (0x0003ddb0) popup_char_count_window_t1

0x13b8,	// (0x000380ce) popup_fep_char_preview_window_ParamLimits

0x13b8,	// (0x000380ce) popup_fep_char_preview_window

0xb44a,	// (0x00042160) vkb2_top_candi_pane_ParamLimits

0xb44a,	// (0x00042160) vkb2_top_candi_pane

0xe1ec,	// (0x00044f02) cell_vkb2_top_candi_pane_ParamLimits

0xe1ec,	// (0x00044f02) cell_vkb2_top_candi_pane

0x1934,	// (0x0003864a) bg_popup_fep_char_preview_window_ParamLimits

0x1934,	// (0x0003864a) bg_popup_fep_char_preview_window

0x1942,	// (0x00038658) popup_fep_char_preview_window_t1_ParamLimits

0x1942,	// (0x00038658) popup_fep_char_preview_window_t1

0x70f9,	// (0x0003de0f) bg_popup_fep_char_preview_window_g1

0x7101,	// (0x0003de17) bg_popup_fep_char_preview_window_g2

0x7109,	// (0x0003de1f) bg_popup_fep_char_preview_window_g3

0x7111,	// (0x0003de27) bg_popup_fep_char_preview_window_g4

0x7119,	// (0x0003de2f) bg_popup_fep_char_preview_window_g5

0x197c,	// (0x00038692) bg_popup_fep_char_preview_window_g6

0x7121,	// (0x0003de37) bg_popup_fep_char_preview_window_g7

0x7129,	// (0x0003de3f) bg_popup_fep_char_preview_window_g8

0x7131,	// (0x0003de47) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x00046b01) bg_popup_fep_char_preview_window_g

0x0f5b,	// (0x00037c71) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f5b,	// (0x00037c71) cell_vkb2_top_candi_pane_g1

0x0f69,	// (0x00037c7f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0f69,	// (0x00037c7f) cell_vkb2_top_candi_pane_g2

0x6e28,	// (0x0003db3e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6e28,	// (0x0003db3e) cell_vkb2_top_candi_pane_g3

0x1984,	// (0x0003869a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1984,	// (0x0003869a) cell_vkb2_top_candi_pane_g4

0x5470,	// (0x0003c186) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5470,	// (0x0003c186) cell_vkb2_top_candi_pane_g5

0x19a5,	// (0x000386bb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x19a5,	// (0x000386bb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x00046b14) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x00046b14) cell_vkb2_top_candi_pane_g

0x19b3,	// (0x000386c9) cell_vkb2_top_candi_pane_t1

0x0ac5,	// (0x000377db) aid_size_touch_slider_mark_ParamLimits

0x0ac5,	// (0x000377db) aid_size_touch_slider_mark

0xdf0b,	// (0x00044c21) grid_graphic2_catg_pane_ParamLimits

0xdf0b,	// (0x00044c21) grid_graphic2_catg_pane

0xdfc9,	// (0x00044cdf) popup_grid_graphic2_window_t1_ParamLimits

0xdfc9,	// (0x00044cdf) popup_grid_graphic2_window_t1

0xdfdf,	// (0x00044cf5) popup_grid_graphic2_window_t2_ParamLimits

0xdfdf,	// (0x00044cf5) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x00046acf) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x00046acf) popup_grid_graphic2_window_t

0x8944,	// (0x0003f65a) bg_button_pane_cp05_ParamLimits

0xe164,	// (0x00044e7a) cell_graphic2_control_pane_g1_ParamLimits

0xe256,	// (0x00044f6c) cell_graphic2_catg_pane_ParamLimits

0xe256,	// (0x00044f6c) cell_graphic2_catg_pane

0x87a1,	// (0x0003f4b7) bg_button_pane_cp12

0xe268,	// (0x00044f7e) cell_graphic2_catg_pane_g1

0x65f4,	// (0x0003d30a) cell_tb_ext_pane_t1_ParamLimits

0x1766,	// (0x0003847c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1766,	// (0x0003847c) vkb2_top_cell_right_narrow_pane

0x177e,	// (0x00038494) vkb2_top_cell_right_wide_pane_ParamLimits

0x177e,	// (0x00038494) vkb2_top_cell_right_wide_pane

0x0ce0,	// (0x000379f6) bg_vkb2_func_pane_ParamLimits

0x0ce0,	// (0x000379f6) bg_vkb2_func_pane

0x17ef,	// (0x00038505) vkb2_top_cell_left_pane_g1_ParamLimits

0x0ce0,	// (0x000379f6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0ce0,	// (0x000379f6) bg_vkb2_fuc_pane_cp03

0x184d,	// (0x00038563) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x25ee,	// (0x00039304) bg_vkb2_func_pane_g1

0x25f6,	// (0x0003930c) bg_vkb2_func_pane_g2

0x2606,	// (0x0003931c) bg_vkb2_func_pane_g3

0x25fe,	// (0x00039314) bg_vkb2_func_pane_g4

0x260e,	// (0x00039324) bg_vkb2_func_pane_g5

0x2616,	// (0x0003932c) bg_vkb2_func_pane_g6

0x261e,	// (0x00039334) bg_vkb2_func_pane_g7

0x2626,	// (0x0003933c) bg_vkb2_func_pane_g8

0x25e6,	// (0x000392fc) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x00046b21) bg_vkb2_func_pane_g

0x0ce0,	// (0x000379f6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0ce0,	// (0x000379f6) bg_vkb2_fuc_pane_cp01

0x17ef,	// (0x00038505) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x17ef,	// (0x00038505) vkb2_top_cell_right_wide_pane_g1

0x0ce0,	// (0x000379f6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0ce0,	// (0x000379f6) bg_vkb2_fuc_pane_cp02

0x184d,	// (0x00038563) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x184d,	// (0x00038563) vkb2_top_cell_right_narrow_pane_g1

0xd0a3,	// (0x00043db9) aid_touch_area_decrease_ParamLimits

0xd0a3,	// (0x00043db9) aid_touch_area_decrease

0xd0dd,	// (0x00043df3) aid_touch_area_increase_ParamLimits

0xd0dd,	// (0x00043df3) aid_touch_area_increase

0xd105,	// (0x00043e1b) aid_touch_area_mute_ParamLimits

0xd105,	// (0x00043e1b) aid_touch_area_mute

0xd135,	// (0x00043e4b) aid_touch_area_slider_ParamLimits

0xd135,	// (0x00043e4b) aid_touch_area_slider

0xd175,	// (0x00043e8b) popup_slider_window_g4_ParamLimits

0xd175,	// (0x00043e8b) popup_slider_window_g4

0xd19d,	// (0x00043eb3) popup_slider_window_g5_ParamLimits

0xd19d,	// (0x00043eb3) popup_slider_window_g5

0xd1d1,	// (0x00043ee7) popup_slider_window_g6_ParamLimits

0xd1d1,	// (0x00043ee7) popup_slider_window_g6

0x63c7,	// (0x0003d0dd) popup_slider_window_t2_ParamLimits

0x63c7,	// (0x0003d0dd) popup_slider_window_t2

0x0001,

0xfd07,	// (0x00046a1d) popup_slider_window_t_ParamLimits

0xfd07,	// (0x00046a1d) popup_slider_window_t

0xd1ed,	// (0x00043f03) slider_pane_ParamLimits

0xd1ed,	// (0x00043f03) slider_pane

0x7154,	// (0x0003de6a) slider_pane_g1_ParamLimits

0x7154,	// (0x0003de6a) slider_pane_g1

0x7168,	// (0x0003de7e) slider_pane_g2_ParamLimits

0x7168,	// (0x0003de7e) slider_pane_g2

0x717e,	// (0x0003de94) slider_pane_g3_ParamLimits

0x717e,	// (0x0003de94) slider_pane_g3

0x0003,

0xfe1e,	// (0x00046b34) slider_pane_g_ParamLimits

0xfe1e,	// (0x00046b34) slider_pane_g

0xac46,	// (0x0004195c) popup_tb_float_extension_window_ParamLimits

0xac46,	// (0x0004195c) popup_tb_float_extension_window

0x71aa,	// (0x0003dec0) aid_size_cell_tb_float_ext

0x87a1,	// (0x0003f4b7) bg_popup_sub_window_cp28

0x71b6,	// (0x0003decc) grid_tb_float_ext_pane

0x71c2,	// (0x0003ded8) cell_tb_float_ext_pane_ParamLimits

0x71c2,	// (0x0003ded8) cell_tb_float_ext_pane

0x71de,	// (0x0003def4) cell_tb_float_ext_pane_g1

0x71e7,	// (0x0003defd) grid_highlight_pane_cp12

0xb046,	// (0x00041d5c) cell_last_hwr_side_pane_ParamLimits

0xb046,	// (0x00041d5c) cell_last_hwr_side_pane

0x4cf6,	// (0x0003ba0c) cell_last_hwr_side_pane_g1

0x71f0,	// (0x0003df06) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x00046b3d) cell_last_hwr_side_pane_g

0xb5b1,	// (0x000422c7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb5b1,	// (0x000422c7) vkb2_area_bottom_space_btn_pane

0x0f5b,	// (0x00037c71) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6c42,	// (0x0003d958) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x19b3,	// (0x000386c9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x19d1,	// (0x000386e7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x19d1,	// (0x000386e7) vkb2_area_bottom_space_btn_pane_g1

0x1a0b,	// (0x00038721) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1a0b,	// (0x00038721) vkb2_area_bottom_space_btn_pane_g2

0x1a41,	// (0x00038757) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a41,	// (0x00038757) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x00046b42) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x00046b42) vkb2_area_bottom_space_btn_pane_g

0x0da5,	// (0x00037abb) cel_fep_hwr_func_pane_ParamLimits

0x0da5,	// (0x00037abb) cel_fep_hwr_func_pane

0xb01b,	// (0x00041d31) cell_hwr_side_button_pane_ParamLimits

0xb01b,	// (0x00041d31) cell_hwr_side_button_pane

0x6628,	// (0x0003d33e) aid_area_touch_clock_ParamLimits

0x8944,	// (0x0003f65a) bg_uniindi_top_pane_ParamLimits

0x663c,	// (0x0003d352) uniindi_top_pane_g1_ParamLimits

0x6652,	// (0x0003d368) uniindi_top_pane_g2_ParamLimits

0x665e,	// (0x0003d374) uniindi_top_pane_g3_ParamLimits

0x666f,	// (0x0003d385) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x00046a55) uniindi_top_pane_g_ParamLimits

0x667c,	// (0x0003d392) uniindi_top_pane_t1_ParamLimits

0x8944,	// (0x0003f65a) bg_vkb2_func_pane_cp01_ParamLimits

0x8944,	// (0x0003f65a) bg_vkb2_func_pane_cp01

0x71f9,	// (0x0003df0f) cel_fep_hwr_func_pane_g1_ParamLimits

0x71f9,	// (0x0003df0f) cel_fep_hwr_func_pane_g1

0x8944,	// (0x0003f65a) bg_vkb2_func_pane_cp02_ParamLimits

0x8944,	// (0x0003f65a) bg_vkb2_func_pane_cp02

0x71f9,	// (0x0003df0f) cell_hwr_side_button_pane_g1_ParamLimits

0x71f9,	// (0x0003df0f) cell_hwr_side_button_pane_g1

0x2467,	// (0x0003917d) status_pane_g4_ParamLimits

0x2467,	// (0x0003917d) status_pane_g4

0x2481,	// (0x00039197) status_pane_t1

0x4a95,	// (0x0003b7ab) form2_midp_gauge_slider_cont_pane

0x4a9d,	// (0x0003b7b3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xca36,	// (0x0004374c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xca48,	// (0x0004375e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00046815) form2_midp_gauge_slider_pane_t_ParamLimits

0x4ad3,	// (0x0003b7e9) form2_midp_slider_pane_ParamLimits

0x1378,	// (0x0003808e) aid_size_cell_func_vkb2_ParamLimits

0x1378,	// (0x0003808e) aid_size_cell_func_vkb2

0x7196,	// (0x0003deac) slider_pane_g4_ParamLimits

0x7196,	// (0x0003deac) slider_pane_g4

0xb612,	// (0x00042328) form2_midp_gauge_slider_pane_t2_cp01

0xb620,	// (0x00042336) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb620,	// (0x00042336) form2_midp_gauge_slider_pane_t3_cp01

0x1ab6,	// (0x000387cc) form2_midp_slider_pane_cp01

0x87a1,	// (0x0003f4b7) navi_smil_pane

0x7232,	// (0x0003df48) navi_smil_pane_g1

0x723a,	// (0x0003df50) navi_smil_pane_t1

0x7207,	// (0x0003df1d) form2_midp_slider_pane_g1

0x7210,	// (0x0003df26) form2_midp_slider_pane_g2

0x7218,	// (0x0003df2e) form2_midp_slider_pane_g3

0x7207,	// (0x0003df1d) form2_midp_slider_pane_g4

0xe271,	// (0x00044f87) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x00046b4b) form2_midp_slider_pane_g

0x1a7b,	// (0x00038791) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1a7b,	// (0x00038791) vkb2_area_bottom_space_btn_pane_g4

0xbfd3,	// (0x00042ce9) lc0_navi_pane_ParamLimits

0xbfd3,	// (0x00042ce9) lc0_navi_pane

0xc043,	// (0x00042d59) lc0_stat_indi_pane_ParamLimits

0xc043,	// (0x00042d59) lc0_stat_indi_pane

0xc058,	// (0x00042d6e) ls0_title_pane_ParamLimits

0xc058,	// (0x00042d6e) ls0_title_pane

0xba87,	// (0x0004279d) bg_popup_sub_pane_cp14_ParamLimits

0x660f,	// (0x0003d325) list_uniindi_pane_ParamLimits

0x661b,	// (0x0003d331) uniindi_top_pane_ParamLimits

0x66ba,	// (0x0003d3d0) list_single_uniindi_pane_g1_ParamLimits

0x66cd,	// (0x0003d3e3) list_single_uniindi_pane_t1_ParamLimits

0xb63d,	// (0x00042353) lc0_stat_clock_pane_ParamLimits

0xb63d,	// (0x00042353) lc0_stat_clock_pane

0xe27a,	// (0x00044f90) lc0_stat_indi_pane_g1_ParamLimits

0xe27a,	// (0x00044f90) lc0_stat_indi_pane_g1

0xe287,	// (0x00044f9d) lc0_stat_indi_pane_g2_ParamLimits

0xe287,	// (0x00044f9d) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x00046b56) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x00046b56) lc0_stat_indi_pane_g

0xb64a,	// (0x00042360) lc0_uni_indicator_pane_ParamLimits

0xb64a,	// (0x00042360) lc0_uni_indicator_pane

0xe294,	// (0x00044faa) ls0_title_pane_g1_ParamLimits

0xe294,	// (0x00044faa) ls0_title_pane_g1

0xe2a8,	// (0x00044fbe) ls0_title_pane_t1_ParamLimits

0xe2a8,	// (0x00044fbe) ls0_title_pane_t1

0xb657,	// (0x0004236d) lc0_uni_indicator_pane_g1_ParamLimits

0xb657,	// (0x0004236d) lc0_uni_indicator_pane_g1

0x72ac,	// (0x0003dfc2) lc0_stat_clock_pane_t1

0xeb5b,	// (0x00045871) main_ai5_pane

0x72ba,	// (0x0003dfd0) ai5_sk_pane_ParamLimits

0x72ba,	// (0x0003dfd0) ai5_sk_pane

0xe2d6,	// (0x00044fec) cell_ai5_widget_pane_ParamLimits

0xe2d6,	// (0x00044fec) cell_ai5_widget_pane

0x7863,	// (0x0003e579) aid_size_cell_widget_grid

0x7879,	// (0x0003e58f) bg_ai5_widget_pane_ParamLimits

0x7879,	// (0x0003e58f) bg_ai5_widget_pane

0x78e3,	// (0x0003e5f9) cell_ai5_widget_pane_g2

0x78f3,	// (0x0003e609) cell_ai5_widget_pane_g3

0x7912,	// (0x0003e628) cell_ai5_widget_pane_g4

0x791e,	// (0x0003e634) cell_ai5_widget_pane_g5

0xe62d,	// (0x00045343) cell_ai5_widget_pane_g6

0xe639,	// (0x0004534f) cell_ai5_widget_pane_g7

0x797e,	// (0x0003e694) cell_ai5_widget_pane_t1_ParamLimits

0x797e,	// (0x0003e694) cell_ai5_widget_pane_t1

0x799b,	// (0x0003e6b1) cell_ai5_widget_pane_t2_ParamLimits

0x799b,	// (0x0003e6b1) cell_ai5_widget_pane_t2

0x79b3,	// (0x0003e6c9) cell_ai5_widget_pane_t3_ParamLimits

0x79b3,	// (0x0003e6c9) cell_ai5_widget_pane_t3

0x79cb,	// (0x0003e6e1) cell_ai5_widget_pane_t4_ParamLimits

0x79cb,	// (0x0003e6e1) cell_ai5_widget_pane_t4

0x79e5,	// (0x0003e6fb) cell_ai5_widget_pane_t5_ParamLimits

0x79e5,	// (0x0003e6fb) cell_ai5_widget_pane_t5

0x7a04,	// (0x0003e71a) cell_ai5_widget_pane_t6_ParamLimits

0x7a04,	// (0x0003e71a) cell_ai5_widget_pane_t6

0x7a16,	// (0x0003e72c) cell_ai5_widget_pane_t7_ParamLimits

0x7a16,	// (0x0003e72c) cell_ai5_widget_pane_t7

0x7a2f,	// (0x0003e745) cell_ai5_widget_pane_t8_ParamLimits

0x7a2f,	// (0x0003e745) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x00046b70) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x00046b70) cell_ai5_widget_pane_t

0x7a7b,	// (0x0003e791) grid_ai5_widget_pane

0xba87,	// (0x0004279d) highlight_cell_ai5_widget_pane_ParamLimits

0xba87,	// (0x0004279d) highlight_cell_ai5_widget_pane

0xe645,	// (0x0004535b) ai5_sk_left_pane

0xe64f,	// (0x00045365) ai5_sk_middle_pane

0xe659,	// (0x0004536f) ai5_sk_right_pane

0x7ab1,	// (0x0003e7c7) bg_ai5_widget_pane_g1_ParamLimits

0x7ab1,	// (0x0003e7c7) bg_ai5_widget_pane_g1

0x7abd,	// (0x0003e7d3) bg_ai5_widget_pane_g2_ParamLimits

0x7abd,	// (0x0003e7d3) bg_ai5_widget_pane_g2

0x7ac9,	// (0x0003e7df) bg_ai5_widget_pane_g3_ParamLimits

0x7ac9,	// (0x0003e7df) bg_ai5_widget_pane_g3

0x7ad5,	// (0x0003e7eb) bg_ai5_widget_pane_g4_ParamLimits

0x7ad5,	// (0x0003e7eb) bg_ai5_widget_pane_g4

0x7ae1,	// (0x0003e7f7) bg_ai5_widget_pane_g5_ParamLimits

0x7ae1,	// (0x0003e7f7) bg_ai5_widget_pane_g5

0x7aed,	// (0x0003e803) bg_ai5_widget_pane_g6_ParamLimits

0x7aed,	// (0x0003e803) bg_ai5_widget_pane_g6

0x7af9,	// (0x0003e80f) bg_ai5_widget_pane_g7_ParamLimits

0x7af9,	// (0x0003e80f) bg_ai5_widget_pane_g7

0x7b05,	// (0x0003e81b) bg_ai5_widget_pane_g8_ParamLimits

0x7b05,	// (0x0003e81b) bg_ai5_widget_pane_g8

0x7b11,	// (0x0003e827) bg_ai5_widget_pane_g9_ParamLimits

0x7b11,	// (0x0003e827) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x00046b85) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x00046b85) bg_ai5_widget_pane_g

0x7b39,	// (0x0003e84f) cell_shortcut_ai5_widget_pane_ParamLimits

0x7b39,	// (0x0003e84f) cell_shortcut_ai5_widget_pane

0x883f,	// (0x0003f555) bg_cell_shortcut_ai5_widget_pane

0x7b4c,	// (0x0003e862) cell_grid_ai5_widget_pane_g1

0x7b55,	// (0x0003e86b) highlight_cell_shortcut_ai5_widget_pane

0x25ee,	// (0x00039304) ai5_sk_left_pane_g1

0x7b5d,	// (0x0003e873) ai5_sk_left_pane_g2

0x7b65,	// (0x0003e87b) ai5_sk_left_pane_g3

0x7b6d,	// (0x0003e883) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x00046b98) ai5_sk_left_pane_g

0x7b75,	// (0x0003e88b) ai5_sk_left_pane_t1

0x25f6,	// (0x0003930c) ai5_sk_right_pane_g1

0x7b83,	// (0x0003e899) ai5_sk_right_pane_g2

0x7b8b,	// (0x0003e8a1) ai5_sk_right_pane_g3

0x7b93,	// (0x0003e8a9) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x00046ba1) ai5_sk_right_pane_g

0x7b9b,	// (0x0003e8b1) ai5_sk_right_pane_t1

0x25f6,	// (0x0003930c) ai5_sk_middle_pane_g1

0x25ee,	// (0x00039304) ai5_sk_middle_pane_g2

0x260e,	// (0x00039324) ai5_sk_middle_pane_g3

0x7b8b,	// (0x0003e8a1) ai5_sk_middle_pane_g4

0x7b65,	// (0x0003e87b) ai5_sk_middle_pane_g5

0x7ba9,	// (0x0003e8bf) ai5_sk_middle_pane_g6

0xe67f,	// (0x00045395) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x00046baa) ai5_sk_middle_pane_g

0xad17,	// (0x00041a2d) aid_touch_area_size_lc0_ParamLimits

0xad17,	// (0x00041a2d) aid_touch_area_size_lc0

0x0f8a,	// (0x00037ca0) cell_hwr_candidate_pane_t1_ParamLimits

0x211e,	// (0x00038e34) aid_touch_navi_pane

0xc163,	// (0x00042e79) status_dt_navi_pane_ParamLimits

0xc163,	// (0x00042e79) status_dt_navi_pane

0xc17b,	// (0x00042e91) status_dt_sta_pane_ParamLimits

0xc17b,	// (0x00042e91) status_dt_sta_pane

0xe687,	// (0x0004539d) dt_sta_controll_pane

0xe694,	// (0x000453aa) dt_sta_indi_pane

0xe6a1,	// (0x000453b7) dt_sta_title_pane

0x8944,	// (0x0003f65a) bg_dt_sta_indi_pane_ParamLimits

0x8944,	// (0x0003f65a) bg_dt_sta_indi_pane

0xe6b3,	// (0x000453c9) dt_sta_battery_pane

0xe6bb,	// (0x000453d1) dt_sta_indi_pane_g1

0xe6c4,	// (0x000453da) dt_sta_indi_pane_g2

0xe6cd,	// (0x000453e3) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x00046bb9) dt_sta_indi_pane_g

0xe6d6,	// (0x000453ec) dt_sta_signal_pane

0xba87,	// (0x0004279d) bg_dt_sta_title_pane_ParamLimits

0xba87,	// (0x0004279d) bg_dt_sta_title_pane

0xe6df,	// (0x000453f5) dt_sta_title_pane_g1

0xe6e7,	// (0x000453fd) dt_sta_title_pane_t1_ParamLimits

0xe6e7,	// (0x000453fd) dt_sta_title_pane_t1

0x87a1,	// (0x0003f4b7) bg_dt_sta_control_pane

0xe6fc,	// (0x00045412) dt_sta_controll_pane_g1

0xe705,	// (0x0004541b) bg_dt_sta_title_pane_g1

0xe70e,	// (0x00045424) bg_dt_sta_title_pane_g2

0xe717,	// (0x0004542d) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x00046bc0) bg_dt_sta_title_pane_g

0x4cf6,	// (0x0003ba0c) bg_dt_sta_indi_pane_g1

0x7c57,	// (0x0003e96d) dt_sta_signal_pane_g1

0x7c5f,	// (0x0003e975) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x00046bc7) dt_sta_signal_pane_g

0x7c67,	// (0x0003e97d) dt_sta_battery_pane_g1

0x7c70,	// (0x0003e986) dt_sta_battery_pane_t1

0x4cf6,	// (0x0003ba0c) bg_dt_sta_control_pane_g1

0xf114,	// (0x00045e2a) fep_china_uni_eep_pane

0xf11c,	// (0x00045e32) fep_china_uni_entry_pane_ParamLimits

0xf12c,	// (0x00045e42) popup_fep_china_uni_window_g1_ParamLimits

0xf13c,	// (0x00045e52) popup_fep_china_uni_window_g2_ParamLimits

0xf13c,	// (0x00045e52) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00046439) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00046439) popup_fep_china_uni_window_g

0x7c7f,	// (0x0003e995) fep_china_uni_eep_pane_g1

0x7c87,	// (0x0003e99d) fep_china_uni_eep_pane_t1

0x7229,	// (0x0003df3f) aid_touch_area_size_smil_player

0x2276,	// (0x00038f8c) lc0_clock_pane

0x2475,	// (0x0003918b) status_pane_g5_ParamLimits

0x2475,	// (0x0003918b) status_pane_g5

0xa76c,	// (0x00041482) popup_keymap_window

0x2433,	// (0x00039149) status_icon_pane

0x78f3,	// (0x0003e609) cell_ai5_widget_pane_g3_ParamLimits

0x7912,	// (0x0003e628) cell_ai5_widget_pane_g4_ParamLimits

0x791e,	// (0x0003e634) cell_ai5_widget_pane_g5_ParamLimits

0x7942,	// (0x0003e658) cell_ai5_widget_pane_g8_ParamLimits

0x7942,	// (0x0003e658) cell_ai5_widget_pane_g8

0x7956,	// (0x0003e66c) cell_ai5_widget_pane_g9_ParamLimits

0x7956,	// (0x0003e66c) cell_ai5_widget_pane_g9

0x796a,	// (0x0003e680) cell_ai5_widget_pane_g10_ParamLimits

0x796a,	// (0x0003e680) cell_ai5_widget_pane_g10

0x7c96,	// (0x0003e9ac) status_icon_pane_g1

0x87a1,	// (0x0003f4b7) bg_popup_sub_pane_cp13

0x7c9e,	// (0x0003e9b4) popup_keymap_window_t1

0xa473,	// (0x00041189) control_pane_g6_ParamLimits

0xa473,	// (0x00041189) control_pane_g6

0xa480,	// (0x00041196) control_pane_g7_ParamLimits

0xa480,	// (0x00041196) control_pane_g7

0xa48d,	// (0x000411a3) control_pane_g8_ParamLimits

0xa48d,	// (0x000411a3) control_pane_g8

0xe687,	// (0x0004539d) dt_sta_controll_pane_ParamLimits

0xe694,	// (0x000453aa) dt_sta_indi_pane_ParamLimits

0xe6a1,	// (0x000453b7) dt_sta_title_pane_ParamLimits

0xb9c9,	// (0x000426df) aid_size_touch_scroll_bar_cale

0xec38,	// (0x0004594e) popup_discreet_window_ParamLimits

0xec38,	// (0x0004594e) popup_discreet_window

0x95a8,	// (0x000402be) popup_sk_window

0x2cbe,	// (0x000399d4) bg_popup_sub_pane_cp28_ParamLimits

0x2cbe,	// (0x000399d4) bg_popup_sub_pane_cp28

0x7cac,	// (0x0003e9c2) popup_discreet_window_g1_ParamLimits

0x7cac,	// (0x0003e9c2) popup_discreet_window_g1

0x7ccc,	// (0x0003e9e2) popup_discreet_window_t1_ParamLimits

0x7ccc,	// (0x0003e9e2) popup_discreet_window_t1

0x7cea,	// (0x0003ea00) popup_discreet_window_t2_ParamLimits

0x7cea,	// (0x0003ea00) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x00046bcc) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x00046bcc) popup_discreet_window_t

0x1aec,	// (0x00038802) popup_sk_window_g1

0x1af6,	// (0x0003880c) popup_sk_window_g2

0x0001,

0xfebd,	// (0x00046bd3) popup_sk_window_g

0x1b00,	// (0x00038816) popup_sk_window_t1

0x1b10,	// (0x00038826) popup_sk_window_t1_copy1

0x78e3,	// (0x0003e5f9) cell_ai5_widget_pane_g2_ParamLimits

0x7a41,	// (0x0003e757) cell_ai5_widget_pane_t9_ParamLimits

0x7a41,	// (0x0003e757) cell_ai5_widget_pane_t9

0x87a1,	// (0x0003f4b7) main_fep_fshwr2_pane

0xb676,	// (0x0004238c) aid_fshwr2_btn_pane

0xb685,	// (0x0004239b) aid_fshwr2_syb_pane

0xb697,	// (0x000423ad) aid_fshwr2_txt_pane

0xb6a6,	// (0x000423bc) fshwr2_func_candi_pane

0xb6b7,	// (0x000423cd) fshwr2_hwr_syb_pane

0xb6d2,	// (0x000423e8) fshwr2_icf_pane

0x87a1,	// (0x0003f4b7) fshwr2_icf_bg_pane

0xe720,	// (0x00045436) fshwr2_icf_pane_t1_ParamLimits

0xe720,	// (0x00045436) fshwr2_icf_pane_t1

0x4cf6,	// (0x0003ba0c) fshwr2_func_candi_pane_g1

0x7d53,	// (0x0003ea69) fshwr2_func_candi_row_pane_ParamLimits

0x7d53,	// (0x0003ea69) fshwr2_func_candi_row_pane

0xe738,	// (0x0004544e) cell_fshwr2_syb_pane_ParamLimits

0xe738,	// (0x0004544e) cell_fshwr2_syb_pane

0x4f71,	// (0x0003bc87) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4f71,	// (0x0003bc87) fshwr2_hwr_syb_pane_g1

0x87a1,	// (0x0003f4b7) bg_popup_call_pane_cp01

0x7d7e,	// (0x0003ea94) fshwr2_func_candi_cell_pane_ParamLimits

0x7d7e,	// (0x0003ea94) fshwr2_func_candi_cell_pane

0x7db0,	// (0x0003eac6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7db0,	// (0x0003eac6) fshwr2_func_candi_cell_bg_pane

0x7dca,	// (0x0003eae0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7dca,	// (0x0003eae0) fshwr2_func_candi_cell_pane_g1

0x7dea,	// (0x0003eb00) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7dea,	// (0x0003eb00) fshwr2_func_candi_cell_pane_t1

0x87a1,	// (0x0003f4b7) bg_button_pane_cp08

0x1d6e,	// (0x00038a84) cell_fshwr2_syb_bg_pane

0xe751,	// (0x00045467) cell_fshwr2_syb_bg_pane_g1

0xe759,	// (0x0004546f) cell_fshwr2_syb_bg_pane_t1

0xba87,	// (0x0004279d) main_tmo_pane

0xc52e,	// (0x00043244) uni_indicator_pane_g1_ParamLimits

0xc543,	// (0x00043259) uni_indicator_pane_g2_ParamLimits

0xc558,	// (0x0004326e) uni_indicator_pane_g3_ParamLimits

0xc56e,	// (0x00043284) uni_indicator_pane_g4_ParamLimits

0xc56e,	// (0x00043284) uni_indicator_pane_g4

0xc582,	// (0x00043298) uni_indicator_pane_g5_ParamLimits

0xc582,	// (0x00043298) uni_indicator_pane_g5

0xc596,	// (0x000432ac) uni_indicator_pane_g6_ParamLimits

0xc596,	// (0x000432ac) uni_indicator_pane_g6

0xf922,	// (0x00046638) uni_indicator_pane_g_ParamLimits

0xd073,	// (0x00043d89) popup_tmo_note_window_ParamLimits

0xd073,	// (0x00043d89) popup_tmo_note_window

0x135a,	// (0x00038070) fshwr2_bg_pane

0x7ddb,	// (0x0003eaf1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7ddb,	// (0x0003eaf1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x00046bd8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x00046bd8) fshwr2_func_candi_cell_pane_g

0x4cf6,	// (0x0003ba0c) bg_popup_window_pane_cp01

0x7e14,	// (0x0003eb2a) bg_popup_window_pane_g1_cp01

0x7e1d,	// (0x0003eb33) bg_popup_window_pane_cp22_ParamLimits

0x7e1d,	// (0x0003eb33) bg_popup_window_pane_cp22

0x7e2b,	// (0x0003eb41) listscroll_tmo_link_pane_ParamLimits

0x7e2b,	// (0x0003eb41) listscroll_tmo_link_pane

0x7e6b,	// (0x0003eb81) popup_tmo_note_window_g1_ParamLimits

0x7e6b,	// (0x0003eb81) popup_tmo_note_window_g1

0x7e78,	// (0x0003eb8e) tmo_note_info_pane_ParamLimits

0x7e78,	// (0x0003eb8e) tmo_note_info_pane

0xe768,	// (0x0004547e) list_tmo_note_info_pane_g1_ParamLimits

0xe768,	// (0x0004547e) list_tmo_note_info_pane_g1

0x7ea9,	// (0x0003ebbf) list_tmo_note_info_pane_g2_ParamLimits

0x7ea9,	// (0x0003ebbf) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x00046bdd) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x00046bdd) list_tmo_note_info_pane_g

0x7ec5,	// (0x0003ebdb) list_tmo_note_info_text_pane_ParamLimits

0x7ec5,	// (0x0003ebdb) list_tmo_note_info_text_pane

0x7f4a,	// (0x0003ec60) list_tmo_link_pane

0x7f57,	// (0x0003ec6d) scroll_pane_cp20

0x7f64,	// (0x0003ec7a) list_single_tmo_link_pane_ParamLimits

0x7f64,	// (0x0003ec7a) list_single_tmo_link_pane

0x7f74,	// (0x0003ec8a) list_single_tmo_link_pane_t1

0x7f82,	// (0x0003ec98) list_tmo_note_info_text_pane_t1_ParamLimits

0x7f82,	// (0x0003ec98) list_tmo_note_info_text_pane_t1

0x9f63,	// (0x00040c79) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9f63,	// (0x00040c79) aid_size_touch_scroll_bar_cp01

0x9ea5,	// (0x00040bbb) aid_size_touch_slider_marker

0x9598,	// (0x000402ae) popup_settings_window_ParamLimits

0x9598,	// (0x000402ae) popup_settings_window

0xd3e9,	// (0x000440ff) popup_candi_list_indi_window

0x211e,	// (0x00038e34) aid_touch_navi_pane_ParamLimits

0x12b3,	// (0x00037fc9) rs_clock_indi_pane

0x12bc,	// (0x00037fd2) sctrl_sk_bottom_pane_ParamLimits

0x12cd,	// (0x00037fe3) sctrl_sk_top_pane_ParamLimits

0x13d2,	// (0x000380e8) popup_fep_tooltip_window

0x7863,	// (0x0003e579) aid_size_cell_widget_grid_ParamLimits

0x78d7,	// (0x0003e5ed) cell_ai5_widget_pane_g1_ParamLimits

0x78d7,	// (0x0003e5ed) cell_ai5_widget_pane_g1

0xe62d,	// (0x00045343) cell_ai5_widget_pane_g6_ParamLimits

0xe639,	// (0x0004534f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x00046b5b) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x00046b5b) cell_ai5_widget_pane_g

0x7a65,	// (0x0003e77b) cell_ai5_widget_pane_t10_ParamLimits

0x7a65,	// (0x0003e77b) cell_ai5_widget_pane_t10

0x7a7b,	// (0x0003e791) grid_ai5_widget_pane_ParamLimits

0xe663,	// (0x00045379) cell_contacts_ai5_widget_pane_ParamLimits

0xe663,	// (0x00045379) cell_contacts_ai5_widget_pane

0x7cff,	// (0x0003ea15) popup_discreet_window_t3_ParamLimits

0x7cff,	// (0x0003ea15) popup_discreet_window_t3

0x1b80,	// (0x00038896) popup_fshwr2_char_preview_window_ParamLimits

0x1b80,	// (0x00038896) popup_fshwr2_char_preview_window

0xe77f,	// (0x00045495) tmo_note_info_pane_t1

0xe794,	// (0x000454aa) tmo_note_info_pane_t2

0xe7ad,	// (0x000454c3) tmo_note_info_pane_t3

0x7f26,	// (0x0003ec3c) tmo_note_info_pane_t4

0x7f38,	// (0x0003ec4e) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x00046be2) tmo_note_info_pane_t

0x7f4a,	// (0x0003ec60) list_tmo_link_pane_ParamLimits

0x7f57,	// (0x0003ec6d) scroll_pane_cp20_ParamLimits

0x87a1,	// (0x0003f4b7) bg_popup_fep_char_preview_window_cp01

0x7f9b,	// (0x0003ecb1) popup_fshwr2_char_preview_window_t1

0x7fa9,	// (0x0003ecbf) popup_candi_list_indi_window_g1

0x7fb2,	// (0x0003ecc8) bg_cell_contacts_ai5_widget_pane

0x7fbe,	// (0x0003ecd4) cell_contacts_ai5_widget_pane_g1

0x7fce,	// (0x0003ece4) cell_contacts_ai5_widget_pane_g2

0x7fda,	// (0x0003ecf0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x00046bed) cell_contacts_ai5_widget_pane_g

0x7fe6,	// (0x0003ecfc) cell_contacts_ai5_widget_pane_t1

0xba87,	// (0x0004279d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe827,	// (0x0004553d) settings_container_pane

0x1d6e,	// (0x00038a84) listscroll_set_pane_copy1

0x43cd,	// (0x0003b0e3) scroll_pane_cp121_copy1

0x806c,	// (0x0003ed82) set_content_pane_copy1

0xe833,	// (0x00045549) aid_height_set_list_copy1_ParamLimits

0xe833,	// (0x00045549) aid_height_set_list_copy1

0x3a51,	// (0x0003a767) aid_size_parent_copy1_ParamLimits

0x3a51,	// (0x0003a767) aid_size_parent_copy1

0xe83f,	// (0x00045555) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe83f,	// (0x00045555) button_value_adjust_pane_cp6_copy1

0x20ba,	// (0x00038dd0) list_highlight_pane_cp2_copy1_ParamLimits

0x20ba,	// (0x00038dd0) list_highlight_pane_cp2_copy1

0xe853,	// (0x00045569) list_set_pane_copy1_ParamLimits

0xe853,	// (0x00045569) list_set_pane_copy1

0xe7c2,	// (0x000454d8) main_pane_set_t1_copy1_ParamLimits

0xe7c2,	// (0x000454d8) main_pane_set_t1_copy1

0xe7fc,	// (0x00045512) main_pane_set_t2_copy1_ParamLimits

0xe7fc,	// (0x00045512) main_pane_set_t2_copy1

0xe91a,	// (0x00045630) main_pane_set_t3_copy1

0xe928,	// (0x0004563e) main_pane_set_t4_copy1

0xe81b,	// (0x00045531) set_content_pane_g1_copy1_ParamLimits

0xe81b,	// (0x00045531) set_content_pane_g1_copy1

0xe936,	// (0x0004564c) setting_code_pane_copy1

0x817f,	// (0x0003ee95) setting_slider_graphic_pane_copy1

0x817f,	// (0x0003ee95) setting_slider_pane_copy1

0x817f,	// (0x0003ee95) setting_text_pane_copy1

0x817f,	// (0x0003ee95) setting_volume_pane_copy1

0xe936,	// (0x0004564c) settings_code_pane_cp2_copy1

0xe93e,	// (0x00045654) settings_code_pane_cp_copy1_ParamLimits

0xe93e,	// (0x00045654) settings_code_pane_cp_copy1

0xe952,	// (0x00045668) volume_set_pane_copy1

0xe95e,	// (0x00045674) volume_set_pane_g10_copy1

0xe96a,	// (0x00045680) volume_set_pane_g1_copy1

0xe974,	// (0x0004568a) volume_set_pane_g2_copy1

0xe97e,	// (0x00045694) volume_set_pane_g3_copy1

0xe988,	// (0x0004569e) volume_set_pane_g4_copy1

0xe992,	// (0x000456a8) volume_set_pane_g5_copy1

0xe99c,	// (0x000456b2) volume_set_pane_g6_copy1

0xe9a6,	// (0x000456bc) volume_set_pane_g7_copy1

0xe9b0,	// (0x000456c6) volume_set_pane_g8_copy1

0xe9ba,	// (0x000456d0) volume_set_pane_g9_copy1

0x8803,	// (0x0003f519) bg_set_opt_pane_cp_copy1_ParamLimits

0x8803,	// (0x0003f519) bg_set_opt_pane_cp_copy1

0x820d,	// (0x0003ef23) setting_slider_pane_t1_copy1_ParamLimits

0x820d,	// (0x0003ef23) setting_slider_pane_t1_copy1

0xe9c4,	// (0x000456da) setting_slider_pane_t2_copy1_ParamLimits

0xe9c4,	// (0x000456da) setting_slider_pane_t2_copy1

0xe9de,	// (0x000456f4) setting_slider_pane_t3_copy1_ParamLimits

0xe9de,	// (0x000456f4) setting_slider_pane_t3_copy1

0xe9f6,	// (0x0004570c) slider_set_pane_copy1_ParamLimits

0xe9f6,	// (0x0004570c) slider_set_pane_copy1

0xbaee,	// (0x00042804) set_opt_bg_pane_g1_copy2

0xbaf6,	// (0x0004280c) set_opt_bg_pane_g2_copy2

0x8273,	// (0x0003ef89) set_opt_bg_pane_g3_copy2

0xbb06,	// (0x0004281c) set_opt_bg_pane_g4_copy2

0xbb0e,	// (0x00042824) set_opt_bg_pane_g5_copy2

0xbb16,	// (0x0004282c) set_opt_bg_pane_g6_copy2

0xea0c,	// (0x00045722) set_opt_bg_pane_g7_copy2

0x8287,	// (0x0003ef9d) set_opt_bg_pane_g8_copy2

0x8291,	// (0x0003efa7) set_opt_bg_pane_g9_copy2

0x829b,	// (0x0003efb1) aid_size_touch_slider_mark_copy1_ParamLimits

0x829b,	// (0x0003efb1) aid_size_touch_slider_mark_copy1

0x82af,	// (0x0003efc5) slider_set_pane_g1_copy1

0x82b8,	// (0x0003efce) slider_set_pane_g2_copy1

0x6de6,	// (0x0003dafc) slider_set_pane_g3_copy1_ParamLimits

0x6de6,	// (0x0003dafc) slider_set_pane_g3_copy1

0x6dfa,	// (0x0003db10) slider_set_pane_g4_copy1_ParamLimits

0x6dfa,	// (0x0003db10) slider_set_pane_g4_copy1

0x6e12,	// (0x0003db28) slider_set_pane_g5_copy1_ParamLimits

0x6e12,	// (0x0003db28) slider_set_pane_g5_copy1

0x6de6,	// (0x0003dafc) slider_set_pane_g6_copy1_ParamLimits

0x6de6,	// (0x0003dafc) slider_set_pane_g6_copy1

0xea16,	// (0x0004572c) slider_set_pane_g7_copy1_ParamLimits

0xea16,	// (0x0004572c) slider_set_pane_g7_copy1

0x87b5,	// (0x0003f4cb) bg_set_opt_pane_cp2_copy1

0x82d6,	// (0x0003efec) setting_slider_graphic_pane_g1_copy1

0xea2c,	// (0x00045742) setting_slider_graphic_pane_t1_copy1

0xea3c,	// (0x00045752) setting_slider_graphic_pane_t2_copy1

0xea4c,	// (0x00045762) slider_set_pane_cp_copy1

0x830f,	// (0x0003f025) input_focus_pane_cp1_copy1

0x8318,	// (0x0003f02e) list_set_text_pane_copy1

0x8320,	// (0x0003f036) setting_text_pane_g1_copy1

0xea54,	// (0x0004576a) set_text_pane_t1_copy1

0x830f,	// (0x0003f025) input_focus_pane_cp2_copy1

0x8320,	// (0x0003f036) setting_code_pane_g1_copy1

0xea6e,	// (0x00045784) setting_code_pane_t1_copy1

0xea7c,	// (0x00045792) list_set_graphic_pane_copy1

0x87b5,	// (0x0003f4cb) bg_set_opt_pane_cp4_copy1

0xa2a8,	// (0x00040fbe) list_set_graphic_pane_g1_copy1_ParamLimits

0xa2a8,	// (0x00040fbe) list_set_graphic_pane_g1_copy1

0xea8e,	// (0x000457a4) list_set_graphic_pane_g2_copy1

0xa2c0,	// (0x00040fd6) list_set_graphic_pane_t1_copy1_ParamLimits

0xa2c0,	// (0x00040fd6) list_set_graphic_pane_t1_copy1

0x4cf6,	// (0x0003ba0c) rs_clock_indi_pane_g1

0x8351,	// (0x0003f067) rs_clock_indi_pane_t1

0x835f,	// (0x0003f075) rs_indi_pane

0x8367,	// (0x0003f07d) rs_indi_pane_g1

0x8370,	// (0x0003f086) rs_indi_pane_g2

0x8379,	// (0x0003f08f) rs_indi_pane_g3

0x0002,

0xfede,	// (0x00046bf4) rs_indi_pane_g

0x1d6e,	// (0x00038a84) bg_popup_preview_window_pane_cp03

0x8382,	// (0x0003f098) popup_fep_tooltip_window_t1

0x598d,	// (0x0003c6a3) popup_note2_window_g2_ParamLimits

0x598d,	// (0x0003c6a3) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0004698d) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0004698d) popup_note2_window_g

0x5e95,	// (0x0003cbab) bg_popup_sub_pane_cp11_ParamLimits

0x5ea2,	// (0x0003cbb8) cell_ai3_links_pane_g1_ParamLimits

0x5eb9,	// (0x0003cbcf) cell_ai3_links_pane_t1

0xea54,	// (0x0004576a) set_text_pane_t1_copy1_ParamLimits

0xa334,	// (0x0004104a) cell_graphic_popup_pane_cp2_ParamLimits

0xa334,	// (0x0004104a) cell_graphic_popup_pane_cp2

0xea96,	// (0x000457ac) cell_graphic_popup_pane_g1_cp2

0xb7dc,	// (0x000424f2) cell_graphic_popup_pane_g2_cp2

0x8398,	// (0x0003f0ae) cell_graphic_popup_pane_g3_cp2

0x83a0,	// (0x0003f0b6) cell_graphic_popup_pane_t2_cp2

0xb7ed,	// (0x00042503) grid_highlight_pane_cp3_cp2

0xbd97,	// (0x00042aad) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xba87,	// (0x0004279d) main_tmo_pane_ParamLimits

0xd067,	// (0x00043d7d) popup_tmo_big_image_note_window

0x78c7,	// (0x0003e5dd) cell_ai5_widget_list_pane

0x78cf,	// (0x0003e5e5) cell_ai5_widget_lrg_icon_pane

0xe77f,	// (0x00045495) tmo_note_info_pane_t1_ParamLimits

0xe794,	// (0x000454aa) tmo_note_info_pane_t2_ParamLimits

0xe7ad,	// (0x000454c3) tmo_note_info_pane_t3_ParamLimits

0x7f26,	// (0x0003ec3c) tmo_note_info_pane_t4_ParamLimits

0x7f38,	// (0x0003ec4e) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x00046be2) tmo_note_info_pane_t_ParamLimits

0xe827,	// (0x0004553d) settings_container_pane_ParamLimits

0x8307,	// (0x0003f01d) indicator_popup_pane_cp5

0x8307,	// (0x0003f01d) indicator_popup_pane_cp6

0xea7c,	// (0x00045792) list_set_graphic_pane_copy1_ParamLimits

0x87a1,	// (0x0003f4b7) bg_popup_window_pane_cp23

0x83ae,	// (0x0003f0c4) popup_tmo_big_image_note_window_g1

0x83ba,	// (0x0003f0d0) popup_tmo_big_image_note_window_t1

0x83ca,	// (0x0003f0e0) popup_tmo_big_image_note_window_t2

0x83da,	// (0x0003f0f0) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00046bfb) popup_tmo_big_image_note_window_t

0x83ea,	// (0x0003f100) cell_ai5_widget_lrg_icon_pane_g1

0x83f2,	// (0x0003f108) cell_ai5_widget_lrg_icon_pane_t1

0x8400,	// (0x0003f116) cell_ai5_widget_list_row_pane_ParamLimits

0x8400,	// (0x0003f116) cell_ai5_widget_list_row_pane

0x8419,	// (0x0003f12f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8419,	// (0x0003f12f) cell_ai5_widget_list_row_pane_g1

0x8426,	// (0x0003f13c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8426,	// (0x0003f13c) cell_ai5_widget_list_row_pane_t1

0x843e,	// (0x0003f154) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x843e,	// (0x0003f154) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x00046c02) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x00046c02) cell_ai5_widget_list_row_pane_t

0xeb5b,	// (0x00045871) main_fep_vtchi_ss_pane

0x8475,	// (0x0003f18b) popup_fep_char_pre_window

0x847d,	// (0x0003f193) popup_fep_ituss_window

0x849e,	// (0x0003f1b4) popup_fep_vkbss_window

0x84bf,	// (0x0003f1d5) grid_vkbss_keypad_pane_ParamLimits

0x84bf,	// (0x0003f1d5) grid_vkbss_keypad_pane

0x84cf,	// (0x0003f1e5) ituss_keypad_pane

0x84eb,	// (0x0003f201) aid_vkbss_key_offset_ParamLimits

0x84eb,	// (0x0003f201) aid_vkbss_key_offset

0x84f7,	// (0x0003f20d) cell_vkbss_key_pane_ParamLimits

0x84f7,	// (0x0003f20d) cell_vkbss_key_pane

0x850d,	// (0x0003f223) bg_cell_vkbss_key_g1_ParamLimits

0x850d,	// (0x0003f223) bg_cell_vkbss_key_g1

0x8519,	// (0x0003f22f) cell_vkbss_key_3p_pane_ParamLimits

0x8519,	// (0x0003f22f) cell_vkbss_key_3p_pane

0x8533,	// (0x0003f249) cell_vkbss_key_g1_ParamLimits

0x8533,	// (0x0003f249) cell_vkbss_key_g1

0x854d,	// (0x0003f263) cell_vkbss_key_t1_ParamLimits

0x854d,	// (0x0003f263) cell_vkbss_key_t1

0x8578,	// (0x0003f28e) cell_ituss_key_pane_ParamLimits

0x8578,	// (0x0003f28e) cell_ituss_key_pane

0x8589,	// (0x0003f29f) bg_cell_ituss_key_g1_ParamLimits

0x8589,	// (0x0003f29f) bg_cell_ituss_key_g1

0x8595,	// (0x0003f2ab) cell_ituss_key_pane_g1_ParamLimits

0x8595,	// (0x0003f2ab) cell_ituss_key_pane_g1

0x85a9,	// (0x0003f2bf) cell_ituss_key_pane_g2_ParamLimits

0x85a9,	// (0x0003f2bf) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00046c09) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00046c09) cell_ituss_key_pane_g

0x85d4,	// (0x0003f2ea) cell_ituss_key_t1_ParamLimits

0x85d4,	// (0x0003f2ea) cell_ituss_key_t1

0x8602,	// (0x0003f318) cell_ituss_key_t2_ParamLimits

0x8602,	// (0x0003f318) cell_ituss_key_t2

0x8633,	// (0x0003f349) cell_ituss_key_t3_ParamLimits

0x8633,	// (0x0003f349) cell_ituss_key_t3

0x8664,	// (0x0003f37a) cell_ituss_key_t4_ParamLimits

0x8664,	// (0x0003f37a) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00046c0e) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00046c0e) cell_ituss_key_t

0x8695,	// (0x0003f3ab) cell_vkbss_key_3p_pane_g1

0x869d,	// (0x0003f3b3) cell_vkbss_key_3p_pane_g2

0x86a5,	// (0x0003f3bb) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00046c17) cell_vkbss_key_3p_pane_g

0x87a1,	// (0x0003f4b7) bg_popup_fep_char_preview_window_cp02

0x86ad,	// (0x0003f3c3) popup_fep_char_pre_window_t1

0xe623,	// (0x00045339) main_ai5_sk_pane

0x7fb2,	// (0x0003ecc8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7fbe,	// (0x0003ecd4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7fce,	// (0x0003ece4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7fda,	// (0x0003ecf0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x00046bed) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7fe6,	// (0x0003ecfc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xba87,	// (0x0004279d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xea9e,	// (0x000457b4) main_ai5_sk_pane_g1

0x2af6,	// (0x0003980c) popup_query_code_window_g1

0x8493,	// (0x0003f1a9) popup_fep_vkb_icf_pane

0x84a9,	// (0x0003f1bf) popup_fep_vtchi_icf_pane

0xba87,	// (0x0004279d) bg_icf_pane

0x86c5,	// (0x0003f3db) list_vkb_icf_pane

0xba87,	// (0x0004279d) bg_icf_pane_cp01

0x86d1,	// (0x0003f3e7) vtchi_icf_list_pane

0x86e2,	// (0x0003f3f8) list_vkb_icf_pane_t1_ParamLimits

0x86e2,	// (0x0003f3f8) list_vkb_icf_pane_t1

0x86f9,	// (0x0003f40f) vtchi_icf_list_pane_t1_ParamLimits

0x86f9,	// (0x0003f40f) vtchi_icf_list_pane_t1

0x847d,	// (0x0003f193) popup_fep_ituss_window_ParamLimits

0x84a9,	// (0x0003f1bf) popup_fep_vtchi_icf_pane_ParamLimits

0x84cf,	// (0x0003f1e5) ituss_keypad_pane_ParamLimits

0x84df,	// (0x0003f1f5) ituss_sks_pane

0xba87,	// (0x0004279d) bg_icf_pane_ParamLimits

0x8466,	// (0x0003f17c) icf_edit_indi_pane_ParamLimits

0x8466,	// (0x0003f17c) icf_edit_indi_pane

0x86c5,	// (0x0003f3db) list_vkb_icf_pane_ParamLimits

0xba87,	// (0x0004279d) bg_icf_pane_cp01_ParamLimits

0x8466,	// (0x0003f17c) icf_edit_indi_pane_cp01_ParamLimits

0x8466,	// (0x0003f17c) icf_edit_indi_pane_cp01

0x86d9,	// (0x0003f3ef) vtchi_query_pane

0x4f71,	// (0x0003bc87) icf_edit_indi_pane_g1_ParamLimits

0x4f71,	// (0x0003bc87) icf_edit_indi_pane_g1

0x877c,	// (0x0003f492) icf_edit_indi_pane_g2_ParamLimits

0x877c,	// (0x0003f492) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00046c2f) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00046c2f) icf_edit_indi_pane_g

0x878b,	// (0x0003f4a1) icf_edit_indi_pane_t1

0x8712,	// (0x0003f428) bg_input_focus_pane_cp042

0xb9c0,	// (0x000426d6) vtchi_button_pane

0x871b,	// (0x0003f431) vtchi_query_pane_t1

0x8729,	// (0x0003f43f) vtchi_query_pane_t2

0x8737,	// (0x0003f44d) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00046c1e) vtchi_query_pane_t

0x87a1,	// (0x0003f4b7) bg_button_pane_cp13

0x8745,	// (0x0003f45b) vtchi_button_pane_g1

0x874d,	// (0x0003f463) ituss_sks_pane_g1

0x8758,	// (0x0003f46e) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00046c25) ituss_sks_pane_g

0x8760,	// (0x0003f476) ituss_sks_pane_t1

0x876e,	// (0x0003f484) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00046c2a) ituss_sks_pane_t

0x47a0,	// (0x0003b4b6) indicator_nsta_pane_cp_g1

0x47a9,	// (0x0003b4bf) indicator_nsta_pane_cp_g2

0x47b1,	// (0x0003b4c7) indicator_nsta_pane_cp_g3

0x47b9,	// (0x0003b4cf) indicator_nsta_pane_cp_g4

0x47c1,	// (0x0003b4d7) indicator_nsta_pane_cp_g5

0x47c9,	// (0x0003b4df) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x000467cb) indicator_nsta_pane_cp_g

0xe146,	// (0x00044e5c) cell_graphic2_pane_t2_ParamLimits

0xe146,	// (0x00044e5c) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x00046ae4) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x00046ae4) cell_graphic2_pane_t

0xe17c,	// (0x00044e92) cell_graphic2_control_pane_t1

0xa1a8,	// (0x00040ebe) signal_pane_g3_ParamLimits

0xa1a8,	// (0x00040ebe) signal_pane_g3

0xa1bc,	// (0x00040ed2) signal_pane_g4_ParamLimits

0xa1bc,	// (0x00040ed2) signal_pane_g4

0x8450,	// (0x0003f166) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8450,	// (0x0003f166) cell_ai5_widget_list_row_pane_t3

0x85c2,	// (0x0003f2d8) cell_ituss_key_pane_t1_ParamLimits

0x85c2,	// (0x0003f2d8) cell_ituss_key_pane_t1

0x2773,	// (0x00039489) form_field_data_wide_pane_vc_t2_ParamLimits

0x2773,	// (0x00039489) form_field_data_wide_pane_vc_t2

0x2787,	// (0x0003949d) form_field_data_wide_pane_vc_t3_ParamLimits

0x2787,	// (0x0003949d) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x00046520) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x00046520) form_field_data_wide_pane_vc_t

0x4445,	// (0x0003b15b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4445,	// (0x0003b15b) form_field_slider_wide_pane_vc_t3

0x4521,	// (0x0003b237) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4521,	// (0x0003b237) form_field_popup_wide_pane_vc_t2

0x4538,	// (0x0003b24e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4538,	// (0x0003b24e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x000467ba) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x000467ba) form_field_popup_wide_pane_vc_t

0xb676,	// (0x0004238c) aid_fshwr2_btn_pane_ParamLimits

0xb685,	// (0x0004239b) aid_fshwr2_syb_pane_ParamLimits

0xb697,	// (0x000423ad) aid_fshwr2_txt_pane_ParamLimits

0x135a,	// (0x00038070) fshwr2_bg_pane_ParamLimits

0xb6a6,	// (0x000423bc) fshwr2_func_candi_pane_ParamLimits

0xb6b7,	// (0x000423cd) fshwr2_hwr_syb_pane_ParamLimits

0xb6d2,	// (0x000423e8) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
