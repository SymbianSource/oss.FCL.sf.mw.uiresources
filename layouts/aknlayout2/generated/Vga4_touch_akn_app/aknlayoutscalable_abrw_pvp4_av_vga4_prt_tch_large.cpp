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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005431b };

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
0x4ee6,	// (0x00059201) Screen

0x4ef2,	// (0x0005920d) application_window_ParamLimits

0x4ef2,	// (0x0005920d) application_window

0xe265,	// (0x00062580) screen_g1

0x4f4e,	// (0x00059269) area_bottom_pane_ParamLimits

0x4f4e,	// (0x00059269) area_bottom_pane

0x500e,	// (0x00059329) area_top_pane_ParamLimits

0x500e,	// (0x00059329) area_top_pane

0x50ac,	// (0x000593c7) main_pane_ParamLimits

0x50ac,	// (0x000593c7) main_pane

0xe26f,	// (0x0006258a) misc_graphics

0x8584,	// (0x0005c89f) battery_pane_ParamLimits

0x8584,	// (0x0005c89f) battery_pane

0x9262,	// (0x0005d57d) bg_status_flat_pane_g8

0x926a,	// (0x0005d585) bg_status_flat_pane_g9

0x8646,	// (0x0005c961) context_pane_ParamLimits

0x8646,	// (0x0005c961) context_pane

0x876a,	// (0x0005ca85) navi_pane_ParamLimits

0x876a,	// (0x0005ca85) navi_pane

0x87fa,	// (0x0005cb15) signal_pane_ParamLimits

0x87fa,	// (0x0005cb15) signal_pane

0x0008,

0xf87e,	// (0x00063b99) bg_status_flat_pane_g

0x8867,	// (0x0005cb82) status_pane_g1_ParamLimits

0x8867,	// (0x0005cb82) status_pane_g1

0x8873,	// (0x0005cb8e) status_pane_g2_ParamLimits

0x8873,	// (0x0005cb8e) status_pane_g2

0x887f,	// (0x0005cb9a) status_pane_g3_ParamLimits

0x887f,	// (0x0005cb9a) status_pane_g3

0x0004,

0xf7a5,	// (0x00063ac0) status_pane_g_ParamLimits

0xf7a5,	// (0x00063ac0) status_pane_g

0x88b3,	// (0x0005cbce) title_pane_ParamLimits

0x88b3,	// (0x0005cbce) title_pane

0x88f2,	// (0x0005cc0d) uni_indicator_pane_ParamLimits

0x88f2,	// (0x0005cc0d) uni_indicator_pane

0x84ae,	// (0x0005c7c9) bg_list_pane_ParamLimits

0x84ae,	// (0x0005c7c9) bg_list_pane

0x84ce,	// (0x0005c7e9) find_pane

0x84d6,	// (0x0005c7f1) listscroll_app_pane_ParamLimits

0x84d6,	// (0x0005c7f1) listscroll_app_pane

0x84e2,	// (0x0005c7fd) listscroll_form_pane

0x670a,	// (0x0005aa25) listscroll_gen_pane_ParamLimits

0x670a,	// (0x0005aa25) listscroll_gen_pane

0x671e,	// (0x0005aa39) listscroll_set_pane

0x5da4,	// (0x0005a0bf) main_idle_act_pane

0x36bb,	// (0x000579d6) main_idle_trad_pane

0x36bb,	// (0x000579d6) main_list_empty_pane

0x84d6,	// (0x0005c7f1) main_midp_pane

0x84fc,	// (0x0005c817) main_pane_g1_ParamLimits

0x84fc,	// (0x0005c817) main_pane_g1

0x6734,	// (0x0005aa4f) popup_ai_message_window_ParamLimits

0x6734,	// (0x0005aa4f) popup_ai_message_window

0x67e8,	// (0x0005ab03) popup_fep_china_uni_window_ParamLimits

0x67e8,	// (0x0005ab03) popup_fep_china_uni_window

0x6848,	// (0x0005ab63) popup_fep_japan_candidate_window_ParamLimits

0x6848,	// (0x0005ab63) popup_fep_japan_candidate_window

0x6872,	// (0x0005ab8d) popup_fep_japan_predictive_window_ParamLimits

0x6872,	// (0x0005ab8d) popup_fep_japan_predictive_window

0x68a8,	// (0x0005abc3) popup_find_window

0x68b5,	// (0x0005abd0) popup_grid_graphic_window_ParamLimits

0x68b5,	// (0x0005abd0) popup_grid_graphic_window

0x68e3,	// (0x0005abfe) popup_large_graphic_colour_window

0x6909,	// (0x0005ac24) popup_menu_window_ParamLimits

0x6909,	// (0x0005ac24) popup_menu_window

0x6ad3,	// (0x0005adee) popup_note_image_window

0x6abd,	// (0x0005add8) popup_note_wait_window_ParamLimits

0x6abd,	// (0x0005add8) popup_note_wait_window

0x6abd,	// (0x0005add8) popup_note_window_ParamLimits

0x6abd,	// (0x0005add8) popup_note_window

0x6b39,	// (0x0005ae54) popup_query_code_window_ParamLimits

0x6b39,	// (0x0005ae54) popup_query_code_window

0x6b4f,	// (0x0005ae6a) popup_query_data_code_window_ParamLimits

0x6b4f,	// (0x0005ae6a) popup_query_data_code_window

0x6b72,	// (0x0005ae8d) popup_query_data_window_ParamLimits

0x6b72,	// (0x0005ae8d) popup_query_data_window

0x6b94,	// (0x0005aeaf) popup_query_sat_info_window_ParamLimits

0x6b94,	// (0x0005aeaf) popup_query_sat_info_window

0x6bd3,	// (0x0005aeee) popup_snote_single_graphic_window_ParamLimits

0x6bd3,	// (0x0005aeee) popup_snote_single_graphic_window

0x6bd3,	// (0x0005aeee) popup_snote_single_text_window_ParamLimits

0x6bd3,	// (0x0005aeee) popup_snote_single_text_window

0x6bea,	// (0x0005af05) popup_sub_window_general

0x6d30,	// (0x0005b04b) popup_window_general_ParamLimits

0x6d30,	// (0x0005b04b) popup_window_general

0x850a,	// (0x0005c825) power_save_pane

0x6594,	// (0x0005a8af) control_pane_g1_ParamLimits

0x6594,	// (0x0005a8af) control_pane_g1

0x65bd,	// (0x0005a8d8) control_pane_g2_ParamLimits

0x65bd,	// (0x0005a8d8) control_pane_g2

0x8471,	// (0x0005c78c) control_pane_g3_ParamLimits

0x8471,	// (0x0005c78c) control_pane_g3

0x0007,

0xf78d,	// (0x00063aa8) control_pane_g_ParamLimits

0xf78d,	// (0x00063aa8) control_pane_g

0x6609,	// (0x0005a924) control_pane_t1_ParamLimits

0x6609,	// (0x0005a924) control_pane_t1

0x6663,	// (0x0005a97e) control_pane_t2_ParamLimits

0x6663,	// (0x0005a97e) control_pane_t2

0x0002,

0xf79e,	// (0x00063ab9) control_pane_t_ParamLimits

0xf79e,	// (0x00063ab9) control_pane_t

0x6584,	// (0x0005a89f) navi_navi_volume_pane_cp1

0x658c,	// (0x0005a8a7) status_small_icon_pane

0x37dc,	// (0x00057af7) status_small_pane_g1_ParamLimits

0x37dc,	// (0x00057af7) status_small_pane_g1

0x83da,	// (0x0005c6f5) status_small_pane_g2_ParamLimits

0x83da,	// (0x0005c6f5) status_small_pane_g2

0x83e6,	// (0x0005c701) status_small_pane_g3_ParamLimits

0x83e6,	// (0x0005c701) status_small_pane_g3

0x83f2,	// (0x0005c70d) status_small_pane_g4_ParamLimits

0x83f2,	// (0x0005c70d) status_small_pane_g4

0x83fe,	// (0x0005c719) status_small_pane_g5_ParamLimits

0x83fe,	// (0x0005c719) status_small_pane_g5

0x840c,	// (0x0005c727) status_small_pane_g6_ParamLimits

0x840c,	// (0x0005c727) status_small_pane_g6

0x0007,

0xf77c,	// (0x00063a97) status_small_pane_g_ParamLimits

0xf77c,	// (0x00063a97) status_small_pane_g

0x843b,	// (0x0005c756) status_small_pane_t1

0x845d,	// (0x0005c778) status_small_wait_pane_ParamLimits

0x845d,	// (0x0005c778) status_small_wait_pane

0x6130,	// (0x0005a44b) aid_levels_signal_ParamLimits

0x6130,	// (0x0005a44b) aid_levels_signal

0x613f,	// (0x0005a45a) signal_pane_g1_ParamLimits

0x613f,	// (0x0005a45a) signal_pane_g1

0x6154,	// (0x0005a46f) signal_pane_g2_ParamLimits

0x6154,	// (0x0005a46f) signal_pane_g2

0x0003,

0xf70d,	// (0x00063a28) signal_pane_g_ParamLimits

0xf70d,	// (0x00063a28) signal_pane_g

0x1216,	// (0x00055531) context_pane_g1

0x530b,	// (0x00059626) title_pane_g1

0x533d,	// (0x00059658) title_pane_t1

0xe285,	// (0x000625a0) title_pane_t2

0xe2ab,	// (0x000625c6) title_pane_t3

0x0002,

0xf557,	// (0x00063872) title_pane_t

0x890a,	// (0x0005cc25) aid_levels_battery_ParamLimits

0x890a,	// (0x0005cc25) aid_levels_battery

0x891b,	// (0x0005cc36) battery_pane_g1_ParamLimits

0x891b,	// (0x0005cc36) battery_pane_g1

0x8931,	// (0x0005cc4c) battery_pane_g2_ParamLimits

0x8931,	// (0x0005cc4c) battery_pane_g2

0x0001,

0xf7b0,	// (0x00063acb) battery_pane_g_ParamLimits

0xf7b0,	// (0x00063acb) battery_pane_g

0x9bac,	// (0x0005dec7) uni_indicator_pane_g1

0x9bbf,	// (0x0005deda) uni_indicator_pane_g2

0x9bd1,	// (0x0005deec) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00063c41) uni_indicator_pane_g

0x3541,	// (0x0005785c) navi_icon_pane_ParamLimits

0x3541,	// (0x0005785c) navi_icon_pane

0x3488,	// (0x000577a3) navi_midp_pane

0x355d,	// (0x00057878) navi_navi_pane

0x3567,	// (0x00057882) navi_text_pane_ParamLimits

0x3567,	// (0x00057882) navi_text_pane

0xe265,	// (0x00062580) status_small_wait_pane_g1

0xede5,	// (0x00063100) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00063c3c) status_small_wait_pane_g

0x98bf,	// (0x0005dbda) navi_navi_icon_text_pane

0x98c7,	// (0x0005dbe2) navi_navi_pane_g1_ParamLimits

0x98c7,	// (0x0005dbe2) navi_navi_pane_g1

0x98d9,	// (0x0005dbf4) navi_navi_pane_g2_ParamLimits

0x98d9,	// (0x0005dbf4) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00063c0a) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00063c0a) navi_navi_pane_g

0x98eb,	// (0x0005dc06) navi_navi_tabs_pane

0x98f4,	// (0x0005dc0f) navi_navi_text_pane

0x98bf,	// (0x0005dbda) navi_navi_volume_pane

0x989b,	// (0x0005dbb6) navi_text_pane_t1

0x988f,	// (0x0005dbaa) navi_icon_pane_g1

0x97e2,	// (0x0005dafd) navi_navi_text_pane_t1

0x700c,	// (0x0005b327) navi_navi_volume_pane_g1

0x7014,	// (0x0005b32f) volume_small_pane

0x9748,	// (0x0005da63) navi_navi_icon_text_pane_g1

0x9750,	// (0x0005da6b) navi_navi_icon_text_pane_t1

0x355d,	// (0x00057878) navi_tabs_2_long_pane

0x355d,	// (0x00057878) navi_tabs_2_pane

0x355d,	// (0x00057878) navi_tabs_3_long_pane

0x355d,	// (0x00057878) navi_tabs_3_pane

0x355d,	// (0x00057878) navi_tabs_4_pane

0x6fec,	// (0x0005b307) tabs_2_active_pane_ParamLimits

0x6fec,	// (0x0005b307) tabs_2_active_pane

0x6ffc,	// (0x0005b317) tabs_2_passive_pane_ParamLimits

0x6ffc,	// (0x0005b317) tabs_2_passive_pane

0x6fba,	// (0x0005b2d5) tabs_3_active_pane_ParamLimits

0x6fba,	// (0x0005b2d5) tabs_3_active_pane

0x6fca,	// (0x0005b2e5) tabs_3_passive_pane_ParamLimits

0x6fca,	// (0x0005b2e5) tabs_3_passive_pane

0x6fdb,	// (0x0005b2f6) tabs_3_passive_pane_cp_ParamLimits

0x6fdb,	// (0x0005b2f6) tabs_3_passive_pane_cp

0x6f6e,	// (0x0005b289) tabs_4_active_pane_ParamLimits

0x6f6e,	// (0x0005b289) tabs_4_active_pane

0x6f81,	// (0x0005b29c) tabs_4_passive_pane_ParamLimits

0x6f81,	// (0x0005b29c) tabs_4_passive_pane

0x6f92,	// (0x0005b2ad) tabs_4_passive_pane_cp_ParamLimits

0x6f92,	// (0x0005b2ad) tabs_4_passive_pane_cp

0x6fa3,	// (0x0005b2be) tabs_4_passive_pane_cp2_ParamLimits

0x6fa3,	// (0x0005b2be) tabs_4_passive_pane_cp2

0x6f4a,	// (0x0005b265) tabs_2_long_active_pane_ParamLimits

0x6f4a,	// (0x0005b265) tabs_2_long_active_pane

0x6f5c,	// (0x0005b277) tabs_2_long_passive_pane_ParamLimits

0x6f5c,	// (0x0005b277) tabs_2_long_passive_pane

0x6f0b,	// (0x0005b226) tabs_3_long_active_pane_ParamLimits

0x6f0b,	// (0x0005b226) tabs_3_long_active_pane

0x6f1e,	// (0x0005b239) tabs_3_long_passive_pane_ParamLimits

0x6f1e,	// (0x0005b239) tabs_3_long_passive_pane

0x6f37,	// (0x0005b252) tabs_3_long_passive_pane_cp_ParamLimits

0x6f37,	// (0x0005b252) tabs_3_long_passive_pane_cp

0x6eb1,	// (0x0005b1cc) volume_small_pane_g1

0x6eba,	// (0x0005b1d5) volume_small_pane_g2

0x6ec3,	// (0x0005b1de) volume_small_pane_g3

0x6ecc,	// (0x0005b1e7) volume_small_pane_g4

0x6ed5,	// (0x0005b1f0) volume_small_pane_g5

0x6ede,	// (0x0005b1f9) volume_small_pane_g6

0x6ee7,	// (0x0005b202) volume_small_pane_g7

0x6ef0,	// (0x0005b20b) volume_small_pane_g8

0x6ef9,	// (0x0005b214) volume_small_pane_g9

0x6f02,	// (0x0005b21d) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00063bd6) volume_small_pane_g

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp2_ParamLimits

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp2

0x53a5,	// (0x000596c0) tabs_3_active_pane_g1

0x53ad,	// (0x000596c8) tabs_3_active_pane_t1

0xe2bd,	// (0x000625d8) bg_passive_tab_pane_cp2_ParamLimits

0xe2bd,	// (0x000625d8) bg_passive_tab_pane_cp2

0x53a5,	// (0x000596c0) tabs_3_passive_pane_g1

0x53ad,	// (0x000596c8) tabs_3_passive_pane_t1

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp3_ParamLimits

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp3

0x53bf,	// (0x000596da) tabs_4_active_pane_g1

0x53c7,	// (0x000596e2) tabs_4_active_pane_t1

0xe2bd,	// (0x000625d8) bg_passive_tab_pane_cp3_ParamLimits

0xe2bd,	// (0x000625d8) bg_passive_tab_pane_cp3

0x53bf,	// (0x000596da) tabs_4_1_passive_pane_g1

0x53c7,	// (0x000596e2) tabs_4_1_passive_pane_t1

0x84d6,	// (0x0005c7f1) list_highlight_pane_cp2

0x9e1a,	// (0x0005e135) list_set_pane_ParamLimits

0x9e1a,	// (0x0005e135) list_set_pane

0x9edc,	// (0x0005e1f7) main_pane_set_t1_ParamLimits

0x9edc,	// (0x0005e1f7) main_pane_set_t1

0x9efc,	// (0x0005e217) main_pane_set_t2_ParamLimits

0x9efc,	// (0x0005e217) main_pane_set_t2

0x9f10,	// (0x0005e22b) main_pane_set_t3_ParamLimits

0x9f10,	// (0x0005e22b) main_pane_set_t3

0x9f24,	// (0x0005e23f) main_pane_set_t4_ParamLimits

0x9f24,	// (0x0005e23f) main_pane_set_t4

0x0003,

0xf98b,	// (0x00063ca6) main_pane_set_t_ParamLimits

0xf98b,	// (0x00063ca6) main_pane_set_t

0x9f38,	// (0x0005e253) setting_code_pane

0x9f42,	// (0x0005e25d) setting_slider_graphic_pane

0x9f42,	// (0x0005e25d) setting_slider_pane

0x9f42,	// (0x0005e25d) setting_text_pane

0x9f42,	// (0x0005e25d) setting_volume_pane

0x53d9,	// (0x000596f4) volume_set_pane

0xe2bd,	// (0x000625d8) bg_set_opt_pane_cp

0x53e3,	// (0x000596fe) setting_slider_pane_t1

0x53fc,	// (0x00059717) setting_slider_pane_t2

0x5416,	// (0x00059731) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00063879) setting_slider_pane_t

0x542e,	// (0x00059749) slider_set_pane

0xe26f,	// (0x0006258a) bg_set_opt_pane_cp2

0xe2cb,	// (0x000625e6) setting_slider_graphic_pane_g1

0x5444,	// (0x0005975f) setting_slider_graphic_pane_t1

0x5454,	// (0x0005976f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00063880) setting_slider_graphic_pane_t

0x5464,	// (0x0005977f) slider_set_pane_cp

0xe26f,	// (0x0006258a) input_focus_pane_cp1

0x9ddb,	// (0x0005e0f6) list_set_text_pane

0xe265,	// (0x00062580) setting_text_pane_g1

0xe26f,	// (0x0006258a) input_focus_pane_cp2

0xe265,	// (0x00062580) setting_code_pane_g1

0xe2d4,	// (0x000625ef) setting_code_pane_t1

0x323a,	// (0x00057555) set_text_pane_t1_ParamLimits

0x323a,	// (0x00057555) set_text_pane_t1

0xf17a,	// (0x00063495) set_opt_bg_pane_g1

0xf182,	// (0x0006349d) set_opt_bg_pane_g2

0x9db3,	// (0x0005e0ce) set_opt_bg_pane_g3

0xf192,	// (0x000634ad) set_opt_bg_pane_g4

0xf19a,	// (0x000634b5) set_opt_bg_pane_g5

0xf1a2,	// (0x000634bd) set_opt_bg_pane_g6

0x9dbd,	// (0x0005e0d8) set_opt_bg_pane_g7

0x9dc7,	// (0x0005e0e2) set_opt_bg_pane_g8

0x9dd1,	// (0x0005e0ec) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00063c93) set_opt_bg_pane_g

0x9da6,	// (0x0005e0c1) slider_set_pane_g1

0x70bd,	// (0x0005b3d8) slider_set_pane_g2

0x0006,

0xf969,	// (0x00063c84) slider_set_pane_g

0x701d,	// (0x0005b338) volume_set_pane_g1

0x7027,	// (0x0005b342) volume_set_pane_g2

0x7031,	// (0x0005b34c) volume_set_pane_g3

0x703b,	// (0x0005b356) volume_set_pane_g4

0x7045,	// (0x0005b360) volume_set_pane_g5

0x704f,	// (0x0005b36a) volume_set_pane_g6

0x7059,	// (0x0005b374) volume_set_pane_g7

0x7063,	// (0x0005b37e) volume_set_pane_g8

0x706d,	// (0x0005b388) volume_set_pane_g9

0x7077,	// (0x0005b392) volume_set_pane_g10

0x0009,

0xf941,	// (0x00063c5c) volume_set_pane_g

0x546c,	// (0x00059787) indicator_pane_ParamLimits

0x546c,	// (0x00059787) indicator_pane

0x5478,	// (0x00059793) main_idle_pane_g2_ParamLimits

0x5478,	// (0x00059793) main_idle_pane_g2

0x54a0,	// (0x000597bb) main_pane_idle_g1_ParamLimits

0x54a0,	// (0x000597bb) main_pane_idle_g1

0xe2e2,	// (0x000625fd) popup_clock_digital_analogue_window_ParamLimits

0xe2e2,	// (0x000625fd) popup_clock_digital_analogue_window

0x54ae,	// (0x000597c9) soft_indicator_pane_ParamLimits

0x54ae,	// (0x000597c9) soft_indicator_pane

0x54bc,	// (0x000597d7) wallpaper_pane_ParamLimits

0x54bc,	// (0x000597d7) wallpaper_pane

0xe265,	// (0x00062580) wallpaper_pane_g1

0x54c8,	// (0x000597e3) indicator_pane_g1_ParamLimits

0x54c8,	// (0x000597e3) indicator_pane_g1

0xa3e4,	// (0x0005e6ff) navi_navi_icon_text_pane_srt_g1

0xe310,	// (0x0006262b) soft_indicator_pane_t1

0xe32a,	// (0x00062645) aid_ps_area_pane

0x54d4,	// (0x000597ef) aid_ps_clock_pane

0xe33b,	// (0x00062656) aid_ps_indicator_pane

0xe347,	// (0x00062662) indicator_ps_pane_ParamLimits

0xe347,	// (0x00062662) indicator_ps_pane

0xe356,	// (0x00062671) power_save_pane_g1_ParamLimits

0xe356,	// (0x00062671) power_save_pane_g1

0xe362,	// (0x0006267d) power_save_pane_g2_ParamLimits

0xe362,	// (0x0006267d) power_save_pane_g2

0x4f02,	// (0x0005921d) aid_navinavi_width_pane

0xe32a,	// (0x00062645) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00063885) power_save_pane_g_ParamLimits

0xf56a,	// (0x00063885) power_save_pane_g

0xe370,	// (0x0006268b) power_save_pane_t1_ParamLimits

0xe370,	// (0x0006268b) power_save_pane_t1

0x54d4,	// (0x000597ef) aid_ps_clock_pane_ParamLimits

0xe33b,	// (0x00062656) aid_ps_indicator_pane_ParamLimits

0xe382,	// (0x0006269d) power_save_pane_t4_ParamLimits

0xe382,	// (0x0006269d) power_save_pane_t4

0x0001,

0xf56f,	// (0x0006388a) power_save_pane_t_ParamLimits

0xf56f,	// (0x0006388a) power_save_pane_t

0xe3ac,	// (0x000626c7) power_save_t3_ParamLimits

0xe3ac,	// (0x000626c7) power_save_t3

0xe397,	// (0x000626b2) power_save_t2_ParamLimits

0xe397,	// (0x000626b2) power_save_t2

0xebe8,	// (0x00062f03) indicator_ps_pane_g1

0x54e2,	// (0x000597fd) ai_gene_pane_ParamLimits

0x54e2,	// (0x000597fd) ai_gene_pane

0x54ee,	// (0x00059809) ai_links_pane_ParamLimits

0x54ee,	// (0x00059809) ai_links_pane

0x54fa,	// (0x00059815) indicator_pane_cp1_ParamLimits

0x54fa,	// (0x00059815) indicator_pane_cp1

0x5506,	// (0x00059821) main_pane_idle_g1_cp_ParamLimits

0x5506,	// (0x00059821) main_pane_idle_g1_cp

0xebf1,	// (0x00062f0c) popup_ai_links_title_window

0x5512,	// (0x0005982d) soft_indicator_pane_cp1_ParamLimits

0x5512,	// (0x0005982d) soft_indicator_pane_cp1

0x9b9a,	// (0x0005deb5) ai_links_pane_g1

0x9ba3,	// (0x0005debe) grid_ai_links_pane

0x9b7f,	// (0x0005de9a) ai_gene_pane_1

0x9b88,	// (0x0005dea3) ai_gene_pane_2

0x9b91,	// (0x0005deac) list_highlight_pane_cp4

0x9b5f,	// (0x0005de7a) cell_ai_link_pane_ParamLimits

0x9b5f,	// (0x0005de7a) cell_ai_link_pane

0x9b57,	// (0x0005de72) cell_ai_link_pane_g1

0xede5,	// (0x00063100) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00063c37) cell_ai_link_pane_g

0xe26f,	// (0x0006258a) grid_highlight_cp2

0xe26f,	// (0x0006258a) bg_popup_sub_pane_cp1

0xec08,	// (0x00062f23) popup_ai_links_title_window_t1

0x9aa3,	// (0x0005ddbe) ai_gene_pane_1_g1_ParamLimits

0x9aa3,	// (0x0005ddbe) ai_gene_pane_1_g1

0x9aaf,	// (0x0005ddca) ai_gene_pane_1_g2_ParamLimits

0x9aaf,	// (0x0005ddca) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00063c2d) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00063c2d) ai_gene_pane_1_g

0x9abc,	// (0x0005ddd7) ai_gene_pane_1_t1_ParamLimits

0x9abc,	// (0x0005ddd7) ai_gene_pane_1_t1

0x9af0,	// (0x0005de0b) grid_ai_soft_ind_pane

0x9a8e,	// (0x0005dda9) ai_gene_pane_2_t1_ParamLimits

0x9a8e,	// (0x0005dda9) ai_gene_pane_2_t1

0x551e,	// (0x00059839) main_pane_empty_t1_ParamLimits

0x551e,	// (0x00059839) main_pane_empty_t1

0x5536,	// (0x00059851) main_pane_empty_t2_ParamLimits

0x5536,	// (0x00059851) main_pane_empty_t2

0x554b,	// (0x00059866) main_pane_empty_t3_ParamLimits

0x554b,	// (0x00059866) main_pane_empty_t3

0x555d,	// (0x00059878) main_pane_empty_t4_ParamLimits

0x555d,	// (0x00059878) main_pane_empty_t4

0x556f,	// (0x0005988a) main_pane_empty_t5_ParamLimits

0x556f,	// (0x0005988a) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006388f) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006388f) main_pane_empty_t

0xf1cb,	// (0x000634e6) bg_popup_window_pane_ParamLimits

0xf1cb,	// (0x000634e6) bg_popup_window_pane

0x97f0,	// (0x0005db0b) find_popup_pane_cp2_ParamLimits

0x97f0,	// (0x0005db0b) find_popup_pane_cp2

0x97fc,	// (0x0005db17) heading_pane_ParamLimits

0x97fc,	// (0x0005db17) heading_pane

0xe26f,	// (0x0006258a) bg_popup_sub_pane

0x976a,	// (0x0005da85) bg_popup_window_pane_g1_ParamLimits

0x976a,	// (0x0005da85) bg_popup_window_pane_g1

0x9776,	// (0x0005da91) bg_popup_window_pane_g2_ParamLimits

0x9776,	// (0x0005da91) bg_popup_window_pane_g2

0x9782,	// (0x0005da9d) bg_popup_window_pane_g3_ParamLimits

0x9782,	// (0x0005da9d) bg_popup_window_pane_g3

0x978e,	// (0x0005daa9) bg_popup_window_pane_g4_ParamLimits

0x978e,	// (0x0005daa9) bg_popup_window_pane_g4

0x979a,	// (0x0005dab5) bg_popup_window_pane_g5_ParamLimits

0x979a,	// (0x0005dab5) bg_popup_window_pane_g5

0x97a6,	// (0x0005dac1) bg_popup_window_pane_g6_ParamLimits

0x97a6,	// (0x0005dac1) bg_popup_window_pane_g6

0x97b2,	// (0x0005dacd) bg_popup_window_pane_g7_ParamLimits

0x97b2,	// (0x0005dacd) bg_popup_window_pane_g7

0x97be,	// (0x0005dad9) bg_popup_window_pane_g8_ParamLimits

0x97be,	// (0x0005dad9) bg_popup_window_pane_g8

0x97ca,	// (0x0005dae5) bg_popup_window_pane_g9_ParamLimits

0x97ca,	// (0x0005dae5) bg_popup_window_pane_g9

0x97d6,	// (0x0005daf1) bg_popup_window_pane_g10_ParamLimits

0x97d6,	// (0x0005daf1) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00063bf5) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00063bf5) bg_popup_window_pane_g

0x96ff,	// (0x0005da1a) bg_popup_heading_pane_ParamLimits

0x96ff,	// (0x0005da1a) bg_popup_heading_pane

0x7191,	// (0x0005b4ac) tabs_4_passive_pane_cp_srt_ParamLimits

0x7191,	// (0x0005b4ac) tabs_4_passive_pane_cp_srt

0x71a3,	// (0x0005b4be) tabs_4_passive_pane_srt_ParamLimits

0x9713,	// (0x0005da2e) heading_pane_g2

0x71a3,	// (0x0005b4be) tabs_4_passive_pane_srt

0x84d6,	// (0x0005c7f1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x84d6,	// (0x0005c7f1) bg_passive_tab_pane_cp3_srt

0x971b,	// (0x0005da36) heading_pane_t1_ParamLimits

0x971b,	// (0x0005da36) heading_pane_t1

0x9732,	// (0x0005da4d) heading_pane_t2_ParamLimits

0x9732,	// (0x0005da4d) heading_pane_t2

0x0001,

0xf8d5,	// (0x00063bf0) heading_pane_t_ParamLimits

0xf8d5,	// (0x00063bf0) heading_pane_t

0x922a,	// (0x0005d545) bg_popup_heading_pane_g1

0x92d9,	// (0x0005d5f4) bg_popup_heading_pane_g2

0x92e3,	// (0x0005d5fe) bg_popup_heading_pane_g3

0x92ed,	// (0x0005d608) bg_popup_heading_pane_g4

0x92f7,	// (0x0005d612) bg_popup_heading_pane_g5

0x9301,	// (0x0005d61c) bg_popup_heading_pane_g6

0x9309,	// (0x0005d624) bg_popup_heading_pane_g7

0x9311,	// (0x0005d62c) bg_popup_heading_pane_g8

0x931b,	// (0x0005d636) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00063bac) bg_popup_heading_pane_g

0x8a12,	// (0x0005cd2d) bg_popup_sub_pane_g1

0x8a22,	// (0x0005cd3d) bg_popup_sub_pane_g2

0x8a1a,	// (0x0005cd35) bg_popup_sub_pane_g3

0x8a32,	// (0x0005cd4d) bg_popup_sub_pane_g4

0x8a2a,	// (0x0005cd45) bg_popup_sub_pane_g5

0x8a3a,	// (0x0005cd55) bg_popup_sub_pane_g6

0x8a42,	// (0x0005cd5d) bg_popup_sub_pane_g7

0x8a52,	// (0x0005cd6d) bg_popup_sub_pane_g8

0x8a4a,	// (0x0005cd65) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00063b86) bg_popup_sub_pane_g

0xe3c1,	// (0x000626dc) bg_popup_window_pane_cp5_ParamLimits

0xe3c1,	// (0x000626dc) bg_popup_window_pane_cp5

0xec25,	// (0x00062f40) popup_note_window_g1_ParamLimits

0xec25,	// (0x00062f40) popup_note_window_g1

0xec31,	// (0x00062f4c) popup_note_window_t1_ParamLimits

0xec31,	// (0x00062f4c) popup_note_window_t1

0xec47,	// (0x00062f62) popup_note_window_t2_ParamLimits

0xec47,	// (0x00062f62) popup_note_window_t2

0xec5d,	// (0x00062f78) popup_note_window_t3_ParamLimits

0xec5d,	// (0x00062f78) popup_note_window_t3

0xec73,	// (0x00062f8e) popup_note_window_t4_ParamLimits

0xec73,	// (0x00062f8e) popup_note_window_t4

0xec9b,	// (0x00062fb6) popup_note_window_t5_ParamLimits

0xec9b,	// (0x00062fb6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0006389a) popup_note_window_t_ParamLimits

0xf57f,	// (0x0006389a) popup_note_window_t

0xece5,	// (0x00063000) bg_popup_window_pane_cp6_ParamLimits

0xece5,	// (0x00063000) bg_popup_window_pane_cp6

0x91a6,	// (0x0005d4c1) popup_note_image_window_g1_ParamLimits

0x91a6,	// (0x0005d4c1) popup_note_image_window_g1

0x91b2,	// (0x0005d4cd) popup_note_image_window_g2_ParamLimits

0x91b2,	// (0x0005d4cd) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00063b7a) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00063b7a) popup_note_image_window_g

0x91cb,	// (0x0005d4e6) popup_note_image_window_t1_ParamLimits

0x91cb,	// (0x0005d4e6) popup_note_image_window_t1

0x91e4,	// (0x0005d4ff) popup_note_image_window_t2_ParamLimits

0x91e4,	// (0x0005d4ff) popup_note_image_window_t2

0x91fd,	// (0x0005d518) popup_note_image_window_t3_ParamLimits

0x91fd,	// (0x0005d518) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00063b7f) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00063b7f) popup_note_image_window_t

0x9066,	// (0x0005d381) bg_popup_window_pane_cp7_ParamLimits

0x9066,	// (0x0005d381) bg_popup_window_pane_cp7

0x9096,	// (0x0005d3b1) popup_note_wait_window_g1_ParamLimits

0x9096,	// (0x0005d3b1) popup_note_wait_window_g1

0x90a2,	// (0x0005d3bd) popup_note_wait_window_g2_ParamLimits

0x90a2,	// (0x0005d3bd) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00063b68) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00063b68) popup_note_wait_window_g

0x90ba,	// (0x0005d3d5) popup_note_wait_window_t1_ParamLimits

0x90ba,	// (0x0005d3d5) popup_note_wait_window_t1

0x90e1,	// (0x0005d3fc) popup_note_wait_window_t2_ParamLimits

0x90e1,	// (0x0005d3fc) popup_note_wait_window_t2

0x90ff,	// (0x0005d41a) popup_note_wait_window_t3_ParamLimits

0x90ff,	// (0x0005d41a) popup_note_wait_window_t3

0x9112,	// (0x0005d42d) popup_note_wait_window_t4_ParamLimits

0x9112,	// (0x0005d42d) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00063b6f) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00063b6f) popup_note_wait_window_t

0x9137,	// (0x0005d452) wait_bar_pane_ParamLimits

0x9137,	// (0x0005d452) wait_bar_pane

0xe26f,	// (0x0006258a) wait_anim_pane

0xe26f,	// (0x0006258a) wait_border_pane

0xe265,	// (0x00062580) wait_anim_pane_g1

0xe265,	// (0x00062580) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00063a23) wait_anim_pane_g

0x900a,	// (0x0005d325) wait_border_pane_g1

0x9015,	// (0x0005d330) wait_border_pane_g2

0x901e,	// (0x0005d339) wait_border_pane_g3

0x0002,

0xf846,	// (0x00063b61) wait_border_pane_g

0x8e74,	// (0x0005d18f) bg_popup_window_pane_cp16_ParamLimits

0x8e74,	// (0x0005d18f) bg_popup_window_pane_cp16

0x8f74,	// (0x0005d28f) indicator_popup_pane_cp4_ParamLimits

0x8f74,	// (0x0005d28f) indicator_popup_pane_cp4

0x8f88,	// (0x0005d2a3) popup_query_data_window_t1_ParamLimits

0x8f88,	// (0x0005d2a3) popup_query_data_window_t1

0x8f9a,	// (0x0005d2b5) popup_query_data_window_t2_ParamLimits

0x8f9a,	// (0x0005d2b5) popup_query_data_window_t2

0x8fb3,	// (0x0005d2ce) popup_query_data_window_t3_ParamLimits

0x8fb3,	// (0x0005d2ce) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00063b5a) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00063b5a) popup_query_data_window_t

0x8fcd,	// (0x0005d2e8) query_popup_data_pane_ParamLimits

0x8fcd,	// (0x0005d2e8) query_popup_data_pane

0x8fe1,	// (0x0005d2fc) query_popup_data_pane_cp1_ParamLimits

0x8fe1,	// (0x0005d2fc) query_popup_data_pane_cp1

0x8e74,	// (0x0005d18f) bg_popup_window_pane_cp10_ParamLimits

0x8e74,	// (0x0005d18f) bg_popup_window_pane_cp10

0x8ea6,	// (0x0005d1c1) indicator_popup_pane_ParamLimits

0x8ea6,	// (0x0005d1c1) indicator_popup_pane

0x8ec8,	// (0x0005d1e3) popup_query_code_window_t1_ParamLimits

0x8ec8,	// (0x0005d1e3) popup_query_code_window_t1

0x8ee2,	// (0x0005d1fd) popup_query_code_window_t2_ParamLimits

0x8ee2,	// (0x0005d1fd) popup_query_code_window_t2

0x8f2b,	// (0x0005d246) popup_query_code_window_t3_ParamLimits

0x8f2b,	// (0x0005d246) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00063b53) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00063b53) popup_query_code_window_t

0x8f5a,	// (0x0005d275) query_popup_pane_ParamLimits

0x8f5a,	// (0x0005d275) query_popup_pane

0xece5,	// (0x00063000) bg_popup_window_pane_cp15_ParamLimits

0xece5,	// (0x00063000) bg_popup_window_pane_cp15

0xed05,	// (0x00063020) indicator_popup_pane_cp1_ParamLimits

0xed05,	// (0x00063020) indicator_popup_pane_cp1

0xed18,	// (0x00063033) indicator_popup_pane_cp2_ParamLimits

0xed18,	// (0x00063033) indicator_popup_pane_cp2

0xed33,	// (0x0006304e) popup_query_data_code_window_g1_ParamLimits

0xed33,	// (0x0006304e) popup_query_data_code_window_g1

0xed46,	// (0x00063061) popup_query_data_code_window_t1_ParamLimits

0xed46,	// (0x00063061) popup_query_data_code_window_t1

0xed58,	// (0x00063073) popup_query_data_code_window_t2_ParamLimits

0xed58,	// (0x00063073) popup_query_data_code_window_t2

0xed6a,	// (0x00063085) popup_query_data_code_window_t3_ParamLimits

0xed6a,	// (0x00063085) popup_query_data_code_window_t3

0xed80,	// (0x0006309b) popup_query_data_code_window_t4_ParamLimits

0xed80,	// (0x0006309b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000638a5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000638a5) popup_query_data_code_window_t

0x6d9e,	// (0x0005b0b9) list_single_midp_graphic_pane_g3

0xed9a,	// (0x000630b5) query_popup_data_pane_cp2_ParamLimits

0xedad,	// (0x000630c8) query_popup_pane_cp2_ParamLimits

0xedad,	// (0x000630c8) query_popup_pane_cp2

0xe26f,	// (0x0006258a) bg_popup_window_pane_cp11

0x8e60,	// (0x0005d17b) heading_pane_cp5

0xee46,	// (0x00063161) listscroll_popup_info_pane

0xe26f,	// (0x0006258a) input_focus_pane_cp3

0xedc8,	// (0x000630e3) query_popup_pane_t1

0xedd6,	// (0x000630f1) list_popup_info_pane_ParamLimits

0xedd6,	// (0x000630f1) list_popup_info_pane

0xede5,	// (0x00063100) listscroll_popup_info_pane_g1

0xeded,	// (0x00063108) scroll_pane_cp7

0xedf7,	// (0x00063112) popup_info_list_pane_t1_ParamLimits

0xedf7,	// (0x00063112) popup_info_list_pane_t1

0xee11,	// (0x0006312c) popup_info_list_pane_t2_ParamLimits

0xee11,	// (0x0006312c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000638ae) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000638ae) popup_info_list_pane_t

0xe26f,	// (0x0006258a) bg_popup_window_pane_cp12

0xa3fe,	// (0x0005e719) find_popup_pane

0xe2bd,	// (0x000625d8) bg_popup_window_pane_cp3

0xee2b,	// (0x00063146) heading_pane_cp3

0xee37,	// (0x00063152) listscroll_popup_graphic_pane

0xe26f,	// (0x0006258a) bg_popup_window_pane_cp4

0x55d1,	// (0x000598ec) heading_pane_cp4

0xee46,	// (0x00063161) listscroll_popup_colour_pane

0x55db,	// (0x000598f6) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x55db,	// (0x000598f6) cell_large_graphic_colour_none_popup_pane

0x55ef,	// (0x0005990a) grid_large_graphic_colour_popup_pane_ParamLimits

0x55ef,	// (0x0005990a) grid_large_graphic_colour_popup_pane

0x561b,	// (0x00059936) listscroll_popup_colour_pane_g1_ParamLimits

0x561b,	// (0x00059936) listscroll_popup_colour_pane_g1

0x5632,	// (0x0005994d) listscroll_popup_colour_pane_g2_ParamLimits

0x5632,	// (0x0005994d) listscroll_popup_colour_pane_g2

0x5649,	// (0x00059964) listscroll_popup_colour_pane_g3_ParamLimits

0x5649,	// (0x00059964) listscroll_popup_colour_pane_g3

0x5659,	// (0x00059974) listscroll_popup_colour_pane_g4_ParamLimits

0x5659,	// (0x00059974) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000638b3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000638b3) listscroll_popup_colour_pane_g

0xee4e,	// (0x00063169) scroll_pane_cp6_ParamLimits

0xee4e,	// (0x00063169) scroll_pane_cp6

0x566d,	// (0x00059988) cell_large_graphic_colour_popup_pane_ParamLimits

0x566d,	// (0x00059988) cell_large_graphic_colour_popup_pane

0xee60,	// (0x0006317b) cell_large_graphic_colour_none_popup_pane_t1

0xe26f,	// (0x0006258a) grid_highlight_pane_cp5

0xee6f,	// (0x0006318a) cell_large_graphic_colour_popup_pane_g1

0xee77,	// (0x00063192) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000638bc) cell_large_graphic_colour_popup_pane_g

0xee7f,	// (0x0006319a) cell_large_graphic_colour_popup_pane_g2_copy1

0xee88,	// (0x000631a3) grid_highlight_pane_cp4

0xee90,	// (0x000631ab) bg_popup_window_pane_cp8_ParamLimits

0xee90,	// (0x000631ab) bg_popup_window_pane_cp8

0xeeab,	// (0x000631c6) popup_snote_single_text_window_g1_ParamLimits

0xeeab,	// (0x000631c6) popup_snote_single_text_window_g1

0xeebd,	// (0x000631d8) popup_snote_single_text_window_t1_ParamLimits

0xeebd,	// (0x000631d8) popup_snote_single_text_window_t1

0xeed0,	// (0x000631eb) popup_snote_single_text_window_t2_ParamLimits

0xeed0,	// (0x000631eb) popup_snote_single_text_window_t2

0xeee3,	// (0x000631fe) popup_snote_single_text_window_t3_ParamLimits

0xeee3,	// (0x000631fe) popup_snote_single_text_window_t3

0xef1c,	// (0x00063237) popup_snote_single_text_window_t4_ParamLimits

0xef1c,	// (0x00063237) popup_snote_single_text_window_t4

0xef50,	// (0x0006326b) popup_snote_single_text_window_t5_ParamLimits

0xef50,	// (0x0006326b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000638c1) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000638c1) popup_snote_single_text_window_t

0xef7f,	// (0x0006329a) bg_popup_window_pane_cp9_ParamLimits

0xef7f,	// (0x0006329a) bg_popup_window_pane_cp9

0xeeab,	// (0x000631c6) popup_snote_single_graphic_window_g1_ParamLimits

0xeeab,	// (0x000631c6) popup_snote_single_graphic_window_g1

0xef8d,	// (0x000632a8) popup_snote_single_graphic_window_g2_ParamLimits

0xef8d,	// (0x000632a8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000638cc) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000638cc) popup_snote_single_graphic_window_g

0xef99,	// (0x000632b4) popup_snote_single_graphic_window_t1_ParamLimits

0xef99,	// (0x000632b4) popup_snote_single_graphic_window_t1

0xefac,	// (0x000632c7) popup_snote_single_graphic_window_t2_ParamLimits

0xefac,	// (0x000632c7) popup_snote_single_graphic_window_t2

0xefbf,	// (0x000632da) popup_snote_single_graphic_window_t3_ParamLimits

0xefbf,	// (0x000632da) popup_snote_single_graphic_window_t3

0xeff8,	// (0x00063313) popup_snote_single_graphic_window_t4_ParamLimits

0xeff8,	// (0x00063313) popup_snote_single_graphic_window_t4

0xf02c,	// (0x00063347) popup_snote_single_graphic_window_t5_ParamLimits

0xf02c,	// (0x00063347) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000638d1) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000638d1) popup_snote_single_graphic_window_t

0xa33c,	// (0x0005e657) grid_graphic_popup_pane_ParamLimits

0xa33c,	// (0x0005e657) grid_graphic_popup_pane

0xa36a,	// (0x0005e685) listscroll_popup_graphic_pane_g1_ParamLimits

0xa36a,	// (0x0005e685) listscroll_popup_graphic_pane_g1

0xa37e,	// (0x0005e699) listscroll_popup_graphic_pane_g2_ParamLimits

0xa37e,	// (0x0005e699) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00063cd0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00063cd0) listscroll_popup_graphic_pane_g

0xa392,	// (0x0005e6ad) scroll_pane_cp5

0xa14a,	// (0x0005e465) cell_graphic_popup_pane_ParamLimits

0xa14a,	// (0x0005e465) cell_graphic_popup_pane

0xa12b,	// (0x0005e446) cell_graphic_popup_pane_g1

0xa133,	// (0x0005e44e) cell_graphic_popup_pane_g2

0xee7f,	// (0x0006319a) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00063cc9) cell_graphic_popup_pane_g

0xa13c,	// (0x0005e457) cell_graphic_popup_pane_t2

0xee88,	// (0x000631a3) grid_highlight_pane_cp3

0xf06d,	// (0x00063388) list_gen_pane_ParamLimits

0xf06d,	// (0x00063388) list_gen_pane

0xf095,	// (0x000633b0) scroll_pane

0xa083,	// (0x0005e39e) bg_list_pane_g1_ParamLimits

0xa083,	// (0x0005e39e) bg_list_pane_g1

0xa0a0,	// (0x0005e3bb) bg_list_pane_g2_ParamLimits

0xa0a0,	// (0x0005e3bb) bg_list_pane_g2

0xa0b5,	// (0x0005e3d0) bg_list_pane_g3_ParamLimits

0xa0b5,	// (0x0005e3d0) bg_list_pane_g3

0xa0c9,	// (0x0005e3e4) bg_list_pane_g4_ParamLimits

0xa0c9,	// (0x0005e3e4) bg_list_pane_g4

0xa0dd,	// (0x0005e3f8) bg_list_pane_g5_ParamLimits

0xa0dd,	// (0x0005e3f8) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00063cbe) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00063cbe) bg_list_pane_g

0x9fc6,	// (0x0005e2e1) list_double2_graphic_large_graphic_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double2_graphic_large_graphic_pane

0x9fc6,	// (0x0005e2e1) list_double2_graphic_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double2_graphic_pane

0x9fc6,	// (0x0005e2e1) list_double2_large_graphic_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double2_large_graphic_pane

0x9fc6,	// (0x0005e2e1) list_double2_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double2_pane

0x9fc6,	// (0x0005e2e1) list_double_graphic_heading_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double_graphic_heading_pane

0x9fc6,	// (0x0005e2e1) list_double_graphic_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double_graphic_pane

0x9fc6,	// (0x0005e2e1) list_double_heading_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double_heading_pane

0x9fc6,	// (0x0005e2e1) list_double_large_graphic_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double_large_graphic_pane

0x9fc6,	// (0x0005e2e1) list_double_number_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double_number_pane

0x9fc6,	// (0x0005e2e1) list_double_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double_pane

0x9fc6,	// (0x0005e2e1) list_double_time_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_double_time_pane

0x9fc6,	// (0x0005e2e1) list_setting_number_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_setting_number_pane

0x9fc6,	// (0x0005e2e1) list_setting_pane_ParamLimits

0x9fc6,	// (0x0005e2e1) list_setting_pane

0xa027,	// (0x0005e342) list_single_2graphic_pane_ParamLimits

0xa027,	// (0x0005e342) list_single_2graphic_pane

0xa027,	// (0x0005e342) list_single_graphic_heading_pane_ParamLimits

0xa027,	// (0x0005e342) list_single_graphic_heading_pane

0xa027,	// (0x0005e342) list_single_graphic_pane_ParamLimits

0xa027,	// (0x0005e342) list_single_graphic_pane

0xa027,	// (0x0005e342) list_single_heading_pane_ParamLimits

0xa027,	// (0x0005e342) list_single_heading_pane

0xa06b,	// (0x0005e386) list_single_large_graphic_pane_ParamLimits

0xa06b,	// (0x0005e386) list_single_large_graphic_pane

0xa027,	// (0x0005e342) list_single_number_heading_pane_ParamLimits

0xa027,	// (0x0005e342) list_single_number_heading_pane

0xa027,	// (0x0005e342) list_single_number_pane_ParamLimits

0xa027,	// (0x0005e342) list_single_number_pane

0xa027,	// (0x0005e342) list_single_pane_ParamLimits

0xa027,	// (0x0005e342) list_single_pane

0xe26f,	// (0x0006258a) list_highlight_pane_cp1

0x1383,	// (0x0005569e) list_single_pane_g1_ParamLimits

0x1383,	// (0x0005569e) list_single_pane_g1

0x56a8,	// (0x000599c3) list_single_pane_g2_ParamLimits

0x56a8,	// (0x000599c3) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000638ed) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000638ed) list_single_pane_g

0x7157,	// (0x0005b472) list_single_pane_t1_ParamLimits

0x7157,	// (0x0005b472) list_single_pane_t1

0x1383,	// (0x0005569e) list_single_number_pane_g1_ParamLimits

0x1383,	// (0x0005569e) list_single_number_pane_g1

0x56a8,	// (0x000599c3) list_single_number_pane_g2_ParamLimits

0x56a8,	// (0x000599c3) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000638ed) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000638ed) list_single_number_pane_g

0x7081,	// (0x0005b39c) list_single_number_pane_t1_ParamLimits

0x7081,	// (0x0005b39c) list_single_number_pane_t1

0x7097,	// (0x0005b3b2) list_single_number_pane_t2_ParamLimits

0x7097,	// (0x0005b3b2) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00063c7f) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00063c7f) list_single_number_pane_t

0x569c,	// (0x000599b7) list_single_graphic_pane_g1_ParamLimits

0x569c,	// (0x000599b7) list_single_graphic_pane_g1

0x1383,	// (0x0005569e) list_single_graphic_pane_g2_ParamLimits

0x1383,	// (0x0005569e) list_single_graphic_pane_g2

0x56a8,	// (0x000599c3) list_single_graphic_pane_g3_ParamLimits

0x56a8,	// (0x000599c3) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000638dc) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000638dc) list_single_graphic_pane_g

0x56b4,	// (0x000599cf) list_single_graphic_pane_t1_ParamLimits

0x56b4,	// (0x000599cf) list_single_graphic_pane_t1

0x56ca,	// (0x000599e5) list_single_heading_pane_g1_ParamLimits

0x56ca,	// (0x000599e5) list_single_heading_pane_g1

0x56a8,	// (0x000599c3) list_single_heading_pane_g2_ParamLimits

0x56a8,	// (0x000599c3) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000638e3) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000638e3) list_single_heading_pane_g

0x56dd,	// (0x000599f8) list_single_heading_pane_t1_ParamLimits

0x56dd,	// (0x000599f8) list_single_heading_pane_t1

0x56f3,	// (0x00059a0e) list_single_heading_pane_t2_ParamLimits

0x56f3,	// (0x00059a0e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000638e8) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000638e8) list_single_heading_pane_t

0x1383,	// (0x0005569e) list_single_number_heading_pane_g1_ParamLimits

0x1383,	// (0x0005569e) list_single_number_heading_pane_g1

0x56a8,	// (0x000599c3) list_single_number_heading_pane_g2_ParamLimits

0x56a8,	// (0x000599c3) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000638ed) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000638ed) list_single_number_heading_pane_g

0x5705,	// (0x00059a20) list_single_number_heading_pane_t1_ParamLimits

0x5705,	// (0x00059a20) list_single_number_heading_pane_t1

0x571b,	// (0x00059a36) list_single_number_heading_pane_t2_ParamLimits

0x571b,	// (0x00059a36) list_single_number_heading_pane_t2

0x572d,	// (0x00059a48) list_single_number_heading_pane_t3_ParamLimits

0x572d,	// (0x00059a48) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000638f2) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000638f2) list_single_number_heading_pane_t

0x573f,	// (0x00059a5a) list_single_graphic_heading_pane_g1_ParamLimits

0x573f,	// (0x00059a5a) list_single_graphic_heading_pane_g1

0x5757,	// (0x00059a72) list_single_graphic_heading_pane_g4_ParamLimits

0x5757,	// (0x00059a72) list_single_graphic_heading_pane_g4

0x56a8,	// (0x000599c3) list_single_graphic_heading_pane_g5_ParamLimits

0x56a8,	// (0x000599c3) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000638f9) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000638f9) list_single_graphic_heading_pane_g

0x5705,	// (0x00059a20) list_single_graphic_heading_pane_t1_ParamLimits

0x5705,	// (0x00059a20) list_single_graphic_heading_pane_t1

0x5768,	// (0x00059a83) list_single_graphic_heading_pane_t2_ParamLimits

0x5768,	// (0x00059a83) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00063900) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00063900) list_single_graphic_heading_pane_t

0x5780,	// (0x00059a9b) list_single_large_graphic_pane_g1_ParamLimits

0x5780,	// (0x00059a9b) list_single_large_graphic_pane_g1

0x578c,	// (0x00059aa7) list_single_large_graphic_pane_g2_ParamLimits

0x578c,	// (0x00059aa7) list_single_large_graphic_pane_g2

0x5798,	// (0x00059ab3) list_single_large_graphic_pane_g3_ParamLimits

0x5798,	// (0x00059ab3) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00063905) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00063905) list_single_large_graphic_pane_g

0x9015,	// (0x0005d330) wait_border_pane_g2_copy1

0x57a4,	// (0x00059abf) list_single_large_graphic_pane_g4_cp2

0x57ac,	// (0x00059ac7) list_single_large_graphic_pane_t1_ParamLimits

0x57ac,	// (0x00059ac7) list_single_large_graphic_pane_t1

0x57c2,	// (0x00059add) list_double_pane_g1_ParamLimits

0x57c2,	// (0x00059add) list_double_pane_g1

0x57ce,	// (0x00059ae9) list_double_pane_g2_ParamLimits

0x57ce,	// (0x00059ae9) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006390c) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006390c) list_double_pane_g

0x57da,	// (0x00059af5) list_double_pane_t1_ParamLimits

0x57da,	// (0x00059af5) list_double_pane_t1

0x57f0,	// (0x00059b0b) list_double_pane_t2_ParamLimits

0x57f0,	// (0x00059b0b) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00063911) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00063911) list_double_pane_t

0x5802,	// (0x00059b1d) list_double2_pane_g1_ParamLimits

0x5802,	// (0x00059b1d) list_double2_pane_g1

0x5813,	// (0x00059b2e) list_double2_pane_g2_ParamLimits

0x5813,	// (0x00059b2e) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00063916) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00063916) list_double2_pane_g

0x581f,	// (0x00059b3a) list_double2_pane_t1_ParamLimits

0x581f,	// (0x00059b3a) list_double2_pane_t1

0x5835,	// (0x00059b50) list_double2_pane_t2_ParamLimits

0x5835,	// (0x00059b50) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006391b) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006391b) list_double2_pane_t

0x57c2,	// (0x00059add) list_double_number_pane_g1_ParamLimits

0x57c2,	// (0x00059add) list_double_number_pane_g1

0x57ce,	// (0x00059ae9) list_double_number_pane_g2_ParamLimits

0x57ce,	// (0x00059ae9) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006390c) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006390c) list_double_number_pane_g

0x5847,	// (0x00059b62) list_double_number_pane_t1_ParamLimits

0x5847,	// (0x00059b62) list_double_number_pane_t1

0x5859,	// (0x00059b74) list_double_number_pane_t2_ParamLimits

0x5859,	// (0x00059b74) list_double_number_pane_t2

0x586f,	// (0x00059b8a) list_double_number_pane_t3_ParamLimits

0x586f,	// (0x00059b8a) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00063920) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00063920) list_double_number_pane_t

0x5881,	// (0x00059b9c) list_double_graphic_pane_g1_ParamLimits

0x5881,	// (0x00059b9c) list_double_graphic_pane_g1

0x588d,	// (0x00059ba8) list_double_graphic_pane_g2_ParamLimits

0x588d,	// (0x00059ba8) list_double_graphic_pane_g2

0x589c,	// (0x00059bb7) list_double_graphic_pane_g3_ParamLimits

0x589c,	// (0x00059bb7) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00063927) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00063927) list_double_graphic_pane_g

0x58b4,	// (0x00059bcf) list_double_graphic_pane_t1_ParamLimits

0x58b4,	// (0x00059bcf) list_double_graphic_pane_t1

0x58ca,	// (0x00059be5) list_double_graphic_pane_t2_ParamLimits

0x58ca,	// (0x00059be5) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00063930) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00063930) list_double_graphic_pane_t

0x58dc,	// (0x00059bf7) list_double2_graphic_pane_g1_ParamLimits

0x58dc,	// (0x00059bf7) list_double2_graphic_pane_g1

0x58e8,	// (0x00059c03) list_double2_graphic_pane_g2_ParamLimits

0x58e8,	// (0x00059c03) list_double2_graphic_pane_g2

0x58f4,	// (0x00059c0f) list_double2_graphic_pane_g3_ParamLimits

0x58f4,	// (0x00059c0f) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00063935) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00063935) list_double2_graphic_pane_g

0x5900,	// (0x00059c1b) list_double2_graphic_pane_t1_ParamLimits

0x5900,	// (0x00059c1b) list_double2_graphic_pane_t1

0x5916,	// (0x00059c31) list_double2_graphic_pane_t2_ParamLimits

0x5916,	// (0x00059c31) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0006393c) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0006393c) list_double2_graphic_pane_t

0x5928,	// (0x00059c43) list_double_large_graphic_pane_g1_ParamLimits

0x5928,	// (0x00059c43) list_double_large_graphic_pane_g1

0x5947,	// (0x00059c62) list_double_large_graphic_pane_g2_ParamLimits

0x5947,	// (0x00059c62) list_double_large_graphic_pane_g2

0x57ce,	// (0x00059ae9) list_double_large_graphic_pane_g3_ParamLimits

0x57ce,	// (0x00059ae9) list_double_large_graphic_pane_g3

0x595d,	// (0x00059c78) list_double_large_graphic_pane_g4_ParamLimits

0x595d,	// (0x00059c78) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00063941) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00063941) list_double_large_graphic_pane_g

0x5970,	// (0x00059c8b) list_double_large_graphic_pane_t1_ParamLimits

0x5970,	// (0x00059c8b) list_double_large_graphic_pane_t1

0x5989,	// (0x00059ca4) list_double_large_graphic_pane_t2_ParamLimits

0x5989,	// (0x00059ca4) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006394c) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006394c) list_double_large_graphic_pane_t

0x599b,	// (0x00059cb6) list_double2_large_graphic_pane_g1_ParamLimits

0x599b,	// (0x00059cb6) list_double2_large_graphic_pane_g1

0x59a7,	// (0x00059cc2) list_double2_large_graphic_pane_g2_ParamLimits

0x59a7,	// (0x00059cc2) list_double2_large_graphic_pane_g2

0x58f4,	// (0x00059c0f) list_double2_large_graphic_pane_g3_ParamLimits

0x58f4,	// (0x00059c0f) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00063951) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00063951) list_double2_large_graphic_pane_g

0x59b8,	// (0x00059cd3) list_double2_large_graphic_pane_t1_ParamLimits

0x59b8,	// (0x00059cd3) list_double2_large_graphic_pane_t1

0x59ce,	// (0x00059ce9) list_double2_large_graphic_pane_t2_ParamLimits

0x59ce,	// (0x00059ce9) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00063958) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00063958) list_double2_large_graphic_pane_t

0x59e0,	// (0x00059cfb) list_double_heading_pane_g1_ParamLimits

0x59e0,	// (0x00059cfb) list_double_heading_pane_g1

0x59f1,	// (0x00059d0c) list_double_heading_pane_g2_ParamLimits

0x59f1,	// (0x00059d0c) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0006395d) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0006395d) list_double_heading_pane_g

0x59fd,	// (0x00059d18) list_double_heading_pane_t1_ParamLimits

0x59fd,	// (0x00059d18) list_double_heading_pane_t1

0x5a13,	// (0x00059d2e) list_double_heading_pane_t2_ParamLimits

0x5a13,	// (0x00059d2e) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00063962) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00063962) list_double_heading_pane_t

0x58dc,	// (0x00059bf7) list_double_graphic_heading_pane_g1_ParamLimits

0x58dc,	// (0x00059bf7) list_double_graphic_heading_pane_g1

0x59e0,	// (0x00059cfb) list_double_graphic_heading_pane_g2_ParamLimits

0x59e0,	// (0x00059cfb) list_double_graphic_heading_pane_g2

0x59f1,	// (0x00059d0c) list_double_graphic_heading_pane_g3_ParamLimits

0x59f1,	// (0x00059d0c) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00063967) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00063967) list_double_graphic_heading_pane_g

0x5a25,	// (0x00059d40) list_double_graphic_heading_pane_t1_ParamLimits

0x5a25,	// (0x00059d40) list_double_graphic_heading_pane_t1

0x5a3b,	// (0x00059d56) list_double_graphic_heading_pane_t2_ParamLimits

0x5a3b,	// (0x00059d56) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0006396e) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0006396e) list_double_graphic_heading_pane_t

0x5a4d,	// (0x00059d68) list_double_time_pane_g1_ParamLimits

0x5a4d,	// (0x00059d68) list_double_time_pane_g1

0x5a5e,	// (0x00059d79) list_double_time_pane_g2_ParamLimits

0x5a5e,	// (0x00059d79) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00063973) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00063973) list_double_time_pane_g

0x5a6a,	// (0x00059d85) list_double_time_pane_t1_ParamLimits

0x5a6a,	// (0x00059d85) list_double_time_pane_t1

0x5a80,	// (0x00059d9b) list_double_time_pane_t2_ParamLimits

0x5a80,	// (0x00059d9b) list_double_time_pane_t2

0x5a92,	// (0x00059dad) list_double_time_pane_t3_ParamLimits

0x5a92,	// (0x00059dad) list_double_time_pane_t3

0x5aa4,	// (0x00059dbf) list_double_time_pane_t4_ParamLimits

0x5aa4,	// (0x00059dbf) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00063978) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00063978) list_double_time_pane_t

0x5ab6,	// (0x00059dd1) list_setting_pane_g1_ParamLimits

0x5ab6,	// (0x00059dd1) list_setting_pane_g1

0x5ac2,	// (0x00059ddd) list_setting_pane_g2_ParamLimits

0x5ac2,	// (0x00059ddd) list_setting_pane_g2

0x0001,

0xf666,	// (0x00063981) list_setting_pane_g_ParamLimits

0xf666,	// (0x00063981) list_setting_pane_g

0x5ace,	// (0x00059de9) list_setting_pane_t1_ParamLimits

0x5ace,	// (0x00059de9) list_setting_pane_t1

0x5ae8,	// (0x00059e03) list_setting_pane_t2_ParamLimits

0x5ae8,	// (0x00059e03) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00063986) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00063986) list_setting_pane_t

0x5b27,	// (0x00059e42) set_value_pane_cp_ParamLimits

0x5b27,	// (0x00059e42) set_value_pane_cp

0x5b35,	// (0x00059e50) list_setting_number_pane_g1_ParamLimits

0x5b35,	// (0x00059e50) list_setting_number_pane_g1

0x5b41,	// (0x00059e5c) list_setting_number_pane_g2_ParamLimits

0x5b41,	// (0x00059e5c) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0006398d) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0006398d) list_setting_number_pane_g

0x5b4d,	// (0x00059e68) list_setting_number_pane_t1_ParamLimits

0x5b4d,	// (0x00059e68) list_setting_number_pane_t1

0x5b66,	// (0x00059e81) list_setting_number_pane_t2_ParamLimits

0x5b66,	// (0x00059e81) list_setting_number_pane_t2

0x5b80,	// (0x00059e9b) list_setting_number_pane_t3_ParamLimits

0x5b80,	// (0x00059e9b) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00063992) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00063992) list_setting_number_pane_t

0x5b27,	// (0x00059e42) set_value_pane_ParamLimits

0x5b27,	// (0x00059e42) set_value_pane

0xf0c9,	// (0x000633e4) bg_set_opt_pane_ParamLimits

0xf0c9,	// (0x000633e4) bg_set_opt_pane

0x325f,	// (0x0005757a) set_value_pane_t1

0xf0ea,	// (0x00063405) slider_set_pane_cp3

0xf0f3,	// (0x0006340e) volume_small_pane_cp

0xf0fc,	// (0x00063417) list_form_gen_pane

0xf105,	// (0x00063420) scroll_pane_cp8

0x5bc3,	// (0x00059ede) form_field_data_pane_ParamLimits

0x5bc3,	// (0x00059ede) form_field_data_pane

0x5be3,	// (0x00059efe) form_field_data_wide_pane_ParamLimits

0x5be3,	// (0x00059efe) form_field_data_wide_pane

0x5c0a,	// (0x00059f25) form_field_popup_pane_ParamLimits

0x5c0a,	// (0x00059f25) form_field_popup_pane

0x327d,	// (0x00057598) form_field_popup_wide_pane_ParamLimits

0x327d,	// (0x00057598) form_field_popup_wide_pane

0x329e,	// (0x000575b9) form_field_slider_pane_ParamLimits

0x329e,	// (0x000575b9) form_field_slider_pane

0x32b1,	// (0x000575cc) form_field_slider_wide_pane_ParamLimits

0x32b1,	// (0x000575cc) form_field_slider_wide_pane

0xf116,	// (0x00063431) data_form_pane

0x5c36,	// (0x00059f51) form_field_data_pane_t1

0xf122,	// (0x0006343d) input_focus_pane

0x32c4,	// (0x000575df) data_form_wide_pane

0x32e1,	// (0x000575fc) form_field_data_wide_pane_t1

0xee9d,	// (0x000631b8) input_focus_pane_cp6

0x5c50,	// (0x00059f6b) form_field_popup_pane_t1

0xf122,	// (0x0006343d) input_focus_pane_cp7

0xf150,	// (0x0006346b) list_form_pane

0x330b,	// (0x00057626) form_field_popup_wide_pane_t1

0xf122,	// (0x0006343d) input_focus_pane_cp8

0xf15c,	// (0x00063477) list_form_wide_pane

0x5c72,	// (0x00059f8d) form_field_slider_pane_t1_ParamLimits

0x5c72,	// (0x00059f8d) form_field_slider_pane_t1

0x5c8a,	// (0x00059fa5) form_field_slider_pane_t2_ParamLimits

0x5c8a,	// (0x00059fa5) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000639a2) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000639a2) form_field_slider_pane_t

0xe3c1,	// (0x000626dc) input_focus_pane_cp9_ParamLimits

0xe3c1,	// (0x000626dc) input_focus_pane_cp9

0x5c9f,	// (0x00059fba) slider_cont_pane_ParamLimits

0x5c9f,	// (0x00059fba) slider_cont_pane

0xf168,	// (0x00063483) form_field_slider_wide_pane_t1_ParamLimits

0xf168,	// (0x00063483) form_field_slider_wide_pane_t1

0x3320,	// (0x0005763b) form_field_slider_wide_pane_t2_ParamLimits

0x3320,	// (0x0005763b) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000639a7) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000639a7) form_field_slider_wide_pane_t

0xe3c1,	// (0x000626dc) input_focus_pane_cp10_ParamLimits

0xe3c1,	// (0x000626dc) input_focus_pane_cp10

0x5cb3,	// (0x00059fce) slider_cont_pane_cp1_ParamLimits

0x5cb3,	// (0x00059fce) slider_cont_pane_cp1

0x5cc7,	// (0x00059fe2) slider_form_pane_cp

0xf17a,	// (0x00063495) input_focus_pane_g1

0xf182,	// (0x0006349d) input_focus_pane_g2

0xf18a,	// (0x000634a5) input_focus_pane_g3

0xf192,	// (0x000634ad) input_focus_pane_g4

0xf19a,	// (0x000634b5) input_focus_pane_g5

0xf1a2,	// (0x000634bd) input_focus_pane_g6

0xf1aa,	// (0x000634c5) input_focus_pane_g7

0xf1b2,	// (0x000634cd) input_focus_pane_g8

0xf1ba,	// (0x000634d5) input_focus_pane_g9

0xe265,	// (0x00062580) input_focus_pane_g10

0x0009,

0xf691,	// (0x000639ac) input_focus_pane_g

0x901e,	// (0x0005d339) wait_border_pane_g3_copy1

0x5ccf,	// (0x00059fea) data_form_pane_t1

0xe265,	// (0x00062580) wait_anim_pane_g1_copy1

0x7121,	// (0x0005b43c) data_form_wide_pane_t1

0x3332,	// (0x0005764d) list_form_graphic_pane_cp_ParamLimits

0x3332,	// (0x0005764d) list_form_graphic_pane_cp

0x9f6a,	// (0x0005e285) slider_form_pane_g1

0x9f73,	// (0x0005e28e) slider_form_pane_g2

0x0006,

0xf994,	// (0x00063caf) slider_form_pane_g

0x3332,	// (0x0005764d) list_form_graphic_pane_ParamLimits

0x3332,	// (0x0005764d) list_form_graphic_pane

0x3344,	// (0x0005765f) list_form_graphic_pane_g1

0x334c,	// (0x00057667) list_form_graphic_pane_t1_ParamLimits

0x334c,	// (0x00057667) list_form_graphic_pane_t1

0xe2bd,	// (0x000625d8) list_highlight_pane_cp5_ParamLimits

0xe2bd,	// (0x000625d8) list_highlight_pane_cp5

0x5cee,	// (0x0005a009) find_pane_g1

0xf1c2,	// (0x000634dd) input_find_pane

0x5cf7,	// (0x0005a012) input_find_pane_g1_ParamLimits

0x5cf7,	// (0x0005a012) input_find_pane_g1

0x5d03,	// (0x0005a01e) input_find_pane_t1_ParamLimits

0x5d03,	// (0x0005a01e) input_find_pane_t1

0x5d18,	// (0x0005a033) input_find_pane_t2_ParamLimits

0x5d18,	// (0x0005a033) input_find_pane_t2

0x0001,

0xf6a6,	// (0x000639c1) input_find_pane_t_ParamLimits

0xf6a6,	// (0x000639c1) input_find_pane_t

0xf1cb,	// (0x000634e6) input_focus_pane_cp5_ParamLimits

0xf1cb,	// (0x000634e6) input_focus_pane_cp5

0xf1d9,	// (0x000634f4) bg_popup_window_pane_cp2_ParamLimits

0xf1d9,	// (0x000634f4) bg_popup_window_pane_cp2

0xf1e6,	// (0x00063501) listscroll_menu_pane_ParamLimits

0xf1e6,	// (0x00063501) listscroll_menu_pane

0x5d39,	// (0x0005a054) popup_submenu_window_ParamLimits

0x5d39,	// (0x0005a054) popup_submenu_window

0xf1f2,	// (0x0006350d) find_popup_pane_g1

0xf1fa,	// (0x00063515) input_popup_find_pane_cp

0xf1cb,	// (0x000634e6) input_focus_pane_cp4_ParamLimits

0xf1cb,	// (0x000634e6) input_focus_pane_cp4

0xf204,	// (0x0006351f) input_popup_find_pane_t1_ParamLimits

0xf204,	// (0x0006351f) input_popup_find_pane_t1

0xe26f,	// (0x0006258a) bg_popup_sub_pane_cp

0xf232,	// (0x0006354d) listscroll_popup_sub_pane

0xf23a,	// (0x00063555) list_submenu_pane_ParamLimits

0xf23a,	// (0x00063555) list_submenu_pane

0xf24b,	// (0x00063566) scroll_pane_cp4

0xf253,	// (0x0006356e) list_single_popup_submenu_pane_ParamLimits

0xf253,	// (0x0006356e) list_single_popup_submenu_pane

0xf268,	// (0x00063583) list_single_popup_submenu_pane_g1

0xf270,	// (0x0006358b) list_single_popup_submenu_pane_t1_ParamLimits

0xf270,	// (0x0006358b) list_single_popup_submenu_pane_t1

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp1_ParamLimits

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp1

0x5d77,	// (0x0005a092) tabs_2_active_pane_g1

0x5d7f,	// (0x0005a09a) tabs_2_active_pane_t1

0xe2bd,	// (0x000625d8) bg_passive_tab_pane_cp1_ParamLimits

0xe2bd,	// (0x000625d8) bg_passive_tab_pane_cp1

0x5d77,	// (0x0005a092) tabs_2_passive_pane_g1

0x5d7f,	// (0x0005a09a) tabs_2_passive_pane_t1

0x1a10,	// (0x00055d2b) bg_active_tab_pane_cp4

0x5d91,	// (0x0005a0ac) tabs_2_long_active_pane_t1

0x5da4,	// (0x0005a0bf) bg_passive_tab_pane_cp4

0x6da6,	// (0x0005b0c1) list_single_midp_graphic_pane_g4_ParamLimits

0x1a10,	// (0x00055d2b) bg_active_tab_pane_cp5

0x5db0,	// (0x0005a0cb) tabs_3_long_active_pane_t1

0x5da4,	// (0x0005a0bf) bg_passive_tab_pane_cp5

0x6da6,	// (0x0005b0c1) list_single_midp_graphic_pane_g4

0xe2bd,	// (0x000625d8) bg_popup_window_pane_cp13_ParamLimits

0xe2bd,	// (0x000625d8) bg_popup_window_pane_cp13

0xf28e,	// (0x000635a9) listscroll_popup_fast_pane_ParamLimits

0xf28e,	// (0x000635a9) listscroll_popup_fast_pane

0xf29d,	// (0x000635b8) grid_popup_fast_pane_ParamLimits

0xf29d,	// (0x000635b8) grid_popup_fast_pane

0xf2af,	// (0x000635ca) scroll_pane_cp9_ParamLimits

0xf2af,	// (0x000635ca) scroll_pane_cp9

0xba61,	// (0x0005fd7c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xba61,	// (0x0005fd7c) list_single_graphic_hl_pane_t1_cp2

0xf2d3,	// (0x000635ee) input_focus_pane_cp20_ParamLimits

0xf2d3,	// (0x000635ee) input_focus_pane_cp20

0xf2e1,	// (0x000635fc) query_popup_data_pane_t1_ParamLimits

0xf2e1,	// (0x000635fc) query_popup_data_pane_t1

0xf2f4,	// (0x0006360f) query_popup_data_pane_t2_ParamLimits

0xf2f4,	// (0x0006360f) query_popup_data_pane_t2

0xf33a,	// (0x00063655) query_popup_data_pane_t3_ParamLimits

0xf33a,	// (0x00063655) query_popup_data_pane_t3

0xf37b,	// (0x00063696) query_popup_data_pane_t4_ParamLimits

0xf37b,	// (0x00063696) query_popup_data_pane_t4

0xf3b7,	// (0x000636d2) query_popup_data_pane_t5_ParamLimits

0xf3b7,	// (0x000636d2) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x000639c6) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x000639c6) query_popup_data_pane_t

0xf17a,	// (0x00063495) bg_set_opt_pane_g1

0xf182,	// (0x0006349d) bg_set_opt_pane_g2

0xf18a,	// (0x000634a5) bg_set_opt_pane_g3

0xf192,	// (0x000634ad) bg_set_opt_pane_g4

0xf19a,	// (0x000634b5) bg_set_opt_pane_g5

0xf1a2,	// (0x000634bd) bg_set_opt_pane_g6

0xf1aa,	// (0x000634c5) bg_set_opt_pane_g7

0xf1b2,	// (0x000634cd) bg_set_opt_pane_g8

0xf1ba,	// (0x000634d5) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000639d1) bg_set_opt_pane_g

0x62c1,	// (0x0005a5dc) control_top_pane_stacon_ParamLimits

0x62c1,	// (0x0005a5dc) control_top_pane_stacon

0x6314,	// (0x0005a62f) signal_pane_stacon_ParamLimits

0x6314,	// (0x0005a62f) signal_pane_stacon

0x336a,	// (0x00057685) stacon_top_pane_g1_ParamLimits

0x336a,	// (0x00057685) stacon_top_pane_g1

0x6339,	// (0x0005a654) title_pane_stacon_ParamLimits

0x6339,	// (0x0005a654) title_pane_stacon

0x6363,	// (0x0005a67e) uni_indicator_pane_stacon_ParamLimits

0x6363,	// (0x0005a67e) uni_indicator_pane_stacon

0x6378,	// (0x0005a693) battery_pane_stacon_ParamLimits

0x6378,	// (0x0005a693) battery_pane_stacon

0x63bc,	// (0x0005a6d7) control_bottom_pane_stacon_ParamLimits

0x63bc,	// (0x0005a6d7) control_bottom_pane_stacon

0x63df,	// (0x0005a6fa) navi_pane_stacon_ParamLimits

0x63df,	// (0x0005a6fa) navi_pane_stacon

0x338c,	// (0x000576a7) stacon_bottom_pane_g1_ParamLimits

0x338c,	// (0x000576a7) stacon_bottom_pane_g1

0x5dc2,	// (0x0005a0dd) aid_levels_signal_lsc_ParamLimits

0x5dc2,	// (0x0005a0dd) aid_levels_signal_lsc

0x5dd9,	// (0x0005a0f4) signal_pane_stacon_g1_ParamLimits

0x5dd9,	// (0x0005a0f4) signal_pane_stacon_g1

0x5ded,	// (0x0005a108) signal_pane_stacon_g2_ParamLimits

0x5ded,	// (0x0005a108) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000639e4) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000639e4) signal_pane_stacon_g

0x5e22,	// (0x0005a13d) title_pane_stacon_t1_ParamLimits

0x5e22,	// (0x0005a13d) title_pane_stacon_t1

0xf3fb,	// (0x00063716) uni_indicator_pane_stacon_g1

0xf405,	// (0x00063720) uni_indicator_pane_stacon_g2

0xf40f,	// (0x0006372a) uni_indicator_pane_stacon_g3

0xf419,	// (0x00063734) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000639f0) uni_indicator_pane_stacon_g

0x5e47,	// (0x0005a162) control_top_pane_stacon_g1

0x5e4f,	// (0x0005a16a) control_top_pane_stacon_t1_ParamLimits

0x5e4f,	// (0x0005a16a) control_top_pane_stacon_t1

0x5e86,	// (0x0005a1a1) aid_levels_battery_lsc_ParamLimits

0x5e86,	// (0x0005a1a1) aid_levels_battery_lsc

0x5e9e,	// (0x0005a1b9) battery_pane_stacon_g1_ParamLimits

0x5e9e,	// (0x0005a1b9) battery_pane_stacon_g1

0x5eb1,	// (0x0005a1cc) battery_pane_stacon_g2_ParamLimits

0x5eb1,	// (0x0005a1cc) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x000639f9) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x000639f9) battery_pane_stacon_g

0x5eef,	// (0x0005a20a) navi_icon_pane_stacon

0x5f03,	// (0x0005a21e) navi_navi_pane_stacon

0x5eef,	// (0x0005a20a) navi_text_pane_stacon

0x5e47,	// (0x0005a162) control_bottom_pane_stacon_g1

0x5f19,	// (0x0005a234) control_bottom_pane_stacon_t1_ParamLimits

0x5f19,	// (0x0005a234) control_bottom_pane_stacon_t1

0x5f50,	// (0x0005a26b) grid_app_pane_ParamLimits

0x5f50,	// (0x0005a26b) grid_app_pane

0x5f72,	// (0x0005a28d) scroll_pane_cp15_ParamLimits

0x5f72,	// (0x0005a28d) scroll_pane_cp15

0x5f85,	// (0x0005a2a0) cell_app_pane_ParamLimits

0x5f85,	// (0x0005a2a0) cell_app_pane

0x5fb1,	// (0x0005a2cc) cell_app_pane_g1_ParamLimits

0x5fb1,	// (0x0005a2cc) cell_app_pane_g1

0xf43d,	// (0x00063758) cell_app_pane_g2_ParamLimits

0xf43d,	// (0x00063758) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x000639fe) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x000639fe) cell_app_pane_g

0x5fd5,	// (0x0005a2f0) cell_app_pane_t1_ParamLimits

0x5fd5,	// (0x0005a2f0) cell_app_pane_t1

0xf449,	// (0x00063764) grid_highlight_pane_ParamLimits

0xf449,	// (0x00063764) grid_highlight_pane

0xf17a,	// (0x00063495) cell_highlight_pane_g1

0xf182,	// (0x0006349d) cell_highlight_pane_g2

0xf18a,	// (0x000634a5) cell_highlight_pane_g3

0xf192,	// (0x000634ad) cell_highlight_pane_g4

0xf19a,	// (0x000634b5) cell_highlight_pane_g5

0xf1a2,	// (0x000634bd) cell_highlight_pane_g6

0xf1aa,	// (0x000634c5) cell_highlight_pane_g7

0xf1b2,	// (0x000634cd) cell_highlight_pane_g8

0xf1ba,	// (0x000634d5) cell_highlight_pane_g9

0xe265,	// (0x00062580) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000639ac) cell_highlight_pane_g

0xf45a,	// (0x00063775) bg_scroll_pane

0x5fff,	// (0x0005a31a) scroll_handle_pane

0xf4a1,	// (0x000637bc) scroll_bg_pane_g1

0xf4b6,	// (0x000637d1) scroll_bg_pane_g2

0xf4ce,	// (0x000637e9) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00063a03) scroll_bg_pane_g

0xf4e3,	// (0x000637fe) scroll_handle_focus_pane_ParamLimits

0xf4e3,	// (0x000637fe) scroll_handle_focus_pane

0xf4a1,	// (0x000637bc) scroll_handle_pane_g1

0xf4f0,	// (0x0006380b) scroll_handle_pane_g2

0xf4ce,	// (0x000637e9) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00063a0a) scroll_handle_pane_g

0xf1cb,	// (0x000634e6) bg_popup_sub_pane_cp21_ParamLimits

0xf1cb,	// (0x000634e6) bg_popup_sub_pane_cp21

0xf504,	// (0x0006381f) popup_fep_japan_predictive_window_t1_ParamLimits

0xf504,	// (0x0006381f) popup_fep_japan_predictive_window_t1

0xf51b,	// (0x00063836) popup_fep_japan_predictive_window_t2_ParamLimits

0xf51b,	// (0x00063836) popup_fep_japan_predictive_window_t2

0x1123,	// (0x0005543e) popup_fep_japan_predictive_window_t3_ParamLimits

0x1123,	// (0x0005543e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00063a11) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00063a11) popup_fep_japan_predictive_window_t

0xe26f,	// (0x0006258a) bg_popup_sub_pane_cp23

0x115a,	// (0x00055475) listscroll_japin_cand_pane

0x1162,	// (0x0005547d) popup_fep_japan_candidate_window_t1

0x1170,	// (0x0005548b) candidate_pane_ParamLimits

0x1170,	// (0x0005548b) candidate_pane

0x1182,	// (0x0005549d) scroll_pane_cp30

0x118c,	// (0x000554a7) list_single_popup_jap_candidate_pane_ParamLimits

0x118c,	// (0x000554a7) list_single_popup_jap_candidate_pane

0xe26f,	// (0x0006258a) list_highlight_pane_cp30

0x11a0,	// (0x000554bb) list_single_popup_jap_candidate_pane_t1

0x6028,	// (0x0005a343) level_1_signal

0x6035,	// (0x0005a350) level_2_signal

0x6042,	// (0x0005a35d) level_3_signal

0x604f,	// (0x0005a36a) level_4_signal

0x605c,	// (0x0005a377) level_5_signal

0x6069,	// (0x0005a384) level_6_signal

0x6076,	// (0x0005a391) level_7_signal

0x6028,	// (0x0005a343) level_1_battery

0x6035,	// (0x0005a350) level_2_battery

0x6042,	// (0x0005a35d) level_3_battery

0x604f,	// (0x0005a36a) level_4_battery

0x605c,	// (0x0005a377) level_5_battery

0x6069,	// (0x0005a384) level_6_battery

0x6076,	// (0x0005a391) level_7_battery

0x11c7,	// (0x000554e2) list_menu_pane_ParamLimits

0x11c7,	// (0x000554e2) list_menu_pane

0x11dd,	// (0x000554f8) scroll_pane_cp25_ParamLimits

0x11dd,	// (0x000554f8) scroll_pane_cp25

0x11f6,	// (0x00055511) list_double2_graphic_pane_cp2_ParamLimits

0x11f6,	// (0x00055511) list_double2_graphic_pane_cp2

0x11f6,	// (0x00055511) list_double2_large_graphic_pane_cp2_ParamLimits

0x11f6,	// (0x00055511) list_double2_large_graphic_pane_cp2

0x11f6,	// (0x00055511) list_double2_pane_cp2_ParamLimits

0x11f6,	// (0x00055511) list_double2_pane_cp2

0x11f6,	// (0x00055511) list_double_graphic_pane_cp2_ParamLimits

0x11f6,	// (0x00055511) list_double_graphic_pane_cp2

0x11f6,	// (0x00055511) list_double_large_graphic_pane_cp2_ParamLimits

0x11f6,	// (0x00055511) list_double_large_graphic_pane_cp2

0x11f6,	// (0x00055511) list_double_number_pane_cp2_ParamLimits

0x11f6,	// (0x00055511) list_double_number_pane_cp2

0x11f6,	// (0x00055511) list_double_pane_cp2_ParamLimits

0x11f6,	// (0x00055511) list_double_pane_cp2

0x60b8,	// (0x0005a3d3) list_single_2graphic_pane_cp2_ParamLimits

0x60b8,	// (0x0005a3d3) list_single_2graphic_pane_cp2

0x60b8,	// (0x0005a3d3) list_single_graphic_heading_pane_cp2_ParamLimits

0x60b8,	// (0x0005a3d3) list_single_graphic_heading_pane_cp2

0x60b8,	// (0x0005a3d3) list_single_graphic_pane_cp2_ParamLimits

0x60b8,	// (0x0005a3d3) list_single_graphic_pane_cp2

0x60b8,	// (0x0005a3d3) list_single_heading_pane_cp2_ParamLimits

0x60b8,	// (0x0005a3d3) list_single_heading_pane_cp2

0x1206,	// (0x00055521) list_single_large_graphic_pane_cp2_ParamLimits

0x1206,	// (0x00055521) list_single_large_graphic_pane_cp2

0x60b8,	// (0x0005a3d3) list_single_number_heading_pane_cp2_ParamLimits

0x60b8,	// (0x0005a3d3) list_single_number_heading_pane_cp2

0x60b8,	// (0x0005a3d3) list_single_number_pane_cp2_ParamLimits

0x60b8,	// (0x0005a3d3) list_single_number_pane_cp2

0x60b8,	// (0x0005a3d3) list_single_pane_cp2_ParamLimits

0x60b8,	// (0x0005a3d3) list_single_pane_cp2

0x121f,	// (0x0005553a) bg_popup_sub_pane_cp22

0x6194,	// (0x0005a4af) popup_side_volume_key_window_g1

0x61be,	// (0x0005a4d9) popup_side_volume_key_window_t1

0x61dc,	// (0x0005a4f7) volume_small_pane_cp1

0xe3c1,	// (0x000626dc) bg_popup_sub_pane_cp24_ParamLimits

0xe3c1,	// (0x000626dc) bg_popup_sub_pane_cp24

0x1235,	// (0x00055550) fep_china_uni_candidate_pane_ParamLimits

0x1235,	// (0x00055550) fep_china_uni_candidate_pane

0x1249,	// (0x00055564) fep_china_uni_entry_pane

0x1259,	// (0x00055574) popup_fep_china_uni_window_g1

0x1275,	// (0x00055590) fep_china_uni_entry_pane_g1

0x127f,	// (0x0005559a) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00063a42) fep_china_uni_entry_pane_g

0x1289,	// (0x000555a4) fep_entry_item_pane

0x1293,	// (0x000555ae) fep_candidate_item_pane

0x129b,	// (0x000555b6) fep_china_uni_candidate_pane_g1

0x12a5,	// (0x000555c0) fep_china_uni_candidate_pane_g2

0x12ad,	// (0x000555c8) fep_china_uni_candidate_pane_g3

0x12b5,	// (0x000555d0) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00063a47) fep_china_uni_candidate_pane_g

0xe265,	// (0x00062580) fep_entry_item_pane_g1

0x12bf,	// (0x000555da) fep_entry_item_pane_t1_ParamLimits

0x12bf,	// (0x000555da) fep_entry_item_pane_t1

0x12d5,	// (0x000555f0) fep_candidate_item_pane_t1_ParamLimits

0x12d5,	// (0x000555f0) fep_candidate_item_pane_t1

0x12ea,	// (0x00055605) fep_candidate_item_pane_t2_ParamLimits

0x12ea,	// (0x00055605) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00063a50) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00063a50) fep_candidate_item_pane_t

0xe2bd,	// (0x000625d8) list_highlight_pane_cp31_ParamLimits

0xe2bd,	// (0x000625d8) list_highlight_pane_cp31

0x12fc,	// (0x00055617) level_1_signal_lsc

0x1305,	// (0x00055620) level_2_signal_lsc

0x130e,	// (0x00055629) level_3_signal_lsc

0x1317,	// (0x00055632) level_4_signal_lsc

0x1320,	// (0x0005563b) level_5_signal_lsc

0x1329,	// (0x00055644) level_6_signal_lsc

0x1332,	// (0x0005564d) level_7_signal_lsc

0x1332,	// (0x0005564d) level_1_battery_lsc

0x133b,	// (0x00055656) level_2_battery_lsc

0x1344,	// (0x0005565f) level_3_battery_lsc

0x134d,	// (0x00055668) level_4_battery_lsc

0x1356,	// (0x00055671) level_5_battery_lsc

0x135f,	// (0x0005567a) level_6_battery_lsc

0x12fc,	// (0x00055617) level_7_battery_lsc

0x1368,	// (0x00055683) scroll_handle_focus_pane_g1

0x1371,	// (0x0005568c) scroll_handle_focus_pane_g2

0x137a,	// (0x00055695) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00063a55) scroll_handle_focus_pane_g

0x61e4,	// (0x0005a4ff) list_single_2graphic_pane_g1_ParamLimits

0x61e4,	// (0x0005a4ff) list_single_2graphic_pane_g1

0x5757,	// (0x00059a72) list_single_2graphic_pane_g2_ParamLimits

0x5757,	// (0x00059a72) list_single_2graphic_pane_g2

0x56a8,	// (0x000599c3) list_single_2graphic_pane_g3_ParamLimits

0x56a8,	// (0x000599c3) list_single_2graphic_pane_g3

0x61f0,	// (0x0005a50b) list_single_2graphic_pane_g4_ParamLimits

0x61f0,	// (0x0005a50b) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00063a5c) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00063a5c) list_single_2graphic_pane_g

0x6201,	// (0x0005a51c) list_single_2graphic_pane_t1_ParamLimits

0x6201,	// (0x0005a51c) list_single_2graphic_pane_t1

0x622f,	// (0x0005a54a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x622f,	// (0x0005a54a) list_double2_graphic_large_graphic_pane_g1

0x59a7,	// (0x00059cc2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x59a7,	// (0x00059cc2) list_double2_graphic_large_graphic_pane_g2

0x58f4,	// (0x00059c0f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x58f4,	// (0x00059c0f) list_double2_graphic_large_graphic_pane_g3

0x6241,	// (0x0005a55c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6241,	// (0x0005a55c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00063a65) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00063a65) list_double2_graphic_large_graphic_pane_g

0x624d,	// (0x0005a568) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x624d,	// (0x0005a568) list_double2_graphic_large_graphic_pane_t1

0x6263,	// (0x0005a57e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6263,	// (0x0005a57e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00063a6e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00063a6e) list_double2_graphic_large_graphic_pane_t

0x344c,	// (0x00057767) popup_fast_swap_window_ParamLimits

0x344c,	// (0x00057767) popup_fast_swap_window

0x346a,	// (0x00057785) popup_side_volume_key_window

0x3488,	// (0x000577a3) stacon_top_pane

0x3492,	// (0x000577ad) status_pane_ParamLimits

0x3492,	// (0x000577ad) status_pane

0x6402,	// (0x0005a71d) status_small_pane

0xe26f,	// (0x0006258a) control_pane

0xe26f,	// (0x0006258a) stacon_bottom_pane

0xf105,	// (0x00063420) scroll_pane_cp121

0xf0fc,	// (0x00063417) set_content_pane

0x6275,	// (0x0005a590) bg_active_tab_pane_g1_cp1

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp1

0x627e,	// (0x0005a599) bg_active_tab_pane_g3_cp1

0x6275,	// (0x0005a590) bg_passive_tab_pane_g1_cp1

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp1

0x627e,	// (0x0005a599) bg_passive_tab_pane_g3_cp1

0x6287,	// (0x0005a5a2) bg_active_tab_pane_g1_cp2

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp2

0x6290,	// (0x0005a5ab) bg_active_tab_pane_g3_cp2

0x6287,	// (0x0005a5a2) bg_passive_tab_pane_g1_cp2

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp2

0x6290,	// (0x0005a5ab) bg_passive_tab_pane_g3_cp2

0x6299,	// (0x0005a5b4) bg_active_tab_pane_g1_cp3

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp3

0x62a2,	// (0x0005a5bd) bg_active_tab_pane_g3_cp3

0x6299,	// (0x0005a5b4) bg_passive_tab_pane_g1_cp3

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp3

0x62a2,	// (0x0005a5bd) bg_passive_tab_pane_g3_cp3

0x62ab,	// (0x0005a5c6) bg_active_tab_pane_g1_cp4

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp4

0x62b6,	// (0x0005a5d1) bg_active_tab_pane_g3_cp4

0x62ab,	// (0x0005a5c6) bg_passive_tab_pane_g1_cp4

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp4

0x62b6,	// (0x0005a5d1) bg_passive_tab_pane_g3_cp4

0x33b1,	// (0x000576cc) bg_active_tab_pane_g1_cp5

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp5

0x33a8,	// (0x000576c3) bg_active_tab_pane_g3_cp5

0x33b1,	// (0x000576cc) bg_passive_tab_pane_g1_cp5

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp5

0x33a8,	// (0x000576c3) bg_passive_tab_pane_g3_cp5

0x33ba,	// (0x000576d5) list_set_graphic_pane_ParamLimits

0x33ba,	// (0x000576d5) list_set_graphic_pane

0xe26f,	// (0x0006258a) bg_set_opt_pane_cp4

0x33cd,	// (0x000576e8) list_set_graphic_pane_g1_ParamLimits

0x33cd,	// (0x000576e8) list_set_graphic_pane_g1

0x33d9,	// (0x000576f4) list_set_graphic_pane_g2_ParamLimits

0x33d9,	// (0x000576f4) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00063a73) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00063a73) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00063df4) volume_small_pane_cp_g

0x33fd,	// (0x00057718) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x33fd,	// (0x00057718) list_double2_large_graphic_pane_g1_cp2

0x340b,	// (0x00057726) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x340b,	// (0x00057726) list_double2_large_graphic_pane_g2_cp2

0x341c,	// (0x00057737) list_double2_large_graphic_pane_g3_cp2

0x3424,	// (0x0005773f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3424,	// (0x0005773f) list_double2_large_graphic_pane_t1_cp2

0x343a,	// (0x00057755) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x343a,	// (0x00057755) list_double2_large_graphic_pane_t2_cp2

0x9b02,	// (0x0005de1d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9b02,	// (0x0005de1d) list_double_large_graphic_pane_g1_cp2

0x9b15,	// (0x0005de30) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9b15,	// (0x0005de30) list_double_large_graphic_pane_g2_cp2

0x35b0,	// (0x000578cb) list_double_large_graphic_pane_g3_cp2

0x9b26,	// (0x0005de41) list_double_large_graphic_pane_g4_cp

0x9b2e,	// (0x0005de49) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9b2e,	// (0x0005de49) list_double_large_graphic_pane_t1_cp2

0x9b45,	// (0x0005de60) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9b45,	// (0x0005de60) list_double_large_graphic_pane_t2_cp2

0x34a0,	// (0x000577bb) list_double2_graphic_pane_g1_cp2_ParamLimits

0x34a0,	// (0x000577bb) list_double2_graphic_pane_g1_cp2

0x34ae,	// (0x000577c9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x34ae,	// (0x000577c9) list_double2_graphic_pane_g2_cp2

0x34bf,	// (0x000577da) list_double2_graphic_pane_g3_cp2

0x34c9,	// (0x000577e4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x34c9,	// (0x000577e4) list_double2_graphic_pane_t1_cp2

0x34df,	// (0x000577fa) list_double2_graphic_pane_t2_cp2_ParamLimits

0x34df,	// (0x000577fa) list_double2_graphic_pane_t2_cp2

0x34f1,	// (0x0005780c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x34f1,	// (0x0005780c) list_single_number_heading_pane_g1_cp2

0x34fd,	// (0x00057818) list_single_number_heading_pane_g2_cp2

0x3505,	// (0x00057820) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3505,	// (0x00057820) list_single_number_heading_pane_t1_cp2

0x351b,	// (0x00057836) list_single_number_heading_pane_t2_cp2_ParamLimits

0x351b,	// (0x00057836) list_single_number_heading_pane_t2_cp2

0x352f,	// (0x0005784a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x352f,	// (0x0005784a) list_single_number_heading_pane_t3_cp2

0x34f1,	// (0x0005780c) list_single_heading_pane_g1_cp2_ParamLimits

0x34f1,	// (0x0005780c) list_single_heading_pane_g1_cp2

0x34fd,	// (0x00057818) list_single_heading_pane_g2_cp2

0x3505,	// (0x00057820) list_single_heading_pane_t1_cp2_ParamLimits

0x3505,	// (0x00057820) list_single_heading_pane_t1_cp2

0x98fc,	// (0x0005dc17) list_single_heading_pane_t2_cp2_ParamLimits

0x98fc,	// (0x0005dc17) list_single_heading_pane_t2_cp2

0x9844,	// (0x0005db5f) list_double_graphic_pane_g1_cp2_ParamLimits

0x9844,	// (0x0005db5f) list_double_graphic_pane_g1_cp2

0x9850,	// (0x0005db6b) list_double_graphic_pane_g2_cp2_ParamLimits

0x9850,	// (0x0005db6b) list_double_graphic_pane_g2_cp2

0x985f,	// (0x0005db7a) list_double_graphic_pane_g3_cp2

0x9867,	// (0x0005db82) list_double_graphic_pane_t1_cp2_ParamLimits

0x9867,	// (0x0005db82) list_double_graphic_pane_t1_cp2

0x987d,	// (0x0005db98) list_double_graphic_pane_t2_cp2_ParamLimits

0x987d,	// (0x0005db98) list_double_graphic_pane_t2_cp2

0x35a4,	// (0x000578bf) list_double_number_pane_g1_cp2_ParamLimits

0x35a4,	// (0x000578bf) list_double_number_pane_g1_cp2

0x35b0,	// (0x000578cb) list_double_number_pane_g2_cp2

0x9808,	// (0x0005db23) list_double_number_pane_t1_cp2_ParamLimits

0x9808,	// (0x0005db23) list_double_number_pane_t1_cp2

0x981c,	// (0x0005db37) list_double_number_pane_t2_cp2_ParamLimits

0x981c,	// (0x0005db37) list_double_number_pane_t2_cp2

0x9832,	// (0x0005db4d) list_double_number_pane_t3_cp2_ParamLimits

0x9832,	// (0x0005db4d) list_double_number_pane_t3_cp2

0x96f1,	// (0x0005da0c) list_single_graphic_pane_g1_cp2_ParamLimits

0x96f1,	// (0x0005da0c) list_single_graphic_pane_g1_cp2

0x1383,	// (0x0005569e) list_single_graphic_pane_g2_cp2_ParamLimits

0x1383,	// (0x0005569e) list_single_graphic_pane_g2_cp2

0x360a,	// (0x00057925) list_single_graphic_pane_g3_cp2

0x96c7,	// (0x0005d9e2) list_single_graphic_pane_t1_cp2_ParamLimits

0x96c7,	// (0x0005d9e2) list_single_graphic_pane_t1_cp2

0x1383,	// (0x0005569e) list_single_number_pane_g1_cp2_ParamLimits

0x1383,	// (0x0005569e) list_single_number_pane_g1_cp2

0x360a,	// (0x00057925) list_single_number_pane_g2_cp2

0x96c7,	// (0x0005d9e2) list_single_number_pane_t1_cp2_ParamLimits

0x96c7,	// (0x0005d9e2) list_single_number_pane_t1_cp2

0x96dd,	// (0x0005d9f8) list_single_number_pane_t2_cp2_ParamLimits

0x96dd,	// (0x0005d9f8) list_single_number_pane_t2_cp2

0x340b,	// (0x00057726) list_double2_pane_g1_cp2_ParamLimits

0x340b,	// (0x00057726) list_double2_pane_g1_cp2

0x341c,	// (0x00057737) list_double2_pane_g2_cp2

0x357c,	// (0x00057897) list_double2_pane_t1_cp2_ParamLimits

0x357c,	// (0x00057897) list_double2_pane_t1_cp2

0x3592,	// (0x000578ad) list_double2_pane_t2_cp2_ParamLimits

0x3592,	// (0x000578ad) list_double2_pane_t2_cp2

0x35a4,	// (0x000578bf) list_double_pane_g1_cp2_ParamLimits

0x35a4,	// (0x000578bf) list_double_pane_g1_cp2

0x35b0,	// (0x000578cb) list_double_pane_g2_cp2

0x35b8,	// (0x000578d3) list_double_pane_t1_cp2_ParamLimits

0x35b8,	// (0x000578d3) list_double_pane_t1_cp2

0x35ce,	// (0x000578e9) list_double_pane_t2_cp2_ParamLimits

0x35ce,	// (0x000578e9) list_double_pane_t2_cp2

0x35fa,	// (0x00057915) list_single_pane_cp2_g3

0x1383,	// (0x0005569e) list_single_pane_g1_cp2_ParamLimits

0x1383,	// (0x0005569e) list_single_pane_g1_cp2

0x360a,	// (0x00057925) list_single_pane_g2_cp2

0x3612,	// (0x0005792d) list_single_pane_t1_cp2_ParamLimits

0x3612,	// (0x0005792d) list_single_pane_t1_cp2

0x362a,	// (0x00057945) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x362a,	// (0x00057945) list_single_large_graphic_pane_g1_cp2

0x3253,	// (0x0005756e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3253,	// (0x0005756e) list_single_large_graphic_pane_g2_cp2

0x3638,	// (0x00057953) list_single_large_graphic_pane_g3_cp2

0x3640,	// (0x0005795b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3640,	// (0x0005795b) list_single_large_graphic_pane_g4_cp1

0x365a,	// (0x00057975) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x365a,	// (0x00057975) list_single_large_graphic_pane_t1_cp2

0x9691,	// (0x0005d9ac) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9691,	// (0x0005d9ac) list_single_graphic_heading_pane_g1_cp2

0x965e,	// (0x0005d979) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x965e,	// (0x0005d979) list_single_graphic_heading_pane_g4_cp2

0x360a,	// (0x00057925) list_single_graphic_heading_pane_g5_cp2

0x969d,	// (0x0005d9b8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x969d,	// (0x0005d9b8) list_single_graphic_heading_pane_t1_cp2

0x96b3,	// (0x0005d9ce) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x96b3,	// (0x0005d9ce) list_single_graphic_heading_pane_t2_cp2

0x9652,	// (0x0005d96d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9652,	// (0x0005d96d) list_single_2graphic_pane_g1_cp2

0x965e,	// (0x0005d979) list_single_2graphic_pane_g2_cp2_ParamLimits

0x965e,	// (0x0005d979) list_single_2graphic_pane_g2_cp2

0x360a,	// (0x00057925) list_single_2graphic_pane_g3_cp2

0x966f,	// (0x0005d98a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x966f,	// (0x0005d98a) list_single_2graphic_pane_g4_cp2

0x967b,	// (0x0005d996) list_single_2graphic_pane_t1_cp2_ParamLimits

0x967b,	// (0x0005d996) list_single_2graphic_pane_t1_cp2

0xe265,	// (0x00062580) list_highlight_pane_g10_cp1

0x922a,	// (0x0005d545) list_highlight_pane_g1_cp1

0x9232,	// (0x0005d54d) list_highlight_pane_g2_cp1

0x923a,	// (0x0005d555) list_highlight_pane_g3_cp1

0x9242,	// (0x0005d55d) list_highlight_pane_g4_cp1

0x924a,	// (0x0005d565) list_highlight_pane_g5_cp1

0x9252,	// (0x0005d56d) list_highlight_pane_g6_cp1

0x925a,	// (0x0005d575) list_highlight_pane_g7_cp1

0x9262,	// (0x0005d57d) list_highlight_pane_g8_cp1

0x926a,	// (0x0005d585) list_highlight_pane_g9_cp1

0x914a,	// (0x0005d465) form_field_slider_pane_t3

0x9158,	// (0x0005d473) form_field_slider_pane_t4

0x9166,	// (0x0005d481) slider_form_pane_ParamLimits

0x9166,	// (0x0005d481) slider_form_pane

0xe26f,	// (0x0006258a) control_abbreviations

0xe26f,	// (0x0006258a) control_conventions

0xe26f,	// (0x0006258a) control_definitions

0xe26f,	// (0x0006258a) format_table_attribute

0x9952,	// (0x0005dc6d) bg_popup_preview_window_pane_g9

0xe26f,	// (0x0006258a) format_table_data2

0xe26f,	// (0x0006258a) format_table_data3

0xe26f,	// (0x0006258a) format_table_data_example

0x0008,

0xe26f,	// (0x0006258a) intro_purpose

0xf8f4,	// (0x00063c0f) bg_popup_preview_window_pane_g

0xe26f,	// (0x0006258a) texts_category

0xe26f,	// (0x0006258a) texts_graphics

0x3670,	// (0x0005798b) text_digital

0x367f,	// (0x0005799a) text_primary

0x368e,	// (0x000579a9) text_primary_small

0x369d,	// (0x000579b8) text_secondary

0x36ac,	// (0x000579c7) text_title

0xa0ff,	// (0x0005e41a) bg_passive_tab_pane_g1_cp3_srt

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp3_srt

0xa108,	// (0x0005e423) bg_passive_tab_pane_g3_cp3_srt

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp3_srt_ParamLimits

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp3_srt

0xa111,	// (0x0005e42c) tabs_4_active_pane_srt_g1

0xa119,	// (0x0005e434) tabs_4_active_pane_srt_t1_ParamLimits

0xa119,	// (0x0005e434) tabs_4_active_pane_srt_t1

0xa0ff,	// (0x0005e41a) bg_active_tab_pane_g1_cp3_copy1

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp3_copy1

0xa108,	// (0x0005e423) bg_active_tab_pane_g3_cp3_copy1

0xe2bd,	// (0x000625d8) tabs_2_long_active_pane_srt_ParamLimits

0xe2bd,	// (0x000625d8) tabs_2_long_active_pane_srt

0xe2bd,	// (0x000625d8) tabs_2_long_passive_pane_srt_ParamLimits

0xe2bd,	// (0x000625d8) tabs_2_long_passive_pane_srt

0x5da4,	// (0x0005a0bf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5da4,	// (0x0005a0bf) bg_passive_tab_pane_cp4_srt

0x9d81,	// (0x0005e09c) bg_passive_tab_pane_g1_cp4_srt

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp4_srt

0x9d8a,	// (0x0005e0a5) bg_passive_tab_pane_g3_cp4_srt

0x1a10,	// (0x00055d2b) bg_active_tab_pane_cp4_srt_ParamLimits

0x1a10,	// (0x00055d2b) bg_active_tab_pane_cp4_srt

0x9d93,	// (0x0005e0ae) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9d93,	// (0x0005e0ae) tabs_2_long_active_pane_srt_t1

0x9d81,	// (0x0005e09c) bg_active_tab_pane_g1_cp4_srt

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp4_srt

0x9d8a,	// (0x0005e0a5) bg_active_tab_pane_g3_cp4_srt

0xe3c1,	// (0x000626dc) tabs_3_long_active_pane_srt_ParamLimits

0xe3c1,	// (0x000626dc) tabs_3_long_active_pane_srt

0xe3c1,	// (0x000626dc) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe3c1,	// (0x000626dc) tabs_3_long_passive_pane_cp_srt

0xe3c1,	// (0x000626dc) tabs_3_long_passive_pane_srt_ParamLimits

0xe3c1,	// (0x000626dc) tabs_3_long_passive_pane_srt

0x5da4,	// (0x0005a0bf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5da4,	// (0x0005a0bf) bg_passive_tab_pane_cp5_srt

0x33b1,	// (0x000576cc) bg_passive_tab_pane_g1_cp5_srt

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp5_srt

0x33a8,	// (0x000576c3) bg_passive_tab_pane_g3_cp5_srt

0x1a10,	// (0x00055d2b) bg_active_tab_pane_cp5_srt_ParamLimits

0x1a10,	// (0x00055d2b) bg_active_tab_pane_cp5_srt

0x9d6f,	// (0x0005e08a) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9d6f,	// (0x0005e08a) tabs_3_long_active_pane_srt_t1

0x33b1,	// (0x000576cc) bg_active_tab_pane_g1_cp5_srt

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp5_srt

0x33a8,	// (0x000576c3) bg_active_tab_pane_g3_cp5_srt

0x9d61,	// (0x0005e07c) navi_text_pane_srt_t1

0x9d59,	// (0x0005e074) navi_icon_pane_srt_g1

0x37b6,	// (0x00057ad1) midp_editing_number_pane_srt

0x36bb,	// (0x000579d6) midp_ticker_pane_srt

0x37be,	// (0x00057ad9) midp_ticker_pane_srt_g1

0x37c6,	// (0x00057ae1) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00063a92) midp_ticker_pane_srt_g

0x37ce,	// (0x00057ae9) midp_ticker_pane_srt_t1

0x9d4a,	// (0x0005e065) midp_editing_number_pane_t1_copy1

0x640d,	// (0x0005a728) listscroll_midp_pane

0x640d,	// (0x0005a728) midp_form_pane

0x36c3,	// (0x000579de) midp_info_popup_window_ParamLimits

0x36c3,	// (0x000579de) midp_info_popup_window

0xf1cb,	// (0x000634e6) bg_popup_sub_pane_cp50_ParamLimits

0xf1cb,	// (0x000634e6) bg_popup_sub_pane_cp50

0x8e54,	// (0x0005d16f) listscroll_midp_info_pane_ParamLimits

0x8e54,	// (0x0005d16f) listscroll_midp_info_pane

0x8e34,	// (0x0005d14f) listscroll_form_midp_pane_ParamLimits

0x8e34,	// (0x0005d14f) listscroll_form_midp_pane

0x8e40,	// (0x0005d15b) scroll_bar_cp050

0x8e14,	// (0x0005d12f) list_midp_pane

0xacfe,	// (0x0005f019) signal_pane_g2_cp

0x8d4e,	// (0x0005d069) listscroll_midp_info_pane_t1_ParamLimits

0x8d4e,	// (0x0005d069) listscroll_midp_info_pane_t1

0x8d66,	// (0x0005d081) listscroll_midp_info_pane_t2_ParamLimits

0x8d66,	// (0x0005d081) listscroll_midp_info_pane_t2

0x8da4,	// (0x0005d0bf) listscroll_midp_info_pane_t3_ParamLimits

0x8da4,	// (0x0005d0bf) listscroll_midp_info_pane_t3

0x8dde,	// (0x0005d0f9) listscroll_midp_info_pane_t4_ParamLimits

0x8dde,	// (0x0005d0f9) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00063b4a) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00063b4a) listscroll_midp_info_pane_t

0xf24b,	// (0x00063566) scroll_pane_cp21

0x8ce8,	// (0x0005d003) form_midp_field_choice_group_pane

0x8cf1,	// (0x0005d00c) form_midp_field_text_pane

0x8d34,	// (0x0005d04f) form_midp_field_time_pane

0x8d3c,	// (0x0005d057) form_midp_gauge_slider_pane

0x8d45,	// (0x0005d060) form_midp_gauge_wait_pane

0xe26f,	// (0x0006258a) form_midp_image_pane

0x6e92,	// (0x0005b1ad) list_single_midp_pane_ParamLimits

0x6e92,	// (0x0005b1ad) list_single_midp_pane

0x8cac,	// (0x0005cfc7) form_midp_field_text_pane_t1

0x8a9e,	// (0x0005cdb9) input_focus_pane_cp050

0x8cd7,	// (0x0005cff2) list_midp_form_text_pane

0x8c7b,	// (0x0005cf96) form_midp_field_choice_group_pane_t1

0x8c89,	// (0x0005cfa4) input_focus_pane_cp051

0x8c9d,	// (0x0005cfb8) list_midp_choice_pane

0xe26f,	// (0x0006258a) status_idle_pane

0x8c5f,	// (0x0005cf7a) form_midp_field_time_pane_t1

0xe265,	// (0x00062580) wait_anim_pane_g2_copy1

0x8c6d,	// (0x0005cf88) form_midp_field_time_pane_t2

0x0001,

0x371e,	// (0x00057a39) aid_navinavi_width_2_pane

0xf82a,	// (0x00063b45) form_midp_field_time_pane_t

0xe26f,	// (0x0006258a) input_focus_pane_cp052

0xe26f,	// (0x0006258a) bg_input_focus_pane_cp040

0x8c1f,	// (0x0005cf3a) form_midp_gauge_slider_pane_t1

0x8c2d,	// (0x0005cf48) form_midp_gauge_slider_pane_t2

0x8c3b,	// (0x0005cf56) form_midp_gauge_slider_pane_t3

0x8c49,	// (0x0005cf64) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00063b3c) form_midp_gauge_slider_pane_t

0x8c57,	// (0x0005cf72) form_midp_slider_pane

0xe2bd,	// (0x000625d8) bg_input_focus_pane_cp041_ParamLimits

0xe2bd,	// (0x000625d8) bg_input_focus_pane_cp041

0x8bec,	// (0x0005cf07) form_midp_gauge_wait_pane_t1_ParamLimits

0x8bec,	// (0x0005cf07) form_midp_gauge_wait_pane_t1

0x8bfe,	// (0x0005cf19) form_midp_gauge_wait_pane_t2_ParamLimits

0x8bfe,	// (0x0005cf19) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00063b37) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00063b37) form_midp_gauge_wait_pane_t

0x8c10,	// (0x0005cf2b) form_midp_wait_pane_ParamLimits

0x8c10,	// (0x0005cf2b) form_midp_wait_pane

0x8bb4,	// (0x0005cecf) form_midp_image_pane_g1

0x8bbd,	// (0x0005ced8) form_midp_image_pane_t1

0x8bcc,	// (0x0005cee7) form_midp_image_pane_t2

0x8bdb,	// (0x0005cef6) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00063b30) form_midp_image_pane_t

0x8bab,	// (0x0005cec6) list_single_midp_pane_g1

0x3dab,	// (0x000580c6) list_single_midp_pane_t1

0x8b91,	// (0x0005ceac) list_midp_form_item_pane_ParamLimits

0x8b91,	// (0x0005ceac) list_midp_form_item_pane

0x36d8,	// (0x000579f3) list_midp_form_item_pane_t1

0x36e7,	// (0x00057a02) midp_ticker_pane_g1

0x36f3,	// (0x00057a0e) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00063a78) midp_ticker_pane_g

0x64bf,	// (0x0005a7da) midp_ticker_pane_t1

0x9fb7,	// (0x0005e2d2) midp_editing_number_pane_t1

0x9f95,	// (0x0005e2b0) midp_editing_number_pane

0x9fa4,	// (0x0005e2bf) midp_ticker_pane

0x9d3a,	// (0x0005e055) ai_message_heading_pane

0xe26f,	// (0x0006258a) bg_popup_window_pane_cp14

0x9d42,	// (0x0005e05d) listscroll_ai_message_pane

0x9cc0,	// (0x0005dfdb) ai_message_heading_pane_g1_ParamLimits

0x9cc0,	// (0x0005dfdb) ai_message_heading_pane_g1

0x9ccc,	// (0x0005dfe7) ai_message_heading_pane_g2_ParamLimits

0x9ccc,	// (0x0005dfe7) ai_message_heading_pane_g2

0x9cda,	// (0x0005dff5) ai_message_heading_pane_g3_ParamLimits

0x9cda,	// (0x0005dff5) ai_message_heading_pane_g3

0x9ce6,	// (0x0005e001) ai_message_heading_pane_g4_ParamLimits

0x9ce6,	// (0x0005e001) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00063c71) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00063c71) ai_message_heading_pane_g

0x9cf2,	// (0x0005e00d) ai_message_heading_pane_t1_ParamLimits

0x9cf2,	// (0x0005e00d) ai_message_heading_pane_t1

0x9d0c,	// (0x0005e027) ai_message_heading_pane_t2_ParamLimits

0x9d0c,	// (0x0005e027) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00063c7a) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00063c7a) ai_message_heading_pane_t

0x9d20,	// (0x0005e03b) bg_popup_heading_pane_cp1_ParamLimits

0x9d20,	// (0x0005e03b) bg_popup_heading_pane_cp1

0x9cae,	// (0x0005dfc9) list_ai_message_pane_ParamLimits

0x9cae,	// (0x0005dfc9) list_ai_message_pane

0xf24b,	// (0x00063566) scroll_pane_cp10

0x9c4a,	// (0x0005df65) list_ai_message_pane_g1

0x9c52,	// (0x0005df6d) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00063c4e) list_ai_message_pane_g

0x9c5a,	// (0x0005df75) list_ai_message_pane_t1_ParamLimits

0x9c5a,	// (0x0005df75) list_ai_message_pane_t1

0x9c6f,	// (0x0005df8a) list_ai_message_pane_t2_ParamLimits

0x9c6f,	// (0x0005df8a) list_ai_message_pane_t2

0x9c84,	// (0x0005df9f) list_ai_message_pane_t3_ParamLimits

0x9c84,	// (0x0005df9f) list_ai_message_pane_t3

0x9c99,	// (0x0005dfb4) list_ai_message_pane_t4_ParamLimits

0x9c99,	// (0x0005dfb4) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00063c53) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00063c53) list_ai_message_pane_t

0x9c33,	// (0x0005df4e) cell_ai_soft_ind_pane_ParamLimits

0x9c33,	// (0x0005df4e) cell_ai_soft_ind_pane

0x36ff,	// (0x00057a1a) cell_ai_soft_ind_pane_g1_ParamLimits

0x36ff,	// (0x00057a1a) cell_ai_soft_ind_pane_g1

0xe26f,	// (0x0006258a) grid_highlight_cp1

0x370c,	// (0x00057a27) text_secondary_cp56_ParamLimits

0x370c,	// (0x00057a27) text_secondary_cp56

0x9c08,	// (0x0005df23) example_general_pane_ParamLimits

0x9c08,	// (0x0005df23) example_general_pane

0x9c14,	// (0x0005df2f) example_parent_pane_g1_ParamLimits

0x9c14,	// (0x0005df2f) example_parent_pane_g1

0x9c20,	// (0x0005df3b) example_parent_pane_t1_ParamLimits

0x9c20,	// (0x0005df3b) example_parent_pane_t1

0x6ae1,	// (0x0005adfc) popup_preview_text_window_ParamLimits

0x6ae1,	// (0x0005adfc) popup_preview_text_window

0x3602,	// (0x0005791d) list_single_pane_cp2_g4

0xece5,	// (0x00063000) bg_popup_preview_window_pane_ParamLimits

0xece5,	// (0x00063000) bg_popup_preview_window_pane

0x995c,	// (0x0005dc77) popup_preview_text_window_t1_ParamLimits

0x995c,	// (0x0005dc77) popup_preview_text_window_t1

0x997a,	// (0x0005dc95) popup_preview_text_window_t2_ParamLimits

0x997a,	// (0x0005dc95) popup_preview_text_window_t2

0x99c3,	// (0x0005dcde) popup_preview_text_window_t3_ParamLimits

0x99c3,	// (0x0005dcde) popup_preview_text_window_t3

0x9a08,	// (0x0005dd23) popup_preview_text_window_t4_ParamLimits

0x9a08,	// (0x0005dd23) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00063c22) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00063c22) popup_preview_text_window_t

0x9a86,	// (0x0005dda1) scroll_pane_cp11

0x8a12,	// (0x0005cd2d) bg_popup_preview_window_pane_g1

0x9910,	// (0x0005dc2b) bg_popup_preview_window_pane_g2

0x991a,	// (0x0005dc35) bg_popup_preview_window_pane_g3

0x9924,	// (0x0005dc3f) bg_popup_preview_window_pane_g4

0x992e,	// (0x0005dc49) bg_popup_preview_window_pane_g5

0x9938,	// (0x0005dc53) bg_popup_preview_window_pane_g6

0x9940,	// (0x0005dc5b) bg_popup_preview_window_pane_g7

0x9948,	// (0x0005dc63) bg_popup_preview_window_pane_g8

0x4f0e,	// (0x00059229) aid_popup_width_pane

0x6abd,	// (0x0005add8) popup_midp_note_alarm_window_ParamLimits

0x6abd,	// (0x0005add8) popup_midp_note_alarm_window

0xf116,	// (0x00063431) data_form_pane_ParamLimits

0x5c2c,	// (0x00059f47) form_field_data_pane_g1

0x5c36,	// (0x00059f51) form_field_data_pane_t1_ParamLimits

0xf122,	// (0x0006343d) input_focus_pane_ParamLimits

0x32c4,	// (0x000575df) data_form_wide_pane_ParamLimits

0x32d5,	// (0x000575f0) form_field_data_wide_pane_g1

0x32e1,	// (0x000575fc) form_field_data_wide_pane_t1_ParamLimits

0xee9d,	// (0x000631b8) input_focus_pane_cp6_ParamLimits

0x5d69,	// (0x0005a084) input_popup_find_pane_g1_ParamLimits

0x5d69,	// (0x0005a084) input_popup_find_pane_g1

0x5ec2,	// (0x0005a1dd) aid_navi_side_left_pane

0x5ed7,	// (0x0005a1f2) aid_navi_side_right_pane

0x9325,	// (0x0005d640) bg_popup_window_pane_cp30_ParamLimits

0x9325,	// (0x0005d640) bg_popup_window_pane_cp30

0x939f,	// (0x0005d6ba) popup_midp_note_alarm_window_g1_ParamLimits

0x939f,	// (0x0005d6ba) popup_midp_note_alarm_window_g1

0x93cf,	// (0x0005d6ea) popup_midp_note_alarm_window_t1_ParamLimits

0x93cf,	// (0x0005d6ea) popup_midp_note_alarm_window_t1

0x9470,	// (0x0005d78b) popup_midp_note_alarm_window_t2_ParamLimits

0x9470,	// (0x0005d78b) popup_midp_note_alarm_window_t2

0x951e,	// (0x0005d839) popup_midp_note_alarm_window_t3_ParamLimits

0x951e,	// (0x0005d839) popup_midp_note_alarm_window_t3

0x9550,	// (0x0005d86b) popup_midp_note_alarm_window_t4_ParamLimits

0x9550,	// (0x0005d86b) popup_midp_note_alarm_window_t4

0x9576,	// (0x0005d891) popup_midp_note_alarm_window_t5_ParamLimits

0x9576,	// (0x0005d891) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00063bbf) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00063bbf) popup_midp_note_alarm_window_t

0x9622,	// (0x0005d93d) wait_bar_pane_cp1_ParamLimits

0x9622,	// (0x0005d93d) wait_bar_pane_cp1

0xe26f,	// (0x0006258a) wait_anim_pane_copy1

0xe26f,	// (0x0006258a) wait_border_pane_copy1

0x900a,	// (0x0005d325) wait_border_pane_g1_copy1

0x32fb,	// (0x00057616) form_field_popup_pane_g1

0x5c50,	// (0x00059f6b) form_field_popup_pane_t1_ParamLimits

0xf122,	// (0x0006343d) input_focus_pane_cp7_ParamLimits

0xf150,	// (0x0006346b) list_form_pane_ParamLimits

0x3303,	// (0x0005761e) form_field_popup_wide_pane_g1

0x330b,	// (0x00057626) form_field_popup_wide_pane_t1_ParamLimits

0xf122,	// (0x0006343d) input_focus_pane_cp8_ParamLimits

0xf15c,	// (0x00063477) list_form_wide_pane_ParamLimits

0xa19d,	// (0x0005e4b8) aid_size_cell_graphic_pane

0x5ccf,	// (0x00059fea) data_form_pane_t1_ParamLimits

0x7121,	// (0x0005b43c) data_form_wide_pane_t1_ParamLimits

0x85c5,	// (0x0005c8e0) bg_status_flat_pane

0x533d,	// (0x00059658) title_pane_t1_ParamLimits

0xe285,	// (0x000625a0) title_pane_t2_ParamLimits

0xe2ab,	// (0x000625c6) title_pane_t3_ParamLimits

0xf557,	// (0x00063872) title_pane_t_ParamLimits

0x6028,	// (0x0005a343) level_1_signal_ParamLimits

0x6035,	// (0x0005a350) level_2_signal_ParamLimits

0x6042,	// (0x0005a35d) level_3_signal_ParamLimits

0x604f,	// (0x0005a36a) level_4_signal_ParamLimits

0x605c,	// (0x0005a377) level_5_signal_ParamLimits

0x6069,	// (0x0005a384) level_6_signal_ParamLimits

0x6076,	// (0x0005a391) level_7_signal_ParamLimits

0x6028,	// (0x0005a343) level_1_battery_ParamLimits

0x6035,	// (0x0005a350) level_2_battery_ParamLimits

0x6042,	// (0x0005a35d) level_3_battery_ParamLimits

0x604f,	// (0x0005a36a) level_4_battery_ParamLimits

0x605c,	// (0x0005a377) level_5_battery_ParamLimits

0x6069,	// (0x0005a384) level_6_battery_ParamLimits

0x6076,	// (0x0005a391) level_7_battery_ParamLimits

0x922a,	// (0x0005d545) bg_status_flat_pane_g1

0x9232,	// (0x0005d54d) bg_status_flat_pane_g2

0x923a,	// (0x0005d555) bg_status_flat_pane_g3

0x9242,	// (0x0005d55d) bg_status_flat_pane_g4

0x924a,	// (0x0005d565) bg_status_flat_pane_g5

0x9252,	// (0x0005d56d) bg_status_flat_pane_g6

0x925a,	// (0x0005d575) bg_status_flat_pane_g7

0x53ad,	// (0x000596c8) tabs_3_active_pane_t1_ParamLimits

0x53ad,	// (0x000596c8) tabs_3_passive_pane_t1_ParamLimits

0x53c7,	// (0x000596e2) tabs_4_active_pane_t1_ParamLimits

0x53c7,	// (0x000596e2) tabs_4_1_passive_pane_t1_ParamLimits

0x5d7f,	// (0x0005a09a) tabs_2_active_pane_t1_ParamLimits

0x5d7f,	// (0x0005a09a) tabs_2_passive_pane_t1_ParamLimits

0x1a10,	// (0x00055d2b) bg_active_tab_pane_cp4_ParamLimits

0x5d91,	// (0x0005a0ac) tabs_2_long_active_pane_t1_ParamLimits

0x5da4,	// (0x0005a0bf) bg_passive_tab_pane_cp4_ParamLimits

0x6dd9,	// (0x0005b0f4) list_single_midp_graphic_pane_t1_ParamLimits

0x1a10,	// (0x00055d2b) bg_active_tab_pane_cp5_ParamLimits

0x5db0,	// (0x0005a0cb) tabs_3_long_active_pane_t1_ParamLimits

0x5da4,	// (0x0005a0bf) bg_passive_tab_pane_cp5_ParamLimits

0x6dd9,	// (0x0005b0f4) list_single_midp_graphic_pane_t1

0x85c5,	// (0x0005c8e0) bg_status_flat_pane_ParamLimits

0x868a,	// (0x0005c9a5) indicator_pane_cp2_ParamLimits

0x868a,	// (0x0005c9a5) indicator_pane_cp2

0x87cd,	// (0x0005cae8) navi_pane_srt_ParamLimits

0x87cd,	// (0x0005cae8) navi_pane_srt

0x87f1,	// (0x0005cb0c) popup_clock_digital_analogue_window_cp1

0xe301,	// (0x0006261c) indicator_pane_t1

0x36bb,	// (0x000579d6) copy_highlight_pane

0x36bb,	// (0x000579d6) cursor_graphics_pane

0x36bb,	// (0x000579d6) graphic_within_text_pane

0x36bb,	// (0x000579d6) link_highlight_pane

0x9a49,	// (0x0005dd64) popup_preview_text_window_t5_ParamLimits

0x9a49,	// (0x0005dd64) popup_preview_text_window_t5

0x3728,	// (0x00057a43) cursor_digital_pane

0x3728,	// (0x00057a43) cursor_primary_pane

0x3739,	// (0x00057a54) cursor_primary_small_pane

0x3741,	// (0x00057a5c) cursor_secondary_pane

0x3749,	// (0x00057a64) cursor_title_pane

0x3728,	// (0x00057a43) link_highlight_digital_pane

0x3730,	// (0x00057a4b) link_highlight_primary_pane

0x3739,	// (0x00057a54) link_highlight_primary_small_pane

0x3741,	// (0x00057a5c) link_highlight_secondary_pane

0x3749,	// (0x00057a64) link_highlight_title_pane

0x3728,	// (0x00057a43) copy_highlight_digital_pane

0x3728,	// (0x00057a43) copy_highlight_primary_pane

0x3739,	// (0x00057a54) copy_highlight_primary_small_pane

0x3741,	// (0x00057a5c) copy_highlight_secondary_pane

0x3749,	// (0x00057a64) copy_highlight_title_pane

0x3741,	// (0x00057a5c) graphic_text_digital_pane

0x92c8,	// (0x0005d5e3) graphic_text_primary_pane

0x92d1,	// (0x0005d5ec) graphic_text_primary_small_pane

0x3739,	// (0x00057a54) graphic_text_secondary_pane

0x3728,	// (0x00057a43) graphic_text_title_pane

0x64d1,	// (0x0005a7ec) cursor_primary_pane_g1

0x92ba,	// (0x0005d5d5) cursor_text_primary_t1

0x92a2,	// (0x0005d5bd) cursor_primary_small_pane_g1

0x92ac,	// (0x0005d5c7) cursor_text_primary_small_t1

0x928a,	// (0x0005d5a5) cursor_primary_small_pane_g1_copy1

0x9294,	// (0x0005d5af) cursor_text_primary_small_t1_copy1

0x9272,	// (0x0005d58d) cursor_text_title_t1

0x9280,	// (0x0005d59b) cursor_title_pane_g1

0x64d1,	// (0x0005a7ec) cursor_digital_pane_g1

0x3751,	// (0x00057a6c) cursor_text_digital_t1

0x375f,	// (0x00057a7a) link_highlight_primary_pane_g1

0x921b,	// (0x0005d536) link_highlight_primary_pane_t1

0x375f,	// (0x00057a7a) link_highlight_primary_small_pane_g1

0x3767,	// (0x00057a82) link_highlight_primary_small_pane_t1

0x3776,	// (0x00057a91) link_highlight_secondary_pane_g1

0x377e,	// (0x00057a99) link_highlight_secondary_pane_t1

0x918f,	// (0x0005d4aa) link_highlight_title_pane_g1

0x9197,	// (0x0005d4b2) link_highlight_title_pane_t1

0x9178,	// (0x0005d493) link_highlight_digital_pane_g1

0x9180,	// (0x0005d49b) link_highlight_digital_pane_t1

0x9040,	// (0x0005d35b) copy_highlight_primary_pane_g1

0x9057,	// (0x0005d372) copy_highlight_primary_pane_t1

0x9040,	// (0x0005d35b) copy_highlight_primary_small_pane_g1

0x9048,	// (0x0005d363) copy_highlight_primary_small_pane_t1

0x378d,	// (0x00057aa8) copy_highlight_secondary_pane_g1

0x3795,	// (0x00057ab0) copy_highlight_secondary_pane_t1

0x9029,	// (0x0005d344) copy_highlight_title_pane_g1

0x9031,	// (0x0005d34c) copy_highlight_title_pane_t1

0x9040,	// (0x0005d35b) copy_highlight_digital_pane_g1

0xa4f6,	// (0x0005e811) copy_highlight_digital_pane_t1

0xa44a,	// (0x0005e765) graphic_text_primary_pane_g1

0xa4da,	// (0x0005e7f5) graphic_text_primary_pane_t1

0xa4e8,	// (0x0005e803) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00063cee) graphic_text_primary_pane_t

0xa4b6,	// (0x0005e7d1) graphic_text_primary_small_pane_g1

0xa4be,	// (0x0005e7d9) graphic_text_primary_small_pane_t1

0xa4cc,	// (0x0005e7e7) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00063ce9) graphic_text_primary_small_pane_t

0xa492,	// (0x0005e7ad) graphic_text_secondary_pane_g1

0xa49a,	// (0x0005e7b5) graphic_text_secondary_pane_t1

0xa4a8,	// (0x0005e7c3) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00063ce4) graphic_text_secondary_pane_t

0xa46e,	// (0x0005e789) graphic_text_title_pane_g1

0xa476,	// (0x0005e791) graphic_text_title_pane_t1

0xa484,	// (0x0005e79f) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00063cdf) graphic_text_title_pane_t

0xa44a,	// (0x0005e765) graphic_text_digital_pane_g1

0xa452,	// (0x0005e76d) graphic_text_digital_pane_t1

0xa460,	// (0x0005e77b) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00063cda) graphic_text_digital_pane_t

0xe2bd,	// (0x000625d8) navi_icon_pane_srt_ParamLimits

0xe2bd,	// (0x000625d8) navi_icon_pane_srt

0xe26f,	// (0x0006258a) navi_midp_pane_srt

0xe26f,	// (0x0006258a) navi_navi_pane_srt

0xe2bd,	// (0x000625d8) navi_text_pane_srt_ParamLimits

0xe2bd,	// (0x000625d8) navi_text_pane_srt

0xa415,	// (0x0005e730) navi_navi_icon_text_pane_srt

0xa41d,	// (0x0005e738) navi_navi_pane_srt_g1_ParamLimits

0xa41d,	// (0x0005e738) navi_navi_pane_srt_g1

0xa42f,	// (0x0005e74a) navi_navi_pane_srt_g2_ParamLimits

0xa42f,	// (0x0005e74a) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00063cd5) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00063cd5) navi_navi_pane_srt_g

0xa441,	// (0x0005e75c) navi_navi_tabs_pane_srt

0xa415,	// (0x0005e730) navi_navi_text_pane_srt

0xa415,	// (0x0005e730) navi_navi_volume_pane_srt

0xa406,	// (0x0005e721) navi_navi_text_pane_srt_t1

0x7208,	// (0x0005b523) navi_navi_volume_pane_srt_g1

0x7210,	// (0x0005b52b) volume_small_pane_srt_ParamLimits

0x7210,	// (0x0005b52b) volume_small_pane_srt

0x64db,	// (0x0005a7f6) volume_small_pane_srt_g1_ParamLimits

0x64db,	// (0x0005a7f6) volume_small_pane_srt_g1

0x64eb,	// (0x0005a806) volume_small_pane_srt_g2_ParamLimits

0x64eb,	// (0x0005a806) volume_small_pane_srt_g2

0x64fc,	// (0x0005a817) volume_small_pane_srt_g3_ParamLimits

0x64fc,	// (0x0005a817) volume_small_pane_srt_g3

0x650d,	// (0x0005a828) volume_small_pane_srt_g4_ParamLimits

0x650d,	// (0x0005a828) volume_small_pane_srt_g4

0x651e,	// (0x0005a839) volume_small_pane_srt_g5_ParamLimits

0x651e,	// (0x0005a839) volume_small_pane_srt_g5

0x652f,	// (0x0005a84a) volume_small_pane_srt_g6_ParamLimits

0x652f,	// (0x0005a84a) volume_small_pane_srt_g6

0x6540,	// (0x0005a85b) volume_small_pane_srt_g7_ParamLimits

0x6540,	// (0x0005a85b) volume_small_pane_srt_g7

0x6551,	// (0x0005a86c) volume_small_pane_srt_g8_ParamLimits

0x6551,	// (0x0005a86c) volume_small_pane_srt_g8

0x6562,	// (0x0005a87d) volume_small_pane_srt_g9_ParamLimits

0x6562,	// (0x0005a87d) volume_small_pane_srt_g9

0x6573,	// (0x0005a88e) volume_small_pane_srt_g10_ParamLimits

0x6573,	// (0x0005a88e) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00063a7d) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00063a7d) volume_small_pane_srt_g

0xed9a,	// (0x000630b5) query_popup_data_pane_cp2

0xa3ec,	// (0x0005e707) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa3ec,	// (0x0005e707) navi_navi_icon_text_pane_srt_t1

0x92c8,	// (0x0005d5e3) navi_tabs_2_long_pane_srt

0x92c8,	// (0x0005d5e3) navi_tabs_2_pane_srt

0x92c8,	// (0x0005d5e3) navi_tabs_3_long_pane_srt

0x92c8,	// (0x0005d5e3) navi_tabs_3_pane_srt

0x92c8,	// (0x0005d5e3) navi_tabs_4_pane_srt

0x71e8,	// (0x0005b503) tabs_2_active_pane_srt_ParamLimits

0x71e8,	// (0x0005b503) tabs_2_active_pane_srt

0x71f8,	// (0x0005b513) tabs_2_passive_pane_srt_ParamLimits

0x71f8,	// (0x0005b513) tabs_2_passive_pane_srt

0x84d6,	// (0x0005c7f1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x84d6,	// (0x0005c7f1) bg_passive_tab_pane_cp1_srt

0xa3b8,	// (0x0005e6d3) bg_passive_tab_pane_g1_cp1_srt

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp1_srt

0xa3c1,	// (0x0005e6dc) bg_passive_tab_pane_g3_cp1_srt

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp1_srt_ParamLimits

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp1_srt

0xa3ca,	// (0x0005e6e5) tabs_2_active_pane_srt_g1

0xa3d2,	// (0x0005e6ed) tabs_2_active_pane_srt_t1_ParamLimits

0xa3d2,	// (0x0005e6ed) tabs_2_active_pane_srt_t1

0xa3b8,	// (0x0005e6d3) bg_active_tab_pane_g1_cp1_srt

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp1_srt

0xa3c1,	// (0x0005e6dc) bg_active_tab_pane_g3_cp1_srt

0x71b5,	// (0x0005b4d0) tabs_3_active_pane_srt_ParamLimits

0x71b5,	// (0x0005b4d0) tabs_3_active_pane_srt

0x71c6,	// (0x0005b4e1) tabs_3_passive_pane_cp_srt_ParamLimits

0x71c6,	// (0x0005b4e1) tabs_3_passive_pane_cp_srt

0x71d7,	// (0x0005b4f2) tabs_3_passive_pane_srt_ParamLimits

0x71d7,	// (0x0005b4f2) tabs_3_passive_pane_srt

0x84d6,	// (0x0005c7f1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x84d6,	// (0x0005c7f1) bg_passive_tab_pane_cp2_srt

0x37ad,	// (0x00057ac8) bg_passive_tab_pane_g1_cp2_srt

0x3361,	// (0x0005767c) bg_passive_tab_pane_g2_cp2_srt

0x37a4,	// (0x00057abf) bg_passive_tab_pane_g3_cp2_srt

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp2_srt_ParamLimits

0xe2bd,	// (0x000625d8) bg_active_tab_pane_cp2_srt

0xa39e,	// (0x0005e6b9) tabs_3_active_pane_srt_g1

0xa3a6,	// (0x0005e6c1) tabs_3_active_pane_srt_t1_ParamLimits

0xa3a6,	// (0x0005e6c1) tabs_3_active_pane_srt_t1

0x37ad,	// (0x00057ac8) bg_active_tab_pane_g1_cp2_srt

0x3361,	// (0x0005767c) bg_active_tab_pane_g2_cp2_srt

0x37a4,	// (0x00057abf) bg_active_tab_pane_g3_cp2_srt

0x716d,	// (0x0005b488) tabs_4_active_pane_srt_ParamLimits

0x716d,	// (0x0005b488) tabs_4_active_pane_srt

0x717f,	// (0x0005b49a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x717f,	// (0x0005b49a) tabs_4_passive_pane_cp2_srt

0x6702,	// (0x0005aa1d) aid_size_cell_toolbar

0x5da4,	// (0x0005a0bf) main_idle_act_pane_ParamLimits

0x68e3,	// (0x0005abfe) popup_large_graphic_colour_window_ParamLimits

0x6c8a,	// (0x0005afa5) popup_toolbar_window_ParamLimits

0x6c8a,	// (0x0005afa5) popup_toolbar_window

0x9fda,	// (0x0005e2f5) list_single_graphic_2heading_pane_ParamLimits

0x9fda,	// (0x0005e2f5) list_single_graphic_2heading_pane

0xf423,	// (0x0006373e) aid_size_cell_apps_grid_lsc_pane

0xf435,	// (0x00063750) aid_size_cell_apps_grid_prt_pane

0x84d6,	// (0x0005c7f1) bg_wml_button_pane_cp1_ParamLimits

0x84d6,	// (0x0005c7f1) bg_wml_button_pane_cp1

0x8cac,	// (0x0005cfc7) form_midp_field_text_pane_t1_ParamLimits

0x8a9e,	// (0x0005cdb9) input_focus_pane_cp050_ParamLimits

0x8cd7,	// (0x0005cff2) list_midp_form_text_pane_ParamLimits

0x8c89,	// (0x0005cfa4) input_focus_pane_cp051_ParamLimits

0x8c9d,	// (0x0005cfb8) list_midp_choice_pane_ParamLimits

0x8b57,	// (0x0005ce72) list_single_2graphic_pane_cp3_ParamLimits

0x8b57,	// (0x0005ce72) list_single_2graphic_pane_cp3

0x8b6d,	// (0x0005ce88) list_single_midp_graphic_pane_ParamLimits

0x8b6d,	// (0x0005ce88) list_single_midp_graphic_pane

0x4e7a,	// (0x00059195) list_single_graphic_2heading_pane_g1_ParamLimits

0x4e7a,	// (0x00059195) list_single_graphic_2heading_pane_g1

0x4e86,	// (0x000591a1) list_single_graphic_2heading_pane_g4_ParamLimits

0x4e86,	// (0x000591a1) list_single_graphic_2heading_pane_g4

0x4e92,	// (0x000591ad) list_single_graphic_2heading_pane_g5_ParamLimits

0x4e92,	// (0x000591ad) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00063ad0) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00063ad0) list_single_graphic_2heading_pane_g

0x4e9e,	// (0x000591b9) list_single_graphic_2heading_pane_t1_ParamLimits

0x4e9e,	// (0x000591b9) list_single_graphic_2heading_pane_t1

0x4eb2,	// (0x000591cd) list_single_graphic_2heading_pane_t2_ParamLimits

0x4eb2,	// (0x000591cd) list_single_graphic_2heading_pane_t2

0x4ece,	// (0x000591e9) list_single_graphic_2heading_pane_t3_ParamLimits

0x4ece,	// (0x000591e9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00063ad7) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00063ad7) list_single_graphic_2heading_pane_t

0x8944,	// (0x0005cc5f) bg_popup_sub_pane_cp2

0x896e,	// (0x0005cc89) grid_toobar_pane

0x6d49,	// (0x0005b064) cell_toolbar_pane_ParamLimits

0x6d49,	// (0x0005b064) cell_toolbar_pane

0x89b6,	// (0x0005ccd1) cell_toolbar_pane_g1_ParamLimits

0x89b6,	// (0x0005ccd1) cell_toolbar_pane_g1

0x89ca,	// (0x0005cce5) cell_toolbar_pane_g2_ParamLimits

0x89ca,	// (0x0005cce5) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00063ae5) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00063ae5) cell_toolbar_pane_g

0x89ec,	// (0x0005cd07) grid_highlight_pane_cp2_ParamLimits

0x89ec,	// (0x0005cd07) grid_highlight_pane_cp2

0x8a06,	// (0x0005cd21) toolbar_button_pane

0x8a12,	// (0x0005cd2d) toolbar_button_pane_g1

0x8a1a,	// (0x0005cd35) toolbar_button_pane_g2

0x8a22,	// (0x0005cd3d) toolbar_button_pane_g3

0x8a2a,	// (0x0005cd45) toolbar_button_pane_g4

0x8a32,	// (0x0005cd4d) toolbar_button_pane_g5

0x8a3a,	// (0x0005cd55) toolbar_button_pane_g6

0x8a42,	// (0x0005cd5d) toolbar_button_pane_g7

0x8a4a,	// (0x0005cd65) toolbar_button_pane_g8

0x8a52,	// (0x0005cd6d) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00063aea) toolbar_button_pane_g

0x6d81,	// (0x0005b09c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6d81,	// (0x0005b09c) list_single_2graphic_pane_g1_cp3

0x6d8d,	// (0x0005b0a8) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6d8d,	// (0x0005b0a8) list_single_2graphic_pane_g2_cp3

0x6d9e,	// (0x0005b0b9) list_single_2graphic_pane_g3_cp3

0x6da6,	// (0x0005b0c1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6da6,	// (0x0005b0c1) list_single_2graphic_pane_g4_cp3

0x6db2,	// (0x0005b0cd) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6db2,	// (0x0005b0cd) list_single_2graphic_pane_t1_cp3

0x6dcd,	// (0x0005b0e8) list_single_midp_graphic_pane_g2_ParamLimits

0x6dcd,	// (0x0005b0e8) list_single_midp_graphic_pane_g2

0x4e6a,	// (0x00059185) aid_zoom_text_primary

0x4e72,	// (0x0005918d) aid_zoom_text_secondary

0x8418,	// (0x0005c733) status_small_pane_g7_ParamLimits

0x8418,	// (0x0005c733) status_small_pane_g7

0x843b,	// (0x0005c756) status_small_pane_t1_ParamLimits

0x5318,	// (0x00059633) title_pane_g2

0x0003,

0xf54e,	// (0x00063869) title_pane_g

0x5581,	// (0x0005989c) aid_size_cell_colour_1_pane_ParamLimits

0x5581,	// (0x0005989c) aid_size_cell_colour_1_pane

0x5595,	// (0x000598b0) aid_size_cell_colour_2_pane_ParamLimits

0x5595,	// (0x000598b0) aid_size_cell_colour_2_pane

0x55a9,	// (0x000598c4) aid_size_cell_colour_3_pane_ParamLimits

0x55a9,	// (0x000598c4) aid_size_cell_colour_3_pane

0x55bd,	// (0x000598d8) aid_size_cell_colour_4_pane_ParamLimits

0x55bd,	// (0x000598d8) aid_size_cell_colour_4_pane

0x5dfe,	// (0x0005a119) title_pane_stacon_g1_ParamLimits

0x5dfe,	// (0x0005a119) title_pane_stacon_g1

0x90ae,	// (0x0005d3c9) popup_note_wait_window_g3_ParamLimits

0x90ae,	// (0x0005d3c9) popup_note_wait_window_g3

0x9125,	// (0x0005d440) popup_note_wait_window_t5_ParamLimits

0x9125,	// (0x0005d440) popup_note_wait_window_t5

0xe26f,	// (0x0006258a) main_feb_china_hwr_fs_writing_pane

0x67aa,	// (0x0005aac5) popup_feb_china_hwr_fs_window_ParamLimits

0x67aa,	// (0x0005aac5) popup_feb_china_hwr_fs_window

0x6def,	// (0x0005b10a) aid_size_cell_hwr_fs_ParamLimits

0x6def,	// (0x0005b10a) aid_size_cell_hwr_fs

0x8a9e,	// (0x0005cdb9) bg_popup_sub_pane_cp3_ParamLimits

0x8a9e,	// (0x0005cdb9) bg_popup_sub_pane_cp3

0x6e04,	// (0x0005b11f) grid_hwr_fs_pane_ParamLimits

0x6e04,	// (0x0005b11f) grid_hwr_fs_pane

0x6e1c,	// (0x0005b137) linegrid_hwr_fs_pane_ParamLimits

0x6e1c,	// (0x0005b137) linegrid_hwr_fs_pane

0x6e2c,	// (0x0005b147) cell_hwr_fs_pane_ParamLimits

0x6e2c,	// (0x0005b147) cell_hwr_fs_pane

0x8aaa,	// (0x0005cdc5) linegrid_hwr_fs_pane_g1_ParamLimits

0x8aaa,	// (0x0005cdc5) linegrid_hwr_fs_pane_g1

0x8ab6,	// (0x0005cdd1) linegrid_hwr_fs_pane_g2_ParamLimits

0x8ab6,	// (0x0005cdd1) linegrid_hwr_fs_pane_g2

0x8ac8,	// (0x0005cde3) linegrid_hwr_fs_pane_g3_ParamLimits

0x8ac8,	// (0x0005cde3) linegrid_hwr_fs_pane_g3

0x6e50,	// (0x0005b16b) linegrid_hwr_fs_pane_g4_ParamLimits

0x6e50,	// (0x0005b16b) linegrid_hwr_fs_pane_g4

0x6e6e,	// (0x0005b189) linegrid_hwr_fs_pane_g5_ParamLimits

0x6e6e,	// (0x0005b189) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00063b15) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00063b15) linegrid_hwr_fs_pane_g

0x8ad4,	// (0x0005cdef) cell_hwr_fs_pane_g1_ParamLimits

0x8ad4,	// (0x0005cdef) cell_hwr_fs_pane_g1

0x887f,	// (0x0005cb9a) cell_hwr_fs_pane_g2_ParamLimits

0x887f,	// (0x0005cb9a) cell_hwr_fs_pane_g2

0x8aea,	// (0x0005ce05) cell_hwr_fs_pane_g3_ParamLimits

0x8aea,	// (0x0005ce05) cell_hwr_fs_pane_g3

0x8af7,	// (0x0005ce12) cell_hwr_fs_pane_g4_ParamLimits

0x8af7,	// (0x0005ce12) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00063b20) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00063b20) cell_hwr_fs_pane_g

0x6e84,	// (0x0005b19f) cell_hwr_fs_pane_t1

0xe26f,	// (0x0006258a) grid_highlight_pane_cp6

0xe26f,	// (0x0006258a) main_idle_act2_pane

0xf232,	// (0x0006354d) aid_inside_area_popup_secondary

0x975e,	// (0x0005da79) aid_inside_area_window_primary_ParamLimits

0x975e,	// (0x0005da79) aid_inside_area_window_primary

0xa505,	// (0x0005e820) ai2_news_ticker_pane

0xa50d,	// (0x0005e828) aid_size_cell_ai1_link_ParamLimits

0xa50d,	// (0x0005e828) aid_size_cell_ai1_link

0xa527,	// (0x0005e842) popup_ai2_data_window_ParamLimits

0xa527,	// (0x0005e842) popup_ai2_data_window

0xa545,	// (0x0005e860) popup_ai2_link_window_ParamLimits

0xa545,	// (0x0005e860) popup_ai2_link_window

0x8a9e,	// (0x0005cdb9) bg_popup_sub_pane_cp4_ParamLimits

0x8a9e,	// (0x0005cdb9) bg_popup_sub_pane_cp4

0xa55b,	// (0x0005e876) grid_ai2_link_pane_ParamLimits

0xa55b,	// (0x0005e876) grid_ai2_link_pane

0xa572,	// (0x0005e88d) popup_ai2_link_window_g1_ParamLimits

0xa572,	// (0x0005e88d) popup_ai2_link_window_g1

0xa57e,	// (0x0005e899) popup_ai2_link_window_g2_ParamLimits

0xa57e,	// (0x0005e899) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00063cf3) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00063cf3) popup_ai2_link_window_g

0xa58f,	// (0x0005e8aa) ai2_mp_button_pane

0xa597,	// (0x0005e8b2) ai2_mp_volume_pane

0x8c89,	// (0x0005cfa4) bg_popup_sub_pane_cp5_ParamLimits

0x8c89,	// (0x0005cfa4) bg_popup_sub_pane_cp5

0xa59f,	// (0x0005e8ba) heading_ai2_gene_pane_ParamLimits

0xa59f,	// (0x0005e8ba) heading_ai2_gene_pane

0xa5ab,	// (0x0005e8c6) list_ai2_gene_pane_ParamLimits

0xa5ab,	// (0x0005e8c6) list_ai2_gene_pane

0xa5f3,	// (0x0005e90e) cell_ai2_link_pane_ParamLimits

0xa5f3,	// (0x0005e90e) cell_ai2_link_pane

0xa609,	// (0x0005e924) cell_ai2_link_pane_g1

0xe26f,	// (0x0006258a) grid_highlight_pane_cp7

0x7225,	// (0x0005b540) ai2_mp_volume_pane_g1

0xa6dc,	// (0x0005e9f7) ai2_mp_volume_pane_g2

0xa651,	// (0x0005e96c) list_ai2_gene_pane_t1

0xa6e4,	// (0x0005e9ff) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00063d0c) ai2_mp_volume_pane_g

0x722d,	// (0x0005b548) volume_small_pane_cp3

0xa6ec,	// (0x0005ea07) aid_size_cell_ai2_button

0xa6f4,	// (0x0005ea0f) grid_ai2_button_pane

0xa6fd,	// (0x0005ea18) cell_ai2_button_pane_ParamLimits

0xa6fd,	// (0x0005ea18) cell_ai2_button_pane

0xe265,	// (0x00062580) cell_ai2_button_pane_g1

0xe26f,	// (0x0006258a) grid_highlight_pane_cp8

0xa69c,	// (0x0005e9b7) ai2_gene_pane_t1_ParamLimits

0xa69c,	// (0x0005e9b7) ai2_gene_pane_t1

0x66f8,	// (0x0005aa13) aid_height_parent_landscape

0x9de3,	// (0x0005e0fe) aid_height_set_list

0x9df4,	// (0x0005e10f) aid_size_parent

0xa19d,	// (0x0005e4b8) aid_size_cell_graphic_pane_ParamLimits

0xa5bb,	// (0x0005e8d6) popup_ai2_data_window_g1_ParamLimits

0xa5bb,	// (0x0005e8d6) popup_ai2_data_window_g1

0xa5c7,	// (0x0005e8e2) ai2_news_ticker_pane_g1

0xa5cf,	// (0x0005e8ea) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00063cf8) ai2_news_ticker_pane_g

0xa5d7,	// (0x0005e8f2) ai2_news_ticker_pane_t1

0xa5e5,	// (0x0005e900) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00063cfd) ai2_news_ticker_pane_t

0xa612,	// (0x0005e92d) heading_ai2_gene_pane_g1

0xa61a,	// (0x0005e935) heading_ai2_gene_pane_t1_ParamLimits

0xa61a,	// (0x0005e935) heading_ai2_gene_pane_t1

0xa62f,	// (0x0005e94a) list_highlight_pane_cp6

0xa637,	// (0x0005e952) ai2_gene_pane_ParamLimits

0xa637,	// (0x0005e952) ai2_gene_pane

0xa65f,	// (0x0005e97a) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00063d02) list_ai2_gene_pane_t

0xa66d,	// (0x0005e988) list_highlight_pane_cp8_ParamLimits

0xa66d,	// (0x0005e988) list_highlight_pane_cp8

0xa67e,	// (0x0005e999) ai2_gene_pane_g1_ParamLimits

0xa67e,	// (0x0005e999) ai2_gene_pane_g1

0xa690,	// (0x0005e9ab) ai2_gene_pane_g2_ParamLimits

0xa690,	// (0x0005e9ab) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00063d07) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00063d07) ai2_gene_pane_g

0xf0b8,	// (0x000633d3) scroll_pane_cp12

0x66b5,	// (0x0005a9d0) control_pane_t3_ParamLimits

0x66b5,	// (0x0005a9d0) control_pane_t3

0x842c,	// (0x0005c747) status_small_pane_g8_ParamLimits

0x842c,	// (0x0005c747) status_small_pane_g8

0x68a8,	// (0x0005abc3) popup_find_window_ParamLimits

0x6ad3,	// (0x0005adee) popup_note_image_window_ParamLimits

0x3894,	// (0x00057baf) list_double2_graphic_pane_vc_g1_ParamLimits

0x3894,	// (0x00057baf) list_double2_graphic_pane_vc_g1

0x3253,	// (0x0005756e) list_double2_graphic_pane_vc_g2_ParamLimits

0x3253,	// (0x0005756e) list_double2_graphic_pane_vc_g2

0x89aa,	// (0x0005ccc5) list_double2_graphic_pane_vc_g3_ParamLimits

0x89aa,	// (0x0005ccc5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00063ade) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00063ade) list_double2_graphic_pane_vc_g

0x38a0,	// (0x00057bbb) list_double2_graphic_pane_vc_t1_ParamLimits

0x38a0,	// (0x00057bbb) list_double2_graphic_pane_vc_t1

0x3253,	// (0x0005756e) list_single_heading_pane_vc_g1_ParamLimits

0x3253,	// (0x0005756e) list_single_heading_pane_vc_g1

0x89aa,	// (0x0005ccc5) list_single_heading_pane_vc_g2_ParamLimits

0x89aa,	// (0x0005ccc5) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00063aff) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00063aff) list_single_heading_pane_vc_g

0x38b6,	// (0x00057bd1) list_single_heading_pane_vc_t1_ParamLimits

0x38b6,	// (0x00057bd1) list_single_heading_pane_vc_t1

0x3d29,	// (0x00058044) list_single_heading_pane_vc_t2_ParamLimits

0x3d29,	// (0x00058044) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00063b04) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00063b04) list_single_heading_pane_vc_t

0x8a5a,	// (0x0005cd75) list_setting_number_pane_vc_g1_ParamLimits

0x8a5a,	// (0x0005cd75) list_setting_number_pane_vc_g1

0x8a66,	// (0x0005cd81) list_setting_number_pane_vc_g2_ParamLimits

0x8a66,	// (0x0005cd81) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00063b09) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00063b09) list_setting_number_pane_vc_g

0x3d3b,	// (0x00058056) list_setting_number_pane_vc_t1_ParamLimits

0x3d3b,	// (0x00058056) list_setting_number_pane_vc_t1

0x3d4f,	// (0x0005806a) list_setting_number_pane_vc_t2_ParamLimits

0x3d4f,	// (0x0005806a) list_setting_number_pane_vc_t2

0x3d6b,	// (0x00058086) list_setting_number_pane_vc_t3_ParamLimits

0x3d6b,	// (0x00058086) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00063b0e) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00063b0e) list_setting_number_pane_vc_t

0x3d99,	// (0x000580b4) set_value_pane_vc_ParamLimits

0x3d99,	// (0x000580b4) set_value_pane_vc

0x9fda,	// (0x0005e2f5) list_double2_graphic_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double2_graphic_pane_vc

0x9fda,	// (0x0005e2f5) list_double2_large_graphic_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double2_large_graphic_pane_vc

0x9fda,	// (0x0005e2f5) list_double2_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double2_pane_vc

0x9fda,	// (0x0005e2f5) list_double_graphic_heading_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double_graphic_heading_pane_vc

0x9fda,	// (0x0005e2f5) list_double_graphic_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double_graphic_pane_vc

0x9fda,	// (0x0005e2f5) list_double_heading_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double_heading_pane_vc

0x9fee,	// (0x0005e309) list_double_large_graphic_pane_vc_ParamLimits

0x9fee,	// (0x0005e309) list_double_large_graphic_pane_vc

0x9fda,	// (0x0005e2f5) list_double_number_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double_number_pane_vc

0x9fda,	// (0x0005e2f5) list_double_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double_pane_vc

0x9fda,	// (0x0005e2f5) list_double_time_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_double_time_pane_vc

0x9fda,	// (0x0005e2f5) list_setting_number_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_setting_number_pane_vc

0x9fda,	// (0x0005e2f5) list_setting_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_setting_pane_vc

0x9fda,	// (0x0005e2f5) list_single_graphic_heading_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_single_graphic_heading_pane_vc

0x9fda,	// (0x0005e2f5) list_single_heading_pane_vc_ParamLimits

0x9fda,	// (0x0005e2f5) list_single_heading_pane_vc

0xa010,	// (0x0005e32b) list_single_number_heading_pane_vc_ParamLimits

0xa010,	// (0x0005e32b) list_single_number_heading_pane_vc

0x3894,	// (0x00057baf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3894,	// (0x00057baf) list_double_graphic_heading_pane_vc_g1

0xa1b5,	// (0x0005e4d0) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa1b5,	// (0x0005e4d0) list_double_graphic_heading_pane_vc_g2

0xa1c1,	// (0x0005e4dc) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa1c1,	// (0x0005e4dc) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x00063d13) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x00063d13) list_double_graphic_heading_pane_vc_g

0x3de2,	// (0x000580fd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3de2,	// (0x000580fd) list_double_graphic_heading_pane_vc_t1

0x3df8,	// (0x00058113) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3df8,	// (0x00058113) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00063d1a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00063d1a) list_double_graphic_heading_pane_vc_t

0x8a5a,	// (0x0005cd75) list_setting_pane_vc_g1_ParamLimits

0x8a5a,	// (0x0005cd75) list_setting_pane_vc_g1

0x8a66,	// (0x0005cd81) list_setting_pane_vc_g2_ParamLimits

0x8a66,	// (0x0005cd81) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00063b09) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00063b09) list_setting_pane_vc_g

0x3e16,	// (0x00058131) list_setting_pane_vc_t1_ParamLimits

0x3e16,	// (0x00058131) list_setting_pane_vc_t1

0x3e32,	// (0x0005814d) list_setting_pane_vc_t2_ParamLimits

0x3e32,	// (0x0005814d) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00063d48) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00063d48) list_setting_pane_vc_t

0x3d99,	// (0x000580b4) set_value_pane_cp_vc_ParamLimits

0x3d99,	// (0x000580b4) set_value_pane_cp_vc

0x3253,	// (0x0005756e) list_single_number_heading_pane_vc_g1_ParamLimits

0x3253,	// (0x0005756e) list_single_number_heading_pane_vc_g1

0x89aa,	// (0x0005ccc5) list_single_number_heading_pane_vc_g2_ParamLimits

0x89aa,	// (0x0005ccc5) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00063aff) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00063aff) list_single_number_heading_pane_vc_g

0x3e4e,	// (0x00058169) list_single_number_heading_pane_vc_t1_ParamLimits

0x3e4e,	// (0x00058169) list_single_number_heading_pane_vc_t1

0x3cef,	// (0x0005800a) list_single_number_heading_pane_vc_t2_ParamLimits

0x3cef,	// (0x0005800a) list_single_number_heading_pane_vc_t2

0x3d01,	// (0x0005801c) list_single_number_heading_pane_vc_t3_ParamLimits

0x3d01,	// (0x0005801c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00063d4d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00063d4d) list_single_number_heading_pane_vc_t

0x3894,	// (0x00057baf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3894,	// (0x00057baf) list_single_graphic_heading_pane_vc_g1

0x3253,	// (0x0005756e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3253,	// (0x0005756e) list_single_graphic_heading_pane_vc_g4

0x89aa,	// (0x0005ccc5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x89aa,	// (0x0005ccc5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00063ade) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00063ade) list_single_graphic_heading_pane_vc_g

0x3e64,	// (0x0005817f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3e64,	// (0x0005817f) list_single_graphic_heading_pane_vc_t1

0x3e7a,	// (0x00058195) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3e7a,	// (0x00058195) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x00063d54) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x00063d54) list_single_graphic_heading_pane_vc_t

0x3253,	// (0x0005756e) list_double2_pane_vc_g1_ParamLimits

0x3253,	// (0x0005756e) list_double2_pane_vc_g1

0x89aa,	// (0x0005ccc5) list_double2_pane_vc_g2_ParamLimits

0x89aa,	// (0x0005ccc5) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00063aff) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00063aff) list_double2_pane_vc_g

0x3dcc,	// (0x000580e7) list_double2_pane_vc_t1_ParamLimits

0x3dcc,	// (0x000580e7) list_double2_pane_vc_t1

0xa1cd,	// (0x0005e4e8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa1cd,	// (0x0005e4e8) list_double2_large_graphic_pane_vc_g1

0x3253,	// (0x0005756e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3253,	// (0x0005756e) list_double2_large_graphic_pane_vc_g2

0x89aa,	// (0x0005ccc5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x89aa,	// (0x0005ccc5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00063d59) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00063d59) list_double2_large_graphic_pane_vc_g

0x3d13,	// (0x0005802e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3d13,	// (0x0005802e) list_double2_large_graphic_pane_vc_t1

0xa1d9,	// (0x0005e4f4) list_double_time_pane_vc_g1_ParamLimits

0xa1d9,	// (0x0005e4f4) list_double_time_pane_vc_g1

0xa1e5,	// (0x0005e500) list_double_time_pane_vc_g2_ParamLimits

0xa1e5,	// (0x0005e500) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00063d60) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00063d60) list_double_time_pane_vc_g

0x3e8c,	// (0x000581a7) list_double_time_pane_vc_t1_ParamLimits

0x3e8c,	// (0x000581a7) list_double_time_pane_vc_t1

0x3eb6,	// (0x000581d1) list_double_time_pane_vc_t2_ParamLimits

0x3eb6,	// (0x000581d1) list_double_time_pane_vc_t2

0x3eff,	// (0x0005821a) list_double_time_pane_vc_t3_ParamLimits

0x3eff,	// (0x0005821a) list_double_time_pane_vc_t3

0x3f11,	// (0x0005822c) list_double_time_pane_vc_t4_ParamLimits

0x3f11,	// (0x0005822c) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x00063d65) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x00063d65) list_double_time_pane_vc_t

0x3253,	// (0x0005756e) list_double_pane_vc_g1_ParamLimits

0x3253,	// (0x0005756e) list_double_pane_vc_g1

0x89aa,	// (0x0005ccc5) list_double_pane_vc_g2_ParamLimits

0x89aa,	// (0x0005ccc5) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00063aff) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00063aff) list_double_pane_vc_g

0x3f25,	// (0x00058240) list_double_pane_vc_t1_ParamLimits

0x3f25,	// (0x00058240) list_double_pane_vc_t1

0x3f39,	// (0x00058254) list_double_pane_vc_t2_ParamLimits

0x3f39,	// (0x00058254) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00063d6e) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00063d6e) list_double_pane_vc_t

0x3253,	// (0x0005756e) list_double_number_pane_vc_g1_ParamLimits

0x3253,	// (0x0005756e) list_double_number_pane_vc_g1

0x89aa,	// (0x0005ccc5) list_double_number_pane_vc_g2_ParamLimits

0x89aa,	// (0x0005ccc5) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00063aff) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00063aff) list_double_number_pane_vc_g

0x3dba,	// (0x000580d5) list_double_number_pane_vc_t1_ParamLimits

0x3dba,	// (0x000580d5) list_double_number_pane_vc_t1

0x3f4f,	// (0x0005826a) list_double_number_pane_vc_t2_ParamLimits

0x3f4f,	// (0x0005826a) list_double_number_pane_vc_t2

0x3f39,	// (0x00058254) list_double_number_pane_vc_t3_ParamLimits

0x3f39,	// (0x00058254) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x00063d73) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x00063d73) list_double_number_pane_vc_t

0xa1f1,	// (0x0005e50c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa1f1,	// (0x0005e50c) list_double_large_graphic_pane_vc_g1

0xa213,	// (0x0005e52e) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa213,	// (0x0005e52e) list_double_large_graphic_pane_vc_g2

0xa227,	// (0x0005e542) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa227,	// (0x0005e542) list_double_large_graphic_pane_vc_g3

0x3f63,	// (0x0005827e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3f63,	// (0x0005827e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00063d7a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00063d7a) list_double_large_graphic_pane_vc_g

0x3f72,	// (0x0005828d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3f72,	// (0x0005828d) list_double_large_graphic_pane_vc_t1

0x3f8e,	// (0x000582a9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3f8e,	// (0x000582a9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00063d83) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00063d83) list_double_large_graphic_pane_vc_t

0xa1b5,	// (0x0005e4d0) list_double_heading_pane_vc_g1_ParamLimits

0xa1b5,	// (0x0005e4d0) list_double_heading_pane_vc_g1

0xa1c1,	// (0x0005e4dc) list_double_heading_pane_vc_g2_ParamLimits

0xa1c1,	// (0x0005e4dc) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00063d88) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00063d88) list_double_heading_pane_vc_g

0x3fae,	// (0x000582c9) list_double_heading_pane_vc_t1_ParamLimits

0x3fae,	// (0x000582c9) list_double_heading_pane_vc_t1

0x3fc0,	// (0x000582db) list_double_heading_pane_vc_t2_ParamLimits

0x3fc0,	// (0x000582db) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00063d8d) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00063d8d) list_double_heading_pane_vc_t

0x3fd8,	// (0x000582f3) list_double_graphic_pane_vc_g1_ParamLimits

0x3fd8,	// (0x000582f3) list_double_graphic_pane_vc_g1

0xa236,	// (0x0005e551) list_double_graphic_pane_vc_g2_ParamLimits

0xa236,	// (0x0005e551) list_double_graphic_pane_vc_g2

0x3253,	// (0x0005756e) list_double_graphic_pane_vc_g3_ParamLimits

0x3253,	// (0x0005756e) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x00063d92) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x00063d92) list_double_graphic_pane_vc_g

0x3fe4,	// (0x000582ff) list_double_graphic_pane_vc_t1_ParamLimits

0x3fe4,	// (0x000582ff) list_double_graphic_pane_vc_t1

0x400e,	// (0x00058329) list_double_graphic_pane_vc_t2_ParamLimits

0x400e,	// (0x00058329) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00063d9b) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00063d9b) list_double_graphic_pane_vc_t

0x4f1a,	// (0x00059235) aid_size_cell_fastswap

0x4f22,	// (0x0005923d) aid_size_cell_touch_ParamLimits

0x4f22,	// (0x0005923d) aid_size_cell_touch

0x518d,	// (0x000594a8) popup_fast_swap_wide_window_ParamLimits

0x518d,	// (0x000594a8) popup_fast_swap_wide_window

0x52ab,	// (0x000595c6) touch_pane_ParamLimits

0x52ab,	// (0x000595c6) touch_pane

0xf10e,	// (0x00063429) button_value_adjust_pane_cp2

0x326d,	// (0x00057588) button_value_adjust_pane_cp4

0x3275,	// (0x00057590) form_field_data_pane_cp2

0x5c00,	// (0x00059f1b) form_field_data_wide_pane_cp2

0xf45a,	// (0x00063775) bg_scroll_pane_ParamLimits

0x5fff,	// (0x0005a31a) scroll_handle_pane_ParamLimits

0x6013,	// (0x0005a32e) scroll_sc2_down_pane_ParamLimits

0x6013,	// (0x0005a32e) scroll_sc2_down_pane

0xf48b,	// (0x000637a6) scroll_sc2_up_pane_ParamLimits

0xf48b,	// (0x000637a6) scroll_sc2_up_pane

0xade6,	// (0x0005f101) grid_wheel_folder_pane_g1_ParamLimits

0xade6,	// (0x0005f101) grid_wheel_folder_pane_g1

0x639a,	// (0x0005a6b5) clock_nsta_pane_cp2_ParamLimits

0x639a,	// (0x0005a6b5) clock_nsta_pane_cp2

0x640d,	// (0x0005a728) listscroll_midp_pane_ParamLimits

0x6419,	// (0x0005a734) midp_canvas_pane

0x84a6,	// (0x0005c7c1) nsta_clock_indic_pane

0x84e2,	// (0x0005c7fd) listscroll_form_pane_vc

0x84ea,	// (0x0005c805) listscroll_set_pane_vc_ParamLimits

0x84ea,	// (0x0005c805) listscroll_set_pane_vc

0x85e1,	// (0x0005c8fc) clock_nsta_pane

0x8658,	// (0x0005c973) indicator_nsta_pane

0x8944,	// (0x0005cc5f) bg_popup_sub_pane_cp2_ParamLimits

0x8958,	// (0x0005cc73) find_pane_cp2_ParamLimits

0x8958,	// (0x0005cc73) find_pane_cp2

0x896e,	// (0x0005cc89) grid_toobar_pane_ParamLimits

0x8a72,	// (0x0005cd8d) list_form_gen_pane_vc_ParamLimits

0x8a72,	// (0x0005cd8d) list_form_gen_pane_vc

0x8a88,	// (0x0005cda3) scroll_pane_cp8_vc_ParamLimits

0x8a88,	// (0x0005cda3) scroll_pane_cp8_vc

0x8b04,	// (0x0005ce1f) data_form_wide_pane_vc_ParamLimits

0x8b04,	// (0x0005ce1f) data_form_wide_pane_vc

0x8b10,	// (0x0005ce2b) form_field_data_wide_pane_vc_g1

0x8b18,	// (0x0005ce33) form_field_data_wide_pane_vc_t1_ParamLimits

0x8b18,	// (0x0005ce33) form_field_data_wide_pane_vc_t1

0xf122,	// (0x0006343d) input_focus_pane_cp6_vc_ParamLimits

0xf122,	// (0x0006343d) input_focus_pane_cp6_vc

0x8e14,	// (0x0005d12f) list_midp_pane_ParamLimits

0x8e20,	// (0x0005d13b) scroll_pane_cp16_ParamLimits

0x8e20,	// (0x0005d13b) scroll_pane_cp16

0x8e82,	// (0x0005d19d) button_value_adjust_pane_ParamLimits

0x8e82,	// (0x0005d19d) button_value_adjust_pane

0x9e06,	// (0x0005e121) button_value_adjust_pane_cp6_ParamLimits

0x9e06,	// (0x0005e121) button_value_adjust_pane_cp6

0x9f4e,	// (0x0005e269) settings_code_pane_cp_ParamLimits

0x9f4e,	// (0x0005e269) settings_code_pane_cp

0xe265,	// (0x00062580) cell_touch_pane_g1

0xe265,	// (0x00062580) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00063a23) cell_touch_pane_g

0xa70f,	// (0x0005ea2a) cell_touch_pane_cp_ParamLimits

0xa70f,	// (0x0005ea2a) cell_touch_pane_cp

0xa71f,	// (0x0005ea3a) cell_touch_pane_ParamLimits

0xa71f,	// (0x0005ea3a) cell_touch_pane

0xe265,	// (0x00062580) scroll_sc2_down_pane_g1

0xe265,	// (0x00062580) scroll_sc2_up_pane_g1

0xe26f,	// (0x0006258a) bg_set_opt_pane_cp4_vc

0xa730,	// (0x0005ea4b) list_set_graphic_pane_vc_g1_ParamLimits

0xa730,	// (0x0005ea4b) list_set_graphic_pane_vc_g1

0xa73c,	// (0x0005ea57) list_set_graphic_pane_vc_g2_ParamLimits

0xa73c,	// (0x0005ea57) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00063d1f) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00063d1f) list_set_graphic_pane_vc_g

0xa748,	// (0x0005ea63) text_primary_small_cp13_vc_ParamLimits

0xa748,	// (0x0005ea63) text_primary_small_cp13_vc

0x33ba,	// (0x000576d5) list_set_graphic_pane_vc_ParamLimits

0x33ba,	// (0x000576d5) list_set_graphic_pane_vc

0xe26f,	// (0x0006258a) input_focus_pane_cp2_vc

0xe265,	// (0x00062580) setting_code_pane_vc_g1

0xe2d4,	// (0x000625ef) setting_code_pane_vc_t1

0xa760,	// (0x0005ea7b) set_text_pane_vc_t1_ParamLimits

0xa760,	// (0x0005ea7b) set_text_pane_vc_t1

0xe26f,	// (0x0006258a) input_focus_pane_cp1_vc

0xa77e,	// (0x0005ea99) list_set_text_pane_vc

0xe265,	// (0x00062580) setting_text_pane_vc_g1

0xe26f,	// (0x0006258a) bg_set_opt_pane_cp2_vc

0xe2cb,	// (0x000625e6) setting_slider_graphic_pane_vc_g1

0xa788,	// (0x0005eaa3) setting_slider_graphic_pane_vc_t1

0xa79a,	// (0x0005eab5) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x00063d24) setting_slider_graphic_pane_vc_t

0xa7ac,	// (0x0005eac7) slider_set_pane_cp_vc

0xa7b6,	// (0x0005ead1) slider_set_pane_vc_g1

0xa7bf,	// (0x0005eada) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00063d29) slider_set_pane_vc_g

0xf17a,	// (0x00063495) set_opt_bg_pane_g1_copy1

0xf182,	// (0x0006349d) set_opt_bg_pane_g2_copy1

0xa7eb,	// (0x0005eb06) set_opt_bg_pane_g3_copy1

0xf192,	// (0x000634ad) set_opt_bg_pane_g4_copy1

0xf19a,	// (0x000634b5) set_opt_bg_pane_g5_copy1

0xf1a2,	// (0x000634bd) set_opt_bg_pane_g6_copy1

0xa7f5,	// (0x0005eb10) set_opt_bg_pane_g7_copy1

0xa7ff,	// (0x0005eb1a) set_opt_bg_pane_g8_copy1

0xa809,	// (0x0005eb24) set_opt_bg_pane_g9_copy1

0xe26f,	// (0x0006258a) bg_set_opt_pane_cp_vc

0xa813,	// (0x0005eb2e) setting_slider_pane_vc_t1

0xa822,	// (0x0005eb3d) setting_slider_pane_vc_t2

0xa834,	// (0x0005eb4f) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00063d38) setting_slider_pane_vc_t

0xa846,	// (0x0005eb61) slider_set_pane_vc

0x6eb1,	// (0x0005b1cc) volume_set_pane_vc_g1

0x6eba,	// (0x0005b1d5) volume_set_pane_vc_g2

0x6ec3,	// (0x0005b1de) volume_set_pane_vc_g3

0x6ecc,	// (0x0005b1e7) volume_set_pane_vc_g4

0x6ed5,	// (0x0005b1f0) volume_set_pane_vc_g5

0x6ede,	// (0x0005b1f9) volume_set_pane_vc_g6

0x6ee7,	// (0x0005b202) volume_set_pane_vc_g7

0x6ef0,	// (0x0005b20b) volume_set_pane_vc_g8

0x6ef9,	// (0x0005b214) volume_set_pane_vc_g9

0x6f02,	// (0x0005b21d) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00063bd6) volume_set_pane_vc_g

0xa84e,	// (0x0005eb69) volume_set_pane_vc

0xa858,	// (0x0005eb73) button_value_adjust_pane_cp1_vc

0xa862,	// (0x0005eb7d) list_highlight_pane_cp2_vc

0xa86b,	// (0x0005eb86) list_set_pane_vc_ParamLimits

0xa86b,	// (0x0005eb86) list_set_pane_vc

0xa8d9,	// (0x0005ebf4) main_pane_set_vc_t1_ParamLimits

0xa8d9,	// (0x0005ebf4) main_pane_set_vc_t1

0xa8ee,	// (0x0005ec09) main_pane_set_vc_t2_ParamLimits

0xa8ee,	// (0x0005ec09) main_pane_set_vc_t2

0xa900,	// (0x0005ec1b) main_pane_set_vc_t3_ParamLimits

0xa900,	// (0x0005ec1b) main_pane_set_vc_t3

0xa914,	// (0x0005ec2f) main_pane_set_vc_t4_ParamLimits

0xa914,	// (0x0005ec2f) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00063d3f) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00063d3f) main_pane_set_vc_t

0xa928,	// (0x0005ec43) setting_code_pane_vc_ParamLimits

0xa928,	// (0x0005ec43) setting_code_pane_vc

0xa939,	// (0x0005ec54) setting_slider_graphic_pane_vc

0xa939,	// (0x0005ec54) setting_slider_pane_vc

0xa939,	// (0x0005ec54) setting_text_pane_vc

0xa939,	// (0x0005ec54) setting_volume_pane_vc

0xa943,	// (0x0005ec5e) scroll_pane_cp121_vc

0xf0fc,	// (0x00063417) set_content_pane_vc

0xa94b,	// (0x0005ec66) button_value_adjust_pane_g1

0xa954,	// (0x0005ec6f) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00063da0) button_value_adjust_pane_g

0xa95d,	// (0x0005ec78) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa95d,	// (0x0005ec78) form_field_slider_wide_pane_vc_t1

0xa96f,	// (0x0005ec8a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa96f,	// (0x0005ec8a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x00063da5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00063da5) form_field_slider_wide_pane_vc_t

0xe3c1,	// (0x000626dc) input_focus_pane_cp10_vc_ParamLimits

0xe3c1,	// (0x000626dc) input_focus_pane_cp10_vc

0xa99b,	// (0x0005ecb6) slider_cont_pane_cp1_vc_ParamLimits

0xa99b,	// (0x0005ecb6) slider_cont_pane_cp1_vc

0xa9ad,	// (0x0005ecc8) slider_form_pane_g1_cp2

0xa7bf,	// (0x0005eada) slider_form_pane_g2_cp2

0xa9da,	// (0x0005ecf5) form_field_slider_pane_vc_t3

0xa9e8,	// (0x0005ed03) form_field_slider_pane_vc_t4

0xa9f6,	// (0x0005ed11) slider_form_pane_vc_ParamLimits

0xa9f6,	// (0x0005ed11) slider_form_pane_vc

0xaa03,	// (0x0005ed1e) form_field_slider_pane_vc_t1_ParamLimits

0xaa03,	// (0x0005ed1e) form_field_slider_pane_vc_t1

0xa96f,	// (0x0005ec8a) form_field_slider_pane_vc_t2_ParamLimits

0xa96f,	// (0x0005ec8a) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00063db7) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00063db7) form_field_slider_pane_vc_t

0xe3c1,	// (0x000626dc) input_focus_pane_cp9_vc_ParamLimits

0xe3c1,	// (0x000626dc) input_focus_pane_cp9_vc

0xaa19,	// (0x0005ed34) slider_cont_pane_vc_ParamLimits

0xaa19,	// (0x0005ed34) slider_cont_pane_vc

0xaa2d,	// (0x0005ed48) list_form_graphic_pane_cp_vc_ParamLimits

0xaa2d,	// (0x0005ed48) list_form_graphic_pane_cp_vc

0x8b10,	// (0x0005ce2b) form_field_popup_wide_pane_vc_g1

0xaa42,	// (0x0005ed5d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaa42,	// (0x0005ed5d) form_field_popup_wide_pane_vc_t1

0xf122,	// (0x0006343d) input_focus_pane_cp8_vc_ParamLimits

0xf122,	// (0x0006343d) input_focus_pane_cp8_vc

0xaa87,	// (0x0005eda2) list_form_wide_pane_vc_ParamLimits

0xaa87,	// (0x0005eda2) list_form_wide_pane_vc

0xaa93,	// (0x0005edae) list_form_graphic_pane_vc_g1

0xaa9b,	// (0x0005edb6) list_form_graphic_pane_vc_t1_ParamLimits

0xaa9b,	// (0x0005edb6) list_form_graphic_pane_vc_t1

0xe2bd,	// (0x000625d8) list_highlight_pane_cp5_vc_ParamLimits

0xe2bd,	// (0x000625d8) list_highlight_pane_cp5_vc

0xaab7,	// (0x0005edd2) list_form_graphic_pane_vc_ParamLimits

0xaab7,	// (0x0005edd2) list_form_graphic_pane_vc

0x8b10,	// (0x0005ce2b) form_field_popup_pane_vc_g1

0xaacd,	// (0x0005ede8) form_field_popup_pane_vc_t1_ParamLimits

0xaacd,	// (0x0005ede8) form_field_popup_pane_vc_t1

0xf122,	// (0x0006343d) input_focus_pane_cp7_vc_ParamLimits

0xf122,	// (0x0006343d) input_focus_pane_cp7_vc

0xaae4,	// (0x0005edff) list_form_pane_vc_ParamLimits

0xaae4,	// (0x0005edff) list_form_pane_vc

0xaaf0,	// (0x0005ee0b) data_form_pane_vc_t1_ParamLimits

0xaaf0,	// (0x0005ee0b) data_form_pane_vc_t1

0xf17a,	// (0x00063495) input_focus_pane_vc_g1

0xf182,	// (0x0006349d) input_focus_pane_vc_g2

0xf18a,	// (0x000634a5) input_focus_pane_vc_g3

0xf192,	// (0x000634ad) input_focus_pane_vc_g4

0xf19a,	// (0x000634b5) input_focus_pane_vc_g5

0xf1a2,	// (0x000634bd) input_focus_pane_vc_g6

0xf1aa,	// (0x000634c5) input_focus_pane_vc_g7

0xf1b2,	// (0x000634cd) input_focus_pane_vc_g8

0xf1ba,	// (0x000634d5) input_focus_pane_vc_g9

0xe265,	// (0x00062580) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000639ac) input_focus_pane_vc_g

0x8b04,	// (0x0005ce1f) data_form_pane_vc_ParamLimits

0x8b04,	// (0x0005ce1f) data_form_pane_vc

0x8b10,	// (0x0005ce2b) form_field_data_pane_vc_g1

0xab0d,	// (0x0005ee28) form_field_data_pane_vc_t1_ParamLimits

0xab0d,	// (0x0005ee28) form_field_data_pane_vc_t1

0xf122,	// (0x0006343d) input_focus_pane_vc_ParamLimits

0xf122,	// (0x0006343d) input_focus_pane_vc

0xab27,	// (0x0005ee42) button_value_adjust_pane_cp3_vc

0xab2f,	// (0x0005ee4a) button_value_adjust_pane_cp5_vc

0xab37,	// (0x0005ee52) form_field_data_pane_vc_ParamLimits

0xab37,	// (0x0005ee52) form_field_data_pane_vc

0xab52,	// (0x0005ee6d) form_field_data_pane_vc_cp2

0xab5a,	// (0x0005ee75) form_field_data_wide_pane_vc_ParamLimits

0xab5a,	// (0x0005ee75) form_field_data_wide_pane_vc

0xab74,	// (0x0005ee8f) form_field_data_wide_pane_vc_cp2

0xab7c,	// (0x0005ee97) form_field_popup_pane_vc_ParamLimits

0xab7c,	// (0x0005ee97) form_field_popup_pane_vc

0xab97,	// (0x0005eeb2) form_field_popup_wide_pane_vc_ParamLimits

0xab97,	// (0x0005eeb2) form_field_popup_wide_pane_vc

0xabb1,	// (0x0005eecc) form_field_slider_pane_vc_ParamLimits

0xabb1,	// (0x0005eecc) form_field_slider_pane_vc

0xabc4,	// (0x0005eedf) form_field_slider_wide_pane_vc_ParamLimits

0xabc4,	// (0x0005eedf) form_field_slider_wide_pane_vc

0xabd7,	// (0x0005eef2) grid_touch_1_pane_ParamLimits

0xabd7,	// (0x0005eef2) grid_touch_1_pane

0xabe3,	// (0x0005eefe) grid_touch_2_pane_ParamLimits

0xabe3,	// (0x0005eefe) grid_touch_2_pane

0x8471,	// (0x0005c78c) touch_pane_g1_ParamLimits

0x8471,	// (0x0005c78c) touch_pane_g1

0xabfd,	// (0x0005ef18) cell_app_pane_cp_wide_ParamLimits

0xabfd,	// (0x0005ef18) cell_app_pane_cp_wide

0xac0e,	// (0x0005ef29) grid_popup_fast_wide_pane_ParamLimits

0xac0e,	// (0x0005ef29) grid_popup_fast_wide_pane

0xac22,	// (0x0005ef3d) scroll_pane_cp19_ParamLimits

0xac22,	// (0x0005ef3d) scroll_pane_cp19

0xe26f,	// (0x0006258a) bg_popup_window_pane_cp20

0xac36,	// (0x0005ef51) listscroll_popup_fast_wide_pane

0xe2bd,	// (0x000625d8) grid_indicator_nsta_pane

0xac3e,	// (0x0005ef59) clock_nsta_pane_g1

0xac47,	// (0x0005ef62) clock_nsta_pane_t1

0xac63,	// (0x0005ef7e) cell_indicator_nsta_pane_ParamLimits

0xac63,	// (0x0005ef7e) cell_indicator_nsta_pane

0xac94,	// (0x0005efaf) cell_indicator_nsta_pane_g1

0xaca2,	// (0x0005efbd) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00063dc8) cell_indicator_nsta_pane_g

0xacaf,	// (0x0005efca) clock_nsta_pane_cp

0xacb8,	// (0x0005efd3) indicator_nsta_pane_cp

0xacc0,	// (0x0005efdb) nsta_clock_indic_pane_g1

0xe2f9,	// (0x00062614) grid_indicator_pane

0x1152,	// (0x0005546d) scroll_pane_cp29

0x62e9,	// (0x0005a604) indicator_nsta_pane_cp2_ParamLimits

0x62e9,	// (0x0005a604) indicator_nsta_pane_cp2

0xe2bd,	// (0x000625d8) main_apps_wheel_pane

0x8cf1,	// (0x0005d00c) form_midp_field_text_pane_ParamLimits

0x8e40,	// (0x0005d15b) scroll_bar_cp050_ParamLimits

0xad10,	// (0x0005f02b) cell_indicator_pane_ParamLimits

0xad10,	// (0x0005f02b) cell_indicator_pane

0xad28,	// (0x0005f043) cell_indicator_pane_g1

0xad32,	// (0x0005f04d) grid_wheel_folder_pane_ParamLimits

0xad32,	// (0x0005f04d) grid_wheel_folder_pane

0xad46,	// (0x0005f061) list_wheel_apps_pane_ParamLimits

0xad46,	// (0x0005f061) list_wheel_apps_pane

0xad59,	// (0x0005f074) main_apps_wheel_pane_g1_ParamLimits

0xad59,	// (0x0005f074) main_apps_wheel_pane_g1

0xad75,	// (0x0005f090) main_apps_wheel_pane_g2_ParamLimits

0xad75,	// (0x0005f090) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00063de4) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00063de4) main_apps_wheel_pane_g

0xad91,	// (0x0005f0ac) main_apps_wheel_pane_t1_ParamLimits

0xad91,	// (0x0005f0ac) main_apps_wheel_pane_t1

0xadba,	// (0x0005f0d5) list_wheel_apps_pane_g1

0xadc2,	// (0x0005f0dd) list_wheel_apps_pane_g2

0xadca,	// (0x0005f0e5) list_wheel_apps_pane_g3

0xadd2,	// (0x0005f0ed) list_wheel_apps_pane_g4

0xaddc,	// (0x0005f0f7) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00063de9) list_wheel_apps_pane_g

0x354f,	// (0x0005786a) navi_icon_text_pane

0x8512,	// (0x0005c82d) aid_fill_nsta

0xadfd,	// (0x0005f118) navi_icon_text_pane_g1

0xae09,	// (0x0005f124) navi_icon_text_pane_t1

0x33e5,	// (0x00057700) list_set_graphic_pane_t1_ParamLimits

0x33e5,	// (0x00057700) list_set_graphic_pane_t1

0x95a5,	// (0x0005d8c0) popup_midp_note_alarm_window_t6_ParamLimits

0x95a5,	// (0x0005d8c0) popup_midp_note_alarm_window_t6

0x95b7,	// (0x0005d8d2) popup_midp_note_alarm_window_t7_ParamLimits

0x95b7,	// (0x0005d8d2) popup_midp_note_alarm_window_t7

0x95c9,	// (0x0005d8e4) popup_midp_note_alarm_window_t8_ParamLimits

0x95c9,	// (0x0005d8e4) popup_midp_note_alarm_window_t8

0x95db,	// (0x0005d8f6) popup_midp_note_alarm_window_t9_ParamLimits

0x95db,	// (0x0005d8f6) popup_midp_note_alarm_window_t9

0x95ed,	// (0x0005d908) popup_midp_note_alarm_window_t10_ParamLimits

0x95ed,	// (0x0005d908) popup_midp_note_alarm_window_t10

0x95ff,	// (0x0005d91a) popup_midp_note_alarm_window_t11_ParamLimits

0x95ff,	// (0x0005d91a) popup_midp_note_alarm_window_t11

0x9611,	// (0x0005d92c) scroll_pane_cp17_ParamLimits

0x9611,	// (0x0005d92c) scroll_pane_cp17

0x6eb1,	// (0x0005b1cc) volume_small_pane_cp_g1

0x7236,	// (0x0005b551) volume_small_pane_cp_g2

0x723f,	// (0x0005b55a) volume_small_pane_cp_g3

0x7248,	// (0x0005b563) volume_small_pane_cp_g4

0x7251,	// (0x0005b56c) volume_small_pane_cp_g5

0x725a,	// (0x0005b575) volume_small_pane_cp_g6

0x7263,	// (0x0005b57e) volume_small_pane_cp_g7

0x726c,	// (0x0005b587) volume_small_pane_cp_g8

0x7275,	// (0x0005b590) volume_small_pane_cp_g9

0x727e,	// (0x0005b599) volume_small_pane_cp_g10

0x36e7,	// (0x00057a02) midp_ticker_pane_g1_ParamLimits

0x36f3,	// (0x00057a0e) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00063a78) midp_ticker_pane_g_ParamLimits

0x64bf,	// (0x0005a7da) midp_ticker_pane_t1_ParamLimits

0x8528,	// (0x0005c843) aid_fill_nsta_2

0x8e2c,	// (0x0005d147) list_form2_midp_pane

0x9f95,	// (0x0005e2b0) midp_editing_number_pane_ParamLimits

0x9fa4,	// (0x0005e2bf) midp_ticker_pane_ParamLimits

0xae1b,	// (0x0005f136) form2_midp_field_pane

0xae3f,	// (0x0005f15a) scroll_pane_cp51

0xae5f,	// (0x0005f17a) form2_midp_button_pane_ParamLimits

0xae5f,	// (0x0005f17a) form2_midp_button_pane

0xae71,	// (0x0005f18c) form2_midp_content_pane_ParamLimits

0xae71,	// (0x0005f18c) form2_midp_content_pane

0xae8b,	// (0x0005f1a6) form2_midp_field_choice_group_pane

0xae93,	// (0x0005f1ae) form2_midp_field_pane_g1

0xae9b,	// (0x0005f1b6) form2_midp_field_pane_g2

0xaea3,	// (0x0005f1be) form2_midp_field_pane_g3

0xaeab,	// (0x0005f1c6) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00063e0e) form2_midp_field_pane_g

0xaeb3,	// (0x0005f1ce) form2_midp_gauge_slider_pane

0xaebb,	// (0x0005f1d6) form2_midp_gauge_wait_pane

0xaec3,	// (0x0005f1de) form2_midp_image_pane_ParamLimits

0xaec3,	// (0x0005f1de) form2_midp_image_pane

0xaede,	// (0x0005f1f9) form2_midp_label_pane_ParamLimits

0xaede,	// (0x0005f1f9) form2_midp_label_pane

0xaefd,	// (0x0005f218) form2_midp_label_pane_cp_ParamLimits

0xaefd,	// (0x0005f218) form2_midp_label_pane_cp

0xaf1e,	// (0x0005f239) form2_midp_string_pane_ParamLimits

0xaf1e,	// (0x0005f239) form2_midp_string_pane

0x7287,	// (0x0005b5a2) form2_midp_text_pane_ParamLimits

0x7287,	// (0x0005b5a2) form2_midp_text_pane

0xaf30,	// (0x0005f24b) form2_midp_time_pane

0xaf40,	// (0x0005f25b) input_focus_pane_cp51_ParamLimits

0xaf40,	// (0x0005f25b) input_focus_pane_cp51

0xaf58,	// (0x0005f273) form2_midp_label_pane_t1_ParamLimits

0xaf58,	// (0x0005f273) form2_midp_label_pane_t1

0x72aa,	// (0x0005b5c5) form2_mdip_text_pane_t1_ParamLimits

0x72aa,	// (0x0005b5c5) form2_mdip_text_pane_t1

0x402c,	// (0x00058347) form2_midp_time_pane_t1

0xafa6,	// (0x0005f2c1) form2_midp_gauge_slider_pane_t1

0xafb8,	// (0x0005f2d3) form2_midp_gauge_slider_pane_t2

0xafca,	// (0x0005f2e5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00063e17) form2_midp_gauge_slider_pane_t

0xafdc,	// (0x0005f2f7) form2_midp_slider_pane

0xafe8,	// (0x0005f303) form2_midp_gauge_wait_pane_t1

0xaff6,	// (0x0005f311) form2_midp_wait_pane_ParamLimits

0xaff6,	// (0x0005f311) form2_midp_wait_pane

0xb021,	// (0x0005f33c) list_single_2graphic_pane_cp4_ParamLimits

0xb021,	// (0x0005f33c) list_single_2graphic_pane_cp4

0x8b6d,	// (0x0005ce88) list_single_midp_graphic_pane_cp_ParamLimits

0x8b6d,	// (0x0005ce88) list_single_midp_graphic_pane_cp

0xe26f,	// (0x0006258a) list_highlight_pane_cp20

0xb03a,	// (0x0005f355) list_single_2graphic_pane_g1_cp4

0xa612,	// (0x0005e92d) list_single_2graphic_pane_g2_cp4

0xb042,	// (0x0005f35d) list_single_2graphic_pane_t1_cp4

0xe2bd,	// (0x000625d8) list_highlight_pane_cp21

0xb051,	// (0x0005f36c) list_single_midp_graphic_pane_g4_cp

0xb060,	// (0x0005f37b) list_single_midp_graphic_pane_t1_cp

0xb075,	// (0x0005f390) form2_mdip_string_pane_t1_ParamLimits

0xb075,	// (0x0005f390) form2_mdip_string_pane_t1

0xe26f,	// (0x0006258a) bg_wml_button_pane_cp2

0xe265,	// (0x00062580) form2_midp_image_pane_g1

0x42a7,	// (0x000585c2) list_double_large_graphic_pane_g5_ParamLimits

0x42a7,	// (0x000585c2) list_double_large_graphic_pane_g5

0x640d,	// (0x0005a728) midp_form_pane_ParamLimits

0xe2bd,	// (0x000625d8) main_apps_wheel_pane_ParamLimits

0x6afb,	// (0x0005ae16) popup_preview_window_ParamLimits

0x6afb,	// (0x0005ae16) popup_preview_window

0x6ce2,	// (0x0005affd) popup_touch_info_window_ParamLimits

0x6ce2,	// (0x0005affd) popup_touch_info_window

0x6d04,	// (0x0005b01f) popup_touch_menu_window_ParamLimits

0x6d04,	// (0x0005b01f) popup_touch_menu_window

0xe25b,	// (0x00062576) bg_popup_sub_pane_cp6

0xb111,	// (0x0005f42c) list_touch_menu_pane

0xb119,	// (0x0005f434) list_single_touch_menu_pane_ParamLimits

0xb119,	// (0x0005f434) list_single_touch_menu_pane

0xb131,	// (0x0005f44c) list_single_touch_menu_pane_t1

0xe2bd,	// (0x000625d8) bg_popup_sub_pane_cp7_ParamLimits

0xe2bd,	// (0x000625d8) bg_popup_sub_pane_cp7

0xb13f,	// (0x0005f45a) heading_sub_pane

0xb147,	// (0x0005f462) list_touch_info_pane_ParamLimits

0xb147,	// (0x0005f462) list_touch_info_pane

0xb156,	// (0x0005f471) list_single_touch_info_pane_ParamLimits

0xb156,	// (0x0005f471) list_single_touch_info_pane

0xb168,	// (0x0005f483) list_single_touch_info_pane_t1

0xb176,	// (0x0005f491) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00063e25) list_single_touch_info_pane_t

0x36bb,	// (0x000579d6) bg_popup_heading_pane_cp

0xb184,	// (0x0005f49f) heading_sub_pane_t1

0x8a9e,	// (0x0005cdb9) bg_popup_preview_window_pane_cp_ParamLimits

0x8a9e,	// (0x0005cdb9) bg_popup_preview_window_pane_cp

0xb13f,	// (0x0005f45a) heading_preview_pane

0xb147,	// (0x0005f462) list_preview_pane_ParamLimits

0xb147,	// (0x0005f462) list_preview_pane

0xb192,	// (0x0005f4ad) popup_preview_window_g1

0xb156,	// (0x0005f471) list_single_preview_pane_ParamLimits

0xb156,	// (0x0005f471) list_single_preview_pane

0xb19a,	// (0x0005f4b5) list_single_preview_pane_g1

0xb1a2,	// (0x0005f4bd) list_single_preview_pane_t1

0xb168,	// (0x0005f483) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00063e2a) list_single_preview_pane_t

0xb1b0,	// (0x0005f4cb) bg_popup_heading_pane_cp2_ParamLimits

0xb1b0,	// (0x0005f4cb) bg_popup_heading_pane_cp2

0xb1c6,	// (0x0005f4e1) heading_preview_pane_g1

0xb1ce,	// (0x0005f4e9) heading_preview_pane_t1_ParamLimits

0xb1ce,	// (0x0005f4e9) heading_preview_pane_t1

0xe310,	// (0x0006262b) soft_indicator_pane_t1_ParamLimits

0xf095,	// (0x000633b0) scroll_pane_ParamLimits

0xf479,	// (0x00063794) scroll_sc2_left_pane

0xf482,	// (0x0006379d) scroll_sc2_right_pane

0xf4a1,	// (0x000637bc) scroll_bg_pane_g1_ParamLimits

0xf4b6,	// (0x000637d1) scroll_bg_pane_g2_ParamLimits

0xf4ce,	// (0x000637e9) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00063a03) scroll_bg_pane_g_ParamLimits

0xf4a1,	// (0x000637bc) scroll_handle_pane_g1_ParamLimits

0xf4f0,	// (0x0006380b) scroll_handle_pane_g2_ParamLimits

0xf4ce,	// (0x000637e9) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00063a0a) scroll_handle_pane_g_ParamLimits

0x6742,	// (0x0005aa5d) popup_choice_list_window_ParamLimits

0x6742,	// (0x0005aa5d) popup_choice_list_window

0x8950,	// (0x0005cc6b) choice_list_pane

0x89de,	// (0x0005ccf9) cell_toolbar_pane_t1

0x8a06,	// (0x0005cd21) toolbar_button_pane_ParamLimits

0x9adb,	// (0x0005ddf6) ai_gene_pane_1_t2_ParamLimits

0x9adb,	// (0x0005ddf6) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00063c32) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00063c32) ai_gene_pane_1_t

0xb1eb,	// (0x0005f506) scroll_sc2_left_pane_g1

0xb1eb,	// (0x0005f506) scroll_sc2_right_pane_g1

0x84d6,	// (0x0005c7f1) bg_popup_sub_pane_cp10

0xb1f5,	// (0x0005f510) list_choice_list_pane

0xa03f,	// (0x0005e35a) list_single_choice_list_pane_ParamLimits

0xa03f,	// (0x0005e35a) list_single_choice_list_pane

0xb20e,	// (0x0005f529) list_single_choice_list_pane_g1

0xf270,	// (0x0006358b) list_single_choice_list_pane_t1_ParamLimits

0xf270,	// (0x0006358b) list_single_choice_list_pane_t1

0xb216,	// (0x0005f531) choice_list_pane_g1

0xb21e,	// (0x0005f539) choice_list_pane_t1

0xe25b,	// (0x00062576) input_focus_pane_cp11

0xf3ee,	// (0x00063709) title_pane_stacon_g2_ParamLimits

0xf3ee,	// (0x00063709) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000639e9) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000639e9) title_pane_stacon_g

0x36bb,	// (0x000579d6) cursor_press_pane

0x67fc,	// (0x0005ab17) popup_fep_hwr_window_ParamLimits

0x67fc,	// (0x0005ab17) popup_fep_hwr_window

0x6886,	// (0x0005aba1) popup_fep_vkb_window_ParamLimits

0x6886,	// (0x0005aba1) popup_fep_vkb_window

0xb22c,	// (0x0005f547) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00063e53) fep_vkb_side_pane_g_ParamLimits

0x7302,	// (0x0005b61d) fep_hwr_candidate_pane_ParamLimits

0x7302,	// (0x0005b61d) fep_hwr_candidate_pane

0x732c,	// (0x0005b647) fep_hwr_side_pane_ParamLimits

0x732c,	// (0x0005b647) fep_hwr_side_pane

0x734e,	// (0x0005b669) fep_hwr_top_pane_ParamLimits

0x734e,	// (0x0005b669) fep_hwr_top_pane

0x7366,	// (0x0005b681) fep_hwr_write_pane_ParamLimits

0x7366,	// (0x0005b681) fep_hwr_write_pane

0xfb38,	// (0x00063e53) fep_vkb_side_pane_g

0xb234,	// (0x0005f54f) fep_hwr_top_pane_g1

0xb246,	// (0x0005f561) fep_hwr_top_pane_g2

0x73a0,	// (0x0005b6bb) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00063e2f) fep_hwr_top_pane_g

0x73b5,	// (0x0005b6d0) fep_hwr_top_text_pane

0x11bf,	// (0x000554da) fep_hwr_top_text_pane_g1

0xb27c,	// (0x0005f597) fep_hwr_top_text_pane_t1

0x74bf,	// (0x0005b7da) fep_hwr_candidate_pane_g1

0xb4c7,	// (0x0005f7e2) fep_vkb_keypad_pane_g3_ParamLimits

0xb4c7,	// (0x0005f7e2) fep_vkb_keypad_pane_g3

0xb4f3,	// (0x0005f80e) fep_vkb_keypad_pane_g4_ParamLimits

0xb4f3,	// (0x0005f80e) fep_vkb_keypad_pane_g4

0xb56a,	// (0x0005f885) fep_vkb_bottom_pane_g2_ParamLimits

0xb56a,	// (0x0005f885) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00063e5a) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00063e5a) fep_vkb_bottom_pane_g

0xb1eb,	// (0x0005f506) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00063e64) cell_vkb_side_pane_g

0xb5f5,	// (0x0005f910) cell_vkb_side_pane_t1

0xb603,	// (0x0005f91e) cell_vkb_side_pane_t1_copy1

0xb1eb,	// (0x0005f506) bg_fep_vkb_candidate_pane_g2

0xb747,	// (0x0005fa62) cell_vkb_candidate_pane_ParamLimits

0xb28a,	// (0x0005f5a5) aid_size_cell_vkb_ParamLimits

0xb28a,	// (0x0005f5a5) aid_size_cell_vkb

0xb747,	// (0x0005fa62) cell_vkb_candidate_pane

0x74e6,	// (0x0005b801) bg_popup_fep_shadow_pane_g1

0xb31c,	// (0x0005f637) fep_vkb_bottom_pane_ParamLimits

0xb31c,	// (0x0005f637) fep_vkb_bottom_pane

0xb359,	// (0x0005f674) fep_vkb_candidate_pane_ParamLimits

0xb359,	// (0x0005f674) fep_vkb_candidate_pane

0xb375,	// (0x0005f690) fep_vkb_keypad_pane_ParamLimits

0xb375,	// (0x0005f690) fep_vkb_keypad_pane

0xb3a8,	// (0x0005f6c3) fep_vkb_side_pane_ParamLimits

0xb3a8,	// (0x0005f6c3) fep_vkb_side_pane

0xb3e4,	// (0x0005f6ff) fep_vkb_top_pane_ParamLimits

0xb3e4,	// (0x0005f6ff) fep_vkb_top_pane

0xb420,	// (0x0005f73b) fep_vkb_top_pane_g1_ParamLimits

0xb420,	// (0x0005f73b) fep_vkb_top_pane_g1

0xb42f,	// (0x0005f74a) fep_vkb_top_pane_g2_ParamLimits

0xb42f,	// (0x0005f74a) fep_vkb_top_pane_g2

0xb43e,	// (0x0005f759) fep_vkb_top_pane_g3_ParamLimits

0xb43e,	// (0x0005f759) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00063e4a) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00063e4a) fep_vkb_top_pane_g

0xb45c,	// (0x0005f777) fep_vkb_top_text_pane_ParamLimits

0xb45c,	// (0x0005f777) fep_vkb_top_text_pane

0xb46d,	// (0x0005f788) fep_vkb_side_pane_g1_ParamLimits

0xb46d,	// (0x0005f788) fep_vkb_side_pane_g1

0xb4b6,	// (0x0005f7d1) grid_vkb_side_pane_ParamLimits

0xb4b6,	// (0x0005f7d1) grid_vkb_side_pane

0x74ee,	// (0x0005b809) bg_popup_fep_shadow_pane_g2

0x74f7,	// (0x0005b812) bg_popup_fep_shadow_pane_g3

0x74ff,	// (0x0005b81a) bg_popup_fep_shadow_pane_g4

0x7508,	// (0x0005b823) bg_popup_fep_shadow_pane_g5

0x7512,	// (0x0005b82d) bg_popup_fep_shadow_pane_g6

0x751a,	// (0x0005b835) bg_popup_fep_shadow_pane_g7

0xf192,	// (0x000634ad) bg_popup_fep_shadow_pane_g8

0xb515,	// (0x0005f830) grid_vkb_keypad_number_pane_ParamLimits

0xb515,	// (0x0005f830) grid_vkb_keypad_number_pane

0xb529,	// (0x0005f844) grid_vkb_keypad_pane_ParamLimits

0xb529,	// (0x0005f844) grid_vkb_keypad_pane

0xb54f,	// (0x0005f86a) fep_vkb_bottom_pane_g1_ParamLimits

0xb54f,	// (0x0005f86a) fep_vkb_bottom_pane_g1

0xb578,	// (0x0005f893) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb578,	// (0x0005f893) grid_vkb_keypad_bottom_left_pane

0xb58d,	// (0x0005f8a8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb58d,	// (0x0005f8a8) grid_vkb_keypad_bottom_right_pane

0xb5a2,	// (0x0005f8bd) fep_vkb_top_text_pane_g1

0xb5bd,	// (0x0005f8d8) fep_vkb_top_text_pane_t1

0xb5d2,	// (0x0005f8ed) cell_vkb_side_pane_ParamLimits

0xb5d2,	// (0x0005f8ed) cell_vkb_side_pane

0xb1eb,	// (0x0005f506) cell_vkb_side_pane_g1

0xb611,	// (0x0005f92c) cell_vkb_keypad_pane_ParamLimits

0xb611,	// (0x0005f92c) cell_vkb_keypad_pane

0xb69e,	// (0x0005f9b9) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00063e77) bg_popup_fep_shadow_pane_g

0x752c,	// (0x0005b847) cell_hwr_side_pane_g1

0x752c,	// (0x0005b847) cell_hwr_side_pane_g2

0xb6a8,	// (0x0005f9c3) cell_vkb_keypad_pane_t1

0xb6b6,	// (0x0005f9d1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb6b6,	// (0x0005f9d1) cell_vkb_keypad_bottom_left_pane

0xb6d3,	// (0x0005f9ee) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb6d3,	// (0x0005f9ee) cell_vkb_keypad_bottom_right_pane

0xb1eb,	// (0x0005f506) cell_vkb_keypad_bottom_left_pane_g1

0xb1eb,	// (0x0005f506) cell_vkb_keypad_bottom_right_pane_g1

0xb70c,	// (0x0005fa27) cell_vkb_keypad_number_pane_ParamLimits

0xb70c,	// (0x0005fa27) cell_vkb_keypad_number_pane

0xb72b,	// (0x0005fa46) cell_vkb_keypad_number_pane_g1

0xb735,	// (0x0005fa50) cell_vkb_keypad_number_pane_g2

0xb73e,	// (0x0005fa59) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00063e69) cell_vkb_keypad_number_pane_g

0xb6a8,	// (0x0005f9c3) cell_vkb_keypad_number_pane_t1

0xb768,	// (0x0005fa83) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x00063e8a) cell_hwr_side_pane_g

0xb781,	// (0x0005fa9c) cell_hwr_side_pane_t1

0x7536,	// (0x0005b851) cell_hwr_side_pane_t1_copy1

0x7544,	// (0x0005b85f) cell_hwr_candidate_pane_g1

0x7573,	// (0x0005b88e) cell_hwr_candidate_pane_t1

0xb1eb,	// (0x0005f506) cell_vkb_candidate_pane_g2

0xb7c5,	// (0x0005fae0) cell_vkb_candidate_pane_t1

0x72c9,	// (0x0005b5e4) bg_popup_fep_shadow_pane_ParamLimits

0x72c9,	// (0x0005b5e4) bg_popup_fep_shadow_pane

0x7380,	// (0x0005b69b) bg_fep_hwr_top_pane_g4

0xb258,	// (0x0005f573) bg_hwr_side_pane_g1_ParamLimits

0xb258,	// (0x0005f573) bg_hwr_side_pane_g1

0x73f3,	// (0x0005b70e) cell_hwr_side_pane_ParamLimits

0x73f3,	// (0x0005b70e) cell_hwr_side_pane

0x7430,	// (0x0005b74b) fep_hwr_write_pane_g1_ParamLimits

0x7430,	// (0x0005b74b) fep_hwr_write_pane_g1

0x743d,	// (0x0005b758) fep_hwr_write_pane_g2_ParamLimits

0x743d,	// (0x0005b758) fep_hwr_write_pane_g2

0x744a,	// (0x0005b765) fep_hwr_write_pane_g3_ParamLimits

0x744a,	// (0x0005b765) fep_hwr_write_pane_g3

0x7458,	// (0x0005b773) fep_hwr_write_pane_g4_ParamLimits

0x7458,	// (0x0005b773) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00063e36) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00063e36) fep_hwr_write_pane_g

0x7380,	// (0x0005b69b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7380,	// (0x0005b69b) bg_fep_hwr_candidate_pane_g2

0x746d,	// (0x0005b788) cell_hwr_candidate_pane_ParamLimits

0x746d,	// (0x0005b788) cell_hwr_candidate_pane

0x74bf,	// (0x0005b7da) fep_hwr_candidate_pane_g1_ParamLimits

0xb2b8,	// (0x0005f5d3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb2b8,	// (0x0005f5d3) bg_popup_fep_shadow_pane_cp2

0xb44e,	// (0x0005f769) fep_vkb_top_pane_g4_ParamLimits

0xb44e,	// (0x0005f769) fep_vkb_top_pane_g4

0xb494,	// (0x0005f7af) fep_vkb_side_pane_g2_ParamLimits

0xb494,	// (0x0005f7af) fep_vkb_side_pane_g2

0x5afc,	// (0x00059e17) list_setting_pane_t4_ParamLimits

0x5afc,	// (0x00059e17) list_setting_pane_t4

0x5b98,	// (0x00059eb3) list_setting_number_pane_t5_ParamLimits

0x5b98,	// (0x00059eb3) list_setting_number_pane_t5

0x60a2,	// (0x0005a3bd) list_double_heading_pane_cp2_ParamLimits

0x60a2,	// (0x0005a3bd) list_double_heading_pane_cp2

0xb7d3,	// (0x0005faee) list_double_heading_pane_g1_cp2_ParamLimits

0xb7d3,	// (0x0005faee) list_double_heading_pane_g1_cp2

0xb7df,	// (0x0005fafa) list_double_heading_pane_g2_cp2_ParamLimits

0xb7df,	// (0x0005fafa) list_double_heading_pane_g2_cp2

0xb7f3,	// (0x0005fb0e) list_double_heading_pane_t1_cp2_ParamLimits

0xb7f3,	// (0x0005fb0e) list_double_heading_pane_t1_cp2

0xb809,	// (0x0005fb24) list_double_heading_pane_t2_cp2_ParamLimits

0xb809,	// (0x0005fb24) list_double_heading_pane_t2_cp2

0xc2d9,	// (0x000605f4) aid_value_unit2

0x51eb,	// (0x00059506) popup_preview_fixed_window

0xec17,	// (0x00062f32) bg_popup_preview_window_pane_cp02

0xb81b,	// (0x0005fb36) list_preview_fixed_pane

0xb861,	// (0x0005fb7c) list_empty_pane_fp_ParamLimits

0xb861,	// (0x0005fb7c) list_empty_pane_fp

0xb861,	// (0x0005fb7c) list_single_cale_day_pane_fp_ParamLimits

0xb861,	// (0x0005fb7c) list_single_cale_day_pane_fp

0xb861,	// (0x0005fb7c) list_single_graphic_heading_pane_fp_ParamLimits

0xb861,	// (0x0005fb7c) list_single_graphic_heading_pane_fp

0xb861,	// (0x0005fb7c) list_single_graphic_pane_fp_ParamLimits

0xb861,	// (0x0005fb7c) list_single_graphic_pane_fp

0xb861,	// (0x0005fb7c) list_single_heading_pane_fp_ParamLimits

0xb861,	// (0x0005fb7c) list_single_heading_pane_fp

0xb861,	// (0x0005fb7c) list_single_pane_fp_ParamLimits

0xb861,	// (0x0005fb7c) list_single_pane_fp

0xb87a,	// (0x0005fb95) list_single_pane_fp_g1_ParamLimits

0xb87a,	// (0x0005fb95) list_single_pane_fp_g1

0xb7d3,	// (0x0005faee) list_single_pane_fp_g2_ParamLimits

0xb7d3,	// (0x0005faee) list_single_pane_fp_g2

0xb7df,	// (0x0005fafa) list_single_pane_fp_g3_ParamLimits

0xb7df,	// (0x0005fafa) list_single_pane_fp_g3

0xb886,	// (0x0005fba1) list_single_pane_fp_g4_ParamLimits

0xb886,	// (0x0005fba1) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x00063e9d) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x00063e9d) list_single_pane_fp_g

0x403f,	// (0x0005835a) list_single_pane_fp_t1_ParamLimits

0x403f,	// (0x0005835a) list_single_pane_fp_t1

0x4056,	// (0x00058371) list_single_graphic_pane_fp_g1_ParamLimits

0x4056,	// (0x00058371) list_single_graphic_pane_fp_g1

0xb87a,	// (0x0005fb95) list_single_graphic_pane_fp_g2_ParamLimits

0xb87a,	// (0x0005fb95) list_single_graphic_pane_fp_g2

0xb7d3,	// (0x0005faee) list_single_graphic_pane_fp_g3_ParamLimits

0xb7d3,	// (0x0005faee) list_single_graphic_pane_fp_g3

0xb7df,	// (0x0005fafa) list_single_graphic_pane_fp_g4_ParamLimits

0xb7df,	// (0x0005fafa) list_single_graphic_pane_fp_g4

0xb886,	// (0x0005fba1) list_single_graphic_pane_fp_g5_ParamLimits

0xb886,	// (0x0005fba1) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x00063ea6) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x00063ea6) list_single_graphic_pane_fp_g

0x4062,	// (0x0005837d) list_single_graphic_pane_fp_t1_ParamLimits

0x4062,	// (0x0005837d) list_single_graphic_pane_fp_t1

0x4056,	// (0x00058371) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4056,	// (0x00058371) list_single_graphic_heading_pane_fp_g1

0xb87a,	// (0x0005fb95) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb87a,	// (0x0005fb95) list_single_graphic_heading_pane_fp_g2

0xb7d3,	// (0x0005faee) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb7d3,	// (0x0005faee) list_single_graphic_heading_pane_fp_g3

0xb7df,	// (0x0005fafa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb7df,	// (0x0005fafa) list_single_graphic_heading_pane_fp_g4

0xb886,	// (0x0005fba1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb886,	// (0x0005fba1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00063ea6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00063ea6) list_single_graphic_heading_pane_fp_g

0x4078,	// (0x00058393) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4078,	// (0x00058393) list_single_graphic_heading_pane_fp_t1

0x408e,	// (0x000583a9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x408e,	// (0x000583a9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x00063eb1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x00063eb1) list_single_graphic_heading_pane_fp_t

0x40a0,	// (0x000583bb) list_single_cale_day_pane_fp_g1_ParamLimits

0x40a0,	// (0x000583bb) list_single_cale_day_pane_fp_g1

0xb892,	// (0x0005fbad) list_single_cale_day_pane_fp_g2_ParamLimits

0xb892,	// (0x0005fbad) list_single_cale_day_pane_fp_g2

0xa253,	// (0x0005e56e) list_single_cale_day_pane_fp_g3_ParamLimits

0xa253,	// (0x0005e56e) list_single_cale_day_pane_fp_g3

0xa27b,	// (0x0005e596) list_single_cale_day_pane_fp_g4_ParamLimits

0xa27b,	// (0x0005e596) list_single_cale_day_pane_fp_g4

0xa29f,	// (0x0005e5ba) list_single_cale_day_pane_fp_g5_ParamLimits

0xa29f,	// (0x0005e5ba) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x00063eb6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x00063eb6) list_single_cale_day_pane_fp_g

0x40d8,	// (0x000583f3) list_single_cale_day_pane_fp_t1_ParamLimits

0x40d8,	// (0x000583f3) list_single_cale_day_pane_fp_t1

0x40fe,	// (0x00058419) list_single_cale_day_pane_fp_t2_ParamLimits

0x40fe,	// (0x00058419) list_single_cale_day_pane_fp_t2

0x4117,	// (0x00058432) list_single_cale_day_pane_fp_t3_ParamLimits

0x4117,	// (0x00058432) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x00063ec1) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x00063ec1) list_single_cale_day_pane_fp_t

0xb87a,	// (0x0005fb95) list_empty_pane_fp_g1_ParamLimits

0xb87a,	// (0x0005fb95) list_empty_pane_fp_g1

0x4130,	// (0x0005844b) list_empty_pane_fp_t1

0x413e,	// (0x00058459) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x00063ec8) list_empty_pane_fp_t

0xb87a,	// (0x0005fb95) list_single_heading_pane_fp_g1_ParamLimits

0xb87a,	// (0x0005fb95) list_single_heading_pane_fp_g1

0xb7d3,	// (0x0005faee) list_single_heading_pane_fp_g2_ParamLimits

0xb7d3,	// (0x0005faee) list_single_heading_pane_fp_g2

0xb7df,	// (0x0005fafa) list_single_heading_pane_fp_g3_ParamLimits

0xb7df,	// (0x0005fafa) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x00063ecd) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00063ecd) list_single_heading_pane_fp_g

0x414c,	// (0x00058467) list_single_heading_pane_fp_t1_ParamLimits

0x414c,	// (0x00058467) list_single_heading_pane_fp_t1

0x415e,	// (0x00058479) list_single_heading_pane_fp_t2_ParamLimits

0x415e,	// (0x00058479) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x00063ed4) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x00063ed4) list_single_heading_pane_fp_t

0xf285,	// (0x000635a0) aid_size_cell_fast

0xebfa,	// (0x00062f15) soft_indicator_pane_cp1_t1

0xf2c2,	// (0x000635dd) cell_app_pane_cp2_ParamLimits

0xf2c2,	// (0x000635dd) cell_app_pane_cp2

0x72eb,	// (0x0005b606) fep_hwr_candidate_drop_down_list_pane

0x74d9,	// (0x0005b7f4) fep_hwr_candidate_pane_g3_ParamLimits

0x74d9,	// (0x0005b7f4) fep_hwr_candidate_pane_g3

0x2b54,	// (0x00056e6f) fep_hwr_candidate_pane_g4_ParamLimits

0x2b54,	// (0x00056e6f) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00063e43) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00063e43) fep_hwr_candidate_pane_g

0xb348,	// (0x0005f663) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb348,	// (0x0005f663) fep_vkb_candidate_drop_down_list_pane

0xb770,	// (0x0005fa8b) fep_vkb_candidate_pane_g3

0xb778,	// (0x0005fa93) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00063e70) fep_vkb_candidate_pane_g

0x7544,	// (0x0005b85f) cell_hwr_candidate_pane_g1_ParamLimits

0x7552,	// (0x0005b86d) cell_hwr_candidate_pane_g3_ParamLimits

0x7552,	// (0x0005b86d) cell_hwr_candidate_pane_g3

0xc2e1,	// (0x000605fc) cell_hwr_candidate_pane_g4_ParamLimits

0xc2e1,	// (0x000605fc) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x00063e8f) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x00063e8f) cell_hwr_candidate_pane_g

0xb78f,	// (0x0005faaa) cell_vkb_candidate_pane_g3_ParamLimits

0xb78f,	// (0x0005faaa) cell_vkb_candidate_pane_g3

0xb7aa,	// (0x0005fac5) cell_vkb_candidate_pane_g4_ParamLimits

0xb7aa,	// (0x0005fac5) cell_vkb_candidate_pane_g4

0xb89e,	// (0x0005fbb9) cell_app_pane_cp2_g1_ParamLimits

0xb89e,	// (0x0005fbb9) cell_app_pane_cp2_g1

0xb8bc,	// (0x0005fbd7) cell_app_pane_cp2_g2_ParamLimits

0xb8bc,	// (0x0005fbd7) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x00063ed9) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x00063ed9) cell_app_pane_cp2_g

0xb8c8,	// (0x0005fbe3) cell_app_pane_cp2_t1_ParamLimits

0xb8c8,	// (0x0005fbe3) cell_app_pane_cp2_t1

0xf122,	// (0x0006343d) grid_highlight_pane_cp1_ParamLimits

0xf122,	// (0x0006343d) grid_highlight_pane_cp1

0x7591,	// (0x0005b8ac) cell_hwr_candidate_pane_cp1_ParamLimits

0x7591,	// (0x0005b8ac) cell_hwr_candidate_pane_cp1

0x7544,	// (0x0005b85f) fep_hwr_candidate_drop_down_list_pane_g1

0x75b5,	// (0x0005b8d0) fep_hwr_candidate_drop_down_list_pane_g2

0x75c2,	// (0x0005b8dd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00063ede) fep_hwr_candidate_drop_down_list_pane_g

0x75cf,	// (0x0005b8ea) fep_hwr_candidate_drop_down_list_scroll_pane

0x75d8,	// (0x0005b8f3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x75d8,	// (0x0005b8f3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x75e5,	// (0x0005b900) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x75e5,	// (0x0005b900) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x75f2,	// (0x0005b90d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x75f2,	// (0x0005b90d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x75ff,	// (0x0005b91a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x75ff,	// (0x0005b91a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x761a,	// (0x0005b935) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x761a,	// (0x0005b935) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7635,	// (0x0005b950) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7635,	// (0x0005b950) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7650,	// (0x0005b96b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7650,	// (0x0005b96b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x766b,	// (0x0005b986) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x766b,	// (0x0005b986) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00063ee5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00063ee5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb8da,	// (0x0005fbf5) cell_vkb_candidate_pane_cp1_ParamLimits

0xb8da,	// (0x0005fbf5) cell_vkb_candidate_pane_cp1

0xb44e,	// (0x0005f769) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb44e,	// (0x0005f769) fep_vkb_candidate_drop_down_list_pane_g1

0xb900,	// (0x0005fc1b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb900,	// (0x0005fc1b) fep_vkb_candidate_drop_down_list_pane_g2

0xb90d,	// (0x0005fc28) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb90d,	// (0x0005fc28) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x00063ef6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x00063ef6) fep_vkb_candidate_drop_down_list_pane_g

0xb91a,	// (0x0005fc35) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb91a,	// (0x0005fc35) fep_vkb_candidate_drop_down_list_scroll_pane

0xb927,	// (0x0005fc42) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb927,	// (0x0005fc42) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb934,	// (0x0005fc4f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb934,	// (0x0005fc4f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb940,	// (0x0005fc5b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb940,	// (0x0005fc5b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb94c,	// (0x0005fc67) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb94c,	// (0x0005fc67) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb96d,	// (0x0005fc88) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb96d,	// (0x0005fc88) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb98e,	// (0x0005fca9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb98e,	// (0x0005fca9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb9af,	// (0x0005fcca) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb9af,	// (0x0005fcca) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb9d0,	// (0x0005fceb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb9d0,	// (0x0005fceb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x00063efd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x00063efd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x530b,	// (0x00059626) title_pane_g1_ParamLimits

0x5318,	// (0x00059633) title_pane_g2_ParamLimits

0xf54e,	// (0x00063869) title_pane_g_ParamLimits

0x11b7,	// (0x000554d2) aid_call2_pane

0x11af,	// (0x000554ca) aid_call_pane

0x11bf,	// (0x000554da) popup_clock_analogue_window_g1

0x11bf,	// (0x000554da) popup_clock_analogue_window_g2

0x6083,	// (0x0005a39e) popup_clock_analogue_window_g3

0x608c,	// (0x0005a3a7) popup_clock_analogue_window_g4

0xe265,	// (0x00062580) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00063a18) popup_clock_analogue_window_g

0x6094,	// (0x0005a3af) popup_clock_analogue_window_t1

0x60d5,	// (0x0005a3f0) clock_digital_number_pane_ParamLimits

0x60d5,	// (0x0005a3f0) clock_digital_number_pane

0x60e1,	// (0x0005a3fc) clock_digital_number_pane_cp02_ParamLimits

0x60e1,	// (0x0005a3fc) clock_digital_number_pane_cp02

0x60ed,	// (0x0005a408) clock_digital_number_pane_cp03_ParamLimits

0x60ed,	// (0x0005a408) clock_digital_number_pane_cp03

0x60f9,	// (0x0005a414) clock_digital_number_pane_cp04_ParamLimits

0x60f9,	// (0x0005a414) clock_digital_number_pane_cp04

0x6105,	// (0x0005a420) clock_digital_separator_pane_ParamLimits

0x6105,	// (0x0005a420) clock_digital_separator_pane

0x6111,	// (0x0005a42c) popup_clock_digital_window_t1_ParamLimits

0x6111,	// (0x0005a42c) popup_clock_digital_window_t1

0xe265,	// (0x00062580) clock_digital_number_pane_g1

0xe265,	// (0x00062580) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00063a23) clock_digital_number_pane_g

0xe265,	// (0x00062580) clock_digital_separator_pane_g1

0xe265,	// (0x00062580) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00063a23) clock_digital_separator_pane_g

0x8512,	// (0x0005c82d) aid_fill_nsta_ParamLimits

0x8658,	// (0x0005c973) indicator_nsta_pane_ParamLimits

0x87e9,	// (0x0005cb04) popup_clock_analogue_window

0x87e9,	// (0x0005cb04) popup_clock_digital_window

0xe2bd,	// (0x000625d8) grid_indicator_nsta_pane_ParamLimits

0xac55,	// (0x0005ef70) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00063dc3) clock_nsta_pane_t

0x5fec,	// (0x0005a307) aid_size_max_handle

0x5ff6,	// (0x0005a311) aid_size_min_handle

0x36bb,	// (0x000579d6) editor_scroll_pane

0xb9eb,	// (0x0005fd06) ex_editor_pane

0xf24b,	// (0x00063566) scroll_pane_cp13

0xf0c1,	// (0x000633dc) scroll_pane_cp14

0x11ee,	// (0x00055509) scroll_pane_cp36

0x60b8,	// (0x0005a3d3) list_single_graphic_hl_pane_cp2_ParamLimits

0x60b8,	// (0x0005a3d3) list_single_graphic_hl_pane_cp2

0x9fda,	// (0x0005e2f5) list_single_graphic_hl_pane_ParamLimits

0x9fda,	// (0x0005e2f5) list_single_graphic_hl_pane

0x4174,	// (0x0005848f) aid_size_min_hl_cp1

0xb9f3,	// (0x0005fd0e) list_highlight_pane_cp34_ParamLimits

0xb9f3,	// (0x0005fd0e) list_highlight_pane_cp34

0xba04,	// (0x0005fd1f) list_single_graphic_hl_pane_g1_ParamLimits

0xba04,	// (0x0005fd1f) list_single_graphic_hl_pane_g1

0x7686,	// (0x0005b9a1) list_single_graphic_hl_pane_g2_ParamLimits

0x7686,	// (0x0005b9a1) list_single_graphic_hl_pane_g2

0x7686,	// (0x0005b9a1) list_single_graphic_hl_pane_g3_ParamLimits

0x7686,	// (0x0005b9a1) list_single_graphic_hl_pane_g3

0xa1b5,	// (0x0005e4d0) list_single_graphic_hl_pane_g4_ParamLimits

0xa1b5,	// (0x0005e4d0) list_single_graphic_hl_pane_g4

0xa2c3,	// (0x0005e5de) list_single_graphic_hl_pane_g5_ParamLimits

0xa2c3,	// (0x0005e5de) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x00063f0e) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x00063f0e) list_single_graphic_hl_pane_g

0x7692,	// (0x0005b9ad) list_single_graphic_hl_pane_t1_ParamLimits

0x7692,	// (0x0005b9ad) list_single_graphic_hl_pane_t1

0xba11,	// (0x0005fd2c) aid_size_min_hl_cp2

0xba1a,	// (0x0005fd35) list_highlight_pane_cp34_cp2_ParamLimits

0xba1a,	// (0x0005fd35) list_highlight_pane_cp34_cp2

0xba04,	// (0x0005fd1f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xba04,	// (0x0005fd1f) list_single_graphic_hl_pane_g1_cp2

0xba27,	// (0x0005fd42) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xba27,	// (0x0005fd42) list_single_graphic_hl_pane_g2_cp2

0xba33,	// (0x0005fd4e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xba33,	// (0x0005fd4e) list_single_graphic_hl_pane_g3_cp2

0xba41,	// (0x0005fd5c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xba41,	// (0x0005fd5c) list_single_graphic_hl_pane_g4_cp2

0xba4d,	// (0x0005fd68) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xba4d,	// (0x0005fd68) list_single_graphic_hl_pane_g5_cp2

0x65e6,	// (0x0005a901) control_pane_g4_ParamLimits

0x65e6,	// (0x0005a901) control_pane_g4

0x84d6,	// (0x0005c7f1) bg_popup_sub_pane_cp10_ParamLimits

0xb1f5,	// (0x0005f510) list_choice_list_pane_ParamLimits

0xb204,	// (0x0005f51f) scroll_pane_cp23

0xec17,	// (0x00062f32) bg_popup_preview_window_pane_cp02_ParamLimits

0xb81b,	// (0x0005fb36) list_preview_fixed_pane_ParamLimits

0xb831,	// (0x0005fb4c) list_preview_fixed_pane_cp_ParamLimits

0xb831,	// (0x0005fb4c) list_preview_fixed_pane_cp

0xb83d,	// (0x0005fb58) popup_preview_fixed_window_g1_ParamLimits

0xb83d,	// (0x0005fb58) popup_preview_fixed_window_g1

0xb849,	// (0x0005fb64) popup_preview_fixed_window_g2_ParamLimits

0xb849,	// (0x0005fb64) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x00063e96) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x00063e96) popup_preview_fixed_window_g

0x5ec2,	// (0x0005a1dd) aid_navi_side_left_pane_ParamLimits

0x5ed7,	// (0x0005a1f2) aid_navi_side_right_pane_ParamLimits

0x5eef,	// (0x0005a20a) navi_icon_pane_stacon_ParamLimits

0x5f03,	// (0x0005a21e) navi_navi_pane_stacon_ParamLimits

0x5eef,	// (0x0005a20a) navi_text_pane_stacon_ParamLimits

0x50a2,	// (0x000593bd) main_text_info_pane

0xba77,	// (0x0005fd92) listscroll_text_info_pane

0xba7f,	// (0x0005fd9a) list_text_info_pane_ParamLimits

0xba7f,	// (0x0005fd9a) list_text_info_pane

0xba8e,	// (0x0005fda9) scroll_pane_cp24_ParamLimits

0xba8e,	// (0x0005fda9) scroll_pane_cp24

0xbaac,	// (0x0005fdc7) list_text_info_pane_t1_ParamLimits

0xbaac,	// (0x0005fdc7) list_text_info_pane_t1

0x6764,	// (0x0005aa7f) popup_fast_swap2_window_ParamLimits

0x6764,	// (0x0005aa7f) popup_fast_swap2_window

0xbad1,	// (0x0005fdec) aid_size_cell_fast2

0xe25b,	// (0x00062576) bg_popup_window_pane_cp17

0x8e60,	// (0x0005d17b) heading_pane_cp2

0xee46,	// (0x00063161) listscroll_fast2_pane

0xbadb,	// (0x0005fdf6) grid_fast2_pane

0xbae5,	// (0x0005fe00) listscroll_fast2_pane_g1

0xbaef,	// (0x0005fe0a) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x00063f19) listscroll_fast2_pane_g

0xf24b,	// (0x00063566) scroll_pane_cp26

0xbaf9,	// (0x0005fe14) cell_fast2_pane_ParamLimits

0xbaf9,	// (0x0005fe14) cell_fast2_pane

0xbb10,	// (0x0005fe2b) cell_fast2_pane_g1

0xbb19,	// (0x0005fe34) cell_fast2_pane_g2

0xbb22,	// (0x0005fe3d) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x00063f1e) cell_fast2_pane_g

0xee88,	// (0x000631a3) grid_highlight_pane_cp9

0x6726,	// (0x0005aa41) main_eswt_pane_ParamLimits

0x6726,	// (0x0005aa41) main_eswt_pane

0xbaa3,	// (0x0005fdbe) list_single_text_info_pane

0xbb2a,	// (0x0005fe45) eswt_ctrl_button_pane

0xbb2a,	// (0x0005fe45) eswt_ctrl_canvas_pane

0xbb32,	// (0x0005fe4d) eswt_ctrl_combo_pane

0xbb2a,	// (0x0005fe45) eswt_ctrl_default_pane

0xbb2a,	// (0x0005fe45) eswt_ctrl_label_pane

0xbb3a,	// (0x0005fe55) eswt_ctrl_wait_pane

0xbb42,	// (0x0005fe5d) eswt_shell_pane

0xe25b,	// (0x00062576) listscroll_eswt_app_pane

0xbb62,	// (0x0005fe7d) popup_eswt_tasktip_window_ParamLimits

0xbb62,	// (0x0005fe7d) popup_eswt_tasktip_window

0x8a9e,	// (0x0005cdb9) bg_popup_window_pane_cp18

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_ParamLimits

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_ParamLimits

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_ParamLimits

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_ParamLimits

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x00063f25) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x00063f25) eswt_control_pane_g

0xf122,	// (0x0006343d) bg_button_pane_ParamLimits

0xf122,	// (0x0006343d) bg_button_pane

0xee9d,	// (0x000631b8) common_borders_pane_copy2_ParamLimits

0xee9d,	// (0x000631b8) common_borders_pane_copy2

0xbba7,	// (0x0005fec2) control_button_pane_g1_ParamLimits

0xbba7,	// (0x0005fec2) control_button_pane_g1

0xbbb3,	// (0x0005fece) control_button_pane_g2_ParamLimits

0xbbb3,	// (0x0005fece) control_button_pane_g2

0xbbbf,	// (0x0005feda) control_button_pane_g3_ParamLimits

0xbbbf,	// (0x0005feda) control_button_pane_g3

0x0002,

0xfc13,	// (0x00063f2e) control_button_pane_g_ParamLimits

0xfc13,	// (0x00063f2e) control_button_pane_g

0xbbd3,	// (0x0005feee) control_button_pane_t1

0xbbe1,	// (0x0005fefc) control_button_pane_t2

0x0001,

0xfc1a,	// (0x00063f35) control_button_pane_t

0x8a12,	// (0x0005cd2d) bg_button_pane_g1

0x8a22,	// (0x0005cd3d) bg_button_pane_g2

0x8a1a,	// (0x0005cd35) bg_button_pane_g3

0x8a32,	// (0x0005cd4d) bg_button_pane_g4

0x8a2a,	// (0x0005cd45) bg_button_pane_g5

0x8a3a,	// (0x0005cd55) bg_button_pane_g6

0x8a42,	// (0x0005cd5d) bg_button_pane_g7

0x8a52,	// (0x0005cd6d) bg_button_pane_g8

0x8a4a,	// (0x0005cd65) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00063b86) bg_button_pane_g

0xb1b0,	// (0x0005f4cb) common_borders_pane_ParamLimits

0xb1b0,	// (0x0005f4cb) common_borders_pane

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_copy1_ParamLimits

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_copy1

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_copy1_ParamLimits

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_copy1

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_copy1_ParamLimits

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_copy1

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_copy1_ParamLimits

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_copy1

0xb1eb,	// (0x0005f506) bg_eswt_ctrl_canvas_pane_g1

0xb1b0,	// (0x0005f4cb) common_borders_pane_cp2_ParamLimits

0xb1b0,	// (0x0005f4cb) common_borders_pane_cp2

0xb1b0,	// (0x0005f4cb) common_borders_pane_cp3_ParamLimits

0xb1b0,	// (0x0005f4cb) common_borders_pane_cp3

0xbbef,	// (0x0005ff0a) separator_horizontal_pane

0xbbf7,	// (0x0005ff12) separator_vertical_pane

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_copy2_ParamLimits

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_copy2

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_copy2_ParamLimits

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_copy2

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_copy2_ParamLimits

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_copy2

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_copy2_ParamLimits

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_copy2

0xe25b,	// (0x00062576) common_borders_pane_cp4

0xbc00,	// (0x0005ff1b) separator_horizontal_pane_g1

0xbc09,	// (0x0005ff24) separator_horizontal_pane_g2

0xbc12,	// (0x0005ff2d) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x00063f3a) separator_horizontal_pane_g

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_copy3_ParamLimits

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_copy3

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_copy3_ParamLimits

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_copy3

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_copy3_ParamLimits

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_copy3

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_copy3_ParamLimits

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_copy3

0xe25b,	// (0x00062576) common_borders_pane_cp5

0xbc1b,	// (0x0005ff36) separator_vertical_pane_g1

0xbc24,	// (0x0005ff3f) separator_vertical_pane_g2

0xbc2d,	// (0x0005ff48) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x00063f41) separator_vertical_pane_g

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_copy4_ParamLimits

0xbb73,	// (0x0005fe8e) eswt_control_pane_g1_copy4

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_copy4_ParamLimits

0xbb80,	// (0x0005fe9b) eswt_control_pane_g2_copy4

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_copy4_ParamLimits

0xbb8d,	// (0x0005fea8) eswt_control_pane_g3_copy4

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_copy4_ParamLimits

0xbb9a,	// (0x0005feb5) eswt_control_pane_g4_copy4

0xbc36,	// (0x0005ff51) eswt_ctrl_combo_button_pane

0xbc3e,	// (0x0005ff59) eswt_ctrl_input_pane

0xbc46,	// (0x0005ff61) popup_choice_list_window_cp70

0xbc4e,	// (0x0005ff69) eswt_ctrl_input_pane_t1

0xe25b,	// (0x00062576) input_focus_pane_cp70

0xb1b0,	// (0x0005f4cb) bg_button_pane_cp70_ParamLimits

0xb1b0,	// (0x0005f4cb) bg_button_pane_cp70

0xbc5c,	// (0x0005ff77) eswt_ctrl_combo_button_pane_g1

0xbc64,	// (0x0005ff7f) wait_bar_pane_cp70

0x8a9e,	// (0x0005cdb9) bg_popup_window_pane_cp70_ParamLimits

0x8a9e,	// (0x0005cdb9) bg_popup_window_pane_cp70

0xbc6c,	// (0x0005ff87) popup_eswt_tasktip_window_t1

0xbc82,	// (0x0005ff9d) wait_bar_pane_cp71_ParamLimits

0xbc82,	// (0x0005ff9d) wait_bar_pane_cp71

0xbc8e,	// (0x0005ffa9) grid_eswt_app_pane

0xf479,	// (0x00063794) scroll_pane_cp70

0xbc97,	// (0x0005ffb2) cell_eswt_app_pane_ParamLimits

0xbc97,	// (0x0005ffb2) cell_eswt_app_pane

0xbcc9,	// (0x0005ffe4) cell_eswt_app_pane_g1_ParamLimits

0xbcc9,	// (0x0005ffe4) cell_eswt_app_pane_g1

0xbcf8,	// (0x00060013) cell_eswt_app_pane_g2_ParamLimits

0xbcf8,	// (0x00060013) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x00063f48) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x00063f48) cell_eswt_app_pane_g

0xbd21,	// (0x0006003c) cell_eswt_app_pane_t1_ParamLimits

0xbd21,	// (0x0006003c) cell_eswt_app_pane_t1

0xbd53,	// (0x0006006e) grid_highlight_pane_cp70_ParamLimits

0xbd53,	// (0x0006006e) grid_highlight_pane_cp70

0x35a4,	// (0x000578bf) set_content_pane_g1

0x8455,	// (0x0005c770) status_small_volume_pane

0x76a8,	// (0x0005b9c3) status_small_volume_pane_g1

0x76b0,	// (0x0005b9cb) volume_small2_pane

0x76b9,	// (0x0005b9d4) volume_small2_pane_g1

0x76c2,	// (0x0005b9dd) volume_small2_pane_g2

0x76cb,	// (0x0005b9e6) volume_small2_pane_g3

0x76d4,	// (0x0005b9ef) volume_small2_pane_g4

0x76dd,	// (0x0005b9f8) volume_small2_pane_g5

0x76e6,	// (0x0005ba01) volume_small2_pane_g6

0x76ef,	// (0x0005ba0a) volume_small2_pane_g7

0x76f8,	// (0x0005ba13) volume_small2_pane_g8

0x7701,	// (0x0005ba1c) volume_small2_pane_g9

0x770a,	// (0x0005ba25) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x00063f4d) volume_small2_pane_g

0xb5a2,	// (0x0005f8bd) fep_vkb_top_text_pane_g1_ParamLimits

0xb5bd,	// (0x0005f8d8) fep_vkb_top_text_pane_t1_ParamLimits

0xb855,	// (0x0005fb70) popup_preview_fixed_window_g3_ParamLimits

0xb855,	// (0x0005fb70) popup_preview_fixed_window_g3

0x6c75,	// (0x0005af90) popup_toolbar_trans_pane

0x9de3,	// (0x0005e0fe) aid_height_set_list_ParamLimits

0x9df4,	// (0x0005e10f) aid_size_parent_ParamLimits

0x84d6,	// (0x0005c7f1) list_highlight_pane_cp2_ParamLimits

0x35a4,	// (0x000578bf) set_content_pane_g1_ParamLimits

0xa057,	// (0x0005e372) list_single_image_pane_ParamLimits

0xa057,	// (0x0005e372) list_single_image_pane

0xbd5f,	// (0x0006007a) aid_size_cell_image_ParamLimits

0xbd5f,	// (0x0006007a) aid_size_cell_image

0xbd6c,	// (0x00060087) grid_single_image_pane_ParamLimits

0xbd6c,	// (0x00060087) grid_single_image_pane

0xf130,	// (0x0006344b) list_single_image_pane_g1_ParamLimits

0xf130,	// (0x0006344b) list_single_image_pane_g1

0xf13c,	// (0x00063457) list_single_image_pane_g2_ParamLimits

0xf13c,	// (0x00063457) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x00063f62) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x00063f62) list_single_image_pane_g

0xbd7a,	// (0x00060095) list_single_image_pane_t1_ParamLimits

0xbd7a,	// (0x00060095) list_single_image_pane_t1

0xbd90,	// (0x000600ab) cell_image_list_pane_ParamLimits

0xbd90,	// (0x000600ab) cell_image_list_pane

0xbda6,	// (0x000600c1) cell_image_list_pane_g1

0xbdaf,	// (0x000600ca) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x00063f67) cell_image_list_pane_g

0xbdb8,	// (0x000600d3) aid_size_cell_tb_trans_pane

0xf122,	// (0x0006343d) bg_tb_trans_pane

0xbdca,	// (0x000600e5) grid_tb_trans_pane

0x8a12,	// (0x0005cd2d) bg_tb_trans_pane_g1

0x8a22,	// (0x0005cd3d) bg_tb_trans_pane_g2

0x8a1a,	// (0x0005cd35) bg_tb_trans_pane_g3

0x8a32,	// (0x0005cd4d) bg_tb_trans_pane_g4

0x8a2a,	// (0x0005cd45) bg_tb_trans_pane_g5

0x8a52,	// (0x0005cd6d) bg_tb_trans_pane_g6

0x8a4a,	// (0x0005cd65) bg_tb_trans_pane_g7

0x8a3a,	// (0x0005cd55) bg_tb_trans_pane_g8

0x8a42,	// (0x0005cd5d) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x00063f6c) bg_tb_trans_pane_g

0xbdde,	// (0x000600f9) cell_toolbar_trans_pane_ParamLimits

0xbdde,	// (0x000600f9) cell_toolbar_trans_pane

0xb1eb,	// (0x0005f506) cell_toolbar_trans_pane_g1

0xae23,	// (0x0005f13e) list_form2_midp_pane_t1

0xae31,	// (0x0005f14c) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00063e09) list_form2_midp_pane_t

0xae3f,	// (0x0005f15a) scroll_pane_cp51_ParamLimits

0xb006,	// (0x0005f321) form2_midp_wait_pane_g1

0xb00f,	// (0x0005f32a) form2_midp_wait_pane_g2

0xb018,	// (0x0005f333) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00063e1e) form2_midp_wait_pane_g

0xe2bd,	// (0x000625d8) list_highlight_pane_cp21_ParamLimits

0xb051,	// (0x0005f36c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb060,	// (0x0005f37b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa010,	// (0x0005e32b) list_single_2graphic_im_pane_ParamLimits

0xa010,	// (0x0005e32b) list_single_2graphic_im_pane

0xbe04,	// (0x0006011f) list_single_2graphic_im_pane_g1_ParamLimits

0xbe04,	// (0x0006011f) list_single_2graphic_im_pane_g1

0xbe15,	// (0x00060130) list_single_2graphic_im_pane_g2_ParamLimits

0xbe15,	// (0x00060130) list_single_2graphic_im_pane_g2

0xbe21,	// (0x0006013c) list_single_2graphic_im_pane_g3_ParamLimits

0xbe21,	// (0x0006013c) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x00063f7f) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x00063f7f) list_single_2graphic_im_pane_g

0xbe41,	// (0x0006015c) list_single_2graphic_im_pane_t1_ParamLimits

0xbe41,	// (0x0006015c) list_single_2graphic_im_pane_t1

0xb861,	// (0x0005fb7c) list_single_graphic_2heading_pane_fp_ParamLimits

0xb861,	// (0x0005fb7c) list_single_graphic_2heading_pane_fp

0x4056,	// (0x00058371) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4056,	// (0x00058371) list_single_graphic_2heading_pane_fp_g1

0xb87a,	// (0x0005fb95) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb87a,	// (0x0005fb95) list_single_graphic_2heading_pane_fp_g2

0xb7d3,	// (0x0005faee) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb7d3,	// (0x0005faee) list_single_graphic_2heading_pane_fp_g3

0xb7df,	// (0x0005fafa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb7df,	// (0x0005fafa) list_single_graphic_2heading_pane_fp_g4

0xb886,	// (0x0005fba1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb886,	// (0x0005fba1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00063ea6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00063ea6) list_single_graphic_2heading_pane_fp_g

0x417d,	// (0x00058498) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x417d,	// (0x00058498) list_single_graphic_2heading_pane_fp_t1

0x408e,	// (0x000583a9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x408e,	// (0x000583a9) list_single_graphic_2heading_pane_fp_t2

0x4193,	// (0x000584ae) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4193,	// (0x000584ae) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x00063f88) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x00063f88) list_single_graphic_2heading_pane_fp_t

0xb264,	// (0x0005f57f) fep_hwr_write_pane_g5_ParamLimits

0xb264,	// (0x0005f57f) fep_hwr_write_pane_g5

0xb270,	// (0x0005f58b) fep_hwr_write_pane_g6_ParamLimits

0xb270,	// (0x0005f58b) fep_hwr_write_pane_g6

0xbb42,	// (0x0005fe5d) eswt_shell_pane_ParamLimits

0x8a9e,	// (0x0005cdb9) bg_popup_window_pane_cp18_ParamLimits

0x9d3a,	// (0x0005e055) heading_pane_cp70

0xbc6c,	// (0x0005ff87) popup_eswt_tasktip_window_t1_ParamLimits

0x8569,	// (0x0005c884) aid_touch_tab_arrow_left

0x8575,	// (0x0005c890) aid_touch_tab_arrow_right

0x5331,	// (0x0005964c) title_pane_g3_ParamLimits

0x5331,	// (0x0005964c) title_pane_g3

0xf0e1,	// (0x000633fc) set_value_pane_g1

0x6c75,	// (0x0005af90) popup_toolbar_trans_pane_ParamLimits

0xbdb8,	// (0x000600d3) aid_size_cell_tb_trans_pane_ParamLimits

0xf122,	// (0x0006343d) bg_tb_trans_pane_ParamLimits

0xbdca,	// (0x000600e5) grid_tb_trans_pane_ParamLimits

0xec17,	// (0x00062f32) cont_note_pane_ParamLimits

0xec17,	// (0x00062f32) cont_note_pane

0xee9d,	// (0x000631b8) cont_snote2_single_text_pane_ParamLimits

0xee9d,	// (0x000631b8) cont_snote2_single_text_pane

0xee9d,	// (0x000631b8) cont_snote2_single_graphic_pane_ParamLimits

0xee9d,	// (0x000631b8) cont_snote2_single_graphic_pane

0x9088,	// (0x0005d3a3) cont_note_wait_pane_ParamLimits

0x9088,	// (0x0005d3a3) cont_note_wait_pane

0x9088,	// (0x0005d3a3) cont_note_image_pane_ParamLimits

0x9088,	// (0x0005d3a3) cont_note_image_pane

0xbe72,	// (0x0006018d) popup_note2_window_g1_ParamLimits

0xbe72,	// (0x0006018d) popup_note2_window_g1

0xbea3,	// (0x000601be) popup_note2_window_t1_ParamLimits

0xbea3,	// (0x000601be) popup_note2_window_t1

0xbee8,	// (0x00060203) popup_note2_window_t2_ParamLimits

0xbee8,	// (0x00060203) popup_note2_window_t2

0xbf2d,	// (0x00060248) popup_note2_window_t3_ParamLimits

0xbf2d,	// (0x00060248) popup_note2_window_t3

0xbf72,	// (0x0006028d) popup_note2_window_t4_ParamLimits

0xbf72,	// (0x0006028d) popup_note2_window_t4

0xec9b,	// (0x00062fb6) popup_note2_window_t5_ParamLimits

0xec9b,	// (0x00062fb6) popup_note2_window_t5

0x0004,

0xfc79,	// (0x00063f94) popup_note2_window_t_ParamLimits

0xfc79,	// (0x00063f94) popup_note2_window_t

0xbfa1,	// (0x000602bc) popup_note2_image_window_g1_ParamLimits

0xbfa1,	// (0x000602bc) popup_note2_image_window_g1

0xbfad,	// (0x000602c8) popup_note2_image_window_g2_ParamLimits

0xbfad,	// (0x000602c8) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x00063f9f) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x00063f9f) popup_note2_image_window_g

0xbfbf,	// (0x000602da) popup_note2_image_window_t1_ParamLimits

0xbfbf,	// (0x000602da) popup_note2_image_window_t1

0xbfd7,	// (0x000602f2) popup_note2_image_window_t2_ParamLimits

0xbfd7,	// (0x000602f2) popup_note2_image_window_t2

0xbfef,	// (0x0006030a) popup_note2_image_window_t3_ParamLimits

0xbfef,	// (0x0006030a) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x00063fa4) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x00063fa4) popup_note2_image_window_t

0x9096,	// (0x0005d3b1) popup_note2_wait_window_g1_ParamLimits

0x9096,	// (0x0005d3b1) popup_note2_wait_window_g1

0xc00b,	// (0x00060326) popup_note2_wait_window_g2_ParamLimits

0xc00b,	// (0x00060326) popup_note2_wait_window_g2

0x90ae,	// (0x0005d3c9) popup_note2_wait_window_g3_ParamLimits

0x90ae,	// (0x0005d3c9) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x00063fab) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x00063fab) popup_note2_wait_window_g

0xc017,	// (0x00060332) popup_note2_wait_window_t1_ParamLimits

0xc017,	// (0x00060332) popup_note2_wait_window_t1

0xc035,	// (0x00060350) popup_note2_wait_window_t2_ParamLimits

0xc035,	// (0x00060350) popup_note2_wait_window_t2

0xc053,	// (0x0006036e) popup_note2_wait_window_t3_ParamLimits

0xc053,	// (0x0006036e) popup_note2_wait_window_t3

0xc065,	// (0x00060380) popup_note2_wait_window_t4_ParamLimits

0xc065,	// (0x00060380) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x00063fb2) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x00063fb2) popup_note2_wait_window_t

0xc077,	// (0x00060392) wait_bar2_pane_ParamLimits

0xc077,	// (0x00060392) wait_bar2_pane

0xc08f,	// (0x000603aa) popup_snote2_single_text_window_g1_ParamLimits

0xc08f,	// (0x000603aa) popup_snote2_single_text_window_g1

0xc0b7,	// (0x000603d2) popup_snote2_single_text_window_t1_ParamLimits

0xc0b7,	// (0x000603d2) popup_snote2_single_text_window_t1

0xc103,	// (0x0006041e) popup_snote2_single_text_window_t2_ParamLimits

0xc103,	// (0x0006041e) popup_snote2_single_text_window_t2

0xc14f,	// (0x0006046a) popup_snote2_single_text_window_t3_ParamLimits

0xc14f,	// (0x0006046a) popup_snote2_single_text_window_t3

0xc190,	// (0x000604ab) popup_snote2_single_text_window_t4_ParamLimits

0xc190,	// (0x000604ab) popup_snote2_single_text_window_t4

0xc1c6,	// (0x000604e1) popup_snote2_single_text_window_t5_ParamLimits

0xc1c6,	// (0x000604e1) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x00063fbb) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x00063fbb) popup_snote2_single_text_window_t

0xc1f1,	// (0x0006050c) popup_snote2_single_graphic_window_g1_ParamLimits

0xc1f1,	// (0x0006050c) popup_snote2_single_graphic_window_g1

0xc219,	// (0x00060534) popup_snote2_single_graphic_window_g2_ParamLimits

0xc219,	// (0x00060534) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x00063fc6) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x00063fc6) popup_snote2_single_graphic_window_g

0xc241,	// (0x0006055c) popup_snote2_single_graphic_window_t1_ParamLimits

0xc241,	// (0x0006055c) popup_snote2_single_graphic_window_t1

0xc28d,	// (0x000605a8) popup_snote2_single_graphic_window_t2_ParamLimits

0xc28d,	// (0x000605a8) popup_snote2_single_graphic_window_t2

0xc14f,	// (0x0006046a) popup_snote2_single_graphic_window_t3_ParamLimits

0xc14f,	// (0x0006046a) popup_snote2_single_graphic_window_t3

0xc190,	// (0x000604ab) popup_snote2_single_graphic_window_t4_ParamLimits

0xc190,	// (0x000604ab) popup_snote2_single_graphic_window_t4

0xc1c6,	// (0x000604e1) popup_snote2_single_graphic_window_t5_ParamLimits

0xc1c6,	// (0x000604e1) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x00063fcb) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x00063fcb) popup_snote2_single_graphic_window_t

0xacef,	// (0x0005f00a) clock_nsta_pane_cp2_t1

0xacef,	// (0x0005f00a) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00063ddf) clock_nsta_pane_cp2_t

0x32d5,	// (0x000575f0) form_field_data_wide_pane_g1_ParamLimits

0xf130,	// (0x0006344b) form_field_data_wide_pane_g2_ParamLimits

0xf130,	// (0x0006344b) form_field_data_wide_pane_g2

0xf13c,	// (0x00063457) form_field_data_wide_pane_g3_ParamLimits

0xf13c,	// (0x00063457) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0006399b) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0006399b) form_field_data_wide_pane_g

0xabf1,	// (0x0005ef0c) grid_touch_3_pane_ParamLimits

0xabf1,	// (0x0005ef0c) grid_touch_3_pane

0xc302,	// (0x0006061d) cell_touch_3_pane_ParamLimits

0xc302,	// (0x0006061d) cell_touch_3_pane

0xb1eb,	// (0x0005f506) cell_touch_3_pane_g1

0xb1eb,	// (0x0005f506) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00063e64) cell_touch_3_pane_g

0xecf3,	// (0x0006300e) cont_query_data_pane

0xecfb,	// (0x00063016) cont_query_data_pane_cp1

0xc335,	// (0x00060650) button_value_adjust_pane_cp7

0xc33d,	// (0x00060658) query_popup_pane_cp3

0x121f,	// (0x0005553a) bg_popup_sub_pane_cp22_ParamLimits

0x6185,	// (0x0005a4a0) navi_navi_volume_pane_cp2

0x61a0,	// (0x0005a4bb) popup_side_volume_key_window_g2

0x61af,	// (0x0005a4ca) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00063a31) popup_side_volume_key_window_g

0x61cc,	// (0x0005a4e7) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00063a38) popup_side_volume_key_window_t

0x346a,	// (0x00057785) popup_side_volume_key_window_ParamLimits

0x58a8,	// (0x00059bc3) list_double_graphic_pane_g4_ParamLimits

0x58a8,	// (0x00059bc3) list_double_graphic_pane_g4

0xa03f,	// (0x0005e35a) list_single_2heading_msg_pane_ParamLimits

0xa03f,	// (0x0005e35a) list_single_2heading_msg_pane

0xa2d7,	// (0x0005e5f2) list_single_2heading_msg_pane_g1_ParamLimits

0xa2d7,	// (0x0005e5f2) list_single_2heading_msg_pane_g1

0xba41,	// (0x0005fd5c) list_single_2heading_msg_pane_g2_ParamLimits

0xba41,	// (0x0005fd5c) list_single_2heading_msg_pane_g2

0xa2e3,	// (0x0005e5fe) list_single_2heading_msg_pane_g3_ParamLimits

0xa2e3,	// (0x0005e5fe) list_single_2heading_msg_pane_g3

0xa2ef,	// (0x0005e60a) list_single_2heading_msg_pane_g4_ParamLimits

0xa2ef,	// (0x0005e60a) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x00063fd6) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x00063fd6) list_single_2heading_msg_pane_g

0x7713,	// (0x0005ba2e) list_single_2heading_msg_pane_t1_ParamLimits

0x7713,	// (0x0005ba2e) list_single_2heading_msg_pane_t1

0x773b,	// (0x0005ba56) list_single_2heading_msg_pane_t2_ParamLimits

0x773b,	// (0x0005ba56) list_single_2heading_msg_pane_t2

0x776a,	// (0x0005ba85) list_single_2heading_msg_pane_t3_ParamLimits

0x776a,	// (0x0005ba85) list_single_2heading_msg_pane_t3

0x41b3,	// (0x000584ce) list_single_2heading_msg_pane_t4_ParamLimits

0x41b3,	// (0x000584ce) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x00063fdf) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x00063fdf) list_single_2heading_msg_pane_t

0xe279,	// (0x00062594) title_pane_g4_ParamLimits

0xe279,	// (0x00062594) title_pane_g4

0x5e12,	// (0x0005a12d) title_pane_stacon_g3_ParamLimits

0x5e12,	// (0x0005a12d) title_pane_stacon_g3

0xbe35,	// (0x00060150) list_single_2graphic_im_pane_g4_ParamLimits

0xbe35,	// (0x00060150) list_single_2graphic_im_pane_g4

0x9af8,	// (0x0005de13) popup_side_volume_key_window_cp

0xa519,	// (0x0005e834) main_idle_act2_pane_t1

0x6d79,	// (0x0005b094) toolbar_button_pane_g10

0x5692,	// (0x000599ad) popup_toolbar_window_cp1

0xace0,	// (0x0005effb) clock_nsta_pane_cp_t1

0xace0,	// (0x0005effb) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00063dda) clock_nsta_pane_cp_t

0x6185,	// (0x0005a4a0) navi_navi_volume_pane_cp2_ParamLimits

0x6194,	// (0x0005a4af) popup_side_volume_key_window_g1_ParamLimits

0x61a0,	// (0x0005a4bb) popup_side_volume_key_window_g2_ParamLimits

0x61af,	// (0x0005a4ca) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00063a31) popup_side_volume_key_window_g_ParamLimits

0x72d7,	// (0x0005b5f2) fep_hwr_aid_pane

0x7380,	// (0x0005b69b) bg_fep_hwr_top_pane_g4_ParamLimits

0xb234,	// (0x0005f54f) fep_hwr_top_pane_g1_ParamLimits

0xb246,	// (0x0005f561) fep_hwr_top_pane_g2_ParamLimits

0x73a0,	// (0x0005b6bb) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00063e2f) fep_hwr_top_pane_g_ParamLimits

0x73b5,	// (0x0005b6d0) fep_hwr_top_text_pane_ParamLimits

0x98ad,	// (0x0005dbc8) aid_touch_tab_arrow_arrow_2

0x98b6,	// (0x0005dbd1) aid_touch_tab_arrow_left_2

0x72eb,	// (0x0005b606) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7322,	// (0x0005b63d) fep_hwr_prediction_pane

0xb39c,	// (0x0005f6b7) fep_vkb_prediction_pane

0xb4a2,	// (0x0005f7bd) fep_vkb_side_pane_g3_ParamLimits

0xb4a2,	// (0x0005f7bd) fep_vkb_side_pane_g3

0x7544,	// (0x0005b85f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x75b5,	// (0x0005b8d0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x75c2,	// (0x0005b8dd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x00063ede) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x77a3,	// (0x0005babe) fep_hwr_prediction_pane_g1

0x77ad,	// (0x0005bac8) fep_hwr_prediction_pane_g2

0x77b5,	// (0x0005bad0) fep_hwr_prediction_pane_g3

0x77bd,	// (0x0005bad8) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x00063fe8) fep_hwr_prediction_pane_g

0xc364,	// (0x0006067f) fep_vkb_prediction_pane_g1

0xc36e,	// (0x00060689) fep_vkb_prediction_pane_g2

0xc376,	// (0x00060691) fep_vkb_prediction_pane_g3

0xc37e,	// (0x00060699) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x00063ff1) fep_vkb_prediction_pane_g

0x70c9,	// (0x0005b3e4) slider_set_pane_g3

0x70dd,	// (0x0005b3f8) slider_set_pane_g4

0x70f5,	// (0x0005b410) slider_set_pane_g5

0x70c9,	// (0x0005b3e4) slider_set_pane_g6

0x710b,	// (0x0005b426) slider_set_pane_g7

0x9f73,	// (0x0005e28e) slider_form_pane_g3

0x9f7c,	// (0x0005e297) slider_form_pane_g4

0x9f84,	// (0x0005e29f) slider_form_pane_g5

0x9f73,	// (0x0005e28e) slider_form_pane_g6

0x9f8c,	// (0x0005e2a7) slider_form_pane_g7

0xa7c7,	// (0x0005eae2) slider_set_pane_vc_g3

0xa7d0,	// (0x0005eaeb) slider_set_pane_vc_g4

0xa7d9,	// (0x0005eaf4) slider_set_pane_vc_g5

0xa7c7,	// (0x0005eae2) slider_set_pane_vc_g6

0xa7e2,	// (0x0005eafd) slider_set_pane_vc_g7

0xa9b6,	// (0x0005ecd1) slider_form_pane_vc_g1

0xa9bf,	// (0x0005ecda) slider_form_pane_vc_g2

0xa9c8,	// (0x0005ece3) slider_form_pane_vc_g3

0xa9b6,	// (0x0005ecd1) slider_form_pane_vc_g4

0xa9d1,	// (0x0005ecec) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00063dac) slider_form_pane_vc_g

0x50a2,	// (0x000593bd) main_idle_act3_pane

0xc386,	// (0x000606a1) ai3_links_pane

0xc38f,	// (0x000606aa) popup_ai3_data_window_ParamLimits

0xc38f,	// (0x000606aa) popup_ai3_data_window

0xe25b,	// (0x00062576) grid_ai3_links_pane

0xc3ad,	// (0x000606c8) cell_ai3_links_pane_ParamLimits

0xc3ad,	// (0x000606c8) cell_ai3_links_pane

0xc3c7,	// (0x000606e2) bg_popup_sub_pane_cp11

0xc3d4,	// (0x000606ef) cell_ai3_links_pane_g1

0xe25b,	// (0x00062576) bg_popup_sub_pane_cp12

0xc3f9,	// (0x00060714) heading_ai3_data_pane

0xc401,	// (0x0006071c) list_ai3_gene_pane

0xc40d,	// (0x00060728) popup_ai3_data_window_g1

0xc415,	// (0x00060730) heading_ai3_data_pane_g1

0xc41d,	// (0x00060738) heading_ai3_data_pane_t1

0xc42b,	// (0x00060746) list_double_ai3_gene_pane_ParamLimits

0xc42b,	// (0x00060746) list_double_ai3_gene_pane

0xc438,	// (0x00060753) list_single_ai3_gene_pane_ParamLimits

0xc438,	// (0x00060753) list_single_ai3_gene_pane

0xb1b0,	// (0x0005f4cb) list_highlight_pane_cp7_ParamLimits

0xb1b0,	// (0x0005f4cb) list_highlight_pane_cp7

0xc445,	// (0x00060760) list_single_a13_gene_pane_t1_ParamLimits

0xc445,	// (0x00060760) list_single_a13_gene_pane_t1

0xc45c,	// (0x00060777) list_single_ai3_gene_pane_g1

0xc465,	// (0x00060780) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x00063ffa) list_single_ai3_gene_pane_g

0xc46d,	// (0x00060788) list_double_ai3_gene_pane_g1_ParamLimits

0xc46d,	// (0x00060788) list_double_ai3_gene_pane_g1

0xc479,	// (0x00060794) list_double_ai3_gene_pane_t1_ParamLimits

0xc479,	// (0x00060794) list_double_ai3_gene_pane_t1

0xc495,	// (0x000607b0) list_double_ai3_gene_pane_t2_ParamLimits

0xc495,	// (0x000607b0) list_double_ai3_gene_pane_t2

0xc4aa,	// (0x000607c5) list_double_ai3_gene_pane_t3_ParamLimits

0xc4aa,	// (0x000607c5) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x00063fff) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x00063fff) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x41a9,	// (0x000584c4) aid_size_min_col_2

0xc34e,	// (0x00060669) aid_size_min_msg_ParamLimits

0xc34e,	// (0x00060669) aid_size_min_msg

0xb5ae,	// (0x0005f8c9) fep_vkb_top_text_pane_g2_ParamLimits

0xb5ae,	// (0x0005f8c9) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00063e5f) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00063e5f) fep_vkb_top_text_pane_g

0x50a2,	// (0x000593bd) main_hc_apps_shell_pane

0xc4c7,	// (0x000607e2) grid_hc_apps_pane_ParamLimits

0xc4c7,	// (0x000607e2) grid_hc_apps_pane

0xc4d6,	// (0x000607f1) list_hc_apps_pane

0xc4de,	// (0x000607f9) scroll_pane_cp37_ParamLimits

0xc4de,	// (0x000607f9) scroll_pane_cp37

0xc4ea,	// (0x00060805) cell_hc_apps_pane_ParamLimits

0xc4ea,	// (0x00060805) cell_hc_apps_pane

0xc5a2,	// (0x000608bd) cell_hc_apps_pane_g1_ParamLimits

0xc5a2,	// (0x000608bd) cell_hc_apps_pane_g1

0xc5d3,	// (0x000608ee) cell_hc_apps_pane_g2_ParamLimits

0xc5d3,	// (0x000608ee) cell_hc_apps_pane_g2

0xc5ef,	// (0x0006090a) cell_hc_apps_pane_g3_ParamLimits

0xc5ef,	// (0x0006090a) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x00064006) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x00064006) cell_hc_apps_pane_g

0xc611,	// (0x0006092c) cell_hc_apps_pane_t1_ParamLimits

0xc611,	// (0x0006092c) cell_hc_apps_pane_t1

0xec17,	// (0x00062f32) grid_highlight_pane_cp10_ParamLimits

0xec17,	// (0x00062f32) grid_highlight_pane_cp10

0xc651,	// (0x0006096c) list_single_hc_apps_pane_ParamLimits

0xc651,	// (0x0006096c) list_single_hc_apps_pane

0xc690,	// (0x000609ab) list_single_hc_apps_pane_g1

0xa307,	// (0x0005e622) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x0006400d) list_single_hc_apps_pane_g

0xa320,	// (0x0005e63b) list_single_hc_apps_pane_g2_copy1

0x77c5,	// (0x0005bae0) list_single_hc_apps_pane_t1

0xe2bd,	// (0x000625d8) bg_set_opt_pane_cp_ParamLimits

0x53e3,	// (0x000596fe) setting_slider_pane_t1_ParamLimits

0x53fc,	// (0x00059717) setting_slider_pane_t2_ParamLimits

0x5416,	// (0x00059731) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00063879) setting_slider_pane_t_ParamLimits

0x542e,	// (0x00059749) slider_set_pane_ParamLimits

0x65fa,	// (0x0005a915) control_pane_g5_ParamLimits

0x65fa,	// (0x0005a915) control_pane_g5

0x9da6,	// (0x0005e0c1) slider_set_pane_g1_ParamLimits

0x70bd,	// (0x0005b3d8) slider_set_pane_g2_ParamLimits

0x70c9,	// (0x0005b3e4) slider_set_pane_g3_ParamLimits

0x70dd,	// (0x0005b3f8) slider_set_pane_g4_ParamLimits

0x70f5,	// (0x0005b410) slider_set_pane_g5_ParamLimits

0x70c9,	// (0x0005b3e4) slider_set_pane_g6_ParamLimits

0x710b,	// (0x0005b426) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00063c84) slider_set_pane_g_ParamLimits

0x354f,	// (0x0005786a) navi_icon_text_pane_ParamLimits

0x8528,	// (0x0005c843) aid_fill_nsta_2_ParamLimits

0x8569,	// (0x0005c884) aid_touch_tab_arrow_left_ParamLimits

0x8575,	// (0x0005c890) aid_touch_tab_arrow_right_ParamLimits

0x85e1,	// (0x0005c8fc) clock_nsta_pane_ParamLimits

0x988f,	// (0x0005dbaa) navi_icon_pane_g1_ParamLimits

0x989b,	// (0x0005dbb6) navi_text_pane_t1_ParamLimits

0xadfd,	// (0x0005f118) navi_icon_text_pane_g1_ParamLimits

0xae09,	// (0x0005f124) navi_icon_text_pane_t1_ParamLimits

0xc690,	// (0x000609ab) list_single_hc_apps_pane_g1_ParamLimits

0xa307,	// (0x0005e622) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x0006400d) list_single_hc_apps_pane_g_ParamLimits

0xa320,	// (0x0005e63b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x77c5,	// (0x0005bae0) list_single_hc_apps_pane_t1_ParamLimits

0x5217,	// (0x00059532) popup_toolbar2_fixed_window_ParamLimits

0x5217,	// (0x00059532) popup_toolbar2_fixed_window

0x6c6b,	// (0x0005af86) popup_toolbar2_float_window

0xe25b,	// (0x00062576) bg_popup_sub_pane_cp27

0xc6a9,	// (0x000609c4) grid_toolbar2_float_pane

0xe25b,	// (0x00062576) bg_popup_sub_pane_cp26

0xc6a9,	// (0x000609c4) grid_toolbar2_fixed_pane

0xc6b1,	// (0x000609cc) cell_toolbar2_fixed_pane_ParamLimits

0xc6b1,	// (0x000609cc) cell_toolbar2_fixed_pane

0xc6c1,	// (0x000609dc) cell_toolbar2_fixed_pane_g1

0xc6ca,	// (0x000609e5) toolbar2_fixed_button_pane

0x8a12,	// (0x0005cd2d) toolbar2_fixed_button_pane_g1

0x8a22,	// (0x0005cd3d) toolbar2_fixed_button_pane_g2

0x8a1a,	// (0x0005cd35) toolbar2_fixed_button_pane_g3

0x8a32,	// (0x0005cd4d) toolbar2_fixed_button_pane_g4

0x8a2a,	// (0x0005cd45) toolbar2_fixed_button_pane_g5

0x8a3a,	// (0x0005cd55) toolbar2_fixed_button_pane_g6

0x8a42,	// (0x0005cd5d) toolbar2_fixed_button_pane_g7

0x8a52,	// (0x0005cd6d) toolbar2_fixed_button_pane_g8

0x8a4a,	// (0x0005cd65) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00063b86) toolbar2_fixed_button_pane_g

0xc6d2,	// (0x000609ed) cell_toolbar2_float_pane_ParamLimits

0xc6d2,	// (0x000609ed) cell_toolbar2_float_pane

0xc6e3,	// (0x000609fe) cell_toolbar2_float_pane_g1

0xc6ca,	// (0x000609e5) toolbar2_fixed_button_pane_cp

0xb30a,	// (0x0005f625) fep_vkb_accented_list_pane_ParamLimits

0xb30a,	// (0x0005f625) fep_vkb_accented_list_pane

0x7524,	// (0x0005b83f) bg_popup_fep_shadow_pane_g9

0x36bb,	// (0x000579d6) bg_popup_fep_shadow_pane_cp3

0xf232,	// (0x0006354d) list_accented_list_pane

0xc6ec,	// (0x00060a07) list_single_accented_list_pane_ParamLimits

0xc6ec,	// (0x00060a07) list_single_accented_list_pane

0x36bb,	// (0x000579d6) list_highlight_pane_cp10

0xc6fd,	// (0x00060a18) list_single_accented_list_pane_t1

0x6bb1,	// (0x0005aecc) popup_slider_window_ParamLimits

0x6bb1,	// (0x0005aecc) popup_slider_window

0xc345,	// (0x00060660) aid_indentation_list_msg

0xc7cd,	// (0x00060ae8) bg_popup_window_pane_cp19

0xc839,	// (0x00060b54) popup_slider_window_g1

0xc855,	// (0x00060b70) popup_slider_window_g2

0xc871,	// (0x00060b8c) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x00064012) popup_slider_window_g

0xc8d7,	// (0x00060bf2) popup_slider_window_t1

0xc94b,	// (0x00060c66) small_volume_slider_vertical_pane

0xb1eb,	// (0x0005f506) small_volume_slider_vertical_pane_g1

0xb1eb,	// (0x0005f506) small_volume_slider_vertical_pane_g2

0xc967,	// (0x00060c82) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x00064024) small_volume_slider_vertical_pane_g

0x4fc5,	// (0x000592e0) area_side_right_pane_ParamLimits

0x4fc5,	// (0x000592e0) area_side_right_pane

0x77f3,	// (0x0005bb0e) aid_size_side_button_ParamLimits

0x77f3,	// (0x0005bb0e) aid_size_side_button

0x7807,	// (0x0005bb22) grid_sctrl_middle_pane_ParamLimits

0x7807,	// (0x0005bb22) grid_sctrl_middle_pane

0x7826,	// (0x0005bb41) sctrl_sk_bottom_pane

0x7837,	// (0x0005bb52) sctrl_sk_top_pane

0x7849,	// (0x0005bb64) aid_touch_sctrl_top

0x7856,	// (0x0005bb71) bg_sctrl_sk_pane_ParamLimits

0x7856,	// (0x0005bb71) bg_sctrl_sk_pane

0x7864,	// (0x0005bb7f) sctrl_sk_top_pane_g1

0x7871,	// (0x0005bb8c) sctrl_sk_top_pane_t1

0x7849,	// (0x0005bb64) aid_touch_sctrl_bottom

0x7856,	// (0x0005bb71) bg_sctrl_sk_pane_cp_ParamLimits

0x7856,	// (0x0005bb71) bg_sctrl_sk_pane_cp

0x788c,	// (0x0005bba7) sctrl_sk_bottom_pane_g1

0x7871,	// (0x0005bb8c) sctrl_sk_bottom_pane_t1

0x7895,	// (0x0005bbb0) cell_sctrl_middle_pane_ParamLimits

0x7895,	// (0x0005bbb0) cell_sctrl_middle_pane

0x78b2,	// (0x0005bbcd) aid_touch_sctrl_middle_ParamLimits

0x78b2,	// (0x0005bbcd) aid_touch_sctrl_middle

0x78c4,	// (0x0005bbdf) bg_sctrl_middle_pane_ParamLimits

0x78c4,	// (0x0005bbdf) bg_sctrl_middle_pane

0x7544,	// (0x0005b85f) cell_sctrl_middle_pane_g1_ParamLimits

0x7544,	// (0x0005b85f) cell_sctrl_middle_pane_g1

0x78d2,	// (0x0005bbed) cell_sctrl_middle_pane_g2_ParamLimits

0x78d2,	// (0x0005bbed) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x00064030) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x00064030) cell_sctrl_middle_pane_g

0x8a12,	// (0x0005cd2d) bg_sctrl_middle_pane_g1

0x8a1a,	// (0x0005cd35) bg_sctrl_middle_pane_g2

0x8a22,	// (0x0005cd3d) bg_sctrl_middle_pane_g3

0x8a2a,	// (0x0005cd45) bg_sctrl_middle_pane_g4

0x8a32,	// (0x0005cd4d) bg_sctrl_middle_pane_g5

0x8a3a,	// (0x0005cd55) bg_sctrl_middle_pane_g6

0x8a42,	// (0x0005cd5d) bg_sctrl_middle_pane_g7

0x8a4a,	// (0x0005cd65) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x00064035) bg_sctrl_middle_pane_g

0x8a52,	// (0x0005cd6d) bg_sctrl_middle_pane_g8_copy1

0x8a12,	// (0x0005cd2d) bg_sctrl_sk_pane_g1

0x8a22,	// (0x0005cd3d) bg_sctrl_sk_pane_g2

0x8a1a,	// (0x0005cd35) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00063b86) bg_sctrl_sk_pane_g

0xf05b,	// (0x00063376) aid_size_touch_scroll_bar

0x8a32,	// (0x0005cd4d) bg_sctrl_sk_pane_g4

0x8a2a,	// (0x0005cd45) bg_sctrl_sk_pane_g5

0x8a3a,	// (0x0005cd55) bg_sctrl_sk_pane_g6

0x8a42,	// (0x0005cd5d) bg_sctrl_sk_pane_g7

0x8a52,	// (0x0005cd6d) bg_sctrl_sk_pane_g8

0x8a4a,	// (0x0005cd65) bg_sctrl_sk_pane_g9

0x67c8,	// (0x0005aae3) popup_fep_china_hwr2_fs_candidate_window

0x67d2,	// (0x0005aaed) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x67d2,	// (0x0005aaed) popup_fep_china_hwr2_fs_control_window

0x7544,	// (0x0005b85f) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x0006402b) sctrl_sk_top_pane_g

0xc970,	// (0x00060c8b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc970,	// (0x00060c8b) aid_fep_china_hwr2_fs_cell

0xc983,	// (0x00060c9e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc983,	// (0x00060c9e) bg_popup_fep_shadow_pane_cp4

0xc99c,	// (0x00060cb7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc99c,	// (0x00060cb7) bg_popup_fep_shadow_pane_cp5

0xc9ae,	// (0x00060cc9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc9ae,	// (0x00060cc9) popup_fep_china_hwr2_fs_control_bar_grid

0xc9be,	// (0x00060cd9) popup_fep_china_hwr2_fs_control_funtion_grid

0xc9c6,	// (0x00060ce1) aid_fep_china_hwr2_fs_candi_cell

0xe25b,	// (0x00062576) bg_popup_fep_shadow_pane_cp6

0xc9d0,	// (0x00060ceb) popup_fep_china_hwr2_fs_candidate_grid

0xc9da,	// (0x00060cf5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc9da,	// (0x00060cf5) cell_fep_china_hwr2_fs_funtion_grid

0xb1eb,	// (0x0005f506) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc9f2,	// (0x00060d0d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc9f2,	// (0x00060d0d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xca00,	// (0x00060d1b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xca00,	// (0x00060d1b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x00064046) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x00064046) cell_fep_china_hwr2_fs_funtion_grid_g

0xca16,	// (0x00060d31) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xca16,	// (0x00060d31) cell_fep_china_hwr2_fs_funtion_grid_t1

0xca2b,	// (0x00060d46) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xca2b,	// (0x00060d46) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x0006404b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x0006404b) cell_fep_china_hwr2_fs_funtion_grid_t

0xca47,	// (0x00060d62) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xca4f,	// (0x00060d6a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xca57,	// (0x00060d72) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x00064050) popup_fep_china_hwr2_fs_control_bar_grid_g

0xca5f,	// (0x00060d7a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xca5f,	// (0x00060d7a) cell_fep_china_hwr2_fs_candidate_grid

0xca7e,	// (0x00060d99) popup_fep_china_hwr2_fs_candidate_grid_g20

0xca86,	// (0x00060da1) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb1eb,	// (0x0005f506) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb1eb,	// (0x0005f506) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00063e64) cell_fep_china_hwr2_fs_candidate_grid_g

0xca8e,	// (0x00060da9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x85ee,	// (0x0005c909) clock_nsta_pane_cp_24_ParamLimits

0x85ee,	// (0x0005c909) clock_nsta_pane_cp_24

0x866e,	// (0x0005c989) indicator_nsta_pane_cp_24_ParamLimits

0x866e,	// (0x0005c989) indicator_nsta_pane_cp_24

0x970b,	// (0x0005da26) heading_pane_g1

0x0001,

0xf8d0,	// (0x00063beb) heading_pane_g

0xa360,	// (0x0005e67b) grid_sct_catagory_button_pane

0xa392,	// (0x0005e6ad) scroll_pane_cp5_ParamLimits

0xae4b,	// (0x0005f166) button_value_adjust_pane_cp5_ParamLimits

0xae4b,	// (0x0005f166) button_value_adjust_pane_cp5

0xaf30,	// (0x0005f24b) form2_midp_time_pane_ParamLimits

0xca9c,	// (0x00060db7) cell_sct_catagory_button_pane_ParamLimits

0xca9c,	// (0x00060db7) cell_sct_catagory_button_pane

0xb1b0,	// (0x0005f4cb) bg_button_pane_cp01_ParamLimits

0xb1b0,	// (0x0005f4cb) bg_button_pane_cp01

0xb1eb,	// (0x0005f506) cell_sct_catagory_button_pane_g1

0x6bf2,	// (0x0005af0d) popup_tb_extension_window

0xcaae,	// (0x00060dc9) aid_size_cell_ext_ParamLimits

0xcaae,	// (0x00060dc9) aid_size_cell_ext

0xec17,	// (0x00062f32) bg_tb_trans_pane_cp1_ParamLimits

0xec17,	// (0x00062f32) bg_tb_trans_pane_cp1

0xcace,	// (0x00060de9) grid_tb_ext_pane_ParamLimits

0xcace,	// (0x00060de9) grid_tb_ext_pane

0xcafc,	// (0x00060e17) cell_tb_ext_pane_ParamLimits

0xcafc,	// (0x00060e17) cell_tb_ext_pane

0xcb13,	// (0x00060e2e) cell_tb_ext_pane_g1_ParamLimits

0xcb13,	// (0x00060e2e) cell_tb_ext_pane_g1

0xcb30,	// (0x00060e4b) cell_tb_ext_pane_t1

0xec17,	// (0x00062f32) list_highlight_pane_cp11_ParamLimits

0xec17,	// (0x00062f32) list_highlight_pane_cp11

0x5236,	// (0x00059551) popup_uni_indicator_window_ParamLimits

0x5236,	// (0x00059551) popup_uni_indicator_window

0xf122,	// (0x0006343d) bg_popup_sub_pane_cp14

0xcb4b,	// (0x00060e66) list_uniindi_pane

0xcb57,	// (0x00060e72) uniindi_top_pane

0xec17,	// (0x00062f32) bg_uniindi_top_pane

0xcb78,	// (0x00060e93) uniindi_top_pane_g1

0xcb8e,	// (0x00060ea9) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x00064057) uniindi_top_pane_g

0xcbb8,	// (0x00060ed3) uniindi_top_pane_t1

0xcbe4,	// (0x00060eff) list_single_uniindi_pane_ParamLimits

0xcbe4,	// (0x00060eff) list_single_uniindi_pane

0xb1eb,	// (0x0005f506) bg_uniindi_top_pane_g1

0xcbf6,	// (0x00060f11) list_single_uniindi_pane_g1

0xcc09,	// (0x00060f24) list_single_uniindi_pane_t1

0x50a2,	// (0x000593bd) control_bg_pane

0xcc2e,	// (0x00060f49) bg_sctrl_sk_pane_cp1

0xcc37,	// (0x00060f52) bg_sctrl_sk_pane_cp2

0xcc40,	// (0x00060f5b) control_bg_pane_g1

0xcc49,	// (0x00060f64) control_bg_pane_g2

0x0001,

0xfd45,	// (0x00064060) control_bg_pane_g

0xac94,	// (0x0005efaf) cell_indicator_nsta_pane_g1_ParamLimits

0xaca2,	// (0x0005efbd) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00063dc8) cell_indicator_nsta_pane_g_ParamLimits

0x402c,	// (0x00058347) form2_midp_time_pane_t1_ParamLimits

0x6726,	// (0x0005aa41) main_idle_act4_pane_ParamLimits

0x6726,	// (0x0005aa41) main_idle_act4_pane

0x6bf2,	// (0x0005af0d) popup_tb_extension_window_ParamLimits

0xcaee,	// (0x00060e09) tb_ext_find_pane_ParamLimits

0xcaee,	// (0x00060e09) tb_ext_find_pane

0xcc52,	// (0x00060f6d) ai_gene_pane_1_cp1

0x3741,	// (0x00057a5c) ai_gene_pane_2_cp1

0xcc5a,	// (0x00060f75) list_single_idle_plugin_calendar_pane

0xcc63,	// (0x00060f7e) list_single_idle_plugin_notification_pane

0xcc6c,	// (0x00060f87) list_single_idle_plugin_player_pane

0xcc75,	// (0x00060f90) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcc75,	// (0x00060f90) list_single_idle_plugin_shortcut_pane

0xcc97,	// (0x00060fb2) main_idle_act4_pane_t1

0xcca9,	// (0x00060fc4) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x00064065) main_idle_act4_pane_t

0xccbb,	// (0x00060fd6) middle_sk_idle_act4_pane_ParamLimits

0xccbb,	// (0x00060fd6) middle_sk_idle_act4_pane

0xccd1,	// (0x00060fec) popup_clock_digital_analogue_window_cp2

0xcceb,	// (0x00061006) shortcut_wheel_idle_act4_pane_ParamLimits

0xcceb,	// (0x00061006) shortcut_wheel_idle_act4_pane

0xb1eb,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g1

0xb1eb,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g2

0xb1eb,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g3

0xb1eb,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g4

0xb1eb,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g5

0xccff,	// (0x0006101a) shortcut_wheel_idle_act4_pane_g6

0xcd07,	// (0x00061022) shortcut_wheel_idle_act4_pane_g7

0xcd0f,	// (0x0006102a) shortcut_wheel_idle_act4_pane_g8

0xcd17,	// (0x00061032) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x0006406a) shortcut_wheel_idle_act4_pane_g

0xb44e,	// (0x0005f769) middle_sk_idle_act4_pane_g1_ParamLimits

0xb44e,	// (0x0005f769) middle_sk_idle_act4_pane_g1

0xcd7b,	// (0x00061096) middle_sk_idle_act4_pane_g2_ParamLimits

0xcd7b,	// (0x00061096) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x0006408d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x0006408d) middle_sk_idle_act4_pane_g

0xcd87,	// (0x000610a2) middle_sk_idle_act4_pane_t1_ParamLimits

0xcd87,	// (0x000610a2) middle_sk_idle_act4_pane_t1

0xcda4,	// (0x000610bf) grid_ai_shortcut_pane_ParamLimits

0xcda4,	// (0x000610bf) grid_ai_shortcut_pane

0xcdbd,	// (0x000610d8) list_highlight_pane_cp16_ParamLimits

0xcdbd,	// (0x000610d8) list_highlight_pane_cp16

0xcdca,	// (0x000610e5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcdca,	// (0x000610e5) list_single_idle_plugin_shortcut_pane_g1

0xcdd6,	// (0x000610f1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcdd6,	// (0x000610f1) list_single_idle_plugin_shortcut_pane_g2

0xcdf0,	// (0x0006110b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcdf0,	// (0x0006110b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x00064092) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x00064092) list_single_idle_plugin_shortcut_pane_g

0xce03,	// (0x0006111e) cell_ai_shortcut_pane_ParamLimits

0xce03,	// (0x0006111e) cell_ai_shortcut_pane

0xce26,	// (0x00061141) cell_ai_shortcut_pane_g1_ParamLimits

0xce26,	// (0x00061141) cell_ai_shortcut_pane_g1

0xcc52,	// (0x00060f6d) ai_gene_pane_1_cp2

0xce48,	// (0x00061163) ai_gene_pane_2_cp2

0xce50,	// (0x0006116b) list_highlight_pane_cp15

0xce59,	// (0x00061174) list_single_idle_plugin_calendar_pane_g1

0xce50,	// (0x0006116b) list_highlight_pane_cp17

0xce61,	// (0x0006117c) list_single_idle_plugin_calendar_pane_g1_copy1

0xce69,	// (0x00061184) list_single_idle_plugin_player_pane_g1

0xa5c7,	// (0x0005e8e2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x00064099) list_single_idle_plugin_player_pane_g

0xce71,	// (0x0006118c) list_single_idle_plugin_player_pane_t1

0xce7f,	// (0x0006119a) list_single_idle_plugin_player_pane_t2

0xce8d,	// (0x000611a8) list_single_idle_plugin_player_pane_t3

0xce9b,	// (0x000611b6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x0006409e) list_single_idle_plugin_player_pane_t

0xcea9,	// (0x000611c4) wait_bar_pane_cp15

0xceb1,	// (0x000611cc) grid_ai_notification_pane

0xa5c7,	// (0x0005e8e2) list_single_idle_plugin_notification_pane_g1

0xceba,	// (0x000611d5) cell_ai_notification_pane_ParamLimits

0xceba,	// (0x000611d5) cell_ai_notification_pane

0xcec7,	// (0x000611e2) cell_ai_notification_pane_g1

0xcecf,	// (0x000611ea) cell_ai_notification_pane_t1

0xcedd,	// (0x000611f8) tb_ext_find_button_pane

0xcee5,	// (0x00061200) tb_ext_find_pane_g1

0xceed,	// (0x00061208) tb_ext_find_pane_t1

0x11bf,	// (0x000554da) tb_ext_find_button_pane_g1

0xcefb,	// (0x00061216) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x000640a7) tb_ext_find_button_pane_g

0xcc97,	// (0x00060fb2) main_idle_act4_pane_t1_ParamLimits

0xcca9,	// (0x00060fc4) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x00064065) main_idle_act4_pane_t_ParamLimits

0xccd1,	// (0x00060fec) popup_clock_digital_analogue_window_cp2_ParamLimits

0xccdf,	// (0x00060ffa) sat_plugin_idle_act4_pane_ParamLimits

0xccdf,	// (0x00060ffa) sat_plugin_idle_act4_pane

0xcf04,	// (0x0006121f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcf04,	// (0x0006121f) sat_plugin_idle_act4_pane_t1

0xcf17,	// (0x00061232) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcf17,	// (0x00061232) sat_plugin_idle_act4_pane_t2

0xcf2a,	// (0x00061245) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcf2a,	// (0x00061245) sat_plugin_idle_act4_pane_t3

0xcf3d,	// (0x00061258) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcf3d,	// (0x00061258) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x000640ac) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x000640ac) sat_plugin_idle_act4_pane_t

0x5167,	// (0x00059482) popup_battery_window_ParamLimits

0x5167,	// (0x00059482) popup_battery_window

0xec17,	// (0x00062f32) bg_popup_sub_pane_cp25_ParamLimits

0xec17,	// (0x00062f32) bg_popup_sub_pane_cp25

0xcf50,	// (0x0006126b) popup_battery_window_g1_ParamLimits

0xcf50,	// (0x0006126b) popup_battery_window_g1

0xcf5c,	// (0x00061277) popup_battery_window_t1_ParamLimits

0xcf5c,	// (0x00061277) popup_battery_window_t1

0xcf6e,	// (0x00061289) popup_battery_window_t2_ParamLimits

0xcf6e,	// (0x00061289) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x000640b5) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x000640b5) popup_battery_window_t

0x6419,	// (0x0005a734) midp_canvas_pane_ParamLimits

0x647c,	// (0x0005a797) midp_keypad_pane_ParamLimits

0x647c,	// (0x0005a797) midp_keypad_pane

0x84d6,	// (0x0005c7f1) main_midp_pane_ParamLimits

0xacfe,	// (0x0005f019) signal_pane_g2_cp_ParamLimits

0xcf8b,	// (0x000612a6) aid_size_cell_midp_keypad_ParamLimits

0xcf8b,	// (0x000612a6) aid_size_cell_midp_keypad

0xcfa5,	// (0x000612c0) midp_keyp_game_grid_pane_ParamLimits

0xcfa5,	// (0x000612c0) midp_keyp_game_grid_pane

0xcfc5,	// (0x000612e0) midp_keyp_rocker_pane_ParamLimits

0xcfc5,	// (0x000612e0) midp_keyp_rocker_pane

0xcff4,	// (0x0006130f) midp_keyp_sk_left_pane_ParamLimits

0xcff4,	// (0x0006130f) midp_keyp_sk_left_pane

0xd050,	// (0x0006136b) midp_keyp_sk_right_pane_ParamLimits

0xd050,	// (0x0006136b) midp_keyp_sk_right_pane

0xe25b,	// (0x00062576) bg_button_pane_cp03

0xd0ac,	// (0x000613c7) midp_keyp_sk_left_pane_g1

0xe25b,	// (0x00062576) bg_button_pane_cp04

0xd0ac,	// (0x000613c7) midp_keyp_sk_right_pane_g1

0xb1eb,	// (0x0005f506) midp_keyp_rocker_pane_g1

0xd0b4,	// (0x000613cf) keyp_game_cell_pane_ParamLimits

0xd0b4,	// (0x000613cf) keyp_game_cell_pane

0xe25b,	// (0x00062576) bg_button_pane_cp02

0xd0c7,	// (0x000613e2) keyp_game_cell_pane_g1

0x51b1,	// (0x000594cc) popup_fep_vkb2_window_ParamLimits

0x51b1,	// (0x000594cc) popup_fep_vkb2_window

0x78f0,	// (0x0005bc0b) aid_size_cell_vkb2_ParamLimits

0x78f0,	// (0x0005bc0b) aid_size_cell_vkb2

0x7944,	// (0x0005bc5f) popup_fep_vkb2_window_g1_ParamLimits

0x7944,	// (0x0005bc5f) popup_fep_vkb2_window_g1

0x798c,	// (0x0005bca7) vkb2_area_bottom_pane_ParamLimits

0x798c,	// (0x0005bca7) vkb2_area_bottom_pane

0x79e0,	// (0x0005bcfb) vkb2_area_keypad_pane_ParamLimits

0x79e0,	// (0x0005bcfb) vkb2_area_keypad_pane

0x7a26,	// (0x0005bd41) vkb2_area_top_pane_ParamLimits

0x7a26,	// (0x0005bd41) vkb2_area_top_pane

0x7aa0,	// (0x0005bdbb) vkb2_top_entry_pane_ParamLimits

0x7aa0,	// (0x0005bdbb) vkb2_top_entry_pane

0x7aca,	// (0x0005bde5) vkb2_top_grid_left_pane_ParamLimits

0x7aca,	// (0x0005bde5) vkb2_top_grid_left_pane

0x7ae8,	// (0x0005be03) vkb2_top_grid_right_pane_ParamLimits

0x7ae8,	// (0x0005be03) vkb2_top_grid_right_pane

0x7b06,	// (0x0005be21) vkb2_cell_keypad_pane_ParamLimits

0x7b06,	// (0x0005be21) vkb2_cell_keypad_pane

0x7bd7,	// (0x0005bef2) vkb2_area_bottom_grid_pane_ParamLimits

0x7bd7,	// (0x0005bef2) vkb2_area_bottom_grid_pane

0x7bfd,	// (0x0005bf18) vkb2_area_bottom_pane_g1_ParamLimits

0x7bfd,	// (0x0005bf18) vkb2_area_bottom_pane_g1

0x7c21,	// (0x0005bf3c) vkb2_area_bottom_pane_g2_ParamLimits

0x7c21,	// (0x0005bf3c) vkb2_area_bottom_pane_g2

0x7c4f,	// (0x0005bf6a) vkb2_area_bottom_pane_g3_ParamLimits

0x7c4f,	// (0x0005bf6a) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x000640ba) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x000640ba) vkb2_area_bottom_pane_g

0x7cb0,	// (0x0005bfcb) vkb2_top_cell_left_pane_ParamLimits

0x7cb0,	// (0x0005bfcb) vkb2_top_cell_left_pane

0xd0d8,	// (0x000613f3) vkb2_top_entry_pane_g1_ParamLimits

0xd0d8,	// (0x000613f3) vkb2_top_entry_pane_g1

0xd0e6,	// (0x00061401) vkb2_top_entry_pane_t1_ParamLimits

0xd0e6,	// (0x00061401) vkb2_top_entry_pane_t1

0xd118,	// (0x00061433) vkb2_top_entry_pane_t2_ParamLimits

0xd118,	// (0x00061433) vkb2_top_entry_pane_t2

0xd14a,	// (0x00061465) vkb2_top_entry_pane_t3_ParamLimits

0xd14a,	// (0x00061465) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x000640c1) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x000640c1) vkb2_top_entry_pane_t

0x7cfd,	// (0x0005c018) vkb2_top_grid_right_pane_g1_ParamLimits

0x7cfd,	// (0x0005c018) vkb2_top_grid_right_pane_g1

0x7d13,	// (0x0005c02e) vkb2_top_grid_right_pane_g2_ParamLimits

0x7d13,	// (0x0005c02e) vkb2_top_grid_right_pane_g2

0x7d2b,	// (0x0005c046) vkb2_top_grid_right_pane_g3_ParamLimits

0x7d2b,	// (0x0005c046) vkb2_top_grid_right_pane_g3

0x7d43,	// (0x0005c05e) vkb2_top_grid_right_pane_g4_ParamLimits

0x7d43,	// (0x0005c05e) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x000640c8) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x000640c8) vkb2_top_grid_right_pane_g

0x7d59,	// (0x0005c074) vkb2_top_cell_left_pane_g1

0x7d70,	// (0x0005c08b) vkb2_cell_keypad_pane_g1_ParamLimits

0x7d70,	// (0x0005c08b) vkb2_cell_keypad_pane_g1

0xd16e,	// (0x00061489) vkb2_cell_keypad_pane_t1_ParamLimits

0xd16e,	// (0x00061489) vkb2_cell_keypad_pane_t1

0x7d7e,	// (0x0005c099) vkb2_cell_bottom_grid_pane_ParamLimits

0x7d7e,	// (0x0005c099) vkb2_cell_bottom_grid_pane

0x7db7,	// (0x0005c0d2) vkb2_cell_bottom_grid_pane_g1

0xcd1f,	// (0x0006103a) aid_call2_pane_cp02

0xcd27,	// (0x00061042) aid_call_pane_cp02

0xcd2f,	// (0x0006104a) clock_digital_number_pane_cp10

0xcd37,	// (0x00061052) clock_digital_number_pane_cp11

0xcd3f,	// (0x0006105a) clock_digital_number_pane_cp12

0xcd47,	// (0x00061062) clock_digital_number_pane_cp13

0xcd4f,	// (0x0006106a) clock_digital_separator_pane_cp10

0x11bf,	// (0x000554da) popup_clock_digital_analogue_window_cp2_g1

0x11bf,	// (0x000554da) popup_clock_digital_analogue_window_cp2_g2

0xcd57,	// (0x00061072) popup_clock_digital_analogue_window_cp2_g3

0x11bf,	// (0x000554da) popup_clock_digital_analogue_window_cp2_g4

0xcd57,	// (0x00061072) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x0006407d) popup_clock_digital_analogue_window_cp2_g

0xcd5f,	// (0x0006107a) popup_clock_digital_analogue_window_cp2_t1

0xcd6d,	// (0x00061088) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x00064088) popup_clock_digital_analogue_window_cp2_t

0xb1eb,	// (0x0005f506) clock_digital_number_pane_cp10_g1

0xb1eb,	// (0x0005f506) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00063e64) clock_digital_number_pane_cp10_g

0xb1eb,	// (0x0005f506) clock_digital_separator_pane_cp10_g1

0xb1eb,	// (0x0005f506) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00063e64) clock_digital_separator_pane_cp10_g

0xcb9a,	// (0x00060eb5) uniindi_top_pane_g3

0xcbab,	// (0x00060ec6) uniindi_top_pane_g4

0x7b91,	// (0x0005beac) vkb2_row_keypad_pane_ParamLimits

0x7b91,	// (0x0005beac) vkb2_row_keypad_pane

0x7dd3,	// (0x0005c0ee) vkb2_cell_t_keypad_pane_ParamLimits

0x7dd3,	// (0x0005c0ee) vkb2_cell_t_keypad_pane

0x7de3,	// (0x0005c0fe) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7de3,	// (0x0005c0fe) vkb2_cell_t_keypad_pane_cp08

0x7df8,	// (0x0005c113) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7df8,	// (0x0005c113) vkb2_cell_t_keypad_pane_cp09

0x7e0c,	// (0x0005c127) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7e0c,	// (0x0005c127) vkb2_cell_t_keypad_pane_cp01

0x7e1d,	// (0x0005c138) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7e1d,	// (0x0005c138) vkb2_cell_t_keypad_pane_cp02

0x7e2e,	// (0x0005c149) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7e2e,	// (0x0005c149) vkb2_cell_t_keypad_pane_cp03

0x7e3f,	// (0x0005c15a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7e3f,	// (0x0005c15a) vkb2_cell_t_keypad_pane_cp04

0x7e50,	// (0x0005c16b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7e50,	// (0x0005c16b) vkb2_cell_t_keypad_pane_cp05

0x7e61,	// (0x0005c17c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7e61,	// (0x0005c17c) vkb2_cell_t_keypad_pane_cp06

0x7e74,	// (0x0005c18f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7e74,	// (0x0005c18f) vkb2_cell_t_keypad_pane_cp07

0x7e89,	// (0x0005c1a4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7e89,	// (0x0005c1a4) vkb2_cell_t_keypad_pane_cp10

0x7544,	// (0x0005b85f) vkb2_cell_t_keypad_pane_g1

0xd185,	// (0x000614a0) vkb2_cell_t_keypad_pane_t1

0x50a2,	// (0x000593bd) popup_grid_graphic2_window

0xd197,	// (0x000614b2) aid_size_cell_graphic2_ParamLimits

0xd197,	// (0x000614b2) aid_size_cell_graphic2

0xd1cf,	// (0x000614ea) bg_popup_window_pane_cp21_ParamLimits

0xd1cf,	// (0x000614ea) bg_popup_window_pane_cp21

0xd1dd,	// (0x000614f8) graphic2_pages_pane_ParamLimits

0xd1dd,	// (0x000614f8) graphic2_pages_pane

0xd223,	// (0x0006153e) grid_graphic2_control_pane_ParamLimits

0xd223,	// (0x0006153e) grid_graphic2_control_pane

0xd261,	// (0x0006157c) grid_graphic2_pane_ParamLimits

0xd261,	// (0x0006157c) grid_graphic2_pane

0xd2d7,	// (0x000615f2) cell_graphic2_pane

0x50a2,	// (0x000593bd) main_comp_mode_pane

0xc401,	// (0x0006071c) list_ai3_gene_pane_ParamLimits

0xc7cd,	// (0x00060ae8) bg_popup_window_pane_cp19_ParamLimits

0xc7d9,	// (0x00060af4) bg_touch_area_indi_pane_ParamLimits

0xc7d9,	// (0x00060af4) bg_touch_area_indi_pane

0xc7ef,	// (0x00060b0a) bg_touch_area_indi_pane_cp01_ParamLimits

0xc7ef,	// (0x00060b0a) bg_touch_area_indi_pane_cp01

0xc805,	// (0x00060b20) bg_touch_area_indi_pane_cp02_ParamLimits

0xc805,	// (0x00060b20) bg_touch_area_indi_pane_cp02

0xc81f,	// (0x00060b3a) bg_touch_area_indi_pane_cp03_ParamLimits

0xc81f,	// (0x00060b3a) bg_touch_area_indi_pane_cp03

0xc839,	// (0x00060b54) popup_slider_window_g1_ParamLimits

0xc855,	// (0x00060b70) popup_slider_window_g2_ParamLimits

0xc871,	// (0x00060b8c) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x00064012) popup_slider_window_g_ParamLimits

0xc8d7,	// (0x00060bf2) popup_slider_window_t1_ParamLimits

0xc94b,	// (0x00060c66) small_volume_slider_vertical_pane_ParamLimits

0xd2d7,	// (0x000615f2) cell_graphic2_pane_ParamLimits

0xd32c,	// (0x00061647) bg_button_pane_cp10_ParamLimits

0xd32c,	// (0x00061647) bg_button_pane_cp10

0xd341,	// (0x0006165c) bg_button_pane_cp11_ParamLimits

0xd341,	// (0x0006165c) bg_button_pane_cp11

0xd356,	// (0x00061671) graphic2_pages_pane_g1_ParamLimits

0xd356,	// (0x00061671) graphic2_pages_pane_g1

0xd371,	// (0x0006168c) graphic2_pages_pane_g2_ParamLimits

0xd371,	// (0x0006168c) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x000640d6) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x000640d6) graphic2_pages_pane_g

0xd389,	// (0x000616a4) graphic2_pages_pane_t1_ParamLimits

0xd389,	// (0x000616a4) graphic2_pages_pane_t1

0xd39f,	// (0x000616ba) cell_graphic2_control_pane_ParamLimits

0xd39f,	// (0x000616ba) cell_graphic2_control_pane

0xd3bf,	// (0x000616da) cell_graphic2_pane_g1_ParamLimits

0xd3bf,	// (0x000616da) cell_graphic2_pane_g1

0xd3cc,	// (0x000616e7) cell_graphic2_pane_g2_ParamLimits

0xd3cc,	// (0x000616e7) cell_graphic2_pane_g2

0xd3d9,	// (0x000616f4) cell_graphic2_pane_g3_ParamLimits

0xd3d9,	// (0x000616f4) cell_graphic2_pane_g3

0xd3e6,	// (0x00061701) cell_graphic2_pane_g4_ParamLimits

0xd3e6,	// (0x00061701) cell_graphic2_pane_g4

0xd3f3,	// (0x0006170e) cell_graphic2_pane_g5_ParamLimits

0xd3f3,	// (0x0006170e) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x000640db) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x000640db) cell_graphic2_pane_g

0xd40e,	// (0x00061729) cell_graphic2_pane_t1_ParamLimits

0xd40e,	// (0x00061729) cell_graphic2_pane_t1

0x8a9e,	// (0x0005cdb9) grid_highlight_pane_cp11_ParamLimits

0x8a9e,	// (0x0005cdb9) grid_highlight_pane_cp11

0xec17,	// (0x00062f32) bg_button_pane_cp05

0xd445,	// (0x00061760) cell_graphic2_control_pane_g1

0xb1eb,	// (0x0005f506) bg_touch_area_indi_pane_g1

0xd46d,	// (0x00061788) aid_cmod_rocker_key_size

0xd477,	// (0x00061792) aid_cmode_itu_key_size

0xd481,	// (0x0006179c) main_cmode_video_pane

0xd48b,	// (0x000617a6) main_comp_mode_itu_pane

0xd497,	// (0x000617b2) main_comp_mode_rocker_pane

0xd4a3,	// (0x000617be) cell_cmode_rocker_pane_ParamLimits

0xd4a3,	// (0x000617be) cell_cmode_rocker_pane

0xd4b7,	// (0x000617d2) cell_cmode_itu_pane_ParamLimits

0xd4b7,	// (0x000617d2) cell_cmode_itu_pane

0xf122,	// (0x0006343d) bg_button_pane_cp06_ParamLimits

0xf122,	// (0x0006343d) bg_button_pane_cp06

0xb44e,	// (0x0005f769) cell_cmode_rocker_pane_g1_ParamLimits

0xb44e,	// (0x0005f769) cell_cmode_rocker_pane_g1

0xc9f2,	// (0x00060d0d) cell_cmode_rocker_pane_g2_ParamLimits

0xc9f2,	// (0x00060d0d) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x000640eb) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x000640eb) cell_cmode_rocker_pane_g

0xe25b,	// (0x00062576) bg_button_pane_cp07

0xd4ce,	// (0x000617e9) cell_cmode_itu_pane_g1

0xd4d7,	// (0x000617f2) cell_cmode_itu_pane_t1

0xd4e5,	// (0x00061800) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x000640f0) cell_cmode_itu_pane_t

0xcc1e,	// (0x00060f39) aid_touch_ctrl_left

0xcc26,	// (0x00060f41) aid_touch_ctrl_right

0xe25b,	// (0x00062576) compa_mode_pane

0xd4f3,	// (0x0006180e) aid_cmod_rocker_key_size_cp

0xd4fd,	// (0x00061818) aid_cmode_itu_key_size_cp

0xd507,	// (0x00061822) compa_mode_pane_g1

0xd50f,	// (0x0006182a) compa_mode_pane_g2

0xd517,	// (0x00061832) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x000640f5) compa_mode_pane_g

0xd51f,	// (0x0006183a) main_comp_mode_itu_pane_cp

0xd527,	// (0x00061842) main_comp_mode_rocker_pane_cp

0xd52f,	// (0x0006184a) cell_cmode_itu_pane_cp_ParamLimits

0xd52f,	// (0x0006184a) cell_cmode_itu_pane_cp

0xd544,	// (0x0006185f) cell_cmode_rocker_pane_cp_ParamLimits

0xd544,	// (0x0006185f) cell_cmode_rocker_pane_cp

0xf122,	// (0x0006343d) bg_button_pane_cp06_cp_ParamLimits

0xf122,	// (0x0006343d) bg_button_pane_cp06_cp

0xb44e,	// (0x0005f769) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb44e,	// (0x0005f769) cell_cmode_rocker_pane_g1_cp

0xb1eb,	// (0x0005f506) cell_cmode_rocker_pane_g2_cp

0xe25b,	// (0x00062576) bg_button_pane_cp07_cp

0xd556,	// (0x00061871) cell_cmode_itu_pane_g1_cp

0xd55f,	// (0x0006187a) cell_cmode_itu_pane_t1_cp

0xd55f,	// (0x0006187a) cell_cmode_itu_pane_t2_cp

0x9f62,	// (0x0005e27d) settings_code_pane_cp2

0xe2bd,	// (0x000625d8) bg_popup_window_pane_cp3_ParamLimits

0xee2b,	// (0x00063146) heading_pane_cp3_ParamLimits

0xee37,	// (0x00063152) listscroll_popup_graphic_pane_ParamLimits

0x72d7,	// (0x0005b5f2) fep_hwr_aid_pane_ParamLimits

0x7849,	// (0x0005bb64) aid_touch_sctrl_top_ParamLimits

0x7864,	// (0x0005bb7f) sctrl_sk_top_pane_g1_ParamLimits

0x7544,	// (0x0005b85f) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x0006402b) sctrl_sk_top_pane_g_ParamLimits

0x7871,	// (0x0005bb8c) sctrl_sk_top_pane_t1_ParamLimits

0x7849,	// (0x0005bb64) aid_touch_sctrl_bottom_ParamLimits

0x7871,	// (0x0005bb8c) sctrl_sk_bottom_pane_t1_ParamLimits

0xcb64,	// (0x00060e7f) aid_area_touch_clock

0x7a68,	// (0x0005bd83) aid_vkb2_area_top_pane_cell_ParamLimits

0x7a68,	// (0x0005bd83) aid_vkb2_area_top_pane_cell

0x7bb3,	// (0x0005bece) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7bb3,	// (0x0005bece) aid_vkb2_area_bottom_pane_cell

0xd0d0,	// (0x000613eb) popup_char_count_window

0xd56d,	// (0x00061888) popup_char_count_window_g1

0xd576,	// (0x00061891) popup_char_count_window_g2

0xd57f,	// (0x0006189a) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x000640fc) popup_char_count_window_g

0xd588,	// (0x000618a3) popup_char_count_window_t1

0x7922,	// (0x0005bc3d) popup_fep_char_preview_window_ParamLimits

0x7922,	// (0x0005bc3d) popup_fep_char_preview_window

0x7a86,	// (0x0005bda1) vkb2_top_candi_pane_ParamLimits

0x7a86,	// (0x0005bda1) vkb2_top_candi_pane

0xd596,	// (0x000618b1) cell_vkb2_top_candi_pane_ParamLimits

0xd596,	// (0x000618b1) cell_vkb2_top_candi_pane

0x7e9e,	// (0x0005c1b9) bg_popup_fep_char_preview_window_ParamLimits

0x7e9e,	// (0x0005c1b9) bg_popup_fep_char_preview_window

0x7eac,	// (0x0005c1c7) popup_fep_char_preview_window_t1_ParamLimits

0x7eac,	// (0x0005c1c7) popup_fep_char_preview_window_t1

0xd5e7,	// (0x00061902) bg_popup_fep_char_preview_window_g1

0xd5ef,	// (0x0006190a) bg_popup_fep_char_preview_window_g2

0xd5f7,	// (0x00061912) bg_popup_fep_char_preview_window_g3

0xd5ff,	// (0x0006191a) bg_popup_fep_char_preview_window_g4

0xd607,	// (0x00061922) bg_popup_fep_char_preview_window_g5

0x7ee6,	// (0x0005c201) bg_popup_fep_char_preview_window_g6

0xd60f,	// (0x0006192a) bg_popup_fep_char_preview_window_g7

0xd617,	// (0x00061932) bg_popup_fep_char_preview_window_g8

0xd61f,	// (0x0006193a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x00064103) bg_popup_fep_char_preview_window_g

0x7544,	// (0x0005b85f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7544,	// (0x0005b85f) cell_vkb2_top_candi_pane_g1

0x7552,	// (0x0005b86d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7552,	// (0x0005b86d) cell_vkb2_top_candi_pane_g2

0xc2e1,	// (0x000605fc) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc2e1,	// (0x000605fc) cell_vkb2_top_candi_pane_g3

0x7eee,	// (0x0005c209) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7eee,	// (0x0005c209) cell_vkb2_top_candi_pane_g4

0xb96d,	// (0x0005fc88) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb96d,	// (0x0005fc88) cell_vkb2_top_candi_pane_g5

0x7f0f,	// (0x0005c22a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7f0f,	// (0x0005c22a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x00064116) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x00064116) cell_vkb2_top_candi_pane_g

0x7f1d,	// (0x0005c238) cell_vkb2_top_candi_pane_t1

0x70a9,	// (0x0005b3c4) aid_size_touch_slider_mark_ParamLimits

0x70a9,	// (0x0005b3c4) aid_size_touch_slider_mark

0xd213,	// (0x0006152e) grid_graphic2_catg_pane_ParamLimits

0xd213,	// (0x0006152e) grid_graphic2_catg_pane

0xd2b1,	// (0x000615cc) popup_grid_graphic2_window_t1_ParamLimits

0xd2b1,	// (0x000615cc) popup_grid_graphic2_window_t1

0xd2c3,	// (0x000615de) popup_grid_graphic2_window_t2_ParamLimits

0xd2c3,	// (0x000615de) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x000640d1) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x000640d1) popup_grid_graphic2_window_t

0xec17,	// (0x00062f32) bg_button_pane_cp05_ParamLimits

0xd445,	// (0x00061760) cell_graphic2_control_pane_g1_ParamLimits

0xd627,	// (0x00061942) cell_graphic2_catg_pane_ParamLimits

0xd627,	// (0x00061942) cell_graphic2_catg_pane

0xe25b,	// (0x00062576) bg_button_pane_cp12

0xd639,	// (0x00061954) cell_graphic2_catg_pane_g1

0xcb30,	// (0x00060e4b) cell_tb_ext_pane_t1_ParamLimits

0x7cd0,	// (0x0005bfeb) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7cd0,	// (0x0005bfeb) vkb2_top_cell_right_narrow_pane

0x7ce8,	// (0x0005c003) vkb2_top_cell_right_wide_pane_ParamLimits

0x7ce8,	// (0x0005c003) vkb2_top_cell_right_wide_pane

0x72c9,	// (0x0005b5e4) bg_vkb2_func_pane_ParamLimits

0x72c9,	// (0x0005b5e4) bg_vkb2_func_pane

0x7d59,	// (0x0005c074) vkb2_top_cell_left_pane_g1_ParamLimits

0x72c9,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x72c9,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp03

0x7db7,	// (0x0005c0d2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8a1a,	// (0x0005cd35) bg_vkb2_func_pane_g1

0x8a22,	// (0x0005cd3d) bg_vkb2_func_pane_g2

0x8a32,	// (0x0005cd4d) bg_vkb2_func_pane_g3

0x8a2a,	// (0x0005cd45) bg_vkb2_func_pane_g4

0x8a3a,	// (0x0005cd55) bg_vkb2_func_pane_g5

0x8a42,	// (0x0005cd5d) bg_vkb2_func_pane_g6

0x8a4a,	// (0x0005cd65) bg_vkb2_func_pane_g7

0x8a52,	// (0x0005cd6d) bg_vkb2_func_pane_g8

0x8a12,	// (0x0005cd2d) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x00064123) bg_vkb2_func_pane_g

0x72c9,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x72c9,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp01

0x7d59,	// (0x0005c074) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7d59,	// (0x0005c074) vkb2_top_cell_right_wide_pane_g1

0x72c9,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x72c9,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp02

0x7db7,	// (0x0005c0d2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7db7,	// (0x0005c0d2) vkb2_top_cell_right_narrow_pane_g1

0xc747,	// (0x00060a62) aid_touch_area_decrease_ParamLimits

0xc747,	// (0x00060a62) aid_touch_area_decrease

0xc76b,	// (0x00060a86) aid_touch_area_increase_ParamLimits

0xc76b,	// (0x00060a86) aid_touch_area_increase

0xc783,	// (0x00060a9e) aid_touch_area_mute_ParamLimits

0xc783,	// (0x00060a9e) aid_touch_area_mute

0xc79f,	// (0x00060aba) aid_touch_area_slider_ParamLimits

0xc79f,	// (0x00060aba) aid_touch_area_slider

0xc88d,	// (0x00060ba8) popup_slider_window_g4_ParamLimits

0xc88d,	// (0x00060ba8) popup_slider_window_g4

0xc8a5,	// (0x00060bc0) popup_slider_window_g5_ParamLimits

0xc8a5,	// (0x00060bc0) popup_slider_window_g5

0xc8c7,	// (0x00060be2) popup_slider_window_g6_ParamLimits

0xc8c7,	// (0x00060be2) popup_slider_window_g6

0xc905,	// (0x00060c20) popup_slider_window_t2_ParamLimits

0xc905,	// (0x00060c20) popup_slider_window_t2

0x0001,

0xfd04,	// (0x0006401f) popup_slider_window_t_ParamLimits

0xfd04,	// (0x0006401f) popup_slider_window_t

0xc91d,	// (0x00060c38) slider_pane_ParamLimits

0xc91d,	// (0x00060c38) slider_pane

0xd642,	// (0x0006195d) slider_pane_g1_ParamLimits

0xd642,	// (0x0006195d) slider_pane_g1

0xd656,	// (0x00061971) slider_pane_g2_ParamLimits

0xd656,	// (0x00061971) slider_pane_g2

0xd66c,	// (0x00061987) slider_pane_g3_ParamLimits

0xd66c,	// (0x00061987) slider_pane_g3

0x0003,

0xfe1b,	// (0x00064136) slider_pane_g_ParamLimits

0xfe1b,	// (0x00064136) slider_pane_g

0x6c54,	// (0x0005af6f) popup_tb_float_extension_window_ParamLimits

0x6c54,	// (0x0005af6f) popup_tb_float_extension_window

0xd698,	// (0x000619b3) aid_size_cell_tb_float_ext

0xe25b,	// (0x00062576) bg_popup_sub_window_cp28

0xd6a4,	// (0x000619bf) grid_tb_float_ext_pane

0xd6b0,	// (0x000619cb) cell_tb_float_ext_pane_ParamLimits

0xd6b0,	// (0x000619cb) cell_tb_float_ext_pane

0xd6cc,	// (0x000619e7) cell_tb_float_ext_pane_g1

0xd6d5,	// (0x000619f0) grid_highlight_pane_cp12

0x741e,	// (0x0005b739) cell_last_hwr_side_pane_ParamLimits

0x741e,	// (0x0005b739) cell_last_hwr_side_pane

0xb1eb,	// (0x0005f506) cell_last_hwr_side_pane_g1

0xd6de,	// (0x000619f9) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x0006413f) cell_last_hwr_side_pane_g

0x7c7f,	// (0x0005bf9a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7c7f,	// (0x0005bf9a) vkb2_area_bottom_space_btn_pane

0x7544,	// (0x0005b85f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd185,	// (0x000614a0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7f1d,	// (0x0005c238) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7f3b,	// (0x0005c256) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7f3b,	// (0x0005c256) vkb2_area_bottom_space_btn_pane_g1

0x7f75,	// (0x0005c290) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7f75,	// (0x0005c290) vkb2_area_bottom_space_btn_pane_g2

0x7fab,	// (0x0005c2c6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7fab,	// (0x0005c2c6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x00064144) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x00064144) vkb2_area_bottom_space_btn_pane_g

0x738e,	// (0x0005b6a9) cel_fep_hwr_func_pane_ParamLimits

0x738e,	// (0x0005b6a9) cel_fep_hwr_func_pane

0x73ca,	// (0x0005b6e5) cell_hwr_side_button_pane_ParamLimits

0x73ca,	// (0x0005b6e5) cell_hwr_side_button_pane

0xcb64,	// (0x00060e7f) aid_area_touch_clock_ParamLimits

0xec17,	// (0x00062f32) bg_uniindi_top_pane_ParamLimits

0xcb78,	// (0x00060e93) uniindi_top_pane_g1_ParamLimits

0xcb8e,	// (0x00060ea9) uniindi_top_pane_g2_ParamLimits

0xcb9a,	// (0x00060eb5) uniindi_top_pane_g3_ParamLimits

0xcbab,	// (0x00060ec6) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x00064057) uniindi_top_pane_g_ParamLimits

0xcbb8,	// (0x00060ed3) uniindi_top_pane_t1_ParamLimits

0xec17,	// (0x00062f32) bg_vkb2_func_pane_cp01_ParamLimits

0xec17,	// (0x00062f32) bg_vkb2_func_pane_cp01

0xd6e7,	// (0x00061a02) cel_fep_hwr_func_pane_g1_ParamLimits

0xd6e7,	// (0x00061a02) cel_fep_hwr_func_pane_g1

0xec17,	// (0x00062f32) bg_vkb2_func_pane_cp02_ParamLimits

0xec17,	// (0x00062f32) bg_vkb2_func_pane_cp02

0xd6e7,	// (0x00061a02) cell_hwr_side_button_pane_g1_ParamLimits

0xd6e7,	// (0x00061a02) cell_hwr_side_button_pane_g1

0x888b,	// (0x0005cba6) status_pane_g4_ParamLimits

0x888b,	// (0x0005cba6) status_pane_g4

0x88a5,	// (0x0005cbc0) status_pane_t1

0xaf9e,	// (0x0005f2b9) form2_midp_gauge_slider_cont_pane

0xafa6,	// (0x0005f2c1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xafb8,	// (0x0005f2d3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xafca,	// (0x0005f2e5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00063e17) form2_midp_gauge_slider_pane_t_ParamLimits

0xafdc,	// (0x0005f2f7) form2_midp_slider_pane_ParamLimits

0x78e2,	// (0x0005bbfd) aid_size_cell_func_vkb2_ParamLimits

0x78e2,	// (0x0005bbfd) aid_size_cell_func_vkb2

0xd684,	// (0x0006199f) slider_pane_g4_ParamLimits

0xd684,	// (0x0006199f) slider_pane_g4

0x7ff5,	// (0x0005c310) form2_midp_gauge_slider_pane_t2_cp01

0x8003,	// (0x0005c31e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8003,	// (0x0005c31e) form2_midp_gauge_slider_pane_t3_cp01

0x8020,	// (0x0005c33b) form2_midp_slider_pane_cp01

0xe25b,	// (0x00062576) navi_smil_pane

0xd720,	// (0x00061a3b) navi_smil_pane_g1

0xd728,	// (0x00061a43) navi_smil_pane_t1

0xd6f5,	// (0x00061a10) form2_midp_slider_pane_g1

0xd6fe,	// (0x00061a19) form2_midp_slider_pane_g2

0xd706,	// (0x00061a21) form2_midp_slider_pane_g3

0xd6f5,	// (0x00061a10) form2_midp_slider_pane_g4

0xd70e,	// (0x00061a29) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x0006414d) form2_midp_slider_pane_g

0x7fe5,	// (0x0005c300) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7fe5,	// (0x0005c300) vkb2_area_bottom_space_btn_pane_g4

0x86aa,	// (0x0005c9c5) lc0_navi_pane_ParamLimits

0x86aa,	// (0x0005c9c5) lc0_navi_pane

0x8726,	// (0x0005ca41) lc0_stat_indi_pane_ParamLimits

0x8726,	// (0x0005ca41) lc0_stat_indi_pane

0x873d,	// (0x0005ca58) ls0_title_pane_ParamLimits

0x873d,	// (0x0005ca58) ls0_title_pane

0xf122,	// (0x0006343d) bg_popup_sub_pane_cp14_ParamLimits

0xcb4b,	// (0x00060e66) list_uniindi_pane_ParamLimits

0xcb57,	// (0x00060e72) uniindi_top_pane_ParamLimits

0xcbf6,	// (0x00060f11) list_single_uniindi_pane_g1_ParamLimits

0xcc09,	// (0x00060f24) list_single_uniindi_pane_t1_ParamLimits

0x8029,	// (0x0005c344) lc0_stat_clock_pane_ParamLimits

0x8029,	// (0x0005c344) lc0_stat_clock_pane

0xd736,	// (0x00061a51) lc0_stat_indi_pane_g1_ParamLimits

0xd736,	// (0x00061a51) lc0_stat_indi_pane_g1

0xd743,	// (0x00061a5e) lc0_stat_indi_pane_g2_ParamLimits

0xd743,	// (0x00061a5e) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x00064158) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x00064158) lc0_stat_indi_pane_g

0x8036,	// (0x0005c351) lc0_uni_indicator_pane_ParamLimits

0x8036,	// (0x0005c351) lc0_uni_indicator_pane

0xd750,	// (0x00061a6b) ls0_title_pane_g1_ParamLimits

0xd750,	// (0x00061a6b) ls0_title_pane_g1

0xd764,	// (0x00061a7f) ls0_title_pane_t1_ParamLimits

0xd764,	// (0x00061a7f) ls0_title_pane_t1

0x8043,	// (0x0005c35e) lc0_uni_indicator_pane_g1_ParamLimits

0x8043,	// (0x0005c35e) lc0_uni_indicator_pane_g1

0xd79a,	// (0x00061ab5) lc0_stat_clock_pane_t1

0x50a2,	// (0x000593bd) main_ai5_pane

0xd7a8,	// (0x00061ac3) ai5_sk_pane_ParamLimits

0xd7a8,	// (0x00061ac3) ai5_sk_pane

0xd7b5,	// (0x00061ad0) cell_ai5_widget_pane_ParamLimits

0xd7b5,	// (0x00061ad0) cell_ai5_widget_pane

0xdd57,	// (0x00062072) aid_size_cell_widget_grid

0xdd65,	// (0x00062080) bg_ai5_widget_pane_ParamLimits

0xdd65,	// (0x00062080) bg_ai5_widget_pane

0xdddd,	// (0x000620f8) cell_ai5_widget_pane_g2

0xddf1,	// (0x0006210c) cell_ai5_widget_pane_g3

0xde0b,	// (0x00062126) cell_ai5_widget_pane_g4

0xde1b,	// (0x00062136) cell_ai5_widget_pane_g5

0xde2b,	// (0x00062146) cell_ai5_widget_pane_g6

0xde37,	// (0x00062152) cell_ai5_widget_pane_g7

0xde7f,	// (0x0006219a) cell_ai5_widget_pane_t1_ParamLimits

0xde7f,	// (0x0006219a) cell_ai5_widget_pane_t1

0xde9c,	// (0x000621b7) cell_ai5_widget_pane_t2_ParamLimits

0xde9c,	// (0x000621b7) cell_ai5_widget_pane_t2

0xdeb4,	// (0x000621cf) cell_ai5_widget_pane_t3_ParamLimits

0xdeb4,	// (0x000621cf) cell_ai5_widget_pane_t3

0xdecc,	// (0x000621e7) cell_ai5_widget_pane_t4_ParamLimits

0xdecc,	// (0x000621e7) cell_ai5_widget_pane_t4

0xdef2,	// (0x0006220d) cell_ai5_widget_pane_t5_ParamLimits

0xdef2,	// (0x0006220d) cell_ai5_widget_pane_t5

0xdf12,	// (0x0006222d) cell_ai5_widget_pane_t6_ParamLimits

0xdf12,	// (0x0006222d) cell_ai5_widget_pane_t6

0xdf24,	// (0x0006223f) cell_ai5_widget_pane_t7_ParamLimits

0xdf24,	// (0x0006223f) cell_ai5_widget_pane_t7

0xdf3d,	// (0x00062258) cell_ai5_widget_pane_t8_ParamLimits

0xdf3d,	// (0x00062258) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x00064172) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x00064172) cell_ai5_widget_pane_t

0xdf9c,	// (0x000622b7) grid_ai5_widget_pane

0xf122,	// (0x0006343d) highlight_cell_ai5_widget_pane_ParamLimits

0xf122,	// (0x0006343d) highlight_cell_ai5_widget_pane

0xdfaa,	// (0x000622c5) ai5_sk_left_pane

0xdfb4,	// (0x000622cf) ai5_sk_middle_pane

0xdfbe,	// (0x000622d9) ai5_sk_right_pane

0xdfc8,	// (0x000622e3) bg_ai5_widget_pane_g1_ParamLimits

0xdfc8,	// (0x000622e3) bg_ai5_widget_pane_g1

0xdfd4,	// (0x000622ef) bg_ai5_widget_pane_g2_ParamLimits

0xdfd4,	// (0x000622ef) bg_ai5_widget_pane_g2

0xdfe0,	// (0x000622fb) bg_ai5_widget_pane_g3_ParamLimits

0xdfe0,	// (0x000622fb) bg_ai5_widget_pane_g3

0xdfec,	// (0x00062307) bg_ai5_widget_pane_g4_ParamLimits

0xdfec,	// (0x00062307) bg_ai5_widget_pane_g4

0xdff8,	// (0x00062313) bg_ai5_widget_pane_g5_ParamLimits

0xdff8,	// (0x00062313) bg_ai5_widget_pane_g5

0xe004,	// (0x0006231f) bg_ai5_widget_pane_g6_ParamLimits

0xe004,	// (0x0006231f) bg_ai5_widget_pane_g6

0xe010,	// (0x0006232b) bg_ai5_widget_pane_g7_ParamLimits

0xe010,	// (0x0006232b) bg_ai5_widget_pane_g7

0xe01c,	// (0x00062337) bg_ai5_widget_pane_g8_ParamLimits

0xe01c,	// (0x00062337) bg_ai5_widget_pane_g8

0xe028,	// (0x00062343) bg_ai5_widget_pane_g9_ParamLimits

0xe028,	// (0x00062343) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x00064187) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x00064187) bg_ai5_widget_pane_g

0xe060,	// (0x0006237b) cell_shortcut_ai5_widget_pane_ParamLimits

0xe060,	// (0x0006237b) cell_shortcut_ai5_widget_pane

0x36bb,	// (0x000579d6) bg_cell_shortcut_ai5_widget_pane

0xe073,	// (0x0006238e) cell_grid_ai5_widget_pane_g1

0x36bb,	// (0x000579d6) highlight_cell_shortcut_ai5_widget_pane

0x8a1a,	// (0x0005cd35) ai5_sk_left_pane_g1

0xe07c,	// (0x00062397) ai5_sk_left_pane_g2

0xe084,	// (0x0006239f) ai5_sk_left_pane_g3

0xe08c,	// (0x000623a7) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x0006419a) ai5_sk_left_pane_g

0xe094,	// (0x000623af) ai5_sk_left_pane_t1

0x8a22,	// (0x0005cd3d) ai5_sk_right_pane_g1

0xe0a2,	// (0x000623bd) ai5_sk_right_pane_g2

0xe0aa,	// (0x000623c5) ai5_sk_right_pane_g3

0xe0b2,	// (0x000623cd) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x000641a3) ai5_sk_right_pane_g

0xe0ba,	// (0x000623d5) ai5_sk_right_pane_t1

0x8a22,	// (0x0005cd3d) ai5_sk_middle_pane_g1

0x8a1a,	// (0x0005cd35) ai5_sk_middle_pane_g2

0x8a3a,	// (0x0005cd55) ai5_sk_middle_pane_g3

0xe0aa,	// (0x000623c5) ai5_sk_middle_pane_g4

0xe084,	// (0x0006239f) ai5_sk_middle_pane_g5

0xe0c8,	// (0x000623e3) ai5_sk_middle_pane_g6

0xe0d0,	// (0x000623eb) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x000641ac) ai5_sk_middle_pane_g

0x8536,	// (0x0005c851) aid_touch_area_size_lc0_ParamLimits

0x8536,	// (0x0005c851) aid_touch_area_size_lc0

0x7573,	// (0x0005b88e) cell_hwr_candidate_pane_t1_ParamLimits

0x8554,	// (0x0005c86f) aid_touch_navi_pane

0x883d,	// (0x0005cb58) status_dt_navi_pane_ParamLimits

0x883d,	// (0x0005cb58) status_dt_navi_pane

0x884a,	// (0x0005cb65) status_dt_sta_pane_ParamLimits

0x884a,	// (0x0005cb65) status_dt_sta_pane

0xe0d8,	// (0x000623f3) dt_sta_controll_pane

0xe0e5,	// (0x00062400) dt_sta_indi_pane

0xe0f6,	// (0x00062411) dt_sta_title_pane

0xec17,	// (0x00062f32) bg_dt_sta_indi_pane_ParamLimits

0xec17,	// (0x00062f32) bg_dt_sta_indi_pane

0xe109,	// (0x00062424) dt_sta_battery_pane

0xe111,	// (0x0006242c) dt_sta_indi_pane_g1

0xe11a,	// (0x00062435) dt_sta_indi_pane_g2

0xe123,	// (0x0006243e) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x000641bb) dt_sta_indi_pane_g

0xe12c,	// (0x00062447) dt_sta_signal_pane

0xf122,	// (0x0006343d) bg_dt_sta_title_pane_ParamLimits

0xf122,	// (0x0006343d) bg_dt_sta_title_pane

0xe135,	// (0x00062450) dt_sta_title_pane_g1

0xe13d,	// (0x00062458) dt_sta_title_pane_t1_ParamLimits

0xe13d,	// (0x00062458) dt_sta_title_pane_t1

0xe25b,	// (0x00062576) bg_dt_sta_control_pane

0xe152,	// (0x0006246d) dt_sta_controll_pane_g1

0xe15b,	// (0x00062476) bg_dt_sta_title_pane_g1

0xe164,	// (0x0006247f) bg_dt_sta_title_pane_g2

0xe16d,	// (0x00062488) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x000641c2) bg_dt_sta_title_pane_g

0xb1eb,	// (0x0005f506) bg_dt_sta_indi_pane_g1

0xe176,	// (0x00062491) dt_sta_signal_pane_g1

0xe17e,	// (0x00062499) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x000641c9) dt_sta_signal_pane_g

0xe186,	// (0x000624a1) dt_sta_battery_pane_g1

0xe18f,	// (0x000624aa) dt_sta_battery_pane_t1

0xb1eb,	// (0x0005f506) bg_dt_sta_control_pane_g1

0x1241,	// (0x0005555c) fep_china_uni_eep_pane

0x1249,	// (0x00055564) fep_china_uni_entry_pane_ParamLimits

0x1259,	// (0x00055574) popup_fep_china_uni_window_g1_ParamLimits

0x1269,	// (0x00055584) popup_fep_china_uni_window_g2_ParamLimits

0x1269,	// (0x00055584) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00063a3d) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00063a3d) popup_fep_china_uni_window_g

0xe19e,	// (0x000624b9) fep_china_uni_eep_pane_g1

0xe1a6,	// (0x000624c1) fep_china_uni_eep_pane_t1

0xd717,	// (0x00061a32) aid_touch_area_size_smil_player

0x86a2,	// (0x0005c9bd) lc0_clock_pane

0x8899,	// (0x0005cbb4) status_pane_g5_ParamLimits

0x8899,	// (0x0005cbb4) status_pane_g5

0x68d9,	// (0x0005abf4) popup_keymap_window

0x885f,	// (0x0005cb7a) status_icon_pane

0xddf1,	// (0x0006210c) cell_ai5_widget_pane_g3_ParamLimits

0xde0b,	// (0x00062126) cell_ai5_widget_pane_g4_ParamLimits

0xde1b,	// (0x00062136) cell_ai5_widget_pane_g5_ParamLimits

0xde43,	// (0x0006215e) cell_ai5_widget_pane_g8_ParamLimits

0xde43,	// (0x0006215e) cell_ai5_widget_pane_g8

0xde57,	// (0x00062172) cell_ai5_widget_pane_g9_ParamLimits

0xde57,	// (0x00062172) cell_ai5_widget_pane_g9

0xde6b,	// (0x00062186) cell_ai5_widget_pane_g10_ParamLimits

0xde6b,	// (0x00062186) cell_ai5_widget_pane_g10

0xe1b5,	// (0x000624d0) status_icon_pane_g1

0xe25b,	// (0x00062576) bg_popup_sub_pane_cp13

0xe1bd,	// (0x000624d8) popup_keymap_window_t1

0x847f,	// (0x0005c79a) control_pane_g6_ParamLimits

0x847f,	// (0x0005c79a) control_pane_g6

0x848c,	// (0x0005c7a7) control_pane_g7_ParamLimits

0x848c,	// (0x0005c7a7) control_pane_g7

0x8499,	// (0x0005c7b4) control_pane_g8_ParamLimits

0x8499,	// (0x0005c7b4) control_pane_g8

0xe0d8,	// (0x000623f3) dt_sta_controll_pane_ParamLimits

0xe0e5,	// (0x00062400) dt_sta_indi_pane_ParamLimits

0xe0f6,	// (0x00062411) dt_sta_title_pane_ParamLimits

0xf064,	// (0x0006337f) aid_size_touch_scroll_bar_cale

0x517f,	// (0x0005949a) popup_discreet_window_ParamLimits

0x517f,	// (0x0005949a) popup_discreet_window

0x520d,	// (0x00059528) popup_sk_window

0x9088,	// (0x0005d3a3) bg_popup_sub_pane_cp28_ParamLimits

0x9088,	// (0x0005d3a3) bg_popup_sub_pane_cp28

0xe1cb,	// (0x000624e6) popup_discreet_window_g1_ParamLimits

0xe1cb,	// (0x000624e6) popup_discreet_window_g1

0xe1eb,	// (0x00062506) popup_discreet_window_t1_ParamLimits

0xe1eb,	// (0x00062506) popup_discreet_window_t1

0xe209,	// (0x00062524) popup_discreet_window_t2_ParamLimits

0xe209,	// (0x00062524) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x000641ce) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x000641ce) popup_discreet_window_t

0x8056,	// (0x0005c371) popup_sk_window_g1

0x8060,	// (0x0005c37b) popup_sk_window_g2

0x0001,

0xfeba,	// (0x000641d5) popup_sk_window_g

0x8068,	// (0x0005c383) popup_sk_window_t1

0x8076,	// (0x0005c391) popup_sk_window_t1_copy1

0xdddd,	// (0x000620f8) cell_ai5_widget_pane_g2_ParamLimits

0xdf4f,	// (0x0006226a) cell_ai5_widget_pane_t9_ParamLimits

0xdf4f,	// (0x0006226a) cell_ai5_widget_pane_t9

0xe25b,	// (0x00062576) main_fep_fshwr2_pane

0x8084,	// (0x0005c39f) aid_fshwr2_btn_pane

0x8090,	// (0x0005c3ab) aid_fshwr2_syb_pane

0x80a2,	// (0x0005c3bd) aid_fshwr2_txt_pane

0x80ae,	// (0x0005c3c9) fshwr2_func_candi_pane

0x80c4,	// (0x0005c3df) fshwr2_hwr_syb_pane

0x80d8,	// (0x0005c3f3) fshwr2_icf_pane

0x50a2,	// (0x000593bd) fshwr2_icf_bg_pane

0x810c,	// (0x0005c427) fshwr2_icf_pane_t1_ParamLimits

0x810c,	// (0x0005c427) fshwr2_icf_pane_t1

0x11bf,	// (0x000554da) fshwr2_func_candi_pane_g1

0xe3cf,	// (0x000626ea) fshwr2_func_candi_row_pane_ParamLimits

0xe3cf,	// (0x000626ea) fshwr2_func_candi_row_pane

0x8124,	// (0x0005c43f) cell_fshwr2_syb_pane_ParamLimits

0x8124,	// (0x0005c43f) cell_fshwr2_syb_pane

0x8145,	// (0x0005c460) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8145,	// (0x0005c460) fshwr2_hwr_syb_pane_g1

0x50a2,	// (0x000593bd) bg_popup_call_pane_cp01

0x8153,	// (0x0005c46e) fshwr2_func_candi_cell_pane_ParamLimits

0x8153,	// (0x0005c46e) fshwr2_func_candi_cell_pane

0xe3f2,	// (0x0006270d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe3f2,	// (0x0006270d) fshwr2_func_candi_cell_bg_pane

0x81a4,	// (0x0005c4bf) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x81a4,	// (0x0005c4bf) fshwr2_func_candi_cell_pane_g1

0x81c4,	// (0x0005c4df) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x81c4,	// (0x0005c4df) fshwr2_func_candi_cell_pane_t1

0x50a2,	// (0x000593bd) bg_button_pane_cp08

0xe3fe,	// (0x00062719) cell_fshwr2_syb_bg_pane

0x81d7,	// (0x0005c4f2) cell_fshwr2_syb_bg_pane_g1

0x81eb,	// (0x0005c506) cell_fshwr2_syb_bg_pane_t1

0xf122,	// (0x0006343d) main_tmo_pane

0x9bac,	// (0x0005dec7) uni_indicator_pane_g1_ParamLimits

0x9bbf,	// (0x0005deda) uni_indicator_pane_g2_ParamLimits

0x9bd1,	// (0x0005deec) uni_indicator_pane_g3_ParamLimits

0x9be0,	// (0x0005defb) uni_indicator_pane_g4_ParamLimits

0x9be0,	// (0x0005defb) uni_indicator_pane_g4

0x9bf4,	// (0x0005df0f) uni_indicator_pane_g5_ParamLimits

0x9bf4,	// (0x0005df0f) uni_indicator_pane_g5

0x9bf4,	// (0x0005df0f) uni_indicator_pane_g6_ParamLimits

0x9bf4,	// (0x0005df0f) uni_indicator_pane_g6

0xf926,	// (0x00063c41) uni_indicator_pane_g_ParamLimits

0xc717,	// (0x00060a32) popup_tmo_note_window_ParamLimits

0xc717,	// (0x00060a32) popup_tmo_note_window

0x78c4,	// (0x0005bbdf) fshwr2_bg_pane

0x81b5,	// (0x0005c4d0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x81b5,	// (0x0005c4d0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x000641da) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x000641da) fshwr2_func_candi_cell_pane_g

0x752c,	// (0x0005b847) bg_popup_window_pane_cp01

0x8201,	// (0x0005c51c) bg_popup_window_pane_g1_cp01

0xe40a,	// (0x00062725) bg_popup_window_pane_cp22_ParamLimits

0xe40a,	// (0x00062725) bg_popup_window_pane_cp22

0xe418,	// (0x00062733) listscroll_tmo_link_pane_ParamLimits

0xe418,	// (0x00062733) listscroll_tmo_link_pane

0xe458,	// (0x00062773) popup_tmo_note_window_g1_ParamLimits

0xe458,	// (0x00062773) popup_tmo_note_window_g1

0xe465,	// (0x00062780) tmo_note_info_pane_ParamLimits

0xe465,	// (0x00062780) tmo_note_info_pane

0xe47f,	// (0x0006279a) list_tmo_note_info_pane_g1_ParamLimits

0xe47f,	// (0x0006279a) list_tmo_note_info_pane_g1

0xe496,	// (0x000627b1) list_tmo_note_info_pane_g2_ParamLimits

0xe496,	// (0x000627b1) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x000641df) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x000641df) list_tmo_note_info_pane_g

0xe4b2,	// (0x000627cd) list_tmo_note_info_text_pane_ParamLimits

0xe4b2,	// (0x000627cd) list_tmo_note_info_text_pane

0xe537,	// (0x00062852) list_tmo_link_pane

0xe544,	// (0x0006285f) scroll_pane_cp20

0xe551,	// (0x0006286c) list_single_tmo_link_pane_ParamLimits

0xe551,	// (0x0006286c) list_single_tmo_link_pane

0xe561,	// (0x0006287c) list_single_tmo_link_pane_t1

0xe56f,	// (0x0006288a) list_tmo_note_info_text_pane_t1_ParamLimits

0xe56f,	// (0x0006288a) list_tmo_note_info_text_pane_t1

0x5d2d,	// (0x0005a048) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5d2d,	// (0x0005a048) aid_size_touch_scroll_bar_cp01

0x5c6a,	// (0x00059f85) aid_size_touch_slider_marker

0x51f5,	// (0x00059510) popup_settings_window_ParamLimits

0x51f5,	// (0x00059510) popup_settings_window

0x3820,	// (0x00057b3b) popup_candi_list_indi_window

0x8554,	// (0x0005c86f) aid_touch_navi_pane_ParamLimits

0x781d,	// (0x0005bb38) rs_clock_indi_pane

0x7826,	// (0x0005bb41) sctrl_sk_bottom_pane_ParamLimits

0x7837,	// (0x0005bb52) sctrl_sk_top_pane_ParamLimits

0x793c,	// (0x0005bc57) popup_fep_tooltip_window

0xdd57,	// (0x00062072) aid_size_cell_widget_grid_ParamLimits

0xddc8,	// (0x000620e3) cell_ai5_widget_pane_g1_ParamLimits

0xddc8,	// (0x000620e3) cell_ai5_widget_pane_g1

0xde2b,	// (0x00062146) cell_ai5_widget_pane_g6_ParamLimits

0xde37,	// (0x00062152) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x0006415d) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0006415d) cell_ai5_widget_pane_g

0xdf7e,	// (0x00062299) cell_ai5_widget_pane_t10_ParamLimits

0xdf7e,	// (0x00062299) cell_ai5_widget_pane_t10

0xdf9c,	// (0x000622b7) grid_ai5_widget_pane_ParamLimits

0xe034,	// (0x0006234f) cell_contacts_ai5_widget_pane_ParamLimits

0xe034,	// (0x0006234f) cell_contacts_ai5_widget_pane

0xe21e,	// (0x00062539) popup_discreet_window_t3_ParamLimits

0xe21e,	// (0x00062539) popup_discreet_window_t3

0x80f4,	// (0x0005c40f) popup_fshwr2_char_preview_window_ParamLimits

0x80f4,	// (0x0005c40f) popup_fshwr2_char_preview_window

0xe4d0,	// (0x000627eb) tmo_note_info_pane_t1

0xe4e5,	// (0x00062800) tmo_note_info_pane_t2

0xe4fe,	// (0x00062819) tmo_note_info_pane_t3

0xe513,	// (0x0006282e) tmo_note_info_pane_t4

0xe525,	// (0x00062840) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x000641e4) tmo_note_info_pane_t

0xe537,	// (0x00062852) list_tmo_link_pane_ParamLimits

0xe544,	// (0x0006285f) scroll_pane_cp20_ParamLimits

0x50a2,	// (0x000593bd) bg_popup_fep_char_preview_window_cp01

0xe588,	// (0x000628a3) popup_fshwr2_char_preview_window_t1

0xe596,	// (0x000628b1) popup_candi_list_indi_window_g1

0xe59f,	// (0x000628ba) bg_cell_contacts_ai5_widget_pane

0xe5ab,	// (0x000628c6) cell_contacts_ai5_widget_pane_g1

0xe5c0,	// (0x000628db) cell_contacts_ai5_widget_pane_g2

0xe5cc,	// (0x000628e7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x000641ef) cell_contacts_ai5_widget_pane_g

0xe5d8,	// (0x000628f3) cell_contacts_ai5_widget_pane_t1

0xf122,	// (0x0006343d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe64f,	// (0x0006296a) settings_container_pane

0x36bb,	// (0x000579d6) listscroll_set_pane_copy1

0xa943,	// (0x0005ec5e) scroll_pane_cp121_copy1

0xe65b,	// (0x00062976) set_content_pane_copy1

0xe663,	// (0x0006297e) aid_height_set_list_copy1_ParamLimits

0xe663,	// (0x0006297e) aid_height_set_list_copy1

0x9df4,	// (0x0005e10f) aid_size_parent_copy1_ParamLimits

0x9df4,	// (0x0005e10f) aid_size_parent_copy1

0xe66f,	// (0x0006298a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe66f,	// (0x0006298a) button_value_adjust_pane_cp6_copy1

0x84d6,	// (0x0005c7f1) list_highlight_pane_cp2_copy1_ParamLimits

0x84d6,	// (0x0005c7f1) list_highlight_pane_cp2_copy1

0xe683,	// (0x0006299e) list_set_pane_copy1_ParamLimits

0xe683,	// (0x0006299e) list_set_pane_copy1

0xe5ea,	// (0x00062905) main_pane_set_t1_copy1_ParamLimits

0xe5ea,	// (0x00062905) main_pane_set_t1_copy1

0xe624,	// (0x0006293f) main_pane_set_t2_copy1_ParamLimits

0xe624,	// (0x0006293f) main_pane_set_t2_copy1

0xe744,	// (0x00062a5f) main_pane_set_t3_copy1

0xe752,	// (0x00062a6d) main_pane_set_t4_copy1

0xe643,	// (0x0006295e) set_content_pane_g1_copy1_ParamLimits

0xe643,	// (0x0006295e) set_content_pane_g1_copy1

0xe760,	// (0x00062a7b) setting_code_pane_copy1

0xe768,	// (0x00062a83) setting_slider_graphic_pane_copy1

0xe768,	// (0x00062a83) setting_slider_pane_copy1

0xe768,	// (0x00062a83) setting_text_pane_copy1

0xe768,	// (0x00062a83) setting_volume_pane_copy1

0xe760,	// (0x00062a7b) settings_code_pane_cp2_copy1

0xe770,	// (0x00062a8b) settings_code_pane_cp_copy1_ParamLimits

0xe770,	// (0x00062a8b) settings_code_pane_cp_copy1

0x820a,	// (0x0005c525) volume_set_pane_copy1

0xe784,	// (0x00062a9f) volume_set_pane_g10_copy1

0xe790,	// (0x00062aab) volume_set_pane_g1_copy1

0xe79a,	// (0x00062ab5) volume_set_pane_g2_copy1

0xe7a4,	// (0x00062abf) volume_set_pane_g3_copy1

0xe7ae,	// (0x00062ac9) volume_set_pane_g4_copy1

0xe7b8,	// (0x00062ad3) volume_set_pane_g5_copy1

0xe7c2,	// (0x00062add) volume_set_pane_g6_copy1

0xe7cc,	// (0x00062ae7) volume_set_pane_g7_copy1

0xe7d6,	// (0x00062af1) volume_set_pane_g8_copy1

0xe7e0,	// (0x00062afb) volume_set_pane_g9_copy1

0xe2bd,	// (0x000625d8) bg_set_opt_pane_cp_copy1_ParamLimits

0xe2bd,	// (0x000625d8) bg_set_opt_pane_cp_copy1

0x8216,	// (0x0005c531) setting_slider_pane_t1_copy1_ParamLimits

0x8216,	// (0x0005c531) setting_slider_pane_t1_copy1

0x8234,	// (0x0005c54f) setting_slider_pane_t2_copy1_ParamLimits

0x8234,	// (0x0005c54f) setting_slider_pane_t2_copy1

0x824e,	// (0x0005c569) setting_slider_pane_t3_copy1_ParamLimits

0x824e,	// (0x0005c569) setting_slider_pane_t3_copy1

0x8266,	// (0x0005c581) slider_set_pane_copy1_ParamLimits

0x8266,	// (0x0005c581) slider_set_pane_copy1

0xf17a,	// (0x00063495) set_opt_bg_pane_g1_copy2

0xf182,	// (0x0006349d) set_opt_bg_pane_g2_copy2

0xe7ea,	// (0x00062b05) set_opt_bg_pane_g3_copy2

0xf192,	// (0x000634ad) set_opt_bg_pane_g4_copy2

0xf19a,	// (0x000634b5) set_opt_bg_pane_g5_copy2

0xf1a2,	// (0x000634bd) set_opt_bg_pane_g6_copy2

0xe7f4,	// (0x00062b0f) set_opt_bg_pane_g7_copy2

0xe7fe,	// (0x00062b19) set_opt_bg_pane_g8_copy2

0xe808,	// (0x00062b23) set_opt_bg_pane_g9_copy2

0x827c,	// (0x0005c597) aid_size_touch_slider_mark_copy1_ParamLimits

0x827c,	// (0x0005c597) aid_size_touch_slider_mark_copy1

0xe812,	// (0x00062b2d) slider_set_pane_g1_copy1

0x8290,	// (0x0005c5ab) slider_set_pane_g2_copy1

0x70c9,	// (0x0005b3e4) slider_set_pane_g3_copy1_ParamLimits

0x70c9,	// (0x0005b3e4) slider_set_pane_g3_copy1

0x70dd,	// (0x0005b3f8) slider_set_pane_g4_copy1_ParamLimits

0x70dd,	// (0x0005b3f8) slider_set_pane_g4_copy1

0x70f5,	// (0x0005b410) slider_set_pane_g5_copy1_ParamLimits

0x70f5,	// (0x0005b410) slider_set_pane_g5_copy1

0x70c9,	// (0x0005b3e4) slider_set_pane_g6_copy1_ParamLimits

0x70c9,	// (0x0005b3e4) slider_set_pane_g6_copy1

0x8298,	// (0x0005c5b3) slider_set_pane_g7_copy1_ParamLimits

0x8298,	// (0x0005c5b3) slider_set_pane_g7_copy1

0xe26f,	// (0x0006258a) bg_set_opt_pane_cp2_copy1

0xe81b,	// (0x00062b36) setting_slider_graphic_pane_g1_copy1

0xe824,	// (0x00062b3f) setting_slider_graphic_pane_t1_copy1

0xe834,	// (0x00062b4f) setting_slider_graphic_pane_t2_copy1

0xe844,	// (0x00062b5f) slider_set_pane_cp_copy1

0xe854,	// (0x00062b6f) input_focus_pane_cp1_copy1

0xe85d,	// (0x00062b78) list_set_text_pane_copy1

0xe865,	// (0x00062b80) setting_text_pane_g1_copy1

0x323a,	// (0x00057555) set_text_pane_t1_copy1

0xe854,	// (0x00062b6f) input_focus_pane_cp2_copy1

0xe865,	// (0x00062b80) setting_code_pane_g1_copy1

0xe86e,	// (0x00062b89) setting_code_pane_t1_copy1

0x33ba,	// (0x000576d5) list_set_graphic_pane_copy1

0xe26f,	// (0x0006258a) bg_set_opt_pane_cp4_copy1

0x33cd,	// (0x000576e8) list_set_graphic_pane_g1_copy1_ParamLimits

0x33cd,	// (0x000576e8) list_set_graphic_pane_g1_copy1

0xe87c,	// (0x00062b97) list_set_graphic_pane_g2_copy1

0x33e5,	// (0x00057700) list_set_graphic_pane_t1_copy1_ParamLimits

0x33e5,	// (0x00057700) list_set_graphic_pane_t1_copy1

0xb1eb,	// (0x0005f506) rs_clock_indi_pane_g1

0xe884,	// (0x00062b9f) rs_clock_indi_pane_t1

0xe892,	// (0x00062bad) rs_indi_pane

0xe89a,	// (0x00062bb5) rs_indi_pane_g1

0xe8a3,	// (0x00062bbe) rs_indi_pane_g2

0xe8ac,	// (0x00062bc7) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x000641f6) rs_indi_pane_g

0x36bb,	// (0x000579d6) bg_popup_preview_window_pane_cp03

0xe8b5,	// (0x00062bd0) popup_fep_tooltip_window_t1

0xbe96,	// (0x000601b1) popup_note2_window_g2_ParamLimits

0xbe96,	// (0x000601b1) popup_note2_window_g2

0x0001,

0xfc74,	// (0x00063f8f) popup_note2_window_g_ParamLimits

0xfc74,	// (0x00063f8f) popup_note2_window_g

0xc3c7,	// (0x000606e2) bg_popup_sub_pane_cp11_ParamLimits

0xc3d4,	// (0x000606ef) cell_ai3_links_pane_g1_ParamLimits

0xc3eb,	// (0x00060706) cell_ai3_links_pane_t1

0x323a,	// (0x00057555) set_text_pane_t1_copy1_ParamLimits

0x35e0,	// (0x000578fb) cell_graphic_popup_pane_cp2_ParamLimits

0x35e0,	// (0x000578fb) cell_graphic_popup_pane_cp2

0xe8c3,	// (0x00062bde) cell_graphic_popup_pane_g1_cp2

0xee77,	// (0x00063192) cell_graphic_popup_pane_g2_cp2

0xe8cb,	// (0x00062be6) cell_graphic_popup_pane_g3_cp2

0xe8d3,	// (0x00062bee) cell_graphic_popup_pane_t2_cp2

0xee88,	// (0x000631a3) grid_highlight_pane_cp3_cp2

0xf423,	// (0x0006373e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf122,	// (0x0006343d) main_tmo_pane_ParamLimits

0xc70b,	// (0x00060a26) popup_tmo_big_image_note_window

0xddb7,	// (0x000620d2) cell_ai5_widget_list_pane

0xddbf,	// (0x000620da) cell_ai5_widget_lrg_icon_pane

0xe4d0,	// (0x000627eb) tmo_note_info_pane_t1_ParamLimits

0xe4e5,	// (0x00062800) tmo_note_info_pane_t2_ParamLimits

0xe4fe,	// (0x00062819) tmo_note_info_pane_t3_ParamLimits

0xe513,	// (0x0006282e) tmo_note_info_pane_t4_ParamLimits

0xe525,	// (0x00062840) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x000641e4) tmo_note_info_pane_t_ParamLimits

0xe64f,	// (0x0006296a) settings_container_pane_ParamLimits

0xe84c,	// (0x00062b67) indicator_popup_pane_cp5

0xe84c,	// (0x00062b67) indicator_popup_pane_cp6

0x33ba,	// (0x000576d5) list_set_graphic_pane_copy1_ParamLimits

0xe25b,	// (0x00062576) bg_popup_window_pane_cp23

0xe8e1,	// (0x00062bfc) popup_tmo_big_image_note_window_g1

0xe8ed,	// (0x00062c08) popup_tmo_big_image_note_window_t1

0xe8fd,	// (0x00062c18) popup_tmo_big_image_note_window_t2

0xe90d,	// (0x00062c28) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x000641fd) popup_tmo_big_image_note_window_t

0xb1eb,	// (0x0005f506) cell_ai5_widget_lrg_icon_pane_g1

0xe91d,	// (0x00062c38) cell_ai5_widget_lrg_icon_pane_t1

0xe92b,	// (0x00062c46) cell_ai5_widget_list_row_pane_ParamLimits

0xe92b,	// (0x00062c46) cell_ai5_widget_list_row_pane

0xe943,	// (0x00062c5e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe943,	// (0x00062c5e) cell_ai5_widget_list_row_pane_g1

0xe950,	// (0x00062c6b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe950,	// (0x00062c6b) cell_ai5_widget_list_row_pane_t1

0xe97b,	// (0x00062c96) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe97b,	// (0x00062c96) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee9,	// (0x00064204) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x00064204) cell_ai5_widget_list_row_pane_t

0x50a2,	// (0x000593bd) main_fep_vtchi_ss_pane

0xe9c3,	// (0x00062cde) popup_fep_char_pre_window

0xe9cb,	// (0x00062ce6) popup_fep_ituss_window

0xe9f0,	// (0x00062d0b) popup_fep_vkbss_window

0xea15,	// (0x00062d30) grid_vkbss_keypad_pane_ParamLimits

0xea15,	// (0x00062d30) grid_vkbss_keypad_pane

0xea25,	// (0x00062d40) ituss_keypad_pane

0x82ba,	// (0x0005c5d5) aid_vkbss_key_offset_ParamLimits

0x82ba,	// (0x0005c5d5) aid_vkbss_key_offset

0x82c6,	// (0x0005c5e1) cell_vkbss_key_pane_ParamLimits

0x82c6,	// (0x0005c5e1) cell_vkbss_key_pane

0xea34,	// (0x00062d4f) bg_cell_vkbss_key_g1_ParamLimits

0xea34,	// (0x00062d4f) bg_cell_vkbss_key_g1

0xea40,	// (0x00062d5b) cell_vkbss_key_3p_pane_ParamLimits

0xea40,	// (0x00062d5b) cell_vkbss_key_3p_pane

0xea54,	// (0x00062d6f) cell_vkbss_key_g1_ParamLimits

0xea54,	// (0x00062d6f) cell_vkbss_key_g1

0xea68,	// (0x00062d83) cell_vkbss_key_t1_ParamLimits

0xea68,	// (0x00062d83) cell_vkbss_key_t1

0x82dc,	// (0x0005c5f7) cell_ituss_key_pane_ParamLimits

0x82dc,	// (0x0005c5f7) cell_ituss_key_pane

0xea93,	// (0x00062dae) bg_cell_ituss_key_g1_ParamLimits

0xea93,	// (0x00062dae) bg_cell_ituss_key_g1

0xea9f,	// (0x00062dba) cell_ituss_key_pane_g1_ParamLimits

0xea9f,	// (0x00062dba) cell_ituss_key_pane_g1

0x82ed,	// (0x0005c608) cell_ituss_key_pane_g2_ParamLimits

0x82ed,	// (0x0005c608) cell_ituss_key_pane_g2

0x0002,

0xfef0,	// (0x0006420b) cell_ituss_key_pane_g_ParamLimits

0xfef0,	// (0x0006420b) cell_ituss_key_pane_g

0x8319,	// (0x0005c634) cell_ituss_key_t1_ParamLimits

0x8319,	// (0x0005c634) cell_ituss_key_t1

0x8353,	// (0x0005c66e) cell_ituss_key_t2_ParamLimits

0x8353,	// (0x0005c66e) cell_ituss_key_t2

0x8384,	// (0x0005c69f) cell_ituss_key_t3_ParamLimits

0x8384,	// (0x0005c69f) cell_ituss_key_t3

0x8353,	// (0x0005c66e) cell_ituss_key_t4_ParamLimits

0x8353,	// (0x0005c66e) cell_ituss_key_t4

0x0004,

0xfef7,	// (0x00064212) cell_ituss_key_t_ParamLimits

0xfef7,	// (0x00064212) cell_ituss_key_t

0xeac5,	// (0x00062de0) cell_vkbss_key_3p_pane_g1

0xeacd,	// (0x00062de8) cell_vkbss_key_3p_pane_g2

0xead5,	// (0x00062df0) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0006421d) cell_vkbss_key_3p_pane_g

0x36bb,	// (0x000579d6) bg_popup_fep_char_preview_window_cp02

0xeadd,	// (0x00062df8) popup_fep_char_pre_window_t1

0xdd44,	// (0x0006205f) main_ai5_sk_pane

0xe59f,	// (0x000628ba) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe5ab,	// (0x000628c6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe5c0,	// (0x000628db) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe5cc,	// (0x000628e7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x000641ef) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe5d8,	// (0x000628f3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf122,	// (0x0006343d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeaeb,	// (0x00062e06) main_ai5_sk_pane_g1

0x8ec0,	// (0x0005d1db) popup_query_code_window_g1

0xe9e1,	// (0x00062cfc) popup_fep_vkb_icf_pane

0xe9ff,	// (0x00062d1a) popup_fep_vtchi_icf_pane

0xeaf4,	// (0x00062e0f) bg_icf_pane

0xeb00,	// (0x00062e1b) list_vkb_icf_pane

0xeb0f,	// (0x00062e2a) bg_icf_pane_cp01

0xeb22,	// (0x00062e3d) vtchi_icf_list_pane

0xeb32,	// (0x00062e4d) list_vkb_icf_pane_t1_ParamLimits

0xeb32,	// (0x00062e4d) list_vkb_icf_pane_t1

0xeb50,	// (0x00062e6b) vtchi_icf_list_pane_t1_ParamLimits

0xeb50,	// (0x00062e6b) vtchi_icf_list_pane_t1

0xe9cb,	// (0x00062ce6) popup_fep_ituss_window_ParamLimits

0xe9ff,	// (0x00062d1a) popup_fep_vtchi_icf_pane_ParamLimits

0xea25,	// (0x00062d40) ituss_keypad_pane_ParamLimits

0x82ae,	// (0x0005c5c9) ituss_sks_pane

0xeaf4,	// (0x00062e0f) bg_icf_pane_ParamLimits

0xe9a3,	// (0x00062cbe) icf_edit_indi_pane_ParamLimits

0xe9a3,	// (0x00062cbe) icf_edit_indi_pane

0xeb00,	// (0x00062e1b) list_vkb_icf_pane_ParamLimits

0xeb0f,	// (0x00062e2a) bg_icf_pane_cp01_ParamLimits

0xe9b6,	// (0x00062cd1) icf_edit_indi_pane_cp01_ParamLimits

0xe9b6,	// (0x00062cd1) icf_edit_indi_pane_cp01

0xeb2a,	// (0x00062e45) vtchi_query_pane

0xd6e7,	// (0x00061a02) icf_edit_indi_pane_g1_ParamLimits

0xd6e7,	// (0x00061a02) icf_edit_indi_pane_g1

0xebbf,	// (0x00062eda) icf_edit_indi_pane_g2_ParamLimits

0xebbf,	// (0x00062eda) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00064235) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00064235) icf_edit_indi_pane_g

0xebd1,	// (0x00062eec) icf_edit_indi_pane_t1

0xeb68,	// (0x00062e83) bg_input_focus_pane_cp042

0xf05b,	// (0x00063376) vtchi_button_pane

0xeb71,	// (0x00062e8c) vtchi_query_pane_t1

0xeb7f,	// (0x00062e9a) vtchi_query_pane_t2

0xeb8d,	// (0x00062ea8) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00064224) vtchi_query_pane_t

0x50a2,	// (0x000593bd) bg_button_pane_cp13

0xeb9b,	// (0x00062eb6) vtchi_button_pane_g1

0x83c7,	// (0x0005c6e2) ituss_sks_pane_g1

0x83d2,	// (0x0005c6ed) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x0006422b) ituss_sks_pane_g

0xeba3,	// (0x00062ebe) ituss_sks_pane_t1

0xebb1,	// (0x00062ecc) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00064230) ituss_sks_pane_t

0xacc8,	// (0x0005efe3) indicator_nsta_pane_cp_g1

0xacd0,	// (0x0005efeb) indicator_nsta_pane_cp_g2

0xacd8,	// (0x0005eff3) indicator_nsta_pane_cp_g3

0xacc8,	// (0x0005efe3) indicator_nsta_pane_cp_g4

0xacd0,	// (0x0005efeb) indicator_nsta_pane_cp_g5

0xacd8,	// (0x0005eff3) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00063dcd) indicator_nsta_pane_cp_g

0xd432,	// (0x0006174d) cell_graphic2_pane_t2_ParamLimits

0xd432,	// (0x0006174d) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x000640e6) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x000640e6) cell_graphic2_pane_t

0xd45f,	// (0x0006177a) cell_graphic2_control_pane_t1

0x6166,	// (0x0005a481) signal_pane_g3_ParamLimits

0x6166,	// (0x0005a481) signal_pane_g3

0x6175,	// (0x0005a490) signal_pane_g4_ParamLimits

0x6175,	// (0x0005a490) signal_pane_g4

0xe98d,	// (0x00062ca8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe98d,	// (0x00062ca8) cell_ai5_widget_list_row_pane_t3

0xeab3,	// (0x00062dce) cell_ituss_key_pane_t1_ParamLimits

0xeab3,	// (0x00062dce) cell_ituss_key_pane_t1

0x8b2f,	// (0x0005ce4a) form_field_data_wide_pane_vc_t2_ParamLimits

0x8b2f,	// (0x0005ce4a) form_field_data_wide_pane_vc_t2

0x8b43,	// (0x0005ce5e) form_field_data_wide_pane_vc_t3_ParamLimits

0x8b43,	// (0x0005ce5e) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00063b29) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00063b29) form_field_data_wide_pane_vc_t

0xa983,	// (0x0005ec9e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa983,	// (0x0005ec9e) form_field_slider_wide_pane_vc_t3

0xaa59,	// (0x0005ed74) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaa59,	// (0x0005ed74) form_field_popup_wide_pane_vc_t2

0xaa70,	// (0x0005ed8b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaa70,	// (0x0005ed8b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00063dbc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00063dbc) form_field_popup_wide_pane_vc_t

0x8084,	// (0x0005c39f) aid_fshwr2_btn_pane_ParamLimits

0x8090,	// (0x0005c3ab) aid_fshwr2_syb_pane_ParamLimits

0x80a2,	// (0x0005c3bd) aid_fshwr2_txt_pane_ParamLimits

0x78c4,	// (0x0005bbdf) fshwr2_bg_pane_ParamLimits

0x80ae,	// (0x0005c3c9) fshwr2_func_candi_pane_ParamLimits

0x80c4,	// (0x0005c3df) fshwr2_hwr_syb_pane_ParamLimits

0x80d8,	// (0x0005c3f3) fshwr2_icf_pane_ParamLimits

0xa247,	// (0x0005e562) list_double_graphic_pane_vc_g4_ParamLimits

0xa247,	// (0x0005e562) list_double_graphic_pane_vc_g4

0x830d,	// (0x0005c628) cell_ituss_key_pane_g3_ParamLimits

0x830d,	// (0x0005c628) cell_ituss_key_pane_g3

0x83b5,	// (0x0005c6d0) cell_ituss_key_t5_ParamLimits

0x83b5,	// (0x0005c6d0) cell_ituss_key_t5

0xe9f0,	// (0x00062d0b) popup_fep_vkbss_window_ParamLimits

0xdd4e,	// (0x00062069) aid_cell_ai5_quarter

0xebd1,	// (0x00062eec) icf_edit_indi_pane_t1_ParamLimits

0xecbf,	// (0x00062fda) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xecbf,	// (0x00062fda) aid_tch_indicator_popup_pane_cp2

0xecd2,	// (0x00062fed) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xecd2,	// (0x00062fed) aid_tch_query_popup_data_pane_cp2

0x8e68,	// (0x0005d183) aid_tch_query_popup_pane_ParamLimits

0x8e68,	// (0x0005d183) aid_tch_query_popup_pane

0x8e68,	// (0x0005d183) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8e68,	// (0x0005d183) aid_tch_query_popup_data_pane_cp1

0xe3fe,	// (0x00062719) cell_fshwr2_syb_bg_pane_ParamLimits

0x81d7,	// (0x0005c4f2) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x81eb,	// (0x0005c506) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe9e1,	// (0x00062cfc) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
