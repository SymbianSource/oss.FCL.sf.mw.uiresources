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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000e733 };

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
0x23cc,	// (0x00010aff) Screen

0x23e0,	// (0x00010b13) application_window_ParamLimits

0x23e0,	// (0x00010b13) application_window

0x23fa,	// (0x00010b2d) screen_g1

0xd387,	// (0x0001baba) area_bottom_pane_ParamLimits

0xd387,	// (0x0001baba) area_bottom_pane

0xd447,	// (0x0001bb7a) area_top_pane_ParamLimits

0xd447,	// (0x0001bb7a) area_top_pane

0xd4db,	// (0x0001bc0e) main_pane_ParamLimits

0xd4db,	// (0x0001bc0e) main_pane

0x2404,	// (0x00010b37) misc_graphics

0x4aae,	// (0x000131e1) battery_pane_ParamLimits

0x4aae,	// (0x000131e1) battery_pane

0x5842,	// (0x00013f75) bg_status_flat_pane_g8

0x584a,	// (0x00013f7d) bg_status_flat_pane_g9

0x4b70,	// (0x000132a3) context_pane_ParamLimits

0x4b70,	// (0x000132a3) context_pane

0x4c86,	// (0x000133b9) navi_pane_ParamLimits

0x4c86,	// (0x000133b9) navi_pane

0x4d03,	// (0x00013436) signal_pane_ParamLimits

0x4d03,	// (0x00013436) signal_pane

0x0008,

0xf8a1,	// (0x0001dfd4) bg_status_flat_pane_g

0x4d70,	// (0x000134a3) status_pane_g1_ParamLimits

0x4d70,	// (0x000134a3) status_pane_g1

0x4d84,	// (0x000134b7) status_pane_g2_ParamLimits

0x4d84,	// (0x000134b7) status_pane_g2

0x4d90,	// (0x000134c3) status_pane_g3_ParamLimits

0x4d90,	// (0x000134c3) status_pane_g3

0x0004,

0xf7db,	// (0x0001df0e) status_pane_g_ParamLimits

0xf7db,	// (0x0001df0e) status_pane_g

0x4dc2,	// (0x000134f5) title_pane_ParamLimits

0x4dc2,	// (0x000134f5) title_pane

0x4dff,	// (0x00013532) uni_indicator_pane_ParamLimits

0x4dff,	// (0x00013532) uni_indicator_pane

0x4427,	// (0x00012b5a) bg_list_pane_ParamLimits

0x4427,	// (0x00012b5a) bg_list_pane

0xcb12,	// (0x0001b245) find_pane

0x444f,	// (0x00012b82) listscroll_app_pane_ParamLimits

0x444f,	// (0x00012b82) listscroll_app_pane

0x445b,	// (0x00012b8e) listscroll_form_pane

0xcb1a,	// (0x0001b24d) listscroll_gen_pane_ParamLimits

0xcb1a,	// (0x0001b24d) listscroll_gen_pane

0x445b,	// (0x00012b8e) listscroll_set_pane

0x3623,	// (0x00011d56) main_idle_act_pane

0x4103,	// (0x00012836) main_idle_trad_pane

0x4103,	// (0x00012836) main_list_empty_pane

0x4489,	// (0x00012bbc) main_midp_pane

0x4495,	// (0x00012bc8) main_pane_g1_ParamLimits

0x4495,	// (0x00012bc8) main_pane_g1

0x44a3,	// (0x00012bd6) popup_ai_message_window_ParamLimits

0x44a3,	// (0x00012bd6) popup_ai_message_window

0x454d,	// (0x00012c80) popup_fep_china_uni_window_ParamLimits

0x454d,	// (0x00012c80) popup_fep_china_uni_window

0x45a7,	// (0x00012cda) popup_fep_japan_candidate_window_ParamLimits

0x45a7,	// (0x00012cda) popup_fep_japan_candidate_window

0x45c5,	// (0x00012cf8) popup_fep_japan_predictive_window_ParamLimits

0x45c5,	// (0x00012cf8) popup_fep_japan_predictive_window

0x45f5,	// (0x00012d28) popup_find_window

0x4602,	// (0x00012d35) popup_grid_graphic_window_ParamLimits

0x4602,	// (0x00012d35) popup_grid_graphic_window

0x4628,	// (0x00012d5b) popup_large_graphic_colour_window

0x464e,	// (0x00012d81) popup_menu_window_ParamLimits

0x464e,	// (0x00012d81) popup_menu_window

0x4808,	// (0x00012f3b) popup_note_image_window

0x47f4,	// (0x00012f27) popup_note_wait_window_ParamLimits

0x47f4,	// (0x00012f27) popup_note_wait_window

0x47f4,	// (0x00012f27) popup_note_window_ParamLimits

0x47f4,	// (0x00012f27) popup_note_window

0x485e,	// (0x00012f91) popup_query_code_window_ParamLimits

0x485e,	// (0x00012f91) popup_query_code_window

0x4872,	// (0x00012fa5) popup_query_data_code_window_ParamLimits

0x4872,	// (0x00012fa5) popup_query_data_code_window

0x4889,	// (0x00012fbc) popup_query_data_window_ParamLimits

0x4889,	// (0x00012fbc) popup_query_data_window

0x48a1,	// (0x00012fd4) popup_query_sat_info_window_ParamLimits

0x48a1,	// (0x00012fd4) popup_query_sat_info_window

0x48da,	// (0x0001300d) popup_snote_single_graphic_window_ParamLimits

0x48da,	// (0x0001300d) popup_snote_single_graphic_window

0x48da,	// (0x0001300d) popup_snote_single_text_window_ParamLimits

0x48da,	// (0x0001300d) popup_snote_single_text_window

0x48ef,	// (0x00013022) popup_sub_window_general

0x4a1d,	// (0x00013150) popup_window_general_ParamLimits

0x4a1d,	// (0x00013150) popup_window_general

0x4a32,	// (0x00013165) power_save_pane

0xdc22,	// (0x0001c355) control_pane_g1_ParamLimits

0xdc22,	// (0x0001c355) control_pane_g1

0xdc4b,	// (0x0001c37e) control_pane_g2_ParamLimits

0xdc4b,	// (0x0001c37e) control_pane_g2

0x43c8,	// (0x00012afb) control_pane_g3_ParamLimits

0x43c8,	// (0x00012afb) control_pane_g3

0x0007,

0xf7c3,	// (0x0001def6) control_pane_g_ParamLimits

0xf7c3,	// (0x0001def6) control_pane_g

0xdc87,	// (0x0001c3ba) control_pane_t1_ParamLimits

0xdc87,	// (0x0001c3ba) control_pane_t1

0xdcd9,	// (0x0001c40c) control_pane_t2_ParamLimits

0xdcd9,	// (0x0001c40c) control_pane_t2

0x0002,

0xf7d4,	// (0x0001df07) control_pane_t_ParamLimits

0xf7d4,	// (0x0001df07) control_pane_t

0x42e9,	// (0x00012a1c) navi_navi_volume_pane_cp1

0x42f2,	// (0x00012a25) status_small_icon_pane

0x42fa,	// (0x00012a2d) status_small_pane_g1_ParamLimits

0x42fa,	// (0x00012a2d) status_small_pane_g1

0x432e,	// (0x00012a61) status_small_pane_g2_ParamLimits

0x432e,	// (0x00012a61) status_small_pane_g2

0x433a,	// (0x00012a6d) status_small_pane_g3_ParamLimits

0x433a,	// (0x00012a6d) status_small_pane_g3

0x4346,	// (0x00012a79) status_small_pane_g4_ParamLimits

0x4346,	// (0x00012a79) status_small_pane_g4

0x4352,	// (0x00012a85) status_small_pane_g5_ParamLimits

0x4352,	// (0x00012a85) status_small_pane_g5

0x4361,	// (0x00012a94) status_small_pane_g6_ParamLimits

0x4361,	// (0x00012a94) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001dee5) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001dee5) status_small_pane_g

0x4391,	// (0x00012ac4) status_small_pane_t1

0x43b4,	// (0x00012ae7) status_small_wait_pane_ParamLimits

0x43b4,	// (0x00012ae7) status_small_wait_pane

0x3b12,	// (0x00012245) aid_levels_signal_ParamLimits

0x3b12,	// (0x00012245) aid_levels_signal

0x3b24,	// (0x00012257) signal_pane_g1_ParamLimits

0x3b24,	// (0x00012257) signal_pane_g1

0x3b39,	// (0x0001226c) signal_pane_g2_ParamLimits

0x3b39,	// (0x0001226c) signal_pane_g2

0x0001,

0xf747,	// (0x0001de7a) signal_pane_g_ParamLimits

0xf747,	// (0x0001de7a) signal_pane_g

0x3b4e,	// (0x00012281) context_pane_g1

0x240e,	// (0x00010b41) title_pane_g1

0x2444,	// (0x00010b77) title_pane_t1

0x24ac,	// (0x00010bdf) title_pane_t2

0x24d2,	// (0x00010c05) title_pane_t3

0x0002,

0xf59b,	// (0x0001dcce) title_pane_t

0x4e17,	// (0x0001354a) aid_levels_battery_ParamLimits

0x4e17,	// (0x0001354a) aid_levels_battery

0x4e2b,	// (0x0001355e) battery_pane_g1_ParamLimits

0x4e2b,	// (0x0001355e) battery_pane_g1

0x4e41,	// (0x00013574) battery_pane_g2_ParamLimits

0x4e41,	// (0x00013574) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001df19) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001df19) battery_pane_g

0x6172,	// (0x000148a5) uni_indicator_pane_g1

0x6187,	// (0x000148ba) uni_indicator_pane_g2

0x619d,	// (0x000148d0) uni_indicator_pane_g3

0x0005,

0xf949,	// (0x0001e07c) uni_indicator_pane_g

0x3f73,	// (0x000126a6) navi_icon_pane_ParamLimits

0x3f73,	// (0x000126a6) navi_icon_pane

0x3eba,	// (0x000125ed) navi_midp_pane

0x3f8f,	// (0x000126c2) navi_navi_pane

0x3f99,	// (0x000126cc) navi_text_pane_ParamLimits

0x3f99,	// (0x000126cc) navi_text_pane

0x23fa,	// (0x00010b2d) status_small_wait_pane_g1

0x290f,	// (0x00011042) status_small_wait_pane_g2

0x0001,

0xf944,	// (0x0001e077) status_small_wait_pane_g

0x5e95,	// (0x000145c8) navi_navi_icon_text_pane

0x5eaf,	// (0x000145e2) navi_navi_pane_g1_ParamLimits

0x5eaf,	// (0x000145e2) navi_navi_pane_g1

0x5e9d,	// (0x000145d0) navi_navi_pane_g2_ParamLimits

0x5e9d,	// (0x000145d0) navi_navi_pane_g2

0x0001,

0xf912,	// (0x0001e045) navi_navi_pane_g_ParamLimits

0xf912,	// (0x0001e045) navi_navi_pane_g

0x5ec1,	// (0x000145f4) navi_navi_tabs_pane

0x5eca,	// (0x000145fd) navi_navi_text_pane

0x5e95,	// (0x000145c8) navi_navi_volume_pane

0x5e6e,	// (0x000145a1) navi_text_pane_t1

0x5e5f,	// (0x00014592) navi_icon_pane_g1

0x5db2,	// (0x000144e5) navi_navi_text_pane_t1

0xdff3,	// (0x0001c726) navi_navi_volume_pane_g1

0xdffb,	// (0x0001c72e) volume_small_pane

0x5d18,	// (0x0001444b) navi_navi_icon_text_pane_g1

0x5d20,	// (0x00014453) navi_navi_icon_text_pane_t1

0x3f8f,	// (0x000126c2) navi_tabs_2_long_pane

0x3f8f,	// (0x000126c2) navi_tabs_2_pane

0x3f8f,	// (0x000126c2) navi_tabs_3_long_pane

0x3f8f,	// (0x000126c2) navi_tabs_3_pane

0x3f8f,	// (0x000126c2) navi_tabs_4_pane

0xdfd3,	// (0x0001c706) tabs_2_active_pane_ParamLimits

0xdfd3,	// (0x0001c706) tabs_2_active_pane

0xdfe3,	// (0x0001c716) tabs_2_passive_pane_ParamLimits

0xdfe3,	// (0x0001c716) tabs_2_passive_pane

0xdfa1,	// (0x0001c6d4) tabs_3_active_pane_ParamLimits

0xdfa1,	// (0x0001c6d4) tabs_3_active_pane

0xdfb1,	// (0x0001c6e4) tabs_3_passive_pane_ParamLimits

0xdfb1,	// (0x0001c6e4) tabs_3_passive_pane

0xdfc2,	// (0x0001c6f5) tabs_3_passive_pane_cp_ParamLimits

0xdfc2,	// (0x0001c6f5) tabs_3_passive_pane_cp

0xdf5d,	// (0x0001c690) tabs_4_active_pane_ParamLimits

0xdf5d,	// (0x0001c690) tabs_4_active_pane

0xdf6e,	// (0x0001c6a1) tabs_4_passive_pane_ParamLimits

0xdf6e,	// (0x0001c6a1) tabs_4_passive_pane

0xdf7f,	// (0x0001c6b2) tabs_4_passive_pane_cp_ParamLimits

0xdf7f,	// (0x0001c6b2) tabs_4_passive_pane_cp

0xdf90,	// (0x0001c6c3) tabs_4_passive_pane_cp2_ParamLimits

0xdf90,	// (0x0001c6c3) tabs_4_passive_pane_cp2

0xdf39,	// (0x0001c66c) tabs_2_long_active_pane_ParamLimits

0xdf39,	// (0x0001c66c) tabs_2_long_active_pane

0xdf4b,	// (0x0001c67e) tabs_2_long_passive_pane_ParamLimits

0xdf4b,	// (0x0001c67e) tabs_2_long_passive_pane

0xdef4,	// (0x0001c627) tabs_3_long_active_pane_ParamLimits

0xdef4,	// (0x0001c627) tabs_3_long_active_pane

0xdf0d,	// (0x0001c640) tabs_3_long_passive_pane_ParamLimits

0xdf0d,	// (0x0001c640) tabs_3_long_passive_pane

0xdf20,	// (0x0001c653) tabs_3_long_passive_pane_cp_ParamLimits

0xdf20,	// (0x0001c653) tabs_3_long_passive_pane_cp

0xde9a,	// (0x0001c5cd) volume_small_pane_g1

0xdea3,	// (0x0001c5d6) volume_small_pane_g2

0xdeac,	// (0x0001c5df) volume_small_pane_g3

0xdeb5,	// (0x0001c5e8) volume_small_pane_g4

0xdebe,	// (0x0001c5f1) volume_small_pane_g5

0xdec7,	// (0x0001c5fa) volume_small_pane_g6

0xded0,	// (0x0001c603) volume_small_pane_g7

0xded9,	// (0x0001c60c) volume_small_pane_g8

0xdee2,	// (0x0001c615) volume_small_pane_g9

0xdeeb,	// (0x0001c61e) volume_small_pane_g10

0x0009,

0xf8de,	// (0x0001e011) volume_small_pane_g

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp2_ParamLimits

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp2

0x24f2,	// (0x00010c25) tabs_3_active_pane_g1

0x24fa,	// (0x00010c2d) tabs_3_active_pane_t1

0x24e4,	// (0x00010c17) bg_passive_tab_pane_cp2_ParamLimits

0x24e4,	// (0x00010c17) bg_passive_tab_pane_cp2

0x24f2,	// (0x00010c25) tabs_3_passive_pane_g1

0x24fa,	// (0x00010c2d) tabs_3_passive_pane_t1

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp3_ParamLimits

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp3

0x250c,	// (0x00010c3f) tabs_4_active_pane_g1

0x2514,	// (0x00010c47) tabs_4_active_pane_t1

0x24e4,	// (0x00010c17) bg_passive_tab_pane_cp3_ParamLimits

0x24e4,	// (0x00010c17) bg_passive_tab_pane_cp3

0x250c,	// (0x00010c3f) tabs_4_1_passive_pane_g1

0x2514,	// (0x00010c47) tabs_4_1_passive_pane_t1

0x4489,	// (0x00012bbc) list_highlight_pane_cp2

0x641e,	// (0x00014b51) list_set_pane_ParamLimits

0x641e,	// (0x00014b51) list_set_pane

0x64c0,	// (0x00014bf3) main_pane_set_t1_ParamLimits

0x64c0,	// (0x00014bf3) main_pane_set_t1

0x64e0,	// (0x00014c13) main_pane_set_t2_ParamLimits

0x64e0,	// (0x00014c13) main_pane_set_t2

0x64f4,	// (0x00014c27) main_pane_set_t3_ParamLimits

0x64f4,	// (0x00014c27) main_pane_set_t3

0x6506,	// (0x00014c39) main_pane_set_t4_ParamLimits

0x6506,	// (0x00014c39) main_pane_set_t4

0x0003,

0xf9ae,	// (0x0001e0e1) main_pane_set_t_ParamLimits

0xf9ae,	// (0x0001e0e1) main_pane_set_t

0x6518,	// (0x00014c4b) setting_code_pane

0x6522,	// (0x00014c55) setting_slider_graphic_pane

0x6522,	// (0x00014c55) setting_slider_pane

0x6522,	// (0x00014c55) setting_text_pane

0x6522,	// (0x00014c55) setting_volume_pane

0xd70c,	// (0x0001be3f) volume_set_pane

0x24e4,	// (0x00010c17) bg_set_opt_pane_cp

0xd714,	// (0x0001be47) setting_slider_pane_t1

0xd72d,	// (0x0001be60) setting_slider_pane_t2

0xd746,	// (0x0001be79) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001dcd5) setting_slider_pane_t

0xd75d,	// (0x0001be90) slider_set_pane

0x2404,	// (0x00010b37) bg_set_opt_pane_cp2

0x2526,	// (0x00010c59) setting_slider_graphic_pane_g1

0xd773,	// (0x0001bea6) setting_slider_graphic_pane_t1

0xd782,	// (0x0001beb5) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001dcdc) setting_slider_graphic_pane_t

0xd791,	// (0x0001bec4) slider_set_pane_cp

0x2404,	// (0x00010b37) input_focus_pane_cp1

0x63dd,	// (0x00014b10) list_set_text_pane

0x23fa,	// (0x00010b2d) setting_text_pane_g1

0x2404,	// (0x00010b37) input_focus_pane_cp2

0x23fa,	// (0x00010b2d) setting_code_pane_g1

0x252f,	// (0x00010c62) setting_code_pane_t1

0xc3c5,	// (0x0001aaf8) set_text_pane_t1_ParamLimits

0xc3c5,	// (0x0001aaf8) set_text_pane_t1

0x33f9,	// (0x00011b2c) set_opt_bg_pane_g1

0x3401,	// (0x00011b34) set_opt_bg_pane_g2

0x63bd,	// (0x00014af0) set_opt_bg_pane_g3

0x3411,	// (0x00011b44) set_opt_bg_pane_g4

0x3419,	// (0x00011b4c) set_opt_bg_pane_g5

0x3421,	// (0x00011b54) set_opt_bg_pane_g6

0x63c5,	// (0x00014af8) set_opt_bg_pane_g7

0x63cd,	// (0x00014b00) set_opt_bg_pane_g8

0x63d5,	// (0x00014b08) set_opt_bg_pane_g9

0x0008,

0xf99b,	// (0x0001e0ce) set_opt_bg_pane_g

0x63b0,	// (0x00014ae3) slider_set_pane_g1

0xe068,	// (0x0001c79b) slider_set_pane_g2

0x0006,

0xf98c,	// (0x0001e0bf) slider_set_pane_g

0xe004,	// (0x0001c737) volume_set_pane_g1

0xe00c,	// (0x0001c73f) volume_set_pane_g2

0xe014,	// (0x0001c747) volume_set_pane_g3

0xe01c,	// (0x0001c74f) volume_set_pane_g4

0xe024,	// (0x0001c757) volume_set_pane_g5

0xe02c,	// (0x0001c75f) volume_set_pane_g6

0xe034,	// (0x0001c767) volume_set_pane_g7

0xe03c,	// (0x0001c76f) volume_set_pane_g8

0xe044,	// (0x0001c777) volume_set_pane_g9

0xe04c,	// (0x0001c77f) volume_set_pane_g10

0x0009,

0xf964,	// (0x0001e097) volume_set_pane_g

0x2557,	// (0x00010c8a) indicator_pane_ParamLimits

0x2557,	// (0x00010c8a) indicator_pane

0x2563,	// (0x00010c96) main_idle_pane_g2_ParamLimits

0x2563,	// (0x00010c96) main_idle_pane_g2

0x258b,	// (0x00010cbe) main_pane_idle_g1_ParamLimits

0x258b,	// (0x00010cbe) main_pane_idle_g1

0x2598,	// (0x00010ccb) popup_clock_digital_analogue_window_ParamLimits

0x2598,	// (0x00010ccb) popup_clock_digital_analogue_window

0x25af,	// (0x00010ce2) soft_indicator_pane_ParamLimits

0x25af,	// (0x00010ce2) soft_indicator_pane

0x25bb,	// (0x00010cee) wallpaper_pane_ParamLimits

0x25bb,	// (0x00010cee) wallpaper_pane

0x23fa,	// (0x00010b2d) wallpaper_pane_g1

0x25cf,	// (0x00010d02) indicator_pane_g1_ParamLimits

0x25cf,	// (0x00010d02) indicator_pane_g1

0x689c,	// (0x00014fcf) navi_navi_icon_text_pane_srt_g1

0x25ea,	// (0x00010d1d) soft_indicator_pane_t1

0x2604,	// (0x00010d37) aid_ps_area_pane

0x2615,	// (0x00010d48) aid_ps_clock_pane

0x2623,	// (0x00010d56) aid_ps_indicator_pane

0x262f,	// (0x00010d62) indicator_ps_pane_ParamLimits

0x262f,	// (0x00010d62) indicator_ps_pane

0x263e,	// (0x00010d71) power_save_pane_g1_ParamLimits

0x263e,	// (0x00010d71) power_save_pane_g1

0x264a,	// (0x00010d7d) power_save_pane_g2_ParamLimits

0x264a,	// (0x00010d7d) power_save_pane_g2

0xd33b,	// (0x0001ba6e) aid_navinavi_width_pane

0x2604,	// (0x00010d37) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001dce1) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001dce1) power_save_pane_g

0x2658,	// (0x00010d8b) power_save_pane_t1_ParamLimits

0x2658,	// (0x00010d8b) power_save_pane_t1

0x2615,	// (0x00010d48) aid_ps_clock_pane_ParamLimits

0x2623,	// (0x00010d56) aid_ps_indicator_pane_ParamLimits

0x266a,	// (0x00010d9d) power_save_pane_t4_ParamLimits

0x266a,	// (0x00010d9d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001dce6) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001dce6) power_save_pane_t

0x2694,	// (0x00010dc7) power_save_t3_ParamLimits

0x2694,	// (0x00010dc7) power_save_t3

0x267f,	// (0x00010db2) power_save_t2_ParamLimits

0x267f,	// (0x00010db2) power_save_t2

0x26a9,	// (0x00010ddc) indicator_ps_pane_g1

0x26b2,	// (0x00010de5) ai_gene_pane_ParamLimits

0x26b2,	// (0x00010de5) ai_gene_pane

0x26be,	// (0x00010df1) ai_links_pane_ParamLimits

0x26be,	// (0x00010df1) ai_links_pane

0x26ca,	// (0x00010dfd) indicator_pane_cp1_ParamLimits

0x26ca,	// (0x00010dfd) indicator_pane_cp1

0x26d6,	// (0x00010e09) main_pane_idle_g1_cp_ParamLimits

0x26d6,	// (0x00010e09) main_pane_idle_g1_cp

0x26e2,	// (0x00010e15) popup_ai_links_title_window

0x26eb,	// (0x00010e1e) soft_indicator_pane_cp1_ParamLimits

0x26eb,	// (0x00010e1e) soft_indicator_pane_cp1

0x6160,	// (0x00014893) ai_links_pane_g1

0x6169,	// (0x0001489c) grid_ai_links_pane

0x6143,	// (0x00014876) ai_gene_pane_1

0x614e,	// (0x00014881) ai_gene_pane_2

0x6157,	// (0x0001488a) list_highlight_pane_cp4

0x6127,	// (0x0001485a) cell_ai_link_pane_ParamLimits

0x6127,	// (0x0001485a) cell_ai_link_pane

0x611f,	// (0x00014852) cell_ai_link_pane_g1

0x290f,	// (0x00011042) cell_ai_link_pane_g2

0x0001,

0xf93f,	// (0x0001e072) cell_ai_link_pane_g

0x2404,	// (0x00010b37) grid_highlight_cp2

0x2404,	// (0x00010b37) bg_popup_sub_pane_cp1

0x2705,	// (0x00010e38) popup_ai_links_title_window_t1

0x606d,	// (0x000147a0) ai_gene_pane_1_g1_ParamLimits

0x606d,	// (0x000147a0) ai_gene_pane_1_g1

0x6079,	// (0x000147ac) ai_gene_pane_1_g2_ParamLimits

0x6079,	// (0x000147ac) ai_gene_pane_1_g2

0x0001,

0xf935,	// (0x0001e068) ai_gene_pane_1_g_ParamLimits

0xf935,	// (0x0001e068) ai_gene_pane_1_g

0x6086,	// (0x000147b9) ai_gene_pane_1_t1_ParamLimits

0x6086,	// (0x000147b9) ai_gene_pane_1_t1

0x60ba,	// (0x000147ed) grid_ai_soft_ind_pane

0x6058,	// (0x0001478b) ai_gene_pane_2_t1_ParamLimits

0x6058,	// (0x0001478b) ai_gene_pane_2_t1

0x2714,	// (0x00010e47) main_pane_empty_t1_ParamLimits

0x2714,	// (0x00010e47) main_pane_empty_t1

0x272c,	// (0x00010e5f) main_pane_empty_t2_ParamLimits

0x272c,	// (0x00010e5f) main_pane_empty_t2

0x2741,	// (0x00010e74) main_pane_empty_t3_ParamLimits

0x2741,	// (0x00010e74) main_pane_empty_t3

0x2753,	// (0x00010e86) main_pane_empty_t4_ParamLimits

0x2753,	// (0x00010e86) main_pane_empty_t4

0x2765,	// (0x00010e98) main_pane_empty_t5_ParamLimits

0x2765,	// (0x00010e98) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001dceb) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001dceb) main_pane_empty_t

0x34f2,	// (0x00011c25) bg_popup_window_pane_ParamLimits

0x34f2,	// (0x00011c25) bg_popup_window_pane

0x5dc0,	// (0x000144f3) find_popup_pane_cp2_ParamLimits

0x5dc0,	// (0x000144f3) find_popup_pane_cp2

0x5dcc,	// (0x000144ff) heading_pane_ParamLimits

0x5dcc,	// (0x000144ff) heading_pane

0x2404,	// (0x00010b37) bg_popup_sub_pane

0x5d3a,	// (0x0001446d) bg_popup_window_pane_g1_ParamLimits

0x5d3a,	// (0x0001446d) bg_popup_window_pane_g1

0x5d46,	// (0x00014479) bg_popup_window_pane_g2_ParamLimits

0x5d46,	// (0x00014479) bg_popup_window_pane_g2

0x5d52,	// (0x00014485) bg_popup_window_pane_g3_ParamLimits

0x5d52,	// (0x00014485) bg_popup_window_pane_g3

0x5d5e,	// (0x00014491) bg_popup_window_pane_g4_ParamLimits

0x5d5e,	// (0x00014491) bg_popup_window_pane_g4

0x5d6a,	// (0x0001449d) bg_popup_window_pane_g5_ParamLimits

0x5d6a,	// (0x0001449d) bg_popup_window_pane_g5

0x5d76,	// (0x000144a9) bg_popup_window_pane_g6_ParamLimits

0x5d76,	// (0x000144a9) bg_popup_window_pane_g6

0x5d82,	// (0x000144b5) bg_popup_window_pane_g7_ParamLimits

0x5d82,	// (0x000144b5) bg_popup_window_pane_g7

0x5d8e,	// (0x000144c1) bg_popup_window_pane_g8_ParamLimits

0x5d8e,	// (0x000144c1) bg_popup_window_pane_g8

0x5d9a,	// (0x000144cd) bg_popup_window_pane_g9_ParamLimits

0x5d9a,	// (0x000144cd) bg_popup_window_pane_g9

0x5da6,	// (0x000144d9) bg_popup_window_pane_g10_ParamLimits

0x5da6,	// (0x000144d9) bg_popup_window_pane_g10

0x0009,

0xf8fd,	// (0x0001e030) bg_popup_window_pane_g_ParamLimits

0xf8fd,	// (0x0001e030) bg_popup_window_pane_g

0x5ccf,	// (0x00014402) bg_popup_heading_pane_ParamLimits

0x5ccf,	// (0x00014402) bg_popup_heading_pane

0xe0f0,	// (0x0001c823) tabs_4_passive_pane_cp_srt_ParamLimits

0xe0f0,	// (0x0001c823) tabs_4_passive_pane_cp_srt

0xe102,	// (0x0001c835) tabs_4_passive_pane_srt_ParamLimits

0x5ce3,	// (0x00014416) heading_pane_g2

0xe102,	// (0x0001c835) tabs_4_passive_pane_srt

0x4489,	// (0x00012bbc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4489,	// (0x00012bbc) bg_passive_tab_pane_cp3_srt

0x5ceb,	// (0x0001441e) heading_pane_t1_ParamLimits

0x5ceb,	// (0x0001441e) heading_pane_t1

0x5d02,	// (0x00014435) heading_pane_t2_ParamLimits

0x5d02,	// (0x00014435) heading_pane_t2

0x0001,

0xf8f8,	// (0x0001e02b) heading_pane_t_ParamLimits

0xf8f8,	// (0x0001e02b) heading_pane_t

0x580a,	// (0x00013f3d) bg_popup_heading_pane_g1

0x58b9,	// (0x00013fec) bg_popup_heading_pane_g2

0x58c3,	// (0x00013ff6) bg_popup_heading_pane_g3

0x58cd,	// (0x00014000) bg_popup_heading_pane_g4

0x58d7,	// (0x0001400a) bg_popup_heading_pane_g5

0x58e1,	// (0x00014014) bg_popup_heading_pane_g6

0x58e9,	// (0x0001401c) bg_popup_heading_pane_g7

0x58f1,	// (0x00014024) bg_popup_heading_pane_g8

0x58fb,	// (0x0001402e) bg_popup_heading_pane_g9

0x0008,

0xf8b4,	// (0x0001dfe7) bg_popup_heading_pane_g

0x4f3b,	// (0x0001366e) bg_popup_sub_pane_g1

0x4f4b,	// (0x0001367e) bg_popup_sub_pane_g2

0x4f43,	// (0x00013676) bg_popup_sub_pane_g3

0x4f5b,	// (0x0001368e) bg_popup_sub_pane_g4

0x4f53,	// (0x00013686) bg_popup_sub_pane_g5

0x4f63,	// (0x00013696) bg_popup_sub_pane_g6

0x4f6b,	// (0x0001369e) bg_popup_sub_pane_g7

0x4f7b,	// (0x000136ae) bg_popup_sub_pane_g8

0x4f73,	// (0x000136a6) bg_popup_sub_pane_g9

0x0008,

0xf88e,	// (0x0001dfc1) bg_popup_sub_pane_g

0x2779,	// (0x00010eac) bg_popup_window_pane_cp5_ParamLimits

0x2779,	// (0x00010eac) bg_popup_window_pane_cp5

0x2795,	// (0x00010ec8) popup_note_window_g1_ParamLimits

0x2795,	// (0x00010ec8) popup_note_window_g1

0x27a1,	// (0x00010ed4) popup_note_window_t1_ParamLimits

0x27a1,	// (0x00010ed4) popup_note_window_t1

0x27b3,	// (0x00010ee6) popup_note_window_t2_ParamLimits

0x27b3,	// (0x00010ee6) popup_note_window_t2

0x27c5,	// (0x00010ef8) popup_note_window_t3_ParamLimits

0x27c5,	// (0x00010ef8) popup_note_window_t3

0x27d7,	// (0x00010f0a) popup_note_window_t4_ParamLimits

0x27d7,	// (0x00010f0a) popup_note_window_t4

0x27ff,	// (0x00010f32) popup_note_window_t5_ParamLimits

0x27ff,	// (0x00010f32) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001dcf6) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001dcf6) popup_note_window_t

0x2823,	// (0x00010f56) bg_popup_window_pane_cp6_ParamLimits

0x2823,	// (0x00010f56) bg_popup_window_pane_cp6

0x577e,	// (0x00013eb1) popup_note_image_window_g1_ParamLimits

0x577e,	// (0x00013eb1) popup_note_image_window_g1

0x578a,	// (0x00013ebd) popup_note_image_window_g2_ParamLimits

0x578a,	// (0x00013ebd) popup_note_image_window_g2

0x0001,

0xf882,	// (0x0001dfb5) popup_note_image_window_g_ParamLimits

0xf882,	// (0x0001dfb5) popup_note_image_window_g

0x57a3,	// (0x00013ed6) popup_note_image_window_t1_ParamLimits

0x57a3,	// (0x00013ed6) popup_note_image_window_t1

0x57bc,	// (0x00013eef) popup_note_image_window_t2_ParamLimits

0x57bc,	// (0x00013eef) popup_note_image_window_t2

0x57d5,	// (0x00013f08) popup_note_image_window_t3_ParamLimits

0x57d5,	// (0x00013f08) popup_note_image_window_t3

0x0002,

0xf887,	// (0x0001dfba) popup_note_image_window_t_ParamLimits

0xf887,	// (0x0001dfba) popup_note_image_window_t

0x563f,	// (0x00013d72) bg_popup_window_pane_cp7_ParamLimits

0x563f,	// (0x00013d72) bg_popup_window_pane_cp7

0x566f,	// (0x00013da2) popup_note_wait_window_g1_ParamLimits

0x566f,	// (0x00013da2) popup_note_wait_window_g1

0x567b,	// (0x00013dae) popup_note_wait_window_g2_ParamLimits

0x567b,	// (0x00013dae) popup_note_wait_window_g2

0x0002,

0xf870,	// (0x0001dfa3) popup_note_wait_window_g_ParamLimits

0xf870,	// (0x0001dfa3) popup_note_wait_window_g

0x5693,	// (0x00013dc6) popup_note_wait_window_t1_ParamLimits

0x5693,	// (0x00013dc6) popup_note_wait_window_t1

0x56ba,	// (0x00013ded) popup_note_wait_window_t2_ParamLimits

0x56ba,	// (0x00013ded) popup_note_wait_window_t2

0x56d7,	// (0x00013e0a) popup_note_wait_window_t3_ParamLimits

0x56d7,	// (0x00013e0a) popup_note_wait_window_t3

0x56ea,	// (0x00013e1d) popup_note_wait_window_t4_ParamLimits

0x56ea,	// (0x00013e1d) popup_note_wait_window_t4

0x0004,

0xf877,	// (0x0001dfaa) popup_note_wait_window_t_ParamLimits

0xf877,	// (0x0001dfaa) popup_note_wait_window_t

0x570f,	// (0x00013e42) wait_bar_pane_ParamLimits

0x570f,	// (0x00013e42) wait_bar_pane

0x2404,	// (0x00010b37) wait_anim_pane

0x2404,	// (0x00010b37) wait_border_pane

0x23fa,	// (0x00010b2d) wait_anim_pane_g1

0x23fa,	// (0x00010b2d) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001de75) wait_anim_pane_g

0x55e3,	// (0x00013d16) wait_border_pane_g1

0x55ee,	// (0x00013d21) wait_border_pane_g2

0x55f7,	// (0x00013d2a) wait_border_pane_g3

0x0002,

0xf869,	// (0x0001df9c) wait_border_pane_g

0x5545,	// (0x00013c78) bg_popup_window_pane_cp16_ParamLimits

0x5545,	// (0x00013c78) bg_popup_window_pane_cp16

0x5553,	// (0x00013c86) indicator_popup_pane_cp4_ParamLimits

0x5553,	// (0x00013c86) indicator_popup_pane_cp4

0x5567,	// (0x00013c9a) popup_query_data_window_t1_ParamLimits

0x5567,	// (0x00013c9a) popup_query_data_window_t1

0x5579,	// (0x00013cac) popup_query_data_window_t2_ParamLimits

0x5579,	// (0x00013cac) popup_query_data_window_t2

0x5592,	// (0x00013cc5) popup_query_data_window_t3_ParamLimits

0x5592,	// (0x00013cc5) popup_query_data_window_t3

0x0002,

0xf862,	// (0x0001df95) popup_query_data_window_t_ParamLimits

0xf862,	// (0x0001df95) popup_query_data_window_t

0x55ac,	// (0x00013cdf) query_popup_data_pane_ParamLimits

0x55ac,	// (0x00013cdf) query_popup_data_pane

0x55c0,	// (0x00013cf3) query_popup_data_pane_cp1_ParamLimits

0x55c0,	// (0x00013cf3) query_popup_data_pane_cp1

0x2823,	// (0x00010f56) bg_popup_window_pane_cp10_ParamLimits

0x2823,	// (0x00010f56) bg_popup_window_pane_cp10

0x54a8,	// (0x00013bdb) indicator_popup_pane_ParamLimits

0x54a8,	// (0x00013bdb) indicator_popup_pane

0x287a,	// (0x00010fad) popup_query_code_window_t1_ParamLimits

0x287a,	// (0x00010fad) popup_query_code_window_t1

0x54c0,	// (0x00013bf3) popup_query_code_window_t2_ParamLimits

0x54c0,	// (0x00013bf3) popup_query_code_window_t2

0x54fe,	// (0x00013c31) popup_query_code_window_t3_ParamLimits

0x54fe,	// (0x00013c31) popup_query_code_window_t3

0x0002,

0xf85b,	// (0x0001df8e) popup_query_code_window_t_ParamLimits

0xf85b,	// (0x0001df8e) popup_query_code_window_t

0x552d,	// (0x00013c60) query_popup_pane_ParamLimits

0x552d,	// (0x00013c60) query_popup_pane

0x2823,	// (0x00010f56) bg_popup_window_pane_cp15_ParamLimits

0x2823,	// (0x00010f56) bg_popup_window_pane_cp15

0x2841,	// (0x00010f74) indicator_popup_pane_cp1_ParamLimits

0x2841,	// (0x00010f74) indicator_popup_pane_cp1

0x2854,	// (0x00010f87) indicator_popup_pane_cp2_ParamLimits

0x2854,	// (0x00010f87) indicator_popup_pane_cp2

0x2867,	// (0x00010f9a) popup_query_data_code_window_g1_ParamLimits

0x2867,	// (0x00010f9a) popup_query_data_code_window_g1

0x287a,	// (0x00010fad) popup_query_data_code_window_t1_ParamLimits

0x287a,	// (0x00010fad) popup_query_data_code_window_t1

0x288c,	// (0x00010fbf) popup_query_data_code_window_t2_ParamLimits

0x288c,	// (0x00010fbf) popup_query_data_code_window_t2

0x289e,	// (0x00010fd1) popup_query_data_code_window_t3_ParamLimits

0x289e,	// (0x00010fd1) popup_query_data_code_window_t3

0x28b4,	// (0x00010fe7) popup_query_data_code_window_t4_ParamLimits

0x28b4,	// (0x00010fe7) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001dd01) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001dd01) popup_query_data_code_window_t

0x3f2f,	// (0x00012662) list_single_midp_graphic_pane_g3

0x28cc,	// (0x00010fff) query_popup_data_pane_cp2_ParamLimits

0x28df,	// (0x00011012) query_popup_pane_cp2_ParamLimits

0x28df,	// (0x00011012) query_popup_pane_cp2

0x2404,	// (0x00010b37) bg_popup_window_pane_cp11

0x547c,	// (0x00013baf) heading_pane_cp5

0x29c7,	// (0x000110fa) listscroll_popup_info_pane

0x2404,	// (0x00010b37) input_focus_pane_cp3

0x28f2,	// (0x00011025) query_popup_pane_t1

0x2900,	// (0x00011033) list_popup_info_pane_ParamLimits

0x2900,	// (0x00011033) list_popup_info_pane

0x290f,	// (0x00011042) listscroll_popup_info_pane_g1

0x2917,	// (0x0001104a) scroll_pane_cp7

0x2921,	// (0x00011054) popup_info_list_pane_t1_ParamLimits

0x2921,	// (0x00011054) popup_info_list_pane_t1

0x293b,	// (0x0001106e) popup_info_list_pane_t2_ParamLimits

0x293b,	// (0x0001106e) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001dd0a) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001dd0a) popup_info_list_pane_t

0x2404,	// (0x00010b37) bg_popup_window_pane_cp12

0x68b6,	// (0x00014fe9) find_popup_pane

0x24e4,	// (0x00010c17) bg_popup_window_pane_cp3

0x2955,	// (0x00011088) heading_pane_cp3

0x2961,	// (0x00011094) listscroll_popup_graphic_pane

0x2404,	// (0x00010b37) bg_popup_window_pane_cp4

0x29bd,	// (0x000110f0) heading_pane_cp4

0x29c7,	// (0x000110fa) listscroll_popup_colour_pane

0x29cf,	// (0x00011102) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x29cf,	// (0x00011102) cell_large_graphic_colour_none_popup_pane

0x29e3,	// (0x00011116) grid_large_graphic_colour_popup_pane_ParamLimits

0x29e3,	// (0x00011116) grid_large_graphic_colour_popup_pane

0x2a07,	// (0x0001113a) listscroll_popup_colour_pane_g1_ParamLimits

0x2a07,	// (0x0001113a) listscroll_popup_colour_pane_g1

0x2a1e,	// (0x00011151) listscroll_popup_colour_pane_g2_ParamLimits

0x2a1e,	// (0x00011151) listscroll_popup_colour_pane_g2

0x2a35,	// (0x00011168) listscroll_popup_colour_pane_g3_ParamLimits

0x2a35,	// (0x00011168) listscroll_popup_colour_pane_g3

0x2a45,	// (0x00011178) listscroll_popup_colour_pane_g4_ParamLimits

0x2a45,	// (0x00011178) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001dd0f) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001dd0f) listscroll_popup_colour_pane_g

0x2a54,	// (0x00011187) scroll_pane_cp6_ParamLimits

0x2a54,	// (0x00011187) scroll_pane_cp6

0x2a66,	// (0x00011199) cell_large_graphic_colour_popup_pane_ParamLimits

0x2a66,	// (0x00011199) cell_large_graphic_colour_popup_pane

0x2a85,	// (0x000111b8) cell_large_graphic_colour_none_popup_pane_t1

0x2404,	// (0x00010b37) grid_highlight_pane_cp5

0x2a94,	// (0x000111c7) cell_large_graphic_colour_popup_pane_g1

0x2a9c,	// (0x000111cf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001dd18) cell_large_graphic_colour_popup_pane_g

0x2aa4,	// (0x000111d7) cell_large_graphic_colour_popup_pane_g2_copy1

0x2aad,	// (0x000111e0) grid_highlight_pane_cp4

0x2ab5,	// (0x000111e8) bg_popup_window_pane_cp8_ParamLimits

0x2ab5,	// (0x000111e8) bg_popup_window_pane_cp8

0x2ad0,	// (0x00011203) popup_snote_single_text_window_g1_ParamLimits

0x2ad0,	// (0x00011203) popup_snote_single_text_window_g1

0x2ae2,	// (0x00011215) popup_snote_single_text_window_t1_ParamLimits

0x2ae2,	// (0x00011215) popup_snote_single_text_window_t1

0x2af5,	// (0x00011228) popup_snote_single_text_window_t2_ParamLimits

0x2af5,	// (0x00011228) popup_snote_single_text_window_t2

0x2b08,	// (0x0001123b) popup_snote_single_text_window_t3_ParamLimits

0x2b08,	// (0x0001123b) popup_snote_single_text_window_t3

0x2b41,	// (0x00011274) popup_snote_single_text_window_t4_ParamLimits

0x2b41,	// (0x00011274) popup_snote_single_text_window_t4

0x2b75,	// (0x000112a8) popup_snote_single_text_window_t5_ParamLimits

0x2b75,	// (0x000112a8) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001dd1d) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001dd1d) popup_snote_single_text_window_t

0x2ba4,	// (0x000112d7) bg_popup_window_pane_cp9_ParamLimits

0x2ba4,	// (0x000112d7) bg_popup_window_pane_cp9

0x2ad0,	// (0x00011203) popup_snote_single_graphic_window_g1_ParamLimits

0x2ad0,	// (0x00011203) popup_snote_single_graphic_window_g1

0x2bb2,	// (0x000112e5) popup_snote_single_graphic_window_g2_ParamLimits

0x2bb2,	// (0x000112e5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001dd28) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001dd28) popup_snote_single_graphic_window_g

0x2bbe,	// (0x000112f1) popup_snote_single_graphic_window_t1_ParamLimits

0x2bbe,	// (0x000112f1) popup_snote_single_graphic_window_t1

0x2bd1,	// (0x00011304) popup_snote_single_graphic_window_t2_ParamLimits

0x2bd1,	// (0x00011304) popup_snote_single_graphic_window_t2

0x2be4,	// (0x00011317) popup_snote_single_graphic_window_t3_ParamLimits

0x2be4,	// (0x00011317) popup_snote_single_graphic_window_t3

0x2c1d,	// (0x00011350) popup_snote_single_graphic_window_t4_ParamLimits

0x2c1d,	// (0x00011350) popup_snote_single_graphic_window_t4

0x2c51,	// (0x00011384) popup_snote_single_graphic_window_t5_ParamLimits

0x2c51,	// (0x00011384) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001dd2d) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001dd2d) popup_snote_single_graphic_window_t

0x67f6,	// (0x00014f29) grid_graphic_popup_pane_ParamLimits

0x67f6,	// (0x00014f29) grid_graphic_popup_pane

0x6822,	// (0x00014f55) listscroll_popup_graphic_pane_g1_ParamLimits

0x6822,	// (0x00014f55) listscroll_popup_graphic_pane_g1

0x6836,	// (0x00014f69) listscroll_popup_graphic_pane_g2_ParamLimits

0x6836,	// (0x00014f69) listscroll_popup_graphic_pane_g2

0x0001,

0xf9d8,	// (0x0001e10b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9d8,	// (0x0001e10b) listscroll_popup_graphic_pane_g

0x684a,	// (0x00014f7d) scroll_pane_cp5

0x67a1,	// (0x00014ed4) cell_graphic_popup_pane_ParamLimits

0x67a1,	// (0x00014ed4) cell_graphic_popup_pane

0x6782,	// (0x00014eb5) cell_graphic_popup_pane_g1

0x678a,	// (0x00014ebd) cell_graphic_popup_pane_g2

0x2aa4,	// (0x000111d7) cell_graphic_popup_pane_g3

0x0002,

0xf9d1,	// (0x0001e104) cell_graphic_popup_pane_g

0x6793,	// (0x00014ec6) cell_graphic_popup_pane_t2

0x2aad,	// (0x000111e0) grid_highlight_pane_cp3

0x2c92,	// (0x000113c5) list_gen_pane_ParamLimits

0x2c92,	// (0x000113c5) list_gen_pane

0x2cc4,	// (0x000113f7) scroll_pane

0x66e4,	// (0x00014e17) bg_list_pane_g1_ParamLimits

0x66e4,	// (0x00014e17) bg_list_pane_g1

0x66ff,	// (0x00014e32) bg_list_pane_g2_ParamLimits

0x66ff,	// (0x00014e32) bg_list_pane_g2

0x6712,	// (0x00014e45) bg_list_pane_g3_ParamLimits

0x6712,	// (0x00014e45) bg_list_pane_g3

0x6724,	// (0x00014e57) bg_list_pane_g4_ParamLimits

0x6724,	// (0x00014e57) bg_list_pane_g4

0x6736,	// (0x00014e69) bg_list_pane_g5_ParamLimits

0x6736,	// (0x00014e69) bg_list_pane_g5

0x0004,

0xf9c6,	// (0x0001e0f9) bg_list_pane_g_ParamLimits

0xf9c6,	// (0x0001e0f9) bg_list_pane_g

0xcc60,	// (0x0001b393) list_double2_graphic_large_graphic_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double2_graphic_large_graphic_pane

0xcc60,	// (0x0001b393) list_double2_graphic_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double2_graphic_pane

0xcc60,	// (0x0001b393) list_double2_large_graphic_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double2_large_graphic_pane

0xcc60,	// (0x0001b393) list_double2_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double2_pane

0xcc60,	// (0x0001b393) list_double_graphic_heading_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double_graphic_heading_pane

0xcc60,	// (0x0001b393) list_double_graphic_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double_graphic_pane

0xcc60,	// (0x0001b393) list_double_heading_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double_heading_pane

0xcc60,	// (0x0001b393) list_double_large_graphic_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double_large_graphic_pane

0xcc60,	// (0x0001b393) list_double_number_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double_number_pane

0xcc60,	// (0x0001b393) list_double_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double_pane

0xcc60,	// (0x0001b393) list_double_time_pane_ParamLimits

0xcc60,	// (0x0001b393) list_double_time_pane

0xcc60,	// (0x0001b393) list_setting_number_pane_ParamLimits

0xcc60,	// (0x0001b393) list_setting_number_pane

0xcc60,	// (0x0001b393) list_setting_pane_ParamLimits

0xcc60,	// (0x0001b393) list_setting_pane

0xccbc,	// (0x0001b3ef) list_single_2graphic_pane_ParamLimits

0xccbc,	// (0x0001b3ef) list_single_2graphic_pane

0xccbc,	// (0x0001b3ef) list_single_graphic_heading_pane_ParamLimits

0xccbc,	// (0x0001b3ef) list_single_graphic_heading_pane

0xccbc,	// (0x0001b3ef) list_single_graphic_pane_ParamLimits

0xccbc,	// (0x0001b3ef) list_single_graphic_pane

0xccbc,	// (0x0001b3ef) list_single_heading_pane_ParamLimits

0xccbc,	// (0x0001b3ef) list_single_heading_pane

0xcd2a,	// (0x0001b45d) list_single_large_graphic_pane_ParamLimits

0xcd2a,	// (0x0001b45d) list_single_large_graphic_pane

0xccbc,	// (0x0001b3ef) list_single_number_heading_pane_ParamLimits

0xccbc,	// (0x0001b3ef) list_single_number_heading_pane

0xccbc,	// (0x0001b3ef) list_single_number_pane_ParamLimits

0xccbc,	// (0x0001b3ef) list_single_number_pane

0xccbc,	// (0x0001b3ef) list_single_pane_ParamLimits

0xccbc,	// (0x0001b3ef) list_single_pane

0x2404,	// (0x00010b37) list_highlight_pane_cp1

0xc3eb,	// (0x0001ab1e) list_single_pane_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_pane_g1

0xc3f7,	// (0x0001ab2a) list_single_pane_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_single_pane_g

0xcc4a,	// (0x0001b37d) list_single_pane_t1_ParamLimits

0xcc4a,	// (0x0001b37d) list_single_pane_t1

0xc3eb,	// (0x0001ab1e) list_single_number_pane_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_number_pane_g1

0xc3f7,	// (0x0001ab2a) list_single_number_pane_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_single_number_pane_g

0xcb7e,	// (0x0001b2b1) list_single_number_pane_t1_ParamLimits

0xcb7e,	// (0x0001b2b1) list_single_number_pane_t1

0xcc0a,	// (0x0001b33d) list_single_number_pane_t2_ParamLimits

0xcc0a,	// (0x0001b33d) list_single_number_pane_t2

0x0001,

0xf987,	// (0x0001e0ba) list_single_number_pane_t_ParamLimits

0xf987,	// (0x0001e0ba) list_single_number_pane_t

0xc3df,	// (0x0001ab12) list_single_graphic_pane_g1_ParamLimits

0xc3df,	// (0x0001ab12) list_single_graphic_pane_g1

0xc3eb,	// (0x0001ab1e) list_single_graphic_pane_g2_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_graphic_pane_g2

0xc3f7,	// (0x0001ab2a) list_single_graphic_pane_g3_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001dd38) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001dd38) list_single_graphic_pane_g

0xc403,	// (0x0001ab36) list_single_graphic_pane_t1_ParamLimits

0xc403,	// (0x0001ab36) list_single_graphic_pane_t1

0xc3eb,	// (0x0001ab1e) list_single_heading_pane_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_heading_pane_g1

0xc3f7,	// (0x0001ab2a) list_single_heading_pane_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_single_heading_pane_g

0xc419,	// (0x0001ab4c) list_single_heading_pane_t1_ParamLimits

0xc419,	// (0x0001ab4c) list_single_heading_pane_t1

0xc42f,	// (0x0001ab62) list_single_heading_pane_t2_ParamLimits

0xc42f,	// (0x0001ab62) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001dd44) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001dd44) list_single_heading_pane_t

0xc3eb,	// (0x0001ab1e) list_single_number_heading_pane_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_number_heading_pane_g1

0xc3f7,	// (0x0001ab2a) list_single_number_heading_pane_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_single_number_heading_pane_g

0xc419,	// (0x0001ab4c) list_single_number_heading_pane_t1_ParamLimits

0xc419,	// (0x0001ab4c) list_single_number_heading_pane_t1

0xc441,	// (0x0001ab74) list_single_number_heading_pane_t2_ParamLimits

0xc441,	// (0x0001ab74) list_single_number_heading_pane_t2

0xc453,	// (0x0001ab86) list_single_number_heading_pane_t3_ParamLimits

0xc453,	// (0x0001ab86) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001dd49) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001dd49) list_single_number_heading_pane_t

0xc465,	// (0x0001ab98) list_single_graphic_heading_pane_g1_ParamLimits

0xc465,	// (0x0001ab98) list_single_graphic_heading_pane_g1

0xc471,	// (0x0001aba4) list_single_graphic_heading_pane_g4_ParamLimits

0xc471,	// (0x0001aba4) list_single_graphic_heading_pane_g4

0xc3f7,	// (0x0001ab2a) list_single_graphic_heading_pane_g5_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001dd50) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001dd50) list_single_graphic_heading_pane_g

0xc419,	// (0x0001ab4c) list_single_graphic_heading_pane_t1_ParamLimits

0xc419,	// (0x0001ab4c) list_single_graphic_heading_pane_t1

0xc482,	// (0x0001abb5) list_single_graphic_heading_pane_t2_ParamLimits

0xc482,	// (0x0001abb5) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001dd57) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001dd57) list_single_graphic_heading_pane_t

0xc494,	// (0x0001abc7) list_single_large_graphic_pane_g1_ParamLimits

0xc494,	// (0x0001abc7) list_single_large_graphic_pane_g1

0xc4a0,	// (0x0001abd3) list_single_large_graphic_pane_g2_ParamLimits

0xc4a0,	// (0x0001abd3) list_single_large_graphic_pane_g2

0xc4ac,	// (0x0001abdf) list_single_large_graphic_pane_g3_ParamLimits

0xc4ac,	// (0x0001abdf) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001dd5c) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001dd5c) list_single_large_graphic_pane_g

0x55ee,	// (0x00013d21) wait_border_pane_g2_copy1

0xc4b8,	// (0x0001abeb) list_single_large_graphic_pane_g4_cp2

0xc4c0,	// (0x0001abf3) list_single_large_graphic_pane_t1_ParamLimits

0xc4c0,	// (0x0001abf3) list_single_large_graphic_pane_t1

0xc4d6,	// (0x0001ac09) list_double_pane_g1_ParamLimits

0xc4d6,	// (0x0001ac09) list_double_pane_g1

0xc4e2,	// (0x0001ac15) list_double_pane_g2_ParamLimits

0xc4e2,	// (0x0001ac15) list_double_pane_g2

0x0001,

0xf630,	// (0x0001dd63) list_double_pane_g_ParamLimits

0xf630,	// (0x0001dd63) list_double_pane_g

0xc4ee,	// (0x0001ac21) list_double_pane_t1_ParamLimits

0xc4ee,	// (0x0001ac21) list_double_pane_t1

0xc504,	// (0x0001ac37) list_double_pane_t2_ParamLimits

0xc504,	// (0x0001ac37) list_double_pane_t2

0x0001,

0xf635,	// (0x0001dd68) list_double_pane_t_ParamLimits

0xf635,	// (0x0001dd68) list_double_pane_t

0xc516,	// (0x0001ac49) list_double2_pane_g1_ParamLimits

0xc516,	// (0x0001ac49) list_double2_pane_g1

0xc4e2,	// (0x0001ac15) list_double2_pane_g2_ParamLimits

0xc4e2,	// (0x0001ac15) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001dd6d) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001dd6d) list_double2_pane_g

0xc4ee,	// (0x0001ac21) list_double2_pane_t1_ParamLimits

0xc4ee,	// (0x0001ac21) list_double2_pane_t1

0xc527,	// (0x0001ac5a) list_double2_pane_t2_ParamLimits

0xc527,	// (0x0001ac5a) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001dd72) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001dd72) list_double2_pane_t

0xc4d6,	// (0x0001ac09) list_double_number_pane_g1_ParamLimits

0xc4d6,	// (0x0001ac09) list_double_number_pane_g1

0xc4e2,	// (0x0001ac15) list_double_number_pane_g2_ParamLimits

0xc4e2,	// (0x0001ac15) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001dd63) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001dd63) list_double_number_pane_g

0xc539,	// (0x0001ac6c) list_double_number_pane_t1_ParamLimits

0xc539,	// (0x0001ac6c) list_double_number_pane_t1

0xc54b,	// (0x0001ac7e) list_double_number_pane_t2_ParamLimits

0xc54b,	// (0x0001ac7e) list_double_number_pane_t2

0xc561,	// (0x0001ac94) list_double_number_pane_t3_ParamLimits

0xc561,	// (0x0001ac94) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001dd77) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001dd77) list_double_number_pane_t

0xc573,	// (0x0001aca6) list_double_graphic_pane_g1_ParamLimits

0xc573,	// (0x0001aca6) list_double_graphic_pane_g1

0xc57f,	// (0x0001acb2) list_double_graphic_pane_g2_ParamLimits

0xc57f,	// (0x0001acb2) list_double_graphic_pane_g2

0xc58e,	// (0x0001acc1) list_double_graphic_pane_g3_ParamLimits

0xc58e,	// (0x0001acc1) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001dd7e) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001dd7e) list_double_graphic_pane_g

0xc5a6,	// (0x0001acd9) list_double_graphic_pane_t1_ParamLimits

0xc5a6,	// (0x0001acd9) list_double_graphic_pane_t1

0xc5bc,	// (0x0001acef) list_double_graphic_pane_t2_ParamLimits

0xc5bc,	// (0x0001acef) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001dd87) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001dd87) list_double_graphic_pane_t

0xc573,	// (0x0001aca6) list_double2_graphic_pane_g1_ParamLimits

0xc573,	// (0x0001aca6) list_double2_graphic_pane_g1

0xc5ce,	// (0x0001ad01) list_double2_graphic_pane_g2_ParamLimits

0xc5ce,	// (0x0001ad01) list_double2_graphic_pane_g2

0xc5da,	// (0x0001ad0d) list_double2_graphic_pane_g3_ParamLimits

0xc5da,	// (0x0001ad0d) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001dd8c) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001dd8c) list_double2_graphic_pane_g

0xc54b,	// (0x0001ac7e) list_double2_graphic_pane_t1_ParamLimits

0xc54b,	// (0x0001ac7e) list_double2_graphic_pane_t1

0xc5e6,	// (0x0001ad19) list_double2_graphic_pane_t2_ParamLimits

0xc5e6,	// (0x0001ad19) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001dd93) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001dd93) list_double2_graphic_pane_t

0xc5f8,	// (0x0001ad2b) list_double_large_graphic_pane_g1_ParamLimits

0xc5f8,	// (0x0001ad2b) list_double_large_graphic_pane_g1

0xc516,	// (0x0001ac49) list_double_large_graphic_pane_g2_ParamLimits

0xc516,	// (0x0001ac49) list_double_large_graphic_pane_g2

0xc4e2,	// (0x0001ac15) list_double_large_graphic_pane_g3_ParamLimits

0xc4e2,	// (0x0001ac15) list_double_large_graphic_pane_g3

0xc623,	// (0x0001ad56) list_double_large_graphic_pane_g4_ParamLimits

0xc623,	// (0x0001ad56) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001dd98) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001dd98) list_double_large_graphic_pane_g

0xc64b,	// (0x0001ad7e) list_double_large_graphic_pane_t1_ParamLimits

0xc64b,	// (0x0001ad7e) list_double_large_graphic_pane_t1

0xc664,	// (0x0001ad97) list_double_large_graphic_pane_t2_ParamLimits

0xc664,	// (0x0001ad97) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001dda3) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001dda3) list_double_large_graphic_pane_t

0xc676,	// (0x0001ada9) list_double2_large_graphic_pane_g1_ParamLimits

0xc676,	// (0x0001ada9) list_double2_large_graphic_pane_g1

0xc516,	// (0x0001ac49) list_double2_large_graphic_pane_g2_ParamLimits

0xc516,	// (0x0001ac49) list_double2_large_graphic_pane_g2

0xc4e2,	// (0x0001ac15) list_double2_large_graphic_pane_g3_ParamLimits

0xc4e2,	// (0x0001ac15) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001dda8) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001dda8) list_double2_large_graphic_pane_g

0xc682,	// (0x0001adb5) list_double2_large_graphic_pane_t1_ParamLimits

0xc682,	// (0x0001adb5) list_double2_large_graphic_pane_t1

0xc698,	// (0x0001adcb) list_double2_large_graphic_pane_t2_ParamLimits

0xc698,	// (0x0001adcb) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001ddaf) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001ddaf) list_double2_large_graphic_pane_t

0xc6aa,	// (0x0001addd) list_double_heading_pane_g1_ParamLimits

0xc6aa,	// (0x0001addd) list_double_heading_pane_g1

0xc6bb,	// (0x0001adee) list_double_heading_pane_g2_ParamLimits

0xc6bb,	// (0x0001adee) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001ddb4) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001ddb4) list_double_heading_pane_g

0xc6c7,	// (0x0001adfa) list_double_heading_pane_t1_ParamLimits

0xc6c7,	// (0x0001adfa) list_double_heading_pane_t1

0xc527,	// (0x0001ac5a) list_double_heading_pane_t2_ParamLimits

0xc527,	// (0x0001ac5a) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001ddb9) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001ddb9) list_double_heading_pane_t

0xc573,	// (0x0001aca6) list_double_graphic_heading_pane_g1_ParamLimits

0xc573,	// (0x0001aca6) list_double_graphic_heading_pane_g1

0xc6aa,	// (0x0001addd) list_double_graphic_heading_pane_g2_ParamLimits

0xc6aa,	// (0x0001addd) list_double_graphic_heading_pane_g2

0xc6bb,	// (0x0001adee) list_double_graphic_heading_pane_g3_ParamLimits

0xc6bb,	// (0x0001adee) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001ddbe) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001ddbe) list_double_graphic_heading_pane_g

0xc6dd,	// (0x0001ae10) list_double_graphic_heading_pane_t1_ParamLimits

0xc6dd,	// (0x0001ae10) list_double_graphic_heading_pane_t1

0xc5e6,	// (0x0001ad19) list_double_graphic_heading_pane_t2_ParamLimits

0xc5e6,	// (0x0001ad19) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001ddc5) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001ddc5) list_double_graphic_heading_pane_t

0xc516,	// (0x0001ac49) list_double_time_pane_g1_ParamLimits

0xc516,	// (0x0001ac49) list_double_time_pane_g1

0xc4e2,	// (0x0001ac15) list_double_time_pane_g2_ParamLimits

0xc4e2,	// (0x0001ac15) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0001dd6d) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0001dd6d) list_double_time_pane_g

0xc682,	// (0x0001adb5) list_double_time_pane_t1_ParamLimits

0xc682,	// (0x0001adb5) list_double_time_pane_t1

0xc6f3,	// (0x0001ae26) list_double_time_pane_t2_ParamLimits

0xc6f3,	// (0x0001ae26) list_double_time_pane_t2

0xc705,	// (0x0001ae38) list_double_time_pane_t3_ParamLimits

0xc705,	// (0x0001ae38) list_double_time_pane_t3

0xc717,	// (0x0001ae4a) list_double_time_pane_t4_ParamLimits

0xc717,	// (0x0001ae4a) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0001ddca) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0001ddca) list_double_time_pane_t

0xc729,	// (0x0001ae5c) list_setting_pane_g1_ParamLimits

0xc729,	// (0x0001ae5c) list_setting_pane_g1

0xc735,	// (0x0001ae68) list_setting_pane_g2_ParamLimits

0xc735,	// (0x0001ae68) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0001ddd3) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0001ddd3) list_setting_pane_g

0xc741,	// (0x0001ae74) list_setting_pane_t1_ParamLimits

0xc741,	// (0x0001ae74) list_setting_pane_t1

0xc758,	// (0x0001ae8b) list_setting_pane_t2_ParamLimits

0xc758,	// (0x0001ae8b) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0001ddd8) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0001ddd8) list_setting_pane_t

0xc795,	// (0x0001aec8) set_value_pane_cp_ParamLimits

0xc795,	// (0x0001aec8) set_value_pane_cp

0xc7a1,	// (0x0001aed4) list_setting_number_pane_g1_ParamLimits

0xc7a1,	// (0x0001aed4) list_setting_number_pane_g1

0xc7ad,	// (0x0001aee0) list_setting_number_pane_g2_ParamLimits

0xc7ad,	// (0x0001aee0) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0001dddf) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0001dddf) list_setting_number_pane_g

0xc7b9,	// (0x0001aeec) list_setting_number_pane_t1_ParamLimits

0xc7b9,	// (0x0001aeec) list_setting_number_pane_t1

0xc7cd,	// (0x0001af00) list_setting_number_pane_t2_ParamLimits

0xc7cd,	// (0x0001af00) list_setting_number_pane_t2

0xc7e4,	// (0x0001af17) list_setting_number_pane_t3_ParamLimits

0xc7e4,	// (0x0001af17) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001dde4) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001dde4) list_setting_number_pane_t

0xc795,	// (0x0001aec8) set_value_pane_ParamLimits

0xc795,	// (0x0001aec8) set_value_pane

0x3192,	// (0x000118c5) bg_set_opt_pane_ParamLimits

0x3192,	// (0x000118c5) bg_set_opt_pane

0xc827,	// (0x0001af5a) set_value_pane_t1

0x31c1,	// (0x000118f4) slider_set_pane_cp3

0x31ca,	// (0x000118fd) volume_small_pane_cp

0x31d3,	// (0x00011906) list_form_gen_pane

0x31dc,	// (0x0001190f) scroll_pane_cp8

0xc83d,	// (0x0001af70) form_field_data_pane_ParamLimits

0xc83d,	// (0x0001af70) form_field_data_pane

0xc85d,	// (0x0001af90) form_field_data_wide_pane_ParamLimits

0xc85d,	// (0x0001af90) form_field_data_wide_pane

0xc87e,	// (0x0001afb1) form_field_popup_pane_ParamLimits

0xc87e,	// (0x0001afb1) form_field_popup_pane

0xc89c,	// (0x0001afcf) form_field_popup_wide_pane_ParamLimits

0xc89c,	// (0x0001afcf) form_field_popup_wide_pane

0xc8b7,	// (0x0001afea) form_field_slider_pane_ParamLimits

0xc8b7,	// (0x0001afea) form_field_slider_pane

0xc8ca,	// (0x0001affd) form_field_slider_wide_pane_ParamLimits

0xc8ca,	// (0x0001affd) form_field_slider_wide_pane

0x328d,	// (0x000119c0) data_form_pane

0xc8e7,	// (0x0001b01a) form_field_data_pane_t1

0x32bd,	// (0x000119f0) input_focus_pane

0x32cb,	// (0x000119fe) data_form_wide_pane

0xc90d,	// (0x0001b040) form_field_data_wide_pane_t1

0x2ac2,	// (0x000111f5) input_focus_pane_cp6

0xc92f,	// (0x0001b062) form_field_popup_pane_t1

0x32bd,	// (0x000119f0) input_focus_pane_cp7

0x333f,	// (0x00011a72) list_form_pane

0xc951,	// (0x0001b084) form_field_popup_wide_pane_t1

0x32bd,	// (0x000119f0) input_focus_pane_cp8

0x3368,	// (0x00011a9b) list_form_wide_pane

0xc96e,	// (0x0001b0a1) form_field_slider_pane_t1_ParamLimits

0xc96e,	// (0x0001b0a1) form_field_slider_pane_t1

0xc982,	// (0x0001b0b5) form_field_slider_pane_t2_ParamLimits

0xc982,	// (0x0001b0b5) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001ddf4) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001ddf4) form_field_slider_pane_t

0x2779,	// (0x00010eac) input_focus_pane_cp9_ParamLimits

0x2779,	// (0x00010eac) input_focus_pane_cp9

0xc994,	// (0x0001b0c7) slider_cont_pane_ParamLimits

0xc994,	// (0x0001b0c7) slider_cont_pane

0x33b9,	// (0x00011aec) form_field_slider_wide_pane_t1_ParamLimits

0x33b9,	// (0x00011aec) form_field_slider_wide_pane_t1

0xc9a8,	// (0x0001b0db) form_field_slider_wide_pane_t2_ParamLimits

0xc9a8,	// (0x0001b0db) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001ddf9) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001ddf9) form_field_slider_wide_pane_t

0x2779,	// (0x00010eac) input_focus_pane_cp10_ParamLimits

0x2779,	// (0x00010eac) input_focus_pane_cp10

0xc9ba,	// (0x0001b0ed) slider_cont_pane_cp1_ParamLimits

0xc9ba,	// (0x0001b0ed) slider_cont_pane_cp1

0xc9ce,	// (0x0001b101) slider_form_pane_cp

0x33f9,	// (0x00011b2c) input_focus_pane_g1

0x3401,	// (0x00011b34) input_focus_pane_g2

0x3409,	// (0x00011b3c) input_focus_pane_g3

0x3411,	// (0x00011b44) input_focus_pane_g4

0x3419,	// (0x00011b4c) input_focus_pane_g5

0x3421,	// (0x00011b54) input_focus_pane_g6

0x3429,	// (0x00011b5c) input_focus_pane_g7

0x3431,	// (0x00011b64) input_focus_pane_g8

0x3439,	// (0x00011b6c) input_focus_pane_g9

0x23fa,	// (0x00010b2d) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001ddfe) input_focus_pane_g

0x55f7,	// (0x00013d2a) wait_border_pane_g3_copy1

0xc9d6,	// (0x0001b109) data_form_pane_t1

0x23fa,	// (0x00010b2d) wait_anim_pane_g1_copy1

0xcc1c,	// (0x0001b34f) data_form_wide_pane_t1

0xc9f1,	// (0x0001b124) list_form_graphic_pane_cp_ParamLimits

0xc9f1,	// (0x0001b124) list_form_graphic_pane_cp

0x654a,	// (0x00014c7d) slider_form_pane_g1

0x6553,	// (0x00014c86) slider_form_pane_g2

0x0006,

0xf9b7,	// (0x0001e0ea) slider_form_pane_g

0xca08,	// (0x0001b13b) list_form_graphic_pane_ParamLimits

0xca08,	// (0x0001b13b) list_form_graphic_pane

0xca22,	// (0x0001b155) list_form_graphic_pane_g1

0xca2a,	// (0x0001b15d) list_form_graphic_pane_t1_ParamLimits

0xca2a,	// (0x0001b15d) list_form_graphic_pane_t1

0x24e4,	// (0x00010c17) list_highlight_pane_cp5_ParamLimits

0x24e4,	// (0x00010c17) list_highlight_pane_cp5

0xca3f,	// (0x0001b172) find_pane_g1

0x34b3,	// (0x00011be6) input_find_pane

0xca48,	// (0x0001b17b) input_find_pane_g1_ParamLimits

0xca48,	// (0x0001b17b) input_find_pane_g1

0xca54,	// (0x0001b187) input_find_pane_t1_ParamLimits

0xca54,	// (0x0001b187) input_find_pane_t1

0xca69,	// (0x0001b19c) input_find_pane_t2_ParamLimits

0xca69,	// (0x0001b19c) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001de13) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001de13) input_find_pane_t

0x34f2,	// (0x00011c25) input_focus_pane_cp5_ParamLimits

0x34f2,	// (0x00011c25) input_focus_pane_cp5

0x350c,	// (0x00011c3f) bg_popup_window_pane_cp2_ParamLimits

0x350c,	// (0x00011c3f) bg_popup_window_pane_cp2

0x3519,	// (0x00011c4c) listscroll_menu_pane_ParamLimits

0x3519,	// (0x00011c4c) listscroll_menu_pane

0x3525,	// (0x00011c58) popup_submenu_window_ParamLimits

0x3525,	// (0x00011c58) popup_submenu_window

0x3549,	// (0x00011c7c) find_popup_pane_g1

0x3551,	// (0x00011c84) input_popup_find_pane_cp

0x34f2,	// (0x00011c25) input_focus_pane_cp4_ParamLimits

0x34f2,	// (0x00011c25) input_focus_pane_cp4

0x3569,	// (0x00011c9c) input_popup_find_pane_t1_ParamLimits

0x3569,	// (0x00011c9c) input_popup_find_pane_t1

0x2404,	// (0x00010b37) bg_popup_sub_pane_cp

0x3597,	// (0x00011cca) listscroll_popup_sub_pane

0x359f,	// (0x00011cd2) list_submenu_pane_ParamLimits

0x359f,	// (0x00011cd2) list_submenu_pane

0x35b0,	// (0x00011ce3) scroll_pane_cp4

0x35b8,	// (0x00011ceb) list_single_popup_submenu_pane_ParamLimits

0x35b8,	// (0x00011ceb) list_single_popup_submenu_pane

0x35cb,	// (0x00011cfe) list_single_popup_submenu_pane_g1

0x35d3,	// (0x00011d06) list_single_popup_submenu_pane_t1_ParamLimits

0x35d3,	// (0x00011d06) list_single_popup_submenu_pane_t1

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp1_ParamLimits

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp1

0x35e8,	// (0x00011d1b) tabs_2_active_pane_g1

0x35f0,	// (0x00011d23) tabs_2_active_pane_t1

0x24e4,	// (0x00010c17) bg_passive_tab_pane_cp1_ParamLimits

0x24e4,	// (0x00010c17) bg_passive_tab_pane_cp1

0x35e8,	// (0x00011d1b) tabs_2_passive_pane_g1

0x35f0,	// (0x00011d23) tabs_2_passive_pane_t1

0x3602,	// (0x00011d35) bg_active_tab_pane_cp4

0x3610,	// (0x00011d43) tabs_2_long_active_pane_t1

0x3623,	// (0x00011d56) bg_passive_tab_pane_cp4

0xddc1,	// (0x0001c4f4) list_single_midp_graphic_pane_g4_ParamLimits

0x3602,	// (0x00011d35) bg_active_tab_pane_cp5

0x362f,	// (0x00011d62) tabs_3_long_active_pane_t1

0x3623,	// (0x00011d56) bg_passive_tab_pane_cp5

0xddc1,	// (0x0001c4f4) list_single_midp_graphic_pane_g4

0x24e4,	// (0x00010c17) bg_popup_window_pane_cp13_ParamLimits

0x24e4,	// (0x00010c17) bg_popup_window_pane_cp13

0x364a,	// (0x00011d7d) listscroll_popup_fast_pane_ParamLimits

0x364a,	// (0x00011d7d) listscroll_popup_fast_pane

0x3659,	// (0x00011d8c) grid_popup_fast_pane_ParamLimits

0x3659,	// (0x00011d8c) grid_popup_fast_pane

0x366b,	// (0x00011d9e) scroll_pane_cp9_ParamLimits

0x366b,	// (0x00011d9e) scroll_pane_cp9

0x82fa,	// (0x00016a2d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x82fa,	// (0x00016a2d) list_single_graphic_hl_pane_t1_cp2

0x368f,	// (0x00011dc2) input_focus_pane_cp20_ParamLimits

0x368f,	// (0x00011dc2) input_focus_pane_cp20

0x369d,	// (0x00011dd0) query_popup_data_pane_t1_ParamLimits

0x369d,	// (0x00011dd0) query_popup_data_pane_t1

0x36b0,	// (0x00011de3) query_popup_data_pane_t2_ParamLimits

0x36b0,	// (0x00011de3) query_popup_data_pane_t2

0x36f6,	// (0x00011e29) query_popup_data_pane_t3_ParamLimits

0x36f6,	// (0x00011e29) query_popup_data_pane_t3

0x3737,	// (0x00011e6a) query_popup_data_pane_t4_ParamLimits

0x3737,	// (0x00011e6a) query_popup_data_pane_t4

0x3773,	// (0x00011ea6) query_popup_data_pane_t5_ParamLimits

0x3773,	// (0x00011ea6) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001de18) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001de18) query_popup_data_pane_t

0x33f9,	// (0x00011b2c) bg_set_opt_pane_g1

0x3401,	// (0x00011b34) bg_set_opt_pane_g2

0x3409,	// (0x00011b3c) bg_set_opt_pane_g3

0x3411,	// (0x00011b44) bg_set_opt_pane_g4

0x3419,	// (0x00011b4c) bg_set_opt_pane_g5

0x3421,	// (0x00011b54) bg_set_opt_pane_g6

0x3429,	// (0x00011b5c) bg_set_opt_pane_g7

0x3431,	// (0x00011b64) bg_set_opt_pane_g8

0x3439,	// (0x00011b6c) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001de23) bg_set_opt_pane_g

0xda38,	// (0x0001c16b) control_top_pane_stacon_ParamLimits

0xda38,	// (0x0001c16b) control_top_pane_stacon

0xda8b,	// (0x0001c1be) signal_pane_stacon_ParamLimits

0xda8b,	// (0x0001c1be) signal_pane_stacon

0x3d97,	// (0x000124ca) stacon_top_pane_g1_ParamLimits

0x3d97,	// (0x000124ca) stacon_top_pane_g1

0xdab0,	// (0x0001c1e3) title_pane_stacon_ParamLimits

0xdab0,	// (0x0001c1e3) title_pane_stacon

0xdada,	// (0x0001c20d) uni_indicator_pane_stacon_ParamLimits

0xdada,	// (0x0001c20d) uni_indicator_pane_stacon

0xdaef,	// (0x0001c222) battery_pane_stacon_ParamLimits

0xdaef,	// (0x0001c222) battery_pane_stacon

0xdb33,	// (0x0001c266) control_bottom_pane_stacon_ParamLimits

0xdb33,	// (0x0001c266) control_bottom_pane_stacon

0xdb56,	// (0x0001c289) navi_pane_stacon_ParamLimits

0xdb56,	// (0x0001c289) navi_pane_stacon

0x3db9,	// (0x000124ec) stacon_bottom_pane_g1_ParamLimits

0x3db9,	// (0x000124ec) stacon_bottom_pane_g1

0xd799,	// (0x0001becc) aid_levels_signal_lsc_ParamLimits

0xd799,	// (0x0001becc) aid_levels_signal_lsc

0xd7b0,	// (0x0001bee3) signal_pane_stacon_g1_ParamLimits

0xd7b0,	// (0x0001bee3) signal_pane_stacon_g1

0xd7c4,	// (0x0001bef7) signal_pane_stacon_g2_ParamLimits

0xd7c4,	// (0x0001bef7) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001de36) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001de36) signal_pane_stacon_g

0xd7f9,	// (0x0001bf2c) title_pane_stacon_t1_ParamLimits

0xd7f9,	// (0x0001bf2c) title_pane_stacon_t1

0x37cb,	// (0x00011efe) uni_indicator_pane_stacon_g1

0x37d5,	// (0x00011f08) uni_indicator_pane_stacon_g2

0x37b7,	// (0x00011eea) uni_indicator_pane_stacon_g3

0x37c1,	// (0x00011ef4) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001de42) uni_indicator_pane_stacon_g

0xd81e,	// (0x0001bf51) control_top_pane_stacon_g1

0xd826,	// (0x0001bf59) control_top_pane_stacon_t1_ParamLimits

0xd826,	// (0x0001bf59) control_top_pane_stacon_t1

0xd85d,	// (0x0001bf90) aid_levels_battery_lsc_ParamLimits

0xd85d,	// (0x0001bf90) aid_levels_battery_lsc

0xd875,	// (0x0001bfa8) battery_pane_stacon_g1_ParamLimits

0xd875,	// (0x0001bfa8) battery_pane_stacon_g1

0xd888,	// (0x0001bfbb) battery_pane_stacon_g2_ParamLimits

0xd888,	// (0x0001bfbb) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001de4b) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001de4b) battery_pane_stacon_g

0xd8c6,	// (0x0001bff9) navi_icon_pane_stacon

0xd8da,	// (0x0001c00d) navi_navi_pane_stacon

0xd8c6,	// (0x0001bff9) navi_text_pane_stacon

0xd81e,	// (0x0001bf51) control_bottom_pane_stacon_g1

0xd8ee,	// (0x0001c021) control_bottom_pane_stacon_t1_ParamLimits

0xd8ee,	// (0x0001c021) control_bottom_pane_stacon_t1

0x37f9,	// (0x00011f2c) grid_app_pane_ParamLimits

0x37f9,	// (0x00011f2c) grid_app_pane

0x381b,	// (0x00011f4e) scroll_pane_cp15_ParamLimits

0x381b,	// (0x00011f4e) scroll_pane_cp15

0x3830,	// (0x00011f63) cell_app_pane_ParamLimits

0x3830,	// (0x00011f63) cell_app_pane

0x385a,	// (0x00011f8d) cell_app_pane_g1_ParamLimits

0x385a,	// (0x00011f8d) cell_app_pane_g1

0x387e,	// (0x00011fb1) cell_app_pane_g2_ParamLimits

0x387e,	// (0x00011fb1) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001de50) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001de50) cell_app_pane_g

0x388a,	// (0x00011fbd) cell_app_pane_t1_ParamLimits

0x388a,	// (0x00011fbd) cell_app_pane_t1

0x389c,	// (0x00011fcf) grid_highlight_pane_ParamLimits

0x389c,	// (0x00011fcf) grid_highlight_pane

0x33f9,	// (0x00011b2c) cell_highlight_pane_g1

0x3401,	// (0x00011b34) cell_highlight_pane_g2

0x3409,	// (0x00011b3c) cell_highlight_pane_g3

0x3411,	// (0x00011b44) cell_highlight_pane_g4

0x3419,	// (0x00011b4c) cell_highlight_pane_g5

0x3421,	// (0x00011b54) cell_highlight_pane_g6

0x3429,	// (0x00011b5c) cell_highlight_pane_g7

0x3431,	// (0x00011b64) cell_highlight_pane_g8

0x3439,	// (0x00011b6c) cell_highlight_pane_g9

0x23fa,	// (0x00010b2d) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001ddfe) cell_highlight_pane_g

0x38ad,	// (0x00011fe0) bg_scroll_pane

0xd938,	// (0x0001c06b) scroll_handle_pane

0x38f4,	// (0x00012027) scroll_bg_pane_g1

0x3909,	// (0x0001203c) scroll_bg_pane_g2

0x3921,	// (0x00012054) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001de55) scroll_bg_pane_g

0x3936,	// (0x00012069) scroll_handle_focus_pane_ParamLimits

0x3936,	// (0x00012069) scroll_handle_focus_pane

0x38f4,	// (0x00012027) scroll_handle_pane_g1

0x3943,	// (0x00012076) scroll_handle_pane_g2

0x3921,	// (0x00012054) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001de5c) scroll_handle_pane_g

0x34f2,	// (0x00011c25) bg_popup_sub_pane_cp21_ParamLimits

0x34f2,	// (0x00011c25) bg_popup_sub_pane_cp21

0x3957,	// (0x0001208a) popup_fep_japan_predictive_window_t1_ParamLimits

0x3957,	// (0x0001208a) popup_fep_japan_predictive_window_t1

0x396e,	// (0x000120a1) popup_fep_japan_predictive_window_t2_ParamLimits

0x396e,	// (0x000120a1) popup_fep_japan_predictive_window_t2

0x39a1,	// (0x000120d4) popup_fep_japan_predictive_window_t3_ParamLimits

0x39a1,	// (0x000120d4) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001de63) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001de63) popup_fep_japan_predictive_window_t

0x2404,	// (0x00010b37) bg_popup_sub_pane_cp23

0x39d8,	// (0x0001210b) listscroll_japin_cand_pane

0x39e0,	// (0x00012113) popup_fep_japan_candidate_window_t1

0x39ee,	// (0x00012121) candidate_pane_ParamLimits

0x39ee,	// (0x00012121) candidate_pane

0x3a00,	// (0x00012133) scroll_pane_cp30

0x3a08,	// (0x0001213b) list_single_popup_jap_candidate_pane_ParamLimits

0x3a08,	// (0x0001213b) list_single_popup_jap_candidate_pane

0x2404,	// (0x00010b37) list_highlight_pane_cp30

0x3a1c,	// (0x0001214f) list_single_popup_jap_candidate_pane_t1

0x3a2b,	// (0x0001215e) level_1_signal

0x3a38,	// (0x0001216b) level_2_signal

0x3a45,	// (0x00012178) level_3_signal

0x3a52,	// (0x00012185) level_4_signal

0x3a5f,	// (0x00012192) level_5_signal

0x3a6c,	// (0x0001219f) level_6_signal

0x3a79,	// (0x000121ac) level_7_signal

0x3a2b,	// (0x0001215e) level_1_battery

0x3a38,	// (0x0001216b) level_2_battery

0x3a45,	// (0x00012178) level_3_battery

0x3a52,	// (0x00012185) level_4_battery

0x3a5f,	// (0x00012192) level_5_battery

0x3a6c,	// (0x0001219f) level_6_battery

0x3a79,	// (0x000121ac) level_7_battery

0x3a9e,	// (0x000121d1) list_menu_pane_ParamLimits

0x3a9e,	// (0x000121d1) list_menu_pane

0x3aaf,	// (0x000121e2) scroll_pane_cp25_ParamLimits

0x3aaf,	// (0x000121e2) scroll_pane_cp25

0x3ac8,	// (0x000121fb) list_double2_graphic_pane_cp2_ParamLimits

0x3ac8,	// (0x000121fb) list_double2_graphic_pane_cp2

0x3ac8,	// (0x000121fb) list_double2_large_graphic_pane_cp2_ParamLimits

0x3ac8,	// (0x000121fb) list_double2_large_graphic_pane_cp2

0x3ac8,	// (0x000121fb) list_double2_pane_cp2_ParamLimits

0x3ac8,	// (0x000121fb) list_double2_pane_cp2

0x3ac8,	// (0x000121fb) list_double_graphic_pane_cp2_ParamLimits

0x3ac8,	// (0x000121fb) list_double_graphic_pane_cp2

0x3ac8,	// (0x000121fb) list_double_large_graphic_pane_cp2_ParamLimits

0x3ac8,	// (0x000121fb) list_double_large_graphic_pane_cp2

0x3ac8,	// (0x000121fb) list_double_number_pane_cp2_ParamLimits

0x3ac8,	// (0x000121fb) list_double_number_pane_cp2

0x3ac8,	// (0x000121fb) list_double_pane_cp2_ParamLimits

0x3ac8,	// (0x000121fb) list_double_pane_cp2

0x3aea,	// (0x0001221d) list_single_2graphic_pane_cp2_ParamLimits

0x3aea,	// (0x0001221d) list_single_2graphic_pane_cp2

0x3aea,	// (0x0001221d) list_single_graphic_heading_pane_cp2_ParamLimits

0x3aea,	// (0x0001221d) list_single_graphic_heading_pane_cp2

0x3aea,	// (0x0001221d) list_single_graphic_pane_cp2_ParamLimits

0x3aea,	// (0x0001221d) list_single_graphic_pane_cp2

0x3aea,	// (0x0001221d) list_single_heading_pane_cp2_ParamLimits

0x3aea,	// (0x0001221d) list_single_heading_pane_cp2

0x3b01,	// (0x00012234) list_single_large_graphic_pane_cp2_ParamLimits

0x3b01,	// (0x00012234) list_single_large_graphic_pane_cp2

0x3aea,	// (0x0001221d) list_single_number_heading_pane_cp2_ParamLimits

0x3aea,	// (0x0001221d) list_single_number_heading_pane_cp2

0x3aea,	// (0x0001221d) list_single_number_pane_cp2_ParamLimits

0x3aea,	// (0x0001221d) list_single_number_pane_cp2

0x3aea,	// (0x0001221d) list_single_pane_cp2_ParamLimits

0x3aea,	// (0x0001221d) list_single_pane_cp2

0x3b57,	// (0x0001228a) bg_popup_sub_pane_cp22

0xd9ea,	// (0x0001c11d) popup_side_volume_key_window_g1

0xda14,	// (0x0001c147) popup_side_volume_key_window_t1

0xda30,	// (0x0001c163) volume_small_pane_cp1

0x2779,	// (0x00010eac) bg_popup_sub_pane_cp24_ParamLimits

0x2779,	// (0x00010eac) bg_popup_sub_pane_cp24

0x3b6d,	// (0x000122a0) fep_china_uni_candidate_pane_ParamLimits

0x3b6d,	// (0x000122a0) fep_china_uni_candidate_pane

0x3b81,	// (0x000122b4) fep_china_uni_entry_pane

0x3b91,	// (0x000122c4) popup_fep_china_uni_window_g1

0x3bad,	// (0x000122e0) fep_china_uni_entry_pane_g1

0x3bb5,	// (0x000122e8) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001de90) fep_china_uni_entry_pane_g

0x3bbd,	// (0x000122f0) fep_entry_item_pane

0x3bc7,	// (0x000122fa) fep_candidate_item_pane

0x3bcf,	// (0x00012302) fep_china_uni_candidate_pane_g1

0x3bd7,	// (0x0001230a) fep_china_uni_candidate_pane_g2

0x3bdf,	// (0x00012312) fep_china_uni_candidate_pane_g3

0x3be7,	// (0x0001231a) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001de95) fep_china_uni_candidate_pane_g

0x23fa,	// (0x00010b2d) fep_entry_item_pane_g1

0x3bef,	// (0x00012322) fep_entry_item_pane_t1_ParamLimits

0x3bef,	// (0x00012322) fep_entry_item_pane_t1

0x3c05,	// (0x00012338) fep_candidate_item_pane_t1_ParamLimits

0x3c05,	// (0x00012338) fep_candidate_item_pane_t1

0x3c1a,	// (0x0001234d) fep_candidate_item_pane_t2_ParamLimits

0x3c1a,	// (0x0001234d) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001de9e) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001de9e) fep_candidate_item_pane_t

0x24e4,	// (0x00010c17) list_highlight_pane_cp31_ParamLimits

0x24e4,	// (0x00010c17) list_highlight_pane_cp31

0x3c2c,	// (0x0001235f) level_1_signal_lsc

0x3c35,	// (0x00012368) level_2_signal_lsc

0x3c3e,	// (0x00012371) level_3_signal_lsc

0x3c47,	// (0x0001237a) level_4_signal_lsc

0x3c50,	// (0x00012383) level_5_signal_lsc

0x3c59,	// (0x0001238c) level_6_signal_lsc

0x3c62,	// (0x00012395) level_7_signal_lsc

0x3c62,	// (0x00012395) level_1_battery_lsc

0x3c6b,	// (0x0001239e) level_2_battery_lsc

0x3c74,	// (0x000123a7) level_3_battery_lsc

0x3c7d,	// (0x000123b0) level_4_battery_lsc

0x3c86,	// (0x000123b9) level_5_battery_lsc

0x3c8f,	// (0x000123c2) level_6_battery_lsc

0x3c2c,	// (0x0001235f) level_7_battery_lsc

0x3c98,	// (0x000123cb) scroll_handle_focus_pane_g1

0x3ca1,	// (0x000123d4) scroll_handle_focus_pane_g2

0x3caa,	// (0x000123dd) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001dea3) scroll_handle_focus_pane_g

0xca7e,	// (0x0001b1b1) list_single_2graphic_pane_g1_ParamLimits

0xca7e,	// (0x0001b1b1) list_single_2graphic_pane_g1

0xc471,	// (0x0001aba4) list_single_2graphic_pane_g2_ParamLimits

0xc471,	// (0x0001aba4) list_single_2graphic_pane_g2

0xc3f7,	// (0x0001ab2a) list_single_2graphic_pane_g3_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_2graphic_pane_g3

0xca8a,	// (0x0001b1bd) list_single_2graphic_pane_g4_ParamLimits

0xca8a,	// (0x0001b1bd) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001deaa) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001deaa) list_single_2graphic_pane_g

0xca96,	// (0x0001b1c9) list_single_2graphic_pane_t1_ParamLimits

0xca96,	// (0x0001b1c9) list_single_2graphic_pane_t1

0xcac4,	// (0x0001b1f7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xcac4,	// (0x0001b1f7) list_double2_graphic_large_graphic_pane_g1

0xc516,	// (0x0001ac49) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc516,	// (0x0001ac49) list_double2_graphic_large_graphic_pane_g2

0xc4e2,	// (0x0001ac15) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc4e2,	// (0x0001ac15) list_double2_graphic_large_graphic_pane_g3

0xcad6,	// (0x0001b209) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcad6,	// (0x0001b209) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001deb3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001deb3) list_double2_graphic_large_graphic_pane_g

0xcae2,	// (0x0001b215) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcae2,	// (0x0001b215) list_double2_graphic_large_graphic_pane_t1

0xcaf8,	// (0x0001b22b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcaf8,	// (0x0001b22b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001debc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001debc) list_double2_graphic_large_graphic_pane_t

0x3e84,	// (0x000125b7) popup_fast_swap_window_ParamLimits

0x3e84,	// (0x000125b7) popup_fast_swap_window

0x3ea0,	// (0x000125d3) popup_side_volume_key_window

0x3eba,	// (0x000125ed) stacon_top_pane

0x3ec4,	// (0x000125f7) status_pane_ParamLimits

0x3ec4,	// (0x000125f7) status_pane

0x3eba,	// (0x000125ed) status_small_pane

0x2404,	// (0x00010b37) control_pane

0x2404,	// (0x00010b37) stacon_bottom_pane

0x31dc,	// (0x0001190f) scroll_pane_cp121

0x31d3,	// (0x00011906) set_content_pane

0x3d54,	// (0x00012487) bg_active_tab_pane_g1_cp1

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp1

0x3d42,	// (0x00012475) bg_active_tab_pane_g3_cp1

0x3d54,	// (0x00012487) bg_passive_tab_pane_g1_cp1

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp1

0x3d42,	// (0x00012475) bg_passive_tab_pane_g3_cp1

0x3d66,	// (0x00012499) bg_active_tab_pane_g1_cp2

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp2

0x3d5d,	// (0x00012490) bg_active_tab_pane_g3_cp2

0x3d66,	// (0x00012499) bg_passive_tab_pane_g1_cp2

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp2

0x3d5d,	// (0x00012490) bg_passive_tab_pane_g3_cp2

0x3d78,	// (0x000124ab) bg_active_tab_pane_g1_cp3

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp3

0x3d6f,	// (0x000124a2) bg_active_tab_pane_g3_cp3

0x3d78,	// (0x000124ab) bg_passive_tab_pane_g1_cp3

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp3

0x3d6f,	// (0x000124a2) bg_passive_tab_pane_g3_cp3

0x3d8c,	// (0x000124bf) bg_active_tab_pane_g1_cp4

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp4

0x3d81,	// (0x000124b4) bg_active_tab_pane_g3_cp4

0x3d8c,	// (0x000124bf) bg_passive_tab_pane_g1_cp4

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp4

0x3d81,	// (0x000124b4) bg_passive_tab_pane_g3_cp4

0x3dde,	// (0x00012511) bg_active_tab_pane_g1_cp5

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp5

0x3dd5,	// (0x00012508) bg_active_tab_pane_g3_cp5

0x3dde,	// (0x00012511) bg_passive_tab_pane_g1_cp5

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp5

0x3dd5,	// (0x00012508) bg_passive_tab_pane_g3_cp5

0x3de7,	// (0x0001251a) list_set_graphic_pane_ParamLimits

0x3de7,	// (0x0001251a) list_set_graphic_pane

0x2404,	// (0x00010b37) bg_set_opt_pane_cp4

0x3e05,	// (0x00012538) list_set_graphic_pane_g1_ParamLimits

0x3e05,	// (0x00012538) list_set_graphic_pane_g1

0x3e11,	// (0x00012544) list_set_graphic_pane_g2_ParamLimits

0x3e11,	// (0x00012544) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001dec1) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001dec1) list_set_graphic_pane_g

0x0009,

0xfaed,	// (0x0001e220) volume_small_pane_cp_g

0x3e35,	// (0x00012568) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3e35,	// (0x00012568) list_double2_large_graphic_pane_g1_cp2

0x3e43,	// (0x00012576) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3e43,	// (0x00012576) list_double2_large_graphic_pane_g2_cp2

0x3e54,	// (0x00012587) list_double2_large_graphic_pane_g3_cp2

0x3e5c,	// (0x0001258f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3e5c,	// (0x0001258f) list_double2_large_graphic_pane_t1_cp2

0x3e72,	// (0x000125a5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3e72,	// (0x000125a5) list_double2_large_graphic_pane_t2_cp2

0x60ca,	// (0x000147fd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x60ca,	// (0x000147fd) list_double_large_graphic_pane_g1_cp2

0x60dd,	// (0x00014810) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x60dd,	// (0x00014810) list_double_large_graphic_pane_g2_cp2

0x3fe2,	// (0x00012715) list_double_large_graphic_pane_g3_cp2

0x60ee,	// (0x00014821) list_double_large_graphic_pane_g4_cp

0x60f6,	// (0x00014829) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x60f6,	// (0x00014829) list_double_large_graphic_pane_t1_cp2

0x610d,	// (0x00014840) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x610d,	// (0x00014840) list_double_large_graphic_pane_t2_cp2

0x3ed2,	// (0x00012605) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3ed2,	// (0x00012605) list_double2_graphic_pane_g1_cp2

0x3ee0,	// (0x00012613) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3ee0,	// (0x00012613) list_double2_graphic_pane_g2_cp2

0x3ef1,	// (0x00012624) list_double2_graphic_pane_g3_cp2

0x3efb,	// (0x0001262e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3efb,	// (0x0001262e) list_double2_graphic_pane_t1_cp2

0x3f11,	// (0x00012644) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3f11,	// (0x00012644) list_double2_graphic_pane_t2_cp2

0x3f23,	// (0x00012656) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3f23,	// (0x00012656) list_single_number_heading_pane_g1_cp2

0x3f2f,	// (0x00012662) list_single_number_heading_pane_g2_cp2

0x3f37,	// (0x0001266a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3f37,	// (0x0001266a) list_single_number_heading_pane_t1_cp2

0x3f4d,	// (0x00012680) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3f4d,	// (0x00012680) list_single_number_heading_pane_t2_cp2

0x3f61,	// (0x00012694) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3f61,	// (0x00012694) list_single_number_heading_pane_t3_cp2

0x3f23,	// (0x00012656) list_single_heading_pane_g1_cp2_ParamLimits

0x3f23,	// (0x00012656) list_single_heading_pane_g1_cp2

0x3f2f,	// (0x00012662) list_single_heading_pane_g2_cp2

0x3f37,	// (0x0001266a) list_single_heading_pane_t1_cp2_ParamLimits

0x3f37,	// (0x0001266a) list_single_heading_pane_t1_cp2

0x5ed2,	// (0x00014605) list_single_heading_pane_t2_cp2_ParamLimits

0x5ed2,	// (0x00014605) list_single_heading_pane_t2_cp2

0x5e14,	// (0x00014547) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e14,	// (0x00014547) list_double_graphic_pane_g1_cp2

0x5e20,	// (0x00014553) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e20,	// (0x00014553) list_double_graphic_pane_g2_cp2

0x5e2f,	// (0x00014562) list_double_graphic_pane_g3_cp2

0x5e37,	// (0x0001456a) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e37,	// (0x0001456a) list_double_graphic_pane_t1_cp2

0x5e4d,	// (0x00014580) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e4d,	// (0x00014580) list_double_graphic_pane_t2_cp2

0x3fd6,	// (0x00012709) list_double_number_pane_g1_cp2_ParamLimits

0x3fd6,	// (0x00012709) list_double_number_pane_g1_cp2

0x3fe2,	// (0x00012715) list_double_number_pane_g2_cp2

0x5dd8,	// (0x0001450b) list_double_number_pane_t1_cp2_ParamLimits

0x5dd8,	// (0x0001450b) list_double_number_pane_t1_cp2

0x5dec,	// (0x0001451f) list_double_number_pane_t2_cp2_ParamLimits

0x5dec,	// (0x0001451f) list_double_number_pane_t2_cp2

0x5e02,	// (0x00014535) list_double_number_pane_t3_cp2_ParamLimits

0x5e02,	// (0x00014535) list_double_number_pane_t3_cp2

0x5cc1,	// (0x000143f4) list_single_graphic_pane_g1_cp2_ParamLimits

0x5cc1,	// (0x000143f4) list_single_graphic_pane_g1_cp2

0x403a,	// (0x0001276d) list_single_graphic_pane_g2_cp2_ParamLimits

0x403a,	// (0x0001276d) list_single_graphic_pane_g2_cp2

0x4046,	// (0x00012779) list_single_graphic_pane_g3_cp2

0x5c97,	// (0x000143ca) list_single_graphic_pane_t1_cp2_ParamLimits

0x5c97,	// (0x000143ca) list_single_graphic_pane_t1_cp2

0x403a,	// (0x0001276d) list_single_number_pane_g1_cp2_ParamLimits

0x403a,	// (0x0001276d) list_single_number_pane_g1_cp2

0x4046,	// (0x00012779) list_single_number_pane_g2_cp2

0x5c97,	// (0x000143ca) list_single_number_pane_t1_cp2_ParamLimits

0x5c97,	// (0x000143ca) list_single_number_pane_t1_cp2

0x5cad,	// (0x000143e0) list_single_number_pane_t2_cp2_ParamLimits

0x5cad,	// (0x000143e0) list_single_number_pane_t2_cp2

0x3e43,	// (0x00012576) list_double2_pane_g1_cp2_ParamLimits

0x3e43,	// (0x00012576) list_double2_pane_g1_cp2

0x3e54,	// (0x00012587) list_double2_pane_g2_cp2

0x3fae,	// (0x000126e1) list_double2_pane_t1_cp2_ParamLimits

0x3fae,	// (0x000126e1) list_double2_pane_t1_cp2

0x3fc4,	// (0x000126f7) list_double2_pane_t2_cp2_ParamLimits

0x3fc4,	// (0x000126f7) list_double2_pane_t2_cp2

0x3fd6,	// (0x00012709) list_double_pane_g1_cp2_ParamLimits

0x3fd6,	// (0x00012709) list_double_pane_g1_cp2

0x3fe2,	// (0x00012715) list_double_pane_g2_cp2

0x3fea,	// (0x0001271d) list_double_pane_t1_cp2_ParamLimits

0x3fea,	// (0x0001271d) list_double_pane_t1_cp2

0x4000,	// (0x00012733) list_double_pane_t2_cp2_ParamLimits

0x4000,	// (0x00012733) list_double_pane_t2_cp2

0x402a,	// (0x0001275d) list_single_pane_cp2_g3

0x403a,	// (0x0001276d) list_single_pane_g1_cp2_ParamLimits

0x403a,	// (0x0001276d) list_single_pane_g1_cp2

0x4046,	// (0x00012779) list_single_pane_g2_cp2

0x404e,	// (0x00012781) list_single_pane_t1_cp2_ParamLimits

0x404e,	// (0x00012781) list_single_pane_t1_cp2

0x4066,	// (0x00012799) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4066,	// (0x00012799) list_single_large_graphic_pane_g1_cp2

0x4074,	// (0x000127a7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4074,	// (0x000127a7) list_single_large_graphic_pane_g2_cp2

0x4080,	// (0x000127b3) list_single_large_graphic_pane_g3_cp2

0x4088,	// (0x000127bb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4088,	// (0x000127bb) list_single_large_graphic_pane_g4_cp1

0x40a2,	// (0x000127d5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x40a2,	// (0x000127d5) list_single_large_graphic_pane_t1_cp2

0x5c61,	// (0x00014394) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5c61,	// (0x00014394) list_single_graphic_heading_pane_g1_cp2

0x5c2e,	// (0x00014361) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5c2e,	// (0x00014361) list_single_graphic_heading_pane_g4_cp2

0x4046,	// (0x00012779) list_single_graphic_heading_pane_g5_cp2

0x5c6d,	// (0x000143a0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5c6d,	// (0x000143a0) list_single_graphic_heading_pane_t1_cp2

0x5c83,	// (0x000143b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5c83,	// (0x000143b6) list_single_graphic_heading_pane_t2_cp2

0x5c22,	// (0x00014355) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c22,	// (0x00014355) list_single_2graphic_pane_g1_cp2

0x5c2e,	// (0x00014361) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5c2e,	// (0x00014361) list_single_2graphic_pane_g2_cp2

0x4046,	// (0x00012779) list_single_2graphic_pane_g3_cp2

0x5c3f,	// (0x00014372) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c3f,	// (0x00014372) list_single_2graphic_pane_g4_cp2

0x5c4b,	// (0x0001437e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c4b,	// (0x0001437e) list_single_2graphic_pane_t1_cp2

0x23fa,	// (0x00010b2d) list_highlight_pane_g10_cp1

0x580a,	// (0x00013f3d) list_highlight_pane_g1_cp1

0x5812,	// (0x00013f45) list_highlight_pane_g2_cp1

0x581a,	// (0x00013f4d) list_highlight_pane_g3_cp1

0x5822,	// (0x00013f55) list_highlight_pane_g4_cp1

0x582a,	// (0x00013f5d) list_highlight_pane_g5_cp1

0x5832,	// (0x00013f65) list_highlight_pane_g6_cp1

0x583a,	// (0x00013f6d) list_highlight_pane_g7_cp1

0x5842,	// (0x00013f75) list_highlight_pane_g8_cp1

0x584a,	// (0x00013f7d) list_highlight_pane_g9_cp1

0x5722,	// (0x00013e55) form_field_slider_pane_t3

0x5730,	// (0x00013e63) form_field_slider_pane_t4

0x573e,	// (0x00013e71) slider_form_pane_ParamLimits

0x573e,	// (0x00013e71) slider_form_pane

0x2404,	// (0x00010b37) control_abbreviations

0x2404,	// (0x00010b37) control_conventions

0x2404,	// (0x00010b37) control_definitions

0x2404,	// (0x00010b37) format_table_attribute

0x5f1e,	// (0x00014651) bg_popup_preview_window_pane_g9

0x2404,	// (0x00010b37) format_table_data2

0x2404,	// (0x00010b37) format_table_data3

0x2404,	// (0x00010b37) format_table_data_example

0x0008,

0x2404,	// (0x00010b37) intro_purpose

0xf917,	// (0x0001e04a) bg_popup_preview_window_pane_g

0x2404,	// (0x00010b37) texts_category

0x2404,	// (0x00010b37) texts_graphics

0x40b8,	// (0x000127eb) text_digital

0x40c7,	// (0x000127fa) text_primary

0x40d6,	// (0x00012809) text_primary_small

0x40e5,	// (0x00012818) text_secondary

0x40f4,	// (0x00012827) text_title

0x675f,	// (0x00014e92) bg_passive_tab_pane_g1_cp3_srt

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp3_srt

0x6756,	// (0x00014e89) bg_passive_tab_pane_g3_cp3_srt

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp3_srt_ParamLimits

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp3_srt

0x6768,	// (0x00014e9b) tabs_4_active_pane_srt_g1

0x6770,	// (0x00014ea3) tabs_4_active_pane_srt_t1_ParamLimits

0x6770,	// (0x00014ea3) tabs_4_active_pane_srt_t1

0x675f,	// (0x00014e92) bg_active_tab_pane_g1_cp3_copy1

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp3_copy1

0x6756,	// (0x00014e89) bg_active_tab_pane_g3_cp3_copy1

0x24e4,	// (0x00010c17) tabs_2_long_active_pane_srt_ParamLimits

0x24e4,	// (0x00010c17) tabs_2_long_active_pane_srt

0x24e4,	// (0x00010c17) tabs_2_long_passive_pane_srt_ParamLimits

0x24e4,	// (0x00010c17) tabs_2_long_passive_pane_srt

0x3623,	// (0x00011d56) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3623,	// (0x00011d56) bg_passive_tab_pane_cp4_srt

0x6394,	// (0x00014ac7) bg_passive_tab_pane_g1_cp4_srt

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp4_srt

0x638b,	// (0x00014abe) bg_passive_tab_pane_g3_cp4_srt

0x3602,	// (0x00011d35) bg_active_tab_pane_cp4_srt_ParamLimits

0x3602,	// (0x00011d35) bg_active_tab_pane_cp4_srt

0x639d,	// (0x00014ad0) tabs_2_long_active_pane_srt_t1_ParamLimits

0x639d,	// (0x00014ad0) tabs_2_long_active_pane_srt_t1

0x6394,	// (0x00014ac7) bg_active_tab_pane_g1_cp4_srt

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp4_srt

0x638b,	// (0x00014abe) bg_active_tab_pane_g3_cp4_srt

0x2779,	// (0x00010eac) tabs_3_long_active_pane_srt_ParamLimits

0x2779,	// (0x00010eac) tabs_3_long_active_pane_srt

0x2779,	// (0x00010eac) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2779,	// (0x00010eac) tabs_3_long_passive_pane_cp_srt

0x2779,	// (0x00010eac) tabs_3_long_passive_pane_srt_ParamLimits

0x2779,	// (0x00010eac) tabs_3_long_passive_pane_srt

0x3623,	// (0x00011d56) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3623,	// (0x00011d56) bg_passive_tab_pane_cp5_srt

0x3dde,	// (0x00012511) bg_passive_tab_pane_g1_cp5_srt

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp5_srt

0x3dd5,	// (0x00012508) bg_passive_tab_pane_g3_cp5_srt

0x3602,	// (0x00011d35) bg_active_tab_pane_cp5_srt_ParamLimits

0x3602,	// (0x00011d35) bg_active_tab_pane_cp5_srt

0x6379,	// (0x00014aac) tabs_3_long_active_pane_srt_t1_ParamLimits

0x6379,	// (0x00014aac) tabs_3_long_active_pane_srt_t1

0x3dde,	// (0x00012511) bg_active_tab_pane_g1_cp5_srt

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp5_srt

0x3dd5,	// (0x00012508) bg_active_tab_pane_g3_cp5_srt

0x636b,	// (0x00014a9e) navi_text_pane_srt_t1

0x6363,	// (0x00014a96) navi_icon_pane_srt_g1

0x42c3,	// (0x000129f6) midp_editing_number_pane_srt

0x4103,	// (0x00012836) midp_ticker_pane_srt

0x42cb,	// (0x000129fe) midp_ticker_pane_srt_g1

0x42d3,	// (0x00012a06) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001dee0) midp_ticker_pane_srt_g

0x42db,	// (0x00012a0e) midp_ticker_pane_srt_t1

0x6354,	// (0x00014a87) midp_editing_number_pane_t1_copy1

0x410b,	// (0x0001283e) listscroll_midp_pane

0x410b,	// (0x0001283e) midp_form_pane

0x417b,	// (0x000128ae) midp_info_popup_window_ParamLimits

0x417b,	// (0x000128ae) midp_info_popup_window

0x34f2,	// (0x00011c25) bg_popup_sub_pane_cp50_ParamLimits

0x34f2,	// (0x00011c25) bg_popup_sub_pane_cp50

0x5470,	// (0x00013ba3) listscroll_midp_info_pane_ParamLimits

0x5470,	// (0x00013ba3) listscroll_midp_info_pane

0x5458,	// (0x00013b8b) listscroll_form_midp_pane_ParamLimits

0x5458,	// (0x00013b8b) listscroll_form_midp_pane

0x5464,	// (0x00013b97) scroll_bar_cp050

0x5438,	// (0x00013b6b) list_midp_pane

0x7307,	// (0x00015a3a) signal_pane_g2_cp

0x5372,	// (0x00013aa5) listscroll_midp_info_pane_t1_ParamLimits

0x5372,	// (0x00013aa5) listscroll_midp_info_pane_t1

0x538a,	// (0x00013abd) listscroll_midp_info_pane_t2_ParamLimits

0x538a,	// (0x00013abd) listscroll_midp_info_pane_t2

0x53c8,	// (0x00013afb) listscroll_midp_info_pane_t3_ParamLimits

0x53c8,	// (0x00013afb) listscroll_midp_info_pane_t3

0x5402,	// (0x00013b35) listscroll_midp_info_pane_t4_ParamLimits

0x5402,	// (0x00013b35) listscroll_midp_info_pane_t4

0x0003,

0xf852,	// (0x0001df85) listscroll_midp_info_pane_t_ParamLimits

0xf852,	// (0x0001df85) listscroll_midp_info_pane_t

0x35b0,	// (0x00011ce3) scroll_pane_cp21

0x5316,	// (0x00013a49) form_midp_field_choice_group_pane

0x531f,	// (0x00013a52) form_midp_field_text_pane

0x5358,	// (0x00013a8b) form_midp_field_time_pane

0x5360,	// (0x00013a93) form_midp_gauge_slider_pane

0x5369,	// (0x00013a9c) form_midp_gauge_wait_pane

0x2404,	// (0x00010b37) form_midp_image_pane

0xcbcd,	// (0x0001b300) list_single_midp_pane_ParamLimits

0xcbcd,	// (0x0001b300) list_single_midp_pane

0x528a,	// (0x000139bd) form_midp_field_text_pane_t1

0x5055,	// (0x00013788) input_focus_pane_cp050

0x52c9,	// (0x000139fc) list_midp_form_text_pane

0x5259,	// (0x0001398c) form_midp_field_choice_group_pane_t1

0x5267,	// (0x0001399a) input_focus_pane_cp051

0x527b,	// (0x000139ae) list_midp_choice_pane

0x2404,	// (0x00010b37) status_idle_pane

0x523d,	// (0x00013970) form_midp_field_time_pane_t1

0x23fa,	// (0x00010b2d) wait_anim_pane_g2_copy1

0x524b,	// (0x0001397e) form_midp_field_time_pane_t2

0x0001,

0x422b,	// (0x0001295e) aid_navinavi_width_2_pane

0xf84d,	// (0x0001df80) form_midp_field_time_pane_t

0x2404,	// (0x00010b37) input_focus_pane_cp052

0x2404,	// (0x00010b37) bg_input_focus_pane_cp040

0x51fd,	// (0x00013930) form_midp_gauge_slider_pane_t1

0x520b,	// (0x0001393e) form_midp_gauge_slider_pane_t2

0x5219,	// (0x0001394c) form_midp_gauge_slider_pane_t3

0x5227,	// (0x0001395a) form_midp_gauge_slider_pane_t4

0x0003,

0xf844,	// (0x0001df77) form_midp_gauge_slider_pane_t

0x5235,	// (0x00013968) form_midp_slider_pane

0x24e4,	// (0x00010c17) bg_input_focus_pane_cp041_ParamLimits

0x24e4,	// (0x00010c17) bg_input_focus_pane_cp041

0x51ca,	// (0x000138fd) form_midp_gauge_wait_pane_t1_ParamLimits

0x51ca,	// (0x000138fd) form_midp_gauge_wait_pane_t1

0x51dc,	// (0x0001390f) form_midp_gauge_wait_pane_t2_ParamLimits

0x51dc,	// (0x0001390f) form_midp_gauge_wait_pane_t2

0x0001,

0xf83f,	// (0x0001df72) form_midp_gauge_wait_pane_t_ParamLimits

0xf83f,	// (0x0001df72) form_midp_gauge_wait_pane_t

0x51ee,	// (0x00013921) form_midp_wait_pane_ParamLimits

0x51ee,	// (0x00013921) form_midp_wait_pane

0x5194,	// (0x000138c7) form_midp_image_pane_g1

0x519d,	// (0x000138d0) form_midp_image_pane_t1

0x51ac,	// (0x000138df) form_midp_image_pane_t2

0x51bb,	// (0x000138ee) form_midp_image_pane_t3

0x0002,

0xf838,	// (0x0001df6b) form_midp_image_pane_t

0x517c,	// (0x000138af) list_single_midp_pane_g1

0xcbbe,	// (0x0001b2f1) list_single_midp_pane_t1

0x514c,	// (0x0001387f) list_midp_form_item_pane_ParamLimits

0x514c,	// (0x0001387f) list_midp_form_item_pane

0x41d3,	// (0x00012906) list_midp_form_item_pane_t1

0x41e2,	// (0x00012915) midp_ticker_pane_g1

0x41ee,	// (0x00012921) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001dec6) midp_ticker_pane_g

0x41fa,	// (0x0001292d) midp_ticker_pane_t1

0x65ca,	// (0x00014cfd) midp_editing_number_pane_t1

0x65a8,	// (0x00014cdb) midp_editing_number_pane

0x65b7,	// (0x00014cea) midp_ticker_pane

0x631c,	// (0x00014a4f) ai_message_heading_pane

0x2404,	// (0x00010b37) bg_popup_window_pane_cp14

0x6324,	// (0x00014a57) listscroll_ai_message_pane

0x62a6,	// (0x000149d9) ai_message_heading_pane_g1_ParamLimits

0x62a6,	// (0x000149d9) ai_message_heading_pane_g1

0x62b2,	// (0x000149e5) ai_message_heading_pane_g2_ParamLimits

0x62b2,	// (0x000149e5) ai_message_heading_pane_g2

0x62be,	// (0x000149f1) ai_message_heading_pane_g3_ParamLimits

0x62be,	// (0x000149f1) ai_message_heading_pane_g3

0x62ca,	// (0x000149fd) ai_message_heading_pane_g4_ParamLimits

0x62ca,	// (0x000149fd) ai_message_heading_pane_g4

0x0003,

0xf979,	// (0x0001e0ac) ai_message_heading_pane_g_ParamLimits

0xf979,	// (0x0001e0ac) ai_message_heading_pane_g

0x62d6,	// (0x00014a09) ai_message_heading_pane_t1_ParamLimits

0x62d6,	// (0x00014a09) ai_message_heading_pane_t1

0x62f0,	// (0x00014a23) ai_message_heading_pane_t2_ParamLimits

0x62f0,	// (0x00014a23) ai_message_heading_pane_t2

0x0001,

0xf982,	// (0x0001e0b5) ai_message_heading_pane_t_ParamLimits

0xf982,	// (0x0001e0b5) ai_message_heading_pane_t

0x6302,	// (0x00014a35) bg_popup_heading_pane_cp1_ParamLimits

0x6302,	// (0x00014a35) bg_popup_heading_pane_cp1

0x6294,	// (0x000149c7) list_ai_message_pane_ParamLimits

0x6294,	// (0x000149c7) list_ai_message_pane

0x35b0,	// (0x00011ce3) scroll_pane_cp10

0x6230,	// (0x00014963) list_ai_message_pane_g1

0x6238,	// (0x0001496b) list_ai_message_pane_g2

0x0001,

0xf956,	// (0x0001e089) list_ai_message_pane_g

0x6240,	// (0x00014973) list_ai_message_pane_t1_ParamLimits

0x6240,	// (0x00014973) list_ai_message_pane_t1

0x6255,	// (0x00014988) list_ai_message_pane_t2_ParamLimits

0x6255,	// (0x00014988) list_ai_message_pane_t2

0x626a,	// (0x0001499d) list_ai_message_pane_t3_ParamLimits

0x626a,	// (0x0001499d) list_ai_message_pane_t3

0x627f,	// (0x000149b2) list_ai_message_pane_t4_ParamLimits

0x627f,	// (0x000149b2) list_ai_message_pane_t4

0x0003,

0xf95b,	// (0x0001e08e) list_ai_message_pane_t_ParamLimits

0xf95b,	// (0x0001e08e) list_ai_message_pane_t

0x621a,	// (0x0001494d) cell_ai_soft_ind_pane_ParamLimits

0x621a,	// (0x0001494d) cell_ai_soft_ind_pane

0x420c,	// (0x0001293f) cell_ai_soft_ind_pane_g1_ParamLimits

0x420c,	// (0x0001293f) cell_ai_soft_ind_pane_g1

0x2404,	// (0x00010b37) grid_highlight_cp1

0x4219,	// (0x0001294c) text_secondary_cp56_ParamLimits

0x4219,	// (0x0001294c) text_secondary_cp56

0x61ef,	// (0x00014922) example_general_pane_ParamLimits

0x61ef,	// (0x00014922) example_general_pane

0x61fb,	// (0x0001492e) example_parent_pane_g1_ParamLimits

0x61fb,	// (0x0001492e) example_parent_pane_g1

0x6207,	// (0x0001493a) example_parent_pane_t1_ParamLimits

0x6207,	// (0x0001493a) example_parent_pane_t1

0x4816,	// (0x00012f49) popup_preview_text_window_ParamLimits

0x4816,	// (0x00012f49) popup_preview_text_window

0x4032,	// (0x00012765) list_single_pane_cp2_g4

0x2823,	// (0x00010f56) bg_popup_preview_window_pane_ParamLimits

0x2823,	// (0x00010f56) bg_popup_preview_window_pane

0x5f26,	// (0x00014659) popup_preview_text_window_t1_ParamLimits

0x5f26,	// (0x00014659) popup_preview_text_window_t1

0x5f44,	// (0x00014677) popup_preview_text_window_t2_ParamLimits

0x5f44,	// (0x00014677) popup_preview_text_window_t2

0x5f8d,	// (0x000146c0) popup_preview_text_window_t3_ParamLimits

0x5f8d,	// (0x000146c0) popup_preview_text_window_t3

0x5fd2,	// (0x00014705) popup_preview_text_window_t4_ParamLimits

0x5fd2,	// (0x00014705) popup_preview_text_window_t4

0x0004,

0xf92a,	// (0x0001e05d) popup_preview_text_window_t_ParamLimits

0xf92a,	// (0x0001e05d) popup_preview_text_window_t

0x6050,	// (0x00014783) scroll_pane_cp11

0x4f3b,	// (0x0001366e) bg_popup_preview_window_pane_g1

0x5ee6,	// (0x00014619) bg_popup_preview_window_pane_g2

0x5eee,	// (0x00014621) bg_popup_preview_window_pane_g3

0x5ef6,	// (0x00014629) bg_popup_preview_window_pane_g4

0x5efe,	// (0x00014631) bg_popup_preview_window_pane_g5

0x5f06,	// (0x00014639) bg_popup_preview_window_pane_g6

0x5f0e,	// (0x00014641) bg_popup_preview_window_pane_g7

0x5f16,	// (0x00014649) bg_popup_preview_window_pane_g8

0xd347,	// (0x0001ba7a) aid_popup_width_pane

0x47f4,	// (0x00012f27) popup_midp_note_alarm_window_ParamLimits

0x47f4,	// (0x00012f27) popup_midp_note_alarm_window

0x328d,	// (0x000119c0) data_form_pane_ParamLimits

0xc8dd,	// (0x0001b010) form_field_data_pane_g1

0xc8e7,	// (0x0001b01a) form_field_data_pane_t1_ParamLimits

0x32bd,	// (0x000119f0) input_focus_pane_ParamLimits

0x32cb,	// (0x000119fe) data_form_wide_pane_ParamLimits

0xc901,	// (0x0001b034) form_field_data_wide_pane_g1

0xc90d,	// (0x0001b040) form_field_data_wide_pane_t1_ParamLimits

0x2ac2,	// (0x000111f5) input_focus_pane_cp6_ParamLimits

0x355b,	// (0x00011c8e) input_popup_find_pane_g1_ParamLimits

0x355b,	// (0x00011c8e) input_popup_find_pane_g1

0xd899,	// (0x0001bfcc) aid_navi_side_left_pane

0xd8ae,	// (0x0001bfe1) aid_navi_side_right_pane

0x5905,	// (0x00014038) bg_popup_window_pane_cp30_ParamLimits

0x5905,	// (0x00014038) bg_popup_window_pane_cp30

0x597f,	// (0x000140b2) popup_midp_note_alarm_window_g1_ParamLimits

0x597f,	// (0x000140b2) popup_midp_note_alarm_window_g1

0x59af,	// (0x000140e2) popup_midp_note_alarm_window_t1_ParamLimits

0x59af,	// (0x000140e2) popup_midp_note_alarm_window_t1

0x5a50,	// (0x00014183) popup_midp_note_alarm_window_t2_ParamLimits

0x5a50,	// (0x00014183) popup_midp_note_alarm_window_t2

0x5afe,	// (0x00014231) popup_midp_note_alarm_window_t3_ParamLimits

0x5afe,	// (0x00014231) popup_midp_note_alarm_window_t3

0x5b26,	// (0x00014259) popup_midp_note_alarm_window_t4_ParamLimits

0x5b26,	// (0x00014259) popup_midp_note_alarm_window_t4

0x5b46,	// (0x00014279) popup_midp_note_alarm_window_t5_ParamLimits

0x5b46,	// (0x00014279) popup_midp_note_alarm_window_t5

0x000a,

0xf8c7,	// (0x0001dffa) popup_midp_note_alarm_window_t_ParamLimits

0xf8c7,	// (0x0001dffa) popup_midp_note_alarm_window_t

0x5bf2,	// (0x00014325) wait_bar_pane_cp1_ParamLimits

0x5bf2,	// (0x00014325) wait_bar_pane_cp1

0x2404,	// (0x00010b37) wait_anim_pane_copy1

0x2404,	// (0x00010b37) wait_border_pane_copy1

0x55e3,	// (0x00013d16) wait_border_pane_g1_copy1

0xc927,	// (0x0001b05a) form_field_popup_pane_g1

0xc92f,	// (0x0001b062) form_field_popup_pane_t1_ParamLimits

0x32bd,	// (0x000119f0) input_focus_pane_cp7_ParamLimits

0x333f,	// (0x00011a72) list_form_pane_ParamLimits

0xc949,	// (0x0001b07c) form_field_popup_wide_pane_g1

0xc951,	// (0x0001b084) form_field_popup_wide_pane_t1_ParamLimits

0x32bd,	// (0x000119f0) input_focus_pane_cp8_ParamLimits

0x3368,	// (0x00011a9b) list_form_wide_pane_ParamLimits

0x67e0,	// (0x00014f13) aid_size_cell_graphic_pane

0xc9d6,	// (0x0001b109) data_form_pane_t1_ParamLimits

0xcc1c,	// (0x0001b34f) data_form_wide_pane_t1_ParamLimits

0x4aef,	// (0x00013222) bg_status_flat_pane

0x2444,	// (0x00010b77) title_pane_t1_ParamLimits

0x24ac,	// (0x00010bdf) title_pane_t2_ParamLimits

0x24d2,	// (0x00010c05) title_pane_t3_ParamLimits

0xf59b,	// (0x0001dcce) title_pane_t_ParamLimits

0x3a2b,	// (0x0001215e) level_1_signal_ParamLimits

0x3a38,	// (0x0001216b) level_2_signal_ParamLimits

0x3a45,	// (0x00012178) level_3_signal_ParamLimits

0x3a52,	// (0x00012185) level_4_signal_ParamLimits

0x3a5f,	// (0x00012192) level_5_signal_ParamLimits

0x3a6c,	// (0x0001219f) level_6_signal_ParamLimits

0x3a79,	// (0x000121ac) level_7_signal_ParamLimits

0x3a2b,	// (0x0001215e) level_1_battery_ParamLimits

0x3a38,	// (0x0001216b) level_2_battery_ParamLimits

0x3a45,	// (0x00012178) level_3_battery_ParamLimits

0x3a52,	// (0x00012185) level_4_battery_ParamLimits

0x3a5f,	// (0x00012192) level_5_battery_ParamLimits

0x3a6c,	// (0x0001219f) level_6_battery_ParamLimits

0x3a79,	// (0x000121ac) level_7_battery_ParamLimits

0x580a,	// (0x00013f3d) bg_status_flat_pane_g1

0x5812,	// (0x00013f45) bg_status_flat_pane_g2

0x581a,	// (0x00013f4d) bg_status_flat_pane_g3

0x5822,	// (0x00013f55) bg_status_flat_pane_g4

0x582a,	// (0x00013f5d) bg_status_flat_pane_g5

0x5832,	// (0x00013f65) bg_status_flat_pane_g6

0x583a,	// (0x00013f6d) bg_status_flat_pane_g7

0x24fa,	// (0x00010c2d) tabs_3_active_pane_t1_ParamLimits

0x24fa,	// (0x00010c2d) tabs_3_passive_pane_t1_ParamLimits

0x2514,	// (0x00010c47) tabs_4_active_pane_t1_ParamLimits

0x2514,	// (0x00010c47) tabs_4_1_passive_pane_t1_ParamLimits

0x35f0,	// (0x00011d23) tabs_2_active_pane_t1_ParamLimits

0x35f0,	// (0x00011d23) tabs_2_passive_pane_t1_ParamLimits

0x3602,	// (0x00011d35) bg_active_tab_pane_cp4_ParamLimits

0x3610,	// (0x00011d43) tabs_2_long_active_pane_t1_ParamLimits

0x3623,	// (0x00011d56) bg_passive_tab_pane_cp4_ParamLimits

0xdde7,	// (0x0001c51a) list_single_midp_graphic_pane_t1_ParamLimits

0x3602,	// (0x00011d35) bg_active_tab_pane_cp5_ParamLimits

0x362f,	// (0x00011d62) tabs_3_long_active_pane_t1_ParamLimits

0x3623,	// (0x00011d56) bg_passive_tab_pane_cp5_ParamLimits

0xdde7,	// (0x0001c51a) list_single_midp_graphic_pane_t1

0x4aef,	// (0x00013222) bg_status_flat_pane_ParamLimits

0x4bb2,	// (0x000132e5) indicator_pane_cp2_ParamLimits

0x4bb2,	// (0x000132e5) indicator_pane_cp2

0x4cd6,	// (0x00013409) navi_pane_srt_ParamLimits

0x4cd6,	// (0x00013409) navi_pane_srt

0x4cfa,	// (0x0001342d) popup_clock_digital_analogue_window_cp1

0x25db,	// (0x00010d0e) indicator_pane_t1

0x4103,	// (0x00012836) copy_highlight_pane

0x4103,	// (0x00012836) cursor_graphics_pane

0x4103,	// (0x00012836) graphic_within_text_pane

0x4103,	// (0x00012836) link_highlight_pane

0x6013,	// (0x00014746) popup_preview_text_window_t5_ParamLimits

0x6013,	// (0x00014746) popup_preview_text_window_t5

0x4233,	// (0x00012966) cursor_digital_pane

0x4233,	// (0x00012966) cursor_primary_pane

0x4244,	// (0x00012977) cursor_primary_small_pane

0x424c,	// (0x0001297f) cursor_secondary_pane

0x4254,	// (0x00012987) cursor_title_pane

0x4233,	// (0x00012966) link_highlight_digital_pane

0x423b,	// (0x0001296e) link_highlight_primary_pane

0x4244,	// (0x00012977) link_highlight_primary_small_pane

0x424c,	// (0x0001297f) link_highlight_secondary_pane

0x4254,	// (0x00012987) link_highlight_title_pane

0x4233,	// (0x00012966) copy_highlight_digital_pane

0x4233,	// (0x00012966) copy_highlight_primary_pane

0x4244,	// (0x00012977) copy_highlight_primary_small_pane

0x424c,	// (0x0001297f) copy_highlight_secondary_pane

0x4254,	// (0x00012987) copy_highlight_title_pane

0x424c,	// (0x0001297f) graphic_text_digital_pane

0x58a8,	// (0x00013fdb) graphic_text_primary_pane

0x58b1,	// (0x00013fe4) graphic_text_primary_small_pane

0x4244,	// (0x00012977) graphic_text_secondary_pane

0x4233,	// (0x00012966) graphic_text_title_pane

0x425c,	// (0x0001298f) cursor_primary_pane_g1

0x589a,	// (0x00013fcd) cursor_text_primary_t1

0x5882,	// (0x00013fb5) cursor_primary_small_pane_g1

0x588c,	// (0x00013fbf) cursor_text_primary_small_t1

0x586a,	// (0x00013f9d) cursor_primary_small_pane_g1_copy1

0x5874,	// (0x00013fa7) cursor_text_primary_small_t1_copy1

0x5852,	// (0x00013f85) cursor_text_title_t1

0x5860,	// (0x00013f93) cursor_title_pane_g1

0x425c,	// (0x0001298f) cursor_digital_pane_g1

0x4266,	// (0x00012999) cursor_text_digital_t1

0x57f3,	// (0x00013f26) link_highlight_primary_pane_g1

0x57fb,	// (0x00013f2e) link_highlight_primary_pane_t1

0x4274,	// (0x000129a7) link_highlight_primary_small_pane_g1

0x427c,	// (0x000129af) link_highlight_primary_small_pane_t1

0x4274,	// (0x000129a7) link_highlight_secondary_pane_g1

0x428b,	// (0x000129be) link_highlight_secondary_pane_t1

0x5767,	// (0x00013e9a) link_highlight_title_pane_g1

0x576f,	// (0x00013ea2) link_highlight_title_pane_t1

0x5750,	// (0x00013e83) link_highlight_digital_pane_g1

0x5758,	// (0x00013e8b) link_highlight_digital_pane_t1

0x5628,	// (0x00013d5b) copy_highlight_primary_pane_g1

0x5630,	// (0x00013d63) copy_highlight_primary_pane_t1

0x5602,	// (0x00013d35) copy_highlight_primary_small_pane_g1

0x5619,	// (0x00013d4c) copy_highlight_primary_small_pane_t1

0x429a,	// (0x000129cd) copy_highlight_secondary_pane_g1

0x42a2,	// (0x000129d5) copy_highlight_secondary_pane_t1

0x5602,	// (0x00013d35) copy_highlight_title_pane_g1

0x560a,	// (0x00013d3d) copy_highlight_title_pane_t1

0x5628,	// (0x00013d5b) copy_highlight_digital_pane_g1

0x69ae,	// (0x000150e1) copy_highlight_digital_pane_t1

0x6902,	// (0x00015035) graphic_text_primary_pane_g1

0x6992,	// (0x000150c5) graphic_text_primary_pane_t1

0x69a0,	// (0x000150d3) graphic_text_primary_pane_t2

0x0001,

0xf9f6,	// (0x0001e129) graphic_text_primary_pane_t

0x696e,	// (0x000150a1) graphic_text_primary_small_pane_g1

0x6976,	// (0x000150a9) graphic_text_primary_small_pane_t1

0x6984,	// (0x000150b7) graphic_text_primary_small_pane_t2

0x0001,

0xf9f1,	// (0x0001e124) graphic_text_primary_small_pane_t

0x694a,	// (0x0001507d) graphic_text_secondary_pane_g1

0x6952,	// (0x00015085) graphic_text_secondary_pane_t1

0x6960,	// (0x00015093) graphic_text_secondary_pane_t2

0x0001,

0xf9ec,	// (0x0001e11f) graphic_text_secondary_pane_t

0x6926,	// (0x00015059) graphic_text_title_pane_g1

0x692e,	// (0x00015061) graphic_text_title_pane_t1

0x693c,	// (0x0001506f) graphic_text_title_pane_t2

0x0001,

0xf9e7,	// (0x0001e11a) graphic_text_title_pane_t

0x6902,	// (0x00015035) graphic_text_digital_pane_g1

0x690a,	// (0x0001503d) graphic_text_digital_pane_t1

0x6918,	// (0x0001504b) graphic_text_digital_pane_t2

0x0001,

0xf9e2,	// (0x0001e115) graphic_text_digital_pane_t

0x24e4,	// (0x00010c17) navi_icon_pane_srt_ParamLimits

0x24e4,	// (0x00010c17) navi_icon_pane_srt

0x2404,	// (0x00010b37) navi_midp_pane_srt

0x2404,	// (0x00010b37) navi_navi_pane_srt

0x24e4,	// (0x00010c17) navi_text_pane_srt_ParamLimits

0x24e4,	// (0x00010c17) navi_text_pane_srt

0x68cd,	// (0x00015000) navi_navi_icon_text_pane_srt

0x68e7,	// (0x0001501a) navi_navi_pane_srt_g1_ParamLimits

0x68e7,	// (0x0001501a) navi_navi_pane_srt_g1

0x68d5,	// (0x00015008) navi_navi_pane_srt_g2_ParamLimits

0x68d5,	// (0x00015008) navi_navi_pane_srt_g2

0x0001,

0xf9dd,	// (0x0001e110) navi_navi_pane_srt_g_ParamLimits

0xf9dd,	// (0x0001e110) navi_navi_pane_srt_g

0x68f9,	// (0x0001502c) navi_navi_tabs_pane_srt

0x68cd,	// (0x00015000) navi_navi_text_pane_srt

0x68cd,	// (0x00015000) navi_navi_volume_pane_srt

0x68be,	// (0x00014ff1) navi_navi_text_pane_srt_t1

0xe167,	// (0x0001c89a) navi_navi_volume_pane_srt_g1

0xe16f,	// (0x0001c8a2) volume_small_pane_srt_ParamLimits

0xe16f,	// (0x0001c8a2) volume_small_pane_srt

0xdb79,	// (0x0001c2ac) volume_small_pane_srt_g1_ParamLimits

0xdb79,	// (0x0001c2ac) volume_small_pane_srt_g1

0xdb89,	// (0x0001c2bc) volume_small_pane_srt_g2_ParamLimits

0xdb89,	// (0x0001c2bc) volume_small_pane_srt_g2

0xdb9a,	// (0x0001c2cd) volume_small_pane_srt_g3_ParamLimits

0xdb9a,	// (0x0001c2cd) volume_small_pane_srt_g3

0xdbab,	// (0x0001c2de) volume_small_pane_srt_g4_ParamLimits

0xdbab,	// (0x0001c2de) volume_small_pane_srt_g4

0xdbbc,	// (0x0001c2ef) volume_small_pane_srt_g5_ParamLimits

0xdbbc,	// (0x0001c2ef) volume_small_pane_srt_g5

0xdbcd,	// (0x0001c300) volume_small_pane_srt_g6_ParamLimits

0xdbcd,	// (0x0001c300) volume_small_pane_srt_g6

0xdbde,	// (0x0001c311) volume_small_pane_srt_g7_ParamLimits

0xdbde,	// (0x0001c311) volume_small_pane_srt_g7

0xdbef,	// (0x0001c322) volume_small_pane_srt_g8_ParamLimits

0xdbef,	// (0x0001c322) volume_small_pane_srt_g8

0xdc00,	// (0x0001c333) volume_small_pane_srt_g9_ParamLimits

0xdc00,	// (0x0001c333) volume_small_pane_srt_g9

0xdc11,	// (0x0001c344) volume_small_pane_srt_g10_ParamLimits

0xdc11,	// (0x0001c344) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001decb) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001decb) volume_small_pane_srt_g

0x28cc,	// (0x00010fff) query_popup_data_pane_cp2

0x68a4,	// (0x00014fd7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x68a4,	// (0x00014fd7) navi_navi_icon_text_pane_srt_t1

0x58a8,	// (0x00013fdb) navi_tabs_2_long_pane_srt

0x58a8,	// (0x00013fdb) navi_tabs_2_pane_srt

0x58a8,	// (0x00013fdb) navi_tabs_3_long_pane_srt

0x58a8,	// (0x00013fdb) navi_tabs_3_pane_srt

0x58a8,	// (0x00013fdb) navi_tabs_4_pane_srt

0xe147,	// (0x0001c87a) tabs_2_active_pane_srt_ParamLimits

0xe147,	// (0x0001c87a) tabs_2_active_pane_srt

0xe157,	// (0x0001c88a) tabs_2_passive_pane_srt_ParamLimits

0xe157,	// (0x0001c88a) tabs_2_passive_pane_srt

0x4489,	// (0x00012bbc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4489,	// (0x00012bbc) bg_passive_tab_pane_cp1_srt

0x6879,	// (0x00014fac) bg_passive_tab_pane_g1_cp1_srt

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp1_srt

0x6870,	// (0x00014fa3) bg_passive_tab_pane_g3_cp1_srt

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp1_srt_ParamLimits

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp1_srt

0x6882,	// (0x00014fb5) tabs_2_active_pane_srt_g1

0x688a,	// (0x00014fbd) tabs_2_active_pane_srt_t1_ParamLimits

0x688a,	// (0x00014fbd) tabs_2_active_pane_srt_t1

0x6879,	// (0x00014fac) bg_active_tab_pane_g1_cp1_srt

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp1_srt

0x6870,	// (0x00014fa3) bg_active_tab_pane_g3_cp1_srt

0xe114,	// (0x0001c847) tabs_3_active_pane_srt_ParamLimits

0xe114,	// (0x0001c847) tabs_3_active_pane_srt

0xe125,	// (0x0001c858) tabs_3_passive_pane_cp_srt_ParamLimits

0xe125,	// (0x0001c858) tabs_3_passive_pane_cp_srt

0xe136,	// (0x0001c869) tabs_3_passive_pane_srt_ParamLimits

0xe136,	// (0x0001c869) tabs_3_passive_pane_srt

0x4489,	// (0x00012bbc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4489,	// (0x00012bbc) bg_passive_tab_pane_cp2_srt

0x42ba,	// (0x000129ed) bg_passive_tab_pane_g1_cp2_srt

0x3d4b,	// (0x0001247e) bg_passive_tab_pane_g2_cp2_srt

0x42b1,	// (0x000129e4) bg_passive_tab_pane_g3_cp2_srt

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp2_srt_ParamLimits

0x24e4,	// (0x00010c17) bg_active_tab_pane_cp2_srt

0x6856,	// (0x00014f89) tabs_3_active_pane_srt_g1

0x685e,	// (0x00014f91) tabs_3_active_pane_srt_t1_ParamLimits

0x685e,	// (0x00014f91) tabs_3_active_pane_srt_t1

0x42ba,	// (0x000129ed) bg_active_tab_pane_g1_cp2_srt

0x3d4b,	// (0x0001247e) bg_active_tab_pane_g2_cp2_srt

0x42b1,	// (0x000129e4) bg_active_tab_pane_g3_cp2_srt

0xe0cc,	// (0x0001c7ff) tabs_4_active_pane_srt_ParamLimits

0xe0cc,	// (0x0001c7ff) tabs_4_active_pane_srt

0xe0de,	// (0x0001c811) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe0de,	// (0x0001c811) tabs_4_passive_pane_cp2_srt

0x440f,	// (0x00012b42) aid_size_cell_toolbar

0x3623,	// (0x00011d56) main_idle_act_pane_ParamLimits

0x4628,	// (0x00012d5b) popup_large_graphic_colour_window_ParamLimits

0x4987,	// (0x000130ba) popup_toolbar_window_ParamLimits

0x4987,	// (0x000130ba) popup_toolbar_window

0xcc82,	// (0x0001b3b5) list_single_graphic_2heading_pane_ParamLimits

0xcc82,	// (0x0001b3b5) list_single_graphic_2heading_pane

0x37df,	// (0x00011f12) aid_size_cell_apps_grid_lsc_pane

0x37f1,	// (0x00011f24) aid_size_cell_apps_grid_prt_pane

0x4489,	// (0x00012bbc) bg_wml_button_pane_cp1_ParamLimits

0x4489,	// (0x00012bbc) bg_wml_button_pane_cp1

0x528a,	// (0x000139bd) form_midp_field_text_pane_t1_ParamLimits

0x5055,	// (0x00013788) input_focus_pane_cp050_ParamLimits

0x52c9,	// (0x000139fc) list_midp_form_text_pane_ParamLimits

0x5267,	// (0x0001399a) input_focus_pane_cp051_ParamLimits

0x527b,	// (0x000139ae) list_midp_choice_pane_ParamLimits

0x50e6,	// (0x00013819) list_single_2graphic_pane_cp3_ParamLimits

0x50e6,	// (0x00013819) list_single_2graphic_pane_cp3

0x5112,	// (0x00013845) list_single_midp_graphic_pane_ParamLimits

0x5112,	// (0x00013845) list_single_midp_graphic_pane

0xc465,	// (0x0001ab98) list_single_graphic_2heading_pane_g1_ParamLimits

0xc465,	// (0x0001ab98) list_single_graphic_2heading_pane_g1

0xc3eb,	// (0x0001ab1e) list_single_graphic_2heading_pane_g4_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_graphic_2heading_pane_g4

0xc3f7,	// (0x0001ab2a) list_single_graphic_2heading_pane_g5_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001df1e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001df1e) list_single_graphic_2heading_pane_g

0xcb36,	// (0x0001b269) list_single_graphic_2heading_pane_t1_ParamLimits

0xcb36,	// (0x0001b269) list_single_graphic_2heading_pane_t1

0xcb4a,	// (0x0001b27d) list_single_graphic_2heading_pane_t2_ParamLimits

0xcb4a,	// (0x0001b27d) list_single_graphic_2heading_pane_t2

0xcb66,	// (0x0001b299) list_single_graphic_2heading_pane_t3_ParamLimits

0xcb66,	// (0x0001b299) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001df25) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001df25) list_single_graphic_2heading_pane_t

0x4e57,	// (0x0001358a) bg_popup_sub_pane_cp2

0x4e81,	// (0x000135b4) grid_toobar_pane

0xdd6c,	// (0x0001c49f) cell_toolbar_pane_ParamLimits

0xdd6c,	// (0x0001c49f) cell_toolbar_pane

0x4edf,	// (0x00013612) cell_toolbar_pane_g1_ParamLimits

0x4edf,	// (0x00013612) cell_toolbar_pane_g1

0x4ef3,	// (0x00013626) cell_toolbar_pane_g2_ParamLimits

0x4ef3,	// (0x00013626) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x0001df2c) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x0001df2c) cell_toolbar_pane_g

0x4f15,	// (0x00013648) grid_highlight_pane_cp2_ParamLimits

0x4f15,	// (0x00013648) grid_highlight_pane_cp2

0x4f2f,	// (0x00013662) toolbar_button_pane

0x4f3b,	// (0x0001366e) toolbar_button_pane_g1

0x4f4b,	// (0x0001367e) toolbar_button_pane_g2

0x4f43,	// (0x00013676) toolbar_button_pane_g3

0x4f5b,	// (0x0001368e) toolbar_button_pane_g4

0x4f53,	// (0x00013686) toolbar_button_pane_g5

0x4f63,	// (0x00013696) toolbar_button_pane_g6

0x4f6b,	// (0x0001369e) toolbar_button_pane_g7

0x4f7b,	// (0x000136ae) toolbar_button_pane_g8

0x4f73,	// (0x000136a6) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x0001df31) toolbar_button_pane_g

0xdda4,	// (0x0001c4d7) list_single_2graphic_pane_g1_cp3_ParamLimits

0xdda4,	// (0x0001c4d7) list_single_2graphic_pane_g1_cp3

0xddb0,	// (0x0001c4e3) list_single_2graphic_pane_g2_cp3_ParamLimits

0xddb0,	// (0x0001c4e3) list_single_2graphic_pane_g2_cp3

0x3f2f,	// (0x00012662) list_single_2graphic_pane_g3_cp3

0xddc1,	// (0x0001c4f4) list_single_2graphic_pane_g4_cp3_ParamLimits

0xddc1,	// (0x0001c4f4) list_single_2graphic_pane_g4_cp3

0xddcd,	// (0x0001c500) list_single_2graphic_pane_t1_cp3_ParamLimits

0xddcd,	// (0x0001c500) list_single_2graphic_pane_t1_cp3

0x3f23,	// (0x00012656) list_single_midp_graphic_pane_g2_ParamLimits

0x3f23,	// (0x00012656) list_single_midp_graphic_pane_g2

0x441f,	// (0x00012b52) aid_zoom_text_primary

0xcb0a,	// (0x0001b23d) aid_zoom_text_secondary

0x436e,	// (0x00012aa1) status_small_pane_g7_ParamLimits

0x436e,	// (0x00012aa1) status_small_pane_g7

0x4391,	// (0x00012ac4) status_small_pane_t1_ParamLimits

0x241b,	// (0x00010b4e) title_pane_g2

0x0003,

0xf592,	// (0x0001dcc5) title_pane_g

0x296d,	// (0x000110a0) aid_size_cell_colour_1_pane_ParamLimits

0x296d,	// (0x000110a0) aid_size_cell_colour_1_pane

0x2981,	// (0x000110b4) aid_size_cell_colour_2_pane_ParamLimits

0x2981,	// (0x000110b4) aid_size_cell_colour_2_pane

0x2995,	// (0x000110c8) aid_size_cell_colour_3_pane_ParamLimits

0x2995,	// (0x000110c8) aid_size_cell_colour_3_pane

0x29a9,	// (0x000110dc) aid_size_cell_colour_4_pane_ParamLimits

0x29a9,	// (0x000110dc) aid_size_cell_colour_4_pane

0xd7d5,	// (0x0001bf08) title_pane_stacon_g1_ParamLimits

0xd7d5,	// (0x0001bf08) title_pane_stacon_g1

0x5687,	// (0x00013dba) popup_note_wait_window_g3_ParamLimits

0x5687,	// (0x00013dba) popup_note_wait_window_g3

0x56fd,	// (0x00013e30) popup_note_wait_window_t5_ParamLimits

0x56fd,	// (0x00013e30) popup_note_wait_window_t5

0x2404,	// (0x00010b37) main_feb_china_hwr_fs_writing_pane

0x4513,	// (0x00012c46) popup_feb_china_hwr_fs_window_ParamLimits

0x4513,	// (0x00012c46) popup_feb_china_hwr_fs_window

0xddfd,	// (0x0001c530) aid_size_cell_hwr_fs_ParamLimits

0xddfd,	// (0x0001c530) aid_size_cell_hwr_fs

0x5055,	// (0x00013788) bg_popup_sub_pane_cp3_ParamLimits

0x5055,	// (0x00013788) bg_popup_sub_pane_cp3

0xde12,	// (0x0001c545) grid_hwr_fs_pane_ParamLimits

0xde12,	// (0x0001c545) grid_hwr_fs_pane

0xde2a,	// (0x0001c55d) linegrid_hwr_fs_pane_ParamLimits

0xde2a,	// (0x0001c55d) linegrid_hwr_fs_pane

0xde3a,	// (0x0001c56d) cell_hwr_fs_pane_ParamLimits

0xde3a,	// (0x0001c56d) cell_hwr_fs_pane

0x5061,	// (0x00013794) linegrid_hwr_fs_pane_g1_ParamLimits

0x5061,	// (0x00013794) linegrid_hwr_fs_pane_g1

0x506d,	// (0x000137a0) linegrid_hwr_fs_pane_g2_ParamLimits

0x506d,	// (0x000137a0) linegrid_hwr_fs_pane_g2

0x507f,	// (0x000137b2) linegrid_hwr_fs_pane_g3_ParamLimits

0x507f,	// (0x000137b2) linegrid_hwr_fs_pane_g3

0xde5c,	// (0x0001c58f) linegrid_hwr_fs_pane_g4_ParamLimits

0xde5c,	// (0x0001c58f) linegrid_hwr_fs_pane_g4

0xde76,	// (0x0001c5a9) linegrid_hwr_fs_pane_g5_ParamLimits

0xde76,	// (0x0001c5a9) linegrid_hwr_fs_pane_g5

0x0004,

0xf824,	// (0x0001df57) linegrid_hwr_fs_pane_g_ParamLimits

0xf824,	// (0x0001df57) linegrid_hwr_fs_pane_g

0x508b,	// (0x000137be) cell_hwr_fs_pane_g1_ParamLimits

0x508b,	// (0x000137be) cell_hwr_fs_pane_g1

0x4d90,	// (0x000134c3) cell_hwr_fs_pane_g2_ParamLimits

0x4d90,	// (0x000134c3) cell_hwr_fs_pane_g2

0x50a1,	// (0x000137d4) cell_hwr_fs_pane_g3_ParamLimits

0x50a1,	// (0x000137d4) cell_hwr_fs_pane_g3

0x50ae,	// (0x000137e1) cell_hwr_fs_pane_g4_ParamLimits

0x50ae,	// (0x000137e1) cell_hwr_fs_pane_g4

0x0003,

0xf82f,	// (0x0001df62) cell_hwr_fs_pane_g_ParamLimits

0xf82f,	// (0x0001df62) cell_hwr_fs_pane_g

0xde8c,	// (0x0001c5bf) cell_hwr_fs_pane_t1

0x2404,	// (0x00010b37) grid_highlight_pane_cp6

0x2404,	// (0x00010b37) main_idle_act2_pane

0x3597,	// (0x00011cca) aid_inside_area_popup_secondary

0x5d2e,	// (0x00014461) aid_inside_area_window_primary_ParamLimits

0x5d2e,	// (0x00014461) aid_inside_area_window_primary

0x69bd,	// (0x000150f0) ai2_news_ticker_pane

0x69c5,	// (0x000150f8) aid_size_cell_ai1_link_ParamLimits

0x69c5,	// (0x000150f8) aid_size_cell_ai1_link

0x69df,	// (0x00015112) popup_ai2_data_window_ParamLimits

0x69df,	// (0x00015112) popup_ai2_data_window

0x69f3,	// (0x00015126) popup_ai2_link_window_ParamLimits

0x69f3,	// (0x00015126) popup_ai2_link_window

0x5055,	// (0x00013788) bg_popup_sub_pane_cp4_ParamLimits

0x5055,	// (0x00013788) bg_popup_sub_pane_cp4

0x6a07,	// (0x0001513a) grid_ai2_link_pane_ParamLimits

0x6a07,	// (0x0001513a) grid_ai2_link_pane

0x6a1e,	// (0x00015151) popup_ai2_link_window_g1_ParamLimits

0x6a1e,	// (0x00015151) popup_ai2_link_window_g1

0x6a2a,	// (0x0001515d) popup_ai2_link_window_g2_ParamLimits

0x6a2a,	// (0x0001515d) popup_ai2_link_window_g2

0x0001,

0xf9fb,	// (0x0001e12e) popup_ai2_link_window_g_ParamLimits

0xf9fb,	// (0x0001e12e) popup_ai2_link_window_g

0x6a39,	// (0x0001516c) ai2_mp_button_pane

0x6a41,	// (0x00015174) ai2_mp_volume_pane

0x5267,	// (0x0001399a) bg_popup_sub_pane_cp5_ParamLimits

0x5267,	// (0x0001399a) bg_popup_sub_pane_cp5

0x6a49,	// (0x0001517c) heading_ai2_gene_pane_ParamLimits

0x6a49,	// (0x0001517c) heading_ai2_gene_pane

0x6a55,	// (0x00015188) list_ai2_gene_pane_ParamLimits

0x6a55,	// (0x00015188) list_ai2_gene_pane

0x6a9d,	// (0x000151d0) cell_ai2_link_pane_ParamLimits

0x6a9d,	// (0x000151d0) cell_ai2_link_pane

0x6ab3,	// (0x000151e6) cell_ai2_link_pane_g1

0x2404,	// (0x00010b37) grid_highlight_pane_cp7

0xe184,	// (0x0001c8b7) ai2_mp_volume_pane_g1

0x6b8c,	// (0x000152bf) ai2_mp_volume_pane_g2

0x6af9,	// (0x0001522c) list_ai2_gene_pane_t1

0x6b84,	// (0x000152b7) ai2_mp_volume_pane_g3

0x0002,

0xfa14,	// (0x0001e147) ai2_mp_volume_pane_g

0xe18c,	// (0x0001c8bf) volume_small_pane_cp3

0x6b94,	// (0x000152c7) aid_size_cell_ai2_button

0x6b9c,	// (0x000152cf) grid_ai2_button_pane

0x6ba5,	// (0x000152d8) cell_ai2_button_pane_ParamLimits

0x6ba5,	// (0x000152d8) cell_ai2_button_pane

0x23fa,	// (0x00010b2d) cell_ai2_button_pane_g1

0x2404,	// (0x00010b37) grid_highlight_pane_cp8

0x6b44,	// (0x00015277) ai2_gene_pane_t1_ParamLimits

0x6b44,	// (0x00015277) ai2_gene_pane_t1

0x4405,	// (0x00012b38) aid_height_parent_landscape

0x63e5,	// (0x00014b18) aid_height_set_list

0x63f6,	// (0x00014b29) aid_size_parent

0x67e0,	// (0x00014f13) aid_size_cell_graphic_pane_ParamLimits

0x6a65,	// (0x00015198) popup_ai2_data_window_g1_ParamLimits

0x6a65,	// (0x00015198) popup_ai2_data_window_g1

0x6a71,	// (0x000151a4) ai2_news_ticker_pane_g1

0x6a79,	// (0x000151ac) ai2_news_ticker_pane_g2

0x0001,

0xfa00,	// (0x0001e133) ai2_news_ticker_pane_g

0x6a81,	// (0x000151b4) ai2_news_ticker_pane_t1

0x6a8f,	// (0x000151c2) ai2_news_ticker_pane_t2

0x0001,

0xfa05,	// (0x0001e138) ai2_news_ticker_pane_t

0x6abc,	// (0x000151ef) heading_ai2_gene_pane_g1

0x6ac4,	// (0x000151f7) heading_ai2_gene_pane_t1_ParamLimits

0x6ac4,	// (0x000151f7) heading_ai2_gene_pane_t1

0x6ad9,	// (0x0001520c) list_highlight_pane_cp6

0x6ae1,	// (0x00015214) ai2_gene_pane_ParamLimits

0x6ae1,	// (0x00015214) ai2_gene_pane

0x6b07,	// (0x0001523a) list_ai2_gene_pane_t2

0x0001,

0xfa0a,	// (0x0001e13d) list_ai2_gene_pane_t

0x6b15,	// (0x00015248) list_highlight_pane_cp8_ParamLimits

0x6b15,	// (0x00015248) list_highlight_pane_cp8

0x6b26,	// (0x00015259) ai2_gene_pane_g1_ParamLimits

0x6b26,	// (0x00015259) ai2_gene_pane_g1

0x6b38,	// (0x0001526b) ai2_gene_pane_g2_ParamLimits

0x6b38,	// (0x0001526b) ai2_gene_pane_g2

0x0001,

0xfa0f,	// (0x0001e142) ai2_gene_pane_g_ParamLimits

0xfa0f,	// (0x0001e142) ai2_gene_pane_g

0x2ce7,	// (0x0001141a) scroll_pane_cp12

0xdd2b,	// (0x0001c45e) control_pane_t3_ParamLimits

0xdd2b,	// (0x0001c45e) control_pane_t3

0x4382,	// (0x00012ab5) status_small_pane_g8_ParamLimits

0x4382,	// (0x00012ab5) status_small_pane_g8

0x45f5,	// (0x00012d28) popup_find_window_ParamLimits

0x4808,	// (0x00012f3b) popup_note_image_window_ParamLimits

0xc465,	// (0x0001ab98) list_double2_graphic_pane_vc_g1_ParamLimits

0xc465,	// (0x0001ab98) list_double2_graphic_pane_vc_g1

0xc3eb,	// (0x0001ab1e) list_double2_graphic_pane_vc_g2_ParamLimits

0xc3eb,	// (0x0001ab1e) list_double2_graphic_pane_vc_g2

0xc3f7,	// (0x0001ab2a) list_double2_graphic_pane_vc_g3_ParamLimits

0xc3f7,	// (0x0001ab2a) list_double2_graphic_pane_vc_g3

0x0002,

0xf7eb,	// (0x0001df1e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001df1e) list_double2_graphic_pane_vc_g

0xcb7e,	// (0x0001b2b1) list_double2_graphic_pane_vc_t1_ParamLimits

0xcb7e,	// (0x0001b2b1) list_double2_graphic_pane_vc_t1

0xc3eb,	// (0x0001ab1e) list_single_heading_pane_vc_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_heading_pane_vc_g1

0xc3f7,	// (0x0001ab2a) list_single_heading_pane_vc_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_single_heading_pane_vc_g

0xcb94,	// (0x0001b2c7) list_single_heading_pane_vc_t1_ParamLimits

0xcb94,	// (0x0001b2c7) list_single_heading_pane_vc_t1

0xcbaa,	// (0x0001b2dd) list_single_heading_pane_vc_t2_ParamLimits

0xcbaa,	// (0x0001b2dd) list_single_heading_pane_vc_t2

0x0001,

0xf813,	// (0x0001df46) list_single_heading_pane_vc_t_ParamLimits

0xf813,	// (0x0001df46) list_single_heading_pane_vc_t

0x4fad,	// (0x000136e0) list_setting_number_pane_vc_g1_ParamLimits

0x4fad,	// (0x000136e0) list_setting_number_pane_vc_g1

0x4fb9,	// (0x000136ec) list_setting_number_pane_vc_g2_ParamLimits

0x4fb9,	// (0x000136ec) list_setting_number_pane_vc_g2

0x0001,

0xf818,	// (0x0001df4b) list_setting_number_pane_vc_g_ParamLimits

0xf818,	// (0x0001df4b) list_setting_number_pane_vc_g

0x4fc5,	// (0x000136f8) list_setting_number_pane_vc_t1_ParamLimits

0x4fc5,	// (0x000136f8) list_setting_number_pane_vc_t1

0x4fd9,	// (0x0001370c) list_setting_number_pane_vc_t2_ParamLimits

0x4fd9,	// (0x0001370c) list_setting_number_pane_vc_t2

0x4ff5,	// (0x00013728) list_setting_number_pane_vc_t3_ParamLimits

0x4ff5,	// (0x00013728) list_setting_number_pane_vc_t3

0x0002,

0xf81d,	// (0x0001df50) list_setting_number_pane_vc_t_ParamLimits

0xf81d,	// (0x0001df50) list_setting_number_pane_vc_t

0x501d,	// (0x00013750) set_value_pane_vc_ParamLimits

0x501d,	// (0x00013750) set_value_pane_vc

0xcc82,	// (0x0001b3b5) list_double2_graphic_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_double2_graphic_pane_vc

0x65f8,	// (0x00014d2b) list_double2_large_graphic_pane_vc_ParamLimits

0x65f8,	// (0x00014d2b) list_double2_large_graphic_pane_vc

0xcc82,	// (0x0001b3b5) list_double2_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_double2_pane_vc

0xcc82,	// (0x0001b3b5) list_double_graphic_heading_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_double_graphic_heading_pane_vc

0xcc82,	// (0x0001b3b5) list_double_graphic_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_double_graphic_pane_vc

0xcc82,	// (0x0001b3b5) list_double_heading_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_double_heading_pane_vc

0x65f8,	// (0x00014d2b) list_double_large_graphic_pane_vc_ParamLimits

0x65f8,	// (0x00014d2b) list_double_large_graphic_pane_vc

0xcc82,	// (0x0001b3b5) list_double_number_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_double_number_pane_vc

0xcc82,	// (0x0001b3b5) list_double_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_double_pane_vc

0xcc82,	// (0x0001b3b5) list_double_time_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_double_time_pane_vc

0xcc82,	// (0x0001b3b5) list_setting_number_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_setting_number_pane_vc

0xcc82,	// (0x0001b3b5) list_setting_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_setting_pane_vc

0xcc82,	// (0x0001b3b5) list_single_graphic_heading_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_single_graphic_heading_pane_vc

0xcc82,	// (0x0001b3b5) list_single_heading_pane_vc_ParamLimits

0xcc82,	// (0x0001b3b5) list_single_heading_pane_vc

0xcc96,	// (0x0001b3c9) list_single_number_heading_pane_vc_ParamLimits

0xcc96,	// (0x0001b3c9) list_single_number_heading_pane_vc

0xc465,	// (0x0001ab98) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc465,	// (0x0001ab98) list_double_graphic_heading_pane_vc_g1

0xc3eb,	// (0x0001ab1e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc3eb,	// (0x0001ab1e) list_double_graphic_heading_pane_vc_g2

0xc3f7,	// (0x0001ab2a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc3f7,	// (0x0001ab2a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7eb,	// (0x0001df1e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001df1e) list_double_graphic_heading_pane_vc_g

0xcd53,	// (0x0001b486) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xcd53,	// (0x0001b486) list_double_graphic_heading_pane_vc_t1

0xcb94,	// (0x0001b2c7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xcb94,	// (0x0001b2c7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa1b,	// (0x0001e14e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa1b,	// (0x0001e14e) list_double_graphic_heading_pane_vc_t

0x4fad,	// (0x000136e0) list_setting_pane_vc_g1_ParamLimits

0x4fad,	// (0x000136e0) list_setting_pane_vc_g1

0x4fb9,	// (0x000136ec) list_setting_pane_vc_g2_ParamLimits

0x4fb9,	// (0x000136ec) list_setting_pane_vc_g2

0x0001,

0xf818,	// (0x0001df4b) list_setting_pane_vc_g_ParamLimits

0xf818,	// (0x0001df4b) list_setting_pane_vc_g

0x6dd1,	// (0x00015504) list_setting_pane_vc_t1_ParamLimits

0x6dd1,	// (0x00015504) list_setting_pane_vc_t1

0x6de5,	// (0x00015518) list_setting_pane_vc_t2_ParamLimits

0x6de5,	// (0x00015518) list_setting_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001e191) list_setting_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001e191) list_setting_pane_vc_t

0x501d,	// (0x00013750) set_value_pane_cp_vc_ParamLimits

0x501d,	// (0x00013750) set_value_pane_cp_vc

0xc3eb,	// (0x0001ab1e) list_single_number_heading_pane_vc_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_number_heading_pane_vc_g1

0xc3f7,	// (0x0001ab2a) list_single_number_heading_pane_vc_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_single_number_heading_pane_vc_g

0xcb94,	// (0x0001b2c7) list_single_number_heading_pane_vc_t1_ParamLimits

0xcb94,	// (0x0001b2c7) list_single_number_heading_pane_vc_t1

0xcd67,	// (0x0001b49a) list_single_number_heading_pane_vc_t2_ParamLimits

0xcd67,	// (0x0001b49a) list_single_number_heading_pane_vc_t2

0xc453,	// (0x0001ab86) list_single_number_heading_pane_vc_t3_ParamLimits

0xc453,	// (0x0001ab86) list_single_number_heading_pane_vc_t3

0x0002,

0xfa63,	// (0x0001e196) list_single_number_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x0001e196) list_single_number_heading_pane_vc_t

0xc465,	// (0x0001ab98) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc465,	// (0x0001ab98) list_single_graphic_heading_pane_vc_g1

0xc3eb,	// (0x0001ab1e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_graphic_heading_pane_vc_g4

0xc3f7,	// (0x0001ab2a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc3f7,	// (0x0001ab2a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7eb,	// (0x0001df1e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001df1e) list_single_graphic_heading_pane_vc_g

0xcb94,	// (0x0001b2c7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xcb94,	// (0x0001b2c7) list_single_graphic_heading_pane_vc_t1

0xcd7b,	// (0x0001b4ae) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xcd7b,	// (0x0001b4ae) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001e19d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001e19d) list_single_graphic_heading_pane_vc_t

0xc3eb,	// (0x0001ab1e) list_double2_pane_vc_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_double2_pane_vc_g1

0xc3f7,	// (0x0001ab2a) list_double2_pane_vc_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_double2_pane_vc_g

0xcc4a,	// (0x0001b37d) list_double2_pane_vc_t1_ParamLimits

0xcc4a,	// (0x0001b37d) list_double2_pane_vc_t1

0xcd8f,	// (0x0001b4c2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcd8f,	// (0x0001b4c2) list_double2_large_graphic_pane_vc_g1

0xcd9b,	// (0x0001b4ce) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xcd9b,	// (0x0001b4ce) list_double2_large_graphic_pane_vc_g2

0xcda7,	// (0x0001b4da) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcda7,	// (0x0001b4da) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa6f,	// (0x0001e1a2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0001e1a2) list_double2_large_graphic_pane_vc_g

0xcdb3,	// (0x0001b4e6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xcdb3,	// (0x0001b4e6) list_double2_large_graphic_pane_vc_t1

0xcdc9,	// (0x0001b4fc) list_double_time_pane_vc_g1_ParamLimits

0xcdc9,	// (0x0001b4fc) list_double_time_pane_vc_g1

0xcdd5,	// (0x0001b508) list_double_time_pane_vc_g2_ParamLimits

0xcdd5,	// (0x0001b508) list_double_time_pane_vc_g2

0x0001,

0xfa76,	// (0x0001e1a9) list_double_time_pane_vc_g_ParamLimits

0xfa76,	// (0x0001e1a9) list_double_time_pane_vc_g

0xcde1,	// (0x0001b514) list_double_time_pane_vc_t1_ParamLimits

0xcde1,	// (0x0001b514) list_double_time_pane_vc_t1

0xcdfa,	// (0x0001b52d) list_double_time_pane_vc_t2_ParamLimits

0xcdfa,	// (0x0001b52d) list_double_time_pane_vc_t2

0xce3a,	// (0x0001b56d) list_double_time_pane_vc_t3_ParamLimits

0xce3a,	// (0x0001b56d) list_double_time_pane_vc_t3

0xce52,	// (0x0001b585) list_double_time_pane_vc_t4_ParamLimits

0xce52,	// (0x0001b585) list_double_time_pane_vc_t4

0x0003,

0xfa7b,	// (0x0001e1ae) list_double_time_pane_vc_t_ParamLimits

0xfa7b,	// (0x0001e1ae) list_double_time_pane_vc_t

0xc3eb,	// (0x0001ab1e) list_double_pane_vc_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_double_pane_vc_g1

0xc3f7,	// (0x0001ab2a) list_double_pane_vc_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_double_pane_vc_g

0xce66,	// (0x0001b599) list_double_pane_vc_t1_ParamLimits

0xce66,	// (0x0001b599) list_double_pane_vc_t1

0xce78,	// (0x0001b5ab) list_double_pane_vc_t2_ParamLimits

0xce78,	// (0x0001b5ab) list_double_pane_vc_t2

0x0001,

0xfa84,	// (0x0001e1b7) list_double_pane_vc_t_ParamLimits

0xfa84,	// (0x0001e1b7) list_double_pane_vc_t

0xc3eb,	// (0x0001ab1e) list_double_number_pane_vc_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_double_number_pane_vc_g1

0xc3f7,	// (0x0001ab2a) list_double_number_pane_vc_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_double_number_pane_vc_g

0xce90,	// (0x0001b5c3) list_double_number_pane_vc_t1_ParamLimits

0xce90,	// (0x0001b5c3) list_double_number_pane_vc_t1

0xcea4,	// (0x0001b5d7) list_double_number_pane_vc_t2_ParamLimits

0xcea4,	// (0x0001b5d7) list_double_number_pane_vc_t2

0xce78,	// (0x0001b5ab) list_double_number_pane_vc_t3_ParamLimits

0xce78,	// (0x0001b5ab) list_double_number_pane_vc_t3

0x0002,

0xfa89,	// (0x0001e1bc) list_double_number_pane_vc_t_ParamLimits

0xfa89,	// (0x0001e1bc) list_double_number_pane_vc_t

0xceb6,	// (0x0001b5e9) list_double_large_graphic_pane_vc_g1_ParamLimits

0xceb6,	// (0x0001b5e9) list_double_large_graphic_pane_vc_g1

0xcec2,	// (0x0001b5f5) list_double_large_graphic_pane_vc_g2_ParamLimits

0xcec2,	// (0x0001b5f5) list_double_large_graphic_pane_vc_g2

0xcda7,	// (0x0001b4da) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcda7,	// (0x0001b4da) list_double_large_graphic_pane_vc_g3

0xced1,	// (0x0001b604) list_double_large_graphic_pane_vc_g4_ParamLimits

0xced1,	// (0x0001b604) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa90,	// (0x0001e1c3) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa90,	// (0x0001e1c3) list_double_large_graphic_pane_vc_g

0xcedd,	// (0x0001b610) list_double_large_graphic_pane_vc_t1_ParamLimits

0xcedd,	// (0x0001b610) list_double_large_graphic_pane_vc_t1

0xceef,	// (0x0001b622) list_double_large_graphic_pane_vc_t2_ParamLimits

0xceef,	// (0x0001b622) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa99,	// (0x0001e1cc) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa99,	// (0x0001e1cc) list_double_large_graphic_pane_vc_t

0xc3eb,	// (0x0001ab1e) list_double_heading_pane_vc_g1_ParamLimits

0xc3eb,	// (0x0001ab1e) list_double_heading_pane_vc_g1

0xc3f7,	// (0x0001ab2a) list_double_heading_pane_vc_g2_ParamLimits

0xc3f7,	// (0x0001ab2a) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001dd3f) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001dd3f) list_double_heading_pane_vc_g

0xcf08,	// (0x0001b63b) list_double_heading_pane_vc_t1_ParamLimits

0xcf08,	// (0x0001b63b) list_double_heading_pane_vc_t1

0xcb94,	// (0x0001b2c7) list_double_heading_pane_vc_t2_ParamLimits

0xcb94,	// (0x0001b2c7) list_double_heading_pane_vc_t2

0x0001,

0xfa9e,	// (0x0001e1d1) list_double_heading_pane_vc_t_ParamLimits

0xfa9e,	// (0x0001e1d1) list_double_heading_pane_vc_t

0xcf1c,	// (0x0001b64f) list_double_graphic_pane_vc_g1_ParamLimits

0xcf1c,	// (0x0001b64f) list_double_graphic_pane_vc_g1

0xcf2c,	// (0x0001b65f) list_double_graphic_pane_vc_g2_ParamLimits

0xcf2c,	// (0x0001b65f) list_double_graphic_pane_vc_g2

0xcf3b,	// (0x0001b66e) list_double_graphic_pane_vc_g3_ParamLimits

0xcf3b,	// (0x0001b66e) list_double_graphic_pane_vc_g3

0x0002,

0xfaa3,	// (0x0001e1d6) list_double_graphic_pane_vc_g_ParamLimits

0xfaa3,	// (0x0001e1d6) list_double_graphic_pane_vc_g

0xcf47,	// (0x0001b67a) list_double_graphic_pane_vc_t1_ParamLimits

0xcf47,	// (0x0001b67a) list_double_graphic_pane_vc_t1

0xce78,	// (0x0001b5ab) list_double_graphic_pane_vc_t2_ParamLimits

0xce78,	// (0x0001b5ab) list_double_graphic_pane_vc_t2

0x0001,

0xfaaa,	// (0x0001e1dd) list_double_graphic_pane_vc_t_ParamLimits

0xfaaa,	// (0x0001e1dd) list_double_graphic_pane_vc_t

0xd353,	// (0x0001ba86) aid_size_cell_fastswap

0xd35b,	// (0x0001ba8e) aid_size_cell_touch_ParamLimits

0xd35b,	// (0x0001ba8e) aid_size_cell_touch

0xd5b6,	// (0x0001bce9) popup_fast_swap_wide_window_ParamLimits

0xd5b6,	// (0x0001bce9) popup_fast_swap_wide_window

0xd6ac,	// (0x0001bddf) touch_pane_ParamLimits

0xd6ac,	// (0x0001bddf) touch_pane

0x31e5,	// (0x00011918) button_value_adjust_pane_cp2

0xc835,	// (0x0001af68) button_value_adjust_pane_cp4

0xc855,	// (0x0001af88) form_field_data_pane_cp2

0xc874,	// (0x0001afa7) form_field_data_wide_pane_cp2

0x38ad,	// (0x00011fe0) bg_scroll_pane_ParamLimits

0xd938,	// (0x0001c06b) scroll_handle_pane_ParamLimits

0xd94c,	// (0x0001c07f) scroll_sc2_down_pane_ParamLimits

0xd94c,	// (0x0001c07f) scroll_sc2_down_pane

0x38de,	// (0x00012011) scroll_sc2_up_pane_ParamLimits

0x38de,	// (0x00012011) scroll_sc2_up_pane

0x73e2,	// (0x00015b15) grid_wheel_folder_pane_g1_ParamLimits

0x73e2,	// (0x00015b15) grid_wheel_folder_pane_g1

0xdb11,	// (0x0001c244) clock_nsta_pane_cp2_ParamLimits

0xdb11,	// (0x0001c244) clock_nsta_pane_cp2

0x410b,	// (0x0001283e) listscroll_midp_pane_ParamLimits

0x4117,	// (0x0001284a) midp_canvas_pane

0x43fd,	// (0x00012b30) nsta_clock_indic_pane

0x445b,	// (0x00012b8e) listscroll_form_pane_vc

0x4477,	// (0x00012baa) listscroll_set_pane_vc_ParamLimits

0x4477,	// (0x00012baa) listscroll_set_pane_vc

0x4b0b,	// (0x0001323e) clock_nsta_pane

0x4b80,	// (0x000132b3) indicator_nsta_pane

0x4e57,	// (0x0001358a) bg_popup_sub_pane_cp2_ParamLimits

0x4e6b,	// (0x0001359e) find_pane_cp2_ParamLimits

0x4e6b,	// (0x0001359e) find_pane_cp2

0x4e81,	// (0x000135b4) grid_toobar_pane_ParamLimits

0x5029,	// (0x0001375c) list_form_gen_pane_vc_ParamLimits

0x5029,	// (0x0001375c) list_form_gen_pane_vc

0x503f,	// (0x00013772) scroll_pane_cp8_vc_ParamLimits

0x503f,	// (0x00013772) scroll_pane_cp8_vc

0x50bb,	// (0x000137ee) data_form_wide_pane_vc_ParamLimits

0x50bb,	// (0x000137ee) data_form_wide_pane_vc

0x50c7,	// (0x000137fa) form_field_data_wide_pane_vc_g1

0x50cf,	// (0x00013802) form_field_data_wide_pane_vc_t1_ParamLimits

0x50cf,	// (0x00013802) form_field_data_wide_pane_vc_t1

0x32bd,	// (0x000119f0) input_focus_pane_cp6_vc_ParamLimits

0x32bd,	// (0x000119f0) input_focus_pane_cp6_vc

0x5438,	// (0x00013b6b) list_midp_pane_ParamLimits

0x5444,	// (0x00013b77) scroll_pane_cp16_ParamLimits

0x5444,	// (0x00013b77) scroll_pane_cp16

0x5484,	// (0x00013bb7) button_value_adjust_pane_ParamLimits

0x5484,	// (0x00013bb7) button_value_adjust_pane

0x6408,	// (0x00014b3b) button_value_adjust_pane_cp6_ParamLimits

0x6408,	// (0x00014b3b) button_value_adjust_pane_cp6

0x652a,	// (0x00014c5d) settings_code_pane_cp_ParamLimits

0x652a,	// (0x00014c5d) settings_code_pane_cp

0x23fa,	// (0x00010b2d) cell_touch_pane_g1

0x23fa,	// (0x00010b2d) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001de75) cell_touch_pane_g

0x6bb7,	// (0x000152ea) cell_touch_pane_cp_ParamLimits

0x6bb7,	// (0x000152ea) cell_touch_pane_cp

0x6bc7,	// (0x000152fa) cell_touch_pane_ParamLimits

0x6bc7,	// (0x000152fa) cell_touch_pane

0x23fa,	// (0x00010b2d) scroll_sc2_down_pane_g1

0x23fa,	// (0x00010b2d) scroll_sc2_up_pane_g1

0x2404,	// (0x00010b37) bg_set_opt_pane_cp4_vc

0x6bed,	// (0x00015320) list_set_graphic_pane_vc_g1_ParamLimits

0x6bed,	// (0x00015320) list_set_graphic_pane_vc_g1

0x6bf9,	// (0x0001532c) list_set_graphic_pane_vc_g2_ParamLimits

0x6bf9,	// (0x0001532c) list_set_graphic_pane_vc_g2

0x0001,

0xfa20,	// (0x0001e153) list_set_graphic_pane_vc_g_ParamLimits

0xfa20,	// (0x0001e153) list_set_graphic_pane_vc_g

0x6c05,	// (0x00015338) text_primary_small_cp13_vc_ParamLimits

0x6c05,	// (0x00015338) text_primary_small_cp13_vc

0x6c1d,	// (0x00015350) list_set_graphic_pane_vc_ParamLimits

0x6c1d,	// (0x00015350) list_set_graphic_pane_vc

0x2404,	// (0x00010b37) input_focus_pane_cp2_vc

0x23fa,	// (0x00010b2d) setting_code_pane_vc_g1

0x6c31,	// (0x00015364) setting_code_pane_vc_t1

0x6c3f,	// (0x00015372) set_text_pane_vc_t1_ParamLimits

0x6c3f,	// (0x00015372) set_text_pane_vc_t1

0x2404,	// (0x00010b37) input_focus_pane_cp1_vc

0x6c5e,	// (0x00015391) list_set_text_pane_vc

0x23fa,	// (0x00010b2d) setting_text_pane_vc_g1

0x2404,	// (0x00010b37) bg_set_opt_pane_cp2_vc

0x6c68,	// (0x0001539b) setting_slider_graphic_pane_vc_g1

0x6c70,	// (0x000153a3) setting_slider_graphic_pane_vc_t1

0x6c7e,	// (0x000153b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa25,	// (0x0001e158) setting_slider_graphic_pane_vc_t

0x6c8c,	// (0x000153bf) slider_set_pane_cp_vc

0x6c94,	// (0x000153c7) slider_set_pane_vc_g1

0x6c9d,	// (0x000153d0) slider_set_pane_vc_g2

0x0006,

0xfa2a,	// (0x0001e15d) slider_set_pane_vc_g

0x33f9,	// (0x00011b2c) set_opt_bg_pane_g1_copy1

0x3401,	// (0x00011b34) set_opt_bg_pane_g2_copy1

0x6cc9,	// (0x000153fc) set_opt_bg_pane_g3_copy1

0x3411,	// (0x00011b44) set_opt_bg_pane_g4_copy1

0x3419,	// (0x00011b4c) set_opt_bg_pane_g5_copy1

0x3421,	// (0x00011b54) set_opt_bg_pane_g6_copy1

0x6cd1,	// (0x00015404) set_opt_bg_pane_g7_copy1

0x6cdb,	// (0x0001540e) set_opt_bg_pane_g8_copy1

0x6ce3,	// (0x00015416) set_opt_bg_pane_g9_copy1

0x2404,	// (0x00010b37) bg_set_opt_pane_cp_vc

0x6ceb,	// (0x0001541e) setting_slider_pane_vc_t1

0x6c70,	// (0x000153a3) setting_slider_pane_vc_t2

0x6c7e,	// (0x000153b1) setting_slider_pane_vc_t3

0x0002,

0xfa39,	// (0x0001e16c) setting_slider_pane_vc_t

0x6c8c,	// (0x000153bf) slider_set_pane_vc

0xde9a,	// (0x0001c5cd) volume_set_pane_vc_g1

0xe195,	// (0x0001c8c8) volume_set_pane_vc_g2

0xe19e,	// (0x0001c8d1) volume_set_pane_vc_g3

0xe1a7,	// (0x0001c8da) volume_set_pane_vc_g4

0xe1b0,	// (0x0001c8e3) volume_set_pane_vc_g5

0xe1b9,	// (0x0001c8ec) volume_set_pane_vc_g6

0xe1c2,	// (0x0001c8f5) volume_set_pane_vc_g7

0xe1cb,	// (0x0001c8fe) volume_set_pane_vc_g8

0xe1d4,	// (0x0001c907) volume_set_pane_vc_g9

0xe1dd,	// (0x0001c910) volume_set_pane_vc_g10

0x0009,

0xfa40,	// (0x0001e173) volume_set_pane_vc_g

0x6cfa,	// (0x0001542d) volume_set_pane_vc

0x6d02,	// (0x00015435) button_value_adjust_pane_cp1_vc

0x6d0c,	// (0x0001543f) list_highlight_pane_cp2_vc

0x6d15,	// (0x00015448) list_set_pane_vc_ParamLimits

0x6d15,	// (0x00015448) list_set_pane_vc

0x6d67,	// (0x0001549a) main_pane_set_vc_t1_ParamLimits

0x6d67,	// (0x0001549a) main_pane_set_vc_t1

0x6d7c,	// (0x000154af) main_pane_set_vc_t2_ParamLimits

0x6d7c,	// (0x000154af) main_pane_set_vc_t2

0x6d8e,	// (0x000154c1) main_pane_set_vc_t3_ParamLimits

0x6d8e,	// (0x000154c1) main_pane_set_vc_t3

0x6da0,	// (0x000154d3) main_pane_set_vc_t4_ParamLimits

0x6da0,	// (0x000154d3) main_pane_set_vc_t4

0x0003,

0xfa55,	// (0x0001e188) main_pane_set_vc_t_ParamLimits

0xfa55,	// (0x0001e188) main_pane_set_vc_t

0x6db2,	// (0x000154e5) setting_code_pane_vc_ParamLimits

0x6db2,	// (0x000154e5) setting_code_pane_vc

0x6dc1,	// (0x000154f4) setting_slider_graphic_pane_vc

0x6dc1,	// (0x000154f4) setting_slider_pane_vc

0x6dc1,	// (0x000154f4) setting_text_pane_vc

0x6dc1,	// (0x000154f4) setting_volume_pane_vc

0x6dc9,	// (0x000154fc) scroll_pane_cp121_vc

0x31d3,	// (0x00011906) set_content_pane_vc

0x6fd9,	// (0x0001570c) button_value_adjust_pane_g1

0x6fe2,	// (0x00015715) button_value_adjust_pane_g2

0x0001,

0xfaaf,	// (0x0001e1e2) button_value_adjust_pane_g

0x6feb,	// (0x0001571e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6feb,	// (0x0001571e) form_field_slider_wide_pane_vc_t1

0x6fff,	// (0x00015732) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6fff,	// (0x00015732) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab4,	// (0x0001e1e7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab4,	// (0x0001e1e7) form_field_slider_wide_pane_vc_t

0x2779,	// (0x00010eac) input_focus_pane_cp10_vc_ParamLimits

0x2779,	// (0x00010eac) input_focus_pane_cp10_vc

0x7011,	// (0x00015744) slider_cont_pane_cp1_vc_ParamLimits

0x7011,	// (0x00015744) slider_cont_pane_cp1_vc

0x6c94,	// (0x000153c7) slider_form_pane_g1_cp2

0x6c9d,	// (0x000153d0) slider_form_pane_g2_cp2

0x702a,	// (0x0001575d) form_field_slider_pane_vc_t3

0x7038,	// (0x0001576b) form_field_slider_pane_vc_t4

0x7046,	// (0x00015779) slider_form_pane_vc_ParamLimits

0x7046,	// (0x00015779) slider_form_pane_vc

0x7053,	// (0x00015786) form_field_slider_pane_vc_t1_ParamLimits

0x7053,	// (0x00015786) form_field_slider_pane_vc_t1

0x6fff,	// (0x00015732) form_field_slider_pane_vc_t2_ParamLimits

0x6fff,	// (0x00015732) form_field_slider_pane_vc_t2

0x0001,

0xfac4,	// (0x0001e1f7) form_field_slider_pane_vc_t_ParamLimits

0xfac4,	// (0x0001e1f7) form_field_slider_pane_vc_t

0x2779,	// (0x00010eac) input_focus_pane_cp9_vc_ParamLimits

0x2779,	// (0x00010eac) input_focus_pane_cp9_vc

0x706f,	// (0x000157a2) slider_cont_pane_vc_ParamLimits

0x706f,	// (0x000157a2) slider_cont_pane_vc

0x7081,	// (0x000157b4) list_form_graphic_pane_cp_vc_ParamLimits

0x7081,	// (0x000157b4) list_form_graphic_pane_cp_vc

0x50c7,	// (0x000137fa) form_field_popup_wide_pane_vc_g1

0x7096,	// (0x000157c9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7096,	// (0x000157c9) form_field_popup_wide_pane_vc_t1

0x32bd,	// (0x000119f0) input_focus_pane_cp8_vc_ParamLimits

0x32bd,	// (0x000119f0) input_focus_pane_cp8_vc

0x70ad,	// (0x000157e0) list_form_wide_pane_vc_ParamLimits

0x70ad,	// (0x000157e0) list_form_wide_pane_vc

0x70b9,	// (0x000157ec) list_form_graphic_pane_vc_g1

0x70c1,	// (0x000157f4) list_form_graphic_pane_vc_t1_ParamLimits

0x70c1,	// (0x000157f4) list_form_graphic_pane_vc_t1

0x24e4,	// (0x00010c17) list_highlight_pane_cp5_vc_ParamLimits

0x24e4,	// (0x00010c17) list_highlight_pane_cp5_vc

0x70dd,	// (0x00015810) list_form_graphic_pane_vc_ParamLimits

0x70dd,	// (0x00015810) list_form_graphic_pane_vc

0x50c7,	// (0x000137fa) form_field_popup_pane_vc_g1

0x70f3,	// (0x00015826) form_field_popup_pane_vc_t1_ParamLimits

0x70f3,	// (0x00015826) form_field_popup_pane_vc_t1

0x32bd,	// (0x000119f0) input_focus_pane_cp7_vc_ParamLimits

0x32bd,	// (0x000119f0) input_focus_pane_cp7_vc

0x710a,	// (0x0001583d) list_form_pane_vc_ParamLimits

0x710a,	// (0x0001583d) list_form_pane_vc

0x7116,	// (0x00015849) data_form_pane_vc_t1_ParamLimits

0x7116,	// (0x00015849) data_form_pane_vc_t1

0x33f9,	// (0x00011b2c) input_focus_pane_vc_g1

0x3401,	// (0x00011b34) input_focus_pane_vc_g2

0x3409,	// (0x00011b3c) input_focus_pane_vc_g3

0x3411,	// (0x00011b44) input_focus_pane_vc_g4

0x3419,	// (0x00011b4c) input_focus_pane_vc_g5

0x3421,	// (0x00011b54) input_focus_pane_vc_g6

0x3429,	// (0x00011b5c) input_focus_pane_vc_g7

0x3431,	// (0x00011b64) input_focus_pane_vc_g8

0x3439,	// (0x00011b6c) input_focus_pane_vc_g9

0x23fa,	// (0x00010b2d) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001ddfe) input_focus_pane_vc_g

0x50bb,	// (0x000137ee) data_form_pane_vc_ParamLimits

0x50bb,	// (0x000137ee) data_form_pane_vc

0x50c7,	// (0x000137fa) form_field_data_pane_vc_g1

0x7131,	// (0x00015864) form_field_data_pane_vc_t1_ParamLimits

0x7131,	// (0x00015864) form_field_data_pane_vc_t1

0x32bd,	// (0x000119f0) input_focus_pane_vc_ParamLimits

0x32bd,	// (0x000119f0) input_focus_pane_vc

0x714b,	// (0x0001587e) button_value_adjust_pane_cp3_vc

0x7153,	// (0x00015886) button_value_adjust_pane_cp5_vc

0x715b,	// (0x0001588e) form_field_data_pane_vc_ParamLimits

0x715b,	// (0x0001588e) form_field_data_pane_vc

0x7172,	// (0x000158a5) form_field_data_pane_vc_cp2

0x717a,	// (0x000158ad) form_field_data_wide_pane_vc_ParamLimits

0x717a,	// (0x000158ad) form_field_data_wide_pane_vc

0x7190,	// (0x000158c3) form_field_data_wide_pane_vc_cp2

0x7198,	// (0x000158cb) form_field_popup_pane_vc_ParamLimits

0x7198,	// (0x000158cb) form_field_popup_pane_vc

0x71af,	// (0x000158e2) form_field_popup_wide_pane_vc_ParamLimits

0x71af,	// (0x000158e2) form_field_popup_wide_pane_vc

0x71c5,	// (0x000158f8) form_field_slider_pane_vc_ParamLimits

0x71c5,	// (0x000158f8) form_field_slider_pane_vc

0x71d8,	// (0x0001590b) form_field_slider_wide_pane_vc_ParamLimits

0x71d8,	// (0x0001590b) form_field_slider_wide_pane_vc

0x71eb,	// (0x0001591e) grid_touch_1_pane_ParamLimits

0x71eb,	// (0x0001591e) grid_touch_1_pane

0x71f7,	// (0x0001592a) grid_touch_2_pane_ParamLimits

0x71f7,	// (0x0001592a) grid_touch_2_pane

0x43c8,	// (0x00012afb) touch_pane_g1_ParamLimits

0x43c8,	// (0x00012afb) touch_pane_g1

0x720f,	// (0x00015942) cell_app_pane_cp_wide_ParamLimits

0x720f,	// (0x00015942) cell_app_pane_cp_wide

0x7220,	// (0x00015953) grid_popup_fast_wide_pane_ParamLimits

0x7220,	// (0x00015953) grid_popup_fast_wide_pane

0x7234,	// (0x00015967) scroll_pane_cp19_ParamLimits

0x7234,	// (0x00015967) scroll_pane_cp19

0x2404,	// (0x00010b37) bg_popup_window_pane_cp20

0x7248,	// (0x0001597b) listscroll_popup_fast_wide_pane

0x24e4,	// (0x00010c17) grid_indicator_nsta_pane

0x7250,	// (0x00015983) clock_nsta_pane_g1

0x7259,	// (0x0001598c) clock_nsta_pane_t1

0x7275,	// (0x000159a8) cell_indicator_nsta_pane_ParamLimits

0x7275,	// (0x000159a8) cell_indicator_nsta_pane

0x72ad,	// (0x000159e0) cell_indicator_nsta_pane_g1

0x72bb,	// (0x000159ee) cell_indicator_nsta_pane_g2

0x0001,

0xface,	// (0x0001e201) cell_indicator_nsta_pane_g

0x72d1,	// (0x00015a04) clock_nsta_pane_cp

0x72d9,	// (0x00015a0c) indicator_nsta_pane_cp

0x72e1,	// (0x00015a14) nsta_clock_indic_pane_g1

0x25c7,	// (0x00010cfa) grid_indicator_pane

0x39d0,	// (0x00012103) scroll_pane_cp29

0xda60,	// (0x0001c193) indicator_nsta_pane_cp2_ParamLimits

0xda60,	// (0x0001c193) indicator_nsta_pane_cp2

0x24e4,	// (0x00010c17) main_apps_wheel_pane

0x531f,	// (0x00013a52) form_midp_field_text_pane_ParamLimits

0x5464,	// (0x00013b97) scroll_bar_cp050_ParamLimits

0x7319,	// (0x00015a4c) cell_indicator_pane_ParamLimits

0x7319,	// (0x00015a4c) cell_indicator_pane

0x7336,	// (0x00015a69) cell_indicator_pane_g1

0x7340,	// (0x00015a73) grid_wheel_folder_pane_ParamLimits

0x7340,	// (0x00015a73) grid_wheel_folder_pane

0x7356,	// (0x00015a89) list_wheel_apps_pane_ParamLimits

0x7356,	// (0x00015a89) list_wheel_apps_pane

0x7367,	// (0x00015a9a) main_apps_wheel_pane_g1_ParamLimits

0x7367,	// (0x00015a9a) main_apps_wheel_pane_g1

0x737b,	// (0x00015aae) main_apps_wheel_pane_g2_ParamLimits

0x737b,	// (0x00015aae) main_apps_wheel_pane_g2

0x0001,

0xfadd,	// (0x0001e210) main_apps_wheel_pane_g_ParamLimits

0xfadd,	// (0x0001e210) main_apps_wheel_pane_g

0x7393,	// (0x00015ac6) main_apps_wheel_pane_t1_ParamLimits

0x7393,	// (0x00015ac6) main_apps_wheel_pane_t1

0x73b6,	// (0x00015ae9) list_wheel_apps_pane_g1

0x73be,	// (0x00015af1) list_wheel_apps_pane_g2

0x73c6,	// (0x00015af9) list_wheel_apps_pane_g3

0x73ce,	// (0x00015b01) list_wheel_apps_pane_g4

0x73d8,	// (0x00015b0b) list_wheel_apps_pane_g5

0x0004,

0xfae2,	// (0x0001e215) list_wheel_apps_pane_g

0x3f81,	// (0x000126b4) navi_icon_text_pane

0x4a3a,	// (0x0001316d) aid_fill_nsta

0x73fb,	// (0x00015b2e) navi_icon_text_pane_g1

0x740a,	// (0x00015b3d) navi_icon_text_pane_t1

0x3e1d,	// (0x00012550) list_set_graphic_pane_t1_ParamLimits

0x3e1d,	// (0x00012550) list_set_graphic_pane_t1

0x5b75,	// (0x000142a8) popup_midp_note_alarm_window_t6_ParamLimits

0x5b75,	// (0x000142a8) popup_midp_note_alarm_window_t6

0x5b87,	// (0x000142ba) popup_midp_note_alarm_window_t7_ParamLimits

0x5b87,	// (0x000142ba) popup_midp_note_alarm_window_t7

0x5b99,	// (0x000142cc) popup_midp_note_alarm_window_t8_ParamLimits

0x5b99,	// (0x000142cc) popup_midp_note_alarm_window_t8

0x5bab,	// (0x000142de) popup_midp_note_alarm_window_t9_ParamLimits

0x5bab,	// (0x000142de) popup_midp_note_alarm_window_t9

0x5bbd,	// (0x000142f0) popup_midp_note_alarm_window_t10_ParamLimits

0x5bbd,	// (0x000142f0) popup_midp_note_alarm_window_t10

0x5bcf,	// (0x00014302) popup_midp_note_alarm_window_t11_ParamLimits

0x5bcf,	// (0x00014302) popup_midp_note_alarm_window_t11

0x5be1,	// (0x00014314) scroll_pane_cp17_ParamLimits

0x5be1,	// (0x00014314) scroll_pane_cp17

0xde9a,	// (0x0001c5cd) volume_small_pane_cp_g1

0xe1e6,	// (0x0001c919) volume_small_pane_cp_g2

0xe1ef,	// (0x0001c922) volume_small_pane_cp_g3

0xe1f8,	// (0x0001c92b) volume_small_pane_cp_g4

0xe201,	// (0x0001c934) volume_small_pane_cp_g5

0xe20a,	// (0x0001c93d) volume_small_pane_cp_g6

0xe213,	// (0x0001c946) volume_small_pane_cp_g7

0xe21c,	// (0x0001c94f) volume_small_pane_cp_g8

0xe225,	// (0x0001c958) volume_small_pane_cp_g9

0xe22e,	// (0x0001c961) volume_small_pane_cp_g10

0x41e2,	// (0x00012915) midp_ticker_pane_g1_ParamLimits

0x41ee,	// (0x00012921) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001dec6) midp_ticker_pane_g_ParamLimits

0x41fa,	// (0x0001292d) midp_ticker_pane_t1_ParamLimits

0x4a50,	// (0x00013183) aid_fill_nsta_2

0x5450,	// (0x00013b83) list_form2_midp_pane

0x65a8,	// (0x00014cdb) midp_editing_number_pane_ParamLimits

0x65b7,	// (0x00014cea) midp_ticker_pane_ParamLimits

0x741f,	// (0x00015b52) form2_midp_field_pane

0x7443,	// (0x00015b76) scroll_pane_cp51

0x7463,	// (0x00015b96) form2_midp_button_pane_ParamLimits

0x7463,	// (0x00015b96) form2_midp_button_pane

0x7475,	// (0x00015ba8) form2_midp_content_pane_ParamLimits

0x7475,	// (0x00015ba8) form2_midp_content_pane

0x748f,	// (0x00015bc2) form2_midp_field_choice_group_pane

0x7497,	// (0x00015bca) form2_midp_field_pane_g1

0x749f,	// (0x00015bd2) form2_midp_field_pane_g2

0x74a7,	// (0x00015bda) form2_midp_field_pane_g3

0x74af,	// (0x00015be2) form2_midp_field_pane_g4

0x0003,

0xfb07,	// (0x0001e23a) form2_midp_field_pane_g

0x74b7,	// (0x00015bea) form2_midp_gauge_slider_pane

0x74bf,	// (0x00015bf2) form2_midp_gauge_wait_pane

0x74c7,	// (0x00015bfa) form2_midp_image_pane_ParamLimits

0x74c7,	// (0x00015bfa) form2_midp_image_pane

0x74e2,	// (0x00015c15) form2_midp_label_pane_ParamLimits

0x74e2,	// (0x00015c15) form2_midp_label_pane

0x74fb,	// (0x00015c2e) form2_midp_label_pane_cp_ParamLimits

0x74fb,	// (0x00015c2e) form2_midp_label_pane_cp

0x751c,	// (0x00015c4f) form2_midp_string_pane_ParamLimits

0x751c,	// (0x00015c4f) form2_midp_string_pane

0xcf59,	// (0x0001b68c) form2_midp_text_pane_ParamLimits

0xcf59,	// (0x0001b68c) form2_midp_text_pane

0x7547,	// (0x00015c7a) form2_midp_time_pane

0x7557,	// (0x00015c8a) input_focus_pane_cp51_ParamLimits

0x7557,	// (0x00015c8a) input_focus_pane_cp51

0x756f,	// (0x00015ca2) form2_midp_label_pane_t1_ParamLimits

0x756f,	// (0x00015ca2) form2_midp_label_pane_t1

0xcf72,	// (0x0001b6a5) form2_mdip_text_pane_t1_ParamLimits

0xcf72,	// (0x0001b6a5) form2_mdip_text_pane_t1

0xcf8f,	// (0x0001b6c2) form2_midp_time_pane_t1

0x75e6,	// (0x00015d19) form2_midp_gauge_slider_pane_t1

0x75f8,	// (0x00015d2b) form2_midp_gauge_slider_pane_t2

0x760a,	// (0x00015d3d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb10,	// (0x0001e243) form2_midp_gauge_slider_pane_t

0x761c,	// (0x00015d4f) form2_midp_slider_pane

0x7628,	// (0x00015d5b) form2_midp_gauge_wait_pane_t1

0x7636,	// (0x00015d69) form2_midp_wait_pane_ParamLimits

0x7636,	// (0x00015d69) form2_midp_wait_pane

0x7661,	// (0x00015d94) list_single_2graphic_pane_cp4_ParamLimits

0x7661,	// (0x00015d94) list_single_2graphic_pane_cp4

0x5112,	// (0x00013845) list_single_midp_graphic_pane_cp_ParamLimits

0x5112,	// (0x00013845) list_single_midp_graphic_pane_cp

0x2404,	// (0x00010b37) list_highlight_pane_cp20

0x7690,	// (0x00015dc3) list_single_2graphic_pane_g1_cp4

0x6abc,	// (0x000151ef) list_single_2graphic_pane_g2_cp4

0x7698,	// (0x00015dcb) list_single_2graphic_pane_t1_cp4

0x24e4,	// (0x00010c17) list_highlight_pane_cp21

0x76a7,	// (0x00015dda) list_single_midp_graphic_pane_g4_cp

0x76b6,	// (0x00015de9) list_single_midp_graphic_pane_t1_cp

0x76cb,	// (0x00015dfe) form2_mdip_string_pane_t1_ParamLimits

0x76cb,	// (0x00015dfe) form2_mdip_string_pane_t1

0x2404,	// (0x00010b37) bg_wml_button_pane_cp2

0x23fa,	// (0x00010b2d) form2_midp_image_pane_g1

0xc636,	// (0x0001ad69) list_double_large_graphic_pane_g5_ParamLimits

0xc636,	// (0x0001ad69) list_double_large_graphic_pane_g5

0x410b,	// (0x0001283e) midp_form_pane_ParamLimits

0x24e4,	// (0x00010c17) main_apps_wheel_pane_ParamLimits

0x482e,	// (0x00012f61) popup_preview_window_ParamLimits

0x482e,	// (0x00012f61) popup_preview_window

0x49df,	// (0x00013112) popup_touch_info_window_ParamLimits

0x49df,	// (0x00013112) popup_touch_info_window

0x49fd,	// (0x00013130) popup_touch_menu_window_ParamLimits

0x49fd,	// (0x00013130) popup_touch_menu_window

0x23f0,	// (0x00010b23) bg_popup_sub_pane_cp6

0x7805,	// (0x00015f38) list_touch_menu_pane

0x780d,	// (0x00015f40) list_single_touch_menu_pane_ParamLimits

0x780d,	// (0x00015f40) list_single_touch_menu_pane

0x7822,	// (0x00015f55) list_single_touch_menu_pane_t1

0x24e4,	// (0x00010c17) bg_popup_sub_pane_cp7_ParamLimits

0x24e4,	// (0x00010c17) bg_popup_sub_pane_cp7

0x7830,	// (0x00015f63) heading_sub_pane

0x7838,	// (0x00015f6b) list_touch_info_pane_ParamLimits

0x7838,	// (0x00015f6b) list_touch_info_pane

0x7847,	// (0x00015f7a) list_single_touch_info_pane_ParamLimits

0x7847,	// (0x00015f7a) list_single_touch_info_pane

0x7859,	// (0x00015f8c) list_single_touch_info_pane_t1

0x7867,	// (0x00015f9a) list_single_touch_info_pane_t2

0x0001,

0xfb1e,	// (0x0001e251) list_single_touch_info_pane_t

0x4103,	// (0x00012836) bg_popup_heading_pane_cp

0x7875,	// (0x00015fa8) heading_sub_pane_t1

0x5055,	// (0x00013788) bg_popup_preview_window_pane_cp_ParamLimits

0x5055,	// (0x00013788) bg_popup_preview_window_pane_cp

0x7830,	// (0x00015f63) heading_preview_pane

0x7838,	// (0x00015f6b) list_preview_pane_ParamLimits

0x7838,	// (0x00015f6b) list_preview_pane

0x7883,	// (0x00015fb6) popup_preview_window_g1

0x7847,	// (0x00015f7a) list_single_preview_pane_ParamLimits

0x7847,	// (0x00015f7a) list_single_preview_pane

0x788b,	// (0x00015fbe) list_single_preview_pane_g1

0x7893,	// (0x00015fc6) list_single_preview_pane_t1

0x7859,	// (0x00015f8c) list_single_preview_pane_t2

0x0001,

0xfb23,	// (0x0001e256) list_single_preview_pane_t

0x78a1,	// (0x00015fd4) bg_popup_heading_pane_cp2_ParamLimits

0x78a1,	// (0x00015fd4) bg_popup_heading_pane_cp2

0x78b7,	// (0x00015fea) heading_preview_pane_g1

0x78bf,	// (0x00015ff2) heading_preview_pane_t1_ParamLimits

0x78bf,	// (0x00015ff2) heading_preview_pane_t1

0x25ea,	// (0x00010d1d) soft_indicator_pane_t1_ParamLimits

0x2cc4,	// (0x000113f7) scroll_pane_ParamLimits

0x38d5,	// (0x00012008) scroll_sc2_left_pane

0x38cc,	// (0x00011fff) scroll_sc2_right_pane

0x38f4,	// (0x00012027) scroll_bg_pane_g1_ParamLimits

0x3909,	// (0x0001203c) scroll_bg_pane_g2_ParamLimits

0x3921,	// (0x00012054) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001de55) scroll_bg_pane_g_ParamLimits

0x38f4,	// (0x00012027) scroll_handle_pane_g1_ParamLimits

0x3943,	// (0x00012076) scroll_handle_pane_g2_ParamLimits

0x3921,	// (0x00012054) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001de5c) scroll_handle_pane_g_ParamLimits

0x44b9,	// (0x00012bec) popup_choice_list_window_ParamLimits

0x44b9,	// (0x00012bec) popup_choice_list_window

0x4e63,	// (0x00013596) choice_list_pane

0x4f07,	// (0x0001363a) cell_toolbar_pane_t1

0x4f2f,	// (0x00013662) toolbar_button_pane_ParamLimits

0x60a5,	// (0x000147d8) ai_gene_pane_1_t2_ParamLimits

0x60a5,	// (0x000147d8) ai_gene_pane_1_t2

0x0001,

0xf93a,	// (0x0001e06d) ai_gene_pane_1_t_ParamLimits

0xf93a,	// (0x0001e06d) ai_gene_pane_1_t

0x78dc,	// (0x0001600f) scroll_sc2_left_pane_g1

0x78dc,	// (0x0001600f) scroll_sc2_right_pane_g1

0x4489,	// (0x00012bbc) bg_popup_sub_pane_cp10

0x78e6,	// (0x00016019) list_choice_list_pane

0x78fd,	// (0x00016030) list_single_choice_list_pane_ParamLimits

0x78fd,	// (0x00016030) list_single_choice_list_pane

0x7911,	// (0x00016044) list_single_choice_list_pane_g1

0x7919,	// (0x0001604c) list_single_choice_list_pane_t1_ParamLimits

0x7919,	// (0x0001604c) list_single_choice_list_pane_t1

0x792e,	// (0x00016061) choice_list_pane_g1

0x7936,	// (0x00016069) choice_list_pane_t1

0x23f0,	// (0x00010b23) input_focus_pane_cp11

0x37aa,	// (0x00011edd) title_pane_stacon_g2_ParamLimits

0x37aa,	// (0x00011edd) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001de3b) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001de3b) title_pane_stacon_g

0x4103,	// (0x00012836) cursor_press_pane

0x455f,	// (0x00012c92) popup_fep_hwr_window_ParamLimits

0x455f,	// (0x00012c92) popup_fep_hwr_window

0x45d7,	// (0x00012d0a) popup_fep_vkb_window_ParamLimits

0x45d7,	// (0x00012d0a) popup_fep_vkb_window

0x7944,	// (0x00016077) cursor_press_pane_g1

0x0002,

0xfb4c,	// (0x0001e27f) fep_vkb_side_pane_g_ParamLimits

0xe262,	// (0x0001c995) fep_hwr_candidate_pane_ParamLimits

0xe262,	// (0x0001c995) fep_hwr_candidate_pane

0xe28c,	// (0x0001c9bf) fep_hwr_side_pane_ParamLimits

0xe28c,	// (0x0001c9bf) fep_hwr_side_pane

0xe2ac,	// (0x0001c9df) fep_hwr_top_pane_ParamLimits

0xe2ac,	// (0x0001c9df) fep_hwr_top_pane

0xe2c4,	// (0x0001c9f7) fep_hwr_write_pane_ParamLimits

0xe2c4,	// (0x0001c9f7) fep_hwr_write_pane

0xfb4c,	// (0x0001e27f) fep_vkb_side_pane_g

0x795e,	// (0x00016091) fep_hwr_top_pane_g1

0x794c,	// (0x0001607f) fep_hwr_top_pane_g2

0xe2f0,	// (0x0001ca23) fep_hwr_top_pane_g3

0x0002,

0xfb28,	// (0x0001e25b) fep_hwr_top_pane_g

0xe305,	// (0x0001ca38) fep_hwr_top_text_pane

0x3a96,	// (0x000121c9) fep_hwr_top_text_pane_g1

0x79a2,	// (0x000160d5) fep_hwr_top_text_pane_t1

0xe3fb,	// (0x0001cb2e) fep_hwr_candidate_pane_g1

0x7bfc,	// (0x0001632f) fep_vkb_keypad_pane_g3_ParamLimits

0x7bfc,	// (0x0001632f) fep_vkb_keypad_pane_g3

0x7c24,	// (0x00016357) fep_vkb_keypad_pane_g4_ParamLimits

0x7c24,	// (0x00016357) fep_vkb_keypad_pane_g4

0x7c93,	// (0x000163c6) fep_vkb_bottom_pane_g2_ParamLimits

0x7c93,	// (0x000163c6) fep_vkb_bottom_pane_g2

0x0001,

0xfb53,	// (0x0001e286) fep_vkb_bottom_pane_g_ParamLimits

0xfb53,	// (0x0001e286) fep_vkb_bottom_pane_g

0x78dc,	// (0x0001600f) cell_vkb_side_pane_g2

0x0001,

0xfb5d,	// (0x0001e290) cell_vkb_side_pane_g

0x7d1e,	// (0x00016451) cell_vkb_side_pane_t1

0x7d2c,	// (0x0001645f) cell_vkb_side_pane_t1_copy1

0x78dc,	// (0x0001600f) bg_fep_vkb_candidate_pane_g2

0x7e5e,	// (0x00016591) cell_vkb_candidate_pane_ParamLimits

0x79b0,	// (0x000160e3) aid_size_cell_vkb_ParamLimits

0x79b0,	// (0x000160e3) aid_size_cell_vkb

0x7e5e,	// (0x00016591) cell_vkb_candidate_pane

0xe415,	// (0x0001cb48) bg_popup_fep_shadow_pane_g1

0x7a3e,	// (0x00016171) fep_vkb_bottom_pane_ParamLimits

0x7a3e,	// (0x00016171) fep_vkb_bottom_pane

0x7a7b,	// (0x000161ae) fep_vkb_candidate_pane_ParamLimits

0x7a7b,	// (0x000161ae) fep_vkb_candidate_pane

0x7a97,	// (0x000161ca) fep_vkb_keypad_pane_ParamLimits

0x7a97,	// (0x000161ca) fep_vkb_keypad_pane

0x7add,	// (0x00016210) fep_vkb_side_pane_ParamLimits

0x7add,	// (0x00016210) fep_vkb_side_pane

0x7b19,	// (0x0001624c) fep_vkb_top_pane_ParamLimits

0x7b19,	// (0x0001624c) fep_vkb_top_pane

0x7b55,	// (0x00016288) fep_vkb_top_pane_g1_ParamLimits

0x7b55,	// (0x00016288) fep_vkb_top_pane_g1

0x7b64,	// (0x00016297) fep_vkb_top_pane_g2_ParamLimits

0x7b64,	// (0x00016297) fep_vkb_top_pane_g2

0x7b73,	// (0x000162a6) fep_vkb_top_pane_g3_ParamLimits

0x7b73,	// (0x000162a6) fep_vkb_top_pane_g3

0x0003,

0xfb43,	// (0x0001e276) fep_vkb_top_pane_g_ParamLimits

0xfb43,	// (0x0001e276) fep_vkb_top_pane_g

0x7b91,	// (0x000162c4) fep_vkb_top_text_pane_ParamLimits

0x7b91,	// (0x000162c4) fep_vkb_top_text_pane

0x7ba2,	// (0x000162d5) fep_vkb_side_pane_g1_ParamLimits

0x7ba2,	// (0x000162d5) fep_vkb_side_pane_g1

0x7beb,	// (0x0001631e) grid_vkb_side_pane_ParamLimits

0x7beb,	// (0x0001631e) grid_vkb_side_pane

0xe41d,	// (0x0001cb50) bg_popup_fep_shadow_pane_g2

0xe426,	// (0x0001cb59) bg_popup_fep_shadow_pane_g3

0xe42e,	// (0x0001cb61) bg_popup_fep_shadow_pane_g4

0xe437,	// (0x0001cb6a) bg_popup_fep_shadow_pane_g5

0xe441,	// (0x0001cb74) bg_popup_fep_shadow_pane_g6

0xe449,	// (0x0001cb7c) bg_popup_fep_shadow_pane_g7

0x3419,	// (0x00011b4c) bg_popup_fep_shadow_pane_g8

0x7c42,	// (0x00016375) grid_vkb_keypad_number_pane_ParamLimits

0x7c42,	// (0x00016375) grid_vkb_keypad_number_pane

0x7c52,	// (0x00016385) grid_vkb_keypad_pane_ParamLimits

0x7c52,	// (0x00016385) grid_vkb_keypad_pane

0x7c78,	// (0x000163ab) fep_vkb_bottom_pane_g1_ParamLimits

0x7c78,	// (0x000163ab) fep_vkb_bottom_pane_g1

0x7ca1,	// (0x000163d4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7ca1,	// (0x000163d4) grid_vkb_keypad_bottom_left_pane

0x7cb6,	// (0x000163e9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7cb6,	// (0x000163e9) grid_vkb_keypad_bottom_right_pane

0x7ccb,	// (0x000163fe) fep_vkb_top_text_pane_g1

0x7ce6,	// (0x00016419) fep_vkb_top_text_pane_t1

0x7cfb,	// (0x0001642e) cell_vkb_side_pane_ParamLimits

0x7cfb,	// (0x0001642e) cell_vkb_side_pane

0x78dc,	// (0x0001600f) cell_vkb_side_pane_g1

0x7d3a,	// (0x0001646d) cell_vkb_keypad_pane_ParamLimits

0x7d3a,	// (0x0001646d) cell_vkb_keypad_pane

0x7db5,	// (0x000164e8) cell_vkb_keypad_pane_g1

0x0008,

0xfb70,	// (0x0001e2a3) bg_popup_fep_shadow_pane_g

0x78dc,	// (0x0001600f) cell_hwr_side_pane_g1

0x78dc,	// (0x0001600f) cell_hwr_side_pane_g2

0x7dbf,	// (0x000164f2) cell_vkb_keypad_pane_t1

0x7dcd,	// (0x00016500) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x7dcd,	// (0x00016500) cell_vkb_keypad_bottom_left_pane

0x7dea,	// (0x0001651d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x7dea,	// (0x0001651d) cell_vkb_keypad_bottom_right_pane

0x78dc,	// (0x0001600f) cell_vkb_keypad_bottom_left_pane_g1

0x78dc,	// (0x0001600f) cell_vkb_keypad_bottom_right_pane_g1

0x7e23,	// (0x00016556) cell_vkb_keypad_number_pane_ParamLimits

0x7e23,	// (0x00016556) cell_vkb_keypad_number_pane

0x7e42,	// (0x00016575) cell_vkb_keypad_number_pane_g1

0x7e4c,	// (0x0001657f) cell_vkb_keypad_number_pane_g2

0x7e55,	// (0x00016588) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb62,	// (0x0001e295) cell_vkb_keypad_number_pane_g

0x7dbf,	// (0x000164f2) cell_vkb_keypad_number_pane_t1

0x7e7b,	// (0x000165ae) fep_vkb_candidate_pane_g1

0x0001,

0xfb5d,	// (0x0001e290) cell_hwr_side_pane_g

0x7e94,	// (0x000165c7) cell_hwr_side_pane_t1

0xe45b,	// (0x0001cb8e) cell_hwr_side_pane_t1_copy1

0x7b83,	// (0x000162b6) cell_hwr_candidate_pane_g1

0xe469,	// (0x0001cb9c) cell_hwr_candidate_pane_t1

0x78dc,	// (0x0001600f) cell_vkb_candidate_pane_g2

0x7ed8,	// (0x0001660b) cell_vkb_candidate_pane_t1

0x7970,	// (0x000160a3) bg_popup_fep_shadow_pane_ParamLimits

0x7970,	// (0x000160a3) bg_popup_fep_shadow_pane

0xad76,	// (0x000194a9) bg_fep_hwr_top_pane_g4

0x797e,	// (0x000160b1) bg_hwr_side_pane_g1_ParamLimits

0x797e,	// (0x000160b1) bg_hwr_side_pane_g1

0xe341,	// (0x0001ca74) cell_hwr_side_pane_ParamLimits

0xe341,	// (0x0001ca74) cell_hwr_side_pane

0xe37c,	// (0x0001caaf) fep_hwr_write_pane_g1_ParamLimits

0xe37c,	// (0x0001caaf) fep_hwr_write_pane_g1

0xe389,	// (0x0001cabc) fep_hwr_write_pane_g2_ParamLimits

0xe389,	// (0x0001cabc) fep_hwr_write_pane_g2

0xe396,	// (0x0001cac9) fep_hwr_write_pane_g3_ParamLimits

0xe396,	// (0x0001cac9) fep_hwr_write_pane_g3

0xe3a4,	// (0x0001cad7) fep_hwr_write_pane_g4_ParamLimits

0xe3a4,	// (0x0001cad7) fep_hwr_write_pane_g4

0x0005,

0xfb2f,	// (0x0001e262) fep_hwr_write_pane_g_ParamLimits

0xfb2f,	// (0x0001e262) fep_hwr_write_pane_g

0xad76,	// (0x000194a9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xad76,	// (0x000194a9) bg_fep_hwr_candidate_pane_g2

0xe3b9,	// (0x0001caec) cell_hwr_candidate_pane_ParamLimits

0xe3b9,	// (0x0001caec) cell_hwr_candidate_pane

0xe3fb,	// (0x0001cb2e) fep_hwr_candidate_pane_g1_ParamLimits

0x79de,	// (0x00016111) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x79de,	// (0x00016111) bg_popup_fep_shadow_pane_cp2

0x7b83,	// (0x000162b6) fep_vkb_top_pane_g4_ParamLimits

0x7b83,	// (0x000162b6) fep_vkb_top_pane_g4

0x7bc9,	// (0x000162fc) fep_vkb_side_pane_g2_ParamLimits

0x7bc9,	// (0x000162fc) fep_vkb_side_pane_g2

0xc76a,	// (0x0001ae9d) list_setting_pane_t4_ParamLimits

0xc76a,	// (0x0001ae9d) list_setting_pane_t4

0xc7fc,	// (0x0001af2f) list_setting_number_pane_t5_ParamLimits

0xc7fc,	// (0x0001af2f) list_setting_number_pane_t5

0x3ad8,	// (0x0001220b) list_double_heading_pane_cp2_ParamLimits

0x3ad8,	// (0x0001220b) list_double_heading_pane_cp2

0x32e3,	// (0x00011a16) list_double_heading_pane_g1_cp2_ParamLimits

0x32e3,	// (0x00011a16) list_double_heading_pane_g1_cp2

0x32ef,	// (0x00011a22) list_double_heading_pane_g2_cp2_ParamLimits

0x32ef,	// (0x00011a22) list_double_heading_pane_g2_cp2

0x7ee6,	// (0x00016619) list_double_heading_pane_t1_cp2_ParamLimits

0x7ee6,	// (0x00016619) list_double_heading_pane_t1_cp2

0x7efc,	// (0x0001662f) list_double_heading_pane_t2_cp2_ParamLimits

0x7efc,	// (0x0001662f) list_double_heading_pane_t2_cp2

0x23d8,	// (0x00010b0b) aid_value_unit2

0xd602,	// (0x0001bd35) popup_preview_fixed_window

0x2787,	// (0x00010eba) bg_popup_preview_window_pane_cp02

0x7f0e,	// (0x00016641) list_preview_fixed_pane

0x7f54,	// (0x00016687) list_empty_pane_fp_ParamLimits

0x7f54,	// (0x00016687) list_empty_pane_fp

0x7f54,	// (0x00016687) list_single_cale_day_pane_fp_ParamLimits

0x7f54,	// (0x00016687) list_single_cale_day_pane_fp

0x7f54,	// (0x00016687) list_single_graphic_heading_pane_fp_ParamLimits

0x7f54,	// (0x00016687) list_single_graphic_heading_pane_fp

0x7f54,	// (0x00016687) list_single_graphic_pane_fp_ParamLimits

0x7f54,	// (0x00016687) list_single_graphic_pane_fp

0x7f54,	// (0x00016687) list_single_heading_pane_fp_ParamLimits

0x7f54,	// (0x00016687) list_single_heading_pane_fp

0x7f54,	// (0x00016687) list_single_pane_fp_ParamLimits

0x7f54,	// (0x00016687) list_single_pane_fp

0x7f6b,	// (0x0001669e) list_single_pane_fp_g1_ParamLimits

0x7f6b,	// (0x0001669e) list_single_pane_fp_g1

0xc5ce,	// (0x0001ad01) list_single_pane_fp_g2_ParamLimits

0xc5ce,	// (0x0001ad01) list_single_pane_fp_g2

0xcfa2,	// (0x0001b6d5) list_single_pane_fp_g3_ParamLimits

0xcfa2,	// (0x0001b6d5) list_single_pane_fp_g3

0x7f77,	// (0x000166aa) list_single_pane_fp_g4_ParamLimits

0x7f77,	// (0x000166aa) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x0001e2c4) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x0001e2c4) list_single_pane_fp_g

0xcfb6,	// (0x0001b6e9) list_single_pane_fp_t1_ParamLimits

0xcfb6,	// (0x0001b6e9) list_single_pane_fp_t1

0xcfcd,	// (0x0001b700) list_single_graphic_pane_fp_g1_ParamLimits

0xcfcd,	// (0x0001b700) list_single_graphic_pane_fp_g1

0x7f6b,	// (0x0001669e) list_single_graphic_pane_fp_g2_ParamLimits

0x7f6b,	// (0x0001669e) list_single_graphic_pane_fp_g2

0xc5ce,	// (0x0001ad01) list_single_graphic_pane_fp_g3_ParamLimits

0xc5ce,	// (0x0001ad01) list_single_graphic_pane_fp_g3

0xcfa2,	// (0x0001b6d5) list_single_graphic_pane_fp_g4_ParamLimits

0xcfa2,	// (0x0001b6d5) list_single_graphic_pane_fp_g4

0x7f77,	// (0x000166aa) list_single_graphic_pane_fp_g5_ParamLimits

0x7f77,	// (0x000166aa) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001e2cd) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001e2cd) list_single_graphic_pane_fp_g

0xcfd9,	// (0x0001b70c) list_single_graphic_pane_fp_t1_ParamLimits

0xcfd9,	// (0x0001b70c) list_single_graphic_pane_fp_t1

0xcfcd,	// (0x0001b700) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xcfcd,	// (0x0001b700) list_single_graphic_heading_pane_fp_g1

0x7f6b,	// (0x0001669e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7f6b,	// (0x0001669e) list_single_graphic_heading_pane_fp_g2

0xc5ce,	// (0x0001ad01) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc5ce,	// (0x0001ad01) list_single_graphic_heading_pane_fp_g3

0xcfa2,	// (0x0001b6d5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xcfa2,	// (0x0001b6d5) list_single_graphic_heading_pane_fp_g4

0x7f77,	// (0x000166aa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7f77,	// (0x000166aa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001e2cd) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001e2cd) list_single_graphic_heading_pane_fp_g

0xcfef,	// (0x0001b722) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xcfef,	// (0x0001b722) list_single_graphic_heading_pane_fp_t1

0xd005,	// (0x0001b738) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd005,	// (0x0001b738) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0001e2d8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0001e2d8) list_single_graphic_heading_pane_fp_t

0xd017,	// (0x0001b74a) list_single_cale_day_pane_fp_g1_ParamLimits

0xd017,	// (0x0001b74a) list_single_cale_day_pane_fp_g1

0x801c,	// (0x0001674f) list_single_cale_day_pane_fp_g2_ParamLimits

0x801c,	// (0x0001674f) list_single_cale_day_pane_fp_g2

0xd04f,	// (0x0001b782) list_single_cale_day_pane_fp_g3_ParamLimits

0xd04f,	// (0x0001b782) list_single_cale_day_pane_fp_g3

0xd077,	// (0x0001b7aa) list_single_cale_day_pane_fp_g4_ParamLimits

0xd077,	// (0x0001b7aa) list_single_cale_day_pane_fp_g4

0xd09b,	// (0x0001b7ce) list_single_cale_day_pane_fp_g5_ParamLimits

0xd09b,	// (0x0001b7ce) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x0001e2dd) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x0001e2dd) list_single_cale_day_pane_fp_g

0xd0bf,	// (0x0001b7f2) list_single_cale_day_pane_fp_t1_ParamLimits

0xd0bf,	// (0x0001b7f2) list_single_cale_day_pane_fp_t1

0xd0e5,	// (0x0001b818) list_single_cale_day_pane_fp_t2_ParamLimits

0xd0e5,	// (0x0001b818) list_single_cale_day_pane_fp_t2

0xd0fe,	// (0x0001b831) list_single_cale_day_pane_fp_t3_ParamLimits

0xd0fe,	// (0x0001b831) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x0001e2e8) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x0001e2e8) list_single_cale_day_pane_fp_t

0x7f6b,	// (0x0001669e) list_empty_pane_fp_g1_ParamLimits

0x7f6b,	// (0x0001669e) list_empty_pane_fp_g1

0xd117,	// (0x0001b84a) list_empty_pane_fp_t1

0xd125,	// (0x0001b858) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001e2ef) list_empty_pane_fp_t

0x7f6b,	// (0x0001669e) list_single_heading_pane_fp_g1_ParamLimits

0x7f6b,	// (0x0001669e) list_single_heading_pane_fp_g1

0xc5ce,	// (0x0001ad01) list_single_heading_pane_fp_g2_ParamLimits

0xc5ce,	// (0x0001ad01) list_single_heading_pane_fp_g2

0xcfa2,	// (0x0001b6d5) list_single_heading_pane_fp_g3_ParamLimits

0xcfa2,	// (0x0001b6d5) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x0001e2f4) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x0001e2f4) list_single_heading_pane_fp_g

0xd133,	// (0x0001b866) list_single_heading_pane_fp_t1_ParamLimits

0xd133,	// (0x0001b866) list_single_heading_pane_fp_t1

0xd145,	// (0x0001b878) list_single_heading_pane_fp_t2_ParamLimits

0xd145,	// (0x0001b878) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x0001e2fb) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x0001e2fb) list_single_heading_pane_fp_t

0x3641,	// (0x00011d74) aid_size_cell_fast

0x26f7,	// (0x00010e2a) soft_indicator_pane_cp1_t1

0x367e,	// (0x00011db1) cell_app_pane_cp2_ParamLimits

0x367e,	// (0x00011db1) cell_app_pane_cp2

0xe24b,	// (0x0001c97e) fep_hwr_candidate_drop_down_list_pane

0xadfd,	// (0x00019530) fep_hwr_candidate_pane_g3_ParamLimits

0xadfd,	// (0x00019530) fep_hwr_candidate_pane_g3

0xae0a,	// (0x0001953d) fep_hwr_candidate_pane_g4_ParamLimits

0xae0a,	// (0x0001953d) fep_hwr_candidate_pane_g4

0x0002,

0xfb3c,	// (0x0001e26f) fep_hwr_candidate_pane_g_ParamLimits

0xfb3c,	// (0x0001e26f) fep_hwr_candidate_pane_g

0x7a6a,	// (0x0001619d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7a6a,	// (0x0001619d) fep_vkb_candidate_drop_down_list_pane

0x7e83,	// (0x000165b6) fep_vkb_candidate_pane_g3

0x7e8b,	// (0x000165be) fep_vkb_candidate_pane_g4

0x0002,

0xfb69,	// (0x0001e29c) fep_vkb_candidate_pane_g

0x7b83,	// (0x000162b6) cell_hwr_candidate_pane_g1_ParamLimits

0x8134,	// (0x00016867) cell_hwr_candidate_pane_g3_ParamLimits

0x8134,	// (0x00016867) cell_hwr_candidate_pane_g3

0x8155,	// (0x00016888) cell_hwr_candidate_pane_g4_ParamLimits

0x8155,	// (0x00016888) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x0001e2b6) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x0001e2b6) cell_hwr_candidate_pane_g

0x7ea2,	// (0x000165d5) cell_vkb_candidate_pane_g3_ParamLimits

0x7ea2,	// (0x000165d5) cell_vkb_candidate_pane_g3

0x7ebd,	// (0x000165f0) cell_vkb_candidate_pane_g4_ParamLimits

0x7ebd,	// (0x000165f0) cell_vkb_candidate_pane_g4

0x8176,	// (0x000168a9) cell_app_pane_cp2_g1_ParamLimits

0x8176,	// (0x000168a9) cell_app_pane_cp2_g1

0x8194,	// (0x000168c7) cell_app_pane_cp2_g2_ParamLimits

0x8194,	// (0x000168c7) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x0001e300) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x0001e300) cell_app_pane_cp2_g

0x81a0,	// (0x000168d3) cell_app_pane_cp2_t1_ParamLimits

0x81a0,	// (0x000168d3) cell_app_pane_cp2_t1

0x32bd,	// (0x000119f0) grid_highlight_pane_cp1_ParamLimits

0x32bd,	// (0x000119f0) grid_highlight_pane_cp1

0xe487,	// (0x0001cbba) cell_hwr_candidate_pane_cp1_ParamLimits

0xe487,	// (0x0001cbba) cell_hwr_candidate_pane_cp1

0x7b83,	// (0x000162b6) fep_hwr_candidate_drop_down_list_pane_g1

0x81d2,	// (0x00016905) fep_hwr_candidate_drop_down_list_pane_g2

0x81df,	// (0x00016912) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0001e305) fep_hwr_candidate_drop_down_list_pane_g

0xe4a6,	// (0x0001cbd9) fep_hwr_candidate_drop_down_list_scroll_pane

0xe4af,	// (0x0001cbe2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe4af,	// (0x0001cbe2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe4bc,	// (0x0001cbef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe4bc,	// (0x0001cbef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe4c9,	// (0x0001cbfc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe4c9,	// (0x0001cbfc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7ea2,	// (0x000165d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ea2,	// (0x000165d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7ebd,	// (0x000165f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ebd,	// (0x000165f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe4d6,	// (0x0001cc09) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe4d6,	// (0x0001cc09) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe4f1,	// (0x0001cc24) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe4f1,	// (0x0001cc24) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8260,	// (0x00016993) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8260,	// (0x00016993) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0001e30c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0001e30c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x81b2,	// (0x000168e5) cell_vkb_candidate_pane_cp1_ParamLimits

0x81b2,	// (0x000168e5) cell_vkb_candidate_pane_cp1

0x7b83,	// (0x000162b6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7b83,	// (0x000162b6) fep_vkb_candidate_drop_down_list_pane_g1

0x81d2,	// (0x00016905) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x81d2,	// (0x00016905) fep_vkb_candidate_drop_down_list_pane_g2

0x81df,	// (0x00016912) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x81df,	// (0x00016912) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0001e305) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd2,	// (0x0001e305) fep_vkb_candidate_drop_down_list_pane_g

0x81ec,	// (0x0001691f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x81ec,	// (0x0001691f) fep_vkb_candidate_drop_down_list_scroll_pane

0x81f9,	// (0x0001692c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x81f9,	// (0x0001692c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8206,	// (0x00016939) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8206,	// (0x00016939) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8212,	// (0x00016945) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8212,	// (0x00016945) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8134,	// (0x00016867) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8134,	// (0x00016867) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8155,	// (0x00016888) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8155,	// (0x00016888) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x821e,	// (0x00016951) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x821e,	// (0x00016951) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x823f,	// (0x00016972) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x823f,	// (0x00016972) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8260,	// (0x00016993) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8260,	// (0x00016993) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x0001e31d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x0001e31d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x240e,	// (0x00010b41) title_pane_g1_ParamLimits

0x241b,	// (0x00010b4e) title_pane_g2_ParamLimits

0xf592,	// (0x0001dcc5) title_pane_g_ParamLimits

0x3a8e,	// (0x000121c1) aid_call2_pane

0x3a86,	// (0x000121b9) aid_call_pane

0x3a96,	// (0x000121c9) popup_clock_analogue_window_g1

0x3a96,	// (0x000121c9) popup_clock_analogue_window_g2

0xd961,	// (0x0001c094) popup_clock_analogue_window_g3

0xd96a,	// (0x0001c09d) popup_clock_analogue_window_g4

0x23fa,	// (0x00010b2d) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001de6a) popup_clock_analogue_window_g

0xd972,	// (0x0001c0a5) popup_clock_analogue_window_t1

0xd980,	// (0x0001c0b3) clock_digital_number_pane_ParamLimits

0xd980,	// (0x0001c0b3) clock_digital_number_pane

0xd98c,	// (0x0001c0bf) clock_digital_number_pane_cp02_ParamLimits

0xd98c,	// (0x0001c0bf) clock_digital_number_pane_cp02

0xd998,	// (0x0001c0cb) clock_digital_number_pane_cp03_ParamLimits

0xd998,	// (0x0001c0cb) clock_digital_number_pane_cp03

0xd9a4,	// (0x0001c0d7) clock_digital_number_pane_cp04_ParamLimits

0xd9a4,	// (0x0001c0d7) clock_digital_number_pane_cp04

0xd9b0,	// (0x0001c0e3) clock_digital_separator_pane_ParamLimits

0xd9b0,	// (0x0001c0e3) clock_digital_separator_pane

0xd9bc,	// (0x0001c0ef) popup_clock_digital_window_t1_ParamLimits

0xd9bc,	// (0x0001c0ef) popup_clock_digital_window_t1

0x23fa,	// (0x00010b2d) clock_digital_number_pane_g1

0x23fa,	// (0x00010b2d) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001de75) clock_digital_number_pane_g

0x23fa,	// (0x00010b2d) clock_digital_separator_pane_g1

0x23fa,	// (0x00010b2d) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001de75) clock_digital_separator_pane_g

0x4a3a,	// (0x0001316d) aid_fill_nsta_ParamLimits

0x4b80,	// (0x000132b3) indicator_nsta_pane_ParamLimits

0x4cf2,	// (0x00013425) popup_clock_analogue_window

0x4cf2,	// (0x00013425) popup_clock_digital_window

0x24e4,	// (0x00010c17) grid_indicator_nsta_pane_ParamLimits

0x7267,	// (0x0001599a) clock_nsta_pane_t2

0x0001,

0xfac9,	// (0x0001e1fc) clock_nsta_pane_t

0xd925,	// (0x0001c058) aid_size_max_handle

0xd92f,	// (0x0001c062) aid_size_min_handle

0x4103,	// (0x00012836) editor_scroll_pane

0x827b,	// (0x000169ae) ex_editor_pane

0x35b0,	// (0x00011ce3) scroll_pane_cp13

0x2cf0,	// (0x00011423) scroll_pane_cp14

0x3ac0,	// (0x000121f3) scroll_pane_cp36

0x3aea,	// (0x0001221d) list_single_graphic_hl_pane_cp2_ParamLimits

0x3aea,	// (0x0001221d) list_single_graphic_hl_pane_cp2

0x667c,	// (0x00014daf) list_single_graphic_hl_pane_ParamLimits

0x667c,	// (0x00014daf) list_single_graphic_hl_pane

0xd15b,	// (0x0001b88e) aid_size_min_hl_cp1

0x828c,	// (0x000169bf) list_highlight_pane_cp34_ParamLimits

0x828c,	// (0x000169bf) list_highlight_pane_cp34

0x829d,	// (0x000169d0) list_single_graphic_hl_pane_g1_ParamLimits

0x829d,	// (0x000169d0) list_single_graphic_hl_pane_g1

0xd164,	// (0x0001b897) list_single_graphic_hl_pane_g2_ParamLimits

0xd164,	// (0x0001b897) list_single_graphic_hl_pane_g2

0xd164,	// (0x0001b897) list_single_graphic_hl_pane_g3_ParamLimits

0xd164,	// (0x0001b897) list_single_graphic_hl_pane_g3

0xd170,	// (0x0001b8a3) list_single_graphic_hl_pane_g4_ParamLimits

0xd170,	// (0x0001b8a3) list_single_graphic_hl_pane_g4

0xd17c,	// (0x0001b8af) list_single_graphic_hl_pane_g5_ParamLimits

0xd17c,	// (0x0001b8af) list_single_graphic_hl_pane_g5

0x0004,

0xfbfb,	// (0x0001e32e) list_single_graphic_hl_pane_g_ParamLimits

0xfbfb,	// (0x0001e32e) list_single_graphic_hl_pane_g

0xd190,	// (0x0001b8c3) list_single_graphic_hl_pane_t1_ParamLimits

0xd190,	// (0x0001b8c3) list_single_graphic_hl_pane_t1

0x82ca,	// (0x000169fd) aid_size_min_hl_cp2

0x82d3,	// (0x00016a06) list_highlight_pane_cp34_cp2_ParamLimits

0x82d3,	// (0x00016a06) list_highlight_pane_cp34_cp2

0x829d,	// (0x000169d0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x829d,	// (0x000169d0) list_single_graphic_hl_pane_g1_cp2

0x82e0,	// (0x00016a13) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x82e0,	// (0x00016a13) list_single_graphic_hl_pane_g2_cp2

0x82ec,	// (0x00016a1f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x82ec,	// (0x00016a1f) list_single_graphic_hl_pane_g3_cp2

0x403a,	// (0x0001276d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x403a,	// (0x0001276d) list_single_graphic_hl_pane_g4_cp2

0x82b6,	// (0x000169e9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x82b6,	// (0x000169e9) list_single_graphic_hl_pane_g5_cp2

0xdc6e,	// (0x0001c3a1) control_pane_g4_ParamLimits

0xdc6e,	// (0x0001c3a1) control_pane_g4

0x4489,	// (0x00012bbc) bg_popup_sub_pane_cp10_ParamLimits

0x78e6,	// (0x00016019) list_choice_list_pane_ParamLimits

0x78f5,	// (0x00016028) scroll_pane_cp23

0x2787,	// (0x00010eba) bg_popup_preview_window_pane_cp02_ParamLimits

0x7f0e,	// (0x00016641) list_preview_fixed_pane_ParamLimits

0x7f24,	// (0x00016657) list_preview_fixed_pane_cp_ParamLimits

0x7f24,	// (0x00016657) list_preview_fixed_pane_cp

0x7f30,	// (0x00016663) popup_preview_fixed_window_g1_ParamLimits

0x7f30,	// (0x00016663) popup_preview_fixed_window_g1

0x7f3c,	// (0x0001666f) popup_preview_fixed_window_g2_ParamLimits

0x7f3c,	// (0x0001666f) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x0001e2bd) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x0001e2bd) popup_preview_fixed_window_g

0xd899,	// (0x0001bfcc) aid_navi_side_left_pane_ParamLimits

0xd8ae,	// (0x0001bfe1) aid_navi_side_right_pane_ParamLimits

0xd8c6,	// (0x0001bff9) navi_icon_pane_stacon_ParamLimits

0xd8da,	// (0x0001c00d) navi_navi_pane_stacon_ParamLimits

0xd8c6,	// (0x0001bff9) navi_text_pane_stacon_ParamLimits

0x23f0,	// (0x00010b23) main_text_info_pane

0x8310,	// (0x00016a43) listscroll_text_info_pane

0x8318,	// (0x00016a4b) list_text_info_pane_ParamLimits

0x8318,	// (0x00016a4b) list_text_info_pane

0x8327,	// (0x00016a5a) scroll_pane_cp24_ParamLimits

0x8327,	// (0x00016a5a) scroll_pane_cp24

0x8345,	// (0x00016a78) list_text_info_pane_t1_ParamLimits

0x8345,	// (0x00016a78) list_text_info_pane_t1

0x44d3,	// (0x00012c06) popup_fast_swap2_window_ParamLimits

0x44d3,	// (0x00012c06) popup_fast_swap2_window

0x837e,	// (0x00016ab1) aid_size_cell_fast2

0x23f0,	// (0x00010b23) bg_popup_window_pane_cp17

0x547c,	// (0x00013baf) heading_pane_cp2

0x29c7,	// (0x000110fa) listscroll_fast2_pane

0x8388,	// (0x00016abb) grid_fast2_pane

0x8392,	// (0x00016ac5) listscroll_fast2_pane_g1

0x839a,	// (0x00016acd) listscroll_fast2_pane_g2

0x0001,

0xfc06,	// (0x0001e339) listscroll_fast2_pane_g

0x35b0,	// (0x00011ce3) scroll_pane_cp26

0x83a4,	// (0x00016ad7) cell_fast2_pane_ParamLimits

0x83a4,	// (0x00016ad7) cell_fast2_pane

0x83b9,	// (0x00016aec) cell_fast2_pane_g1

0x83c2,	// (0x00016af5) cell_fast2_pane_g2

0x83cb,	// (0x00016afe) cell_fast2_pane_g3

0x0002,

0xfc0b,	// (0x0001e33e) cell_fast2_pane_g

0x2aad,	// (0x000111e0) grid_highlight_pane_cp9

0x2ac2,	// (0x000111f5) main_eswt_pane_ParamLimits

0x2ac2,	// (0x000111f5) main_eswt_pane

0x833c,	// (0x00016a6f) list_single_text_info_pane

0x83d3,	// (0x00016b06) eswt_ctrl_button_pane

0x83d3,	// (0x00016b06) eswt_ctrl_canvas_pane

0x83db,	// (0x00016b0e) eswt_ctrl_combo_pane

0x83d3,	// (0x00016b06) eswt_ctrl_default_pane

0x83d3,	// (0x00016b06) eswt_ctrl_label_pane

0x83e3,	// (0x00016b16) eswt_ctrl_wait_pane

0x83eb,	// (0x00016b1e) eswt_shell_pane

0x23f0,	// (0x00010b23) listscroll_eswt_app_pane

0x840b,	// (0x00016b3e) popup_eswt_tasktip_window_ParamLimits

0x840b,	// (0x00016b3e) popup_eswt_tasktip_window

0x5055,	// (0x00013788) bg_popup_window_pane_cp18

0x841c,	// (0x00016b4f) eswt_control_pane_g1_ParamLimits

0x841c,	// (0x00016b4f) eswt_control_pane_g1

0x8429,	// (0x00016b5c) eswt_control_pane_g2_ParamLimits

0x8429,	// (0x00016b5c) eswt_control_pane_g2

0x8436,	// (0x00016b69) eswt_control_pane_g3_ParamLimits

0x8436,	// (0x00016b69) eswt_control_pane_g3

0x8443,	// (0x00016b76) eswt_control_pane_g4_ParamLimits

0x8443,	// (0x00016b76) eswt_control_pane_g4

0x0003,

0xfc12,	// (0x0001e345) eswt_control_pane_g_ParamLimits

0xfc12,	// (0x0001e345) eswt_control_pane_g

0x32bd,	// (0x000119f0) bg_button_pane_ParamLimits

0x32bd,	// (0x000119f0) bg_button_pane

0x2ac2,	// (0x000111f5) common_borders_pane_copy2_ParamLimits

0x2ac2,	// (0x000111f5) common_borders_pane_copy2

0x8450,	// (0x00016b83) control_button_pane_g1_ParamLimits

0x8450,	// (0x00016b83) control_button_pane_g1

0x845c,	// (0x00016b8f) control_button_pane_g2_ParamLimits

0x845c,	// (0x00016b8f) control_button_pane_g2

0x8468,	// (0x00016b9b) control_button_pane_g3_ParamLimits

0x8468,	// (0x00016b9b) control_button_pane_g3

0x0002,

0xfc1b,	// (0x0001e34e) control_button_pane_g_ParamLimits

0xfc1b,	// (0x0001e34e) control_button_pane_g

0x847c,	// (0x00016baf) control_button_pane_t1

0x848a,	// (0x00016bbd) control_button_pane_t2

0x0001,

0xfc22,	// (0x0001e355) control_button_pane_t

0x4f3b,	// (0x0001366e) bg_button_pane_g1

0x4f4b,	// (0x0001367e) bg_button_pane_g2

0x4f43,	// (0x00013676) bg_button_pane_g3

0x4f5b,	// (0x0001368e) bg_button_pane_g4

0x4f53,	// (0x00013686) bg_button_pane_g5

0x4f63,	// (0x00013696) bg_button_pane_g6

0x4f6b,	// (0x0001369e) bg_button_pane_g7

0x4f7b,	// (0x000136ae) bg_button_pane_g8

0x4f73,	// (0x000136a6) bg_button_pane_g9

0x0008,

0xf88e,	// (0x0001dfc1) bg_button_pane_g

0x78a1,	// (0x00015fd4) common_borders_pane_ParamLimits

0x78a1,	// (0x00015fd4) common_borders_pane

0x841c,	// (0x00016b4f) eswt_control_pane_g1_copy1_ParamLimits

0x841c,	// (0x00016b4f) eswt_control_pane_g1_copy1

0x8429,	// (0x00016b5c) eswt_control_pane_g2_copy1_ParamLimits

0x8429,	// (0x00016b5c) eswt_control_pane_g2_copy1

0x8436,	// (0x00016b69) eswt_control_pane_g3_copy1_ParamLimits

0x8436,	// (0x00016b69) eswt_control_pane_g3_copy1

0x8443,	// (0x00016b76) eswt_control_pane_g4_copy1_ParamLimits

0x8443,	// (0x00016b76) eswt_control_pane_g4_copy1

0x78dc,	// (0x0001600f) bg_eswt_ctrl_canvas_pane_g1

0x78a1,	// (0x00015fd4) common_borders_pane_cp2_ParamLimits

0x78a1,	// (0x00015fd4) common_borders_pane_cp2

0x78a1,	// (0x00015fd4) common_borders_pane_cp3_ParamLimits

0x78a1,	// (0x00015fd4) common_borders_pane_cp3

0x8498,	// (0x00016bcb) separator_horizontal_pane

0x84a0,	// (0x00016bd3) separator_vertical_pane

0x841c,	// (0x00016b4f) eswt_control_pane_g1_copy2_ParamLimits

0x841c,	// (0x00016b4f) eswt_control_pane_g1_copy2

0x8429,	// (0x00016b5c) eswt_control_pane_g2_copy2_ParamLimits

0x8429,	// (0x00016b5c) eswt_control_pane_g2_copy2

0x8436,	// (0x00016b69) eswt_control_pane_g3_copy2_ParamLimits

0x8436,	// (0x00016b69) eswt_control_pane_g3_copy2

0x8443,	// (0x00016b76) eswt_control_pane_g4_copy2_ParamLimits

0x8443,	// (0x00016b76) eswt_control_pane_g4_copy2

0x23f0,	// (0x00010b23) common_borders_pane_cp4

0x84a9,	// (0x00016bdc) separator_horizontal_pane_g1

0x84b2,	// (0x00016be5) separator_horizontal_pane_g2

0x84bb,	// (0x00016bee) separator_horizontal_pane_g3

0x0002,

0xfc27,	// (0x0001e35a) separator_horizontal_pane_g

0x841c,	// (0x00016b4f) eswt_control_pane_g1_copy3_ParamLimits

0x841c,	// (0x00016b4f) eswt_control_pane_g1_copy3

0x8429,	// (0x00016b5c) eswt_control_pane_g2_copy3_ParamLimits

0x8429,	// (0x00016b5c) eswt_control_pane_g2_copy3

0x8436,	// (0x00016b69) eswt_control_pane_g3_copy3_ParamLimits

0x8436,	// (0x00016b69) eswt_control_pane_g3_copy3

0x8443,	// (0x00016b76) eswt_control_pane_g4_copy3_ParamLimits

0x8443,	// (0x00016b76) eswt_control_pane_g4_copy3

0x23f0,	// (0x00010b23) common_borders_pane_cp5

0x84c4,	// (0x00016bf7) separator_vertical_pane_g1

0x84cd,	// (0x00016c00) separator_vertical_pane_g2

0x84d6,	// (0x00016c09) separator_vertical_pane_g3

0x0002,

0xfc2e,	// (0x0001e361) separator_vertical_pane_g

0x841c,	// (0x00016b4f) eswt_control_pane_g1_copy4_ParamLimits

0x841c,	// (0x00016b4f) eswt_control_pane_g1_copy4

0x8429,	// (0x00016b5c) eswt_control_pane_g2_copy4_ParamLimits

0x8429,	// (0x00016b5c) eswt_control_pane_g2_copy4

0x8436,	// (0x00016b69) eswt_control_pane_g3_copy4_ParamLimits

0x8436,	// (0x00016b69) eswt_control_pane_g3_copy4

0x8443,	// (0x00016b76) eswt_control_pane_g4_copy4_ParamLimits

0x8443,	// (0x00016b76) eswt_control_pane_g4_copy4

0x84df,	// (0x00016c12) eswt_ctrl_combo_button_pane

0x84e7,	// (0x00016c1a) eswt_ctrl_input_pane

0x84ef,	// (0x00016c22) popup_choice_list_window_cp70

0x84f7,	// (0x00016c2a) eswt_ctrl_input_pane_t1

0x23f0,	// (0x00010b23) input_focus_pane_cp70

0x78a1,	// (0x00015fd4) bg_button_pane_cp70_ParamLimits

0x78a1,	// (0x00015fd4) bg_button_pane_cp70

0x8505,	// (0x00016c38) eswt_ctrl_combo_button_pane_g1

0x850d,	// (0x00016c40) wait_bar_pane_cp70

0x5055,	// (0x00013788) bg_popup_window_pane_cp70_ParamLimits

0x5055,	// (0x00013788) bg_popup_window_pane_cp70

0x8515,	// (0x00016c48) popup_eswt_tasktip_window_t1

0x852b,	// (0x00016c5e) wait_bar_pane_cp71_ParamLimits

0x852b,	// (0x00016c5e) wait_bar_pane_cp71

0x8537,	// (0x00016c6a) grid_eswt_app_pane

0x38cc,	// (0x00011fff) scroll_pane_cp70

0x8540,	// (0x00016c73) cell_eswt_app_pane_ParamLimits

0x8540,	// (0x00016c73) cell_eswt_app_pane

0x8574,	// (0x00016ca7) cell_eswt_app_pane_g1_ParamLimits

0x8574,	// (0x00016ca7) cell_eswt_app_pane_g1

0x85a3,	// (0x00016cd6) cell_eswt_app_pane_g2_ParamLimits

0x85a3,	// (0x00016cd6) cell_eswt_app_pane_g2

0x0001,

0xfc35,	// (0x0001e368) cell_eswt_app_pane_g_ParamLimits

0xfc35,	// (0x0001e368) cell_eswt_app_pane_g

0x85cc,	// (0x00016cff) cell_eswt_app_pane_t1_ParamLimits

0x85cc,	// (0x00016cff) cell_eswt_app_pane_t1

0x85fe,	// (0x00016d31) grid_highlight_pane_cp70_ParamLimits

0x85fe,	// (0x00016d31) grid_highlight_pane_cp70

0x3fd6,	// (0x00012709) set_content_pane_g1

0x43ab,	// (0x00012ade) status_small_volume_pane

0xe50c,	// (0x0001cc3f) status_small_volume_pane_g1

0xe514,	// (0x0001cc47) volume_small2_pane

0xe51d,	// (0x0001cc50) volume_small2_pane_g1

0xe526,	// (0x0001cc59) volume_small2_pane_g2

0xe52f,	// (0x0001cc62) volume_small2_pane_g3

0xe538,	// (0x0001cc6b) volume_small2_pane_g4

0xe541,	// (0x0001cc74) volume_small2_pane_g5

0xe54a,	// (0x0001cc7d) volume_small2_pane_g6

0xe553,	// (0x0001cc86) volume_small2_pane_g7

0xe55c,	// (0x0001cc8f) volume_small2_pane_g8

0xe565,	// (0x0001cc98) volume_small2_pane_g9

0xe56e,	// (0x0001cca1) volume_small2_pane_g10

0x0009,

0xfc3a,	// (0x0001e36d) volume_small2_pane_g

0x7ccb,	// (0x000163fe) fep_vkb_top_text_pane_g1_ParamLimits

0x7ce6,	// (0x00016419) fep_vkb_top_text_pane_t1_ParamLimits

0x7f48,	// (0x0001667b) popup_preview_fixed_window_g3_ParamLimits

0x7f48,	// (0x0001667b) popup_preview_fixed_window_g3

0x4972,	// (0x000130a5) popup_toolbar_trans_pane

0x63e5,	// (0x00014b18) aid_height_set_list_ParamLimits

0x63f6,	// (0x00014b29) aid_size_parent_ParamLimits

0x4489,	// (0x00012bbc) list_highlight_pane_cp2_ParamLimits

0x3fd6,	// (0x00012709) set_content_pane_g1_ParamLimits

0xcd0a,	// (0x0001b43d) list_single_image_pane_ParamLimits

0xcd0a,	// (0x0001b43d) list_single_image_pane

0x860a,	// (0x00016d3d) aid_size_cell_image_ParamLimits

0x860a,	// (0x00016d3d) aid_size_cell_image

0x8617,	// (0x00016d4a) grid_single_image_pane_ParamLimits

0x8617,	// (0x00016d4a) grid_single_image_pane

0x32e3,	// (0x00011a16) list_single_image_pane_g1_ParamLimits

0x32e3,	// (0x00011a16) list_single_image_pane_g1

0x32ef,	// (0x00011a22) list_single_image_pane_g2_ParamLimits

0x32ef,	// (0x00011a22) list_single_image_pane_g2

0x0001,

0xfc4f,	// (0x0001e382) list_single_image_pane_g_ParamLimits

0xfc4f,	// (0x0001e382) list_single_image_pane_g

0x8623,	// (0x00016d56) list_single_image_pane_t1_ParamLimits

0x8623,	// (0x00016d56) list_single_image_pane_t1

0x8639,	// (0x00016d6c) cell_image_list_pane_ParamLimits

0x8639,	// (0x00016d6c) cell_image_list_pane

0x864d,	// (0x00016d80) cell_image_list_pane_g1

0x8656,	// (0x00016d89) cell_image_list_pane_g2

0x0001,

0xfc54,	// (0x0001e387) cell_image_list_pane_g

0x865f,	// (0x00016d92) aid_size_cell_tb_trans_pane

0x32bd,	// (0x000119f0) bg_tb_trans_pane

0x8671,	// (0x00016da4) grid_tb_trans_pane

0x4f3b,	// (0x0001366e) bg_tb_trans_pane_g1

0x4f4b,	// (0x0001367e) bg_tb_trans_pane_g2

0x4f43,	// (0x00013676) bg_tb_trans_pane_g3

0x4f5b,	// (0x0001368e) bg_tb_trans_pane_g4

0x4f53,	// (0x00013686) bg_tb_trans_pane_g5

0x4f7b,	// (0x000136ae) bg_tb_trans_pane_g6

0x4f73,	// (0x000136a6) bg_tb_trans_pane_g7

0x4f63,	// (0x00013696) bg_tb_trans_pane_g8

0x4f6b,	// (0x0001369e) bg_tb_trans_pane_g9

0x0008,

0xfc59,	// (0x0001e38c) bg_tb_trans_pane_g

0x8685,	// (0x00016db8) cell_toolbar_trans_pane_ParamLimits

0x8685,	// (0x00016db8) cell_toolbar_trans_pane

0x78dc,	// (0x0001600f) cell_toolbar_trans_pane_g1

0x7427,	// (0x00015b5a) list_form2_midp_pane_t1

0x7435,	// (0x00015b68) list_form2_midp_pane_t2

0x0001,

0xfb02,	// (0x0001e235) list_form2_midp_pane_t

0x7443,	// (0x00015b76) scroll_pane_cp51_ParamLimits

0x7646,	// (0x00015d79) form2_midp_wait_pane_g1

0x764f,	// (0x00015d82) form2_midp_wait_pane_g2

0x7658,	// (0x00015d8b) form2_midp_wait_pane_g3

0x0002,

0xfb17,	// (0x0001e24a) form2_midp_wait_pane_g

0x24e4,	// (0x00010c17) list_highlight_pane_cp21_ParamLimits

0x76a7,	// (0x00015dda) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x76b6,	// (0x00015de9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xcc96,	// (0x0001b3c9) list_single_2graphic_im_pane_ParamLimits

0xcc96,	// (0x0001b3c9) list_single_2graphic_im_pane

0x86ab,	// (0x00016dde) list_single_2graphic_im_pane_g1_ParamLimits

0x86ab,	// (0x00016dde) list_single_2graphic_im_pane_g1

0x86bc,	// (0x00016def) list_single_2graphic_im_pane_g2_ParamLimits

0x86bc,	// (0x00016def) list_single_2graphic_im_pane_g2

0x86c8,	// (0x00016dfb) list_single_2graphic_im_pane_g3_ParamLimits

0x86c8,	// (0x00016dfb) list_single_2graphic_im_pane_g3

0x0003,

0xfc6c,	// (0x0001e39f) list_single_2graphic_im_pane_g_ParamLimits

0xfc6c,	// (0x0001e39f) list_single_2graphic_im_pane_g

0x86e8,	// (0x00016e1b) list_single_2graphic_im_pane_t1_ParamLimits

0x86e8,	// (0x00016e1b) list_single_2graphic_im_pane_t1

0x7f54,	// (0x00016687) list_single_graphic_2heading_pane_fp_ParamLimits

0x7f54,	// (0x00016687) list_single_graphic_2heading_pane_fp

0xcfcd,	// (0x0001b700) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xcfcd,	// (0x0001b700) list_single_graphic_2heading_pane_fp_g1

0x7f6b,	// (0x0001669e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7f6b,	// (0x0001669e) list_single_graphic_2heading_pane_fp_g2

0xc5ce,	// (0x0001ad01) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc5ce,	// (0x0001ad01) list_single_graphic_2heading_pane_fp_g3

0xcfa2,	// (0x0001b6d5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xcfa2,	// (0x0001b6d5) list_single_graphic_2heading_pane_fp_g4

0x7f77,	// (0x000166aa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7f77,	// (0x000166aa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001e2cd) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001e2cd) list_single_graphic_2heading_pane_fp_g

0xd1a6,	// (0x0001b8d9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd1a6,	// (0x0001b8d9) list_single_graphic_2heading_pane_fp_t1

0xd005,	// (0x0001b738) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd005,	// (0x0001b738) list_single_graphic_2heading_pane_fp_t2

0xd1bc,	// (0x0001b8ef) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd1bc,	// (0x0001b8ef) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc75,	// (0x0001e3a8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc75,	// (0x0001e3a8) list_single_graphic_2heading_pane_fp_t

0x798a,	// (0x000160bd) fep_hwr_write_pane_g5_ParamLimits

0x798a,	// (0x000160bd) fep_hwr_write_pane_g5

0x7996,	// (0x000160c9) fep_hwr_write_pane_g6_ParamLimits

0x7996,	// (0x000160c9) fep_hwr_write_pane_g6

0x83eb,	// (0x00016b1e) eswt_shell_pane_ParamLimits

0x5055,	// (0x00013788) bg_popup_window_pane_cp18_ParamLimits

0x631c,	// (0x00014a4f) heading_pane_cp70

0x8515,	// (0x00016c48) popup_eswt_tasktip_window_t1_ParamLimits

0x4a8f,	// (0x000131c2) aid_touch_tab_arrow_left

0x4a9e,	// (0x000131d1) aid_touch_tab_arrow_right

0x242c,	// (0x00010b5f) title_pane_g3_ParamLimits

0x242c,	// (0x00010b5f) title_pane_g3

0x31aa,	// (0x000118dd) set_value_pane_g1

0x4972,	// (0x000130a5) popup_toolbar_trans_pane_ParamLimits

0x865f,	// (0x00016d92) aid_size_cell_tb_trans_pane_ParamLimits

0x32bd,	// (0x000119f0) bg_tb_trans_pane_ParamLimits

0x8671,	// (0x00016da4) grid_tb_trans_pane_ParamLimits

0x2787,	// (0x00010eba) cont_note_pane_ParamLimits

0x2787,	// (0x00010eba) cont_note_pane

0x2ac2,	// (0x000111f5) cont_snote2_single_text_pane_ParamLimits

0x2ac2,	// (0x000111f5) cont_snote2_single_text_pane

0x2ac2,	// (0x000111f5) cont_snote2_single_graphic_pane_ParamLimits

0x2ac2,	// (0x000111f5) cont_snote2_single_graphic_pane

0x5661,	// (0x00013d94) cont_note_wait_pane_ParamLimits

0x5661,	// (0x00013d94) cont_note_wait_pane

0x5661,	// (0x00013d94) cont_note_image_pane_ParamLimits

0x5661,	// (0x00013d94) cont_note_image_pane

0x8745,	// (0x00016e78) popup_note2_window_g1_ParamLimits

0x8745,	// (0x00016e78) popup_note2_window_g1

0x8776,	// (0x00016ea9) popup_note2_window_t1_ParamLimits

0x8776,	// (0x00016ea9) popup_note2_window_t1

0x87bb,	// (0x00016eee) popup_note2_window_t2_ParamLimits

0x87bb,	// (0x00016eee) popup_note2_window_t2

0x8800,	// (0x00016f33) popup_note2_window_t3_ParamLimits

0x8800,	// (0x00016f33) popup_note2_window_t3

0x8845,	// (0x00016f78) popup_note2_window_t4_ParamLimits

0x8845,	// (0x00016f78) popup_note2_window_t4

0x27ff,	// (0x00010f32) popup_note2_window_t5_ParamLimits

0x27ff,	// (0x00010f32) popup_note2_window_t5

0x0004,

0xfc81,	// (0x0001e3b4) popup_note2_window_t_ParamLimits

0xfc81,	// (0x0001e3b4) popup_note2_window_t

0x8874,	// (0x00016fa7) popup_note2_image_window_g1_ParamLimits

0x8874,	// (0x00016fa7) popup_note2_image_window_g1

0x8880,	// (0x00016fb3) popup_note2_image_window_g2_ParamLimits

0x8880,	// (0x00016fb3) popup_note2_image_window_g2

0x0001,

0xfc8c,	// (0x0001e3bf) popup_note2_image_window_g_ParamLimits

0xfc8c,	// (0x0001e3bf) popup_note2_image_window_g

0x8892,	// (0x00016fc5) popup_note2_image_window_t1_ParamLimits

0x8892,	// (0x00016fc5) popup_note2_image_window_t1

0x88aa,	// (0x00016fdd) popup_note2_image_window_t2_ParamLimits

0x88aa,	// (0x00016fdd) popup_note2_image_window_t2

0x88c2,	// (0x00016ff5) popup_note2_image_window_t3_ParamLimits

0x88c2,	// (0x00016ff5) popup_note2_image_window_t3

0x0002,

0xfc91,	// (0x0001e3c4) popup_note2_image_window_t_ParamLimits

0xfc91,	// (0x0001e3c4) popup_note2_image_window_t

0x566f,	// (0x00013da2) popup_note2_wait_window_g1_ParamLimits

0x566f,	// (0x00013da2) popup_note2_wait_window_g1

0x567b,	// (0x00013dae) popup_note2_wait_window_g2_ParamLimits

0x567b,	// (0x00013dae) popup_note2_wait_window_g2

0x5687,	// (0x00013dba) popup_note2_wait_window_g3_ParamLimits

0x5687,	// (0x00013dba) popup_note2_wait_window_g3

0x0002,

0xf870,	// (0x0001dfa3) popup_note2_wait_window_g_ParamLimits

0xf870,	// (0x0001dfa3) popup_note2_wait_window_g

0x88de,	// (0x00017011) popup_note2_wait_window_t1_ParamLimits

0x88de,	// (0x00017011) popup_note2_wait_window_t1

0x88fc,	// (0x0001702f) popup_note2_wait_window_t2_ParamLimits

0x88fc,	// (0x0001702f) popup_note2_wait_window_t2

0x891a,	// (0x0001704d) popup_note2_wait_window_t3_ParamLimits

0x891a,	// (0x0001704d) popup_note2_wait_window_t3

0x892c,	// (0x0001705f) popup_note2_wait_window_t4_ParamLimits

0x892c,	// (0x0001705f) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x0001e3cb) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x0001e3cb) popup_note2_wait_window_t

0x893e,	// (0x00017071) wait_bar2_pane_ParamLimits

0x893e,	// (0x00017071) wait_bar2_pane

0x8956,	// (0x00017089) popup_snote2_single_text_window_g1_ParamLimits

0x8956,	// (0x00017089) popup_snote2_single_text_window_g1

0x897e,	// (0x000170b1) popup_snote2_single_text_window_t1_ParamLimits

0x897e,	// (0x000170b1) popup_snote2_single_text_window_t1

0x89ca,	// (0x000170fd) popup_snote2_single_text_window_t2_ParamLimits

0x89ca,	// (0x000170fd) popup_snote2_single_text_window_t2

0x8a16,	// (0x00017149) popup_snote2_single_text_window_t3_ParamLimits

0x8a16,	// (0x00017149) popup_snote2_single_text_window_t3

0x8a57,	// (0x0001718a) popup_snote2_single_text_window_t4_ParamLimits

0x8a57,	// (0x0001718a) popup_snote2_single_text_window_t4

0x8a8d,	// (0x000171c0) popup_snote2_single_text_window_t5_ParamLimits

0x8a8d,	// (0x000171c0) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x0001e3d4) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x0001e3d4) popup_snote2_single_text_window_t

0x8ab8,	// (0x000171eb) popup_snote2_single_graphic_window_g1_ParamLimits

0x8ab8,	// (0x000171eb) popup_snote2_single_graphic_window_g1

0x8ae0,	// (0x00017213) popup_snote2_single_graphic_window_g2_ParamLimits

0x8ae0,	// (0x00017213) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x0001e3df) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x0001e3df) popup_snote2_single_graphic_window_g

0x8b08,	// (0x0001723b) popup_snote2_single_graphic_window_t1_ParamLimits

0x8b08,	// (0x0001723b) popup_snote2_single_graphic_window_t1

0x8b54,	// (0x00017287) popup_snote2_single_graphic_window_t2_ParamLimits

0x8b54,	// (0x00017287) popup_snote2_single_graphic_window_t2

0x8a16,	// (0x00017149) popup_snote2_single_graphic_window_t3_ParamLimits

0x8a16,	// (0x00017149) popup_snote2_single_graphic_window_t3

0x8a57,	// (0x0001718a) popup_snote2_single_graphic_window_t4_ParamLimits

0x8a57,	// (0x0001718a) popup_snote2_single_graphic_window_t4

0x8a8d,	// (0x000171c0) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a8d,	// (0x000171c0) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x0001e3e4) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x0001e3e4) popup_snote2_single_graphic_window_t

0x72f8,	// (0x00015a2b) clock_nsta_pane_cp2_t1

0x72f8,	// (0x00015a2b) clock_nsta_pane_cp2_t2

0x0001,

0xfad8,	// (0x0001e20b) clock_nsta_pane_cp2_t

0xc901,	// (0x0001b034) form_field_data_wide_pane_g1_ParamLimits

0x32e3,	// (0x00011a16) form_field_data_wide_pane_g2_ParamLimits

0x32e3,	// (0x00011a16) form_field_data_wide_pane_g2

0x32ef,	// (0x00011a22) form_field_data_wide_pane_g3_ParamLimits

0x32ef,	// (0x00011a22) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001dded) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001dded) form_field_data_wide_pane_g

0x7203,	// (0x00015936) grid_touch_3_pane_ParamLimits

0x7203,	// (0x00015936) grid_touch_3_pane

0x8ba0,	// (0x000172d3) cell_touch_3_pane_ParamLimits

0x8ba0,	// (0x000172d3) cell_touch_3_pane

0x78dc,	// (0x0001600f) cell_touch_3_pane_g1

0x78dc,	// (0x0001600f) cell_touch_3_pane_g2

0x0001,

0xfb5d,	// (0x0001e290) cell_touch_3_pane_g

0x2831,	// (0x00010f64) cont_query_data_pane

0x2839,	// (0x00010f6c) cont_query_data_pane_cp1

0x8bcf,	// (0x00017302) button_value_adjust_pane_cp7

0x8bd7,	// (0x0001730a) query_popup_pane_cp3

0x3b57,	// (0x0001228a) bg_popup_sub_pane_cp22_ParamLimits

0xd9db,	// (0x0001c10e) navi_navi_volume_pane_cp2

0xd9f6,	// (0x0001c129) popup_side_volume_key_window_g2

0xda05,	// (0x0001c138) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001de7f) popup_side_volume_key_window_g

0xda22,	// (0x0001c155) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001de86) popup_side_volume_key_window_t

0x3ea0,	// (0x000125d3) popup_side_volume_key_window_ParamLimits

0xc59a,	// (0x0001accd) list_double_graphic_pane_g4_ParamLimits

0xc59a,	// (0x0001accd) list_double_graphic_pane_g4

0xcce3,	// (0x0001b416) list_single_2heading_msg_pane_ParamLimits

0xcce3,	// (0x0001b416) list_single_2heading_msg_pane

0xd1dc,	// (0x0001b90f) list_single_2heading_msg_pane_g1_ParamLimits

0xd1dc,	// (0x0001b90f) list_single_2heading_msg_pane_g1

0xc3eb,	// (0x0001ab1e) list_single_2heading_msg_pane_g2_ParamLimits

0xc3eb,	// (0x0001ab1e) list_single_2heading_msg_pane_g2

0xcdc9,	// (0x0001b4fc) list_single_2heading_msg_pane_g3_ParamLimits

0xcdc9,	// (0x0001b4fc) list_single_2heading_msg_pane_g3

0xd1e8,	// (0x0001b91b) list_single_2heading_msg_pane_g4_ParamLimits

0xd1e8,	// (0x0001b91b) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x0001e3ef) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x0001e3ef) list_single_2heading_msg_pane_g

0xd200,	// (0x0001b933) list_single_2heading_msg_pane_t1_ParamLimits

0xd200,	// (0x0001b933) list_single_2heading_msg_pane_t1

0xd228,	// (0x0001b95b) list_single_2heading_msg_pane_t2_ParamLimits

0xd228,	// (0x0001b95b) list_single_2heading_msg_pane_t2

0xd25c,	// (0x0001b98f) list_single_2heading_msg_pane_t3_ParamLimits

0xd25c,	// (0x0001b98f) list_single_2heading_msg_pane_t3

0xd295,	// (0x0001b9c8) list_single_2heading_msg_pane_t4_ParamLimits

0xd295,	// (0x0001b9c8) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x0001e3f8) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x0001e3f8) list_single_2heading_msg_pane_t

0x2438,	// (0x00010b6b) title_pane_g4_ParamLimits

0x2438,	// (0x00010b6b) title_pane_g4

0xd7e9,	// (0x0001bf1c) title_pane_stacon_g3_ParamLimits

0xd7e9,	// (0x0001bf1c) title_pane_stacon_g3

0x86dc,	// (0x00016e0f) list_single_2graphic_im_pane_g4_ParamLimits

0x86dc,	// (0x00016e0f) list_single_2graphic_im_pane_g4

0x60c2,	// (0x000147f5) popup_side_volume_key_window_cp

0x69d1,	// (0x00015104) main_idle_act2_pane_t1

0xdd9c,	// (0x0001c4cf) toolbar_button_pane_g10

0x2cba,	// (0x000113ed) popup_toolbar_window_cp1

0x72e9,	// (0x00015a1c) clock_nsta_pane_cp_t1

0x72e9,	// (0x00015a1c) clock_nsta_pane_cp_t2

0x0001,

0xfad3,	// (0x0001e206) clock_nsta_pane_cp_t

0xd9db,	// (0x0001c10e) navi_navi_volume_pane_cp2_ParamLimits

0xd9ea,	// (0x0001c11d) popup_side_volume_key_window_g1_ParamLimits

0xd9f6,	// (0x0001c129) popup_side_volume_key_window_g2_ParamLimits

0xda05,	// (0x0001c138) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001de7f) popup_side_volume_key_window_g_ParamLimits

0xe237,	// (0x0001c96a) fep_hwr_aid_pane

0xad76,	// (0x000194a9) bg_fep_hwr_top_pane_g4_ParamLimits

0x795e,	// (0x00016091) fep_hwr_top_pane_g1_ParamLimits

0x794c,	// (0x0001607f) fep_hwr_top_pane_g2_ParamLimits

0xe2f0,	// (0x0001ca23) fep_hwr_top_pane_g3_ParamLimits

0xfb28,	// (0x0001e25b) fep_hwr_top_pane_g_ParamLimits

0xe305,	// (0x0001ca38) fep_hwr_top_text_pane_ParamLimits

0x5e8c,	// (0x000145bf) aid_touch_tab_arrow_arrow_2

0x5e83,	// (0x000145b6) aid_touch_tab_arrow_left_2

0xe24b,	// (0x0001c97e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe282,	// (0x0001c9b5) fep_hwr_prediction_pane

0x7ad3,	// (0x00016206) fep_vkb_prediction_pane

0x7bd7,	// (0x0001630a) fep_vkb_side_pane_g3_ParamLimits

0x7bd7,	// (0x0001630a) fep_vkb_side_pane_g3

0x7b83,	// (0x000162b6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x81d2,	// (0x00016905) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x81df,	// (0x00016912) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x0001e305) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8cf0,	// (0x00017423) fep_hwr_prediction_pane_g1

0xe577,	// (0x0001ccaa) fep_hwr_prediction_pane_g2

0xe57f,	// (0x0001ccb2) fep_hwr_prediction_pane_g3

0xe587,	// (0x0001ccba) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x0001e401) fep_hwr_prediction_pane_g

0x8cf0,	// (0x00017423) fep_vkb_prediction_pane_g1

0x8cfa,	// (0x0001742d) fep_vkb_prediction_pane_g2

0x8d02,	// (0x00017435) fep_vkb_prediction_pane_g3

0x8d0a,	// (0x0001743d) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x0001e40a) fep_vkb_prediction_pane_g

0xe074,	// (0x0001c7a7) slider_set_pane_g3

0xe088,	// (0x0001c7bb) slider_set_pane_g4

0xe0a0,	// (0x0001c7d3) slider_set_pane_g5

0xe074,	// (0x0001c7a7) slider_set_pane_g6

0xe0b6,	// (0x0001c7e9) slider_set_pane_g7

0x6553,	// (0x00014c86) slider_form_pane_g3

0x655c,	// (0x00014c8f) slider_form_pane_g4

0x6564,	// (0x00014c97) slider_form_pane_g5

0x6553,	// (0x00014c86) slider_form_pane_g6

0x656c,	// (0x00014c9f) slider_form_pane_g7

0x6ca5,	// (0x000153d8) slider_set_pane_vc_g3

0x6cae,	// (0x000153e1) slider_set_pane_vc_g4

0x6cb7,	// (0x000153ea) slider_set_pane_vc_g5

0x6ca5,	// (0x000153d8) slider_set_pane_vc_g6

0x6cc0,	// (0x000153f3) slider_set_pane_vc_g7

0x6ca5,	// (0x000153d8) slider_form_pane_vc_g1

0x6cae,	// (0x000153e1) slider_form_pane_vc_g2

0x6cb7,	// (0x000153ea) slider_form_pane_vc_g3

0x6ca5,	// (0x000153d8) slider_form_pane_vc_g4

0x7021,	// (0x00015754) slider_form_pane_vc_g5

0x0004,

0xfab9,	// (0x0001e1ec) slider_form_pane_vc_g

0x23f0,	// (0x00010b23) main_idle_act3_pane

0x8d12,	// (0x00017445) ai3_links_pane

0x8d1b,	// (0x0001744e) popup_ai3_data_window_ParamLimits

0x8d1b,	// (0x0001744e) popup_ai3_data_window

0x23f0,	// (0x00010b23) grid_ai3_links_pane

0x8d33,	// (0x00017466) cell_ai3_links_pane_ParamLimits

0x8d33,	// (0x00017466) cell_ai3_links_pane

0x8d4b,	// (0x0001747e) bg_popup_sub_pane_cp11

0x8d58,	// (0x0001748b) cell_ai3_links_pane_g1

0x23f0,	// (0x00010b23) bg_popup_sub_pane_cp12

0x8d7d,	// (0x000174b0) heading_ai3_data_pane

0x8d85,	// (0x000174b8) list_ai3_gene_pane

0x8d91,	// (0x000174c4) popup_ai3_data_window_g1

0x8d99,	// (0x000174cc) heading_ai3_data_pane_g1

0x8da1,	// (0x000174d4) heading_ai3_data_pane_t1

0x8daf,	// (0x000174e2) list_double_ai3_gene_pane_ParamLimits

0x8daf,	// (0x000174e2) list_double_ai3_gene_pane

0x8dbc,	// (0x000174ef) list_single_ai3_gene_pane_ParamLimits

0x8dbc,	// (0x000174ef) list_single_ai3_gene_pane

0x78a1,	// (0x00015fd4) list_highlight_pane_cp7_ParamLimits

0x78a1,	// (0x00015fd4) list_highlight_pane_cp7

0x8dc9,	// (0x000174fc) list_single_a13_gene_pane_t1_ParamLimits

0x8dc9,	// (0x000174fc) list_single_a13_gene_pane_t1

0x8de0,	// (0x00017513) list_single_ai3_gene_pane_g1

0x8de9,	// (0x0001751c) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x0001e413) list_single_ai3_gene_pane_g

0x8df1,	// (0x00017524) list_double_ai3_gene_pane_g1_ParamLimits

0x8df1,	// (0x00017524) list_double_ai3_gene_pane_g1

0x8dfd,	// (0x00017530) list_double_ai3_gene_pane_t1_ParamLimits

0x8dfd,	// (0x00017530) list_double_ai3_gene_pane_t1

0x8e19,	// (0x0001754c) list_double_ai3_gene_pane_t2_ParamLimits

0x8e19,	// (0x0001754c) list_double_ai3_gene_pane_t2

0x8e2e,	// (0x00017561) list_double_ai3_gene_pane_t3_ParamLimits

0x8e2e,	// (0x00017561) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x0001e418) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x0001e418) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd1d2,	// (0x0001b905) aid_size_min_col_2

0x8bf2,	// (0x00017325) aid_size_min_msg_ParamLimits

0x8bf2,	// (0x00017325) aid_size_min_msg

0x7cd7,	// (0x0001640a) fep_vkb_top_text_pane_g2_ParamLimits

0x7cd7,	// (0x0001640a) fep_vkb_top_text_pane_g2

0x0001,

0xfb58,	// (0x0001e28b) fep_vkb_top_text_pane_g_ParamLimits

0xfb58,	// (0x0001e28b) fep_vkb_top_text_pane_g

0x23f0,	// (0x00010b23) main_hc_apps_shell_pane

0x8e4b,	// (0x0001757e) grid_hc_apps_pane_ParamLimits

0x8e4b,	// (0x0001757e) grid_hc_apps_pane

0x8e5a,	// (0x0001758d) list_hc_apps_pane

0x8e62,	// (0x00017595) scroll_pane_cp37_ParamLimits

0x8e62,	// (0x00017595) scroll_pane_cp37

0x8e6e,	// (0x000175a1) cell_hc_apps_pane_ParamLimits

0x8e6e,	// (0x000175a1) cell_hc_apps_pane

0x8f1e,	// (0x00017651) cell_hc_apps_pane_g1_ParamLimits

0x8f1e,	// (0x00017651) cell_hc_apps_pane_g1

0x8f4f,	// (0x00017682) cell_hc_apps_pane_g2_ParamLimits

0x8f4f,	// (0x00017682) cell_hc_apps_pane_g2

0x8f6b,	// (0x0001769e) cell_hc_apps_pane_g3_ParamLimits

0x8f6b,	// (0x0001769e) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x0001e41f) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x0001e41f) cell_hc_apps_pane_g

0x8f8d,	// (0x000176c0) cell_hc_apps_pane_t1_ParamLimits

0x8f8d,	// (0x000176c0) cell_hc_apps_pane_t1

0x2787,	// (0x00010eba) grid_highlight_pane_cp10_ParamLimits

0x2787,	// (0x00010eba) grid_highlight_pane_cp10

0x8fcd,	// (0x00017700) list_single_hc_apps_pane_ParamLimits

0x8fcd,	// (0x00017700) list_single_hc_apps_pane

0x9040,	// (0x00017773) list_single_hc_apps_pane_g1

0xd2ba,	// (0x0001b9ed) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x0001e426) list_single_hc_apps_pane_g

0xd2d3,	// (0x0001ba06) list_single_hc_apps_pane_g2_copy1

0xd2ef,	// (0x0001ba22) list_single_hc_apps_pane_t1

0x24e4,	// (0x00010c17) bg_set_opt_pane_cp_ParamLimits

0xd714,	// (0x0001be47) setting_slider_pane_t1_ParamLimits

0xd72d,	// (0x0001be60) setting_slider_pane_t2_ParamLimits

0xd746,	// (0x0001be79) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001dcd5) setting_slider_pane_t_ParamLimits

0xd75d,	// (0x0001be90) slider_set_pane_ParamLimits

0xdc7a,	// (0x0001c3ad) control_pane_g5_ParamLimits

0xdc7a,	// (0x0001c3ad) control_pane_g5

0x63b0,	// (0x00014ae3) slider_set_pane_g1_ParamLimits

0xe068,	// (0x0001c79b) slider_set_pane_g2_ParamLimits

0xe074,	// (0x0001c7a7) slider_set_pane_g3_ParamLimits

0xe088,	// (0x0001c7bb) slider_set_pane_g4_ParamLimits

0xe0a0,	// (0x0001c7d3) slider_set_pane_g5_ParamLimits

0xe074,	// (0x0001c7a7) slider_set_pane_g6_ParamLimits

0xe0b6,	// (0x0001c7e9) slider_set_pane_g7_ParamLimits

0xf98c,	// (0x0001e0bf) slider_set_pane_g_ParamLimits

0x3f81,	// (0x000126b4) navi_icon_text_pane_ParamLimits

0x4a50,	// (0x00013183) aid_fill_nsta_2_ParamLimits

0x4a8f,	// (0x000131c2) aid_touch_tab_arrow_left_ParamLimits

0x4a9e,	// (0x000131d1) aid_touch_tab_arrow_right_ParamLimits

0x4b0b,	// (0x0001323e) clock_nsta_pane_ParamLimits

0x5e5f,	// (0x00014592) navi_icon_pane_g1_ParamLimits

0x5e6e,	// (0x000145a1) navi_text_pane_t1_ParamLimits

0x73fb,	// (0x00015b2e) navi_icon_text_pane_g1_ParamLimits

0x740a,	// (0x00015b3d) navi_icon_text_pane_t1_ParamLimits

0x9040,	// (0x00017773) list_single_hc_apps_pane_g1_ParamLimits

0xd2ba,	// (0x0001b9ed) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x0001e426) list_single_hc_apps_pane_g_ParamLimits

0xd2d3,	// (0x0001ba06) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd2ef,	// (0x0001ba22) list_single_hc_apps_pane_t1_ParamLimits

0xd62e,	// (0x0001bd61) popup_toolbar2_fixed_window_ParamLimits

0xd62e,	// (0x0001bd61) popup_toolbar2_fixed_window

0x4968,	// (0x0001309b) popup_toolbar2_float_window

0x23f0,	// (0x00010b23) bg_popup_sub_pane_cp27

0x90bc,	// (0x000177ef) grid_toolbar2_float_pane

0x23f0,	// (0x00010b23) bg_popup_sub_pane_cp26

0x90bc,	// (0x000177ef) grid_toolbar2_fixed_pane

0x90c4,	// (0x000177f7) cell_toolbar2_fixed_pane_ParamLimits

0x90c4,	// (0x000177f7) cell_toolbar2_fixed_pane

0x90d5,	// (0x00017808) cell_toolbar2_fixed_pane_g1

0x90de,	// (0x00017811) toolbar2_fixed_button_pane

0x4f3b,	// (0x0001366e) toolbar2_fixed_button_pane_g1

0x4f4b,	// (0x0001367e) toolbar2_fixed_button_pane_g2

0x4f43,	// (0x00013676) toolbar2_fixed_button_pane_g3

0x4f5b,	// (0x0001368e) toolbar2_fixed_button_pane_g4

0x4f53,	// (0x00013686) toolbar2_fixed_button_pane_g5

0x4f63,	// (0x00013696) toolbar2_fixed_button_pane_g6

0x4f6b,	// (0x0001369e) toolbar2_fixed_button_pane_g7

0x4f7b,	// (0x000136ae) toolbar2_fixed_button_pane_g8

0x4f73,	// (0x000136a6) toolbar2_fixed_button_pane_g9

0x0008,

0xf88e,	// (0x0001dfc1) toolbar2_fixed_button_pane_g

0x90e6,	// (0x00017819) cell_toolbar2_float_pane_ParamLimits

0x90e6,	// (0x00017819) cell_toolbar2_float_pane

0x90f7,	// (0x0001782a) cell_toolbar2_float_pane_g1

0x90de,	// (0x00017811) toolbar2_fixed_button_pane_cp

0x7a2c,	// (0x0001615f) fep_vkb_accented_list_pane_ParamLimits

0x7a2c,	// (0x0001615f) fep_vkb_accented_list_pane

0xe453,	// (0x0001cb86) bg_popup_fep_shadow_pane_g9

0x4103,	// (0x00012836) bg_popup_fep_shadow_pane_cp3

0x3597,	// (0x00011cca) list_accented_list_pane

0x9100,	// (0x00017833) list_single_accented_list_pane_ParamLimits

0x9100,	// (0x00017833) list_single_accented_list_pane

0x4103,	// (0x00012836) list_highlight_pane_cp10

0x9111,	// (0x00017844) list_single_accented_list_pane_t1

0x48b8,	// (0x00012feb) popup_slider_window_ParamLimits

0x48b8,	// (0x00012feb) popup_slider_window

0x8bdf,	// (0x00017312) aid_indentation_list_msg

0x91cb,	// (0x000178fe) bg_popup_window_pane_cp19

0x9235,	// (0x00017968) popup_slider_window_g1

0x9251,	// (0x00017984) popup_slider_window_g2

0x926d,	// (0x000179a0) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x0001e42b) popup_slider_window_g

0x92c9,	// (0x000179fc) popup_slider_window_t1

0x933d,	// (0x00017a70) small_volume_slider_vertical_pane

0x78dc,	// (0x0001600f) small_volume_slider_vertical_pane_g1

0x78dc,	// (0x0001600f) small_volume_slider_vertical_pane_g2

0x9359,	// (0x00017a8c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x0001e43d) small_volume_slider_vertical_pane_g

0xd3fe,	// (0x0001bb31) area_side_right_pane_ParamLimits

0xd3fe,	// (0x0001bb31) area_side_right_pane

0xe58f,	// (0x0001ccc2) aid_size_side_button_ParamLimits

0xe58f,	// (0x0001ccc2) aid_size_side_button

0xe5a3,	// (0x0001ccd6) grid_sctrl_middle_pane_ParamLimits

0xe5a3,	// (0x0001ccd6) grid_sctrl_middle_pane

0xe5c3,	// (0x0001ccf6) sctrl_sk_bottom_pane

0xe5d4,	// (0x0001cd07) sctrl_sk_top_pane

0xe5e6,	// (0x0001cd19) aid_touch_sctrl_top

0x2787,	// (0x00010eba) bg_sctrl_sk_pane_ParamLimits

0x2787,	// (0x00010eba) bg_sctrl_sk_pane

0xe5f3,	// (0x0001cd26) sctrl_sk_top_pane_g1

0xe600,	// (0x0001cd33) sctrl_sk_top_pane_t1

0xe5e6,	// (0x0001cd19) aid_touch_sctrl_bottom

0x2787,	// (0x00010eba) bg_sctrl_sk_pane_cp_ParamLimits

0x2787,	// (0x00010eba) bg_sctrl_sk_pane_cp

0xe61b,	// (0x0001cd4e) sctrl_sk_bottom_pane_g1

0xe600,	// (0x0001cd33) sctrl_sk_bottom_pane_t1

0xe624,	// (0x0001cd57) cell_sctrl_middle_pane_ParamLimits

0xe624,	// (0x0001cd57) cell_sctrl_middle_pane

0xe63f,	// (0x0001cd72) aid_touch_sctrl_middle_ParamLimits

0xe63f,	// (0x0001cd72) aid_touch_sctrl_middle

0x32bd,	// (0x000119f0) bg_sctrl_middle_pane_ParamLimits

0x32bd,	// (0x000119f0) bg_sctrl_middle_pane

0x7b83,	// (0x000162b6) cell_sctrl_middle_pane_g1_ParamLimits

0x7b83,	// (0x000162b6) cell_sctrl_middle_pane_g1

0xe651,	// (0x0001cd84) cell_sctrl_middle_pane_g2_ParamLimits

0xe651,	// (0x0001cd84) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x0001e449) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x0001e449) cell_sctrl_middle_pane_g

0x4f3b,	// (0x0001366e) bg_sctrl_middle_pane_g1

0x4f4b,	// (0x0001367e) bg_sctrl_middle_pane_g2

0x4f43,	// (0x00013676) bg_sctrl_middle_pane_g3

0x4f5b,	// (0x0001368e) bg_sctrl_middle_pane_g4

0x4f53,	// (0x00013686) bg_sctrl_middle_pane_g5

0x4f63,	// (0x00013696) bg_sctrl_middle_pane_g6

0x4f6b,	// (0x0001369e) bg_sctrl_middle_pane_g7

0x4f7b,	// (0x000136ae) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x0001e44e) bg_sctrl_middle_pane_g

0x4f73,	// (0x000136a6) bg_sctrl_middle_pane_g8_copy1

0x4f3b,	// (0x0001366e) bg_sctrl_sk_pane_g1

0x4f4b,	// (0x0001367e) bg_sctrl_sk_pane_g2

0x4f43,	// (0x00013676) bg_sctrl_sk_pane_g3

0x0008,

0xf88e,	// (0x0001dfc1) bg_sctrl_sk_pane_g

0x2c80,	// (0x000113b3) aid_size_touch_scroll_bar

0x4f5b,	// (0x0001368e) bg_sctrl_sk_pane_g4

0x4f53,	// (0x00013686) bg_sctrl_sk_pane_g5

0x4f63,	// (0x00013696) bg_sctrl_sk_pane_g6

0x4f6b,	// (0x0001369e) bg_sctrl_sk_pane_g7

0x4f7b,	// (0x000136ae) bg_sctrl_sk_pane_g8

0x4f73,	// (0x000136a6) bg_sctrl_sk_pane_g9

0x4531,	// (0x00012c64) popup_fep_china_hwr2_fs_candidate_window

0x453b,	// (0x00012c6e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x453b,	// (0x00012c6e) popup_fep_china_hwr2_fs_control_window

0x7b83,	// (0x000162b6) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x0001e444) sctrl_sk_top_pane_g

0x9362,	// (0x00017a95) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9362,	// (0x00017a95) aid_fep_china_hwr2_fs_cell

0x9374,	// (0x00017aa7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9374,	// (0x00017aa7) bg_popup_fep_shadow_pane_cp4

0x938b,	// (0x00017abe) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x938b,	// (0x00017abe) bg_popup_fep_shadow_pane_cp5

0x939d,	// (0x00017ad0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x939d,	// (0x00017ad0) popup_fep_china_hwr2_fs_control_bar_grid

0x93ad,	// (0x00017ae0) popup_fep_china_hwr2_fs_control_funtion_grid

0x93b5,	// (0x00017ae8) aid_fep_china_hwr2_fs_candi_cell

0x23f0,	// (0x00010b23) bg_popup_fep_shadow_pane_cp6

0x93bf,	// (0x00017af2) popup_fep_china_hwr2_fs_candidate_grid

0x93c9,	// (0x00017afc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x93c9,	// (0x00017afc) cell_fep_china_hwr2_fs_funtion_grid

0x78dc,	// (0x0001600f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x93e1,	// (0x00017b14) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x93e1,	// (0x00017b14) cell_fep_china_hwr2_fs_funtion_grid_g1

0x93ef,	// (0x00017b22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x93ef,	// (0x00017b22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x0001e45f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x0001e45f) cell_fep_china_hwr2_fs_funtion_grid_g

0x9405,	// (0x00017b38) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9405,	// (0x00017b38) cell_fep_china_hwr2_fs_funtion_grid_t1

0x941a,	// (0x00017b4d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x941a,	// (0x00017b4d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x0001e464) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x0001e464) cell_fep_china_hwr2_fs_funtion_grid_t

0x9436,	// (0x00017b69) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x943e,	// (0x00017b71) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9446,	// (0x00017b79) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x0001e469) popup_fep_china_hwr2_fs_control_bar_grid_g

0x944e,	// (0x00017b81) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x944e,	// (0x00017b81) cell_fep_china_hwr2_fs_candidate_grid

0x9467,	// (0x00017b9a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x946f,	// (0x00017ba2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x78dc,	// (0x0001600f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x78dc,	// (0x0001600f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5d,	// (0x0001e290) cell_fep_china_hwr2_fs_candidate_grid_g

0x9477,	// (0x00017baa) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4b18,	// (0x0001324b) clock_nsta_pane_cp_24_ParamLimits

0x4b18,	// (0x0001324b) clock_nsta_pane_cp_24

0x4b96,	// (0x000132c9) indicator_nsta_pane_cp_24_ParamLimits

0x4b96,	// (0x000132c9) indicator_nsta_pane_cp_24

0x5cdb,	// (0x0001440e) heading_pane_g1

0x0001,

0xf8f3,	// (0x0001e026) heading_pane_g

0x6818,	// (0x00014f4b) grid_sct_catagory_button_pane

0x684a,	// (0x00014f7d) scroll_pane_cp5_ParamLimits

0x744f,	// (0x00015b82) button_value_adjust_pane_cp5_ParamLimits

0x744f,	// (0x00015b82) button_value_adjust_pane_cp5

0x7547,	// (0x00015c7a) form2_midp_time_pane_ParamLimits

0x9485,	// (0x00017bb8) cell_sct_catagory_button_pane_ParamLimits

0x9485,	// (0x00017bb8) cell_sct_catagory_button_pane

0x78a1,	// (0x00015fd4) bg_button_pane_cp01_ParamLimits

0x78a1,	// (0x00015fd4) bg_button_pane_cp01

0x78dc,	// (0x0001600f) cell_sct_catagory_button_pane_g1

0x48f7,	// (0x0001302a) popup_tb_extension_window

0x9497,	// (0x00017bca) aid_size_cell_ext_ParamLimits

0x9497,	// (0x00017bca) aid_size_cell_ext

0x2787,	// (0x00010eba) bg_tb_trans_pane_cp1_ParamLimits

0x2787,	// (0x00010eba) bg_tb_trans_pane_cp1

0x94b7,	// (0x00017bea) grid_tb_ext_pane_ParamLimits

0x94b7,	// (0x00017bea) grid_tb_ext_pane

0x94e9,	// (0x00017c1c) cell_tb_ext_pane_ParamLimits

0x94e9,	// (0x00017c1c) cell_tb_ext_pane

0x9500,	// (0x00017c33) cell_tb_ext_pane_g1_ParamLimits

0x9500,	// (0x00017c33) cell_tb_ext_pane_g1

0x951d,	// (0x00017c50) cell_tb_ext_pane_t1

0x2787,	// (0x00010eba) list_highlight_pane_cp11_ParamLimits

0x2787,	// (0x00010eba) list_highlight_pane_cp11

0xd64d,	// (0x0001bd80) popup_uni_indicator_window_ParamLimits

0xd64d,	// (0x0001bd80) popup_uni_indicator_window

0x32bd,	// (0x000119f0) bg_popup_sub_pane_cp14

0x9538,	// (0x00017c6b) list_uniindi_pane

0x9544,	// (0x00017c77) uniindi_top_pane

0x2787,	// (0x00010eba) bg_uniindi_top_pane

0x9563,	// (0x00017c96) uniindi_top_pane_g1

0x9579,	// (0x00017cac) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x0001e470) uniindi_top_pane_g

0x95a3,	// (0x00017cd6) uniindi_top_pane_t1

0x95cd,	// (0x00017d00) list_single_uniindi_pane_ParamLimits

0x95cd,	// (0x00017d00) list_single_uniindi_pane

0x78dc,	// (0x0001600f) bg_uniindi_top_pane_g1

0x95df,	// (0x00017d12) list_single_uniindi_pane_g1

0x95f2,	// (0x00017d25) list_single_uniindi_pane_t1

0x23f0,	// (0x00010b23) control_bg_pane

0x9617,	// (0x00017d4a) bg_sctrl_sk_pane_cp1

0x9620,	// (0x00017d53) bg_sctrl_sk_pane_cp2

0x9629,	// (0x00017d5c) control_bg_pane_g1

0x9632,	// (0x00017d65) control_bg_pane_g2

0x0001,

0xfd46,	// (0x0001e479) control_bg_pane_g

0x72ad,	// (0x000159e0) cell_indicator_nsta_pane_g1_ParamLimits

0x72bb,	// (0x000159ee) cell_indicator_nsta_pane_g2_ParamLimits

0xface,	// (0x0001e201) cell_indicator_nsta_pane_g_ParamLimits

0xcf8f,	// (0x0001b6c2) form2_midp_time_pane_t1_ParamLimits

0x2ac2,	// (0x000111f5) main_idle_act4_pane_ParamLimits

0x2ac2,	// (0x000111f5) main_idle_act4_pane

0x48f7,	// (0x0001302a) popup_tb_extension_window_ParamLimits

0x94d9,	// (0x00017c0c) tb_ext_find_pane_ParamLimits

0x94d9,	// (0x00017c0c) tb_ext_find_pane

0x963b,	// (0x00017d6e) ai_gene_pane_1_cp1

0x424c,	// (0x0001297f) ai_gene_pane_2_cp1

0x9643,	// (0x00017d76) list_single_idle_plugin_calendar_pane

0x964c,	// (0x00017d7f) list_single_idle_plugin_notification_pane

0x9655,	// (0x00017d88) list_single_idle_plugin_player_pane

0x965e,	// (0x00017d91) list_single_idle_plugin_shortcut_pane_ParamLimits

0x965e,	// (0x00017d91) list_single_idle_plugin_shortcut_pane

0x9680,	// (0x00017db3) main_idle_act4_pane_t1

0x9692,	// (0x00017dc5) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x0001e47e) main_idle_act4_pane_t

0x96a4,	// (0x00017dd7) middle_sk_idle_act4_pane_ParamLimits

0x96a4,	// (0x00017dd7) middle_sk_idle_act4_pane

0x96ba,	// (0x00017ded) popup_clock_digital_analogue_window_cp2

0x96d4,	// (0x00017e07) shortcut_wheel_idle_act4_pane_ParamLimits

0x96d4,	// (0x00017e07) shortcut_wheel_idle_act4_pane

0x78dc,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g1

0x78dc,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g2

0x78dc,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g3

0x78dc,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g4

0x78dc,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g5

0x96e8,	// (0x00017e1b) shortcut_wheel_idle_act4_pane_g6

0x96f0,	// (0x00017e23) shortcut_wheel_idle_act4_pane_g7

0x96f8,	// (0x00017e2b) shortcut_wheel_idle_act4_pane_g8

0x9700,	// (0x00017e33) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x0001e483) shortcut_wheel_idle_act4_pane_g

0x7b83,	// (0x000162b6) middle_sk_idle_act4_pane_g1_ParamLimits

0x7b83,	// (0x000162b6) middle_sk_idle_act4_pane_g1

0x9764,	// (0x00017e97) middle_sk_idle_act4_pane_g2_ParamLimits

0x9764,	// (0x00017e97) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x0001e4a6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x0001e4a6) middle_sk_idle_act4_pane_g

0x9770,	// (0x00017ea3) middle_sk_idle_act4_pane_t1_ParamLimits

0x9770,	// (0x00017ea3) middle_sk_idle_act4_pane_t1

0x978d,	// (0x00017ec0) grid_ai_shortcut_pane_ParamLimits

0x978d,	// (0x00017ec0) grid_ai_shortcut_pane

0x97a6,	// (0x00017ed9) list_highlight_pane_cp16_ParamLimits

0x97a6,	// (0x00017ed9) list_highlight_pane_cp16

0x97b3,	// (0x00017ee6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x97b3,	// (0x00017ee6) list_single_idle_plugin_shortcut_pane_g1

0x97bf,	// (0x00017ef2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x97bf,	// (0x00017ef2) list_single_idle_plugin_shortcut_pane_g2

0x97d7,	// (0x00017f0a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x97d7,	// (0x00017f0a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x0001e4ab) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x0001e4ab) list_single_idle_plugin_shortcut_pane_g

0x97ea,	// (0x00017f1d) cell_ai_shortcut_pane_ParamLimits

0x97ea,	// (0x00017f1d) cell_ai_shortcut_pane

0x980b,	// (0x00017f3e) cell_ai_shortcut_pane_g1_ParamLimits

0x980b,	// (0x00017f3e) cell_ai_shortcut_pane_g1

0x963b,	// (0x00017d6e) ai_gene_pane_1_cp2

0x982d,	// (0x00017f60) ai_gene_pane_2_cp2

0x9835,	// (0x00017f68) list_highlight_pane_cp15

0x983e,	// (0x00017f71) list_single_idle_plugin_calendar_pane_g1

0x9835,	// (0x00017f68) list_highlight_pane_cp17

0x9846,	// (0x00017f79) list_single_idle_plugin_calendar_pane_g1_copy1

0x984e,	// (0x00017f81) list_single_idle_plugin_player_pane_g1

0x6a71,	// (0x000151a4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x0001e4b2) list_single_idle_plugin_player_pane_g

0x9856,	// (0x00017f89) list_single_idle_plugin_player_pane_t1

0x9864,	// (0x00017f97) list_single_idle_plugin_player_pane_t2

0x9872,	// (0x00017fa5) list_single_idle_plugin_player_pane_t3

0x9880,	// (0x00017fb3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x0001e4b7) list_single_idle_plugin_player_pane_t

0x988e,	// (0x00017fc1) wait_bar_pane_cp15

0x9896,	// (0x00017fc9) grid_ai_notification_pane

0x6a71,	// (0x000151a4) list_single_idle_plugin_notification_pane_g1

0x989f,	// (0x00017fd2) cell_ai_notification_pane_ParamLimits

0x989f,	// (0x00017fd2) cell_ai_notification_pane

0x98ac,	// (0x00017fdf) cell_ai_notification_pane_g1

0x98b4,	// (0x00017fe7) cell_ai_notification_pane_t1

0x98c2,	// (0x00017ff5) tb_ext_find_button_pane

0x98ca,	// (0x00017ffd) tb_ext_find_pane_g1

0x98d2,	// (0x00018005) tb_ext_find_pane_t1

0x3a96,	// (0x000121c9) tb_ext_find_button_pane_g1

0x98e0,	// (0x00018013) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x0001e4c0) tb_ext_find_button_pane_g

0x9680,	// (0x00017db3) main_idle_act4_pane_t1_ParamLimits

0x9692,	// (0x00017dc5) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x0001e47e) main_idle_act4_pane_t_ParamLimits

0x96ba,	// (0x00017ded) popup_clock_digital_analogue_window_cp2_ParamLimits

0x96c8,	// (0x00017dfb) sat_plugin_idle_act4_pane_ParamLimits

0x96c8,	// (0x00017dfb) sat_plugin_idle_act4_pane

0x98e9,	// (0x0001801c) sat_plugin_idle_act4_pane_t1_ParamLimits

0x98e9,	// (0x0001801c) sat_plugin_idle_act4_pane_t1

0x98fc,	// (0x0001802f) sat_plugin_idle_act4_pane_t2_ParamLimits

0x98fc,	// (0x0001802f) sat_plugin_idle_act4_pane_t2

0x990f,	// (0x00018042) sat_plugin_idle_act4_pane_t3_ParamLimits

0x990f,	// (0x00018042) sat_plugin_idle_act4_pane_t3

0x9922,	// (0x00018055) sat_plugin_idle_act4_pane_t4_ParamLimits

0x9922,	// (0x00018055) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x0001e4c5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x0001e4c5) sat_plugin_idle_act4_pane_t

0xd596,	// (0x0001bcc9) popup_battery_window_ParamLimits

0xd596,	// (0x0001bcc9) popup_battery_window

0x2787,	// (0x00010eba) bg_popup_sub_pane_cp25_ParamLimits

0x2787,	// (0x00010eba) bg_popup_sub_pane_cp25

0x9935,	// (0x00018068) popup_battery_window_g1_ParamLimits

0x9935,	// (0x00018068) popup_battery_window_g1

0x9941,	// (0x00018074) popup_battery_window_t1_ParamLimits

0x9941,	// (0x00018074) popup_battery_window_t1

0x9953,	// (0x00018086) popup_battery_window_t2_ParamLimits

0x9953,	// (0x00018086) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x0001e4ce) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x0001e4ce) popup_battery_window_t

0x4117,	// (0x0001284a) midp_canvas_pane_ParamLimits

0x418e,	// (0x000128c1) midp_keypad_pane_ParamLimits

0x418e,	// (0x000128c1) midp_keypad_pane

0x4489,	// (0x00012bbc) main_midp_pane_ParamLimits

0x7307,	// (0x00015a3a) signal_pane_g2_cp_ParamLimits

0x9970,	// (0x000180a3) aid_size_cell_midp_keypad_ParamLimits

0x9970,	// (0x000180a3) aid_size_cell_midp_keypad

0x998a,	// (0x000180bd) midp_keyp_game_grid_pane_ParamLimits

0x998a,	// (0x000180bd) midp_keyp_game_grid_pane

0x99aa,	// (0x000180dd) midp_keyp_rocker_pane_ParamLimits

0x99aa,	// (0x000180dd) midp_keyp_rocker_pane

0x99e3,	// (0x00018116) midp_keyp_sk_left_pane_ParamLimits

0x99e3,	// (0x00018116) midp_keyp_sk_left_pane

0x9a3d,	// (0x00018170) midp_keyp_sk_right_pane_ParamLimits

0x9a3d,	// (0x00018170) midp_keyp_sk_right_pane

0x23f0,	// (0x00010b23) bg_button_pane_cp03

0x9a97,	// (0x000181ca) midp_keyp_sk_left_pane_g1

0x23f0,	// (0x00010b23) bg_button_pane_cp04

0x9a97,	// (0x000181ca) midp_keyp_sk_right_pane_g1

0x78dc,	// (0x0001600f) midp_keyp_rocker_pane_g1

0x9aa0,	// (0x000181d3) keyp_game_cell_pane_ParamLimits

0x9aa0,	// (0x000181d3) keyp_game_cell_pane

0x23f0,	// (0x00010b23) bg_button_pane_cp02

0x9ab3,	// (0x000181e6) keyp_game_cell_pane_g1

0xd5cc,	// (0x0001bcff) popup_fep_vkb2_window_ParamLimits

0xd5cc,	// (0x0001bcff) popup_fep_vkb2_window

0xe673,	// (0x0001cda6) aid_size_cell_vkb2_ParamLimits

0xe673,	// (0x0001cda6) aid_size_cell_vkb2

0xe6c7,	// (0x0001cdfa) popup_fep_vkb2_window_g1_ParamLimits

0xe6c7,	// (0x0001cdfa) popup_fep_vkb2_window_g1

0xe707,	// (0x0001ce3a) vkb2_area_bottom_pane_ParamLimits

0xe707,	// (0x0001ce3a) vkb2_area_bottom_pane

0xe753,	// (0x0001ce86) vkb2_area_keypad_pane_ParamLimits

0xe753,	// (0x0001ce86) vkb2_area_keypad_pane

0xe795,	// (0x0001cec8) vkb2_area_top_pane_ParamLimits

0xe795,	// (0x0001cec8) vkb2_area_top_pane

0xe80f,	// (0x0001cf42) vkb2_top_entry_pane_ParamLimits

0xe80f,	// (0x0001cf42) vkb2_top_entry_pane

0xe839,	// (0x0001cf6c) vkb2_top_grid_left_pane_ParamLimits

0xe839,	// (0x0001cf6c) vkb2_top_grid_left_pane

0xe857,	// (0x0001cf8a) vkb2_top_grid_right_pane_ParamLimits

0xe857,	// (0x0001cf8a) vkb2_top_grid_right_pane

0xe875,	// (0x0001cfa8) vkb2_cell_keypad_pane_ParamLimits

0xe875,	// (0x0001cfa8) vkb2_cell_keypad_pane

0xe946,	// (0x0001d079) vkb2_area_bottom_grid_pane_ParamLimits

0xe946,	// (0x0001d079) vkb2_area_bottom_grid_pane

0xe96c,	// (0x0001d09f) vkb2_area_bottom_pane_g1_ParamLimits

0xe96c,	// (0x0001d09f) vkb2_area_bottom_pane_g1

0xe990,	// (0x0001d0c3) vkb2_area_bottom_pane_g2_ParamLimits

0xe990,	// (0x0001d0c3) vkb2_area_bottom_pane_g2

0xe9be,	// (0x0001d0f1) vkb2_area_bottom_pane_g3_ParamLimits

0xe9be,	// (0x0001d0f1) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x0001e4d3) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x0001e4d3) vkb2_area_bottom_pane_g

0xea1f,	// (0x0001d152) vkb2_top_cell_left_pane_ParamLimits

0xea1f,	// (0x0001d152) vkb2_top_cell_left_pane

0xea3f,	// (0x0001d172) vkb2_top_entry_pane_g1_ParamLimits

0xea3f,	// (0x0001d172) vkb2_top_entry_pane_g1

0xea4d,	// (0x0001d180) vkb2_top_entry_pane_t1_ParamLimits

0xea4d,	// (0x0001d180) vkb2_top_entry_pane_t1

0xad8c,	// (0x000194bf) vkb2_top_entry_pane_t2_ParamLimits

0xad8c,	// (0x000194bf) vkb2_top_entry_pane_t2

0xadbe,	// (0x000194f1) vkb2_top_entry_pane_t3_ParamLimits

0xadbe,	// (0x000194f1) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x0001e4da) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x0001e4da) vkb2_top_entry_pane_t

0xeaac,	// (0x0001d1df) vkb2_top_grid_right_pane_g1_ParamLimits

0xeaac,	// (0x0001d1df) vkb2_top_grid_right_pane_g1

0xeac2,	// (0x0001d1f5) vkb2_top_grid_right_pane_g2_ParamLimits

0xeac2,	// (0x0001d1f5) vkb2_top_grid_right_pane_g2

0xeada,	// (0x0001d20d) vkb2_top_grid_right_pane_g3_ParamLimits

0xeada,	// (0x0001d20d) vkb2_top_grid_right_pane_g3

0xeaf2,	// (0x0001d225) vkb2_top_grid_right_pane_g4_ParamLimits

0xeaf2,	// (0x0001d225) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x0001e4e1) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x0001e4e1) vkb2_top_grid_right_pane_g

0xeb08,	// (0x0001d23b) vkb2_top_cell_left_pane_g1

0xeb1f,	// (0x0001d252) vkb2_cell_keypad_pane_g1_ParamLimits

0xeb1f,	// (0x0001d252) vkb2_cell_keypad_pane_g1

0xadd4,	// (0x00019507) vkb2_cell_keypad_pane_t1_ParamLimits

0xadd4,	// (0x00019507) vkb2_cell_keypad_pane_t1

0xeb2d,	// (0x0001d260) vkb2_cell_bottom_grid_pane_ParamLimits

0xeb2d,	// (0x0001d260) vkb2_cell_bottom_grid_pane

0xeb66,	// (0x0001d299) vkb2_cell_bottom_grid_pane_g1

0x9708,	// (0x00017e3b) aid_call2_pane_cp02

0x9710,	// (0x00017e43) aid_call_pane_cp02

0x9718,	// (0x00017e4b) clock_digital_number_pane_cp10

0x9720,	// (0x00017e53) clock_digital_number_pane_cp11

0x9728,	// (0x00017e5b) clock_digital_number_pane_cp12

0x9730,	// (0x00017e63) clock_digital_number_pane_cp13

0x9738,	// (0x00017e6b) clock_digital_separator_pane_cp10

0x3a96,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g1

0x3a96,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g2

0x9740,	// (0x00017e73) popup_clock_digital_analogue_window_cp2_g3

0x3a96,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g4

0x9740,	// (0x00017e73) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x0001e496) popup_clock_digital_analogue_window_cp2_g

0x9748,	// (0x00017e7b) popup_clock_digital_analogue_window_cp2_t1

0x9756,	// (0x00017e89) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x0001e4a1) popup_clock_digital_analogue_window_cp2_t

0x78dc,	// (0x0001600f) clock_digital_number_pane_cp10_g1

0x78dc,	// (0x0001600f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5d,	// (0x0001e290) clock_digital_number_pane_cp10_g

0x78dc,	// (0x0001600f) clock_digital_separator_pane_cp10_g1

0x78dc,	// (0x0001600f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5d,	// (0x0001e290) clock_digital_separator_pane_cp10_g

0x9585,	// (0x00017cb8) uniindi_top_pane_g3

0x9596,	// (0x00017cc9) uniindi_top_pane_g4

0xe900,	// (0x0001d033) vkb2_row_keypad_pane_ParamLimits

0xe900,	// (0x0001d033) vkb2_row_keypad_pane

0xeb86,	// (0x0001d2b9) vkb2_cell_t_keypad_pane_ParamLimits

0xeb86,	// (0x0001d2b9) vkb2_cell_t_keypad_pane

0xeb96,	// (0x0001d2c9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xeb96,	// (0x0001d2c9) vkb2_cell_t_keypad_pane_cp08

0xeba9,	// (0x0001d2dc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xeba9,	// (0x0001d2dc) vkb2_cell_t_keypad_pane_cp09

0xebbd,	// (0x0001d2f0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xebbd,	// (0x0001d2f0) vkb2_cell_t_keypad_pane_cp01

0xebce,	// (0x0001d301) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xebce,	// (0x0001d301) vkb2_cell_t_keypad_pane_cp02

0xebdf,	// (0x0001d312) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xebdf,	// (0x0001d312) vkb2_cell_t_keypad_pane_cp03

0xebf0,	// (0x0001d323) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xebf0,	// (0x0001d323) vkb2_cell_t_keypad_pane_cp04

0xec01,	// (0x0001d334) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xec01,	// (0x0001d334) vkb2_cell_t_keypad_pane_cp05

0xec12,	// (0x0001d345) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xec12,	// (0x0001d345) vkb2_cell_t_keypad_pane_cp06

0xec23,	// (0x0001d356) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xec23,	// (0x0001d356) vkb2_cell_t_keypad_pane_cp07

0xec34,	// (0x0001d367) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xec34,	// (0x0001d367) vkb2_cell_t_keypad_pane_cp10

0x7b83,	// (0x000162b6) vkb2_cell_t_keypad_pane_g1

0xadeb,	// (0x0001951e) vkb2_cell_t_keypad_pane_t1

0x23f0,	// (0x00010b23) popup_grid_graphic2_window

0xec49,	// (0x0001d37c) aid_size_cell_graphic2_ParamLimits

0xec49,	// (0x0001d37c) aid_size_cell_graphic2

0x7970,	// (0x000160a3) bg_popup_window_pane_cp21_ParamLimits

0x7970,	// (0x000160a3) bg_popup_window_pane_cp21

0xec75,	// (0x0001d3a8) graphic2_pages_pane_ParamLimits

0xec75,	// (0x0001d3a8) graphic2_pages_pane

0xecbb,	// (0x0001d3ee) grid_graphic2_control_pane_ParamLimits

0xecbb,	// (0x0001d3ee) grid_graphic2_control_pane

0xece9,	// (0x0001d41c) grid_graphic2_pane_ParamLimits

0xece9,	// (0x0001d41c) grid_graphic2_pane

0xed49,	// (0x0001d47c) cell_graphic2_pane

0x23f0,	// (0x00010b23) main_comp_mode_pane

0x8d85,	// (0x000174b8) list_ai3_gene_pane_ParamLimits

0x91cb,	// (0x000178fe) bg_popup_window_pane_cp19_ParamLimits

0x91d7,	// (0x0001790a) bg_touch_area_indi_pane_ParamLimits

0x91d7,	// (0x0001790a) bg_touch_area_indi_pane

0x91ed,	// (0x00017920) bg_touch_area_indi_pane_cp01_ParamLimits

0x91ed,	// (0x00017920) bg_touch_area_indi_pane_cp01

0x9203,	// (0x00017936) bg_touch_area_indi_pane_cp02_ParamLimits

0x9203,	// (0x00017936) bg_touch_area_indi_pane_cp02

0x921b,	// (0x0001794e) bg_touch_area_indi_pane_cp03_ParamLimits

0x921b,	// (0x0001794e) bg_touch_area_indi_pane_cp03

0x9235,	// (0x00017968) popup_slider_window_g1_ParamLimits

0x9251,	// (0x00017984) popup_slider_window_g2_ParamLimits

0x926d,	// (0x000179a0) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x0001e42b) popup_slider_window_g_ParamLimits

0x92c9,	// (0x000179fc) popup_slider_window_t1_ParamLimits

0x933d,	// (0x00017a70) small_volume_slider_vertical_pane_ParamLimits

0xed49,	// (0x0001d47c) cell_graphic2_pane_ParamLimits

0xed98,	// (0x0001d4cb) bg_button_pane_cp10_ParamLimits

0xed98,	// (0x0001d4cb) bg_button_pane_cp10

0xedab,	// (0x0001d4de) bg_button_pane_cp11_ParamLimits

0xedab,	// (0x0001d4de) bg_button_pane_cp11

0xedbe,	// (0x0001d4f1) graphic2_pages_pane_g1_ParamLimits

0xedbe,	// (0x0001d4f1) graphic2_pages_pane_g1

0xedd9,	// (0x0001d50c) graphic2_pages_pane_g2_ParamLimits

0xedd9,	// (0x0001d50c) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x0001e4ef) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x0001e4ef) graphic2_pages_pane_g

0xedf1,	// (0x0001d524) graphic2_pages_pane_t1_ParamLimits

0xedf1,	// (0x0001d524) graphic2_pages_pane_t1

0xee07,	// (0x0001d53a) cell_graphic2_control_pane_ParamLimits

0xee07,	// (0x0001d53a) cell_graphic2_control_pane

0xee21,	// (0x0001d554) cell_graphic2_pane_g1_ParamLimits

0xee21,	// (0x0001d554) cell_graphic2_pane_g1

0xee2e,	// (0x0001d561) cell_graphic2_pane_g2_ParamLimits

0xee2e,	// (0x0001d561) cell_graphic2_pane_g2

0xee3b,	// (0x0001d56e) cell_graphic2_pane_g3_ParamLimits

0xee3b,	// (0x0001d56e) cell_graphic2_pane_g3

0xee48,	// (0x0001d57b) cell_graphic2_pane_g4_ParamLimits

0xee48,	// (0x0001d57b) cell_graphic2_pane_g4

0xee55,	// (0x0001d588) cell_graphic2_pane_g5_ParamLimits

0xee55,	// (0x0001d588) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x0001e4f4) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x0001e4f4) cell_graphic2_pane_g

0xee70,	// (0x0001d5a3) cell_graphic2_pane_t1_ParamLimits

0xee70,	// (0x0001d5a3) cell_graphic2_pane_t1

0x5055,	// (0x00013788) grid_highlight_pane_cp11_ParamLimits

0x5055,	// (0x00013788) grid_highlight_pane_cp11

0x32bd,	// (0x000119f0) bg_button_pane_cp05

0xee86,	// (0x0001d5b9) cell_graphic2_control_pane_g1

0x78dc,	// (0x0001600f) bg_touch_area_indi_pane_g1

0xae17,	// (0x0001954a) aid_cmod_rocker_key_size

0xae21,	// (0x00019554) aid_cmode_itu_key_size

0xae2b,	// (0x0001955e) main_cmode_video_pane

0xae35,	// (0x00019568) main_comp_mode_itu_pane

0xae41,	// (0x00019574) main_comp_mode_rocker_pane

0xae4d,	// (0x00019580) cell_cmode_rocker_pane_ParamLimits

0xae4d,	// (0x00019580) cell_cmode_rocker_pane

0xae5f,	// (0x00019592) cell_cmode_itu_pane_ParamLimits

0xae5f,	// (0x00019592) cell_cmode_itu_pane

0x32bd,	// (0x000119f0) bg_button_pane_cp06_ParamLimits

0x32bd,	// (0x000119f0) bg_button_pane_cp06

0x7b83,	// (0x000162b6) cell_cmode_rocker_pane_g1_ParamLimits

0x7b83,	// (0x000162b6) cell_cmode_rocker_pane_g1

0x93e1,	// (0x00017b14) cell_cmode_rocker_pane_g2_ParamLimits

0x93e1,	// (0x00017b14) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001e4ff) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001e4ff) cell_cmode_rocker_pane_g

0x23f0,	// (0x00010b23) bg_button_pane_cp07

0xae74,	// (0x000195a7) cell_cmode_itu_pane_g1

0xae7d,	// (0x000195b0) cell_cmode_itu_pane_t1

0xae8b,	// (0x000195be) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001e504) cell_cmode_itu_pane_t

0x9607,	// (0x00017d3a) aid_touch_ctrl_left

0x960f,	// (0x00017d42) aid_touch_ctrl_right

0x23f0,	// (0x00010b23) compa_mode_pane

0xee93,	// (0x0001d5c6) aid_cmod_rocker_key_size_cp

0xee9d,	// (0x0001d5d0) aid_cmode_itu_key_size_cp

0xae99,	// (0x000195cc) compa_mode_pane_g1

0xaea1,	// (0x000195d4) compa_mode_pane_g2

0xaea9,	// (0x000195dc) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001e509) compa_mode_pane_g

0xeea7,	// (0x0001d5da) main_comp_mode_itu_pane_cp

0xeeaf,	// (0x0001d5e2) main_comp_mode_rocker_pane_cp

0xeeb7,	// (0x0001d5ea) cell_cmode_itu_pane_cp_ParamLimits

0xeeb7,	// (0x0001d5ea) cell_cmode_itu_pane_cp

0xeecc,	// (0x0001d5ff) cell_cmode_rocker_pane_cp_ParamLimits

0xeecc,	// (0x0001d5ff) cell_cmode_rocker_pane_cp

0x32bd,	// (0x000119f0) bg_button_pane_cp06_cp_ParamLimits

0x32bd,	// (0x000119f0) bg_button_pane_cp06_cp

0x7b83,	// (0x000162b6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7b83,	// (0x000162b6) cell_cmode_rocker_pane_g1_cp

0x78dc,	// (0x0001600f) cell_cmode_rocker_pane_g2_cp

0x23f0,	// (0x00010b23) bg_button_pane_cp07_cp

0xeede,	// (0x0001d611) cell_cmode_itu_pane_g1_cp

0xeee7,	// (0x0001d61a) cell_cmode_itu_pane_t1_cp

0xeee7,	// (0x0001d61a) cell_cmode_itu_pane_t2_cp

0x6540,	// (0x00014c73) settings_code_pane_cp2

0x24e4,	// (0x00010c17) bg_popup_window_pane_cp3_ParamLimits

0x2955,	// (0x00011088) heading_pane_cp3_ParamLimits

0x2961,	// (0x00011094) listscroll_popup_graphic_pane_ParamLimits

0xe237,	// (0x0001c96a) fep_hwr_aid_pane_ParamLimits

0xe5e6,	// (0x0001cd19) aid_touch_sctrl_top_ParamLimits

0xe5f3,	// (0x0001cd26) sctrl_sk_top_pane_g1_ParamLimits

0x7b83,	// (0x000162b6) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x0001e444) sctrl_sk_top_pane_g_ParamLimits

0xe600,	// (0x0001cd33) sctrl_sk_top_pane_t1_ParamLimits

0xe5e6,	// (0x0001cd19) aid_touch_sctrl_bottom_ParamLimits

0xe600,	// (0x0001cd33) sctrl_sk_bottom_pane_t1_ParamLimits

0x9551,	// (0x00017c84) aid_area_touch_clock

0xe7d7,	// (0x0001cf0a) aid_vkb2_area_top_pane_cell_ParamLimits

0xe7d7,	// (0x0001cf0a) aid_vkb2_area_top_pane_cell

0xe922,	// (0x0001d055) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe922,	// (0x0001d055) aid_vkb2_area_bottom_pane_cell

0xad84,	// (0x000194b7) popup_char_count_window

0xaeb1,	// (0x000195e4) popup_char_count_window_g1

0xaeba,	// (0x000195ed) popup_char_count_window_g2

0xaec3,	// (0x000195f6) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001e510) popup_char_count_window_g

0xaecc,	// (0x000195ff) popup_char_count_window_t1

0xe6a5,	// (0x0001cdd8) popup_fep_char_preview_window_ParamLimits

0xe6a5,	// (0x0001cdd8) popup_fep_char_preview_window

0xe7f5,	// (0x0001cf28) vkb2_top_candi_pane_ParamLimits

0xe7f5,	// (0x0001cf28) vkb2_top_candi_pane

0xeef5,	// (0x0001d628) cell_vkb2_top_candi_pane_ParamLimits

0xeef5,	// (0x0001d628) cell_vkb2_top_candi_pane

0x5661,	// (0x00013d94) bg_popup_fep_char_preview_window_ParamLimits

0x5661,	// (0x00013d94) bg_popup_fep_char_preview_window

0xef42,	// (0x0001d675) popup_fep_char_preview_window_t1_ParamLimits

0xef42,	// (0x0001d675) popup_fep_char_preview_window_t1

0xaeea,	// (0x0001961d) bg_popup_fep_char_preview_window_g1

0xaee2,	// (0x00019615) bg_popup_fep_char_preview_window_g2

0xaeda,	// (0x0001960d) bg_popup_fep_char_preview_window_g3

0xaf0a,	// (0x0001963d) bg_popup_fep_char_preview_window_g4

0xaf02,	// (0x00019635) bg_popup_fep_char_preview_window_g5

0xef7c,	// (0x0001d6af) bg_popup_fep_char_preview_window_g6

0xaefa,	// (0x0001962d) bg_popup_fep_char_preview_window_g7

0xaef2,	// (0x00019625) bg_popup_fep_char_preview_window_g8

0xaf12,	// (0x00019645) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001e517) bg_popup_fep_char_preview_window_g

0x7b83,	// (0x000162b6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7b83,	// (0x000162b6) cell_vkb2_top_candi_pane_g1

0x8134,	// (0x00016867) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8134,	// (0x00016867) cell_vkb2_top_candi_pane_g2

0x8155,	// (0x00016888) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8155,	// (0x00016888) cell_vkb2_top_candi_pane_g3

0xef84,	// (0x0001d6b7) cell_vkb2_top_candi_pane_g4_ParamLimits

0xef84,	// (0x0001d6b7) cell_vkb2_top_candi_pane_g4

0xad55,	// (0x00019488) cell_vkb2_top_candi_pane_g5_ParamLimits

0xad55,	// (0x00019488) cell_vkb2_top_candi_pane_g5

0x93e1,	// (0x00017b14) cell_vkb2_top_candi_pane_g6_ParamLimits

0x93e1,	// (0x00017b14) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001e52a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001e52a) cell_vkb2_top_candi_pane_g

0xefa5,	// (0x0001d6d8) cell_vkb2_top_candi_pane_t1

0xe054,	// (0x0001c787) aid_size_touch_slider_mark_ParamLimits

0xe054,	// (0x0001c787) aid_size_touch_slider_mark

0xecab,	// (0x0001d3de) grid_graphic2_catg_pane_ParamLimits

0xecab,	// (0x0001d3de) grid_graphic2_catg_pane

0xed25,	// (0x0001d458) popup_grid_graphic2_window_t1_ParamLimits

0xed25,	// (0x0001d458) popup_grid_graphic2_window_t1

0xed37,	// (0x0001d46a) popup_grid_graphic2_window_t2_ParamLimits

0xed37,	// (0x0001d46a) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x0001e4ea) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x0001e4ea) popup_grid_graphic2_window_t

0x32bd,	// (0x000119f0) bg_button_pane_cp05_ParamLimits

0xee86,	// (0x0001d5b9) cell_graphic2_control_pane_g1_ParamLimits

0xefc4,	// (0x0001d6f7) cell_graphic2_catg_pane_ParamLimits

0xefc4,	// (0x0001d6f7) cell_graphic2_catg_pane

0x23f0,	// (0x00010b23) bg_button_pane_cp12

0xefd6,	// (0x0001d709) cell_graphic2_catg_pane_g1

0x951d,	// (0x00017c50) cell_tb_ext_pane_t1_ParamLimits

0xea7f,	// (0x0001d1b2) vkb2_top_cell_right_narrow_pane_ParamLimits

0xea7f,	// (0x0001d1b2) vkb2_top_cell_right_narrow_pane

0xea97,	// (0x0001d1ca) vkb2_top_cell_right_wide_pane_ParamLimits

0xea97,	// (0x0001d1ca) vkb2_top_cell_right_wide_pane

0x7970,	// (0x000160a3) bg_vkb2_func_pane_ParamLimits

0x7970,	// (0x000160a3) bg_vkb2_func_pane

0xeb08,	// (0x0001d23b) vkb2_top_cell_left_pane_g1_ParamLimits

0x7970,	// (0x000160a3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7970,	// (0x000160a3) bg_vkb2_fuc_pane_cp03

0xeb66,	// (0x0001d299) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4f4b,	// (0x0001367e) bg_vkb2_func_pane_g1

0x4f43,	// (0x00013676) bg_vkb2_func_pane_g2

0x4f53,	// (0x00013686) bg_vkb2_func_pane_g3

0x4f5b,	// (0x0001368e) bg_vkb2_func_pane_g4

0x4f63,	// (0x00013696) bg_vkb2_func_pane_g5

0x4f6b,	// (0x0001369e) bg_vkb2_func_pane_g6

0x4f7b,	// (0x000136ae) bg_vkb2_func_pane_g7

0x4f73,	// (0x000136a6) bg_vkb2_func_pane_g8

0x4f3b,	// (0x0001366e) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001e537) bg_vkb2_func_pane_g

0x7970,	// (0x000160a3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7970,	// (0x000160a3) bg_vkb2_fuc_pane_cp01

0xeb08,	// (0x0001d23b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xeb08,	// (0x0001d23b) vkb2_top_cell_right_wide_pane_g1

0x7970,	// (0x000160a3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7970,	// (0x000160a3) bg_vkb2_fuc_pane_cp02

0xeb66,	// (0x0001d299) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xeb66,	// (0x0001d299) vkb2_top_cell_right_narrow_pane_g1

0x9149,	// (0x0001787c) aid_touch_area_decrease_ParamLimits

0x9149,	// (0x0001787c) aid_touch_area_decrease

0x916d,	// (0x000178a0) aid_touch_area_increase_ParamLimits

0x916d,	// (0x000178a0) aid_touch_area_increase

0x9179,	// (0x000178ac) aid_touch_area_mute_ParamLimits

0x9179,	// (0x000178ac) aid_touch_area_mute

0x919d,	// (0x000178d0) aid_touch_area_slider_ParamLimits

0x919d,	// (0x000178d0) aid_touch_area_slider

0x9289,	// (0x000179bc) popup_slider_window_g4_ParamLimits

0x9289,	// (0x000179bc) popup_slider_window_g4

0x9295,	// (0x000179c8) popup_slider_window_g5_ParamLimits

0x9295,	// (0x000179c8) popup_slider_window_g5

0x92b7,	// (0x000179ea) popup_slider_window_g6_ParamLimits

0x92b7,	// (0x000179ea) popup_slider_window_g6

0x92f7,	// (0x00017a2a) popup_slider_window_t2_ParamLimits

0x92f7,	// (0x00017a2a) popup_slider_window_t2

0x0001,

0xfd05,	// (0x0001e438) popup_slider_window_t_ParamLimits

0xfd05,	// (0x0001e438) popup_slider_window_t

0x930f,	// (0x00017a42) slider_pane_ParamLimits

0x930f,	// (0x00017a42) slider_pane

0xaf1a,	// (0x0001964d) slider_pane_g1_ParamLimits

0xaf1a,	// (0x0001964d) slider_pane_g1

0xaf2e,	// (0x00019661) slider_pane_g2_ParamLimits

0xaf2e,	// (0x00019661) slider_pane_g2

0xaf44,	// (0x00019677) slider_pane_g3_ParamLimits

0xaf44,	// (0x00019677) slider_pane_g3

0x0003,

0xfe17,	// (0x0001e54a) slider_pane_g_ParamLimits

0xfe17,	// (0x0001e54a) slider_pane_g

0x4953,	// (0x00013086) popup_tb_float_extension_window_ParamLimits

0x4953,	// (0x00013086) popup_tb_float_extension_window

0xaf70,	// (0x000196a3) aid_size_cell_tb_float_ext

0x23f0,	// (0x00010b23) bg_popup_sub_window_cp28

0xaf7c,	// (0x000196af) grid_tb_float_ext_pane

0xaf86,	// (0x000196b9) cell_tb_float_ext_pane_ParamLimits

0xaf86,	// (0x000196b9) cell_tb_float_ext_pane

0xafa0,	// (0x000196d3) cell_tb_float_ext_pane_g1

0xafa9,	// (0x000196dc) grid_highlight_pane_cp12

0xe36a,	// (0x0001ca9d) cell_last_hwr_side_pane_ParamLimits

0xe36a,	// (0x0001ca9d) cell_last_hwr_side_pane

0x78dc,	// (0x0001600f) cell_last_hwr_side_pane_g1

0xafb2,	// (0x000196e5) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001e553) cell_last_hwr_side_pane_g

0xe9ee,	// (0x0001d121) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9ee,	// (0x0001d121) vkb2_area_bottom_space_btn_pane

0x7b83,	// (0x000162b6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xadeb,	// (0x0001951e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xefa5,	// (0x0001d6d8) cell_vkb2_top_candi_pane_t1_ParamLimits

0xefdf,	// (0x0001d712) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xefdf,	// (0x0001d712) vkb2_area_bottom_space_btn_pane_g1

0xf019,	// (0x0001d74c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf019,	// (0x0001d74c) vkb2_area_bottom_space_btn_pane_g2

0xf04f,	// (0x0001d782) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf04f,	// (0x0001d782) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001e558) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001e558) vkb2_area_bottom_space_btn_pane_g

0xe2de,	// (0x0001ca11) cel_fep_hwr_func_pane_ParamLimits

0xe2de,	// (0x0001ca11) cel_fep_hwr_func_pane

0xe31a,	// (0x0001ca4d) cell_hwr_side_button_pane_ParamLimits

0xe31a,	// (0x0001ca4d) cell_hwr_side_button_pane

0x9551,	// (0x00017c84) aid_area_touch_clock_ParamLimits

0x2787,	// (0x00010eba) bg_uniindi_top_pane_ParamLimits

0x9563,	// (0x00017c96) uniindi_top_pane_g1_ParamLimits

0x9579,	// (0x00017cac) uniindi_top_pane_g2_ParamLimits

0x9585,	// (0x00017cb8) uniindi_top_pane_g3_ParamLimits

0x9596,	// (0x00017cc9) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x0001e470) uniindi_top_pane_g_ParamLimits

0x95a3,	// (0x00017cd6) uniindi_top_pane_t1_ParamLimits

0x2787,	// (0x00010eba) bg_vkb2_func_pane_cp01_ParamLimits

0x2787,	// (0x00010eba) bg_vkb2_func_pane_cp01

0xafbb,	// (0x000196ee) cel_fep_hwr_func_pane_g1_ParamLimits

0xafbb,	// (0x000196ee) cel_fep_hwr_func_pane_g1

0x2787,	// (0x00010eba) bg_vkb2_func_pane_cp02_ParamLimits

0x2787,	// (0x00010eba) bg_vkb2_func_pane_cp02

0xafbb,	// (0x000196ee) cell_hwr_side_button_pane_g1_ParamLimits

0xafbb,	// (0x000196ee) cell_hwr_side_button_pane_g1

0x4d9c,	// (0x000134cf) status_pane_g4_ParamLimits

0x4d9c,	// (0x000134cf) status_pane_g4

0x4db4,	// (0x000134e7) status_pane_t1

0x75de,	// (0x00015d11) form2_midp_gauge_slider_cont_pane

0x75e6,	// (0x00015d19) form2_midp_gauge_slider_pane_t1_ParamLimits

0x75f8,	// (0x00015d2b) form2_midp_gauge_slider_pane_t2_ParamLimits

0x760a,	// (0x00015d3d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb10,	// (0x0001e243) form2_midp_gauge_slider_pane_t_ParamLimits

0x761c,	// (0x00015d4f) form2_midp_slider_pane_ParamLimits

0xe665,	// (0x0001cd98) aid_size_cell_func_vkb2_ParamLimits

0xe665,	// (0x0001cd98) aid_size_cell_func_vkb2

0xaf5c,	// (0x0001968f) slider_pane_g4_ParamLimits

0xaf5c,	// (0x0001968f) slider_pane_g4

0xf099,	// (0x0001d7cc) form2_midp_gauge_slider_pane_t2_cp01

0xf0a7,	// (0x0001d7da) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf0a7,	// (0x0001d7da) form2_midp_gauge_slider_pane_t3_cp01

0xf0c4,	// (0x0001d7f7) form2_midp_slider_pane_cp01

0x23f0,	// (0x00010b23) navi_smil_pane

0xafeb,	// (0x0001971e) navi_smil_pane_g1

0xaff3,	// (0x00019726) navi_smil_pane_t1

0xafc9,	// (0x000196fc) form2_midp_slider_pane_g1

0xafd2,	// (0x00019705) form2_midp_slider_pane_g2

0xafda,	// (0x0001970d) form2_midp_slider_pane_g3

0xafc9,	// (0x000196fc) form2_midp_slider_pane_g4

0xf0cd,	// (0x0001d800) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001e561) form2_midp_slider_pane_g

0xf089,	// (0x0001d7bc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf089,	// (0x0001d7bc) vkb2_area_bottom_space_btn_pane_g4

0x4bd2,	// (0x00013305) lc0_navi_pane_ParamLimits

0x4bd2,	// (0x00013305) lc0_navi_pane

0x4c48,	// (0x0001337b) lc0_stat_indi_pane_ParamLimits

0x4c48,	// (0x0001337b) lc0_stat_indi_pane

0x4c5f,	// (0x00013392) ls0_title_pane_ParamLimits

0x4c5f,	// (0x00013392) ls0_title_pane

0x32bd,	// (0x000119f0) bg_popup_sub_pane_cp14_ParamLimits

0x9538,	// (0x00017c6b) list_uniindi_pane_ParamLimits

0x9544,	// (0x00017c77) uniindi_top_pane_ParamLimits

0x95df,	// (0x00017d12) list_single_uniindi_pane_g1_ParamLimits

0x95f2,	// (0x00017d25) list_single_uniindi_pane_t1_ParamLimits

0xf0d6,	// (0x0001d809) lc0_stat_clock_pane_ParamLimits

0xf0d6,	// (0x0001d809) lc0_stat_clock_pane

0xf0e3,	// (0x0001d816) lc0_stat_indi_pane_g1_ParamLimits

0xf0e3,	// (0x0001d816) lc0_stat_indi_pane_g1

0xf0f0,	// (0x0001d823) lc0_stat_indi_pane_g2_ParamLimits

0xf0f0,	// (0x0001d823) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001e56c) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001e56c) lc0_stat_indi_pane_g

0xf0fd,	// (0x0001d830) lc0_uni_indicator_pane_ParamLimits

0xf0fd,	// (0x0001d830) lc0_uni_indicator_pane

0xf10a,	// (0x0001d83d) ls0_title_pane_g1_ParamLimits

0xf10a,	// (0x0001d83d) ls0_title_pane_g1

0xf11e,	// (0x0001d851) ls0_title_pane_t1_ParamLimits

0xf11e,	// (0x0001d851) ls0_title_pane_t1

0xf154,	// (0x0001d887) lc0_uni_indicator_pane_g1_ParamLimits

0xf154,	// (0x0001d887) lc0_uni_indicator_pane_g1

0xb001,	// (0x00019734) lc0_stat_clock_pane_t1

0x23f0,	// (0x00010b23) main_ai5_pane

0xb00f,	// (0x00019742) ai5_sk_pane_ParamLimits

0xb00f,	// (0x00019742) ai5_sk_pane

0xf16a,	// (0x0001d89d) cell_ai5_widget_pane_ParamLimits

0xf16a,	// (0x0001d89d) cell_ai5_widget_pane

0xb01c,	// (0x0001974f) aid_size_cell_widget_grid

0xb02e,	// (0x00019761) bg_ai5_widget_pane_ParamLimits

0xb02e,	// (0x00019761) bg_ai5_widget_pane

0xf214,	// (0x0001d947) cell_ai5_widget_pane_g2

0xf224,	// (0x0001d957) cell_ai5_widget_pane_g3

0xf238,	// (0x0001d96b) cell_ai5_widget_pane_g4

0xf244,	// (0x0001d977) cell_ai5_widget_pane_g5

0xf250,	// (0x0001d983) cell_ai5_widget_pane_g6

0xf25c,	// (0x0001d98f) cell_ai5_widget_pane_g7

0xf2a4,	// (0x0001d9d7) cell_ai5_widget_pane_t1_ParamLimits

0xf2a4,	// (0x0001d9d7) cell_ai5_widget_pane_t1

0xf2c1,	// (0x0001d9f4) cell_ai5_widget_pane_t2_ParamLimits

0xf2c1,	// (0x0001d9f4) cell_ai5_widget_pane_t2

0xf2d9,	// (0x0001da0c) cell_ai5_widget_pane_t3_ParamLimits

0xf2d9,	// (0x0001da0c) cell_ai5_widget_pane_t3

0xf2f1,	// (0x0001da24) cell_ai5_widget_pane_t4_ParamLimits

0xf2f1,	// (0x0001da24) cell_ai5_widget_pane_t4

0xf30b,	// (0x0001da3e) cell_ai5_widget_pane_t5_ParamLimits

0xf30b,	// (0x0001da3e) cell_ai5_widget_pane_t5

0xb03a,	// (0x0001976d) cell_ai5_widget_pane_t6_ParamLimits

0xb03a,	// (0x0001976d) cell_ai5_widget_pane_t6

0xb04c,	// (0x0001977f) cell_ai5_widget_pane_t7_ParamLimits

0xb04c,	// (0x0001977f) cell_ai5_widget_pane_t7

0xf32a,	// (0x0001da5d) cell_ai5_widget_pane_t8_ParamLimits

0xf32a,	// (0x0001da5d) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001e586) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001e586) cell_ai5_widget_pane_t

0xf372,	// (0x0001daa5) grid_ai5_widget_pane

0x32bd,	// (0x000119f0) highlight_cell_ai5_widget_pane_ParamLimits

0x32bd,	// (0x000119f0) highlight_cell_ai5_widget_pane

0xf388,	// (0x0001dabb) ai5_sk_left_pane

0xf392,	// (0x0001dac5) ai5_sk_middle_pane

0xf39c,	// (0x0001dacf) ai5_sk_right_pane

0xb065,	// (0x00019798) bg_ai5_widget_pane_g1_ParamLimits

0xb065,	// (0x00019798) bg_ai5_widget_pane_g1

0xb071,	// (0x000197a4) bg_ai5_widget_pane_g2_ParamLimits

0xb071,	// (0x000197a4) bg_ai5_widget_pane_g2

0xb07d,	// (0x000197b0) bg_ai5_widget_pane_g3_ParamLimits

0xb07d,	// (0x000197b0) bg_ai5_widget_pane_g3

0xb089,	// (0x000197bc) bg_ai5_widget_pane_g4_ParamLimits

0xb089,	// (0x000197bc) bg_ai5_widget_pane_g4

0xb095,	// (0x000197c8) bg_ai5_widget_pane_g5_ParamLimits

0xb095,	// (0x000197c8) bg_ai5_widget_pane_g5

0xb0a1,	// (0x000197d4) bg_ai5_widget_pane_g6_ParamLimits

0xb0a1,	// (0x000197d4) bg_ai5_widget_pane_g6

0xb0ad,	// (0x000197e0) bg_ai5_widget_pane_g7_ParamLimits

0xb0ad,	// (0x000197e0) bg_ai5_widget_pane_g7

0xb0b9,	// (0x000197ec) bg_ai5_widget_pane_g8_ParamLimits

0xb0b9,	// (0x000197ec) bg_ai5_widget_pane_g8

0xb0c5,	// (0x000197f8) bg_ai5_widget_pane_g9_ParamLimits

0xb0c5,	// (0x000197f8) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001e59b) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001e59b) bg_ai5_widget_pane_g

0xb0ed,	// (0x00019820) cell_shortcut_ai5_widget_pane_ParamLimits

0xb0ed,	// (0x00019820) cell_shortcut_ai5_widget_pane

0x25c7,	// (0x00010cfa) bg_cell_shortcut_ai5_widget_pane

0xb0ff,	// (0x00019832) cell_grid_ai5_widget_pane_g1

0xb108,	// (0x0001983b) highlight_cell_shortcut_ai5_widget_pane

0x4f43,	// (0x00013676) ai5_sk_left_pane_g1

0xb110,	// (0x00019843) ai5_sk_left_pane_g2

0xb118,	// (0x0001984b) ai5_sk_left_pane_g3

0xb120,	// (0x00019853) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001e5ae) ai5_sk_left_pane_g

0xb128,	// (0x0001985b) ai5_sk_left_pane_t1

0x4f4b,	// (0x0001367e) ai5_sk_right_pane_g1

0xb136,	// (0x00019869) ai5_sk_right_pane_g2

0xb13e,	// (0x00019871) ai5_sk_right_pane_g3

0xb146,	// (0x00019879) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001e5b7) ai5_sk_right_pane_g

0xb14e,	// (0x00019881) ai5_sk_right_pane_t1

0x4f4b,	// (0x0001367e) ai5_sk_middle_pane_g1

0x4f43,	// (0x00013676) ai5_sk_middle_pane_g2

0x4f63,	// (0x00013696) ai5_sk_middle_pane_g3

0xb13e,	// (0x00019871) ai5_sk_middle_pane_g4

0xb118,	// (0x0001984b) ai5_sk_middle_pane_g5

0xb15c,	// (0x0001988f) ai5_sk_middle_pane_g6

0xf3a6,	// (0x0001dad9) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001e5c0) ai5_sk_middle_pane_g

0x4a5e,	// (0x00013191) aid_touch_area_size_lc0_ParamLimits

0x4a5e,	// (0x00013191) aid_touch_area_size_lc0

0xe469,	// (0x0001cb9c) cell_hwr_candidate_pane_t1_ParamLimits

0x4a7a,	// (0x000131ad) aid_touch_navi_pane

0x4d46,	// (0x00013479) status_dt_navi_pane_ParamLimits

0x4d46,	// (0x00013479) status_dt_navi_pane

0x4d53,	// (0x00013486) status_dt_sta_pane_ParamLimits

0x4d53,	// (0x00013486) status_dt_sta_pane

0xf3ae,	// (0x0001dae1) dt_sta_controll_pane

0xf3bb,	// (0x0001daee) dt_sta_indi_pane

0xf3cc,	// (0x0001daff) dt_sta_title_pane

0x2787,	// (0x00010eba) bg_dt_sta_indi_pane_ParamLimits

0x2787,	// (0x00010eba) bg_dt_sta_indi_pane

0xf3df,	// (0x0001db12) dt_sta_battery_pane

0xf3e7,	// (0x0001db1a) dt_sta_indi_pane_g1

0xb164,	// (0x00019897) dt_sta_indi_pane_g2

0xb16d,	// (0x000198a0) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001e5cf) dt_sta_indi_pane_g

0xb176,	// (0x000198a9) dt_sta_signal_pane

0x32bd,	// (0x000119f0) bg_dt_sta_title_pane_ParamLimits

0x32bd,	// (0x000119f0) bg_dt_sta_title_pane

0x5e2f,	// (0x00014562) dt_sta_title_pane_g1

0xf3f0,	// (0x0001db23) dt_sta_title_pane_t1_ParamLimits

0xf3f0,	// (0x0001db23) dt_sta_title_pane_t1

0x23f0,	// (0x00010b23) bg_dt_sta_control_pane

0xf405,	// (0x0001db38) dt_sta_controll_pane_g1

0xb17f,	// (0x000198b2) bg_dt_sta_title_pane_g1

0xb188,	// (0x000198bb) bg_dt_sta_title_pane_g2

0xb191,	// (0x000198c4) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001e5d6) bg_dt_sta_title_pane_g

0x78dc,	// (0x0001600f) bg_dt_sta_indi_pane_g1

0xb19a,	// (0x000198cd) dt_sta_signal_pane_g1

0xb1a2,	// (0x000198d5) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001e5dd) dt_sta_signal_pane_g

0xb1aa,	// (0x000198dd) dt_sta_battery_pane_g1

0xb1b3,	// (0x000198e6) dt_sta_battery_pane_t1

0x78dc,	// (0x0001600f) bg_dt_sta_control_pane_g1

0x3b79,	// (0x000122ac) fep_china_uni_eep_pane

0x3b81,	// (0x000122b4) fep_china_uni_entry_pane_ParamLimits

0x3b91,	// (0x000122c4) popup_fep_china_uni_window_g1_ParamLimits

0x3ba1,	// (0x000122d4) popup_fep_china_uni_window_g2_ParamLimits

0x3ba1,	// (0x000122d4) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001de8b) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001de8b) popup_fep_china_uni_window_g

0xb1c2,	// (0x000198f5) fep_china_uni_eep_pane_g1

0xb1ca,	// (0x000198fd) fep_china_uni_eep_pane_t1

0xafe2,	// (0x00019715) aid_touch_area_size_smil_player

0x4bca,	// (0x000132fd) lc0_clock_pane

0x4da8,	// (0x000134db) status_pane_g5_ParamLimits

0x4da8,	// (0x000134db) status_pane_g5

0x4620,	// (0x00012d53) popup_keymap_window

0x4d68,	// (0x0001349b) status_icon_pane

0xf224,	// (0x0001d957) cell_ai5_widget_pane_g3_ParamLimits

0xf238,	// (0x0001d96b) cell_ai5_widget_pane_g4_ParamLimits

0xf244,	// (0x0001d977) cell_ai5_widget_pane_g5_ParamLimits

0xf268,	// (0x0001d99b) cell_ai5_widget_pane_g8_ParamLimits

0xf268,	// (0x0001d99b) cell_ai5_widget_pane_g8

0xf27c,	// (0x0001d9af) cell_ai5_widget_pane_g9_ParamLimits

0xf27c,	// (0x0001d9af) cell_ai5_widget_pane_g9

0xf290,	// (0x0001d9c3) cell_ai5_widget_pane_g10_ParamLimits

0xf290,	// (0x0001d9c3) cell_ai5_widget_pane_g10

0xb1d9,	// (0x0001990c) status_icon_pane_g1

0x23f0,	// (0x00010b23) bg_popup_sub_pane_cp13

0xb1e1,	// (0x00019914) popup_keymap_window_t1

0x43f0,	// (0x00012b23) control_pane_g6_ParamLimits

0x43f0,	// (0x00012b23) control_pane_g6

0x43e3,	// (0x00012b16) control_pane_g7_ParamLimits

0x43e3,	// (0x00012b16) control_pane_g7

0x43d6,	// (0x00012b09) control_pane_g8_ParamLimits

0x43d6,	// (0x00012b09) control_pane_g8

0xf3ae,	// (0x0001dae1) dt_sta_controll_pane_ParamLimits

0xf3bb,	// (0x0001daee) dt_sta_indi_pane_ParamLimits

0xf3cc,	// (0x0001daff) dt_sta_title_pane_ParamLimits

0x2c89,	// (0x000113bc) aid_size_touch_scroll_bar_cale

0xd5aa,	// (0x0001bcdd) popup_discreet_window_ParamLimits

0xd5aa,	// (0x0001bcdd) popup_discreet_window

0xd624,	// (0x0001bd57) popup_sk_window

0x5661,	// (0x00013d94) bg_popup_sub_pane_cp28_ParamLimits

0x5661,	// (0x00013d94) bg_popup_sub_pane_cp28

0xb1ef,	// (0x00019922) popup_discreet_window_g1_ParamLimits

0xb1ef,	// (0x00019922) popup_discreet_window_g1

0xb20f,	// (0x00019942) popup_discreet_window_t1_ParamLimits

0xb20f,	// (0x00019942) popup_discreet_window_t1

0xb22d,	// (0x00019960) popup_discreet_window_t2_ParamLimits

0xb22d,	// (0x00019960) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001e5e2) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001e5e2) popup_discreet_window_t

0xf40e,	// (0x0001db41) popup_sk_window_g1

0xf418,	// (0x0001db4b) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001e5e9) popup_sk_window_g

0xb28d,	// (0x000199c0) popup_sk_window_t1

0xb27f,	// (0x000199b2) popup_sk_window_t1_copy1

0xf214,	// (0x0001d947) cell_ai5_widget_pane_g2_ParamLimits

0xf33c,	// (0x0001da6f) cell_ai5_widget_pane_t9_ParamLimits

0xf33c,	// (0x0001da6f) cell_ai5_widget_pane_t9

0x23f0,	// (0x00010b23) main_fep_fshwr2_pane

0xf422,	// (0x0001db55) aid_fshwr2_btn_pane

0xf42a,	// (0x0001db5d) aid_fshwr2_syb_pane

0xf432,	// (0x0001db65) aid_fshwr2_txt_pane

0xf43a,	// (0x0001db6d) fshwr2_func_candi_pane

0xf446,	// (0x0001db79) fshwr2_hwr_syb_pane

0xf452,	// (0x0001db85) fshwr2_icf_pane

0x23f0,	// (0x00010b23) fshwr2_icf_bg_pane

0xf45c,	// (0x0001db8f) fshwr2_icf_pane_t1_ParamLimits

0xf45c,	// (0x0001db8f) fshwr2_icf_pane_t1

0x78dc,	// (0x0001600f) fshwr2_func_candi_pane_g1

0xb2af,	// (0x000199e2) fshwr2_func_candi_row_pane_ParamLimits

0xb2af,	// (0x000199e2) fshwr2_func_candi_row_pane

0xf473,	// (0x0001dba6) cell_fshwr2_syb_pane_ParamLimits

0xf473,	// (0x0001dba6) cell_fshwr2_syb_pane

0x7b83,	// (0x000162b6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7b83,	// (0x000162b6) fshwr2_hwr_syb_pane_g1

0x23f0,	// (0x00010b23) bg_popup_call_pane_cp01

0xb2c0,	// (0x000199f3) fshwr2_func_candi_cell_pane_ParamLimits

0xb2c0,	// (0x000199f3) fshwr2_func_candi_cell_pane

0xb2f1,	// (0x00019a24) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb2f1,	// (0x00019a24) fshwr2_func_candi_cell_bg_pane

0xb30b,	// (0x00019a3e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb30b,	// (0x00019a3e) fshwr2_func_candi_cell_pane_g1

0xb32b,	// (0x00019a5e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb32b,	// (0x00019a5e) fshwr2_func_candi_cell_pane_t1

0x23f0,	// (0x00010b23) bg_button_pane_cp08

0x4103,	// (0x00012836) cell_fshwr2_syb_bg_pane

0xf48f,	// (0x0001dbc2) cell_fshwr2_syb_bg_pane_g1

0xb33e,	// (0x00019a71) cell_fshwr2_syb_bg_pane_t1

0x32bd,	// (0x000119f0) main_tmo_pane

0x6172,	// (0x000148a5) uni_indicator_pane_g1_ParamLimits

0x6187,	// (0x000148ba) uni_indicator_pane_g2_ParamLimits

0x619d,	// (0x000148d0) uni_indicator_pane_g3_ParamLimits

0x61b3,	// (0x000148e6) uni_indicator_pane_g4_ParamLimits

0x61b3,	// (0x000148e6) uni_indicator_pane_g4

0x61c7,	// (0x000148fa) uni_indicator_pane_g5_ParamLimits

0x61c7,	// (0x000148fa) uni_indicator_pane_g5

0x61db,	// (0x0001490e) uni_indicator_pane_g6_ParamLimits

0x61db,	// (0x0001490e) uni_indicator_pane_g6

0xf949,	// (0x0001e07c) uni_indicator_pane_g_ParamLimits

0x912b,	// (0x0001785e) popup_tmo_note_window_ParamLimits

0x912b,	// (0x0001785e) popup_tmo_note_window

0x23f0,	// (0x00010b23) fshwr2_bg_pane

0xb31c,	// (0x00019a4f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb31c,	// (0x00019a4f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001e5ee) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001e5ee) fshwr2_func_candi_cell_pane_g

0x78dc,	// (0x0001600f) bg_popup_window_pane_cp01

0xb34d,	// (0x00019a80) bg_popup_window_pane_g1_cp01

0xb356,	// (0x00019a89) bg_popup_window_pane_cp22_ParamLimits

0xb356,	// (0x00019a89) bg_popup_window_pane_cp22

0xb364,	// (0x00019a97) listscroll_tmo_link_pane_ParamLimits

0xb364,	// (0x00019a97) listscroll_tmo_link_pane

0xb3a4,	// (0x00019ad7) popup_tmo_note_window_g1_ParamLimits

0xb3a4,	// (0x00019ad7) popup_tmo_note_window_g1

0xb3b1,	// (0x00019ae4) tmo_note_info_pane_ParamLimits

0xb3b1,	// (0x00019ae4) tmo_note_info_pane

0xf497,	// (0x0001dbca) list_tmo_note_info_pane_g1_ParamLimits

0xf497,	// (0x0001dbca) list_tmo_note_info_pane_g1

0xb3df,	// (0x00019b12) list_tmo_note_info_pane_g2_ParamLimits

0xb3df,	// (0x00019b12) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001e5f3) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001e5f3) list_tmo_note_info_pane_g

0xb3fb,	// (0x00019b2e) list_tmo_note_info_text_pane_ParamLimits

0xb3fb,	// (0x00019b2e) list_tmo_note_info_text_pane

0xb43d,	// (0x00019b70) list_tmo_link_pane

0xb44a,	// (0x00019b7d) scroll_pane_cp20

0xb457,	// (0x00019b8a) list_single_tmo_link_pane_ParamLimits

0xb457,	// (0x00019b8a) list_single_tmo_link_pane

0xb467,	// (0x00019b9a) list_single_tmo_link_pane_t1

0xb475,	// (0x00019ba8) list_tmo_note_info_text_pane_t1_ParamLimits

0xb475,	// (0x00019ba8) list_tmo_note_info_text_pane_t1

0x3500,	// (0x00011c33) aid_size_touch_scroll_bar_cp01_ParamLimits

0x3500,	// (0x00011c33) aid_size_touch_scroll_bar_cp01

0xc966,	// (0x0001b099) aid_size_touch_slider_marker

0xd60c,	// (0x0001bd3f) popup_settings_window_ParamLimits

0xd60c,	// (0x0001bd3f) popup_settings_window

0xcb2e,	// (0x0001b261) popup_candi_list_indi_window

0x4a7a,	// (0x000131ad) aid_touch_navi_pane_ParamLimits

0xe5ba,	// (0x0001cced) rs_clock_indi_pane

0xe5c3,	// (0x0001ccf6) sctrl_sk_bottom_pane_ParamLimits

0xe5d4,	// (0x0001cd07) sctrl_sk_top_pane_ParamLimits

0xe6bf,	// (0x0001cdf2) popup_fep_tooltip_window

0xb01c,	// (0x0001974f) aid_size_cell_widget_grid_ParamLimits

0xf208,	// (0x0001d93b) cell_ai5_widget_pane_g1_ParamLimits

0xf208,	// (0x0001d93b) cell_ai5_widget_pane_g1

0xf250,	// (0x0001d983) cell_ai5_widget_pane_g6_ParamLimits

0xf25c,	// (0x0001d98f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001e571) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001e571) cell_ai5_widget_pane_g

0xf360,	// (0x0001da93) cell_ai5_widget_pane_t10_ParamLimits

0xf360,	// (0x0001da93) cell_ai5_widget_pane_t10

0xf372,	// (0x0001daa5) grid_ai5_widget_pane_ParamLimits

0xb0d1,	// (0x00019804) cell_contacts_ai5_widget_pane_ParamLimits

0xb0d1,	// (0x00019804) cell_contacts_ai5_widget_pane

0xb242,	// (0x00019975) popup_discreet_window_t3_ParamLimits

0xb242,	// (0x00019975) popup_discreet_window_t3

0xb29b,	// (0x000199ce) popup_fshwr2_char_preview_window_ParamLimits

0xb29b,	// (0x000199ce) popup_fshwr2_char_preview_window

0xf4ae,	// (0x0001dbe1) tmo_note_info_pane_t1

0xf4c3,	// (0x0001dbf6) tmo_note_info_pane_t2

0xf4dc,	// (0x0001dc0f) tmo_note_info_pane_t3

0xb419,	// (0x00019b4c) tmo_note_info_pane_t4

0xb42b,	// (0x00019b5e) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001e5f8) tmo_note_info_pane_t

0xb43d,	// (0x00019b70) list_tmo_link_pane_ParamLimits

0xb44a,	// (0x00019b7d) scroll_pane_cp20_ParamLimits

0x23f0,	// (0x00010b23) bg_popup_fep_char_preview_window_cp01

0xb48e,	// (0x00019bc1) popup_fshwr2_char_preview_window_t1

0xb49c,	// (0x00019bcf) popup_candi_list_indi_window_g1

0xb4a5,	// (0x00019bd8) bg_cell_contacts_ai5_widget_pane

0xb4b1,	// (0x00019be4) cell_contacts_ai5_widget_pane_g1

0xb4c5,	// (0x00019bf8) cell_contacts_ai5_widget_pane_g2

0xb4d4,	// (0x00019c07) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001e603) cell_contacts_ai5_widget_pane_g

0xb4e7,	// (0x00019c1a) cell_contacts_ai5_widget_pane_t1

0x32bd,	// (0x000119f0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb561,	// (0x00019c94) settings_container_pane

0x4103,	// (0x00012836) listscroll_set_pane_copy1

0x6dc9,	// (0x000154fc) scroll_pane_cp121_copy1

0xb56d,	// (0x00019ca0) set_content_pane_copy1

0xb575,	// (0x00019ca8) aid_height_set_list_copy1_ParamLimits

0xb575,	// (0x00019ca8) aid_height_set_list_copy1

0x63f6,	// (0x00014b29) aid_size_parent_copy1_ParamLimits

0x63f6,	// (0x00014b29) aid_size_parent_copy1

0xb581,	// (0x00019cb4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb581,	// (0x00019cb4) button_value_adjust_pane_cp6_copy1

0x4489,	// (0x00012bbc) list_highlight_pane_cp2_copy1_ParamLimits

0x4489,	// (0x00012bbc) list_highlight_pane_cp2_copy1

0xb595,	// (0x00019cc8) list_set_pane_copy1_ParamLimits

0xb595,	// (0x00019cc8) list_set_pane_copy1

0xb4fc,	// (0x00019c2f) main_pane_set_t1_copy1_ParamLimits

0xb4fc,	// (0x00019c2f) main_pane_set_t1_copy1

0xb536,	// (0x00019c69) main_pane_set_t2_copy1_ParamLimits

0xb536,	// (0x00019c69) main_pane_set_t2_copy1

0xb642,	// (0x00019d75) main_pane_set_t3_copy1

0xb650,	// (0x00019d83) main_pane_set_t4_copy1

0xb555,	// (0x00019c88) set_content_pane_g1_copy1_ParamLimits

0xb555,	// (0x00019c88) set_content_pane_g1_copy1

0xb65e,	// (0x00019d91) setting_code_pane_copy1

0xb668,	// (0x00019d9b) setting_slider_graphic_pane_copy1

0xb668,	// (0x00019d9b) setting_slider_pane_copy1

0xb672,	// (0x00019da5) setting_text_pane_copy1

0xb67c,	// (0x00019daf) setting_volume_pane_copy1

0xb685,	// (0x00019db8) settings_code_pane_cp2_copy1

0xb68d,	// (0x00019dc0) settings_code_pane_cp_copy1_ParamLimits

0xb68d,	// (0x00019dc0) settings_code_pane_cp_copy1

0xb6a1,	// (0x00019dd4) volume_set_pane_copy1

0xb6a9,	// (0x00019ddc) volume_set_pane_g10_copy1

0xb6b1,	// (0x00019de4) volume_set_pane_g1_copy1

0xb6b9,	// (0x00019dec) volume_set_pane_g2_copy1

0xb6c1,	// (0x00019df4) volume_set_pane_g3_copy1

0xb6c9,	// (0x00019dfc) volume_set_pane_g4_copy1

0xb6d1,	// (0x00019e04) volume_set_pane_g5_copy1

0xb6d9,	// (0x00019e0c) volume_set_pane_g6_copy1

0xb6e1,	// (0x00019e14) volume_set_pane_g7_copy1

0xb6e9,	// (0x00019e1c) volume_set_pane_g8_copy1

0xb6f1,	// (0x00019e24) volume_set_pane_g9_copy1

0x24e4,	// (0x00010c17) bg_set_opt_pane_cp_copy1_ParamLimits

0x24e4,	// (0x00010c17) bg_set_opt_pane_cp_copy1

0xb6f9,	// (0x00019e2c) setting_slider_pane_t1_copy1_ParamLimits

0xb6f9,	// (0x00019e2c) setting_slider_pane_t1_copy1

0xb717,	// (0x00019e4a) setting_slider_pane_t2_copy1_ParamLimits

0xb717,	// (0x00019e4a) setting_slider_pane_t2_copy1

0xb731,	// (0x00019e64) setting_slider_pane_t3_copy1_ParamLimits

0xb731,	// (0x00019e64) setting_slider_pane_t3_copy1

0xb749,	// (0x00019e7c) slider_set_pane_copy1_ParamLimits

0xb749,	// (0x00019e7c) slider_set_pane_copy1

0x33f9,	// (0x00011b2c) set_opt_bg_pane_g1_copy2

0x3401,	// (0x00011b34) set_opt_bg_pane_g2_copy2

0xb75f,	// (0x00019e92) set_opt_bg_pane_g3_copy2

0x3411,	// (0x00011b44) set_opt_bg_pane_g4_copy2

0x3419,	// (0x00011b4c) set_opt_bg_pane_g5_copy2

0x3421,	// (0x00011b54) set_opt_bg_pane_g6_copy2

0xb769,	// (0x00019e9c) set_opt_bg_pane_g7_copy2

0xb771,	// (0x00019ea4) set_opt_bg_pane_g8_copy2

0xb77b,	// (0x00019eae) set_opt_bg_pane_g9_copy2

0xf4f1,	// (0x0001dc24) aid_size_touch_slider_mark_copy1_ParamLimits

0xf4f1,	// (0x0001dc24) aid_size_touch_slider_mark_copy1

0xb785,	// (0x00019eb8) slider_set_pane_g1_copy1

0xf505,	// (0x0001dc38) slider_set_pane_g2_copy1

0xe074,	// (0x0001c7a7) slider_set_pane_g3_copy1_ParamLimits

0xe074,	// (0x0001c7a7) slider_set_pane_g3_copy1

0xe088,	// (0x0001c7bb) slider_set_pane_g4_copy1_ParamLimits

0xe088,	// (0x0001c7bb) slider_set_pane_g4_copy1

0xe0a0,	// (0x0001c7d3) slider_set_pane_g5_copy1_ParamLimits

0xe0a0,	// (0x0001c7d3) slider_set_pane_g5_copy1

0xe074,	// (0x0001c7a7) slider_set_pane_g6_copy1_ParamLimits

0xe074,	// (0x0001c7a7) slider_set_pane_g6_copy1

0xf50d,	// (0x0001dc40) slider_set_pane_g7_copy1_ParamLimits

0xf50d,	// (0x0001dc40) slider_set_pane_g7_copy1

0x2404,	// (0x00010b37) bg_set_opt_pane_cp2_copy1

0xb78e,	// (0x00019ec1) setting_slider_graphic_pane_g1_copy1

0xb797,	// (0x00019eca) setting_slider_graphic_pane_t1_copy1

0xb7a7,	// (0x00019eda) setting_slider_graphic_pane_t2_copy1

0xb7b7,	// (0x00019eea) slider_set_pane_cp_copy1

0xb7c7,	// (0x00019efa) input_focus_pane_cp1_copy1

0xb7d0,	// (0x00019f03) list_set_text_pane_copy1

0xb7d8,	// (0x00019f0b) setting_text_pane_g1_copy1

0xd31d,	// (0x0001ba50) set_text_pane_t1_copy1

0xb7c7,	// (0x00019efa) input_focus_pane_cp2_copy1

0xb7d8,	// (0x00019f0b) setting_code_pane_g1_copy1

0xb7fe,	// (0x00019f31) setting_code_pane_t1_copy1

0xb3cb,	// (0x00019afe) list_set_graphic_pane_copy1

0x2404,	// (0x00010b37) bg_set_opt_pane_cp4_copy1

0x3e05,	// (0x00012538) list_set_graphic_pane_g1_copy1_ParamLimits

0x3e05,	// (0x00012538) list_set_graphic_pane_g1_copy1

0xb80c,	// (0x00019f3f) list_set_graphic_pane_g2_copy1

0x3e1d,	// (0x00012550) list_set_graphic_pane_t1_copy1_ParamLimits

0x3e1d,	// (0x00012550) list_set_graphic_pane_t1_copy1

0x78dc,	// (0x0001600f) rs_clock_indi_pane_g1

0xb814,	// (0x00019f47) rs_clock_indi_pane_t1

0xb822,	// (0x00019f55) rs_indi_pane

0xb82a,	// (0x00019f5d) rs_indi_pane_g1

0xb833,	// (0x00019f66) rs_indi_pane_g2

0xb83c,	// (0x00019f6f) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001e60a) rs_indi_pane_g

0x4103,	// (0x00012836) bg_popup_preview_window_pane_cp03

0xb845,	// (0x00019f78) popup_fep_tooltip_window_t1

0x8769,	// (0x00016e9c) popup_note2_window_g2_ParamLimits

0x8769,	// (0x00016e9c) popup_note2_window_g2

0x0001,

0xfc7c,	// (0x0001e3af) popup_note2_window_g_ParamLimits

0xfc7c,	// (0x0001e3af) popup_note2_window_g

0x8d4b,	// (0x0001747e) bg_popup_sub_pane_cp11_ParamLimits

0x8d58,	// (0x0001748b) cell_ai3_links_pane_g1_ParamLimits

0x8d6f,	// (0x000174a2) cell_ai3_links_pane_t1

0xd31d,	// (0x0001ba50) set_text_pane_t1_copy1_ParamLimits

0x4012,	// (0x00012745) cell_graphic_popup_pane_cp2_ParamLimits

0x4012,	// (0x00012745) cell_graphic_popup_pane_cp2

0xb853,	// (0x00019f86) cell_graphic_popup_pane_g1_cp2

0x2a9c,	// (0x000111cf) cell_graphic_popup_pane_g2_cp2

0xb85b,	// (0x00019f8e) cell_graphic_popup_pane_g3_cp2

0xb863,	// (0x00019f96) cell_graphic_popup_pane_t2_cp2

0x2aad,	// (0x000111e0) grid_highlight_pane_cp3_cp2

0x37df,	// (0x00011f12) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x32bd,	// (0x000119f0) main_tmo_pane_ParamLimits

0x911f,	// (0x00017852) popup_tmo_big_image_note_window

0xf1f8,	// (0x0001d92b) cell_ai5_widget_list_pane

0xf200,	// (0x0001d933) cell_ai5_widget_lrg_icon_pane

0xf4ae,	// (0x0001dbe1) tmo_note_info_pane_t1_ParamLimits

0xf4c3,	// (0x0001dbf6) tmo_note_info_pane_t2_ParamLimits

0xf4dc,	// (0x0001dc0f) tmo_note_info_pane_t3_ParamLimits

0xb419,	// (0x00019b4c) tmo_note_info_pane_t4_ParamLimits

0xb42b,	// (0x00019b5e) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001e5f8) tmo_note_info_pane_t_ParamLimits

0xb561,	// (0x00019c94) settings_container_pane_ParamLimits

0xb7bf,	// (0x00019ef2) indicator_popup_pane_cp5

0xb7bf,	// (0x00019ef2) indicator_popup_pane_cp6

0xb3cb,	// (0x00019afe) list_set_graphic_pane_copy1_ParamLimits

0x23f0,	// (0x00010b23) bg_popup_window_pane_cp23

0xb871,	// (0x00019fa4) popup_tmo_big_image_note_window_g1

0xb87c,	// (0x00019faf) popup_tmo_big_image_note_window_t1

0xb88c,	// (0x00019fbf) popup_tmo_big_image_note_window_t2

0xb89c,	// (0x00019fcf) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001e611) popup_tmo_big_image_note_window_t

0xf523,	// (0x0001dc56) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0001dc5e) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0001dc6c) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0001dc6c) cell_ai5_widget_list_row_pane

0xf552,	// (0x0001dc85) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0001dc85) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0001dc92) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0001dc92) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0001dcaa) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0001dcaa) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x0001e618) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001e618) cell_ai5_widget_list_row_pane_t

0x23f0,	// (0x00010b23) main_fep_vtchi_ss_pane

0xb8ac,	// (0x00019fdf) popup_fep_char_pre_window

0xb8b4,	// (0x00019fe7) popup_fep_ituss_window

0xb8bf,	// (0x00019ff2) popup_fep_vkbss_window

0xb8c8,	// (0x00019ffb) grid_vkbss_keypad_pane_ParamLimits

0xb8c8,	// (0x00019ffb) grid_vkbss_keypad_pane

0xb8d8,	// (0x0001a00b) ituss_keypad_pane

0xb8e0,	// (0x0001a013) aid_vkbss_key_offset_ParamLimits

0xb8e0,	// (0x0001a013) aid_vkbss_key_offset

0xb8ef,	// (0x0001a022) cell_vkbss_key_pane_ParamLimits

0xb8ef,	// (0x0001a022) cell_vkbss_key_pane

0xb905,	// (0x0001a038) bg_cell_vkbss_key_g1_ParamLimits

0xb905,	// (0x0001a038) bg_cell_vkbss_key_g1

0xb911,	// (0x0001a044) cell_vkbss_key_3p_pane_ParamLimits

0xb911,	// (0x0001a044) cell_vkbss_key_3p_pane

0xb92b,	// (0x0001a05e) cell_vkbss_key_g1_ParamLimits

0xb92b,	// (0x0001a05e) cell_vkbss_key_g1

0xb945,	// (0x0001a078) cell_vkbss_key_t1_ParamLimits

0xb945,	// (0x0001a078) cell_vkbss_key_t1

0xb970,	// (0x0001a0a3) cell_ituss_key_pane_ParamLimits

0xb970,	// (0x0001a0a3) cell_ituss_key_pane

0xb97f,	// (0x0001a0b2) bg_cell_ituss_key_g1_ParamLimits

0xb97f,	// (0x0001a0b2) bg_cell_ituss_key_g1

0xb98b,	// (0x0001a0be) cell_ituss_key_pane_g1_ParamLimits

0xb98b,	// (0x0001a0be) cell_ituss_key_pane_g1

0xb997,	// (0x0001a0ca) cell_ituss_key_pane_g2_ParamLimits

0xb997,	// (0x0001a0ca) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001e61d) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001e61d) cell_ituss_key_pane_g

0xb9aa,	// (0x0001a0dd) cell_ituss_key_t1_ParamLimits

0xb9aa,	// (0x0001a0dd) cell_ituss_key_t1

0xb9c8,	// (0x0001a0fb) cell_ituss_key_t2_ParamLimits

0xb9c8,	// (0x0001a0fb) cell_ituss_key_t2

0xb9e7,	// (0x0001a11a) cell_ituss_key_t3_ParamLimits

0xb9e7,	// (0x0001a11a) cell_ituss_key_t3

0xba06,	// (0x0001a139) cell_ituss_key_t4_ParamLimits

0xba06,	// (0x0001a139) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001e622) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001e622) cell_ituss_key_t

0xba25,	// (0x0001a158) cell_vkbss_key_3p_pane_g1

0xba2d,	// (0x0001a160) cell_vkbss_key_3p_pane_g2

0xba35,	// (0x0001a168) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001e62b) cell_vkbss_key_3p_pane_g

0x23f0,	// (0x00010b23) bg_popup_fep_char_preview_window_cp02

0xba3d,	// (0x0001a170) popup_fep_char_pre_window_t1

0xf1ee,	// (0x0001d921) main_ai5_sk_pane

0xb4a5,	// (0x00019bd8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb4b1,	// (0x00019be4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb4c5,	// (0x00019bf8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb4d4,	// (0x00019c07) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001e603) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb4e7,	// (0x00019c1a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x32bd,	// (0x000119f0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0001dcbc) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
