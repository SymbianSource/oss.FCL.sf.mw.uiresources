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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000cf47 };

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
0xe4d8,	// (0x0001b41f) Screen

0xe4e4,	// (0x0001b42b) application_window_ParamLimits

0xe4e4,	// (0x0001b42b) application_window

0x4576,	// (0x000114bd) screen_g1

0xc6c6,	// (0x0001960d) area_bottom_pane_ParamLimits

0xc6c6,	// (0x0001960d) area_bottom_pane

0x22e9,	// (0x0000f230) area_top_pane_ParamLimits

0x22e9,	// (0x0000f230) area_top_pane

0x2387,	// (0x0000f2ce) main_pane_ParamLimits

0x2387,	// (0x0000f2ce) main_pane

0x4580,	// (0x000114c7) misc_graphics

0xf0b9,	// (0x0001c000) battery_pane_ParamLimits

0xf0b9,	// (0x0001c000) battery_pane

0x740e,	// (0x00014355) bg_status_flat_pane_g8

0x7416,	// (0x0001435d) bg_status_flat_pane_g9

0x66f2,	// (0x00013639) context_pane_ParamLimits

0x66f2,	// (0x00013639) context_pane

0xf224,	// (0x0001c16b) navi_pane_ParamLimits

0xf224,	// (0x0001c16b) navi_pane

0xf2a2,	// (0x0001c1e9) signal_pane_ParamLimits

0xf2a2,	// (0x0001c1e9) signal_pane

0x0008,

0xf875,	// (0x0001c7bc) bg_status_flat_pane_g

0xf332,	// (0x0001c279) status_pane_g1_ParamLimits

0xf332,	// (0x0001c279) status_pane_g1

0xf348,	// (0x0001c28f) status_pane_g2_ParamLimits

0xf348,	// (0x0001c28f) status_pane_g2

0x6911,	// (0x00013858) status_pane_g3_ParamLimits

0x6911,	// (0x00013858) status_pane_g3

0x0004,

0xf7a1,	// (0x0001c6e8) status_pane_g_ParamLimits

0xf7a1,	// (0x0001c6e8) status_pane_g

0xf354,	// (0x0001c29b) title_pane_ParamLimits

0xf354,	// (0x0001c29b) title_pane

0xf3b7,	// (0x0001c2fe) uni_indicator_pane_ParamLimits

0xf3b7,	// (0x0001c2fe) uni_indicator_pane

0x6548,	// (0x0001348f) bg_list_pane_ParamLimits

0x6548,	// (0x0001348f) bg_list_pane

0x6568,	// (0x000134af) find_pane

0xca15,	// (0x0001995c) listscroll_app_pane_ParamLimits

0xca15,	// (0x0001995c) listscroll_app_pane

0x657c,	// (0x000134c3) listscroll_form_pane

0x2c43,	// (0x0000fb8a) listscroll_gen_pane_ParamLimits

0x2c43,	// (0x0000fb8a) listscroll_gen_pane

0x2c57,	// (0x0000fb9e) listscroll_set_pane

0x7f97,	// (0x00014ede) main_idle_act_pane

0x6252,	// (0x00013199) main_idle_trad_pane

0x6252,	// (0x00013199) main_list_empty_pane

0x6596,	// (0x000134dd) main_midp_pane

0x65a2,	// (0x000134e9) main_pane_g1_ParamLimits

0x65a2,	// (0x000134e9) main_pane_g1

0xca25,	// (0x0001996c) popup_ai_message_window_ParamLimits

0xca25,	// (0x0001996c) popup_ai_message_window

0xcab6,	// (0x000199fd) popup_fep_china_uni_window_ParamLimits

0xcab6,	// (0x000199fd) popup_fep_china_uni_window

0x2d6b,	// (0x0000fcb2) popup_fep_japan_candidate_window_ParamLimits

0x2d6b,	// (0x0000fcb2) popup_fep_japan_candidate_window

0x2d89,	// (0x0000fcd0) popup_fep_japan_predictive_window_ParamLimits

0x2d89,	// (0x0000fcd0) popup_fep_japan_predictive_window

0xcb10,	// (0x00019a57) popup_find_window

0xcb2d,	// (0x00019a74) popup_grid_graphic_window_ParamLimits

0xcb2d,	// (0x00019a74) popup_grid_graphic_window

0x2dee,	// (0x0000fd35) popup_large_graphic_colour_window

0xcbc5,	// (0x00019b0c) popup_menu_window_ParamLimits

0xcbc5,	// (0x00019b0c) popup_menu_window

0xcd91,	// (0x00019cd8) popup_note_image_window

0xcd57,	// (0x00019c9e) popup_note_wait_window_ParamLimits

0xcd57,	// (0x00019c9e) popup_note_wait_window

0xcda9,	// (0x00019cf0) popup_note_window_ParamLimits

0xcda9,	// (0x00019cf0) popup_note_window

0xce4f,	// (0x00019d96) popup_query_code_window_ParamLimits

0xce4f,	// (0x00019d96) popup_query_code_window

0x3038,	// (0x0000ff7f) popup_query_data_code_window_ParamLimits

0x3038,	// (0x0000ff7f) popup_query_data_code_window

0xce89,	// (0x00019dd0) popup_query_data_window_ParamLimits

0xce89,	// (0x00019dd0) popup_query_data_window

0xcf05,	// (0x00019e4c) popup_query_sat_info_window_ParamLimits

0xcf05,	// (0x00019e4c) popup_query_sat_info_window

0xcf9c,	// (0x00019ee3) popup_snote_single_graphic_window_ParamLimits

0xcf9c,	// (0x00019ee3) popup_snote_single_graphic_window

0xcf9c,	// (0x00019ee3) popup_snote_single_text_window_ParamLimits

0xcf9c,	// (0x00019ee3) popup_snote_single_text_window

0x30bb,	// (0x00010002) popup_sub_window_general

0x31e9,	// (0x00010130) popup_window_general_ParamLimits

0x31e9,	// (0x00010130) popup_window_general

0x65b8,	// (0x000134ff) power_save_pane

0xc8a4,	// (0x000197eb) control_pane_g1_ParamLimits

0xc8a4,	// (0x000197eb) control_pane_g1

0xc8cd,	// (0x00019814) control_pane_g2_ParamLimits

0xc8cd,	// (0x00019814) control_pane_g2

0x650b,	// (0x00013452) control_pane_g3_ParamLimits

0x650b,	// (0x00013452) control_pane_g3

0x0007,

0xf789,	// (0x0001c6d0) control_pane_g_ParamLimits

0xf789,	// (0x0001c6d0) control_pane_g

0xc90e,	// (0x00019855) control_pane_t1_ParamLimits

0xc90e,	// (0x00019855) control_pane_t1

0xc96c,	// (0x000198b3) control_pane_t2_ParamLimits

0xc96c,	// (0x000198b3) control_pane_t2

0x0002,

0xf79a,	// (0x0001c6e1) control_pane_t_ParamLimits

0xf79a,	// (0x0001c6e1) control_pane_t

0x642c,	// (0x00013373) navi_navi_volume_pane_cp1

0x6435,	// (0x0001337c) status_small_icon_pane

0x643d,	// (0x00013384) status_small_pane_g1_ParamLimits

0x643d,	// (0x00013384) status_small_pane_g1

0x6471,	// (0x000133b8) status_small_pane_g2_ParamLimits

0x6471,	// (0x000133b8) status_small_pane_g2

0x647d,	// (0x000133c4) status_small_pane_g3_ParamLimits

0x647d,	// (0x000133c4) status_small_pane_g3

0x6489,	// (0x000133d0) status_small_pane_g4_ParamLimits

0x6489,	// (0x000133d0) status_small_pane_g4

0x6495,	// (0x000133dc) status_small_pane_g5_ParamLimits

0x6495,	// (0x000133dc) status_small_pane_g5

0x64a4,	// (0x000133eb) status_small_pane_g6_ParamLimits

0x64a4,	// (0x000133eb) status_small_pane_g6

0x0007,

0xf778,	// (0x0001c6bf) status_small_pane_g_ParamLimits

0xf778,	// (0x0001c6bf) status_small_pane_g

0x64d4,	// (0x0001341b) status_small_pane_t1

0x64f7,	// (0x0001343e) status_small_wait_pane_ParamLimits

0x64f7,	// (0x0001343e) status_small_wait_pane

0xee6d,	// (0x0001bdb4) aid_levels_signal_ParamLimits

0xee6d,	// (0x0001bdb4) aid_levels_signal

0xee85,	// (0x0001bdcc) signal_pane_g1_ParamLimits

0xee85,	// (0x0001bdcc) signal_pane_g1

0xeea0,	// (0x0001bde7) signal_pane_g2_ParamLimits

0xeea0,	// (0x0001bde7) signal_pane_g2

0x0003,

0xf709,	// (0x0001c650) signal_pane_g_ParamLimits

0xf709,	// (0x0001c650) signal_pane_g

0x5caf,	// (0x00012bf6) context_pane_g1

0xe4f4,	// (0x0001b43b) title_pane_g1

0xe52b,	// (0x0001b472) title_pane_t1

0x4628,	// (0x0001156f) title_pane_t2

0x464e,	// (0x00011595) title_pane_t3

0x0002,

0xf55d,	// (0x0001c4a4) title_pane_t

0xf3df,	// (0x0001c326) aid_levels_battery_ParamLimits

0xf3df,	// (0x0001c326) aid_levels_battery

0xf3fb,	// (0x0001c342) battery_pane_g1_ParamLimits

0xf3fb,	// (0x0001c342) battery_pane_g1

0xf418,	// (0x0001c35f) battery_pane_g2_ParamLimits

0xf418,	// (0x0001c35f) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001c6f3) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001c6f3) battery_pane_g

0x0133,	// (0x0000d07a) uni_indicator_pane_g1

0x014a,	// (0x0000d091) uni_indicator_pane_g2

0x0160,	// (0x0000d0a7) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x0001c864) uni_indicator_pane_g

0x60d0,	// (0x00013017) navi_icon_pane_ParamLimits

0x60d0,	// (0x00013017) navi_icon_pane

0x6019,	// (0x00012f60) navi_midp_pane

0x60ec,	// (0x00013033) navi_navi_pane

0x60f6,	// (0x0001303d) navi_text_pane_ParamLimits

0x60f6,	// (0x0001303d) navi_text_pane

0x4576,	// (0x000114bd) status_small_wait_pane_g1

0x4a8b,	// (0x000119d2) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x0001c85f) status_small_wait_pane_g

0x7a69,	// (0x000149b0) navi_navi_icon_text_pane

0x7a71,	// (0x000149b8) navi_navi_pane_g1_ParamLimits

0x7a71,	// (0x000149b8) navi_navi_pane_g1

0x7a83,	// (0x000149ca) navi_navi_pane_g2_ParamLimits

0x7a83,	// (0x000149ca) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x0001c82d) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x0001c82d) navi_navi_pane_g

0x7a95,	// (0x000149dc) navi_navi_tabs_pane

0x7a9e,	// (0x000149e5) navi_navi_text_pane

0x7a69,	// (0x000149b0) navi_navi_volume_pane

0x7a45,	// (0x0001498c) navi_text_pane_t1

0x7a39,	// (0x00014980) navi_icon_pane_g1

0x798c,	// (0x000148d3) navi_navi_text_pane_t1

0x34f9,	// (0x00010440) navi_navi_volume_pane_g1

0xd213,	// (0x0001a15a) volume_small_pane

0x0067,	// (0x0000cfae) navi_navi_icon_text_pane_g1

0x78fa,	// (0x00014841) navi_navi_icon_text_pane_t1

0x60ec,	// (0x00013033) navi_tabs_2_long_pane

0x60ec,	// (0x00013033) navi_tabs_2_pane

0x60ec,	// (0x00013033) navi_tabs_3_long_pane

0x60ec,	// (0x00013033) navi_tabs_3_pane

0x60ec,	// (0x00013033) navi_tabs_4_pane

0xd1f3,	// (0x0001a13a) tabs_2_active_pane_ParamLimits

0xd1f3,	// (0x0001a13a) tabs_2_active_pane

0xd203,	// (0x0001a14a) tabs_2_passive_pane_ParamLimits

0xd203,	// (0x0001a14a) tabs_2_passive_pane

0xd1c1,	// (0x0001a108) tabs_3_active_pane_ParamLimits

0xd1c1,	// (0x0001a108) tabs_3_active_pane

0xd1d1,	// (0x0001a118) tabs_3_passive_pane_ParamLimits

0xd1d1,	// (0x0001a118) tabs_3_passive_pane

0xd1e2,	// (0x0001a129) tabs_3_passive_pane_cp_ParamLimits

0xd1e2,	// (0x0001a129) tabs_3_passive_pane_cp

0xd18e,	// (0x0001a0d5) tabs_4_active_pane_ParamLimits

0xd18e,	// (0x0001a0d5) tabs_4_active_pane

0xd19f,	// (0x0001a0e6) tabs_4_passive_pane_ParamLimits

0xd19f,	// (0x0001a0e6) tabs_4_passive_pane

0x3485,	// (0x000103cc) tabs_4_passive_pane_cp_ParamLimits

0x3485,	// (0x000103cc) tabs_4_passive_pane_cp

0xd1b0,	// (0x0001a0f7) tabs_4_passive_pane_cp2_ParamLimits

0xd1b0,	// (0x0001a0f7) tabs_4_passive_pane_cp2

0xd16a,	// (0x0001a0b1) tabs_2_long_active_pane_ParamLimits

0xd16a,	// (0x0001a0b1) tabs_2_long_active_pane

0xd17c,	// (0x0001a0c3) tabs_2_long_passive_pane_ParamLimits

0xd17c,	// (0x0001a0c3) tabs_2_long_passive_pane

0xd12b,	// (0x0001a072) tabs_3_long_active_pane_ParamLimits

0xd12b,	// (0x0001a072) tabs_3_long_active_pane

0xd13e,	// (0x0001a085) tabs_3_long_passive_pane_ParamLimits

0xd13e,	// (0x0001a085) tabs_3_long_passive_pane

0xd157,	// (0x0001a09e) tabs_3_long_passive_pane_cp_ParamLimits

0xd157,	// (0x0001a09e) tabs_3_long_passive_pane_cp

0x33ac,	// (0x000102f3) volume_small_pane_g1

0x33b5,	// (0x000102fc) volume_small_pane_g2

0x33be,	// (0x00010305) volume_small_pane_g3

0x33c7,	// (0x0001030e) volume_small_pane_g4

0x33d0,	// (0x00010317) volume_small_pane_g5

0x33d9,	// (0x00010320) volume_small_pane_g6

0x33e2,	// (0x00010329) volume_small_pane_g7

0x33eb,	// (0x00010332) volume_small_pane_g8

0x33f4,	// (0x0001033b) volume_small_pane_g9

0x33fd,	// (0x00010344) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x0001c7f9) volume_small_pane_g

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp2_ParamLimits

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp2

0x466e,	// (0x000115b5) tabs_3_active_pane_g1

0xe5b7,	// (0x0001b4fe) tabs_3_active_pane_t1

0x48f5,	// (0x0001183c) bg_passive_tab_pane_cp2_ParamLimits

0x48f5,	// (0x0001183c) bg_passive_tab_pane_cp2

0x466e,	// (0x000115b5) tabs_3_passive_pane_g1

0xe5b7,	// (0x0001b4fe) tabs_3_passive_pane_t1

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp3_ParamLimits

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp3

0x4688,	// (0x000115cf) tabs_4_active_pane_g1

0xe5c9,	// (0x0001b510) tabs_4_active_pane_t1

0x48f5,	// (0x0001183c) bg_passive_tab_pane_cp3_ParamLimits

0x48f5,	// (0x0001183c) bg_passive_tab_pane_cp3

0x4688,	// (0x000115cf) tabs_4_1_passive_pane_g1

0xe5c9,	// (0x0001b510) tabs_4_1_passive_pane_t1

0x6596,	// (0x000134dd) list_highlight_pane_cp2

0x01e9,	// (0x0000d130) list_set_pane_ParamLimits

0x01e9,	// (0x0000d130) list_set_pane

0x0283,	// (0x0000d1ca) main_pane_set_t1_ParamLimits

0x0283,	// (0x0000d1ca) main_pane_set_t1

0x02a3,	// (0x0000d1ea) main_pane_set_t2_ParamLimits

0x02a3,	// (0x0000d1ea) main_pane_set_t2

0x02b7,	// (0x0000d1fe) main_pane_set_t3_ParamLimits

0x02b7,	// (0x0000d1fe) main_pane_set_t3

0x02c9,	// (0x0000d210) main_pane_set_t4_ParamLimits

0x02c9,	// (0x0000d210) main_pane_set_t4

0x0003,

0xf982,	// (0x0001c8c9) main_pane_set_t_ParamLimits

0xf982,	// (0x0001c8c9) main_pane_set_t

0x02db,	// (0x0000d222) setting_code_pane

0x02e3,	// (0x0000d22a) setting_slider_graphic_pane

0x02e3,	// (0x0000d22a) setting_slider_pane

0x02e3,	// (0x0000d22a) setting_text_pane

0x02e3,	// (0x0000d22a) setting_volume_pane

0x25c8,	// (0x0000f50f) volume_set_pane

0x4660,	// (0x000115a7) bg_set_opt_pane_cp

0x25d0,	// (0x0000f517) setting_slider_pane_t1

0x25e9,	// (0x0000f530) setting_slider_pane_t2

0x2603,	// (0x0000f54a) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001c4ab) setting_slider_pane_t

0x261b,	// (0x0000f562) slider_set_pane

0x4580,	// (0x000114c7) bg_set_opt_pane_cp2

0x46a2,	// (0x000115e9) setting_slider_graphic_pane_g1

0x2631,	// (0x0000f578) setting_slider_graphic_pane_t1

0x2641,	// (0x0000f588) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001c4b2) setting_slider_graphic_pane_t

0x2651,	// (0x0000f598) slider_set_pane_cp

0x4580,	// (0x000114c7) input_focus_pane_cp1

0x7f7e,	// (0x00014ec5) list_set_text_pane

0x4576,	// (0x000114bd) setting_text_pane_g1

0x4580,	// (0x000114c7) input_focus_pane_cp2

0x4576,	// (0x000114bd) setting_code_pane_g1

0x46ab,	// (0x000115f2) setting_code_pane_t1

0x46b9,	// (0x00011600) set_text_pane_t1_ParamLimits

0x46b9,	// (0x00011600) set_text_pane_t1

0x5549,	// (0x00012490) set_opt_bg_pane_g1

0x5551,	// (0x00012498) set_opt_bg_pane_g2

0x7f5e,	// (0x00014ea5) set_opt_bg_pane_g3

0x5561,	// (0x000124a8) set_opt_bg_pane_g4

0x5569,	// (0x000124b0) set_opt_bg_pane_g5

0x5571,	// (0x000124b8) set_opt_bg_pane_g6

0x7f66,	// (0x00014ead) set_opt_bg_pane_g7

0x7f6e,	// (0x00014eb5) set_opt_bg_pane_g8

0x7f76,	// (0x00014ebd) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x0001c8b6) set_opt_bg_pane_g

0x7f51,	// (0x00014e98) slider_set_pane_g1

0x356e,	// (0x000104b5) slider_set_pane_g2

0x0006,

0xf960,	// (0x0001c8a7) slider_set_pane_g

0x350a,	// (0x00010451) volume_set_pane_g1

0x3512,	// (0x00010459) volume_set_pane_g2

0x351a,	// (0x00010461) volume_set_pane_g3

0x3522,	// (0x00010469) volume_set_pane_g4

0x352a,	// (0x00010471) volume_set_pane_g5

0x3532,	// (0x00010479) volume_set_pane_g6

0x353a,	// (0x00010481) volume_set_pane_g7

0x3542,	// (0x00010489) volume_set_pane_g8

0x354a,	// (0x00010491) volume_set_pane_g9

0x3552,	// (0x00010499) volume_set_pane_g10

0x0009,

0xf938,	// (0x0001c87f) volume_set_pane_g

0xe5db,	// (0x0001b522) indicator_pane_ParamLimits

0xe5db,	// (0x0001b522) indicator_pane

0xe603,	// (0x0001b54a) main_idle_pane_g2_ParamLimits

0xe603,	// (0x0001b54a) main_idle_pane_g2

0xe63b,	// (0x0001b582) main_pane_idle_g1_ParamLimits

0xe63b,	// (0x0001b582) main_pane_idle_g1

0x4714,	// (0x0001165b) popup_clock_digital_analogue_window_ParamLimits

0x4714,	// (0x0001165b) popup_clock_digital_analogue_window

0xe662,	// (0x0001b5a9) soft_indicator_pane_ParamLimits

0xe662,	// (0x0001b5a9) soft_indicator_pane

0xe67c,	// (0x0001b5c3) wallpaper_pane_ParamLimits

0xe67c,	// (0x0001b5c3) wallpaper_pane

0x4576,	// (0x000114bd) wallpaper_pane_g1

0xe68e,	// (0x0001b5d5) indicator_pane_g1_ParamLimits

0xe68e,	// (0x0001b5d5) indicator_pane_g1

0x847b,	// (0x000153c2) navi_navi_icon_text_pane_srt_g1

0x4766,	// (0x000116ad) soft_indicator_pane_t1

0x4780,	// (0x000116c7) aid_ps_area_pane

0xe6a4,	// (0x0001b5eb) aid_ps_clock_pane

0x479f,	// (0x000116e6) aid_ps_indicator_pane

0x47ab,	// (0x000116f2) indicator_ps_pane_ParamLimits

0x47ab,	// (0x000116f2) indicator_ps_pane

0x47ba,	// (0x00011701) power_save_pane_g1_ParamLimits

0x47ba,	// (0x00011701) power_save_pane_g1

0x47c6,	// (0x0001170d) power_save_pane_g2_ParamLimits

0x47c6,	// (0x0001170d) power_save_pane_g2

0x21dd,	// (0x0000f124) aid_navinavi_width_pane

0x4780,	// (0x000116c7) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001c4b7) power_save_pane_g_ParamLimits

0xf570,	// (0x0001c4b7) power_save_pane_g

0x47d4,	// (0x0001171b) power_save_pane_t1_ParamLimits

0x47d4,	// (0x0001171b) power_save_pane_t1

0xe6a4,	// (0x0001b5eb) aid_ps_clock_pane_ParamLimits

0x479f,	// (0x000116e6) aid_ps_indicator_pane_ParamLimits

0x47e6,	// (0x0001172d) power_save_pane_t4_ParamLimits

0x47e6,	// (0x0001172d) power_save_pane_t4

0x0001,

0xf575,	// (0x0001c4bc) power_save_pane_t_ParamLimits

0xf575,	// (0x0001c4bc) power_save_pane_t

0x4810,	// (0x00011757) power_save_t3_ParamLimits

0x4810,	// (0x00011757) power_save_t3

0x47fb,	// (0x00011742) power_save_t2_ParamLimits

0x47fb,	// (0x00011742) power_save_t2

0x4825,	// (0x0001176c) indicator_ps_pane_g1

0xe6b2,	// (0x0001b5f9) ai_gene_pane_ParamLimits

0xe6b2,	// (0x0001b5f9) ai_gene_pane

0xe6c9,	// (0x0001b610) ai_links_pane_ParamLimits

0xe6c9,	// (0x0001b610) ai_links_pane

0xe6e1,	// (0x0001b628) indicator_pane_cp1_ParamLimits

0xe6e1,	// (0x0001b628) indicator_pane_cp1

0xe6f0,	// (0x0001b637) main_pane_idle_g1_cp_ParamLimits

0xe6f0,	// (0x0001b637) main_pane_idle_g1_cp

0x485e,	// (0x000117a5) popup_ai_links_title_window

0xe708,	// (0x0001b64f) soft_indicator_pane_cp1_ParamLimits

0xe708,	// (0x0001b64f) soft_indicator_pane_cp1

0x7d30,	// (0x00014c77) ai_links_pane_g1

0x7d39,	// (0x00014c80) grid_ai_links_pane

0x012a,	// (0x0000d071) ai_gene_pane_1

0x7d1e,	// (0x00014c65) ai_gene_pane_2

0x7d27,	// (0x00014c6e) list_highlight_pane_cp4

0x0106,	// (0x0000d04d) cell_ai_link_pane_ParamLimits

0x0106,	// (0x0000d04d) cell_ai_link_pane

0x7cef,	// (0x00014c36) cell_ai_link_pane_g1

0x4a8b,	// (0x000119d2) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x0001c85a) cell_ai_link_pane_g

0x4580,	// (0x000114c7) grid_highlight_cp2

0x4580,	// (0x000114c7) bg_popup_sub_pane_cp1

0x4881,	// (0x000117c8) popup_ai_links_title_window_t1

0x7c3f,	// (0x00014b86) ai_gene_pane_1_g1_ParamLimits

0x7c3f,	// (0x00014b86) ai_gene_pane_1_g1

0x7c4b,	// (0x00014b92) ai_gene_pane_1_g2_ParamLimits

0x7c4b,	// (0x00014b92) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x0001c850) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x0001c850) ai_gene_pane_1_g

0x7c58,	// (0x00014b9f) ai_gene_pane_1_t1_ParamLimits

0x7c58,	// (0x00014b9f) ai_gene_pane_1_t1

0x7c8c,	// (0x00014bd3) grid_ai_soft_ind_pane

0x7c2a,	// (0x00014b71) ai_gene_pane_2_t1_ParamLimits

0x7c2a,	// (0x00014b71) ai_gene_pane_2_t1

0xe71c,	// (0x0001b663) main_pane_empty_t1_ParamLimits

0xe71c,	// (0x0001b663) main_pane_empty_t1

0xe734,	// (0x0001b67b) main_pane_empty_t2_ParamLimits

0xe734,	// (0x0001b67b) main_pane_empty_t2

0xe749,	// (0x0001b690) main_pane_empty_t3_ParamLimits

0xe749,	// (0x0001b690) main_pane_empty_t3

0xe75b,	// (0x0001b6a2) main_pane_empty_t4_ParamLimits

0xe75b,	// (0x0001b6a2) main_pane_empty_t4

0xe76d,	// (0x0001b6b4) main_pane_empty_t5_ParamLimits

0xe76d,	// (0x0001b6b4) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001c4c1) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001c4c1) main_pane_empty_t

0x5628,	// (0x0001256f) bg_popup_window_pane_ParamLimits

0x5628,	// (0x0001256f) bg_popup_window_pane

0x799a,	// (0x000148e1) find_popup_pane_cp2_ParamLimits

0x799a,	// (0x000148e1) find_popup_pane_cp2

0x79a6,	// (0x000148ed) heading_pane_ParamLimits

0x79a6,	// (0x000148ed) heading_pane

0x4580,	// (0x000114c7) bg_popup_sub_pane

0x007e,	// (0x0000cfc5) bg_popup_window_pane_g1_ParamLimits

0x007e,	// (0x0000cfc5) bg_popup_window_pane_g1

0x008d,	// (0x0000cfd4) bg_popup_window_pane_g2_ParamLimits

0x008d,	// (0x0000cfd4) bg_popup_window_pane_g2

0x0099,	// (0x0000cfe0) bg_popup_window_pane_g3_ParamLimits

0x0099,	// (0x0000cfe0) bg_popup_window_pane_g3

0x00a5,	// (0x0000cfec) bg_popup_window_pane_g4_ParamLimits

0x00a5,	// (0x0000cfec) bg_popup_window_pane_g4

0x00b4,	// (0x0000cffb) bg_popup_window_pane_g5_ParamLimits

0x00b4,	// (0x0000cffb) bg_popup_window_pane_g5

0x00c4,	// (0x0000d00b) bg_popup_window_pane_g6_ParamLimits

0x00c4,	// (0x0000d00b) bg_popup_window_pane_g6

0x00d0,	// (0x0000d017) bg_popup_window_pane_g7_ParamLimits

0x00d0,	// (0x0000d017) bg_popup_window_pane_g7

0x00df,	// (0x0000d026) bg_popup_window_pane_g8_ParamLimits

0x00df,	// (0x0000d026) bg_popup_window_pane_g8

0x00ee,	// (0x0000d035) bg_popup_window_pane_g9_ParamLimits

0x00ee,	// (0x0000d035) bg_popup_window_pane_g9

0x7980,	// (0x000148c7) bg_popup_window_pane_g10_ParamLimits

0x7980,	// (0x000148c7) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x0001c818) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x0001c818) bg_popup_window_pane_g

0x78a9,	// (0x000147f0) bg_popup_heading_pane_ParamLimits

0x78a9,	// (0x000147f0) bg_popup_heading_pane

0x35f6,	// (0x0001053d) tabs_4_passive_pane_cp_srt_ParamLimits

0x35f6,	// (0x0001053d) tabs_4_passive_pane_cp_srt

0x3608,	// (0x0001054f) tabs_4_passive_pane_srt_ParamLimits

0x78bd,	// (0x00014804) heading_pane_g2

0x3608,	// (0x0001054f) tabs_4_passive_pane_srt

0x6bd6,	// (0x00013b1d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6bd6,	// (0x00013b1d) bg_passive_tab_pane_cp3_srt

0x78c5,	// (0x0001480c) heading_pane_t1_ParamLimits

0x78c5,	// (0x0001480c) heading_pane_t1

0x78dc,	// (0x00014823) heading_pane_t2_ParamLimits

0x78dc,	// (0x00014823) heading_pane_t2

0x0001,

0xf8cc,	// (0x0001c813) heading_pane_t_ParamLimits

0xf8cc,	// (0x0001c813) heading_pane_t

0x73d6,	// (0x0001431d) bg_popup_heading_pane_g1

0x7485,	// (0x000143cc) bg_popup_heading_pane_g2

0x748f,	// (0x000143d6) bg_popup_heading_pane_g3

0x7499,	// (0x000143e0) bg_popup_heading_pane_g4

0x74a3,	// (0x000143ea) bg_popup_heading_pane_g5

0x74ad,	// (0x000143f4) bg_popup_heading_pane_g6

0x74b5,	// (0x000143fc) bg_popup_heading_pane_g7

0x74bd,	// (0x00014404) bg_popup_heading_pane_g8

0x74c7,	// (0x0001440e) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x0001c7cf) bg_popup_heading_pane_g

0x6ab2,	// (0x000139f9) bg_popup_sub_pane_g1

0x6ac2,	// (0x00013a09) bg_popup_sub_pane_g2

0x6aba,	// (0x00013a01) bg_popup_sub_pane_g3

0x6ad2,	// (0x00013a19) bg_popup_sub_pane_g4

0x6aca,	// (0x00013a11) bg_popup_sub_pane_g5

0x6ada,	// (0x00013a21) bg_popup_sub_pane_g6

0x6ae2,	// (0x00013a29) bg_popup_sub_pane_g7

0x6af2,	// (0x00013a39) bg_popup_sub_pane_g8

0x6aea,	// (0x00013a31) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x0001c7a9) bg_popup_sub_pane_g

0x48f5,	// (0x0001183c) bg_popup_window_pane_cp5_ParamLimits

0x48f5,	// (0x0001183c) bg_popup_window_pane_cp5

0x4911,	// (0x00011858) popup_note_window_g1_ParamLimits

0x4911,	// (0x00011858) popup_note_window_g1

0x491d,	// (0x00011864) popup_note_window_t1_ParamLimits

0x491d,	// (0x00011864) popup_note_window_t1

0x492f,	// (0x00011876) popup_note_window_t2_ParamLimits

0x492f,	// (0x00011876) popup_note_window_t2

0x4941,	// (0x00011888) popup_note_window_t3_ParamLimits

0x4941,	// (0x00011888) popup_note_window_t3

0x4953,	// (0x0001189a) popup_note_window_t4_ParamLimits

0x4953,	// (0x0001189a) popup_note_window_t4

0x497b,	// (0x000118c2) popup_note_window_t5_ParamLimits

0x497b,	// (0x000118c2) popup_note_window_t5

0x0004,

0xf585,	// (0x0001c4cc) popup_note_window_t_ParamLimits

0xf585,	// (0x0001c4cc) popup_note_window_t

0x499f,	// (0x000118e6) bg_popup_window_pane_cp6_ParamLimits

0x499f,	// (0x000118e6) bg_popup_window_pane_cp6

0x734a,	// (0x00014291) popup_note_image_window_g1_ParamLimits

0x734a,	// (0x00014291) popup_note_image_window_g1

0x7356,	// (0x0001429d) popup_note_image_window_g2_ParamLimits

0x7356,	// (0x0001429d) popup_note_image_window_g2

0x0001,

0xf856,	// (0x0001c79d) popup_note_image_window_g_ParamLimits

0xf856,	// (0x0001c79d) popup_note_image_window_g

0x736f,	// (0x000142b6) popup_note_image_window_t1_ParamLimits

0x736f,	// (0x000142b6) popup_note_image_window_t1

0x7388,	// (0x000142cf) popup_note_image_window_t2_ParamLimits

0x7388,	// (0x000142cf) popup_note_image_window_t2

0x73a1,	// (0x000142e8) popup_note_image_window_t3_ParamLimits

0x73a1,	// (0x000142e8) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x0001c7a2) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x0001c7a2) popup_note_image_window_t

0x720b,	// (0x00014152) bg_popup_window_pane_cp7_ParamLimits

0x720b,	// (0x00014152) bg_popup_window_pane_cp7

0x723b,	// (0x00014182) popup_note_wait_window_g1_ParamLimits

0x723b,	// (0x00014182) popup_note_wait_window_g1

0x7247,	// (0x0001418e) popup_note_wait_window_g2_ParamLimits

0x7247,	// (0x0001418e) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x0001c78b) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x0001c78b) popup_note_wait_window_g

0x725f,	// (0x000141a6) popup_note_wait_window_t1_ParamLimits

0x725f,	// (0x000141a6) popup_note_wait_window_t1

0x7286,	// (0x000141cd) popup_note_wait_window_t2_ParamLimits

0x7286,	// (0x000141cd) popup_note_wait_window_t2

0x72a3,	// (0x000141ea) popup_note_wait_window_t3_ParamLimits

0x72a3,	// (0x000141ea) popup_note_wait_window_t3

0x72b6,	// (0x000141fd) popup_note_wait_window_t4_ParamLimits

0x72b6,	// (0x000141fd) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x0001c792) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x0001c792) popup_note_wait_window_t

0x72db,	// (0x00014222) wait_bar_pane_ParamLimits

0x72db,	// (0x00014222) wait_bar_pane

0x4580,	// (0x000114c7) wait_anim_pane

0x4580,	// (0x000114c7) wait_border_pane

0x4576,	// (0x000114bd) wait_anim_pane_g1

0x4576,	// (0x000114bd) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001c64b) wait_anim_pane_g

0x71af,	// (0x000140f6) wait_border_pane_g1

0x71ba,	// (0x00014101) wait_border_pane_g2

0x71c3,	// (0x0001410a) wait_border_pane_g3

0x0002,

0xf83d,	// (0x0001c784) wait_border_pane_g

0x701f,	// (0x00013f66) bg_popup_window_pane_cp16_ParamLimits

0x701f,	// (0x00013f66) bg_popup_window_pane_cp16

0x711f,	// (0x00014066) indicator_popup_pane_cp4_ParamLimits

0x711f,	// (0x00014066) indicator_popup_pane_cp4

0x7133,	// (0x0001407a) popup_query_data_window_t1_ParamLimits

0x7133,	// (0x0001407a) popup_query_data_window_t1

0x7145,	// (0x0001408c) popup_query_data_window_t2_ParamLimits

0x7145,	// (0x0001408c) popup_query_data_window_t2

0x715e,	// (0x000140a5) popup_query_data_window_t3_ParamLimits

0x715e,	// (0x000140a5) popup_query_data_window_t3

0x0002,

0xf836,	// (0x0001c77d) popup_query_data_window_t_ParamLimits

0xf836,	// (0x0001c77d) popup_query_data_window_t

0x7178,	// (0x000140bf) query_popup_data_pane_ParamLimits

0x7178,	// (0x000140bf) query_popup_data_pane

0x718c,	// (0x000140d3) query_popup_data_pane_cp1_ParamLimits

0x718c,	// (0x000140d3) query_popup_data_pane_cp1

0x701f,	// (0x00013f66) bg_popup_window_pane_cp10_ParamLimits

0x701f,	// (0x00013f66) bg_popup_window_pane_cp10

0x7051,	// (0x00013f98) indicator_popup_pane_ParamLimits

0x7051,	// (0x00013f98) indicator_popup_pane

0x7073,	// (0x00013fba) popup_query_code_window_t1_ParamLimits

0x7073,	// (0x00013fba) popup_query_code_window_t1

0x708d,	// (0x00013fd4) popup_query_code_window_t2_ParamLimits

0x708d,	// (0x00013fd4) popup_query_code_window_t2

0x70d6,	// (0x0001401d) popup_query_code_window_t3_ParamLimits

0x70d6,	// (0x0001401d) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x0001c776) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x0001c776) popup_query_code_window_t

0x7105,	// (0x0001404c) query_popup_pane_ParamLimits

0x7105,	// (0x0001404c) query_popup_pane

0x499f,	// (0x000118e6) bg_popup_window_pane_cp15_ParamLimits

0x499f,	// (0x000118e6) bg_popup_window_pane_cp15

0x49bd,	// (0x00011904) indicator_popup_pane_cp1_ParamLimits

0x49bd,	// (0x00011904) indicator_popup_pane_cp1

0x49d0,	// (0x00011917) indicator_popup_pane_cp2_ParamLimits

0x49d0,	// (0x00011917) indicator_popup_pane_cp2

0x49e3,	// (0x0001192a) popup_query_data_code_window_g1_ParamLimits

0x49e3,	// (0x0001192a) popup_query_data_code_window_g1

0x49f6,	// (0x0001193d) popup_query_data_code_window_t1_ParamLimits

0x49f6,	// (0x0001193d) popup_query_data_code_window_t1

0x4a08,	// (0x0001194f) popup_query_data_code_window_t2_ParamLimits

0x4a08,	// (0x0001194f) popup_query_data_code_window_t2

0x4a1a,	// (0x00011961) popup_query_data_code_window_t3_ParamLimits

0x4a1a,	// (0x00011961) popup_query_data_code_window_t3

0x4a30,	// (0x00011977) popup_query_data_code_window_t4_ParamLimits

0x4a30,	// (0x00011977) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001c4d7) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001c4d7) popup_query_data_code_window_t

0x32bf,	// (0x00010206) list_single_midp_graphic_pane_g3

0x4a48,	// (0x0001198f) query_popup_data_pane_cp2_ParamLimits

0x4a5b,	// (0x000119a2) query_popup_pane_cp2_ParamLimits

0x4a5b,	// (0x000119a2) query_popup_pane_cp2

0x4580,	// (0x000114c7) bg_popup_window_pane_cp11

0x7017,	// (0x00013f5e) heading_pane_cp5

0x4b43,	// (0x00011a8a) listscroll_popup_info_pane

0x4580,	// (0x000114c7) input_focus_pane_cp3

0x4a6e,	// (0x000119b5) query_popup_pane_t1

0x4a7c,	// (0x000119c3) list_popup_info_pane_ParamLimits

0x4a7c,	// (0x000119c3) list_popup_info_pane

0x4a8b,	// (0x000119d2) listscroll_popup_info_pane_g1

0x4a93,	// (0x000119da) scroll_pane_cp7

0x4a9d,	// (0x000119e4) popup_info_list_pane_t1_ParamLimits

0x4a9d,	// (0x000119e4) popup_info_list_pane_t1

0x4ab7,	// (0x000119fe) popup_info_list_pane_t2_ParamLimits

0x4ab7,	// (0x000119fe) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001c4e0) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001c4e0) popup_info_list_pane_t

0x4580,	// (0x000114c7) bg_popup_window_pane_cp12

0x8495,	// (0x000153dc) find_popup_pane

0x4660,	// (0x000115a7) bg_popup_window_pane_cp3

0x4ad1,	// (0x00011a18) heading_pane_cp3

0x4add,	// (0x00011a24) listscroll_popup_graphic_pane

0x4580,	// (0x000114c7) bg_popup_window_pane_cp4

0xe7cf,	// (0x0001b716) heading_pane_cp4

0x4b43,	// (0x00011a8a) listscroll_popup_colour_pane

0x4b4b,	// (0x00011a92) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x4b4b,	// (0x00011a92) cell_large_graphic_colour_none_popup_pane

0xe7d7,	// (0x0001b71e) grid_large_graphic_colour_popup_pane_ParamLimits

0xe7d7,	// (0x0001b71e) grid_large_graphic_colour_popup_pane

0x4b87,	// (0x00011ace) listscroll_popup_colour_pane_g1_ParamLimits

0x4b87,	// (0x00011ace) listscroll_popup_colour_pane_g1

0x4b9e,	// (0x00011ae5) listscroll_popup_colour_pane_g2_ParamLimits

0x4b9e,	// (0x00011ae5) listscroll_popup_colour_pane_g2

0x4bb5,	// (0x00011afc) listscroll_popup_colour_pane_g3_ParamLimits

0x4bb5,	// (0x00011afc) listscroll_popup_colour_pane_g3

0xe7fb,	// (0x0001b742) listscroll_popup_colour_pane_g4_ParamLimits

0xe7fb,	// (0x0001b742) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001c4e5) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001c4e5) listscroll_popup_colour_pane_g

0x4bd4,	// (0x00011b1b) scroll_pane_cp6_ParamLimits

0x4bd4,	// (0x00011b1b) scroll_pane_cp6

0xe80a,	// (0x0001b751) cell_large_graphic_colour_popup_pane_ParamLimits

0xe80a,	// (0x0001b751) cell_large_graphic_colour_popup_pane

0x4c05,	// (0x00011b4c) cell_large_graphic_colour_none_popup_pane_t1

0x4580,	// (0x000114c7) grid_highlight_pane_cp5

0x4c14,	// (0x00011b5b) cell_large_graphic_colour_popup_pane_g1

0x4c1c,	// (0x00011b63) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001c4ee) cell_large_graphic_colour_popup_pane_g

0x4c24,	// (0x00011b6b) cell_large_graphic_colour_popup_pane_g2_copy1

0x4c2d,	// (0x00011b74) grid_highlight_pane_cp4

0x4c35,	// (0x00011b7c) bg_popup_window_pane_cp8_ParamLimits

0x4c35,	// (0x00011b7c) bg_popup_window_pane_cp8

0x4c50,	// (0x00011b97) popup_snote_single_text_window_g1_ParamLimits

0x4c50,	// (0x00011b97) popup_snote_single_text_window_g1

0x4c62,	// (0x00011ba9) popup_snote_single_text_window_t1_ParamLimits

0x4c62,	// (0x00011ba9) popup_snote_single_text_window_t1

0x4c75,	// (0x00011bbc) popup_snote_single_text_window_t2_ParamLimits

0x4c75,	// (0x00011bbc) popup_snote_single_text_window_t2

0x4c88,	// (0x00011bcf) popup_snote_single_text_window_t3_ParamLimits

0x4c88,	// (0x00011bcf) popup_snote_single_text_window_t3

0x4cc1,	// (0x00011c08) popup_snote_single_text_window_t4_ParamLimits

0x4cc1,	// (0x00011c08) popup_snote_single_text_window_t4

0x4cf5,	// (0x00011c3c) popup_snote_single_text_window_t5_ParamLimits

0x4cf5,	// (0x00011c3c) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001c4f3) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001c4f3) popup_snote_single_text_window_t

0x4d24,	// (0x00011c6b) bg_popup_window_pane_cp9_ParamLimits

0x4d24,	// (0x00011c6b) bg_popup_window_pane_cp9

0x4c50,	// (0x00011b97) popup_snote_single_graphic_window_g1_ParamLimits

0x4c50,	// (0x00011b97) popup_snote_single_graphic_window_g1

0x4d32,	// (0x00011c79) popup_snote_single_graphic_window_g2_ParamLimits

0x4d32,	// (0x00011c79) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001c4fe) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001c4fe) popup_snote_single_graphic_window_g

0x4d3e,	// (0x00011c85) popup_snote_single_graphic_window_t1_ParamLimits

0x4d3e,	// (0x00011c85) popup_snote_single_graphic_window_t1

0x4d51,	// (0x00011c98) popup_snote_single_graphic_window_t2_ParamLimits

0x4d51,	// (0x00011c98) popup_snote_single_graphic_window_t2

0x4d64,	// (0x00011cab) popup_snote_single_graphic_window_t3_ParamLimits

0x4d64,	// (0x00011cab) popup_snote_single_graphic_window_t3

0x4d9d,	// (0x00011ce4) popup_snote_single_graphic_window_t4_ParamLimits

0x4d9d,	// (0x00011ce4) popup_snote_single_graphic_window_t4

0x4dd1,	// (0x00011d18) popup_snote_single_graphic_window_t5_ParamLimits

0x4dd1,	// (0x00011d18) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001c503) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001c503) popup_snote_single_graphic_window_t

0x8397,	// (0x000152de) grid_graphic_popup_pane_ParamLimits

0x8397,	// (0x000152de) grid_graphic_popup_pane

0x83bf,	// (0x00015306) listscroll_popup_graphic_pane_g1_ParamLimits

0x83bf,	// (0x00015306) listscroll_popup_graphic_pane_g1

0x0424,	// (0x0000d36b) listscroll_popup_graphic_pane_g2_ParamLimits

0x0424,	// (0x0000d36b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x0001c8f3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x0001c8f3) listscroll_popup_graphic_pane_g

0x83e7,	// (0x0001532e) scroll_pane_cp5

0x03e8,	// (0x0000d32f) cell_graphic_popup_pane_ParamLimits

0x03e8,	// (0x0000d32f) cell_graphic_popup_pane

0x8323,	// (0x0001526a) cell_graphic_popup_pane_g1

0x832b,	// (0x00015272) cell_graphic_popup_pane_g2

0x4c24,	// (0x00011b6b) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x0001c8ec) cell_graphic_popup_pane_g

0x8334,	// (0x0001527b) cell_graphic_popup_pane_t2

0x4c2d,	// (0x00011b74) grid_highlight_pane_cp3

0x4e12,	// (0x00011d59) list_gen_pane_ParamLimits

0x4e12,	// (0x00011d59) list_gen_pane

0x4e44,	// (0x00011d8b) scroll_pane

0x03a3,	// (0x0000d2ea) bg_list_pane_g1_ParamLimits

0x03a3,	// (0x0000d2ea) bg_list_pane_g1

0x82a0,	// (0x000151e7) bg_list_pane_g2_ParamLimits

0x82a0,	// (0x000151e7) bg_list_pane_g2

0x82b3,	// (0x000151fa) bg_list_pane_g3_ParamLimits

0x82b3,	// (0x000151fa) bg_list_pane_g3

0x82c5,	// (0x0001520c) bg_list_pane_g4_ParamLimits

0x82c5,	// (0x0001520c) bg_list_pane_g4

0x03be,	// (0x0000d305) bg_list_pane_g5_ParamLimits

0x03be,	// (0x0000d305) bg_list_pane_g5

0x0004,

0xf99a,	// (0x0001c8e1) bg_list_pane_g_ParamLimits

0xf99a,	// (0x0001c8e1) bg_list_pane_g

0x0332,	// (0x0000d279) list_double2_graphic_large_graphic_pane_ParamLimits

0x0332,	// (0x0000d279) list_double2_graphic_large_graphic_pane

0x0332,	// (0x0000d279) list_double2_graphic_pane_ParamLimits

0x0332,	// (0x0000d279) list_double2_graphic_pane

0x0332,	// (0x0000d279) list_double2_large_graphic_pane_ParamLimits

0x0332,	// (0x0000d279) list_double2_large_graphic_pane

0x0345,	// (0x0000d28c) list_double2_pane_ParamLimits

0x0345,	// (0x0000d28c) list_double2_pane

0x0332,	// (0x0000d279) list_double_graphic_heading_pane_ParamLimits

0x0332,	// (0x0000d279) list_double_graphic_heading_pane

0x0332,	// (0x0000d279) list_double_graphic_pane_ParamLimits

0x0332,	// (0x0000d279) list_double_graphic_pane

0x0332,	// (0x0000d279) list_double_heading_pane_ParamLimits

0x0332,	// (0x0000d279) list_double_heading_pane

0x0332,	// (0x0000d279) list_double_large_graphic_pane_ParamLimits

0x0332,	// (0x0000d279) list_double_large_graphic_pane

0x0332,	// (0x0000d279) list_double_number_pane_ParamLimits

0x0332,	// (0x0000d279) list_double_number_pane

0x0332,	// (0x0000d279) list_double_pane_ParamLimits

0x0332,	// (0x0000d279) list_double_pane

0x0332,	// (0x0000d279) list_double_time_pane_ParamLimits

0x0332,	// (0x0000d279) list_double_time_pane

0x0332,	// (0x0000d279) list_setting_number_pane_ParamLimits

0x0332,	// (0x0000d279) list_setting_number_pane

0x0332,	// (0x0000d279) list_setting_pane_ParamLimits

0x0332,	// (0x0000d279) list_setting_pane

0x0357,	// (0x0000d29e) list_single_2graphic_pane_ParamLimits

0x0357,	// (0x0000d29e) list_single_2graphic_pane

0x0357,	// (0x0000d29e) list_single_graphic_heading_pane_ParamLimits

0x0357,	// (0x0000d29e) list_single_graphic_heading_pane

0x0357,	// (0x0000d29e) list_single_graphic_pane_ParamLimits

0x0357,	// (0x0000d29e) list_single_graphic_pane

0x0357,	// (0x0000d29e) list_single_heading_pane_ParamLimits

0x0357,	// (0x0000d29e) list_single_heading_pane

0x0332,	// (0x0000d279) list_single_large_graphic_pane_ParamLimits

0x0332,	// (0x0000d279) list_single_large_graphic_pane

0x0357,	// (0x0000d29e) list_single_number_heading_pane_ParamLimits

0x0357,	// (0x0000d29e) list_single_number_heading_pane

0x0357,	// (0x0000d29e) list_single_number_pane_ParamLimits

0x0357,	// (0x0000d29e) list_single_number_pane

0x0357,	// (0x0000d29e) list_single_pane_ParamLimits

0x0357,	// (0x0000d29e) list_single_pane

0x4580,	// (0x000114c7) list_highlight_pane_cp1

0x4e84,	// (0x00011dcb) list_single_pane_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_single_pane_g1

0x4e90,	// (0x00011dd7) list_single_pane_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001c515) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001c515) list_single_pane_g

0x8137,	// (0x0001507e) list_single_pane_t1_ParamLimits

0x8137,	// (0x0001507e) list_single_pane_t1

0x4e84,	// (0x00011dcb) list_single_number_pane_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_single_number_pane_g1

0x4e90,	// (0x00011dd7) list_single_number_pane_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001c515) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001c515) list_single_number_pane_g

0x6a40,	// (0x00013987) list_single_number_pane_t1_ParamLimits

0x6a40,	// (0x00013987) list_single_number_pane_t1

0x7ee3,	// (0x00014e2a) list_single_number_pane_t2_ParamLimits

0x7ee3,	// (0x00014e2a) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x0001c8a2) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x0001c8a2) list_single_number_pane_t

0x4e78,	// (0x00011dbf) list_single_graphic_pane_g1_ParamLimits

0x4e78,	// (0x00011dbf) list_single_graphic_pane_g1

0x4e84,	// (0x00011dcb) list_single_graphic_pane_g2_ParamLimits

0x4e84,	// (0x00011dcb) list_single_graphic_pane_g2

0x4e90,	// (0x00011dd7) list_single_graphic_pane_g3_ParamLimits

0x4e90,	// (0x00011dd7) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001c50e) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001c50e) list_single_graphic_pane_g

0x4e9c,	// (0x00011de3) list_single_graphic_pane_t1_ParamLimits

0x4e9c,	// (0x00011de3) list_single_graphic_pane_t1

0x4e84,	// (0x00011dcb) list_single_heading_pane_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_single_heading_pane_g1

0x4e90,	// (0x00011dd7) list_single_heading_pane_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001c515) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001c515) list_single_heading_pane_g

0x4eb2,	// (0x00011df9) list_single_heading_pane_t1_ParamLimits

0x4eb2,	// (0x00011df9) list_single_heading_pane_t1

0x4ec8,	// (0x00011e0f) list_single_heading_pane_t2_ParamLimits

0x4ec8,	// (0x00011e0f) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001c51a) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001c51a) list_single_heading_pane_t

0x4e84,	// (0x00011dcb) list_single_number_heading_pane_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_single_number_heading_pane_g1

0x4e90,	// (0x00011dd7) list_single_number_heading_pane_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001c515) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001c515) list_single_number_heading_pane_g

0x4eb2,	// (0x00011df9) list_single_number_heading_pane_t1_ParamLimits

0x4eb2,	// (0x00011df9) list_single_number_heading_pane_t1

0x4eda,	// (0x00011e21) list_single_number_heading_pane_t2_ParamLimits

0x4eda,	// (0x00011e21) list_single_number_heading_pane_t2

0x4eec,	// (0x00011e33) list_single_number_heading_pane_t3_ParamLimits

0x4eec,	// (0x00011e33) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001c51f) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001c51f) list_single_number_heading_pane_t

0x4efe,	// (0x00011e45) list_single_graphic_heading_pane_g1_ParamLimits

0x4efe,	// (0x00011e45) list_single_graphic_heading_pane_g1

0xe833,	// (0x0001b77a) list_single_graphic_heading_pane_g4_ParamLimits

0xe833,	// (0x0001b77a) list_single_graphic_heading_pane_g4

0x4e90,	// (0x00011dd7) list_single_graphic_heading_pane_g5_ParamLimits

0x4e90,	// (0x00011dd7) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001c526) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001c526) list_single_graphic_heading_pane_g

0x4eb2,	// (0x00011df9) list_single_graphic_heading_pane_t1_ParamLimits

0x4eb2,	// (0x00011df9) list_single_graphic_heading_pane_t1

0x4f1b,	// (0x00011e62) list_single_graphic_heading_pane_t2_ParamLimits

0x4f1b,	// (0x00011e62) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001c52d) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001c52d) list_single_graphic_heading_pane_t

0x8a6c,	// (0x000159b3) list_single_large_graphic_pane_g1_ParamLimits

0x8a6c,	// (0x000159b3) list_single_large_graphic_pane_g1

0x8a78,	// (0x000159bf) list_single_large_graphic_pane_g2_ParamLimits

0x8a78,	// (0x000159bf) list_single_large_graphic_pane_g2

0x8a84,	// (0x000159cb) list_single_large_graphic_pane_g3_ParamLimits

0x8a84,	// (0x000159cb) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001c532) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001c532) list_single_large_graphic_pane_g

0x71ba,	// (0x00014101) wait_border_pane_g2_copy1

0xe844,	// (0x0001b78b) list_single_large_graphic_pane_g4_cp2

0x8a90,	// (0x000159d7) list_single_large_graphic_pane_t1_ParamLimits

0x8a90,	// (0x000159d7) list_single_large_graphic_pane_t1

0x6082,	// (0x00012fc9) list_double_pane_g1_ParamLimits

0x6082,	// (0x00012fc9) list_double_pane_g1

0xe84c,	// (0x0001b793) list_double_pane_g2_ParamLimits

0xe84c,	// (0x0001b793) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001c539) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001c539) list_double_pane_g

0xe858,	// (0x0001b79f) list_double_pane_t1_ParamLimits

0xe858,	// (0x0001b79f) list_double_pane_t1

0xe86e,	// (0x0001b7b5) list_double_pane_t2_ParamLimits

0xe86e,	// (0x0001b7b5) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001c53e) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001c53e) list_double_pane_t

0xe880,	// (0x0001b7c7) list_double2_pane_g1_ParamLimits

0xe880,	// (0x0001b7c7) list_double2_pane_g1

0x4f7b,	// (0x00011ec2) list_double2_pane_g2_ParamLimits

0x4f7b,	// (0x00011ec2) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001c543) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001c543) list_double2_pane_g

0x4f87,	// (0x00011ece) list_double2_pane_t1_ParamLimits

0x4f87,	// (0x00011ece) list_double2_pane_t1

0xe891,	// (0x0001b7d8) list_double2_pane_t2_ParamLimits

0xe891,	// (0x0001b7d8) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001c548) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001c548) list_double2_pane_t

0x6082,	// (0x00012fc9) list_double_number_pane_g1_ParamLimits

0x6082,	// (0x00012fc9) list_double_number_pane_g1

0xe84c,	// (0x0001b793) list_double_number_pane_g2_ParamLimits

0xe84c,	// (0x0001b793) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001c539) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001c539) list_double_number_pane_g

0xe8a3,	// (0x0001b7ea) list_double_number_pane_t1_ParamLimits

0xe8a3,	// (0x0001b7ea) list_double_number_pane_t1

0xe8b5,	// (0x0001b7fc) list_double_number_pane_t2_ParamLimits

0xe8b5,	// (0x0001b7fc) list_double_number_pane_t2

0xe8cb,	// (0x0001b812) list_double_number_pane_t3_ParamLimits

0xe8cb,	// (0x0001b812) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001c54d) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001c54d) list_double_number_pane_t

0x783d,	// (0x00014784) list_double_graphic_pane_g1_ParamLimits

0x783d,	// (0x00014784) list_double_graphic_pane_g1

0xe8dd,	// (0x0001b824) list_double_graphic_pane_g2_ParamLimits

0xe8dd,	// (0x0001b824) list_double_graphic_pane_g2

0xe8ec,	// (0x0001b833) list_double_graphic_pane_g3_ParamLimits

0xe8ec,	// (0x0001b833) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001c554) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001c554) list_double_graphic_pane_g

0xe904,	// (0x0001b84b) list_double_graphic_pane_t1_ParamLimits

0xe904,	// (0x0001b84b) list_double_graphic_pane_t1

0xe91a,	// (0x0001b861) list_double_graphic_pane_t2_ParamLimits

0xe91a,	// (0x0001b861) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001c55d) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001c55d) list_double_graphic_pane_t

0xe92c,	// (0x0001b873) list_double2_graphic_pane_g1_ParamLimits

0xe92c,	// (0x0001b873) list_double2_graphic_pane_g1

0xe938,	// (0x0001b87f) list_double2_graphic_pane_g2_ParamLimits

0xe938,	// (0x0001b87f) list_double2_graphic_pane_g2

0xe944,	// (0x0001b88b) list_double2_graphic_pane_g3_ParamLimits

0xe944,	// (0x0001b88b) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001c562) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001c562) list_double2_graphic_pane_g

0xe950,	// (0x0001b897) list_double2_graphic_pane_t1_ParamLimits

0xe950,	// (0x0001b897) list_double2_graphic_pane_t1

0xe966,	// (0x0001b8ad) list_double2_graphic_pane_t2_ParamLimits

0xe966,	// (0x0001b8ad) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001c569) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001c569) list_double2_graphic_pane_t

0xe978,	// (0x0001b8bf) list_double_large_graphic_pane_g1_ParamLimits

0xe978,	// (0x0001b8bf) list_double_large_graphic_pane_g1

0xe997,	// (0x0001b8de) list_double_large_graphic_pane_g2_ParamLimits

0xe997,	// (0x0001b8de) list_double_large_graphic_pane_g2

0xe84c,	// (0x0001b793) list_double_large_graphic_pane_g3_ParamLimits

0xe84c,	// (0x0001b793) list_double_large_graphic_pane_g3

0xe9a8,	// (0x0001b8ef) list_double_large_graphic_pane_g4_ParamLimits

0xe9a8,	// (0x0001b8ef) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001c56e) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001c56e) list_double_large_graphic_pane_g

0xe9bb,	// (0x0001b902) list_double_large_graphic_pane_t1_ParamLimits

0xe9bb,	// (0x0001b902) list_double_large_graphic_pane_t1

0xe9d4,	// (0x0001b91b) list_double_large_graphic_pane_t2_ParamLimits

0xe9d4,	// (0x0001b91b) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001c579) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001c579) list_double_large_graphic_pane_t

0xe9e6,	// (0x0001b92d) list_double2_large_graphic_pane_g1_ParamLimits

0xe9e6,	// (0x0001b92d) list_double2_large_graphic_pane_g1

0xe9f2,	// (0x0001b939) list_double2_large_graphic_pane_g2_ParamLimits

0xe9f2,	// (0x0001b939) list_double2_large_graphic_pane_g2

0xe944,	// (0x0001b88b) list_double2_large_graphic_pane_g3_ParamLimits

0xe944,	// (0x0001b88b) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001c57e) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001c57e) list_double2_large_graphic_pane_g

0xea03,	// (0x0001b94a) list_double2_large_graphic_pane_t1_ParamLimits

0xea03,	// (0x0001b94a) list_double2_large_graphic_pane_t1

0xea19,	// (0x0001b960) list_double2_large_graphic_pane_t2_ParamLimits

0xea19,	// (0x0001b960) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001c585) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001c585) list_double2_large_graphic_pane_t

0xea2b,	// (0x0001b972) list_double_heading_pane_g1_ParamLimits

0xea2b,	// (0x0001b972) list_double_heading_pane_g1

0xea3c,	// (0x0001b983) list_double_heading_pane_g2_ParamLimits

0xea3c,	// (0x0001b983) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001c58a) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001c58a) list_double_heading_pane_g

0xea48,	// (0x0001b98f) list_double_heading_pane_t1_ParamLimits

0xea48,	// (0x0001b98f) list_double_heading_pane_t1

0xea5e,	// (0x0001b9a5) list_double_heading_pane_t2_ParamLimits

0xea5e,	// (0x0001b9a5) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001c58f) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001c58f) list_double_heading_pane_t

0x5089,	// (0x00011fd0) list_double_graphic_heading_pane_g1_ParamLimits

0x5089,	// (0x00011fd0) list_double_graphic_heading_pane_g1

0xea2b,	// (0x0001b972) list_double_graphic_heading_pane_g2_ParamLimits

0xea2b,	// (0x0001b972) list_double_graphic_heading_pane_g2

0xea3c,	// (0x0001b983) list_double_graphic_heading_pane_g3_ParamLimits

0xea3c,	// (0x0001b983) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001c594) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001c594) list_double_graphic_heading_pane_g

0xea70,	// (0x0001b9b7) list_double_graphic_heading_pane_t1_ParamLimits

0xea70,	// (0x0001b9b7) list_double_graphic_heading_pane_t1

0xea86,	// (0x0001b9cd) list_double_graphic_heading_pane_t2_ParamLimits

0xea86,	// (0x0001b9cd) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001c59b) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001c59b) list_double_graphic_heading_pane_t

0xe997,	// (0x0001b8de) list_double_time_pane_g1_ParamLimits

0xe997,	// (0x0001b8de) list_double_time_pane_g1

0xe84c,	// (0x0001b793) list_double_time_pane_g2_ParamLimits

0xe84c,	// (0x0001b793) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001c5a0) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001c5a0) list_double_time_pane_g

0xea98,	// (0x0001b9df) list_double_time_pane_t1_ParamLimits

0xea98,	// (0x0001b9df) list_double_time_pane_t1

0xeaae,	// (0x0001b9f5) list_double_time_pane_t2_ParamLimits

0xeaae,	// (0x0001b9f5) list_double_time_pane_t2

0xeac0,	// (0x0001ba07) list_double_time_pane_t3_ParamLimits

0xeac0,	// (0x0001ba07) list_double_time_pane_t3

0xead2,	// (0x0001ba19) list_double_time_pane_t4_ParamLimits

0xead2,	// (0x0001ba19) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001c5a5) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001c5a5) list_double_time_pane_t

0xe938,	// (0x0001b87f) list_setting_pane_g1_ParamLimits

0xe938,	// (0x0001b87f) list_setting_pane_g1

0xe944,	// (0x0001b88b) list_setting_pane_g2_ParamLimits

0xe944,	// (0x0001b88b) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001c5ae) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001c5ae) list_setting_pane_g

0xeae4,	// (0x0001ba2b) list_setting_pane_t1_ParamLimits

0xeae4,	// (0x0001ba2b) list_setting_pane_t1

0xeafb,	// (0x0001ba42) list_setting_pane_t2_ParamLimits

0xeafb,	// (0x0001ba42) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001c5b3) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001c5b3) list_setting_pane_t

0xeb38,	// (0x0001ba7f) set_value_pane_cp_ParamLimits

0xeb38,	// (0x0001ba7f) set_value_pane_cp

0xe938,	// (0x0001b87f) list_setting_number_pane_g1_ParamLimits

0xe938,	// (0x0001b87f) list_setting_number_pane_g1

0xe944,	// (0x0001b88b) list_setting_number_pane_g2_ParamLimits

0xe944,	// (0x0001b88b) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001c5ae) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001c5ae) list_setting_number_pane_g

0xeb44,	// (0x0001ba8b) list_setting_number_pane_t1_ParamLimits

0xeb44,	// (0x0001ba8b) list_setting_number_pane_t1

0xeb58,	// (0x0001ba9f) list_setting_number_pane_t2_ParamLimits

0xeb58,	// (0x0001ba9f) list_setting_number_pane_t2

0xeb6f,	// (0x0001bab6) list_setting_number_pane_t3_ParamLimits

0xeb6f,	// (0x0001bab6) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001c5ba) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001c5ba) list_setting_number_pane_t

0xeb38,	// (0x0001ba7f) set_value_pane_ParamLimits

0xeb38,	// (0x0001ba7f) set_value_pane

0x52ef,	// (0x00012236) bg_set_opt_pane_ParamLimits

0x52ef,	// (0x00012236) bg_set_opt_pane

0x5310,	// (0x00012257) set_value_pane_t1

0x531e,	// (0x00012265) slider_set_pane_cp3

0x5327,	// (0x0001226e) volume_small_pane_cp

0x5330,	// (0x00012277) list_form_gen_pane

0x5339,	// (0x00012280) scroll_pane_cp8

0xebb2,	// (0x0001baf9) form_field_data_pane_ParamLimits

0xebb2,	// (0x0001baf9) form_field_data_pane

0xebc9,	// (0x0001bb10) form_field_data_wide_pane_ParamLimits

0xebc9,	// (0x0001bb10) form_field_data_wide_pane

0xebe9,	// (0x0001bb30) form_field_popup_pane_ParamLimits

0xebe9,	// (0x0001bb30) form_field_popup_pane

0xec01,	// (0x0001bb48) form_field_popup_wide_pane_ParamLimits

0xec01,	// (0x0001bb48) form_field_popup_wide_pane

0x53c6,	// (0x0001230d) form_field_slider_pane_ParamLimits

0x53c6,	// (0x0001230d) form_field_slider_pane

0x53d9,	// (0x00012320) form_field_slider_wide_pane_ParamLimits

0x53d9,	// (0x00012320) form_field_slider_wide_pane

0x53ec,	// (0x00012333) data_form_pane

0xec28,	// (0x0001bb6f) form_field_data_pane_t1

0x541c,	// (0x00012363) input_focus_pane

0x542a,	// (0x00012371) data_form_wide_pane

0x5456,	// (0x0001239d) form_field_data_wide_pane_t1

0x4c42,	// (0x00011b89) input_focus_pane_cp6

0xec42,	// (0x0001bb89) form_field_popup_pane_t1

0x541c,	// (0x00012363) input_focus_pane_cp7

0x548f,	// (0x000123d6) list_form_pane

0x54a3,	// (0x000123ea) form_field_popup_wide_pane_t1

0x541c,	// (0x00012363) input_focus_pane_cp8

0x54b8,	// (0x000123ff) list_form_wide_pane

0xec64,	// (0x0001bbab) form_field_slider_pane_t1_ParamLimits

0xec64,	// (0x0001bbab) form_field_slider_pane_t1

0xec7c,	// (0x0001bbc3) form_field_slider_pane_t2_ParamLimits

0xec7c,	// (0x0001bbc3) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001c5ca) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001c5ca) form_field_slider_pane_t

0x48f5,	// (0x0001183c) input_focus_pane_cp9_ParamLimits

0x48f5,	// (0x0001183c) input_focus_pane_cp9

0xec91,	// (0x0001bbd8) slider_cont_pane_ParamLimits

0xec91,	// (0x0001bbd8) slider_cont_pane

0x5509,	// (0x00012450) form_field_slider_wide_pane_t1_ParamLimits

0x5509,	// (0x00012450) form_field_slider_wide_pane_t1

0x551b,	// (0x00012462) form_field_slider_wide_pane_t2_ParamLimits

0x551b,	// (0x00012462) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001c5cf) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001c5cf) form_field_slider_wide_pane_t

0x48f5,	// (0x0001183c) input_focus_pane_cp10_ParamLimits

0x48f5,	// (0x0001183c) input_focus_pane_cp10

0xeca5,	// (0x0001bbec) slider_cont_pane_cp1_ParamLimits

0xeca5,	// (0x0001bbec) slider_cont_pane_cp1

0xecb9,	// (0x0001bc00) slider_form_pane_cp

0x5549,	// (0x00012490) input_focus_pane_g1

0x5551,	// (0x00012498) input_focus_pane_g2

0x5559,	// (0x000124a0) input_focus_pane_g3

0x5561,	// (0x000124a8) input_focus_pane_g4

0x5569,	// (0x000124b0) input_focus_pane_g5

0x5571,	// (0x000124b8) input_focus_pane_g6

0x5579,	// (0x000124c0) input_focus_pane_g7

0x5581,	// (0x000124c8) input_focus_pane_g8

0x5589,	// (0x000124d0) input_focus_pane_g9

0x4576,	// (0x000114bd) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001c5d4) input_focus_pane_g

0x71c3,	// (0x0001410a) wait_border_pane_g3_copy1

0xecc1,	// (0x0001bc08) data_form_pane_t1

0x4576,	// (0x000114bd) wait_anim_pane_g1_copy1

0x0316,	// (0x0000d25d) data_form_wide_pane_t1

0xecdb,	// (0x0001bc22) list_form_graphic_pane_cp_ParamLimits

0xecdb,	// (0x0001bc22) list_form_graphic_pane_cp

0x80ef,	// (0x00015036) slider_form_pane_g1

0x80f8,	// (0x0001503f) slider_form_pane_g2

0x0006,

0xf98b,	// (0x0001c8d2) slider_form_pane_g

0xecee,	// (0x0001bc35) list_form_graphic_pane_ParamLimits

0xecee,	// (0x0001bc35) list_form_graphic_pane

0x55c3,	// (0x0001250a) list_form_graphic_pane_g1

0x55cb,	// (0x00012512) list_form_graphic_pane_t1_ParamLimits

0x55cb,	// (0x00012512) list_form_graphic_pane_t1

0x4660,	// (0x000115a7) list_highlight_pane_cp5_ParamLimits

0x4660,	// (0x000115a7) list_highlight_pane_cp5

0x55e0,	// (0x00012527) find_pane_g1

0x55e9,	// (0x00012530) input_find_pane

0x55f2,	// (0x00012539) input_find_pane_g1_ParamLimits

0x55f2,	// (0x00012539) input_find_pane_g1

0x55fe,	// (0x00012545) input_find_pane_t1_ParamLimits

0x55fe,	// (0x00012545) input_find_pane_t1

0x5613,	// (0x0001255a) input_find_pane_t2_ParamLimits

0x5613,	// (0x0001255a) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001c5e9) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001c5e9) input_find_pane_t

0x5628,	// (0x0001256f) input_focus_pane_cp5_ParamLimits

0x5628,	// (0x0001256f) input_focus_pane_cp5

0x5642,	// (0x00012589) bg_popup_window_pane_cp2_ParamLimits

0x5642,	// (0x00012589) bg_popup_window_pane_cp2

0x564f,	// (0x00012596) listscroll_menu_pane_ParamLimits

0x564f,	// (0x00012596) listscroll_menu_pane

0xed0c,	// (0x0001bc53) popup_submenu_window_ParamLimits

0xed0c,	// (0x0001bc53) popup_submenu_window

0x5683,	// (0x000125ca) find_popup_pane_g1

0x568b,	// (0x000125d2) input_popup_find_pane_cp

0x5628,	// (0x0001256f) input_focus_pane_cp4_ParamLimits

0x5628,	// (0x0001256f) input_focus_pane_cp4

0x56a3,	// (0x000125ea) input_popup_find_pane_t1_ParamLimits

0x56a3,	// (0x000125ea) input_popup_find_pane_t1

0x4580,	// (0x000114c7) bg_popup_sub_pane_cp

0x56d1,	// (0x00012618) listscroll_popup_sub_pane

0x56d9,	// (0x00012620) list_submenu_pane_ParamLimits

0x56d9,	// (0x00012620) list_submenu_pane

0x56ea,	// (0x00012631) scroll_pane_cp4

0x56f2,	// (0x00012639) list_single_popup_submenu_pane_ParamLimits

0x56f2,	// (0x00012639) list_single_popup_submenu_pane

0x5706,	// (0x0001264d) list_single_popup_submenu_pane_g1

0x570e,	// (0x00012655) list_single_popup_submenu_pane_t1_ParamLimits

0x570e,	// (0x00012655) list_single_popup_submenu_pane_t1

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp1_ParamLimits

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp1

0xed42,	// (0x0001bc89) tabs_2_active_pane_g1

0xed4a,	// (0x0001bc91) tabs_2_active_pane_t1

0x48f5,	// (0x0001183c) bg_passive_tab_pane_cp1_ParamLimits

0x48f5,	// (0x0001183c) bg_passive_tab_pane_cp1

0xed42,	// (0x0001bc89) tabs_2_passive_pane_g1

0xed4a,	// (0x0001bc91) tabs_2_passive_pane_t1

0x4660,	// (0x000115a7) bg_active_tab_pane_cp4

0xed5c,	// (0x0001bca3) tabs_2_long_active_pane_t1

0x6596,	// (0x000134dd) bg_passive_tab_pane_cp4

0x32c7,	// (0x0001020e) list_single_midp_graphic_pane_g4_ParamLimits

0x4660,	// (0x000115a7) bg_active_tab_pane_cp5

0xed6f,	// (0x0001bcb6) tabs_3_long_active_pane_t1

0x6596,	// (0x000134dd) bg_passive_tab_pane_cp5

0x32c7,	// (0x0001020e) list_single_midp_graphic_pane_g4

0x4660,	// (0x000115a7) bg_popup_window_pane_cp13_ParamLimits

0x4660,	// (0x000115a7) bg_popup_window_pane_cp13

0x5785,	// (0x000126cc) listscroll_popup_fast_pane_ParamLimits

0x5785,	// (0x000126cc) listscroll_popup_fast_pane

0x5791,	// (0x000126d8) grid_popup_fast_pane_ParamLimits

0x5791,	// (0x000126d8) grid_popup_fast_pane

0x57a3,	// (0x000126ea) scroll_pane_cp9_ParamLimits

0x57a3,	// (0x000126ea) scroll_pane_cp9

0x9fb5,	// (0x00016efc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x9fb5,	// (0x00016efc) list_single_graphic_hl_pane_t1_cp2

0x57c7,	// (0x0001270e) input_focus_pane_cp20_ParamLimits

0x57c7,	// (0x0001270e) input_focus_pane_cp20

0x57d5,	// (0x0001271c) query_popup_data_pane_t1_ParamLimits

0x57d5,	// (0x0001271c) query_popup_data_pane_t1

0x57e8,	// (0x0001272f) query_popup_data_pane_t2_ParamLimits

0x57e8,	// (0x0001272f) query_popup_data_pane_t2

0x582e,	// (0x00012775) query_popup_data_pane_t3_ParamLimits

0x582e,	// (0x00012775) query_popup_data_pane_t3

0x586f,	// (0x000127b6) query_popup_data_pane_t4_ParamLimits

0x586f,	// (0x000127b6) query_popup_data_pane_t4

0x58ab,	// (0x000127f2) query_popup_data_pane_t5_ParamLimits

0x58ab,	// (0x000127f2) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001c5ee) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001c5ee) query_popup_data_pane_t

0x5549,	// (0x00012490) bg_set_opt_pane_g1

0x5551,	// (0x00012498) bg_set_opt_pane_g2

0x5559,	// (0x000124a0) bg_set_opt_pane_g3

0x5561,	// (0x000124a8) bg_set_opt_pane_g4

0x5569,	// (0x000124b0) bg_set_opt_pane_g5

0x5571,	// (0x000124b8) bg_set_opt_pane_g6

0x5579,	// (0x000124c0) bg_set_opt_pane_g7

0x5581,	// (0x000124c8) bg_set_opt_pane_g8

0x5589,	// (0x000124d0) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001c5f9) bg_set_opt_pane_g

0x28ef,	// (0x0000f836) control_top_pane_stacon_ParamLimits

0x28ef,	// (0x0000f836) control_top_pane_stacon

0x2942,	// (0x0000f889) signal_pane_stacon_ParamLimits

0x2942,	// (0x0000f889) signal_pane_stacon

0x5ef8,	// (0x00012e3f) stacon_top_pane_g1_ParamLimits

0x5ef8,	// (0x00012e3f) stacon_top_pane_g1

0x2967,	// (0x0000f8ae) title_pane_stacon_ParamLimits

0x2967,	// (0x0000f8ae) title_pane_stacon

0x2991,	// (0x0000f8d8) uni_indicator_pane_stacon_ParamLimits

0x2991,	// (0x0000f8d8) uni_indicator_pane_stacon

0x29a6,	// (0x0000f8ed) battery_pane_stacon_ParamLimits

0x29a6,	// (0x0000f8ed) battery_pane_stacon

0x29ea,	// (0x0000f931) control_bottom_pane_stacon_ParamLimits

0x29ea,	// (0x0000f931) control_bottom_pane_stacon

0x2a0d,	// (0x0000f954) navi_pane_stacon_ParamLimits

0x2a0d,	// (0x0000f954) navi_pane_stacon

0x5f1a,	// (0x00012e61) stacon_bottom_pane_g1_ParamLimits

0x5f1a,	// (0x00012e61) stacon_bottom_pane_g1

0x2659,	// (0x0000f5a0) aid_levels_signal_lsc_ParamLimits

0x2659,	// (0x0000f5a0) aid_levels_signal_lsc

0x2670,	// (0x0000f5b7) signal_pane_stacon_g1_ParamLimits

0x2670,	// (0x0000f5b7) signal_pane_stacon_g1

0x2684,	// (0x0000f5cb) signal_pane_stacon_g2_ParamLimits

0x2684,	// (0x0000f5cb) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001c60c) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001c60c) signal_pane_stacon_g

0x26b9,	// (0x0000f600) title_pane_stacon_t1_ParamLimits

0x26b9,	// (0x0000f600) title_pane_stacon_t1

0x58ef,	// (0x00012836) uni_indicator_pane_stacon_g1

0x58f9,	// (0x00012840) uni_indicator_pane_stacon_g2

0x5903,	// (0x0001284a) uni_indicator_pane_stacon_g3

0x590d,	// (0x00012854) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001c618) uni_indicator_pane_stacon_g

0x26de,	// (0x0000f625) control_top_pane_stacon_g1

0x26e6,	// (0x0000f62d) control_top_pane_stacon_t1_ParamLimits

0x26e6,	// (0x0000f62d) control_top_pane_stacon_t1

0x271d,	// (0x0000f664) aid_levels_battery_lsc_ParamLimits

0x271d,	// (0x0000f664) aid_levels_battery_lsc

0x2735,	// (0x0000f67c) battery_pane_stacon_g1_ParamLimits

0x2735,	// (0x0000f67c) battery_pane_stacon_g1

0x2748,	// (0x0000f68f) battery_pane_stacon_g2_ParamLimits

0x2748,	// (0x0000f68f) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001c621) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001c621) battery_pane_stacon_g

0x2786,	// (0x0000f6cd) navi_icon_pane_stacon

0x279a,	// (0x0000f6e1) navi_navi_pane_stacon

0x2786,	// (0x0000f6cd) navi_text_pane_stacon

0x26de,	// (0x0000f625) control_bottom_pane_stacon_g1

0x27ae,	// (0x0000f6f5) control_bottom_pane_stacon_t1_ParamLimits

0x27ae,	// (0x0000f6f5) control_bottom_pane_stacon_t1

0xed81,	// (0x0001bcc8) grid_app_pane_ParamLimits

0xed81,	// (0x0001bcc8) grid_app_pane

0xedb7,	// (0x0001bcfe) scroll_pane_cp15_ParamLimits

0xedb7,	// (0x0001bcfe) scroll_pane_cp15

0xedcc,	// (0x0001bd13) cell_app_pane_ParamLimits

0xedcc,	// (0x0001bd13) cell_app_pane

0xee13,	// (0x0001bd5a) cell_app_pane_g1_ParamLimits

0xee13,	// (0x0001bd5a) cell_app_pane_g1

0x59ac,	// (0x000128f3) cell_app_pane_g2_ParamLimits

0x59ac,	// (0x000128f3) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001c626) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001c626) cell_app_pane_g

0xee33,	// (0x0001bd7a) cell_app_pane_t1_ParamLimits

0xee33,	// (0x0001bd7a) cell_app_pane_t1

0x59cf,	// (0x00012916) grid_highlight_pane_ParamLimits

0x59cf,	// (0x00012916) grid_highlight_pane

0x5549,	// (0x00012490) cell_highlight_pane_g1

0x5551,	// (0x00012498) cell_highlight_pane_g2

0x5559,	// (0x000124a0) cell_highlight_pane_g3

0x5561,	// (0x000124a8) cell_highlight_pane_g4

0x5569,	// (0x000124b0) cell_highlight_pane_g5

0x5571,	// (0x000124b8) cell_highlight_pane_g6

0x5579,	// (0x000124c0) cell_highlight_pane_g7

0x5581,	// (0x000124c8) cell_highlight_pane_g8

0x5589,	// (0x000124d0) cell_highlight_pane_g9

0x4576,	// (0x000114bd) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001c5d4) cell_highlight_pane_g

0x59e0,	// (0x00012927) bg_scroll_pane

0x27f8,	// (0x0000f73f) scroll_handle_pane

0x5a27,	// (0x0001296e) scroll_bg_pane_g1

0x5a3c,	// (0x00012983) scroll_bg_pane_g2

0x5a54,	// (0x0001299b) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001c62b) scroll_bg_pane_g

0x5a69,	// (0x000129b0) scroll_handle_focus_pane_ParamLimits

0x5a69,	// (0x000129b0) scroll_handle_focus_pane

0x5a27,	// (0x0001296e) scroll_handle_pane_g1

0x5a76,	// (0x000129bd) scroll_handle_pane_g2

0x5a54,	// (0x0001299b) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001c632) scroll_handle_pane_g

0x5628,	// (0x0001256f) bg_popup_sub_pane_cp21_ParamLimits

0x5628,	// (0x0001256f) bg_popup_sub_pane_cp21

0x5a8a,	// (0x000129d1) popup_fep_japan_predictive_window_t1_ParamLimits

0x5a8a,	// (0x000129d1) popup_fep_japan_predictive_window_t1

0x5aa4,	// (0x000129eb) popup_fep_japan_predictive_window_t2_ParamLimits

0x5aa4,	// (0x000129eb) popup_fep_japan_predictive_window_t2

0x5ad7,	// (0x00012a1e) popup_fep_japan_predictive_window_t3_ParamLimits

0x5ad7,	// (0x00012a1e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001c639) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001c639) popup_fep_japan_predictive_window_t

0x4580,	// (0x000114c7) bg_popup_sub_pane_cp23

0x5b0e,	// (0x00012a55) listscroll_japin_cand_pane

0x5b16,	// (0x00012a5d) popup_fep_japan_candidate_window_t1

0x5b24,	// (0x00012a6b) candidate_pane_ParamLimits

0x5b24,	// (0x00012a6b) candidate_pane

0x5b36,	// (0x00012a7d) scroll_pane_cp30

0x5b3e,	// (0x00012a85) list_single_popup_jap_candidate_pane_ParamLimits

0x5b3e,	// (0x00012a85) list_single_popup_jap_candidate_pane

0x4580,	// (0x000114c7) list_highlight_pane_cp30

0x5b52,	// (0x00012a99) list_single_popup_jap_candidate_pane_t1

0x5b61,	// (0x00012aa8) level_1_signal

0x5b6e,	// (0x00012ab5) level_2_signal

0x5b7b,	// (0x00012ac2) level_3_signal

0x5b88,	// (0x00012acf) level_4_signal

0x5b95,	// (0x00012adc) level_5_signal

0x5ba2,	// (0x00012ae9) level_6_signal

0x5baf,	// (0x00012af6) level_7_signal

0x5b61,	// (0x00012aa8) level_1_battery

0x5b6e,	// (0x00012ab5) level_2_battery

0x5b7b,	// (0x00012ac2) level_3_battery

0x5b88,	// (0x00012acf) level_4_battery

0x5b95,	// (0x00012adc) level_5_battery

0x5ba2,	// (0x00012ae9) level_6_battery

0x5baf,	// (0x00012af6) level_7_battery

0x5bd4,	// (0x00012b1b) list_menu_pane_ParamLimits

0x5bd4,	// (0x00012b1b) list_menu_pane

0x5bea,	// (0x00012b31) scroll_pane_cp25_ParamLimits

0x5bea,	// (0x00012b31) scroll_pane_cp25

0x5c03,	// (0x00012b4a) list_double2_graphic_pane_cp2_ParamLimits

0x5c03,	// (0x00012b4a) list_double2_graphic_pane_cp2

0x5c03,	// (0x00012b4a) list_double2_large_graphic_pane_cp2_ParamLimits

0x5c03,	// (0x00012b4a) list_double2_large_graphic_pane_cp2

0x5c03,	// (0x00012b4a) list_double2_pane_cp2_ParamLimits

0x5c03,	// (0x00012b4a) list_double2_pane_cp2

0x5c03,	// (0x00012b4a) list_double_graphic_pane_cp2_ParamLimits

0x5c03,	// (0x00012b4a) list_double_graphic_pane_cp2

0x5c03,	// (0x00012b4a) list_double_large_graphic_pane_cp2_ParamLimits

0x5c03,	// (0x00012b4a) list_double_large_graphic_pane_cp2

0x5c03,	// (0x00012b4a) list_double_number_pane_cp2_ParamLimits

0x5c03,	// (0x00012b4a) list_double_number_pane_cp2

0x5c03,	// (0x00012b4a) list_double_pane_cp2_ParamLimits

0x5c03,	// (0x00012b4a) list_double_pane_cp2

0xee5b,	// (0x0001bda2) list_single_2graphic_pane_cp2_ParamLimits

0xee5b,	// (0x0001bda2) list_single_2graphic_pane_cp2

0xee5b,	// (0x0001bda2) list_single_graphic_heading_pane_cp2_ParamLimits

0xee5b,	// (0x0001bda2) list_single_graphic_heading_pane_cp2

0xee5b,	// (0x0001bda2) list_single_graphic_pane_cp2_ParamLimits

0xee5b,	// (0x0001bda2) list_single_graphic_pane_cp2

0xee5b,	// (0x0001bda2) list_single_heading_pane_cp2_ParamLimits

0xee5b,	// (0x0001bda2) list_single_heading_pane_cp2

0x5c3d,	// (0x00012b84) list_single_large_graphic_pane_cp2_ParamLimits

0x5c3d,	// (0x00012b84) list_single_large_graphic_pane_cp2

0xee5b,	// (0x0001bda2) list_single_number_heading_pane_cp2_ParamLimits

0xee5b,	// (0x0001bda2) list_single_number_heading_pane_cp2

0xee5b,	// (0x0001bda2) list_single_number_pane_cp2_ParamLimits

0xee5b,	// (0x0001bda2) list_single_number_pane_cp2

0xee5b,	// (0x0001bda2) list_single_pane_cp2_ParamLimits

0xee5b,	// (0x0001bda2) list_single_pane_cp2

0x5cb8,	// (0x00012bff) bg_popup_sub_pane_cp22

0x28a7,	// (0x0000f7ee) popup_side_volume_key_window_g1

0x28cb,	// (0x0000f812) popup_side_volume_key_window_t1

0x28e7,	// (0x0000f82e) volume_small_pane_cp1

0x48f5,	// (0x0001183c) bg_popup_sub_pane_cp24_ParamLimits

0x48f5,	// (0x0001183c) bg_popup_sub_pane_cp24

0x5cce,	// (0x00012c15) fep_china_uni_candidate_pane_ParamLimits

0x5cce,	// (0x00012c15) fep_china_uni_candidate_pane

0x5ce2,	// (0x00012c29) fep_china_uni_entry_pane

0x5cf2,	// (0x00012c39) popup_fep_china_uni_window_g1

0x5d0e,	// (0x00012c55) fep_china_uni_entry_pane_g1

0x5d16,	// (0x00012c5d) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001c66a) fep_china_uni_entry_pane_g

0x5d1e,	// (0x00012c65) fep_entry_item_pane

0x5d28,	// (0x00012c6f) fep_candidate_item_pane

0x5d30,	// (0x00012c77) fep_china_uni_candidate_pane_g1

0x5d38,	// (0x00012c7f) fep_china_uni_candidate_pane_g2

0x5d40,	// (0x00012c87) fep_china_uni_candidate_pane_g3

0x5d48,	// (0x00012c8f) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001c66f) fep_china_uni_candidate_pane_g

0x4576,	// (0x000114bd) fep_entry_item_pane_g1

0x5d50,	// (0x00012c97) fep_entry_item_pane_t1_ParamLimits

0x5d50,	// (0x00012c97) fep_entry_item_pane_t1

0x5d66,	// (0x00012cad) fep_candidate_item_pane_t1_ParamLimits

0x5d66,	// (0x00012cad) fep_candidate_item_pane_t1

0x5d7b,	// (0x00012cc2) fep_candidate_item_pane_t2_ParamLimits

0x5d7b,	// (0x00012cc2) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001c678) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001c678) fep_candidate_item_pane_t

0x4660,	// (0x000115a7) list_highlight_pane_cp31_ParamLimits

0x4660,	// (0x000115a7) list_highlight_pane_cp31

0x5d8d,	// (0x00012cd4) level_1_signal_lsc

0x5d96,	// (0x00012cdd) level_2_signal_lsc

0x5d9f,	// (0x00012ce6) level_3_signal_lsc

0x5da8,	// (0x00012cef) level_4_signal_lsc

0x5db1,	// (0x00012cf8) level_5_signal_lsc

0x5dba,	// (0x00012d01) level_6_signal_lsc

0x5dc3,	// (0x00012d0a) level_7_signal_lsc

0x5dc3,	// (0x00012d0a) level_1_battery_lsc

0x5dcc,	// (0x00012d13) level_2_battery_lsc

0x5dd5,	// (0x00012d1c) level_3_battery_lsc

0x5dde,	// (0x00012d25) level_4_battery_lsc

0x5de7,	// (0x00012d2e) level_5_battery_lsc

0x5df0,	// (0x00012d37) level_6_battery_lsc

0x5d8d,	// (0x00012cd4) level_7_battery_lsc

0x5df9,	// (0x00012d40) scroll_handle_focus_pane_g1

0x5e02,	// (0x00012d49) scroll_handle_focus_pane_g2

0x5e0b,	// (0x00012d52) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001c67d) scroll_handle_focus_pane_g

0x5e14,	// (0x00012d5b) list_single_2graphic_pane_g1_ParamLimits

0x5e14,	// (0x00012d5b) list_single_2graphic_pane_g1

0xe833,	// (0x0001b77a) list_single_2graphic_pane_g2_ParamLimits

0xe833,	// (0x0001b77a) list_single_2graphic_pane_g2

0x4e90,	// (0x00011dd7) list_single_2graphic_pane_g3_ParamLimits

0x4e90,	// (0x00011dd7) list_single_2graphic_pane_g3

0x5e20,	// (0x00012d67) list_single_2graphic_pane_g4_ParamLimits

0x5e20,	// (0x00012d67) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001c684) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001c684) list_single_2graphic_pane_g

0x5e31,	// (0x00012d78) list_single_2graphic_pane_t1_ParamLimits

0x5e31,	// (0x00012d78) list_single_2graphic_pane_t1

0xeee8,	// (0x0001be2f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xeee8,	// (0x0001be2f) list_double2_graphic_large_graphic_pane_g1

0xe9f2,	// (0x0001b939) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe9f2,	// (0x0001b939) list_double2_graphic_large_graphic_pane_g2

0xe944,	// (0x0001b88b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe944,	// (0x0001b88b) list_double2_graphic_large_graphic_pane_g3

0xeefa,	// (0x0001be41) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xeefa,	// (0x0001be41) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001c68d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001c68d) list_double2_graphic_large_graphic_pane_g

0xef06,	// (0x0001be4d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xef06,	// (0x0001be4d) list_double2_graphic_large_graphic_pane_t1

0xef1c,	// (0x0001be63) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xef1c,	// (0x0001be63) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001c696) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001c696) list_double2_graphic_large_graphic_pane_t

0x5fe3,	// (0x00012f2a) popup_fast_swap_window_ParamLimits

0x5fe3,	// (0x00012f2a) popup_fast_swap_window

0x5fff,	// (0x00012f46) popup_side_volume_key_window

0x6019,	// (0x00012f60) stacon_top_pane

0x6023,	// (0x00012f6a) status_pane_ParamLimits

0x6023,	// (0x00012f6a) status_pane

0x6019,	// (0x00012f60) status_small_pane

0x4580,	// (0x000114c7) control_pane

0x4580,	// (0x000114c7) stacon_bottom_pane

0x5339,	// (0x00012280) scroll_pane_cp121

0x5330,	// (0x00012277) set_content_pane

0xef2e,	// (0x0001be75) bg_active_tab_pane_g1_cp1

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp1

0xef37,	// (0x0001be7e) bg_active_tab_pane_g3_cp1

0xef2e,	// (0x0001be75) bg_passive_tab_pane_g1_cp1

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp1

0xef37,	// (0x0001be7e) bg_passive_tab_pane_g3_cp1

0xef40,	// (0x0001be87) bg_active_tab_pane_g1_cp2

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp2

0xef49,	// (0x0001be90) bg_active_tab_pane_g3_cp2

0xef40,	// (0x0001be87) bg_passive_tab_pane_g1_cp2

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp2

0xef49,	// (0x0001be90) bg_passive_tab_pane_g3_cp2

0x5ed0,	// (0x00012e17) bg_active_tab_pane_g1_cp3

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp3

0x5ed9,	// (0x00012e20) bg_active_tab_pane_g3_cp3

0x5ed0,	// (0x00012e17) bg_passive_tab_pane_g1_cp3

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp3

0x5ed9,	// (0x00012e20) bg_passive_tab_pane_g3_cp3

0xef52,	// (0x0001be99) bg_active_tab_pane_g1_cp4

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp4

0xef5d,	// (0x0001bea4) bg_active_tab_pane_g3_cp4

0xef52,	// (0x0001be99) bg_passive_tab_pane_g1_cp4

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp4

0xef5d,	// (0x0001bea4) bg_passive_tab_pane_g3_cp4

0x5f36,	// (0x00012e7d) bg_active_tab_pane_g1_cp5

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp5

0x5f3f,	// (0x00012e86) bg_active_tab_pane_g3_cp5

0x5f36,	// (0x00012e7d) bg_passive_tab_pane_g1_cp5

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp5

0x5f3f,	// (0x00012e86) bg_passive_tab_pane_g3_cp5

0x883f,	// (0x00015786) list_set_graphic_pane_ParamLimits

0x883f,	// (0x00015786) list_set_graphic_pane

0x4580,	// (0x000114c7) bg_set_opt_pane_cp4

0x5f68,	// (0x00012eaf) list_set_graphic_pane_g1_ParamLimits

0x5f68,	// (0x00012eaf) list_set_graphic_pane_g1

0x5f74,	// (0x00012ebb) list_set_graphic_pane_g2_ParamLimits

0x5f74,	// (0x00012ebb) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001c69b) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001c69b) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0001ca23) volume_small_pane_cp_g

0x5f96,	// (0x00012edd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5f96,	// (0x00012edd) list_double2_large_graphic_pane_g1_cp2

0x5fa2,	// (0x00012ee9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5fa2,	// (0x00012ee9) list_double2_large_graphic_pane_g2_cp2

0x5fb3,	// (0x00012efa) list_double2_large_graphic_pane_g3_cp2

0x5fbb,	// (0x00012f02) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5fbb,	// (0x00012f02) list_double2_large_graphic_pane_t1_cp2

0x5fd1,	// (0x00012f18) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5fd1,	// (0x00012f18) list_double2_large_graphic_pane_t2_cp2

0x7c9c,	// (0x00014be3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x7c9c,	// (0x00014be3) list_double_large_graphic_pane_g1_cp2

0x7cad,	// (0x00014bf4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x7cad,	// (0x00014bf4) list_double_large_graphic_pane_g2_cp2

0x613f,	// (0x00013086) list_double_large_graphic_pane_g3_cp2

0x7cbe,	// (0x00014c05) list_double_large_graphic_pane_g4_cp

0x7cc6,	// (0x00014c0d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7cc6,	// (0x00014c0d) list_double_large_graphic_pane_t1_cp2

0x7cdd,	// (0x00014c24) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x7cdd,	// (0x00014c24) list_double_large_graphic_pane_t2_cp2

0x6031,	// (0x00012f78) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6031,	// (0x00012f78) list_double2_graphic_pane_g1_cp2

0x603f,	// (0x00012f86) list_double2_graphic_pane_g2_cp2_ParamLimits

0x603f,	// (0x00012f86) list_double2_graphic_pane_g2_cp2

0x6050,	// (0x00012f97) list_double2_graphic_pane_g3_cp2

0x605a,	// (0x00012fa1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x605a,	// (0x00012fa1) list_double2_graphic_pane_t1_cp2

0x6070,	// (0x00012fb7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6070,	// (0x00012fb7) list_double2_graphic_pane_t2_cp2

0x6082,	// (0x00012fc9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x6082,	// (0x00012fc9) list_single_number_heading_pane_g1_cp2

0x608e,	// (0x00012fd5) list_single_number_heading_pane_g2_cp2

0x6096,	// (0x00012fdd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6096,	// (0x00012fdd) list_single_number_heading_pane_t1_cp2

0x60ac,	// (0x00012ff3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x60ac,	// (0x00012ff3) list_single_number_heading_pane_t2_cp2

0x60be,	// (0x00013005) list_single_number_heading_pane_t3_cp2_ParamLimits

0x60be,	// (0x00013005) list_single_number_heading_pane_t3_cp2

0x6082,	// (0x00012fc9) list_single_heading_pane_g1_cp2_ParamLimits

0x6082,	// (0x00012fc9) list_single_heading_pane_g1_cp2

0x608e,	// (0x00012fd5) list_single_heading_pane_g2_cp2

0x6096,	// (0x00012fdd) list_single_heading_pane_t1_cp2_ParamLimits

0x6096,	// (0x00012fdd) list_single_heading_pane_t1_cp2

0x7aa6,	// (0x000149ed) list_single_heading_pane_t2_cp2_ParamLimits

0x7aa6,	// (0x000149ed) list_single_heading_pane_t2_cp2

0x79ee,	// (0x00014935) list_double_graphic_pane_g1_cp2_ParamLimits

0x79ee,	// (0x00014935) list_double_graphic_pane_g1_cp2

0x79fa,	// (0x00014941) list_double_graphic_pane_g2_cp2_ParamLimits

0x79fa,	// (0x00014941) list_double_graphic_pane_g2_cp2

0x7a09,	// (0x00014950) list_double_graphic_pane_g3_cp2

0x7a11,	// (0x00014958) list_double_graphic_pane_t1_cp2_ParamLimits

0x7a11,	// (0x00014958) list_double_graphic_pane_t1_cp2

0x7a27,	// (0x0001496e) list_double_graphic_pane_t2_cp2_ParamLimits

0x7a27,	// (0x0001496e) list_double_graphic_pane_t2_cp2

0x6133,	// (0x0001307a) list_double_number_pane_g1_cp2_ParamLimits

0x6133,	// (0x0001307a) list_double_number_pane_g1_cp2

0x613f,	// (0x00013086) list_double_number_pane_g2_cp2

0x79b2,	// (0x000148f9) list_double_number_pane_t1_cp2_ParamLimits

0x79b2,	// (0x000148f9) list_double_number_pane_t1_cp2

0x79c6,	// (0x0001490d) list_double_number_pane_t2_cp2_ParamLimits

0x79c6,	// (0x0001490d) list_double_number_pane_t2_cp2

0x79dc,	// (0x00014923) list_double_number_pane_t3_cp2_ParamLimits

0x79dc,	// (0x00014923) list_double_number_pane_t3_cp2

0x789b,	// (0x000147e2) list_single_graphic_pane_g1_cp2_ParamLimits

0x789b,	// (0x000147e2) list_single_graphic_pane_g1_cp2

0x4e84,	// (0x00011dcb) list_single_graphic_pane_g2_cp2_ParamLimits

0x4e84,	// (0x00011dcb) list_single_graphic_pane_g2_cp2

0x6197,	// (0x000130de) list_single_graphic_pane_g3_cp2

0x7871,	// (0x000147b8) list_single_graphic_pane_t1_cp2_ParamLimits

0x7871,	// (0x000147b8) list_single_graphic_pane_t1_cp2

0x4e84,	// (0x00011dcb) list_single_number_pane_g1_cp2_ParamLimits

0x4e84,	// (0x00011dcb) list_single_number_pane_g1_cp2

0x6197,	// (0x000130de) list_single_number_pane_g2_cp2

0x7871,	// (0x000147b8) list_single_number_pane_t1_cp2_ParamLimits

0x7871,	// (0x000147b8) list_single_number_pane_t1_cp2

0x7887,	// (0x000147ce) list_single_number_pane_t2_cp2_ParamLimits

0x7887,	// (0x000147ce) list_single_number_pane_t2_cp2

0x5fa2,	// (0x00012ee9) list_double2_pane_g1_cp2_ParamLimits

0x5fa2,	// (0x00012ee9) list_double2_pane_g1_cp2

0x5fb3,	// (0x00012efa) list_double2_pane_g2_cp2

0x610b,	// (0x00013052) list_double2_pane_t1_cp2_ParamLimits

0x610b,	// (0x00013052) list_double2_pane_t1_cp2

0x6121,	// (0x00013068) list_double2_pane_t2_cp2_ParamLimits

0x6121,	// (0x00013068) list_double2_pane_t2_cp2

0x6133,	// (0x0001307a) list_double_pane_g1_cp2_ParamLimits

0x6133,	// (0x0001307a) list_double_pane_g1_cp2

0x613f,	// (0x00013086) list_double_pane_g2_cp2

0x6147,	// (0x0001308e) list_double_pane_t1_cp2_ParamLimits

0x6147,	// (0x0001308e) list_double_pane_t1_cp2

0x615d,	// (0x000130a4) list_double_pane_t2_cp2_ParamLimits

0x615d,	// (0x000130a4) list_double_pane_t2_cp2

0x6187,	// (0x000130ce) list_single_pane_cp2_g3

0x4e84,	// (0x00011dcb) list_single_pane_g1_cp2_ParamLimits

0x4e84,	// (0x00011dcb) list_single_pane_g1_cp2

0x6197,	// (0x000130de) list_single_pane_g2_cp2

0x619f,	// (0x000130e6) list_single_pane_t1_cp2_ParamLimits

0x619f,	// (0x000130e6) list_single_pane_t1_cp2

0x61b7,	// (0x000130fe) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x61b7,	// (0x000130fe) list_single_large_graphic_pane_g1_cp2

0x61c3,	// (0x0001310a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x61c3,	// (0x0001310a) list_single_large_graphic_pane_g2_cp2

0x61cf,	// (0x00013116) list_single_large_graphic_pane_g3_cp2

0x61d7,	// (0x0001311e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x61d7,	// (0x0001311e) list_single_large_graphic_pane_g4_cp1

0x61f1,	// (0x00013138) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x61f1,	// (0x00013138) list_single_large_graphic_pane_t1_cp2

0x783d,	// (0x00014784) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x783d,	// (0x00014784) list_single_graphic_heading_pane_g1_cp2

0x780a,	// (0x00014751) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x780a,	// (0x00014751) list_single_graphic_heading_pane_g4_cp2

0x6197,	// (0x000130de) list_single_graphic_heading_pane_g5_cp2

0x7849,	// (0x00014790) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x7849,	// (0x00014790) list_single_graphic_heading_pane_t1_cp2

0x785f,	// (0x000147a6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x785f,	// (0x000147a6) list_single_graphic_heading_pane_t2_cp2

0x77fe,	// (0x00014745) list_single_2graphic_pane_g1_cp2_ParamLimits

0x77fe,	// (0x00014745) list_single_2graphic_pane_g1_cp2

0x780a,	// (0x00014751) list_single_2graphic_pane_g2_cp2_ParamLimits

0x780a,	// (0x00014751) list_single_2graphic_pane_g2_cp2

0x6197,	// (0x000130de) list_single_2graphic_pane_g3_cp2

0x781b,	// (0x00014762) list_single_2graphic_pane_g4_cp2_ParamLimits

0x781b,	// (0x00014762) list_single_2graphic_pane_g4_cp2

0x7827,	// (0x0001476e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x7827,	// (0x0001476e) list_single_2graphic_pane_t1_cp2

0x4576,	// (0x000114bd) list_highlight_pane_g10_cp1

0x73d6,	// (0x0001431d) list_highlight_pane_g1_cp1

0x73de,	// (0x00014325) list_highlight_pane_g2_cp1

0x73e6,	// (0x0001432d) list_highlight_pane_g3_cp1

0x73ee,	// (0x00014335) list_highlight_pane_g4_cp1

0x73f6,	// (0x0001433d) list_highlight_pane_g5_cp1

0x73fe,	// (0x00014345) list_highlight_pane_g6_cp1

0x7406,	// (0x0001434d) list_highlight_pane_g7_cp1

0x740e,	// (0x00014355) list_highlight_pane_g8_cp1

0x7416,	// (0x0001435d) list_highlight_pane_g9_cp1

0xf516,	// (0x0001c45d) form_field_slider_pane_t3

0xf526,	// (0x0001c46d) form_field_slider_pane_t4

0x730a,	// (0x00014251) slider_form_pane_ParamLimits

0x730a,	// (0x00014251) slider_form_pane

0x4580,	// (0x000114c7) control_abbreviations

0x4580,	// (0x000114c7) control_conventions

0x4580,	// (0x000114c7) control_definitions

0x4580,	// (0x000114c7) format_table_attribute

0x7af0,	// (0x00014a37) bg_popup_preview_window_pane_g9

0x4580,	// (0x000114c7) format_table_data2

0x4580,	// (0x000114c7) format_table_data3

0x4580,	// (0x000114c7) format_table_data_example

0x0008,

0x4580,	// (0x000114c7) intro_purpose

0xf8eb,	// (0x0001c832) bg_popup_preview_window_pane_g

0x4580,	// (0x000114c7) texts_category

0x4580,	// (0x000114c7) texts_graphics

0x6207,	// (0x0001314e) text_digital

0x6216,	// (0x0001315d) text_primary

0x6225,	// (0x0001316c) text_primary_small

0x6234,	// (0x0001317b) text_secondary

0x6243,	// (0x0001318a) text_title

0x82f7,	// (0x0001523e) bg_passive_tab_pane_g1_cp3_srt

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp3_srt

0x8300,	// (0x00015247) bg_passive_tab_pane_g3_cp3_srt

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp3_srt_ParamLimits

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp3_srt

0x8309,	// (0x00015250) tabs_4_active_pane_srt_g1

0x03d2,	// (0x0000d319) tabs_4_active_pane_srt_t1_ParamLimits

0x03d2,	// (0x0000d319) tabs_4_active_pane_srt_t1

0x82f7,	// (0x0001523e) bg_active_tab_pane_g1_cp3_copy1

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp3_copy1

0x8300,	// (0x00015247) bg_active_tab_pane_g3_cp3_copy1

0x4660,	// (0x000115a7) tabs_2_long_active_pane_srt_ParamLimits

0x4660,	// (0x000115a7) tabs_2_long_active_pane_srt

0x4660,	// (0x000115a7) tabs_2_long_passive_pane_srt_ParamLimits

0x4660,	// (0x000115a7) tabs_2_long_passive_pane_srt

0x6596,	// (0x000134dd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6596,	// (0x000134dd) bg_passive_tab_pane_cp4_srt

0x7f2c,	// (0x00014e73) bg_passive_tab_pane_g1_cp4_srt

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp4_srt

0x7f35,	// (0x00014e7c) bg_passive_tab_pane_g3_cp4_srt

0x4660,	// (0x000115a7) bg_active_tab_pane_cp4_srt_ParamLimits

0x4660,	// (0x000115a7) bg_active_tab_pane_cp4_srt

0x01ad,	// (0x0000d0f4) tabs_2_long_active_pane_srt_t1_ParamLimits

0x01ad,	// (0x0000d0f4) tabs_2_long_active_pane_srt_t1

0x7f2c,	// (0x00014e73) bg_active_tab_pane_g1_cp4_srt

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp4_srt

0x7f35,	// (0x00014e7c) bg_active_tab_pane_g3_cp4_srt

0x48f5,	// (0x0001183c) tabs_3_long_active_pane_srt_ParamLimits

0x48f5,	// (0x0001183c) tabs_3_long_active_pane_srt

0x48f5,	// (0x0001183c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x48f5,	// (0x0001183c) tabs_3_long_passive_pane_cp_srt

0x48f5,	// (0x0001183c) tabs_3_long_passive_pane_srt_ParamLimits

0x48f5,	// (0x0001183c) tabs_3_long_passive_pane_srt

0x6596,	// (0x000134dd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6596,	// (0x000134dd) bg_passive_tab_pane_cp5_srt

0x5f36,	// (0x00012e7d) bg_passive_tab_pane_g1_cp5_srt

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp5_srt

0x5f3f,	// (0x00012e86) bg_passive_tab_pane_g3_cp5_srt

0x4660,	// (0x000115a7) bg_active_tab_pane_cp5_srt_ParamLimits

0x4660,	// (0x000115a7) bg_active_tab_pane_cp5_srt

0x0197,	// (0x0000d0de) tabs_3_long_active_pane_srt_t1_ParamLimits

0x0197,	// (0x0000d0de) tabs_3_long_active_pane_srt_t1

0x5f36,	// (0x00012e7d) bg_active_tab_pane_g1_cp5_srt

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp5_srt

0x5f3f,	// (0x00012e86) bg_active_tab_pane_g3_cp5_srt

0x7f0c,	// (0x00014e53) navi_text_pane_srt_t1

0x7f04,	// (0x00014e4b) navi_icon_pane_srt_g1

0x6406,	// (0x0001334d) midp_editing_number_pane_srt

0x6252,	// (0x00013199) midp_ticker_pane_srt

0x640e,	// (0x00013355) midp_ticker_pane_srt_g1

0x6416,	// (0x0001335d) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001c6ba) midp_ticker_pane_srt_g

0x641e,	// (0x00013365) midp_ticker_pane_srt_t1

0x7ef5,	// (0x00014e3c) midp_editing_number_pane_t1_copy1

0x6596,	// (0x000134dd) listscroll_midp_pane

0x6596,	// (0x000134dd) midp_form_pane

0x62be,	// (0x00013205) midp_info_popup_window_ParamLimits

0x62be,	// (0x00013205) midp_info_popup_window

0x5628,	// (0x0001256f) bg_popup_sub_pane_cp50_ParamLimits

0x5628,	// (0x0001256f) bg_popup_sub_pane_cp50

0x700b,	// (0x00013f52) listscroll_midp_info_pane_ParamLimits

0x700b,	// (0x00013f52) listscroll_midp_info_pane

0x6ff3,	// (0x00013f3a) listscroll_form_midp_pane_ParamLimits

0x6ff3,	// (0x00013f3a) listscroll_form_midp_pane

0x6fff,	// (0x00013f46) scroll_bar_cp050

0xf50a,	// (0x0001c451) list_midp_pane

0x8ff6,	// (0x00015f3d) signal_pane_g2_cp

0x6f0d,	// (0x00013e54) listscroll_midp_info_pane_t1_ParamLimits

0x6f0d,	// (0x00013e54) listscroll_midp_info_pane_t1

0x6f25,	// (0x00013e6c) listscroll_midp_info_pane_t2_ParamLimits

0x6f25,	// (0x00013e6c) listscroll_midp_info_pane_t2

0x6f63,	// (0x00013eaa) listscroll_midp_info_pane_t3_ParamLimits

0x6f63,	// (0x00013eaa) listscroll_midp_info_pane_t3

0x6f9d,	// (0x00013ee4) listscroll_midp_info_pane_t4_ParamLimits

0x6f9d,	// (0x00013ee4) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x0001c76d) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x0001c76d) listscroll_midp_info_pane_t

0x56ea,	// (0x00012631) scroll_pane_cp21

0x6eaf,	// (0x00013df6) form_midp_field_choice_group_pane

0x6eb8,	// (0x00013dff) form_midp_field_text_pane

0x6ef3,	// (0x00013e3a) form_midp_field_time_pane

0x6efb,	// (0x00013e42) form_midp_gauge_slider_pane

0x6f04,	// (0x00013e4b) form_midp_gauge_wait_pane

0x4580,	// (0x000114c7) form_midp_image_pane

0xf4f0,	// (0x0001c437) list_single_midp_pane_ParamLimits

0xf4f0,	// (0x0001c437) list_single_midp_pane

0xf4cd,	// (0x0001c414) form_midp_field_text_pane_t1

0x6bd6,	// (0x00013b1d) input_focus_pane_cp050

0x6e68,	// (0x00013daf) list_midp_form_text_pane

0x6dfc,	// (0x00013d43) form_midp_field_choice_group_pane_t1

0x6e0a,	// (0x00013d51) input_focus_pane_cp051

0x6e1e,	// (0x00013d65) list_midp_choice_pane

0x4580,	// (0x000114c7) status_idle_pane

0x6de0,	// (0x00013d27) form_midp_field_time_pane_t1

0x4576,	// (0x000114bd) wait_anim_pane_g2_copy1

0x6dee,	// (0x00013d35) form_midp_field_time_pane_t2

0x0001,

0x636e,	// (0x000132b5) aid_navinavi_width_2_pane

0xf821,	// (0x0001c768) form_midp_field_time_pane_t

0x4580,	// (0x000114c7) input_focus_pane_cp052

0x4580,	// (0x000114c7) bg_input_focus_pane_cp040

0x6da0,	// (0x00013ce7) form_midp_gauge_slider_pane_t1

0x6dae,	// (0x00013cf5) form_midp_gauge_slider_pane_t2

0xf4ad,	// (0x0001c3f4) form_midp_gauge_slider_pane_t3

0xf4bd,	// (0x0001c404) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x0001c75f) form_midp_gauge_slider_pane_t

0x6dd8,	// (0x00013d1f) form_midp_slider_pane

0x4660,	// (0x000115a7) bg_input_focus_pane_cp041_ParamLimits

0x4660,	// (0x000115a7) bg_input_focus_pane_cp041

0x6d6d,	// (0x00013cb4) form_midp_gauge_wait_pane_t1_ParamLimits

0x6d6d,	// (0x00013cb4) form_midp_gauge_wait_pane_t1

0x6d7f,	// (0x00013cc6) form_midp_gauge_wait_pane_t2_ParamLimits

0x6d7f,	// (0x00013cc6) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x0001c75a) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x0001c75a) form_midp_gauge_wait_pane_t

0x6d91,	// (0x00013cd8) form_midp_wait_pane_ParamLimits

0x6d91,	// (0x00013cd8) form_midp_wait_pane

0x6d37,	// (0x00013c7e) form_midp_image_pane_g1

0x6d40,	// (0x00013c87) form_midp_image_pane_t1

0x6d4f,	// (0x00013c96) form_midp_image_pane_t2

0x6d5e,	// (0x00013ca5) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x0001c753) form_midp_image_pane_t

0x6d1f,	// (0x00013c66) list_single_midp_pane_g1

0x6d28,	// (0x00013c6f) list_single_midp_pane_t1

0xf497,	// (0x0001c3de) list_midp_form_item_pane_ParamLimits

0xf497,	// (0x0001c3de) list_midp_form_item_pane

0x6316,	// (0x0001325d) list_midp_form_item_pane_t1

0x6325,	// (0x0001326c) midp_ticker_pane_g1

0x6331,	// (0x00013278) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001c6a0) midp_ticker_pane_g

0x633d,	// (0x00013284) midp_ticker_pane_t1

0x816f,	// (0x000150b6) midp_editing_number_pane_t1

0x814d,	// (0x00015094) midp_editing_number_pane

0x815c,	// (0x000150a3) midp_ticker_pane

0x7ed3,	// (0x00014e1a) ai_message_heading_pane

0x4580,	// (0x000114c7) bg_popup_window_pane_cp14

0x7edb,	// (0x00014e22) listscroll_ai_message_pane

0x7e5d,	// (0x00014da4) ai_message_heading_pane_g1_ParamLimits

0x7e5d,	// (0x00014da4) ai_message_heading_pane_g1

0x7e69,	// (0x00014db0) ai_message_heading_pane_g2_ParamLimits

0x7e69,	// (0x00014db0) ai_message_heading_pane_g2

0x7e75,	// (0x00014dbc) ai_message_heading_pane_g3_ParamLimits

0x7e75,	// (0x00014dbc) ai_message_heading_pane_g3

0x7e81,	// (0x00014dc8) ai_message_heading_pane_g4_ParamLimits

0x7e81,	// (0x00014dc8) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x0001c894) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x0001c894) ai_message_heading_pane_g

0x7e8d,	// (0x00014dd4) ai_message_heading_pane_t1_ParamLimits

0x7e8d,	// (0x00014dd4) ai_message_heading_pane_t1

0x7ea7,	// (0x00014dee) ai_message_heading_pane_t2_ParamLimits

0x7ea7,	// (0x00014dee) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x0001c89d) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x0001c89d) ai_message_heading_pane_t

0x7eb9,	// (0x00014e00) bg_popup_heading_pane_cp1_ParamLimits

0x7eb9,	// (0x00014e00) bg_popup_heading_pane_cp1

0x7e4b,	// (0x00014d92) list_ai_message_pane_ParamLimits

0x7e4b,	// (0x00014d92) list_ai_message_pane

0x56ea,	// (0x00012631) scroll_pane_cp10

0x7de7,	// (0x00014d2e) list_ai_message_pane_g1

0x7def,	// (0x00014d36) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x0001c871) list_ai_message_pane_g

0x7df7,	// (0x00014d3e) list_ai_message_pane_t1_ParamLimits

0x7df7,	// (0x00014d3e) list_ai_message_pane_t1

0x7e0c,	// (0x00014d53) list_ai_message_pane_t2_ParamLimits

0x7e0c,	// (0x00014d53) list_ai_message_pane_t2

0x7e21,	// (0x00014d68) list_ai_message_pane_t3_ParamLimits

0x7e21,	// (0x00014d68) list_ai_message_pane_t3

0x7e36,	// (0x00014d7d) list_ai_message_pane_t4_ParamLimits

0x7e36,	// (0x00014d7d) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x0001c876) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x0001c876) list_ai_message_pane_t

0x0175,	// (0x0000d0bc) cell_ai_soft_ind_pane_ParamLimits

0x0175,	// (0x0000d0bc) cell_ai_soft_ind_pane

0x634f,	// (0x00013296) cell_ai_soft_ind_pane_g1_ParamLimits

0x634f,	// (0x00013296) cell_ai_soft_ind_pane_g1

0x4580,	// (0x000114c7) grid_highlight_cp1

0x635c,	// (0x000132a3) text_secondary_cp56_ParamLimits

0x635c,	// (0x000132a3) text_secondary_cp56

0x7da6,	// (0x00014ced) example_general_pane_ParamLimits

0x7da6,	// (0x00014ced) example_general_pane

0x7db2,	// (0x00014cf9) example_parent_pane_g1_ParamLimits

0x7db2,	// (0x00014cf9) example_parent_pane_g1

0x7dbe,	// (0x00014d05) example_parent_pane_t1_ParamLimits

0x7dbe,	// (0x00014d05) example_parent_pane_t1

0xcddb,	// (0x00019d22) popup_preview_text_window_ParamLimits

0xcddb,	// (0x00019d22) popup_preview_text_window

0x618f,	// (0x000130d6) list_single_pane_cp2_g4

0x499f,	// (0x000118e6) bg_popup_preview_window_pane_ParamLimits

0x499f,	// (0x000118e6) bg_popup_preview_window_pane

0x7af8,	// (0x00014a3f) popup_preview_text_window_t1_ParamLimits

0x7af8,	// (0x00014a3f) popup_preview_text_window_t1

0x7b16,	// (0x00014a5d) popup_preview_text_window_t2_ParamLimits

0x7b16,	// (0x00014a5d) popup_preview_text_window_t2

0x7b5f,	// (0x00014aa6) popup_preview_text_window_t3_ParamLimits

0x7b5f,	// (0x00014aa6) popup_preview_text_window_t3

0x7ba4,	// (0x00014aeb) popup_preview_text_window_t4_ParamLimits

0x7ba4,	// (0x00014aeb) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x0001c845) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x0001c845) popup_preview_text_window_t

0x7c22,	// (0x00014b69) scroll_pane_cp11

0x6ab2,	// (0x000139f9) bg_popup_preview_window_pane_g1

0x7ab8,	// (0x000149ff) bg_popup_preview_window_pane_g2

0x7ac0,	// (0x00014a07) bg_popup_preview_window_pane_g3

0x7ac8,	// (0x00014a0f) bg_popup_preview_window_pane_g4

0x7ad0,	// (0x00014a17) bg_popup_preview_window_pane_g5

0x7ad8,	// (0x00014a1f) bg_popup_preview_window_pane_g6

0x7ae0,	// (0x00014a27) bg_popup_preview_window_pane_g7

0x7ae8,	// (0x00014a2f) bg_popup_preview_window_pane_g8

0x21e9,	// (0x0000f130) aid_popup_width_pane

0xcd57,	// (0x00019c9e) popup_midp_note_alarm_window_ParamLimits

0xcd57,	// (0x00019c9e) popup_midp_note_alarm_window

0x53ec,	// (0x00012333) data_form_pane_ParamLimits

0xec1e,	// (0x0001bb65) form_field_data_pane_g1

0xec28,	// (0x0001bb6f) form_field_data_pane_t1_ParamLimits

0x541c,	// (0x00012363) input_focus_pane_ParamLimits

0x542a,	// (0x00012371) data_form_wide_pane_ParamLimits

0x5436,	// (0x0001237d) form_field_data_wide_pane_g1

0x5456,	// (0x0001239d) form_field_data_wide_pane_t1_ParamLimits

0x4c42,	// (0x00011b89) input_focus_pane_cp6_ParamLimits

0xed34,	// (0x0001bc7b) input_popup_find_pane_g1_ParamLimits

0xed34,	// (0x0001bc7b) input_popup_find_pane_g1

0x2759,	// (0x0000f6a0) aid_navi_side_left_pane

0x276e,	// (0x0000f6b5) aid_navi_side_right_pane

0x74d1,	// (0x00014418) bg_popup_window_pane_cp30_ParamLimits

0x74d1,	// (0x00014418) bg_popup_window_pane_cp30

0x754b,	// (0x00014492) popup_midp_note_alarm_window_g1_ParamLimits

0x754b,	// (0x00014492) popup_midp_note_alarm_window_g1

0x757b,	// (0x000144c2) popup_midp_note_alarm_window_t1_ParamLimits

0x757b,	// (0x000144c2) popup_midp_note_alarm_window_t1

0x761c,	// (0x00014563) popup_midp_note_alarm_window_t2_ParamLimits

0x761c,	// (0x00014563) popup_midp_note_alarm_window_t2

0x76ca,	// (0x00014611) popup_midp_note_alarm_window_t3_ParamLimits

0x76ca,	// (0x00014611) popup_midp_note_alarm_window_t3

0x76fc,	// (0x00014643) popup_midp_note_alarm_window_t4_ParamLimits

0x76fc,	// (0x00014643) popup_midp_note_alarm_window_t4

0x7722,	// (0x00014669) popup_midp_note_alarm_window_t5_ParamLimits

0x7722,	// (0x00014669) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x0001c7e2) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x0001c7e2) popup_midp_note_alarm_window_t

0x77ce,	// (0x00014715) wait_bar_pane_cp1_ParamLimits

0x77ce,	// (0x00014715) wait_bar_pane_cp1

0x4580,	// (0x000114c7) wait_anim_pane_copy1

0x4580,	// (0x000114c7) wait_border_pane_copy1

0x71af,	// (0x000140f6) wait_border_pane_g1_copy1

0x546d,	// (0x000123b4) form_field_popup_pane_g1

0xec42,	// (0x0001bb89) form_field_popup_pane_t1_ParamLimits

0x541c,	// (0x00012363) input_focus_pane_cp7_ParamLimits

0x548f,	// (0x000123d6) list_form_pane_ParamLimits

0x549b,	// (0x000123e2) form_field_popup_wide_pane_g1

0x54a3,	// (0x000123ea) form_field_popup_wide_pane_t1_ParamLimits

0x541c,	// (0x00012363) input_focus_pane_cp8_ParamLimits

0x54b8,	// (0x000123ff) list_form_wide_pane_ParamLimits

0x8381,	// (0x000152c8) aid_size_cell_graphic_pane

0xecc1,	// (0x0001bc08) data_form_pane_t1_ParamLimits

0x0316,	// (0x0000d25d) data_form_wide_pane_t1_ParamLimits

0xf118,	// (0x0001c05f) bg_status_flat_pane

0xe52b,	// (0x0001b472) title_pane_t1_ParamLimits

0x4628,	// (0x0001156f) title_pane_t2_ParamLimits

0x464e,	// (0x00011595) title_pane_t3_ParamLimits

0xf55d,	// (0x0001c4a4) title_pane_t_ParamLimits

0x5b61,	// (0x00012aa8) level_1_signal_ParamLimits

0x5b6e,	// (0x00012ab5) level_2_signal_ParamLimits

0x5b7b,	// (0x00012ac2) level_3_signal_ParamLimits

0x5b88,	// (0x00012acf) level_4_signal_ParamLimits

0x5b95,	// (0x00012adc) level_5_signal_ParamLimits

0x5ba2,	// (0x00012ae9) level_6_signal_ParamLimits

0x5baf,	// (0x00012af6) level_7_signal_ParamLimits

0x5b61,	// (0x00012aa8) level_1_battery_ParamLimits

0x5b6e,	// (0x00012ab5) level_2_battery_ParamLimits

0x5b7b,	// (0x00012ac2) level_3_battery_ParamLimits

0x5b88,	// (0x00012acf) level_4_battery_ParamLimits

0x5b95,	// (0x00012adc) level_5_battery_ParamLimits

0x5ba2,	// (0x00012ae9) level_6_battery_ParamLimits

0x5baf,	// (0x00012af6) level_7_battery_ParamLimits

0x73d6,	// (0x0001431d) bg_status_flat_pane_g1

0x73de,	// (0x00014325) bg_status_flat_pane_g2

0x73e6,	// (0x0001432d) bg_status_flat_pane_g3

0x73ee,	// (0x00014335) bg_status_flat_pane_g4

0x73f6,	// (0x0001433d) bg_status_flat_pane_g5

0x73fe,	// (0x00014345) bg_status_flat_pane_g6

0x7406,	// (0x0001434d) bg_status_flat_pane_g7

0xe5b7,	// (0x0001b4fe) tabs_3_active_pane_t1_ParamLimits

0xe5b7,	// (0x0001b4fe) tabs_3_passive_pane_t1_ParamLimits

0xe5c9,	// (0x0001b510) tabs_4_active_pane_t1_ParamLimits

0xe5c9,	// (0x0001b510) tabs_4_1_passive_pane_t1_ParamLimits

0xed4a,	// (0x0001bc91) tabs_2_active_pane_t1_ParamLimits

0xed4a,	// (0x0001bc91) tabs_2_passive_pane_t1_ParamLimits

0x4660,	// (0x000115a7) bg_active_tab_pane_cp4_ParamLimits

0xed5c,	// (0x0001bca3) tabs_2_long_active_pane_t1_ParamLimits

0x6596,	// (0x000134dd) bg_passive_tab_pane_cp4_ParamLimits

0x32f9,	// (0x00010240) list_single_midp_graphic_pane_t1_ParamLimits

0x4660,	// (0x000115a7) bg_active_tab_pane_cp5_ParamLimits

0xed6f,	// (0x0001bcb6) tabs_3_long_active_pane_t1_ParamLimits

0x6596,	// (0x000134dd) bg_passive_tab_pane_cp5_ParamLimits

0x32f9,	// (0x00010240) list_single_midp_graphic_pane_t1

0xf118,	// (0x0001c05f) bg_status_flat_pane_ParamLimits

0x6734,	// (0x0001367b) indicator_pane_cp2_ParamLimits

0x6734,	// (0x0001367b) indicator_pane_cp2

0xf296,	// (0x0001c1dd) navi_pane_srt_ParamLimits

0xf296,	// (0x0001c1dd) navi_pane_srt

0x6883,	// (0x000137ca) popup_clock_digital_analogue_window_cp1

0x4757,	// (0x0001169e) indicator_pane_t1

0x6252,	// (0x00013199) copy_highlight_pane

0x6252,	// (0x00013199) cursor_graphics_pane

0x6252,	// (0x00013199) graphic_within_text_pane

0x6252,	// (0x00013199) link_highlight_pane

0x7be5,	// (0x00014b2c) popup_preview_text_window_t5_ParamLimits

0x7be5,	// (0x00014b2c) popup_preview_text_window_t5

0x6376,	// (0x000132bd) cursor_digital_pane

0x6376,	// (0x000132bd) cursor_primary_pane

0x6387,	// (0x000132ce) cursor_primary_small_pane

0x638f,	// (0x000132d6) cursor_secondary_pane

0x6397,	// (0x000132de) cursor_title_pane

0x6376,	// (0x000132bd) link_highlight_digital_pane

0x637e,	// (0x000132c5) link_highlight_primary_pane

0x6387,	// (0x000132ce) link_highlight_primary_small_pane

0x638f,	// (0x000132d6) link_highlight_secondary_pane

0x6397,	// (0x000132de) link_highlight_title_pane

0x6376,	// (0x000132bd) copy_highlight_digital_pane

0x6376,	// (0x000132bd) copy_highlight_primary_pane

0x6387,	// (0x000132ce) copy_highlight_primary_small_pane

0x638f,	// (0x000132d6) copy_highlight_secondary_pane

0x6397,	// (0x000132de) copy_highlight_title_pane

0x638f,	// (0x000132d6) graphic_text_digital_pane

0x7474,	// (0x000143bb) graphic_text_primary_pane

0x747d,	// (0x000143c4) graphic_text_primary_small_pane

0x6387,	// (0x000132ce) graphic_text_secondary_pane

0x6376,	// (0x000132bd) graphic_text_title_pane

0xf003,	// (0x0001bf4a) cursor_primary_pane_g1

0x7466,	// (0x000143ad) cursor_text_primary_t1

0xf54a,	// (0x0001c491) cursor_primary_small_pane_g1

0x7458,	// (0x0001439f) cursor_text_primary_small_t1

0xf540,	// (0x0001c487) cursor_primary_small_pane_g1_copy1

0x7440,	// (0x00014387) cursor_text_primary_small_t1_copy1

0x741e,	// (0x00014365) cursor_text_title_t1

0xf536,	// (0x0001c47d) cursor_title_pane_g1

0xf003,	// (0x0001bf4a) cursor_digital_pane_g1

0x63a9,	// (0x000132f0) cursor_text_digital_t1

0x73bf,	// (0x00014306) link_highlight_primary_pane_g1

0x73c7,	// (0x0001430e) link_highlight_primary_pane_t1

0x63b7,	// (0x000132fe) link_highlight_primary_small_pane_g1

0x63bf,	// (0x00013306) link_highlight_primary_small_pane_t1

0x63b7,	// (0x000132fe) link_highlight_secondary_pane_g1

0x63ce,	// (0x00013315) link_highlight_secondary_pane_t1

0x7333,	// (0x0001427a) link_highlight_title_pane_g1

0x733b,	// (0x00014282) link_highlight_title_pane_t1

0x731c,	// (0x00014263) link_highlight_digital_pane_g1

0x7324,	// (0x0001426b) link_highlight_digital_pane_t1

0x71f4,	// (0x0001413b) copy_highlight_primary_pane_g1

0x71fc,	// (0x00014143) copy_highlight_primary_pane_t1

0x71ce,	// (0x00014115) copy_highlight_primary_small_pane_g1

0x71e5,	// (0x0001412c) copy_highlight_primary_small_pane_t1

0x63dd,	// (0x00013324) copy_highlight_secondary_pane_g1

0x63e5,	// (0x0001332c) copy_highlight_secondary_pane_t1

0x71ce,	// (0x00014115) copy_highlight_title_pane_g1

0x71d6,	// (0x0001411d) copy_highlight_title_pane_t1

0x71f4,	// (0x0001413b) copy_highlight_digital_pane_g1

0x858d,	// (0x000154d4) copy_highlight_digital_pane_t1

0x84e1,	// (0x00015428) graphic_text_primary_pane_g1

0x8571,	// (0x000154b8) graphic_text_primary_pane_t1

0x857f,	// (0x000154c6) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x0001c911) graphic_text_primary_pane_t

0x854d,	// (0x00015494) graphic_text_primary_small_pane_g1

0x8555,	// (0x0001549c) graphic_text_primary_small_pane_t1

0x8563,	// (0x000154aa) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x0001c90c) graphic_text_primary_small_pane_t

0x8529,	// (0x00015470) graphic_text_secondary_pane_g1

0x8531,	// (0x00015478) graphic_text_secondary_pane_t1

0x853f,	// (0x00015486) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x0001c907) graphic_text_secondary_pane_t

0x8505,	// (0x0001544c) graphic_text_title_pane_g1

0x850d,	// (0x00015454) graphic_text_title_pane_t1

0x851b,	// (0x00015462) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x0001c902) graphic_text_title_pane_t

0x84e1,	// (0x00015428) graphic_text_digital_pane_g1

0x84e9,	// (0x00015430) graphic_text_digital_pane_t1

0x84f7,	// (0x0001543e) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x0001c8fd) graphic_text_digital_pane_t

0x4660,	// (0x000115a7) navi_icon_pane_srt_ParamLimits

0x4660,	// (0x000115a7) navi_icon_pane_srt

0x4580,	// (0x000114c7) navi_midp_pane_srt

0x4580,	// (0x000114c7) navi_navi_pane_srt

0x4660,	// (0x000115a7) navi_text_pane_srt_ParamLimits

0x4660,	// (0x000115a7) navi_text_pane_srt

0x84ac,	// (0x000153f3) navi_navi_icon_text_pane_srt

0x84b4,	// (0x000153fb) navi_navi_pane_srt_g1_ParamLimits

0x84b4,	// (0x000153fb) navi_navi_pane_srt_g1

0x84c6,	// (0x0001540d) navi_navi_pane_srt_g2_ParamLimits

0x84c6,	// (0x0001540d) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x0001c8f8) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x0001c8f8) navi_navi_pane_srt_g

0x84d8,	// (0x0001541f) navi_navi_tabs_pane_srt

0x84ac,	// (0x000153f3) navi_navi_text_pane_srt

0x84ac,	// (0x000153f3) navi_navi_volume_pane_srt

0x849d,	// (0x000153e4) navi_navi_text_pane_srt_t1

0x366d,	// (0x000105b4) navi_navi_volume_pane_srt_g1

0x3675,	// (0x000105bc) volume_small_pane_srt_ParamLimits

0x3675,	// (0x000105bc) volume_small_pane_srt

0x2a30,	// (0x0000f977) volume_small_pane_srt_g1_ParamLimits

0x2a30,	// (0x0000f977) volume_small_pane_srt_g1

0x2a40,	// (0x0000f987) volume_small_pane_srt_g2_ParamLimits

0x2a40,	// (0x0000f987) volume_small_pane_srt_g2

0x2a51,	// (0x0000f998) volume_small_pane_srt_g3_ParamLimits

0x2a51,	// (0x0000f998) volume_small_pane_srt_g3

0x2a62,	// (0x0000f9a9) volume_small_pane_srt_g4_ParamLimits

0x2a62,	// (0x0000f9a9) volume_small_pane_srt_g4

0x2a73,	// (0x0000f9ba) volume_small_pane_srt_g5_ParamLimits

0x2a73,	// (0x0000f9ba) volume_small_pane_srt_g5

0x2a84,	// (0x0000f9cb) volume_small_pane_srt_g6_ParamLimits

0x2a84,	// (0x0000f9cb) volume_small_pane_srt_g6

0x2a95,	// (0x0000f9dc) volume_small_pane_srt_g7_ParamLimits

0x2a95,	// (0x0000f9dc) volume_small_pane_srt_g7

0x2aa6,	// (0x0000f9ed) volume_small_pane_srt_g8_ParamLimits

0x2aa6,	// (0x0000f9ed) volume_small_pane_srt_g8

0x2ab7,	// (0x0000f9fe) volume_small_pane_srt_g9_ParamLimits

0x2ab7,	// (0x0000f9fe) volume_small_pane_srt_g9

0x2ac8,	// (0x0000fa0f) volume_small_pane_srt_g10_ParamLimits

0x2ac8,	// (0x0000fa0f) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001c6a5) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001c6a5) volume_small_pane_srt_g

0x4a48,	// (0x0001198f) query_popup_data_pane_cp2

0x8483,	// (0x000153ca) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x8483,	// (0x000153ca) navi_navi_icon_text_pane_srt_t1

0x7474,	// (0x000143bb) navi_tabs_2_long_pane_srt

0x7474,	// (0x000143bb) navi_tabs_2_pane_srt

0x7474,	// (0x000143bb) navi_tabs_3_long_pane_srt

0x7474,	// (0x000143bb) navi_tabs_3_pane_srt

0x7474,	// (0x000143bb) navi_tabs_4_pane_srt

0x364d,	// (0x00010594) tabs_2_active_pane_srt_ParamLimits

0x364d,	// (0x00010594) tabs_2_active_pane_srt

0x365d,	// (0x000105a4) tabs_2_passive_pane_srt_ParamLimits

0x365d,	// (0x000105a4) tabs_2_passive_pane_srt

0x6bd6,	// (0x00013b1d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6bd6,	// (0x00013b1d) bg_passive_tab_pane_cp1_srt

0x844f,	// (0x00015396) bg_passive_tab_pane_g1_cp1_srt

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp1_srt

0x8458,	// (0x0001539f) bg_passive_tab_pane_g3_cp1_srt

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp1_srt_ParamLimits

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp1_srt

0x8461,	// (0x000153a8) tabs_2_active_pane_srt_g1

0x044e,	// (0x0000d395) tabs_2_active_pane_srt_t1_ParamLimits

0x044e,	// (0x0000d395) tabs_2_active_pane_srt_t1

0x844f,	// (0x00015396) bg_active_tab_pane_g1_cp1_srt

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp1_srt

0x8458,	// (0x0001539f) bg_active_tab_pane_g3_cp1_srt

0x361a,	// (0x00010561) tabs_3_active_pane_srt_ParamLimits

0x361a,	// (0x00010561) tabs_3_active_pane_srt

0x362b,	// (0x00010572) tabs_3_passive_pane_cp_srt_ParamLimits

0x362b,	// (0x00010572) tabs_3_passive_pane_cp_srt

0x363c,	// (0x00010583) tabs_3_passive_pane_srt_ParamLimits

0x363c,	// (0x00010583) tabs_3_passive_pane_srt

0x6bd6,	// (0x00013b1d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6bd6,	// (0x00013b1d) bg_passive_tab_pane_cp2_srt

0x63f4,	// (0x0001333b) bg_passive_tab_pane_g1_cp2_srt

0x5eac,	// (0x00012df3) bg_passive_tab_pane_g2_cp2_srt

0x63fd,	// (0x00013344) bg_passive_tab_pane_g3_cp2_srt

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp2_srt_ParamLimits

0x48f5,	// (0x0001183c) bg_active_tab_pane_cp2_srt

0x8435,	// (0x0001537c) tabs_3_active_pane_srt_g1

0x0438,	// (0x0000d37f) tabs_3_active_pane_srt_t1_ParamLimits

0x0438,	// (0x0000d37f) tabs_3_active_pane_srt_t1

0x63f4,	// (0x0001333b) bg_active_tab_pane_g1_cp2_srt

0x5eac,	// (0x00012df3) bg_active_tab_pane_g2_cp2_srt

0x63fd,	// (0x00013344) bg_active_tab_pane_g3_cp2_srt

0x35d2,	// (0x00010519) tabs_4_active_pane_srt_ParamLimits

0x35d2,	// (0x00010519) tabs_4_active_pane_srt

0x35e4,	// (0x0001052b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x35e4,	// (0x0001052b) tabs_4_passive_pane_cp2_srt

0x2c2b,	// (0x0000fb72) aid_size_cell_toolbar

0x7f97,	// (0x00014ede) main_idle_act_pane_ParamLimits

0x2dee,	// (0x0000fd35) popup_large_graphic_colour_window_ParamLimits

0xd061,	// (0x00019fa8) popup_toolbar_window_ParamLimits

0xd061,	// (0x00019fa8) popup_toolbar_window

0x819a,	// (0x000150e1) list_single_graphic_2heading_pane_ParamLimits

0x819a,	// (0x000150e1) list_single_graphic_2heading_pane

0x5917,	// (0x0001285e) aid_size_cell_apps_grid_lsc_pane

0x5929,	// (0x00012870) aid_size_cell_apps_grid_prt_pane

0x6596,	// (0x000134dd) bg_wml_button_pane_cp1_ParamLimits

0x6596,	// (0x000134dd) bg_wml_button_pane_cp1

0xf4cd,	// (0x0001c414) form_midp_field_text_pane_t1_ParamLimits

0x6bd6,	// (0x00013b1d) input_focus_pane_cp050_ParamLimits

0x6e68,	// (0x00013daf) list_midp_form_text_pane_ParamLimits

0x6e0a,	// (0x00013d51) input_focus_pane_cp051_ParamLimits

0x6e1e,	// (0x00013d65) list_midp_choice_pane_ParamLimits

0xf461,	// (0x0001c3a8) list_single_2graphic_pane_cp3_ParamLimits

0xf461,	// (0x0001c3a8) list_single_2graphic_pane_cp3

0xf476,	// (0x0001c3bd) list_single_midp_graphic_pane_ParamLimits

0xf476,	// (0x0001c3bd) list_single_midp_graphic_pane

0x31fe,	// (0x00010145) list_single_graphic_2heading_pane_g1_ParamLimits

0x31fe,	// (0x00010145) list_single_graphic_2heading_pane_g1

0x320a,	// (0x00010151) list_single_graphic_2heading_pane_g4_ParamLimits

0x320a,	// (0x00010151) list_single_graphic_2heading_pane_g4

0x3216,	// (0x0001015d) list_single_graphic_2heading_pane_g5_ParamLimits

0x3216,	// (0x0001015d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001c6f8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001c6f8) list_single_graphic_2heading_pane_g

0x3222,	// (0x00010169) list_single_graphic_2heading_pane_t1_ParamLimits

0x3222,	// (0x00010169) list_single_graphic_2heading_pane_t1

0x3236,	// (0x0001017d) list_single_graphic_2heading_pane_t2_ParamLimits

0x3236,	// (0x0001017d) list_single_graphic_2heading_pane_t2

0x3252,	// (0x00010199) list_single_graphic_2heading_pane_t3_ParamLimits

0x3252,	// (0x00010199) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001c6ff) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001c6ff) list_single_graphic_2heading_pane_t

0x69da,	// (0x00013921) bg_popup_sub_pane_cp2

0x6a04,	// (0x0001394b) grid_toobar_pane

0x326a,	// (0x000101b1) cell_toolbar_pane_ParamLimits

0x326a,	// (0x000101b1) cell_toolbar_pane

0x6a56,	// (0x0001399d) cell_toolbar_pane_g1_ParamLimits

0x6a56,	// (0x0001399d) cell_toolbar_pane_g1

0x6a6a,	// (0x000139b1) cell_toolbar_pane_g2_ParamLimits

0x6a6a,	// (0x000139b1) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001c70d) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001c70d) cell_toolbar_pane_g

0x6a8c,	// (0x000139d3) grid_highlight_pane_cp2_ParamLimits

0x6a8c,	// (0x000139d3) grid_highlight_pane_cp2

0x6aa6,	// (0x000139ed) toolbar_button_pane

0x6ab2,	// (0x000139f9) toolbar_button_pane_g1

0x6aba,	// (0x00013a01) toolbar_button_pane_g2

0x6ac2,	// (0x00013a09) toolbar_button_pane_g3

0x6aca,	// (0x00013a11) toolbar_button_pane_g4

0x6ad2,	// (0x00013a19) toolbar_button_pane_g5

0x6ada,	// (0x00013a21) toolbar_button_pane_g6

0x6ae2,	// (0x00013a29) toolbar_button_pane_g7

0x6aea,	// (0x00013a31) toolbar_button_pane_g8

0x6af2,	// (0x00013a39) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001c712) toolbar_button_pane_g

0x32a2,	// (0x000101e9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x32a2,	// (0x000101e9) list_single_2graphic_pane_g1_cp3

0xd0b9,	// (0x0001a000) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd0b9,	// (0x0001a000) list_single_2graphic_pane_g2_cp3

0x32bf,	// (0x00010206) list_single_2graphic_pane_g3_cp3

0x32c7,	// (0x0001020e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x32c7,	// (0x0001020e) list_single_2graphic_pane_g4_cp3

0x32d3,	// (0x0001021a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x32d3,	// (0x0001021a) list_single_2graphic_pane_t1_cp3

0x32ed,	// (0x00010234) list_single_midp_graphic_pane_g2_ParamLimits

0x32ed,	// (0x00010234) list_single_midp_graphic_pane_g2

0x2c33,	// (0x0000fb7a) aid_zoom_text_primary

0x2c3b,	// (0x0000fb82) aid_zoom_text_secondary

0x64b1,	// (0x000133f8) status_small_pane_g7_ParamLimits

0x64b1,	// (0x000133f8) status_small_pane_g7

0x64d4,	// (0x0001341b) status_small_pane_t1_ParamLimits

0xe507,	// (0x0001b44e) title_pane_g2

0x0003,

0xf554,	// (0x0001c49b) title_pane_g

0xe77f,	// (0x0001b6c6) aid_size_cell_colour_1_pane_ParamLimits

0xe77f,	// (0x0001b6c6) aid_size_cell_colour_1_pane

0xe793,	// (0x0001b6da) aid_size_cell_colour_2_pane_ParamLimits

0xe793,	// (0x0001b6da) aid_size_cell_colour_2_pane

0xe7a7,	// (0x0001b6ee) aid_size_cell_colour_3_pane_ParamLimits

0xe7a7,	// (0x0001b6ee) aid_size_cell_colour_3_pane

0xe7bb,	// (0x0001b702) aid_size_cell_colour_4_pane_ParamLimits

0xe7bb,	// (0x0001b702) aid_size_cell_colour_4_pane

0x2695,	// (0x0000f5dc) title_pane_stacon_g1_ParamLimits

0x2695,	// (0x0000f5dc) title_pane_stacon_g1

0x7253,	// (0x0001419a) popup_note_wait_window_g3_ParamLimits

0x7253,	// (0x0001419a) popup_note_wait_window_g3

0x72c9,	// (0x00014210) popup_note_wait_window_t5_ParamLimits

0x72c9,	// (0x00014210) popup_note_wait_window_t5

0x4580,	// (0x000114c7) main_feb_china_hwr_fs_writing_pane

0xca7d,	// (0x000199c4) popup_feb_china_hwr_fs_window_ParamLimits

0xca7d,	// (0x000199c4) popup_feb_china_hwr_fs_window

0xd0ca,	// (0x0001a011) aid_size_cell_hwr_fs_ParamLimits

0xd0ca,	// (0x0001a011) aid_size_cell_hwr_fs

0x6bd6,	// (0x00013b1d) bg_popup_sub_pane_cp3_ParamLimits

0x6bd6,	// (0x00013b1d) bg_popup_sub_pane_cp3

0xd0df,	// (0x0001a026) grid_hwr_fs_pane_ParamLimits

0xd0df,	// (0x0001a026) grid_hwr_fs_pane

0x333c,	// (0x00010283) linegrid_hwr_fs_pane_ParamLimits

0x333c,	// (0x00010283) linegrid_hwr_fs_pane

0xd0f7,	// (0x0001a03e) cell_hwr_fs_pane_ParamLimits

0xd0f7,	// (0x0001a03e) cell_hwr_fs_pane

0x6be2,	// (0x00013b29) linegrid_hwr_fs_pane_g1_ParamLimits

0x6be2,	// (0x00013b29) linegrid_hwr_fs_pane_g1

0xf435,	// (0x0001c37c) linegrid_hwr_fs_pane_g2_ParamLimits

0xf435,	// (0x0001c37c) linegrid_hwr_fs_pane_g2

0x6c00,	// (0x00013b47) linegrid_hwr_fs_pane_g3_ParamLimits

0x6c00,	// (0x00013b47) linegrid_hwr_fs_pane_g3

0x336e,	// (0x000102b5) linegrid_hwr_fs_pane_g4_ParamLimits

0x336e,	// (0x000102b5) linegrid_hwr_fs_pane_g4

0x3388,	// (0x000102cf) linegrid_hwr_fs_pane_g5_ParamLimits

0x3388,	// (0x000102cf) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x0001c738) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001c738) linegrid_hwr_fs_pane_g

0x6c0c,	// (0x00013b53) cell_hwr_fs_pane_g1_ParamLimits

0x6c0c,	// (0x00013b53) cell_hwr_fs_pane_g1

0x6911,	// (0x00013858) cell_hwr_fs_pane_g2_ParamLimits

0x6911,	// (0x00013858) cell_hwr_fs_pane_g2

0xf447,	// (0x0001c38e) cell_hwr_fs_pane_g3_ParamLimits

0xf447,	// (0x0001c38e) cell_hwr_fs_pane_g3

0xf454,	// (0x0001c39b) cell_hwr_fs_pane_g4_ParamLimits

0xf454,	// (0x0001c39b) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x0001c743) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0001c743) cell_hwr_fs_pane_g

0xd11d,	// (0x0001a064) cell_hwr_fs_pane_t1

0x4580,	// (0x000114c7) grid_highlight_pane_cp6

0x4580,	// (0x000114c7) main_idle_act2_pane

0x56d1,	// (0x00012618) aid_inside_area_popup_secondary

0x006f,	// (0x0000cfb6) aid_inside_area_window_primary_ParamLimits

0x006f,	// (0x0000cfb6) aid_inside_area_window_primary

0x859c,	// (0x000154e3) ai2_news_ticker_pane

0x85a4,	// (0x000154eb) aid_size_cell_ai1_link_ParamLimits

0x85a4,	// (0x000154eb) aid_size_cell_ai1_link

0x85be,	// (0x00015505) popup_ai2_data_window_ParamLimits

0x85be,	// (0x00015505) popup_ai2_data_window

0x85d2,	// (0x00015519) popup_ai2_link_window_ParamLimits

0x85d2,	// (0x00015519) popup_ai2_link_window

0x6bd6,	// (0x00013b1d) bg_popup_sub_pane_cp4_ParamLimits

0x6bd6,	// (0x00013b1d) bg_popup_sub_pane_cp4

0x85e6,	// (0x0001552d) grid_ai2_link_pane_ParamLimits

0x85e6,	// (0x0001552d) grid_ai2_link_pane

0x85fd,	// (0x00015544) popup_ai2_link_window_g1_ParamLimits

0x85fd,	// (0x00015544) popup_ai2_link_window_g1

0x8609,	// (0x00015550) popup_ai2_link_window_g2_ParamLimits

0x8609,	// (0x00015550) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0001c916) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0001c916) popup_ai2_link_window_g

0x8618,	// (0x0001555f) ai2_mp_button_pane

0x8620,	// (0x00015567) ai2_mp_volume_pane

0x6e0a,	// (0x00013d51) bg_popup_sub_pane_cp5_ParamLimits

0x6e0a,	// (0x00013d51) bg_popup_sub_pane_cp5

0x8628,	// (0x0001556f) heading_ai2_gene_pane_ParamLimits

0x8628,	// (0x0001556f) heading_ai2_gene_pane

0x8634,	// (0x0001557b) list_ai2_gene_pane_ParamLimits

0x8634,	// (0x0001557b) list_ai2_gene_pane

0x867c,	// (0x000155c3) cell_ai2_link_pane_ParamLimits

0x867c,	// (0x000155c3) cell_ai2_link_pane

0x8692,	// (0x000155d9) cell_ai2_link_pane_g1

0x4580,	// (0x000114c7) grid_highlight_pane_cp7

0x368a,	// (0x000105d1) ai2_mp_volume_pane_g1

0x8763,	// (0x000156aa) ai2_mp_volume_pane_g2

0x86d8,	// (0x0001561f) list_ai2_gene_pane_t1

0x876b,	// (0x000156b2) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x0001c92f) ai2_mp_volume_pane_g

0x3692,	// (0x000105d9) volume_small_pane_cp3

0x8773,	// (0x000156ba) aid_size_cell_ai2_button

0x877b,	// (0x000156c2) grid_ai2_button_pane

0x8784,	// (0x000156cb) cell_ai2_button_pane_ParamLimits

0x8784,	// (0x000156cb) cell_ai2_button_pane

0x4576,	// (0x000114bd) cell_ai2_button_pane_g1

0x4580,	// (0x000114c7) grid_highlight_pane_cp8

0x8723,	// (0x0001566a) ai2_gene_pane_t1_ParamLimits

0x8723,	// (0x0001566a) ai2_gene_pane_t1

0xca0b,	// (0x00019952) aid_height_parent_landscape

0x01c4,	// (0x0000d10b) aid_height_set_list

0x7f97,	// (0x00014ede) aid_size_parent

0x8381,	// (0x000152c8) aid_size_cell_graphic_pane_ParamLimits

0x8644,	// (0x0001558b) popup_ai2_data_window_g1_ParamLimits

0x8644,	// (0x0001558b) popup_ai2_data_window_g1

0x8650,	// (0x00015597) ai2_news_ticker_pane_g1

0x8658,	// (0x0001559f) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x0001c91b) ai2_news_ticker_pane_g

0x8660,	// (0x000155a7) ai2_news_ticker_pane_t1

0x866e,	// (0x000155b5) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x0001c920) ai2_news_ticker_pane_t

0x869b,	// (0x000155e2) heading_ai2_gene_pane_g1

0x86a3,	// (0x000155ea) heading_ai2_gene_pane_t1_ParamLimits

0x86a3,	// (0x000155ea) heading_ai2_gene_pane_t1

0x86b8,	// (0x000155ff) list_highlight_pane_cp6

0x86c0,	// (0x00015607) ai2_gene_pane_ParamLimits

0x86c0,	// (0x00015607) ai2_gene_pane

0x86e6,	// (0x0001562d) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0001c925) list_ai2_gene_pane_t

0x86f4,	// (0x0001563b) list_highlight_pane_cp8_ParamLimits

0x86f4,	// (0x0001563b) list_highlight_pane_cp8

0x8705,	// (0x0001564c) ai2_gene_pane_g1_ParamLimits

0x8705,	// (0x0001564c) ai2_gene_pane_g1

0x8717,	// (0x0001565e) ai2_gene_pane_g2_ParamLimits

0x8717,	// (0x0001565e) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x0001c92a) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x0001c92a) ai2_gene_pane_g

0x4e67,	// (0x00011dae) scroll_pane_cp12

0xc9ca,	// (0x00019911) control_pane_t3_ParamLimits

0xc9ca,	// (0x00019911) control_pane_t3

0x64c5,	// (0x0001340c) status_small_pane_g8_ParamLimits

0x64c5,	// (0x0001340c) status_small_pane_g8

0xcb10,	// (0x00019a57) popup_find_window_ParamLimits

0xcd91,	// (0x00019cd8) popup_note_image_window_ParamLimits

0x4efe,	// (0x00011e45) list_double2_graphic_pane_vc_g1_ParamLimits

0x4efe,	// (0x00011e45) list_double2_graphic_pane_vc_g1

0x4e84,	// (0x00011dcb) list_double2_graphic_pane_vc_g2_ParamLimits

0x4e84,	// (0x00011dcb) list_double2_graphic_pane_vc_g2

0x4e90,	// (0x00011dd7) list_double2_graphic_pane_vc_g3_ParamLimits

0x4e90,	// (0x00011dd7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001c706) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c706) list_double2_graphic_pane_vc_g

0x6a40,	// (0x00013987) list_double2_graphic_pane_vc_t1_ParamLimits

0x6a40,	// (0x00013987) list_double2_graphic_pane_vc_t1

0x4e84,	// (0x00011dcb) list_single_heading_pane_vc_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_single_heading_pane_vc_g1

0x4e90,	// (0x00011dd7) list_single_heading_pane_vc_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001c515) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001c515) list_single_heading_pane_vc_g

0x6afa,	// (0x00013a41) list_single_heading_pane_vc_t1_ParamLimits

0x6afa,	// (0x00013a41) list_single_heading_pane_vc_t1

0x6b10,	// (0x00013a57) list_single_heading_pane_vc_t2_ParamLimits

0x6b10,	// (0x00013a57) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x0001c727) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x0001c727) list_single_heading_pane_vc_t

0x6b2c,	// (0x00013a73) list_setting_number_pane_vc_g1_ParamLimits

0x6b2c,	// (0x00013a73) list_setting_number_pane_vc_g1

0x6b38,	// (0x00013a7f) list_setting_number_pane_vc_g2_ParamLimits

0x6b38,	// (0x00013a7f) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001c72c) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001c72c) list_setting_number_pane_vc_g

0x6b44,	// (0x00013a8b) list_setting_number_pane_vc_t1_ParamLimits

0x6b44,	// (0x00013a8b) list_setting_number_pane_vc_t1

0x6b58,	// (0x00013a9f) list_setting_number_pane_vc_t2_ParamLimits

0x6b58,	// (0x00013a9f) list_setting_number_pane_vc_t2

0x6b72,	// (0x00013ab9) list_setting_number_pane_vc_t3_ParamLimits

0x6b72,	// (0x00013ab9) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x0001c731) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x0001c731) list_setting_number_pane_vc_t

0x6b9a,	// (0x00013ae1) set_value_pane_vc_ParamLimits

0x6b9a,	// (0x00013ae1) set_value_pane_vc

0x819a,	// (0x000150e1) list_double2_graphic_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_double2_graphic_pane_vc

0x81ad,	// (0x000150f4) list_double2_large_graphic_pane_vc_ParamLimits

0x81ad,	// (0x000150f4) list_double2_large_graphic_pane_vc

0x819a,	// (0x000150e1) list_double2_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_double2_pane_vc

0x819a,	// (0x000150e1) list_double_graphic_heading_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_double_graphic_heading_pane_vc

0x819a,	// (0x000150e1) list_double_graphic_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_double_graphic_pane_vc

0x819a,	// (0x000150e1) list_double_heading_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_double_heading_pane_vc

0x81ad,	// (0x000150f4) list_double_large_graphic_pane_vc_ParamLimits

0x81ad,	// (0x000150f4) list_double_large_graphic_pane_vc

0x819a,	// (0x000150e1) list_double_number_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_double_number_pane_vc

0x819a,	// (0x000150e1) list_double_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_double_pane_vc

0x819a,	// (0x000150e1) list_double_time_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_double_time_pane_vc

0x819a,	// (0x000150e1) list_setting_number_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_setting_number_pane_vc

0x819a,	// (0x000150e1) list_setting_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_setting_pane_vc

0x819a,	// (0x000150e1) list_single_graphic_heading_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_single_graphic_heading_pane_vc

0x819a,	// (0x000150e1) list_single_heading_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_single_heading_pane_vc

0x819a,	// (0x000150e1) list_single_number_heading_pane_vc_ParamLimits

0x819a,	// (0x000150e1) list_single_number_heading_pane_vc

0x87b7,	// (0x000156fe) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x87b7,	// (0x000156fe) list_double_graphic_heading_pane_vc_g1

0x87c3,	// (0x0001570a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x87c3,	// (0x0001570a) list_double_graphic_heading_pane_vc_g2

0x87cf,	// (0x00015716) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x87cf,	// (0x00015716) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x0001c936) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x0001c936) list_double_graphic_heading_pane_vc_g

0x87db,	// (0x00015722) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x87db,	// (0x00015722) list_double_graphic_heading_pane_vc_t1

0x87f7,	// (0x0001573e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x87f7,	// (0x0001573e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x0001c93d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x0001c93d) list_double_graphic_heading_pane_vc_t

0x6b2c,	// (0x00013a73) list_setting_pane_vc_g1_ParamLimits

0x6b2c,	// (0x00013a73) list_setting_pane_vc_g1

0x6b38,	// (0x00013a7f) list_setting_pane_vc_g2_ParamLimits

0x6b38,	// (0x00013a7f) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001c72c) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001c72c) list_setting_pane_vc_g

0x8a12,	// (0x00015959) list_setting_pane_vc_t1_ParamLimits

0x8a12,	// (0x00015959) list_setting_pane_vc_t1

0x8a2c,	// (0x00015973) list_setting_pane_vc_t2_ParamLimits

0x8a2c,	// (0x00015973) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0001c980) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0001c980) list_setting_pane_vc_t

0x6b9a,	// (0x00013ae1) set_value_pane_cp_vc_ParamLimits

0x6b9a,	// (0x00013ae1) set_value_pane_cp_vc

0x4e84,	// (0x00011dcb) list_single_number_heading_pane_vc_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_single_number_heading_pane_vc_g1

0x4e90,	// (0x00011dd7) list_single_number_heading_pane_vc_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001c515) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001c515) list_single_number_heading_pane_vc_g

0x6afa,	// (0x00013a41) list_single_number_heading_pane_vc_t1_ParamLimits

0x6afa,	// (0x00013a41) list_single_number_heading_pane_vc_t1

0x8a44,	// (0x0001598b) list_single_number_heading_pane_vc_t2_ParamLimits

0x8a44,	// (0x0001598b) list_single_number_heading_pane_vc_t2

0x4eec,	// (0x00011e33) list_single_number_heading_pane_vc_t3_ParamLimits

0x4eec,	// (0x00011e33) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0001c985) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0001c985) list_single_number_heading_pane_vc_t

0x4efe,	// (0x00011e45) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4efe,	// (0x00011e45) list_single_graphic_heading_pane_vc_g1

0x4e84,	// (0x00011dcb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4e84,	// (0x00011dcb) list_single_graphic_heading_pane_vc_g4

0x4e90,	// (0x00011dd7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4e90,	// (0x00011dd7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001c706) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c706) list_single_graphic_heading_pane_vc_g

0x6afa,	// (0x00013a41) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6afa,	// (0x00013a41) list_single_graphic_heading_pane_vc_t1

0x8a58,	// (0x0001599f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x8a58,	// (0x0001599f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0001c98c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0001c98c) list_single_graphic_heading_pane_vc_t

0x4e84,	// (0x00011dcb) list_double2_pane_vc_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_double2_pane_vc_g1

0x4e90,	// (0x00011dd7) list_double2_pane_vc_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001c515) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001c515) list_double2_pane_vc_g

0x8137,	// (0x0001507e) list_double2_pane_vc_t1_ParamLimits

0x8137,	// (0x0001507e) list_double2_pane_vc_t1

0x8a6c,	// (0x000159b3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x8a6c,	// (0x000159b3) list_double2_large_graphic_pane_vc_g1

0x8a78,	// (0x000159bf) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8a78,	// (0x000159bf) list_double2_large_graphic_pane_vc_g2

0x8a84,	// (0x000159cb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8a84,	// (0x000159cb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0001c532) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0001c532) list_double2_large_graphic_pane_vc_g

0x8a90,	// (0x000159d7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x8a90,	// (0x000159d7) list_double2_large_graphic_pane_vc_t1

0x8aa6,	// (0x000159ed) list_double_time_pane_vc_g1_ParamLimits

0x8aa6,	// (0x000159ed) list_double_time_pane_vc_g1

0x8ab2,	// (0x000159f9) list_double_time_pane_vc_g2_ParamLimits

0x8ab2,	// (0x000159f9) list_double_time_pane_vc_g2

0x0001,

0xfa4a,	// (0x0001c991) list_double_time_pane_vc_g_ParamLimits

0xfa4a,	// (0x0001c991) list_double_time_pane_vc_g

0x8abe,	// (0x00015a05) list_double_time_pane_vc_t1_ParamLimits

0x8abe,	// (0x00015a05) list_double_time_pane_vc_t1

0x8ae2,	// (0x00015a29) list_double_time_pane_vc_t2_ParamLimits

0x8ae2,	// (0x00015a29) list_double_time_pane_vc_t2

0x8b0c,	// (0x00015a53) list_double_time_pane_vc_t3_ParamLimits

0x8b0c,	// (0x00015a53) list_double_time_pane_vc_t3

0x8b1e,	// (0x00015a65) list_double_time_pane_vc_t4_ParamLimits

0x8b1e,	// (0x00015a65) list_double_time_pane_vc_t4

0x0003,

0xfa4f,	// (0x0001c996) list_double_time_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001c996) list_double_time_pane_vc_t

0x4e84,	// (0x00011dcb) list_double_pane_vc_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_double_pane_vc_g1

0x4e90,	// (0x00011dd7) list_double_pane_vc_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001c515) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001c515) list_double_pane_vc_g

0x8b32,	// (0x00015a79) list_double_pane_vc_t1_ParamLimits

0x8b32,	// (0x00015a79) list_double_pane_vc_t1

0x8b46,	// (0x00015a8d) list_double_pane_vc_t2_ParamLimits

0x8b46,	// (0x00015a8d) list_double_pane_vc_t2

0x0001,

0xfa58,	// (0x0001c99f) list_double_pane_vc_t_ParamLimits

0xfa58,	// (0x0001c99f) list_double_pane_vc_t

0x4e84,	// (0x00011dcb) list_double_number_pane_vc_g1_ParamLimits

0x4e84,	// (0x00011dcb) list_double_number_pane_vc_g1

0x4e90,	// (0x00011dd7) list_double_number_pane_vc_g2_ParamLimits

0x4e90,	// (0x00011dd7) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001c515) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001c515) list_double_number_pane_vc_g

0x8b5e,	// (0x00015aa5) list_double_number_pane_vc_t1_ParamLimits

0x8b5e,	// (0x00015aa5) list_double_number_pane_vc_t1

0x8b70,	// (0x00015ab7) list_double_number_pane_vc_t2_ParamLimits

0x8b70,	// (0x00015ab7) list_double_number_pane_vc_t2

0x8b46,	// (0x00015a8d) list_double_number_pane_vc_t3_ParamLimits

0x8b46,	// (0x00015a8d) list_double_number_pane_vc_t3

0x0002,

0xfa5d,	// (0x0001c9a4) list_double_number_pane_vc_t_ParamLimits

0xfa5d,	// (0x0001c9a4) list_double_number_pane_vc_t

0x8b84,	// (0x00015acb) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8b84,	// (0x00015acb) list_double_large_graphic_pane_vc_g1

0x8b90,	// (0x00015ad7) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8b90,	// (0x00015ad7) list_double_large_graphic_pane_vc_g2

0x8a84,	// (0x000159cb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8a84,	// (0x000159cb) list_double_large_graphic_pane_vc_g3

0x8b9f,	// (0x00015ae6) list_double_large_graphic_pane_vc_g4_ParamLimits

0x8b9f,	// (0x00015ae6) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa64,	// (0x0001c9ab) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa64,	// (0x0001c9ab) list_double_large_graphic_pane_vc_g

0x8bab,	// (0x00015af2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x8bab,	// (0x00015af2) list_double_large_graphic_pane_vc_t1

0x8bbf,	// (0x00015b06) list_double_large_graphic_pane_vc_t2_ParamLimits

0x8bbf,	// (0x00015b06) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001c9b4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001c9b4) list_double_large_graphic_pane_vc_t

0x87c3,	// (0x0001570a) list_double_heading_pane_vc_g1_ParamLimits

0x87c3,	// (0x0001570a) list_double_heading_pane_vc_g1

0x87cf,	// (0x00015716) list_double_heading_pane_vc_g2_ParamLimits

0x87cf,	// (0x00015716) list_double_heading_pane_vc_g2

0x0001,

0xfa72,	// (0x0001c9b9) list_double_heading_pane_vc_g_ParamLimits

0xfa72,	// (0x0001c9b9) list_double_heading_pane_vc_g

0x8bd8,	// (0x00015b1f) list_double_heading_pane_vc_t1_ParamLimits

0x8bd8,	// (0x00015b1f) list_double_heading_pane_vc_t1

0x6afa,	// (0x00013a41) list_double_heading_pane_vc_t2_ParamLimits

0x6afa,	// (0x00013a41) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0001c9be) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0001c9be) list_double_heading_pane_vc_t

0x4efe,	// (0x00011e45) list_double_graphic_pane_vc_g1_ParamLimits

0x4efe,	// (0x00011e45) list_double_graphic_pane_vc_g1

0x8bec,	// (0x00015b33) list_double_graphic_pane_vc_g2_ParamLimits

0x8bec,	// (0x00015b33) list_double_graphic_pane_vc_g2

0x8bfb,	// (0x00015b42) list_double_graphic_pane_vc_g3_ParamLimits

0x8bfb,	// (0x00015b42) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0001c9c3) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0001c9c3) list_double_graphic_pane_vc_g

0x8c07,	// (0x00015b4e) list_double_graphic_pane_vc_t1_ParamLimits

0x8c07,	// (0x00015b4e) list_double_graphic_pane_vc_t1

0x8c1b,	// (0x00015b62) list_double_graphic_pane_vc_t2_ParamLimits

0x8c1b,	// (0x00015b62) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0001c9ca) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0001c9ca) list_double_graphic_pane_vc_t

0x21f5,	// (0x0000f13c) aid_size_cell_fastswap

0xc69e,	// (0x000195e5) aid_size_cell_touch_ParamLimits

0xc69e,	// (0x000195e5) aid_size_cell_touch

0x2462,	// (0x0000f3a9) popup_fast_swap_wide_window_ParamLimits

0x2462,	// (0x0000f3a9) popup_fast_swap_wide_window

0xc84e,	// (0x00019795) touch_pane_ParamLimits

0xc84e,	// (0x00019795) touch_pane

0x5342,	// (0x00012289) button_value_adjust_pane_cp2

0x5342,	// (0x00012289) button_value_adjust_pane_cp4

0x5362,	// (0x000122a9) form_field_data_pane_cp2

0xebdf,	// (0x0001bb26) form_field_data_wide_pane_cp2

0x59e0,	// (0x00012927) bg_scroll_pane_ParamLimits

0x27f8,	// (0x0000f73f) scroll_handle_pane_ParamLimits

0x280c,	// (0x0000f753) scroll_sc2_down_pane_ParamLimits

0x280c,	// (0x0000f753) scroll_sc2_down_pane

0x5a11,	// (0x00012958) scroll_sc2_up_pane_ParamLimits

0x5a11,	// (0x00012958) scroll_sc2_up_pane

0x0585,	// (0x0000d4cc) grid_wheel_folder_pane_g1_ParamLimits

0x0585,	// (0x0000d4cc) grid_wheel_folder_pane_g1

0x29c8,	// (0x0000f90f) clock_nsta_pane_cp2_ParamLimits

0x29c8,	// (0x0000f90f) clock_nsta_pane_cp2

0x6596,	// (0x000134dd) listscroll_midp_pane_ParamLimits

0xef68,	// (0x0001beaf) midp_canvas_pane

0x6540,	// (0x00013487) nsta_clock_indic_pane

0x657c,	// (0x000134c3) listscroll_form_pane_vc

0x6584,	// (0x000134cb) listscroll_set_pane_vc_ParamLimits

0x6584,	// (0x000134cb) listscroll_set_pane_vc

0xf140,	// (0x0001c087) clock_nsta_pane

0xf16a,	// (0x0001c0b1) indicator_nsta_pane

0x69da,	// (0x00013921) bg_popup_sub_pane_cp2_ParamLimits

0x69ee,	// (0x00013935) find_pane_cp2_ParamLimits

0x69ee,	// (0x00013935) find_pane_cp2

0x6a04,	// (0x0001394b) grid_toobar_pane_ParamLimits

0x6baa,	// (0x00013af1) list_form_gen_pane_vc_ParamLimits

0x6baa,	// (0x00013af1) list_form_gen_pane_vc

0x6bc0,	// (0x00013b07) scroll_pane_cp8_vc_ParamLimits

0x6bc0,	// (0x00013b07) scroll_pane_cp8_vc

0x6c3c,	// (0x00013b83) data_form_wide_pane_vc_ParamLimits

0x6c3c,	// (0x00013b83) data_form_wide_pane_vc

0x6c48,	// (0x00013b8f) form_field_data_wide_pane_vc_g1

0x6c50,	// (0x00013b97) form_field_data_wide_pane_vc_t1_ParamLimits

0x6c50,	// (0x00013b97) form_field_data_wide_pane_vc_t1

0x541c,	// (0x00012363) input_focus_pane_cp6_vc_ParamLimits

0x541c,	// (0x00012363) input_focus_pane_cp6_vc

0xf50a,	// (0x0001c451) list_midp_pane_ParamLimits

0x83e7,	// (0x0001532e) scroll_pane_cp16_ParamLimits

0x83e7,	// (0x0001532e) scroll_pane_cp16

0x702d,	// (0x00013f74) button_value_adjust_pane_ParamLimits

0x702d,	// (0x00013f74) button_value_adjust_pane

0x01d5,	// (0x0000d11c) button_value_adjust_pane_cp6_ParamLimits

0x01d5,	// (0x0000d11c) button_value_adjust_pane_cp6

0x02eb,	// (0x0000d232) settings_code_pane_cp_ParamLimits

0x02eb,	// (0x0000d232) settings_code_pane_cp

0x4576,	// (0x000114bd) cell_touch_pane_g1

0x4576,	// (0x000114bd) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001c64b) cell_touch_pane_g

0x0464,	// (0x0000d3ab) cell_touch_pane_cp_ParamLimits

0x0464,	// (0x0000d3ab) cell_touch_pane_cp

0x0480,	// (0x0000d3c7) cell_touch_pane_ParamLimits

0x0480,	// (0x0000d3c7) cell_touch_pane

0x4576,	// (0x000114bd) scroll_sc2_down_pane_g1

0x4576,	// (0x000114bd) scroll_sc2_up_pane_g1

0x4580,	// (0x000114c7) bg_set_opt_pane_cp4_vc

0x880f,	// (0x00015756) list_set_graphic_pane_vc_g1_ParamLimits

0x880f,	// (0x00015756) list_set_graphic_pane_vc_g1

0x881b,	// (0x00015762) list_set_graphic_pane_vc_g2_ParamLimits

0x881b,	// (0x00015762) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x0001c942) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x0001c942) list_set_graphic_pane_vc_g

0x8827,	// (0x0001576e) text_primary_small_cp13_vc_ParamLimits

0x8827,	// (0x0001576e) text_primary_small_cp13_vc

0x883f,	// (0x00015786) list_set_graphic_pane_vc_ParamLimits

0x883f,	// (0x00015786) list_set_graphic_pane_vc

0x4580,	// (0x000114c7) input_focus_pane_cp2_vc

0x4576,	// (0x000114bd) setting_code_pane_vc_g1

0x46ab,	// (0x000115f2) setting_code_pane_vc_t1

0x8852,	// (0x00015799) set_text_pane_vc_t1_ParamLimits

0x8852,	// (0x00015799) set_text_pane_vc_t1

0x4580,	// (0x000114c7) input_focus_pane_cp1_vc

0x886f,	// (0x000157b6) list_set_text_pane_vc

0x4576,	// (0x000114bd) setting_text_pane_vc_g1

0x4580,	// (0x000114c7) bg_set_opt_pane_cp2_vc

0x46a2,	// (0x000115e9) setting_slider_graphic_pane_vc_g1

0x8879,	// (0x000157c0) setting_slider_graphic_pane_vc_t1

0x8889,	// (0x000157d0) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x0001c947) setting_slider_graphic_pane_vc_t

0x8899,	// (0x000157e0) slider_set_pane_cp_vc

0x88a1,	// (0x000157e8) slider_set_pane_vc_g1

0x88aa,	// (0x000157f1) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x0001c94c) slider_set_pane_vc_g

0x5549,	// (0x00012490) set_opt_bg_pane_g1_copy1

0x5551,	// (0x00012498) set_opt_bg_pane_g2_copy1

0x88d6,	// (0x0001581d) set_opt_bg_pane_g3_copy1

0x5561,	// (0x000124a8) set_opt_bg_pane_g4_copy1

0x5569,	// (0x000124b0) set_opt_bg_pane_g5_copy1

0x5571,	// (0x000124b8) set_opt_bg_pane_g6_copy1

0x88de,	// (0x00015825) set_opt_bg_pane_g7_copy1

0x88e8,	// (0x0001582f) set_opt_bg_pane_g8_copy1

0x88f0,	// (0x00015837) set_opt_bg_pane_g9_copy1

0x4580,	// (0x000114c7) bg_set_opt_pane_cp_vc

0x88f8,	// (0x0001583f) setting_slider_pane_vc_t1

0x8907,	// (0x0001584e) setting_slider_pane_vc_t2

0x8917,	// (0x0001585e) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x0001c95b) setting_slider_pane_vc_t

0x8927,	// (0x0001586e) slider_set_pane_vc

0x33ac,	// (0x000102f3) volume_set_pane_vc_g1

0x369b,	// (0x000105e2) volume_set_pane_vc_g2

0x36a4,	// (0x000105eb) volume_set_pane_vc_g3

0x36ad,	// (0x000105f4) volume_set_pane_vc_g4

0x36b6,	// (0x000105fd) volume_set_pane_vc_g5

0x36bf,	// (0x00010606) volume_set_pane_vc_g6

0x33d9,	// (0x00010320) volume_set_pane_vc_g7

0x36c8,	// (0x0001060f) volume_set_pane_vc_g8

0x36d1,	// (0x00010618) volume_set_pane_vc_g9

0x36da,	// (0x00010621) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x0001c962) volume_set_pane_vc_g

0x892f,	// (0x00015876) volume_set_pane_vc

0x8937,	// (0x0001587e) button_value_adjust_pane_cp1_vc

0x8941,	// (0x00015888) list_highlight_pane_cp2_vc

0x894a,	// (0x00015891) list_set_pane_vc_ParamLimits

0x894a,	// (0x00015891) list_set_pane_vc

0x89a8,	// (0x000158ef) main_pane_set_vc_t1_ParamLimits

0x89a8,	// (0x000158ef) main_pane_set_vc_t1

0x89bd,	// (0x00015904) main_pane_set_vc_t2_ParamLimits

0x89bd,	// (0x00015904) main_pane_set_vc_t2

0x89cf,	// (0x00015916) main_pane_set_vc_t3_ParamLimits

0x89cf,	// (0x00015916) main_pane_set_vc_t3

0x89e1,	// (0x00015928) main_pane_set_vc_t4_ParamLimits

0x89e1,	// (0x00015928) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0001c977) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0001c977) main_pane_set_vc_t

0x89f3,	// (0x0001593a) setting_code_pane_vc_ParamLimits

0x89f3,	// (0x0001593a) setting_code_pane_vc

0x8a02,	// (0x00015949) setting_slider_graphic_pane_vc

0x8a02,	// (0x00015949) setting_slider_pane_vc

0x8a02,	// (0x00015949) setting_text_pane_vc

0x8a02,	// (0x00015949) setting_volume_pane_vc

0x8a0a,	// (0x00015951) scroll_pane_cp121_vc

0x5330,	// (0x00012277) set_content_pane_vc

0x8c33,	// (0x00015b7a) button_value_adjust_pane_g1

0x8c3c,	// (0x00015b83) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0001c9cf) button_value_adjust_pane_g

0x8c45,	// (0x00015b8c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x8c45,	// (0x00015b8c) form_field_slider_wide_pane_vc_t1

0x8c59,	// (0x00015ba0) form_field_slider_wide_pane_vc_t2_ParamLimits

0x8c59,	// (0x00015ba0) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0001c9d4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001c9d4) form_field_slider_wide_pane_vc_t

0x48f5,	// (0x0001183c) input_focus_pane_cp10_vc_ParamLimits

0x48f5,	// (0x0001183c) input_focus_pane_cp10_vc

0x8c85,	// (0x00015bcc) slider_cont_pane_cp1_vc_ParamLimits

0x8c85,	// (0x00015bcc) slider_cont_pane_cp1_vc

0x8c95,	// (0x00015bdc) slider_form_pane_g1_cp2

0x88aa,	// (0x000157f1) slider_form_pane_g2_cp2

0x8cc2,	// (0x00015c09) form_field_slider_pane_vc_t3

0x8cd0,	// (0x00015c17) form_field_slider_pane_vc_t4

0x8cde,	// (0x00015c25) slider_form_pane_vc_ParamLimits

0x8cde,	// (0x00015c25) slider_form_pane_vc

0x8ceb,	// (0x00015c32) form_field_slider_pane_vc_t1_ParamLimits

0x8ceb,	// (0x00015c32) form_field_slider_pane_vc_t1

0x8c59,	// (0x00015ba0) form_field_slider_pane_vc_t2_ParamLimits

0x8c59,	// (0x00015ba0) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001c9e6) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001c9e6) form_field_slider_pane_vc_t

0x48f5,	// (0x0001183c) input_focus_pane_cp9_vc_ParamLimits

0x48f5,	// (0x0001183c) input_focus_pane_cp9_vc

0x8d07,	// (0x00015c4e) slider_cont_pane_vc_ParamLimits

0x8d07,	// (0x00015c4e) slider_cont_pane_vc

0x8d19,	// (0x00015c60) list_form_graphic_pane_cp_vc_ParamLimits

0x8d19,	// (0x00015c60) list_form_graphic_pane_cp_vc

0x6c48,	// (0x00013b8f) form_field_popup_wide_pane_vc_g1

0x8d2e,	// (0x00015c75) form_field_popup_wide_pane_vc_t1_ParamLimits

0x8d2e,	// (0x00015c75) form_field_popup_wide_pane_vc_t1

0x541c,	// (0x00012363) input_focus_pane_cp8_vc_ParamLimits

0x541c,	// (0x00012363) input_focus_pane_cp8_vc

0x8d73,	// (0x00015cba) list_form_wide_pane_vc_ParamLimits

0x8d73,	// (0x00015cba) list_form_wide_pane_vc

0x8d7f,	// (0x00015cc6) list_form_graphic_pane_vc_g1

0x8d87,	// (0x00015cce) list_form_graphic_pane_vc_t1_ParamLimits

0x8d87,	// (0x00015cce) list_form_graphic_pane_vc_t1

0x4660,	// (0x000115a7) list_highlight_pane_cp5_vc_ParamLimits

0x4660,	// (0x000115a7) list_highlight_pane_cp5_vc

0x8da3,	// (0x00015cea) list_form_graphic_pane_vc_ParamLimits

0x8da3,	// (0x00015cea) list_form_graphic_pane_vc

0x6c48,	// (0x00013b8f) form_field_popup_pane_vc_g1

0x8db9,	// (0x00015d00) form_field_popup_pane_vc_t1_ParamLimits

0x8db9,	// (0x00015d00) form_field_popup_pane_vc_t1

0x541c,	// (0x00012363) input_focus_pane_cp7_vc_ParamLimits

0x541c,	// (0x00012363) input_focus_pane_cp7_vc

0x8dd0,	// (0x00015d17) list_form_pane_vc_ParamLimits

0x8dd0,	// (0x00015d17) list_form_pane_vc

0x8ddc,	// (0x00015d23) data_form_pane_vc_t1_ParamLimits

0x8ddc,	// (0x00015d23) data_form_pane_vc_t1

0x5549,	// (0x00012490) input_focus_pane_vc_g1

0x5551,	// (0x00012498) input_focus_pane_vc_g2

0x5559,	// (0x000124a0) input_focus_pane_vc_g3

0x5561,	// (0x000124a8) input_focus_pane_vc_g4

0x5569,	// (0x000124b0) input_focus_pane_vc_g5

0x5571,	// (0x000124b8) input_focus_pane_vc_g6

0x5579,	// (0x000124c0) input_focus_pane_vc_g7

0x5581,	// (0x000124c8) input_focus_pane_vc_g8

0x5589,	// (0x000124d0) input_focus_pane_vc_g9

0x4576,	// (0x000114bd) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001c5d4) input_focus_pane_vc_g

0x6c3c,	// (0x00013b83) data_form_pane_vc_ParamLimits

0x6c3c,	// (0x00013b83) data_form_pane_vc

0x6c48,	// (0x00013b8f) form_field_data_pane_vc_g1

0x8df7,	// (0x00015d3e) form_field_data_pane_vc_t1_ParamLimits

0x8df7,	// (0x00015d3e) form_field_data_pane_vc_t1

0x541c,	// (0x00012363) input_focus_pane_vc_ParamLimits

0x541c,	// (0x00012363) input_focus_pane_vc

0x8e11,	// (0x00015d58) button_value_adjust_pane_cp3_vc

0x8e19,	// (0x00015d60) button_value_adjust_pane_cp5_vc

0x8e21,	// (0x00015d68) form_field_data_pane_vc_ParamLimits

0x8e21,	// (0x00015d68) form_field_data_pane_vc

0x8e38,	// (0x00015d7f) form_field_data_pane_vc_cp2

0x8e40,	// (0x00015d87) form_field_data_wide_pane_vc_ParamLimits

0x8e40,	// (0x00015d87) form_field_data_wide_pane_vc

0x8e56,	// (0x00015d9d) form_field_data_wide_pane_vc_cp2

0x8e5e,	// (0x00015da5) form_field_popup_pane_vc_ParamLimits

0x8e5e,	// (0x00015da5) form_field_popup_pane_vc

0x8e75,	// (0x00015dbc) form_field_popup_wide_pane_vc_ParamLimits

0x8e75,	// (0x00015dbc) form_field_popup_wide_pane_vc

0x8e8b,	// (0x00015dd2) form_field_slider_pane_vc_ParamLimits

0x8e8b,	// (0x00015dd2) form_field_slider_pane_vc

0x8e9e,	// (0x00015de5) form_field_slider_wide_pane_vc_ParamLimits

0x8e9e,	// (0x00015de5) form_field_slider_wide_pane_vc

0x049e,	// (0x0000d3e5) grid_touch_1_pane_ParamLimits

0x049e,	// (0x0000d3e5) grid_touch_1_pane

0x04b2,	// (0x0000d3f9) grid_touch_2_pane_ParamLimits

0x04b2,	// (0x0000d3f9) grid_touch_2_pane

0x8f73,	// (0x00015eba) touch_pane_g1_ParamLimits

0x8f73,	// (0x00015eba) touch_pane_g1

0x8ed5,	// (0x00015e1c) cell_app_pane_cp_wide_ParamLimits

0x8ed5,	// (0x00015e1c) cell_app_pane_cp_wide

0x8ee6,	// (0x00015e2d) grid_popup_fast_wide_pane_ParamLimits

0x8ee6,	// (0x00015e2d) grid_popup_fast_wide_pane

0x8efa,	// (0x00015e41) scroll_pane_cp19_ParamLimits

0x8efa,	// (0x00015e41) scroll_pane_cp19

0x4580,	// (0x000114c7) bg_popup_window_pane_cp20

0x8f0e,	// (0x00015e55) listscroll_popup_fast_wide_pane

0x573d,	// (0x00012684) grid_indicator_nsta_pane

0x8f16,	// (0x00015e5d) clock_nsta_pane_g1

0x8f1f,	// (0x00015e66) clock_nsta_pane_t1

0x04dc,	// (0x0000d423) cell_indicator_nsta_pane_ParamLimits

0x04dc,	// (0x0000d423) cell_indicator_nsta_pane

0x8f73,	// (0x00015eba) cell_indicator_nsta_pane_g1

0x04f9,	// (0x0000d440) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0001c9f7) cell_indicator_nsta_pane_g

0x8f97,	// (0x00015ede) clock_nsta_pane_cp

0x8f9f,	// (0x00015ee6) indicator_nsta_pane_cp

0x8fa7,	// (0x00015eee) nsta_clock_indic_pane_g1

0x4743,	// (0x0001168a) grid_indicator_pane

0x5b06,	// (0x00012a4d) scroll_pane_cp29

0x2917,	// (0x0000f85e) indicator_nsta_pane_cp2_ParamLimits

0x2917,	// (0x0000f85e) indicator_nsta_pane_cp2

0x4660,	// (0x000115a7) main_apps_wheel_pane

0x6eb8,	// (0x00013dff) form_midp_field_text_pane_ParamLimits

0x6fff,	// (0x00013f46) scroll_bar_cp050_ParamLimits

0x9008,	// (0x00015f4f) cell_indicator_pane_ParamLimits

0x9008,	// (0x00015f4f) cell_indicator_pane

0x9023,	// (0x00015f6a) cell_indicator_pane_g1

0x050f,	// (0x0000d456) grid_wheel_folder_pane_ParamLimits

0x050f,	// (0x0000d456) grid_wheel_folder_pane

0x051d,	// (0x0000d464) list_wheel_apps_pane_ParamLimits

0x051d,	// (0x0000d464) list_wheel_apps_pane

0x052b,	// (0x0000d472) main_apps_wheel_pane_g1_ParamLimits

0x052b,	// (0x0000d472) main_apps_wheel_pane_g1

0x0537,	// (0x0000d47e) main_apps_wheel_pane_g2_ParamLimits

0x0537,	// (0x0000d47e) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0001ca13) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0001ca13) main_apps_wheel_pane_g

0x0545,	// (0x0000d48c) main_apps_wheel_pane_t1_ParamLimits

0x0545,	// (0x0000d48c) main_apps_wheel_pane_t1

0x0559,	// (0x0000d4a0) list_wheel_apps_pane_g1

0x0561,	// (0x0000d4a8) list_wheel_apps_pane_g2

0x0569,	// (0x0000d4b0) list_wheel_apps_pane_g3

0x0571,	// (0x0000d4b8) list_wheel_apps_pane_g4

0x057b,	// (0x0000d4c2) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0001ca18) list_wheel_apps_pane_g

0x60de,	// (0x00013025) navi_icon_text_pane

0xf034,	// (0x0001bf7b) aid_fill_nsta

0x90ea,	// (0x00016031) navi_icon_text_pane_g1

0x90f6,	// (0x0001603d) navi_icon_text_pane_t1

0x5f80,	// (0x00012ec7) list_set_graphic_pane_t1_ParamLimits

0x5f80,	// (0x00012ec7) list_set_graphic_pane_t1

0x7751,	// (0x00014698) popup_midp_note_alarm_window_t6_ParamLimits

0x7751,	// (0x00014698) popup_midp_note_alarm_window_t6

0x7763,	// (0x000146aa) popup_midp_note_alarm_window_t7_ParamLimits

0x7763,	// (0x000146aa) popup_midp_note_alarm_window_t7

0x7775,	// (0x000146bc) popup_midp_note_alarm_window_t8_ParamLimits

0x7775,	// (0x000146bc) popup_midp_note_alarm_window_t8

0x7787,	// (0x000146ce) popup_midp_note_alarm_window_t9_ParamLimits

0x7787,	// (0x000146ce) popup_midp_note_alarm_window_t9

0x7799,	// (0x000146e0) popup_midp_note_alarm_window_t10_ParamLimits

0x7799,	// (0x000146e0) popup_midp_note_alarm_window_t10

0x77ab,	// (0x000146f2) popup_midp_note_alarm_window_t11_ParamLimits

0x77ab,	// (0x000146f2) popup_midp_note_alarm_window_t11

0x77bd,	// (0x00014704) scroll_pane_cp17_ParamLimits

0x77bd,	// (0x00014704) scroll_pane_cp17

0x33ac,	// (0x000102f3) volume_small_pane_cp_g1

0x36e3,	// (0x0001062a) volume_small_pane_cp_g2

0x36ec,	// (0x00010633) volume_small_pane_cp_g3

0x33be,	// (0x00010305) volume_small_pane_cp_g4

0x36f5,	// (0x0001063c) volume_small_pane_cp_g5

0x36b6,	// (0x000105fd) volume_small_pane_cp_g6

0x33d0,	// (0x00010317) volume_small_pane_cp_g7

0x36fe,	// (0x00010645) volume_small_pane_cp_g8

0x3707,	// (0x0001064e) volume_small_pane_cp_g9

0x33e2,	// (0x00010329) volume_small_pane_cp_g10

0x6325,	// (0x0001326c) midp_ticker_pane_g1_ParamLimits

0x6331,	// (0x00013278) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001c6a0) midp_ticker_pane_g_ParamLimits

0x633d,	// (0x00013284) midp_ticker_pane_t1_ParamLimits

0xf058,	// (0x0001bf9f) aid_fill_nsta_2

0x6feb,	// (0x00013f32) list_form2_midp_pane

0x814d,	// (0x00015094) midp_editing_number_pane_ParamLimits

0x815c,	// (0x000150a3) midp_ticker_pane_ParamLimits

0x9108,	// (0x0001604f) form2_midp_field_pane

0x912c,	// (0x00016073) scroll_pane_cp51

0x914c,	// (0x00016093) form2_midp_button_pane_ParamLimits

0x914c,	// (0x00016093) form2_midp_button_pane

0x915e,	// (0x000160a5) form2_midp_content_pane_ParamLimits

0x915e,	// (0x000160a5) form2_midp_content_pane

0x9178,	// (0x000160bf) form2_midp_field_choice_group_pane

0x9180,	// (0x000160c7) form2_midp_field_pane_g1

0x9188,	// (0x000160cf) form2_midp_field_pane_g2

0x9190,	// (0x000160d7) form2_midp_field_pane_g3

0x9198,	// (0x000160df) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0001ca3d) form2_midp_field_pane_g

0x91a0,	// (0x000160e7) form2_midp_gauge_slider_pane

0x91a8,	// (0x000160ef) form2_midp_gauge_wait_pane

0x91b0,	// (0x000160f7) form2_midp_image_pane_ParamLimits

0x91b0,	// (0x000160f7) form2_midp_image_pane

0x91cb,	// (0x00016112) form2_midp_label_pane_ParamLimits

0x91cb,	// (0x00016112) form2_midp_label_pane

0x05ae,	// (0x0000d4f5) form2_midp_label_pane_cp_ParamLimits

0x05ae,	// (0x0000d4f5) form2_midp_label_pane_cp

0x9205,	// (0x0001614c) form2_midp_string_pane_ParamLimits

0x9205,	// (0x0001614c) form2_midp_string_pane

0x9217,	// (0x0001615e) form2_midp_text_pane_ParamLimits

0x9217,	// (0x0001615e) form2_midp_text_pane

0x9232,	// (0x00016179) form2_midp_time_pane

0x9242,	// (0x00016189) input_focus_pane_cp51_ParamLimits

0x9242,	// (0x00016189) input_focus_pane_cp51

0x925a,	// (0x000161a1) form2_midp_label_pane_t1_ParamLimits

0x925a,	// (0x000161a1) form2_midp_label_pane_t1

0x929a,	// (0x000161e1) form2_mdip_text_pane_t1_ParamLimits

0x929a,	// (0x000161e1) form2_mdip_text_pane_t1

0x92b6,	// (0x000161fd) form2_midp_time_pane_t1

0x92d1,	// (0x00016218) form2_midp_gauge_slider_pane_t1

0x05cf,	// (0x0000d516) form2_midp_gauge_slider_pane_t2

0x05e3,	// (0x0000d52a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0001ca46) form2_midp_gauge_slider_pane_t

0x9307,	// (0x0001624e) form2_midp_slider_pane

0x9313,	// (0x0001625a) form2_midp_gauge_wait_pane_t1

0x9321,	// (0x00016268) form2_midp_wait_pane_ParamLimits

0x9321,	// (0x00016268) form2_midp_wait_pane

0x05f7,	// (0x0000d53e) list_single_2graphic_pane_cp4_ParamLimits

0x05f7,	// (0x0000d53e) list_single_2graphic_pane_cp4

0xf476,	// (0x0001c3bd) list_single_midp_graphic_pane_cp_ParamLimits

0xf476,	// (0x0001c3bd) list_single_midp_graphic_pane_cp

0x4580,	// (0x000114c7) list_highlight_pane_cp20

0x937b,	// (0x000162c2) list_single_2graphic_pane_g1_cp4

0x869b,	// (0x000155e2) list_single_2graphic_pane_g2_cp4

0x9383,	// (0x000162ca) list_single_2graphic_pane_t1_cp4

0x4660,	// (0x000115a7) list_highlight_pane_cp21

0x9392,	// (0x000162d9) list_single_midp_graphic_pane_g4_cp

0x93a1,	// (0x000162e8) list_single_midp_graphic_pane_t1_cp

0x060d,	// (0x0000d554) form2_mdip_string_pane_t1_ParamLimits

0x060d,	// (0x0000d554) form2_mdip_string_pane_t1

0x4580,	// (0x000114c7) bg_wml_button_pane_cp2

0x4576,	// (0x000114bd) form2_midp_image_pane_g1

0x510c,	// (0x00012053) list_double_large_graphic_pane_g5_ParamLimits

0x510c,	// (0x00012053) list_double_large_graphic_pane_g5

0x6596,	// (0x000134dd) midp_form_pane_ParamLimits

0x4660,	// (0x000115a7) main_apps_wheel_pane_ParamLimits

0xce0f,	// (0x00019d56) popup_preview_window_ParamLimits

0xce0f,	// (0x00019d56) popup_preview_window

0x31ab,	// (0x000100f2) popup_touch_info_window_ParamLimits

0x31ab,	// (0x000100f2) popup_touch_info_window

0x31c9,	// (0x00010110) popup_touch_menu_window_ParamLimits

0x31c9,	// (0x00010110) popup_touch_menu_window

0x456c,	// (0x000114b3) bg_popup_sub_pane_cp6

0x94d9,	// (0x00016420) list_touch_menu_pane

0x94e1,	// (0x00016428) list_single_touch_menu_pane_ParamLimits

0x94e1,	// (0x00016428) list_single_touch_menu_pane

0x94f5,	// (0x0001643c) list_single_touch_menu_pane_t1

0x4660,	// (0x000115a7) bg_popup_sub_pane_cp7_ParamLimits

0x4660,	// (0x000115a7) bg_popup_sub_pane_cp7

0x9503,	// (0x0001644a) heading_sub_pane

0x950b,	// (0x00016452) list_touch_info_pane_ParamLimits

0x950b,	// (0x00016452) list_touch_info_pane

0x951a,	// (0x00016461) list_single_touch_info_pane_ParamLimits

0x951a,	// (0x00016461) list_single_touch_info_pane

0x952c,	// (0x00016473) list_single_touch_info_pane_t1

0x953a,	// (0x00016481) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0001ca54) list_single_touch_info_pane_t

0x6252,	// (0x00013199) bg_popup_heading_pane_cp

0x9548,	// (0x0001648f) heading_sub_pane_t1

0x6bd6,	// (0x00013b1d) bg_popup_preview_window_pane_cp_ParamLimits

0x6bd6,	// (0x00013b1d) bg_popup_preview_window_pane_cp

0x9503,	// (0x0001644a) heading_preview_pane

0x950b,	// (0x00016452) list_preview_pane_ParamLimits

0x950b,	// (0x00016452) list_preview_pane

0x9556,	// (0x0001649d) popup_preview_window_g1

0x951a,	// (0x00016461) list_single_preview_pane_ParamLimits

0x951a,	// (0x00016461) list_single_preview_pane

0x955e,	// (0x000164a5) list_single_preview_pane_g1

0x9566,	// (0x000164ad) list_single_preview_pane_t1

0x952c,	// (0x00016473) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0001ca59) list_single_preview_pane_t

0x9574,	// (0x000164bb) bg_popup_heading_pane_cp2_ParamLimits

0x9574,	// (0x000164bb) bg_popup_heading_pane_cp2

0x958a,	// (0x000164d1) heading_preview_pane_g1

0x9592,	// (0x000164d9) heading_preview_pane_t1_ParamLimits

0x9592,	// (0x000164d9) heading_preview_pane_t1

0x4766,	// (0x000116ad) soft_indicator_pane_t1_ParamLimits

0x4e44,	// (0x00011d8b) scroll_pane_ParamLimits

0x59ff,	// (0x00012946) scroll_sc2_left_pane

0x5a08,	// (0x0001294f) scroll_sc2_right_pane

0x5a27,	// (0x0001296e) scroll_bg_pane_g1_ParamLimits

0x5a3c,	// (0x00012983) scroll_bg_pane_g2_ParamLimits

0x5a54,	// (0x0001299b) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001c62b) scroll_bg_pane_g_ParamLimits

0x5a27,	// (0x0001296e) scroll_handle_pane_g1_ParamLimits

0x5a76,	// (0x000129bd) scroll_handle_pane_g2_ParamLimits

0x5a54,	// (0x0001299b) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001c632) scroll_handle_pane_g_ParamLimits

0x2c7b,	// (0x0000fbc2) popup_choice_list_window_ParamLimits

0x2c7b,	// (0x0000fbc2) popup_choice_list_window

0x69e6,	// (0x0001392d) choice_list_pane

0x6a7e,	// (0x000139c5) cell_toolbar_pane_t1

0x6aa6,	// (0x000139ed) toolbar_button_pane_ParamLimits

0x7c77,	// (0x00014bbe) ai_gene_pane_1_t2_ParamLimits

0x7c77,	// (0x00014bbe) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x0001c855) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x0001c855) ai_gene_pane_1_t

0x95af,	// (0x000164f6) scroll_sc2_left_pane_g1

0x95af,	// (0x000164f6) scroll_sc2_right_pane_g1

0x6596,	// (0x000134dd) bg_popup_sub_pane_cp10

0x95b9,	// (0x00016500) list_choice_list_pane

0x95d2,	// (0x00016519) list_single_choice_list_pane_ParamLimits

0x95d2,	// (0x00016519) list_single_choice_list_pane

0x95e5,	// (0x0001652c) list_single_choice_list_pane_g1

0x570e,	// (0x00012655) list_single_choice_list_pane_t1_ParamLimits

0x570e,	// (0x00012655) list_single_choice_list_pane_t1

0x95ed,	// (0x00016534) choice_list_pane_g1

0x95f5,	// (0x0001653c) choice_list_pane_t1

0x456c,	// (0x000114b3) input_focus_pane_cp11

0x58e2,	// (0x00012829) title_pane_stacon_g2_ParamLimits

0x58e2,	// (0x00012829) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001c611) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001c611) title_pane_stacon_g

0x6252,	// (0x00013199) cursor_press_pane

0xcac8,	// (0x00019a0f) popup_fep_hwr_window_ParamLimits

0xcac8,	// (0x00019a0f) popup_fep_hwr_window

0x2d9b,	// (0x0000fce2) popup_fep_vkb_window_ParamLimits

0x2d9b,	// (0x0000fce2) popup_fep_vkb_window

0x9603,	// (0x0001654a) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0001ca82) fep_vkb_side_pane_g_ParamLimits

0x3749,	// (0x00010690) fep_hwr_candidate_pane_ParamLimits

0x3749,	// (0x00010690) fep_hwr_candidate_pane

0x3773,	// (0x000106ba) fep_hwr_side_pane_ParamLimits

0x3773,	// (0x000106ba) fep_hwr_side_pane

0x3793,	// (0x000106da) fep_hwr_top_pane_ParamLimits

0x3793,	// (0x000106da) fep_hwr_top_pane

0x37ab,	// (0x000106f2) fep_hwr_write_pane_ParamLimits

0x37ab,	// (0x000106f2) fep_hwr_write_pane

0xfb3b,	// (0x0001ca82) fep_vkb_side_pane_g

0x960b,	// (0x00016552) fep_hwr_top_pane_g1

0x961d,	// (0x00016564) fep_hwr_top_pane_g2

0x37e5,	// (0x0001072c) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0001ca5e) fep_hwr_top_pane_g

0x37fa,	// (0x00010741) fep_hwr_top_text_pane

0x5bcc,	// (0x00012b13) fep_hwr_top_text_pane_g1

0x9653,	// (0x0001659a) fep_hwr_top_text_pane_t1

0x38f0,	// (0x00010837) fep_hwr_candidate_pane_g1

0x9896,	// (0x000167dd) fep_vkb_keypad_pane_g3_ParamLimits

0x9896,	// (0x000167dd) fep_vkb_keypad_pane_g3

0x98be,	// (0x00016805) fep_vkb_keypad_pane_g4_ParamLimits

0x98be,	// (0x00016805) fep_vkb_keypad_pane_g4

0x992d,	// (0x00016874) fep_vkb_bottom_pane_g2_ParamLimits

0x992d,	// (0x00016874) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0001ca89) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0001ca89) fep_vkb_bottom_pane_g

0x95af,	// (0x000164f6) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001ca93) cell_vkb_side_pane_g

0x99b8,	// (0x000168ff) cell_vkb_side_pane_t1

0x99c6,	// (0x0001690d) cell_vkb_side_pane_t1_copy1

0x95af,	// (0x000164f6) bg_fep_vkb_candidate_pane_g2

0x9af2,	// (0x00016a39) cell_vkb_candidate_pane_ParamLimits

0x9661,	// (0x000165a8) aid_size_cell_vkb_ParamLimits

0x9661,	// (0x000165a8) aid_size_cell_vkb

0x9af2,	// (0x00016a39) cell_vkb_candidate_pane

0x3917,	// (0x0001085e) bg_popup_fep_shadow_pane_g1

0x06ea,	// (0x0000d631) fep_vkb_bottom_pane_ParamLimits

0x06ea,	// (0x0000d631) fep_vkb_bottom_pane

0x9723,	// (0x0001666a) fep_vkb_candidate_pane_ParamLimits

0x9723,	// (0x0001666a) fep_vkb_candidate_pane

0x070f,	// (0x0000d656) fep_vkb_keypad_pane_ParamLimits

0x070f,	// (0x0000d656) fep_vkb_keypad_pane

0x0744,	// (0x0000d68b) fep_vkb_side_pane_ParamLimits

0x0744,	// (0x0000d68b) fep_vkb_side_pane

0x0780,	// (0x0000d6c7) fep_vkb_top_pane_ParamLimits

0x0780,	// (0x0000d6c7) fep_vkb_top_pane

0x97ef,	// (0x00016736) fep_vkb_top_pane_g1_ParamLimits

0x97ef,	// (0x00016736) fep_vkb_top_pane_g1

0x97fe,	// (0x00016745) fep_vkb_top_pane_g2_ParamLimits

0x97fe,	// (0x00016745) fep_vkb_top_pane_g2

0x980d,	// (0x00016754) fep_vkb_top_pane_g3_ParamLimits

0x980d,	// (0x00016754) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0001ca79) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0001ca79) fep_vkb_top_pane_g

0x982b,	// (0x00016772) fep_vkb_top_text_pane_ParamLimits

0x982b,	// (0x00016772) fep_vkb_top_text_pane

0x07b5,	// (0x0000d6fc) fep_vkb_side_pane_g1_ParamLimits

0x07b5,	// (0x0000d6fc) fep_vkb_side_pane_g1

0x9885,	// (0x000167cc) grid_vkb_side_pane_ParamLimits

0x9885,	// (0x000167cc) grid_vkb_side_pane

0x391f,	// (0x00010866) bg_popup_fep_shadow_pane_g2

0x3928,	// (0x0001086f) bg_popup_fep_shadow_pane_g3

0x3930,	// (0x00010877) bg_popup_fep_shadow_pane_g4

0x3939,	// (0x00010880) bg_popup_fep_shadow_pane_g5

0x3943,	// (0x0001088a) bg_popup_fep_shadow_pane_g6

0x394b,	// (0x00010892) bg_popup_fep_shadow_pane_g7

0x5561,	// (0x000124a8) bg_popup_fep_shadow_pane_g8

0x98dc,	// (0x00016823) grid_vkb_keypad_number_pane_ParamLimits

0x98dc,	// (0x00016823) grid_vkb_keypad_number_pane

0x98ec,	// (0x00016833) grid_vkb_keypad_pane_ParamLimits

0x98ec,	// (0x00016833) grid_vkb_keypad_pane

0x9912,	// (0x00016859) fep_vkb_bottom_pane_g1_ParamLimits

0x9912,	// (0x00016859) fep_vkb_bottom_pane_g1

0x993b,	// (0x00016882) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x993b,	// (0x00016882) grid_vkb_keypad_bottom_left_pane

0x9950,	// (0x00016897) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x9950,	// (0x00016897) grid_vkb_keypad_bottom_right_pane

0x9965,	// (0x000168ac) fep_vkb_top_text_pane_g1

0x07fc,	// (0x0000d743) fep_vkb_top_text_pane_t1

0x080e,	// (0x0000d755) cell_vkb_side_pane_ParamLimits

0x080e,	// (0x0000d755) cell_vkb_side_pane

0x95af,	// (0x000164f6) cell_vkb_side_pane_g1

0x99d4,	// (0x0001691b) cell_vkb_keypad_pane_ParamLimits

0x99d4,	// (0x0001691b) cell_vkb_keypad_pane

0x9a49,	// (0x00016990) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0001caa6) bg_popup_fep_shadow_pane_g

0x395d,	// (0x000108a4) cell_hwr_side_pane_g1

0x395d,	// (0x000108a4) cell_hwr_side_pane_g2

0x9a53,	// (0x0001699a) cell_vkb_keypad_pane_t1

0x0824,	// (0x0000d76b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x0824,	// (0x0000d76b) cell_vkb_keypad_bottom_left_pane

0x0839,	// (0x0000d780) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x0839,	// (0x0000d780) cell_vkb_keypad_bottom_right_pane

0x95af,	// (0x000164f6) cell_vkb_keypad_bottom_left_pane_g1

0x95af,	// (0x000164f6) cell_vkb_keypad_bottom_right_pane_g1

0x9ab7,	// (0x000169fe) cell_vkb_keypad_number_pane_ParamLimits

0x9ab7,	// (0x000169fe) cell_vkb_keypad_number_pane

0x9ad6,	// (0x00016a1d) cell_vkb_keypad_number_pane_g1

0x9ae0,	// (0x00016a27) cell_vkb_keypad_number_pane_g2

0x9ae9,	// (0x00016a30) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0001ca98) cell_vkb_keypad_number_pane_g

0x9a53,	// (0x0001699a) cell_vkb_keypad_number_pane_t1

0x9b0d,	// (0x00016a54) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0001cab9) cell_hwr_side_pane_g

0x9b26,	// (0x00016a6d) cell_hwr_side_pane_t1

0x3967,	// (0x000108ae) cell_hwr_side_pane_t1_copy1

0x3975,	// (0x000108bc) cell_hwr_candidate_pane_g1

0x39a4,	// (0x000108eb) cell_hwr_candidate_pane_t1

0x95af,	// (0x000164f6) cell_vkb_candidate_pane_g2

0x9b6a,	// (0x00016ab1) cell_vkb_candidate_pane_t1

0x3710,	// (0x00010657) bg_popup_fep_shadow_pane_ParamLimits

0x3710,	// (0x00010657) bg_popup_fep_shadow_pane

0x37c5,	// (0x0001070c) bg_fep_hwr_top_pane_g4

0x962f,	// (0x00016576) bg_hwr_side_pane_g1_ParamLimits

0x962f,	// (0x00016576) bg_hwr_side_pane_g1

0xd234,	// (0x0001a17b) cell_hwr_side_pane_ParamLimits

0xd234,	// (0x0001a17b) cell_hwr_side_pane

0x3871,	// (0x000107b8) fep_hwr_write_pane_g1_ParamLimits

0x3871,	// (0x000107b8) fep_hwr_write_pane_g1

0x387e,	// (0x000107c5) fep_hwr_write_pane_g2_ParamLimits

0x387e,	// (0x000107c5) fep_hwr_write_pane_g2

0x388b,	// (0x000107d2) fep_hwr_write_pane_g3_ParamLimits

0x388b,	// (0x000107d2) fep_hwr_write_pane_g3

0xd254,	// (0x0001a19b) fep_hwr_write_pane_g4_ParamLimits

0xd254,	// (0x0001a19b) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0001ca65) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0001ca65) fep_hwr_write_pane_g

0x37c5,	// (0x0001070c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x37c5,	// (0x0001070c) bg_fep_hwr_candidate_pane_g2

0x38ae,	// (0x000107f5) cell_hwr_candidate_pane_ParamLimits

0x38ae,	// (0x000107f5) cell_hwr_candidate_pane

0x38f0,	// (0x00010837) fep_hwr_candidate_pane_g1_ParamLimits

0x968f,	// (0x000165d6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x968f,	// (0x000165d6) bg_popup_fep_shadow_pane_cp2

0x981d,	// (0x00016764) fep_vkb_top_pane_g4_ParamLimits

0x981d,	// (0x00016764) fep_vkb_top_pane_g4

0x9863,	// (0x000167aa) fep_vkb_side_pane_g2_ParamLimits

0x9863,	// (0x000167aa) fep_vkb_side_pane_g2

0xeb0d,	// (0x0001ba54) list_setting_pane_t4_ParamLimits

0xeb0d,	// (0x0001ba54) list_setting_pane_t4

0xeb87,	// (0x0001bace) list_setting_number_pane_t5_ParamLimits

0xeb87,	// (0x0001bace) list_setting_number_pane_t5

0xee4a,	// (0x0001bd91) list_double_heading_pane_cp2_ParamLimits

0xee4a,	// (0x0001bd91) list_double_heading_pane_cp2

0x5095,	// (0x00011fdc) list_double_heading_pane_g1_cp2_ParamLimits

0x5095,	// (0x00011fdc) list_double_heading_pane_g1_cp2

0x5442,	// (0x00012389) list_double_heading_pane_g2_cp2_ParamLimits

0x5442,	// (0x00012389) list_double_heading_pane_g2_cp2

0x9b78,	// (0x00016abf) list_double_heading_pane_t1_cp2_ParamLimits

0x9b78,	// (0x00016abf) list_double_heading_pane_t1_cp2

0x9b8e,	// (0x00016ad5) list_double_heading_pane_t2_cp2_ParamLimits

0x9b8e,	// (0x00016ad5) list_double_heading_pane_t2_cp2

0x4554,	// (0x0001149b) aid_value_unit2

0x24ae,	// (0x0000f3f5) popup_preview_fixed_window

0x4903,	// (0x0001184a) bg_popup_preview_window_pane_cp02

0x9ba0,	// (0x00016ae7) list_preview_fixed_pane

0x9be6,	// (0x00016b2d) list_empty_pane_fp_ParamLimits

0x9be6,	// (0x00016b2d) list_empty_pane_fp

0x9be6,	// (0x00016b2d) list_single_cale_day_pane_fp_ParamLimits

0x9be6,	// (0x00016b2d) list_single_cale_day_pane_fp

0x9be6,	// (0x00016b2d) list_single_graphic_heading_pane_fp_ParamLimits

0x9be6,	// (0x00016b2d) list_single_graphic_heading_pane_fp

0x9be6,	// (0x00016b2d) list_single_graphic_pane_fp_ParamLimits

0x9be6,	// (0x00016b2d) list_single_graphic_pane_fp

0x9be6,	// (0x00016b2d) list_single_heading_pane_fp_ParamLimits

0x9be6,	// (0x00016b2d) list_single_heading_pane_fp

0x9be6,	// (0x00016b2d) list_single_pane_fp_ParamLimits

0x9be6,	// (0x00016b2d) list_single_pane_fp

0x9bfc,	// (0x00016b43) list_single_pane_fp_g1_ParamLimits

0x9bfc,	// (0x00016b43) list_single_pane_fp_g1

0x5095,	// (0x00011fdc) list_single_pane_fp_g2_ParamLimits

0x5095,	// (0x00011fdc) list_single_pane_fp_g2

0x5442,	// (0x00012389) list_single_pane_fp_g3_ParamLimits

0x5442,	// (0x00012389) list_single_pane_fp_g3

0x9c08,	// (0x00016b4f) list_single_pane_fp_g4_ParamLimits

0x9c08,	// (0x00016b4f) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0001cacc) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0001cacc) list_single_pane_fp_g

0x9c14,	// (0x00016b5b) list_single_pane_fp_t1_ParamLimits

0x9c14,	// (0x00016b5b) list_single_pane_fp_t1

0x9c2b,	// (0x00016b72) list_single_graphic_pane_fp_g1_ParamLimits

0x9c2b,	// (0x00016b72) list_single_graphic_pane_fp_g1

0x9bfc,	// (0x00016b43) list_single_graphic_pane_fp_g2_ParamLimits

0x9bfc,	// (0x00016b43) list_single_graphic_pane_fp_g2

0x5095,	// (0x00011fdc) list_single_graphic_pane_fp_g3_ParamLimits

0x5095,	// (0x00011fdc) list_single_graphic_pane_fp_g3

0x5442,	// (0x00012389) list_single_graphic_pane_fp_g4_ParamLimits

0x5442,	// (0x00012389) list_single_graphic_pane_fp_g4

0x9c08,	// (0x00016b4f) list_single_graphic_pane_fp_g5_ParamLimits

0x9c08,	// (0x00016b4f) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001cad5) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001cad5) list_single_graphic_pane_fp_g

0x9c37,	// (0x00016b7e) list_single_graphic_pane_fp_t1_ParamLimits

0x9c37,	// (0x00016b7e) list_single_graphic_pane_fp_t1

0x9c2b,	// (0x00016b72) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9c2b,	// (0x00016b72) list_single_graphic_heading_pane_fp_g1

0x9bfc,	// (0x00016b43) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x9bfc,	// (0x00016b43) list_single_graphic_heading_pane_fp_g2

0x5095,	// (0x00011fdc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5095,	// (0x00011fdc) list_single_graphic_heading_pane_fp_g3

0x5442,	// (0x00012389) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5442,	// (0x00012389) list_single_graphic_heading_pane_fp_g4

0x9c08,	// (0x00016b4f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x9c08,	// (0x00016b4f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001cad5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001cad5) list_single_graphic_heading_pane_fp_g

0x9c4d,	// (0x00016b94) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9c4d,	// (0x00016b94) list_single_graphic_heading_pane_fp_t1

0x9c63,	// (0x00016baa) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9c63,	// (0x00016baa) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0001cae0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0001cae0) list_single_graphic_heading_pane_fp_t

0x9c75,	// (0x00016bbc) list_single_cale_day_pane_fp_g1_ParamLimits

0x9c75,	// (0x00016bbc) list_single_cale_day_pane_fp_g1

0x9cad,	// (0x00016bf4) list_single_cale_day_pane_fp_g2_ParamLimits

0x9cad,	// (0x00016bf4) list_single_cale_day_pane_fp_g2

0x9cb9,	// (0x00016c00) list_single_cale_day_pane_fp_g3_ParamLimits

0x9cb9,	// (0x00016c00) list_single_cale_day_pane_fp_g3

0x9ce1,	// (0x00016c28) list_single_cale_day_pane_fp_g4_ParamLimits

0x9ce1,	// (0x00016c28) list_single_cale_day_pane_fp_g4

0x9d05,	// (0x00016c4c) list_single_cale_day_pane_fp_g5_ParamLimits

0x9d05,	// (0x00016c4c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0001cae5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0001cae5) list_single_cale_day_pane_fp_g

0x9d29,	// (0x00016c70) list_single_cale_day_pane_fp_t1_ParamLimits

0x9d29,	// (0x00016c70) list_single_cale_day_pane_fp_t1

0x9d4f,	// (0x00016c96) list_single_cale_day_pane_fp_t2_ParamLimits

0x9d4f,	// (0x00016c96) list_single_cale_day_pane_fp_t2

0x9d68,	// (0x00016caf) list_single_cale_day_pane_fp_t3_ParamLimits

0x9d68,	// (0x00016caf) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0001caf0) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0001caf0) list_single_cale_day_pane_fp_t

0x9bfc,	// (0x00016b43) list_empty_pane_fp_g1_ParamLimits

0x9bfc,	// (0x00016b43) list_empty_pane_fp_g1

0x9d81,	// (0x00016cc8) list_empty_pane_fp_t1

0x9d8f,	// (0x00016cd6) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001caf7) list_empty_pane_fp_t

0x9bfc,	// (0x00016b43) list_single_heading_pane_fp_g1_ParamLimits

0x9bfc,	// (0x00016b43) list_single_heading_pane_fp_g1

0x5095,	// (0x00011fdc) list_single_heading_pane_fp_g2_ParamLimits

0x5095,	// (0x00011fdc) list_single_heading_pane_fp_g2

0x5442,	// (0x00012389) list_single_heading_pane_fp_g3_ParamLimits

0x5442,	// (0x00012389) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0001cafc) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0001cafc) list_single_heading_pane_fp_g

0x9d9d,	// (0x00016ce4) list_single_heading_pane_fp_t1_ParamLimits

0x9d9d,	// (0x00016ce4) list_single_heading_pane_fp_t1

0x9daf,	// (0x00016cf6) list_single_heading_pane_fp_t2_ParamLimits

0x9daf,	// (0x00016cf6) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001cb03) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001cb03) list_single_heading_pane_fp_t

0x577c,	// (0x000126c3) aid_size_cell_fast

0x4873,	// (0x000117ba) soft_indicator_pane_cp1_t1

0x57b6,	// (0x000126fd) cell_app_pane_cp2_ParamLimits

0x57b6,	// (0x000126fd) cell_app_pane_cp2

0x3732,	// (0x00010679) fep_hwr_candidate_drop_down_list_pane

0x390a,	// (0x00010851) fep_hwr_candidate_pane_g3_ParamLimits

0x390a,	// (0x00010851) fep_hwr_candidate_pane_g3

0x1a76,	// (0x0000e9bd) fep_hwr_candidate_pane_g4_ParamLimits

0x1a76,	// (0x0000e9bd) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0001ca72) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0001ca72) fep_hwr_candidate_pane_g

0x9712,	// (0x00016659) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x9712,	// (0x00016659) fep_vkb_candidate_drop_down_list_pane

0x9b15,	// (0x00016a5c) fep_vkb_candidate_pane_g3

0x9b1d,	// (0x00016a64) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0001ca9f) fep_vkb_candidate_pane_g

0x3975,	// (0x000108bc) cell_hwr_candidate_pane_g1_ParamLimits

0x3983,	// (0x000108ca) cell_hwr_candidate_pane_g3_ParamLimits

0x3983,	// (0x000108ca) cell_hwr_candidate_pane_g3

0xbca4,	// (0x00018beb) cell_hwr_candidate_pane_g4_ParamLimits

0xbca4,	// (0x00018beb) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0001cabe) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0001cabe) cell_hwr_candidate_pane_g

0x9b34,	// (0x00016a7b) cell_vkb_candidate_pane_g3_ParamLimits

0x9b34,	// (0x00016a7b) cell_vkb_candidate_pane_g3

0x9b4f,	// (0x00016a96) cell_vkb_candidate_pane_g4_ParamLimits

0x9b4f,	// (0x00016a96) cell_vkb_candidate_pane_g4

0x9dc5,	// (0x00016d0c) cell_app_pane_cp2_g1_ParamLimits

0x9dc5,	// (0x00016d0c) cell_app_pane_cp2_g1

0x9de3,	// (0x00016d2a) cell_app_pane_cp2_g2_ParamLimits

0x9de3,	// (0x00016d2a) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0001cb08) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0001cb08) cell_app_pane_cp2_g

0x9def,	// (0x00016d36) cell_app_pane_cp2_t1_ParamLimits

0x9def,	// (0x00016d36) cell_app_pane_cp2_t1

0x541c,	// (0x00012363) grid_highlight_pane_cp1_ParamLimits

0x541c,	// (0x00012363) grid_highlight_pane_cp1

0x39c2,	// (0x00010909) cell_hwr_candidate_pane_cp1_ParamLimits

0x39c2,	// (0x00010909) cell_hwr_candidate_pane_cp1

0x3975,	// (0x000108bc) fep_hwr_candidate_drop_down_list_pane_g1

0x39e1,	// (0x00010928) fep_hwr_candidate_drop_down_list_pane_g2

0x39ee,	// (0x00010935) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0001cb0d) fep_hwr_candidate_drop_down_list_pane_g

0x39fb,	// (0x00010942) fep_hwr_candidate_drop_down_list_scroll_pane

0x3a04,	// (0x0001094b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3a04,	// (0x0001094b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x3a11,	// (0x00010958) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3a11,	// (0x00010958) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x3a1e,	// (0x00010965) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3a1e,	// (0x00010965) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x3a2b,	// (0x00010972) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3a2b,	// (0x00010972) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x3a46,	// (0x0001098d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3a46,	// (0x0001098d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x3a61,	// (0x000109a8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3a61,	// (0x000109a8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x3a7c,	// (0x000109c3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3a7c,	// (0x000109c3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x3a97,	// (0x000109de) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3a97,	// (0x000109de) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0001cb14) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0001cb14) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x9e01,	// (0x00016d48) cell_vkb_candidate_pane_cp1_ParamLimits

0x9e01,	// (0x00016d48) cell_vkb_candidate_pane_cp1

0x981d,	// (0x00016764) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x981d,	// (0x00016764) fep_vkb_candidate_drop_down_list_pane_g1

0x9e21,	// (0x00016d68) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x9e21,	// (0x00016d68) fep_vkb_candidate_drop_down_list_pane_g2

0x9e2e,	// (0x00016d75) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x9e2e,	// (0x00016d75) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001cb25) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0001cb25) fep_vkb_candidate_drop_down_list_pane_g

0x9e3b,	// (0x00016d82) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x9e3b,	// (0x00016d82) fep_vkb_candidate_drop_down_list_scroll_pane

0x9e48,	// (0x00016d8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9e48,	// (0x00016d8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x9e55,	// (0x00016d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9e55,	// (0x00016d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x9e61,	// (0x00016da8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9e61,	// (0x00016da8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x9e6d,	// (0x00016db4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9e6d,	// (0x00016db4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x9e8e,	// (0x00016dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9e8e,	// (0x00016dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x9eaf,	// (0x00016df6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9eaf,	// (0x00016df6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x9ed0,	// (0x00016e17) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9ed0,	// (0x00016e17) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x9ef1,	// (0x00016e38) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9ef1,	// (0x00016e38) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001cb2c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001cb2c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xe4f4,	// (0x0001b43b) title_pane_g1_ParamLimits

0xe507,	// (0x0001b44e) title_pane_g2_ParamLimits

0xf554,	// (0x0001c49b) title_pane_g_ParamLimits

0x5bbc,	// (0x00012b03) aid_call2_pane

0x5bc4,	// (0x00012b0b) aid_call_pane

0x5bcc,	// (0x00012b13) popup_clock_analogue_window_g1

0x5bcc,	// (0x00012b13) popup_clock_analogue_window_g2

0x2821,	// (0x0000f768) popup_clock_analogue_window_g3

0x282a,	// (0x0000f771) popup_clock_analogue_window_g4

0x4576,	// (0x000114bd) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001c640) popup_clock_analogue_window_g

0x2832,	// (0x0000f779) popup_clock_analogue_window_t1

0x2840,	// (0x0000f787) clock_digital_number_pane_ParamLimits

0x2840,	// (0x0000f787) clock_digital_number_pane

0x284c,	// (0x0000f793) clock_digital_number_pane_cp02_ParamLimits

0x284c,	// (0x0000f793) clock_digital_number_pane_cp02

0x2858,	// (0x0000f79f) clock_digital_number_pane_cp03_ParamLimits

0x2858,	// (0x0000f79f) clock_digital_number_pane_cp03

0x2864,	// (0x0000f7ab) clock_digital_number_pane_cp04_ParamLimits

0x2864,	// (0x0000f7ab) clock_digital_number_pane_cp04

0x2870,	// (0x0000f7b7) clock_digital_separator_pane_ParamLimits

0x2870,	// (0x0000f7b7) clock_digital_separator_pane

0x287c,	// (0x0000f7c3) popup_clock_digital_window_t1_ParamLimits

0x287c,	// (0x0000f7c3) popup_clock_digital_window_t1

0x4576,	// (0x000114bd) clock_digital_number_pane_g1

0x4576,	// (0x000114bd) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001c64b) clock_digital_number_pane_g

0x4576,	// (0x000114bd) clock_digital_separator_pane_g1

0x4576,	// (0x000114bd) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001c64b) clock_digital_separator_pane_g

0xf034,	// (0x0001bf7b) aid_fill_nsta_ParamLimits

0xf16a,	// (0x0001c0b1) indicator_nsta_pane_ParamLimits

0x687b,	// (0x000137c2) popup_clock_analogue_window

0x687b,	// (0x000137c2) popup_clock_digital_window

0x573d,	// (0x00012684) grid_indicator_nsta_pane_ParamLimits

0x8f2d,	// (0x00015e74) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0001c9f2) clock_nsta_pane_t

0x27e5,	// (0x0000f72c) aid_size_max_handle

0x27ef,	// (0x0000f736) aid_size_min_handle

0x6252,	// (0x00013199) editor_scroll_pane

0x9f0c,	// (0x00016e53) ex_editor_pane

0x56ea,	// (0x00012631) scroll_pane_cp13

0x4e70,	// (0x00011db7) scroll_pane_cp14

0x5bfb,	// (0x00012b42) scroll_pane_cp36

0xee5b,	// (0x0001bda2) list_single_graphic_hl_pane_cp2_ParamLimits

0xee5b,	// (0x0001bda2) list_single_graphic_hl_pane_cp2

0x037f,	// (0x0000d2c6) list_single_graphic_hl_pane_ParamLimits

0x037f,	// (0x0000d2c6) list_single_graphic_hl_pane

0x9f14,	// (0x00016e5b) aid_size_min_hl_cp1

0x9f1d,	// (0x00016e64) list_highlight_pane_cp34_ParamLimits

0x9f1d,	// (0x00016e64) list_highlight_pane_cp34

0x9f2e,	// (0x00016e75) list_single_graphic_hl_pane_g1_ParamLimits

0x9f2e,	// (0x00016e75) list_single_graphic_hl_pane_g1

0x0854,	// (0x0000d79b) list_single_graphic_hl_pane_g2_ParamLimits

0x0854,	// (0x0000d79b) list_single_graphic_hl_pane_g2

0x0854,	// (0x0000d79b) list_single_graphic_hl_pane_g3_ParamLimits

0x0854,	// (0x0000d79b) list_single_graphic_hl_pane_g3

0x61c3,	// (0x0001310a) list_single_graphic_hl_pane_g4_ParamLimits

0x61c3,	// (0x0001310a) list_single_graphic_hl_pane_g4

0x0860,	// (0x0000d7a7) list_single_graphic_hl_pane_g5_ParamLimits

0x0860,	// (0x0000d7a7) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0001cb3d) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0001cb3d) list_single_graphic_hl_pane_g

0x0874,	// (0x0000d7bb) list_single_graphic_hl_pane_t1_ParamLimits

0x0874,	// (0x0000d7bb) list_single_graphic_hl_pane_t1

0x9f71,	// (0x00016eb8) aid_size_min_hl_cp2

0x9f7a,	// (0x00016ec1) list_highlight_pane_cp34_cp2_ParamLimits

0x9f7a,	// (0x00016ec1) list_highlight_pane_cp34_cp2

0x9f2e,	// (0x00016e75) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x9f2e,	// (0x00016e75) list_single_graphic_hl_pane_g1_cp2

0x9f87,	// (0x00016ece) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x9f87,	// (0x00016ece) list_single_graphic_hl_pane_g2_cp2

0x9f93,	// (0x00016eda) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x9f93,	// (0x00016eda) list_single_graphic_hl_pane_g3_cp2

0x4e84,	// (0x00011dcb) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4e84,	// (0x00011dcb) list_single_graphic_hl_pane_g4_cp2

0x9fa1,	// (0x00016ee8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x9fa1,	// (0x00016ee8) list_single_graphic_hl_pane_g5_cp2

0xc8f6,	// (0x0001983d) control_pane_g4_ParamLimits

0xc8f6,	// (0x0001983d) control_pane_g4

0x6596,	// (0x000134dd) bg_popup_sub_pane_cp10_ParamLimits

0x95b9,	// (0x00016500) list_choice_list_pane_ParamLimits

0x95c8,	// (0x0001650f) scroll_pane_cp23

0x4903,	// (0x0001184a) bg_popup_preview_window_pane_cp02_ParamLimits

0x9ba0,	// (0x00016ae7) list_preview_fixed_pane_ParamLimits

0x9bb6,	// (0x00016afd) list_preview_fixed_pane_cp_ParamLimits

0x9bb6,	// (0x00016afd) list_preview_fixed_pane_cp

0x9bc2,	// (0x00016b09) popup_preview_fixed_window_g1_ParamLimits

0x9bc2,	// (0x00016b09) popup_preview_fixed_window_g1

0x9bce,	// (0x00016b15) popup_preview_fixed_window_g2_ParamLimits

0x9bce,	// (0x00016b15) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0001cac5) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0001cac5) popup_preview_fixed_window_g

0x2759,	// (0x0000f6a0) aid_navi_side_left_pane_ParamLimits

0x276e,	// (0x0000f6b5) aid_navi_side_right_pane_ParamLimits

0x2786,	// (0x0000f6cd) navi_icon_pane_stacon_ParamLimits

0x279a,	// (0x0000f6e1) navi_navi_pane_stacon_ParamLimits

0x2786,	// (0x0000f6cd) navi_text_pane_stacon_ParamLimits

0x237d,	// (0x0000f2c4) main_text_info_pane

0x9fcb,	// (0x00016f12) listscroll_text_info_pane

0x9fd3,	// (0x00016f1a) list_text_info_pane_ParamLimits

0x9fd3,	// (0x00016f1a) list_text_info_pane

0x9fe2,	// (0x00016f29) scroll_pane_cp24_ParamLimits

0x9fe2,	// (0x00016f29) scroll_pane_cp24

0x088a,	// (0x0000d7d1) list_text_info_pane_t1_ParamLimits

0x088a,	// (0x0000d7d1) list_text_info_pane_t1

0xca3d,	// (0x00019984) popup_fast_swap2_window_ParamLimits

0xca3d,	// (0x00019984) popup_fast_swap2_window

0xa035,	// (0x00016f7c) aid_size_cell_fast2

0x456c,	// (0x000114b3) bg_popup_window_pane_cp17

0x7017,	// (0x00013f5e) heading_pane_cp2

0x4b43,	// (0x00011a8a) listscroll_fast2_pane

0xa03f,	// (0x00016f86) grid_fast2_pane

0xa049,	// (0x00016f90) listscroll_fast2_pane_g1

0xa051,	// (0x00016f98) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0001cb48) listscroll_fast2_pane_g

0x56ea,	// (0x00012631) scroll_pane_cp26

0xa05b,	// (0x00016fa2) cell_fast2_pane_ParamLimits

0xa05b,	// (0x00016fa2) cell_fast2_pane

0xa070,	// (0x00016fb7) cell_fast2_pane_g1

0xa079,	// (0x00016fc0) cell_fast2_pane_g2

0xa082,	// (0x00016fc9) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0001cb4d) cell_fast2_pane_g

0x4c2d,	// (0x00011b74) grid_highlight_pane_cp9

0x2c5f,	// (0x0000fba6) main_eswt_pane_ParamLimits

0x2c5f,	// (0x0000fba6) main_eswt_pane

0x9ff7,	// (0x00016f3e) list_single_text_info_pane

0xa08a,	// (0x00016fd1) eswt_ctrl_button_pane

0xa08a,	// (0x00016fd1) eswt_ctrl_canvas_pane

0xa092,	// (0x00016fd9) eswt_ctrl_combo_pane

0xa08a,	// (0x00016fd1) eswt_ctrl_default_pane

0xa08a,	// (0x00016fd1) eswt_ctrl_label_pane

0xa09a,	// (0x00016fe1) eswt_ctrl_wait_pane

0xa0a2,	// (0x00016fe9) eswt_shell_pane

0x456c,	// (0x000114b3) listscroll_eswt_app_pane

0xa0c2,	// (0x00017009) popup_eswt_tasktip_window_ParamLimits

0xa0c2,	// (0x00017009) popup_eswt_tasktip_window

0x6bd6,	// (0x00013b1d) bg_popup_window_pane_cp18

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_ParamLimits

0xa0d3,	// (0x0001701a) eswt_control_pane_g1

0xa0e0,	// (0x00017027) eswt_control_pane_g2_ParamLimits

0xa0e0,	// (0x00017027) eswt_control_pane_g2

0xa0ed,	// (0x00017034) eswt_control_pane_g3_ParamLimits

0xa0ed,	// (0x00017034) eswt_control_pane_g3

0xa0fa,	// (0x00017041) eswt_control_pane_g4_ParamLimits

0xa0fa,	// (0x00017041) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0001cb54) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0001cb54) eswt_control_pane_g

0x541c,	// (0x00012363) bg_button_pane_ParamLimits

0x541c,	// (0x00012363) bg_button_pane

0x4c42,	// (0x00011b89) common_borders_pane_copy2_ParamLimits

0x4c42,	// (0x00011b89) common_borders_pane_copy2

0xa107,	// (0x0001704e) control_button_pane_g1_ParamLimits

0xa107,	// (0x0001704e) control_button_pane_g1

0xa113,	// (0x0001705a) control_button_pane_g2_ParamLimits

0xa113,	// (0x0001705a) control_button_pane_g2

0xa11f,	// (0x00017066) control_button_pane_g3_ParamLimits

0xa11f,	// (0x00017066) control_button_pane_g3

0x0002,

0xfc16,	// (0x0001cb5d) control_button_pane_g_ParamLimits

0xfc16,	// (0x0001cb5d) control_button_pane_g

0xa133,	// (0x0001707a) control_button_pane_t1

0xa141,	// (0x00017088) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0001cb64) control_button_pane_t

0x6ab2,	// (0x000139f9) bg_button_pane_g1

0x6ac2,	// (0x00013a09) bg_button_pane_g2

0x6aba,	// (0x00013a01) bg_button_pane_g3

0x6ad2,	// (0x00013a19) bg_button_pane_g4

0x6aca,	// (0x00013a11) bg_button_pane_g5

0x6ada,	// (0x00013a21) bg_button_pane_g6

0x6ae2,	// (0x00013a29) bg_button_pane_g7

0x6af2,	// (0x00013a39) bg_button_pane_g8

0x6aea,	// (0x00013a31) bg_button_pane_g9

0x0008,

0xf862,	// (0x0001c7a9) bg_button_pane_g

0x9574,	// (0x000164bb) common_borders_pane_ParamLimits

0x9574,	// (0x000164bb) common_borders_pane

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_copy1_ParamLimits

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_copy1

0xa0e0,	// (0x00017027) eswt_control_pane_g2_copy1_ParamLimits

0xa0e0,	// (0x00017027) eswt_control_pane_g2_copy1

0xa0ed,	// (0x00017034) eswt_control_pane_g3_copy1_ParamLimits

0xa0ed,	// (0x00017034) eswt_control_pane_g3_copy1

0xa0fa,	// (0x00017041) eswt_control_pane_g4_copy1_ParamLimits

0xa0fa,	// (0x00017041) eswt_control_pane_g4_copy1

0x95af,	// (0x000164f6) bg_eswt_ctrl_canvas_pane_g1

0x9574,	// (0x000164bb) common_borders_pane_cp2_ParamLimits

0x9574,	// (0x000164bb) common_borders_pane_cp2

0x9574,	// (0x000164bb) common_borders_pane_cp3_ParamLimits

0x9574,	// (0x000164bb) common_borders_pane_cp3

0xa14f,	// (0x00017096) separator_horizontal_pane

0xa157,	// (0x0001709e) separator_vertical_pane

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_copy2_ParamLimits

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_copy2

0xa0e0,	// (0x00017027) eswt_control_pane_g2_copy2_ParamLimits

0xa0e0,	// (0x00017027) eswt_control_pane_g2_copy2

0xa0ed,	// (0x00017034) eswt_control_pane_g3_copy2_ParamLimits

0xa0ed,	// (0x00017034) eswt_control_pane_g3_copy2

0xa0fa,	// (0x00017041) eswt_control_pane_g4_copy2_ParamLimits

0xa0fa,	// (0x00017041) eswt_control_pane_g4_copy2

0x456c,	// (0x000114b3) common_borders_pane_cp4

0xa160,	// (0x000170a7) separator_horizontal_pane_g1

0xa169,	// (0x000170b0) separator_horizontal_pane_g2

0xa172,	// (0x000170b9) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0001cb69) separator_horizontal_pane_g

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_copy3_ParamLimits

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_copy3

0xa0e0,	// (0x00017027) eswt_control_pane_g2_copy3_ParamLimits

0xa0e0,	// (0x00017027) eswt_control_pane_g2_copy3

0xa0ed,	// (0x00017034) eswt_control_pane_g3_copy3_ParamLimits

0xa0ed,	// (0x00017034) eswt_control_pane_g3_copy3

0xa0fa,	// (0x00017041) eswt_control_pane_g4_copy3_ParamLimits

0xa0fa,	// (0x00017041) eswt_control_pane_g4_copy3

0x456c,	// (0x000114b3) common_borders_pane_cp5

0xa17b,	// (0x000170c2) separator_vertical_pane_g1

0xa184,	// (0x000170cb) separator_vertical_pane_g2

0xa18d,	// (0x000170d4) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0001cb70) separator_vertical_pane_g

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_copy4_ParamLimits

0xa0d3,	// (0x0001701a) eswt_control_pane_g1_copy4

0xa0e0,	// (0x00017027) eswt_control_pane_g2_copy4_ParamLimits

0xa0e0,	// (0x00017027) eswt_control_pane_g2_copy4

0xa0ed,	// (0x00017034) eswt_control_pane_g3_copy4_ParamLimits

0xa0ed,	// (0x00017034) eswt_control_pane_g3_copy4

0xa0fa,	// (0x00017041) eswt_control_pane_g4_copy4_ParamLimits

0xa0fa,	// (0x00017041) eswt_control_pane_g4_copy4

0xa196,	// (0x000170dd) eswt_ctrl_combo_button_pane

0xa19e,	// (0x000170e5) eswt_ctrl_input_pane

0xa1a6,	// (0x000170ed) popup_choice_list_window_cp70

0xa1ae,	// (0x000170f5) eswt_ctrl_input_pane_t1

0x456c,	// (0x000114b3) input_focus_pane_cp70

0x9574,	// (0x000164bb) bg_button_pane_cp70_ParamLimits

0x9574,	// (0x000164bb) bg_button_pane_cp70

0xa1bc,	// (0x00017103) eswt_ctrl_combo_button_pane_g1

0xa1c4,	// (0x0001710b) wait_bar_pane_cp70

0x6bd6,	// (0x00013b1d) bg_popup_window_pane_cp70_ParamLimits

0x6bd6,	// (0x00013b1d) bg_popup_window_pane_cp70

0xa1cc,	// (0x00017113) popup_eswt_tasktip_window_t1

0xa1e2,	// (0x00017129) wait_bar_pane_cp71_ParamLimits

0xa1e2,	// (0x00017129) wait_bar_pane_cp71

0xa1ee,	// (0x00017135) grid_eswt_app_pane

0x59ff,	// (0x00012946) scroll_pane_cp70

0x08a7,	// (0x0000d7ee) cell_eswt_app_pane_ParamLimits

0x08a7,	// (0x0000d7ee) cell_eswt_app_pane

0x08d1,	// (0x0000d818) cell_eswt_app_pane_g1_ParamLimits

0x08d1,	// (0x0000d818) cell_eswt_app_pane_g1

0x0900,	// (0x0000d847) cell_eswt_app_pane_g2_ParamLimits

0x0900,	// (0x0000d847) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0001cb77) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0001cb77) cell_eswt_app_pane_g

0x0924,	// (0x0000d86b) cell_eswt_app_pane_t1_ParamLimits

0x0924,	// (0x0000d86b) cell_eswt_app_pane_t1

0xa2b0,	// (0x000171f7) grid_highlight_pane_cp70_ParamLimits

0xa2b0,	// (0x000171f7) grid_highlight_pane_cp70

0x6133,	// (0x0001307a) set_content_pane_g1

0x64ee,	// (0x00013435) status_small_volume_pane

0x3ab2,	// (0x000109f9) status_small_volume_pane_g1

0x3aba,	// (0x00010a01) volume_small2_pane

0x3ac3,	// (0x00010a0a) volume_small2_pane_g1

0x3acc,	// (0x00010a13) volume_small2_pane_g2

0x3ad5,	// (0x00010a1c) volume_small2_pane_g3

0x3ade,	// (0x00010a25) volume_small2_pane_g4

0x3ae7,	// (0x00010a2e) volume_small2_pane_g5

0x3af0,	// (0x00010a37) volume_small2_pane_g6

0x3af9,	// (0x00010a40) volume_small2_pane_g7

0x3b02,	// (0x00010a49) volume_small2_pane_g8

0x3b0b,	// (0x00010a52) volume_small2_pane_g9

0x3b14,	// (0x00010a5b) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0001cb7c) volume_small2_pane_g

0x9965,	// (0x000168ac) fep_vkb_top_text_pane_g1_ParamLimits

0x07fc,	// (0x0000d743) fep_vkb_top_text_pane_t1_ParamLimits

0x9bda,	// (0x00016b21) popup_preview_fixed_window_g3_ParamLimits

0x9bda,	// (0x00016b21) popup_preview_fixed_window_g3

0xd04c,	// (0x00019f93) popup_toolbar_trans_pane

0x01c4,	// (0x0000d10b) aid_height_set_list_ParamLimits

0x7f97,	// (0x00014ede) aid_size_parent_ParamLimits

0x6596,	// (0x000134dd) list_highlight_pane_cp2_ParamLimits

0x6133,	// (0x0001307a) set_content_pane_g1_ParamLimits

0x0391,	// (0x0000d2d8) list_single_image_pane_ParamLimits

0x0391,	// (0x0000d2d8) list_single_image_pane

0x0956,	// (0x0000d89d) aid_size_cell_image_ParamLimits

0x0956,	// (0x0000d89d) aid_size_cell_image

0x0963,	// (0x0000d8aa) grid_single_image_pane_ParamLimits

0x0963,	// (0x0000d8aa) grid_single_image_pane

0xa2d5,	// (0x0001721c) list_single_image_pane_g1_ParamLimits

0xa2d5,	// (0x0001721c) list_single_image_pane_g1

0xa2e1,	// (0x00017228) list_single_image_pane_g2_ParamLimits

0xa2e1,	// (0x00017228) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0001cb91) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0001cb91) list_single_image_pane_g

0xa2f5,	// (0x0001723c) list_single_image_pane_t1_ParamLimits

0xa2f5,	// (0x0001723c) list_single_image_pane_t1

0x096f,	// (0x0000d8b6) cell_image_list_pane_ParamLimits

0x096f,	// (0x0000d8b6) cell_image_list_pane

0x0983,	// (0x0000d8ca) cell_image_list_pane_g1

0x098c,	// (0x0000d8d3) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0001cb96) cell_image_list_pane_g

0xa331,	// (0x00017278) aid_size_cell_tb_trans_pane

0x541c,	// (0x00012363) bg_tb_trans_pane

0xa343,	// (0x0001728a) grid_tb_trans_pane

0x6ab2,	// (0x000139f9) bg_tb_trans_pane_g1

0x6ac2,	// (0x00013a09) bg_tb_trans_pane_g2

0x6aba,	// (0x00013a01) bg_tb_trans_pane_g3

0x6ad2,	// (0x00013a19) bg_tb_trans_pane_g4

0x6aca,	// (0x00013a11) bg_tb_trans_pane_g5

0x6af2,	// (0x00013a39) bg_tb_trans_pane_g6

0x6aea,	// (0x00013a31) bg_tb_trans_pane_g7

0x6ada,	// (0x00013a21) bg_tb_trans_pane_g8

0x6ae2,	// (0x00013a29) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0001cb9b) bg_tb_trans_pane_g

0xa357,	// (0x0001729e) cell_toolbar_trans_pane_ParamLimits

0xa357,	// (0x0001729e) cell_toolbar_trans_pane

0x95af,	// (0x000164f6) cell_toolbar_trans_pane_g1

0x0592,	// (0x0000d4d9) list_form2_midp_pane_t1

0x05a0,	// (0x0000d4e7) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0001ca38) list_form2_midp_pane_t

0x912c,	// (0x00016073) scroll_pane_cp51_ParamLimits

0x9332,	// (0x00016279) form2_midp_wait_pane_g1

0x933b,	// (0x00016282) form2_midp_wait_pane_g2

0x9344,	// (0x0001628b) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0001ca4d) form2_midp_wait_pane_g

0x4660,	// (0x000115a7) list_highlight_pane_cp21_ParamLimits

0x9392,	// (0x000162d9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x93a1,	// (0x000162e8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x819a,	// (0x000150e1) list_single_2graphic_im_pane_ParamLimits

0x819a,	// (0x000150e1) list_single_2graphic_im_pane

0xa37d,	// (0x000172c4) list_single_2graphic_im_pane_g1_ParamLimits

0xa37d,	// (0x000172c4) list_single_2graphic_im_pane_g1

0xa38e,	// (0x000172d5) list_single_2graphic_im_pane_g2_ParamLimits

0xa38e,	// (0x000172d5) list_single_2graphic_im_pane_g2

0xa39a,	// (0x000172e1) list_single_2graphic_im_pane_g3_ParamLimits

0xa39a,	// (0x000172e1) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0001cbae) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0001cbae) list_single_2graphic_im_pane_g

0xa3ba,	// (0x00017301) list_single_2graphic_im_pane_t1_ParamLimits

0xa3ba,	// (0x00017301) list_single_2graphic_im_pane_t1

0x9be6,	// (0x00016b2d) list_single_graphic_2heading_pane_fp_ParamLimits

0x9be6,	// (0x00016b2d) list_single_graphic_2heading_pane_fp

0x9c2b,	// (0x00016b72) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9c2b,	// (0x00016b72) list_single_graphic_2heading_pane_fp_g1

0x9bfc,	// (0x00016b43) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x9bfc,	// (0x00016b43) list_single_graphic_2heading_pane_fp_g2

0x5095,	// (0x00011fdc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5095,	// (0x00011fdc) list_single_graphic_2heading_pane_fp_g3

0x5442,	// (0x00012389) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5442,	// (0x00012389) list_single_graphic_2heading_pane_fp_g4

0x9c08,	// (0x00016b4f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x9c08,	// (0x00016b4f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001cad5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001cad5) list_single_graphic_2heading_pane_fp_g

0xa3eb,	// (0x00017332) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xa3eb,	// (0x00017332) list_single_graphic_2heading_pane_fp_t1

0x9c63,	// (0x00016baa) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9c63,	// (0x00016baa) list_single_graphic_2heading_pane_fp_t2

0xa401,	// (0x00017348) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xa401,	// (0x00017348) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0001cbb7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0001cbb7) list_single_graphic_2heading_pane_fp_t

0x963b,	// (0x00016582) fep_hwr_write_pane_g5_ParamLimits

0x963b,	// (0x00016582) fep_hwr_write_pane_g5

0x9647,	// (0x0001658e) fep_hwr_write_pane_g6_ParamLimits

0x9647,	// (0x0001658e) fep_hwr_write_pane_g6

0xa0a2,	// (0x00016fe9) eswt_shell_pane_ParamLimits

0x6bd6,	// (0x00013b1d) bg_popup_window_pane_cp18_ParamLimits

0x7ed3,	// (0x00014e1a) heading_pane_cp70

0xa1cc,	// (0x00017113) popup_eswt_tasktip_window_t1_ParamLimits

0xf08f,	// (0x0001bfd6) aid_touch_tab_arrow_left

0xf0a5,	// (0x0001bfec) aid_touch_tab_arrow_right

0xe51f,	// (0x0001b466) title_pane_g3_ParamLimits

0xe51f,	// (0x0001b466) title_pane_g3

0x5307,	// (0x0001224e) set_value_pane_g1

0xd04c,	// (0x00019f93) popup_toolbar_trans_pane_ParamLimits

0xa331,	// (0x00017278) aid_size_cell_tb_trans_pane_ParamLimits

0x541c,	// (0x00012363) bg_tb_trans_pane_ParamLimits

0xa343,	// (0x0001728a) grid_tb_trans_pane_ParamLimits

0x4903,	// (0x0001184a) cont_note_pane_ParamLimits

0x4903,	// (0x0001184a) cont_note_pane

0x4c42,	// (0x00011b89) cont_snote2_single_text_pane_ParamLimits

0x4c42,	// (0x00011b89) cont_snote2_single_text_pane

0x4c42,	// (0x00011b89) cont_snote2_single_graphic_pane_ParamLimits

0x4c42,	// (0x00011b89) cont_snote2_single_graphic_pane

0x722d,	// (0x00014174) cont_note_wait_pane_ParamLimits

0x722d,	// (0x00014174) cont_note_wait_pane

0x722d,	// (0x00014174) cont_note_image_pane_ParamLimits

0x722d,	// (0x00014174) cont_note_image_pane

0xa417,	// (0x0001735e) popup_note2_window_g1_ParamLimits

0xa417,	// (0x0001735e) popup_note2_window_g1

0xa448,	// (0x0001738f) popup_note2_window_t1_ParamLimits

0xa448,	// (0x0001738f) popup_note2_window_t1

0xa48d,	// (0x000173d4) popup_note2_window_t2_ParamLimits

0xa48d,	// (0x000173d4) popup_note2_window_t2

0xa4d2,	// (0x00017419) popup_note2_window_t3_ParamLimits

0xa4d2,	// (0x00017419) popup_note2_window_t3

0xa517,	// (0x0001745e) popup_note2_window_t4_ParamLimits

0xa517,	// (0x0001745e) popup_note2_window_t4

0x497b,	// (0x000118c2) popup_note2_window_t5_ParamLimits

0x497b,	// (0x000118c2) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001cbc3) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001cbc3) popup_note2_window_t

0xa546,	// (0x0001748d) popup_note2_image_window_g1_ParamLimits

0xa546,	// (0x0001748d) popup_note2_image_window_g1

0xa552,	// (0x00017499) popup_note2_image_window_g2_ParamLimits

0xa552,	// (0x00017499) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0001cbce) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0001cbce) popup_note2_image_window_g

0xa564,	// (0x000174ab) popup_note2_image_window_t1_ParamLimits

0xa564,	// (0x000174ab) popup_note2_image_window_t1

0xa57c,	// (0x000174c3) popup_note2_image_window_t2_ParamLimits

0xa57c,	// (0x000174c3) popup_note2_image_window_t2

0xa594,	// (0x000174db) popup_note2_image_window_t3_ParamLimits

0xa594,	// (0x000174db) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0001cbd3) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0001cbd3) popup_note2_image_window_t

0x723b,	// (0x00014182) popup_note2_wait_window_g1_ParamLimits

0x723b,	// (0x00014182) popup_note2_wait_window_g1

0xa5b0,	// (0x000174f7) popup_note2_wait_window_g2_ParamLimits

0xa5b0,	// (0x000174f7) popup_note2_wait_window_g2

0x7253,	// (0x0001419a) popup_note2_wait_window_g3_ParamLimits

0x7253,	// (0x0001419a) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x0001cbda) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x0001cbda) popup_note2_wait_window_g

0xa5bc,	// (0x00017503) popup_note2_wait_window_t1_ParamLimits

0xa5bc,	// (0x00017503) popup_note2_wait_window_t1

0xa5da,	// (0x00017521) popup_note2_wait_window_t2_ParamLimits

0xa5da,	// (0x00017521) popup_note2_wait_window_t2

0xa5f8,	// (0x0001753f) popup_note2_wait_window_t3_ParamLimits

0xa5f8,	// (0x0001753f) popup_note2_wait_window_t3

0xa60a,	// (0x00017551) popup_note2_wait_window_t4_ParamLimits

0xa60a,	// (0x00017551) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x0001cbe1) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x0001cbe1) popup_note2_wait_window_t

0xa61c,	// (0x00017563) wait_bar2_pane_ParamLimits

0xa61c,	// (0x00017563) wait_bar2_pane

0xa634,	// (0x0001757b) popup_snote2_single_text_window_g1_ParamLimits

0xa634,	// (0x0001757b) popup_snote2_single_text_window_g1

0xa65c,	// (0x000175a3) popup_snote2_single_text_window_t1_ParamLimits

0xa65c,	// (0x000175a3) popup_snote2_single_text_window_t1

0xa6a8,	// (0x000175ef) popup_snote2_single_text_window_t2_ParamLimits

0xa6a8,	// (0x000175ef) popup_snote2_single_text_window_t2

0xa6f4,	// (0x0001763b) popup_snote2_single_text_window_t3_ParamLimits

0xa6f4,	// (0x0001763b) popup_snote2_single_text_window_t3

0xa735,	// (0x0001767c) popup_snote2_single_text_window_t4_ParamLimits

0xa735,	// (0x0001767c) popup_snote2_single_text_window_t4

0xa76b,	// (0x000176b2) popup_snote2_single_text_window_t5_ParamLimits

0xa76b,	// (0x000176b2) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x0001cbea) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x0001cbea) popup_snote2_single_text_window_t

0xa796,	// (0x000176dd) popup_snote2_single_graphic_window_g1_ParamLimits

0xa796,	// (0x000176dd) popup_snote2_single_graphic_window_g1

0xa7be,	// (0x00017705) popup_snote2_single_graphic_window_g2_ParamLimits

0xa7be,	// (0x00017705) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x0001cbf5) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x0001cbf5) popup_snote2_single_graphic_window_g

0xa7e6,	// (0x0001772d) popup_snote2_single_graphic_window_t1_ParamLimits

0xa7e6,	// (0x0001772d) popup_snote2_single_graphic_window_t1

0xa832,	// (0x00017779) popup_snote2_single_graphic_window_t2_ParamLimits

0xa832,	// (0x00017779) popup_snote2_single_graphic_window_t2

0xa6f4,	// (0x0001763b) popup_snote2_single_graphic_window_t3_ParamLimits

0xa6f4,	// (0x0001763b) popup_snote2_single_graphic_window_t3

0xa735,	// (0x0001767c) popup_snote2_single_graphic_window_t4_ParamLimits

0xa735,	// (0x0001767c) popup_snote2_single_graphic_window_t4

0xa76b,	// (0x000176b2) popup_snote2_single_graphic_window_t5_ParamLimits

0xa76b,	// (0x000176b2) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x0001cbfa) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x0001cbfa) popup_snote2_single_graphic_window_t

0x8fe7,	// (0x00015f2e) clock_nsta_pane_cp2_t1

0x8fe7,	// (0x00015f2e) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0001ca0e) clock_nsta_pane_cp2_t

0x5436,	// (0x0001237d) form_field_data_wide_pane_g1_ParamLimits

0x5095,	// (0x00011fdc) form_field_data_wide_pane_g2_ParamLimits

0x5095,	// (0x00011fdc) form_field_data_wide_pane_g2

0x5442,	// (0x00012389) form_field_data_wide_pane_g3_ParamLimits

0x5442,	// (0x00012389) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001c5c3) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001c5c3) form_field_data_wide_pane_g

0x04c6,	// (0x0000d40d) grid_touch_3_pane_ParamLimits

0x04c6,	// (0x0000d40d) grid_touch_3_pane

0x0995,	// (0x0000d8dc) cell_touch_3_pane_ParamLimits

0x0995,	// (0x0000d8dc) cell_touch_3_pane

0x95af,	// (0x000164f6) cell_touch_3_pane_g1

0x95af,	// (0x000164f6) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001ca93) cell_touch_3_pane_g

0x49ad,	// (0x000118f4) cont_query_data_pane

0x49b5,	// (0x000118fc) cont_query_data_pane_cp1

0xa8af,	// (0x000177f6) button_value_adjust_pane_cp7

0xa8b7,	// (0x000177fe) query_popup_pane_cp3

0x5cb8,	// (0x00012bff) bg_popup_sub_pane_cp22_ParamLimits

0x289b,	// (0x0000f7e2) navi_navi_volume_pane_cp2

0x28b3,	// (0x0000f7fa) popup_side_volume_key_window_g2

0x28bf,	// (0x0000f806) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001c659) popup_side_volume_key_window_g

0x28d9,	// (0x0000f820) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001c660) popup_side_volume_key_window_t

0x5fff,	// (0x00012f46) popup_side_volume_key_window_ParamLimits

0xe8f8,	// (0x0001b83f) list_double_graphic_pane_g4_ParamLimits

0xe8f8,	// (0x0001b83f) list_double_graphic_pane_g4

0x036b,	// (0x0000d2b2) list_single_2heading_msg_pane_ParamLimits

0x036b,	// (0x0000d2b2) list_single_2heading_msg_pane

0x09de,	// (0x0000d925) list_single_2heading_msg_pane_g1_ParamLimits

0x09de,	// (0x0000d925) list_single_2heading_msg_pane_g1

0x09ea,	// (0x0000d931) list_single_2heading_msg_pane_g2_ParamLimits

0x09ea,	// (0x0000d931) list_single_2heading_msg_pane_g2

0x09fd,	// (0x0000d944) list_single_2heading_msg_pane_g3_ParamLimits

0x09fd,	// (0x0000d944) list_single_2heading_msg_pane_g3

0xa8f2,	// (0x00017839) list_single_2heading_msg_pane_g4_ParamLimits

0xa8f2,	// (0x00017839) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x0001cc05) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x0001cc05) list_single_2heading_msg_pane_g

0xa90a,	// (0x00017851) list_single_2heading_msg_pane_t1_ParamLimits

0xa90a,	// (0x00017851) list_single_2heading_msg_pane_t1

0x0a09,	// (0x0000d950) list_single_2heading_msg_pane_t2_ParamLimits

0x0a09,	// (0x0000d950) list_single_2heading_msg_pane_t2

0x0a74,	// (0x0000d9bb) list_single_2heading_msg_pane_t3_ParamLimits

0x0a74,	// (0x0000d9bb) list_single_2heading_msg_pane_t3

0xa99f,	// (0x000178e6) list_single_2heading_msg_pane_t4_ParamLimits

0xa99f,	// (0x000178e6) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x0001cc0e) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x0001cc0e) list_single_2heading_msg_pane_t

0x45b4,	// (0x000114fb) title_pane_g4_ParamLimits

0x45b4,	// (0x000114fb) title_pane_g4

0x26a9,	// (0x0000f5f0) title_pane_stacon_g3_ParamLimits

0x26a9,	// (0x0000f5f0) title_pane_stacon_g3

0xa3ae,	// (0x000172f5) list_single_2graphic_im_pane_g4_ParamLimits

0xa3ae,	// (0x000172f5) list_single_2graphic_im_pane_g4

0x7c94,	// (0x00014bdb) popup_side_volume_key_window_cp

0x85b0,	// (0x000154f7) main_idle_act2_pane_t1

0x329a,	// (0x000101e1) toolbar_button_pane_g10

0xe829,	// (0x0001b770) popup_toolbar_window_cp1

0x8fd8,	// (0x00015f1f) clock_nsta_pane_cp_t1

0x8fd8,	// (0x00015f1f) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0001ca09) clock_nsta_pane_cp_t

0x289b,	// (0x0000f7e2) navi_navi_volume_pane_cp2_ParamLimits

0x28a7,	// (0x0000f7ee) popup_side_volume_key_window_g1_ParamLimits

0x28b3,	// (0x0000f7fa) popup_side_volume_key_window_g2_ParamLimits

0x28bf,	// (0x0000f806) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001c659) popup_side_volume_key_window_g_ParamLimits

0x371e,	// (0x00010665) fep_hwr_aid_pane

0x37c5,	// (0x0001070c) bg_fep_hwr_top_pane_g4_ParamLimits

0x960b,	// (0x00016552) fep_hwr_top_pane_g1_ParamLimits

0x961d,	// (0x00016564) fep_hwr_top_pane_g2_ParamLimits

0x37e5,	// (0x0001072c) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0001ca5e) fep_hwr_top_pane_g_ParamLimits

0x37fa,	// (0x00010741) fep_hwr_top_text_pane_ParamLimits

0x7a57,	// (0x0001499e) aid_touch_tab_arrow_arrow_2

0x7a60,	// (0x000149a7) aid_touch_tab_arrow_left_2

0x3732,	// (0x00010679) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3769,	// (0x000106b0) fep_hwr_prediction_pane

0x9774,	// (0x000166bb) fep_vkb_prediction_pane

0x07dc,	// (0x0000d723) fep_vkb_side_pane_g3_ParamLimits

0x07dc,	// (0x0000d723) fep_vkb_side_pane_g3

0x3975,	// (0x000108bc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x39e1,	// (0x00010928) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x39ee,	// (0x00010935) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0001cb0d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x3b1d,	// (0x00010a64) fep_hwr_prediction_pane_g1

0x3b27,	// (0x00010a6e) fep_hwr_prediction_pane_g2

0x3b2f,	// (0x00010a76) fep_hwr_prediction_pane_g3

0x3b37,	// (0x00010a7e) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0001cc17) fep_hwr_prediction_pane_g

0xa9c4,	// (0x0001790b) fep_vkb_prediction_pane_g1

0xa9ce,	// (0x00017915) fep_vkb_prediction_pane_g2

0xa9d6,	// (0x0001791d) fep_vkb_prediction_pane_g3

0xa9de,	// (0x00017925) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x0001cc20) fep_vkb_prediction_pane_g

0x357a,	// (0x000104c1) slider_set_pane_g3

0x358e,	// (0x000104d5) slider_set_pane_g4

0x35a6,	// (0x000104ed) slider_set_pane_g5

0x357a,	// (0x000104c1) slider_set_pane_g6

0x35bc,	// (0x00010503) slider_set_pane_g7

0x80f8,	// (0x0001503f) slider_form_pane_g3

0x8101,	// (0x00015048) slider_form_pane_g4

0x8109,	// (0x00015050) slider_form_pane_g5

0x80f8,	// (0x0001503f) slider_form_pane_g6

0x030b,	// (0x0000d252) slider_form_pane_g7

0x88b2,	// (0x000157f9) slider_set_pane_vc_g3

0x88bb,	// (0x00015802) slider_set_pane_vc_g4

0x88c4,	// (0x0001580b) slider_set_pane_vc_g5

0x88b2,	// (0x000157f9) slider_set_pane_vc_g6

0x88cd,	// (0x00015814) slider_set_pane_vc_g7

0x8c9e,	// (0x00015be5) slider_form_pane_vc_g1

0x8ca7,	// (0x00015bee) slider_form_pane_vc_g2

0x8cb0,	// (0x00015bf7) slider_form_pane_vc_g3

0x8c9e,	// (0x00015be5) slider_form_pane_vc_g4

0x8cb9,	// (0x00015c00) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001c9db) slider_form_pane_vc_g

0x237d,	// (0x0000f2c4) main_idle_act3_pane

0xa9e6,	// (0x0001792d) ai3_links_pane

0x0ae2,	// (0x0000da29) popup_ai3_data_window_ParamLimits

0x0ae2,	// (0x0000da29) popup_ai3_data_window

0x456c,	// (0x000114b3) grid_ai3_links_pane

0x0afa,	// (0x0000da41) cell_ai3_links_pane_ParamLimits

0x0afa,	// (0x0000da41) cell_ai3_links_pane

0xaa1f,	// (0x00017966) bg_popup_sub_pane_cp11

0xaa2c,	// (0x00017973) cell_ai3_links_pane_g1

0x456c,	// (0x000114b3) bg_popup_sub_pane_cp12

0xaa51,	// (0x00017998) heading_ai3_data_pane

0xaa59,	// (0x000179a0) list_ai3_gene_pane

0xaa65,	// (0x000179ac) popup_ai3_data_window_g1

0xaa6d,	// (0x000179b4) heading_ai3_data_pane_g1

0xaa75,	// (0x000179bc) heading_ai3_data_pane_t1

0xaa83,	// (0x000179ca) list_double_ai3_gene_pane_ParamLimits

0xaa83,	// (0x000179ca) list_double_ai3_gene_pane

0xaa90,	// (0x000179d7) list_single_ai3_gene_pane_ParamLimits

0xaa90,	// (0x000179d7) list_single_ai3_gene_pane

0x9574,	// (0x000164bb) list_highlight_pane_cp7_ParamLimits

0x9574,	// (0x000164bb) list_highlight_pane_cp7

0xaa9d,	// (0x000179e4) list_single_a13_gene_pane_t1_ParamLimits

0xaa9d,	// (0x000179e4) list_single_a13_gene_pane_t1

0xaab4,	// (0x000179fb) list_single_ai3_gene_pane_g1

0xaabd,	// (0x00017a04) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x0001cc29) list_single_ai3_gene_pane_g

0xaac5,	// (0x00017a0c) list_double_ai3_gene_pane_g1_ParamLimits

0xaac5,	// (0x00017a0c) list_double_ai3_gene_pane_g1

0xaad1,	// (0x00017a18) list_double_ai3_gene_pane_t1_ParamLimits

0xaad1,	// (0x00017a18) list_double_ai3_gene_pane_t1

0xaaed,	// (0x00017a34) list_double_ai3_gene_pane_t2_ParamLimits

0xaaed,	// (0x00017a34) list_double_ai3_gene_pane_t2

0xab02,	// (0x00017a49) list_double_ai3_gene_pane_t3_ParamLimits

0xab02,	// (0x00017a49) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x0001cc2e) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x0001cc2e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa8c8,	// (0x0001780f) aid_size_min_col_2

0x09c8,	// (0x0000d90f) aid_size_min_msg_ParamLimits

0x09c8,	// (0x0000d90f) aid_size_min_msg

0x07f0,	// (0x0000d737) fep_vkb_top_text_pane_g2_ParamLimits

0x07f0,	// (0x0000d737) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0001ca8e) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0001ca8e) fep_vkb_top_text_pane_g

0x237d,	// (0x0000f2c4) main_hc_apps_shell_pane

0xab1f,	// (0x00017a66) grid_hc_apps_pane_ParamLimits

0xab1f,	// (0x00017a66) grid_hc_apps_pane

0xab2e,	// (0x00017a75) list_hc_apps_pane

0xab36,	// (0x00017a7d) scroll_pane_cp37_ParamLimits

0xab36,	// (0x00017a7d) scroll_pane_cp37

0x0b14,	// (0x0000da5b) cell_hc_apps_pane_ParamLimits

0x0b14,	// (0x0000da5b) cell_hc_apps_pane

0x0bd2,	// (0x0000db19) cell_hc_apps_pane_g1_ParamLimits

0x0bd2,	// (0x0000db19) cell_hc_apps_pane_g1

0xac21,	// (0x00017b68) cell_hc_apps_pane_g2_ParamLimits

0xac21,	// (0x00017b68) cell_hc_apps_pane_g2

0xac3d,	// (0x00017b84) cell_hc_apps_pane_g3_ParamLimits

0xac3d,	// (0x00017b84) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x0001cc35) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x0001cc35) cell_hc_apps_pane_g

0x0bff,	// (0x0000db46) cell_hc_apps_pane_t1_ParamLimits

0x0bff,	// (0x0000db46) cell_hc_apps_pane_t1

0x4903,	// (0x0001184a) grid_highlight_pane_cp10_ParamLimits

0x4903,	// (0x0001184a) grid_highlight_pane_cp10

0x0c3d,	// (0x0000db84) list_single_hc_apps_pane_ParamLimits

0x0c3d,	// (0x0000db84) list_single_hc_apps_pane

0x0c6e,	// (0x0000dbb5) list_single_hc_apps_pane_g1

0x0c87,	// (0x0000dbce) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x0001cc3c) list_single_hc_apps_pane_g

0x0ca0,	// (0x0000dbe7) list_single_hc_apps_pane_g2_copy1

0x0cbc,	// (0x0000dc03) list_single_hc_apps_pane_t1

0x4660,	// (0x000115a7) bg_set_opt_pane_cp_ParamLimits

0x25d0,	// (0x0000f517) setting_slider_pane_t1_ParamLimits

0x25e9,	// (0x0000f530) setting_slider_pane_t2_ParamLimits

0x2603,	// (0x0000f54a) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001c4ab) setting_slider_pane_t_ParamLimits

0x261b,	// (0x0000f562) slider_set_pane_ParamLimits

0x2b3b,	// (0x0000fa82) control_pane_g5_ParamLimits

0x2b3b,	// (0x0000fa82) control_pane_g5

0x7f51,	// (0x00014e98) slider_set_pane_g1_ParamLimits

0x356e,	// (0x000104b5) slider_set_pane_g2_ParamLimits

0x357a,	// (0x000104c1) slider_set_pane_g3_ParamLimits

0x358e,	// (0x000104d5) slider_set_pane_g4_ParamLimits

0x35a6,	// (0x000104ed) slider_set_pane_g5_ParamLimits

0x357a,	// (0x000104c1) slider_set_pane_g6_ParamLimits

0x35bc,	// (0x00010503) slider_set_pane_g7_ParamLimits

0xf960,	// (0x0001c8a7) slider_set_pane_g_ParamLimits

0x60de,	// (0x00013025) navi_icon_text_pane_ParamLimits

0xf058,	// (0x0001bf9f) aid_fill_nsta_2_ParamLimits

0xf08f,	// (0x0001bfd6) aid_touch_tab_arrow_left_ParamLimits

0xf0a5,	// (0x0001bfec) aid_touch_tab_arrow_right_ParamLimits

0xf140,	// (0x0001c087) clock_nsta_pane_ParamLimits

0x7a39,	// (0x00014980) navi_icon_pane_g1_ParamLimits

0x7a45,	// (0x0001498c) navi_text_pane_t1_ParamLimits

0x90ea,	// (0x00016031) navi_icon_text_pane_g1_ParamLimits

0x90f6,	// (0x0001603d) navi_icon_text_pane_t1_ParamLimits

0x0c6e,	// (0x0000dbb5) list_single_hc_apps_pane_g1_ParamLimits

0x0c87,	// (0x0000dbce) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x0001cc3c) list_single_hc_apps_pane_g_ParamLimits

0x0ca0,	// (0x0000dbe7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0cbc,	// (0x0000dc03) list_single_hc_apps_pane_t1_ParamLimits

0xc7d4,	// (0x0001971b) popup_toolbar2_fixed_window_ParamLimits

0xc7d4,	// (0x0001971b) popup_toolbar2_fixed_window

0xd042,	// (0x00019f89) popup_toolbar2_float_window

0x456c,	// (0x000114b3) bg_popup_sub_pane_cp27

0xad83,	// (0x00017cca) grid_toolbar2_float_pane

0x456c,	// (0x000114b3) bg_popup_sub_pane_cp26

0xad83,	// (0x00017cca) grid_toolbar2_fixed_pane

0x0cea,	// (0x0000dc31) cell_toolbar2_fixed_pane_ParamLimits

0x0cea,	// (0x0000dc31) cell_toolbar2_fixed_pane

0x0d05,	// (0x0000dc4c) cell_toolbar2_fixed_pane_g1

0x300a,	// (0x0000ff51) toolbar2_fixed_button_pane

0x6ab2,	// (0x000139f9) toolbar2_fixed_button_pane_g1

0x6ac2,	// (0x00013a09) toolbar2_fixed_button_pane_g2

0x6aba,	// (0x00013a01) toolbar2_fixed_button_pane_g3

0x6ad2,	// (0x00013a19) toolbar2_fixed_button_pane_g4

0x6aca,	// (0x00013a11) toolbar2_fixed_button_pane_g5

0x6ada,	// (0x00013a21) toolbar2_fixed_button_pane_g6

0x6ae2,	// (0x00013a29) toolbar2_fixed_button_pane_g7

0x6af2,	// (0x00013a39) toolbar2_fixed_button_pane_g8

0x6aea,	// (0x00013a31) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x0001c7a9) toolbar2_fixed_button_pane_g

0xada5,	// (0x00017cec) cell_toolbar2_float_pane_ParamLimits

0xada5,	// (0x00017cec) cell_toolbar2_float_pane

0xadb9,	// (0x00017d00) cell_toolbar2_float_pane_g1

0x300a,	// (0x0000ff51) toolbar2_fixed_button_pane_cp

0x06d8,	// (0x0000d61f) fep_vkb_accented_list_pane_ParamLimits

0x06d8,	// (0x0000d61f) fep_vkb_accented_list_pane

0x3955,	// (0x0001089c) bg_popup_fep_shadow_pane_g9

0x6252,	// (0x00013199) bg_popup_fep_shadow_pane_cp3

0x56d1,	// (0x00012618) list_accented_list_pane

0xadc2,	// (0x00017d09) list_single_accented_list_pane_ParamLimits

0xadc2,	// (0x00017d09) list_single_accented_list_pane

0x6252,	// (0x00013199) list_highlight_pane_cp10

0xadd3,	// (0x00017d1a) list_single_accented_list_pane_t1

0xcf6c,	// (0x00019eb3) popup_slider_window_ParamLimits

0xcf6c,	// (0x00019eb3) popup_slider_window

0xa8bf,	// (0x00017806) aid_indentation_list_msg

0x0dfe,	// (0x0000dd45) bg_popup_window_pane_cp19

0xaef7,	// (0x00017e3e) popup_slider_window_g1

0xaf13,	// (0x00017e5a) popup_slider_window_g2

0xaf2f,	// (0x00017e76) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x0001cc41) popup_slider_window_g

0xaf8b,	// (0x00017ed2) popup_slider_window_t1

0xafff,	// (0x00017f46) small_volume_slider_vertical_pane

0x95af,	// (0x000164f6) small_volume_slider_vertical_pane_g1

0x95af,	// (0x000164f6) small_volume_slider_vertical_pane_g2

0xb01b,	// (0x00017f62) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x0001cc53) small_volume_slider_vertical_pane_g

0xc742,	// (0x00019689) area_side_right_pane_ParamLimits

0xc742,	// (0x00019689) area_side_right_pane

0xd269,	// (0x0001a1b0) aid_size_side_button_ParamLimits

0xd269,	// (0x0001a1b0) aid_size_side_button

0xd282,	// (0x0001a1c9) grid_sctrl_middle_pane_ParamLimits

0xd282,	// (0x0001a1c9) grid_sctrl_middle_pane

0x3b72,	// (0x00010ab9) sctrl_sk_bottom_pane

0x3b83,	// (0x00010aca) sctrl_sk_top_pane

0x3b95,	// (0x00010adc) aid_touch_sctrl_top

0x3ba2,	// (0x00010ae9) bg_sctrl_sk_pane_ParamLimits

0x3ba2,	// (0x00010ae9) bg_sctrl_sk_pane

0x3bb0,	// (0x00010af7) sctrl_sk_top_pane_g1

0x3bbd,	// (0x00010b04) sctrl_sk_top_pane_t1

0x3b95,	// (0x00010adc) aid_touch_sctrl_bottom

0x3ba2,	// (0x00010ae9) bg_sctrl_sk_pane_cp_ParamLimits

0x3ba2,	// (0x00010ae9) bg_sctrl_sk_pane_cp

0x3bd8,	// (0x00010b1f) sctrl_sk_bottom_pane_g1

0x3bbd,	// (0x00010b04) sctrl_sk_bottom_pane_t1

0xd29c,	// (0x0001a1e3) cell_sctrl_middle_pane_ParamLimits

0xd29c,	// (0x0001a1e3) cell_sctrl_middle_pane

0xd2ad,	// (0x0001a1f4) aid_touch_sctrl_middle_ParamLimits

0xd2ad,	// (0x0001a1f4) aid_touch_sctrl_middle

0xd2ba,	// (0x0001a201) bg_sctrl_middle_pane_ParamLimits

0xd2ba,	// (0x0001a201) bg_sctrl_middle_pane

0x4249,	// (0x00011190) cell_sctrl_middle_pane_g1_ParamLimits

0x4249,	// (0x00011190) cell_sctrl_middle_pane_g1

0xd2c8,	// (0x0001a20f) cell_sctrl_middle_pane_g2_ParamLimits

0xd2c8,	// (0x0001a20f) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x0001cc5f) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x0001cc5f) cell_sctrl_middle_pane_g

0x6ab2,	// (0x000139f9) bg_sctrl_middle_pane_g1

0x6aba,	// (0x00013a01) bg_sctrl_middle_pane_g2

0x6ac2,	// (0x00013a09) bg_sctrl_middle_pane_g3

0x6aca,	// (0x00013a11) bg_sctrl_middle_pane_g4

0x6ad2,	// (0x00013a19) bg_sctrl_middle_pane_g5

0x6ada,	// (0x00013a21) bg_sctrl_middle_pane_g6

0x6ae2,	// (0x00013a29) bg_sctrl_middle_pane_g7

0x6aea,	// (0x00013a31) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x0001cc64) bg_sctrl_middle_pane_g

0x6af2,	// (0x00013a39) bg_sctrl_middle_pane_g8_copy1

0x6ab2,	// (0x000139f9) bg_sctrl_sk_pane_g1

0x6ac2,	// (0x00013a09) bg_sctrl_sk_pane_g2

0x6aba,	// (0x00013a01) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x0001c7a9) bg_sctrl_sk_pane_g

0x4e00,	// (0x00011d47) aid_size_touch_scroll_bar

0x6ad2,	// (0x00013a19) bg_sctrl_sk_pane_g4

0x6aca,	// (0x00013a11) bg_sctrl_sk_pane_g5

0x6ada,	// (0x00013a21) bg_sctrl_sk_pane_g6

0x6ae2,	// (0x00013a29) bg_sctrl_sk_pane_g7

0x6af2,	// (0x00013a39) bg_sctrl_sk_pane_g8

0x6aea,	// (0x00013a31) bg_sctrl_sk_pane_g9

0x2cf5,	// (0x0000fc3c) popup_fep_china_hwr2_fs_candidate_window

0xca9a,	// (0x000199e1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xca9a,	// (0x000199e1) popup_fep_china_hwr2_fs_control_window

0x3975,	// (0x000108bc) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x0001cc5a) sctrl_sk_top_pane_g

0x0f21,	// (0x0000de68) aid_fep_china_hwr2_fs_cell_ParamLimits

0x0f21,	// (0x0000de68) aid_fep_china_hwr2_fs_cell

0x0f35,	// (0x0000de7c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x0f35,	// (0x0000de7c) bg_popup_fep_shadow_pane_cp4

0x0f4c,	// (0x0000de93) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x0f4c,	// (0x0000de93) bg_popup_fep_shadow_pane_cp5

0x0f5e,	// (0x0000dea5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x0f5e,	// (0x0000dea5) popup_fep_china_hwr2_fs_control_bar_grid

0x0f72,	// (0x0000deb9) popup_fep_china_hwr2_fs_control_funtion_grid

0xb077,	// (0x00017fbe) aid_fep_china_hwr2_fs_candi_cell

0x456c,	// (0x000114b3) bg_popup_fep_shadow_pane_cp6

0xb081,	// (0x00017fc8) popup_fep_china_hwr2_fs_candidate_grid

0x0f7a,	// (0x0000dec1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x0f7a,	// (0x0000dec1) cell_fep_china_hwr2_fs_funtion_grid

0x95af,	// (0x000164f6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xb0a3,	// (0x00017fea) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xb0a3,	// (0x00017fea) cell_fep_china_hwr2_fs_funtion_grid_g1

0xb0b1,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xb0b1,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x0001cc75) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x0001cc75) cell_fep_china_hwr2_fs_funtion_grid_g

0x0f92,	// (0x0000ded9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x0f92,	// (0x0000ded9) cell_fep_china_hwr2_fs_funtion_grid_t1

0x0fa7,	// (0x0000deee) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x0fa7,	// (0x0000deee) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x0001cc7a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x0001cc7a) cell_fep_china_hwr2_fs_funtion_grid_t

0xb0f8,	// (0x0001803f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xb100,	// (0x00018047) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xb108,	// (0x0001804f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x0001cc7f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xb110,	// (0x00018057) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xb110,	// (0x00018057) cell_fep_china_hwr2_fs_candidate_grid

0xb129,	// (0x00018070) popup_fep_china_hwr2_fs_candidate_grid_g20

0xb131,	// (0x00018078) popup_fep_china_hwr2_fs_candidate_grid_g21

0x95af,	// (0x000164f6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x95af,	// (0x000164f6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001ca93) cell_fep_china_hwr2_fs_candidate_grid_g

0xb139,	// (0x00018080) cell_fep_china_hwr2_fs_candidate_grid_t1

0x669a,	// (0x000135e1) clock_nsta_pane_cp_24_ParamLimits

0x669a,	// (0x000135e1) clock_nsta_pane_cp_24

0x6718,	// (0x0001365f) indicator_nsta_pane_cp_24_ParamLimits

0x6718,	// (0x0001365f) indicator_nsta_pane_cp_24

0x78b5,	// (0x000147fc) heading_pane_g1

0x0001,

0xf8c7,	// (0x0001c80e) heading_pane_g

0x83b7,	// (0x000152fe) grid_sct_catagory_button_pane

0x83e7,	// (0x0001532e) scroll_pane_cp5_ParamLimits

0x9138,	// (0x0001607f) button_value_adjust_pane_cp5_ParamLimits

0x9138,	// (0x0001607f) button_value_adjust_pane_cp5

0x9232,	// (0x00016179) form2_midp_time_pane_ParamLimits

0xb147,	// (0x0001808e) cell_sct_catagory_button_pane_ParamLimits

0xb147,	// (0x0001808e) cell_sct_catagory_button_pane

0x9574,	// (0x000164bb) bg_button_pane_cp01_ParamLimits

0x9574,	// (0x000164bb) bg_button_pane_cp01

0x95af,	// (0x000164f6) cell_sct_catagory_button_pane_g1

0xcfe5,	// (0x00019f2c) popup_tb_extension_window

0x0fc3,	// (0x0000df0a) aid_size_cell_ext_ParamLimits

0x0fc3,	// (0x0000df0a) aid_size_cell_ext

0x4c42,	// (0x00011b89) bg_tb_trans_pane_cp1_ParamLimits

0x4c42,	// (0x00011b89) bg_tb_trans_pane_cp1

0x0fe9,	// (0x0000df30) grid_tb_ext_pane_ParamLimits

0x0fe9,	// (0x0000df30) grid_tb_ext_pane

0x102b,	// (0x0000df72) cell_tb_ext_pane_ParamLimits

0x102b,	// (0x0000df72) cell_tb_ext_pane

0x1053,	// (0x0000df9a) cell_tb_ext_pane_g1_ParamLimits

0x1053,	// (0x0000df9a) cell_tb_ext_pane_g1

0xb1df,	// (0x00018126) cell_tb_ext_pane_t1

0x4903,	// (0x0001184a) list_highlight_pane_cp11_ParamLimits

0x4903,	// (0x0001184a) list_highlight_pane_cp11

0xc7e9,	// (0x00019730) popup_uni_indicator_window_ParamLimits

0xc7e9,	// (0x00019730) popup_uni_indicator_window

0x541c,	// (0x00012363) bg_popup_sub_pane_cp14

0xb1fa,	// (0x00018141) list_uniindi_pane

0xb206,	// (0x0001814d) uniindi_top_pane

0x4903,	// (0x0001184a) bg_uniindi_top_pane

0xb225,	// (0x0001816c) uniindi_top_pane_g1

0xb23b,	// (0x00018182) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x0001cc86) uniindi_top_pane_g

0xb265,	// (0x000181ac) uniindi_top_pane_t1

0xb28f,	// (0x000181d6) list_single_uniindi_pane_ParamLimits

0xb28f,	// (0x000181d6) list_single_uniindi_pane

0x95af,	// (0x000164f6) bg_uniindi_top_pane_g1

0xb2a2,	// (0x000181e9) list_single_uniindi_pane_g1

0xb2b5,	// (0x000181fc) list_single_uniindi_pane_t1

0x237d,	// (0x0000f2c4) control_bg_pane

0xb2da,	// (0x00018221) bg_sctrl_sk_pane_cp1

0xb2e3,	// (0x0001822a) bg_sctrl_sk_pane_cp2

0xb2ec,	// (0x00018233) control_bg_pane_g1

0xb2f5,	// (0x0001823c) control_bg_pane_g2

0x0001,

0xfd48,	// (0x0001cc8f) control_bg_pane_g

0x8f73,	// (0x00015eba) cell_indicator_nsta_pane_g1_ParamLimits

0x04f9,	// (0x0000d440) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0001c9f7) cell_indicator_nsta_pane_g_ParamLimits

0x92b6,	// (0x000161fd) form2_midp_time_pane_t1_ParamLimits

0x3710,	// (0x00010657) main_idle_act4_pane_ParamLimits

0x3710,	// (0x00010657) main_idle_act4_pane

0xcfe5,	// (0x00019f2c) popup_tb_extension_window_ParamLimits

0x1011,	// (0x0000df58) tb_ext_find_pane_ParamLimits

0x1011,	// (0x0000df58) tb_ext_find_pane

0xb2fe,	// (0x00018245) ai_gene_pane_1_cp1

0x638f,	// (0x000132d6) ai_gene_pane_2_cp1

0xb306,	// (0x0001824d) list_single_idle_plugin_calendar_pane

0xb30f,	// (0x00018256) list_single_idle_plugin_notification_pane

0xb318,	// (0x0001825f) list_single_idle_plugin_player_pane

0x1070,	// (0x0000dfb7) list_single_idle_plugin_shortcut_pane_ParamLimits

0x1070,	// (0x0000dfb7) list_single_idle_plugin_shortcut_pane

0x1098,	// (0x0000dfdf) main_idle_act4_pane_t1

0x10ae,	// (0x0000dff5) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x0001cc94) main_idle_act4_pane_t

0x10c6,	// (0x0000e00d) middle_sk_idle_act4_pane_ParamLimits

0x10c6,	// (0x0000e00d) middle_sk_idle_act4_pane

0x10e2,	// (0x0000e029) popup_clock_digital_analogue_window_cp2

0x1109,	// (0x0000e050) shortcut_wheel_idle_act4_pane_ParamLimits

0x1109,	// (0x0000e050) shortcut_wheel_idle_act4_pane

0x95af,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g1

0x95af,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g2

0x95af,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g3

0x95af,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g4

0x95af,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g5

0xb3ab,	// (0x000182f2) shortcut_wheel_idle_act4_pane_g6

0xb3b3,	// (0x000182fa) shortcut_wheel_idle_act4_pane_g7

0xb3bb,	// (0x00018302) shortcut_wheel_idle_act4_pane_g8

0xb3c3,	// (0x0001830a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x0001cc99) shortcut_wheel_idle_act4_pane_g

0xd730,	// (0x0001a677) middle_sk_idle_act4_pane_g1_ParamLimits

0xd730,	// (0x0001a677) middle_sk_idle_act4_pane_g1

0x1186,	// (0x0000e0cd) middle_sk_idle_act4_pane_g2_ParamLimits

0x1186,	// (0x0000e0cd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x0001ccbc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x0001ccbc) middle_sk_idle_act4_pane_g

0x119e,	// (0x0000e0e5) middle_sk_idle_act4_pane_t1_ParamLimits

0x119e,	// (0x0000e0e5) middle_sk_idle_act4_pane_t1

0x11cd,	// (0x0000e114) grid_ai_shortcut_pane_ParamLimits

0x11cd,	// (0x0000e114) grid_ai_shortcut_pane

0x11ea,	// (0x0000e131) list_highlight_pane_cp16_ParamLimits

0x11ea,	// (0x0000e131) list_highlight_pane_cp16

0x11f7,	// (0x0000e13e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x11f7,	// (0x0000e13e) list_single_idle_plugin_shortcut_pane_g1

0x1203,	// (0x0000e14a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x1203,	// (0x0000e14a) list_single_idle_plugin_shortcut_pane_g2

0x121f,	// (0x0000e166) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x121f,	// (0x0000e166) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x0001ccc1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x0001ccc1) list_single_idle_plugin_shortcut_pane_g

0x1234,	// (0x0000e17b) cell_ai_shortcut_pane_ParamLimits

0x1234,	// (0x0000e17b) cell_ai_shortcut_pane

0x124a,	// (0x0000e191) cell_ai_shortcut_pane_g1_ParamLimits

0x124a,	// (0x0000e191) cell_ai_shortcut_pane_g1

0xb2fe,	// (0x00018245) ai_gene_pane_1_cp2

0xb4f0,	// (0x00018437) ai_gene_pane_2_cp2

0xb4f8,	// (0x0001843f) list_highlight_pane_cp15

0xb501,	// (0x00018448) list_single_idle_plugin_calendar_pane_g1

0xb4f8,	// (0x0001843f) list_highlight_pane_cp17

0xb509,	// (0x00018450) list_single_idle_plugin_calendar_pane_g1_copy1

0xb511,	// (0x00018458) list_single_idle_plugin_player_pane_g1

0x8650,	// (0x00015597) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x0001ccc8) list_single_idle_plugin_player_pane_g

0xb519,	// (0x00018460) list_single_idle_plugin_player_pane_t1

0xb527,	// (0x0001846e) list_single_idle_plugin_player_pane_t2

0xb535,	// (0x0001847c) list_single_idle_plugin_player_pane_t3

0xb543,	// (0x0001848a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x0001cccd) list_single_idle_plugin_player_pane_t

0xb551,	// (0x00018498) wait_bar_pane_cp15

0xb559,	// (0x000184a0) grid_ai_notification_pane

0x8650,	// (0x00015597) list_single_idle_plugin_notification_pane_g1

0x126c,	// (0x0000e1b3) cell_ai_notification_pane_ParamLimits

0x126c,	// (0x0000e1b3) cell_ai_notification_pane

0xb56f,	// (0x000184b6) cell_ai_notification_pane_g1

0xb577,	// (0x000184be) cell_ai_notification_pane_t1

0x1279,	// (0x0000e1c0) tb_ext_find_button_pane

0x1281,	// (0x0000e1c8) tb_ext_find_pane_g1

0x1289,	// (0x0000e1d0) tb_ext_find_pane_t1

0x5bcc,	// (0x00012b13) tb_ext_find_button_pane_g1

0xb5a3,	// (0x000184ea) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x0001ccd6) tb_ext_find_button_pane_g

0x1098,	// (0x0000dfdf) main_idle_act4_pane_t1_ParamLimits

0x10ae,	// (0x0000dff5) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x0001cc94) main_idle_act4_pane_t_ParamLimits

0x10e2,	// (0x0000e029) popup_clock_digital_analogue_window_cp2_ParamLimits

0x10f9,	// (0x0000e040) sat_plugin_idle_act4_pane_ParamLimits

0x10f9,	// (0x0000e040) sat_plugin_idle_act4_pane

0x1297,	// (0x0000e1de) sat_plugin_idle_act4_pane_t1_ParamLimits

0x1297,	// (0x0000e1de) sat_plugin_idle_act4_pane_t1

0x12af,	// (0x0000e1f6) sat_plugin_idle_act4_pane_t2_ParamLimits

0x12af,	// (0x0000e1f6) sat_plugin_idle_act4_pane_t2

0x12c7,	// (0x0000e20e) sat_plugin_idle_act4_pane_t3_ParamLimits

0x12c7,	// (0x0000e20e) sat_plugin_idle_act4_pane_t3

0x12df,	// (0x0000e226) sat_plugin_idle_act4_pane_t4_ParamLimits

0x12df,	// (0x0000e226) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x0001ccdb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x0001ccdb) sat_plugin_idle_act4_pane_t

0x2442,	// (0x0000f389) popup_battery_window_ParamLimits

0x2442,	// (0x0000f389) popup_battery_window

0x4903,	// (0x0001184a) bg_popup_sub_pane_cp25_ParamLimits

0x4903,	// (0x0001184a) bg_popup_sub_pane_cp25

0xb5f8,	// (0x0001853f) popup_battery_window_g1_ParamLimits

0xb5f8,	// (0x0001853f) popup_battery_window_g1

0xb604,	// (0x0001854b) popup_battery_window_t1_ParamLimits

0xb604,	// (0x0001854b) popup_battery_window_t1

0xb616,	// (0x0001855d) popup_battery_window_t2_ParamLimits

0xb616,	// (0x0001855d) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x0001cce4) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x0001cce4) popup_battery_window_t

0xef68,	// (0x0001beaf) midp_canvas_pane_ParamLimits

0xefc5,	// (0x0001bf0c) midp_keypad_pane_ParamLimits

0xefc5,	// (0x0001bf0c) midp_keypad_pane

0x6596,	// (0x000134dd) main_midp_pane_ParamLimits

0x8ff6,	// (0x00015f3d) signal_pane_g2_cp_ParamLimits

0x12f7,	// (0x0000e23e) aid_size_cell_midp_keypad_ParamLimits

0x12f7,	// (0x0000e23e) aid_size_cell_midp_keypad

0x1315,	// (0x0000e25c) midp_keyp_game_grid_pane_ParamLimits

0x1315,	// (0x0000e25c) midp_keyp_game_grid_pane

0x133c,	// (0x0000e283) midp_keyp_rocker_pane_ParamLimits

0x133c,	// (0x0000e283) midp_keyp_rocker_pane

0x1385,	// (0x0000e2cc) midp_keyp_sk_left_pane_ParamLimits

0x1385,	// (0x0000e2cc) midp_keyp_sk_left_pane

0x13d7,	// (0x0000e31e) midp_keyp_sk_right_pane_ParamLimits

0x13d7,	// (0x0000e31e) midp_keyp_sk_right_pane

0x456c,	// (0x000114b3) bg_button_pane_cp03

0x1429,	// (0x0000e370) midp_keyp_sk_left_pane_g1

0x456c,	// (0x000114b3) bg_button_pane_cp04

0x1429,	// (0x0000e370) midp_keyp_sk_right_pane_g1

0x95af,	// (0x000164f6) midp_keyp_rocker_pane_g1

0x1432,	// (0x0000e379) keyp_game_cell_pane_ParamLimits

0x1432,	// (0x0000e379) keyp_game_cell_pane

0x456c,	// (0x000114b3) bg_button_pane_cp02

0x1456,	// (0x0000e39d) keyp_game_cell_pane_g1

0xc784,	// (0x000196cb) popup_fep_vkb2_window_ParamLimits

0xc784,	// (0x000196cb) popup_fep_vkb2_window

0xd2d4,	// (0x0001a21b) aid_size_cell_vkb2_ParamLimits

0xd2d4,	// (0x0001a21b) aid_size_cell_vkb2

0xd30a,	// (0x0001a251) popup_fep_vkb2_window_g1_ParamLimits

0xd30a,	// (0x0001a251) popup_fep_vkb2_window_g1

0xd35a,	// (0x0001a2a1) vkb2_area_bottom_pane_ParamLimits

0xd35a,	// (0x0001a2a1) vkb2_area_bottom_pane

0xd3ae,	// (0x0001a2f5) vkb2_area_keypad_pane_ParamLimits

0xd3ae,	// (0x0001a2f5) vkb2_area_keypad_pane

0xd3f6,	// (0x0001a33d) vkb2_area_top_pane_ParamLimits

0xd3f6,	// (0x0001a33d) vkb2_area_top_pane

0xd47c,	// (0x0001a3c3) vkb2_top_entry_pane_ParamLimits

0xd47c,	// (0x0001a3c3) vkb2_top_entry_pane

0xd4a9,	// (0x0001a3f0) vkb2_top_grid_left_pane_ParamLimits

0xd4a9,	// (0x0001a3f0) vkb2_top_grid_left_pane

0xd4c9,	// (0x0001a410) vkb2_top_grid_right_pane_ParamLimits

0xd4c9,	// (0x0001a410) vkb2_top_grid_right_pane

0x3e44,	// (0x00010d8b) vkb2_cell_keypad_pane_ParamLimits

0x3e44,	// (0x00010d8b) vkb2_cell_keypad_pane

0xd50f,	// (0x0001a456) vkb2_area_bottom_grid_pane_ParamLimits

0xd50f,	// (0x0001a456) vkb2_area_bottom_grid_pane

0xd539,	// (0x0001a480) vkb2_area_bottom_pane_g1_ParamLimits

0xd539,	// (0x0001a480) vkb2_area_bottom_pane_g1

0xd55f,	// (0x0001a4a6) vkb2_area_bottom_pane_g2_ParamLimits

0xd55f,	// (0x0001a4a6) vkb2_area_bottom_pane_g2

0xd590,	// (0x0001a4d7) vkb2_area_bottom_pane_g3_ParamLimits

0xd590,	// (0x0001a4d7) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x0001cce9) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x0001cce9) vkb2_area_bottom_pane_g

0x3fee,	// (0x00010f35) vkb2_top_cell_left_pane_ParamLimits

0x3fee,	// (0x00010f35) vkb2_top_cell_left_pane

0x1785,	// (0x0000e6cc) vkb2_top_entry_pane_g1_ParamLimits

0x1785,	// (0x0000e6cc) vkb2_top_entry_pane_g1

0x1793,	// (0x0000e6da) vkb2_top_entry_pane_t1_ParamLimits

0x1793,	// (0x0000e6da) vkb2_top_entry_pane_t1

0xb7bf,	// (0x00018706) vkb2_top_entry_pane_t2_ParamLimits

0xb7bf,	// (0x00018706) vkb2_top_entry_pane_t2

0xb7f1,	// (0x00018738) vkb2_top_entry_pane_t3_ParamLimits

0xb7f1,	// (0x00018738) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x0001ccf0) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x0001ccf0) vkb2_top_entry_pane_t

0xd5fa,	// (0x0001a541) vkb2_top_grid_right_pane_g1_ParamLimits

0xd5fa,	// (0x0001a541) vkb2_top_grid_right_pane_g1

0x4051,	// (0x00010f98) vkb2_top_grid_right_pane_g2_ParamLimits

0x4051,	// (0x00010f98) vkb2_top_grid_right_pane_g2

0x4069,	// (0x00010fb0) vkb2_top_grid_right_pane_g3_ParamLimits

0x4069,	// (0x00010fb0) vkb2_top_grid_right_pane_g3

0xd610,	// (0x0001a557) vkb2_top_grid_right_pane_g4_ParamLimits

0xd610,	// (0x0001a557) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x0001ccf7) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x0001ccf7) vkb2_top_grid_right_pane_g

0x4097,	// (0x00010fde) vkb2_top_cell_left_pane_g1

0x40ae,	// (0x00010ff5) vkb2_cell_keypad_pane_g1_ParamLimits

0x40ae,	// (0x00010ff5) vkb2_cell_keypad_pane_g1

0xb815,	// (0x0001875c) vkb2_cell_keypad_pane_t1_ParamLimits

0xb815,	// (0x0001875c) vkb2_cell_keypad_pane_t1

0x40bc,	// (0x00011003) vkb2_cell_bottom_grid_pane_ParamLimits

0x40bc,	// (0x00011003) vkb2_cell_bottom_grid_pane

0x40f5,	// (0x0001103c) vkb2_cell_bottom_grid_pane_g1

0x112a,	// (0x0000e071) aid_call2_pane_cp02

0x1132,	// (0x0000e079) aid_call_pane_cp02

0x113a,	// (0x0000e081) clock_digital_number_pane_cp10

0x1142,	// (0x0000e089) clock_digital_number_pane_cp11

0x114a,	// (0x0000e091) clock_digital_number_pane_cp12

0x1152,	// (0x0000e099) clock_digital_number_pane_cp13

0x115a,	// (0x0000e0a1) clock_digital_separator_pane_cp10

0x5bcc,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g1

0x5bcc,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g2

0x1162,	// (0x0000e0a9) popup_clock_digital_analogue_window_cp2_g3

0x5bcc,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g4

0x1162,	// (0x0000e0a9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x0001ccac) popup_clock_digital_analogue_window_cp2_g

0x116a,	// (0x0000e0b1) popup_clock_digital_analogue_window_cp2_t1

0x1178,	// (0x0000e0bf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x0001ccb7) popup_clock_digital_analogue_window_cp2_t

0x95af,	// (0x000164f6) clock_digital_number_pane_cp10_g1

0x95af,	// (0x000164f6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001ca93) clock_digital_number_pane_cp10_g

0x95af,	// (0x000164f6) clock_digital_separator_pane_cp10_g1

0x95af,	// (0x000164f6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001ca93) clock_digital_separator_pane_cp10_g

0xb247,	// (0x0001818e) uniindi_top_pane_g3

0xb258,	// (0x0001819f) uniindi_top_pane_g4

0x3ecf,	// (0x00010e16) vkb2_row_keypad_pane_ParamLimits

0x3ecf,	// (0x00010e16) vkb2_row_keypad_pane

0x4115,	// (0x0001105c) vkb2_cell_t_keypad_pane_ParamLimits

0x4115,	// (0x0001105c) vkb2_cell_t_keypad_pane

0x4125,	// (0x0001106c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x4125,	// (0x0001106c) vkb2_cell_t_keypad_pane_cp08

0x4138,	// (0x0001107f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x4138,	// (0x0001107f) vkb2_cell_t_keypad_pane_cp09

0x414c,	// (0x00011093) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x414c,	// (0x00011093) vkb2_cell_t_keypad_pane_cp01

0x415d,	// (0x000110a4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x415d,	// (0x000110a4) vkb2_cell_t_keypad_pane_cp02

0x416e,	// (0x000110b5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x416e,	// (0x000110b5) vkb2_cell_t_keypad_pane_cp03

0x417f,	// (0x000110c6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x417f,	// (0x000110c6) vkb2_cell_t_keypad_pane_cp04

0x4190,	// (0x000110d7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x4190,	// (0x000110d7) vkb2_cell_t_keypad_pane_cp05

0x41a1,	// (0x000110e8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x41a1,	// (0x000110e8) vkb2_cell_t_keypad_pane_cp06

0x41b2,	// (0x000110f9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x41b2,	// (0x000110f9) vkb2_cell_t_keypad_pane_cp07

0x41c3,	// (0x0001110a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x41c3,	// (0x0001110a) vkb2_cell_t_keypad_pane_cp10

0x3975,	// (0x000108bc) vkb2_cell_t_keypad_pane_g1

0xb82c,	// (0x00018773) vkb2_cell_t_keypad_pane_t1

0x237d,	// (0x0000f2c4) popup_grid_graphic2_window

0x17f8,	// (0x0000e73f) aid_size_cell_graphic2_ParamLimits

0x17f8,	// (0x0000e73f) aid_size_cell_graphic2

0x1836,	// (0x0000e77d) bg_popup_window_pane_cp21_ParamLimits

0x1836,	// (0x0000e77d) bg_popup_window_pane_cp21

0x1844,	// (0x0000e78b) graphic2_pages_pane_ParamLimits

0x1844,	// (0x0000e78b) graphic2_pages_pane

0x189a,	// (0x0000e7e1) grid_graphic2_control_pane_ParamLimits

0x189a,	// (0x0000e7e1) grid_graphic2_control_pane

0x18e2,	// (0x0000e829) grid_graphic2_pane_ParamLimits

0x18e2,	// (0x0000e829) grid_graphic2_pane

0x1969,	// (0x0000e8b0) cell_graphic2_pane

0x237d,	// (0x0000f2c4) main_comp_mode_pane

0xaa59,	// (0x000179a0) list_ai3_gene_pane_ParamLimits

0x0dfe,	// (0x0000dd45) bg_popup_window_pane_cp19_ParamLimits

0xae99,	// (0x00017de0) bg_touch_area_indi_pane_ParamLimits

0xae99,	// (0x00017de0) bg_touch_area_indi_pane

0xaeaf,	// (0x00017df6) bg_touch_area_indi_pane_cp01_ParamLimits

0xaeaf,	// (0x00017df6) bg_touch_area_indi_pane_cp01

0xaec5,	// (0x00017e0c) bg_touch_area_indi_pane_cp02_ParamLimits

0xaec5,	// (0x00017e0c) bg_touch_area_indi_pane_cp02

0xaedd,	// (0x00017e24) bg_touch_area_indi_pane_cp03_ParamLimits

0xaedd,	// (0x00017e24) bg_touch_area_indi_pane_cp03

0xaef7,	// (0x00017e3e) popup_slider_window_g1_ParamLimits

0xaf13,	// (0x00017e5a) popup_slider_window_g2_ParamLimits

0xaf2f,	// (0x00017e76) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x0001cc41) popup_slider_window_g_ParamLimits

0xaf8b,	// (0x00017ed2) popup_slider_window_t1_ParamLimits

0xafff,	// (0x00017f46) small_volume_slider_vertical_pane_ParamLimits

0x1969,	// (0x0000e8b0) cell_graphic2_pane_ParamLimits

0x19c6,	// (0x0000e90d) bg_button_pane_cp10_ParamLimits

0x19c6,	// (0x0000e90d) bg_button_pane_cp10

0x19d9,	// (0x0000e920) bg_button_pane_cp11_ParamLimits

0x19d9,	// (0x0000e920) bg_button_pane_cp11

0x19ec,	// (0x0000e933) graphic2_pages_pane_g1_ParamLimits

0x19ec,	// (0x0000e933) graphic2_pages_pane_g1

0x1a07,	// (0x0000e94e) graphic2_pages_pane_g2_ParamLimits

0x1a07,	// (0x0000e94e) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x0001cd05) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x0001cd05) graphic2_pages_pane_g

0x1a1f,	// (0x0000e966) graphic2_pages_pane_t1_ParamLimits

0x1a1f,	// (0x0000e966) graphic2_pages_pane_t1

0x1a37,	// (0x0000e97e) cell_graphic2_control_pane_ParamLimits

0x1a37,	// (0x0000e97e) cell_graphic2_control_pane

0x1a69,	// (0x0000e9b0) cell_graphic2_pane_g1_ParamLimits

0x1a69,	// (0x0000e9b0) cell_graphic2_pane_g1

0xd73e,	// (0x0001a685) cell_graphic2_pane_g2_ParamLimits

0xd73e,	// (0x0001a685) cell_graphic2_pane_g2

0x1a76,	// (0x0000e9bd) cell_graphic2_pane_g3_ParamLimits

0x1a76,	// (0x0000e9bd) cell_graphic2_pane_g3

0xd74b,	// (0x0001a692) cell_graphic2_pane_g4_ParamLimits

0xd74b,	// (0x0001a692) cell_graphic2_pane_g4

0x1a83,	// (0x0000e9ca) cell_graphic2_pane_g5_ParamLimits

0x1a83,	// (0x0000e9ca) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x0001cd0a) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x0001cd0a) cell_graphic2_pane_g

0x1aa3,	// (0x0000e9ea) cell_graphic2_pane_t1_ParamLimits

0x1aa3,	// (0x0000e9ea) cell_graphic2_pane_t1

0x78a9,	// (0x000147f0) grid_highlight_pane_cp11_ParamLimits

0x78a9,	// (0x000147f0) grid_highlight_pane_cp11

0x4903,	// (0x0001184a) bg_button_pane_cp05

0x1ad7,	// (0x0000ea1e) cell_graphic2_control_pane_g1

0x95af,	// (0x000164f6) bg_touch_area_indi_pane_g1

0xbafa,	// (0x00018a41) aid_cmod_rocker_key_size

0xbb04,	// (0x00018a4b) aid_cmode_itu_key_size

0xbb0e,	// (0x00018a55) main_cmode_video_pane

0xbb18,	// (0x00018a5f) main_comp_mode_itu_pane

0xbb24,	// (0x00018a6b) main_comp_mode_rocker_pane

0xbb30,	// (0x00018a77) cell_cmode_rocker_pane_ParamLimits

0xbb30,	// (0x00018a77) cell_cmode_rocker_pane

0xbb42,	// (0x00018a89) cell_cmode_itu_pane_ParamLimits

0xbb42,	// (0x00018a89) cell_cmode_itu_pane

0x541c,	// (0x00012363) bg_button_pane_cp06_ParamLimits

0x541c,	// (0x00012363) bg_button_pane_cp06

0x981d,	// (0x00016764) cell_cmode_rocker_pane_g1_ParamLimits

0x981d,	// (0x00016764) cell_cmode_rocker_pane_g1

0xb0a3,	// (0x00017fea) cell_cmode_rocker_pane_g2_ParamLimits

0xb0a3,	// (0x00017fea) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x0001cd1a) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x0001cd1a) cell_cmode_rocker_pane_g

0x456c,	// (0x000114b3) bg_button_pane_cp07

0xbb57,	// (0x00018a9e) cell_cmode_itu_pane_g1

0xbb60,	// (0x00018aa7) cell_cmode_itu_pane_t1

0xbb6e,	// (0x00018ab5) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x0001cd1f) cell_cmode_itu_pane_t

0xb2ca,	// (0x00018211) aid_touch_ctrl_left

0xb2d2,	// (0x00018219) aid_touch_ctrl_right

0x456c,	// (0x000114b3) compa_mode_pane

0x1afb,	// (0x0000ea42) aid_cmod_rocker_key_size_cp

0x1b05,	// (0x0000ea4c) aid_cmode_itu_key_size_cp

0xbb90,	// (0x00018ad7) compa_mode_pane_g1

0xbb98,	// (0x00018adf) compa_mode_pane_g2

0xbba0,	// (0x00018ae7) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x0001cd24) compa_mode_pane_g

0x1b0f,	// (0x0000ea56) main_comp_mode_itu_pane_cp

0x1b17,	// (0x0000ea5e) main_comp_mode_rocker_pane_cp

0x1b1f,	// (0x0000ea66) cell_cmode_itu_pane_cp_ParamLimits

0x1b1f,	// (0x0000ea66) cell_cmode_itu_pane_cp

0x1b34,	// (0x0000ea7b) cell_cmode_rocker_pane_cp_ParamLimits

0x1b34,	// (0x0000ea7b) cell_cmode_rocker_pane_cp

0x541c,	// (0x00012363) bg_button_pane_cp06_cp_ParamLimits

0x541c,	// (0x00012363) bg_button_pane_cp06_cp

0x981d,	// (0x00016764) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x981d,	// (0x00016764) cell_cmode_rocker_pane_g1_cp

0x95af,	// (0x000164f6) cell_cmode_rocker_pane_g2_cp

0x456c,	// (0x000114b3) bg_button_pane_cp07_cp

0x1b46,	// (0x0000ea8d) cell_cmode_itu_pane_g1_cp

0x1b4f,	// (0x0000ea96) cell_cmode_itu_pane_t1_cp

0x1b4f,	// (0x0000ea96) cell_cmode_itu_pane_t2_cp

0x0301,	// (0x0000d248) settings_code_pane_cp2

0x4660,	// (0x000115a7) bg_popup_window_pane_cp3_ParamLimits

0x4ad1,	// (0x00011a18) heading_pane_cp3_ParamLimits

0x4add,	// (0x00011a24) listscroll_popup_graphic_pane_ParamLimits

0x371e,	// (0x00010665) fep_hwr_aid_pane_ParamLimits

0x3b95,	// (0x00010adc) aid_touch_sctrl_top_ParamLimits

0x3bb0,	// (0x00010af7) sctrl_sk_top_pane_g1_ParamLimits

0x3975,	// (0x000108bc) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x0001cc5a) sctrl_sk_top_pane_g_ParamLimits

0x3bbd,	// (0x00010b04) sctrl_sk_top_pane_t1_ParamLimits

0x3b95,	// (0x00010adc) aid_touch_sctrl_bottom_ParamLimits

0x3bbd,	// (0x00010b04) sctrl_sk_bottom_pane_t1_ParamLimits

0xb213,	// (0x0001815a) aid_area_touch_clock

0xd43e,	// (0x0001a385) aid_vkb2_area_top_pane_cell_ParamLimits

0xd43e,	// (0x0001a385) aid_vkb2_area_top_pane_cell

0xd4e9,	// (0x0001a430) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd4e9,	// (0x0001a430) aid_vkb2_area_bottom_pane_cell

0xb777,	// (0x000186be) popup_char_count_window

0xbbf6,	// (0x00018b3d) popup_char_count_window_g1

0xbbff,	// (0x00018b46) popup_char_count_window_g2

0xbc08,	// (0x00018b4f) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x0001cd2b) popup_char_count_window_g

0xbc11,	// (0x00018b58) popup_char_count_window_t1

0x3c6c,	// (0x00010bb3) popup_fep_char_preview_window_ParamLimits

0x3c6c,	// (0x00010bb3) popup_fep_char_preview_window

0xd45e,	// (0x0001a3a5) vkb2_top_candi_pane_ParamLimits

0xd45e,	// (0x0001a3a5) vkb2_top_candi_pane

0x1b5d,	// (0x0000eaa4) cell_vkb2_top_candi_pane_ParamLimits

0x1b5d,	// (0x0000eaa4) cell_vkb2_top_candi_pane

0x41d8,	// (0x0001111f) bg_popup_fep_char_preview_window_ParamLimits

0x41d8,	// (0x0001111f) bg_popup_fep_char_preview_window

0x41e6,	// (0x0001112d) popup_fep_char_preview_window_t1_ParamLimits

0x41e6,	// (0x0001112d) popup_fep_char_preview_window_t1

0xbc6c,	// (0x00018bb3) bg_popup_fep_char_preview_window_g1

0xbc74,	// (0x00018bbb) bg_popup_fep_char_preview_window_g2

0xbc7c,	// (0x00018bc3) bg_popup_fep_char_preview_window_g3

0xbc84,	// (0x00018bcb) bg_popup_fep_char_preview_window_g4

0xbc8c,	// (0x00018bd3) bg_popup_fep_char_preview_window_g5

0x4220,	// (0x00011167) bg_popup_fep_char_preview_window_g6

0xbc94,	// (0x00018bdb) bg_popup_fep_char_preview_window_g7

0xbc9c,	// (0x00018be3) bg_popup_fep_char_preview_window_g8

0xbcc5,	// (0x00018c0c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x0001cd32) bg_popup_fep_char_preview_window_g

0x3975,	// (0x000108bc) cell_vkb2_top_candi_pane_g1_ParamLimits

0x3975,	// (0x000108bc) cell_vkb2_top_candi_pane_g1

0x3983,	// (0x000108ca) cell_vkb2_top_candi_pane_g2_ParamLimits

0x3983,	// (0x000108ca) cell_vkb2_top_candi_pane_g2

0xbca4,	// (0x00018beb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbca4,	// (0x00018beb) cell_vkb2_top_candi_pane_g3

0x4228,	// (0x0001116f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x4228,	// (0x0001116f) cell_vkb2_top_candi_pane_g4

0x9e8e,	// (0x00016dd5) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9e8e,	// (0x00016dd5) cell_vkb2_top_candi_pane_g5

0x4249,	// (0x00011190) cell_vkb2_top_candi_pane_g6_ParamLimits

0x4249,	// (0x00011190) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0001cd45) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0001cd45) cell_vkb2_top_candi_pane_g

0x4257,	// (0x0001119e) cell_vkb2_top_candi_pane_t1

0x355a,	// (0x000104a1) aid_size_touch_slider_mark_ParamLimits

0x355a,	// (0x000104a1) aid_size_touch_slider_mark

0x1880,	// (0x0000e7c7) grid_graphic2_catg_pane_ParamLimits

0x1880,	// (0x0000e7c7) grid_graphic2_catg_pane

0x193c,	// (0x0000e883) popup_grid_graphic2_window_t1_ParamLimits

0x193c,	// (0x0000e883) popup_grid_graphic2_window_t1

0x1952,	// (0x0000e899) popup_grid_graphic2_window_t2_ParamLimits

0x1952,	// (0x0000e899) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x0001cd00) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x0001cd00) popup_grid_graphic2_window_t

0x4903,	// (0x0001184a) bg_button_pane_cp05_ParamLimits

0x1ad7,	// (0x0000ea1e) cell_graphic2_control_pane_g1_ParamLimits

0x1bc3,	// (0x0000eb0a) cell_graphic2_catg_pane_ParamLimits

0x1bc3,	// (0x0000eb0a) cell_graphic2_catg_pane

0x456c,	// (0x000114b3) bg_button_pane_cp12

0x1bd5,	// (0x0000eb1c) cell_graphic2_catg_pane_g1

0xb1df,	// (0x00018126) cell_tb_ext_pane_t1_ParamLimits

0x400e,	// (0x00010f55) vkb2_top_cell_right_narrow_pane_ParamLimits

0x400e,	// (0x00010f55) vkb2_top_cell_right_narrow_pane

0x4026,	// (0x00010f6d) vkb2_top_cell_right_wide_pane_ParamLimits

0x4026,	// (0x00010f6d) vkb2_top_cell_right_wide_pane

0x3710,	// (0x00010657) bg_vkb2_func_pane_ParamLimits

0x3710,	// (0x00010657) bg_vkb2_func_pane

0x4097,	// (0x00010fde) vkb2_top_cell_left_pane_g1_ParamLimits

0x3710,	// (0x00010657) bg_vkb2_fuc_pane_cp03_ParamLimits

0x3710,	// (0x00010657) bg_vkb2_fuc_pane_cp03

0x40f5,	// (0x0001103c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x6aba,	// (0x00013a01) bg_vkb2_func_pane_g1

0x6ac2,	// (0x00013a09) bg_vkb2_func_pane_g2

0x6ad2,	// (0x00013a19) bg_vkb2_func_pane_g3

0x6aca,	// (0x00013a11) bg_vkb2_func_pane_g4

0x6ada,	// (0x00013a21) bg_vkb2_func_pane_g5

0x6ae2,	// (0x00013a29) bg_vkb2_func_pane_g6

0x6aea,	// (0x00013a31) bg_vkb2_func_pane_g7

0x6af2,	// (0x00013a39) bg_vkb2_func_pane_g8

0x6ab2,	// (0x000139f9) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x0001cd52) bg_vkb2_func_pane_g

0x3710,	// (0x00010657) bg_vkb2_fuc_pane_cp01_ParamLimits

0x3710,	// (0x00010657) bg_vkb2_fuc_pane_cp01

0x4097,	// (0x00010fde) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x4097,	// (0x00010fde) vkb2_top_cell_right_wide_pane_g1

0x3710,	// (0x00010657) bg_vkb2_fuc_pane_cp02_ParamLimits

0x3710,	// (0x00010657) bg_vkb2_fuc_pane_cp02

0x40f5,	// (0x0001103c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x40f5,	// (0x0001103c) vkb2_top_cell_right_narrow_pane_g1

0x0d38,	// (0x0000dc7f) aid_touch_area_decrease_ParamLimits

0x0d38,	// (0x0000dc7f) aid_touch_area_decrease

0x0d72,	// (0x0000dcb9) aid_touch_area_increase_ParamLimits

0x0d72,	// (0x0000dcb9) aid_touch_area_increase

0x0d9a,	// (0x0000dce1) aid_touch_area_mute_ParamLimits

0x0d9a,	// (0x0000dce1) aid_touch_area_mute

0x0dca,	// (0x0000dd11) aid_touch_area_slider_ParamLimits

0x0dca,	// (0x0000dd11) aid_touch_area_slider

0x0e0a,	// (0x0000dd51) popup_slider_window_g4_ParamLimits

0x0e0a,	// (0x0000dd51) popup_slider_window_g4

0x0e32,	// (0x0000dd79) popup_slider_window_g5_ParamLimits

0x0e32,	// (0x0000dd79) popup_slider_window_g5

0x0e66,	// (0x0000ddad) popup_slider_window_g6_ParamLimits

0x0e66,	// (0x0000ddad) popup_slider_window_g6

0xafb9,	// (0x00017f00) popup_slider_window_t2_ParamLimits

0xafb9,	// (0x00017f00) popup_slider_window_t2

0x0001,

0xfd07,	// (0x0001cc4e) popup_slider_window_t_ParamLimits

0xfd07,	// (0x0001cc4e) popup_slider_window_t

0x0e82,	// (0x0000ddc9) slider_pane_ParamLimits

0x0e82,	// (0x0000ddc9) slider_pane

0xd758,	// (0x0001a69f) slider_pane_g1_ParamLimits

0xd758,	// (0x0001a69f) slider_pane_g1

0xd76c,	// (0x0001a6b3) slider_pane_g2_ParamLimits

0xd76c,	// (0x0001a6b3) slider_pane_g2

0xd782,	// (0x0001a6c9) slider_pane_g3_ParamLimits

0xd782,	// (0x0001a6c9) slider_pane_g3

0x0003,

0xfe1e,	// (0x0001cd65) slider_pane_g_ParamLimits

0xfe1e,	// (0x0001cd65) slider_pane_g

0xd02d,	// (0x00019f74) popup_tb_float_extension_window_ParamLimits

0xd02d,	// (0x00019f74) popup_tb_float_extension_window

0xd7ae,	// (0x0001a6f5) aid_size_cell_tb_float_ext

0x456c,	// (0x000114b3) bg_popup_sub_window_cp28

0xd7ba,	// (0x0001a701) grid_tb_float_ext_pane

0xd7c4,	// (0x0001a70b) cell_tb_float_ext_pane_ParamLimits

0xd7c4,	// (0x0001a70b) cell_tb_float_ext_pane

0xd7de,	// (0x0001a725) cell_tb_float_ext_pane_g1

0xd7e7,	// (0x0001a72e) grid_highlight_pane_cp12

0xd247,	// (0x0001a18e) cell_last_hwr_side_pane_ParamLimits

0xd247,	// (0x0001a18e) cell_last_hwr_side_pane

0x95af,	// (0x000164f6) cell_last_hwr_side_pane_g1

0xd7f0,	// (0x0001a737) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x0001cd6e) cell_last_hwr_side_pane_g

0xd5c5,	// (0x0001a50c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd5c5,	// (0x0001a50c) vkb2_area_bottom_space_btn_pane

0x3975,	// (0x000108bc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xb82c,	// (0x00018773) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x4257,	// (0x0001119e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x4276,	// (0x000111bd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x4276,	// (0x000111bd) vkb2_area_bottom_space_btn_pane_g1

0x42b0,	// (0x000111f7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x42b0,	// (0x000111f7) vkb2_area_bottom_space_btn_pane_g2

0x42e6,	// (0x0001122d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x42e6,	// (0x0001122d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x0001cd73) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x0001cd73) vkb2_area_bottom_space_btn_pane_g

0x37d3,	// (0x0001071a) cel_fep_hwr_func_pane_ParamLimits

0x37d3,	// (0x0001071a) cel_fep_hwr_func_pane

0xd21c,	// (0x0001a163) cell_hwr_side_button_pane_ParamLimits

0xd21c,	// (0x0001a163) cell_hwr_side_button_pane

0xb213,	// (0x0001815a) aid_area_touch_clock_ParamLimits

0x4903,	// (0x0001184a) bg_uniindi_top_pane_ParamLimits

0xb225,	// (0x0001816c) uniindi_top_pane_g1_ParamLimits

0xb23b,	// (0x00018182) uniindi_top_pane_g2_ParamLimits

0xb247,	// (0x0001818e) uniindi_top_pane_g3_ParamLimits

0xb258,	// (0x0001819f) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x0001cc86) uniindi_top_pane_g_ParamLimits

0xb265,	// (0x000181ac) uniindi_top_pane_t1_ParamLimits

0x4903,	// (0x0001184a) bg_vkb2_func_pane_cp01_ParamLimits

0x4903,	// (0x0001184a) bg_vkb2_func_pane_cp01

0xd7f9,	// (0x0001a740) cel_fep_hwr_func_pane_g1_ParamLimits

0xd7f9,	// (0x0001a740) cel_fep_hwr_func_pane_g1

0x4903,	// (0x0001184a) bg_vkb2_func_pane_cp02_ParamLimits

0x4903,	// (0x0001184a) bg_vkb2_func_pane_cp02

0xd7f9,	// (0x0001a740) cell_hwr_side_button_pane_g1_ParamLimits

0xd7f9,	// (0x0001a740) cell_hwr_side_button_pane_g1

0x691d,	// (0x00013864) status_pane_g4_ParamLimits

0x691d,	// (0x00013864) status_pane_g4

0x6937,	// (0x0001387e) status_pane_t1

0x92c9,	// (0x00016210) form2_midp_gauge_slider_cont_pane

0x92d1,	// (0x00016218) form2_midp_gauge_slider_pane_t1_ParamLimits

0x05cf,	// (0x0000d516) form2_midp_gauge_slider_pane_t2_ParamLimits

0x05e3,	// (0x0000d52a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0001ca46) form2_midp_gauge_slider_pane_t_ParamLimits

0x9307,	// (0x0001624e) form2_midp_slider_pane_ParamLimits

0x3c2c,	// (0x00010b73) aid_size_cell_func_vkb2_ParamLimits

0x3c2c,	// (0x00010b73) aid_size_cell_func_vkb2

0xd79a,	// (0x0001a6e1) slider_pane_g4_ParamLimits

0xd79a,	// (0x0001a6e1) slider_pane_g4

0xd626,	// (0x0001a56d) form2_midp_gauge_slider_pane_t2_cp01

0xd636,	// (0x0001a57d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd636,	// (0x0001a57d) form2_midp_gauge_slider_pane_t3_cp01

0x435b,	// (0x000112a2) form2_midp_slider_pane_cp01

0x456c,	// (0x000114b3) navi_smil_pane

0xd829,	// (0x0001a770) navi_smil_pane_g1

0xd831,	// (0x0001a778) navi_smil_pane_t1

0xd807,	// (0x0001a74e) form2_midp_slider_pane_g1

0xd810,	// (0x0001a757) form2_midp_slider_pane_g2

0xd818,	// (0x0001a75f) form2_midp_slider_pane_g3

0xd807,	// (0x0001a74e) form2_midp_slider_pane_g4

0x1c0d,	// (0x0000eb54) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x0001cd7c) form2_midp_slider_pane_g

0x4320,	// (0x00011267) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x4320,	// (0x00011267) vkb2_area_bottom_space_btn_pane_g4

0xf18b,	// (0x0001c0d2) lc0_navi_pane_ParamLimits

0xf18b,	// (0x0001c0d2) lc0_navi_pane

0xf1f5,	// (0x0001c13c) lc0_stat_indi_pane_ParamLimits

0xf1f5,	// (0x0001c13c) lc0_stat_indi_pane

0xf20a,	// (0x0001c151) ls0_title_pane_ParamLimits

0xf20a,	// (0x0001c151) ls0_title_pane

0x541c,	// (0x00012363) bg_popup_sub_pane_cp14_ParamLimits

0xb1fa,	// (0x00018141) list_uniindi_pane_ParamLimits

0xb206,	// (0x0001814d) uniindi_top_pane_ParamLimits

0xb2a2,	// (0x000181e9) list_single_uniindi_pane_g1_ParamLimits

0xb2b5,	// (0x000181fc) list_single_uniindi_pane_t1_ParamLimits

0xd655,	// (0x0001a59c) lc0_stat_clock_pane_ParamLimits

0xd655,	// (0x0001a59c) lc0_stat_clock_pane

0x1c32,	// (0x0000eb79) lc0_stat_indi_pane_g1_ParamLimits

0x1c32,	// (0x0000eb79) lc0_stat_indi_pane_g1

0x1c25,	// (0x0000eb6c) lc0_stat_indi_pane_g2_ParamLimits

0x1c25,	// (0x0000eb6c) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x0001cd87) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x0001cd87) lc0_stat_indi_pane_g

0xd662,	// (0x0001a5a9) lc0_uni_indicator_pane_ParamLimits

0xd662,	// (0x0001a5a9) lc0_uni_indicator_pane

0x1c4c,	// (0x0000eb93) ls0_title_pane_g1_ParamLimits

0x1c4c,	// (0x0000eb93) ls0_title_pane_g1

0x1c60,	// (0x0000eba7) ls0_title_pane_t1_ParamLimits

0x1c60,	// (0x0000eba7) ls0_title_pane_t1

0xd66f,	// (0x0001a5b6) lc0_uni_indicator_pane_g1_ParamLimits

0xd66f,	// (0x0001a5b6) lc0_uni_indicator_pane_g1

0xd83f,	// (0x0001a786) lc0_stat_clock_pane_t1

0x237d,	// (0x0000f2c4) main_ai5_pane

0xd84d,	// (0x0001a794) ai5_sk_pane_ParamLimits

0xd84d,	// (0x0001a794) ai5_sk_pane

0x1cbc,	// (0x0000ec03) cell_ai5_widget_pane_ParamLimits

0x1cbc,	// (0x0000ec03) cell_ai5_widget_pane

0xd85a,	// (0x0001a7a1) aid_size_cell_widget_grid

0xd868,	// (0x0001a7af) bg_ai5_widget_pane_ParamLimits

0xd868,	// (0x0001a7af) bg_ai5_widget_pane

0xd8dc,	// (0x0001a823) cell_ai5_widget_pane_g2

0xd8ec,	// (0x0001a833) cell_ai5_widget_pane_g3

0xd903,	// (0x0001a84a) cell_ai5_widget_pane_g4

0xd90f,	// (0x0001a856) cell_ai5_widget_pane_g5

0xd91b,	// (0x0001a862) cell_ai5_widget_pane_g6

0xd927,	// (0x0001a86e) cell_ai5_widget_pane_g7

0xd96f,	// (0x0001a8b6) cell_ai5_widget_pane_t1_ParamLimits

0xd96f,	// (0x0001a8b6) cell_ai5_widget_pane_t1

0xd98c,	// (0x0001a8d3) cell_ai5_widget_pane_t2_ParamLimits

0xd98c,	// (0x0001a8d3) cell_ai5_widget_pane_t2

0xd9a4,	// (0x0001a8eb) cell_ai5_widget_pane_t3_ParamLimits

0xd9a4,	// (0x0001a8eb) cell_ai5_widget_pane_t3

0xd9bc,	// (0x0001a903) cell_ai5_widget_pane_t4_ParamLimits

0xd9bc,	// (0x0001a903) cell_ai5_widget_pane_t4

0xd9d9,	// (0x0001a920) cell_ai5_widget_pane_t5_ParamLimits

0xd9d9,	// (0x0001a920) cell_ai5_widget_pane_t5

0xd9f8,	// (0x0001a93f) cell_ai5_widget_pane_t6_ParamLimits

0xd9f8,	// (0x0001a93f) cell_ai5_widget_pane_t6

0xda0a,	// (0x0001a951) cell_ai5_widget_pane_t7_ParamLimits

0xda0a,	// (0x0001a951) cell_ai5_widget_pane_t7

0xda23,	// (0x0001a96a) cell_ai5_widget_pane_t8_ParamLimits

0xda23,	// (0x0001a96a) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x0001cda1) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x0001cda1) cell_ai5_widget_pane_t

0xda77,	// (0x0001a9be) grid_ai5_widget_pane

0x541c,	// (0x00012363) highlight_cell_ai5_widget_pane_ParamLimits

0x541c,	// (0x00012363) highlight_cell_ai5_widget_pane

0x1d26,	// (0x0000ec6d) ai5_sk_left_pane

0x1d30,	// (0x0000ec77) ai5_sk_middle_pane

0x1d3a,	// (0x0000ec81) ai5_sk_right_pane

0xda8b,	// (0x0001a9d2) bg_ai5_widget_pane_g1_ParamLimits

0xda8b,	// (0x0001a9d2) bg_ai5_widget_pane_g1

0xda97,	// (0x0001a9de) bg_ai5_widget_pane_g2_ParamLimits

0xda97,	// (0x0001a9de) bg_ai5_widget_pane_g2

0xdaa3,	// (0x0001a9ea) bg_ai5_widget_pane_g3_ParamLimits

0xdaa3,	// (0x0001a9ea) bg_ai5_widget_pane_g3

0xdaaf,	// (0x0001a9f6) bg_ai5_widget_pane_g4_ParamLimits

0xdaaf,	// (0x0001a9f6) bg_ai5_widget_pane_g4

0xdabb,	// (0x0001aa02) bg_ai5_widget_pane_g5_ParamLimits

0xdabb,	// (0x0001aa02) bg_ai5_widget_pane_g5

0xdac7,	// (0x0001aa0e) bg_ai5_widget_pane_g6_ParamLimits

0xdac7,	// (0x0001aa0e) bg_ai5_widget_pane_g6

0xdad3,	// (0x0001aa1a) bg_ai5_widget_pane_g7_ParamLimits

0xdad3,	// (0x0001aa1a) bg_ai5_widget_pane_g7

0xdadf,	// (0x0001aa26) bg_ai5_widget_pane_g8_ParamLimits

0xdadf,	// (0x0001aa26) bg_ai5_widget_pane_g8

0xdaeb,	// (0x0001aa32) bg_ai5_widget_pane_g9_ParamLimits

0xdaeb,	// (0x0001aa32) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x0001cdb6) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x0001cdb6) bg_ai5_widget_pane_g

0xdb1d,	// (0x0001aa64) cell_shortcut_ai5_widget_pane_ParamLimits

0xdb1d,	// (0x0001aa64) cell_shortcut_ai5_widget_pane

0x6252,	// (0x00013199) bg_cell_shortcut_ai5_widget_pane

0xdb2e,	// (0x0001aa75) cell_grid_ai5_widget_pane_g1

0xdb37,	// (0x0001aa7e) highlight_cell_shortcut_ai5_widget_pane

0x6aba,	// (0x00013a01) ai5_sk_left_pane_g1

0xdb3f,	// (0x0001aa86) ai5_sk_left_pane_g2

0xdb47,	// (0x0001aa8e) ai5_sk_left_pane_g3

0xdb4f,	// (0x0001aa96) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x0001cdc9) ai5_sk_left_pane_g

0xdb57,	// (0x0001aa9e) ai5_sk_left_pane_t1

0x6ac2,	// (0x00013a09) ai5_sk_right_pane_g1

0xdb65,	// (0x0001aaac) ai5_sk_right_pane_g2

0xdb6d,	// (0x0001aab4) ai5_sk_right_pane_g3

0xdb75,	// (0x0001aabc) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x0001cdd2) ai5_sk_right_pane_g

0xdb7d,	// (0x0001aac4) ai5_sk_right_pane_t1

0x6ac2,	// (0x00013a09) ai5_sk_middle_pane_g1

0x6aba,	// (0x00013a01) ai5_sk_middle_pane_g2

0x6ada,	// (0x00013a21) ai5_sk_middle_pane_g3

0xdb6d,	// (0x0001aab4) ai5_sk_middle_pane_g4

0xdb47,	// (0x0001aa8e) ai5_sk_middle_pane_g5

0xdb8b,	// (0x0001aad2) ai5_sk_middle_pane_g6

0x1d44,	// (0x0000ec8b) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x0001cddb) ai5_sk_middle_pane_g

0xf077,	// (0x0001bfbe) aid_touch_area_size_lc0_ParamLimits

0xf077,	// (0x0001bfbe) aid_touch_area_size_lc0

0x39a4,	// (0x000108eb) cell_hwr_candidate_pane_t1_ParamLimits

0x6600,	// (0x00013547) aid_touch_navi_pane

0xf303,	// (0x0001c24a) status_dt_navi_pane_ParamLimits

0xf303,	// (0x0001c24a) status_dt_navi_pane

0xf31b,	// (0x0001c262) status_dt_sta_pane_ParamLimits

0xf31b,	// (0x0001c262) status_dt_sta_pane

0x1d4c,	// (0x0000ec93) dt_sta_controll_pane

0x1d59,	// (0x0000eca0) dt_sta_indi_pane

0x1d66,	// (0x0000ecad) dt_sta_title_pane

0x4903,	// (0x0001184a) bg_dt_sta_indi_pane_ParamLimits

0x4903,	// (0x0001184a) bg_dt_sta_indi_pane

0xdb93,	// (0x0001aada) dt_sta_battery_pane

0x1d78,	// (0x0000ecbf) dt_sta_indi_pane_g1

0x1d81,	// (0x0000ecc8) dt_sta_indi_pane_g2

0x1d8a,	// (0x0000ecd1) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x0001cdea) dt_sta_indi_pane_g

0x1d93,	// (0x0000ecda) dt_sta_signal_pane

0x541c,	// (0x00012363) bg_dt_sta_title_pane_ParamLimits

0x541c,	// (0x00012363) bg_dt_sta_title_pane

0xdb9b,	// (0x0001aae2) dt_sta_title_pane_g1

0x1d9c,	// (0x0000ece3) dt_sta_title_pane_t1_ParamLimits

0x1d9c,	// (0x0000ece3) dt_sta_title_pane_t1

0x456c,	// (0x000114b3) bg_dt_sta_control_pane

0x1db1,	// (0x0000ecf8) dt_sta_controll_pane_g1

0xdba3,	// (0x0001aaea) bg_dt_sta_title_pane_g1

0xdbac,	// (0x0001aaf3) bg_dt_sta_title_pane_g2

0xdbb5,	// (0x0001aafc) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x0001cdf1) bg_dt_sta_title_pane_g

0x95af,	// (0x000164f6) bg_dt_sta_indi_pane_g1

0xdbbe,	// (0x0001ab05) dt_sta_signal_pane_g1

0xdbc6,	// (0x0001ab0d) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x0001cdf8) dt_sta_signal_pane_g

0xdbce,	// (0x0001ab15) dt_sta_battery_pane_g1

0xdbd7,	// (0x0001ab1e) dt_sta_battery_pane_t1

0x95af,	// (0x000164f6) bg_dt_sta_control_pane_g1

0x5cda,	// (0x00012c21) fep_china_uni_eep_pane

0x5ce2,	// (0x00012c29) fep_china_uni_entry_pane_ParamLimits

0x5cf2,	// (0x00012c39) popup_fep_china_uni_window_g1_ParamLimits

0x5d02,	// (0x00012c49) popup_fep_china_uni_window_g2_ParamLimits

0x5d02,	// (0x00012c49) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001c665) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001c665) popup_fep_china_uni_window_g

0xdbe6,	// (0x0001ab2d) fep_china_uni_eep_pane_g1

0xdbee,	// (0x0001ab35) fep_china_uni_eep_pane_t1

0xd820,	// (0x0001a767) aid_touch_area_size_smil_player

0x674c,	// (0x00013693) lc0_clock_pane

0x692b,	// (0x00013872) status_pane_g5_ParamLimits

0x692b,	// (0x00013872) status_pane_g5

0xcbbb,	// (0x00019b02) popup_keymap_window

0x68f1,	// (0x00013838) status_icon_pane

0xd8ec,	// (0x0001a833) cell_ai5_widget_pane_g3_ParamLimits

0xd903,	// (0x0001a84a) cell_ai5_widget_pane_g4_ParamLimits

0xd90f,	// (0x0001a856) cell_ai5_widget_pane_g5_ParamLimits

0xd933,	// (0x0001a87a) cell_ai5_widget_pane_g8_ParamLimits

0xd933,	// (0x0001a87a) cell_ai5_widget_pane_g8

0xd947,	// (0x0001a88e) cell_ai5_widget_pane_g9_ParamLimits

0xd947,	// (0x0001a88e) cell_ai5_widget_pane_g9

0xd95b,	// (0x0001a8a2) cell_ai5_widget_pane_g10_ParamLimits

0xd95b,	// (0x0001a8a2) cell_ai5_widget_pane_g10

0xdbfd,	// (0x0001ab44) status_icon_pane_g1

0x456c,	// (0x000114b3) bg_popup_sub_pane_cp13

0xdc05,	// (0x0001ab4c) popup_keymap_window_t1

0xf00d,	// (0x0001bf54) control_pane_g6_ParamLimits

0xf00d,	// (0x0001bf54) control_pane_g6

0xf01a,	// (0x0001bf61) control_pane_g7_ParamLimits

0xf01a,	// (0x0001bf61) control_pane_g7

0xf027,	// (0x0001bf6e) control_pane_g8_ParamLimits

0xf027,	// (0x0001bf6e) control_pane_g8

0x1d4c,	// (0x0000ec93) dt_sta_controll_pane_ParamLimits

0x1d59,	// (0x0000eca0) dt_sta_indi_pane_ParamLimits

0x1d66,	// (0x0000ecad) dt_sta_title_pane_ParamLimits

0x4e09,	// (0x00011d50) aid_size_touch_scroll_bar_cale

0x2456,	// (0x0000f39d) popup_discreet_window_ParamLimits

0x2456,	// (0x0000f39d) popup_discreet_window

0xc7ca,	// (0x00019711) popup_sk_window

0x722d,	// (0x00014174) bg_popup_sub_pane_cp28_ParamLimits

0x722d,	// (0x00014174) bg_popup_sub_pane_cp28

0xdc13,	// (0x0001ab5a) popup_discreet_window_g1_ParamLimits

0xdc13,	// (0x0001ab5a) popup_discreet_window_g1

0xdc33,	// (0x0001ab7a) popup_discreet_window_t1_ParamLimits

0xdc33,	// (0x0001ab7a) popup_discreet_window_t1

0xdc51,	// (0x0001ab98) popup_discreet_window_t2_ParamLimits

0xdc51,	// (0x0001ab98) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x0001cdfd) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x0001cdfd) popup_discreet_window_t

0x4393,	// (0x000112da) popup_sk_window_g1

0x439d,	// (0x000112e4) popup_sk_window_g2

0x0001,

0xfebd,	// (0x0001ce04) popup_sk_window_g

0x43a7,	// (0x000112ee) popup_sk_window_t1

0x43b5,	// (0x000112fc) popup_sk_window_t1_copy1

0xd8dc,	// (0x0001a823) cell_ai5_widget_pane_g2_ParamLimits

0xda35,	// (0x0001a97c) cell_ai5_widget_pane_t9_ParamLimits

0xda35,	// (0x0001a97c) cell_ai5_widget_pane_t9

0x456c,	// (0x000114b3) main_fep_fshwr2_pane

0xd69d,	// (0x0001a5e4) aid_fshwr2_btn_pane

0xd6ae,	// (0x0001a5f5) aid_fshwr2_syb_pane

0xd6bf,	// (0x0001a606) aid_fshwr2_txt_pane

0xd6cb,	// (0x0001a612) fshwr2_func_candi_pane

0xd6ea,	// (0x0001a631) fshwr2_hwr_syb_pane

0xd705,	// (0x0001a64c) fshwr2_icf_pane

0x456c,	// (0x000114b3) fshwr2_icf_bg_pane

0x1e4d,	// (0x0000ed94) fshwr2_icf_pane_t1_ParamLimits

0x1e4d,	// (0x0000ed94) fshwr2_icf_pane_t1

0x5bcc,	// (0x00012b13) fshwr2_func_candi_pane_g1

0x1e66,	// (0x0000edad) fshwr2_func_candi_row_pane_ParamLimits

0x1e66,	// (0x0000edad) fshwr2_func_candi_row_pane

0x1e76,	// (0x0000edbd) cell_fshwr2_syb_pane_ParamLimits

0x1e76,	// (0x0000edbd) cell_fshwr2_syb_pane

0x981d,	// (0x00016764) fshwr2_hwr_syb_pane_g1_ParamLimits

0x981d,	// (0x00016764) fshwr2_hwr_syb_pane_g1

0x456c,	// (0x000114b3) bg_popup_call_pane_cp01

0x1e90,	// (0x0000edd7) fshwr2_func_candi_cell_pane_ParamLimits

0x1e90,	// (0x0000edd7) fshwr2_func_candi_cell_pane

0x78a9,	// (0x000147f0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x78a9,	// (0x000147f0) fshwr2_func_candi_cell_bg_pane

0x1ebb,	// (0x0000ee02) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x1ebb,	// (0x0000ee02) fshwr2_func_candi_cell_pane_g1

0xdca3,	// (0x0001abea) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdca3,	// (0x0001abea) fshwr2_func_candi_cell_pane_t1

0x456c,	// (0x000114b3) bg_button_pane_cp08

0x6252,	// (0x00013199) cell_fshwr2_syb_bg_pane

0x1edb,	// (0x0000ee22) cell_fshwr2_syb_bg_pane_g1

0x1ee3,	// (0x0000ee2a) cell_fshwr2_syb_bg_pane_t1

0x541c,	// (0x00012363) main_tmo_pane

0x0133,	// (0x0000d07a) uni_indicator_pane_g1_ParamLimits

0x014a,	// (0x0000d091) uni_indicator_pane_g2_ParamLimits

0x0160,	// (0x0000d0a7) uni_indicator_pane_g3_ParamLimits

0x7d7e,	// (0x00014cc5) uni_indicator_pane_g4_ParamLimits

0x7d7e,	// (0x00014cc5) uni_indicator_pane_g4

0x7d92,	// (0x00014cd9) uni_indicator_pane_g5_ParamLimits

0x7d92,	// (0x00014cd9) uni_indicator_pane_g5

0x7d92,	// (0x00014cd9) uni_indicator_pane_g6_ParamLimits

0x7d92,	// (0x00014cd9) uni_indicator_pane_g6

0xf91d,	// (0x0001c864) uni_indicator_pane_g_ParamLimits

0x0d1a,	// (0x0000dc61) popup_tmo_note_window_ParamLimits

0x0d1a,	// (0x0000dc61) popup_tmo_note_window

0x3c0e,	// (0x00010b55) fshwr2_bg_pane

0x1ecc,	// (0x0000ee13) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x1ecc,	// (0x0000ee13) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x0001ce09) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x0001ce09) fshwr2_func_candi_cell_pane_g

0x95af,	// (0x000164f6) bg_popup_window_pane_cp01

0xdcb6,	// (0x0001abfd) bg_popup_window_pane_g1_cp01

0xdcbf,	// (0x0001ac06) bg_popup_window_pane_cp22_ParamLimits

0xdcbf,	// (0x0001ac06) bg_popup_window_pane_cp22

0xdccd,	// (0x0001ac14) listscroll_tmo_link_pane_ParamLimits

0xdccd,	// (0x0001ac14) listscroll_tmo_link_pane

0xdd0d,	// (0x0001ac54) popup_tmo_note_window_g1_ParamLimits

0xdd0d,	// (0x0001ac54) popup_tmo_note_window_g1

0xdd1a,	// (0x0001ac61) tmo_note_info_pane_ParamLimits

0xdd1a,	// (0x0001ac61) tmo_note_info_pane

0x1ef2,	// (0x0000ee39) list_tmo_note_info_pane_g1_ParamLimits

0x1ef2,	// (0x0000ee39) list_tmo_note_info_pane_g1

0xdd34,	// (0x0001ac7b) list_tmo_note_info_pane_g2_ParamLimits

0xdd34,	// (0x0001ac7b) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x0001ce0e) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x0001ce0e) list_tmo_note_info_pane_g

0xdd50,	// (0x0001ac97) list_tmo_note_info_text_pane_ParamLimits

0xdd50,	// (0x0001ac97) list_tmo_note_info_text_pane

0xdd92,	// (0x0001acd9) list_tmo_link_pane

0xdd9f,	// (0x0001ace6) scroll_pane_cp20

0xddac,	// (0x0001acf3) list_single_tmo_link_pane_ParamLimits

0xddac,	// (0x0001acf3) list_single_tmo_link_pane

0xddbc,	// (0x0001ad03) list_single_tmo_link_pane_t1

0xddca,	// (0x0001ad11) list_tmo_note_info_text_pane_t1_ParamLimits

0xddca,	// (0x0001ad11) list_tmo_note_info_text_pane_t1

0xed00,	// (0x0001bc47) aid_size_touch_scroll_bar_cp01_ParamLimits

0xed00,	// (0x0001bc47) aid_size_touch_scroll_bar_cp01

0xec5c,	// (0x0001bba3) aid_size_touch_slider_marker

0xc7ba,	// (0x00019701) popup_settings_window_ParamLimits

0xc7ba,	// (0x00019701) popup_settings_window

0x65b0,	// (0x000134f7) popup_candi_list_indi_window

0x6600,	// (0x00013547) aid_touch_navi_pane_ParamLimits

0x3b69,	// (0x00010ab0) rs_clock_indi_pane

0x3b72,	// (0x00010ab9) sctrl_sk_bottom_pane_ParamLimits

0x3b83,	// (0x00010aca) sctrl_sk_top_pane_ParamLimits

0x3c86,	// (0x00010bcd) popup_fep_tooltip_window

0xd85a,	// (0x0001a7a1) aid_size_cell_widget_grid_ParamLimits

0xd8c7,	// (0x0001a80e) cell_ai5_widget_pane_g1_ParamLimits

0xd8c7,	// (0x0001a80e) cell_ai5_widget_pane_g1

0xd91b,	// (0x0001a862) cell_ai5_widget_pane_g6_ParamLimits

0xd927,	// (0x0001a86e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x0001cd8c) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x0001cd8c) cell_ai5_widget_pane_g

0xda59,	// (0x0001a9a0) cell_ai5_widget_pane_t10_ParamLimits

0xda59,	// (0x0001a9a0) cell_ai5_widget_pane_t10

0xda77,	// (0x0001a9be) grid_ai5_widget_pane_ParamLimits

0xdaf7,	// (0x0001aa3e) cell_contacts_ai5_widget_pane_ParamLimits

0xdaf7,	// (0x0001aa3e) cell_contacts_ai5_widget_pane

0xdc66,	// (0x0001abad) popup_discreet_window_t3_ParamLimits

0xdc66,	// (0x0001abad) popup_discreet_window_t3

0xd71a,	// (0x0001a661) popup_fshwr2_char_preview_window_ParamLimits

0xd71a,	// (0x0001a661) popup_fshwr2_char_preview_window

0x1f09,	// (0x0000ee50) tmo_note_info_pane_t1

0x1f1e,	// (0x0000ee65) tmo_note_info_pane_t2

0x1f37,	// (0x0000ee7e) tmo_note_info_pane_t3

0xdd6e,	// (0x0001acb5) tmo_note_info_pane_t4

0xdd80,	// (0x0001acc7) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x0001ce13) tmo_note_info_pane_t

0xdd92,	// (0x0001acd9) list_tmo_link_pane_ParamLimits

0xdd9f,	// (0x0001ace6) scroll_pane_cp20_ParamLimits

0x456c,	// (0x000114b3) bg_popup_fep_char_preview_window_cp01

0xdde3,	// (0x0001ad2a) popup_fshwr2_char_preview_window_t1

0xddf1,	// (0x0001ad38) popup_candi_list_indi_window_g1

0xddfa,	// (0x0001ad41) bg_cell_contacts_ai5_widget_pane

0xde06,	// (0x0001ad4d) cell_contacts_ai5_widget_pane_g1

0xde19,	// (0x0001ad60) cell_contacts_ai5_widget_pane_g2

0xde25,	// (0x0001ad6c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x0001ce1e) cell_contacts_ai5_widget_pane_g

0xde37,	// (0x0001ad7e) cell_contacts_ai5_widget_pane_t1

0x541c,	// (0x00012363) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdeb1,	// (0x0001adf8) settings_container_pane

0x6252,	// (0x00013199) listscroll_set_pane_copy1

0x8a0a,	// (0x00015951) scroll_pane_cp121_copy1

0xdebd,	// (0x0001ae04) set_content_pane_copy1

0xdec5,	// (0x0001ae0c) aid_height_set_list_copy1_ParamLimits

0xdec5,	// (0x0001ae0c) aid_height_set_list_copy1

0x7f97,	// (0x00014ede) aid_size_parent_copy1_ParamLimits

0x7f97,	// (0x00014ede) aid_size_parent_copy1

0xded1,	// (0x0001ae18) button_value_adjust_pane_cp6_copy1_ParamLimits

0xded1,	// (0x0001ae18) button_value_adjust_pane_cp6_copy1

0x6596,	// (0x000134dd) list_highlight_pane_cp2_copy1_ParamLimits

0x6596,	// (0x000134dd) list_highlight_pane_cp2_copy1

0xdee5,	// (0x0001ae2c) list_set_pane_copy1_ParamLimits

0xdee5,	// (0x0001ae2c) list_set_pane_copy1

0xde4c,	// (0x0001ad93) main_pane_set_t1_copy1_ParamLimits

0xde4c,	// (0x0001ad93) main_pane_set_t1_copy1

0xde86,	// (0x0001adcd) main_pane_set_t2_copy1_ParamLimits

0xde86,	// (0x0001adcd) main_pane_set_t2_copy1

0xdf92,	// (0x0001aed9) main_pane_set_t3_copy1

0xdfa0,	// (0x0001aee7) main_pane_set_t4_copy1

0xdea5,	// (0x0001adec) set_content_pane_g1_copy1_ParamLimits

0xdea5,	// (0x0001adec) set_content_pane_g1_copy1

0xdfae,	// (0x0001aef5) setting_code_pane_copy1

0xdfb6,	// (0x0001aefd) setting_slider_graphic_pane_copy1

0xdfb6,	// (0x0001aefd) setting_slider_pane_copy1

0xdfb6,	// (0x0001aefd) setting_text_pane_copy1

0xdfb6,	// (0x0001aefd) setting_volume_pane_copy1

0xdfae,	// (0x0001aef5) settings_code_pane_cp2_copy1

0xdfbe,	// (0x0001af05) settings_code_pane_cp_copy1_ParamLimits

0xdfbe,	// (0x0001af05) settings_code_pane_cp_copy1

0x4444,	// (0x0001138b) volume_set_pane_copy1

0xdfd2,	// (0x0001af19) volume_set_pane_g10_copy1

0xdfda,	// (0x0001af21) volume_set_pane_g1_copy1

0xdfe2,	// (0x0001af29) volume_set_pane_g2_copy1

0xdfea,	// (0x0001af31) volume_set_pane_g3_copy1

0xdff2,	// (0x0001af39) volume_set_pane_g4_copy1

0xdffa,	// (0x0001af41) volume_set_pane_g5_copy1

0xe002,	// (0x0001af49) volume_set_pane_g6_copy1

0xe00a,	// (0x0001af51) volume_set_pane_g7_copy1

0xe012,	// (0x0001af59) volume_set_pane_g8_copy1

0xe01a,	// (0x0001af61) volume_set_pane_g9_copy1

0x4660,	// (0x000115a7) bg_set_opt_pane_cp_copy1_ParamLimits

0x4660,	// (0x000115a7) bg_set_opt_pane_cp_copy1

0x444c,	// (0x00011393) setting_slider_pane_t1_copy1_ParamLimits

0x444c,	// (0x00011393) setting_slider_pane_t1_copy1

0x446a,	// (0x000113b1) setting_slider_pane_t2_copy1_ParamLimits

0x446a,	// (0x000113b1) setting_slider_pane_t2_copy1

0x4484,	// (0x000113cb) setting_slider_pane_t3_copy1_ParamLimits

0x4484,	// (0x000113cb) setting_slider_pane_t3_copy1

0x449c,	// (0x000113e3) slider_set_pane_copy1_ParamLimits

0x449c,	// (0x000113e3) slider_set_pane_copy1

0x5549,	// (0x00012490) set_opt_bg_pane_g1_copy2

0x5551,	// (0x00012498) set_opt_bg_pane_g2_copy2

0xe022,	// (0x0001af69) set_opt_bg_pane_g3_copy2

0x5561,	// (0x000124a8) set_opt_bg_pane_g4_copy2

0x5569,	// (0x000124b0) set_opt_bg_pane_g5_copy2

0x5571,	// (0x000124b8) set_opt_bg_pane_g6_copy2

0xe02c,	// (0x0001af73) set_opt_bg_pane_g7_copy2

0xe034,	// (0x0001af7b) set_opt_bg_pane_g8_copy2

0xe03e,	// (0x0001af85) set_opt_bg_pane_g9_copy2

0xe048,	// (0x0001af8f) aid_size_touch_slider_mark_copy1_ParamLimits

0xe048,	// (0x0001af8f) aid_size_touch_slider_mark_copy1

0xe05c,	// (0x0001afa3) slider_set_pane_g1_copy1

0xe065,	// (0x0001afac) slider_set_pane_g2_copy1

0x83f3,	// (0x0001533a) slider_set_pane_g3_copy1_ParamLimits

0x83f3,	// (0x0001533a) slider_set_pane_g3_copy1

0x8407,	// (0x0001534e) slider_set_pane_g4_copy1_ParamLimits

0x8407,	// (0x0001534e) slider_set_pane_g4_copy1

0x841f,	// (0x00015366) slider_set_pane_g5_copy1_ParamLimits

0x841f,	// (0x00015366) slider_set_pane_g5_copy1

0x83f3,	// (0x0001533a) slider_set_pane_g6_copy1_ParamLimits

0x83f3,	// (0x0001533a) slider_set_pane_g6_copy1

0xe06d,	// (0x0001afb4) slider_set_pane_g7_copy1_ParamLimits

0xe06d,	// (0x0001afb4) slider_set_pane_g7_copy1

0x4580,	// (0x000114c7) bg_set_opt_pane_cp2_copy1

0xe083,	// (0x0001afca) setting_slider_graphic_pane_g1_copy1

0xe08c,	// (0x0001afd3) setting_slider_graphic_pane_t1_copy1

0xe09c,	// (0x0001afe3) setting_slider_graphic_pane_t2_copy1

0xe0ac,	// (0x0001aff3) slider_set_pane_cp_copy1

0xe0bc,	// (0x0001b003) input_focus_pane_cp1_copy1

0xe0c5,	// (0x0001b00c) list_set_text_pane_copy1

0xe0cd,	// (0x0001b014) setting_text_pane_g1_copy1

0xe0d6,	// (0x0001b01d) set_text_pane_t1_copy1

0xe0bc,	// (0x0001b003) input_focus_pane_cp2_copy1

0xe0cd,	// (0x0001b014) setting_code_pane_g1_copy1

0xe0f1,	// (0x0001b038) setting_code_pane_t1_copy1

0x883f,	// (0x00015786) list_set_graphic_pane_copy1

0x4580,	// (0x000114c7) bg_set_opt_pane_cp4_copy1

0x5f68,	// (0x00012eaf) list_set_graphic_pane_g1_copy1_ParamLimits

0x5f68,	// (0x00012eaf) list_set_graphic_pane_g1_copy1

0xe0ff,	// (0x0001b046) list_set_graphic_pane_g2_copy1

0x5f80,	// (0x00012ec7) list_set_graphic_pane_t1_copy1_ParamLimits

0x5f80,	// (0x00012ec7) list_set_graphic_pane_t1_copy1

0x95af,	// (0x000164f6) rs_clock_indi_pane_g1

0xe107,	// (0x0001b04e) rs_clock_indi_pane_t1

0xe115,	// (0x0001b05c) rs_indi_pane

0xe11d,	// (0x0001b064) rs_indi_pane_g1

0xe126,	// (0x0001b06d) rs_indi_pane_g2

0xe12f,	// (0x0001b076) rs_indi_pane_g3

0x0002,

0xfede,	// (0x0001ce25) rs_indi_pane_g

0x6252,	// (0x00013199) bg_popup_preview_window_pane_cp03

0xe138,	// (0x0001b07f) popup_fep_tooltip_window_t1

0xa43b,	// (0x00017382) popup_note2_window_g2_ParamLimits

0xa43b,	// (0x00017382) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0001cbbe) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0001cbbe) popup_note2_window_g

0xaa1f,	// (0x00017966) bg_popup_sub_pane_cp11_ParamLimits

0xaa2c,	// (0x00017973) cell_ai3_links_pane_g1_ParamLimits

0xaa43,	// (0x0001798a) cell_ai3_links_pane_t1

0xe0d6,	// (0x0001b01d) set_text_pane_t1_copy1_ParamLimits

0x616f,	// (0x000130b6) cell_graphic_popup_pane_cp2_ParamLimits

0x616f,	// (0x000130b6) cell_graphic_popup_pane_cp2

0xe146,	// (0x0001b08d) cell_graphic_popup_pane_g1_cp2

0x4c1c,	// (0x00011b63) cell_graphic_popup_pane_g2_cp2

0xe14e,	// (0x0001b095) cell_graphic_popup_pane_g3_cp2

0xe156,	// (0x0001b09d) cell_graphic_popup_pane_t2_cp2

0x4c2d,	// (0x00011b74) grid_highlight_pane_cp3_cp2

0x5917,	// (0x0001285e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x541c,	// (0x00012363) main_tmo_pane_ParamLimits

0x0d0e,	// (0x0000dc55) popup_tmo_big_image_note_window

0xd8b6,	// (0x0001a7fd) cell_ai5_widget_list_pane

0xd8be,	// (0x0001a805) cell_ai5_widget_lrg_icon_pane

0x1f09,	// (0x0000ee50) tmo_note_info_pane_t1_ParamLimits

0x1f1e,	// (0x0000ee65) tmo_note_info_pane_t2_ParamLimits

0x1f37,	// (0x0000ee7e) tmo_note_info_pane_t3_ParamLimits

0xdd6e,	// (0x0001acb5) tmo_note_info_pane_t4_ParamLimits

0xdd80,	// (0x0001acc7) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x0001ce13) tmo_note_info_pane_t_ParamLimits

0xdeb1,	// (0x0001adf8) settings_container_pane_ParamLimits

0xe0b4,	// (0x0001affb) indicator_popup_pane_cp5

0xe0b4,	// (0x0001affb) indicator_popup_pane_cp6

0x883f,	// (0x00015786) list_set_graphic_pane_copy1_ParamLimits

0x456c,	// (0x000114b3) bg_popup_window_pane_cp23

0xe164,	// (0x0001b0ab) popup_tmo_big_image_note_window_g1

0xe16d,	// (0x0001b0b4) popup_tmo_big_image_note_window_t1

0xe17d,	// (0x0001b0c4) popup_tmo_big_image_note_window_t2

0xe18d,	// (0x0001b0d4) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x0001ce2c) popup_tmo_big_image_note_window_t

0x95af,	// (0x000164f6) cell_ai5_widget_lrg_icon_pane_g1

0xe19d,	// (0x0001b0e4) cell_ai5_widget_lrg_icon_pane_t1

0xe1ab,	// (0x0001b0f2) cell_ai5_widget_list_row_pane_ParamLimits

0xe1ab,	// (0x0001b0f2) cell_ai5_widget_list_row_pane

0xe1c4,	// (0x0001b10b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe1c4,	// (0x0001b10b) cell_ai5_widget_list_row_pane_g1

0xe1d1,	// (0x0001b118) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe1d1,	// (0x0001b118) cell_ai5_widget_list_row_pane_t1

0xe1ff,	// (0x0001b146) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe1ff,	// (0x0001b146) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x0001ce33) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x0001ce33) cell_ai5_widget_list_row_pane_t

0x237d,	// (0x0000f2c4) main_fep_vtchi_ss_pane

0x44c1,	// (0x00011408) popup_fep_char_pre_window

0x44c9,	// (0x00011410) popup_fep_ituss_window

0x44ea,	// (0x00011431) popup_fep_vkbss_window

0xe227,	// (0x0001b16e) grid_vkbss_keypad_pane_ParamLimits

0xe227,	// (0x0001b16e) grid_vkbss_keypad_pane

0xe237,	// (0x0001b17e) ituss_keypad_pane

0x4515,	// (0x0001145c) aid_vkbss_key_offset_ParamLimits

0x4515,	// (0x0001145c) aid_vkbss_key_offset

0x4521,	// (0x00011468) cell_vkbss_key_pane_ParamLimits

0x4521,	// (0x00011468) cell_vkbss_key_pane

0x6905,	// (0x0001384c) bg_cell_vkbss_key_g1_ParamLimits

0x6905,	// (0x0001384c) bg_cell_vkbss_key_g1

0xe247,	// (0x0001b18e) cell_vkbss_key_3p_pane_ParamLimits

0xe247,	// (0x0001b18e) cell_vkbss_key_3p_pane

0xe261,	// (0x0001b1a8) cell_vkbss_key_g1_ParamLimits

0xe261,	// (0x0001b1a8) cell_vkbss_key_g1

0xe27b,	// (0x0001b1c2) cell_vkbss_key_t1_ParamLimits

0xe27b,	// (0x0001b1c2) cell_vkbss_key_t1

0x4537,	// (0x0001147e) cell_ituss_key_pane_ParamLimits

0x4537,	// (0x0001147e) cell_ituss_key_pane

0xe2a6,	// (0x0001b1ed) bg_cell_ituss_key_g1_ParamLimits

0xe2a6,	// (0x0001b1ed) bg_cell_ituss_key_g1

0xe2b2,	// (0x0001b1f9) cell_ituss_key_pane_g1_ParamLimits

0xe2b2,	// (0x0001b1f9) cell_ituss_key_pane_g1

0xe2c6,	// (0x0001b20d) cell_ituss_key_pane_g2_ParamLimits

0xe2c6,	// (0x0001b20d) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x0001ce3a) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x0001ce3a) cell_ituss_key_pane_g

0xe2f4,	// (0x0001b23b) cell_ituss_key_t1_ParamLimits

0xe2f4,	// (0x0001b23b) cell_ituss_key_t1

0xe32e,	// (0x0001b275) cell_ituss_key_t2_ParamLimits

0xe32e,	// (0x0001b275) cell_ituss_key_t2

0xe35f,	// (0x0001b2a6) cell_ituss_key_t3_ParamLimits

0xe35f,	// (0x0001b2a6) cell_ituss_key_t3

0xe399,	// (0x0001b2e0) cell_ituss_key_t4_ParamLimits

0xe399,	// (0x0001b2e0) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x0001ce3f) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x0001ce3f) cell_ituss_key_t

0xe3d3,	// (0x0001b31a) cell_vkbss_key_3p_pane_g1

0xe3db,	// (0x0001b322) cell_vkbss_key_3p_pane_g2

0xe3e3,	// (0x0001b32a) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0001ce48) cell_vkbss_key_3p_pane_g

0x456c,	// (0x000114b3) bg_popup_fep_char_preview_window_cp02

0xe3eb,	// (0x0001b332) popup_fep_char_pre_window_t1

0x1d1c,	// (0x0000ec63) main_ai5_sk_pane

0xddfa,	// (0x0001ad41) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xde06,	// (0x0001ad4d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xde19,	// (0x0001ad60) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xde25,	// (0x0001ad6c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x0001ce1e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xde37,	// (0x0001ad7e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x541c,	// (0x00012363) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1f4c,	// (0x0000ee93) main_ai5_sk_pane_g1

0x706b,	// (0x00013fb2) popup_query_code_window_g1

0x44df,	// (0x00011426) popup_fep_vkb_icf_pane

0x44f3,	// (0x0001143a) popup_fep_vtchi_icf_pane

0x541c,	// (0x00012363) bg_icf_pane

0xe3fa,	// (0x0001b341) list_vkb_icf_pane

0x541c,	// (0x00012363) bg_icf_pane_cp01

0xe406,	// (0x0001b34d) vtchi_icf_list_pane

0xe417,	// (0x0001b35e) list_vkb_icf_pane_t1_ParamLimits

0xe417,	// (0x0001b35e) list_vkb_icf_pane_t1

0xe42f,	// (0x0001b376) vtchi_icf_list_pane_t1_ParamLimits

0xe42f,	// (0x0001b376) vtchi_icf_list_pane_t1

0x44c9,	// (0x00011410) popup_fep_ituss_window_ParamLimits

0x44f3,	// (0x0001143a) popup_fep_vtchi_icf_pane_ParamLimits

0xe237,	// (0x0001b17e) ituss_keypad_pane_ParamLimits

0x4509,	// (0x00011450) ituss_sks_pane

0x541c,	// (0x00012363) bg_icf_pane_ParamLimits

0x44b2,	// (0x000113f9) icf_edit_indi_pane_ParamLimits

0x44b2,	// (0x000113f9) icf_edit_indi_pane

0xe3fa,	// (0x0001b341) list_vkb_icf_pane_ParamLimits

0x541c,	// (0x00012363) bg_icf_pane_cp01_ParamLimits

0x44b2,	// (0x000113f9) icf_edit_indi_pane_cp01_ParamLimits

0x44b2,	// (0x000113f9) icf_edit_indi_pane_cp01

0xe40e,	// (0x0001b355) vtchi_query_pane

0x981d,	// (0x00016764) icf_edit_indi_pane_g1_ParamLimits

0x981d,	// (0x00016764) icf_edit_indi_pane_g1

0xe4bb,	// (0x0001b402) icf_edit_indi_pane_g2_ParamLimits

0xe4bb,	// (0x0001b402) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0001ce60) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0001ce60) icf_edit_indi_pane_g

0xe4ca,	// (0x0001b411) icf_edit_indi_pane_t1

0xe451,	// (0x0001b398) bg_input_focus_pane_cp042

0x4e00,	// (0x00011d47) vtchi_button_pane

0xe45a,	// (0x0001b3a1) vtchi_query_pane_t1

0xe468,	// (0x0001b3af) vtchi_query_pane_t2

0xe476,	// (0x0001b3bd) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0001ce4f) vtchi_query_pane_t

0x456c,	// (0x000114b3) bg_button_pane_cp13

0xe484,	// (0x0001b3cb) vtchi_button_pane_g1

0xe48c,	// (0x0001b3d3) ituss_sks_pane_g1

0xe497,	// (0x0001b3de) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0001ce56) ituss_sks_pane_g

0xe49f,	// (0x0001b3e6) ituss_sks_pane_t1

0xe4ad,	// (0x0001b3f4) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0001ce5b) ituss_sks_pane_t

0x8faf,	// (0x00015ef6) indicator_nsta_pane_cp_g1

0x8fb8,	// (0x00015eff) indicator_nsta_pane_cp_g2

0x8fc0,	// (0x00015f07) indicator_nsta_pane_cp_g3

0x8fc8,	// (0x00015f0f) indicator_nsta_pane_cp_g4

0x8fd0,	// (0x00015f17) indicator_nsta_pane_cp_g5

0x8fd0,	// (0x00015f17) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0001c9fc) indicator_nsta_pane_cp_g

0x1aba,	// (0x0000ea01) cell_graphic2_pane_t2_ParamLimits

0x1aba,	// (0x0000ea01) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x0001cd15) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x0001cd15) cell_graphic2_pane_t

0x1aed,	// (0x0000ea34) cell_graphic2_control_pane_t1

0xeebc,	// (0x0001be03) signal_pane_g3_ParamLimits

0xeebc,	// (0x0001be03) signal_pane_g3

0xeed0,	// (0x0001be17) signal_pane_g4_ParamLimits

0xeed0,	// (0x0001be17) signal_pane_g4

0xe211,	// (0x0001b158) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe211,	// (0x0001b158) cell_ai5_widget_list_row_pane_t3

0xe2e2,	// (0x0001b229) cell_ituss_key_pane_t1_ParamLimits

0xe2e2,	// (0x0001b229) cell_ituss_key_pane_t1

0x6c64,	// (0x00013bab) form_field_data_wide_pane_vc_t2_ParamLimits

0x6c64,	// (0x00013bab) form_field_data_wide_pane_vc_t2

0x6c78,	// (0x00013bbf) form_field_data_wide_pane_vc_t3_ParamLimits

0x6c78,	// (0x00013bbf) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x0001c74c) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x0001c74c) form_field_data_wide_pane_vc_t

0x8c6b,	// (0x00015bb2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x8c6b,	// (0x00015bb2) form_field_slider_wide_pane_vc_t3

0x8d45,	// (0x00015c8c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x8d45,	// (0x00015c8c) form_field_popup_wide_pane_vc_t2

0x8d5c,	// (0x00015ca3) form_field_popup_wide_pane_vc_t3_ParamLimits

0x8d5c,	// (0x00015ca3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0001c9eb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0001c9eb) form_field_popup_wide_pane_vc_t

0xd69d,	// (0x0001a5e4) aid_fshwr2_btn_pane_ParamLimits

0xd6ae,	// (0x0001a5f5) aid_fshwr2_syb_pane_ParamLimits

0xd6bf,	// (0x0001a606) aid_fshwr2_txt_pane_ParamLimits

0x3c0e,	// (0x00010b55) fshwr2_bg_pane_ParamLimits

0xd6cb,	// (0x0001a612) fshwr2_func_candi_pane_ParamLimits

0xd6ea,	// (0x0001a631) fshwr2_hwr_syb_pane_ParamLimits

0xd705,	// (0x0001a64c) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
