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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000a984 };

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
0x683f,	// (0x000111c3) Screen

0x6853,	// (0x000111d7) application_window_ParamLimits

0x6853,	// (0x000111d7) application_window

0x686d,	// (0x000111f1) screen_g1

0x4c6f,	// (0x0000f5f3) area_bottom_pane_ParamLimits

0x4c6f,	// (0x0000f5f3) area_bottom_pane

0x4d2f,	// (0x0000f6b3) area_top_pane_ParamLimits

0x4d2f,	// (0x0000f6b3) area_top_pane

0x4dcd,	// (0x0000f751) main_pane_ParamLimits

0x4dcd,	// (0x0000f751) main_pane

0x6877,	// (0x000111fb) misc_graphics

0x8f48,	// (0x000138cc) battery_pane_ParamLimits

0x8f48,	// (0x000138cc) battery_pane

0x9cfd,	// (0x00014681) bg_status_flat_pane_g8

0x9d05,	// (0x00014689) bg_status_flat_pane_g9

0x900a,	// (0x0001398e) context_pane_ParamLimits

0x900a,	// (0x0001398e) context_pane

0x9120,	// (0x00013aa4) navi_pane_ParamLimits

0x9120,	// (0x00013aa4) navi_pane

0x919d,	// (0x00013b21) signal_pane_ParamLimits

0x919d,	// (0x00013b21) signal_pane

0x0008,

0xf885,	// (0x0001a209) bg_status_flat_pane_g

0x920a,	// (0x00013b8e) status_pane_g1_ParamLimits

0x920a,	// (0x00013b8e) status_pane_g1

0x921e,	// (0x00013ba2) status_pane_g2_ParamLimits

0x921e,	// (0x00013ba2) status_pane_g2

0x922a,	// (0x00013bae) status_pane_g3_ParamLimits

0x922a,	// (0x00013bae) status_pane_g3

0x0004,

0xf7b3,	// (0x0001a137) status_pane_g_ParamLimits

0xf7b3,	// (0x0001a137) status_pane_g

0x925e,	// (0x00013be2) title_pane_ParamLimits

0x925e,	// (0x00013be2) title_pane

0x929b,	// (0x00013c1f) uni_indicator_pane_ParamLimits

0x929b,	// (0x00013c1f) uni_indicator_pane

0x88b5,	// (0x00013239) bg_list_pane_ParamLimits

0x88b5,	// (0x00013239) bg_list_pane

0x88d5,	// (0x00013259) find_pane

0x88dd,	// (0x00013261) listscroll_app_pane_ParamLimits

0x88dd,	// (0x00013261) listscroll_app_pane

0x88e9,	// (0x0001326d) listscroll_form_pane

0x88f1,	// (0x00013275) listscroll_gen_pane_ParamLimits

0x88f1,	// (0x00013275) listscroll_gen_pane

0x88e9,	// (0x0001326d) listscroll_set_pane

0x7aa9,	// (0x0001242d) main_idle_act_pane

0x858d,	// (0x00012f11) main_idle_trad_pane

0x858d,	// (0x00012f11) main_list_empty_pane

0x8917,	// (0x0001329b) main_midp_pane

0x8923,	// (0x000132a7) main_pane_g1_ParamLimits

0x8923,	// (0x000132a7) main_pane_g1

0x8931,	// (0x000132b5) popup_ai_message_window_ParamLimits

0x8931,	// (0x000132b5) popup_ai_message_window

0x89db,	// (0x0001335f) popup_fep_china_uni_window_ParamLimits

0x89db,	// (0x0001335f) popup_fep_china_uni_window

0x8a37,	// (0x000133bb) popup_fep_japan_candidate_window_ParamLimits

0x8a37,	// (0x000133bb) popup_fep_japan_candidate_window

0x8a57,	// (0x000133db) popup_fep_japan_predictive_window_ParamLimits

0x8a57,	// (0x000133db) popup_fep_japan_predictive_window

0x8a87,	// (0x0001340b) popup_find_window

0x8a94,	// (0x00013418) popup_grid_graphic_window_ParamLimits

0x8a94,	// (0x00013418) popup_grid_graphic_window

0x8abc,	// (0x00013440) popup_large_graphic_colour_window

0x8ae2,	// (0x00013466) popup_menu_window_ParamLimits

0x8ae2,	// (0x00013466) popup_menu_window

0x8c9a,	// (0x0001361e) popup_note_image_window

0x8c86,	// (0x0001360a) popup_note_wait_window_ParamLimits

0x8c86,	// (0x0001360a) popup_note_wait_window

0x8c86,	// (0x0001360a) popup_note_window_ParamLimits

0x8c86,	// (0x0001360a) popup_note_window

0x8cf0,	// (0x00013674) popup_query_code_window_ParamLimits

0x8cf0,	// (0x00013674) popup_query_code_window

0x8d04,	// (0x00013688) popup_query_data_code_window_ParamLimits

0x8d04,	// (0x00013688) popup_query_data_code_window

0x8d21,	// (0x000136a5) popup_query_data_window_ParamLimits

0x8d21,	// (0x000136a5) popup_query_data_window

0x8d3d,	// (0x000136c1) popup_query_sat_info_window_ParamLimits

0x8d3d,	// (0x000136c1) popup_query_sat_info_window

0x8d76,	// (0x000136fa) popup_snote_single_graphic_window_ParamLimits

0x8d76,	// (0x000136fa) popup_snote_single_graphic_window

0x8d76,	// (0x000136fa) popup_snote_single_text_window_ParamLimits

0x8d76,	// (0x000136fa) popup_snote_single_text_window

0x8d8b,	// (0x0001370f) popup_sub_window_general

0x8ebb,	// (0x0001383f) popup_window_general_ParamLimits

0x8ebb,	// (0x0001383f) popup_window_general

0x8ed0,	// (0x00013854) power_save_pane

0x552c,	// (0x0000feb0) control_pane_g1_ParamLimits

0x552c,	// (0x0000feb0) control_pane_g1

0x5555,	// (0x0000fed9) control_pane_g2_ParamLimits

0x5555,	// (0x0000fed9) control_pane_g2

0x8856,	// (0x000131da) control_pane_g3_ParamLimits

0x8856,	// (0x000131da) control_pane_g3

0x0007,

0xf79b,	// (0x0001a11f) control_pane_g_ParamLimits

0xf79b,	// (0x0001a11f) control_pane_g

0x559c,	// (0x0000ff20) control_pane_t1_ParamLimits

0x559c,	// (0x0000ff20) control_pane_t1

0x55ee,	// (0x0000ff72) control_pane_t2_ParamLimits

0x55ee,	// (0x0000ff72) control_pane_t2

0x0002,

0xf7ac,	// (0x0001a130) control_pane_t_ParamLimits

0xf7ac,	// (0x0001a130) control_pane_t

0x8777,	// (0x000130fb) navi_navi_volume_pane_cp1

0x8780,	// (0x00013104) status_small_icon_pane

0x8788,	// (0x0001310c) status_small_pane_g1_ParamLimits

0x8788,	// (0x0001310c) status_small_pane_g1

0x87bc,	// (0x00013140) status_small_pane_g2_ParamLimits

0x87bc,	// (0x00013140) status_small_pane_g2

0x87c8,	// (0x0001314c) status_small_pane_g3_ParamLimits

0x87c8,	// (0x0001314c) status_small_pane_g3

0x87d4,	// (0x00013158) status_small_pane_g4_ParamLimits

0x87d4,	// (0x00013158) status_small_pane_g4

0x87e0,	// (0x00013164) status_small_pane_g5_ParamLimits

0x87e0,	// (0x00013164) status_small_pane_g5

0x87ef,	// (0x00013173) status_small_pane_g6_ParamLimits

0x87ef,	// (0x00013173) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001a10e) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001a10e) status_small_pane_g

0x881f,	// (0x000131a3) status_small_pane_t1

0x8842,	// (0x000131c6) status_small_wait_pane_ParamLimits

0x8842,	// (0x000131c6) status_small_wait_pane

0x7fa1,	// (0x00012925) aid_levels_signal_ParamLimits

0x7fa1,	// (0x00012925) aid_levels_signal

0x7fb3,	// (0x00012937) signal_pane_g1_ParamLimits

0x7fb3,	// (0x00012937) signal_pane_g1

0x7fc8,	// (0x0001294c) signal_pane_g2_ParamLimits

0x7fc8,	// (0x0001294c) signal_pane_g2

0x0001,

0xf71f,	// (0x0001a0a3) signal_pane_g_ParamLimits

0xf71f,	// (0x0001a0a3) signal_pane_g

0x7fdd,	// (0x00012961) context_pane_g1

0x6881,	// (0x00011205) title_pane_g1

0x68b7,	// (0x0001123b) title_pane_t1

0x691f,	// (0x000112a3) title_pane_t2

0x6945,	// (0x000112c9) title_pane_t3

0x0002,

0xf573,	// (0x00019ef7) title_pane_t

0x92b3,	// (0x00013c37) aid_levels_battery_ParamLimits

0x92b3,	// (0x00013c37) aid_levels_battery

0x92c7,	// (0x00013c4b) battery_pane_g1_ParamLimits

0x92c7,	// (0x00013c4b) battery_pane_g1

0x92dd,	// (0x00013c61) battery_pane_g2_ParamLimits

0x92dd,	// (0x00013c61) battery_pane_g2

0x0001,

0xf7be,	// (0x0001a142) battery_pane_g_ParamLimits

0xf7be,	// (0x0001a142) battery_pane_g

0xa639,	// (0x00014fbd) uni_indicator_pane_g1

0xa64e,	// (0x00014fd2) uni_indicator_pane_g2

0xa664,	// (0x00014fe8) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0001a2b1) uni_indicator_pane_g

0x83ff,	// (0x00012d83) navi_icon_pane_ParamLimits

0x83ff,	// (0x00012d83) navi_icon_pane

0x8348,	// (0x00012ccc) navi_midp_pane

0x841b,	// (0x00012d9f) navi_navi_pane

0x8425,	// (0x00012da9) navi_text_pane_ParamLimits

0x8425,	// (0x00012da9) navi_text_pane

0x686d,	// (0x000111f1) status_small_wait_pane_g1

0x6d8e,	// (0x00011712) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0001a2ac) status_small_wait_pane_g

0xa35e,	// (0x00014ce2) navi_navi_icon_text_pane

0xa366,	// (0x00014cea) navi_navi_pane_g1_ParamLimits

0xa366,	// (0x00014cea) navi_navi_pane_g1

0xa378,	// (0x00014cfc) navi_navi_pane_g2_ParamLimits

0xa378,	// (0x00014cfc) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0001a27a) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0001a27a) navi_navi_pane_g

0xa38a,	// (0x00014d0e) navi_navi_tabs_pane

0xa393,	// (0x00014d17) navi_navi_text_pane

0xa35e,	// (0x00014ce2) navi_navi_volume_pane

0xa337,	// (0x00014cbb) navi_text_pane_t1

0xa328,	// (0x00014cac) navi_icon_pane_g1

0xa27b,	// (0x00014bff) navi_navi_text_pane_t1

0x5984,	// (0x00010308) navi_navi_volume_pane_g1

0x598c,	// (0x00010310) volume_small_pane

0xa1e1,	// (0x00014b65) navi_navi_icon_text_pane_g1

0xa1e9,	// (0x00014b6d) navi_navi_icon_text_pane_t1

0x841b,	// (0x00012d9f) navi_tabs_2_long_pane

0x841b,	// (0x00012d9f) navi_tabs_2_pane

0x841b,	// (0x00012d9f) navi_tabs_3_long_pane

0x841b,	// (0x00012d9f) navi_tabs_3_pane

0x841b,	// (0x00012d9f) navi_tabs_4_pane

0x5964,	// (0x000102e8) tabs_2_active_pane_ParamLimits

0x5964,	// (0x000102e8) tabs_2_active_pane

0x5974,	// (0x000102f8) tabs_2_passive_pane_ParamLimits

0x5974,	// (0x000102f8) tabs_2_passive_pane

0x5932,	// (0x000102b6) tabs_3_active_pane_ParamLimits

0x5932,	// (0x000102b6) tabs_3_active_pane

0x5942,	// (0x000102c6) tabs_3_passive_pane_ParamLimits

0x5942,	// (0x000102c6) tabs_3_passive_pane

0x5953,	// (0x000102d7) tabs_3_passive_pane_cp_ParamLimits

0x5953,	// (0x000102d7) tabs_3_passive_pane_cp

0x58ee,	// (0x00010272) tabs_4_active_pane_ParamLimits

0x58ee,	// (0x00010272) tabs_4_active_pane

0x58ff,	// (0x00010283) tabs_4_passive_pane_ParamLimits

0x58ff,	// (0x00010283) tabs_4_passive_pane

0x5910,	// (0x00010294) tabs_4_passive_pane_cp_ParamLimits

0x5910,	// (0x00010294) tabs_4_passive_pane_cp

0x5921,	// (0x000102a5) tabs_4_passive_pane_cp2_ParamLimits

0x5921,	// (0x000102a5) tabs_4_passive_pane_cp2

0x58ca,	// (0x0001024e) tabs_2_long_active_pane_ParamLimits

0x58ca,	// (0x0001024e) tabs_2_long_active_pane

0x58dc,	// (0x00010260) tabs_2_long_passive_pane_ParamLimits

0x58dc,	// (0x00010260) tabs_2_long_passive_pane

0x588b,	// (0x0001020f) tabs_3_long_active_pane_ParamLimits

0x588b,	// (0x0001020f) tabs_3_long_active_pane

0x589e,	// (0x00010222) tabs_3_long_passive_pane_ParamLimits

0x589e,	// (0x00010222) tabs_3_long_passive_pane

0x58b7,	// (0x0001023b) tabs_3_long_passive_pane_cp_ParamLimits

0x58b7,	// (0x0001023b) tabs_3_long_passive_pane_cp

0x5831,	// (0x000101b5) volume_small_pane_g1

0x583a,	// (0x000101be) volume_small_pane_g2

0x5843,	// (0x000101c7) volume_small_pane_g3

0x584c,	// (0x000101d0) volume_small_pane_g4

0x5855,	// (0x000101d9) volume_small_pane_g5

0x585e,	// (0x000101e2) volume_small_pane_g6

0x5867,	// (0x000101eb) volume_small_pane_g7

0x5870,	// (0x000101f4) volume_small_pane_g8

0x5879,	// (0x000101fd) volume_small_pane_g9

0x5882,	// (0x00010206) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0001a246) volume_small_pane_g

0x6957,	// (0x000112db) bg_active_tab_pane_cp2_ParamLimits

0x6957,	// (0x000112db) bg_active_tab_pane_cp2

0x6965,	// (0x000112e9) tabs_3_active_pane_g1

0x696d,	// (0x000112f1) tabs_3_active_pane_t1

0x6957,	// (0x000112db) bg_passive_tab_pane_cp2_ParamLimits

0x6957,	// (0x000112db) bg_passive_tab_pane_cp2

0x6965,	// (0x000112e9) tabs_3_passive_pane_g1

0x696d,	// (0x000112f1) tabs_3_passive_pane_t1

0x6957,	// (0x000112db) bg_active_tab_pane_cp3_ParamLimits

0x6957,	// (0x000112db) bg_active_tab_pane_cp3

0x697f,	// (0x00011303) tabs_4_active_pane_g1

0x6987,	// (0x0001130b) tabs_4_active_pane_t1

0x6957,	// (0x000112db) bg_passive_tab_pane_cp3_ParamLimits

0x6957,	// (0x000112db) bg_passive_tab_pane_cp3

0x697f,	// (0x00011303) tabs_4_1_passive_pane_g1

0x6987,	// (0x0001130b) tabs_4_1_passive_pane_t1

0x8917,	// (0x0001329b) list_highlight_pane_cp2

0xa8ea,	// (0x0001526e) list_set_pane_ParamLimits

0xa8ea,	// (0x0001526e) list_set_pane

0xa990,	// (0x00015314) main_pane_set_t1_ParamLimits

0xa990,	// (0x00015314) main_pane_set_t1

0xa9b0,	// (0x00015334) main_pane_set_t2_ParamLimits

0xa9b0,	// (0x00015334) main_pane_set_t2

0xa9c4,	// (0x00015348) main_pane_set_t3_ParamLimits

0xa9c4,	// (0x00015348) main_pane_set_t3

0xa9d6,	// (0x0001535a) main_pane_set_t4_ParamLimits

0xa9d6,	// (0x0001535a) main_pane_set_t4

0x0003,

0xf992,	// (0x0001a316) main_pane_set_t_ParamLimits

0xf992,	// (0x0001a316) main_pane_set_t

0xa9e8,	// (0x0001536c) setting_code_pane

0xa9f4,	// (0x00015378) setting_slider_graphic_pane

0xa9f4,	// (0x00015378) setting_slider_pane

0xa9f4,	// (0x00015378) setting_text_pane

0xa9f4,	// (0x00015378) setting_volume_pane

0x5012,	// (0x0000f996) volume_set_pane

0x6957,	// (0x000112db) bg_set_opt_pane_cp

0x501a,	// (0x0000f99e) setting_slider_pane_t1

0x5033,	// (0x0000f9b7) setting_slider_pane_t2

0x504d,	// (0x0000f9d1) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00019efe) setting_slider_pane_t

0x5065,	// (0x0000f9e9) slider_set_pane

0x6877,	// (0x000111fb) bg_set_opt_pane_cp2

0x6999,	// (0x0001131d) setting_slider_graphic_pane_g1

0x507b,	// (0x0000f9ff) setting_slider_graphic_pane_t1

0x508b,	// (0x0000fa0f) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00019f05) setting_slider_graphic_pane_t

0x509b,	// (0x0000fa1f) slider_set_pane_cp

0x6877,	// (0x000111fb) input_focus_pane_cp1

0xa8a9,	// (0x0001522d) list_set_text_pane

0x686d,	// (0x000111f1) setting_text_pane_g1

0x6877,	// (0x000111fb) input_focus_pane_cp2

0x686d,	// (0x000111f1) setting_code_pane_g1

0x69a2,	// (0x00011326) setting_code_pane_t1

0x69b0,	// (0x00011334) set_text_pane_t1_ParamLimits

0x69b0,	// (0x00011334) set_text_pane_t1

0x7876,	// (0x000121fa) set_opt_bg_pane_g1

0x787e,	// (0x00012202) set_opt_bg_pane_g2

0xa883,	// (0x00015207) set_opt_bg_pane_g3

0x788e,	// (0x00012212) set_opt_bg_pane_g4

0x7896,	// (0x0001221a) set_opt_bg_pane_g5

0x789e,	// (0x00012222) set_opt_bg_pane_g6

0xa88d,	// (0x00015211) set_opt_bg_pane_g7

0xa895,	// (0x00015219) set_opt_bg_pane_g8

0xa89f,	// (0x00015223) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0001a303) set_opt_bg_pane_g

0xa876,	// (0x000151fa) slider_set_pane_g1

0x59f9,	// (0x0001037d) slider_set_pane_g2

0x0006,

0xf970,	// (0x0001a2f4) slider_set_pane_g

0x5995,	// (0x00010319) volume_set_pane_g1

0x599d,	// (0x00010321) volume_set_pane_g2

0x59a5,	// (0x00010329) volume_set_pane_g3

0x59ad,	// (0x00010331) volume_set_pane_g4

0x59b5,	// (0x00010339) volume_set_pane_g5

0x59bd,	// (0x00010341) volume_set_pane_g6

0x59c5,	// (0x00010349) volume_set_pane_g7

0x59cd,	// (0x00010351) volume_set_pane_g8

0x59d5,	// (0x00010359) volume_set_pane_g9

0x59dd,	// (0x00010361) volume_set_pane_g10

0x0009,

0xf948,	// (0x0001a2cc) volume_set_pane_g

0x69ca,	// (0x0001134e) indicator_pane_ParamLimits

0x69ca,	// (0x0001134e) indicator_pane

0x69d6,	// (0x0001135a) main_idle_pane_g2_ParamLimits

0x69d6,	// (0x0001135a) main_idle_pane_g2

0x69fe,	// (0x00011382) main_pane_idle_g1_ParamLimits

0x69fe,	// (0x00011382) main_pane_idle_g1

0x6a0b,	// (0x0001138f) popup_clock_digital_analogue_window_ParamLimits

0x6a0b,	// (0x0001138f) popup_clock_digital_analogue_window

0x6a22,	// (0x000113a6) soft_indicator_pane_ParamLimits

0x6a22,	// (0x000113a6) soft_indicator_pane

0x6a2e,	// (0x000113b2) wallpaper_pane_ParamLimits

0x6a2e,	// (0x000113b2) wallpaper_pane

0x686d,	// (0x000111f1) wallpaper_pane_g1

0x6a42,	// (0x000113c6) indicator_pane_g1_ParamLimits

0x6a42,	// (0x000113c6) indicator_pane_g1

0xad50,	// (0x000156d4) navi_navi_icon_text_pane_srt_g1

0x6a5d,	// (0x000113e1) soft_indicator_pane_t1

0x6a77,	// (0x000113fb) aid_ps_area_pane

0x6a88,	// (0x0001140c) aid_ps_clock_pane

0x6a96,	// (0x0001141a) aid_ps_indicator_pane

0x6aa2,	// (0x00011426) indicator_ps_pane_ParamLimits

0x6aa2,	// (0x00011426) indicator_ps_pane

0x6ab1,	// (0x00011435) power_save_pane_g1_ParamLimits

0x6ab1,	// (0x00011435) power_save_pane_g1

0x6abd,	// (0x00011441) power_save_pane_g2_ParamLimits

0x6abd,	// (0x00011441) power_save_pane_g2

0x4c23,	// (0x0000f5a7) aid_navinavi_width_pane

0x6a77,	// (0x000113fb) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00019f0a) power_save_pane_g_ParamLimits

0xf586,	// (0x00019f0a) power_save_pane_g

0x6acb,	// (0x0001144f) power_save_pane_t1_ParamLimits

0x6acb,	// (0x0001144f) power_save_pane_t1

0x6a88,	// (0x0001140c) aid_ps_clock_pane_ParamLimits

0x6a96,	// (0x0001141a) aid_ps_indicator_pane_ParamLimits

0x6add,	// (0x00011461) power_save_pane_t4_ParamLimits

0x6add,	// (0x00011461) power_save_pane_t4

0x0001,

0xf58b,	// (0x00019f0f) power_save_pane_t_ParamLimits

0xf58b,	// (0x00019f0f) power_save_pane_t

0x6b07,	// (0x0001148b) power_save_t3_ParamLimits

0x6b07,	// (0x0001148b) power_save_t3

0x6af2,	// (0x00011476) power_save_t2_ParamLimits

0x6af2,	// (0x00011476) power_save_t2

0x6b1c,	// (0x000114a0) indicator_ps_pane_g1

0x6b25,	// (0x000114a9) ai_gene_pane_ParamLimits

0x6b25,	// (0x000114a9) ai_gene_pane

0x6b31,	// (0x000114b5) ai_links_pane_ParamLimits

0x6b31,	// (0x000114b5) ai_links_pane

0x6b3d,	// (0x000114c1) indicator_pane_cp1_ParamLimits

0x6b3d,	// (0x000114c1) indicator_pane_cp1

0x6b49,	// (0x000114cd) main_pane_idle_g1_cp_ParamLimits

0x6b49,	// (0x000114cd) main_pane_idle_g1_cp

0x6b55,	// (0x000114d9) popup_ai_links_title_window

0x6b5e,	// (0x000114e2) soft_indicator_pane_cp1_ParamLimits

0x6b5e,	// (0x000114e2) soft_indicator_pane_cp1

0xa627,	// (0x00014fab) ai_links_pane_g1

0xa630,	// (0x00014fb4) grid_ai_links_pane

0xa60a,	// (0x00014f8e) ai_gene_pane_1

0xa615,	// (0x00014f99) ai_gene_pane_2

0xa61e,	// (0x00014fa2) list_highlight_pane_cp4

0xa5ee,	// (0x00014f72) cell_ai_link_pane_ParamLimits

0xa5ee,	// (0x00014f72) cell_ai_link_pane

0xa5e6,	// (0x00014f6a) cell_ai_link_pane_g1

0x6d8e,	// (0x00011712) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0001a2a7) cell_ai_link_pane_g

0x6877,	// (0x000111fb) grid_highlight_cp2

0x6877,	// (0x000111fb) bg_popup_sub_pane_cp1

0x6b78,	// (0x000114fc) popup_ai_links_title_window_t1

0xa534,	// (0x00014eb8) ai_gene_pane_1_g1_ParamLimits

0xa534,	// (0x00014eb8) ai_gene_pane_1_g1

0xa540,	// (0x00014ec4) ai_gene_pane_1_g2_ParamLimits

0xa540,	// (0x00014ec4) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0001a29d) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0001a29d) ai_gene_pane_1_g

0xa54d,	// (0x00014ed1) ai_gene_pane_1_t1_ParamLimits

0xa54d,	// (0x00014ed1) ai_gene_pane_1_t1

0xa581,	// (0x00014f05) grid_ai_soft_ind_pane

0xa51f,	// (0x00014ea3) ai_gene_pane_2_t1_ParamLimits

0xa51f,	// (0x00014ea3) ai_gene_pane_2_t1

0x6b87,	// (0x0001150b) main_pane_empty_t1_ParamLimits

0x6b87,	// (0x0001150b) main_pane_empty_t1

0x6b9f,	// (0x00011523) main_pane_empty_t2_ParamLimits

0x6b9f,	// (0x00011523) main_pane_empty_t2

0x6bb4,	// (0x00011538) main_pane_empty_t3_ParamLimits

0x6bb4,	// (0x00011538) main_pane_empty_t3

0x6bc6,	// (0x0001154a) main_pane_empty_t4_ParamLimits

0x6bc6,	// (0x0001154a) main_pane_empty_t4

0x6bd8,	// (0x0001155c) main_pane_empty_t5_ParamLimits

0x6bd8,	// (0x0001155c) main_pane_empty_t5

0x0004,

0xf590,	// (0x00019f14) main_pane_empty_t_ParamLimits

0xf590,	// (0x00019f14) main_pane_empty_t

0x7973,	// (0x000122f7) bg_popup_window_pane_ParamLimits

0x7973,	// (0x000122f7) bg_popup_window_pane

0xa289,	// (0x00014c0d) find_popup_pane_cp2_ParamLimits

0xa289,	// (0x00014c0d) find_popup_pane_cp2

0xa295,	// (0x00014c19) heading_pane_ParamLimits

0xa295,	// (0x00014c19) heading_pane

0x6877,	// (0x000111fb) bg_popup_sub_pane

0xa203,	// (0x00014b87) bg_popup_window_pane_g1_ParamLimits

0xa203,	// (0x00014b87) bg_popup_window_pane_g1

0xa20f,	// (0x00014b93) bg_popup_window_pane_g2_ParamLimits

0xa20f,	// (0x00014b93) bg_popup_window_pane_g2

0xa21b,	// (0x00014b9f) bg_popup_window_pane_g3_ParamLimits

0xa21b,	// (0x00014b9f) bg_popup_window_pane_g3

0xa227,	// (0x00014bab) bg_popup_window_pane_g4_ParamLimits

0xa227,	// (0x00014bab) bg_popup_window_pane_g4

0xa233,	// (0x00014bb7) bg_popup_window_pane_g5_ParamLimits

0xa233,	// (0x00014bb7) bg_popup_window_pane_g5

0xa23f,	// (0x00014bc3) bg_popup_window_pane_g6_ParamLimits

0xa23f,	// (0x00014bc3) bg_popup_window_pane_g6

0xa24b,	// (0x00014bcf) bg_popup_window_pane_g7_ParamLimits

0xa24b,	// (0x00014bcf) bg_popup_window_pane_g7

0xa257,	// (0x00014bdb) bg_popup_window_pane_g8_ParamLimits

0xa257,	// (0x00014bdb) bg_popup_window_pane_g8

0xa263,	// (0x00014be7) bg_popup_window_pane_g9_ParamLimits

0xa263,	// (0x00014be7) bg_popup_window_pane_g9

0xa26f,	// (0x00014bf3) bg_popup_window_pane_g10_ParamLimits

0xa26f,	// (0x00014bf3) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0001a265) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0001a265) bg_popup_window_pane_g

0xa198,	// (0x00014b1c) bg_popup_heading_pane_ParamLimits

0xa198,	// (0x00014b1c) bg_popup_heading_pane

0x5a81,	// (0x00010405) tabs_4_passive_pane_cp_srt_ParamLimits

0x5a81,	// (0x00010405) tabs_4_passive_pane_cp_srt

0x5a93,	// (0x00010417) tabs_4_passive_pane_srt_ParamLimits

0xa1ac,	// (0x00014b30) heading_pane_g2

0x5a93,	// (0x00010417) tabs_4_passive_pane_srt

0x8917,	// (0x0001329b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8917,	// (0x0001329b) bg_passive_tab_pane_cp3_srt

0xa1b4,	// (0x00014b38) heading_pane_t1_ParamLimits

0xa1b4,	// (0x00014b38) heading_pane_t1

0xa1cb,	// (0x00014b4f) heading_pane_t2_ParamLimits

0xa1cb,	// (0x00014b4f) heading_pane_t2

0x0001,

0xf8dc,	// (0x0001a260) heading_pane_t_ParamLimits

0xf8dc,	// (0x0001a260) heading_pane_t

0x9cc5,	// (0x00014649) bg_popup_heading_pane_g1

0x9d74,	// (0x000146f8) bg_popup_heading_pane_g2

0x9d7e,	// (0x00014702) bg_popup_heading_pane_g3

0x9d88,	// (0x0001470c) bg_popup_heading_pane_g4

0x9d92,	// (0x00014716) bg_popup_heading_pane_g5

0x9d9c,	// (0x00014720) bg_popup_heading_pane_g6

0x9da4,	// (0x00014728) bg_popup_heading_pane_g7

0x9dac,	// (0x00014730) bg_popup_heading_pane_g8

0x9db6,	// (0x0001473a) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0001a21c) bg_popup_heading_pane_g

0x93ef,	// (0x00013d73) bg_popup_sub_pane_g1

0x93ff,	// (0x00013d83) bg_popup_sub_pane_g2

0x93f7,	// (0x00013d7b) bg_popup_sub_pane_g3

0x940f,	// (0x00013d93) bg_popup_sub_pane_g4

0x9407,	// (0x00013d8b) bg_popup_sub_pane_g5

0x9417,	// (0x00013d9b) bg_popup_sub_pane_g6

0x941f,	// (0x00013da3) bg_popup_sub_pane_g7

0x942f,	// (0x00013db3) bg_popup_sub_pane_g8

0x9427,	// (0x00013dab) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0001a1f6) bg_popup_sub_pane_g

0x6bec,	// (0x00011570) bg_popup_window_pane_cp5_ParamLimits

0x6bec,	// (0x00011570) bg_popup_window_pane_cp5

0x6c08,	// (0x0001158c) popup_note_window_g1_ParamLimits

0x6c08,	// (0x0001158c) popup_note_window_g1

0x6c14,	// (0x00011598) popup_note_window_t1_ParamLimits

0x6c14,	// (0x00011598) popup_note_window_t1

0x6c2a,	// (0x000115ae) popup_note_window_t2_ParamLimits

0x6c2a,	// (0x000115ae) popup_note_window_t2

0x6c40,	// (0x000115c4) popup_note_window_t3_ParamLimits

0x6c40,	// (0x000115c4) popup_note_window_t3

0x6c56,	// (0x000115da) popup_note_window_t4_ParamLimits

0x6c56,	// (0x000115da) popup_note_window_t4

0x6c7e,	// (0x00011602) popup_note_window_t5_ParamLimits

0x6c7e,	// (0x00011602) popup_note_window_t5

0x0004,

0xf59b,	// (0x00019f1f) popup_note_window_t_ParamLimits

0xf59b,	// (0x00019f1f) popup_note_window_t

0x6ca2,	// (0x00011626) bg_popup_window_pane_cp6_ParamLimits

0x6ca2,	// (0x00011626) bg_popup_window_pane_cp6

0x9c41,	// (0x000145c5) popup_note_image_window_g1_ParamLimits

0x9c41,	// (0x000145c5) popup_note_image_window_g1

0x9c4d,	// (0x000145d1) popup_note_image_window_g2_ParamLimits

0x9c4d,	// (0x000145d1) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0001a1ea) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0001a1ea) popup_note_image_window_g

0x9c66,	// (0x000145ea) popup_note_image_window_t1_ParamLimits

0x9c66,	// (0x000145ea) popup_note_image_window_t1

0x9c7f,	// (0x00014603) popup_note_image_window_t2_ParamLimits

0x9c7f,	// (0x00014603) popup_note_image_window_t2

0x9c98,	// (0x0001461c) popup_note_image_window_t3_ParamLimits

0x9c98,	// (0x0001461c) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0001a1ef) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0001a1ef) popup_note_image_window_t

0x9b02,	// (0x00014486) bg_popup_window_pane_cp7_ParamLimits

0x9b02,	// (0x00014486) bg_popup_window_pane_cp7

0x9b32,	// (0x000144b6) popup_note_wait_window_g1_ParamLimits

0x9b32,	// (0x000144b6) popup_note_wait_window_g1

0x9b3e,	// (0x000144c2) popup_note_wait_window_g2_ParamLimits

0x9b3e,	// (0x000144c2) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0001a1d8) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0001a1d8) popup_note_wait_window_g

0x9b56,	// (0x000144da) popup_note_wait_window_t1_ParamLimits

0x9b56,	// (0x000144da) popup_note_wait_window_t1

0x9b7d,	// (0x00014501) popup_note_wait_window_t2_ParamLimits

0x9b7d,	// (0x00014501) popup_note_wait_window_t2

0x9b9a,	// (0x0001451e) popup_note_wait_window_t3_ParamLimits

0x9b9a,	// (0x0001451e) popup_note_wait_window_t3

0x9bad,	// (0x00014531) popup_note_wait_window_t4_ParamLimits

0x9bad,	// (0x00014531) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0001a1df) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0001a1df) popup_note_wait_window_t

0x9bd2,	// (0x00014556) wait_bar_pane_ParamLimits

0x9bd2,	// (0x00014556) wait_bar_pane

0x6877,	// (0x000111fb) wait_anim_pane

0x6877,	// (0x000111fb) wait_border_pane

0x686d,	// (0x000111f1) wait_anim_pane_g1

0x686d,	// (0x000111f1) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001a09e) wait_anim_pane_g

0x9aa6,	// (0x0001442a) wait_border_pane_g1

0x9ab1,	// (0x00014435) wait_border_pane_g2

0x9aba,	// (0x0001443e) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0001a1d1) wait_border_pane_g

0x9911,	// (0x00014295) bg_popup_window_pane_cp16_ParamLimits

0x9911,	// (0x00014295) bg_popup_window_pane_cp16

0x9a11,	// (0x00014395) indicator_popup_pane_cp4_ParamLimits

0x9a11,	// (0x00014395) indicator_popup_pane_cp4

0x9a25,	// (0x000143a9) popup_query_data_window_t1_ParamLimits

0x9a25,	// (0x000143a9) popup_query_data_window_t1

0x9a37,	// (0x000143bb) popup_query_data_window_t2_ParamLimits

0x9a37,	// (0x000143bb) popup_query_data_window_t2

0x9a50,	// (0x000143d4) popup_query_data_window_t3_ParamLimits

0x9a50,	// (0x000143d4) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0001a1ca) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0001a1ca) popup_query_data_window_t

0x9a6a,	// (0x000143ee) query_popup_data_pane_ParamLimits

0x9a6a,	// (0x000143ee) query_popup_data_pane

0x9a7e,	// (0x00014402) query_popup_data_pane_cp1_ParamLimits

0x9a7e,	// (0x00014402) query_popup_data_pane_cp1

0x9911,	// (0x00014295) bg_popup_window_pane_cp10_ParamLimits

0x9911,	// (0x00014295) bg_popup_window_pane_cp10

0x9943,	// (0x000142c7) indicator_popup_pane_ParamLimits

0x9943,	// (0x000142c7) indicator_popup_pane

0x9965,	// (0x000142e9) popup_query_code_window_t1_ParamLimits

0x9965,	// (0x000142e9) popup_query_code_window_t1

0x997f,	// (0x00014303) popup_query_code_window_t2_ParamLimits

0x997f,	// (0x00014303) popup_query_code_window_t2

0x99c8,	// (0x0001434c) popup_query_code_window_t3_ParamLimits

0x99c8,	// (0x0001434c) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0001a1c3) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0001a1c3) popup_query_code_window_t

0x99f7,	// (0x0001437b) query_popup_pane_ParamLimits

0x99f7,	// (0x0001437b) query_popup_pane

0x6ca2,	// (0x00011626) bg_popup_window_pane_cp15_ParamLimits

0x6ca2,	// (0x00011626) bg_popup_window_pane_cp15

0x6cc0,	// (0x00011644) indicator_popup_pane_cp1_ParamLimits

0x6cc0,	// (0x00011644) indicator_popup_pane_cp1

0x6cd3,	// (0x00011657) indicator_popup_pane_cp2_ParamLimits

0x6cd3,	// (0x00011657) indicator_popup_pane_cp2

0x6ce6,	// (0x0001166a) popup_query_data_code_window_g1_ParamLimits

0x6ce6,	// (0x0001166a) popup_query_data_code_window_g1

0x6cf9,	// (0x0001167d) popup_query_data_code_window_t1_ParamLimits

0x6cf9,	// (0x0001167d) popup_query_data_code_window_t1

0x6d0b,	// (0x0001168f) popup_query_data_code_window_t2_ParamLimits

0x6d0b,	// (0x0001168f) popup_query_data_code_window_t2

0x6d1d,	// (0x000116a1) popup_query_data_code_window_t3_ParamLimits

0x6d1d,	// (0x000116a1) popup_query_data_code_window_t3

0x6d33,	// (0x000116b7) popup_query_data_code_window_t4_ParamLimits

0x6d33,	// (0x000116b7) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00019f2a) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00019f2a) popup_query_data_code_window_t

0x5742,	// (0x000100c6) list_single_midp_graphic_pane_g3

0x6d4b,	// (0x000116cf) query_popup_data_pane_cp2_ParamLimits

0x6d5e,	// (0x000116e2) query_popup_pane_cp2_ParamLimits

0x6d5e,	// (0x000116e2) query_popup_pane_cp2

0x6877,	// (0x000111fb) bg_popup_window_pane_cp11

0x9909,	// (0x0001428d) heading_pane_cp5

0x6e46,	// (0x000117ca) listscroll_popup_info_pane

0x6877,	// (0x000111fb) input_focus_pane_cp3

0x6d71,	// (0x000116f5) query_popup_pane_t1

0x6d7f,	// (0x00011703) list_popup_info_pane_ParamLimits

0x6d7f,	// (0x00011703) list_popup_info_pane

0x6d8e,	// (0x00011712) listscroll_popup_info_pane_g1

0x6d96,	// (0x0001171a) scroll_pane_cp7

0x6da0,	// (0x00011724) popup_info_list_pane_t1_ParamLimits

0x6da0,	// (0x00011724) popup_info_list_pane_t1

0x6dba,	// (0x0001173e) popup_info_list_pane_t2_ParamLimits

0x6dba,	// (0x0001173e) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00019f33) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00019f33) popup_info_list_pane_t

0x6877,	// (0x000111fb) bg_popup_window_pane_cp12

0xad6a,	// (0x000156ee) find_popup_pane

0x6957,	// (0x000112db) bg_popup_window_pane_cp3

0x6dd4,	// (0x00011758) heading_pane_cp3

0x6de0,	// (0x00011764) listscroll_popup_graphic_pane

0x6877,	// (0x000111fb) bg_popup_window_pane_cp4

0x6e3c,	// (0x000117c0) heading_pane_cp4

0x6e46,	// (0x000117ca) listscroll_popup_colour_pane

0x6e4e,	// (0x000117d2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6e4e,	// (0x000117d2) cell_large_graphic_colour_none_popup_pane

0x6e62,	// (0x000117e6) grid_large_graphic_colour_popup_pane_ParamLimits

0x6e62,	// (0x000117e6) grid_large_graphic_colour_popup_pane

0x6e8e,	// (0x00011812) listscroll_popup_colour_pane_g1_ParamLimits

0x6e8e,	// (0x00011812) listscroll_popup_colour_pane_g1

0x6ea5,	// (0x00011829) listscroll_popup_colour_pane_g2_ParamLimits

0x6ea5,	// (0x00011829) listscroll_popup_colour_pane_g2

0x6ebc,	// (0x00011840) listscroll_popup_colour_pane_g3_ParamLimits

0x6ebc,	// (0x00011840) listscroll_popup_colour_pane_g3

0x6ecc,	// (0x00011850) listscroll_popup_colour_pane_g4_ParamLimits

0x6ecc,	// (0x00011850) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00019f38) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00019f38) listscroll_popup_colour_pane_g

0x6ee0,	// (0x00011864) scroll_pane_cp6_ParamLimits

0x6ee0,	// (0x00011864) scroll_pane_cp6

0x6ef2,	// (0x00011876) cell_large_graphic_colour_popup_pane_ParamLimits

0x6ef2,	// (0x00011876) cell_large_graphic_colour_popup_pane

0x6f11,	// (0x00011895) cell_large_graphic_colour_none_popup_pane_t1

0x6877,	// (0x000111fb) grid_highlight_pane_cp5

0x6f20,	// (0x000118a4) cell_large_graphic_colour_popup_pane_g1

0x6f28,	// (0x000118ac) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00019f41) cell_large_graphic_colour_popup_pane_g

0x6f30,	// (0x000118b4) cell_large_graphic_colour_popup_pane_g2_copy1

0x6f39,	// (0x000118bd) grid_highlight_pane_cp4

0x6f41,	// (0x000118c5) bg_popup_window_pane_cp8_ParamLimits

0x6f41,	// (0x000118c5) bg_popup_window_pane_cp8

0x6f5c,	// (0x000118e0) popup_snote_single_text_window_g1_ParamLimits

0x6f5c,	// (0x000118e0) popup_snote_single_text_window_g1

0x6f6e,	// (0x000118f2) popup_snote_single_text_window_t1_ParamLimits

0x6f6e,	// (0x000118f2) popup_snote_single_text_window_t1

0x6f81,	// (0x00011905) popup_snote_single_text_window_t2_ParamLimits

0x6f81,	// (0x00011905) popup_snote_single_text_window_t2

0x6f94,	// (0x00011918) popup_snote_single_text_window_t3_ParamLimits

0x6f94,	// (0x00011918) popup_snote_single_text_window_t3

0x6fcd,	// (0x00011951) popup_snote_single_text_window_t4_ParamLimits

0x6fcd,	// (0x00011951) popup_snote_single_text_window_t4

0x7001,	// (0x00011985) popup_snote_single_text_window_t5_ParamLimits

0x7001,	// (0x00011985) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00019f46) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00019f46) popup_snote_single_text_window_t

0x7030,	// (0x000119b4) bg_popup_window_pane_cp9_ParamLimits

0x7030,	// (0x000119b4) bg_popup_window_pane_cp9

0x6f5c,	// (0x000118e0) popup_snote_single_graphic_window_g1_ParamLimits

0x6f5c,	// (0x000118e0) popup_snote_single_graphic_window_g1

0x703e,	// (0x000119c2) popup_snote_single_graphic_window_g2_ParamLimits

0x703e,	// (0x000119c2) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00019f51) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00019f51) popup_snote_single_graphic_window_g

0x704a,	// (0x000119ce) popup_snote_single_graphic_window_t1_ParamLimits

0x704a,	// (0x000119ce) popup_snote_single_graphic_window_t1

0x705d,	// (0x000119e1) popup_snote_single_graphic_window_t2_ParamLimits

0x705d,	// (0x000119e1) popup_snote_single_graphic_window_t2

0x7070,	// (0x000119f4) popup_snote_single_graphic_window_t3_ParamLimits

0x7070,	// (0x000119f4) popup_snote_single_graphic_window_t3

0x70a9,	// (0x00011a2d) popup_snote_single_graphic_window_t4_ParamLimits

0x70a9,	// (0x00011a2d) popup_snote_single_graphic_window_t4

0x70dd,	// (0x00011a61) popup_snote_single_graphic_window_t5_ParamLimits

0x70dd,	// (0x00011a61) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00019f56) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00019f56) popup_snote_single_graphic_window_t

0xacae,	// (0x00015632) grid_graphic_popup_pane_ParamLimits

0xacae,	// (0x00015632) grid_graphic_popup_pane

0xacd6,	// (0x0001565a) listscroll_popup_graphic_pane_g1_ParamLimits

0xacd6,	// (0x0001565a) listscroll_popup_graphic_pane_g1

0xacea,	// (0x0001566e) listscroll_popup_graphic_pane_g2_ParamLimits

0xacea,	// (0x0001566e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0001a340) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0001a340) listscroll_popup_graphic_pane_g

0xacfe,	// (0x00015682) scroll_pane_cp5

0xac57,	// (0x000155db) cell_graphic_popup_pane_ParamLimits

0xac57,	// (0x000155db) cell_graphic_popup_pane

0xac38,	// (0x000155bc) cell_graphic_popup_pane_g1

0xac40,	// (0x000155c4) cell_graphic_popup_pane_g2

0x6f30,	// (0x000118b4) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0001a339) cell_graphic_popup_pane_g

0xac49,	// (0x000155cd) cell_graphic_popup_pane_t2

0x6f39,	// (0x000118bd) grid_highlight_pane_cp3

0x711e,	// (0x00011aa2) list_gen_pane_ParamLimits

0x711e,	// (0x00011aa2) list_gen_pane

0x7150,	// (0x00011ad4) scroll_pane

0xab9a,	// (0x0001551e) bg_list_pane_g1_ParamLimits

0xab9a,	// (0x0001551e) bg_list_pane_g1

0xabb5,	// (0x00015539) bg_list_pane_g2_ParamLimits

0xabb5,	// (0x00015539) bg_list_pane_g2

0xabc8,	// (0x0001554c) bg_list_pane_g3_ParamLimits

0xabc8,	// (0x0001554c) bg_list_pane_g3

0xabda,	// (0x0001555e) bg_list_pane_g4_ParamLimits

0xabda,	// (0x0001555e) bg_list_pane_g4

0xabec,	// (0x00015570) bg_list_pane_g5_ParamLimits

0xabec,	// (0x00015570) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0001a32e) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0001a32e) bg_list_pane_g

0xaaad,	// (0x00015431) list_double2_graphic_large_graphic_pane_ParamLimits

0xaaad,	// (0x00015431) list_double2_graphic_large_graphic_pane

0xaaad,	// (0x00015431) list_double2_graphic_pane_ParamLimits

0xaaad,	// (0x00015431) list_double2_graphic_pane

0xaaad,	// (0x00015431) list_double2_large_graphic_pane_ParamLimits

0xaaad,	// (0x00015431) list_double2_large_graphic_pane

0xaaad,	// (0x00015431) list_double2_pane_ParamLimits

0xaaad,	// (0x00015431) list_double2_pane

0xaaad,	// (0x00015431) list_double_graphic_heading_pane_ParamLimits

0xaaad,	// (0x00015431) list_double_graphic_heading_pane

0xaaad,	// (0x00015431) list_double_graphic_pane_ParamLimits

0xaaad,	// (0x00015431) list_double_graphic_pane

0xaaad,	// (0x00015431) list_double_heading_pane_ParamLimits

0xaaad,	// (0x00015431) list_double_heading_pane

0xaaad,	// (0x00015431) list_double_large_graphic_pane_ParamLimits

0xaaad,	// (0x00015431) list_double_large_graphic_pane

0xaaad,	// (0x00015431) list_double_number_pane_ParamLimits

0xaaad,	// (0x00015431) list_double_number_pane

0xaaad,	// (0x00015431) list_double_pane_ParamLimits

0xaaad,	// (0x00015431) list_double_pane

0xaaad,	// (0x00015431) list_double_time_pane_ParamLimits

0xaaad,	// (0x00015431) list_double_time_pane

0xaaad,	// (0x00015431) list_setting_number_pane_ParamLimits

0xaaad,	// (0x00015431) list_setting_number_pane

0xaaad,	// (0x00015431) list_setting_pane_ParamLimits

0xaaad,	// (0x00015431) list_setting_pane

0xab09,	// (0x0001548d) list_single_2graphic_pane_ParamLimits

0xab09,	// (0x0001548d) list_single_2graphic_pane

0xab09,	// (0x0001548d) list_single_graphic_heading_pane_ParamLimits

0xab09,	// (0x0001548d) list_single_graphic_heading_pane

0xab09,	// (0x0001548d) list_single_graphic_pane_ParamLimits

0xab09,	// (0x0001548d) list_single_graphic_pane

0xab09,	// (0x0001548d) list_single_heading_pane_ParamLimits

0xab09,	// (0x0001548d) list_single_heading_pane

0xab7b,	// (0x000154ff) list_single_large_graphic_pane_ParamLimits

0xab7b,	// (0x000154ff) list_single_large_graphic_pane

0xab09,	// (0x0001548d) list_single_number_heading_pane_ParamLimits

0xab09,	// (0x0001548d) list_single_number_heading_pane

0xab09,	// (0x0001548d) list_single_number_pane_ParamLimits

0xab09,	// (0x0001548d) list_single_number_pane

0xab09,	// (0x0001548d) list_single_pane_ParamLimits

0xab09,	// (0x0001548d) list_single_pane

0x6877,	// (0x000111fb) list_highlight_pane_cp1

0x7190,	// (0x00011b14) list_single_pane_g1_ParamLimits

0x7190,	// (0x00011b14) list_single_pane_g1

0x719c,	// (0x00011b20) list_single_pane_g2_ParamLimits

0x719c,	// (0x00011b20) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00019f68) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00019f68) list_single_pane_g

0xaa66,	// (0x000153ea) list_single_pane_t1_ParamLimits

0xaa66,	// (0x000153ea) list_single_pane_t1

0x7190,	// (0x00011b14) list_single_number_pane_g1_ParamLimits

0x7190,	// (0x00011b14) list_single_number_pane_g1

0x719c,	// (0x00011b20) list_single_number_pane_g2_ParamLimits

0x719c,	// (0x00011b20) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00019f68) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00019f68) list_single_number_pane_g

0xa7f2,	// (0x00015176) list_single_number_pane_t1_ParamLimits

0xa7f2,	// (0x00015176) list_single_number_pane_t1

0xa808,	// (0x0001518c) list_single_number_pane_t2_ParamLimits

0xa808,	// (0x0001518c) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0001a2ef) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0001a2ef) list_single_number_pane_t

0x7184,	// (0x00011b08) list_single_graphic_pane_g1_ParamLimits

0x7184,	// (0x00011b08) list_single_graphic_pane_g1

0x7190,	// (0x00011b14) list_single_graphic_pane_g2_ParamLimits

0x7190,	// (0x00011b14) list_single_graphic_pane_g2

0x719c,	// (0x00011b20) list_single_graphic_pane_g3_ParamLimits

0x719c,	// (0x00011b20) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00019f61) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00019f61) list_single_graphic_pane_g

0x71a8,	// (0x00011b2c) list_single_graphic_pane_t1_ParamLimits

0x71a8,	// (0x00011b2c) list_single_graphic_pane_t1

0x7190,	// (0x00011b14) list_single_heading_pane_g1_ParamLimits

0x7190,	// (0x00011b14) list_single_heading_pane_g1

0x719c,	// (0x00011b20) list_single_heading_pane_g2_ParamLimits

0x719c,	// (0x00011b20) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00019f68) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00019f68) list_single_heading_pane_g

0x71be,	// (0x00011b42) list_single_heading_pane_t1_ParamLimits

0x71be,	// (0x00011b42) list_single_heading_pane_t1

0x71d4,	// (0x00011b58) list_single_heading_pane_t2_ParamLimits

0x71d4,	// (0x00011b58) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00019f6d) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00019f6d) list_single_heading_pane_t

0x7190,	// (0x00011b14) list_single_number_heading_pane_g1_ParamLimits

0x7190,	// (0x00011b14) list_single_number_heading_pane_g1

0x719c,	// (0x00011b20) list_single_number_heading_pane_g2_ParamLimits

0x719c,	// (0x00011b20) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00019f68) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00019f68) list_single_number_heading_pane_g

0x71be,	// (0x00011b42) list_single_number_heading_pane_t1_ParamLimits

0x71be,	// (0x00011b42) list_single_number_heading_pane_t1

0x71e6,	// (0x00011b6a) list_single_number_heading_pane_t2_ParamLimits

0x71e6,	// (0x00011b6a) list_single_number_heading_pane_t2

0x71f8,	// (0x00011b7c) list_single_number_heading_pane_t3_ParamLimits

0x71f8,	// (0x00011b7c) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00019f72) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00019f72) list_single_number_heading_pane_t

0x720a,	// (0x00011b8e) list_single_graphic_heading_pane_g1_ParamLimits

0x720a,	// (0x00011b8e) list_single_graphic_heading_pane_g1

0x7216,	// (0x00011b9a) list_single_graphic_heading_pane_g4_ParamLimits

0x7216,	// (0x00011b9a) list_single_graphic_heading_pane_g4

0x719c,	// (0x00011b20) list_single_graphic_heading_pane_g5_ParamLimits

0x719c,	// (0x00011b20) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00019f79) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00019f79) list_single_graphic_heading_pane_g

0x71be,	// (0x00011b42) list_single_graphic_heading_pane_t1_ParamLimits

0x71be,	// (0x00011b42) list_single_graphic_heading_pane_t1

0x7227,	// (0x00011bab) list_single_graphic_heading_pane_t2_ParamLimits

0x7227,	// (0x00011bab) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00019f80) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00019f80) list_single_graphic_heading_pane_t

0x7239,	// (0x00011bbd) list_single_large_graphic_pane_g1_ParamLimits

0x7239,	// (0x00011bbd) list_single_large_graphic_pane_g1

0x7245,	// (0x00011bc9) list_single_large_graphic_pane_g2_ParamLimits

0x7245,	// (0x00011bc9) list_single_large_graphic_pane_g2

0x7251,	// (0x00011bd5) list_single_large_graphic_pane_g3_ParamLimits

0x7251,	// (0x00011bd5) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00019f85) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00019f85) list_single_large_graphic_pane_g

0x9ab1,	// (0x00014435) wait_border_pane_g2_copy1

0x725d,	// (0x00011be1) list_single_large_graphic_pane_g4_cp2

0x7265,	// (0x00011be9) list_single_large_graphic_pane_t1_ParamLimits

0x7265,	// (0x00011be9) list_single_large_graphic_pane_t1

0x727b,	// (0x00011bff) list_double_pane_g1_ParamLimits

0x727b,	// (0x00011bff) list_double_pane_g1

0x7287,	// (0x00011c0b) list_double_pane_g2_ParamLimits

0x7287,	// (0x00011c0b) list_double_pane_g2

0x0001,

0xf608,	// (0x00019f8c) list_double_pane_g_ParamLimits

0xf608,	// (0x00019f8c) list_double_pane_g

0x7293,	// (0x00011c17) list_double_pane_t1_ParamLimits

0x7293,	// (0x00011c17) list_double_pane_t1

0x72a9,	// (0x00011c2d) list_double_pane_t2_ParamLimits

0x72a9,	// (0x00011c2d) list_double_pane_t2

0x0001,

0xf60d,	// (0x00019f91) list_double_pane_t_ParamLimits

0xf60d,	// (0x00019f91) list_double_pane_t

0x72bb,	// (0x00011c3f) list_double2_pane_g1_ParamLimits

0x72bb,	// (0x00011c3f) list_double2_pane_g1

0x72cc,	// (0x00011c50) list_double2_pane_g2_ParamLimits

0x72cc,	// (0x00011c50) list_double2_pane_g2

0x0001,

0xf612,	// (0x00019f96) list_double2_pane_g_ParamLimits

0xf612,	// (0x00019f96) list_double2_pane_g

0x72d8,	// (0x00011c5c) list_double2_pane_t1_ParamLimits

0x72d8,	// (0x00011c5c) list_double2_pane_t1

0x72ee,	// (0x00011c72) list_double2_pane_t2_ParamLimits

0x72ee,	// (0x00011c72) list_double2_pane_t2

0x0001,

0xf617,	// (0x00019f9b) list_double2_pane_t_ParamLimits

0xf617,	// (0x00019f9b) list_double2_pane_t

0x727b,	// (0x00011bff) list_double_number_pane_g1_ParamLimits

0x727b,	// (0x00011bff) list_double_number_pane_g1

0x7287,	// (0x00011c0b) list_double_number_pane_g2_ParamLimits

0x7287,	// (0x00011c0b) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00019f8c) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00019f8c) list_double_number_pane_g

0x7300,	// (0x00011c84) list_double_number_pane_t1_ParamLimits

0x7300,	// (0x00011c84) list_double_number_pane_t1

0x7312,	// (0x00011c96) list_double_number_pane_t2_ParamLimits

0x7312,	// (0x00011c96) list_double_number_pane_t2

0x7328,	// (0x00011cac) list_double_number_pane_t3_ParamLimits

0x7328,	// (0x00011cac) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00019fa0) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00019fa0) list_double_number_pane_t

0x733a,	// (0x00011cbe) list_double_graphic_pane_g1_ParamLimits

0x733a,	// (0x00011cbe) list_double_graphic_pane_g1

0x7346,	// (0x00011cca) list_double_graphic_pane_g2_ParamLimits

0x7346,	// (0x00011cca) list_double_graphic_pane_g2

0x7355,	// (0x00011cd9) list_double_graphic_pane_g3_ParamLimits

0x7355,	// (0x00011cd9) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00019fa7) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00019fa7) list_double_graphic_pane_g

0x736d,	// (0x00011cf1) list_double_graphic_pane_t1_ParamLimits

0x736d,	// (0x00011cf1) list_double_graphic_pane_t1

0x7383,	// (0x00011d07) list_double_graphic_pane_t2_ParamLimits

0x7383,	// (0x00011d07) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00019fb0) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00019fb0) list_double_graphic_pane_t

0x7395,	// (0x00011d19) list_double2_graphic_pane_g1_ParamLimits

0x7395,	// (0x00011d19) list_double2_graphic_pane_g1

0x73a1,	// (0x00011d25) list_double2_graphic_pane_g2_ParamLimits

0x73a1,	// (0x00011d25) list_double2_graphic_pane_g2

0x72cc,	// (0x00011c50) list_double2_graphic_pane_g3_ParamLimits

0x72cc,	// (0x00011c50) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00019fb5) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00019fb5) list_double2_graphic_pane_g

0x73ad,	// (0x00011d31) list_double2_graphic_pane_t1_ParamLimits

0x73ad,	// (0x00011d31) list_double2_graphic_pane_t1

0x73c3,	// (0x00011d47) list_double2_graphic_pane_t2_ParamLimits

0x73c3,	// (0x00011d47) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00019fbc) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00019fbc) list_double2_graphic_pane_t

0x73d5,	// (0x00011d59) list_double_large_graphic_pane_g1_ParamLimits

0x73d5,	// (0x00011d59) list_double_large_graphic_pane_g1

0x73fe,	// (0x00011d82) list_double_large_graphic_pane_g2_ParamLimits

0x73fe,	// (0x00011d82) list_double_large_graphic_pane_g2

0x7287,	// (0x00011c0b) list_double_large_graphic_pane_g3_ParamLimits

0x7287,	// (0x00011c0b) list_double_large_graphic_pane_g3

0x740f,	// (0x00011d93) list_double_large_graphic_pane_g4_ParamLimits

0x740f,	// (0x00011d93) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00019fc1) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00019fc1) list_double_large_graphic_pane_g

0x7435,	// (0x00011db9) list_double_large_graphic_pane_t1_ParamLimits

0x7435,	// (0x00011db9) list_double_large_graphic_pane_t1

0x744e,	// (0x00011dd2) list_double_large_graphic_pane_t2_ParamLimits

0x744e,	// (0x00011dd2) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00019fcc) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00019fcc) list_double_large_graphic_pane_t

0x7460,	// (0x00011de4) list_double2_large_graphic_pane_g1_ParamLimits

0x7460,	// (0x00011de4) list_double2_large_graphic_pane_g1

0x72bb,	// (0x00011c3f) list_double2_large_graphic_pane_g2_ParamLimits

0x72bb,	// (0x00011c3f) list_double2_large_graphic_pane_g2

0x72cc,	// (0x00011c50) list_double2_large_graphic_pane_g3_ParamLimits

0x72cc,	// (0x00011c50) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00019fd1) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00019fd1) list_double2_large_graphic_pane_g

0x746c,	// (0x00011df0) list_double2_large_graphic_pane_t1_ParamLimits

0x746c,	// (0x00011df0) list_double2_large_graphic_pane_t1

0x7482,	// (0x00011e06) list_double2_large_graphic_pane_t2_ParamLimits

0x7482,	// (0x00011e06) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00019fd8) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00019fd8) list_double2_large_graphic_pane_t

0x7494,	// (0x00011e18) list_double_heading_pane_g1_ParamLimits

0x7494,	// (0x00011e18) list_double_heading_pane_g1

0x74a5,	// (0x00011e29) list_double_heading_pane_g2_ParamLimits

0x74a5,	// (0x00011e29) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00019fdd) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00019fdd) list_double_heading_pane_g

0x74b1,	// (0x00011e35) list_double_heading_pane_t1_ParamLimits

0x74b1,	// (0x00011e35) list_double_heading_pane_t1

0x72ee,	// (0x00011c72) list_double_heading_pane_t2_ParamLimits

0x72ee,	// (0x00011c72) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00019fe2) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00019fe2) list_double_heading_pane_t

0x74c7,	// (0x00011e4b) list_double_graphic_heading_pane_g1_ParamLimits

0x74c7,	// (0x00011e4b) list_double_graphic_heading_pane_g1

0x7494,	// (0x00011e18) list_double_graphic_heading_pane_g2_ParamLimits

0x7494,	// (0x00011e18) list_double_graphic_heading_pane_g2

0x74a5,	// (0x00011e29) list_double_graphic_heading_pane_g3_ParamLimits

0x74a5,	// (0x00011e29) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00019fe7) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00019fe7) list_double_graphic_heading_pane_g

0x74d3,	// (0x00011e57) list_double_graphic_heading_pane_t1_ParamLimits

0x74d3,	// (0x00011e57) list_double_graphic_heading_pane_t1

0x73c3,	// (0x00011d47) list_double_graphic_heading_pane_t2_ParamLimits

0x73c3,	// (0x00011d47) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00019fee) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00019fee) list_double_graphic_heading_pane_t

0x73fe,	// (0x00011d82) list_double_time_pane_g1_ParamLimits

0x73fe,	// (0x00011d82) list_double_time_pane_g1

0x7287,	// (0x00011c0b) list_double_time_pane_g2_ParamLimits

0x7287,	// (0x00011c0b) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00019ff3) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00019ff3) list_double_time_pane_g

0x74e9,	// (0x00011e6d) list_double_time_pane_t1_ParamLimits

0x74e9,	// (0x00011e6d) list_double_time_pane_t1

0x74ff,	// (0x00011e83) list_double_time_pane_t2_ParamLimits

0x74ff,	// (0x00011e83) list_double_time_pane_t2

0x7511,	// (0x00011e95) list_double_time_pane_t3_ParamLimits

0x7511,	// (0x00011e95) list_double_time_pane_t3

0x7523,	// (0x00011ea7) list_double_time_pane_t4_ParamLimits

0x7523,	// (0x00011ea7) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00019ff8) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00019ff8) list_double_time_pane_t

0x73a1,	// (0x00011d25) list_setting_pane_g1_ParamLimits

0x73a1,	// (0x00011d25) list_setting_pane_g1

0x72cc,	// (0x00011c50) list_setting_pane_g2_ParamLimits

0x72cc,	// (0x00011c50) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0001a001) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0001a001) list_setting_pane_g

0x7535,	// (0x00011eb9) list_setting_pane_t1_ParamLimits

0x7535,	// (0x00011eb9) list_setting_pane_t1

0x754c,	// (0x00011ed0) list_setting_pane_t2_ParamLimits

0x754c,	// (0x00011ed0) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001a006) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001a006) list_setting_pane_t

0x758b,	// (0x00011f0f) set_value_pane_cp_ParamLimits

0x758b,	// (0x00011f0f) set_value_pane_cp

0x73a1,	// (0x00011d25) list_setting_number_pane_g1_ParamLimits

0x73a1,	// (0x00011d25) list_setting_number_pane_g1

0x72cc,	// (0x00011c50) list_setting_number_pane_g2_ParamLimits

0x72cc,	// (0x00011c50) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0001a001) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0001a001) list_setting_number_pane_g

0x7597,	// (0x00011f1b) list_setting_number_pane_t1_ParamLimits

0x7597,	// (0x00011f1b) list_setting_number_pane_t1

0x75ab,	// (0x00011f2f) list_setting_number_pane_t2_ParamLimits

0x75ab,	// (0x00011f2f) list_setting_number_pane_t2

0x75c2,	// (0x00011f46) list_setting_number_pane_t3_ParamLimits

0x75c2,	// (0x00011f46) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001a00d) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001a00d) list_setting_number_pane_t

0x758b,	// (0x00011f0f) set_value_pane_ParamLimits

0x758b,	// (0x00011f0f) set_value_pane

0x7605,	// (0x00011f89) bg_set_opt_pane_ParamLimits

0x7605,	// (0x00011f89) bg_set_opt_pane

0x7626,	// (0x00011faa) set_value_pane_t1

0x7634,	// (0x00011fb8) slider_set_pane_cp3

0x763d,	// (0x00011fc1) volume_small_pane_cp

0x7646,	// (0x00011fca) list_form_gen_pane

0x764f,	// (0x00011fd3) scroll_pane_cp8

0x7668,	// (0x00011fec) form_field_data_pane_ParamLimits

0x7668,	// (0x00011fec) form_field_data_pane

0x768a,	// (0x0001200e) form_field_data_wide_pane_ParamLimits

0x768a,	// (0x0001200e) form_field_data_wide_pane

0x76ad,	// (0x00012031) form_field_popup_pane_ParamLimits

0x76ad,	// (0x00012031) form_field_popup_pane

0x76cd,	// (0x00012051) form_field_popup_wide_pane_ParamLimits

0x76cd,	// (0x00012051) form_field_popup_wide_pane

0x76ea,	// (0x0001206e) form_field_slider_pane_ParamLimits

0x76ea,	// (0x0001206e) form_field_slider_pane

0x76fd,	// (0x00012081) form_field_slider_wide_pane_ParamLimits

0x76fd,	// (0x00012081) form_field_slider_wide_pane

0x7710,	// (0x00012094) data_form_pane

0x7726,	// (0x000120aa) form_field_data_pane_t1

0x773e,	// (0x000120c2) input_focus_pane

0x774c,	// (0x000120d0) data_form_wide_pane

0x7784,	// (0x00012108) form_field_data_wide_pane_t1

0x6f4e,	// (0x000118d2) input_focus_pane_cp6

0x77a6,	// (0x0001212a) form_field_popup_pane_t1

0x773e,	// (0x000120c2) input_focus_pane_cp7

0x77be,	// (0x00012142) list_form_pane

0x77d2,	// (0x00012156) form_field_popup_wide_pane_t1

0x773e,	// (0x000120c2) input_focus_pane_cp8

0x77e7,	// (0x0001216b) list_form_wide_pane

0x77fe,	// (0x00012182) form_field_slider_pane_t1_ParamLimits

0x77fe,	// (0x00012182) form_field_slider_pane_t1

0x7810,	// (0x00012194) form_field_slider_pane_t2_ParamLimits

0x7810,	// (0x00012194) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001a01d) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001a01d) form_field_slider_pane_t

0x6bec,	// (0x00011570) input_focus_pane_cp9_ParamLimits

0x6bec,	// (0x00011570) input_focus_pane_cp9

0x7822,	// (0x000121a6) slider_cont_pane_ParamLimits

0x7822,	// (0x000121a6) slider_cont_pane

0x7836,	// (0x000121ba) form_field_slider_wide_pane_t1_ParamLimits

0x7836,	// (0x000121ba) form_field_slider_wide_pane_t1

0x7848,	// (0x000121cc) form_field_slider_wide_pane_t2_ParamLimits

0x7848,	// (0x000121cc) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001a022) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001a022) form_field_slider_wide_pane_t

0x6bec,	// (0x00011570) input_focus_pane_cp10_ParamLimits

0x6bec,	// (0x00011570) input_focus_pane_cp10

0x785a,	// (0x000121de) slider_cont_pane_cp1_ParamLimits

0x785a,	// (0x000121de) slider_cont_pane_cp1

0x786e,	// (0x000121f2) slider_form_pane_cp

0x7876,	// (0x000121fa) input_focus_pane_g1

0x787e,	// (0x00012202) input_focus_pane_g2

0x7886,	// (0x0001220a) input_focus_pane_g3

0x788e,	// (0x00012212) input_focus_pane_g4

0x7896,	// (0x0001221a) input_focus_pane_g5

0x789e,	// (0x00012222) input_focus_pane_g6

0x78a6,	// (0x0001222a) input_focus_pane_g7

0x78ae,	// (0x00012232) input_focus_pane_g8

0x78b6,	// (0x0001223a) input_focus_pane_g9

0x686d,	// (0x000111f1) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001a027) input_focus_pane_g

0x9aba,	// (0x0001443e) wait_border_pane_g3_copy1

0x78be,	// (0x00012242) data_form_pane_t1

0x686d,	// (0x000111f1) wait_anim_pane_g1_copy1

0xaa49,	// (0x000153cd) data_form_wide_pane_t1

0x78d9,	// (0x0001225d) list_form_graphic_pane_cp_ParamLimits

0x78d9,	// (0x0001225d) list_form_graphic_pane_cp

0xaa1e,	// (0x000153a2) slider_form_pane_g1

0xaa27,	// (0x000153ab) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0001a31f) slider_form_pane_g

0x78f2,	// (0x00012276) list_form_graphic_pane_ParamLimits

0x78f2,	// (0x00012276) list_form_graphic_pane

0x790e,	// (0x00012292) list_form_graphic_pane_g1

0x7916,	// (0x0001229a) list_form_graphic_pane_t1_ParamLimits

0x7916,	// (0x0001229a) list_form_graphic_pane_t1

0x6957,	// (0x000112db) list_highlight_pane_cp5_ParamLimits

0x6957,	// (0x000112db) list_highlight_pane_cp5

0x792b,	// (0x000122af) find_pane_g1

0x7934,	// (0x000122b8) input_find_pane

0x793d,	// (0x000122c1) input_find_pane_g1_ParamLimits

0x793d,	// (0x000122c1) input_find_pane_g1

0x7949,	// (0x000122cd) input_find_pane_t1_ParamLimits

0x7949,	// (0x000122cd) input_find_pane_t1

0x795e,	// (0x000122e2) input_find_pane_t2_ParamLimits

0x795e,	// (0x000122e2) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001a03c) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001a03c) input_find_pane_t

0x7973,	// (0x000122f7) input_focus_pane_cp5_ParamLimits

0x7973,	// (0x000122f7) input_focus_pane_cp5

0x798d,	// (0x00012311) bg_popup_window_pane_cp2_ParamLimits

0x798d,	// (0x00012311) bg_popup_window_pane_cp2

0x799a,	// (0x0001231e) listscroll_menu_pane_ParamLimits

0x799a,	// (0x0001231e) listscroll_menu_pane

0x79a6,	// (0x0001232a) popup_submenu_window_ParamLimits

0x79a6,	// (0x0001232a) popup_submenu_window

0x79d0,	// (0x00012354) find_popup_pane_g1

0x79d8,	// (0x0001235c) input_popup_find_pane_cp

0x7973,	// (0x000122f7) input_focus_pane_cp4_ParamLimits

0x7973,	// (0x000122f7) input_focus_pane_cp4

0x79ee,	// (0x00012372) input_popup_find_pane_t1_ParamLimits

0x79ee,	// (0x00012372) input_popup_find_pane_t1

0x6877,	// (0x000111fb) bg_popup_sub_pane_cp

0x7a1c,	// (0x000123a0) listscroll_popup_sub_pane

0x7a24,	// (0x000123a8) list_submenu_pane_ParamLimits

0x7a24,	// (0x000123a8) list_submenu_pane

0x7a35,	// (0x000123b9) scroll_pane_cp4

0x7a3d,	// (0x000123c1) list_single_popup_submenu_pane_ParamLimits

0x7a3d,	// (0x000123c1) list_single_popup_submenu_pane

0x7a51,	// (0x000123d5) list_single_popup_submenu_pane_g1

0x7a59,	// (0x000123dd) list_single_popup_submenu_pane_t1_ParamLimits

0x7a59,	// (0x000123dd) list_single_popup_submenu_pane_t1

0x6957,	// (0x000112db) bg_active_tab_pane_cp1_ParamLimits

0x6957,	// (0x000112db) bg_active_tab_pane_cp1

0x7a6e,	// (0x000123f2) tabs_2_active_pane_g1

0x7a76,	// (0x000123fa) tabs_2_active_pane_t1

0x6957,	// (0x000112db) bg_passive_tab_pane_cp1_ParamLimits

0x6957,	// (0x000112db) bg_passive_tab_pane_cp1

0x7a6e,	// (0x000123f2) tabs_2_passive_pane_g1

0x7a76,	// (0x000123fa) tabs_2_passive_pane_t1

0x7a88,	// (0x0001240c) bg_active_tab_pane_cp4

0x7a96,	// (0x0001241a) tabs_2_long_active_pane_t1

0x7aa9,	// (0x0001242d) bg_passive_tab_pane_cp4

0x574a,	// (0x000100ce) list_single_midp_graphic_pane_g4_ParamLimits

0x7a88,	// (0x0001240c) bg_active_tab_pane_cp5

0x7ab5,	// (0x00012439) tabs_3_long_active_pane_t1

0x7aa9,	// (0x0001242d) bg_passive_tab_pane_cp5

0x574a,	// (0x000100ce) list_single_midp_graphic_pane_g4

0x6957,	// (0x000112db) bg_popup_window_pane_cp13_ParamLimits

0x6957,	// (0x000112db) bg_popup_window_pane_cp13

0x7ad0,	// (0x00012454) listscroll_popup_fast_pane_ParamLimits

0x7ad0,	// (0x00012454) listscroll_popup_fast_pane

0x7adf,	// (0x00012463) grid_popup_fast_pane_ParamLimits

0x7adf,	// (0x00012463) grid_popup_fast_pane

0x7af1,	// (0x00012475) scroll_pane_cp9_ParamLimits

0x7af1,	// (0x00012475) scroll_pane_cp9

0xc802,	// (0x00017186) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc802,	// (0x00017186) list_single_graphic_hl_pane_t1_cp2

0x7b15,	// (0x00012499) input_focus_pane_cp20_ParamLimits

0x7b15,	// (0x00012499) input_focus_pane_cp20

0x7b23,	// (0x000124a7) query_popup_data_pane_t1_ParamLimits

0x7b23,	// (0x000124a7) query_popup_data_pane_t1

0x7b36,	// (0x000124ba) query_popup_data_pane_t2_ParamLimits

0x7b36,	// (0x000124ba) query_popup_data_pane_t2

0x7b7c,	// (0x00012500) query_popup_data_pane_t3_ParamLimits

0x7b7c,	// (0x00012500) query_popup_data_pane_t3

0x7bbd,	// (0x00012541) query_popup_data_pane_t4_ParamLimits

0x7bbd,	// (0x00012541) query_popup_data_pane_t4

0x7bf9,	// (0x0001257d) query_popup_data_pane_t5_ParamLimits

0x7bf9,	// (0x0001257d) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001a041) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001a041) query_popup_data_pane_t

0x7876,	// (0x000121fa) bg_set_opt_pane_g1

0x787e,	// (0x00012202) bg_set_opt_pane_g2

0x7886,	// (0x0001220a) bg_set_opt_pane_g3

0x788e,	// (0x00012212) bg_set_opt_pane_g4

0x7896,	// (0x0001221a) bg_set_opt_pane_g5

0x789e,	// (0x00012222) bg_set_opt_pane_g6

0x78a6,	// (0x0001222a) bg_set_opt_pane_g7

0x78ae,	// (0x00012232) bg_set_opt_pane_g8

0x78b6,	// (0x0001223a) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001a04c) bg_set_opt_pane_g

0x5342,	// (0x0000fcc6) control_top_pane_stacon_ParamLimits

0x5342,	// (0x0000fcc6) control_top_pane_stacon

0x5395,	// (0x0000fd19) signal_pane_stacon_ParamLimits

0x5395,	// (0x0000fd19) signal_pane_stacon

0x8226,	// (0x00012baa) stacon_top_pane_g1_ParamLimits

0x8226,	// (0x00012baa) stacon_top_pane_g1

0x53ba,	// (0x0000fd3e) title_pane_stacon_ParamLimits

0x53ba,	// (0x0000fd3e) title_pane_stacon

0x53e4,	// (0x0000fd68) uni_indicator_pane_stacon_ParamLimits

0x53e4,	// (0x0000fd68) uni_indicator_pane_stacon

0x53f9,	// (0x0000fd7d) battery_pane_stacon_ParamLimits

0x53f9,	// (0x0000fd7d) battery_pane_stacon

0x543d,	// (0x0000fdc1) control_bottom_pane_stacon_ParamLimits

0x543d,	// (0x0000fdc1) control_bottom_pane_stacon

0x5460,	// (0x0000fde4) navi_pane_stacon_ParamLimits

0x5460,	// (0x0000fde4) navi_pane_stacon

0x8248,	// (0x00012bcc) stacon_bottom_pane_g1_ParamLimits

0x8248,	// (0x00012bcc) stacon_bottom_pane_g1

0x50a3,	// (0x0000fa27) aid_levels_signal_lsc_ParamLimits

0x50a3,	// (0x0000fa27) aid_levels_signal_lsc

0x50ba,	// (0x0000fa3e) signal_pane_stacon_g1_ParamLimits

0x50ba,	// (0x0000fa3e) signal_pane_stacon_g1

0x50ce,	// (0x0000fa52) signal_pane_stacon_g2_ParamLimits

0x50ce,	// (0x0000fa52) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001a05f) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001a05f) signal_pane_stacon_g

0x5103,	// (0x0000fa87) title_pane_stacon_t1_ParamLimits

0x5103,	// (0x0000fa87) title_pane_stacon_t1

0x7c3d,	// (0x000125c1) uni_indicator_pane_stacon_g1

0x7c47,	// (0x000125cb) uni_indicator_pane_stacon_g2

0x7c51,	// (0x000125d5) uni_indicator_pane_stacon_g3

0x7c5b,	// (0x000125df) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001a06b) uni_indicator_pane_stacon_g

0x5128,	// (0x0000faac) control_top_pane_stacon_g1

0x5130,	// (0x0000fab4) control_top_pane_stacon_t1_ParamLimits

0x5130,	// (0x0000fab4) control_top_pane_stacon_t1

0x5167,	// (0x0000faeb) aid_levels_battery_lsc_ParamLimits

0x5167,	// (0x0000faeb) aid_levels_battery_lsc

0x517f,	// (0x0000fb03) battery_pane_stacon_g1_ParamLimits

0x517f,	// (0x0000fb03) battery_pane_stacon_g1

0x5192,	// (0x0000fb16) battery_pane_stacon_g2_ParamLimits

0x5192,	// (0x0000fb16) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001a074) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001a074) battery_pane_stacon_g

0x51d0,	// (0x0000fb54) navi_icon_pane_stacon

0x51e4,	// (0x0000fb68) navi_navi_pane_stacon

0x51d0,	// (0x0000fb54) navi_text_pane_stacon

0x5128,	// (0x0000faac) control_bottom_pane_stacon_g1

0x51f8,	// (0x0000fb7c) control_bottom_pane_stacon_t1_ParamLimits

0x51f8,	// (0x0000fb7c) control_bottom_pane_stacon_t1

0x7c7f,	// (0x00012603) grid_app_pane_ParamLimits

0x7c7f,	// (0x00012603) grid_app_pane

0x7ca3,	// (0x00012627) scroll_pane_cp15_ParamLimits

0x7ca3,	// (0x00012627) scroll_pane_cp15

0x7cb8,	// (0x0001263c) cell_app_pane_ParamLimits

0x7cb8,	// (0x0001263c) cell_app_pane

0x7cdc,	// (0x00012660) cell_app_pane_g1_ParamLimits

0x7cdc,	// (0x00012660) cell_app_pane_g1

0x7d00,	// (0x00012684) cell_app_pane_g2_ParamLimits

0x7d00,	// (0x00012684) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001a079) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001a079) cell_app_pane_g

0x7d0c,	// (0x00012690) cell_app_pane_t1_ParamLimits

0x7d0c,	// (0x00012690) cell_app_pane_t1

0x7d23,	// (0x000126a7) grid_highlight_pane_ParamLimits

0x7d23,	// (0x000126a7) grid_highlight_pane

0x7876,	// (0x000121fa) cell_highlight_pane_g1

0x787e,	// (0x00012202) cell_highlight_pane_g2

0x7886,	// (0x0001220a) cell_highlight_pane_g3

0x788e,	// (0x00012212) cell_highlight_pane_g4

0x7896,	// (0x0001221a) cell_highlight_pane_g5

0x789e,	// (0x00012222) cell_highlight_pane_g6

0x78a6,	// (0x0001222a) cell_highlight_pane_g7

0x78ae,	// (0x00012232) cell_highlight_pane_g8

0x78b6,	// (0x0001223a) cell_highlight_pane_g9

0x686d,	// (0x000111f1) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001a027) cell_highlight_pane_g

0x7d34,	// (0x000126b8) bg_scroll_pane

0x5242,	// (0x0000fbc6) scroll_handle_pane

0x7d7b,	// (0x000126ff) scroll_bg_pane_g1

0x7d90,	// (0x00012714) scroll_bg_pane_g2

0x7da8,	// (0x0001272c) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001a07e) scroll_bg_pane_g

0x7dbd,	// (0x00012741) scroll_handle_focus_pane_ParamLimits

0x7dbd,	// (0x00012741) scroll_handle_focus_pane

0x7d7b,	// (0x000126ff) scroll_handle_pane_g1

0x7dca,	// (0x0001274e) scroll_handle_pane_g2

0x7da8,	// (0x0001272c) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001a085) scroll_handle_pane_g

0x7973,	// (0x000122f7) bg_popup_sub_pane_cp21_ParamLimits

0x7973,	// (0x000122f7) bg_popup_sub_pane_cp21

0x7dde,	// (0x00012762) popup_fep_japan_predictive_window_t1_ParamLimits

0x7dde,	// (0x00012762) popup_fep_japan_predictive_window_t1

0x7df8,	// (0x0001277c) popup_fep_japan_predictive_window_t2_ParamLimits

0x7df8,	// (0x0001277c) popup_fep_japan_predictive_window_t2

0x7e2b,	// (0x000127af) popup_fep_japan_predictive_window_t3_ParamLimits

0x7e2b,	// (0x000127af) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001a08c) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001a08c) popup_fep_japan_predictive_window_t

0x6877,	// (0x000111fb) bg_popup_sub_pane_cp23

0x7e62,	// (0x000127e6) listscroll_japin_cand_pane

0x7e6a,	// (0x000127ee) popup_fep_japan_candidate_window_t1

0x7e78,	// (0x000127fc) candidate_pane_ParamLimits

0x7e78,	// (0x000127fc) candidate_pane

0x7e8a,	// (0x0001280e) scroll_pane_cp30

0x7e92,	// (0x00012816) list_single_popup_jap_candidate_pane_ParamLimits

0x7e92,	// (0x00012816) list_single_popup_jap_candidate_pane

0x6877,	// (0x000111fb) list_highlight_pane_cp30

0x7ea7,	// (0x0001282b) list_single_popup_jap_candidate_pane_t1

0x7eb6,	// (0x0001283a) level_1_signal

0x7ec3,	// (0x00012847) level_2_signal

0x7ed0,	// (0x00012854) level_3_signal

0x7edd,	// (0x00012861) level_4_signal

0x7eea,	// (0x0001286e) level_5_signal

0x7ef7,	// (0x0001287b) level_6_signal

0x7f04,	// (0x00012888) level_7_signal

0x7eb6,	// (0x0001283a) level_1_battery

0x7ec3,	// (0x00012847) level_2_battery

0x7ed0,	// (0x00012854) level_3_battery

0x7edd,	// (0x00012861) level_4_battery

0x7eea,	// (0x0001286e) level_5_battery

0x7ef7,	// (0x0001287b) level_6_battery

0x7f04,	// (0x00012888) level_7_battery

0x7f29,	// (0x000128ad) list_menu_pane_ParamLimits

0x7f29,	// (0x000128ad) list_menu_pane

0x7f3a,	// (0x000128be) scroll_pane_cp25_ParamLimits

0x7f3a,	// (0x000128be) scroll_pane_cp25

0x7f53,	// (0x000128d7) list_double2_graphic_pane_cp2_ParamLimits

0x7f53,	// (0x000128d7) list_double2_graphic_pane_cp2

0x7f53,	// (0x000128d7) list_double2_large_graphic_pane_cp2_ParamLimits

0x7f53,	// (0x000128d7) list_double2_large_graphic_pane_cp2

0x7f53,	// (0x000128d7) list_double2_pane_cp2_ParamLimits

0x7f53,	// (0x000128d7) list_double2_pane_cp2

0x7f53,	// (0x000128d7) list_double_graphic_pane_cp2_ParamLimits

0x7f53,	// (0x000128d7) list_double_graphic_pane_cp2

0x7f53,	// (0x000128d7) list_double_large_graphic_pane_cp2_ParamLimits

0x7f53,	// (0x000128d7) list_double_large_graphic_pane_cp2

0x7f53,	// (0x000128d7) list_double_number_pane_cp2_ParamLimits

0x7f53,	// (0x000128d7) list_double_number_pane_cp2

0x7f53,	// (0x000128d7) list_double_pane_cp2_ParamLimits

0x7f53,	// (0x000128d7) list_double_pane_cp2

0x7f77,	// (0x000128fb) list_single_2graphic_pane_cp2_ParamLimits

0x7f77,	// (0x000128fb) list_single_2graphic_pane_cp2

0x7f77,	// (0x000128fb) list_single_graphic_heading_pane_cp2_ParamLimits

0x7f77,	// (0x000128fb) list_single_graphic_heading_pane_cp2

0x7f77,	// (0x000128fb) list_single_graphic_pane_cp2_ParamLimits

0x7f77,	// (0x000128fb) list_single_graphic_pane_cp2

0x7f77,	// (0x000128fb) list_single_heading_pane_cp2_ParamLimits

0x7f77,	// (0x000128fb) list_single_heading_pane_cp2

0x7f90,	// (0x00012914) list_single_large_graphic_pane_cp2_ParamLimits

0x7f90,	// (0x00012914) list_single_large_graphic_pane_cp2

0x7f77,	// (0x000128fb) list_single_number_heading_pane_cp2_ParamLimits

0x7f77,	// (0x000128fb) list_single_number_heading_pane_cp2

0x7f77,	// (0x000128fb) list_single_number_pane_cp2_ParamLimits

0x7f77,	// (0x000128fb) list_single_number_pane_cp2

0x7f77,	// (0x000128fb) list_single_pane_cp2_ParamLimits

0x7f77,	// (0x000128fb) list_single_pane_cp2

0x7fe6,	// (0x0001296a) bg_popup_sub_pane_cp22

0x52f4,	// (0x0000fc78) popup_side_volume_key_window_g1

0x531e,	// (0x0000fca2) popup_side_volume_key_window_t1

0x533a,	// (0x0000fcbe) volume_small_pane_cp1

0x6bec,	// (0x00011570) bg_popup_sub_pane_cp24_ParamLimits

0x6bec,	// (0x00011570) bg_popup_sub_pane_cp24

0x7ffc,	// (0x00012980) fep_china_uni_candidate_pane_ParamLimits

0x7ffc,	// (0x00012980) fep_china_uni_candidate_pane

0x8010,	// (0x00012994) fep_china_uni_entry_pane

0x8020,	// (0x000129a4) popup_fep_china_uni_window_g1

0x803c,	// (0x000129c0) fep_china_uni_entry_pane_g1

0x8044,	// (0x000129c8) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001a0b9) fep_china_uni_entry_pane_g

0x804c,	// (0x000129d0) fep_entry_item_pane

0x8056,	// (0x000129da) fep_candidate_item_pane

0x805e,	// (0x000129e2) fep_china_uni_candidate_pane_g1

0x8066,	// (0x000129ea) fep_china_uni_candidate_pane_g2

0x806e,	// (0x000129f2) fep_china_uni_candidate_pane_g3

0x8076,	// (0x000129fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001a0be) fep_china_uni_candidate_pane_g

0x686d,	// (0x000111f1) fep_entry_item_pane_g1

0x807e,	// (0x00012a02) fep_entry_item_pane_t1_ParamLimits

0x807e,	// (0x00012a02) fep_entry_item_pane_t1

0x8094,	// (0x00012a18) fep_candidate_item_pane_t1_ParamLimits

0x8094,	// (0x00012a18) fep_candidate_item_pane_t1

0x80a9,	// (0x00012a2d) fep_candidate_item_pane_t2_ParamLimits

0x80a9,	// (0x00012a2d) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001a0c7) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001a0c7) fep_candidate_item_pane_t

0x6957,	// (0x000112db) list_highlight_pane_cp31_ParamLimits

0x6957,	// (0x000112db) list_highlight_pane_cp31

0x80bb,	// (0x00012a3f) level_1_signal_lsc

0x80c4,	// (0x00012a48) level_2_signal_lsc

0x80cd,	// (0x00012a51) level_3_signal_lsc

0x80d6,	// (0x00012a5a) level_4_signal_lsc

0x80df,	// (0x00012a63) level_5_signal_lsc

0x80e8,	// (0x00012a6c) level_6_signal_lsc

0x80f1,	// (0x00012a75) level_7_signal_lsc

0x80f1,	// (0x00012a75) level_1_battery_lsc

0x80fa,	// (0x00012a7e) level_2_battery_lsc

0x8103,	// (0x00012a87) level_3_battery_lsc

0x810c,	// (0x00012a90) level_4_battery_lsc

0x8115,	// (0x00012a99) level_5_battery_lsc

0x811e,	// (0x00012aa2) level_6_battery_lsc

0x80bb,	// (0x00012a3f) level_7_battery_lsc

0x8127,	// (0x00012aab) scroll_handle_focus_pane_g1

0x8130,	// (0x00012ab4) scroll_handle_focus_pane_g2

0x8139,	// (0x00012abd) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001a0cc) scroll_handle_focus_pane_g

0x8142,	// (0x00012ac6) list_single_2graphic_pane_g1_ParamLimits

0x8142,	// (0x00012ac6) list_single_2graphic_pane_g1

0x7216,	// (0x00011b9a) list_single_2graphic_pane_g2_ParamLimits

0x7216,	// (0x00011b9a) list_single_2graphic_pane_g2

0x719c,	// (0x00011b20) list_single_2graphic_pane_g3_ParamLimits

0x719c,	// (0x00011b20) list_single_2graphic_pane_g3

0x814e,	// (0x00012ad2) list_single_2graphic_pane_g4_ParamLimits

0x814e,	// (0x00012ad2) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001a0d3) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001a0d3) list_single_2graphic_pane_g

0x815f,	// (0x00012ae3) list_single_2graphic_pane_t1_ParamLimits

0x815f,	// (0x00012ae3) list_single_2graphic_pane_t1

0x818d,	// (0x00012b11) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x818d,	// (0x00012b11) list_double2_graphic_large_graphic_pane_g1

0x72bb,	// (0x00011c3f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x72bb,	// (0x00011c3f) list_double2_graphic_large_graphic_pane_g2

0x72cc,	// (0x00011c50) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x72cc,	// (0x00011c50) list_double2_graphic_large_graphic_pane_g3

0x819d,	// (0x00012b21) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x819d,	// (0x00012b21) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001a0dc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001a0dc) list_double2_graphic_large_graphic_pane_g

0x81a9,	// (0x00012b2d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x81a9,	// (0x00012b2d) list_double2_graphic_large_graphic_pane_t1

0x81bf,	// (0x00012b43) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x81bf,	// (0x00012b43) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001a0e5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001a0e5) list_double2_graphic_large_graphic_pane_t

0x8310,	// (0x00012c94) popup_fast_swap_window_ParamLimits

0x8310,	// (0x00012c94) popup_fast_swap_window

0x832c,	// (0x00012cb0) popup_side_volume_key_window

0x8348,	// (0x00012ccc) stacon_top_pane

0x8352,	// (0x00012cd6) status_pane_ParamLimits

0x8352,	// (0x00012cd6) status_pane

0x8348,	// (0x00012ccc) status_small_pane

0x6877,	// (0x000111fb) control_pane

0x6877,	// (0x000111fb) stacon_bottom_pane

0x764f,	// (0x00011fd3) scroll_pane_cp121

0x7646,	// (0x00011fca) set_content_pane

0x81d1,	// (0x00012b55) bg_active_tab_pane_g1_cp1

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp1

0x81e3,	// (0x00012b67) bg_active_tab_pane_g3_cp1

0x81d1,	// (0x00012b55) bg_passive_tab_pane_g1_cp1

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp1

0x81e3,	// (0x00012b67) bg_passive_tab_pane_g3_cp1

0x81ec,	// (0x00012b70) bg_active_tab_pane_g1_cp2

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp2

0x81f5,	// (0x00012b79) bg_active_tab_pane_g3_cp2

0x81ec,	// (0x00012b70) bg_passive_tab_pane_g1_cp2

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp2

0x81f5,	// (0x00012b79) bg_passive_tab_pane_g3_cp2

0x81fe,	// (0x00012b82) bg_active_tab_pane_g1_cp3

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp3

0x8207,	// (0x00012b8b) bg_active_tab_pane_g3_cp3

0x81fe,	// (0x00012b82) bg_passive_tab_pane_g1_cp3

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp3

0x8207,	// (0x00012b8b) bg_passive_tab_pane_g3_cp3

0x8210,	// (0x00012b94) bg_active_tab_pane_g1_cp4

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp4

0x821b,	// (0x00012b9f) bg_active_tab_pane_g3_cp4

0x8210,	// (0x00012b94) bg_passive_tab_pane_g1_cp4

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp4

0x821b,	// (0x00012b9f) bg_passive_tab_pane_g3_cp4

0x8264,	// (0x00012be8) bg_active_tab_pane_g1_cp5

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp5

0x826d,	// (0x00012bf1) bg_active_tab_pane_g3_cp5

0x8264,	// (0x00012be8) bg_passive_tab_pane_g1_cp5

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp5

0x826d,	// (0x00012bf1) bg_passive_tab_pane_g3_cp5

0x8276,	// (0x00012bfa) list_set_graphic_pane_ParamLimits

0x8276,	// (0x00012bfa) list_set_graphic_pane

0x6877,	// (0x000111fb) bg_set_opt_pane_cp4

0x8293,	// (0x00012c17) list_set_graphic_pane_g1_ParamLimits

0x8293,	// (0x00012c17) list_set_graphic_pane_g1

0x829f,	// (0x00012c23) list_set_graphic_pane_g2_ParamLimits

0x829f,	// (0x00012c23) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001a0ea) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001a0ea) list_set_graphic_pane_g

0x0009,

0xfad0,	// (0x0001a454) volume_small_pane_cp_g

0x82c3,	// (0x00012c47) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x82c3,	// (0x00012c47) list_double2_large_graphic_pane_g1_cp2

0x82cf,	// (0x00012c53) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x82cf,	// (0x00012c53) list_double2_large_graphic_pane_g2_cp2

0x82e0,	// (0x00012c64) list_double2_large_graphic_pane_g3_cp2

0x82e8,	// (0x00012c6c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x82e8,	// (0x00012c6c) list_double2_large_graphic_pane_t1_cp2

0x82fe,	// (0x00012c82) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x82fe,	// (0x00012c82) list_double2_large_graphic_pane_t2_cp2

0xa593,	// (0x00014f17) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa593,	// (0x00014f17) list_double_large_graphic_pane_g1_cp2

0xa5a4,	// (0x00014f28) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa5a4,	// (0x00014f28) list_double_large_graphic_pane_g2_cp2

0x846e,	// (0x00012df2) list_double_large_graphic_pane_g3_cp2

0xa5b5,	// (0x00014f39) list_double_large_graphic_pane_g4_cp

0xa5bd,	// (0x00014f41) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa5bd,	// (0x00014f41) list_double_large_graphic_pane_t1_cp2

0xa5d4,	// (0x00014f58) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa5d4,	// (0x00014f58) list_double_large_graphic_pane_t2_cp2

0x8360,	// (0x00012ce4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8360,	// (0x00012ce4) list_double2_graphic_pane_g1_cp2

0x836e,	// (0x00012cf2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x836e,	// (0x00012cf2) list_double2_graphic_pane_g2_cp2

0x837f,	// (0x00012d03) list_double2_graphic_pane_g3_cp2

0x8389,	// (0x00012d0d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8389,	// (0x00012d0d) list_double2_graphic_pane_t1_cp2

0x839f,	// (0x00012d23) list_double2_graphic_pane_t2_cp2_ParamLimits

0x839f,	// (0x00012d23) list_double2_graphic_pane_t2_cp2

0x83b1,	// (0x00012d35) list_single_number_heading_pane_g1_cp2_ParamLimits

0x83b1,	// (0x00012d35) list_single_number_heading_pane_g1_cp2

0x83bd,	// (0x00012d41) list_single_number_heading_pane_g2_cp2

0x83c5,	// (0x00012d49) list_single_number_heading_pane_t1_cp2_ParamLimits

0x83c5,	// (0x00012d49) list_single_number_heading_pane_t1_cp2

0x83db,	// (0x00012d5f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x83db,	// (0x00012d5f) list_single_number_heading_pane_t2_cp2

0x83ed,	// (0x00012d71) list_single_number_heading_pane_t3_cp2_ParamLimits

0x83ed,	// (0x00012d71) list_single_number_heading_pane_t3_cp2

0x83b1,	// (0x00012d35) list_single_heading_pane_g1_cp2_ParamLimits

0x83b1,	// (0x00012d35) list_single_heading_pane_g1_cp2

0x83bd,	// (0x00012d41) list_single_heading_pane_g2_cp2

0x83c5,	// (0x00012d49) list_single_heading_pane_t1_cp2_ParamLimits

0x83c5,	// (0x00012d49) list_single_heading_pane_t1_cp2

0xa39b,	// (0x00014d1f) list_single_heading_pane_t2_cp2_ParamLimits

0xa39b,	// (0x00014d1f) list_single_heading_pane_t2_cp2

0xa2dd,	// (0x00014c61) list_double_graphic_pane_g1_cp2_ParamLimits

0xa2dd,	// (0x00014c61) list_double_graphic_pane_g1_cp2

0xa2e9,	// (0x00014c6d) list_double_graphic_pane_g2_cp2_ParamLimits

0xa2e9,	// (0x00014c6d) list_double_graphic_pane_g2_cp2

0xa2f8,	// (0x00014c7c) list_double_graphic_pane_g3_cp2

0xa300,	// (0x00014c84) list_double_graphic_pane_t1_cp2_ParamLimits

0xa300,	// (0x00014c84) list_double_graphic_pane_t1_cp2

0xa316,	// (0x00014c9a) list_double_graphic_pane_t2_cp2_ParamLimits

0xa316,	// (0x00014c9a) list_double_graphic_pane_t2_cp2

0x8462,	// (0x00012de6) list_double_number_pane_g1_cp2_ParamLimits

0x8462,	// (0x00012de6) list_double_number_pane_g1_cp2

0x846e,	// (0x00012df2) list_double_number_pane_g2_cp2

0xa2a1,	// (0x00014c25) list_double_number_pane_t1_cp2_ParamLimits

0xa2a1,	// (0x00014c25) list_double_number_pane_t1_cp2

0xa2b5,	// (0x00014c39) list_double_number_pane_t2_cp2_ParamLimits

0xa2b5,	// (0x00014c39) list_double_number_pane_t2_cp2

0xa2cb,	// (0x00014c4f) list_double_number_pane_t3_cp2_ParamLimits

0xa2cb,	// (0x00014c4f) list_double_number_pane_t3_cp2

0xa18a,	// (0x00014b0e) list_single_graphic_pane_g1_cp2_ParamLimits

0xa18a,	// (0x00014b0e) list_single_graphic_pane_g1_cp2

0x84c6,	// (0x00012e4a) list_single_graphic_pane_g2_cp2_ParamLimits

0x84c6,	// (0x00012e4a) list_single_graphic_pane_g2_cp2

0x84d2,	// (0x00012e56) list_single_graphic_pane_g3_cp2

0xa160,	// (0x00014ae4) list_single_graphic_pane_t1_cp2_ParamLimits

0xa160,	// (0x00014ae4) list_single_graphic_pane_t1_cp2

0x84c6,	// (0x00012e4a) list_single_number_pane_g1_cp2_ParamLimits

0x84c6,	// (0x00012e4a) list_single_number_pane_g1_cp2

0x84d2,	// (0x00012e56) list_single_number_pane_g2_cp2

0xa160,	// (0x00014ae4) list_single_number_pane_t1_cp2_ParamLimits

0xa160,	// (0x00014ae4) list_single_number_pane_t1_cp2

0xa176,	// (0x00014afa) list_single_number_pane_t2_cp2_ParamLimits

0xa176,	// (0x00014afa) list_single_number_pane_t2_cp2

0x82cf,	// (0x00012c53) list_double2_pane_g1_cp2_ParamLimits

0x82cf,	// (0x00012c53) list_double2_pane_g1_cp2

0x82e0,	// (0x00012c64) list_double2_pane_g2_cp2

0x843a,	// (0x00012dbe) list_double2_pane_t1_cp2_ParamLimits

0x843a,	// (0x00012dbe) list_double2_pane_t1_cp2

0x8450,	// (0x00012dd4) list_double2_pane_t2_cp2_ParamLimits

0x8450,	// (0x00012dd4) list_double2_pane_t2_cp2

0x8462,	// (0x00012de6) list_double_pane_g1_cp2_ParamLimits

0x8462,	// (0x00012de6) list_double_pane_g1_cp2

0x846e,	// (0x00012df2) list_double_pane_g2_cp2

0x8476,	// (0x00012dfa) list_double_pane_t1_cp2_ParamLimits

0x8476,	// (0x00012dfa) list_double_pane_t1_cp2

0x848c,	// (0x00012e10) list_double_pane_t2_cp2_ParamLimits

0x848c,	// (0x00012e10) list_double_pane_t2_cp2

0x84b6,	// (0x00012e3a) list_single_pane_cp2_g3

0x84c6,	// (0x00012e4a) list_single_pane_g1_cp2_ParamLimits

0x84c6,	// (0x00012e4a) list_single_pane_g1_cp2

0x84d2,	// (0x00012e56) list_single_pane_g2_cp2

0x84da,	// (0x00012e5e) list_single_pane_t1_cp2_ParamLimits

0x84da,	// (0x00012e5e) list_single_pane_t1_cp2

0x84f2,	// (0x00012e76) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x84f2,	// (0x00012e76) list_single_large_graphic_pane_g1_cp2

0x84fe,	// (0x00012e82) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x84fe,	// (0x00012e82) list_single_large_graphic_pane_g2_cp2

0x850a,	// (0x00012e8e) list_single_large_graphic_pane_g3_cp2

0x8512,	// (0x00012e96) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8512,	// (0x00012e96) list_single_large_graphic_pane_g4_cp1

0x852c,	// (0x00012eb0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x852c,	// (0x00012eb0) list_single_large_graphic_pane_t1_cp2

0xa12c,	// (0x00014ab0) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa12c,	// (0x00014ab0) list_single_graphic_heading_pane_g1_cp2

0xa0f9,	// (0x00014a7d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa0f9,	// (0x00014a7d) list_single_graphic_heading_pane_g4_cp2

0x84d2,	// (0x00012e56) list_single_graphic_heading_pane_g5_cp2

0xa138,	// (0x00014abc) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa138,	// (0x00014abc) list_single_graphic_heading_pane_t1_cp2

0xa14e,	// (0x00014ad2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa14e,	// (0x00014ad2) list_single_graphic_heading_pane_t2_cp2

0xa0ed,	// (0x00014a71) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa0ed,	// (0x00014a71) list_single_2graphic_pane_g1_cp2

0xa0f9,	// (0x00014a7d) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa0f9,	// (0x00014a7d) list_single_2graphic_pane_g2_cp2

0x84d2,	// (0x00012e56) list_single_2graphic_pane_g3_cp2

0xa10a,	// (0x00014a8e) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa10a,	// (0x00014a8e) list_single_2graphic_pane_g4_cp2

0xa116,	// (0x00014a9a) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa116,	// (0x00014a9a) list_single_2graphic_pane_t1_cp2

0x686d,	// (0x000111f1) list_highlight_pane_g10_cp1

0x9cc5,	// (0x00014649) list_highlight_pane_g1_cp1

0x9ccd,	// (0x00014651) list_highlight_pane_g2_cp1

0x9cd5,	// (0x00014659) list_highlight_pane_g3_cp1

0x9cdd,	// (0x00014661) list_highlight_pane_g4_cp1

0x9ce5,	// (0x00014669) list_highlight_pane_g5_cp1

0x9ced,	// (0x00014671) list_highlight_pane_g6_cp1

0x9cf5,	// (0x00014679) list_highlight_pane_g7_cp1

0x9cfd,	// (0x00014681) list_highlight_pane_g8_cp1

0x9d05,	// (0x00014689) list_highlight_pane_g9_cp1

0x9be5,	// (0x00014569) form_field_slider_pane_t3

0x9bf3,	// (0x00014577) form_field_slider_pane_t4

0x9c01,	// (0x00014585) slider_form_pane_ParamLimits

0x9c01,	// (0x00014585) slider_form_pane

0x6877,	// (0x000111fb) control_abbreviations

0x6877,	// (0x000111fb) control_conventions

0x6877,	// (0x000111fb) control_definitions

0x6877,	// (0x000111fb) format_table_attribute

0xa3e5,	// (0x00014d69) bg_popup_preview_window_pane_g9

0x6877,	// (0x000111fb) format_table_data2

0x6877,	// (0x000111fb) format_table_data3

0x6877,	// (0x000111fb) format_table_data_example

0x0008,

0x6877,	// (0x000111fb) intro_purpose

0xf8fb,	// (0x0001a27f) bg_popup_preview_window_pane_g

0x6877,	// (0x000111fb) texts_category

0x6877,	// (0x000111fb) texts_graphics

0x8542,	// (0x00012ec6) text_digital

0x8551,	// (0x00012ed5) text_primary

0x8560,	// (0x00012ee4) text_primary_small

0x856f,	// (0x00012ef3) text_secondary

0x857e,	// (0x00012f02) text_title

0xac0c,	// (0x00015590) bg_passive_tab_pane_g1_cp3_srt

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp3_srt

0xac15,	// (0x00015599) bg_passive_tab_pane_g3_cp3_srt

0x6957,	// (0x000112db) bg_active_tab_pane_cp3_srt_ParamLimits

0x6957,	// (0x000112db) bg_active_tab_pane_cp3_srt

0xac1e,	// (0x000155a2) tabs_4_active_pane_srt_g1

0xac26,	// (0x000155aa) tabs_4_active_pane_srt_t1_ParamLimits

0xac26,	// (0x000155aa) tabs_4_active_pane_srt_t1

0xac0c,	// (0x00015590) bg_active_tab_pane_g1_cp3_copy1

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp3_copy1

0xac15,	// (0x00015599) bg_active_tab_pane_g3_cp3_copy1

0x6957,	// (0x000112db) tabs_2_long_active_pane_srt_ParamLimits

0x6957,	// (0x000112db) tabs_2_long_active_pane_srt

0x6957,	// (0x000112db) tabs_2_long_passive_pane_srt_ParamLimits

0x6957,	// (0x000112db) tabs_2_long_passive_pane_srt

0x7aa9,	// (0x0001242d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7aa9,	// (0x0001242d) bg_passive_tab_pane_cp4_srt

0xa851,	// (0x000151d5) bg_passive_tab_pane_g1_cp4_srt

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp4_srt

0xa85a,	// (0x000151de) bg_passive_tab_pane_g3_cp4_srt

0x7a88,	// (0x0001240c) bg_active_tab_pane_cp4_srt_ParamLimits

0x7a88,	// (0x0001240c) bg_active_tab_pane_cp4_srt

0xa863,	// (0x000151e7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa863,	// (0x000151e7) tabs_2_long_active_pane_srt_t1

0xa851,	// (0x000151d5) bg_active_tab_pane_g1_cp4_srt

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp4_srt

0xa85a,	// (0x000151de) bg_active_tab_pane_g3_cp4_srt

0x6bec,	// (0x00011570) tabs_3_long_active_pane_srt_ParamLimits

0x6bec,	// (0x00011570) tabs_3_long_active_pane_srt

0x6bec,	// (0x00011570) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6bec,	// (0x00011570) tabs_3_long_passive_pane_cp_srt

0x6bec,	// (0x00011570) tabs_3_long_passive_pane_srt_ParamLimits

0x6bec,	// (0x00011570) tabs_3_long_passive_pane_srt

0x7aa9,	// (0x0001242d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7aa9,	// (0x0001242d) bg_passive_tab_pane_cp5_srt

0x8264,	// (0x00012be8) bg_passive_tab_pane_g1_cp5_srt

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp5_srt

0x826d,	// (0x00012bf1) bg_passive_tab_pane_g3_cp5_srt

0x7a88,	// (0x0001240c) bg_active_tab_pane_cp5_srt_ParamLimits

0x7a88,	// (0x0001240c) bg_active_tab_pane_cp5_srt

0xa83f,	// (0x000151c3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa83f,	// (0x000151c3) tabs_3_long_active_pane_srt_t1

0x8264,	// (0x00012be8) bg_active_tab_pane_g1_cp5_srt

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp5_srt

0x826d,	// (0x00012bf1) bg_active_tab_pane_g3_cp5_srt

0xa831,	// (0x000151b5) navi_text_pane_srt_t1

0xa829,	// (0x000151ad) navi_icon_pane_srt_g1

0x8751,	// (0x000130d5) midp_editing_number_pane_srt

0x858d,	// (0x00012f11) midp_ticker_pane_srt

0x8759,	// (0x000130dd) midp_ticker_pane_srt_g1

0x8761,	// (0x000130e5) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001a109) midp_ticker_pane_srt_g

0x8769,	// (0x000130ed) midp_ticker_pane_srt_t1

0xa81a,	// (0x0001519e) midp_editing_number_pane_t1_copy1

0x8595,	// (0x00012f19) listscroll_midp_pane

0x8595,	// (0x00012f19) midp_form_pane

0x8603,	// (0x00012f87) midp_info_popup_window_ParamLimits

0x8603,	// (0x00012f87) midp_info_popup_window

0x7973,	// (0x000122f7) bg_popup_sub_pane_cp50_ParamLimits

0x7973,	// (0x000122f7) bg_popup_sub_pane_cp50

0x98fd,	// (0x00014281) listscroll_midp_info_pane_ParamLimits

0x98fd,	// (0x00014281) listscroll_midp_info_pane

0x98e5,	// (0x00014269) listscroll_form_midp_pane_ParamLimits

0x98e5,	// (0x00014269) listscroll_form_midp_pane

0x98f1,	// (0x00014275) scroll_bar_cp050

0x98c5,	// (0x00014249) list_midp_pane

0xb82d,	// (0x000161b1) signal_pane_g2_cp

0x97ff,	// (0x00014183) listscroll_midp_info_pane_t1_ParamLimits

0x97ff,	// (0x00014183) listscroll_midp_info_pane_t1

0x9817,	// (0x0001419b) listscroll_midp_info_pane_t2_ParamLimits

0x9817,	// (0x0001419b) listscroll_midp_info_pane_t2

0x9855,	// (0x000141d9) listscroll_midp_info_pane_t3_ParamLimits

0x9855,	// (0x000141d9) listscroll_midp_info_pane_t3

0x988f,	// (0x00014213) listscroll_midp_info_pane_t4_ParamLimits

0x988f,	// (0x00014213) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0001a1ba) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0001a1ba) listscroll_midp_info_pane_t

0x7a35,	// (0x000123b9) scroll_pane_cp21

0x979d,	// (0x00014121) form_midp_field_choice_group_pane

0x97a6,	// (0x0001412a) form_midp_field_text_pane

0x97e5,	// (0x00014169) form_midp_field_time_pane

0x97ed,	// (0x00014171) form_midp_gauge_slider_pane

0x97f6,	// (0x0001417a) form_midp_gauge_wait_pane

0x6877,	// (0x000111fb) form_midp_image_pane

0x976e,	// (0x000140f2) list_single_midp_pane_ParamLimits

0x976e,	// (0x000140f2) list_single_midp_pane

0x9726,	// (0x000140aa) form_midp_field_text_pane_t1

0x9509,	// (0x00013e8d) input_focus_pane_cp050

0x975d,	// (0x000140e1) list_midp_form_text_pane

0x96f5,	// (0x00014079) form_midp_field_choice_group_pane_t1

0x9703,	// (0x00014087) input_focus_pane_cp051

0x9717,	// (0x0001409b) list_midp_choice_pane

0x6877,	// (0x000111fb) status_idle_pane

0x96d9,	// (0x0001405d) form_midp_field_time_pane_t1

0x686d,	// (0x000111f1) wait_anim_pane_g2_copy1

0x96e7,	// (0x0001406b) form_midp_field_time_pane_t2

0x0001,

0x86b1,	// (0x00013035) aid_navinavi_width_2_pane

0xf831,	// (0x0001a1b5) form_midp_field_time_pane_t

0x6877,	// (0x000111fb) input_focus_pane_cp052

0x6877,	// (0x000111fb) bg_input_focus_pane_cp040

0x9699,	// (0x0001401d) form_midp_gauge_slider_pane_t1

0x96a7,	// (0x0001402b) form_midp_gauge_slider_pane_t2

0x96b5,	// (0x00014039) form_midp_gauge_slider_pane_t3

0x96c3,	// (0x00014047) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0001a1ac) form_midp_gauge_slider_pane_t

0x96d1,	// (0x00014055) form_midp_slider_pane

0x6957,	// (0x000112db) bg_input_focus_pane_cp041_ParamLimits

0x6957,	// (0x000112db) bg_input_focus_pane_cp041

0x9666,	// (0x00013fea) form_midp_gauge_wait_pane_t1_ParamLimits

0x9666,	// (0x00013fea) form_midp_gauge_wait_pane_t1

0x9678,	// (0x00013ffc) form_midp_gauge_wait_pane_t2_ParamLimits

0x9678,	// (0x00013ffc) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0001a1a7) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0001a1a7) form_midp_gauge_wait_pane_t

0x968a,	// (0x0001400e) form_midp_wait_pane_ParamLimits

0x968a,	// (0x0001400e) form_midp_wait_pane

0x9630,	// (0x00013fb4) form_midp_image_pane_g1

0x9639,	// (0x00013fbd) form_midp_image_pane_t1

0x9648,	// (0x00013fcc) form_midp_image_pane_t2

0x9657,	// (0x00013fdb) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0001a1a0) form_midp_image_pane_t

0x9618,	// (0x00013f9c) list_single_midp_pane_g1

0x9621,	// (0x00013fa5) list_single_midp_pane_t1

0x95f0,	// (0x00013f74) list_midp_form_item_pane_ParamLimits

0x95f0,	// (0x00013f74) list_midp_form_item_pane

0x8659,	// (0x00012fdd) list_midp_form_item_pane_t1

0x8668,	// (0x00012fec) midp_ticker_pane_g1

0x8674,	// (0x00012ff8) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001a0ef) midp_ticker_pane_g

0x8680,	// (0x00013004) midp_ticker_pane_t1

0xaa9e,	// (0x00015422) midp_editing_number_pane_t1

0xaa7c,	// (0x00015400) midp_editing_number_pane

0xaa8b,	// (0x0001540f) midp_ticker_pane

0xa7e2,	// (0x00015166) ai_message_heading_pane

0x6877,	// (0x000111fb) bg_popup_window_pane_cp14

0xa7ea,	// (0x0001516e) listscroll_ai_message_pane

0xa76c,	// (0x000150f0) ai_message_heading_pane_g1_ParamLimits

0xa76c,	// (0x000150f0) ai_message_heading_pane_g1

0xa778,	// (0x000150fc) ai_message_heading_pane_g2_ParamLimits

0xa778,	// (0x000150fc) ai_message_heading_pane_g2

0xa784,	// (0x00015108) ai_message_heading_pane_g3_ParamLimits

0xa784,	// (0x00015108) ai_message_heading_pane_g3

0xa790,	// (0x00015114) ai_message_heading_pane_g4_ParamLimits

0xa790,	// (0x00015114) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0001a2e1) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0001a2e1) ai_message_heading_pane_g

0xa79c,	// (0x00015120) ai_message_heading_pane_t1_ParamLimits

0xa79c,	// (0x00015120) ai_message_heading_pane_t1

0xa7b6,	// (0x0001513a) ai_message_heading_pane_t2_ParamLimits

0xa7b6,	// (0x0001513a) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0001a2ea) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0001a2ea) ai_message_heading_pane_t

0xa7c8,	// (0x0001514c) bg_popup_heading_pane_cp1_ParamLimits

0xa7c8,	// (0x0001514c) bg_popup_heading_pane_cp1

0xa75a,	// (0x000150de) list_ai_message_pane_ParamLimits

0xa75a,	// (0x000150de) list_ai_message_pane

0x7a35,	// (0x000123b9) scroll_pane_cp10

0xa6f6,	// (0x0001507a) list_ai_message_pane_g1

0xa6fe,	// (0x00015082) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0001a2be) list_ai_message_pane_g

0xa706,	// (0x0001508a) list_ai_message_pane_t1_ParamLimits

0xa706,	// (0x0001508a) list_ai_message_pane_t1

0xa71b,	// (0x0001509f) list_ai_message_pane_t2_ParamLimits

0xa71b,	// (0x0001509f) list_ai_message_pane_t2

0xa730,	// (0x000150b4) list_ai_message_pane_t3_ParamLimits

0xa730,	// (0x000150b4) list_ai_message_pane_t3

0xa745,	// (0x000150c9) list_ai_message_pane_t4_ParamLimits

0xa745,	// (0x000150c9) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0001a2c3) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0001a2c3) list_ai_message_pane_t

0xa6e1,	// (0x00015065) cell_ai_soft_ind_pane_ParamLimits

0xa6e1,	// (0x00015065) cell_ai_soft_ind_pane

0x8692,	// (0x00013016) cell_ai_soft_ind_pane_g1_ParamLimits

0x8692,	// (0x00013016) cell_ai_soft_ind_pane_g1

0x6877,	// (0x000111fb) grid_highlight_cp1

0x869f,	// (0x00013023) text_secondary_cp56_ParamLimits

0x869f,	// (0x00013023) text_secondary_cp56

0xa6b6,	// (0x0001503a) example_general_pane_ParamLimits

0xa6b6,	// (0x0001503a) example_general_pane

0xa6c2,	// (0x00015046) example_parent_pane_g1_ParamLimits

0xa6c2,	// (0x00015046) example_parent_pane_g1

0xa6ce,	// (0x00015052) example_parent_pane_t1_ParamLimits

0xa6ce,	// (0x00015052) example_parent_pane_t1

0x8ca8,	// (0x0001362c) popup_preview_text_window_ParamLimits

0x8ca8,	// (0x0001362c) popup_preview_text_window

0x84be,	// (0x00012e42) list_single_pane_cp2_g4

0x6ca2,	// (0x00011626) bg_popup_preview_window_pane_ParamLimits

0x6ca2,	// (0x00011626) bg_popup_preview_window_pane

0xa3ed,	// (0x00014d71) popup_preview_text_window_t1_ParamLimits

0xa3ed,	// (0x00014d71) popup_preview_text_window_t1

0xa40b,	// (0x00014d8f) popup_preview_text_window_t2_ParamLimits

0xa40b,	// (0x00014d8f) popup_preview_text_window_t2

0xa454,	// (0x00014dd8) popup_preview_text_window_t3_ParamLimits

0xa454,	// (0x00014dd8) popup_preview_text_window_t3

0xa499,	// (0x00014e1d) popup_preview_text_window_t4_ParamLimits

0xa499,	// (0x00014e1d) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0001a292) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0001a292) popup_preview_text_window_t

0xa517,	// (0x00014e9b) scroll_pane_cp11

0x93ef,	// (0x00013d73) bg_popup_preview_window_pane_g1

0xa3ad,	// (0x00014d31) bg_popup_preview_window_pane_g2

0xa3b5,	// (0x00014d39) bg_popup_preview_window_pane_g3

0xa3bd,	// (0x00014d41) bg_popup_preview_window_pane_g4

0xa3c5,	// (0x00014d49) bg_popup_preview_window_pane_g5

0xa3cd,	// (0x00014d51) bg_popup_preview_window_pane_g6

0xa3d5,	// (0x00014d59) bg_popup_preview_window_pane_g7

0xa3dd,	// (0x00014d61) bg_popup_preview_window_pane_g8

0x4c2f,	// (0x0000f5b3) aid_popup_width_pane

0x8c86,	// (0x0001360a) popup_midp_note_alarm_window_ParamLimits

0x8c86,	// (0x0001360a) popup_midp_note_alarm_window

0x7710,	// (0x00012094) data_form_pane_ParamLimits

0x771c,	// (0x000120a0) form_field_data_pane_g1

0x7726,	// (0x000120aa) form_field_data_pane_t1_ParamLimits

0x773e,	// (0x000120c2) input_focus_pane_ParamLimits

0x774c,	// (0x000120d0) data_form_wide_pane_ParamLimits

0x7758,	// (0x000120dc) form_field_data_wide_pane_g1

0x7784,	// (0x00012108) form_field_data_wide_pane_t1_ParamLimits

0x6f4e,	// (0x000118d2) input_focus_pane_cp6_ParamLimits

0x79e2,	// (0x00012366) input_popup_find_pane_g1_ParamLimits

0x79e2,	// (0x00012366) input_popup_find_pane_g1

0x51a3,	// (0x0000fb27) aid_navi_side_left_pane

0x51b8,	// (0x0000fb3c) aid_navi_side_right_pane

0x9dc0,	// (0x00014744) bg_popup_window_pane_cp30_ParamLimits

0x9dc0,	// (0x00014744) bg_popup_window_pane_cp30

0x9e3a,	// (0x000147be) popup_midp_note_alarm_window_g1_ParamLimits

0x9e3a,	// (0x000147be) popup_midp_note_alarm_window_g1

0x9e6a,	// (0x000147ee) popup_midp_note_alarm_window_t1_ParamLimits

0x9e6a,	// (0x000147ee) popup_midp_note_alarm_window_t1

0x9f0b,	// (0x0001488f) popup_midp_note_alarm_window_t2_ParamLimits

0x9f0b,	// (0x0001488f) popup_midp_note_alarm_window_t2

0x9fb9,	// (0x0001493d) popup_midp_note_alarm_window_t3_ParamLimits

0x9fb9,	// (0x0001493d) popup_midp_note_alarm_window_t3

0x9feb,	// (0x0001496f) popup_midp_note_alarm_window_t4_ParamLimits

0x9feb,	// (0x0001496f) popup_midp_note_alarm_window_t4

0xa011,	// (0x00014995) popup_midp_note_alarm_window_t5_ParamLimits

0xa011,	// (0x00014995) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0001a22f) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0001a22f) popup_midp_note_alarm_window_t

0xa0bd,	// (0x00014a41) wait_bar_pane_cp1_ParamLimits

0xa0bd,	// (0x00014a41) wait_bar_pane_cp1

0x6877,	// (0x000111fb) wait_anim_pane_copy1

0x6877,	// (0x000111fb) wait_border_pane_copy1

0x9aa6,	// (0x0001442a) wait_border_pane_g1_copy1

0x779e,	// (0x00012122) form_field_popup_pane_g1

0x77a6,	// (0x0001212a) form_field_popup_pane_t1_ParamLimits

0x773e,	// (0x000120c2) input_focus_pane_cp7_ParamLimits

0x77be,	// (0x00012142) list_form_pane_ParamLimits

0x77ca,	// (0x0001214e) form_field_popup_wide_pane_g1

0x77d2,	// (0x00012156) form_field_popup_wide_pane_t1_ParamLimits

0x773e,	// (0x000120c2) input_focus_pane_cp8_ParamLimits

0x77e7,	// (0x0001216b) list_form_wide_pane_ParamLimits

0xac98,	// (0x0001561c) aid_size_cell_graphic_pane

0x78be,	// (0x00012242) data_form_pane_t1_ParamLimits

0xaa49,	// (0x000153cd) data_form_wide_pane_t1_ParamLimits

0x8f89,	// (0x0001390d) bg_status_flat_pane

0x68b7,	// (0x0001123b) title_pane_t1_ParamLimits

0x691f,	// (0x000112a3) title_pane_t2_ParamLimits

0x6945,	// (0x000112c9) title_pane_t3_ParamLimits

0xf573,	// (0x00019ef7) title_pane_t_ParamLimits

0x7eb6,	// (0x0001283a) level_1_signal_ParamLimits

0x7ec3,	// (0x00012847) level_2_signal_ParamLimits

0x7ed0,	// (0x00012854) level_3_signal_ParamLimits

0x7edd,	// (0x00012861) level_4_signal_ParamLimits

0x7eea,	// (0x0001286e) level_5_signal_ParamLimits

0x7ef7,	// (0x0001287b) level_6_signal_ParamLimits

0x7f04,	// (0x00012888) level_7_signal_ParamLimits

0x7eb6,	// (0x0001283a) level_1_battery_ParamLimits

0x7ec3,	// (0x00012847) level_2_battery_ParamLimits

0x7ed0,	// (0x00012854) level_3_battery_ParamLimits

0x7edd,	// (0x00012861) level_4_battery_ParamLimits

0x7eea,	// (0x0001286e) level_5_battery_ParamLimits

0x7ef7,	// (0x0001287b) level_6_battery_ParamLimits

0x7f04,	// (0x00012888) level_7_battery_ParamLimits

0x9cc5,	// (0x00014649) bg_status_flat_pane_g1

0x9ccd,	// (0x00014651) bg_status_flat_pane_g2

0x9cd5,	// (0x00014659) bg_status_flat_pane_g3

0x9cdd,	// (0x00014661) bg_status_flat_pane_g4

0x9ce5,	// (0x00014669) bg_status_flat_pane_g5

0x9ced,	// (0x00014671) bg_status_flat_pane_g6

0x9cf5,	// (0x00014679) bg_status_flat_pane_g7

0x696d,	// (0x000112f1) tabs_3_active_pane_t1_ParamLimits

0x696d,	// (0x000112f1) tabs_3_passive_pane_t1_ParamLimits

0x6987,	// (0x0001130b) tabs_4_active_pane_t1_ParamLimits

0x6987,	// (0x0001130b) tabs_4_1_passive_pane_t1_ParamLimits

0x7a76,	// (0x000123fa) tabs_2_active_pane_t1_ParamLimits

0x7a76,	// (0x000123fa) tabs_2_passive_pane_t1_ParamLimits

0x7a88,	// (0x0001240c) bg_active_tab_pane_cp4_ParamLimits

0x7a96,	// (0x0001241a) tabs_2_long_active_pane_t1_ParamLimits

0x7aa9,	// (0x0001242d) bg_passive_tab_pane_cp4_ParamLimits

0x577e,	// (0x00010102) list_single_midp_graphic_pane_t1_ParamLimits

0x7a88,	// (0x0001240c) bg_active_tab_pane_cp5_ParamLimits

0x7ab5,	// (0x00012439) tabs_3_long_active_pane_t1_ParamLimits

0x7aa9,	// (0x0001242d) bg_passive_tab_pane_cp5_ParamLimits

0x577e,	// (0x00010102) list_single_midp_graphic_pane_t1

0x8f89,	// (0x0001390d) bg_status_flat_pane_ParamLimits

0x904c,	// (0x000139d0) indicator_pane_cp2_ParamLimits

0x904c,	// (0x000139d0) indicator_pane_cp2

0x9170,	// (0x00013af4) navi_pane_srt_ParamLimits

0x9170,	// (0x00013af4) navi_pane_srt

0x9194,	// (0x00013b18) popup_clock_digital_analogue_window_cp1

0x6a4e,	// (0x000113d2) indicator_pane_t1

0x858d,	// (0x00012f11) copy_highlight_pane

0x858d,	// (0x00012f11) cursor_graphics_pane

0x858d,	// (0x00012f11) graphic_within_text_pane

0x858d,	// (0x00012f11) link_highlight_pane

0xa4da,	// (0x00014e5e) popup_preview_text_window_t5_ParamLimits

0xa4da,	// (0x00014e5e) popup_preview_text_window_t5

0x86b9,	// (0x0001303d) cursor_digital_pane

0x86b9,	// (0x0001303d) cursor_primary_pane

0x86ca,	// (0x0001304e) cursor_primary_small_pane

0x86d2,	// (0x00013056) cursor_secondary_pane

0x86da,	// (0x0001305e) cursor_title_pane

0x86b9,	// (0x0001303d) link_highlight_digital_pane

0x86c1,	// (0x00013045) link_highlight_primary_pane

0x86ca,	// (0x0001304e) link_highlight_primary_small_pane

0x86d2,	// (0x00013056) link_highlight_secondary_pane

0x86da,	// (0x0001305e) link_highlight_title_pane

0x86b9,	// (0x0001303d) copy_highlight_digital_pane

0x86b9,	// (0x0001303d) copy_highlight_primary_pane

0x86ca,	// (0x0001304e) copy_highlight_primary_small_pane

0x86d2,	// (0x00013056) copy_highlight_secondary_pane

0x86da,	// (0x0001305e) copy_highlight_title_pane

0x86d2,	// (0x00013056) graphic_text_digital_pane

0x9d63,	// (0x000146e7) graphic_text_primary_pane

0x9d6c,	// (0x000146f0) graphic_text_primary_small_pane

0x86ca,	// (0x0001304e) graphic_text_secondary_pane

0x86b9,	// (0x0001303d) graphic_text_title_pane

0x86e2,	// (0x00013066) cursor_primary_pane_g1

0x9d55,	// (0x000146d9) cursor_text_primary_t1

0x9d3d,	// (0x000146c1) cursor_primary_small_pane_g1

0x9d47,	// (0x000146cb) cursor_text_primary_small_t1

0x9d25,	// (0x000146a9) cursor_primary_small_pane_g1_copy1

0x9d2f,	// (0x000146b3) cursor_text_primary_small_t1_copy1

0x9d0d,	// (0x00014691) cursor_text_title_t1

0x9d1b,	// (0x0001469f) cursor_title_pane_g1

0x86e2,	// (0x00013066) cursor_digital_pane_g1

0x86ec,	// (0x00013070) cursor_text_digital_t1

0x8711,	// (0x00013095) link_highlight_primary_pane_g1

0x9cb6,	// (0x0001463a) link_highlight_primary_pane_t1

0x86fa,	// (0x0001307e) link_highlight_primary_small_pane_g1

0x8702,	// (0x00013086) link_highlight_primary_small_pane_t1

0x8711,	// (0x00013095) link_highlight_secondary_pane_g1

0x8719,	// (0x0001309d) link_highlight_secondary_pane_t1

0x9c2a,	// (0x000145ae) link_highlight_title_pane_g1

0x9c32,	// (0x000145b6) link_highlight_title_pane_t1

0x9c13,	// (0x00014597) link_highlight_digital_pane_g1

0x9c1b,	// (0x0001459f) link_highlight_digital_pane_t1

0x9aeb,	// (0x0001446f) copy_highlight_primary_pane_g1

0x9af3,	// (0x00014477) copy_highlight_primary_pane_t1

0x9ac5,	// (0x00014449) copy_highlight_primary_small_pane_g1

0x9adc,	// (0x00014460) copy_highlight_primary_small_pane_t1

0x8728,	// (0x000130ac) copy_highlight_secondary_pane_g1

0x8730,	// (0x000130b4) copy_highlight_secondary_pane_t1

0x9ac5,	// (0x00014449) copy_highlight_title_pane_g1

0x9acd,	// (0x00014451) copy_highlight_title_pane_t1

0x9aeb,	// (0x0001446f) copy_highlight_digital_pane_g1

0xae62,	// (0x000157e6) copy_highlight_digital_pane_t1

0xadb6,	// (0x0001573a) graphic_text_primary_pane_g1

0xae46,	// (0x000157ca) graphic_text_primary_pane_t1

0xae54,	// (0x000157d8) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0001a35e) graphic_text_primary_pane_t

0xae22,	// (0x000157a6) graphic_text_primary_small_pane_g1

0xae2a,	// (0x000157ae) graphic_text_primary_small_pane_t1

0xae38,	// (0x000157bc) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0001a359) graphic_text_primary_small_pane_t

0xadfe,	// (0x00015782) graphic_text_secondary_pane_g1

0xae06,	// (0x0001578a) graphic_text_secondary_pane_t1

0xae14,	// (0x00015798) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0001a354) graphic_text_secondary_pane_t

0xadda,	// (0x0001575e) graphic_text_title_pane_g1

0xade2,	// (0x00015766) graphic_text_title_pane_t1

0xadf0,	// (0x00015774) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0001a34f) graphic_text_title_pane_t

0xadb6,	// (0x0001573a) graphic_text_digital_pane_g1

0xadbe,	// (0x00015742) graphic_text_digital_pane_t1

0xadcc,	// (0x00015750) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0001a34a) graphic_text_digital_pane_t

0x6957,	// (0x000112db) navi_icon_pane_srt_ParamLimits

0x6957,	// (0x000112db) navi_icon_pane_srt

0x6877,	// (0x000111fb) navi_midp_pane_srt

0x6877,	// (0x000111fb) navi_navi_pane_srt

0x6957,	// (0x000112db) navi_text_pane_srt_ParamLimits

0x6957,	// (0x000112db) navi_text_pane_srt

0xad81,	// (0x00015705) navi_navi_icon_text_pane_srt

0xad89,	// (0x0001570d) navi_navi_pane_srt_g1_ParamLimits

0xad89,	// (0x0001570d) navi_navi_pane_srt_g1

0xad9b,	// (0x0001571f) navi_navi_pane_srt_g2_ParamLimits

0xad9b,	// (0x0001571f) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0001a345) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0001a345) navi_navi_pane_srt_g

0xadad,	// (0x00015731) navi_navi_tabs_pane_srt

0xad81,	// (0x00015705) navi_navi_text_pane_srt

0xad81,	// (0x00015705) navi_navi_volume_pane_srt

0xad72,	// (0x000156f6) navi_navi_text_pane_srt_t1

0x5af8,	// (0x0001047c) navi_navi_volume_pane_srt_g1

0x5b00,	// (0x00010484) volume_small_pane_srt_ParamLimits

0x5b00,	// (0x00010484) volume_small_pane_srt

0x5483,	// (0x0000fe07) volume_small_pane_srt_g1_ParamLimits

0x5483,	// (0x0000fe07) volume_small_pane_srt_g1

0x5493,	// (0x0000fe17) volume_small_pane_srt_g2_ParamLimits

0x5493,	// (0x0000fe17) volume_small_pane_srt_g2

0x54a4,	// (0x0000fe28) volume_small_pane_srt_g3_ParamLimits

0x54a4,	// (0x0000fe28) volume_small_pane_srt_g3

0x54b5,	// (0x0000fe39) volume_small_pane_srt_g4_ParamLimits

0x54b5,	// (0x0000fe39) volume_small_pane_srt_g4

0x54c6,	// (0x0000fe4a) volume_small_pane_srt_g5_ParamLimits

0x54c6,	// (0x0000fe4a) volume_small_pane_srt_g5

0x54d7,	// (0x0000fe5b) volume_small_pane_srt_g6_ParamLimits

0x54d7,	// (0x0000fe5b) volume_small_pane_srt_g6

0x54e8,	// (0x0000fe6c) volume_small_pane_srt_g7_ParamLimits

0x54e8,	// (0x0000fe6c) volume_small_pane_srt_g7

0x54f9,	// (0x0000fe7d) volume_small_pane_srt_g8_ParamLimits

0x54f9,	// (0x0000fe7d) volume_small_pane_srt_g8

0x550a,	// (0x0000fe8e) volume_small_pane_srt_g9_ParamLimits

0x550a,	// (0x0000fe8e) volume_small_pane_srt_g9

0x551b,	// (0x0000fe9f) volume_small_pane_srt_g10_ParamLimits

0x551b,	// (0x0000fe9f) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001a0f4) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001a0f4) volume_small_pane_srt_g

0x6d4b,	// (0x000116cf) query_popup_data_pane_cp2

0xad58,	// (0x000156dc) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad58,	// (0x000156dc) navi_navi_icon_text_pane_srt_t1

0x9d63,	// (0x000146e7) navi_tabs_2_long_pane_srt

0x9d63,	// (0x000146e7) navi_tabs_2_pane_srt

0x9d63,	// (0x000146e7) navi_tabs_3_long_pane_srt

0x9d63,	// (0x000146e7) navi_tabs_3_pane_srt

0x9d63,	// (0x000146e7) navi_tabs_4_pane_srt

0x5ad8,	// (0x0001045c) tabs_2_active_pane_srt_ParamLimits

0x5ad8,	// (0x0001045c) tabs_2_active_pane_srt

0x5ae8,	// (0x0001046c) tabs_2_passive_pane_srt_ParamLimits

0x5ae8,	// (0x0001046c) tabs_2_passive_pane_srt

0x8917,	// (0x0001329b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8917,	// (0x0001329b) bg_passive_tab_pane_cp1_srt

0xad24,	// (0x000156a8) bg_passive_tab_pane_g1_cp1_srt

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp1_srt

0xad2d,	// (0x000156b1) bg_passive_tab_pane_g3_cp1_srt

0x6957,	// (0x000112db) bg_active_tab_pane_cp1_srt_ParamLimits

0x6957,	// (0x000112db) bg_active_tab_pane_cp1_srt

0xad36,	// (0x000156ba) tabs_2_active_pane_srt_g1

0xad3e,	// (0x000156c2) tabs_2_active_pane_srt_t1_ParamLimits

0xad3e,	// (0x000156c2) tabs_2_active_pane_srt_t1

0xad24,	// (0x000156a8) bg_active_tab_pane_g1_cp1_srt

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp1_srt

0xad2d,	// (0x000156b1) bg_active_tab_pane_g3_cp1_srt

0x5aa5,	// (0x00010429) tabs_3_active_pane_srt_ParamLimits

0x5aa5,	// (0x00010429) tabs_3_active_pane_srt

0x5ab6,	// (0x0001043a) tabs_3_passive_pane_cp_srt_ParamLimits

0x5ab6,	// (0x0001043a) tabs_3_passive_pane_cp_srt

0x5ac7,	// (0x0001044b) tabs_3_passive_pane_srt_ParamLimits

0x5ac7,	// (0x0001044b) tabs_3_passive_pane_srt

0x8917,	// (0x0001329b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8917,	// (0x0001329b) bg_passive_tab_pane_cp2_srt

0x873f,	// (0x000130c3) bg_passive_tab_pane_g1_cp2_srt

0x81da,	// (0x00012b5e) bg_passive_tab_pane_g2_cp2_srt

0x8748,	// (0x000130cc) bg_passive_tab_pane_g3_cp2_srt

0x6957,	// (0x000112db) bg_active_tab_pane_cp2_srt_ParamLimits

0x6957,	// (0x000112db) bg_active_tab_pane_cp2_srt

0xad0a,	// (0x0001568e) tabs_3_active_pane_srt_g1

0xad12,	// (0x00015696) tabs_3_active_pane_srt_t1_ParamLimits

0xad12,	// (0x00015696) tabs_3_active_pane_srt_t1

0x873f,	// (0x000130c3) bg_active_tab_pane_g1_cp2_srt

0x81da,	// (0x00012b5e) bg_active_tab_pane_g2_cp2_srt

0x8748,	// (0x000130cc) bg_active_tab_pane_g3_cp2_srt

0x5a5d,	// (0x000103e1) tabs_4_active_pane_srt_ParamLimits

0x5a5d,	// (0x000103e1) tabs_4_active_pane_srt

0x5a6f,	// (0x000103f3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5a6f,	// (0x000103f3) tabs_4_passive_pane_cp2_srt

0x889d,	// (0x00013221) aid_size_cell_toolbar

0x7aa9,	// (0x0001242d) main_idle_act_pane_ParamLimits

0x8abc,	// (0x00013440) popup_large_graphic_colour_window_ParamLimits

0x8e23,	// (0x000137a7) popup_toolbar_window_ParamLimits

0x8e23,	// (0x000137a7) popup_toolbar_window

0xaac8,	// (0x0001544c) list_single_graphic_2heading_pane_ParamLimits

0xaac8,	// (0x0001544c) list_single_graphic_2heading_pane

0x7c65,	// (0x000125e9) aid_size_cell_apps_grid_lsc_pane

0x7c77,	// (0x000125fb) aid_size_cell_apps_grid_prt_pane

0x8917,	// (0x0001329b) bg_wml_button_pane_cp1_ParamLimits

0x8917,	// (0x0001329b) bg_wml_button_pane_cp1

0x9726,	// (0x000140aa) form_midp_field_text_pane_t1_ParamLimits

0x9509,	// (0x00013e8d) input_focus_pane_cp050_ParamLimits

0x975d,	// (0x000140e1) list_midp_form_text_pane_ParamLimits

0x9703,	// (0x00014087) input_focus_pane_cp051_ParamLimits

0x9717,	// (0x0001409b) list_midp_choice_pane_ParamLimits

0x959a,	// (0x00013f1e) list_single_2graphic_pane_cp3_ParamLimits

0x959a,	// (0x00013f1e) list_single_2graphic_pane_cp3

0x95be,	// (0x00013f42) list_single_midp_graphic_pane_ParamLimits

0x95be,	// (0x00013f42) list_single_midp_graphic_pane

0x5681,	// (0x00010005) list_single_graphic_2heading_pane_g1_ParamLimits

0x5681,	// (0x00010005) list_single_graphic_2heading_pane_g1

0x568d,	// (0x00010011) list_single_graphic_2heading_pane_g4_ParamLimits

0x568d,	// (0x00010011) list_single_graphic_2heading_pane_g4

0x5699,	// (0x0001001d) list_single_graphic_2heading_pane_g5_ParamLimits

0x5699,	// (0x0001001d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001a147) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001a147) list_single_graphic_2heading_pane_g

0x56a5,	// (0x00010029) list_single_graphic_2heading_pane_t1_ParamLimits

0x56a5,	// (0x00010029) list_single_graphic_2heading_pane_t1

0x56b9,	// (0x0001003d) list_single_graphic_2heading_pane_t2_ParamLimits

0x56b9,	// (0x0001003d) list_single_graphic_2heading_pane_t2

0x56d5,	// (0x00010059) list_single_graphic_2heading_pane_t3_ParamLimits

0x56d5,	// (0x00010059) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001a14e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001a14e) list_single_graphic_2heading_pane_t

0x92f3,	// (0x00013c77) bg_popup_sub_pane_cp2

0x931d,	// (0x00013ca1) grid_toobar_pane

0x56ed,	// (0x00010071) cell_toolbar_pane_ParamLimits

0x56ed,	// (0x00010071) cell_toolbar_pane

0x9393,	// (0x00013d17) cell_toolbar_pane_g1_ParamLimits

0x9393,	// (0x00013d17) cell_toolbar_pane_g1

0x93a7,	// (0x00013d2b) cell_toolbar_pane_g2_ParamLimits

0x93a7,	// (0x00013d2b) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001a15c) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001a15c) cell_toolbar_pane_g

0x93c9,	// (0x00013d4d) grid_highlight_pane_cp2_ParamLimits

0x93c9,	// (0x00013d4d) grid_highlight_pane_cp2

0x93e3,	// (0x00013d67) toolbar_button_pane

0x93ef,	// (0x00013d73) toolbar_button_pane_g1

0x93f7,	// (0x00013d7b) toolbar_button_pane_g2

0x93ff,	// (0x00013d83) toolbar_button_pane_g3

0x9407,	// (0x00013d8b) toolbar_button_pane_g4

0x940f,	// (0x00013d93) toolbar_button_pane_g5

0x9417,	// (0x00013d9b) toolbar_button_pane_g6

0x941f,	// (0x00013da3) toolbar_button_pane_g7

0x9427,	// (0x00013dab) toolbar_button_pane_g8

0x942f,	// (0x00013db3) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001a161) toolbar_button_pane_g

0x5725,	// (0x000100a9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5725,	// (0x000100a9) list_single_2graphic_pane_g1_cp3

0x5731,	// (0x000100b5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5731,	// (0x000100b5) list_single_2graphic_pane_g2_cp3

0x5742,	// (0x000100c6) list_single_2graphic_pane_g3_cp3

0x574a,	// (0x000100ce) list_single_2graphic_pane_g4_cp3_ParamLimits

0x574a,	// (0x000100ce) list_single_2graphic_pane_g4_cp3

0x5756,	// (0x000100da) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5756,	// (0x000100da) list_single_2graphic_pane_t1_cp3

0x5772,	// (0x000100f6) list_single_midp_graphic_pane_g2_ParamLimits

0x5772,	// (0x000100f6) list_single_midp_graphic_pane_g2

0x88a5,	// (0x00013229) aid_zoom_text_primary

0x88ad,	// (0x00013231) aid_zoom_text_secondary

0x87fc,	// (0x00013180) status_small_pane_g7_ParamLimits

0x87fc,	// (0x00013180) status_small_pane_g7

0x881f,	// (0x000131a3) status_small_pane_t1_ParamLimits

0x688e,	// (0x00011212) title_pane_g2

0x0003,

0xf56a,	// (0x00019eee) title_pane_g

0x6dec,	// (0x00011770) aid_size_cell_colour_1_pane_ParamLimits

0x6dec,	// (0x00011770) aid_size_cell_colour_1_pane

0x6e00,	// (0x00011784) aid_size_cell_colour_2_pane_ParamLimits

0x6e00,	// (0x00011784) aid_size_cell_colour_2_pane

0x6e14,	// (0x00011798) aid_size_cell_colour_3_pane_ParamLimits

0x6e14,	// (0x00011798) aid_size_cell_colour_3_pane

0x6e28,	// (0x000117ac) aid_size_cell_colour_4_pane_ParamLimits

0x6e28,	// (0x000117ac) aid_size_cell_colour_4_pane

0x50df,	// (0x0000fa63) title_pane_stacon_g1_ParamLimits

0x50df,	// (0x0000fa63) title_pane_stacon_g1

0x9b4a,	// (0x000144ce) popup_note_wait_window_g3_ParamLimits

0x9b4a,	// (0x000144ce) popup_note_wait_window_g3

0x9bc0,	// (0x00014544) popup_note_wait_window_t5_ParamLimits

0x9bc0,	// (0x00014544) popup_note_wait_window_t5

0x6877,	// (0x000111fb) main_feb_china_hwr_fs_writing_pane

0x89a1,	// (0x00013325) popup_feb_china_hwr_fs_window_ParamLimits

0x89a1,	// (0x00013325) popup_feb_china_hwr_fs_window

0x5794,	// (0x00010118) aid_size_cell_hwr_fs_ParamLimits

0x5794,	// (0x00010118) aid_size_cell_hwr_fs

0x9509,	// (0x00013e8d) bg_popup_sub_pane_cp3_ParamLimits

0x9509,	// (0x00013e8d) bg_popup_sub_pane_cp3

0x57a9,	// (0x0001012d) grid_hwr_fs_pane_ParamLimits

0x57a9,	// (0x0001012d) grid_hwr_fs_pane

0x57c1,	// (0x00010145) linegrid_hwr_fs_pane_ParamLimits

0x57c1,	// (0x00010145) linegrid_hwr_fs_pane

0x57d1,	// (0x00010155) cell_hwr_fs_pane_ParamLimits

0x57d1,	// (0x00010155) cell_hwr_fs_pane

0x9515,	// (0x00013e99) linegrid_hwr_fs_pane_g1_ParamLimits

0x9515,	// (0x00013e99) linegrid_hwr_fs_pane_g1

0x9521,	// (0x00013ea5) linegrid_hwr_fs_pane_g2_ParamLimits

0x9521,	// (0x00013ea5) linegrid_hwr_fs_pane_g2

0x9533,	// (0x00013eb7) linegrid_hwr_fs_pane_g3_ParamLimits

0x9533,	// (0x00013eb7) linegrid_hwr_fs_pane_g3

0x57f3,	// (0x00010177) linegrid_hwr_fs_pane_g4_ParamLimits

0x57f3,	// (0x00010177) linegrid_hwr_fs_pane_g4

0x580d,	// (0x00010191) linegrid_hwr_fs_pane_g5_ParamLimits

0x580d,	// (0x00010191) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0001a18c) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0001a18c) linegrid_hwr_fs_pane_g

0x953f,	// (0x00013ec3) cell_hwr_fs_pane_g1_ParamLimits

0x953f,	// (0x00013ec3) cell_hwr_fs_pane_g1

0x922a,	// (0x00013bae) cell_hwr_fs_pane_g2_ParamLimits

0x922a,	// (0x00013bae) cell_hwr_fs_pane_g2

0x9555,	// (0x00013ed9) cell_hwr_fs_pane_g3_ParamLimits

0x9555,	// (0x00013ed9) cell_hwr_fs_pane_g3

0x9562,	// (0x00013ee6) cell_hwr_fs_pane_g4_ParamLimits

0x9562,	// (0x00013ee6) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0001a197) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0001a197) cell_hwr_fs_pane_g

0x5823,	// (0x000101a7) cell_hwr_fs_pane_t1

0x6877,	// (0x000111fb) grid_highlight_pane_cp6

0x6877,	// (0x000111fb) main_idle_act2_pane

0x7a1c,	// (0x000123a0) aid_inside_area_popup_secondary

0xa1f7,	// (0x00014b7b) aid_inside_area_window_primary_ParamLimits

0xa1f7,	// (0x00014b7b) aid_inside_area_window_primary

0xae71,	// (0x000157f5) ai2_news_ticker_pane

0xae79,	// (0x000157fd) aid_size_cell_ai1_link_ParamLimits

0xae79,	// (0x000157fd) aid_size_cell_ai1_link

0xae93,	// (0x00015817) popup_ai2_data_window_ParamLimits

0xae93,	// (0x00015817) popup_ai2_data_window

0xaea9,	// (0x0001582d) popup_ai2_link_window_ParamLimits

0xaea9,	// (0x0001582d) popup_ai2_link_window

0x9509,	// (0x00013e8d) bg_popup_sub_pane_cp4_ParamLimits

0x9509,	// (0x00013e8d) bg_popup_sub_pane_cp4

0xaebd,	// (0x00015841) grid_ai2_link_pane_ParamLimits

0xaebd,	// (0x00015841) grid_ai2_link_pane

0xaed4,	// (0x00015858) popup_ai2_link_window_g1_ParamLimits

0xaed4,	// (0x00015858) popup_ai2_link_window_g1

0xaee0,	// (0x00015864) popup_ai2_link_window_g2_ParamLimits

0xaee0,	// (0x00015864) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0001a363) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0001a363) popup_ai2_link_window_g

0xaeef,	// (0x00015873) ai2_mp_button_pane

0xaef7,	// (0x0001587b) ai2_mp_volume_pane

0x9703,	// (0x00014087) bg_popup_sub_pane_cp5_ParamLimits

0x9703,	// (0x00014087) bg_popup_sub_pane_cp5

0xaeff,	// (0x00015883) heading_ai2_gene_pane_ParamLimits

0xaeff,	// (0x00015883) heading_ai2_gene_pane

0xaf0b,	// (0x0001588f) list_ai2_gene_pane_ParamLimits

0xaf0b,	// (0x0001588f) list_ai2_gene_pane

0xaf53,	// (0x000158d7) cell_ai2_link_pane_ParamLimits

0xaf53,	// (0x000158d7) cell_ai2_link_pane

0xaf69,	// (0x000158ed) cell_ai2_link_pane_g1

0x6877,	// (0x000111fb) grid_highlight_pane_cp7

0x5b15,	// (0x00010499) ai2_mp_volume_pane_g1

0xb039,	// (0x000159bd) ai2_mp_volume_pane_g2

0xafae,	// (0x00015932) list_ai2_gene_pane_t1

0xb041,	// (0x000159c5) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0001a37c) ai2_mp_volume_pane_g

0x5b1d,	// (0x000104a1) volume_small_pane_cp3

0xb049,	// (0x000159cd) aid_size_cell_ai2_button

0xb051,	// (0x000159d5) grid_ai2_button_pane

0xb05a,	// (0x000159de) cell_ai2_button_pane_ParamLimits

0xb05a,	// (0x000159de) cell_ai2_button_pane

0x686d,	// (0x000111f1) cell_ai2_button_pane_g1

0x6877,	// (0x000111fb) grid_highlight_pane_cp8

0xaff9,	// (0x0001597d) ai2_gene_pane_t1_ParamLimits

0xaff9,	// (0x0001597d) ai2_gene_pane_t1

0x8893,	// (0x00013217) aid_height_parent_landscape

0xa8b1,	// (0x00015235) aid_height_set_list

0xa8c2,	// (0x00015246) aid_size_parent

0xac98,	// (0x0001561c) aid_size_cell_graphic_pane_ParamLimits

0xaf1b,	// (0x0001589f) popup_ai2_data_window_g1_ParamLimits

0xaf1b,	// (0x0001589f) popup_ai2_data_window_g1

0xaf27,	// (0x000158ab) ai2_news_ticker_pane_g1

0xaf2f,	// (0x000158b3) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0001a368) ai2_news_ticker_pane_g

0xaf37,	// (0x000158bb) ai2_news_ticker_pane_t1

0xaf45,	// (0x000158c9) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0001a36d) ai2_news_ticker_pane_t

0xaf72,	// (0x000158f6) heading_ai2_gene_pane_g1

0xaf7a,	// (0x000158fe) heading_ai2_gene_pane_t1_ParamLimits

0xaf7a,	// (0x000158fe) heading_ai2_gene_pane_t1

0xaf8f,	// (0x00015913) list_highlight_pane_cp6

0xaf97,	// (0x0001591b) ai2_gene_pane_ParamLimits

0xaf97,	// (0x0001591b) ai2_gene_pane

0xafbc,	// (0x00015940) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0001a372) list_ai2_gene_pane_t

0xafca,	// (0x0001594e) list_highlight_pane_cp8_ParamLimits

0xafca,	// (0x0001594e) list_highlight_pane_cp8

0xafdb,	// (0x0001595f) ai2_gene_pane_g1_ParamLimits

0xafdb,	// (0x0001595f) ai2_gene_pane_g1

0xafed,	// (0x00015971) ai2_gene_pane_g2_ParamLimits

0xafed,	// (0x00015971) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0001a377) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0001a377) ai2_gene_pane_g

0x7173,	// (0x00011af7) scroll_pane_cp12

0x5640,	// (0x0000ffc4) control_pane_t3_ParamLimits

0x5640,	// (0x0000ffc4) control_pane_t3

0x8810,	// (0x00013194) status_small_pane_g8_ParamLimits

0x8810,	// (0x00013194) status_small_pane_g8

0x8a87,	// (0x0001340b) popup_find_window_ParamLimits

0x8c9a,	// (0x0001361e) popup_note_image_window_ParamLimits

0x9359,	// (0x00013cdd) list_double2_graphic_pane_vc_g1_ParamLimits

0x9359,	// (0x00013cdd) list_double2_graphic_pane_vc_g1

0x9365,	// (0x00013ce9) list_double2_graphic_pane_vc_g2_ParamLimits

0x9365,	// (0x00013ce9) list_double2_graphic_pane_vc_g2

0x9371,	// (0x00013cf5) list_double2_graphic_pane_vc_g3_ParamLimits

0x9371,	// (0x00013cf5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001a155) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a155) list_double2_graphic_pane_vc_g

0x937d,	// (0x00013d01) list_double2_graphic_pane_vc_t1_ParamLimits

0x937d,	// (0x00013d01) list_double2_graphic_pane_vc_t1

0x9365,	// (0x00013ce9) list_single_heading_pane_vc_g1_ParamLimits

0x9365,	// (0x00013ce9) list_single_heading_pane_vc_g1

0x9371,	// (0x00013cf5) list_single_heading_pane_vc_g2_ParamLimits

0x9371,	// (0x00013cf5) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a176) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a176) list_single_heading_pane_vc_g

0x9437,	// (0x00013dbb) list_single_heading_pane_vc_t1_ParamLimits

0x9437,	// (0x00013dbb) list_single_heading_pane_vc_t1

0x944d,	// (0x00013dd1) list_single_heading_pane_vc_t2_ParamLimits

0x944d,	// (0x00013dd1) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0001a17b) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0001a17b) list_single_heading_pane_vc_t

0x9461,	// (0x00013de5) list_setting_number_pane_vc_g1_ParamLimits

0x9461,	// (0x00013de5) list_setting_number_pane_vc_g1

0x946d,	// (0x00013df1) list_setting_number_pane_vc_g2_ParamLimits

0x946d,	// (0x00013df1) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001a180) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001a180) list_setting_number_pane_vc_g

0x9479,	// (0x00013dfd) list_setting_number_pane_vc_t1_ParamLimits

0x9479,	// (0x00013dfd) list_setting_number_pane_vc_t1

0x948d,	// (0x00013e11) list_setting_number_pane_vc_t2_ParamLimits

0x948d,	// (0x00013e11) list_setting_number_pane_vc_t2

0x94a9,	// (0x00013e2d) list_setting_number_pane_vc_t3_ParamLimits

0x94a9,	// (0x00013e2d) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0001a185) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0001a185) list_setting_number_pane_vc_t

0x94cf,	// (0x00013e53) set_value_pane_vc_ParamLimits

0x94cf,	// (0x00013e53) set_value_pane_vc

0xaac8,	// (0x0001544c) list_double2_graphic_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_double2_graphic_pane_vc

0xaada,	// (0x0001545e) list_double2_large_graphic_pane_vc_ParamLimits

0xaada,	// (0x0001545e) list_double2_large_graphic_pane_vc

0xaac8,	// (0x0001544c) list_double2_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_double2_pane_vc

0xaac8,	// (0x0001544c) list_double_graphic_heading_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_double_graphic_heading_pane_vc

0xaac8,	// (0x0001544c) list_double_graphic_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_double_graphic_pane_vc

0xaac8,	// (0x0001544c) list_double_heading_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_double_heading_pane_vc

0xaada,	// (0x0001545e) list_double_large_graphic_pane_vc_ParamLimits

0xaada,	// (0x0001545e) list_double_large_graphic_pane_vc

0xaac8,	// (0x0001544c) list_double_number_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_double_number_pane_vc

0xaac8,	// (0x0001544c) list_double_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_double_pane_vc

0xaac8,	// (0x0001544c) list_double_time_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_double_time_pane_vc

0xaac8,	// (0x0001544c) list_setting_number_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_setting_number_pane_vc

0xaac8,	// (0x0001544c) list_setting_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_setting_pane_vc

0xaac8,	// (0x0001544c) list_single_graphic_heading_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_single_graphic_heading_pane_vc

0xaac8,	// (0x0001544c) list_single_heading_pane_vc_ParamLimits

0xaac8,	// (0x0001544c) list_single_heading_pane_vc

0xaaeb,	// (0x0001546f) list_single_number_heading_pane_vc_ParamLimits

0xaaeb,	// (0x0001546f) list_single_number_heading_pane_vc

0xb08e,	// (0x00015a12) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb08e,	// (0x00015a12) list_double_graphic_heading_pane_vc_g1

0x9365,	// (0x00013ce9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9365,	// (0x00013ce9) list_double_graphic_heading_pane_vc_g2

0x9371,	// (0x00013cf5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9371,	// (0x00013cf5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0001a383) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0001a383) list_double_graphic_heading_pane_vc_g

0xb09a,	// (0x00015a1e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb09a,	// (0x00015a1e) list_double_graphic_heading_pane_vc_t1

0x9437,	// (0x00013dbb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9437,	// (0x00013dbb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0001a38a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0001a38a) list_double_graphic_heading_pane_vc_t

0x9461,	// (0x00013de5) list_setting_pane_vc_g1_ParamLimits

0x9461,	// (0x00013de5) list_setting_pane_vc_g1

0x946d,	// (0x00013df1) list_setting_pane_vc_g2_ParamLimits

0x946d,	// (0x00013df1) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001a180) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001a180) list_setting_pane_vc_g

0xb2b2,	// (0x00015c36) list_setting_pane_vc_t1_ParamLimits

0xb2b2,	// (0x00015c36) list_setting_pane_vc_t1

0xb2c6,	// (0x00015c4a) list_setting_pane_vc_t2_ParamLimits

0xb2c6,	// (0x00015c4a) list_setting_pane_vc_t2

0x0001,

0xfa34,	// (0x0001a3b8) list_setting_pane_vc_t_ParamLimits

0xfa34,	// (0x0001a3b8) list_setting_pane_vc_t

0x94cf,	// (0x00013e53) set_value_pane_cp_vc_ParamLimits

0x94cf,	// (0x00013e53) set_value_pane_cp_vc

0x9365,	// (0x00013ce9) list_single_number_heading_pane_vc_g1_ParamLimits

0x9365,	// (0x00013ce9) list_single_number_heading_pane_vc_g1

0x9371,	// (0x00013cf5) list_single_number_heading_pane_vc_g2_ParamLimits

0x9371,	// (0x00013cf5) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a176) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a176) list_single_number_heading_pane_vc_g

0x9437,	// (0x00013dbb) list_single_number_heading_pane_vc_t1_ParamLimits

0x9437,	// (0x00013dbb) list_single_number_heading_pane_vc_t1

0xb2e8,	// (0x00015c6c) list_single_number_heading_pane_vc_t2_ParamLimits

0xb2e8,	// (0x00015c6c) list_single_number_heading_pane_vc_t2

0xb2fc,	// (0x00015c80) list_single_number_heading_pane_vc_t3_ParamLimits

0xb2fc,	// (0x00015c80) list_single_number_heading_pane_vc_t3

0x0002,

0xfa39,	// (0x0001a3bd) list_single_number_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0001a3bd) list_single_number_heading_pane_vc_t

0x9359,	// (0x00013cdd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9359,	// (0x00013cdd) list_single_graphic_heading_pane_vc_g1

0x9365,	// (0x00013ce9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9365,	// (0x00013ce9) list_single_graphic_heading_pane_vc_g4

0x9371,	// (0x00013cf5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9371,	// (0x00013cf5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001a155) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a155) list_single_graphic_heading_pane_vc_g

0x9437,	// (0x00013dbb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9437,	// (0x00013dbb) list_single_graphic_heading_pane_vc_t1

0xb30e,	// (0x00015c92) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb30e,	// (0x00015c92) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa40,	// (0x0001a3c4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a3c4) list_single_graphic_heading_pane_vc_t

0x9365,	// (0x00013ce9) list_double2_pane_vc_g1_ParamLimits

0x9365,	// (0x00013ce9) list_double2_pane_vc_g1

0x9371,	// (0x00013cf5) list_double2_pane_vc_g2_ParamLimits

0x9371,	// (0x00013cf5) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a176) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a176) list_double2_pane_vc_g

0xb322,	// (0x00015ca6) list_double2_pane_vc_t1_ParamLimits

0xb322,	// (0x00015ca6) list_double2_pane_vc_t1

0xb338,	// (0x00015cbc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb338,	// (0x00015cbc) list_double2_large_graphic_pane_vc_g1

0xb344,	// (0x00015cc8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb344,	// (0x00015cc8) list_double2_large_graphic_pane_vc_g2

0xb350,	// (0x00015cd4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb350,	// (0x00015cd4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa45,	// (0x0001a3c9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa45,	// (0x0001a3c9) list_double2_large_graphic_pane_vc_g

0xb35c,	// (0x00015ce0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb35c,	// (0x00015ce0) list_double2_large_graphic_pane_vc_t1

0xb372,	// (0x00015cf6) list_double_time_pane_vc_g1_ParamLimits

0xb372,	// (0x00015cf6) list_double_time_pane_vc_g1

0xb37e,	// (0x00015d02) list_double_time_pane_vc_g2_ParamLimits

0xb37e,	// (0x00015d02) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x0001a3d0) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x0001a3d0) list_double_time_pane_vc_g

0xb38a,	// (0x00015d0e) list_double_time_pane_vc_t1_ParamLimits

0xb38a,	// (0x00015d0e) list_double_time_pane_vc_t1

0xb3a3,	// (0x00015d27) list_double_time_pane_vc_t2_ParamLimits

0xb3a3,	// (0x00015d27) list_double_time_pane_vc_t2

0xb3be,	// (0x00015d42) list_double_time_pane_vc_t3_ParamLimits

0xb3be,	// (0x00015d42) list_double_time_pane_vc_t3

0xb3d6,	// (0x00015d5a) list_double_time_pane_vc_t4_ParamLimits

0xb3d6,	// (0x00015d5a) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x0001a3d5) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x0001a3d5) list_double_time_pane_vc_t

0x9365,	// (0x00013ce9) list_double_pane_vc_g1_ParamLimits

0x9365,	// (0x00013ce9) list_double_pane_vc_g1

0x9371,	// (0x00013cf5) list_double_pane_vc_g2_ParamLimits

0x9371,	// (0x00013cf5) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a176) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a176) list_double_pane_vc_g

0xb3ea,	// (0x00015d6e) list_double_pane_vc_t1_ParamLimits

0xb3ea,	// (0x00015d6e) list_double_pane_vc_t1

0xb3fc,	// (0x00015d80) list_double_pane_vc_t2_ParamLimits

0xb3fc,	// (0x00015d80) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x0001a3de) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001a3de) list_double_pane_vc_t

0x9365,	// (0x00013ce9) list_double_number_pane_vc_g1_ParamLimits

0x9365,	// (0x00013ce9) list_double_number_pane_vc_g1

0x9371,	// (0x00013cf5) list_double_number_pane_vc_g2_ParamLimits

0x9371,	// (0x00013cf5) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a176) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a176) list_double_number_pane_vc_g

0xb414,	// (0x00015d98) list_double_number_pane_vc_t1_ParamLimits

0xb414,	// (0x00015d98) list_double_number_pane_vc_t1

0xb428,	// (0x00015dac) list_double_number_pane_vc_t2_ParamLimits

0xb428,	// (0x00015dac) list_double_number_pane_vc_t2

0xb3fc,	// (0x00015d80) list_double_number_pane_vc_t3_ParamLimits

0xb3fc,	// (0x00015d80) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x0001a3e3) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x0001a3e3) list_double_number_pane_vc_t

0xb43a,	// (0x00015dbe) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb43a,	// (0x00015dbe) list_double_large_graphic_pane_vc_g1

0xb446,	// (0x00015dca) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb446,	// (0x00015dca) list_double_large_graphic_pane_vc_g2

0xb350,	// (0x00015cd4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb350,	// (0x00015cd4) list_double_large_graphic_pane_vc_g3

0xb455,	// (0x00015dd9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb455,	// (0x00015dd9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x0001a3ea) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0001a3ea) list_double_large_graphic_pane_vc_g

0xb461,	// (0x00015de5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb461,	// (0x00015de5) list_double_large_graphic_pane_vc_t1

0xb473,	// (0x00015df7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb473,	// (0x00015df7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0001a3f3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001a3f3) list_double_large_graphic_pane_vc_t

0x9365,	// (0x00013ce9) list_double_heading_pane_vc_g1_ParamLimits

0x9365,	// (0x00013ce9) list_double_heading_pane_vc_g1

0x9371,	// (0x00013cf5) list_double_heading_pane_vc_g2_ParamLimits

0x9371,	// (0x00013cf5) list_double_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001a176) list_double_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001a176) list_double_heading_pane_vc_g

0xb48c,	// (0x00015e10) list_double_heading_pane_vc_t1_ParamLimits

0xb48c,	// (0x00015e10) list_double_heading_pane_vc_t1

0x9437,	// (0x00013dbb) list_double_heading_pane_vc_t2_ParamLimits

0x9437,	// (0x00013dbb) list_double_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0001a3f8) list_double_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0001a3f8) list_double_heading_pane_vc_t

0x9359,	// (0x00013cdd) list_double_graphic_pane_vc_g1_ParamLimits

0x9359,	// (0x00013cdd) list_double_graphic_pane_vc_g1

0xb4a0,	// (0x00015e24) list_double_graphic_pane_vc_g2_ParamLimits

0xb4a0,	// (0x00015e24) list_double_graphic_pane_vc_g2

0xb4af,	// (0x00015e33) list_double_graphic_pane_vc_g3_ParamLimits

0xb4af,	// (0x00015e33) list_double_graphic_pane_vc_g3

0x0002,

0xfa79,	// (0x0001a3fd) list_double_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x0001a3fd) list_double_graphic_pane_vc_g

0xb4bb,	// (0x00015e3f) list_double_graphic_pane_vc_t1_ParamLimits

0xb4bb,	// (0x00015e3f) list_double_graphic_pane_vc_t1

0xb3fc,	// (0x00015d80) list_double_graphic_pane_vc_t2_ParamLimits

0xb3fc,	// (0x00015d80) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x0001a404) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a404) list_double_graphic_pane_vc_t

0x4c3b,	// (0x0000f5bf) aid_size_cell_fastswap

0x4c43,	// (0x0000f5c7) aid_size_cell_touch_ParamLimits

0x4c43,	// (0x0000f5c7) aid_size_cell_touch

0x4ea8,	// (0x0000f82c) popup_fast_swap_wide_window_ParamLimits

0x4ea8,	// (0x0000f82c) popup_fast_swap_wide_window

0x4fb2,	// (0x0000f936) touch_pane_ParamLimits

0x4fb2,	// (0x0000f936) touch_pane

0x7658,	// (0x00011fdc) button_value_adjust_pane_cp2

0x7660,	// (0x00011fe4) button_value_adjust_pane_cp4

0x7682,	// (0x00012006) form_field_data_pane_cp2

0x76a3,	// (0x00012027) form_field_data_wide_pane_cp2

0x7d34,	// (0x000126b8) bg_scroll_pane_ParamLimits

0x5242,	// (0x0000fbc6) scroll_handle_pane_ParamLimits

0x5256,	// (0x0000fbda) scroll_sc2_down_pane_ParamLimits

0x5256,	// (0x0000fbda) scroll_sc2_down_pane

0x7d65,	// (0x000126e9) scroll_sc2_up_pane_ParamLimits

0x7d65,	// (0x000126e9) scroll_sc2_up_pane

0xb900,	// (0x00016284) grid_wheel_folder_pane_g1_ParamLimits

0xb900,	// (0x00016284) grid_wheel_folder_pane_g1

0x541b,	// (0x0000fd9f) clock_nsta_pane_cp2_ParamLimits

0x541b,	// (0x0000fd9f) clock_nsta_pane_cp2

0x8595,	// (0x00012f19) listscroll_midp_pane_ParamLimits

0x85a1,	// (0x00012f25) midp_canvas_pane

0x888b,	// (0x0001320f) nsta_clock_indic_pane

0x88e9,	// (0x0001326d) listscroll_form_pane_vc

0x8905,	// (0x00013289) listscroll_set_pane_vc_ParamLimits

0x8905,	// (0x00013289) listscroll_set_pane_vc

0x8fa5,	// (0x00013929) clock_nsta_pane

0x901a,	// (0x0001399e) indicator_nsta_pane

0x92f3,	// (0x00013c77) bg_popup_sub_pane_cp2_ParamLimits

0x9307,	// (0x00013c8b) find_pane_cp2_ParamLimits

0x9307,	// (0x00013c8b) find_pane_cp2

0x931d,	// (0x00013ca1) grid_toobar_pane_ParamLimits

0x94dd,	// (0x00013e61) list_form_gen_pane_vc_ParamLimits

0x94dd,	// (0x00013e61) list_form_gen_pane_vc

0x94f3,	// (0x00013e77) scroll_pane_cp8_vc_ParamLimits

0x94f3,	// (0x00013e77) scroll_pane_cp8_vc

0x956f,	// (0x00013ef3) data_form_wide_pane_vc_ParamLimits

0x956f,	// (0x00013ef3) data_form_wide_pane_vc

0x957b,	// (0x00013eff) form_field_data_wide_pane_vc_g1

0x9583,	// (0x00013f07) form_field_data_wide_pane_vc_t1_ParamLimits

0x9583,	// (0x00013f07) form_field_data_wide_pane_vc_t1

0x773e,	// (0x000120c2) input_focus_pane_cp6_vc_ParamLimits

0x773e,	// (0x000120c2) input_focus_pane_cp6_vc

0x98c5,	// (0x00014249) list_midp_pane_ParamLimits

0x98d1,	// (0x00014255) scroll_pane_cp16_ParamLimits

0x98d1,	// (0x00014255) scroll_pane_cp16

0x991f,	// (0x000142a3) button_value_adjust_pane_ParamLimits

0x991f,	// (0x000142a3) button_value_adjust_pane

0xa8d4,	// (0x00015258) button_value_adjust_pane_cp6_ParamLimits

0xa8d4,	// (0x00015258) button_value_adjust_pane_cp6

0xa9fe,	// (0x00015382) settings_code_pane_cp_ParamLimits

0xa9fe,	// (0x00015382) settings_code_pane_cp

0x686d,	// (0x000111f1) cell_touch_pane_g1

0x686d,	// (0x000111f1) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001a09e) cell_touch_pane_g

0xb06c,	// (0x000159f0) cell_touch_pane_cp_ParamLimits

0xb06c,	// (0x000159f0) cell_touch_pane_cp

0xb07c,	// (0x00015a00) cell_touch_pane_ParamLimits

0xb07c,	// (0x00015a00) cell_touch_pane

0x686d,	// (0x000111f1) scroll_sc2_down_pane_g1

0x686d,	// (0x000111f1) scroll_sc2_up_pane_g1

0x6877,	// (0x000111fb) bg_set_opt_pane_cp4_vc

0xb0ae,	// (0x00015a32) list_set_graphic_pane_vc_g1_ParamLimits

0xb0ae,	// (0x00015a32) list_set_graphic_pane_vc_g1

0xb0ba,	// (0x00015a3e) list_set_graphic_pane_vc_g2_ParamLimits

0xb0ba,	// (0x00015a3e) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0001a38f) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0001a38f) list_set_graphic_pane_vc_g

0xb0c6,	// (0x00015a4a) text_primary_small_cp13_vc_ParamLimits

0xb0c6,	// (0x00015a4a) text_primary_small_cp13_vc

0xb0de,	// (0x00015a62) list_set_graphic_pane_vc_ParamLimits

0xb0de,	// (0x00015a62) list_set_graphic_pane_vc

0x6877,	// (0x000111fb) input_focus_pane_cp2_vc

0x686d,	// (0x000111f1) setting_code_pane_vc_g1

0xb0f2,	// (0x00015a76) setting_code_pane_vc_t1

0xb100,	// (0x00015a84) set_text_pane_vc_t1_ParamLimits

0xb100,	// (0x00015a84) set_text_pane_vc_t1

0x6877,	// (0x000111fb) input_focus_pane_cp1_vc

0xb11b,	// (0x00015a9f) list_set_text_pane_vc

0x686d,	// (0x000111f1) setting_text_pane_vc_g1

0x6877,	// (0x000111fb) bg_set_opt_pane_cp2_vc

0xb125,	// (0x00015aa9) setting_slider_graphic_pane_vc_g1

0xb12d,	// (0x00015ab1) setting_slider_graphic_pane_vc_t1

0xb13b,	// (0x00015abf) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0001a394) setting_slider_graphic_pane_vc_t

0xb149,	// (0x00015acd) slider_set_pane_cp_vc

0xb151,	// (0x00015ad5) slider_set_pane_vc_g1

0xb15a,	// (0x00015ade) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0001a399) slider_set_pane_vc_g

0x7876,	// (0x000121fa) set_opt_bg_pane_g1_copy1

0x787e,	// (0x00012202) set_opt_bg_pane_g2_copy1

0xb186,	// (0x00015b0a) set_opt_bg_pane_g3_copy1

0x788e,	// (0x00012212) set_opt_bg_pane_g4_copy1

0x7896,	// (0x0001221a) set_opt_bg_pane_g5_copy1

0x789e,	// (0x00012222) set_opt_bg_pane_g6_copy1

0xb190,	// (0x00015b14) set_opt_bg_pane_g7_copy1

0xb198,	// (0x00015b1c) set_opt_bg_pane_g8_copy1

0xb1a2,	// (0x00015b26) set_opt_bg_pane_g9_copy1

0x6877,	// (0x000111fb) bg_set_opt_pane_cp_vc

0xb1ac,	// (0x00015b30) setting_slider_pane_vc_t1

0xb12d,	// (0x00015ab1) setting_slider_pane_vc_t2

0xb13b,	// (0x00015abf) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0001a3a8) setting_slider_pane_vc_t

0xb149,	// (0x00015acd) slider_set_pane_vc

0x5831,	// (0x000101b5) volume_set_pane_vc_g1

0x583a,	// (0x000101be) volume_set_pane_vc_g2

0x5843,	// (0x000101c7) volume_set_pane_vc_g3

0x584c,	// (0x000101d0) volume_set_pane_vc_g4

0x5855,	// (0x000101d9) volume_set_pane_vc_g5

0x585e,	// (0x000101e2) volume_set_pane_vc_g6

0x5867,	// (0x000101eb) volume_set_pane_vc_g7

0x5870,	// (0x000101f4) volume_set_pane_vc_g8

0x5879,	// (0x000101fd) volume_set_pane_vc_g9

0x5882,	// (0x00010206) volume_set_pane_vc_g10

0x0009,

0xf8c2,	// (0x0001a246) volume_set_pane_vc_g

0xb1bb,	// (0x00015b3f) volume_set_pane_vc

0xb1c3,	// (0x00015b47) button_value_adjust_pane_cp1_vc

0xb1cd,	// (0x00015b51) list_highlight_pane_cp2_vc

0xb1d6,	// (0x00015b5a) list_set_pane_vc_ParamLimits

0xb1d6,	// (0x00015b5a) list_set_pane_vc

0xb240,	// (0x00015bc4) main_pane_set_vc_t1_ParamLimits

0xb240,	// (0x00015bc4) main_pane_set_vc_t1

0xb255,	// (0x00015bd9) main_pane_set_vc_t2_ParamLimits

0xb255,	// (0x00015bd9) main_pane_set_vc_t2

0xb267,	// (0x00015beb) main_pane_set_vc_t3_ParamLimits

0xb267,	// (0x00015beb) main_pane_set_vc_t3

0xb27b,	// (0x00015bff) main_pane_set_vc_t4_ParamLimits

0xb27b,	// (0x00015bff) main_pane_set_vc_t4

0x0003,

0xfa2b,	// (0x0001a3af) main_pane_set_vc_t_ParamLimits

0xfa2b,	// (0x0001a3af) main_pane_set_vc_t

0xb28f,	// (0x00015c13) setting_code_pane_vc_ParamLimits

0xb28f,	// (0x00015c13) setting_code_pane_vc

0xb2a0,	// (0x00015c24) setting_slider_graphic_pane_vc

0xb2a0,	// (0x00015c24) setting_slider_pane_vc

0xb2a0,	// (0x00015c24) setting_text_pane_vc

0xb2a0,	// (0x00015c24) setting_volume_pane_vc

0xb2aa,	// (0x00015c2e) scroll_pane_cp121_vc

0x7646,	// (0x00011fca) set_content_pane_vc

0xb4cd,	// (0x00015e51) button_value_adjust_pane_g1

0xb4d6,	// (0x00015e5a) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x0001a409) button_value_adjust_pane_g

0xb4df,	// (0x00015e63) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb4df,	// (0x00015e63) form_field_slider_wide_pane_vc_t1

0xb4f3,	// (0x00015e77) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb4f3,	// (0x00015e77) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8a,	// (0x0001a40e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x0001a40e) form_field_slider_wide_pane_vc_t

0x6bec,	// (0x00011570) input_focus_pane_cp10_vc_ParamLimits

0x6bec,	// (0x00011570) input_focus_pane_cp10_vc

0xb505,	// (0x00015e89) slider_cont_pane_cp1_vc_ParamLimits

0xb505,	// (0x00015e89) slider_cont_pane_cp1_vc

0xb151,	// (0x00015ad5) slider_form_pane_g1_cp2

0xb15a,	// (0x00015ade) slider_form_pane_g2_cp2

0xb51e,	// (0x00015ea2) form_field_slider_pane_vc_t3

0xb52c,	// (0x00015eb0) form_field_slider_pane_vc_t4

0xb53a,	// (0x00015ebe) slider_form_pane_vc_ParamLimits

0xb53a,	// (0x00015ebe) slider_form_pane_vc

0xb547,	// (0x00015ecb) form_field_slider_pane_vc_t1_ParamLimits

0xb547,	// (0x00015ecb) form_field_slider_pane_vc_t1

0xb4f3,	// (0x00015e77) form_field_slider_pane_vc_t2_ParamLimits

0xb4f3,	// (0x00015e77) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x0001a41e) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x0001a41e) form_field_slider_pane_vc_t

0x6bec,	// (0x00011570) input_focus_pane_cp9_vc_ParamLimits

0x6bec,	// (0x00011570) input_focus_pane_cp9_vc

0xb563,	// (0x00015ee7) slider_cont_pane_vc_ParamLimits

0xb563,	// (0x00015ee7) slider_cont_pane_vc

0xb575,	// (0x00015ef9) list_form_graphic_pane_cp_vc_ParamLimits

0xb575,	// (0x00015ef9) list_form_graphic_pane_cp_vc

0x957b,	// (0x00013eff) form_field_popup_wide_pane_vc_g1

0xb58a,	// (0x00015f0e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb58a,	// (0x00015f0e) form_field_popup_wide_pane_vc_t1

0x773e,	// (0x000120c2) input_focus_pane_cp8_vc_ParamLimits

0x773e,	// (0x000120c2) input_focus_pane_cp8_vc

0xb5a1,	// (0x00015f25) list_form_wide_pane_vc_ParamLimits

0xb5a1,	// (0x00015f25) list_form_wide_pane_vc

0xb5ad,	// (0x00015f31) list_form_graphic_pane_vc_g1

0xb5b5,	// (0x00015f39) list_form_graphic_pane_vc_t1_ParamLimits

0xb5b5,	// (0x00015f39) list_form_graphic_pane_vc_t1

0x6957,	// (0x000112db) list_highlight_pane_cp5_vc_ParamLimits

0x6957,	// (0x000112db) list_highlight_pane_cp5_vc

0xb5d1,	// (0x00015f55) list_form_graphic_pane_vc_ParamLimits

0xb5d1,	// (0x00015f55) list_form_graphic_pane_vc

0x957b,	// (0x00013eff) form_field_popup_pane_vc_g1

0xb5e7,	// (0x00015f6b) form_field_popup_pane_vc_t1_ParamLimits

0xb5e7,	// (0x00015f6b) form_field_popup_pane_vc_t1

0x773e,	// (0x000120c2) input_focus_pane_cp7_vc_ParamLimits

0x773e,	// (0x000120c2) input_focus_pane_cp7_vc

0xb5fe,	// (0x00015f82) list_form_pane_vc_ParamLimits

0xb5fe,	// (0x00015f82) list_form_pane_vc

0xb60a,	// (0x00015f8e) data_form_pane_vc_t1_ParamLimits

0xb60a,	// (0x00015f8e) data_form_pane_vc_t1

0x7876,	// (0x000121fa) input_focus_pane_vc_g1

0x787e,	// (0x00012202) input_focus_pane_vc_g2

0x7886,	// (0x0001220a) input_focus_pane_vc_g3

0x788e,	// (0x00012212) input_focus_pane_vc_g4

0x7896,	// (0x0001221a) input_focus_pane_vc_g5

0x789e,	// (0x00012222) input_focus_pane_vc_g6

0x78a6,	// (0x0001222a) input_focus_pane_vc_g7

0x78ae,	// (0x00012232) input_focus_pane_vc_g8

0x78b6,	// (0x0001223a) input_focus_pane_vc_g9

0x686d,	// (0x000111f1) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001a027) input_focus_pane_vc_g

0x956f,	// (0x00013ef3) data_form_pane_vc_ParamLimits

0x956f,	// (0x00013ef3) data_form_pane_vc

0x957b,	// (0x00013eff) form_field_data_pane_vc_g1

0xb625,	// (0x00015fa9) form_field_data_pane_vc_t1_ParamLimits

0xb625,	// (0x00015fa9) form_field_data_pane_vc_t1

0x773e,	// (0x000120c2) input_focus_pane_vc_ParamLimits

0x773e,	// (0x000120c2) input_focus_pane_vc

0xb63f,	// (0x00015fc3) button_value_adjust_pane_cp3_vc

0xb647,	// (0x00015fcb) button_value_adjust_pane_cp5_vc

0xb64f,	// (0x00015fd3) form_field_data_pane_vc_ParamLimits

0xb64f,	// (0x00015fd3) form_field_data_pane_vc

0xb666,	// (0x00015fea) form_field_data_pane_vc_cp2

0xb66e,	// (0x00015ff2) form_field_data_wide_pane_vc_ParamLimits

0xb66e,	// (0x00015ff2) form_field_data_wide_pane_vc

0xb684,	// (0x00016008) form_field_data_wide_pane_vc_cp2

0xb68c,	// (0x00016010) form_field_popup_pane_vc_ParamLimits

0xb68c,	// (0x00016010) form_field_popup_pane_vc

0xb6a3,	// (0x00016027) form_field_popup_wide_pane_vc_ParamLimits

0xb6a3,	// (0x00016027) form_field_popup_wide_pane_vc

0xb6b9,	// (0x0001603d) form_field_slider_pane_vc_ParamLimits

0xb6b9,	// (0x0001603d) form_field_slider_pane_vc

0xb6cc,	// (0x00016050) form_field_slider_wide_pane_vc_ParamLimits

0xb6cc,	// (0x00016050) form_field_slider_wide_pane_vc

0xb6df,	// (0x00016063) grid_touch_1_pane_ParamLimits

0xb6df,	// (0x00016063) grid_touch_1_pane

0xb6eb,	// (0x0001606f) grid_touch_2_pane_ParamLimits

0xb6eb,	// (0x0001606f) grid_touch_2_pane

0x8856,	// (0x000131da) touch_pane_g1_ParamLimits

0x8856,	// (0x000131da) touch_pane_g1

0xb703,	// (0x00016087) cell_app_pane_cp_wide_ParamLimits

0xb703,	// (0x00016087) cell_app_pane_cp_wide

0xb714,	// (0x00016098) grid_popup_fast_wide_pane_ParamLimits

0xb714,	// (0x00016098) grid_popup_fast_wide_pane

0xb728,	// (0x000160ac) scroll_pane_cp19_ParamLimits

0xb728,	// (0x000160ac) scroll_pane_cp19

0x6877,	// (0x000111fb) bg_popup_window_pane_cp20

0xb73c,	// (0x000160c0) listscroll_popup_fast_wide_pane

0x6957,	// (0x000112db) grid_indicator_nsta_pane

0xb744,	// (0x000160c8) clock_nsta_pane_g1

0xb74d,	// (0x000160d1) clock_nsta_pane_t1

0xb769,	// (0x000160ed) cell_indicator_nsta_pane_ParamLimits

0xb769,	// (0x000160ed) cell_indicator_nsta_pane

0xb7a1,	// (0x00016125) cell_indicator_nsta_pane_g1

0xb7af,	// (0x00016133) cell_indicator_nsta_pane_g2

0x0001,

0xfaa4,	// (0x0001a428) cell_indicator_nsta_pane_g

0xb7c5,	// (0x00016149) clock_nsta_pane_cp

0xb7cd,	// (0x00016151) indicator_nsta_pane_cp

0xb7d6,	// (0x0001615a) nsta_clock_indic_pane_g1

0x6a3a,	// (0x000113be) grid_indicator_pane

0x7e5a,	// (0x000127de) scroll_pane_cp29

0x536a,	// (0x0000fcee) indicator_nsta_pane_cp2_ParamLimits

0x536a,	// (0x0000fcee) indicator_nsta_pane_cp2

0x6957,	// (0x000112db) main_apps_wheel_pane

0x97a6,	// (0x0001412a) form_midp_field_text_pane_ParamLimits

0x98f1,	// (0x00014275) scroll_bar_cp050_ParamLimits

0xb83f,	// (0x000161c3) cell_indicator_pane_ParamLimits

0xb83f,	// (0x000161c3) cell_indicator_pane

0xb856,	// (0x000161da) cell_indicator_pane_g1

0xb860,	// (0x000161e4) grid_wheel_folder_pane_ParamLimits

0xb860,	// (0x000161e4) grid_wheel_folder_pane

0xb874,	// (0x000161f8) list_wheel_apps_pane_ParamLimits

0xb874,	// (0x000161f8) list_wheel_apps_pane

0xb885,	// (0x00016209) main_apps_wheel_pane_g1_ParamLimits

0xb885,	// (0x00016209) main_apps_wheel_pane_g1

0xb899,	// (0x0001621d) main_apps_wheel_pane_g2_ParamLimits

0xb899,	// (0x0001621d) main_apps_wheel_pane_g2

0x0001,

0xfac0,	// (0x0001a444) main_apps_wheel_pane_g_ParamLimits

0xfac0,	// (0x0001a444) main_apps_wheel_pane_g

0xb8b1,	// (0x00016235) main_apps_wheel_pane_t1_ParamLimits

0xb8b1,	// (0x00016235) main_apps_wheel_pane_t1

0xb8d4,	// (0x00016258) list_wheel_apps_pane_g1

0xb8dc,	// (0x00016260) list_wheel_apps_pane_g2

0xb8e4,	// (0x00016268) list_wheel_apps_pane_g3

0xb8ec,	// (0x00016270) list_wheel_apps_pane_g4

0xb8f6,	// (0x0001627a) list_wheel_apps_pane_g5

0x0004,

0xfac5,	// (0x0001a449) list_wheel_apps_pane_g

0x840d,	// (0x00012d91) navi_icon_text_pane

0x8ed8,	// (0x0001385c) aid_fill_nsta

0xb919,	// (0x0001629d) navi_icon_text_pane_g1

0xb928,	// (0x000162ac) navi_icon_text_pane_t1

0x82ab,	// (0x00012c2f) list_set_graphic_pane_t1_ParamLimits

0x82ab,	// (0x00012c2f) list_set_graphic_pane_t1

0xa040,	// (0x000149c4) popup_midp_note_alarm_window_t6_ParamLimits

0xa040,	// (0x000149c4) popup_midp_note_alarm_window_t6

0xa052,	// (0x000149d6) popup_midp_note_alarm_window_t7_ParamLimits

0xa052,	// (0x000149d6) popup_midp_note_alarm_window_t7

0xa064,	// (0x000149e8) popup_midp_note_alarm_window_t8_ParamLimits

0xa064,	// (0x000149e8) popup_midp_note_alarm_window_t8

0xa076,	// (0x000149fa) popup_midp_note_alarm_window_t9_ParamLimits

0xa076,	// (0x000149fa) popup_midp_note_alarm_window_t9

0xa088,	// (0x00014a0c) popup_midp_note_alarm_window_t10_ParamLimits

0xa088,	// (0x00014a0c) popup_midp_note_alarm_window_t10

0xa09a,	// (0x00014a1e) popup_midp_note_alarm_window_t11_ParamLimits

0xa09a,	// (0x00014a1e) popup_midp_note_alarm_window_t11

0xa0ac,	// (0x00014a30) scroll_pane_cp17_ParamLimits

0xa0ac,	// (0x00014a30) scroll_pane_cp17

0x5831,	// (0x000101b5) volume_small_pane_cp_g1

0x5b26,	// (0x000104aa) volume_small_pane_cp_g2

0x5b2f,	// (0x000104b3) volume_small_pane_cp_g3

0x5b38,	// (0x000104bc) volume_small_pane_cp_g4

0x5b41,	// (0x000104c5) volume_small_pane_cp_g5

0x5b4a,	// (0x000104ce) volume_small_pane_cp_g6

0x5b53,	// (0x000104d7) volume_small_pane_cp_g7

0x5b5c,	// (0x000104e0) volume_small_pane_cp_g8

0x5b65,	// (0x000104e9) volume_small_pane_cp_g9

0x5b6e,	// (0x000104f2) volume_small_pane_cp_g10

0x8668,	// (0x00012fec) midp_ticker_pane_g1_ParamLimits

0x8674,	// (0x00012ff8) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001a0ef) midp_ticker_pane_g_ParamLimits

0x8680,	// (0x00013004) midp_ticker_pane_t1_ParamLimits

0x8eee,	// (0x00013872) aid_fill_nsta_2

0x98dd,	// (0x00014261) list_form2_midp_pane

0xaa7c,	// (0x00015400) midp_editing_number_pane_ParamLimits

0xaa8b,	// (0x0001540f) midp_ticker_pane_ParamLimits

0xb93d,	// (0x000162c1) form2_midp_field_pane

0xb961,	// (0x000162e5) scroll_pane_cp51

0xb981,	// (0x00016305) form2_midp_button_pane_ParamLimits

0xb981,	// (0x00016305) form2_midp_button_pane

0xb993,	// (0x00016317) form2_midp_content_pane_ParamLimits

0xb993,	// (0x00016317) form2_midp_content_pane

0xb9ad,	// (0x00016331) form2_midp_field_choice_group_pane

0xb9b5,	// (0x00016339) form2_midp_field_pane_g1

0xb9bd,	// (0x00016341) form2_midp_field_pane_g2

0xb9c5,	// (0x00016349) form2_midp_field_pane_g3

0xb9cd,	// (0x00016351) form2_midp_field_pane_g4

0x0003,

0xfaea,	// (0x0001a46e) form2_midp_field_pane_g

0xb9d5,	// (0x00016359) form2_midp_gauge_slider_pane

0xb9dd,	// (0x00016361) form2_midp_gauge_wait_pane

0xb9e5,	// (0x00016369) form2_midp_image_pane_ParamLimits

0xb9e5,	// (0x00016369) form2_midp_image_pane

0xba00,	// (0x00016384) form2_midp_label_pane_ParamLimits

0xba00,	// (0x00016384) form2_midp_label_pane

0xba19,	// (0x0001639d) form2_midp_label_pane_cp_ParamLimits

0xba19,	// (0x0001639d) form2_midp_label_pane_cp

0xba3a,	// (0x000163be) form2_midp_string_pane_ParamLimits

0xba3a,	// (0x000163be) form2_midp_string_pane

0xba4c,	// (0x000163d0) form2_midp_text_pane_ParamLimits

0xba4c,	// (0x000163d0) form2_midp_text_pane

0xba69,	// (0x000163ed) form2_midp_time_pane

0xba79,	// (0x000163fd) input_focus_pane_cp51_ParamLimits

0xba79,	// (0x000163fd) input_focus_pane_cp51

0xba91,	// (0x00016415) form2_midp_label_pane_t1_ParamLimits

0xba91,	// (0x00016415) form2_midp_label_pane_t1

0xbad2,	// (0x00016456) form2_mdip_text_pane_t1_ParamLimits

0xbad2,	// (0x00016456) form2_mdip_text_pane_t1

0xbaf1,	// (0x00016475) form2_midp_time_pane_t1

0xbb0c,	// (0x00016490) form2_midp_gauge_slider_pane_t1

0xbb1e,	// (0x000164a2) form2_midp_gauge_slider_pane_t2

0xbb30,	// (0x000164b4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf3,	// (0x0001a477) form2_midp_gauge_slider_pane_t

0xbb42,	// (0x000164c6) form2_midp_slider_pane

0xbb4e,	// (0x000164d2) form2_midp_gauge_wait_pane_t1

0xbb5c,	// (0x000164e0) form2_midp_wait_pane_ParamLimits

0xbb5c,	// (0x000164e0) form2_midp_wait_pane

0x959a,	// (0x00013f1e) list_single_2graphic_pane_cp4_ParamLimits

0x959a,	// (0x00013f1e) list_single_2graphic_pane_cp4

0xbb87,	// (0x0001650b) list_single_midp_graphic_pane_cp_ParamLimits

0xbb87,	// (0x0001650b) list_single_midp_graphic_pane_cp

0x6877,	// (0x000111fb) list_highlight_pane_cp20

0xbbb6,	// (0x0001653a) list_single_2graphic_pane_g1_cp4

0xbbbe,	// (0x00016542) list_single_2graphic_pane_g2_cp4

0xbbc6,	// (0x0001654a) list_single_2graphic_pane_t1_cp4

0x6957,	// (0x000112db) list_highlight_pane_cp21

0xbbd5,	// (0x00016559) list_single_midp_graphic_pane_g4_cp

0xbbe4,	// (0x00016568) list_single_midp_graphic_pane_t1_cp

0xbbf9,	// (0x0001657d) form2_mdip_string_pane_t1_ParamLimits

0xbbf9,	// (0x0001657d) form2_mdip_string_pane_t1

0x6877,	// (0x000111fb) bg_wml_button_pane_cp2

0x686d,	// (0x000111f1) form2_midp_image_pane_g1

0x7420,	// (0x00011da4) list_double_large_graphic_pane_g5_ParamLimits

0x7420,	// (0x00011da4) list_double_large_graphic_pane_g5

0x8595,	// (0x00012f19) midp_form_pane_ParamLimits

0x6957,	// (0x000112db) main_apps_wheel_pane_ParamLimits

0x8cc0,	// (0x00013644) popup_preview_window_ParamLimits

0x8cc0,	// (0x00013644) popup_preview_window

0x8e7b,	// (0x000137ff) popup_touch_info_window_ParamLimits

0x8e7b,	// (0x000137ff) popup_touch_info_window

0x8e99,	// (0x0001381d) popup_touch_menu_window_ParamLimits

0x8e99,	// (0x0001381d) popup_touch_menu_window

0x6863,	// (0x000111e7) bg_popup_sub_pane_cp6

0xbcf2,	// (0x00016676) list_touch_menu_pane

0xbcfa,	// (0x0001667e) list_single_touch_menu_pane_ParamLimits

0xbcfa,	// (0x0001667e) list_single_touch_menu_pane

0xbd11,	// (0x00016695) list_single_touch_menu_pane_t1

0x6957,	// (0x000112db) bg_popup_sub_pane_cp7_ParamLimits

0x6957,	// (0x000112db) bg_popup_sub_pane_cp7

0xbd1f,	// (0x000166a3) heading_sub_pane

0xbd27,	// (0x000166ab) list_touch_info_pane_ParamLimits

0xbd27,	// (0x000166ab) list_touch_info_pane

0xbd36,	// (0x000166ba) list_single_touch_info_pane_ParamLimits

0xbd36,	// (0x000166ba) list_single_touch_info_pane

0xbd48,	// (0x000166cc) list_single_touch_info_pane_t1

0xbd56,	// (0x000166da) list_single_touch_info_pane_t2

0x0001,

0xfb01,	// (0x0001a485) list_single_touch_info_pane_t

0x858d,	// (0x00012f11) bg_popup_heading_pane_cp

0xbd64,	// (0x000166e8) heading_sub_pane_t1

0x9509,	// (0x00013e8d) bg_popup_preview_window_pane_cp_ParamLimits

0x9509,	// (0x00013e8d) bg_popup_preview_window_pane_cp

0xbd1f,	// (0x000166a3) heading_preview_pane

0xbd27,	// (0x000166ab) list_preview_pane_ParamLimits

0xbd27,	// (0x000166ab) list_preview_pane

0xbd72,	// (0x000166f6) popup_preview_window_g1

0xbd36,	// (0x000166ba) list_single_preview_pane_ParamLimits

0xbd36,	// (0x000166ba) list_single_preview_pane

0xbd7a,	// (0x000166fe) list_single_preview_pane_g1

0xbd82,	// (0x00016706) list_single_preview_pane_t1

0xbd48,	// (0x000166cc) list_single_preview_pane_t2

0x0001,

0xfb06,	// (0x0001a48a) list_single_preview_pane_t

0xbd90,	// (0x00016714) bg_popup_heading_pane_cp2_ParamLimits

0xbd90,	// (0x00016714) bg_popup_heading_pane_cp2

0xbda6,	// (0x0001672a) heading_preview_pane_g1

0xbdae,	// (0x00016732) heading_preview_pane_t1_ParamLimits

0xbdae,	// (0x00016732) heading_preview_pane_t1

0x6a5d,	// (0x000113e1) soft_indicator_pane_t1_ParamLimits

0x7150,	// (0x00011ad4) scroll_pane_ParamLimits

0x7d53,	// (0x000126d7) scroll_sc2_left_pane

0x7d5c,	// (0x000126e0) scroll_sc2_right_pane

0x7d7b,	// (0x000126ff) scroll_bg_pane_g1_ParamLimits

0x7d90,	// (0x00012714) scroll_bg_pane_g2_ParamLimits

0x7da8,	// (0x0001272c) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001a07e) scroll_bg_pane_g_ParamLimits

0x7d7b,	// (0x000126ff) scroll_handle_pane_g1_ParamLimits

0x7dca,	// (0x0001274e) scroll_handle_pane_g2_ParamLimits

0x7da8,	// (0x0001272c) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001a085) scroll_handle_pane_g_ParamLimits

0x8947,	// (0x000132cb) popup_choice_list_window_ParamLimits

0x8947,	// (0x000132cb) popup_choice_list_window

0x92ff,	// (0x00013c83) choice_list_pane

0x93bb,	// (0x00013d3f) cell_toolbar_pane_t1

0x93e3,	// (0x00013d67) toolbar_button_pane_ParamLimits

0xa56c,	// (0x00014ef0) ai_gene_pane_1_t2_ParamLimits

0xa56c,	// (0x00014ef0) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0001a2a2) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0001a2a2) ai_gene_pane_1_t

0xbdcb,	// (0x0001674f) scroll_sc2_left_pane_g1

0xbdcb,	// (0x0001674f) scroll_sc2_right_pane_g1

0x8917,	// (0x0001329b) bg_popup_sub_pane_cp10

0xbdd5,	// (0x00016759) list_choice_list_pane

0xbdec,	// (0x00016770) list_single_choice_list_pane_ParamLimits

0xbdec,	// (0x00016770) list_single_choice_list_pane

0xbe00,	// (0x00016784) list_single_choice_list_pane_g1

0xbe08,	// (0x0001678c) list_single_choice_list_pane_t1_ParamLimits

0xbe08,	// (0x0001678c) list_single_choice_list_pane_t1

0xbe1d,	// (0x000167a1) choice_list_pane_g1

0xbe25,	// (0x000167a9) choice_list_pane_t1

0x6863,	// (0x000111e7) input_focus_pane_cp11

0x7c30,	// (0x000125b4) title_pane_stacon_g2_ParamLimits

0x7c30,	// (0x000125b4) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001a064) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001a064) title_pane_stacon_g

0x858d,	// (0x00012f11) cursor_press_pane

0x89ef,	// (0x00013373) popup_fep_hwr_window_ParamLimits

0x89ef,	// (0x00013373) popup_fep_hwr_window

0x8a69,	// (0x000133ed) popup_fep_vkb_window_ParamLimits

0x8a69,	// (0x000133ed) popup_fep_vkb_window

0xbe33,	// (0x000167b7) cursor_press_pane_g1

0x0002,

0xfb2f,	// (0x0001a4b3) fep_vkb_side_pane_g_ParamLimits

0x5bb0,	// (0x00010534) fep_hwr_candidate_pane_ParamLimits

0x5bb0,	// (0x00010534) fep_hwr_candidate_pane

0x5bda,	// (0x0001055e) fep_hwr_side_pane_ParamLimits

0x5bda,	// (0x0001055e) fep_hwr_side_pane

0x5bfa,	// (0x0001057e) fep_hwr_top_pane_ParamLimits

0x5bfa,	// (0x0001057e) fep_hwr_top_pane

0x5c12,	// (0x00010596) fep_hwr_write_pane_ParamLimits

0x5c12,	// (0x00010596) fep_hwr_write_pane

0xfb2f,	// (0x0001a4b3) fep_vkb_side_pane_g

0xbe3b,	// (0x000167bf) fep_hwr_top_pane_g1

0xbe4d,	// (0x000167d1) fep_hwr_top_pane_g2

0x5c4c,	// (0x000105d0) fep_hwr_top_pane_g3

0x0002,

0xfb0b,	// (0x0001a48f) fep_hwr_top_pane_g

0x5c61,	// (0x000105e5) fep_hwr_top_text_pane

0x7f21,	// (0x000128a5) fep_hwr_top_text_pane_g1

0xbe83,	// (0x00016807) fep_hwr_top_text_pane_t1

0x5d57,	// (0x000106db) fep_hwr_candidate_pane_g1

0xc0d6,	// (0x00016a5a) fep_vkb_keypad_pane_g3_ParamLimits

0xc0d6,	// (0x00016a5a) fep_vkb_keypad_pane_g3

0xc0fe,	// (0x00016a82) fep_vkb_keypad_pane_g4_ParamLimits

0xc0fe,	// (0x00016a82) fep_vkb_keypad_pane_g4

0xc16d,	// (0x00016af1) fep_vkb_bottom_pane_g2_ParamLimits

0xc16d,	// (0x00016af1) fep_vkb_bottom_pane_g2

0x0001,

0xfb36,	// (0x0001a4ba) fep_vkb_bottom_pane_g_ParamLimits

0xfb36,	// (0x0001a4ba) fep_vkb_bottom_pane_g

0xbdcb,	// (0x0001674f) cell_vkb_side_pane_g2

0x0001,

0xfb40,	// (0x0001a4c4) cell_vkb_side_pane_g

0xc1f8,	// (0x00016b7c) cell_vkb_side_pane_t1

0xc206,	// (0x00016b8a) cell_vkb_side_pane_t1_copy1

0xbdcb,	// (0x0001674f) bg_fep_vkb_candidate_pane_g2

0xc332,	// (0x00016cb6) cell_vkb_candidate_pane_ParamLimits

0xbe91,	// (0x00016815) aid_size_cell_vkb_ParamLimits

0xbe91,	// (0x00016815) aid_size_cell_vkb

0xc332,	// (0x00016cb6) cell_vkb_candidate_pane

0x5d7e,	// (0x00010702) bg_popup_fep_shadow_pane_g1

0xbf1f,	// (0x000168a3) fep_vkb_bottom_pane_ParamLimits

0xbf1f,	// (0x000168a3) fep_vkb_bottom_pane

0xbf55,	// (0x000168d9) fep_vkb_candidate_pane_ParamLimits

0xbf55,	// (0x000168d9) fep_vkb_candidate_pane

0xbf71,	// (0x000168f5) fep_vkb_keypad_pane_ParamLimits

0xbf71,	// (0x000168f5) fep_vkb_keypad_pane

0xbfb7,	// (0x0001693b) fep_vkb_side_pane_ParamLimits

0xbfb7,	// (0x0001693b) fep_vkb_side_pane

0xbff3,	// (0x00016977) fep_vkb_top_pane_ParamLimits

0xbff3,	// (0x00016977) fep_vkb_top_pane

0xc02f,	// (0x000169b3) fep_vkb_top_pane_g1_ParamLimits

0xc02f,	// (0x000169b3) fep_vkb_top_pane_g1

0xc03e,	// (0x000169c2) fep_vkb_top_pane_g2_ParamLimits

0xc03e,	// (0x000169c2) fep_vkb_top_pane_g2

0xc04d,	// (0x000169d1) fep_vkb_top_pane_g3_ParamLimits

0xc04d,	// (0x000169d1) fep_vkb_top_pane_g3

0x0003,

0xfb26,	// (0x0001a4aa) fep_vkb_top_pane_g_ParamLimits

0xfb26,	// (0x0001a4aa) fep_vkb_top_pane_g

0xc06b,	// (0x000169ef) fep_vkb_top_text_pane_ParamLimits

0xc06b,	// (0x000169ef) fep_vkb_top_text_pane

0xc07c,	// (0x00016a00) fep_vkb_side_pane_g1_ParamLimits

0xc07c,	// (0x00016a00) fep_vkb_side_pane_g1

0xc0c5,	// (0x00016a49) grid_vkb_side_pane_ParamLimits

0xc0c5,	// (0x00016a49) grid_vkb_side_pane

0x5d86,	// (0x0001070a) bg_popup_fep_shadow_pane_g2

0x5d8f,	// (0x00010713) bg_popup_fep_shadow_pane_g3

0x5d97,	// (0x0001071b) bg_popup_fep_shadow_pane_g4

0x5da0,	// (0x00010724) bg_popup_fep_shadow_pane_g5

0x5daa,	// (0x0001072e) bg_popup_fep_shadow_pane_g6

0x5db2,	// (0x00010736) bg_popup_fep_shadow_pane_g7

0x788e,	// (0x00012212) bg_popup_fep_shadow_pane_g8

0xc11c,	// (0x00016aa0) grid_vkb_keypad_number_pane_ParamLimits

0xc11c,	// (0x00016aa0) grid_vkb_keypad_number_pane

0xc12c,	// (0x00016ab0) grid_vkb_keypad_pane_ParamLimits

0xc12c,	// (0x00016ab0) grid_vkb_keypad_pane

0xc152,	// (0x00016ad6) fep_vkb_bottom_pane_g1_ParamLimits

0xc152,	// (0x00016ad6) fep_vkb_bottom_pane_g1

0xc17b,	// (0x00016aff) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc17b,	// (0x00016aff) grid_vkb_keypad_bottom_left_pane

0xc190,	// (0x00016b14) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc190,	// (0x00016b14) grid_vkb_keypad_bottom_right_pane

0xc1a5,	// (0x00016b29) fep_vkb_top_text_pane_g1

0xc1c0,	// (0x00016b44) fep_vkb_top_text_pane_t1

0xc1d5,	// (0x00016b59) cell_vkb_side_pane_ParamLimits

0xc1d5,	// (0x00016b59) cell_vkb_side_pane

0xbdcb,	// (0x0001674f) cell_vkb_side_pane_g1

0xc214,	// (0x00016b98) cell_vkb_keypad_pane_ParamLimits

0xc214,	// (0x00016b98) cell_vkb_keypad_pane

0xc289,	// (0x00016c0d) cell_vkb_keypad_pane_g1

0x0008,

0xfb53,	// (0x0001a4d7) bg_popup_fep_shadow_pane_g

0x5dc4,	// (0x00010748) cell_hwr_side_pane_g1

0x5dc4,	// (0x00010748) cell_hwr_side_pane_g2

0xc293,	// (0x00016c17) cell_vkb_keypad_pane_t1

0xc2a1,	// (0x00016c25) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc2a1,	// (0x00016c25) cell_vkb_keypad_bottom_left_pane

0xc2be,	// (0x00016c42) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc2be,	// (0x00016c42) cell_vkb_keypad_bottom_right_pane

0xbdcb,	// (0x0001674f) cell_vkb_keypad_bottom_left_pane_g1

0xbdcb,	// (0x0001674f) cell_vkb_keypad_bottom_right_pane_g1

0xc2f7,	// (0x00016c7b) cell_vkb_keypad_number_pane_ParamLimits

0xc2f7,	// (0x00016c7b) cell_vkb_keypad_number_pane

0xc316,	// (0x00016c9a) cell_vkb_keypad_number_pane_g1

0xc320,	// (0x00016ca4) cell_vkb_keypad_number_pane_g2

0xc329,	// (0x00016cad) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb45,	// (0x0001a4c9) cell_vkb_keypad_number_pane_g

0xc293,	// (0x00016c17) cell_vkb_keypad_number_pane_t1

0xc34d,	// (0x00016cd1) fep_vkb_candidate_pane_g1

0x0001,

0xfb66,	// (0x0001a4ea) cell_hwr_side_pane_g

0xc366,	// (0x00016cea) cell_hwr_side_pane_t1

0x5dce,	// (0x00010752) cell_hwr_side_pane_t1_copy1

0x5ddc,	// (0x00010760) cell_hwr_candidate_pane_g1

0x5e0b,	// (0x0001078f) cell_hwr_candidate_pane_t1

0xbdcb,	// (0x0001674f) cell_vkb_candidate_pane_g2

0xc3aa,	// (0x00016d2e) cell_vkb_candidate_pane_t1

0x5b77,	// (0x000104fb) bg_popup_fep_shadow_pane_ParamLimits

0x5b77,	// (0x000104fb) bg_popup_fep_shadow_pane

0x5c2c,	// (0x000105b0) bg_fep_hwr_top_pane_g4

0xbe5f,	// (0x000167e3) bg_hwr_side_pane_g1_ParamLimits

0xbe5f,	// (0x000167e3) bg_hwr_side_pane_g1

0x5c9d,	// (0x00010621) cell_hwr_side_pane_ParamLimits

0x5c9d,	// (0x00010621) cell_hwr_side_pane

0x5cd8,	// (0x0001065c) fep_hwr_write_pane_g1_ParamLimits

0x5cd8,	// (0x0001065c) fep_hwr_write_pane_g1

0x5ce5,	// (0x00010669) fep_hwr_write_pane_g2_ParamLimits

0x5ce5,	// (0x00010669) fep_hwr_write_pane_g2

0x5cf2,	// (0x00010676) fep_hwr_write_pane_g3_ParamLimits

0x5cf2,	// (0x00010676) fep_hwr_write_pane_g3

0x5d00,	// (0x00010684) fep_hwr_write_pane_g4_ParamLimits

0x5d00,	// (0x00010684) fep_hwr_write_pane_g4

0x0005,

0xfb12,	// (0x0001a496) fep_hwr_write_pane_g_ParamLimits

0xfb12,	// (0x0001a496) fep_hwr_write_pane_g

0x5c2c,	// (0x000105b0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5c2c,	// (0x000105b0) bg_fep_hwr_candidate_pane_g2

0x5d15,	// (0x00010699) cell_hwr_candidate_pane_ParamLimits

0x5d15,	// (0x00010699) cell_hwr_candidate_pane

0x5d57,	// (0x000106db) fep_hwr_candidate_pane_g1_ParamLimits

0xbebf,	// (0x00016843) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbebf,	// (0x00016843) bg_popup_fep_shadow_pane_cp2

0xc05d,	// (0x000169e1) fep_vkb_top_pane_g4_ParamLimits

0xc05d,	// (0x000169e1) fep_vkb_top_pane_g4

0xc0a3,	// (0x00016a27) fep_vkb_side_pane_g2_ParamLimits

0xc0a3,	// (0x00016a27) fep_vkb_side_pane_g2

0x7560,	// (0x00011ee4) list_setting_pane_t4_ParamLimits

0x7560,	// (0x00011ee4) list_setting_pane_t4

0x75da,	// (0x00011f5e) list_setting_number_pane_t5_ParamLimits

0x75da,	// (0x00011f5e) list_setting_number_pane_t5

0x7f63,	// (0x000128e7) list_double_heading_pane_cp2_ParamLimits

0x7f63,	// (0x000128e7) list_double_heading_pane_cp2

0x7764,	// (0x000120e8) list_double_heading_pane_g1_cp2_ParamLimits

0x7764,	// (0x000120e8) list_double_heading_pane_g1_cp2

0x7770,	// (0x000120f4) list_double_heading_pane_g2_cp2_ParamLimits

0x7770,	// (0x000120f4) list_double_heading_pane_g2_cp2

0xc3b8,	// (0x00016d3c) list_double_heading_pane_t1_cp2_ParamLimits

0xc3b8,	// (0x00016d3c) list_double_heading_pane_t1_cp2

0xc3ce,	// (0x00016d52) list_double_heading_pane_t2_cp2_ParamLimits

0xc3ce,	// (0x00016d52) list_double_heading_pane_t2_cp2

0x684b,	// (0x000111cf) aid_value_unit2

0x4f02,	// (0x0000f886) popup_preview_fixed_window

0x6bfa,	// (0x0001157e) bg_popup_preview_window_pane_cp02

0xc3e0,	// (0x00016d64) list_preview_fixed_pane

0xc426,	// (0x00016daa) list_empty_pane_fp_ParamLimits

0xc426,	// (0x00016daa) list_empty_pane_fp

0xc426,	// (0x00016daa) list_single_cale_day_pane_fp_ParamLimits

0xc426,	// (0x00016daa) list_single_cale_day_pane_fp

0xc426,	// (0x00016daa) list_single_graphic_heading_pane_fp_ParamLimits

0xc426,	// (0x00016daa) list_single_graphic_heading_pane_fp

0xc426,	// (0x00016daa) list_single_graphic_pane_fp_ParamLimits

0xc426,	// (0x00016daa) list_single_graphic_pane_fp

0xc426,	// (0x00016daa) list_single_heading_pane_fp_ParamLimits

0xc426,	// (0x00016daa) list_single_heading_pane_fp

0xc426,	// (0x00016daa) list_single_pane_fp_ParamLimits

0xc426,	// (0x00016daa) list_single_pane_fp

0xc43b,	// (0x00016dbf) list_single_pane_fp_g1_ParamLimits

0xc43b,	// (0x00016dbf) list_single_pane_fp_g1

0x73a1,	// (0x00011d25) list_single_pane_fp_g2_ParamLimits

0x73a1,	// (0x00011d25) list_single_pane_fp_g2

0xc447,	// (0x00016dcb) list_single_pane_fp_g3_ParamLimits

0xc447,	// (0x00016dcb) list_single_pane_fp_g3

0xc45b,	// (0x00016ddf) list_single_pane_fp_g4_ParamLimits

0xc45b,	// (0x00016ddf) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x0001a4fd) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x0001a4fd) list_single_pane_fp_g

0xc467,	// (0x00016deb) list_single_pane_fp_t1_ParamLimits

0xc467,	// (0x00016deb) list_single_pane_fp_t1

0xc47e,	// (0x00016e02) list_single_graphic_pane_fp_g1_ParamLimits

0xc47e,	// (0x00016e02) list_single_graphic_pane_fp_g1

0xc43b,	// (0x00016dbf) list_single_graphic_pane_fp_g2_ParamLimits

0xc43b,	// (0x00016dbf) list_single_graphic_pane_fp_g2

0x73a1,	// (0x00011d25) list_single_graphic_pane_fp_g3_ParamLimits

0x73a1,	// (0x00011d25) list_single_graphic_pane_fp_g3

0xc447,	// (0x00016dcb) list_single_graphic_pane_fp_g4_ParamLimits

0xc447,	// (0x00016dcb) list_single_graphic_pane_fp_g4

0xc45b,	// (0x00016ddf) list_single_graphic_pane_fp_g5_ParamLimits

0xc45b,	// (0x00016ddf) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0001a506) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0001a506) list_single_graphic_pane_fp_g

0xc48a,	// (0x00016e0e) list_single_graphic_pane_fp_t1_ParamLimits

0xc48a,	// (0x00016e0e) list_single_graphic_pane_fp_t1

0xc47e,	// (0x00016e02) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc47e,	// (0x00016e02) list_single_graphic_heading_pane_fp_g1

0xc43b,	// (0x00016dbf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc43b,	// (0x00016dbf) list_single_graphic_heading_pane_fp_g2

0x73a1,	// (0x00011d25) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x73a1,	// (0x00011d25) list_single_graphic_heading_pane_fp_g3

0xc447,	// (0x00016dcb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc447,	// (0x00016dcb) list_single_graphic_heading_pane_fp_g4

0xc45b,	// (0x00016ddf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc45b,	// (0x00016ddf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0001a506) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0001a506) list_single_graphic_heading_pane_fp_g

0xc4a0,	// (0x00016e24) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc4a0,	// (0x00016e24) list_single_graphic_heading_pane_fp_t1

0xc4b6,	// (0x00016e3a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc4b6,	// (0x00016e3a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0001a511) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0001a511) list_single_graphic_heading_pane_fp_t

0xc4c8,	// (0x00016e4c) list_single_cale_day_pane_fp_g1_ParamLimits

0xc4c8,	// (0x00016e4c) list_single_cale_day_pane_fp_g1

0xc500,	// (0x00016e84) list_single_cale_day_pane_fp_g2_ParamLimits

0xc500,	// (0x00016e84) list_single_cale_day_pane_fp_g2

0xc50c,	// (0x00016e90) list_single_cale_day_pane_fp_g3_ParamLimits

0xc50c,	// (0x00016e90) list_single_cale_day_pane_fp_g3

0xc534,	// (0x00016eb8) list_single_cale_day_pane_fp_g4_ParamLimits

0xc534,	// (0x00016eb8) list_single_cale_day_pane_fp_g4

0xc558,	// (0x00016edc) list_single_cale_day_pane_fp_g5_ParamLimits

0xc558,	// (0x00016edc) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0001a516) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0001a516) list_single_cale_day_pane_fp_g

0xc57c,	// (0x00016f00) list_single_cale_day_pane_fp_t1_ParamLimits

0xc57c,	// (0x00016f00) list_single_cale_day_pane_fp_t1

0xc5a2,	// (0x00016f26) list_single_cale_day_pane_fp_t2_ParamLimits

0xc5a2,	// (0x00016f26) list_single_cale_day_pane_fp_t2

0xc5bb,	// (0x00016f3f) list_single_cale_day_pane_fp_t3_ParamLimits

0xc5bb,	// (0x00016f3f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0001a521) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0001a521) list_single_cale_day_pane_fp_t

0xc43b,	// (0x00016dbf) list_empty_pane_fp_g1_ParamLimits

0xc43b,	// (0x00016dbf) list_empty_pane_fp_g1

0xc5d4,	// (0x00016f58) list_empty_pane_fp_t1

0xc5e2,	// (0x00016f66) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0001a528) list_empty_pane_fp_t

0xc43b,	// (0x00016dbf) list_single_heading_pane_fp_g1_ParamLimits

0xc43b,	// (0x00016dbf) list_single_heading_pane_fp_g1

0x73a1,	// (0x00011d25) list_single_heading_pane_fp_g2_ParamLimits

0x73a1,	// (0x00011d25) list_single_heading_pane_fp_g2

0xc447,	// (0x00016dcb) list_single_heading_pane_fp_g3_ParamLimits

0xc447,	// (0x00016dcb) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x0001a52d) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0001a52d) list_single_heading_pane_fp_g

0xc5f0,	// (0x00016f74) list_single_heading_pane_fp_t1_ParamLimits

0xc5f0,	// (0x00016f74) list_single_heading_pane_fp_t1

0xc602,	// (0x00016f86) list_single_heading_pane_fp_t2_ParamLimits

0xc602,	// (0x00016f86) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001a534) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0001a534) list_single_heading_pane_fp_t

0x7ac7,	// (0x0001244b) aid_size_cell_fast

0x6b6a,	// (0x000114ee) soft_indicator_pane_cp1_t1

0x7b04,	// (0x00012488) cell_app_pane_cp2_ParamLimits

0x7b04,	// (0x00012488) cell_app_pane_cp2

0x5b99,	// (0x0001051d) fep_hwr_candidate_drop_down_list_pane

0x5d71,	// (0x000106f5) fep_hwr_candidate_pane_g3_ParamLimits

0x5d71,	// (0x000106f5) fep_hwr_candidate_pane_g3

0x4097,	// (0x0000ea1b) fep_hwr_candidate_pane_g4_ParamLimits

0x4097,	// (0x0000ea1b) fep_hwr_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0001a4a3) fep_hwr_candidate_pane_g_ParamLimits

0xfb1f,	// (0x0001a4a3) fep_hwr_candidate_pane_g

0xbf44,	// (0x000168c8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbf44,	// (0x000168c8) fep_vkb_candidate_drop_down_list_pane

0xc355,	// (0x00016cd9) fep_vkb_candidate_pane_g3

0xc35d,	// (0x00016ce1) fep_vkb_candidate_pane_g4

0x0002,

0xfb4c,	// (0x0001a4d0) fep_vkb_candidate_pane_g

0x5ddc,	// (0x00010760) cell_hwr_candidate_pane_g1_ParamLimits

0x5dea,	// (0x0001076e) cell_hwr_candidate_pane_g3_ParamLimits

0x5dea,	// (0x0001076e) cell_hwr_candidate_pane_g3

0xe2cc,	// (0x00018c50) cell_hwr_candidate_pane_g4_ParamLimits

0xe2cc,	// (0x00018c50) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x0001a4ef) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x0001a4ef) cell_hwr_candidate_pane_g

0xc374,	// (0x00016cf8) cell_vkb_candidate_pane_g3_ParamLimits

0xc374,	// (0x00016cf8) cell_vkb_candidate_pane_g3

0xc38f,	// (0x00016d13) cell_vkb_candidate_pane_g4_ParamLimits

0xc38f,	// (0x00016d13) cell_vkb_candidate_pane_g4

0xc618,	// (0x00016f9c) cell_app_pane_cp2_g1_ParamLimits

0xc618,	// (0x00016f9c) cell_app_pane_cp2_g1

0xc636,	// (0x00016fba) cell_app_pane_cp2_g2_ParamLimits

0xc636,	// (0x00016fba) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0001a539) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0001a539) cell_app_pane_cp2_g

0xc642,	// (0x00016fc6) cell_app_pane_cp2_t1_ParamLimits

0xc642,	// (0x00016fc6) cell_app_pane_cp2_t1

0x773e,	// (0x000120c2) grid_highlight_pane_cp1_ParamLimits

0x773e,	// (0x000120c2) grid_highlight_pane_cp1

0x5e29,	// (0x000107ad) cell_hwr_candidate_pane_cp1_ParamLimits

0x5e29,	// (0x000107ad) cell_hwr_candidate_pane_cp1

0x5ddc,	// (0x00010760) fep_hwr_candidate_drop_down_list_pane_g1

0x5e48,	// (0x000107cc) fep_hwr_candidate_drop_down_list_pane_g2

0x5e55,	// (0x000107d9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0001a53e) fep_hwr_candidate_drop_down_list_pane_g

0x5e62,	// (0x000107e6) fep_hwr_candidate_drop_down_list_scroll_pane

0x5e6b,	// (0x000107ef) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5e6b,	// (0x000107ef) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5e78,	// (0x000107fc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5e78,	// (0x000107fc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5e85,	// (0x00010809) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5e85,	// (0x00010809) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5e92,	// (0x00010816) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5e92,	// (0x00010816) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5ead,	// (0x00010831) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5ead,	// (0x00010831) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5ec8,	// (0x0001084c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5ec8,	// (0x0001084c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5ee3,	// (0x00010867) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5ee3,	// (0x00010867) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5efe,	// (0x00010882) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5efe,	// (0x00010882) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0001a545) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0001a545) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6b1,	// (0x00017035) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6b1,	// (0x00017035) cell_vkb_candidate_pane_cp1

0xc05d,	// (0x000169e1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc05d,	// (0x000169e1) fep_vkb_candidate_drop_down_list_pane_g1

0xc654,	// (0x00016fd8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc654,	// (0x00016fd8) fep_vkb_candidate_drop_down_list_pane_g2

0xc6d1,	// (0x00017055) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc6d1,	// (0x00017055) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0001a556) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd2,	// (0x0001a556) fep_vkb_candidate_drop_down_list_pane_g

0xc6de,	// (0x00017062) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc6de,	// (0x00017062) fep_vkb_candidate_drop_down_list_scroll_pane

0xc6eb,	// (0x0001706f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc6eb,	// (0x0001706f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc6f8,	// (0x0001707c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc6f8,	// (0x0001707c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc704,	// (0x00017088) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc704,	// (0x00017088) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc661,	// (0x00016fe5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc661,	// (0x00016fe5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc682,	// (0x00017006) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc682,	// (0x00017006) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc710,	// (0x00017094) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc710,	// (0x00017094) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc731,	// (0x000170b5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc731,	// (0x000170b5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc752,	// (0x000170d6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc752,	// (0x000170d6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0001a55d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0001a55d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6881,	// (0x00011205) title_pane_g1_ParamLimits

0x688e,	// (0x00011212) title_pane_g2_ParamLimits

0xf56a,	// (0x00019eee) title_pane_g_ParamLimits

0x7f11,	// (0x00012895) aid_call2_pane

0x7f19,	// (0x0001289d) aid_call_pane

0x7f21,	// (0x000128a5) popup_clock_analogue_window_g1

0x7f21,	// (0x000128a5) popup_clock_analogue_window_g2

0x526b,	// (0x0000fbef) popup_clock_analogue_window_g3

0x5274,	// (0x0000fbf8) popup_clock_analogue_window_g4

0x686d,	// (0x000111f1) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001a093) popup_clock_analogue_window_g

0x527c,	// (0x0000fc00) popup_clock_analogue_window_t1

0x528a,	// (0x0000fc0e) clock_digital_number_pane_ParamLimits

0x528a,	// (0x0000fc0e) clock_digital_number_pane

0x5296,	// (0x0000fc1a) clock_digital_number_pane_cp02_ParamLimits

0x5296,	// (0x0000fc1a) clock_digital_number_pane_cp02

0x52a2,	// (0x0000fc26) clock_digital_number_pane_cp03_ParamLimits

0x52a2,	// (0x0000fc26) clock_digital_number_pane_cp03

0x52ae,	// (0x0000fc32) clock_digital_number_pane_cp04_ParamLimits

0x52ae,	// (0x0000fc32) clock_digital_number_pane_cp04

0x52ba,	// (0x0000fc3e) clock_digital_separator_pane_ParamLimits

0x52ba,	// (0x0000fc3e) clock_digital_separator_pane

0x52c6,	// (0x0000fc4a) popup_clock_digital_window_t1_ParamLimits

0x52c6,	// (0x0000fc4a) popup_clock_digital_window_t1

0x686d,	// (0x000111f1) clock_digital_number_pane_g1

0x686d,	// (0x000111f1) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001a09e) clock_digital_number_pane_g

0x686d,	// (0x000111f1) clock_digital_separator_pane_g1

0x686d,	// (0x000111f1) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001a09e) clock_digital_separator_pane_g

0x8ed8,	// (0x0001385c) aid_fill_nsta_ParamLimits

0x901a,	// (0x0001399e) indicator_nsta_pane_ParamLimits

0x918c,	// (0x00013b10) popup_clock_analogue_window

0x918c,	// (0x00013b10) popup_clock_digital_window

0x6957,	// (0x000112db) grid_indicator_nsta_pane_ParamLimits

0xb75b,	// (0x000160df) clock_nsta_pane_t2

0x0001,

0xfa9f,	// (0x0001a423) clock_nsta_pane_t

0x522f,	// (0x0000fbb3) aid_size_max_handle

0x5239,	// (0x0000fbbd) aid_size_min_handle

0x858d,	// (0x00012f11) editor_scroll_pane

0xc76d,	// (0x000170f1) ex_editor_pane

0x7a35,	// (0x000123b9) scroll_pane_cp13

0x717c,	// (0x00011b00) scroll_pane_cp14

0x7f4b,	// (0x000128cf) scroll_pane_cp36

0x7f77,	// (0x000128fb) list_single_graphic_hl_pane_cp2_ParamLimits

0x7f77,	// (0x000128fb) list_single_graphic_hl_pane_cp2

0xab47,	// (0x000154cb) list_single_graphic_hl_pane_ParamLimits

0xab47,	// (0x000154cb) list_single_graphic_hl_pane

0xc775,	// (0x000170f9) aid_size_min_hl_cp1

0xc77e,	// (0x00017102) list_highlight_pane_cp34_ParamLimits

0xc77e,	// (0x00017102) list_highlight_pane_cp34

0xc78f,	// (0x00017113) list_single_graphic_hl_pane_g1_ParamLimits

0xc78f,	// (0x00017113) list_single_graphic_hl_pane_g1

0xc79c,	// (0x00017120) list_single_graphic_hl_pane_g2_ParamLimits

0xc79c,	// (0x00017120) list_single_graphic_hl_pane_g2

0xc79c,	// (0x00017120) list_single_graphic_hl_pane_g3_ParamLimits

0xc79c,	// (0x00017120) list_single_graphic_hl_pane_g3

0x9365,	// (0x00013ce9) list_single_graphic_hl_pane_g4_ParamLimits

0x9365,	// (0x00013ce9) list_single_graphic_hl_pane_g4

0xc7a8,	// (0x0001712c) list_single_graphic_hl_pane_g5_ParamLimits

0xc7a8,	// (0x0001712c) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x0001a56e) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x0001a56e) list_single_graphic_hl_pane_g

0xc7bc,	// (0x00017140) list_single_graphic_hl_pane_t1_ParamLimits

0xc7bc,	// (0x00017140) list_single_graphic_hl_pane_t1

0xc7d2,	// (0x00017156) aid_size_min_hl_cp2

0xc7db,	// (0x0001715f) list_highlight_pane_cp34_cp2_ParamLimits

0xc7db,	// (0x0001715f) list_highlight_pane_cp34_cp2

0xc78f,	// (0x00017113) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc78f,	// (0x00017113) list_single_graphic_hl_pane_g1_cp2

0xc7e8,	// (0x0001716c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc7e8,	// (0x0001716c) list_single_graphic_hl_pane_g2_cp2

0xc7f4,	// (0x00017178) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc7f4,	// (0x00017178) list_single_graphic_hl_pane_g3_cp2

0x9365,	// (0x00013ce9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9365,	// (0x00013ce9) list_single_graphic_hl_pane_g4_cp2

0xc7a8,	// (0x0001712c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc7a8,	// (0x0001712c) list_single_graphic_hl_pane_g5_cp2

0x5578,	// (0x0000fefc) control_pane_g4_ParamLimits

0x5578,	// (0x0000fefc) control_pane_g4

0x8917,	// (0x0001329b) bg_popup_sub_pane_cp10_ParamLimits

0xbdd5,	// (0x00016759) list_choice_list_pane_ParamLimits

0xbde4,	// (0x00016768) scroll_pane_cp23

0x6bfa,	// (0x0001157e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3e0,	// (0x00016d64) list_preview_fixed_pane_ParamLimits

0xc3f6,	// (0x00016d7a) list_preview_fixed_pane_cp_ParamLimits

0xc3f6,	// (0x00016d7a) list_preview_fixed_pane_cp

0xc402,	// (0x00016d86) popup_preview_fixed_window_g1_ParamLimits

0xc402,	// (0x00016d86) popup_preview_fixed_window_g1

0xc40e,	// (0x00016d92) popup_preview_fixed_window_g2_ParamLimits

0xc40e,	// (0x00016d92) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0001a4f6) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0001a4f6) popup_preview_fixed_window_g

0x51a3,	// (0x0000fb27) aid_navi_side_left_pane_ParamLimits

0x51b8,	// (0x0000fb3c) aid_navi_side_right_pane_ParamLimits

0x51d0,	// (0x0000fb54) navi_icon_pane_stacon_ParamLimits

0x51e4,	// (0x0000fb68) navi_navi_pane_stacon_ParamLimits

0x51d0,	// (0x0000fb54) navi_text_pane_stacon_ParamLimits

0x6863,	// (0x000111e7) main_text_info_pane

0xc818,	// (0x0001719c) listscroll_text_info_pane

0xc820,	// (0x000171a4) list_text_info_pane_ParamLimits

0xc820,	// (0x000171a4) list_text_info_pane

0xc82f,	// (0x000171b3) scroll_pane_cp24_ParamLimits

0xc82f,	// (0x000171b3) scroll_pane_cp24

0xc84d,	// (0x000171d1) list_text_info_pane_t1_ParamLimits

0xc84d,	// (0x000171d1) list_text_info_pane_t1

0x8961,	// (0x000132e5) popup_fast_swap2_window_ParamLimits

0x8961,	// (0x000132e5) popup_fast_swap2_window

0xc87e,	// (0x00017202) aid_size_cell_fast2

0x6863,	// (0x000111e7) bg_popup_window_pane_cp17

0x9909,	// (0x0001428d) heading_pane_cp2

0x6e46,	// (0x000117ca) listscroll_fast2_pane

0xc888,	// (0x0001720c) grid_fast2_pane

0xc892,	// (0x00017216) listscroll_fast2_pane_g1

0xc89a,	// (0x0001721e) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0001a579) listscroll_fast2_pane_g

0x7a35,	// (0x000123b9) scroll_pane_cp26

0xc8a4,	// (0x00017228) cell_fast2_pane_ParamLimits

0xc8a4,	// (0x00017228) cell_fast2_pane

0xc8b9,	// (0x0001723d) cell_fast2_pane_g1

0xc8c2,	// (0x00017246) cell_fast2_pane_g2

0xc8cb,	// (0x0001724f) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x0001a57e) cell_fast2_pane_g

0x6f39,	// (0x000118bd) grid_highlight_pane_cp9

0x6f4e,	// (0x000118d2) main_eswt_pane_ParamLimits

0x6f4e,	// (0x000118d2) main_eswt_pane

0xc844,	// (0x000171c8) list_single_text_info_pane

0xc8d3,	// (0x00017257) eswt_ctrl_button_pane

0xc8d3,	// (0x00017257) eswt_ctrl_canvas_pane

0xc8db,	// (0x0001725f) eswt_ctrl_combo_pane

0xc8d3,	// (0x00017257) eswt_ctrl_default_pane

0xc8d3,	// (0x00017257) eswt_ctrl_label_pane

0xc8e3,	// (0x00017267) eswt_ctrl_wait_pane

0xc8eb,	// (0x0001726f) eswt_shell_pane

0x6863,	// (0x000111e7) listscroll_eswt_app_pane

0xc90b,	// (0x0001728f) popup_eswt_tasktip_window_ParamLimits

0xc90b,	// (0x0001728f) popup_eswt_tasktip_window

0x9509,	// (0x00013e8d) bg_popup_window_pane_cp18

0xc91c,	// (0x000172a0) eswt_control_pane_g1_ParamLimits

0xc91c,	// (0x000172a0) eswt_control_pane_g1

0xc929,	// (0x000172ad) eswt_control_pane_g2_ParamLimits

0xc929,	// (0x000172ad) eswt_control_pane_g2

0xc936,	// (0x000172ba) eswt_control_pane_g3_ParamLimits

0xc936,	// (0x000172ba) eswt_control_pane_g3

0xc943,	// (0x000172c7) eswt_control_pane_g4_ParamLimits

0xc943,	// (0x000172c7) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0001a585) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0001a585) eswt_control_pane_g

0x773e,	// (0x000120c2) bg_button_pane_ParamLimits

0x773e,	// (0x000120c2) bg_button_pane

0x6f4e,	// (0x000118d2) common_borders_pane_copy2_ParamLimits

0x6f4e,	// (0x000118d2) common_borders_pane_copy2

0xc950,	// (0x000172d4) control_button_pane_g1_ParamLimits

0xc950,	// (0x000172d4) control_button_pane_g1

0xc95c,	// (0x000172e0) control_button_pane_g2_ParamLimits

0xc95c,	// (0x000172e0) control_button_pane_g2

0xc968,	// (0x000172ec) control_button_pane_g3_ParamLimits

0xc968,	// (0x000172ec) control_button_pane_g3

0x0002,

0xfc0a,	// (0x0001a58e) control_button_pane_g_ParamLimits

0xfc0a,	// (0x0001a58e) control_button_pane_g

0xc97c,	// (0x00017300) control_button_pane_t1

0xc98a,	// (0x0001730e) control_button_pane_t2

0x0001,

0xfc11,	// (0x0001a595) control_button_pane_t

0x93ef,	// (0x00013d73) bg_button_pane_g1

0x93ff,	// (0x00013d83) bg_button_pane_g2

0x93f7,	// (0x00013d7b) bg_button_pane_g3

0x940f,	// (0x00013d93) bg_button_pane_g4

0x9407,	// (0x00013d8b) bg_button_pane_g5

0x9417,	// (0x00013d9b) bg_button_pane_g6

0x941f,	// (0x00013da3) bg_button_pane_g7

0x942f,	// (0x00013db3) bg_button_pane_g8

0x9427,	// (0x00013dab) bg_button_pane_g9

0x0008,

0xf872,	// (0x0001a1f6) bg_button_pane_g

0xbd90,	// (0x00016714) common_borders_pane_ParamLimits

0xbd90,	// (0x00016714) common_borders_pane

0xc91c,	// (0x000172a0) eswt_control_pane_g1_copy1_ParamLimits

0xc91c,	// (0x000172a0) eswt_control_pane_g1_copy1

0xc929,	// (0x000172ad) eswt_control_pane_g2_copy1_ParamLimits

0xc929,	// (0x000172ad) eswt_control_pane_g2_copy1

0xc936,	// (0x000172ba) eswt_control_pane_g3_copy1_ParamLimits

0xc936,	// (0x000172ba) eswt_control_pane_g3_copy1

0xc943,	// (0x000172c7) eswt_control_pane_g4_copy1_ParamLimits

0xc943,	// (0x000172c7) eswt_control_pane_g4_copy1

0xbdcb,	// (0x0001674f) bg_eswt_ctrl_canvas_pane_g1

0xbd90,	// (0x00016714) common_borders_pane_cp2_ParamLimits

0xbd90,	// (0x00016714) common_borders_pane_cp2

0xbd90,	// (0x00016714) common_borders_pane_cp3_ParamLimits

0xbd90,	// (0x00016714) common_borders_pane_cp3

0xc998,	// (0x0001731c) separator_horizontal_pane

0xc9a0,	// (0x00017324) separator_vertical_pane

0xc91c,	// (0x000172a0) eswt_control_pane_g1_copy2_ParamLimits

0xc91c,	// (0x000172a0) eswt_control_pane_g1_copy2

0xc929,	// (0x000172ad) eswt_control_pane_g2_copy2_ParamLimits

0xc929,	// (0x000172ad) eswt_control_pane_g2_copy2

0xc936,	// (0x000172ba) eswt_control_pane_g3_copy2_ParamLimits

0xc936,	// (0x000172ba) eswt_control_pane_g3_copy2

0xc943,	// (0x000172c7) eswt_control_pane_g4_copy2_ParamLimits

0xc943,	// (0x000172c7) eswt_control_pane_g4_copy2

0x6863,	// (0x000111e7) common_borders_pane_cp4

0xc9a9,	// (0x0001732d) separator_horizontal_pane_g1

0xc9b2,	// (0x00017336) separator_horizontal_pane_g2

0xc9bb,	// (0x0001733f) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x0001a59a) separator_horizontal_pane_g

0xc91c,	// (0x000172a0) eswt_control_pane_g1_copy3_ParamLimits

0xc91c,	// (0x000172a0) eswt_control_pane_g1_copy3

0xc929,	// (0x000172ad) eswt_control_pane_g2_copy3_ParamLimits

0xc929,	// (0x000172ad) eswt_control_pane_g2_copy3

0xc936,	// (0x000172ba) eswt_control_pane_g3_copy3_ParamLimits

0xc936,	// (0x000172ba) eswt_control_pane_g3_copy3

0xc943,	// (0x000172c7) eswt_control_pane_g4_copy3_ParamLimits

0xc943,	// (0x000172c7) eswt_control_pane_g4_copy3

0x6863,	// (0x000111e7) common_borders_pane_cp5

0xc9c4,	// (0x00017348) separator_vertical_pane_g1

0xc9cd,	// (0x00017351) separator_vertical_pane_g2

0xc9d6,	// (0x0001735a) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x0001a5a1) separator_vertical_pane_g

0xc91c,	// (0x000172a0) eswt_control_pane_g1_copy4_ParamLimits

0xc91c,	// (0x000172a0) eswt_control_pane_g1_copy4

0xc929,	// (0x000172ad) eswt_control_pane_g2_copy4_ParamLimits

0xc929,	// (0x000172ad) eswt_control_pane_g2_copy4

0xc936,	// (0x000172ba) eswt_control_pane_g3_copy4_ParamLimits

0xc936,	// (0x000172ba) eswt_control_pane_g3_copy4

0xc943,	// (0x000172c7) eswt_control_pane_g4_copy4_ParamLimits

0xc943,	// (0x000172c7) eswt_control_pane_g4_copy4

0xc9df,	// (0x00017363) eswt_ctrl_combo_button_pane

0xc9e7,	// (0x0001736b) eswt_ctrl_input_pane

0xc9ef,	// (0x00017373) popup_choice_list_window_cp70

0xc9f7,	// (0x0001737b) eswt_ctrl_input_pane_t1

0x6863,	// (0x000111e7) input_focus_pane_cp70

0xbd90,	// (0x00016714) bg_button_pane_cp70_ParamLimits

0xbd90,	// (0x00016714) bg_button_pane_cp70

0xca05,	// (0x00017389) eswt_ctrl_combo_button_pane_g1

0xca0d,	// (0x00017391) wait_bar_pane_cp70

0x9509,	// (0x00013e8d) bg_popup_window_pane_cp70_ParamLimits

0x9509,	// (0x00013e8d) bg_popup_window_pane_cp70

0xca15,	// (0x00017399) popup_eswt_tasktip_window_t1

0xca2b,	// (0x000173af) wait_bar_pane_cp71_ParamLimits

0xca2b,	// (0x000173af) wait_bar_pane_cp71

0xca37,	// (0x000173bb) grid_eswt_app_pane

0x7d53,	// (0x000126d7) scroll_pane_cp70

0xca40,	// (0x000173c4) cell_eswt_app_pane_ParamLimits

0xca40,	// (0x000173c4) cell_eswt_app_pane

0xca70,	// (0x000173f4) cell_eswt_app_pane_g1_ParamLimits

0xca70,	// (0x000173f4) cell_eswt_app_pane_g1

0xca9f,	// (0x00017423) cell_eswt_app_pane_g2_ParamLimits

0xca9f,	// (0x00017423) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x0001a5a8) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x0001a5a8) cell_eswt_app_pane_g

0xcac8,	// (0x0001744c) cell_eswt_app_pane_t1_ParamLimits

0xcac8,	// (0x0001744c) cell_eswt_app_pane_t1

0xcafa,	// (0x0001747e) grid_highlight_pane_cp70_ParamLimits

0xcafa,	// (0x0001747e) grid_highlight_pane_cp70

0x8462,	// (0x00012de6) set_content_pane_g1

0x8839,	// (0x000131bd) status_small_volume_pane

0x5f19,	// (0x0001089d) status_small_volume_pane_g1

0x5f21,	// (0x000108a5) volume_small2_pane

0x5f2a,	// (0x000108ae) volume_small2_pane_g1

0x5f33,	// (0x000108b7) volume_small2_pane_g2

0x5f3c,	// (0x000108c0) volume_small2_pane_g3

0x5f45,	// (0x000108c9) volume_small2_pane_g4

0x5f4e,	// (0x000108d2) volume_small2_pane_g5

0x5f57,	// (0x000108db) volume_small2_pane_g6

0x5f60,	// (0x000108e4) volume_small2_pane_g7

0x5f69,	// (0x000108ed) volume_small2_pane_g8

0x5f72,	// (0x000108f6) volume_small2_pane_g9

0x5f7b,	// (0x000108ff) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x0001a5ad) volume_small2_pane_g

0xc1a5,	// (0x00016b29) fep_vkb_top_text_pane_g1_ParamLimits

0xc1c0,	// (0x00016b44) fep_vkb_top_text_pane_t1_ParamLimits

0xc41a,	// (0x00016d9e) popup_preview_fixed_window_g3_ParamLimits

0xc41a,	// (0x00016d9e) popup_preview_fixed_window_g3

0x8e0e,	// (0x00013792) popup_toolbar_trans_pane

0xa8b1,	// (0x00015235) aid_height_set_list_ParamLimits

0xa8c2,	// (0x00015246) aid_size_parent_ParamLimits

0x8917,	// (0x0001329b) list_highlight_pane_cp2_ParamLimits

0x8462,	// (0x00012de6) set_content_pane_g1_ParamLimits

0xab63,	// (0x000154e7) list_single_image_pane_ParamLimits

0xab63,	// (0x000154e7) list_single_image_pane

0xcb06,	// (0x0001748a) aid_size_cell_image_ParamLimits

0xcb06,	// (0x0001748a) aid_size_cell_image

0xcb13,	// (0x00017497) grid_single_image_pane_ParamLimits

0xcb13,	// (0x00017497) grid_single_image_pane

0x73a1,	// (0x00011d25) list_single_image_pane_g1_ParamLimits

0x73a1,	// (0x00011d25) list_single_image_pane_g1

0xc447,	// (0x00016dcb) list_single_image_pane_g2_ParamLimits

0xc447,	// (0x00016dcb) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0001a5c2) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0001a5c2) list_single_image_pane_g

0x72d8,	// (0x00011c5c) list_single_image_pane_t1_ParamLimits

0x72d8,	// (0x00011c5c) list_single_image_pane_t1

0xcb21,	// (0x000174a5) cell_image_list_pane_ParamLimits

0xcb21,	// (0x000174a5) cell_image_list_pane

0xcb34,	// (0x000174b8) cell_image_list_pane_g1

0xcb3d,	// (0x000174c1) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x0001a5c7) cell_image_list_pane_g

0xcb46,	// (0x000174ca) aid_size_cell_tb_trans_pane

0x773e,	// (0x000120c2) bg_tb_trans_pane

0xcb58,	// (0x000174dc) grid_tb_trans_pane

0x93ef,	// (0x00013d73) bg_tb_trans_pane_g1

0x93ff,	// (0x00013d83) bg_tb_trans_pane_g2

0x93f7,	// (0x00013d7b) bg_tb_trans_pane_g3

0x940f,	// (0x00013d93) bg_tb_trans_pane_g4

0x9407,	// (0x00013d8b) bg_tb_trans_pane_g5

0x942f,	// (0x00013db3) bg_tb_trans_pane_g6

0x9427,	// (0x00013dab) bg_tb_trans_pane_g7

0x9417,	// (0x00013d9b) bg_tb_trans_pane_g8

0x941f,	// (0x00013da3) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x0001a5cc) bg_tb_trans_pane_g

0xcb6c,	// (0x000174f0) cell_toolbar_trans_pane_ParamLimits

0xcb6c,	// (0x000174f0) cell_toolbar_trans_pane

0xbdcb,	// (0x0001674f) cell_toolbar_trans_pane_g1

0xb945,	// (0x000162c9) list_form2_midp_pane_t1

0xb953,	// (0x000162d7) list_form2_midp_pane_t2

0x0001,

0xfae5,	// (0x0001a469) list_form2_midp_pane_t

0xb961,	// (0x000162e5) scroll_pane_cp51_ParamLimits

0xbb6c,	// (0x000164f0) form2_midp_wait_pane_g1

0xbb75,	// (0x000164f9) form2_midp_wait_pane_g2

0xbb7e,	// (0x00016502) form2_midp_wait_pane_g3

0x0002,

0xfafa,	// (0x0001a47e) form2_midp_wait_pane_g

0x6957,	// (0x000112db) list_highlight_pane_cp21_ParamLimits

0xbbd5,	// (0x00016559) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbbe4,	// (0x00016568) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaaeb,	// (0x0001546f) list_single_2graphic_im_pane_ParamLimits

0xaaeb,	// (0x0001546f) list_single_2graphic_im_pane

0xcb92,	// (0x00017516) list_single_2graphic_im_pane_g1_ParamLimits

0xcb92,	// (0x00017516) list_single_2graphic_im_pane_g1

0xcba3,	// (0x00017527) list_single_2graphic_im_pane_g2_ParamLimits

0xcba3,	// (0x00017527) list_single_2graphic_im_pane_g2

0xcbaf,	// (0x00017533) list_single_2graphic_im_pane_g3_ParamLimits

0xcbaf,	// (0x00017533) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x0001a5df) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x0001a5df) list_single_2graphic_im_pane_g

0xcbcf,	// (0x00017553) list_single_2graphic_im_pane_t1_ParamLimits

0xcbcf,	// (0x00017553) list_single_2graphic_im_pane_t1

0xc426,	// (0x00016daa) list_single_graphic_2heading_pane_fp_ParamLimits

0xc426,	// (0x00016daa) list_single_graphic_2heading_pane_fp

0xc47e,	// (0x00016e02) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc47e,	// (0x00016e02) list_single_graphic_2heading_pane_fp_g1

0xc43b,	// (0x00016dbf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc43b,	// (0x00016dbf) list_single_graphic_2heading_pane_fp_g2

0x73a1,	// (0x00011d25) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x73a1,	// (0x00011d25) list_single_graphic_2heading_pane_fp_g3

0xc447,	// (0x00016dcb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc447,	// (0x00016dcb) list_single_graphic_2heading_pane_fp_g4

0xc45b,	// (0x00016ddf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc45b,	// (0x00016ddf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0001a506) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0001a506) list_single_graphic_2heading_pane_fp_g

0xcc00,	// (0x00017584) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcc00,	// (0x00017584) list_single_graphic_2heading_pane_fp_t1

0xc4b6,	// (0x00016e3a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc4b6,	// (0x00016e3a) list_single_graphic_2heading_pane_fp_t2

0xcc16,	// (0x0001759a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcc16,	// (0x0001759a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x0001a5e8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x0001a5e8) list_single_graphic_2heading_pane_fp_t

0xbe6b,	// (0x000167ef) fep_hwr_write_pane_g5_ParamLimits

0xbe6b,	// (0x000167ef) fep_hwr_write_pane_g5

0xbe77,	// (0x000167fb) fep_hwr_write_pane_g6_ParamLimits

0xbe77,	// (0x000167fb) fep_hwr_write_pane_g6

0xc8eb,	// (0x0001726f) eswt_shell_pane_ParamLimits

0x9509,	// (0x00013e8d) bg_popup_window_pane_cp18_ParamLimits

0xa7e2,	// (0x00015166) heading_pane_cp70

0xca15,	// (0x00017399) popup_eswt_tasktip_window_t1_ParamLimits

0x8f2d,	// (0x000138b1) aid_touch_tab_arrow_left

0x8f39,	// (0x000138bd) aid_touch_tab_arrow_right

0x689f,	// (0x00011223) title_pane_g3_ParamLimits

0x689f,	// (0x00011223) title_pane_g3

0x761d,	// (0x00011fa1) set_value_pane_g1

0x8e0e,	// (0x00013792) popup_toolbar_trans_pane_ParamLimits

0xcb46,	// (0x000174ca) aid_size_cell_tb_trans_pane_ParamLimits

0x773e,	// (0x000120c2) bg_tb_trans_pane_ParamLimits

0xcb58,	// (0x000174dc) grid_tb_trans_pane_ParamLimits

0x6bfa,	// (0x0001157e) cont_note_pane_ParamLimits

0x6bfa,	// (0x0001157e) cont_note_pane

0x6f4e,	// (0x000118d2) cont_snote2_single_text_pane_ParamLimits

0x6f4e,	// (0x000118d2) cont_snote2_single_text_pane

0x6f4e,	// (0x000118d2) cont_snote2_single_graphic_pane_ParamLimits

0x6f4e,	// (0x000118d2) cont_snote2_single_graphic_pane

0x9b24,	// (0x000144a8) cont_note_wait_pane_ParamLimits

0x9b24,	// (0x000144a8) cont_note_wait_pane

0x9b24,	// (0x000144a8) cont_note_image_pane_ParamLimits

0x9b24,	// (0x000144a8) cont_note_image_pane

0xcc2c,	// (0x000175b0) popup_note2_window_g1_ParamLimits

0xcc2c,	// (0x000175b0) popup_note2_window_g1

0xcc5d,	// (0x000175e1) popup_note2_window_t1_ParamLimits

0xcc5d,	// (0x000175e1) popup_note2_window_t1

0xcca2,	// (0x00017626) popup_note2_window_t2_ParamLimits

0xcca2,	// (0x00017626) popup_note2_window_t2

0xcce7,	// (0x0001766b) popup_note2_window_t3_ParamLimits

0xcce7,	// (0x0001766b) popup_note2_window_t3

0xcd2c,	// (0x000176b0) popup_note2_window_t4_ParamLimits

0xcd2c,	// (0x000176b0) popup_note2_window_t4

0x6c7e,	// (0x00011602) popup_note2_window_t5_ParamLimits

0x6c7e,	// (0x00011602) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0001a5f4) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0001a5f4) popup_note2_window_t

0xcd5b,	// (0x000176df) popup_note2_image_window_g1_ParamLimits

0xcd5b,	// (0x000176df) popup_note2_image_window_g1

0xcd67,	// (0x000176eb) popup_note2_image_window_g2_ParamLimits

0xcd67,	// (0x000176eb) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x0001a5ff) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x0001a5ff) popup_note2_image_window_g

0xcd79,	// (0x000176fd) popup_note2_image_window_t1_ParamLimits

0xcd79,	// (0x000176fd) popup_note2_image_window_t1

0xcd91,	// (0x00017715) popup_note2_image_window_t2_ParamLimits

0xcd91,	// (0x00017715) popup_note2_image_window_t2

0xcda9,	// (0x0001772d) popup_note2_image_window_t3_ParamLimits

0xcda9,	// (0x0001772d) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0001a604) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0001a604) popup_note2_image_window_t

0x9b32,	// (0x000144b6) popup_note2_wait_window_g1_ParamLimits

0x9b32,	// (0x000144b6) popup_note2_wait_window_g1

0xcdc5,	// (0x00017749) popup_note2_wait_window_g2_ParamLimits

0xcdc5,	// (0x00017749) popup_note2_wait_window_g2

0x9b4a,	// (0x000144ce) popup_note2_wait_window_g3_ParamLimits

0x9b4a,	// (0x000144ce) popup_note2_wait_window_g3

0x0002,

0xfc87,	// (0x0001a60b) popup_note2_wait_window_g_ParamLimits

0xfc87,	// (0x0001a60b) popup_note2_wait_window_g

0xcdd1,	// (0x00017755) popup_note2_wait_window_t1_ParamLimits

0xcdd1,	// (0x00017755) popup_note2_wait_window_t1

0xcdef,	// (0x00017773) popup_note2_wait_window_t2_ParamLimits

0xcdef,	// (0x00017773) popup_note2_wait_window_t2

0xce0d,	// (0x00017791) popup_note2_wait_window_t3_ParamLimits

0xce0d,	// (0x00017791) popup_note2_wait_window_t3

0xce1f,	// (0x000177a3) popup_note2_wait_window_t4_ParamLimits

0xce1f,	// (0x000177a3) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x0001a612) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x0001a612) popup_note2_wait_window_t

0xce31,	// (0x000177b5) wait_bar2_pane_ParamLimits

0xce31,	// (0x000177b5) wait_bar2_pane

0xce49,	// (0x000177cd) popup_snote2_single_text_window_g1_ParamLimits

0xce49,	// (0x000177cd) popup_snote2_single_text_window_g1

0xce71,	// (0x000177f5) popup_snote2_single_text_window_t1_ParamLimits

0xce71,	// (0x000177f5) popup_snote2_single_text_window_t1

0xcebd,	// (0x00017841) popup_snote2_single_text_window_t2_ParamLimits

0xcebd,	// (0x00017841) popup_snote2_single_text_window_t2

0xcf09,	// (0x0001788d) popup_snote2_single_text_window_t3_ParamLimits

0xcf09,	// (0x0001788d) popup_snote2_single_text_window_t3

0xcf4a,	// (0x000178ce) popup_snote2_single_text_window_t4_ParamLimits

0xcf4a,	// (0x000178ce) popup_snote2_single_text_window_t4

0xcf80,	// (0x00017904) popup_snote2_single_text_window_t5_ParamLimits

0xcf80,	// (0x00017904) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x0001a61b) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x0001a61b) popup_snote2_single_text_window_t

0xcfab,	// (0x0001792f) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfab,	// (0x0001792f) popup_snote2_single_graphic_window_g1

0xcfd3,	// (0x00017957) popup_snote2_single_graphic_window_g2_ParamLimits

0xcfd3,	// (0x00017957) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x0001a626) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x0001a626) popup_snote2_single_graphic_window_g

0xcffb,	// (0x0001797f) popup_snote2_single_graphic_window_t1_ParamLimits

0xcffb,	// (0x0001797f) popup_snote2_single_graphic_window_t1

0xd047,	// (0x000179cb) popup_snote2_single_graphic_window_t2_ParamLimits

0xd047,	// (0x000179cb) popup_snote2_single_graphic_window_t2

0xcf09,	// (0x0001788d) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf09,	// (0x0001788d) popup_snote2_single_graphic_window_t3

0xcf4a,	// (0x000178ce) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf4a,	// (0x000178ce) popup_snote2_single_graphic_window_t4

0xcf80,	// (0x00017904) popup_snote2_single_graphic_window_t5_ParamLimits

0xcf80,	// (0x00017904) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x0001a62b) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x0001a62b) popup_snote2_single_graphic_window_t

0xb81e,	// (0x000161a2) clock_nsta_pane_cp2_t1

0xb81e,	// (0x000161a2) clock_nsta_pane_cp2_t2

0x0001,

0xfabb,	// (0x0001a43f) clock_nsta_pane_cp2_t

0x7758,	// (0x000120dc) form_field_data_wide_pane_g1_ParamLimits

0x7764,	// (0x000120e8) form_field_data_wide_pane_g2_ParamLimits

0x7764,	// (0x000120e8) form_field_data_wide_pane_g2

0x7770,	// (0x000120f4) form_field_data_wide_pane_g3_ParamLimits

0x7770,	// (0x000120f4) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001a016) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001a016) form_field_data_wide_pane_g

0xb6f7,	// (0x0001607b) grid_touch_3_pane_ParamLimits

0xb6f7,	// (0x0001607b) grid_touch_3_pane

0xd093,	// (0x00017a17) cell_touch_3_pane_ParamLimits

0xd093,	// (0x00017a17) cell_touch_3_pane

0xbdcb,	// (0x0001674f) cell_touch_3_pane_g1

0xbdcb,	// (0x0001674f) cell_touch_3_pane_g2

0x0001,

0xfb40,	// (0x0001a4c4) cell_touch_3_pane_g

0x6cb0,	// (0x00011634) cont_query_data_pane

0x6cb8,	// (0x0001163c) cont_query_data_pane_cp1

0xd0c1,	// (0x00017a45) button_value_adjust_pane_cp7

0xd0c9,	// (0x00017a4d) query_popup_pane_cp3

0x7fe6,	// (0x0001296a) bg_popup_sub_pane_cp22_ParamLimits

0x52e5,	// (0x0000fc69) navi_navi_volume_pane_cp2

0x5300,	// (0x0000fc84) popup_side_volume_key_window_g2

0x530f,	// (0x0000fc93) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001a0a8) popup_side_volume_key_window_g

0x532c,	// (0x0000fcb0) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001a0af) popup_side_volume_key_window_t

0x832c,	// (0x00012cb0) popup_side_volume_key_window_ParamLimits

0x7361,	// (0x00011ce5) list_double_graphic_pane_g4_ParamLimits

0x7361,	// (0x00011ce5) list_double_graphic_pane_g4

0xab28,	// (0x000154ac) list_single_2heading_msg_pane_ParamLimits

0xab28,	// (0x000154ac) list_single_2heading_msg_pane

0xd0f8,	// (0x00017a7c) list_single_2heading_msg_pane_g1_ParamLimits

0xd0f8,	// (0x00017a7c) list_single_2heading_msg_pane_g1

0x84c6,	// (0x00012e4a) list_single_2heading_msg_pane_g2_ParamLimits

0x84c6,	// (0x00012e4a) list_single_2heading_msg_pane_g2

0xd104,	// (0x00017a88) list_single_2heading_msg_pane_g3_ParamLimits

0xd104,	// (0x00017a88) list_single_2heading_msg_pane_g3

0xd110,	// (0x00017a94) list_single_2heading_msg_pane_g4_ParamLimits

0xd110,	// (0x00017a94) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x0001a636) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x0001a636) list_single_2heading_msg_pane_g

0xd128,	// (0x00017aac) list_single_2heading_msg_pane_t1_ParamLimits

0xd128,	// (0x00017aac) list_single_2heading_msg_pane_t1

0xd150,	// (0x00017ad4) list_single_2heading_msg_pane_t2_ParamLimits

0xd150,	// (0x00017ad4) list_single_2heading_msg_pane_t2

0xd17f,	// (0x00017b03) list_single_2heading_msg_pane_t3_ParamLimits

0xd17f,	// (0x00017b03) list_single_2heading_msg_pane_t3

0xd1b8,	// (0x00017b3c) list_single_2heading_msg_pane_t4_ParamLimits

0xd1b8,	// (0x00017b3c) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x0001a63f) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x0001a63f) list_single_2heading_msg_pane_t

0x68ab,	// (0x0001122f) title_pane_g4_ParamLimits

0x68ab,	// (0x0001122f) title_pane_g4

0x50f3,	// (0x0000fa77) title_pane_stacon_g3_ParamLimits

0x50f3,	// (0x0000fa77) title_pane_stacon_g3

0xcbc3,	// (0x00017547) list_single_2graphic_im_pane_g4_ParamLimits

0xcbc3,	// (0x00017547) list_single_2graphic_im_pane_g4

0xa589,	// (0x00014f0d) popup_side_volume_key_window_cp

0xae85,	// (0x00015809) main_idle_act2_pane_t1

0x571d,	// (0x000100a1) toolbar_button_pane_g10

0x7146,	// (0x00011aca) popup_toolbar_window_cp1

0xb80f,	// (0x00016193) clock_nsta_pane_cp_t1

0xb80f,	// (0x00016193) clock_nsta_pane_cp_t2

0x0001,

0xfab6,	// (0x0001a43a) clock_nsta_pane_cp_t

0x52e5,	// (0x0000fc69) navi_navi_volume_pane_cp2_ParamLimits

0x52f4,	// (0x0000fc78) popup_side_volume_key_window_g1_ParamLimits

0x5300,	// (0x0000fc84) popup_side_volume_key_window_g2_ParamLimits

0x530f,	// (0x0000fc93) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001a0a8) popup_side_volume_key_window_g_ParamLimits

0x5b85,	// (0x00010509) fep_hwr_aid_pane

0x5c2c,	// (0x000105b0) bg_fep_hwr_top_pane_g4_ParamLimits

0xbe3b,	// (0x000167bf) fep_hwr_top_pane_g1_ParamLimits

0xbe4d,	// (0x000167d1) fep_hwr_top_pane_g2_ParamLimits

0x5c4c,	// (0x000105d0) fep_hwr_top_pane_g3_ParamLimits

0xfb0b,	// (0x0001a48f) fep_hwr_top_pane_g_ParamLimits

0x5c61,	// (0x000105e5) fep_hwr_top_text_pane_ParamLimits

0xa34c,	// (0x00014cd0) aid_touch_tab_arrow_arrow_2

0xa355,	// (0x00014cd9) aid_touch_tab_arrow_left_2

0x5b99,	// (0x0001051d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5bd0,	// (0x00010554) fep_hwr_prediction_pane

0xbfad,	// (0x00016931) fep_vkb_prediction_pane

0xc0b1,	// (0x00016a35) fep_vkb_side_pane_g3_ParamLimits

0xc0b1,	// (0x00016a35) fep_vkb_side_pane_g3

0x5ddc,	// (0x00010760) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5e48,	// (0x000107cc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5e55,	// (0x000107d9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0001a53e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5f84,	// (0x00010908) fep_hwr_prediction_pane_g1

0x5f8e,	// (0x00010912) fep_hwr_prediction_pane_g2

0x5f96,	// (0x0001091a) fep_hwr_prediction_pane_g3

0x5f9e,	// (0x00010922) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0001a648) fep_hwr_prediction_pane_g

0xd1dd,	// (0x00017b61) fep_vkb_prediction_pane_g1

0xd1e7,	// (0x00017b6b) fep_vkb_prediction_pane_g2

0xd1ef,	// (0x00017b73) fep_vkb_prediction_pane_g3

0xd1f7,	// (0x00017b7b) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x0001a651) fep_vkb_prediction_pane_g

0x5a05,	// (0x00010389) slider_set_pane_g3

0x5a19,	// (0x0001039d) slider_set_pane_g4

0x5a31,	// (0x000103b5) slider_set_pane_g5

0x5a05,	// (0x00010389) slider_set_pane_g6

0x5a47,	// (0x000103cb) slider_set_pane_g7

0xaa27,	// (0x000153ab) slider_form_pane_g3

0xaa30,	// (0x000153b4) slider_form_pane_g4

0xaa38,	// (0x000153bc) slider_form_pane_g5

0xaa27,	// (0x000153ab) slider_form_pane_g6

0xaa40,	// (0x000153c4) slider_form_pane_g7

0xb162,	// (0x00015ae6) slider_set_pane_vc_g3

0xb16b,	// (0x00015aef) slider_set_pane_vc_g4

0xb174,	// (0x00015af8) slider_set_pane_vc_g5

0xb162,	// (0x00015ae6) slider_set_pane_vc_g6

0xb17d,	// (0x00015b01) slider_set_pane_vc_g7

0xb162,	// (0x00015ae6) slider_form_pane_vc_g1

0xb16b,	// (0x00015aef) slider_form_pane_vc_g2

0xb174,	// (0x00015af8) slider_form_pane_vc_g3

0xb162,	// (0x00015ae6) slider_form_pane_vc_g4

0xb515,	// (0x00015e99) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x0001a413) slider_form_pane_vc_g

0x6863,	// (0x000111e7) main_idle_act3_pane

0xd1ff,	// (0x00017b83) ai3_links_pane

0xd208,	// (0x00017b8c) popup_ai3_data_window_ParamLimits

0xd208,	// (0x00017b8c) popup_ai3_data_window

0x6863,	// (0x000111e7) grid_ai3_links_pane

0xd222,	// (0x00017ba6) cell_ai3_links_pane_ParamLimits

0xd222,	// (0x00017ba6) cell_ai3_links_pane

0xd23a,	// (0x00017bbe) bg_popup_sub_pane_cp11

0xd247,	// (0x00017bcb) cell_ai3_links_pane_g1

0x6863,	// (0x000111e7) bg_popup_sub_pane_cp12

0xd26c,	// (0x00017bf0) heading_ai3_data_pane

0xd274,	// (0x00017bf8) list_ai3_gene_pane

0xd280,	// (0x00017c04) popup_ai3_data_window_g1

0xd288,	// (0x00017c0c) heading_ai3_data_pane_g1

0xd290,	// (0x00017c14) heading_ai3_data_pane_t1

0xd29e,	// (0x00017c22) list_double_ai3_gene_pane_ParamLimits

0xd29e,	// (0x00017c22) list_double_ai3_gene_pane

0xd2ab,	// (0x00017c2f) list_single_ai3_gene_pane_ParamLimits

0xd2ab,	// (0x00017c2f) list_single_ai3_gene_pane

0xbd90,	// (0x00016714) list_highlight_pane_cp7_ParamLimits

0xbd90,	// (0x00016714) list_highlight_pane_cp7

0xd2b8,	// (0x00017c3c) list_single_a13_gene_pane_t1_ParamLimits

0xd2b8,	// (0x00017c3c) list_single_a13_gene_pane_t1

0xd2cf,	// (0x00017c53) list_single_ai3_gene_pane_g1

0xd2d8,	// (0x00017c5c) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x0001a65a) list_single_ai3_gene_pane_g

0xd2e0,	// (0x00017c64) list_double_ai3_gene_pane_g1_ParamLimits

0xd2e0,	// (0x00017c64) list_double_ai3_gene_pane_g1

0xd2ec,	// (0x00017c70) list_double_ai3_gene_pane_t1_ParamLimits

0xd2ec,	// (0x00017c70) list_double_ai3_gene_pane_t1

0xd308,	// (0x00017c8c) list_double_ai3_gene_pane_t2_ParamLimits

0xd308,	// (0x00017c8c) list_double_ai3_gene_pane_t2

0xd31e,	// (0x00017ca2) list_double_ai3_gene_pane_t3_ParamLimits

0xd31e,	// (0x00017ca2) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x0001a65f) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x0001a65f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd0da,	// (0x00017a5e) aid_size_min_col_2

0xd0e4,	// (0x00017a68) aid_size_min_msg_ParamLimits

0xd0e4,	// (0x00017a68) aid_size_min_msg

0xc1b1,	// (0x00016b35) fep_vkb_top_text_pane_g2_ParamLimits

0xc1b1,	// (0x00016b35) fep_vkb_top_text_pane_g2

0x0001,

0xfb3b,	// (0x0001a4bf) fep_vkb_top_text_pane_g_ParamLimits

0xfb3b,	// (0x0001a4bf) fep_vkb_top_text_pane_g

0x6863,	// (0x000111e7) main_hc_apps_shell_pane

0xd33b,	// (0x00017cbf) grid_hc_apps_pane_ParamLimits

0xd33b,	// (0x00017cbf) grid_hc_apps_pane

0xd34a,	// (0x00017cce) list_hc_apps_pane

0xd352,	// (0x00017cd6) scroll_pane_cp37_ParamLimits

0xd352,	// (0x00017cd6) scroll_pane_cp37

0xd35e,	// (0x00017ce2) cell_hc_apps_pane_ParamLimits

0xd35e,	// (0x00017ce2) cell_hc_apps_pane

0xd40c,	// (0x00017d90) cell_hc_apps_pane_g1_ParamLimits

0xd40c,	// (0x00017d90) cell_hc_apps_pane_g1

0xd43d,	// (0x00017dc1) cell_hc_apps_pane_g2_ParamLimits

0xd43d,	// (0x00017dc1) cell_hc_apps_pane_g2

0xd459,	// (0x00017ddd) cell_hc_apps_pane_g3_ParamLimits

0xd459,	// (0x00017ddd) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x0001a666) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x0001a666) cell_hc_apps_pane_g

0xd47b,	// (0x00017dff) cell_hc_apps_pane_t1_ParamLimits

0xd47b,	// (0x00017dff) cell_hc_apps_pane_t1

0x6bfa,	// (0x0001157e) grid_highlight_pane_cp10_ParamLimits

0x6bfa,	// (0x0001157e) grid_highlight_pane_cp10

0xd4bb,	// (0x00017e3f) list_single_hc_apps_pane_ParamLimits

0xd4bb,	// (0x00017e3f) list_single_hc_apps_pane

0xd517,	// (0x00017e9b) list_single_hc_apps_pane_g1

0xd530,	// (0x00017eb4) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x0001a66d) list_single_hc_apps_pane_g

0xd549,	// (0x00017ecd) list_single_hc_apps_pane_g2_copy1

0xd565,	// (0x00017ee9) list_single_hc_apps_pane_t1

0x6957,	// (0x000112db) bg_set_opt_pane_cp_ParamLimits

0x501a,	// (0x0000f99e) setting_slider_pane_t1_ParamLimits

0x5033,	// (0x0000f9b7) setting_slider_pane_t2_ParamLimits

0x504d,	// (0x0000f9d1) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00019efe) setting_slider_pane_t_ParamLimits

0x5065,	// (0x0000f9e9) slider_set_pane_ParamLimits

0x558d,	// (0x0000ff11) control_pane_g5_ParamLimits

0x558d,	// (0x0000ff11) control_pane_g5

0xa876,	// (0x000151fa) slider_set_pane_g1_ParamLimits

0x59f9,	// (0x0001037d) slider_set_pane_g2_ParamLimits

0x5a05,	// (0x00010389) slider_set_pane_g3_ParamLimits

0x5a19,	// (0x0001039d) slider_set_pane_g4_ParamLimits

0x5a31,	// (0x000103b5) slider_set_pane_g5_ParamLimits

0x5a05,	// (0x00010389) slider_set_pane_g6_ParamLimits

0x5a47,	// (0x000103cb) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0001a2f4) slider_set_pane_g_ParamLimits

0x840d,	// (0x00012d91) navi_icon_text_pane_ParamLimits

0x8eee,	// (0x00013872) aid_fill_nsta_2_ParamLimits

0x8f2d,	// (0x000138b1) aid_touch_tab_arrow_left_ParamLimits

0x8f39,	// (0x000138bd) aid_touch_tab_arrow_right_ParamLimits

0x8fa5,	// (0x00013929) clock_nsta_pane_ParamLimits

0xa328,	// (0x00014cac) navi_icon_pane_g1_ParamLimits

0xa337,	// (0x00014cbb) navi_text_pane_t1_ParamLimits

0xb919,	// (0x0001629d) navi_icon_text_pane_g1_ParamLimits

0xb928,	// (0x000162ac) navi_icon_text_pane_t1_ParamLimits

0xd517,	// (0x00017e9b) list_single_hc_apps_pane_g1_ParamLimits

0xd530,	// (0x00017eb4) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x0001a66d) list_single_hc_apps_pane_g_ParamLimits

0xd549,	// (0x00017ecd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd565,	// (0x00017ee9) list_single_hc_apps_pane_t1_ParamLimits

0x4f2e,	// (0x0000f8b2) popup_toolbar2_fixed_window_ParamLimits

0x4f2e,	// (0x0000f8b2) popup_toolbar2_fixed_window

0x8e04,	// (0x00013788) popup_toolbar2_float_window

0x6863,	// (0x000111e7) bg_popup_sub_pane_cp27

0xd593,	// (0x00017f17) grid_toolbar2_float_pane

0x6863,	// (0x000111e7) bg_popup_sub_pane_cp26

0xd593,	// (0x00017f17) grid_toolbar2_fixed_pane

0xd59b,	// (0x00017f1f) cell_toolbar2_fixed_pane_ParamLimits

0xd59b,	// (0x00017f1f) cell_toolbar2_fixed_pane

0xd5ab,	// (0x00017f2f) cell_toolbar2_fixed_pane_g1

0xd5b4,	// (0x00017f38) toolbar2_fixed_button_pane

0x93ef,	// (0x00013d73) toolbar2_fixed_button_pane_g1

0x93ff,	// (0x00013d83) toolbar2_fixed_button_pane_g2

0x93f7,	// (0x00013d7b) toolbar2_fixed_button_pane_g3

0x940f,	// (0x00013d93) toolbar2_fixed_button_pane_g4

0x9407,	// (0x00013d8b) toolbar2_fixed_button_pane_g5

0x9417,	// (0x00013d9b) toolbar2_fixed_button_pane_g6

0x941f,	// (0x00013da3) toolbar2_fixed_button_pane_g7

0x942f,	// (0x00013db3) toolbar2_fixed_button_pane_g8

0x9427,	// (0x00013dab) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0001a1f6) toolbar2_fixed_button_pane_g

0xd5bc,	// (0x00017f40) cell_toolbar2_float_pane_ParamLimits

0xd5bc,	// (0x00017f40) cell_toolbar2_float_pane

0xd5cd,	// (0x00017f51) cell_toolbar2_float_pane_g1

0xd5b4,	// (0x00017f38) toolbar2_fixed_button_pane_cp

0xbf0d,	// (0x00016891) fep_vkb_accented_list_pane_ParamLimits

0xbf0d,	// (0x00016891) fep_vkb_accented_list_pane

0x5dbc,	// (0x00010740) bg_popup_fep_shadow_pane_g9

0x858d,	// (0x00012f11) bg_popup_fep_shadow_pane_cp3

0x7a1c,	// (0x000123a0) list_accented_list_pane

0xd5d6,	// (0x00017f5a) list_single_accented_list_pane_ParamLimits

0xd5d6,	// (0x00017f5a) list_single_accented_list_pane

0x858d,	// (0x00012f11) list_highlight_pane_cp10

0xd5e7,	// (0x00017f6b) list_single_accented_list_pane_t1

0x8d54,	// (0x000136d8) popup_slider_window_ParamLimits

0x8d54,	// (0x000136d8) popup_slider_window

0xd0d1,	// (0x00017a55) aid_indentation_list_msg

0xd6a1,	// (0x00018025) bg_popup_window_pane_cp19

0xd70b,	// (0x0001808f) popup_slider_window_g1

0xd727,	// (0x000180ab) popup_slider_window_g2

0xd743,	// (0x000180c7) popup_slider_window_g3

0x0005,

0xfcee,	// (0x0001a672) popup_slider_window_g

0xd79f,	// (0x00018123) popup_slider_window_t1

0xd813,	// (0x00018197) small_volume_slider_vertical_pane

0xbdcb,	// (0x0001674f) small_volume_slider_vertical_pane_g1

0xbdcb,	// (0x0001674f) small_volume_slider_vertical_pane_g2

0xd82f,	// (0x000181b3) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x0001a684) small_volume_slider_vertical_pane_g

0x4ce6,	// (0x0000f66a) area_side_right_pane_ParamLimits

0x4ce6,	// (0x0000f66a) area_side_right_pane

0x5fa6,	// (0x0001092a) aid_size_side_button_ParamLimits

0x5fa6,	// (0x0001092a) aid_size_side_button

0x5fba,	// (0x0001093e) grid_sctrl_middle_pane_ParamLimits

0x5fba,	// (0x0001093e) grid_sctrl_middle_pane

0x5fda,	// (0x0001095e) sctrl_sk_bottom_pane

0x5feb,	// (0x0001096f) sctrl_sk_top_pane

0x5ffd,	// (0x00010981) aid_touch_sctrl_top

0x600a,	// (0x0001098e) bg_sctrl_sk_pane_ParamLimits

0x600a,	// (0x0001098e) bg_sctrl_sk_pane

0x6018,	// (0x0001099c) sctrl_sk_top_pane_g1

0x6025,	// (0x000109a9) sctrl_sk_top_pane_t1

0x5ffd,	// (0x00010981) aid_touch_sctrl_bottom

0x600a,	// (0x0001098e) bg_sctrl_sk_pane_cp_ParamLimits

0x600a,	// (0x0001098e) bg_sctrl_sk_pane_cp

0x6040,	// (0x000109c4) sctrl_sk_bottom_pane_g1

0x6025,	// (0x000109a9) sctrl_sk_bottom_pane_t1

0x6049,	// (0x000109cd) cell_sctrl_middle_pane_ParamLimits

0x6049,	// (0x000109cd) cell_sctrl_middle_pane

0x6064,	// (0x000109e8) aid_touch_sctrl_middle_ParamLimits

0x6064,	// (0x000109e8) aid_touch_sctrl_middle

0x6076,	// (0x000109fa) bg_sctrl_middle_pane_ParamLimits

0x6076,	// (0x000109fa) bg_sctrl_middle_pane

0x5ddc,	// (0x00010760) cell_sctrl_middle_pane_g1_ParamLimits

0x5ddc,	// (0x00010760) cell_sctrl_middle_pane_g1

0x6084,	// (0x00010a08) cell_sctrl_middle_pane_g2_ParamLimits

0x6084,	// (0x00010a08) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x0001a690) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x0001a690) cell_sctrl_middle_pane_g

0x93ef,	// (0x00013d73) bg_sctrl_middle_pane_g1

0x93f7,	// (0x00013d7b) bg_sctrl_middle_pane_g2

0x93ff,	// (0x00013d83) bg_sctrl_middle_pane_g3

0x9407,	// (0x00013d8b) bg_sctrl_middle_pane_g4

0x940f,	// (0x00013d93) bg_sctrl_middle_pane_g5

0x9417,	// (0x00013d9b) bg_sctrl_middle_pane_g6

0x941f,	// (0x00013da3) bg_sctrl_middle_pane_g7

0x9427,	// (0x00013dab) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x0001a695) bg_sctrl_middle_pane_g

0x942f,	// (0x00013db3) bg_sctrl_middle_pane_g8_copy1

0x93ef,	// (0x00013d73) bg_sctrl_sk_pane_g1

0x93ff,	// (0x00013d83) bg_sctrl_sk_pane_g2

0x93f7,	// (0x00013d7b) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0001a1f6) bg_sctrl_sk_pane_g

0x710c,	// (0x00011a90) aid_size_touch_scroll_bar

0x940f,	// (0x00013d93) bg_sctrl_sk_pane_g4

0x9407,	// (0x00013d8b) bg_sctrl_sk_pane_g5

0x9417,	// (0x00013d9b) bg_sctrl_sk_pane_g6

0x941f,	// (0x00013da3) bg_sctrl_sk_pane_g7

0x942f,	// (0x00013db3) bg_sctrl_sk_pane_g8

0x9427,	// (0x00013dab) bg_sctrl_sk_pane_g9

0x89bf,	// (0x00013343) popup_fep_china_hwr2_fs_candidate_window

0x89c9,	// (0x0001334d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x89c9,	// (0x0001334d) popup_fep_china_hwr2_fs_control_window

0x5ddc,	// (0x00010760) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x0001a68b) sctrl_sk_top_pane_g

0xd838,	// (0x000181bc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd838,	// (0x000181bc) aid_fep_china_hwr2_fs_cell

0xd84a,	// (0x000181ce) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd84a,	// (0x000181ce) bg_popup_fep_shadow_pane_cp4

0xd861,	// (0x000181e5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd861,	// (0x000181e5) bg_popup_fep_shadow_pane_cp5

0xd873,	// (0x000181f7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd873,	// (0x000181f7) popup_fep_china_hwr2_fs_control_bar_grid

0xd883,	// (0x00018207) popup_fep_china_hwr2_fs_control_funtion_grid

0xd88b,	// (0x0001820f) aid_fep_china_hwr2_fs_candi_cell

0x6863,	// (0x000111e7) bg_popup_fep_shadow_pane_cp6

0xd895,	// (0x00018219) popup_fep_china_hwr2_fs_candidate_grid

0xd89f,	// (0x00018223) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd89f,	// (0x00018223) cell_fep_china_hwr2_fs_funtion_grid

0xbdcb,	// (0x0001674f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8b7,	// (0x0001823b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8b7,	// (0x0001823b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8c5,	// (0x00018249) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8c5,	// (0x00018249) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x0001a6a6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x0001a6a6) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8db,	// (0x0001825f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8db,	// (0x0001825f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8f0,	// (0x00018274) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8f0,	// (0x00018274) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x0001a6ab) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x0001a6ab) cell_fep_china_hwr2_fs_funtion_grid_t

0xd90c,	// (0x00018290) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd914,	// (0x00018298) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd91c,	// (0x000182a0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x0001a6b0) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd924,	// (0x000182a8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd924,	// (0x000182a8) cell_fep_china_hwr2_fs_candidate_grid

0xd93d,	// (0x000182c1) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd945,	// (0x000182c9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbdcb,	// (0x0001674f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbdcb,	// (0x0001674f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb40,	// (0x0001a4c4) cell_fep_china_hwr2_fs_candidate_grid_g

0xd94d,	// (0x000182d1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8fb2,	// (0x00013936) clock_nsta_pane_cp_24_ParamLimits

0x8fb2,	// (0x00013936) clock_nsta_pane_cp_24

0x9030,	// (0x000139b4) indicator_nsta_pane_cp_24_ParamLimits

0x9030,	// (0x000139b4) indicator_nsta_pane_cp_24

0xa1a4,	// (0x00014b28) heading_pane_g1

0x0001,

0xf8d7,	// (0x0001a25b) heading_pane_g

0xacce,	// (0x00015652) grid_sct_catagory_button_pane

0xacfe,	// (0x00015682) scroll_pane_cp5_ParamLimits

0xb96d,	// (0x000162f1) button_value_adjust_pane_cp5_ParamLimits

0xb96d,	// (0x000162f1) button_value_adjust_pane_cp5

0xba69,	// (0x000163ed) form2_midp_time_pane_ParamLimits

0xd95b,	// (0x000182df) cell_sct_catagory_button_pane_ParamLimits

0xd95b,	// (0x000182df) cell_sct_catagory_button_pane

0xbd90,	// (0x00016714) bg_button_pane_cp01_ParamLimits

0xbd90,	// (0x00016714) bg_button_pane_cp01

0xbdcb,	// (0x0001674f) cell_sct_catagory_button_pane_g1

0x8d93,	// (0x00013717) popup_tb_extension_window

0xd96d,	// (0x000182f1) aid_size_cell_ext_ParamLimits

0xd96d,	// (0x000182f1) aid_size_cell_ext

0x6bfa,	// (0x0001157e) bg_tb_trans_pane_cp1_ParamLimits

0x6bfa,	// (0x0001157e) bg_tb_trans_pane_cp1

0xd98d,	// (0x00018311) grid_tb_ext_pane_ParamLimits

0xd98d,	// (0x00018311) grid_tb_ext_pane

0xd9bb,	// (0x0001833f) cell_tb_ext_pane_ParamLimits

0xd9bb,	// (0x0001833f) cell_tb_ext_pane

0xd9d2,	// (0x00018356) cell_tb_ext_pane_g1_ParamLimits

0xd9d2,	// (0x00018356) cell_tb_ext_pane_g1

0xd9ef,	// (0x00018373) cell_tb_ext_pane_t1

0x6bfa,	// (0x0001157e) list_highlight_pane_cp11_ParamLimits

0x6bfa,	// (0x0001157e) list_highlight_pane_cp11

0x4f4d,	// (0x0000f8d1) popup_uni_indicator_window_ParamLimits

0x4f4d,	// (0x0000f8d1) popup_uni_indicator_window

0x773e,	// (0x000120c2) bg_popup_sub_pane_cp14

0xda0a,	// (0x0001838e) list_uniindi_pane

0xda16,	// (0x0001839a) uniindi_top_pane

0x6bfa,	// (0x0001157e) bg_uniindi_top_pane

0xda35,	// (0x000183b9) uniindi_top_pane_g1

0xda4b,	// (0x000183cf) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x0001a6b7) uniindi_top_pane_g

0xda75,	// (0x000183f9) uniindi_top_pane_t1

0xda9f,	// (0x00018423) list_single_uniindi_pane_ParamLimits

0xda9f,	// (0x00018423) list_single_uniindi_pane

0xbdcb,	// (0x0001674f) bg_uniindi_top_pane_g1

0xdab2,	// (0x00018436) list_single_uniindi_pane_g1

0xdac5,	// (0x00018449) list_single_uniindi_pane_t1

0x4dc3,	// (0x0000f747) control_bg_pane

0xdaea,	// (0x0001846e) bg_sctrl_sk_pane_cp1

0xdaf3,	// (0x00018477) bg_sctrl_sk_pane_cp2

0xdafc,	// (0x00018480) control_bg_pane_g1

0xdb05,	// (0x00018489) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x0001a6c0) control_bg_pane_g

0xb7a1,	// (0x00016125) cell_indicator_nsta_pane_g1_ParamLimits

0xb7af,	// (0x00016133) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa4,	// (0x0001a428) cell_indicator_nsta_pane_g_ParamLimits

0xbaf1,	// (0x00016475) form2_midp_time_pane_t1_ParamLimits

0x6f4e,	// (0x000118d2) main_idle_act4_pane_ParamLimits

0x6f4e,	// (0x000118d2) main_idle_act4_pane

0x8d93,	// (0x00013717) popup_tb_extension_window_ParamLimits

0xd9ab,	// (0x0001832f) tb_ext_find_pane_ParamLimits

0xd9ab,	// (0x0001832f) tb_ext_find_pane

0xdb0e,	// (0x00018492) ai_gene_pane_1_cp1

0x86d2,	// (0x00013056) ai_gene_pane_2_cp1

0xdb16,	// (0x0001849a) list_single_idle_plugin_calendar_pane

0xdb1f,	// (0x000184a3) list_single_idle_plugin_notification_pane

0xdb28,	// (0x000184ac) list_single_idle_plugin_player_pane

0xdb31,	// (0x000184b5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb31,	// (0x000184b5) list_single_idle_plugin_shortcut_pane

0xdb53,	// (0x000184d7) main_idle_act4_pane_t1

0xdb65,	// (0x000184e9) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x0001a6c5) main_idle_act4_pane_t

0xdb77,	// (0x000184fb) middle_sk_idle_act4_pane_ParamLimits

0xdb77,	// (0x000184fb) middle_sk_idle_act4_pane

0xdb8d,	// (0x00018511) popup_clock_digital_analogue_window_cp2

0xdba7,	// (0x0001852b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdba7,	// (0x0001852b) shortcut_wheel_idle_act4_pane

0xbdcb,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g1

0xbdcb,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g2

0xbdcb,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g3

0xbdcb,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g4

0xbdcb,	// (0x0001674f) shortcut_wheel_idle_act4_pane_g5

0xdbbb,	// (0x0001853f) shortcut_wheel_idle_act4_pane_g6

0xdbc3,	// (0x00018547) shortcut_wheel_idle_act4_pane_g7

0xdbcb,	// (0x0001854f) shortcut_wheel_idle_act4_pane_g8

0xdbd3,	// (0x00018557) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x0001a6ca) shortcut_wheel_idle_act4_pane_g

0xc05d,	// (0x000169e1) middle_sk_idle_act4_pane_g1_ParamLimits

0xc05d,	// (0x000169e1) middle_sk_idle_act4_pane_g1

0xdc37,	// (0x000185bb) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc37,	// (0x000185bb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x0001a6ed) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x0001a6ed) middle_sk_idle_act4_pane_g

0xdc43,	// (0x000185c7) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc43,	// (0x000185c7) middle_sk_idle_act4_pane_t1

0xdc60,	// (0x000185e4) grid_ai_shortcut_pane_ParamLimits

0xdc60,	// (0x000185e4) grid_ai_shortcut_pane

0xdc79,	// (0x000185fd) list_highlight_pane_cp16_ParamLimits

0xdc79,	// (0x000185fd) list_highlight_pane_cp16

0xdc86,	// (0x0001860a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc86,	// (0x0001860a) list_single_idle_plugin_shortcut_pane_g1

0xdc92,	// (0x00018616) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc92,	// (0x00018616) list_single_idle_plugin_shortcut_pane_g2

0xdcaa,	// (0x0001862e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcaa,	// (0x0001862e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x0001a6f2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x0001a6f2) list_single_idle_plugin_shortcut_pane_g

0xdcbd,	// (0x00018641) cell_ai_shortcut_pane_ParamLimits

0xdcbd,	// (0x00018641) cell_ai_shortcut_pane

0xdce1,	// (0x00018665) cell_ai_shortcut_pane_g1_ParamLimits

0xdce1,	// (0x00018665) cell_ai_shortcut_pane_g1

0xdb0e,	// (0x00018492) ai_gene_pane_1_cp2

0xdd03,	// (0x00018687) ai_gene_pane_2_cp2

0xdd0b,	// (0x0001868f) list_highlight_pane_cp15

0xdd14,	// (0x00018698) list_single_idle_plugin_calendar_pane_g1

0xdd0b,	// (0x0001868f) list_highlight_pane_cp17

0xdd1c,	// (0x000186a0) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd24,	// (0x000186a8) list_single_idle_plugin_player_pane_g1

0xaf27,	// (0x000158ab) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x0001a6f9) list_single_idle_plugin_player_pane_g

0xdd2c,	// (0x000186b0) list_single_idle_plugin_player_pane_t1

0xdd3a,	// (0x000186be) list_single_idle_plugin_player_pane_t2

0xdd48,	// (0x000186cc) list_single_idle_plugin_player_pane_t3

0xdd56,	// (0x000186da) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x0001a6fe) list_single_idle_plugin_player_pane_t

0xdd64,	// (0x000186e8) wait_bar_pane_cp15

0xdd6c,	// (0x000186f0) grid_ai_notification_pane

0xaf27,	// (0x000158ab) list_single_idle_plugin_notification_pane_g1

0xdd75,	// (0x000186f9) cell_ai_notification_pane_ParamLimits

0xdd75,	// (0x000186f9) cell_ai_notification_pane

0xdd82,	// (0x00018706) cell_ai_notification_pane_g1

0xdd8a,	// (0x0001870e) cell_ai_notification_pane_t1

0xdd98,	// (0x0001871c) tb_ext_find_button_pane

0xdda0,	// (0x00018724) tb_ext_find_pane_g1

0xdda8,	// (0x0001872c) tb_ext_find_pane_t1

0x7f21,	// (0x000128a5) tb_ext_find_button_pane_g1

0xddb6,	// (0x0001873a) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x0001a707) tb_ext_find_button_pane_g

0xdb53,	// (0x000184d7) main_idle_act4_pane_t1_ParamLimits

0xdb65,	// (0x000184e9) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x0001a6c5) main_idle_act4_pane_t_ParamLimits

0xdb8d,	// (0x00018511) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb9b,	// (0x0001851f) sat_plugin_idle_act4_pane_ParamLimits

0xdb9b,	// (0x0001851f) sat_plugin_idle_act4_pane

0xddbf,	// (0x00018743) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddbf,	// (0x00018743) sat_plugin_idle_act4_pane_t1

0xddd2,	// (0x00018756) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddd2,	// (0x00018756) sat_plugin_idle_act4_pane_t2

0xdde5,	// (0x00018769) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdde5,	// (0x00018769) sat_plugin_idle_act4_pane_t3

0xddf8,	// (0x0001877c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddf8,	// (0x0001877c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x0001a70c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x0001a70c) sat_plugin_idle_act4_pane_t

0x4e88,	// (0x0000f80c) popup_battery_window_ParamLimits

0x4e88,	// (0x0000f80c) popup_battery_window

0x6bfa,	// (0x0001157e) bg_popup_sub_pane_cp25_ParamLimits

0x6bfa,	// (0x0001157e) bg_popup_sub_pane_cp25

0xde0b,	// (0x0001878f) popup_battery_window_g1_ParamLimits

0xde0b,	// (0x0001878f) popup_battery_window_g1

0xde17,	// (0x0001879b) popup_battery_window_t1_ParamLimits

0xde17,	// (0x0001879b) popup_battery_window_t1

0xde29,	// (0x000187ad) popup_battery_window_t2_ParamLimits

0xde29,	// (0x000187ad) popup_battery_window_t2

0x0001,

0xfd91,	// (0x0001a715) popup_battery_window_t_ParamLimits

0xfd91,	// (0x0001a715) popup_battery_window_t

0x85a1,	// (0x00012f25) midp_canvas_pane_ParamLimits

0x8616,	// (0x00012f9a) midp_keypad_pane_ParamLimits

0x8616,	// (0x00012f9a) midp_keypad_pane

0x8917,	// (0x0001329b) main_midp_pane_ParamLimits

0xb82d,	// (0x000161b1) signal_pane_g2_cp_ParamLimits

0xde46,	// (0x000187ca) aid_size_cell_midp_keypad_ParamLimits

0xde46,	// (0x000187ca) aid_size_cell_midp_keypad

0xde60,	// (0x000187e4) midp_keyp_game_grid_pane_ParamLimits

0xde60,	// (0x000187e4) midp_keyp_game_grid_pane

0xde80,	// (0x00018804) midp_keyp_rocker_pane_ParamLimits

0xde80,	// (0x00018804) midp_keyp_rocker_pane

0xdeb9,	// (0x0001883d) midp_keyp_sk_left_pane_ParamLimits

0xdeb9,	// (0x0001883d) midp_keyp_sk_left_pane

0xdf13,	// (0x00018897) midp_keyp_sk_right_pane_ParamLimits

0xdf13,	// (0x00018897) midp_keyp_sk_right_pane

0x6863,	// (0x000111e7) bg_button_pane_cp03

0xdf6d,	// (0x000188f1) midp_keyp_sk_left_pane_g1

0x6863,	// (0x000111e7) bg_button_pane_cp04

0xdf6d,	// (0x000188f1) midp_keyp_sk_right_pane_g1

0xbdcb,	// (0x0001674f) midp_keyp_rocker_pane_g1

0xdf76,	// (0x000188fa) keyp_game_cell_pane_ParamLimits

0xdf76,	// (0x000188fa) keyp_game_cell_pane

0x6863,	// (0x000111e7) bg_button_pane_cp02

0xdf89,	// (0x0001890d) keyp_game_cell_pane_g1

0x4ecc,	// (0x0000f850) popup_fep_vkb2_window_ParamLimits

0x4ecc,	// (0x0000f850) popup_fep_vkb2_window

0x60a5,	// (0x00010a29) aid_size_cell_vkb2_ParamLimits

0x60a5,	// (0x00010a29) aid_size_cell_vkb2

0x60f9,	// (0x00010a7d) popup_fep_vkb2_window_g1_ParamLimits

0x60f9,	// (0x00010a7d) popup_fep_vkb2_window_g1

0x6141,	// (0x00010ac5) vkb2_area_bottom_pane_ParamLimits

0x6141,	// (0x00010ac5) vkb2_area_bottom_pane

0x618d,	// (0x00010b11) vkb2_area_keypad_pane_ParamLimits

0x618d,	// (0x00010b11) vkb2_area_keypad_pane

0x61cf,	// (0x00010b53) vkb2_area_top_pane_ParamLimits

0x61cf,	// (0x00010b53) vkb2_area_top_pane

0x6249,	// (0x00010bcd) vkb2_top_entry_pane_ParamLimits

0x6249,	// (0x00010bcd) vkb2_top_entry_pane

0x6273,	// (0x00010bf7) vkb2_top_grid_left_pane_ParamLimits

0x6273,	// (0x00010bf7) vkb2_top_grid_left_pane

0x6291,	// (0x00010c15) vkb2_top_grid_right_pane_ParamLimits

0x6291,	// (0x00010c15) vkb2_top_grid_right_pane

0x62af,	// (0x00010c33) vkb2_cell_keypad_pane_ParamLimits

0x62af,	// (0x00010c33) vkb2_cell_keypad_pane

0x6380,	// (0x00010d04) vkb2_area_bottom_grid_pane_ParamLimits

0x6380,	// (0x00010d04) vkb2_area_bottom_grid_pane

0x63a6,	// (0x00010d2a) vkb2_area_bottom_pane_g1_ParamLimits

0x63a6,	// (0x00010d2a) vkb2_area_bottom_pane_g1

0x63ca,	// (0x00010d4e) vkb2_area_bottom_pane_g2_ParamLimits

0x63ca,	// (0x00010d4e) vkb2_area_bottom_pane_g2

0x63f8,	// (0x00010d7c) vkb2_area_bottom_pane_g3_ParamLimits

0x63f8,	// (0x00010d7c) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x0001a71a) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x0001a71a) vkb2_area_bottom_pane_g

0x6459,	// (0x00010ddd) vkb2_top_cell_left_pane_ParamLimits

0x6459,	// (0x00010ddd) vkb2_top_cell_left_pane

0xdf9a,	// (0x0001891e) vkb2_top_entry_pane_g1_ParamLimits

0xdf9a,	// (0x0001891e) vkb2_top_entry_pane_g1

0xdfa8,	// (0x0001892c) vkb2_top_entry_pane_t1_ParamLimits

0xdfa8,	// (0x0001892c) vkb2_top_entry_pane_t1

0xdfda,	// (0x0001895e) vkb2_top_entry_pane_t2_ParamLimits

0xdfda,	// (0x0001895e) vkb2_top_entry_pane_t2

0xe00c,	// (0x00018990) vkb2_top_entry_pane_t3_ParamLimits

0xe00c,	// (0x00018990) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x0001a721) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x0001a721) vkb2_top_entry_pane_t

0x64a6,	// (0x00010e2a) vkb2_top_grid_right_pane_g1_ParamLimits

0x64a6,	// (0x00010e2a) vkb2_top_grid_right_pane_g1

0x64bc,	// (0x00010e40) vkb2_top_grid_right_pane_g2_ParamLimits

0x64bc,	// (0x00010e40) vkb2_top_grid_right_pane_g2

0x64d4,	// (0x00010e58) vkb2_top_grid_right_pane_g3_ParamLimits

0x64d4,	// (0x00010e58) vkb2_top_grid_right_pane_g3

0x64ec,	// (0x00010e70) vkb2_top_grid_right_pane_g4_ParamLimits

0x64ec,	// (0x00010e70) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x0001a728) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x0001a728) vkb2_top_grid_right_pane_g

0x6502,	// (0x00010e86) vkb2_top_cell_left_pane_g1

0x6519,	// (0x00010e9d) vkb2_cell_keypad_pane_g1_ParamLimits

0x6519,	// (0x00010e9d) vkb2_cell_keypad_pane_g1

0xe030,	// (0x000189b4) vkb2_cell_keypad_pane_t1_ParamLimits

0xe030,	// (0x000189b4) vkb2_cell_keypad_pane_t1

0x6527,	// (0x00010eab) vkb2_cell_bottom_grid_pane_ParamLimits

0x6527,	// (0x00010eab) vkb2_cell_bottom_grid_pane

0x6560,	// (0x00010ee4) vkb2_cell_bottom_grid_pane_g1

0xdbdb,	// (0x0001855f) aid_call2_pane_cp02

0xdbe3,	// (0x00018567) aid_call_pane_cp02

0xdbeb,	// (0x0001856f) clock_digital_number_pane_cp10

0xdbf3,	// (0x00018577) clock_digital_number_pane_cp11

0xdbfb,	// (0x0001857f) clock_digital_number_pane_cp12

0xdc03,	// (0x00018587) clock_digital_number_pane_cp13

0xdc0b,	// (0x0001858f) clock_digital_separator_pane_cp10

0x7f21,	// (0x000128a5) popup_clock_digital_analogue_window_cp2_g1

0x7f21,	// (0x000128a5) popup_clock_digital_analogue_window_cp2_g2

0xdc13,	// (0x00018597) popup_clock_digital_analogue_window_cp2_g3

0x7f21,	// (0x000128a5) popup_clock_digital_analogue_window_cp2_g4

0xdc13,	// (0x00018597) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x0001a6dd) popup_clock_digital_analogue_window_cp2_g

0xdc1b,	// (0x0001859f) popup_clock_digital_analogue_window_cp2_t1

0xdc29,	// (0x000185ad) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x0001a6e8) popup_clock_digital_analogue_window_cp2_t

0xbdcb,	// (0x0001674f) clock_digital_number_pane_cp10_g1

0xbdcb,	// (0x0001674f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb40,	// (0x0001a4c4) clock_digital_number_pane_cp10_g

0xbdcb,	// (0x0001674f) clock_digital_separator_pane_cp10_g1

0xbdcb,	// (0x0001674f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb40,	// (0x0001a4c4) clock_digital_separator_pane_cp10_g

0xda57,	// (0x000183db) uniindi_top_pane_g3

0xda68,	// (0x000183ec) uniindi_top_pane_g4

0x633a,	// (0x00010cbe) vkb2_row_keypad_pane_ParamLimits

0x633a,	// (0x00010cbe) vkb2_row_keypad_pane

0x657c,	// (0x00010f00) vkb2_cell_t_keypad_pane_ParamLimits

0x657c,	// (0x00010f00) vkb2_cell_t_keypad_pane

0x658c,	// (0x00010f10) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x658c,	// (0x00010f10) vkb2_cell_t_keypad_pane_cp08

0x659f,	// (0x00010f23) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x659f,	// (0x00010f23) vkb2_cell_t_keypad_pane_cp09

0x65b3,	// (0x00010f37) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x65b3,	// (0x00010f37) vkb2_cell_t_keypad_pane_cp01

0x65c4,	// (0x00010f48) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x65c4,	// (0x00010f48) vkb2_cell_t_keypad_pane_cp02

0x65d5,	// (0x00010f59) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x65d5,	// (0x00010f59) vkb2_cell_t_keypad_pane_cp03

0x65e6,	// (0x00010f6a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x65e6,	// (0x00010f6a) vkb2_cell_t_keypad_pane_cp04

0x65f7,	// (0x00010f7b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x65f7,	// (0x00010f7b) vkb2_cell_t_keypad_pane_cp05

0x6608,	// (0x00010f8c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6608,	// (0x00010f8c) vkb2_cell_t_keypad_pane_cp06

0x6619,	// (0x00010f9d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6619,	// (0x00010f9d) vkb2_cell_t_keypad_pane_cp07

0x662a,	// (0x00010fae) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x662a,	// (0x00010fae) vkb2_cell_t_keypad_pane_cp10

0x5ddc,	// (0x00010760) vkb2_cell_t_keypad_pane_g1

0xe047,	// (0x000189cb) vkb2_cell_t_keypad_pane_t1

0x4dc3,	// (0x0000f747) popup_grid_graphic2_window

0xe059,	// (0x000189dd) aid_size_cell_graphic2_ParamLimits

0xe059,	// (0x000189dd) aid_size_cell_graphic2

0xc6a3,	// (0x00017027) bg_popup_window_pane_cp21_ParamLimits

0xc6a3,	// (0x00017027) bg_popup_window_pane_cp21

0xe085,	// (0x00018a09) graphic2_pages_pane_ParamLimits

0xe085,	// (0x00018a09) graphic2_pages_pane

0xe0cb,	// (0x00018a4f) grid_graphic2_control_pane_ParamLimits

0xe0cb,	// (0x00018a4f) grid_graphic2_control_pane

0xe0f9,	// (0x00018a7d) grid_graphic2_pane_ParamLimits

0xe0f9,	// (0x00018a7d) grid_graphic2_pane

0xe159,	// (0x00018add) cell_graphic2_pane

0x6863,	// (0x000111e7) main_comp_mode_pane

0xd274,	// (0x00017bf8) list_ai3_gene_pane_ParamLimits

0xd6a1,	// (0x00018025) bg_popup_window_pane_cp19_ParamLimits

0xd6ad,	// (0x00018031) bg_touch_area_indi_pane_ParamLimits

0xd6ad,	// (0x00018031) bg_touch_area_indi_pane

0xd6c3,	// (0x00018047) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6c3,	// (0x00018047) bg_touch_area_indi_pane_cp01

0xd6d9,	// (0x0001805d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6d9,	// (0x0001805d) bg_touch_area_indi_pane_cp02

0xd6f1,	// (0x00018075) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6f1,	// (0x00018075) bg_touch_area_indi_pane_cp03

0xd70b,	// (0x0001808f) popup_slider_window_g1_ParamLimits

0xd727,	// (0x000180ab) popup_slider_window_g2_ParamLimits

0xd743,	// (0x000180c7) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x0001a672) popup_slider_window_g_ParamLimits

0xd79f,	// (0x00018123) popup_slider_window_t1_ParamLimits

0xd813,	// (0x00018197) small_volume_slider_vertical_pane_ParamLimits

0xe159,	// (0x00018add) cell_graphic2_pane_ParamLimits

0xe1a8,	// (0x00018b2c) bg_button_pane_cp10_ParamLimits

0xe1a8,	// (0x00018b2c) bg_button_pane_cp10

0xe1bb,	// (0x00018b3f) bg_button_pane_cp11_ParamLimits

0xe1bb,	// (0x00018b3f) bg_button_pane_cp11

0xe1ce,	// (0x00018b52) graphic2_pages_pane_g1_ParamLimits

0xe1ce,	// (0x00018b52) graphic2_pages_pane_g1

0xe1e9,	// (0x00018b6d) graphic2_pages_pane_g2_ParamLimits

0xe1e9,	// (0x00018b6d) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x0001a736) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x0001a736) graphic2_pages_pane_g

0xe201,	// (0x00018b85) graphic2_pages_pane_t1_ParamLimits

0xe201,	// (0x00018b85) graphic2_pages_pane_t1

0xe219,	// (0x00018b9d) cell_graphic2_control_pane_ParamLimits

0xe219,	// (0x00018b9d) cell_graphic2_control_pane

0xe233,	// (0x00018bb7) cell_graphic2_pane_g1_ParamLimits

0xe233,	// (0x00018bb7) cell_graphic2_pane_g1

0xe240,	// (0x00018bc4) cell_graphic2_pane_g2_ParamLimits

0xe240,	// (0x00018bc4) cell_graphic2_pane_g2

0xe24d,	// (0x00018bd1) cell_graphic2_pane_g3_ParamLimits

0xe24d,	// (0x00018bd1) cell_graphic2_pane_g3

0xe25a,	// (0x00018bde) cell_graphic2_pane_g4_ParamLimits

0xe25a,	// (0x00018bde) cell_graphic2_pane_g4

0xe267,	// (0x00018beb) cell_graphic2_pane_g5_ParamLimits

0xe267,	// (0x00018beb) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x0001a73b) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x0001a73b) cell_graphic2_pane_g

0xe282,	// (0x00018c06) cell_graphic2_pane_t1_ParamLimits

0xe282,	// (0x00018c06) cell_graphic2_pane_t1

0x9509,	// (0x00013e8d) grid_highlight_pane_cp11_ParamLimits

0x9509,	// (0x00013e8d) grid_highlight_pane_cp11

0x773e,	// (0x000120c2) bg_button_pane_cp05

0xe2ab,	// (0x00018c2f) cell_graphic2_control_pane_g1

0xbdcb,	// (0x0001674f) bg_touch_area_indi_pane_g1

0xe2b8,	// (0x00018c3c) aid_cmod_rocker_key_size

0xe2c2,	// (0x00018c46) aid_cmode_itu_key_size

0xe2ed,	// (0x00018c71) main_cmode_video_pane

0xe2f7,	// (0x00018c7b) main_comp_mode_itu_pane

0xe303,	// (0x00018c87) main_comp_mode_rocker_pane

0xe30f,	// (0x00018c93) cell_cmode_rocker_pane_ParamLimits

0xe30f,	// (0x00018c93) cell_cmode_rocker_pane

0xe321,	// (0x00018ca5) cell_cmode_itu_pane_ParamLimits

0xe321,	// (0x00018ca5) cell_cmode_itu_pane

0x773e,	// (0x000120c2) bg_button_pane_cp06_ParamLimits

0x773e,	// (0x000120c2) bg_button_pane_cp06

0xc05d,	// (0x000169e1) cell_cmode_rocker_pane_g1_ParamLimits

0xc05d,	// (0x000169e1) cell_cmode_rocker_pane_g1

0xd8b7,	// (0x0001823b) cell_cmode_rocker_pane_g2_ParamLimits

0xd8b7,	// (0x0001823b) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x0001a74b) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x0001a74b) cell_cmode_rocker_pane_g

0x6863,	// (0x000111e7) bg_button_pane_cp07

0xe336,	// (0x00018cba) cell_cmode_itu_pane_g1

0xe33f,	// (0x00018cc3) cell_cmode_itu_pane_t1

0xe34d,	// (0x00018cd1) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x0001a750) cell_cmode_itu_pane_t

0xdada,	// (0x0001845e) aid_touch_ctrl_left

0xdae2,	// (0x00018466) aid_touch_ctrl_right

0x6863,	// (0x000111e7) compa_mode_pane

0xe35b,	// (0x00018cdf) aid_cmod_rocker_key_size_cp

0xe365,	// (0x00018ce9) aid_cmode_itu_key_size_cp

0xe36f,	// (0x00018cf3) compa_mode_pane_g1

0xe377,	// (0x00018cfb) compa_mode_pane_g2

0xe37f,	// (0x00018d03) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x0001a755) compa_mode_pane_g

0xe387,	// (0x00018d0b) main_comp_mode_itu_pane_cp

0xe38f,	// (0x00018d13) main_comp_mode_rocker_pane_cp

0xe397,	// (0x00018d1b) cell_cmode_itu_pane_cp_ParamLimits

0xe397,	// (0x00018d1b) cell_cmode_itu_pane_cp

0xe3ac,	// (0x00018d30) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ac,	// (0x00018d30) cell_cmode_rocker_pane_cp

0x773e,	// (0x000120c2) bg_button_pane_cp06_cp_ParamLimits

0x773e,	// (0x000120c2) bg_button_pane_cp06_cp

0xc05d,	// (0x000169e1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc05d,	// (0x000169e1) cell_cmode_rocker_pane_g1_cp

0xbdcb,	// (0x0001674f) cell_cmode_rocker_pane_g2_cp

0x6863,	// (0x000111e7) bg_button_pane_cp07_cp

0xaa27,	// (0x000153ab) cell_cmode_itu_pane_g1_cp

0xe3be,	// (0x00018d42) cell_cmode_itu_pane_t1_cp

0xe3be,	// (0x00018d42) cell_cmode_itu_pane_t2_cp

0xaa14,	// (0x00015398) settings_code_pane_cp2

0x6957,	// (0x000112db) bg_popup_window_pane_cp3_ParamLimits

0x6dd4,	// (0x00011758) heading_pane_cp3_ParamLimits

0x6de0,	// (0x00011764) listscroll_popup_graphic_pane_ParamLimits

0x5b85,	// (0x00010509) fep_hwr_aid_pane_ParamLimits

0x5ffd,	// (0x00010981) aid_touch_sctrl_top_ParamLimits

0x6018,	// (0x0001099c) sctrl_sk_top_pane_g1_ParamLimits

0x5ddc,	// (0x00010760) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x0001a68b) sctrl_sk_top_pane_g_ParamLimits

0x6025,	// (0x000109a9) sctrl_sk_top_pane_t1_ParamLimits

0x5ffd,	// (0x00010981) aid_touch_sctrl_bottom_ParamLimits

0x6025,	// (0x000109a9) sctrl_sk_bottom_pane_t1_ParamLimits

0xda23,	// (0x000183a7) aid_area_touch_clock

0x6211,	// (0x00010b95) aid_vkb2_area_top_pane_cell_ParamLimits

0x6211,	// (0x00010b95) aid_vkb2_area_top_pane_cell

0x635c,	// (0x00010ce0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x635c,	// (0x00010ce0) aid_vkb2_area_bottom_pane_cell

0xdf92,	// (0x00018916) popup_char_count_window

0xe3cc,	// (0x00018d50) popup_char_count_window_g1

0xe3d5,	// (0x00018d59) popup_char_count_window_g2

0xe3de,	// (0x00018d62) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x0001a75c) popup_char_count_window_g

0xe3e7,	// (0x00018d6b) popup_char_count_window_t1

0x60d7,	// (0x00010a5b) popup_fep_char_preview_window_ParamLimits

0x60d7,	// (0x00010a5b) popup_fep_char_preview_window

0x622f,	// (0x00010bb3) vkb2_top_candi_pane_ParamLimits

0x622f,	// (0x00010bb3) vkb2_top_candi_pane

0xe3f5,	// (0x00018d79) cell_vkb2_top_candi_pane_ParamLimits

0xe3f5,	// (0x00018d79) cell_vkb2_top_candi_pane

0x663f,	// (0x00010fc3) bg_popup_fep_char_preview_window_ParamLimits

0x663f,	// (0x00010fc3) bg_popup_fep_char_preview_window

0x664d,	// (0x00010fd1) popup_fep_char_preview_window_t1_ParamLimits

0x664d,	// (0x00010fd1) popup_fep_char_preview_window_t1

0xe442,	// (0x00018dc6) bg_popup_fep_char_preview_window_g1

0xe44a,	// (0x00018dce) bg_popup_fep_char_preview_window_g2

0xe452,	// (0x00018dd6) bg_popup_fep_char_preview_window_g3

0xe45a,	// (0x00018dde) bg_popup_fep_char_preview_window_g4

0xe462,	// (0x00018de6) bg_popup_fep_char_preview_window_g5

0x6687,	// (0x0001100b) bg_popup_fep_char_preview_window_g6

0xe46a,	// (0x00018dee) bg_popup_fep_char_preview_window_g7

0xe472,	// (0x00018df6) bg_popup_fep_char_preview_window_g8

0xe47a,	// (0x00018dfe) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x0001a763) bg_popup_fep_char_preview_window_g

0x5ddc,	// (0x00010760) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5ddc,	// (0x00010760) cell_vkb2_top_candi_pane_g1

0x5dea,	// (0x0001076e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5dea,	// (0x0001076e) cell_vkb2_top_candi_pane_g2

0xe2cc,	// (0x00018c50) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe2cc,	// (0x00018c50) cell_vkb2_top_candi_pane_g3

0x668f,	// (0x00011013) cell_vkb2_top_candi_pane_g4_ParamLimits

0x668f,	// (0x00011013) cell_vkb2_top_candi_pane_g4

0xc682,	// (0x00017006) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc682,	// (0x00017006) cell_vkb2_top_candi_pane_g5

0x66b0,	// (0x00011034) cell_vkb2_top_candi_pane_g6_ParamLimits

0x66b0,	// (0x00011034) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x0001a776) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x0001a776) cell_vkb2_top_candi_pane_g

0x66be,	// (0x00011042) cell_vkb2_top_candi_pane_t1

0x59e5,	// (0x00010369) aid_size_touch_slider_mark_ParamLimits

0x59e5,	// (0x00010369) aid_size_touch_slider_mark

0xe0bb,	// (0x00018a3f) grid_graphic2_catg_pane_ParamLimits

0xe0bb,	// (0x00018a3f) grid_graphic2_catg_pane

0xe135,	// (0x00018ab9) popup_grid_graphic2_window_t1_ParamLimits

0xe135,	// (0x00018ab9) popup_grid_graphic2_window_t1

0xe147,	// (0x00018acb) popup_grid_graphic2_window_t2_ParamLimits

0xe147,	// (0x00018acb) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x0001a731) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x0001a731) popup_grid_graphic2_window_t

0x773e,	// (0x000120c2) bg_button_pane_cp05_ParamLimits

0xe2ab,	// (0x00018c2f) cell_graphic2_control_pane_g1_ParamLimits

0xe482,	// (0x00018e06) cell_graphic2_catg_pane_ParamLimits

0xe482,	// (0x00018e06) cell_graphic2_catg_pane

0x6863,	// (0x000111e7) bg_button_pane_cp12

0xe494,	// (0x00018e18) cell_graphic2_catg_pane_g1

0xd9ef,	// (0x00018373) cell_tb_ext_pane_t1_ParamLimits

0x6479,	// (0x00010dfd) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6479,	// (0x00010dfd) vkb2_top_cell_right_narrow_pane

0x6491,	// (0x00010e15) vkb2_top_cell_right_wide_pane_ParamLimits

0x6491,	// (0x00010e15) vkb2_top_cell_right_wide_pane

0x5b77,	// (0x000104fb) bg_vkb2_func_pane_ParamLimits

0x5b77,	// (0x000104fb) bg_vkb2_func_pane

0x6502,	// (0x00010e86) vkb2_top_cell_left_pane_g1_ParamLimits

0x5b77,	// (0x000104fb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5b77,	// (0x000104fb) bg_vkb2_fuc_pane_cp03

0x6560,	// (0x00010ee4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x93f7,	// (0x00013d7b) bg_vkb2_func_pane_g1

0x93ff,	// (0x00013d83) bg_vkb2_func_pane_g2

0x940f,	// (0x00013d93) bg_vkb2_func_pane_g3

0x9407,	// (0x00013d8b) bg_vkb2_func_pane_g4

0x9417,	// (0x00013d9b) bg_vkb2_func_pane_g5

0x941f,	// (0x00013da3) bg_vkb2_func_pane_g6

0x9427,	// (0x00013dab) bg_vkb2_func_pane_g7

0x942f,	// (0x00013db3) bg_vkb2_func_pane_g8

0x93ef,	// (0x00013d73) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x0001a783) bg_vkb2_func_pane_g

0x5b77,	// (0x000104fb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5b77,	// (0x000104fb) bg_vkb2_fuc_pane_cp01

0x6502,	// (0x00010e86) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6502,	// (0x00010e86) vkb2_top_cell_right_wide_pane_g1

0x5b77,	// (0x000104fb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5b77,	// (0x000104fb) bg_vkb2_fuc_pane_cp02

0x6560,	// (0x00010ee4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6560,	// (0x00010ee4) vkb2_top_cell_right_narrow_pane_g1

0xd625,	// (0x00017fa9) aid_touch_area_decrease_ParamLimits

0xd625,	// (0x00017fa9) aid_touch_area_decrease

0xd643,	// (0x00017fc7) aid_touch_area_increase_ParamLimits

0xd643,	// (0x00017fc7) aid_touch_area_increase

0xd64f,	// (0x00017fd3) aid_touch_area_mute_ParamLimits

0xd64f,	// (0x00017fd3) aid_touch_area_mute

0xd673,	// (0x00017ff7) aid_touch_area_slider_ParamLimits

0xd673,	// (0x00017ff7) aid_touch_area_slider

0xd75f,	// (0x000180e3) popup_slider_window_g4_ParamLimits

0xd75f,	// (0x000180e3) popup_slider_window_g4

0xd76b,	// (0x000180ef) popup_slider_window_g5_ParamLimits

0xd76b,	// (0x000180ef) popup_slider_window_g5

0xd78d,	// (0x00018111) popup_slider_window_g6_ParamLimits

0xd78d,	// (0x00018111) popup_slider_window_g6

0xd7cd,	// (0x00018151) popup_slider_window_t2_ParamLimits

0xd7cd,	// (0x00018151) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x0001a67f) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x0001a67f) popup_slider_window_t

0xd7e5,	// (0x00018169) slider_pane_ParamLimits

0xd7e5,	// (0x00018169) slider_pane

0xe49d,	// (0x00018e21) slider_pane_g1_ParamLimits

0xe49d,	// (0x00018e21) slider_pane_g1

0xe4b1,	// (0x00018e35) slider_pane_g2_ParamLimits

0xe4b1,	// (0x00018e35) slider_pane_g2

0xe4c7,	// (0x00018e4b) slider_pane_g3_ParamLimits

0xe4c7,	// (0x00018e4b) slider_pane_g3

0x0003,

0xfe12,	// (0x0001a796) slider_pane_g_ParamLimits

0xfe12,	// (0x0001a796) slider_pane_g

0x8def,	// (0x00013773) popup_tb_float_extension_window_ParamLimits

0x8def,	// (0x00013773) popup_tb_float_extension_window

0xe4f3,	// (0x00018e77) aid_size_cell_tb_float_ext

0x6863,	// (0x000111e7) bg_popup_sub_window_cp28

0xe4ff,	// (0x00018e83) grid_tb_float_ext_pane

0xe509,	// (0x00018e8d) cell_tb_float_ext_pane_ParamLimits

0xe509,	// (0x00018e8d) cell_tb_float_ext_pane

0xe523,	// (0x00018ea7) cell_tb_float_ext_pane_g1

0xe52c,	// (0x00018eb0) grid_highlight_pane_cp12

0x5cc6,	// (0x0001064a) cell_last_hwr_side_pane_ParamLimits

0x5cc6,	// (0x0001064a) cell_last_hwr_side_pane

0xbdcb,	// (0x0001674f) cell_last_hwr_side_pane_g1

0xe535,	// (0x00018eb9) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x0001a79f) cell_last_hwr_side_pane_g

0x6428,	// (0x00010dac) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6428,	// (0x00010dac) vkb2_area_bottom_space_btn_pane

0x5ddc,	// (0x00010760) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe047,	// (0x000189cb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x66be,	// (0x00011042) cell_vkb2_top_candi_pane_t1_ParamLimits

0x66dd,	// (0x00011061) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x66dd,	// (0x00011061) vkb2_area_bottom_space_btn_pane_g1

0x6717,	// (0x0001109b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6717,	// (0x0001109b) vkb2_area_bottom_space_btn_pane_g2

0x674d,	// (0x000110d1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x674d,	// (0x000110d1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x0001a7a4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x0001a7a4) vkb2_area_bottom_space_btn_pane_g

0x5c3a,	// (0x000105be) cel_fep_hwr_func_pane_ParamLimits

0x5c3a,	// (0x000105be) cel_fep_hwr_func_pane

0x5c76,	// (0x000105fa) cell_hwr_side_button_pane_ParamLimits

0x5c76,	// (0x000105fa) cell_hwr_side_button_pane

0xda23,	// (0x000183a7) aid_area_touch_clock_ParamLimits

0x6bfa,	// (0x0001157e) bg_uniindi_top_pane_ParamLimits

0xda35,	// (0x000183b9) uniindi_top_pane_g1_ParamLimits

0xda4b,	// (0x000183cf) uniindi_top_pane_g2_ParamLimits

0xda57,	// (0x000183db) uniindi_top_pane_g3_ParamLimits

0xda68,	// (0x000183ec) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x0001a6b7) uniindi_top_pane_g_ParamLimits

0xda75,	// (0x000183f9) uniindi_top_pane_t1_ParamLimits

0x6bfa,	// (0x0001157e) bg_vkb2_func_pane_cp01_ParamLimits

0x6bfa,	// (0x0001157e) bg_vkb2_func_pane_cp01

0xe53e,	// (0x00018ec2) cel_fep_hwr_func_pane_g1_ParamLimits

0xe53e,	// (0x00018ec2) cel_fep_hwr_func_pane_g1

0x6bfa,	// (0x0001157e) bg_vkb2_func_pane_cp02_ParamLimits

0x6bfa,	// (0x0001157e) bg_vkb2_func_pane_cp02

0xe53e,	// (0x00018ec2) cell_hwr_side_button_pane_g1_ParamLimits

0xe53e,	// (0x00018ec2) cell_hwr_side_button_pane_g1

0x9236,	// (0x00013bba) status_pane_g4_ParamLimits

0x9236,	// (0x00013bba) status_pane_g4

0x9250,	// (0x00013bd4) status_pane_t1

0xbb04,	// (0x00016488) form2_midp_gauge_slider_cont_pane

0xbb0c,	// (0x00016490) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbb1e,	// (0x000164a2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbb30,	// (0x000164b4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf3,	// (0x0001a477) form2_midp_gauge_slider_pane_t_ParamLimits

0xbb42,	// (0x000164c6) form2_midp_slider_pane_ParamLimits

0x6097,	// (0x00010a1b) aid_size_cell_func_vkb2_ParamLimits

0x6097,	// (0x00010a1b) aid_size_cell_func_vkb2

0xe4df,	// (0x00018e63) slider_pane_g4_ParamLimits

0xe4df,	// (0x00018e63) slider_pane_g4

0x6797,	// (0x0001111b) form2_midp_gauge_slider_pane_t2_cp01

0x67a5,	// (0x00011129) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x67a5,	// (0x00011129) form2_midp_gauge_slider_pane_t3_cp01

0x67c2,	// (0x00011146) form2_midp_slider_pane_cp01

0x6863,	// (0x000111e7) navi_smil_pane

0xe577,	// (0x00018efb) navi_smil_pane_g1

0xe57f,	// (0x00018f03) navi_smil_pane_t1

0xe54c,	// (0x00018ed0) form2_midp_slider_pane_g1

0xe555,	// (0x00018ed9) form2_midp_slider_pane_g2

0xe55d,	// (0x00018ee1) form2_midp_slider_pane_g3

0xe54c,	// (0x00018ed0) form2_midp_slider_pane_g4

0xe565,	// (0x00018ee9) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x0001a7ad) form2_midp_slider_pane_g

0x6787,	// (0x0001110b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6787,	// (0x0001110b) vkb2_area_bottom_space_btn_pane_g4

0x906c,	// (0x000139f0) lc0_navi_pane_ParamLimits

0x906c,	// (0x000139f0) lc0_navi_pane

0x90e2,	// (0x00013a66) lc0_stat_indi_pane_ParamLimits

0x90e2,	// (0x00013a66) lc0_stat_indi_pane

0x90f9,	// (0x00013a7d) ls0_title_pane_ParamLimits

0x90f9,	// (0x00013a7d) ls0_title_pane

0x773e,	// (0x000120c2) bg_popup_sub_pane_cp14_ParamLimits

0xda0a,	// (0x0001838e) list_uniindi_pane_ParamLimits

0xda16,	// (0x0001839a) uniindi_top_pane_ParamLimits

0xdab2,	// (0x00018436) list_single_uniindi_pane_g1_ParamLimits

0xdac5,	// (0x00018449) list_single_uniindi_pane_t1_ParamLimits

0x67cb,	// (0x0001114f) lc0_stat_clock_pane_ParamLimits

0x67cb,	// (0x0001114f) lc0_stat_clock_pane

0xe58d,	// (0x00018f11) lc0_stat_indi_pane_g1_ParamLimits

0xe58d,	// (0x00018f11) lc0_stat_indi_pane_g1

0xe59a,	// (0x00018f1e) lc0_stat_indi_pane_g2_ParamLimits

0xe59a,	// (0x00018f1e) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x0001a7b8) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x0001a7b8) lc0_stat_indi_pane_g

0x67d8,	// (0x0001115c) lc0_uni_indicator_pane_ParamLimits

0x67d8,	// (0x0001115c) lc0_uni_indicator_pane

0xe5a7,	// (0x00018f2b) ls0_title_pane_g1_ParamLimits

0xe5a7,	// (0x00018f2b) ls0_title_pane_g1

0xe5bb,	// (0x00018f3f) ls0_title_pane_t1_ParamLimits

0xe5bb,	// (0x00018f3f) ls0_title_pane_t1

0x67e5,	// (0x00011169) lc0_uni_indicator_pane_g1_ParamLimits

0x67e5,	// (0x00011169) lc0_uni_indicator_pane_g1

0xe5f1,	// (0x00018f75) lc0_stat_clock_pane_t1

0x6863,	// (0x000111e7) main_ai5_pane

0xe5ff,	// (0x00018f83) ai5_sk_pane_ParamLimits

0xe5ff,	// (0x00018f83) ai5_sk_pane

0xe60c,	// (0x00018f90) cell_ai5_widget_pane_ParamLimits

0xe60c,	// (0x00018f90) cell_ai5_widget_pane

0xe68e,	// (0x00019012) aid_size_cell_widget_grid

0xe6a2,	// (0x00019026) bg_ai5_widget_pane_ParamLimits

0xe6a2,	// (0x00019026) bg_ai5_widget_pane

0xe6ca,	// (0x0001904e) cell_ai5_widget_pane_g2

0xe6da,	// (0x0001905e) cell_ai5_widget_pane_g3

0xe6f9,	// (0x0001907d) cell_ai5_widget_pane_g4

0xe705,	// (0x00019089) cell_ai5_widget_pane_g5

0xe711,	// (0x00019095) cell_ai5_widget_pane_g6

0xe71d,	// (0x000190a1) cell_ai5_widget_pane_g7

0xe765,	// (0x000190e9) cell_ai5_widget_pane_t1_ParamLimits

0xe765,	// (0x000190e9) cell_ai5_widget_pane_t1

0xe782,	// (0x00019106) cell_ai5_widget_pane_t2_ParamLimits

0xe782,	// (0x00019106) cell_ai5_widget_pane_t2

0xe79a,	// (0x0001911e) cell_ai5_widget_pane_t3_ParamLimits

0xe79a,	// (0x0001911e) cell_ai5_widget_pane_t3

0xe7b2,	// (0x00019136) cell_ai5_widget_pane_t4_ParamLimits

0xe7b2,	// (0x00019136) cell_ai5_widget_pane_t4

0xe7cc,	// (0x00019150) cell_ai5_widget_pane_t5_ParamLimits

0xe7cc,	// (0x00019150) cell_ai5_widget_pane_t5

0xe7eb,	// (0x0001916f) cell_ai5_widget_pane_t6_ParamLimits

0xe7eb,	// (0x0001916f) cell_ai5_widget_pane_t6

0xe7fd,	// (0x00019181) cell_ai5_widget_pane_t7_ParamLimits

0xe7fd,	// (0x00019181) cell_ai5_widget_pane_t7

0xe816,	// (0x0001919a) cell_ai5_widget_pane_t8_ParamLimits

0xe816,	// (0x0001919a) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0001a7d2) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0001a7d2) cell_ai5_widget_pane_t

0xe862,	// (0x000191e6) grid_ai5_widget_pane

0x773e,	// (0x000120c2) highlight_cell_ai5_widget_pane_ParamLimits

0x773e,	// (0x000120c2) highlight_cell_ai5_widget_pane

0xe87a,	// (0x000191fe) ai5_sk_left_pane

0xe884,	// (0x00019208) ai5_sk_middle_pane

0xe88e,	// (0x00019212) ai5_sk_right_pane

0xe898,	// (0x0001921c) bg_ai5_widget_pane_g1_ParamLimits

0xe898,	// (0x0001921c) bg_ai5_widget_pane_g1

0xe8a4,	// (0x00019228) bg_ai5_widget_pane_g2_ParamLimits

0xe8a4,	// (0x00019228) bg_ai5_widget_pane_g2

0xe8b0,	// (0x00019234) bg_ai5_widget_pane_g3_ParamLimits

0xe8b0,	// (0x00019234) bg_ai5_widget_pane_g3

0xe8bc,	// (0x00019240) bg_ai5_widget_pane_g4_ParamLimits

0xe8bc,	// (0x00019240) bg_ai5_widget_pane_g4

0xe8c8,	// (0x0001924c) bg_ai5_widget_pane_g5_ParamLimits

0xe8c8,	// (0x0001924c) bg_ai5_widget_pane_g5

0xe8d4,	// (0x00019258) bg_ai5_widget_pane_g6_ParamLimits

0xe8d4,	// (0x00019258) bg_ai5_widget_pane_g6

0xe8e0,	// (0x00019264) bg_ai5_widget_pane_g7_ParamLimits

0xe8e0,	// (0x00019264) bg_ai5_widget_pane_g7

0xe8ec,	// (0x00019270) bg_ai5_widget_pane_g8_ParamLimits

0xe8ec,	// (0x00019270) bg_ai5_widget_pane_g8

0xe8f8,	// (0x0001927c) bg_ai5_widget_pane_g9_ParamLimits

0xe8f8,	// (0x0001927c) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x0001a7e7) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x0001a7e7) bg_ai5_widget_pane_g

0xe92b,	// (0x000192af) cell_shortcut_ai5_widget_pane_ParamLimits

0xe92b,	// (0x000192af) cell_shortcut_ai5_widget_pane

0x6a3a,	// (0x000113be) bg_cell_shortcut_ai5_widget_pane

0xe93c,	// (0x000192c0) cell_grid_ai5_widget_pane_g1

0xe945,	// (0x000192c9) highlight_cell_shortcut_ai5_widget_pane

0x93f7,	// (0x00013d7b) ai5_sk_left_pane_g1

0xe94d,	// (0x000192d1) ai5_sk_left_pane_g2

0xe955,	// (0x000192d9) ai5_sk_left_pane_g3

0xe95d,	// (0x000192e1) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x0001a7fa) ai5_sk_left_pane_g

0xe965,	// (0x000192e9) ai5_sk_left_pane_t1

0x93ff,	// (0x00013d83) ai5_sk_right_pane_g1

0xe973,	// (0x000192f7) ai5_sk_right_pane_g2

0xe97b,	// (0x000192ff) ai5_sk_right_pane_g3

0xe983,	// (0x00019307) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0001a803) ai5_sk_right_pane_g

0xe98b,	// (0x0001930f) ai5_sk_right_pane_t1

0x93ff,	// (0x00013d83) ai5_sk_middle_pane_g1

0x93f7,	// (0x00013d7b) ai5_sk_middle_pane_g2

0x9417,	// (0x00013d9b) ai5_sk_middle_pane_g3

0xe97b,	// (0x000192ff) ai5_sk_middle_pane_g4

0xe955,	// (0x000192d9) ai5_sk_middle_pane_g5

0xe999,	// (0x0001931d) ai5_sk_middle_pane_g6

0xe9a1,	// (0x00019325) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x0001a80c) ai5_sk_middle_pane_g

0x8efc,	// (0x00013880) aid_touch_area_size_lc0_ParamLimits

0x8efc,	// (0x00013880) aid_touch_area_size_lc0

0x5e0b,	// (0x0001078f) cell_hwr_candidate_pane_t1_ParamLimits

0x8f18,	// (0x0001389c) aid_touch_navi_pane

0x91e0,	// (0x00013b64) status_dt_navi_pane_ParamLimits

0x91e0,	// (0x00013b64) status_dt_navi_pane

0x91ed,	// (0x00013b71) status_dt_sta_pane_ParamLimits

0x91ed,	// (0x00013b71) status_dt_sta_pane

0xe9a9,	// (0x0001932d) dt_sta_controll_pane

0xe9b6,	// (0x0001933a) dt_sta_indi_pane

0xe9c7,	// (0x0001934b) dt_sta_title_pane

0x6bfa,	// (0x0001157e) bg_dt_sta_indi_pane_ParamLimits

0x6bfa,	// (0x0001157e) bg_dt_sta_indi_pane

0xe9da,	// (0x0001935e) dt_sta_battery_pane

0xe9e2,	// (0x00019366) dt_sta_indi_pane_g1

0xe9eb,	// (0x0001936f) dt_sta_indi_pane_g2

0xe9f4,	// (0x00019378) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x0001a81b) dt_sta_indi_pane_g

0xe9fd,	// (0x00019381) dt_sta_signal_pane

0x773e,	// (0x000120c2) bg_dt_sta_title_pane_ParamLimits

0x773e,	// (0x000120c2) bg_dt_sta_title_pane

0xea06,	// (0x0001938a) dt_sta_title_pane_g1

0xea0e,	// (0x00019392) dt_sta_title_pane_t1_ParamLimits

0xea0e,	// (0x00019392) dt_sta_title_pane_t1

0x6863,	// (0x000111e7) bg_dt_sta_control_pane

0xea23,	// (0x000193a7) dt_sta_controll_pane_g1

0xea2c,	// (0x000193b0) bg_dt_sta_title_pane_g1

0xea35,	// (0x000193b9) bg_dt_sta_title_pane_g2

0xea3e,	// (0x000193c2) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0001a822) bg_dt_sta_title_pane_g

0xbdcb,	// (0x0001674f) bg_dt_sta_indi_pane_g1

0xea47,	// (0x000193cb) dt_sta_signal_pane_g1

0xea4f,	// (0x000193d3) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x0001a829) dt_sta_signal_pane_g

0xea57,	// (0x000193db) dt_sta_battery_pane_g1

0xea60,	// (0x000193e4) dt_sta_battery_pane_t1

0xbdcb,	// (0x0001674f) bg_dt_sta_control_pane_g1

0x8008,	// (0x0001298c) fep_china_uni_eep_pane

0x8010,	// (0x00012994) fep_china_uni_entry_pane_ParamLimits

0x8020,	// (0x000129a4) popup_fep_china_uni_window_g1_ParamLimits

0x8030,	// (0x000129b4) popup_fep_china_uni_window_g2_ParamLimits

0x8030,	// (0x000129b4) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001a0b4) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001a0b4) popup_fep_china_uni_window_g

0xea6f,	// (0x000193f3) fep_china_uni_eep_pane_g1

0xea77,	// (0x000193fb) fep_china_uni_eep_pane_t1

0xe56e,	// (0x00018ef2) aid_touch_area_size_smil_player

0x9064,	// (0x000139e8) lc0_clock_pane

0x9244,	// (0x00013bc8) status_pane_g5_ParamLimits

0x9244,	// (0x00013bc8) status_pane_g5

0x8ab4,	// (0x00013438) popup_keymap_window

0x9202,	// (0x00013b86) status_icon_pane

0xe6da,	// (0x0001905e) cell_ai5_widget_pane_g3_ParamLimits

0xe6f9,	// (0x0001907d) cell_ai5_widget_pane_g4_ParamLimits

0xe705,	// (0x00019089) cell_ai5_widget_pane_g5_ParamLimits

0xe729,	// (0x000190ad) cell_ai5_widget_pane_g8_ParamLimits

0xe729,	// (0x000190ad) cell_ai5_widget_pane_g8

0xe73d,	// (0x000190c1) cell_ai5_widget_pane_g9_ParamLimits

0xe73d,	// (0x000190c1) cell_ai5_widget_pane_g9

0xe751,	// (0x000190d5) cell_ai5_widget_pane_g10_ParamLimits

0xe751,	// (0x000190d5) cell_ai5_widget_pane_g10

0xea86,	// (0x0001940a) status_icon_pane_g1

0x6863,	// (0x000111e7) bg_popup_sub_pane_cp13

0xea8e,	// (0x00019412) popup_keymap_window_t1

0x8864,	// (0x000131e8) control_pane_g6_ParamLimits

0x8864,	// (0x000131e8) control_pane_g6

0x8871,	// (0x000131f5) control_pane_g7_ParamLimits

0x8871,	// (0x000131f5) control_pane_g7

0x887e,	// (0x00013202) control_pane_g8_ParamLimits

0x887e,	// (0x00013202) control_pane_g8

0xe9a9,	// (0x0001932d) dt_sta_controll_pane_ParamLimits

0xe9b6,	// (0x0001933a) dt_sta_indi_pane_ParamLimits

0xe9c7,	// (0x0001934b) dt_sta_title_pane_ParamLimits

0x7115,	// (0x00011a99) aid_size_touch_scroll_bar_cale

0x4e9c,	// (0x0000f820) popup_discreet_window_ParamLimits

0x4e9c,	// (0x0000f820) popup_discreet_window

0x4f24,	// (0x0000f8a8) popup_sk_window

0x9b24,	// (0x000144a8) bg_popup_sub_pane_cp28_ParamLimits

0x9b24,	// (0x000144a8) bg_popup_sub_pane_cp28

0xea9c,	// (0x00019420) popup_discreet_window_g1_ParamLimits

0xea9c,	// (0x00019420) popup_discreet_window_g1

0xeabc,	// (0x00019440) popup_discreet_window_t1_ParamLimits

0xeabc,	// (0x00019440) popup_discreet_window_t1

0xeada,	// (0x0001945e) popup_discreet_window_t2_ParamLimits

0xeada,	// (0x0001945e) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x0001a82e) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x0001a82e) popup_discreet_window_t

0x67f9,	// (0x0001117d) popup_sk_window_g1

0x6803,	// (0x00011187) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x0001a835) popup_sk_window_g

0xeb2c,	// (0x000194b0) popup_sk_window_t1

0xeb3a,	// (0x000194be) popup_sk_window_t1_copy1

0xe6ca,	// (0x0001904e) cell_ai5_widget_pane_g2_ParamLimits

0xe828,	// (0x000191ac) cell_ai5_widget_pane_t9_ParamLimits

0xe828,	// (0x000191ac) cell_ai5_widget_pane_t9

0x6863,	// (0x000111e7) main_fep_fshwr2_pane

0xeb48,	// (0x000194cc) aid_fshwr2_btn_pane

0xeb50,	// (0x000194d4) aid_fshwr2_syb_pane

0xeb58,	// (0x000194dc) aid_fshwr2_txt_pane

0xeb60,	// (0x000194e4) fshwr2_func_candi_pane

0xeb6c,	// (0x000194f0) fshwr2_hwr_syb_pane

0xeb78,	// (0x000194fc) fshwr2_icf_pane

0x6863,	// (0x000111e7) fshwr2_icf_bg_pane

0xeb96,	// (0x0001951a) fshwr2_icf_pane_t1_ParamLimits

0xeb96,	// (0x0001951a) fshwr2_icf_pane_t1

0xbdcb,	// (0x0001674f) fshwr2_func_candi_pane_g1

0xebad,	// (0x00019531) fshwr2_func_candi_row_pane_ParamLimits

0xebad,	// (0x00019531) fshwr2_func_candi_row_pane

0xebbe,	// (0x00019542) cell_fshwr2_syb_pane_ParamLimits

0xebbe,	// (0x00019542) cell_fshwr2_syb_pane

0xc05d,	// (0x000169e1) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc05d,	// (0x000169e1) fshwr2_hwr_syb_pane_g1

0x6863,	// (0x000111e7) bg_popup_call_pane_cp01

0xebd8,	// (0x0001955c) fshwr2_func_candi_cell_pane_ParamLimits

0xebd8,	// (0x0001955c) fshwr2_func_candi_cell_pane

0xec09,	// (0x0001958d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec09,	// (0x0001958d) fshwr2_func_candi_cell_bg_pane

0xec23,	// (0x000195a7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec23,	// (0x000195a7) fshwr2_func_candi_cell_pane_g1

0xec4b,	// (0x000195cf) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec4b,	// (0x000195cf) fshwr2_func_candi_cell_pane_t1

0x6863,	// (0x000111e7) bg_button_pane_cp08

0x858d,	// (0x00012f11) cell_fshwr2_syb_bg_pane

0xec5e,	// (0x000195e2) cell_fshwr2_syb_bg_pane_g1

0xec66,	// (0x000195ea) cell_fshwr2_syb_bg_pane_t1

0x773e,	// (0x000120c2) main_tmo_pane

0xa639,	// (0x00014fbd) uni_indicator_pane_g1_ParamLimits

0xa64e,	// (0x00014fd2) uni_indicator_pane_g2_ParamLimits

0xa664,	// (0x00014fe8) uni_indicator_pane_g3_ParamLimits

0xa67a,	// (0x00014ffe) uni_indicator_pane_g4_ParamLimits

0xa67a,	// (0x00014ffe) uni_indicator_pane_g4

0xa68e,	// (0x00015012) uni_indicator_pane_g5_ParamLimits

0xa68e,	// (0x00015012) uni_indicator_pane_g5

0xa6a2,	// (0x00015026) uni_indicator_pane_g6_ParamLimits

0xa6a2,	// (0x00015026) uni_indicator_pane_g6

0xf92d,	// (0x0001a2b1) uni_indicator_pane_g_ParamLimits

0xd601,	// (0x00017f85) popup_tmo_note_window_ParamLimits

0xd601,	// (0x00017f85) popup_tmo_note_window

0x6863,	// (0x000111e7) fshwr2_bg_pane

0xec3c,	// (0x000195c0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec3c,	// (0x000195c0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x0001a83a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x0001a83a) fshwr2_func_candi_cell_pane_g

0xbdcb,	// (0x0001674f) bg_popup_window_pane_cp01

0xec75,	// (0x000195f9) bg_popup_window_pane_g1_cp01

0xec7e,	// (0x00019602) bg_popup_window_pane_cp22_ParamLimits

0xec7e,	// (0x00019602) bg_popup_window_pane_cp22

0xec8c,	// (0x00019610) listscroll_tmo_link_pane_ParamLimits

0xec8c,	// (0x00019610) listscroll_tmo_link_pane

0xeccc,	// (0x00019650) popup_tmo_note_window_g1_ParamLimits

0xeccc,	// (0x00019650) popup_tmo_note_window_g1

0xecd9,	// (0x0001965d) tmo_note_info_pane_ParamLimits

0xecd9,	// (0x0001965d) tmo_note_info_pane

0xecf3,	// (0x00019677) list_tmo_note_info_pane_g1_ParamLimits

0xecf3,	// (0x00019677) list_tmo_note_info_pane_g1

0xed0a,	// (0x0001968e) list_tmo_note_info_pane_g2_ParamLimits

0xed0a,	// (0x0001968e) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x0001a83f) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x0001a83f) list_tmo_note_info_pane_g

0xed26,	// (0x000196aa) list_tmo_note_info_text_pane_ParamLimits

0xed26,	// (0x000196aa) list_tmo_note_info_text_pane

0xeda7,	// (0x0001972b) list_tmo_link_pane

0xedb4,	// (0x00019738) scroll_pane_cp20

0xedc1,	// (0x00019745) list_single_tmo_link_pane_ParamLimits

0xedc1,	// (0x00019745) list_single_tmo_link_pane

0xedd1,	// (0x00019755) list_single_tmo_link_pane_t1

0xeddf,	// (0x00019763) list_tmo_note_info_text_pane_t1_ParamLimits

0xeddf,	// (0x00019763) list_tmo_note_info_text_pane_t1

0x7981,	// (0x00012305) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7981,	// (0x00012305) aid_size_touch_scroll_bar_cp01

0x77f6,	// (0x0001217a) aid_size_touch_slider_marker

0x4f0c,	// (0x0000f890) popup_settings_window_ParamLimits

0x4f0c,	// (0x0000f890) popup_settings_window

0x893f,	// (0x000132c3) popup_candi_list_indi_window

0x8f18,	// (0x0001389c) aid_touch_navi_pane_ParamLimits

0x5fd1,	// (0x00010955) rs_clock_indi_pane

0x5fda,	// (0x0001095e) sctrl_sk_bottom_pane_ParamLimits

0x5feb,	// (0x0001096f) sctrl_sk_top_pane_ParamLimits

0x60f1,	// (0x00010a75) popup_fep_tooltip_window

0xe68e,	// (0x00019012) aid_size_cell_widget_grid_ParamLimits

0xe6be,	// (0x00019042) cell_ai5_widget_pane_g1_ParamLimits

0xe6be,	// (0x00019042) cell_ai5_widget_pane_g1

0xe711,	// (0x00019095) cell_ai5_widget_pane_g6_ParamLimits

0xe71d,	// (0x000190a1) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x0001a7bd) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0001a7bd) cell_ai5_widget_pane_g

0xe84c,	// (0x000191d0) cell_ai5_widget_pane_t10_ParamLimits

0xe84c,	// (0x000191d0) cell_ai5_widget_pane_t10

0xe862,	// (0x000191e6) grid_ai5_widget_pane_ParamLimits

0xe904,	// (0x00019288) cell_contacts_ai5_widget_pane_ParamLimits

0xe904,	// (0x00019288) cell_contacts_ai5_widget_pane

0xeaef,	// (0x00019473) popup_discreet_window_t3_ParamLimits

0xeaef,	// (0x00019473) popup_discreet_window_t3

0xeb82,	// (0x00019506) popup_fshwr2_char_preview_window_ParamLimits

0xeb82,	// (0x00019506) popup_fshwr2_char_preview_window

0xed44,	// (0x000196c8) tmo_note_info_pane_t1

0xed59,	// (0x000196dd) tmo_note_info_pane_t2

0xed6e,	// (0x000196f2) tmo_note_info_pane_t3

0xed83,	// (0x00019707) tmo_note_info_pane_t4

0xed95,	// (0x00019719) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0001a844) tmo_note_info_pane_t

0xeda7,	// (0x0001972b) list_tmo_link_pane_ParamLimits

0xedb4,	// (0x00019738) scroll_pane_cp20_ParamLimits

0x6863,	// (0x000111e7) bg_popup_fep_char_preview_window_cp01

0xedf8,	// (0x0001977c) popup_fshwr2_char_preview_window_t1

0xee06,	// (0x0001978a) popup_candi_list_indi_window_g1

0xee0f,	// (0x00019793) bg_cell_contacts_ai5_widget_pane

0xee1b,	// (0x0001979f) cell_contacts_ai5_widget_pane_g1

0xee2f,	// (0x000197b3) cell_contacts_ai5_widget_pane_g2

0xee3e,	// (0x000197c2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x0001a84f) cell_contacts_ai5_widget_pane_g

0xee51,	// (0x000197d5) cell_contacts_ai5_widget_pane_t1

0x773e,	// (0x000120c2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeecb,	// (0x0001984f) settings_container_pane

0x858d,	// (0x00012f11) listscroll_set_pane_copy1

0xb2aa,	// (0x00015c2e) scroll_pane_cp121_copy1

0xeed7,	// (0x0001985b) set_content_pane_copy1

0xeedf,	// (0x00019863) aid_height_set_list_copy1_ParamLimits

0xeedf,	// (0x00019863) aid_height_set_list_copy1

0xa8c2,	// (0x00015246) aid_size_parent_copy1_ParamLimits

0xa8c2,	// (0x00015246) aid_size_parent_copy1

0xeeeb,	// (0x0001986f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeeeb,	// (0x0001986f) button_value_adjust_pane_cp6_copy1

0x8917,	// (0x0001329b) list_highlight_pane_cp2_copy1_ParamLimits

0x8917,	// (0x0001329b) list_highlight_pane_cp2_copy1

0xeeff,	// (0x00019883) list_set_pane_copy1_ParamLimits

0xeeff,	// (0x00019883) list_set_pane_copy1

0xee66,	// (0x000197ea) main_pane_set_t1_copy1_ParamLimits

0xee66,	// (0x000197ea) main_pane_set_t1_copy1

0xeea0,	// (0x00019824) main_pane_set_t2_copy1_ParamLimits

0xeea0,	// (0x00019824) main_pane_set_t2_copy1

0xefac,	// (0x00019930) main_pane_set_t3_copy1

0xefba,	// (0x0001993e) main_pane_set_t4_copy1

0xeebf,	// (0x00019843) set_content_pane_g1_copy1_ParamLimits

0xeebf,	// (0x00019843) set_content_pane_g1_copy1

0xefc8,	// (0x0001994c) setting_code_pane_copy1

0xefd2,	// (0x00019956) setting_slider_graphic_pane_copy1

0xefd2,	// (0x00019956) setting_slider_pane_copy1

0xefd2,	// (0x00019956) setting_text_pane_copy1

0xefdc,	// (0x00019960) setting_volume_pane_copy1

0xefe5,	// (0x00019969) settings_code_pane_cp2_copy1

0xefed,	// (0x00019971) settings_code_pane_cp_copy1_ParamLimits

0xefed,	// (0x00019971) settings_code_pane_cp_copy1

0xf001,	// (0x00019985) volume_set_pane_copy1

0xf009,	// (0x0001998d) volume_set_pane_g10_copy1

0xf011,	// (0x00019995) volume_set_pane_g1_copy1

0xf019,	// (0x0001999d) volume_set_pane_g2_copy1

0xf021,	// (0x000199a5) volume_set_pane_g3_copy1

0xf029,	// (0x000199ad) volume_set_pane_g4_copy1

0xf031,	// (0x000199b5) volume_set_pane_g5_copy1

0xf039,	// (0x000199bd) volume_set_pane_g6_copy1

0xf041,	// (0x000199c5) volume_set_pane_g7_copy1

0xf049,	// (0x000199cd) volume_set_pane_g8_copy1

0xf051,	// (0x000199d5) volume_set_pane_g9_copy1

0x6957,	// (0x000112db) bg_set_opt_pane_cp_copy1_ParamLimits

0x6957,	// (0x000112db) bg_set_opt_pane_cp_copy1

0xf059,	// (0x000199dd) setting_slider_pane_t1_copy1_ParamLimits

0xf059,	// (0x000199dd) setting_slider_pane_t1_copy1

0xf077,	// (0x000199fb) setting_slider_pane_t2_copy1_ParamLimits

0xf077,	// (0x000199fb) setting_slider_pane_t2_copy1

0xf091,	// (0x00019a15) setting_slider_pane_t3_copy1_ParamLimits

0xf091,	// (0x00019a15) setting_slider_pane_t3_copy1

0xf0a9,	// (0x00019a2d) slider_set_pane_copy1_ParamLimits

0xf0a9,	// (0x00019a2d) slider_set_pane_copy1

0x7876,	// (0x000121fa) set_opt_bg_pane_g1_copy2

0x787e,	// (0x00012202) set_opt_bg_pane_g2_copy2

0xf0bf,	// (0x00019a43) set_opt_bg_pane_g3_copy2

0x788e,	// (0x00012212) set_opt_bg_pane_g4_copy2

0x7896,	// (0x0001221a) set_opt_bg_pane_g5_copy2

0x789e,	// (0x00012222) set_opt_bg_pane_g6_copy2

0xf0c9,	// (0x00019a4d) set_opt_bg_pane_g7_copy2

0xf0d1,	// (0x00019a55) set_opt_bg_pane_g8_copy2

0xf0db,	// (0x00019a5f) set_opt_bg_pane_g9_copy2

0x680d,	// (0x00011191) aid_size_touch_slider_mark_copy1_ParamLimits

0x680d,	// (0x00011191) aid_size_touch_slider_mark_copy1

0xf0e5,	// (0x00019a69) slider_set_pane_g1_copy1

0x6821,	// (0x000111a5) slider_set_pane_g2_copy1

0x5a05,	// (0x00010389) slider_set_pane_g3_copy1_ParamLimits

0x5a05,	// (0x00010389) slider_set_pane_g3_copy1

0x5a19,	// (0x0001039d) slider_set_pane_g4_copy1_ParamLimits

0x5a19,	// (0x0001039d) slider_set_pane_g4_copy1

0x5a31,	// (0x000103b5) slider_set_pane_g5_copy1_ParamLimits

0x5a31,	// (0x000103b5) slider_set_pane_g5_copy1

0x5a05,	// (0x00010389) slider_set_pane_g6_copy1_ParamLimits

0x5a05,	// (0x00010389) slider_set_pane_g6_copy1

0x6829,	// (0x000111ad) slider_set_pane_g7_copy1_ParamLimits

0x6829,	// (0x000111ad) slider_set_pane_g7_copy1

0x6877,	// (0x000111fb) bg_set_opt_pane_cp2_copy1

0xf0ee,	// (0x00019a72) setting_slider_graphic_pane_g1_copy1

0xf0f7,	// (0x00019a7b) setting_slider_graphic_pane_t1_copy1

0xf107,	// (0x00019a8b) setting_slider_graphic_pane_t2_copy1

0xf117,	// (0x00019a9b) slider_set_pane_cp_copy1

0xf127,	// (0x00019aab) input_focus_pane_cp1_copy1

0xf130,	// (0x00019ab4) list_set_text_pane_copy1

0xf138,	// (0x00019abc) setting_text_pane_g1_copy1

0x69b0,	// (0x00011334) set_text_pane_t1_copy1

0xf127,	// (0x00019aab) input_focus_pane_cp2_copy1

0xf138,	// (0x00019abc) setting_code_pane_g1_copy1

0xf141,	// (0x00019ac5) setting_code_pane_t1_copy1

0xf14f,	// (0x00019ad3) list_set_graphic_pane_copy1

0x6877,	// (0x000111fb) bg_set_opt_pane_cp4_copy1

0x8293,	// (0x00012c17) list_set_graphic_pane_g1_copy1_ParamLimits

0x8293,	// (0x00012c17) list_set_graphic_pane_g1_copy1

0xf161,	// (0x00019ae5) list_set_graphic_pane_g2_copy1

0x82ab,	// (0x00012c2f) list_set_graphic_pane_t1_copy1_ParamLimits

0x82ab,	// (0x00012c2f) list_set_graphic_pane_t1_copy1

0xbdcb,	// (0x0001674f) rs_clock_indi_pane_g1

0xf169,	// (0x00019aed) rs_clock_indi_pane_t1

0xe9da,	// (0x0001935e) rs_indi_pane

0xf177,	// (0x00019afb) rs_indi_pane_g1

0xf180,	// (0x00019b04) rs_indi_pane_g2

0xf189,	// (0x00019b0d) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x0001a856) rs_indi_pane_g

0x858d,	// (0x00012f11) bg_popup_preview_window_pane_cp03

0xf192,	// (0x00019b16) popup_fep_tooltip_window_t1

0xcc50,	// (0x000175d4) popup_note2_window_g2_ParamLimits

0xcc50,	// (0x000175d4) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x0001a5ef) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x0001a5ef) popup_note2_window_g

0xd23a,	// (0x00017bbe) bg_popup_sub_pane_cp11_ParamLimits

0xd247,	// (0x00017bcb) cell_ai3_links_pane_g1_ParamLimits

0xd25e,	// (0x00017be2) cell_ai3_links_pane_t1

0x69b0,	// (0x00011334) set_text_pane_t1_copy1_ParamLimits

0x849e,	// (0x00012e22) cell_graphic_popup_pane_cp2_ParamLimits

0x849e,	// (0x00012e22) cell_graphic_popup_pane_cp2

0xf1a0,	// (0x00019b24) cell_graphic_popup_pane_g1_cp2

0x6f28,	// (0x000118ac) cell_graphic_popup_pane_g2_cp2

0xf1a8,	// (0x00019b2c) cell_graphic_popup_pane_g3_cp2

0xf1b0,	// (0x00019b34) cell_graphic_popup_pane_t2_cp2

0x6f39,	// (0x000118bd) grid_highlight_pane_cp3_cp2

0x7c65,	// (0x000125e9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x773e,	// (0x000120c2) main_tmo_pane_ParamLimits

0xd5f5,	// (0x00017f79) popup_tmo_big_image_note_window

0xe6ae,	// (0x00019032) cell_ai5_widget_list_pane

0xe6b6,	// (0x0001903a) cell_ai5_widget_lrg_icon_pane

0xed44,	// (0x000196c8) tmo_note_info_pane_t1_ParamLimits

0xed59,	// (0x000196dd) tmo_note_info_pane_t2_ParamLimits

0xed6e,	// (0x000196f2) tmo_note_info_pane_t3_ParamLimits

0xed83,	// (0x00019707) tmo_note_info_pane_t4_ParamLimits

0xed95,	// (0x00019719) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0001a844) tmo_note_info_pane_t_ParamLimits

0xeecb,	// (0x0001984f) settings_container_pane_ParamLimits

0xf11f,	// (0x00019aa3) indicator_popup_pane_cp5

0xf11f,	// (0x00019aa3) indicator_popup_pane_cp6

0xf14f,	// (0x00019ad3) list_set_graphic_pane_copy1_ParamLimits

0x6863,	// (0x000111e7) bg_popup_window_pane_cp23

0xf1be,	// (0x00019b42) popup_tmo_big_image_note_window_g1

0xf1c8,	// (0x00019b4c) popup_tmo_big_image_note_window_t1

0xf1d8,	// (0x00019b5c) popup_tmo_big_image_note_window_t2

0xf1e8,	// (0x00019b6c) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x0001a85d) popup_tmo_big_image_note_window_t

0xf1f8,	// (0x00019b7c) cell_ai5_widget_lrg_icon_pane_g1

0xf200,	// (0x00019b84) cell_ai5_widget_lrg_icon_pane_t1

0xf20e,	// (0x00019b92) cell_ai5_widget_list_row_pane_ParamLimits

0xf20e,	// (0x00019b92) cell_ai5_widget_list_row_pane

0xf227,	// (0x00019bab) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf227,	// (0x00019bab) cell_ai5_widget_list_row_pane_g1

0xf234,	// (0x00019bb8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf234,	// (0x00019bb8) cell_ai5_widget_list_row_pane_t1

0xf24c,	// (0x00019bd0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24c,	// (0x00019bd0) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee0,	// (0x0001a864) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x0001a864) cell_ai5_widget_list_row_pane_t

0x4dc3,	// (0x0000f747) main_fep_vtchi_ss_pane

0xf25e,	// (0x00019be2) popup_fep_char_pre_window

0xf266,	// (0x00019bea) popup_fep_ituss_window

0xf287,	// (0x00019c0b) popup_fep_vkbss_window

0xf2a6,	// (0x00019c2a) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x00019c2a) grid_vkbss_keypad_pane

0xf2b6,	// (0x00019c3a) ituss_keypad_pane

0xf2cf,	// (0x00019c53) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x00019c53) aid_vkbss_key_offset

0xf2db,	// (0x00019c5f) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x00019c5f) cell_vkbss_key_pane

0xf2f1,	// (0x00019c75) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x00019c75) bg_cell_vkbss_key_g1

0xf2fd,	// (0x00019c81) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x00019c81) cell_vkbss_key_3p_pane

0xf317,	// (0x00019c9b) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x00019c9b) cell_vkbss_key_g1

0xf331,	// (0x00019cb5) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x00019cb5) cell_vkbss_key_t1

0xf35c,	// (0x00019ce0) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x00019ce0) cell_ituss_key_pane

0xf36c,	// (0x00019cf0) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x00019cf0) bg_cell_ituss_key_g1

0xf378,	// (0x00019cfc) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x00019cfc) cell_ituss_key_pane_g1

0xf384,	// (0x00019d08) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x00019d08) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x0001a869) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0001a869) cell_ituss_key_pane_g

0xf39d,	// (0x00019d21) cell_ituss_key_t1_ParamLimits

0xf39d,	// (0x00019d21) cell_ituss_key_t1

0xf3cb,	// (0x00019d4f) cell_ituss_key_t2_ParamLimits

0xf3cb,	// (0x00019d4f) cell_ituss_key_t2

0xf3fc,	// (0x00019d80) cell_ituss_key_t3_ParamLimits

0xf3fc,	// (0x00019d80) cell_ituss_key_t3

0xf42d,	// (0x00019db1) cell_ituss_key_t4_ParamLimits

0xf42d,	// (0x00019db1) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x0001a86e) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0001a86e) cell_ituss_key_t

0xf45e,	// (0x00019de2) cell_vkbss_key_3p_pane_g1

0xf466,	// (0x00019dea) cell_vkbss_key_3p_pane_g2

0xf46e,	// (0x00019df2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0001a877) cell_vkbss_key_3p_pane_g

0x6863,	// (0x000111e7) bg_popup_fep_char_preview_window_cp02

0xf476,	// (0x00019dfa) popup_fep_char_pre_window_t1

0xe684,	// (0x00019008) main_ai5_sk_pane

0xee0f,	// (0x00019793) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee1b,	// (0x0001979f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee2f,	// (0x000197b3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee3e,	// (0x000197c2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x0001a84f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee51,	// (0x000197d5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x773e,	// (0x000120c2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf485,	// (0x00019e09) main_ai5_sk_pane_g1

0x995d,	// (0x000142e1) popup_query_code_window_g1

0xf27c,	// (0x00019c00) popup_fep_vkb_icf_pane

0xf290,	// (0x00019c14) popup_fep_vtchi_icf_pane

0x773e,	// (0x000120c2) bg_icf_pane

0xf49d,	// (0x00019e21) list_vkb_icf_pane

0x773e,	// (0x000120c2) bg_icf_pane_cp01

0xd5b4,	// (0x00017f38) vtchi_icf_list_pane

0xf4bd,	// (0x00019e41) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00019e41) list_vkb_icf_pane_t1

0xf4d4,	// (0x00019e58) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x00019e58) vtchi_icf_list_pane_t1

0xf266,	// (0x00019bea) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x00019c14) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x00019c3a) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x00019c4a) ituss_sks_pane

0x773e,	// (0x000120c2) bg_icf_pane_ParamLimits

0xf48e,	// (0x00019e12) icf_edit_indi_pane_ParamLimits

0xf48e,	// (0x00019e12) icf_edit_indi_pane

0xf49d,	// (0x00019e21) list_vkb_icf_pane_ParamLimits

0x773e,	// (0x000120c2) bg_icf_pane_cp01_ParamLimits

0xf4a9,	// (0x00019e2d) icf_edit_indi_pane_cp01_ParamLimits

0xf4a9,	// (0x00019e2d) icf_edit_indi_pane_cp01

0xf4b5,	// (0x00019e39) vtchi_query_pane

0xc05d,	// (0x000169e1) icf_edit_indi_pane_g1_ParamLimits

0xc05d,	// (0x000169e1) icf_edit_indi_pane_g1

0xf4f0,	// (0x00019e74) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00019e74) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x0001a87e) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x0001a87e) icf_edit_indi_pane_g

0xf4fc,	// (0x00019e80) icf_edit_indi_pane_t1

0xf50a,	// (0x00019e8e) bg_input_focus_pane_cp042

0x710c,	// (0x00011a90) vtchi_button_pane

0xf513,	// (0x00019e97) vtchi_query_pane_t1

0xf521,	// (0x00019ea5) vtchi_query_pane_t2

0xf52f,	// (0x00019eb3) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001a883) vtchi_query_pane_t

0x6863,	// (0x000111e7) bg_button_pane_cp13

0xf53d,	// (0x00019ec1) vtchi_button_pane_g1

0xdafc,	// (0x00018480) ituss_sks_pane_g1

0xf545,	// (0x00019ec9) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001a88a) ituss_sks_pane_g

0xf54e,	// (0x00019ed2) ituss_sks_pane_t1

0xf55c,	// (0x00019ee0) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001a88f) ituss_sks_pane_t

0xb7de,	// (0x00016162) indicator_nsta_pane_cp_g1

0xb7e7,	// (0x0001616b) indicator_nsta_pane_cp_g2

0xb7ef,	// (0x00016173) indicator_nsta_pane_cp_g3

0xb7f7,	// (0x0001617b) indicator_nsta_pane_cp_g4

0xb7ff,	// (0x00016183) indicator_nsta_pane_cp_g5

0xb807,	// (0x0001618b) indicator_nsta_pane_cp_g6

0x0005,

0xfaa9,	// (0x0001a42d) indicator_nsta_pane_cp_g

0xe298,	// (0x00018c1c) cell_graphic2_pane_t2_ParamLimits

0xe298,	// (0x00018c1c) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x0001a746) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x0001a746) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
