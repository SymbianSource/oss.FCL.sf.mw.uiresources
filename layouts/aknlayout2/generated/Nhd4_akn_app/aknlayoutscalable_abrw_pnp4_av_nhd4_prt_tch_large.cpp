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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00056554 };

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
0x51a9,	// (0x0005b6fd) Screen

0x51b5,	// (0x0005b709) application_window_ParamLimits

0x51b5,	// (0x0005b709) application_window

0xe08b,	// (0x000645df) screen_g1

0x5211,	// (0x0005b765) area_bottom_pane_ParamLimits

0x5211,	// (0x0005b765) area_bottom_pane

0x52d1,	// (0x0005b825) area_top_pane_ParamLimits

0x52d1,	// (0x0005b825) area_top_pane

0x536f,	// (0x0005b8c3) main_pane_ParamLimits

0x536f,	// (0x0005b8c3) main_pane

0xe095,	// (0x000645e9) misc_graphics

0x73a8,	// (0x0005d8fc) battery_pane_ParamLimits

0x73a8,	// (0x0005d8fc) battery_pane

0x98b2,	// (0x0005fe06) bg_status_flat_pane_g8

0x98ba,	// (0x0005fe0e) bg_status_flat_pane_g9

0x7470,	// (0x0005d9c4) context_pane_ParamLimits

0x7470,	// (0x0005d9c4) context_pane

0x7586,	// (0x0005dada) navi_pane_ParamLimits

0x7586,	// (0x0005dada) navi_pane

0x760a,	// (0x0005db5e) signal_pane_ParamLimits

0x760a,	// (0x0005db5e) signal_pane

0x0008,

0xf84f,	// (0x00065da3) bg_status_flat_pane_g

0x8e93,	// (0x0005f3e7) status_pane_g1_ParamLimits

0x8e93,	// (0x0005f3e7) status_pane_g1

0x8ea7,	// (0x0005f3fb) status_pane_g2_ParamLimits

0x8ea7,	// (0x0005f3fb) status_pane_g2

0x8eb3,	// (0x0005f407) status_pane_g3_ParamLimits

0x8eb3,	// (0x0005f407) status_pane_g3

0x0004,

0xf776,	// (0x00065cca) status_pane_g_ParamLimits

0xf776,	// (0x00065cca) status_pane_g

0x8ee7,	// (0x0005f43b) title_pane_ParamLimits

0x8ee7,	// (0x0005f43b) title_pane

0x8f24,	// (0x0005f478) uni_indicator_pane_ParamLimits

0x8f24,	// (0x0005f478) uni_indicator_pane

0x1822,	// (0x00057d76) bg_list_pane_ParamLimits

0x1822,	// (0x00057d76) bg_list_pane

0x6d5f,	// (0x0005d2b3) find_pane

0xf51d,	// (0x00065a71) listscroll_app_pane_ParamLimits

0xf51d,	// (0x00065a71) listscroll_app_pane

0x1842,	// (0x00057d96) listscroll_form_pane

0x6d67,	// (0x0005d2bb) listscroll_gen_pane_ParamLimits

0x6d67,	// (0x0005d2bb) listscroll_gen_pane

0x6d7b,	// (0x0005d2cf) listscroll_set_pane

0x6238,	// (0x0005c78c) main_idle_act_pane

0x16b6,	// (0x00057c0a) main_idle_trad_pane

0x16b6,	// (0x00057c0a) main_list_empty_pane

0xf51d,	// (0x00065a71) main_midp_pane

0x185c,	// (0x00057db0) main_pane_g1_ParamLimits

0x185c,	// (0x00057db0) main_pane_g1

0x6d91,	// (0x0005d2e5) popup_ai_message_window_ParamLimits

0x6d91,	// (0x0005d2e5) popup_ai_message_window

0x6e35,	// (0x0005d389) popup_fep_china_uni_window_ParamLimits

0x6e35,	// (0x0005d389) popup_fep_china_uni_window

0x6e8f,	// (0x0005d3e3) popup_fep_japan_candidate_window_ParamLimits

0x6e8f,	// (0x0005d3e3) popup_fep_japan_candidate_window

0x6ead,	// (0x0005d401) popup_fep_japan_predictive_window_ParamLimits

0x6ead,	// (0x0005d401) popup_fep_japan_predictive_window

0x6edd,	// (0x0005d431) popup_find_window

0x6eea,	// (0x0005d43e) popup_grid_graphic_window_ParamLimits

0x6eea,	// (0x0005d43e) popup_grid_graphic_window

0x6f14,	// (0x0005d468) popup_large_graphic_colour_window

0x6f3a,	// (0x0005d48e) popup_menu_window_ParamLimits

0x6f3a,	// (0x0005d48e) popup_menu_window

0x70f6,	// (0x0005d64a) popup_note_image_window

0x70e2,	// (0x0005d636) popup_note_wait_window_ParamLimits

0x70e2,	// (0x0005d636) popup_note_wait_window

0x70e2,	// (0x0005d636) popup_note_window_ParamLimits

0x70e2,	// (0x0005d636) popup_note_window

0x714c,	// (0x0005d6a0) popup_query_code_window_ParamLimits

0x714c,	// (0x0005d6a0) popup_query_code_window

0x7160,	// (0x0005d6b4) popup_query_data_code_window_ParamLimits

0x7160,	// (0x0005d6b4) popup_query_data_code_window

0x717d,	// (0x0005d6d1) popup_query_data_window_ParamLimits

0x717d,	// (0x0005d6d1) popup_query_data_window

0x7199,	// (0x0005d6ed) popup_query_sat_info_window_ParamLimits

0x7199,	// (0x0005d6ed) popup_query_sat_info_window

0x71d2,	// (0x0005d726) popup_snote_single_graphic_window_ParamLimits

0x71d2,	// (0x0005d726) popup_snote_single_graphic_window

0x71d2,	// (0x0005d726) popup_snote_single_text_window_ParamLimits

0x71d2,	// (0x0005d726) popup_snote_single_text_window

0x71e7,	// (0x0005d73b) popup_sub_window_general

0x7317,	// (0x0005d86b) popup_window_general_ParamLimits

0x7317,	// (0x0005d86b) popup_window_general

0x732c,	// (0x0005d880) power_save_pane

0x6bc6,	// (0x0005d11a) control_pane_g1_ParamLimits

0x6bc6,	// (0x0005d11a) control_pane_g1

0x6bed,	// (0x0005d141) control_pane_g2_ParamLimits

0x6bed,	// (0x0005d141) control_pane_g2

0x180c,	// (0x00057d60) control_pane_g3_ParamLimits

0x180c,	// (0x00057d60) control_pane_g3

0x0007,

0xf75e,	// (0x00065cb2) control_pane_g_ParamLimits

0xf75e,	// (0x00065cb2) control_pane_g

0x6c5e,	// (0x0005d1b2) control_pane_t1_ParamLimits

0x6c5e,	// (0x0005d1b2) control_pane_t1

0x6cb4,	// (0x0005d208) control_pane_t2_ParamLimits

0x6cb4,	// (0x0005d208) control_pane_t2

0x0002,

0xf76f,	// (0x00065cc3) control_pane_t_ParamLimits

0xf76f,	// (0x00065cc3) control_pane_t

0x6b3f,	// (0x0005d093) navi_navi_volume_pane_cp1

0x6b47,	// (0x0005d09b) status_small_icon_pane

0x17b8,	// (0x00057d0c) status_small_pane_g1_ParamLimits

0x17b8,	// (0x00057d0c) status_small_pane_g1

0x6b4f,	// (0x0005d0a3) status_small_pane_g2_ParamLimits

0x6b4f,	// (0x0005d0a3) status_small_pane_g2

0x17ec,	// (0x00057d40) status_small_pane_g3_ParamLimits

0x17ec,	// (0x00057d40) status_small_pane_g3

0x6b5b,	// (0x0005d0af) status_small_pane_g4_ParamLimits

0x6b5b,	// (0x0005d0af) status_small_pane_g4

0x6b67,	// (0x0005d0bb) status_small_pane_g5_ParamLimits

0x6b67,	// (0x0005d0bb) status_small_pane_g5

0x6b75,	// (0x0005d0c9) status_small_pane_g6_ParamLimits

0x6b75,	// (0x0005d0c9) status_small_pane_g6

0x0007,

0xf74d,	// (0x00065ca1) status_small_pane_g_ParamLimits

0xf74d,	// (0x00065ca1) status_small_pane_g

0x6b90,	// (0x0005d0e4) status_small_pane_t1

0x6bb2,	// (0x0005d106) status_small_wait_pane_ParamLimits

0x6bb2,	// (0x0005d106) status_small_wait_pane

0x6621,	// (0x0005cb75) aid_levels_signal_ParamLimits

0x6621,	// (0x0005cb75) aid_levels_signal

0x6633,	// (0x0005cb87) signal_pane_g1_ParamLimits

0x6633,	// (0x0005cb87) signal_pane_g1

0x6648,	// (0x0005cb9c) signal_pane_g2_ParamLimits

0x6648,	// (0x0005cb9c) signal_pane_g2

0x0003,

0xf6de,	// (0x00065c32) signal_pane_g_ParamLimits

0xf6de,	// (0x00065c32) signal_pane_g

0x12b0,	// (0x00057804) context_pane_g1

0x55b0,	// (0x0005bb04) title_pane_g1

0x55da,	// (0x0005bb2e) title_pane_t1

0xe0ab,	// (0x000645ff) title_pane_t2

0xe0d1,	// (0x00064625) title_pane_t3

0x0002,

0xf532,	// (0x00065a86) title_pane_t

0x8f3c,	// (0x0005f490) aid_levels_battery_ParamLimits

0x8f3c,	// (0x0005f490) aid_levels_battery

0x8f50,	// (0x0005f4a4) battery_pane_g1_ParamLimits

0x8f50,	// (0x0005f4a4) battery_pane_g1

0x8f66,	// (0x0005f4ba) battery_pane_g2_ParamLimits

0x8f66,	// (0x0005f4ba) battery_pane_g2

0x0001,

0xf781,	// (0x00065cd5) battery_pane_g_ParamLimits

0xf781,	// (0x00065cd5) battery_pane_g

0xa1d6,	// (0x0006072a) uni_indicator_pane_g1

0xa1e9,	// (0x0006073d) uni_indicator_pane_g2

0xa1fb,	// (0x0006074f) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00065e4b) uni_indicator_pane_g

0x1559,	// (0x00057aad) navi_icon_pane_ParamLimits

0x1559,	// (0x00057aad) navi_icon_pane

0x14a2,	// (0x000579f6) navi_midp_pane

0x1575,	// (0x00057ac9) navi_navi_pane

0x157f,	// (0x00057ad3) navi_text_pane_ParamLimits

0x157f,	// (0x00057ad3) navi_text_pane

0xe08b,	// (0x000645df) status_small_wait_pane_g1

0xe322,	// (0x00064876) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00065e46) status_small_wait_pane_g

0x9efd,	// (0x00060451) navi_navi_icon_text_pane

0x9f05,	// (0x00060459) navi_navi_pane_g1_ParamLimits

0x9f05,	// (0x00060459) navi_navi_pane_g1

0x9f17,	// (0x0006046b) navi_navi_pane_g2_ParamLimits

0x9f17,	// (0x0006046b) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00065e14) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00065e14) navi_navi_pane_g

0x9f29,	// (0x0006047d) navi_navi_tabs_pane

0x9f32,	// (0x00060486) navi_navi_text_pane

0x9efd,	// (0x00060451) navi_navi_volume_pane

0x9ed9,	// (0x0006042d) navi_text_pane_t1

0x9ecd,	// (0x00060421) navi_icon_pane_g1

0x9e20,	// (0x00060374) navi_navi_text_pane_t1

0x7924,	// (0x0005de78) navi_navi_volume_pane_g1

0x792c,	// (0x0005de80) volume_small_pane

0x9d86,	// (0x000602da) navi_navi_icon_text_pane_g1

0x9d8e,	// (0x000602e2) navi_navi_icon_text_pane_t1

0x1575,	// (0x00057ac9) navi_tabs_2_long_pane

0x1575,	// (0x00057ac9) navi_tabs_2_pane

0x1575,	// (0x00057ac9) navi_tabs_3_long_pane

0x1575,	// (0x00057ac9) navi_tabs_3_pane

0x1575,	// (0x00057ac9) navi_tabs_4_pane

0x7904,	// (0x0005de58) tabs_2_active_pane_ParamLimits

0x7904,	// (0x0005de58) tabs_2_active_pane

0x7914,	// (0x0005de68) tabs_2_passive_pane_ParamLimits

0x7914,	// (0x0005de68) tabs_2_passive_pane

0x78d2,	// (0x0005de26) tabs_3_active_pane_ParamLimits

0x78d2,	// (0x0005de26) tabs_3_active_pane

0x78e2,	// (0x0005de36) tabs_3_passive_pane_ParamLimits

0x78e2,	// (0x0005de36) tabs_3_passive_pane

0x78f3,	// (0x0005de47) tabs_3_passive_pane_cp_ParamLimits

0x78f3,	// (0x0005de47) tabs_3_passive_pane_cp

0x788e,	// (0x0005dde2) tabs_4_active_pane_ParamLimits

0x788e,	// (0x0005dde2) tabs_4_active_pane

0x789f,	// (0x0005ddf3) tabs_4_passive_pane_ParamLimits

0x789f,	// (0x0005ddf3) tabs_4_passive_pane

0x78b0,	// (0x0005de04) tabs_4_passive_pane_cp_ParamLimits

0x78b0,	// (0x0005de04) tabs_4_passive_pane_cp

0x78c1,	// (0x0005de15) tabs_4_passive_pane_cp2_ParamLimits

0x78c1,	// (0x0005de15) tabs_4_passive_pane_cp2

0x786a,	// (0x0005ddbe) tabs_2_long_active_pane_ParamLimits

0x786a,	// (0x0005ddbe) tabs_2_long_active_pane

0x787c,	// (0x0005ddd0) tabs_2_long_passive_pane_ParamLimits

0x787c,	// (0x0005ddd0) tabs_2_long_passive_pane

0x7825,	// (0x0005dd79) tabs_3_long_active_pane_ParamLimits

0x7825,	// (0x0005dd79) tabs_3_long_active_pane

0x783e,	// (0x0005dd92) tabs_3_long_passive_pane_ParamLimits

0x783e,	// (0x0005dd92) tabs_3_long_passive_pane

0x7851,	// (0x0005dda5) tabs_3_long_passive_pane_cp_ParamLimits

0x7851,	// (0x0005dda5) tabs_3_long_passive_pane_cp

0x77cb,	// (0x0005dd1f) volume_small_pane_g1

0x77d4,	// (0x0005dd28) volume_small_pane_g2

0x77dd,	// (0x0005dd31) volume_small_pane_g3

0x77e6,	// (0x0005dd3a) volume_small_pane_g4

0x77ef,	// (0x0005dd43) volume_small_pane_g5

0x77f8,	// (0x0005dd4c) volume_small_pane_g6

0x7801,	// (0x0005dd55) volume_small_pane_g7

0x780a,	// (0x0005dd5e) volume_small_pane_g8

0x7813,	// (0x0005dd67) volume_small_pane_g9

0x781c,	// (0x0005dd70) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00065de0) volume_small_pane_g

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp2_ParamLimits

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp2

0x5642,	// (0x0005bb96) tabs_3_active_pane_g1

0x564a,	// (0x0005bb9e) tabs_3_active_pane_t1

0xe0e3,	// (0x00064637) bg_passive_tab_pane_cp2_ParamLimits

0xe0e3,	// (0x00064637) bg_passive_tab_pane_cp2

0x5642,	// (0x0005bb96) tabs_3_passive_pane_g1

0x564a,	// (0x0005bb9e) tabs_3_passive_pane_t1

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp3_ParamLimits

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp3

0x565c,	// (0x0005bbb0) tabs_4_active_pane_g1

0x5664,	// (0x0005bbb8) tabs_4_active_pane_t1

0xe0e3,	// (0x00064637) bg_passive_tab_pane_cp3_ParamLimits

0xe0e3,	// (0x00064637) bg_passive_tab_pane_cp3

0x565c,	// (0x0005bbb0) tabs_4_1_passive_pane_g1

0x5664,	// (0x0005bbb8) tabs_4_1_passive_pane_t1

0xf51d,	// (0x00065a71) list_highlight_pane_cp2

0xa43e,	// (0x00060992) list_set_pane_ParamLimits

0xa43e,	// (0x00060992) list_set_pane

0xa4e0,	// (0x00060a34) main_pane_set_t1_ParamLimits

0xa4e0,	// (0x00060a34) main_pane_set_t1

0xa500,	// (0x00060a54) main_pane_set_t2_ParamLimits

0xa500,	// (0x00060a54) main_pane_set_t2

0xa514,	// (0x00060a68) main_pane_set_t3_ParamLimits

0xa514,	// (0x00060a68) main_pane_set_t3

0xa526,	// (0x00060a7a) main_pane_set_t4_ParamLimits

0xa526,	// (0x00060a7a) main_pane_set_t4

0x0003,

0xf95c,	// (0x00065eb0) main_pane_set_t_ParamLimits

0xf95c,	// (0x00065eb0) main_pane_set_t

0xa538,	// (0x00060a8c) setting_code_pane

0xa544,	// (0x00060a98) setting_slider_graphic_pane

0xa544,	// (0x00060a98) setting_slider_pane

0xa544,	// (0x00060a98) setting_text_pane

0xa544,	// (0x00060a98) setting_volume_pane

0x5676,	// (0x0005bbca) volume_set_pane

0xe0e3,	// (0x00064637) bg_set_opt_pane_cp

0x567e,	// (0x0005bbd2) setting_slider_pane_t1

0x5697,	// (0x0005bbeb) setting_slider_pane_t2

0x56b1,	// (0x0005bc05) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00065a8d) setting_slider_pane_t

0x56c9,	// (0x0005bc1d) slider_set_pane

0xe095,	// (0x000645e9) bg_set_opt_pane_cp2

0xe0f1,	// (0x00064645) setting_slider_graphic_pane_g1

0x56df,	// (0x0005bc33) setting_slider_graphic_pane_t1

0x56ef,	// (0x0005bc43) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00065a94) setting_slider_graphic_pane_t

0x56ff,	// (0x0005bc53) slider_set_pane_cp

0xe095,	// (0x000645e9) input_focus_pane_cp1

0xa3fd,	// (0x00060951) list_set_text_pane

0xe08b,	// (0x000645df) setting_text_pane_g1

0xe095,	// (0x000645e9) input_focus_pane_cp2

0xe08b,	// (0x000645df) setting_code_pane_g1

0xe0fa,	// (0x0006464e) setting_code_pane_t1

0x3a14,	// (0x00059f68) set_text_pane_t1_ParamLimits

0x3a14,	// (0x00059f68) set_text_pane_t1

0xf19a,	// (0x000656ee) set_opt_bg_pane_g1

0xf1a2,	// (0x000656f6) set_opt_bg_pane_g2

0xa3d7,	// (0x0006092b) set_opt_bg_pane_g3

0xf1b2,	// (0x00065706) set_opt_bg_pane_g4

0xf1ba,	// (0x0006570e) set_opt_bg_pane_g5

0xf1c2,	// (0x00065716) set_opt_bg_pane_g6

0xa3e1,	// (0x00060935) set_opt_bg_pane_g7

0xa3e9,	// (0x0006093d) set_opt_bg_pane_g8

0xa3f3,	// (0x00060947) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00065e9d) set_opt_bg_pane_g

0xa3ca,	// (0x0006091e) slider_set_pane_g1

0x79ab,	// (0x0005deff) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00065e8e) slider_set_pane_g

0x7935,	// (0x0005de89) volume_set_pane_g1

0x793d,	// (0x0005de91) volume_set_pane_g2

0x7945,	// (0x0005de99) volume_set_pane_g3

0x794d,	// (0x0005dea1) volume_set_pane_g4

0x7955,	// (0x0005dea9) volume_set_pane_g5

0x795d,	// (0x0005deb1) volume_set_pane_g6

0x7965,	// (0x0005deb9) volume_set_pane_g7

0x796d,	// (0x0005dec1) volume_set_pane_g8

0x7975,	// (0x0005dec9) volume_set_pane_g9

0x797d,	// (0x0005ded1) volume_set_pane_g10

0x0009,

0xf912,	// (0x00065e66) volume_set_pane_g

0x5707,	// (0x0005bc5b) indicator_pane_ParamLimits

0x5707,	// (0x0005bc5b) indicator_pane

0x5713,	// (0x0005bc67) main_idle_pane_g2_ParamLimits

0x5713,	// (0x0005bc67) main_idle_pane_g2

0x573b,	// (0x0005bc8f) main_pane_idle_g1_ParamLimits

0x573b,	// (0x0005bc8f) main_pane_idle_g1

0xe108,	// (0x0006465c) popup_clock_digital_analogue_window_ParamLimits

0xe108,	// (0x0006465c) popup_clock_digital_analogue_window

0x5748,	// (0x0005bc9c) soft_indicator_pane_ParamLimits

0x5748,	// (0x0005bc9c) soft_indicator_pane

0x5754,	// (0x0005bca8) wallpaper_pane_ParamLimits

0x5754,	// (0x0005bca8) wallpaper_pane

0xe08b,	// (0x000645df) wallpaper_pane_g1

0x5760,	// (0x0005bcb4) indicator_pane_g1_ParamLimits

0x5760,	// (0x0005bcb4) indicator_pane_g1

0xa85d,	// (0x00060db1) navi_navi_icon_text_pane_srt_g1

0xe136,	// (0x0006468a) soft_indicator_pane_t1

0xe150,	// (0x000646a4) aid_ps_area_pane

0x576c,	// (0x0005bcc0) aid_ps_clock_pane

0xe161,	// (0x000646b5) aid_ps_indicator_pane

0xe16d,	// (0x000646c1) indicator_ps_pane_ParamLimits

0xe16d,	// (0x000646c1) indicator_ps_pane

0xe17c,	// (0x000646d0) power_save_pane_g1_ParamLimits

0xe17c,	// (0x000646d0) power_save_pane_g1

0xe188,	// (0x000646dc) power_save_pane_g2_ParamLimits

0xe188,	// (0x000646dc) power_save_pane_g2

0x51c5,	// (0x0005b719) aid_navinavi_width_pane

0xe150,	// (0x000646a4) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00065a99) power_save_pane_g_ParamLimits

0xf545,	// (0x00065a99) power_save_pane_g

0xe196,	// (0x000646ea) power_save_pane_t1_ParamLimits

0xe196,	// (0x000646ea) power_save_pane_t1

0x576c,	// (0x0005bcc0) aid_ps_clock_pane_ParamLimits

0xe161,	// (0x000646b5) aid_ps_indicator_pane_ParamLimits

0xe1a8,	// (0x000646fc) power_save_pane_t4_ParamLimits

0xe1a8,	// (0x000646fc) power_save_pane_t4

0x0001,

0xf54a,	// (0x00065a9e) power_save_pane_t_ParamLimits

0xf54a,	// (0x00065a9e) power_save_pane_t

0xe1d2,	// (0x00064726) power_save_t3_ParamLimits

0xe1d2,	// (0x00064726) power_save_t3

0xe1bd,	// (0x00064711) power_save_t2_ParamLimits

0xe1bd,	// (0x00064711) power_save_t2

0xe1e7,	// (0x0006473b) indicator_ps_pane_g1

0x577a,	// (0x0005bcce) ai_gene_pane_ParamLimits

0x577a,	// (0x0005bcce) ai_gene_pane

0x5786,	// (0x0005bcda) ai_links_pane_ParamLimits

0x5786,	// (0x0005bcda) ai_links_pane

0x5792,	// (0x0005bce6) indicator_pane_cp1_ParamLimits

0x5792,	// (0x0005bce6) indicator_pane_cp1

0x579e,	// (0x0005bcf2) main_pane_idle_g1_cp_ParamLimits

0x579e,	// (0x0005bcf2) main_pane_idle_g1_cp

0x57aa,	// (0x0005bcfe) popup_ai_links_title_window

0x57b3,	// (0x0005bd07) soft_indicator_pane_cp1_ParamLimits

0x57b3,	// (0x0005bd07) soft_indicator_pane_cp1

0xa1c4,	// (0x00060718) ai_links_pane_g1

0xa1cd,	// (0x00060721) grid_ai_links_pane

0xa1a7,	// (0x000606fb) ai_gene_pane_1

0xa1b2,	// (0x00060706) ai_gene_pane_2

0xa1bb,	// (0x0006070f) list_highlight_pane_cp4

0xa18b,	// (0x000606df) cell_ai_link_pane_ParamLimits

0xa18b,	// (0x000606df) cell_ai_link_pane

0xa183,	// (0x000606d7) cell_ai_link_pane_g1

0xe322,	// (0x00064876) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00065e41) cell_ai_link_pane_g

0xe095,	// (0x000645e9) grid_highlight_cp2

0xe095,	// (0x000645e9) bg_popup_sub_pane_cp1

0xe1fe,	// (0x00064752) popup_ai_links_title_window_t1

0xa0d3,	// (0x00060627) ai_gene_pane_1_g1_ParamLimits

0xa0d3,	// (0x00060627) ai_gene_pane_1_g1

0xa0df,	// (0x00060633) ai_gene_pane_1_g2_ParamLimits

0xa0df,	// (0x00060633) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00065e37) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00065e37) ai_gene_pane_1_g

0xa0ec,	// (0x00060640) ai_gene_pane_1_t1_ParamLimits

0xa0ec,	// (0x00060640) ai_gene_pane_1_t1

0xa120,	// (0x00060674) grid_ai_soft_ind_pane

0xa0be,	// (0x00060612) ai_gene_pane_2_t1_ParamLimits

0xa0be,	// (0x00060612) ai_gene_pane_2_t1

0x57bf,	// (0x0005bd13) main_pane_empty_t1_ParamLimits

0x57bf,	// (0x0005bd13) main_pane_empty_t1

0x57d7,	// (0x0005bd2b) main_pane_empty_t2_ParamLimits

0x57d7,	// (0x0005bd2b) main_pane_empty_t2

0x57ec,	// (0x0005bd40) main_pane_empty_t3_ParamLimits

0x57ec,	// (0x0005bd40) main_pane_empty_t3

0x57fe,	// (0x0005bd52) main_pane_empty_t4_ParamLimits

0x57fe,	// (0x0005bd52) main_pane_empty_t4

0x5810,	// (0x0005bd64) main_pane_empty_t5_ParamLimits

0x5810,	// (0x0005bd64) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00065aa3) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00065aa3) main_pane_empty_t

0xf21f,	// (0x00065773) bg_popup_window_pane_ParamLimits

0xf21f,	// (0x00065773) bg_popup_window_pane

0x9e2e,	// (0x00060382) find_popup_pane_cp2_ParamLimits

0x9e2e,	// (0x00060382) find_popup_pane_cp2

0x9e3a,	// (0x0006038e) heading_pane_ParamLimits

0x9e3a,	// (0x0006038e) heading_pane

0xe095,	// (0x000645e9) bg_popup_sub_pane

0x9da8,	// (0x000602fc) bg_popup_window_pane_g1_ParamLimits

0x9da8,	// (0x000602fc) bg_popup_window_pane_g1

0x9db4,	// (0x00060308) bg_popup_window_pane_g2_ParamLimits

0x9db4,	// (0x00060308) bg_popup_window_pane_g2

0x9dc0,	// (0x00060314) bg_popup_window_pane_g3_ParamLimits

0x9dc0,	// (0x00060314) bg_popup_window_pane_g3

0x9dcc,	// (0x00060320) bg_popup_window_pane_g4_ParamLimits

0x9dcc,	// (0x00060320) bg_popup_window_pane_g4

0x9dd8,	// (0x0006032c) bg_popup_window_pane_g5_ParamLimits

0x9dd8,	// (0x0006032c) bg_popup_window_pane_g5

0x9de4,	// (0x00060338) bg_popup_window_pane_g6_ParamLimits

0x9de4,	// (0x00060338) bg_popup_window_pane_g6

0x9df0,	// (0x00060344) bg_popup_window_pane_g7_ParamLimits

0x9df0,	// (0x00060344) bg_popup_window_pane_g7

0x9dfc,	// (0x00060350) bg_popup_window_pane_g8_ParamLimits

0x9dfc,	// (0x00060350) bg_popup_window_pane_g8

0x9e08,	// (0x0006035c) bg_popup_window_pane_g9_ParamLimits

0x9e08,	// (0x0006035c) bg_popup_window_pane_g9

0x9e14,	// (0x00060368) bg_popup_window_pane_g10_ParamLimits

0x9e14,	// (0x00060368) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00065dff) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00065dff) bg_popup_window_pane_g

0x9d3d,	// (0x00060291) bg_popup_heading_pane_ParamLimits

0x9d3d,	// (0x00060291) bg_popup_heading_pane

0x7aef,	// (0x0005e043) tabs_4_passive_pane_cp_srt_ParamLimits

0x7aef,	// (0x0005e043) tabs_4_passive_pane_cp_srt

0x7b01,	// (0x0005e055) tabs_4_passive_pane_srt_ParamLimits

0x9d51,	// (0x000602a5) heading_pane_g2

0x7b01,	// (0x0005e055) tabs_4_passive_pane_srt

0xf51d,	// (0x00065a71) bg_passive_tab_pane_cp3_srt_ParamLimits

0xf51d,	// (0x00065a71) bg_passive_tab_pane_cp3_srt

0x9d59,	// (0x000602ad) heading_pane_t1_ParamLimits

0x9d59,	// (0x000602ad) heading_pane_t1

0x9d70,	// (0x000602c4) heading_pane_t2_ParamLimits

0x9d70,	// (0x000602c4) heading_pane_t2

0x0001,

0xf8a6,	// (0x00065dfa) heading_pane_t_ParamLimits

0xf8a6,	// (0x00065dfa) heading_pane_t

0x987a,	// (0x0005fdce) bg_popup_heading_pane_g1

0x9929,	// (0x0005fe7d) bg_popup_heading_pane_g2

0x9933,	// (0x0005fe87) bg_popup_heading_pane_g3

0x993d,	// (0x0005fe91) bg_popup_heading_pane_g4

0x9947,	// (0x0005fe9b) bg_popup_heading_pane_g5

0x9951,	// (0x0005fea5) bg_popup_heading_pane_g6

0x9959,	// (0x0005fead) bg_popup_heading_pane_g7

0x9961,	// (0x0005feb5) bg_popup_heading_pane_g8

0x996b,	// (0x0005febf) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00065db6) bg_popup_heading_pane_g

0x903b,	// (0x0005f58f) bg_popup_sub_pane_g1

0x904b,	// (0x0005f59f) bg_popup_sub_pane_g2

0x9043,	// (0x0005f597) bg_popup_sub_pane_g3

0x905b,	// (0x0005f5af) bg_popup_sub_pane_g4

0x9053,	// (0x0005f5a7) bg_popup_sub_pane_g5

0x9063,	// (0x0005f5b7) bg_popup_sub_pane_g6

0x906b,	// (0x0005f5bf) bg_popup_sub_pane_g7

0x907b,	// (0x0005f5cf) bg_popup_sub_pane_g8

0x9073,	// (0x0005f5c7) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00065d90) bg_popup_sub_pane_g

0xe20d,	// (0x00064761) bg_popup_window_pane_cp5_ParamLimits

0xe20d,	// (0x00064761) bg_popup_window_pane_cp5

0xe229,	// (0x0006477d) popup_note_window_g1_ParamLimits

0xe229,	// (0x0006477d) popup_note_window_g1

0xe235,	// (0x00064789) popup_note_window_t1_ParamLimits

0xe235,	// (0x00064789) popup_note_window_t1

0xe24b,	// (0x0006479f) popup_note_window_t2_ParamLimits

0xe24b,	// (0x0006479f) popup_note_window_t2

0xe261,	// (0x000647b5) popup_note_window_t3_ParamLimits

0xe261,	// (0x000647b5) popup_note_window_t3

0xe277,	// (0x000647cb) popup_note_window_t4_ParamLimits

0xe277,	// (0x000647cb) popup_note_window_t4

0xe29f,	// (0x000647f3) popup_note_window_t5_ParamLimits

0xe29f,	// (0x000647f3) popup_note_window_t5

0x0004,

0xf55a,	// (0x00065aae) popup_note_window_t_ParamLimits

0xf55a,	// (0x00065aae) popup_note_window_t

0xe2c3,	// (0x00064817) bg_popup_window_pane_cp6_ParamLimits

0xe2c3,	// (0x00064817) bg_popup_window_pane_cp6

0x97f6,	// (0x0005fd4a) popup_note_image_window_g1_ParamLimits

0x97f6,	// (0x0005fd4a) popup_note_image_window_g1

0x9802,	// (0x0005fd56) popup_note_image_window_g2_ParamLimits

0x9802,	// (0x0005fd56) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00065d84) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00065d84) popup_note_image_window_g

0x981b,	// (0x0005fd6f) popup_note_image_window_t1_ParamLimits

0x981b,	// (0x0005fd6f) popup_note_image_window_t1

0x9834,	// (0x0005fd88) popup_note_image_window_t2_ParamLimits

0x9834,	// (0x0005fd88) popup_note_image_window_t2

0x984d,	// (0x0005fda1) popup_note_image_window_t3_ParamLimits

0x984d,	// (0x0005fda1) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00065d89) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00065d89) popup_note_image_window_t

0x96bf,	// (0x0005fc13) bg_popup_window_pane_cp7_ParamLimits

0x96bf,	// (0x0005fc13) bg_popup_window_pane_cp7

0x96ef,	// (0x0005fc43) popup_note_wait_window_g1_ParamLimits

0x96ef,	// (0x0005fc43) popup_note_wait_window_g1

0x96fb,	// (0x0005fc4f) popup_note_wait_window_g2_ParamLimits

0x96fb,	// (0x0005fc4f) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00065d72) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00065d72) popup_note_wait_window_g

0x9713,	// (0x0005fc67) popup_note_wait_window_t1_ParamLimits

0x9713,	// (0x0005fc67) popup_note_wait_window_t1

0x973a,	// (0x0005fc8e) popup_note_wait_window_t2_ParamLimits

0x973a,	// (0x0005fc8e) popup_note_wait_window_t2

0x9757,	// (0x0005fcab) popup_note_wait_window_t3_ParamLimits

0x9757,	// (0x0005fcab) popup_note_wait_window_t3

0x976a,	// (0x0005fcbe) popup_note_wait_window_t4_ParamLimits

0x976a,	// (0x0005fcbe) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00065d79) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00065d79) popup_note_wait_window_t

0x978f,	// (0x0005fce3) wait_bar_pane_ParamLimits

0x978f,	// (0x0005fce3) wait_bar_pane

0xe095,	// (0x000645e9) wait_anim_pane

0xe095,	// (0x000645e9) wait_border_pane

0xe08b,	// (0x000645df) wait_anim_pane_g1

0xe08b,	// (0x000645df) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00065c2d) wait_anim_pane_g

0x966b,	// (0x0005fbbf) wait_border_pane_g1

0x9676,	// (0x0005fbca) wait_border_pane_g2

0x967f,	// (0x0005fbd3) wait_border_pane_g3

0x0002,

0xf817,	// (0x00065d6b) wait_border_pane_g

0x94d6,	// (0x0005fa2a) bg_popup_window_pane_cp16_ParamLimits

0x94d6,	// (0x0005fa2a) bg_popup_window_pane_cp16

0x95d6,	// (0x0005fb2a) indicator_popup_pane_cp4_ParamLimits

0x95d6,	// (0x0005fb2a) indicator_popup_pane_cp4

0x95ea,	// (0x0005fb3e) popup_query_data_window_t1_ParamLimits

0x95ea,	// (0x0005fb3e) popup_query_data_window_t1

0x95fc,	// (0x0005fb50) popup_query_data_window_t2_ParamLimits

0x95fc,	// (0x0005fb50) popup_query_data_window_t2

0x9615,	// (0x0005fb69) popup_query_data_window_t3_ParamLimits

0x9615,	// (0x0005fb69) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00065d64) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00065d64) popup_query_data_window_t

0x962f,	// (0x0005fb83) query_popup_data_pane_ParamLimits

0x962f,	// (0x0005fb83) query_popup_data_pane

0x9643,	// (0x0005fb97) query_popup_data_pane_cp1_ParamLimits

0x9643,	// (0x0005fb97) query_popup_data_pane_cp1

0x94d6,	// (0x0005fa2a) bg_popup_window_pane_cp10_ParamLimits

0x94d6,	// (0x0005fa2a) bg_popup_window_pane_cp10

0x9508,	// (0x0005fa5c) indicator_popup_pane_ParamLimits

0x9508,	// (0x0005fa5c) indicator_popup_pane

0x952a,	// (0x0005fa7e) popup_query_code_window_t1_ParamLimits

0x952a,	// (0x0005fa7e) popup_query_code_window_t1

0x9544,	// (0x0005fa98) popup_query_code_window_t2_ParamLimits

0x9544,	// (0x0005fa98) popup_query_code_window_t2

0x958d,	// (0x0005fae1) popup_query_code_window_t3_ParamLimits

0x958d,	// (0x0005fae1) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00065d5d) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00065d5d) popup_query_code_window_t

0x95bc,	// (0x0005fb10) query_popup_pane_ParamLimits

0x95bc,	// (0x0005fb10) query_popup_pane

0xe2c3,	// (0x00064817) bg_popup_window_pane_cp15_ParamLimits

0xe2c3,	// (0x00064817) bg_popup_window_pane_cp15

0x584a,	// (0x0005bd9e) indicator_popup_pane_cp1_ParamLimits

0x584a,	// (0x0005bd9e) indicator_popup_pane_cp1

0x585d,	// (0x0005bdb1) indicator_popup_pane_cp2_ParamLimits

0x585d,	// (0x0005bdb1) indicator_popup_pane_cp2

0x5870,	// (0x0005bdc4) popup_query_data_code_window_g1_ParamLimits

0x5870,	// (0x0005bdc4) popup_query_data_code_window_g1

0xe2e1,	// (0x00064835) popup_query_data_code_window_t1_ParamLimits

0xe2e1,	// (0x00064835) popup_query_data_code_window_t1

0xe2f3,	// (0x00064847) popup_query_data_code_window_t2_ParamLimits

0xe2f3,	// (0x00064847) popup_query_data_code_window_t2

0x5883,	// (0x0005bdd7) popup_query_data_code_window_t3_ParamLimits

0x5883,	// (0x0005bdd7) popup_query_data_code_window_t3

0x5899,	// (0x0005bded) popup_query_data_code_window_t4_ParamLimits

0x5899,	// (0x0005bded) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00065ab9) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00065ab9) popup_query_data_code_window_t

0x76ae,	// (0x0005dc02) list_single_midp_graphic_pane_g3

0x58b1,	// (0x0005be05) query_popup_data_pane_cp2_ParamLimits

0x58c4,	// (0x0005be18) query_popup_pane_cp2_ParamLimits

0x58c4,	// (0x0005be18) query_popup_pane_cp2

0xe095,	// (0x000645e9) bg_popup_window_pane_cp11

0x94ba,	// (0x0005fa0e) heading_pane_cp5

0x94c2,	// (0x0005fa16) listscroll_popup_info_pane

0xe095,	// (0x000645e9) input_focus_pane_cp3

0xe305,	// (0x00064859) query_popup_pane_t1

0xe313,	// (0x00064867) list_popup_info_pane_ParamLimits

0xe313,	// (0x00064867) list_popup_info_pane

0xe322,	// (0x00064876) listscroll_popup_info_pane_g1

0xe32a,	// (0x0006487e) scroll_pane_cp7

0x58d7,	// (0x0005be2b) popup_info_list_pane_t1_ParamLimits

0x58d7,	// (0x0005be2b) popup_info_list_pane_t1

0x58f1,	// (0x0005be45) popup_info_list_pane_t2_ParamLimits

0x58f1,	// (0x0005be45) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00065ac2) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00065ac2) popup_info_list_pane_t

0xe095,	// (0x000645e9) bg_popup_window_pane_cp12

0xa877,	// (0x00060dcb) find_popup_pane

0xe0e3,	// (0x00064637) bg_popup_window_pane_cp3

0xe334,	// (0x00064888) heading_pane_cp3

0xe343,	// (0x00064897) listscroll_popup_graphic_pane

0xe095,	// (0x000645e9) bg_popup_window_pane_cp4

0x595b,	// (0x0005beaf) heading_pane_cp4

0xefee,	// (0x00065542) listscroll_popup_colour_pane

0x5965,	// (0x0005beb9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5965,	// (0x0005beb9) cell_large_graphic_colour_none_popup_pane

0x5979,	// (0x0005becd) grid_large_graphic_colour_popup_pane_ParamLimits

0x5979,	// (0x0005becd) grid_large_graphic_colour_popup_pane

0x599d,	// (0x0005bef1) listscroll_popup_colour_pane_g1_ParamLimits

0x599d,	// (0x0005bef1) listscroll_popup_colour_pane_g1

0x59b4,	// (0x0005bf08) listscroll_popup_colour_pane_g2_ParamLimits

0x59b4,	// (0x0005bf08) listscroll_popup_colour_pane_g2

0x59cb,	// (0x0005bf1f) listscroll_popup_colour_pane_g3_ParamLimits

0x59cb,	// (0x0005bf1f) listscroll_popup_colour_pane_g3

0x59db,	// (0x0005bf2f) listscroll_popup_colour_pane_g4_ParamLimits

0x59db,	// (0x0005bf2f) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00065ac7) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00065ac7) listscroll_popup_colour_pane_g

0xeff6,	// (0x0006554a) scroll_pane_cp6_ParamLimits

0xeff6,	// (0x0006554a) scroll_pane_cp6

0x59eb,	// (0x0005bf3f) cell_large_graphic_colour_popup_pane_ParamLimits

0x59eb,	// (0x0005bf3f) cell_large_graphic_colour_popup_pane

0x5a0a,	// (0x0005bf5e) cell_large_graphic_colour_none_popup_pane_t1

0xe095,	// (0x000645e9) grid_highlight_pane_cp5

0xf008,	// (0x0006555c) cell_large_graphic_colour_popup_pane_g1

0xf010,	// (0x00065564) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00065ad0) cell_large_graphic_colour_popup_pane_g

0xf018,	// (0x0006556c) cell_large_graphic_colour_popup_pane_g2_copy1

0xf021,	// (0x00065575) grid_highlight_pane_cp4

0xf029,	// (0x0006557d) bg_popup_window_pane_cp8_ParamLimits

0xf029,	// (0x0006557d) bg_popup_window_pane_cp8

0x5a19,	// (0x0005bf6d) popup_snote_single_text_window_g1_ParamLimits

0x5a19,	// (0x0005bf6d) popup_snote_single_text_window_g1

0x5a2b,	// (0x0005bf7f) popup_snote_single_text_window_t1_ParamLimits

0x5a2b,	// (0x0005bf7f) popup_snote_single_text_window_t1

0x5a3e,	// (0x0005bf92) popup_snote_single_text_window_t2_ParamLimits

0x5a3e,	// (0x0005bf92) popup_snote_single_text_window_t2

0x5a51,	// (0x0005bfa5) popup_snote_single_text_window_t3_ParamLimits

0x5a51,	// (0x0005bfa5) popup_snote_single_text_window_t3

0x5a8a,	// (0x0005bfde) popup_snote_single_text_window_t4_ParamLimits

0x5a8a,	// (0x0005bfde) popup_snote_single_text_window_t4

0x5abe,	// (0x0005c012) popup_snote_single_text_window_t5_ParamLimits

0x5abe,	// (0x0005c012) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00065ad5) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00065ad5) popup_snote_single_text_window_t

0xf044,	// (0x00065598) bg_popup_window_pane_cp9_ParamLimits

0xf044,	// (0x00065598) bg_popup_window_pane_cp9

0x5a19,	// (0x0005bf6d) popup_snote_single_graphic_window_g1_ParamLimits

0x5a19,	// (0x0005bf6d) popup_snote_single_graphic_window_g1

0xf052,	// (0x000655a6) popup_snote_single_graphic_window_g2_ParamLimits

0xf052,	// (0x000655a6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00065ae0) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00065ae0) popup_snote_single_graphic_window_g

0xf05e,	// (0x000655b2) popup_snote_single_graphic_window_t1_ParamLimits

0xf05e,	// (0x000655b2) popup_snote_single_graphic_window_t1

0xf071,	// (0x000655c5) popup_snote_single_graphic_window_t2_ParamLimits

0xf071,	// (0x000655c5) popup_snote_single_graphic_window_t2

0x5aed,	// (0x0005c041) popup_snote_single_graphic_window_t3_ParamLimits

0x5aed,	// (0x0005c041) popup_snote_single_graphic_window_t3

0x5b26,	// (0x0005c07a) popup_snote_single_graphic_window_t4_ParamLimits

0x5b26,	// (0x0005c07a) popup_snote_single_graphic_window_t4

0x5b5a,	// (0x0005c0ae) popup_snote_single_graphic_window_t5_ParamLimits

0x5b5a,	// (0x0005c0ae) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00065ae5) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00065ae5) popup_snote_single_graphic_window_t

0xa7b9,	// (0x00060d0d) grid_graphic_popup_pane_ParamLimits

0xa7b9,	// (0x00060d0d) grid_graphic_popup_pane

0xa7e3,	// (0x00060d37) listscroll_popup_graphic_pane_g1_ParamLimits

0xa7e3,	// (0x00060d37) listscroll_popup_graphic_pane_g1

0xa7f7,	// (0x00060d4b) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7f7,	// (0x00060d4b) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00065eda) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00065eda) listscroll_popup_graphic_pane_g

0xa80b,	// (0x00060d5f) scroll_pane_cp5

0xa74f,	// (0x00060ca3) cell_graphic_popup_pane_ParamLimits

0xa74f,	// (0x00060ca3) cell_graphic_popup_pane

0xa730,	// (0x00060c84) cell_graphic_popup_pane_g1

0xa738,	// (0x00060c8c) cell_graphic_popup_pane_g2

0xf018,	// (0x0006556c) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00065ed3) cell_graphic_popup_pane_g

0xa741,	// (0x00060c95) cell_graphic_popup_pane_t2

0xf021,	// (0x00065575) grid_highlight_pane_cp3

0xf096,	// (0x000655ea) list_gen_pane_ParamLimits

0xf096,	// (0x000655ea) list_gen_pane

0xf0be,	// (0x00065612) scroll_pane

0xa688,	// (0x00060bdc) bg_list_pane_g1_ParamLimits

0xa688,	// (0x00060bdc) bg_list_pane_g1

0xa6a5,	// (0x00060bf9) bg_list_pane_g2_ParamLimits

0xa6a5,	// (0x00060bf9) bg_list_pane_g2

0xa6ba,	// (0x00060c0e) bg_list_pane_g3_ParamLimits

0xa6ba,	// (0x00060c0e) bg_list_pane_g3

0xa6ce,	// (0x00060c22) bg_list_pane_g4_ParamLimits

0xa6ce,	// (0x00060c22) bg_list_pane_g4

0xa6e2,	// (0x00060c36) bg_list_pane_g5_ParamLimits

0xa6e2,	// (0x00060c36) bg_list_pane_g5

0x0004,

0xf974,	// (0x00065ec8) bg_list_pane_g_ParamLimits

0xf974,	// (0x00065ec8) bg_list_pane_g

0xa5ca,	// (0x00060b1e) list_double2_graphic_large_graphic_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double2_graphic_large_graphic_pane

0xa5ca,	// (0x00060b1e) list_double2_graphic_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double2_graphic_pane

0xa5ca,	// (0x00060b1e) list_double2_large_graphic_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double2_large_graphic_pane

0x7a55,	// (0x0005dfa9) list_double2_pane_ParamLimits

0x7a55,	// (0x0005dfa9) list_double2_pane

0xa5ca,	// (0x00060b1e) list_double_graphic_heading_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double_graphic_heading_pane

0xa5ca,	// (0x00060b1e) list_double_graphic_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double_graphic_pane

0xa5ca,	// (0x00060b1e) list_double_heading_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double_heading_pane

0xa5ca,	// (0x00060b1e) list_double_large_graphic_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double_large_graphic_pane

0xa5ca,	// (0x00060b1e) list_double_number_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double_number_pane

0xa5ca,	// (0x00060b1e) list_double_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double_pane

0xa5ca,	// (0x00060b1e) list_double_time_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_double_time_pane

0xa5ca,	// (0x00060b1e) list_setting_number_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_setting_number_pane

0xa5ca,	// (0x00060b1e) list_setting_pane_ParamLimits

0xa5ca,	// (0x00060b1e) list_setting_pane

0xa648,	// (0x00060b9c) list_single_2graphic_pane_ParamLimits

0xa648,	// (0x00060b9c) list_single_2graphic_pane

0xa648,	// (0x00060b9c) list_single_graphic_heading_pane_ParamLimits

0xa648,	// (0x00060b9c) list_single_graphic_heading_pane

0xa648,	// (0x00060b9c) list_single_graphic_pane_ParamLimits

0xa648,	// (0x00060b9c) list_single_graphic_pane

0xa648,	// (0x00060b9c) list_single_heading_pane_ParamLimits

0xa648,	// (0x00060b9c) list_single_heading_pane

0x7aa9,	// (0x0005dffd) list_single_large_graphic_pane_ParamLimits

0x7aa9,	// (0x0005dffd) list_single_large_graphic_pane

0xa648,	// (0x00060b9c) list_single_number_heading_pane_ParamLimits

0xa648,	// (0x00060b9c) list_single_number_heading_pane

0xa648,	// (0x00060b9c) list_single_number_pane_ParamLimits

0xa648,	// (0x00060b9c) list_single_number_pane

0xa648,	// (0x00060b9c) list_single_pane_ParamLimits

0xa648,	// (0x00060b9c) list_single_pane

0xe095,	// (0x000645e9) list_highlight_pane_cp1

0x5b9f,	// (0x0005c0f3) list_single_pane_g1_ParamLimits

0x5b9f,	// (0x0005c0f3) list_single_pane_g1

0x5bab,	// (0x0005c0ff) list_single_pane_g2_ParamLimits

0x5bab,	// (0x0005c0ff) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00065b01) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00065b01) list_single_pane_g

0x7a3f,	// (0x0005df93) list_single_pane_t1_ParamLimits

0x7a3f,	// (0x0005df93) list_single_pane_t1

0x5b9f,	// (0x0005c0f3) list_single_number_pane_g1_ParamLimits

0x5b9f,	// (0x0005c0f3) list_single_number_pane_g1

0x5bab,	// (0x0005c0ff) list_single_number_pane_g2_ParamLimits

0x5bab,	// (0x0005c0ff) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00065b01) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00065b01) list_single_number_pane_g

0x5bb7,	// (0x0005c10b) list_single_number_pane_t1_ParamLimits

0x5bb7,	// (0x0005c10b) list_single_number_pane_t1

0x7985,	// (0x0005ded9) list_single_number_pane_t2_ParamLimits

0x7985,	// (0x0005ded9) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00065e89) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00065e89) list_single_number_pane_t

0x5b93,	// (0x0005c0e7) list_single_graphic_pane_g1_ParamLimits

0x5b93,	// (0x0005c0e7) list_single_graphic_pane_g1

0x5b9f,	// (0x0005c0f3) list_single_graphic_pane_g2_ParamLimits

0x5b9f,	// (0x0005c0f3) list_single_graphic_pane_g2

0x5bab,	// (0x0005c0ff) list_single_graphic_pane_g3_ParamLimits

0x5bab,	// (0x0005c0ff) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00065af0) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00065af0) list_single_graphic_pane_g

0x5bb7,	// (0x0005c10b) list_single_graphic_pane_t1_ParamLimits

0x5bb7,	// (0x0005c10b) list_single_graphic_pane_t1

0x5bcd,	// (0x0005c121) list_single_heading_pane_g1_ParamLimits

0x5bcd,	// (0x0005c121) list_single_heading_pane_g1

0x5bab,	// (0x0005c0ff) list_single_heading_pane_g2_ParamLimits

0x5bab,	// (0x0005c0ff) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00065af7) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00065af7) list_single_heading_pane_g

0x5be0,	// (0x0005c134) list_single_heading_pane_t1_ParamLimits

0x5be0,	// (0x0005c134) list_single_heading_pane_t1

0x5bf6,	// (0x0005c14a) list_single_heading_pane_t2_ParamLimits

0x5bf6,	// (0x0005c14a) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00065afc) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00065afc) list_single_heading_pane_t

0x5b9f,	// (0x0005c0f3) list_single_number_heading_pane_g1_ParamLimits

0x5b9f,	// (0x0005c0f3) list_single_number_heading_pane_g1

0x5bab,	// (0x0005c0ff) list_single_number_heading_pane_g2_ParamLimits

0x5bab,	// (0x0005c0ff) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00065b01) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00065b01) list_single_number_heading_pane_g

0x5c08,	// (0x0005c15c) list_single_number_heading_pane_t1_ParamLimits

0x5c08,	// (0x0005c15c) list_single_number_heading_pane_t1

0x5c1e,	// (0x0005c172) list_single_number_heading_pane_t2_ParamLimits

0x5c1e,	// (0x0005c172) list_single_number_heading_pane_t2

0x5c30,	// (0x0005c184) list_single_number_heading_pane_t3_ParamLimits

0x5c30,	// (0x0005c184) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00065b06) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00065b06) list_single_number_heading_pane_t

0x5c42,	// (0x0005c196) list_single_graphic_heading_pane_g1_ParamLimits

0x5c42,	// (0x0005c196) list_single_graphic_heading_pane_g1

0x5c4e,	// (0x0005c1a2) list_single_graphic_heading_pane_g4_ParamLimits

0x5c4e,	// (0x0005c1a2) list_single_graphic_heading_pane_g4

0x5bab,	// (0x0005c0ff) list_single_graphic_heading_pane_g5_ParamLimits

0x5bab,	// (0x0005c0ff) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00065b0d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00065b0d) list_single_graphic_heading_pane_g

0x5c08,	// (0x0005c15c) list_single_graphic_heading_pane_t1_ParamLimits

0x5c08,	// (0x0005c15c) list_single_graphic_heading_pane_t1

0x5c5f,	// (0x0005c1b3) list_single_graphic_heading_pane_t2_ParamLimits

0x5c5f,	// (0x0005c1b3) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00065b14) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00065b14) list_single_graphic_heading_pane_t

0x5c71,	// (0x0005c1c5) list_single_large_graphic_pane_g1_ParamLimits

0x5c71,	// (0x0005c1c5) list_single_large_graphic_pane_g1

0x42f0,	// (0x0005a844) list_single_large_graphic_pane_g2_ParamLimits

0x42f0,	// (0x0005a844) list_single_large_graphic_pane_g2

0x42fc,	// (0x0005a850) list_single_large_graphic_pane_g3_ParamLimits

0x42fc,	// (0x0005a850) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00065b19) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00065b19) list_single_large_graphic_pane_g

0x9676,	// (0x0005fbca) wait_border_pane_g2_copy1

0x5c7d,	// (0x0005c1d1) list_single_large_graphic_pane_g4_cp2

0x5c85,	// (0x0005c1d9) list_single_large_graphic_pane_t1_ParamLimits

0x5c85,	// (0x0005c1d9) list_single_large_graphic_pane_t1

0x249f,	// (0x000589f3) list_double_pane_g1_ParamLimits

0x249f,	// (0x000589f3) list_double_pane_g1

0x431d,	// (0x0005a871) list_double_pane_g2_ParamLimits

0x431d,	// (0x0005a871) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00065b20) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00065b20) list_double_pane_g

0x5c9b,	// (0x0005c1ef) list_double_pane_t1_ParamLimits

0x5c9b,	// (0x0005c1ef) list_double_pane_t1

0x5cb1,	// (0x0005c205) list_double_pane_t2_ParamLimits

0x5cb1,	// (0x0005c205) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00065b25) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00065b25) list_double_pane_t

0x5cc3,	// (0x0005c217) list_double2_pane_g1_ParamLimits

0x5cc3,	// (0x0005c217) list_double2_pane_g1

0x3a7b,	// (0x00059fcf) list_double2_pane_g2_ParamLimits

0x3a7b,	// (0x00059fcf) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00065b2a) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00065b2a) list_double2_pane_g

0x5cd4,	// (0x0005c228) list_double2_pane_t1_ParamLimits

0x5cd4,	// (0x0005c228) list_double2_pane_t1

0x5cea,	// (0x0005c23e) list_double2_pane_t2_ParamLimits

0x5cea,	// (0x0005c23e) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00065b2f) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00065b2f) list_double2_pane_t

0x249f,	// (0x000589f3) list_double_number_pane_g1_ParamLimits

0x249f,	// (0x000589f3) list_double_number_pane_g1

0x431d,	// (0x0005a871) list_double_number_pane_g2_ParamLimits

0x431d,	// (0x0005a871) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00065b20) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00065b20) list_double_number_pane_g

0x5cfc,	// (0x0005c250) list_double_number_pane_t1_ParamLimits

0x5cfc,	// (0x0005c250) list_double_number_pane_t1

0x5d0e,	// (0x0005c262) list_double_number_pane_t2_ParamLimits

0x5d0e,	// (0x0005c262) list_double_number_pane_t2

0x5d24,	// (0x0005c278) list_double_number_pane_t3_ParamLimits

0x5d24,	// (0x0005c278) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00065b34) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00065b34) list_double_number_pane_t

0x5d36,	// (0x0005c28a) list_double_graphic_pane_g1_ParamLimits

0x5d36,	// (0x0005c28a) list_double_graphic_pane_g1

0x5d42,	// (0x0005c296) list_double_graphic_pane_g2_ParamLimits

0x5d42,	// (0x0005c296) list_double_graphic_pane_g2

0x5d51,	// (0x0005c2a5) list_double_graphic_pane_g3_ParamLimits

0x5d51,	// (0x0005c2a5) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00065b3b) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00065b3b) list_double_graphic_pane_g

0x5d0e,	// (0x0005c262) list_double_graphic_pane_t1_ParamLimits

0x5d0e,	// (0x0005c262) list_double_graphic_pane_t1

0x5d24,	// (0x0005c278) list_double_graphic_pane_t2_ParamLimits

0x5d24,	// (0x0005c278) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00065b44) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00065b44) list_double_graphic_pane_t

0x5d36,	// (0x0005c28a) list_double2_graphic_pane_g1_ParamLimits

0x5d36,	// (0x0005c28a) list_double2_graphic_pane_g1

0x249f,	// (0x000589f3) list_double2_graphic_pane_g2_ParamLimits

0x249f,	// (0x000589f3) list_double2_graphic_pane_g2

0x431d,	// (0x0005a871) list_double2_graphic_pane_g3_ParamLimits

0x431d,	// (0x0005a871) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00065b49) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00065b49) list_double2_graphic_pane_g

0x5d0e,	// (0x0005c262) list_double2_graphic_pane_t1_ParamLimits

0x5d0e,	// (0x0005c262) list_double2_graphic_pane_t1

0x5d69,	// (0x0005c2bd) list_double2_graphic_pane_t2_ParamLimits

0x5d69,	// (0x0005c2bd) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00065b50) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00065b50) list_double2_graphic_pane_t

0x5d7b,	// (0x0005c2cf) list_double_large_graphic_pane_g1_ParamLimits

0x5d7b,	// (0x0005c2cf) list_double_large_graphic_pane_g1

0x5d9a,	// (0x0005c2ee) list_double_large_graphic_pane_g2_ParamLimits

0x5d9a,	// (0x0005c2ee) list_double_large_graphic_pane_g2

0x431d,	// (0x0005a871) list_double_large_graphic_pane_g3_ParamLimits

0x431d,	// (0x0005a871) list_double_large_graphic_pane_g3

0x5db0,	// (0x0005c304) list_double_large_graphic_pane_g4_ParamLimits

0x5db0,	// (0x0005c304) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00065b55) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00065b55) list_double_large_graphic_pane_g

0x5dc2,	// (0x0005c316) list_double_large_graphic_pane_t1_ParamLimits

0x5dc2,	// (0x0005c316) list_double_large_graphic_pane_t1

0x5ddb,	// (0x0005c32f) list_double_large_graphic_pane_t2_ParamLimits

0x5ddb,	// (0x0005c32f) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00065b60) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00065b60) list_double_large_graphic_pane_t

0x5ded,	// (0x0005c341) list_double2_large_graphic_pane_g1_ParamLimits

0x5ded,	// (0x0005c341) list_double2_large_graphic_pane_g1

0x5df9,	// (0x0005c34d) list_double2_large_graphic_pane_g2_ParamLimits

0x5df9,	// (0x0005c34d) list_double2_large_graphic_pane_g2

0x431d,	// (0x0005a871) list_double2_large_graphic_pane_g3_ParamLimits

0x431d,	// (0x0005a871) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00065b65) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00065b65) list_double2_large_graphic_pane_g

0x5d0e,	// (0x0005c262) list_double2_large_graphic_pane_t1_ParamLimits

0x5d0e,	// (0x0005c262) list_double2_large_graphic_pane_t1

0x5d69,	// (0x0005c2bd) list_double2_large_graphic_pane_t2_ParamLimits

0x5d69,	// (0x0005c2bd) list_double2_large_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00065b50) list_double2_large_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00065b50) list_double2_large_graphic_pane_t

0x5e0a,	// (0x0005c35e) list_double_heading_pane_g1_ParamLimits

0x5e0a,	// (0x0005c35e) list_double_heading_pane_g1

0x5e1b,	// (0x0005c36f) list_double_heading_pane_g2_ParamLimits

0x5e1b,	// (0x0005c36f) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00065b6c) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00065b6c) list_double_heading_pane_g

0x5e27,	// (0x0005c37b) list_double_heading_pane_t1_ParamLimits

0x5e27,	// (0x0005c37b) list_double_heading_pane_t1

0x5e3d,	// (0x0005c391) list_double_heading_pane_t2_ParamLimits

0x5e3d,	// (0x0005c391) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00065b71) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00065b71) list_double_heading_pane_t

0x5e4f,	// (0x0005c3a3) list_double_graphic_heading_pane_g1_ParamLimits

0x5e4f,	// (0x0005c3a3) list_double_graphic_heading_pane_g1

0x5e0a,	// (0x0005c35e) list_double_graphic_heading_pane_g2_ParamLimits

0x5e0a,	// (0x0005c35e) list_double_graphic_heading_pane_g2

0x5e1b,	// (0x0005c36f) list_double_graphic_heading_pane_g3_ParamLimits

0x5e1b,	// (0x0005c36f) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00065b76) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00065b76) list_double_graphic_heading_pane_g

0x5e27,	// (0x0005c37b) list_double_graphic_heading_pane_t1_ParamLimits

0x5e27,	// (0x0005c37b) list_double_graphic_heading_pane_t1

0x5e3d,	// (0x0005c391) list_double_graphic_heading_pane_t2_ParamLimits

0x5e3d,	// (0x0005c391) list_double_graphic_heading_pane_t2

0x0001,

0xf61d,	// (0x00065b71) list_double_graphic_heading_pane_t_ParamLimits

0xf61d,	// (0x00065b71) list_double_graphic_heading_pane_t

0x5e5b,	// (0x0005c3af) list_double_time_pane_g1_ParamLimits

0x5e5b,	// (0x0005c3af) list_double_time_pane_g1

0x5e6c,	// (0x0005c3c0) list_double_time_pane_g2_ParamLimits

0x5e6c,	// (0x0005c3c0) list_double_time_pane_g2

0x0001,

0xf629,	// (0x00065b7d) list_double_time_pane_g_ParamLimits

0xf629,	// (0x00065b7d) list_double_time_pane_g

0x5e78,	// (0x0005c3cc) list_double_time_pane_t1_ParamLimits

0x5e78,	// (0x0005c3cc) list_double_time_pane_t1

0x5e8e,	// (0x0005c3e2) list_double_time_pane_t2_ParamLimits

0x5e8e,	// (0x0005c3e2) list_double_time_pane_t2

0x5ea0,	// (0x0005c3f4) list_double_time_pane_t3_ParamLimits

0x5ea0,	// (0x0005c3f4) list_double_time_pane_t3

0x5eb2,	// (0x0005c406) list_double_time_pane_t4_ParamLimits

0x5eb2,	// (0x0005c406) list_double_time_pane_t4

0x0003,

0xf62e,	// (0x00065b82) list_double_time_pane_t_ParamLimits

0xf62e,	// (0x00065b82) list_double_time_pane_t

0x5ec4,	// (0x0005c418) list_setting_pane_g1_ParamLimits

0x5ec4,	// (0x0005c418) list_setting_pane_g1

0x5ed0,	// (0x0005c424) list_setting_pane_g2_ParamLimits

0x5ed0,	// (0x0005c424) list_setting_pane_g2

0x0001,

0xf637,	// (0x00065b8b) list_setting_pane_g_ParamLimits

0xf637,	// (0x00065b8b) list_setting_pane_g

0x5edc,	// (0x0005c430) list_setting_pane_t1_ParamLimits

0x5edc,	// (0x0005c430) list_setting_pane_t1

0x5ef6,	// (0x0005c44a) list_setting_pane_t2_ParamLimits

0x5ef6,	// (0x0005c44a) list_setting_pane_t2

0x0002,

0xf63c,	// (0x00065b90) list_setting_pane_t_ParamLimits

0xf63c,	// (0x00065b90) list_setting_pane_t

0x5f33,	// (0x0005c487) set_value_pane_cp_ParamLimits

0x5f33,	// (0x0005c487) set_value_pane_cp

0x5f3f,	// (0x0005c493) list_setting_number_pane_g1_ParamLimits

0x5f3f,	// (0x0005c493) list_setting_number_pane_g1

0x5f4b,	// (0x0005c49f) list_setting_number_pane_g2_ParamLimits

0x5f4b,	// (0x0005c49f) list_setting_number_pane_g2

0x0001,

0xf643,	// (0x00065b97) list_setting_number_pane_g_ParamLimits

0xf643,	// (0x00065b97) list_setting_number_pane_g

0x5f57,	// (0x0005c4ab) list_setting_number_pane_t1_ParamLimits

0x5f57,	// (0x0005c4ab) list_setting_number_pane_t1

0x5f70,	// (0x0005c4c4) list_setting_number_pane_t2_ParamLimits

0x5f70,	// (0x0005c4c4) list_setting_number_pane_t2

0x5f8a,	// (0x0005c4de) list_setting_number_pane_t3_ParamLimits

0x5f8a,	// (0x0005c4de) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00065b9c) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00065b9c) list_setting_number_pane_t

0x5f33,	// (0x0005c487) set_value_pane_ParamLimits

0x5f33,	// (0x0005c487) set_value_pane

0xf0f2,	// (0x00065646) bg_set_opt_pane_ParamLimits

0xf0f2,	// (0x00065646) bg_set_opt_pane

0x3a87,	// (0x00059fdb) set_value_pane_t1

0xf113,	// (0x00065667) slider_set_pane_cp3

0x5fcd,	// (0x0005c521) volume_small_pane_cp

0xf11c,	// (0x00065670) list_form_gen_pane

0xf125,	// (0x00065679) scroll_pane_cp8

0x5fd6,	// (0x0005c52a) form_field_data_pane_ParamLimits

0x5fd6,	// (0x0005c52a) form_field_data_pane

0x5ff0,	// (0x0005c544) form_field_data_wide_pane_ParamLimits

0x5ff0,	// (0x0005c544) form_field_data_wide_pane

0x6013,	// (0x0005c567) form_field_popup_pane_ParamLimits

0x6013,	// (0x0005c567) form_field_popup_pane

0x6033,	// (0x0005c587) form_field_popup_wide_pane_ParamLimits

0x6033,	// (0x0005c587) form_field_popup_wide_pane

0x3aa5,	// (0x00059ff9) form_field_slider_pane_ParamLimits

0x3aa5,	// (0x00059ff9) form_field_slider_pane

0x6050,	// (0x0005c5a4) form_field_slider_wide_pane_ParamLimits

0x6050,	// (0x0005c5a4) form_field_slider_wide_pane

0xf136,	// (0x0006568a) data_form_pane

0x606d,	// (0x0005c5c1) form_field_data_pane_t1

0xf142,	// (0x00065696) input_focus_pane

0x3ab8,	// (0x0005a00c) data_form_wide_pane

0x3ad5,	// (0x0005a029) form_field_data_wide_pane_t1

0xf036,	// (0x0006558a) input_focus_pane_cp6

0x6085,	// (0x0005c5d9) form_field_popup_pane_t1

0xf142,	// (0x00065696) input_focus_pane_cp7

0xf170,	// (0x000656c4) list_form_pane

0x3aff,	// (0x0005a053) form_field_popup_wide_pane_t1

0xf142,	// (0x00065696) input_focus_pane_cp8

0xf17c,	// (0x000656d0) list_form_wide_pane

0x60a5,	// (0x0005c5f9) form_field_slider_pane_t1_ParamLimits

0x60a5,	// (0x0005c5f9) form_field_slider_pane_t1

0x60bb,	// (0x0005c60f) form_field_slider_pane_t2_ParamLimits

0x60bb,	// (0x0005c60f) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00065bac) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00065bac) form_field_slider_pane_t

0xe20d,	// (0x00064761) input_focus_pane_cp9_ParamLimits

0xe20d,	// (0x00064761) input_focus_pane_cp9

0x60d0,	// (0x0005c624) slider_cont_pane_ParamLimits

0x60d0,	// (0x0005c624) slider_cont_pane

0xf188,	// (0x000656dc) form_field_slider_wide_pane_t1_ParamLimits

0xf188,	// (0x000656dc) form_field_slider_wide_pane_t1

0x3b14,	// (0x0005a068) form_field_slider_wide_pane_t2_ParamLimits

0x3b14,	// (0x0005a068) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00065bb1) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00065bb1) form_field_slider_wide_pane_t

0xe20d,	// (0x00064761) input_focus_pane_cp10_ParamLimits

0xe20d,	// (0x00064761) input_focus_pane_cp10

0x60e4,	// (0x0005c638) slider_cont_pane_cp1_ParamLimits

0x60e4,	// (0x0005c638) slider_cont_pane_cp1

0x60f8,	// (0x0005c64c) slider_form_pane_cp

0xf19a,	// (0x000656ee) input_focus_pane_g1

0xf1a2,	// (0x000656f6) input_focus_pane_g2

0xf1aa,	// (0x000656fe) input_focus_pane_g3

0xf1b2,	// (0x00065706) input_focus_pane_g4

0xf1ba,	// (0x0006570e) input_focus_pane_g5

0xf1c2,	// (0x00065716) input_focus_pane_g6

0xf1ca,	// (0x0006571e) input_focus_pane_g7

0xf1d2,	// (0x00065726) input_focus_pane_g8

0xf1da,	// (0x0006572e) input_focus_pane_g9

0xe08b,	// (0x000645df) input_focus_pane_g10

0x0009,

0xf662,	// (0x00065bb6) input_focus_pane_g

0x967f,	// (0x0005fbd3) wait_border_pane_g3_copy1

0x6100,	// (0x0005c654) data_form_pane_t1

0xe08b,	// (0x000645df) wait_anim_pane_g1_copy1

0x7a0f,	// (0x0005df63) data_form_wide_pane_t1

0x611b,	// (0x0005c66f) list_form_graphic_pane_cp_ParamLimits

0x611b,	// (0x0005c66f) list_form_graphic_pane_cp

0xa56e,	// (0x00060ac2) slider_form_pane_g1

0xa577,	// (0x00060acb) slider_form_pane_g2

0x0006,

0xf965,	// (0x00065eb9) slider_form_pane_g

0x611b,	// (0x0005c66f) list_form_graphic_pane_ParamLimits

0x611b,	// (0x0005c66f) list_form_graphic_pane

0x6134,	// (0x0005c688) list_form_graphic_pane_g1

0x613c,	// (0x0005c690) list_form_graphic_pane_t1_ParamLimits

0x613c,	// (0x0005c690) list_form_graphic_pane_t1

0xe0e3,	// (0x00064637) list_highlight_pane_cp5_ParamLimits

0xe0e3,	// (0x00064637) list_highlight_pane_cp5

0x6151,	// (0x0005c6a5) find_pane_g1

0xf1e2,	// (0x00065736) input_find_pane

0x615a,	// (0x0005c6ae) input_find_pane_g1_ParamLimits

0x615a,	// (0x0005c6ae) input_find_pane_g1

0x6166,	// (0x0005c6ba) input_find_pane_t1_ParamLimits

0x6166,	// (0x0005c6ba) input_find_pane_t1

0x617b,	// (0x0005c6cf) input_find_pane_t2_ParamLimits

0x617b,	// (0x0005c6cf) input_find_pane_t2

0x0001,

0xf677,	// (0x00065bcb) input_find_pane_t_ParamLimits

0xf677,	// (0x00065bcb) input_find_pane_t

0xf1eb,	// (0x0006573f) input_focus_pane_cp5_ParamLimits

0xf1eb,	// (0x0006573f) input_focus_pane_cp5

0xf1fe,	// (0x00065752) bg_popup_window_pane_cp2_ParamLimits

0xf1fe,	// (0x00065752) bg_popup_window_pane_cp2

0xf20b,	// (0x0006575f) listscroll_menu_pane_ParamLimits

0xf20b,	// (0x0006575f) listscroll_menu_pane

0x619c,	// (0x0005c6f0) popup_submenu_window_ParamLimits

0x619c,	// (0x0005c6f0) popup_submenu_window

0xf217,	// (0x0006576b) find_popup_pane_g1

0x61c4,	// (0x0005c718) input_popup_find_pane_cp

0xf21f,	// (0x00065773) input_focus_pane_cp4_ParamLimits

0xf21f,	// (0x00065773) input_focus_pane_cp4

0xf22d,	// (0x00065781) input_popup_find_pane_t1_ParamLimits

0xf22d,	// (0x00065781) input_popup_find_pane_t1

0xe095,	// (0x000645e9) bg_popup_sub_pane_cp

0xf25b,	// (0x000657af) listscroll_popup_sub_pane

0xf263,	// (0x000657b7) list_submenu_pane_ParamLimits

0xf263,	// (0x000657b7) list_submenu_pane

0xf274,	// (0x000657c8) scroll_pane_cp4

0x61dc,	// (0x0005c730) list_single_popup_submenu_pane_ParamLimits

0x61dc,	// (0x0005c730) list_single_popup_submenu_pane

0x22d1,	// (0x00058825) list_single_popup_submenu_pane_g1

0x61f0,	// (0x0005c744) list_single_popup_submenu_pane_t1_ParamLimits

0x61f0,	// (0x0005c744) list_single_popup_submenu_pane_t1

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp1_ParamLimits

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp1

0xf27c,	// (0x000657d0) tabs_2_active_pane_g1

0x6205,	// (0x0005c759) tabs_2_active_pane_t1

0xe0e3,	// (0x00064637) bg_passive_tab_pane_cp1_ParamLimits

0xe0e3,	// (0x00064637) bg_passive_tab_pane_cp1

0xf27c,	// (0x000657d0) tabs_2_passive_pane_g1

0x6205,	// (0x0005c759) tabs_2_passive_pane_t1

0x6217,	// (0x0005c76b) bg_active_tab_pane_cp4

0x6225,	// (0x0005c779) tabs_2_long_active_pane_t1

0x6238,	// (0x0005c78c) bg_passive_tab_pane_cp4

0x76b6,	// (0x0005dc0a) list_single_midp_graphic_pane_g4_ParamLimits

0x6217,	// (0x0005c76b) bg_active_tab_pane_cp5

0x6244,	// (0x0005c798) tabs_3_long_active_pane_t1

0x6238,	// (0x0005c78c) bg_passive_tab_pane_cp5

0x76b6,	// (0x0005dc0a) list_single_midp_graphic_pane_g4

0xe0e3,	// (0x00064637) bg_popup_window_pane_cp13_ParamLimits

0xe0e3,	// (0x00064637) bg_popup_window_pane_cp13

0xf284,	// (0x000657d8) listscroll_popup_fast_pane_ParamLimits

0xf284,	// (0x000657d8) listscroll_popup_fast_pane

0xf290,	// (0x000657e4) grid_popup_fast_pane_ParamLimits

0xf290,	// (0x000657e4) grid_popup_fast_pane

0xf2a2,	// (0x000657f6) scroll_pane_cp9_ParamLimits

0xf2a2,	// (0x000657f6) scroll_pane_cp9

0xc07e,	// (0x000625d2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc07e,	// (0x000625d2) list_single_graphic_hl_pane_t1_cp2

0xf2b5,	// (0x00065809) input_focus_pane_cp20_ParamLimits

0xf2b5,	// (0x00065809) input_focus_pane_cp20

0xf2c3,	// (0x00065817) query_popup_data_pane_t1_ParamLimits

0xf2c3,	// (0x00065817) query_popup_data_pane_t1

0xf2d6,	// (0x0006582a) query_popup_data_pane_t2_ParamLimits

0xf2d6,	// (0x0006582a) query_popup_data_pane_t2

0xf31c,	// (0x00065870) query_popup_data_pane_t3_ParamLimits

0xf31c,	// (0x00065870) query_popup_data_pane_t3

0xf35d,	// (0x000658b1) query_popup_data_pane_t4_ParamLimits

0xf35d,	// (0x000658b1) query_popup_data_pane_t4

0xf399,	// (0x000658ed) query_popup_data_pane_t5_ParamLimits

0xf399,	// (0x000658ed) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00065bd0) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00065bd0) query_popup_data_pane_t

0xf19a,	// (0x000656ee) bg_set_opt_pane_g1

0xf1a2,	// (0x000656f6) bg_set_opt_pane_g2

0xf1aa,	// (0x000656fe) bg_set_opt_pane_g3

0xf1b2,	// (0x00065706) bg_set_opt_pane_g4

0xf1ba,	// (0x0006570e) bg_set_opt_pane_g5

0xf1c2,	// (0x00065716) bg_set_opt_pane_g6

0xf1ca,	// (0x0006571e) bg_set_opt_pane_g7

0xf1d2,	// (0x00065726) bg_set_opt_pane_g8

0xf1da,	// (0x0006572e) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00065bdb) bg_set_opt_pane_g

0x67cf,	// (0x0005cd23) control_top_pane_stacon_ParamLimits

0x67cf,	// (0x0005cd23) control_top_pane_stacon

0x6822,	// (0x0005cd76) signal_pane_stacon_ParamLimits

0x6822,	// (0x0005cd76) signal_pane_stacon

0x13f5,	// (0x00057949) stacon_top_pane_g1_ParamLimits

0x13f5,	// (0x00057949) stacon_top_pane_g1

0x6847,	// (0x0005cd9b) title_pane_stacon_ParamLimits

0x6847,	// (0x0005cd9b) title_pane_stacon

0x6871,	// (0x0005cdc5) uni_indicator_pane_stacon_ParamLimits

0x6871,	// (0x0005cdc5) uni_indicator_pane_stacon

0x6886,	// (0x0005cdda) battery_pane_stacon_ParamLimits

0x6886,	// (0x0005cdda) battery_pane_stacon

0x68ca,	// (0x0005ce1e) control_bottom_pane_stacon_ParamLimits

0x68ca,	// (0x0005ce1e) control_bottom_pane_stacon

0x68ed,	// (0x0005ce41) navi_pane_stacon_ParamLimits

0x68ed,	// (0x0005ce41) navi_pane_stacon

0x1417,	// (0x0005796b) stacon_bottom_pane_g1_ParamLimits

0x1417,	// (0x0005796b) stacon_bottom_pane_g1

0x6270,	// (0x0005c7c4) aid_levels_signal_lsc_ParamLimits

0x6270,	// (0x0005c7c4) aid_levels_signal_lsc

0x6286,	// (0x0005c7da) signal_pane_stacon_g1_ParamLimits

0x6286,	// (0x0005c7da) signal_pane_stacon_g1

0x629a,	// (0x0005c7ee) signal_pane_stacon_g2_ParamLimits

0x629a,	// (0x0005c7ee) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00065bee) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00065bee) signal_pane_stacon_g

0x62cf,	// (0x0005c823) title_pane_stacon_t1_ParamLimits

0x62cf,	// (0x0005c823) title_pane_stacon_t1

0xf3dd,	// (0x00065931) uni_indicator_pane_stacon_g1

0xf3e7,	// (0x0006593b) uni_indicator_pane_stacon_g2

0xf3f1,	// (0x00065945) uni_indicator_pane_stacon_g3

0xf3fb,	// (0x0006594f) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00065bfa) uni_indicator_pane_stacon_g

0x62f4,	// (0x0005c848) control_top_pane_stacon_g1

0x62fc,	// (0x0005c850) control_top_pane_stacon_t1_ParamLimits

0x62fc,	// (0x0005c850) control_top_pane_stacon_t1

0x6333,	// (0x0005c887) aid_levels_battery_lsc_ParamLimits

0x6333,	// (0x0005c887) aid_levels_battery_lsc

0x634a,	// (0x0005c89e) battery_pane_stacon_g1_ParamLimits

0x634a,	// (0x0005c89e) battery_pane_stacon_g1

0x635d,	// (0x0005c8b1) battery_pane_stacon_g2_ParamLimits

0x635d,	// (0x0005c8b1) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00065c03) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00065c03) battery_pane_stacon_g

0x639b,	// (0x0005c8ef) navi_icon_pane_stacon

0x63af,	// (0x0005c903) navi_navi_pane_stacon

0x639b,	// (0x0005c8ef) navi_text_pane_stacon

0x62f4,	// (0x0005c848) control_bottom_pane_stacon_g1

0x63c3,	// (0x0005c917) control_bottom_pane_stacon_t1_ParamLimits

0x63c3,	// (0x0005c917) control_bottom_pane_stacon_t1

0x63fa,	// (0x0005c94e) grid_app_pane_ParamLimits

0x63fa,	// (0x0005c94e) grid_app_pane

0x641c,	// (0x0005c970) scroll_pane_cp15_ParamLimits

0x641c,	// (0x0005c970) scroll_pane_cp15

0x642f,	// (0x0005c983) cell_app_pane_ParamLimits

0x642f,	// (0x0005c983) cell_app_pane

0x6457,	// (0x0005c9ab) cell_app_pane_g1_ParamLimits

0x6457,	// (0x0005c9ab) cell_app_pane_g1

0xf41f,	// (0x00065973) cell_app_pane_g2_ParamLimits

0xf41f,	// (0x00065973) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00065c08) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00065c08) cell_app_pane_g

0x647b,	// (0x0005c9cf) cell_app_pane_t1_ParamLimits

0x647b,	// (0x0005c9cf) cell_app_pane_t1

0xf42b,	// (0x0006597f) grid_highlight_pane_ParamLimits

0xf42b,	// (0x0006597f) grid_highlight_pane

0xf19a,	// (0x000656ee) cell_highlight_pane_g1

0xf1a2,	// (0x000656f6) cell_highlight_pane_g2

0xf1aa,	// (0x000656fe) cell_highlight_pane_g3

0xf1b2,	// (0x00065706) cell_highlight_pane_g4

0xf1ba,	// (0x0006570e) cell_highlight_pane_g5

0xf1c2,	// (0x00065716) cell_highlight_pane_g6

0xf1ca,	// (0x0006571e) cell_highlight_pane_g7

0xf1d2,	// (0x00065726) cell_highlight_pane_g8

0xf1da,	// (0x0006572e) cell_highlight_pane_g9

0xe08b,	// (0x000645df) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00065bb6) cell_highlight_pane_g

0xf43c,	// (0x00065990) bg_scroll_pane

0x64a5,	// (0x0005c9f9) scroll_handle_pane

0xf483,	// (0x000659d7) scroll_bg_pane_g1

0xf498,	// (0x000659ec) scroll_bg_pane_g2

0xf4b0,	// (0x00065a04) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00065c0d) scroll_bg_pane_g

0x64ce,	// (0x0005ca22) scroll_handle_focus_pane_ParamLimits

0x64ce,	// (0x0005ca22) scroll_handle_focus_pane

0xf483,	// (0x000659d7) scroll_handle_pane_g1

0xf4c5,	// (0x00065a19) scroll_handle_pane_g2

0xf4b0,	// (0x00065a04) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00065c14) scroll_handle_pane_g

0xf21f,	// (0x00065773) bg_popup_sub_pane_cp21_ParamLimits

0xf21f,	// (0x00065773) bg_popup_sub_pane_cp21

0x64db,	// (0x0005ca2f) popup_fep_japan_predictive_window_t1_ParamLimits

0x64db,	// (0x0005ca2f) popup_fep_japan_predictive_window_t1

0x64f5,	// (0x0005ca49) popup_fep_japan_predictive_window_t2_ParamLimits

0x64f5,	// (0x0005ca49) popup_fep_japan_predictive_window_t2

0x6528,	// (0x0005ca7c) popup_fep_japan_predictive_window_t3_ParamLimits

0x6528,	// (0x0005ca7c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00065c1b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00065c1b) popup_fep_japan_predictive_window_t

0xe095,	// (0x000645e9) bg_popup_sub_pane_cp23

0x2c02,	// (0x00059156) listscroll_japin_cand_pane

0xf4d9,	// (0x00065a2d) popup_fep_japan_candidate_window_t1

0xf4e7,	// (0x00065a3b) candidate_pane_ParamLimits

0xf4e7,	// (0x00065a3b) candidate_pane

0x655f,	// (0x0005cab3) scroll_pane_cp30

0xf4f9,	// (0x00065a4d) list_single_popup_jap_candidate_pane_ParamLimits

0xf4f9,	// (0x00065a4d) list_single_popup_jap_candidate_pane

0xe095,	// (0x000645e9) list_highlight_pane_cp30

0xf50e,	// (0x00065a62) list_single_popup_jap_candidate_pane_t1

0x11ed,	// (0x00057741) level_1_signal

0x11fa,	// (0x0005774e) level_2_signal

0x1207,	// (0x0005775b) level_3_signal

0x1214,	// (0x00057768) level_4_signal

0x1221,	// (0x00057775) level_5_signal

0x122e,	// (0x00057782) level_6_signal

0x123b,	// (0x0005778f) level_7_signal

0x11ed,	// (0x00057741) level_1_battery

0x11fa,	// (0x0005774e) level_2_battery

0x1207,	// (0x0005775b) level_3_battery

0x1214,	// (0x00057768) level_4_battery

0x1221,	// (0x00057775) level_5_battery

0x122e,	// (0x00057782) level_6_battery

0x123b,	// (0x0005778f) level_7_battery

0x1260,	// (0x000577b4) list_menu_pane_ParamLimits

0x1260,	// (0x000577b4) list_menu_pane

0x1276,	// (0x000577ca) scroll_pane_cp25_ParamLimits

0x1276,	// (0x000577ca) scroll_pane_cp25

0x128f,	// (0x000577e3) list_double2_graphic_pane_cp2_ParamLimits

0x128f,	// (0x000577e3) list_double2_graphic_pane_cp2

0x128f,	// (0x000577e3) list_double2_large_graphic_pane_cp2_ParamLimits

0x128f,	// (0x000577e3) list_double2_large_graphic_pane_cp2

0x128f,	// (0x000577e3) list_double2_pane_cp2_ParamLimits

0x128f,	// (0x000577e3) list_double2_pane_cp2

0x128f,	// (0x000577e3) list_double_graphic_pane_cp2_ParamLimits

0x128f,	// (0x000577e3) list_double_graphic_pane_cp2

0x128f,	// (0x000577e3) list_double_large_graphic_pane_cp2_ParamLimits

0x128f,	// (0x000577e3) list_double_large_graphic_pane_cp2

0x128f,	// (0x000577e3) list_double_number_pane_cp2_ParamLimits

0x128f,	// (0x000577e3) list_double_number_pane_cp2

0x128f,	// (0x000577e3) list_double_pane_cp2_ParamLimits

0x128f,	// (0x000577e3) list_double_pane_cp2

0x659a,	// (0x0005caee) list_single_2graphic_pane_cp2_ParamLimits

0x659a,	// (0x0005caee) list_single_2graphic_pane_cp2

0x659a,	// (0x0005caee) list_single_graphic_heading_pane_cp2_ParamLimits

0x659a,	// (0x0005caee) list_single_graphic_heading_pane_cp2

0x659a,	// (0x0005caee) list_single_graphic_pane_cp2_ParamLimits

0x659a,	// (0x0005caee) list_single_graphic_pane_cp2

0x659a,	// (0x0005caee) list_single_heading_pane_cp2_ParamLimits

0x659a,	// (0x0005caee) list_single_heading_pane_cp2

0x129f,	// (0x000577f3) list_single_large_graphic_pane_cp2_ParamLimits

0x129f,	// (0x000577f3) list_single_large_graphic_pane_cp2

0x659a,	// (0x0005caee) list_single_number_heading_pane_cp2_ParamLimits

0x659a,	// (0x0005caee) list_single_number_heading_pane_cp2

0x659a,	// (0x0005caee) list_single_number_pane_cp2_ParamLimits

0x659a,	// (0x0005caee) list_single_number_pane_cp2

0x65b0,	// (0x0005cb04) list_single_pane_cp2_ParamLimits

0x65b0,	// (0x0005cb04) list_single_pane_cp2

0x12b9,	// (0x0005780d) bg_popup_sub_pane_cp22

0x6688,	// (0x0005cbdc) popup_side_volume_key_window_g1

0x66ac,	// (0x0005cc00) popup_side_volume_key_window_t1

0x66c8,	// (0x0005cc1c) volume_small_pane_cp1

0xe20d,	// (0x00064761) bg_popup_sub_pane_cp24_ParamLimits

0xe20d,	// (0x00064761) bg_popup_sub_pane_cp24

0x12cf,	// (0x00057823) fep_china_uni_candidate_pane_ParamLimits

0x12cf,	// (0x00057823) fep_china_uni_candidate_pane

0x12e3,	// (0x00057837) fep_china_uni_entry_pane

0x12f3,	// (0x00057847) popup_fep_china_uni_window_g1

0x66d0,	// (0x0005cc24) fep_china_uni_entry_pane_g1

0x66d8,	// (0x0005cc2c) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00065c4c) fep_china_uni_entry_pane_g

0x130f,	// (0x00057863) fep_entry_item_pane

0x1319,	// (0x0005786d) fep_candidate_item_pane

0x66e0,	// (0x0005cc34) fep_china_uni_candidate_pane_g1

0x1321,	// (0x00057875) fep_china_uni_candidate_pane_g2

0x1329,	// (0x0005787d) fep_china_uni_candidate_pane_g3

0x66e8,	// (0x0005cc3c) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00065c51) fep_china_uni_candidate_pane_g

0xe08b,	// (0x000645df) fep_entry_item_pane_g1

0x1331,	// (0x00057885) fep_entry_item_pane_t1_ParamLimits

0x1331,	// (0x00057885) fep_entry_item_pane_t1

0x1347,	// (0x0005789b) fep_candidate_item_pane_t1_ParamLimits

0x1347,	// (0x0005789b) fep_candidate_item_pane_t1

0x135c,	// (0x000578b0) fep_candidate_item_pane_t2_ParamLimits

0x135c,	// (0x000578b0) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00065c5a) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00065c5a) fep_candidate_item_pane_t

0xe0e3,	// (0x00064637) list_highlight_pane_cp31_ParamLimits

0xe0e3,	// (0x00064637) list_highlight_pane_cp31

0x136e,	// (0x000578c2) level_1_signal_lsc

0x1377,	// (0x000578cb) level_2_signal_lsc

0x1380,	// (0x000578d4) level_3_signal_lsc

0x1389,	// (0x000578dd) level_4_signal_lsc

0x1392,	// (0x000578e6) level_5_signal_lsc

0x139b,	// (0x000578ef) level_6_signal_lsc

0x13a4,	// (0x000578f8) level_7_signal_lsc

0x13a4,	// (0x000578f8) level_1_battery_lsc

0x13ad,	// (0x00057901) level_2_battery_lsc

0x13b6,	// (0x0005790a) level_3_battery_lsc

0x13bf,	// (0x00057913) level_4_battery_lsc

0x13c8,	// (0x0005791c) level_5_battery_lsc

0x13d1,	// (0x00057925) level_6_battery_lsc

0x136e,	// (0x000578c2) level_7_battery_lsc

0x13da,	// (0x0005792e) scroll_handle_focus_pane_g1

0x13e3,	// (0x00057937) scroll_handle_focus_pane_g2

0x13ec,	// (0x00057940) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00065c5f) scroll_handle_focus_pane_g

0x66f0,	// (0x0005cc44) list_single_2graphic_pane_g1_ParamLimits

0x66f0,	// (0x0005cc44) list_single_2graphic_pane_g1

0x5c4e,	// (0x0005c1a2) list_single_2graphic_pane_g2_ParamLimits

0x5c4e,	// (0x0005c1a2) list_single_2graphic_pane_g2

0x5bab,	// (0x0005c0ff) list_single_2graphic_pane_g3_ParamLimits

0x5bab,	// (0x0005c0ff) list_single_2graphic_pane_g3

0x66fc,	// (0x0005cc50) list_single_2graphic_pane_g4_ParamLimits

0x66fc,	// (0x0005cc50) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00065c66) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00065c66) list_single_2graphic_pane_g

0x6708,	// (0x0005cc5c) list_single_2graphic_pane_t1_ParamLimits

0x6708,	// (0x0005cc5c) list_single_2graphic_pane_t1

0x6736,	// (0x0005cc8a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6736,	// (0x0005cc8a) list_double2_graphic_large_graphic_pane_g1

0x5df9,	// (0x0005c34d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5df9,	// (0x0005c34d) list_double2_graphic_large_graphic_pane_g2

0x431d,	// (0x0005a871) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x431d,	// (0x0005a871) list_double2_graphic_large_graphic_pane_g3

0x6746,	// (0x0005cc9a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6746,	// (0x0005cc9a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00065c6f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00065c6f) list_double2_graphic_large_graphic_pane_g

0x6752,	// (0x0005cca6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6752,	// (0x0005cca6) list_double2_graphic_large_graphic_pane_t1

0x6768,	// (0x0005ccbc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6768,	// (0x0005ccbc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00065c78) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00065c78) list_double2_graphic_large_graphic_pane_t

0x694c,	// (0x0005cea0) popup_fast_swap_window_ParamLimits

0x694c,	// (0x0005cea0) popup_fast_swap_window

0x6968,	// (0x0005cebc) popup_side_volume_key_window

0x14a2,	// (0x000579f6) stacon_top_pane

0x14ac,	// (0x00057a00) status_pane_ParamLimits

0x14ac,	// (0x00057a00) status_pane

0xe081,	// (0x000645d5) status_small_pane

0xe095,	// (0x000645e9) control_pane

0xe095,	// (0x000645e9) stacon_bottom_pane

0xf125,	// (0x00065679) scroll_pane_cp121

0xf11c,	// (0x00065670) set_content_pane

0x677a,	// (0x0005ccce) bg_active_tab_pane_g1_cp1

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp1

0x678c,	// (0x0005cce0) bg_active_tab_pane_g3_cp1

0x677a,	// (0x0005ccce) bg_passive_tab_pane_g1_cp1

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp1

0x678c,	// (0x0005cce0) bg_passive_tab_pane_g3_cp1

0x6795,	// (0x0005cce9) bg_active_tab_pane_g1_cp2

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp2

0x679e,	// (0x0005ccf2) bg_active_tab_pane_g3_cp2

0x6795,	// (0x0005cce9) bg_passive_tab_pane_g1_cp2

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp2

0x679e,	// (0x0005ccf2) bg_passive_tab_pane_g3_cp2

0x67a7,	// (0x0005ccfb) bg_active_tab_pane_g1_cp3

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp3

0x67b0,	// (0x0005cd04) bg_active_tab_pane_g3_cp3

0x67a7,	// (0x0005ccfb) bg_passive_tab_pane_g1_cp3

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp3

0x67b0,	// (0x0005cd04) bg_passive_tab_pane_g3_cp3

0x67b9,	// (0x0005cd0d) bg_active_tab_pane_g1_cp4

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp4

0x67c4,	// (0x0005cd18) bg_active_tab_pane_g3_cp4

0x67b9,	// (0x0005cd0d) bg_passive_tab_pane_g1_cp4

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp4

0x67c4,	// (0x0005cd18) bg_passive_tab_pane_g3_cp4

0x6910,	// (0x0005ce64) bg_active_tab_pane_g1_cp5

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp5

0x6919,	// (0x0005ce6d) bg_active_tab_pane_g3_cp5

0x6910,	// (0x0005ce64) bg_passive_tab_pane_g1_cp5

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp5

0x6919,	// (0x0005ce6d) bg_passive_tab_pane_g3_cp5

0x6922,	// (0x0005ce76) list_set_graphic_pane_ParamLimits

0x6922,	// (0x0005ce76) list_set_graphic_pane

0xe095,	// (0x000645e9) bg_set_opt_pane_cp4

0x1433,	// (0x00057987) list_set_graphic_pane_g1_ParamLimits

0x1433,	// (0x00057987) list_set_graphic_pane_g1

0x143f,	// (0x00057993) list_set_graphic_pane_g2_ParamLimits

0x143f,	// (0x00057993) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00065c7d) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00065c7d) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x00066015) volume_small_pane_cp_g

0x6940,	// (0x0005ce94) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6940,	// (0x0005ce94) list_double2_large_graphic_pane_g1_cp2

0x1461,	// (0x000579b5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1461,	// (0x000579b5) list_double2_large_graphic_pane_g2_cp2

0x1472,	// (0x000579c6) list_double2_large_graphic_pane_g3_cp2

0x147a,	// (0x000579ce) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x147a,	// (0x000579ce) list_double2_large_graphic_pane_t1_cp2

0x1490,	// (0x000579e4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1490,	// (0x000579e4) list_double2_large_graphic_pane_t2_cp2

0xa130,	// (0x00060684) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa130,	// (0x00060684) list_double_large_graphic_pane_g1_cp2

0xa141,	// (0x00060695) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa141,	// (0x00060695) list_double_large_graphic_pane_g2_cp2

0x15c8,	// (0x00057b1c) list_double_large_graphic_pane_g3_cp2

0xa152,	// (0x000606a6) list_double_large_graphic_pane_g4_cp

0xa15a,	// (0x000606ae) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa15a,	// (0x000606ae) list_double_large_graphic_pane_t1_cp2

0xa171,	// (0x000606c5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa171,	// (0x000606c5) list_double_large_graphic_pane_t2_cp2

0x14ba,	// (0x00057a0e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x14ba,	// (0x00057a0e) list_double2_graphic_pane_g1_cp2

0x14c8,	// (0x00057a1c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x14c8,	// (0x00057a1c) list_double2_graphic_pane_g2_cp2

0x14d9,	// (0x00057a2d) list_double2_graphic_pane_g3_cp2

0x14e3,	// (0x00057a37) list_double2_graphic_pane_t1_cp2_ParamLimits

0x14e3,	// (0x00057a37) list_double2_graphic_pane_t1_cp2

0x14f9,	// (0x00057a4d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x14f9,	// (0x00057a4d) list_double2_graphic_pane_t2_cp2

0x150b,	// (0x00057a5f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x150b,	// (0x00057a5f) list_single_number_heading_pane_g1_cp2

0x1517,	// (0x00057a6b) list_single_number_heading_pane_g2_cp2

0x151f,	// (0x00057a73) list_single_number_heading_pane_t1_cp2_ParamLimits

0x151f,	// (0x00057a73) list_single_number_heading_pane_t1_cp2

0x1535,	// (0x00057a89) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1535,	// (0x00057a89) list_single_number_heading_pane_t2_cp2

0x1547,	// (0x00057a9b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1547,	// (0x00057a9b) list_single_number_heading_pane_t3_cp2

0x150b,	// (0x00057a5f) list_single_heading_pane_g1_cp2_ParamLimits

0x150b,	// (0x00057a5f) list_single_heading_pane_g1_cp2

0x1517,	// (0x00057a6b) list_single_heading_pane_g2_cp2

0x151f,	// (0x00057a73) list_single_heading_pane_t1_cp2_ParamLimits

0x151f,	// (0x00057a73) list_single_heading_pane_t1_cp2

0x9f3a,	// (0x0006048e) list_single_heading_pane_t2_cp2_ParamLimits

0x9f3a,	// (0x0006048e) list_single_heading_pane_t2_cp2

0x9e82,	// (0x000603d6) list_double_graphic_pane_g1_cp2_ParamLimits

0x9e82,	// (0x000603d6) list_double_graphic_pane_g1_cp2

0x9e8e,	// (0x000603e2) list_double_graphic_pane_g2_cp2_ParamLimits

0x9e8e,	// (0x000603e2) list_double_graphic_pane_g2_cp2

0x9e9d,	// (0x000603f1) list_double_graphic_pane_g3_cp2

0x9ea5,	// (0x000603f9) list_double_graphic_pane_t1_cp2_ParamLimits

0x9ea5,	// (0x000603f9) list_double_graphic_pane_t1_cp2

0x9ebb,	// (0x0006040f) list_double_graphic_pane_t2_cp2_ParamLimits

0x9ebb,	// (0x0006040f) list_double_graphic_pane_t2_cp2

0x15bc,	// (0x00057b10) list_double_number_pane_g1_cp2_ParamLimits

0x15bc,	// (0x00057b10) list_double_number_pane_g1_cp2

0x15c8,	// (0x00057b1c) list_double_number_pane_g2_cp2

0x9e46,	// (0x0006039a) list_double_number_pane_t1_cp2_ParamLimits

0x9e46,	// (0x0006039a) list_double_number_pane_t1_cp2

0x9e5a,	// (0x000603ae) list_double_number_pane_t2_cp2_ParamLimits

0x9e5a,	// (0x000603ae) list_double_number_pane_t2_cp2

0x9e70,	// (0x000603c4) list_double_number_pane_t3_cp2_ParamLimits

0x9e70,	// (0x000603c4) list_double_number_pane_t3_cp2

0x9d2f,	// (0x00060283) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d2f,	// (0x00060283) list_single_graphic_pane_g1_cp2

0x11e1,	// (0x00057735) list_single_graphic_pane_g2_cp2_ParamLimits

0x11e1,	// (0x00057735) list_single_graphic_pane_g2_cp2

0x1621,	// (0x00057b75) list_single_graphic_pane_g3_cp2

0x9d05,	// (0x00060259) list_single_graphic_pane_t1_cp2_ParamLimits

0x9d05,	// (0x00060259) list_single_graphic_pane_t1_cp2

0x11e1,	// (0x00057735) list_single_number_pane_g1_cp2_ParamLimits

0x11e1,	// (0x00057735) list_single_number_pane_g1_cp2

0x1621,	// (0x00057b75) list_single_number_pane_g2_cp2

0x9d05,	// (0x00060259) list_single_number_pane_t1_cp2_ParamLimits

0x9d05,	// (0x00060259) list_single_number_pane_t1_cp2

0x9d1b,	// (0x0006026f) list_single_number_pane_t2_cp2_ParamLimits

0x9d1b,	// (0x0006026f) list_single_number_pane_t2_cp2

0x1461,	// (0x000579b5) list_double2_pane_g1_cp2_ParamLimits

0x1461,	// (0x000579b5) list_double2_pane_g1_cp2

0x1472,	// (0x000579c6) list_double2_pane_g2_cp2

0x1594,	// (0x00057ae8) list_double2_pane_t1_cp2_ParamLimits

0x1594,	// (0x00057ae8) list_double2_pane_t1_cp2

0x15aa,	// (0x00057afe) list_double2_pane_t2_cp2_ParamLimits

0x15aa,	// (0x00057afe) list_double2_pane_t2_cp2

0x15bc,	// (0x00057b10) list_double_pane_g1_cp2_ParamLimits

0x15bc,	// (0x00057b10) list_double_pane_g1_cp2

0x15c8,	// (0x00057b1c) list_double_pane_g2_cp2

0x15d0,	// (0x00057b24) list_double_pane_t1_cp2_ParamLimits

0x15d0,	// (0x00057b24) list_double_pane_t1_cp2

0x15e6,	// (0x00057b3a) list_double_pane_t2_cp2_ParamLimits

0x15e6,	// (0x00057b3a) list_double_pane_t2_cp2

0x6982,	// (0x0005ced6) list_single_pane_cp2_g3

0x11e1,	// (0x00057735) list_single_pane_g1_cp2_ParamLimits

0x11e1,	// (0x00057735) list_single_pane_g1_cp2

0x1621,	// (0x00057b75) list_single_pane_g2_cp2

0x1629,	// (0x00057b7d) list_single_pane_t1_cp2_ParamLimits

0x1629,	// (0x00057b7d) list_single_pane_t1_cp2

0x698a,	// (0x0005cede) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x698a,	// (0x0005cede) list_single_large_graphic_pane_g1_cp2

0x1641,	// (0x00057b95) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1641,	// (0x00057b95) list_single_large_graphic_pane_g2_cp2

0x164d,	// (0x00057ba1) list_single_large_graphic_pane_g3_cp2

0x6996,	// (0x0005ceea) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6996,	// (0x0005ceea) list_single_large_graphic_pane_g4_cp1

0x1655,	// (0x00057ba9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1655,	// (0x00057ba9) list_single_large_graphic_pane_t1_cp2

0x9cd1,	// (0x00060225) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9cd1,	// (0x00060225) list_single_graphic_heading_pane_g1_cp2

0x9c9e,	// (0x000601f2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9c9e,	// (0x000601f2) list_single_graphic_heading_pane_g4_cp2

0x1621,	// (0x00057b75) list_single_graphic_heading_pane_g5_cp2

0x9cdd,	// (0x00060231) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9cdd,	// (0x00060231) list_single_graphic_heading_pane_t1_cp2

0x9cf3,	// (0x00060247) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9cf3,	// (0x00060247) list_single_graphic_heading_pane_t2_cp2

0x9c92,	// (0x000601e6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9c92,	// (0x000601e6) list_single_2graphic_pane_g1_cp2

0x9c9e,	// (0x000601f2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9c9e,	// (0x000601f2) list_single_2graphic_pane_g2_cp2

0x1621,	// (0x00057b75) list_single_2graphic_pane_g3_cp2

0x9caf,	// (0x00060203) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9caf,	// (0x00060203) list_single_2graphic_pane_g4_cp2

0x9cbb,	// (0x0006020f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9cbb,	// (0x0006020f) list_single_2graphic_pane_t1_cp2

0xe08b,	// (0x000645df) list_highlight_pane_g10_cp1

0x987a,	// (0x0005fdce) list_highlight_pane_g1_cp1

0x9882,	// (0x0005fdd6) list_highlight_pane_g2_cp1

0x988a,	// (0x0005fdde) list_highlight_pane_g3_cp1

0x9892,	// (0x0005fde6) list_highlight_pane_g4_cp1

0x989a,	// (0x0005fdee) list_highlight_pane_g5_cp1

0x98a2,	// (0x0005fdf6) list_highlight_pane_g6_cp1

0x98aa,	// (0x0005fdfe) list_highlight_pane_g7_cp1

0x98b2,	// (0x0005fe06) list_highlight_pane_g8_cp1

0x98ba,	// (0x0005fe0e) list_highlight_pane_g9_cp1

0x97a2,	// (0x0005fcf6) form_field_slider_pane_t3

0x97b0,	// (0x0005fd04) form_field_slider_pane_t4

0x97be,	// (0x0005fd12) slider_form_pane_ParamLimits

0x97be,	// (0x0005fd12) slider_form_pane

0xe095,	// (0x000645e9) control_abbreviations

0xe095,	// (0x000645e9) control_conventions

0xe095,	// (0x000645e9) control_definitions

0xe095,	// (0x000645e9) format_table_attribute

0x9f84,	// (0x000604d8) bg_popup_preview_window_pane_g9

0xe095,	// (0x000645e9) format_table_data2

0xe095,	// (0x000645e9) format_table_data3

0xe095,	// (0x000645e9) format_table_data_example

0x0008,

0xe095,	// (0x000645e9) intro_purpose

0xf8c5,	// (0x00065e19) bg_popup_preview_window_pane_g

0xe095,	// (0x000645e9) texts_category

0xe095,	// (0x000645e9) texts_graphics

0x166b,	// (0x00057bbf) text_digital

0x167a,	// (0x00057bce) text_primary

0x1689,	// (0x00057bdd) text_primary_small

0x1698,	// (0x00057bec) text_secondary

0x16a7,	// (0x00057bfb) text_title

0xa704,	// (0x00060c58) bg_passive_tab_pane_g1_cp3_srt

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp3_srt

0xa70d,	// (0x00060c61) bg_passive_tab_pane_g3_cp3_srt

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp3_srt_ParamLimits

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp3_srt

0xa716,	// (0x00060c6a) tabs_4_active_pane_srt_g1

0xa71e,	// (0x00060c72) tabs_4_active_pane_srt_t1_ParamLimits

0xa71e,	// (0x00060c72) tabs_4_active_pane_srt_t1

0xa704,	// (0x00060c58) bg_active_tab_pane_g1_cp3_copy1

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp3_copy1

0xa70d,	// (0x00060c61) bg_active_tab_pane_g3_cp3_copy1

0xe0e3,	// (0x00064637) tabs_2_long_active_pane_srt_ParamLimits

0xe0e3,	// (0x00064637) tabs_2_long_active_pane_srt

0xe0e3,	// (0x00064637) tabs_2_long_passive_pane_srt_ParamLimits

0xe0e3,	// (0x00064637) tabs_2_long_passive_pane_srt

0x6238,	// (0x0005c78c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6238,	// (0x0005c78c) bg_passive_tab_pane_cp4_srt

0xa3a5,	// (0x000608f9) bg_passive_tab_pane_g1_cp4_srt

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp4_srt

0xa3ae,	// (0x00060902) bg_passive_tab_pane_g3_cp4_srt

0x6217,	// (0x0005c76b) bg_active_tab_pane_cp4_srt_ParamLimits

0x6217,	// (0x0005c76b) bg_active_tab_pane_cp4_srt

0xa3b7,	// (0x0006090b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa3b7,	// (0x0006090b) tabs_2_long_active_pane_srt_t1

0xa3a5,	// (0x000608f9) bg_active_tab_pane_g1_cp4_srt

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp4_srt

0xa3ae,	// (0x00060902) bg_active_tab_pane_g3_cp4_srt

0xe20d,	// (0x00064761) tabs_3_long_active_pane_srt_ParamLimits

0xe20d,	// (0x00064761) tabs_3_long_active_pane_srt

0xe20d,	// (0x00064761) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe20d,	// (0x00064761) tabs_3_long_passive_pane_cp_srt

0xe20d,	// (0x00064761) tabs_3_long_passive_pane_srt_ParamLimits

0xe20d,	// (0x00064761) tabs_3_long_passive_pane_srt

0x6238,	// (0x0005c78c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6238,	// (0x0005c78c) bg_passive_tab_pane_cp5_srt

0x6910,	// (0x0005ce64) bg_passive_tab_pane_g1_cp5_srt

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp5_srt

0x6919,	// (0x0005ce6d) bg_passive_tab_pane_g3_cp5_srt

0x6217,	// (0x0005c76b) bg_active_tab_pane_cp5_srt_ParamLimits

0x6217,	// (0x0005c76b) bg_active_tab_pane_cp5_srt

0xa393,	// (0x000608e7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa393,	// (0x000608e7) tabs_3_long_active_pane_srt_t1

0x6910,	// (0x0005ce64) bg_active_tab_pane_g1_cp5_srt

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp5_srt

0x6919,	// (0x0005ce6d) bg_active_tab_pane_g3_cp5_srt

0xa385,	// (0x000608d9) navi_text_pane_srt_t1

0xa37d,	// (0x000608d1) navi_icon_pane_srt_g1

0x1792,	// (0x00057ce6) midp_editing_number_pane_srt

0x16b6,	// (0x00057c0a) midp_ticker_pane_srt

0x179a,	// (0x00057cee) midp_ticker_pane_srt_g1

0x17a2,	// (0x00057cf6) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00065c9c) midp_ticker_pane_srt_g

0x17aa,	// (0x00057cfe) midp_ticker_pane_srt_t1

0xa36e,	// (0x000608c2) midp_editing_number_pane_t1_copy1

0x69b0,	// (0x0005cf04) listscroll_midp_pane

0x69b0,	// (0x0005cf04) midp_form_pane

0x6a22,	// (0x0005cf76) midp_info_popup_window_ParamLimits

0x6a22,	// (0x0005cf76) midp_info_popup_window

0xf21f,	// (0x00065773) bg_popup_sub_pane_cp50_ParamLimits

0xf21f,	// (0x00065773) bg_popup_sub_pane_cp50

0x94ae,	// (0x0005fa02) listscroll_midp_info_pane_ParamLimits

0x94ae,	// (0x0005fa02) listscroll_midp_info_pane

0x948e,	// (0x0005f9e2) listscroll_form_midp_pane_ParamLimits

0x948e,	// (0x0005f9e2) listscroll_form_midp_pane

0x949a,	// (0x0005f9ee) scroll_bar_cp050

0x946e,	// (0x0005f9c2) list_midp_pane

0xb1ef,	// (0x00061743) signal_pane_g2_cp

0x93a8,	// (0x0005f8fc) listscroll_midp_info_pane_t1_ParamLimits

0x93a8,	// (0x0005f8fc) listscroll_midp_info_pane_t1

0x93c0,	// (0x0005f914) listscroll_midp_info_pane_t2_ParamLimits

0x93c0,	// (0x0005f914) listscroll_midp_info_pane_t2

0x93fe,	// (0x0005f952) listscroll_midp_info_pane_t3_ParamLimits

0x93fe,	// (0x0005f952) listscroll_midp_info_pane_t3

0x9438,	// (0x0005f98c) listscroll_midp_info_pane_t4_ParamLimits

0x9438,	// (0x0005f98c) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00065d54) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00065d54) listscroll_midp_info_pane_t

0xf274,	// (0x000657c8) scroll_pane_cp21

0x9348,	// (0x0005f89c) form_midp_field_choice_group_pane

0x9351,	// (0x0005f8a5) form_midp_field_text_pane

0x938e,	// (0x0005f8e2) form_midp_field_time_pane

0x9396,	// (0x0005f8ea) form_midp_gauge_slider_pane

0x939f,	// (0x0005f8f3) form_midp_gauge_wait_pane

0xe095,	// (0x000645e9) form_midp_image_pane

0x779d,	// (0x0005dcf1) list_single_midp_pane_ParamLimits

0x779d,	// (0x0005dcf1) list_single_midp_pane

0x92fd,	// (0x0005f851) form_midp_field_text_pane_t1

0x90c7,	// (0x0005f61b) input_focus_pane_cp050

0x9337,	// (0x0005f88b) list_midp_form_text_pane

0x92cc,	// (0x0005f820) form_midp_field_choice_group_pane_t1

0x92da,	// (0x0005f82e) input_focus_pane_cp051

0x92ee,	// (0x0005f842) list_midp_choice_pane

0xe095,	// (0x000645e9) status_idle_pane

0x92b0,	// (0x0005f804) form_midp_field_time_pane_t1

0xe08b,	// (0x000645df) wait_anim_pane_g2_copy1

0x92be,	// (0x0005f812) form_midp_field_time_pane_t2

0x0001,

0x1716,	// (0x00057c6a) aid_navinavi_width_2_pane

0xf7fb,	// (0x00065d4f) form_midp_field_time_pane_t

0xe095,	// (0x000645e9) input_focus_pane_cp052

0xe095,	// (0x000645e9) bg_input_focus_pane_cp040

0x9270,	// (0x0005f7c4) form_midp_gauge_slider_pane_t1

0x927e,	// (0x0005f7d2) form_midp_gauge_slider_pane_t2

0x928c,	// (0x0005f7e0) form_midp_gauge_slider_pane_t3

0x929a,	// (0x0005f7ee) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00065d46) form_midp_gauge_slider_pane_t

0x92a8,	// (0x0005f7fc) form_midp_slider_pane

0xe0e3,	// (0x00064637) bg_input_focus_pane_cp041_ParamLimits

0xe0e3,	// (0x00064637) bg_input_focus_pane_cp041

0x923d,	// (0x0005f791) form_midp_gauge_wait_pane_t1_ParamLimits

0x923d,	// (0x0005f791) form_midp_gauge_wait_pane_t1

0x924f,	// (0x0005f7a3) form_midp_gauge_wait_pane_t2_ParamLimits

0x924f,	// (0x0005f7a3) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00065d41) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00065d41) form_midp_gauge_wait_pane_t

0x9261,	// (0x0005f7b5) form_midp_wait_pane_ParamLimits

0x9261,	// (0x0005f7b5) form_midp_wait_pane

0x9207,	// (0x0005f75b) form_midp_image_pane_g1

0x9210,	// (0x0005f764) form_midp_image_pane_t1

0x921f,	// (0x0005f773) form_midp_image_pane_t2

0x922e,	// (0x0005f782) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00065d3a) form_midp_image_pane_t

0x91fe,	// (0x0005f752) list_single_midp_pane_g1

0x3c32,	// (0x0005a186) list_single_midp_pane_t1

0x91d5,	// (0x0005f729) list_midp_form_item_pane_ParamLimits

0x91d5,	// (0x0005f729) list_midp_form_item_pane

0x16be,	// (0x00057c12) list_midp_form_item_pane_t1

0x16cd,	// (0x00057c21) midp_ticker_pane_g1

0x16d9,	// (0x00057c2d) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00065c82) midp_ticker_pane_g

0x16e5,	// (0x00057c39) midp_ticker_pane_t1

0xa5bb,	// (0x00060b0f) midp_editing_number_pane_t1

0xa599,	// (0x00060aed) midp_editing_number_pane

0xa5a8,	// (0x00060afc) midp_ticker_pane

0xa35e,	// (0x000608b2) ai_message_heading_pane

0xe095,	// (0x000645e9) bg_popup_window_pane_cp14

0xa366,	// (0x000608ba) listscroll_ai_message_pane

0xa2e8,	// (0x0006083c) ai_message_heading_pane_g1_ParamLimits

0xa2e8,	// (0x0006083c) ai_message_heading_pane_g1

0xa2f4,	// (0x00060848) ai_message_heading_pane_g2_ParamLimits

0xa2f4,	// (0x00060848) ai_message_heading_pane_g2

0xa300,	// (0x00060854) ai_message_heading_pane_g3_ParamLimits

0xa300,	// (0x00060854) ai_message_heading_pane_g3

0xa30c,	// (0x00060860) ai_message_heading_pane_g4_ParamLimits

0xa30c,	// (0x00060860) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00065e7b) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00065e7b) ai_message_heading_pane_g

0xa318,	// (0x0006086c) ai_message_heading_pane_t1_ParamLimits

0xa318,	// (0x0006086c) ai_message_heading_pane_t1

0xa332,	// (0x00060886) ai_message_heading_pane_t2_ParamLimits

0xa332,	// (0x00060886) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00065e84) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00065e84) ai_message_heading_pane_t

0xa344,	// (0x00060898) bg_popup_heading_pane_cp1_ParamLimits

0xa344,	// (0x00060898) bg_popup_heading_pane_cp1

0xa2d6,	// (0x0006082a) list_ai_message_pane_ParamLimits

0xa2d6,	// (0x0006082a) list_ai_message_pane

0xf274,	// (0x000657c8) scroll_pane_cp10

0xa272,	// (0x000607c6) list_ai_message_pane_g1

0xa27a,	// (0x000607ce) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00065e58) list_ai_message_pane_g

0xa282,	// (0x000607d6) list_ai_message_pane_t1_ParamLimits

0xa282,	// (0x000607d6) list_ai_message_pane_t1

0xa297,	// (0x000607eb) list_ai_message_pane_t2_ParamLimits

0xa297,	// (0x000607eb) list_ai_message_pane_t2

0xa2ac,	// (0x00060800) list_ai_message_pane_t3_ParamLimits

0xa2ac,	// (0x00060800) list_ai_message_pane_t3

0xa2c1,	// (0x00060815) list_ai_message_pane_t4_ParamLimits

0xa2c1,	// (0x00060815) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00065e5d) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00065e5d) list_ai_message_pane_t

0xa25d,	// (0x000607b1) cell_ai_soft_ind_pane_ParamLimits

0xa25d,	// (0x000607b1) cell_ai_soft_ind_pane

0x16f7,	// (0x00057c4b) cell_ai_soft_ind_pane_g1_ParamLimits

0x16f7,	// (0x00057c4b) cell_ai_soft_ind_pane_g1

0xe095,	// (0x000645e9) grid_highlight_cp1

0x1704,	// (0x00057c58) text_secondary_cp56_ParamLimits

0x1704,	// (0x00057c58) text_secondary_cp56

0xa232,	// (0x00060786) example_general_pane_ParamLimits

0xa232,	// (0x00060786) example_general_pane

0xa23e,	// (0x00060792) example_parent_pane_g1_ParamLimits

0xa23e,	// (0x00060792) example_parent_pane_g1

0xa24a,	// (0x0006079e) example_parent_pane_t1_ParamLimits

0xa24a,	// (0x0006079e) example_parent_pane_t1

0x7104,	// (0x0005d658) popup_preview_text_window_ParamLimits

0x7104,	// (0x0005d658) popup_preview_text_window

0x1619,	// (0x00057b6d) list_single_pane_cp2_g4

0xe2c3,	// (0x00064817) bg_popup_preview_window_pane_ParamLimits

0xe2c3,	// (0x00064817) bg_popup_preview_window_pane

0x9f8c,	// (0x000604e0) popup_preview_text_window_t1_ParamLimits

0x9f8c,	// (0x000604e0) popup_preview_text_window_t1

0x9faa,	// (0x000604fe) popup_preview_text_window_t2_ParamLimits

0x9faa,	// (0x000604fe) popup_preview_text_window_t2

0x9ff3,	// (0x00060547) popup_preview_text_window_t3_ParamLimits

0x9ff3,	// (0x00060547) popup_preview_text_window_t3

0xa038,	// (0x0006058c) popup_preview_text_window_t4_ParamLimits

0xa038,	// (0x0006058c) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00065e2c) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00065e2c) popup_preview_text_window_t

0xa0b6,	// (0x0006060a) scroll_pane_cp11

0x903b,	// (0x0005f58f) bg_popup_preview_window_pane_g1

0x9f4c,	// (0x000604a0) bg_popup_preview_window_pane_g2

0x9f54,	// (0x000604a8) bg_popup_preview_window_pane_g3

0x9f5c,	// (0x000604b0) bg_popup_preview_window_pane_g4

0x9f64,	// (0x000604b8) bg_popup_preview_window_pane_g5

0x9f6c,	// (0x000604c0) bg_popup_preview_window_pane_g6

0x9f74,	// (0x000604c8) bg_popup_preview_window_pane_g7

0x9f7c,	// (0x000604d0) bg_popup_preview_window_pane_g8

0x51d1,	// (0x0005b725) aid_popup_width_pane

0x70e2,	// (0x0005d636) popup_midp_note_alarm_window_ParamLimits

0x70e2,	// (0x0005d636) popup_midp_note_alarm_window

0xf136,	// (0x0006568a) data_form_pane_ParamLimits

0x6063,	// (0x0005c5b7) form_field_data_pane_g1

0x606d,	// (0x0005c5c1) form_field_data_pane_t1_ParamLimits

0xf142,	// (0x00065696) input_focus_pane_ParamLimits

0x3ab8,	// (0x0005a00c) data_form_wide_pane_ParamLimits

0x3ac9,	// (0x0005a01d) form_field_data_wide_pane_g1

0x3ad5,	// (0x0005a029) form_field_data_wide_pane_t1_ParamLimits

0xf036,	// (0x0006558a) input_focus_pane_cp6_ParamLimits

0x61ce,	// (0x0005c722) input_popup_find_pane_g1_ParamLimits

0x61ce,	// (0x0005c722) input_popup_find_pane_g1

0x636e,	// (0x0005c8c2) aid_navi_side_left_pane

0x6383,	// (0x0005c8d7) aid_navi_side_right_pane

0x9975,	// (0x0005fec9) bg_popup_window_pane_cp30_ParamLimits

0x9975,	// (0x0005fec9) bg_popup_window_pane_cp30

0x99ef,	// (0x0005ff43) popup_midp_note_alarm_window_g1_ParamLimits

0x99ef,	// (0x0005ff43) popup_midp_note_alarm_window_g1

0x9a1f,	// (0x0005ff73) popup_midp_note_alarm_window_t1_ParamLimits

0x9a1f,	// (0x0005ff73) popup_midp_note_alarm_window_t1

0x9ac0,	// (0x00060014) popup_midp_note_alarm_window_t2_ParamLimits

0x9ac0,	// (0x00060014) popup_midp_note_alarm_window_t2

0x9b6e,	// (0x000600c2) popup_midp_note_alarm_window_t3_ParamLimits

0x9b6e,	// (0x000600c2) popup_midp_note_alarm_window_t3

0x9b96,	// (0x000600ea) popup_midp_note_alarm_window_t4_ParamLimits

0x9b96,	// (0x000600ea) popup_midp_note_alarm_window_t4

0x9bb6,	// (0x0006010a) popup_midp_note_alarm_window_t5_ParamLimits

0x9bb6,	// (0x0006010a) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00065dc9) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00065dc9) popup_midp_note_alarm_window_t

0x9c62,	// (0x000601b6) wait_bar_pane_cp1_ParamLimits

0x9c62,	// (0x000601b6) wait_bar_pane_cp1

0xe095,	// (0x000645e9) wait_anim_pane_copy1

0xe095,	// (0x000645e9) wait_border_pane_copy1

0x966b,	// (0x0005fbbf) wait_border_pane_g1_copy1

0x3aef,	// (0x0005a043) form_field_popup_pane_g1

0x6085,	// (0x0005c5d9) form_field_popup_pane_t1_ParamLimits

0xf142,	// (0x00065696) input_focus_pane_cp7_ParamLimits

0xf170,	// (0x000656c4) list_form_pane_ParamLimits

0x3af7,	// (0x0005a04b) form_field_popup_wide_pane_g1

0x3aff,	// (0x0005a053) form_field_popup_wide_pane_t1_ParamLimits

0xf142,	// (0x00065696) input_focus_pane_cp8_ParamLimits

0xf17c,	// (0x000656d0) list_form_wide_pane_ParamLimits

0xa7a1,	// (0x00060cf5) aid_size_cell_graphic_pane

0x6100,	// (0x0005c654) data_form_pane_t1_ParamLimits

0x7a0f,	// (0x0005df63) data_form_wide_pane_t1_ParamLimits

0x73e9,	// (0x0005d93d) bg_status_flat_pane

0x55da,	// (0x0005bb2e) title_pane_t1_ParamLimits

0xe0ab,	// (0x000645ff) title_pane_t2_ParamLimits

0xe0d1,	// (0x00064625) title_pane_t3_ParamLimits

0xf532,	// (0x00065a86) title_pane_t_ParamLimits

0x11ed,	// (0x00057741) level_1_signal_ParamLimits

0x11fa,	// (0x0005774e) level_2_signal_ParamLimits

0x1207,	// (0x0005775b) level_3_signal_ParamLimits

0x1214,	// (0x00057768) level_4_signal_ParamLimits

0x1221,	// (0x00057775) level_5_signal_ParamLimits

0x122e,	// (0x00057782) level_6_signal_ParamLimits

0x123b,	// (0x0005778f) level_7_signal_ParamLimits

0x11ed,	// (0x00057741) level_1_battery_ParamLimits

0x11fa,	// (0x0005774e) level_2_battery_ParamLimits

0x1207,	// (0x0005775b) level_3_battery_ParamLimits

0x1214,	// (0x00057768) level_4_battery_ParamLimits

0x1221,	// (0x00057775) level_5_battery_ParamLimits

0x122e,	// (0x00057782) level_6_battery_ParamLimits

0x123b,	// (0x0005778f) level_7_battery_ParamLimits

0x987a,	// (0x0005fdce) bg_status_flat_pane_g1

0x9882,	// (0x0005fdd6) bg_status_flat_pane_g2

0x988a,	// (0x0005fdde) bg_status_flat_pane_g3

0x9892,	// (0x0005fde6) bg_status_flat_pane_g4

0x989a,	// (0x0005fdee) bg_status_flat_pane_g5

0x98a2,	// (0x0005fdf6) bg_status_flat_pane_g6

0x98aa,	// (0x0005fdfe) bg_status_flat_pane_g7

0x564a,	// (0x0005bb9e) tabs_3_active_pane_t1_ParamLimits

0x564a,	// (0x0005bb9e) tabs_3_passive_pane_t1_ParamLimits

0x5664,	// (0x0005bbb8) tabs_4_active_pane_t1_ParamLimits

0x5664,	// (0x0005bbb8) tabs_4_1_passive_pane_t1_ParamLimits

0x6205,	// (0x0005c759) tabs_2_active_pane_t1_ParamLimits

0x6205,	// (0x0005c759) tabs_2_passive_pane_t1_ParamLimits

0x6217,	// (0x0005c76b) bg_active_tab_pane_cp4_ParamLimits

0x6225,	// (0x0005c779) tabs_2_long_active_pane_t1_ParamLimits

0x6238,	// (0x0005c78c) bg_passive_tab_pane_cp4_ParamLimits

0x76ea,	// (0x0005dc3e) list_single_midp_graphic_pane_t1_ParamLimits

0x6217,	// (0x0005c76b) bg_active_tab_pane_cp5_ParamLimits

0x6244,	// (0x0005c798) tabs_3_long_active_pane_t1_ParamLimits

0x6238,	// (0x0005c78c) bg_passive_tab_pane_cp5_ParamLimits

0x76ea,	// (0x0005dc3e) list_single_midp_graphic_pane_t1

0x73e9,	// (0x0005d93d) bg_status_flat_pane_ParamLimits

0x74b2,	// (0x0005da06) indicator_pane_cp2_ParamLimits

0x74b2,	// (0x0005da06) indicator_pane_cp2

0x75dd,	// (0x0005db31) navi_pane_srt_ParamLimits

0x75dd,	// (0x0005db31) navi_pane_srt

0x7601,	// (0x0005db55) popup_clock_digital_analogue_window_cp1

0xe127,	// (0x0006467b) indicator_pane_t1

0x16b6,	// (0x00057c0a) copy_highlight_pane

0x16b6,	// (0x00057c0a) cursor_graphics_pane

0x16b6,	// (0x00057c0a) graphic_within_text_pane

0x16b6,	// (0x00057c0a) link_highlight_pane

0xa079,	// (0x000605cd) popup_preview_text_window_t5_ParamLimits

0xa079,	// (0x000605cd) popup_preview_text_window_t5

0x171e,	// (0x00057c72) cursor_digital_pane

0x171e,	// (0x00057c72) cursor_primary_pane

0x172f,	// (0x00057c83) cursor_primary_small_pane

0x1737,	// (0x00057c8b) cursor_secondary_pane

0x173f,	// (0x00057c93) cursor_title_pane

0x171e,	// (0x00057c72) link_highlight_digital_pane

0x1726,	// (0x00057c7a) link_highlight_primary_pane

0x172f,	// (0x00057c83) link_highlight_primary_small_pane

0x1737,	// (0x00057c8b) link_highlight_secondary_pane

0x173f,	// (0x00057c93) link_highlight_title_pane

0x171e,	// (0x00057c72) copy_highlight_digital_pane

0x171e,	// (0x00057c72) copy_highlight_primary_pane

0x172f,	// (0x00057c83) copy_highlight_primary_small_pane

0x1737,	// (0x00057c8b) copy_highlight_secondary_pane

0x173f,	// (0x00057c93) copy_highlight_title_pane

0x1737,	// (0x00057c8b) graphic_text_digital_pane

0x9918,	// (0x0005fe6c) graphic_text_primary_pane

0x9921,	// (0x0005fe75) graphic_text_primary_small_pane

0x172f,	// (0x00057c83) graphic_text_secondary_pane

0x171e,	// (0x00057c72) graphic_text_title_pane

0x6a7a,	// (0x0005cfce) cursor_primary_pane_g1

0x990a,	// (0x0005fe5e) cursor_text_primary_t1

0x98f2,	// (0x0005fe46) cursor_primary_small_pane_g1

0x98fc,	// (0x0005fe50) cursor_text_primary_small_t1

0x98da,	// (0x0005fe2e) cursor_primary_small_pane_g1_copy1

0x98e4,	// (0x0005fe38) cursor_text_primary_small_t1_copy1

0x98c2,	// (0x0005fe16) cursor_text_title_t1

0x98d0,	// (0x0005fe24) cursor_title_pane_g1

0x6a7a,	// (0x0005cfce) cursor_digital_pane_g1

0x1747,	// (0x00057c9b) cursor_text_digital_t1

0x1755,	// (0x00057ca9) link_highlight_primary_pane_g1

0x986b,	// (0x0005fdbf) link_highlight_primary_pane_t1

0x1755,	// (0x00057ca9) link_highlight_primary_small_pane_g1

0x175d,	// (0x00057cb1) link_highlight_primary_small_pane_t1

0x1755,	// (0x00057ca9) link_highlight_secondary_pane_g1

0x176c,	// (0x00057cc0) link_highlight_secondary_pane_t1

0x97d0,	// (0x0005fd24) link_highlight_title_pane_g1

0x97e7,	// (0x0005fd3b) link_highlight_title_pane_t1

0x97d0,	// (0x0005fd24) link_highlight_digital_pane_g1

0x97d8,	// (0x0005fd2c) link_highlight_digital_pane_t1

0x968a,	// (0x0005fbde) copy_highlight_primary_pane_g1

0x96b0,	// (0x0005fc04) copy_highlight_primary_pane_t1

0x968a,	// (0x0005fbde) copy_highlight_primary_small_pane_g1

0x96a1,	// (0x0005fbf5) copy_highlight_primary_small_pane_t1

0x177b,	// (0x00057ccf) copy_highlight_secondary_pane_g1

0x1783,	// (0x00057cd7) copy_highlight_secondary_pane_t1

0x968a,	// (0x0005fbde) copy_highlight_title_pane_g1

0x9692,	// (0x0005fbe6) copy_highlight_title_pane_t1

0x968a,	// (0x0005fbde) copy_highlight_digital_pane_g1

0xa96f,	// (0x00060ec3) copy_highlight_digital_pane_t1

0xa8c3,	// (0x00060e17) graphic_text_primary_pane_g1

0xa953,	// (0x00060ea7) graphic_text_primary_pane_t1

0xa961,	// (0x00060eb5) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00065ef8) graphic_text_primary_pane_t

0xa92f,	// (0x00060e83) graphic_text_primary_small_pane_g1

0xa937,	// (0x00060e8b) graphic_text_primary_small_pane_t1

0xa945,	// (0x00060e99) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00065ef3) graphic_text_primary_small_pane_t

0xa90b,	// (0x00060e5f) graphic_text_secondary_pane_g1

0xa913,	// (0x00060e67) graphic_text_secondary_pane_t1

0xa921,	// (0x00060e75) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00065eee) graphic_text_secondary_pane_t

0xa8e7,	// (0x00060e3b) graphic_text_title_pane_g1

0xa8ef,	// (0x00060e43) graphic_text_title_pane_t1

0xa8fd,	// (0x00060e51) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00065ee9) graphic_text_title_pane_t

0xa8c3,	// (0x00060e17) graphic_text_digital_pane_g1

0xa8cb,	// (0x00060e1f) graphic_text_digital_pane_t1

0xa8d9,	// (0x00060e2d) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00065ee4) graphic_text_digital_pane_t

0xe0e3,	// (0x00064637) navi_icon_pane_srt_ParamLimits

0xe0e3,	// (0x00064637) navi_icon_pane_srt

0xe095,	// (0x000645e9) navi_midp_pane_srt

0xe095,	// (0x000645e9) navi_navi_pane_srt

0xe0e3,	// (0x00064637) navi_text_pane_srt_ParamLimits

0xe0e3,	// (0x00064637) navi_text_pane_srt

0xa88e,	// (0x00060de2) navi_navi_icon_text_pane_srt

0xa896,	// (0x00060dea) navi_navi_pane_srt_g1_ParamLimits

0xa896,	// (0x00060dea) navi_navi_pane_srt_g1

0xa8a8,	// (0x00060dfc) navi_navi_pane_srt_g2_ParamLimits

0xa8a8,	// (0x00060dfc) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00065edf) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00065edf) navi_navi_pane_srt_g

0xa8ba,	// (0x00060e0e) navi_navi_tabs_pane_srt

0xa88e,	// (0x00060de2) navi_navi_text_pane_srt

0xa88e,	// (0x00060de2) navi_navi_volume_pane_srt

0xa87f,	// (0x00060dd3) navi_navi_text_pane_srt_t1

0x7b66,	// (0x0005e0ba) navi_navi_volume_pane_srt_g1

0x7b6e,	// (0x0005e0c2) volume_small_pane_srt_ParamLimits

0x7b6e,	// (0x0005e0c2) volume_small_pane_srt

0x6a84,	// (0x0005cfd8) volume_small_pane_srt_g1_ParamLimits

0x6a84,	// (0x0005cfd8) volume_small_pane_srt_g1

0x6a94,	// (0x0005cfe8) volume_small_pane_srt_g2_ParamLimits

0x6a94,	// (0x0005cfe8) volume_small_pane_srt_g2

0x6aa5,	// (0x0005cff9) volume_small_pane_srt_g3_ParamLimits

0x6aa5,	// (0x0005cff9) volume_small_pane_srt_g3

0x6ab6,	// (0x0005d00a) volume_small_pane_srt_g4_ParamLimits

0x6ab6,	// (0x0005d00a) volume_small_pane_srt_g4

0x6ac7,	// (0x0005d01b) volume_small_pane_srt_g5_ParamLimits

0x6ac7,	// (0x0005d01b) volume_small_pane_srt_g5

0x6ad8,	// (0x0005d02c) volume_small_pane_srt_g6_ParamLimits

0x6ad8,	// (0x0005d02c) volume_small_pane_srt_g6

0x6ae9,	// (0x0005d03d) volume_small_pane_srt_g7_ParamLimits

0x6ae9,	// (0x0005d03d) volume_small_pane_srt_g7

0x6afa,	// (0x0005d04e) volume_small_pane_srt_g8_ParamLimits

0x6afa,	// (0x0005d04e) volume_small_pane_srt_g8

0x6b0b,	// (0x0005d05f) volume_small_pane_srt_g9_ParamLimits

0x6b0b,	// (0x0005d05f) volume_small_pane_srt_g9

0x6b1c,	// (0x0005d070) volume_small_pane_srt_g10_ParamLimits

0x6b1c,	// (0x0005d070) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00065c87) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00065c87) volume_small_pane_srt_g

0x58b1,	// (0x0005be05) query_popup_data_pane_cp2

0xa865,	// (0x00060db9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa865,	// (0x00060db9) navi_navi_icon_text_pane_srt_t1

0x9918,	// (0x0005fe6c) navi_tabs_2_long_pane_srt

0x9918,	// (0x0005fe6c) navi_tabs_2_pane_srt

0x9918,	// (0x0005fe6c) navi_tabs_3_long_pane_srt

0x9918,	// (0x0005fe6c) navi_tabs_3_pane_srt

0x9918,	// (0x0005fe6c) navi_tabs_4_pane_srt

0x7b46,	// (0x0005e09a) tabs_2_active_pane_srt_ParamLimits

0x7b46,	// (0x0005e09a) tabs_2_active_pane_srt

0x7b56,	// (0x0005e0aa) tabs_2_passive_pane_srt_ParamLimits

0x7b56,	// (0x0005e0aa) tabs_2_passive_pane_srt

0xf51d,	// (0x00065a71) bg_passive_tab_pane_cp1_srt_ParamLimits

0xf51d,	// (0x00065a71) bg_passive_tab_pane_cp1_srt

0xa831,	// (0x00060d85) bg_passive_tab_pane_g1_cp1_srt

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp1_srt

0xa83a,	// (0x00060d8e) bg_passive_tab_pane_g3_cp1_srt

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp1_srt_ParamLimits

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp1_srt

0xa843,	// (0x00060d97) tabs_2_active_pane_srt_g1

0xa84b,	// (0x00060d9f) tabs_2_active_pane_srt_t1_ParamLimits

0xa84b,	// (0x00060d9f) tabs_2_active_pane_srt_t1

0xa831,	// (0x00060d85) bg_active_tab_pane_g1_cp1_srt

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp1_srt

0xa83a,	// (0x00060d8e) bg_active_tab_pane_g3_cp1_srt

0x7b13,	// (0x0005e067) tabs_3_active_pane_srt_ParamLimits

0x7b13,	// (0x0005e067) tabs_3_active_pane_srt

0x7b24,	// (0x0005e078) tabs_3_passive_pane_cp_srt_ParamLimits

0x7b24,	// (0x0005e078) tabs_3_passive_pane_cp_srt

0x7b35,	// (0x0005e089) tabs_3_passive_pane_srt_ParamLimits

0x7b35,	// (0x0005e089) tabs_3_passive_pane_srt

0xf51d,	// (0x00065a71) bg_passive_tab_pane_cp2_srt_ParamLimits

0xf51d,	// (0x00065a71) bg_passive_tab_pane_cp2_srt

0x6b2d,	// (0x0005d081) bg_passive_tab_pane_g1_cp2_srt

0x6783,	// (0x0005ccd7) bg_passive_tab_pane_g2_cp2_srt

0x6b36,	// (0x0005d08a) bg_passive_tab_pane_g3_cp2_srt

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp2_srt_ParamLimits

0xe0e3,	// (0x00064637) bg_active_tab_pane_cp2_srt

0xa817,	// (0x00060d6b) tabs_3_active_pane_srt_g1

0xa81f,	// (0x00060d73) tabs_3_active_pane_srt_t1_ParamLimits

0xa81f,	// (0x00060d73) tabs_3_active_pane_srt_t1

0x6b2d,	// (0x0005d081) bg_active_tab_pane_g1_cp2_srt

0x6783,	// (0x0005ccd7) bg_active_tab_pane_g2_cp2_srt

0x6b36,	// (0x0005d08a) bg_active_tab_pane_g3_cp2_srt

0x7acb,	// (0x0005e01f) tabs_4_active_pane_srt_ParamLimits

0x7acb,	// (0x0005e01f) tabs_4_active_pane_srt

0x7add,	// (0x0005e031) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7add,	// (0x0005e031) tabs_4_passive_pane_cp2_srt

0x6d4f,	// (0x0005d2a3) aid_size_cell_toolbar

0x6238,	// (0x0005c78c) main_idle_act_pane_ParamLimits

0x6f14,	// (0x0005d468) popup_large_graphic_colour_window_ParamLimits

0x727f,	// (0x0005d7d3) popup_toolbar_window_ParamLimits

0x727f,	// (0x0005d7d3) popup_toolbar_window

0xa5e6,	// (0x00060b3a) list_single_graphic_2heading_pane_ParamLimits

0xa5e6,	// (0x00060b3a) list_single_graphic_2heading_pane

0xf405,	// (0x00065959) aid_size_cell_apps_grid_lsc_pane

0xf417,	// (0x0006596b) aid_size_cell_apps_grid_prt_pane

0xf51d,	// (0x00065a71) bg_wml_button_pane_cp1_ParamLimits

0xf51d,	// (0x00065a71) bg_wml_button_pane_cp1

0x92fd,	// (0x0005f851) form_midp_field_text_pane_t1_ParamLimits

0x90c7,	// (0x0005f61b) input_focus_pane_cp050_ParamLimits

0x9337,	// (0x0005f88b) list_midp_form_text_pane_ParamLimits

0x92da,	// (0x0005f82e) input_focus_pane_cp051_ParamLimits

0x92ee,	// (0x0005f842) list_midp_choice_pane_ParamLimits

0x917d,	// (0x0005f6d1) list_single_2graphic_pane_cp3_ParamLimits

0x917d,	// (0x0005f6d1) list_single_2graphic_pane_cp3

0x91a2,	// (0x0005f6f6) list_single_midp_graphic_pane_ParamLimits

0x91a2,	// (0x0005f6f6) list_single_midp_graphic_pane

0x513f,	// (0x0005b693) list_single_graphic_2heading_pane_g1_ParamLimits

0x513f,	// (0x0005b693) list_single_graphic_2heading_pane_g1

0x514b,	// (0x0005b69f) list_single_graphic_2heading_pane_g4_ParamLimits

0x514b,	// (0x0005b69f) list_single_graphic_2heading_pane_g4

0x5157,	// (0x0005b6ab) list_single_graphic_2heading_pane_g5_ParamLimits

0x5157,	// (0x0005b6ab) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00065cda) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00065cda) list_single_graphic_2heading_pane_g

0x5163,	// (0x0005b6b7) list_single_graphic_2heading_pane_t1_ParamLimits

0x5163,	// (0x0005b6b7) list_single_graphic_2heading_pane_t1

0x5177,	// (0x0005b6cb) list_single_graphic_2heading_pane_t2_ParamLimits

0x5177,	// (0x0005b6cb) list_single_graphic_2heading_pane_t2

0x5191,	// (0x0005b6e5) list_single_graphic_2heading_pane_t3_ParamLimits

0x5191,	// (0x0005b6e5) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00065ce1) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00065ce1) list_single_graphic_2heading_pane_t

0x8f79,	// (0x0005f4cd) bg_popup_sub_pane_cp2

0x8fa3,	// (0x0005f4f7) grid_toobar_pane

0x764d,	// (0x0005dba1) cell_toolbar_pane_ParamLimits

0x764d,	// (0x0005dba1) cell_toolbar_pane

0x8fdf,	// (0x0005f533) cell_toolbar_pane_g1_ParamLimits

0x8fdf,	// (0x0005f533) cell_toolbar_pane_g1

0x8ff3,	// (0x0005f547) cell_toolbar_pane_g2_ParamLimits

0x8ff3,	// (0x0005f547) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00065cef) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00065cef) cell_toolbar_pane_g

0x9015,	// (0x0005f569) grid_highlight_pane_cp2_ParamLimits

0x9015,	// (0x0005f569) grid_highlight_pane_cp2

0x902f,	// (0x0005f583) toolbar_button_pane

0x903b,	// (0x0005f58f) toolbar_button_pane_g1

0x9043,	// (0x0005f597) toolbar_button_pane_g2

0x904b,	// (0x0005f59f) toolbar_button_pane_g3

0x9053,	// (0x0005f5a7) toolbar_button_pane_g4

0x905b,	// (0x0005f5af) toolbar_button_pane_g5

0x9063,	// (0x0005f5b7) toolbar_button_pane_g6

0x906b,	// (0x0005f5bf) toolbar_button_pane_g7

0x9073,	// (0x0005f5c7) toolbar_button_pane_g8

0x907b,	// (0x0005f5cf) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00065cf4) toolbar_button_pane_g

0x7691,	// (0x0005dbe5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7691,	// (0x0005dbe5) list_single_2graphic_pane_g1_cp3

0x769d,	// (0x0005dbf1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x769d,	// (0x0005dbf1) list_single_2graphic_pane_g2_cp3

0x76ae,	// (0x0005dc02) list_single_2graphic_pane_g3_cp3

0x76b6,	// (0x0005dc0a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x76b6,	// (0x0005dc0a) list_single_2graphic_pane_g4_cp3

0x76c2,	// (0x0005dc16) list_single_2graphic_pane_t1_cp3_ParamLimits

0x76c2,	// (0x0005dc16) list_single_2graphic_pane_t1_cp3

0x76de,	// (0x0005dc32) list_single_midp_graphic_pane_g2_ParamLimits

0x76de,	// (0x0005dc32) list_single_midp_graphic_pane_g2

0x5137,	// (0x0005b68b) aid_zoom_text_primary

0x6d57,	// (0x0005d2ab) aid_zoom_text_secondary

0x17f8,	// (0x00057d4c) status_small_pane_g7_ParamLimits

0x17f8,	// (0x00057d4c) status_small_pane_g7

0x6b90,	// (0x0005d0e4) status_small_pane_t1_ParamLimits

0x55bd,	// (0x0005bb11) title_pane_g2

0x0003,

0xf529,	// (0x00065a7d) title_pane_g

0x590b,	// (0x0005be5f) aid_size_cell_colour_1_pane_ParamLimits

0x590b,	// (0x0005be5f) aid_size_cell_colour_1_pane

0x591f,	// (0x0005be73) aid_size_cell_colour_2_pane_ParamLimits

0x591f,	// (0x0005be73) aid_size_cell_colour_2_pane

0x5933,	// (0x0005be87) aid_size_cell_colour_3_pane_ParamLimits

0x5933,	// (0x0005be87) aid_size_cell_colour_3_pane

0x5947,	// (0x0005be9b) aid_size_cell_colour_4_pane_ParamLimits

0x5947,	// (0x0005be9b) aid_size_cell_colour_4_pane

0x62ab,	// (0x0005c7ff) title_pane_stacon_g1_ParamLimits

0x62ab,	// (0x0005c7ff) title_pane_stacon_g1

0x9707,	// (0x0005fc5b) popup_note_wait_window_g3_ParamLimits

0x9707,	// (0x0005fc5b) popup_note_wait_window_g3

0x977d,	// (0x0005fcd1) popup_note_wait_window_t5_ParamLimits

0x977d,	// (0x0005fcd1) popup_note_wait_window_t5

0xe095,	// (0x000645e9) main_feb_china_hwr_fs_writing_pane

0x6dfb,	// (0x0005d34f) popup_feb_china_hwr_fs_window_ParamLimits

0x6dfb,	// (0x0005d34f) popup_feb_china_hwr_fs_window

0x7700,	// (0x0005dc54) aid_size_cell_hwr_fs_ParamLimits

0x7700,	// (0x0005dc54) aid_size_cell_hwr_fs

0x90c7,	// (0x0005f61b) bg_popup_sub_pane_cp3_ParamLimits

0x90c7,	// (0x0005f61b) bg_popup_sub_pane_cp3

0x7715,	// (0x0005dc69) grid_hwr_fs_pane_ParamLimits

0x7715,	// (0x0005dc69) grid_hwr_fs_pane

0x772d,	// (0x0005dc81) linegrid_hwr_fs_pane_ParamLimits

0x772d,	// (0x0005dc81) linegrid_hwr_fs_pane

0x773d,	// (0x0005dc91) cell_hwr_fs_pane_ParamLimits

0x773d,	// (0x0005dc91) cell_hwr_fs_pane

0x90d3,	// (0x0005f627) linegrid_hwr_fs_pane_g1_ParamLimits

0x90d3,	// (0x0005f627) linegrid_hwr_fs_pane_g1

0x90df,	// (0x0005f633) linegrid_hwr_fs_pane_g2_ParamLimits

0x90df,	// (0x0005f633) linegrid_hwr_fs_pane_g2

0x90f1,	// (0x0005f645) linegrid_hwr_fs_pane_g3_ParamLimits

0x90f1,	// (0x0005f645) linegrid_hwr_fs_pane_g3

0x775f,	// (0x0005dcb3) linegrid_hwr_fs_pane_g4_ParamLimits

0x775f,	// (0x0005dcb3) linegrid_hwr_fs_pane_g4

0x7779,	// (0x0005dccd) linegrid_hwr_fs_pane_g5_ParamLimits

0x7779,	// (0x0005dccd) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00065d1f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00065d1f) linegrid_hwr_fs_pane_g

0x90fd,	// (0x0005f651) cell_hwr_fs_pane_g1_ParamLimits

0x90fd,	// (0x0005f651) cell_hwr_fs_pane_g1

0x8eb3,	// (0x0005f407) cell_hwr_fs_pane_g2_ParamLimits

0x8eb3,	// (0x0005f407) cell_hwr_fs_pane_g2

0x9113,	// (0x0005f667) cell_hwr_fs_pane_g3_ParamLimits

0x9113,	// (0x0005f667) cell_hwr_fs_pane_g3

0x9120,	// (0x0005f674) cell_hwr_fs_pane_g4_ParamLimits

0x9120,	// (0x0005f674) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00065d2a) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00065d2a) cell_hwr_fs_pane_g

0x778f,	// (0x0005dce3) cell_hwr_fs_pane_t1

0xe095,	// (0x000645e9) grid_highlight_pane_cp6

0xe095,	// (0x000645e9) main_idle_act2_pane

0xf25b,	// (0x000657af) aid_inside_area_popup_secondary

0x9d9c,	// (0x000602f0) aid_inside_area_window_primary_ParamLimits

0x9d9c,	// (0x000602f0) aid_inside_area_window_primary

0xa97e,	// (0x00060ed2) ai2_news_ticker_pane

0xa986,	// (0x00060eda) aid_size_cell_ai1_link_ParamLimits

0xa986,	// (0x00060eda) aid_size_cell_ai1_link

0xa9a0,	// (0x00060ef4) popup_ai2_data_window_ParamLimits

0xa9a0,	// (0x00060ef4) popup_ai2_data_window

0xa9b6,	// (0x00060f0a) popup_ai2_link_window_ParamLimits

0xa9b6,	// (0x00060f0a) popup_ai2_link_window

0x90c7,	// (0x0005f61b) bg_popup_sub_pane_cp4_ParamLimits

0x90c7,	// (0x0005f61b) bg_popup_sub_pane_cp4

0xa9ca,	// (0x00060f1e) grid_ai2_link_pane_ParamLimits

0xa9ca,	// (0x00060f1e) grid_ai2_link_pane

0xa9e1,	// (0x00060f35) popup_ai2_link_window_g1_ParamLimits

0xa9e1,	// (0x00060f35) popup_ai2_link_window_g1

0xa9ed,	// (0x00060f41) popup_ai2_link_window_g2_ParamLimits

0xa9ed,	// (0x00060f41) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00065efd) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00065efd) popup_ai2_link_window_g

0xa9fc,	// (0x00060f50) ai2_mp_button_pane

0xaa04,	// (0x00060f58) ai2_mp_volume_pane

0x92da,	// (0x0005f82e) bg_popup_sub_pane_cp5_ParamLimits

0x92da,	// (0x0005f82e) bg_popup_sub_pane_cp5

0xaa0c,	// (0x00060f60) heading_ai2_gene_pane_ParamLimits

0xaa0c,	// (0x00060f60) heading_ai2_gene_pane

0xaa18,	// (0x00060f6c) list_ai2_gene_pane_ParamLimits

0xaa18,	// (0x00060f6c) list_ai2_gene_pane

0xaa60,	// (0x00060fb4) cell_ai2_link_pane_ParamLimits

0xaa60,	// (0x00060fb4) cell_ai2_link_pane

0xaa76,	// (0x00060fca) cell_ai2_link_pane_g1

0xe095,	// (0x000645e9) grid_highlight_pane_cp7

0x7b83,	// (0x0005e0d7) ai2_mp_volume_pane_g1

0xab46,	// (0x0006109a) ai2_mp_volume_pane_g2

0xaabb,	// (0x0006100f) list_ai2_gene_pane_t1

0xab4e,	// (0x000610a2) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00065f16) ai2_mp_volume_pane_g

0x7b8b,	// (0x0005e0df) volume_small_pane_cp3

0xab56,	// (0x000610aa) aid_size_cell_ai2_button

0xab5e,	// (0x000610b2) grid_ai2_button_pane

0xab67,	// (0x000610bb) cell_ai2_button_pane_ParamLimits

0xab67,	// (0x000610bb) cell_ai2_button_pane

0xe08b,	// (0x000645df) cell_ai2_button_pane_g1

0xe095,	// (0x000645e9) grid_highlight_pane_cp8

0xab06,	// (0x0006105a) ai2_gene_pane_t1_ParamLimits

0xab06,	// (0x0006105a) ai2_gene_pane_t1

0x6d45,	// (0x0005d299) aid_height_parent_landscape

0xa405,	// (0x00060959) aid_height_set_list

0xa416,	// (0x0006096a) aid_size_parent

0xa7a1,	// (0x00060cf5) aid_size_cell_graphic_pane_ParamLimits

0xaa28,	// (0x00060f7c) popup_ai2_data_window_g1_ParamLimits

0xaa28,	// (0x00060f7c) popup_ai2_data_window_g1

0xaa34,	// (0x00060f88) ai2_news_ticker_pane_g1

0xaa3c,	// (0x00060f90) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00065f02) ai2_news_ticker_pane_g

0xaa44,	// (0x00060f98) ai2_news_ticker_pane_t1

0xaa52,	// (0x00060fa6) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00065f07) ai2_news_ticker_pane_t

0xaa7f,	// (0x00060fd3) heading_ai2_gene_pane_g1

0xaa87,	// (0x00060fdb) heading_ai2_gene_pane_t1_ParamLimits

0xaa87,	// (0x00060fdb) heading_ai2_gene_pane_t1

0xaa9c,	// (0x00060ff0) list_highlight_pane_cp6

0xaaa4,	// (0x00060ff8) ai2_gene_pane_ParamLimits

0xaaa4,	// (0x00060ff8) ai2_gene_pane

0xaac9,	// (0x0006101d) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00065f0c) list_ai2_gene_pane_t

0xaad7,	// (0x0006102b) list_highlight_pane_cp8_ParamLimits

0xaad7,	// (0x0006102b) list_highlight_pane_cp8

0xaae8,	// (0x0006103c) ai2_gene_pane_g1_ParamLimits

0xaae8,	// (0x0006103c) ai2_gene_pane_g1

0xaafa,	// (0x0006104e) ai2_gene_pane_g2_ParamLimits

0xaafa,	// (0x0006104e) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00065f11) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00065f11) ai2_gene_pane_g

0xf0e1,	// (0x00065635) scroll_pane_cp12

0x6d02,	// (0x0005d256) control_pane_t3_ParamLimits

0x6d02,	// (0x0005d256) control_pane_t3

0x6b81,	// (0x0005d0d5) status_small_pane_g8_ParamLimits

0x6b81,	// (0x0005d0d5) status_small_pane_g8

0x6edd,	// (0x0005d431) popup_find_window_ParamLimits

0x70f6,	// (0x0005d64a) popup_note_image_window_ParamLimits

0x3a2d,	// (0x00059f81) list_double2_graphic_pane_vc_g1_ParamLimits

0x3a2d,	// (0x00059f81) list_double2_graphic_pane_vc_g1

0x11e1,	// (0x00057735) list_double2_graphic_pane_vc_g2_ParamLimits

0x11e1,	// (0x00057735) list_double2_graphic_pane_vc_g2

0x767d,	// (0x0005dbd1) list_double2_graphic_pane_vc_g3_ParamLimits

0x767d,	// (0x0005dbd1) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00065ce8) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00065ce8) list_double2_graphic_pane_vc_g

0x3a39,	// (0x00059f8d) list_double2_graphic_pane_vc_t1_ParamLimits

0x3a39,	// (0x00059f8d) list_double2_graphic_pane_vc_t1

0x11e1,	// (0x00057735) list_single_heading_pane_vc_g1_ParamLimits

0x11e1,	// (0x00057735) list_single_heading_pane_vc_g1

0x767d,	// (0x0005dbd1) list_single_heading_pane_vc_g2_ParamLimits

0x767d,	// (0x0005dbd1) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d09) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d09) list_single_heading_pane_vc_g

0x3ba0,	// (0x0005a0f4) list_single_heading_pane_vc_t1_ParamLimits

0x3ba0,	// (0x0005a0f4) list_single_heading_pane_vc_t1

0x3bb6,	// (0x0005a10a) list_single_heading_pane_vc_t2_ParamLimits

0x3bb6,	// (0x0005a10a) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00065d0e) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00065d0e) list_single_heading_pane_vc_t

0x9083,	// (0x0005f5d7) list_setting_number_pane_vc_g1_ParamLimits

0x9083,	// (0x0005f5d7) list_setting_number_pane_vc_g1

0x908f,	// (0x0005f5e3) list_setting_number_pane_vc_g2_ParamLimits

0x908f,	// (0x0005f5e3) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00065d13) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00065d13) list_setting_number_pane_vc_g

0x3bc8,	// (0x0005a11c) list_setting_number_pane_vc_t1_ParamLimits

0x3bc8,	// (0x0005a11c) list_setting_number_pane_vc_t1

0x3bdc,	// (0x0005a130) list_setting_number_pane_vc_t2_ParamLimits

0x3bdc,	// (0x0005a130) list_setting_number_pane_vc_t2

0x3bf8,	// (0x0005a14c) list_setting_number_pane_vc_t3_ParamLimits

0x3bf8,	// (0x0005a14c) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00065d18) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00065d18) list_setting_number_pane_vc_t

0x3c22,	// (0x0005a176) set_value_pane_vc_ParamLimits

0x3c22,	// (0x0005a176) set_value_pane_vc

0xa5e6,	// (0x00060b3a) list_double2_graphic_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_double2_graphic_pane_vc

0xa5f9,	// (0x00060b4d) list_double2_large_graphic_pane_vc_ParamLimits

0xa5f9,	// (0x00060b4d) list_double2_large_graphic_pane_vc

0xa5e6,	// (0x00060b3a) list_double2_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_double2_pane_vc

0xa5e6,	// (0x00060b3a) list_double_graphic_heading_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_double_graphic_heading_pane_vc

0xa5e6,	// (0x00060b3a) list_double_graphic_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_double_graphic_pane_vc

0xa5e6,	// (0x00060b3a) list_double_heading_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_double_heading_pane_vc

0xa60b,	// (0x00060b5f) list_double_large_graphic_pane_vc_ParamLimits

0xa60b,	// (0x00060b5f) list_double_large_graphic_pane_vc

0xa5e6,	// (0x00060b3a) list_double_number_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_double_number_pane_vc

0xa5e6,	// (0x00060b3a) list_double_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_double_pane_vc

0xa5e6,	// (0x00060b3a) list_double_time_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_double_time_pane_vc

0xa5e6,	// (0x00060b3a) list_setting_number_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_setting_number_pane_vc

0xa5e6,	// (0x00060b3a) list_setting_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_setting_pane_vc

0xa5e6,	// (0x00060b3a) list_single_graphic_heading_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_single_graphic_heading_pane_vc

0xa5e6,	// (0x00060b3a) list_single_heading_pane_vc_ParamLimits

0xa5e6,	// (0x00060b3a) list_single_heading_pane_vc

0xa629,	// (0x00060b7d) list_single_number_heading_pane_vc_ParamLimits

0xa629,	// (0x00060b7d) list_single_number_heading_pane_vc

0x3c41,	// (0x0005a195) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3c41,	// (0x0005a195) list_double_graphic_heading_pane_vc_g1

0x11e1,	// (0x00057735) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x11e1,	// (0x00057735) list_double_graphic_heading_pane_vc_g2

0x767d,	// (0x0005dbd1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x767d,	// (0x0005dbd1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00065f1d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00065f1d) list_double_graphic_heading_pane_vc_g

0x3c4d,	// (0x0005a1a1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3c4d,	// (0x0005a1a1) list_double_graphic_heading_pane_vc_t1

0x3c61,	// (0x0005a1b5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3c61,	// (0x0005a1b5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00065f24) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00065f24) list_double_graphic_heading_pane_vc_t

0x9083,	// (0x0005f5d7) list_setting_pane_vc_g1_ParamLimits

0x9083,	// (0x0005f5d7) list_setting_pane_vc_g1

0x908f,	// (0x0005f5e3) list_setting_pane_vc_g2_ParamLimits

0x908f,	// (0x0005f5e3) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00065d13) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00065d13) list_setting_pane_vc_g

0x3c79,	// (0x0005a1cd) list_setting_pane_vc_t1_ParamLimits

0x3c79,	// (0x0005a1cd) list_setting_pane_vc_t1

0x3c95,	// (0x0005a1e9) list_setting_pane_vc_t2_ParamLimits

0x3c95,	// (0x0005a1e9) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00065f67) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00065f67) list_setting_pane_vc_t

0x3c22,	// (0x0005a176) set_value_pane_cp_vc_ParamLimits

0x3c22,	// (0x0005a176) set_value_pane_cp_vc

0x11e1,	// (0x00057735) list_single_number_heading_pane_vc_g1_ParamLimits

0x11e1,	// (0x00057735) list_single_number_heading_pane_vc_g1

0x767d,	// (0x0005dbd1) list_single_number_heading_pane_vc_g2_ParamLimits

0x767d,	// (0x0005dbd1) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d09) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d09) list_single_number_heading_pane_vc_g

0x3a4f,	// (0x00059fa3) list_single_number_heading_pane_vc_t1_ParamLimits

0x3a4f,	// (0x00059fa3) list_single_number_heading_pane_vc_t1

0x3caf,	// (0x0005a203) list_single_number_heading_pane_vc_t2_ParamLimits

0x3caf,	// (0x0005a203) list_single_number_heading_pane_vc_t2

0x3cc5,	// (0x0005a219) list_single_number_heading_pane_vc_t3_ParamLimits

0x3cc5,	// (0x0005a219) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00065f6c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00065f6c) list_single_number_heading_pane_vc_t

0x3cd7,	// (0x0005a22b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3cd7,	// (0x0005a22b) list_single_graphic_heading_pane_vc_g1

0x11e1,	// (0x00057735) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x11e1,	// (0x00057735) list_single_graphic_heading_pane_vc_g4

0x767d,	// (0x0005dbd1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x767d,	// (0x0005dbd1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1f,	// (0x00065f73) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1f,	// (0x00065f73) list_single_graphic_heading_pane_vc_g

0x3a4f,	// (0x00059fa3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3a4f,	// (0x00059fa3) list_single_graphic_heading_pane_vc_t1

0x3ce3,	// (0x0005a237) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3ce3,	// (0x0005a237) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x00065f7a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x00065f7a) list_single_graphic_heading_pane_vc_t

0x11e1,	// (0x00057735) list_double2_pane_vc_g1_ParamLimits

0x11e1,	// (0x00057735) list_double2_pane_vc_g1

0x767d,	// (0x0005dbd1) list_double2_pane_vc_g2_ParamLimits

0x767d,	// (0x0005dbd1) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d09) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d09) list_double2_pane_vc_g

0x3cf5,	// (0x0005a249) list_double2_pane_vc_t1_ParamLimits

0x3cf5,	// (0x0005a249) list_double2_pane_vc_t1

0xada0,	// (0x000612f4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xada0,	// (0x000612f4) list_double2_large_graphic_pane_vc_g1

0x42f0,	// (0x0005a844) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x42f0,	// (0x0005a844) list_double2_large_graphic_pane_vc_g2

0x42fc,	// (0x0005a850) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x42fc,	// (0x0005a850) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x00065f7f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x00065f7f) list_double2_large_graphic_pane_vc_g

0x3a65,	// (0x00059fb9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3a65,	// (0x00059fb9) list_double2_large_graphic_pane_vc_t1

0xadac,	// (0x00061300) list_double_time_pane_vc_g1_ParamLimits

0xadac,	// (0x00061300) list_double_time_pane_vc_g1

0xadb8,	// (0x0006130c) list_double_time_pane_vc_g2_ParamLimits

0xadb8,	// (0x0006130c) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x00065f86) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x00065f86) list_double_time_pane_vc_g

0x3d0d,	// (0x0005a261) list_double_time_pane_vc_t1_ParamLimits

0x3d0d,	// (0x0005a261) list_double_time_pane_vc_t1

0x3d31,	// (0x0005a285) list_double_time_pane_vc_t2_ParamLimits

0x3d31,	// (0x0005a285) list_double_time_pane_vc_t2

0x3d80,	// (0x0005a2d4) list_double_time_pane_vc_t3_ParamLimits

0x3d80,	// (0x0005a2d4) list_double_time_pane_vc_t3

0x3d92,	// (0x0005a2e6) list_double_time_pane_vc_t4_ParamLimits

0x3d92,	// (0x0005a2e6) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x00065f8b) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x00065f8b) list_double_time_pane_vc_t

0x11e1,	// (0x00057735) list_double_pane_vc_g1_ParamLimits

0x11e1,	// (0x00057735) list_double_pane_vc_g1

0x767d,	// (0x0005dbd1) list_double_pane_vc_g2_ParamLimits

0x767d,	// (0x0005dbd1) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d09) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d09) list_double_pane_vc_g

0x3da6,	// (0x0005a2fa) list_double_pane_vc_t1_ParamLimits

0x3da6,	// (0x0005a2fa) list_double_pane_vc_t1

0x3dba,	// (0x0005a30e) list_double_pane_vc_t2_ParamLimits

0x3dba,	// (0x0005a30e) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x00065f94) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x00065f94) list_double_pane_vc_t

0x11e1,	// (0x00057735) list_double_number_pane_vc_g1_ParamLimits

0x11e1,	// (0x00057735) list_double_number_pane_vc_g1

0x767d,	// (0x0005dbd1) list_double_number_pane_vc_g2_ParamLimits

0x767d,	// (0x0005dbd1) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d09) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d09) list_double_number_pane_vc_g

0x3dd2,	// (0x0005a326) list_double_number_pane_vc_t1_ParamLimits

0x3dd2,	// (0x0005a326) list_double_number_pane_vc_t1

0x3da6,	// (0x0005a2fa) list_double_number_pane_vc_t2_ParamLimits

0x3da6,	// (0x0005a2fa) list_double_number_pane_vc_t2

0x3de4,	// (0x0005a338) list_double_number_pane_vc_t3_ParamLimits

0x3de4,	// (0x0005a338) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x00065f99) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x00065f99) list_double_number_pane_vc_t

0xadc4,	// (0x00061318) list_double_large_graphic_pane_vc_g1_ParamLimits

0xadc4,	// (0x00061318) list_double_large_graphic_pane_vc_g1

0xade0,	// (0x00061334) list_double_large_graphic_pane_vc_g2_ParamLimits

0xade0,	// (0x00061334) list_double_large_graphic_pane_vc_g2

0xadf4,	// (0x00061348) list_double_large_graphic_pane_vc_g3_ParamLimits

0xadf4,	// (0x00061348) list_double_large_graphic_pane_vc_g3

0x3dfc,	// (0x0005a350) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3dfc,	// (0x0005a350) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x00065fa0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00065fa0) list_double_large_graphic_pane_vc_g

0x3e0b,	// (0x0005a35f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3e0b,	// (0x0005a35f) list_double_large_graphic_pane_vc_t1

0x3e27,	// (0x0005a37b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3e27,	// (0x0005a37b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x00065fa9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x00065fa9) list_double_large_graphic_pane_vc_t

0x11e1,	// (0x00057735) list_double_heading_pane_vc_g1_ParamLimits

0x11e1,	// (0x00057735) list_double_heading_pane_vc_g1

0x767d,	// (0x0005dbd1) list_double_heading_pane_vc_g2_ParamLimits

0x767d,	// (0x0005dbd1) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065d09) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065d09) list_double_heading_pane_vc_g

0x3e49,	// (0x0005a39d) list_double_heading_pane_vc_t1_ParamLimits

0x3e49,	// (0x0005a39d) list_double_heading_pane_vc_t1

0x3e5d,	// (0x0005a3b1) list_double_heading_pane_vc_t2_ParamLimits

0x3e5d,	// (0x0005a3b1) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00065fae) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00065fae) list_double_heading_pane_vc_t

0x3e75,	// (0x0005a3c9) list_double_graphic_pane_vc_g1_ParamLimits

0x3e75,	// (0x0005a3c9) list_double_graphic_pane_vc_g1

0xae03,	// (0x00061357) list_double_graphic_pane_vc_g2_ParamLimits

0xae03,	// (0x00061357) list_double_graphic_pane_vc_g2

0x11e1,	// (0x00057735) list_double_graphic_pane_vc_g3_ParamLimits

0x11e1,	// (0x00057735) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x00065fb3) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00065fb3) list_double_graphic_pane_vc_g

0x3e88,	// (0x0005a3dc) list_double_graphic_pane_vc_t1_ParamLimits

0x3e88,	// (0x0005a3dc) list_double_graphic_pane_vc_t1

0x3ea7,	// (0x0005a3fb) list_double_graphic_pane_vc_t2_ParamLimits

0x3ea7,	// (0x0005a3fb) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00065fbc) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00065fbc) list_double_graphic_pane_vc_t

0x51dd,	// (0x0005b731) aid_size_cell_fastswap

0x51e5,	// (0x0005b739) aid_size_cell_touch_ParamLimits

0x51e5,	// (0x0005b739) aid_size_cell_touch

0x544a,	// (0x0005b99e) popup_fast_swap_wide_window_ParamLimits

0x544a,	// (0x0005b99e) popup_fast_swap_wide_window

0x5550,	// (0x0005baa4) touch_pane_ParamLimits

0x5550,	// (0x0005baa4) touch_pane

0xf12e,	// (0x00065682) button_value_adjust_pane_cp2

0x3a95,	// (0x00059fe9) button_value_adjust_pane_cp4

0x3a9d,	// (0x00059ff1) form_field_data_pane_cp2

0x6009,	// (0x0005c55d) form_field_data_wide_pane_cp2

0xf43c,	// (0x00065990) bg_scroll_pane_ParamLimits

0x64a5,	// (0x0005c9f9) scroll_handle_pane_ParamLimits

0x64b9,	// (0x0005ca0d) scroll_sc2_down_pane_ParamLimits

0x64b9,	// (0x0005ca0d) scroll_sc2_down_pane

0xf46d,	// (0x000659c1) scroll_sc2_up_pane_ParamLimits

0xf46d,	// (0x000659c1) scroll_sc2_up_pane

0xb2c8,	// (0x0006181c) grid_wheel_folder_pane_g1_ParamLimits

0xb2c8,	// (0x0006181c) grid_wheel_folder_pane_g1

0x68a8,	// (0x0005cdfc) clock_nsta_pane_cp2_ParamLimits

0x68a8,	// (0x0005cdfc) clock_nsta_pane_cp2

0x69b0,	// (0x0005cf04) listscroll_midp_pane_ParamLimits

0x69bc,	// (0x0005cf10) midp_canvas_pane

0x181a,	// (0x00057d6e) nsta_clock_indic_pane

0x1842,	// (0x00057d96) listscroll_form_pane_vc

0x184a,	// (0x00057d9e) listscroll_set_pane_vc_ParamLimits

0x184a,	// (0x00057d9e) listscroll_set_pane_vc

0x7405,	// (0x0005d959) clock_nsta_pane

0x7480,	// (0x0005d9d4) indicator_nsta_pane

0x8f79,	// (0x0005f4cd) bg_popup_sub_pane_cp2_ParamLimits

0x8f8d,	// (0x0005f4e1) find_pane_cp2_ParamLimits

0x8f8d,	// (0x0005f4e1) find_pane_cp2

0x8fa3,	// (0x0005f4f7) grid_toobar_pane_ParamLimits

0x909b,	// (0x0005f5ef) list_form_gen_pane_vc_ParamLimits

0x909b,	// (0x0005f5ef) list_form_gen_pane_vc

0x90b1,	// (0x0005f605) scroll_pane_cp8_vc_ParamLimits

0x90b1,	// (0x0005f605) scroll_pane_cp8_vc

0x912d,	// (0x0005f681) data_form_wide_pane_vc_ParamLimits

0x912d,	// (0x0005f681) data_form_wide_pane_vc

0x9139,	// (0x0005f68d) form_field_data_wide_pane_vc_g1

0x9141,	// (0x0005f695) form_field_data_wide_pane_vc_t1_ParamLimits

0x9141,	// (0x0005f695) form_field_data_wide_pane_vc_t1

0xf142,	// (0x00065696) input_focus_pane_cp6_vc_ParamLimits

0xf142,	// (0x00065696) input_focus_pane_cp6_vc

0x946e,	// (0x0005f9c2) list_midp_pane_ParamLimits

0x947a,	// (0x0005f9ce) scroll_pane_cp16_ParamLimits

0x947a,	// (0x0005f9ce) scroll_pane_cp16

0x94e4,	// (0x0005fa38) button_value_adjust_pane_ParamLimits

0x94e4,	// (0x0005fa38) button_value_adjust_pane

0xa428,	// (0x0006097c) button_value_adjust_pane_cp6_ParamLimits

0xa428,	// (0x0006097c) button_value_adjust_pane_cp6

0xa54e,	// (0x00060aa2) settings_code_pane_cp_ParamLimits

0xa54e,	// (0x00060aa2) settings_code_pane_cp

0xe08b,	// (0x000645df) cell_touch_pane_g1

0xe08b,	// (0x000645df) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00065c2d) cell_touch_pane_g

0xab79,	// (0x000610cd) cell_touch_pane_cp_ParamLimits

0xab79,	// (0x000610cd) cell_touch_pane_cp

0xab89,	// (0x000610dd) cell_touch_pane_ParamLimits

0xab89,	// (0x000610dd) cell_touch_pane

0xe08b,	// (0x000645df) scroll_sc2_down_pane_g1

0xe08b,	// (0x000645df) scroll_sc2_up_pane_g1

0xe095,	// (0x000645e9) bg_set_opt_pane_cp4_vc

0xab9b,	// (0x000610ef) list_set_graphic_pane_vc_g1_ParamLimits

0xab9b,	// (0x000610ef) list_set_graphic_pane_vc_g1

0xaba7,	// (0x000610fb) list_set_graphic_pane_vc_g2_ParamLimits

0xaba7,	// (0x000610fb) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00065f29) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00065f29) list_set_graphic_pane_vc_g

0xabb3,	// (0x00061107) text_primary_small_cp13_vc_ParamLimits

0xabb3,	// (0x00061107) text_primary_small_cp13_vc

0xabcb,	// (0x0006111f) list_set_graphic_pane_vc_ParamLimits

0xabcb,	// (0x0006111f) list_set_graphic_pane_vc

0xe095,	// (0x000645e9) input_focus_pane_cp2_vc

0xe08b,	// (0x000645df) setting_code_pane_vc_g1

0xe0fa,	// (0x0006464e) setting_code_pane_vc_t1

0xabde,	// (0x00061132) set_text_pane_vc_t1_ParamLimits

0xabde,	// (0x00061132) set_text_pane_vc_t1

0xe095,	// (0x000645e9) input_focus_pane_cp1_vc

0xabfb,	// (0x0006114f) list_set_text_pane_vc

0xe08b,	// (0x000645df) setting_text_pane_vc_g1

0xe095,	// (0x000645e9) bg_set_opt_pane_cp2_vc

0xe0f1,	// (0x00064645) setting_slider_graphic_pane_vc_g1

0xac05,	// (0x00061159) setting_slider_graphic_pane_vc_t1

0xac15,	// (0x00061169) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00065f2e) setting_slider_graphic_pane_vc_t

0xac25,	// (0x00061179) slider_set_pane_cp_vc

0xac2d,	// (0x00061181) slider_set_pane_vc_g1

0xac36,	// (0x0006118a) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00065f33) slider_set_pane_vc_g

0xf19a,	// (0x000656ee) set_opt_bg_pane_g1_copy1

0xf1a2,	// (0x000656f6) set_opt_bg_pane_g2_copy1

0xac62,	// (0x000611b6) set_opt_bg_pane_g3_copy1

0xf1b2,	// (0x00065706) set_opt_bg_pane_g4_copy1

0xf1ba,	// (0x0006570e) set_opt_bg_pane_g5_copy1

0xf1c2,	// (0x00065716) set_opt_bg_pane_g6_copy1

0xac6a,	// (0x000611be) set_opt_bg_pane_g7_copy1

0xac74,	// (0x000611c8) set_opt_bg_pane_g8_copy1

0xac7c,	// (0x000611d0) set_opt_bg_pane_g9_copy1

0xe095,	// (0x000645e9) bg_set_opt_pane_cp_vc

0xac84,	// (0x000611d8) setting_slider_pane_vc_t1

0xac93,	// (0x000611e7) setting_slider_pane_vc_t2

0xaca3,	// (0x000611f7) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00065f42) setting_slider_pane_vc_t

0xacb3,	// (0x00061207) slider_set_pane_vc

0x77cb,	// (0x0005dd1f) volume_set_pane_vc_g1

0x7b94,	// (0x0005e0e8) volume_set_pane_vc_g2

0x7b9d,	// (0x0005e0f1) volume_set_pane_vc_g3

0x7ba6,	// (0x0005e0fa) volume_set_pane_vc_g4

0x7baf,	// (0x0005e103) volume_set_pane_vc_g5

0x7bb8,	// (0x0005e10c) volume_set_pane_vc_g6

0x7bc1,	// (0x0005e115) volume_set_pane_vc_g7

0x7bca,	// (0x0005e11e) volume_set_pane_vc_g8

0x7bd3,	// (0x0005e127) volume_set_pane_vc_g9

0x7bdc,	// (0x0005e130) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x00065f49) volume_set_pane_vc_g

0xacbb,	// (0x0006120f) volume_set_pane_vc

0xacc5,	// (0x00061219) button_value_adjust_pane_cp1_vc

0xaccf,	// (0x00061223) list_highlight_pane_cp2_vc

0xacd8,	// (0x0006122c) list_set_pane_vc_ParamLimits

0xacd8,	// (0x0006122c) list_set_pane_vc

0xad36,	// (0x0006128a) main_pane_set_vc_t1_ParamLimits

0xad36,	// (0x0006128a) main_pane_set_vc_t1

0xad4b,	// (0x0006129f) main_pane_set_vc_t2_ParamLimits

0xad4b,	// (0x0006129f) main_pane_set_vc_t2

0xad5d,	// (0x000612b1) main_pane_set_vc_t3_ParamLimits

0xad5d,	// (0x000612b1) main_pane_set_vc_t3

0xad6f,	// (0x000612c3) main_pane_set_vc_t4_ParamLimits

0xad6f,	// (0x000612c3) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00065f5e) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00065f5e) main_pane_set_vc_t

0xad81,	// (0x000612d5) setting_code_pane_vc_ParamLimits

0xad81,	// (0x000612d5) setting_code_pane_vc

0xad90,	// (0x000612e4) setting_slider_graphic_pane_vc

0xad90,	// (0x000612e4) setting_slider_pane_vc

0xad90,	// (0x000612e4) setting_text_pane_vc

0xad90,	// (0x000612e4) setting_volume_pane_vc

0xad98,	// (0x000612ec) scroll_pane_cp121_vc

0xf11c,	// (0x00065670) set_content_pane_vc

0xae20,	// (0x00061374) button_value_adjust_pane_g1

0xae29,	// (0x0006137d) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x00065fc1) button_value_adjust_pane_g

0xae32,	// (0x00061386) form_field_slider_wide_pane_vc_t1_ParamLimits

0xae32,	// (0x00061386) form_field_slider_wide_pane_vc_t1

0xae46,	// (0x0006139a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xae46,	// (0x0006139a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x00065fc6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00065fc6) form_field_slider_wide_pane_vc_t

0xe20d,	// (0x00064761) input_focus_pane_cp10_vc_ParamLimits

0xe20d,	// (0x00064761) input_focus_pane_cp10_vc

0xae74,	// (0x000613c8) slider_cont_pane_cp1_vc_ParamLimits

0xae74,	// (0x000613c8) slider_cont_pane_cp1_vc

0xae86,	// (0x000613da) slider_form_pane_g1_cp2

0xac36,	// (0x0006118a) slider_form_pane_g2_cp2

0xaeb3,	// (0x00061407) form_field_slider_pane_vc_t3

0xaec1,	// (0x00061415) form_field_slider_pane_vc_t4

0xaecf,	// (0x00061423) slider_form_pane_vc_ParamLimits

0xaecf,	// (0x00061423) slider_form_pane_vc

0xaedc,	// (0x00061430) form_field_slider_pane_vc_t1_ParamLimits

0xaedc,	// (0x00061430) form_field_slider_pane_vc_t1

0xae46,	// (0x0006139a) form_field_slider_pane_vc_t2_ParamLimits

0xae46,	// (0x0006139a) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x00065fd8) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x00065fd8) form_field_slider_pane_vc_t

0xe20d,	// (0x00064761) input_focus_pane_cp9_vc_ParamLimits

0xe20d,	// (0x00064761) input_focus_pane_cp9_vc

0xaef8,	// (0x0006144c) slider_cont_pane_vc_ParamLimits

0xaef8,	// (0x0006144c) slider_cont_pane_vc

0xaf0c,	// (0x00061460) list_form_graphic_pane_cp_vc_ParamLimits

0xaf0c,	// (0x00061460) list_form_graphic_pane_cp_vc

0x9139,	// (0x0005f68d) form_field_popup_wide_pane_vc_g1

0xaf21,	// (0x00061475) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf21,	// (0x00061475) form_field_popup_wide_pane_vc_t1

0xf142,	// (0x00065696) input_focus_pane_cp8_vc_ParamLimits

0xf142,	// (0x00065696) input_focus_pane_cp8_vc

0xaf66,	// (0x000614ba) list_form_wide_pane_vc_ParamLimits

0xaf66,	// (0x000614ba) list_form_wide_pane_vc

0xaf72,	// (0x000614c6) list_form_graphic_pane_vc_g1

0xaf7a,	// (0x000614ce) list_form_graphic_pane_vc_t1_ParamLimits

0xaf7a,	// (0x000614ce) list_form_graphic_pane_vc_t1

0xe0e3,	// (0x00064637) list_highlight_pane_cp5_vc_ParamLimits

0xe0e3,	// (0x00064637) list_highlight_pane_cp5_vc

0xaf96,	// (0x000614ea) list_form_graphic_pane_vc_ParamLimits

0xaf96,	// (0x000614ea) list_form_graphic_pane_vc

0x9139,	// (0x0005f68d) form_field_popup_pane_vc_g1

0xafac,	// (0x00061500) form_field_popup_pane_vc_t1_ParamLimits

0xafac,	// (0x00061500) form_field_popup_pane_vc_t1

0xf142,	// (0x00065696) input_focus_pane_cp7_vc_ParamLimits

0xf142,	// (0x00065696) input_focus_pane_cp7_vc

0xafc3,	// (0x00061517) list_form_pane_vc_ParamLimits

0xafc3,	// (0x00061517) list_form_pane_vc

0xafcf,	// (0x00061523) data_form_pane_vc_t1_ParamLimits

0xafcf,	// (0x00061523) data_form_pane_vc_t1

0xf19a,	// (0x000656ee) input_focus_pane_vc_g1

0xf1a2,	// (0x000656f6) input_focus_pane_vc_g2

0xf1aa,	// (0x000656fe) input_focus_pane_vc_g3

0xf1b2,	// (0x00065706) input_focus_pane_vc_g4

0xf1ba,	// (0x0006570e) input_focus_pane_vc_g5

0xf1c2,	// (0x00065716) input_focus_pane_vc_g6

0xf1ca,	// (0x0006571e) input_focus_pane_vc_g7

0xf1d2,	// (0x00065726) input_focus_pane_vc_g8

0xf1da,	// (0x0006572e) input_focus_pane_vc_g9

0xe08b,	// (0x000645df) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00065bb6) input_focus_pane_vc_g

0x912d,	// (0x0005f681) data_form_pane_vc_ParamLimits

0x912d,	// (0x0005f681) data_form_pane_vc

0x9139,	// (0x0005f68d) form_field_data_pane_vc_g1

0xafea,	// (0x0006153e) form_field_data_pane_vc_t1_ParamLimits

0xafea,	// (0x0006153e) form_field_data_pane_vc_t1

0xf142,	// (0x00065696) input_focus_pane_vc_ParamLimits

0xf142,	// (0x00065696) input_focus_pane_vc

0xb004,	// (0x00061558) button_value_adjust_pane_cp3_vc

0xb00c,	// (0x00061560) button_value_adjust_pane_cp5_vc

0xb014,	// (0x00061568) form_field_data_pane_vc_ParamLimits

0xb014,	// (0x00061568) form_field_data_pane_vc

0xb02b,	// (0x0006157f) form_field_data_pane_vc_cp2

0xb033,	// (0x00061587) form_field_data_wide_pane_vc_ParamLimits

0xb033,	// (0x00061587) form_field_data_wide_pane_vc

0xb049,	// (0x0006159d) form_field_data_wide_pane_vc_cp2

0xb051,	// (0x000615a5) form_field_popup_pane_vc_ParamLimits

0xb051,	// (0x000615a5) form_field_popup_pane_vc

0xb068,	// (0x000615bc) form_field_popup_wide_pane_vc_ParamLimits

0xb068,	// (0x000615bc) form_field_popup_wide_pane_vc

0xb07e,	// (0x000615d2) form_field_slider_pane_vc_ParamLimits

0xb07e,	// (0x000615d2) form_field_slider_pane_vc

0xb091,	// (0x000615e5) form_field_slider_wide_pane_vc_ParamLimits

0xb091,	// (0x000615e5) form_field_slider_wide_pane_vc

0xb0a4,	// (0x000615f8) grid_touch_1_pane_ParamLimits

0xb0a4,	// (0x000615f8) grid_touch_1_pane

0xb0b0,	// (0x00061604) grid_touch_2_pane_ParamLimits

0xb0b0,	// (0x00061604) grid_touch_2_pane

0x180c,	// (0x00057d60) touch_pane_g1_ParamLimits

0x180c,	// (0x00057d60) touch_pane_g1

0xb0c8,	// (0x0006161c) cell_app_pane_cp_wide_ParamLimits

0xb0c8,	// (0x0006161c) cell_app_pane_cp_wide

0xb0d9,	// (0x0006162d) grid_popup_fast_wide_pane_ParamLimits

0xb0d9,	// (0x0006162d) grid_popup_fast_wide_pane

0xb0ed,	// (0x00061641) scroll_pane_cp19_ParamLimits

0xb0ed,	// (0x00061641) scroll_pane_cp19

0xe095,	// (0x000645e9) bg_popup_window_pane_cp20

0xb101,	// (0x00061655) listscroll_popup_fast_wide_pane

0xb109,	// (0x0006165d) grid_indicator_nsta_pane

0xb11b,	// (0x0006166f) clock_nsta_pane_g1

0xb124,	// (0x00061678) clock_nsta_pane_t1

0xb140,	// (0x00061694) cell_indicator_nsta_pane_ParamLimits

0xb140,	// (0x00061694) cell_indicator_nsta_pane

0xb175,	// (0x000616c9) cell_indicator_nsta_pane_g1

0xb183,	// (0x000616d7) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x00065fe9) cell_indicator_nsta_pane_g

0xb195,	// (0x000616e9) clock_nsta_pane_cp

0xb19e,	// (0x000616f2) indicator_nsta_pane_cp

0xb1a8,	// (0x000616fc) nsta_clock_indic_pane_g1

0xe11f,	// (0x00064673) grid_indicator_pane

0x6557,	// (0x0005caab) scroll_pane_cp29

0x67f7,	// (0x0005cd4b) indicator_nsta_pane_cp2_ParamLimits

0x67f7,	// (0x0005cd4b) indicator_nsta_pane_cp2

0xe0e3,	// (0x00064637) main_apps_wheel_pane

0x9351,	// (0x0005f8a5) form_midp_field_text_pane_ParamLimits

0x949a,	// (0x0005f9ee) scroll_bar_cp050_ParamLimits

0xb201,	// (0x00061755) cell_indicator_pane_ParamLimits

0xb201,	// (0x00061755) cell_indicator_pane

0xb21a,	// (0x0006176e) cell_indicator_pane_g1

0xb224,	// (0x00061778) grid_wheel_folder_pane_ParamLimits

0xb224,	// (0x00061778) grid_wheel_folder_pane

0xb23a,	// (0x0006178e) list_wheel_apps_pane_ParamLimits

0xb23a,	// (0x0006178e) list_wheel_apps_pane

0xb24b,	// (0x0006179f) main_apps_wheel_pane_g1_ParamLimits

0xb24b,	// (0x0006179f) main_apps_wheel_pane_g1

0xb25f,	// (0x000617b3) main_apps_wheel_pane_g2_ParamLimits

0xb25f,	// (0x000617b3) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x00066005) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x00066005) main_apps_wheel_pane_g

0xb277,	// (0x000617cb) main_apps_wheel_pane_t1_ParamLimits

0xb277,	// (0x000617cb) main_apps_wheel_pane_t1

0xb29a,	// (0x000617ee) list_wheel_apps_pane_g1

0xb2a2,	// (0x000617f6) list_wheel_apps_pane_g2

0xb2aa,	// (0x000617fe) list_wheel_apps_pane_g3

0xb2b4,	// (0x00061808) list_wheel_apps_pane_g4

0xb2be,	// (0x00061812) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0006600a) list_wheel_apps_pane_g

0x1567,	// (0x00057abb) navi_icon_text_pane

0x7334,	// (0x0005d888) aid_fill_nsta

0xb2e1,	// (0x00061835) navi_icon_text_pane_g1

0xb2ed,	// (0x00061841) navi_icon_text_pane_t1

0x144b,	// (0x0005799f) list_set_graphic_pane_t1_ParamLimits

0x144b,	// (0x0005799f) list_set_graphic_pane_t1

0x9be5,	// (0x00060139) popup_midp_note_alarm_window_t6_ParamLimits

0x9be5,	// (0x00060139) popup_midp_note_alarm_window_t6

0x9bf7,	// (0x0006014b) popup_midp_note_alarm_window_t7_ParamLimits

0x9bf7,	// (0x0006014b) popup_midp_note_alarm_window_t7

0x9c09,	// (0x0006015d) popup_midp_note_alarm_window_t8_ParamLimits

0x9c09,	// (0x0006015d) popup_midp_note_alarm_window_t8

0x9c1b,	// (0x0006016f) popup_midp_note_alarm_window_t9_ParamLimits

0x9c1b,	// (0x0006016f) popup_midp_note_alarm_window_t9

0x9c2d,	// (0x00060181) popup_midp_note_alarm_window_t10_ParamLimits

0x9c2d,	// (0x00060181) popup_midp_note_alarm_window_t10

0x9c3f,	// (0x00060193) popup_midp_note_alarm_window_t11_ParamLimits

0x9c3f,	// (0x00060193) popup_midp_note_alarm_window_t11

0x9c51,	// (0x000601a5) scroll_pane_cp17_ParamLimits

0x9c51,	// (0x000601a5) scroll_pane_cp17

0x77cb,	// (0x0005dd1f) volume_small_pane_cp_g1

0x7be5,	// (0x0005e139) volume_small_pane_cp_g2

0x7bee,	// (0x0005e142) volume_small_pane_cp_g3

0x7bf7,	// (0x0005e14b) volume_small_pane_cp_g4

0x7c00,	// (0x0005e154) volume_small_pane_cp_g5

0x7baf,	// (0x0005e103) volume_small_pane_cp_g6

0x7c09,	// (0x0005e15d) volume_small_pane_cp_g7

0x7c12,	// (0x0005e166) volume_small_pane_cp_g8

0x7c1b,	// (0x0005e16f) volume_small_pane_cp_g9

0x7c24,	// (0x0005e178) volume_small_pane_cp_g10

0x16cd,	// (0x00057c21) midp_ticker_pane_g1_ParamLimits

0x16d9,	// (0x00057c2d) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00065c82) midp_ticker_pane_g_ParamLimits

0x16e5,	// (0x00057c39) midp_ticker_pane_t1_ParamLimits

0x734a,	// (0x0005d89e) aid_fill_nsta_2

0x9486,	// (0x0005f9da) list_form2_midp_pane

0xa599,	// (0x00060aed) midp_editing_number_pane_ParamLimits

0xa5a8,	// (0x00060afc) midp_ticker_pane_ParamLimits

0xb2ff,	// (0x00061853) form2_midp_field_pane

0xb323,	// (0x00061877) scroll_pane_cp51

0xb343,	// (0x00061897) form2_midp_button_pane_ParamLimits

0xb343,	// (0x00061897) form2_midp_button_pane

0xb355,	// (0x000618a9) form2_midp_content_pane_ParamLimits

0xb355,	// (0x000618a9) form2_midp_content_pane

0xb36f,	// (0x000618c3) form2_midp_field_choice_group_pane

0xb377,	// (0x000618cb) form2_midp_field_pane_g1

0xb37f,	// (0x000618d3) form2_midp_field_pane_g2

0xb387,	// (0x000618db) form2_midp_field_pane_g3

0xb38f,	// (0x000618e3) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0006602f) form2_midp_field_pane_g

0xb397,	// (0x000618eb) form2_midp_gauge_slider_pane

0xb39f,	// (0x000618f3) form2_midp_gauge_wait_pane

0xb3a7,	// (0x000618fb) form2_midp_image_pane_ParamLimits

0xb3a7,	// (0x000618fb) form2_midp_image_pane

0xb3c2,	// (0x00061916) form2_midp_label_pane_ParamLimits

0xb3c2,	// (0x00061916) form2_midp_label_pane

0xb3db,	// (0x0006192f) form2_midp_label_pane_cp_ParamLimits

0xb3db,	// (0x0006192f) form2_midp_label_pane_cp

0xb3fc,	// (0x00061950) form2_midp_string_pane_ParamLimits

0xb3fc,	// (0x00061950) form2_midp_string_pane

0x7c2d,	// (0x0005e181) form2_midp_text_pane_ParamLimits

0x7c2d,	// (0x0005e181) form2_midp_text_pane

0xb40e,	// (0x00061962) form2_midp_time_pane

0xb41e,	// (0x00061972) input_focus_pane_cp51_ParamLimits

0xb41e,	// (0x00061972) input_focus_pane_cp51

0xb436,	// (0x0006198a) form2_midp_label_pane_t1_ParamLimits

0xb436,	// (0x0006198a) form2_midp_label_pane_t1

0x7c4a,	// (0x0005e19e) form2_mdip_text_pane_t1_ParamLimits

0x7c4a,	// (0x0005e19e) form2_mdip_text_pane_t1

0x3ed1,	// (0x0005a425) form2_midp_time_pane_t1

0xb47f,	// (0x000619d3) form2_midp_gauge_slider_pane_t1

0xb491,	// (0x000619e5) form2_midp_gauge_slider_pane_t2

0xb4a3,	// (0x000619f7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x00066038) form2_midp_gauge_slider_pane_t

0xb4b5,	// (0x00061a09) form2_midp_slider_pane

0xb4c1,	// (0x00061a15) form2_midp_gauge_wait_pane_t1

0xb4cf,	// (0x00061a23) form2_midp_wait_pane_ParamLimits

0xb4cf,	// (0x00061a23) form2_midp_wait_pane

0xb4fa,	// (0x00061a4e) list_single_2graphic_pane_cp4_ParamLimits

0xb4fa,	// (0x00061a4e) list_single_2graphic_pane_cp4

0x91a2,	// (0x0005f6f6) list_single_midp_graphic_pane_cp_ParamLimits

0x91a2,	// (0x0005f6f6) list_single_midp_graphic_pane_cp

0xe095,	// (0x000645e9) list_highlight_pane_cp20

0xb522,	// (0x00061a76) list_single_2graphic_pane_g1_cp4

0xaa7f,	// (0x00060fd3) list_single_2graphic_pane_g2_cp4

0xb52a,	// (0x00061a7e) list_single_2graphic_pane_t1_cp4

0xe0e3,	// (0x00064637) list_highlight_pane_cp21

0xb539,	// (0x00061a8d) list_single_midp_graphic_pane_g4_cp

0xb548,	// (0x00061a9c) list_single_midp_graphic_pane_t1_cp

0xb55d,	// (0x00061ab1) form2_mdip_string_pane_t1_ParamLimits

0xb55d,	// (0x00061ab1) form2_mdip_string_pane_t1

0xe095,	// (0x000645e9) bg_wml_button_pane_cp2

0xe08b,	// (0x000645df) form2_midp_image_pane_g1

0x4308,	// (0x0005a85c) list_double_large_graphic_pane_g5_ParamLimits

0x4308,	// (0x0005a85c) list_double_large_graphic_pane_g5

0x69b0,	// (0x0005cf04) midp_form_pane_ParamLimits

0xe0e3,	// (0x00064637) main_apps_wheel_pane_ParamLimits

0x711c,	// (0x0005d670) popup_preview_window_ParamLimits

0x711c,	// (0x0005d670) popup_preview_window

0x72d7,	// (0x0005d82b) popup_touch_info_window_ParamLimits

0x72d7,	// (0x0005d82b) popup_touch_info_window

0x72f5,	// (0x0005d849) popup_touch_menu_window_ParamLimits

0x72f5,	// (0x0005d849) popup_touch_menu_window

0xe081,	// (0x000645d5) bg_popup_sub_pane_cp6

0xb664,	// (0x00061bb8) list_touch_menu_pane

0xb66c,	// (0x00061bc0) list_single_touch_menu_pane_ParamLimits

0xb66c,	// (0x00061bc0) list_single_touch_menu_pane

0xb682,	// (0x00061bd6) list_single_touch_menu_pane_t1

0xe0e3,	// (0x00064637) bg_popup_sub_pane_cp7_ParamLimits

0xe0e3,	// (0x00064637) bg_popup_sub_pane_cp7

0xb690,	// (0x00061be4) heading_sub_pane

0xb76d,	// (0x00061cc1) list_touch_info_pane_ParamLimits

0xb76d,	// (0x00061cc1) list_touch_info_pane

0xb77c,	// (0x00061cd0) list_single_touch_info_pane_ParamLimits

0xb77c,	// (0x00061cd0) list_single_touch_info_pane

0xb78e,	// (0x00061ce2) list_single_touch_info_pane_t1

0xb79c,	// (0x00061cf0) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x00066046) list_single_touch_info_pane_t

0x16b6,	// (0x00057c0a) bg_popup_heading_pane_cp

0xb7aa,	// (0x00061cfe) heading_sub_pane_t1

0x90c7,	// (0x0005f61b) bg_popup_preview_window_pane_cp_ParamLimits

0x90c7,	// (0x0005f61b) bg_popup_preview_window_pane_cp

0xb690,	// (0x00061be4) heading_preview_pane

0xb76d,	// (0x00061cc1) list_preview_pane_ParamLimits

0xb76d,	// (0x00061cc1) list_preview_pane

0xb7b8,	// (0x00061d0c) popup_preview_window_g1

0xb77c,	// (0x00061cd0) list_single_preview_pane_ParamLimits

0xb77c,	// (0x00061cd0) list_single_preview_pane

0xb7c0,	// (0x00061d14) list_single_preview_pane_g1

0xb7c8,	// (0x00061d1c) list_single_preview_pane_t1

0xb78e,	// (0x00061ce2) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0006604b) list_single_preview_pane_t

0xb7d6,	// (0x00061d2a) bg_popup_heading_pane_cp2_ParamLimits

0xb7d6,	// (0x00061d2a) bg_popup_heading_pane_cp2

0xb7ec,	// (0x00061d40) heading_preview_pane_g1

0xb7f4,	// (0x00061d48) heading_preview_pane_t1_ParamLimits

0xb7f4,	// (0x00061d48) heading_preview_pane_t1

0xe136,	// (0x0006468a) soft_indicator_pane_t1_ParamLimits

0xf0be,	// (0x00065612) scroll_pane_ParamLimits

0xf45b,	// (0x000659af) scroll_sc2_left_pane

0xf464,	// (0x000659b8) scroll_sc2_right_pane

0xf483,	// (0x000659d7) scroll_bg_pane_g1_ParamLimits

0xf498,	// (0x000659ec) scroll_bg_pane_g2_ParamLimits

0xf4b0,	// (0x00065a04) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00065c0d) scroll_bg_pane_g_ParamLimits

0xf483,	// (0x000659d7) scroll_handle_pane_g1_ParamLimits

0xf4c5,	// (0x00065a19) scroll_handle_pane_g2_ParamLimits

0xf4b0,	// (0x00065a04) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00065c14) scroll_handle_pane_g_ParamLimits

0x6d9f,	// (0x0005d2f3) popup_choice_list_window_ParamLimits

0x6d9f,	// (0x0005d2f3) popup_choice_list_window

0x8f85,	// (0x0005f4d9) choice_list_pane

0x9007,	// (0x0005f55b) cell_toolbar_pane_t1

0x902f,	// (0x0005f583) toolbar_button_pane_ParamLimits

0xa10b,	// (0x0006065f) ai_gene_pane_1_t2_ParamLimits

0xa10b,	// (0x0006065f) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00065e3c) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00065e3c) ai_gene_pane_1_t

0xb811,	// (0x00061d65) scroll_sc2_left_pane_g1

0xb811,	// (0x00061d65) scroll_sc2_right_pane_g1

0xf51d,	// (0x00065a71) bg_popup_sub_pane_cp10

0xb81b,	// (0x00061d6f) list_choice_list_pane

0xb834,	// (0x00061d88) list_single_choice_list_pane_ParamLimits

0xb834,	// (0x00061d88) list_single_choice_list_pane

0xb847,	// (0x00061d9b) list_single_choice_list_pane_g1

0x61f0,	// (0x0005c744) list_single_choice_list_pane_t1_ParamLimits

0x61f0,	// (0x0005c744) list_single_choice_list_pane_t1

0xb84f,	// (0x00061da3) choice_list_pane_g1

0xb857,	// (0x00061dab) choice_list_pane_t1

0xe081,	// (0x000645d5) input_focus_pane_cp11

0xf3d0,	// (0x00065924) title_pane_stacon_g2_ParamLimits

0xf3d0,	// (0x00065924) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00065bf3) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00065bf3) title_pane_stacon_g

0x16b6,	// (0x00057c0a) cursor_press_pane

0x6e47,	// (0x0005d39b) popup_fep_hwr_window_ParamLimits

0x6e47,	// (0x0005d39b) popup_fep_hwr_window

0x6ebf,	// (0x0005d413) popup_fep_vkb_window_ParamLimits

0x6ebf,	// (0x0005d413) popup_fep_vkb_window

0xb865,	// (0x00061db9) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x00066074) fep_vkb_side_pane_g_ParamLimits

0x7ca1,	// (0x0005e1f5) fep_hwr_candidate_pane_ParamLimits

0x7ca1,	// (0x0005e1f5) fep_hwr_candidate_pane

0x7ccb,	// (0x0005e21f) fep_hwr_side_pane_ParamLimits

0x7ccb,	// (0x0005e21f) fep_hwr_side_pane

0x7ceb,	// (0x0005e23f) fep_hwr_top_pane_ParamLimits

0x7ceb,	// (0x0005e23f) fep_hwr_top_pane

0x7d03,	// (0x0005e257) fep_hwr_write_pane_ParamLimits

0x7d03,	// (0x0005e257) fep_hwr_write_pane

0xfb20,	// (0x00066074) fep_vkb_side_pane_g

0xb86d,	// (0x00061dc1) fep_hwr_top_pane_g1

0xb87f,	// (0x00061dd3) fep_hwr_top_pane_g2

0x7d3d,	// (0x0005e291) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x00066050) fep_hwr_top_pane_g

0x7d52,	// (0x0005e2a6) fep_hwr_top_text_pane

0x1258,	// (0x000577ac) fep_hwr_top_text_pane_g1

0xb8b5,	// (0x00061e09) fep_hwr_top_text_pane_t1

0x7e48,	// (0x0005e39c) fep_hwr_candidate_pane_g1

0xbafa,	// (0x0006204e) fep_vkb_keypad_pane_g3_ParamLimits

0xbafa,	// (0x0006204e) fep_vkb_keypad_pane_g3

0xbb22,	// (0x00062076) fep_vkb_keypad_pane_g4_ParamLimits

0xbb22,	// (0x00062076) fep_vkb_keypad_pane_g4

0xbb91,	// (0x000620e5) fep_vkb_bottom_pane_g2_ParamLimits

0xbb91,	// (0x000620e5) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0006607b) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0006607b) fep_vkb_bottom_pane_g

0xb811,	// (0x00061d65) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x00066085) cell_vkb_side_pane_g

0xbc1c,	// (0x00062170) cell_vkb_side_pane_t1

0xbc2a,	// (0x0006217e) cell_vkb_side_pane_t1_copy1

0xb811,	// (0x00061d65) bg_fep_vkb_candidate_pane_g2

0xbd56,	// (0x000622aa) cell_vkb_candidate_pane_ParamLimits

0xb8c3,	// (0x00061e17) aid_size_cell_vkb_ParamLimits

0xb8c3,	// (0x00061e17) aid_size_cell_vkb

0xbd56,	// (0x000622aa) cell_vkb_candidate_pane

0x7e6f,	// (0x0005e3c3) bg_popup_fep_shadow_pane_g1

0xb951,	// (0x00061ea5) fep_vkb_bottom_pane_ParamLimits

0xb951,	// (0x00061ea5) fep_vkb_bottom_pane

0xb987,	// (0x00061edb) fep_vkb_candidate_pane_ParamLimits

0xb987,	// (0x00061edb) fep_vkb_candidate_pane

0xb9a3,	// (0x00061ef7) fep_vkb_keypad_pane_ParamLimits

0xb9a3,	// (0x00061ef7) fep_vkb_keypad_pane

0xb9e2,	// (0x00061f36) fep_vkb_side_pane_ParamLimits

0xb9e2,	// (0x00061f36) fep_vkb_side_pane

0xba1e,	// (0x00061f72) fep_vkb_top_pane_ParamLimits

0xba1e,	// (0x00061f72) fep_vkb_top_pane

0xba53,	// (0x00061fa7) fep_vkb_top_pane_g1_ParamLimits

0xba53,	// (0x00061fa7) fep_vkb_top_pane_g1

0xba62,	// (0x00061fb6) fep_vkb_top_pane_g2_ParamLimits

0xba62,	// (0x00061fb6) fep_vkb_top_pane_g2

0xba71,	// (0x00061fc5) fep_vkb_top_pane_g3_ParamLimits

0xba71,	// (0x00061fc5) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0006606b) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0006606b) fep_vkb_top_pane_g

0xba8f,	// (0x00061fe3) fep_vkb_top_text_pane_ParamLimits

0xba8f,	// (0x00061fe3) fep_vkb_top_text_pane

0xbaa0,	// (0x00061ff4) fep_vkb_side_pane_g1_ParamLimits

0xbaa0,	// (0x00061ff4) fep_vkb_side_pane_g1

0xbae9,	// (0x0006203d) grid_vkb_side_pane_ParamLimits

0xbae9,	// (0x0006203d) grid_vkb_side_pane

0x7e77,	// (0x0005e3cb) bg_popup_fep_shadow_pane_g2

0x7e80,	// (0x0005e3d4) bg_popup_fep_shadow_pane_g3

0x7e88,	// (0x0005e3dc) bg_popup_fep_shadow_pane_g4

0x7e91,	// (0x0005e3e5) bg_popup_fep_shadow_pane_g5

0x7e9b,	// (0x0005e3ef) bg_popup_fep_shadow_pane_g6

0x7ea3,	// (0x0005e3f7) bg_popup_fep_shadow_pane_g7

0xf1b2,	// (0x00065706) bg_popup_fep_shadow_pane_g8

0xbb40,	// (0x00062094) grid_vkb_keypad_number_pane_ParamLimits

0xbb40,	// (0x00062094) grid_vkb_keypad_number_pane

0xbb50,	// (0x000620a4) grid_vkb_keypad_pane_ParamLimits

0xbb50,	// (0x000620a4) grid_vkb_keypad_pane

0xbb76,	// (0x000620ca) fep_vkb_bottom_pane_g1_ParamLimits

0xbb76,	// (0x000620ca) fep_vkb_bottom_pane_g1

0xbb9f,	// (0x000620f3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb9f,	// (0x000620f3) grid_vkb_keypad_bottom_left_pane

0xbbb4,	// (0x00062108) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbbb4,	// (0x00062108) grid_vkb_keypad_bottom_right_pane

0xbbc9,	// (0x0006211d) fep_vkb_top_text_pane_g1

0xbbe4,	// (0x00062138) fep_vkb_top_text_pane_t1

0xbbf9,	// (0x0006214d) cell_vkb_side_pane_ParamLimits

0xbbf9,	// (0x0006214d) cell_vkb_side_pane

0xb811,	// (0x00061d65) cell_vkb_side_pane_g1

0xbc38,	// (0x0006218c) cell_vkb_keypad_pane_ParamLimits

0xbc38,	// (0x0006218c) cell_vkb_keypad_pane

0xbcad,	// (0x00062201) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x00066098) bg_popup_fep_shadow_pane_g

0x7eb5,	// (0x0005e409) cell_hwr_side_pane_g1

0x7eb5,	// (0x0005e409) cell_hwr_side_pane_g2

0xbcb7,	// (0x0006220b) cell_vkb_keypad_pane_t1

0xbcc5,	// (0x00062219) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbcc5,	// (0x00062219) cell_vkb_keypad_bottom_left_pane

0xbce2,	// (0x00062236) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbce2,	// (0x00062236) cell_vkb_keypad_bottom_right_pane

0xb811,	// (0x00061d65) cell_vkb_keypad_bottom_left_pane_g1

0xb811,	// (0x00061d65) cell_vkb_keypad_bottom_right_pane_g1

0xbd1b,	// (0x0006226f) cell_vkb_keypad_number_pane_ParamLimits

0xbd1b,	// (0x0006226f) cell_vkb_keypad_number_pane

0xbd3a,	// (0x0006228e) cell_vkb_keypad_number_pane_g1

0xbd44,	// (0x00062298) cell_vkb_keypad_number_pane_g2

0xbd4d,	// (0x000622a1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0006608a) cell_vkb_keypad_number_pane_g

0xbcb7,	// (0x0006220b) cell_vkb_keypad_number_pane_t1

0xbd71,	// (0x000622c5) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x000660ab) cell_hwr_side_pane_g

0xbd8a,	// (0x000622de) cell_hwr_side_pane_t1

0x7ebf,	// (0x0005e413) cell_hwr_side_pane_t1_copy1

0x7ecd,	// (0x0005e421) cell_hwr_candidate_pane_g1

0x7efc,	// (0x0005e450) cell_hwr_candidate_pane_t1

0xb811,	// (0x00061d65) cell_vkb_candidate_pane_g2

0xbdef,	// (0x00062343) cell_vkb_candidate_pane_t1

0x7c68,	// (0x0005e1bc) bg_popup_fep_shadow_pane_ParamLimits

0x7c68,	// (0x0005e1bc) bg_popup_fep_shadow_pane

0x7d1d,	// (0x0005e271) bg_fep_hwr_top_pane_g4

0xb891,	// (0x00061de5) bg_hwr_side_pane_g1_ParamLimits

0xb891,	// (0x00061de5) bg_hwr_side_pane_g1

0x7d8e,	// (0x0005e2e2) cell_hwr_side_pane_ParamLimits

0x7d8e,	// (0x0005e2e2) cell_hwr_side_pane

0x7dc9,	// (0x0005e31d) fep_hwr_write_pane_g1_ParamLimits

0x7dc9,	// (0x0005e31d) fep_hwr_write_pane_g1

0x7dd6,	// (0x0005e32a) fep_hwr_write_pane_g2_ParamLimits

0x7dd6,	// (0x0005e32a) fep_hwr_write_pane_g2

0x7de3,	// (0x0005e337) fep_hwr_write_pane_g3_ParamLimits

0x7de3,	// (0x0005e337) fep_hwr_write_pane_g3

0x7df1,	// (0x0005e345) fep_hwr_write_pane_g4_ParamLimits

0x7df1,	// (0x0005e345) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x00066057) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x00066057) fep_hwr_write_pane_g

0x7d1d,	// (0x0005e271) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7d1d,	// (0x0005e271) bg_fep_hwr_candidate_pane_g2

0x7e06,	// (0x0005e35a) cell_hwr_candidate_pane_ParamLimits

0x7e06,	// (0x0005e35a) cell_hwr_candidate_pane

0x7e48,	// (0x0005e39c) fep_hwr_candidate_pane_g1_ParamLimits

0xb8f1,	// (0x00061e45) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb8f1,	// (0x00061e45) bg_popup_fep_shadow_pane_cp2

0xba81,	// (0x00061fd5) fep_vkb_top_pane_g4_ParamLimits

0xba81,	// (0x00061fd5) fep_vkb_top_pane_g4

0xbac7,	// (0x0006201b) fep_vkb_side_pane_g2_ParamLimits

0xbac7,	// (0x0006201b) fep_vkb_side_pane_g2

0x5f08,	// (0x0005c45c) list_setting_pane_t4_ParamLimits

0x5f08,	// (0x0005c45c) list_setting_pane_t4

0x5fa2,	// (0x0005c4f6) list_setting_number_pane_t5_ParamLimits

0x5fa2,	// (0x0005c4f6) list_setting_number_pane_t5

0x6586,	// (0x0005cada) list_double_heading_pane_cp2_ParamLimits

0x6586,	// (0x0005cada) list_double_heading_pane_cp2

0x2493,	// (0x000589e7) list_double_heading_pane_g1_cp2_ParamLimits

0x2493,	// (0x000589e7) list_double_heading_pane_g1_cp2

0xbdfd,	// (0x00062351) list_double_heading_pane_g2_cp2_ParamLimits

0xbdfd,	// (0x00062351) list_double_heading_pane_g2_cp2

0xbe11,	// (0x00062365) list_double_heading_pane_t1_cp2_ParamLimits

0xbe11,	// (0x00062365) list_double_heading_pane_t1_cp2

0xbe27,	// (0x0006237b) list_double_heading_pane_t2_cp2_ParamLimits

0xbe27,	// (0x0006237b) list_double_heading_pane_t2_cp2

0xe079,	// (0x000645cd) aid_value_unit2

0x5496,	// (0x0005b9ea) popup_preview_fixed_window

0xe21b,	// (0x0006476f) bg_popup_preview_window_pane_cp02

0xbe39,	// (0x0006238d) list_preview_fixed_pane

0xbe7f,	// (0x000623d3) list_empty_pane_fp_ParamLimits

0xbe7f,	// (0x000623d3) list_empty_pane_fp

0xbe7f,	// (0x000623d3) list_single_cale_day_pane_fp_ParamLimits

0xbe7f,	// (0x000623d3) list_single_cale_day_pane_fp

0xbe7f,	// (0x000623d3) list_single_graphic_heading_pane_fp_ParamLimits

0xbe7f,	// (0x000623d3) list_single_graphic_heading_pane_fp

0xbe7f,	// (0x000623d3) list_single_graphic_pane_fp_ParamLimits

0xbe7f,	// (0x000623d3) list_single_graphic_pane_fp

0xbe7f,	// (0x000623d3) list_single_heading_pane_fp_ParamLimits

0xbe7f,	// (0x000623d3) list_single_heading_pane_fp

0xbe7f,	// (0x000623d3) list_single_pane_fp_ParamLimits

0xbe7f,	// (0x000623d3) list_single_pane_fp

0xbe95,	// (0x000623e9) list_single_pane_fp_g1_ParamLimits

0xbe95,	// (0x000623e9) list_single_pane_fp_g1

0x249f,	// (0x000589f3) list_single_pane_fp_g2_ParamLimits

0x249f,	// (0x000589f3) list_single_pane_fp_g2

0xbea1,	// (0x000623f5) list_single_pane_fp_g3_ParamLimits

0xbea1,	// (0x000623f5) list_single_pane_fp_g3

0xbeb5,	// (0x00062409) list_single_pane_fp_g4_ParamLimits

0xbeb5,	// (0x00062409) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x000660be) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x000660be) list_single_pane_fp_g

0x3ee4,	// (0x0005a438) list_single_pane_fp_t1_ParamLimits

0x3ee4,	// (0x0005a438) list_single_pane_fp_t1

0x3efb,	// (0x0005a44f) list_single_graphic_pane_fp_g1_ParamLimits

0x3efb,	// (0x0005a44f) list_single_graphic_pane_fp_g1

0xbe95,	// (0x000623e9) list_single_graphic_pane_fp_g2_ParamLimits

0xbe95,	// (0x000623e9) list_single_graphic_pane_fp_g2

0x249f,	// (0x000589f3) list_single_graphic_pane_fp_g3_ParamLimits

0x249f,	// (0x000589f3) list_single_graphic_pane_fp_g3

0xbea1,	// (0x000623f5) list_single_graphic_pane_fp_g4_ParamLimits

0xbea1,	// (0x000623f5) list_single_graphic_pane_fp_g4

0xbeb5,	// (0x00062409) list_single_graphic_pane_fp_g5_ParamLimits

0xbeb5,	// (0x00062409) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x000660c7) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x000660c7) list_single_graphic_pane_fp_g

0x3f07,	// (0x0005a45b) list_single_graphic_pane_fp_t1_ParamLimits

0x3f07,	// (0x0005a45b) list_single_graphic_pane_fp_t1

0x3efb,	// (0x0005a44f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3efb,	// (0x0005a44f) list_single_graphic_heading_pane_fp_g1

0xbe95,	// (0x000623e9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe95,	// (0x000623e9) list_single_graphic_heading_pane_fp_g2

0x249f,	// (0x000589f3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x249f,	// (0x000589f3) list_single_graphic_heading_pane_fp_g3

0xbea1,	// (0x000623f5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbea1,	// (0x000623f5) list_single_graphic_heading_pane_fp_g4

0xbeb5,	// (0x00062409) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbeb5,	// (0x00062409) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x000660c7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x000660c7) list_single_graphic_heading_pane_fp_g

0x3f1d,	// (0x0005a471) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3f1d,	// (0x0005a471) list_single_graphic_heading_pane_fp_t1

0x3f33,	// (0x0005a487) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3f33,	// (0x0005a487) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x000660d2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x000660d2) list_single_graphic_heading_pane_fp_t

0x3f45,	// (0x0005a499) list_single_cale_day_pane_fp_g1_ParamLimits

0x3f45,	// (0x0005a499) list_single_cale_day_pane_fp_g1

0xbec1,	// (0x00062415) list_single_cale_day_pane_fp_g2_ParamLimits

0xbec1,	// (0x00062415) list_single_cale_day_pane_fp_g2

0xb698,	// (0x00061bec) list_single_cale_day_pane_fp_g3_ParamLimits

0xb698,	// (0x00061bec) list_single_cale_day_pane_fp_g3

0xb6c0,	// (0x00061c14) list_single_cale_day_pane_fp_g4_ParamLimits

0xb6c0,	// (0x00061c14) list_single_cale_day_pane_fp_g4

0xb6e4,	// (0x00061c38) list_single_cale_day_pane_fp_g5_ParamLimits

0xb6e4,	// (0x00061c38) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x000660d7) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x000660d7) list_single_cale_day_pane_fp_g

0x3f7d,	// (0x0005a4d1) list_single_cale_day_pane_fp_t1_ParamLimits

0x3f7d,	// (0x0005a4d1) list_single_cale_day_pane_fp_t1

0x3fa3,	// (0x0005a4f7) list_single_cale_day_pane_fp_t2_ParamLimits

0x3fa3,	// (0x0005a4f7) list_single_cale_day_pane_fp_t2

0x3fbc,	// (0x0005a510) list_single_cale_day_pane_fp_t3_ParamLimits

0x3fbc,	// (0x0005a510) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x000660e2) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x000660e2) list_single_cale_day_pane_fp_t

0xbe95,	// (0x000623e9) list_empty_pane_fp_g1_ParamLimits

0xbe95,	// (0x000623e9) list_empty_pane_fp_g1

0x3fd5,	// (0x0005a529) list_empty_pane_fp_t1

0x3fe3,	// (0x0005a537) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x000660e9) list_empty_pane_fp_t

0xbe95,	// (0x000623e9) list_single_heading_pane_fp_g1_ParamLimits

0xbe95,	// (0x000623e9) list_single_heading_pane_fp_g1

0x249f,	// (0x000589f3) list_single_heading_pane_fp_g2_ParamLimits

0x249f,	// (0x000589f3) list_single_heading_pane_fp_g2

0xbea1,	// (0x000623f5) list_single_heading_pane_fp_g3_ParamLimits

0xbea1,	// (0x000623f5) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x000660ee) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x000660ee) list_single_heading_pane_fp_g

0x3ff1,	// (0x0005a545) list_single_heading_pane_fp_t1_ParamLimits

0x3ff1,	// (0x0005a545) list_single_heading_pane_fp_t1

0x4003,	// (0x0005a557) list_single_heading_pane_fp_t2_ParamLimits

0x4003,	// (0x0005a557) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x000660f5) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x000660f5) list_single_heading_pane_fp_t

0x6256,	// (0x0005c7aa) aid_size_cell_fast

0xe1f0,	// (0x00064744) soft_indicator_pane_cp1_t1

0x625f,	// (0x0005c7b3) cell_app_pane_cp2_ParamLimits

0x625f,	// (0x0005c7b3) cell_app_pane_cp2

0x7c8a,	// (0x0005e1de) fep_hwr_candidate_drop_down_list_pane

0x7e62,	// (0x0005e3b6) fep_hwr_candidate_pane_g3_ParamLimits

0x7e62,	// (0x0005e3b6) fep_hwr_candidate_pane_g3

0x3462,	// (0x000599b6) fep_hwr_candidate_pane_g4_ParamLimits

0x3462,	// (0x000599b6) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x00066064) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x00066064) fep_hwr_candidate_pane_g

0xb976,	// (0x00061eca) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb976,	// (0x00061eca) fep_vkb_candidate_drop_down_list_pane

0xbd79,	// (0x000622cd) fep_vkb_candidate_pane_g3

0xbd81,	// (0x000622d5) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x00066091) fep_vkb_candidate_pane_g

0x7ecd,	// (0x0005e421) cell_hwr_candidate_pane_g1_ParamLimits

0x7edb,	// (0x0005e42f) cell_hwr_candidate_pane_g3_ParamLimits

0x7edb,	// (0x0005e42f) cell_hwr_candidate_pane_g3

0xbd98,	// (0x000622ec) cell_hwr_candidate_pane_g4_ParamLimits

0xbd98,	// (0x000622ec) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x000660b0) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x000660b0) cell_hwr_candidate_pane_g

0xbdb9,	// (0x0006230d) cell_vkb_candidate_pane_g3_ParamLimits

0xbdb9,	// (0x0006230d) cell_vkb_candidate_pane_g3

0xbdd4,	// (0x00062328) cell_vkb_candidate_pane_g4_ParamLimits

0xbdd4,	// (0x00062328) cell_vkb_candidate_pane_g4

0xbecd,	// (0x00062421) cell_app_pane_cp2_g1_ParamLimits

0xbecd,	// (0x00062421) cell_app_pane_cp2_g1

0xbeeb,	// (0x0006243f) cell_app_pane_cp2_g2_ParamLimits

0xbeeb,	// (0x0006243f) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x000660fa) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x000660fa) cell_app_pane_cp2_g

0xbef7,	// (0x0006244b) cell_app_pane_cp2_t1_ParamLimits

0xbef7,	// (0x0006244b) cell_app_pane_cp2_t1

0xf142,	// (0x00065696) grid_highlight_pane_cp1_ParamLimits

0xf142,	// (0x00065696) grid_highlight_pane_cp1

0x7f1a,	// (0x0005e46e) cell_hwr_candidate_pane_cp1_ParamLimits

0x7f1a,	// (0x0005e46e) cell_hwr_candidate_pane_cp1

0x7ecd,	// (0x0005e421) fep_hwr_candidate_drop_down_list_pane_g1

0x7f39,	// (0x0005e48d) fep_hwr_candidate_drop_down_list_pane_g2

0x7f46,	// (0x0005e49a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x000660ff) fep_hwr_candidate_drop_down_list_pane_g

0x7f53,	// (0x0005e4a7) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f5c,	// (0x0005e4b0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f5c,	// (0x0005e4b0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7f69,	// (0x0005e4bd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f69,	// (0x0005e4bd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7f76,	// (0x0005e4ca) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f76,	// (0x0005e4ca) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f83,	// (0x0005e4d7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f83,	// (0x0005e4d7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f9e,	// (0x0005e4f2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f9e,	// (0x0005e4f2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7fb9,	// (0x0005e50d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7fb9,	// (0x0005e50d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7fd4,	// (0x0005e528) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7fd4,	// (0x0005e528) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7fef,	// (0x0005e543) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fef,	// (0x0005e543) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x00066106) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x00066106) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbf09,	// (0x0006245d) cell_vkb_candidate_pane_cp1_ParamLimits

0xbf09,	// (0x0006245d) cell_vkb_candidate_pane_cp1

0xba81,	// (0x00061fd5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xba81,	// (0x00061fd5) fep_vkb_candidate_drop_down_list_pane_g1

0xbf29,	// (0x0006247d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbf29,	// (0x0006247d) fep_vkb_candidate_drop_down_list_pane_g2

0xbf36,	// (0x0006248a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbf36,	// (0x0006248a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00066117) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x00066117) fep_vkb_candidate_drop_down_list_pane_g

0xbf43,	// (0x00062497) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbf43,	// (0x00062497) fep_vkb_candidate_drop_down_list_scroll_pane

0xbf50,	// (0x000624a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbf50,	// (0x000624a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbf5d,	// (0x000624b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbf5d,	// (0x000624b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbf69,	// (0x000624bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf69,	// (0x000624bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbf75,	// (0x000624c9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbf75,	// (0x000624c9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbf96,	// (0x000624ea) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbf96,	// (0x000624ea) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbfb7,	// (0x0006250b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbfb7,	// (0x0006250b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbfd8,	// (0x0006252c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbfd8,	// (0x0006252c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbff9,	// (0x0006254d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbff9,	// (0x0006254d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0006611e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0006611e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x55b0,	// (0x0005bb04) title_pane_g1_ParamLimits

0x55bd,	// (0x0005bb11) title_pane_g2_ParamLimits

0xf529,	// (0x00065a7d) title_pane_g_ParamLimits

0x1250,	// (0x000577a4) aid_call2_pane

0x1248,	// (0x0005779c) aid_call_pane

0x1258,	// (0x000577ac) popup_clock_analogue_window_g1

0x1258,	// (0x000577ac) popup_clock_analogue_window_g2

0x6567,	// (0x0005cabb) popup_clock_analogue_window_g3

0x6570,	// (0x0005cac4) popup_clock_analogue_window_g4

0xe08b,	// (0x000645df) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00065c22) popup_clock_analogue_window_g

0x6578,	// (0x0005cacc) popup_clock_analogue_window_t1

0x65c6,	// (0x0005cb1a) clock_digital_number_pane_ParamLimits

0x65c6,	// (0x0005cb1a) clock_digital_number_pane

0x65d2,	// (0x0005cb26) clock_digital_number_pane_cp02_ParamLimits

0x65d2,	// (0x0005cb26) clock_digital_number_pane_cp02

0x65de,	// (0x0005cb32) clock_digital_number_pane_cp03_ParamLimits

0x65de,	// (0x0005cb32) clock_digital_number_pane_cp03

0x65ea,	// (0x0005cb3e) clock_digital_number_pane_cp04_ParamLimits

0x65ea,	// (0x0005cb3e) clock_digital_number_pane_cp04

0x65f6,	// (0x0005cb4a) clock_digital_separator_pane_ParamLimits

0x65f6,	// (0x0005cb4a) clock_digital_separator_pane

0x6602,	// (0x0005cb56) popup_clock_digital_window_t1_ParamLimits

0x6602,	// (0x0005cb56) popup_clock_digital_window_t1

0xe08b,	// (0x000645df) clock_digital_number_pane_g1

0xe08b,	// (0x000645df) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00065c2d) clock_digital_number_pane_g

0xe08b,	// (0x000645df) clock_digital_separator_pane_g1

0xe08b,	// (0x000645df) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00065c2d) clock_digital_separator_pane_g

0x7334,	// (0x0005d888) aid_fill_nsta_ParamLimits

0x7480,	// (0x0005d9d4) indicator_nsta_pane_ParamLimits

0x75f9,	// (0x0005db4d) popup_clock_analogue_window

0x75f9,	// (0x0005db4d) popup_clock_digital_window

0xb109,	// (0x0006165d) grid_indicator_nsta_pane_ParamLimits

0xb132,	// (0x00061686) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x00065fe4) clock_nsta_pane_t

0x6492,	// (0x0005c9e6) aid_size_max_handle

0x649c,	// (0x0005c9f0) aid_size_min_handle

0x16b6,	// (0x00057c0a) editor_scroll_pane

0xc014,	// (0x00062568) ex_editor_pane

0xf274,	// (0x000657c8) scroll_pane_cp13

0xf0ea,	// (0x0006563e) scroll_pane_cp14

0x1287,	// (0x000577db) scroll_pane_cp36

0x659a,	// (0x0005caee) list_single_graphic_hl_pane_cp2_ParamLimits

0x659a,	// (0x0005caee) list_single_graphic_hl_pane_cp2

0x7a70,	// (0x0005dfc4) list_single_graphic_hl_pane_ParamLimits

0x7a70,	// (0x0005dfc4) list_single_graphic_hl_pane

0x800a,	// (0x0005e55e) aid_size_min_hl_cp1

0xc01c,	// (0x00062570) list_highlight_pane_cp34_ParamLimits

0xc01c,	// (0x00062570) list_highlight_pane_cp34

0xc02d,	// (0x00062581) list_single_graphic_hl_pane_g1_ParamLimits

0xc02d,	// (0x00062581) list_single_graphic_hl_pane_g1

0x8013,	// (0x0005e567) list_single_graphic_hl_pane_g2_ParamLimits

0x8013,	// (0x0005e567) list_single_graphic_hl_pane_g2

0x8013,	// (0x0005e567) list_single_graphic_hl_pane_g3_ParamLimits

0x8013,	// (0x0005e567) list_single_graphic_hl_pane_g3

0x801f,	// (0x0005e573) list_single_graphic_hl_pane_g4_ParamLimits

0x801f,	// (0x0005e573) list_single_graphic_hl_pane_g4

0x802b,	// (0x0005e57f) list_single_graphic_hl_pane_g5_ParamLimits

0x802b,	// (0x0005e57f) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0006612f) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0006612f) list_single_graphic_hl_pane_g

0x803f,	// (0x0005e593) list_single_graphic_hl_pane_t1_ParamLimits

0x803f,	// (0x0005e593) list_single_graphic_hl_pane_t1

0xc03a,	// (0x0006258e) aid_size_min_hl_cp2

0xc043,	// (0x00062597) list_highlight_pane_cp34_cp2_ParamLimits

0xc043,	// (0x00062597) list_highlight_pane_cp34_cp2

0xc02d,	// (0x00062581) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc02d,	// (0x00062581) list_single_graphic_hl_pane_g1_cp2

0xc050,	// (0x000625a4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc050,	// (0x000625a4) list_single_graphic_hl_pane_g2_cp2

0xc05c,	// (0x000625b0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc05c,	// (0x000625b0) list_single_graphic_hl_pane_g3_cp2

0x11e1,	// (0x00057735) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x11e1,	// (0x00057735) list_single_graphic_hl_pane_g4_cp2

0xc06a,	// (0x000625be) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc06a,	// (0x000625be) list_single_graphic_hl_pane_g5_cp2

0x6c14,	// (0x0005d168) control_pane_g4_ParamLimits

0x6c14,	// (0x0005d168) control_pane_g4

0xf51d,	// (0x00065a71) bg_popup_sub_pane_cp10_ParamLimits

0xb81b,	// (0x00061d6f) list_choice_list_pane_ParamLimits

0xb82a,	// (0x00061d7e) scroll_pane_cp23

0xe21b,	// (0x0006476f) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe39,	// (0x0006238d) list_preview_fixed_pane_ParamLimits

0xbe4f,	// (0x000623a3) list_preview_fixed_pane_cp_ParamLimits

0xbe4f,	// (0x000623a3) list_preview_fixed_pane_cp

0xbe5b,	// (0x000623af) popup_preview_fixed_window_g1_ParamLimits

0xbe5b,	// (0x000623af) popup_preview_fixed_window_g1

0xbe67,	// (0x000623bb) popup_preview_fixed_window_g2_ParamLimits

0xbe67,	// (0x000623bb) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x000660b7) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x000660b7) popup_preview_fixed_window_g

0x636e,	// (0x0005c8c2) aid_navi_side_left_pane_ParamLimits

0x6383,	// (0x0005c8d7) aid_navi_side_right_pane_ParamLimits

0x639b,	// (0x0005c8ef) navi_icon_pane_stacon_ParamLimits

0x63af,	// (0x0005c903) navi_navi_pane_stacon_ParamLimits

0x639b,	// (0x0005c8ef) navi_text_pane_stacon_ParamLimits

0x5365,	// (0x0005b8b9) main_text_info_pane

0xc094,	// (0x000625e8) listscroll_text_info_pane

0xc09c,	// (0x000625f0) list_text_info_pane_ParamLimits

0xc09c,	// (0x000625f0) list_text_info_pane

0xc0ab,	// (0x000625ff) scroll_pane_cp24_ParamLimits

0xc0ab,	// (0x000625ff) scroll_pane_cp24

0xc0c9,	// (0x0006261d) list_text_info_pane_t1_ParamLimits

0xc0c9,	// (0x0006261d) list_text_info_pane_t1

0x6dbb,	// (0x0005d30f) popup_fast_swap2_window_ParamLimits

0x6dbb,	// (0x0005d30f) popup_fast_swap2_window

0xc0fd,	// (0x00062651) aid_size_cell_fast2

0xe081,	// (0x000645d5) bg_popup_window_pane_cp17

0xc107,	// (0x0006265b) heading_pane_cp2

0xc10f,	// (0x00062663) listscroll_fast2_pane

0xc117,	// (0x0006266b) grid_fast2_pane

0xc121,	// (0x00062675) listscroll_fast2_pane_g1

0xc129,	// (0x0006267d) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0006613a) listscroll_fast2_pane_g

0xf274,	// (0x000657c8) scroll_pane_cp26

0xc133,	// (0x00062687) cell_fast2_pane_ParamLimits

0xc133,	// (0x00062687) cell_fast2_pane

0xc148,	// (0x0006269c) cell_fast2_pane_g1

0xc151,	// (0x000626a5) cell_fast2_pane_g2

0xc15a,	// (0x000626ae) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0006613f) cell_fast2_pane_g

0xf021,	// (0x00065575) grid_highlight_pane_cp9

0x6d83,	// (0x0005d2d7) main_eswt_pane_ParamLimits

0x6d83,	// (0x0005d2d7) main_eswt_pane

0xc0c0,	// (0x00062614) list_single_text_info_pane

0xc162,	// (0x000626b6) eswt_ctrl_button_pane

0xc162,	// (0x000626b6) eswt_ctrl_canvas_pane

0xc16a,	// (0x000626be) eswt_ctrl_combo_pane

0xc162,	// (0x000626b6) eswt_ctrl_default_pane

0xc162,	// (0x000626b6) eswt_ctrl_label_pane

0xc172,	// (0x000626c6) eswt_ctrl_wait_pane

0xc17a,	// (0x000626ce) eswt_shell_pane

0xe081,	// (0x000645d5) listscroll_eswt_app_pane

0xc19a,	// (0x000626ee) popup_eswt_tasktip_window_ParamLimits

0xc19a,	// (0x000626ee) popup_eswt_tasktip_window

0x90c7,	// (0x0005f61b) bg_popup_window_pane_cp18

0xc1b3,	// (0x00062707) eswt_control_pane_g1_ParamLimits

0xc1b3,	// (0x00062707) eswt_control_pane_g1

0xc1c0,	// (0x00062714) eswt_control_pane_g2_ParamLimits

0xc1c0,	// (0x00062714) eswt_control_pane_g2

0xc1cd,	// (0x00062721) eswt_control_pane_g3_ParamLimits

0xc1cd,	// (0x00062721) eswt_control_pane_g3

0xc1da,	// (0x0006272e) eswt_control_pane_g4_ParamLimits

0xc1da,	// (0x0006272e) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x00066146) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x00066146) eswt_control_pane_g

0xf142,	// (0x00065696) bg_button_pane_ParamLimits

0xf142,	// (0x00065696) bg_button_pane

0xf036,	// (0x0006558a) common_borders_pane_copy2_ParamLimits

0xf036,	// (0x0006558a) common_borders_pane_copy2

0xc1e7,	// (0x0006273b) control_button_pane_g1_ParamLimits

0xc1e7,	// (0x0006273b) control_button_pane_g1

0xc1f3,	// (0x00062747) control_button_pane_g2_ParamLimits

0xc1f3,	// (0x00062747) control_button_pane_g2

0xc1ff,	// (0x00062753) control_button_pane_g3_ParamLimits

0xc1ff,	// (0x00062753) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0006614f) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0006614f) control_button_pane_g

0xc213,	// (0x00062767) control_button_pane_t1

0xc221,	// (0x00062775) control_button_pane_t2

0x0001,

0xfc02,	// (0x00066156) control_button_pane_t

0x903b,	// (0x0005f58f) bg_button_pane_g1

0x904b,	// (0x0005f59f) bg_button_pane_g2

0x9043,	// (0x0005f597) bg_button_pane_g3

0x905b,	// (0x0005f5af) bg_button_pane_g4

0x9053,	// (0x0005f5a7) bg_button_pane_g5

0x9063,	// (0x0005f5b7) bg_button_pane_g6

0x906b,	// (0x0005f5bf) bg_button_pane_g7

0x907b,	// (0x0005f5cf) bg_button_pane_g8

0x9073,	// (0x0005f5c7) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00065d90) bg_button_pane_g

0xb7d6,	// (0x00061d2a) common_borders_pane_ParamLimits

0xb7d6,	// (0x00061d2a) common_borders_pane

0xc1b3,	// (0x00062707) eswt_control_pane_g1_copy1_ParamLimits

0xc1b3,	// (0x00062707) eswt_control_pane_g1_copy1

0xc1c0,	// (0x00062714) eswt_control_pane_g2_copy1_ParamLimits

0xc1c0,	// (0x00062714) eswt_control_pane_g2_copy1

0xc1cd,	// (0x00062721) eswt_control_pane_g3_copy1_ParamLimits

0xc1cd,	// (0x00062721) eswt_control_pane_g3_copy1

0xc1da,	// (0x0006272e) eswt_control_pane_g4_copy1_ParamLimits

0xc1da,	// (0x0006272e) eswt_control_pane_g4_copy1

0xb811,	// (0x00061d65) bg_eswt_ctrl_canvas_pane_g1

0xb7d6,	// (0x00061d2a) common_borders_pane_cp2_ParamLimits

0xb7d6,	// (0x00061d2a) common_borders_pane_cp2

0xb7d6,	// (0x00061d2a) common_borders_pane_cp3_ParamLimits

0xb7d6,	// (0x00061d2a) common_borders_pane_cp3

0xc22f,	// (0x00062783) separator_horizontal_pane

0xc237,	// (0x0006278b) separator_vertical_pane

0xc1b3,	// (0x00062707) eswt_control_pane_g1_copy2_ParamLimits

0xc1b3,	// (0x00062707) eswt_control_pane_g1_copy2

0xc1c0,	// (0x00062714) eswt_control_pane_g2_copy2_ParamLimits

0xc1c0,	// (0x00062714) eswt_control_pane_g2_copy2

0xc1cd,	// (0x00062721) eswt_control_pane_g3_copy2_ParamLimits

0xc1cd,	// (0x00062721) eswt_control_pane_g3_copy2

0xc1da,	// (0x0006272e) eswt_control_pane_g4_copy2_ParamLimits

0xc1da,	// (0x0006272e) eswt_control_pane_g4_copy2

0xe081,	// (0x000645d5) common_borders_pane_cp4

0xc240,	// (0x00062794) separator_horizontal_pane_g1

0xc249,	// (0x0006279d) separator_horizontal_pane_g2

0xc252,	// (0x000627a6) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0006615b) separator_horizontal_pane_g

0xc1b3,	// (0x00062707) eswt_control_pane_g1_copy3_ParamLimits

0xc1b3,	// (0x00062707) eswt_control_pane_g1_copy3

0xc1c0,	// (0x00062714) eswt_control_pane_g2_copy3_ParamLimits

0xc1c0,	// (0x00062714) eswt_control_pane_g2_copy3

0xc1cd,	// (0x00062721) eswt_control_pane_g3_copy3_ParamLimits

0xc1cd,	// (0x00062721) eswt_control_pane_g3_copy3

0xc1da,	// (0x0006272e) eswt_control_pane_g4_copy3_ParamLimits

0xc1da,	// (0x0006272e) eswt_control_pane_g4_copy3

0xe081,	// (0x000645d5) common_borders_pane_cp5

0xc25b,	// (0x000627af) separator_vertical_pane_g1

0xc264,	// (0x000627b8) separator_vertical_pane_g2

0xc26d,	// (0x000627c1) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x00066162) separator_vertical_pane_g

0xc1b3,	// (0x00062707) eswt_control_pane_g1_copy4_ParamLimits

0xc1b3,	// (0x00062707) eswt_control_pane_g1_copy4

0xc1c0,	// (0x00062714) eswt_control_pane_g2_copy4_ParamLimits

0xc1c0,	// (0x00062714) eswt_control_pane_g2_copy4

0xc1cd,	// (0x00062721) eswt_control_pane_g3_copy4_ParamLimits

0xc1cd,	// (0x00062721) eswt_control_pane_g3_copy4

0xc1da,	// (0x0006272e) eswt_control_pane_g4_copy4_ParamLimits

0xc1da,	// (0x0006272e) eswt_control_pane_g4_copy4

0xc276,	// (0x000627ca) eswt_ctrl_combo_button_pane

0xc27e,	// (0x000627d2) eswt_ctrl_input_pane

0xc286,	// (0x000627da) popup_choice_list_window_cp70

0xc28e,	// (0x000627e2) eswt_ctrl_input_pane_t1

0xe081,	// (0x000645d5) input_focus_pane_cp70

0xb7d6,	// (0x00061d2a) bg_button_pane_cp70_ParamLimits

0xb7d6,	// (0x00061d2a) bg_button_pane_cp70

0xc29c,	// (0x000627f0) eswt_ctrl_combo_button_pane_g1

0xc2a4,	// (0x000627f8) wait_bar_pane_cp70

0x90c7,	// (0x0005f61b) bg_popup_window_pane_cp70_ParamLimits

0x90c7,	// (0x0005f61b) bg_popup_window_pane_cp70

0xc2ac,	// (0x00062800) popup_eswt_tasktip_window_t1

0xc2c2,	// (0x00062816) wait_bar_pane_cp71_ParamLimits

0xc2c2,	// (0x00062816) wait_bar_pane_cp71

0xc2ce,	// (0x00062822) grid_eswt_app_pane

0xf45b,	// (0x000659af) scroll_pane_cp70

0xc2d7,	// (0x0006282b) cell_eswt_app_pane_ParamLimits

0xc2d7,	// (0x0006282b) cell_eswt_app_pane

0xc307,	// (0x0006285b) cell_eswt_app_pane_g1_ParamLimits

0xc307,	// (0x0006285b) cell_eswt_app_pane_g1

0xc336,	// (0x0006288a) cell_eswt_app_pane_g2_ParamLimits

0xc336,	// (0x0006288a) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x00066169) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x00066169) cell_eswt_app_pane_g

0xc35a,	// (0x000628ae) cell_eswt_app_pane_t1_ParamLimits

0xc35a,	// (0x000628ae) cell_eswt_app_pane_t1

0xc38c,	// (0x000628e0) grid_highlight_pane_cp70_ParamLimits

0xc38c,	// (0x000628e0) grid_highlight_pane_cp70

0x15bc,	// (0x00057b10) set_content_pane_g1

0x6baa,	// (0x0005d0fe) status_small_volume_pane

0x8055,	// (0x0005e5a9) status_small_volume_pane_g1

0x805d,	// (0x0005e5b1) volume_small2_pane

0x8066,	// (0x0005e5ba) volume_small2_pane_g1

0x806f,	// (0x0005e5c3) volume_small2_pane_g2

0x8078,	// (0x0005e5cc) volume_small2_pane_g3

0x8081,	// (0x0005e5d5) volume_small2_pane_g4

0x808a,	// (0x0005e5de) volume_small2_pane_g5

0x8093,	// (0x0005e5e7) volume_small2_pane_g6

0x809c,	// (0x0005e5f0) volume_small2_pane_g7

0x80a5,	// (0x0005e5f9) volume_small2_pane_g8

0x80ae,	// (0x0005e602) volume_small2_pane_g9

0x80b7,	// (0x0005e60b) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0006616e) volume_small2_pane_g

0xbbc9,	// (0x0006211d) fep_vkb_top_text_pane_g1_ParamLimits

0xbbe4,	// (0x00062138) fep_vkb_top_text_pane_t1_ParamLimits

0xbe73,	// (0x000623c7) popup_preview_fixed_window_g3_ParamLimits

0xbe73,	// (0x000623c7) popup_preview_fixed_window_g3

0x726a,	// (0x0005d7be) popup_toolbar_trans_pane

0xa405,	// (0x00060959) aid_height_set_list_ParamLimits

0xa416,	// (0x0006096a) aid_size_parent_ParamLimits

0xf51d,	// (0x00065a71) list_highlight_pane_cp2_ParamLimits

0x15bc,	// (0x00057b10) set_content_pane_g1_ParamLimits

0x7a8e,	// (0x0005dfe2) list_single_image_pane_ParamLimits

0x7a8e,	// (0x0005dfe2) list_single_image_pane

0xc398,	// (0x000628ec) aid_size_cell_image_ParamLimits

0xc398,	// (0x000628ec) aid_size_cell_image

0xc3a5,	// (0x000628f9) grid_single_image_pane_ParamLimits

0xc3a5,	// (0x000628f9) grid_single_image_pane

0x249f,	// (0x000589f3) list_single_image_pane_g1_ParamLimits

0x249f,	// (0x000589f3) list_single_image_pane_g1

0xbea1,	// (0x000623f5) list_single_image_pane_g2_ParamLimits

0xbea1,	// (0x000623f5) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x00066183) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x00066183) list_single_image_pane_g

0xc3b1,	// (0x00062905) list_single_image_pane_t1_ParamLimits

0xc3b1,	// (0x00062905) list_single_image_pane_t1

0xc3c7,	// (0x0006291b) cell_image_list_pane_ParamLimits

0xc3c7,	// (0x0006291b) cell_image_list_pane

0xc3db,	// (0x0006292f) cell_image_list_pane_g1

0xc3e4,	// (0x00062938) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x00066188) cell_image_list_pane_g

0xc3ed,	// (0x00062941) aid_size_cell_tb_trans_pane

0xf142,	// (0x00065696) bg_tb_trans_pane

0xc3ff,	// (0x00062953) grid_tb_trans_pane

0x903b,	// (0x0005f58f) bg_tb_trans_pane_g1

0x904b,	// (0x0005f59f) bg_tb_trans_pane_g2

0x9043,	// (0x0005f597) bg_tb_trans_pane_g3

0x905b,	// (0x0005f5af) bg_tb_trans_pane_g4

0x9053,	// (0x0005f5a7) bg_tb_trans_pane_g5

0x907b,	// (0x0005f5cf) bg_tb_trans_pane_g6

0x9073,	// (0x0005f5c7) bg_tb_trans_pane_g7

0x9063,	// (0x0005f5b7) bg_tb_trans_pane_g8

0x906b,	// (0x0005f5bf) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0006618d) bg_tb_trans_pane_g

0xc413,	// (0x00062967) cell_toolbar_trans_pane_ParamLimits

0xc413,	// (0x00062967) cell_toolbar_trans_pane

0xb811,	// (0x00061d65) cell_toolbar_trans_pane_g1

0xb307,	// (0x0006185b) list_form2_midp_pane_t1

0xb315,	// (0x00061869) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0006602a) list_form2_midp_pane_t

0xb323,	// (0x00061877) scroll_pane_cp51_ParamLimits

0xb4df,	// (0x00061a33) form2_midp_wait_pane_g1

0xb4e8,	// (0x00061a3c) form2_midp_wait_pane_g2

0xb4f1,	// (0x00061a45) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0006603f) form2_midp_wait_pane_g

0xe0e3,	// (0x00064637) list_highlight_pane_cp21_ParamLimits

0xb539,	// (0x00061a8d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb548,	// (0x00061a9c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa629,	// (0x00060b7d) list_single_2graphic_im_pane_ParamLimits

0xa629,	// (0x00060b7d) list_single_2graphic_im_pane

0xc439,	// (0x0006298d) list_single_2graphic_im_pane_g1_ParamLimits

0xc439,	// (0x0006298d) list_single_2graphic_im_pane_g1

0xc44a,	// (0x0006299e) list_single_2graphic_im_pane_g2_ParamLimits

0xc44a,	// (0x0006299e) list_single_2graphic_im_pane_g2

0xc456,	// (0x000629aa) list_single_2graphic_im_pane_g3_ParamLimits

0xc456,	// (0x000629aa) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x000661a0) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x000661a0) list_single_2graphic_im_pane_g

0xc476,	// (0x000629ca) list_single_2graphic_im_pane_t1_ParamLimits

0xc476,	// (0x000629ca) list_single_2graphic_im_pane_t1

0xbe7f,	// (0x000623d3) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe7f,	// (0x000623d3) list_single_graphic_2heading_pane_fp

0x3efb,	// (0x0005a44f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3efb,	// (0x0005a44f) list_single_graphic_2heading_pane_fp_g1

0xbe95,	// (0x000623e9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe95,	// (0x000623e9) list_single_graphic_2heading_pane_fp_g2

0x249f,	// (0x000589f3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x249f,	// (0x000589f3) list_single_graphic_2heading_pane_fp_g3

0xbea1,	// (0x000623f5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbea1,	// (0x000623f5) list_single_graphic_2heading_pane_fp_g4

0xbeb5,	// (0x00062409) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbeb5,	// (0x00062409) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x000660c7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x000660c7) list_single_graphic_2heading_pane_fp_g

0x4019,	// (0x0005a56d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4019,	// (0x0005a56d) list_single_graphic_2heading_pane_fp_t1

0x3f33,	// (0x0005a487) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3f33,	// (0x0005a487) list_single_graphic_2heading_pane_fp_t2

0x402f,	// (0x0005a583) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x402f,	// (0x0005a583) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x000661a9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x000661a9) list_single_graphic_2heading_pane_fp_t

0xb89d,	// (0x00061df1) fep_hwr_write_pane_g5_ParamLimits

0xb89d,	// (0x00061df1) fep_hwr_write_pane_g5

0xb8a9,	// (0x00061dfd) fep_hwr_write_pane_g6_ParamLimits

0xb8a9,	// (0x00061dfd) fep_hwr_write_pane_g6

0xc17a,	// (0x000626ce) eswt_shell_pane_ParamLimits

0x90c7,	// (0x0005f61b) bg_popup_window_pane_cp18_ParamLimits

0xc1ab,	// (0x000626ff) heading_pane_cp70

0xc2ac,	// (0x00062800) popup_eswt_tasktip_window_t1_ParamLimits

0x7389,	// (0x0005d8dd) aid_touch_tab_arrow_left

0x7398,	// (0x0005d8ec) aid_touch_tab_arrow_right

0x55ce,	// (0x0005bb22) title_pane_g3_ParamLimits

0x55ce,	// (0x0005bb22) title_pane_g3

0xf10a,	// (0x0006565e) set_value_pane_g1

0x726a,	// (0x0005d7be) popup_toolbar_trans_pane_ParamLimits

0xc3ed,	// (0x00062941) aid_size_cell_tb_trans_pane_ParamLimits

0xf142,	// (0x00065696) bg_tb_trans_pane_ParamLimits

0xc3ff,	// (0x00062953) grid_tb_trans_pane_ParamLimits

0xe21b,	// (0x0006476f) cont_note_pane_ParamLimits

0xe21b,	// (0x0006476f) cont_note_pane

0xf036,	// (0x0006558a) cont_snote2_single_text_pane_ParamLimits

0xf036,	// (0x0006558a) cont_snote2_single_text_pane

0xf036,	// (0x0006558a) cont_snote2_single_graphic_pane_ParamLimits

0xf036,	// (0x0006558a) cont_snote2_single_graphic_pane

0x96e1,	// (0x0005fc35) cont_note_wait_pane_ParamLimits

0x96e1,	// (0x0005fc35) cont_note_wait_pane

0x96e1,	// (0x0005fc35) cont_note_image_pane_ParamLimits

0x96e1,	// (0x0005fc35) cont_note_image_pane

0xc4a7,	// (0x000629fb) popup_note2_window_g1_ParamLimits

0xc4a7,	// (0x000629fb) popup_note2_window_g1

0xc4d8,	// (0x00062a2c) popup_note2_window_t1_ParamLimits

0xc4d8,	// (0x00062a2c) popup_note2_window_t1

0xc51d,	// (0x00062a71) popup_note2_window_t2_ParamLimits

0xc51d,	// (0x00062a71) popup_note2_window_t2

0xc562,	// (0x00062ab6) popup_note2_window_t3_ParamLimits

0xc562,	// (0x00062ab6) popup_note2_window_t3

0xc5a7,	// (0x00062afb) popup_note2_window_t4_ParamLimits

0xc5a7,	// (0x00062afb) popup_note2_window_t4

0xe29f,	// (0x000647f3) popup_note2_window_t5_ParamLimits

0xe29f,	// (0x000647f3) popup_note2_window_t5

0x0004,

0xfc61,	// (0x000661b5) popup_note2_window_t_ParamLimits

0xfc61,	// (0x000661b5) popup_note2_window_t

0xc5d6,	// (0x00062b2a) popup_note2_image_window_g1_ParamLimits

0xc5d6,	// (0x00062b2a) popup_note2_image_window_g1

0xc5e2,	// (0x00062b36) popup_note2_image_window_g2_ParamLimits

0xc5e2,	// (0x00062b36) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x000661c0) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x000661c0) popup_note2_image_window_g

0xc5f4,	// (0x00062b48) popup_note2_image_window_t1_ParamLimits

0xc5f4,	// (0x00062b48) popup_note2_image_window_t1

0xc60c,	// (0x00062b60) popup_note2_image_window_t2_ParamLimits

0xc60c,	// (0x00062b60) popup_note2_image_window_t2

0xc624,	// (0x00062b78) popup_note2_image_window_t3_ParamLimits

0xc624,	// (0x00062b78) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x000661c5) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x000661c5) popup_note2_image_window_t

0x96ef,	// (0x0005fc43) popup_note2_wait_window_g1_ParamLimits

0x96ef,	// (0x0005fc43) popup_note2_wait_window_g1

0x96fb,	// (0x0005fc4f) popup_note2_wait_window_g2_ParamLimits

0x96fb,	// (0x0005fc4f) popup_note2_wait_window_g2

0x9707,	// (0x0005fc5b) popup_note2_wait_window_g3_ParamLimits

0x9707,	// (0x0005fc5b) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x00065d72) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x00065d72) popup_note2_wait_window_g

0xc640,	// (0x00062b94) popup_note2_wait_window_t1_ParamLimits

0xc640,	// (0x00062b94) popup_note2_wait_window_t1

0xc65e,	// (0x00062bb2) popup_note2_wait_window_t2_ParamLimits

0xc65e,	// (0x00062bb2) popup_note2_wait_window_t2

0xc67c,	// (0x00062bd0) popup_note2_wait_window_t3_ParamLimits

0xc67c,	// (0x00062bd0) popup_note2_wait_window_t3

0xc68e,	// (0x00062be2) popup_note2_wait_window_t4_ParamLimits

0xc68e,	// (0x00062be2) popup_note2_wait_window_t4

0x0003,

0xfc78,	// (0x000661cc) popup_note2_wait_window_t_ParamLimits

0xfc78,	// (0x000661cc) popup_note2_wait_window_t

0xc6a0,	// (0x00062bf4) wait_bar2_pane_ParamLimits

0xc6a0,	// (0x00062bf4) wait_bar2_pane

0xc6b8,	// (0x00062c0c) popup_snote2_single_text_window_g1_ParamLimits

0xc6b8,	// (0x00062c0c) popup_snote2_single_text_window_g1

0xc6e0,	// (0x00062c34) popup_snote2_single_text_window_t1_ParamLimits

0xc6e0,	// (0x00062c34) popup_snote2_single_text_window_t1

0xc72c,	// (0x00062c80) popup_snote2_single_text_window_t2_ParamLimits

0xc72c,	// (0x00062c80) popup_snote2_single_text_window_t2

0xc778,	// (0x00062ccc) popup_snote2_single_text_window_t3_ParamLimits

0xc778,	// (0x00062ccc) popup_snote2_single_text_window_t3

0xc7b9,	// (0x00062d0d) popup_snote2_single_text_window_t4_ParamLimits

0xc7b9,	// (0x00062d0d) popup_snote2_single_text_window_t4

0xc7ef,	// (0x00062d43) popup_snote2_single_text_window_t5_ParamLimits

0xc7ef,	// (0x00062d43) popup_snote2_single_text_window_t5

0x0004,

0xfc81,	// (0x000661d5) popup_snote2_single_text_window_t_ParamLimits

0xfc81,	// (0x000661d5) popup_snote2_single_text_window_t

0xc81a,	// (0x00062d6e) popup_snote2_single_graphic_window_g1_ParamLimits

0xc81a,	// (0x00062d6e) popup_snote2_single_graphic_window_g1

0xc842,	// (0x00062d96) popup_snote2_single_graphic_window_g2_ParamLimits

0xc842,	// (0x00062d96) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8c,	// (0x000661e0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8c,	// (0x000661e0) popup_snote2_single_graphic_window_g

0xc86a,	// (0x00062dbe) popup_snote2_single_graphic_window_t1_ParamLimits

0xc86a,	// (0x00062dbe) popup_snote2_single_graphic_window_t1

0xc8b6,	// (0x00062e0a) popup_snote2_single_graphic_window_t2_ParamLimits

0xc8b6,	// (0x00062e0a) popup_snote2_single_graphic_window_t2

0xc778,	// (0x00062ccc) popup_snote2_single_graphic_window_t3_ParamLimits

0xc778,	// (0x00062ccc) popup_snote2_single_graphic_window_t3

0xc7b9,	// (0x00062d0d) popup_snote2_single_graphic_window_t4_ParamLimits

0xc7b9,	// (0x00062d0d) popup_snote2_single_graphic_window_t4

0xc7ef,	// (0x00062d43) popup_snote2_single_graphic_window_t5_ParamLimits

0xc7ef,	// (0x00062d43) popup_snote2_single_graphic_window_t5

0x0004,

0xfc91,	// (0x000661e5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc91,	// (0x000661e5) popup_snote2_single_graphic_window_t

0xb1e0,	// (0x00061734) clock_nsta_pane_cp2_t1

0xb1e0,	// (0x00061734) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x00066000) clock_nsta_pane_cp2_t

0x3ac9,	// (0x0005a01d) form_field_data_wide_pane_g1_ParamLimits

0xf150,	// (0x000656a4) form_field_data_wide_pane_g2_ParamLimits

0xf150,	// (0x000656a4) form_field_data_wide_pane_g2

0xf15c,	// (0x000656b0) form_field_data_wide_pane_g3_ParamLimits

0xf15c,	// (0x000656b0) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00065ba5) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00065ba5) form_field_data_wide_pane_g

0xb0bc,	// (0x00061610) grid_touch_3_pane_ParamLimits

0xb0bc,	// (0x00061610) grid_touch_3_pane

0xc902,	// (0x00062e56) cell_touch_3_pane_ParamLimits

0xc902,	// (0x00062e56) cell_touch_3_pane

0xb811,	// (0x00061d65) cell_touch_3_pane_g1

0xb811,	// (0x00061d65) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x00066085) cell_touch_3_pane_g

0xe2d1,	// (0x00064825) cont_query_data_pane

0xe2d9,	// (0x0006482d) cont_query_data_pane_cp1

0xc930,	// (0x00062e84) button_value_adjust_pane_cp7

0xc938,	// (0x00062e8c) query_popup_pane_cp3

0x12b9,	// (0x0005780d) bg_popup_sub_pane_cp22_ParamLimits

0x667c,	// (0x0005cbd0) navi_navi_volume_pane_cp2

0x6694,	// (0x0005cbe8) popup_side_volume_key_window_g2

0x66a0,	// (0x0005cbf4) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00065c3b) popup_side_volume_key_window_g

0x66ba,	// (0x0005cc0e) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00065c42) popup_side_volume_key_window_t

0x6968,	// (0x0005cebc) popup_side_volume_key_window_ParamLimits

0x5d5d,	// (0x0005c2b1) list_double_graphic_pane_g4_ParamLimits

0x5d5d,	// (0x0005c2b1) list_double_graphic_pane_g4

0xa668,	// (0x00060bbc) list_single_2heading_msg_pane_ParamLimits

0xa668,	// (0x00060bbc) list_single_2heading_msg_pane

0xb708,	// (0x00061c5c) list_single_2heading_msg_pane_g1_ParamLimits

0xb708,	// (0x00061c5c) list_single_2heading_msg_pane_g1

0x5b9f,	// (0x0005c0f3) list_single_2heading_msg_pane_g2_ParamLimits

0x5b9f,	// (0x0005c0f3) list_single_2heading_msg_pane_g2

0xb714,	// (0x00061c68) list_single_2heading_msg_pane_g3_ParamLimits

0xb714,	// (0x00061c68) list_single_2heading_msg_pane_g3

0xb720,	// (0x00061c74) list_single_2heading_msg_pane_g4_ParamLimits

0xb720,	// (0x00061c74) list_single_2heading_msg_pane_g4

0x0003,

0xfc9c,	// (0x000661f0) list_single_2heading_msg_pane_g_ParamLimits

0xfc9c,	// (0x000661f0) list_single_2heading_msg_pane_g

0x80c0,	// (0x0005e614) list_single_2heading_msg_pane_t1_ParamLimits

0x80c0,	// (0x0005e614) list_single_2heading_msg_pane_t1

0x80e8,	// (0x0005e63c) list_single_2heading_msg_pane_t2_ParamLimits

0x80e8,	// (0x0005e63c) list_single_2heading_msg_pane_t2

0x8117,	// (0x0005e66b) list_single_2heading_msg_pane_t3_ParamLimits

0x8117,	// (0x0005e66b) list_single_2heading_msg_pane_t3

0x404f,	// (0x0005a5a3) list_single_2heading_msg_pane_t4_ParamLimits

0x404f,	// (0x0005a5a3) list_single_2heading_msg_pane_t4

0x0003,

0xfca5,	// (0x000661f9) list_single_2heading_msg_pane_t_ParamLimits

0xfca5,	// (0x000661f9) list_single_2heading_msg_pane_t

0xe09f,	// (0x000645f3) title_pane_g4_ParamLimits

0xe09f,	// (0x000645f3) title_pane_g4

0x62bf,	// (0x0005c813) title_pane_stacon_g3_ParamLimits

0x62bf,	// (0x0005c813) title_pane_stacon_g3

0xc46a,	// (0x000629be) list_single_2graphic_im_pane_g4_ParamLimits

0xc46a,	// (0x000629be) list_single_2graphic_im_pane_g4

0xa128,	// (0x0006067c) popup_side_volume_key_window_cp

0xa992,	// (0x00060ee6) main_idle_act2_pane_t1

0x7689,	// (0x0005dbdd) toolbar_button_pane_g10

0x5b89,	// (0x0005c0dd) popup_toolbar_window_cp1

0xb1d1,	// (0x00061725) clock_nsta_pane_cp_t1

0xb1d1,	// (0x00061725) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x00065ffb) clock_nsta_pane_cp_t

0x667c,	// (0x0005cbd0) navi_navi_volume_pane_cp2_ParamLimits

0x6688,	// (0x0005cbdc) popup_side_volume_key_window_g1_ParamLimits

0x6694,	// (0x0005cbe8) popup_side_volume_key_window_g2_ParamLimits

0x66a0,	// (0x0005cbf4) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00065c3b) popup_side_volume_key_window_g_ParamLimits

0x7c76,	// (0x0005e1ca) fep_hwr_aid_pane

0x7d1d,	// (0x0005e271) bg_fep_hwr_top_pane_g4_ParamLimits

0xb86d,	// (0x00061dc1) fep_hwr_top_pane_g1_ParamLimits

0xb87f,	// (0x00061dd3) fep_hwr_top_pane_g2_ParamLimits

0x7d3d,	// (0x0005e291) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x00066050) fep_hwr_top_pane_g_ParamLimits

0x7d52,	// (0x0005e2a6) fep_hwr_top_text_pane_ParamLimits

0x9eeb,	// (0x0006043f) aid_touch_tab_arrow_arrow_2

0x9ef4,	// (0x00060448) aid_touch_tab_arrow_left_2

0x7c8a,	// (0x0005e1de) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7cc1,	// (0x0005e215) fep_hwr_prediction_pane

0xb9d8,	// (0x00061f2c) fep_vkb_prediction_pane

0xbad5,	// (0x00062029) fep_vkb_side_pane_g3_ParamLimits

0xbad5,	// (0x00062029) fep_vkb_side_pane_g3

0x7ecd,	// (0x0005e421) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7f39,	// (0x0005e48d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7f46,	// (0x0005e49a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x000660ff) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8150,	// (0x0005e6a4) fep_hwr_prediction_pane_g1

0x815a,	// (0x0005e6ae) fep_hwr_prediction_pane_g2

0x8162,	// (0x0005e6b6) fep_hwr_prediction_pane_g3

0x816a,	// (0x0005e6be) fep_hwr_prediction_pane_g4

0x0003,

0xfcae,	// (0x00066202) fep_hwr_prediction_pane_g

0xc95d,	// (0x00062eb1) fep_vkb_prediction_pane_g1

0xc967,	// (0x00062ebb) fep_vkb_prediction_pane_g2

0xc96f,	// (0x00062ec3) fep_vkb_prediction_pane_g3

0xc977,	// (0x00062ecb) fep_vkb_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0006620b) fep_vkb_prediction_pane_g

0x79b7,	// (0x0005df0b) slider_set_pane_g3

0x79cb,	// (0x0005df1f) slider_set_pane_g4

0x79e3,	// (0x0005df37) slider_set_pane_g5

0x79b7,	// (0x0005df0b) slider_set_pane_g6

0x79f9,	// (0x0005df4d) slider_set_pane_g7

0xa577,	// (0x00060acb) slider_form_pane_g3

0xa580,	// (0x00060ad4) slider_form_pane_g4

0xa588,	// (0x00060adc) slider_form_pane_g5

0xa577,	// (0x00060acb) slider_form_pane_g6

0xa590,	// (0x00060ae4) slider_form_pane_g7

0xac3e,	// (0x00061192) slider_set_pane_vc_g3

0xac47,	// (0x0006119b) slider_set_pane_vc_g4

0xac50,	// (0x000611a4) slider_set_pane_vc_g5

0xac3e,	// (0x00061192) slider_set_pane_vc_g6

0xac59,	// (0x000611ad) slider_set_pane_vc_g7

0xae8f,	// (0x000613e3) slider_form_pane_vc_g1

0xae98,	// (0x000613ec) slider_form_pane_vc_g2

0xaea1,	// (0x000613f5) slider_form_pane_vc_g3

0xae8f,	// (0x000613e3) slider_form_pane_vc_g4

0xaeaa,	// (0x000613fe) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x00065fcd) slider_form_pane_vc_g

0x5365,	// (0x0005b8b9) main_idle_act3_pane

0xc97f,	// (0x00062ed3) ai3_links_pane

0xc988,	// (0x00062edc) popup_ai3_data_window_ParamLimits

0xc988,	// (0x00062edc) popup_ai3_data_window

0xe081,	// (0x000645d5) grid_ai3_links_pane

0xc9a0,	// (0x00062ef4) cell_ai3_links_pane_ParamLimits

0xc9a0,	// (0x00062ef4) cell_ai3_links_pane

0xc9b8,	// (0x00062f0c) bg_popup_sub_pane_cp11

0xc9c5,	// (0x00062f19) cell_ai3_links_pane_g1

0xe081,	// (0x000645d5) bg_popup_sub_pane_cp12

0xc9ea,	// (0x00062f3e) heading_ai3_data_pane

0xc9f2,	// (0x00062f46) list_ai3_gene_pane

0xc9fe,	// (0x00062f52) popup_ai3_data_window_g1

0xca06,	// (0x00062f5a) heading_ai3_data_pane_g1

0xca0e,	// (0x00062f62) heading_ai3_data_pane_t1

0xca1c,	// (0x00062f70) list_double_ai3_gene_pane_ParamLimits

0xca1c,	// (0x00062f70) list_double_ai3_gene_pane

0xca29,	// (0x00062f7d) list_single_ai3_gene_pane_ParamLimits

0xca29,	// (0x00062f7d) list_single_ai3_gene_pane

0xb7d6,	// (0x00061d2a) list_highlight_pane_cp7_ParamLimits

0xb7d6,	// (0x00061d2a) list_highlight_pane_cp7

0xca36,	// (0x00062f8a) list_single_a13_gene_pane_t1_ParamLimits

0xca36,	// (0x00062f8a) list_single_a13_gene_pane_t1

0xca4d,	// (0x00062fa1) list_single_ai3_gene_pane_g1

0xca56,	// (0x00062faa) list_single_ai3_gene_pane_g2

0x0001,

0xfcc0,	// (0x00066214) list_single_ai3_gene_pane_g

0xca5e,	// (0x00062fb2) list_double_ai3_gene_pane_g1_ParamLimits

0xca5e,	// (0x00062fb2) list_double_ai3_gene_pane_g1

0xca6a,	// (0x00062fbe) list_double_ai3_gene_pane_t1_ParamLimits

0xca6a,	// (0x00062fbe) list_double_ai3_gene_pane_t1

0xca86,	// (0x00062fda) list_double_ai3_gene_pane_t2_ParamLimits

0xca86,	// (0x00062fda) list_double_ai3_gene_pane_t2

0xca9b,	// (0x00062fef) list_double_ai3_gene_pane_t3_ParamLimits

0xca9b,	// (0x00062fef) list_double_ai3_gene_pane_t3

0x0002,

0xfcc5,	// (0x00066219) list_double_ai3_gene_pane_t_ParamLimits

0xfcc5,	// (0x00066219) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4045,	// (0x0005a599) aid_size_min_col_2

0xc949,	// (0x00062e9d) aid_size_min_msg_ParamLimits

0xc949,	// (0x00062e9d) aid_size_min_msg

0xbbd5,	// (0x00062129) fep_vkb_top_text_pane_g2_ParamLimits

0xbbd5,	// (0x00062129) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x00066080) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x00066080) fep_vkb_top_text_pane_g

0x5365,	// (0x0005b8b9) main_hc_apps_shell_pane

0xcab8,	// (0x0006300c) grid_hc_apps_pane_ParamLimits

0xcab8,	// (0x0006300c) grid_hc_apps_pane

0xcaca,	// (0x0006301e) list_hc_apps_pane

0xcad2,	// (0x00063026) scroll_pane_cp37_ParamLimits

0xcad2,	// (0x00063026) scroll_pane_cp37

0xcade,	// (0x00063032) cell_hc_apps_pane_ParamLimits

0xcade,	// (0x00063032) cell_hc_apps_pane

0xcb8c,	// (0x000630e0) cell_hc_apps_pane_g1_ParamLimits

0xcb8c,	// (0x000630e0) cell_hc_apps_pane_g1

0xcbbc,	// (0x00063110) cell_hc_apps_pane_g2_ParamLimits

0xcbbc,	// (0x00063110) cell_hc_apps_pane_g2

0xcbd8,	// (0x0006312c) cell_hc_apps_pane_g3_ParamLimits

0xcbd8,	// (0x0006312c) cell_hc_apps_pane_g3

0x0002,

0xfccc,	// (0x00066220) cell_hc_apps_pane_g_ParamLimits

0xfccc,	// (0x00066220) cell_hc_apps_pane_g

0xcbfa,	// (0x0006314e) cell_hc_apps_pane_t1_ParamLimits

0xcbfa,	// (0x0006314e) cell_hc_apps_pane_t1

0xe21b,	// (0x0006476f) grid_highlight_pane_cp10_ParamLimits

0xe21b,	// (0x0006476f) grid_highlight_pane_cp10

0xcc3a,	// (0x0006318e) list_single_hc_apps_pane_ParamLimits

0xcc3a,	// (0x0006318e) list_single_hc_apps_pane

0xcc9d,	// (0x000631f1) list_single_hc_apps_pane_g1

0xb738,	// (0x00061c8c) list_single_hc_apps_pane_g2

0x0001,

0xfcd3,	// (0x00066227) list_single_hc_apps_pane_g

0xb751,	// (0x00061ca5) list_single_hc_apps_pane_g2_copy1

0x8172,	// (0x0005e6c6) list_single_hc_apps_pane_t1

0xe0e3,	// (0x00064637) bg_set_opt_pane_cp_ParamLimits

0x567e,	// (0x0005bbd2) setting_slider_pane_t1_ParamLimits

0x5697,	// (0x0005bbeb) setting_slider_pane_t2_ParamLimits

0x56b1,	// (0x0005bc05) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00065a8d) setting_slider_pane_t_ParamLimits

0x56c9,	// (0x0005bc1d) slider_set_pane_ParamLimits

0x6c28,	// (0x0005d17c) control_pane_g5_ParamLimits

0x6c28,	// (0x0005d17c) control_pane_g5

0xa3ca,	// (0x0006091e) slider_set_pane_g1_ParamLimits

0x79ab,	// (0x0005deff) slider_set_pane_g2_ParamLimits

0x79b7,	// (0x0005df0b) slider_set_pane_g3_ParamLimits

0x79cb,	// (0x0005df1f) slider_set_pane_g4_ParamLimits

0x79e3,	// (0x0005df37) slider_set_pane_g5_ParamLimits

0x79b7,	// (0x0005df0b) slider_set_pane_g6_ParamLimits

0x79f9,	// (0x0005df4d) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00065e8e) slider_set_pane_g_ParamLimits

0x1567,	// (0x00057abb) navi_icon_text_pane_ParamLimits

0x734a,	// (0x0005d89e) aid_fill_nsta_2_ParamLimits

0x7389,	// (0x0005d8dd) aid_touch_tab_arrow_left_ParamLimits

0x7398,	// (0x0005d8ec) aid_touch_tab_arrow_right_ParamLimits

0x7405,	// (0x0005d959) clock_nsta_pane_ParamLimits

0x9ecd,	// (0x00060421) navi_icon_pane_g1_ParamLimits

0x9ed9,	// (0x0006042d) navi_text_pane_t1_ParamLimits

0xb2e1,	// (0x00061835) navi_icon_text_pane_g1_ParamLimits

0xb2ed,	// (0x00061841) navi_icon_text_pane_t1_ParamLimits

0xcc9d,	// (0x000631f1) list_single_hc_apps_pane_g1_ParamLimits

0xb738,	// (0x00061c8c) list_single_hc_apps_pane_g2_ParamLimits

0xfcd3,	// (0x00066227) list_single_hc_apps_pane_g_ParamLimits

0xb751,	// (0x00061ca5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8172,	// (0x0005e6c6) list_single_hc_apps_pane_t1_ParamLimits

0x54c2,	// (0x0005ba16) popup_toolbar2_fixed_window_ParamLimits

0x54c2,	// (0x0005ba16) popup_toolbar2_fixed_window

0x7260,	// (0x0005d7b4) popup_toolbar2_float_window

0xe081,	// (0x000645d5) bg_popup_sub_pane_cp27

0xccb6,	// (0x0006320a) grid_toolbar2_float_pane

0xe081,	// (0x000645d5) bg_popup_sub_pane_cp26

0xccb6,	// (0x0006320a) grid_toolbar2_fixed_pane

0xccbe,	// (0x00063212) cell_toolbar2_fixed_pane_ParamLimits

0xccbe,	// (0x00063212) cell_toolbar2_fixed_pane

0xccce,	// (0x00063222) cell_toolbar2_fixed_pane_g1

0x7132,	// (0x0005d686) toolbar2_fixed_button_pane

0x903b,	// (0x0005f58f) toolbar2_fixed_button_pane_g1

0x904b,	// (0x0005f59f) toolbar2_fixed_button_pane_g2

0x9043,	// (0x0005f597) toolbar2_fixed_button_pane_g3

0x905b,	// (0x0005f5af) toolbar2_fixed_button_pane_g4

0x9053,	// (0x0005f5a7) toolbar2_fixed_button_pane_g5

0x9063,	// (0x0005f5b7) toolbar2_fixed_button_pane_g6

0x906b,	// (0x0005f5bf) toolbar2_fixed_button_pane_g7

0x907b,	// (0x0005f5cf) toolbar2_fixed_button_pane_g8

0x9073,	// (0x0005f5c7) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00065d90) toolbar2_fixed_button_pane_g

0xccd7,	// (0x0006322b) cell_toolbar2_float_pane_ParamLimits

0xccd7,	// (0x0006322b) cell_toolbar2_float_pane

0xcce8,	// (0x0006323c) cell_toolbar2_float_pane_g1

0x7132,	// (0x0005d686) toolbar2_fixed_button_pane_cp

0xb93f,	// (0x00061e93) fep_vkb_accented_list_pane_ParamLimits

0xb93f,	// (0x00061e93) fep_vkb_accented_list_pane

0x7ead,	// (0x0005e401) bg_popup_fep_shadow_pane_g9

0x16b6,	// (0x00057c0a) bg_popup_fep_shadow_pane_cp3

0xf25b,	// (0x000657af) list_accented_list_pane

0xccf1,	// (0x00063245) list_single_accented_list_pane_ParamLimits

0xccf1,	// (0x00063245) list_single_accented_list_pane

0x16b6,	// (0x00057c0a) list_highlight_pane_cp10

0xcd02,	// (0x00063256) list_single_accented_list_pane_t1

0x71b0,	// (0x0005d704) popup_slider_window_ParamLimits

0x71b0,	// (0x0005d704) popup_slider_window

0xc940,	// (0x00062e94) aid_indentation_list_msg

0xcdc0,	// (0x00063314) bg_popup_window_pane_cp19

0xce28,	// (0x0006337c) popup_slider_window_g1

0xce44,	// (0x00063398) popup_slider_window_g2

0xce60,	// (0x000633b4) popup_slider_window_g3

0x0005,

0xfcd8,	// (0x0006622c) popup_slider_window_g

0xcec6,	// (0x0006341a) popup_slider_window_t1

0xcf3a,	// (0x0006348e) small_volume_slider_vertical_pane

0xb811,	// (0x00061d65) small_volume_slider_vertical_pane_g1

0xb811,	// (0x00061d65) small_volume_slider_vertical_pane_g2

0xcf56,	// (0x000634aa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcea,	// (0x0006623e) small_volume_slider_vertical_pane_g

0x5288,	// (0x0005b7dc) area_side_right_pane_ParamLimits

0x5288,	// (0x0005b7dc) area_side_right_pane

0x81a0,	// (0x0005e6f4) aid_size_side_button_ParamLimits

0x81a0,	// (0x0005e6f4) aid_size_side_button

0x81b4,	// (0x0005e708) grid_sctrl_middle_pane_ParamLimits

0x81b4,	// (0x0005e708) grid_sctrl_middle_pane

0x81d3,	// (0x0005e727) sctrl_sk_bottom_pane

0x81e4,	// (0x0005e738) sctrl_sk_top_pane

0x81f6,	// (0x0005e74a) aid_touch_sctrl_top

0x8203,	// (0x0005e757) bg_sctrl_sk_pane_ParamLimits

0x8203,	// (0x0005e757) bg_sctrl_sk_pane

0x8211,	// (0x0005e765) sctrl_sk_top_pane_g1

0x821e,	// (0x0005e772) sctrl_sk_top_pane_t1

0x81f6,	// (0x0005e74a) aid_touch_sctrl_bottom

0x8203,	// (0x0005e757) bg_sctrl_sk_pane_cp_ParamLimits

0x8203,	// (0x0005e757) bg_sctrl_sk_pane_cp

0x8239,	// (0x0005e78d) sctrl_sk_bottom_pane_g1

0x821e,	// (0x0005e772) sctrl_sk_bottom_pane_t1

0x8242,	// (0x0005e796) cell_sctrl_middle_pane_ParamLimits

0x8242,	// (0x0005e796) cell_sctrl_middle_pane

0x825d,	// (0x0005e7b1) aid_touch_sctrl_middle_ParamLimits

0x825d,	// (0x0005e7b1) aid_touch_sctrl_middle

0x826f,	// (0x0005e7c3) bg_sctrl_middle_pane_ParamLimits

0x826f,	// (0x0005e7c3) bg_sctrl_middle_pane

0x7ecd,	// (0x0005e421) cell_sctrl_middle_pane_g1_ParamLimits

0x7ecd,	// (0x0005e421) cell_sctrl_middle_pane_g1

0x827d,	// (0x0005e7d1) cell_sctrl_middle_pane_g2_ParamLimits

0x827d,	// (0x0005e7d1) cell_sctrl_middle_pane_g2

0x0001,

0xfcf6,	// (0x0006624a) cell_sctrl_middle_pane_g_ParamLimits

0xfcf6,	// (0x0006624a) cell_sctrl_middle_pane_g

0x903b,	// (0x0005f58f) bg_sctrl_middle_pane_g1

0x9043,	// (0x0005f597) bg_sctrl_middle_pane_g2

0x904b,	// (0x0005f59f) bg_sctrl_middle_pane_g3

0x9053,	// (0x0005f5a7) bg_sctrl_middle_pane_g4

0x905b,	// (0x0005f5af) bg_sctrl_middle_pane_g5

0x9063,	// (0x0005f5b7) bg_sctrl_middle_pane_g6

0x906b,	// (0x0005f5bf) bg_sctrl_middle_pane_g7

0x9073,	// (0x0005f5c7) bg_sctrl_middle_pane_g8

0x0007,

0xfcfb,	// (0x0006624f) bg_sctrl_middle_pane_g

0x907b,	// (0x0005f5cf) bg_sctrl_middle_pane_g8_copy1

0x903b,	// (0x0005f58f) bg_sctrl_sk_pane_g1

0x904b,	// (0x0005f59f) bg_sctrl_sk_pane_g2

0x9043,	// (0x0005f597) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00065d90) bg_sctrl_sk_pane_g

0xf084,	// (0x000655d8) aid_size_touch_scroll_bar

0x905b,	// (0x0005f5af) bg_sctrl_sk_pane_g4

0x9053,	// (0x0005f5a7) bg_sctrl_sk_pane_g5

0x9063,	// (0x0005f5b7) bg_sctrl_sk_pane_g6

0x906b,	// (0x0005f5bf) bg_sctrl_sk_pane_g7

0x907b,	// (0x0005f5cf) bg_sctrl_sk_pane_g8

0x9073,	// (0x0005f5c7) bg_sctrl_sk_pane_g9

0x6e19,	// (0x0005d36d) popup_fep_china_hwr2_fs_candidate_window

0x6e23,	// (0x0005d377) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e23,	// (0x0005d377) popup_fep_china_hwr2_fs_control_window

0x7ecd,	// (0x0005e421) sctrl_sk_top_pane_g2

0x0001,

0xfcf1,	// (0x00066245) sctrl_sk_top_pane_g

0xcf5f,	// (0x000634b3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf5f,	// (0x000634b3) aid_fep_china_hwr2_fs_cell

0xcf71,	// (0x000634c5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf71,	// (0x000634c5) bg_popup_fep_shadow_pane_cp4

0xcf88,	// (0x000634dc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf88,	// (0x000634dc) bg_popup_fep_shadow_pane_cp5

0xcf9a,	// (0x000634ee) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf9a,	// (0x000634ee) popup_fep_china_hwr2_fs_control_bar_grid

0xcfaa,	// (0x000634fe) popup_fep_china_hwr2_fs_control_funtion_grid

0xcfb2,	// (0x00063506) aid_fep_china_hwr2_fs_candi_cell

0xe081,	// (0x000645d5) bg_popup_fep_shadow_pane_cp6

0xcfbc,	// (0x00063510) popup_fep_china_hwr2_fs_candidate_grid

0xcfc6,	// (0x0006351a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcfc6,	// (0x0006351a) cell_fep_china_hwr2_fs_funtion_grid

0xb811,	// (0x00061d65) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcfde,	// (0x00063532) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcfde,	// (0x00063532) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcfec,	// (0x00063540) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcfec,	// (0x00063540) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0c,	// (0x00066260) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0c,	// (0x00066260) cell_fep_china_hwr2_fs_funtion_grid_g

0xd002,	// (0x00063556) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd002,	// (0x00063556) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd017,	// (0x0006356b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd017,	// (0x0006356b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd11,	// (0x00066265) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd11,	// (0x00066265) cell_fep_china_hwr2_fs_funtion_grid_t

0xd033,	// (0x00063587) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd03b,	// (0x0006358f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd043,	// (0x00063597) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd16,	// (0x0006626a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd04b,	// (0x0006359f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd04b,	// (0x0006359f) cell_fep_china_hwr2_fs_candidate_grid

0xd064,	// (0x000635b8) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd06c,	// (0x000635c0) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb811,	// (0x00061d65) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb811,	// (0x00061d65) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x00066085) cell_fep_china_hwr2_fs_candidate_grid_g

0xd074,	// (0x000635c8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7418,	// (0x0005d96c) clock_nsta_pane_cp_24_ParamLimits

0x7418,	// (0x0005d96c) clock_nsta_pane_cp_24

0x7496,	// (0x0005d9ea) indicator_nsta_pane_cp_24_ParamLimits

0x7496,	// (0x0005d9ea) indicator_nsta_pane_cp_24

0x9d49,	// (0x0006029d) heading_pane_g1

0x0001,

0xf8a1,	// (0x00065df5) heading_pane_g

0xa7db,	// (0x00060d2f) grid_sct_catagory_button_pane

0xa80b,	// (0x00060d5f) scroll_pane_cp5_ParamLimits

0xb32f,	// (0x00061883) button_value_adjust_pane_cp5_ParamLimits

0xb32f,	// (0x00061883) button_value_adjust_pane_cp5

0xb40e,	// (0x00061962) form2_midp_time_pane_ParamLimits

0xd082,	// (0x000635d6) cell_sct_catagory_button_pane_ParamLimits

0xd082,	// (0x000635d6) cell_sct_catagory_button_pane

0xb7d6,	// (0x00061d2a) bg_button_pane_cp01_ParamLimits

0xb7d6,	// (0x00061d2a) bg_button_pane_cp01

0xb811,	// (0x00061d65) cell_sct_catagory_button_pane_g1

0x71ef,	// (0x0005d743) popup_tb_extension_window

0xd094,	// (0x000635e8) aid_size_cell_ext_ParamLimits

0xd094,	// (0x000635e8) aid_size_cell_ext

0xe21b,	// (0x0006476f) bg_tb_trans_pane_cp1_ParamLimits

0xe21b,	// (0x0006476f) bg_tb_trans_pane_cp1

0xd0b4,	// (0x00063608) grid_tb_ext_pane_ParamLimits

0xd0b4,	// (0x00063608) grid_tb_ext_pane

0xd0e4,	// (0x00063638) cell_tb_ext_pane_ParamLimits

0xd0e4,	// (0x00063638) cell_tb_ext_pane

0xd0fb,	// (0x0006364f) cell_tb_ext_pane_g1_ParamLimits

0xd0fb,	// (0x0006364f) cell_tb_ext_pane_g1

0xd118,	// (0x0006366c) cell_tb_ext_pane_t1

0xe21b,	// (0x0006476f) list_highlight_pane_cp11_ParamLimits

0xe21b,	// (0x0006476f) list_highlight_pane_cp11

0x54e1,	// (0x0005ba35) popup_uni_indicator_window_ParamLimits

0x54e1,	// (0x0005ba35) popup_uni_indicator_window

0xf142,	// (0x00065696) bg_popup_sub_pane_cp14

0xd134,	// (0x00063688) list_uniindi_pane

0xd140,	// (0x00063694) uniindi_top_pane

0xe21b,	// (0x0006476f) bg_uniindi_top_pane

0xd15f,	// (0x000636b3) uniindi_top_pane_g1

0xd175,	// (0x000636c9) uniindi_top_pane_g2

0x0003,

0xfd1d,	// (0x00066271) uniindi_top_pane_g

0xd19f,	// (0x000636f3) uniindi_top_pane_t1

0xd1c9,	// (0x0006371d) list_single_uniindi_pane_ParamLimits

0xd1c9,	// (0x0006371d) list_single_uniindi_pane

0xb811,	// (0x00061d65) bg_uniindi_top_pane_g1

0xd1dc,	// (0x00063730) list_single_uniindi_pane_g1

0xd1ef,	// (0x00063743) list_single_uniindi_pane_t1

0x5365,	// (0x0005b8b9) control_bg_pane

0xd214,	// (0x00063768) bg_sctrl_sk_pane_cp1

0xd21d,	// (0x00063771) bg_sctrl_sk_pane_cp2

0xd226,	// (0x0006377a) control_bg_pane_g1

0xd22f,	// (0x00063783) control_bg_pane_g2

0x0001,

0xfd26,	// (0x0006627a) control_bg_pane_g

0xb175,	// (0x000616c9) cell_indicator_nsta_pane_g1_ParamLimits

0xb183,	// (0x000616d7) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x00065fe9) cell_indicator_nsta_pane_g_ParamLimits

0x3ed1,	// (0x0005a425) form2_midp_time_pane_t1_ParamLimits

0x6d83,	// (0x0005d2d7) main_idle_act4_pane_ParamLimits

0x6d83,	// (0x0005d2d7) main_idle_act4_pane

0x71ef,	// (0x0005d743) popup_tb_extension_window_ParamLimits

0xd0d4,	// (0x00063628) tb_ext_find_pane_ParamLimits

0xd0d4,	// (0x00063628) tb_ext_find_pane

0xd238,	// (0x0006378c) ai_gene_pane_1_cp1

0x1737,	// (0x00057c8b) ai_gene_pane_2_cp1

0xd240,	// (0x00063794) list_single_idle_plugin_calendar_pane

0xd249,	// (0x0006379d) list_single_idle_plugin_notification_pane

0xd252,	// (0x000637a6) list_single_idle_plugin_player_pane

0xd25b,	// (0x000637af) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd25b,	// (0x000637af) list_single_idle_plugin_shortcut_pane

0xd27d,	// (0x000637d1) main_idle_act4_pane_t1

0xd28f,	// (0x000637e3) main_idle_act4_pane_t2

0x0001,

0xfd2b,	// (0x0006627f) main_idle_act4_pane_t

0xd2a1,	// (0x000637f5) middle_sk_idle_act4_pane_ParamLimits

0xd2a1,	// (0x000637f5) middle_sk_idle_act4_pane

0xd2b7,	// (0x0006380b) popup_clock_digital_analogue_window_cp2

0xd2d1,	// (0x00063825) shortcut_wheel_idle_act4_pane_ParamLimits

0xd2d1,	// (0x00063825) shortcut_wheel_idle_act4_pane

0xb811,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g1

0xb811,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g2

0xb811,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g3

0xb811,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g4

0xb811,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g5

0xd2e5,	// (0x00063839) shortcut_wheel_idle_act4_pane_g6

0xd2ed,	// (0x00063841) shortcut_wheel_idle_act4_pane_g7

0xd2f5,	// (0x00063849) shortcut_wheel_idle_act4_pane_g8

0xd2fd,	// (0x00063851) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd30,	// (0x00066284) shortcut_wheel_idle_act4_pane_g

0xba81,	// (0x00061fd5) middle_sk_idle_act4_pane_g1_ParamLimits

0xba81,	// (0x00061fd5) middle_sk_idle_act4_pane_g1

0xd361,	// (0x000638b5) middle_sk_idle_act4_pane_g2_ParamLimits

0xd361,	// (0x000638b5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd53,	// (0x000662a7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd53,	// (0x000662a7) middle_sk_idle_act4_pane_g

0xd36d,	// (0x000638c1) middle_sk_idle_act4_pane_t1_ParamLimits

0xd36d,	// (0x000638c1) middle_sk_idle_act4_pane_t1

0xd38a,	// (0x000638de) grid_ai_shortcut_pane_ParamLimits

0xd38a,	// (0x000638de) grid_ai_shortcut_pane

0xd3a3,	// (0x000638f7) list_highlight_pane_cp16_ParamLimits

0xd3a3,	// (0x000638f7) list_highlight_pane_cp16

0xd3b0,	// (0x00063904) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd3b0,	// (0x00063904) list_single_idle_plugin_shortcut_pane_g1

0xd3bc,	// (0x00063910) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd3bc,	// (0x00063910) list_single_idle_plugin_shortcut_pane_g2

0xd3d4,	// (0x00063928) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd3d4,	// (0x00063928) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd58,	// (0x000662ac) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd58,	// (0x000662ac) list_single_idle_plugin_shortcut_pane_g

0xd3e7,	// (0x0006393b) cell_ai_shortcut_pane_ParamLimits

0xd3e7,	// (0x0006393b) cell_ai_shortcut_pane

0xd40b,	// (0x0006395f) cell_ai_shortcut_pane_g1_ParamLimits

0xd40b,	// (0x0006395f) cell_ai_shortcut_pane_g1

0xd238,	// (0x0006378c) ai_gene_pane_1_cp2

0xd42d,	// (0x00063981) ai_gene_pane_2_cp2

0xd435,	// (0x00063989) list_highlight_pane_cp15

0xd43e,	// (0x00063992) list_single_idle_plugin_calendar_pane_g1

0xd435,	// (0x00063989) list_highlight_pane_cp17

0xd446,	// (0x0006399a) list_single_idle_plugin_calendar_pane_g1_copy1

0xd44e,	// (0x000639a2) list_single_idle_plugin_player_pane_g1

0xaa34,	// (0x00060f88) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5f,	// (0x000662b3) list_single_idle_plugin_player_pane_g

0xd456,	// (0x000639aa) list_single_idle_plugin_player_pane_t1

0xd464,	// (0x000639b8) list_single_idle_plugin_player_pane_t2

0xd472,	// (0x000639c6) list_single_idle_plugin_player_pane_t3

0xd480,	// (0x000639d4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd64,	// (0x000662b8) list_single_idle_plugin_player_pane_t

0xd48e,	// (0x000639e2) wait_bar_pane_cp15

0xd496,	// (0x000639ea) grid_ai_notification_pane

0xaa34,	// (0x00060f88) list_single_idle_plugin_notification_pane_g1

0xd49f,	// (0x000639f3) cell_ai_notification_pane_ParamLimits

0xd49f,	// (0x000639f3) cell_ai_notification_pane

0xd4ac,	// (0x00063a00) cell_ai_notification_pane_g1

0xd4b4,	// (0x00063a08) cell_ai_notification_pane_t1

0xd4c2,	// (0x00063a16) tb_ext_find_button_pane

0xd4ca,	// (0x00063a1e) tb_ext_find_pane_g1

0xd4d2,	// (0x00063a26) tb_ext_find_pane_t1

0x1258,	// (0x000577ac) tb_ext_find_button_pane_g1

0xd4e0,	// (0x00063a34) tb_ext_find_button_pane_g2

0x0001,

0xfd6d,	// (0x000662c1) tb_ext_find_button_pane_g

0xd27d,	// (0x000637d1) main_idle_act4_pane_t1_ParamLimits

0xd28f,	// (0x000637e3) main_idle_act4_pane_t2_ParamLimits

0xfd2b,	// (0x0006627f) main_idle_act4_pane_t_ParamLimits

0xd2b7,	// (0x0006380b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd2c5,	// (0x00063819) sat_plugin_idle_act4_pane_ParamLimits

0xd2c5,	// (0x00063819) sat_plugin_idle_act4_pane

0xd4e9,	// (0x00063a3d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd4e9,	// (0x00063a3d) sat_plugin_idle_act4_pane_t1

0xd4fc,	// (0x00063a50) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4fc,	// (0x00063a50) sat_plugin_idle_act4_pane_t2

0xd50f,	// (0x00063a63) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd50f,	// (0x00063a63) sat_plugin_idle_act4_pane_t3

0xd522,	// (0x00063a76) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd522,	// (0x00063a76) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd72,	// (0x000662c6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd72,	// (0x000662c6) sat_plugin_idle_act4_pane_t

0x542a,	// (0x0005b97e) popup_battery_window_ParamLimits

0x542a,	// (0x0005b97e) popup_battery_window

0xe21b,	// (0x0006476f) bg_popup_sub_pane_cp25_ParamLimits

0xe21b,	// (0x0006476f) bg_popup_sub_pane_cp25

0xd535,	// (0x00063a89) popup_battery_window_g1_ParamLimits

0xd535,	// (0x00063a89) popup_battery_window_g1

0xd541,	// (0x00063a95) popup_battery_window_t1_ParamLimits

0xd541,	// (0x00063a95) popup_battery_window_t1

0xd553,	// (0x00063aa7) popup_battery_window_t2_ParamLimits

0xd553,	// (0x00063aa7) popup_battery_window_t2

0x0001,

0xfd7b,	// (0x000662cf) popup_battery_window_t_ParamLimits

0xfd7b,	// (0x000662cf) popup_battery_window_t

0x69bc,	// (0x0005cf10) midp_canvas_pane_ParamLimits

0x6a35,	// (0x0005cf89) midp_keypad_pane_ParamLimits

0x6a35,	// (0x0005cf89) midp_keypad_pane

0xf51d,	// (0x00065a71) main_midp_pane_ParamLimits

0xb1ef,	// (0x00061743) signal_pane_g2_cp_ParamLimits

0xd570,	// (0x00063ac4) aid_size_cell_midp_keypad_ParamLimits

0xd570,	// (0x00063ac4) aid_size_cell_midp_keypad

0xd58a,	// (0x00063ade) midp_keyp_game_grid_pane_ParamLimits

0xd58a,	// (0x00063ade) midp_keyp_game_grid_pane

0xd5aa,	// (0x00063afe) midp_keyp_rocker_pane_ParamLimits

0xd5aa,	// (0x00063afe) midp_keyp_rocker_pane

0xd5e3,	// (0x00063b37) midp_keyp_sk_left_pane_ParamLimits

0xd5e3,	// (0x00063b37) midp_keyp_sk_left_pane

0xd63d,	// (0x00063b91) midp_keyp_sk_right_pane_ParamLimits

0xd63d,	// (0x00063b91) midp_keyp_sk_right_pane

0xe081,	// (0x000645d5) bg_button_pane_cp03

0xd697,	// (0x00063beb) midp_keyp_sk_left_pane_g1

0xe081,	// (0x000645d5) bg_button_pane_cp04

0xd697,	// (0x00063beb) midp_keyp_sk_right_pane_g1

0xb811,	// (0x00061d65) midp_keyp_rocker_pane_g1

0xd6a0,	// (0x00063bf4) keyp_game_cell_pane_ParamLimits

0xd6a0,	// (0x00063bf4) keyp_game_cell_pane

0xe081,	// (0x000645d5) bg_button_pane_cp02

0xd6b3,	// (0x00063c07) keyp_game_cell_pane_g1

0x5460,	// (0x0005b9b4) popup_fep_vkb2_window_ParamLimits

0x5460,	// (0x0005b9b4) popup_fep_vkb2_window

0x829b,	// (0x0005e7ef) aid_size_cell_vkb2_ParamLimits

0x829b,	// (0x0005e7ef) aid_size_cell_vkb2

0x82e7,	// (0x0005e83b) popup_fep_vkb2_window_g1_ParamLimits

0x82e7,	// (0x0005e83b) popup_fep_vkb2_window_g1

0x832f,	// (0x0005e883) vkb2_area_bottom_pane_ParamLimits

0x832f,	// (0x0005e883) vkb2_area_bottom_pane

0x837b,	// (0x0005e8cf) vkb2_area_keypad_pane_ParamLimits

0x837b,	// (0x0005e8cf) vkb2_area_keypad_pane

0x83bd,	// (0x0005e911) vkb2_area_top_pane_ParamLimits

0x83bd,	// (0x0005e911) vkb2_area_top_pane

0x843c,	// (0x0005e990) vkb2_top_entry_pane_ParamLimits

0x843c,	// (0x0005e990) vkb2_top_entry_pane

0x8466,	// (0x0005e9ba) vkb2_top_grid_left_pane_ParamLimits

0x8466,	// (0x0005e9ba) vkb2_top_grid_left_pane

0x8485,	// (0x0005e9d9) vkb2_top_grid_right_pane_ParamLimits

0x8485,	// (0x0005e9d9) vkb2_top_grid_right_pane

0x84a4,	// (0x0005e9f8) vkb2_cell_keypad_pane_ParamLimits

0x84a4,	// (0x0005e9f8) vkb2_cell_keypad_pane

0x8575,	// (0x0005eac9) vkb2_area_bottom_grid_pane_ParamLimits

0x8575,	// (0x0005eac9) vkb2_area_bottom_grid_pane

0x859b,	// (0x0005eaef) vkb2_area_bottom_pane_g1_ParamLimits

0x859b,	// (0x0005eaef) vkb2_area_bottom_pane_g1

0x85bf,	// (0x0005eb13) vkb2_area_bottom_pane_g2_ParamLimits

0x85bf,	// (0x0005eb13) vkb2_area_bottom_pane_g2

0x85ed,	// (0x0005eb41) vkb2_area_bottom_pane_g3_ParamLimits

0x85ed,	// (0x0005eb41) vkb2_area_bottom_pane_g3

0x0002,

0xfd80,	// (0x000662d4) vkb2_area_bottom_pane_g_ParamLimits

0xfd80,	// (0x000662d4) vkb2_area_bottom_pane_g

0x864e,	// (0x0005eba2) vkb2_top_cell_left_pane_ParamLimits

0x864e,	// (0x0005eba2) vkb2_top_cell_left_pane

0xd6c4,	// (0x00063c18) vkb2_top_entry_pane_g1_ParamLimits

0xd6c4,	// (0x00063c18) vkb2_top_entry_pane_g1

0xd6d2,	// (0x00063c26) vkb2_top_entry_pane_t1_ParamLimits

0xd6d2,	// (0x00063c26) vkb2_top_entry_pane_t1

0xd704,	// (0x00063c58) vkb2_top_entry_pane_t2_ParamLimits

0xd704,	// (0x00063c58) vkb2_top_entry_pane_t2

0xd736,	// (0x00063c8a) vkb2_top_entry_pane_t3_ParamLimits

0xd736,	// (0x00063c8a) vkb2_top_entry_pane_t3

0x0002,

0xfd87,	// (0x000662db) vkb2_top_entry_pane_t_ParamLimits

0xfd87,	// (0x000662db) vkb2_top_entry_pane_t

0x869b,	// (0x0005ebef) vkb2_top_grid_right_pane_g1_ParamLimits

0x869b,	// (0x0005ebef) vkb2_top_grid_right_pane_g1

0x86b1,	// (0x0005ec05) vkb2_top_grid_right_pane_g2_ParamLimits

0x86b1,	// (0x0005ec05) vkb2_top_grid_right_pane_g2

0x86c9,	// (0x0005ec1d) vkb2_top_grid_right_pane_g3_ParamLimits

0x86c9,	// (0x0005ec1d) vkb2_top_grid_right_pane_g3

0x86e1,	// (0x0005ec35) vkb2_top_grid_right_pane_g4_ParamLimits

0x86e1,	// (0x0005ec35) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8e,	// (0x000662e2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8e,	// (0x000662e2) vkb2_top_grid_right_pane_g

0x86f7,	// (0x0005ec4b) vkb2_top_cell_left_pane_g1

0x870e,	// (0x0005ec62) vkb2_cell_keypad_pane_g1_ParamLimits

0x870e,	// (0x0005ec62) vkb2_cell_keypad_pane_g1

0xd75a,	// (0x00063cae) vkb2_cell_keypad_pane_t1_ParamLimits

0xd75a,	// (0x00063cae) vkb2_cell_keypad_pane_t1

0x871c,	// (0x0005ec70) vkb2_cell_bottom_grid_pane_ParamLimits

0x871c,	// (0x0005ec70) vkb2_cell_bottom_grid_pane

0x8755,	// (0x0005eca9) vkb2_cell_bottom_grid_pane_g1

0xd305,	// (0x00063859) aid_call2_pane_cp02

0xd30d,	// (0x00063861) aid_call_pane_cp02

0xd315,	// (0x00063869) clock_digital_number_pane_cp10

0xd31d,	// (0x00063871) clock_digital_number_pane_cp11

0xd325,	// (0x00063879) clock_digital_number_pane_cp12

0xd32d,	// (0x00063881) clock_digital_number_pane_cp13

0xd335,	// (0x00063889) clock_digital_separator_pane_cp10

0x1258,	// (0x000577ac) popup_clock_digital_analogue_window_cp2_g1

0x1258,	// (0x000577ac) popup_clock_digital_analogue_window_cp2_g2

0xd33d,	// (0x00063891) popup_clock_digital_analogue_window_cp2_g3

0x1258,	// (0x000577ac) popup_clock_digital_analogue_window_cp2_g4

0xd33d,	// (0x00063891) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd43,	// (0x00066297) popup_clock_digital_analogue_window_cp2_g

0xd345,	// (0x00063899) popup_clock_digital_analogue_window_cp2_t1

0xd353,	// (0x000638a7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4e,	// (0x000662a2) popup_clock_digital_analogue_window_cp2_t

0xb811,	// (0x00061d65) clock_digital_number_pane_cp10_g1

0xb811,	// (0x00061d65) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x00066085) clock_digital_number_pane_cp10_g

0xb811,	// (0x00061d65) clock_digital_separator_pane_cp10_g1

0xb811,	// (0x00061d65) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x00066085) clock_digital_separator_pane_cp10_g

0xd181,	// (0x000636d5) uniindi_top_pane_g3

0xd192,	// (0x000636e6) uniindi_top_pane_g4

0x852f,	// (0x0005ea83) vkb2_row_keypad_pane_ParamLimits

0x852f,	// (0x0005ea83) vkb2_row_keypad_pane

0x8775,	// (0x0005ecc9) vkb2_cell_t_keypad_pane_ParamLimits

0x8775,	// (0x0005ecc9) vkb2_cell_t_keypad_pane

0x8785,	// (0x0005ecd9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8785,	// (0x0005ecd9) vkb2_cell_t_keypad_pane_cp08

0x8798,	// (0x0005ecec) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8798,	// (0x0005ecec) vkb2_cell_t_keypad_pane_cp09

0x87ac,	// (0x0005ed00) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x87ac,	// (0x0005ed00) vkb2_cell_t_keypad_pane_cp01

0x87bd,	// (0x0005ed11) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x87bd,	// (0x0005ed11) vkb2_cell_t_keypad_pane_cp02

0x87ce,	// (0x0005ed22) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x87ce,	// (0x0005ed22) vkb2_cell_t_keypad_pane_cp03

0x87df,	// (0x0005ed33) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x87df,	// (0x0005ed33) vkb2_cell_t_keypad_pane_cp04

0x87f0,	// (0x0005ed44) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x87f0,	// (0x0005ed44) vkb2_cell_t_keypad_pane_cp05

0x8801,	// (0x0005ed55) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8801,	// (0x0005ed55) vkb2_cell_t_keypad_pane_cp06

0x8812,	// (0x0005ed66) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8812,	// (0x0005ed66) vkb2_cell_t_keypad_pane_cp07

0x8823,	// (0x0005ed77) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8823,	// (0x0005ed77) vkb2_cell_t_keypad_pane_cp10

0x7ecd,	// (0x0005e421) vkb2_cell_t_keypad_pane_g1

0xd771,	// (0x00063cc5) vkb2_cell_t_keypad_pane_t1

0x5365,	// (0x0005b8b9) popup_grid_graphic2_window

0xd783,	// (0x00063cd7) aid_size_cell_graphic2_ParamLimits

0xd783,	// (0x00063cd7) aid_size_cell_graphic2

0xd7bb,	// (0x00063d0f) bg_popup_window_pane_cp21_ParamLimits

0xd7bb,	// (0x00063d0f) bg_popup_window_pane_cp21

0xd7c9,	// (0x00063d1d) graphic2_pages_pane_ParamLimits

0xd7c9,	// (0x00063d1d) graphic2_pages_pane

0xd80f,	// (0x00063d63) grid_graphic2_control_pane_ParamLimits

0xd80f,	// (0x00063d63) grid_graphic2_control_pane

0xd84d,	// (0x00063da1) grid_graphic2_pane_ParamLimits

0xd84d,	// (0x00063da1) grid_graphic2_pane

0xd8c1,	// (0x00063e15) cell_graphic2_pane

0x5365,	// (0x0005b8b9) main_comp_mode_pane

0xc9f2,	// (0x00062f46) list_ai3_gene_pane_ParamLimits

0xcdc0,	// (0x00063314) bg_popup_window_pane_cp19_ParamLimits

0xcdcc,	// (0x00063320) bg_touch_area_indi_pane_ParamLimits

0xcdcc,	// (0x00063320) bg_touch_area_indi_pane

0xcde2,	// (0x00063336) bg_touch_area_indi_pane_cp01_ParamLimits

0xcde2,	// (0x00063336) bg_touch_area_indi_pane_cp01

0xcdf8,	// (0x0006334c) bg_touch_area_indi_pane_cp02_ParamLimits

0xcdf8,	// (0x0006334c) bg_touch_area_indi_pane_cp02

0xce0e,	// (0x00063362) bg_touch_area_indi_pane_cp03_ParamLimits

0xce0e,	// (0x00063362) bg_touch_area_indi_pane_cp03

0xce28,	// (0x0006337c) popup_slider_window_g1_ParamLimits

0xce44,	// (0x00063398) popup_slider_window_g2_ParamLimits

0xce60,	// (0x000633b4) popup_slider_window_g3_ParamLimits

0xfcd8,	// (0x0006622c) popup_slider_window_g_ParamLimits

0xcec6,	// (0x0006341a) popup_slider_window_t1_ParamLimits

0xcf3a,	// (0x0006348e) small_volume_slider_vertical_pane_ParamLimits

0xd8c1,	// (0x00063e15) cell_graphic2_pane_ParamLimits

0xd910,	// (0x00063e64) bg_button_pane_cp10_ParamLimits

0xd910,	// (0x00063e64) bg_button_pane_cp10

0xd923,	// (0x00063e77) bg_button_pane_cp11_ParamLimits

0xd923,	// (0x00063e77) bg_button_pane_cp11

0xd936,	// (0x00063e8a) graphic2_pages_pane_g1_ParamLimits

0xd936,	// (0x00063e8a) graphic2_pages_pane_g1

0xd951,	// (0x00063ea5) graphic2_pages_pane_g2_ParamLimits

0xd951,	// (0x00063ea5) graphic2_pages_pane_g2

0x0001,

0xfd9c,	// (0x000662f0) graphic2_pages_pane_g_ParamLimits

0xfd9c,	// (0x000662f0) graphic2_pages_pane_g

0xd969,	// (0x00063ebd) graphic2_pages_pane_t1_ParamLimits

0xd969,	// (0x00063ebd) graphic2_pages_pane_t1

0xd981,	// (0x00063ed5) cell_graphic2_control_pane_ParamLimits

0xd981,	// (0x00063ed5) cell_graphic2_control_pane

0xd99f,	// (0x00063ef3) cell_graphic2_pane_g1_ParamLimits

0xd99f,	// (0x00063ef3) cell_graphic2_pane_g1

0xd9ac,	// (0x00063f00) cell_graphic2_pane_g2_ParamLimits

0xd9ac,	// (0x00063f00) cell_graphic2_pane_g2

0xd9b9,	// (0x00063f0d) cell_graphic2_pane_g3_ParamLimits

0xd9b9,	// (0x00063f0d) cell_graphic2_pane_g3

0xd9c6,	// (0x00063f1a) cell_graphic2_pane_g4_ParamLimits

0xd9c6,	// (0x00063f1a) cell_graphic2_pane_g4

0xd9d3,	// (0x00063f27) cell_graphic2_pane_g5_ParamLimits

0xd9d3,	// (0x00063f27) cell_graphic2_pane_g5

0x0004,

0xfda1,	// (0x000662f5) cell_graphic2_pane_g_ParamLimits

0xfda1,	// (0x000662f5) cell_graphic2_pane_g

0xd9ec,	// (0x00063f40) cell_graphic2_pane_t1_ParamLimits

0xd9ec,	// (0x00063f40) cell_graphic2_pane_t1

0x90c7,	// (0x0005f61b) grid_highlight_pane_cp11_ParamLimits

0x90c7,	// (0x0005f61b) grid_highlight_pane_cp11

0xe21b,	// (0x0006476f) bg_button_pane_cp05

0xda22,	// (0x00063f76) cell_graphic2_control_pane_g1

0xb811,	// (0x00061d65) bg_touch_area_indi_pane_g1

0xda4a,	// (0x00063f9e) aid_cmod_rocker_key_size

0xda54,	// (0x00063fa8) aid_cmode_itu_key_size

0xda5e,	// (0x00063fb2) main_cmode_video_pane

0xda68,	// (0x00063fbc) main_comp_mode_itu_pane

0xda74,	// (0x00063fc8) main_comp_mode_rocker_pane

0xda80,	// (0x00063fd4) cell_cmode_rocker_pane_ParamLimits

0xda80,	// (0x00063fd4) cell_cmode_rocker_pane

0xda92,	// (0x00063fe6) cell_cmode_itu_pane_ParamLimits

0xda92,	// (0x00063fe6) cell_cmode_itu_pane

0xf142,	// (0x00065696) bg_button_pane_cp06_ParamLimits

0xf142,	// (0x00065696) bg_button_pane_cp06

0xba81,	// (0x00061fd5) cell_cmode_rocker_pane_g1_ParamLimits

0xba81,	// (0x00061fd5) cell_cmode_rocker_pane_g1

0xcfde,	// (0x00063532) cell_cmode_rocker_pane_g2_ParamLimits

0xcfde,	// (0x00063532) cell_cmode_rocker_pane_g2

0x0001,

0xfdb1,	// (0x00066305) cell_cmode_rocker_pane_g_ParamLimits

0xfdb1,	// (0x00066305) cell_cmode_rocker_pane_g

0xe081,	// (0x000645d5) bg_button_pane_cp07

0xdaa7,	// (0x00063ffb) cell_cmode_itu_pane_g1

0xdab0,	// (0x00064004) cell_cmode_itu_pane_t1

0xdabe,	// (0x00064012) cell_cmode_itu_pane_t2

0x0001,

0xfdb6,	// (0x0006630a) cell_cmode_itu_pane_t

0xd204,	// (0x00063758) aid_touch_ctrl_left

0xd20c,	// (0x00063760) aid_touch_ctrl_right

0xe081,	// (0x000645d5) compa_mode_pane

0xdacc,	// (0x00064020) aid_cmod_rocker_key_size_cp

0xdad6,	// (0x0006402a) aid_cmode_itu_key_size_cp

0xdae0,	// (0x00064034) compa_mode_pane_g1

0xdae8,	// (0x0006403c) compa_mode_pane_g2

0xdaf0,	// (0x00064044) compa_mode_pane_g3

0x0002,

0xfdbb,	// (0x0006630f) compa_mode_pane_g

0xdaf8,	// (0x0006404c) main_comp_mode_itu_pane_cp

0xdb00,	// (0x00064054) main_comp_mode_rocker_pane_cp

0xdb08,	// (0x0006405c) cell_cmode_itu_pane_cp_ParamLimits

0xdb08,	// (0x0006405c) cell_cmode_itu_pane_cp

0xdb1d,	// (0x00064071) cell_cmode_rocker_pane_cp_ParamLimits

0xdb1d,	// (0x00064071) cell_cmode_rocker_pane_cp

0xf142,	// (0x00065696) bg_button_pane_cp06_cp_ParamLimits

0xf142,	// (0x00065696) bg_button_pane_cp06_cp

0xba81,	// (0x00061fd5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xba81,	// (0x00061fd5) cell_cmode_rocker_pane_g1_cp

0xb811,	// (0x00061d65) cell_cmode_rocker_pane_g2_cp

0xe081,	// (0x000645d5) bg_button_pane_cp07_cp

0xdb2f,	// (0x00064083) cell_cmode_itu_pane_g1_cp

0xdb38,	// (0x0006408c) cell_cmode_itu_pane_t1_cp

0xdb38,	// (0x0006408c) cell_cmode_itu_pane_t2_cp

0xa564,	// (0x00060ab8) settings_code_pane_cp2

0xe0e3,	// (0x00064637) bg_popup_window_pane_cp3_ParamLimits

0xe334,	// (0x00064888) heading_pane_cp3_ParamLimits

0xe343,	// (0x00064897) listscroll_popup_graphic_pane_ParamLimits

0x7c76,	// (0x0005e1ca) fep_hwr_aid_pane_ParamLimits

0x81f6,	// (0x0005e74a) aid_touch_sctrl_top_ParamLimits

0x8211,	// (0x0005e765) sctrl_sk_top_pane_g1_ParamLimits

0x7ecd,	// (0x0005e421) sctrl_sk_top_pane_g2_ParamLimits

0xfcf1,	// (0x00066245) sctrl_sk_top_pane_g_ParamLimits

0x821e,	// (0x0005e772) sctrl_sk_top_pane_t1_ParamLimits

0x81f6,	// (0x0005e74a) aid_touch_sctrl_bottom_ParamLimits

0x821e,	// (0x0005e772) sctrl_sk_bottom_pane_t1_ParamLimits

0xd14d,	// (0x000636a1) aid_area_touch_clock

0x8403,	// (0x0005e957) aid_vkb2_area_top_pane_cell_ParamLimits

0x8403,	// (0x0005e957) aid_vkb2_area_top_pane_cell

0x8551,	// (0x0005eaa5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8551,	// (0x0005eaa5) aid_vkb2_area_bottom_pane_cell

0xd6bc,	// (0x00063c10) popup_char_count_window

0xdb46,	// (0x0006409a) popup_char_count_window_g1

0xdb4f,	// (0x000640a3) popup_char_count_window_g2

0xdb58,	// (0x000640ac) popup_char_count_window_g3

0x0002,

0xfdc2,	// (0x00066316) popup_char_count_window_g

0xdb61,	// (0x000640b5) popup_char_count_window_t1

0x82c5,	// (0x0005e819) popup_fep_char_preview_window_ParamLimits

0x82c5,	// (0x0005e819) popup_fep_char_preview_window

0x8421,	// (0x0005e975) vkb2_top_candi_pane_ParamLimits

0x8421,	// (0x0005e975) vkb2_top_candi_pane

0xdb6f,	// (0x000640c3) cell_vkb2_top_candi_pane_ParamLimits

0xdb6f,	// (0x000640c3) cell_vkb2_top_candi_pane

0x8838,	// (0x0005ed8c) bg_popup_fep_char_preview_window_ParamLimits

0x8838,	// (0x0005ed8c) bg_popup_fep_char_preview_window

0x8846,	// (0x0005ed9a) popup_fep_char_preview_window_t1_ParamLimits

0x8846,	// (0x0005ed9a) popup_fep_char_preview_window_t1

0xdbb9,	// (0x0006410d) bg_popup_fep_char_preview_window_g1

0xdbc1,	// (0x00064115) bg_popup_fep_char_preview_window_g2

0xdbc9,	// (0x0006411d) bg_popup_fep_char_preview_window_g3

0xdbd1,	// (0x00064125) bg_popup_fep_char_preview_window_g4

0xdbd9,	// (0x0006412d) bg_popup_fep_char_preview_window_g5

0xdbe1,	// (0x00064135) bg_popup_fep_char_preview_window_g6

0xdbe9,	// (0x0006413d) bg_popup_fep_char_preview_window_g7

0xdbf1,	// (0x00064145) bg_popup_fep_char_preview_window_g8

0xdbf9,	// (0x0006414d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc9,	// (0x0006631d) bg_popup_fep_char_preview_window_g

0x7ecd,	// (0x0005e421) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7ecd,	// (0x0005e421) cell_vkb2_top_candi_pane_g1

0x7edb,	// (0x0005e42f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7edb,	// (0x0005e42f) cell_vkb2_top_candi_pane_g2

0xbd98,	// (0x000622ec) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbd98,	// (0x000622ec) cell_vkb2_top_candi_pane_g3

0x8888,	// (0x0005eddc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8888,	// (0x0005eddc) cell_vkb2_top_candi_pane_g4

0xbf96,	// (0x000624ea) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbf96,	// (0x000624ea) cell_vkb2_top_candi_pane_g5

0x88a9,	// (0x0005edfd) cell_vkb2_top_candi_pane_g6_ParamLimits

0x88a9,	// (0x0005edfd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x00066332) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x00066332) cell_vkb2_top_candi_pane_g

0x88b7,	// (0x0005ee0b) cell_vkb2_top_candi_pane_t1

0x7997,	// (0x0005deeb) aid_size_touch_slider_mark_ParamLimits

0x7997,	// (0x0005deeb) aid_size_touch_slider_mark

0xd7ff,	// (0x00063d53) grid_graphic2_catg_pane_ParamLimits

0xd7ff,	// (0x00063d53) grid_graphic2_catg_pane

0xd89d,	// (0x00063df1) popup_grid_graphic2_window_t1_ParamLimits

0xd89d,	// (0x00063df1) popup_grid_graphic2_window_t1

0xd8af,	// (0x00063e03) popup_grid_graphic2_window_t2_ParamLimits

0xd8af,	// (0x00063e03) popup_grid_graphic2_window_t2

0x0001,

0xfd97,	// (0x000662eb) popup_grid_graphic2_window_t_ParamLimits

0xfd97,	// (0x000662eb) popup_grid_graphic2_window_t

0xe21b,	// (0x0006476f) bg_button_pane_cp05_ParamLimits

0xda22,	// (0x00063f76) cell_graphic2_control_pane_g1_ParamLimits

0xdc01,	// (0x00064155) cell_graphic2_catg_pane_ParamLimits

0xdc01,	// (0x00064155) cell_graphic2_catg_pane

0xe081,	// (0x000645d5) bg_button_pane_cp12

0xdc13,	// (0x00064167) cell_graphic2_catg_pane_g1

0xd118,	// (0x0006366c) cell_tb_ext_pane_t1_ParamLimits

0x866e,	// (0x0005ebc2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x866e,	// (0x0005ebc2) vkb2_top_cell_right_narrow_pane

0x8686,	// (0x0005ebda) vkb2_top_cell_right_wide_pane_ParamLimits

0x8686,	// (0x0005ebda) vkb2_top_cell_right_wide_pane

0x7c68,	// (0x0005e1bc) bg_vkb2_func_pane_ParamLimits

0x7c68,	// (0x0005e1bc) bg_vkb2_func_pane

0x86f7,	// (0x0005ec4b) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c68,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c68,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp03

0x8755,	// (0x0005eca9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9043,	// (0x0005f597) bg_vkb2_func_pane_g1

0x904b,	// (0x0005f59f) bg_vkb2_func_pane_g2

0x905b,	// (0x0005f5af) bg_vkb2_func_pane_g3

0x9053,	// (0x0005f5a7) bg_vkb2_func_pane_g4

0x9063,	// (0x0005f5b7) bg_vkb2_func_pane_g5

0x906b,	// (0x0005f5bf) bg_vkb2_func_pane_g6

0x9073,	// (0x0005f5c7) bg_vkb2_func_pane_g7

0x907b,	// (0x0005f5cf) bg_vkb2_func_pane_g8

0x903b,	// (0x0005f58f) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0006633f) bg_vkb2_func_pane_g

0x7c68,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c68,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp01

0x86f7,	// (0x0005ec4b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x86f7,	// (0x0005ec4b) vkb2_top_cell_right_wide_pane_g1

0x7c68,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c68,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp02

0x88d6,	// (0x0005ee2a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x88d6,	// (0x0005ee2a) vkb2_top_cell_right_narrow_pane_g1

0xcd3a,	// (0x0006328e) aid_touch_area_decrease_ParamLimits

0xcd3a,	// (0x0006328e) aid_touch_area_decrease

0xcd5e,	// (0x000632b2) aid_touch_area_increase_ParamLimits

0xcd5e,	// (0x000632b2) aid_touch_area_increase

0xcd76,	// (0x000632ca) aid_touch_area_mute_ParamLimits

0xcd76,	// (0x000632ca) aid_touch_area_mute

0xcd92,	// (0x000632e6) aid_touch_area_slider_ParamLimits

0xcd92,	// (0x000632e6) aid_touch_area_slider

0xce7c,	// (0x000633d0) popup_slider_window_g4_ParamLimits

0xce7c,	// (0x000633d0) popup_slider_window_g4

0xce94,	// (0x000633e8) popup_slider_window_g5_ParamLimits

0xce94,	// (0x000633e8) popup_slider_window_g5

0xceb6,	// (0x0006340a) popup_slider_window_g6_ParamLimits

0xceb6,	// (0x0006340a) popup_slider_window_g6

0xcef4,	// (0x00063448) popup_slider_window_t2_ParamLimits

0xcef4,	// (0x00063448) popup_slider_window_t2

0x0001,

0xfce5,	// (0x00066239) popup_slider_window_t_ParamLimits

0xfce5,	// (0x00066239) popup_slider_window_t

0xcf0c,	// (0x00063460) slider_pane_ParamLimits

0xcf0c,	// (0x00063460) slider_pane

0xdc1c,	// (0x00064170) slider_pane_g1_ParamLimits

0xdc1c,	// (0x00064170) slider_pane_g1

0xdc30,	// (0x00064184) slider_pane_g2_ParamLimits

0xdc30,	// (0x00064184) slider_pane_g2

0xdc46,	// (0x0006419a) slider_pane_g3_ParamLimits

0xdc46,	// (0x0006419a) slider_pane_g3

0x0003,

0xfdfe,	// (0x00066352) slider_pane_g_ParamLimits

0xfdfe,	// (0x00066352) slider_pane_g

0x724b,	// (0x0005d79f) popup_tb_float_extension_window_ParamLimits

0x724b,	// (0x0005d79f) popup_tb_float_extension_window

0xdc72,	// (0x000641c6) aid_size_cell_tb_float_ext

0xe081,	// (0x000645d5) bg_popup_sub_window_cp28

0xdc7e,	// (0x000641d2) grid_tb_float_ext_pane

0xdc88,	// (0x000641dc) cell_tb_float_ext_pane_ParamLimits

0xdc88,	// (0x000641dc) cell_tb_float_ext_pane

0xdca2,	// (0x000641f6) cell_tb_float_ext_pane_g1

0xdcab,	// (0x000641ff) grid_highlight_pane_cp12

0x7db7,	// (0x0005e30b) cell_last_hwr_side_pane_ParamLimits

0x7db7,	// (0x0005e30b) cell_last_hwr_side_pane

0xb811,	// (0x00061d65) cell_last_hwr_side_pane_g1

0xdcb4,	// (0x00064208) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0006635b) cell_last_hwr_side_pane_g

0x861d,	// (0x0005eb71) vkb2_area_bottom_space_btn_pane_ParamLimits

0x861d,	// (0x0005eb71) vkb2_area_bottom_space_btn_pane

0x7ecd,	// (0x0005e421) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd771,	// (0x00063cc5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x88b7,	// (0x0005ee0b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x88f6,	// (0x0005ee4a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x88f6,	// (0x0005ee4a) vkb2_area_bottom_space_btn_pane_g1

0x8930,	// (0x0005ee84) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8930,	// (0x0005ee84) vkb2_area_bottom_space_btn_pane_g2

0x8966,	// (0x0005eeba) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8966,	// (0x0005eeba) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x00066360) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x00066360) vkb2_area_bottom_space_btn_pane_g

0x7d2b,	// (0x0005e27f) cel_fep_hwr_func_pane_ParamLimits

0x7d2b,	// (0x0005e27f) cel_fep_hwr_func_pane

0x7d67,	// (0x0005e2bb) cell_hwr_side_button_pane_ParamLimits

0x7d67,	// (0x0005e2bb) cell_hwr_side_button_pane

0xd14d,	// (0x000636a1) aid_area_touch_clock_ParamLimits

0xe21b,	// (0x0006476f) bg_uniindi_top_pane_ParamLimits

0xd15f,	// (0x000636b3) uniindi_top_pane_g1_ParamLimits

0xd175,	// (0x000636c9) uniindi_top_pane_g2_ParamLimits

0xd181,	// (0x000636d5) uniindi_top_pane_g3_ParamLimits

0xd192,	// (0x000636e6) uniindi_top_pane_g4_ParamLimits

0xfd1d,	// (0x00066271) uniindi_top_pane_g_ParamLimits

0xd19f,	// (0x000636f3) uniindi_top_pane_t1_ParamLimits

0xe21b,	// (0x0006476f) bg_vkb2_func_pane_cp01_ParamLimits

0xe21b,	// (0x0006476f) bg_vkb2_func_pane_cp01

0xdcbd,	// (0x00064211) cel_fep_hwr_func_pane_g1_ParamLimits

0xdcbd,	// (0x00064211) cel_fep_hwr_func_pane_g1

0xe21b,	// (0x0006476f) bg_vkb2_func_pane_cp02_ParamLimits

0xe21b,	// (0x0006476f) bg_vkb2_func_pane_cp02

0xdcbd,	// (0x00064211) cell_hwr_side_button_pane_g1_ParamLimits

0xdcbd,	// (0x00064211) cell_hwr_side_button_pane_g1

0x8ebf,	// (0x0005f413) status_pane_g4_ParamLimits

0x8ebf,	// (0x0005f413) status_pane_g4

0x8ed9,	// (0x0005f42d) status_pane_t1

0xb477,	// (0x000619cb) form2_midp_gauge_slider_cont_pane

0xb47f,	// (0x000619d3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb491,	// (0x000619e5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb4a3,	// (0x000619f7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x00066038) form2_midp_gauge_slider_pane_t_ParamLimits

0xb4b5,	// (0x00061a09) form2_midp_slider_pane_ParamLimits

0x828d,	// (0x0005e7e1) aid_size_cell_func_vkb2_ParamLimits

0x828d,	// (0x0005e7e1) aid_size_cell_func_vkb2

0xdc5e,	// (0x000641b2) slider_pane_g4_ParamLimits

0xdc5e,	// (0x000641b2) slider_pane_g4

0x89b0,	// (0x0005ef04) form2_midp_gauge_slider_pane_t2_cp01

0x89be,	// (0x0005ef12) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x89be,	// (0x0005ef12) form2_midp_gauge_slider_pane_t3_cp01

0x89db,	// (0x0005ef2f) form2_midp_slider_pane_cp01

0xe081,	// (0x000645d5) navi_smil_pane

0xdcf6,	// (0x0006424a) navi_smil_pane_g1

0xdcfe,	// (0x00064252) navi_smil_pane_t1

0xdccb,	// (0x0006421f) form2_midp_slider_pane_g1

0xdcd4,	// (0x00064228) form2_midp_slider_pane_g2

0xdcdc,	// (0x00064230) form2_midp_slider_pane_g3

0xdccb,	// (0x0006421f) form2_midp_slider_pane_g4

0xdce4,	// (0x00064238) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x00066369) form2_midp_slider_pane_g

0x89a0,	// (0x0005eef4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x89a0,	// (0x0005eef4) vkb2_area_bottom_space_btn_pane_g4

0x74d2,	// (0x0005da26) lc0_navi_pane_ParamLimits

0x74d2,	// (0x0005da26) lc0_navi_pane

0x7548,	// (0x0005da9c) lc0_stat_indi_pane_ParamLimits

0x7548,	// (0x0005da9c) lc0_stat_indi_pane

0x755f,	// (0x0005dab3) ls0_title_pane_ParamLimits

0x755f,	// (0x0005dab3) ls0_title_pane

0xf142,	// (0x00065696) bg_popup_sub_pane_cp14_ParamLimits

0xd134,	// (0x00063688) list_uniindi_pane_ParamLimits

0xd140,	// (0x00063694) uniindi_top_pane_ParamLimits

0xd1dc,	// (0x00063730) list_single_uniindi_pane_g1_ParamLimits

0xd1ef,	// (0x00063743) list_single_uniindi_pane_t1_ParamLimits

0x89e4,	// (0x0005ef38) lc0_stat_clock_pane_ParamLimits

0x89e4,	// (0x0005ef38) lc0_stat_clock_pane

0xdd0c,	// (0x00064260) lc0_stat_indi_pane_g1_ParamLimits

0xdd0c,	// (0x00064260) lc0_stat_indi_pane_g1

0xdd19,	// (0x0006426d) lc0_stat_indi_pane_g2_ParamLimits

0xdd19,	// (0x0006426d) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x00066374) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x00066374) lc0_stat_indi_pane_g

0x89f1,	// (0x0005ef45) lc0_uni_indicator_pane_ParamLimits

0x89f1,	// (0x0005ef45) lc0_uni_indicator_pane

0xdd26,	// (0x0006427a) ls0_title_pane_g1_ParamLimits

0xdd26,	// (0x0006427a) ls0_title_pane_g1

0xdd3a,	// (0x0006428e) ls0_title_pane_t1_ParamLimits

0xdd3a,	// (0x0006428e) ls0_title_pane_t1

0x89fe,	// (0x0005ef52) lc0_uni_indicator_pane_g1_ParamLimits

0x89fe,	// (0x0005ef52) lc0_uni_indicator_pane_g1

0xdd70,	// (0x000642c4) lc0_stat_clock_pane_t1

0x5365,	// (0x0005b8b9) main_ai5_pane

0xdd7e,	// (0x000642d2) ai5_sk_pane_ParamLimits

0xdd7e,	// (0x000642d2) ai5_sk_pane

0xdd8b,	// (0x000642df) cell_ai5_widget_pane_ParamLimits

0xdd8b,	// (0x000642df) cell_ai5_widget_pane

0xde54,	// (0x000643a8) aid_size_cell_widget_grid

0xde62,	// (0x000643b6) bg_ai5_widget_pane_ParamLimits

0xde62,	// (0x000643b6) bg_ai5_widget_pane

0xdede,	// (0x00064432) cell_ai5_widget_pane_g2

0xdef2,	// (0x00064446) cell_ai5_widget_pane_g3

0xdf0c,	// (0x00064460) cell_ai5_widget_pane_g4

0xdf1c,	// (0x00064470) cell_ai5_widget_pane_g5

0xdf2c,	// (0x00064480) cell_ai5_widget_pane_g6

0xdf38,	// (0x0006448c) cell_ai5_widget_pane_g7

0xdfa4,	// (0x000644f8) cell_ai5_widget_pane_t1_ParamLimits

0xdfa4,	// (0x000644f8) cell_ai5_widget_pane_t1

0xdfc1,	// (0x00064515) cell_ai5_widget_pane_t2_ParamLimits

0xdfc1,	// (0x00064515) cell_ai5_widget_pane_t2

0xdfd9,	// (0x0006452d) cell_ai5_widget_pane_t3_ParamLimits

0xdfd9,	// (0x0006452d) cell_ai5_widget_pane_t3

0xdff1,	// (0x00064545) cell_ai5_widget_pane_t4_ParamLimits

0xdff1,	// (0x00064545) cell_ai5_widget_pane_t4

0xe017,	// (0x0006456b) cell_ai5_widget_pane_t5_ParamLimits

0xe017,	// (0x0006456b) cell_ai5_widget_pane_t5

0xe036,	// (0x0006458a) cell_ai5_widget_pane_t6_ParamLimits

0xe036,	// (0x0006458a) cell_ai5_widget_pane_t6

0xe048,	// (0x0006459c) cell_ai5_widget_pane_t7_ParamLimits

0xe048,	// (0x0006459c) cell_ai5_widget_pane_t7

0xe067,	// (0x000645bb) cell_ai5_widget_pane_t8_ParamLimits

0xe067,	// (0x000645bb) cell_ai5_widget_pane_t8

0x000b,

0xfe40,	// (0x00066394) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x00066394) cell_ai5_widget_pane_t

0xe3c5,	// (0x00064919) grid_ai5_widget_pane

0xf142,	// (0x00065696) highlight_cell_ai5_widget_pane_ParamLimits

0xf142,	// (0x00065696) highlight_cell_ai5_widget_pane

0xe3d3,	// (0x00064927) ai5_sk_left_pane

0xe3dd,	// (0x00064931) ai5_sk_middle_pane

0xe3e7,	// (0x0006493b) ai5_sk_right_pane

0xe3f1,	// (0x00064945) bg_ai5_widget_pane_g1_ParamLimits

0xe3f1,	// (0x00064945) bg_ai5_widget_pane_g1

0xe3fd,	// (0x00064951) bg_ai5_widget_pane_g2_ParamLimits

0xe3fd,	// (0x00064951) bg_ai5_widget_pane_g2

0xe409,	// (0x0006495d) bg_ai5_widget_pane_g3_ParamLimits

0xe409,	// (0x0006495d) bg_ai5_widget_pane_g3

0xe415,	// (0x00064969) bg_ai5_widget_pane_g4_ParamLimits

0xe415,	// (0x00064969) bg_ai5_widget_pane_g4

0xe421,	// (0x00064975) bg_ai5_widget_pane_g5_ParamLimits

0xe421,	// (0x00064975) bg_ai5_widget_pane_g5

0xe42d,	// (0x00064981) bg_ai5_widget_pane_g6_ParamLimits

0xe42d,	// (0x00064981) bg_ai5_widget_pane_g6

0xe439,	// (0x0006498d) bg_ai5_widget_pane_g7_ParamLimits

0xe439,	// (0x0006498d) bg_ai5_widget_pane_g7

0xe445,	// (0x00064999) bg_ai5_widget_pane_g8_ParamLimits

0xe445,	// (0x00064999) bg_ai5_widget_pane_g8

0xe451,	// (0x000649a5) bg_ai5_widget_pane_g9_ParamLimits

0xe451,	// (0x000649a5) bg_ai5_widget_pane_g9

0x0008,

0xfe59,	// (0x000663ad) bg_ai5_widget_pane_g_ParamLimits

0xfe59,	// (0x000663ad) bg_ai5_widget_pane_g

0xe483,	// (0x000649d7) cell_shortcut_ai5_widget_pane_ParamLimits

0xe483,	// (0x000649d7) cell_shortcut_ai5_widget_pane

0x16b6,	// (0x00057c0a) bg_cell_shortcut_ai5_widget_pane

0xe494,	// (0x000649e8) cell_grid_ai5_widget_pane_g1

0x16b6,	// (0x00057c0a) highlight_cell_shortcut_ai5_widget_pane

0x9043,	// (0x0005f597) ai5_sk_left_pane_g1

0xe49d,	// (0x000649f1) ai5_sk_left_pane_g2

0xe4a5,	// (0x000649f9) ai5_sk_left_pane_g3

0xe4ad,	// (0x00064a01) ai5_sk_left_pane_g4

0x0003,

0xfe6c,	// (0x000663c0) ai5_sk_left_pane_g

0xe4b5,	// (0x00064a09) ai5_sk_left_pane_t1

0x904b,	// (0x0005f59f) ai5_sk_right_pane_g1

0xe4c3,	// (0x00064a17) ai5_sk_right_pane_g2

0xe4cb,	// (0x00064a1f) ai5_sk_right_pane_g3

0xe4d3,	// (0x00064a27) ai5_sk_right_pane_g4

0x0003,

0xfe75,	// (0x000663c9) ai5_sk_right_pane_g

0xe4db,	// (0x00064a2f) ai5_sk_right_pane_t1

0x904b,	// (0x0005f59f) ai5_sk_middle_pane_g1

0x9043,	// (0x0005f597) ai5_sk_middle_pane_g2

0x9063,	// (0x0005f5b7) ai5_sk_middle_pane_g3

0xe4cb,	// (0x00064a1f) ai5_sk_middle_pane_g4

0xe4a5,	// (0x000649f9) ai5_sk_middle_pane_g5

0xe4e9,	// (0x00064a3d) ai5_sk_middle_pane_g6

0xe4f1,	// (0x00064a45) ai5_sk_middle_pane_g7

0x0006,

0xfe7e,	// (0x000663d2) ai5_sk_middle_pane_g

0x7358,	// (0x0005d8ac) aid_touch_area_size_lc0_ParamLimits

0x7358,	// (0x0005d8ac) aid_touch_area_size_lc0

0x7efc,	// (0x0005e450) cell_hwr_candidate_pane_t1_ParamLimits

0x7374,	// (0x0005d8c8) aid_touch_navi_pane

0x8e69,	// (0x0005f3bd) status_dt_navi_pane_ParamLimits

0x8e69,	// (0x0005f3bd) status_dt_navi_pane

0x8e76,	// (0x0005f3ca) status_dt_sta_pane_ParamLimits

0x8e76,	// (0x0005f3ca) status_dt_sta_pane

0xe4f9,	// (0x00064a4d) dt_sta_controll_pane

0xe506,	// (0x00064a5a) dt_sta_indi_pane

0xe517,	// (0x00064a6b) dt_sta_title_pane

0xe21b,	// (0x0006476f) bg_dt_sta_indi_pane_ParamLimits

0xe21b,	// (0x0006476f) bg_dt_sta_indi_pane

0xe52a,	// (0x00064a7e) dt_sta_battery_pane

0xe532,	// (0x00064a86) dt_sta_indi_pane_g1

0xe53b,	// (0x00064a8f) dt_sta_indi_pane_g2

0xe544,	// (0x00064a98) dt_sta_indi_pane_g3

0x0002,

0xfe8d,	// (0x000663e1) dt_sta_indi_pane_g

0xe54d,	// (0x00064aa1) dt_sta_signal_pane

0xf142,	// (0x00065696) bg_dt_sta_title_pane_ParamLimits

0xf142,	// (0x00065696) bg_dt_sta_title_pane

0x9e9d,	// (0x000603f1) dt_sta_title_pane_g1

0xe556,	// (0x00064aaa) dt_sta_title_pane_t1_ParamLimits

0xe556,	// (0x00064aaa) dt_sta_title_pane_t1

0xe081,	// (0x000645d5) bg_dt_sta_control_pane

0xe56b,	// (0x00064abf) dt_sta_controll_pane_g1

0xe574,	// (0x00064ac8) bg_dt_sta_title_pane_g1

0xe57d,	// (0x00064ad1) bg_dt_sta_title_pane_g2

0xe586,	// (0x00064ada) bg_dt_sta_title_pane_g3

0x0002,

0xfe94,	// (0x000663e8) bg_dt_sta_title_pane_g

0xb811,	// (0x00061d65) bg_dt_sta_indi_pane_g1

0xe58f,	// (0x00064ae3) dt_sta_signal_pane_g1

0xe597,	// (0x00064aeb) dt_sta_signal_pane_g2

0x0001,

0xfe9b,	// (0x000663ef) dt_sta_signal_pane_g

0xe59f,	// (0x00064af3) dt_sta_battery_pane_g1

0xe5a8,	// (0x00064afc) dt_sta_battery_pane_t1

0xb811,	// (0x00061d65) bg_dt_sta_control_pane_g1

0x12db,	// (0x0005782f) fep_china_uni_eep_pane

0x12e3,	// (0x00057837) fep_china_uni_entry_pane_ParamLimits

0x12f3,	// (0x00057847) popup_fep_china_uni_window_g1_ParamLimits

0x1303,	// (0x00057857) popup_fep_china_uni_window_g2_ParamLimits

0x1303,	// (0x00057857) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00065c47) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00065c47) popup_fep_china_uni_window_g

0xe5b7,	// (0x00064b0b) fep_china_uni_eep_pane_g1

0xe5bf,	// (0x00064b13) fep_china_uni_eep_pane_t1

0xdced,	// (0x00064241) aid_touch_area_size_smil_player

0x74ca,	// (0x0005da1e) lc0_clock_pane

0x8ecd,	// (0x0005f421) status_pane_g5_ParamLimits

0x8ecd,	// (0x0005f421) status_pane_g5

0x6f0c,	// (0x0005d460) popup_keymap_window

0x8e8b,	// (0x0005f3df) status_icon_pane

0xdef2,	// (0x00064446) cell_ai5_widget_pane_g3_ParamLimits

0xdf0c,	// (0x00064460) cell_ai5_widget_pane_g4_ParamLimits

0xdf1c,	// (0x00064470) cell_ai5_widget_pane_g5_ParamLimits

0xdf44,	// (0x00064498) cell_ai5_widget_pane_g8_ParamLimits

0xdf44,	// (0x00064498) cell_ai5_widget_pane_g8

0xdf58,	// (0x000644ac) cell_ai5_widget_pane_g9_ParamLimits

0xdf58,	// (0x000644ac) cell_ai5_widget_pane_g9

0xdf6c,	// (0x000644c0) cell_ai5_widget_pane_g10_ParamLimits

0xdf6c,	// (0x000644c0) cell_ai5_widget_pane_g10

0xe5ce,	// (0x00064b22) status_icon_pane_g1

0xe081,	// (0x000645d5) bg_popup_sub_pane_cp13

0xe5d6,	// (0x00064b2a) popup_keymap_window_t1

0x6c37,	// (0x0005d18b) control_pane_g6_ParamLimits

0x6c37,	// (0x0005d18b) control_pane_g6

0x6c44,	// (0x0005d198) control_pane_g7_ParamLimits

0x6c44,	// (0x0005d198) control_pane_g7

0x6c51,	// (0x0005d1a5) control_pane_g8_ParamLimits

0x6c51,	// (0x0005d1a5) control_pane_g8

0xe4f9,	// (0x00064a4d) dt_sta_controll_pane_ParamLimits

0xe506,	// (0x00064a5a) dt_sta_indi_pane_ParamLimits

0xe517,	// (0x00064a6b) dt_sta_title_pane_ParamLimits

0xf08d,	// (0x000655e1) aid_size_touch_scroll_bar_cale

0x543e,	// (0x0005b992) popup_discreet_window_ParamLimits

0x543e,	// (0x0005b992) popup_discreet_window

0x54b8,	// (0x0005ba0c) popup_sk_window

0x96e1,	// (0x0005fc35) bg_popup_sub_pane_cp28_ParamLimits

0x96e1,	// (0x0005fc35) bg_popup_sub_pane_cp28

0xe5e4,	// (0x00064b38) popup_discreet_window_g1_ParamLimits

0xe5e4,	// (0x00064b38) popup_discreet_window_g1

0xe604,	// (0x00064b58) popup_discreet_window_t1_ParamLimits

0xe604,	// (0x00064b58) popup_discreet_window_t1

0xe622,	// (0x00064b76) popup_discreet_window_t2_ParamLimits

0xe622,	// (0x00064b76) popup_discreet_window_t2

0x0002,

0xfea0,	// (0x000663f4) popup_discreet_window_t_ParamLimits

0xfea0,	// (0x000663f4) popup_discreet_window_t

0x8a12,	// (0x0005ef66) popup_sk_window_g1

0x8a1c,	// (0x0005ef70) popup_sk_window_g2

0x0001,

0xfea7,	// (0x000663fb) popup_sk_window_g

0x8a24,	// (0x0005ef78) popup_sk_window_t1

0x8a32,	// (0x0005ef86) popup_sk_window_t1_copy1

0xdede,	// (0x00064432) cell_ai5_widget_pane_g2_ParamLimits

0xe353,	// (0x000648a7) cell_ai5_widget_pane_t9_ParamLimits

0xe353,	// (0x000648a7) cell_ai5_widget_pane_t9

0xe081,	// (0x000645d5) main_fep_fshwr2_pane

0x8a40,	// (0x0005ef94) aid_fshwr2_btn_pane

0x8a54,	// (0x0005efa8) aid_fshwr2_syb_pane

0x8a68,	// (0x0005efbc) aid_fshwr2_txt_pane

0x8a78,	// (0x0005efcc) fshwr2_func_candi_pane

0x8a9c,	// (0x0005eff0) fshwr2_hwr_syb_pane

0x8ab6,	// (0x0005f00a) fshwr2_icf_pane

0x5365,	// (0x0005b8b9) fshwr2_icf_bg_pane

0x8ae4,	// (0x0005f038) fshwr2_icf_pane_t1_ParamLimits

0x8ae4,	// (0x0005f038) fshwr2_icf_pane_t1

0x1258,	// (0x000577ac) fshwr2_func_candi_pane_g1

0xe674,	// (0x00064bc8) fshwr2_func_candi_row_pane_ParamLimits

0xe674,	// (0x00064bc8) fshwr2_func_candi_row_pane

0x8afd,	// (0x0005f051) cell_fshwr2_syb_pane_ParamLimits

0x8afd,	// (0x0005f051) cell_fshwr2_syb_pane

0x8b20,	// (0x0005f074) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8b20,	// (0x0005f074) fshwr2_hwr_syb_pane_g1

0x5365,	// (0x0005b8b9) bg_popup_call_pane_cp01

0x8b2e,	// (0x0005f082) fshwr2_func_candi_cell_pane_ParamLimits

0x8b2e,	// (0x0005f082) fshwr2_func_candi_cell_pane

0x9d3d,	// (0x00060291) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9d3d,	// (0x00060291) fshwr2_func_candi_cell_bg_pane

0x8b79,	// (0x0005f0cd) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8b79,	// (0x0005f0cd) fshwr2_func_candi_cell_pane_g1

0x8b99,	// (0x0005f0ed) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8b99,	// (0x0005f0ed) fshwr2_func_candi_cell_pane_t1

0x5365,	// (0x0005b8b9) bg_button_pane_cp08

0xf51d,	// (0x00065a71) cell_fshwr2_syb_bg_pane

0x8bac,	// (0x0005f100) cell_fshwr2_syb_bg_pane_g1

0x8bc0,	// (0x0005f114) cell_fshwr2_syb_bg_pane_t1

0xf142,	// (0x00065696) main_tmo_pane

0xa1d6,	// (0x0006072a) uni_indicator_pane_g1_ParamLimits

0xa1e9,	// (0x0006073d) uni_indicator_pane_g2_ParamLimits

0xa1fb,	// (0x0006074f) uni_indicator_pane_g3_ParamLimits

0xa20a,	// (0x0006075e) uni_indicator_pane_g4_ParamLimits

0xa20a,	// (0x0006075e) uni_indicator_pane_g4

0xa21e,	// (0x00060772) uni_indicator_pane_g5_ParamLimits

0xa21e,	// (0x00060772) uni_indicator_pane_g5

0xa21e,	// (0x00060772) uni_indicator_pane_g6_ParamLimits

0xa21e,	// (0x00060772) uni_indicator_pane_g6

0xf8f7,	// (0x00065e4b) uni_indicator_pane_g_ParamLimits

0xcd1c,	// (0x00063270) popup_tmo_note_window_ParamLimits

0xcd1c,	// (0x00063270) popup_tmo_note_window

0x826f,	// (0x0005e7c3) fshwr2_bg_pane

0x8b8a,	// (0x0005f0de) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8b8a,	// (0x0005f0de) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeac,	// (0x00066400) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeac,	// (0x00066400) fshwr2_func_candi_cell_pane_g

0x7eb5,	// (0x0005e409) bg_popup_window_pane_cp01

0x8bd6,	// (0x0005f12a) bg_popup_window_pane_g1_cp01

0xe69b,	// (0x00064bef) bg_popup_window_pane_cp22_ParamLimits

0xe69b,	// (0x00064bef) bg_popup_window_pane_cp22

0xe6a9,	// (0x00064bfd) listscroll_tmo_link_pane_ParamLimits

0xe6a9,	// (0x00064bfd) listscroll_tmo_link_pane

0xe6e9,	// (0x00064c3d) popup_tmo_note_window_g1_ParamLimits

0xe6e9,	// (0x00064c3d) popup_tmo_note_window_g1

0xe6f6,	// (0x00064c4a) tmo_note_info_pane_ParamLimits

0xe6f6,	// (0x00064c4a) tmo_note_info_pane

0xe710,	// (0x00064c64) list_tmo_note_info_pane_g1_ParamLimits

0xe710,	// (0x00064c64) list_tmo_note_info_pane_g1

0xe727,	// (0x00064c7b) list_tmo_note_info_pane_g2_ParamLimits

0xe727,	// (0x00064c7b) list_tmo_note_info_pane_g2

0x0001,

0xfeb1,	// (0x00066405) list_tmo_note_info_pane_g_ParamLimits

0xfeb1,	// (0x00066405) list_tmo_note_info_pane_g

0xe743,	// (0x00064c97) list_tmo_note_info_text_pane_ParamLimits

0xe743,	// (0x00064c97) list_tmo_note_info_text_pane

0xe7c4,	// (0x00064d18) list_tmo_link_pane

0xe7d1,	// (0x00064d25) scroll_pane_cp20

0xe7de,	// (0x00064d32) list_single_tmo_link_pane_ParamLimits

0xe7de,	// (0x00064d32) list_single_tmo_link_pane

0xe7ee,	// (0x00064d42) list_single_tmo_link_pane_t1

0xe7fc,	// (0x00064d50) list_tmo_note_info_text_pane_t1_ParamLimits

0xe7fc,	// (0x00064d50) list_tmo_note_info_text_pane_t1

0x6190,	// (0x0005c6e4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6190,	// (0x0005c6e4) aid_size_touch_scroll_bar_cp01

0x609d,	// (0x0005c5f1) aid_size_touch_slider_marker

0x54a0,	// (0x0005b9f4) popup_settings_window_ParamLimits

0x54a0,	// (0x0005b9f4) popup_settings_window

0x3b2e,	// (0x0005a082) popup_candi_list_indi_window

0x7374,	// (0x0005d8c8) aid_touch_navi_pane_ParamLimits

0x81ca,	// (0x0005e71e) rs_clock_indi_pane

0x81d3,	// (0x0005e727) sctrl_sk_bottom_pane_ParamLimits

0x81e4,	// (0x0005e738) sctrl_sk_top_pane_ParamLimits

0x82df,	// (0x0005e833) popup_fep_tooltip_window

0xde54,	// (0x000643a8) aid_size_cell_widget_grid_ParamLimits

0xdec9,	// (0x0006441d) cell_ai5_widget_pane_g1_ParamLimits

0xdec9,	// (0x0006441d) cell_ai5_widget_pane_g1

0xdf2c,	// (0x00064480) cell_ai5_widget_pane_g6_ParamLimits

0xdf38,	// (0x0006448c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe25,	// (0x00066379) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x00066379) cell_ai5_widget_pane_g

0xe382,	// (0x000648d6) cell_ai5_widget_pane_t10_ParamLimits

0xe382,	// (0x000648d6) cell_ai5_widget_pane_t10

0xe3c5,	// (0x00064919) grid_ai5_widget_pane_ParamLimits

0xe45d,	// (0x000649b1) cell_contacts_ai5_widget_pane_ParamLimits

0xe45d,	// (0x000649b1) cell_contacts_ai5_widget_pane

0xe637,	// (0x00064b8b) popup_discreet_window_t3_ParamLimits

0xe637,	// (0x00064b8b) popup_discreet_window_t3

0x8ace,	// (0x0005f022) popup_fshwr2_char_preview_window_ParamLimits

0x8ace,	// (0x0005f022) popup_fshwr2_char_preview_window

0xe761,	// (0x00064cb5) tmo_note_info_pane_t1

0xe776,	// (0x00064cca) tmo_note_info_pane_t2

0xe78b,	// (0x00064cdf) tmo_note_info_pane_t3

0xe7a0,	// (0x00064cf4) tmo_note_info_pane_t4

0xe7b2,	// (0x00064d06) tmo_note_info_pane_t5

0x0004,

0xfeb6,	// (0x0006640a) tmo_note_info_pane_t

0xe7c4,	// (0x00064d18) list_tmo_link_pane_ParamLimits

0xe7d1,	// (0x00064d25) scroll_pane_cp20_ParamLimits

0x5365,	// (0x0005b8b9) bg_popup_fep_char_preview_window_cp01

0xe815,	// (0x00064d69) popup_fshwr2_char_preview_window_t1

0xe823,	// (0x00064d77) popup_candi_list_indi_window_g1

0xe82c,	// (0x00064d80) bg_cell_contacts_ai5_widget_pane

0xe838,	// (0x00064d8c) cell_contacts_ai5_widget_pane_g1

0xbeeb,	// (0x0006243f) cell_contacts_ai5_widget_pane_g2

0xe84d,	// (0x00064da1) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec1,	// (0x00066415) cell_contacts_ai5_widget_pane_g

0xe859,	// (0x00064dad) cell_contacts_ai5_widget_pane_t1

0xf142,	// (0x00065696) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe8d0,	// (0x00064e24) settings_container_pane

0x16b6,	// (0x00057c0a) listscroll_set_pane_copy1

0xad98,	// (0x000612ec) scroll_pane_cp121_copy1

0x9486,	// (0x0005f9da) set_content_pane_copy1

0xe8dc,	// (0x00064e30) aid_height_set_list_copy1_ParamLimits

0xe8dc,	// (0x00064e30) aid_height_set_list_copy1

0xa416,	// (0x0006096a) aid_size_parent_copy1_ParamLimits

0xa416,	// (0x0006096a) aid_size_parent_copy1

0xe8e8,	// (0x00064e3c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8e8,	// (0x00064e3c) button_value_adjust_pane_cp6_copy1

0xf51d,	// (0x00065a71) list_highlight_pane_cp2_copy1_ParamLimits

0xf51d,	// (0x00065a71) list_highlight_pane_cp2_copy1

0xe8fc,	// (0x00064e50) list_set_pane_copy1_ParamLimits

0xe8fc,	// (0x00064e50) list_set_pane_copy1

0xe86b,	// (0x00064dbf) main_pane_set_t1_copy1_ParamLimits

0xe86b,	// (0x00064dbf) main_pane_set_t1_copy1

0xe8a5,	// (0x00064df9) main_pane_set_t2_copy1_ParamLimits

0xe8a5,	// (0x00064df9) main_pane_set_t2_copy1

0xe9a9,	// (0x00064efd) main_pane_set_t3_copy1

0xe9b7,	// (0x00064f0b) main_pane_set_t4_copy1

0xe8c4,	// (0x00064e18) set_content_pane_g1_copy1_ParamLimits

0xe8c4,	// (0x00064e18) set_content_pane_g1_copy1

0xe9c5,	// (0x00064f19) setting_code_pane_copy1

0xe9cd,	// (0x00064f21) setting_slider_graphic_pane_copy1

0xe9cd,	// (0x00064f21) setting_slider_pane_copy1

0xe9d5,	// (0x00064f29) setting_text_pane_copy1

0xe9d5,	// (0x00064f29) setting_volume_pane_copy1

0xe9c5,	// (0x00064f19) settings_code_pane_cp2_copy1

0xe9dd,	// (0x00064f31) settings_code_pane_cp_copy1_ParamLimits

0xe9dd,	// (0x00064f31) settings_code_pane_cp_copy1

0x8bdf,	// (0x0005f133) volume_set_pane_copy1

0xe9f1,	// (0x00064f45) volume_set_pane_g10_copy1

0xe9f9,	// (0x00064f4d) volume_set_pane_g1_copy1

0xea01,	// (0x00064f55) volume_set_pane_g2_copy1

0xea09,	// (0x00064f5d) volume_set_pane_g3_copy1

0xea11,	// (0x00064f65) volume_set_pane_g4_copy1

0xea19,	// (0x00064f6d) volume_set_pane_g5_copy1

0xea21,	// (0x00064f75) volume_set_pane_g6_copy1

0xea29,	// (0x00064f7d) volume_set_pane_g7_copy1

0xea31,	// (0x00064f85) volume_set_pane_g8_copy1

0xea39,	// (0x00064f8d) volume_set_pane_g9_copy1

0xe0e3,	// (0x00064637) bg_set_opt_pane_cp_copy1_ParamLimits

0xe0e3,	// (0x00064637) bg_set_opt_pane_cp_copy1

0x8be7,	// (0x0005f13b) setting_slider_pane_t1_copy1_ParamLimits

0x8be7,	// (0x0005f13b) setting_slider_pane_t1_copy1

0x8c06,	// (0x0005f15a) setting_slider_pane_t2_copy1_ParamLimits

0x8c06,	// (0x0005f15a) setting_slider_pane_t2_copy1

0x8c20,	// (0x0005f174) setting_slider_pane_t3_copy1_ParamLimits

0x8c20,	// (0x0005f174) setting_slider_pane_t3_copy1

0x8c38,	// (0x0005f18c) slider_set_pane_copy1_ParamLimits

0x8c38,	// (0x0005f18c) slider_set_pane_copy1

0xf19a,	// (0x000656ee) set_opt_bg_pane_g1_copy2

0xf1a2,	// (0x000656f6) set_opt_bg_pane_g2_copy2

0xea41,	// (0x00064f95) set_opt_bg_pane_g3_copy2

0xf1b2,	// (0x00065706) set_opt_bg_pane_g4_copy2

0xf1ba,	// (0x0006570e) set_opt_bg_pane_g5_copy2

0xf1c2,	// (0x00065716) set_opt_bg_pane_g6_copy2

0xea4b,	// (0x00064f9f) set_opt_bg_pane_g7_copy2

0xea53,	// (0x00064fa7) set_opt_bg_pane_g8_copy2

0xea5d,	// (0x00064fb1) set_opt_bg_pane_g9_copy2

0x8c4e,	// (0x0005f1a2) aid_size_touch_slider_mark_copy1_ParamLimits

0x8c4e,	// (0x0005f1a2) aid_size_touch_slider_mark_copy1

0xea67,	// (0x00064fbb) slider_set_pane_g1_copy1

0x8c62,	// (0x0005f1b6) slider_set_pane_g2_copy1

0x79b7,	// (0x0005df0b) slider_set_pane_g3_copy1_ParamLimits

0x79b7,	// (0x0005df0b) slider_set_pane_g3_copy1

0x79cb,	// (0x0005df1f) slider_set_pane_g4_copy1_ParamLimits

0x79cb,	// (0x0005df1f) slider_set_pane_g4_copy1

0x79e3,	// (0x0005df37) slider_set_pane_g5_copy1_ParamLimits

0x79e3,	// (0x0005df37) slider_set_pane_g5_copy1

0x79b7,	// (0x0005df0b) slider_set_pane_g6_copy1_ParamLimits

0x79b7,	// (0x0005df0b) slider_set_pane_g6_copy1

0x8c6a,	// (0x0005f1be) slider_set_pane_g7_copy1_ParamLimits

0x8c6a,	// (0x0005f1be) slider_set_pane_g7_copy1

0xe095,	// (0x000645e9) bg_set_opt_pane_cp2_copy1

0xea70,	// (0x00064fc4) setting_slider_graphic_pane_g1_copy1

0xea79,	// (0x00064fcd) setting_slider_graphic_pane_t1_copy1

0xea89,	// (0x00064fdd) setting_slider_graphic_pane_t2_copy1

0xea99,	// (0x00064fed) slider_set_pane_cp_copy1

0xeaa9,	// (0x00064ffd) input_focus_pane_cp1_copy1

0xeab2,	// (0x00065006) list_set_text_pane_copy1

0xeaba,	// (0x0006500e) setting_text_pane_g1_copy1

0x40de,	// (0x0005a632) set_text_pane_t1_copy1

0xeaa9,	// (0x00064ffd) input_focus_pane_cp2_copy1

0xeaba,	// (0x0006500e) setting_code_pane_g1_copy1

0xeac3,	// (0x00065017) setting_code_pane_t1_copy1

0xead1,	// (0x00065025) list_set_graphic_pane_copy1

0xe095,	// (0x000645e9) bg_set_opt_pane_cp4_copy1

0x1433,	// (0x00057987) list_set_graphic_pane_g1_copy1_ParamLimits

0x1433,	// (0x00057987) list_set_graphic_pane_g1_copy1

0xeae5,	// (0x00065039) list_set_graphic_pane_g2_copy1

0x144b,	// (0x0005799f) list_set_graphic_pane_t1_copy1_ParamLimits

0x144b,	// (0x0005799f) list_set_graphic_pane_t1_copy1

0xb811,	// (0x00061d65) rs_clock_indi_pane_g1

0xeaed,	// (0x00065041) rs_clock_indi_pane_t1

0xeafb,	// (0x0006504f) rs_indi_pane

0xeb03,	// (0x00065057) rs_indi_pane_g1

0xeb0c,	// (0x00065060) rs_indi_pane_g2

0xe823,	// (0x00064d77) rs_indi_pane_g3

0x0002,

0xfec8,	// (0x0006641c) rs_indi_pane_g

0x16b6,	// (0x00057c0a) bg_popup_preview_window_pane_cp03

0xeb15,	// (0x00065069) popup_fep_tooltip_window_t1

0xc4cb,	// (0x00062a1f) popup_note2_window_g2_ParamLimits

0xc4cb,	// (0x00062a1f) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x000661b0) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x000661b0) popup_note2_window_g

0xc9b8,	// (0x00062f0c) bg_popup_sub_pane_cp11_ParamLimits

0xc9c5,	// (0x00062f19) cell_ai3_links_pane_g1_ParamLimits

0xc9dc,	// (0x00062f30) cell_ai3_links_pane_t1

0x40de,	// (0x0005a632) set_text_pane_t1_copy1_ParamLimits

0x15f8,	// (0x00057b4c) cell_graphic_popup_pane_cp2_ParamLimits

0x15f8,	// (0x00057b4c) cell_graphic_popup_pane_cp2

0xeb23,	// (0x00065077) cell_graphic_popup_pane_g1_cp2

0xf010,	// (0x00065564) cell_graphic_popup_pane_g2_cp2

0xeb2b,	// (0x0006507f) cell_graphic_popup_pane_g3_cp2

0xeb33,	// (0x00065087) cell_graphic_popup_pane_t2_cp2

0xf021,	// (0x00065575) grid_highlight_pane_cp3_cp2

0xf405,	// (0x00065959) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf142,	// (0x00065696) main_tmo_pane_ParamLimits

0xcd10,	// (0x00063264) popup_tmo_big_image_note_window

0xdeb8,	// (0x0006440c) cell_ai5_widget_list_pane

0xdec0,	// (0x00064414) cell_ai5_widget_lrg_icon_pane

0xe761,	// (0x00064cb5) tmo_note_info_pane_t1_ParamLimits

0xe776,	// (0x00064cca) tmo_note_info_pane_t2_ParamLimits

0xe78b,	// (0x00064cdf) tmo_note_info_pane_t3_ParamLimits

0xe7a0,	// (0x00064cf4) tmo_note_info_pane_t4_ParamLimits

0xe7b2,	// (0x00064d06) tmo_note_info_pane_t5_ParamLimits

0xfeb6,	// (0x0006640a) tmo_note_info_pane_t_ParamLimits

0xe8d0,	// (0x00064e24) settings_container_pane_ParamLimits

0xeaa1,	// (0x00064ff5) indicator_popup_pane_cp5

0xeaa1,	// (0x00064ff5) indicator_popup_pane_cp6

0xead1,	// (0x00065025) list_set_graphic_pane_copy1_ParamLimits

0xe081,	// (0x000645d5) bg_popup_window_pane_cp23

0xeb41,	// (0x00065095) popup_tmo_big_image_note_window_g1

0xeb4a,	// (0x0006509e) popup_tmo_big_image_note_window_t1

0xeb5a,	// (0x000650ae) popup_tmo_big_image_note_window_t2

0xeb6a,	// (0x000650be) popup_tmo_big_image_note_window_t3

0x0002,

0xfecf,	// (0x00066423) popup_tmo_big_image_note_window_t

0xb811,	// (0x00061d65) cell_ai5_widget_lrg_icon_pane_g1

0xeb7a,	// (0x000650ce) cell_ai5_widget_lrg_icon_pane_t1

0xeb88,	// (0x000650dc) cell_ai5_widget_list_row_pane_ParamLimits

0xeb88,	// (0x000650dc) cell_ai5_widget_list_row_pane

0xeb9f,	// (0x000650f3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeb9f,	// (0x000650f3) cell_ai5_widget_list_row_pane_g1

0xebac,	// (0x00065100) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xebac,	// (0x00065100) cell_ai5_widget_list_row_pane_t1

0xebd7,	// (0x0006512b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xebd7,	// (0x0006512b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed6,	// (0x0006642a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed6,	// (0x0006642a) cell_ai5_widget_list_row_pane_t

0x5365,	// (0x0005b8b9) main_fep_vtchi_ss_pane

0xec27,	// (0x0006517b) popup_fep_char_pre_window

0xec2f,	// (0x00065183) popup_fep_ituss_window

0xec5b,	// (0x000651af) popup_fep_vkbss_window

0xf51d,	// (0x00065a71) grid_vkbss_keypad_pane_ParamLimits

0xf51d,	// (0x00065a71) grid_vkbss_keypad_pane

0xec9b,	// (0x000651ef) ituss_keypad_pane

0x8c8a,	// (0x0005f1de) aid_vkbss_key_offset_ParamLimits

0x8c8a,	// (0x0005f1de) aid_vkbss_key_offset

0x8c96,	// (0x0005f1ea) cell_vkbss_key_pane_ParamLimits

0x8c96,	// (0x0005f1ea) cell_vkbss_key_pane

0xecab,	// (0x000651ff) bg_cell_vkbss_key_g1_ParamLimits

0xecab,	// (0x000651ff) bg_cell_vkbss_key_g1

0xecb7,	// (0x0006520b) cell_vkbss_key_3p_pane_ParamLimits

0xecb7,	// (0x0006520b) cell_vkbss_key_3p_pane

0xeced,	// (0x00065241) cell_vkbss_key_g1_ParamLimits

0xeced,	// (0x00065241) cell_vkbss_key_g1

0xed23,	// (0x00065277) cell_vkbss_key_t1_ParamLimits

0xed23,	// (0x00065277) cell_vkbss_key_t1

0x8ce1,	// (0x0005f235) cell_ituss_key_pane_ParamLimits

0x8ce1,	// (0x0005f235) cell_ituss_key_pane

0xed7f,	// (0x000652d3) bg_cell_ituss_key_g1_ParamLimits

0xed7f,	// (0x000652d3) bg_cell_ituss_key_g1

0xed8b,	// (0x000652df) cell_ituss_key_pane_g1_ParamLimits

0xed8b,	// (0x000652df) cell_ituss_key_pane_g1

0x8cf2,	// (0x0005f246) cell_ituss_key_pane_g2_ParamLimits

0x8cf2,	// (0x0005f246) cell_ituss_key_pane_g2

0x0005,

0xfedd,	// (0x00066431) cell_ituss_key_pane_g_ParamLimits

0xfedd,	// (0x00066431) cell_ituss_key_pane_g

0x8d76,	// (0x0005f2ca) cell_ituss_key_t1_ParamLimits

0x8d76,	// (0x0005f2ca) cell_ituss_key_t1

0x8db0,	// (0x0005f304) cell_ituss_key_t2_ParamLimits

0x8db0,	// (0x0005f304) cell_ituss_key_t2

0x8de2,	// (0x0005f336) cell_ituss_key_t3_ParamLimits

0x8de2,	// (0x0005f336) cell_ituss_key_t3

0x8e13,	// (0x0005f367) cell_ituss_key_t4_ParamLimits

0x8e13,	// (0x0005f367) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x0006643e) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0006643e) cell_ituss_key_t

0xedb1,	// (0x00065305) cell_vkbss_key_3p_pane_g1

0xedb9,	// (0x0006530d) cell_vkbss_key_3p_pane_g2

0xedc1,	// (0x00065315) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x00066449) cell_vkbss_key_3p_pane_g

0x16b6,	// (0x00057c0a) bg_popup_fep_char_preview_window_cp02

0xedc9,	// (0x0006531d) popup_fep_char_pre_window_t1

0xde41,	// (0x00064395) main_ai5_sk_pane

0xe82c,	// (0x00064d80) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe838,	// (0x00064d8c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xbeeb,	// (0x0006243f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe84d,	// (0x00064da1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec1,	// (0x00066415) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe859,	// (0x00064dad) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf142,	// (0x00065696) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xedd7,	// (0x0006532b) main_ai5_sk_pane_g1

0x9522,	// (0x0005fa76) popup_query_code_window_g1

0xec45,	// (0x00065199) popup_fep_vkb_icf_pane

0xec72,	// (0x000651c6) popup_fep_vtchi_icf_pane

0xede0,	// (0x00065334) bg_icf_pane

0xede0,	// (0x00065334) list_vkb_icf_pane

0xedec,	// (0x00065340) bg_icf_pane_cp01

0xedff,	// (0x00065353) vtchi_icf_list_pane

0xee5f,	// (0x000653b3) list_vkb_icf_pane_t1_ParamLimits

0xee5f,	// (0x000653b3) list_vkb_icf_pane_t1

0xee84,	// (0x000653d8) vtchi_icf_list_pane_t1_ParamLimits

0xee84,	// (0x000653d8) vtchi_icf_list_pane_t1

0xec2f,	// (0x00065183) popup_fep_ituss_window_ParamLimits

0xec72,	// (0x000651c6) popup_fep_vtchi_icf_pane_ParamLimits

0xec9b,	// (0x000651ef) ituss_keypad_pane_ParamLimits

0x8c80,	// (0x0005f1d4) ituss_sks_pane

0xede0,	// (0x00065334) bg_icf_pane_ParamLimits

0xebff,	// (0x00065153) icf_edit_indi_pane_ParamLimits

0xebff,	// (0x00065153) icf_edit_indi_pane

0xede0,	// (0x00065334) list_vkb_icf_pane_ParamLimits

0xedec,	// (0x00065340) bg_icf_pane_cp01_ParamLimits

0xec1a,	// (0x0006516e) icf_edit_indi_pane_cp01_ParamLimits

0xec1a,	// (0x0006516e) icf_edit_indi_pane_cp01

0xedff,	// (0x00065353) vtchi_query_pane

0xdcbd,	// (0x00064211) icf_edit_indi_pane_g1_ParamLimits

0xdcbd,	// (0x00064211) icf_edit_indi_pane_g1

0xeeff,	// (0x00065453) icf_edit_indi_pane_g2_ParamLimits

0xeeff,	// (0x00065453) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x00066474) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x00066474) icf_edit_indi_pane_g

0xef13,	// (0x00065467) icf_edit_indi_pane_t1

0xeea8,	// (0x000653fc) bg_input_focus_pane_cp042

0xf084,	// (0x000655d8) vtchi_button_pane

0xeeb1,	// (0x00065405) vtchi_query_pane_t1

0xeebf,	// (0x00065413) vtchi_query_pane_t2

0xeecd,	// (0x00065421) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x00066463) vtchi_query_pane_t

0x5365,	// (0x0005b8b9) bg_button_pane_cp13

0xeedb,	// (0x0006542f) vtchi_button_pane_g1

0x8e56,	// (0x0005f3aa) ituss_sks_pane_g1

0x8e61,	// (0x0005f3b5) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x0006646a) ituss_sks_pane_g

0xeee3,	// (0x00065437) ituss_sks_pane_t1

0xeef1,	// (0x00065445) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x0006646f) ituss_sks_pane_t

0xb1b0,	// (0x00061704) indicator_nsta_pane_cp_g1

0xb1b9,	// (0x0006170d) indicator_nsta_pane_cp_g2

0xb1c1,	// (0x00061715) indicator_nsta_pane_cp_g3

0xb1c9,	// (0x0006171d) indicator_nsta_pane_cp_g4

0xb1b9,	// (0x0006170d) indicator_nsta_pane_cp_g5

0xb1c1,	// (0x00061715) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x00065fee) indicator_nsta_pane_cp_g

0xda10,	// (0x00063f64) cell_graphic2_pane_t2_ParamLimits

0xda10,	// (0x00063f64) cell_graphic2_pane_t2

0x0001,

0xfdac,	// (0x00066300) cell_graphic2_pane_t_ParamLimits

0xfdac,	// (0x00066300) cell_graphic2_pane_t

0xda3c,	// (0x00063f90) cell_graphic2_control_pane_t1

0x665a,	// (0x0005cbae) signal_pane_g3_ParamLimits

0x665a,	// (0x0005cbae) signal_pane_g3

0x666c,	// (0x0005cbc0) signal_pane_g4_ParamLimits

0x666c,	// (0x0005cbc0) signal_pane_g4

0xebe9,	// (0x0006513d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xebe9,	// (0x0006513d) cell_ai5_widget_list_row_pane_t3

0xed9f,	// (0x000652f3) cell_ituss_key_pane_t1_ParamLimits

0xed9f,	// (0x000652f3) cell_ituss_key_pane_t1

0x9155,	// (0x0005f6a9) form_field_data_wide_pane_vc_t2_ParamLimits

0x9155,	// (0x0005f6a9) form_field_data_wide_pane_vc_t2

0x9169,	// (0x0005f6bd) form_field_data_wide_pane_vc_t3_ParamLimits

0x9169,	// (0x0005f6bd) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00065d33) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00065d33) form_field_data_wide_pane_vc_t

0xae5a,	// (0x000613ae) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae5a,	// (0x000613ae) form_field_slider_wide_pane_vc_t3

0xaf38,	// (0x0006148c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaf38,	// (0x0006148c) form_field_popup_wide_pane_vc_t2

0xaf4f,	// (0x000614a3) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf4f,	// (0x000614a3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x00065fdd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00065fdd) form_field_popup_wide_pane_vc_t

0x8a40,	// (0x0005ef94) aid_fshwr2_btn_pane_ParamLimits

0x8a54,	// (0x0005efa8) aid_fshwr2_syb_pane_ParamLimits

0x8a68,	// (0x0005efbc) aid_fshwr2_txt_pane_ParamLimits

0x826f,	// (0x0005e7c3) fshwr2_bg_pane_ParamLimits

0x8a78,	// (0x0005efcc) fshwr2_func_candi_pane_ParamLimits

0x8a9c,	// (0x0005eff0) fshwr2_hwr_syb_pane_ParamLimits

0x8ab6,	// (0x0005f00a) fshwr2_icf_pane_ParamLimits

0xae14,	// (0x00061368) list_double_graphic_pane_vc_g4_ParamLimits

0xae14,	// (0x00061368) list_double_graphic_pane_vc_g4

0x8d12,	// (0x0005f266) cell_ituss_key_pane_g3_ParamLimits

0x8d12,	// (0x0005f266) cell_ituss_key_pane_g3

0x8e44,	// (0x0005f398) cell_ituss_key_t5_ParamLimits

0x8e44,	// (0x0005f398) cell_ituss_key_t5

0xec5b,	// (0x000651af) popup_fep_vkbss_window_ParamLimits

0xde4b,	// (0x0006439f) aid_cell_ai5_quarter

0xef13,	// (0x00065467) icf_edit_indi_pane_t1_ParamLimits

0x5824,	// (0x0005bd78) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x5824,	// (0x0005bd78) aid_tch_indicator_popup_pane_cp2

0x5837,	// (0x0005bd8b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x5837,	// (0x0005bd8b) aid_tch_query_popup_data_pane_cp2

0x94ca,	// (0x0005fa1e) aid_tch_query_popup_pane_ParamLimits

0x94ca,	// (0x0005fa1e) aid_tch_query_popup_pane

0x94ca,	// (0x0005fa1e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x94ca,	// (0x0005fa1e) aid_tch_query_popup_data_pane_cp1

0xf51d,	// (0x00065a71) cell_fshwr2_syb_bg_pane_ParamLimits

0x8bac,	// (0x0005f100) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8bc0,	// (0x0005f114) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xec45,	// (0x00065199) popup_fep_vkb_icf_pane_ParamLimits

0x8880,	// (0x0005edd4) bg_popup_fep_char_preview_window_g10

0xdf80,	// (0x000644d4) cell_ai5_widget_pane_g11_ParamLimits

0xdf80,	// (0x000644d4) cell_ai5_widget_pane_g11

0xdf8c,	// (0x000644e0) cell_ai5_widget_pane_g12_ParamLimits

0xdf8c,	// (0x000644e0) cell_ai5_widget_pane_g12

0xdf98,	// (0x000644ec) cell_ai5_widget_pane_g13_ParamLimits

0xdf98,	// (0x000644ec) cell_ai5_widget_pane_g13

0xe3a1,	// (0x000648f5) cell_ai5_widget_pane_t11_ParamLimits

0xe3a1,	// (0x000648f5) cell_ai5_widget_pane_t11

0xe3b3,	// (0x00064907) cell_ai5_widget_pane_t12_ParamLimits

0xe3b3,	// (0x00064907) cell_ai5_widget_pane_t12

0x8d1e,	// (0x0005f272) cell_ituss_key_pane_g4_ParamLimits

0x8d1e,	// (0x0005f272) cell_ituss_key_pane_g4

0x8d3a,	// (0x0005f28e) cell_ituss_key_pane_g5_ParamLimits

0x8d3a,	// (0x0005f28e) cell_ituss_key_pane_g5

0x8d56,	// (0x0005f2aa) cell_ituss_key_pane_g6_ParamLimits

0x8d56,	// (0x0005f2aa) cell_ituss_key_pane_g6

0x903b,	// (0x0005f58f) bg_icf_pane_g1

0xee07,	// (0x0006535b) bg_icf_pane_g2

0xee13,	// (0x00065367) bg_icf_pane_g3

0xee1d,	// (0x00065371) bg_icf_pane_g4

0xee29,	// (0x0006537d) bg_icf_pane_g5

0xee33,	// (0x00065387) bg_icf_pane_g6

0xee3f,	// (0x00065393) bg_icf_pane_g7

0xee49,	// (0x0006539d) bg_icf_pane_g8

0xee55,	// (0x000653a9) bg_icf_pane_g9

0x0008,

0xfefc,	// (0x00066450) bg_icf_pane_g

0xec88,	// (0x000651dc) popup_hyb_candi_window_ParamLimits

0xec88,	// (0x000651dc) popup_hyb_candi_window

0x90c7,	// (0x0005f61b) bg_popup_sub_pane_cp01_ParamLimits

0x90c7,	// (0x0005f61b) bg_popup_sub_pane_cp01

0xef2c,	// (0x00065480) entry_hyb_candi_pane_ParamLimits

0xef2c,	// (0x00065480) entry_hyb_candi_pane

0xef3b,	// (0x0006548f) grid_hyb_candi_pane_ParamLimits

0xef3b,	// (0x0006548f) grid_hyb_candi_pane

0xef50,	// (0x000654a4) grid_hyb_phrase_pane_ParamLimits

0xef50,	// (0x000654a4) grid_hyb_phrase_pane

0xef5f,	// (0x000654b3) cell_hyb_candi_pane_ParamLimits

0xef5f,	// (0x000654b3) cell_hyb_candi_pane

0xef82,	// (0x000654d6) cell_hyb_candi_scroll_pane

0x1258,	// (0x000577ac) cell_hyb_candi_pane_g1

0xef8b,	// (0x000654df) cell_hyb_candi_pane_t1

0xef99,	// (0x000654ed) cell_hyb_phrase_pane

0x1258,	// (0x000577ac) cell_hyb_phrase_pane_g1

0xefa2,	// (0x000654f6) cell_hyb_phrase_pane_t1

0xefb0,	// (0x00065504) entry_hyb_candi_pane_t1

0x16b6,	// (0x00057c0a) input_focus_pane_cp06

0xefbe,	// (0x00065512) cell_hyb_candi_scroll_pane_g1

0xefc6,	// (0x0006551a) cell_hyb_candi_scroll_pane_g1_aid

0xefce,	// (0x00065522) cell_hyb_candi_scroll_pane_g2

0xefd6,	// (0x0006552a) cell_hyb_candi_scroll_pane_g2_aid

0xefde,	// (0x00065532) cell_hyb_candi_scroll_pane_g3

0xefe6,	// (0x0006553a) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
