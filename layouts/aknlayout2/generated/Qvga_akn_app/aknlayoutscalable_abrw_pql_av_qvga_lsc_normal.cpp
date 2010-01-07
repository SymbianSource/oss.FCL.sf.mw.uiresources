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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00005823 };

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
0x4caa,	// (0x0000a4cd) Screen

0x4cb4,	// (0x0000a4d7) application_window_ParamLimits

0x4cb4,	// (0x0000a4d7) application_window

0xa543,	// (0x0000fd66) screen_g1

0x4ce2,	// (0x0000a505) area_bottom_pane_ParamLimits

0x4ce2,	// (0x0000a505) area_bottom_pane

0xa5b2,	// (0x0000fdd5) area_top_pane_ParamLimits

0xa5b2,	// (0x0000fdd5) area_top_pane

0x8c21,	// (0x0000e444) main_pane_ParamLimits

0x8c21,	// (0x0000e444) main_pane

0xa62a,	// (0x0000fe4d) misc_graphics

0x61b5,	// (0x0000b9d8) battery_pane_ParamLimits

0x61b5,	// (0x0000b9d8) battery_pane

0xe0f5,	// (0x00013918) bg_status_flat_pane_g8

0xe0fd,	// (0x00013920) bg_status_flat_pane_g9

0xd84f,	// (0x00013072) context_pane_ParamLimits

0xd84f,	// (0x00013072) context_pane

0x630f,	// (0x0000bb32) navi_pane_ParamLimits

0x630f,	// (0x0000bb32) navi_pane

0x6384,	// (0x0000bba7) signal_pane_ParamLimits

0x6384,	// (0x0000bba7) signal_pane

0x0008,

0xf897,	// (0x000150ba) bg_status_flat_pane_g

0x6410,	// (0x0000bc33) status_pane_g1_ParamLimits

0x6410,	// (0x0000bc33) status_pane_g1

0x641c,	// (0x0000bc3f) status_pane_g2_ParamLimits

0x641c,	// (0x0000bc3f) status_pane_g2

0xd8b5,	// (0x000130d8) status_pane_g3_ParamLimits

0xd8b5,	// (0x000130d8) status_pane_g3

0x0004,

0xf7d1,	// (0x00014ff4) status_pane_g_ParamLimits

0xf7d1,	// (0x00014ff4) status_pane_g

0x6428,	// (0x0000bc4b) title_pane_ParamLimits

0x6428,	// (0x0000bc4b) title_pane

0x6483,	// (0x0000bca6) uni_indicator_pane_ParamLimits

0x6483,	// (0x0000bca6) uni_indicator_pane

0xd6a9,	// (0x00012ecc) bg_list_pane_ParamLimits

0xd6a9,	// (0x00012ecc) bg_list_pane

0x5b7d,	// (0x0000b3a0) find_pane

0x5b85,	// (0x0000b3a8) listscroll_app_pane_ParamLimits

0x5b85,	// (0x0000b3a8) listscroll_app_pane

0xd6c9,	// (0x00012eec) listscroll_form_pane

0x5b91,	// (0x0000b3b4) listscroll_gen_pane_ParamLimits

0x5b91,	// (0x0000b3b4) listscroll_gen_pane

0xd6c9,	// (0x00012eec) listscroll_set_pane

0x5ba6,	// (0x0000b3c9) main_idle_act_pane

0xc1ad,	// (0x000119d0) main_idle_trad_pane

0xc1ad,	// (0x000119d0) main_list_empty_pane

0xd685,	// (0x00012ea8) main_midp_pane

0xd6e3,	// (0x00012f06) main_pane_g1_ParamLimits

0xd6e3,	// (0x00012f06) main_pane_g1

0x5bb9,	// (0x0000b3dc) popup_ai_message_window_ParamLimits

0x5bb9,	// (0x0000b3dc) popup_ai_message_window

0x5c3d,	// (0x0000b460) popup_fep_china_uni_window_ParamLimits

0x5c3d,	// (0x0000b460) popup_fep_china_uni_window

0xd71b,	// (0x00012f3e) popup_fep_japan_candidate_window_ParamLimits

0xd71b,	// (0x00012f3e) popup_fep_japan_candidate_window

0xd739,	// (0x00012f5c) popup_fep_japan_predictive_window_ParamLimits

0xd739,	// (0x00012f5c) popup_fep_japan_predictive_window

0x5c7b,	// (0x0000b49e) popup_find_window

0x5c94,	// (0x0000b4b7) popup_grid_graphic_window_ParamLimits

0x5c94,	// (0x0000b4b7) popup_grid_graphic_window

0xd765,	// (0x00012f88) popup_large_graphic_colour_window

0x5d10,	// (0x0000b533) popup_menu_window_ParamLimits

0x5d10,	// (0x0000b533) popup_menu_window

0x5e6e,	// (0x0000b691) popup_note_image_window

0x5e36,	// (0x0000b659) popup_note_wait_window_ParamLimits

0x5e36,	// (0x0000b659) popup_note_wait_window

0x5e84,	// (0x0000b6a7) popup_note_window_ParamLimits

0x5e84,	// (0x0000b6a7) popup_note_window

0x5f18,	// (0x0000b73b) popup_query_code_window_ParamLimits

0x5f18,	// (0x0000b73b) popup_query_code_window

0xd784,	// (0x00012fa7) popup_query_data_code_window_ParamLimits

0xd784,	// (0x00012fa7) popup_query_data_code_window

0x5f50,	// (0x0000b773) popup_query_data_window_ParamLimits

0x5f50,	// (0x0000b773) popup_query_data_window

0x5fc4,	// (0x0000b7e7) popup_query_sat_info_window_ParamLimits

0x5fc4,	// (0x0000b7e7) popup_query_sat_info_window

0x6051,	// (0x0000b874) popup_snote_single_graphic_window_ParamLimits

0x6051,	// (0x0000b874) popup_snote_single_graphic_window

0x6051,	// (0x0000b874) popup_snote_single_text_window_ParamLimits

0x6051,	// (0x0000b874) popup_snote_single_text_window

0xd799,	// (0x00012fbc) popup_sub_window_general

0xd7db,	// (0x00012ffe) popup_window_general_ParamLimits

0xd7db,	// (0x00012ffe) popup_window_general

0xd7ee,	// (0x00013011) power_save_pane

0xcf76,	// (0x00012799) control_pane_g1_ParamLimits

0xcf76,	// (0x00012799) control_pane_g1

0x92d5,	// (0x0000eaf8) control_pane_g2_ParamLimits

0x92d5,	// (0x0000eaf8) control_pane_g2

0xc466,	// (0x00011c89) control_pane_g3_ParamLimits

0xc466,	// (0x00011c89) control_pane_g3

0x0007,

0xf7b9,	// (0x00014fdc) control_pane_g_ParamLimits

0xf7b9,	// (0x00014fdc) control_pane_g

0xcfac,	// (0x000127cf) control_pane_t1_ParamLimits

0xcfac,	// (0x000127cf) control_pane_t1

0xd008,	// (0x0001282b) control_pane_t2_ParamLimits

0xd008,	// (0x0001282b) control_pane_t2

0x0002,

0xf7ca,	// (0x00014fed) control_pane_t_ParamLimits

0xf7ca,	// (0x00014fed) control_pane_t

0xc389,	// (0x00011bac) navi_navi_volume_pane_cp1

0xc392,	// (0x00011bb5) status_small_icon_pane

0xc39a,	// (0x00011bbd) status_small_pane_g1_ParamLimits

0xc39a,	// (0x00011bbd) status_small_pane_g1

0xc3ce,	// (0x00011bf1) status_small_pane_g2_ParamLimits

0xc3ce,	// (0x00011bf1) status_small_pane_g2

0xc3da,	// (0x00011bfd) status_small_pane_g3_ParamLimits

0xc3da,	// (0x00011bfd) status_small_pane_g3

0xc3e6,	// (0x00011c09) status_small_pane_g4_ParamLimits

0xc3e6,	// (0x00011c09) status_small_pane_g4

0xc3f2,	// (0x00011c15) status_small_pane_g5_ParamLimits

0xc3f2,	// (0x00011c15) status_small_pane_g5

0xc3ff,	// (0x00011c22) status_small_pane_g6_ParamLimits

0xc3ff,	// (0x00011c22) status_small_pane_g6

0x0007,

0xf7a8,	// (0x00014fcb) status_small_pane_g_ParamLimits

0xf7a8,	// (0x00014fcb) status_small_pane_g

0xc42f,	// (0x00011c52) status_small_pane_t1

0xc452,	// (0x00011c75) status_small_wait_pane_ParamLimits

0xc452,	// (0x00011c75) status_small_wait_pane

0x5862,	// (0x0000b085) aid_levels_signal_ParamLimits

0x5862,	// (0x0000b085) aid_levels_signal

0x5876,	// (0x0000b099) signal_pane_g1_ParamLimits

0x5876,	// (0x0000b099) signal_pane_g1

0x5890,	// (0x0000b0b3) signal_pane_g2_ParamLimits

0x5890,	// (0x0000b0b3) signal_pane_g2

0x0001,

0xf73d,	// (0x00014f60) signal_pane_g_ParamLimits

0xf73d,	// (0x00014f60) signal_pane_g

0xbc80,	// (0x000114a3) context_pane_g1

0x4e32,	// (0x0000a655) title_pane_g1

0x4e74,	// (0x0000a697) title_pane_t1

0xa6d2,	// (0x0000fef5) title_pane_t2

0xa6f8,	// (0x0000ff1b) title_pane_t3

0x0002,

0xf59b,	// (0x00014dbe) title_pane_t

0x64a9,	// (0x0000bccc) aid_levels_battery_ParamLimits

0x64a9,	// (0x0000bccc) aid_levels_battery

0x64c1,	// (0x0000bce4) battery_pane_g1_ParamLimits

0x64c1,	// (0x0000bce4) battery_pane_g1

0x64dc,	// (0x0000bcff) battery_pane_g2_ParamLimits

0x64dc,	// (0x0000bcff) battery_pane_g2

0x0001,

0xf7dc,	// (0x00014fff) battery_pane_g_ParamLimits

0xf7dc,	// (0x00014fff) battery_pane_g

0x6861,	// (0x0000c084) uni_indicator_pane_g1

0x6876,	// (0x0000c099) uni_indicator_pane_g2

0x688c,	// (0x0000c0af) uni_indicator_pane_g3

0x0005,

0xf93f,	// (0x00015162) uni_indicator_pane_g

0xb638,	// (0x00010e5b) navi_icon_pane_ParamLimits

0xb638,	// (0x00010e5b) navi_icon_pane

0xa62a,	// (0x0000fe4d) navi_midp_pane

0xa62a,	// (0x0000fe4d) navi_navi_pane

0xb638,	// (0x00010e5b) navi_text_pane_ParamLimits

0xb638,	// (0x00010e5b) navi_text_pane

0xa543,	// (0x0000fd66) status_small_wait_pane_g1

0xab71,	// (0x00010394) status_small_wait_pane_g2

0x0001,

0xf93a,	// (0x0001515d) status_small_wait_pane_g

0x6807,	// (0x0000c02a) navi_navi_icon_text_pane

0x6821,	// (0x0000c044) navi_navi_pane_g1_ParamLimits

0x6821,	// (0x0000c044) navi_navi_pane_g1

0x680f,	// (0x0000c032) navi_navi_pane_g2_ParamLimits

0x680f,	// (0x0000c032) navi_navi_pane_g2

0x0001,

0xf908,	// (0x0001512b) navi_navi_pane_g_ParamLimits

0xf908,	// (0x0001512b) navi_navi_pane_g

0x6833,	// (0x0000c056) navi_navi_tabs_pane

0x6807,	// (0x0000c02a) navi_navi_text_pane

0x6807,	// (0x0000c02a) navi_navi_volume_pane

0xe63b,	// (0x00013e5e) navi_text_pane_t1

0xe62f,	// (0x00013e52) navi_icon_pane_g1

0xe583,	// (0x00013da6) navi_navi_text_pane_t1

0x96dd,	// (0x0000ef00) navi_navi_volume_pane_g1

0xd1f7,	// (0x00012a1a) volume_small_pane

0x675a,	// (0x0000bf7d) navi_navi_icon_text_pane_g1

0x6762,	// (0x0000bf85) navi_navi_icon_text_pane_t1

0xe13d,	// (0x00013960) navi_tabs_2_long_pane

0xe13d,	// (0x00013960) navi_tabs_2_pane

0xe13d,	// (0x00013960) navi_tabs_3_long_pane

0xe13d,	// (0x00013960) navi_tabs_3_pane

0xe13d,	// (0x00013960) navi_tabs_4_pane

0xd1d7,	// (0x000129fa) tabs_2_active_pane_ParamLimits

0xd1d7,	// (0x000129fa) tabs_2_active_pane

0xd1e7,	// (0x00012a0a) tabs_2_passive_pane_ParamLimits

0xd1e7,	// (0x00012a0a) tabs_2_passive_pane

0xd1a5,	// (0x000129c8) tabs_3_active_pane_ParamLimits

0xd1a5,	// (0x000129c8) tabs_3_active_pane

0xd1b5,	// (0x000129d8) tabs_3_passive_pane_ParamLimits

0xd1b5,	// (0x000129d8) tabs_3_passive_pane

0xd1c6,	// (0x000129e9) tabs_3_passive_pane_cp_ParamLimits

0xd1c6,	// (0x000129e9) tabs_3_passive_pane_cp

0xd161,	// (0x00012984) tabs_4_active_pane_ParamLimits

0xd161,	// (0x00012984) tabs_4_active_pane

0xd172,	// (0x00012995) tabs_4_passive_pane_ParamLimits

0xd172,	// (0x00012995) tabs_4_passive_pane

0xd183,	// (0x000129a6) tabs_4_passive_pane_cp_ParamLimits

0xd183,	// (0x000129a6) tabs_4_passive_pane_cp

0xd194,	// (0x000129b7) tabs_4_passive_pane_cp2_ParamLimits

0xd194,	// (0x000129b7) tabs_4_passive_pane_cp2

0xd141,	// (0x00012964) tabs_2_long_active_pane_ParamLimits

0xd141,	// (0x00012964) tabs_2_long_active_pane

0xd151,	// (0x00012974) tabs_2_long_passive_pane_ParamLimits

0xd151,	// (0x00012974) tabs_2_long_passive_pane

0xd10a,	// (0x0001292d) tabs_3_long_active_pane_ParamLimits

0xd10a,	// (0x0001292d) tabs_3_long_active_pane

0xd11d,	// (0x00012940) tabs_3_long_passive_pane_ParamLimits

0xd11d,	// (0x00012940) tabs_3_long_passive_pane

0xd12e,	// (0x00012951) tabs_3_long_passive_pane_cp_ParamLimits

0xd12e,	// (0x00012951) tabs_3_long_passive_pane_cp

0x9598,	// (0x0000edbb) volume_small_pane_g1

0x95a1,	// (0x0000edc4) volume_small_pane_g2

0x95aa,	// (0x0000edcd) volume_small_pane_g3

0x95b3,	// (0x0000edd6) volume_small_pane_g4

0x95bc,	// (0x0000eddf) volume_small_pane_g5

0x95c5,	// (0x0000ede8) volume_small_pane_g6

0x95ce,	// (0x0000edf1) volume_small_pane_g7

0x95d7,	// (0x0000edfa) volume_small_pane_g8

0x95e0,	// (0x0000ee03) volume_small_pane_g9

0x95e9,	// (0x0000ee0c) volume_small_pane_g10

0x0009,

0xf8d4,	// (0x000150f7) volume_small_pane_g

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp2_ParamLimits

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp2

0xa718,	// (0x0000ff3b) tabs_3_active_pane_g1

0x4f01,	// (0x0000a724) tabs_3_active_pane_t1

0xa9a3,	// (0x000101c6) bg_passive_tab_pane_cp2_ParamLimits

0xa9a3,	// (0x000101c6) bg_passive_tab_pane_cp2

0xa718,	// (0x0000ff3b) tabs_3_passive_pane_g1

0x4f01,	// (0x0000a724) tabs_3_passive_pane_t1

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp3_ParamLimits

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp3

0xeae8,	// (0x0001430b) tabs_4_active_pane_g1

0x4f17,	// (0x0000a73a) tabs_4_active_pane_t1

0xa9a3,	// (0x000101c6) bg_passive_tab_pane_cp3_ParamLimits

0xa9a3,	// (0x000101c6) bg_passive_tab_pane_cp3

0xeae8,	// (0x0001430b) tabs_4_1_passive_pane_g1

0x4f17,	// (0x0000a73a) tabs_4_1_passive_pane_t1

0xd685,	// (0x00012ea8) list_highlight_pane_cp2

0x695a,	// (0x0000c17d) list_set_pane_ParamLimits

0x695a,	// (0x0000c17d) list_set_pane

0x69e8,	// (0x0000c20b) main_pane_set_t1_ParamLimits

0x69e8,	// (0x0000c20b) main_pane_set_t1

0x6a08,	// (0x0000c22b) main_pane_set_t2_ParamLimits

0x6a08,	// (0x0000c22b) main_pane_set_t2

0x6a1c,	// (0x0000c23f) main_pane_set_t3_ParamLimits

0x6a1c,	// (0x0000c23f) main_pane_set_t3

0x6a2e,	// (0x0000c251) main_pane_set_t4_ParamLimits

0x6a2e,	// (0x0000c251) main_pane_set_t4

0x0003,

0xf9a4,	// (0x000151c7) main_pane_set_t_ParamLimits

0xf9a4,	// (0x000151c7) main_pane_set_t

0x6a40,	// (0x0000c263) setting_code_pane

0x6a48,	// (0x0000c26b) setting_slider_graphic_pane

0x6a48,	// (0x0000c26b) setting_slider_pane

0x6a48,	// (0x0000c26b) setting_text_pane

0x6a48,	// (0x0000c26b) setting_volume_pane

0xcf0f,	// (0x00012732) volume_set_pane

0xa70a,	// (0x0000ff2d) bg_set_opt_pane_cp

0x8e28,	// (0x0000e64b) setting_slider_pane_t1

0xcf17,	// (0x0001273a) setting_slider_pane_t2

0xcf30,	// (0x00012753) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00014dc5) setting_slider_pane_t

0x8e6e,	// (0x0000e691) slider_set_pane

0xa62a,	// (0x0000fe4d) bg_set_opt_pane_cp2

0xa74c,	// (0x0000ff6f) setting_slider_graphic_pane_g1

0xcf47,	// (0x0001276a) setting_slider_graphic_pane_t1

0xcf56,	// (0x00012779) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00014dcc) setting_slider_graphic_pane_t

0xcf65,	// (0x00012788) slider_set_pane_cp

0xa62a,	// (0x0000fe4d) input_focus_pane_cp1

0xeb16,	// (0x00014339) list_set_text_pane

0xa543,	// (0x0000fd66) setting_text_pane_g1

0xa62a,	// (0x0000fe4d) input_focus_pane_cp2

0xa543,	// (0x0000fd66) setting_code_pane_g1

0xa755,	// (0x0000ff78) setting_code_pane_t1

0x4077,	// (0x0000989a) set_text_pane_t1_ParamLimits

0x4077,	// (0x0000989a) set_text_pane_t1

0xb546,	// (0x00010d69) set_opt_bg_pane_g1

0xb54e,	// (0x00010d71) set_opt_bg_pane_g2

0x691a,	// (0x0000c13d) set_opt_bg_pane_g3

0xb55e,	// (0x00010d81) set_opt_bg_pane_g4

0xb566,	// (0x00010d89) set_opt_bg_pane_g5

0xb56e,	// (0x00010d91) set_opt_bg_pane_g6

0x6922,	// (0x0000c145) set_opt_bg_pane_g7

0x692a,	// (0x0000c14d) set_opt_bg_pane_g8

0x6932,	// (0x0000c155) set_opt_bg_pane_g9

0x0008,

0xf991,	// (0x000151b4) set_opt_bg_pane_g

0xea7e,	// (0x000142a1) slider_set_pane_g1

0x9752,	// (0x0000ef75) slider_set_pane_g2

0x0006,

0xf982,	// (0x000151a5) slider_set_pane_g

0xd200,	// (0x00012a23) volume_set_pane_g1

0xd208,	// (0x00012a2b) volume_set_pane_g2

0xd210,	// (0x00012a33) volume_set_pane_g3

0xd218,	// (0x00012a3b) volume_set_pane_g4

0xd220,	// (0x00012a43) volume_set_pane_g5

0xd228,	// (0x00012a4b) volume_set_pane_g6

0xd230,	// (0x00012a53) volume_set_pane_g7

0xd238,	// (0x00012a5b) volume_set_pane_g8

0xd240,	// (0x00012a63) volume_set_pane_g9

0xd248,	// (0x00012a6b) volume_set_pane_g10

0x0009,

0xf95a,	// (0x0001517d) volume_set_pane_g

0x4f8b,	// (0x0000a7ae) indicator_pane_ParamLimits

0x4f8b,	// (0x0000a7ae) indicator_pane

0x4fb3,	// (0x0000a7d6) main_idle_pane_g2_ParamLimits

0x4fb3,	// (0x0000a7d6) main_idle_pane_g2

0x4fe3,	// (0x0000a806) main_pane_idle_g1_ParamLimits

0x4fe3,	// (0x0000a806) main_pane_idle_g1

0xa7bb,	// (0x0000ffde) popup_clock_digital_analogue_window_ParamLimits

0xa7bb,	// (0x0000ffde) popup_clock_digital_analogue_window

0x5008,	// (0x0000a82b) soft_indicator_pane_ParamLimits

0x5008,	// (0x0000a82b) soft_indicator_pane

0x5022,	// (0x0000a845) wallpaper_pane_ParamLimits

0x5022,	// (0x0000a845) wallpaper_pane

0xa543,	// (0x0000fd66) wallpaper_pane_g1

0x5034,	// (0x0000a857) indicator_pane_g1_ParamLimits

0x5034,	// (0x0000a857) indicator_pane_g1

0xec23,	// (0x00014446) navi_navi_icon_text_pane_srt_g1

0xa80d,	// (0x00010030) soft_indicator_pane_t1

0xa827,	// (0x0001004a) aid_ps_area_pane

0x504d,	// (0x0000a870) aid_ps_clock_pane

0xa844,	// (0x00010067) aid_ps_indicator_pane

0xa850,	// (0x00010073) indicator_ps_pane_ParamLimits

0xa850,	// (0x00010073) indicator_ps_pane

0xa85f,	// (0x00010082) power_save_pane_g1_ParamLimits

0xa85f,	// (0x00010082) power_save_pane_g1

0xa86b,	// (0x0001008e) power_save_pane_g2_ParamLimits

0xa86b,	// (0x0001008e) power_save_pane_g2

0x8b93,	// (0x0000e3b6) aid_navinavi_width_pane

0xa827,	// (0x0001004a) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00014dd1) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00014dd1) power_save_pane_g

0xa879,	// (0x0001009c) power_save_pane_t1_ParamLimits

0xa879,	// (0x0001009c) power_save_pane_t1

0x504d,	// (0x0000a870) aid_ps_clock_pane_ParamLimits

0xa844,	// (0x00010067) aid_ps_indicator_pane_ParamLimits

0xa88b,	// (0x000100ae) power_save_pane_t4_ParamLimits

0xa88b,	// (0x000100ae) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00014dd6) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00014dd6) power_save_pane_t

0xa8b5,	// (0x000100d8) power_save_t3_ParamLimits

0xa8b5,	// (0x000100d8) power_save_t3

0xa8a0,	// (0x000100c3) power_save_t2_ParamLimits

0xa8a0,	// (0x000100c3) power_save_t2

0xa8ca,	// (0x000100ed) indicator_ps_pane_g1

0x5059,	// (0x0000a87c) ai_gene_pane_ParamLimits

0x5059,	// (0x0000a87c) ai_gene_pane

0x5070,	// (0x0000a893) ai_links_pane_ParamLimits

0x5070,	// (0x0000a893) ai_links_pane

0x5082,	// (0x0000a8a5) indicator_pane_cp1_ParamLimits

0x5082,	// (0x0000a8a5) indicator_pane_cp1

0x5091,	// (0x0000a8b4) main_pane_idle_g1_cp_ParamLimits

0x5091,	// (0x0000a8b4) main_pane_idle_g1_cp

0xa903,	// (0x00010126) popup_ai_links_title_window

0x50a9,	// (0x0000a8cc) soft_indicator_pane_cp1_ParamLimits

0x50a9,	// (0x0000a8cc) soft_indicator_pane_cp1

0xe8c0,	// (0x000140e3) ai_links_pane_g1

0xe8c9,	// (0x000140ec) grid_ai_links_pane

0x6858,	// (0x0000c07b) ai_gene_pane_1

0xe8ae,	// (0x000140d1) ai_gene_pane_2

0xe8b7,	// (0x000140da) list_highlight_pane_cp4

0x683c,	// (0x0000c05f) cell_ai_link_pane_ParamLimits

0x683c,	// (0x0000c05f) cell_ai_link_pane

0xe8a6,	// (0x000140c9) cell_ai_link_pane_g1

0xab71,	// (0x00010394) cell_ai_link_pane_g2

0x0001,

0xf935,	// (0x00015158) cell_ai_link_pane_g

0xa62a,	// (0x0000fe4d) grid_highlight_cp2

0xa62a,	// (0x0000fe4d) bg_popup_sub_pane_cp1

0xa926,	// (0x00010149) popup_ai_links_title_window_t1

0xe7f8,	// (0x0001401b) ai_gene_pane_1_g1_ParamLimits

0xe7f8,	// (0x0001401b) ai_gene_pane_1_g1

0xe804,	// (0x00014027) ai_gene_pane_1_g2_ParamLimits

0xe804,	// (0x00014027) ai_gene_pane_1_g2

0x0001,

0xf92b,	// (0x0001514e) ai_gene_pane_1_g_ParamLimits

0xf92b,	// (0x0001514e) ai_gene_pane_1_g

0xe811,	// (0x00014034) ai_gene_pane_1_t1_ParamLimits

0xe811,	// (0x00014034) ai_gene_pane_1_t1

0xe845,	// (0x00014068) grid_ai_soft_ind_pane

0xe7e3,	// (0x00014006) ai_gene_pane_2_t1_ParamLimits

0xe7e3,	// (0x00014006) ai_gene_pane_2_t1

0x50bd,	// (0x0000a8e0) main_pane_empty_t1_ParamLimits

0x50bd,	// (0x0000a8e0) main_pane_empty_t1

0x50da,	// (0x0000a8fd) main_pane_empty_t2_ParamLimits

0x50da,	// (0x0000a8fd) main_pane_empty_t2

0x50f2,	// (0x0000a915) main_pane_empty_t3_ParamLimits

0x50f2,	// (0x0000a915) main_pane_empty_t3

0x5105,	// (0x0000a928) main_pane_empty_t4_ParamLimits

0x5105,	// (0x0000a928) main_pane_empty_t4

0x5118,	// (0x0000a93b) main_pane_empty_t5_ParamLimits

0x5118,	// (0x0000a93b) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00014ddb) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00014ddb) main_pane_empty_t

0xb638,	// (0x00010e5b) bg_popup_window_pane_ParamLimits

0xb638,	// (0x00010e5b) bg_popup_window_pane

0xe592,	// (0x00013db5) find_popup_pane_cp2_ParamLimits

0xe592,	// (0x00013db5) find_popup_pane_cp2

0xe59e,	// (0x00013dc1) heading_pane_ParamLimits

0xe59e,	// (0x00013dc1) heading_pane

0xa62a,	// (0x0000fe4d) bg_popup_sub_pane

0x677f,	// (0x0000bfa2) bg_popup_window_pane_g1_ParamLimits

0x677f,	// (0x0000bfa2) bg_popup_window_pane_g1

0x678e,	// (0x0000bfb1) bg_popup_window_pane_g2_ParamLimits

0x678e,	// (0x0000bfb1) bg_popup_window_pane_g2

0x679a,	// (0x0000bfbd) bg_popup_window_pane_g3_ParamLimits

0x679a,	// (0x0000bfbd) bg_popup_window_pane_g3

0x67a6,	// (0x0000bfc9) bg_popup_window_pane_g4_ParamLimits

0x67a6,	// (0x0000bfc9) bg_popup_window_pane_g4

0x67b5,	// (0x0000bfd8) bg_popup_window_pane_g5_ParamLimits

0x67b5,	// (0x0000bfd8) bg_popup_window_pane_g5

0x67c5,	// (0x0000bfe8) bg_popup_window_pane_g6_ParamLimits

0x67c5,	// (0x0000bfe8) bg_popup_window_pane_g6

0x67d1,	// (0x0000bff4) bg_popup_window_pane_g7_ParamLimits

0x67d1,	// (0x0000bff4) bg_popup_window_pane_g7

0x67e0,	// (0x0000c003) bg_popup_window_pane_g8_ParamLimits

0x67e0,	// (0x0000c003) bg_popup_window_pane_g8

0x67ef,	// (0x0000c012) bg_popup_window_pane_g9_ParamLimits

0x67ef,	// (0x0000c012) bg_popup_window_pane_g9

0xe577,	// (0x00013d9a) bg_popup_window_pane_g10_ParamLimits

0xe577,	// (0x00013d9a) bg_popup_window_pane_g10

0x0009,

0xf8f3,	// (0x00015116) bg_popup_window_pane_g_ParamLimits

0xf8f3,	// (0x00015116) bg_popup_window_pane_g

0xe52e,	// (0x00013d51) bg_popup_heading_pane_ParamLimits

0xe52e,	// (0x00013d51) bg_popup_heading_pane

0x97da,	// (0x0000effd) tabs_4_passive_pane_cp_srt_ParamLimits

0x97da,	// (0x0000effd) tabs_4_passive_pane_cp_srt

0x97ec,	// (0x0000f00f) tabs_4_passive_pane_srt_ParamLimits

0xe542,	// (0x00013d65) heading_pane_g2

0x97ec,	// (0x0000f00f) tabs_4_passive_pane_srt

0xdab3,	// (0x000132d6) bg_passive_tab_pane_cp3_srt_ParamLimits

0xdab3,	// (0x000132d6) bg_passive_tab_pane_cp3_srt

0xe54a,	// (0x00013d6d) heading_pane_t1_ParamLimits

0xe54a,	// (0x00013d6d) heading_pane_t1

0xe561,	// (0x00013d84) heading_pane_t2_ParamLimits

0xe561,	// (0x00013d84) heading_pane_t2

0x0001,

0xf8ee,	// (0x00015111) heading_pane_t_ParamLimits

0xf8ee,	// (0x00015111) heading_pane_t

0xe0bd,	// (0x000138e0) bg_popup_heading_pane_g1

0xe14e,	// (0x00013971) bg_popup_heading_pane_g2

0xe156,	// (0x00013979) bg_popup_heading_pane_g3

0xe15e,	// (0x00013981) bg_popup_heading_pane_g4

0xe166,	// (0x00013989) bg_popup_heading_pane_g5

0xe16e,	// (0x00013991) bg_popup_heading_pane_g6

0xe176,	// (0x00013999) bg_popup_heading_pane_g7

0xe17e,	// (0x000139a1) bg_popup_heading_pane_g8

0xe186,	// (0x000139a9) bg_popup_heading_pane_g9

0x0008,

0xf8aa,	// (0x000150cd) bg_popup_heading_pane_g

0xd99d,	// (0x000131c0) bg_popup_sub_pane_g1

0xd9ad,	// (0x000131d0) bg_popup_sub_pane_g2

0xd9a5,	// (0x000131c8) bg_popup_sub_pane_g3

0xd9bd,	// (0x000131e0) bg_popup_sub_pane_g4

0xd9b5,	// (0x000131d8) bg_popup_sub_pane_g5

0xd9c5,	// (0x000131e8) bg_popup_sub_pane_g6

0xd9cd,	// (0x000131f0) bg_popup_sub_pane_g7

0xd9dd,	// (0x00013200) bg_popup_sub_pane_g8

0xd9d5,	// (0x000131f8) bg_popup_sub_pane_g9

0x0008,

0xf884,	// (0x000150a7) bg_popup_sub_pane_g

0xa9a3,	// (0x000101c6) bg_popup_window_pane_cp5_ParamLimits

0xa9a3,	// (0x000101c6) bg_popup_window_pane_cp5

0xa9eb,	// (0x0001020e) popup_note_window_g1_ParamLimits

0xa9eb,	// (0x0001020e) popup_note_window_g1

0xa9f7,	// (0x0001021a) popup_note_window_t1_ParamLimits

0xa9f7,	// (0x0001021a) popup_note_window_t1

0xaa0d,	// (0x00010230) popup_note_window_t2_ParamLimits

0xaa0d,	// (0x00010230) popup_note_window_t2

0xaa23,	// (0x00010246) popup_note_window_t3_ParamLimits

0xaa23,	// (0x00010246) popup_note_window_t3

0xaa39,	// (0x0001025c) popup_note_window_t4_ParamLimits

0xaa39,	// (0x0001025c) popup_note_window_t4

0xaa61,	// (0x00010284) popup_note_window_t5_ParamLimits

0xaa61,	// (0x00010284) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00014de6) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00014de6) popup_note_window_t

0xaa85,	// (0x000102a8) bg_popup_window_pane_cp6_ParamLimits

0xaa85,	// (0x000102a8) bg_popup_window_pane_cp6

0xe039,	// (0x0001385c) popup_note_image_window_g1_ParamLimits

0xe039,	// (0x0001385c) popup_note_image_window_g1

0xe045,	// (0x00013868) popup_note_image_window_g2_ParamLimits

0xe045,	// (0x00013868) popup_note_image_window_g2

0x0001,

0xf878,	// (0x0001509b) popup_note_image_window_g_ParamLimits

0xf878,	// (0x0001509b) popup_note_image_window_g

0xe05e,	// (0x00013881) popup_note_image_window_t1_ParamLimits

0xe05e,	// (0x00013881) popup_note_image_window_t1

0xe077,	// (0x0001389a) popup_note_image_window_t2_ParamLimits

0xe077,	// (0x0001389a) popup_note_image_window_t2

0xe090,	// (0x000138b3) popup_note_image_window_t3_ParamLimits

0xe090,	// (0x000138b3) popup_note_image_window_t3

0x0002,

0xf87d,	// (0x000150a0) popup_note_image_window_t_ParamLimits

0xf87d,	// (0x000150a0) popup_note_image_window_t

0xdf24,	// (0x00013747) bg_popup_window_pane_cp7_ParamLimits

0xdf24,	// (0x00013747) bg_popup_window_pane_cp7

0xdf54,	// (0x00013777) popup_note_wait_window_g1_ParamLimits

0xdf54,	// (0x00013777) popup_note_wait_window_g1

0xdf60,	// (0x00013783) popup_note_wait_window_g2_ParamLimits

0xdf60,	// (0x00013783) popup_note_wait_window_g2

0x0002,

0xf866,	// (0x00015089) popup_note_wait_window_g_ParamLimits

0xf866,	// (0x00015089) popup_note_wait_window_g

0xdf78,	// (0x0001379b) popup_note_wait_window_t1_ParamLimits

0xdf78,	// (0x0001379b) popup_note_wait_window_t1

0xdf9f,	// (0x000137c2) popup_note_wait_window_t2_ParamLimits

0xdf9f,	// (0x000137c2) popup_note_wait_window_t2

0xdfbc,	// (0x000137df) popup_note_wait_window_t3_ParamLimits

0xdfbc,	// (0x000137df) popup_note_wait_window_t3

0xdfcf,	// (0x000137f2) popup_note_wait_window_t4_ParamLimits

0xdfcf,	// (0x000137f2) popup_note_wait_window_t4

0x0004,

0xf86d,	// (0x00015090) popup_note_wait_window_t_ParamLimits

0xf86d,	// (0x00015090) popup_note_wait_window_t

0xdff4,	// (0x00013817) wait_bar_pane_ParamLimits

0xdff4,	// (0x00013817) wait_bar_pane

0xa62a,	// (0x0000fe4d) wait_anim_pane

0xa62a,	// (0x0000fe4d) wait_border_pane

0xa543,	// (0x0000fd66) wait_anim_pane_g1

0xa543,	// (0x0000fd66) wait_anim_pane_g2

0x0001,

0xf738,	// (0x00014f5b) wait_anim_pane_g

0xdec8,	// (0x000136eb) wait_border_pane_g1

0xdedd,	// (0x00013700) wait_border_pane_g2

0xdee6,	// (0x00013709) wait_border_pane_g3

0x0002,

0xf85f,	// (0x00015082) wait_border_pane_g

0xde2a,	// (0x0001364d) bg_popup_window_pane_cp16_ParamLimits

0xde2a,	// (0x0001364d) bg_popup_window_pane_cp16

0xde38,	// (0x0001365b) indicator_popup_pane_cp4_ParamLimits

0xde38,	// (0x0001365b) indicator_popup_pane_cp4

0xde4c,	// (0x0001366f) popup_query_data_window_t1_ParamLimits

0xde4c,	// (0x0001366f) popup_query_data_window_t1

0xde5e,	// (0x00013681) popup_query_data_window_t2_ParamLimits

0xde5e,	// (0x00013681) popup_query_data_window_t2

0xde77,	// (0x0001369a) popup_query_data_window_t3_ParamLimits

0xde77,	// (0x0001369a) popup_query_data_window_t3

0x0002,

0xf858,	// (0x0001507b) popup_query_data_window_t_ParamLimits

0xf858,	// (0x0001507b) popup_query_data_window_t

0xde91,	// (0x000136b4) query_popup_data_pane_ParamLimits

0xde91,	// (0x000136b4) query_popup_data_pane

0xdea5,	// (0x000136c8) query_popup_data_pane_cp1_ParamLimits

0xdea5,	// (0x000136c8) query_popup_data_pane_cp1

0xaa85,	// (0x000102a8) bg_popup_window_pane_cp10_ParamLimits

0xaa85,	// (0x000102a8) bg_popup_window_pane_cp10

0xdd8d,	// (0x000135b0) indicator_popup_pane_ParamLimits

0xdd8d,	// (0x000135b0) indicator_popup_pane

0xaadc,	// (0x000102ff) popup_query_code_window_t1_ParamLimits

0xaadc,	// (0x000102ff) popup_query_code_window_t1

0xdda5,	// (0x000135c8) popup_query_code_window_t2_ParamLimits

0xdda5,	// (0x000135c8) popup_query_code_window_t2

0xdde3,	// (0x00013606) popup_query_code_window_t3_ParamLimits

0xdde3,	// (0x00013606) popup_query_code_window_t3

0x0002,

0xf851,	// (0x00015074) popup_query_code_window_t_ParamLimits

0xf851,	// (0x00015074) popup_query_code_window_t

0xde12,	// (0x00013635) query_popup_pane_ParamLimits

0xde12,	// (0x00013635) query_popup_pane

0xaa85,	// (0x000102a8) bg_popup_window_pane_cp15_ParamLimits

0xaa85,	// (0x000102a8) bg_popup_window_pane_cp15

0xaaa3,	// (0x000102c6) indicator_popup_pane_cp1_ParamLimits

0xaaa3,	// (0x000102c6) indicator_popup_pane_cp1

0xaab6,	// (0x000102d9) indicator_popup_pane_cp2_ParamLimits

0xaab6,	// (0x000102d9) indicator_popup_pane_cp2

0xaac9,	// (0x000102ec) popup_query_data_code_window_g1_ParamLimits

0xaac9,	// (0x000102ec) popup_query_data_code_window_g1

0xaadc,	// (0x000102ff) popup_query_data_code_window_t1_ParamLimits

0xaadc,	// (0x000102ff) popup_query_data_code_window_t1

0xaaee,	// (0x00010311) popup_query_data_code_window_t2_ParamLimits

0xaaee,	// (0x00010311) popup_query_data_code_window_t2

0xab00,	// (0x00010323) popup_query_data_code_window_t3_ParamLimits

0xab00,	// (0x00010323) popup_query_data_code_window_t3

0xab16,	// (0x00010339) popup_query_data_code_window_t4_ParamLimits

0xab16,	// (0x00010339) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00014df1) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00014df1) popup_query_data_code_window_t

0x94b3,	// (0x0000ecd6) list_single_midp_graphic_pane_g3

0xab2e,	// (0x00010351) query_popup_data_pane_cp2_ParamLimits

0xab41,	// (0x00010364) query_popup_pane_cp2_ParamLimits

0xab41,	// (0x00010364) query_popup_pane_cp2

0xa62a,	// (0x0000fe4d) bg_popup_window_pane_cp11

0xdd61,	// (0x00013584) heading_pane_cp5

0xac25,	// (0x00010448) listscroll_popup_info_pane

0xa62a,	// (0x0000fe4d) input_focus_pane_cp3

0xab54,	// (0x00010377) query_popup_pane_t1

0xab62,	// (0x00010385) list_popup_info_pane_ParamLimits

0xab62,	// (0x00010385) list_popup_info_pane

0xab71,	// (0x00010394) listscroll_popup_info_pane_g1

0xab79,	// (0x0001039c) scroll_pane_cp7

0xab81,	// (0x000103a4) popup_info_list_pane_t1_ParamLimits

0xab81,	// (0x000103a4) popup_info_list_pane_t1

0xab9b,	// (0x000103be) popup_info_list_pane_t2_ParamLimits

0xab9b,	// (0x000103be) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00014dfa) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00014dfa) popup_info_list_pane_t

0xa62a,	// (0x0000fe4d) bg_popup_window_pane_cp12

0xec3d,	// (0x00014460) find_popup_pane

0xa70a,	// (0x0000ff2d) bg_popup_window_pane_cp3

0xabb5,	// (0x000103d8) heading_pane_cp3

0xabc1,	// (0x000103e4) listscroll_popup_graphic_pane

0xa62a,	// (0x0000fe4d) bg_popup_window_pane_cp4

0x517b,	// (0x0000a99e) heading_pane_cp4

0xac25,	// (0x00010448) listscroll_popup_colour_pane

0xac2d,	// (0x00010450) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xac2d,	// (0x00010450) cell_large_graphic_colour_none_popup_pane

0x5183,	// (0x0000a9a6) grid_large_graphic_colour_popup_pane_ParamLimits

0x5183,	// (0x0000a9a6) grid_large_graphic_colour_popup_pane

0x519f,	// (0x0000a9c2) listscroll_popup_colour_pane_g1_ParamLimits

0x519f,	// (0x0000a9c2) listscroll_popup_colour_pane_g1

0x51b6,	// (0x0000a9d9) listscroll_popup_colour_pane_g2_ParamLimits

0x51b6,	// (0x0000a9d9) listscroll_popup_colour_pane_g2

0xac84,	// (0x000104a7) listscroll_popup_colour_pane_g3_ParamLimits

0xac84,	// (0x000104a7) listscroll_popup_colour_pane_g3

0x51ca,	// (0x0000a9ed) listscroll_popup_colour_pane_g4_ParamLimits

0x51ca,	// (0x0000a9ed) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00014dff) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00014dff) listscroll_popup_colour_pane_g

0xaca3,	// (0x000104c6) scroll_pane_cp6_ParamLimits

0xaca3,	// (0x000104c6) scroll_pane_cp6

0x51d9,	// (0x0000a9fc) cell_large_graphic_colour_popup_pane_ParamLimits

0x51d9,	// (0x0000a9fc) cell_large_graphic_colour_popup_pane

0xacd4,	// (0x000104f7) cell_large_graphic_colour_none_popup_pane_t1

0xa62a,	// (0x0000fe4d) grid_highlight_pane_cp5

0xace3,	// (0x00010506) cell_large_graphic_colour_popup_pane_g1

0xaceb,	// (0x0001050e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00014e08) cell_large_graphic_colour_popup_pane_g

0xacf3,	// (0x00010516) cell_large_graphic_colour_popup_pane_g2_copy1

0xacfc,	// (0x0001051f) grid_highlight_pane_cp4

0xad04,	// (0x00010527) bg_popup_window_pane_cp8_ParamLimits

0xad04,	// (0x00010527) bg_popup_window_pane_cp8

0xad1f,	// (0x00010542) popup_snote_single_text_window_g1_ParamLimits

0xad1f,	// (0x00010542) popup_snote_single_text_window_g1

0xad31,	// (0x00010554) popup_snote_single_text_window_t1_ParamLimits

0xad31,	// (0x00010554) popup_snote_single_text_window_t1

0xad44,	// (0x00010567) popup_snote_single_text_window_t2_ParamLimits

0xad44,	// (0x00010567) popup_snote_single_text_window_t2

0xad57,	// (0x0001057a) popup_snote_single_text_window_t3_ParamLimits

0xad57,	// (0x0001057a) popup_snote_single_text_window_t3

0xad90,	// (0x000105b3) popup_snote_single_text_window_t4_ParamLimits

0xad90,	// (0x000105b3) popup_snote_single_text_window_t4

0xadc4,	// (0x000105e7) popup_snote_single_text_window_t5_ParamLimits

0xadc4,	// (0x000105e7) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00014e0d) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00014e0d) popup_snote_single_text_window_t

0xadf3,	// (0x00010616) bg_popup_window_pane_cp9_ParamLimits

0xadf3,	// (0x00010616) bg_popup_window_pane_cp9

0xad1f,	// (0x00010542) popup_snote_single_graphic_window_g1_ParamLimits

0xad1f,	// (0x00010542) popup_snote_single_graphic_window_g1

0xae01,	// (0x00010624) popup_snote_single_graphic_window_g2_ParamLimits

0xae01,	// (0x00010624) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00014e18) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00014e18) popup_snote_single_graphic_window_g

0xae0d,	// (0x00010630) popup_snote_single_graphic_window_t1_ParamLimits

0xae0d,	// (0x00010630) popup_snote_single_graphic_window_t1

0xae20,	// (0x00010643) popup_snote_single_graphic_window_t2_ParamLimits

0xae20,	// (0x00010643) popup_snote_single_graphic_window_t2

0xad57,	// (0x0001057a) popup_snote_single_graphic_window_t3_ParamLimits

0xad57,	// (0x0001057a) popup_snote_single_graphic_window_t3

0xad90,	// (0x000105b3) popup_snote_single_graphic_window_t4_ParamLimits

0xad90,	// (0x000105b3) popup_snote_single_graphic_window_t4

0xadc4,	// (0x000105e7) popup_snote_single_graphic_window_t5_ParamLimits

0xadc4,	// (0x000105e7) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00014e1d) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00014e1d) popup_snote_single_graphic_window_t

0x6b70,	// (0x0000c393) grid_graphic_popup_pane_ParamLimits

0x6b70,	// (0x0000c393) grid_graphic_popup_pane

0x6b93,	// (0x0000c3b6) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b93,	// (0x0000c3b6) listscroll_popup_graphic_pane_g1

0x6ba7,	// (0x0000c3ca) listscroll_popup_graphic_pane_g2_ParamLimits

0x6ba7,	// (0x0000c3ca) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ce,	// (0x000151f1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ce,	// (0x000151f1) listscroll_popup_graphic_pane_g

0xeb0a,	// (0x0001432d) scroll_pane_cp5

0x6b2b,	// (0x0000c34e) cell_graphic_popup_pane_ParamLimits

0x6b2b,	// (0x0000c34e) cell_graphic_popup_pane

0xebe6,	// (0x00014409) cell_graphic_popup_pane_g1

0xebee,	// (0x00014411) cell_graphic_popup_pane_g2

0xacf3,	// (0x00010516) cell_graphic_popup_pane_g3

0x0002,

0xf9c7,	// (0x000151ea) cell_graphic_popup_pane_g

0xebf7,	// (0x0001441a) cell_graphic_popup_pane_t2

0xacfc,	// (0x0001051f) grid_highlight_pane_cp3

0xae45,	// (0x00010668) list_gen_pane_ParamLimits

0xae45,	// (0x00010668) list_gen_pane

0xae76,	// (0x00010699) scroll_pane

0x6afe,	// (0x0000c321) bg_list_pane_g1_ParamLimits

0x6afe,	// (0x0000c321) bg_list_pane_g1

0xeb9d,	// (0x000143c0) bg_list_pane_g2_ParamLimits

0xeb9d,	// (0x000143c0) bg_list_pane_g2

0xebb0,	// (0x000143d3) bg_list_pane_g3_ParamLimits

0xebb0,	// (0x000143d3) bg_list_pane_g3

0xebc2,	// (0x000143e5) bg_list_pane_g4_ParamLimits

0xebc2,	// (0x000143e5) bg_list_pane_g4

0x6b19,	// (0x0000c33c) bg_list_pane_g5_ParamLimits

0x6b19,	// (0x0000c33c) bg_list_pane_g5

0x0004,

0xf9bc,	// (0x000151df) bg_list_pane_g_ParamLimits

0xf9bc,	// (0x000151df) bg_list_pane_g

0x6a8e,	// (0x0000c2b1) list_double2_graphic_large_graphic_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double2_graphic_large_graphic_pane

0x6a8e,	// (0x0000c2b1) list_double2_graphic_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double2_graphic_pane

0x6a8e,	// (0x0000c2b1) list_double2_large_graphic_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double2_large_graphic_pane

0x6a8e,	// (0x0000c2b1) list_double2_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double2_pane

0x6a8e,	// (0x0000c2b1) list_double_graphic_heading_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double_graphic_heading_pane

0x6a8e,	// (0x0000c2b1) list_double_graphic_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double_graphic_pane

0x6a8e,	// (0x0000c2b1) list_double_heading_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double_heading_pane

0x6a8e,	// (0x0000c2b1) list_double_large_graphic_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double_large_graphic_pane

0x6a8e,	// (0x0000c2b1) list_double_number_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double_number_pane

0x6a8e,	// (0x0000c2b1) list_double_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double_pane

0x6a8e,	// (0x0000c2b1) list_double_time_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_double_time_pane

0x6a8e,	// (0x0000c2b1) list_setting_number_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_setting_number_pane

0x6a8e,	// (0x0000c2b1) list_setting_pane_ParamLimits

0x6a8e,	// (0x0000c2b1) list_setting_pane

0x6a9f,	// (0x0000c2c2) list_single_2graphic_pane_ParamLimits

0x6a9f,	// (0x0000c2c2) list_single_2graphic_pane

0x6a9f,	// (0x0000c2c2) list_single_graphic_heading_pane_ParamLimits

0x6a9f,	// (0x0000c2c2) list_single_graphic_heading_pane

0x6a9f,	// (0x0000c2c2) list_single_graphic_pane_ParamLimits

0x6a9f,	// (0x0000c2c2) list_single_graphic_pane

0x6a9f,	// (0x0000c2c2) list_single_heading_pane_ParamLimits

0x6a9f,	// (0x0000c2c2) list_single_heading_pane

0x6aec,	// (0x0000c30f) list_single_large_graphic_pane_ParamLimits

0x6aec,	// (0x0000c30f) list_single_large_graphic_pane

0x6a9f,	// (0x0000c2c2) list_single_number_heading_pane_ParamLimits

0x6a9f,	// (0x0000c2c2) list_single_number_heading_pane

0x6a9f,	// (0x0000c2c2) list_single_number_pane_ParamLimits

0x6a9f,	// (0x0000c2c2) list_single_number_pane

0x6a9f,	// (0x0000c2c2) list_single_pane_ParamLimits

0x6a9f,	// (0x0000c2c2) list_single_pane

0xa62a,	// (0x0000fe4d) list_highlight_pane_cp1

0xb0b8,	// (0x000108db) list_single_pane_g1_ParamLimits

0xb0b8,	// (0x000108db) list_single_pane_g1

0xafe3,	// (0x00010806) list_single_pane_g2_ParamLimits

0xafe3,	// (0x00010806) list_single_pane_g2

0x0001,

0xf60c,	// (0x00014e2f) list_single_pane_g_ParamLimits

0xf60c,	// (0x00014e2f) list_single_pane_g

0xafef,	// (0x00010812) list_single_pane_t1_ParamLimits

0xafef,	// (0x00010812) list_single_pane_t1

0xb0b8,	// (0x000108db) list_single_number_pane_g1_ParamLimits

0xb0b8,	// (0x000108db) list_single_number_pane_g1

0xafe3,	// (0x00010806) list_single_number_pane_g2_ParamLimits

0xafe3,	// (0x00010806) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00014e2f) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00014e2f) list_single_number_pane_g

0xb0c4,	// (0x000108e7) list_single_number_pane_t1_ParamLimits

0xb0c4,	// (0x000108e7) list_single_number_pane_t1

0x68f2,	// (0x0000c115) list_single_number_pane_t2_ParamLimits

0x68f2,	// (0x0000c115) list_single_number_pane_t2

0x0001,

0xf97d,	// (0x000151a0) list_single_number_pane_t_ParamLimits

0xf97d,	// (0x000151a0) list_single_number_pane_t

0xb0ac,	// (0x000108cf) list_single_graphic_pane_g1_ParamLimits

0xb0ac,	// (0x000108cf) list_single_graphic_pane_g1

0xb0b8,	// (0x000108db) list_single_graphic_pane_g2_ParamLimits

0xb0b8,	// (0x000108db) list_single_graphic_pane_g2

0xafe3,	// (0x00010806) list_single_graphic_pane_g3_ParamLimits

0xafe3,	// (0x00010806) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00014e28) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00014e28) list_single_graphic_pane_g

0xb0c4,	// (0x000108e7) list_single_graphic_pane_t1_ParamLimits

0xb0c4,	// (0x000108e7) list_single_graphic_pane_t1

0xb0b8,	// (0x000108db) list_single_heading_pane_g1_ParamLimits

0xb0b8,	// (0x000108db) list_single_heading_pane_g1

0xafe3,	// (0x00010806) list_single_heading_pane_g2_ParamLimits

0xafe3,	// (0x00010806) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00014e2f) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00014e2f) list_single_heading_pane_g

0xb181,	// (0x000109a4) list_single_heading_pane_t1_ParamLimits

0xb181,	// (0x000109a4) list_single_heading_pane_t1

0x5200,	// (0x0000aa23) list_single_heading_pane_t2_ParamLimits

0x5200,	// (0x0000aa23) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00014e34) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00014e34) list_single_heading_pane_t

0xb0b8,	// (0x000108db) list_single_number_heading_pane_g1_ParamLimits

0xb0b8,	// (0x000108db) list_single_number_heading_pane_g1

0xafe3,	// (0x00010806) list_single_number_heading_pane_g2_ParamLimits

0xafe3,	// (0x00010806) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00014e2f) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00014e2f) list_single_number_heading_pane_g

0xb181,	// (0x000109a4) list_single_number_heading_pane_t1_ParamLimits

0xb181,	// (0x000109a4) list_single_number_heading_pane_t1

0x5212,	// (0x0000aa35) list_single_number_heading_pane_t2_ParamLimits

0x5212,	// (0x0000aa35) list_single_number_heading_pane_t2

0xf0cd,	// (0x000148f0) list_single_number_heading_pane_t3_ParamLimits

0xf0cd,	// (0x000148f0) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00014e39) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00014e39) list_single_number_heading_pane_t

0xb0ac,	// (0x000108cf) list_single_graphic_heading_pane_g1_ParamLimits

0xb0ac,	// (0x000108cf) list_single_graphic_heading_pane_g1

0x5224,	// (0x0000aa47) list_single_graphic_heading_pane_g4_ParamLimits

0x5224,	// (0x0000aa47) list_single_graphic_heading_pane_g4

0xafe3,	// (0x00010806) list_single_graphic_heading_pane_g5_ParamLimits

0xafe3,	// (0x00010806) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00014e40) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00014e40) list_single_graphic_heading_pane_g

0xb181,	// (0x000109a4) list_single_graphic_heading_pane_t1_ParamLimits

0xb181,	// (0x000109a4) list_single_graphic_heading_pane_t1

0x5235,	// (0x0000aa58) list_single_graphic_heading_pane_t2_ParamLimits

0x5235,	// (0x0000aa58) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00014e47) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00014e47) list_single_graphic_heading_pane_t

0xaf52,	// (0x00010775) list_single_large_graphic_pane_g1_ParamLimits

0xaf52,	// (0x00010775) list_single_large_graphic_pane_g1

0xaf5e,	// (0x00010781) list_single_large_graphic_pane_g2_ParamLimits

0xaf5e,	// (0x00010781) list_single_large_graphic_pane_g2

0xaf6a,	// (0x0001078d) list_single_large_graphic_pane_g3_ParamLimits

0xaf6a,	// (0x0001078d) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00014e4c) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00014e4c) list_single_large_graphic_pane_g

0xdedd,	// (0x00013700) wait_border_pane_g2_copy1

0xaf76,	// (0x00010799) list_single_large_graphic_pane_g4_cp2

0xaf7e,	// (0x000107a1) list_single_large_graphic_pane_t1_ParamLimits

0xaf7e,	// (0x000107a1) list_single_large_graphic_pane_t1

0x5247,	// (0x0000aa6a) list_double_pane_g1_ParamLimits

0x5247,	// (0x0000aa6a) list_double_pane_g1

0x5253,	// (0x0000aa76) list_double_pane_g2_ParamLimits

0x5253,	// (0x0000aa76) list_double_pane_g2

0x0001,

0xf630,	// (0x00014e53) list_double_pane_g_ParamLimits

0xf630,	// (0x00014e53) list_double_pane_g

0x525f,	// (0x0000aa82) list_double_pane_t1_ParamLimits

0x525f,	// (0x0000aa82) list_double_pane_t1

0x5275,	// (0x0000aa98) list_double_pane_t2_ParamLimits

0x5275,	// (0x0000aa98) list_double_pane_t2

0x0001,

0xf635,	// (0x00014e58) list_double_pane_t_ParamLimits

0xf635,	// (0x00014e58) list_double_pane_t

0x5287,	// (0x0000aaaa) list_double2_pane_g1_ParamLimits

0x5287,	// (0x0000aaaa) list_double2_pane_g1

0x5253,	// (0x0000aa76) list_double2_pane_g2_ParamLimits

0x5253,	// (0x0000aa76) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00014e5d) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00014e5d) list_double2_pane_g

0x525f,	// (0x0000aa82) list_double2_pane_t1_ParamLimits

0x525f,	// (0x0000aa82) list_double2_pane_t1

0x5298,	// (0x0000aabb) list_double2_pane_t2_ParamLimits

0x5298,	// (0x0000aabb) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00014e62) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00014e62) list_double2_pane_t

0x5247,	// (0x0000aa6a) list_double_number_pane_g1_ParamLimits

0x5247,	// (0x0000aa6a) list_double_number_pane_g1

0x5253,	// (0x0000aa76) list_double_number_pane_g2_ParamLimits

0x5253,	// (0x0000aa76) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00014e53) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00014e53) list_double_number_pane_g

0x52aa,	// (0x0000aacd) list_double_number_pane_t1_ParamLimits

0x52aa,	// (0x0000aacd) list_double_number_pane_t1

0x52bc,	// (0x0000aadf) list_double_number_pane_t2_ParamLimits

0x52bc,	// (0x0000aadf) list_double_number_pane_t2

0x52d2,	// (0x0000aaf5) list_double_number_pane_t3_ParamLimits

0x52d2,	// (0x0000aaf5) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00014e67) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00014e67) list_double_number_pane_t

0x52e4,	// (0x0000ab07) list_double_graphic_pane_g1_ParamLimits

0x52e4,	// (0x0000ab07) list_double_graphic_pane_g1

0x52f0,	// (0x0000ab13) list_double_graphic_pane_g2_ParamLimits

0x52f0,	// (0x0000ab13) list_double_graphic_pane_g2

0x52ff,	// (0x0000ab22) list_double_graphic_pane_g3_ParamLimits

0x52ff,	// (0x0000ab22) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00014e6e) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00014e6e) list_double_graphic_pane_g

0x5317,	// (0x0000ab3a) list_double_graphic_pane_t1_ParamLimits

0x5317,	// (0x0000ab3a) list_double_graphic_pane_t1

0x532d,	// (0x0000ab50) list_double_graphic_pane_t2_ParamLimits

0x532d,	// (0x0000ab50) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00014e77) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00014e77) list_double_graphic_pane_t

0x52e4,	// (0x0000ab07) list_double2_graphic_pane_g1_ParamLimits

0x52e4,	// (0x0000ab07) list_double2_graphic_pane_g1

0x5247,	// (0x0000aa6a) list_double2_graphic_pane_g2_ParamLimits

0x5247,	// (0x0000aa6a) list_double2_graphic_pane_g2

0x5253,	// (0x0000aa76) list_double2_graphic_pane_g3_ParamLimits

0x5253,	// (0x0000aa76) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00014e7c) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00014e7c) list_double2_graphic_pane_g

0x52bc,	// (0x0000aadf) list_double2_graphic_pane_t1_ParamLimits

0x52bc,	// (0x0000aadf) list_double2_graphic_pane_t1

0x533f,	// (0x0000ab62) list_double2_graphic_pane_t2_ParamLimits

0x533f,	// (0x0000ab62) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00014e83) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00014e83) list_double2_graphic_pane_t

0x5351,	// (0x0000ab74) list_double_large_graphic_pane_g1_ParamLimits

0x5351,	// (0x0000ab74) list_double_large_graphic_pane_g1

0x5287,	// (0x0000aaaa) list_double_large_graphic_pane_g2_ParamLimits

0x5287,	// (0x0000aaaa) list_double_large_graphic_pane_g2

0x5253,	// (0x0000aa76) list_double_large_graphic_pane_g3_ParamLimits

0x5253,	// (0x0000aa76) list_double_large_graphic_pane_g3

0x537a,	// (0x0000ab9d) list_double_large_graphic_pane_g4_ParamLimits

0x537a,	// (0x0000ab9d) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00014e88) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00014e88) list_double_large_graphic_pane_g

0x538b,	// (0x0000abae) list_double_large_graphic_pane_t1_ParamLimits

0x538b,	// (0x0000abae) list_double_large_graphic_pane_t1

0x53a4,	// (0x0000abc7) list_double_large_graphic_pane_t2_ParamLimits

0x53a4,	// (0x0000abc7) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00014e93) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00014e93) list_double_large_graphic_pane_t

0x53b6,	// (0x0000abd9) list_double2_large_graphic_pane_g1_ParamLimits

0x53b6,	// (0x0000abd9) list_double2_large_graphic_pane_g1

0x5287,	// (0x0000aaaa) list_double2_large_graphic_pane_g2_ParamLimits

0x5287,	// (0x0000aaaa) list_double2_large_graphic_pane_g2

0x5253,	// (0x0000aa76) list_double2_large_graphic_pane_g3_ParamLimits

0x5253,	// (0x0000aa76) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00014e98) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00014e98) list_double2_large_graphic_pane_g

0x53c2,	// (0x0000abe5) list_double2_large_graphic_pane_t1_ParamLimits

0x53c2,	// (0x0000abe5) list_double2_large_graphic_pane_t1

0x53d8,	// (0x0000abfb) list_double2_large_graphic_pane_t2_ParamLimits

0x53d8,	// (0x0000abfb) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00014e9f) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00014e9f) list_double2_large_graphic_pane_t

0x53ea,	// (0x0000ac0d) list_double_heading_pane_g1_ParamLimits

0x53ea,	// (0x0000ac0d) list_double_heading_pane_g1

0xaec3,	// (0x000106e6) list_double_heading_pane_g2_ParamLimits

0xaec3,	// (0x000106e6) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00014ea4) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00014ea4) list_double_heading_pane_g

0x53fb,	// (0x0000ac1e) list_double_heading_pane_t1_ParamLimits

0x53fb,	// (0x0000ac1e) list_double_heading_pane_t1

0x5411,	// (0x0000ac34) list_double_heading_pane_t2_ParamLimits

0x5411,	// (0x0000ac34) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00014ea9) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00014ea9) list_double_heading_pane_t

0xb051,	// (0x00010874) list_double_graphic_heading_pane_g1_ParamLimits

0xb051,	// (0x00010874) list_double_graphic_heading_pane_g1

0x53ea,	// (0x0000ac0d) list_double_graphic_heading_pane_g2_ParamLimits

0x53ea,	// (0x0000ac0d) list_double_graphic_heading_pane_g2

0xaec3,	// (0x000106e6) list_double_graphic_heading_pane_g3_ParamLimits

0xaec3,	// (0x000106e6) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00014eae) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00014eae) list_double_graphic_heading_pane_g

0x5423,	// (0x0000ac46) list_double_graphic_heading_pane_t1_ParamLimits

0x5423,	// (0x0000ac46) list_double_graphic_heading_pane_t1

0x5439,	// (0x0000ac5c) list_double_graphic_heading_pane_t2_ParamLimits

0x5439,	// (0x0000ac5c) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00014eb5) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00014eb5) list_double_graphic_heading_pane_t

0x5287,	// (0x0000aaaa) list_double_time_pane_g1_ParamLimits

0x5287,	// (0x0000aaaa) list_double_time_pane_g1

0x5253,	// (0x0000aa76) list_double_time_pane_g2_ParamLimits

0x5253,	// (0x0000aa76) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x00014e5d) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x00014e5d) list_double_time_pane_g

0x53c2,	// (0x0000abe5) list_double_time_pane_t1_ParamLimits

0x53c2,	// (0x0000abe5) list_double_time_pane_t1

0x544b,	// (0x0000ac6e) list_double_time_pane_t2_ParamLimits

0x544b,	// (0x0000ac6e) list_double_time_pane_t2

0x545d,	// (0x0000ac80) list_double_time_pane_t3_ParamLimits

0x545d,	// (0x0000ac80) list_double_time_pane_t3

0x546f,	// (0x0000ac92) list_double_time_pane_t4_ParamLimits

0x546f,	// (0x0000ac92) list_double_time_pane_t4

0x0003,

0xf697,	// (0x00014eba) list_double_time_pane_t_ParamLimits

0xf697,	// (0x00014eba) list_double_time_pane_t

0x5247,	// (0x0000aa6a) list_setting_pane_g1_ParamLimits

0x5247,	// (0x0000aa6a) list_setting_pane_g1

0x5253,	// (0x0000aa76) list_setting_pane_g2_ParamLimits

0x5253,	// (0x0000aa76) list_setting_pane_g2

0x0001,

0xf630,	// (0x00014e53) list_setting_pane_g_ParamLimits

0xf630,	// (0x00014e53) list_setting_pane_g

0x5481,	// (0x0000aca4) list_setting_pane_t1_ParamLimits

0x5481,	// (0x0000aca4) list_setting_pane_t1

0x549b,	// (0x0000acbe) list_setting_pane_t2_ParamLimits

0x549b,	// (0x0000acbe) list_setting_pane_t2

0x0002,

0xf6a0,	// (0x00014ec3) list_setting_pane_t_ParamLimits

0xf6a0,	// (0x00014ec3) list_setting_pane_t

0x54d8,	// (0x0000acfb) set_value_pane_cp_ParamLimits

0x54d8,	// (0x0000acfb) set_value_pane_cp

0x5247,	// (0x0000aa6a) list_setting_number_pane_g1_ParamLimits

0x5247,	// (0x0000aa6a) list_setting_number_pane_g1

0x5253,	// (0x0000aa76) list_setting_number_pane_g2_ParamLimits

0x5253,	// (0x0000aa76) list_setting_number_pane_g2

0x0001,

0xf630,	// (0x00014e53) list_setting_number_pane_g_ParamLimits

0xf630,	// (0x00014e53) list_setting_number_pane_g

0x54e4,	// (0x0000ad07) list_setting_number_pane_t1_ParamLimits

0x54e4,	// (0x0000ad07) list_setting_number_pane_t1

0x54fd,	// (0x0000ad20) list_setting_number_pane_t2_ParamLimits

0x54fd,	// (0x0000ad20) list_setting_number_pane_t2

0x5517,	// (0x0000ad3a) list_setting_number_pane_t3_ParamLimits

0x5517,	// (0x0000ad3a) list_setting_number_pane_t3

0x0003,

0xf6a7,	// (0x00014eca) list_setting_number_pane_t_ParamLimits

0xf6a7,	// (0x00014eca) list_setting_number_pane_t

0x54d8,	// (0x0000acfb) set_value_pane_ParamLimits

0x54d8,	// (0x0000acfb) set_value_pane

0xb306,	// (0x00010b29) bg_set_opt_pane_ParamLimits

0xb306,	// (0x00010b29) bg_set_opt_pane

0xb327,	// (0x00010b4a) set_value_pane_t1

0xb335,	// (0x00010b58) slider_set_pane_cp3

0xb33e,	// (0x00010b61) volume_small_pane_cp

0xb347,	// (0x00010b6a) list_form_gen_pane

0xae9a,	// (0x000106bd) scroll_pane_cp8

0xf410,	// (0x00014c33) form_field_data_pane_ParamLimits

0xf410,	// (0x00014c33) form_field_data_pane

0x555a,	// (0x0000ad7d) form_field_data_wide_pane_ParamLimits

0x555a,	// (0x0000ad7d) form_field_data_wide_pane

0x557a,	// (0x0000ad9d) form_field_popup_pane_ParamLimits

0x557a,	// (0x0000ad9d) form_field_popup_pane

0x5592,	// (0x0000adb5) form_field_popup_wide_pane_ParamLimits

0x5592,	// (0x0000adb5) form_field_popup_wide_pane

0xb3ce,	// (0x00010bf1) form_field_slider_pane_ParamLimits

0xb3ce,	// (0x00010bf1) form_field_slider_pane

0xb3e1,	// (0x00010c04) form_field_slider_wide_pane_ParamLimits

0xb3e1,	// (0x00010c04) form_field_slider_wide_pane

0xb3f4,	// (0x00010c17) data_form_pane

0x55b3,	// (0x0000add6) form_field_data_pane_t1

0xb420,	// (0x00010c43) input_focus_pane

0xb42e,	// (0x00010c51) data_form_wide_pane

0xb45a,	// (0x00010c7d) form_field_data_wide_pane_t1

0xad11,	// (0x00010534) input_focus_pane_cp6

0x55cb,	// (0x0000adee) form_field_popup_pane_t1

0xb420,	// (0x00010c43) input_focus_pane_cp7

0xb3f4,	// (0x00010c17) list_form_pane

0xb49c,	// (0x00010cbf) form_field_popup_wide_pane_t1

0xb420,	// (0x00010c43) input_focus_pane_cp8

0xb4b1,	// (0x00010cd4) list_form_wide_pane

0x55eb,	// (0x0000ae0e) form_field_slider_pane_t1_ParamLimits

0x55eb,	// (0x0000ae0e) form_field_slider_pane_t1

0x5601,	// (0x0000ae24) form_field_slider_pane_t2_ParamLimits

0x5601,	// (0x0000ae24) form_field_slider_pane_t2

0x0001,

0xf6b7,	// (0x00014eda) form_field_slider_pane_t_ParamLimits

0xf6b7,	// (0x00014eda) form_field_slider_pane_t

0xa9a3,	// (0x000101c6) input_focus_pane_cp9_ParamLimits

0xa9a3,	// (0x000101c6) input_focus_pane_cp9

0x5616,	// (0x0000ae39) slider_cont_pane_ParamLimits

0x5616,	// (0x0000ae39) slider_cont_pane

0xb504,	// (0x00010d27) form_field_slider_wide_pane_t1_ParamLimits

0xb504,	// (0x00010d27) form_field_slider_wide_pane_t1

0xb516,	// (0x00010d39) form_field_slider_wide_pane_t2_ParamLimits

0xb516,	// (0x00010d39) form_field_slider_wide_pane_t2

0x0001,

0xf6bc,	// (0x00014edf) form_field_slider_wide_pane_t_ParamLimits

0xf6bc,	// (0x00014edf) form_field_slider_wide_pane_t

0xa9a3,	// (0x000101c6) input_focus_pane_cp10_ParamLimits

0xa9a3,	// (0x000101c6) input_focus_pane_cp10

0x562a,	// (0x0000ae4d) slider_cont_pane_cp1_ParamLimits

0x562a,	// (0x0000ae4d) slider_cont_pane_cp1

0x5640,	// (0x0000ae63) slider_form_pane_cp

0xb546,	// (0x00010d69) input_focus_pane_g1

0xb54e,	// (0x00010d71) input_focus_pane_g2

0xb556,	// (0x00010d79) input_focus_pane_g3

0xb55e,	// (0x00010d81) input_focus_pane_g4

0xb566,	// (0x00010d89) input_focus_pane_g5

0xb56e,	// (0x00010d91) input_focus_pane_g6

0xb576,	// (0x00010d99) input_focus_pane_g7

0xb57e,	// (0x00010da1) input_focus_pane_g8

0xb586,	// (0x00010da9) input_focus_pane_g9

0xa543,	// (0x0000fd66) input_focus_pane_g10

0x0009,

0xf6c1,	// (0x00014ee4) input_focus_pane_g

0xdee6,	// (0x00013709) wait_border_pane_g3_copy1

0x5648,	// (0x0000ae6b) data_form_pane_t1

0xa543,	// (0x0000fd66) wait_anim_pane_g1_copy1

0x6a75,	// (0x0000c298) data_form_wide_pane_t1

0xee5b,	// (0x0001467e) list_form_graphic_pane_cp_ParamLimits

0xee5b,	// (0x0001467e) list_form_graphic_pane_cp

0xeb30,	// (0x00014353) slider_form_pane_g1

0xeb39,	// (0x0001435c) slider_form_pane_g2

0x0006,

0xf9ad,	// (0x000151d0) slider_form_pane_g

0xb5a8,	// (0x00010dcb) list_form_graphic_pane_ParamLimits

0xb5a8,	// (0x00010dcb) list_form_graphic_pane

0xb5d3,	// (0x00010df6) list_form_graphic_pane_g1

0xb5db,	// (0x00010dfe) list_form_graphic_pane_t1_ParamLimits

0xb5db,	// (0x00010dfe) list_form_graphic_pane_t1

0xa70a,	// (0x0000ff2d) list_highlight_pane_cp5_ParamLimits

0xa70a,	// (0x0000ff2d) list_highlight_pane_cp5

0x5661,	// (0x0000ae84) find_pane_g1

0xb5f9,	// (0x00010e1c) input_find_pane

0x566c,	// (0x0000ae8f) input_find_pane_g1_ParamLimits

0x566c,	// (0x0000ae8f) input_find_pane_g1

0x5678,	// (0x0000ae9b) input_find_pane_t1_ParamLimits

0x5678,	// (0x0000ae9b) input_find_pane_t1

0x568d,	// (0x0000aeb0) input_find_pane_t2_ParamLimits

0x568d,	// (0x0000aeb0) input_find_pane_t2

0x0001,

0xf6d6,	// (0x00014ef9) input_find_pane_t_ParamLimits

0xf6d6,	// (0x00014ef9) input_find_pane_t

0xb638,	// (0x00010e5b) input_focus_pane_cp5_ParamLimits

0xb638,	// (0x00010e5b) input_focus_pane_cp5

0xa9a3,	// (0x000101c6) bg_popup_window_pane_cp2_ParamLimits

0xa9a3,	// (0x000101c6) bg_popup_window_pane_cp2

0xb652,	// (0x00010e75) listscroll_menu_pane_ParamLimits

0xb652,	// (0x00010e75) listscroll_menu_pane

0xb65e,	// (0x00010e81) popup_submenu_window_ParamLimits

0xb65e,	// (0x00010e81) popup_submenu_window

0xb682,	// (0x00010ea5) find_popup_pane_g1

0xb68a,	// (0x00010ead) input_popup_find_pane_cp

0xb638,	// (0x00010e5b) input_focus_pane_cp4_ParamLimits

0xb638,	// (0x00010e5b) input_focus_pane_cp4

0xb6a0,	// (0x00010ec3) input_popup_find_pane_t1_ParamLimits

0xb6a0,	// (0x00010ec3) input_popup_find_pane_t1

0xa62a,	// (0x0000fe4d) bg_popup_sub_pane_cp

0xb6ce,	// (0x00010ef1) listscroll_popup_sub_pane

0xb6d6,	// (0x00010ef9) list_submenu_pane_ParamLimits

0xb6d6,	// (0x00010ef9) list_submenu_pane

0xb6e7,	// (0x00010f0a) scroll_pane_cp4

0xb6ef,	// (0x00010f12) list_single_popup_submenu_pane_ParamLimits

0xb6ef,	// (0x00010f12) list_single_popup_submenu_pane

0xb703,	// (0x00010f26) list_single_popup_submenu_pane_g1

0xb70b,	// (0x00010f2e) list_single_popup_submenu_pane_t1_ParamLimits

0xb70b,	// (0x00010f2e) list_single_popup_submenu_pane_t1

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp1_ParamLimits

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp1

0xeaf0,	// (0x00014313) tabs_2_active_pane_g1

0x56ae,	// (0x0000aed1) tabs_2_active_pane_t1

0xa9a3,	// (0x000101c6) bg_passive_tab_pane_cp1_ParamLimits

0xa9a3,	// (0x000101c6) bg_passive_tab_pane_cp1

0xeaf0,	// (0x00014313) tabs_2_passive_pane_g1

0x56ae,	// (0x0000aed1) tabs_2_passive_pane_t1

0xa70a,	// (0x0000ff2d) bg_active_tab_pane_cp4

0x56c4,	// (0x0000aee7) tabs_2_long_active_pane_t1

0xd685,	// (0x00012ea8) bg_passive_tab_pane_cp4

0x94bb,	// (0x0000ecde) list_single_midp_graphic_pane_g4_ParamLimits

0xa70a,	// (0x0000ff2d) bg_active_tab_pane_cp5

0x56db,	// (0x0000aefe) tabs_3_long_active_pane_t1

0xd685,	// (0x00012ea8) bg_passive_tab_pane_cp5

0x94bb,	// (0x0000ecde) list_single_midp_graphic_pane_g4

0xa70a,	// (0x0000ff2d) bg_popup_window_pane_cp13_ParamLimits

0xa70a,	// (0x0000ff2d) bg_popup_window_pane_cp13

0xb782,	// (0x00010fa5) listscroll_popup_fast_pane_ParamLimits

0xb782,	// (0x00010fa5) listscroll_popup_fast_pane

0xb791,	// (0x00010fb4) grid_popup_fast_pane_ParamLimits

0xb791,	// (0x00010fb4) grid_popup_fast_pane

0xb7a3,	// (0x00010fc6) scroll_pane_cp9_ParamLimits

0xb7a3,	// (0x00010fc6) scroll_pane_cp9

0x1110,	// (0x00006933) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x1110,	// (0x00006933) list_single_graphic_hl_pane_t1_cp2

0xb7c7,	// (0x00010fea) input_focus_pane_cp20_ParamLimits

0xb7c7,	// (0x00010fea) input_focus_pane_cp20

0xb7d5,	// (0x00010ff8) query_popup_data_pane_t1_ParamLimits

0xb7d5,	// (0x00010ff8) query_popup_data_pane_t1

0xb7e8,	// (0x0001100b) query_popup_data_pane_t2_ParamLimits

0xb7e8,	// (0x0001100b) query_popup_data_pane_t2

0xb82e,	// (0x00011051) query_popup_data_pane_t3_ParamLimits

0xb82e,	// (0x00011051) query_popup_data_pane_t3

0xb86f,	// (0x00011092) query_popup_data_pane_t4_ParamLimits

0xb86f,	// (0x00011092) query_popup_data_pane_t4

0xb8ab,	// (0x000110ce) query_popup_data_pane_t5_ParamLimits

0xb8ab,	// (0x000110ce) query_popup_data_pane_t5

0x0004,

0xf6db,	// (0x00014efe) query_popup_data_pane_t_ParamLimits

0xf6db,	// (0x00014efe) query_popup_data_pane_t

0xb546,	// (0x00010d69) bg_set_opt_pane_g1

0xb54e,	// (0x00010d71) bg_set_opt_pane_g2

0xb556,	// (0x00010d79) bg_set_opt_pane_g3

0xb55e,	// (0x00010d81) bg_set_opt_pane_g4

0xb566,	// (0x00010d89) bg_set_opt_pane_g5

0xb56e,	// (0x00010d91) bg_set_opt_pane_g6

0xb576,	// (0x00010d99) bg_set_opt_pane_g7

0xb57e,	// (0x00010da1) bg_set_opt_pane_g8

0xb586,	// (0x00010da9) bg_set_opt_pane_g9

0x0008,

0xf6e6,	// (0x00014f09) bg_set_opt_pane_g

0x90de,	// (0x0000e901) control_top_pane_stacon_ParamLimits

0x90de,	// (0x0000e901) control_top_pane_stacon

0x9131,	// (0x0000e954) signal_pane_stacon_ParamLimits

0x9131,	// (0x0000e954) signal_pane_stacon

0xbec0,	// (0x000116e3) stacon_top_pane_g1_ParamLimits

0xbec0,	// (0x000116e3) stacon_top_pane_g1

0x9156,	// (0x0000e979) title_pane_stacon_ParamLimits

0x9156,	// (0x0000e979) title_pane_stacon

0x9178,	// (0x0000e99b) uni_indicator_pane_stacon_ParamLimits

0x9178,	// (0x0000e99b) uni_indicator_pane_stacon

0x918d,	// (0x0000e9b0) battery_pane_stacon_ParamLimits

0x918d,	// (0x0000e9b0) battery_pane_stacon

0x91cd,	// (0x0000e9f0) control_bottom_pane_stacon_ParamLimits

0x91cd,	// (0x0000e9f0) control_bottom_pane_stacon

0x91ec,	// (0x0000ea0f) navi_pane_stacon_ParamLimits

0x91ec,	// (0x0000ea0f) navi_pane_stacon

0xbee2,	// (0x00011705) stacon_bottom_pane_g1_ParamLimits

0xbee2,	// (0x00011705) stacon_bottom_pane_g1

0xb8e2,	// (0x00011105) aid_levels_signal_lsc_ParamLimits

0xb8e2,	// (0x00011105) aid_levels_signal_lsc

0x8eaa,	// (0x0000e6cd) signal_pane_stacon_g1_ParamLimits

0x8eaa,	// (0x0000e6cd) signal_pane_stacon_g1

0x8eb6,	// (0x0000e6d9) signal_pane_stacon_g2_ParamLimits

0x8eb6,	// (0x0000e6d9) signal_pane_stacon_g2

0x0001,

0xf6f9,	// (0x00014f1c) signal_pane_stacon_g_ParamLimits

0xf6f9,	// (0x00014f1c) signal_pane_stacon_g

0x8eea,	// (0x0000e70d) title_pane_stacon_t1_ParamLimits

0x8eea,	// (0x0000e70d) title_pane_stacon_t1

0xb8fc,	// (0x0001111f) uni_indicator_pane_stacon_g1

0xb906,	// (0x00011129) uni_indicator_pane_stacon_g2

0xb910,	// (0x00011133) uni_indicator_pane_stacon_g3

0xb91a,	// (0x0001113d) uni_indicator_pane_stacon_g4

0x0003,

0xf705,	// (0x00014f28) uni_indicator_pane_stacon_g

0x8f0f,	// (0x0000e732) control_top_pane_stacon_g1

0x8f17,	// (0x0000e73a) control_top_pane_stacon_t1_ParamLimits

0x8f17,	// (0x0000e73a) control_top_pane_stacon_t1

0xb924,	// (0x00011147) aid_levels_battery_lsc_ParamLimits

0xb924,	// (0x00011147) aid_levels_battery_lsc

0x8f48,	// (0x0000e76b) battery_pane_stacon_g1_ParamLimits

0x8f48,	// (0x0000e76b) battery_pane_stacon_g1

0x8f54,	// (0x0000e777) battery_pane_stacon_g2_ParamLimits

0x8f54,	// (0x0000e777) battery_pane_stacon_g2

0x0001,

0xf70e,	// (0x00014f31) battery_pane_stacon_g_ParamLimits

0xf70e,	// (0x00014f31) battery_pane_stacon_g

0x8f83,	// (0x0000e7a6) navi_icon_pane_stacon

0x8f93,	// (0x0000e7b6) navi_navi_pane_stacon

0x8f83,	// (0x0000e7a6) navi_text_pane_stacon

0x8f0f,	// (0x0000e732) control_bottom_pane_stacon_g1

0x8fa3,	// (0x0000e7c6) control_bottom_pane_stacon_t1_ParamLimits

0x8fa3,	// (0x0000e7c6) control_bottom_pane_stacon_t1

0x56f1,	// (0x0000af14) grid_app_pane_ParamLimits

0x56f1,	// (0x0000af14) grid_app_pane

0x571f,	// (0x0000af42) scroll_pane_cp15_ParamLimits

0x571f,	// (0x0000af42) scroll_pane_cp15

0x5736,	// (0x0000af59) cell_app_pane_ParamLimits

0x5736,	// (0x0000af59) cell_app_pane

0x5775,	// (0x0000af98) cell_app_pane_g1_ParamLimits

0x5775,	// (0x0000af98) cell_app_pane_g1

0xb9c1,	// (0x000111e4) cell_app_pane_g2_ParamLimits

0xb9c1,	// (0x000111e4) cell_app_pane_g2

0x0001,

0xf713,	// (0x00014f36) cell_app_pane_g_ParamLimits

0xf713,	// (0x00014f36) cell_app_pane_g

0xb9cd,	// (0x000111f0) cell_app_pane_t1_ParamLimits

0xb9cd,	// (0x000111f0) cell_app_pane_t1

0xb9df,	// (0x00011202) grid_highlight_pane_ParamLimits

0xb9df,	// (0x00011202) grid_highlight_pane

0xb546,	// (0x00010d69) cell_highlight_pane_g1

0xb54e,	// (0x00010d71) cell_highlight_pane_g2

0xb556,	// (0x00010d79) cell_highlight_pane_g3

0xb55e,	// (0x00010d81) cell_highlight_pane_g4

0xb566,	// (0x00010d89) cell_highlight_pane_g5

0xb56e,	// (0x00010d91) cell_highlight_pane_g6

0xb576,	// (0x00010d99) cell_highlight_pane_g7

0xb57e,	// (0x00010da1) cell_highlight_pane_g8

0xb586,	// (0x00010da9) cell_highlight_pane_g9

0xa543,	// (0x0000fd66) cell_highlight_pane_g10

0x0009,

0xf6c1,	// (0x00014ee4) cell_highlight_pane_g

0xb9f0,	// (0x00011213) bg_scroll_pane

0x8fe7,	// (0x0000e80a) scroll_handle_pane

0xba37,	// (0x0001125a) scroll_bg_pane_g1

0xba4c,	// (0x0001126f) scroll_bg_pane_g2

0xba64,	// (0x00011287) scroll_bg_pane_g3

0x0002,

0xf718,	// (0x00014f3b) scroll_bg_pane_g

0xba79,	// (0x0001129c) scroll_handle_focus_pane_ParamLimits

0xba79,	// (0x0001129c) scroll_handle_focus_pane

0xba37,	// (0x0001125a) scroll_handle_pane_g1

0xba86,	// (0x000112a9) scroll_handle_pane_g2

0xba64,	// (0x00011287) scroll_handle_pane_g3

0x0002,

0xf71f,	// (0x00014f42) scroll_handle_pane_g

0xb638,	// (0x00010e5b) bg_popup_sub_pane_cp21_ParamLimits

0xb638,	// (0x00010e5b) bg_popup_sub_pane_cp21

0xba9a,	// (0x000112bd) popup_fep_japan_predictive_window_t1_ParamLimits

0xba9a,	// (0x000112bd) popup_fep_japan_predictive_window_t1

0xbab1,	// (0x000112d4) popup_fep_japan_predictive_window_t2_ParamLimits

0xbab1,	// (0x000112d4) popup_fep_japan_predictive_window_t2

0xbae4,	// (0x00011307) popup_fep_japan_predictive_window_t3_ParamLimits

0xbae4,	// (0x00011307) popup_fep_japan_predictive_window_t3

0x0002,

0xf726,	// (0x00014f49) popup_fep_japan_predictive_window_t_ParamLimits

0xf726,	// (0x00014f49) popup_fep_japan_predictive_window_t

0xa62a,	// (0x0000fe4d) bg_popup_sub_pane_cp23

0xbb1b,	// (0x0001133e) listscroll_japin_cand_pane

0xbb23,	// (0x00011346) popup_fep_japan_candidate_window_t1

0xbb31,	// (0x00011354) candidate_pane_ParamLimits

0xbb31,	// (0x00011354) candidate_pane

0xbb44,	// (0x00011367) scroll_pane_cp30

0xbb4c,	// (0x0001136f) list_single_popup_jap_candidate_pane_ParamLimits

0xbb4c,	// (0x0001136f) list_single_popup_jap_candidate_pane

0xa62a,	// (0x0000fe4d) list_highlight_pane_cp30

0xbb61,	// (0x00011384) list_single_popup_jap_candidate_pane_t1

0x57a2,	// (0x0000afc5) level_1_signal

0x57b4,	// (0x0000afd7) level_2_signal

0x57c7,	// (0x0000afea) level_3_signal

0x57da,	// (0x0000affd) level_4_signal

0x57ed,	// (0x0000b010) level_5_signal

0x5800,	// (0x0000b023) level_6_signal

0x5813,	// (0x0000b036) level_7_signal

0x57a2,	// (0x0000afc5) level_1_battery

0x57b4,	// (0x0000afd7) level_2_battery

0x57c7,	// (0x0000afea) level_3_battery

0x57da,	// (0x0000affd) level_4_battery

0x57ed,	// (0x0000b010) level_5_battery

0x5800,	// (0x0000b023) level_6_battery

0x5813,	// (0x0000b036) level_7_battery

0xbbe3,	// (0x00011406) list_menu_pane_ParamLimits

0xbbe3,	// (0x00011406) list_menu_pane

0xbbf4,	// (0x00011417) scroll_pane_cp25_ParamLimits

0xbbf4,	// (0x00011417) scroll_pane_cp25

0x5826,	// (0x0000b049) list_double2_graphic_pane_cp2_ParamLimits

0x5826,	// (0x0000b049) list_double2_graphic_pane_cp2

0x5826,	// (0x0000b049) list_double2_large_graphic_pane_cp2_ParamLimits

0x5826,	// (0x0000b049) list_double2_large_graphic_pane_cp2

0x5826,	// (0x0000b049) list_double2_pane_cp2_ParamLimits

0x5826,	// (0x0000b049) list_double2_pane_cp2

0x5826,	// (0x0000b049) list_double_graphic_pane_cp2_ParamLimits

0x5826,	// (0x0000b049) list_double_graphic_pane_cp2

0x5826,	// (0x0000b049) list_double_large_graphic_pane_cp2_ParamLimits

0x5826,	// (0x0000b049) list_double_large_graphic_pane_cp2

0x5826,	// (0x0000b049) list_double_number_pane_cp2_ParamLimits

0x5826,	// (0x0000b049) list_double_number_pane_cp2

0x5826,	// (0x0000b049) list_double_pane_cp2_ParamLimits

0x5826,	// (0x0000b049) list_double_pane_cp2

0x5841,	// (0x0000b064) list_single_2graphic_pane_cp2_ParamLimits

0x5841,	// (0x0000b064) list_single_2graphic_pane_cp2

0x5841,	// (0x0000b064) list_single_graphic_heading_pane_cp2_ParamLimits

0x5841,	// (0x0000b064) list_single_graphic_heading_pane_cp2

0x5841,	// (0x0000b064) list_single_graphic_pane_cp2_ParamLimits

0x5841,	// (0x0000b064) list_single_graphic_pane_cp2

0x5841,	// (0x0000b064) list_single_heading_pane_cp2_ParamLimits

0x5841,	// (0x0000b064) list_single_heading_pane_cp2

0x5852,	// (0x0000b075) list_single_large_graphic_pane_cp2_ParamLimits

0x5852,	// (0x0000b075) list_single_large_graphic_pane_cp2

0x5841,	// (0x0000b064) list_single_number_heading_pane_cp2_ParamLimits

0x5841,	// (0x0000b064) list_single_number_heading_pane_cp2

0x5841,	// (0x0000b064) list_single_number_pane_cp2_ParamLimits

0x5841,	// (0x0000b064) list_single_number_pane_cp2

0x5841,	// (0x0000b064) list_single_pane_cp2_ParamLimits

0x5841,	// (0x0000b064) list_single_pane_cp2

0xbc89,	// (0x000114ac) bg_popup_sub_pane_cp22

0x9096,	// (0x0000e8b9) popup_side_volume_key_window_g1

0x90ba,	// (0x0000e8dd) popup_side_volume_key_window_t1

0x90d6,	// (0x0000e8f9) volume_small_pane_cp1

0xa9a3,	// (0x000101c6) bg_popup_sub_pane_cp24_ParamLimits

0xa9a3,	// (0x000101c6) bg_popup_sub_pane_cp24

0xbc9f,	// (0x000114c2) fep_china_uni_candidate_pane_ParamLimits

0xbc9f,	// (0x000114c2) fep_china_uni_candidate_pane

0xbcb3,	// (0x000114d6) fep_china_uni_entry_pane

0xbcc3,	// (0x000114e6) popup_fep_china_uni_window_g1

0xbcdf,	// (0x00011502) fep_china_uni_entry_pane_g1

0xbce7,	// (0x0001150a) fep_china_uni_entry_pane_g2

0x0001,

0xf753,	// (0x00014f76) fep_china_uni_entry_pane_g

0xbcef,	// (0x00011512) fep_entry_item_pane

0xbcf9,	// (0x0001151c) fep_candidate_item_pane

0xbd01,	// (0x00011524) fep_china_uni_candidate_pane_g1

0xbd09,	// (0x0001152c) fep_china_uni_candidate_pane_g2

0xbd11,	// (0x00011534) fep_china_uni_candidate_pane_g3

0xbd19,	// (0x0001153c) fep_china_uni_candidate_pane_g4

0x0003,

0xf758,	// (0x00014f7b) fep_china_uni_candidate_pane_g

0xa543,	// (0x0000fd66) fep_entry_item_pane_g1

0xbd21,	// (0x00011544) fep_entry_item_pane_t1_ParamLimits

0xbd21,	// (0x00011544) fep_entry_item_pane_t1

0xbd37,	// (0x0001155a) fep_candidate_item_pane_t1_ParamLimits

0xbd37,	// (0x0001155a) fep_candidate_item_pane_t1

0xbd4c,	// (0x0001156f) fep_candidate_item_pane_t2_ParamLimits

0xbd4c,	// (0x0001156f) fep_candidate_item_pane_t2

0x0001,

0xf761,	// (0x00014f84) fep_candidate_item_pane_t_ParamLimits

0xf761,	// (0x00014f84) fep_candidate_item_pane_t

0xa70a,	// (0x0000ff2d) list_highlight_pane_cp31_ParamLimits

0xa70a,	// (0x0000ff2d) list_highlight_pane_cp31

0xbd5e,	// (0x00011581) level_1_signal_lsc

0xbd67,	// (0x0001158a) level_2_signal_lsc

0xbd70,	// (0x00011593) level_3_signal_lsc

0xbd79,	// (0x0001159c) level_4_signal_lsc

0xbd82,	// (0x000115a5) level_5_signal_lsc

0xbd8b,	// (0x000115ae) level_6_signal_lsc

0xbd94,	// (0x000115b7) level_7_signal_lsc

0xbd94,	// (0x000115b7) level_1_battery_lsc

0xbd9d,	// (0x000115c0) level_2_battery_lsc

0xbda6,	// (0x000115c9) level_3_battery_lsc

0xbdaf,	// (0x000115d2) level_4_battery_lsc

0xbdb8,	// (0x000115db) level_5_battery_lsc

0xbdc1,	// (0x000115e4) level_6_battery_lsc

0xbd5e,	// (0x00011581) level_7_battery_lsc

0xbdca,	// (0x000115ed) scroll_handle_focus_pane_g1

0xbdd3,	// (0x000115f6) scroll_handle_focus_pane_g2

0xbddc,	// (0x000115ff) scroll_handle_focus_pane_g3

0x0002,

0xf766,	// (0x00014f89) scroll_handle_focus_pane_g

0x58ab,	// (0x0000b0ce) list_single_2graphic_pane_g1_ParamLimits

0x58ab,	// (0x0000b0ce) list_single_2graphic_pane_g1

0x5224,	// (0x0000aa47) list_single_2graphic_pane_g2_ParamLimits

0x5224,	// (0x0000aa47) list_single_2graphic_pane_g2

0xafe3,	// (0x00010806) list_single_2graphic_pane_g3_ParamLimits

0xafe3,	// (0x00010806) list_single_2graphic_pane_g3

0x58b7,	// (0x0000b0da) list_single_2graphic_pane_g4_ParamLimits

0x58b7,	// (0x0000b0da) list_single_2graphic_pane_g4

0x0003,

0xf76d,	// (0x00014f90) list_single_2graphic_pane_g_ParamLimits

0xf76d,	// (0x00014f90) list_single_2graphic_pane_g

0x58c3,	// (0x0000b0e6) list_single_2graphic_pane_t1_ParamLimits

0x58c3,	// (0x0000b0e6) list_single_2graphic_pane_t1

0x58f1,	// (0x0000b114) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x58f1,	// (0x0000b114) list_double2_graphic_large_graphic_pane_g1

0x5287,	// (0x0000aaaa) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5287,	// (0x0000aaaa) list_double2_graphic_large_graphic_pane_g2

0x5253,	// (0x0000aa76) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5253,	// (0x0000aa76) list_double2_graphic_large_graphic_pane_g3

0x5901,	// (0x0000b124) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5901,	// (0x0000b124) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf776,	// (0x00014f99) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf776,	// (0x00014f99) list_double2_graphic_large_graphic_pane_g

0x590d,	// (0x0000b130) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x590d,	// (0x0000b130) list_double2_graphic_large_graphic_pane_t1

0x5923,	// (0x0000b146) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5923,	// (0x0000b146) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf77f,	// (0x00014fa2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf77f,	// (0x00014fa2) list_double2_graphic_large_graphic_pane_t

0xbf89,	// (0x000117ac) popup_fast_swap_window_ParamLimits

0xbf89,	// (0x000117ac) popup_fast_swap_window

0xbfa5,	// (0x000117c8) popup_side_volume_key_window

0xbfbf,	// (0x000117e2) stacon_top_pane

0xbfc9,	// (0x000117ec) status_pane_ParamLimits

0xbfc9,	// (0x000117ec) status_pane

0xbfbf,	// (0x000117e2) status_small_pane

0xa62a,	// (0x0000fe4d) control_pane

0xa62a,	// (0x0000fe4d) stacon_bottom_pane

0xae9a,	// (0x000106bd) scroll_pane_cp121

0xb347,	// (0x00010b6a) set_content_pane

0xeaf8,	// (0x0001431b) bg_active_tab_pane_g1_cp1

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp1

0xeb01,	// (0x00014324) bg_active_tab_pane_g3_cp1

0xeaf8,	// (0x0001431b) bg_passive_tab_pane_g1_cp1

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp1

0xeb01,	// (0x00014324) bg_passive_tab_pane_g3_cp1

0x593e,	// (0x0000b161) bg_active_tab_pane_g1_cp2

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp2

0x5935,	// (0x0000b158) bg_active_tab_pane_g3_cp2

0x593e,	// (0x0000b161) bg_passive_tab_pane_g1_cp2

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp2

0x5935,	// (0x0000b158) bg_passive_tab_pane_g3_cp2

0x5950,	// (0x0000b173) bg_active_tab_pane_g1_cp3

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp3

0x5947,	// (0x0000b16a) bg_active_tab_pane_g3_cp3

0x5950,	// (0x0000b173) bg_passive_tab_pane_g1_cp3

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp3

0x5947,	// (0x0000b16a) bg_passive_tab_pane_g3_cp3

0x5962,	// (0x0000b185) bg_active_tab_pane_g1_cp4

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp4

0x5959,	// (0x0000b17c) bg_active_tab_pane_g3_cp4

0x5962,	// (0x0000b185) bg_passive_tab_pane_g1_cp4

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp4

0x5959,	// (0x0000b17c) bg_passive_tab_pane_g3_cp4

0xbefe,	// (0x00011721) bg_active_tab_pane_g1_cp5

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp5

0xbf07,	// (0x0001172a) bg_active_tab_pane_g3_cp5

0xbefe,	// (0x00011721) bg_passive_tab_pane_g1_cp5

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp5

0xbf07,	// (0x0001172a) bg_passive_tab_pane_g3_cp5

0x596b,	// (0x0000b18e) list_set_graphic_pane_ParamLimits

0x596b,	// (0x0000b18e) list_set_graphic_pane

0xa62a,	// (0x0000fe4d) bg_set_opt_pane_cp4

0xbf10,	// (0x00011733) list_set_graphic_pane_g1_ParamLimits

0xbf10,	// (0x00011733) list_set_graphic_pane_g1

0xbf1c,	// (0x0001173f) list_set_graphic_pane_g2_ParamLimits

0xbf1c,	// (0x0001173f) list_set_graphic_pane_g2

0x0001,

0xf784,	// (0x00014fa7) list_set_graphic_pane_g_ParamLimits

0xf784,	// (0x00014fa7) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x000152ff) volume_small_pane_cp_g

0xbf3e,	// (0x00011761) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbf3e,	// (0x00011761) list_double2_large_graphic_pane_g1_cp2

0xbf4a,	// (0x0001176d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbf4a,	// (0x0001176d) list_double2_large_graphic_pane_g2_cp2

0xbf59,	// (0x0001177c) list_double2_large_graphic_pane_g3_cp2

0xbf61,	// (0x00011784) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbf61,	// (0x00011784) list_double2_large_graphic_pane_t1_cp2

0xbf77,	// (0x0001179a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbf77,	// (0x0001179a) list_double2_large_graphic_pane_t2_cp2

0xe855,	// (0x00014078) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe855,	// (0x00014078) list_double_large_graphic_pane_g1_cp2

0xe866,	// (0x00014089) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe866,	// (0x00014089) list_double_large_graphic_pane_g2_cp2

0xc0a4,	// (0x000118c7) list_double_large_graphic_pane_g3_cp2

0xe875,	// (0x00014098) list_double_large_graphic_pane_g4_cp

0xe87d,	// (0x000140a0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe87d,	// (0x000140a0) list_double_large_graphic_pane_t1_cp2

0xe894,	// (0x000140b7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe894,	// (0x000140b7) list_double_large_graphic_pane_t2_cp2

0xbfd7,	// (0x000117fa) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbfd7,	// (0x000117fa) list_double2_graphic_pane_g1_cp2

0xbfe3,	// (0x00011806) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbfe3,	// (0x00011806) list_double2_graphic_pane_g2_cp2

0xbff2,	// (0x00011815) list_double2_graphic_pane_g3_cp2

0xbffa,	// (0x0001181d) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbffa,	// (0x0001181d) list_double2_graphic_pane_t1_cp2

0xc010,	// (0x00011833) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc010,	// (0x00011833) list_double2_graphic_pane_t2_cp2

0xc022,	// (0x00011845) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc022,	// (0x00011845) list_single_number_heading_pane_g1_cp2

0xc02e,	// (0x00011851) list_single_number_heading_pane_g2_cp2

0xc036,	// (0x00011859) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc036,	// (0x00011859) list_single_number_heading_pane_t1_cp2

0xc04c,	// (0x0001186f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc04c,	// (0x0001186f) list_single_number_heading_pane_t2_cp2

0xc05e,	// (0x00011881) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc05e,	// (0x00011881) list_single_number_heading_pane_t3_cp2

0xc022,	// (0x00011845) list_single_heading_pane_g1_cp2_ParamLimits

0xc022,	// (0x00011845) list_single_heading_pane_g1_cp2

0xc02e,	// (0x00011851) list_single_heading_pane_g2_cp2

0xc036,	// (0x00011859) list_single_heading_pane_t1_cp2_ParamLimits

0xc036,	// (0x00011859) list_single_heading_pane_t1_cp2

0xe65f,	// (0x00013e82) list_single_heading_pane_t2_cp2_ParamLimits

0xe65f,	// (0x00013e82) list_single_heading_pane_t2_cp2

0xe5e4,	// (0x00013e07) list_double_graphic_pane_g1_cp2_ParamLimits

0xe5e4,	// (0x00013e07) list_double_graphic_pane_g1_cp2

0xe5f0,	// (0x00013e13) list_double_graphic_pane_g2_cp2_ParamLimits

0xe5f0,	// (0x00013e13) list_double_graphic_pane_g2_cp2

0xe5ff,	// (0x00013e22) list_double_graphic_pane_g3_cp2

0xe607,	// (0x00013e2a) list_double_graphic_pane_t1_cp2_ParamLimits

0xe607,	// (0x00013e2a) list_double_graphic_pane_t1_cp2

0xe61d,	// (0x00013e40) list_double_graphic_pane_t2_cp2_ParamLimits

0xe61d,	// (0x00013e40) list_double_graphic_pane_t2_cp2

0xc098,	// (0x000118bb) list_double_number_pane_g1_cp2_ParamLimits

0xc098,	// (0x000118bb) list_double_number_pane_g1_cp2

0xc0a4,	// (0x000118c7) list_double_number_pane_g2_cp2

0xe5aa,	// (0x00013dcd) list_double_number_pane_t1_cp2_ParamLimits

0xe5aa,	// (0x00013dcd) list_double_number_pane_t1_cp2

0xe5bc,	// (0x00013ddf) list_double_number_pane_t2_cp2_ParamLimits

0xe5bc,	// (0x00013ddf) list_double_number_pane_t2_cp2

0xe5d2,	// (0x00013df5) list_double_number_pane_t3_cp2_ParamLimits

0xe5d2,	// (0x00013df5) list_double_number_pane_t3_cp2

0xe522,	// (0x00013d45) list_single_graphic_pane_g1_cp2_ParamLimits

0xe522,	// (0x00013d45) list_single_graphic_pane_g1_cp2

0xc022,	// (0x00011845) list_single_graphic_pane_g2_cp2_ParamLimits

0xc022,	// (0x00011845) list_single_graphic_pane_g2_cp2

0xc02e,	// (0x00011851) list_single_graphic_pane_g3_cp2

0xe4fa,	// (0x00013d1d) list_single_graphic_pane_t1_cp2_ParamLimits

0xe4fa,	// (0x00013d1d) list_single_graphic_pane_t1_cp2

0xc022,	// (0x00011845) list_single_number_pane_g1_cp2_ParamLimits

0xc022,	// (0x00011845) list_single_number_pane_g1_cp2

0xc02e,	// (0x00011851) list_single_number_pane_g2_cp2

0xe4fa,	// (0x00013d1d) list_single_number_pane_t1_cp2_ParamLimits

0xe4fa,	// (0x00013d1d) list_single_number_pane_t1_cp2

0xe510,	// (0x00013d33) list_single_number_pane_t2_cp2_ParamLimits

0xe510,	// (0x00013d33) list_single_number_pane_t2_cp2

0xbf4a,	// (0x0001176d) list_double2_pane_g1_cp2_ParamLimits

0xbf4a,	// (0x0001176d) list_double2_pane_g1_cp2

0xbf59,	// (0x0001177c) list_double2_pane_g2_cp2

0xc070,	// (0x00011893) list_double2_pane_t1_cp2_ParamLimits

0xc070,	// (0x00011893) list_double2_pane_t1_cp2

0xc086,	// (0x000118a9) list_double2_pane_t2_cp2_ParamLimits

0xc086,	// (0x000118a9) list_double2_pane_t2_cp2

0xc098,	// (0x000118bb) list_double_pane_g1_cp2_ParamLimits

0xc098,	// (0x000118bb) list_double_pane_g1_cp2

0xc0a4,	// (0x000118c7) list_double_pane_g2_cp2

0xc0ac,	// (0x000118cf) list_double_pane_t1_cp2_ParamLimits

0xc0ac,	// (0x000118cf) list_double_pane_t1_cp2

0xc0c2,	// (0x000118e5) list_double_pane_t2_cp2_ParamLimits

0xc0c2,	// (0x000118e5) list_double_pane_t2_cp2

0xc0ea,	// (0x0001190d) list_single_pane_cp2_g3

0xc022,	// (0x00011845) list_single_pane_g1_cp2_ParamLimits

0xc022,	// (0x00011845) list_single_pane_g1_cp2

0xc02e,	// (0x00011851) list_single_pane_g2_cp2

0xc0fa,	// (0x0001191d) list_single_pane_t1_cp2_ParamLimits

0xc0fa,	// (0x0001191d) list_single_pane_t1_cp2

0xc112,	// (0x00011935) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc112,	// (0x00011935) list_single_large_graphic_pane_g1_cp2

0xc11e,	// (0x00011941) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc11e,	// (0x00011941) list_single_large_graphic_pane_g2_cp2

0xc12a,	// (0x0001194d) list_single_large_graphic_pane_g3_cp2

0xc132,	// (0x00011955) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc132,	// (0x00011955) list_single_large_graphic_pane_g4_cp1

0xc14c,	// (0x0001196f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc14c,	// (0x0001196f) list_single_large_graphic_pane_t1_cp2

0xe4dc,	// (0x00013cff) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe4dc,	// (0x00013cff) list_single_graphic_heading_pane_g1_cp2

0xe4b7,	// (0x00013cda) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe4b7,	// (0x00013cda) list_single_graphic_heading_pane_g4_cp2

0xc02e,	// (0x00011851) list_single_graphic_heading_pane_g5_cp2

0xc036,	// (0x00011859) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xc036,	// (0x00011859) list_single_graphic_heading_pane_t1_cp2

0xe4e8,	// (0x00013d0b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe4e8,	// (0x00013d0b) list_single_graphic_heading_pane_t2_cp2

0xe4ab,	// (0x00013cce) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe4ab,	// (0x00013cce) list_single_2graphic_pane_g1_cp2

0xe4b7,	// (0x00013cda) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe4b7,	// (0x00013cda) list_single_2graphic_pane_g2_cp2

0xc02e,	// (0x00011851) list_single_2graphic_pane_g3_cp2

0xded1,	// (0x000136f4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xded1,	// (0x000136f4) list_single_2graphic_pane_g4_cp2

0xe4c6,	// (0x00013ce9) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe4c6,	// (0x00013ce9) list_single_2graphic_pane_t1_cp2

0xa543,	// (0x0000fd66) list_highlight_pane_g10_cp1

0xe0bd,	// (0x000138e0) list_highlight_pane_g1_cp1

0xe0c5,	// (0x000138e8) list_highlight_pane_g2_cp1

0xe0cd,	// (0x000138f0) list_highlight_pane_g3_cp1

0xe0d5,	// (0x000138f8) list_highlight_pane_g4_cp1

0xe0dd,	// (0x00013900) list_highlight_pane_g5_cp1

0xe0e5,	// (0x00013908) list_highlight_pane_g6_cp1

0xe0ed,	// (0x00013910) list_highlight_pane_g7_cp1

0xe0f5,	// (0x00013918) list_highlight_pane_g8_cp1

0xe0fd,	// (0x00013920) list_highlight_pane_g9_cp1

0x6633,	// (0x0000be56) form_field_slider_pane_t3

0x6641,	// (0x0000be64) form_field_slider_pane_t4

0xe007,	// (0x0001382a) slider_form_pane_ParamLimits

0xe007,	// (0x0001382a) slider_form_pane

0xa62a,	// (0x0000fe4d) control_abbreviations

0xa62a,	// (0x0000fe4d) control_conventions

0xa62a,	// (0x0000fe4d) control_definitions

0xa62a,	// (0x0000fe4d) format_table_attribute

0xe6a9,	// (0x00013ecc) bg_popup_preview_window_pane_g9

0xa62a,	// (0x0000fe4d) format_table_data2

0xa62a,	// (0x0000fe4d) format_table_data3

0xa62a,	// (0x0000fe4d) format_table_data_example

0x0008,

0xa62a,	// (0x0000fe4d) intro_purpose

0xf90d,	// (0x00015130) bg_popup_preview_window_pane_g

0xa62a,	// (0x0000fe4d) texts_category

0xa62a,	// (0x0000fe4d) texts_graphics

0xc162,	// (0x00011985) text_digital

0xc171,	// (0x00011994) text_primary

0xc180,	// (0x000119a3) text_primary_small

0xc18f,	// (0x000119b2) text_secondary

0xc19e,	// (0x000119c1) text_title

0xebd4,	// (0x000143f7) bg_passive_tab_pane_g1_cp3_srt

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp3_srt

0xebdd,	// (0x00014400) bg_passive_tab_pane_g3_cp3_srt

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp3_srt_ParamLimits

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp3_srt

0xeae8,	// (0x0001430b) tabs_4_active_pane_srt_g1

0x4f17,	// (0x0000a73a) tabs_4_active_pane_srt_t1_ParamLimits

0x4f17,	// (0x0000a73a) tabs_4_active_pane_srt_t1

0xebd4,	// (0x000143f7) bg_active_tab_pane_g1_cp3_copy1

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp3_copy1

0xebdd,	// (0x00014400) bg_active_tab_pane_g3_cp3_copy1

0xa70a,	// (0x0000ff2d) tabs_2_long_active_pane_srt_ParamLimits

0xa70a,	// (0x0000ff2d) tabs_2_long_active_pane_srt

0xa70a,	// (0x0000ff2d) tabs_2_long_passive_pane_srt_ParamLimits

0xa70a,	// (0x0000ff2d) tabs_2_long_passive_pane_srt

0xd685,	// (0x00012ea8) bg_passive_tab_pane_cp4_srt_ParamLimits

0xd685,	// (0x00012ea8) bg_passive_tab_pane_cp4_srt

0xea6c,	// (0x0001428f) bg_passive_tab_pane_g1_cp4_srt

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp4_srt

0xea75,	// (0x00014298) bg_passive_tab_pane_g3_cp4_srt

0xa70a,	// (0x0000ff2d) bg_active_tab_pane_cp4_srt_ParamLimits

0xa70a,	// (0x0000ff2d) bg_active_tab_pane_cp4_srt

0x56c4,	// (0x0000aee7) tabs_2_long_active_pane_srt_t1_ParamLimits

0x56c4,	// (0x0000aee7) tabs_2_long_active_pane_srt_t1

0xea6c,	// (0x0001428f) bg_active_tab_pane_g1_cp4_srt

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp4_srt

0xea75,	// (0x00014298) bg_active_tab_pane_g3_cp4_srt

0xa9a3,	// (0x000101c6) tabs_3_long_active_pane_srt_ParamLimits

0xa9a3,	// (0x000101c6) tabs_3_long_active_pane_srt

0xa9a3,	// (0x000101c6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa9a3,	// (0x000101c6) tabs_3_long_passive_pane_cp_srt

0xa9a3,	// (0x000101c6) tabs_3_long_passive_pane_srt_ParamLimits

0xa9a3,	// (0x000101c6) tabs_3_long_passive_pane_srt

0xd685,	// (0x00012ea8) bg_passive_tab_pane_cp5_srt_ParamLimits

0xd685,	// (0x00012ea8) bg_passive_tab_pane_cp5_srt

0xbefe,	// (0x00011721) bg_passive_tab_pane_g1_cp5_srt

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp5_srt

0xbf07,	// (0x0001172a) bg_passive_tab_pane_g3_cp5_srt

0xa70a,	// (0x0000ff2d) bg_active_tab_pane_cp5_srt_ParamLimits

0xa70a,	// (0x0000ff2d) bg_active_tab_pane_cp5_srt

0x56db,	// (0x0000aefe) tabs_3_long_active_pane_srt_t1_ParamLimits

0x56db,	// (0x0000aefe) tabs_3_long_active_pane_srt_t1

0xbefe,	// (0x00011721) bg_active_tab_pane_g1_cp5_srt

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp5_srt

0xbf07,	// (0x0001172a) bg_active_tab_pane_g3_cp5_srt

0xea5e,	// (0x00014281) navi_text_pane_srt_t1

0xea56,	// (0x00014279) navi_icon_pane_srt_g1

0xc363,	// (0x00011b86) midp_editing_number_pane_srt

0xc1ad,	// (0x000119d0) midp_ticker_pane_srt

0xc36b,	// (0x00011b8e) midp_ticker_pane_srt_g1

0xc373,	// (0x00011b96) midp_ticker_pane_srt_g2

0x0001,

0xf7a3,	// (0x00014fc6) midp_ticker_pane_srt_g

0xc37b,	// (0x00011b9e) midp_ticker_pane_srt_t1

0xea47,	// (0x0001426a) midp_editing_number_pane_t1_copy1

0x597f,	// (0x0000b1a2) listscroll_midp_pane

0x597f,	// (0x0000b1a2) midp_form_pane

0xc21d,	// (0x00011a40) midp_info_popup_window_ParamLimits

0xc21d,	// (0x00011a40) midp_info_popup_window

0xb638,	// (0x00010e5b) bg_popup_sub_pane_cp50_ParamLimits

0xb638,	// (0x00010e5b) bg_popup_sub_pane_cp50

0xdd55,	// (0x00013578) listscroll_midp_info_pane_ParamLimits

0xdd55,	// (0x00013578) listscroll_midp_info_pane

0xdd3d,	// (0x00013560) listscroll_form_midp_pane_ParamLimits

0xdd3d,	// (0x00013560) listscroll_form_midp_pane

0xdd49,	// (0x0001356c) scroll_bar_cp050

0x6627,	// (0x0000be4a) list_midp_pane

0xf560,	// (0x00014d83) signal_pane_g2_cp

0xdc6f,	// (0x00013492) listscroll_midp_info_pane_t1_ParamLimits

0xdc6f,	// (0x00013492) listscroll_midp_info_pane_t1

0xdc87,	// (0x000134aa) listscroll_midp_info_pane_t2_ParamLimits

0xdc87,	// (0x000134aa) listscroll_midp_info_pane_t2

0xdcc5,	// (0x000134e8) listscroll_midp_info_pane_t3_ParamLimits

0xdcc5,	// (0x000134e8) listscroll_midp_info_pane_t3

0xdcff,	// (0x00013522) listscroll_midp_info_pane_t4_ParamLimits

0xdcff,	// (0x00013522) listscroll_midp_info_pane_t4

0x0003,

0xf848,	// (0x0001506b) listscroll_midp_info_pane_t_ParamLimits

0xf848,	// (0x0001506b) listscroll_midp_info_pane_t

0xb6e7,	// (0x00010f0a) scroll_pane_cp21

0xdc13,	// (0x00013436) form_midp_field_choice_group_pane

0xdc1c,	// (0x0001343f) form_midp_field_text_pane

0xdc55,	// (0x00013478) form_midp_field_time_pane

0xdc5d,	// (0x00013480) form_midp_gauge_slider_pane

0xdc66,	// (0x00013489) form_midp_gauge_wait_pane

0xa62a,	// (0x0000fe4d) form_midp_image_pane

0x6611,	// (0x0000be34) list_single_midp_pane_ParamLimits

0x6611,	// (0x0000be34) list_single_midp_pane

0x65f0,	// (0x0000be13) form_midp_field_text_pane_t1

0xdab3,	// (0x000132d6) input_focus_pane_cp050

0xdc02,	// (0x00013425) list_midp_form_text_pane

0xdbd1,	// (0x000133f4) form_midp_field_choice_group_pane_t1

0xdbdf,	// (0x00013402) input_focus_pane_cp051

0xdbf3,	// (0x00013416) list_midp_choice_pane

0xa62a,	// (0x0000fe4d) status_idle_pane

0xdbb5,	// (0x000133d8) form_midp_field_time_pane_t1

0xa543,	// (0x0000fd66) wait_anim_pane_g2_copy1

0xdbc3,	// (0x000133e6) form_midp_field_time_pane_t2

0x0001,

0xc2c5,	// (0x00011ae8) aid_navinavi_width_2_pane

0xf843,	// (0x00015066) form_midp_field_time_pane_t

0xa62a,	// (0x0000fe4d) input_focus_pane_cp052

0xa62a,	// (0x0000fe4d) bg_input_focus_pane_cp040

0xdb91,	// (0x000133b4) form_midp_gauge_slider_pane_t1

0xdb9f,	// (0x000133c2) form_midp_gauge_slider_pane_t2

0x65d4,	// (0x0000bdf7) form_midp_gauge_slider_pane_t3

0x65e2,	// (0x0000be05) form_midp_gauge_slider_pane_t4

0x0003,

0xf83a,	// (0x0001505d) form_midp_gauge_slider_pane_t

0xdbad,	// (0x000133d0) form_midp_slider_pane

0xa70a,	// (0x0000ff2d) bg_input_focus_pane_cp041_ParamLimits

0xa70a,	// (0x0000ff2d) bg_input_focus_pane_cp041

0xdb61,	// (0x00013384) form_midp_gauge_wait_pane_t1_ParamLimits

0xdb61,	// (0x00013384) form_midp_gauge_wait_pane_t1

0xdb73,	// (0x00013396) form_midp_gauge_wait_pane_t2_ParamLimits

0xdb73,	// (0x00013396) form_midp_gauge_wait_pane_t2

0x0001,

0xf835,	// (0x00015058) form_midp_gauge_wait_pane_t_ParamLimits

0xf835,	// (0x00015058) form_midp_gauge_wait_pane_t

0xdb85,	// (0x000133a8) form_midp_wait_pane_ParamLimits

0xdb85,	// (0x000133a8) form_midp_wait_pane

0xdb2b,	// (0x0001334e) form_midp_image_pane_g1

0xdb34,	// (0x00013357) form_midp_image_pane_t1

0xdb43,	// (0x00013366) form_midp_image_pane_t2

0xdb52,	// (0x00013375) form_midp_image_pane_t3

0x0002,

0xf82e,	// (0x00015051) form_midp_image_pane_t

0xdb13,	// (0x00013336) list_single_midp_pane_g1

0xdb1c,	// (0x0001333f) list_single_midp_pane_t1

0x65c0,	// (0x0000bde3) list_midp_form_item_pane_ParamLimits

0x65c0,	// (0x0000bde3) list_midp_form_item_pane

0xc26d,	// (0x00011a90) list_midp_form_item_pane_t1

0xc27c,	// (0x00011a9f) midp_ticker_pane_g1

0xc288,	// (0x00011aab) midp_ticker_pane_g2

0x0001,

0xf789,	// (0x00014fac) midp_ticker_pane_g

0xc294,	// (0x00011ab7) midp_ticker_pane_t1

0xea47,	// (0x0001426a) midp_editing_number_pane_t1

0xeb5a,	// (0x0001437d) midp_editing_number_pane

0xeb66,	// (0x00014389) midp_ticker_pane

0xea37,	// (0x0001425a) ai_message_heading_pane

0xa62a,	// (0x0000fe4d) bg_popup_window_pane_cp14

0xea3f,	// (0x00014262) listscroll_ai_message_pane

0xe9c1,	// (0x000141e4) ai_message_heading_pane_g1_ParamLimits

0xe9c1,	// (0x000141e4) ai_message_heading_pane_g1

0xe9cd,	// (0x000141f0) ai_message_heading_pane_g2_ParamLimits

0xe9cd,	// (0x000141f0) ai_message_heading_pane_g2

0xe9d9,	// (0x000141fc) ai_message_heading_pane_g3_ParamLimits

0xe9d9,	// (0x000141fc) ai_message_heading_pane_g3

0xe9e5,	// (0x00014208) ai_message_heading_pane_g4_ParamLimits

0xe9e5,	// (0x00014208) ai_message_heading_pane_g4

0x0003,

0xf96f,	// (0x00015192) ai_message_heading_pane_g_ParamLimits

0xf96f,	// (0x00015192) ai_message_heading_pane_g

0xe9f1,	// (0x00014214) ai_message_heading_pane_t1_ParamLimits

0xe9f1,	// (0x00014214) ai_message_heading_pane_t1

0xea0b,	// (0x0001422e) ai_message_heading_pane_t2_ParamLimits

0xea0b,	// (0x0001422e) ai_message_heading_pane_t2

0x0001,

0xf978,	// (0x0001519b) ai_message_heading_pane_t_ParamLimits

0xf978,	// (0x0001519b) ai_message_heading_pane_t

0xea1d,	// (0x00014240) bg_popup_heading_pane_cp1_ParamLimits

0xea1d,	// (0x00014240) bg_popup_heading_pane_cp1

0xe9af,	// (0x000141d2) list_ai_message_pane_ParamLimits

0xe9af,	// (0x000141d2) list_ai_message_pane

0xb6e7,	// (0x00010f0a) scroll_pane_cp10

0xe94b,	// (0x0001416e) list_ai_message_pane_g1

0xe953,	// (0x00014176) list_ai_message_pane_g2

0x0001,

0xf94c,	// (0x0001516f) list_ai_message_pane_g

0xe95b,	// (0x0001417e) list_ai_message_pane_t1_ParamLimits

0xe95b,	// (0x0001417e) list_ai_message_pane_t1

0xe970,	// (0x00014193) list_ai_message_pane_t2_ParamLimits

0xe970,	// (0x00014193) list_ai_message_pane_t2

0xe985,	// (0x000141a8) list_ai_message_pane_t3_ParamLimits

0xe985,	// (0x000141a8) list_ai_message_pane_t3

0xe99a,	// (0x000141bd) list_ai_message_pane_t4_ParamLimits

0xe99a,	// (0x000141bd) list_ai_message_pane_t4

0x0003,

0xf951,	// (0x00015174) list_ai_message_pane_t_ParamLimits

0xf951,	// (0x00015174) list_ai_message_pane_t

0xe939,	// (0x0001415c) cell_ai_soft_ind_pane_ParamLimits

0xe939,	// (0x0001415c) cell_ai_soft_ind_pane

0xc2a6,	// (0x00011ac9) cell_ai_soft_ind_pane_g1_ParamLimits

0xc2a6,	// (0x00011ac9) cell_ai_soft_ind_pane_g1

0xa62a,	// (0x0000fe4d) grid_highlight_cp1

0xc2b3,	// (0x00011ad6) text_secondary_cp56_ParamLimits

0xc2b3,	// (0x00011ad6) text_secondary_cp56

0xe90e,	// (0x00014131) example_general_pane_ParamLimits

0xe90e,	// (0x00014131) example_general_pane

0xe91a,	// (0x0001413d) example_parent_pane_g1_ParamLimits

0xe91a,	// (0x0001413d) example_parent_pane_g1

0xe926,	// (0x00014149) example_parent_pane_t1_ParamLimits

0xe926,	// (0x00014149) example_parent_pane_t1

0x5eb4,	// (0x0000b6d7) popup_preview_text_window_ParamLimits

0x5eb4,	// (0x0000b6d7) popup_preview_text_window

0xc0f2,	// (0x00011915) list_single_pane_cp2_g4

0xaa85,	// (0x000102a8) bg_popup_preview_window_pane_ParamLimits

0xaa85,	// (0x000102a8) bg_popup_preview_window_pane

0xe6b1,	// (0x00013ed4) popup_preview_text_window_t1_ParamLimits

0xe6b1,	// (0x00013ed4) popup_preview_text_window_t1

0xe6cf,	// (0x00013ef2) popup_preview_text_window_t2_ParamLimits

0xe6cf,	// (0x00013ef2) popup_preview_text_window_t2

0xe718,	// (0x00013f3b) popup_preview_text_window_t3_ParamLimits

0xe718,	// (0x00013f3b) popup_preview_text_window_t3

0xe75d,	// (0x00013f80) popup_preview_text_window_t4_ParamLimits

0xe75d,	// (0x00013f80) popup_preview_text_window_t4

0x0004,

0xf920,	// (0x00015143) popup_preview_text_window_t_ParamLimits

0xf920,	// (0x00015143) popup_preview_text_window_t

0xe7db,	// (0x00013ffe) scroll_pane_cp11

0xd99d,	// (0x000131c0) bg_popup_preview_window_pane_g1

0xe671,	// (0x00013e94) bg_popup_preview_window_pane_g2

0xe679,	// (0x00013e9c) bg_popup_preview_window_pane_g3

0xe681,	// (0x00013ea4) bg_popup_preview_window_pane_g4

0xe689,	// (0x00013eac) bg_popup_preview_window_pane_g5

0xe691,	// (0x00013eb4) bg_popup_preview_window_pane_g6

0xe699,	// (0x00013ebc) bg_popup_preview_window_pane_g7

0xe6a1,	// (0x00013ec4) bg_popup_preview_window_pane_g8

0x8b9b,	// (0x0000e3be) aid_popup_width_pane

0x5e36,	// (0x0000b659) popup_midp_note_alarm_window_ParamLimits

0x5e36,	// (0x0000b659) popup_midp_note_alarm_window

0xb3f4,	// (0x00010c17) data_form_pane_ParamLimits

0x55a9,	// (0x0000adcc) form_field_data_pane_g1

0x55b3,	// (0x0000add6) form_field_data_pane_t1_ParamLimits

0xb420,	// (0x00010c43) input_focus_pane_ParamLimits

0xb42e,	// (0x00010c51) data_form_wide_pane_ParamLimits

0xb43a,	// (0x00010c5d) form_field_data_wide_pane_g1

0xb45a,	// (0x00010c7d) form_field_data_wide_pane_t1_ParamLimits

0xad11,	// (0x00010534) input_focus_pane_cp6_ParamLimits

0x56a2,	// (0x0000aec5) input_popup_find_pane_g1_ParamLimits

0x56a2,	// (0x0000aec5) input_popup_find_pane_g1

0x8f64,	// (0x0000e787) aid_navi_side_left_pane

0x8f74,	// (0x0000e797) aid_navi_side_right_pane

0xe18e,	// (0x000139b1) bg_popup_window_pane_cp30_ParamLimits

0xe18e,	// (0x000139b1) bg_popup_window_pane_cp30

0xe208,	// (0x00013a2b) popup_midp_note_alarm_window_g1_ParamLimits

0xe208,	// (0x00013a2b) popup_midp_note_alarm_window_g1

0xe238,	// (0x00013a5b) popup_midp_note_alarm_window_t1_ParamLimits

0xe238,	// (0x00013a5b) popup_midp_note_alarm_window_t1

0xe2d9,	// (0x00013afc) popup_midp_note_alarm_window_t2_ParamLimits

0xe2d9,	// (0x00013afc) popup_midp_note_alarm_window_t2

0xe387,	// (0x00013baa) popup_midp_note_alarm_window_t3_ParamLimits

0xe387,	// (0x00013baa) popup_midp_note_alarm_window_t3

0xe3af,	// (0x00013bd2) popup_midp_note_alarm_window_t4_ParamLimits

0xe3af,	// (0x00013bd2) popup_midp_note_alarm_window_t4

0xe3cf,	// (0x00013bf2) popup_midp_note_alarm_window_t5_ParamLimits

0xe3cf,	// (0x00013bf2) popup_midp_note_alarm_window_t5

0x000a,

0xf8bd,	// (0x000150e0) popup_midp_note_alarm_window_t_ParamLimits

0xf8bd,	// (0x000150e0) popup_midp_note_alarm_window_t

0xe47b,	// (0x00013c9e) wait_bar_pane_cp1_ParamLimits

0xe47b,	// (0x00013c9e) wait_bar_pane_cp1

0xa62a,	// (0x0000fe4d) wait_anim_pane_copy1

0xa62a,	// (0x0000fe4d) wait_border_pane_copy1

0xdec8,	// (0x000136eb) wait_border_pane_g1_copy1

0xb474,	// (0x00010c97) form_field_popup_pane_g1

0x55cb,	// (0x0000adee) form_field_popup_pane_t1_ParamLimits

0xb420,	// (0x00010c43) input_focus_pane_cp7_ParamLimits

0xb3f4,	// (0x00010c17) list_form_pane_ParamLimits

0xb494,	// (0x00010cb7) form_field_popup_wide_pane_g1

0xb49c,	// (0x00010cbf) form_field_popup_wide_pane_t1_ParamLimits

0xb420,	// (0x00010c43) input_focus_pane_cp8_ParamLimits

0xb4b1,	// (0x00010cd4) list_form_wide_pane_ParamLimits

0xec05,	// (0x00014428) aid_size_cell_graphic_pane

0x5648,	// (0x0000ae6b) data_form_pane_t1_ParamLimits

0x6a75,	// (0x0000c298) data_form_wide_pane_t1_ParamLimits

0x6212,	// (0x0000ba35) bg_status_flat_pane

0x4e74,	// (0x0000a697) title_pane_t1_ParamLimits

0xa6d2,	// (0x0000fef5) title_pane_t2_ParamLimits

0xa6f8,	// (0x0000ff1b) title_pane_t3_ParamLimits

0xf59b,	// (0x00014dbe) title_pane_t_ParamLimits

0x57a2,	// (0x0000afc5) level_1_signal_ParamLimits

0x57b4,	// (0x0000afd7) level_2_signal_ParamLimits

0x57c7,	// (0x0000afea) level_3_signal_ParamLimits

0x57da,	// (0x0000affd) level_4_signal_ParamLimits

0x57ed,	// (0x0000b010) level_5_signal_ParamLimits

0x5800,	// (0x0000b023) level_6_signal_ParamLimits

0x5813,	// (0x0000b036) level_7_signal_ParamLimits

0x57a2,	// (0x0000afc5) level_1_battery_ParamLimits

0x57b4,	// (0x0000afd7) level_2_battery_ParamLimits

0x57c7,	// (0x0000afea) level_3_battery_ParamLimits

0x57da,	// (0x0000affd) level_4_battery_ParamLimits

0x57ed,	// (0x0000b010) level_5_battery_ParamLimits

0x5800,	// (0x0000b023) level_6_battery_ParamLimits

0x5813,	// (0x0000b036) level_7_battery_ParamLimits

0xe0bd,	// (0x000138e0) bg_status_flat_pane_g1

0xe0c5,	// (0x000138e8) bg_status_flat_pane_g2

0xe0cd,	// (0x000138f0) bg_status_flat_pane_g3

0xe0d5,	// (0x000138f8) bg_status_flat_pane_g4

0xe0dd,	// (0x00013900) bg_status_flat_pane_g5

0xe0e5,	// (0x00013908) bg_status_flat_pane_g6

0xe0ed,	// (0x00013910) bg_status_flat_pane_g7

0x4f01,	// (0x0000a724) tabs_3_active_pane_t1_ParamLimits

0x4f01,	// (0x0000a724) tabs_3_passive_pane_t1_ParamLimits

0x4f17,	// (0x0000a73a) tabs_4_active_pane_t1_ParamLimits

0x4f17,	// (0x0000a73a) tabs_4_1_passive_pane_t1_ParamLimits

0x56ae,	// (0x0000aed1) tabs_2_active_pane_t1_ParamLimits

0x56ae,	// (0x0000aed1) tabs_2_passive_pane_t1_ParamLimits

0xa70a,	// (0x0000ff2d) bg_active_tab_pane_cp4_ParamLimits

0x56c4,	// (0x0000aee7) tabs_2_long_active_pane_t1_ParamLimits

0xd685,	// (0x00012ea8) bg_passive_tab_pane_cp4_ParamLimits

0x94ed,	// (0x0000ed10) list_single_midp_graphic_pane_t1_ParamLimits

0xa70a,	// (0x0000ff2d) bg_active_tab_pane_cp5_ParamLimits

0x56db,	// (0x0000aefe) tabs_3_long_active_pane_t1_ParamLimits

0xd685,	// (0x00012ea8) bg_passive_tab_pane_cp5_ParamLimits

0x94ed,	// (0x0000ed10) list_single_midp_graphic_pane_t1

0x6212,	// (0x0000ba35) bg_status_flat_pane_ParamLimits

0xd87c,	// (0x0001309f) indicator_pane_cp2_ParamLimits

0xd87c,	// (0x0001309f) indicator_pane_cp2

0x6378,	// (0x0000bb9b) navi_pane_srt_ParamLimits

0x6378,	// (0x0000bb9b) navi_pane_srt

0xd8a4,	// (0x000130c7) popup_clock_digital_analogue_window_cp1

0xa7fe,	// (0x00010021) indicator_pane_t1

0xc1ad,	// (0x000119d0) copy_highlight_pane

0xc1ad,	// (0x000119d0) cursor_graphics_pane

0xc1ad,	// (0x000119d0) graphic_within_text_pane

0xc1ad,	// (0x000119d0) link_highlight_pane

0xe79e,	// (0x00013fc1) popup_preview_text_window_t5_ParamLimits

0xe79e,	// (0x00013fc1) popup_preview_text_window_t5

0xc2cd,	// (0x00011af0) cursor_digital_pane

0xc2cd,	// (0x00011af0) cursor_primary_pane

0xc2de,	// (0x00011b01) cursor_primary_small_pane

0xc2e6,	// (0x00011b09) cursor_secondary_pane

0xc2ee,	// (0x00011b11) cursor_title_pane

0xc2cd,	// (0x00011af0) link_highlight_digital_pane

0xc2d5,	// (0x00011af8) link_highlight_primary_pane

0xc2de,	// (0x00011b01) link_highlight_primary_small_pane

0xc2e6,	// (0x00011b09) link_highlight_secondary_pane

0xc2ee,	// (0x00011b11) link_highlight_title_pane

0xc2cd,	// (0x00011af0) copy_highlight_digital_pane

0xc2cd,	// (0x00011af0) copy_highlight_primary_pane

0xc2de,	// (0x00011b01) copy_highlight_primary_small_pane

0xc2e6,	// (0x00011b09) copy_highlight_secondary_pane

0xc2ee,	// (0x00011b11) copy_highlight_title_pane

0xc2e6,	// (0x00011b09) graphic_text_digital_pane

0xe13d,	// (0x00013960) graphic_text_primary_pane

0xe146,	// (0x00013969) graphic_text_primary_small_pane

0xc2de,	// (0x00011b01) graphic_text_secondary_pane

0xc2cd,	// (0x00011af0) graphic_text_title_pane

0x5a1c,	// (0x0000b23f) cursor_primary_pane_g1

0xe12f,	// (0x00013952) cursor_text_primary_t1

0x6663,	// (0x0000be86) cursor_primary_small_pane_g1

0xe121,	// (0x00013944) cursor_text_primary_small_t1

0x6659,	// (0x0000be7c) cursor_primary_small_pane_g1_copy1

0xe113,	// (0x00013936) cursor_text_primary_small_t1_copy1

0xe105,	// (0x00013928) cursor_text_title_t1

0x664f,	// (0x0000be72) cursor_title_pane_g1

0x5a1c,	// (0x0000b23f) cursor_digital_pane_g1

0xc2fe,	// (0x00011b21) cursor_text_digital_t1

0xc30c,	// (0x00011b2f) link_highlight_primary_pane_g1

0xe0ae,	// (0x000138d1) link_highlight_primary_pane_t1

0xc30c,	// (0x00011b2f) link_highlight_primary_small_pane_g1

0xc314,	// (0x00011b37) link_highlight_primary_small_pane_t1

0xc323,	// (0x00011b46) link_highlight_secondary_pane_g1

0xc32b,	// (0x00011b4e) link_highlight_secondary_pane_t1

0xe013,	// (0x00013836) link_highlight_title_pane_g1

0xe02a,	// (0x0001384d) link_highlight_title_pane_t1

0xe013,	// (0x00013836) link_highlight_digital_pane_g1

0xe01b,	// (0x0001383e) link_highlight_digital_pane_t1

0xdeef,	// (0x00013712) copy_highlight_primary_pane_g1

0xdf15,	// (0x00013738) copy_highlight_primary_pane_t1

0xdeef,	// (0x00013712) copy_highlight_primary_small_pane_g1

0xdf06,	// (0x00013729) copy_highlight_primary_small_pane_t1

0xc33a,	// (0x00011b5d) copy_highlight_secondary_pane_g1

0xc342,	// (0x00011b65) copy_highlight_secondary_pane_t1

0xdeef,	// (0x00013712) copy_highlight_title_pane_g1

0xdef7,	// (0x0001371a) copy_highlight_title_pane_t1

0xdeef,	// (0x00013712) copy_highlight_digital_pane_g1

0xed44,	// (0x00014567) copy_highlight_digital_pane_t1

0xec54,	// (0x00014477) graphic_text_primary_pane_g1

0xed28,	// (0x0001454b) graphic_text_primary_pane_t1

0xed36,	// (0x00014559) graphic_text_primary_pane_t2

0x0001,

0xf9ec,	// (0x0001520f) graphic_text_primary_pane_t

0xed04,	// (0x00014527) graphic_text_primary_small_pane_g1

0xed0c,	// (0x0001452f) graphic_text_primary_small_pane_t1

0xed1a,	// (0x0001453d) graphic_text_primary_small_pane_t2

0x0001,

0xf9e7,	// (0x0001520a) graphic_text_primary_small_pane_t

0xece0,	// (0x00014503) graphic_text_secondary_pane_g1

0xece8,	// (0x0001450b) graphic_text_secondary_pane_t1

0xecf6,	// (0x00014519) graphic_text_secondary_pane_t2

0x0001,

0xf9e2,	// (0x00015205) graphic_text_secondary_pane_t

0xec78,	// (0x0001449b) graphic_text_title_pane_g1

0xecc4,	// (0x000144e7) graphic_text_title_pane_t1

0xecd2,	// (0x000144f5) graphic_text_title_pane_t2

0x0001,

0xf9dd,	// (0x00015200) graphic_text_title_pane_t

0xec54,	// (0x00014477) graphic_text_digital_pane_g1

0xec5c,	// (0x0001447f) graphic_text_digital_pane_t1

0xec6a,	// (0x0001448d) graphic_text_digital_pane_t2

0x0001,

0xf9d8,	// (0x000151fb) graphic_text_digital_pane_t

0xa70a,	// (0x0000ff2d) navi_icon_pane_srt_ParamLimits

0xa70a,	// (0x0000ff2d) navi_icon_pane_srt

0xa62a,	// (0x0000fe4d) navi_midp_pane_srt

0xa62a,	// (0x0000fe4d) navi_navi_pane_srt

0xa70a,	// (0x0000ff2d) navi_text_pane_srt_ParamLimits

0xa70a,	// (0x0000ff2d) navi_text_pane_srt

0xea8b,	// (0x000142ae) navi_navi_icon_text_pane_srt

0xea93,	// (0x000142b6) navi_navi_pane_srt_g1_ParamLimits

0xea93,	// (0x000142b6) navi_navi_pane_srt_g1

0xeaa5,	// (0x000142c8) navi_navi_pane_srt_g2_ParamLimits

0xeaa5,	// (0x000142c8) navi_navi_pane_srt_g2

0x0001,

0xf9d3,	// (0x000151f6) navi_navi_pane_srt_g_ParamLimits

0xf9d3,	// (0x000151f6) navi_navi_pane_srt_g

0xeab7,	// (0x000142da) navi_navi_tabs_pane_srt

0xea8b,	// (0x000142ae) navi_navi_text_pane_srt

0xea8b,	// (0x000142ae) navi_navi_volume_pane_srt

0xec45,	// (0x00014468) navi_navi_text_pane_srt_t1

0x9851,	// (0x0000f074) navi_navi_volume_pane_srt_g1

0x9859,	// (0x0000f07c) volume_small_pane_srt_ParamLimits

0x9859,	// (0x0000f07c) volume_small_pane_srt

0x920b,	// (0x0000ea2e) volume_small_pane_srt_g1_ParamLimits

0x920b,	// (0x0000ea2e) volume_small_pane_srt_g1

0x921b,	// (0x0000ea3e) volume_small_pane_srt_g2_ParamLimits

0x921b,	// (0x0000ea3e) volume_small_pane_srt_g2

0x922c,	// (0x0000ea4f) volume_small_pane_srt_g3_ParamLimits

0x922c,	// (0x0000ea4f) volume_small_pane_srt_g3

0x923d,	// (0x0000ea60) volume_small_pane_srt_g4_ParamLimits

0x923d,	// (0x0000ea60) volume_small_pane_srt_g4

0x924e,	// (0x0000ea71) volume_small_pane_srt_g5_ParamLimits

0x924e,	// (0x0000ea71) volume_small_pane_srt_g5

0x925f,	// (0x0000ea82) volume_small_pane_srt_g6_ParamLimits

0x925f,	// (0x0000ea82) volume_small_pane_srt_g6

0x9270,	// (0x0000ea93) volume_small_pane_srt_g7_ParamLimits

0x9270,	// (0x0000ea93) volume_small_pane_srt_g7

0x9281,	// (0x0000eaa4) volume_small_pane_srt_g8_ParamLimits

0x9281,	// (0x0000eaa4) volume_small_pane_srt_g8

0x9292,	// (0x0000eab5) volume_small_pane_srt_g9_ParamLimits

0x9292,	// (0x0000eab5) volume_small_pane_srt_g9

0x92a3,	// (0x0000eac6) volume_small_pane_srt_g10_ParamLimits

0x92a3,	// (0x0000eac6) volume_small_pane_srt_g10

0x0009,

0xf78e,	// (0x00014fb1) volume_small_pane_srt_g_ParamLimits

0xf78e,	// (0x00014fb1) volume_small_pane_srt_g

0xab2e,	// (0x00010351) query_popup_data_pane_cp2

0xec2b,	// (0x0001444e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xec2b,	// (0x0001444e) navi_navi_icon_text_pane_srt_t1

0xe13d,	// (0x00013960) navi_tabs_2_long_pane_srt

0xe13d,	// (0x00013960) navi_tabs_2_pane_srt

0xe13d,	// (0x00013960) navi_tabs_3_long_pane_srt

0xe13d,	// (0x00013960) navi_tabs_3_pane_srt

0xe13d,	// (0x00013960) navi_tabs_4_pane_srt

0x9831,	// (0x0000f054) tabs_2_active_pane_srt_ParamLimits

0x9831,	// (0x0000f054) tabs_2_active_pane_srt

0x9841,	// (0x0000f064) tabs_2_passive_pane_srt_ParamLimits

0x9841,	// (0x0000f064) tabs_2_passive_pane_srt

0xdab3,	// (0x000132d6) bg_passive_tab_pane_cp1_srt_ParamLimits

0xdab3,	// (0x000132d6) bg_passive_tab_pane_cp1_srt

0xeaf8,	// (0x0001431b) bg_passive_tab_pane_g1_cp1_srt

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp1_srt

0xeb01,	// (0x00014324) bg_passive_tab_pane_g3_cp1_srt

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp1_srt_ParamLimits

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp1_srt

0xeaf0,	// (0x00014313) tabs_2_active_pane_srt_g1

0x56ae,	// (0x0000aed1) tabs_2_active_pane_srt_t1_ParamLimits

0x56ae,	// (0x0000aed1) tabs_2_active_pane_srt_t1

0xeaf8,	// (0x0001431b) bg_active_tab_pane_g1_cp1_srt

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp1_srt

0xeb01,	// (0x00014324) bg_active_tab_pane_g3_cp1_srt

0x97fe,	// (0x0000f021) tabs_3_active_pane_srt_ParamLimits

0x97fe,	// (0x0000f021) tabs_3_active_pane_srt

0x980f,	// (0x0000f032) tabs_3_passive_pane_cp_srt_ParamLimits

0x980f,	// (0x0000f032) tabs_3_passive_pane_cp_srt

0x9820,	// (0x0000f043) tabs_3_passive_pane_srt_ParamLimits

0x9820,	// (0x0000f043) tabs_3_passive_pane_srt

0xdab3,	// (0x000132d6) bg_passive_tab_pane_cp2_srt_ParamLimits

0xdab3,	// (0x000132d6) bg_passive_tab_pane_cp2_srt

0xc351,	// (0x00011b74) bg_passive_tab_pane_g1_cp2_srt

0xbe78,	// (0x0001169b) bg_passive_tab_pane_g2_cp2_srt

0xc35a,	// (0x00011b7d) bg_passive_tab_pane_g3_cp2_srt

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp2_srt_ParamLimits

0xa9a3,	// (0x000101c6) bg_active_tab_pane_cp2_srt

0xec1b,	// (0x0001443e) tabs_3_active_pane_srt_g1

0x4f01,	// (0x0000a724) tabs_3_active_pane_srt_t1_ParamLimits

0x4f01,	// (0x0000a724) tabs_3_active_pane_srt_t1

0xc351,	// (0x00011b74) bg_active_tab_pane_g1_cp2_srt

0xbe78,	// (0x0001169b) bg_active_tab_pane_g2_cp2_srt

0xc35a,	// (0x00011b7d) bg_active_tab_pane_g3_cp2_srt

0x97b6,	// (0x0000efd9) tabs_4_active_pane_srt_ParamLimits

0x97b6,	// (0x0000efd9) tabs_4_active_pane_srt

0x97c8,	// (0x0000efeb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x97c8,	// (0x0000efeb) tabs_4_passive_pane_cp2_srt

0xd691,	// (0x00012eb4) aid_size_cell_toolbar

0x5ba6,	// (0x0000b3c9) main_idle_act_pane_ParamLimits

0xd765,	// (0x00012f88) popup_large_graphic_colour_window_ParamLimits

0x6104,	// (0x0000b927) popup_toolbar_window_ParamLimits

0x6104,	// (0x0000b927) popup_toolbar_window

0xeb79,	// (0x0001439c) list_single_graphic_2heading_pane_ParamLimits

0xeb79,	// (0x0001439c) list_single_graphic_2heading_pane

0xb932,	// (0x00011155) aid_size_cell_apps_grid_lsc_pane

0xb944,	// (0x00011167) aid_size_cell_apps_grid_prt_pane

0xd685,	// (0x00012ea8) bg_wml_button_pane_cp1_ParamLimits

0xd685,	// (0x00012ea8) bg_wml_button_pane_cp1

0x65f0,	// (0x0000be13) form_midp_field_text_pane_t1_ParamLimits

0xdab3,	// (0x000132d6) input_focus_pane_cp050_ParamLimits

0xdc02,	// (0x00013425) list_midp_form_text_pane_ParamLimits

0xdbdf,	// (0x00013402) input_focus_pane_cp051_ParamLimits

0xdbf3,	// (0x00013416) list_midp_choice_pane_ParamLimits

0x658e,	// (0x0000bdb1) list_single_2graphic_pane_cp3_ParamLimits

0x658e,	// (0x0000bdb1) list_single_2graphic_pane_cp3

0x65a1,	// (0x0000bdc4) list_single_midp_graphic_pane_ParamLimits

0x65a1,	// (0x0000bdc4) list_single_midp_graphic_pane

0x93ff,	// (0x0000ec22) list_single_graphic_2heading_pane_g1_ParamLimits

0x93ff,	// (0x0000ec22) list_single_graphic_2heading_pane_g1

0x940b,	// (0x0000ec2e) list_single_graphic_2heading_pane_g4_ParamLimits

0x940b,	// (0x0000ec2e) list_single_graphic_2heading_pane_g4

0x9417,	// (0x0000ec3a) list_single_graphic_2heading_pane_g5_ParamLimits

0x9417,	// (0x0000ec3a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7e1,	// (0x00015004) list_single_graphic_2heading_pane_g_ParamLimits

0xf7e1,	// (0x00015004) list_single_graphic_2heading_pane_g

0x9423,	// (0x0000ec46) list_single_graphic_2heading_pane_t1_ParamLimits

0x9423,	// (0x0000ec46) list_single_graphic_2heading_pane_t1

0x9437,	// (0x0000ec5a) list_single_graphic_2heading_pane_t2_ParamLimits

0x9437,	// (0x0000ec5a) list_single_graphic_2heading_pane_t2

0x9451,	// (0x0000ec74) list_single_graphic_2heading_pane_t3_ParamLimits

0x9451,	// (0x0000ec74) list_single_graphic_2heading_pane_t3

0x0002,

0xf7e8,	// (0x0001500b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7e8,	// (0x0001500b) list_single_graphic_2heading_pane_t

0xd8e7,	// (0x0001310a) bg_popup_sub_pane_cp2

0xd90d,	// (0x00013130) grid_toobar_pane

0x9469,	// (0x0000ec8c) cell_toolbar_pane_ParamLimits

0x9469,	// (0x0000ec8c) cell_toolbar_pane

0xd943,	// (0x00013166) cell_toolbar_pane_g1_ParamLimits

0xd943,	// (0x00013166) cell_toolbar_pane_g1

0xd955,	// (0x00013178) cell_toolbar_pane_g2_ParamLimits

0xd955,	// (0x00013178) cell_toolbar_pane_g2

0x0001,

0xf7ef,	// (0x00015012) cell_toolbar_pane_g_ParamLimits

0xf7ef,	// (0x00015012) cell_toolbar_pane_g

0xd977,	// (0x0001319a) grid_highlight_pane_cp2_ParamLimits

0xd977,	// (0x0001319a) grid_highlight_pane_cp2

0xd991,	// (0x000131b4) toolbar_button_pane

0xd99d,	// (0x000131c0) toolbar_button_pane_g1

0xd9a5,	// (0x000131c8) toolbar_button_pane_g2

0xd9ad,	// (0x000131d0) toolbar_button_pane_g3

0xd9b5,	// (0x000131d8) toolbar_button_pane_g4

0xd9bd,	// (0x000131e0) toolbar_button_pane_g5

0xd9c5,	// (0x000131e8) toolbar_button_pane_g6

0xd9cd,	// (0x000131f0) toolbar_button_pane_g7

0xd9d5,	// (0x000131f8) toolbar_button_pane_g8

0xd9dd,	// (0x00013200) toolbar_button_pane_g9

0x0009,

0xf7f4,	// (0x00015017) toolbar_button_pane_g

0x9498,	// (0x0000ecbb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9498,	// (0x0000ecbb) list_single_2graphic_pane_g1_cp3

0xd09e,	// (0x000128c1) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd09e,	// (0x000128c1) list_single_2graphic_pane_g2_cp3

0x94b3,	// (0x0000ecd6) list_single_2graphic_pane_g3_cp3

0x94bb,	// (0x0000ecde) list_single_2graphic_pane_g4_cp3_ParamLimits

0x94bb,	// (0x0000ecde) list_single_2graphic_pane_g4_cp3

0x94c7,	// (0x0000ecea) list_single_2graphic_pane_t1_cp3_ParamLimits

0x94c7,	// (0x0000ecea) list_single_2graphic_pane_t1_cp3

0x94e1,	// (0x0000ed04) list_single_midp_graphic_pane_g2_ParamLimits

0x94e1,	// (0x0000ed04) list_single_midp_graphic_pane_g2

0xd699,	// (0x00012ebc) aid_zoom_text_primary

0xd6a1,	// (0x00012ec4) aid_zoom_text_secondary

0xc40c,	// (0x00011c2f) status_small_pane_g7_ParamLimits

0xc40c,	// (0x00011c2f) status_small_pane_g7

0xc42f,	// (0x00011c52) status_small_pane_t1_ParamLimits

0x4e49,	// (0x0000a66c) title_pane_g2

0x0003,

0xf592,	// (0x00014db5) title_pane_g

0x512b,	// (0x0000a94e) aid_size_cell_colour_1_pane_ParamLimits

0x512b,	// (0x0000a94e) aid_size_cell_colour_1_pane

0x513f,	// (0x0000a962) aid_size_cell_colour_2_pane_ParamLimits

0x513f,	// (0x0000a962) aid_size_cell_colour_2_pane

0x5153,	// (0x0000a976) aid_size_cell_colour_3_pane_ParamLimits

0x5153,	// (0x0000a976) aid_size_cell_colour_3_pane

0x5167,	// (0x0000a98a) aid_size_cell_colour_4_pane_ParamLimits

0x5167,	// (0x0000a98a) aid_size_cell_colour_4_pane

0x8ec6,	// (0x0000e6e9) title_pane_stacon_g1_ParamLimits

0x8ec6,	// (0x0000e6e9) title_pane_stacon_g1

0xdf6c,	// (0x0001378f) popup_note_wait_window_g3_ParamLimits

0xdf6c,	// (0x0001378f) popup_note_wait_window_g3

0xdfe2,	// (0x00013805) popup_note_wait_window_t5_ParamLimits

0xdfe2,	// (0x00013805) popup_note_wait_window_t5

0xa62a,	// (0x0000fe4d) main_feb_china_hwr_fs_writing_pane

0x5c07,	// (0x0000b42a) popup_feb_china_hwr_fs_window_ParamLimits

0x5c07,	// (0x0000b42a) popup_feb_china_hwr_fs_window

0xd0af,	// (0x000128d2) aid_size_cell_hwr_fs_ParamLimits

0xd0af,	// (0x000128d2) aid_size_cell_hwr_fs

0xdab3,	// (0x000132d6) bg_popup_sub_pane_cp3_ParamLimits

0xdab3,	// (0x000132d6) bg_popup_sub_pane_cp3

0xd0c4,	// (0x000128e7) grid_hwr_fs_pane_ParamLimits

0xd0c4,	// (0x000128e7) grid_hwr_fs_pane

0x952c,	// (0x0000ed4f) linegrid_hwr_fs_pane_ParamLimits

0x952c,	// (0x0000ed4f) linegrid_hwr_fs_pane

0xd0dc,	// (0x000128ff) cell_hwr_fs_pane_ParamLimits

0xd0dc,	// (0x000128ff) cell_hwr_fs_pane

0xdabf,	// (0x000132e2) linegrid_hwr_fs_pane_g1_ParamLimits

0xdabf,	// (0x000132e2) linegrid_hwr_fs_pane_g1

0x6554,	// (0x0000bd77) linegrid_hwr_fs_pane_g2_ParamLimits

0x6554,	// (0x0000bd77) linegrid_hwr_fs_pane_g2

0xdacb,	// (0x000132ee) linegrid_hwr_fs_pane_g3_ParamLimits

0xdacb,	// (0x000132ee) linegrid_hwr_fs_pane_g3

0x955a,	// (0x0000ed7d) linegrid_hwr_fs_pane_g4_ParamLimits

0x955a,	// (0x0000ed7d) linegrid_hwr_fs_pane_g4

0x9574,	// (0x0000ed97) linegrid_hwr_fs_pane_g5_ParamLimits

0x9574,	// (0x0000ed97) linegrid_hwr_fs_pane_g5

0x0004,

0xf81a,	// (0x0001503d) linegrid_hwr_fs_pane_g_ParamLimits

0xf81a,	// (0x0001503d) linegrid_hwr_fs_pane_g

0xdad7,	// (0x000132fa) cell_hwr_fs_pane_g1_ParamLimits

0xdad7,	// (0x000132fa) cell_hwr_fs_pane_g1

0xd8b5,	// (0x000130d8) cell_hwr_fs_pane_g2_ParamLimits

0xd8b5,	// (0x000130d8) cell_hwr_fs_pane_g2

0x6566,	// (0x0000bd89) cell_hwr_fs_pane_g3_ParamLimits

0x6566,	// (0x0000bd89) cell_hwr_fs_pane_g3

0x6573,	// (0x0000bd96) cell_hwr_fs_pane_g4_ParamLimits

0x6573,	// (0x0000bd96) cell_hwr_fs_pane_g4

0x0003,

0xf825,	// (0x00015048) cell_hwr_fs_pane_g_ParamLimits

0xf825,	// (0x00015048) cell_hwr_fs_pane_g

0xd0fc,	// (0x0001291f) cell_hwr_fs_pane_t1

0xa62a,	// (0x0000fe4d) grid_highlight_pane_cp6

0xa62a,	// (0x0000fe4d) main_idle_act2_pane

0xb6ce,	// (0x00010ef1) aid_inside_area_popup_secondary

0x6770,	// (0x0000bf93) aid_inside_area_window_primary_ParamLimits

0x6770,	// (0x0000bf93) aid_inside_area_window_primary

0xed53,	// (0x00014576) ai2_news_ticker_pane

0xed5b,	// (0x0001457e) aid_size_cell_ai1_link_ParamLimits

0xed5b,	// (0x0001457e) aid_size_cell_ai1_link

0x6bbb,	// (0x0000c3de) popup_ai2_data_window_ParamLimits

0x6bbb,	// (0x0000c3de) popup_ai2_data_window

0xed75,	// (0x00014598) popup_ai2_link_window_ParamLimits

0xed75,	// (0x00014598) popup_ai2_link_window

0xdab3,	// (0x000132d6) bg_popup_sub_pane_cp4_ParamLimits

0xdab3,	// (0x000132d6) bg_popup_sub_pane_cp4

0xed89,	// (0x000145ac) grid_ai2_link_pane_ParamLimits

0xed89,	// (0x000145ac) grid_ai2_link_pane

0xeda0,	// (0x000145c3) popup_ai2_link_window_g1_ParamLimits

0xeda0,	// (0x000145c3) popup_ai2_link_window_g1

0xedac,	// (0x000145cf) popup_ai2_link_window_g2_ParamLimits

0xedac,	// (0x000145cf) popup_ai2_link_window_g2

0x0001,

0xf9f1,	// (0x00015214) popup_ai2_link_window_g_ParamLimits

0xf9f1,	// (0x00015214) popup_ai2_link_window_g

0xedbb,	// (0x000145de) ai2_mp_button_pane

0xedc3,	// (0x000145e6) ai2_mp_volume_pane

0xdbdf,	// (0x00013402) bg_popup_sub_pane_cp5_ParamLimits

0xdbdf,	// (0x00013402) bg_popup_sub_pane_cp5

0xedcb,	// (0x000145ee) heading_ai2_gene_pane_ParamLimits

0xedcb,	// (0x000145ee) heading_ai2_gene_pane

0xedd7,	// (0x000145fa) list_ai2_gene_pane_ParamLimits

0xedd7,	// (0x000145fa) list_ai2_gene_pane

0xee1f,	// (0x00014642) cell_ai2_link_pane_ParamLimits

0xee1f,	// (0x00014642) cell_ai2_link_pane

0xee35,	// (0x00014658) cell_ai2_link_pane_g1

0xa62a,	// (0x0000fe4d) grid_highlight_pane_cp7

0x986e,	// (0x0000f091) ai2_mp_volume_pane_g1

0xeedd,	// (0x00014700) ai2_mp_volume_pane_g2

0x6be5,	// (0x0000c408) list_ai2_gene_pane_t1

0xeee5,	// (0x00014708) ai2_mp_volume_pane_g3

0x0002,

0xfa0a,	// (0x0001522d) ai2_mp_volume_pane_g

0x9876,	// (0x0000f099) volume_small_pane_cp3

0xeeed,	// (0x00014710) aid_size_cell_ai2_button

0xeef5,	// (0x00014718) grid_ai2_button_pane

0xeefe,	// (0x00014721) cell_ai2_button_pane_ParamLimits

0xeefe,	// (0x00014721) cell_ai2_button_pane

0xa543,	// (0x0000fd66) cell_ai2_button_pane_g1

0xa62a,	// (0x0000fe4d) grid_highlight_pane_cp8

0xee9d,	// (0x000146c0) ai2_gene_pane_t1_ParamLimits

0xee9d,	// (0x000146c0) ai2_gene_pane_t1

0x5b75,	// (0x0000b398) aid_height_parent_landscape

0x693a,	// (0x0000c15d) aid_height_set_list

0xeb1e,	// (0x00014341) aid_size_parent

0xec05,	// (0x00014428) aid_size_cell_graphic_pane_ParamLimits

0xede7,	// (0x0001460a) popup_ai2_data_window_g1_ParamLimits

0xede7,	// (0x0001460a) popup_ai2_data_window_g1

0xedf3,	// (0x00014616) ai2_news_ticker_pane_g1

0xedfb,	// (0x0001461e) ai2_news_ticker_pane_g2

0x0001,

0xf9f6,	// (0x00015219) ai2_news_ticker_pane_g

0xee03,	// (0x00014626) ai2_news_ticker_pane_t1

0xee11,	// (0x00014634) ai2_news_ticker_pane_t2

0x0001,

0xf9fb,	// (0x0001521e) ai2_news_ticker_pane_t

0xebe6,	// (0x00014409) heading_ai2_gene_pane_g1

0xee3e,	// (0x00014661) heading_ai2_gene_pane_t1_ParamLimits

0xee3e,	// (0x00014661) heading_ai2_gene_pane_t1

0xee53,	// (0x00014676) list_highlight_pane_cp6

0x6bcf,	// (0x0000c3f2) ai2_gene_pane_ParamLimits

0x6bcf,	// (0x0000c3f2) ai2_gene_pane

0x6bf3,	// (0x0000c416) list_ai2_gene_pane_t2

0x0001,

0xfa00,	// (0x00015223) list_ai2_gene_pane_t

0xee6e,	// (0x00014691) list_highlight_pane_cp8_ParamLimits

0xee6e,	// (0x00014691) list_highlight_pane_cp8

0xee7f,	// (0x000146a2) ai2_gene_pane_g1_ParamLimits

0xee7f,	// (0x000146a2) ai2_gene_pane_g1

0xee91,	// (0x000146b4) ai2_gene_pane_g2_ParamLimits

0xee91,	// (0x000146b4) ai2_gene_pane_g2

0x0001,

0xfa05,	// (0x00015228) ai2_gene_pane_g_ParamLimits

0xfa05,	// (0x00015228) ai2_gene_pane_g

0xae9a,	// (0x000106bd) scroll_pane_cp12

0xd05d,	// (0x00012880) control_pane_t3_ParamLimits

0xd05d,	// (0x00012880) control_pane_t3

0xc420,	// (0x00011c43) status_small_pane_g8_ParamLimits

0xc420,	// (0x00011c43) status_small_pane_g8

0x5c7b,	// (0x0000b49e) popup_find_window_ParamLimits

0x5e6e,	// (0x0000b691) popup_note_image_window_ParamLimits

0xb0ac,	// (0x000108cf) list_double2_graphic_pane_vc_g1_ParamLimits

0xb0ac,	// (0x000108cf) list_double2_graphic_pane_vc_g1

0xb0b8,	// (0x000108db) list_double2_graphic_pane_vc_g2_ParamLimits

0xb0b8,	// (0x000108db) list_double2_graphic_pane_vc_g2

0xafe3,	// (0x00010806) list_double2_graphic_pane_vc_g3_ParamLimits

0xafe3,	// (0x00010806) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x00014e28) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x00014e28) list_double2_graphic_pane_vc_g

0xb0c4,	// (0x000108e7) list_double2_graphic_pane_vc_t1_ParamLimits

0xb0c4,	// (0x000108e7) list_double2_graphic_pane_vc_t1

0xb0b8,	// (0x000108db) list_single_heading_pane_vc_g1_ParamLimits

0xb0b8,	// (0x000108db) list_single_heading_pane_vc_g1

0xafe3,	// (0x00010806) list_single_heading_pane_vc_g2_ParamLimits

0xafe3,	// (0x00010806) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e2f) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e2f) list_single_heading_pane_vc_g

0xd9e5,	// (0x00013208) list_single_heading_pane_vc_t1_ParamLimits

0xd9e5,	// (0x00013208) list_single_heading_pane_vc_t1

0xd9fb,	// (0x0001321e) list_single_heading_pane_vc_t2_ParamLimits

0xd9fb,	// (0x0001321e) list_single_heading_pane_vc_t2

0x0001,

0xf809,	// (0x0001502c) list_single_heading_pane_vc_t_ParamLimits

0xf809,	// (0x0001502c) list_single_heading_pane_vc_t

0xda0d,	// (0x00013230) list_setting_number_pane_vc_g1_ParamLimits

0xda0d,	// (0x00013230) list_setting_number_pane_vc_g1

0xda19,	// (0x0001323c) list_setting_number_pane_vc_g2_ParamLimits

0xda19,	// (0x0001323c) list_setting_number_pane_vc_g2

0x0001,

0xf80e,	// (0x00015031) list_setting_number_pane_vc_g_ParamLimits

0xf80e,	// (0x00015031) list_setting_number_pane_vc_g

0xda25,	// (0x00013248) list_setting_number_pane_vc_t1_ParamLimits

0xda25,	// (0x00013248) list_setting_number_pane_vc_t1

0xda39,	// (0x0001325c) list_setting_number_pane_vc_t2_ParamLimits

0xda39,	// (0x0001325c) list_setting_number_pane_vc_t2

0xda55,	// (0x00013278) list_setting_number_pane_vc_t3_ParamLimits

0xda55,	// (0x00013278) list_setting_number_pane_vc_t3

0x0002,

0xf813,	// (0x00015036) list_setting_number_pane_vc_t_ParamLimits

0xf813,	// (0x00015036) list_setting_number_pane_vc_t

0xda7b,	// (0x0001329e) set_value_pane_vc_ParamLimits

0xda7b,	// (0x0001329e) set_value_pane_vc

0xeb79,	// (0x0001439c) list_double2_graphic_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_double2_graphic_pane_vc

0xeb8c,	// (0x000143af) list_double2_large_graphic_pane_vc_ParamLimits

0xeb8c,	// (0x000143af) list_double2_large_graphic_pane_vc

0xeb79,	// (0x0001439c) list_double2_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_double2_pane_vc

0xeb79,	// (0x0001439c) list_double_graphic_heading_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_double_graphic_heading_pane_vc

0xeb79,	// (0x0001439c) list_double_graphic_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_double_graphic_pane_vc

0xeb79,	// (0x0001439c) list_double_heading_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_double_heading_pane_vc

0xeb8c,	// (0x000143af) list_double_large_graphic_pane_vc_ParamLimits

0xeb8c,	// (0x000143af) list_double_large_graphic_pane_vc

0xeb79,	// (0x0001439c) list_double_number_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_double_number_pane_vc

0xeb79,	// (0x0001439c) list_double_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_double_pane_vc

0xeb79,	// (0x0001439c) list_double_time_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_double_time_pane_vc

0xeb79,	// (0x0001439c) list_setting_number_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_setting_number_pane_vc

0xeb79,	// (0x0001439c) list_setting_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_setting_pane_vc

0xeb79,	// (0x0001439c) list_single_graphic_heading_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_single_graphic_heading_pane_vc

0xeb79,	// (0x0001439c) list_single_heading_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_single_heading_pane_vc

0xeb79,	// (0x0001439c) list_single_number_heading_pane_vc_ParamLimits

0xeb79,	// (0x0001439c) list_single_number_heading_pane_vc

0xb0ac,	// (0x000108cf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb0ac,	// (0x000108cf) list_double_graphic_heading_pane_vc_g1

0xb0b8,	// (0x000108db) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb0b8,	// (0x000108db) list_double_graphic_heading_pane_vc_g2

0xafe3,	// (0x00010806) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xafe3,	// (0x00010806) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf605,	// (0x00014e28) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x00014e28) list_double_graphic_heading_pane_vc_g

0xef10,	// (0x00014733) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xef10,	// (0x00014733) list_double_graphic_heading_pane_vc_t1

0xd9e5,	// (0x00013208) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd9e5,	// (0x00013208) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa11,	// (0x00015234) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x00015234) list_double_graphic_heading_pane_vc_t

0xda0d,	// (0x00013230) list_setting_pane_vc_g1_ParamLimits

0xda0d,	// (0x00013230) list_setting_pane_vc_g1

0xda19,	// (0x0001323c) list_setting_pane_vc_g2_ParamLimits

0xda19,	// (0x0001323c) list_setting_pane_vc_g2

0x0001,

0xf80e,	// (0x00015031) list_setting_pane_vc_g_ParamLimits

0xf80e,	// (0x00015031) list_setting_pane_vc_g

0xf0fe,	// (0x00014921) list_setting_pane_vc_t1_ParamLimits

0xf0fe,	// (0x00014921) list_setting_pane_vc_t1

0xf112,	// (0x00014935) list_setting_pane_vc_t2_ParamLimits

0xf112,	// (0x00014935) list_setting_pane_vc_t2

0x0001,

0xfa54,	// (0x00015277) list_setting_pane_vc_t_ParamLimits

0xfa54,	// (0x00015277) list_setting_pane_vc_t

0xda7b,	// (0x0001329e) set_value_pane_cp_vc_ParamLimits

0xda7b,	// (0x0001329e) set_value_pane_cp_vc

0xb0b8,	// (0x000108db) list_single_number_heading_pane_vc_g1_ParamLimits

0xb0b8,	// (0x000108db) list_single_number_heading_pane_vc_g1

0xafe3,	// (0x00010806) list_single_number_heading_pane_vc_g2_ParamLimits

0xafe3,	// (0x00010806) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e2f) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e2f) list_single_number_heading_pane_vc_g

0xd9e5,	// (0x00013208) list_single_number_heading_pane_vc_t1_ParamLimits

0xd9e5,	// (0x00013208) list_single_number_heading_pane_vc_t1

0xf134,	// (0x00014957) list_single_number_heading_pane_vc_t2_ParamLimits

0xf134,	// (0x00014957) list_single_number_heading_pane_vc_t2

0xf0cd,	// (0x000148f0) list_single_number_heading_pane_vc_t3_ParamLimits

0xf0cd,	// (0x000148f0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa59,	// (0x0001527c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa59,	// (0x0001527c) list_single_number_heading_pane_vc_t

0xb0ac,	// (0x000108cf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb0ac,	// (0x000108cf) list_single_graphic_heading_pane_vc_g1

0xb0b8,	// (0x000108db) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb0b8,	// (0x000108db) list_single_graphic_heading_pane_vc_g4

0xafe3,	// (0x00010806) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xafe3,	// (0x00010806) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x00014e28) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x00014e28) list_single_graphic_heading_pane_vc_g

0xd9e5,	// (0x00013208) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd9e5,	// (0x00013208) list_single_graphic_heading_pane_vc_t1

0xf146,	// (0x00014969) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xf146,	// (0x00014969) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa60,	// (0x00015283) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa60,	// (0x00015283) list_single_graphic_heading_pane_vc_t

0xb0b8,	// (0x000108db) list_double2_pane_vc_g1_ParamLimits

0xb0b8,	// (0x000108db) list_double2_pane_vc_g1

0xafe3,	// (0x00010806) list_double2_pane_vc_g2_ParamLimits

0xafe3,	// (0x00010806) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e2f) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e2f) list_double2_pane_vc_g

0xafef,	// (0x00010812) list_double2_pane_vc_t1_ParamLimits

0xafef,	// (0x00010812) list_double2_pane_vc_t1

0xaf52,	// (0x00010775) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xaf52,	// (0x00010775) list_double2_large_graphic_pane_vc_g1

0xaf5e,	// (0x00010781) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xaf5e,	// (0x00010781) list_double2_large_graphic_pane_vc_g2

0xaf6a,	// (0x0001078d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xaf6a,	// (0x0001078d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00014e4c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00014e4c) list_double2_large_graphic_pane_vc_g

0xaf7e,	// (0x000107a1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xaf7e,	// (0x000107a1) list_double2_large_graphic_pane_vc_t1

0xf158,	// (0x0001497b) list_double_time_pane_vc_g1_ParamLimits

0xf158,	// (0x0001497b) list_double_time_pane_vc_g1

0xf164,	// (0x00014987) list_double_time_pane_vc_g2_ParamLimits

0xf164,	// (0x00014987) list_double_time_pane_vc_g2

0x0001,

0xfa65,	// (0x00015288) list_double_time_pane_vc_g_ParamLimits

0xfa65,	// (0x00015288) list_double_time_pane_vc_g

0xf170,	// (0x00014993) list_double_time_pane_vc_t1_ParamLimits

0xf170,	// (0x00014993) list_double_time_pane_vc_t1

0xf189,	// (0x000149ac) list_double_time_pane_vc_t2_ParamLimits

0xf189,	// (0x000149ac) list_double_time_pane_vc_t2

0xf1a2,	// (0x000149c5) list_double_time_pane_vc_t3_ParamLimits

0xf1a2,	// (0x000149c5) list_double_time_pane_vc_t3

0xf1ba,	// (0x000149dd) list_double_time_pane_vc_t4_ParamLimits

0xf1ba,	// (0x000149dd) list_double_time_pane_vc_t4

0x0003,

0xfa6a,	// (0x0001528d) list_double_time_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001528d) list_double_time_pane_vc_t

0xb0b8,	// (0x000108db) list_double_pane_vc_g1_ParamLimits

0xb0b8,	// (0x000108db) list_double_pane_vc_g1

0xafe3,	// (0x00010806) list_double_pane_vc_g2_ParamLimits

0xafe3,	// (0x00010806) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e2f) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e2f) list_double_pane_vc_g

0xf1cc,	// (0x000149ef) list_double_pane_vc_t1_ParamLimits

0xf1cc,	// (0x000149ef) list_double_pane_vc_t1

0xf1de,	// (0x00014a01) list_double_pane_vc_t2_ParamLimits

0xf1de,	// (0x00014a01) list_double_pane_vc_t2

0x0001,

0xfa73,	// (0x00015296) list_double_pane_vc_t_ParamLimits

0xfa73,	// (0x00015296) list_double_pane_vc_t

0xb0b8,	// (0x000108db) list_double_number_pane_vc_g1_ParamLimits

0xb0b8,	// (0x000108db) list_double_number_pane_vc_g1

0xafe3,	// (0x00010806) list_double_number_pane_vc_g2_ParamLimits

0xafe3,	// (0x00010806) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e2f) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e2f) list_double_number_pane_vc_g

0xf1f4,	// (0x00014a17) list_double_number_pane_vc_t1_ParamLimits

0xf1f4,	// (0x00014a17) list_double_number_pane_vc_t1

0xf208,	// (0x00014a2b) list_double_number_pane_vc_t2_ParamLimits

0xf208,	// (0x00014a2b) list_double_number_pane_vc_t2

0xf1de,	// (0x00014a01) list_double_number_pane_vc_t3_ParamLimits

0xf1de,	// (0x00014a01) list_double_number_pane_vc_t3

0x0002,

0xfa78,	// (0x0001529b) list_double_number_pane_vc_t_ParamLimits

0xfa78,	// (0x0001529b) list_double_number_pane_vc_t

0xf21a,	// (0x00014a3d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf21a,	// (0x00014a3d) list_double_large_graphic_pane_vc_g1

0xf226,	// (0x00014a49) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf226,	// (0x00014a49) list_double_large_graphic_pane_vc_g2

0xaf6a,	// (0x0001078d) list_double_large_graphic_pane_vc_g3_ParamLimits

0xaf6a,	// (0x0001078d) list_double_large_graphic_pane_vc_g3

0xf235,	// (0x00014a58) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf235,	// (0x00014a58) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7f,	// (0x000152a2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7f,	// (0x000152a2) list_double_large_graphic_pane_vc_g

0xf241,	// (0x00014a64) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf241,	// (0x00014a64) list_double_large_graphic_pane_vc_t1

0xf253,	// (0x00014a76) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf253,	// (0x00014a76) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa88,	// (0x000152ab) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa88,	// (0x000152ab) list_double_large_graphic_pane_vc_t

0xb0b8,	// (0x000108db) list_double_heading_pane_vc_g1_ParamLimits

0xb0b8,	// (0x000108db) list_double_heading_pane_vc_g1

0xafe3,	// (0x00010806) list_double_heading_pane_vc_g2_ParamLimits

0xafe3,	// (0x00010806) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00014e2f) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00014e2f) list_double_heading_pane_vc_g

0xf26a,	// (0x00014a8d) list_double_heading_pane_vc_t1_ParamLimits

0xf26a,	// (0x00014a8d) list_double_heading_pane_vc_t1

0xd9e5,	// (0x00013208) list_double_heading_pane_vc_t2_ParamLimits

0xd9e5,	// (0x00013208) list_double_heading_pane_vc_t2

0x0001,

0xfa8d,	// (0x000152b0) list_double_heading_pane_vc_t_ParamLimits

0xfa8d,	// (0x000152b0) list_double_heading_pane_vc_t

0xb0ac,	// (0x000108cf) list_double_graphic_pane_vc_g1_ParamLimits

0xb0ac,	// (0x000108cf) list_double_graphic_pane_vc_g1

0xf27c,	// (0x00014a9f) list_double_graphic_pane_vc_g2_ParamLimits

0xf27c,	// (0x00014a9f) list_double_graphic_pane_vc_g2

0xf28b,	// (0x00014aae) list_double_graphic_pane_vc_g3_ParamLimits

0xf28b,	// (0x00014aae) list_double_graphic_pane_vc_g3

0x0002,

0xfa92,	// (0x000152b5) list_double_graphic_pane_vc_g_ParamLimits

0xfa92,	// (0x000152b5) list_double_graphic_pane_vc_g

0xf297,	// (0x00014aba) list_double_graphic_pane_vc_t1_ParamLimits

0xf297,	// (0x00014aba) list_double_graphic_pane_vc_t1

0xf1de,	// (0x00014a01) list_double_graphic_pane_vc_t2_ParamLimits

0xf1de,	// (0x00014a01) list_double_graphic_pane_vc_t2

0x0001,

0xfa99,	// (0x000152bc) list_double_graphic_pane_vc_t_ParamLimits

0xfa99,	// (0x000152bc) list_double_graphic_pane_vc_t

0x8ba3,	// (0x0000e3c6) aid_size_cell_fastswap

0xce08,	// (0x0001262b) aid_size_cell_touch_ParamLimits

0xce08,	// (0x0001262b) aid_size_cell_touch

0x8cfa,	// (0x0000e51d) popup_fast_swap_wide_window_ParamLimits

0x8cfa,	// (0x0000e51d) popup_fast_swap_wide_window

0xceb9,	// (0x000126dc) touch_pane_ParamLimits

0xceb9,	// (0x000126dc) touch_pane

0xb350,	// (0x00010b73) button_value_adjust_pane_cp2

0xb358,	// (0x00010b7b) button_value_adjust_pane_cp4

0xb378,	// (0x00010b9b) form_field_data_pane_cp2

0x5570,	// (0x0000ad93) form_field_data_wide_pane_cp2

0xb9f0,	// (0x00011213) bg_scroll_pane_ParamLimits

0x8fe7,	// (0x0000e80a) scroll_handle_pane_ParamLimits

0x8ffb,	// (0x0000e81e) scroll_sc2_down_pane_ParamLimits

0x8ffb,	// (0x0000e81e) scroll_sc2_down_pane

0xba21,	// (0x00011244) scroll_sc2_up_pane_ParamLimits

0xba21,	// (0x00011244) scroll_sc2_up_pane

0x6d17,	// (0x0000c53a) grid_wheel_folder_pane_g1_ParamLimits

0x6d17,	// (0x0000c53a) grid_wheel_folder_pane_g1

0x91af,	// (0x0000e9d2) clock_nsta_pane_cp2_ParamLimits

0x91af,	// (0x0000e9d2) clock_nsta_pane_cp2

0x597f,	// (0x0000b1a2) listscroll_midp_pane_ParamLimits

0x598f,	// (0x0000b1b2) midp_canvas_pane

0x93f7,	// (0x0000ec1a) nsta_clock_indic_pane

0xd6c9,	// (0x00012eec) listscroll_form_pane_vc

0xd6d1,	// (0x00012ef4) listscroll_set_pane_vc_ParamLimits

0xd6d1,	// (0x00012ef4) listscroll_set_pane_vc

0x623a,	// (0x0000ba5d) clock_nsta_pane

0x625d,	// (0x0000ba80) indicator_nsta_pane

0xd8e7,	// (0x0001310a) bg_popup_sub_pane_cp2_ParamLimits

0xd8fb,	// (0x0001311e) find_pane_cp2_ParamLimits

0xd8fb,	// (0x0001311e) find_pane_cp2

0xd90d,	// (0x00013130) grid_toobar_pane_ParamLimits

0xda87,	// (0x000132aa) list_form_gen_pane_vc_ParamLimits

0xda87,	// (0x000132aa) list_form_gen_pane_vc

0xda9d,	// (0x000132c0) scroll_pane_cp8_vc_ParamLimits

0xda9d,	// (0x000132c0) scroll_pane_cp8_vc

0xdaed,	// (0x00013310) data_form_wide_pane_vc_ParamLimits

0xdaed,	// (0x00013310) data_form_wide_pane_vc

0xdaf9,	// (0x0001331c) form_field_data_wide_pane_vc_g1

0xdb01,	// (0x00013324) form_field_data_wide_pane_vc_t1_ParamLimits

0xdb01,	// (0x00013324) form_field_data_wide_pane_vc_t1

0xb420,	// (0x00010c43) input_focus_pane_cp6_vc_ParamLimits

0xb420,	// (0x00010c43) input_focus_pane_cp6_vc

0x6627,	// (0x0000be4a) list_midp_pane_ParamLimits

0xeb0a,	// (0x0001432d) scroll_pane_cp16_ParamLimits

0xeb0a,	// (0x0001432d) scroll_pane_cp16

0xdd69,	// (0x0001358c) button_value_adjust_pane_ParamLimits

0xdd69,	// (0x0001358c) button_value_adjust_pane

0x6946,	// (0x0000c169) button_value_adjust_pane_cp6_ParamLimits

0x6946,	// (0x0000c169) button_value_adjust_pane_cp6

0x6a50,	// (0x0000c273) settings_code_pane_cp_ParamLimits

0x6a50,	// (0x0000c273) settings_code_pane_cp

0xa543,	// (0x0000fd66) cell_touch_pane_g1

0xa543,	// (0x0000fd66) cell_touch_pane_g2

0x0001,

0xf738,	// (0x00014f5b) cell_touch_pane_g

0x6c01,	// (0x0000c424) cell_touch_pane_cp_ParamLimits

0x6c01,	// (0x0000c424) cell_touch_pane_cp

0x6c1d,	// (0x0000c440) cell_touch_pane_ParamLimits

0x6c1d,	// (0x0000c440) cell_touch_pane

0xa543,	// (0x0000fd66) scroll_sc2_down_pane_g1

0xa543,	// (0x0000fd66) scroll_sc2_up_pane_g1

0xa62a,	// (0x0000fe4d) bg_set_opt_pane_cp4_vc

0xef22,	// (0x00014745) list_set_graphic_pane_vc_g1_ParamLimits

0xef22,	// (0x00014745) list_set_graphic_pane_vc_g1

0xef2e,	// (0x00014751) list_set_graphic_pane_vc_g2_ParamLimits

0xef2e,	// (0x00014751) list_set_graphic_pane_vc_g2

0x0001,

0xfa16,	// (0x00015239) list_set_graphic_pane_vc_g_ParamLimits

0xfa16,	// (0x00015239) list_set_graphic_pane_vc_g

0xef3a,	// (0x0001475d) text_primary_small_cp13_vc_ParamLimits

0xef3a,	// (0x0001475d) text_primary_small_cp13_vc

0xee5b,	// (0x0001467e) list_set_graphic_pane_vc_ParamLimits

0xee5b,	// (0x0001467e) list_set_graphic_pane_vc

0xa62a,	// (0x0000fe4d) input_focus_pane_cp2_vc

0xa543,	// (0x0000fd66) setting_code_pane_vc_g1

0xef52,	// (0x00014775) setting_code_pane_vc_t1

0xef60,	// (0x00014783) set_text_pane_vc_t1_ParamLimits

0xef60,	// (0x00014783) set_text_pane_vc_t1

0xa62a,	// (0x0000fe4d) input_focus_pane_cp1_vc

0xef7b,	// (0x0001479e) list_set_text_pane_vc

0xa543,	// (0x0000fd66) setting_text_pane_vc_g1

0xa62a,	// (0x0000fe4d) bg_set_opt_pane_cp2_vc

0xef85,	// (0x000147a8) setting_slider_graphic_pane_vc_g1

0xef8d,	// (0x000147b0) setting_slider_graphic_pane_vc_t1

0xef9b,	// (0x000147be) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa1b,	// (0x0001523e) setting_slider_graphic_pane_vc_t

0xefa9,	// (0x000147cc) slider_set_pane_cp_vc

0xefb1,	// (0x000147d4) slider_set_pane_vc_g1

0xefba,	// (0x000147dd) slider_set_pane_vc_g2

0x0006,

0xfa20,	// (0x00015243) slider_set_pane_vc_g

0xb546,	// (0x00010d69) set_opt_bg_pane_g1_copy1

0xb54e,	// (0x00010d71) set_opt_bg_pane_g2_copy1

0xefe6,	// (0x00014809) set_opt_bg_pane_g3_copy1

0xb55e,	// (0x00010d81) set_opt_bg_pane_g4_copy1

0xb566,	// (0x00010d89) set_opt_bg_pane_g5_copy1

0xb56e,	// (0x00010d91) set_opt_bg_pane_g6_copy1

0xefee,	// (0x00014811) set_opt_bg_pane_g7_copy1

0xeff6,	// (0x00014819) set_opt_bg_pane_g8_copy1

0xeffe,	// (0x00014821) set_opt_bg_pane_g9_copy1

0xa62a,	// (0x0000fe4d) bg_set_opt_pane_cp_vc

0xf006,	// (0x00014829) setting_slider_pane_vc_t1

0xef8d,	// (0x000147b0) setting_slider_pane_vc_t2

0xef9b,	// (0x000147be) setting_slider_pane_vc_t3

0x0002,

0xfa2f,	// (0x00015252) setting_slider_pane_vc_t

0xefa9,	// (0x000147cc) slider_set_pane_vc

0x9598,	// (0x0000edbb) volume_set_pane_vc_g1

0x987f,	// (0x0000f0a2) volume_set_pane_vc_g2

0x9888,	// (0x0000f0ab) volume_set_pane_vc_g3

0x9891,	// (0x0000f0b4) volume_set_pane_vc_g4

0x989a,	// (0x0000f0bd) volume_set_pane_vc_g5

0x98a3,	// (0x0000f0c6) volume_set_pane_vc_g6

0x98ac,	// (0x0000f0cf) volume_set_pane_vc_g7

0x98b5,	// (0x0000f0d8) volume_set_pane_vc_g8

0x98be,	// (0x0000f0e1) volume_set_pane_vc_g9

0x98c7,	// (0x0000f0ea) volume_set_pane_vc_g10

0x0009,

0xfa36,	// (0x00015259) volume_set_pane_vc_g

0xf015,	// (0x00014838) volume_set_pane_vc

0xf01d,	// (0x00014840) button_value_adjust_pane_cp1_vc

0xf027,	// (0x0001484a) list_highlight_pane_cp2_vc

0xf030,	// (0x00014853) list_set_pane_vc_ParamLimits

0xf030,	// (0x00014853) list_set_pane_vc

0xf082,	// (0x000148a5) main_pane_set_vc_t1_ParamLimits

0xf082,	// (0x000148a5) main_pane_set_vc_t1

0xf097,	// (0x000148ba) main_pane_set_vc_t2_ParamLimits

0xf097,	// (0x000148ba) main_pane_set_vc_t2

0xf0a9,	// (0x000148cc) main_pane_set_vc_t3_ParamLimits

0xf0a9,	// (0x000148cc) main_pane_set_vc_t3

0xf0bb,	// (0x000148de) main_pane_set_vc_t4_ParamLimits

0xf0bb,	// (0x000148de) main_pane_set_vc_t4

0x0003,

0xfa4b,	// (0x0001526e) main_pane_set_vc_t_ParamLimits

0xfa4b,	// (0x0001526e) main_pane_set_vc_t

0xf0df,	// (0x00014902) setting_code_pane_vc_ParamLimits

0xf0df,	// (0x00014902) setting_code_pane_vc

0xf0ee,	// (0x00014911) setting_slider_graphic_pane_vc

0xf0ee,	// (0x00014911) setting_slider_pane_vc

0xf0ee,	// (0x00014911) setting_text_pane_vc

0xf0ee,	// (0x00014911) setting_volume_pane_vc

0xf0f6,	// (0x00014919) scroll_pane_cp121_vc

0xb347,	// (0x00010b6a) set_content_pane_vc

0xf2a9,	// (0x00014acc) button_value_adjust_pane_g1

0xf2b2,	// (0x00014ad5) button_value_adjust_pane_g2

0x0001,

0xfa9e,	// (0x000152c1) button_value_adjust_pane_g

0xf2bb,	// (0x00014ade) form_field_slider_wide_pane_vc_t1_ParamLimits

0xf2bb,	// (0x00014ade) form_field_slider_wide_pane_vc_t1

0xf2d1,	// (0x00014af4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xf2d1,	// (0x00014af4) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa3,	// (0x000152c6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa3,	// (0x000152c6) form_field_slider_wide_pane_vc_t

0xa9a3,	// (0x000101c6) input_focus_pane_cp10_vc_ParamLimits

0xa9a3,	// (0x000101c6) input_focus_pane_cp10_vc

0xf2e6,	// (0x00014b09) slider_cont_pane_cp1_vc_ParamLimits

0xf2e6,	// (0x00014b09) slider_cont_pane_cp1_vc

0xefb1,	// (0x000147d4) slider_form_pane_g1_cp2

0xefba,	// (0x000147dd) slider_form_pane_g2_cp2

0xf301,	// (0x00014b24) form_field_slider_pane_vc_t3

0xf30f,	// (0x00014b32) form_field_slider_pane_vc_t4

0xf31d,	// (0x00014b40) slider_form_pane_vc_ParamLimits

0xf31d,	// (0x00014b40) slider_form_pane_vc

0xf32a,	// (0x00014b4d) form_field_slider_pane_vc_t1_ParamLimits

0xf32a,	// (0x00014b4d) form_field_slider_pane_vc_t1

0xf340,	// (0x00014b63) form_field_slider_pane_vc_t2_ParamLimits

0xf340,	// (0x00014b63) form_field_slider_pane_vc_t2

0x0001,

0xfab3,	// (0x000152d6) form_field_slider_pane_vc_t_ParamLimits

0xfab3,	// (0x000152d6) form_field_slider_pane_vc_t

0xa9a3,	// (0x000101c6) input_focus_pane_cp9_vc_ParamLimits

0xa9a3,	// (0x000101c6) input_focus_pane_cp9_vc

0xf352,	// (0x00014b75) slider_cont_pane_vc_ParamLimits

0xf352,	// (0x00014b75) slider_cont_pane_vc

0xf364,	// (0x00014b87) list_form_graphic_pane_cp_vc_ParamLimits

0xf364,	// (0x00014b87) list_form_graphic_pane_cp_vc

0xdaf9,	// (0x0001331c) form_field_popup_wide_pane_vc_g1

0xf379,	// (0x00014b9c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xf379,	// (0x00014b9c) form_field_popup_wide_pane_vc_t1

0xb420,	// (0x00010c43) input_focus_pane_cp8_vc_ParamLimits

0xb420,	// (0x00010c43) input_focus_pane_cp8_vc

0xf38e,	// (0x00014bb1) list_form_wide_pane_vc_ParamLimits

0xf38e,	// (0x00014bb1) list_form_wide_pane_vc

0xf39a,	// (0x00014bbd) list_form_graphic_pane_vc_g1

0xf3a2,	// (0x00014bc5) list_form_graphic_pane_vc_t1_ParamLimits

0xf3a2,	// (0x00014bc5) list_form_graphic_pane_vc_t1

0xa70a,	// (0x0000ff2d) list_highlight_pane_cp5_vc_ParamLimits

0xa70a,	// (0x0000ff2d) list_highlight_pane_cp5_vc

0xf3be,	// (0x00014be1) list_form_graphic_pane_vc_ParamLimits

0xf3be,	// (0x00014be1) list_form_graphic_pane_vc

0xdaf9,	// (0x0001331c) form_field_popup_pane_vc_g1

0xf3d4,	// (0x00014bf7) form_field_popup_pane_vc_t1_ParamLimits

0xf3d4,	// (0x00014bf7) form_field_popup_pane_vc_t1

0xb420,	// (0x00010c43) input_focus_pane_cp7_vc_ParamLimits

0xb420,	// (0x00010c43) input_focus_pane_cp7_vc

0xf3e9,	// (0x00014c0c) list_form_pane_vc_ParamLimits

0xf3e9,	// (0x00014c0c) list_form_pane_vc

0xf3f5,	// (0x00014c18) data_form_pane_vc_t1_ParamLimits

0xf3f5,	// (0x00014c18) data_form_pane_vc_t1

0xb546,	// (0x00010d69) input_focus_pane_vc_g1

0xb54e,	// (0x00010d71) input_focus_pane_vc_g2

0xb556,	// (0x00010d79) input_focus_pane_vc_g3

0xb55e,	// (0x00010d81) input_focus_pane_vc_g4

0xb566,	// (0x00010d89) input_focus_pane_vc_g5

0xb56e,	// (0x00010d91) input_focus_pane_vc_g6

0xb576,	// (0x00010d99) input_focus_pane_vc_g7

0xb57e,	// (0x00010da1) input_focus_pane_vc_g8

0xb586,	// (0x00010da9) input_focus_pane_vc_g9

0xa543,	// (0x0000fd66) input_focus_pane_vc_g10

0x0009,

0xf6c1,	// (0x00014ee4) input_focus_pane_vc_g

0xdaed,	// (0x00013310) data_form_pane_vc_ParamLimits

0xdaed,	// (0x00013310) data_form_pane_vc

0xdaf9,	// (0x0001331c) form_field_data_pane_vc_g1

0xf427,	// (0x00014c4a) form_field_data_pane_vc_t1_ParamLimits

0xf427,	// (0x00014c4a) form_field_data_pane_vc_t1

0xb420,	// (0x00010c43) input_focus_pane_vc_ParamLimits

0xb420,	// (0x00010c43) input_focus_pane_vc

0xb350,	// (0x00010b73) button_value_adjust_pane_cp3_vc

0xf43d,	// (0x00014c60) button_value_adjust_pane_cp5_vc

0xf410,	// (0x00014c33) form_field_data_pane_vc_ParamLimits

0xf410,	// (0x00014c33) form_field_data_pane_vc

0xb378,	// (0x00010b9b) form_field_data_pane_vc_cp2

0xf445,	// (0x00014c68) form_field_data_wide_pane_vc_ParamLimits

0xf445,	// (0x00014c68) form_field_data_wide_pane_vc

0xf45b,	// (0x00014c7e) form_field_data_wide_pane_vc_cp2

0xf463,	// (0x00014c86) form_field_popup_pane_vc_ParamLimits

0xf463,	// (0x00014c86) form_field_popup_pane_vc

0xf47a,	// (0x00014c9d) form_field_popup_wide_pane_vc_ParamLimits

0xf47a,	// (0x00014c9d) form_field_popup_wide_pane_vc

0xf490,	// (0x00014cb3) form_field_slider_pane_vc_ParamLimits

0xf490,	// (0x00014cb3) form_field_slider_pane_vc

0xf4a3,	// (0x00014cc6) form_field_slider_wide_pane_vc_ParamLimits

0xf4a3,	// (0x00014cc6) form_field_slider_wide_pane_vc

0x6c3b,	// (0x0000c45e) grid_touch_1_pane_ParamLimits

0x6c3b,	// (0x0000c45e) grid_touch_1_pane

0x6c4f,	// (0x0000c472) grid_touch_2_pane_ParamLimits

0x6c4f,	// (0x0000c472) grid_touch_2_pane

0xf4ff,	// (0x00014d22) touch_pane_g1_ParamLimits

0xf4ff,	// (0x00014d22) touch_pane_g1

0xf4b6,	// (0x00014cd9) cell_app_pane_cp_wide_ParamLimits

0xf4b6,	// (0x00014cd9) cell_app_pane_cp_wide

0xf4c6,	// (0x00014ce9) grid_popup_fast_wide_pane_ParamLimits

0xf4c6,	// (0x00014ce9) grid_popup_fast_wide_pane

0xf4da,	// (0x00014cfd) scroll_pane_cp19_ParamLimits

0xf4da,	// (0x00014cfd) scroll_pane_cp19

0xa62a,	// (0x0000fe4d) bg_popup_window_pane_cp20

0xf4ee,	// (0x00014d11) listscroll_popup_fast_wide_pane

0xb73a,	// (0x00010f5d) grid_indicator_nsta_pane

0xf4f6,	// (0x00014d19) clock_nsta_pane_g1

0xf50d,	// (0x00014d30) clock_nsta_pane_t1

0x6c79,	// (0x0000c49c) cell_indicator_nsta_pane_ParamLimits

0x6c79,	// (0x0000c49c) cell_indicator_nsta_pane

0xf4ff,	// (0x00014d22) cell_indicator_nsta_pane_g1

0x6c96,	// (0x0000c4b9) cell_indicator_nsta_pane_g2

0x0001,

0xfabd,	// (0x000152e0) cell_indicator_nsta_pane_g

0xf529,	// (0x00014d4c) clock_nsta_pane_cp

0xf531,	// (0x00014d54) indicator_nsta_pane_cp

0xf53a,	// (0x00014d5d) nsta_clock_indic_pane_g1

0xa7ea,	// (0x0001000d) grid_indicator_pane

0xbb13,	// (0x00011336) scroll_pane_cp29

0x9106,	// (0x0000e929) indicator_nsta_pane_cp2_ParamLimits

0x9106,	// (0x0000e929) indicator_nsta_pane_cp2

0xa70a,	// (0x0000ff2d) main_apps_wheel_pane

0xdc1c,	// (0x0001343f) form_midp_field_text_pane_ParamLimits

0xdd49,	// (0x0001356c) scroll_bar_cp050_ParamLimits

0xf572,	// (0x00014d95) cell_indicator_pane_ParamLimits

0xf572,	// (0x00014d95) cell_indicator_pane

0xf588,	// (0x00014dab) cell_indicator_pane_g1

0x6cab,	// (0x0000c4ce) grid_wheel_folder_pane_ParamLimits

0x6cab,	// (0x0000c4ce) grid_wheel_folder_pane

0x6cb9,	// (0x0000c4dc) list_wheel_apps_pane_ParamLimits

0x6cb9,	// (0x0000c4dc) list_wheel_apps_pane

0x6cc5,	// (0x0000c4e8) main_apps_wheel_pane_g1_ParamLimits

0x6cc5,	// (0x0000c4e8) main_apps_wheel_pane_g1

0x6cd1,	// (0x0000c4f4) main_apps_wheel_pane_g2_ParamLimits

0x6cd1,	// (0x0000c4f4) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x000152ef) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x000152ef) main_apps_wheel_pane_g

0x6cdd,	// (0x0000c500) main_apps_wheel_pane_t1_ParamLimits

0x6cdd,	// (0x0000c500) main_apps_wheel_pane_t1

0x6cef,	// (0x0000c512) list_wheel_apps_pane_g1

0x6cf7,	// (0x0000c51a) list_wheel_apps_pane_g2

0x6cff,	// (0x0000c522) list_wheel_apps_pane_g3

0x6d07,	// (0x0000c52a) list_wheel_apps_pane_g4

0x6d0f,	// (0x0000c532) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x000152f4) list_wheel_apps_pane_g

0xa70a,	// (0x0000ff2d) navi_icon_text_pane

0x6146,	// (0x0000b969) aid_fill_nsta

0x000c,	// (0x0000582f) navi_icon_text_pane_g1

0x0018,	// (0x0000583b) navi_icon_text_pane_t1

0xbf28,	// (0x0001174b) list_set_graphic_pane_t1_ParamLimits

0xbf28,	// (0x0001174b) list_set_graphic_pane_t1

0xe3fe,	// (0x00013c21) popup_midp_note_alarm_window_t6_ParamLimits

0xe3fe,	// (0x00013c21) popup_midp_note_alarm_window_t6

0xe410,	// (0x00013c33) popup_midp_note_alarm_window_t7_ParamLimits

0xe410,	// (0x00013c33) popup_midp_note_alarm_window_t7

0xe422,	// (0x00013c45) popup_midp_note_alarm_window_t8_ParamLimits

0xe422,	// (0x00013c45) popup_midp_note_alarm_window_t8

0xe434,	// (0x00013c57) popup_midp_note_alarm_window_t9_ParamLimits

0xe434,	// (0x00013c57) popup_midp_note_alarm_window_t9

0xe446,	// (0x00013c69) popup_midp_note_alarm_window_t10_ParamLimits

0xe446,	// (0x00013c69) popup_midp_note_alarm_window_t10

0xe458,	// (0x00013c7b) popup_midp_note_alarm_window_t11_ParamLimits

0xe458,	// (0x00013c7b) popup_midp_note_alarm_window_t11

0xe46a,	// (0x00013c8d) scroll_pane_cp17_ParamLimits

0xe46a,	// (0x00013c8d) scroll_pane_cp17

0x9598,	// (0x0000edbb) volume_small_pane_cp_g1

0x98d0,	// (0x0000f0f3) volume_small_pane_cp_g2

0x98d9,	// (0x0000f0fc) volume_small_pane_cp_g3

0x98e2,	// (0x0000f105) volume_small_pane_cp_g4

0x95c5,	// (0x0000ede8) volume_small_pane_cp_g5

0x98eb,	// (0x0000f10e) volume_small_pane_cp_g6

0x98f4,	// (0x0000f117) volume_small_pane_cp_g7

0x98fd,	// (0x0000f120) volume_small_pane_cp_g8

0x9906,	// (0x0000f129) volume_small_pane_cp_g9

0x990f,	// (0x0000f132) volume_small_pane_cp_g10

0xc27c,	// (0x00011a9f) midp_ticker_pane_g1_ParamLimits

0xc288,	// (0x00011aab) midp_ticker_pane_g2_ParamLimits

0xf789,	// (0x00014fac) midp_ticker_pane_g_ParamLimits

0xc294,	// (0x00011ab7) midp_ticker_pane_t1_ParamLimits

0x615c,	// (0x0000b97f) aid_fill_nsta_2

0xdd35,	// (0x00013558) list_form2_midp_pane

0xeb5a,	// (0x0001437d) midp_editing_number_pane_ParamLimits

0xeb66,	// (0x00014389) midp_ticker_pane_ParamLimits

0x0072,	// (0x00005895) form2_midp_field_pane

0x0096,	// (0x000058b9) scroll_pane_cp51

0x00b6,	// (0x000058d9) form2_midp_button_pane_ParamLimits

0x00b6,	// (0x000058d9) form2_midp_button_pane

0x00c8,	// (0x000058eb) form2_midp_content_pane_ParamLimits

0x00c8,	// (0x000058eb) form2_midp_content_pane

0x00e2,	// (0x00005905) form2_midp_field_choice_group_pane

0x00ea,	// (0x0000590d) form2_midp_field_pane_g1

0x00f2,	// (0x00005915) form2_midp_field_pane_g2

0x00fa,	// (0x0000591d) form2_midp_field_pane_g3

0x0102,	// (0x00005925) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x00015319) form2_midp_field_pane_g

0x010a,	// (0x0000592d) form2_midp_gauge_slider_pane

0x0112,	// (0x00005935) form2_midp_gauge_wait_pane

0x011a,	// (0x0000593d) form2_midp_image_pane_ParamLimits

0x011a,	// (0x0000593d) form2_midp_image_pane

0x0135,	// (0x00005958) form2_midp_label_pane_ParamLimits

0x0135,	// (0x00005958) form2_midp_label_pane

0x6d44,	// (0x0000c567) form2_midp_label_pane_cp_ParamLimits

0x6d44,	// (0x0000c567) form2_midp_label_pane_cp

0x016d,	// (0x00005990) form2_midp_string_pane_ParamLimits

0x016d,	// (0x00005990) form2_midp_string_pane

0x6d63,	// (0x0000c586) form2_midp_text_pane_ParamLimits

0x6d63,	// (0x0000c586) form2_midp_text_pane

0x0198,	// (0x000059bb) form2_midp_time_pane

0x01a8,	// (0x000059cb) input_focus_pane_cp51_ParamLimits

0x01a8,	// (0x000059cb) input_focus_pane_cp51

0x01c0,	// (0x000059e3) form2_midp_label_pane_t1_ParamLimits

0x01c0,	// (0x000059e3) form2_midp_label_pane_t1

0xb58e,	// (0x00010db1) form2_mdip_text_pane_t1_ParamLimits

0xb58e,	// (0x00010db1) form2_mdip_text_pane_t1

0x021c,	// (0x00005a3f) form2_midp_time_pane_t1

0x0237,	// (0x00005a5a) form2_midp_gauge_slider_pane_t1

0x6d7c,	// (0x0000c59f) form2_midp_gauge_slider_pane_t2

0x6d8e,	// (0x0000c5b1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00015322) form2_midp_gauge_slider_pane_t

0x026d,	// (0x00005a90) form2_midp_slider_pane

0x0279,	// (0x00005a9c) form2_midp_gauge_wait_pane_t1

0x0287,	// (0x00005aaa) form2_midp_wait_pane_ParamLimits

0x0287,	// (0x00005aaa) form2_midp_wait_pane

0x658e,	// (0x0000bdb1) list_single_2graphic_pane_cp4_ParamLimits

0x658e,	// (0x0000bdb1) list_single_2graphic_pane_cp4

0x6da0,	// (0x0000c5c3) list_single_midp_graphic_pane_cp_ParamLimits

0x6da0,	// (0x0000c5c3) list_single_midp_graphic_pane_cp

0xa62a,	// (0x0000fe4d) list_highlight_pane_cp20

0x02b2,	// (0x00005ad5) list_single_2graphic_pane_g1_cp4

0xebe6,	// (0x00014409) list_single_2graphic_pane_g2_cp4

0x02ba,	// (0x00005add) list_single_2graphic_pane_t1_cp4

0xa70a,	// (0x0000ff2d) list_highlight_pane_cp21

0x02c9,	// (0x00005aec) list_single_midp_graphic_pane_g4_cp

0x02d8,	// (0x00005afb) list_single_midp_graphic_pane_t1_cp

0x6dbe,	// (0x0000c5e1) form2_mdip_string_pane_t1_ParamLimits

0x6dbe,	// (0x0000c5e1) form2_mdip_string_pane_t1

0xa62a,	// (0x0000fe4d) bg_wml_button_pane_cp2

0xa543,	// (0x0000fd66) form2_midp_image_pane_g1

0xb135,	// (0x00010958) list_double_large_graphic_pane_g5_ParamLimits

0xb135,	// (0x00010958) list_double_large_graphic_pane_g5

0x597f,	// (0x0000b1a2) midp_form_pane_ParamLimits

0xa70a,	// (0x0000ff2d) main_apps_wheel_pane_ParamLimits

0x5ee8,	// (0x0000b70b) popup_preview_window_ParamLimits

0x5ee8,	// (0x0000b70b) popup_preview_window

0xd7a1,	// (0x00012fc4) popup_touch_info_window_ParamLimits

0xd7a1,	// (0x00012fc4) popup_touch_info_window

0xd7bf,	// (0x00012fe2) popup_touch_menu_window_ParamLimits

0xd7bf,	// (0x00012fe2) popup_touch_menu_window

0xa539,	// (0x0000fd5c) bg_popup_sub_pane_cp6

0x0365,	// (0x00005b88) list_touch_menu_pane

0x036d,	// (0x00005b90) list_single_touch_menu_pane_ParamLimits

0x036d,	// (0x00005b90) list_single_touch_menu_pane

0x0384,	// (0x00005ba7) list_single_touch_menu_pane_t1

0xa70a,	// (0x0000ff2d) bg_popup_sub_pane_cp7_ParamLimits

0xa70a,	// (0x0000ff2d) bg_popup_sub_pane_cp7

0x0392,	// (0x00005bb5) heading_sub_pane

0x039a,	// (0x00005bbd) list_touch_info_pane_ParamLimits

0x039a,	// (0x00005bbd) list_touch_info_pane

0x03a9,	// (0x00005bcc) list_single_touch_info_pane_ParamLimits

0x03a9,	// (0x00005bcc) list_single_touch_info_pane

0x03ba,	// (0x00005bdd) list_single_touch_info_pane_t1

0x03c8,	// (0x00005beb) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00015330) list_single_touch_info_pane_t

0xc1ad,	// (0x000119d0) bg_popup_heading_pane_cp

0x03d6,	// (0x00005bf9) heading_sub_pane_t1

0xdab3,	// (0x000132d6) bg_popup_preview_window_pane_cp_ParamLimits

0xdab3,	// (0x000132d6) bg_popup_preview_window_pane_cp

0x0392,	// (0x00005bb5) heading_preview_pane

0x039a,	// (0x00005bbd) list_preview_pane_ParamLimits

0x039a,	// (0x00005bbd) list_preview_pane

0x03e4,	// (0x00005c07) popup_preview_window_g1

0x03a9,	// (0x00005bcc) list_single_preview_pane_ParamLimits

0x03a9,	// (0x00005bcc) list_single_preview_pane

0x03ec,	// (0x00005c0f) list_single_preview_pane_g1

0x03f4,	// (0x00005c17) list_single_preview_pane_t1

0x03ba,	// (0x00005bdd) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00015335) list_single_preview_pane_t

0x0402,	// (0x00005c25) bg_popup_heading_pane_cp2_ParamLimits

0x0402,	// (0x00005c25) bg_popup_heading_pane_cp2

0x0418,	// (0x00005c3b) heading_preview_pane_g1

0x0420,	// (0x00005c43) heading_preview_pane_t1_ParamLimits

0x0420,	// (0x00005c43) heading_preview_pane_t1

0xa80d,	// (0x00010030) soft_indicator_pane_t1_ParamLimits

0xae76,	// (0x00010699) scroll_pane_ParamLimits

0xba0f,	// (0x00011232) scroll_sc2_left_pane

0xba18,	// (0x0001123b) scroll_sc2_right_pane

0xba37,	// (0x0001125a) scroll_bg_pane_g1_ParamLimits

0xba4c,	// (0x0001126f) scroll_bg_pane_g2_ParamLimits

0xba64,	// (0x00011287) scroll_bg_pane_g3_ParamLimits

0xf718,	// (0x00014f3b) scroll_bg_pane_g_ParamLimits

0xba37,	// (0x0001125a) scroll_handle_pane_g1_ParamLimits

0xba86,	// (0x000112a9) scroll_handle_pane_g2_ParamLimits

0xba64,	// (0x00011287) scroll_handle_pane_g3_ParamLimits

0xf71f,	// (0x00014f42) scroll_handle_pane_g_ParamLimits

0xd6f9,	// (0x00012f1c) popup_choice_list_window_ParamLimits

0xd6f9,	// (0x00012f1c) popup_choice_list_window

0xd8f3,	// (0x00013116) choice_list_pane

0xd969,	// (0x0001318c) cell_toolbar_pane_t1

0xd991,	// (0x000131b4) toolbar_button_pane_ParamLimits

0xe830,	// (0x00014053) ai_gene_pane_1_t2_ParamLimits

0xe830,	// (0x00014053) ai_gene_pane_1_t2

0x0001,

0xf930,	// (0x00015153) ai_gene_pane_1_t_ParamLimits

0xf930,	// (0x00015153) ai_gene_pane_1_t

0x043d,	// (0x00005c60) scroll_sc2_left_pane_g1

0x043d,	// (0x00005c60) scroll_sc2_right_pane_g1

0xd685,	// (0x00012ea8) bg_popup_sub_pane_cp10

0x0447,	// (0x00005c6a) list_choice_list_pane

0x045e,	// (0x00005c81) list_single_choice_list_pane_ParamLimits

0x045e,	// (0x00005c81) list_single_choice_list_pane

0x0472,	// (0x00005c95) list_single_choice_list_pane_g1

0xb70b,	// (0x00010f2e) list_single_choice_list_pane_t1_ParamLimits

0xb70b,	// (0x00010f2e) list_single_choice_list_pane_t1

0x047a,	// (0x00005c9d) choice_list_pane_g1

0x0482,	// (0x00005ca5) choice_list_pane_t1

0xa539,	// (0x0000fd5c) input_focus_pane_cp11

0xb8ef,	// (0x00011112) title_pane_stacon_g2_ParamLimits

0xb8ef,	// (0x00011112) title_pane_stacon_g2

0x0002,

0xf6fe,	// (0x00014f21) title_pane_stacon_g_ParamLimits

0xf6fe,	// (0x00014f21) title_pane_stacon_g

0xc1ad,	// (0x000119d0) cursor_press_pane

0x5c4f,	// (0x0000b472) popup_fep_hwr_window_ParamLimits

0x5c4f,	// (0x0000b472) popup_fep_hwr_window

0xd74b,	// (0x00012f6e) popup_fep_vkb_window_ParamLimits

0xd74b,	// (0x00012f6e) popup_fep_vkb_window

0x0490,	// (0x00005cb3) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0001535e) fep_vkb_side_pane_g_ParamLimits

0x994d,	// (0x0000f170) fep_hwr_candidate_pane_ParamLimits

0x994d,	// (0x0000f170) fep_hwr_candidate_pane

0x9975,	// (0x0000f198) fep_hwr_side_pane_ParamLimits

0x9975,	// (0x0000f198) fep_hwr_side_pane

0x9995,	// (0x0000f1b8) fep_hwr_top_pane_ParamLimits

0x9995,	// (0x0000f1b8) fep_hwr_top_pane

0x99ad,	// (0x0000f1d0) fep_hwr_write_pane_ParamLimits

0x99ad,	// (0x0000f1d0) fep_hwr_write_pane

0xfb3b,	// (0x0001535e) fep_vkb_side_pane_g

0x0579,	// (0x00005d9c) fep_hwr_top_pane_g1

0x0567,	// (0x00005d8a) fep_hwr_top_pane_g2

0x99e7,	// (0x0000f20a) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0001533a) fep_hwr_top_pane_g

0x99fc,	// (0x0000f21f) fep_hwr_top_text_pane

0xbbdb,	// (0x000113fe) fep_hwr_top_text_pane_g1

0x0678,	// (0x00005e9b) fep_hwr_top_text_pane_t1

0x9aea,	// (0x0000f30d) fep_hwr_candidate_pane_g1

0x08f6,	// (0x00006119) fep_vkb_keypad_pane_g3_ParamLimits

0x08f6,	// (0x00006119) fep_vkb_keypad_pane_g3

0x0918,	// (0x0000613b) fep_vkb_keypad_pane_g4_ParamLimits

0x0918,	// (0x0000613b) fep_vkb_keypad_pane_g4

0x0987,	// (0x000061aa) fep_vkb_bottom_pane_g2_ParamLimits

0x0987,	// (0x000061aa) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00015365) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00015365) fep_vkb_bottom_pane_g

0x043d,	// (0x00005c60) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001536f) cell_vkb_side_pane_g

0x0a12,	// (0x00006235) cell_vkb_side_pane_t1

0x0a20,	// (0x00006243) cell_vkb_side_pane_t1_copy1

0x043d,	// (0x00005c60) bg_fep_vkb_candidate_pane_g2

0x0b44,	// (0x00006367) cell_vkb_candidate_pane_ParamLimits

0x06f4,	// (0x00005f17) aid_size_cell_vkb_ParamLimits

0x06f4,	// (0x00005f17) aid_size_cell_vkb

0x0b44,	// (0x00006367) cell_vkb_candidate_pane

0x9b11,	// (0x0000f334) bg_popup_fep_shadow_pane_g1

0x076a,	// (0x00005f8d) fep_vkb_bottom_pane_ParamLimits

0x076a,	// (0x00005f8d) fep_vkb_bottom_pane

0x07a7,	// (0x00005fca) fep_vkb_candidate_pane_ParamLimits

0x07a7,	// (0x00005fca) fep_vkb_candidate_pane

0x07c3,	// (0x00005fe6) fep_vkb_keypad_pane_ParamLimits

0x07c3,	// (0x00005fe6) fep_vkb_keypad_pane

0x07f7,	// (0x0000601a) fep_vkb_side_pane_ParamLimits

0x07f7,	// (0x0000601a) fep_vkb_side_pane

0x0823,	// (0x00006046) fep_vkb_top_pane_ParamLimits

0x0823,	// (0x00006046) fep_vkb_top_pane

0x084f,	// (0x00006072) fep_vkb_top_pane_g1_ParamLimits

0x084f,	// (0x00006072) fep_vkb_top_pane_g1

0x085e,	// (0x00006081) fep_vkb_top_pane_g2_ParamLimits

0x085e,	// (0x00006081) fep_vkb_top_pane_g2

0x086d,	// (0x00006090) fep_vkb_top_pane_g3_ParamLimits

0x086d,	// (0x00006090) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00015355) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00015355) fep_vkb_top_pane_g

0x088b,	// (0x000060ae) fep_vkb_top_text_pane_ParamLimits

0x088b,	// (0x000060ae) fep_vkb_top_text_pane

0x6e85,	// (0x0000c6a8) fep_vkb_side_pane_g1_ParamLimits

0x6e85,	// (0x0000c6a8) fep_vkb_side_pane_g1

0x08e5,	// (0x00006108) grid_vkb_side_pane_ParamLimits

0x08e5,	// (0x00006108) grid_vkb_side_pane

0x9b19,	// (0x0000f33c) bg_popup_fep_shadow_pane_g2

0x9b22,	// (0x0000f345) bg_popup_fep_shadow_pane_g3

0x9b2a,	// (0x0000f34d) bg_popup_fep_shadow_pane_g4

0x9b33,	// (0x0000f356) bg_popup_fep_shadow_pane_g5

0x9b3b,	// (0x0000f35e) bg_popup_fep_shadow_pane_g6

0x9b43,	// (0x0000f366) bg_popup_fep_shadow_pane_g7

0xb55e,	// (0x00010d81) bg_popup_fep_shadow_pane_g8

0x0936,	// (0x00006159) grid_vkb_keypad_number_pane_ParamLimits

0x0936,	// (0x00006159) grid_vkb_keypad_number_pane

0x0946,	// (0x00006169) grid_vkb_keypad_pane_ParamLimits

0x0946,	// (0x00006169) grid_vkb_keypad_pane

0x096c,	// (0x0000618f) fep_vkb_bottom_pane_g1_ParamLimits

0x096c,	// (0x0000618f) fep_vkb_bottom_pane_g1

0x0995,	// (0x000061b8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x0995,	// (0x000061b8) grid_vkb_keypad_bottom_left_pane

0x09aa,	// (0x000061cd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x09aa,	// (0x000061cd) grid_vkb_keypad_bottom_right_pane

0x09bf,	// (0x000061e2) fep_vkb_top_text_pane_g1

0x6ecc,	// (0x0000c6ef) fep_vkb_top_text_pane_t1

0x6ede,	// (0x0000c701) cell_vkb_side_pane_ParamLimits

0x6ede,	// (0x0000c701) cell_vkb_side_pane

0x043d,	// (0x00005c60) cell_vkb_side_pane_g1

0x0a2e,	// (0x00006251) cell_vkb_keypad_pane_ParamLimits

0x0a2e,	// (0x00006251) cell_vkb_keypad_pane

0x0a9b,	// (0x000062be) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00015382) bg_popup_fep_shadow_pane_g

0x9b53,	// (0x0000f376) cell_hwr_side_pane_g1

0x9b53,	// (0x0000f376) cell_hwr_side_pane_g2

0x0aa5,	// (0x000062c8) cell_vkb_keypad_pane_t1

0x6ef4,	// (0x0000c717) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x6ef4,	// (0x0000c717) cell_vkb_keypad_bottom_left_pane

0x6f09,	// (0x0000c72c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x6f09,	// (0x0000c72c) cell_vkb_keypad_bottom_right_pane

0x043d,	// (0x00005c60) cell_vkb_keypad_bottom_left_pane_g1

0x043d,	// (0x00005c60) cell_vkb_keypad_bottom_right_pane_g1

0x0b09,	// (0x0000632c) cell_vkb_keypad_number_pane_ParamLimits

0x0b09,	// (0x0000632c) cell_vkb_keypad_number_pane

0x0b28,	// (0x0000634b) cell_vkb_keypad_number_pane_g1

0x0b32,	// (0x00006355) cell_vkb_keypad_number_pane_g2

0x0b3b,	// (0x0000635e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00015374) cell_vkb_keypad_number_pane_g

0x0aa5,	// (0x000062c8) cell_vkb_keypad_number_pane_t1

0x0b5d,	// (0x00006380) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00015395) cell_hwr_side_pane_g

0x0bb8,	// (0x000063db) cell_hwr_side_pane_t1

0x9b5d,	// (0x0000f380) cell_hwr_side_pane_t1_copy1

0x9b6b,	// (0x0000f38e) cell_hwr_candidate_pane_g1

0x9b9a,	// (0x0000f3bd) cell_hwr_candidate_pane_t1

0x043d,	// (0x00005c60) cell_vkb_candidate_pane_g2

0x0c69,	// (0x0000648c) cell_vkb_candidate_pane_t1

0x9918,	// (0x0000f13b) bg_popup_fep_shadow_pane_ParamLimits

0x9918,	// (0x0000f13b) bg_popup_fep_shadow_pane

0x99c7,	// (0x0000f1ea) bg_fep_hwr_top_pane_g4

0x05b5,	// (0x00005dd8) bg_hwr_side_pane_g1_ParamLimits

0x05b5,	// (0x00005dd8) bg_hwr_side_pane_g1

0xd27e,	// (0x00012aa1) cell_hwr_side_pane_ParamLimits

0xd27e,	// (0x00012aa1) cell_hwr_side_pane

0x9a73,	// (0x0000f296) fep_hwr_write_pane_g1_ParamLimits

0x9a73,	// (0x0000f296) fep_hwr_write_pane_g1

0x9a80,	// (0x0000f2a3) fep_hwr_write_pane_g2_ParamLimits

0x9a80,	// (0x0000f2a3) fep_hwr_write_pane_g2

0x9a8d,	// (0x0000f2b0) fep_hwr_write_pane_g3_ParamLimits

0x9a8d,	// (0x0000f2b0) fep_hwr_write_pane_g3

0xd29e,	// (0x00012ac1) fep_hwr_write_pane_g4_ParamLimits

0xd29e,	// (0x00012ac1) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00015341) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00015341) fep_hwr_write_pane_g

0x99c7,	// (0x0000f1ea) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x99c7,	// (0x0000f1ea) bg_fep_hwr_candidate_pane_g2

0x9ab0,	// (0x0000f2d3) cell_hwr_candidate_pane_ParamLimits

0x9ab0,	// (0x0000f2d3) cell_hwr_candidate_pane

0x9aea,	// (0x0000f30d) fep_hwr_candidate_pane_g1_ParamLimits

0x0722,	// (0x00005f45) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x0722,	// (0x00005f45) bg_popup_fep_shadow_pane_cp2

0x087d,	// (0x000060a0) fep_vkb_top_pane_g4_ParamLimits

0x087d,	// (0x000060a0) fep_vkb_top_pane_g4

0x08c3,	// (0x000060e6) fep_vkb_side_pane_g2_ParamLimits

0x08c3,	// (0x000060e6) fep_vkb_side_pane_g2

0x54ad,	// (0x0000acd0) list_setting_pane_t4_ParamLimits

0x54ad,	// (0x0000acd0) list_setting_pane_t4

0x552f,	// (0x0000ad52) list_setting_number_pane_t5_ParamLimits

0x552f,	// (0x0000ad52) list_setting_number_pane_t5

0x5835,	// (0x0000b058) list_double_heading_pane_cp2_ParamLimits

0x5835,	// (0x0000b058) list_double_heading_pane_cp2

0xc022,	// (0x00011845) list_double_heading_pane_g1_cp2_ParamLimits

0xc022,	// (0x00011845) list_double_heading_pane_g1_cp2

0x0c77,	// (0x0000649a) list_double_heading_pane_g2_cp2_ParamLimits

0x0c77,	// (0x0000649a) list_double_heading_pane_g2_cp2

0x0c8b,	// (0x000064ae) list_double_heading_pane_t1_cp2_ParamLimits

0x0c8b,	// (0x000064ae) list_double_heading_pane_t1_cp2

0x0ca1,	// (0x000064c4) list_double_heading_pane_t2_cp2_ParamLimits

0x0ca1,	// (0x000064c4) list_double_heading_pane_t2_cp2

0xa523,	// (0x0000fd46) aid_value_unit2

0x8d36,	// (0x0000e559) popup_preview_fixed_window

0xa9b1,	// (0x000101d4) bg_popup_preview_window_pane_cp02

0x0cb3,	// (0x000064d6) list_preview_fixed_pane

0x0cf9,	// (0x0000651c) list_empty_pane_fp_ParamLimits

0x0cf9,	// (0x0000651c) list_empty_pane_fp

0x0cf9,	// (0x0000651c) list_single_cale_day_pane_fp_ParamLimits

0x0cf9,	// (0x0000651c) list_single_cale_day_pane_fp

0x0cf9,	// (0x0000651c) list_single_graphic_heading_pane_fp_ParamLimits

0x0cf9,	// (0x0000651c) list_single_graphic_heading_pane_fp

0x0cf9,	// (0x0000651c) list_single_graphic_pane_fp_ParamLimits

0x0cf9,	// (0x0000651c) list_single_graphic_pane_fp

0x0cf9,	// (0x0000651c) list_single_heading_pane_fp_ParamLimits

0x0cf9,	// (0x0000651c) list_single_heading_pane_fp

0x0cf9,	// (0x0000651c) list_single_pane_fp_ParamLimits

0x0cf9,	// (0x0000651c) list_single_pane_fp

0x0d0d,	// (0x00006530) list_single_pane_fp_g1_ParamLimits

0x0d0d,	// (0x00006530) list_single_pane_fp_g1

0xb0b8,	// (0x000108db) list_single_pane_fp_g2_ParamLimits

0xb0b8,	// (0x000108db) list_single_pane_fp_g2

0x0d19,	// (0x0000653c) list_single_pane_fp_g3_ParamLimits

0x0d19,	// (0x0000653c) list_single_pane_fp_g3

0x0d2d,	// (0x00006550) list_single_pane_fp_g4_ParamLimits

0x0d2d,	// (0x00006550) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x000153a8) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x000153a8) list_single_pane_fp_g

0x0d39,	// (0x0000655c) list_single_pane_fp_t1_ParamLimits

0x0d39,	// (0x0000655c) list_single_pane_fp_t1

0x0d50,	// (0x00006573) list_single_graphic_pane_fp_g1_ParamLimits

0x0d50,	// (0x00006573) list_single_graphic_pane_fp_g1

0x0d0d,	// (0x00006530) list_single_graphic_pane_fp_g2_ParamLimits

0x0d0d,	// (0x00006530) list_single_graphic_pane_fp_g2

0xb0b8,	// (0x000108db) list_single_graphic_pane_fp_g3_ParamLimits

0xb0b8,	// (0x000108db) list_single_graphic_pane_fp_g3

0x0d19,	// (0x0000653c) list_single_graphic_pane_fp_g4_ParamLimits

0x0d19,	// (0x0000653c) list_single_graphic_pane_fp_g4

0x0d2d,	// (0x00006550) list_single_graphic_pane_fp_g5_ParamLimits

0x0d2d,	// (0x00006550) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x000153b1) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x000153b1) list_single_graphic_pane_fp_g

0x0d5c,	// (0x0000657f) list_single_graphic_pane_fp_t1_ParamLimits

0x0d5c,	// (0x0000657f) list_single_graphic_pane_fp_t1

0x0d50,	// (0x00006573) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0d50,	// (0x00006573) list_single_graphic_heading_pane_fp_g1

0x0d0d,	// (0x00006530) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x0d0d,	// (0x00006530) list_single_graphic_heading_pane_fp_g2

0xb0b8,	// (0x000108db) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb0b8,	// (0x000108db) list_single_graphic_heading_pane_fp_g3

0x0d19,	// (0x0000653c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0d19,	// (0x0000653c) list_single_graphic_heading_pane_fp_g4

0x0d2d,	// (0x00006550) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x0d2d,	// (0x00006550) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x000153b1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x000153b1) list_single_graphic_heading_pane_fp_g

0x0d72,	// (0x00006595) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0d72,	// (0x00006595) list_single_graphic_heading_pane_fp_t1

0x0d88,	// (0x000065ab) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0d88,	// (0x000065ab) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x000153bc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x000153bc) list_single_graphic_heading_pane_fp_t

0x0d9a,	// (0x000065bd) list_single_cale_day_pane_fp_g1_ParamLimits

0x0d9a,	// (0x000065bd) list_single_cale_day_pane_fp_g1

0x0dd2,	// (0x000065f5) list_single_cale_day_pane_fp_g2_ParamLimits

0x0dd2,	// (0x000065f5) list_single_cale_day_pane_fp_g2

0x0dde,	// (0x00006601) list_single_cale_day_pane_fp_g3_ParamLimits

0x0dde,	// (0x00006601) list_single_cale_day_pane_fp_g3

0x0e06,	// (0x00006629) list_single_cale_day_pane_fp_g4_ParamLimits

0x0e06,	// (0x00006629) list_single_cale_day_pane_fp_g4

0x0e2a,	// (0x0000664d) list_single_cale_day_pane_fp_g5_ParamLimits

0x0e2a,	// (0x0000664d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x000153c1) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x000153c1) list_single_cale_day_pane_fp_g

0x0e4e,	// (0x00006671) list_single_cale_day_pane_fp_t1_ParamLimits

0x0e4e,	// (0x00006671) list_single_cale_day_pane_fp_t1

0x0e74,	// (0x00006697) list_single_cale_day_pane_fp_t2_ParamLimits

0x0e74,	// (0x00006697) list_single_cale_day_pane_fp_t2

0x0e8d,	// (0x000066b0) list_single_cale_day_pane_fp_t3_ParamLimits

0x0e8d,	// (0x000066b0) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x000153cc) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x000153cc) list_single_cale_day_pane_fp_t

0x0d0d,	// (0x00006530) list_empty_pane_fp_g1_ParamLimits

0x0d0d,	// (0x00006530) list_empty_pane_fp_g1

0x0ea6,	// (0x000066c9) list_empty_pane_fp_t1

0x0eb4,	// (0x000066d7) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x000153d3) list_empty_pane_fp_t

0x0d0d,	// (0x00006530) list_single_heading_pane_fp_g1_ParamLimits

0x0d0d,	// (0x00006530) list_single_heading_pane_fp_g1

0xb0b8,	// (0x000108db) list_single_heading_pane_fp_g2_ParamLimits

0xb0b8,	// (0x000108db) list_single_heading_pane_fp_g2

0x0d19,	// (0x0000653c) list_single_heading_pane_fp_g3_ParamLimits

0x0d19,	// (0x0000653c) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x000153d8) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x000153d8) list_single_heading_pane_fp_g

0x0ec2,	// (0x000066e5) list_single_heading_pane_fp_t1_ParamLimits

0x0ec2,	// (0x000066e5) list_single_heading_pane_fp_t1

0x0ed4,	// (0x000066f7) list_single_heading_pane_fp_t2_ParamLimits

0x0ed4,	// (0x000066f7) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x000153df) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x000153df) list_single_heading_pane_fp_t

0xb779,	// (0x00010f9c) aid_size_cell_fast

0xa918,	// (0x0001013b) soft_indicator_pane_cp1_t1

0xb7b6,	// (0x00010fd9) cell_app_pane_cp2_ParamLimits

0xb7b6,	// (0x00010fd9) cell_app_pane_cp2

0x993a,	// (0x0000f15d) fep_hwr_candidate_drop_down_list_pane

0x9b04,	// (0x0000f327) fep_hwr_candidate_pane_g3_ParamLimits

0x9b04,	// (0x0000f327) fep_hwr_candidate_pane_g3

0x80b7,	// (0x0000d8da) fep_hwr_candidate_pane_g4_ParamLimits

0x80b7,	// (0x0000d8da) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0001534e) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0001534e) fep_hwr_candidate_pane_g

0x0796,	// (0x00005fb9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x0796,	// (0x00005fb9) fep_vkb_candidate_drop_down_list_pane

0x0b65,	// (0x00006388) fep_vkb_candidate_pane_g3

0x0b6d,	// (0x00006390) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0001537b) fep_vkb_candidate_pane_g

0x9b6b,	// (0x0000f38e) cell_hwr_candidate_pane_g1_ParamLimits

0x9b79,	// (0x0000f39c) cell_hwr_candidate_pane_g3_ParamLimits

0x9b79,	// (0x0000f39c) cell_hwr_candidate_pane_g3

0x3322,	// (0x00008b45) cell_hwr_candidate_pane_g4_ParamLimits

0x3322,	// (0x00008b45) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0001539a) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0001539a) cell_hwr_candidate_pane_g

0x0c33,	// (0x00006456) cell_vkb_candidate_pane_g3_ParamLimits

0x0c33,	// (0x00006456) cell_vkb_candidate_pane_g3

0x0c4e,	// (0x00006471) cell_vkb_candidate_pane_g4_ParamLimits

0x0c4e,	// (0x00006471) cell_vkb_candidate_pane_g4

0x0eea,	// (0x0000670d) cell_app_pane_cp2_g1_ParamLimits

0x0eea,	// (0x0000670d) cell_app_pane_cp2_g1

0x0f08,	// (0x0000672b) cell_app_pane_cp2_g2_ParamLimits

0x0f08,	// (0x0000672b) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x000153e4) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x000153e4) cell_app_pane_cp2_g

0x0f14,	// (0x00006737) cell_app_pane_cp2_t1_ParamLimits

0x0f14,	// (0x00006737) cell_app_pane_cp2_t1

0xb420,	// (0x00010c43) grid_highlight_pane_cp1_ParamLimits

0xb420,	// (0x00010c43) grid_highlight_pane_cp1

0x9bb7,	// (0x0000f3da) cell_hwr_candidate_pane_cp1_ParamLimits

0x9bb7,	// (0x0000f3da) cell_hwr_candidate_pane_cp1

0x9b6b,	// (0x0000f38e) fep_hwr_candidate_drop_down_list_pane_g1

0x9bd5,	// (0x0000f3f8) fep_hwr_candidate_drop_down_list_pane_g2

0x9be2,	// (0x0000f405) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x000153e9) fep_hwr_candidate_drop_down_list_pane_g

0x9bef,	// (0x0000f412) fep_hwr_candidate_drop_down_list_scroll_pane

0x9bf8,	// (0x0000f41b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9bf8,	// (0x0000f41b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9c05,	// (0x0000f428) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9c05,	// (0x0000f428) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9c12,	// (0x0000f435) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9c12,	// (0x0000f435) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9c1f,	// (0x0000f442) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9c1f,	// (0x0000f442) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9c3a,	// (0x0000f45d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9c3a,	// (0x0000f45d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9c55,	// (0x0000f478) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9c55,	// (0x0000f478) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9c70,	// (0x0000f493) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9c70,	// (0x0000f493) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9c8b,	// (0x0000f4ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9c8b,	// (0x0000f4ae) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x000153f0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x000153f0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6f24,	// (0x0000c747) cell_vkb_candidate_pane_cp1_ParamLimits

0x6f24,	// (0x0000c747) cell_vkb_candidate_pane_cp1

0x087d,	// (0x000060a0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x087d,	// (0x000060a0) fep_vkb_candidate_drop_down_list_pane_g1

0x0f44,	// (0x00006767) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x0f44,	// (0x00006767) fep_vkb_candidate_drop_down_list_pane_g2

0x0f51,	// (0x00006774) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x0f51,	// (0x00006774) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x00015401) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x00015401) fep_vkb_candidate_drop_down_list_pane_g

0x1002,	// (0x00006825) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x1002,	// (0x00006825) fep_vkb_candidate_drop_down_list_scroll_pane

0x100f,	// (0x00006832) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x100f,	// (0x00006832) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x101c,	// (0x0000683f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x101c,	// (0x0000683f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x1028,	// (0x0000684b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1028,	// (0x0000684b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x0bd4,	// (0x000063f7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0bd4,	// (0x000063f7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x0bf5,	// (0x00006418) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0bf5,	// (0x00006418) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x1034,	// (0x00006857) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1034,	// (0x00006857) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x1055,	// (0x00006878) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1055,	// (0x00006878) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x1076,	// (0x00006899) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1076,	// (0x00006899) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00015408) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00015408) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x4e32,	// (0x0000a655) title_pane_g1_ParamLimits

0x4e49,	// (0x0000a66c) title_pane_g2_ParamLimits

0xf592,	// (0x00014db5) title_pane_g_ParamLimits

0xbbd3,	// (0x000113f6) aid_call2_pane

0xbbcb,	// (0x000113ee) aid_call_pane

0xbbdb,	// (0x000113fe) popup_clock_analogue_window_g1

0xbbdb,	// (0x000113fe) popup_clock_analogue_window_g2

0x9010,	// (0x0000e833) popup_clock_analogue_window_g3

0x9019,	// (0x0000e83c) popup_clock_analogue_window_g4

0xa543,	// (0x0000fd66) popup_clock_analogue_window_g5

0x0004,

0xf72d,	// (0x00014f50) popup_clock_analogue_window_g

0x9021,	// (0x0000e844) popup_clock_analogue_window_t1

0x902f,	// (0x0000e852) clock_digital_number_pane_ParamLimits

0x902f,	// (0x0000e852) clock_digital_number_pane

0x903b,	// (0x0000e85e) clock_digital_number_pane_cp02_ParamLimits

0x903b,	// (0x0000e85e) clock_digital_number_pane_cp02

0x9047,	// (0x0000e86a) clock_digital_number_pane_cp03_ParamLimits

0x9047,	// (0x0000e86a) clock_digital_number_pane_cp03

0x9053,	// (0x0000e876) clock_digital_number_pane_cp04_ParamLimits

0x9053,	// (0x0000e876) clock_digital_number_pane_cp04

0x905f,	// (0x0000e882) clock_digital_separator_pane_ParamLimits

0x905f,	// (0x0000e882) clock_digital_separator_pane

0x906b,	// (0x0000e88e) popup_clock_digital_window_t1_ParamLimits

0x906b,	// (0x0000e88e) popup_clock_digital_window_t1

0xa543,	// (0x0000fd66) clock_digital_number_pane_g1

0xa543,	// (0x0000fd66) clock_digital_number_pane_g2

0x0001,

0xf738,	// (0x00014f5b) clock_digital_number_pane_g

0xa543,	// (0x0000fd66) clock_digital_separator_pane_g1

0xa543,	// (0x0000fd66) clock_digital_separator_pane_g2

0x0001,

0xf738,	// (0x00014f5b) clock_digital_separator_pane_g

0x6146,	// (0x0000b969) aid_fill_nsta_ParamLimits

0x625d,	// (0x0000ba80) indicator_nsta_pane_ParamLimits

0xd89c,	// (0x000130bf) popup_clock_analogue_window

0xd89c,	// (0x000130bf) popup_clock_digital_window

0xb73a,	// (0x00010f5d) grid_indicator_nsta_pane_ParamLimits

0xf51b,	// (0x00014d3e) clock_nsta_pane_t2

0x0001,

0xfab8,	// (0x000152db) clock_nsta_pane_t

0x8fd4,	// (0x0000e7f7) aid_size_max_handle

0xcf6d,	// (0x00012790) aid_size_min_handle

0xc1ad,	// (0x000119d0) editor_scroll_pane

0x1091,	// (0x000068b4) ex_editor_pane

0xb6e7,	// (0x00010f0a) scroll_pane_cp13

0xaea3,	// (0x000106c6) scroll_pane_cp14

0xbc05,	// (0x00011428) scroll_pane_cp36

0x5841,	// (0x0000b064) list_single_graphic_hl_pane_cp2_ParamLimits

0x5841,	// (0x0000b064) list_single_graphic_hl_pane_cp2

0x6ac8,	// (0x0000c2eb) list_single_graphic_hl_pane_ParamLimits

0x6ac8,	// (0x0000c2eb) list_single_graphic_hl_pane

0x1099,	// (0x000068bc) aid_size_min_hl_cp1

0x10a2,	// (0x000068c5) list_highlight_pane_cp34_ParamLimits

0x10a2,	// (0x000068c5) list_highlight_pane_cp34

0x10b3,	// (0x000068d6) list_single_graphic_hl_pane_g1_ParamLimits

0x10b3,	// (0x000068d6) list_single_graphic_hl_pane_g1

0x6f44,	// (0x0000c767) list_single_graphic_hl_pane_g2_ParamLimits

0x6f44,	// (0x0000c767) list_single_graphic_hl_pane_g2

0x6f44,	// (0x0000c767) list_single_graphic_hl_pane_g3_ParamLimits

0x6f44,	// (0x0000c767) list_single_graphic_hl_pane_g3

0xaeb7,	// (0x000106da) list_single_graphic_hl_pane_g4_ParamLimits

0xaeb7,	// (0x000106da) list_single_graphic_hl_pane_g4

0xb446,	// (0x00010c69) list_single_graphic_hl_pane_g5_ParamLimits

0xb446,	// (0x00010c69) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x00015419) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x00015419) list_single_graphic_hl_pane_g

0x6f50,	// (0x0000c773) list_single_graphic_hl_pane_t1_ParamLimits

0x6f50,	// (0x0000c773) list_single_graphic_hl_pane_t1

0x10e2,	// (0x00006905) aid_size_min_hl_cp2

0x10eb,	// (0x0000690e) list_highlight_pane_cp34_cp2_ParamLimits

0x10eb,	// (0x0000690e) list_highlight_pane_cp34_cp2

0x10b3,	// (0x000068d6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x10b3,	// (0x000068d6) list_single_graphic_hl_pane_g1_cp2

0x10f8,	// (0x0000691b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x10f8,	// (0x0000691b) list_single_graphic_hl_pane_g2_cp2

0x1104,	// (0x00006927) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x1104,	// (0x00006927) list_single_graphic_hl_pane_g3_cp2

0xc022,	// (0x00011845) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc022,	// (0x00011845) list_single_graphic_hl_pane_g4_cp2

0x0c77,	// (0x0000649a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x0c77,	// (0x0000649a) list_single_graphic_hl_pane_g5_cp2

0xcf97,	// (0x000127ba) control_pane_g4_ParamLimits

0xcf97,	// (0x000127ba) control_pane_g4

0xd685,	// (0x00012ea8) bg_popup_sub_pane_cp10_ParamLimits

0x0447,	// (0x00005c6a) list_choice_list_pane_ParamLimits

0x0456,	// (0x00005c79) scroll_pane_cp23

0xa9b1,	// (0x000101d4) bg_popup_preview_window_pane_cp02_ParamLimits

0x0cb3,	// (0x000064d6) list_preview_fixed_pane_ParamLimits

0x0cc9,	// (0x000064ec) list_preview_fixed_pane_cp_ParamLimits

0x0cc9,	// (0x000064ec) list_preview_fixed_pane_cp

0x0cd5,	// (0x000064f8) popup_preview_fixed_window_g1_ParamLimits

0x0cd5,	// (0x000064f8) popup_preview_fixed_window_g1

0x0ce1,	// (0x00006504) popup_preview_fixed_window_g2_ParamLimits

0x0ce1,	// (0x00006504) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x000153a1) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x000153a1) popup_preview_fixed_window_g

0x8f64,	// (0x0000e787) aid_navi_side_left_pane_ParamLimits

0x8f74,	// (0x0000e797) aid_navi_side_right_pane_ParamLimits

0x8f83,	// (0x0000e7a6) navi_icon_pane_stacon_ParamLimits

0x8f93,	// (0x0000e7b6) navi_navi_pane_stacon_ParamLimits

0x8f83,	// (0x0000e7a6) navi_text_pane_stacon_ParamLimits

0xa539,	// (0x0000fd5c) main_text_info_pane

0x1126,	// (0x00006949) listscroll_text_info_pane

0x112e,	// (0x00006951) list_text_info_pane_ParamLimits

0x112e,	// (0x00006951) list_text_info_pane

0x113d,	// (0x00006960) scroll_pane_cp24_ParamLimits

0x113d,	// (0x00006960) scroll_pane_cp24

0x6f66,	// (0x0000c789) list_text_info_pane_t1_ParamLimits

0x6f66,	// (0x0000c789) list_text_info_pane_t1

0x5bcf,	// (0x0000b3f2) popup_fast_swap2_window_ParamLimits

0x5bcf,	// (0x0000b3f2) popup_fast_swap2_window

0x1178,	// (0x0000699b) aid_size_cell_fast2

0xa539,	// (0x0000fd5c) bg_popup_window_pane_cp17

0xdd61,	// (0x00013584) heading_pane_cp2

0xac25,	// (0x00010448) listscroll_fast2_pane

0x1182,	// (0x000069a5) grid_fast2_pane

0x118a,	// (0x000069ad) listscroll_fast2_pane_g1

0x1192,	// (0x000069b5) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x00015424) listscroll_fast2_pane_g

0xb6e7,	// (0x00010f0a) scroll_pane_cp26

0x119a,	// (0x000069bd) cell_fast2_pane_ParamLimits

0x119a,	// (0x000069bd) cell_fast2_pane

0x11b0,	// (0x000069d3) cell_fast2_pane_g1

0x11b9,	// (0x000069dc) cell_fast2_pane_g2

0x11c2,	// (0x000069e5) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x00015429) cell_fast2_pane_g

0xacfc,	// (0x0001051f) grid_highlight_pane_cp9

0xad11,	// (0x00010534) main_eswt_pane_ParamLimits

0xad11,	// (0x00010534) main_eswt_pane

0x1152,	// (0x00006975) list_single_text_info_pane

0x11ca,	// (0x000069ed) eswt_ctrl_button_pane

0x11ca,	// (0x000069ed) eswt_ctrl_canvas_pane

0x11d2,	// (0x000069f5) eswt_ctrl_combo_pane

0x11ca,	// (0x000069ed) eswt_ctrl_default_pane

0x11ca,	// (0x000069ed) eswt_ctrl_label_pane

0x11da,	// (0x000069fd) eswt_ctrl_wait_pane

0x11e2,	// (0x00006a05) eswt_shell_pane

0xa539,	// (0x0000fd5c) listscroll_eswt_app_pane

0x11fe,	// (0x00006a21) popup_eswt_tasktip_window_ParamLimits

0x11fe,	// (0x00006a21) popup_eswt_tasktip_window

0xdab3,	// (0x000132d6) bg_popup_window_pane_cp18

0x120f,	// (0x00006a32) eswt_control_pane_g1_ParamLimits

0x120f,	// (0x00006a32) eswt_control_pane_g1

0x121c,	// (0x00006a3f) eswt_control_pane_g2_ParamLimits

0x121c,	// (0x00006a3f) eswt_control_pane_g2

0x1229,	// (0x00006a4c) eswt_control_pane_g3_ParamLimits

0x1229,	// (0x00006a4c) eswt_control_pane_g3

0x1236,	// (0x00006a59) eswt_control_pane_g4_ParamLimits

0x1236,	// (0x00006a59) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x00015430) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x00015430) eswt_control_pane_g

0xb420,	// (0x00010c43) bg_button_pane_ParamLimits

0xb420,	// (0x00010c43) bg_button_pane

0xad11,	// (0x00010534) common_borders_pane_copy2_ParamLimits

0xad11,	// (0x00010534) common_borders_pane_copy2

0x1243,	// (0x00006a66) control_button_pane_g1_ParamLimits

0x1243,	// (0x00006a66) control_button_pane_g1

0x124f,	// (0x00006a72) control_button_pane_g2_ParamLimits

0x124f,	// (0x00006a72) control_button_pane_g2

0x125b,	// (0x00006a7e) control_button_pane_g3_ParamLimits

0x125b,	// (0x00006a7e) control_button_pane_g3

0x0002,

0xfc16,	// (0x00015439) control_button_pane_g_ParamLimits

0xfc16,	// (0x00015439) control_button_pane_g

0x126f,	// (0x00006a92) control_button_pane_t1

0x127d,	// (0x00006aa0) control_button_pane_t2

0x0001,

0xfc1d,	// (0x00015440) control_button_pane_t

0xd99d,	// (0x000131c0) bg_button_pane_g1

0xd9ad,	// (0x000131d0) bg_button_pane_g2

0xd9a5,	// (0x000131c8) bg_button_pane_g3

0xd9bd,	// (0x000131e0) bg_button_pane_g4

0xd9b5,	// (0x000131d8) bg_button_pane_g5

0xd9c5,	// (0x000131e8) bg_button_pane_g6

0xd9cd,	// (0x000131f0) bg_button_pane_g7

0xd9dd,	// (0x00013200) bg_button_pane_g8

0xd9d5,	// (0x000131f8) bg_button_pane_g9

0x0008,

0xf884,	// (0x000150a7) bg_button_pane_g

0x0402,	// (0x00005c25) common_borders_pane_ParamLimits

0x0402,	// (0x00005c25) common_borders_pane

0x120f,	// (0x00006a32) eswt_control_pane_g1_copy1_ParamLimits

0x120f,	// (0x00006a32) eswt_control_pane_g1_copy1

0x121c,	// (0x00006a3f) eswt_control_pane_g2_copy1_ParamLimits

0x121c,	// (0x00006a3f) eswt_control_pane_g2_copy1

0x1229,	// (0x00006a4c) eswt_control_pane_g3_copy1_ParamLimits

0x1229,	// (0x00006a4c) eswt_control_pane_g3_copy1

0x1236,	// (0x00006a59) eswt_control_pane_g4_copy1_ParamLimits

0x1236,	// (0x00006a59) eswt_control_pane_g4_copy1

0x043d,	// (0x00005c60) bg_eswt_ctrl_canvas_pane_g1

0x0402,	// (0x00005c25) common_borders_pane_cp2_ParamLimits

0x0402,	// (0x00005c25) common_borders_pane_cp2

0x0402,	// (0x00005c25) common_borders_pane_cp3_ParamLimits

0x0402,	// (0x00005c25) common_borders_pane_cp3

0x128b,	// (0x00006aae) separator_horizontal_pane

0xba18,	// (0x0001123b) separator_vertical_pane

0x120f,	// (0x00006a32) eswt_control_pane_g1_copy2_ParamLimits

0x120f,	// (0x00006a32) eswt_control_pane_g1_copy2

0x121c,	// (0x00006a3f) eswt_control_pane_g2_copy2_ParamLimits

0x121c,	// (0x00006a3f) eswt_control_pane_g2_copy2

0x1229,	// (0x00006a4c) eswt_control_pane_g3_copy2_ParamLimits

0x1229,	// (0x00006a4c) eswt_control_pane_g3_copy2

0x1236,	// (0x00006a59) eswt_control_pane_g4_copy2_ParamLimits

0x1236,	// (0x00006a59) eswt_control_pane_g4_copy2

0xa539,	// (0x0000fd5c) common_borders_pane_cp4

0x1293,	// (0x00006ab6) separator_horizontal_pane_g1

0x129c,	// (0x00006abf) separator_horizontal_pane_g2

0x12a5,	// (0x00006ac8) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00015445) separator_horizontal_pane_g

0x120f,	// (0x00006a32) eswt_control_pane_g1_copy3_ParamLimits

0x120f,	// (0x00006a32) eswt_control_pane_g1_copy3

0x121c,	// (0x00006a3f) eswt_control_pane_g2_copy3_ParamLimits

0x121c,	// (0x00006a3f) eswt_control_pane_g2_copy3

0x1229,	// (0x00006a4c) eswt_control_pane_g3_copy3_ParamLimits

0x1229,	// (0x00006a4c) eswt_control_pane_g3_copy3

0x1236,	// (0x00006a59) eswt_control_pane_g4_copy3_ParamLimits

0x1236,	// (0x00006a59) eswt_control_pane_g4_copy3

0xa539,	// (0x0000fd5c) common_borders_pane_cp5

0x12ae,	// (0x00006ad1) separator_vertical_pane_g1

0x12b7,	// (0x00006ada) separator_vertical_pane_g2

0x12c0,	// (0x00006ae3) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0001544c) separator_vertical_pane_g

0x120f,	// (0x00006a32) eswt_control_pane_g1_copy4_ParamLimits

0x120f,	// (0x00006a32) eswt_control_pane_g1_copy4

0x121c,	// (0x00006a3f) eswt_control_pane_g2_copy4_ParamLimits

0x121c,	// (0x00006a3f) eswt_control_pane_g2_copy4

0x1229,	// (0x00006a4c) eswt_control_pane_g3_copy4_ParamLimits

0x1229,	// (0x00006a4c) eswt_control_pane_g3_copy4

0x1236,	// (0x00006a59) eswt_control_pane_g4_copy4_ParamLimits

0x1236,	// (0x00006a59) eswt_control_pane_g4_copy4

0x6f81,	// (0x0000c7a4) eswt_ctrl_combo_button_pane

0x6f89,	// (0x0000c7ac) eswt_ctrl_input_pane

0x6f91,	// (0x0000c7b4) popup_choice_list_window_cp70

0x6f99,	// (0x0000c7bc) eswt_ctrl_input_pane_t1

0xa539,	// (0x0000fd5c) input_focus_pane_cp70

0x0402,	// (0x00005c25) bg_button_pane_cp70_ParamLimits

0x0402,	// (0x00005c25) bg_button_pane_cp70

0x6fa7,	// (0x0000c7ca) eswt_ctrl_combo_button_pane_g1

0x12f7,	// (0x00006b1a) wait_bar_pane_cp70

0xdab3,	// (0x000132d6) bg_popup_window_pane_cp70_ParamLimits

0xdab3,	// (0x000132d6) bg_popup_window_pane_cp70

0x12ff,	// (0x00006b22) popup_eswt_tasktip_window_t1

0x1315,	// (0x00006b38) wait_bar_pane_cp71_ParamLimits

0x1315,	// (0x00006b38) wait_bar_pane_cp71

0x1321,	// (0x00006b44) grid_eswt_app_pane

0xba0f,	// (0x00011232) scroll_pane_cp70

0x6faf,	// (0x0000c7d2) cell_eswt_app_pane_ParamLimits

0x6faf,	// (0x0000c7d2) cell_eswt_app_pane

0x6fd7,	// (0x0000c7fa) cell_eswt_app_pane_g1_ParamLimits

0x6fd7,	// (0x0000c7fa) cell_eswt_app_pane_g1

0x7006,	// (0x0000c829) cell_eswt_app_pane_g2_ParamLimits

0x7006,	// (0x0000c829) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x00015453) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x00015453) cell_eswt_app_pane_g

0x702f,	// (0x0000c852) cell_eswt_app_pane_t1_ParamLimits

0x702f,	// (0x0000c852) cell_eswt_app_pane_t1

0x13dc,	// (0x00006bff) grid_highlight_pane_cp70_ParamLimits

0x13dc,	// (0x00006bff) grid_highlight_pane_cp70

0xaeb7,	// (0x000106da) set_content_pane_g1

0xc449,	// (0x00011c6c) status_small_volume_pane

0x9ca6,	// (0x0000f4c9) status_small_volume_pane_g1

0x9cae,	// (0x0000f4d1) volume_small2_pane

0x9cb7,	// (0x0000f4da) volume_small2_pane_g1

0x9cc0,	// (0x0000f4e3) volume_small2_pane_g2

0x9cc9,	// (0x0000f4ec) volume_small2_pane_g3

0x9cd2,	// (0x0000f4f5) volume_small2_pane_g4

0x9cdb,	// (0x0000f4fe) volume_small2_pane_g5

0x9ce4,	// (0x0000f507) volume_small2_pane_g6

0x9ced,	// (0x0000f510) volume_small2_pane_g7

0x9cf6,	// (0x0000f519) volume_small2_pane_g8

0x9cff,	// (0x0000f522) volume_small2_pane_g9

0x9d08,	// (0x0000f52b) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x00015458) volume_small2_pane_g

0x09bf,	// (0x000061e2) fep_vkb_top_text_pane_g1_ParamLimits

0x6ecc,	// (0x0000c6ef) fep_vkb_top_text_pane_t1_ParamLimits

0x0ced,	// (0x00006510) popup_preview_fixed_window_g3_ParamLimits

0x0ced,	// (0x00006510) popup_preview_fixed_window_g3

0x60ef,	// (0x0000b912) popup_toolbar_trans_pane

0x693a,	// (0x0000c15d) aid_height_set_list_ParamLimits

0xeb1e,	// (0x00014341) aid_size_parent_ParamLimits

0xd685,	// (0x00012ea8) list_highlight_pane_cp2_ParamLimits

0xaeb7,	// (0x000106da) set_content_pane_g1_ParamLimits

0x6adb,	// (0x0000c2fe) list_single_image_pane_ParamLimits

0x6adb,	// (0x0000c2fe) list_single_image_pane

0x7061,	// (0x0000c884) aid_size_cell_image_ParamLimits

0x7061,	// (0x0000c884) aid_size_cell_image

0x706e,	// (0x0000c891) grid_single_image_pane_ParamLimits

0x706e,	// (0x0000c891) grid_single_image_pane

0xaeb7,	// (0x000106da) list_single_image_pane_g1_ParamLimits

0xaeb7,	// (0x000106da) list_single_image_pane_g1

0xb446,	// (0x00010c69) list_single_image_pane_g2_ParamLimits

0xb446,	// (0x00010c69) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0001546d) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0001546d) list_single_image_pane_g

0xec80,	// (0x000144a3) list_single_image_pane_t1_ParamLimits

0xec80,	// (0x000144a3) list_single_image_pane_t1

0x707a,	// (0x0000c89d) cell_image_list_pane_ParamLimits

0x707a,	// (0x0000c89d) cell_image_list_pane

0x708e,	// (0x0000c8b1) cell_image_list_pane_g1

0x7097,	// (0x0000c8ba) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00015472) cell_image_list_pane_g

0x1491,	// (0x00006cb4) aid_size_cell_tb_trans_pane

0xb420,	// (0x00010c43) bg_tb_trans_pane

0x14a3,	// (0x00006cc6) grid_tb_trans_pane

0xd99d,	// (0x000131c0) bg_tb_trans_pane_g1

0xd9ad,	// (0x000131d0) bg_tb_trans_pane_g2

0xd9a5,	// (0x000131c8) bg_tb_trans_pane_g3

0xd9bd,	// (0x000131e0) bg_tb_trans_pane_g4

0xd9b5,	// (0x000131d8) bg_tb_trans_pane_g5

0xd9dd,	// (0x00013200) bg_tb_trans_pane_g6

0xd9d5,	// (0x000131f8) bg_tb_trans_pane_g7

0xd9c5,	// (0x000131e8) bg_tb_trans_pane_g8

0xd9cd,	// (0x000131f0) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00015477) bg_tb_trans_pane_g

0x14b7,	// (0x00006cda) cell_toolbar_trans_pane_ParamLimits

0x14b7,	// (0x00006cda) cell_toolbar_trans_pane

0x043d,	// (0x00005c60) cell_toolbar_trans_pane_g1

0x6d28,	// (0x0000c54b) list_form2_midp_pane_t1

0x6d36,	// (0x0000c559) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00015314) list_form2_midp_pane_t

0x0096,	// (0x000058b9) scroll_pane_cp51_ParamLimits

0x0297,	// (0x00005aba) form2_midp_wait_pane_g1

0x02a0,	// (0x00005ac3) form2_midp_wait_pane_g2

0x02a9,	// (0x00005acc) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x00015329) form2_midp_wait_pane_g

0xa70a,	// (0x0000ff2d) list_highlight_pane_cp21_ParamLimits

0x02c9,	// (0x00005aec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x02d8,	// (0x00005afb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeb79,	// (0x0001439c) list_single_2graphic_im_pane_ParamLimits

0xeb79,	// (0x0001439c) list_single_2graphic_im_pane

0x70a0,	// (0x0000c8c3) list_single_2graphic_im_pane_g1_ParamLimits

0x70a0,	// (0x0000c8c3) list_single_2graphic_im_pane_g1

0x70b1,	// (0x0000c8d4) list_single_2graphic_im_pane_g2_ParamLimits

0x70b1,	// (0x0000c8d4) list_single_2graphic_im_pane_g2

0x70bd,	// (0x0000c8e0) list_single_2graphic_im_pane_g3_ParamLimits

0x70bd,	// (0x0000c8e0) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0001548a) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0001548a) list_single_2graphic_im_pane_g

0x70d1,	// (0x0000c8f4) list_single_2graphic_im_pane_t1_ParamLimits

0x70d1,	// (0x0000c8f4) list_single_2graphic_im_pane_t1

0x0cf9,	// (0x0000651c) list_single_graphic_2heading_pane_fp_ParamLimits

0x0cf9,	// (0x0000651c) list_single_graphic_2heading_pane_fp

0x0d50,	// (0x00006573) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0d50,	// (0x00006573) list_single_graphic_2heading_pane_fp_g1

0x0d0d,	// (0x00006530) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x0d0d,	// (0x00006530) list_single_graphic_2heading_pane_fp_g2

0xb0b8,	// (0x000108db) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb0b8,	// (0x000108db) list_single_graphic_2heading_pane_fp_g3

0x0d19,	// (0x0000653c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0d19,	// (0x0000653c) list_single_graphic_2heading_pane_fp_g4

0x0d2d,	// (0x00006550) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x0d2d,	// (0x00006550) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x000153b1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x000153b1) list_single_graphic_2heading_pane_fp_g

0x154b,	// (0x00006d6e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x154b,	// (0x00006d6e) list_single_graphic_2heading_pane_fp_t1

0x0d88,	// (0x000065ab) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0d88,	// (0x000065ab) list_single_graphic_2heading_pane_fp_t2

0x1561,	// (0x00006d84) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1561,	// (0x00006d84) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00015493) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00015493) list_single_graphic_2heading_pane_fp_t

0x0660,	// (0x00005e83) fep_hwr_write_pane_g5_ParamLimits

0x0660,	// (0x00005e83) fep_hwr_write_pane_g5

0x066c,	// (0x00005e8f) fep_hwr_write_pane_g6_ParamLimits

0x066c,	// (0x00005e8f) fep_hwr_write_pane_g6

0x11e2,	// (0x00006a05) eswt_shell_pane_ParamLimits

0xdab3,	// (0x000132d6) bg_popup_window_pane_cp18_ParamLimits

0xea37,	// (0x0001425a) heading_pane_cp70

0x12ff,	// (0x00006b22) popup_eswt_tasktip_window_t1_ParamLimits

0x618a,	// (0x0000b9ad) aid_touch_tab_arrow_left

0x619e,	// (0x0000b9c1) aid_touch_tab_arrow_right

0x4e68,	// (0x0000a68b) title_pane_g3_ParamLimits

0x4e68,	// (0x0000a68b) title_pane_g3

0xb31e,	// (0x00010b41) set_value_pane_g1

0x60ef,	// (0x0000b912) popup_toolbar_trans_pane_ParamLimits

0x1491,	// (0x00006cb4) aid_size_cell_tb_trans_pane_ParamLimits

0xb420,	// (0x00010c43) bg_tb_trans_pane_ParamLimits

0x14a3,	// (0x00006cc6) grid_tb_trans_pane_ParamLimits

0xa9b1,	// (0x000101d4) cont_note_pane_ParamLimits

0xa9b1,	// (0x000101d4) cont_note_pane

0xad11,	// (0x00010534) cont_snote2_single_text_pane_ParamLimits

0xad11,	// (0x00010534) cont_snote2_single_text_pane

0xad11,	// (0x00010534) cont_snote2_single_graphic_pane_ParamLimits

0xad11,	// (0x00010534) cont_snote2_single_graphic_pane

0xdf46,	// (0x00013769) cont_note_wait_pane_ParamLimits

0xdf46,	// (0x00013769) cont_note_wait_pane

0xdf46,	// (0x00013769) cont_note_image_pane_ParamLimits

0xdf46,	// (0x00013769) cont_note_image_pane

0x1577,	// (0x00006d9a) popup_note2_window_g1_ParamLimits

0x1577,	// (0x00006d9a) popup_note2_window_g1

0x15a8,	// (0x00006dcb) popup_note2_window_t1_ParamLimits

0x15a8,	// (0x00006dcb) popup_note2_window_t1

0x15ed,	// (0x00006e10) popup_note2_window_t2_ParamLimits

0x15ed,	// (0x00006e10) popup_note2_window_t2

0x1632,	// (0x00006e55) popup_note2_window_t3_ParamLimits

0x1632,	// (0x00006e55) popup_note2_window_t3

0x1677,	// (0x00006e9a) popup_note2_window_t4_ParamLimits

0x1677,	// (0x00006e9a) popup_note2_window_t4

0xaa61,	// (0x00010284) popup_note2_window_t5_ParamLimits

0xaa61,	// (0x00010284) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001549f) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001549f) popup_note2_window_t

0x16a6,	// (0x00006ec9) popup_note2_image_window_g1_ParamLimits

0x16a6,	// (0x00006ec9) popup_note2_image_window_g1

0x16b2,	// (0x00006ed5) popup_note2_image_window_g2_ParamLimits

0x16b2,	// (0x00006ed5) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x000154aa) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x000154aa) popup_note2_image_window_g

0x16c4,	// (0x00006ee7) popup_note2_image_window_t1_ParamLimits

0x16c4,	// (0x00006ee7) popup_note2_image_window_t1

0x16dc,	// (0x00006eff) popup_note2_image_window_t2_ParamLimits

0x16dc,	// (0x00006eff) popup_note2_image_window_t2

0x16f4,	// (0x00006f17) popup_note2_image_window_t3_ParamLimits

0x16f4,	// (0x00006f17) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x000154af) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x000154af) popup_note2_image_window_t

0xdf54,	// (0x00013777) popup_note2_wait_window_g1_ParamLimits

0xdf54,	// (0x00013777) popup_note2_wait_window_g1

0xdf60,	// (0x00013783) popup_note2_wait_window_g2_ParamLimits

0xdf60,	// (0x00013783) popup_note2_wait_window_g2

0xdf6c,	// (0x0001378f) popup_note2_wait_window_g3_ParamLimits

0xdf6c,	// (0x0001378f) popup_note2_wait_window_g3

0x0002,

0xf866,	// (0x00015089) popup_note2_wait_window_g_ParamLimits

0xf866,	// (0x00015089) popup_note2_wait_window_g

0x1710,	// (0x00006f33) popup_note2_wait_window_t1_ParamLimits

0x1710,	// (0x00006f33) popup_note2_wait_window_t1

0x172e,	// (0x00006f51) popup_note2_wait_window_t2_ParamLimits

0x172e,	// (0x00006f51) popup_note2_wait_window_t2

0x174c,	// (0x00006f6f) popup_note2_wait_window_t3_ParamLimits

0x174c,	// (0x00006f6f) popup_note2_wait_window_t3

0x175e,	// (0x00006f81) popup_note2_wait_window_t4_ParamLimits

0x175e,	// (0x00006f81) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x000154b6) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x000154b6) popup_note2_wait_window_t

0x1770,	// (0x00006f93) wait_bar2_pane_ParamLimits

0x1770,	// (0x00006f93) wait_bar2_pane

0x1788,	// (0x00006fab) popup_snote2_single_text_window_g1_ParamLimits

0x1788,	// (0x00006fab) popup_snote2_single_text_window_g1

0x17b0,	// (0x00006fd3) popup_snote2_single_text_window_t1_ParamLimits

0x17b0,	// (0x00006fd3) popup_snote2_single_text_window_t1

0x17fc,	// (0x0000701f) popup_snote2_single_text_window_t2_ParamLimits

0x17fc,	// (0x0000701f) popup_snote2_single_text_window_t2

0x1848,	// (0x0000706b) popup_snote2_single_text_window_t3_ParamLimits

0x1848,	// (0x0000706b) popup_snote2_single_text_window_t3

0x1889,	// (0x000070ac) popup_snote2_single_text_window_t4_ParamLimits

0x1889,	// (0x000070ac) popup_snote2_single_text_window_t4

0x18bf,	// (0x000070e2) popup_snote2_single_text_window_t5_ParamLimits

0x18bf,	// (0x000070e2) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x000154bf) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x000154bf) popup_snote2_single_text_window_t

0x18ea,	// (0x0000710d) popup_snote2_single_graphic_window_g1_ParamLimits

0x18ea,	// (0x0000710d) popup_snote2_single_graphic_window_g1

0x1912,	// (0x00007135) popup_snote2_single_graphic_window_g2_ParamLimits

0x1912,	// (0x00007135) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x000154ca) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x000154ca) popup_snote2_single_graphic_window_g

0x193a,	// (0x0000715d) popup_snote2_single_graphic_window_t1_ParamLimits

0x193a,	// (0x0000715d) popup_snote2_single_graphic_window_t1

0x1986,	// (0x000071a9) popup_snote2_single_graphic_window_t2_ParamLimits

0x1986,	// (0x000071a9) popup_snote2_single_graphic_window_t2

0x1848,	// (0x0000706b) popup_snote2_single_graphic_window_t3_ParamLimits

0x1848,	// (0x0000706b) popup_snote2_single_graphic_window_t3

0x1889,	// (0x000070ac) popup_snote2_single_graphic_window_t4_ParamLimits

0x1889,	// (0x000070ac) popup_snote2_single_graphic_window_t4

0x18bf,	// (0x000070e2) popup_snote2_single_graphic_window_t5_ParamLimits

0x18bf,	// (0x000070e2) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x000154cf) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x000154cf) popup_snote2_single_graphic_window_t

0xf551,	// (0x00014d74) clock_nsta_pane_cp2_t1

0xf551,	// (0x00014d74) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x000152ea) clock_nsta_pane_cp2_t

0xb43a,	// (0x00010c5d) form_field_data_wide_pane_g1_ParamLimits

0xaeb7,	// (0x000106da) form_field_data_wide_pane_g2_ParamLimits

0xaeb7,	// (0x000106da) form_field_data_wide_pane_g2

0xb446,	// (0x00010c69) form_field_data_wide_pane_g3_ParamLimits

0xb446,	// (0x00010c69) form_field_data_wide_pane_g3

0x0002,

0xf6b0,	// (0x00014ed3) form_field_data_wide_pane_g_ParamLimits

0xf6b0,	// (0x00014ed3) form_field_data_wide_pane_g

0x6c63,	// (0x0000c486) grid_touch_3_pane_ParamLimits

0x6c63,	// (0x0000c486) grid_touch_3_pane

0x7102,	// (0x0000c925) cell_touch_3_pane_ParamLimits

0x7102,	// (0x0000c925) cell_touch_3_pane

0x043d,	// (0x00005c60) cell_touch_3_pane_g1

0x043d,	// (0x00005c60) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001536f) cell_touch_3_pane_g

0xaa93,	// (0x000102b6) cont_query_data_pane

0xaa9b,	// (0x000102be) cont_query_data_pane_cp1

0x19ff,	// (0x00007222) button_value_adjust_pane_cp7

0x1a07,	// (0x0000722a) query_popup_pane_cp3

0xbc89,	// (0x000114ac) bg_popup_sub_pane_cp22_ParamLimits

0x908a,	// (0x0000e8ad) navi_navi_volume_pane_cp2

0x90a2,	// (0x0000e8c5) popup_side_volume_key_window_g2

0x90ae,	// (0x0000e8d1) popup_side_volume_key_window_g3

0x0002,

0xf742,	// (0x00014f65) popup_side_volume_key_window_g

0x90c8,	// (0x0000e8eb) popup_side_volume_key_window_t2

0x0001,

0xf749,	// (0x00014f6c) popup_side_volume_key_window_t

0xbfa5,	// (0x000117c8) popup_side_volume_key_window_ParamLimits

0x530b,	// (0x0000ab2e) list_double_graphic_pane_g4_ParamLimits

0x530b,	// (0x0000ab2e) list_double_graphic_pane_g4

0x6ab3,	// (0x0000c2d6) list_single_2heading_msg_pane_ParamLimits

0x6ab3,	// (0x0000c2d6) list_single_2heading_msg_pane

0x7149,	// (0x0000c96c) list_single_2heading_msg_pane_g1_ParamLimits

0x7149,	// (0x0000c96c) list_single_2heading_msg_pane_g1

0x7155,	// (0x0000c978) list_single_2heading_msg_pane_g2_ParamLimits

0x7155,	// (0x0000c978) list_single_2heading_msg_pane_g2

0x7168,	// (0x0000c98b) list_single_2heading_msg_pane_g3_ParamLimits

0x7168,	// (0x0000c98b) list_single_2heading_msg_pane_g3

0x1a58,	// (0x0000727b) list_single_2heading_msg_pane_g4_ParamLimits

0x1a58,	// (0x0000727b) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x000154da) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x000154da) list_single_2heading_msg_pane_g

0x7174,	// (0x0000c997) list_single_2heading_msg_pane_t1_ParamLimits

0x7174,	// (0x0000c997) list_single_2heading_msg_pane_t1

0x719c,	// (0x0000c9bf) list_single_2heading_msg_pane_t2_ParamLimits

0x719c,	// (0x0000c9bf) list_single_2heading_msg_pane_t2

0x7207,	// (0x0000ca2a) list_single_2heading_msg_pane_t3_ParamLimits

0x7207,	// (0x0000ca2a) list_single_2heading_msg_pane_t3

0x1b00,	// (0x00007323) list_single_2heading_msg_pane_t4_ParamLimits

0x1b00,	// (0x00007323) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x000154e3) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x000154e3) list_single_2heading_msg_pane_t

0xa65e,	// (0x0000fe81) title_pane_g4_ParamLimits

0xa65e,	// (0x0000fe81) title_pane_g4

0x8eda,	// (0x0000e6fd) title_pane_stacon_g3_ParamLimits

0x8eda,	// (0x0000e6fd) title_pane_stacon_g3

0x150e,	// (0x00006d31) list_single_2graphic_im_pane_g4_ParamLimits

0x150e,	// (0x00006d31) list_single_2graphic_im_pane_g4

0xe84d,	// (0x00014070) popup_side_volume_key_window_cp

0xed67,	// (0x0001458a) main_idle_act2_pane_t1

0x9490,	// (0x0000ecb3) toolbar_button_pane_g10

0x51f8,	// (0x0000aa1b) popup_toolbar_window_cp1

0xf542,	// (0x00014d65) clock_nsta_pane_cp_t1

0xf542,	// (0x00014d65) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x000152e5) clock_nsta_pane_cp_t

0x908a,	// (0x0000e8ad) navi_navi_volume_pane_cp2_ParamLimits

0x9096,	// (0x0000e8b9) popup_side_volume_key_window_g1_ParamLimits

0x90a2,	// (0x0000e8c5) popup_side_volume_key_window_g2_ParamLimits

0x90ae,	// (0x0000e8d1) popup_side_volume_key_window_g3_ParamLimits

0xf742,	// (0x00014f65) popup_side_volume_key_window_g_ParamLimits

0x9926,	// (0x0000f149) fep_hwr_aid_pane

0x99c7,	// (0x0000f1ea) bg_fep_hwr_top_pane_g4_ParamLimits

0x0579,	// (0x00005d9c) fep_hwr_top_pane_g1_ParamLimits

0x0567,	// (0x00005d8a) fep_hwr_top_pane_g2_ParamLimits

0x99e7,	// (0x0000f20a) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0001533a) fep_hwr_top_pane_g_ParamLimits

0x99fc,	// (0x0000f21f) fep_hwr_top_text_pane_ParamLimits

0xe64d,	// (0x00013e70) aid_touch_tab_arrow_arrow_2

0xe656,	// (0x00013e79) aid_touch_tab_arrow_left_2

0x993a,	// (0x0000f15d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x996d,	// (0x0000f190) fep_hwr_prediction_pane

0x07ef,	// (0x00006012) fep_vkb_prediction_pane

0x6eac,	// (0x0000c6cf) fep_vkb_side_pane_g3_ParamLimits

0x6eac,	// (0x0000c6cf) fep_vkb_side_pane_g3

0x9b6b,	// (0x0000f38e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9bd5,	// (0x0000f3f8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9be2,	// (0x0000f405) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x000153e9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x9d11,	// (0x0000f534) fep_hwr_prediction_pane_g1

0x9d1b,	// (0x0000f53e) fep_hwr_prediction_pane_g2

0x9d23,	// (0x0000f546) fep_hwr_prediction_pane_g3

0x9d2b,	// (0x0000f54e) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x000154ec) fep_hwr_prediction_pane_g

0x1b25,	// (0x00007348) fep_vkb_prediction_pane_g1

0x1b47,	// (0x0000736a) fep_vkb_prediction_pane_g2

0x1b4f,	// (0x00007372) fep_vkb_prediction_pane_g3

0x1b57,	// (0x0000737a) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x000154f5) fep_vkb_prediction_pane_g

0x975e,	// (0x0000ef81) slider_set_pane_g3

0x9772,	// (0x0000ef95) slider_set_pane_g4

0x978a,	// (0x0000efad) slider_set_pane_g5

0x975e,	// (0x0000ef81) slider_set_pane_g6

0xd250,	// (0x00012a73) slider_set_pane_g7

0xeb41,	// (0x00014364) slider_form_pane_g3

0xeb4a,	// (0x0001436d) slider_form_pane_g4

0xeb52,	// (0x00014375) slider_form_pane_g5

0xeb41,	// (0x00014364) slider_form_pane_g6

0x6a6c,	// (0x0000c28f) slider_form_pane_g7

0xefc2,	// (0x000147e5) slider_set_pane_vc_g3

0xefcb,	// (0x000147ee) slider_set_pane_vc_g4

0xefd4,	// (0x000147f7) slider_set_pane_vc_g5

0xefc2,	// (0x000147e5) slider_set_pane_vc_g6

0xefdd,	// (0x00014800) slider_set_pane_vc_g7

0xefc2,	// (0x000147e5) slider_form_pane_vc_g1

0xefcb,	// (0x000147ee) slider_form_pane_vc_g2

0xefd4,	// (0x000147f7) slider_form_pane_vc_g3

0xefc2,	// (0x000147e5) slider_form_pane_vc_g4

0xf2f8,	// (0x00014b1b) slider_form_pane_vc_g5

0x0004,

0xfaa8,	// (0x000152cb) slider_form_pane_vc_g

0xa539,	// (0x0000fd5c) main_idle_act3_pane

0x1b5f,	// (0x00007382) ai3_links_pane

0x7275,	// (0x0000ca98) popup_ai3_data_window_ParamLimits

0x7275,	// (0x0000ca98) popup_ai3_data_window

0xa539,	// (0x0000fd5c) grid_ai3_links_pane

0x728d,	// (0x0000cab0) cell_ai3_links_pane_ParamLimits

0x728d,	// (0x0000cab0) cell_ai3_links_pane

0x1b94,	// (0x000073b7) bg_popup_sub_pane_cp11

0x1ba1,	// (0x000073c4) cell_ai3_links_pane_g1

0xa539,	// (0x0000fd5c) bg_popup_sub_pane_cp12

0x1bc6,	// (0x000073e9) heading_ai3_data_pane

0x1bce,	// (0x000073f1) list_ai3_gene_pane

0x1bda,	// (0x000073fd) popup_ai3_data_window_g1

0x1be2,	// (0x00007405) heading_ai3_data_pane_g1

0x1bea,	// (0x0000740d) heading_ai3_data_pane_t1

0x1bf8,	// (0x0000741b) list_double_ai3_gene_pane_ParamLimits

0x1bf8,	// (0x0000741b) list_double_ai3_gene_pane

0x1c05,	// (0x00007428) list_single_ai3_gene_pane_ParamLimits

0x1c05,	// (0x00007428) list_single_ai3_gene_pane

0x0402,	// (0x00005c25) list_highlight_pane_cp7_ParamLimits

0x0402,	// (0x00005c25) list_highlight_pane_cp7

0x1c12,	// (0x00007435) list_single_a13_gene_pane_t1_ParamLimits

0x1c12,	// (0x00007435) list_single_a13_gene_pane_t1

0x1c29,	// (0x0000744c) list_single_ai3_gene_pane_g1

0x1c32,	// (0x00007455) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x000154fe) list_single_ai3_gene_pane_g

0x1c3a,	// (0x0000745d) list_double_ai3_gene_pane_g1_ParamLimits

0x1c3a,	// (0x0000745d) list_double_ai3_gene_pane_g1

0x1c46,	// (0x00007469) list_double_ai3_gene_pane_t1_ParamLimits

0x1c46,	// (0x00007469) list_double_ai3_gene_pane_t1

0x1c62,	// (0x00007485) list_double_ai3_gene_pane_t2_ParamLimits

0x1c62,	// (0x00007485) list_double_ai3_gene_pane_t2

0x1c77,	// (0x0000749a) list_double_ai3_gene_pane_t3_ParamLimits

0x1c77,	// (0x0000749a) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x00015503) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x00015503) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1a18,	// (0x0000723b) aid_size_min_col_2

0x7135,	// (0x0000c958) aid_size_min_msg_ParamLimits

0x7135,	// (0x0000c958) aid_size_min_msg

0x6ec0,	// (0x0000c6e3) fep_vkb_top_text_pane_g2_ParamLimits

0x6ec0,	// (0x0000c6e3) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0001536a) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0001536a) fep_vkb_top_text_pane_g

0xa539,	// (0x0000fd5c) main_hc_apps_shell_pane

0x1c94,	// (0x000074b7) grid_hc_apps_pane_ParamLimits

0x1c94,	// (0x000074b7) grid_hc_apps_pane

0x1ca3,	// (0x000074c6) list_hc_apps_pane

0x1cab,	// (0x000074ce) scroll_pane_cp37_ParamLimits

0x1cab,	// (0x000074ce) scroll_pane_cp37

0x72a3,	// (0x0000cac6) cell_hc_apps_pane_ParamLimits

0x72a3,	// (0x0000cac6) cell_hc_apps_pane

0x733d,	// (0x0000cb60) cell_hc_apps_pane_g1_ParamLimits

0x733d,	// (0x0000cb60) cell_hc_apps_pane_g1

0x1d72,	// (0x00007595) cell_hc_apps_pane_g2_ParamLimits

0x1d72,	// (0x00007595) cell_hc_apps_pane_g2

0x1d8e,	// (0x000075b1) cell_hc_apps_pane_g3_ParamLimits

0x1d8e,	// (0x000075b1) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001550a) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001550a) cell_hc_apps_pane_g

0x736a,	// (0x0000cb8d) cell_hc_apps_pane_t1_ParamLimits

0x736a,	// (0x0000cb8d) cell_hc_apps_pane_t1

0xa9b1,	// (0x000101d4) grid_highlight_pane_cp10_ParamLimits

0xa9b1,	// (0x000101d4) grid_highlight_pane_cp10

0x73a8,	// (0x0000cbcb) list_single_hc_apps_pane_ParamLimits

0x73a8,	// (0x0000cbcb) list_single_hc_apps_pane

0x73d4,	// (0x0000cbf7) list_single_hc_apps_pane_g1

0x73ed,	// (0x0000cc10) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x00015511) list_single_hc_apps_pane_g

0x7406,	// (0x0000cc29) list_single_hc_apps_pane_g2_copy1

0x7422,	// (0x0000cc45) list_single_hc_apps_pane_t1

0xa70a,	// (0x0000ff2d) bg_set_opt_pane_cp_ParamLimits

0x8e28,	// (0x0000e64b) setting_slider_pane_t1_ParamLimits

0xcf17,	// (0x0001273a) setting_slider_pane_t2_ParamLimits

0xcf30,	// (0x00012753) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00014dc5) setting_slider_pane_t_ParamLimits

0x8e6e,	// (0x0000e691) slider_set_pane_ParamLimits

0x930b,	// (0x0000eb2e) control_pane_g5_ParamLimits

0x930b,	// (0x0000eb2e) control_pane_g5

0xea7e,	// (0x000142a1) slider_set_pane_g1_ParamLimits

0x9752,	// (0x0000ef75) slider_set_pane_g2_ParamLimits

0x975e,	// (0x0000ef81) slider_set_pane_g3_ParamLimits

0x9772,	// (0x0000ef95) slider_set_pane_g4_ParamLimits

0x978a,	// (0x0000efad) slider_set_pane_g5_ParamLimits

0x975e,	// (0x0000ef81) slider_set_pane_g6_ParamLimits

0xd250,	// (0x00012a73) slider_set_pane_g7_ParamLimits

0xf982,	// (0x000151a5) slider_set_pane_g_ParamLimits

0xa70a,	// (0x0000ff2d) navi_icon_text_pane_ParamLimits

0x615c,	// (0x0000b97f) aid_fill_nsta_2_ParamLimits

0x618a,	// (0x0000b9ad) aid_touch_tab_arrow_left_ParamLimits

0x619e,	// (0x0000b9c1) aid_touch_tab_arrow_right_ParamLimits

0x623a,	// (0x0000ba5d) clock_nsta_pane_ParamLimits

0xe62f,	// (0x00013e52) navi_icon_pane_g1_ParamLimits

0xe63b,	// (0x00013e5e) navi_text_pane_t1_ParamLimits

0x000c,	// (0x0000582f) navi_icon_text_pane_g1_ParamLimits

0x0018,	// (0x0000583b) navi_icon_text_pane_t1_ParamLimits

0x73d4,	// (0x0000cbf7) list_single_hc_apps_pane_g1_ParamLimits

0x73ed,	// (0x0000cc10) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x00015511) list_single_hc_apps_pane_g_ParamLimits

0x7406,	// (0x0000cc29) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7422,	// (0x0000cc45) list_single_hc_apps_pane_t1_ParamLimits

0xcea4,	// (0x000126c7) popup_toolbar2_fixed_window_ParamLimits

0xcea4,	// (0x000126c7) popup_toolbar2_fixed_window

0x60e7,	// (0x0000b90a) popup_toolbar2_float_window

0xa539,	// (0x0000fd5c) bg_popup_sub_pane_cp27

0x1e9a,	// (0x000076bd) grid_toolbar2_float_pane

0xa539,	// (0x0000fd5c) bg_popup_sub_pane_cp26

0x1e9a,	// (0x000076bd) grid_toolbar2_fixed_pane

0x7450,	// (0x0000cc73) cell_toolbar2_fixed_pane_ParamLimits

0x7450,	// (0x0000cc73) cell_toolbar2_fixed_pane

0x746b,	// (0x0000cc8e) cell_toolbar2_fixed_pane_g1

0x1ebc,	// (0x000076df) toolbar2_fixed_button_pane

0xd99d,	// (0x000131c0) toolbar2_fixed_button_pane_g1

0xd9ad,	// (0x000131d0) toolbar2_fixed_button_pane_g2

0xd9a5,	// (0x000131c8) toolbar2_fixed_button_pane_g3

0xd9bd,	// (0x000131e0) toolbar2_fixed_button_pane_g4

0xd9b5,	// (0x000131d8) toolbar2_fixed_button_pane_g5

0xd9c5,	// (0x000131e8) toolbar2_fixed_button_pane_g6

0xd9cd,	// (0x000131f0) toolbar2_fixed_button_pane_g7

0xd9dd,	// (0x00013200) toolbar2_fixed_button_pane_g8

0xd9d5,	// (0x000131f8) toolbar2_fixed_button_pane_g9

0x0008,

0xf884,	// (0x000150a7) toolbar2_fixed_button_pane_g

0x1ec4,	// (0x000076e7) cell_toolbar2_float_pane_ParamLimits

0x1ec4,	// (0x000076e7) cell_toolbar2_float_pane

0x1ed5,	// (0x000076f8) cell_toolbar2_float_pane_g1

0x1ebc,	// (0x000076df) toolbar2_fixed_button_pane_cp

0x6e75,	// (0x0000c698) fep_vkb_accented_list_pane_ParamLimits

0x6e75,	// (0x0000c698) fep_vkb_accented_list_pane

0x9b4b,	// (0x0000f36e) bg_popup_fep_shadow_pane_g9

0xc1ad,	// (0x000119d0) bg_popup_fep_shadow_pane_cp3

0xb6ce,	// (0x00010ef1) list_accented_list_pane

0x1ede,	// (0x00007701) list_single_accented_list_pane_ParamLimits

0x1ede,	// (0x00007701) list_single_accented_list_pane

0xc1ad,	// (0x000119d0) list_highlight_pane_cp10

0x1eef,	// (0x00007712) list_single_accented_list_pane_t1

0x6029,	// (0x0000b84c) popup_slider_window_ParamLimits

0x6029,	// (0x0000b84c) popup_slider_window

0x1a0f,	// (0x00007232) aid_indentation_list_msg

0x754a,	// (0x0000cd6d) bg_popup_window_pane_cp19

0x1ff3,	// (0x00007816) popup_slider_window_g1

0x200f,	// (0x00007832) popup_slider_window_g2

0x202b,	// (0x0000784e) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x00015516) popup_slider_window_g

0x2087,	// (0x000078aa) popup_slider_window_t1

0x20f9,	// (0x0000791c) small_volume_slider_vertical_pane

0x043d,	// (0x00005c60) small_volume_slider_vertical_pane_g1

0x043d,	// (0x00005c60) small_volume_slider_vertical_pane_g2

0x2115,	// (0x00007938) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x00015528) small_volume_slider_vertical_pane_g

0xce28,	// (0x0001264b) area_side_right_pane_ParamLimits

0xce28,	// (0x0001264b) area_side_right_pane

0xd2b3,	// (0x00012ad6) aid_size_side_button_ParamLimits

0xd2b3,	// (0x00012ad6) aid_size_side_button

0xd2cc,	// (0x00012aef) grid_sctrl_middle_pane_ParamLimits

0xd2cc,	// (0x00012aef) grid_sctrl_middle_pane

0x9d63,	// (0x0000f586) sctrl_sk_bottom_pane

0x9d74,	// (0x0000f597) sctrl_sk_top_pane

0x9d86,	// (0x0000f5a9) aid_touch_sctrl_top

0x9d93,	// (0x0000f5b6) bg_sctrl_sk_pane_ParamLimits

0x9d93,	// (0x0000f5b6) bg_sctrl_sk_pane

0x9da1,	// (0x0000f5c4) sctrl_sk_top_pane_g1

0x9dae,	// (0x0000f5d1) sctrl_sk_top_pane_t1

0x9d86,	// (0x0000f5a9) aid_touch_sctrl_bottom

0x9d93,	// (0x0000f5b6) bg_sctrl_sk_pane_cp_ParamLimits

0x9d93,	// (0x0000f5b6) bg_sctrl_sk_pane_cp

0x9dc9,	// (0x0000f5ec) sctrl_sk_bottom_pane_g1

0x9dae,	// (0x0000f5d1) sctrl_sk_bottom_pane_t1

0xd2e2,	// (0x00012b05) cell_sctrl_middle_pane_ParamLimits

0xd2e2,	// (0x00012b05) cell_sctrl_middle_pane

0xd2f3,	// (0x00012b16) aid_touch_sctrl_middle_ParamLimits

0xd2f3,	// (0x00012b16) aid_touch_sctrl_middle

0xd300,	// (0x00012b23) bg_sctrl_middle_pane_ParamLimits

0xd300,	// (0x00012b23) bg_sctrl_middle_pane

0xa3d1,	// (0x0000fbf4) cell_sctrl_middle_pane_g1_ParamLimits

0xa3d1,	// (0x0000fbf4) cell_sctrl_middle_pane_g1

0xd30e,	// (0x00012b31) cell_sctrl_middle_pane_g2_ParamLimits

0xd30e,	// (0x00012b31) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x00015534) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x00015534) cell_sctrl_middle_pane_g

0xd99d,	// (0x000131c0) bg_sctrl_middle_pane_g1

0xd9a5,	// (0x000131c8) bg_sctrl_middle_pane_g2

0xd9ad,	// (0x000131d0) bg_sctrl_middle_pane_g3

0xd9b5,	// (0x000131d8) bg_sctrl_middle_pane_g4

0xd9bd,	// (0x000131e0) bg_sctrl_middle_pane_g5

0xd9c5,	// (0x000131e8) bg_sctrl_middle_pane_g6

0xd9cd,	// (0x000131f0) bg_sctrl_middle_pane_g7

0xd9d5,	// (0x000131f8) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x00015539) bg_sctrl_middle_pane_g

0xd9dd,	// (0x00013200) bg_sctrl_middle_pane_g8_copy1

0xd99d,	// (0x000131c0) bg_sctrl_sk_pane_g1

0xd9ad,	// (0x000131d0) bg_sctrl_sk_pane_g2

0xd9a5,	// (0x000131c8) bg_sctrl_sk_pane_g3

0x0008,

0xf884,	// (0x000150a7) bg_sctrl_sk_pane_g

0xae33,	// (0x00010656) aid_size_touch_scroll_bar

0xd9bd,	// (0x000131e0) bg_sctrl_sk_pane_g4

0xd9b5,	// (0x000131d8) bg_sctrl_sk_pane_g5

0xd9c5,	// (0x000131e8) bg_sctrl_sk_pane_g6

0xd9cd,	// (0x000131f0) bg_sctrl_sk_pane_g7

0xd9dd,	// (0x00013200) bg_sctrl_sk_pane_g8

0xd9d5,	// (0x000131f8) bg_sctrl_sk_pane_g9

0xd713,	// (0x00012f36) popup_fep_china_hwr2_fs_candidate_window

0x5c24,	// (0x0000b447) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5c24,	// (0x0000b447) popup_fep_china_hwr2_fs_control_window

0x9b6b,	// (0x0000f38e) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001552f) sctrl_sk_top_pane_g

0x766a,	// (0x0000ce8d) aid_fep_china_hwr2_fs_cell_ParamLimits

0x766a,	// (0x0000ce8d) aid_fep_china_hwr2_fs_cell

0x767e,	// (0x0000cea1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x767e,	// (0x0000cea1) bg_popup_fep_shadow_pane_cp4

0x7695,	// (0x0000ceb8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x7695,	// (0x0000ceb8) bg_popup_fep_shadow_pane_cp5

0x76a7,	// (0x0000ceca) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x76a7,	// (0x0000ceca) popup_fep_china_hwr2_fs_control_bar_grid

0x76bb,	// (0x0000cede) popup_fep_china_hwr2_fs_control_funtion_grid

0x2243,	// (0x00007a66) aid_fep_china_hwr2_fs_candi_cell

0xa539,	// (0x0000fd5c) bg_popup_fep_shadow_pane_cp6

0x224d,	// (0x00007a70) popup_fep_china_hwr2_fs_candidate_grid

0x76c3,	// (0x0000cee6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x76c3,	// (0x0000cee6) cell_fep_china_hwr2_fs_funtion_grid

0x043d,	// (0x00005c60) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x226d,	// (0x00007a90) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x226d,	// (0x00007a90) cell_fep_china_hwr2_fs_funtion_grid_g1

0x227b,	// (0x00007a9e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x227b,	// (0x00007a9e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001554a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001554a) cell_fep_china_hwr2_fs_funtion_grid_g

0x76db,	// (0x0000cefe) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x76db,	// (0x0000cefe) cell_fep_china_hwr2_fs_funtion_grid_t1

0x76f0,	// (0x0000cf13) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x76f0,	// (0x0000cf13) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001554f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001554f) cell_fep_china_hwr2_fs_funtion_grid_t

0x22c2,	// (0x00007ae5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x22ca,	// (0x00007aed) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x22d2,	// (0x00007af5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x00015554) popup_fep_china_hwr2_fs_control_bar_grid_g

0x22da,	// (0x00007afd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x22da,	// (0x00007afd) cell_fep_china_hwr2_fs_candidate_grid

0x22f3,	// (0x00007b16) popup_fep_china_hwr2_fs_candidate_grid_g20

0x22fb,	// (0x00007b1e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x043d,	// (0x00005c60) cell_fep_china_hwr2_fs_candidate_grid_g1

0x043d,	// (0x00005c60) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001536f) cell_fep_china_hwr2_fs_candidate_grid_g

0x2303,	// (0x00007b26) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd802,	// (0x00013025) clock_nsta_pane_cp_24_ParamLimits

0xd802,	// (0x00013025) clock_nsta_pane_cp_24

0xd85f,	// (0x00013082) indicator_nsta_pane_cp_24_ParamLimits

0xd85f,	// (0x00013082) indicator_nsta_pane_cp_24

0xe53a,	// (0x00013d5d) heading_pane_g1

0x0001,

0xf8e9,	// (0x0001510c) heading_pane_g

0x6b8b,	// (0x0000c3ae) grid_sct_catagory_button_pane

0xeb0a,	// (0x0001432d) scroll_pane_cp5_ParamLimits

0x00a2,	// (0x000058c5) button_value_adjust_pane_cp5_ParamLimits

0x00a2,	// (0x000058c5) button_value_adjust_pane_cp5

0x0198,	// (0x000059bb) form2_midp_time_pane_ParamLimits

0x2311,	// (0x00007b34) cell_sct_catagory_button_pane_ParamLimits

0x2311,	// (0x00007b34) cell_sct_catagory_button_pane

0x0402,	// (0x00005c25) bg_button_pane_cp01_ParamLimits

0x0402,	// (0x00005c25) bg_button_pane_cp01

0x043d,	// (0x00005c60) cell_sct_catagory_button_pane_g1

0x6098,	// (0x0000b8bb) popup_tb_extension_window

0x770c,	// (0x0000cf2f) aid_size_cell_ext_ParamLimits

0x770c,	// (0x0000cf2f) aid_size_cell_ext

0xad11,	// (0x00010534) bg_tb_trans_pane_cp1_ParamLimits

0xad11,	// (0x00010534) bg_tb_trans_pane_cp1

0x7732,	// (0x0000cf55) grid_tb_ext_pane_ParamLimits

0x7732,	// (0x0000cf55) grid_tb_ext_pane

0x7768,	// (0x0000cf8b) cell_tb_ext_pane_ParamLimits

0x7768,	// (0x0000cf8b) cell_tb_ext_pane

0x778c,	// (0x0000cfaf) cell_tb_ext_pane_g1_ParamLimits

0x778c,	// (0x0000cfaf) cell_tb_ext_pane_g1

0x239b,	// (0x00007bbe) cell_tb_ext_pane_t1

0xa9b1,	// (0x000101d4) list_highlight_pane_cp11_ParamLimits

0xa9b1,	// (0x000101d4) list_highlight_pane_cp11

0x8d79,	// (0x0000e59c) popup_uni_indicator_window_ParamLimits

0x8d79,	// (0x0000e59c) popup_uni_indicator_window

0xb420,	// (0x00010c43) bg_popup_sub_pane_cp14

0x23b6,	// (0x00007bd9) list_uniindi_pane

0x23c2,	// (0x00007be5) uniindi_top_pane

0xa9b1,	// (0x000101d4) bg_uniindi_top_pane

0x23e1,	// (0x00007c04) uniindi_top_pane_g1

0x23f7,	// (0x00007c1a) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001555b) uniindi_top_pane_g

0x2421,	// (0x00007c44) uniindi_top_pane_t1

0x244b,	// (0x00007c6e) list_single_uniindi_pane_ParamLimits

0x244b,	// (0x00007c6e) list_single_uniindi_pane

0x043d,	// (0x00005c60) bg_uniindi_top_pane_g1

0x245d,	// (0x00007c80) list_single_uniindi_pane_g1

0x2470,	// (0x00007c93) list_single_uniindi_pane_t1

0x8c17,	// (0x0000e43a) control_bg_pane

0x2495,	// (0x00007cb8) bg_sctrl_sk_pane_cp1

0x249e,	// (0x00007cc1) bg_sctrl_sk_pane_cp2

0x24a7,	// (0x00007cca) control_bg_pane_g1

0x24b0,	// (0x00007cd3) control_bg_pane_g2

0x0001,

0xfd41,	// (0x00015564) control_bg_pane_g

0xf4ff,	// (0x00014d22) cell_indicator_nsta_pane_g1_ParamLimits

0x6c96,	// (0x0000c4b9) cell_indicator_nsta_pane_g2_ParamLimits

0xfabd,	// (0x000152e0) cell_indicator_nsta_pane_g_ParamLimits

0x021c,	// (0x00005a3f) form2_midp_time_pane_t1_ParamLimits

0x0498,	// (0x00005cbb) main_idle_act4_pane_ParamLimits

0x0498,	// (0x00005cbb) main_idle_act4_pane

0x6098,	// (0x0000b8bb) popup_tb_extension_window_ParamLimits

0x7752,	// (0x0000cf75) tb_ext_find_pane_ParamLimits

0x7752,	// (0x0000cf75) tb_ext_find_pane

0x24b9,	// (0x00007cdc) ai_gene_pane_1_cp1

0xc2e6,	// (0x00011b09) ai_gene_pane_2_cp1

0x24c1,	// (0x00007ce4) list_single_idle_plugin_calendar_pane

0x24ca,	// (0x00007ced) list_single_idle_plugin_notification_pane

0x24d3,	// (0x00007cf6) list_single_idle_plugin_player_pane

0x77a9,	// (0x0000cfcc) list_single_idle_plugin_shortcut_pane_ParamLimits

0x77a9,	// (0x0000cfcc) list_single_idle_plugin_shortcut_pane

0x77d1,	// (0x0000cff4) main_idle_act4_pane_t1

0x77e7,	// (0x0000d00a) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x00015569) main_idle_act4_pane_t

0x77fd,	// (0x0000d020) middle_sk_idle_act4_pane_ParamLimits

0x77fd,	// (0x0000d020) middle_sk_idle_act4_pane

0x7819,	// (0x0000d03c) popup_clock_digital_analogue_window_cp2

0x783f,	// (0x0000d062) shortcut_wheel_idle_act4_pane_ParamLimits

0x783f,	// (0x0000d062) shortcut_wheel_idle_act4_pane

0x043d,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g1

0x043d,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g2

0x043d,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g3

0x043d,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g4

0x043d,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g5

0x2566,	// (0x00007d89) shortcut_wheel_idle_act4_pane_g6

0x256e,	// (0x00007d91) shortcut_wheel_idle_act4_pane_g7

0x2576,	// (0x00007d99) shortcut_wheel_idle_act4_pane_g8

0x257e,	// (0x00007da1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001556e) shortcut_wheel_idle_act4_pane_g

0x0547,	// (0x00005d6a) middle_sk_idle_act4_pane_g1_ParamLimits

0x0547,	// (0x00005d6a) middle_sk_idle_act4_pane_g1

0x78ba,	// (0x0000d0dd) middle_sk_idle_act4_pane_g2_ParamLimits

0x78ba,	// (0x0000d0dd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x00015591) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x00015591) middle_sk_idle_act4_pane_g

0x78d2,	// (0x0000d0f5) middle_sk_idle_act4_pane_t1_ParamLimits

0x78d2,	// (0x0000d0f5) middle_sk_idle_act4_pane_t1

0x7901,	// (0x0000d124) grid_ai_shortcut_pane_ParamLimits

0x7901,	// (0x0000d124) grid_ai_shortcut_pane

0x791e,	// (0x0000d141) list_highlight_pane_cp16_ParamLimits

0x791e,	// (0x0000d141) list_highlight_pane_cp16

0x792b,	// (0x0000d14e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x792b,	// (0x0000d14e) list_single_idle_plugin_shortcut_pane_g1

0x7937,	// (0x0000d15a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x7937,	// (0x0000d15a) list_single_idle_plugin_shortcut_pane_g2

0x7953,	// (0x0000d176) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x7953,	// (0x0000d176) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x00015596) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x00015596) list_single_idle_plugin_shortcut_pane_g

0x7968,	// (0x0000d18b) cell_ai_shortcut_pane_ParamLimits

0x7968,	// (0x0000d18b) cell_ai_shortcut_pane

0x797e,	// (0x0000d1a1) cell_ai_shortcut_pane_g1_ParamLimits

0x797e,	// (0x0000d1a1) cell_ai_shortcut_pane_g1

0x24b9,	// (0x00007cdc) ai_gene_pane_1_cp2

0x26ab,	// (0x00007ece) ai_gene_pane_2_cp2

0x26b3,	// (0x00007ed6) list_highlight_pane_cp15

0x26bc,	// (0x00007edf) list_single_idle_plugin_calendar_pane_g1

0x26b3,	// (0x00007ed6) list_highlight_pane_cp17

0x26c4,	// (0x00007ee7) list_single_idle_plugin_calendar_pane_g1_copy1

0x26cc,	// (0x00007eef) list_single_idle_plugin_player_pane_g1

0xedf3,	// (0x00014616) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001559d) list_single_idle_plugin_player_pane_g

0x26d4,	// (0x00007ef7) list_single_idle_plugin_player_pane_t1

0x26e2,	// (0x00007f05) list_single_idle_plugin_player_pane_t2

0x26f0,	// (0x00007f13) list_single_idle_plugin_player_pane_t3

0x26fe,	// (0x00007f21) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x000155a2) list_single_idle_plugin_player_pane_t

0x270c,	// (0x00007f2f) wait_bar_pane_cp15

0x2714,	// (0x00007f37) grid_ai_notification_pane

0xedf3,	// (0x00014616) list_single_idle_plugin_notification_pane_g1

0x79a0,	// (0x0000d1c3) cell_ai_notification_pane_ParamLimits

0x79a0,	// (0x0000d1c3) cell_ai_notification_pane

0x272a,	// (0x00007f4d) cell_ai_notification_pane_g1

0x2732,	// (0x00007f55) cell_ai_notification_pane_t1

0x79ad,	// (0x0000d1d0) tb_ext_find_button_pane

0x79b5,	// (0x0000d1d8) tb_ext_find_pane_g1

0x79bd,	// (0x0000d1e0) tb_ext_find_pane_t1

0xbbdb,	// (0x000113fe) tb_ext_find_button_pane_g1

0x275e,	// (0x00007f81) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x000155ab) tb_ext_find_button_pane_g

0x77d1,	// (0x0000cff4) main_idle_act4_pane_t1_ParamLimits

0x77e7,	// (0x0000d00a) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x00015569) main_idle_act4_pane_t_ParamLimits

0x7819,	// (0x0000d03c) popup_clock_digital_analogue_window_cp2_ParamLimits

0x782f,	// (0x0000d052) sat_plugin_idle_act4_pane_ParamLimits

0x782f,	// (0x0000d052) sat_plugin_idle_act4_pane

0x79cb,	// (0x0000d1ee) sat_plugin_idle_act4_pane_t1_ParamLimits

0x79cb,	// (0x0000d1ee) sat_plugin_idle_act4_pane_t1

0x79e3,	// (0x0000d206) sat_plugin_idle_act4_pane_t2_ParamLimits

0x79e3,	// (0x0000d206) sat_plugin_idle_act4_pane_t2

0x79fb,	// (0x0000d21e) sat_plugin_idle_act4_pane_t3_ParamLimits

0x79fb,	// (0x0000d21e) sat_plugin_idle_act4_pane_t3

0x7a13,	// (0x0000d236) sat_plugin_idle_act4_pane_t4_ParamLimits

0x7a13,	// (0x0000d236) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x000155b0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x000155b0) sat_plugin_idle_act4_pane_t

0x8cda,	// (0x0000e4fd) popup_battery_window_ParamLimits

0x8cda,	// (0x0000e4fd) popup_battery_window

0xa9b1,	// (0x000101d4) bg_popup_sub_pane_cp25_ParamLimits

0xa9b1,	// (0x000101d4) bg_popup_sub_pane_cp25

0x27b3,	// (0x00007fd6) popup_battery_window_g1_ParamLimits

0x27b3,	// (0x00007fd6) popup_battery_window_g1

0x27bf,	// (0x00007fe2) popup_battery_window_t1_ParamLimits

0x27bf,	// (0x00007fe2) popup_battery_window_t1

0x27d1,	// (0x00007ff4) popup_battery_window_t2_ParamLimits

0x27d1,	// (0x00007ff4) popup_battery_window_t2

0x0001,

0xfd96,	// (0x000155b9) popup_battery_window_t_ParamLimits

0xfd96,	// (0x000155b9) popup_battery_window_t

0x598f,	// (0x0000b1b2) midp_canvas_pane_ParamLimits

0x59e4,	// (0x0000b207) midp_keypad_pane_ParamLimits

0x59e4,	// (0x0000b207) midp_keypad_pane

0xd685,	// (0x00012ea8) main_midp_pane_ParamLimits

0xf560,	// (0x00014d83) signal_pane_g2_cp_ParamLimits

0x7a2b,	// (0x0000d24e) aid_size_cell_midp_keypad_ParamLimits

0x7a2b,	// (0x0000d24e) aid_size_cell_midp_keypad

0x7a49,	// (0x0000d26c) midp_keyp_game_grid_pane_ParamLimits

0x7a49,	// (0x0000d26c) midp_keyp_game_grid_pane

0x7a68,	// (0x0000d28b) midp_keyp_rocker_pane_ParamLimits

0x7a68,	// (0x0000d28b) midp_keyp_rocker_pane

0x7aa9,	// (0x0000d2cc) midp_keyp_sk_left_pane_ParamLimits

0x7aa9,	// (0x0000d2cc) midp_keyp_sk_left_pane

0x7afb,	// (0x0000d31e) midp_keyp_sk_right_pane_ParamLimits

0x7afb,	// (0x0000d31e) midp_keyp_sk_right_pane

0xa539,	// (0x0000fd5c) bg_button_pane_cp03

0x7b47,	// (0x0000d36a) midp_keyp_sk_left_pane_g1

0xa539,	// (0x0000fd5c) bg_button_pane_cp04

0x7b47,	// (0x0000d36a) midp_keyp_sk_right_pane_g1

0x043d,	// (0x00005c60) midp_keyp_rocker_pane_g1

0x7b50,	// (0x0000d373) keyp_game_cell_pane_ParamLimits

0x7b50,	// (0x0000d373) keyp_game_cell_pane

0xa539,	// (0x0000fd5c) bg_button_pane_cp02

0x7b72,	// (0x0000d395) keyp_game_cell_pane_g1

0xce6a,	// (0x0001268d) popup_fep_vkb2_window_ParamLimits

0xce6a,	// (0x0001268d) popup_fep_vkb2_window

0xd31b,	// (0x00012b3e) aid_size_cell_vkb2_ParamLimits

0xd31b,	// (0x00012b3e) aid_size_cell_vkb2

0xd351,	// (0x00012b74) popup_fep_vkb2_window_g1_ParamLimits

0xd351,	// (0x00012b74) popup_fep_vkb2_window_g1

0xd3a1,	// (0x00012bc4) vkb2_area_bottom_pane_ParamLimits

0xd3a1,	// (0x00012bc4) vkb2_area_bottom_pane

0xd3df,	// (0x00012c02) vkb2_area_keypad_pane_ParamLimits

0xd3df,	// (0x00012c02) vkb2_area_keypad_pane

0xd41d,	// (0x00012c40) vkb2_area_top_pane_ParamLimits

0xd41d,	// (0x00012c40) vkb2_area_top_pane

0xd499,	// (0x00012cbc) vkb2_top_entry_pane_ParamLimits

0xd499,	// (0x00012cbc) vkb2_top_entry_pane

0xd4c6,	// (0x00012ce9) vkb2_top_grid_left_pane_ParamLimits

0xd4c6,	// (0x00012ce9) vkb2_top_grid_left_pane

0xd4e6,	// (0x00012d09) vkb2_top_grid_right_pane_ParamLimits

0xd4e6,	// (0x00012d09) vkb2_top_grid_right_pane

0xa012,	// (0x0000f835) vkb2_cell_keypad_pane_ParamLimits

0xa012,	// (0x0000f835) vkb2_cell_keypad_pane

0xd52c,	// (0x00012d4f) vkb2_area_bottom_grid_pane_ParamLimits

0xd52c,	// (0x00012d4f) vkb2_area_bottom_grid_pane

0xd552,	// (0x00012d75) vkb2_area_bottom_pane_g1_ParamLimits

0xd552,	// (0x00012d75) vkb2_area_bottom_pane_g1

0xd578,	// (0x00012d9b) vkb2_area_bottom_pane_g2_ParamLimits

0xd578,	// (0x00012d9b) vkb2_area_bottom_pane_g2

0xd5a9,	// (0x00012dcc) vkb2_area_bottom_pane_g3_ParamLimits

0xd5a9,	// (0x00012dcc) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x000155be) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x000155be) vkb2_area_bottom_pane_g

0xa18a,	// (0x0000f9ad) vkb2_top_cell_left_pane_ParamLimits

0xa18a,	// (0x0000f9ad) vkb2_top_cell_left_pane

0x7e5f,	// (0x0000d682) vkb2_top_entry_pane_g1_ParamLimits

0x7e5f,	// (0x0000d682) vkb2_top_entry_pane_g1

0x7e6d,	// (0x0000d690) vkb2_top_entry_pane_t1_ParamLimits

0x7e6d,	// (0x0000d690) vkb2_top_entry_pane_t1

0x2cec,	// (0x0000850f) vkb2_top_entry_pane_t2_ParamLimits

0x2cec,	// (0x0000850f) vkb2_top_entry_pane_t2

0x2d1e,	// (0x00008541) vkb2_top_entry_pane_t3_ParamLimits

0x2d1e,	// (0x00008541) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x000155c5) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x000155c5) vkb2_top_entry_pane_t

0xd5ff,	// (0x00012e22) vkb2_top_grid_right_pane_g1_ParamLimits

0xd5ff,	// (0x00012e22) vkb2_top_grid_right_pane_g1

0xa1ed,	// (0x0000fa10) vkb2_top_grid_right_pane_g2_ParamLimits

0xa1ed,	// (0x0000fa10) vkb2_top_grid_right_pane_g2

0xa205,	// (0x0000fa28) vkb2_top_grid_right_pane_g3_ParamLimits

0xa205,	// (0x0000fa28) vkb2_top_grid_right_pane_g3

0xd615,	// (0x00012e38) vkb2_top_grid_right_pane_g4_ParamLimits

0xd615,	// (0x00012e38) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x000155cc) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x000155cc) vkb2_top_grid_right_pane_g

0xa233,	// (0x0000fa56) vkb2_top_cell_left_pane_g1

0xa24a,	// (0x0000fa6d) vkb2_cell_keypad_pane_g1_ParamLimits

0xa24a,	// (0x0000fa6d) vkb2_cell_keypad_pane_g1

0x2de2,	// (0x00008605) vkb2_cell_keypad_pane_t1_ParamLimits

0x2de2,	// (0x00008605) vkb2_cell_keypad_pane_t1

0xa258,	// (0x0000fa7b) vkb2_cell_bottom_grid_pane_ParamLimits

0xa258,	// (0x0000fa7b) vkb2_cell_bottom_grid_pane

0xa291,	// (0x0000fab4) vkb2_cell_bottom_grid_pane_g1

0x785e,	// (0x0000d081) aid_call2_pane_cp02

0x7866,	// (0x0000d089) aid_call_pane_cp02

0x786e,	// (0x0000d091) clock_digital_number_pane_cp10

0x7876,	// (0x0000d099) clock_digital_number_pane_cp11

0x787e,	// (0x0000d0a1) clock_digital_number_pane_cp12

0x7886,	// (0x0000d0a9) clock_digital_number_pane_cp13

0x788e,	// (0x0000d0b1) clock_digital_separator_pane_cp10

0xbbdb,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g1

0xbbdb,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g2

0x7896,	// (0x0000d0b9) popup_clock_digital_analogue_window_cp2_g3

0xbbdb,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g4

0x7896,	// (0x0000d0b9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x00015581) popup_clock_digital_analogue_window_cp2_g

0x789e,	// (0x0000d0c1) popup_clock_digital_analogue_window_cp2_t1

0x78ac,	// (0x0000d0cf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001558c) popup_clock_digital_analogue_window_cp2_t

0x043d,	// (0x00005c60) clock_digital_number_pane_cp10_g1

0x043d,	// (0x00005c60) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001536f) clock_digital_number_pane_cp10_g

0x043d,	// (0x00005c60) clock_digital_separator_pane_cp10_g1

0x043d,	// (0x00005c60) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001536f) clock_digital_separator_pane_cp10_g

0x2403,	// (0x00007c26) uniindi_top_pane_g3

0x2414,	// (0x00007c37) uniindi_top_pane_g4

0xa07d,	// (0x0000f8a0) vkb2_row_keypad_pane_ParamLimits

0xa07d,	// (0x0000f8a0) vkb2_row_keypad_pane

0xa2ad,	// (0x0000fad0) vkb2_cell_t_keypad_pane_ParamLimits

0xa2ad,	// (0x0000fad0) vkb2_cell_t_keypad_pane

0xa2ba,	// (0x0000fadd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa2ba,	// (0x0000fadd) vkb2_cell_t_keypad_pane_cp08

0xa2ca,	// (0x0000faed) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa2ca,	// (0x0000faed) vkb2_cell_t_keypad_pane_cp09

0xa2db,	// (0x0000fafe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa2db,	// (0x0000fafe) vkb2_cell_t_keypad_pane_cp01

0xa2eb,	// (0x0000fb0e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa2eb,	// (0x0000fb0e) vkb2_cell_t_keypad_pane_cp02

0xa2fb,	// (0x0000fb1e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa2fb,	// (0x0000fb1e) vkb2_cell_t_keypad_pane_cp03

0xa30b,	// (0x0000fb2e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa30b,	// (0x0000fb2e) vkb2_cell_t_keypad_pane_cp04

0xa31b,	// (0x0000fb3e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa31b,	// (0x0000fb3e) vkb2_cell_t_keypad_pane_cp05

0xa32b,	// (0x0000fb4e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa32b,	// (0x0000fb4e) vkb2_cell_t_keypad_pane_cp06

0xa33b,	// (0x0000fb5e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa33b,	// (0x0000fb5e) vkb2_cell_t_keypad_pane_cp07

0xa34b,	// (0x0000fb6e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa34b,	// (0x0000fb6e) vkb2_cell_t_keypad_pane_cp10

0x9b6b,	// (0x0000f38e) vkb2_cell_t_keypad_pane_g1

0x2f01,	// (0x00008724) vkb2_cell_t_keypad_pane_t1

0x8c17,	// (0x0000e43a) popup_grid_graphic2_window

0x7ed2,	// (0x0000d6f5) aid_size_cell_graphic2_ParamLimits

0x7ed2,	// (0x0000d6f5) aid_size_cell_graphic2

0xdf46,	// (0x00013769) bg_popup_window_pane_cp21_ParamLimits

0xdf46,	// (0x00013769) bg_popup_window_pane_cp21

0x7f04,	// (0x0000d727) graphic2_pages_pane_ParamLimits

0x7f04,	// (0x0000d727) graphic2_pages_pane

0x7f4d,	// (0x0000d770) grid_graphic2_control_pane_ParamLimits

0x7f4d,	// (0x0000d770) grid_graphic2_control_pane

0x7f7b,	// (0x0000d79e) grid_graphic2_pane_ParamLimits

0x7f7b,	// (0x0000d79e) grid_graphic2_pane

0x7fda,	// (0x0000d7fd) cell_graphic2_pane

0xa539,	// (0x0000fd5c) main_comp_mode_pane

0x1bce,	// (0x000073f1) list_ai3_gene_pane_ParamLimits

0x754a,	// (0x0000cd6d) bg_popup_window_pane_cp19_ParamLimits

0x1f9b,	// (0x000077be) bg_touch_area_indi_pane_ParamLimits

0x1f9b,	// (0x000077be) bg_touch_area_indi_pane

0x1fb1,	// (0x000077d4) bg_touch_area_indi_pane_cp01_ParamLimits

0x1fb1,	// (0x000077d4) bg_touch_area_indi_pane_cp01

0x1fc7,	// (0x000077ea) bg_touch_area_indi_pane_cp02_ParamLimits

0x1fc7,	// (0x000077ea) bg_touch_area_indi_pane_cp02

0x1fdd,	// (0x00007800) bg_touch_area_indi_pane_cp03_ParamLimits

0x1fdd,	// (0x00007800) bg_touch_area_indi_pane_cp03

0x1ff3,	// (0x00007816) popup_slider_window_g1_ParamLimits

0x200f,	// (0x00007832) popup_slider_window_g2_ParamLimits

0x202b,	// (0x0000784e) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x00015516) popup_slider_window_g_ParamLimits

0x2087,	// (0x000078aa) popup_slider_window_t1_ParamLimits

0x20f9,	// (0x0000791c) small_volume_slider_vertical_pane_ParamLimits

0x7fda,	// (0x0000d7fd) cell_graphic2_pane_ParamLimits

0x8023,	// (0x0000d846) bg_button_pane_cp10_ParamLimits

0x8023,	// (0x0000d846) bg_button_pane_cp10

0x8034,	// (0x0000d857) bg_button_pane_cp11_ParamLimits

0x8034,	// (0x0000d857) bg_button_pane_cp11

0x8045,	// (0x0000d868) graphic2_pages_pane_g1_ParamLimits

0x8045,	// (0x0000d868) graphic2_pages_pane_g1

0x8060,	// (0x0000d883) graphic2_pages_pane_g2_ParamLimits

0x8060,	// (0x0000d883) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x000155da) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x000155da) graphic2_pages_pane_g

0x8078,	// (0x0000d89b) graphic2_pages_pane_t1_ParamLimits

0x8078,	// (0x0000d89b) graphic2_pages_pane_t1

0x8090,	// (0x0000d8b3) cell_graphic2_control_pane_ParamLimits

0x8090,	// (0x0000d8b3) cell_graphic2_control_pane

0x80aa,	// (0x0000d8cd) cell_graphic2_pane_g1_ParamLimits

0x80aa,	// (0x0000d8cd) cell_graphic2_pane_g1

0x06da,	// (0x00005efd) cell_graphic2_pane_g2_ParamLimits

0x06da,	// (0x00005efd) cell_graphic2_pane_g2

0x80b7,	// (0x0000d8da) cell_graphic2_pane_g3_ParamLimits

0x80b7,	// (0x0000d8da) cell_graphic2_pane_g3

0x06e7,	// (0x00005f0a) cell_graphic2_pane_g4_ParamLimits

0x06e7,	// (0x00005f0a) cell_graphic2_pane_g4

0x80c4,	// (0x0000d8e7) cell_graphic2_pane_g5_ParamLimits

0x80c4,	// (0x0000d8e7) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x000155df) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x000155df) cell_graphic2_pane_g

0x80e4,	// (0x0000d907) cell_graphic2_pane_t1_ParamLimits

0x80e4,	// (0x0000d907) cell_graphic2_pane_t1

0xe52e,	// (0x00013d51) grid_highlight_pane_cp11_ParamLimits

0xe52e,	// (0x00013d51) grid_highlight_pane_cp11

0xb420,	// (0x00010c43) bg_button_pane_cp05

0x80fb,	// (0x0000d91e) cell_graphic2_control_pane_g1

0x043d,	// (0x00005c60) bg_touch_area_indi_pane_g1

0x311b,	// (0x0000893e) aid_cmod_rocker_key_size

0x3125,	// (0x00008948) aid_cmode_itu_key_size

0x312f,	// (0x00008952) main_cmode_video_pane

0x3137,	// (0x0000895a) main_comp_mode_itu_pane

0x3141,	// (0x00008964) main_comp_mode_rocker_pane

0x3149,	// (0x0000896c) cell_cmode_rocker_pane_ParamLimits

0x3149,	// (0x0000896c) cell_cmode_rocker_pane

0x315b,	// (0x0000897e) cell_cmode_itu_pane_ParamLimits

0x315b,	// (0x0000897e) cell_cmode_itu_pane

0xb420,	// (0x00010c43) bg_button_pane_cp06_ParamLimits

0xb420,	// (0x00010c43) bg_button_pane_cp06

0x087d,	// (0x000060a0) cell_cmode_rocker_pane_g1_ParamLimits

0x087d,	// (0x000060a0) cell_cmode_rocker_pane_g1

0x226d,	// (0x00007a90) cell_cmode_rocker_pane_g2_ParamLimits

0x226d,	// (0x00007a90) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x000155ea) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x000155ea) cell_cmode_rocker_pane_g

0xa539,	// (0x0000fd5c) bg_button_pane_cp07

0x3170,	// (0x00008993) cell_cmode_itu_pane_g1

0x3179,	// (0x0000899c) cell_cmode_itu_pane_t1

0x3187,	// (0x000089aa) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x000155ef) cell_cmode_itu_pane_t

0x2485,	// (0x00007ca8) aid_touch_ctrl_left

0x248d,	// (0x00007cb0) aid_touch_ctrl_right

0xa539,	// (0x0000fd5c) compa_mode_pane

0x8108,	// (0x0000d92b) aid_cmod_rocker_key_size_cp

0x8112,	// (0x0000d935) aid_cmode_itu_key_size_cp

0x31a9,	// (0x000089cc) compa_mode_pane_g1

0x31b1,	// (0x000089d4) compa_mode_pane_g2

0x31b9,	// (0x000089dc) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x000155f4) compa_mode_pane_g

0x811c,	// (0x0000d93f) main_comp_mode_itu_pane_cp

0x8126,	// (0x0000d949) main_comp_mode_rocker_pane_cp

0x8130,	// (0x0000d953) cell_cmode_itu_pane_cp_ParamLimits

0x8130,	// (0x0000d953) cell_cmode_itu_pane_cp

0x8145,	// (0x0000d968) cell_cmode_rocker_pane_cp_ParamLimits

0x8145,	// (0x0000d968) cell_cmode_rocker_pane_cp

0xb420,	// (0x00010c43) bg_button_pane_cp06_cp_ParamLimits

0xb420,	// (0x00010c43) bg_button_pane_cp06_cp

0x087d,	// (0x000060a0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x087d,	// (0x000060a0) cell_cmode_rocker_pane_g1_cp

0x043d,	// (0x00005c60) cell_cmode_rocker_pane_g2_cp

0xa539,	// (0x0000fd5c) bg_button_pane_cp07_cp

0x8157,	// (0x0000d97a) cell_cmode_itu_pane_g1_cp

0x8160,	// (0x0000d983) cell_cmode_itu_pane_t1_cp

0x816e,	// (0x0000d991) cell_cmode_itu_pane_t2_cp

0x6a64,	// (0x0000c287) settings_code_pane_cp2

0xa70a,	// (0x0000ff2d) bg_popup_window_pane_cp3_ParamLimits

0xabb5,	// (0x000103d8) heading_pane_cp3_ParamLimits

0xabc1,	// (0x000103e4) listscroll_popup_graphic_pane_ParamLimits

0x9926,	// (0x0000f149) fep_hwr_aid_pane_ParamLimits

0x9d86,	// (0x0000f5a9) aid_touch_sctrl_top_ParamLimits

0x9da1,	// (0x0000f5c4) sctrl_sk_top_pane_g1_ParamLimits

0x9b6b,	// (0x0000f38e) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001552f) sctrl_sk_top_pane_g_ParamLimits

0x9dae,	// (0x0000f5d1) sctrl_sk_top_pane_t1_ParamLimits

0x9d86,	// (0x0000f5a9) aid_touch_sctrl_bottom_ParamLimits

0x9dae,	// (0x0000f5d1) sctrl_sk_bottom_pane_t1_ParamLimits

0x23cf,	// (0x00007bf2) aid_area_touch_clock

0xd45b,	// (0x00012c7e) aid_vkb2_area_top_pane_cell_ParamLimits

0xd45b,	// (0x00012c7e) aid_vkb2_area_top_pane_cell

0xd506,	// (0x00012d29) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd506,	// (0x00012d29) aid_vkb2_area_bottom_pane_cell

0x2ca4,	// (0x000084c7) popup_char_count_window

0x321d,	// (0x00008a40) popup_char_count_window_g1

0x3226,	// (0x00008a49) popup_char_count_window_g2

0x322f,	// (0x00008a52) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x000155fb) popup_char_count_window_g

0x3238,	// (0x00008a5b) popup_char_count_window_t1

0x9e62,	// (0x0000f685) popup_fep_char_preview_window_ParamLimits

0x9e62,	// (0x0000f685) popup_fep_char_preview_window

0xd47b,	// (0x00012c9e) vkb2_top_candi_pane_ParamLimits

0xd47b,	// (0x00012c9e) vkb2_top_candi_pane

0x817c,	// (0x0000d99f) cell_vkb2_top_candi_pane_ParamLimits

0x817c,	// (0x0000d99f) cell_vkb2_top_candi_pane

0xa360,	// (0x0000fb83) bg_popup_fep_char_preview_window_ParamLimits

0xa360,	// (0x0000fb83) bg_popup_fep_char_preview_window

0xa36e,	// (0x0000fb91) popup_fep_char_preview_window_t1_ParamLimits

0xa36e,	// (0x0000fb91) popup_fep_char_preview_window_t1

0x32c9,	// (0x00008aec) bg_popup_fep_char_preview_window_g1

0x32c1,	// (0x00008ae4) bg_popup_fep_char_preview_window_g2

0x32b9,	// (0x00008adc) bg_popup_fep_char_preview_window_g3

0x32f1,	// (0x00008b14) bg_popup_fep_char_preview_window_g4

0x32e9,	// (0x00008b0c) bg_popup_fep_char_preview_window_g5

0xa3a8,	// (0x0000fbcb) bg_popup_fep_char_preview_window_g6

0x32d9,	// (0x00008afc) bg_popup_fep_char_preview_window_g7

0x32d1,	// (0x00008af4) bg_popup_fep_char_preview_window_g8

0x32f9,	// (0x00008b1c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x00015602) bg_popup_fep_char_preview_window_g

0x9b6b,	// (0x0000f38e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x9b6b,	// (0x0000f38e) cell_vkb2_top_candi_pane_g1

0x9b79,	// (0x0000f39c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x9b79,	// (0x0000f39c) cell_vkb2_top_candi_pane_g2

0x3322,	// (0x00008b45) cell_vkb2_top_candi_pane_g3_ParamLimits

0x3322,	// (0x00008b45) cell_vkb2_top_candi_pane_g3

0xa3b0,	// (0x0000fbd3) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa3b0,	// (0x0000fbd3) cell_vkb2_top_candi_pane_g4

0x0bf5,	// (0x00006418) cell_vkb2_top_candi_pane_g5_ParamLimits

0x0bf5,	// (0x00006418) cell_vkb2_top_candi_pane_g5

0xa3d1,	// (0x0000fbf4) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa3d1,	// (0x0000fbf4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x00015615) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x00015615) cell_vkb2_top_candi_pane_g

0xa3df,	// (0x0000fc02) cell_vkb2_top_candi_pane_t1

0x973e,	// (0x0000ef61) aid_size_touch_slider_mark_ParamLimits

0x973e,	// (0x0000ef61) aid_size_touch_slider_mark

0x7f38,	// (0x0000d75b) grid_graphic2_catg_pane_ParamLimits

0x7f38,	// (0x0000d75b) grid_graphic2_catg_pane

0x7faf,	// (0x0000d7d2) popup_grid_graphic2_window_t1_ParamLimits

0x7faf,	// (0x0000d7d2) popup_grid_graphic2_window_t1

0x7fc4,	// (0x0000d7e7) popup_grid_graphic2_window_t2_ParamLimits

0x7fc4,	// (0x0000d7e7) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x000155d5) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x000155d5) popup_grid_graphic2_window_t

0xb420,	// (0x00010c43) bg_button_pane_cp05_ParamLimits

0x80fb,	// (0x0000d91e) cell_graphic2_control_pane_g1_ParamLimits

0x244b,	// (0x00007c6e) cell_graphic2_catg_pane_ParamLimits

0x244b,	// (0x00007c6e) cell_graphic2_catg_pane

0xa539,	// (0x0000fd5c) bg_button_pane_cp12

0x81c6,	// (0x0000d9e9) cell_graphic2_catg_pane_g1

0x239b,	// (0x00007bbe) cell_tb_ext_pane_t1_ParamLimits

0xa1aa,	// (0x0000f9cd) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa1aa,	// (0x0000f9cd) vkb2_top_cell_right_narrow_pane

0xa1c2,	// (0x0000f9e5) vkb2_top_cell_right_wide_pane_ParamLimits

0xa1c2,	// (0x0000f9e5) vkb2_top_cell_right_wide_pane

0x9918,	// (0x0000f13b) bg_vkb2_func_pane_ParamLimits

0x9918,	// (0x0000f13b) bg_vkb2_func_pane

0xa233,	// (0x0000fa56) vkb2_top_cell_left_pane_g1_ParamLimits

0x9918,	// (0x0000f13b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9918,	// (0x0000f13b) bg_vkb2_fuc_pane_cp03

0xa291,	// (0x0000fab4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd9a5,	// (0x000131c8) bg_vkb2_func_pane_g1

0xd9ad,	// (0x000131d0) bg_vkb2_func_pane_g2

0xd9bd,	// (0x000131e0) bg_vkb2_func_pane_g3

0xd9b5,	// (0x000131d8) bg_vkb2_func_pane_g4

0xd9c5,	// (0x000131e8) bg_vkb2_func_pane_g5

0xd9cd,	// (0x000131f0) bg_vkb2_func_pane_g6

0xd9d5,	// (0x000131f8) bg_vkb2_func_pane_g7

0xd9dd,	// (0x00013200) bg_vkb2_func_pane_g8

0xd99d,	// (0x000131c0) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x00015622) bg_vkb2_func_pane_g

0x9918,	// (0x0000f13b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9918,	// (0x0000f13b) bg_vkb2_fuc_pane_cp01

0xa233,	// (0x0000fa56) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa233,	// (0x0000fa56) vkb2_top_cell_right_wide_pane_g1

0x9918,	// (0x0000f13b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9918,	// (0x0000f13b) bg_vkb2_fuc_pane_cp02

0xa291,	// (0x0000fab4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa291,	// (0x0000fab4) vkb2_top_cell_right_narrow_pane_g1

0x7498,	// (0x0000ccbb) aid_touch_area_decrease_ParamLimits

0x7498,	// (0x0000ccbb) aid_touch_area_decrease

0x74c6,	// (0x0000cce9) aid_touch_area_increase_ParamLimits

0x74c6,	// (0x0000cce9) aid_touch_area_increase

0x74ee,	// (0x0000cd11) aid_touch_area_mute_ParamLimits

0x74ee,	// (0x0000cd11) aid_touch_area_mute

0x7516,	// (0x0000cd39) aid_touch_area_slider_ParamLimits

0x7516,	// (0x0000cd39) aid_touch_area_slider

0x7556,	// (0x0000cd79) popup_slider_window_g4_ParamLimits

0x7556,	// (0x0000cd79) popup_slider_window_g4

0x757e,	// (0x0000cda1) popup_slider_window_g5_ParamLimits

0x757e,	// (0x0000cda1) popup_slider_window_g5

0x75b2,	// (0x0000cdd5) popup_slider_window_g6_ParamLimits

0x75b2,	// (0x0000cdd5) popup_slider_window_g6

0x20b3,	// (0x000078d6) popup_slider_window_t2_ParamLimits

0x20b3,	// (0x000078d6) popup_slider_window_t2

0x0001,

0xfd00,	// (0x00015523) popup_slider_window_t_ParamLimits

0xfd00,	// (0x00015523) popup_slider_window_t

0x75ce,	// (0x0000cdf1) slider_pane_ParamLimits

0x75ce,	// (0x0000cdf1) slider_pane

0x3374,	// (0x00008b97) slider_pane_g1_ParamLimits

0x3374,	// (0x00008b97) slider_pane_g1

0x3388,	// (0x00008bab) slider_pane_g2_ParamLimits

0x3388,	// (0x00008bab) slider_pane_g2

0x339e,	// (0x00008bc1) slider_pane_g3_ParamLimits

0x339e,	// (0x00008bc1) slider_pane_g3

0x0003,

0xfe12,	// (0x00015635) slider_pane_g_ParamLimits

0xfe12,	// (0x00015635) slider_pane_g

0x60d4,	// (0x0000b8f7) popup_tb_float_extension_window_ParamLimits

0x60d4,	// (0x0000b8f7) popup_tb_float_extension_window

0x33ca,	// (0x00008bed) aid_size_cell_tb_float_ext

0xa539,	// (0x0000fd5c) bg_popup_sub_window_cp28

0x33d5,	// (0x00008bf8) grid_tb_float_ext_pane

0x33dd,	// (0x00008c00) cell_tb_float_ext_pane_ParamLimits

0x33dd,	// (0x00008c00) cell_tb_float_ext_pane

0x33f5,	// (0x00008c18) cell_tb_float_ext_pane_g1

0x33fe,	// (0x00008c21) grid_highlight_pane_cp12

0xd291,	// (0x00012ab4) cell_last_hwr_side_pane_ParamLimits

0xd291,	// (0x00012ab4) cell_last_hwr_side_pane

0x043d,	// (0x00005c60) cell_last_hwr_side_pane_g1

0x3407,	// (0x00008c2a) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x0001563e) cell_last_hwr_side_pane_g

0xd5da,	// (0x00012dfd) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd5da,	// (0x00012dfd) vkb2_area_bottom_space_btn_pane

0x9b6b,	// (0x0000f38e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2f01,	// (0x00008724) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa3df,	// (0x0000fc02) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa3f5,	// (0x0000fc18) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa3f5,	// (0x0000fc18) vkb2_area_bottom_space_btn_pane_g1

0xa42b,	// (0x0000fc4e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa42b,	// (0x0000fc4e) vkb2_area_bottom_space_btn_pane_g2

0xa461,	// (0x0000fc84) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xa461,	// (0x0000fc84) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x00015643) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x00015643) vkb2_area_bottom_space_btn_pane_g

0x99d5,	// (0x0000f1f8) cel_fep_hwr_func_pane_ParamLimits

0x99d5,	// (0x0000f1f8) cel_fep_hwr_func_pane

0xd266,	// (0x00012a89) cell_hwr_side_button_pane_ParamLimits

0xd266,	// (0x00012a89) cell_hwr_side_button_pane

0x23cf,	// (0x00007bf2) aid_area_touch_clock_ParamLimits

0xa9b1,	// (0x000101d4) bg_uniindi_top_pane_ParamLimits

0x23e1,	// (0x00007c04) uniindi_top_pane_g1_ParamLimits

0x23f7,	// (0x00007c1a) uniindi_top_pane_g2_ParamLimits

0x2403,	// (0x00007c26) uniindi_top_pane_g3_ParamLimits

0x2414,	// (0x00007c37) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001555b) uniindi_top_pane_g_ParamLimits

0x2421,	// (0x00007c44) uniindi_top_pane_t1_ParamLimits

0xa9b1,	// (0x000101d4) bg_vkb2_func_pane_cp01_ParamLimits

0xa9b1,	// (0x000101d4) bg_vkb2_func_pane_cp01

0x34c2,	// (0x00008ce5) cel_fep_hwr_func_pane_g1_ParamLimits

0x34c2,	// (0x00008ce5) cel_fep_hwr_func_pane_g1

0xa9b1,	// (0x000101d4) bg_vkb2_func_pane_cp02_ParamLimits

0xa9b1,	// (0x000101d4) bg_vkb2_func_pane_cp02

0x34c2,	// (0x00008ce5) cell_hwr_side_button_pane_g1_ParamLimits

0x34c2,	// (0x00008ce5) cell_hwr_side_button_pane_g1

0xd8c1,	// (0x000130e4) status_pane_g4_ParamLimits

0xd8c1,	// (0x000130e4) status_pane_g4

0xd8d9,	// (0x000130fc) status_pane_t1

0x022f,	// (0x00005a52) form2_midp_gauge_slider_cont_pane

0x0237,	// (0x00005a5a) form2_midp_gauge_slider_pane_t1_ParamLimits

0x6d7c,	// (0x0000c59f) form2_midp_gauge_slider_pane_t2_ParamLimits

0x6d8e,	// (0x0000c5b1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00015322) form2_midp_gauge_slider_pane_t_ParamLimits

0x026d,	// (0x00005a90) form2_midp_slider_pane_ParamLimits

0x9e22,	// (0x0000f645) aid_size_cell_func_vkb2_ParamLimits

0x9e22,	// (0x0000f645) aid_size_cell_func_vkb2

0x33b6,	// (0x00008bd9) slider_pane_g4_ParamLimits

0x33b6,	// (0x00008bd9) slider_pane_g4

0xd62b,	// (0x00012e4e) form2_midp_gauge_slider_pane_t2_cp01

0xd639,	// (0x00012e5c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd639,	// (0x00012e5c) form2_midp_gauge_slider_pane_t3_cp01

0xa4d2,	// (0x0000fcf5) form2_midp_slider_pane_cp01

0xa539,	// (0x0000fd5c) navi_smil_pane

0x352f,	// (0x00008d52) navi_smil_pane_g1

0x3537,	// (0x00008d5a) navi_smil_pane_t1

0x3504,	// (0x00008d27) form2_midp_slider_pane_g1

0x350d,	// (0x00008d30) form2_midp_slider_pane_g2

0x3515,	// (0x00008d38) form2_midp_slider_pane_g3

0x3504,	// (0x00008d27) form2_midp_slider_pane_g4

0x81fa,	// (0x0000da1d) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x0001564c) form2_midp_slider_pane_g

0xa497,	// (0x0000fcba) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa497,	// (0x0000fcba) vkb2_area_bottom_space_btn_pane_g4

0x6276,	// (0x0000ba99) lc0_navi_pane_ParamLimits

0x6276,	// (0x0000ba99) lc0_navi_pane

0x62e0,	// (0x0000bb03) lc0_stat_indi_pane_ParamLimits

0x62e0,	// (0x0000bb03) lc0_stat_indi_pane

0x62f5,	// (0x0000bb18) ls0_title_pane_ParamLimits

0x62f5,	// (0x0000bb18) ls0_title_pane

0xb420,	// (0x00010c43) bg_popup_sub_pane_cp14_ParamLimits

0x23b6,	// (0x00007bd9) list_uniindi_pane_ParamLimits

0x23c2,	// (0x00007be5) uniindi_top_pane_ParamLimits

0x245d,	// (0x00007c80) list_single_uniindi_pane_g1_ParamLimits

0x2470,	// (0x00007c93) list_single_uniindi_pane_t1_ParamLimits

0xd656,	// (0x00012e79) lc0_stat_clock_pane_ParamLimits

0xd656,	// (0x00012e79) lc0_stat_clock_pane

0x821d,	// (0x0000da40) lc0_stat_indi_pane_g1_ParamLimits

0x821d,	// (0x0000da40) lc0_stat_indi_pane_g1

0x8210,	// (0x0000da33) lc0_stat_indi_pane_g2_ParamLimits

0x8210,	// (0x0000da33) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x00015657) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x00015657) lc0_stat_indi_pane_g

0xd663,	// (0x00012e86) lc0_uni_indicator_pane_ParamLimits

0xd663,	// (0x00012e86) lc0_uni_indicator_pane

0x3579,	// (0x00008d9c) ls0_title_pane_g1_ParamLimits

0x3579,	// (0x00008d9c) ls0_title_pane_g1

0x8237,	// (0x0000da5a) ls0_title_pane_t1_ParamLimits

0x8237,	// (0x0000da5a) ls0_title_pane_t1

0xd670,	// (0x00012e93) lc0_uni_indicator_pane_g1_ParamLimits

0xd670,	// (0x00012e93) lc0_uni_indicator_pane_g1

0x35d5,	// (0x00008df8) lc0_stat_clock_pane_t1

0xa539,	// (0x0000fd5c) main_ai5_pane

0x35e3,	// (0x00008e06) ai5_sk_pane_ParamLimits

0x35e3,	// (0x00008e06) ai5_sk_pane

0x827a,	// (0x0000da9d) cell_ai5_widget_pane_ParamLimits

0x827a,	// (0x0000da9d) cell_ai5_widget_pane

0x82e1,	// (0x0000db04) aid_size_cell_widget_grid

0x365f,	// (0x00008e82) bg_ai5_widget_pane_ParamLimits

0x365f,	// (0x00008e82) bg_ai5_widget_pane

0x8310,	// (0x0000db33) cell_ai5_widget_pane_g2

0x8320,	// (0x0000db43) cell_ai5_widget_pane_g3

0x8334,	// (0x0000db57) cell_ai5_widget_pane_g4

0x8340,	// (0x0000db63) cell_ai5_widget_pane_g5

0x834c,	// (0x0000db6f) cell_ai5_widget_pane_g6

0x8358,	// (0x0000db7b) cell_ai5_widget_pane_g7

0x83a0,	// (0x0000dbc3) cell_ai5_widget_pane_t1_ParamLimits

0x83a0,	// (0x0000dbc3) cell_ai5_widget_pane_t1

0x83bd,	// (0x0000dbe0) cell_ai5_widget_pane_t2_ParamLimits

0x83bd,	// (0x0000dbe0) cell_ai5_widget_pane_t2

0x83d5,	// (0x0000dbf8) cell_ai5_widget_pane_t3_ParamLimits

0x83d5,	// (0x0000dbf8) cell_ai5_widget_pane_t3

0x83ed,	// (0x0000dc10) cell_ai5_widget_pane_t4_ParamLimits

0x83ed,	// (0x0000dc10) cell_ai5_widget_pane_t4

0x8407,	// (0x0000dc2a) cell_ai5_widget_pane_t5_ParamLimits

0x8407,	// (0x0000dc2a) cell_ai5_widget_pane_t5

0x379d,	// (0x00008fc0) cell_ai5_widget_pane_t6_ParamLimits

0x379d,	// (0x00008fc0) cell_ai5_widget_pane_t6

0x37af,	// (0x00008fd2) cell_ai5_widget_pane_t7_ParamLimits

0x37af,	// (0x00008fd2) cell_ai5_widget_pane_t7

0x8426,	// (0x0000dc49) cell_ai5_widget_pane_t8_ParamLimits

0x8426,	// (0x0000dc49) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x00015671) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x00015671) cell_ai5_widget_pane_t

0x846e,	// (0x0000dc91) grid_ai5_widget_pane

0xb420,	// (0x00010c43) highlight_cell_ai5_widget_pane_ParamLimits

0xb420,	// (0x00010c43) highlight_cell_ai5_widget_pane

0x8482,	// (0x0000dca5) ai5_sk_left_pane

0x848c,	// (0x0000dcaf) ai5_sk_middle_pane

0x8496,	// (0x0000dcb9) ai5_sk_right_pane

0x3844,	// (0x00009067) bg_ai5_widget_pane_g1_ParamLimits

0x3844,	// (0x00009067) bg_ai5_widget_pane_g1

0x3850,	// (0x00009073) bg_ai5_widget_pane_g2_ParamLimits

0x3850,	// (0x00009073) bg_ai5_widget_pane_g2

0x385c,	// (0x0000907f) bg_ai5_widget_pane_g3_ParamLimits

0x385c,	// (0x0000907f) bg_ai5_widget_pane_g3

0x3868,	// (0x0000908b) bg_ai5_widget_pane_g4_ParamLimits

0x3868,	// (0x0000908b) bg_ai5_widget_pane_g4

0x3874,	// (0x00009097) bg_ai5_widget_pane_g5_ParamLimits

0x3874,	// (0x00009097) bg_ai5_widget_pane_g5

0x3880,	// (0x000090a3) bg_ai5_widget_pane_g6_ParamLimits

0x3880,	// (0x000090a3) bg_ai5_widget_pane_g6

0x388c,	// (0x000090af) bg_ai5_widget_pane_g7_ParamLimits

0x388c,	// (0x000090af) bg_ai5_widget_pane_g7

0x3898,	// (0x000090bb) bg_ai5_widget_pane_g8_ParamLimits

0x3898,	// (0x000090bb) bg_ai5_widget_pane_g8

0x38a4,	// (0x000090c7) bg_ai5_widget_pane_g9_ParamLimits

0x38a4,	// (0x000090c7) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x00015686) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x00015686) bg_ai5_widget_pane_g

0x84a0,	// (0x0000dcc3) cell_shortcut_ai5_widget_pane_ParamLimits

0x84a0,	// (0x0000dcc3) cell_shortcut_ai5_widget_pane

0xa7ea,	// (0x0001000d) bg_cell_shortcut_ai5_widget_pane

0x84b1,	// (0x0000dcd4) cell_grid_ai5_widget_pane_g1

0x38e6,	// (0x00009109) highlight_cell_shortcut_ai5_widget_pane

0xd9a5,	// (0x000131c8) ai5_sk_left_pane_g1

0x38ee,	// (0x00009111) ai5_sk_left_pane_g2

0x38f6,	// (0x00009119) ai5_sk_left_pane_g3

0x38fe,	// (0x00009121) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x00015699) ai5_sk_left_pane_g

0x3906,	// (0x00009129) ai5_sk_left_pane_t1

0xd9ad,	// (0x000131d0) ai5_sk_right_pane_g1

0x3914,	// (0x00009137) ai5_sk_right_pane_g2

0x391c,	// (0x0000913f) ai5_sk_right_pane_g3

0x3924,	// (0x00009147) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x000156a2) ai5_sk_right_pane_g

0x392c,	// (0x0000914f) ai5_sk_right_pane_t1

0xd9ad,	// (0x000131d0) ai5_sk_middle_pane_g1

0xd9a5,	// (0x000131c8) ai5_sk_middle_pane_g2

0xd9c5,	// (0x000131e8) ai5_sk_middle_pane_g3

0x391c,	// (0x0000913f) ai5_sk_middle_pane_g4

0x38f6,	// (0x00009119) ai5_sk_middle_pane_g5

0x393a,	// (0x0000915d) ai5_sk_middle_pane_g6

0x84ba,	// (0x0000dcdd) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x000156ab) ai5_sk_middle_pane_g

0x6174,	// (0x0000b997) aid_touch_area_size_lc0_ParamLimits

0x6174,	// (0x0000b997) aid_touch_area_size_lc0

0x9b9a,	// (0x0000f3bd) cell_hwr_candidate_pane_t1_ParamLimits

0xd7f6,	// (0x00013019) aid_touch_navi_pane

0x63e1,	// (0x0000bc04) status_dt_navi_pane_ParamLimits

0x63e1,	// (0x0000bc04) status_dt_navi_pane

0x63f9,	// (0x0000bc1c) status_dt_sta_pane_ParamLimits

0x63f9,	// (0x0000bc1c) status_dt_sta_pane

0x84c2,	// (0x0000dce5) dt_sta_controll_pane

0x84cf,	// (0x0000dcf2) dt_sta_indi_pane

0x84dc,	// (0x0000dcff) dt_sta_title_pane

0xa9b1,	// (0x000101d4) bg_dt_sta_indi_pane_ParamLimits

0xa9b1,	// (0x000101d4) bg_dt_sta_indi_pane

0x84ee,	// (0x0000dd11) dt_sta_battery_pane

0x84f6,	// (0x0000dd19) dt_sta_indi_pane_g1

0x84ff,	// (0x0000dd22) dt_sta_indi_pane_g2

0x8508,	// (0x0000dd2b) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x000156ba) dt_sta_indi_pane_g

0x8511,	// (0x0000dd34) dt_sta_signal_pane

0xb420,	// (0x00010c43) bg_dt_sta_title_pane_ParamLimits

0xb420,	// (0x00010c43) bg_dt_sta_title_pane

0x851a,	// (0x0000dd3d) dt_sta_title_pane_g1

0x8522,	// (0x0000dd45) dt_sta_title_pane_t1_ParamLimits

0x8522,	// (0x0000dd45) dt_sta_title_pane_t1

0xa539,	// (0x0000fd5c) bg_dt_sta_control_pane

0x8537,	// (0x0000dd5a) dt_sta_controll_pane_g1

0x8540,	// (0x0000dd63) bg_dt_sta_title_pane_g1

0x8549,	// (0x0000dd6c) bg_dt_sta_title_pane_g2

0x8552,	// (0x0000dd75) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x000156c1) bg_dt_sta_title_pane_g

0x043d,	// (0x00005c60) bg_dt_sta_indi_pane_g1

0x855b,	// (0x0000dd7e) dt_sta_signal_pane_g1

0x8563,	// (0x0000dd86) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x000156c8) dt_sta_signal_pane_g

0x39f8,	// (0x0000921b) dt_sta_battery_pane_g1

0x3a01,	// (0x00009224) dt_sta_battery_pane_t1

0x043d,	// (0x00005c60) bg_dt_sta_control_pane_g1

0xbcab,	// (0x000114ce) fep_china_uni_eep_pane

0xbcb3,	// (0x000114d6) fep_china_uni_entry_pane_ParamLimits

0xbcc3,	// (0x000114e6) popup_fep_china_uni_window_g1_ParamLimits

0xbcd3,	// (0x000114f6) popup_fep_china_uni_window_g2_ParamLimits

0xbcd3,	// (0x000114f6) popup_fep_china_uni_window_g2

0x0001,

0xf74e,	// (0x00014f71) popup_fep_china_uni_window_g_ParamLimits

0xf74e,	// (0x00014f71) popup_fep_china_uni_window_g

0x3a10,	// (0x00009233) fep_china_uni_eep_pane_g1

0x3a18,	// (0x0000923b) fep_china_uni_eep_pane_t1

0x3526,	// (0x00008d49) aid_touch_area_size_smil_player

0xd894,	// (0x000130b7) lc0_clock_pane

0xd8cd,	// (0x000130f0) status_pane_g5_ParamLimits

0xd8cd,	// (0x000130f0) status_pane_g5

0x5d08,	// (0x0000b52b) popup_keymap_window

0xd8ad,	// (0x000130d0) status_icon_pane

0x8320,	// (0x0000db43) cell_ai5_widget_pane_g3_ParamLimits

0x8334,	// (0x0000db57) cell_ai5_widget_pane_g4_ParamLimits

0x8340,	// (0x0000db63) cell_ai5_widget_pane_g5_ParamLimits

0x8364,	// (0x0000db87) cell_ai5_widget_pane_g8_ParamLimits

0x8364,	// (0x0000db87) cell_ai5_widget_pane_g8

0x8378,	// (0x0000db9b) cell_ai5_widget_pane_g9_ParamLimits

0x8378,	// (0x0000db9b) cell_ai5_widget_pane_g9

0x838c,	// (0x0000dbaf) cell_ai5_widget_pane_g10_ParamLimits

0x838c,	// (0x0000dbaf) cell_ai5_widget_pane_g10

0x3a27,	// (0x0000924a) status_icon_pane_g1

0xa539,	// (0x0000fd5c) bg_popup_sub_pane_cp13

0x3a2f,	// (0x00009252) popup_keymap_window_t1

0x5a76,	// (0x0000b299) control_pane_g6_ParamLimits

0x5a76,	// (0x0000b299) control_pane_g6

0x5a69,	// (0x0000b28c) control_pane_g7_ParamLimits

0x5a69,	// (0x0000b28c) control_pane_g7

0x5a5c,	// (0x0000b27f) control_pane_g8_ParamLimits

0x5a5c,	// (0x0000b27f) control_pane_g8

0x84c2,	// (0x0000dce5) dt_sta_controll_pane_ParamLimits

0x84cf,	// (0x0000dcf2) dt_sta_indi_pane_ParamLimits

0x84dc,	// (0x0000dcff) dt_sta_title_pane_ParamLimits

0xae3c,	// (0x0001065f) aid_size_touch_scroll_bar_cale

0x8cee,	// (0x0000e511) popup_discreet_window_ParamLimits

0x8cee,	// (0x0000e511) popup_discreet_window

0xce9c,	// (0x000126bf) popup_sk_window

0xdf46,	// (0x00013769) bg_popup_sub_pane_cp28_ParamLimits

0xdf46,	// (0x00013769) bg_popup_sub_pane_cp28

0x3a3d,	// (0x00009260) popup_discreet_window_g1_ParamLimits

0x3a3d,	// (0x00009260) popup_discreet_window_g1

0x3a5d,	// (0x00009280) popup_discreet_window_t1_ParamLimits

0x3a5d,	// (0x00009280) popup_discreet_window_t1

0x3a7b,	// (0x0000929e) popup_discreet_window_t2_ParamLimits

0x3a7b,	// (0x0000929e) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x000156cd) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x000156cd) popup_discreet_window_t

0xa507,	// (0x0000fd2a) popup_sk_window_g1

0xa510,	// (0x0000fd33) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x000156d4) popup_sk_window_g

0x3aed,	// (0x00009310) popup_sk_window_t1

0x3adf,	// (0x00009302) popup_sk_window_t1_copy1

0x8310,	// (0x0000db33) cell_ai5_widget_pane_g2_ParamLimits

0x8438,	// (0x0000dc5b) cell_ai5_widget_pane_t9_ParamLimits

0x8438,	// (0x0000dc5b) cell_ai5_widget_pane_t9

0xa539,	// (0x0000fd5c) main_fep_fshwr2_pane

0x856b,	// (0x0000dd8e) aid_fshwr2_btn_pane

0x8573,	// (0x0000dd96) aid_fshwr2_syb_pane

0x857b,	// (0x0000dd9e) aid_fshwr2_txt_pane

0x8583,	// (0x0000dda6) fshwr2_func_candi_pane

0x858b,	// (0x0000ddae) fshwr2_hwr_syb_pane

0x8593,	// (0x0000ddb6) fshwr2_icf_pane

0xa539,	// (0x0000fd5c) fshwr2_icf_bg_pane

0x859b,	// (0x0000ddbe) fshwr2_icf_pane_t1_ParamLimits

0x859b,	// (0x0000ddbe) fshwr2_icf_pane_t1

0x043d,	// (0x00005c60) fshwr2_func_candi_pane_g1

0x3b54,	// (0x00009377) fshwr2_func_candi_row_pane_ParamLimits

0x3b54,	// (0x00009377) fshwr2_func_candi_row_pane

0x85b3,	// (0x0000ddd6) cell_fshwr2_syb_pane_ParamLimits

0x85b3,	// (0x0000ddd6) cell_fshwr2_syb_pane

0x087d,	// (0x000060a0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x087d,	// (0x000060a0) fshwr2_hwr_syb_pane_g1

0xa539,	// (0x0000fd5c) bg_popup_call_pane_cp01

0x3b7c,	// (0x0000939f) fshwr2_func_candi_cell_pane_ParamLimits

0x3b7c,	// (0x0000939f) fshwr2_func_candi_cell_pane

0x3ba7,	// (0x000093ca) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3ba7,	// (0x000093ca) fshwr2_func_candi_cell_bg_pane

0x3bc1,	// (0x000093e4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x3bc1,	// (0x000093e4) fshwr2_func_candi_cell_pane_g1

0x3be1,	// (0x00009404) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x3be1,	// (0x00009404) fshwr2_func_candi_cell_pane_t1

0xa539,	// (0x0000fd5c) bg_button_pane_cp08

0xc1ad,	// (0x000119d0) cell_fshwr2_syb_bg_pane

0x85ca,	// (0x0000dded) cell_fshwr2_syb_bg_pane_g1

0x85d2,	// (0x0000ddf5) cell_fshwr2_syb_bg_pane_t1

0xb420,	// (0x00010c43) main_tmo_pane

0x6861,	// (0x0000c084) uni_indicator_pane_g1_ParamLimits

0x6876,	// (0x0000c099) uni_indicator_pane_g2_ParamLimits

0x688c,	// (0x0000c0af) uni_indicator_pane_g3_ParamLimits

0xe8d2,	// (0x000140f5) uni_indicator_pane_g4_ParamLimits

0xe8d2,	// (0x000140f5) uni_indicator_pane_g4

0xe8e6,	// (0x00014109) uni_indicator_pane_g5_ParamLimits

0xe8e6,	// (0x00014109) uni_indicator_pane_g5

0xe8fa,	// (0x0001411d) uni_indicator_pane_g6_ParamLimits

0xe8fa,	// (0x0001411d) uni_indicator_pane_g6

0xf93f,	// (0x00015162) uni_indicator_pane_g_ParamLimits

0x747c,	// (0x0000cc9f) popup_tmo_note_window_ParamLimits

0x747c,	// (0x0000cc9f) popup_tmo_note_window

0xa539,	// (0x0000fd5c) fshwr2_bg_pane

0x3bd2,	// (0x000093f5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x3bd2,	// (0x000093f5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x000156d9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x000156d9) fshwr2_func_candi_cell_pane_g

0x043d,	// (0x00005c60) bg_popup_window_pane_cp01

0x3c0b,	// (0x0000942e) bg_popup_window_pane_g1_cp01

0x3c14,	// (0x00009437) bg_popup_window_pane_cp22_ParamLimits

0x3c14,	// (0x00009437) bg_popup_window_pane_cp22

0x3c22,	// (0x00009445) listscroll_tmo_link_pane_ParamLimits

0x3c22,	// (0x00009445) listscroll_tmo_link_pane

0x3c62,	// (0x00009485) popup_tmo_note_window_g1_ParamLimits

0x3c62,	// (0x00009485) popup_tmo_note_window_g1

0x3c6f,	// (0x00009492) tmo_note_info_pane_ParamLimits

0x3c6f,	// (0x00009492) tmo_note_info_pane

0x85e1,	// (0x0000de04) list_tmo_note_info_pane_g1_ParamLimits

0x85e1,	// (0x0000de04) list_tmo_note_info_pane_g1

0x3ca0,	// (0x000094c3) list_tmo_note_info_pane_g2_ParamLimits

0x3ca0,	// (0x000094c3) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x000156de) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x000156de) list_tmo_note_info_pane_g

0x3cbc,	// (0x000094df) list_tmo_note_info_text_pane_ParamLimits

0x3cbc,	// (0x000094df) list_tmo_note_info_text_pane

0x3d3d,	// (0x00009560) list_tmo_link_pane

0x3d4a,	// (0x0000956d) scroll_pane_cp20

0x3d57,	// (0x0000957a) list_single_tmo_link_pane_ParamLimits

0x3d57,	// (0x0000957a) list_single_tmo_link_pane

0x3d67,	// (0x0000958a) list_single_tmo_link_pane_t1

0x3d75,	// (0x00009598) list_tmo_note_info_text_pane_t1_ParamLimits

0x3d75,	// (0x00009598) list_tmo_note_info_text_pane_t1

0xb646,	// (0x00010e69) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb646,	// (0x00010e69) aid_size_touch_scroll_bar_cp01

0x55e3,	// (0x0000ae06) aid_size_touch_slider_marker

0xce90,	// (0x000126b3) popup_settings_window_ParamLimits

0xce90,	// (0x000126b3) popup_settings_window

0xd6f1,	// (0x00012f14) popup_candi_list_indi_window

0xd7f6,	// (0x00013019) aid_touch_navi_pane_ParamLimits

0x9d5a,	// (0x0000f57d) rs_clock_indi_pane

0x9d63,	// (0x0000f586) sctrl_sk_bottom_pane_ParamLimits

0x9d74,	// (0x0000f597) sctrl_sk_top_pane_ParamLimits

0x9e7c,	// (0x0000f69f) popup_fep_tooltip_window

0x82e1,	// (0x0000db04) aid_size_cell_widget_grid_ParamLimits

0x8304,	// (0x0000db27) cell_ai5_widget_pane_g1_ParamLimits

0x8304,	// (0x0000db27) cell_ai5_widget_pane_g1

0x834c,	// (0x0000db6f) cell_ai5_widget_pane_g6_ParamLimits

0x8358,	// (0x0000db7b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x0001565c) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0001565c) cell_ai5_widget_pane_g

0x845c,	// (0x0000dc7f) cell_ai5_widget_pane_t10_ParamLimits

0x845c,	// (0x0000dc7f) cell_ai5_widget_pane_t10

0x846e,	// (0x0000dc91) grid_ai5_widget_pane_ParamLimits

0x38b0,	// (0x000090d3) cell_contacts_ai5_widget_pane_ParamLimits

0x38b0,	// (0x000090d3) cell_contacts_ai5_widget_pane

0x3a90,	// (0x000092b3) popup_discreet_window_t3_ParamLimits

0x3a90,	// (0x000092b3) popup_discreet_window_t3

0x3b2b,	// (0x0000934e) popup_fshwr2_char_preview_window_ParamLimits

0x3b2b,	// (0x0000934e) popup_fshwr2_char_preview_window

0x85f8,	// (0x0000de1b) tmo_note_info_pane_t1

0x860d,	// (0x0000de30) tmo_note_info_pane_t2

0x8622,	// (0x0000de45) tmo_note_info_pane_t3

0x3d19,	// (0x0000953c) tmo_note_info_pane_t4

0x3d2b,	// (0x0000954e) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x000156e3) tmo_note_info_pane_t

0x3d3d,	// (0x00009560) list_tmo_link_pane_ParamLimits

0x3d4a,	// (0x0000956d) scroll_pane_cp20_ParamLimits

0xa539,	// (0x0000fd5c) bg_popup_fep_char_preview_window_cp01

0x3d8e,	// (0x000095b1) popup_fshwr2_char_preview_window_t1

0x3d9c,	// (0x000095bf) popup_candi_list_indi_window_g1

0x3da5,	// (0x000095c8) bg_cell_contacts_ai5_widget_pane

0x3db1,	// (0x000095d4) cell_contacts_ai5_widget_pane_g1

0x3dc5,	// (0x000095e8) cell_contacts_ai5_widget_pane_g2

0x3dd4,	// (0x000095f7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x000156ee) cell_contacts_ai5_widget_pane_g

0x3de7,	// (0x0000960a) cell_contacts_ai5_widget_pane_t1

0xb420,	// (0x00010c43) highlight_cell_shortcut_ai5_widget_pane_cp01

0x869a,	// (0x0000debd) settings_container_pane

0xc1ad,	// (0x000119d0) listscroll_set_pane_copy1

0xf0f6,	// (0x00014919) scroll_pane_cp121_copy1

0x3e6b,	// (0x0000968e) set_content_pane_copy1

0x3e73,	// (0x00009696) aid_height_set_list_copy1_ParamLimits

0x3e73,	// (0x00009696) aid_height_set_list_copy1

0xeb1e,	// (0x00014341) aid_size_parent_copy1_ParamLimits

0xeb1e,	// (0x00014341) aid_size_parent_copy1

0x86a6,	// (0x0000dec9) button_value_adjust_pane_cp6_copy1_ParamLimits

0x86a6,	// (0x0000dec9) button_value_adjust_pane_cp6_copy1

0xd685,	// (0x00012ea8) list_highlight_pane_cp2_copy1_ParamLimits

0xd685,	// (0x00012ea8) list_highlight_pane_cp2_copy1

0x86ba,	// (0x0000dedd) list_set_pane_copy1_ParamLimits

0x86ba,	// (0x0000dedd) list_set_pane_copy1

0x8637,	// (0x0000de5a) main_pane_set_t1_copy1_ParamLimits

0x8637,	// (0x0000de5a) main_pane_set_t1_copy1

0x8671,	// (0x0000de94) main_pane_set_t2_copy1_ParamLimits

0x8671,	// (0x0000de94) main_pane_set_t2_copy1

0x3f21,	// (0x00009744) main_pane_set_t3_copy1

0x3f2f,	// (0x00009752) main_pane_set_t4_copy1

0x868e,	// (0x0000deb1) set_content_pane_g1_copy1_ParamLimits

0x868e,	// (0x0000deb1) set_content_pane_g1_copy1

0x8748,	// (0x0000df6b) setting_code_pane_copy1

0x3f45,	// (0x00009768) setting_slider_graphic_pane_copy1

0x3f45,	// (0x00009768) setting_slider_pane_copy1

0x3f4d,	// (0x00009770) setting_text_pane_copy1

0x3f45,	// (0x00009768) setting_volume_pane_copy1

0x8750,	// (0x0000df73) settings_code_pane_cp2_copy1

0x8758,	// (0x0000df7b) settings_code_pane_cp_copy1_ParamLimits

0x8758,	// (0x0000df7b) settings_code_pane_cp_copy1

0x876c,	// (0x0000df8f) volume_set_pane_copy1

0x8774,	// (0x0000df97) volume_set_pane_g10_copy1

0x877c,	// (0x0000df9f) volume_set_pane_g1_copy1

0x8784,	// (0x0000dfa7) volume_set_pane_g2_copy1

0x878c,	// (0x0000dfaf) volume_set_pane_g3_copy1

0x8794,	// (0x0000dfb7) volume_set_pane_g4_copy1

0x879c,	// (0x0000dfbf) volume_set_pane_g5_copy1

0x87a4,	// (0x0000dfc7) volume_set_pane_g6_copy1

0x87ac,	// (0x0000dfcf) volume_set_pane_g7_copy1

0x87b4,	// (0x0000dfd7) volume_set_pane_g8_copy1

0x87bc,	// (0x0000dfdf) volume_set_pane_g9_copy1

0xa70a,	// (0x0000ff2d) bg_set_opt_pane_cp_copy1_ParamLimits

0xa70a,	// (0x0000ff2d) bg_set_opt_pane_cp_copy1

0xa9bf,	// (0x000101e2) setting_slider_pane_t1_copy1_ParamLimits

0xa9bf,	// (0x000101e2) setting_slider_pane_t1_copy1

0x3fc9,	// (0x000097ec) setting_slider_pane_t2_copy1_ParamLimits

0x3fc9,	// (0x000097ec) setting_slider_pane_t2_copy1

0x3fe2,	// (0x00009805) setting_slider_pane_t3_copy1_ParamLimits

0x3fe2,	// (0x00009805) setting_slider_pane_t3_copy1

0xa9d5,	// (0x000101f8) slider_set_pane_copy1_ParamLimits

0xa9d5,	// (0x000101f8) slider_set_pane_copy1

0xb546,	// (0x00010d69) set_opt_bg_pane_g1_copy2

0xb54e,	// (0x00010d71) set_opt_bg_pane_g2_copy2

0x3ff9,	// (0x0000981c) set_opt_bg_pane_g3_copy2

0xb55e,	// (0x00010d81) set_opt_bg_pane_g4_copy2

0xb566,	// (0x00010d89) set_opt_bg_pane_g5_copy2

0xb56e,	// (0x00010d91) set_opt_bg_pane_g6_copy2

0x87c4,	// (0x0000dfe7) set_opt_bg_pane_g7_copy2

0x4009,	// (0x0000982c) set_opt_bg_pane_g8_copy2

0x4011,	// (0x00009834) set_opt_bg_pane_g9_copy2

0xeac0,	// (0x000142e3) aid_size_touch_slider_mark_copy1_ParamLimits

0xeac0,	// (0x000142e3) aid_size_touch_slider_mark_copy1

0xeb30,	// (0x00014353) slider_set_pane_g1_copy1

0xeb39,	// (0x0001435c) slider_set_pane_g2_copy1

0xead4,	// (0x000142f7) slider_set_pane_g3_copy1_ParamLimits

0xead4,	// (0x000142f7) slider_set_pane_g3_copy1

0xec96,	// (0x000144b9) slider_set_pane_g4_copy1_ParamLimits

0xec96,	// (0x000144b9) slider_set_pane_g4_copy1

0xecae,	// (0x000144d1) slider_set_pane_g5_copy1_ParamLimits

0xecae,	// (0x000144d1) slider_set_pane_g5_copy1

0xead4,	// (0x000142f7) slider_set_pane_g6_copy1_ParamLimits

0xead4,	// (0x000142f7) slider_set_pane_g6_copy1

0x87cc,	// (0x0000dfef) slider_set_pane_g7_copy1_ParamLimits

0x87cc,	// (0x0000dfef) slider_set_pane_g7_copy1

0xa62a,	// (0x0000fe4d) bg_set_opt_pane_cp2_copy1

0xa74c,	// (0x0000ff6f) setting_slider_graphic_pane_g1_copy1

0x87e2,	// (0x0000e005) setting_slider_graphic_pane_t1_copy1

0x87f1,	// (0x0000e014) setting_slider_graphic_pane_t2_copy1

0x8800,	// (0x0000e023) slider_set_pane_cp_copy1

0x405d,	// (0x00009880) input_focus_pane_cp1_copy1

0x4066,	// (0x00009889) list_set_text_pane_copy1

0x406e,	// (0x00009891) setting_text_pane_g1_copy1

0x4077,	// (0x0000989a) set_text_pane_t1_copy1

0x405d,	// (0x00009880) input_focus_pane_cp2_copy1

0x406e,	// (0x00009891) setting_code_pane_g1_copy1

0x4090,	// (0x000098b3) setting_code_pane_t1_copy1

0x596b,	// (0x0000b18e) list_set_graphic_pane_copy1

0xa62a,	// (0x0000fe4d) bg_set_opt_pane_cp4_copy1

0x40b2,	// (0x000098d5) list_set_graphic_pane_g1_copy1_ParamLimits

0x40b2,	// (0x000098d5) list_set_graphic_pane_g1_copy1

0x40be,	// (0x000098e1) list_set_graphic_pane_g2_copy1

0xbf28,	// (0x0001174b) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf28,	// (0x0001174b) list_set_graphic_pane_t1_copy1

0x043d,	// (0x00005c60) rs_clock_indi_pane_g1

0x40c6,	// (0x000098e9) rs_clock_indi_pane_t1

0x40d4,	// (0x000098f7) rs_indi_pane

0x40dc,	// (0x000098ff) rs_indi_pane_g1

0x40e5,	// (0x00009908) rs_indi_pane_g2

0x3d9c,	// (0x000095bf) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x000156f5) rs_indi_pane_g

0xc1ad,	// (0x000119d0) bg_popup_preview_window_pane_cp03

0x40ee,	// (0x00009911) popup_fep_tooltip_window_t1

0x159b,	// (0x00006dbe) popup_note2_window_g2_ParamLimits

0x159b,	// (0x00006dbe) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0001549a) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0001549a) popup_note2_window_g

0x1b94,	// (0x000073b7) bg_popup_sub_pane_cp11_ParamLimits

0x1ba1,	// (0x000073c4) cell_ai3_links_pane_g1_ParamLimits

0x1bb8,	// (0x000073db) cell_ai3_links_pane_t1

0x4077,	// (0x0000989a) set_text_pane_t1_copy1_ParamLimits

0xc0d4,	// (0x000118f7) cell_graphic_popup_pane_cp2_ParamLimits

0xc0d4,	// (0x000118f7) cell_graphic_popup_pane_cp2

0x40fc,	// (0x0000991f) cell_graphic_popup_pane_g1_cp2

0xaceb,	// (0x0001050e) cell_graphic_popup_pane_g2_cp2

0x4104,	// (0x00009927) cell_graphic_popup_pane_g3_cp2

0x410c,	// (0x0000992f) cell_graphic_popup_pane_t2_cp2

0xacfc,	// (0x0001051f) grid_highlight_pane_cp3_cp2

0xb932,	// (0x00011155) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb420,	// (0x00010c43) main_tmo_pane_ParamLimits

0x7474,	// (0x0000cc97) popup_tmo_big_image_note_window

0x82f4,	// (0x0000db17) cell_ai5_widget_list_pane

0x82fc,	// (0x0000db1f) cell_ai5_widget_lrg_icon_pane

0x85f8,	// (0x0000de1b) tmo_note_info_pane_t1_ParamLimits

0x860d,	// (0x0000de30) tmo_note_info_pane_t2_ParamLimits

0x8622,	// (0x0000de45) tmo_note_info_pane_t3_ParamLimits

0x3d19,	// (0x0000953c) tmo_note_info_pane_t4_ParamLimits

0x3d2b,	// (0x0000954e) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x000156e3) tmo_note_info_pane_t_ParamLimits

0x869a,	// (0x0000debd) settings_container_pane_ParamLimits

0x4055,	// (0x00009878) indicator_popup_pane_cp5

0x4055,	// (0x00009878) indicator_popup_pane_cp6

0x596b,	// (0x0000b18e) list_set_graphic_pane_copy1_ParamLimits

0xa539,	// (0x0000fd5c) bg_popup_window_pane_cp23

0x411a,	// (0x0000993d) popup_tmo_big_image_note_window_g1

0x4123,	// (0x00009946) popup_tmo_big_image_note_window_t1

0x4131,	// (0x00009954) popup_tmo_big_image_note_window_t2

0x413f,	// (0x00009962) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x000156fc) popup_tmo_big_image_note_window_t

0x8808,	// (0x0000e02b) cell_ai5_widget_lrg_icon_pane_g1

0x8810,	// (0x0000e033) cell_ai5_widget_lrg_icon_pane_t1

0x881e,	// (0x0000e041) cell_ai5_widget_list_row_pane_ParamLimits

0x881e,	// (0x0000e041) cell_ai5_widget_list_row_pane

0x8837,	// (0x0000e05a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8837,	// (0x0000e05a) cell_ai5_widget_list_row_pane_g1

0x8844,	// (0x0000e067) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8844,	// (0x0000e067) cell_ai5_widget_list_row_pane_t1

0x885c,	// (0x0000e07f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x885c,	// (0x0000e07f) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee0,	// (0x00015703) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x00015703) cell_ai5_widget_list_row_pane_t

0x8c17,	// (0x0000e43a) main_fep_vtchi_ss_pane

0x41b3,	// (0x000099d6) popup_fep_char_pre_window

0x41bb,	// (0x000099de) popup_fep_ituss_window

0x41c4,	// (0x000099e7) popup_fep_vkbss_window

0x41cd,	// (0x000099f0) grid_vkbss_keypad_pane_ParamLimits

0x41cd,	// (0x000099f0) grid_vkbss_keypad_pane

0x41dd,	// (0x00009a00) ituss_keypad_pane

0x41e5,	// (0x00009a08) aid_vkbss_key_offset_ParamLimits

0x41e5,	// (0x00009a08) aid_vkbss_key_offset

0x41f4,	// (0x00009a17) cell_vkbss_key_pane_ParamLimits

0x41f4,	// (0x00009a17) cell_vkbss_key_pane

0x420a,	// (0x00009a2d) bg_cell_vkbss_key_g1_ParamLimits

0x420a,	// (0x00009a2d) bg_cell_vkbss_key_g1

0x4216,	// (0x00009a39) cell_vkbss_key_3p_pane_ParamLimits

0x4216,	// (0x00009a39) cell_vkbss_key_3p_pane

0x422a,	// (0x00009a4d) cell_vkbss_key_g1_ParamLimits

0x422a,	// (0x00009a4d) cell_vkbss_key_g1

0x423e,	// (0x00009a61) cell_vkbss_key_t1_ParamLimits

0x423e,	// (0x00009a61) cell_vkbss_key_t1

0x4269,	// (0x00009a8c) cell_ituss_key_pane_ParamLimits

0x4269,	// (0x00009a8c) cell_ituss_key_pane

0x4278,	// (0x00009a9b) bg_cell_ituss_key_g1_ParamLimits

0x4278,	// (0x00009a9b) bg_cell_ituss_key_g1

0x4284,	// (0x00009aa7) cell_ituss_key_pane_g1_ParamLimits

0x4284,	// (0x00009aa7) cell_ituss_key_pane_g1

0x4290,	// (0x00009ab3) cell_ituss_key_pane_g2_ParamLimits

0x4290,	// (0x00009ab3) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x00015708) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x00015708) cell_ituss_key_pane_g

0x42a3,	// (0x00009ac6) cell_ituss_key_t1_ParamLimits

0x42a3,	// (0x00009ac6) cell_ituss_key_t1

0x42c1,	// (0x00009ae4) cell_ituss_key_t2_ParamLimits

0x42c1,	// (0x00009ae4) cell_ituss_key_t2

0x42e0,	// (0x00009b03) cell_ituss_key_t3_ParamLimits

0x42e0,	// (0x00009b03) cell_ituss_key_t3

0x42ff,	// (0x00009b22) cell_ituss_key_t4_ParamLimits

0x42ff,	// (0x00009b22) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x0001570d) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0001570d) cell_ituss_key_t

0x431e,	// (0x00009b41) cell_vkbss_key_3p_pane_g1

0x4326,	// (0x00009b49) cell_vkbss_key_3p_pane_g2

0x432e,	// (0x00009b51) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00015716) cell_vkbss_key_3p_pane_g

0xa539,	// (0x0000fd5c) bg_popup_fep_char_preview_window_cp02

0x4336,	// (0x00009b59) popup_fep_char_pre_window_t1

0x82d7,	// (0x0000dafa) main_ai5_sk_pane

0x3da5,	// (0x000095c8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3db1,	// (0x000095d4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3dc5,	// (0x000095e8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3dd4,	// (0x000095f7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x000156ee) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3de7,	// (0x0000960a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb420,	// (0x00010c43) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x886e,	// (0x0000e091) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
