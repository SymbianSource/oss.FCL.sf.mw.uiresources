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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000ca0d };

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
0x73b1,	// (0x00013dbe) Screen

0x73bd,	// (0x00013dca) application_window_ParamLimits

0x73bd,	// (0x00013dca) application_window

0x36d2,	// (0x000100df) screen_g1

0x4cb3,	// (0x000116c0) area_bottom_pane_ParamLimits

0x4cb3,	// (0x000116c0) area_bottom_pane

0x4d73,	// (0x00011780) area_top_pane_ParamLimits

0x4d73,	// (0x00011780) area_top_pane

0x4e11,	// (0x0001181e) main_pane_ParamLimits

0x4e11,	// (0x0001181e) main_pane

0x384b,	// (0x00010258) misc_graphics

0x8c4b,	// (0x00015658) battery_pane_ParamLimits

0x8c4b,	// (0x00015658) battery_pane

0x9a2c,	// (0x00016439) bg_status_flat_pane_g8

0x9a34,	// (0x00016441) bg_status_flat_pane_g9

0x8d13,	// (0x00015720) context_pane_ParamLimits

0x8d13,	// (0x00015720) context_pane

0x8e37,	// (0x00015844) navi_pane_ParamLimits

0x8e37,	// (0x00015844) navi_pane

0x8ec7,	// (0x000158d4) signal_pane_ParamLimits

0x8ec7,	// (0x000158d4) signal_pane

0x0008,

0xf84f,	// (0x0001c25c) bg_status_flat_pane_g

0x8f34,	// (0x00015941) status_pane_g1_ParamLimits

0x8f34,	// (0x00015941) status_pane_g1

0x8f40,	// (0x0001594d) status_pane_g2_ParamLimits

0x8f40,	// (0x0001594d) status_pane_g2

0x8f4c,	// (0x00015959) status_pane_g3_ParamLimits

0x8f4c,	// (0x00015959) status_pane_g3

0x0004,

0xf776,	// (0x0001c183) status_pane_g_ParamLimits

0xf776,	// (0x0001c183) status_pane_g

0x8f80,	// (0x0001598d) title_pane_ParamLimits

0x8f80,	// (0x0001598d) title_pane

0x8fbf,	// (0x000159cc) uni_indicator_pane_ParamLimits

0x8fbf,	// (0x000159cc) uni_indicator_pane

0x8b6d,	// (0x0001557a) bg_list_pane_ParamLimits

0x8b6d,	// (0x0001557a) bg_list_pane

0x8b8d,	// (0x0001559a) find_pane

0x8b95,	// (0x000155a2) listscroll_app_pane_ParamLimits

0x8b95,	// (0x000155a2) listscroll_app_pane

0x8ba1,	// (0x000155ae) listscroll_form_pane

0x571a,	// (0x00012127) listscroll_gen_pane_ParamLimits

0x571a,	// (0x00012127) listscroll_gen_pane

0x572e,	// (0x0001213b) listscroll_set_pane

0x7d1b,	// (0x00014728) main_idle_act_pane

0x8866,	// (0x00015273) main_idle_trad_pane

0x8866,	// (0x00015273) main_list_empty_pane

0x8b95,	// (0x000155a2) main_midp_pane

0x8bbb,	// (0x000155c8) main_pane_g1_ParamLimits

0x8bbb,	// (0x000155c8) main_pane_g1

0x5744,	// (0x00012151) popup_ai_message_window_ParamLimits

0x5744,	// (0x00012151) popup_ai_message_window

0x57f8,	// (0x00012205) popup_fep_china_uni_window_ParamLimits

0x57f8,	// (0x00012205) popup_fep_china_uni_window

0x5858,	// (0x00012265) popup_fep_japan_candidate_window_ParamLimits

0x5858,	// (0x00012265) popup_fep_japan_candidate_window

0x5882,	// (0x0001228f) popup_fep_japan_predictive_window_ParamLimits

0x5882,	// (0x0001228f) popup_fep_japan_predictive_window

0x58b8,	// (0x000122c5) popup_find_window

0x58c5,	// (0x000122d2) popup_grid_graphic_window_ParamLimits

0x58c5,	// (0x000122d2) popup_grid_graphic_window

0x58f5,	// (0x00012302) popup_large_graphic_colour_window

0x591b,	// (0x00012328) popup_menu_window_ParamLimits

0x591b,	// (0x00012328) popup_menu_window

0x5ae5,	// (0x000124f2) popup_note_image_window

0x5acf,	// (0x000124dc) popup_note_wait_window_ParamLimits

0x5acf,	// (0x000124dc) popup_note_wait_window

0x5acf,	// (0x000124dc) popup_note_window_ParamLimits

0x5acf,	// (0x000124dc) popup_note_window

0x5b4b,	// (0x00012558) popup_query_code_window_ParamLimits

0x5b4b,	// (0x00012558) popup_query_code_window

0x5b61,	// (0x0001256e) popup_query_data_code_window_ParamLimits

0x5b61,	// (0x0001256e) popup_query_data_code_window

0x5b84,	// (0x00012591) popup_query_data_window_ParamLimits

0x5b84,	// (0x00012591) popup_query_data_window

0x5ba6,	// (0x000125b3) popup_query_sat_info_window_ParamLimits

0x5ba6,	// (0x000125b3) popup_query_sat_info_window

0x5be5,	// (0x000125f2) popup_snote_single_graphic_window_ParamLimits

0x5be5,	// (0x000125f2) popup_snote_single_graphic_window

0x5be5,	// (0x000125f2) popup_snote_single_text_window_ParamLimits

0x5be5,	// (0x000125f2) popup_snote_single_text_window

0x5bfc,	// (0x00012609) popup_sub_window_general

0x5d42,	// (0x0001274f) popup_window_general_ParamLimits

0x5d42,	// (0x0001274f) popup_window_general

0x8bd1,	// (0x000155de) power_save_pane

0x5590,	// (0x00011f9d) control_pane_g1_ParamLimits

0x5590,	// (0x00011f9d) control_pane_g1

0x55b9,	// (0x00011fc6) control_pane_g2_ParamLimits

0x55b9,	// (0x00011fc6) control_pane_g2

0x8b30,	// (0x0001553d) control_pane_g3_ParamLimits

0x8b30,	// (0x0001553d) control_pane_g3

0x0007,

0xf75e,	// (0x0001c16b) control_pane_g_ParamLimits

0xf75e,	// (0x0001c16b) control_pane_g

0x5605,	// (0x00012012) control_pane_t1_ParamLimits

0x5605,	// (0x00012012) control_pane_t1

0x5661,	// (0x0001206e) control_pane_t2_ParamLimits

0x5661,	// (0x0001206e) control_pane_t2

0x0002,

0xf76f,	// (0x0001c17c) control_pane_t_ParamLimits

0xf76f,	// (0x0001c17c) control_pane_t

0x8a55,	// (0x00015462) navi_navi_volume_pane_cp1

0x8a5d,	// (0x0001546a) status_small_icon_pane

0x8a65,	// (0x00015472) status_small_pane_g1_ParamLimits

0x8a65,	// (0x00015472) status_small_pane_g1

0x8a99,	// (0x000154a6) status_small_pane_g2_ParamLimits

0x8a99,	// (0x000154a6) status_small_pane_g2

0x8aa5,	// (0x000154b2) status_small_pane_g3_ParamLimits

0x8aa5,	// (0x000154b2) status_small_pane_g3

0x8ab1,	// (0x000154be) status_small_pane_g4_ParamLimits

0x8ab1,	// (0x000154be) status_small_pane_g4

0x8abd,	// (0x000154ca) status_small_pane_g5_ParamLimits

0x8abd,	// (0x000154ca) status_small_pane_g5

0x8acb,	// (0x000154d8) status_small_pane_g6_ParamLimits

0x8acb,	// (0x000154d8) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001c15a) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001c15a) status_small_pane_g

0x8afa,	// (0x00015507) status_small_pane_t1

0x8b1c,	// (0x00015529) status_small_wait_pane_ParamLimits

0x8b1c,	// (0x00015529) status_small_wait_pane

0x823c,	// (0x00014c49) aid_levels_signal_ParamLimits

0x823c,	// (0x00014c49) aid_levels_signal

0x824b,	// (0x00014c58) signal_pane_g1_ParamLimits

0x824b,	// (0x00014c58) signal_pane_g1

0x8260,	// (0x00014c6d) signal_pane_g2_ParamLimits

0x8260,	// (0x00014c6d) signal_pane_g2

0x0003,

0xf6de,	// (0x0001c0eb) signal_pane_g_ParamLimits

0xf6de,	// (0x0001c0eb) signal_pane_g

0x8291,	// (0x00014c9e) context_pane_g1

0x73cd,	// (0x00013dda) title_pane_g1

0x73ff,	// (0x00013e0c) title_pane_t1

0x38b5,	// (0x000102c2) title_pane_t2

0x38db,	// (0x000102e8) title_pane_t3

0x0002,

0xf532,	// (0x0001bf3f) title_pane_t

0x8fd7,	// (0x000159e4) aid_levels_battery_ParamLimits

0x8fd7,	// (0x000159e4) aid_levels_battery

0x8fe8,	// (0x000159f5) battery_pane_g1_ParamLimits

0x8fe8,	// (0x000159f5) battery_pane_g1

0x8ffe,	// (0x00015a0b) battery_pane_g2_ParamLimits

0x8ffe,	// (0x00015a0b) battery_pane_g2

0x0001,

0xf781,	// (0x0001c18e) battery_pane_g_ParamLimits

0xf781,	// (0x0001c18e) battery_pane_g

0xa376,	// (0x00016d83) uni_indicator_pane_g1

0xa38c,	// (0x00016d99) uni_indicator_pane_g2

0xa3a2,	// (0x00016daf) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0001c304) uni_indicator_pane_g

0x86c9,	// (0x000150d6) navi_icon_pane_ParamLimits

0x86c9,	// (0x000150d6) navi_icon_pane

0x8605,	// (0x00015012) navi_midp_pane

0x86e5,	// (0x000150f2) navi_navi_pane

0x86ef,	// (0x000150fc) navi_text_pane_ParamLimits

0x86ef,	// (0x000150fc) navi_text_pane

0x36d2,	// (0x000100df) status_small_wait_pane_g1

0x3ca9,	// (0x000106b6) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0001c2ff) status_small_wait_pane_g

0xa089,	// (0x00016a96) navi_navi_icon_text_pane

0xa091,	// (0x00016a9e) navi_navi_pane_g1_ParamLimits

0xa091,	// (0x00016a9e) navi_navi_pane_g1

0xa0a3,	// (0x00016ab0) navi_navi_pane_g2_ParamLimits

0xa0a3,	// (0x00016ab0) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0001c2cd) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0001c2cd) navi_navi_pane_g

0xa0b5,	// (0x00016ac2) navi_navi_tabs_pane

0xa0be,	// (0x00016acb) navi_navi_text_pane

0xa089,	// (0x00016a96) navi_navi_volume_pane

0xa065,	// (0x00016a72) navi_text_pane_t1

0xa059,	// (0x00016a66) navi_icon_pane_g1

0x9fac,	// (0x000169b9) navi_navi_text_pane_t1

0x606b,	// (0x00012a78) navi_navi_volume_pane_g1

0x6073,	// (0x00012a80) volume_small_pane

0x9f12,	// (0x0001691f) navi_navi_icon_text_pane_g1

0x9f1a,	// (0x00016927) navi_navi_icon_text_pane_t1

0x86e5,	// (0x000150f2) navi_tabs_2_long_pane

0x86e5,	// (0x000150f2) navi_tabs_2_pane

0x86e5,	// (0x000150f2) navi_tabs_3_long_pane

0x86e5,	// (0x000150f2) navi_tabs_3_pane

0x86e5,	// (0x000150f2) navi_tabs_4_pane

0x604b,	// (0x00012a58) tabs_2_active_pane_ParamLimits

0x604b,	// (0x00012a58) tabs_2_active_pane

0x605b,	// (0x00012a68) tabs_2_passive_pane_ParamLimits

0x605b,	// (0x00012a68) tabs_2_passive_pane

0x6019,	// (0x00012a26) tabs_3_active_pane_ParamLimits

0x6019,	// (0x00012a26) tabs_3_active_pane

0x6029,	// (0x00012a36) tabs_3_passive_pane_ParamLimits

0x6029,	// (0x00012a36) tabs_3_passive_pane

0x603a,	// (0x00012a47) tabs_3_passive_pane_cp_ParamLimits

0x603a,	// (0x00012a47) tabs_3_passive_pane_cp

0x5fcd,	// (0x000129da) tabs_4_active_pane_ParamLimits

0x5fcd,	// (0x000129da) tabs_4_active_pane

0x5fe0,	// (0x000129ed) tabs_4_passive_pane_ParamLimits

0x5fe0,	// (0x000129ed) tabs_4_passive_pane

0x5ff1,	// (0x000129fe) tabs_4_passive_pane_cp_ParamLimits

0x5ff1,	// (0x000129fe) tabs_4_passive_pane_cp

0x6002,	// (0x00012a0f) tabs_4_passive_pane_cp2_ParamLimits

0x6002,	// (0x00012a0f) tabs_4_passive_pane_cp2

0x5fa9,	// (0x000129b6) tabs_2_long_active_pane_ParamLimits

0x5fa9,	// (0x000129b6) tabs_2_long_active_pane

0x5fbb,	// (0x000129c8) tabs_2_long_passive_pane_ParamLimits

0x5fbb,	// (0x000129c8) tabs_2_long_passive_pane

0x5f6a,	// (0x00012977) tabs_3_long_active_pane_ParamLimits

0x5f6a,	// (0x00012977) tabs_3_long_active_pane

0x5f7d,	// (0x0001298a) tabs_3_long_passive_pane_ParamLimits

0x5f7d,	// (0x0001298a) tabs_3_long_passive_pane

0x5f96,	// (0x000129a3) tabs_3_long_passive_pane_cp_ParamLimits

0x5f96,	// (0x000129a3) tabs_3_long_passive_pane_cp

0x5f10,	// (0x0001291d) volume_small_pane_g1

0x5f19,	// (0x00012926) volume_small_pane_g2

0x5f22,	// (0x0001292f) volume_small_pane_g3

0x5f2b,	// (0x00012938) volume_small_pane_g4

0x5f34,	// (0x00012941) volume_small_pane_g5

0x5f3d,	// (0x0001294a) volume_small_pane_g6

0x5f46,	// (0x00012953) volume_small_pane_g7

0x5f4f,	// (0x0001295c) volume_small_pane_g8

0x5f58,	// (0x00012965) volume_small_pane_g9

0x5f61,	// (0x0001296e) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0001c299) volume_small_pane_g

0x3905,	// (0x00010312) bg_active_tab_pane_cp2_ParamLimits

0x3905,	// (0x00010312) bg_active_tab_pane_cp2

0x7467,	// (0x00013e74) tabs_3_active_pane_g1

0x746f,	// (0x00013e7c) tabs_3_active_pane_t1

0x3905,	// (0x00010312) bg_passive_tab_pane_cp2_ParamLimits

0x3905,	// (0x00010312) bg_passive_tab_pane_cp2

0x7467,	// (0x00013e74) tabs_3_passive_pane_g1

0x746f,	// (0x00013e7c) tabs_3_passive_pane_t1

0x3905,	// (0x00010312) bg_active_tab_pane_cp3_ParamLimits

0x3905,	// (0x00010312) bg_active_tab_pane_cp3

0x7481,	// (0x00013e8e) tabs_4_active_pane_g1

0x7489,	// (0x00013e96) tabs_4_active_pane_t1

0x3905,	// (0x00010312) bg_passive_tab_pane_cp3_ParamLimits

0x3905,	// (0x00010312) bg_passive_tab_pane_cp3

0x7481,	// (0x00013e8e) tabs_4_1_passive_pane_g1

0x7489,	// (0x00013e96) tabs_4_1_passive_pane_t1

0x8b95,	// (0x000155a2) list_highlight_pane_cp2

0xa617,	// (0x00017024) list_set_pane_ParamLimits

0xa617,	// (0x00017024) list_set_pane

0xa6d9,	// (0x000170e6) main_pane_set_t1_ParamLimits

0xa6d9,	// (0x000170e6) main_pane_set_t1

0xa6f9,	// (0x00017106) main_pane_set_t2_ParamLimits

0xa6f9,	// (0x00017106) main_pane_set_t2

0xa70d,	// (0x0001711a) main_pane_set_t3_ParamLimits

0xa70d,	// (0x0001711a) main_pane_set_t3

0xa721,	// (0x0001712e) main_pane_set_t4_ParamLimits

0xa721,	// (0x0001712e) main_pane_set_t4

0x0003,

0xf95c,	// (0x0001c369) main_pane_set_t_ParamLimits

0xf95c,	// (0x0001c369) main_pane_set_t

0xa735,	// (0x00017142) setting_code_pane

0xa73f,	// (0x0001714c) setting_slider_graphic_pane

0xa73f,	// (0x0001714c) setting_slider_pane

0xa73f,	// (0x0001714c) setting_text_pane

0xa73f,	// (0x0001714c) setting_volume_pane

0x5070,	// (0x00011a7d) volume_set_pane

0x3905,	// (0x00010312) bg_set_opt_pane_cp

0x507a,	// (0x00011a87) setting_slider_pane_t1

0x5093,	// (0x00011aa0) setting_slider_pane_t2

0x50ad,	// (0x00011aba) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001bf46) setting_slider_pane_t

0x50c5,	// (0x00011ad2) slider_set_pane

0x384b,	// (0x00010258) bg_set_opt_pane_cp2

0x3974,	// (0x00010381) setting_slider_graphic_pane_g1

0x50db,	// (0x00011ae8) setting_slider_graphic_pane_t1

0x50eb,	// (0x00011af8) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001bf4d) setting_slider_graphic_pane_t

0x50fb,	// (0x00011b08) slider_set_pane_cp

0x384b,	// (0x00010258) input_focus_pane_cp1

0xa5d8,	// (0x00016fe5) list_set_text_pane

0x36d2,	// (0x000100df) setting_text_pane_g1

0x384b,	// (0x00010258) input_focus_pane_cp2

0x36d2,	// (0x000100df) setting_code_pane_g1

0x39a5,	// (0x000103b2) setting_code_pane_t1

0x39b3,	// (0x000103c0) set_text_pane_t1_ParamLimits

0x39b3,	// (0x000103c0) set_text_pane_t1

0x4138,	// (0x00010b45) set_opt_bg_pane_g1

0x4140,	// (0x00010b4d) set_opt_bg_pane_g2

0xa5b0,	// (0x00016fbd) set_opt_bg_pane_g3

0x4150,	// (0x00010b5d) set_opt_bg_pane_g4

0x4158,	// (0x00010b65) set_opt_bg_pane_g5

0x4160,	// (0x00010b6d) set_opt_bg_pane_g6

0xa5ba,	// (0x00016fc7) set_opt_bg_pane_g7

0xa5c4,	// (0x00016fd1) set_opt_bg_pane_g8

0xa5ce,	// (0x00016fdb) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0001c356) set_opt_bg_pane_g

0xa5a3,	// (0x00016fb0) slider_set_pane_g1

0x60f4,	// (0x00012b01) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0001c347) slider_set_pane_g

0x607c,	// (0x00012a89) volume_set_pane_g1

0x6086,	// (0x00012a93) volume_set_pane_g2

0x6090,	// (0x00012a9d) volume_set_pane_g3

0x609a,	// (0x00012aa7) volume_set_pane_g4

0x60a4,	// (0x00012ab1) volume_set_pane_g5

0x60ae,	// (0x00012abb) volume_set_pane_g6

0x60b8,	// (0x00012ac5) volume_set_pane_g7

0x60c2,	// (0x00012acf) volume_set_pane_g8

0x60cc,	// (0x00012ad9) volume_set_pane_g9

0x60d6,	// (0x00012ae3) volume_set_pane_g10

0x0009,

0xf912,	// (0x0001c31f) volume_set_pane_g

0x749b,	// (0x00013ea8) indicator_pane_ParamLimits

0x749b,	// (0x00013ea8) indicator_pane

0x74a7,	// (0x00013eb4) main_idle_pane_g2_ParamLimits

0x74a7,	// (0x00013eb4) main_idle_pane_g2

0x74cf,	// (0x00013edc) main_pane_idle_g1_ParamLimits

0x74cf,	// (0x00013edc) main_pane_idle_g1

0x39cd,	// (0x000103da) popup_clock_digital_analogue_window_ParamLimits

0x39cd,	// (0x000103da) popup_clock_digital_analogue_window

0x74dd,	// (0x00013eea) soft_indicator_pane_ParamLimits

0x74dd,	// (0x00013eea) soft_indicator_pane

0x74eb,	// (0x00013ef8) wallpaper_pane_ParamLimits

0x74eb,	// (0x00013ef8) wallpaper_pane

0x36d2,	// (0x000100df) wallpaper_pane_g1

0x74f7,	// (0x00013f04) indicator_pane_g1_ParamLimits

0x74f7,	// (0x00013f04) indicator_pane_g1

0xaaa9,	// (0x000174b6) navi_navi_icon_text_pane_srt_g1

0x39fb,	// (0x00010408) soft_indicator_pane_t1

0x3a15,	// (0x00010422) aid_ps_area_pane

0x7503,	// (0x00013f10) aid_ps_clock_pane

0x3a26,	// (0x00010433) aid_ps_indicator_pane

0x3a32,	// (0x0001043f) indicator_ps_pane_ParamLimits

0x3a32,	// (0x0001043f) indicator_ps_pane

0x3a41,	// (0x0001044e) power_save_pane_g1_ParamLimits

0x3a41,	// (0x0001044e) power_save_pane_g1

0x3a4d,	// (0x0001045a) power_save_pane_g2_ParamLimits

0x3a4d,	// (0x0001045a) power_save_pane_g2

0x4c67,	// (0x00011674) aid_navinavi_width_pane

0x3a15,	// (0x00010422) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001bf52) power_save_pane_g_ParamLimits

0xf545,	// (0x0001bf52) power_save_pane_g

0x3a5b,	// (0x00010468) power_save_pane_t1_ParamLimits

0x3a5b,	// (0x00010468) power_save_pane_t1

0x7503,	// (0x00013f10) aid_ps_clock_pane_ParamLimits

0x3a26,	// (0x00010433) aid_ps_indicator_pane_ParamLimits

0x3a6d,	// (0x0001047a) power_save_pane_t4_ParamLimits

0x3a6d,	// (0x0001047a) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001bf57) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001bf57) power_save_pane_t

0x3a97,	// (0x000104a4) power_save_t3_ParamLimits

0x3a97,	// (0x000104a4) power_save_t3

0x3a82,	// (0x0001048f) power_save_t2_ParamLimits

0x3a82,	// (0x0001048f) power_save_t2

0x3aac,	// (0x000104b9) indicator_ps_pane_g1

0x7511,	// (0x00013f1e) ai_gene_pane_ParamLimits

0x7511,	// (0x00013f1e) ai_gene_pane

0x751d,	// (0x00013f2a) ai_links_pane_ParamLimits

0x751d,	// (0x00013f2a) ai_links_pane

0x7529,	// (0x00013f36) indicator_pane_cp1_ParamLimits

0x7529,	// (0x00013f36) indicator_pane_cp1

0x7535,	// (0x00013f42) main_pane_idle_g1_cp_ParamLimits

0x7535,	// (0x00013f42) main_pane_idle_g1_cp

0x3ab5,	// (0x000104c2) popup_ai_links_title_window

0x7541,	// (0x00013f4e) soft_indicator_pane_cp1_ParamLimits

0x7541,	// (0x00013f4e) soft_indicator_pane_cp1

0xa364,	// (0x00016d71) ai_links_pane_g1

0xa36d,	// (0x00016d7a) grid_ai_links_pane

0xa349,	// (0x00016d56) ai_gene_pane_1

0xa352,	// (0x00016d5f) ai_gene_pane_2

0xa35b,	// (0x00016d68) list_highlight_pane_cp4

0xa329,	// (0x00016d36) cell_ai_link_pane_ParamLimits

0xa329,	// (0x00016d36) cell_ai_link_pane

0xa321,	// (0x00016d2e) cell_ai_link_pane_g1

0x3ca9,	// (0x000106b6) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0001c2fa) cell_ai_link_pane_g

0x384b,	// (0x00010258) grid_highlight_cp2

0x384b,	// (0x00010258) bg_popup_sub_pane_cp1

0x3acc,	// (0x000104d9) popup_ai_links_title_window_t1

0xa26d,	// (0x00016c7a) ai_gene_pane_1_g1_ParamLimits

0xa26d,	// (0x00016c7a) ai_gene_pane_1_g1

0xa279,	// (0x00016c86) ai_gene_pane_1_g2_ParamLimits

0xa279,	// (0x00016c86) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0001c2f0) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0001c2f0) ai_gene_pane_1_g

0xa286,	// (0x00016c93) ai_gene_pane_1_t1_ParamLimits

0xa286,	// (0x00016c93) ai_gene_pane_1_t1

0xa2ba,	// (0x00016cc7) grid_ai_soft_ind_pane

0xa258,	// (0x00016c65) ai_gene_pane_2_t1_ParamLimits

0xa258,	// (0x00016c65) ai_gene_pane_2_t1

0x754d,	// (0x00013f5a) main_pane_empty_t1_ParamLimits

0x754d,	// (0x00013f5a) main_pane_empty_t1

0x7565,	// (0x00013f72) main_pane_empty_t2_ParamLimits

0x7565,	// (0x00013f72) main_pane_empty_t2

0x757a,	// (0x00013f87) main_pane_empty_t3_ParamLimits

0x757a,	// (0x00013f87) main_pane_empty_t3

0x758c,	// (0x00013f99) main_pane_empty_t4_ParamLimits

0x758c,	// (0x00013f99) main_pane_empty_t4

0x759e,	// (0x00013fab) main_pane_empty_t5_ParamLimits

0x759e,	// (0x00013fab) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001bf5c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001bf5c) main_pane_empty_t

0x41f6,	// (0x00010c03) bg_popup_window_pane_ParamLimits

0x41f6,	// (0x00010c03) bg_popup_window_pane

0x9fba,	// (0x000169c7) find_popup_pane_cp2_ParamLimits

0x9fba,	// (0x000169c7) find_popup_pane_cp2

0x9fc6,	// (0x000169d3) heading_pane_ParamLimits

0x9fc6,	// (0x000169d3) heading_pane

0x384b,	// (0x00010258) bg_popup_sub_pane

0x9f34,	// (0x00016941) bg_popup_window_pane_g1_ParamLimits

0x9f34,	// (0x00016941) bg_popup_window_pane_g1

0x9f40,	// (0x0001694d) bg_popup_window_pane_g2_ParamLimits

0x9f40,	// (0x0001694d) bg_popup_window_pane_g2

0x9f4c,	// (0x00016959) bg_popup_window_pane_g3_ParamLimits

0x9f4c,	// (0x00016959) bg_popup_window_pane_g3

0x9f58,	// (0x00016965) bg_popup_window_pane_g4_ParamLimits

0x9f58,	// (0x00016965) bg_popup_window_pane_g4

0x9f64,	// (0x00016971) bg_popup_window_pane_g5_ParamLimits

0x9f64,	// (0x00016971) bg_popup_window_pane_g5

0x9f70,	// (0x0001697d) bg_popup_window_pane_g6_ParamLimits

0x9f70,	// (0x0001697d) bg_popup_window_pane_g6

0x9f7c,	// (0x00016989) bg_popup_window_pane_g7_ParamLimits

0x9f7c,	// (0x00016989) bg_popup_window_pane_g7

0x9f88,	// (0x00016995) bg_popup_window_pane_g8_ParamLimits

0x9f88,	// (0x00016995) bg_popup_window_pane_g8

0x9f94,	// (0x000169a1) bg_popup_window_pane_g9_ParamLimits

0x9f94,	// (0x000169a1) bg_popup_window_pane_g9

0x9fa0,	// (0x000169ad) bg_popup_window_pane_g10_ParamLimits

0x9fa0,	// (0x000169ad) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0001c2b8) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0001c2b8) bg_popup_window_pane_g

0x9ec9,	// (0x000168d6) bg_popup_heading_pane_ParamLimits

0x9ec9,	// (0x000168d6) bg_popup_heading_pane

0x617c,	// (0x00012b89) tabs_4_passive_pane_cp_srt_ParamLimits

0x617c,	// (0x00012b89) tabs_4_passive_pane_cp_srt

0x618e,	// (0x00012b9b) tabs_4_passive_pane_srt_ParamLimits

0x9edd,	// (0x000168ea) heading_pane_g2

0x618e,	// (0x00012b9b) tabs_4_passive_pane_srt

0x8b95,	// (0x000155a2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b95,	// (0x000155a2) bg_passive_tab_pane_cp3_srt

0x9ee5,	// (0x000168f2) heading_pane_t1_ParamLimits

0x9ee5,	// (0x000168f2) heading_pane_t1

0x9efc,	// (0x00016909) heading_pane_t2_ParamLimits

0x9efc,	// (0x00016909) heading_pane_t2

0x0001,

0xf8a6,	// (0x0001c2b3) heading_pane_t_ParamLimits

0xf8a6,	// (0x0001c2b3) heading_pane_t

0x99f4,	// (0x00016401) bg_popup_heading_pane_g1

0x9aa3,	// (0x000164b0) bg_popup_heading_pane_g2

0x9aad,	// (0x000164ba) bg_popup_heading_pane_g3

0x9ab7,	// (0x000164c4) bg_popup_heading_pane_g4

0x9ac1,	// (0x000164ce) bg_popup_heading_pane_g5

0x9acb,	// (0x000164d8) bg_popup_heading_pane_g6

0x9ad3,	// (0x000164e0) bg_popup_heading_pane_g7

0x9adb,	// (0x000164e8) bg_popup_heading_pane_g8

0x9ae5,	// (0x000164f2) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0001c26f) bg_popup_heading_pane_g

0x910d,	// (0x00015b1a) bg_popup_sub_pane_g1

0x911d,	// (0x00015b2a) bg_popup_sub_pane_g2

0x9115,	// (0x00015b22) bg_popup_sub_pane_g3

0x912d,	// (0x00015b3a) bg_popup_sub_pane_g4

0x9125,	// (0x00015b32) bg_popup_sub_pane_g5

0x9135,	// (0x00015b42) bg_popup_sub_pane_g6

0x913d,	// (0x00015b4a) bg_popup_sub_pane_g7

0x914d,	// (0x00015b5a) bg_popup_sub_pane_g8

0x9145,	// (0x00015b52) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0001c249) bg_popup_sub_pane_g

0x38ed,	// (0x000102fa) bg_popup_window_pane_cp5_ParamLimits

0x38ed,	// (0x000102fa) bg_popup_window_pane_cp5

0x3ae9,	// (0x000104f6) popup_note_window_g1_ParamLimits

0x3ae9,	// (0x000104f6) popup_note_window_g1

0x3af5,	// (0x00010502) popup_note_window_t1_ParamLimits

0x3af5,	// (0x00010502) popup_note_window_t1

0x3b0b,	// (0x00010518) popup_note_window_t2_ParamLimits

0x3b0b,	// (0x00010518) popup_note_window_t2

0x3b21,	// (0x0001052e) popup_note_window_t3_ParamLimits

0x3b21,	// (0x0001052e) popup_note_window_t3

0x3b37,	// (0x00010544) popup_note_window_t4_ParamLimits

0x3b37,	// (0x00010544) popup_note_window_t4

0x3b5f,	// (0x0001056c) popup_note_window_t5_ParamLimits

0x3b5f,	// (0x0001056c) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001bf67) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001bf67) popup_note_window_t

0x3ba9,	// (0x000105b6) bg_popup_window_pane_cp6_ParamLimits

0x3ba9,	// (0x000105b6) bg_popup_window_pane_cp6

0x9970,	// (0x0001637d) popup_note_image_window_g1_ParamLimits

0x9970,	// (0x0001637d) popup_note_image_window_g1

0x997c,	// (0x00016389) popup_note_image_window_g2_ParamLimits

0x997c,	// (0x00016389) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0001c23d) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0001c23d) popup_note_image_window_g

0x9995,	// (0x000163a2) popup_note_image_window_t1_ParamLimits

0x9995,	// (0x000163a2) popup_note_image_window_t1

0x99ae,	// (0x000163bb) popup_note_image_window_t2_ParamLimits

0x99ae,	// (0x000163bb) popup_note_image_window_t2

0x99c7,	// (0x000163d4) popup_note_image_window_t3_ParamLimits

0x99c7,	// (0x000163d4) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0001c242) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0001c242) popup_note_image_window_t

0x9830,	// (0x0001623d) bg_popup_window_pane_cp7_ParamLimits

0x9830,	// (0x0001623d) bg_popup_window_pane_cp7

0x9860,	// (0x0001626d) popup_note_wait_window_g1_ParamLimits

0x9860,	// (0x0001626d) popup_note_wait_window_g1

0x986c,	// (0x00016279) popup_note_wait_window_g2_ParamLimits

0x986c,	// (0x00016279) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0001c22b) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0001c22b) popup_note_wait_window_g

0x9884,	// (0x00016291) popup_note_wait_window_t1_ParamLimits

0x9884,	// (0x00016291) popup_note_wait_window_t1

0x98ab,	// (0x000162b8) popup_note_wait_window_t2_ParamLimits

0x98ab,	// (0x000162b8) popup_note_wait_window_t2

0x98c9,	// (0x000162d6) popup_note_wait_window_t3_ParamLimits

0x98c9,	// (0x000162d6) popup_note_wait_window_t3

0x98dc,	// (0x000162e9) popup_note_wait_window_t4_ParamLimits

0x98dc,	// (0x000162e9) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0001c232) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0001c232) popup_note_wait_window_t

0x9901,	// (0x0001630e) wait_bar_pane_ParamLimits

0x9901,	// (0x0001630e) wait_bar_pane

0x384b,	// (0x00010258) wait_anim_pane

0x384b,	// (0x00010258) wait_border_pane

0x36d2,	// (0x000100df) wait_anim_pane_g1

0x36d2,	// (0x000100df) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001c0e6) wait_anim_pane_g

0x97d4,	// (0x000161e1) wait_border_pane_g1

0x97df,	// (0x000161ec) wait_border_pane_g2

0x97e8,	// (0x000161f5) wait_border_pane_g3

0x0002,

0xf817,	// (0x0001c224) wait_border_pane_g

0x963e,	// (0x0001604b) bg_popup_window_pane_cp16_ParamLimits

0x963e,	// (0x0001604b) bg_popup_window_pane_cp16

0x973e,	// (0x0001614b) indicator_popup_pane_cp4_ParamLimits

0x973e,	// (0x0001614b) indicator_popup_pane_cp4

0x9752,	// (0x0001615f) popup_query_data_window_t1_ParamLimits

0x9752,	// (0x0001615f) popup_query_data_window_t1

0x9764,	// (0x00016171) popup_query_data_window_t2_ParamLimits

0x9764,	// (0x00016171) popup_query_data_window_t2

0x977d,	// (0x0001618a) popup_query_data_window_t3_ParamLimits

0x977d,	// (0x0001618a) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0001c21d) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0001c21d) popup_query_data_window_t

0x9797,	// (0x000161a4) query_popup_data_pane_ParamLimits

0x9797,	// (0x000161a4) query_popup_data_pane

0x97ab,	// (0x000161b8) query_popup_data_pane_cp1_ParamLimits

0x97ab,	// (0x000161b8) query_popup_data_pane_cp1

0x963e,	// (0x0001604b) bg_popup_window_pane_cp10_ParamLimits

0x963e,	// (0x0001604b) bg_popup_window_pane_cp10

0x9670,	// (0x0001607d) indicator_popup_pane_ParamLimits

0x9670,	// (0x0001607d) indicator_popup_pane

0x9692,	// (0x0001609f) popup_query_code_window_t1_ParamLimits

0x9692,	// (0x0001609f) popup_query_code_window_t1

0x96ac,	// (0x000160b9) popup_query_code_window_t2_ParamLimits

0x96ac,	// (0x000160b9) popup_query_code_window_t2

0x96f5,	// (0x00016102) popup_query_code_window_t3_ParamLimits

0x96f5,	// (0x00016102) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0001c216) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0001c216) popup_query_code_window_t

0x9724,	// (0x00016131) query_popup_pane_ParamLimits

0x9724,	// (0x00016131) query_popup_pane

0x3ba9,	// (0x000105b6) bg_popup_window_pane_cp15_ParamLimits

0x3ba9,	// (0x000105b6) bg_popup_window_pane_cp15

0x3bc9,	// (0x000105d6) indicator_popup_pane_cp1_ParamLimits

0x3bc9,	// (0x000105d6) indicator_popup_pane_cp1

0x3bdc,	// (0x000105e9) indicator_popup_pane_cp2_ParamLimits

0x3bdc,	// (0x000105e9) indicator_popup_pane_cp2

0x3bf7,	// (0x00010604) popup_query_data_code_window_g1_ParamLimits

0x3bf7,	// (0x00010604) popup_query_data_code_window_g1

0x3c0a,	// (0x00010617) popup_query_data_code_window_t1_ParamLimits

0x3c0a,	// (0x00010617) popup_query_data_code_window_t1

0x3c1c,	// (0x00010629) popup_query_data_code_window_t2_ParamLimits

0x3c1c,	// (0x00010629) popup_query_data_code_window_t2

0x3c2e,	// (0x0001063b) popup_query_data_code_window_t3_ParamLimits

0x3c2e,	// (0x0001063b) popup_query_data_code_window_t3

0x3c44,	// (0x00010651) popup_query_data_code_window_t4_ParamLimits

0x3c44,	// (0x00010651) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001bf72) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001bf72) popup_query_data_code_window_t

0x5e1c,	// (0x00012829) list_single_midp_graphic_pane_g3

0x3c5e,	// (0x0001066b) query_popup_data_pane_cp2_ParamLimits

0x3c71,	// (0x0001067e) query_popup_pane_cp2_ParamLimits

0x3c71,	// (0x0001067e) query_popup_pane_cp2

0x384b,	// (0x00010258) bg_popup_window_pane_cp11

0x9622,	// (0x0001602f) heading_pane_cp5

0x962a,	// (0x00016037) listscroll_popup_info_pane

0x384b,	// (0x00010258) input_focus_pane_cp3

0x3c8c,	// (0x00010699) query_popup_pane_t1

0x3c9a,	// (0x000106a7) list_popup_info_pane_ParamLimits

0x3c9a,	// (0x000106a7) list_popup_info_pane

0x3ca9,	// (0x000106b6) listscroll_popup_info_pane_g1

0x3cb1,	// (0x000106be) scroll_pane_cp7

0x3cbb,	// (0x000106c8) popup_info_list_pane_t1_ParamLimits

0x3cbb,	// (0x000106c8) popup_info_list_pane_t1

0x3cd5,	// (0x000106e2) popup_info_list_pane_t2_ParamLimits

0x3cd5,	// (0x000106e2) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001bf7b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001bf7b) popup_info_list_pane_t

0x384b,	// (0x00010258) bg_popup_window_pane_cp12

0xaac3,	// (0x000174d0) find_popup_pane

0x3905,	// (0x00010312) bg_popup_window_pane_cp3

0x3cef,	// (0x000106fc) heading_pane_cp3

0x3cfe,	// (0x0001070b) listscroll_popup_graphic_pane

0x384b,	// (0x00010258) bg_popup_window_pane_cp4

0x7600,	// (0x0001400d) heading_pane_cp4

0x3d0e,	// (0x0001071b) listscroll_popup_colour_pane

0x760a,	// (0x00014017) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x760a,	// (0x00014017) cell_large_graphic_colour_none_popup_pane

0x761e,	// (0x0001402b) grid_large_graphic_colour_popup_pane_ParamLimits

0x761e,	// (0x0001402b) grid_large_graphic_colour_popup_pane

0x764a,	// (0x00014057) listscroll_popup_colour_pane_g1_ParamLimits

0x764a,	// (0x00014057) listscroll_popup_colour_pane_g1

0x7661,	// (0x0001406e) listscroll_popup_colour_pane_g2_ParamLimits

0x7661,	// (0x0001406e) listscroll_popup_colour_pane_g2

0x7678,	// (0x00014085) listscroll_popup_colour_pane_g3_ParamLimits

0x7678,	// (0x00014085) listscroll_popup_colour_pane_g3

0x7688,	// (0x00014095) listscroll_popup_colour_pane_g4_ParamLimits

0x7688,	// (0x00014095) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001bf80) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001bf80) listscroll_popup_colour_pane_g

0x3d16,	// (0x00010723) scroll_pane_cp6_ParamLimits

0x3d16,	// (0x00010723) scroll_pane_cp6

0x769c,	// (0x000140a9) cell_large_graphic_colour_popup_pane_ParamLimits

0x769c,	// (0x000140a9) cell_large_graphic_colour_popup_pane

0x3d28,	// (0x00010735) cell_large_graphic_colour_none_popup_pane_t1

0x384b,	// (0x00010258) grid_highlight_pane_cp5

0x3d37,	// (0x00010744) cell_large_graphic_colour_popup_pane_g1

0x3d3f,	// (0x0001074c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001bf89) cell_large_graphic_colour_popup_pane_g

0x3d47,	// (0x00010754) cell_large_graphic_colour_popup_pane_g2_copy1

0x3d50,	// (0x0001075d) grid_highlight_pane_cp4

0x3d58,	// (0x00010765) bg_popup_window_pane_cp8_ParamLimits

0x3d58,	// (0x00010765) bg_popup_window_pane_cp8

0x3d73,	// (0x00010780) popup_snote_single_text_window_g1_ParamLimits

0x3d73,	// (0x00010780) popup_snote_single_text_window_g1

0x3d85,	// (0x00010792) popup_snote_single_text_window_t1_ParamLimits

0x3d85,	// (0x00010792) popup_snote_single_text_window_t1

0x3d98,	// (0x000107a5) popup_snote_single_text_window_t2_ParamLimits

0x3d98,	// (0x000107a5) popup_snote_single_text_window_t2

0x3dab,	// (0x000107b8) popup_snote_single_text_window_t3_ParamLimits

0x3dab,	// (0x000107b8) popup_snote_single_text_window_t3

0x3de4,	// (0x000107f1) popup_snote_single_text_window_t4_ParamLimits

0x3de4,	// (0x000107f1) popup_snote_single_text_window_t4

0x3e18,	// (0x00010825) popup_snote_single_text_window_t5_ParamLimits

0x3e18,	// (0x00010825) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001bf8e) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001bf8e) popup_snote_single_text_window_t

0x3e47,	// (0x00010854) bg_popup_window_pane_cp9_ParamLimits

0x3e47,	// (0x00010854) bg_popup_window_pane_cp9

0x3d73,	// (0x00010780) popup_snote_single_graphic_window_g1_ParamLimits

0x3d73,	// (0x00010780) popup_snote_single_graphic_window_g1

0x3e55,	// (0x00010862) popup_snote_single_graphic_window_g2_ParamLimits

0x3e55,	// (0x00010862) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001bf99) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001bf99) popup_snote_single_graphic_window_g

0x3e61,	// (0x0001086e) popup_snote_single_graphic_window_t1_ParamLimits

0x3e61,	// (0x0001086e) popup_snote_single_graphic_window_t1

0x3e74,	// (0x00010881) popup_snote_single_graphic_window_t2_ParamLimits

0x3e74,	// (0x00010881) popup_snote_single_graphic_window_t2

0x3e87,	// (0x00010894) popup_snote_single_graphic_window_t3_ParamLimits

0x3e87,	// (0x00010894) popup_snote_single_graphic_window_t3

0x3ec0,	// (0x000108cd) popup_snote_single_graphic_window_t4_ParamLimits

0x3ec0,	// (0x000108cd) popup_snote_single_graphic_window_t4

0x3ef4,	// (0x00010901) popup_snote_single_graphic_window_t5_ParamLimits

0x3ef4,	// (0x00010901) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001bf9e) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001bf9e) popup_snote_single_graphic_window_t

0xaa01,	// (0x0001740e) grid_graphic_popup_pane_ParamLimits

0xaa01,	// (0x0001740e) grid_graphic_popup_pane

0xaa2f,	// (0x0001743c) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa2f,	// (0x0001743c) listscroll_popup_graphic_pane_g1

0xaa43,	// (0x00017450) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa43,	// (0x00017450) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0001c393) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0001c393) listscroll_popup_graphic_pane_g

0xaa57,	// (0x00017464) scroll_pane_cp5

0xa999,	// (0x000173a6) cell_graphic_popup_pane_ParamLimits

0xa999,	// (0x000173a6) cell_graphic_popup_pane

0xa97a,	// (0x00017387) cell_graphic_popup_pane_g1

0xa982,	// (0x0001738f) cell_graphic_popup_pane_g2

0x3d47,	// (0x00010754) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0001c38c) cell_graphic_popup_pane_g

0xa98b,	// (0x00017398) cell_graphic_popup_pane_t2

0x3d50,	// (0x0001075d) grid_highlight_pane_cp3

0x3f35,	// (0x00010942) list_gen_pane_ParamLimits

0x3f35,	// (0x00010942) list_gen_pane

0x3f5d,	// (0x0001096a) scroll_pane

0xa8d2,	// (0x000172df) bg_list_pane_g1_ParamLimits

0xa8d2,	// (0x000172df) bg_list_pane_g1

0xa8ef,	// (0x000172fc) bg_list_pane_g2_ParamLimits

0xa8ef,	// (0x000172fc) bg_list_pane_g2

0xa904,	// (0x00017311) bg_list_pane_g3_ParamLimits

0xa904,	// (0x00017311) bg_list_pane_g3

0xa918,	// (0x00017325) bg_list_pane_g4_ParamLimits

0xa918,	// (0x00017325) bg_list_pane_g4

0xa92c,	// (0x00017339) bg_list_pane_g5_ParamLimits

0xa92c,	// (0x00017339) bg_list_pane_g5

0x0004,

0xf974,	// (0x0001c381) bg_list_pane_g_ParamLimits

0xf974,	// (0x0001c381) bg_list_pane_g

0xa7f8,	// (0x00017205) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double2_graphic_large_graphic_pane

0xa7f8,	// (0x00017205) list_double2_graphic_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double2_graphic_pane

0xa7f8,	// (0x00017205) list_double2_large_graphic_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double2_large_graphic_pane

0xa7f8,	// (0x00017205) list_double2_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double2_pane

0xa7f8,	// (0x00017205) list_double_graphic_heading_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double_graphic_heading_pane

0xa7f8,	// (0x00017205) list_double_graphic_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double_graphic_pane

0xa7f8,	// (0x00017205) list_double_heading_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double_heading_pane

0xa7f8,	// (0x00017205) list_double_large_graphic_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double_large_graphic_pane

0xa7f8,	// (0x00017205) list_double_number_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double_number_pane

0xa7f8,	// (0x00017205) list_double_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double_pane

0xa7f8,	// (0x00017205) list_double_time_pane_ParamLimits

0xa7f8,	// (0x00017205) list_double_time_pane

0xa7f8,	// (0x00017205) list_setting_number_pane_ParamLimits

0xa7f8,	// (0x00017205) list_setting_number_pane

0xa7f8,	// (0x00017205) list_setting_pane_ParamLimits

0xa7f8,	// (0x00017205) list_setting_pane

0xa873,	// (0x00017280) list_single_2graphic_pane_ParamLimits

0xa873,	// (0x00017280) list_single_2graphic_pane

0xa873,	// (0x00017280) list_single_graphic_heading_pane_ParamLimits

0xa873,	// (0x00017280) list_single_graphic_heading_pane

0xa873,	// (0x00017280) list_single_graphic_pane_ParamLimits

0xa873,	// (0x00017280) list_single_graphic_pane

0xa873,	// (0x00017280) list_single_heading_pane_ParamLimits

0xa873,	// (0x00017280) list_single_heading_pane

0xa8b7,	// (0x000172c4) list_single_large_graphic_pane_ParamLimits

0xa8b7,	// (0x000172c4) list_single_large_graphic_pane

0xa873,	// (0x00017280) list_single_number_heading_pane_ParamLimits

0xa873,	// (0x00017280) list_single_number_heading_pane

0xa873,	// (0x00017280) list_single_number_pane_ParamLimits

0xa873,	// (0x00017280) list_single_number_pane

0xa873,	// (0x00017280) list_single_pane_ParamLimits

0xa873,	// (0x00017280) list_single_pane

0x384b,	// (0x00010258) list_highlight_pane_cp1

0x76c7,	// (0x000140d4) list_single_pane_g1_ParamLimits

0x76c7,	// (0x000140d4) list_single_pane_g1

0x76d3,	// (0x000140e0) list_single_pane_g2_ParamLimits

0x76d3,	// (0x000140e0) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001bfb0) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001bfb0) list_single_pane_g

0xa7b1,	// (0x000171be) list_single_pane_t1_ParamLimits

0xa7b1,	// (0x000171be) list_single_pane_t1

0x76c7,	// (0x000140d4) list_single_number_pane_g1_ParamLimits

0x76c7,	// (0x000140d4) list_single_number_pane_g1

0x76d3,	// (0x000140e0) list_single_number_pane_g2_ParamLimits

0x76d3,	// (0x000140e0) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001bfb0) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001bfb0) list_single_number_pane_g

0xa51f,	// (0x00016f2c) list_single_number_pane_t1_ParamLimits

0xa51f,	// (0x00016f2c) list_single_number_pane_t1

0xa535,	// (0x00016f42) list_single_number_pane_t2_ParamLimits

0xa535,	// (0x00016f42) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0001c342) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0001c342) list_single_number_pane_t

0x3fb2,	// (0x000109bf) list_single_graphic_pane_g1_ParamLimits

0x3fb2,	// (0x000109bf) list_single_graphic_pane_g1

0x76c7,	// (0x000140d4) list_single_graphic_pane_g2_ParamLimits

0x76c7,	// (0x000140d4) list_single_graphic_pane_g2

0x76d3,	// (0x000140e0) list_single_graphic_pane_g3_ParamLimits

0x76d3,	// (0x000140e0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001bfa9) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001bfa9) list_single_graphic_pane_g

0x76df,	// (0x000140ec) list_single_graphic_pane_t1_ParamLimits

0x76df,	// (0x000140ec) list_single_graphic_pane_t1

0x76c7,	// (0x000140d4) list_single_heading_pane_g1_ParamLimits

0x76c7,	// (0x000140d4) list_single_heading_pane_g1

0x76d3,	// (0x000140e0) list_single_heading_pane_g2_ParamLimits

0x76d3,	// (0x000140e0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001bfb0) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001bfb0) list_single_heading_pane_g

0x76f5,	// (0x00014102) list_single_heading_pane_t1_ParamLimits

0x76f5,	// (0x00014102) list_single_heading_pane_t1

0x770b,	// (0x00014118) list_single_heading_pane_t2_ParamLimits

0x770b,	// (0x00014118) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001bfb5) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001bfb5) list_single_heading_pane_t

0x76c7,	// (0x000140d4) list_single_number_heading_pane_g1_ParamLimits

0x76c7,	// (0x000140d4) list_single_number_heading_pane_g1

0x76d3,	// (0x000140e0) list_single_number_heading_pane_g2_ParamLimits

0x76d3,	// (0x000140e0) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001bfb0) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001bfb0) list_single_number_heading_pane_g

0x76f5,	// (0x00014102) list_single_number_heading_pane_t1_ParamLimits

0x76f5,	// (0x00014102) list_single_number_heading_pane_t1

0x771d,	// (0x0001412a) list_single_number_heading_pane_t2_ParamLimits

0x771d,	// (0x0001412a) list_single_number_heading_pane_t2

0x772f,	// (0x0001413c) list_single_number_heading_pane_t3_ParamLimits

0x772f,	// (0x0001413c) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001bfba) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001bfba) list_single_number_heading_pane_t

0x7741,	// (0x0001414e) list_single_graphic_heading_pane_g1_ParamLimits

0x7741,	// (0x0001414e) list_single_graphic_heading_pane_g1

0x774d,	// (0x0001415a) list_single_graphic_heading_pane_g4_ParamLimits

0x774d,	// (0x0001415a) list_single_graphic_heading_pane_g4

0x76d3,	// (0x000140e0) list_single_graphic_heading_pane_g5_ParamLimits

0x76d3,	// (0x000140e0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001bfc1) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001bfc1) list_single_graphic_heading_pane_g

0x76f5,	// (0x00014102) list_single_graphic_heading_pane_t1_ParamLimits

0x76f5,	// (0x00014102) list_single_graphic_heading_pane_t1

0x775e,	// (0x0001416b) list_single_graphic_heading_pane_t2_ParamLimits

0x775e,	// (0x0001416b) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001bfc8) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001bfc8) list_single_graphic_heading_pane_t

0x7770,	// (0x0001417d) list_single_large_graphic_pane_g1_ParamLimits

0x7770,	// (0x0001417d) list_single_large_graphic_pane_g1

0x76c7,	// (0x000140d4) list_single_large_graphic_pane_g2_ParamLimits

0x76c7,	// (0x000140d4) list_single_large_graphic_pane_g2

0x76d3,	// (0x000140e0) list_single_large_graphic_pane_g3_ParamLimits

0x76d3,	// (0x000140e0) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001bfcd) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001bfcd) list_single_large_graphic_pane_g

0x97df,	// (0x000161ec) wait_border_pane_g2_copy1

0x777c,	// (0x00014189) list_single_large_graphic_pane_g4_cp2

0x7784,	// (0x00014191) list_single_large_graphic_pane_t1_ParamLimits

0x7784,	// (0x00014191) list_single_large_graphic_pane_t1

0x779a,	// (0x000141a7) list_double_pane_g1_ParamLimits

0x779a,	// (0x000141a7) list_double_pane_g1

0x3fa6,	// (0x000109b3) list_double_pane_g2_ParamLimits

0x3fa6,	// (0x000109b3) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001bfd4) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001bfd4) list_double_pane_g

0x77a6,	// (0x000141b3) list_double_pane_t1_ParamLimits

0x77a6,	// (0x000141b3) list_double_pane_t1

0x77bc,	// (0x000141c9) list_double_pane_t2_ParamLimits

0x77bc,	// (0x000141c9) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001bfd9) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001bfd9) list_double_pane_t

0x77ce,	// (0x000141db) list_double2_pane_g1_ParamLimits

0x77ce,	// (0x000141db) list_double2_pane_g1

0x77df,	// (0x000141ec) list_double2_pane_g2_ParamLimits

0x77df,	// (0x000141ec) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001bfde) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001bfde) list_double2_pane_g

0x77eb,	// (0x000141f8) list_double2_pane_t1_ParamLimits

0x77eb,	// (0x000141f8) list_double2_pane_t1

0x7801,	// (0x0001420e) list_double2_pane_t2_ParamLimits

0x7801,	// (0x0001420e) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001bfe3) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001bfe3) list_double2_pane_t

0x779a,	// (0x000141a7) list_double_number_pane_g1_ParamLimits

0x779a,	// (0x000141a7) list_double_number_pane_g1

0x3fa6,	// (0x000109b3) list_double_number_pane_g2_ParamLimits

0x3fa6,	// (0x000109b3) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001bfd4) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001bfd4) list_double_number_pane_g

0x7813,	// (0x00014220) list_double_number_pane_t1_ParamLimits

0x7813,	// (0x00014220) list_double_number_pane_t1

0x7825,	// (0x00014232) list_double_number_pane_t2_ParamLimits

0x7825,	// (0x00014232) list_double_number_pane_t2

0x783b,	// (0x00014248) list_double_number_pane_t3_ParamLimits

0x783b,	// (0x00014248) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001bfe8) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001bfe8) list_double_number_pane_t

0x784d,	// (0x0001425a) list_double_graphic_pane_g1_ParamLimits

0x784d,	// (0x0001425a) list_double_graphic_pane_g1

0x7859,	// (0x00014266) list_double_graphic_pane_g2_ParamLimits

0x7859,	// (0x00014266) list_double_graphic_pane_g2

0x7868,	// (0x00014275) list_double_graphic_pane_g3_ParamLimits

0x7868,	// (0x00014275) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001bfef) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001bfef) list_double_graphic_pane_g

0x7880,	// (0x0001428d) list_double_graphic_pane_t1_ParamLimits

0x7880,	// (0x0001428d) list_double_graphic_pane_t1

0x7896,	// (0x000142a3) list_double_graphic_pane_t2_ParamLimits

0x7896,	// (0x000142a3) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001bff8) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001bff8) list_double_graphic_pane_t

0x78a8,	// (0x000142b5) list_double2_graphic_pane_g1_ParamLimits

0x78a8,	// (0x000142b5) list_double2_graphic_pane_g1

0x78b4,	// (0x000142c1) list_double2_graphic_pane_g2_ParamLimits

0x78b4,	// (0x000142c1) list_double2_graphic_pane_g2

0x77df,	// (0x000141ec) list_double2_graphic_pane_g3_ParamLimits

0x77df,	// (0x000141ec) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001bffd) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001bffd) list_double2_graphic_pane_g

0x78c0,	// (0x000142cd) list_double2_graphic_pane_t1_ParamLimits

0x78c0,	// (0x000142cd) list_double2_graphic_pane_t1

0x78d6,	// (0x000142e3) list_double2_graphic_pane_t2_ParamLimits

0x78d6,	// (0x000142e3) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001c004) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001c004) list_double2_graphic_pane_t

0x78e8,	// (0x000142f5) list_double_large_graphic_pane_g1_ParamLimits

0x78e8,	// (0x000142f5) list_double_large_graphic_pane_g1

0x7907,	// (0x00014314) list_double_large_graphic_pane_g2_ParamLimits

0x7907,	// (0x00014314) list_double_large_graphic_pane_g2

0x3fa6,	// (0x000109b3) list_double_large_graphic_pane_g3_ParamLimits

0x3fa6,	// (0x000109b3) list_double_large_graphic_pane_g3

0x7918,	// (0x00014325) list_double_large_graphic_pane_g4_ParamLimits

0x7918,	// (0x00014325) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001c009) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001c009) list_double_large_graphic_pane_g

0x792b,	// (0x00014338) list_double_large_graphic_pane_t1_ParamLimits

0x792b,	// (0x00014338) list_double_large_graphic_pane_t1

0x7944,	// (0x00014351) list_double_large_graphic_pane_t2_ParamLimits

0x7944,	// (0x00014351) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001c014) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001c014) list_double_large_graphic_pane_t

0x7956,	// (0x00014363) list_double2_large_graphic_pane_g1_ParamLimits

0x7956,	// (0x00014363) list_double2_large_graphic_pane_g1

0x77ce,	// (0x000141db) list_double2_large_graphic_pane_g2_ParamLimits

0x77ce,	// (0x000141db) list_double2_large_graphic_pane_g2

0x77df,	// (0x000141ec) list_double2_large_graphic_pane_g3_ParamLimits

0x77df,	// (0x000141ec) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001c019) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001c019) list_double2_large_graphic_pane_g

0x7962,	// (0x0001436f) list_double2_large_graphic_pane_t1_ParamLimits

0x7962,	// (0x0001436f) list_double2_large_graphic_pane_t1

0x7978,	// (0x00014385) list_double2_large_graphic_pane_t2_ParamLimits

0x7978,	// (0x00014385) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001c020) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001c020) list_double2_large_graphic_pane_t

0x798a,	// (0x00014397) list_double_heading_pane_g1_ParamLimits

0x798a,	// (0x00014397) list_double_heading_pane_g1

0x799b,	// (0x000143a8) list_double_heading_pane_g2_ParamLimits

0x799b,	// (0x000143a8) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001c025) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001c025) list_double_heading_pane_g

0x79a7,	// (0x000143b4) list_double_heading_pane_t1_ParamLimits

0x79a7,	// (0x000143b4) list_double_heading_pane_t1

0x79bd,	// (0x000143ca) list_double_heading_pane_t2_ParamLimits

0x79bd,	// (0x000143ca) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001c02a) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001c02a) list_double_heading_pane_t

0x79cf,	// (0x000143dc) list_double_graphic_heading_pane_g1_ParamLimits

0x79cf,	// (0x000143dc) list_double_graphic_heading_pane_g1

0x798a,	// (0x00014397) list_double_graphic_heading_pane_g2_ParamLimits

0x798a,	// (0x00014397) list_double_graphic_heading_pane_g2

0x799b,	// (0x000143a8) list_double_graphic_heading_pane_g3_ParamLimits

0x799b,	// (0x000143a8) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001c02f) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001c02f) list_double_graphic_heading_pane_g

0x79db,	// (0x000143e8) list_double_graphic_heading_pane_t1_ParamLimits

0x79db,	// (0x000143e8) list_double_graphic_heading_pane_t1

0x79f1,	// (0x000143fe) list_double_graphic_heading_pane_t2_ParamLimits

0x79f1,	// (0x000143fe) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001c036) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001c036) list_double_graphic_heading_pane_t

0x7907,	// (0x00014314) list_double_time_pane_g1_ParamLimits

0x7907,	// (0x00014314) list_double_time_pane_g1

0x3fa6,	// (0x000109b3) list_double_time_pane_g2_ParamLimits

0x3fa6,	// (0x000109b3) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001c03b) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001c03b) list_double_time_pane_g

0x7a03,	// (0x00014410) list_double_time_pane_t1_ParamLimits

0x7a03,	// (0x00014410) list_double_time_pane_t1

0x7a19,	// (0x00014426) list_double_time_pane_t2_ParamLimits

0x7a19,	// (0x00014426) list_double_time_pane_t2

0x7a2b,	// (0x00014438) list_double_time_pane_t3_ParamLimits

0x7a2b,	// (0x00014438) list_double_time_pane_t3

0x7a3d,	// (0x0001444a) list_double_time_pane_t4_ParamLimits

0x7a3d,	// (0x0001444a) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001c040) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001c040) list_double_time_pane_t

0x78b4,	// (0x000142c1) list_setting_pane_g1_ParamLimits

0x78b4,	// (0x000142c1) list_setting_pane_g1

0x77df,	// (0x000141ec) list_setting_pane_g2_ParamLimits

0x77df,	// (0x000141ec) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001c049) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001c049) list_setting_pane_g

0x7a4f,	// (0x0001445c) list_setting_pane_t1_ParamLimits

0x7a4f,	// (0x0001445c) list_setting_pane_t1

0x7a66,	// (0x00014473) list_setting_pane_t2_ParamLimits

0x7a66,	// (0x00014473) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001c04e) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001c04e) list_setting_pane_t

0x7aa5,	// (0x000144b2) set_value_pane_cp_ParamLimits

0x7aa5,	// (0x000144b2) set_value_pane_cp

0x78b4,	// (0x000142c1) list_setting_number_pane_g1_ParamLimits

0x78b4,	// (0x000142c1) list_setting_number_pane_g1

0x77df,	// (0x000141ec) list_setting_number_pane_g2_ParamLimits

0x77df,	// (0x000141ec) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001c049) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001c049) list_setting_number_pane_g

0x7ab3,	// (0x000144c0) list_setting_number_pane_t1_ParamLimits

0x7ab3,	// (0x000144c0) list_setting_number_pane_t1

0x7ac7,	// (0x000144d4) list_setting_number_pane_t2_ParamLimits

0x7ac7,	// (0x000144d4) list_setting_number_pane_t2

0x7ade,	// (0x000144eb) list_setting_number_pane_t3_ParamLimits

0x7ade,	// (0x000144eb) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001c055) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001c055) list_setting_number_pane_t

0x7aa5,	// (0x000144b2) set_value_pane_ParamLimits

0x7aa5,	// (0x000144b2) set_value_pane

0x3fbe,	// (0x000109cb) bg_set_opt_pane_ParamLimits

0x3fbe,	// (0x000109cb) bg_set_opt_pane

0x3fdf,	// (0x000109ec) set_value_pane_t1

0x3fed,	// (0x000109fa) slider_set_pane_cp3

0x3ff6,	// (0x00010a03) volume_small_pane_cp

0x3fff,	// (0x00010a0c) list_form_gen_pane

0x4008,	// (0x00010a15) scroll_pane_cp8

0x7b21,	// (0x0001452e) form_field_data_pane_ParamLimits

0x7b21,	// (0x0001452e) form_field_data_pane

0x7b3f,	// (0x0001454c) form_field_data_wide_pane_ParamLimits

0x7b3f,	// (0x0001454c) form_field_data_wide_pane

0x4029,	// (0x00010a36) form_field_popup_pane_ParamLimits

0x4029,	// (0x00010a36) form_field_popup_pane

0x7b66,	// (0x00014573) form_field_popup_wide_pane_ParamLimits

0x7b66,	// (0x00014573) form_field_popup_wide_pane

0x404b,	// (0x00010a58) form_field_slider_pane_ParamLimits

0x404b,	// (0x00010a58) form_field_slider_pane

0x405e,	// (0x00010a6b) form_field_slider_wide_pane_ParamLimits

0x405e,	// (0x00010a6b) form_field_slider_wide_pane

0x4071,	// (0x00010a7e) data_form_pane

0x7b91,	// (0x0001459e) form_field_data_pane_t1

0x407d,	// (0x00010a8a) input_focus_pane

0x408b,	// (0x00010a98) data_form_wide_pane

0x40c3,	// (0x00010ad0) form_field_data_wide_pane_t1

0x3d65,	// (0x00010772) input_focus_pane_cp6

0x7bab,	// (0x000145b8) form_field_popup_pane_t1

0x407d,	// (0x00010a8a) input_focus_pane_cp7

0x40e2,	// (0x00010aef) list_form_pane

0x40f6,	// (0x00010b03) form_field_popup_wide_pane_t1

0x407d,	// (0x00010a8a) input_focus_pane_cp8

0x4108,	// (0x00010b15) list_form_wide_pane

0x7bcd,	// (0x000145da) form_field_slider_pane_t1_ParamLimits

0x7bcd,	// (0x000145da) form_field_slider_pane_t1

0x7be1,	// (0x000145ee) form_field_slider_pane_t2_ParamLimits

0x7be1,	// (0x000145ee) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001c065) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001c065) form_field_slider_pane_t

0x38ed,	// (0x000102fa) input_focus_pane_cp9_ParamLimits

0x38ed,	// (0x000102fa) input_focus_pane_cp9

0x7bf3,	// (0x00014600) slider_cont_pane_ParamLimits

0x7bf3,	// (0x00014600) slider_cont_pane

0x4114,	// (0x00010b21) form_field_slider_wide_pane_t1_ParamLimits

0x4114,	// (0x00010b21) form_field_slider_wide_pane_t1

0x4126,	// (0x00010b33) form_field_slider_wide_pane_t2_ParamLimits

0x4126,	// (0x00010b33) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001c06a) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001c06a) form_field_slider_wide_pane_t

0x38ed,	// (0x000102fa) input_focus_pane_cp10_ParamLimits

0x38ed,	// (0x000102fa) input_focus_pane_cp10

0x7c07,	// (0x00014614) slider_cont_pane_cp1_ParamLimits

0x7c07,	// (0x00014614) slider_cont_pane_cp1

0x7c1b,	// (0x00014628) slider_form_pane_cp

0x4138,	// (0x00010b45) input_focus_pane_g1

0x4140,	// (0x00010b4d) input_focus_pane_g2

0x4148,	// (0x00010b55) input_focus_pane_g3

0x4150,	// (0x00010b5d) input_focus_pane_g4

0x4158,	// (0x00010b65) input_focus_pane_g5

0x4160,	// (0x00010b6d) input_focus_pane_g6

0x4168,	// (0x00010b75) input_focus_pane_g7

0x4170,	// (0x00010b7d) input_focus_pane_g8

0x4178,	// (0x00010b85) input_focus_pane_g9

0x36d2,	// (0x000100df) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001c06f) input_focus_pane_g

0x97e8,	// (0x000161f5) wait_border_pane_g3_copy1

0x7c23,	// (0x00014630) data_form_pane_t1

0x36d2,	// (0x000100df) wait_anim_pane_g1_copy1

0xa792,	// (0x0001719f) data_form_wide_pane_t1

0x7c42,	// (0x0001464f) list_form_graphic_pane_cp_ParamLimits

0x7c42,	// (0x0001464f) list_form_graphic_pane_cp

0xa767,	// (0x00017174) slider_form_pane_g1

0xa770,	// (0x0001717d) slider_form_pane_g2

0x0006,

0xf965,	// (0x0001c372) slider_form_pane_g

0x4180,	// (0x00010b8d) list_form_graphic_pane_ParamLimits

0x4180,	// (0x00010b8d) list_form_graphic_pane

0x4192,	// (0x00010b9f) list_form_graphic_pane_g1

0x419a,	// (0x00010ba7) list_form_graphic_pane_t1_ParamLimits

0x419a,	// (0x00010ba7) list_form_graphic_pane_t1

0x3905,	// (0x00010312) list_highlight_pane_cp5_ParamLimits

0x3905,	// (0x00010312) list_highlight_pane_cp5

0x7c57,	// (0x00014664) find_pane_g1

0x41af,	// (0x00010bbc) input_find_pane

0x7c60,	// (0x0001466d) input_find_pane_g1_ParamLimits

0x7c60,	// (0x0001466d) input_find_pane_g1

0x7c6c,	// (0x00014679) input_find_pane_t1_ParamLimits

0x7c6c,	// (0x00014679) input_find_pane_t1

0x7c81,	// (0x0001468e) input_find_pane_t2_ParamLimits

0x7c81,	// (0x0001468e) input_find_pane_t2

0x0001,

0xf677,	// (0x0001c084) input_find_pane_t_ParamLimits

0xf677,	// (0x0001c084) input_find_pane_t

0x41b8,	// (0x00010bc5) input_focus_pane_cp5_ParamLimits

0x41b8,	// (0x00010bc5) input_focus_pane_cp5

0x41cb,	// (0x00010bd8) bg_popup_window_pane_cp2_ParamLimits

0x41cb,	// (0x00010bd8) bg_popup_window_pane_cp2

0x41d8,	// (0x00010be5) listscroll_menu_pane_ParamLimits

0x41d8,	// (0x00010be5) listscroll_menu_pane

0x7ca2,	// (0x000146af) popup_submenu_window_ParamLimits

0x7ca2,	// (0x000146af) popup_submenu_window

0x41e4,	// (0x00010bf1) find_popup_pane_g1

0x41ec,	// (0x00010bf9) input_popup_find_pane_cp

0x41f6,	// (0x00010c03) input_focus_pane_cp4_ParamLimits

0x41f6,	// (0x00010c03) input_focus_pane_cp4

0x4204,	// (0x00010c11) input_popup_find_pane_t1_ParamLimits

0x4204,	// (0x00010c11) input_popup_find_pane_t1

0x384b,	// (0x00010258) bg_popup_sub_pane_cp

0x4232,	// (0x00010c3f) listscroll_popup_sub_pane

0x423a,	// (0x00010c47) list_submenu_pane_ParamLimits

0x423a,	// (0x00010c47) list_submenu_pane

0x424b,	// (0x00010c58) scroll_pane_cp4

0x4253,	// (0x00010c60) list_single_popup_submenu_pane_ParamLimits

0x4253,	// (0x00010c60) list_single_popup_submenu_pane

0x4268,	// (0x00010c75) list_single_popup_submenu_pane_g1

0x4270,	// (0x00010c7d) list_single_popup_submenu_pane_t1_ParamLimits

0x4270,	// (0x00010c7d) list_single_popup_submenu_pane_t1

0x3905,	// (0x00010312) bg_active_tab_pane_cp1_ParamLimits

0x3905,	// (0x00010312) bg_active_tab_pane_cp1

0x7ce0,	// (0x000146ed) tabs_2_active_pane_g1

0x7ce8,	// (0x000146f5) tabs_2_active_pane_t1

0x3905,	// (0x00010312) bg_passive_tab_pane_cp1_ParamLimits

0x3905,	// (0x00010312) bg_passive_tab_pane_cp1

0x7ce0,	// (0x000146ed) tabs_2_passive_pane_g1

0x7ce8,	// (0x000146f5) tabs_2_passive_pane_t1

0x7cfa,	// (0x00014707) bg_active_tab_pane_cp4

0x7d08,	// (0x00014715) tabs_2_long_active_pane_t1

0x7d1b,	// (0x00014728) bg_passive_tab_pane_cp4

0x5e24,	// (0x00012831) list_single_midp_graphic_pane_g4_ParamLimits

0x7cfa,	// (0x00014707) bg_active_tab_pane_cp5

0x7d27,	// (0x00014734) tabs_3_long_active_pane_t1

0x7d1b,	// (0x00014728) bg_passive_tab_pane_cp5

0x5e24,	// (0x00012831) list_single_midp_graphic_pane_g4

0x3905,	// (0x00010312) bg_popup_window_pane_cp13_ParamLimits

0x3905,	// (0x00010312) bg_popup_window_pane_cp13

0x7d42,	// (0x0001474f) listscroll_popup_fast_pane_ParamLimits

0x7d42,	// (0x0001474f) listscroll_popup_fast_pane

0x7d51,	// (0x0001475e) grid_popup_fast_pane_ParamLimits

0x7d51,	// (0x0001475e) grid_popup_fast_pane

0x7d63,	// (0x00014770) scroll_pane_cp9_ParamLimits

0x7d63,	// (0x00014770) scroll_pane_cp9

0xc6ec,	// (0x000190f9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6ec,	// (0x000190f9) list_single_graphic_hl_pane_t1_cp2

0x7d87,	// (0x00014794) input_focus_pane_cp20_ParamLimits

0x7d87,	// (0x00014794) input_focus_pane_cp20

0x7d95,	// (0x000147a2) query_popup_data_pane_t1_ParamLimits

0x7d95,	// (0x000147a2) query_popup_data_pane_t1

0x7da8,	// (0x000147b5) query_popup_data_pane_t2_ParamLimits

0x7da8,	// (0x000147b5) query_popup_data_pane_t2

0x7dee,	// (0x000147fb) query_popup_data_pane_t3_ParamLimits

0x7dee,	// (0x000147fb) query_popup_data_pane_t3

0x7e2f,	// (0x0001483c) query_popup_data_pane_t4_ParamLimits

0x7e2f,	// (0x0001483c) query_popup_data_pane_t4

0x7e6b,	// (0x00014878) query_popup_data_pane_t5_ParamLimits

0x7e6b,	// (0x00014878) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001c089) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001c089) query_popup_data_pane_t

0x4138,	// (0x00010b45) bg_set_opt_pane_g1

0x4140,	// (0x00010b4d) bg_set_opt_pane_g2

0x4148,	// (0x00010b55) bg_set_opt_pane_g3

0x4150,	// (0x00010b5d) bg_set_opt_pane_g4

0x4158,	// (0x00010b65) bg_set_opt_pane_g5

0x4160,	// (0x00010b6d) bg_set_opt_pane_g6

0x4168,	// (0x00010b75) bg_set_opt_pane_g7

0x4170,	// (0x00010b7d) bg_set_opt_pane_g8

0x4178,	// (0x00010b85) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001c094) bg_set_opt_pane_g

0x53a6,	// (0x00011db3) control_top_pane_stacon_ParamLimits

0x53a6,	// (0x00011db3) control_top_pane_stacon

0x53f9,	// (0x00011e06) signal_pane_stacon_ParamLimits

0x53f9,	// (0x00011e06) signal_pane_stacon

0x84e4,	// (0x00014ef1) stacon_top_pane_g1_ParamLimits

0x84e4,	// (0x00014ef1) stacon_top_pane_g1

0x541e,	// (0x00011e2b) title_pane_stacon_ParamLimits

0x541e,	// (0x00011e2b) title_pane_stacon

0x5448,	// (0x00011e55) uni_indicator_pane_stacon_ParamLimits

0x5448,	// (0x00011e55) uni_indicator_pane_stacon

0x545d,	// (0x00011e6a) battery_pane_stacon_ParamLimits

0x545d,	// (0x00011e6a) battery_pane_stacon

0x54a1,	// (0x00011eae) control_bottom_pane_stacon_ParamLimits

0x54a1,	// (0x00011eae) control_bottom_pane_stacon

0x54c4,	// (0x00011ed1) navi_pane_stacon_ParamLimits

0x54c4,	// (0x00011ed1) navi_pane_stacon

0x8506,	// (0x00014f13) stacon_bottom_pane_g1_ParamLimits

0x8506,	// (0x00014f13) stacon_bottom_pane_g1

0x5103,	// (0x00011b10) aid_levels_signal_lsc_ParamLimits

0x5103,	// (0x00011b10) aid_levels_signal_lsc

0x511a,	// (0x00011b27) signal_pane_stacon_g1_ParamLimits

0x511a,	// (0x00011b27) signal_pane_stacon_g1

0x512e,	// (0x00011b3b) signal_pane_stacon_g2_ParamLimits

0x512e,	// (0x00011b3b) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001c0a7) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001c0a7) signal_pane_stacon_g

0x5163,	// (0x00011b70) title_pane_stacon_t1_ParamLimits

0x5163,	// (0x00011b70) title_pane_stacon_t1

0x7eaf,	// (0x000148bc) uni_indicator_pane_stacon_g1

0x7eb9,	// (0x000148c6) uni_indicator_pane_stacon_g2

0x7ec3,	// (0x000148d0) uni_indicator_pane_stacon_g3

0x7ecd,	// (0x000148da) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001c0b3) uni_indicator_pane_stacon_g

0x5188,	// (0x00011b95) control_top_pane_stacon_g1

0x5190,	// (0x00011b9d) control_top_pane_stacon_t1_ParamLimits

0x5190,	// (0x00011b9d) control_top_pane_stacon_t1

0x51c7,	// (0x00011bd4) aid_levels_battery_lsc_ParamLimits

0x51c7,	// (0x00011bd4) aid_levels_battery_lsc

0x51df,	// (0x00011bec) battery_pane_stacon_g1_ParamLimits

0x51df,	// (0x00011bec) battery_pane_stacon_g1

0x51f2,	// (0x00011bff) battery_pane_stacon_g2_ParamLimits

0x51f2,	// (0x00011bff) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001c0bc) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001c0bc) battery_pane_stacon_g

0x5230,	// (0x00011c3d) navi_icon_pane_stacon

0x5244,	// (0x00011c51) navi_navi_pane_stacon

0x5230,	// (0x00011c3d) navi_text_pane_stacon

0x5188,	// (0x00011b95) control_bottom_pane_stacon_g1

0x525a,	// (0x00011c67) control_bottom_pane_stacon_t1_ParamLimits

0x525a,	// (0x00011c67) control_bottom_pane_stacon_t1

0x7ef1,	// (0x000148fe) grid_app_pane_ParamLimits

0x7ef1,	// (0x000148fe) grid_app_pane

0x7f13,	// (0x00014920) scroll_pane_cp15_ParamLimits

0x7f13,	// (0x00014920) scroll_pane_cp15

0x7f26,	// (0x00014933) cell_app_pane_ParamLimits

0x7f26,	// (0x00014933) cell_app_pane

0x7f52,	// (0x0001495f) cell_app_pane_g1_ParamLimits

0x7f52,	// (0x0001495f) cell_app_pane_g1

0x7f76,	// (0x00014983) cell_app_pane_g2_ParamLimits

0x7f76,	// (0x00014983) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001c0c1) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001c0c1) cell_app_pane_g

0x7f82,	// (0x0001498f) cell_app_pane_t1_ParamLimits

0x7f82,	// (0x0001498f) cell_app_pane_t1

0x7f99,	// (0x000149a6) grid_highlight_pane_ParamLimits

0x7f99,	// (0x000149a6) grid_highlight_pane

0x4138,	// (0x00010b45) cell_highlight_pane_g1

0x4140,	// (0x00010b4d) cell_highlight_pane_g2

0x4148,	// (0x00010b55) cell_highlight_pane_g3

0x4150,	// (0x00010b5d) cell_highlight_pane_g4

0x4158,	// (0x00010b65) cell_highlight_pane_g5

0x4160,	// (0x00010b6d) cell_highlight_pane_g6

0x4168,	// (0x00010b75) cell_highlight_pane_g7

0x4170,	// (0x00010b7d) cell_highlight_pane_g8

0x4178,	// (0x00010b85) cell_highlight_pane_g9

0x36d2,	// (0x000100df) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001c06f) cell_highlight_pane_g

0x7faa,	// (0x000149b7) bg_scroll_pane

0x52a4,	// (0x00011cb1) scroll_handle_pane

0x7ff1,	// (0x000149fe) scroll_bg_pane_g1

0x8006,	// (0x00014a13) scroll_bg_pane_g2

0x801e,	// (0x00014a2b) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001c0c6) scroll_bg_pane_g

0x8033,	// (0x00014a40) scroll_handle_focus_pane_ParamLimits

0x8033,	// (0x00014a40) scroll_handle_focus_pane

0x7ff1,	// (0x000149fe) scroll_handle_pane_g1

0x8040,	// (0x00014a4d) scroll_handle_pane_g2

0x801e,	// (0x00014a2b) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001c0cd) scroll_handle_pane_g

0x41f6,	// (0x00010c03) bg_popup_sub_pane_cp21_ParamLimits

0x41f6,	// (0x00010c03) bg_popup_sub_pane_cp21

0x8054,	// (0x00014a61) popup_fep_japan_predictive_window_t1_ParamLimits

0x8054,	// (0x00014a61) popup_fep_japan_predictive_window_t1

0x806b,	// (0x00014a78) popup_fep_japan_predictive_window_t2_ParamLimits

0x806b,	// (0x00014a78) popup_fep_japan_predictive_window_t2

0x809e,	// (0x00014aab) popup_fep_japan_predictive_window_t3_ParamLimits

0x809e,	// (0x00014aab) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001c0d4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001c0d4) popup_fep_japan_predictive_window_t

0x384b,	// (0x00010258) bg_popup_sub_pane_cp23

0x80d5,	// (0x00014ae2) listscroll_japin_cand_pane

0x80dd,	// (0x00014aea) popup_fep_japan_candidate_window_t1

0x80eb,	// (0x00014af8) candidate_pane_ParamLimits

0x80eb,	// (0x00014af8) candidate_pane

0x80fd,	// (0x00014b0a) scroll_pane_cp30

0x8107,	// (0x00014b14) list_single_popup_jap_candidate_pane_ParamLimits

0x8107,	// (0x00014b14) list_single_popup_jap_candidate_pane

0x384b,	// (0x00010258) list_highlight_pane_cp30

0x811b,	// (0x00014b28) list_single_popup_jap_candidate_pane_t1

0x812a,	// (0x00014b37) level_1_signal

0x8137,	// (0x00014b44) level_2_signal

0x8144,	// (0x00014b51) level_3_signal

0x8151,	// (0x00014b5e) level_4_signal

0x815e,	// (0x00014b6b) level_5_signal

0x816b,	// (0x00014b78) level_6_signal

0x8178,	// (0x00014b85) level_7_signal

0x812a,	// (0x00014b37) level_1_battery

0x8137,	// (0x00014b44) level_2_battery

0x8144,	// (0x00014b51) level_3_battery

0x8151,	// (0x00014b5e) level_4_battery

0x815e,	// (0x00014b6b) level_5_battery

0x816b,	// (0x00014b78) level_6_battery

0x8178,	// (0x00014b85) level_7_battery

0x819d,	// (0x00014baa) list_menu_pane_ParamLimits

0x819d,	// (0x00014baa) list_menu_pane

0x81b3,	// (0x00014bc0) scroll_pane_cp25_ParamLimits

0x81b3,	// (0x00014bc0) scroll_pane_cp25

0x81cc,	// (0x00014bd9) list_double2_graphic_pane_cp2_ParamLimits

0x81cc,	// (0x00014bd9) list_double2_graphic_pane_cp2

0x81cc,	// (0x00014bd9) list_double2_large_graphic_pane_cp2_ParamLimits

0x81cc,	// (0x00014bd9) list_double2_large_graphic_pane_cp2

0x81cc,	// (0x00014bd9) list_double2_pane_cp2_ParamLimits

0x81cc,	// (0x00014bd9) list_double2_pane_cp2

0x81cc,	// (0x00014bd9) list_double_graphic_pane_cp2_ParamLimits

0x81cc,	// (0x00014bd9) list_double_graphic_pane_cp2

0x81cc,	// (0x00014bd9) list_double_large_graphic_pane_cp2_ParamLimits

0x81cc,	// (0x00014bd9) list_double_large_graphic_pane_cp2

0x81cc,	// (0x00014bd9) list_double_number_pane_cp2_ParamLimits

0x81cc,	// (0x00014bd9) list_double_number_pane_cp2

0x81cc,	// (0x00014bd9) list_double_pane_cp2_ParamLimits

0x81cc,	// (0x00014bd9) list_double_pane_cp2

0x81f2,	// (0x00014bff) list_single_2graphic_pane_cp2_ParamLimits

0x81f2,	// (0x00014bff) list_single_2graphic_pane_cp2

0x81f2,	// (0x00014bff) list_single_graphic_heading_pane_cp2_ParamLimits

0x81f2,	// (0x00014bff) list_single_graphic_heading_pane_cp2

0x81f2,	// (0x00014bff) list_single_graphic_pane_cp2_ParamLimits

0x81f2,	// (0x00014bff) list_single_graphic_pane_cp2

0x81f2,	// (0x00014bff) list_single_heading_pane_cp2_ParamLimits

0x81f2,	// (0x00014bff) list_single_heading_pane_cp2

0x820f,	// (0x00014c1c) list_single_large_graphic_pane_cp2_ParamLimits

0x820f,	// (0x00014c1c) list_single_large_graphic_pane_cp2

0x81f2,	// (0x00014bff) list_single_number_heading_pane_cp2_ParamLimits

0x81f2,	// (0x00014bff) list_single_number_heading_pane_cp2

0x81f2,	// (0x00014bff) list_single_number_pane_cp2_ParamLimits

0x81f2,	// (0x00014bff) list_single_number_pane_cp2

0x821f,	// (0x00014c2c) list_single_pane_cp2_ParamLimits

0x821f,	// (0x00014c2c) list_single_pane_cp2

0x829a,	// (0x00014ca7) bg_popup_sub_pane_cp22

0x5356,	// (0x00011d63) popup_side_volume_key_window_g1

0x5380,	// (0x00011d8d) popup_side_volume_key_window_t1

0x539e,	// (0x00011dab) volume_small_pane_cp1

0x38ed,	// (0x000102fa) bg_popup_sub_pane_cp24_ParamLimits

0x38ed,	// (0x000102fa) bg_popup_sub_pane_cp24

0x82b0,	// (0x00014cbd) fep_china_uni_candidate_pane_ParamLimits

0x82b0,	// (0x00014cbd) fep_china_uni_candidate_pane

0x82c4,	// (0x00014cd1) fep_china_uni_entry_pane

0x82d4,	// (0x00014ce1) popup_fep_china_uni_window_g1

0x82f0,	// (0x00014cfd) fep_china_uni_entry_pane_g1

0x82fa,	// (0x00014d07) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001c105) fep_china_uni_entry_pane_g

0x8304,	// (0x00014d11) fep_entry_item_pane

0x830e,	// (0x00014d1b) fep_candidate_item_pane

0x8316,	// (0x00014d23) fep_china_uni_candidate_pane_g1

0x8320,	// (0x00014d2d) fep_china_uni_candidate_pane_g2

0x8328,	// (0x00014d35) fep_china_uni_candidate_pane_g3

0x8330,	// (0x00014d3d) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001c10a) fep_china_uni_candidate_pane_g

0x36d2,	// (0x000100df) fep_entry_item_pane_g1

0x833a,	// (0x00014d47) fep_entry_item_pane_t1_ParamLimits

0x833a,	// (0x00014d47) fep_entry_item_pane_t1

0x8350,	// (0x00014d5d) fep_candidate_item_pane_t1_ParamLimits

0x8350,	// (0x00014d5d) fep_candidate_item_pane_t1

0x8365,	// (0x00014d72) fep_candidate_item_pane_t2_ParamLimits

0x8365,	// (0x00014d72) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001c113) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001c113) fep_candidate_item_pane_t

0x3905,	// (0x00010312) list_highlight_pane_cp31_ParamLimits

0x3905,	// (0x00010312) list_highlight_pane_cp31

0x8377,	// (0x00014d84) level_1_signal_lsc

0x8380,	// (0x00014d8d) level_2_signal_lsc

0x8389,	// (0x00014d96) level_3_signal_lsc

0x8392,	// (0x00014d9f) level_4_signal_lsc

0x839b,	// (0x00014da8) level_5_signal_lsc

0x83a4,	// (0x00014db1) level_6_signal_lsc

0x83ad,	// (0x00014dba) level_7_signal_lsc

0x83ad,	// (0x00014dba) level_1_battery_lsc

0x83b6,	// (0x00014dc3) level_2_battery_lsc

0x83bf,	// (0x00014dcc) level_3_battery_lsc

0x83c8,	// (0x00014dd5) level_4_battery_lsc

0x83d1,	// (0x00014dde) level_5_battery_lsc

0x83da,	// (0x00014de7) level_6_battery_lsc

0x8377,	// (0x00014d84) level_7_battery_lsc

0x83e3,	// (0x00014df0) scroll_handle_focus_pane_g1

0x83ec,	// (0x00014df9) scroll_handle_focus_pane_g2

0x83f5,	// (0x00014e02) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001c118) scroll_handle_focus_pane_g

0x83fe,	// (0x00014e0b) list_single_2graphic_pane_g1_ParamLimits

0x83fe,	// (0x00014e0b) list_single_2graphic_pane_g1

0x774d,	// (0x0001415a) list_single_2graphic_pane_g2_ParamLimits

0x774d,	// (0x0001415a) list_single_2graphic_pane_g2

0x76d3,	// (0x000140e0) list_single_2graphic_pane_g3_ParamLimits

0x76d3,	// (0x000140e0) list_single_2graphic_pane_g3

0x840a,	// (0x00014e17) list_single_2graphic_pane_g4_ParamLimits

0x840a,	// (0x00014e17) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001c11f) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001c11f) list_single_2graphic_pane_g

0x841b,	// (0x00014e28) list_single_2graphic_pane_t1_ParamLimits

0x841b,	// (0x00014e28) list_single_2graphic_pane_t1

0x8449,	// (0x00014e56) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8449,	// (0x00014e56) list_double2_graphic_large_graphic_pane_g1

0x77ce,	// (0x000141db) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x77ce,	// (0x000141db) list_double2_graphic_large_graphic_pane_g2

0x77df,	// (0x000141ec) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x77df,	// (0x000141ec) list_double2_graphic_large_graphic_pane_g3

0x845b,	// (0x00014e68) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x845b,	// (0x00014e68) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001c128) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001c128) list_double2_graphic_large_graphic_pane_g

0x8467,	// (0x00014e74) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8467,	// (0x00014e74) list_double2_graphic_large_graphic_pane_t1

0x847d,	// (0x00014e8a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x847d,	// (0x00014e8a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001c131) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001c131) list_double2_graphic_large_graphic_pane_t

0x85c9,	// (0x00014fd6) popup_fast_swap_window_ParamLimits

0x85c9,	// (0x00014fd6) popup_fast_swap_window

0x85e7,	// (0x00014ff4) popup_side_volume_key_window

0x8605,	// (0x00015012) stacon_top_pane

0x860f,	// (0x0001501c) status_pane_ParamLimits

0x860f,	// (0x0001501c) status_pane

0x861d,	// (0x0001502a) status_small_pane

0x384b,	// (0x00010258) control_pane

0x384b,	// (0x00010258) stacon_bottom_pane

0x4008,	// (0x00010a15) scroll_pane_cp121

0x3fff,	// (0x00010a0c) set_content_pane

0x848f,	// (0x00014e9c) bg_active_tab_pane_g1_cp1

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp1

0x84a1,	// (0x00014eae) bg_active_tab_pane_g3_cp1

0x848f,	// (0x00014e9c) bg_passive_tab_pane_g1_cp1

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp1

0x84a1,	// (0x00014eae) bg_passive_tab_pane_g3_cp1

0x84aa,	// (0x00014eb7) bg_active_tab_pane_g1_cp2

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp2

0x84b3,	// (0x00014ec0) bg_active_tab_pane_g3_cp2

0x84aa,	// (0x00014eb7) bg_passive_tab_pane_g1_cp2

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp2

0x84b3,	// (0x00014ec0) bg_passive_tab_pane_g3_cp2

0x84bc,	// (0x00014ec9) bg_active_tab_pane_g1_cp3

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp3

0x84c5,	// (0x00014ed2) bg_active_tab_pane_g3_cp3

0x84bc,	// (0x00014ec9) bg_passive_tab_pane_g1_cp3

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp3

0x84c5,	// (0x00014ed2) bg_passive_tab_pane_g3_cp3

0x84ce,	// (0x00014edb) bg_active_tab_pane_g1_cp4

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp4

0x84d9,	// (0x00014ee6) bg_active_tab_pane_g3_cp4

0x84ce,	// (0x00014edb) bg_passive_tab_pane_g1_cp4

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp4

0x84d9,	// (0x00014ee6) bg_passive_tab_pane_g3_cp4

0x8522,	// (0x00014f2f) bg_active_tab_pane_g1_cp5

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp5

0x852b,	// (0x00014f38) bg_active_tab_pane_g3_cp5

0x8522,	// (0x00014f2f) bg_passive_tab_pane_g1_cp5

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp5

0x852b,	// (0x00014f38) bg_passive_tab_pane_g3_cp5

0x8534,	// (0x00014f41) list_set_graphic_pane_ParamLimits

0x8534,	// (0x00014f41) list_set_graphic_pane

0x384b,	// (0x00010258) bg_set_opt_pane_cp4

0x854a,	// (0x00014f57) list_set_graphic_pane_g1_ParamLimits

0x854a,	// (0x00014f57) list_set_graphic_pane_g1

0x8556,	// (0x00014f63) list_set_graphic_pane_g2_ParamLimits

0x8556,	// (0x00014f63) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001c136) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001c136) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0001c4b7) volume_small_pane_cp_g

0x857a,	// (0x00014f87) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x857a,	// (0x00014f87) list_double2_large_graphic_pane_g1_cp2

0x8588,	// (0x00014f95) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8588,	// (0x00014f95) list_double2_large_graphic_pane_g2_cp2

0x8599,	// (0x00014fa6) list_double2_large_graphic_pane_g3_cp2

0x85a1,	// (0x00014fae) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x85a1,	// (0x00014fae) list_double2_large_graphic_pane_t1_cp2

0x85b7,	// (0x00014fc4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x85b7,	// (0x00014fc4) list_double2_large_graphic_pane_t2_cp2

0xa2cc,	// (0x00016cd9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa2cc,	// (0x00016cd9) list_double_large_graphic_pane_g1_cp2

0xa2df,	// (0x00016cec) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa2df,	// (0x00016cec) list_double_large_graphic_pane_g2_cp2

0x8738,	// (0x00015145) list_double_large_graphic_pane_g3_cp2

0xa2f0,	// (0x00016cfd) list_double_large_graphic_pane_g4_cp

0xa2f8,	// (0x00016d05) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa2f8,	// (0x00016d05) list_double_large_graphic_pane_t1_cp2

0xa30f,	// (0x00016d1c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa30f,	// (0x00016d1c) list_double_large_graphic_pane_t2_cp2

0x8628,	// (0x00015035) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8628,	// (0x00015035) list_double2_graphic_pane_g1_cp2

0x8636,	// (0x00015043) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8636,	// (0x00015043) list_double2_graphic_pane_g2_cp2

0x8647,	// (0x00015054) list_double2_graphic_pane_g3_cp2

0x8651,	// (0x0001505e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8651,	// (0x0001505e) list_double2_graphic_pane_t1_cp2

0x8667,	// (0x00015074) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8667,	// (0x00015074) list_double2_graphic_pane_t2_cp2

0x8679,	// (0x00015086) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8679,	// (0x00015086) list_single_number_heading_pane_g1_cp2

0x8685,	// (0x00015092) list_single_number_heading_pane_g2_cp2

0x868d,	// (0x0001509a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x868d,	// (0x0001509a) list_single_number_heading_pane_t1_cp2

0x86a3,	// (0x000150b0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x86a3,	// (0x000150b0) list_single_number_heading_pane_t2_cp2

0x86b7,	// (0x000150c4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x86b7,	// (0x000150c4) list_single_number_heading_pane_t3_cp2

0x8679,	// (0x00015086) list_single_heading_pane_g1_cp2_ParamLimits

0x8679,	// (0x00015086) list_single_heading_pane_g1_cp2

0x8685,	// (0x00015092) list_single_heading_pane_g2_cp2

0x868d,	// (0x0001509a) list_single_heading_pane_t1_cp2_ParamLimits

0x868d,	// (0x0001509a) list_single_heading_pane_t1_cp2

0xa0c6,	// (0x00016ad3) list_single_heading_pane_t2_cp2_ParamLimits

0xa0c6,	// (0x00016ad3) list_single_heading_pane_t2_cp2

0xa00e,	// (0x00016a1b) list_double_graphic_pane_g1_cp2_ParamLimits

0xa00e,	// (0x00016a1b) list_double_graphic_pane_g1_cp2

0xa01a,	// (0x00016a27) list_double_graphic_pane_g2_cp2_ParamLimits

0xa01a,	// (0x00016a27) list_double_graphic_pane_g2_cp2

0xa029,	// (0x00016a36) list_double_graphic_pane_g3_cp2

0xa031,	// (0x00016a3e) list_double_graphic_pane_t1_cp2_ParamLimits

0xa031,	// (0x00016a3e) list_double_graphic_pane_t1_cp2

0xa047,	// (0x00016a54) list_double_graphic_pane_t2_cp2_ParamLimits

0xa047,	// (0x00016a54) list_double_graphic_pane_t2_cp2

0x872c,	// (0x00015139) list_double_number_pane_g1_cp2_ParamLimits

0x872c,	// (0x00015139) list_double_number_pane_g1_cp2

0x8738,	// (0x00015145) list_double_number_pane_g2_cp2

0x9fd2,	// (0x000169df) list_double_number_pane_t1_cp2_ParamLimits

0x9fd2,	// (0x000169df) list_double_number_pane_t1_cp2

0x9fe6,	// (0x000169f3) list_double_number_pane_t2_cp2_ParamLimits

0x9fe6,	// (0x000169f3) list_double_number_pane_t2_cp2

0x9ffc,	// (0x00016a09) list_double_number_pane_t3_cp2_ParamLimits

0x9ffc,	// (0x00016a09) list_double_number_pane_t3_cp2

0x9ebb,	// (0x000168c8) list_single_graphic_pane_g1_cp2_ParamLimits

0x9ebb,	// (0x000168c8) list_single_graphic_pane_g1_cp2

0x879d,	// (0x000151aa) list_single_graphic_pane_g2_cp2_ParamLimits

0x879d,	// (0x000151aa) list_single_graphic_pane_g2_cp2

0x87a9,	// (0x000151b6) list_single_graphic_pane_g3_cp2

0x9e91,	// (0x0001689e) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e91,	// (0x0001689e) list_single_graphic_pane_t1_cp2

0x879d,	// (0x000151aa) list_single_number_pane_g1_cp2_ParamLimits

0x879d,	// (0x000151aa) list_single_number_pane_g1_cp2

0x87a9,	// (0x000151b6) list_single_number_pane_g2_cp2

0x9e91,	// (0x0001689e) list_single_number_pane_t1_cp2_ParamLimits

0x9e91,	// (0x0001689e) list_single_number_pane_t1_cp2

0x9ea7,	// (0x000168b4) list_single_number_pane_t2_cp2_ParamLimits

0x9ea7,	// (0x000168b4) list_single_number_pane_t2_cp2

0x8588,	// (0x00014f95) list_double2_pane_g1_cp2_ParamLimits

0x8588,	// (0x00014f95) list_double2_pane_g1_cp2

0x8599,	// (0x00014fa6) list_double2_pane_g2_cp2

0x8704,	// (0x00015111) list_double2_pane_t1_cp2_ParamLimits

0x8704,	// (0x00015111) list_double2_pane_t1_cp2

0x871a,	// (0x00015127) list_double2_pane_t2_cp2_ParamLimits

0x871a,	// (0x00015127) list_double2_pane_t2_cp2

0x872c,	// (0x00015139) list_double_pane_g1_cp2_ParamLimits

0x872c,	// (0x00015139) list_double_pane_g1_cp2

0x8738,	// (0x00015145) list_double_pane_g2_cp2

0x8740,	// (0x0001514d) list_double_pane_t1_cp2_ParamLimits

0x8740,	// (0x0001514d) list_double_pane_t1_cp2

0x8756,	// (0x00015163) list_double_pane_t2_cp2_ParamLimits

0x8756,	// (0x00015163) list_double_pane_t2_cp2

0x878d,	// (0x0001519a) list_single_pane_cp2_g3

0x879d,	// (0x000151aa) list_single_pane_g1_cp2_ParamLimits

0x879d,	// (0x000151aa) list_single_pane_g1_cp2

0x87a9,	// (0x000151b6) list_single_pane_g2_cp2

0x87b1,	// (0x000151be) list_single_pane_t1_cp2_ParamLimits

0x87b1,	// (0x000151be) list_single_pane_t1_cp2

0x87c9,	// (0x000151d6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x87c9,	// (0x000151d6) list_single_large_graphic_pane_g1_cp2

0x87d7,	// (0x000151e4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x87d7,	// (0x000151e4) list_single_large_graphic_pane_g2_cp2

0x87e3,	// (0x000151f0) list_single_large_graphic_pane_g3_cp2

0x87eb,	// (0x000151f8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x87eb,	// (0x000151f8) list_single_large_graphic_pane_g4_cp1

0x8805,	// (0x00015212) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8805,	// (0x00015212) list_single_large_graphic_pane_t1_cp2

0x9e5b,	// (0x00016868) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e5b,	// (0x00016868) list_single_graphic_heading_pane_g1_cp2

0x9e28,	// (0x00016835) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e28,	// (0x00016835) list_single_graphic_heading_pane_g4_cp2

0x87a9,	// (0x000151b6) list_single_graphic_heading_pane_g5_cp2

0x9e67,	// (0x00016874) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9e67,	// (0x00016874) list_single_graphic_heading_pane_t1_cp2

0x9e7d,	// (0x0001688a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e7d,	// (0x0001688a) list_single_graphic_heading_pane_t2_cp2

0x9e1c,	// (0x00016829) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e1c,	// (0x00016829) list_single_2graphic_pane_g1_cp2

0x9e28,	// (0x00016835) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e28,	// (0x00016835) list_single_2graphic_pane_g2_cp2

0x87a9,	// (0x000151b6) list_single_2graphic_pane_g3_cp2

0x9e39,	// (0x00016846) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e39,	// (0x00016846) list_single_2graphic_pane_g4_cp2

0x9e45,	// (0x00016852) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e45,	// (0x00016852) list_single_2graphic_pane_t1_cp2

0x36d2,	// (0x000100df) list_highlight_pane_g10_cp1

0x99f4,	// (0x00016401) list_highlight_pane_g1_cp1

0x99fc,	// (0x00016409) list_highlight_pane_g2_cp1

0x9a04,	// (0x00016411) list_highlight_pane_g3_cp1

0x9a0c,	// (0x00016419) list_highlight_pane_g4_cp1

0x9a14,	// (0x00016421) list_highlight_pane_g5_cp1

0x9a1c,	// (0x00016429) list_highlight_pane_g6_cp1

0x9a24,	// (0x00016431) list_highlight_pane_g7_cp1

0x9a2c,	// (0x00016439) list_highlight_pane_g8_cp1

0x9a34,	// (0x00016441) list_highlight_pane_g9_cp1

0x9914,	// (0x00016321) form_field_slider_pane_t3

0x9922,	// (0x0001632f) form_field_slider_pane_t4

0x9930,	// (0x0001633d) slider_form_pane_ParamLimits

0x9930,	// (0x0001633d) slider_form_pane

0x384b,	// (0x00010258) control_abbreviations

0x384b,	// (0x00010258) control_conventions

0x384b,	// (0x00010258) control_definitions

0x384b,	// (0x00010258) format_table_attribute

0xa11c,	// (0x00016b29) bg_popup_preview_window_pane_g9

0x384b,	// (0x00010258) format_table_data2

0x384b,	// (0x00010258) format_table_data3

0x384b,	// (0x00010258) format_table_data_example

0x0008,

0x384b,	// (0x00010258) intro_purpose

0xf8c5,	// (0x0001c2d2) bg_popup_preview_window_pane_g

0x384b,	// (0x00010258) texts_category

0x384b,	// (0x00010258) texts_graphics

0x881b,	// (0x00015228) text_digital

0x882a,	// (0x00015237) text_primary

0x8839,	// (0x00015246) text_primary_small

0x8848,	// (0x00015255) text_secondary

0x8857,	// (0x00015264) text_title

0xa94e,	// (0x0001735b) bg_passive_tab_pane_g1_cp3_srt

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp3_srt

0xa957,	// (0x00017364) bg_passive_tab_pane_g3_cp3_srt

0x3905,	// (0x00010312) bg_active_tab_pane_cp3_srt_ParamLimits

0x3905,	// (0x00010312) bg_active_tab_pane_cp3_srt

0xa960,	// (0x0001736d) tabs_4_active_pane_srt_g1

0xa968,	// (0x00017375) tabs_4_active_pane_srt_t1_ParamLimits

0xa968,	// (0x00017375) tabs_4_active_pane_srt_t1

0xa94e,	// (0x0001735b) bg_active_tab_pane_g1_cp3_copy1

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp3_copy1

0xa957,	// (0x00017364) bg_active_tab_pane_g3_cp3_copy1

0x3905,	// (0x00010312) tabs_2_long_active_pane_srt_ParamLimits

0x3905,	// (0x00010312) tabs_2_long_active_pane_srt

0x3905,	// (0x00010312) tabs_2_long_passive_pane_srt_ParamLimits

0x3905,	// (0x00010312) tabs_2_long_passive_pane_srt

0x7d1b,	// (0x00014728) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7d1b,	// (0x00014728) bg_passive_tab_pane_cp4_srt

0xa57e,	// (0x00016f8b) bg_passive_tab_pane_g1_cp4_srt

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp4_srt

0xa587,	// (0x00016f94) bg_passive_tab_pane_g3_cp4_srt

0x7cfa,	// (0x00014707) bg_active_tab_pane_cp4_srt_ParamLimits

0x7cfa,	// (0x00014707) bg_active_tab_pane_cp4_srt

0xa590,	// (0x00016f9d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa590,	// (0x00016f9d) tabs_2_long_active_pane_srt_t1

0xa57e,	// (0x00016f8b) bg_active_tab_pane_g1_cp4_srt

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp4_srt

0xa587,	// (0x00016f94) bg_active_tab_pane_g3_cp4_srt

0x38ed,	// (0x000102fa) tabs_3_long_active_pane_srt_ParamLimits

0x38ed,	// (0x000102fa) tabs_3_long_active_pane_srt

0x38ed,	// (0x000102fa) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x38ed,	// (0x000102fa) tabs_3_long_passive_pane_cp_srt

0x38ed,	// (0x000102fa) tabs_3_long_passive_pane_srt_ParamLimits

0x38ed,	// (0x000102fa) tabs_3_long_passive_pane_srt

0x7d1b,	// (0x00014728) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7d1b,	// (0x00014728) bg_passive_tab_pane_cp5_srt

0x8522,	// (0x00014f2f) bg_passive_tab_pane_g1_cp5_srt

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp5_srt

0x852b,	// (0x00014f38) bg_passive_tab_pane_g3_cp5_srt

0x7cfa,	// (0x00014707) bg_active_tab_pane_cp5_srt_ParamLimits

0x7cfa,	// (0x00014707) bg_active_tab_pane_cp5_srt

0xa56c,	// (0x00016f79) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa56c,	// (0x00016f79) tabs_3_long_active_pane_srt_t1

0x8522,	// (0x00014f2f) bg_active_tab_pane_g1_cp5_srt

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp5_srt

0x852b,	// (0x00014f38) bg_active_tab_pane_g3_cp5_srt

0xa55e,	// (0x00016f6b) navi_text_pane_srt_t1

0xa556,	// (0x00016f63) navi_icon_pane_srt_g1

0x8a2f,	// (0x0001543c) midp_editing_number_pane_srt

0x8866,	// (0x00015273) midp_ticker_pane_srt

0x8a37,	// (0x00015444) midp_ticker_pane_srt_g1

0x8a3f,	// (0x0001544c) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001c155) midp_ticker_pane_srt_g

0x8a47,	// (0x00015454) midp_ticker_pane_srt_t1

0xa547,	// (0x00016f54) midp_editing_number_pane_t1_copy1

0x886e,	// (0x0001527b) listscroll_midp_pane

0x886e,	// (0x0001527b) midp_form_pane

0x88dd,	// (0x000152ea) midp_info_popup_window_ParamLimits

0x88dd,	// (0x000152ea) midp_info_popup_window

0x41f6,	// (0x00010c03) bg_popup_sub_pane_cp50_ParamLimits

0x41f6,	// (0x00010c03) bg_popup_sub_pane_cp50

0x9616,	// (0x00016023) listscroll_midp_info_pane_ParamLimits

0x9616,	// (0x00016023) listscroll_midp_info_pane

0x95f6,	// (0x00016003) listscroll_form_midp_pane_ParamLimits

0x95f6,	// (0x00016003) listscroll_form_midp_pane

0x9602,	// (0x0001600f) scroll_bar_cp050

0x95d6,	// (0x00015fe3) list_midp_pane

0xb725,	// (0x00018132) signal_pane_g2_cp

0x9510,	// (0x00015f1d) listscroll_midp_info_pane_t1_ParamLimits

0x9510,	// (0x00015f1d) listscroll_midp_info_pane_t1

0x9528,	// (0x00015f35) listscroll_midp_info_pane_t2_ParamLimits

0x9528,	// (0x00015f35) listscroll_midp_info_pane_t2

0x9566,	// (0x00015f73) listscroll_midp_info_pane_t3_ParamLimits

0x9566,	// (0x00015f73) listscroll_midp_info_pane_t3

0x95a0,	// (0x00015fad) listscroll_midp_info_pane_t4_ParamLimits

0x95a0,	// (0x00015fad) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0001c20d) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0001c20d) listscroll_midp_info_pane_t

0x424b,	// (0x00010c58) scroll_pane_cp21

0x94aa,	// (0x00015eb7) form_midp_field_choice_group_pane

0x94b3,	// (0x00015ec0) form_midp_field_text_pane

0x94f6,	// (0x00015f03) form_midp_field_time_pane

0x94fe,	// (0x00015f0b) form_midp_gauge_slider_pane

0x9507,	// (0x00015f14) form_midp_gauge_wait_pane

0x384b,	// (0x00010258) form_midp_image_pane

0x948a,	// (0x00015e97) list_single_midp_pane_ParamLimits

0x948a,	// (0x00015e97) list_single_midp_pane

0x944e,	// (0x00015e5b) form_midp_field_text_pane_t1

0x9231,	// (0x00015c3e) input_focus_pane_cp050

0x9479,	// (0x00015e86) list_midp_form_text_pane

0x941d,	// (0x00015e2a) form_midp_field_choice_group_pane_t1

0x942b,	// (0x00015e38) input_focus_pane_cp051

0x943f,	// (0x00015e4c) list_midp_choice_pane

0x384b,	// (0x00010258) status_idle_pane

0x9401,	// (0x00015e0e) form_midp_field_time_pane_t1

0x36d2,	// (0x000100df) wait_anim_pane_g2_copy1

0x940f,	// (0x00015e1c) form_midp_field_time_pane_t2

0x0001,

0x898d,	// (0x0001539a) aid_navinavi_width_2_pane

0xf7fb,	// (0x0001c208) form_midp_field_time_pane_t

0x384b,	// (0x00010258) input_focus_pane_cp052

0x384b,	// (0x00010258) bg_input_focus_pane_cp040

0x93c1,	// (0x00015dce) form_midp_gauge_slider_pane_t1

0x93cf,	// (0x00015ddc) form_midp_gauge_slider_pane_t2

0x93dd,	// (0x00015dea) form_midp_gauge_slider_pane_t3

0x93eb,	// (0x00015df8) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0001c1ff) form_midp_gauge_slider_pane_t

0x93f9,	// (0x00015e06) form_midp_slider_pane

0x3905,	// (0x00010312) bg_input_focus_pane_cp041_ParamLimits

0x3905,	// (0x00010312) bg_input_focus_pane_cp041

0x938e,	// (0x00015d9b) form_midp_gauge_wait_pane_t1_ParamLimits

0x938e,	// (0x00015d9b) form_midp_gauge_wait_pane_t1

0x93a0,	// (0x00015dad) form_midp_gauge_wait_pane_t2_ParamLimits

0x93a0,	// (0x00015dad) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0001c1fa) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0001c1fa) form_midp_gauge_wait_pane_t

0x93b2,	// (0x00015dbf) form_midp_wait_pane_ParamLimits

0x93b2,	// (0x00015dbf) form_midp_wait_pane

0x9356,	// (0x00015d63) form_midp_image_pane_g1

0x935f,	// (0x00015d6c) form_midp_image_pane_t1

0x936e,	// (0x00015d7b) form_midp_image_pane_t2

0x937d,	// (0x00015d8a) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0001c1f3) form_midp_image_pane_t

0x933e,	// (0x00015d4b) list_single_midp_pane_g1

0x9347,	// (0x00015d54) list_single_midp_pane_t1

0x9324,	// (0x00015d31) list_midp_form_item_pane_ParamLimits

0x9324,	// (0x00015d31) list_midp_form_item_pane

0x8935,	// (0x00015342) list_midp_form_item_pane_t1

0x8944,	// (0x00015351) midp_ticker_pane_g1

0x8950,	// (0x0001535d) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001c13b) midp_ticker_pane_g

0x895c,	// (0x00015369) midp_ticker_pane_t1

0xa7e9,	// (0x000171f6) midp_editing_number_pane_t1

0xa7c7,	// (0x000171d4) midp_editing_number_pane

0xa7d6,	// (0x000171e3) midp_ticker_pane

0xa50f,	// (0x00016f1c) ai_message_heading_pane

0x384b,	// (0x00010258) bg_popup_window_pane_cp14

0xa517,	// (0x00016f24) listscroll_ai_message_pane

0xa495,	// (0x00016ea2) ai_message_heading_pane_g1_ParamLimits

0xa495,	// (0x00016ea2) ai_message_heading_pane_g1

0xa4a1,	// (0x00016eae) ai_message_heading_pane_g2_ParamLimits

0xa4a1,	// (0x00016eae) ai_message_heading_pane_g2

0xa4af,	// (0x00016ebc) ai_message_heading_pane_g3_ParamLimits

0xa4af,	// (0x00016ebc) ai_message_heading_pane_g3

0xa4bb,	// (0x00016ec8) ai_message_heading_pane_g4_ParamLimits

0xa4bb,	// (0x00016ec8) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0001c334) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0001c334) ai_message_heading_pane_g

0xa4c7,	// (0x00016ed4) ai_message_heading_pane_t1_ParamLimits

0xa4c7,	// (0x00016ed4) ai_message_heading_pane_t1

0xa4e1,	// (0x00016eee) ai_message_heading_pane_t2_ParamLimits

0xa4e1,	// (0x00016eee) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0001c33d) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0001c33d) ai_message_heading_pane_t

0xa4f5,	// (0x00016f02) bg_popup_heading_pane_cp1_ParamLimits

0xa4f5,	// (0x00016f02) bg_popup_heading_pane_cp1

0xa483,	// (0x00016e90) list_ai_message_pane_ParamLimits

0xa483,	// (0x00016e90) list_ai_message_pane

0x424b,	// (0x00010c58) scroll_pane_cp10

0xa41f,	// (0x00016e2c) list_ai_message_pane_g1

0xa427,	// (0x00016e34) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0001c311) list_ai_message_pane_g

0xa42f,	// (0x00016e3c) list_ai_message_pane_t1_ParamLimits

0xa42f,	// (0x00016e3c) list_ai_message_pane_t1

0xa444,	// (0x00016e51) list_ai_message_pane_t2_ParamLimits

0xa444,	// (0x00016e51) list_ai_message_pane_t2

0xa459,	// (0x00016e66) list_ai_message_pane_t3_ParamLimits

0xa459,	// (0x00016e66) list_ai_message_pane_t3

0xa46e,	// (0x00016e7b) list_ai_message_pane_t4_ParamLimits

0xa46e,	// (0x00016e7b) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0001c316) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0001c316) list_ai_message_pane_t

0xa408,	// (0x00016e15) cell_ai_soft_ind_pane_ParamLimits

0xa408,	// (0x00016e15) cell_ai_soft_ind_pane

0x896e,	// (0x0001537b) cell_ai_soft_ind_pane_g1_ParamLimits

0x896e,	// (0x0001537b) cell_ai_soft_ind_pane_g1

0x384b,	// (0x00010258) grid_highlight_cp1

0x897b,	// (0x00015388) text_secondary_cp56_ParamLimits

0x897b,	// (0x00015388) text_secondary_cp56

0xa3dd,	// (0x00016dea) example_general_pane_ParamLimits

0xa3dd,	// (0x00016dea) example_general_pane

0xa3e9,	// (0x00016df6) example_parent_pane_g1_ParamLimits

0xa3e9,	// (0x00016df6) example_parent_pane_g1

0xa3f5,	// (0x00016e02) example_parent_pane_t1_ParamLimits

0xa3f5,	// (0x00016e02) example_parent_pane_t1

0x5af3,	// (0x00012500) popup_preview_text_window_ParamLimits

0x5af3,	// (0x00012500) popup_preview_text_window

0x8795,	// (0x000151a2) list_single_pane_cp2_g4

0x3ba9,	// (0x000105b6) bg_popup_preview_window_pane_ParamLimits

0x3ba9,	// (0x000105b6) bg_popup_preview_window_pane

0xa126,	// (0x00016b33) popup_preview_text_window_t1_ParamLimits

0xa126,	// (0x00016b33) popup_preview_text_window_t1

0xa144,	// (0x00016b51) popup_preview_text_window_t2_ParamLimits

0xa144,	// (0x00016b51) popup_preview_text_window_t2

0xa18d,	// (0x00016b9a) popup_preview_text_window_t3_ParamLimits

0xa18d,	// (0x00016b9a) popup_preview_text_window_t3

0xa1d2,	// (0x00016bdf) popup_preview_text_window_t4_ParamLimits

0xa1d2,	// (0x00016bdf) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0001c2e5) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0001c2e5) popup_preview_text_window_t

0xa250,	// (0x00016c5d) scroll_pane_cp11

0x910d,	// (0x00015b1a) bg_popup_preview_window_pane_g1

0xa0da,	// (0x00016ae7) bg_popup_preview_window_pane_g2

0xa0e4,	// (0x00016af1) bg_popup_preview_window_pane_g3

0xa0ee,	// (0x00016afb) bg_popup_preview_window_pane_g4

0xa0f8,	// (0x00016b05) bg_popup_preview_window_pane_g5

0xa102,	// (0x00016b0f) bg_popup_preview_window_pane_g6

0xa10a,	// (0x00016b17) bg_popup_preview_window_pane_g7

0xa112,	// (0x00016b1f) bg_popup_preview_window_pane_g8

0x4c73,	// (0x00011680) aid_popup_width_pane

0x5acf,	// (0x000124dc) popup_midp_note_alarm_window_ParamLimits

0x5acf,	// (0x000124dc) popup_midp_note_alarm_window

0x4071,	// (0x00010a7e) data_form_pane_ParamLimits

0x7b87,	// (0x00014594) form_field_data_pane_g1

0x7b91,	// (0x0001459e) form_field_data_pane_t1_ParamLimits

0x407d,	// (0x00010a8a) input_focus_pane_ParamLimits

0x408b,	// (0x00010a98) data_form_wide_pane_ParamLimits

0x4097,	// (0x00010aa4) form_field_data_wide_pane_g1

0x40c3,	// (0x00010ad0) form_field_data_wide_pane_t1_ParamLimits

0x3d65,	// (0x00010772) input_focus_pane_cp6_ParamLimits

0x7cd2,	// (0x000146df) input_popup_find_pane_g1_ParamLimits

0x7cd2,	// (0x000146df) input_popup_find_pane_g1

0x5203,	// (0x00011c10) aid_navi_side_left_pane

0x5218,	// (0x00011c25) aid_navi_side_right_pane

0x9aef,	// (0x000164fc) bg_popup_window_pane_cp30_ParamLimits

0x9aef,	// (0x000164fc) bg_popup_window_pane_cp30

0x9b69,	// (0x00016576) popup_midp_note_alarm_window_g1_ParamLimits

0x9b69,	// (0x00016576) popup_midp_note_alarm_window_g1

0x9b99,	// (0x000165a6) popup_midp_note_alarm_window_t1_ParamLimits

0x9b99,	// (0x000165a6) popup_midp_note_alarm_window_t1

0x9c3a,	// (0x00016647) popup_midp_note_alarm_window_t2_ParamLimits

0x9c3a,	// (0x00016647) popup_midp_note_alarm_window_t2

0x9ce8,	// (0x000166f5) popup_midp_note_alarm_window_t3_ParamLimits

0x9ce8,	// (0x000166f5) popup_midp_note_alarm_window_t3

0x9d1a,	// (0x00016727) popup_midp_note_alarm_window_t4_ParamLimits

0x9d1a,	// (0x00016727) popup_midp_note_alarm_window_t4

0x9d40,	// (0x0001674d) popup_midp_note_alarm_window_t5_ParamLimits

0x9d40,	// (0x0001674d) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0001c282) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0001c282) popup_midp_note_alarm_window_t

0x9dec,	// (0x000167f9) wait_bar_pane_cp1_ParamLimits

0x9dec,	// (0x000167f9) wait_bar_pane_cp1

0x384b,	// (0x00010258) wait_anim_pane_copy1

0x384b,	// (0x00010258) wait_border_pane_copy1

0x97d4,	// (0x000161e1) wait_border_pane_g1_copy1

0x40da,	// (0x00010ae7) form_field_popup_pane_g1

0x7bab,	// (0x000145b8) form_field_popup_pane_t1_ParamLimits

0x407d,	// (0x00010a8a) input_focus_pane_cp7_ParamLimits

0x40e2,	// (0x00010aef) list_form_pane_ParamLimits

0x40ee,	// (0x00010afb) form_field_popup_wide_pane_g1

0x40f6,	// (0x00010b03) form_field_popup_wide_pane_t1_ParamLimits

0x407d,	// (0x00010a8a) input_focus_pane_cp8_ParamLimits

0x4108,	// (0x00010b15) list_form_wide_pane_ParamLimits

0xa9e9,	// (0x000173f6) aid_size_cell_graphic_pane

0x7c23,	// (0x00014630) data_form_pane_t1_ParamLimits

0xa792,	// (0x0001719f) data_form_wide_pane_t1_ParamLimits

0x8c8c,	// (0x00015699) bg_status_flat_pane

0x73ff,	// (0x00013e0c) title_pane_t1_ParamLimits

0x38b5,	// (0x000102c2) title_pane_t2_ParamLimits

0x38db,	// (0x000102e8) title_pane_t3_ParamLimits

0xf532,	// (0x0001bf3f) title_pane_t_ParamLimits

0x812a,	// (0x00014b37) level_1_signal_ParamLimits

0x8137,	// (0x00014b44) level_2_signal_ParamLimits

0x8144,	// (0x00014b51) level_3_signal_ParamLimits

0x8151,	// (0x00014b5e) level_4_signal_ParamLimits

0x815e,	// (0x00014b6b) level_5_signal_ParamLimits

0x816b,	// (0x00014b78) level_6_signal_ParamLimits

0x8178,	// (0x00014b85) level_7_signal_ParamLimits

0x812a,	// (0x00014b37) level_1_battery_ParamLimits

0x8137,	// (0x00014b44) level_2_battery_ParamLimits

0x8144,	// (0x00014b51) level_3_battery_ParamLimits

0x8151,	// (0x00014b5e) level_4_battery_ParamLimits

0x815e,	// (0x00014b6b) level_5_battery_ParamLimits

0x816b,	// (0x00014b78) level_6_battery_ParamLimits

0x8178,	// (0x00014b85) level_7_battery_ParamLimits

0x99f4,	// (0x00016401) bg_status_flat_pane_g1

0x99fc,	// (0x00016409) bg_status_flat_pane_g2

0x9a04,	// (0x00016411) bg_status_flat_pane_g3

0x9a0c,	// (0x00016419) bg_status_flat_pane_g4

0x9a14,	// (0x00016421) bg_status_flat_pane_g5

0x9a1c,	// (0x00016429) bg_status_flat_pane_g6

0x9a24,	// (0x00016431) bg_status_flat_pane_g7

0x746f,	// (0x00013e7c) tabs_3_active_pane_t1_ParamLimits

0x746f,	// (0x00013e7c) tabs_3_passive_pane_t1_ParamLimits

0x7489,	// (0x00013e96) tabs_4_active_pane_t1_ParamLimits

0x7489,	// (0x00013e96) tabs_4_1_passive_pane_t1_ParamLimits

0x7ce8,	// (0x000146f5) tabs_2_active_pane_t1_ParamLimits

0x7ce8,	// (0x000146f5) tabs_2_passive_pane_t1_ParamLimits

0x7cfa,	// (0x00014707) bg_active_tab_pane_cp4_ParamLimits

0x7d08,	// (0x00014715) tabs_2_long_active_pane_t1_ParamLimits

0x7d1b,	// (0x00014728) bg_passive_tab_pane_cp4_ParamLimits

0x5e57,	// (0x00012864) list_single_midp_graphic_pane_t1_ParamLimits

0x7cfa,	// (0x00014707) bg_active_tab_pane_cp5_ParamLimits

0x7d27,	// (0x00014734) tabs_3_long_active_pane_t1_ParamLimits

0x7d1b,	// (0x00014728) bg_passive_tab_pane_cp5_ParamLimits

0x5e57,	// (0x00012864) list_single_midp_graphic_pane_t1

0x8c8c,	// (0x00015699) bg_status_flat_pane_ParamLimits

0x8d57,	// (0x00015764) indicator_pane_cp2_ParamLimits

0x8d57,	// (0x00015764) indicator_pane_cp2

0x8e9a,	// (0x000158a7) navi_pane_srt_ParamLimits

0x8e9a,	// (0x000158a7) navi_pane_srt

0x8ebe,	// (0x000158cb) popup_clock_digital_analogue_window_cp1

0x39ec,	// (0x000103f9) indicator_pane_t1

0x8866,	// (0x00015273) copy_highlight_pane

0x8866,	// (0x00015273) cursor_graphics_pane

0x8866,	// (0x00015273) graphic_within_text_pane

0x8866,	// (0x00015273) link_highlight_pane

0xa213,	// (0x00016c20) popup_preview_text_window_t5_ParamLimits

0xa213,	// (0x00016c20) popup_preview_text_window_t5

0x8997,	// (0x000153a4) cursor_digital_pane

0x8997,	// (0x000153a4) cursor_primary_pane

0x89a8,	// (0x000153b5) cursor_primary_small_pane

0x89b0,	// (0x000153bd) cursor_secondary_pane

0x89b8,	// (0x000153c5) cursor_title_pane

0x8997,	// (0x000153a4) link_highlight_digital_pane

0x899f,	// (0x000153ac) link_highlight_primary_pane

0x89a8,	// (0x000153b5) link_highlight_primary_small_pane

0x89b0,	// (0x000153bd) link_highlight_secondary_pane

0x89b8,	// (0x000153c5) link_highlight_title_pane

0x8997,	// (0x000153a4) copy_highlight_digital_pane

0x8997,	// (0x000153a4) copy_highlight_primary_pane

0x89a8,	// (0x000153b5) copy_highlight_primary_small_pane

0x89b0,	// (0x000153bd) copy_highlight_secondary_pane

0x89b8,	// (0x000153c5) copy_highlight_title_pane

0x89b0,	// (0x000153bd) graphic_text_digital_pane

0x9a92,	// (0x0001649f) graphic_text_primary_pane

0x9a9b,	// (0x000164a8) graphic_text_primary_small_pane

0x89a8,	// (0x000153b5) graphic_text_secondary_pane

0x8997,	// (0x000153a4) graphic_text_title_pane

0x89c0,	// (0x000153cd) cursor_primary_pane_g1

0x9a84,	// (0x00016491) cursor_text_primary_t1

0x9a6c,	// (0x00016479) cursor_primary_small_pane_g1

0x9a76,	// (0x00016483) cursor_text_primary_small_t1

0x9a54,	// (0x00016461) cursor_primary_small_pane_g1_copy1

0x9a5e,	// (0x0001646b) cursor_text_primary_small_t1_copy1

0x9a3c,	// (0x00016449) cursor_text_title_t1

0x9a4a,	// (0x00016457) cursor_title_pane_g1

0x89c0,	// (0x000153cd) cursor_digital_pane_g1

0x89ca,	// (0x000153d7) cursor_text_digital_t1

0x89d8,	// (0x000153e5) link_highlight_primary_pane_g1

0x99e5,	// (0x000163f2) link_highlight_primary_pane_t1

0x89d8,	// (0x000153e5) link_highlight_primary_small_pane_g1

0x89e0,	// (0x000153ed) link_highlight_primary_small_pane_t1

0x89ef,	// (0x000153fc) link_highlight_secondary_pane_g1

0x89f7,	// (0x00015404) link_highlight_secondary_pane_t1

0x9959,	// (0x00016366) link_highlight_title_pane_g1

0x9961,	// (0x0001636e) link_highlight_title_pane_t1

0x9942,	// (0x0001634f) link_highlight_digital_pane_g1

0x994a,	// (0x00016357) link_highlight_digital_pane_t1

0x980a,	// (0x00016217) copy_highlight_primary_pane_g1

0x9821,	// (0x0001622e) copy_highlight_primary_pane_t1

0x980a,	// (0x00016217) copy_highlight_primary_small_pane_g1

0x9812,	// (0x0001621f) copy_highlight_primary_small_pane_t1

0x8a06,	// (0x00015413) copy_highlight_secondary_pane_g1

0x8a0e,	// (0x0001541b) copy_highlight_secondary_pane_t1

0x97f3,	// (0x00016200) copy_highlight_title_pane_g1

0x97fb,	// (0x00016208) copy_highlight_title_pane_t1

0x980a,	// (0x00016217) copy_highlight_digital_pane_g1

0xabbb,	// (0x000175c8) copy_highlight_digital_pane_t1

0xab0f,	// (0x0001751c) graphic_text_primary_pane_g1

0xab9f,	// (0x000175ac) graphic_text_primary_pane_t1

0xabad,	// (0x000175ba) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x0001c3b1) graphic_text_primary_pane_t

0xab7b,	// (0x00017588) graphic_text_primary_small_pane_g1

0xab83,	// (0x00017590) graphic_text_primary_small_pane_t1

0xab91,	// (0x0001759e) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x0001c3ac) graphic_text_primary_small_pane_t

0xab57,	// (0x00017564) graphic_text_secondary_pane_g1

0xab5f,	// (0x0001756c) graphic_text_secondary_pane_t1

0xab6d,	// (0x0001757a) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0001c3a7) graphic_text_secondary_pane_t

0xab33,	// (0x00017540) graphic_text_title_pane_g1

0xab3b,	// (0x00017548) graphic_text_title_pane_t1

0xab49,	// (0x00017556) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x0001c3a2) graphic_text_title_pane_t

0xab0f,	// (0x0001751c) graphic_text_digital_pane_g1

0xab17,	// (0x00017524) graphic_text_digital_pane_t1

0xab25,	// (0x00017532) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x0001c39d) graphic_text_digital_pane_t

0x3905,	// (0x00010312) navi_icon_pane_srt_ParamLimits

0x3905,	// (0x00010312) navi_icon_pane_srt

0x384b,	// (0x00010258) navi_midp_pane_srt

0x384b,	// (0x00010258) navi_navi_pane_srt

0x3905,	// (0x00010312) navi_text_pane_srt_ParamLimits

0x3905,	// (0x00010312) navi_text_pane_srt

0xaada,	// (0x000174e7) navi_navi_icon_text_pane_srt

0xaae2,	// (0x000174ef) navi_navi_pane_srt_g1_ParamLimits

0xaae2,	// (0x000174ef) navi_navi_pane_srt_g1

0xaaf4,	// (0x00017501) navi_navi_pane_srt_g2_ParamLimits

0xaaf4,	// (0x00017501) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0001c398) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0001c398) navi_navi_pane_srt_g

0xab06,	// (0x00017513) navi_navi_tabs_pane_srt

0xaada,	// (0x000174e7) navi_navi_text_pane_srt

0xaada,	// (0x000174e7) navi_navi_volume_pane_srt

0xaacb,	// (0x000174d8) navi_navi_text_pane_srt_t1

0x61f3,	// (0x00012c00) navi_navi_volume_pane_srt_g1

0x61fb,	// (0x00012c08) volume_small_pane_srt_ParamLimits

0x61fb,	// (0x00012c08) volume_small_pane_srt

0x54e7,	// (0x00011ef4) volume_small_pane_srt_g1_ParamLimits

0x54e7,	// (0x00011ef4) volume_small_pane_srt_g1

0x54f7,	// (0x00011f04) volume_small_pane_srt_g2_ParamLimits

0x54f7,	// (0x00011f04) volume_small_pane_srt_g2

0x5508,	// (0x00011f15) volume_small_pane_srt_g3_ParamLimits

0x5508,	// (0x00011f15) volume_small_pane_srt_g3

0x5519,	// (0x00011f26) volume_small_pane_srt_g4_ParamLimits

0x5519,	// (0x00011f26) volume_small_pane_srt_g4

0x552a,	// (0x00011f37) volume_small_pane_srt_g5_ParamLimits

0x552a,	// (0x00011f37) volume_small_pane_srt_g5

0x553b,	// (0x00011f48) volume_small_pane_srt_g6_ParamLimits

0x553b,	// (0x00011f48) volume_small_pane_srt_g6

0x554c,	// (0x00011f59) volume_small_pane_srt_g7_ParamLimits

0x554c,	// (0x00011f59) volume_small_pane_srt_g7

0x555d,	// (0x00011f6a) volume_small_pane_srt_g8_ParamLimits

0x555d,	// (0x00011f6a) volume_small_pane_srt_g8

0x556e,	// (0x00011f7b) volume_small_pane_srt_g9_ParamLimits

0x556e,	// (0x00011f7b) volume_small_pane_srt_g9

0x557f,	// (0x00011f8c) volume_small_pane_srt_g10_ParamLimits

0x557f,	// (0x00011f8c) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001c140) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001c140) volume_small_pane_srt_g

0x3c5e,	// (0x0001066b) query_popup_data_pane_cp2

0xaab1,	// (0x000174be) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaab1,	// (0x000174be) navi_navi_icon_text_pane_srt_t1

0x9a92,	// (0x0001649f) navi_tabs_2_long_pane_srt

0x9a92,	// (0x0001649f) navi_tabs_2_pane_srt

0x9a92,	// (0x0001649f) navi_tabs_3_long_pane_srt

0x9a92,	// (0x0001649f) navi_tabs_3_pane_srt

0x9a92,	// (0x0001649f) navi_tabs_4_pane_srt

0x61d3,	// (0x00012be0) tabs_2_active_pane_srt_ParamLimits

0x61d3,	// (0x00012be0) tabs_2_active_pane_srt

0x61e3,	// (0x00012bf0) tabs_2_passive_pane_srt_ParamLimits

0x61e3,	// (0x00012bf0) tabs_2_passive_pane_srt

0x8b95,	// (0x000155a2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b95,	// (0x000155a2) bg_passive_tab_pane_cp1_srt

0xaa7d,	// (0x0001748a) bg_passive_tab_pane_g1_cp1_srt

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp1_srt

0xaa86,	// (0x00017493) bg_passive_tab_pane_g3_cp1_srt

0x3905,	// (0x00010312) bg_active_tab_pane_cp1_srt_ParamLimits

0x3905,	// (0x00010312) bg_active_tab_pane_cp1_srt

0xaa8f,	// (0x0001749c) tabs_2_active_pane_srt_g1

0xaa97,	// (0x000174a4) tabs_2_active_pane_srt_t1_ParamLimits

0xaa97,	// (0x000174a4) tabs_2_active_pane_srt_t1

0xaa7d,	// (0x0001748a) bg_active_tab_pane_g1_cp1_srt

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp1_srt

0xaa86,	// (0x00017493) bg_active_tab_pane_g3_cp1_srt

0x61a0,	// (0x00012bad) tabs_3_active_pane_srt_ParamLimits

0x61a0,	// (0x00012bad) tabs_3_active_pane_srt

0x61b1,	// (0x00012bbe) tabs_3_passive_pane_cp_srt_ParamLimits

0x61b1,	// (0x00012bbe) tabs_3_passive_pane_cp_srt

0x61c2,	// (0x00012bcf) tabs_3_passive_pane_srt_ParamLimits

0x61c2,	// (0x00012bcf) tabs_3_passive_pane_srt

0x8b95,	// (0x000155a2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b95,	// (0x000155a2) bg_passive_tab_pane_cp2_srt

0x8a1d,	// (0x0001542a) bg_passive_tab_pane_g1_cp2_srt

0x8498,	// (0x00014ea5) bg_passive_tab_pane_g2_cp2_srt

0x8a26,	// (0x00015433) bg_passive_tab_pane_g3_cp2_srt

0x3905,	// (0x00010312) bg_active_tab_pane_cp2_srt_ParamLimits

0x3905,	// (0x00010312) bg_active_tab_pane_cp2_srt

0xaa63,	// (0x00017470) tabs_3_active_pane_srt_g1

0xaa6b,	// (0x00017478) tabs_3_active_pane_srt_t1_ParamLimits

0xaa6b,	// (0x00017478) tabs_3_active_pane_srt_t1

0x8a1d,	// (0x0001542a) bg_active_tab_pane_g1_cp2_srt

0x8498,	// (0x00014ea5) bg_active_tab_pane_g2_cp2_srt

0x8a26,	// (0x00015433) bg_active_tab_pane_g3_cp2_srt

0x6158,	// (0x00012b65) tabs_4_active_pane_srt_ParamLimits

0x6158,	// (0x00012b65) tabs_4_active_pane_srt

0x616a,	// (0x00012b77) tabs_4_passive_pane_cp2_srt_ParamLimits

0x616a,	// (0x00012b77) tabs_4_passive_pane_cp2_srt

0x5702,	// (0x0001210f) aid_size_cell_toolbar

0x7d1b,	// (0x00014728) main_idle_act_pane_ParamLimits

0x58f5,	// (0x00012302) popup_large_graphic_colour_window_ParamLimits

0x5c9c,	// (0x000126a9) popup_toolbar_window_ParamLimits

0x5c9c,	// (0x000126a9) popup_toolbar_window

0xa80f,	// (0x0001721c) list_single_graphic_2heading_pane_ParamLimits

0xa80f,	// (0x0001721c) list_single_graphic_2heading_pane

0x7ed7,	// (0x000148e4) aid_size_cell_apps_grid_lsc_pane

0x7ee9,	// (0x000148f6) aid_size_cell_apps_grid_prt_pane

0x8b95,	// (0x000155a2) bg_wml_button_pane_cp1_ParamLimits

0x8b95,	// (0x000155a2) bg_wml_button_pane_cp1

0x944e,	// (0x00015e5b) form_midp_field_text_pane_t1_ParamLimits

0x9231,	// (0x00015c3e) input_focus_pane_cp050_ParamLimits

0x9479,	// (0x00015e86) list_midp_form_text_pane_ParamLimits

0x942b,	// (0x00015e38) input_focus_pane_cp051_ParamLimits

0x943f,	// (0x00015e4c) list_midp_choice_pane_ParamLimits

0x92ea,	// (0x00015cf7) list_single_2graphic_pane_cp3_ParamLimits

0x92ea,	// (0x00015cf7) list_single_2graphic_pane_cp3

0x9300,	// (0x00015d0d) list_single_midp_graphic_pane_ParamLimits

0x9300,	// (0x00015d0d) list_single_midp_graphic_pane

0x5d5b,	// (0x00012768) list_single_graphic_2heading_pane_g1_ParamLimits

0x5d5b,	// (0x00012768) list_single_graphic_2heading_pane_g1

0x5d67,	// (0x00012774) list_single_graphic_2heading_pane_g4_ParamLimits

0x5d67,	// (0x00012774) list_single_graphic_2heading_pane_g4

0x5d73,	// (0x00012780) list_single_graphic_2heading_pane_g5_ParamLimits

0x5d73,	// (0x00012780) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001c193) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001c193) list_single_graphic_2heading_pane_g

0x5d7f,	// (0x0001278c) list_single_graphic_2heading_pane_t1_ParamLimits

0x5d7f,	// (0x0001278c) list_single_graphic_2heading_pane_t1

0x5d93,	// (0x000127a0) list_single_graphic_2heading_pane_t2_ParamLimits

0x5d93,	// (0x000127a0) list_single_graphic_2heading_pane_t2

0x5daf,	// (0x000127bc) list_single_graphic_2heading_pane_t3_ParamLimits

0x5daf,	// (0x000127bc) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001c19a) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001c19a) list_single_graphic_2heading_pane_t

0x9011,	// (0x00015a1e) bg_popup_sub_pane_cp2

0x903b,	// (0x00015a48) grid_toobar_pane

0x5dc7,	// (0x000127d4) cell_toolbar_pane_ParamLimits

0x5dc7,	// (0x000127d4) cell_toolbar_pane

0x90b1,	// (0x00015abe) cell_toolbar_pane_g1_ParamLimits

0x90b1,	// (0x00015abe) cell_toolbar_pane_g1

0x90c5,	// (0x00015ad2) cell_toolbar_pane_g2_ParamLimits

0x90c5,	// (0x00015ad2) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001c1a8) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001c1a8) cell_toolbar_pane_g

0x90e7,	// (0x00015af4) grid_highlight_pane_cp2_ParamLimits

0x90e7,	// (0x00015af4) grid_highlight_pane_cp2

0x9101,	// (0x00015b0e) toolbar_button_pane

0x910d,	// (0x00015b1a) toolbar_button_pane_g1

0x9115,	// (0x00015b22) toolbar_button_pane_g2

0x911d,	// (0x00015b2a) toolbar_button_pane_g3

0x9125,	// (0x00015b32) toolbar_button_pane_g4

0x912d,	// (0x00015b3a) toolbar_button_pane_g5

0x9135,	// (0x00015b42) toolbar_button_pane_g6

0x913d,	// (0x00015b4a) toolbar_button_pane_g7

0x9145,	// (0x00015b52) toolbar_button_pane_g8

0x914d,	// (0x00015b5a) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001c1ad) toolbar_button_pane_g

0x5dff,	// (0x0001280c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5dff,	// (0x0001280c) list_single_2graphic_pane_g1_cp3

0x5e0b,	// (0x00012818) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5e0b,	// (0x00012818) list_single_2graphic_pane_g2_cp3

0x5e1c,	// (0x00012829) list_single_2graphic_pane_g3_cp3

0x5e24,	// (0x00012831) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5e24,	// (0x00012831) list_single_2graphic_pane_g4_cp3

0x5e30,	// (0x0001283d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5e30,	// (0x0001283d) list_single_2graphic_pane_t1_cp3

0x5e4b,	// (0x00012858) list_single_midp_graphic_pane_g2_ParamLimits

0x5e4b,	// (0x00012858) list_single_midp_graphic_pane_g2

0x570a,	// (0x00012117) aid_zoom_text_primary

0x5712,	// (0x0001211f) aid_zoom_text_secondary

0x8ad7,	// (0x000154e4) status_small_pane_g7_ParamLimits

0x8ad7,	// (0x000154e4) status_small_pane_g7

0x8afa,	// (0x00015507) status_small_pane_t1_ParamLimits

0x73da,	// (0x00013de7) title_pane_g2

0x0003,

0xf529,	// (0x0001bf36) title_pane_g

0x75b0,	// (0x00013fbd) aid_size_cell_colour_1_pane_ParamLimits

0x75b0,	// (0x00013fbd) aid_size_cell_colour_1_pane

0x75c4,	// (0x00013fd1) aid_size_cell_colour_2_pane_ParamLimits

0x75c4,	// (0x00013fd1) aid_size_cell_colour_2_pane

0x75d8,	// (0x00013fe5) aid_size_cell_colour_3_pane_ParamLimits

0x75d8,	// (0x00013fe5) aid_size_cell_colour_3_pane

0x75ec,	// (0x00013ff9) aid_size_cell_colour_4_pane_ParamLimits

0x75ec,	// (0x00013ff9) aid_size_cell_colour_4_pane

0x513f,	// (0x00011b4c) title_pane_stacon_g1_ParamLimits

0x513f,	// (0x00011b4c) title_pane_stacon_g1

0x9878,	// (0x00016285) popup_note_wait_window_g3_ParamLimits

0x9878,	// (0x00016285) popup_note_wait_window_g3

0x98ef,	// (0x000162fc) popup_note_wait_window_t5_ParamLimits

0x98ef,	// (0x000162fc) popup_note_wait_window_t5

0x384b,	// (0x00010258) main_feb_china_hwr_fs_writing_pane

0x57ba,	// (0x000121c7) popup_feb_china_hwr_fs_window_ParamLimits

0x57ba,	// (0x000121c7) popup_feb_china_hwr_fs_window

0x5e6d,	// (0x0001287a) aid_size_cell_hwr_fs_ParamLimits

0x5e6d,	// (0x0001287a) aid_size_cell_hwr_fs

0x9231,	// (0x00015c3e) bg_popup_sub_pane_cp3_ParamLimits

0x9231,	// (0x00015c3e) bg_popup_sub_pane_cp3

0x5e82,	// (0x0001288f) grid_hwr_fs_pane_ParamLimits

0x5e82,	// (0x0001288f) grid_hwr_fs_pane

0x5e9a,	// (0x000128a7) linegrid_hwr_fs_pane_ParamLimits

0x5e9a,	// (0x000128a7) linegrid_hwr_fs_pane

0x5eaa,	// (0x000128b7) cell_hwr_fs_pane_ParamLimits

0x5eaa,	// (0x000128b7) cell_hwr_fs_pane

0x923d,	// (0x00015c4a) linegrid_hwr_fs_pane_g1_ParamLimits

0x923d,	// (0x00015c4a) linegrid_hwr_fs_pane_g1

0x9249,	// (0x00015c56) linegrid_hwr_fs_pane_g2_ParamLimits

0x9249,	// (0x00015c56) linegrid_hwr_fs_pane_g2

0x925b,	// (0x00015c68) linegrid_hwr_fs_pane_g3_ParamLimits

0x925b,	// (0x00015c68) linegrid_hwr_fs_pane_g3

0x5ece,	// (0x000128db) linegrid_hwr_fs_pane_g4_ParamLimits

0x5ece,	// (0x000128db) linegrid_hwr_fs_pane_g4

0x5eec,	// (0x000128f9) linegrid_hwr_fs_pane_g5_ParamLimits

0x5eec,	// (0x000128f9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0001c1d8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0001c1d8) linegrid_hwr_fs_pane_g

0x9267,	// (0x00015c74) cell_hwr_fs_pane_g1_ParamLimits

0x9267,	// (0x00015c74) cell_hwr_fs_pane_g1

0x8f4c,	// (0x00015959) cell_hwr_fs_pane_g2_ParamLimits

0x8f4c,	// (0x00015959) cell_hwr_fs_pane_g2

0x927d,	// (0x00015c8a) cell_hwr_fs_pane_g3_ParamLimits

0x927d,	// (0x00015c8a) cell_hwr_fs_pane_g3

0x928a,	// (0x00015c97) cell_hwr_fs_pane_g4_ParamLimits

0x928a,	// (0x00015c97) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0001c1e3) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0001c1e3) cell_hwr_fs_pane_g

0x5f02,	// (0x0001290f) cell_hwr_fs_pane_t1

0x384b,	// (0x00010258) grid_highlight_pane_cp6

0x384b,	// (0x00010258) main_idle_act2_pane

0x4232,	// (0x00010c3f) aid_inside_area_popup_secondary

0x9f28,	// (0x00016935) aid_inside_area_window_primary_ParamLimits

0x9f28,	// (0x00016935) aid_inside_area_window_primary

0xabca,	// (0x000175d7) ai2_news_ticker_pane

0xabd2,	// (0x000175df) aid_size_cell_ai1_link_ParamLimits

0xabd2,	// (0x000175df) aid_size_cell_ai1_link

0xabec,	// (0x000175f9) popup_ai2_data_window_ParamLimits

0xabec,	// (0x000175f9) popup_ai2_data_window

0xac0a,	// (0x00017617) popup_ai2_link_window_ParamLimits

0xac0a,	// (0x00017617) popup_ai2_link_window

0x9231,	// (0x00015c3e) bg_popup_sub_pane_cp4_ParamLimits

0x9231,	// (0x00015c3e) bg_popup_sub_pane_cp4

0xac20,	// (0x0001762d) grid_ai2_link_pane_ParamLimits

0xac20,	// (0x0001762d) grid_ai2_link_pane

0xac37,	// (0x00017644) popup_ai2_link_window_g1_ParamLimits

0xac37,	// (0x00017644) popup_ai2_link_window_g1

0xac43,	// (0x00017650) popup_ai2_link_window_g2_ParamLimits

0xac43,	// (0x00017650) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0001c3b6) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0001c3b6) popup_ai2_link_window_g

0xac54,	// (0x00017661) ai2_mp_button_pane

0xac5c,	// (0x00017669) ai2_mp_volume_pane

0x942b,	// (0x00015e38) bg_popup_sub_pane_cp5_ParamLimits

0x942b,	// (0x00015e38) bg_popup_sub_pane_cp5

0xac64,	// (0x00017671) heading_ai2_gene_pane_ParamLimits

0xac64,	// (0x00017671) heading_ai2_gene_pane

0xac70,	// (0x0001767d) list_ai2_gene_pane_ParamLimits

0xac70,	// (0x0001767d) list_ai2_gene_pane

0xacb8,	// (0x000176c5) cell_ai2_link_pane_ParamLimits

0xacb8,	// (0x000176c5) cell_ai2_link_pane

0xacce,	// (0x000176db) cell_ai2_link_pane_g1

0x384b,	// (0x00010258) grid_highlight_pane_cp7

0x6210,	// (0x00012c1d) ai2_mp_volume_pane_g1

0xada1,	// (0x000177ae) ai2_mp_volume_pane_g2

0xad16,	// (0x00017723) list_ai2_gene_pane_t1

0xada9,	// (0x000177b6) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x0001c3cf) ai2_mp_volume_pane_g

0x6218,	// (0x00012c25) volume_small_pane_cp3

0xadb1,	// (0x000177be) aid_size_cell_ai2_button

0xadb9,	// (0x000177c6) grid_ai2_button_pane

0xadc2,	// (0x000177cf) cell_ai2_button_pane_ParamLimits

0xadc2,	// (0x000177cf) cell_ai2_button_pane

0x36d2,	// (0x000100df) cell_ai2_button_pane_g1

0x384b,	// (0x00010258) grid_highlight_pane_cp8

0xad61,	// (0x0001776e) ai2_gene_pane_t1_ParamLimits

0xad61,	// (0x0001776e) ai2_gene_pane_t1

0x56f8,	// (0x00012105) aid_height_parent_landscape

0xa5e0,	// (0x00016fed) aid_height_set_list

0xa5f1,	// (0x00016ffe) aid_size_parent

0xa9e9,	// (0x000173f6) aid_size_cell_graphic_pane_ParamLimits

0xac80,	// (0x0001768d) popup_ai2_data_window_g1_ParamLimits

0xac80,	// (0x0001768d) popup_ai2_data_window_g1

0xac8c,	// (0x00017699) ai2_news_ticker_pane_g1

0xac94,	// (0x000176a1) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x0001c3bb) ai2_news_ticker_pane_g

0xac9c,	// (0x000176a9) ai2_news_ticker_pane_t1

0xacaa,	// (0x000176b7) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x0001c3c0) ai2_news_ticker_pane_t

0xacd7,	// (0x000176e4) heading_ai2_gene_pane_g1

0xacdf,	// (0x000176ec) heading_ai2_gene_pane_t1_ParamLimits

0xacdf,	// (0x000176ec) heading_ai2_gene_pane_t1

0xacf4,	// (0x00017701) list_highlight_pane_cp6

0xacfc,	// (0x00017709) ai2_gene_pane_ParamLimits

0xacfc,	// (0x00017709) ai2_gene_pane

0xad24,	// (0x00017731) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x0001c3c5) list_ai2_gene_pane_t

0xad32,	// (0x0001773f) list_highlight_pane_cp8_ParamLimits

0xad32,	// (0x0001773f) list_highlight_pane_cp8

0xad43,	// (0x00017750) ai2_gene_pane_g1_ParamLimits

0xad43,	// (0x00017750) ai2_gene_pane_g1

0xad55,	// (0x00017762) ai2_gene_pane_g2_ParamLimits

0xad55,	// (0x00017762) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x0001c3ca) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x0001c3ca) ai2_gene_pane_g

0x3f80,	// (0x0001098d) scroll_pane_cp12

0x56b5,	// (0x000120c2) control_pane_t3_ParamLimits

0x56b5,	// (0x000120c2) control_pane_t3

0x8aeb,	// (0x000154f8) status_small_pane_g8_ParamLimits

0x8aeb,	// (0x000154f8) status_small_pane_g8

0x58b8,	// (0x000122c5) popup_find_window_ParamLimits

0x5ae5,	// (0x000124f2) popup_note_image_window_ParamLimits

0x9077,	// (0x00015a84) list_double2_graphic_pane_vc_g1_ParamLimits

0x9077,	// (0x00015a84) list_double2_graphic_pane_vc_g1

0x9083,	// (0x00015a90) list_double2_graphic_pane_vc_g2_ParamLimits

0x9083,	// (0x00015a90) list_double2_graphic_pane_vc_g2

0x908f,	// (0x00015a9c) list_double2_graphic_pane_vc_g3_ParamLimits

0x908f,	// (0x00015a9c) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001c1a1) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001c1a1) list_double2_graphic_pane_vc_g

0x909b,	// (0x00015aa8) list_double2_graphic_pane_vc_t1_ParamLimits

0x909b,	// (0x00015aa8) list_double2_graphic_pane_vc_t1

0x9083,	// (0x00015a90) list_single_heading_pane_vc_g1_ParamLimits

0x9083,	// (0x00015a90) list_single_heading_pane_vc_g1

0x908f,	// (0x00015a9c) list_single_heading_pane_vc_g2_ParamLimits

0x908f,	// (0x00015a9c) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c1c2) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c1c2) list_single_heading_pane_vc_g

0x9155,	// (0x00015b62) list_single_heading_pane_vc_t1_ParamLimits

0x9155,	// (0x00015b62) list_single_heading_pane_vc_t1

0x916b,	// (0x00015b78) list_single_heading_pane_vc_t2_ParamLimits

0x916b,	// (0x00015b78) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0001c1c7) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001c1c7) list_single_heading_pane_vc_t

0x917d,	// (0x00015b8a) list_setting_number_pane_vc_g1_ParamLimits

0x917d,	// (0x00015b8a) list_setting_number_pane_vc_g1

0x9189,	// (0x00015b96) list_setting_number_pane_vc_g2_ParamLimits

0x9189,	// (0x00015b96) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001c1cc) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c1cc) list_setting_number_pane_vc_g

0x9195,	// (0x00015ba2) list_setting_number_pane_vc_t1_ParamLimits

0x9195,	// (0x00015ba2) list_setting_number_pane_vc_t1

0x91a9,	// (0x00015bb6) list_setting_number_pane_vc_t2_ParamLimits

0x91a9,	// (0x00015bb6) list_setting_number_pane_vc_t2

0x91c5,	// (0x00015bd2) list_setting_number_pane_vc_t3_ParamLimits

0x91c5,	// (0x00015bd2) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0001c1d1) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0001c1d1) list_setting_number_pane_vc_t

0x91f3,	// (0x00015c00) set_value_pane_vc_ParamLimits

0x91f3,	// (0x00015c00) set_value_pane_vc

0xa80f,	// (0x0001721c) list_double2_graphic_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_double2_graphic_pane_vc

0xa826,	// (0x00017233) list_double2_large_graphic_pane_vc_ParamLimits

0xa826,	// (0x00017233) list_double2_large_graphic_pane_vc

0xa80f,	// (0x0001721c) list_double2_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_double2_pane_vc

0xa80f,	// (0x0001721c) list_double_graphic_heading_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_double_graphic_heading_pane_vc

0xa80f,	// (0x0001721c) list_double_graphic_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_double_graphic_pane_vc

0xa80f,	// (0x0001721c) list_double_heading_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_double_heading_pane_vc

0xa83a,	// (0x00017247) list_double_large_graphic_pane_vc_ParamLimits

0xa83a,	// (0x00017247) list_double_large_graphic_pane_vc

0xa80f,	// (0x0001721c) list_double_number_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_double_number_pane_vc

0xa80f,	// (0x0001721c) list_double_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_double_pane_vc

0xa80f,	// (0x0001721c) list_double_time_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_double_time_pane_vc

0xa80f,	// (0x0001721c) list_setting_number_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_setting_number_pane_vc

0xa80f,	// (0x0001721c) list_setting_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_setting_pane_vc

0xa80f,	// (0x0001721c) list_single_graphic_heading_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_single_graphic_heading_pane_vc

0xa80f,	// (0x0001721c) list_single_heading_pane_vc_ParamLimits

0xa80f,	// (0x0001721c) list_single_heading_pane_vc

0xa85c,	// (0x00017269) list_single_number_heading_pane_vc_ParamLimits

0xa85c,	// (0x00017269) list_single_number_heading_pane_vc

0x9077,	// (0x00015a84) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9077,	// (0x00015a84) list_double_graphic_heading_pane_vc_g1

0x872c,	// (0x00015139) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x872c,	// (0x00015139) list_double_graphic_heading_pane_vc_g2

0xadf5,	// (0x00017802) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xadf5,	// (0x00017802) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x0001c3d6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0001c3d6) list_double_graphic_heading_pane_vc_g

0xae01,	// (0x0001780e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae01,	// (0x0001780e) list_double_graphic_heading_pane_vc_t1

0xae17,	// (0x00017824) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae17,	// (0x00017824) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x0001c3dd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x0001c3dd) list_double_graphic_heading_pane_vc_t

0x917d,	// (0x00015b8a) list_setting_pane_vc_g1_ParamLimits

0x917d,	// (0x00015b8a) list_setting_pane_vc_g1

0x9189,	// (0x00015b96) list_setting_pane_vc_g2_ParamLimits

0x9189,	// (0x00015b96) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001c1cc) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c1cc) list_setting_pane_vc_g

0xb068,	// (0x00017a75) list_setting_pane_vc_t1_ParamLimits

0xb068,	// (0x00017a75) list_setting_pane_vc_t1

0xb084,	// (0x00017a91) list_setting_pane_vc_t2_ParamLimits

0xb084,	// (0x00017a91) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x0001c40b) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001c40b) list_setting_pane_vc_t

0x91f3,	// (0x00015c00) set_value_pane_cp_vc_ParamLimits

0x91f3,	// (0x00015c00) set_value_pane_cp_vc

0x9083,	// (0x00015a90) list_single_number_heading_pane_vc_g1_ParamLimits

0x9083,	// (0x00015a90) list_single_number_heading_pane_vc_g1

0x908f,	// (0x00015a9c) list_single_number_heading_pane_vc_g2_ParamLimits

0x908f,	// (0x00015a9c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c1c2) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c1c2) list_single_number_heading_pane_vc_g

0xb0a0,	// (0x00017aad) list_single_number_heading_pane_vc_t1_ParamLimits

0xb0a0,	// (0x00017aad) list_single_number_heading_pane_vc_t1

0xb0b6,	// (0x00017ac3) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0b6,	// (0x00017ac3) list_single_number_heading_pane_vc_t2

0xb0c8,	// (0x00017ad5) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0c8,	// (0x00017ad5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x0001c410) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x0001c410) list_single_number_heading_pane_vc_t

0x9077,	// (0x00015a84) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9077,	// (0x00015a84) list_single_graphic_heading_pane_vc_g1

0x9083,	// (0x00015a90) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9083,	// (0x00015a90) list_single_graphic_heading_pane_vc_g4

0x908f,	// (0x00015a9c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x908f,	// (0x00015a9c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001c1a1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001c1a1) list_single_graphic_heading_pane_vc_g

0xb0a0,	// (0x00017aad) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb0a0,	// (0x00017aad) list_single_graphic_heading_pane_vc_t1

0xb0da,	// (0x00017ae7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0da,	// (0x00017ae7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0a,	// (0x0001c417) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x0001c417) list_single_graphic_heading_pane_vc_t

0x9083,	// (0x00015a90) list_double2_pane_vc_g1_ParamLimits

0x9083,	// (0x00015a90) list_double2_pane_vc_g1

0x908f,	// (0x00015a9c) list_double2_pane_vc_g2_ParamLimits

0x908f,	// (0x00015a9c) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c1c2) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c1c2) list_double2_pane_vc_g

0xb0ec,	// (0x00017af9) list_double2_pane_vc_t1_ParamLimits

0xb0ec,	// (0x00017af9) list_double2_pane_vc_t1

0xb102,	// (0x00017b0f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb102,	// (0x00017b0f) list_double2_large_graphic_pane_vc_g1

0xb10e,	// (0x00017b1b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb10e,	// (0x00017b1b) list_double2_large_graphic_pane_vc_g2

0xb11a,	// (0x00017b27) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb11a,	// (0x00017b27) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0f,	// (0x0001c41c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0f,	// (0x0001c41c) list_double2_large_graphic_pane_vc_g

0xb126,	// (0x00017b33) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb126,	// (0x00017b33) list_double2_large_graphic_pane_vc_t1

0xb13c,	// (0x00017b49) list_double_time_pane_vc_g1_ParamLimits

0xb13c,	// (0x00017b49) list_double_time_pane_vc_g1

0xb148,	// (0x00017b55) list_double_time_pane_vc_g2_ParamLimits

0xb148,	// (0x00017b55) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x0001c423) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x0001c423) list_double_time_pane_vc_g

0xb154,	// (0x00017b61) list_double_time_pane_vc_t1_ParamLimits

0xb154,	// (0x00017b61) list_double_time_pane_vc_t1

0xb184,	// (0x00017b91) list_double_time_pane_vc_t2_ParamLimits

0xb184,	// (0x00017b91) list_double_time_pane_vc_t2

0xb1ad,	// (0x00017bba) list_double_time_pane_vc_t3_ParamLimits

0xb1ad,	// (0x00017bba) list_double_time_pane_vc_t3

0xb1bf,	// (0x00017bcc) list_double_time_pane_vc_t4_ParamLimits

0xb1bf,	// (0x00017bcc) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x0001c428) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x0001c428) list_double_time_pane_vc_t

0x9083,	// (0x00015a90) list_double_pane_vc_g1_ParamLimits

0x9083,	// (0x00015a90) list_double_pane_vc_g1

0x908f,	// (0x00015a9c) list_double_pane_vc_g2_ParamLimits

0x908f,	// (0x00015a9c) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c1c2) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c1c2) list_double_pane_vc_g

0xb1d3,	// (0x00017be0) list_double_pane_vc_t1_ParamLimits

0xb1d3,	// (0x00017be0) list_double_pane_vc_t1

0xb1e7,	// (0x00017bf4) list_double_pane_vc_t2_ParamLimits

0xb1e7,	// (0x00017bf4) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x0001c431) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x0001c431) list_double_pane_vc_t

0x9083,	// (0x00015a90) list_double_number_pane_vc_g1_ParamLimits

0x9083,	// (0x00015a90) list_double_number_pane_vc_g1

0x908f,	// (0x00015a9c) list_double_number_pane_vc_g2_ParamLimits

0x908f,	// (0x00015a9c) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c1c2) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c1c2) list_double_number_pane_vc_g

0xb1fd,	// (0x00017c0a) list_double_number_pane_vc_t1_ParamLimits

0xb1fd,	// (0x00017c0a) list_double_number_pane_vc_t1

0xb20f,	// (0x00017c1c) list_double_number_pane_vc_t2_ParamLimits

0xb20f,	// (0x00017c1c) list_double_number_pane_vc_t2

0xb1e7,	// (0x00017bf4) list_double_number_pane_vc_t3_ParamLimits

0xb1e7,	// (0x00017bf4) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x0001c436) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x0001c436) list_double_number_pane_vc_t

0xb223,	// (0x00017c30) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb223,	// (0x00017c30) list_double_large_graphic_pane_vc_g1

0xb245,	// (0x00017c52) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb245,	// (0x00017c52) list_double_large_graphic_pane_vc_g2

0xb259,	// (0x00017c66) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb259,	// (0x00017c66) list_double_large_graphic_pane_vc_g3

0xb268,	// (0x00017c75) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb268,	// (0x00017c75) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x0001c43d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x0001c43d) list_double_large_graphic_pane_vc_g

0xb274,	// (0x00017c81) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb274,	// (0x00017c81) list_double_large_graphic_pane_vc_t1

0xb290,	// (0x00017c9d) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb290,	// (0x00017c9d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x0001c446) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x0001c446) list_double_large_graphic_pane_vc_t

0x872c,	// (0x00015139) list_double_heading_pane_vc_g1_ParamLimits

0x872c,	// (0x00015139) list_double_heading_pane_vc_g1

0xadf5,	// (0x00017802) list_double_heading_pane_vc_g2_ParamLimits

0xadf5,	// (0x00017802) list_double_heading_pane_vc_g2

0x0001,

0xfa3e,	// (0x0001c44b) list_double_heading_pane_vc_g_ParamLimits

0xfa3e,	// (0x0001c44b) list_double_heading_pane_vc_g

0xb2b0,	// (0x00017cbd) list_double_heading_pane_vc_t1_ParamLimits

0xb2b0,	// (0x00017cbd) list_double_heading_pane_vc_t1

0xb2c2,	// (0x00017ccf) list_double_heading_pane_vc_t2_ParamLimits

0xb2c2,	// (0x00017ccf) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0001c450) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0001c450) list_double_heading_pane_vc_t

0xb2da,	// (0x00017ce7) list_double_graphic_pane_vc_g1_ParamLimits

0xb2da,	// (0x00017ce7) list_double_graphic_pane_vc_g1

0xb2e6,	// (0x00017cf3) list_double_graphic_pane_vc_g2_ParamLimits

0xb2e6,	// (0x00017cf3) list_double_graphic_pane_vc_g2

0x9083,	// (0x00015a90) list_double_graphic_pane_vc_g3_ParamLimits

0x9083,	// (0x00015a90) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0001c455) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0001c455) list_double_graphic_pane_vc_g

0xb303,	// (0x00017d10) list_double_graphic_pane_vc_t1_ParamLimits

0xb303,	// (0x00017d10) list_double_graphic_pane_vc_t1

0xb32d,	// (0x00017d3a) list_double_graphic_pane_vc_t2_ParamLimits

0xb32d,	// (0x00017d3a) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0001c45e) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0001c45e) list_double_graphic_pane_vc_t

0x4c7f,	// (0x0001168c) aid_size_cell_fastswap

0x4c87,	// (0x00011694) aid_size_cell_touch_ParamLimits

0x4c87,	// (0x00011694) aid_size_cell_touch

0x4ef2,	// (0x000118ff) popup_fast_swap_wide_window_ParamLimits

0x4ef2,	// (0x000118ff) popup_fast_swap_wide_window

0x5010,	// (0x00011a1d) touch_pane_ParamLimits

0x5010,	// (0x00011a1d) touch_pane

0x4011,	// (0x00010a1e) button_value_adjust_pane_cp2

0x4019,	// (0x00010a26) button_value_adjust_pane_cp4

0x4021,	// (0x00010a2e) form_field_data_pane_cp2

0x7b5c,	// (0x00014569) form_field_data_wide_pane_cp2

0x7faa,	// (0x000149b7) bg_scroll_pane_ParamLimits

0x52a4,	// (0x00011cb1) scroll_handle_pane_ParamLimits

0x52b8,	// (0x00011cc5) scroll_sc2_down_pane_ParamLimits

0x52b8,	// (0x00011cc5) scroll_sc2_down_pane

0x7fdb,	// (0x000149e8) scroll_sc2_up_pane_ParamLimits

0x7fdb,	// (0x000149e8) scroll_sc2_up_pane

0xb80d,	// (0x0001821a) grid_wheel_folder_pane_g1_ParamLimits

0xb80d,	// (0x0001821a) grid_wheel_folder_pane_g1

0x547f,	// (0x00011e8c) clock_nsta_pane_cp2_ParamLimits

0x547f,	// (0x00011e8c) clock_nsta_pane_cp2

0x886e,	// (0x0001527b) listscroll_midp_pane_ParamLimits

0x887a,	// (0x00015287) midp_canvas_pane

0x8b65,	// (0x00015572) nsta_clock_indic_pane

0x8ba1,	// (0x000155ae) listscroll_form_pane_vc

0x8ba9,	// (0x000155b6) listscroll_set_pane_vc_ParamLimits

0x8ba9,	// (0x000155b6) listscroll_set_pane_vc

0x8ca8,	// (0x000156b5) clock_nsta_pane

0x8d25,	// (0x00015732) indicator_nsta_pane

0x9011,	// (0x00015a1e) bg_popup_sub_pane_cp2_ParamLimits

0x9025,	// (0x00015a32) find_pane_cp2_ParamLimits

0x9025,	// (0x00015a32) find_pane_cp2

0x903b,	// (0x00015a48) grid_toobar_pane_ParamLimits

0x9205,	// (0x00015c12) list_form_gen_pane_vc_ParamLimits

0x9205,	// (0x00015c12) list_form_gen_pane_vc

0x921b,	// (0x00015c28) scroll_pane_cp8_vc_ParamLimits

0x921b,	// (0x00015c28) scroll_pane_cp8_vc

0x9297,	// (0x00015ca4) data_form_wide_pane_vc_ParamLimits

0x9297,	// (0x00015ca4) data_form_wide_pane_vc

0x92a3,	// (0x00015cb0) form_field_data_wide_pane_vc_g1

0x92ab,	// (0x00015cb8) form_field_data_wide_pane_vc_t1_ParamLimits

0x92ab,	// (0x00015cb8) form_field_data_wide_pane_vc_t1

0x407d,	// (0x00010a8a) input_focus_pane_cp6_vc_ParamLimits

0x407d,	// (0x00010a8a) input_focus_pane_cp6_vc

0x95d6,	// (0x00015fe3) list_midp_pane_ParamLimits

0x95e2,	// (0x00015fef) scroll_pane_cp16_ParamLimits

0x95e2,	// (0x00015fef) scroll_pane_cp16

0x964c,	// (0x00016059) button_value_adjust_pane_ParamLimits

0x964c,	// (0x00016059) button_value_adjust_pane

0xa603,	// (0x00017010) button_value_adjust_pane_cp6_ParamLimits

0xa603,	// (0x00017010) button_value_adjust_pane_cp6

0xa74b,	// (0x00017158) settings_code_pane_cp_ParamLimits

0xa74b,	// (0x00017158) settings_code_pane_cp

0x36d2,	// (0x000100df) cell_touch_pane_g1

0x36d2,	// (0x000100df) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001c0e6) cell_touch_pane_g

0xadd4,	// (0x000177e1) cell_touch_pane_cp_ParamLimits

0xadd4,	// (0x000177e1) cell_touch_pane_cp

0xade4,	// (0x000177f1) cell_touch_pane_ParamLimits

0xade4,	// (0x000177f1) cell_touch_pane

0x36d2,	// (0x000100df) scroll_sc2_down_pane_g1

0x36d2,	// (0x000100df) scroll_sc2_up_pane_g1

0x384b,	// (0x00010258) bg_set_opt_pane_cp4_vc

0xae35,	// (0x00017842) list_set_graphic_pane_vc_g1_ParamLimits

0xae35,	// (0x00017842) list_set_graphic_pane_vc_g1

0xae41,	// (0x0001784e) list_set_graphic_pane_vc_g2_ParamLimits

0xae41,	// (0x0001784e) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x0001c3e2) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x0001c3e2) list_set_graphic_pane_vc_g

0xae4d,	// (0x0001785a) text_primary_small_cp13_vc_ParamLimits

0xae4d,	// (0x0001785a) text_primary_small_cp13_vc

0xae65,	// (0x00017872) list_set_graphic_pane_vc_ParamLimits

0xae65,	// (0x00017872) list_set_graphic_pane_vc

0x384b,	// (0x00010258) input_focus_pane_cp2_vc

0x36d2,	// (0x000100df) setting_code_pane_vc_g1

0x39a5,	// (0x000103b2) setting_code_pane_vc_t1

0xae78,	// (0x00017885) set_text_pane_vc_t1_ParamLimits

0xae78,	// (0x00017885) set_text_pane_vc_t1

0x384b,	// (0x00010258) input_focus_pane_cp1_vc

0xae99,	// (0x000178a6) list_set_text_pane_vc

0x36d2,	// (0x000100df) setting_text_pane_vc_g1

0x384b,	// (0x00010258) bg_set_opt_pane_cp2_vc

0x3974,	// (0x00010381) setting_slider_graphic_pane_vc_g1

0xaea3,	// (0x000178b0) setting_slider_graphic_pane_vc_t1

0xaeb5,	// (0x000178c2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x0001c3e7) setting_slider_graphic_pane_vc_t

0xaec7,	// (0x000178d4) slider_set_pane_cp_vc

0xaed1,	// (0x000178de) slider_set_pane_vc_g1

0xaeda,	// (0x000178e7) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x0001c3ec) slider_set_pane_vc_g

0x4138,	// (0x00010b45) set_opt_bg_pane_g1_copy1

0x4140,	// (0x00010b4d) set_opt_bg_pane_g2_copy1

0xaf06,	// (0x00017913) set_opt_bg_pane_g3_copy1

0x4150,	// (0x00010b5d) set_opt_bg_pane_g4_copy1

0x4158,	// (0x00010b65) set_opt_bg_pane_g5_copy1

0x4160,	// (0x00010b6d) set_opt_bg_pane_g6_copy1

0xaf10,	// (0x0001791d) set_opt_bg_pane_g7_copy1

0xaf1a,	// (0x00017927) set_opt_bg_pane_g8_copy1

0xaf24,	// (0x00017931) set_opt_bg_pane_g9_copy1

0x384b,	// (0x00010258) bg_set_opt_pane_cp_vc

0xaf2e,	// (0x0001793b) setting_slider_pane_vc_t1

0xaf3d,	// (0x0001794a) setting_slider_pane_vc_t2

0xaf4f,	// (0x0001795c) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x0001c3fb) setting_slider_pane_vc_t

0xaf61,	// (0x0001796e) slider_set_pane_vc

0x5f10,	// (0x0001291d) volume_set_pane_vc_g1

0x5f19,	// (0x00012926) volume_set_pane_vc_g2

0x5f22,	// (0x0001292f) volume_set_pane_vc_g3

0x5f2b,	// (0x00012938) volume_set_pane_vc_g4

0x5f34,	// (0x00012941) volume_set_pane_vc_g5

0x5f3d,	// (0x0001294a) volume_set_pane_vc_g6

0x5f46,	// (0x00012953) volume_set_pane_vc_g7

0x5f4f,	// (0x0001295c) volume_set_pane_vc_g8

0x5f58,	// (0x00012965) volume_set_pane_vc_g9

0x5f61,	// (0x0001296e) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x0001c299) volume_set_pane_vc_g

0xaf6b,	// (0x00017978) volume_set_pane_vc

0xaf75,	// (0x00017982) button_value_adjust_pane_cp1_vc

0xaf7f,	// (0x0001798c) list_highlight_pane_cp2_vc

0xaf88,	// (0x00017995) list_set_pane_vc_ParamLimits

0xaf88,	// (0x00017995) list_set_pane_vc

0xaff6,	// (0x00017a03) main_pane_set_vc_t1_ParamLimits

0xaff6,	// (0x00017a03) main_pane_set_vc_t1

0xb00b,	// (0x00017a18) main_pane_set_vc_t2_ParamLimits

0xb00b,	// (0x00017a18) main_pane_set_vc_t2

0xb01d,	// (0x00017a2a) main_pane_set_vc_t3_ParamLimits

0xb01d,	// (0x00017a2a) main_pane_set_vc_t3

0xb031,	// (0x00017a3e) main_pane_set_vc_t4_ParamLimits

0xb031,	// (0x00017a3e) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x0001c402) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x0001c402) main_pane_set_vc_t

0xb045,	// (0x00017a52) setting_code_pane_vc_ParamLimits

0xb045,	// (0x00017a52) setting_code_pane_vc

0xb056,	// (0x00017a63) setting_slider_graphic_pane_vc

0xb056,	// (0x00017a63) setting_slider_pane_vc

0xb056,	// (0x00017a63) setting_text_pane_vc

0xb056,	// (0x00017a63) setting_volume_pane_vc

0xb060,	// (0x00017a6d) scroll_pane_cp121_vc

0x3fff,	// (0x00010a0c) set_content_pane_vc

0xb34b,	// (0x00017d58) button_value_adjust_pane_g1

0xb354,	// (0x00017d61) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0001c463) button_value_adjust_pane_g

0xb35d,	// (0x00017d6a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb35d,	// (0x00017d6a) form_field_slider_wide_pane_vc_t1

0xb36f,	// (0x00017d7c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb36f,	// (0x00017d7c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0001c468) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0001c468) form_field_slider_wide_pane_vc_t

0x38ed,	// (0x000102fa) input_focus_pane_cp10_vc_ParamLimits

0x38ed,	// (0x000102fa) input_focus_pane_cp10_vc

0xb39b,	// (0x00017da8) slider_cont_pane_cp1_vc_ParamLimits

0xb39b,	// (0x00017da8) slider_cont_pane_cp1_vc

0xb3ad,	// (0x00017dba) slider_form_pane_g1_cp2

0xaeda,	// (0x000178e7) slider_form_pane_g2_cp2

0xb3da,	// (0x00017de7) form_field_slider_pane_vc_t3

0xb3e8,	// (0x00017df5) form_field_slider_pane_vc_t4

0xb3f6,	// (0x00017e03) slider_form_pane_vc_ParamLimits

0xb3f6,	// (0x00017e03) slider_form_pane_vc

0xb403,	// (0x00017e10) form_field_slider_pane_vc_t1_ParamLimits

0xb403,	// (0x00017e10) form_field_slider_pane_vc_t1

0xb36f,	// (0x00017d7c) form_field_slider_pane_vc_t2_ParamLimits

0xb36f,	// (0x00017d7c) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001c47a) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001c47a) form_field_slider_pane_vc_t

0x38ed,	// (0x000102fa) input_focus_pane_cp9_vc_ParamLimits

0x38ed,	// (0x000102fa) input_focus_pane_cp9_vc

0xb419,	// (0x00017e26) slider_cont_pane_vc_ParamLimits

0xb419,	// (0x00017e26) slider_cont_pane_vc

0xb42d,	// (0x00017e3a) list_form_graphic_pane_cp_vc_ParamLimits

0xb42d,	// (0x00017e3a) list_form_graphic_pane_cp_vc

0x92a3,	// (0x00015cb0) form_field_popup_wide_pane_vc_g1

0xb442,	// (0x00017e4f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb442,	// (0x00017e4f) form_field_popup_wide_pane_vc_t1

0x407d,	// (0x00010a8a) input_focus_pane_cp8_vc_ParamLimits

0x407d,	// (0x00010a8a) input_focus_pane_cp8_vc

0xb487,	// (0x00017e94) list_form_wide_pane_vc_ParamLimits

0xb487,	// (0x00017e94) list_form_wide_pane_vc

0xb493,	// (0x00017ea0) list_form_graphic_pane_vc_g1

0xb49b,	// (0x00017ea8) list_form_graphic_pane_vc_t1_ParamLimits

0xb49b,	// (0x00017ea8) list_form_graphic_pane_vc_t1

0x3905,	// (0x00010312) list_highlight_pane_cp5_vc_ParamLimits

0x3905,	// (0x00010312) list_highlight_pane_cp5_vc

0xb4b7,	// (0x00017ec4) list_form_graphic_pane_vc_ParamLimits

0xb4b7,	// (0x00017ec4) list_form_graphic_pane_vc

0x92a3,	// (0x00015cb0) form_field_popup_pane_vc_g1

0xb4cd,	// (0x00017eda) form_field_popup_pane_vc_t1_ParamLimits

0xb4cd,	// (0x00017eda) form_field_popup_pane_vc_t1

0x407d,	// (0x00010a8a) input_focus_pane_cp7_vc_ParamLimits

0x407d,	// (0x00010a8a) input_focus_pane_cp7_vc

0xb4e4,	// (0x00017ef1) list_form_pane_vc_ParamLimits

0xb4e4,	// (0x00017ef1) list_form_pane_vc

0xb4f0,	// (0x00017efd) data_form_pane_vc_t1_ParamLimits

0xb4f0,	// (0x00017efd) data_form_pane_vc_t1

0x4138,	// (0x00010b45) input_focus_pane_vc_g1

0x4140,	// (0x00010b4d) input_focus_pane_vc_g2

0x4148,	// (0x00010b55) input_focus_pane_vc_g3

0x4150,	// (0x00010b5d) input_focus_pane_vc_g4

0x4158,	// (0x00010b65) input_focus_pane_vc_g5

0x4160,	// (0x00010b6d) input_focus_pane_vc_g6

0x4168,	// (0x00010b75) input_focus_pane_vc_g7

0x4170,	// (0x00010b7d) input_focus_pane_vc_g8

0x4178,	// (0x00010b85) input_focus_pane_vc_g9

0x36d2,	// (0x000100df) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001c06f) input_focus_pane_vc_g

0x9297,	// (0x00015ca4) data_form_pane_vc_ParamLimits

0x9297,	// (0x00015ca4) data_form_pane_vc

0x92a3,	// (0x00015cb0) form_field_data_pane_vc_g1

0xb50d,	// (0x00017f1a) form_field_data_pane_vc_t1_ParamLimits

0xb50d,	// (0x00017f1a) form_field_data_pane_vc_t1

0x407d,	// (0x00010a8a) input_focus_pane_vc_ParamLimits

0x407d,	// (0x00010a8a) input_focus_pane_vc

0xb527,	// (0x00017f34) button_value_adjust_pane_cp3_vc

0xb52f,	// (0x00017f3c) button_value_adjust_pane_cp5_vc

0xb537,	// (0x00017f44) form_field_data_pane_vc_ParamLimits

0xb537,	// (0x00017f44) form_field_data_pane_vc

0xb552,	// (0x00017f5f) form_field_data_pane_vc_cp2

0xb55a,	// (0x00017f67) form_field_data_wide_pane_vc_ParamLimits

0xb55a,	// (0x00017f67) form_field_data_wide_pane_vc

0xb574,	// (0x00017f81) form_field_data_wide_pane_vc_cp2

0xb57c,	// (0x00017f89) form_field_popup_pane_vc_ParamLimits

0xb57c,	// (0x00017f89) form_field_popup_pane_vc

0xb597,	// (0x00017fa4) form_field_popup_wide_pane_vc_ParamLimits

0xb597,	// (0x00017fa4) form_field_popup_wide_pane_vc

0xb5b1,	// (0x00017fbe) form_field_slider_pane_vc_ParamLimits

0xb5b1,	// (0x00017fbe) form_field_slider_pane_vc

0xb5c4,	// (0x00017fd1) form_field_slider_wide_pane_vc_ParamLimits

0xb5c4,	// (0x00017fd1) form_field_slider_wide_pane_vc

0xb5d7,	// (0x00017fe4) grid_touch_1_pane_ParamLimits

0xb5d7,	// (0x00017fe4) grid_touch_1_pane

0xb5e3,	// (0x00017ff0) grid_touch_2_pane_ParamLimits

0xb5e3,	// (0x00017ff0) grid_touch_2_pane

0x8b30,	// (0x0001553d) touch_pane_g1_ParamLimits

0x8b30,	// (0x0001553d) touch_pane_g1

0xb5fd,	// (0x0001800a) cell_app_pane_cp_wide_ParamLimits

0xb5fd,	// (0x0001800a) cell_app_pane_cp_wide

0xb60e,	// (0x0001801b) grid_popup_fast_wide_pane_ParamLimits

0xb60e,	// (0x0001801b) grid_popup_fast_wide_pane

0xb622,	// (0x0001802f) scroll_pane_cp19_ParamLimits

0xb622,	// (0x0001802f) scroll_pane_cp19

0x384b,	// (0x00010258) bg_popup_window_pane_cp20

0xb636,	// (0x00018043) listscroll_popup_fast_wide_pane

0xb63e,	// (0x0001804b) grid_indicator_nsta_pane

0xb650,	// (0x0001805d) clock_nsta_pane_g1

0xb659,	// (0x00018066) clock_nsta_pane_t1

0xb675,	// (0x00018082) cell_indicator_nsta_pane_ParamLimits

0xb675,	// (0x00018082) cell_indicator_nsta_pane

0xb6aa,	// (0x000180b7) cell_indicator_nsta_pane_g1

0xb6b8,	// (0x000180c5) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0001c48b) cell_indicator_nsta_pane_g

0xb6cb,	// (0x000180d8) clock_nsta_pane_cp

0xb6d4,	// (0x000180e1) indicator_nsta_pane_cp

0xb6de,	// (0x000180eb) nsta_clock_indic_pane_g1

0x39e4,	// (0x000103f1) grid_indicator_pane

0x80cd,	// (0x00014ada) scroll_pane_cp29

0x53ce,	// (0x00011ddb) indicator_nsta_pane_cp2_ParamLimits

0x53ce,	// (0x00011ddb) indicator_nsta_pane_cp2

0x3905,	// (0x00010312) main_apps_wheel_pane

0x94b3,	// (0x00015ec0) form_midp_field_text_pane_ParamLimits

0x9602,	// (0x0001600f) scroll_bar_cp050_ParamLimits

0xb737,	// (0x00018144) cell_indicator_pane_ParamLimits

0xb737,	// (0x00018144) cell_indicator_pane

0xb74f,	// (0x0001815c) cell_indicator_pane_g1

0xb759,	// (0x00018166) grid_wheel_folder_pane_ParamLimits

0xb759,	// (0x00018166) grid_wheel_folder_pane

0xb76d,	// (0x0001817a) list_wheel_apps_pane_ParamLimits

0xb76d,	// (0x0001817a) list_wheel_apps_pane

0xb780,	// (0x0001818d) main_apps_wheel_pane_g1_ParamLimits

0xb780,	// (0x0001818d) main_apps_wheel_pane_g1

0xb79c,	// (0x000181a9) main_apps_wheel_pane_g2_ParamLimits

0xb79c,	// (0x000181a9) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0001c4a7) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0001c4a7) main_apps_wheel_pane_g

0xb7b8,	// (0x000181c5) main_apps_wheel_pane_t1_ParamLimits

0xb7b8,	// (0x000181c5) main_apps_wheel_pane_t1

0xb7e1,	// (0x000181ee) list_wheel_apps_pane_g1

0xb7e9,	// (0x000181f6) list_wheel_apps_pane_g2

0xb7f1,	// (0x000181fe) list_wheel_apps_pane_g3

0xb7f9,	// (0x00018206) list_wheel_apps_pane_g4

0xb803,	// (0x00018210) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0001c4ac) list_wheel_apps_pane_g

0x86d7,	// (0x000150e4) navi_icon_text_pane

0x8bd9,	// (0x000155e6) aid_fill_nsta

0xb824,	// (0x00018231) navi_icon_text_pane_g1

0xb830,	// (0x0001823d) navi_icon_text_pane_t1

0x8562,	// (0x00014f6f) list_set_graphic_pane_t1_ParamLimits

0x8562,	// (0x00014f6f) list_set_graphic_pane_t1

0x9d6f,	// (0x0001677c) popup_midp_note_alarm_window_t6_ParamLimits

0x9d6f,	// (0x0001677c) popup_midp_note_alarm_window_t6

0x9d81,	// (0x0001678e) popup_midp_note_alarm_window_t7_ParamLimits

0x9d81,	// (0x0001678e) popup_midp_note_alarm_window_t7

0x9d93,	// (0x000167a0) popup_midp_note_alarm_window_t8_ParamLimits

0x9d93,	// (0x000167a0) popup_midp_note_alarm_window_t8

0x9da5,	// (0x000167b2) popup_midp_note_alarm_window_t9_ParamLimits

0x9da5,	// (0x000167b2) popup_midp_note_alarm_window_t9

0x9db7,	// (0x000167c4) popup_midp_note_alarm_window_t10_ParamLimits

0x9db7,	// (0x000167c4) popup_midp_note_alarm_window_t10

0x9dc9,	// (0x000167d6) popup_midp_note_alarm_window_t11_ParamLimits

0x9dc9,	// (0x000167d6) popup_midp_note_alarm_window_t11

0x9ddb,	// (0x000167e8) scroll_pane_cp17_ParamLimits

0x9ddb,	// (0x000167e8) scroll_pane_cp17

0x5f10,	// (0x0001291d) volume_small_pane_cp_g1

0x6221,	// (0x00012c2e) volume_small_pane_cp_g2

0x622a,	// (0x00012c37) volume_small_pane_cp_g3

0x6233,	// (0x00012c40) volume_small_pane_cp_g4

0x623c,	// (0x00012c49) volume_small_pane_cp_g5

0x6245,	// (0x00012c52) volume_small_pane_cp_g6

0x624e,	// (0x00012c5b) volume_small_pane_cp_g7

0x6257,	// (0x00012c64) volume_small_pane_cp_g8

0x6260,	// (0x00012c6d) volume_small_pane_cp_g9

0x6269,	// (0x00012c76) volume_small_pane_cp_g10

0x8944,	// (0x00015351) midp_ticker_pane_g1_ParamLimits

0x8950,	// (0x0001535d) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001c13b) midp_ticker_pane_g_ParamLimits

0x895c,	// (0x00015369) midp_ticker_pane_t1_ParamLimits

0x8bef,	// (0x000155fc) aid_fill_nsta_2

0x95ee,	// (0x00015ffb) list_form2_midp_pane

0xa7c7,	// (0x000171d4) midp_editing_number_pane_ParamLimits

0xa7d6,	// (0x000171e3) midp_ticker_pane_ParamLimits

0xb842,	// (0x0001824f) form2_midp_field_pane

0xb866,	// (0x00018273) scroll_pane_cp51

0xb886,	// (0x00018293) form2_midp_button_pane_ParamLimits

0xb886,	// (0x00018293) form2_midp_button_pane

0xb898,	// (0x000182a5) form2_midp_content_pane_ParamLimits

0xb898,	// (0x000182a5) form2_midp_content_pane

0xb8b2,	// (0x000182bf) form2_midp_field_choice_group_pane

0xb8ba,	// (0x000182c7) form2_midp_field_pane_g1

0xb8c2,	// (0x000182cf) form2_midp_field_pane_g2

0xb8ca,	// (0x000182d7) form2_midp_field_pane_g3

0xb8d2,	// (0x000182df) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0001c4d1) form2_midp_field_pane_g

0xb8da,	// (0x000182e7) form2_midp_gauge_slider_pane

0xb8e2,	// (0x000182ef) form2_midp_gauge_wait_pane

0xb8ea,	// (0x000182f7) form2_midp_image_pane_ParamLimits

0xb8ea,	// (0x000182f7) form2_midp_image_pane

0xb905,	// (0x00018312) form2_midp_label_pane_ParamLimits

0xb905,	// (0x00018312) form2_midp_label_pane

0xb924,	// (0x00018331) form2_midp_label_pane_cp_ParamLimits

0xb924,	// (0x00018331) form2_midp_label_pane_cp

0xb945,	// (0x00018352) form2_midp_string_pane_ParamLimits

0xb945,	// (0x00018352) form2_midp_string_pane

0xb957,	// (0x00018364) form2_midp_text_pane_ParamLimits

0xb957,	// (0x00018364) form2_midp_text_pane

0xb978,	// (0x00018385) form2_midp_time_pane

0xb988,	// (0x00018395) input_focus_pane_cp51_ParamLimits

0xb988,	// (0x00018395) input_focus_pane_cp51

0xb9a0,	// (0x000183ad) form2_midp_label_pane_t1_ParamLimits

0xb9a0,	// (0x000183ad) form2_midp_label_pane_t1

0xb9e6,	// (0x000183f3) form2_mdip_text_pane_t1_ParamLimits

0xb9e6,	// (0x000183f3) form2_mdip_text_pane_t1

0xba05,	// (0x00018412) form2_midp_time_pane_t1

0xba20,	// (0x0001842d) form2_midp_gauge_slider_pane_t1

0xba32,	// (0x0001843f) form2_midp_gauge_slider_pane_t2

0xba44,	// (0x00018451) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0001c4da) form2_midp_gauge_slider_pane_t

0xba56,	// (0x00018463) form2_midp_slider_pane

0xba62,	// (0x0001846f) form2_midp_gauge_wait_pane_t1

0xba70,	// (0x0001847d) form2_midp_wait_pane_ParamLimits

0xba70,	// (0x0001847d) form2_midp_wait_pane

0xba9b,	// (0x000184a8) list_single_2graphic_pane_cp4_ParamLimits

0xba9b,	// (0x000184a8) list_single_2graphic_pane_cp4

0x9300,	// (0x00015d0d) list_single_midp_graphic_pane_cp_ParamLimits

0x9300,	// (0x00015d0d) list_single_midp_graphic_pane_cp

0x384b,	// (0x00010258) list_highlight_pane_cp20

0xbab4,	// (0x000184c1) list_single_2graphic_pane_g1_cp4

0xacd7,	// (0x000176e4) list_single_2graphic_pane_g2_cp4

0xbabc,	// (0x000184c9) list_single_2graphic_pane_t1_cp4

0x3905,	// (0x00010312) list_highlight_pane_cp21

0xbacb,	// (0x000184d8) list_single_midp_graphic_pane_g4_cp

0xbada,	// (0x000184e7) list_single_midp_graphic_pane_t1_cp

0xbaef,	// (0x000184fc) form2_mdip_string_pane_t1_ParamLimits

0xbaef,	// (0x000184fc) form2_mdip_string_pane_t1

0x384b,	// (0x00010258) bg_wml_button_pane_cp2

0x36d2,	// (0x000100df) form2_midp_image_pane_g1

0x3f91,	// (0x0001099e) list_double_large_graphic_pane_g5_ParamLimits

0x3f91,	// (0x0001099e) list_double_large_graphic_pane_g5

0x886e,	// (0x0001527b) midp_form_pane_ParamLimits

0x3905,	// (0x00010312) main_apps_wheel_pane_ParamLimits

0x5b0d,	// (0x0001251a) popup_preview_window_ParamLimits

0x5b0d,	// (0x0001251a) popup_preview_window

0x5cf4,	// (0x00012701) popup_touch_info_window_ParamLimits

0x5cf4,	// (0x00012701) popup_touch_info_window

0x5d16,	// (0x00012723) popup_touch_menu_window_ParamLimits

0x5d16,	// (0x00012723) popup_touch_menu_window

0x36c8,	// (0x000100d5) bg_popup_sub_pane_cp6

0xbb8b,	// (0x00018598) list_touch_menu_pane

0xbb93,	// (0x000185a0) list_single_touch_menu_pane_ParamLimits

0xbb93,	// (0x000185a0) list_single_touch_menu_pane

0xbbab,	// (0x000185b8) list_single_touch_menu_pane_t1

0x3905,	// (0x00010312) bg_popup_sub_pane_cp7_ParamLimits

0x3905,	// (0x00010312) bg_popup_sub_pane_cp7

0xbbb9,	// (0x000185c6) heading_sub_pane

0xbbc1,	// (0x000185ce) list_touch_info_pane_ParamLimits

0xbbc1,	// (0x000185ce) list_touch_info_pane

0xbbd0,	// (0x000185dd) list_single_touch_info_pane_ParamLimits

0xbbd0,	// (0x000185dd) list_single_touch_info_pane

0xbbe2,	// (0x000185ef) list_single_touch_info_pane_t1

0xbbf0,	// (0x000185fd) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0001c4e8) list_single_touch_info_pane_t

0x8866,	// (0x00015273) bg_popup_heading_pane_cp

0xbbfe,	// (0x0001860b) heading_sub_pane_t1

0x9231,	// (0x00015c3e) bg_popup_preview_window_pane_cp_ParamLimits

0x9231,	// (0x00015c3e) bg_popup_preview_window_pane_cp

0xbbb9,	// (0x000185c6) heading_preview_pane

0xbbc1,	// (0x000185ce) list_preview_pane_ParamLimits

0xbbc1,	// (0x000185ce) list_preview_pane

0xbc0c,	// (0x00018619) popup_preview_window_g1

0xbbd0,	// (0x000185dd) list_single_preview_pane_ParamLimits

0xbbd0,	// (0x000185dd) list_single_preview_pane

0xbc14,	// (0x00018621) list_single_preview_pane_g1

0xbc1c,	// (0x00018629) list_single_preview_pane_t1

0xbbe2,	// (0x000185ef) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0001c4ed) list_single_preview_pane_t

0xbc2a,	// (0x00018637) bg_popup_heading_pane_cp2_ParamLimits

0xbc2a,	// (0x00018637) bg_popup_heading_pane_cp2

0xbc40,	// (0x0001864d) heading_preview_pane_g1

0xbc48,	// (0x00018655) heading_preview_pane_t1_ParamLimits

0xbc48,	// (0x00018655) heading_preview_pane_t1

0x39fb,	// (0x00010408) soft_indicator_pane_t1_ParamLimits

0x3f5d,	// (0x0001096a) scroll_pane_ParamLimits

0x7fc9,	// (0x000149d6) scroll_sc2_left_pane

0x7fd2,	// (0x000149df) scroll_sc2_right_pane

0x7ff1,	// (0x000149fe) scroll_bg_pane_g1_ParamLimits

0x8006,	// (0x00014a13) scroll_bg_pane_g2_ParamLimits

0x801e,	// (0x00014a2b) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001c0c6) scroll_bg_pane_g_ParamLimits

0x7ff1,	// (0x000149fe) scroll_handle_pane_g1_ParamLimits

0x8040,	// (0x00014a4d) scroll_handle_pane_g2_ParamLimits

0x801e,	// (0x00014a2b) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001c0cd) scroll_handle_pane_g_ParamLimits

0x5752,	// (0x0001215f) popup_choice_list_window_ParamLimits

0x5752,	// (0x0001215f) popup_choice_list_window

0x901d,	// (0x00015a2a) choice_list_pane

0x90d9,	// (0x00015ae6) cell_toolbar_pane_t1

0x9101,	// (0x00015b0e) toolbar_button_pane_ParamLimits

0xa2a5,	// (0x00016cb2) ai_gene_pane_1_t2_ParamLimits

0xa2a5,	// (0x00016cb2) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0001c2f5) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0001c2f5) ai_gene_pane_1_t

0xbc65,	// (0x00018672) scroll_sc2_left_pane_g1

0xbc65,	// (0x00018672) scroll_sc2_right_pane_g1

0x8b95,	// (0x000155a2) bg_popup_sub_pane_cp10

0xbc6f,	// (0x0001867c) list_choice_list_pane

0xbc88,	// (0x00018695) list_single_choice_list_pane_ParamLimits

0xbc88,	// (0x00018695) list_single_choice_list_pane

0xbca0,	// (0x000186ad) list_single_choice_list_pane_g1

0x4270,	// (0x00010c7d) list_single_choice_list_pane_t1_ParamLimits

0x4270,	// (0x00010c7d) list_single_choice_list_pane_t1

0xbca8,	// (0x000186b5) choice_list_pane_g1

0xbcb0,	// (0x000186bd) choice_list_pane_t1

0x36c8,	// (0x000100d5) input_focus_pane_cp11

0x7ea2,	// (0x000148af) title_pane_stacon_g2_ParamLimits

0x7ea2,	// (0x000148af) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001c0ac) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001c0ac) title_pane_stacon_g

0x8866,	// (0x00015273) cursor_press_pane

0x580c,	// (0x00012219) popup_fep_hwr_window_ParamLimits

0x580c,	// (0x00012219) popup_fep_hwr_window

0x5896,	// (0x000122a3) popup_fep_vkb_window_ParamLimits

0x5896,	// (0x000122a3) popup_fep_vkb_window

0xbcbe,	// (0x000186cb) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0001c516) fep_vkb_side_pane_g_ParamLimits

0x62ab,	// (0x00012cb8) fep_hwr_candidate_pane_ParamLimits

0x62ab,	// (0x00012cb8) fep_hwr_candidate_pane

0x62d5,	// (0x00012ce2) fep_hwr_side_pane_ParamLimits

0x62d5,	// (0x00012ce2) fep_hwr_side_pane

0x62f7,	// (0x00012d04) fep_hwr_top_pane_ParamLimits

0x62f7,	// (0x00012d04) fep_hwr_top_pane

0x630f,	// (0x00012d1c) fep_hwr_write_pane_ParamLimits

0x630f,	// (0x00012d1c) fep_hwr_write_pane

0xfb09,	// (0x0001c516) fep_vkb_side_pane_g

0xbcc6,	// (0x000186d3) fep_hwr_top_pane_g1

0xbcd8,	// (0x000186e5) fep_hwr_top_pane_g2

0x6349,	// (0x00012d56) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0001c4f2) fep_hwr_top_pane_g

0x635e,	// (0x00012d6b) fep_hwr_top_text_pane

0x8195,	// (0x00014ba2) fep_hwr_top_text_pane_g1

0xbd0e,	// (0x0001871b) fep_hwr_top_text_pane_t1

0x6468,	// (0x00012e75) fep_hwr_candidate_pane_g1

0xbf59,	// (0x00018966) fep_vkb_keypad_pane_g3_ParamLimits

0xbf59,	// (0x00018966) fep_vkb_keypad_pane_g3

0xbf85,	// (0x00018992) fep_vkb_keypad_pane_g4_ParamLimits

0xbf85,	// (0x00018992) fep_vkb_keypad_pane_g4

0xbffc,	// (0x00018a09) fep_vkb_bottom_pane_g2_ParamLimits

0xbffc,	// (0x00018a09) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0001c51d) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0001c51d) fep_vkb_bottom_pane_g

0xbc65,	// (0x00018672) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0001c527) cell_vkb_side_pane_g

0xc087,	// (0x00018a94) cell_vkb_side_pane_t1

0xc095,	// (0x00018aa2) cell_vkb_side_pane_t1_copy1

0xbc65,	// (0x00018672) bg_fep_vkb_candidate_pane_g2

0xc1d9,	// (0x00018be6) cell_vkb_candidate_pane_ParamLimits

0xbd1c,	// (0x00018729) aid_size_cell_vkb_ParamLimits

0xbd1c,	// (0x00018729) aid_size_cell_vkb

0xc1d9,	// (0x00018be6) cell_vkb_candidate_pane

0x648f,	// (0x00012e9c) bg_popup_fep_shadow_pane_g1

0xbdae,	// (0x000187bb) fep_vkb_bottom_pane_ParamLimits

0xbdae,	// (0x000187bb) fep_vkb_bottom_pane

0xbdeb,	// (0x000187f8) fep_vkb_candidate_pane_ParamLimits

0xbdeb,	// (0x000187f8) fep_vkb_candidate_pane

0xbe07,	// (0x00018814) fep_vkb_keypad_pane_ParamLimits

0xbe07,	// (0x00018814) fep_vkb_keypad_pane

0xbe3a,	// (0x00018847) fep_vkb_side_pane_ParamLimits

0xbe3a,	// (0x00018847) fep_vkb_side_pane

0xbe76,	// (0x00018883) fep_vkb_top_pane_ParamLimits

0xbe76,	// (0x00018883) fep_vkb_top_pane

0xbeb2,	// (0x000188bf) fep_vkb_top_pane_g1_ParamLimits

0xbeb2,	// (0x000188bf) fep_vkb_top_pane_g1

0xbec1,	// (0x000188ce) fep_vkb_top_pane_g2_ParamLimits

0xbec1,	// (0x000188ce) fep_vkb_top_pane_g2

0xbed0,	// (0x000188dd) fep_vkb_top_pane_g3_ParamLimits

0xbed0,	// (0x000188dd) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0001c50d) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0001c50d) fep_vkb_top_pane_g

0xbeee,	// (0x000188fb) fep_vkb_top_text_pane_ParamLimits

0xbeee,	// (0x000188fb) fep_vkb_top_text_pane

0xbeff,	// (0x0001890c) fep_vkb_side_pane_g1_ParamLimits

0xbeff,	// (0x0001890c) fep_vkb_side_pane_g1

0xbf48,	// (0x00018955) grid_vkb_side_pane_ParamLimits

0xbf48,	// (0x00018955) grid_vkb_side_pane

0x6497,	// (0x00012ea4) bg_popup_fep_shadow_pane_g2

0x64a0,	// (0x00012ead) bg_popup_fep_shadow_pane_g3

0x64a8,	// (0x00012eb5) bg_popup_fep_shadow_pane_g4

0x64b1,	// (0x00012ebe) bg_popup_fep_shadow_pane_g5

0x64bb,	// (0x00012ec8) bg_popup_fep_shadow_pane_g6

0x64c3,	// (0x00012ed0) bg_popup_fep_shadow_pane_g7

0x4150,	// (0x00010b5d) bg_popup_fep_shadow_pane_g8

0xbfa7,	// (0x000189b4) grid_vkb_keypad_number_pane_ParamLimits

0xbfa7,	// (0x000189b4) grid_vkb_keypad_number_pane

0xbfbb,	// (0x000189c8) grid_vkb_keypad_pane_ParamLimits

0xbfbb,	// (0x000189c8) grid_vkb_keypad_pane

0xbfe1,	// (0x000189ee) fep_vkb_bottom_pane_g1_ParamLimits

0xbfe1,	// (0x000189ee) fep_vkb_bottom_pane_g1

0xc00a,	// (0x00018a17) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc00a,	// (0x00018a17) grid_vkb_keypad_bottom_left_pane

0xc01f,	// (0x00018a2c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc01f,	// (0x00018a2c) grid_vkb_keypad_bottom_right_pane

0xc034,	// (0x00018a41) fep_vkb_top_text_pane_g1

0xc04f,	// (0x00018a5c) fep_vkb_top_text_pane_t1

0xc064,	// (0x00018a71) cell_vkb_side_pane_ParamLimits

0xc064,	// (0x00018a71) cell_vkb_side_pane

0xbc65,	// (0x00018672) cell_vkb_side_pane_g1

0xc0a3,	// (0x00018ab0) cell_vkb_keypad_pane_ParamLimits

0xc0a3,	// (0x00018ab0) cell_vkb_keypad_pane

0xc130,	// (0x00018b3d) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0001c53a) bg_popup_fep_shadow_pane_g

0x64d5,	// (0x00012ee2) cell_hwr_side_pane_g1

0x64d5,	// (0x00012ee2) cell_hwr_side_pane_g2

0xc13a,	// (0x00018b47) cell_vkb_keypad_pane_t1

0xc148,	// (0x00018b55) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc148,	// (0x00018b55) cell_vkb_keypad_bottom_left_pane

0xc165,	// (0x00018b72) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc165,	// (0x00018b72) cell_vkb_keypad_bottom_right_pane

0xbc65,	// (0x00018672) cell_vkb_keypad_bottom_left_pane_g1

0xbc65,	// (0x00018672) cell_vkb_keypad_bottom_right_pane_g1

0xc19e,	// (0x00018bab) cell_vkb_keypad_number_pane_ParamLimits

0xc19e,	// (0x00018bab) cell_vkb_keypad_number_pane

0xc1bd,	// (0x00018bca) cell_vkb_keypad_number_pane_g1

0xc1c7,	// (0x00018bd4) cell_vkb_keypad_number_pane_g2

0xc1d0,	// (0x00018bdd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0001c52c) cell_vkb_keypad_number_pane_g

0xc13a,	// (0x00018b47) cell_vkb_keypad_number_pane_t1

0xc1fa,	// (0x00018c07) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0001c54d) cell_hwr_side_pane_g

0xc213,	// (0x00018c20) cell_hwr_side_pane_t1

0x64df,	// (0x00012eec) cell_hwr_side_pane_t1_copy1

0x64ed,	// (0x00012efa) cell_hwr_candidate_pane_g1

0x651c,	// (0x00012f29) cell_hwr_candidate_pane_t1

0xbc65,	// (0x00018672) cell_vkb_candidate_pane_g2

0xc257,	// (0x00018c64) cell_vkb_candidate_pane_t1

0x6272,	// (0x00012c7f) bg_popup_fep_shadow_pane_ParamLimits

0x6272,	// (0x00012c7f) bg_popup_fep_shadow_pane

0x6329,	// (0x00012d36) bg_fep_hwr_top_pane_g4

0xbcea,	// (0x000186f7) bg_hwr_side_pane_g1_ParamLimits

0xbcea,	// (0x000186f7) bg_hwr_side_pane_g1

0x639c,	// (0x00012da9) cell_hwr_side_pane_ParamLimits

0x639c,	// (0x00012da9) cell_hwr_side_pane

0x63d9,	// (0x00012de6) fep_hwr_write_pane_g1_ParamLimits

0x63d9,	// (0x00012de6) fep_hwr_write_pane_g1

0x63e6,	// (0x00012df3) fep_hwr_write_pane_g2_ParamLimits

0x63e6,	// (0x00012df3) fep_hwr_write_pane_g2

0x63f3,	// (0x00012e00) fep_hwr_write_pane_g3_ParamLimits

0x63f3,	// (0x00012e00) fep_hwr_write_pane_g3

0x6401,	// (0x00012e0e) fep_hwr_write_pane_g4_ParamLimits

0x6401,	// (0x00012e0e) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0001c4f9) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0001c4f9) fep_hwr_write_pane_g

0x6329,	// (0x00012d36) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6329,	// (0x00012d36) bg_fep_hwr_candidate_pane_g2

0x6416,	// (0x00012e23) cell_hwr_candidate_pane_ParamLimits

0x6416,	// (0x00012e23) cell_hwr_candidate_pane

0x6468,	// (0x00012e75) fep_hwr_candidate_pane_g1_ParamLimits

0xbd4a,	// (0x00018757) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd4a,	// (0x00018757) bg_popup_fep_shadow_pane_cp2

0xbee0,	// (0x000188ed) fep_vkb_top_pane_g4_ParamLimits

0xbee0,	// (0x000188ed) fep_vkb_top_pane_g4

0xbf26,	// (0x00018933) fep_vkb_side_pane_g2_ParamLimits

0xbf26,	// (0x00018933) fep_vkb_side_pane_g2

0x7a7a,	// (0x00014487) list_setting_pane_t4_ParamLimits

0x7a7a,	// (0x00014487) list_setting_pane_t4

0x7af6,	// (0x00014503) list_setting_number_pane_t5_ParamLimits

0x7af6,	// (0x00014503) list_setting_number_pane_t5

0x81dc,	// (0x00014be9) list_double_heading_pane_cp2_ParamLimits

0x81dc,	// (0x00014be9) list_double_heading_pane_cp2

0xc265,	// (0x00018c72) list_double_heading_pane_g1_cp2_ParamLimits

0xc265,	// (0x00018c72) list_double_heading_pane_g1_cp2

0xc271,	// (0x00018c7e) list_double_heading_pane_g2_cp2_ParamLimits

0xc271,	// (0x00018c7e) list_double_heading_pane_g2_cp2

0xc285,	// (0x00018c92) list_double_heading_pane_t1_cp2_ParamLimits

0xc285,	// (0x00018c92) list_double_heading_pane_t1_cp2

0xc29b,	// (0x00018ca8) list_double_heading_pane_t2_cp2_ParamLimits

0xc29b,	// (0x00018ca8) list_double_heading_pane_t2_cp2

0x36c0,	// (0x000100cd) aid_value_unit2

0x4f50,	// (0x0001195d) popup_preview_fixed_window

0x3adb,	// (0x000104e8) bg_popup_preview_window_pane_cp02

0xc2ad,	// (0x00018cba) list_preview_fixed_pane

0xc2f3,	// (0x00018d00) list_empty_pane_fp_ParamLimits

0xc2f3,	// (0x00018d00) list_empty_pane_fp

0xc2f3,	// (0x00018d00) list_single_cale_day_pane_fp_ParamLimits

0xc2f3,	// (0x00018d00) list_single_cale_day_pane_fp

0xc2f3,	// (0x00018d00) list_single_graphic_heading_pane_fp_ParamLimits

0xc2f3,	// (0x00018d00) list_single_graphic_heading_pane_fp

0xc2f3,	// (0x00018d00) list_single_graphic_pane_fp_ParamLimits

0xc2f3,	// (0x00018d00) list_single_graphic_pane_fp

0xc2f3,	// (0x00018d00) list_single_heading_pane_fp_ParamLimits

0xc2f3,	// (0x00018d00) list_single_heading_pane_fp

0xc2f3,	// (0x00018d00) list_single_pane_fp_ParamLimits

0xc2f3,	// (0x00018d00) list_single_pane_fp

0xc30c,	// (0x00018d19) list_single_pane_fp_g1_ParamLimits

0xc30c,	// (0x00018d19) list_single_pane_fp_g1

0xc265,	// (0x00018c72) list_single_pane_fp_g2_ParamLimits

0xc265,	// (0x00018c72) list_single_pane_fp_g2

0xc271,	// (0x00018c7e) list_single_pane_fp_g3_ParamLimits

0xc271,	// (0x00018c7e) list_single_pane_fp_g3

0xc318,	// (0x00018d25) list_single_pane_fp_g4_ParamLimits

0xc318,	// (0x00018d25) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0001c560) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0001c560) list_single_pane_fp_g

0xc324,	// (0x00018d31) list_single_pane_fp_t1_ParamLimits

0xc324,	// (0x00018d31) list_single_pane_fp_t1

0xc33b,	// (0x00018d48) list_single_graphic_pane_fp_g1_ParamLimits

0xc33b,	// (0x00018d48) list_single_graphic_pane_fp_g1

0xc30c,	// (0x00018d19) list_single_graphic_pane_fp_g2_ParamLimits

0xc30c,	// (0x00018d19) list_single_graphic_pane_fp_g2

0xc265,	// (0x00018c72) list_single_graphic_pane_fp_g3_ParamLimits

0xc265,	// (0x00018c72) list_single_graphic_pane_fp_g3

0xc271,	// (0x00018c7e) list_single_graphic_pane_fp_g4_ParamLimits

0xc271,	// (0x00018c7e) list_single_graphic_pane_fp_g4

0xc318,	// (0x00018d25) list_single_graphic_pane_fp_g5_ParamLimits

0xc318,	// (0x00018d25) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c569) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c569) list_single_graphic_pane_fp_g

0xc347,	// (0x00018d54) list_single_graphic_pane_fp_t1_ParamLimits

0xc347,	// (0x00018d54) list_single_graphic_pane_fp_t1

0xc33b,	// (0x00018d48) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc33b,	// (0x00018d48) list_single_graphic_heading_pane_fp_g1

0xc30c,	// (0x00018d19) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc30c,	// (0x00018d19) list_single_graphic_heading_pane_fp_g2

0xc265,	// (0x00018c72) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc265,	// (0x00018c72) list_single_graphic_heading_pane_fp_g3

0xc271,	// (0x00018c7e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc271,	// (0x00018c7e) list_single_graphic_heading_pane_fp_g4

0xc318,	// (0x00018d25) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc318,	// (0x00018d25) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c569) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c569) list_single_graphic_heading_pane_fp_g

0xc35d,	// (0x00018d6a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc35d,	// (0x00018d6a) list_single_graphic_heading_pane_fp_t1

0xc373,	// (0x00018d80) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc373,	// (0x00018d80) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0001c574) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0001c574) list_single_graphic_heading_pane_fp_t

0xc385,	// (0x00018d92) list_single_cale_day_pane_fp_g1_ParamLimits

0xc385,	// (0x00018d92) list_single_cale_day_pane_fp_g1

0xc3bd,	// (0x00018dca) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3bd,	// (0x00018dca) list_single_cale_day_pane_fp_g2

0xc3c9,	// (0x00018dd6) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3c9,	// (0x00018dd6) list_single_cale_day_pane_fp_g3

0xc3f1,	// (0x00018dfe) list_single_cale_day_pane_fp_g4_ParamLimits

0xc3f1,	// (0x00018dfe) list_single_cale_day_pane_fp_g4

0xc415,	// (0x00018e22) list_single_cale_day_pane_fp_g5_ParamLimits

0xc415,	// (0x00018e22) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0001c579) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001c579) list_single_cale_day_pane_fp_g

0xc439,	// (0x00018e46) list_single_cale_day_pane_fp_t1_ParamLimits

0xc439,	// (0x00018e46) list_single_cale_day_pane_fp_t1

0xc45f,	// (0x00018e6c) list_single_cale_day_pane_fp_t2_ParamLimits

0xc45f,	// (0x00018e6c) list_single_cale_day_pane_fp_t2

0xc478,	// (0x00018e85) list_single_cale_day_pane_fp_t3_ParamLimits

0xc478,	// (0x00018e85) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0001c584) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0001c584) list_single_cale_day_pane_fp_t

0xc30c,	// (0x00018d19) list_empty_pane_fp_g1_ParamLimits

0xc30c,	// (0x00018d19) list_empty_pane_fp_g1

0xc491,	// (0x00018e9e) list_empty_pane_fp_t1

0xc49f,	// (0x00018eac) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0001c58b) list_empty_pane_fp_t

0xc30c,	// (0x00018d19) list_single_heading_pane_fp_g1_ParamLimits

0xc30c,	// (0x00018d19) list_single_heading_pane_fp_g1

0xc265,	// (0x00018c72) list_single_heading_pane_fp_g2_ParamLimits

0xc265,	// (0x00018c72) list_single_heading_pane_fp_g2

0xc271,	// (0x00018c7e) list_single_heading_pane_fp_g3_ParamLimits

0xc271,	// (0x00018c7e) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0001c590) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0001c590) list_single_heading_pane_fp_g

0xc4ad,	// (0x00018eba) list_single_heading_pane_fp_t1_ParamLimits

0xc4ad,	// (0x00018eba) list_single_heading_pane_fp_t1

0xc4bf,	// (0x00018ecc) list_single_heading_pane_fp_t2_ParamLimits

0xc4bf,	// (0x00018ecc) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0001c597) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0001c597) list_single_heading_pane_fp_t

0x7d39,	// (0x00014746) aid_size_cell_fast

0x3abe,	// (0x000104cb) soft_indicator_pane_cp1_t1

0x7d76,	// (0x00014783) cell_app_pane_cp2_ParamLimits

0x7d76,	// (0x00014783) cell_app_pane_cp2

0x6294,	// (0x00012ca1) fep_hwr_candidate_drop_down_list_pane

0x6482,	// (0x00012e8f) fep_hwr_candidate_pane_g3_ParamLimits

0x6482,	// (0x00012e8f) fep_hwr_candidate_pane_g3

0x2cca,	// (0x0000f6d7) fep_hwr_candidate_pane_g4_ParamLimits

0x2cca,	// (0x0000f6d7) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0001c506) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0001c506) fep_hwr_candidate_pane_g

0xbdda,	// (0x000187e7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbdda,	// (0x000187e7) fep_vkb_candidate_drop_down_list_pane

0xc202,	// (0x00018c0f) fep_vkb_candidate_pane_g3

0xc20a,	// (0x00018c17) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0001c533) fep_vkb_candidate_pane_g

0x64ed,	// (0x00012efa) cell_hwr_candidate_pane_g1_ParamLimits

0x64fb,	// (0x00012f08) cell_hwr_candidate_pane_g3_ParamLimits

0x64fb,	// (0x00012f08) cell_hwr_candidate_pane_g3

0xc56d,	// (0x00018f7a) cell_hwr_candidate_pane_g4_ParamLimits

0xc56d,	// (0x00018f7a) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0001c552) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0001c552) cell_hwr_candidate_pane_g

0xc221,	// (0x00018c2e) cell_vkb_candidate_pane_g3_ParamLimits

0xc221,	// (0x00018c2e) cell_vkb_candidate_pane_g3

0xc23c,	// (0x00018c49) cell_vkb_candidate_pane_g4_ParamLimits

0xc23c,	// (0x00018c49) cell_vkb_candidate_pane_g4

0xc4d5,	// (0x00018ee2) cell_app_pane_cp2_g1_ParamLimits

0xc4d5,	// (0x00018ee2) cell_app_pane_cp2_g1

0xc4f3,	// (0x00018f00) cell_app_pane_cp2_g2_ParamLimits

0xc4f3,	// (0x00018f00) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0001c59c) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0001c59c) cell_app_pane_cp2_g

0xc4ff,	// (0x00018f0c) cell_app_pane_cp2_t1_ParamLimits

0xc4ff,	// (0x00018f0c) cell_app_pane_cp2_t1

0x407d,	// (0x00010a8a) grid_highlight_pane_cp1_ParamLimits

0x407d,	// (0x00010a8a) grid_highlight_pane_cp1

0x653a,	// (0x00012f47) cell_hwr_candidate_pane_cp1_ParamLimits

0x653a,	// (0x00012f47) cell_hwr_candidate_pane_cp1

0x64ed,	// (0x00012efa) fep_hwr_candidate_drop_down_list_pane_g1

0x655e,	// (0x00012f6b) fep_hwr_candidate_drop_down_list_pane_g2

0x656b,	// (0x00012f78) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0001c5a1) fep_hwr_candidate_drop_down_list_pane_g

0x6578,	// (0x00012f85) fep_hwr_candidate_drop_down_list_scroll_pane

0x6581,	// (0x00012f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6581,	// (0x00012f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x658e,	// (0x00012f9b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x658e,	// (0x00012f9b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x659b,	// (0x00012fa8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x659b,	// (0x00012fa8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x65a8,	// (0x00012fb5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x65a8,	// (0x00012fb5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x65c3,	// (0x00012fd0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x65c3,	// (0x00012fd0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x65de,	// (0x00012feb) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x65de,	// (0x00012feb) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x65f9,	// (0x00013006) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x65f9,	// (0x00013006) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6614,	// (0x00013021) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6614,	// (0x00013021) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0001c5a8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0001c5a8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc58e,	// (0x00018f9b) cell_vkb_candidate_pane_cp1_ParamLimits

0xc58e,	// (0x00018f9b) cell_vkb_candidate_pane_cp1

0xbee0,	// (0x000188ed) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbee0,	// (0x000188ed) fep_vkb_candidate_drop_down_list_pane_g1

0xc511,	// (0x00018f1e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc511,	// (0x00018f1e) fep_vkb_candidate_drop_down_list_pane_g2

0xc51e,	// (0x00018f2b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc51e,	// (0x00018f2b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0001c5b9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0001c5b9) fep_vkb_candidate_drop_down_list_pane_g

0xc5b4,	// (0x00018fc1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc5b4,	// (0x00018fc1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc5c1,	// (0x00018fce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc5c1,	// (0x00018fce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5ce,	// (0x00018fdb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5ce,	// (0x00018fdb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc5da,	// (0x00018fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc5da,	// (0x00018fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc52b,	// (0x00018f38) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc52b,	// (0x00018f38) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc54c,	// (0x00018f59) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc54c,	// (0x00018f59) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5e6,	// (0x00018ff3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5e6,	// (0x00018ff3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc607,	// (0x00019014) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc607,	// (0x00019014) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc628,	// (0x00019035) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc628,	// (0x00019035) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0001c5c0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0001c5c0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x73cd,	// (0x00013dda) title_pane_g1_ParamLimits

0x73da,	// (0x00013de7) title_pane_g2_ParamLimits

0xf529,	// (0x0001bf36) title_pane_g_ParamLimits

0x8185,	// (0x00014b92) aid_call2_pane

0x818d,	// (0x00014b9a) aid_call_pane

0x8195,	// (0x00014ba2) popup_clock_analogue_window_g1

0x8195,	// (0x00014ba2) popup_clock_analogue_window_g2

0x52cd,	// (0x00011cda) popup_clock_analogue_window_g3

0x52d6,	// (0x00011ce3) popup_clock_analogue_window_g4

0x36d2,	// (0x000100df) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001c0db) popup_clock_analogue_window_g

0x52de,	// (0x00011ceb) popup_clock_analogue_window_t1

0x52ec,	// (0x00011cf9) clock_digital_number_pane_ParamLimits

0x52ec,	// (0x00011cf9) clock_digital_number_pane

0x52f8,	// (0x00011d05) clock_digital_number_pane_cp02_ParamLimits

0x52f8,	// (0x00011d05) clock_digital_number_pane_cp02

0x5304,	// (0x00011d11) clock_digital_number_pane_cp03_ParamLimits

0x5304,	// (0x00011d11) clock_digital_number_pane_cp03

0x5310,	// (0x00011d1d) clock_digital_number_pane_cp04_ParamLimits

0x5310,	// (0x00011d1d) clock_digital_number_pane_cp04

0x531c,	// (0x00011d29) clock_digital_separator_pane_ParamLimits

0x531c,	// (0x00011d29) clock_digital_separator_pane

0x5328,	// (0x00011d35) popup_clock_digital_window_t1_ParamLimits

0x5328,	// (0x00011d35) popup_clock_digital_window_t1

0x36d2,	// (0x000100df) clock_digital_number_pane_g1

0x36d2,	// (0x000100df) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001c0e6) clock_digital_number_pane_g

0x36d2,	// (0x000100df) clock_digital_separator_pane_g1

0x36d2,	// (0x000100df) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001c0e6) clock_digital_separator_pane_g

0x8bd9,	// (0x000155e6) aid_fill_nsta_ParamLimits

0x8d25,	// (0x00015732) indicator_nsta_pane_ParamLimits

0x8eb6,	// (0x000158c3) popup_clock_analogue_window

0x8eb6,	// (0x000158c3) popup_clock_digital_window

0xb63e,	// (0x0001804b) grid_indicator_nsta_pane_ParamLimits

0xb667,	// (0x00018074) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0001c486) clock_nsta_pane_t

0x5291,	// (0x00011c9e) aid_size_max_handle

0x529b,	// (0x00011ca8) aid_size_min_handle

0x8866,	// (0x00015273) editor_scroll_pane

0xc643,	// (0x00019050) ex_editor_pane

0x424b,	// (0x00010c58) scroll_pane_cp13

0x3f89,	// (0x00010996) scroll_pane_cp14

0x81c4,	// (0x00014bd1) scroll_pane_cp36

0x81f2,	// (0x00014bff) list_single_graphic_hl_pane_cp2_ParamLimits

0x81f2,	// (0x00014bff) list_single_graphic_hl_pane_cp2

0xa80f,	// (0x0001721c) list_single_graphic_hl_pane_ParamLimits

0xa80f,	// (0x0001721c) list_single_graphic_hl_pane

0xc64b,	// (0x00019058) aid_size_min_hl_cp1

0xc654,	// (0x00019061) list_highlight_pane_cp34_ParamLimits

0xc654,	// (0x00019061) list_highlight_pane_cp34

0xc665,	// (0x00019072) list_single_graphic_hl_pane_g1_ParamLimits

0xc665,	// (0x00019072) list_single_graphic_hl_pane_g1

0xc672,	// (0x0001907f) list_single_graphic_hl_pane_g2_ParamLimits

0xc672,	// (0x0001907f) list_single_graphic_hl_pane_g2

0xc672,	// (0x0001907f) list_single_graphic_hl_pane_g3_ParamLimits

0xc672,	// (0x0001907f) list_single_graphic_hl_pane_g3

0x872c,	// (0x00015139) list_single_graphic_hl_pane_g4_ParamLimits

0x872c,	// (0x00015139) list_single_graphic_hl_pane_g4

0xc67e,	// (0x0001908b) list_single_graphic_hl_pane_g5_ParamLimits

0xc67e,	// (0x0001908b) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0001c5d1) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0001c5d1) list_single_graphic_hl_pane_g

0xc692,	// (0x0001909f) list_single_graphic_hl_pane_t1_ParamLimits

0xc692,	// (0x0001909f) list_single_graphic_hl_pane_t1

0xc6a8,	// (0x000190b5) aid_size_min_hl_cp2

0xc6b1,	// (0x000190be) list_highlight_pane_cp34_cp2_ParamLimits

0xc6b1,	// (0x000190be) list_highlight_pane_cp34_cp2

0xc665,	// (0x00019072) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc665,	// (0x00019072) list_single_graphic_hl_pane_g1_cp2

0xc6be,	// (0x000190cb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc6be,	// (0x000190cb) list_single_graphic_hl_pane_g2_cp2

0xc6ca,	// (0x000190d7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6ca,	// (0x000190d7) list_single_graphic_hl_pane_g3_cp2

0x9083,	// (0x00015a90) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9083,	// (0x00015a90) list_single_graphic_hl_pane_g4_cp2

0xc6d8,	// (0x000190e5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6d8,	// (0x000190e5) list_single_graphic_hl_pane_g5_cp2

0x55e2,	// (0x00011fef) control_pane_g4_ParamLimits

0x55e2,	// (0x00011fef) control_pane_g4

0x8b95,	// (0x000155a2) bg_popup_sub_pane_cp10_ParamLimits

0xbc6f,	// (0x0001867c) list_choice_list_pane_ParamLimits

0xbc7e,	// (0x0001868b) scroll_pane_cp23

0x3adb,	// (0x000104e8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2ad,	// (0x00018cba) list_preview_fixed_pane_ParamLimits

0xc2c3,	// (0x00018cd0) list_preview_fixed_pane_cp_ParamLimits

0xc2c3,	// (0x00018cd0) list_preview_fixed_pane_cp

0xc2cf,	// (0x00018cdc) popup_preview_fixed_window_g1_ParamLimits

0xc2cf,	// (0x00018cdc) popup_preview_fixed_window_g1

0xc2db,	// (0x00018ce8) popup_preview_fixed_window_g2_ParamLimits

0xc2db,	// (0x00018ce8) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0001c559) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0001c559) popup_preview_fixed_window_g

0x5203,	// (0x00011c10) aid_navi_side_left_pane_ParamLimits

0x5218,	// (0x00011c25) aid_navi_side_right_pane_ParamLimits

0x5230,	// (0x00011c3d) navi_icon_pane_stacon_ParamLimits

0x5244,	// (0x00011c51) navi_navi_pane_stacon_ParamLimits

0x5230,	// (0x00011c3d) navi_text_pane_stacon_ParamLimits

0x4e07,	// (0x00011814) main_text_info_pane

0xc702,	// (0x0001910f) listscroll_text_info_pane

0xc70a,	// (0x00019117) list_text_info_pane_ParamLimits

0xc70a,	// (0x00019117) list_text_info_pane

0xc719,	// (0x00019126) scroll_pane_cp24_ParamLimits

0xc719,	// (0x00019126) scroll_pane_cp24

0xc737,	// (0x00019144) list_text_info_pane_t1_ParamLimits

0xc737,	// (0x00019144) list_text_info_pane_t1

0x5774,	// (0x00012181) popup_fast_swap2_window_ParamLimits

0x5774,	// (0x00012181) popup_fast_swap2_window

0xc75c,	// (0x00019169) aid_size_cell_fast2

0x36c8,	// (0x000100d5) bg_popup_window_pane_cp17

0x9622,	// (0x0001602f) heading_pane_cp2

0x962a,	// (0x00016037) listscroll_fast2_pane

0xc766,	// (0x00019173) grid_fast2_pane

0xc770,	// (0x0001917d) listscroll_fast2_pane_g1

0xc77a,	// (0x00019187) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0001c5dc) listscroll_fast2_pane_g

0x424b,	// (0x00010c58) scroll_pane_cp26

0xc784,	// (0x00019191) cell_fast2_pane_ParamLimits

0xc784,	// (0x00019191) cell_fast2_pane

0xc79b,	// (0x000191a8) cell_fast2_pane_g1

0xc7a4,	// (0x000191b1) cell_fast2_pane_g2

0xc7ad,	// (0x000191ba) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0001c5e1) cell_fast2_pane_g

0x3d50,	// (0x0001075d) grid_highlight_pane_cp9

0x5736,	// (0x00012143) main_eswt_pane_ParamLimits

0x5736,	// (0x00012143) main_eswt_pane

0xc72e,	// (0x0001913b) list_single_text_info_pane

0xc7b5,	// (0x000191c2) eswt_ctrl_button_pane

0xc7b5,	// (0x000191c2) eswt_ctrl_canvas_pane

0xc7bd,	// (0x000191ca) eswt_ctrl_combo_pane

0xc7b5,	// (0x000191c2) eswt_ctrl_default_pane

0xc7b5,	// (0x000191c2) eswt_ctrl_label_pane

0xc7c5,	// (0x000191d2) eswt_ctrl_wait_pane

0xc7cd,	// (0x000191da) eswt_shell_pane

0x36c8,	// (0x000100d5) listscroll_eswt_app_pane

0xc7ed,	// (0x000191fa) popup_eswt_tasktip_window_ParamLimits

0xc7ed,	// (0x000191fa) popup_eswt_tasktip_window

0x9231,	// (0x00015c3e) bg_popup_window_pane_cp18

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_ParamLimits

0xc7fe,	// (0x0001920b) eswt_control_pane_g1

0xc80b,	// (0x00019218) eswt_control_pane_g2_ParamLimits

0xc80b,	// (0x00019218) eswt_control_pane_g2

0xc818,	// (0x00019225) eswt_control_pane_g3_ParamLimits

0xc818,	// (0x00019225) eswt_control_pane_g3

0xc825,	// (0x00019232) eswt_control_pane_g4_ParamLimits

0xc825,	// (0x00019232) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0001c5e8) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0001c5e8) eswt_control_pane_g

0x407d,	// (0x00010a8a) bg_button_pane_ParamLimits

0x407d,	// (0x00010a8a) bg_button_pane

0x3d65,	// (0x00010772) common_borders_pane_copy2_ParamLimits

0x3d65,	// (0x00010772) common_borders_pane_copy2

0xc832,	// (0x0001923f) control_button_pane_g1_ParamLimits

0xc832,	// (0x0001923f) control_button_pane_g1

0xc83e,	// (0x0001924b) control_button_pane_g2_ParamLimits

0xc83e,	// (0x0001924b) control_button_pane_g2

0xc84a,	// (0x00019257) control_button_pane_g3_ParamLimits

0xc84a,	// (0x00019257) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0001c5f1) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0001c5f1) control_button_pane_g

0xc85e,	// (0x0001926b) control_button_pane_t1

0xc86c,	// (0x00019279) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0001c5f8) control_button_pane_t

0x910d,	// (0x00015b1a) bg_button_pane_g1

0x911d,	// (0x00015b2a) bg_button_pane_g2

0x9115,	// (0x00015b22) bg_button_pane_g3

0x912d,	// (0x00015b3a) bg_button_pane_g4

0x9125,	// (0x00015b32) bg_button_pane_g5

0x9135,	// (0x00015b42) bg_button_pane_g6

0x913d,	// (0x00015b4a) bg_button_pane_g7

0x914d,	// (0x00015b5a) bg_button_pane_g8

0x9145,	// (0x00015b52) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0001c249) bg_button_pane_g

0xbc2a,	// (0x00018637) common_borders_pane_ParamLimits

0xbc2a,	// (0x00018637) common_borders_pane

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_copy1_ParamLimits

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_copy1

0xc80b,	// (0x00019218) eswt_control_pane_g2_copy1_ParamLimits

0xc80b,	// (0x00019218) eswt_control_pane_g2_copy1

0xc818,	// (0x00019225) eswt_control_pane_g3_copy1_ParamLimits

0xc818,	// (0x00019225) eswt_control_pane_g3_copy1

0xc825,	// (0x00019232) eswt_control_pane_g4_copy1_ParamLimits

0xc825,	// (0x00019232) eswt_control_pane_g4_copy1

0xbc65,	// (0x00018672) bg_eswt_ctrl_canvas_pane_g1

0xbc2a,	// (0x00018637) common_borders_pane_cp2_ParamLimits

0xbc2a,	// (0x00018637) common_borders_pane_cp2

0xbc2a,	// (0x00018637) common_borders_pane_cp3_ParamLimits

0xbc2a,	// (0x00018637) common_borders_pane_cp3

0xc87a,	// (0x00019287) separator_horizontal_pane

0xc882,	// (0x0001928f) separator_vertical_pane

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_copy2_ParamLimits

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_copy2

0xc80b,	// (0x00019218) eswt_control_pane_g2_copy2_ParamLimits

0xc80b,	// (0x00019218) eswt_control_pane_g2_copy2

0xc818,	// (0x00019225) eswt_control_pane_g3_copy2_ParamLimits

0xc818,	// (0x00019225) eswt_control_pane_g3_copy2

0xc825,	// (0x00019232) eswt_control_pane_g4_copy2_ParamLimits

0xc825,	// (0x00019232) eswt_control_pane_g4_copy2

0x36c8,	// (0x000100d5) common_borders_pane_cp4

0xc88b,	// (0x00019298) separator_horizontal_pane_g1

0xc894,	// (0x000192a1) separator_horizontal_pane_g2

0xc89d,	// (0x000192aa) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0001c5fd) separator_horizontal_pane_g

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_copy3_ParamLimits

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_copy3

0xc80b,	// (0x00019218) eswt_control_pane_g2_copy3_ParamLimits

0xc80b,	// (0x00019218) eswt_control_pane_g2_copy3

0xc818,	// (0x00019225) eswt_control_pane_g3_copy3_ParamLimits

0xc818,	// (0x00019225) eswt_control_pane_g3_copy3

0xc825,	// (0x00019232) eswt_control_pane_g4_copy3_ParamLimits

0xc825,	// (0x00019232) eswt_control_pane_g4_copy3

0x36c8,	// (0x000100d5) common_borders_pane_cp5

0xc8a6,	// (0x000192b3) separator_vertical_pane_g1

0xc8af,	// (0x000192bc) separator_vertical_pane_g2

0xc8b8,	// (0x000192c5) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0001c604) separator_vertical_pane_g

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_copy4_ParamLimits

0xc7fe,	// (0x0001920b) eswt_control_pane_g1_copy4

0xc80b,	// (0x00019218) eswt_control_pane_g2_copy4_ParamLimits

0xc80b,	// (0x00019218) eswt_control_pane_g2_copy4

0xc818,	// (0x00019225) eswt_control_pane_g3_copy4_ParamLimits

0xc818,	// (0x00019225) eswt_control_pane_g3_copy4

0xc825,	// (0x00019232) eswt_control_pane_g4_copy4_ParamLimits

0xc825,	// (0x00019232) eswt_control_pane_g4_copy4

0xc8c1,	// (0x000192ce) eswt_ctrl_combo_button_pane

0xc8c9,	// (0x000192d6) eswt_ctrl_input_pane

0xc8d1,	// (0x000192de) popup_choice_list_window_cp70

0xc8d9,	// (0x000192e6) eswt_ctrl_input_pane_t1

0x36c8,	// (0x000100d5) input_focus_pane_cp70

0xbc2a,	// (0x00018637) bg_button_pane_cp70_ParamLimits

0xbc2a,	// (0x00018637) bg_button_pane_cp70

0xc8e7,	// (0x000192f4) eswt_ctrl_combo_button_pane_g1

0xc8ef,	// (0x000192fc) wait_bar_pane_cp70

0x9231,	// (0x00015c3e) bg_popup_window_pane_cp70_ParamLimits

0x9231,	// (0x00015c3e) bg_popup_window_pane_cp70

0xc8f7,	// (0x00019304) popup_eswt_tasktip_window_t1

0xc90d,	// (0x0001931a) wait_bar_pane_cp71_ParamLimits

0xc90d,	// (0x0001931a) wait_bar_pane_cp71

0xc919,	// (0x00019326) grid_eswt_app_pane

0x7fc9,	// (0x000149d6) scroll_pane_cp70

0xc922,	// (0x0001932f) cell_eswt_app_pane_ParamLimits

0xc922,	// (0x0001932f) cell_eswt_app_pane

0xc954,	// (0x00019361) cell_eswt_app_pane_g1_ParamLimits

0xc954,	// (0x00019361) cell_eswt_app_pane_g1

0xc983,	// (0x00019390) cell_eswt_app_pane_g2_ParamLimits

0xc983,	// (0x00019390) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0001c60b) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0001c60b) cell_eswt_app_pane_g

0xc9ac,	// (0x000193b9) cell_eswt_app_pane_t1_ParamLimits

0xc9ac,	// (0x000193b9) cell_eswt_app_pane_t1

0xc9de,	// (0x000193eb) grid_highlight_pane_cp70_ParamLimits

0xc9de,	// (0x000193eb) grid_highlight_pane_cp70

0x872c,	// (0x00015139) set_content_pane_g1

0x8b14,	// (0x00015521) status_small_volume_pane

0x662f,	// (0x0001303c) status_small_volume_pane_g1

0x6637,	// (0x00013044) volume_small2_pane

0x6640,	// (0x0001304d) volume_small2_pane_g1

0x6649,	// (0x00013056) volume_small2_pane_g2

0x6652,	// (0x0001305f) volume_small2_pane_g3

0x665b,	// (0x00013068) volume_small2_pane_g4

0x6664,	// (0x00013071) volume_small2_pane_g5

0x666d,	// (0x0001307a) volume_small2_pane_g6

0x6676,	// (0x00013083) volume_small2_pane_g7

0x667f,	// (0x0001308c) volume_small2_pane_g8

0x6688,	// (0x00013095) volume_small2_pane_g9

0x6691,	// (0x0001309e) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0001c610) volume_small2_pane_g

0xc034,	// (0x00018a41) fep_vkb_top_text_pane_g1_ParamLimits

0xc04f,	// (0x00018a5c) fep_vkb_top_text_pane_t1_ParamLimits

0xc2e7,	// (0x00018cf4) popup_preview_fixed_window_g3_ParamLimits

0xc2e7,	// (0x00018cf4) popup_preview_fixed_window_g3

0x5c87,	// (0x00012694) popup_toolbar_trans_pane

0xa5e0,	// (0x00016fed) aid_height_set_list_ParamLimits

0xa5f1,	// (0x00016ffe) aid_size_parent_ParamLimits

0x8b95,	// (0x000155a2) list_highlight_pane_cp2_ParamLimits

0x872c,	// (0x00015139) set_content_pane_g1_ParamLimits

0xa8a3,	// (0x000172b0) list_single_image_pane_ParamLimits

0xa8a3,	// (0x000172b0) list_single_image_pane

0xc9ea,	// (0x000193f7) aid_size_cell_image_ParamLimits

0xc9ea,	// (0x000193f7) aid_size_cell_image

0xc9f7,	// (0x00019404) grid_single_image_pane_ParamLimits

0xc9f7,	// (0x00019404) grid_single_image_pane

0x40a3,	// (0x00010ab0) list_single_image_pane_g1_ParamLimits

0x40a3,	// (0x00010ab0) list_single_image_pane_g1

0x40af,	// (0x00010abc) list_single_image_pane_g2_ParamLimits

0x40af,	// (0x00010abc) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0001c625) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0001c625) list_single_image_pane_g

0xca05,	// (0x00019412) list_single_image_pane_t1_ParamLimits

0xca05,	// (0x00019412) list_single_image_pane_t1

0xca1b,	// (0x00019428) cell_image_list_pane_ParamLimits

0xca1b,	// (0x00019428) cell_image_list_pane

0xca33,	// (0x00019440) cell_image_list_pane_g1

0xca3c,	// (0x00019449) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0001c62a) cell_image_list_pane_g

0xca45,	// (0x00019452) aid_size_cell_tb_trans_pane

0x407d,	// (0x00010a8a) bg_tb_trans_pane

0xca57,	// (0x00019464) grid_tb_trans_pane

0x910d,	// (0x00015b1a) bg_tb_trans_pane_g1

0x911d,	// (0x00015b2a) bg_tb_trans_pane_g2

0x9115,	// (0x00015b22) bg_tb_trans_pane_g3

0x912d,	// (0x00015b3a) bg_tb_trans_pane_g4

0x9125,	// (0x00015b32) bg_tb_trans_pane_g5

0x914d,	// (0x00015b5a) bg_tb_trans_pane_g6

0x9145,	// (0x00015b52) bg_tb_trans_pane_g7

0x9135,	// (0x00015b42) bg_tb_trans_pane_g8

0x913d,	// (0x00015b4a) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0001c62f) bg_tb_trans_pane_g

0xca6b,	// (0x00019478) cell_toolbar_trans_pane_ParamLimits

0xca6b,	// (0x00019478) cell_toolbar_trans_pane

0xbc65,	// (0x00018672) cell_toolbar_trans_pane_g1

0xb84a,	// (0x00018257) list_form2_midp_pane_t1

0xb858,	// (0x00018265) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0001c4cc) list_form2_midp_pane_t

0xb866,	// (0x00018273) scroll_pane_cp51_ParamLimits

0xba80,	// (0x0001848d) form2_midp_wait_pane_g1

0xba89,	// (0x00018496) form2_midp_wait_pane_g2

0xba92,	// (0x0001849f) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0001c4e1) form2_midp_wait_pane_g

0x3905,	// (0x00010312) list_highlight_pane_cp21_ParamLimits

0xbacb,	// (0x000184d8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbada,	// (0x000184e7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa85c,	// (0x00017269) list_single_2graphic_im_pane_ParamLimits

0xa85c,	// (0x00017269) list_single_2graphic_im_pane

0xca91,	// (0x0001949e) list_single_2graphic_im_pane_g1_ParamLimits

0xca91,	// (0x0001949e) list_single_2graphic_im_pane_g1

0xcaa2,	// (0x000194af) list_single_2graphic_im_pane_g2_ParamLimits

0xcaa2,	// (0x000194af) list_single_2graphic_im_pane_g2

0xcaae,	// (0x000194bb) list_single_2graphic_im_pane_g3_ParamLimits

0xcaae,	// (0x000194bb) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0001c642) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0001c642) list_single_2graphic_im_pane_g

0xcace,	// (0x000194db) list_single_2graphic_im_pane_t1_ParamLimits

0xcace,	// (0x000194db) list_single_2graphic_im_pane_t1

0xc2f3,	// (0x00018d00) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2f3,	// (0x00018d00) list_single_graphic_2heading_pane_fp

0xc33b,	// (0x00018d48) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc33b,	// (0x00018d48) list_single_graphic_2heading_pane_fp_g1

0xc30c,	// (0x00018d19) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc30c,	// (0x00018d19) list_single_graphic_2heading_pane_fp_g2

0xc265,	// (0x00018c72) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc265,	// (0x00018c72) list_single_graphic_2heading_pane_fp_g3

0xc271,	// (0x00018c7e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc271,	// (0x00018c7e) list_single_graphic_2heading_pane_fp_g4

0xc318,	// (0x00018d25) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc318,	// (0x00018d25) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c569) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c569) list_single_graphic_2heading_pane_fp_g

0xcaff,	// (0x0001950c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcaff,	// (0x0001950c) list_single_graphic_2heading_pane_fp_t1

0xc373,	// (0x00018d80) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc373,	// (0x00018d80) list_single_graphic_2heading_pane_fp_t2

0xcb15,	// (0x00019522) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb15,	// (0x00019522) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0001c64b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0001c64b) list_single_graphic_2heading_pane_fp_t

0xbcf6,	// (0x00018703) fep_hwr_write_pane_g5_ParamLimits

0xbcf6,	// (0x00018703) fep_hwr_write_pane_g5

0xbd02,	// (0x0001870f) fep_hwr_write_pane_g6_ParamLimits

0xbd02,	// (0x0001870f) fep_hwr_write_pane_g6

0xc7cd,	// (0x000191da) eswt_shell_pane_ParamLimits

0x9231,	// (0x00015c3e) bg_popup_window_pane_cp18_ParamLimits

0xa50f,	// (0x00016f1c) heading_pane_cp70

0xc8f7,	// (0x00019304) popup_eswt_tasktip_window_t1_ParamLimits

0x8c30,	// (0x0001563d) aid_touch_tab_arrow_left

0x8c3c,	// (0x00015649) aid_touch_tab_arrow_right

0x73f3,	// (0x00013e00) title_pane_g3_ParamLimits

0x73f3,	// (0x00013e00) title_pane_g3

0x3fd6,	// (0x000109e3) set_value_pane_g1

0x5c87,	// (0x00012694) popup_toolbar_trans_pane_ParamLimits

0xca45,	// (0x00019452) aid_size_cell_tb_trans_pane_ParamLimits

0x407d,	// (0x00010a8a) bg_tb_trans_pane_ParamLimits

0xca57,	// (0x00019464) grid_tb_trans_pane_ParamLimits

0x3adb,	// (0x000104e8) cont_note_pane_ParamLimits

0x3adb,	// (0x000104e8) cont_note_pane

0x3d65,	// (0x00010772) cont_snote2_single_text_pane_ParamLimits

0x3d65,	// (0x00010772) cont_snote2_single_text_pane

0x3d65,	// (0x00010772) cont_snote2_single_graphic_pane_ParamLimits

0x3d65,	// (0x00010772) cont_snote2_single_graphic_pane

0x9852,	// (0x0001625f) cont_note_wait_pane_ParamLimits

0x9852,	// (0x0001625f) cont_note_wait_pane

0x9852,	// (0x0001625f) cont_note_image_pane_ParamLimits

0x9852,	// (0x0001625f) cont_note_image_pane

0xcb2b,	// (0x00019538) popup_note2_window_g1_ParamLimits

0xcb2b,	// (0x00019538) popup_note2_window_g1

0xcb5c,	// (0x00019569) popup_note2_window_t1_ParamLimits

0xcb5c,	// (0x00019569) popup_note2_window_t1

0xcba1,	// (0x000195ae) popup_note2_window_t2_ParamLimits

0xcba1,	// (0x000195ae) popup_note2_window_t2

0xcbe6,	// (0x000195f3) popup_note2_window_t3_ParamLimits

0xcbe6,	// (0x000195f3) popup_note2_window_t3

0xcc2b,	// (0x00019638) popup_note2_window_t4_ParamLimits

0xcc2b,	// (0x00019638) popup_note2_window_t4

0x3b5f,	// (0x0001056c) popup_note2_window_t5_ParamLimits

0x3b5f,	// (0x0001056c) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0001c657) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0001c657) popup_note2_window_t

0xcc5a,	// (0x00019667) popup_note2_image_window_g1_ParamLimits

0xcc5a,	// (0x00019667) popup_note2_image_window_g1

0xcc66,	// (0x00019673) popup_note2_image_window_g2_ParamLimits

0xcc66,	// (0x00019673) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0001c662) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0001c662) popup_note2_image_window_g

0xcc78,	// (0x00019685) popup_note2_image_window_t1_ParamLimits

0xcc78,	// (0x00019685) popup_note2_image_window_t1

0xcc90,	// (0x0001969d) popup_note2_image_window_t2_ParamLimits

0xcc90,	// (0x0001969d) popup_note2_image_window_t2

0xcca8,	// (0x000196b5) popup_note2_image_window_t3_ParamLimits

0xcca8,	// (0x000196b5) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0001c667) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0001c667) popup_note2_image_window_t

0x9860,	// (0x0001626d) popup_note2_wait_window_g1_ParamLimits

0x9860,	// (0x0001626d) popup_note2_wait_window_g1

0xccc4,	// (0x000196d1) popup_note2_wait_window_g2_ParamLimits

0xccc4,	// (0x000196d1) popup_note2_wait_window_g2

0x9878,	// (0x00016285) popup_note2_wait_window_g3_ParamLimits

0x9878,	// (0x00016285) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x0001c66e) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x0001c66e) popup_note2_wait_window_g

0xccd0,	// (0x000196dd) popup_note2_wait_window_t1_ParamLimits

0xccd0,	// (0x000196dd) popup_note2_wait_window_t1

0xccee,	// (0x000196fb) popup_note2_wait_window_t2_ParamLimits

0xccee,	// (0x000196fb) popup_note2_wait_window_t2

0xcd0c,	// (0x00019719) popup_note2_wait_window_t3_ParamLimits

0xcd0c,	// (0x00019719) popup_note2_wait_window_t3

0xcd1e,	// (0x0001972b) popup_note2_wait_window_t4_ParamLimits

0xcd1e,	// (0x0001972b) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x0001c675) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x0001c675) popup_note2_wait_window_t

0xcd30,	// (0x0001973d) wait_bar2_pane_ParamLimits

0xcd30,	// (0x0001973d) wait_bar2_pane

0xcd48,	// (0x00019755) popup_snote2_single_text_window_g1_ParamLimits

0xcd48,	// (0x00019755) popup_snote2_single_text_window_g1

0xcd70,	// (0x0001977d) popup_snote2_single_text_window_t1_ParamLimits

0xcd70,	// (0x0001977d) popup_snote2_single_text_window_t1

0xcdbc,	// (0x000197c9) popup_snote2_single_text_window_t2_ParamLimits

0xcdbc,	// (0x000197c9) popup_snote2_single_text_window_t2

0xce08,	// (0x00019815) popup_snote2_single_text_window_t3_ParamLimits

0xce08,	// (0x00019815) popup_snote2_single_text_window_t3

0xce49,	// (0x00019856) popup_snote2_single_text_window_t4_ParamLimits

0xce49,	// (0x00019856) popup_snote2_single_text_window_t4

0xce7f,	// (0x0001988c) popup_snote2_single_text_window_t5_ParamLimits

0xce7f,	// (0x0001988c) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x0001c67e) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x0001c67e) popup_snote2_single_text_window_t

0xceaa,	// (0x000198b7) popup_snote2_single_graphic_window_g1_ParamLimits

0xceaa,	// (0x000198b7) popup_snote2_single_graphic_window_g1

0xced2,	// (0x000198df) popup_snote2_single_graphic_window_g2_ParamLimits

0xced2,	// (0x000198df) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x0001c689) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x0001c689) popup_snote2_single_graphic_window_g

0xcefa,	// (0x00019907) popup_snote2_single_graphic_window_t1_ParamLimits

0xcefa,	// (0x00019907) popup_snote2_single_graphic_window_t1

0xcf46,	// (0x00019953) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf46,	// (0x00019953) popup_snote2_single_graphic_window_t2

0xce08,	// (0x00019815) popup_snote2_single_graphic_window_t3_ParamLimits

0xce08,	// (0x00019815) popup_snote2_single_graphic_window_t3

0xce49,	// (0x00019856) popup_snote2_single_graphic_window_t4_ParamLimits

0xce49,	// (0x00019856) popup_snote2_single_graphic_window_t4

0xce7f,	// (0x0001988c) popup_snote2_single_graphic_window_t5_ParamLimits

0xce7f,	// (0x0001988c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x0001c68e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x0001c68e) popup_snote2_single_graphic_window_t

0xb716,	// (0x00018123) clock_nsta_pane_cp2_t1

0xb716,	// (0x00018123) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0001c4a2) clock_nsta_pane_cp2_t

0x4097,	// (0x00010aa4) form_field_data_wide_pane_g1_ParamLimits

0x40a3,	// (0x00010ab0) form_field_data_wide_pane_g2_ParamLimits

0x40a3,	// (0x00010ab0) form_field_data_wide_pane_g2

0x40af,	// (0x00010abc) form_field_data_wide_pane_g3_ParamLimits

0x40af,	// (0x00010abc) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001c05e) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001c05e) form_field_data_wide_pane_g

0xb5f1,	// (0x00017ffe) grid_touch_3_pane_ParamLimits

0xb5f1,	// (0x00017ffe) grid_touch_3_pane

0xcf92,	// (0x0001999f) cell_touch_3_pane_ParamLimits

0xcf92,	// (0x0001999f) cell_touch_3_pane

0xbc65,	// (0x00018672) cell_touch_3_pane_g1

0xbc65,	// (0x00018672) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0001c527) cell_touch_3_pane_g

0x3bb7,	// (0x000105c4) cont_query_data_pane

0x3bbf,	// (0x000105cc) cont_query_data_pane_cp1

0xcfc5,	// (0x000199d2) button_value_adjust_pane_cp7

0xcfcd,	// (0x000199da) query_popup_pane_cp3

0x829a,	// (0x00014ca7) bg_popup_sub_pane_cp22_ParamLimits

0x5347,	// (0x00011d54) navi_navi_volume_pane_cp2

0x5362,	// (0x00011d6f) popup_side_volume_key_window_g2

0x5371,	// (0x00011d7e) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001c0f4) popup_side_volume_key_window_g

0x538e,	// (0x00011d9b) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001c0fb) popup_side_volume_key_window_t

0x85e7,	// (0x00014ff4) popup_side_volume_key_window_ParamLimits

0x7874,	// (0x00014281) list_double_graphic_pane_g4_ParamLimits

0x7874,	// (0x00014281) list_double_graphic_pane_g4

0xa88b,	// (0x00017298) list_single_2heading_msg_pane_ParamLimits

0xa88b,	// (0x00017298) list_single_2heading_msg_pane

0xcffe,	// (0x00019a0b) list_single_2heading_msg_pane_g1_ParamLimits

0xcffe,	// (0x00019a0b) list_single_2heading_msg_pane_g1

0xd00a,	// (0x00019a17) list_single_2heading_msg_pane_g2_ParamLimits

0xd00a,	// (0x00019a17) list_single_2heading_msg_pane_g2

0xd016,	// (0x00019a23) list_single_2heading_msg_pane_g3_ParamLimits

0xd016,	// (0x00019a23) list_single_2heading_msg_pane_g3

0xd022,	// (0x00019a2f) list_single_2heading_msg_pane_g4_ParamLimits

0xd022,	// (0x00019a2f) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x0001c699) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x0001c699) list_single_2heading_msg_pane_g

0xd03a,	// (0x00019a47) list_single_2heading_msg_pane_t1_ParamLimits

0xd03a,	// (0x00019a47) list_single_2heading_msg_pane_t1

0xd062,	// (0x00019a6f) list_single_2heading_msg_pane_t2_ParamLimits

0xd062,	// (0x00019a6f) list_single_2heading_msg_pane_t2

0xd091,	// (0x00019a9e) list_single_2heading_msg_pane_t3_ParamLimits

0xd091,	// (0x00019a9e) list_single_2heading_msg_pane_t3

0xd0ca,	// (0x00019ad7) list_single_2heading_msg_pane_t4_ParamLimits

0xd0ca,	// (0x00019ad7) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0001c6a2) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0001c6a2) list_single_2heading_msg_pane_t

0x38a9,	// (0x000102b6) title_pane_g4_ParamLimits

0x38a9,	// (0x000102b6) title_pane_g4

0x5153,	// (0x00011b60) title_pane_stacon_g3_ParamLimits

0x5153,	// (0x00011b60) title_pane_stacon_g3

0xcac2,	// (0x000194cf) list_single_2graphic_im_pane_g4_ParamLimits

0xcac2,	// (0x000194cf) list_single_2graphic_im_pane_g4

0xa2c2,	// (0x00016ccf) popup_side_volume_key_window_cp

0xabde,	// (0x000175eb) main_idle_act2_pane_t1

0x5df7,	// (0x00012804) toolbar_button_pane_g10

0x76bd,	// (0x000140ca) popup_toolbar_window_cp1

0xb707,	// (0x00018114) clock_nsta_pane_cp_t1

0xb707,	// (0x00018114) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0001c49d) clock_nsta_pane_cp_t

0x5347,	// (0x00011d54) navi_navi_volume_pane_cp2_ParamLimits

0x5356,	// (0x00011d63) popup_side_volume_key_window_g1_ParamLimits

0x5362,	// (0x00011d6f) popup_side_volume_key_window_g2_ParamLimits

0x5371,	// (0x00011d7e) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001c0f4) popup_side_volume_key_window_g_ParamLimits

0x6280,	// (0x00012c8d) fep_hwr_aid_pane

0x6329,	// (0x00012d36) bg_fep_hwr_top_pane_g4_ParamLimits

0xbcc6,	// (0x000186d3) fep_hwr_top_pane_g1_ParamLimits

0xbcd8,	// (0x000186e5) fep_hwr_top_pane_g2_ParamLimits

0x6349,	// (0x00012d56) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0001c4f2) fep_hwr_top_pane_g_ParamLimits

0x635e,	// (0x00012d6b) fep_hwr_top_text_pane_ParamLimits

0xa077,	// (0x00016a84) aid_touch_tab_arrow_arrow_2

0xa080,	// (0x00016a8d) aid_touch_tab_arrow_left_2

0x6294,	// (0x00012ca1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x62cb,	// (0x00012cd8) fep_hwr_prediction_pane

0xbe2e,	// (0x0001883b) fep_vkb_prediction_pane

0xbf34,	// (0x00018941) fep_vkb_side_pane_g3_ParamLimits

0xbf34,	// (0x00018941) fep_vkb_side_pane_g3

0x64ed,	// (0x00012efa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x655e,	// (0x00012f6b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x656b,	// (0x00012f78) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0001c5a1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x669a,	// (0x000130a7) fep_hwr_prediction_pane_g1

0x66a4,	// (0x000130b1) fep_hwr_prediction_pane_g2

0x66ac,	// (0x000130b9) fep_hwr_prediction_pane_g3

0x66b4,	// (0x000130c1) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0001c6ab) fep_hwr_prediction_pane_g

0xd0ef,	// (0x00019afc) fep_vkb_prediction_pane_g1

0xd0f9,	// (0x00019b06) fep_vkb_prediction_pane_g2

0xd101,	// (0x00019b0e) fep_vkb_prediction_pane_g3

0xd109,	// (0x00019b16) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0001c6b4) fep_vkb_prediction_pane_g

0x6100,	// (0x00012b0d) slider_set_pane_g3

0x6114,	// (0x00012b21) slider_set_pane_g4

0x612c,	// (0x00012b39) slider_set_pane_g5

0x6100,	// (0x00012b0d) slider_set_pane_g6

0x6142,	// (0x00012b4f) slider_set_pane_g7

0xa770,	// (0x0001717d) slider_form_pane_g3

0xa779,	// (0x00017186) slider_form_pane_g4

0xa781,	// (0x0001718e) slider_form_pane_g5

0xa770,	// (0x0001717d) slider_form_pane_g6

0xa789,	// (0x00017196) slider_form_pane_g7

0xaee2,	// (0x000178ef) slider_set_pane_vc_g3

0xaeeb,	// (0x000178f8) slider_set_pane_vc_g4

0xaef4,	// (0x00017901) slider_set_pane_vc_g5

0xaee2,	// (0x000178ef) slider_set_pane_vc_g6

0xaefd,	// (0x0001790a) slider_set_pane_vc_g7

0xb3b6,	// (0x00017dc3) slider_form_pane_vc_g1

0xb3bf,	// (0x00017dcc) slider_form_pane_vc_g2

0xb3c8,	// (0x00017dd5) slider_form_pane_vc_g3

0xb3b6,	// (0x00017dc3) slider_form_pane_vc_g4

0xb3d1,	// (0x00017dde) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0001c46f) slider_form_pane_vc_g

0x4e07,	// (0x00011814) main_idle_act3_pane

0xd111,	// (0x00019b1e) ai3_links_pane

0xd11a,	// (0x00019b27) popup_ai3_data_window_ParamLimits

0xd11a,	// (0x00019b27) popup_ai3_data_window

0x36c8,	// (0x000100d5) grid_ai3_links_pane

0xd138,	// (0x00019b45) cell_ai3_links_pane_ParamLimits

0xd138,	// (0x00019b45) cell_ai3_links_pane

0xd152,	// (0x00019b5f) bg_popup_sub_pane_cp11

0xd15f,	// (0x00019b6c) cell_ai3_links_pane_g1

0x36c8,	// (0x000100d5) bg_popup_sub_pane_cp12

0xd184,	// (0x00019b91) heading_ai3_data_pane

0xd18c,	// (0x00019b99) list_ai3_gene_pane

0xd198,	// (0x00019ba5) popup_ai3_data_window_g1

0xd1a0,	// (0x00019bad) heading_ai3_data_pane_g1

0xd1a8,	// (0x00019bb5) heading_ai3_data_pane_t1

0xd1b6,	// (0x00019bc3) list_double_ai3_gene_pane_ParamLimits

0xd1b6,	// (0x00019bc3) list_double_ai3_gene_pane

0xd1c3,	// (0x00019bd0) list_single_ai3_gene_pane_ParamLimits

0xd1c3,	// (0x00019bd0) list_single_ai3_gene_pane

0xbc2a,	// (0x00018637) list_highlight_pane_cp7_ParamLimits

0xbc2a,	// (0x00018637) list_highlight_pane_cp7

0xd1d0,	// (0x00019bdd) list_single_a13_gene_pane_t1_ParamLimits

0xd1d0,	// (0x00019bdd) list_single_a13_gene_pane_t1

0xd1e7,	// (0x00019bf4) list_single_ai3_gene_pane_g1

0xd1f0,	// (0x00019bfd) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x0001c6bd) list_single_ai3_gene_pane_g

0xd1f8,	// (0x00019c05) list_double_ai3_gene_pane_g1_ParamLimits

0xd1f8,	// (0x00019c05) list_double_ai3_gene_pane_g1

0xd204,	// (0x00019c11) list_double_ai3_gene_pane_t1_ParamLimits

0xd204,	// (0x00019c11) list_double_ai3_gene_pane_t1

0xd220,	// (0x00019c2d) list_double_ai3_gene_pane_t2_ParamLimits

0xd220,	// (0x00019c2d) list_double_ai3_gene_pane_t2

0xd235,	// (0x00019c42) list_double_ai3_gene_pane_t3_ParamLimits

0xd235,	// (0x00019c42) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0001c6c2) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0001c6c2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfde,	// (0x000199eb) aid_size_min_col_2

0xcfe8,	// (0x000199f5) aid_size_min_msg_ParamLimits

0xcfe8,	// (0x000199f5) aid_size_min_msg

0xc040,	// (0x00018a4d) fep_vkb_top_text_pane_g2_ParamLimits

0xc040,	// (0x00018a4d) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0001c522) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0001c522) fep_vkb_top_text_pane_g

0x4e07,	// (0x00011814) main_hc_apps_shell_pane

0xd252,	// (0x00019c5f) grid_hc_apps_pane_ParamLimits

0xd252,	// (0x00019c5f) grid_hc_apps_pane

0xd264,	// (0x00019c71) list_hc_apps_pane

0xd26c,	// (0x00019c79) scroll_pane_cp37_ParamLimits

0xd26c,	// (0x00019c79) scroll_pane_cp37

0xd278,	// (0x00019c85) cell_hc_apps_pane_ParamLimits

0xd278,	// (0x00019c85) cell_hc_apps_pane

0xd32e,	// (0x00019d3b) cell_hc_apps_pane_g1_ParamLimits

0xd32e,	// (0x00019d3b) cell_hc_apps_pane_g1

0xd35a,	// (0x00019d67) cell_hc_apps_pane_g2_ParamLimits

0xd35a,	// (0x00019d67) cell_hc_apps_pane_g2

0xd376,	// (0x00019d83) cell_hc_apps_pane_g3_ParamLimits

0xd376,	// (0x00019d83) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x0001c6c9) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x0001c6c9) cell_hc_apps_pane_g

0xd398,	// (0x00019da5) cell_hc_apps_pane_t1_ParamLimits

0xd398,	// (0x00019da5) cell_hc_apps_pane_t1

0x3adb,	// (0x000104e8) grid_highlight_pane_cp10_ParamLimits

0x3adb,	// (0x000104e8) grid_highlight_pane_cp10

0xd3d8,	// (0x00019de5) list_single_hc_apps_pane_ParamLimits

0xd3d8,	// (0x00019de5) list_single_hc_apps_pane

0xd417,	// (0x00019e24) list_single_hc_apps_pane_g1

0xd430,	// (0x00019e3d) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0001c6d0) list_single_hc_apps_pane_g

0xd449,	// (0x00019e56) list_single_hc_apps_pane_g2_copy1

0xd465,	// (0x00019e72) list_single_hc_apps_pane_t1

0x3905,	// (0x00010312) bg_set_opt_pane_cp_ParamLimits

0x507a,	// (0x00011a87) setting_slider_pane_t1_ParamLimits

0x5093,	// (0x00011aa0) setting_slider_pane_t2_ParamLimits

0x50ad,	// (0x00011aba) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001bf46) setting_slider_pane_t_ParamLimits

0x50c5,	// (0x00011ad2) slider_set_pane_ParamLimits

0x55f6,	// (0x00012003) control_pane_g5_ParamLimits

0x55f6,	// (0x00012003) control_pane_g5

0xa5a3,	// (0x00016fb0) slider_set_pane_g1_ParamLimits

0x60f4,	// (0x00012b01) slider_set_pane_g2_ParamLimits

0x6100,	// (0x00012b0d) slider_set_pane_g3_ParamLimits

0x6114,	// (0x00012b21) slider_set_pane_g4_ParamLimits

0x612c,	// (0x00012b39) slider_set_pane_g5_ParamLimits

0x6100,	// (0x00012b0d) slider_set_pane_g6_ParamLimits

0x6142,	// (0x00012b4f) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0001c347) slider_set_pane_g_ParamLimits

0x86d7,	// (0x000150e4) navi_icon_text_pane_ParamLimits

0x8bef,	// (0x000155fc) aid_fill_nsta_2_ParamLimits

0x8c30,	// (0x0001563d) aid_touch_tab_arrow_left_ParamLimits

0x8c3c,	// (0x00015649) aid_touch_tab_arrow_right_ParamLimits

0x8ca8,	// (0x000156b5) clock_nsta_pane_ParamLimits

0xa059,	// (0x00016a66) navi_icon_pane_g1_ParamLimits

0xa065,	// (0x00016a72) navi_text_pane_t1_ParamLimits

0xb824,	// (0x00018231) navi_icon_text_pane_g1_ParamLimits

0xb830,	// (0x0001823d) navi_icon_text_pane_t1_ParamLimits

0xd417,	// (0x00019e24) list_single_hc_apps_pane_g1_ParamLimits

0xd430,	// (0x00019e3d) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0001c6d0) list_single_hc_apps_pane_g_ParamLimits

0xd449,	// (0x00019e56) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd465,	// (0x00019e72) list_single_hc_apps_pane_t1_ParamLimits

0x4f7c,	// (0x00011989) popup_toolbar2_fixed_window_ParamLimits

0x4f7c,	// (0x00011989) popup_toolbar2_fixed_window

0x5c7d,	// (0x0001268a) popup_toolbar2_float_window

0x36c8,	// (0x000100d5) bg_popup_sub_pane_cp27

0xd493,	// (0x00019ea0) grid_toolbar2_float_pane

0x36c8,	// (0x000100d5) bg_popup_sub_pane_cp26

0xd493,	// (0x00019ea0) grid_toolbar2_fixed_pane

0xd49b,	// (0x00019ea8) cell_toolbar2_fixed_pane_ParamLimits

0xd49b,	// (0x00019ea8) cell_toolbar2_fixed_pane

0xd4ab,	// (0x00019eb8) cell_toolbar2_fixed_pane_g1

0xd4b4,	// (0x00019ec1) toolbar2_fixed_button_pane

0x910d,	// (0x00015b1a) toolbar2_fixed_button_pane_g1

0x911d,	// (0x00015b2a) toolbar2_fixed_button_pane_g2

0x9115,	// (0x00015b22) toolbar2_fixed_button_pane_g3

0x912d,	// (0x00015b3a) toolbar2_fixed_button_pane_g4

0x9125,	// (0x00015b32) toolbar2_fixed_button_pane_g5

0x9135,	// (0x00015b42) toolbar2_fixed_button_pane_g6

0x913d,	// (0x00015b4a) toolbar2_fixed_button_pane_g7

0x914d,	// (0x00015b5a) toolbar2_fixed_button_pane_g8

0x9145,	// (0x00015b52) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0001c249) toolbar2_fixed_button_pane_g

0xd4bc,	// (0x00019ec9) cell_toolbar2_float_pane_ParamLimits

0xd4bc,	// (0x00019ec9) cell_toolbar2_float_pane

0xd4cd,	// (0x00019eda) cell_toolbar2_float_pane_g1

0xd4b4,	// (0x00019ec1) toolbar2_fixed_button_pane_cp

0xbd9c,	// (0x000187a9) fep_vkb_accented_list_pane_ParamLimits

0xbd9c,	// (0x000187a9) fep_vkb_accented_list_pane

0x64cd,	// (0x00012eda) bg_popup_fep_shadow_pane_g9

0x8866,	// (0x00015273) bg_popup_fep_shadow_pane_cp3

0x4232,	// (0x00010c3f) list_accented_list_pane

0xd4d6,	// (0x00019ee3) list_single_accented_list_pane_ParamLimits

0xd4d6,	// (0x00019ee3) list_single_accented_list_pane

0x8866,	// (0x00015273) list_highlight_pane_cp10

0xd4e7,	// (0x00019ef4) list_single_accented_list_pane_t1

0x5bc3,	// (0x000125d0) popup_slider_window_ParamLimits

0x5bc3,	// (0x000125d0) popup_slider_window

0xcfd5,	// (0x000199e2) aid_indentation_list_msg

0xd5b7,	// (0x00019fc4) bg_popup_window_pane_cp19

0xd623,	// (0x0001a030) popup_slider_window_g1

0xd63f,	// (0x0001a04c) popup_slider_window_g2

0xd65b,	// (0x0001a068) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0001c6d5) popup_slider_window_g

0xd6c1,	// (0x0001a0ce) popup_slider_window_t1

0xd735,	// (0x0001a142) small_volume_slider_vertical_pane

0xbc65,	// (0x00018672) small_volume_slider_vertical_pane_g1

0xbc65,	// (0x00018672) small_volume_slider_vertical_pane_g2

0xd751,	// (0x0001a15e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x0001c6e7) small_volume_slider_vertical_pane_g

0x4d2a,	// (0x00011737) area_side_right_pane_ParamLimits

0x4d2a,	// (0x00011737) area_side_right_pane

0x66bc,	// (0x000130c9) aid_size_side_button_ParamLimits

0x66bc,	// (0x000130c9) aid_size_side_button

0x66d0,	// (0x000130dd) grid_sctrl_middle_pane_ParamLimits

0x66d0,	// (0x000130dd) grid_sctrl_middle_pane

0x66ef,	// (0x000130fc) sctrl_sk_bottom_pane

0x6700,	// (0x0001310d) sctrl_sk_top_pane

0x6712,	// (0x0001311f) aid_touch_sctrl_top

0x671f,	// (0x0001312c) bg_sctrl_sk_pane_ParamLimits

0x671f,	// (0x0001312c) bg_sctrl_sk_pane

0x672d,	// (0x0001313a) sctrl_sk_top_pane_g1

0x673a,	// (0x00013147) sctrl_sk_top_pane_t1

0x6712,	// (0x0001311f) aid_touch_sctrl_bottom

0x671f,	// (0x0001312c) bg_sctrl_sk_pane_cp_ParamLimits

0x671f,	// (0x0001312c) bg_sctrl_sk_pane_cp

0x6755,	// (0x00013162) sctrl_sk_bottom_pane_g1

0x673a,	// (0x00013147) sctrl_sk_bottom_pane_t1

0x675e,	// (0x0001316b) cell_sctrl_middle_pane_ParamLimits

0x675e,	// (0x0001316b) cell_sctrl_middle_pane

0x677b,	// (0x00013188) aid_touch_sctrl_middle_ParamLimits

0x677b,	// (0x00013188) aid_touch_sctrl_middle

0x678d,	// (0x0001319a) bg_sctrl_middle_pane_ParamLimits

0x678d,	// (0x0001319a) bg_sctrl_middle_pane

0x64ed,	// (0x00012efa) cell_sctrl_middle_pane_g1_ParamLimits

0x64ed,	// (0x00012efa) cell_sctrl_middle_pane_g1

0x679b,	// (0x000131a8) cell_sctrl_middle_pane_g2_ParamLimits

0x679b,	// (0x000131a8) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0001c6f3) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0001c6f3) cell_sctrl_middle_pane_g

0x910d,	// (0x00015b1a) bg_sctrl_middle_pane_g1

0x9115,	// (0x00015b22) bg_sctrl_middle_pane_g2

0x911d,	// (0x00015b2a) bg_sctrl_middle_pane_g3

0x9125,	// (0x00015b32) bg_sctrl_middle_pane_g4

0x912d,	// (0x00015b3a) bg_sctrl_middle_pane_g5

0x9135,	// (0x00015b42) bg_sctrl_middle_pane_g6

0x913d,	// (0x00015b4a) bg_sctrl_middle_pane_g7

0x9145,	// (0x00015b52) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x0001c6f8) bg_sctrl_middle_pane_g

0x914d,	// (0x00015b5a) bg_sctrl_middle_pane_g8_copy1

0x910d,	// (0x00015b1a) bg_sctrl_sk_pane_g1

0x911d,	// (0x00015b2a) bg_sctrl_sk_pane_g2

0x9115,	// (0x00015b22) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0001c249) bg_sctrl_sk_pane_g

0x3f23,	// (0x00010930) aid_size_touch_scroll_bar

0x912d,	// (0x00015b3a) bg_sctrl_sk_pane_g4

0x9125,	// (0x00015b32) bg_sctrl_sk_pane_g5

0x9135,	// (0x00015b42) bg_sctrl_sk_pane_g6

0x913d,	// (0x00015b4a) bg_sctrl_sk_pane_g7

0x914d,	// (0x00015b5a) bg_sctrl_sk_pane_g8

0x9145,	// (0x00015b52) bg_sctrl_sk_pane_g9

0x57d8,	// (0x000121e5) popup_fep_china_hwr2_fs_candidate_window

0x57e2,	// (0x000121ef) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x57e2,	// (0x000121ef) popup_fep_china_hwr2_fs_control_window

0x64ed,	// (0x00012efa) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x0001c6ee) sctrl_sk_top_pane_g

0xd75a,	// (0x0001a167) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd75a,	// (0x0001a167) aid_fep_china_hwr2_fs_cell

0xd76d,	// (0x0001a17a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76d,	// (0x0001a17a) bg_popup_fep_shadow_pane_cp4

0xd786,	// (0x0001a193) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd786,	// (0x0001a193) bg_popup_fep_shadow_pane_cp5

0xd798,	// (0x0001a1a5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd798,	// (0x0001a1a5) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a8,	// (0x0001a1b5) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b0,	// (0x0001a1bd) aid_fep_china_hwr2_fs_candi_cell

0x36c8,	// (0x000100d5) bg_popup_fep_shadow_pane_cp6

0xd7ba,	// (0x0001a1c7) popup_fep_china_hwr2_fs_candidate_grid

0xd7c4,	// (0x0001a1d1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7c4,	// (0x0001a1d1) cell_fep_china_hwr2_fs_funtion_grid

0xbc65,	// (0x00018672) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7dc,	// (0x0001a1e9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7dc,	// (0x0001a1e9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7ea,	// (0x0001a1f7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7ea,	// (0x0001a1f7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x0001c709) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x0001c709) cell_fep_china_hwr2_fs_funtion_grid_g

0xd800,	// (0x0001a20d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd800,	// (0x0001a20d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd815,	// (0x0001a222) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd815,	// (0x0001a222) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x0001c70e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x0001c70e) cell_fep_china_hwr2_fs_funtion_grid_t

0xd831,	// (0x0001a23e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd839,	// (0x0001a246) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd841,	// (0x0001a24e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0001c713) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd849,	// (0x0001a256) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd849,	// (0x0001a256) cell_fep_china_hwr2_fs_candidate_grid

0xd868,	// (0x0001a275) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd870,	// (0x0001a27d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbc65,	// (0x00018672) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbc65,	// (0x00018672) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0001c527) cell_fep_china_hwr2_fs_candidate_grid_g

0xd878,	// (0x0001a285) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8cbb,	// (0x000156c8) clock_nsta_pane_cp_24_ParamLimits

0x8cbb,	// (0x000156c8) clock_nsta_pane_cp_24

0x8d3b,	// (0x00015748) indicator_nsta_pane_cp_24_ParamLimits

0x8d3b,	// (0x00015748) indicator_nsta_pane_cp_24

0x9ed5,	// (0x000168e2) heading_pane_g1

0x0001,

0xf8a1,	// (0x0001c2ae) heading_pane_g

0xaa25,	// (0x00017432) grid_sct_catagory_button_pane

0xaa57,	// (0x00017464) scroll_pane_cp5_ParamLimits

0xb872,	// (0x0001827f) button_value_adjust_pane_cp5_ParamLimits

0xb872,	// (0x0001827f) button_value_adjust_pane_cp5

0xb978,	// (0x00018385) form2_midp_time_pane_ParamLimits

0xd886,	// (0x0001a293) cell_sct_catagory_button_pane_ParamLimits

0xd886,	// (0x0001a293) cell_sct_catagory_button_pane

0xbc2a,	// (0x00018637) bg_button_pane_cp01_ParamLimits

0xbc2a,	// (0x00018637) bg_button_pane_cp01

0xbc65,	// (0x00018672) cell_sct_catagory_button_pane_g1

0x5c04,	// (0x00012611) popup_tb_extension_window

0xd898,	// (0x0001a2a5) aid_size_cell_ext_ParamLimits

0xd898,	// (0x0001a2a5) aid_size_cell_ext

0x3adb,	// (0x000104e8) bg_tb_trans_pane_cp1_ParamLimits

0x3adb,	// (0x000104e8) bg_tb_trans_pane_cp1

0xd8b8,	// (0x0001a2c5) grid_tb_ext_pane_ParamLimits

0xd8b8,	// (0x0001a2c5) grid_tb_ext_pane

0xd8e6,	// (0x0001a2f3) cell_tb_ext_pane_ParamLimits

0xd8e6,	// (0x0001a2f3) cell_tb_ext_pane

0xd8fd,	// (0x0001a30a) cell_tb_ext_pane_g1_ParamLimits

0xd8fd,	// (0x0001a30a) cell_tb_ext_pane_g1

0xd91a,	// (0x0001a327) cell_tb_ext_pane_t1

0x3adb,	// (0x000104e8) list_highlight_pane_cp11_ParamLimits

0x3adb,	// (0x000104e8) list_highlight_pane_cp11

0x4f9b,	// (0x000119a8) popup_uni_indicator_window_ParamLimits

0x4f9b,	// (0x000119a8) popup_uni_indicator_window

0x407d,	// (0x00010a8a) bg_popup_sub_pane_cp14

0xd935,	// (0x0001a342) list_uniindi_pane

0xd941,	// (0x0001a34e) uniindi_top_pane

0x3adb,	// (0x000104e8) bg_uniindi_top_pane

0xd962,	// (0x0001a36f) uniindi_top_pane_g1

0xd978,	// (0x0001a385) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x0001c71a) uniindi_top_pane_g

0xd9a2,	// (0x0001a3af) uniindi_top_pane_t1

0xd9ce,	// (0x0001a3db) list_single_uniindi_pane_ParamLimits

0xd9ce,	// (0x0001a3db) list_single_uniindi_pane

0xbc65,	// (0x00018672) bg_uniindi_top_pane_g1

0xd9e1,	// (0x0001a3ee) list_single_uniindi_pane_g1

0xd9f4,	// (0x0001a401) list_single_uniindi_pane_t1

0x4e07,	// (0x00011814) control_bg_pane

0xda19,	// (0x0001a426) bg_sctrl_sk_pane_cp1

0xda22,	// (0x0001a42f) bg_sctrl_sk_pane_cp2

0xda2b,	// (0x0001a438) control_bg_pane_g1

0xda34,	// (0x0001a441) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0001c723) control_bg_pane_g

0xb6aa,	// (0x000180b7) cell_indicator_nsta_pane_g1_ParamLimits

0xb6b8,	// (0x000180c5) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0001c48b) cell_indicator_nsta_pane_g_ParamLimits

0xba05,	// (0x00018412) form2_midp_time_pane_t1_ParamLimits

0x5736,	// (0x00012143) main_idle_act4_pane_ParamLimits

0x5736,	// (0x00012143) main_idle_act4_pane

0x5c04,	// (0x00012611) popup_tb_extension_window_ParamLimits

0xd8d8,	// (0x0001a2e5) tb_ext_find_pane_ParamLimits

0xd8d8,	// (0x0001a2e5) tb_ext_find_pane

0xda3d,	// (0x0001a44a) ai_gene_pane_1_cp1

0x89b0,	// (0x000153bd) ai_gene_pane_2_cp1

0xda45,	// (0x0001a452) list_single_idle_plugin_calendar_pane

0xda4e,	// (0x0001a45b) list_single_idle_plugin_notification_pane

0xda57,	// (0x0001a464) list_single_idle_plugin_player_pane

0xda60,	// (0x0001a46d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda60,	// (0x0001a46d) list_single_idle_plugin_shortcut_pane

0xda82,	// (0x0001a48f) main_idle_act4_pane_t1

0xda94,	// (0x0001a4a1) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x0001c728) main_idle_act4_pane_t

0xdaa6,	// (0x0001a4b3) middle_sk_idle_act4_pane_ParamLimits

0xdaa6,	// (0x0001a4b3) middle_sk_idle_act4_pane

0xdabc,	// (0x0001a4c9) popup_clock_digital_analogue_window_cp2

0xdad6,	// (0x0001a4e3) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad6,	// (0x0001a4e3) shortcut_wheel_idle_act4_pane

0xbc65,	// (0x00018672) shortcut_wheel_idle_act4_pane_g1

0xbc65,	// (0x00018672) shortcut_wheel_idle_act4_pane_g2

0xbc65,	// (0x00018672) shortcut_wheel_idle_act4_pane_g3

0xbc65,	// (0x00018672) shortcut_wheel_idle_act4_pane_g4

0xbc65,	// (0x00018672) shortcut_wheel_idle_act4_pane_g5

0xdaea,	// (0x0001a4f7) shortcut_wheel_idle_act4_pane_g6

0xdaf2,	// (0x0001a4ff) shortcut_wheel_idle_act4_pane_g7

0xdafa,	// (0x0001a507) shortcut_wheel_idle_act4_pane_g8

0xdb02,	// (0x0001a50f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x0001c72d) shortcut_wheel_idle_act4_pane_g

0xbee0,	// (0x000188ed) middle_sk_idle_act4_pane_g1_ParamLimits

0xbee0,	// (0x000188ed) middle_sk_idle_act4_pane_g1

0xdb66,	// (0x0001a573) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb66,	// (0x0001a573) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0001c750) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0001c750) middle_sk_idle_act4_pane_g

0xdb72,	// (0x0001a57f) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x0001a57f) middle_sk_idle_act4_pane_t1

0xdb8f,	// (0x0001a59c) grid_ai_shortcut_pane_ParamLimits

0xdb8f,	// (0x0001a59c) grid_ai_shortcut_pane

0xdba8,	// (0x0001a5b5) list_highlight_pane_cp16_ParamLimits

0xdba8,	// (0x0001a5b5) list_highlight_pane_cp16

0xdbb5,	// (0x0001a5c2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb5,	// (0x0001a5c2) list_single_idle_plugin_shortcut_pane_g1

0xdbc1,	// (0x0001a5ce) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc1,	// (0x0001a5ce) list_single_idle_plugin_shortcut_pane_g2

0xdbdb,	// (0x0001a5e8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbdb,	// (0x0001a5e8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0001c755) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0001c755) list_single_idle_plugin_shortcut_pane_g

0xdbee,	// (0x0001a5fb) cell_ai_shortcut_pane_ParamLimits

0xdbee,	// (0x0001a5fb) cell_ai_shortcut_pane

0xdc11,	// (0x0001a61e) cell_ai_shortcut_pane_g1_ParamLimits

0xdc11,	// (0x0001a61e) cell_ai_shortcut_pane_g1

0xda3d,	// (0x0001a44a) ai_gene_pane_1_cp2

0xdc33,	// (0x0001a640) ai_gene_pane_2_cp2

0xdc3b,	// (0x0001a648) list_highlight_pane_cp15

0xdc44,	// (0x0001a651) list_single_idle_plugin_calendar_pane_g1

0xdc3b,	// (0x0001a648) list_highlight_pane_cp17

0xdc4c,	// (0x0001a659) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc54,	// (0x0001a661) list_single_idle_plugin_player_pane_g1

0xac8c,	// (0x00017699) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0001c75c) list_single_idle_plugin_player_pane_g

0xdc5c,	// (0x0001a669) list_single_idle_plugin_player_pane_t1

0xdc6a,	// (0x0001a677) list_single_idle_plugin_player_pane_t2

0xdc78,	// (0x0001a685) list_single_idle_plugin_player_pane_t3

0xdc86,	// (0x0001a693) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0001c761) list_single_idle_plugin_player_pane_t

0xdc94,	// (0x0001a6a1) wait_bar_pane_cp15

0xdc9c,	// (0x0001a6a9) grid_ai_notification_pane

0xac8c,	// (0x00017699) list_single_idle_plugin_notification_pane_g1

0xdca5,	// (0x0001a6b2) cell_ai_notification_pane_ParamLimits

0xdca5,	// (0x0001a6b2) cell_ai_notification_pane

0xdcb2,	// (0x0001a6bf) cell_ai_notification_pane_g1

0xdcba,	// (0x0001a6c7) cell_ai_notification_pane_t1

0xdcc8,	// (0x0001a6d5) tb_ext_find_button_pane

0xdcd0,	// (0x0001a6dd) tb_ext_find_pane_g1

0xdcd8,	// (0x0001a6e5) tb_ext_find_pane_t1

0x8195,	// (0x00014ba2) tb_ext_find_button_pane_g1

0xdce6,	// (0x0001a6f3) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0001c76a) tb_ext_find_button_pane_g

0xda82,	// (0x0001a48f) main_idle_act4_pane_t1_ParamLimits

0xda94,	// (0x0001a4a1) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x0001c728) main_idle_act4_pane_t_ParamLimits

0xdabc,	// (0x0001a4c9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaca,	// (0x0001a4d7) sat_plugin_idle_act4_pane_ParamLimits

0xdaca,	// (0x0001a4d7) sat_plugin_idle_act4_pane

0xdcef,	// (0x0001a6fc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcef,	// (0x0001a6fc) sat_plugin_idle_act4_pane_t1

0xdd02,	// (0x0001a70f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd02,	// (0x0001a70f) sat_plugin_idle_act4_pane_t2

0xdd15,	// (0x0001a722) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd15,	// (0x0001a722) sat_plugin_idle_act4_pane_t3

0xdd28,	// (0x0001a735) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd28,	// (0x0001a735) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0001c76f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0001c76f) sat_plugin_idle_act4_pane_t

0x4ecc,	// (0x000118d9) popup_battery_window_ParamLimits

0x4ecc,	// (0x000118d9) popup_battery_window

0x3adb,	// (0x000104e8) bg_popup_sub_pane_cp25_ParamLimits

0x3adb,	// (0x000104e8) bg_popup_sub_pane_cp25

0xdd3b,	// (0x0001a748) popup_battery_window_g1_ParamLimits

0xdd3b,	// (0x0001a748) popup_battery_window_g1

0xdd47,	// (0x0001a754) popup_battery_window_t1_ParamLimits

0xdd47,	// (0x0001a754) popup_battery_window_t1

0xdd59,	// (0x0001a766) popup_battery_window_t2_ParamLimits

0xdd59,	// (0x0001a766) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0001c778) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0001c778) popup_battery_window_t

0x887a,	// (0x00015287) midp_canvas_pane_ParamLimits

0x88f2,	// (0x000152ff) midp_keypad_pane_ParamLimits

0x88f2,	// (0x000152ff) midp_keypad_pane

0x8b95,	// (0x000155a2) main_midp_pane_ParamLimits

0xb725,	// (0x00018132) signal_pane_g2_cp_ParamLimits

0xdd76,	// (0x0001a783) aid_size_cell_midp_keypad_ParamLimits

0xdd76,	// (0x0001a783) aid_size_cell_midp_keypad

0xdd90,	// (0x0001a79d) midp_keyp_game_grid_pane_ParamLimits

0xdd90,	// (0x0001a79d) midp_keyp_game_grid_pane

0xddb0,	// (0x0001a7bd) midp_keyp_rocker_pane_ParamLimits

0xddb0,	// (0x0001a7bd) midp_keyp_rocker_pane

0xdddf,	// (0x0001a7ec) midp_keyp_sk_left_pane_ParamLimits

0xdddf,	// (0x0001a7ec) midp_keyp_sk_left_pane

0xde3b,	// (0x0001a848) midp_keyp_sk_right_pane_ParamLimits

0xde3b,	// (0x0001a848) midp_keyp_sk_right_pane

0x36c8,	// (0x000100d5) bg_button_pane_cp03

0xde97,	// (0x0001a8a4) midp_keyp_sk_left_pane_g1

0x36c8,	// (0x000100d5) bg_button_pane_cp04

0xde97,	// (0x0001a8a4) midp_keyp_sk_right_pane_g1

0xbc65,	// (0x00018672) midp_keyp_rocker_pane_g1

0xde9f,	// (0x0001a8ac) keyp_game_cell_pane_ParamLimits

0xde9f,	// (0x0001a8ac) keyp_game_cell_pane

0x36c8,	// (0x000100d5) bg_button_pane_cp02

0xdeb2,	// (0x0001a8bf) keyp_game_cell_pane_g1

0x4f16,	// (0x00011923) popup_fep_vkb2_window_ParamLimits

0x4f16,	// (0x00011923) popup_fep_vkb2_window

0x67b9,	// (0x000131c6) aid_size_cell_vkb2_ParamLimits

0x67b9,	// (0x000131c6) aid_size_cell_vkb2

0x6805,	// (0x00013212) popup_fep_vkb2_window_g1_ParamLimits

0x6805,	// (0x00013212) popup_fep_vkb2_window_g1

0x684d,	// (0x0001325a) vkb2_area_bottom_pane_ParamLimits

0x684d,	// (0x0001325a) vkb2_area_bottom_pane

0x68a1,	// (0x000132ae) vkb2_area_keypad_pane_ParamLimits

0x68a1,	// (0x000132ae) vkb2_area_keypad_pane

0x68e7,	// (0x000132f4) vkb2_area_top_pane_ParamLimits

0x68e7,	// (0x000132f4) vkb2_area_top_pane

0x6967,	// (0x00013374) vkb2_top_entry_pane_ParamLimits

0x6967,	// (0x00013374) vkb2_top_entry_pane

0x6991,	// (0x0001339e) vkb2_top_grid_left_pane_ParamLimits

0x6991,	// (0x0001339e) vkb2_top_grid_left_pane

0x69b0,	// (0x000133bd) vkb2_top_grid_right_pane_ParamLimits

0x69b0,	// (0x000133bd) vkb2_top_grid_right_pane

0x69cf,	// (0x000133dc) vkb2_cell_keypad_pane_ParamLimits

0x69cf,	// (0x000133dc) vkb2_cell_keypad_pane

0x6aa0,	// (0x000134ad) vkb2_area_bottom_grid_pane_ParamLimits

0x6aa0,	// (0x000134ad) vkb2_area_bottom_grid_pane

0x6ac6,	// (0x000134d3) vkb2_area_bottom_pane_g1_ParamLimits

0x6ac6,	// (0x000134d3) vkb2_area_bottom_pane_g1

0x6aea,	// (0x000134f7) vkb2_area_bottom_pane_g2_ParamLimits

0x6aea,	// (0x000134f7) vkb2_area_bottom_pane_g2

0x6b18,	// (0x00013525) vkb2_area_bottom_pane_g3_ParamLimits

0x6b18,	// (0x00013525) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0001c77d) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0001c77d) vkb2_area_bottom_pane_g

0x6b79,	// (0x00013586) vkb2_top_cell_left_pane_ParamLimits

0x6b79,	// (0x00013586) vkb2_top_cell_left_pane

0xdec3,	// (0x0001a8d0) vkb2_top_entry_pane_g1_ParamLimits

0xdec3,	// (0x0001a8d0) vkb2_top_entry_pane_g1

0xded1,	// (0x0001a8de) vkb2_top_entry_pane_t1_ParamLimits

0xded1,	// (0x0001a8de) vkb2_top_entry_pane_t1

0xdf03,	// (0x0001a910) vkb2_top_entry_pane_t2_ParamLimits

0xdf03,	// (0x0001a910) vkb2_top_entry_pane_t2

0xdf35,	// (0x0001a942) vkb2_top_entry_pane_t3_ParamLimits

0xdf35,	// (0x0001a942) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0001c784) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0001c784) vkb2_top_entry_pane_t

0x6bc6,	// (0x000135d3) vkb2_top_grid_right_pane_g1_ParamLimits

0x6bc6,	// (0x000135d3) vkb2_top_grid_right_pane_g1

0x6bdc,	// (0x000135e9) vkb2_top_grid_right_pane_g2_ParamLimits

0x6bdc,	// (0x000135e9) vkb2_top_grid_right_pane_g2

0x6bf4,	// (0x00013601) vkb2_top_grid_right_pane_g3_ParamLimits

0x6bf4,	// (0x00013601) vkb2_top_grid_right_pane_g3

0x6c0c,	// (0x00013619) vkb2_top_grid_right_pane_g4_ParamLimits

0x6c0c,	// (0x00013619) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0001c78b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0001c78b) vkb2_top_grid_right_pane_g

0x6c22,	// (0x0001362f) vkb2_top_cell_left_pane_g1

0x6c39,	// (0x00013646) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c39,	// (0x00013646) vkb2_cell_keypad_pane_g1

0xdf59,	// (0x0001a966) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf59,	// (0x0001a966) vkb2_cell_keypad_pane_t1

0x6c47,	// (0x00013654) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c47,	// (0x00013654) vkb2_cell_bottom_grid_pane

0x6c80,	// (0x0001368d) vkb2_cell_bottom_grid_pane_g1

0xdb0a,	// (0x0001a517) aid_call2_pane_cp02

0xdb12,	// (0x0001a51f) aid_call_pane_cp02

0xdb1a,	// (0x0001a527) clock_digital_number_pane_cp10

0xdb22,	// (0x0001a52f) clock_digital_number_pane_cp11

0xdb2a,	// (0x0001a537) clock_digital_number_pane_cp12

0xdb32,	// (0x0001a53f) clock_digital_number_pane_cp13

0xdb3a,	// (0x0001a547) clock_digital_separator_pane_cp10

0x8195,	// (0x00014ba2) popup_clock_digital_analogue_window_cp2_g1

0x8195,	// (0x00014ba2) popup_clock_digital_analogue_window_cp2_g2

0xdb42,	// (0x0001a54f) popup_clock_digital_analogue_window_cp2_g3

0x8195,	// (0x00014ba2) popup_clock_digital_analogue_window_cp2_g4

0xdb42,	// (0x0001a54f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x0001c740) popup_clock_digital_analogue_window_cp2_g

0xdb4a,	// (0x0001a557) popup_clock_digital_analogue_window_cp2_t1

0xdb58,	// (0x0001a565) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0001c74b) popup_clock_digital_analogue_window_cp2_t

0xbc65,	// (0x00018672) clock_digital_number_pane_cp10_g1

0xbc65,	// (0x00018672) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0001c527) clock_digital_number_pane_cp10_g

0xbc65,	// (0x00018672) clock_digital_separator_pane_cp10_g1

0xbc65,	// (0x00018672) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0001c527) clock_digital_separator_pane_cp10_g

0xd984,	// (0x0001a391) uniindi_top_pane_g3

0xd995,	// (0x0001a3a2) uniindi_top_pane_g4

0x6a5a,	// (0x00013467) vkb2_row_keypad_pane_ParamLimits

0x6a5a,	// (0x00013467) vkb2_row_keypad_pane

0x6c9c,	// (0x000136a9) vkb2_cell_t_keypad_pane_ParamLimits

0x6c9c,	// (0x000136a9) vkb2_cell_t_keypad_pane

0x6cac,	// (0x000136b9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6cac,	// (0x000136b9) vkb2_cell_t_keypad_pane_cp08

0x6cc1,	// (0x000136ce) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6cc1,	// (0x000136ce) vkb2_cell_t_keypad_pane_cp09

0x6cd5,	// (0x000136e2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6cd5,	// (0x000136e2) vkb2_cell_t_keypad_pane_cp01

0x6ce6,	// (0x000136f3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6ce6,	// (0x000136f3) vkb2_cell_t_keypad_pane_cp02

0x6cf7,	// (0x00013704) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6cf7,	// (0x00013704) vkb2_cell_t_keypad_pane_cp03

0x6d08,	// (0x00013715) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6d08,	// (0x00013715) vkb2_cell_t_keypad_pane_cp04

0x6d19,	// (0x00013726) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6d19,	// (0x00013726) vkb2_cell_t_keypad_pane_cp05

0x6d2a,	// (0x00013737) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6d2a,	// (0x00013737) vkb2_cell_t_keypad_pane_cp06

0x6d3d,	// (0x0001374a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d3d,	// (0x0001374a) vkb2_cell_t_keypad_pane_cp07

0x6d52,	// (0x0001375f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d52,	// (0x0001375f) vkb2_cell_t_keypad_pane_cp10

0x64ed,	// (0x00012efa) vkb2_cell_t_keypad_pane_g1

0xdf70,	// (0x0001a97d) vkb2_cell_t_keypad_pane_t1

0x4e07,	// (0x00011814) popup_grid_graphic2_window

0xdf82,	// (0x0001a98f) aid_size_cell_graphic2_ParamLimits

0xdf82,	// (0x0001a98f) aid_size_cell_graphic2

0xdfba,	// (0x0001a9c7) bg_popup_window_pane_cp21_ParamLimits

0xdfba,	// (0x0001a9c7) bg_popup_window_pane_cp21

0xdfc8,	// (0x0001a9d5) graphic2_pages_pane_ParamLimits

0xdfc8,	// (0x0001a9d5) graphic2_pages_pane

0xe00e,	// (0x0001aa1b) grid_graphic2_control_pane_ParamLimits

0xe00e,	// (0x0001aa1b) grid_graphic2_control_pane

0xe04c,	// (0x0001aa59) grid_graphic2_pane_ParamLimits

0xe04c,	// (0x0001aa59) grid_graphic2_pane

0xe0c2,	// (0x0001aacf) cell_graphic2_pane

0x4e07,	// (0x00011814) main_comp_mode_pane

0xd18c,	// (0x00019b99) list_ai3_gene_pane_ParamLimits

0xd5b7,	// (0x00019fc4) bg_popup_window_pane_cp19_ParamLimits

0xd5c3,	// (0x00019fd0) bg_touch_area_indi_pane_ParamLimits

0xd5c3,	// (0x00019fd0) bg_touch_area_indi_pane

0xd5d9,	// (0x00019fe6) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5d9,	// (0x00019fe6) bg_touch_area_indi_pane_cp01

0xd5ef,	// (0x00019ffc) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ef,	// (0x00019ffc) bg_touch_area_indi_pane_cp02

0xd609,	// (0x0001a016) bg_touch_area_indi_pane_cp03_ParamLimits

0xd609,	// (0x0001a016) bg_touch_area_indi_pane_cp03

0xd623,	// (0x0001a030) popup_slider_window_g1_ParamLimits

0xd63f,	// (0x0001a04c) popup_slider_window_g2_ParamLimits

0xd65b,	// (0x0001a068) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0001c6d5) popup_slider_window_g_ParamLimits

0xd6c1,	// (0x0001a0ce) popup_slider_window_t1_ParamLimits

0xd735,	// (0x0001a142) small_volume_slider_vertical_pane_ParamLimits

0xe0c2,	// (0x0001aacf) cell_graphic2_pane_ParamLimits

0xe116,	// (0x0001ab23) bg_button_pane_cp10_ParamLimits

0xe116,	// (0x0001ab23) bg_button_pane_cp10

0xe12b,	// (0x0001ab38) bg_button_pane_cp11_ParamLimits

0xe12b,	// (0x0001ab38) bg_button_pane_cp11

0xe140,	// (0x0001ab4d) graphic2_pages_pane_g1_ParamLimits

0xe140,	// (0x0001ab4d) graphic2_pages_pane_g1

0xe15b,	// (0x0001ab68) graphic2_pages_pane_g2_ParamLimits

0xe15b,	// (0x0001ab68) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x0001c799) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x0001c799) graphic2_pages_pane_g

0xe173,	// (0x0001ab80) graphic2_pages_pane_t1_ParamLimits

0xe173,	// (0x0001ab80) graphic2_pages_pane_t1

0xe189,	// (0x0001ab96) cell_graphic2_control_pane_ParamLimits

0xe189,	// (0x0001ab96) cell_graphic2_control_pane

0xe1a9,	// (0x0001abb6) cell_graphic2_pane_g1_ParamLimits

0xe1a9,	// (0x0001abb6) cell_graphic2_pane_g1

0xe1b6,	// (0x0001abc3) cell_graphic2_pane_g2_ParamLimits

0xe1b6,	// (0x0001abc3) cell_graphic2_pane_g2

0xe1c3,	// (0x0001abd0) cell_graphic2_pane_g3_ParamLimits

0xe1c3,	// (0x0001abd0) cell_graphic2_pane_g3

0xe1d0,	// (0x0001abdd) cell_graphic2_pane_g4_ParamLimits

0xe1d0,	// (0x0001abdd) cell_graphic2_pane_g4

0xe1dd,	// (0x0001abea) cell_graphic2_pane_g5_ParamLimits

0xe1dd,	// (0x0001abea) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x0001c79e) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x0001c79e) cell_graphic2_pane_g

0xe1f5,	// (0x0001ac02) cell_graphic2_pane_t1_ParamLimits

0xe1f5,	// (0x0001ac02) cell_graphic2_pane_t1

0x9231,	// (0x00015c3e) grid_highlight_pane_cp11_ParamLimits

0x9231,	// (0x00015c3e) grid_highlight_pane_cp11

0x3adb,	// (0x000104e8) bg_button_pane_cp05

0xe22b,	// (0x0001ac38) cell_graphic2_control_pane_g1

0xbc65,	// (0x00018672) bg_touch_area_indi_pane_g1

0xe253,	// (0x0001ac60) aid_cmod_rocker_key_size

0xe25d,	// (0x0001ac6a) aid_cmode_itu_key_size

0xe267,	// (0x0001ac74) main_cmode_video_pane

0xe271,	// (0x0001ac7e) main_comp_mode_itu_pane

0xe27d,	// (0x0001ac8a) main_comp_mode_rocker_pane

0xe289,	// (0x0001ac96) cell_cmode_rocker_pane_ParamLimits

0xe289,	// (0x0001ac96) cell_cmode_rocker_pane

0xe29d,	// (0x0001acaa) cell_cmode_itu_pane_ParamLimits

0xe29d,	// (0x0001acaa) cell_cmode_itu_pane

0x407d,	// (0x00010a8a) bg_button_pane_cp06_ParamLimits

0x407d,	// (0x00010a8a) bg_button_pane_cp06

0xbee0,	// (0x000188ed) cell_cmode_rocker_pane_g1_ParamLimits

0xbee0,	// (0x000188ed) cell_cmode_rocker_pane_g1

0xd7dc,	// (0x0001a1e9) cell_cmode_rocker_pane_g2_ParamLimits

0xd7dc,	// (0x0001a1e9) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x0001c7ae) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x0001c7ae) cell_cmode_rocker_pane_g

0x36c8,	// (0x000100d5) bg_button_pane_cp07

0xe2b4,	// (0x0001acc1) cell_cmode_itu_pane_g1

0xe2bd,	// (0x0001acca) cell_cmode_itu_pane_t1

0xe2cb,	// (0x0001acd8) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0001c7b3) cell_cmode_itu_pane_t

0xda09,	// (0x0001a416) aid_touch_ctrl_left

0xda11,	// (0x0001a41e) aid_touch_ctrl_right

0x36c8,	// (0x000100d5) compa_mode_pane

0xe2d9,	// (0x0001ace6) aid_cmod_rocker_key_size_cp

0xe2e3,	// (0x0001acf0) aid_cmode_itu_key_size_cp

0xe2ed,	// (0x0001acfa) compa_mode_pane_g1

0xe2f5,	// (0x0001ad02) compa_mode_pane_g2

0xe2fd,	// (0x0001ad0a) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x0001c7b8) compa_mode_pane_g

0xe305,	// (0x0001ad12) main_comp_mode_itu_pane_cp

0xe30d,	// (0x0001ad1a) main_comp_mode_rocker_pane_cp

0xe315,	// (0x0001ad22) cell_cmode_itu_pane_cp_ParamLimits

0xe315,	// (0x0001ad22) cell_cmode_itu_pane_cp

0xe32a,	// (0x0001ad37) cell_cmode_rocker_pane_cp_ParamLimits

0xe32a,	// (0x0001ad37) cell_cmode_rocker_pane_cp

0x407d,	// (0x00010a8a) bg_button_pane_cp06_cp_ParamLimits

0x407d,	// (0x00010a8a) bg_button_pane_cp06_cp

0xbee0,	// (0x000188ed) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbee0,	// (0x000188ed) cell_cmode_rocker_pane_g1_cp

0xbc65,	// (0x00018672) cell_cmode_rocker_pane_g2_cp

0x36c8,	// (0x000100d5) bg_button_pane_cp07_cp

0xe33c,	// (0x0001ad49) cell_cmode_itu_pane_g1_cp

0xe345,	// (0x0001ad52) cell_cmode_itu_pane_t1_cp

0xe345,	// (0x0001ad52) cell_cmode_itu_pane_t2_cp

0xa75f,	// (0x0001716c) settings_code_pane_cp2

0x3905,	// (0x00010312) bg_popup_window_pane_cp3_ParamLimits

0x3cef,	// (0x000106fc) heading_pane_cp3_ParamLimits

0x3cfe,	// (0x0001070b) listscroll_popup_graphic_pane_ParamLimits

0x6280,	// (0x00012c8d) fep_hwr_aid_pane_ParamLimits

0x6712,	// (0x0001311f) aid_touch_sctrl_top_ParamLimits

0x672d,	// (0x0001313a) sctrl_sk_top_pane_g1_ParamLimits

0x64ed,	// (0x00012efa) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x0001c6ee) sctrl_sk_top_pane_g_ParamLimits

0x673a,	// (0x00013147) sctrl_sk_top_pane_t1_ParamLimits

0x6712,	// (0x0001311f) aid_touch_sctrl_bottom_ParamLimits

0x673a,	// (0x00013147) sctrl_sk_bottom_pane_t1_ParamLimits

0xd94e,	// (0x0001a35b) aid_area_touch_clock

0x692d,	// (0x0001333a) aid_vkb2_area_top_pane_cell_ParamLimits

0x692d,	// (0x0001333a) aid_vkb2_area_top_pane_cell

0x6a7c,	// (0x00013489) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6a7c,	// (0x00013489) aid_vkb2_area_bottom_pane_cell

0xdebb,	// (0x0001a8c8) popup_char_count_window

0xe353,	// (0x0001ad60) popup_char_count_window_g1

0xe35c,	// (0x0001ad69) popup_char_count_window_g2

0xe365,	// (0x0001ad72) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x0001c7bf) popup_char_count_window_g

0xe36e,	// (0x0001ad7b) popup_char_count_window_t1

0x67e3,	// (0x000131f0) popup_fep_char_preview_window_ParamLimits

0x67e3,	// (0x000131f0) popup_fep_char_preview_window

0x694b,	// (0x00013358) vkb2_top_candi_pane_ParamLimits

0x694b,	// (0x00013358) vkb2_top_candi_pane

0xe37c,	// (0x0001ad89) cell_vkb2_top_candi_pane_ParamLimits

0xe37c,	// (0x0001ad89) cell_vkb2_top_candi_pane

0x6d67,	// (0x00013774) bg_popup_fep_char_preview_window_ParamLimits

0x6d67,	// (0x00013774) bg_popup_fep_char_preview_window

0x6d75,	// (0x00013782) popup_fep_char_preview_window_t1_ParamLimits

0x6d75,	// (0x00013782) popup_fep_char_preview_window_t1

0xe3ca,	// (0x0001add7) bg_popup_fep_char_preview_window_g1

0xe3d2,	// (0x0001addf) bg_popup_fep_char_preview_window_g2

0xe3da,	// (0x0001ade7) bg_popup_fep_char_preview_window_g3

0xe3e2,	// (0x0001adef) bg_popup_fep_char_preview_window_g4

0xe3ea,	// (0x0001adf7) bg_popup_fep_char_preview_window_g5

0xe3f2,	// (0x0001adff) bg_popup_fep_char_preview_window_g6

0xe3fa,	// (0x0001ae07) bg_popup_fep_char_preview_window_g7

0xe402,	// (0x0001ae0f) bg_popup_fep_char_preview_window_g8

0xe40a,	// (0x0001ae17) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x0001c7c6) bg_popup_fep_char_preview_window_g

0x64ed,	// (0x00012efa) cell_vkb2_top_candi_pane_g1_ParamLimits

0x64ed,	// (0x00012efa) cell_vkb2_top_candi_pane_g1

0x64fb,	// (0x00012f08) cell_vkb2_top_candi_pane_g2_ParamLimits

0x64fb,	// (0x00012f08) cell_vkb2_top_candi_pane_g2

0xc56d,	// (0x00018f7a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc56d,	// (0x00018f7a) cell_vkb2_top_candi_pane_g3

0x6db7,	// (0x000137c4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6db7,	// (0x000137c4) cell_vkb2_top_candi_pane_g4

0xc54c,	// (0x00018f59) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc54c,	// (0x00018f59) cell_vkb2_top_candi_pane_g5

0x6dd8,	// (0x000137e5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6dd8,	// (0x000137e5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x0001c7db) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x0001c7db) cell_vkb2_top_candi_pane_g

0x6de6,	// (0x000137f3) cell_vkb2_top_candi_pane_t1

0x60e0,	// (0x00012aed) aid_size_touch_slider_mark_ParamLimits

0x60e0,	// (0x00012aed) aid_size_touch_slider_mark

0xdffe,	// (0x0001aa0b) grid_graphic2_catg_pane_ParamLimits

0xdffe,	// (0x0001aa0b) grid_graphic2_catg_pane

0xe09c,	// (0x0001aaa9) popup_grid_graphic2_window_t1_ParamLimits

0xe09c,	// (0x0001aaa9) popup_grid_graphic2_window_t1

0xe0ae,	// (0x0001aabb) popup_grid_graphic2_window_t2_ParamLimits

0xe0ae,	// (0x0001aabb) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0001c794) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0001c794) popup_grid_graphic2_window_t

0x3adb,	// (0x000104e8) bg_button_pane_cp05_ParamLimits

0xe22b,	// (0x0001ac38) cell_graphic2_control_pane_g1_ParamLimits

0xe412,	// (0x0001ae1f) cell_graphic2_catg_pane_ParamLimits

0xe412,	// (0x0001ae1f) cell_graphic2_catg_pane

0x36c8,	// (0x000100d5) bg_button_pane_cp12

0xe424,	// (0x0001ae31) cell_graphic2_catg_pane_g1

0xd91a,	// (0x0001a327) cell_tb_ext_pane_t1_ParamLimits

0x6b99,	// (0x000135a6) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6b99,	// (0x000135a6) vkb2_top_cell_right_narrow_pane

0x6bb1,	// (0x000135be) vkb2_top_cell_right_wide_pane_ParamLimits

0x6bb1,	// (0x000135be) vkb2_top_cell_right_wide_pane

0x6272,	// (0x00012c7f) bg_vkb2_func_pane_ParamLimits

0x6272,	// (0x00012c7f) bg_vkb2_func_pane

0x6c22,	// (0x0001362f) vkb2_top_cell_left_pane_g1_ParamLimits

0x6272,	// (0x00012c7f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6272,	// (0x00012c7f) bg_vkb2_fuc_pane_cp03

0x6c80,	// (0x0001368d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9115,	// (0x00015b22) bg_vkb2_func_pane_g1

0x911d,	// (0x00015b2a) bg_vkb2_func_pane_g2

0x912d,	// (0x00015b3a) bg_vkb2_func_pane_g3

0x9125,	// (0x00015b32) bg_vkb2_func_pane_g4

0x9135,	// (0x00015b42) bg_vkb2_func_pane_g5

0x913d,	// (0x00015b4a) bg_vkb2_func_pane_g6

0x9145,	// (0x00015b52) bg_vkb2_func_pane_g7

0x914d,	// (0x00015b5a) bg_vkb2_func_pane_g8

0x910d,	// (0x00015b1a) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x0001c7e8) bg_vkb2_func_pane_g

0x6272,	// (0x00012c7f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6272,	// (0x00012c7f) bg_vkb2_fuc_pane_cp01

0x6c22,	// (0x0001362f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6c22,	// (0x0001362f) vkb2_top_cell_right_wide_pane_g1

0x6272,	// (0x00012c7f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6272,	// (0x00012c7f) bg_vkb2_fuc_pane_cp02

0x6e04,	// (0x00013811) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6e04,	// (0x00013811) vkb2_top_cell_right_narrow_pane_g1

0xd531,	// (0x00019f3e) aid_touch_area_decrease_ParamLimits

0xd531,	// (0x00019f3e) aid_touch_area_decrease

0xd555,	// (0x00019f62) aid_touch_area_increase_ParamLimits

0xd555,	// (0x00019f62) aid_touch_area_increase

0xd56d,	// (0x00019f7a) aid_touch_area_mute_ParamLimits

0xd56d,	// (0x00019f7a) aid_touch_area_mute

0xd589,	// (0x00019f96) aid_touch_area_slider_ParamLimits

0xd589,	// (0x00019f96) aid_touch_area_slider

0xd677,	// (0x0001a084) popup_slider_window_g4_ParamLimits

0xd677,	// (0x0001a084) popup_slider_window_g4

0xd68f,	// (0x0001a09c) popup_slider_window_g5_ParamLimits

0xd68f,	// (0x0001a09c) popup_slider_window_g5

0xd6b1,	// (0x0001a0be) popup_slider_window_g6_ParamLimits

0xd6b1,	// (0x0001a0be) popup_slider_window_g6

0xd6ef,	// (0x0001a0fc) popup_slider_window_t2_ParamLimits

0xd6ef,	// (0x0001a0fc) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0001c6e2) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0001c6e2) popup_slider_window_t

0xd707,	// (0x0001a114) slider_pane_ParamLimits

0xd707,	// (0x0001a114) slider_pane

0xe42d,	// (0x0001ae3a) slider_pane_g1_ParamLimits

0xe42d,	// (0x0001ae3a) slider_pane_g1

0xe441,	// (0x0001ae4e) slider_pane_g2_ParamLimits

0xe441,	// (0x0001ae4e) slider_pane_g2

0xe457,	// (0x0001ae64) slider_pane_g3_ParamLimits

0xe457,	// (0x0001ae64) slider_pane_g3

0x0003,

0xfdee,	// (0x0001c7fb) slider_pane_g_ParamLimits

0xfdee,	// (0x0001c7fb) slider_pane_g

0x5c66,	// (0x00012673) popup_tb_float_extension_window_ParamLimits

0x5c66,	// (0x00012673) popup_tb_float_extension_window

0xe483,	// (0x0001ae90) aid_size_cell_tb_float_ext

0x36c8,	// (0x000100d5) bg_popup_sub_window_cp28

0xe48f,	// (0x0001ae9c) grid_tb_float_ext_pane

0xe49b,	// (0x0001aea8) cell_tb_float_ext_pane_ParamLimits

0xe49b,	// (0x0001aea8) cell_tb_float_ext_pane

0xe4b7,	// (0x0001aec4) cell_tb_float_ext_pane_g1

0xe4c0,	// (0x0001aecd) grid_highlight_pane_cp12

0x63c7,	// (0x00012dd4) cell_last_hwr_side_pane_ParamLimits

0x63c7,	// (0x00012dd4) cell_last_hwr_side_pane

0xbc65,	// (0x00018672) cell_last_hwr_side_pane_g1

0xe4c9,	// (0x0001aed6) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0001c804) cell_last_hwr_side_pane_g

0x6b48,	// (0x00013555) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6b48,	// (0x00013555) vkb2_area_bottom_space_btn_pane

0x64ed,	// (0x00012efa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf70,	// (0x0001a97d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6de6,	// (0x000137f3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6e20,	// (0x0001382d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6e20,	// (0x0001382d) vkb2_area_bottom_space_btn_pane_g1

0x6e5a,	// (0x00013867) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6e5a,	// (0x00013867) vkb2_area_bottom_space_btn_pane_g2

0x6e90,	// (0x0001389d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6e90,	// (0x0001389d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0001c809) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0001c809) vkb2_area_bottom_space_btn_pane_g

0x6337,	// (0x00012d44) cel_fep_hwr_func_pane_ParamLimits

0x6337,	// (0x00012d44) cel_fep_hwr_func_pane

0x6373,	// (0x00012d80) cell_hwr_side_button_pane_ParamLimits

0x6373,	// (0x00012d80) cell_hwr_side_button_pane

0xd94e,	// (0x0001a35b) aid_area_touch_clock_ParamLimits

0x3adb,	// (0x000104e8) bg_uniindi_top_pane_ParamLimits

0xd962,	// (0x0001a36f) uniindi_top_pane_g1_ParamLimits

0xd978,	// (0x0001a385) uniindi_top_pane_g2_ParamLimits

0xd984,	// (0x0001a391) uniindi_top_pane_g3_ParamLimits

0xd995,	// (0x0001a3a2) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x0001c71a) uniindi_top_pane_g_ParamLimits

0xd9a2,	// (0x0001a3af) uniindi_top_pane_t1_ParamLimits

0x3adb,	// (0x000104e8) bg_vkb2_func_pane_cp01_ParamLimits

0x3adb,	// (0x000104e8) bg_vkb2_func_pane_cp01

0xe4d2,	// (0x0001aedf) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d2,	// (0x0001aedf) cel_fep_hwr_func_pane_g1

0x3adb,	// (0x000104e8) bg_vkb2_func_pane_cp02_ParamLimits

0x3adb,	// (0x000104e8) bg_vkb2_func_pane_cp02

0xe4d2,	// (0x0001aedf) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d2,	// (0x0001aedf) cell_hwr_side_button_pane_g1

0x8f58,	// (0x00015965) status_pane_g4_ParamLimits

0x8f58,	// (0x00015965) status_pane_g4

0x8f72,	// (0x0001597f) status_pane_t1

0xba18,	// (0x00018425) form2_midp_gauge_slider_cont_pane

0xba20,	// (0x0001842d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba32,	// (0x0001843f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba44,	// (0x00018451) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0001c4da) form2_midp_gauge_slider_pane_t_ParamLimits

0xba56,	// (0x00018463) form2_midp_slider_pane_ParamLimits

0x67ab,	// (0x000131b8) aid_size_cell_func_vkb2_ParamLimits

0x67ab,	// (0x000131b8) aid_size_cell_func_vkb2

0xe46f,	// (0x0001ae7c) slider_pane_g4_ParamLimits

0xe46f,	// (0x0001ae7c) slider_pane_g4

0x6eda,	// (0x000138e7) form2_midp_gauge_slider_pane_t2_cp01

0x6ee8,	// (0x000138f5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6ee8,	// (0x000138f5) form2_midp_gauge_slider_pane_t3_cp01

0x6f05,	// (0x00013912) form2_midp_slider_pane_cp01

0x36c8,	// (0x000100d5) navi_smil_pane

0xe50b,	// (0x0001af18) navi_smil_pane_g1

0xe513,	// (0x0001af20) navi_smil_pane_t1

0xe4e0,	// (0x0001aeed) form2_midp_slider_pane_g1

0xe4e9,	// (0x0001aef6) form2_midp_slider_pane_g2

0xe4f1,	// (0x0001aefe) form2_midp_slider_pane_g3

0xe4e0,	// (0x0001aeed) form2_midp_slider_pane_g4

0xe4f9,	// (0x0001af06) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0001c812) form2_midp_slider_pane_g

0x6eca,	// (0x000138d7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6eca,	// (0x000138d7) vkb2_area_bottom_space_btn_pane_g4

0x8d77,	// (0x00015784) lc0_navi_pane_ParamLimits

0x8d77,	// (0x00015784) lc0_navi_pane

0x8df3,	// (0x00015800) lc0_stat_indi_pane_ParamLimits

0x8df3,	// (0x00015800) lc0_stat_indi_pane

0x8e0a,	// (0x00015817) ls0_title_pane_ParamLimits

0x8e0a,	// (0x00015817) ls0_title_pane

0x407d,	// (0x00010a8a) bg_popup_sub_pane_cp14_ParamLimits

0xd935,	// (0x0001a342) list_uniindi_pane_ParamLimits

0xd941,	// (0x0001a34e) uniindi_top_pane_ParamLimits

0xd9e1,	// (0x0001a3ee) list_single_uniindi_pane_g1_ParamLimits

0xd9f4,	// (0x0001a401) list_single_uniindi_pane_t1_ParamLimits

0x6f0e,	// (0x0001391b) lc0_stat_clock_pane_ParamLimits

0x6f0e,	// (0x0001391b) lc0_stat_clock_pane

0xe521,	// (0x0001af2e) lc0_stat_indi_pane_g1_ParamLimits

0xe521,	// (0x0001af2e) lc0_stat_indi_pane_g1

0xe52e,	// (0x0001af3b) lc0_stat_indi_pane_g2_ParamLimits

0xe52e,	// (0x0001af3b) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x0001c81d) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x0001c81d) lc0_stat_indi_pane_g

0x6f1b,	// (0x00013928) lc0_uni_indicator_pane_ParamLimits

0x6f1b,	// (0x00013928) lc0_uni_indicator_pane

0xe53b,	// (0x0001af48) ls0_title_pane_g1_ParamLimits

0xe53b,	// (0x0001af48) ls0_title_pane_g1

0xe54f,	// (0x0001af5c) ls0_title_pane_t1_ParamLimits

0xe54f,	// (0x0001af5c) ls0_title_pane_t1

0x6f28,	// (0x00013935) lc0_uni_indicator_pane_g1_ParamLimits

0x6f28,	// (0x00013935) lc0_uni_indicator_pane_g1

0xe585,	// (0x0001af92) lc0_stat_clock_pane_t1

0x4e07,	// (0x00011814) main_ai5_pane

0xe593,	// (0x0001afa0) ai5_sk_pane_ParamLimits

0xe593,	// (0x0001afa0) ai5_sk_pane

0xe5a0,	// (0x0001afad) cell_ai5_widget_pane_ParamLimits

0xe5a0,	// (0x0001afad) cell_ai5_widget_pane

0xe643,	// (0x0001b050) aid_size_cell_widget_grid

0xe651,	// (0x0001b05e) bg_ai5_widget_pane_ParamLimits

0xe651,	// (0x0001b05e) bg_ai5_widget_pane

0xe6cd,	// (0x0001b0da) cell_ai5_widget_pane_g2

0xe6e1,	// (0x0001b0ee) cell_ai5_widget_pane_g3

0xe6fb,	// (0x0001b108) cell_ai5_widget_pane_g4

0xe70b,	// (0x0001b118) cell_ai5_widget_pane_g5

0xe71b,	// (0x0001b128) cell_ai5_widget_pane_g6

0xe727,	// (0x0001b134) cell_ai5_widget_pane_g7

0xe793,	// (0x0001b1a0) cell_ai5_widget_pane_t1_ParamLimits

0xe793,	// (0x0001b1a0) cell_ai5_widget_pane_t1

0xe7b0,	// (0x0001b1bd) cell_ai5_widget_pane_t2_ParamLimits

0xe7b0,	// (0x0001b1bd) cell_ai5_widget_pane_t2

0xe7c8,	// (0x0001b1d5) cell_ai5_widget_pane_t3_ParamLimits

0xe7c8,	// (0x0001b1d5) cell_ai5_widget_pane_t3

0xe7e0,	// (0x0001b1ed) cell_ai5_widget_pane_t4_ParamLimits

0xe7e0,	// (0x0001b1ed) cell_ai5_widget_pane_t4

0xe806,	// (0x0001b213) cell_ai5_widget_pane_t5_ParamLimits

0xe806,	// (0x0001b213) cell_ai5_widget_pane_t5

0xe826,	// (0x0001b233) cell_ai5_widget_pane_t6_ParamLimits

0xe826,	// (0x0001b233) cell_ai5_widget_pane_t6

0xe838,	// (0x0001b245) cell_ai5_widget_pane_t7_ParamLimits

0xe838,	// (0x0001b245) cell_ai5_widget_pane_t7

0xe857,	// (0x0001b264) cell_ai5_widget_pane_t8_ParamLimits

0xe857,	// (0x0001b264) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x0001c83d) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x0001c83d) cell_ai5_widget_pane_t

0xe8db,	// (0x0001b2e8) grid_ai5_widget_pane

0x407d,	// (0x00010a8a) highlight_cell_ai5_widget_pane_ParamLimits

0x407d,	// (0x00010a8a) highlight_cell_ai5_widget_pane

0xe8e9,	// (0x0001b2f6) ai5_sk_left_pane

0xe8f3,	// (0x0001b300) ai5_sk_middle_pane

0xe8fd,	// (0x0001b30a) ai5_sk_right_pane

0xe907,	// (0x0001b314) bg_ai5_widget_pane_g1_ParamLimits

0xe907,	// (0x0001b314) bg_ai5_widget_pane_g1

0xe913,	// (0x0001b320) bg_ai5_widget_pane_g2_ParamLimits

0xe913,	// (0x0001b320) bg_ai5_widget_pane_g2

0xe91f,	// (0x0001b32c) bg_ai5_widget_pane_g3_ParamLimits

0xe91f,	// (0x0001b32c) bg_ai5_widget_pane_g3

0xe92b,	// (0x0001b338) bg_ai5_widget_pane_g4_ParamLimits

0xe92b,	// (0x0001b338) bg_ai5_widget_pane_g4

0xe937,	// (0x0001b344) bg_ai5_widget_pane_g5_ParamLimits

0xe937,	// (0x0001b344) bg_ai5_widget_pane_g5

0xe943,	// (0x0001b350) bg_ai5_widget_pane_g6_ParamLimits

0xe943,	// (0x0001b350) bg_ai5_widget_pane_g6

0xe94f,	// (0x0001b35c) bg_ai5_widget_pane_g7_ParamLimits

0xe94f,	// (0x0001b35c) bg_ai5_widget_pane_g7

0xe95b,	// (0x0001b368) bg_ai5_widget_pane_g8_ParamLimits

0xe95b,	// (0x0001b368) bg_ai5_widget_pane_g8

0xe967,	// (0x0001b374) bg_ai5_widget_pane_g9_ParamLimits

0xe967,	// (0x0001b374) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0001c856) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0001c856) bg_ai5_widget_pane_g

0xe99f,	// (0x0001b3ac) cell_shortcut_ai5_widget_pane_ParamLimits

0xe99f,	// (0x0001b3ac) cell_shortcut_ai5_widget_pane

0x8866,	// (0x00015273) bg_cell_shortcut_ai5_widget_pane

0xe9b2,	// (0x0001b3bf) cell_grid_ai5_widget_pane_g1

0x8866,	// (0x00015273) highlight_cell_shortcut_ai5_widget_pane

0x9115,	// (0x00015b22) ai5_sk_left_pane_g1

0xe9bb,	// (0x0001b3c8) ai5_sk_left_pane_g2

0xe9c3,	// (0x0001b3d0) ai5_sk_left_pane_g3

0xe9cb,	// (0x0001b3d8) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0001c869) ai5_sk_left_pane_g

0xe9d3,	// (0x0001b3e0) ai5_sk_left_pane_t1

0x911d,	// (0x00015b2a) ai5_sk_right_pane_g1

0xe9e1,	// (0x0001b3ee) ai5_sk_right_pane_g2

0xe9e9,	// (0x0001b3f6) ai5_sk_right_pane_g3

0xe9f1,	// (0x0001b3fe) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0001c872) ai5_sk_right_pane_g

0xe9f9,	// (0x0001b406) ai5_sk_right_pane_t1

0x911d,	// (0x00015b2a) ai5_sk_middle_pane_g1

0x9115,	// (0x00015b22) ai5_sk_middle_pane_g2

0x9135,	// (0x00015b42) ai5_sk_middle_pane_g3

0xe9e9,	// (0x0001b3f6) ai5_sk_middle_pane_g4

0xe9c3,	// (0x0001b3d0) ai5_sk_middle_pane_g5

0xea07,	// (0x0001b414) ai5_sk_middle_pane_g6

0xea0f,	// (0x0001b41c) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0001c87b) ai5_sk_middle_pane_g

0x8bfd,	// (0x0001560a) aid_touch_area_size_lc0_ParamLimits

0x8bfd,	// (0x0001560a) aid_touch_area_size_lc0

0x651c,	// (0x00012f29) cell_hwr_candidate_pane_t1_ParamLimits

0x8c1b,	// (0x00015628) aid_touch_navi_pane

0x8f0a,	// (0x00015917) status_dt_navi_pane_ParamLimits

0x8f0a,	// (0x00015917) status_dt_navi_pane

0x8f17,	// (0x00015924) status_dt_sta_pane_ParamLimits

0x8f17,	// (0x00015924) status_dt_sta_pane

0xea17,	// (0x0001b424) dt_sta_controll_pane

0xea24,	// (0x0001b431) dt_sta_indi_pane

0xea35,	// (0x0001b442) dt_sta_title_pane

0x3adb,	// (0x000104e8) bg_dt_sta_indi_pane_ParamLimits

0x3adb,	// (0x000104e8) bg_dt_sta_indi_pane

0xea48,	// (0x0001b455) dt_sta_battery_pane

0xea50,	// (0x0001b45d) dt_sta_indi_pane_g1

0xea59,	// (0x0001b466) dt_sta_indi_pane_g2

0xea62,	// (0x0001b46f) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0001c88a) dt_sta_indi_pane_g

0xea6b,	// (0x0001b478) dt_sta_signal_pane

0x407d,	// (0x00010a8a) bg_dt_sta_title_pane_ParamLimits

0x407d,	// (0x00010a8a) bg_dt_sta_title_pane

0xea74,	// (0x0001b481) dt_sta_title_pane_g1

0xea7c,	// (0x0001b489) dt_sta_title_pane_t1_ParamLimits

0xea7c,	// (0x0001b489) dt_sta_title_pane_t1

0x36c8,	// (0x000100d5) bg_dt_sta_control_pane

0xea91,	// (0x0001b49e) dt_sta_controll_pane_g1

0xea9a,	// (0x0001b4a7) bg_dt_sta_title_pane_g1

0xeaa3,	// (0x0001b4b0) bg_dt_sta_title_pane_g2

0xeaac,	// (0x0001b4b9) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0001c891) bg_dt_sta_title_pane_g

0xbc65,	// (0x00018672) bg_dt_sta_indi_pane_g1

0xeab5,	// (0x0001b4c2) dt_sta_signal_pane_g1

0xeabd,	// (0x0001b4ca) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0001c898) dt_sta_signal_pane_g

0xeac5,	// (0x0001b4d2) dt_sta_battery_pane_g1

0xeace,	// (0x0001b4db) dt_sta_battery_pane_t1

0xbc65,	// (0x00018672) bg_dt_sta_control_pane_g1

0x82bc,	// (0x00014cc9) fep_china_uni_eep_pane

0x82c4,	// (0x00014cd1) fep_china_uni_entry_pane_ParamLimits

0x82d4,	// (0x00014ce1) popup_fep_china_uni_window_g1_ParamLimits

0x82e4,	// (0x00014cf1) popup_fep_china_uni_window_g2_ParamLimits

0x82e4,	// (0x00014cf1) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001c100) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001c100) popup_fep_china_uni_window_g

0xeadd,	// (0x0001b4ea) fep_china_uni_eep_pane_g1

0xeae5,	// (0x0001b4f2) fep_china_uni_eep_pane_t1

0xe502,	// (0x0001af0f) aid_touch_area_size_smil_player

0x8d6f,	// (0x0001577c) lc0_clock_pane

0x8f66,	// (0x00015973) status_pane_g5_ParamLimits

0x8f66,	// (0x00015973) status_pane_g5

0x58eb,	// (0x000122f8) popup_keymap_window

0x8f2c,	// (0x00015939) status_icon_pane

0xe6e1,	// (0x0001b0ee) cell_ai5_widget_pane_g3_ParamLimits

0xe6fb,	// (0x0001b108) cell_ai5_widget_pane_g4_ParamLimits

0xe70b,	// (0x0001b118) cell_ai5_widget_pane_g5_ParamLimits

0xe733,	// (0x0001b140) cell_ai5_widget_pane_g8_ParamLimits

0xe733,	// (0x0001b140) cell_ai5_widget_pane_g8

0xe747,	// (0x0001b154) cell_ai5_widget_pane_g9_ParamLimits

0xe747,	// (0x0001b154) cell_ai5_widget_pane_g9

0xe75b,	// (0x0001b168) cell_ai5_widget_pane_g10_ParamLimits

0xe75b,	// (0x0001b168) cell_ai5_widget_pane_g10

0xeaf4,	// (0x0001b501) status_icon_pane_g1

0x36c8,	// (0x000100d5) bg_popup_sub_pane_cp13

0xeafc,	// (0x0001b509) popup_keymap_window_t1

0x8b3e,	// (0x0001554b) control_pane_g6_ParamLimits

0x8b3e,	// (0x0001554b) control_pane_g6

0x8b4b,	// (0x00015558) control_pane_g7_ParamLimits

0x8b4b,	// (0x00015558) control_pane_g7

0x8b58,	// (0x00015565) control_pane_g8_ParamLimits

0x8b58,	// (0x00015565) control_pane_g8

0xea17,	// (0x0001b424) dt_sta_controll_pane_ParamLimits

0xea24,	// (0x0001b431) dt_sta_indi_pane_ParamLimits

0xea35,	// (0x0001b442) dt_sta_title_pane_ParamLimits

0x3f2c,	// (0x00010939) aid_size_touch_scroll_bar_cale

0x4ee4,	// (0x000118f1) popup_discreet_window_ParamLimits

0x4ee4,	// (0x000118f1) popup_discreet_window

0x4f72,	// (0x0001197f) popup_sk_window

0x9852,	// (0x0001625f) bg_popup_sub_pane_cp28_ParamLimits

0x9852,	// (0x0001625f) bg_popup_sub_pane_cp28

0xeb0a,	// (0x0001b517) popup_discreet_window_g1_ParamLimits

0xeb0a,	// (0x0001b517) popup_discreet_window_g1

0xeb2a,	// (0x0001b537) popup_discreet_window_t1_ParamLimits

0xeb2a,	// (0x0001b537) popup_discreet_window_t1

0xeb48,	// (0x0001b555) popup_discreet_window_t2_ParamLimits

0xeb48,	// (0x0001b555) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0001c89d) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0001c89d) popup_discreet_window_t

0x6f3b,	// (0x00013948) popup_sk_window_g1

0x6f45,	// (0x00013952) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0001c8a4) popup_sk_window_g

0x6f4d,	// (0x0001395a) popup_sk_window_t1

0x6f5b,	// (0x00013968) popup_sk_window_t1_copy1

0xe6cd,	// (0x0001b0da) cell_ai5_widget_pane_g2_ParamLimits

0xe869,	// (0x0001b276) cell_ai5_widget_pane_t9_ParamLimits

0xe869,	// (0x0001b276) cell_ai5_widget_pane_t9

0x36c8,	// (0x000100d5) main_fep_fshwr2_pane

0x6f69,	// (0x00013976) aid_fshwr2_btn_pane

0x6f79,	// (0x00013986) aid_fshwr2_syb_pane

0x6f8d,	// (0x0001399a) aid_fshwr2_txt_pane

0x6f9d,	// (0x000139aa) fshwr2_func_candi_pane

0x6fbd,	// (0x000139ca) fshwr2_hwr_syb_pane

0x6fd3,	// (0x000139e0) fshwr2_icf_pane

0x4e07,	// (0x00011814) fshwr2_icf_bg_pane

0x7007,	// (0x00013a14) fshwr2_icf_pane_t1_ParamLimits

0x7007,	// (0x00013a14) fshwr2_icf_pane_t1

0x8195,	// (0x00014ba2) fshwr2_func_candi_pane_g1

0xeb9a,	// (0x0001b5a7) fshwr2_func_candi_row_pane_ParamLimits

0xeb9a,	// (0x0001b5a7) fshwr2_func_candi_row_pane

0x701f,	// (0x00013a2c) cell_fshwr2_syb_pane_ParamLimits

0x701f,	// (0x00013a2c) cell_fshwr2_syb_pane

0x7040,	// (0x00013a4d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7040,	// (0x00013a4d) fshwr2_hwr_syb_pane_g1

0x4e07,	// (0x00011814) bg_popup_call_pane_cp01

0x704e,	// (0x00013a5b) fshwr2_func_candi_cell_pane_ParamLimits

0x704e,	// (0x00013a5b) fshwr2_func_candi_cell_pane

0x9ec9,	// (0x000168d6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9ec9,	// (0x000168d6) fshwr2_func_candi_cell_bg_pane

0x709f,	// (0x00013aac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x709f,	// (0x00013aac) fshwr2_func_candi_cell_pane_g1

0x70ca,	// (0x00013ad7) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x70ca,	// (0x00013ad7) fshwr2_func_candi_cell_pane_t1

0x4e07,	// (0x00011814) bg_button_pane_cp08

0x8b95,	// (0x000155a2) cell_fshwr2_syb_bg_pane

0x70dd,	// (0x00013aea) cell_fshwr2_syb_bg_pane_g1

0x70f1,	// (0x00013afe) cell_fshwr2_syb_bg_pane_t1

0x407d,	// (0x00010a8a) main_tmo_pane

0xa376,	// (0x00016d83) uni_indicator_pane_g1_ParamLimits

0xa38c,	// (0x00016d99) uni_indicator_pane_g2_ParamLimits

0xa3a2,	// (0x00016daf) uni_indicator_pane_g3_ParamLimits

0xa3b5,	// (0x00016dc2) uni_indicator_pane_g4_ParamLimits

0xa3b5,	// (0x00016dc2) uni_indicator_pane_g4

0xa3c9,	// (0x00016dd6) uni_indicator_pane_g5_ParamLimits

0xa3c9,	// (0x00016dd6) uni_indicator_pane_g5

0xa3c9,	// (0x00016dd6) uni_indicator_pane_g6_ParamLimits

0xa3c9,	// (0x00016dd6) uni_indicator_pane_g6

0xf8f7,	// (0x0001c304) uni_indicator_pane_g_ParamLimits

0xd501,	// (0x00019f0e) popup_tmo_note_window_ParamLimits

0xd501,	// (0x00019f0e) popup_tmo_note_window

0x678d,	// (0x0001319a) fshwr2_bg_pane

0x70bb,	// (0x00013ac8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x70bb,	// (0x00013ac8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0001c8a9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0001c8a9) fshwr2_func_candi_cell_pane_g

0x64d5,	// (0x00012ee2) bg_popup_window_pane_cp01

0x7107,	// (0x00013b14) bg_popup_window_pane_g1_cp01

0xebbd,	// (0x0001b5ca) bg_popup_window_pane_cp22_ParamLimits

0xebbd,	// (0x0001b5ca) bg_popup_window_pane_cp22

0xebcb,	// (0x0001b5d8) listscroll_tmo_link_pane_ParamLimits

0xebcb,	// (0x0001b5d8) listscroll_tmo_link_pane

0xec0b,	// (0x0001b618) popup_tmo_note_window_g1_ParamLimits

0xec0b,	// (0x0001b618) popup_tmo_note_window_g1

0xec18,	// (0x0001b625) tmo_note_info_pane_ParamLimits

0xec18,	// (0x0001b625) tmo_note_info_pane

0xec32,	// (0x0001b63f) list_tmo_note_info_pane_g1_ParamLimits

0xec32,	// (0x0001b63f) list_tmo_note_info_pane_g1

0xec49,	// (0x0001b656) list_tmo_note_info_pane_g2_ParamLimits

0xec49,	// (0x0001b656) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0001c8ae) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0001c8ae) list_tmo_note_info_pane_g

0xec65,	// (0x0001b672) list_tmo_note_info_text_pane_ParamLimits

0xec65,	// (0x0001b672) list_tmo_note_info_text_pane

0xecea,	// (0x0001b6f7) list_tmo_link_pane

0xecf7,	// (0x0001b704) scroll_pane_cp20

0xed04,	// (0x0001b711) list_single_tmo_link_pane_ParamLimits

0xed04,	// (0x0001b711) list_single_tmo_link_pane

0xed14,	// (0x0001b721) list_single_tmo_link_pane_t1

0xed22,	// (0x0001b72f) list_tmo_note_info_text_pane_t1_ParamLimits

0xed22,	// (0x0001b72f) list_tmo_note_info_text_pane_t1

0x7c96,	// (0x000146a3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7c96,	// (0x000146a3) aid_size_touch_scroll_bar_cp01

0x7bc5,	// (0x000145d2) aid_size_touch_slider_marker

0x4f5a,	// (0x00011967) popup_settings_window_ParamLimits

0x4f5a,	// (0x00011967) popup_settings_window

0x8bc9,	// (0x000155d6) popup_candi_list_indi_window

0x8c1b,	// (0x00015628) aid_touch_navi_pane_ParamLimits

0x66e6,	// (0x000130f3) rs_clock_indi_pane

0x66ef,	// (0x000130fc) sctrl_sk_bottom_pane_ParamLimits

0x6700,	// (0x0001310d) sctrl_sk_top_pane_ParamLimits

0x67fd,	// (0x0001320a) popup_fep_tooltip_window

0xe643,	// (0x0001b050) aid_size_cell_widget_grid_ParamLimits

0xe6b8,	// (0x0001b0c5) cell_ai5_widget_pane_g1_ParamLimits

0xe6b8,	// (0x0001b0c5) cell_ai5_widget_pane_g1

0xe71b,	// (0x0001b128) cell_ai5_widget_pane_g6_ParamLimits

0xe727,	// (0x0001b134) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0001c822) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0001c822) cell_ai5_widget_pane_g

0xe898,	// (0x0001b2a5) cell_ai5_widget_pane_t10_ParamLimits

0xe898,	// (0x0001b2a5) cell_ai5_widget_pane_t10

0xe8db,	// (0x0001b2e8) grid_ai5_widget_pane_ParamLimits

0xe973,	// (0x0001b380) cell_contacts_ai5_widget_pane_ParamLimits

0xe973,	// (0x0001b380) cell_contacts_ai5_widget_pane

0xeb5d,	// (0x0001b56a) popup_discreet_window_t3_ParamLimits

0xeb5d,	// (0x0001b56a) popup_discreet_window_t3

0x6fef,	// (0x000139fc) popup_fshwr2_char_preview_window_ParamLimits

0x6fef,	// (0x000139fc) popup_fshwr2_char_preview_window

0xec83,	// (0x0001b690) tmo_note_info_pane_t1

0xec98,	// (0x0001b6a5) tmo_note_info_pane_t2

0xecb1,	// (0x0001b6be) tmo_note_info_pane_t3

0xecc6,	// (0x0001b6d3) tmo_note_info_pane_t4

0xecd8,	// (0x0001b6e5) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0001c8b3) tmo_note_info_pane_t

0xecea,	// (0x0001b6f7) list_tmo_link_pane_ParamLimits

0xecf7,	// (0x0001b704) scroll_pane_cp20_ParamLimits

0x4e07,	// (0x00011814) bg_popup_fep_char_preview_window_cp01

0xed3b,	// (0x0001b748) popup_fshwr2_char_preview_window_t1

0xed49,	// (0x0001b756) popup_candi_list_indi_window_g1

0xed52,	// (0x0001b75f) bg_cell_contacts_ai5_widget_pane

0xed5e,	// (0x0001b76b) cell_contacts_ai5_widget_pane_g1

0xed73,	// (0x0001b780) cell_contacts_ai5_widget_pane_g2

0xed7f,	// (0x0001b78c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0001c8be) cell_contacts_ai5_widget_pane_g

0xed8b,	// (0x0001b798) cell_contacts_ai5_widget_pane_t1

0x407d,	// (0x00010a8a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee02,	// (0x0001b80f) settings_container_pane

0x8866,	// (0x00015273) listscroll_set_pane_copy1

0xb060,	// (0x00017a6d) scroll_pane_cp121_copy1

0xee0e,	// (0x0001b81b) set_content_pane_copy1

0xee16,	// (0x0001b823) aid_height_set_list_copy1_ParamLimits

0xee16,	// (0x0001b823) aid_height_set_list_copy1

0xa5f1,	// (0x00016ffe) aid_size_parent_copy1_ParamLimits

0xa5f1,	// (0x00016ffe) aid_size_parent_copy1

0xee22,	// (0x0001b82f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee22,	// (0x0001b82f) button_value_adjust_pane_cp6_copy1

0x8b95,	// (0x000155a2) list_highlight_pane_cp2_copy1_ParamLimits

0x8b95,	// (0x000155a2) list_highlight_pane_cp2_copy1

0xee36,	// (0x0001b843) list_set_pane_copy1_ParamLimits

0xee36,	// (0x0001b843) list_set_pane_copy1

0xed9d,	// (0x0001b7aa) main_pane_set_t1_copy1_ParamLimits

0xed9d,	// (0x0001b7aa) main_pane_set_t1_copy1

0xedd7,	// (0x0001b7e4) main_pane_set_t2_copy1_ParamLimits

0xedd7,	// (0x0001b7e4) main_pane_set_t2_copy1

0xeef7,	// (0x0001b904) main_pane_set_t3_copy1

0xef05,	// (0x0001b912) main_pane_set_t4_copy1

0xedf6,	// (0x0001b803) set_content_pane_g1_copy1_ParamLimits

0xedf6,	// (0x0001b803) set_content_pane_g1_copy1

0xef13,	// (0x0001b920) setting_code_pane_copy1

0xef1b,	// (0x0001b928) setting_slider_graphic_pane_copy1

0xef1b,	// (0x0001b928) setting_slider_pane_copy1

0xef23,	// (0x0001b930) setting_text_pane_copy1

0xef23,	// (0x0001b930) setting_volume_pane_copy1

0xef13,	// (0x0001b920) settings_code_pane_cp2_copy1

0xef2b,	// (0x0001b938) settings_code_pane_cp_copy1_ParamLimits

0xef2b,	// (0x0001b938) settings_code_pane_cp_copy1

0x7110,	// (0x00013b1d) volume_set_pane_copy1

0xef3f,	// (0x0001b94c) volume_set_pane_g10_copy1

0xef4b,	// (0x0001b958) volume_set_pane_g1_copy1

0xef55,	// (0x0001b962) volume_set_pane_g2_copy1

0xef5f,	// (0x0001b96c) volume_set_pane_g3_copy1

0xef69,	// (0x0001b976) volume_set_pane_g4_copy1

0xef73,	// (0x0001b980) volume_set_pane_g5_copy1

0xef7d,	// (0x0001b98a) volume_set_pane_g6_copy1

0xef87,	// (0x0001b994) volume_set_pane_g7_copy1

0xef91,	// (0x0001b99e) volume_set_pane_g8_copy1

0xef9b,	// (0x0001b9a8) volume_set_pane_g9_copy1

0x3905,	// (0x00010312) bg_set_opt_pane_cp_copy1_ParamLimits

0x3905,	// (0x00010312) bg_set_opt_pane_cp_copy1

0x711c,	// (0x00013b29) setting_slider_pane_t1_copy1_ParamLimits

0x711c,	// (0x00013b29) setting_slider_pane_t1_copy1

0x713b,	// (0x00013b48) setting_slider_pane_t2_copy1_ParamLimits

0x713b,	// (0x00013b48) setting_slider_pane_t2_copy1

0x7155,	// (0x00013b62) setting_slider_pane_t3_copy1_ParamLimits

0x7155,	// (0x00013b62) setting_slider_pane_t3_copy1

0x716d,	// (0x00013b7a) slider_set_pane_copy1_ParamLimits

0x716d,	// (0x00013b7a) slider_set_pane_copy1

0x4138,	// (0x00010b45) set_opt_bg_pane_g1_copy2

0x4140,	// (0x00010b4d) set_opt_bg_pane_g2_copy2

0xefa7,	// (0x0001b9b4) set_opt_bg_pane_g3_copy2

0x4150,	// (0x00010b5d) set_opt_bg_pane_g4_copy2

0x4158,	// (0x00010b65) set_opt_bg_pane_g5_copy2

0x4160,	// (0x00010b6d) set_opt_bg_pane_g6_copy2

0xefb1,	// (0x0001b9be) set_opt_bg_pane_g7_copy2

0xefbb,	// (0x0001b9c8) set_opt_bg_pane_g8_copy2

0xefc5,	// (0x0001b9d2) set_opt_bg_pane_g9_copy2

0x7183,	// (0x00013b90) aid_size_touch_slider_mark_copy1_ParamLimits

0x7183,	// (0x00013b90) aid_size_touch_slider_mark_copy1

0xefcf,	// (0x0001b9dc) slider_set_pane_g1_copy1

0x7197,	// (0x00013ba4) slider_set_pane_g2_copy1

0x6100,	// (0x00012b0d) slider_set_pane_g3_copy1_ParamLimits

0x6100,	// (0x00012b0d) slider_set_pane_g3_copy1

0x6114,	// (0x00012b21) slider_set_pane_g4_copy1_ParamLimits

0x6114,	// (0x00012b21) slider_set_pane_g4_copy1

0x612c,	// (0x00012b39) slider_set_pane_g5_copy1_ParamLimits

0x612c,	// (0x00012b39) slider_set_pane_g5_copy1

0x6100,	// (0x00012b0d) slider_set_pane_g6_copy1_ParamLimits

0x6100,	// (0x00012b0d) slider_set_pane_g6_copy1

0x719f,	// (0x00013bac) slider_set_pane_g7_copy1_ParamLimits

0x719f,	// (0x00013bac) slider_set_pane_g7_copy1

0x384b,	// (0x00010258) bg_set_opt_pane_cp2_copy1

0xefd8,	// (0x0001b9e5) setting_slider_graphic_pane_g1_copy1

0xefe1,	// (0x0001b9ee) setting_slider_graphic_pane_t1_copy1

0xeff1,	// (0x0001b9fe) setting_slider_graphic_pane_t2_copy1

0xf001,	// (0x0001ba0e) slider_set_pane_cp_copy1

0xf011,	// (0x0001ba1e) input_focus_pane_cp1_copy1

0xf01a,	// (0x0001ba27) list_set_text_pane_copy1

0xf022,	// (0x0001ba2f) setting_text_pane_g1_copy1

0x39b3,	// (0x000103c0) set_text_pane_t1_copy1

0xf011,	// (0x0001ba1e) input_focus_pane_cp2_copy1

0xf022,	// (0x0001ba2f) setting_code_pane_g1_copy1

0xf02b,	// (0x0001ba38) setting_code_pane_t1_copy1

0xae65,	// (0x00017872) list_set_graphic_pane_copy1

0x384b,	// (0x00010258) bg_set_opt_pane_cp4_copy1

0x854a,	// (0x00014f57) list_set_graphic_pane_g1_copy1_ParamLimits

0x854a,	// (0x00014f57) list_set_graphic_pane_g1_copy1

0xf039,	// (0x0001ba46) list_set_graphic_pane_g2_copy1

0x8562,	// (0x00014f6f) list_set_graphic_pane_t1_copy1_ParamLimits

0x8562,	// (0x00014f6f) list_set_graphic_pane_t1_copy1

0xbc65,	// (0x00018672) rs_clock_indi_pane_g1

0xf041,	// (0x0001ba4e) rs_clock_indi_pane_t1

0xf04f,	// (0x0001ba5c) rs_indi_pane

0xf057,	// (0x0001ba64) rs_indi_pane_g1

0xf060,	// (0x0001ba6d) rs_indi_pane_g2

0xf069,	// (0x0001ba76) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0001c8c5) rs_indi_pane_g

0x8866,	// (0x00015273) bg_popup_preview_window_pane_cp03

0xf072,	// (0x0001ba7f) popup_fep_tooltip_window_t1

0xcb4f,	// (0x0001955c) popup_note2_window_g2_ParamLimits

0xcb4f,	// (0x0001955c) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0001c652) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0001c652) popup_note2_window_g

0xd152,	// (0x00019b5f) bg_popup_sub_pane_cp11_ParamLimits

0xd15f,	// (0x00019b6c) cell_ai3_links_pane_g1_ParamLimits

0xd176,	// (0x00019b83) cell_ai3_links_pane_t1

0x39b3,	// (0x000103c0) set_text_pane_t1_copy1_ParamLimits

0x8768,	// (0x00015175) cell_graphic_popup_pane_cp2_ParamLimits

0x8768,	// (0x00015175) cell_graphic_popup_pane_cp2

0xf080,	// (0x0001ba8d) cell_graphic_popup_pane_g1_cp2

0x3d3f,	// (0x0001074c) cell_graphic_popup_pane_g2_cp2

0xf088,	// (0x0001ba95) cell_graphic_popup_pane_g3_cp2

0xf090,	// (0x0001ba9d) cell_graphic_popup_pane_t2_cp2

0x3d50,	// (0x0001075d) grid_highlight_pane_cp3_cp2

0x7ed7,	// (0x000148e4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x407d,	// (0x00010a8a) main_tmo_pane_ParamLimits

0xd4f5,	// (0x00019f02) popup_tmo_big_image_note_window

0xe6a7,	// (0x0001b0b4) cell_ai5_widget_list_pane

0xe6af,	// (0x0001b0bc) cell_ai5_widget_lrg_icon_pane

0xec83,	// (0x0001b690) tmo_note_info_pane_t1_ParamLimits

0xec98,	// (0x0001b6a5) tmo_note_info_pane_t2_ParamLimits

0xecb1,	// (0x0001b6be) tmo_note_info_pane_t3_ParamLimits

0xecc6,	// (0x0001b6d3) tmo_note_info_pane_t4_ParamLimits

0xecd8,	// (0x0001b6e5) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0001c8b3) tmo_note_info_pane_t_ParamLimits

0xee02,	// (0x0001b80f) settings_container_pane_ParamLimits

0xf009,	// (0x0001ba16) indicator_popup_pane_cp5

0xf009,	// (0x0001ba16) indicator_popup_pane_cp6

0xae65,	// (0x00017872) list_set_graphic_pane_copy1_ParamLimits

0x36c8,	// (0x000100d5) bg_popup_window_pane_cp23

0xf09e,	// (0x0001baab) popup_tmo_big_image_note_window_g1

0xf0aa,	// (0x0001bab7) popup_tmo_big_image_note_window_t1

0xf0ba,	// (0x0001bac7) popup_tmo_big_image_note_window_t2

0xf0ca,	// (0x0001bad7) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0001c8cc) popup_tmo_big_image_note_window_t

0xbc65,	// (0x00018672) cell_ai5_widget_lrg_icon_pane_g1

0xf0da,	// (0x0001bae7) cell_ai5_widget_lrg_icon_pane_t1

0xf0e8,	// (0x0001baf5) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e8,	// (0x0001baf5) cell_ai5_widget_list_row_pane

0xf100,	// (0x0001bb0d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf100,	// (0x0001bb0d) cell_ai5_widget_list_row_pane_g1

0xf10d,	// (0x0001bb1a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf10d,	// (0x0001bb1a) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x0001bb45) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x0001bb45) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0001c8d3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0001c8d3) cell_ai5_widget_list_row_pane_t

0x4e07,	// (0x00011814) main_fep_vtchi_ss_pane

0xf188,	// (0x0001bb95) popup_fep_char_pre_window

0xf190,	// (0x0001bb9d) popup_fep_ituss_window

0xf1bc,	// (0x0001bbc9) popup_fep_vkbss_window

0x8b95,	// (0x000155a2) grid_vkbss_keypad_pane_ParamLimits

0x8b95,	// (0x000155a2) grid_vkbss_keypad_pane

0xf1fe,	// (0x0001bc0b) ituss_keypad_pane

0x71bf,	// (0x00013bcc) aid_vkbss_key_offset_ParamLimits

0x71bf,	// (0x00013bcc) aid_vkbss_key_offset

0x71cb,	// (0x00013bd8) cell_vkbss_key_pane_ParamLimits

0x71cb,	// (0x00013bd8) cell_vkbss_key_pane

0xf20a,	// (0x0001bc17) bg_cell_vkbss_key_g1_ParamLimits

0xf20a,	// (0x0001bc17) bg_cell_vkbss_key_g1

0xf216,	// (0x0001bc23) cell_vkbss_key_3p_pane_ParamLimits

0xf216,	// (0x0001bc23) cell_vkbss_key_3p_pane

0xf24c,	// (0x0001bc59) cell_vkbss_key_g1_ParamLimits

0xf24c,	// (0x0001bc59) cell_vkbss_key_g1

0xf282,	// (0x0001bc8f) cell_vkbss_key_t1_ParamLimits

0xf282,	// (0x0001bc8f) cell_vkbss_key_t1

0x7229,	// (0x00013c36) cell_ituss_key_pane_ParamLimits

0x7229,	// (0x00013c36) cell_ituss_key_pane

0xf2de,	// (0x0001bceb) bg_cell_ituss_key_g1_ParamLimits

0xf2de,	// (0x0001bceb) bg_cell_ituss_key_g1

0xf2ea,	// (0x0001bcf7) cell_ituss_key_pane_g1_ParamLimits

0xf2ea,	// (0x0001bcf7) cell_ituss_key_pane_g1

0x723a,	// (0x00013c47) cell_ituss_key_pane_g2_ParamLimits

0x723a,	// (0x00013c47) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x0001c8da) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x0001c8da) cell_ituss_key_pane_g

0x72be,	// (0x00013ccb) cell_ituss_key_t1_ParamLimits

0x72be,	// (0x00013ccb) cell_ituss_key_t1

0x72f8,	// (0x00013d05) cell_ituss_key_t2_ParamLimits

0x72f8,	// (0x00013d05) cell_ituss_key_t2

0x732a,	// (0x00013d37) cell_ituss_key_t3_ParamLimits

0x732a,	// (0x00013d37) cell_ituss_key_t3

0x735b,	// (0x00013d68) cell_ituss_key_t4_ParamLimits

0x735b,	// (0x00013d68) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0001c8e7) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0001c8e7) cell_ituss_key_t

0xf310,	// (0x0001bd1d) cell_vkbss_key_3p_pane_g1

0xf318,	// (0x0001bd25) cell_vkbss_key_3p_pane_g2

0xf320,	// (0x0001bd2d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0001c8f2) cell_vkbss_key_3p_pane_g

0x8866,	// (0x00015273) bg_popup_fep_char_preview_window_cp02

0xf328,	// (0x0001bd35) popup_fep_char_pre_window_t1

0xe630,	// (0x0001b03d) main_ai5_sk_pane

0xed52,	// (0x0001b75f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed5e,	// (0x0001b76b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed73,	// (0x0001b780) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7f,	// (0x0001b78c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0001c8be) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed8b,	// (0x0001b798) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x407d,	// (0x00010a8a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf336,	// (0x0001bd43) main_ai5_sk_pane_g1

0x968a,	// (0x00016097) popup_query_code_window_g1

0xf1a6,	// (0x0001bbb3) popup_fep_vkb_icf_pane

0xf1d5,	// (0x0001bbe2) popup_fep_vtchi_icf_pane

0xf33f,	// (0x0001bd4c) bg_icf_pane

0xf33f,	// (0x0001bd4c) list_vkb_icf_pane

0xf34b,	// (0x0001bd58) bg_icf_pane_cp01

0xf35e,	// (0x0001bd6b) vtchi_icf_list_pane

0xf3be,	// (0x0001bdcb) list_vkb_icf_pane_t1_ParamLimits

0xf3be,	// (0x0001bdcb) list_vkb_icf_pane_t1

0xf3da,	// (0x0001bde7) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0001bde7) vtchi_icf_list_pane_t1

0xf190,	// (0x0001bb9d) popup_fep_ituss_window_ParamLimits

0xf1d5,	// (0x0001bbe2) popup_fep_vtchi_icf_pane_ParamLimits

0xf1fe,	// (0x0001bc0b) ituss_keypad_pane_ParamLimits

0x71b5,	// (0x00013bc2) ituss_sks_pane

0xf33f,	// (0x0001bd4c) bg_icf_pane_ParamLimits

0xf160,	// (0x0001bb6d) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0001bb6d) icf_edit_indi_pane

0xf33f,	// (0x0001bd4c) list_vkb_icf_pane_ParamLimits

0xf34b,	// (0x0001bd58) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x0001bb88) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x0001bb88) icf_edit_indi_pane_cp01

0xf35e,	// (0x0001bd6b) vtchi_query_pane

0xe4d2,	// (0x0001aedf) icf_edit_indi_pane_g1_ParamLimits

0xe4d2,	// (0x0001aedf) icf_edit_indi_pane_g1

0xf44a,	// (0x0001be57) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0001be57) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001c91d) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001c91d) icf_edit_indi_pane_g

0xf45e,	// (0x0001be6b) icf_edit_indi_pane_t1

0xf3f3,	// (0x0001be00) bg_input_focus_pane_cp042

0x3f23,	// (0x00010930) vtchi_button_pane

0xf3fc,	// (0x0001be09) vtchi_query_pane_t1

0xf40a,	// (0x0001be17) vtchi_query_pane_t2

0xf418,	// (0x0001be25) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001c90c) vtchi_query_pane_t

0x4e07,	// (0x00011814) bg_button_pane_cp13

0xf426,	// (0x0001be33) vtchi_button_pane_g1

0x739e,	// (0x00013dab) ituss_sks_pane_g1

0x73a9,	// (0x00013db6) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001c913) ituss_sks_pane_g

0xf42e,	// (0x0001be3b) ituss_sks_pane_t1

0xf43c,	// (0x0001be49) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001c918) ituss_sks_pane_t

0xb6e6,	// (0x000180f3) indicator_nsta_pane_cp_g1

0xb6ef,	// (0x000180fc) indicator_nsta_pane_cp_g2

0xb6f7,	// (0x00018104) indicator_nsta_pane_cp_g3

0xb6ff,	// (0x0001810c) indicator_nsta_pane_cp_g4

0xb6ef,	// (0x000180fc) indicator_nsta_pane_cp_g5

0xb6f7,	// (0x00018104) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0001c490) indicator_nsta_pane_cp_g

0xe219,	// (0x0001ac26) cell_graphic2_pane_t2_ParamLimits

0xe219,	// (0x0001ac26) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x0001c7a9) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x0001c7a9) cell_graphic2_pane_t

0xe245,	// (0x0001ac52) cell_graphic2_control_pane_t1

0x8272,	// (0x00014c7f) signal_pane_g3_ParamLimits

0x8272,	// (0x00014c7f) signal_pane_g3

0x8281,	// (0x00014c8e) signal_pane_g4_ParamLimits

0x8281,	// (0x00014c8e) signal_pane_g4

0xf14a,	// (0x0001bb57) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x0001bb57) cell_ai5_widget_list_row_pane_t3

0xf2fe,	// (0x0001bd0b) cell_ituss_key_pane_t1_ParamLimits

0xf2fe,	// (0x0001bd0b) cell_ituss_key_pane_t1

0x92c2,	// (0x00015ccf) form_field_data_wide_pane_vc_t2_ParamLimits

0x92c2,	// (0x00015ccf) form_field_data_wide_pane_vc_t2

0x92d6,	// (0x00015ce3) form_field_data_wide_pane_vc_t3_ParamLimits

0x92d6,	// (0x00015ce3) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0001c1ec) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c1ec) form_field_data_wide_pane_vc_t

0xb383,	// (0x00017d90) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb383,	// (0x00017d90) form_field_slider_wide_pane_vc_t3

0xb459,	// (0x00017e66) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb459,	// (0x00017e66) form_field_popup_wide_pane_vc_t2

0xb470,	// (0x00017e7d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb470,	// (0x00017e7d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0001c47f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0001c47f) form_field_popup_wide_pane_vc_t

0x6f69,	// (0x00013976) aid_fshwr2_btn_pane_ParamLimits

0x6f79,	// (0x00013986) aid_fshwr2_syb_pane_ParamLimits

0x6f8d,	// (0x0001399a) aid_fshwr2_txt_pane_ParamLimits

0x678d,	// (0x0001319a) fshwr2_bg_pane_ParamLimits

0x6f9d,	// (0x000139aa) fshwr2_func_candi_pane_ParamLimits

0x6fbd,	// (0x000139ca) fshwr2_hwr_syb_pane_ParamLimits

0x6fd3,	// (0x000139e0) fshwr2_icf_pane_ParamLimits

0xb2f7,	// (0x00017d04) list_double_graphic_pane_vc_g4_ParamLimits

0xb2f7,	// (0x00017d04) list_double_graphic_pane_vc_g4

0x725a,	// (0x00013c67) cell_ituss_key_pane_g3_ParamLimits

0x725a,	// (0x00013c67) cell_ituss_key_pane_g3

0x738c,	// (0x00013d99) cell_ituss_key_t5_ParamLimits

0x738c,	// (0x00013d99) cell_ituss_key_t5

0xf1bc,	// (0x0001bbc9) popup_fep_vkbss_window_ParamLimits

0xe63a,	// (0x0001b047) aid_cell_ai5_quarter

0xf45e,	// (0x0001be6b) icf_edit_indi_pane_t1_ParamLimits

0x3b83,	// (0x00010590) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3b83,	// (0x00010590) aid_tch_indicator_popup_pane_cp2

0x3b96,	// (0x000105a3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3b96,	// (0x000105a3) aid_tch_query_popup_data_pane_cp2

0x9632,	// (0x0001603f) aid_tch_query_popup_pane_ParamLimits

0x9632,	// (0x0001603f) aid_tch_query_popup_pane

0x9632,	// (0x0001603f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9632,	// (0x0001603f) aid_tch_query_popup_data_pane_cp1

0x8b95,	// (0x000155a2) cell_fshwr2_syb_bg_pane_ParamLimits

0x70dd,	// (0x00013aea) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x70f1,	// (0x00013afe) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x0001bbb3) popup_fep_vkb_icf_pane_ParamLimits

0x6daf,	// (0x000137bc) bg_popup_fep_char_preview_window_g10

0xe76f,	// (0x0001b17c) cell_ai5_widget_pane_g11_ParamLimits

0xe76f,	// (0x0001b17c) cell_ai5_widget_pane_g11

0xe77b,	// (0x0001b188) cell_ai5_widget_pane_g12_ParamLimits

0xe77b,	// (0x0001b188) cell_ai5_widget_pane_g12

0xe787,	// (0x0001b194) cell_ai5_widget_pane_g13_ParamLimits

0xe787,	// (0x0001b194) cell_ai5_widget_pane_g13

0xe8b7,	// (0x0001b2c4) cell_ai5_widget_pane_t11_ParamLimits

0xe8b7,	// (0x0001b2c4) cell_ai5_widget_pane_t11

0xe8c9,	// (0x0001b2d6) cell_ai5_widget_pane_t12_ParamLimits

0xe8c9,	// (0x0001b2d6) cell_ai5_widget_pane_t12

0x7266,	// (0x00013c73) cell_ituss_key_pane_g4_ParamLimits

0x7266,	// (0x00013c73) cell_ituss_key_pane_g4

0x7282,	// (0x00013c8f) cell_ituss_key_pane_g5_ParamLimits

0x7282,	// (0x00013c8f) cell_ituss_key_pane_g5

0x729e,	// (0x00013cab) cell_ituss_key_pane_g6_ParamLimits

0x729e,	// (0x00013cab) cell_ituss_key_pane_g6

0x910d,	// (0x00015b1a) bg_icf_pane_g1

0xf366,	// (0x0001bd73) bg_icf_pane_g2

0xf372,	// (0x0001bd7f) bg_icf_pane_g3

0xf37c,	// (0x0001bd89) bg_icf_pane_g4

0xf388,	// (0x0001bd95) bg_icf_pane_g5

0xf392,	// (0x0001bd9f) bg_icf_pane_g6

0xf39e,	// (0x0001bdab) bg_icf_pane_g7

0xf3a8,	// (0x0001bdb5) bg_icf_pane_g8

0xf3b4,	// (0x0001bdc1) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0001c8f9) bg_icf_pane_g

0xf1eb,	// (0x0001bbf8) popup_hyb_candi_window_ParamLimits

0xf1eb,	// (0x0001bbf8) popup_hyb_candi_window

0x9231,	// (0x00015c3e) bg_popup_sub_pane_cp01_ParamLimits

0x9231,	// (0x00015c3e) bg_popup_sub_pane_cp01

0xf477,	// (0x0001be84) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0001be84) entry_hyb_candi_pane

0xf486,	// (0x0001be93) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0001be93) grid_hyb_candi_pane

0xf49b,	// (0x0001bea8) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0001bea8) grid_hyb_phrase_pane

0xf4aa,	// (0x0001beb7) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0001beb7) cell_hyb_candi_pane

0x3f2c,	// (0x00010939) cell_hyb_candi_scroll_pane

0x8195,	// (0x00014ba2) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001bed3) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001bee1) cell_hyb_phrase_pane

0x8195,	// (0x00014ba2) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001beea) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001bef8) entry_hyb_candi_pane_t1

0x8866,	// (0x00015273) input_focus_pane_cp06

0xf4f9,	// (0x0001bf06) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001bf0e) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001bf16) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001bf1e) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001bf26) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001bf2e) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
