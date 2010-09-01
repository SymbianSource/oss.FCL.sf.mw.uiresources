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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000c896 };

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
0x7304,	// (0x00013b9a) Screen

0x7310,	// (0x00013ba6) application_window_ParamLimits

0x7310,	// (0x00013ba6) application_window

0x378f,	// (0x00010025) screen_g1

0x4c9a,	// (0x00011530) area_bottom_pane_ParamLimits

0x4c9a,	// (0x00011530) area_bottom_pane

0x4d5a,	// (0x000115f0) area_top_pane_ParamLimits

0x4d5a,	// (0x000115f0) area_top_pane

0x4df8,	// (0x0001168e) main_pane_ParamLimits

0x4df8,	// (0x0001168e) main_pane

0x3908,	// (0x0001019e) misc_graphics

0x8c4c,	// (0x000154e2) battery_pane_ParamLimits

0x8c4c,	// (0x000154e2) battery_pane

0x9a2d,	// (0x000162c3) bg_status_flat_pane_g8

0x9a35,	// (0x000162cb) bg_status_flat_pane_g9

0x8d14,	// (0x000155aa) context_pane_ParamLimits

0x8d14,	// (0x000155aa) context_pane

0x8e38,	// (0x000156ce) navi_pane_ParamLimits

0x8e38,	// (0x000156ce) navi_pane

0x8ec8,	// (0x0001575e) signal_pane_ParamLimits

0x8ec8,	// (0x0001575e) signal_pane

0x0008,

0xf84f,	// (0x0001c0e5) bg_status_flat_pane_g

0x8f35,	// (0x000157cb) status_pane_g1_ParamLimits

0x8f35,	// (0x000157cb) status_pane_g1

0x8f41,	// (0x000157d7) status_pane_g2_ParamLimits

0x8f41,	// (0x000157d7) status_pane_g2

0x8f4d,	// (0x000157e3) status_pane_g3_ParamLimits

0x8f4d,	// (0x000157e3) status_pane_g3

0x0004,

0xf776,	// (0x0001c00c) status_pane_g_ParamLimits

0xf776,	// (0x0001c00c) status_pane_g

0x8f81,	// (0x00015817) title_pane_ParamLimits

0x8f81,	// (0x00015817) title_pane

0x8fc0,	// (0x00015856) uni_indicator_pane_ParamLimits

0x8fc0,	// (0x00015856) uni_indicator_pane

0x8b6e,	// (0x00015404) bg_list_pane_ParamLimits

0x8b6e,	// (0x00015404) bg_list_pane

0x8b8e,	// (0x00015424) find_pane

0x8b96,	// (0x0001542c) listscroll_app_pane_ParamLimits

0x8b96,	// (0x0001542c) listscroll_app_pane

0x8ba2,	// (0x00015438) listscroll_form_pane

0x56fd,	// (0x00011f93) listscroll_gen_pane_ParamLimits

0x56fd,	// (0x00011f93) listscroll_gen_pane

0x5711,	// (0x00011fa7) listscroll_set_pane

0x7d44,	// (0x000145da) main_idle_act_pane

0x8867,	// (0x000150fd) main_idle_trad_pane

0x8867,	// (0x000150fd) main_list_empty_pane

0x8b96,	// (0x0001542c) main_midp_pane

0x8bbc,	// (0x00015452) main_pane_g1_ParamLimits

0x8bbc,	// (0x00015452) main_pane_g1

0x5727,	// (0x00011fbd) popup_ai_message_window_ParamLimits

0x5727,	// (0x00011fbd) popup_ai_message_window

0x57db,	// (0x00012071) popup_fep_china_uni_window_ParamLimits

0x57db,	// (0x00012071) popup_fep_china_uni_window

0x583b,	// (0x000120d1) popup_fep_japan_candidate_window_ParamLimits

0x583b,	// (0x000120d1) popup_fep_japan_candidate_window

0x5865,	// (0x000120fb) popup_fep_japan_predictive_window_ParamLimits

0x5865,	// (0x000120fb) popup_fep_japan_predictive_window

0x589b,	// (0x00012131) popup_find_window

0x58a8,	// (0x0001213e) popup_grid_graphic_window_ParamLimits

0x58a8,	// (0x0001213e) popup_grid_graphic_window

0x58d8,	// (0x0001216e) popup_large_graphic_colour_window

0x58fe,	// (0x00012194) popup_menu_window_ParamLimits

0x58fe,	// (0x00012194) popup_menu_window

0x5ac8,	// (0x0001235e) popup_note_image_window

0x5ab2,	// (0x00012348) popup_note_wait_window_ParamLimits

0x5ab2,	// (0x00012348) popup_note_wait_window

0x5ab2,	// (0x00012348) popup_note_window_ParamLimits

0x5ab2,	// (0x00012348) popup_note_window

0x5b2e,	// (0x000123c4) popup_query_code_window_ParamLimits

0x5b2e,	// (0x000123c4) popup_query_code_window

0x5b44,	// (0x000123da) popup_query_data_code_window_ParamLimits

0x5b44,	// (0x000123da) popup_query_data_code_window

0x5b67,	// (0x000123fd) popup_query_data_window_ParamLimits

0x5b67,	// (0x000123fd) popup_query_data_window

0x5b89,	// (0x0001241f) popup_query_sat_info_window_ParamLimits

0x5b89,	// (0x0001241f) popup_query_sat_info_window

0x5bc8,	// (0x0001245e) popup_snote_single_graphic_window_ParamLimits

0x5bc8,	// (0x0001245e) popup_snote_single_graphic_window

0x5bc8,	// (0x0001245e) popup_snote_single_text_window_ParamLimits

0x5bc8,	// (0x0001245e) popup_snote_single_text_window

0x5bdf,	// (0x00012475) popup_sub_window_general

0x5d25,	// (0x000125bb) popup_window_general_ParamLimits

0x5d25,	// (0x000125bb) popup_window_general

0x8bd2,	// (0x00015468) power_save_pane

0x5577,	// (0x00011e0d) control_pane_g1_ParamLimits

0x5577,	// (0x00011e0d) control_pane_g1

0x55a0,	// (0x00011e36) control_pane_g2_ParamLimits

0x55a0,	// (0x00011e36) control_pane_g2

0x8b31,	// (0x000153c7) control_pane_g3_ParamLimits

0x8b31,	// (0x000153c7) control_pane_g3

0x0007,

0xf75e,	// (0x0001bff4) control_pane_g_ParamLimits

0xf75e,	// (0x0001bff4) control_pane_g

0x55ec,	// (0x00011e82) control_pane_t1_ParamLimits

0x55ec,	// (0x00011e82) control_pane_t1

0x5646,	// (0x00011edc) control_pane_t2_ParamLimits

0x5646,	// (0x00011edc) control_pane_t2

0x0002,

0xf76f,	// (0x0001c005) control_pane_t_ParamLimits

0xf76f,	// (0x0001c005) control_pane_t

0x8a56,	// (0x000152ec) navi_navi_volume_pane_cp1

0x8a5e,	// (0x000152f4) status_small_icon_pane

0x8a66,	// (0x000152fc) status_small_pane_g1_ParamLimits

0x8a66,	// (0x000152fc) status_small_pane_g1

0x8a9a,	// (0x00015330) status_small_pane_g2_ParamLimits

0x8a9a,	// (0x00015330) status_small_pane_g2

0x8aa6,	// (0x0001533c) status_small_pane_g3_ParamLimits

0x8aa6,	// (0x0001533c) status_small_pane_g3

0x8ab2,	// (0x00015348) status_small_pane_g4_ParamLimits

0x8ab2,	// (0x00015348) status_small_pane_g4

0x8abe,	// (0x00015354) status_small_pane_g5_ParamLimits

0x8abe,	// (0x00015354) status_small_pane_g5

0x8acc,	// (0x00015362) status_small_pane_g6_ParamLimits

0x8acc,	// (0x00015362) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001bfe3) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001bfe3) status_small_pane_g

0x8afb,	// (0x00015391) status_small_pane_t1

0x8b1d,	// (0x000153b3) status_small_wait_pane_ParamLimits

0x8b1d,	// (0x000153b3) status_small_wait_pane

0x8248,	// (0x00014ade) aid_levels_signal_ParamLimits

0x8248,	// (0x00014ade) aid_levels_signal

0x8257,	// (0x00014aed) signal_pane_g1_ParamLimits

0x8257,	// (0x00014aed) signal_pane_g1

0x826c,	// (0x00014b02) signal_pane_g2_ParamLimits

0x826c,	// (0x00014b02) signal_pane_g2

0x0003,

0xf6de,	// (0x0001bf74) signal_pane_g_ParamLimits

0xf6de,	// (0x0001bf74) signal_pane_g

0x829d,	// (0x00014b33) context_pane_g1

0x7320,	// (0x00013bb6) title_pane_g1

0x7352,	// (0x00013be8) title_pane_t1

0x3972,	// (0x00010208) title_pane_t2

0x3998,	// (0x0001022e) title_pane_t3

0x0002,

0xf532,	// (0x0001bdc8) title_pane_t

0x8fd8,	// (0x0001586e) aid_levels_battery_ParamLimits

0x8fd8,	// (0x0001586e) aid_levels_battery

0x8fe9,	// (0x0001587f) battery_pane_g1_ParamLimits

0x8fe9,	// (0x0001587f) battery_pane_g1

0x8fff,	// (0x00015895) battery_pane_g2_ParamLimits

0x8fff,	// (0x00015895) battery_pane_g2

0x0001,

0xf781,	// (0x0001c017) battery_pane_g_ParamLimits

0xf781,	// (0x0001c017) battery_pane_g

0xa377,	// (0x00016c0d) uni_indicator_pane_g1

0xa38d,	// (0x00016c23) uni_indicator_pane_g2

0xa3a3,	// (0x00016c39) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0001c18d) uni_indicator_pane_g

0x86d5,	// (0x00014f6b) navi_icon_pane_ParamLimits

0x86d5,	// (0x00014f6b) navi_icon_pane

0x8611,	// (0x00014ea7) navi_midp_pane

0x86f1,	// (0x00014f87) navi_navi_pane

0x86fb,	// (0x00014f91) navi_text_pane_ParamLimits

0x86fb,	// (0x00014f91) navi_text_pane

0x378f,	// (0x00010025) status_small_wait_pane_g1

0x3d66,	// (0x000105fc) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0001c188) status_small_wait_pane_g

0xa08a,	// (0x00016920) navi_navi_icon_text_pane

0xa092,	// (0x00016928) navi_navi_pane_g1_ParamLimits

0xa092,	// (0x00016928) navi_navi_pane_g1

0xa0a4,	// (0x0001693a) navi_navi_pane_g2_ParamLimits

0xa0a4,	// (0x0001693a) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0001c156) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0001c156) navi_navi_pane_g

0xa0b6,	// (0x0001694c) navi_navi_tabs_pane

0xa0bf,	// (0x00016955) navi_navi_text_pane

0xa08a,	// (0x00016920) navi_navi_volume_pane

0xa066,	// (0x000168fc) navi_text_pane_t1

0xa05a,	// (0x000168f0) navi_icon_pane_g1

0x9fad,	// (0x00016843) navi_navi_text_pane_t1

0x604e,	// (0x000128e4) navi_navi_volume_pane_g1

0x6056,	// (0x000128ec) volume_small_pane

0x9f13,	// (0x000167a9) navi_navi_icon_text_pane_g1

0x9f1b,	// (0x000167b1) navi_navi_icon_text_pane_t1

0x86f1,	// (0x00014f87) navi_tabs_2_long_pane

0x86f1,	// (0x00014f87) navi_tabs_2_pane

0x86f1,	// (0x00014f87) navi_tabs_3_long_pane

0x86f1,	// (0x00014f87) navi_tabs_3_pane

0x86f1,	// (0x00014f87) navi_tabs_4_pane

0x602e,	// (0x000128c4) tabs_2_active_pane_ParamLimits

0x602e,	// (0x000128c4) tabs_2_active_pane

0x603e,	// (0x000128d4) tabs_2_passive_pane_ParamLimits

0x603e,	// (0x000128d4) tabs_2_passive_pane

0x5ffc,	// (0x00012892) tabs_3_active_pane_ParamLimits

0x5ffc,	// (0x00012892) tabs_3_active_pane

0x600c,	// (0x000128a2) tabs_3_passive_pane_ParamLimits

0x600c,	// (0x000128a2) tabs_3_passive_pane

0x601d,	// (0x000128b3) tabs_3_passive_pane_cp_ParamLimits

0x601d,	// (0x000128b3) tabs_3_passive_pane_cp

0x5fb0,	// (0x00012846) tabs_4_active_pane_ParamLimits

0x5fb0,	// (0x00012846) tabs_4_active_pane

0x5fc3,	// (0x00012859) tabs_4_passive_pane_ParamLimits

0x5fc3,	// (0x00012859) tabs_4_passive_pane

0x5fd4,	// (0x0001286a) tabs_4_passive_pane_cp_ParamLimits

0x5fd4,	// (0x0001286a) tabs_4_passive_pane_cp

0x5fe5,	// (0x0001287b) tabs_4_passive_pane_cp2_ParamLimits

0x5fe5,	// (0x0001287b) tabs_4_passive_pane_cp2

0x5f8c,	// (0x00012822) tabs_2_long_active_pane_ParamLimits

0x5f8c,	// (0x00012822) tabs_2_long_active_pane

0x5f9e,	// (0x00012834) tabs_2_long_passive_pane_ParamLimits

0x5f9e,	// (0x00012834) tabs_2_long_passive_pane

0x5f4d,	// (0x000127e3) tabs_3_long_active_pane_ParamLimits

0x5f4d,	// (0x000127e3) tabs_3_long_active_pane

0x5f60,	// (0x000127f6) tabs_3_long_passive_pane_ParamLimits

0x5f60,	// (0x000127f6) tabs_3_long_passive_pane

0x5f79,	// (0x0001280f) tabs_3_long_passive_pane_cp_ParamLimits

0x5f79,	// (0x0001280f) tabs_3_long_passive_pane_cp

0x5ef3,	// (0x00012789) volume_small_pane_g1

0x5efc,	// (0x00012792) volume_small_pane_g2

0x5f05,	// (0x0001279b) volume_small_pane_g3

0x5f0e,	// (0x000127a4) volume_small_pane_g4

0x5f17,	// (0x000127ad) volume_small_pane_g5

0x5f20,	// (0x000127b6) volume_small_pane_g6

0x5f29,	// (0x000127bf) volume_small_pane_g7

0x5f32,	// (0x000127c8) volume_small_pane_g8

0x5f3b,	// (0x000127d1) volume_small_pane_g9

0x5f44,	// (0x000127da) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0001c122) volume_small_pane_g

0x39c2,	// (0x00010258) bg_active_tab_pane_cp2_ParamLimits

0x39c2,	// (0x00010258) bg_active_tab_pane_cp2

0x73ba,	// (0x00013c50) tabs_3_active_pane_g1

0x73c2,	// (0x00013c58) tabs_3_active_pane_t1

0x39c2,	// (0x00010258) bg_passive_tab_pane_cp2_ParamLimits

0x39c2,	// (0x00010258) bg_passive_tab_pane_cp2

0x73ba,	// (0x00013c50) tabs_3_passive_pane_g1

0x73c2,	// (0x00013c58) tabs_3_passive_pane_t1

0x39c2,	// (0x00010258) bg_active_tab_pane_cp3_ParamLimits

0x39c2,	// (0x00010258) bg_active_tab_pane_cp3

0x73d4,	// (0x00013c6a) tabs_4_active_pane_g1

0x73dc,	// (0x00013c72) tabs_4_active_pane_t1

0x39c2,	// (0x00010258) bg_passive_tab_pane_cp3_ParamLimits

0x39c2,	// (0x00010258) bg_passive_tab_pane_cp3

0x73d4,	// (0x00013c6a) tabs_4_1_passive_pane_g1

0x73dc,	// (0x00013c72) tabs_4_1_passive_pane_t1

0x8b96,	// (0x0001542c) list_highlight_pane_cp2

0xa618,	// (0x00016eae) list_set_pane_ParamLimits

0xa618,	// (0x00016eae) list_set_pane

0xa6da,	// (0x00016f70) main_pane_set_t1_ParamLimits

0xa6da,	// (0x00016f70) main_pane_set_t1

0xa6fa,	// (0x00016f90) main_pane_set_t2_ParamLimits

0xa6fa,	// (0x00016f90) main_pane_set_t2

0xa70e,	// (0x00016fa4) main_pane_set_t3_ParamLimits

0xa70e,	// (0x00016fa4) main_pane_set_t3

0xa722,	// (0x00016fb8) main_pane_set_t4_ParamLimits

0xa722,	// (0x00016fb8) main_pane_set_t4

0x0003,

0xf95c,	// (0x0001c1f2) main_pane_set_t_ParamLimits

0xf95c,	// (0x0001c1f2) main_pane_set_t

0xa736,	// (0x00016fcc) setting_code_pane

0xa740,	// (0x00016fd6) setting_slider_graphic_pane

0xa740,	// (0x00016fd6) setting_slider_pane

0xa740,	// (0x00016fd6) setting_text_pane

0xa740,	// (0x00016fd6) setting_volume_pane

0x5057,	// (0x000118ed) volume_set_pane

0x39c2,	// (0x00010258) bg_set_opt_pane_cp

0x5061,	// (0x000118f7) setting_slider_pane_t1

0x507a,	// (0x00011910) setting_slider_pane_t2

0x5094,	// (0x0001192a) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001bdcf) setting_slider_pane_t

0x50ac,	// (0x00011942) slider_set_pane

0x3908,	// (0x0001019e) bg_set_opt_pane_cp2

0x3a31,	// (0x000102c7) setting_slider_graphic_pane_g1

0x50c2,	// (0x00011958) setting_slider_graphic_pane_t1

0x50d2,	// (0x00011968) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001bdd6) setting_slider_graphic_pane_t

0x50e2,	// (0x00011978) slider_set_pane_cp

0x3908,	// (0x0001019e) input_focus_pane_cp1

0xa5d9,	// (0x00016e6f) list_set_text_pane

0x378f,	// (0x00010025) setting_text_pane_g1

0x3908,	// (0x0001019e) input_focus_pane_cp2

0x378f,	// (0x00010025) setting_code_pane_g1

0x3a62,	// (0x000102f8) setting_code_pane_t1

0x3a70,	// (0x00010306) set_text_pane_t1_ParamLimits

0x3a70,	// (0x00010306) set_text_pane_t1

0x41f5,	// (0x00010a8b) set_opt_bg_pane_g1

0x41fd,	// (0x00010a93) set_opt_bg_pane_g2

0xa5b1,	// (0x00016e47) set_opt_bg_pane_g3

0x420d,	// (0x00010aa3) set_opt_bg_pane_g4

0x4215,	// (0x00010aab) set_opt_bg_pane_g5

0x421d,	// (0x00010ab3) set_opt_bg_pane_g6

0xa5bb,	// (0x00016e51) set_opt_bg_pane_g7

0xa5c5,	// (0x00016e5b) set_opt_bg_pane_g8

0xa5cf,	// (0x00016e65) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0001c1df) set_opt_bg_pane_g

0xa5a4,	// (0x00016e3a) slider_set_pane_g1

0x60d7,	// (0x0001296d) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0001c1d0) slider_set_pane_g

0x605f,	// (0x000128f5) volume_set_pane_g1

0x6069,	// (0x000128ff) volume_set_pane_g2

0x6073,	// (0x00012909) volume_set_pane_g3

0x607d,	// (0x00012913) volume_set_pane_g4

0x6087,	// (0x0001291d) volume_set_pane_g5

0x6091,	// (0x00012927) volume_set_pane_g6

0x609b,	// (0x00012931) volume_set_pane_g7

0x60a5,	// (0x0001293b) volume_set_pane_g8

0x60af,	// (0x00012945) volume_set_pane_g9

0x60b9,	// (0x0001294f) volume_set_pane_g10

0x0009,

0xf912,	// (0x0001c1a8) volume_set_pane_g

0x73ee,	// (0x00013c84) indicator_pane_ParamLimits

0x73ee,	// (0x00013c84) indicator_pane

0x73fa,	// (0x00013c90) main_idle_pane_g2_ParamLimits

0x73fa,	// (0x00013c90) main_idle_pane_g2

0x7422,	// (0x00013cb8) main_pane_idle_g1_ParamLimits

0x7422,	// (0x00013cb8) main_pane_idle_g1

0x3a8a,	// (0x00010320) popup_clock_digital_analogue_window_ParamLimits

0x3a8a,	// (0x00010320) popup_clock_digital_analogue_window

0x7430,	// (0x00013cc6) soft_indicator_pane_ParamLimits

0x7430,	// (0x00013cc6) soft_indicator_pane

0x743e,	// (0x00013cd4) wallpaper_pane_ParamLimits

0x743e,	// (0x00013cd4) wallpaper_pane

0x378f,	// (0x00010025) wallpaper_pane_g1

0x744a,	// (0x00013ce0) indicator_pane_g1_ParamLimits

0x744a,	// (0x00013ce0) indicator_pane_g1

0xaaaa,	// (0x00017340) navi_navi_icon_text_pane_srt_g1

0x3ab8,	// (0x0001034e) soft_indicator_pane_t1

0x3ad2,	// (0x00010368) aid_ps_area_pane

0x7456,	// (0x00013cec) aid_ps_clock_pane

0x3ae3,	// (0x00010379) aid_ps_indicator_pane

0x3aef,	// (0x00010385) indicator_ps_pane_ParamLimits

0x3aef,	// (0x00010385) indicator_ps_pane

0x3afe,	// (0x00010394) power_save_pane_g1_ParamLimits

0x3afe,	// (0x00010394) power_save_pane_g1

0x3b0a,	// (0x000103a0) power_save_pane_g2_ParamLimits

0x3b0a,	// (0x000103a0) power_save_pane_g2

0x4c4e,	// (0x000114e4) aid_navinavi_width_pane

0x3ad2,	// (0x00010368) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001bddb) power_save_pane_g_ParamLimits

0xf545,	// (0x0001bddb) power_save_pane_g

0x3b18,	// (0x000103ae) power_save_pane_t1_ParamLimits

0x3b18,	// (0x000103ae) power_save_pane_t1

0x7456,	// (0x00013cec) aid_ps_clock_pane_ParamLimits

0x3ae3,	// (0x00010379) aid_ps_indicator_pane_ParamLimits

0x3b2a,	// (0x000103c0) power_save_pane_t4_ParamLimits

0x3b2a,	// (0x000103c0) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001bde0) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001bde0) power_save_pane_t

0x3b54,	// (0x000103ea) power_save_t3_ParamLimits

0x3b54,	// (0x000103ea) power_save_t3

0x3b3f,	// (0x000103d5) power_save_t2_ParamLimits

0x3b3f,	// (0x000103d5) power_save_t2

0x3b69,	// (0x000103ff) indicator_ps_pane_g1

0x7464,	// (0x00013cfa) ai_gene_pane_ParamLimits

0x7464,	// (0x00013cfa) ai_gene_pane

0x7470,	// (0x00013d06) ai_links_pane_ParamLimits

0x7470,	// (0x00013d06) ai_links_pane

0x747c,	// (0x00013d12) indicator_pane_cp1_ParamLimits

0x747c,	// (0x00013d12) indicator_pane_cp1

0x7488,	// (0x00013d1e) main_pane_idle_g1_cp_ParamLimits

0x7488,	// (0x00013d1e) main_pane_idle_g1_cp

0x3b72,	// (0x00010408) popup_ai_links_title_window

0x7494,	// (0x00013d2a) soft_indicator_pane_cp1_ParamLimits

0x7494,	// (0x00013d2a) soft_indicator_pane_cp1

0xa365,	// (0x00016bfb) ai_links_pane_g1

0xa36e,	// (0x00016c04) grid_ai_links_pane

0xa34a,	// (0x00016be0) ai_gene_pane_1

0xa353,	// (0x00016be9) ai_gene_pane_2

0xa35c,	// (0x00016bf2) list_highlight_pane_cp4

0xa32a,	// (0x00016bc0) cell_ai_link_pane_ParamLimits

0xa32a,	// (0x00016bc0) cell_ai_link_pane

0xa322,	// (0x00016bb8) cell_ai_link_pane_g1

0x3d66,	// (0x000105fc) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0001c183) cell_ai_link_pane_g

0x3908,	// (0x0001019e) grid_highlight_cp2

0x3908,	// (0x0001019e) bg_popup_sub_pane_cp1

0x3b89,	// (0x0001041f) popup_ai_links_title_window_t1

0xa26e,	// (0x00016b04) ai_gene_pane_1_g1_ParamLimits

0xa26e,	// (0x00016b04) ai_gene_pane_1_g1

0xa27a,	// (0x00016b10) ai_gene_pane_1_g2_ParamLimits

0xa27a,	// (0x00016b10) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0001c179) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0001c179) ai_gene_pane_1_g

0xa287,	// (0x00016b1d) ai_gene_pane_1_t1_ParamLimits

0xa287,	// (0x00016b1d) ai_gene_pane_1_t1

0xa2bb,	// (0x00016b51) grid_ai_soft_ind_pane

0xa259,	// (0x00016aef) ai_gene_pane_2_t1_ParamLimits

0xa259,	// (0x00016aef) ai_gene_pane_2_t1

0x74a0,	// (0x00013d36) main_pane_empty_t1_ParamLimits

0x74a0,	// (0x00013d36) main_pane_empty_t1

0x74b8,	// (0x00013d4e) main_pane_empty_t2_ParamLimits

0x74b8,	// (0x00013d4e) main_pane_empty_t2

0x74cd,	// (0x00013d63) main_pane_empty_t3_ParamLimits

0x74cd,	// (0x00013d63) main_pane_empty_t3

0x74df,	// (0x00013d75) main_pane_empty_t4_ParamLimits

0x74df,	// (0x00013d75) main_pane_empty_t4

0x74f1,	// (0x00013d87) main_pane_empty_t5_ParamLimits

0x74f1,	// (0x00013d87) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001bde5) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001bde5) main_pane_empty_t

0x7c6c,	// (0x00014502) bg_popup_window_pane_ParamLimits

0x7c6c,	// (0x00014502) bg_popup_window_pane

0x9fbb,	// (0x00016851) find_popup_pane_cp2_ParamLimits

0x9fbb,	// (0x00016851) find_popup_pane_cp2

0x9fc7,	// (0x0001685d) heading_pane_ParamLimits

0x9fc7,	// (0x0001685d) heading_pane

0x3908,	// (0x0001019e) bg_popup_sub_pane

0x9f35,	// (0x000167cb) bg_popup_window_pane_g1_ParamLimits

0x9f35,	// (0x000167cb) bg_popup_window_pane_g1

0x9f41,	// (0x000167d7) bg_popup_window_pane_g2_ParamLimits

0x9f41,	// (0x000167d7) bg_popup_window_pane_g2

0x9f4d,	// (0x000167e3) bg_popup_window_pane_g3_ParamLimits

0x9f4d,	// (0x000167e3) bg_popup_window_pane_g3

0x9f59,	// (0x000167ef) bg_popup_window_pane_g4_ParamLimits

0x9f59,	// (0x000167ef) bg_popup_window_pane_g4

0x9f65,	// (0x000167fb) bg_popup_window_pane_g5_ParamLimits

0x9f65,	// (0x000167fb) bg_popup_window_pane_g5

0x9f71,	// (0x00016807) bg_popup_window_pane_g6_ParamLimits

0x9f71,	// (0x00016807) bg_popup_window_pane_g6

0x9f7d,	// (0x00016813) bg_popup_window_pane_g7_ParamLimits

0x9f7d,	// (0x00016813) bg_popup_window_pane_g7

0x9f89,	// (0x0001681f) bg_popup_window_pane_g8_ParamLimits

0x9f89,	// (0x0001681f) bg_popup_window_pane_g8

0x9f95,	// (0x0001682b) bg_popup_window_pane_g9_ParamLimits

0x9f95,	// (0x0001682b) bg_popup_window_pane_g9

0x9fa1,	// (0x00016837) bg_popup_window_pane_g10_ParamLimits

0x9fa1,	// (0x00016837) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0001c141) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0001c141) bg_popup_window_pane_g

0x9eca,	// (0x00016760) bg_popup_heading_pane_ParamLimits

0x9eca,	// (0x00016760) bg_popup_heading_pane

0x615f,	// (0x000129f5) tabs_4_passive_pane_cp_srt_ParamLimits

0x615f,	// (0x000129f5) tabs_4_passive_pane_cp_srt

0x6171,	// (0x00012a07) tabs_4_passive_pane_srt_ParamLimits

0x9ede,	// (0x00016774) heading_pane_g2

0x6171,	// (0x00012a07) tabs_4_passive_pane_srt

0x8b96,	// (0x0001542c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b96,	// (0x0001542c) bg_passive_tab_pane_cp3_srt

0x9ee6,	// (0x0001677c) heading_pane_t1_ParamLimits

0x9ee6,	// (0x0001677c) heading_pane_t1

0x9efd,	// (0x00016793) heading_pane_t2_ParamLimits

0x9efd,	// (0x00016793) heading_pane_t2

0x0001,

0xf8a6,	// (0x0001c13c) heading_pane_t_ParamLimits

0xf8a6,	// (0x0001c13c) heading_pane_t

0x99f5,	// (0x0001628b) bg_popup_heading_pane_g1

0x9aa4,	// (0x0001633a) bg_popup_heading_pane_g2

0x9aae,	// (0x00016344) bg_popup_heading_pane_g3

0x9ab8,	// (0x0001634e) bg_popup_heading_pane_g4

0x9ac2,	// (0x00016358) bg_popup_heading_pane_g5

0x9acc,	// (0x00016362) bg_popup_heading_pane_g6

0x9ad4,	// (0x0001636a) bg_popup_heading_pane_g7

0x9adc,	// (0x00016372) bg_popup_heading_pane_g8

0x9ae6,	// (0x0001637c) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0001c0f8) bg_popup_heading_pane_g

0x910e,	// (0x000159a4) bg_popup_sub_pane_g1

0x911e,	// (0x000159b4) bg_popup_sub_pane_g2

0x9116,	// (0x000159ac) bg_popup_sub_pane_g3

0x912e,	// (0x000159c4) bg_popup_sub_pane_g4

0x9126,	// (0x000159bc) bg_popup_sub_pane_g5

0x9136,	// (0x000159cc) bg_popup_sub_pane_g6

0x913e,	// (0x000159d4) bg_popup_sub_pane_g7

0x914e,	// (0x000159e4) bg_popup_sub_pane_g8

0x9146,	// (0x000159dc) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0001c0d2) bg_popup_sub_pane_g

0x39aa,	// (0x00010240) bg_popup_window_pane_cp5_ParamLimits

0x39aa,	// (0x00010240) bg_popup_window_pane_cp5

0x3ba6,	// (0x0001043c) popup_note_window_g1_ParamLimits

0x3ba6,	// (0x0001043c) popup_note_window_g1

0x3bb2,	// (0x00010448) popup_note_window_t1_ParamLimits

0x3bb2,	// (0x00010448) popup_note_window_t1

0x3bc8,	// (0x0001045e) popup_note_window_t2_ParamLimits

0x3bc8,	// (0x0001045e) popup_note_window_t2

0x3bde,	// (0x00010474) popup_note_window_t3_ParamLimits

0x3bde,	// (0x00010474) popup_note_window_t3

0x3bf4,	// (0x0001048a) popup_note_window_t4_ParamLimits

0x3bf4,	// (0x0001048a) popup_note_window_t4

0x3c1c,	// (0x000104b2) popup_note_window_t5_ParamLimits

0x3c1c,	// (0x000104b2) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001bdf0) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001bdf0) popup_note_window_t

0x3c66,	// (0x000104fc) bg_popup_window_pane_cp6_ParamLimits

0x3c66,	// (0x000104fc) bg_popup_window_pane_cp6

0x9971,	// (0x00016207) popup_note_image_window_g1_ParamLimits

0x9971,	// (0x00016207) popup_note_image_window_g1

0x997d,	// (0x00016213) popup_note_image_window_g2_ParamLimits

0x997d,	// (0x00016213) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0001c0c6) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0001c0c6) popup_note_image_window_g

0x9996,	// (0x0001622c) popup_note_image_window_t1_ParamLimits

0x9996,	// (0x0001622c) popup_note_image_window_t1

0x99af,	// (0x00016245) popup_note_image_window_t2_ParamLimits

0x99af,	// (0x00016245) popup_note_image_window_t2

0x99c8,	// (0x0001625e) popup_note_image_window_t3_ParamLimits

0x99c8,	// (0x0001625e) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0001c0cb) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0001c0cb) popup_note_image_window_t

0x9831,	// (0x000160c7) bg_popup_window_pane_cp7_ParamLimits

0x9831,	// (0x000160c7) bg_popup_window_pane_cp7

0x9861,	// (0x000160f7) popup_note_wait_window_g1_ParamLimits

0x9861,	// (0x000160f7) popup_note_wait_window_g1

0x986d,	// (0x00016103) popup_note_wait_window_g2_ParamLimits

0x986d,	// (0x00016103) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0001c0b4) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0001c0b4) popup_note_wait_window_g

0x9885,	// (0x0001611b) popup_note_wait_window_t1_ParamLimits

0x9885,	// (0x0001611b) popup_note_wait_window_t1

0x98ac,	// (0x00016142) popup_note_wait_window_t2_ParamLimits

0x98ac,	// (0x00016142) popup_note_wait_window_t2

0x98ca,	// (0x00016160) popup_note_wait_window_t3_ParamLimits

0x98ca,	// (0x00016160) popup_note_wait_window_t3

0x98dd,	// (0x00016173) popup_note_wait_window_t4_ParamLimits

0x98dd,	// (0x00016173) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0001c0bb) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0001c0bb) popup_note_wait_window_t

0x9902,	// (0x00016198) wait_bar_pane_ParamLimits

0x9902,	// (0x00016198) wait_bar_pane

0x3908,	// (0x0001019e) wait_anim_pane

0x3908,	// (0x0001019e) wait_border_pane

0x378f,	// (0x00010025) wait_anim_pane_g1

0x378f,	// (0x00010025) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001bf6f) wait_anim_pane_g

0x97d5,	// (0x0001606b) wait_border_pane_g1

0x97e0,	// (0x00016076) wait_border_pane_g2

0x97e9,	// (0x0001607f) wait_border_pane_g3

0x0002,

0xf817,	// (0x0001c0ad) wait_border_pane_g

0x963f,	// (0x00015ed5) bg_popup_window_pane_cp16_ParamLimits

0x963f,	// (0x00015ed5) bg_popup_window_pane_cp16

0x973f,	// (0x00015fd5) indicator_popup_pane_cp4_ParamLimits

0x973f,	// (0x00015fd5) indicator_popup_pane_cp4

0x9753,	// (0x00015fe9) popup_query_data_window_t1_ParamLimits

0x9753,	// (0x00015fe9) popup_query_data_window_t1

0x9765,	// (0x00015ffb) popup_query_data_window_t2_ParamLimits

0x9765,	// (0x00015ffb) popup_query_data_window_t2

0x977e,	// (0x00016014) popup_query_data_window_t3_ParamLimits

0x977e,	// (0x00016014) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0001c0a6) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0001c0a6) popup_query_data_window_t

0x9798,	// (0x0001602e) query_popup_data_pane_ParamLimits

0x9798,	// (0x0001602e) query_popup_data_pane

0x97ac,	// (0x00016042) query_popup_data_pane_cp1_ParamLimits

0x97ac,	// (0x00016042) query_popup_data_pane_cp1

0x963f,	// (0x00015ed5) bg_popup_window_pane_cp10_ParamLimits

0x963f,	// (0x00015ed5) bg_popup_window_pane_cp10

0x9671,	// (0x00015f07) indicator_popup_pane_ParamLimits

0x9671,	// (0x00015f07) indicator_popup_pane

0x9693,	// (0x00015f29) popup_query_code_window_t1_ParamLimits

0x9693,	// (0x00015f29) popup_query_code_window_t1

0x96ad,	// (0x00015f43) popup_query_code_window_t2_ParamLimits

0x96ad,	// (0x00015f43) popup_query_code_window_t2

0x96f6,	// (0x00015f8c) popup_query_code_window_t3_ParamLimits

0x96f6,	// (0x00015f8c) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0001c09f) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0001c09f) popup_query_code_window_t

0x9725,	// (0x00015fbb) query_popup_pane_ParamLimits

0x9725,	// (0x00015fbb) query_popup_pane

0x3c66,	// (0x000104fc) bg_popup_window_pane_cp15_ParamLimits

0x3c66,	// (0x000104fc) bg_popup_window_pane_cp15

0x3c86,	// (0x0001051c) indicator_popup_pane_cp1_ParamLimits

0x3c86,	// (0x0001051c) indicator_popup_pane_cp1

0x3c99,	// (0x0001052f) indicator_popup_pane_cp2_ParamLimits

0x3c99,	// (0x0001052f) indicator_popup_pane_cp2

0x3cb4,	// (0x0001054a) popup_query_data_code_window_g1_ParamLimits

0x3cb4,	// (0x0001054a) popup_query_data_code_window_g1

0x3cc7,	// (0x0001055d) popup_query_data_code_window_t1_ParamLimits

0x3cc7,	// (0x0001055d) popup_query_data_code_window_t1

0x3cd9,	// (0x0001056f) popup_query_data_code_window_t2_ParamLimits

0x3cd9,	// (0x0001056f) popup_query_data_code_window_t2

0x3ceb,	// (0x00010581) popup_query_data_code_window_t3_ParamLimits

0x3ceb,	// (0x00010581) popup_query_data_code_window_t3

0x3d01,	// (0x00010597) popup_query_data_code_window_t4_ParamLimits

0x3d01,	// (0x00010597) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001bdfb) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001bdfb) popup_query_data_code_window_t

0x5dff,	// (0x00012695) list_single_midp_graphic_pane_g3

0x3d1b,	// (0x000105b1) query_popup_data_pane_cp2_ParamLimits

0x3d2e,	// (0x000105c4) query_popup_pane_cp2_ParamLimits

0x3d2e,	// (0x000105c4) query_popup_pane_cp2

0x3908,	// (0x0001019e) bg_popup_window_pane_cp11

0x9623,	// (0x00015eb9) heading_pane_cp5

0x962b,	// (0x00015ec1) listscroll_popup_info_pane

0x3908,	// (0x0001019e) input_focus_pane_cp3

0x3d49,	// (0x000105df) query_popup_pane_t1

0x3d57,	// (0x000105ed) list_popup_info_pane_ParamLimits

0x3d57,	// (0x000105ed) list_popup_info_pane

0x3d66,	// (0x000105fc) listscroll_popup_info_pane_g1

0x3d6e,	// (0x00010604) scroll_pane_cp7

0x3d78,	// (0x0001060e) popup_info_list_pane_t1_ParamLimits

0x3d78,	// (0x0001060e) popup_info_list_pane_t1

0x3d92,	// (0x00010628) popup_info_list_pane_t2_ParamLimits

0x3d92,	// (0x00010628) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001be04) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001be04) popup_info_list_pane_t

0x3908,	// (0x0001019e) bg_popup_window_pane_cp12

0xaac4,	// (0x0001735a) find_popup_pane

0x39c2,	// (0x00010258) bg_popup_window_pane_cp3

0x3dac,	// (0x00010642) heading_pane_cp3

0x3dbb,	// (0x00010651) listscroll_popup_graphic_pane

0x3908,	// (0x0001019e) bg_popup_window_pane_cp4

0x7553,	// (0x00013de9) heading_pane_cp4

0x3dcb,	// (0x00010661) listscroll_popup_colour_pane

0x755d,	// (0x00013df3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x755d,	// (0x00013df3) cell_large_graphic_colour_none_popup_pane

0x7571,	// (0x00013e07) grid_large_graphic_colour_popup_pane_ParamLimits

0x7571,	// (0x00013e07) grid_large_graphic_colour_popup_pane

0x759d,	// (0x00013e33) listscroll_popup_colour_pane_g1_ParamLimits

0x759d,	// (0x00013e33) listscroll_popup_colour_pane_g1

0x75b4,	// (0x00013e4a) listscroll_popup_colour_pane_g2_ParamLimits

0x75b4,	// (0x00013e4a) listscroll_popup_colour_pane_g2

0x75cb,	// (0x00013e61) listscroll_popup_colour_pane_g3_ParamLimits

0x75cb,	// (0x00013e61) listscroll_popup_colour_pane_g3

0x75db,	// (0x00013e71) listscroll_popup_colour_pane_g4_ParamLimits

0x75db,	// (0x00013e71) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001be09) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001be09) listscroll_popup_colour_pane_g

0x3dd3,	// (0x00010669) scroll_pane_cp6_ParamLimits

0x3dd3,	// (0x00010669) scroll_pane_cp6

0x75ef,	// (0x00013e85) cell_large_graphic_colour_popup_pane_ParamLimits

0x75ef,	// (0x00013e85) cell_large_graphic_colour_popup_pane

0x3de5,	// (0x0001067b) cell_large_graphic_colour_none_popup_pane_t1

0x3908,	// (0x0001019e) grid_highlight_pane_cp5

0x3df4,	// (0x0001068a) cell_large_graphic_colour_popup_pane_g1

0x3dfc,	// (0x00010692) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001be12) cell_large_graphic_colour_popup_pane_g

0x3e04,	// (0x0001069a) cell_large_graphic_colour_popup_pane_g2_copy1

0x3e0d,	// (0x000106a3) grid_highlight_pane_cp4

0x3e15,	// (0x000106ab) bg_popup_window_pane_cp8_ParamLimits

0x3e15,	// (0x000106ab) bg_popup_window_pane_cp8

0x3e30,	// (0x000106c6) popup_snote_single_text_window_g1_ParamLimits

0x3e30,	// (0x000106c6) popup_snote_single_text_window_g1

0x3e42,	// (0x000106d8) popup_snote_single_text_window_t1_ParamLimits

0x3e42,	// (0x000106d8) popup_snote_single_text_window_t1

0x3e55,	// (0x000106eb) popup_snote_single_text_window_t2_ParamLimits

0x3e55,	// (0x000106eb) popup_snote_single_text_window_t2

0x3e68,	// (0x000106fe) popup_snote_single_text_window_t3_ParamLimits

0x3e68,	// (0x000106fe) popup_snote_single_text_window_t3

0x3ea1,	// (0x00010737) popup_snote_single_text_window_t4_ParamLimits

0x3ea1,	// (0x00010737) popup_snote_single_text_window_t4

0x3ed5,	// (0x0001076b) popup_snote_single_text_window_t5_ParamLimits

0x3ed5,	// (0x0001076b) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001be17) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001be17) popup_snote_single_text_window_t

0x3f04,	// (0x0001079a) bg_popup_window_pane_cp9_ParamLimits

0x3f04,	// (0x0001079a) bg_popup_window_pane_cp9

0x3e30,	// (0x000106c6) popup_snote_single_graphic_window_g1_ParamLimits

0x3e30,	// (0x000106c6) popup_snote_single_graphic_window_g1

0x3f12,	// (0x000107a8) popup_snote_single_graphic_window_g2_ParamLimits

0x3f12,	// (0x000107a8) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001be22) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001be22) popup_snote_single_graphic_window_g

0x3f1e,	// (0x000107b4) popup_snote_single_graphic_window_t1_ParamLimits

0x3f1e,	// (0x000107b4) popup_snote_single_graphic_window_t1

0x3f31,	// (0x000107c7) popup_snote_single_graphic_window_t2_ParamLimits

0x3f31,	// (0x000107c7) popup_snote_single_graphic_window_t2

0x3f44,	// (0x000107da) popup_snote_single_graphic_window_t3_ParamLimits

0x3f44,	// (0x000107da) popup_snote_single_graphic_window_t3

0x3f7d,	// (0x00010813) popup_snote_single_graphic_window_t4_ParamLimits

0x3f7d,	// (0x00010813) popup_snote_single_graphic_window_t4

0x3fb1,	// (0x00010847) popup_snote_single_graphic_window_t5_ParamLimits

0x3fb1,	// (0x00010847) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001be27) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001be27) popup_snote_single_graphic_window_t

0xaa02,	// (0x00017298) grid_graphic_popup_pane_ParamLimits

0xaa02,	// (0x00017298) grid_graphic_popup_pane

0xaa30,	// (0x000172c6) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa30,	// (0x000172c6) listscroll_popup_graphic_pane_g1

0xaa44,	// (0x000172da) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa44,	// (0x000172da) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0001c21c) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0001c21c) listscroll_popup_graphic_pane_g

0xaa58,	// (0x000172ee) scroll_pane_cp5

0xa99a,	// (0x00017230) cell_graphic_popup_pane_ParamLimits

0xa99a,	// (0x00017230) cell_graphic_popup_pane

0xa97b,	// (0x00017211) cell_graphic_popup_pane_g1

0xa983,	// (0x00017219) cell_graphic_popup_pane_g2

0x3e04,	// (0x0001069a) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0001c215) cell_graphic_popup_pane_g

0xa98c,	// (0x00017222) cell_graphic_popup_pane_t2

0x3e0d,	// (0x000106a3) grid_highlight_pane_cp3

0x3ff2,	// (0x00010888) list_gen_pane_ParamLimits

0x3ff2,	// (0x00010888) list_gen_pane

0x401a,	// (0x000108b0) scroll_pane

0xa8d3,	// (0x00017169) bg_list_pane_g1_ParamLimits

0xa8d3,	// (0x00017169) bg_list_pane_g1

0xa8f0,	// (0x00017186) bg_list_pane_g2_ParamLimits

0xa8f0,	// (0x00017186) bg_list_pane_g2

0xa905,	// (0x0001719b) bg_list_pane_g3_ParamLimits

0xa905,	// (0x0001719b) bg_list_pane_g3

0xa919,	// (0x000171af) bg_list_pane_g4_ParamLimits

0xa919,	// (0x000171af) bg_list_pane_g4

0xa92d,	// (0x000171c3) bg_list_pane_g5_ParamLimits

0xa92d,	// (0x000171c3) bg_list_pane_g5

0x0004,

0xf974,	// (0x0001c20a) bg_list_pane_g_ParamLimits

0xf974,	// (0x0001c20a) bg_list_pane_g

0xa7f9,	// (0x0001708f) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double2_graphic_large_graphic_pane

0xa7f9,	// (0x0001708f) list_double2_graphic_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double2_graphic_pane

0xa7f9,	// (0x0001708f) list_double2_large_graphic_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double2_large_graphic_pane

0xa7f9,	// (0x0001708f) list_double2_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double2_pane

0xa7f9,	// (0x0001708f) list_double_graphic_heading_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double_graphic_heading_pane

0xa7f9,	// (0x0001708f) list_double_graphic_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double_graphic_pane

0xa7f9,	// (0x0001708f) list_double_heading_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double_heading_pane

0xa7f9,	// (0x0001708f) list_double_large_graphic_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double_large_graphic_pane

0xa7f9,	// (0x0001708f) list_double_number_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double_number_pane

0xa7f9,	// (0x0001708f) list_double_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double_pane

0xa7f9,	// (0x0001708f) list_double_time_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_double_time_pane

0xa7f9,	// (0x0001708f) list_setting_number_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_setting_number_pane

0xa7f9,	// (0x0001708f) list_setting_pane_ParamLimits

0xa7f9,	// (0x0001708f) list_setting_pane

0xa874,	// (0x0001710a) list_single_2graphic_pane_ParamLimits

0xa874,	// (0x0001710a) list_single_2graphic_pane

0xa874,	// (0x0001710a) list_single_graphic_heading_pane_ParamLimits

0xa874,	// (0x0001710a) list_single_graphic_heading_pane

0xa874,	// (0x0001710a) list_single_graphic_pane_ParamLimits

0xa874,	// (0x0001710a) list_single_graphic_pane

0xa874,	// (0x0001710a) list_single_heading_pane_ParamLimits

0xa874,	// (0x0001710a) list_single_heading_pane

0xa8b8,	// (0x0001714e) list_single_large_graphic_pane_ParamLimits

0xa8b8,	// (0x0001714e) list_single_large_graphic_pane

0xa874,	// (0x0001710a) list_single_number_heading_pane_ParamLimits

0xa874,	// (0x0001710a) list_single_number_heading_pane

0xa874,	// (0x0001710a) list_single_number_pane_ParamLimits

0xa874,	// (0x0001710a) list_single_number_pane

0xa874,	// (0x0001710a) list_single_pane_ParamLimits

0xa874,	// (0x0001710a) list_single_pane

0x3908,	// (0x0001019e) list_highlight_pane_cp1

0x761a,	// (0x00013eb0) list_single_pane_g1_ParamLimits

0x761a,	// (0x00013eb0) list_single_pane_g1

0x7626,	// (0x00013ebc) list_single_pane_g2_ParamLimits

0x7626,	// (0x00013ebc) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001be39) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001be39) list_single_pane_g

0xa7b2,	// (0x00017048) list_single_pane_t1_ParamLimits

0xa7b2,	// (0x00017048) list_single_pane_t1

0x761a,	// (0x00013eb0) list_single_number_pane_g1_ParamLimits

0x761a,	// (0x00013eb0) list_single_number_pane_g1

0x7626,	// (0x00013ebc) list_single_number_pane_g2_ParamLimits

0x7626,	// (0x00013ebc) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001be39) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001be39) list_single_number_pane_g

0xa520,	// (0x00016db6) list_single_number_pane_t1_ParamLimits

0xa520,	// (0x00016db6) list_single_number_pane_t1

0xa536,	// (0x00016dcc) list_single_number_pane_t2_ParamLimits

0xa536,	// (0x00016dcc) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0001c1cb) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0001c1cb) list_single_number_pane_t

0x406f,	// (0x00010905) list_single_graphic_pane_g1_ParamLimits

0x406f,	// (0x00010905) list_single_graphic_pane_g1

0x761a,	// (0x00013eb0) list_single_graphic_pane_g2_ParamLimits

0x761a,	// (0x00013eb0) list_single_graphic_pane_g2

0x7626,	// (0x00013ebc) list_single_graphic_pane_g3_ParamLimits

0x7626,	// (0x00013ebc) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001be32) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001be32) list_single_graphic_pane_g

0x7632,	// (0x00013ec8) list_single_graphic_pane_t1_ParamLimits

0x7632,	// (0x00013ec8) list_single_graphic_pane_t1

0x761a,	// (0x00013eb0) list_single_heading_pane_g1_ParamLimits

0x761a,	// (0x00013eb0) list_single_heading_pane_g1

0x7626,	// (0x00013ebc) list_single_heading_pane_g2_ParamLimits

0x7626,	// (0x00013ebc) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001be39) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001be39) list_single_heading_pane_g

0x7648,	// (0x00013ede) list_single_heading_pane_t1_ParamLimits

0x7648,	// (0x00013ede) list_single_heading_pane_t1

0x765e,	// (0x00013ef4) list_single_heading_pane_t2_ParamLimits

0x765e,	// (0x00013ef4) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001be3e) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001be3e) list_single_heading_pane_t

0x761a,	// (0x00013eb0) list_single_number_heading_pane_g1_ParamLimits

0x761a,	// (0x00013eb0) list_single_number_heading_pane_g1

0x7626,	// (0x00013ebc) list_single_number_heading_pane_g2_ParamLimits

0x7626,	// (0x00013ebc) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001be39) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001be39) list_single_number_heading_pane_g

0x7648,	// (0x00013ede) list_single_number_heading_pane_t1_ParamLimits

0x7648,	// (0x00013ede) list_single_number_heading_pane_t1

0x7670,	// (0x00013f06) list_single_number_heading_pane_t2_ParamLimits

0x7670,	// (0x00013f06) list_single_number_heading_pane_t2

0x7682,	// (0x00013f18) list_single_number_heading_pane_t3_ParamLimits

0x7682,	// (0x00013f18) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001be43) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001be43) list_single_number_heading_pane_t

0x7694,	// (0x00013f2a) list_single_graphic_heading_pane_g1_ParamLimits

0x7694,	// (0x00013f2a) list_single_graphic_heading_pane_g1

0x76a0,	// (0x00013f36) list_single_graphic_heading_pane_g4_ParamLimits

0x76a0,	// (0x00013f36) list_single_graphic_heading_pane_g4

0x7626,	// (0x00013ebc) list_single_graphic_heading_pane_g5_ParamLimits

0x7626,	// (0x00013ebc) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001be4a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001be4a) list_single_graphic_heading_pane_g

0x7648,	// (0x00013ede) list_single_graphic_heading_pane_t1_ParamLimits

0x7648,	// (0x00013ede) list_single_graphic_heading_pane_t1

0x76b1,	// (0x00013f47) list_single_graphic_heading_pane_t2_ParamLimits

0x76b1,	// (0x00013f47) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001be51) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001be51) list_single_graphic_heading_pane_t

0x76c3,	// (0x00013f59) list_single_large_graphic_pane_g1_ParamLimits

0x76c3,	// (0x00013f59) list_single_large_graphic_pane_g1

0x761a,	// (0x00013eb0) list_single_large_graphic_pane_g2_ParamLimits

0x761a,	// (0x00013eb0) list_single_large_graphic_pane_g2

0x7626,	// (0x00013ebc) list_single_large_graphic_pane_g3_ParamLimits

0x7626,	// (0x00013ebc) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001be56) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001be56) list_single_large_graphic_pane_g

0x97e0,	// (0x00016076) wait_border_pane_g2_copy1

0x76cf,	// (0x00013f65) list_single_large_graphic_pane_g4_cp2

0x76d7,	// (0x00013f6d) list_single_large_graphic_pane_t1_ParamLimits

0x76d7,	// (0x00013f6d) list_single_large_graphic_pane_t1

0x76ed,	// (0x00013f83) list_double_pane_g1_ParamLimits

0x76ed,	// (0x00013f83) list_double_pane_g1

0x4063,	// (0x000108f9) list_double_pane_g2_ParamLimits

0x4063,	// (0x000108f9) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001be5d) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001be5d) list_double_pane_g

0x76f9,	// (0x00013f8f) list_double_pane_t1_ParamLimits

0x76f9,	// (0x00013f8f) list_double_pane_t1

0x770f,	// (0x00013fa5) list_double_pane_t2_ParamLimits

0x770f,	// (0x00013fa5) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001be62) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001be62) list_double_pane_t

0x7721,	// (0x00013fb7) list_double2_pane_g1_ParamLimits

0x7721,	// (0x00013fb7) list_double2_pane_g1

0x7732,	// (0x00013fc8) list_double2_pane_g2_ParamLimits

0x7732,	// (0x00013fc8) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001be67) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001be67) list_double2_pane_g

0x773e,	// (0x00013fd4) list_double2_pane_t1_ParamLimits

0x773e,	// (0x00013fd4) list_double2_pane_t1

0x7754,	// (0x00013fea) list_double2_pane_t2_ParamLimits

0x7754,	// (0x00013fea) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001be6c) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001be6c) list_double2_pane_t

0x76ed,	// (0x00013f83) list_double_number_pane_g1_ParamLimits

0x76ed,	// (0x00013f83) list_double_number_pane_g1

0x4063,	// (0x000108f9) list_double_number_pane_g2_ParamLimits

0x4063,	// (0x000108f9) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001be5d) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001be5d) list_double_number_pane_g

0x7766,	// (0x00013ffc) list_double_number_pane_t1_ParamLimits

0x7766,	// (0x00013ffc) list_double_number_pane_t1

0x7778,	// (0x0001400e) list_double_number_pane_t2_ParamLimits

0x7778,	// (0x0001400e) list_double_number_pane_t2

0x778e,	// (0x00014024) list_double_number_pane_t3_ParamLimits

0x778e,	// (0x00014024) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001be71) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001be71) list_double_number_pane_t

0x77a0,	// (0x00014036) list_double_graphic_pane_g1_ParamLimits

0x77a0,	// (0x00014036) list_double_graphic_pane_g1

0x77ac,	// (0x00014042) list_double_graphic_pane_g2_ParamLimits

0x77ac,	// (0x00014042) list_double_graphic_pane_g2

0x77bb,	// (0x00014051) list_double_graphic_pane_g3_ParamLimits

0x77bb,	// (0x00014051) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001be78) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001be78) list_double_graphic_pane_g

0x77d3,	// (0x00014069) list_double_graphic_pane_t1_ParamLimits

0x77d3,	// (0x00014069) list_double_graphic_pane_t1

0x77e9,	// (0x0001407f) list_double_graphic_pane_t2_ParamLimits

0x77e9,	// (0x0001407f) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001be81) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001be81) list_double_graphic_pane_t

0x77fb,	// (0x00014091) list_double2_graphic_pane_g1_ParamLimits

0x77fb,	// (0x00014091) list_double2_graphic_pane_g1

0x7807,	// (0x0001409d) list_double2_graphic_pane_g2_ParamLimits

0x7807,	// (0x0001409d) list_double2_graphic_pane_g2

0x7732,	// (0x00013fc8) list_double2_graphic_pane_g3_ParamLimits

0x7732,	// (0x00013fc8) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001be86) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001be86) list_double2_graphic_pane_g

0x7813,	// (0x000140a9) list_double2_graphic_pane_t1_ParamLimits

0x7813,	// (0x000140a9) list_double2_graphic_pane_t1

0x7829,	// (0x000140bf) list_double2_graphic_pane_t2_ParamLimits

0x7829,	// (0x000140bf) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001be8d) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001be8d) list_double2_graphic_pane_t

0x783b,	// (0x000140d1) list_double_large_graphic_pane_g1_ParamLimits

0x783b,	// (0x000140d1) list_double_large_graphic_pane_g1

0x785a,	// (0x000140f0) list_double_large_graphic_pane_g2_ParamLimits

0x785a,	// (0x000140f0) list_double_large_graphic_pane_g2

0x4063,	// (0x000108f9) list_double_large_graphic_pane_g3_ParamLimits

0x4063,	// (0x000108f9) list_double_large_graphic_pane_g3

0x786b,	// (0x00014101) list_double_large_graphic_pane_g4_ParamLimits

0x786b,	// (0x00014101) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001be92) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001be92) list_double_large_graphic_pane_g

0x787e,	// (0x00014114) list_double_large_graphic_pane_t1_ParamLimits

0x787e,	// (0x00014114) list_double_large_graphic_pane_t1

0x7897,	// (0x0001412d) list_double_large_graphic_pane_t2_ParamLimits

0x7897,	// (0x0001412d) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001be9d) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001be9d) list_double_large_graphic_pane_t

0x78a9,	// (0x0001413f) list_double2_large_graphic_pane_g1_ParamLimits

0x78a9,	// (0x0001413f) list_double2_large_graphic_pane_g1

0x7721,	// (0x00013fb7) list_double2_large_graphic_pane_g2_ParamLimits

0x7721,	// (0x00013fb7) list_double2_large_graphic_pane_g2

0x7732,	// (0x00013fc8) list_double2_large_graphic_pane_g3_ParamLimits

0x7732,	// (0x00013fc8) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001bea2) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001bea2) list_double2_large_graphic_pane_g

0x78b5,	// (0x0001414b) list_double2_large_graphic_pane_t1_ParamLimits

0x78b5,	// (0x0001414b) list_double2_large_graphic_pane_t1

0x78cb,	// (0x00014161) list_double2_large_graphic_pane_t2_ParamLimits

0x78cb,	// (0x00014161) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001bea9) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001bea9) list_double2_large_graphic_pane_t

0x78dd,	// (0x00014173) list_double_heading_pane_g1_ParamLimits

0x78dd,	// (0x00014173) list_double_heading_pane_g1

0x78ee,	// (0x00014184) list_double_heading_pane_g2_ParamLimits

0x78ee,	// (0x00014184) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001beae) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001beae) list_double_heading_pane_g

0x78fa,	// (0x00014190) list_double_heading_pane_t1_ParamLimits

0x78fa,	// (0x00014190) list_double_heading_pane_t1

0x7910,	// (0x000141a6) list_double_heading_pane_t2_ParamLimits

0x7910,	// (0x000141a6) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001beb3) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001beb3) list_double_heading_pane_t

0x7922,	// (0x000141b8) list_double_graphic_heading_pane_g1_ParamLimits

0x7922,	// (0x000141b8) list_double_graphic_heading_pane_g1

0x78dd,	// (0x00014173) list_double_graphic_heading_pane_g2_ParamLimits

0x78dd,	// (0x00014173) list_double_graphic_heading_pane_g2

0x78ee,	// (0x00014184) list_double_graphic_heading_pane_g3_ParamLimits

0x78ee,	// (0x00014184) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001beb8) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001beb8) list_double_graphic_heading_pane_g

0x792e,	// (0x000141c4) list_double_graphic_heading_pane_t1_ParamLimits

0x792e,	// (0x000141c4) list_double_graphic_heading_pane_t1

0x7944,	// (0x000141da) list_double_graphic_heading_pane_t2_ParamLimits

0x7944,	// (0x000141da) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001bebf) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001bebf) list_double_graphic_heading_pane_t

0x785a,	// (0x000140f0) list_double_time_pane_g1_ParamLimits

0x785a,	// (0x000140f0) list_double_time_pane_g1

0x4063,	// (0x000108f9) list_double_time_pane_g2_ParamLimits

0x4063,	// (0x000108f9) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001bec4) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001bec4) list_double_time_pane_g

0x7956,	// (0x000141ec) list_double_time_pane_t1_ParamLimits

0x7956,	// (0x000141ec) list_double_time_pane_t1

0x796c,	// (0x00014202) list_double_time_pane_t2_ParamLimits

0x796c,	// (0x00014202) list_double_time_pane_t2

0x797e,	// (0x00014214) list_double_time_pane_t3_ParamLimits

0x797e,	// (0x00014214) list_double_time_pane_t3

0x7990,	// (0x00014226) list_double_time_pane_t4_ParamLimits

0x7990,	// (0x00014226) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001bec9) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001bec9) list_double_time_pane_t

0x7807,	// (0x0001409d) list_setting_pane_g1_ParamLimits

0x7807,	// (0x0001409d) list_setting_pane_g1

0x7732,	// (0x00013fc8) list_setting_pane_g2_ParamLimits

0x7732,	// (0x00013fc8) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001bed2) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001bed2) list_setting_pane_g

0x79a2,	// (0x00014238) list_setting_pane_t1_ParamLimits

0x79a2,	// (0x00014238) list_setting_pane_t1

0x79b9,	// (0x0001424f) list_setting_pane_t2_ParamLimits

0x79b9,	// (0x0001424f) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001bed7) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001bed7) list_setting_pane_t

0x79f8,	// (0x0001428e) set_value_pane_cp_ParamLimits

0x79f8,	// (0x0001428e) set_value_pane_cp

0x7807,	// (0x0001409d) list_setting_number_pane_g1_ParamLimits

0x7807,	// (0x0001409d) list_setting_number_pane_g1

0x7732,	// (0x00013fc8) list_setting_number_pane_g2_ParamLimits

0x7732,	// (0x00013fc8) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001bed2) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001bed2) list_setting_number_pane_g

0x7a06,	// (0x0001429c) list_setting_number_pane_t1_ParamLimits

0x7a06,	// (0x0001429c) list_setting_number_pane_t1

0x7a1a,	// (0x000142b0) list_setting_number_pane_t2_ParamLimits

0x7a1a,	// (0x000142b0) list_setting_number_pane_t2

0x7a31,	// (0x000142c7) list_setting_number_pane_t3_ParamLimits

0x7a31,	// (0x000142c7) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001bede) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001bede) list_setting_number_pane_t

0x79f8,	// (0x0001428e) set_value_pane_ParamLimits

0x79f8,	// (0x0001428e) set_value_pane

0x407b,	// (0x00010911) bg_set_opt_pane_ParamLimits

0x407b,	// (0x00010911) bg_set_opt_pane

0x409c,	// (0x00010932) set_value_pane_t1

0x40aa,	// (0x00010940) slider_set_pane_cp3

0x40b3,	// (0x00010949) volume_small_pane_cp

0x40bc,	// (0x00010952) list_form_gen_pane

0x40c5,	// (0x0001095b) scroll_pane_cp8

0x7a74,	// (0x0001430a) form_field_data_pane_ParamLimits

0x7a74,	// (0x0001430a) form_field_data_pane

0x7a92,	// (0x00014328) form_field_data_wide_pane_ParamLimits

0x7a92,	// (0x00014328) form_field_data_wide_pane

0x40e6,	// (0x0001097c) form_field_popup_pane_ParamLimits

0x40e6,	// (0x0001097c) form_field_popup_pane

0x7ab9,	// (0x0001434f) form_field_popup_wide_pane_ParamLimits

0x7ab9,	// (0x0001434f) form_field_popup_wide_pane

0x4108,	// (0x0001099e) form_field_slider_pane_ParamLimits

0x4108,	// (0x0001099e) form_field_slider_pane

0x411b,	// (0x000109b1) form_field_slider_wide_pane_ParamLimits

0x411b,	// (0x000109b1) form_field_slider_wide_pane

0x412e,	// (0x000109c4) data_form_pane

0x7ae4,	// (0x0001437a) form_field_data_pane_t1

0x413a,	// (0x000109d0) input_focus_pane

0x4148,	// (0x000109de) data_form_wide_pane

0x4180,	// (0x00010a16) form_field_data_wide_pane_t1

0x3e22,	// (0x000106b8) input_focus_pane_cp6

0x7afe,	// (0x00014394) form_field_popup_pane_t1

0x413a,	// (0x000109d0) input_focus_pane_cp7

0x419f,	// (0x00010a35) list_form_pane

0x41b3,	// (0x00010a49) form_field_popup_wide_pane_t1

0x413a,	// (0x000109d0) input_focus_pane_cp8

0x41c5,	// (0x00010a5b) list_form_wide_pane

0x7b20,	// (0x000143b6) form_field_slider_pane_t1_ParamLimits

0x7b20,	// (0x000143b6) form_field_slider_pane_t1

0x7b34,	// (0x000143ca) form_field_slider_pane_t2_ParamLimits

0x7b34,	// (0x000143ca) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001beee) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001beee) form_field_slider_pane_t

0x39aa,	// (0x00010240) input_focus_pane_cp9_ParamLimits

0x39aa,	// (0x00010240) input_focus_pane_cp9

0x7b46,	// (0x000143dc) slider_cont_pane_ParamLimits

0x7b46,	// (0x000143dc) slider_cont_pane

0x41d1,	// (0x00010a67) form_field_slider_wide_pane_t1_ParamLimits

0x41d1,	// (0x00010a67) form_field_slider_wide_pane_t1

0x41e3,	// (0x00010a79) form_field_slider_wide_pane_t2_ParamLimits

0x41e3,	// (0x00010a79) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001bef3) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001bef3) form_field_slider_wide_pane_t

0x39aa,	// (0x00010240) input_focus_pane_cp10_ParamLimits

0x39aa,	// (0x00010240) input_focus_pane_cp10

0x7b5a,	// (0x000143f0) slider_cont_pane_cp1_ParamLimits

0x7b5a,	// (0x000143f0) slider_cont_pane_cp1

0x7b6e,	// (0x00014404) slider_form_pane_cp

0x41f5,	// (0x00010a8b) input_focus_pane_g1

0x41fd,	// (0x00010a93) input_focus_pane_g2

0x4205,	// (0x00010a9b) input_focus_pane_g3

0x420d,	// (0x00010aa3) input_focus_pane_g4

0x4215,	// (0x00010aab) input_focus_pane_g5

0x421d,	// (0x00010ab3) input_focus_pane_g6

0x4225,	// (0x00010abb) input_focus_pane_g7

0x422d,	// (0x00010ac3) input_focus_pane_g8

0x4235,	// (0x00010acb) input_focus_pane_g9

0x378f,	// (0x00010025) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001bef8) input_focus_pane_g

0x97e9,	// (0x0001607f) wait_border_pane_g3_copy1

0x7b76,	// (0x0001440c) data_form_pane_t1

0x378f,	// (0x00010025) wait_anim_pane_g1_copy1

0xa793,	// (0x00017029) data_form_wide_pane_t1

0x7b95,	// (0x0001442b) list_form_graphic_pane_cp_ParamLimits

0x7b95,	// (0x0001442b) list_form_graphic_pane_cp

0xa768,	// (0x00016ffe) slider_form_pane_g1

0xa771,	// (0x00017007) slider_form_pane_g2

0x0006,

0xf965,	// (0x0001c1fb) slider_form_pane_g

0x423d,	// (0x00010ad3) list_form_graphic_pane_ParamLimits

0x423d,	// (0x00010ad3) list_form_graphic_pane

0x424f,	// (0x00010ae5) list_form_graphic_pane_g1

0x4257,	// (0x00010aed) list_form_graphic_pane_t1_ParamLimits

0x4257,	// (0x00010aed) list_form_graphic_pane_t1

0x39c2,	// (0x00010258) list_highlight_pane_cp5_ParamLimits

0x39c2,	// (0x00010258) list_highlight_pane_cp5

0x7baa,	// (0x00014440) find_pane_g1

0x7bb3,	// (0x00014449) input_find_pane

0x7bbc,	// (0x00014452) input_find_pane_g1_ParamLimits

0x7bbc,	// (0x00014452) input_find_pane_g1

0x7bc8,	// (0x0001445e) input_find_pane_t1_ParamLimits

0x7bc8,	// (0x0001445e) input_find_pane_t1

0x7bdd,	// (0x00014473) input_find_pane_t2_ParamLimits

0x7bdd,	// (0x00014473) input_find_pane_t2

0x0001,

0xf677,	// (0x0001bf0d) input_find_pane_t_ParamLimits

0xf677,	// (0x0001bf0d) input_find_pane_t

0x7bf2,	// (0x00014488) input_focus_pane_cp5_ParamLimits

0x7bf2,	// (0x00014488) input_focus_pane_cp5

0x7c11,	// (0x000144a7) bg_popup_window_pane_cp2_ParamLimits

0x7c11,	// (0x000144a7) bg_popup_window_pane_cp2

0x7c1e,	// (0x000144b4) listscroll_menu_pane_ParamLimits

0x7c1e,	// (0x000144b4) listscroll_menu_pane

0x7c2a,	// (0x000144c0) popup_submenu_window_ParamLimits

0x7c2a,	// (0x000144c0) popup_submenu_window

0x7c5a,	// (0x000144f0) find_popup_pane_g1

0x7c62,	// (0x000144f8) input_popup_find_pane_cp

0x7c6c,	// (0x00014502) input_focus_pane_cp4_ParamLimits

0x7c6c,	// (0x00014502) input_focus_pane_cp4

0x7c88,	// (0x0001451e) input_popup_find_pane_t1_ParamLimits

0x7c88,	// (0x0001451e) input_popup_find_pane_t1

0x3908,	// (0x0001019e) bg_popup_sub_pane_cp

0x7cb6,	// (0x0001454c) listscroll_popup_sub_pane

0x7cbe,	// (0x00014554) list_submenu_pane_ParamLimits

0x7cbe,	// (0x00014554) list_submenu_pane

0x7ccf,	// (0x00014565) scroll_pane_cp4

0x7cd7,	// (0x0001456d) list_single_popup_submenu_pane_ParamLimits

0x7cd7,	// (0x0001456d) list_single_popup_submenu_pane

0x7cec,	// (0x00014582) list_single_popup_submenu_pane_g1

0x7cf4,	// (0x0001458a) list_single_popup_submenu_pane_t1_ParamLimits

0x7cf4,	// (0x0001458a) list_single_popup_submenu_pane_t1

0x39c2,	// (0x00010258) bg_active_tab_pane_cp1_ParamLimits

0x39c2,	// (0x00010258) bg_active_tab_pane_cp1

0x7d09,	// (0x0001459f) tabs_2_active_pane_g1

0x7d11,	// (0x000145a7) tabs_2_active_pane_t1

0x39c2,	// (0x00010258) bg_passive_tab_pane_cp1_ParamLimits

0x39c2,	// (0x00010258) bg_passive_tab_pane_cp1

0x7d09,	// (0x0001459f) tabs_2_passive_pane_g1

0x7d11,	// (0x000145a7) tabs_2_passive_pane_t1

0x7d23,	// (0x000145b9) bg_active_tab_pane_cp4

0x7d31,	// (0x000145c7) tabs_2_long_active_pane_t1

0x7d44,	// (0x000145da) bg_passive_tab_pane_cp4

0x5e07,	// (0x0001269d) list_single_midp_graphic_pane_g4_ParamLimits

0x7d23,	// (0x000145b9) bg_active_tab_pane_cp5

0x7d50,	// (0x000145e6) tabs_3_long_active_pane_t1

0x7d44,	// (0x000145da) bg_passive_tab_pane_cp5

0x5e07,	// (0x0001269d) list_single_midp_graphic_pane_g4

0x39c2,	// (0x00010258) bg_popup_window_pane_cp13_ParamLimits

0x39c2,	// (0x00010258) bg_popup_window_pane_cp13

0x7d6b,	// (0x00014601) listscroll_popup_fast_pane_ParamLimits

0x7d6b,	// (0x00014601) listscroll_popup_fast_pane

0x7d7a,	// (0x00014610) grid_popup_fast_pane_ParamLimits

0x7d7a,	// (0x00014610) grid_popup_fast_pane

0x7d8c,	// (0x00014622) scroll_pane_cp9_ParamLimits

0x7d8c,	// (0x00014622) scroll_pane_cp9

0xc6cc,	// (0x00018f62) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6cc,	// (0x00018f62) list_single_graphic_hl_pane_t1_cp2

0x7db0,	// (0x00014646) input_focus_pane_cp20_ParamLimits

0x7db0,	// (0x00014646) input_focus_pane_cp20

0x7dbe,	// (0x00014654) query_popup_data_pane_t1_ParamLimits

0x7dbe,	// (0x00014654) query_popup_data_pane_t1

0x7dd1,	// (0x00014667) query_popup_data_pane_t2_ParamLimits

0x7dd1,	// (0x00014667) query_popup_data_pane_t2

0x7e17,	// (0x000146ad) query_popup_data_pane_t3_ParamLimits

0x7e17,	// (0x000146ad) query_popup_data_pane_t3

0x7e58,	// (0x000146ee) query_popup_data_pane_t4_ParamLimits

0x7e58,	// (0x000146ee) query_popup_data_pane_t4

0x7e94,	// (0x0001472a) query_popup_data_pane_t5_ParamLimits

0x7e94,	// (0x0001472a) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001bf12) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001bf12) query_popup_data_pane_t

0x41f5,	// (0x00010a8b) bg_set_opt_pane_g1

0x41fd,	// (0x00010a93) bg_set_opt_pane_g2

0x4205,	// (0x00010a9b) bg_set_opt_pane_g3

0x420d,	// (0x00010aa3) bg_set_opt_pane_g4

0x4215,	// (0x00010aab) bg_set_opt_pane_g5

0x421d,	// (0x00010ab3) bg_set_opt_pane_g6

0x4225,	// (0x00010abb) bg_set_opt_pane_g7

0x422d,	// (0x00010ac3) bg_set_opt_pane_g8

0x4235,	// (0x00010acb) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001bf1d) bg_set_opt_pane_g

0x538d,	// (0x00011c23) control_top_pane_stacon_ParamLimits

0x538d,	// (0x00011c23) control_top_pane_stacon

0x53e0,	// (0x00011c76) signal_pane_stacon_ParamLimits

0x53e0,	// (0x00011c76) signal_pane_stacon

0x84f0,	// (0x00014d86) stacon_top_pane_g1_ParamLimits

0x84f0,	// (0x00014d86) stacon_top_pane_g1

0x5405,	// (0x00011c9b) title_pane_stacon_ParamLimits

0x5405,	// (0x00011c9b) title_pane_stacon

0x542f,	// (0x00011cc5) uni_indicator_pane_stacon_ParamLimits

0x542f,	// (0x00011cc5) uni_indicator_pane_stacon

0x5444,	// (0x00011cda) battery_pane_stacon_ParamLimits

0x5444,	// (0x00011cda) battery_pane_stacon

0x5488,	// (0x00011d1e) control_bottom_pane_stacon_ParamLimits

0x5488,	// (0x00011d1e) control_bottom_pane_stacon

0x54ab,	// (0x00011d41) navi_pane_stacon_ParamLimits

0x54ab,	// (0x00011d41) navi_pane_stacon

0x8512,	// (0x00014da8) stacon_bottom_pane_g1_ParamLimits

0x8512,	// (0x00014da8) stacon_bottom_pane_g1

0x50ea,	// (0x00011980) aid_levels_signal_lsc_ParamLimits

0x50ea,	// (0x00011980) aid_levels_signal_lsc

0x5101,	// (0x00011997) signal_pane_stacon_g1_ParamLimits

0x5101,	// (0x00011997) signal_pane_stacon_g1

0x5115,	// (0x000119ab) signal_pane_stacon_g2_ParamLimits

0x5115,	// (0x000119ab) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001bf30) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001bf30) signal_pane_stacon_g

0x514a,	// (0x000119e0) title_pane_stacon_t1_ParamLimits

0x514a,	// (0x000119e0) title_pane_stacon_t1

0x7ed8,	// (0x0001476e) uni_indicator_pane_stacon_g1

0x7ee2,	// (0x00014778) uni_indicator_pane_stacon_g2

0x7eec,	// (0x00014782) uni_indicator_pane_stacon_g3

0x7ef6,	// (0x0001478c) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001bf3c) uni_indicator_pane_stacon_g

0x516f,	// (0x00011a05) control_top_pane_stacon_g1

0x5177,	// (0x00011a0d) control_top_pane_stacon_t1_ParamLimits

0x5177,	// (0x00011a0d) control_top_pane_stacon_t1

0x51ae,	// (0x00011a44) aid_levels_battery_lsc_ParamLimits

0x51ae,	// (0x00011a44) aid_levels_battery_lsc

0x51c6,	// (0x00011a5c) battery_pane_stacon_g1_ParamLimits

0x51c6,	// (0x00011a5c) battery_pane_stacon_g1

0x51d9,	// (0x00011a6f) battery_pane_stacon_g2_ParamLimits

0x51d9,	// (0x00011a6f) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001bf45) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001bf45) battery_pane_stacon_g

0x5217,	// (0x00011aad) navi_icon_pane_stacon

0x522b,	// (0x00011ac1) navi_navi_pane_stacon

0x5217,	// (0x00011aad) navi_text_pane_stacon

0x516f,	// (0x00011a05) control_bottom_pane_stacon_g1

0x5241,	// (0x00011ad7) control_bottom_pane_stacon_t1_ParamLimits

0x5241,	// (0x00011ad7) control_bottom_pane_stacon_t1

0x7f1a,	// (0x000147b0) grid_app_pane_ParamLimits

0x7f1a,	// (0x000147b0) grid_app_pane

0x7f3c,	// (0x000147d2) scroll_pane_cp15_ParamLimits

0x7f3c,	// (0x000147d2) scroll_pane_cp15

0x7f4f,	// (0x000147e5) cell_app_pane_ParamLimits

0x7f4f,	// (0x000147e5) cell_app_pane

0x7f7b,	// (0x00014811) cell_app_pane_g1_ParamLimits

0x7f7b,	// (0x00014811) cell_app_pane_g1

0x7f9f,	// (0x00014835) cell_app_pane_g2_ParamLimits

0x7f9f,	// (0x00014835) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001bf4a) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001bf4a) cell_app_pane_g

0x7fab,	// (0x00014841) cell_app_pane_t1_ParamLimits

0x7fab,	// (0x00014841) cell_app_pane_t1

0x7fc2,	// (0x00014858) grid_highlight_pane_ParamLimits

0x7fc2,	// (0x00014858) grid_highlight_pane

0x41f5,	// (0x00010a8b) cell_highlight_pane_g1

0x41fd,	// (0x00010a93) cell_highlight_pane_g2

0x4205,	// (0x00010a9b) cell_highlight_pane_g3

0x420d,	// (0x00010aa3) cell_highlight_pane_g4

0x4215,	// (0x00010aab) cell_highlight_pane_g5

0x421d,	// (0x00010ab3) cell_highlight_pane_g6

0x4225,	// (0x00010abb) cell_highlight_pane_g7

0x422d,	// (0x00010ac3) cell_highlight_pane_g8

0x4235,	// (0x00010acb) cell_highlight_pane_g9

0x378f,	// (0x00010025) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001bef8) cell_highlight_pane_g

0x7fd3,	// (0x00014869) bg_scroll_pane

0x528b,	// (0x00011b21) scroll_handle_pane

0x801a,	// (0x000148b0) scroll_bg_pane_g1

0x802f,	// (0x000148c5) scroll_bg_pane_g2

0x8047,	// (0x000148dd) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001bf4f) scroll_bg_pane_g

0x805c,	// (0x000148f2) scroll_handle_focus_pane_ParamLimits

0x805c,	// (0x000148f2) scroll_handle_focus_pane

0x801a,	// (0x000148b0) scroll_handle_pane_g1

0x8069,	// (0x000148ff) scroll_handle_pane_g2

0x8047,	// (0x000148dd) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001bf56) scroll_handle_pane_g

0x7c6c,	// (0x00014502) bg_popup_sub_pane_cp21_ParamLimits

0x7c6c,	// (0x00014502) bg_popup_sub_pane_cp21

0x807d,	// (0x00014913) popup_fep_japan_predictive_window_t1_ParamLimits

0x807d,	// (0x00014913) popup_fep_japan_predictive_window_t1

0x8094,	// (0x0001492a) popup_fep_japan_predictive_window_t2_ParamLimits

0x8094,	// (0x0001492a) popup_fep_japan_predictive_window_t2

0x80c7,	// (0x0001495d) popup_fep_japan_predictive_window_t3_ParamLimits

0x80c7,	// (0x0001495d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001bf5d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001bf5d) popup_fep_japan_predictive_window_t

0x3908,	// (0x0001019e) bg_popup_sub_pane_cp23

0x80fe,	// (0x00014994) listscroll_japin_cand_pane

0x8106,	// (0x0001499c) popup_fep_japan_candidate_window_t1

0x8114,	// (0x000149aa) candidate_pane_ParamLimits

0x8114,	// (0x000149aa) candidate_pane

0x8126,	// (0x000149bc) scroll_pane_cp30

0x8130,	// (0x000149c6) list_single_popup_jap_candidate_pane_ParamLimits

0x8130,	// (0x000149c6) list_single_popup_jap_candidate_pane

0x3908,	// (0x0001019e) list_highlight_pane_cp30

0x8144,	// (0x000149da) list_single_popup_jap_candidate_pane_t1

0x8153,	// (0x000149e9) level_1_signal

0x8160,	// (0x000149f6) level_2_signal

0x816d,	// (0x00014a03) level_3_signal

0x817a,	// (0x00014a10) level_4_signal

0x8187,	// (0x00014a1d) level_5_signal

0x8194,	// (0x00014a2a) level_6_signal

0x81a1,	// (0x00014a37) level_7_signal

0x8153,	// (0x000149e9) level_1_battery

0x8160,	// (0x000149f6) level_2_battery

0x816d,	// (0x00014a03) level_3_battery

0x817a,	// (0x00014a10) level_4_battery

0x8187,	// (0x00014a1d) level_5_battery

0x8194,	// (0x00014a2a) level_6_battery

0x81a1,	// (0x00014a37) level_7_battery

0x81c6,	// (0x00014a5c) list_menu_pane_ParamLimits

0x81c6,	// (0x00014a5c) list_menu_pane

0x81dc,	// (0x00014a72) scroll_pane_cp25_ParamLimits

0x81dc,	// (0x00014a72) scroll_pane_cp25

0x81f5,	// (0x00014a8b) list_double2_graphic_pane_cp2_ParamLimits

0x81f5,	// (0x00014a8b) list_double2_graphic_pane_cp2

0x81f5,	// (0x00014a8b) list_double2_large_graphic_pane_cp2_ParamLimits

0x81f5,	// (0x00014a8b) list_double2_large_graphic_pane_cp2

0x81f5,	// (0x00014a8b) list_double2_pane_cp2_ParamLimits

0x81f5,	// (0x00014a8b) list_double2_pane_cp2

0x81f5,	// (0x00014a8b) list_double_graphic_pane_cp2_ParamLimits

0x81f5,	// (0x00014a8b) list_double_graphic_pane_cp2

0x81f5,	// (0x00014a8b) list_double_large_graphic_pane_cp2_ParamLimits

0x81f5,	// (0x00014a8b) list_double_large_graphic_pane_cp2

0x81f5,	// (0x00014a8b) list_double_number_pane_cp2_ParamLimits

0x81f5,	// (0x00014a8b) list_double_number_pane_cp2

0x81f5,	// (0x00014a8b) list_double_pane_cp2_ParamLimits

0x81f5,	// (0x00014a8b) list_double_pane_cp2

0x821b,	// (0x00014ab1) list_single_2graphic_pane_cp2_ParamLimits

0x821b,	// (0x00014ab1) list_single_2graphic_pane_cp2

0x821b,	// (0x00014ab1) list_single_graphic_heading_pane_cp2_ParamLimits

0x821b,	// (0x00014ab1) list_single_graphic_heading_pane_cp2

0x821b,	// (0x00014ab1) list_single_graphic_pane_cp2_ParamLimits

0x821b,	// (0x00014ab1) list_single_graphic_pane_cp2

0x821b,	// (0x00014ab1) list_single_heading_pane_cp2_ParamLimits

0x821b,	// (0x00014ab1) list_single_heading_pane_cp2

0x8238,	// (0x00014ace) list_single_large_graphic_pane_cp2_ParamLimits

0x8238,	// (0x00014ace) list_single_large_graphic_pane_cp2

0x821b,	// (0x00014ab1) list_single_number_heading_pane_cp2_ParamLimits

0x821b,	// (0x00014ab1) list_single_number_heading_pane_cp2

0x821b,	// (0x00014ab1) list_single_number_pane_cp2_ParamLimits

0x821b,	// (0x00014ab1) list_single_number_pane_cp2

0x821b,	// (0x00014ab1) list_single_pane_cp2_ParamLimits

0x821b,	// (0x00014ab1) list_single_pane_cp2

0x82a6,	// (0x00014b3c) bg_popup_sub_pane_cp22

0x533d,	// (0x00011bd3) popup_side_volume_key_window_g1

0x5367,	// (0x00011bfd) popup_side_volume_key_window_t1

0x5385,	// (0x00011c1b) volume_small_pane_cp1

0x39aa,	// (0x00010240) bg_popup_sub_pane_cp24_ParamLimits

0x39aa,	// (0x00010240) bg_popup_sub_pane_cp24

0x82bc,	// (0x00014b52) fep_china_uni_candidate_pane_ParamLimits

0x82bc,	// (0x00014b52) fep_china_uni_candidate_pane

0x82d0,	// (0x00014b66) fep_china_uni_entry_pane

0x82e0,	// (0x00014b76) popup_fep_china_uni_window_g1

0x82fc,	// (0x00014b92) fep_china_uni_entry_pane_g1

0x8306,	// (0x00014b9c) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001bf8e) fep_china_uni_entry_pane_g

0x8310,	// (0x00014ba6) fep_entry_item_pane

0x831a,	// (0x00014bb0) fep_candidate_item_pane

0x8322,	// (0x00014bb8) fep_china_uni_candidate_pane_g1

0x832c,	// (0x00014bc2) fep_china_uni_candidate_pane_g2

0x8334,	// (0x00014bca) fep_china_uni_candidate_pane_g3

0x833c,	// (0x00014bd2) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001bf93) fep_china_uni_candidate_pane_g

0x378f,	// (0x00010025) fep_entry_item_pane_g1

0x8346,	// (0x00014bdc) fep_entry_item_pane_t1_ParamLimits

0x8346,	// (0x00014bdc) fep_entry_item_pane_t1

0x835c,	// (0x00014bf2) fep_candidate_item_pane_t1_ParamLimits

0x835c,	// (0x00014bf2) fep_candidate_item_pane_t1

0x8371,	// (0x00014c07) fep_candidate_item_pane_t2_ParamLimits

0x8371,	// (0x00014c07) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001bf9c) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001bf9c) fep_candidate_item_pane_t

0x39c2,	// (0x00010258) list_highlight_pane_cp31_ParamLimits

0x39c2,	// (0x00010258) list_highlight_pane_cp31

0x8383,	// (0x00014c19) level_1_signal_lsc

0x838c,	// (0x00014c22) level_2_signal_lsc

0x8395,	// (0x00014c2b) level_3_signal_lsc

0x839e,	// (0x00014c34) level_4_signal_lsc

0x83a7,	// (0x00014c3d) level_5_signal_lsc

0x83b0,	// (0x00014c46) level_6_signal_lsc

0x83b9,	// (0x00014c4f) level_7_signal_lsc

0x83b9,	// (0x00014c4f) level_1_battery_lsc

0x83c2,	// (0x00014c58) level_2_battery_lsc

0x83cb,	// (0x00014c61) level_3_battery_lsc

0x83d4,	// (0x00014c6a) level_4_battery_lsc

0x83dd,	// (0x00014c73) level_5_battery_lsc

0x83e6,	// (0x00014c7c) level_6_battery_lsc

0x8383,	// (0x00014c19) level_7_battery_lsc

0x83ef,	// (0x00014c85) scroll_handle_focus_pane_g1

0x83f8,	// (0x00014c8e) scroll_handle_focus_pane_g2

0x8401,	// (0x00014c97) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001bfa1) scroll_handle_focus_pane_g

0x840a,	// (0x00014ca0) list_single_2graphic_pane_g1_ParamLimits

0x840a,	// (0x00014ca0) list_single_2graphic_pane_g1

0x76a0,	// (0x00013f36) list_single_2graphic_pane_g2_ParamLimits

0x76a0,	// (0x00013f36) list_single_2graphic_pane_g2

0x7626,	// (0x00013ebc) list_single_2graphic_pane_g3_ParamLimits

0x7626,	// (0x00013ebc) list_single_2graphic_pane_g3

0x8416,	// (0x00014cac) list_single_2graphic_pane_g4_ParamLimits

0x8416,	// (0x00014cac) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001bfa8) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001bfa8) list_single_2graphic_pane_g

0x8427,	// (0x00014cbd) list_single_2graphic_pane_t1_ParamLimits

0x8427,	// (0x00014cbd) list_single_2graphic_pane_t1

0x8455,	// (0x00014ceb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8455,	// (0x00014ceb) list_double2_graphic_large_graphic_pane_g1

0x7721,	// (0x00013fb7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7721,	// (0x00013fb7) list_double2_graphic_large_graphic_pane_g2

0x7732,	// (0x00013fc8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7732,	// (0x00013fc8) list_double2_graphic_large_graphic_pane_g3

0x8467,	// (0x00014cfd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8467,	// (0x00014cfd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001bfb1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001bfb1) list_double2_graphic_large_graphic_pane_g

0x8473,	// (0x00014d09) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8473,	// (0x00014d09) list_double2_graphic_large_graphic_pane_t1

0x8489,	// (0x00014d1f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8489,	// (0x00014d1f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001bfba) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001bfba) list_double2_graphic_large_graphic_pane_t

0x85d5,	// (0x00014e6b) popup_fast_swap_window_ParamLimits

0x85d5,	// (0x00014e6b) popup_fast_swap_window

0x85f3,	// (0x00014e89) popup_side_volume_key_window

0x8611,	// (0x00014ea7) stacon_top_pane

0x861b,	// (0x00014eb1) status_pane_ParamLimits

0x861b,	// (0x00014eb1) status_pane

0x8629,	// (0x00014ebf) status_small_pane

0x3908,	// (0x0001019e) control_pane

0x3908,	// (0x0001019e) stacon_bottom_pane

0x40c5,	// (0x0001095b) scroll_pane_cp121

0x40bc,	// (0x00010952) set_content_pane

0x849b,	// (0x00014d31) bg_active_tab_pane_g1_cp1

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp1

0x84ad,	// (0x00014d43) bg_active_tab_pane_g3_cp1

0x849b,	// (0x00014d31) bg_passive_tab_pane_g1_cp1

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp1

0x84ad,	// (0x00014d43) bg_passive_tab_pane_g3_cp1

0x84b6,	// (0x00014d4c) bg_active_tab_pane_g1_cp2

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp2

0x84bf,	// (0x00014d55) bg_active_tab_pane_g3_cp2

0x84b6,	// (0x00014d4c) bg_passive_tab_pane_g1_cp2

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp2

0x84bf,	// (0x00014d55) bg_passive_tab_pane_g3_cp2

0x84c8,	// (0x00014d5e) bg_active_tab_pane_g1_cp3

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp3

0x84d1,	// (0x00014d67) bg_active_tab_pane_g3_cp3

0x84c8,	// (0x00014d5e) bg_passive_tab_pane_g1_cp3

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp3

0x84d1,	// (0x00014d67) bg_passive_tab_pane_g3_cp3

0x84da,	// (0x00014d70) bg_active_tab_pane_g1_cp4

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp4

0x84e5,	// (0x00014d7b) bg_active_tab_pane_g3_cp4

0x84da,	// (0x00014d70) bg_passive_tab_pane_g1_cp4

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp4

0x84e5,	// (0x00014d7b) bg_passive_tab_pane_g3_cp4

0x852e,	// (0x00014dc4) bg_active_tab_pane_g1_cp5

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp5

0x8537,	// (0x00014dcd) bg_active_tab_pane_g3_cp5

0x852e,	// (0x00014dc4) bg_passive_tab_pane_g1_cp5

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp5

0x8537,	// (0x00014dcd) bg_passive_tab_pane_g3_cp5

0x8540,	// (0x00014dd6) list_set_graphic_pane_ParamLimits

0x8540,	// (0x00014dd6) list_set_graphic_pane

0x3908,	// (0x0001019e) bg_set_opt_pane_cp4

0x8556,	// (0x00014dec) list_set_graphic_pane_g1_ParamLimits

0x8556,	// (0x00014dec) list_set_graphic_pane_g1

0x8562,	// (0x00014df8) list_set_graphic_pane_g2_ParamLimits

0x8562,	// (0x00014df8) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001bfbf) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001bfbf) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0001c340) volume_small_pane_cp_g

0x8586,	// (0x00014e1c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8586,	// (0x00014e1c) list_double2_large_graphic_pane_g1_cp2

0x8594,	// (0x00014e2a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8594,	// (0x00014e2a) list_double2_large_graphic_pane_g2_cp2

0x85a5,	// (0x00014e3b) list_double2_large_graphic_pane_g3_cp2

0x85ad,	// (0x00014e43) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x85ad,	// (0x00014e43) list_double2_large_graphic_pane_t1_cp2

0x85c3,	// (0x00014e59) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x85c3,	// (0x00014e59) list_double2_large_graphic_pane_t2_cp2

0xa2cd,	// (0x00016b63) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa2cd,	// (0x00016b63) list_double_large_graphic_pane_g1_cp2

0xa2e0,	// (0x00016b76) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa2e0,	// (0x00016b76) list_double_large_graphic_pane_g2_cp2

0x8744,	// (0x00014fda) list_double_large_graphic_pane_g3_cp2

0xa2f1,	// (0x00016b87) list_double_large_graphic_pane_g4_cp

0xa2f9,	// (0x00016b8f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa2f9,	// (0x00016b8f) list_double_large_graphic_pane_t1_cp2

0xa310,	// (0x00016ba6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa310,	// (0x00016ba6) list_double_large_graphic_pane_t2_cp2

0x8634,	// (0x00014eca) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8634,	// (0x00014eca) list_double2_graphic_pane_g1_cp2

0x8642,	// (0x00014ed8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8642,	// (0x00014ed8) list_double2_graphic_pane_g2_cp2

0x8653,	// (0x00014ee9) list_double2_graphic_pane_g3_cp2

0x865d,	// (0x00014ef3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x865d,	// (0x00014ef3) list_double2_graphic_pane_t1_cp2

0x8673,	// (0x00014f09) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8673,	// (0x00014f09) list_double2_graphic_pane_t2_cp2

0x8685,	// (0x00014f1b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8685,	// (0x00014f1b) list_single_number_heading_pane_g1_cp2

0x8691,	// (0x00014f27) list_single_number_heading_pane_g2_cp2

0x8699,	// (0x00014f2f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8699,	// (0x00014f2f) list_single_number_heading_pane_t1_cp2

0x86af,	// (0x00014f45) list_single_number_heading_pane_t2_cp2_ParamLimits

0x86af,	// (0x00014f45) list_single_number_heading_pane_t2_cp2

0x86c3,	// (0x00014f59) list_single_number_heading_pane_t3_cp2_ParamLimits

0x86c3,	// (0x00014f59) list_single_number_heading_pane_t3_cp2

0x8685,	// (0x00014f1b) list_single_heading_pane_g1_cp2_ParamLimits

0x8685,	// (0x00014f1b) list_single_heading_pane_g1_cp2

0x8691,	// (0x00014f27) list_single_heading_pane_g2_cp2

0x8699,	// (0x00014f2f) list_single_heading_pane_t1_cp2_ParamLimits

0x8699,	// (0x00014f2f) list_single_heading_pane_t1_cp2

0xa0c7,	// (0x0001695d) list_single_heading_pane_t2_cp2_ParamLimits

0xa0c7,	// (0x0001695d) list_single_heading_pane_t2_cp2

0xa00f,	// (0x000168a5) list_double_graphic_pane_g1_cp2_ParamLimits

0xa00f,	// (0x000168a5) list_double_graphic_pane_g1_cp2

0xa01b,	// (0x000168b1) list_double_graphic_pane_g2_cp2_ParamLimits

0xa01b,	// (0x000168b1) list_double_graphic_pane_g2_cp2

0xa02a,	// (0x000168c0) list_double_graphic_pane_g3_cp2

0xa032,	// (0x000168c8) list_double_graphic_pane_t1_cp2_ParamLimits

0xa032,	// (0x000168c8) list_double_graphic_pane_t1_cp2

0xa048,	// (0x000168de) list_double_graphic_pane_t2_cp2_ParamLimits

0xa048,	// (0x000168de) list_double_graphic_pane_t2_cp2

0x8738,	// (0x00014fce) list_double_number_pane_g1_cp2_ParamLimits

0x8738,	// (0x00014fce) list_double_number_pane_g1_cp2

0x8744,	// (0x00014fda) list_double_number_pane_g2_cp2

0x9fd3,	// (0x00016869) list_double_number_pane_t1_cp2_ParamLimits

0x9fd3,	// (0x00016869) list_double_number_pane_t1_cp2

0x9fe7,	// (0x0001687d) list_double_number_pane_t2_cp2_ParamLimits

0x9fe7,	// (0x0001687d) list_double_number_pane_t2_cp2

0x9ffd,	// (0x00016893) list_double_number_pane_t3_cp2_ParamLimits

0x9ffd,	// (0x00016893) list_double_number_pane_t3_cp2

0x9ebc,	// (0x00016752) list_single_graphic_pane_g1_cp2_ParamLimits

0x9ebc,	// (0x00016752) list_single_graphic_pane_g1_cp2

0x879e,	// (0x00015034) list_single_graphic_pane_g2_cp2_ParamLimits

0x879e,	// (0x00015034) list_single_graphic_pane_g2_cp2

0x87aa,	// (0x00015040) list_single_graphic_pane_g3_cp2

0x9e92,	// (0x00016728) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e92,	// (0x00016728) list_single_graphic_pane_t1_cp2

0x879e,	// (0x00015034) list_single_number_pane_g1_cp2_ParamLimits

0x879e,	// (0x00015034) list_single_number_pane_g1_cp2

0x87aa,	// (0x00015040) list_single_number_pane_g2_cp2

0x9e92,	// (0x00016728) list_single_number_pane_t1_cp2_ParamLimits

0x9e92,	// (0x00016728) list_single_number_pane_t1_cp2

0x9ea8,	// (0x0001673e) list_single_number_pane_t2_cp2_ParamLimits

0x9ea8,	// (0x0001673e) list_single_number_pane_t2_cp2

0x8594,	// (0x00014e2a) list_double2_pane_g1_cp2_ParamLimits

0x8594,	// (0x00014e2a) list_double2_pane_g1_cp2

0x85a5,	// (0x00014e3b) list_double2_pane_g2_cp2

0x8710,	// (0x00014fa6) list_double2_pane_t1_cp2_ParamLimits

0x8710,	// (0x00014fa6) list_double2_pane_t1_cp2

0x8726,	// (0x00014fbc) list_double2_pane_t2_cp2_ParamLimits

0x8726,	// (0x00014fbc) list_double2_pane_t2_cp2

0x8738,	// (0x00014fce) list_double_pane_g1_cp2_ParamLimits

0x8738,	// (0x00014fce) list_double_pane_g1_cp2

0x8744,	// (0x00014fda) list_double_pane_g2_cp2

0x874c,	// (0x00014fe2) list_double_pane_t1_cp2_ParamLimits

0x874c,	// (0x00014fe2) list_double_pane_t1_cp2

0x8762,	// (0x00014ff8) list_double_pane_t2_cp2_ParamLimits

0x8762,	// (0x00014ff8) list_double_pane_t2_cp2

0x878e,	// (0x00015024) list_single_pane_cp2_g3

0x879e,	// (0x00015034) list_single_pane_g1_cp2_ParamLimits

0x879e,	// (0x00015034) list_single_pane_g1_cp2

0x87aa,	// (0x00015040) list_single_pane_g2_cp2

0x87b2,	// (0x00015048) list_single_pane_t1_cp2_ParamLimits

0x87b2,	// (0x00015048) list_single_pane_t1_cp2

0x87ca,	// (0x00015060) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x87ca,	// (0x00015060) list_single_large_graphic_pane_g1_cp2

0x87d8,	// (0x0001506e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x87d8,	// (0x0001506e) list_single_large_graphic_pane_g2_cp2

0x87e4,	// (0x0001507a) list_single_large_graphic_pane_g3_cp2

0x87ec,	// (0x00015082) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x87ec,	// (0x00015082) list_single_large_graphic_pane_g4_cp1

0x8806,	// (0x0001509c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8806,	// (0x0001509c) list_single_large_graphic_pane_t1_cp2

0x9e5c,	// (0x000166f2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e5c,	// (0x000166f2) list_single_graphic_heading_pane_g1_cp2

0x9e29,	// (0x000166bf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e29,	// (0x000166bf) list_single_graphic_heading_pane_g4_cp2

0x87aa,	// (0x00015040) list_single_graphic_heading_pane_g5_cp2

0x9e68,	// (0x000166fe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9e68,	// (0x000166fe) list_single_graphic_heading_pane_t1_cp2

0x9e7e,	// (0x00016714) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e7e,	// (0x00016714) list_single_graphic_heading_pane_t2_cp2

0x9e1d,	// (0x000166b3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e1d,	// (0x000166b3) list_single_2graphic_pane_g1_cp2

0x9e29,	// (0x000166bf) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e29,	// (0x000166bf) list_single_2graphic_pane_g2_cp2

0x87aa,	// (0x00015040) list_single_2graphic_pane_g3_cp2

0x9e3a,	// (0x000166d0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e3a,	// (0x000166d0) list_single_2graphic_pane_g4_cp2

0x9e46,	// (0x000166dc) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e46,	// (0x000166dc) list_single_2graphic_pane_t1_cp2

0x378f,	// (0x00010025) list_highlight_pane_g10_cp1

0x99f5,	// (0x0001628b) list_highlight_pane_g1_cp1

0x99fd,	// (0x00016293) list_highlight_pane_g2_cp1

0x9a05,	// (0x0001629b) list_highlight_pane_g3_cp1

0x9a0d,	// (0x000162a3) list_highlight_pane_g4_cp1

0x9a15,	// (0x000162ab) list_highlight_pane_g5_cp1

0x9a1d,	// (0x000162b3) list_highlight_pane_g6_cp1

0x9a25,	// (0x000162bb) list_highlight_pane_g7_cp1

0x9a2d,	// (0x000162c3) list_highlight_pane_g8_cp1

0x9a35,	// (0x000162cb) list_highlight_pane_g9_cp1

0x9915,	// (0x000161ab) form_field_slider_pane_t3

0x9923,	// (0x000161b9) form_field_slider_pane_t4

0x9931,	// (0x000161c7) slider_form_pane_ParamLimits

0x9931,	// (0x000161c7) slider_form_pane

0x3908,	// (0x0001019e) control_abbreviations

0x3908,	// (0x0001019e) control_conventions

0x3908,	// (0x0001019e) control_definitions

0x3908,	// (0x0001019e) format_table_attribute

0xa11d,	// (0x000169b3) bg_popup_preview_window_pane_g9

0x3908,	// (0x0001019e) format_table_data2

0x3908,	// (0x0001019e) format_table_data3

0x3908,	// (0x0001019e) format_table_data_example

0x0008,

0x3908,	// (0x0001019e) intro_purpose

0xf8c5,	// (0x0001c15b) bg_popup_preview_window_pane_g

0x3908,	// (0x0001019e) texts_category

0x3908,	// (0x0001019e) texts_graphics

0x881c,	// (0x000150b2) text_digital

0x882b,	// (0x000150c1) text_primary

0x883a,	// (0x000150d0) text_primary_small

0x8849,	// (0x000150df) text_secondary

0x8858,	// (0x000150ee) text_title

0xa94f,	// (0x000171e5) bg_passive_tab_pane_g1_cp3_srt

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp3_srt

0xa958,	// (0x000171ee) bg_passive_tab_pane_g3_cp3_srt

0x39c2,	// (0x00010258) bg_active_tab_pane_cp3_srt_ParamLimits

0x39c2,	// (0x00010258) bg_active_tab_pane_cp3_srt

0xa961,	// (0x000171f7) tabs_4_active_pane_srt_g1

0xa969,	// (0x000171ff) tabs_4_active_pane_srt_t1_ParamLimits

0xa969,	// (0x000171ff) tabs_4_active_pane_srt_t1

0xa94f,	// (0x000171e5) bg_active_tab_pane_g1_cp3_copy1

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp3_copy1

0xa958,	// (0x000171ee) bg_active_tab_pane_g3_cp3_copy1

0x39c2,	// (0x00010258) tabs_2_long_active_pane_srt_ParamLimits

0x39c2,	// (0x00010258) tabs_2_long_active_pane_srt

0x39c2,	// (0x00010258) tabs_2_long_passive_pane_srt_ParamLimits

0x39c2,	// (0x00010258) tabs_2_long_passive_pane_srt

0x7d44,	// (0x000145da) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7d44,	// (0x000145da) bg_passive_tab_pane_cp4_srt

0xa57f,	// (0x00016e15) bg_passive_tab_pane_g1_cp4_srt

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp4_srt

0xa588,	// (0x00016e1e) bg_passive_tab_pane_g3_cp4_srt

0x7d23,	// (0x000145b9) bg_active_tab_pane_cp4_srt_ParamLimits

0x7d23,	// (0x000145b9) bg_active_tab_pane_cp4_srt

0xa591,	// (0x00016e27) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa591,	// (0x00016e27) tabs_2_long_active_pane_srt_t1

0xa57f,	// (0x00016e15) bg_active_tab_pane_g1_cp4_srt

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp4_srt

0xa588,	// (0x00016e1e) bg_active_tab_pane_g3_cp4_srt

0x39aa,	// (0x00010240) tabs_3_long_active_pane_srt_ParamLimits

0x39aa,	// (0x00010240) tabs_3_long_active_pane_srt

0x39aa,	// (0x00010240) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x39aa,	// (0x00010240) tabs_3_long_passive_pane_cp_srt

0x39aa,	// (0x00010240) tabs_3_long_passive_pane_srt_ParamLimits

0x39aa,	// (0x00010240) tabs_3_long_passive_pane_srt

0x7d44,	// (0x000145da) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7d44,	// (0x000145da) bg_passive_tab_pane_cp5_srt

0x852e,	// (0x00014dc4) bg_passive_tab_pane_g1_cp5_srt

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp5_srt

0x8537,	// (0x00014dcd) bg_passive_tab_pane_g3_cp5_srt

0x7d23,	// (0x000145b9) bg_active_tab_pane_cp5_srt_ParamLimits

0x7d23,	// (0x000145b9) bg_active_tab_pane_cp5_srt

0xa56d,	// (0x00016e03) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa56d,	// (0x00016e03) tabs_3_long_active_pane_srt_t1

0x852e,	// (0x00014dc4) bg_active_tab_pane_g1_cp5_srt

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp5_srt

0x8537,	// (0x00014dcd) bg_active_tab_pane_g3_cp5_srt

0xa55f,	// (0x00016df5) navi_text_pane_srt_t1

0xa557,	// (0x00016ded) navi_icon_pane_srt_g1

0x8a30,	// (0x000152c6) midp_editing_number_pane_srt

0x8867,	// (0x000150fd) midp_ticker_pane_srt

0x8a38,	// (0x000152ce) midp_ticker_pane_srt_g1

0x8a40,	// (0x000152d6) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001bfde) midp_ticker_pane_srt_g

0x8a48,	// (0x000152de) midp_ticker_pane_srt_t1

0xa548,	// (0x00016dde) midp_editing_number_pane_t1_copy1

0x886f,	// (0x00015105) listscroll_midp_pane

0x886f,	// (0x00015105) midp_form_pane

0x88de,	// (0x00015174) midp_info_popup_window_ParamLimits

0x88de,	// (0x00015174) midp_info_popup_window

0x7c6c,	// (0x00014502) bg_popup_sub_pane_cp50_ParamLimits

0x7c6c,	// (0x00014502) bg_popup_sub_pane_cp50

0x9617,	// (0x00015ead) listscroll_midp_info_pane_ParamLimits

0x9617,	// (0x00015ead) listscroll_midp_info_pane

0x95f7,	// (0x00015e8d) listscroll_form_midp_pane_ParamLimits

0x95f7,	// (0x00015e8d) listscroll_form_midp_pane

0x9603,	// (0x00015e99) scroll_bar_cp050

0x95d7,	// (0x00015e6d) list_midp_pane

0xb726,	// (0x00017fbc) signal_pane_g2_cp

0x9511,	// (0x00015da7) listscroll_midp_info_pane_t1_ParamLimits

0x9511,	// (0x00015da7) listscroll_midp_info_pane_t1

0x9529,	// (0x00015dbf) listscroll_midp_info_pane_t2_ParamLimits

0x9529,	// (0x00015dbf) listscroll_midp_info_pane_t2

0x9567,	// (0x00015dfd) listscroll_midp_info_pane_t3_ParamLimits

0x9567,	// (0x00015dfd) listscroll_midp_info_pane_t3

0x95a1,	// (0x00015e37) listscroll_midp_info_pane_t4_ParamLimits

0x95a1,	// (0x00015e37) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0001c096) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0001c096) listscroll_midp_info_pane_t

0x7ccf,	// (0x00014565) scroll_pane_cp21

0x94ab,	// (0x00015d41) form_midp_field_choice_group_pane

0x94b4,	// (0x00015d4a) form_midp_field_text_pane

0x94f7,	// (0x00015d8d) form_midp_field_time_pane

0x94ff,	// (0x00015d95) form_midp_gauge_slider_pane

0x9508,	// (0x00015d9e) form_midp_gauge_wait_pane

0x3908,	// (0x0001019e) form_midp_image_pane

0x948b,	// (0x00015d21) list_single_midp_pane_ParamLimits

0x948b,	// (0x00015d21) list_single_midp_pane

0x944f,	// (0x00015ce5) form_midp_field_text_pane_t1

0x9232,	// (0x00015ac8) input_focus_pane_cp050

0x947a,	// (0x00015d10) list_midp_form_text_pane

0x941e,	// (0x00015cb4) form_midp_field_choice_group_pane_t1

0x942c,	// (0x00015cc2) input_focus_pane_cp051

0x9440,	// (0x00015cd6) list_midp_choice_pane

0x3908,	// (0x0001019e) status_idle_pane

0x9402,	// (0x00015c98) form_midp_field_time_pane_t1

0x378f,	// (0x00010025) wait_anim_pane_g2_copy1

0x9410,	// (0x00015ca6) form_midp_field_time_pane_t2

0x0001,

0x898e,	// (0x00015224) aid_navinavi_width_2_pane

0xf7fb,	// (0x0001c091) form_midp_field_time_pane_t

0x3908,	// (0x0001019e) input_focus_pane_cp052

0x3908,	// (0x0001019e) bg_input_focus_pane_cp040

0x93c2,	// (0x00015c58) form_midp_gauge_slider_pane_t1

0x93d0,	// (0x00015c66) form_midp_gauge_slider_pane_t2

0x93de,	// (0x00015c74) form_midp_gauge_slider_pane_t3

0x93ec,	// (0x00015c82) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0001c088) form_midp_gauge_slider_pane_t

0x93fa,	// (0x00015c90) form_midp_slider_pane

0x39c2,	// (0x00010258) bg_input_focus_pane_cp041_ParamLimits

0x39c2,	// (0x00010258) bg_input_focus_pane_cp041

0x938f,	// (0x00015c25) form_midp_gauge_wait_pane_t1_ParamLimits

0x938f,	// (0x00015c25) form_midp_gauge_wait_pane_t1

0x93a1,	// (0x00015c37) form_midp_gauge_wait_pane_t2_ParamLimits

0x93a1,	// (0x00015c37) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0001c083) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0001c083) form_midp_gauge_wait_pane_t

0x93b3,	// (0x00015c49) form_midp_wait_pane_ParamLimits

0x93b3,	// (0x00015c49) form_midp_wait_pane

0x9357,	// (0x00015bed) form_midp_image_pane_g1

0x9360,	// (0x00015bf6) form_midp_image_pane_t1

0x936f,	// (0x00015c05) form_midp_image_pane_t2

0x937e,	// (0x00015c14) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0001c07c) form_midp_image_pane_t

0x933f,	// (0x00015bd5) list_single_midp_pane_g1

0x9348,	// (0x00015bde) list_single_midp_pane_t1

0x9325,	// (0x00015bbb) list_midp_form_item_pane_ParamLimits

0x9325,	// (0x00015bbb) list_midp_form_item_pane

0x8936,	// (0x000151cc) list_midp_form_item_pane_t1

0x8945,	// (0x000151db) midp_ticker_pane_g1

0x8951,	// (0x000151e7) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001bfc4) midp_ticker_pane_g

0x895d,	// (0x000151f3) midp_ticker_pane_t1

0xa7ea,	// (0x00017080) midp_editing_number_pane_t1

0xa7c8,	// (0x0001705e) midp_editing_number_pane

0xa7d7,	// (0x0001706d) midp_ticker_pane

0xa510,	// (0x00016da6) ai_message_heading_pane

0x3908,	// (0x0001019e) bg_popup_window_pane_cp14

0xa518,	// (0x00016dae) listscroll_ai_message_pane

0xa496,	// (0x00016d2c) ai_message_heading_pane_g1_ParamLimits

0xa496,	// (0x00016d2c) ai_message_heading_pane_g1

0xa4a2,	// (0x00016d38) ai_message_heading_pane_g2_ParamLimits

0xa4a2,	// (0x00016d38) ai_message_heading_pane_g2

0xa4b0,	// (0x00016d46) ai_message_heading_pane_g3_ParamLimits

0xa4b0,	// (0x00016d46) ai_message_heading_pane_g3

0xa4bc,	// (0x00016d52) ai_message_heading_pane_g4_ParamLimits

0xa4bc,	// (0x00016d52) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0001c1bd) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0001c1bd) ai_message_heading_pane_g

0xa4c8,	// (0x00016d5e) ai_message_heading_pane_t1_ParamLimits

0xa4c8,	// (0x00016d5e) ai_message_heading_pane_t1

0xa4e2,	// (0x00016d78) ai_message_heading_pane_t2_ParamLimits

0xa4e2,	// (0x00016d78) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0001c1c6) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0001c1c6) ai_message_heading_pane_t

0xa4f6,	// (0x00016d8c) bg_popup_heading_pane_cp1_ParamLimits

0xa4f6,	// (0x00016d8c) bg_popup_heading_pane_cp1

0xa484,	// (0x00016d1a) list_ai_message_pane_ParamLimits

0xa484,	// (0x00016d1a) list_ai_message_pane

0x7ccf,	// (0x00014565) scroll_pane_cp10

0xa420,	// (0x00016cb6) list_ai_message_pane_g1

0xa428,	// (0x00016cbe) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0001c19a) list_ai_message_pane_g

0xa430,	// (0x00016cc6) list_ai_message_pane_t1_ParamLimits

0xa430,	// (0x00016cc6) list_ai_message_pane_t1

0xa445,	// (0x00016cdb) list_ai_message_pane_t2_ParamLimits

0xa445,	// (0x00016cdb) list_ai_message_pane_t2

0xa45a,	// (0x00016cf0) list_ai_message_pane_t3_ParamLimits

0xa45a,	// (0x00016cf0) list_ai_message_pane_t3

0xa46f,	// (0x00016d05) list_ai_message_pane_t4_ParamLimits

0xa46f,	// (0x00016d05) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0001c19f) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0001c19f) list_ai_message_pane_t

0xa409,	// (0x00016c9f) cell_ai_soft_ind_pane_ParamLimits

0xa409,	// (0x00016c9f) cell_ai_soft_ind_pane

0x896f,	// (0x00015205) cell_ai_soft_ind_pane_g1_ParamLimits

0x896f,	// (0x00015205) cell_ai_soft_ind_pane_g1

0x3908,	// (0x0001019e) grid_highlight_cp1

0x897c,	// (0x00015212) text_secondary_cp56_ParamLimits

0x897c,	// (0x00015212) text_secondary_cp56

0xa3de,	// (0x00016c74) example_general_pane_ParamLimits

0xa3de,	// (0x00016c74) example_general_pane

0xa3ea,	// (0x00016c80) example_parent_pane_g1_ParamLimits

0xa3ea,	// (0x00016c80) example_parent_pane_g1

0xa3f6,	// (0x00016c8c) example_parent_pane_t1_ParamLimits

0xa3f6,	// (0x00016c8c) example_parent_pane_t1

0x5ad6,	// (0x0001236c) popup_preview_text_window_ParamLimits

0x5ad6,	// (0x0001236c) popup_preview_text_window

0x8796,	// (0x0001502c) list_single_pane_cp2_g4

0x3c66,	// (0x000104fc) bg_popup_preview_window_pane_ParamLimits

0x3c66,	// (0x000104fc) bg_popup_preview_window_pane

0xa127,	// (0x000169bd) popup_preview_text_window_t1_ParamLimits

0xa127,	// (0x000169bd) popup_preview_text_window_t1

0xa145,	// (0x000169db) popup_preview_text_window_t2_ParamLimits

0xa145,	// (0x000169db) popup_preview_text_window_t2

0xa18e,	// (0x00016a24) popup_preview_text_window_t3_ParamLimits

0xa18e,	// (0x00016a24) popup_preview_text_window_t3

0xa1d3,	// (0x00016a69) popup_preview_text_window_t4_ParamLimits

0xa1d3,	// (0x00016a69) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0001c16e) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0001c16e) popup_preview_text_window_t

0xa251,	// (0x00016ae7) scroll_pane_cp11

0x910e,	// (0x000159a4) bg_popup_preview_window_pane_g1

0xa0db,	// (0x00016971) bg_popup_preview_window_pane_g2

0xa0e5,	// (0x0001697b) bg_popup_preview_window_pane_g3

0xa0ef,	// (0x00016985) bg_popup_preview_window_pane_g4

0xa0f9,	// (0x0001698f) bg_popup_preview_window_pane_g5

0xa103,	// (0x00016999) bg_popup_preview_window_pane_g6

0xa10b,	// (0x000169a1) bg_popup_preview_window_pane_g7

0xa113,	// (0x000169a9) bg_popup_preview_window_pane_g8

0x4c5a,	// (0x000114f0) aid_popup_width_pane

0x5ab2,	// (0x00012348) popup_midp_note_alarm_window_ParamLimits

0x5ab2,	// (0x00012348) popup_midp_note_alarm_window

0x412e,	// (0x000109c4) data_form_pane_ParamLimits

0x7ada,	// (0x00014370) form_field_data_pane_g1

0x7ae4,	// (0x0001437a) form_field_data_pane_t1_ParamLimits

0x413a,	// (0x000109d0) input_focus_pane_ParamLimits

0x4148,	// (0x000109de) data_form_wide_pane_ParamLimits

0x4154,	// (0x000109ea) form_field_data_wide_pane_g1

0x4180,	// (0x00010a16) form_field_data_wide_pane_t1_ParamLimits

0x3e22,	// (0x000106b8) input_focus_pane_cp6_ParamLimits

0x7c7a,	// (0x00014510) input_popup_find_pane_g1_ParamLimits

0x7c7a,	// (0x00014510) input_popup_find_pane_g1

0x51ea,	// (0x00011a80) aid_navi_side_left_pane

0x51ff,	// (0x00011a95) aid_navi_side_right_pane

0x9af0,	// (0x00016386) bg_popup_window_pane_cp30_ParamLimits

0x9af0,	// (0x00016386) bg_popup_window_pane_cp30

0x9b6a,	// (0x00016400) popup_midp_note_alarm_window_g1_ParamLimits

0x9b6a,	// (0x00016400) popup_midp_note_alarm_window_g1

0x9b9a,	// (0x00016430) popup_midp_note_alarm_window_t1_ParamLimits

0x9b9a,	// (0x00016430) popup_midp_note_alarm_window_t1

0x9c3b,	// (0x000164d1) popup_midp_note_alarm_window_t2_ParamLimits

0x9c3b,	// (0x000164d1) popup_midp_note_alarm_window_t2

0x9ce9,	// (0x0001657f) popup_midp_note_alarm_window_t3_ParamLimits

0x9ce9,	// (0x0001657f) popup_midp_note_alarm_window_t3

0x9d1b,	// (0x000165b1) popup_midp_note_alarm_window_t4_ParamLimits

0x9d1b,	// (0x000165b1) popup_midp_note_alarm_window_t4

0x9d41,	// (0x000165d7) popup_midp_note_alarm_window_t5_ParamLimits

0x9d41,	// (0x000165d7) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0001c10b) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0001c10b) popup_midp_note_alarm_window_t

0x9ded,	// (0x00016683) wait_bar_pane_cp1_ParamLimits

0x9ded,	// (0x00016683) wait_bar_pane_cp1

0x3908,	// (0x0001019e) wait_anim_pane_copy1

0x3908,	// (0x0001019e) wait_border_pane_copy1

0x97d5,	// (0x0001606b) wait_border_pane_g1_copy1

0x4197,	// (0x00010a2d) form_field_popup_pane_g1

0x7afe,	// (0x00014394) form_field_popup_pane_t1_ParamLimits

0x413a,	// (0x000109d0) input_focus_pane_cp7_ParamLimits

0x419f,	// (0x00010a35) list_form_pane_ParamLimits

0x41ab,	// (0x00010a41) form_field_popup_wide_pane_g1

0x41b3,	// (0x00010a49) form_field_popup_wide_pane_t1_ParamLimits

0x413a,	// (0x000109d0) input_focus_pane_cp8_ParamLimits

0x41c5,	// (0x00010a5b) list_form_wide_pane_ParamLimits

0xa9ea,	// (0x00017280) aid_size_cell_graphic_pane

0x7b76,	// (0x0001440c) data_form_pane_t1_ParamLimits

0xa793,	// (0x00017029) data_form_wide_pane_t1_ParamLimits

0x8c8d,	// (0x00015523) bg_status_flat_pane

0x7352,	// (0x00013be8) title_pane_t1_ParamLimits

0x3972,	// (0x00010208) title_pane_t2_ParamLimits

0x3998,	// (0x0001022e) title_pane_t3_ParamLimits

0xf532,	// (0x0001bdc8) title_pane_t_ParamLimits

0x8153,	// (0x000149e9) level_1_signal_ParamLimits

0x8160,	// (0x000149f6) level_2_signal_ParamLimits

0x816d,	// (0x00014a03) level_3_signal_ParamLimits

0x817a,	// (0x00014a10) level_4_signal_ParamLimits

0x8187,	// (0x00014a1d) level_5_signal_ParamLimits

0x8194,	// (0x00014a2a) level_6_signal_ParamLimits

0x81a1,	// (0x00014a37) level_7_signal_ParamLimits

0x8153,	// (0x000149e9) level_1_battery_ParamLimits

0x8160,	// (0x000149f6) level_2_battery_ParamLimits

0x816d,	// (0x00014a03) level_3_battery_ParamLimits

0x817a,	// (0x00014a10) level_4_battery_ParamLimits

0x8187,	// (0x00014a1d) level_5_battery_ParamLimits

0x8194,	// (0x00014a2a) level_6_battery_ParamLimits

0x81a1,	// (0x00014a37) level_7_battery_ParamLimits

0x99f5,	// (0x0001628b) bg_status_flat_pane_g1

0x99fd,	// (0x00016293) bg_status_flat_pane_g2

0x9a05,	// (0x0001629b) bg_status_flat_pane_g3

0x9a0d,	// (0x000162a3) bg_status_flat_pane_g4

0x9a15,	// (0x000162ab) bg_status_flat_pane_g5

0x9a1d,	// (0x000162b3) bg_status_flat_pane_g6

0x9a25,	// (0x000162bb) bg_status_flat_pane_g7

0x73c2,	// (0x00013c58) tabs_3_active_pane_t1_ParamLimits

0x73c2,	// (0x00013c58) tabs_3_passive_pane_t1_ParamLimits

0x73dc,	// (0x00013c72) tabs_4_active_pane_t1_ParamLimits

0x73dc,	// (0x00013c72) tabs_4_1_passive_pane_t1_ParamLimits

0x7d11,	// (0x000145a7) tabs_2_active_pane_t1_ParamLimits

0x7d11,	// (0x000145a7) tabs_2_passive_pane_t1_ParamLimits

0x7d23,	// (0x000145b9) bg_active_tab_pane_cp4_ParamLimits

0x7d31,	// (0x000145c7) tabs_2_long_active_pane_t1_ParamLimits

0x7d44,	// (0x000145da) bg_passive_tab_pane_cp4_ParamLimits

0x5e3a,	// (0x000126d0) list_single_midp_graphic_pane_t1_ParamLimits

0x7d23,	// (0x000145b9) bg_active_tab_pane_cp5_ParamLimits

0x7d50,	// (0x000145e6) tabs_3_long_active_pane_t1_ParamLimits

0x7d44,	// (0x000145da) bg_passive_tab_pane_cp5_ParamLimits

0x5e3a,	// (0x000126d0) list_single_midp_graphic_pane_t1

0x8c8d,	// (0x00015523) bg_status_flat_pane_ParamLimits

0x8d58,	// (0x000155ee) indicator_pane_cp2_ParamLimits

0x8d58,	// (0x000155ee) indicator_pane_cp2

0x8e9b,	// (0x00015731) navi_pane_srt_ParamLimits

0x8e9b,	// (0x00015731) navi_pane_srt

0x8ebf,	// (0x00015755) popup_clock_digital_analogue_window_cp1

0x3aa9,	// (0x0001033f) indicator_pane_t1

0x8867,	// (0x000150fd) copy_highlight_pane

0x8867,	// (0x000150fd) cursor_graphics_pane

0x8867,	// (0x000150fd) graphic_within_text_pane

0x8867,	// (0x000150fd) link_highlight_pane

0xa214,	// (0x00016aaa) popup_preview_text_window_t5_ParamLimits

0xa214,	// (0x00016aaa) popup_preview_text_window_t5

0x8998,	// (0x0001522e) cursor_digital_pane

0x8998,	// (0x0001522e) cursor_primary_pane

0x89a9,	// (0x0001523f) cursor_primary_small_pane

0x89b1,	// (0x00015247) cursor_secondary_pane

0x89b9,	// (0x0001524f) cursor_title_pane

0x8998,	// (0x0001522e) link_highlight_digital_pane

0x89a0,	// (0x00015236) link_highlight_primary_pane

0x89a9,	// (0x0001523f) link_highlight_primary_small_pane

0x89b1,	// (0x00015247) link_highlight_secondary_pane

0x89b9,	// (0x0001524f) link_highlight_title_pane

0x8998,	// (0x0001522e) copy_highlight_digital_pane

0x8998,	// (0x0001522e) copy_highlight_primary_pane

0x89a9,	// (0x0001523f) copy_highlight_primary_small_pane

0x89b1,	// (0x00015247) copy_highlight_secondary_pane

0x89b9,	// (0x0001524f) copy_highlight_title_pane

0x89b1,	// (0x00015247) graphic_text_digital_pane

0x9a93,	// (0x00016329) graphic_text_primary_pane

0x9a9c,	// (0x00016332) graphic_text_primary_small_pane

0x89a9,	// (0x0001523f) graphic_text_secondary_pane

0x8998,	// (0x0001522e) graphic_text_title_pane

0x89c1,	// (0x00015257) cursor_primary_pane_g1

0x9a85,	// (0x0001631b) cursor_text_primary_t1

0x9a6d,	// (0x00016303) cursor_primary_small_pane_g1

0x9a77,	// (0x0001630d) cursor_text_primary_small_t1

0x9a55,	// (0x000162eb) cursor_primary_small_pane_g1_copy1

0x9a5f,	// (0x000162f5) cursor_text_primary_small_t1_copy1

0x9a3d,	// (0x000162d3) cursor_text_title_t1

0x9a4b,	// (0x000162e1) cursor_title_pane_g1

0x89c1,	// (0x00015257) cursor_digital_pane_g1

0x89cb,	// (0x00015261) cursor_text_digital_t1

0x89d9,	// (0x0001526f) link_highlight_primary_pane_g1

0x99e6,	// (0x0001627c) link_highlight_primary_pane_t1

0x89d9,	// (0x0001526f) link_highlight_primary_small_pane_g1

0x89e1,	// (0x00015277) link_highlight_primary_small_pane_t1

0x89f0,	// (0x00015286) link_highlight_secondary_pane_g1

0x89f8,	// (0x0001528e) link_highlight_secondary_pane_t1

0x995a,	// (0x000161f0) link_highlight_title_pane_g1

0x9962,	// (0x000161f8) link_highlight_title_pane_t1

0x9943,	// (0x000161d9) link_highlight_digital_pane_g1

0x994b,	// (0x000161e1) link_highlight_digital_pane_t1

0x980b,	// (0x000160a1) copy_highlight_primary_pane_g1

0x9822,	// (0x000160b8) copy_highlight_primary_pane_t1

0x980b,	// (0x000160a1) copy_highlight_primary_small_pane_g1

0x9813,	// (0x000160a9) copy_highlight_primary_small_pane_t1

0x8a07,	// (0x0001529d) copy_highlight_secondary_pane_g1

0x8a0f,	// (0x000152a5) copy_highlight_secondary_pane_t1

0x97f4,	// (0x0001608a) copy_highlight_title_pane_g1

0x97fc,	// (0x00016092) copy_highlight_title_pane_t1

0x980b,	// (0x000160a1) copy_highlight_digital_pane_g1

0xabbc,	// (0x00017452) copy_highlight_digital_pane_t1

0xab10,	// (0x000173a6) graphic_text_primary_pane_g1

0xaba0,	// (0x00017436) graphic_text_primary_pane_t1

0xabae,	// (0x00017444) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x0001c23a) graphic_text_primary_pane_t

0xab7c,	// (0x00017412) graphic_text_primary_small_pane_g1

0xab84,	// (0x0001741a) graphic_text_primary_small_pane_t1

0xab92,	// (0x00017428) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x0001c235) graphic_text_primary_small_pane_t

0xab58,	// (0x000173ee) graphic_text_secondary_pane_g1

0xab60,	// (0x000173f6) graphic_text_secondary_pane_t1

0xab6e,	// (0x00017404) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0001c230) graphic_text_secondary_pane_t

0xab34,	// (0x000173ca) graphic_text_title_pane_g1

0xab3c,	// (0x000173d2) graphic_text_title_pane_t1

0xab4a,	// (0x000173e0) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x0001c22b) graphic_text_title_pane_t

0xab10,	// (0x000173a6) graphic_text_digital_pane_g1

0xab18,	// (0x000173ae) graphic_text_digital_pane_t1

0xab26,	// (0x000173bc) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x0001c226) graphic_text_digital_pane_t

0x39c2,	// (0x00010258) navi_icon_pane_srt_ParamLimits

0x39c2,	// (0x00010258) navi_icon_pane_srt

0x3908,	// (0x0001019e) navi_midp_pane_srt

0x3908,	// (0x0001019e) navi_navi_pane_srt

0x39c2,	// (0x00010258) navi_text_pane_srt_ParamLimits

0x39c2,	// (0x00010258) navi_text_pane_srt

0xaadb,	// (0x00017371) navi_navi_icon_text_pane_srt

0xaae3,	// (0x00017379) navi_navi_pane_srt_g1_ParamLimits

0xaae3,	// (0x00017379) navi_navi_pane_srt_g1

0xaaf5,	// (0x0001738b) navi_navi_pane_srt_g2_ParamLimits

0xaaf5,	// (0x0001738b) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0001c221) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0001c221) navi_navi_pane_srt_g

0xab07,	// (0x0001739d) navi_navi_tabs_pane_srt

0xaadb,	// (0x00017371) navi_navi_text_pane_srt

0xaadb,	// (0x00017371) navi_navi_volume_pane_srt

0xaacc,	// (0x00017362) navi_navi_text_pane_srt_t1

0x61d6,	// (0x00012a6c) navi_navi_volume_pane_srt_g1

0x61de,	// (0x00012a74) volume_small_pane_srt_ParamLimits

0x61de,	// (0x00012a74) volume_small_pane_srt

0x54ce,	// (0x00011d64) volume_small_pane_srt_g1_ParamLimits

0x54ce,	// (0x00011d64) volume_small_pane_srt_g1

0x54de,	// (0x00011d74) volume_small_pane_srt_g2_ParamLimits

0x54de,	// (0x00011d74) volume_small_pane_srt_g2

0x54ef,	// (0x00011d85) volume_small_pane_srt_g3_ParamLimits

0x54ef,	// (0x00011d85) volume_small_pane_srt_g3

0x5500,	// (0x00011d96) volume_small_pane_srt_g4_ParamLimits

0x5500,	// (0x00011d96) volume_small_pane_srt_g4

0x5511,	// (0x00011da7) volume_small_pane_srt_g5_ParamLimits

0x5511,	// (0x00011da7) volume_small_pane_srt_g5

0x5522,	// (0x00011db8) volume_small_pane_srt_g6_ParamLimits

0x5522,	// (0x00011db8) volume_small_pane_srt_g6

0x5533,	// (0x00011dc9) volume_small_pane_srt_g7_ParamLimits

0x5533,	// (0x00011dc9) volume_small_pane_srt_g7

0x5544,	// (0x00011dda) volume_small_pane_srt_g8_ParamLimits

0x5544,	// (0x00011dda) volume_small_pane_srt_g8

0x5555,	// (0x00011deb) volume_small_pane_srt_g9_ParamLimits

0x5555,	// (0x00011deb) volume_small_pane_srt_g9

0x5566,	// (0x00011dfc) volume_small_pane_srt_g10_ParamLimits

0x5566,	// (0x00011dfc) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001bfc9) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001bfc9) volume_small_pane_srt_g

0x3d1b,	// (0x000105b1) query_popup_data_pane_cp2

0xaab2,	// (0x00017348) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaab2,	// (0x00017348) navi_navi_icon_text_pane_srt_t1

0x9a93,	// (0x00016329) navi_tabs_2_long_pane_srt

0x9a93,	// (0x00016329) navi_tabs_2_pane_srt

0x9a93,	// (0x00016329) navi_tabs_3_long_pane_srt

0x9a93,	// (0x00016329) navi_tabs_3_pane_srt

0x9a93,	// (0x00016329) navi_tabs_4_pane_srt

0x61b6,	// (0x00012a4c) tabs_2_active_pane_srt_ParamLimits

0x61b6,	// (0x00012a4c) tabs_2_active_pane_srt

0x61c6,	// (0x00012a5c) tabs_2_passive_pane_srt_ParamLimits

0x61c6,	// (0x00012a5c) tabs_2_passive_pane_srt

0x8b96,	// (0x0001542c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b96,	// (0x0001542c) bg_passive_tab_pane_cp1_srt

0xaa7e,	// (0x00017314) bg_passive_tab_pane_g1_cp1_srt

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp1_srt

0xaa87,	// (0x0001731d) bg_passive_tab_pane_g3_cp1_srt

0x39c2,	// (0x00010258) bg_active_tab_pane_cp1_srt_ParamLimits

0x39c2,	// (0x00010258) bg_active_tab_pane_cp1_srt

0xaa90,	// (0x00017326) tabs_2_active_pane_srt_g1

0xaa98,	// (0x0001732e) tabs_2_active_pane_srt_t1_ParamLimits

0xaa98,	// (0x0001732e) tabs_2_active_pane_srt_t1

0xaa7e,	// (0x00017314) bg_active_tab_pane_g1_cp1_srt

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp1_srt

0xaa87,	// (0x0001731d) bg_active_tab_pane_g3_cp1_srt

0x6183,	// (0x00012a19) tabs_3_active_pane_srt_ParamLimits

0x6183,	// (0x00012a19) tabs_3_active_pane_srt

0x6194,	// (0x00012a2a) tabs_3_passive_pane_cp_srt_ParamLimits

0x6194,	// (0x00012a2a) tabs_3_passive_pane_cp_srt

0x61a5,	// (0x00012a3b) tabs_3_passive_pane_srt_ParamLimits

0x61a5,	// (0x00012a3b) tabs_3_passive_pane_srt

0x8b96,	// (0x0001542c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b96,	// (0x0001542c) bg_passive_tab_pane_cp2_srt

0x8a1e,	// (0x000152b4) bg_passive_tab_pane_g1_cp2_srt

0x84a4,	// (0x00014d3a) bg_passive_tab_pane_g2_cp2_srt

0x8a27,	// (0x000152bd) bg_passive_tab_pane_g3_cp2_srt

0x39c2,	// (0x00010258) bg_active_tab_pane_cp2_srt_ParamLimits

0x39c2,	// (0x00010258) bg_active_tab_pane_cp2_srt

0xaa64,	// (0x000172fa) tabs_3_active_pane_srt_g1

0xaa6c,	// (0x00017302) tabs_3_active_pane_srt_t1_ParamLimits

0xaa6c,	// (0x00017302) tabs_3_active_pane_srt_t1

0x8a1e,	// (0x000152b4) bg_active_tab_pane_g1_cp2_srt

0x84a4,	// (0x00014d3a) bg_active_tab_pane_g2_cp2_srt

0x8a27,	// (0x000152bd) bg_active_tab_pane_g3_cp2_srt

0x613b,	// (0x000129d1) tabs_4_active_pane_srt_ParamLimits

0x613b,	// (0x000129d1) tabs_4_active_pane_srt

0x614d,	// (0x000129e3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x614d,	// (0x000129e3) tabs_4_passive_pane_cp2_srt

0x56e5,	// (0x00011f7b) aid_size_cell_toolbar

0x7d44,	// (0x000145da) main_idle_act_pane_ParamLimits

0x58d8,	// (0x0001216e) popup_large_graphic_colour_window_ParamLimits

0x5c7f,	// (0x00012515) popup_toolbar_window_ParamLimits

0x5c7f,	// (0x00012515) popup_toolbar_window

0xa810,	// (0x000170a6) list_single_graphic_2heading_pane_ParamLimits

0xa810,	// (0x000170a6) list_single_graphic_2heading_pane

0x7f00,	// (0x00014796) aid_size_cell_apps_grid_lsc_pane

0x7f12,	// (0x000147a8) aid_size_cell_apps_grid_prt_pane

0x8b96,	// (0x0001542c) bg_wml_button_pane_cp1_ParamLimits

0x8b96,	// (0x0001542c) bg_wml_button_pane_cp1

0x944f,	// (0x00015ce5) form_midp_field_text_pane_t1_ParamLimits

0x9232,	// (0x00015ac8) input_focus_pane_cp050_ParamLimits

0x947a,	// (0x00015d10) list_midp_form_text_pane_ParamLimits

0x942c,	// (0x00015cc2) input_focus_pane_cp051_ParamLimits

0x9440,	// (0x00015cd6) list_midp_choice_pane_ParamLimits

0x92eb,	// (0x00015b81) list_single_2graphic_pane_cp3_ParamLimits

0x92eb,	// (0x00015b81) list_single_2graphic_pane_cp3

0x9301,	// (0x00015b97) list_single_midp_graphic_pane_ParamLimits

0x9301,	// (0x00015b97) list_single_midp_graphic_pane

0x5d3e,	// (0x000125d4) list_single_graphic_2heading_pane_g1_ParamLimits

0x5d3e,	// (0x000125d4) list_single_graphic_2heading_pane_g1

0x5d4a,	// (0x000125e0) list_single_graphic_2heading_pane_g4_ParamLimits

0x5d4a,	// (0x000125e0) list_single_graphic_2heading_pane_g4

0x5d56,	// (0x000125ec) list_single_graphic_2heading_pane_g5_ParamLimits

0x5d56,	// (0x000125ec) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001c01c) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001c01c) list_single_graphic_2heading_pane_g

0x5d62,	// (0x000125f8) list_single_graphic_2heading_pane_t1_ParamLimits

0x5d62,	// (0x000125f8) list_single_graphic_2heading_pane_t1

0x5d76,	// (0x0001260c) list_single_graphic_2heading_pane_t2_ParamLimits

0x5d76,	// (0x0001260c) list_single_graphic_2heading_pane_t2

0x5d92,	// (0x00012628) list_single_graphic_2heading_pane_t3_ParamLimits

0x5d92,	// (0x00012628) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001c023) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001c023) list_single_graphic_2heading_pane_t

0x9012,	// (0x000158a8) bg_popup_sub_pane_cp2

0x903c,	// (0x000158d2) grid_toobar_pane

0x5daa,	// (0x00012640) cell_toolbar_pane_ParamLimits

0x5daa,	// (0x00012640) cell_toolbar_pane

0x90b2,	// (0x00015948) cell_toolbar_pane_g1_ParamLimits

0x90b2,	// (0x00015948) cell_toolbar_pane_g1

0x90c6,	// (0x0001595c) cell_toolbar_pane_g2_ParamLimits

0x90c6,	// (0x0001595c) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001c031) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001c031) cell_toolbar_pane_g

0x90e8,	// (0x0001597e) grid_highlight_pane_cp2_ParamLimits

0x90e8,	// (0x0001597e) grid_highlight_pane_cp2

0x9102,	// (0x00015998) toolbar_button_pane

0x910e,	// (0x000159a4) toolbar_button_pane_g1

0x9116,	// (0x000159ac) toolbar_button_pane_g2

0x911e,	// (0x000159b4) toolbar_button_pane_g3

0x9126,	// (0x000159bc) toolbar_button_pane_g4

0x912e,	// (0x000159c4) toolbar_button_pane_g5

0x9136,	// (0x000159cc) toolbar_button_pane_g6

0x913e,	// (0x000159d4) toolbar_button_pane_g7

0x9146,	// (0x000159dc) toolbar_button_pane_g8

0x914e,	// (0x000159e4) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001c036) toolbar_button_pane_g

0x5de2,	// (0x00012678) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5de2,	// (0x00012678) list_single_2graphic_pane_g1_cp3

0x5dee,	// (0x00012684) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5dee,	// (0x00012684) list_single_2graphic_pane_g2_cp3

0x5dff,	// (0x00012695) list_single_2graphic_pane_g3_cp3

0x5e07,	// (0x0001269d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5e07,	// (0x0001269d) list_single_2graphic_pane_g4_cp3

0x5e13,	// (0x000126a9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5e13,	// (0x000126a9) list_single_2graphic_pane_t1_cp3

0x5e2e,	// (0x000126c4) list_single_midp_graphic_pane_g2_ParamLimits

0x5e2e,	// (0x000126c4) list_single_midp_graphic_pane_g2

0x56ed,	// (0x00011f83) aid_zoom_text_primary

0x56f5,	// (0x00011f8b) aid_zoom_text_secondary

0x8ad8,	// (0x0001536e) status_small_pane_g7_ParamLimits

0x8ad8,	// (0x0001536e) status_small_pane_g7

0x8afb,	// (0x00015391) status_small_pane_t1_ParamLimits

0x732d,	// (0x00013bc3) title_pane_g2

0x0003,

0xf529,	// (0x0001bdbf) title_pane_g

0x7503,	// (0x00013d99) aid_size_cell_colour_1_pane_ParamLimits

0x7503,	// (0x00013d99) aid_size_cell_colour_1_pane

0x7517,	// (0x00013dad) aid_size_cell_colour_2_pane_ParamLimits

0x7517,	// (0x00013dad) aid_size_cell_colour_2_pane

0x752b,	// (0x00013dc1) aid_size_cell_colour_3_pane_ParamLimits

0x752b,	// (0x00013dc1) aid_size_cell_colour_3_pane

0x753f,	// (0x00013dd5) aid_size_cell_colour_4_pane_ParamLimits

0x753f,	// (0x00013dd5) aid_size_cell_colour_4_pane

0x5126,	// (0x000119bc) title_pane_stacon_g1_ParamLimits

0x5126,	// (0x000119bc) title_pane_stacon_g1

0x9879,	// (0x0001610f) popup_note_wait_window_g3_ParamLimits

0x9879,	// (0x0001610f) popup_note_wait_window_g3

0x98f0,	// (0x00016186) popup_note_wait_window_t5_ParamLimits

0x98f0,	// (0x00016186) popup_note_wait_window_t5

0x3908,	// (0x0001019e) main_feb_china_hwr_fs_writing_pane

0x579d,	// (0x00012033) popup_feb_china_hwr_fs_window_ParamLimits

0x579d,	// (0x00012033) popup_feb_china_hwr_fs_window

0x5e50,	// (0x000126e6) aid_size_cell_hwr_fs_ParamLimits

0x5e50,	// (0x000126e6) aid_size_cell_hwr_fs

0x9232,	// (0x00015ac8) bg_popup_sub_pane_cp3_ParamLimits

0x9232,	// (0x00015ac8) bg_popup_sub_pane_cp3

0x5e65,	// (0x000126fb) grid_hwr_fs_pane_ParamLimits

0x5e65,	// (0x000126fb) grid_hwr_fs_pane

0x5e7d,	// (0x00012713) linegrid_hwr_fs_pane_ParamLimits

0x5e7d,	// (0x00012713) linegrid_hwr_fs_pane

0x5e8d,	// (0x00012723) cell_hwr_fs_pane_ParamLimits

0x5e8d,	// (0x00012723) cell_hwr_fs_pane

0x923e,	// (0x00015ad4) linegrid_hwr_fs_pane_g1_ParamLimits

0x923e,	// (0x00015ad4) linegrid_hwr_fs_pane_g1

0x924a,	// (0x00015ae0) linegrid_hwr_fs_pane_g2_ParamLimits

0x924a,	// (0x00015ae0) linegrid_hwr_fs_pane_g2

0x925c,	// (0x00015af2) linegrid_hwr_fs_pane_g3_ParamLimits

0x925c,	// (0x00015af2) linegrid_hwr_fs_pane_g3

0x5eb1,	// (0x00012747) linegrid_hwr_fs_pane_g4_ParamLimits

0x5eb1,	// (0x00012747) linegrid_hwr_fs_pane_g4

0x5ecf,	// (0x00012765) linegrid_hwr_fs_pane_g5_ParamLimits

0x5ecf,	// (0x00012765) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0001c061) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0001c061) linegrid_hwr_fs_pane_g

0x9268,	// (0x00015afe) cell_hwr_fs_pane_g1_ParamLimits

0x9268,	// (0x00015afe) cell_hwr_fs_pane_g1

0x8f4d,	// (0x000157e3) cell_hwr_fs_pane_g2_ParamLimits

0x8f4d,	// (0x000157e3) cell_hwr_fs_pane_g2

0x927e,	// (0x00015b14) cell_hwr_fs_pane_g3_ParamLimits

0x927e,	// (0x00015b14) cell_hwr_fs_pane_g3

0x928b,	// (0x00015b21) cell_hwr_fs_pane_g4_ParamLimits

0x928b,	// (0x00015b21) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0001c06c) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0001c06c) cell_hwr_fs_pane_g

0x5ee5,	// (0x0001277b) cell_hwr_fs_pane_t1

0x3908,	// (0x0001019e) grid_highlight_pane_cp6

0x3908,	// (0x0001019e) main_idle_act2_pane

0x7cb6,	// (0x0001454c) aid_inside_area_popup_secondary

0x9f29,	// (0x000167bf) aid_inside_area_window_primary_ParamLimits

0x9f29,	// (0x000167bf) aid_inside_area_window_primary

0xabcb,	// (0x00017461) ai2_news_ticker_pane

0xabd3,	// (0x00017469) aid_size_cell_ai1_link_ParamLimits

0xabd3,	// (0x00017469) aid_size_cell_ai1_link

0xabed,	// (0x00017483) popup_ai2_data_window_ParamLimits

0xabed,	// (0x00017483) popup_ai2_data_window

0xac0b,	// (0x000174a1) popup_ai2_link_window_ParamLimits

0xac0b,	// (0x000174a1) popup_ai2_link_window

0x9232,	// (0x00015ac8) bg_popup_sub_pane_cp4_ParamLimits

0x9232,	// (0x00015ac8) bg_popup_sub_pane_cp4

0xac21,	// (0x000174b7) grid_ai2_link_pane_ParamLimits

0xac21,	// (0x000174b7) grid_ai2_link_pane

0xac38,	// (0x000174ce) popup_ai2_link_window_g1_ParamLimits

0xac38,	// (0x000174ce) popup_ai2_link_window_g1

0xac44,	// (0x000174da) popup_ai2_link_window_g2_ParamLimits

0xac44,	// (0x000174da) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0001c23f) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0001c23f) popup_ai2_link_window_g

0xac55,	// (0x000174eb) ai2_mp_button_pane

0xac5d,	// (0x000174f3) ai2_mp_volume_pane

0x942c,	// (0x00015cc2) bg_popup_sub_pane_cp5_ParamLimits

0x942c,	// (0x00015cc2) bg_popup_sub_pane_cp5

0xac65,	// (0x000174fb) heading_ai2_gene_pane_ParamLimits

0xac65,	// (0x000174fb) heading_ai2_gene_pane

0xac71,	// (0x00017507) list_ai2_gene_pane_ParamLimits

0xac71,	// (0x00017507) list_ai2_gene_pane

0xacb9,	// (0x0001754f) cell_ai2_link_pane_ParamLimits

0xacb9,	// (0x0001754f) cell_ai2_link_pane

0xaccf,	// (0x00017565) cell_ai2_link_pane_g1

0x3908,	// (0x0001019e) grid_highlight_pane_cp7

0x61f3,	// (0x00012a89) ai2_mp_volume_pane_g1

0xada2,	// (0x00017638) ai2_mp_volume_pane_g2

0xad17,	// (0x000175ad) list_ai2_gene_pane_t1

0xadaa,	// (0x00017640) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x0001c258) ai2_mp_volume_pane_g

0x61fb,	// (0x00012a91) volume_small_pane_cp3

0xadb2,	// (0x00017648) aid_size_cell_ai2_button

0xadba,	// (0x00017650) grid_ai2_button_pane

0xadc3,	// (0x00017659) cell_ai2_button_pane_ParamLimits

0xadc3,	// (0x00017659) cell_ai2_button_pane

0x378f,	// (0x00010025) cell_ai2_button_pane_g1

0x3908,	// (0x0001019e) grid_highlight_pane_cp8

0xad62,	// (0x000175f8) ai2_gene_pane_t1_ParamLimits

0xad62,	// (0x000175f8) ai2_gene_pane_t1

0x56db,	// (0x00011f71) aid_height_parent_landscape

0xa5e1,	// (0x00016e77) aid_height_set_list

0xa5f2,	// (0x00016e88) aid_size_parent

0xa9ea,	// (0x00017280) aid_size_cell_graphic_pane_ParamLimits

0xac81,	// (0x00017517) popup_ai2_data_window_g1_ParamLimits

0xac81,	// (0x00017517) popup_ai2_data_window_g1

0xac8d,	// (0x00017523) ai2_news_ticker_pane_g1

0xac95,	// (0x0001752b) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x0001c244) ai2_news_ticker_pane_g

0xac9d,	// (0x00017533) ai2_news_ticker_pane_t1

0xacab,	// (0x00017541) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x0001c249) ai2_news_ticker_pane_t

0xacd8,	// (0x0001756e) heading_ai2_gene_pane_g1

0xace0,	// (0x00017576) heading_ai2_gene_pane_t1_ParamLimits

0xace0,	// (0x00017576) heading_ai2_gene_pane_t1

0xacf5,	// (0x0001758b) list_highlight_pane_cp6

0xacfd,	// (0x00017593) ai2_gene_pane_ParamLimits

0xacfd,	// (0x00017593) ai2_gene_pane

0xad25,	// (0x000175bb) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x0001c24e) list_ai2_gene_pane_t

0xad33,	// (0x000175c9) list_highlight_pane_cp8_ParamLimits

0xad33,	// (0x000175c9) list_highlight_pane_cp8

0xad44,	// (0x000175da) ai2_gene_pane_g1_ParamLimits

0xad44,	// (0x000175da) ai2_gene_pane_g1

0xad56,	// (0x000175ec) ai2_gene_pane_g2_ParamLimits

0xad56,	// (0x000175ec) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x0001c253) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x0001c253) ai2_gene_pane_g

0x403d,	// (0x000108d3) scroll_pane_cp12

0x5698,	// (0x00011f2e) control_pane_t3_ParamLimits

0x5698,	// (0x00011f2e) control_pane_t3

0x8aec,	// (0x00015382) status_small_pane_g8_ParamLimits

0x8aec,	// (0x00015382) status_small_pane_g8

0x589b,	// (0x00012131) popup_find_window_ParamLimits

0x5ac8,	// (0x0001235e) popup_note_image_window_ParamLimits

0x9078,	// (0x0001590e) list_double2_graphic_pane_vc_g1_ParamLimits

0x9078,	// (0x0001590e) list_double2_graphic_pane_vc_g1

0x9084,	// (0x0001591a) list_double2_graphic_pane_vc_g2_ParamLimits

0x9084,	// (0x0001591a) list_double2_graphic_pane_vc_g2

0x9090,	// (0x00015926) list_double2_graphic_pane_vc_g3_ParamLimits

0x9090,	// (0x00015926) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001c02a) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001c02a) list_double2_graphic_pane_vc_g

0x909c,	// (0x00015932) list_double2_graphic_pane_vc_t1_ParamLimits

0x909c,	// (0x00015932) list_double2_graphic_pane_vc_t1

0x9084,	// (0x0001591a) list_single_heading_pane_vc_g1_ParamLimits

0x9084,	// (0x0001591a) list_single_heading_pane_vc_g1

0x9090,	// (0x00015926) list_single_heading_pane_vc_g2_ParamLimits

0x9090,	// (0x00015926) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c04b) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c04b) list_single_heading_pane_vc_g

0x9156,	// (0x000159ec) list_single_heading_pane_vc_t1_ParamLimits

0x9156,	// (0x000159ec) list_single_heading_pane_vc_t1

0x916c,	// (0x00015a02) list_single_heading_pane_vc_t2_ParamLimits

0x916c,	// (0x00015a02) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0001c050) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001c050) list_single_heading_pane_vc_t

0x917e,	// (0x00015a14) list_setting_number_pane_vc_g1_ParamLimits

0x917e,	// (0x00015a14) list_setting_number_pane_vc_g1

0x918a,	// (0x00015a20) list_setting_number_pane_vc_g2_ParamLimits

0x918a,	// (0x00015a20) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001c055) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c055) list_setting_number_pane_vc_g

0x9196,	// (0x00015a2c) list_setting_number_pane_vc_t1_ParamLimits

0x9196,	// (0x00015a2c) list_setting_number_pane_vc_t1

0x91aa,	// (0x00015a40) list_setting_number_pane_vc_t2_ParamLimits

0x91aa,	// (0x00015a40) list_setting_number_pane_vc_t2

0x91c6,	// (0x00015a5c) list_setting_number_pane_vc_t3_ParamLimits

0x91c6,	// (0x00015a5c) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0001c05a) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0001c05a) list_setting_number_pane_vc_t

0x91f4,	// (0x00015a8a) set_value_pane_vc_ParamLimits

0x91f4,	// (0x00015a8a) set_value_pane_vc

0xa810,	// (0x000170a6) list_double2_graphic_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_double2_graphic_pane_vc

0xa827,	// (0x000170bd) list_double2_large_graphic_pane_vc_ParamLimits

0xa827,	// (0x000170bd) list_double2_large_graphic_pane_vc

0xa810,	// (0x000170a6) list_double2_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_double2_pane_vc

0xa810,	// (0x000170a6) list_double_graphic_heading_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_double_graphic_heading_pane_vc

0xa810,	// (0x000170a6) list_double_graphic_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_double_graphic_pane_vc

0xa810,	// (0x000170a6) list_double_heading_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_double_heading_pane_vc

0xa83b,	// (0x000170d1) list_double_large_graphic_pane_vc_ParamLimits

0xa83b,	// (0x000170d1) list_double_large_graphic_pane_vc

0xa810,	// (0x000170a6) list_double_number_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_double_number_pane_vc

0xa810,	// (0x000170a6) list_double_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_double_pane_vc

0xa810,	// (0x000170a6) list_double_time_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_double_time_pane_vc

0xa810,	// (0x000170a6) list_setting_number_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_setting_number_pane_vc

0xa810,	// (0x000170a6) list_setting_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_setting_pane_vc

0xa810,	// (0x000170a6) list_single_graphic_heading_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_single_graphic_heading_pane_vc

0xa810,	// (0x000170a6) list_single_heading_pane_vc_ParamLimits

0xa810,	// (0x000170a6) list_single_heading_pane_vc

0xa85d,	// (0x000170f3) list_single_number_heading_pane_vc_ParamLimits

0xa85d,	// (0x000170f3) list_single_number_heading_pane_vc

0x9078,	// (0x0001590e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9078,	// (0x0001590e) list_double_graphic_heading_pane_vc_g1

0x8738,	// (0x00014fce) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8738,	// (0x00014fce) list_double_graphic_heading_pane_vc_g2

0xadf6,	// (0x0001768c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xadf6,	// (0x0001768c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x0001c25f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0001c25f) list_double_graphic_heading_pane_vc_g

0xae02,	// (0x00017698) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xae02,	// (0x00017698) list_double_graphic_heading_pane_vc_t1

0xae18,	// (0x000176ae) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae18,	// (0x000176ae) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x0001c266) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x0001c266) list_double_graphic_heading_pane_vc_t

0x917e,	// (0x00015a14) list_setting_pane_vc_g1_ParamLimits

0x917e,	// (0x00015a14) list_setting_pane_vc_g1

0x918a,	// (0x00015a20) list_setting_pane_vc_g2_ParamLimits

0x918a,	// (0x00015a20) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001c055) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c055) list_setting_pane_vc_g

0xb069,	// (0x000178ff) list_setting_pane_vc_t1_ParamLimits

0xb069,	// (0x000178ff) list_setting_pane_vc_t1

0xb085,	// (0x0001791b) list_setting_pane_vc_t2_ParamLimits

0xb085,	// (0x0001791b) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x0001c294) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001c294) list_setting_pane_vc_t

0x91f4,	// (0x00015a8a) set_value_pane_cp_vc_ParamLimits

0x91f4,	// (0x00015a8a) set_value_pane_cp_vc

0x9084,	// (0x0001591a) list_single_number_heading_pane_vc_g1_ParamLimits

0x9084,	// (0x0001591a) list_single_number_heading_pane_vc_g1

0x9090,	// (0x00015926) list_single_number_heading_pane_vc_g2_ParamLimits

0x9090,	// (0x00015926) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c04b) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c04b) list_single_number_heading_pane_vc_g

0xb0a1,	// (0x00017937) list_single_number_heading_pane_vc_t1_ParamLimits

0xb0a1,	// (0x00017937) list_single_number_heading_pane_vc_t1

0xb0b7,	// (0x0001794d) list_single_number_heading_pane_vc_t2_ParamLimits

0xb0b7,	// (0x0001794d) list_single_number_heading_pane_vc_t2

0xb0c9,	// (0x0001795f) list_single_number_heading_pane_vc_t3_ParamLimits

0xb0c9,	// (0x0001795f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x0001c299) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x0001c299) list_single_number_heading_pane_vc_t

0x9078,	// (0x0001590e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9078,	// (0x0001590e) list_single_graphic_heading_pane_vc_g1

0x9084,	// (0x0001591a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9084,	// (0x0001591a) list_single_graphic_heading_pane_vc_g4

0x9090,	// (0x00015926) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9090,	// (0x00015926) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001c02a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001c02a) list_single_graphic_heading_pane_vc_g

0xb0a1,	// (0x00017937) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb0a1,	// (0x00017937) list_single_graphic_heading_pane_vc_t1

0xb0db,	// (0x00017971) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0db,	// (0x00017971) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0a,	// (0x0001c2a0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x0001c2a0) list_single_graphic_heading_pane_vc_t

0x9084,	// (0x0001591a) list_double2_pane_vc_g1_ParamLimits

0x9084,	// (0x0001591a) list_double2_pane_vc_g1

0x9090,	// (0x00015926) list_double2_pane_vc_g2_ParamLimits

0x9090,	// (0x00015926) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c04b) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c04b) list_double2_pane_vc_g

0xb0ed,	// (0x00017983) list_double2_pane_vc_t1_ParamLimits

0xb0ed,	// (0x00017983) list_double2_pane_vc_t1

0xb103,	// (0x00017999) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb103,	// (0x00017999) list_double2_large_graphic_pane_vc_g1

0xb10f,	// (0x000179a5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb10f,	// (0x000179a5) list_double2_large_graphic_pane_vc_g2

0xb11b,	// (0x000179b1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb11b,	// (0x000179b1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0f,	// (0x0001c2a5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0f,	// (0x0001c2a5) list_double2_large_graphic_pane_vc_g

0xb127,	// (0x000179bd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb127,	// (0x000179bd) list_double2_large_graphic_pane_vc_t1

0xb13d,	// (0x000179d3) list_double_time_pane_vc_g1_ParamLimits

0xb13d,	// (0x000179d3) list_double_time_pane_vc_g1

0xb149,	// (0x000179df) list_double_time_pane_vc_g2_ParamLimits

0xb149,	// (0x000179df) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x0001c2ac) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x0001c2ac) list_double_time_pane_vc_g

0xb155,	// (0x000179eb) list_double_time_pane_vc_t1_ParamLimits

0xb155,	// (0x000179eb) list_double_time_pane_vc_t1

0xb185,	// (0x00017a1b) list_double_time_pane_vc_t2_ParamLimits

0xb185,	// (0x00017a1b) list_double_time_pane_vc_t2

0xb1ae,	// (0x00017a44) list_double_time_pane_vc_t3_ParamLimits

0xb1ae,	// (0x00017a44) list_double_time_pane_vc_t3

0xb1c0,	// (0x00017a56) list_double_time_pane_vc_t4_ParamLimits

0xb1c0,	// (0x00017a56) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x0001c2b1) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x0001c2b1) list_double_time_pane_vc_t

0x9084,	// (0x0001591a) list_double_pane_vc_g1_ParamLimits

0x9084,	// (0x0001591a) list_double_pane_vc_g1

0x9090,	// (0x00015926) list_double_pane_vc_g2_ParamLimits

0x9090,	// (0x00015926) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c04b) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c04b) list_double_pane_vc_g

0xb1d4,	// (0x00017a6a) list_double_pane_vc_t1_ParamLimits

0xb1d4,	// (0x00017a6a) list_double_pane_vc_t1

0xb1e8,	// (0x00017a7e) list_double_pane_vc_t2_ParamLimits

0xb1e8,	// (0x00017a7e) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x0001c2ba) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x0001c2ba) list_double_pane_vc_t

0x9084,	// (0x0001591a) list_double_number_pane_vc_g1_ParamLimits

0x9084,	// (0x0001591a) list_double_number_pane_vc_g1

0x9090,	// (0x00015926) list_double_number_pane_vc_g2_ParamLimits

0x9090,	// (0x00015926) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0001c04b) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0001c04b) list_double_number_pane_vc_g

0xb1fe,	// (0x00017a94) list_double_number_pane_vc_t1_ParamLimits

0xb1fe,	// (0x00017a94) list_double_number_pane_vc_t1

0xb210,	// (0x00017aa6) list_double_number_pane_vc_t2_ParamLimits

0xb210,	// (0x00017aa6) list_double_number_pane_vc_t2

0xb1e8,	// (0x00017a7e) list_double_number_pane_vc_t3_ParamLimits

0xb1e8,	// (0x00017a7e) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x0001c2bf) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x0001c2bf) list_double_number_pane_vc_t

0xb224,	// (0x00017aba) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb224,	// (0x00017aba) list_double_large_graphic_pane_vc_g1

0xb246,	// (0x00017adc) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb246,	// (0x00017adc) list_double_large_graphic_pane_vc_g2

0xb25a,	// (0x00017af0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb25a,	// (0x00017af0) list_double_large_graphic_pane_vc_g3

0xb269,	// (0x00017aff) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb269,	// (0x00017aff) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x0001c2c6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x0001c2c6) list_double_large_graphic_pane_vc_g

0xb275,	// (0x00017b0b) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb275,	// (0x00017b0b) list_double_large_graphic_pane_vc_t1

0xb291,	// (0x00017b27) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb291,	// (0x00017b27) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x0001c2cf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x0001c2cf) list_double_large_graphic_pane_vc_t

0x8738,	// (0x00014fce) list_double_heading_pane_vc_g1_ParamLimits

0x8738,	// (0x00014fce) list_double_heading_pane_vc_g1

0xadf6,	// (0x0001768c) list_double_heading_pane_vc_g2_ParamLimits

0xadf6,	// (0x0001768c) list_double_heading_pane_vc_g2

0x0001,

0xfa3e,	// (0x0001c2d4) list_double_heading_pane_vc_g_ParamLimits

0xfa3e,	// (0x0001c2d4) list_double_heading_pane_vc_g

0xb2b1,	// (0x00017b47) list_double_heading_pane_vc_t1_ParamLimits

0xb2b1,	// (0x00017b47) list_double_heading_pane_vc_t1

0xb2c3,	// (0x00017b59) list_double_heading_pane_vc_t2_ParamLimits

0xb2c3,	// (0x00017b59) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0001c2d9) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0001c2d9) list_double_heading_pane_vc_t

0xb2db,	// (0x00017b71) list_double_graphic_pane_vc_g1_ParamLimits

0xb2db,	// (0x00017b71) list_double_graphic_pane_vc_g1

0xb2e7,	// (0x00017b7d) list_double_graphic_pane_vc_g2_ParamLimits

0xb2e7,	// (0x00017b7d) list_double_graphic_pane_vc_g2

0x9084,	// (0x0001591a) list_double_graphic_pane_vc_g3_ParamLimits

0x9084,	// (0x0001591a) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0001c2de) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0001c2de) list_double_graphic_pane_vc_g

0xb304,	// (0x00017b9a) list_double_graphic_pane_vc_t1_ParamLimits

0xb304,	// (0x00017b9a) list_double_graphic_pane_vc_t1

0xb32e,	// (0x00017bc4) list_double_graphic_pane_vc_t2_ParamLimits

0xb32e,	// (0x00017bc4) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0001c2e7) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0001c2e7) list_double_graphic_pane_vc_t

0x4c66,	// (0x000114fc) aid_size_cell_fastswap

0x4c6e,	// (0x00011504) aid_size_cell_touch_ParamLimits

0x4c6e,	// (0x00011504) aid_size_cell_touch

0x4ed9,	// (0x0001176f) popup_fast_swap_wide_window_ParamLimits

0x4ed9,	// (0x0001176f) popup_fast_swap_wide_window

0x4ff7,	// (0x0001188d) touch_pane_ParamLimits

0x4ff7,	// (0x0001188d) touch_pane

0x40ce,	// (0x00010964) button_value_adjust_pane_cp2

0x40d6,	// (0x0001096c) button_value_adjust_pane_cp4

0x40de,	// (0x00010974) form_field_data_pane_cp2

0x7aaf,	// (0x00014345) form_field_data_wide_pane_cp2

0x7fd3,	// (0x00014869) bg_scroll_pane_ParamLimits

0x528b,	// (0x00011b21) scroll_handle_pane_ParamLimits

0x529f,	// (0x00011b35) scroll_sc2_down_pane_ParamLimits

0x529f,	// (0x00011b35) scroll_sc2_down_pane

0x8004,	// (0x0001489a) scroll_sc2_up_pane_ParamLimits

0x8004,	// (0x0001489a) scroll_sc2_up_pane

0xb80e,	// (0x000180a4) grid_wheel_folder_pane_g1_ParamLimits

0xb80e,	// (0x000180a4) grid_wheel_folder_pane_g1

0x5466,	// (0x00011cfc) clock_nsta_pane_cp2_ParamLimits

0x5466,	// (0x00011cfc) clock_nsta_pane_cp2

0x886f,	// (0x00015105) listscroll_midp_pane_ParamLimits

0x887b,	// (0x00015111) midp_canvas_pane

0x8b66,	// (0x000153fc) nsta_clock_indic_pane

0x8ba2,	// (0x00015438) listscroll_form_pane_vc

0x8baa,	// (0x00015440) listscroll_set_pane_vc_ParamLimits

0x8baa,	// (0x00015440) listscroll_set_pane_vc

0x8ca9,	// (0x0001553f) clock_nsta_pane

0x8d26,	// (0x000155bc) indicator_nsta_pane

0x9012,	// (0x000158a8) bg_popup_sub_pane_cp2_ParamLimits

0x9026,	// (0x000158bc) find_pane_cp2_ParamLimits

0x9026,	// (0x000158bc) find_pane_cp2

0x903c,	// (0x000158d2) grid_toobar_pane_ParamLimits

0x9206,	// (0x00015a9c) list_form_gen_pane_vc_ParamLimits

0x9206,	// (0x00015a9c) list_form_gen_pane_vc

0x921c,	// (0x00015ab2) scroll_pane_cp8_vc_ParamLimits

0x921c,	// (0x00015ab2) scroll_pane_cp8_vc

0x9298,	// (0x00015b2e) data_form_wide_pane_vc_ParamLimits

0x9298,	// (0x00015b2e) data_form_wide_pane_vc

0x92a4,	// (0x00015b3a) form_field_data_wide_pane_vc_g1

0x92ac,	// (0x00015b42) form_field_data_wide_pane_vc_t1_ParamLimits

0x92ac,	// (0x00015b42) form_field_data_wide_pane_vc_t1

0x413a,	// (0x000109d0) input_focus_pane_cp6_vc_ParamLimits

0x413a,	// (0x000109d0) input_focus_pane_cp6_vc

0x95d7,	// (0x00015e6d) list_midp_pane_ParamLimits

0x95e3,	// (0x00015e79) scroll_pane_cp16_ParamLimits

0x95e3,	// (0x00015e79) scroll_pane_cp16

0x964d,	// (0x00015ee3) button_value_adjust_pane_ParamLimits

0x964d,	// (0x00015ee3) button_value_adjust_pane

0xa604,	// (0x00016e9a) button_value_adjust_pane_cp6_ParamLimits

0xa604,	// (0x00016e9a) button_value_adjust_pane_cp6

0xa74c,	// (0x00016fe2) settings_code_pane_cp_ParamLimits

0xa74c,	// (0x00016fe2) settings_code_pane_cp

0x378f,	// (0x00010025) cell_touch_pane_g1

0x378f,	// (0x00010025) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001bf6f) cell_touch_pane_g

0xadd5,	// (0x0001766b) cell_touch_pane_cp_ParamLimits

0xadd5,	// (0x0001766b) cell_touch_pane_cp

0xade5,	// (0x0001767b) cell_touch_pane_ParamLimits

0xade5,	// (0x0001767b) cell_touch_pane

0x378f,	// (0x00010025) scroll_sc2_down_pane_g1

0x378f,	// (0x00010025) scroll_sc2_up_pane_g1

0x3908,	// (0x0001019e) bg_set_opt_pane_cp4_vc

0xae36,	// (0x000176cc) list_set_graphic_pane_vc_g1_ParamLimits

0xae36,	// (0x000176cc) list_set_graphic_pane_vc_g1

0xae42,	// (0x000176d8) list_set_graphic_pane_vc_g2_ParamLimits

0xae42,	// (0x000176d8) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x0001c26b) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x0001c26b) list_set_graphic_pane_vc_g

0xae4e,	// (0x000176e4) text_primary_small_cp13_vc_ParamLimits

0xae4e,	// (0x000176e4) text_primary_small_cp13_vc

0xae66,	// (0x000176fc) list_set_graphic_pane_vc_ParamLimits

0xae66,	// (0x000176fc) list_set_graphic_pane_vc

0x3908,	// (0x0001019e) input_focus_pane_cp2_vc

0x378f,	// (0x00010025) setting_code_pane_vc_g1

0x3a62,	// (0x000102f8) setting_code_pane_vc_t1

0xae79,	// (0x0001770f) set_text_pane_vc_t1_ParamLimits

0xae79,	// (0x0001770f) set_text_pane_vc_t1

0x3908,	// (0x0001019e) input_focus_pane_cp1_vc

0xae9a,	// (0x00017730) list_set_text_pane_vc

0x378f,	// (0x00010025) setting_text_pane_vc_g1

0x3908,	// (0x0001019e) bg_set_opt_pane_cp2_vc

0x3a31,	// (0x000102c7) setting_slider_graphic_pane_vc_g1

0xaea4,	// (0x0001773a) setting_slider_graphic_pane_vc_t1

0xaeb6,	// (0x0001774c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x0001c270) setting_slider_graphic_pane_vc_t

0xaec8,	// (0x0001775e) slider_set_pane_cp_vc

0xaed2,	// (0x00017768) slider_set_pane_vc_g1

0xaedb,	// (0x00017771) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x0001c275) slider_set_pane_vc_g

0x41f5,	// (0x00010a8b) set_opt_bg_pane_g1_copy1

0x41fd,	// (0x00010a93) set_opt_bg_pane_g2_copy1

0xaf07,	// (0x0001779d) set_opt_bg_pane_g3_copy1

0x420d,	// (0x00010aa3) set_opt_bg_pane_g4_copy1

0x4215,	// (0x00010aab) set_opt_bg_pane_g5_copy1

0x421d,	// (0x00010ab3) set_opt_bg_pane_g6_copy1

0xaf11,	// (0x000177a7) set_opt_bg_pane_g7_copy1

0xaf1b,	// (0x000177b1) set_opt_bg_pane_g8_copy1

0xaf25,	// (0x000177bb) set_opt_bg_pane_g9_copy1

0x3908,	// (0x0001019e) bg_set_opt_pane_cp_vc

0xaf2f,	// (0x000177c5) setting_slider_pane_vc_t1

0xaf3e,	// (0x000177d4) setting_slider_pane_vc_t2

0xaf50,	// (0x000177e6) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x0001c284) setting_slider_pane_vc_t

0xaf62,	// (0x000177f8) slider_set_pane_vc

0x5ef3,	// (0x00012789) volume_set_pane_vc_g1

0x5efc,	// (0x00012792) volume_set_pane_vc_g2

0x5f05,	// (0x0001279b) volume_set_pane_vc_g3

0x5f0e,	// (0x000127a4) volume_set_pane_vc_g4

0x5f17,	// (0x000127ad) volume_set_pane_vc_g5

0x5f20,	// (0x000127b6) volume_set_pane_vc_g6

0x5f29,	// (0x000127bf) volume_set_pane_vc_g7

0x5f32,	// (0x000127c8) volume_set_pane_vc_g8

0x5f3b,	// (0x000127d1) volume_set_pane_vc_g9

0x5f44,	// (0x000127da) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x0001c122) volume_set_pane_vc_g

0xaf6c,	// (0x00017802) volume_set_pane_vc

0xaf76,	// (0x0001780c) button_value_adjust_pane_cp1_vc

0xaf80,	// (0x00017816) list_highlight_pane_cp2_vc

0xaf89,	// (0x0001781f) list_set_pane_vc_ParamLimits

0xaf89,	// (0x0001781f) list_set_pane_vc

0xaff7,	// (0x0001788d) main_pane_set_vc_t1_ParamLimits

0xaff7,	// (0x0001788d) main_pane_set_vc_t1

0xb00c,	// (0x000178a2) main_pane_set_vc_t2_ParamLimits

0xb00c,	// (0x000178a2) main_pane_set_vc_t2

0xb01e,	// (0x000178b4) main_pane_set_vc_t3_ParamLimits

0xb01e,	// (0x000178b4) main_pane_set_vc_t3

0xb032,	// (0x000178c8) main_pane_set_vc_t4_ParamLimits

0xb032,	// (0x000178c8) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x0001c28b) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x0001c28b) main_pane_set_vc_t

0xb046,	// (0x000178dc) setting_code_pane_vc_ParamLimits

0xb046,	// (0x000178dc) setting_code_pane_vc

0xb057,	// (0x000178ed) setting_slider_graphic_pane_vc

0xb057,	// (0x000178ed) setting_slider_pane_vc

0xb057,	// (0x000178ed) setting_text_pane_vc

0xb057,	// (0x000178ed) setting_volume_pane_vc

0xb061,	// (0x000178f7) scroll_pane_cp121_vc

0x40bc,	// (0x00010952) set_content_pane_vc

0xb34c,	// (0x00017be2) button_value_adjust_pane_g1

0xb355,	// (0x00017beb) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0001c2ec) button_value_adjust_pane_g

0xb35e,	// (0x00017bf4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb35e,	// (0x00017bf4) form_field_slider_wide_pane_vc_t1

0xb370,	// (0x00017c06) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb370,	// (0x00017c06) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0001c2f1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0001c2f1) form_field_slider_wide_pane_vc_t

0x39aa,	// (0x00010240) input_focus_pane_cp10_vc_ParamLimits

0x39aa,	// (0x00010240) input_focus_pane_cp10_vc

0xb39c,	// (0x00017c32) slider_cont_pane_cp1_vc_ParamLimits

0xb39c,	// (0x00017c32) slider_cont_pane_cp1_vc

0xb3ae,	// (0x00017c44) slider_form_pane_g1_cp2

0xaedb,	// (0x00017771) slider_form_pane_g2_cp2

0xb3db,	// (0x00017c71) form_field_slider_pane_vc_t3

0xb3e9,	// (0x00017c7f) form_field_slider_pane_vc_t4

0xb3f7,	// (0x00017c8d) slider_form_pane_vc_ParamLimits

0xb3f7,	// (0x00017c8d) slider_form_pane_vc

0xb404,	// (0x00017c9a) form_field_slider_pane_vc_t1_ParamLimits

0xb404,	// (0x00017c9a) form_field_slider_pane_vc_t1

0xb370,	// (0x00017c06) form_field_slider_pane_vc_t2_ParamLimits

0xb370,	// (0x00017c06) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001c303) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001c303) form_field_slider_pane_vc_t

0x39aa,	// (0x00010240) input_focus_pane_cp9_vc_ParamLimits

0x39aa,	// (0x00010240) input_focus_pane_cp9_vc

0xb41a,	// (0x00017cb0) slider_cont_pane_vc_ParamLimits

0xb41a,	// (0x00017cb0) slider_cont_pane_vc

0xb42e,	// (0x00017cc4) list_form_graphic_pane_cp_vc_ParamLimits

0xb42e,	// (0x00017cc4) list_form_graphic_pane_cp_vc

0x92a4,	// (0x00015b3a) form_field_popup_wide_pane_vc_g1

0xb443,	// (0x00017cd9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb443,	// (0x00017cd9) form_field_popup_wide_pane_vc_t1

0x413a,	// (0x000109d0) input_focus_pane_cp8_vc_ParamLimits

0x413a,	// (0x000109d0) input_focus_pane_cp8_vc

0xb488,	// (0x00017d1e) list_form_wide_pane_vc_ParamLimits

0xb488,	// (0x00017d1e) list_form_wide_pane_vc

0xb494,	// (0x00017d2a) list_form_graphic_pane_vc_g1

0xb49c,	// (0x00017d32) list_form_graphic_pane_vc_t1_ParamLimits

0xb49c,	// (0x00017d32) list_form_graphic_pane_vc_t1

0x39c2,	// (0x00010258) list_highlight_pane_cp5_vc_ParamLimits

0x39c2,	// (0x00010258) list_highlight_pane_cp5_vc

0xb4b8,	// (0x00017d4e) list_form_graphic_pane_vc_ParamLimits

0xb4b8,	// (0x00017d4e) list_form_graphic_pane_vc

0x92a4,	// (0x00015b3a) form_field_popup_pane_vc_g1

0xb4ce,	// (0x00017d64) form_field_popup_pane_vc_t1_ParamLimits

0xb4ce,	// (0x00017d64) form_field_popup_pane_vc_t1

0x413a,	// (0x000109d0) input_focus_pane_cp7_vc_ParamLimits

0x413a,	// (0x000109d0) input_focus_pane_cp7_vc

0xb4e5,	// (0x00017d7b) list_form_pane_vc_ParamLimits

0xb4e5,	// (0x00017d7b) list_form_pane_vc

0xb4f1,	// (0x00017d87) data_form_pane_vc_t1_ParamLimits

0xb4f1,	// (0x00017d87) data_form_pane_vc_t1

0x41f5,	// (0x00010a8b) input_focus_pane_vc_g1

0x41fd,	// (0x00010a93) input_focus_pane_vc_g2

0x4205,	// (0x00010a9b) input_focus_pane_vc_g3

0x420d,	// (0x00010aa3) input_focus_pane_vc_g4

0x4215,	// (0x00010aab) input_focus_pane_vc_g5

0x421d,	// (0x00010ab3) input_focus_pane_vc_g6

0x4225,	// (0x00010abb) input_focus_pane_vc_g7

0x422d,	// (0x00010ac3) input_focus_pane_vc_g8

0x4235,	// (0x00010acb) input_focus_pane_vc_g9

0x378f,	// (0x00010025) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001bef8) input_focus_pane_vc_g

0x9298,	// (0x00015b2e) data_form_pane_vc_ParamLimits

0x9298,	// (0x00015b2e) data_form_pane_vc

0x92a4,	// (0x00015b3a) form_field_data_pane_vc_g1

0xb50e,	// (0x00017da4) form_field_data_pane_vc_t1_ParamLimits

0xb50e,	// (0x00017da4) form_field_data_pane_vc_t1

0x413a,	// (0x000109d0) input_focus_pane_vc_ParamLimits

0x413a,	// (0x000109d0) input_focus_pane_vc

0xb528,	// (0x00017dbe) button_value_adjust_pane_cp3_vc

0xb530,	// (0x00017dc6) button_value_adjust_pane_cp5_vc

0xb538,	// (0x00017dce) form_field_data_pane_vc_ParamLimits

0xb538,	// (0x00017dce) form_field_data_pane_vc

0xb553,	// (0x00017de9) form_field_data_pane_vc_cp2

0xb55b,	// (0x00017df1) form_field_data_wide_pane_vc_ParamLimits

0xb55b,	// (0x00017df1) form_field_data_wide_pane_vc

0xb575,	// (0x00017e0b) form_field_data_wide_pane_vc_cp2

0xb57d,	// (0x00017e13) form_field_popup_pane_vc_ParamLimits

0xb57d,	// (0x00017e13) form_field_popup_pane_vc

0xb598,	// (0x00017e2e) form_field_popup_wide_pane_vc_ParamLimits

0xb598,	// (0x00017e2e) form_field_popup_wide_pane_vc

0xb5b2,	// (0x00017e48) form_field_slider_pane_vc_ParamLimits

0xb5b2,	// (0x00017e48) form_field_slider_pane_vc

0xb5c5,	// (0x00017e5b) form_field_slider_wide_pane_vc_ParamLimits

0xb5c5,	// (0x00017e5b) form_field_slider_wide_pane_vc

0xb5d8,	// (0x00017e6e) grid_touch_1_pane_ParamLimits

0xb5d8,	// (0x00017e6e) grid_touch_1_pane

0xb5e4,	// (0x00017e7a) grid_touch_2_pane_ParamLimits

0xb5e4,	// (0x00017e7a) grid_touch_2_pane

0x8b31,	// (0x000153c7) touch_pane_g1_ParamLimits

0x8b31,	// (0x000153c7) touch_pane_g1

0xb5fe,	// (0x00017e94) cell_app_pane_cp_wide_ParamLimits

0xb5fe,	// (0x00017e94) cell_app_pane_cp_wide

0xb60f,	// (0x00017ea5) grid_popup_fast_wide_pane_ParamLimits

0xb60f,	// (0x00017ea5) grid_popup_fast_wide_pane

0xb623,	// (0x00017eb9) scroll_pane_cp19_ParamLimits

0xb623,	// (0x00017eb9) scroll_pane_cp19

0x3908,	// (0x0001019e) bg_popup_window_pane_cp20

0xb637,	// (0x00017ecd) listscroll_popup_fast_wide_pane

0xb63f,	// (0x00017ed5) grid_indicator_nsta_pane

0xb651,	// (0x00017ee7) clock_nsta_pane_g1

0xb65a,	// (0x00017ef0) clock_nsta_pane_t1

0xb676,	// (0x00017f0c) cell_indicator_nsta_pane_ParamLimits

0xb676,	// (0x00017f0c) cell_indicator_nsta_pane

0xb6ab,	// (0x00017f41) cell_indicator_nsta_pane_g1

0xb6b9,	// (0x00017f4f) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0001c314) cell_indicator_nsta_pane_g

0xb6cc,	// (0x00017f62) clock_nsta_pane_cp

0xb6d5,	// (0x00017f6b) indicator_nsta_pane_cp

0xb6df,	// (0x00017f75) nsta_clock_indic_pane_g1

0x3aa1,	// (0x00010337) grid_indicator_pane

0x80f6,	// (0x0001498c) scroll_pane_cp29

0x53b5,	// (0x00011c4b) indicator_nsta_pane_cp2_ParamLimits

0x53b5,	// (0x00011c4b) indicator_nsta_pane_cp2

0x39c2,	// (0x00010258) main_apps_wheel_pane

0x94b4,	// (0x00015d4a) form_midp_field_text_pane_ParamLimits

0x9603,	// (0x00015e99) scroll_bar_cp050_ParamLimits

0xb738,	// (0x00017fce) cell_indicator_pane_ParamLimits

0xb738,	// (0x00017fce) cell_indicator_pane

0xb750,	// (0x00017fe6) cell_indicator_pane_g1

0xb75a,	// (0x00017ff0) grid_wheel_folder_pane_ParamLimits

0xb75a,	// (0x00017ff0) grid_wheel_folder_pane

0xb76e,	// (0x00018004) list_wheel_apps_pane_ParamLimits

0xb76e,	// (0x00018004) list_wheel_apps_pane

0xb781,	// (0x00018017) main_apps_wheel_pane_g1_ParamLimits

0xb781,	// (0x00018017) main_apps_wheel_pane_g1

0xb79d,	// (0x00018033) main_apps_wheel_pane_g2_ParamLimits

0xb79d,	// (0x00018033) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0001c330) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0001c330) main_apps_wheel_pane_g

0xb7b9,	// (0x0001804f) main_apps_wheel_pane_t1_ParamLimits

0xb7b9,	// (0x0001804f) main_apps_wheel_pane_t1

0xb7e2,	// (0x00018078) list_wheel_apps_pane_g1

0xb7ea,	// (0x00018080) list_wheel_apps_pane_g2

0xb7f2,	// (0x00018088) list_wheel_apps_pane_g3

0xb7fa,	// (0x00018090) list_wheel_apps_pane_g4

0xb804,	// (0x0001809a) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0001c335) list_wheel_apps_pane_g

0x86e3,	// (0x00014f79) navi_icon_text_pane

0x8bda,	// (0x00015470) aid_fill_nsta

0xb825,	// (0x000180bb) navi_icon_text_pane_g1

0xb831,	// (0x000180c7) navi_icon_text_pane_t1

0x856e,	// (0x00014e04) list_set_graphic_pane_t1_ParamLimits

0x856e,	// (0x00014e04) list_set_graphic_pane_t1

0x9d70,	// (0x00016606) popup_midp_note_alarm_window_t6_ParamLimits

0x9d70,	// (0x00016606) popup_midp_note_alarm_window_t6

0x9d82,	// (0x00016618) popup_midp_note_alarm_window_t7_ParamLimits

0x9d82,	// (0x00016618) popup_midp_note_alarm_window_t7

0x9d94,	// (0x0001662a) popup_midp_note_alarm_window_t8_ParamLimits

0x9d94,	// (0x0001662a) popup_midp_note_alarm_window_t8

0x9da6,	// (0x0001663c) popup_midp_note_alarm_window_t9_ParamLimits

0x9da6,	// (0x0001663c) popup_midp_note_alarm_window_t9

0x9db8,	// (0x0001664e) popup_midp_note_alarm_window_t10_ParamLimits

0x9db8,	// (0x0001664e) popup_midp_note_alarm_window_t10

0x9dca,	// (0x00016660) popup_midp_note_alarm_window_t11_ParamLimits

0x9dca,	// (0x00016660) popup_midp_note_alarm_window_t11

0x9ddc,	// (0x00016672) scroll_pane_cp17_ParamLimits

0x9ddc,	// (0x00016672) scroll_pane_cp17

0x5ef3,	// (0x00012789) volume_small_pane_cp_g1

0x6204,	// (0x00012a9a) volume_small_pane_cp_g2

0x620d,	// (0x00012aa3) volume_small_pane_cp_g3

0x6216,	// (0x00012aac) volume_small_pane_cp_g4

0x621f,	// (0x00012ab5) volume_small_pane_cp_g5

0x6228,	// (0x00012abe) volume_small_pane_cp_g6

0x6231,	// (0x00012ac7) volume_small_pane_cp_g7

0x623a,	// (0x00012ad0) volume_small_pane_cp_g8

0x6243,	// (0x00012ad9) volume_small_pane_cp_g9

0x624c,	// (0x00012ae2) volume_small_pane_cp_g10

0x8945,	// (0x000151db) midp_ticker_pane_g1_ParamLimits

0x8951,	// (0x000151e7) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001bfc4) midp_ticker_pane_g_ParamLimits

0x895d,	// (0x000151f3) midp_ticker_pane_t1_ParamLimits

0x8bf0,	// (0x00015486) aid_fill_nsta_2

0x95ef,	// (0x00015e85) list_form2_midp_pane

0xa7c8,	// (0x0001705e) midp_editing_number_pane_ParamLimits

0xa7d7,	// (0x0001706d) midp_ticker_pane_ParamLimits

0xb843,	// (0x000180d9) form2_midp_field_pane

0xb867,	// (0x000180fd) scroll_pane_cp51

0xb887,	// (0x0001811d) form2_midp_button_pane_ParamLimits

0xb887,	// (0x0001811d) form2_midp_button_pane

0xb899,	// (0x0001812f) form2_midp_content_pane_ParamLimits

0xb899,	// (0x0001812f) form2_midp_content_pane

0xb8b3,	// (0x00018149) form2_midp_field_choice_group_pane

0xb8bb,	// (0x00018151) form2_midp_field_pane_g1

0xb8c3,	// (0x00018159) form2_midp_field_pane_g2

0xb8cb,	// (0x00018161) form2_midp_field_pane_g3

0xb8d3,	// (0x00018169) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0001c35a) form2_midp_field_pane_g

0xb8db,	// (0x00018171) form2_midp_gauge_slider_pane

0xb8e3,	// (0x00018179) form2_midp_gauge_wait_pane

0xb8eb,	// (0x00018181) form2_midp_image_pane_ParamLimits

0xb8eb,	// (0x00018181) form2_midp_image_pane

0xb906,	// (0x0001819c) form2_midp_label_pane_ParamLimits

0xb906,	// (0x0001819c) form2_midp_label_pane

0xb925,	// (0x000181bb) form2_midp_label_pane_cp_ParamLimits

0xb925,	// (0x000181bb) form2_midp_label_pane_cp

0xb946,	// (0x000181dc) form2_midp_string_pane_ParamLimits

0xb946,	// (0x000181dc) form2_midp_string_pane

0xb958,	// (0x000181ee) form2_midp_text_pane_ParamLimits

0xb958,	// (0x000181ee) form2_midp_text_pane

0xb979,	// (0x0001820f) form2_midp_time_pane

0xb989,	// (0x0001821f) input_focus_pane_cp51_ParamLimits

0xb989,	// (0x0001821f) input_focus_pane_cp51

0xb9a1,	// (0x00018237) form2_midp_label_pane_t1_ParamLimits

0xb9a1,	// (0x00018237) form2_midp_label_pane_t1

0xb9e7,	// (0x0001827d) form2_mdip_text_pane_t1_ParamLimits

0xb9e7,	// (0x0001827d) form2_mdip_text_pane_t1

0xba06,	// (0x0001829c) form2_midp_time_pane_t1

0xba21,	// (0x000182b7) form2_midp_gauge_slider_pane_t1

0xba33,	// (0x000182c9) form2_midp_gauge_slider_pane_t2

0xba45,	// (0x000182db) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0001c363) form2_midp_gauge_slider_pane_t

0xba57,	// (0x000182ed) form2_midp_slider_pane

0xba63,	// (0x000182f9) form2_midp_gauge_wait_pane_t1

0xba71,	// (0x00018307) form2_midp_wait_pane_ParamLimits

0xba71,	// (0x00018307) form2_midp_wait_pane

0xba9c,	// (0x00018332) list_single_2graphic_pane_cp4_ParamLimits

0xba9c,	// (0x00018332) list_single_2graphic_pane_cp4

0x9301,	// (0x00015b97) list_single_midp_graphic_pane_cp_ParamLimits

0x9301,	// (0x00015b97) list_single_midp_graphic_pane_cp

0x3908,	// (0x0001019e) list_highlight_pane_cp20

0xbab5,	// (0x0001834b) list_single_2graphic_pane_g1_cp4

0xacd8,	// (0x0001756e) list_single_2graphic_pane_g2_cp4

0xbabd,	// (0x00018353) list_single_2graphic_pane_t1_cp4

0x39c2,	// (0x00010258) list_highlight_pane_cp21

0xbacc,	// (0x00018362) list_single_midp_graphic_pane_g4_cp

0xbadb,	// (0x00018371) list_single_midp_graphic_pane_t1_cp

0xbaf0,	// (0x00018386) form2_mdip_string_pane_t1_ParamLimits

0xbaf0,	// (0x00018386) form2_mdip_string_pane_t1

0x3908,	// (0x0001019e) bg_wml_button_pane_cp2

0x378f,	// (0x00010025) form2_midp_image_pane_g1

0x404e,	// (0x000108e4) list_double_large_graphic_pane_g5_ParamLimits

0x404e,	// (0x000108e4) list_double_large_graphic_pane_g5

0x886f,	// (0x00015105) midp_form_pane_ParamLimits

0x39c2,	// (0x00010258) main_apps_wheel_pane_ParamLimits

0x5af0,	// (0x00012386) popup_preview_window_ParamLimits

0x5af0,	// (0x00012386) popup_preview_window

0x5cd7,	// (0x0001256d) popup_touch_info_window_ParamLimits

0x5cd7,	// (0x0001256d) popup_touch_info_window

0x5cf9,	// (0x0001258f) popup_touch_menu_window_ParamLimits

0x5cf9,	// (0x0001258f) popup_touch_menu_window

0x3785,	// (0x0001001b) bg_popup_sub_pane_cp6

0xbb8c,	// (0x00018422) list_touch_menu_pane

0xbb94,	// (0x0001842a) list_single_touch_menu_pane_ParamLimits

0xbb94,	// (0x0001842a) list_single_touch_menu_pane

0xbbac,	// (0x00018442) list_single_touch_menu_pane_t1

0x39c2,	// (0x00010258) bg_popup_sub_pane_cp7_ParamLimits

0x39c2,	// (0x00010258) bg_popup_sub_pane_cp7

0xbbba,	// (0x00018450) heading_sub_pane

0xbbc2,	// (0x00018458) list_touch_info_pane_ParamLimits

0xbbc2,	// (0x00018458) list_touch_info_pane

0xbbd1,	// (0x00018467) list_single_touch_info_pane_ParamLimits

0xbbd1,	// (0x00018467) list_single_touch_info_pane

0xbbe3,	// (0x00018479) list_single_touch_info_pane_t1

0xbbf1,	// (0x00018487) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0001c371) list_single_touch_info_pane_t

0x8867,	// (0x000150fd) bg_popup_heading_pane_cp

0xbbff,	// (0x00018495) heading_sub_pane_t1

0x9232,	// (0x00015ac8) bg_popup_preview_window_pane_cp_ParamLimits

0x9232,	// (0x00015ac8) bg_popup_preview_window_pane_cp

0xbbba,	// (0x00018450) heading_preview_pane

0xbbc2,	// (0x00018458) list_preview_pane_ParamLimits

0xbbc2,	// (0x00018458) list_preview_pane

0xbc0d,	// (0x000184a3) popup_preview_window_g1

0xbbd1,	// (0x00018467) list_single_preview_pane_ParamLimits

0xbbd1,	// (0x00018467) list_single_preview_pane

0xbc15,	// (0x000184ab) list_single_preview_pane_g1

0xbc1d,	// (0x000184b3) list_single_preview_pane_t1

0xbbe3,	// (0x00018479) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0001c376) list_single_preview_pane_t

0xbc2b,	// (0x000184c1) bg_popup_heading_pane_cp2_ParamLimits

0xbc2b,	// (0x000184c1) bg_popup_heading_pane_cp2

0xbc41,	// (0x000184d7) heading_preview_pane_g1

0xbc49,	// (0x000184df) heading_preview_pane_t1_ParamLimits

0xbc49,	// (0x000184df) heading_preview_pane_t1

0x3ab8,	// (0x0001034e) soft_indicator_pane_t1_ParamLimits

0x401a,	// (0x000108b0) scroll_pane_ParamLimits

0x7ff2,	// (0x00014888) scroll_sc2_left_pane

0x7ffb,	// (0x00014891) scroll_sc2_right_pane

0x801a,	// (0x000148b0) scroll_bg_pane_g1_ParamLimits

0x802f,	// (0x000148c5) scroll_bg_pane_g2_ParamLimits

0x8047,	// (0x000148dd) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001bf4f) scroll_bg_pane_g_ParamLimits

0x801a,	// (0x000148b0) scroll_handle_pane_g1_ParamLimits

0x8069,	// (0x000148ff) scroll_handle_pane_g2_ParamLimits

0x8047,	// (0x000148dd) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001bf56) scroll_handle_pane_g_ParamLimits

0x5735,	// (0x00011fcb) popup_choice_list_window_ParamLimits

0x5735,	// (0x00011fcb) popup_choice_list_window

0x901e,	// (0x000158b4) choice_list_pane

0x90da,	// (0x00015970) cell_toolbar_pane_t1

0x9102,	// (0x00015998) toolbar_button_pane_ParamLimits

0xa2a6,	// (0x00016b3c) ai_gene_pane_1_t2_ParamLimits

0xa2a6,	// (0x00016b3c) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0001c17e) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0001c17e) ai_gene_pane_1_t

0xbc66,	// (0x000184fc) scroll_sc2_left_pane_g1

0xbc66,	// (0x000184fc) scroll_sc2_right_pane_g1

0x8b96,	// (0x0001542c) bg_popup_sub_pane_cp10

0xbc70,	// (0x00018506) list_choice_list_pane

0xbc89,	// (0x0001851f) list_single_choice_list_pane_ParamLimits

0xbc89,	// (0x0001851f) list_single_choice_list_pane

0xbca1,	// (0x00018537) list_single_choice_list_pane_g1

0x7cf4,	// (0x0001458a) list_single_choice_list_pane_t1_ParamLimits

0x7cf4,	// (0x0001458a) list_single_choice_list_pane_t1

0xbca9,	// (0x0001853f) choice_list_pane_g1

0xbcb1,	// (0x00018547) choice_list_pane_t1

0x3785,	// (0x0001001b) input_focus_pane_cp11

0x7ecb,	// (0x00014761) title_pane_stacon_g2_ParamLimits

0x7ecb,	// (0x00014761) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001bf35) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001bf35) title_pane_stacon_g

0x8867,	// (0x000150fd) cursor_press_pane

0x57ef,	// (0x00012085) popup_fep_hwr_window_ParamLimits

0x57ef,	// (0x00012085) popup_fep_hwr_window

0x5879,	// (0x0001210f) popup_fep_vkb_window_ParamLimits

0x5879,	// (0x0001210f) popup_fep_vkb_window

0xbcbf,	// (0x00018555) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0001c39f) fep_vkb_side_pane_g_ParamLimits

0x628e,	// (0x00012b24) fep_hwr_candidate_pane_ParamLimits

0x628e,	// (0x00012b24) fep_hwr_candidate_pane

0x62b8,	// (0x00012b4e) fep_hwr_side_pane_ParamLimits

0x62b8,	// (0x00012b4e) fep_hwr_side_pane

0x62da,	// (0x00012b70) fep_hwr_top_pane_ParamLimits

0x62da,	// (0x00012b70) fep_hwr_top_pane

0x62f2,	// (0x00012b88) fep_hwr_write_pane_ParamLimits

0x62f2,	// (0x00012b88) fep_hwr_write_pane

0xfb09,	// (0x0001c39f) fep_vkb_side_pane_g

0xbcc7,	// (0x0001855d) fep_hwr_top_pane_g1

0xbcd9,	// (0x0001856f) fep_hwr_top_pane_g2

0x632c,	// (0x00012bc2) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0001c37b) fep_hwr_top_pane_g

0x6341,	// (0x00012bd7) fep_hwr_top_text_pane

0x81be,	// (0x00014a54) fep_hwr_top_text_pane_g1

0xbd0f,	// (0x000185a5) fep_hwr_top_text_pane_t1

0x644b,	// (0x00012ce1) fep_hwr_candidate_pane_g1

0xbf5a,	// (0x000187f0) fep_vkb_keypad_pane_g3_ParamLimits

0xbf5a,	// (0x000187f0) fep_vkb_keypad_pane_g3

0xbf86,	// (0x0001881c) fep_vkb_keypad_pane_g4_ParamLimits

0xbf86,	// (0x0001881c) fep_vkb_keypad_pane_g4

0xbffd,	// (0x00018893) fep_vkb_bottom_pane_g2_ParamLimits

0xbffd,	// (0x00018893) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0001c3a6) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0001c3a6) fep_vkb_bottom_pane_g

0xbc66,	// (0x000184fc) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0001c3b0) cell_vkb_side_pane_g

0xc088,	// (0x0001891e) cell_vkb_side_pane_t1

0xc096,	// (0x0001892c) cell_vkb_side_pane_t1_copy1

0xbc66,	// (0x000184fc) bg_fep_vkb_candidate_pane_g2

0xc1da,	// (0x00018a70) cell_vkb_candidate_pane_ParamLimits

0xbd1d,	// (0x000185b3) aid_size_cell_vkb_ParamLimits

0xbd1d,	// (0x000185b3) aid_size_cell_vkb

0xc1da,	// (0x00018a70) cell_vkb_candidate_pane

0x6472,	// (0x00012d08) bg_popup_fep_shadow_pane_g1

0xbdaf,	// (0x00018645) fep_vkb_bottom_pane_ParamLimits

0xbdaf,	// (0x00018645) fep_vkb_bottom_pane

0xbdec,	// (0x00018682) fep_vkb_candidate_pane_ParamLimits

0xbdec,	// (0x00018682) fep_vkb_candidate_pane

0xbe08,	// (0x0001869e) fep_vkb_keypad_pane_ParamLimits

0xbe08,	// (0x0001869e) fep_vkb_keypad_pane

0xbe3b,	// (0x000186d1) fep_vkb_side_pane_ParamLimits

0xbe3b,	// (0x000186d1) fep_vkb_side_pane

0xbe77,	// (0x0001870d) fep_vkb_top_pane_ParamLimits

0xbe77,	// (0x0001870d) fep_vkb_top_pane

0xbeb3,	// (0x00018749) fep_vkb_top_pane_g1_ParamLimits

0xbeb3,	// (0x00018749) fep_vkb_top_pane_g1

0xbec2,	// (0x00018758) fep_vkb_top_pane_g2_ParamLimits

0xbec2,	// (0x00018758) fep_vkb_top_pane_g2

0xbed1,	// (0x00018767) fep_vkb_top_pane_g3_ParamLimits

0xbed1,	// (0x00018767) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0001c396) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0001c396) fep_vkb_top_pane_g

0xbeef,	// (0x00018785) fep_vkb_top_text_pane_ParamLimits

0xbeef,	// (0x00018785) fep_vkb_top_text_pane

0xbf00,	// (0x00018796) fep_vkb_side_pane_g1_ParamLimits

0xbf00,	// (0x00018796) fep_vkb_side_pane_g1

0xbf49,	// (0x000187df) grid_vkb_side_pane_ParamLimits

0xbf49,	// (0x000187df) grid_vkb_side_pane

0x647a,	// (0x00012d10) bg_popup_fep_shadow_pane_g2

0x6483,	// (0x00012d19) bg_popup_fep_shadow_pane_g3

0x648b,	// (0x00012d21) bg_popup_fep_shadow_pane_g4

0x6494,	// (0x00012d2a) bg_popup_fep_shadow_pane_g5

0x649e,	// (0x00012d34) bg_popup_fep_shadow_pane_g6

0x64a6,	// (0x00012d3c) bg_popup_fep_shadow_pane_g7

0x420d,	// (0x00010aa3) bg_popup_fep_shadow_pane_g8

0xbfa8,	// (0x0001883e) grid_vkb_keypad_number_pane_ParamLimits

0xbfa8,	// (0x0001883e) grid_vkb_keypad_number_pane

0xbfbc,	// (0x00018852) grid_vkb_keypad_pane_ParamLimits

0xbfbc,	// (0x00018852) grid_vkb_keypad_pane

0xbfe2,	// (0x00018878) fep_vkb_bottom_pane_g1_ParamLimits

0xbfe2,	// (0x00018878) fep_vkb_bottom_pane_g1

0xc00b,	// (0x000188a1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc00b,	// (0x000188a1) grid_vkb_keypad_bottom_left_pane

0xc020,	// (0x000188b6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc020,	// (0x000188b6) grid_vkb_keypad_bottom_right_pane

0xc035,	// (0x000188cb) fep_vkb_top_text_pane_g1

0xc050,	// (0x000188e6) fep_vkb_top_text_pane_t1

0xc065,	// (0x000188fb) cell_vkb_side_pane_ParamLimits

0xc065,	// (0x000188fb) cell_vkb_side_pane

0xbc66,	// (0x000184fc) cell_vkb_side_pane_g1

0xc0a4,	// (0x0001893a) cell_vkb_keypad_pane_ParamLimits

0xc0a4,	// (0x0001893a) cell_vkb_keypad_pane

0xc131,	// (0x000189c7) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0001c3c3) bg_popup_fep_shadow_pane_g

0x64b8,	// (0x00012d4e) cell_hwr_side_pane_g1

0x64b8,	// (0x00012d4e) cell_hwr_side_pane_g2

0xc13b,	// (0x000189d1) cell_vkb_keypad_pane_t1

0xc149,	// (0x000189df) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc149,	// (0x000189df) cell_vkb_keypad_bottom_left_pane

0xc166,	// (0x000189fc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc166,	// (0x000189fc) cell_vkb_keypad_bottom_right_pane

0xbc66,	// (0x000184fc) cell_vkb_keypad_bottom_left_pane_g1

0xbc66,	// (0x000184fc) cell_vkb_keypad_bottom_right_pane_g1

0xc19f,	// (0x00018a35) cell_vkb_keypad_number_pane_ParamLimits

0xc19f,	// (0x00018a35) cell_vkb_keypad_number_pane

0xc1be,	// (0x00018a54) cell_vkb_keypad_number_pane_g1

0xc1c8,	// (0x00018a5e) cell_vkb_keypad_number_pane_g2

0xc1d1,	// (0x00018a67) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0001c3b5) cell_vkb_keypad_number_pane_g

0xc13b,	// (0x000189d1) cell_vkb_keypad_number_pane_t1

0xc1fb,	// (0x00018a91) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0001c3d6) cell_hwr_side_pane_g

0xc214,	// (0x00018aaa) cell_hwr_side_pane_t1

0x64c2,	// (0x00012d58) cell_hwr_side_pane_t1_copy1

0x64d0,	// (0x00012d66) cell_hwr_candidate_pane_g1

0x64ff,	// (0x00012d95) cell_hwr_candidate_pane_t1

0xbc66,	// (0x000184fc) cell_vkb_candidate_pane_g2

0xc258,	// (0x00018aee) cell_vkb_candidate_pane_t1

0x6255,	// (0x00012aeb) bg_popup_fep_shadow_pane_ParamLimits

0x6255,	// (0x00012aeb) bg_popup_fep_shadow_pane

0x630c,	// (0x00012ba2) bg_fep_hwr_top_pane_g4

0xbceb,	// (0x00018581) bg_hwr_side_pane_g1_ParamLimits

0xbceb,	// (0x00018581) bg_hwr_side_pane_g1

0x637f,	// (0x00012c15) cell_hwr_side_pane_ParamLimits

0x637f,	// (0x00012c15) cell_hwr_side_pane

0x63bc,	// (0x00012c52) fep_hwr_write_pane_g1_ParamLimits

0x63bc,	// (0x00012c52) fep_hwr_write_pane_g1

0x63c9,	// (0x00012c5f) fep_hwr_write_pane_g2_ParamLimits

0x63c9,	// (0x00012c5f) fep_hwr_write_pane_g2

0x63d6,	// (0x00012c6c) fep_hwr_write_pane_g3_ParamLimits

0x63d6,	// (0x00012c6c) fep_hwr_write_pane_g3

0x63e4,	// (0x00012c7a) fep_hwr_write_pane_g4_ParamLimits

0x63e4,	// (0x00012c7a) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0001c382) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0001c382) fep_hwr_write_pane_g

0x630c,	// (0x00012ba2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x630c,	// (0x00012ba2) bg_fep_hwr_candidate_pane_g2

0x63f9,	// (0x00012c8f) cell_hwr_candidate_pane_ParamLimits

0x63f9,	// (0x00012c8f) cell_hwr_candidate_pane

0x644b,	// (0x00012ce1) fep_hwr_candidate_pane_g1_ParamLimits

0xbd4b,	// (0x000185e1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd4b,	// (0x000185e1) bg_popup_fep_shadow_pane_cp2

0xbee1,	// (0x00018777) fep_vkb_top_pane_g4_ParamLimits

0xbee1,	// (0x00018777) fep_vkb_top_pane_g4

0xbf27,	// (0x000187bd) fep_vkb_side_pane_g2_ParamLimits

0xbf27,	// (0x000187bd) fep_vkb_side_pane_g2

0x79cd,	// (0x00014263) list_setting_pane_t4_ParamLimits

0x79cd,	// (0x00014263) list_setting_pane_t4

0x7a49,	// (0x000142df) list_setting_number_pane_t5_ParamLimits

0x7a49,	// (0x000142df) list_setting_number_pane_t5

0x8205,	// (0x00014a9b) list_double_heading_pane_cp2_ParamLimits

0x8205,	// (0x00014a9b) list_double_heading_pane_cp2

0xc266,	// (0x00018afc) list_double_heading_pane_g1_cp2_ParamLimits

0xc266,	// (0x00018afc) list_double_heading_pane_g1_cp2

0xc272,	// (0x00018b08) list_double_heading_pane_g2_cp2_ParamLimits

0xc272,	// (0x00018b08) list_double_heading_pane_g2_cp2

0xc286,	// (0x00018b1c) list_double_heading_pane_t1_cp2_ParamLimits

0xc286,	// (0x00018b1c) list_double_heading_pane_t1_cp2

0xc29c,	// (0x00018b32) list_double_heading_pane_t2_cp2_ParamLimits

0xc29c,	// (0x00018b32) list_double_heading_pane_t2_cp2

0x377d,	// (0x00010013) aid_value_unit2

0x4f37,	// (0x000117cd) popup_preview_fixed_window

0x3b98,	// (0x0001042e) bg_popup_preview_window_pane_cp02

0xc2ae,	// (0x00018b44) list_preview_fixed_pane

0xc2f4,	// (0x00018b8a) list_empty_pane_fp_ParamLimits

0xc2f4,	// (0x00018b8a) list_empty_pane_fp

0xc2f4,	// (0x00018b8a) list_single_cale_day_pane_fp_ParamLimits

0xc2f4,	// (0x00018b8a) list_single_cale_day_pane_fp

0xc2f4,	// (0x00018b8a) list_single_graphic_heading_pane_fp_ParamLimits

0xc2f4,	// (0x00018b8a) list_single_graphic_heading_pane_fp

0xc2f4,	// (0x00018b8a) list_single_graphic_pane_fp_ParamLimits

0xc2f4,	// (0x00018b8a) list_single_graphic_pane_fp

0xc2f4,	// (0x00018b8a) list_single_heading_pane_fp_ParamLimits

0xc2f4,	// (0x00018b8a) list_single_heading_pane_fp

0xc2f4,	// (0x00018b8a) list_single_pane_fp_ParamLimits

0xc2f4,	// (0x00018b8a) list_single_pane_fp

0xc30d,	// (0x00018ba3) list_single_pane_fp_g1_ParamLimits

0xc30d,	// (0x00018ba3) list_single_pane_fp_g1

0xc266,	// (0x00018afc) list_single_pane_fp_g2_ParamLimits

0xc266,	// (0x00018afc) list_single_pane_fp_g2

0xc272,	// (0x00018b08) list_single_pane_fp_g3_ParamLimits

0xc272,	// (0x00018b08) list_single_pane_fp_g3

0xc319,	// (0x00018baf) list_single_pane_fp_g4_ParamLimits

0xc319,	// (0x00018baf) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0001c3e9) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0001c3e9) list_single_pane_fp_g

0xc325,	// (0x00018bbb) list_single_pane_fp_t1_ParamLimits

0xc325,	// (0x00018bbb) list_single_pane_fp_t1

0xc33c,	// (0x00018bd2) list_single_graphic_pane_fp_g1_ParamLimits

0xc33c,	// (0x00018bd2) list_single_graphic_pane_fp_g1

0xc30d,	// (0x00018ba3) list_single_graphic_pane_fp_g2_ParamLimits

0xc30d,	// (0x00018ba3) list_single_graphic_pane_fp_g2

0xc266,	// (0x00018afc) list_single_graphic_pane_fp_g3_ParamLimits

0xc266,	// (0x00018afc) list_single_graphic_pane_fp_g3

0xc272,	// (0x00018b08) list_single_graphic_pane_fp_g4_ParamLimits

0xc272,	// (0x00018b08) list_single_graphic_pane_fp_g4

0xc319,	// (0x00018baf) list_single_graphic_pane_fp_g5_ParamLimits

0xc319,	// (0x00018baf) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c3f2) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c3f2) list_single_graphic_pane_fp_g

0xc348,	// (0x00018bde) list_single_graphic_pane_fp_t1_ParamLimits

0xc348,	// (0x00018bde) list_single_graphic_pane_fp_t1

0xc33c,	// (0x00018bd2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc33c,	// (0x00018bd2) list_single_graphic_heading_pane_fp_g1

0xc30d,	// (0x00018ba3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc30d,	// (0x00018ba3) list_single_graphic_heading_pane_fp_g2

0xc266,	// (0x00018afc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc266,	// (0x00018afc) list_single_graphic_heading_pane_fp_g3

0xc272,	// (0x00018b08) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc272,	// (0x00018b08) list_single_graphic_heading_pane_fp_g4

0xc319,	// (0x00018baf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc319,	// (0x00018baf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c3f2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c3f2) list_single_graphic_heading_pane_fp_g

0xc35e,	// (0x00018bf4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc35e,	// (0x00018bf4) list_single_graphic_heading_pane_fp_t1

0xc374,	// (0x00018c0a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc374,	// (0x00018c0a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0001c3fd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0001c3fd) list_single_graphic_heading_pane_fp_t

0xc386,	// (0x00018c1c) list_single_cale_day_pane_fp_g1_ParamLimits

0xc386,	// (0x00018c1c) list_single_cale_day_pane_fp_g1

0xc3be,	// (0x00018c54) list_single_cale_day_pane_fp_g2_ParamLimits

0xc3be,	// (0x00018c54) list_single_cale_day_pane_fp_g2

0xc3ca,	// (0x00018c60) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3ca,	// (0x00018c60) list_single_cale_day_pane_fp_g3

0xc434,	// (0x00018cca) list_single_cale_day_pane_fp_g4_ParamLimits

0xc434,	// (0x00018cca) list_single_cale_day_pane_fp_g4

0xc458,	// (0x00018cee) list_single_cale_day_pane_fp_g5_ParamLimits

0xc458,	// (0x00018cee) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0001c402) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001c402) list_single_cale_day_pane_fp_g

0xc47c,	// (0x00018d12) list_single_cale_day_pane_fp_t1_ParamLimits

0xc47c,	// (0x00018d12) list_single_cale_day_pane_fp_t1

0xc4a2,	// (0x00018d38) list_single_cale_day_pane_fp_t2_ParamLimits

0xc4a2,	// (0x00018d38) list_single_cale_day_pane_fp_t2

0xc4bb,	// (0x00018d51) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4bb,	// (0x00018d51) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0001c40d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0001c40d) list_single_cale_day_pane_fp_t

0xc30d,	// (0x00018ba3) list_empty_pane_fp_g1_ParamLimits

0xc30d,	// (0x00018ba3) list_empty_pane_fp_g1

0xc4d4,	// (0x00018d6a) list_empty_pane_fp_t1

0xc4e2,	// (0x00018d78) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0001c414) list_empty_pane_fp_t

0xc30d,	// (0x00018ba3) list_single_heading_pane_fp_g1_ParamLimits

0xc30d,	// (0x00018ba3) list_single_heading_pane_fp_g1

0xc266,	// (0x00018afc) list_single_heading_pane_fp_g2_ParamLimits

0xc266,	// (0x00018afc) list_single_heading_pane_fp_g2

0xc272,	// (0x00018b08) list_single_heading_pane_fp_g3_ParamLimits

0xc272,	// (0x00018b08) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0001c419) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0001c419) list_single_heading_pane_fp_g

0xc4f0,	// (0x00018d86) list_single_heading_pane_fp_t1_ParamLimits

0xc4f0,	// (0x00018d86) list_single_heading_pane_fp_t1

0xc502,	// (0x00018d98) list_single_heading_pane_fp_t2_ParamLimits

0xc502,	// (0x00018d98) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0001c420) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0001c420) list_single_heading_pane_fp_t

0x7d62,	// (0x000145f8) aid_size_cell_fast

0x3b7b,	// (0x00010411) soft_indicator_pane_cp1_t1

0x7d9f,	// (0x00014635) cell_app_pane_cp2_ParamLimits

0x7d9f,	// (0x00014635) cell_app_pane_cp2

0x6277,	// (0x00012b0d) fep_hwr_candidate_drop_down_list_pane

0x6465,	// (0x00012cfb) fep_hwr_candidate_pane_g3_ParamLimits

0x6465,	// (0x00012cfb) fep_hwr_candidate_pane_g3

0x2d93,	// (0x0000f629) fep_hwr_candidate_pane_g4_ParamLimits

0x2d93,	// (0x0000f629) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0001c38f) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0001c38f) fep_hwr_candidate_pane_g

0xbddb,	// (0x00018671) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbddb,	// (0x00018671) fep_vkb_candidate_drop_down_list_pane

0xc203,	// (0x00018a99) fep_vkb_candidate_pane_g3

0xc20b,	// (0x00018aa1) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0001c3bc) fep_vkb_candidate_pane_g

0x64d0,	// (0x00012d66) cell_hwr_candidate_pane_g1_ParamLimits

0x64de,	// (0x00012d74) cell_hwr_candidate_pane_g3_ParamLimits

0x64de,	// (0x00012d74) cell_hwr_candidate_pane_g3

0xe20b,	// (0x0001aaa1) cell_hwr_candidate_pane_g4_ParamLimits

0xe20b,	// (0x0001aaa1) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0001c3db) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0001c3db) cell_hwr_candidate_pane_g

0xc222,	// (0x00018ab8) cell_vkb_candidate_pane_g3_ParamLimits

0xc222,	// (0x00018ab8) cell_vkb_candidate_pane_g3

0xc23d,	// (0x00018ad3) cell_vkb_candidate_pane_g4_ParamLimits

0xc23d,	// (0x00018ad3) cell_vkb_candidate_pane_g4

0xc518,	// (0x00018dae) cell_app_pane_cp2_g1_ParamLimits

0xc518,	// (0x00018dae) cell_app_pane_cp2_g1

0xc536,	// (0x00018dcc) cell_app_pane_cp2_g2_ParamLimits

0xc536,	// (0x00018dcc) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0001c425) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0001c425) cell_app_pane_cp2_g

0xc542,	// (0x00018dd8) cell_app_pane_cp2_t1_ParamLimits

0xc542,	// (0x00018dd8) cell_app_pane_cp2_t1

0x413a,	// (0x000109d0) grid_highlight_pane_cp1_ParamLimits

0x413a,	// (0x000109d0) grid_highlight_pane_cp1

0x651d,	// (0x00012db3) cell_hwr_candidate_pane_cp1_ParamLimits

0x651d,	// (0x00012db3) cell_hwr_candidate_pane_cp1

0x64d0,	// (0x00012d66) fep_hwr_candidate_drop_down_list_pane_g1

0x6541,	// (0x00012dd7) fep_hwr_candidate_drop_down_list_pane_g2

0x654e,	// (0x00012de4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0001c42a) fep_hwr_candidate_drop_down_list_pane_g

0x655b,	// (0x00012df1) fep_hwr_candidate_drop_down_list_scroll_pane

0x6564,	// (0x00012dfa) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6564,	// (0x00012dfa) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6571,	// (0x00012e07) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6571,	// (0x00012e07) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x657e,	// (0x00012e14) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x657e,	// (0x00012e14) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x658b,	// (0x00012e21) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x658b,	// (0x00012e21) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x65a6,	// (0x00012e3c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x65a6,	// (0x00012e3c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x65c1,	// (0x00012e57) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x65c1,	// (0x00012e57) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x65dc,	// (0x00012e72) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x65dc,	// (0x00012e72) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x65f7,	// (0x00012e8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x65f7,	// (0x00012e8d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0001c431) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0001c431) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc554,	// (0x00018dea) cell_vkb_candidate_pane_cp1_ParamLimits

0xc554,	// (0x00018dea) cell_vkb_candidate_pane_cp1

0xbee1,	// (0x00018777) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbee1,	// (0x00018777) fep_vkb_candidate_drop_down_list_pane_g1

0xc57a,	// (0x00018e10) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc57a,	// (0x00018e10) fep_vkb_candidate_drop_down_list_pane_g2

0xc587,	// (0x00018e1d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc587,	// (0x00018e1d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0001c442) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0001c442) fep_vkb_candidate_drop_down_list_pane_g

0xc594,	// (0x00018e2a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc594,	// (0x00018e2a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc5a1,	// (0x00018e37) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc5a1,	// (0x00018e37) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5ae,	// (0x00018e44) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5ae,	// (0x00018e44) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc5ba,	// (0x00018e50) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc5ba,	// (0x00018e50) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc3f2,	// (0x00018c88) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc3f2,	// (0x00018c88) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc413,	// (0x00018ca9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc413,	// (0x00018ca9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5c6,	// (0x00018e5c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5c6,	// (0x00018e5c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc5e7,	// (0x00018e7d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc5e7,	// (0x00018e7d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc608,	// (0x00018e9e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc608,	// (0x00018e9e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0001c449) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0001c449) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7320,	// (0x00013bb6) title_pane_g1_ParamLimits

0x732d,	// (0x00013bc3) title_pane_g2_ParamLimits

0xf529,	// (0x0001bdbf) title_pane_g_ParamLimits

0x81ae,	// (0x00014a44) aid_call2_pane

0x81b6,	// (0x00014a4c) aid_call_pane

0x81be,	// (0x00014a54) popup_clock_analogue_window_g1

0x81be,	// (0x00014a54) popup_clock_analogue_window_g2

0x52b4,	// (0x00011b4a) popup_clock_analogue_window_g3

0x52bd,	// (0x00011b53) popup_clock_analogue_window_g4

0x378f,	// (0x00010025) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001bf64) popup_clock_analogue_window_g

0x52c5,	// (0x00011b5b) popup_clock_analogue_window_t1

0x52d3,	// (0x00011b69) clock_digital_number_pane_ParamLimits

0x52d3,	// (0x00011b69) clock_digital_number_pane

0x52df,	// (0x00011b75) clock_digital_number_pane_cp02_ParamLimits

0x52df,	// (0x00011b75) clock_digital_number_pane_cp02

0x52eb,	// (0x00011b81) clock_digital_number_pane_cp03_ParamLimits

0x52eb,	// (0x00011b81) clock_digital_number_pane_cp03

0x52f7,	// (0x00011b8d) clock_digital_number_pane_cp04_ParamLimits

0x52f7,	// (0x00011b8d) clock_digital_number_pane_cp04

0x5303,	// (0x00011b99) clock_digital_separator_pane_ParamLimits

0x5303,	// (0x00011b99) clock_digital_separator_pane

0x530f,	// (0x00011ba5) popup_clock_digital_window_t1_ParamLimits

0x530f,	// (0x00011ba5) popup_clock_digital_window_t1

0x378f,	// (0x00010025) clock_digital_number_pane_g1

0x378f,	// (0x00010025) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001bf6f) clock_digital_number_pane_g

0x378f,	// (0x00010025) clock_digital_separator_pane_g1

0x378f,	// (0x00010025) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001bf6f) clock_digital_separator_pane_g

0x8bda,	// (0x00015470) aid_fill_nsta_ParamLimits

0x8d26,	// (0x000155bc) indicator_nsta_pane_ParamLimits

0x8eb7,	// (0x0001574d) popup_clock_analogue_window

0x8eb7,	// (0x0001574d) popup_clock_digital_window

0xb63f,	// (0x00017ed5) grid_indicator_nsta_pane_ParamLimits

0xb668,	// (0x00017efe) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0001c30f) clock_nsta_pane_t

0x5278,	// (0x00011b0e) aid_size_max_handle

0x5282,	// (0x00011b18) aid_size_min_handle

0x8867,	// (0x000150fd) editor_scroll_pane

0xc623,	// (0x00018eb9) ex_editor_pane

0x7ccf,	// (0x00014565) scroll_pane_cp13

0x4046,	// (0x000108dc) scroll_pane_cp14

0x81ed,	// (0x00014a83) scroll_pane_cp36

0x821b,	// (0x00014ab1) list_single_graphic_hl_pane_cp2_ParamLimits

0x821b,	// (0x00014ab1) list_single_graphic_hl_pane_cp2

0xa810,	// (0x000170a6) list_single_graphic_hl_pane_ParamLimits

0xa810,	// (0x000170a6) list_single_graphic_hl_pane

0xc62b,	// (0x00018ec1) aid_size_min_hl_cp1

0xc634,	// (0x00018eca) list_highlight_pane_cp34_ParamLimits

0xc634,	// (0x00018eca) list_highlight_pane_cp34

0xc645,	// (0x00018edb) list_single_graphic_hl_pane_g1_ParamLimits

0xc645,	// (0x00018edb) list_single_graphic_hl_pane_g1

0xc652,	// (0x00018ee8) list_single_graphic_hl_pane_g2_ParamLimits

0xc652,	// (0x00018ee8) list_single_graphic_hl_pane_g2

0xc652,	// (0x00018ee8) list_single_graphic_hl_pane_g3_ParamLimits

0xc652,	// (0x00018ee8) list_single_graphic_hl_pane_g3

0x8738,	// (0x00014fce) list_single_graphic_hl_pane_g4_ParamLimits

0x8738,	// (0x00014fce) list_single_graphic_hl_pane_g4

0xc65e,	// (0x00018ef4) list_single_graphic_hl_pane_g5_ParamLimits

0xc65e,	// (0x00018ef4) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0001c45a) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0001c45a) list_single_graphic_hl_pane_g

0xc672,	// (0x00018f08) list_single_graphic_hl_pane_t1_ParamLimits

0xc672,	// (0x00018f08) list_single_graphic_hl_pane_t1

0xc688,	// (0x00018f1e) aid_size_min_hl_cp2

0xc691,	// (0x00018f27) list_highlight_pane_cp34_cp2_ParamLimits

0xc691,	// (0x00018f27) list_highlight_pane_cp34_cp2

0xc645,	// (0x00018edb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc645,	// (0x00018edb) list_single_graphic_hl_pane_g1_cp2

0xc69e,	// (0x00018f34) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc69e,	// (0x00018f34) list_single_graphic_hl_pane_g2_cp2

0xc6aa,	// (0x00018f40) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6aa,	// (0x00018f40) list_single_graphic_hl_pane_g3_cp2

0x9084,	// (0x0001591a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9084,	// (0x0001591a) list_single_graphic_hl_pane_g4_cp2

0xc6b8,	// (0x00018f4e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6b8,	// (0x00018f4e) list_single_graphic_hl_pane_g5_cp2

0x55c9,	// (0x00011e5f) control_pane_g4_ParamLimits

0x55c9,	// (0x00011e5f) control_pane_g4

0x8b96,	// (0x0001542c) bg_popup_sub_pane_cp10_ParamLimits

0xbc70,	// (0x00018506) list_choice_list_pane_ParamLimits

0xbc7f,	// (0x00018515) scroll_pane_cp23

0x3b98,	// (0x0001042e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2ae,	// (0x00018b44) list_preview_fixed_pane_ParamLimits

0xc2c4,	// (0x00018b5a) list_preview_fixed_pane_cp_ParamLimits

0xc2c4,	// (0x00018b5a) list_preview_fixed_pane_cp

0xc2d0,	// (0x00018b66) popup_preview_fixed_window_g1_ParamLimits

0xc2d0,	// (0x00018b66) popup_preview_fixed_window_g1

0xc2dc,	// (0x00018b72) popup_preview_fixed_window_g2_ParamLimits

0xc2dc,	// (0x00018b72) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0001c3e2) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0001c3e2) popup_preview_fixed_window_g

0x51ea,	// (0x00011a80) aid_navi_side_left_pane_ParamLimits

0x51ff,	// (0x00011a95) aid_navi_side_right_pane_ParamLimits

0x5217,	// (0x00011aad) navi_icon_pane_stacon_ParamLimits

0x522b,	// (0x00011ac1) navi_navi_pane_stacon_ParamLimits

0x5217,	// (0x00011aad) navi_text_pane_stacon_ParamLimits

0x4dee,	// (0x00011684) main_text_info_pane

0xc6e2,	// (0x00018f78) listscroll_text_info_pane

0xc6ea,	// (0x00018f80) list_text_info_pane_ParamLimits

0xc6ea,	// (0x00018f80) list_text_info_pane

0xc6f9,	// (0x00018f8f) scroll_pane_cp24_ParamLimits

0xc6f9,	// (0x00018f8f) scroll_pane_cp24

0xc717,	// (0x00018fad) list_text_info_pane_t1_ParamLimits

0xc717,	// (0x00018fad) list_text_info_pane_t1

0x5757,	// (0x00011fed) popup_fast_swap2_window_ParamLimits

0x5757,	// (0x00011fed) popup_fast_swap2_window

0xc73c,	// (0x00018fd2) aid_size_cell_fast2

0x3785,	// (0x0001001b) bg_popup_window_pane_cp17

0x9623,	// (0x00015eb9) heading_pane_cp2

0x962b,	// (0x00015ec1) listscroll_fast2_pane

0xc746,	// (0x00018fdc) grid_fast2_pane

0xc750,	// (0x00018fe6) listscroll_fast2_pane_g1

0xc75a,	// (0x00018ff0) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0001c465) listscroll_fast2_pane_g

0x7ccf,	// (0x00014565) scroll_pane_cp26

0xc764,	// (0x00018ffa) cell_fast2_pane_ParamLimits

0xc764,	// (0x00018ffa) cell_fast2_pane

0xc77b,	// (0x00019011) cell_fast2_pane_g1

0xc784,	// (0x0001901a) cell_fast2_pane_g2

0xc78d,	// (0x00019023) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0001c46a) cell_fast2_pane_g

0x3e0d,	// (0x000106a3) grid_highlight_pane_cp9

0x5719,	// (0x00011faf) main_eswt_pane_ParamLimits

0x5719,	// (0x00011faf) main_eswt_pane

0xc70e,	// (0x00018fa4) list_single_text_info_pane

0xc795,	// (0x0001902b) eswt_ctrl_button_pane

0xc795,	// (0x0001902b) eswt_ctrl_canvas_pane

0xc79d,	// (0x00019033) eswt_ctrl_combo_pane

0xc795,	// (0x0001902b) eswt_ctrl_default_pane

0xc795,	// (0x0001902b) eswt_ctrl_label_pane

0xc7a5,	// (0x0001903b) eswt_ctrl_wait_pane

0xc7ad,	// (0x00019043) eswt_shell_pane

0x3785,	// (0x0001001b) listscroll_eswt_app_pane

0xc7cd,	// (0x00019063) popup_eswt_tasktip_window_ParamLimits

0xc7cd,	// (0x00019063) popup_eswt_tasktip_window

0x9232,	// (0x00015ac8) bg_popup_window_pane_cp18

0xc7de,	// (0x00019074) eswt_control_pane_g1_ParamLimits

0xc7de,	// (0x00019074) eswt_control_pane_g1

0xc7eb,	// (0x00019081) eswt_control_pane_g2_ParamLimits

0xc7eb,	// (0x00019081) eswt_control_pane_g2

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_ParamLimits

0xc7f8,	// (0x0001908e) eswt_control_pane_g3

0xc805,	// (0x0001909b) eswt_control_pane_g4_ParamLimits

0xc805,	// (0x0001909b) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0001c471) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0001c471) eswt_control_pane_g

0x413a,	// (0x000109d0) bg_button_pane_ParamLimits

0x413a,	// (0x000109d0) bg_button_pane

0x3e22,	// (0x000106b8) common_borders_pane_copy2_ParamLimits

0x3e22,	// (0x000106b8) common_borders_pane_copy2

0xc812,	// (0x000190a8) control_button_pane_g1_ParamLimits

0xc812,	// (0x000190a8) control_button_pane_g1

0xc81e,	// (0x000190b4) control_button_pane_g2_ParamLimits

0xc81e,	// (0x000190b4) control_button_pane_g2

0xc82a,	// (0x000190c0) control_button_pane_g3_ParamLimits

0xc82a,	// (0x000190c0) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0001c47a) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0001c47a) control_button_pane_g

0xc83e,	// (0x000190d4) control_button_pane_t1

0xc84c,	// (0x000190e2) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0001c481) control_button_pane_t

0x910e,	// (0x000159a4) bg_button_pane_g1

0x911e,	// (0x000159b4) bg_button_pane_g2

0x9116,	// (0x000159ac) bg_button_pane_g3

0x912e,	// (0x000159c4) bg_button_pane_g4

0x9126,	// (0x000159bc) bg_button_pane_g5

0x9136,	// (0x000159cc) bg_button_pane_g6

0x913e,	// (0x000159d4) bg_button_pane_g7

0x914e,	// (0x000159e4) bg_button_pane_g8

0x9146,	// (0x000159dc) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0001c0d2) bg_button_pane_g

0xbc2b,	// (0x000184c1) common_borders_pane_ParamLimits

0xbc2b,	// (0x000184c1) common_borders_pane

0xc7de,	// (0x00019074) eswt_control_pane_g1_copy1_ParamLimits

0xc7de,	// (0x00019074) eswt_control_pane_g1_copy1

0xc7eb,	// (0x00019081) eswt_control_pane_g2_copy1_ParamLimits

0xc7eb,	// (0x00019081) eswt_control_pane_g2_copy1

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_copy1_ParamLimits

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_copy1

0xc805,	// (0x0001909b) eswt_control_pane_g4_copy1_ParamLimits

0xc805,	// (0x0001909b) eswt_control_pane_g4_copy1

0xbc66,	// (0x000184fc) bg_eswt_ctrl_canvas_pane_g1

0xbc2b,	// (0x000184c1) common_borders_pane_cp2_ParamLimits

0xbc2b,	// (0x000184c1) common_borders_pane_cp2

0xbc2b,	// (0x000184c1) common_borders_pane_cp3_ParamLimits

0xbc2b,	// (0x000184c1) common_borders_pane_cp3

0xc85a,	// (0x000190f0) separator_horizontal_pane

0xc862,	// (0x000190f8) separator_vertical_pane

0xc7de,	// (0x00019074) eswt_control_pane_g1_copy2_ParamLimits

0xc7de,	// (0x00019074) eswt_control_pane_g1_copy2

0xc7eb,	// (0x00019081) eswt_control_pane_g2_copy2_ParamLimits

0xc7eb,	// (0x00019081) eswt_control_pane_g2_copy2

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_copy2_ParamLimits

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_copy2

0xc805,	// (0x0001909b) eswt_control_pane_g4_copy2_ParamLimits

0xc805,	// (0x0001909b) eswt_control_pane_g4_copy2

0x3785,	// (0x0001001b) common_borders_pane_cp4

0xc86b,	// (0x00019101) separator_horizontal_pane_g1

0xc874,	// (0x0001910a) separator_horizontal_pane_g2

0xc87d,	// (0x00019113) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0001c486) separator_horizontal_pane_g

0xc7de,	// (0x00019074) eswt_control_pane_g1_copy3_ParamLimits

0xc7de,	// (0x00019074) eswt_control_pane_g1_copy3

0xc7eb,	// (0x00019081) eswt_control_pane_g2_copy3_ParamLimits

0xc7eb,	// (0x00019081) eswt_control_pane_g2_copy3

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_copy3_ParamLimits

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_copy3

0xc805,	// (0x0001909b) eswt_control_pane_g4_copy3_ParamLimits

0xc805,	// (0x0001909b) eswt_control_pane_g4_copy3

0x3785,	// (0x0001001b) common_borders_pane_cp5

0xc886,	// (0x0001911c) separator_vertical_pane_g1

0xc88f,	// (0x00019125) separator_vertical_pane_g2

0xc898,	// (0x0001912e) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0001c48d) separator_vertical_pane_g

0xc7de,	// (0x00019074) eswt_control_pane_g1_copy4_ParamLimits

0xc7de,	// (0x00019074) eswt_control_pane_g1_copy4

0xc7eb,	// (0x00019081) eswt_control_pane_g2_copy4_ParamLimits

0xc7eb,	// (0x00019081) eswt_control_pane_g2_copy4

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_copy4_ParamLimits

0xc7f8,	// (0x0001908e) eswt_control_pane_g3_copy4

0xc805,	// (0x0001909b) eswt_control_pane_g4_copy4_ParamLimits

0xc805,	// (0x0001909b) eswt_control_pane_g4_copy4

0xc8a1,	// (0x00019137) eswt_ctrl_combo_button_pane

0xc8a9,	// (0x0001913f) eswt_ctrl_input_pane

0xc8b1,	// (0x00019147) popup_choice_list_window_cp70

0xc8b9,	// (0x0001914f) eswt_ctrl_input_pane_t1

0x3785,	// (0x0001001b) input_focus_pane_cp70

0xbc2b,	// (0x000184c1) bg_button_pane_cp70_ParamLimits

0xbc2b,	// (0x000184c1) bg_button_pane_cp70

0xc8c7,	// (0x0001915d) eswt_ctrl_combo_button_pane_g1

0xc8cf,	// (0x00019165) wait_bar_pane_cp70

0x9232,	// (0x00015ac8) bg_popup_window_pane_cp70_ParamLimits

0x9232,	// (0x00015ac8) bg_popup_window_pane_cp70

0xc8d7,	// (0x0001916d) popup_eswt_tasktip_window_t1

0xc8ed,	// (0x00019183) wait_bar_pane_cp71_ParamLimits

0xc8ed,	// (0x00019183) wait_bar_pane_cp71

0xc8f9,	// (0x0001918f) grid_eswt_app_pane

0x7ff2,	// (0x00014888) scroll_pane_cp70

0xc902,	// (0x00019198) cell_eswt_app_pane_ParamLimits

0xc902,	// (0x00019198) cell_eswt_app_pane

0xc934,	// (0x000191ca) cell_eswt_app_pane_g1_ParamLimits

0xc934,	// (0x000191ca) cell_eswt_app_pane_g1

0xc963,	// (0x000191f9) cell_eswt_app_pane_g2_ParamLimits

0xc963,	// (0x000191f9) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0001c494) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0001c494) cell_eswt_app_pane_g

0xc98c,	// (0x00019222) cell_eswt_app_pane_t1_ParamLimits

0xc98c,	// (0x00019222) cell_eswt_app_pane_t1

0xc9be,	// (0x00019254) grid_highlight_pane_cp70_ParamLimits

0xc9be,	// (0x00019254) grid_highlight_pane_cp70

0x8738,	// (0x00014fce) set_content_pane_g1

0x8b15,	// (0x000153ab) status_small_volume_pane

0x6612,	// (0x00012ea8) status_small_volume_pane_g1

0x661a,	// (0x00012eb0) volume_small2_pane

0x6623,	// (0x00012eb9) volume_small2_pane_g1

0x662c,	// (0x00012ec2) volume_small2_pane_g2

0x6635,	// (0x00012ecb) volume_small2_pane_g3

0x663e,	// (0x00012ed4) volume_small2_pane_g4

0x6647,	// (0x00012edd) volume_small2_pane_g5

0x6650,	// (0x00012ee6) volume_small2_pane_g6

0x6659,	// (0x00012eef) volume_small2_pane_g7

0x6662,	// (0x00012ef8) volume_small2_pane_g8

0x666b,	// (0x00012f01) volume_small2_pane_g9

0x6674,	// (0x00012f0a) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0001c499) volume_small2_pane_g

0xc035,	// (0x000188cb) fep_vkb_top_text_pane_g1_ParamLimits

0xc050,	// (0x000188e6) fep_vkb_top_text_pane_t1_ParamLimits

0xc2e8,	// (0x00018b7e) popup_preview_fixed_window_g3_ParamLimits

0xc2e8,	// (0x00018b7e) popup_preview_fixed_window_g3

0x5c6a,	// (0x00012500) popup_toolbar_trans_pane

0xa5e1,	// (0x00016e77) aid_height_set_list_ParamLimits

0xa5f2,	// (0x00016e88) aid_size_parent_ParamLimits

0x8b96,	// (0x0001542c) list_highlight_pane_cp2_ParamLimits

0x8738,	// (0x00014fce) set_content_pane_g1_ParamLimits

0xa8a4,	// (0x0001713a) list_single_image_pane_ParamLimits

0xa8a4,	// (0x0001713a) list_single_image_pane

0xc9ca,	// (0x00019260) aid_size_cell_image_ParamLimits

0xc9ca,	// (0x00019260) aid_size_cell_image

0xc9d7,	// (0x0001926d) grid_single_image_pane_ParamLimits

0xc9d7,	// (0x0001926d) grid_single_image_pane

0x4160,	// (0x000109f6) list_single_image_pane_g1_ParamLimits

0x4160,	// (0x000109f6) list_single_image_pane_g1

0x416c,	// (0x00010a02) list_single_image_pane_g2_ParamLimits

0x416c,	// (0x00010a02) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0001c4ae) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0001c4ae) list_single_image_pane_g

0xc9e5,	// (0x0001927b) list_single_image_pane_t1_ParamLimits

0xc9e5,	// (0x0001927b) list_single_image_pane_t1

0xc9fb,	// (0x00019291) cell_image_list_pane_ParamLimits

0xc9fb,	// (0x00019291) cell_image_list_pane

0xca13,	// (0x000192a9) cell_image_list_pane_g1

0xca1c,	// (0x000192b2) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0001c4b3) cell_image_list_pane_g

0xca25,	// (0x000192bb) aid_size_cell_tb_trans_pane

0x413a,	// (0x000109d0) bg_tb_trans_pane

0xca37,	// (0x000192cd) grid_tb_trans_pane

0x910e,	// (0x000159a4) bg_tb_trans_pane_g1

0x911e,	// (0x000159b4) bg_tb_trans_pane_g2

0x9116,	// (0x000159ac) bg_tb_trans_pane_g3

0x912e,	// (0x000159c4) bg_tb_trans_pane_g4

0x9126,	// (0x000159bc) bg_tb_trans_pane_g5

0x914e,	// (0x000159e4) bg_tb_trans_pane_g6

0x9146,	// (0x000159dc) bg_tb_trans_pane_g7

0x9136,	// (0x000159cc) bg_tb_trans_pane_g8

0x913e,	// (0x000159d4) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0001c4b8) bg_tb_trans_pane_g

0xca4b,	// (0x000192e1) cell_toolbar_trans_pane_ParamLimits

0xca4b,	// (0x000192e1) cell_toolbar_trans_pane

0xbc66,	// (0x000184fc) cell_toolbar_trans_pane_g1

0xb84b,	// (0x000180e1) list_form2_midp_pane_t1

0xb859,	// (0x000180ef) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0001c355) list_form2_midp_pane_t

0xb867,	// (0x000180fd) scroll_pane_cp51_ParamLimits

0xba81,	// (0x00018317) form2_midp_wait_pane_g1

0xba8a,	// (0x00018320) form2_midp_wait_pane_g2

0xba93,	// (0x00018329) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0001c36a) form2_midp_wait_pane_g

0x39c2,	// (0x00010258) list_highlight_pane_cp21_ParamLimits

0xbacc,	// (0x00018362) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbadb,	// (0x00018371) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa85d,	// (0x000170f3) list_single_2graphic_im_pane_ParamLimits

0xa85d,	// (0x000170f3) list_single_2graphic_im_pane

0xca71,	// (0x00019307) list_single_2graphic_im_pane_g1_ParamLimits

0xca71,	// (0x00019307) list_single_2graphic_im_pane_g1

0xca82,	// (0x00019318) list_single_2graphic_im_pane_g2_ParamLimits

0xca82,	// (0x00019318) list_single_2graphic_im_pane_g2

0xca8e,	// (0x00019324) list_single_2graphic_im_pane_g3_ParamLimits

0xca8e,	// (0x00019324) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0001c4cb) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0001c4cb) list_single_2graphic_im_pane_g

0xcaae,	// (0x00019344) list_single_2graphic_im_pane_t1_ParamLimits

0xcaae,	// (0x00019344) list_single_2graphic_im_pane_t1

0xc2f4,	// (0x00018b8a) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2f4,	// (0x00018b8a) list_single_graphic_2heading_pane_fp

0xc33c,	// (0x00018bd2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc33c,	// (0x00018bd2) list_single_graphic_2heading_pane_fp_g1

0xc30d,	// (0x00018ba3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc30d,	// (0x00018ba3) list_single_graphic_2heading_pane_fp_g2

0xc266,	// (0x00018afc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc266,	// (0x00018afc) list_single_graphic_2heading_pane_fp_g3

0xc272,	// (0x00018b08) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc272,	// (0x00018b08) list_single_graphic_2heading_pane_fp_g4

0xc319,	// (0x00018baf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc319,	// (0x00018baf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001c3f2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001c3f2) list_single_graphic_2heading_pane_fp_g

0xcadf,	// (0x00019375) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcadf,	// (0x00019375) list_single_graphic_2heading_pane_fp_t1

0xc374,	// (0x00018c0a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc374,	// (0x00018c0a) list_single_graphic_2heading_pane_fp_t2

0xcaf5,	// (0x0001938b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcaf5,	// (0x0001938b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0001c4d4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0001c4d4) list_single_graphic_2heading_pane_fp_t

0xbcf7,	// (0x0001858d) fep_hwr_write_pane_g5_ParamLimits

0xbcf7,	// (0x0001858d) fep_hwr_write_pane_g5

0xbd03,	// (0x00018599) fep_hwr_write_pane_g6_ParamLimits

0xbd03,	// (0x00018599) fep_hwr_write_pane_g6

0xc7ad,	// (0x00019043) eswt_shell_pane_ParamLimits

0x9232,	// (0x00015ac8) bg_popup_window_pane_cp18_ParamLimits

0xa510,	// (0x00016da6) heading_pane_cp70

0xc8d7,	// (0x0001916d) popup_eswt_tasktip_window_t1_ParamLimits

0x8c31,	// (0x000154c7) aid_touch_tab_arrow_left

0x8c3d,	// (0x000154d3) aid_touch_tab_arrow_right

0x7346,	// (0x00013bdc) title_pane_g3_ParamLimits

0x7346,	// (0x00013bdc) title_pane_g3

0x4093,	// (0x00010929) set_value_pane_g1

0x5c6a,	// (0x00012500) popup_toolbar_trans_pane_ParamLimits

0xca25,	// (0x000192bb) aid_size_cell_tb_trans_pane_ParamLimits

0x413a,	// (0x000109d0) bg_tb_trans_pane_ParamLimits

0xca37,	// (0x000192cd) grid_tb_trans_pane_ParamLimits

0x3b98,	// (0x0001042e) cont_note_pane_ParamLimits

0x3b98,	// (0x0001042e) cont_note_pane

0x3e22,	// (0x000106b8) cont_snote2_single_text_pane_ParamLimits

0x3e22,	// (0x000106b8) cont_snote2_single_text_pane

0x3e22,	// (0x000106b8) cont_snote2_single_graphic_pane_ParamLimits

0x3e22,	// (0x000106b8) cont_snote2_single_graphic_pane

0x9853,	// (0x000160e9) cont_note_wait_pane_ParamLimits

0x9853,	// (0x000160e9) cont_note_wait_pane

0x9853,	// (0x000160e9) cont_note_image_pane_ParamLimits

0x9853,	// (0x000160e9) cont_note_image_pane

0xcb0b,	// (0x000193a1) popup_note2_window_g1_ParamLimits

0xcb0b,	// (0x000193a1) popup_note2_window_g1

0xcb3c,	// (0x000193d2) popup_note2_window_t1_ParamLimits

0xcb3c,	// (0x000193d2) popup_note2_window_t1

0xcb81,	// (0x00019417) popup_note2_window_t2_ParamLimits

0xcb81,	// (0x00019417) popup_note2_window_t2

0xcbc6,	// (0x0001945c) popup_note2_window_t3_ParamLimits

0xcbc6,	// (0x0001945c) popup_note2_window_t3

0xcc0b,	// (0x000194a1) popup_note2_window_t4_ParamLimits

0xcc0b,	// (0x000194a1) popup_note2_window_t4

0x3c1c,	// (0x000104b2) popup_note2_window_t5_ParamLimits

0x3c1c,	// (0x000104b2) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0001c4e0) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0001c4e0) popup_note2_window_t

0xcc3a,	// (0x000194d0) popup_note2_image_window_g1_ParamLimits

0xcc3a,	// (0x000194d0) popup_note2_image_window_g1

0xcc46,	// (0x000194dc) popup_note2_image_window_g2_ParamLimits

0xcc46,	// (0x000194dc) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0001c4eb) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0001c4eb) popup_note2_image_window_g

0xcc58,	// (0x000194ee) popup_note2_image_window_t1_ParamLimits

0xcc58,	// (0x000194ee) popup_note2_image_window_t1

0xcc70,	// (0x00019506) popup_note2_image_window_t2_ParamLimits

0xcc70,	// (0x00019506) popup_note2_image_window_t2

0xcc88,	// (0x0001951e) popup_note2_image_window_t3_ParamLimits

0xcc88,	// (0x0001951e) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0001c4f0) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0001c4f0) popup_note2_image_window_t

0x9861,	// (0x000160f7) popup_note2_wait_window_g1_ParamLimits

0x9861,	// (0x000160f7) popup_note2_wait_window_g1

0xcca4,	// (0x0001953a) popup_note2_wait_window_g2_ParamLimits

0xcca4,	// (0x0001953a) popup_note2_wait_window_g2

0x9879,	// (0x0001610f) popup_note2_wait_window_g3_ParamLimits

0x9879,	// (0x0001610f) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x0001c4f7) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x0001c4f7) popup_note2_wait_window_g

0xccb0,	// (0x00019546) popup_note2_wait_window_t1_ParamLimits

0xccb0,	// (0x00019546) popup_note2_wait_window_t1

0xccce,	// (0x00019564) popup_note2_wait_window_t2_ParamLimits

0xccce,	// (0x00019564) popup_note2_wait_window_t2

0xccec,	// (0x00019582) popup_note2_wait_window_t3_ParamLimits

0xccec,	// (0x00019582) popup_note2_wait_window_t3

0xccfe,	// (0x00019594) popup_note2_wait_window_t4_ParamLimits

0xccfe,	// (0x00019594) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x0001c4fe) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x0001c4fe) popup_note2_wait_window_t

0xcd10,	// (0x000195a6) wait_bar2_pane_ParamLimits

0xcd10,	// (0x000195a6) wait_bar2_pane

0xcd28,	// (0x000195be) popup_snote2_single_text_window_g1_ParamLimits

0xcd28,	// (0x000195be) popup_snote2_single_text_window_g1

0xcd50,	// (0x000195e6) popup_snote2_single_text_window_t1_ParamLimits

0xcd50,	// (0x000195e6) popup_snote2_single_text_window_t1

0xcd9c,	// (0x00019632) popup_snote2_single_text_window_t2_ParamLimits

0xcd9c,	// (0x00019632) popup_snote2_single_text_window_t2

0xcde8,	// (0x0001967e) popup_snote2_single_text_window_t3_ParamLimits

0xcde8,	// (0x0001967e) popup_snote2_single_text_window_t3

0xce29,	// (0x000196bf) popup_snote2_single_text_window_t4_ParamLimits

0xce29,	// (0x000196bf) popup_snote2_single_text_window_t4

0xce5f,	// (0x000196f5) popup_snote2_single_text_window_t5_ParamLimits

0xce5f,	// (0x000196f5) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x0001c507) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x0001c507) popup_snote2_single_text_window_t

0xce8a,	// (0x00019720) popup_snote2_single_graphic_window_g1_ParamLimits

0xce8a,	// (0x00019720) popup_snote2_single_graphic_window_g1

0xceb2,	// (0x00019748) popup_snote2_single_graphic_window_g2_ParamLimits

0xceb2,	// (0x00019748) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x0001c512) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x0001c512) popup_snote2_single_graphic_window_g

0xceda,	// (0x00019770) popup_snote2_single_graphic_window_t1_ParamLimits

0xceda,	// (0x00019770) popup_snote2_single_graphic_window_t1

0xcf26,	// (0x000197bc) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf26,	// (0x000197bc) popup_snote2_single_graphic_window_t2

0xcde8,	// (0x0001967e) popup_snote2_single_graphic_window_t3_ParamLimits

0xcde8,	// (0x0001967e) popup_snote2_single_graphic_window_t3

0xce29,	// (0x000196bf) popup_snote2_single_graphic_window_t4_ParamLimits

0xce29,	// (0x000196bf) popup_snote2_single_graphic_window_t4

0xce5f,	// (0x000196f5) popup_snote2_single_graphic_window_t5_ParamLimits

0xce5f,	// (0x000196f5) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x0001c517) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x0001c517) popup_snote2_single_graphic_window_t

0xb717,	// (0x00017fad) clock_nsta_pane_cp2_t1

0xb717,	// (0x00017fad) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0001c32b) clock_nsta_pane_cp2_t

0x4154,	// (0x000109ea) form_field_data_wide_pane_g1_ParamLimits

0x4160,	// (0x000109f6) form_field_data_wide_pane_g2_ParamLimits

0x4160,	// (0x000109f6) form_field_data_wide_pane_g2

0x416c,	// (0x00010a02) form_field_data_wide_pane_g3_ParamLimits

0x416c,	// (0x00010a02) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001bee7) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001bee7) form_field_data_wide_pane_g

0xb5f2,	// (0x00017e88) grid_touch_3_pane_ParamLimits

0xb5f2,	// (0x00017e88) grid_touch_3_pane

0xcf72,	// (0x00019808) cell_touch_3_pane_ParamLimits

0xcf72,	// (0x00019808) cell_touch_3_pane

0xbc66,	// (0x000184fc) cell_touch_3_pane_g1

0xbc66,	// (0x000184fc) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0001c3b0) cell_touch_3_pane_g

0x3c74,	// (0x0001050a) cont_query_data_pane

0x3c7c,	// (0x00010512) cont_query_data_pane_cp1

0xcfa5,	// (0x0001983b) button_value_adjust_pane_cp7

0xcfad,	// (0x00019843) query_popup_pane_cp3

0x82a6,	// (0x00014b3c) bg_popup_sub_pane_cp22_ParamLimits

0x532e,	// (0x00011bc4) navi_navi_volume_pane_cp2

0x5349,	// (0x00011bdf) popup_side_volume_key_window_g2

0x5358,	// (0x00011bee) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001bf7d) popup_side_volume_key_window_g

0x5375,	// (0x00011c0b) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001bf84) popup_side_volume_key_window_t

0x85f3,	// (0x00014e89) popup_side_volume_key_window_ParamLimits

0x77c7,	// (0x0001405d) list_double_graphic_pane_g4_ParamLimits

0x77c7,	// (0x0001405d) list_double_graphic_pane_g4

0xa88c,	// (0x00017122) list_single_2heading_msg_pane_ParamLimits

0xa88c,	// (0x00017122) list_single_2heading_msg_pane

0xcfde,	// (0x00019874) list_single_2heading_msg_pane_g1_ParamLimits

0xcfde,	// (0x00019874) list_single_2heading_msg_pane_g1

0xcfea,	// (0x00019880) list_single_2heading_msg_pane_g2_ParamLimits

0xcfea,	// (0x00019880) list_single_2heading_msg_pane_g2

0xcff6,	// (0x0001988c) list_single_2heading_msg_pane_g3_ParamLimits

0xcff6,	// (0x0001988c) list_single_2heading_msg_pane_g3

0xd002,	// (0x00019898) list_single_2heading_msg_pane_g4_ParamLimits

0xd002,	// (0x00019898) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x0001c522) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x0001c522) list_single_2heading_msg_pane_g

0xd01a,	// (0x000198b0) list_single_2heading_msg_pane_t1_ParamLimits

0xd01a,	// (0x000198b0) list_single_2heading_msg_pane_t1

0xd042,	// (0x000198d8) list_single_2heading_msg_pane_t2_ParamLimits

0xd042,	// (0x000198d8) list_single_2heading_msg_pane_t2

0xd071,	// (0x00019907) list_single_2heading_msg_pane_t3_ParamLimits

0xd071,	// (0x00019907) list_single_2heading_msg_pane_t3

0xd0aa,	// (0x00019940) list_single_2heading_msg_pane_t4_ParamLimits

0xd0aa,	// (0x00019940) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0001c52b) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0001c52b) list_single_2heading_msg_pane_t

0x3966,	// (0x000101fc) title_pane_g4_ParamLimits

0x3966,	// (0x000101fc) title_pane_g4

0x513a,	// (0x000119d0) title_pane_stacon_g3_ParamLimits

0x513a,	// (0x000119d0) title_pane_stacon_g3

0xcaa2,	// (0x00019338) list_single_2graphic_im_pane_g4_ParamLimits

0xcaa2,	// (0x00019338) list_single_2graphic_im_pane_g4

0xa2c3,	// (0x00016b59) popup_side_volume_key_window_cp

0xabdf,	// (0x00017475) main_idle_act2_pane_t1

0x5dda,	// (0x00012670) toolbar_button_pane_g10

0x7610,	// (0x00013ea6) popup_toolbar_window_cp1

0xb708,	// (0x00017f9e) clock_nsta_pane_cp_t1

0xb708,	// (0x00017f9e) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0001c326) clock_nsta_pane_cp_t

0x532e,	// (0x00011bc4) navi_navi_volume_pane_cp2_ParamLimits

0x533d,	// (0x00011bd3) popup_side_volume_key_window_g1_ParamLimits

0x5349,	// (0x00011bdf) popup_side_volume_key_window_g2_ParamLimits

0x5358,	// (0x00011bee) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001bf7d) popup_side_volume_key_window_g_ParamLimits

0x6263,	// (0x00012af9) fep_hwr_aid_pane

0x630c,	// (0x00012ba2) bg_fep_hwr_top_pane_g4_ParamLimits

0xbcc7,	// (0x0001855d) fep_hwr_top_pane_g1_ParamLimits

0xbcd9,	// (0x0001856f) fep_hwr_top_pane_g2_ParamLimits

0x632c,	// (0x00012bc2) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0001c37b) fep_hwr_top_pane_g_ParamLimits

0x6341,	// (0x00012bd7) fep_hwr_top_text_pane_ParamLimits

0xa078,	// (0x0001690e) aid_touch_tab_arrow_arrow_2

0xa081,	// (0x00016917) aid_touch_tab_arrow_left_2

0x6277,	// (0x00012b0d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x62ae,	// (0x00012b44) fep_hwr_prediction_pane

0xbe2f,	// (0x000186c5) fep_vkb_prediction_pane

0xbf35,	// (0x000187cb) fep_vkb_side_pane_g3_ParamLimits

0xbf35,	// (0x000187cb) fep_vkb_side_pane_g3

0x64d0,	// (0x00012d66) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6541,	// (0x00012dd7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x654e,	// (0x00012de4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0001c42a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x667d,	// (0x00012f13) fep_hwr_prediction_pane_g1

0x6687,	// (0x00012f1d) fep_hwr_prediction_pane_g2

0x668f,	// (0x00012f25) fep_hwr_prediction_pane_g3

0x6697,	// (0x00012f2d) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0001c534) fep_hwr_prediction_pane_g

0xd0cf,	// (0x00019965) fep_vkb_prediction_pane_g1

0xd0d9,	// (0x0001996f) fep_vkb_prediction_pane_g2

0xd0e1,	// (0x00019977) fep_vkb_prediction_pane_g3

0xd0e9,	// (0x0001997f) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0001c53d) fep_vkb_prediction_pane_g

0x60e3,	// (0x00012979) slider_set_pane_g3

0x60f7,	// (0x0001298d) slider_set_pane_g4

0x610f,	// (0x000129a5) slider_set_pane_g5

0x60e3,	// (0x00012979) slider_set_pane_g6

0x6125,	// (0x000129bb) slider_set_pane_g7

0xa771,	// (0x00017007) slider_form_pane_g3

0xa77a,	// (0x00017010) slider_form_pane_g4

0xa782,	// (0x00017018) slider_form_pane_g5

0xa771,	// (0x00017007) slider_form_pane_g6

0xa78a,	// (0x00017020) slider_form_pane_g7

0xaee3,	// (0x00017779) slider_set_pane_vc_g3

0xaeec,	// (0x00017782) slider_set_pane_vc_g4

0xaef5,	// (0x0001778b) slider_set_pane_vc_g5

0xaee3,	// (0x00017779) slider_set_pane_vc_g6

0xaefe,	// (0x00017794) slider_set_pane_vc_g7

0xb3b7,	// (0x00017c4d) slider_form_pane_vc_g1

0xb3c0,	// (0x00017c56) slider_form_pane_vc_g2

0xb3c9,	// (0x00017c5f) slider_form_pane_vc_g3

0xb3b7,	// (0x00017c4d) slider_form_pane_vc_g4

0xb3d2,	// (0x00017c68) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0001c2f8) slider_form_pane_vc_g

0x4dee,	// (0x00011684) main_idle_act3_pane

0xd0f1,	// (0x00019987) ai3_links_pane

0xd0fa,	// (0x00019990) popup_ai3_data_window_ParamLimits

0xd0fa,	// (0x00019990) popup_ai3_data_window

0x3785,	// (0x0001001b) grid_ai3_links_pane

0xd118,	// (0x000199ae) cell_ai3_links_pane_ParamLimits

0xd118,	// (0x000199ae) cell_ai3_links_pane

0xd132,	// (0x000199c8) bg_popup_sub_pane_cp11

0xd13f,	// (0x000199d5) cell_ai3_links_pane_g1

0x3785,	// (0x0001001b) bg_popup_sub_pane_cp12

0xd164,	// (0x000199fa) heading_ai3_data_pane

0xd16c,	// (0x00019a02) list_ai3_gene_pane

0xd178,	// (0x00019a0e) popup_ai3_data_window_g1

0xd180,	// (0x00019a16) heading_ai3_data_pane_g1

0xd188,	// (0x00019a1e) heading_ai3_data_pane_t1

0xd196,	// (0x00019a2c) list_double_ai3_gene_pane_ParamLimits

0xd196,	// (0x00019a2c) list_double_ai3_gene_pane

0xd1a3,	// (0x00019a39) list_single_ai3_gene_pane_ParamLimits

0xd1a3,	// (0x00019a39) list_single_ai3_gene_pane

0xbc2b,	// (0x000184c1) list_highlight_pane_cp7_ParamLimits

0xbc2b,	// (0x000184c1) list_highlight_pane_cp7

0xd1b0,	// (0x00019a46) list_single_a13_gene_pane_t1_ParamLimits

0xd1b0,	// (0x00019a46) list_single_a13_gene_pane_t1

0xd1c7,	// (0x00019a5d) list_single_ai3_gene_pane_g1

0xd1d0,	// (0x00019a66) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x0001c546) list_single_ai3_gene_pane_g

0xd1d8,	// (0x00019a6e) list_double_ai3_gene_pane_g1_ParamLimits

0xd1d8,	// (0x00019a6e) list_double_ai3_gene_pane_g1

0xd1e4,	// (0x00019a7a) list_double_ai3_gene_pane_t1_ParamLimits

0xd1e4,	// (0x00019a7a) list_double_ai3_gene_pane_t1

0xd200,	// (0x00019a96) list_double_ai3_gene_pane_t2_ParamLimits

0xd200,	// (0x00019a96) list_double_ai3_gene_pane_t2

0xd215,	// (0x00019aab) list_double_ai3_gene_pane_t3_ParamLimits

0xd215,	// (0x00019aab) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0001c54b) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0001c54b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfbe,	// (0x00019854) aid_size_min_col_2

0xcfc8,	// (0x0001985e) aid_size_min_msg_ParamLimits

0xcfc8,	// (0x0001985e) aid_size_min_msg

0xc041,	// (0x000188d7) fep_vkb_top_text_pane_g2_ParamLimits

0xc041,	// (0x000188d7) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0001c3ab) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0001c3ab) fep_vkb_top_text_pane_g

0x4dee,	// (0x00011684) main_hc_apps_shell_pane

0xd232,	// (0x00019ac8) grid_hc_apps_pane_ParamLimits

0xd232,	// (0x00019ac8) grid_hc_apps_pane

0xd244,	// (0x00019ada) list_hc_apps_pane

0xd24c,	// (0x00019ae2) scroll_pane_cp37_ParamLimits

0xd24c,	// (0x00019ae2) scroll_pane_cp37

0xd258,	// (0x00019aee) cell_hc_apps_pane_ParamLimits

0xd258,	// (0x00019aee) cell_hc_apps_pane

0xd30e,	// (0x00019ba4) cell_hc_apps_pane_g1_ParamLimits

0xd30e,	// (0x00019ba4) cell_hc_apps_pane_g1

0xd33a,	// (0x00019bd0) cell_hc_apps_pane_g2_ParamLimits

0xd33a,	// (0x00019bd0) cell_hc_apps_pane_g2

0xd356,	// (0x00019bec) cell_hc_apps_pane_g3_ParamLimits

0xd356,	// (0x00019bec) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x0001c552) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x0001c552) cell_hc_apps_pane_g

0xd378,	// (0x00019c0e) cell_hc_apps_pane_t1_ParamLimits

0xd378,	// (0x00019c0e) cell_hc_apps_pane_t1

0x3b98,	// (0x0001042e) grid_highlight_pane_cp10_ParamLimits

0x3b98,	// (0x0001042e) grid_highlight_pane_cp10

0xd3b8,	// (0x00019c4e) list_single_hc_apps_pane_ParamLimits

0xd3b8,	// (0x00019c4e) list_single_hc_apps_pane

0xd3f7,	// (0x00019c8d) list_single_hc_apps_pane_g1

0xd410,	// (0x00019ca6) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0001c559) list_single_hc_apps_pane_g

0xd429,	// (0x00019cbf) list_single_hc_apps_pane_g2_copy1

0xd445,	// (0x00019cdb) list_single_hc_apps_pane_t1

0x39c2,	// (0x00010258) bg_set_opt_pane_cp_ParamLimits

0x5061,	// (0x000118f7) setting_slider_pane_t1_ParamLimits

0x507a,	// (0x00011910) setting_slider_pane_t2_ParamLimits

0x5094,	// (0x0001192a) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001bdcf) setting_slider_pane_t_ParamLimits

0x50ac,	// (0x00011942) slider_set_pane_ParamLimits

0x55dd,	// (0x00011e73) control_pane_g5_ParamLimits

0x55dd,	// (0x00011e73) control_pane_g5

0xa5a4,	// (0x00016e3a) slider_set_pane_g1_ParamLimits

0x60d7,	// (0x0001296d) slider_set_pane_g2_ParamLimits

0x60e3,	// (0x00012979) slider_set_pane_g3_ParamLimits

0x60f7,	// (0x0001298d) slider_set_pane_g4_ParamLimits

0x610f,	// (0x000129a5) slider_set_pane_g5_ParamLimits

0x60e3,	// (0x00012979) slider_set_pane_g6_ParamLimits

0x6125,	// (0x000129bb) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0001c1d0) slider_set_pane_g_ParamLimits

0x86e3,	// (0x00014f79) navi_icon_text_pane_ParamLimits

0x8bf0,	// (0x00015486) aid_fill_nsta_2_ParamLimits

0x8c31,	// (0x000154c7) aid_touch_tab_arrow_left_ParamLimits

0x8c3d,	// (0x000154d3) aid_touch_tab_arrow_right_ParamLimits

0x8ca9,	// (0x0001553f) clock_nsta_pane_ParamLimits

0xa05a,	// (0x000168f0) navi_icon_pane_g1_ParamLimits

0xa066,	// (0x000168fc) navi_text_pane_t1_ParamLimits

0xb825,	// (0x000180bb) navi_icon_text_pane_g1_ParamLimits

0xb831,	// (0x000180c7) navi_icon_text_pane_t1_ParamLimits

0xd3f7,	// (0x00019c8d) list_single_hc_apps_pane_g1_ParamLimits

0xd410,	// (0x00019ca6) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0001c559) list_single_hc_apps_pane_g_ParamLimits

0xd429,	// (0x00019cbf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd445,	// (0x00019cdb) list_single_hc_apps_pane_t1_ParamLimits

0x4f63,	// (0x000117f9) popup_toolbar2_fixed_window_ParamLimits

0x4f63,	// (0x000117f9) popup_toolbar2_fixed_window

0x5c60,	// (0x000124f6) popup_toolbar2_float_window

0x3785,	// (0x0001001b) bg_popup_sub_pane_cp27

0xd473,	// (0x00019d09) grid_toolbar2_float_pane

0x3785,	// (0x0001001b) bg_popup_sub_pane_cp26

0xd473,	// (0x00019d09) grid_toolbar2_fixed_pane

0xd47b,	// (0x00019d11) cell_toolbar2_fixed_pane_ParamLimits

0xd47b,	// (0x00019d11) cell_toolbar2_fixed_pane

0xd48b,	// (0x00019d21) cell_toolbar2_fixed_pane_g1

0xd494,	// (0x00019d2a) toolbar2_fixed_button_pane

0x910e,	// (0x000159a4) toolbar2_fixed_button_pane_g1

0x911e,	// (0x000159b4) toolbar2_fixed_button_pane_g2

0x9116,	// (0x000159ac) toolbar2_fixed_button_pane_g3

0x912e,	// (0x000159c4) toolbar2_fixed_button_pane_g4

0x9126,	// (0x000159bc) toolbar2_fixed_button_pane_g5

0x9136,	// (0x000159cc) toolbar2_fixed_button_pane_g6

0x913e,	// (0x000159d4) toolbar2_fixed_button_pane_g7

0x914e,	// (0x000159e4) toolbar2_fixed_button_pane_g8

0x9146,	// (0x000159dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0001c0d2) toolbar2_fixed_button_pane_g

0xd49c,	// (0x00019d32) cell_toolbar2_float_pane_ParamLimits

0xd49c,	// (0x00019d32) cell_toolbar2_float_pane

0xd4ad,	// (0x00019d43) cell_toolbar2_float_pane_g1

0xd494,	// (0x00019d2a) toolbar2_fixed_button_pane_cp

0xbd9d,	// (0x00018633) fep_vkb_accented_list_pane_ParamLimits

0xbd9d,	// (0x00018633) fep_vkb_accented_list_pane

0x64b0,	// (0x00012d46) bg_popup_fep_shadow_pane_g9

0x8867,	// (0x000150fd) bg_popup_fep_shadow_pane_cp3

0x7cb6,	// (0x0001454c) list_accented_list_pane

0xd4b6,	// (0x00019d4c) list_single_accented_list_pane_ParamLimits

0xd4b6,	// (0x00019d4c) list_single_accented_list_pane

0x8867,	// (0x000150fd) list_highlight_pane_cp10

0xd4c7,	// (0x00019d5d) list_single_accented_list_pane_t1

0x5ba6,	// (0x0001243c) popup_slider_window_ParamLimits

0x5ba6,	// (0x0001243c) popup_slider_window

0xcfb5,	// (0x0001984b) aid_indentation_list_msg

0xd597,	// (0x00019e2d) bg_popup_window_pane_cp19

0xd603,	// (0x00019e99) popup_slider_window_g1

0xd61f,	// (0x00019eb5) popup_slider_window_g2

0xd63b,	// (0x00019ed1) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0001c55e) popup_slider_window_g

0xd6a1,	// (0x00019f37) popup_slider_window_t1

0xd715,	// (0x00019fab) small_volume_slider_vertical_pane

0xbc66,	// (0x000184fc) small_volume_slider_vertical_pane_g1

0xbc66,	// (0x000184fc) small_volume_slider_vertical_pane_g2

0xd731,	// (0x00019fc7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x0001c570) small_volume_slider_vertical_pane_g

0x4d11,	// (0x000115a7) area_side_right_pane_ParamLimits

0x4d11,	// (0x000115a7) area_side_right_pane

0x669f,	// (0x00012f35) aid_size_side_button_ParamLimits

0x669f,	// (0x00012f35) aid_size_side_button

0x66b3,	// (0x00012f49) grid_sctrl_middle_pane_ParamLimits

0x66b3,	// (0x00012f49) grid_sctrl_middle_pane

0x66d2,	// (0x00012f68) sctrl_sk_bottom_pane

0x66e3,	// (0x00012f79) sctrl_sk_top_pane

0x66f5,	// (0x00012f8b) aid_touch_sctrl_top

0x6702,	// (0x00012f98) bg_sctrl_sk_pane_ParamLimits

0x6702,	// (0x00012f98) bg_sctrl_sk_pane

0x6710,	// (0x00012fa6) sctrl_sk_top_pane_g1

0x671d,	// (0x00012fb3) sctrl_sk_top_pane_t1

0x66f5,	// (0x00012f8b) aid_touch_sctrl_bottom

0x6702,	// (0x00012f98) bg_sctrl_sk_pane_cp_ParamLimits

0x6702,	// (0x00012f98) bg_sctrl_sk_pane_cp

0x6738,	// (0x00012fce) sctrl_sk_bottom_pane_g1

0x671d,	// (0x00012fb3) sctrl_sk_bottom_pane_t1

0x6741,	// (0x00012fd7) cell_sctrl_middle_pane_ParamLimits

0x6741,	// (0x00012fd7) cell_sctrl_middle_pane

0x675e,	// (0x00012ff4) aid_touch_sctrl_middle_ParamLimits

0x675e,	// (0x00012ff4) aid_touch_sctrl_middle

0x6770,	// (0x00013006) bg_sctrl_middle_pane_ParamLimits

0x6770,	// (0x00013006) bg_sctrl_middle_pane

0x64d0,	// (0x00012d66) cell_sctrl_middle_pane_g1_ParamLimits

0x64d0,	// (0x00012d66) cell_sctrl_middle_pane_g1

0x677e,	// (0x00013014) cell_sctrl_middle_pane_g2_ParamLimits

0x677e,	// (0x00013014) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0001c57c) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0001c57c) cell_sctrl_middle_pane_g

0x910e,	// (0x000159a4) bg_sctrl_middle_pane_g1

0x9116,	// (0x000159ac) bg_sctrl_middle_pane_g2

0x911e,	// (0x000159b4) bg_sctrl_middle_pane_g3

0x9126,	// (0x000159bc) bg_sctrl_middle_pane_g4

0x912e,	// (0x000159c4) bg_sctrl_middle_pane_g5

0x9136,	// (0x000159cc) bg_sctrl_middle_pane_g6

0x913e,	// (0x000159d4) bg_sctrl_middle_pane_g7

0x9146,	// (0x000159dc) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x0001c581) bg_sctrl_middle_pane_g

0x914e,	// (0x000159e4) bg_sctrl_middle_pane_g8_copy1

0x910e,	// (0x000159a4) bg_sctrl_sk_pane_g1

0x911e,	// (0x000159b4) bg_sctrl_sk_pane_g2

0x9116,	// (0x000159ac) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0001c0d2) bg_sctrl_sk_pane_g

0x3fe0,	// (0x00010876) aid_size_touch_scroll_bar

0x912e,	// (0x000159c4) bg_sctrl_sk_pane_g4

0x9126,	// (0x000159bc) bg_sctrl_sk_pane_g5

0x9136,	// (0x000159cc) bg_sctrl_sk_pane_g6

0x913e,	// (0x000159d4) bg_sctrl_sk_pane_g7

0x914e,	// (0x000159e4) bg_sctrl_sk_pane_g8

0x9146,	// (0x000159dc) bg_sctrl_sk_pane_g9

0x57bb,	// (0x00012051) popup_fep_china_hwr2_fs_candidate_window

0x57c5,	// (0x0001205b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x57c5,	// (0x0001205b) popup_fep_china_hwr2_fs_control_window

0x64d0,	// (0x00012d66) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x0001c577) sctrl_sk_top_pane_g

0xd73a,	// (0x00019fd0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd73a,	// (0x00019fd0) aid_fep_china_hwr2_fs_cell

0xd74d,	// (0x00019fe3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74d,	// (0x00019fe3) bg_popup_fep_shadow_pane_cp4

0xd766,	// (0x00019ffc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd766,	// (0x00019ffc) bg_popup_fep_shadow_pane_cp5

0xd778,	// (0x0001a00e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd778,	// (0x0001a00e) popup_fep_china_hwr2_fs_control_bar_grid

0xd788,	// (0x0001a01e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd790,	// (0x0001a026) aid_fep_china_hwr2_fs_candi_cell

0x3785,	// (0x0001001b) bg_popup_fep_shadow_pane_cp6

0xd79a,	// (0x0001a030) popup_fep_china_hwr2_fs_candidate_grid

0xd7a4,	// (0x0001a03a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7a4,	// (0x0001a03a) cell_fep_china_hwr2_fs_funtion_grid

0xbc66,	// (0x000184fc) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7bc,	// (0x0001a052) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7bc,	// (0x0001a052) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7ca,	// (0x0001a060) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7ca,	// (0x0001a060) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x0001c592) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x0001c592) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7e0,	// (0x0001a076) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7e0,	// (0x0001a076) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f5,	// (0x0001a08b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f5,	// (0x0001a08b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x0001c597) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x0001c597) cell_fep_china_hwr2_fs_funtion_grid_t

0xd811,	// (0x0001a0a7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd819,	// (0x0001a0af) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd821,	// (0x0001a0b7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0001c59c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd829,	// (0x0001a0bf) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd829,	// (0x0001a0bf) cell_fep_china_hwr2_fs_candidate_grid

0xd848,	// (0x0001a0de) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd850,	// (0x0001a0e6) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbc66,	// (0x000184fc) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbc66,	// (0x000184fc) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0001c3b0) cell_fep_china_hwr2_fs_candidate_grid_g

0xd858,	// (0x0001a0ee) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8cbc,	// (0x00015552) clock_nsta_pane_cp_24_ParamLimits

0x8cbc,	// (0x00015552) clock_nsta_pane_cp_24

0x8d3c,	// (0x000155d2) indicator_nsta_pane_cp_24_ParamLimits

0x8d3c,	// (0x000155d2) indicator_nsta_pane_cp_24

0x9ed6,	// (0x0001676c) heading_pane_g1

0x0001,

0xf8a1,	// (0x0001c137) heading_pane_g

0xaa26,	// (0x000172bc) grid_sct_catagory_button_pane

0xaa58,	// (0x000172ee) scroll_pane_cp5_ParamLimits

0xb873,	// (0x00018109) button_value_adjust_pane_cp5_ParamLimits

0xb873,	// (0x00018109) button_value_adjust_pane_cp5

0xb979,	// (0x0001820f) form2_midp_time_pane_ParamLimits

0xd866,	// (0x0001a0fc) cell_sct_catagory_button_pane_ParamLimits

0xd866,	// (0x0001a0fc) cell_sct_catagory_button_pane

0xbc2b,	// (0x000184c1) bg_button_pane_cp01_ParamLimits

0xbc2b,	// (0x000184c1) bg_button_pane_cp01

0xbc66,	// (0x000184fc) cell_sct_catagory_button_pane_g1

0x5be7,	// (0x0001247d) popup_tb_extension_window

0xd878,	// (0x0001a10e) aid_size_cell_ext_ParamLimits

0xd878,	// (0x0001a10e) aid_size_cell_ext

0x3b98,	// (0x0001042e) bg_tb_trans_pane_cp1_ParamLimits

0x3b98,	// (0x0001042e) bg_tb_trans_pane_cp1

0xd898,	// (0x0001a12e) grid_tb_ext_pane_ParamLimits

0xd898,	// (0x0001a12e) grid_tb_ext_pane

0xd8c6,	// (0x0001a15c) cell_tb_ext_pane_ParamLimits

0xd8c6,	// (0x0001a15c) cell_tb_ext_pane

0xd8dd,	// (0x0001a173) cell_tb_ext_pane_g1_ParamLimits

0xd8dd,	// (0x0001a173) cell_tb_ext_pane_g1

0xd8fa,	// (0x0001a190) cell_tb_ext_pane_t1

0x3b98,	// (0x0001042e) list_highlight_pane_cp11_ParamLimits

0x3b98,	// (0x0001042e) list_highlight_pane_cp11

0x4f82,	// (0x00011818) popup_uni_indicator_window_ParamLimits

0x4f82,	// (0x00011818) popup_uni_indicator_window

0x413a,	// (0x000109d0) bg_popup_sub_pane_cp14

0xd915,	// (0x0001a1ab) list_uniindi_pane

0xd921,	// (0x0001a1b7) uniindi_top_pane

0x3b98,	// (0x0001042e) bg_uniindi_top_pane

0xd942,	// (0x0001a1d8) uniindi_top_pane_g1

0xd958,	// (0x0001a1ee) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x0001c5a3) uniindi_top_pane_g

0xd982,	// (0x0001a218) uniindi_top_pane_t1

0xd9ae,	// (0x0001a244) list_single_uniindi_pane_ParamLimits

0xd9ae,	// (0x0001a244) list_single_uniindi_pane

0xbc66,	// (0x000184fc) bg_uniindi_top_pane_g1

0xd9c1,	// (0x0001a257) list_single_uniindi_pane_g1

0xd9d4,	// (0x0001a26a) list_single_uniindi_pane_t1

0x4dee,	// (0x00011684) control_bg_pane

0xd9f9,	// (0x0001a28f) bg_sctrl_sk_pane_cp1

0xda02,	// (0x0001a298) bg_sctrl_sk_pane_cp2

0xda0b,	// (0x0001a2a1) control_bg_pane_g1

0xda14,	// (0x0001a2aa) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0001c5ac) control_bg_pane_g

0xb6ab,	// (0x00017f41) cell_indicator_nsta_pane_g1_ParamLimits

0xb6b9,	// (0x00017f4f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0001c314) cell_indicator_nsta_pane_g_ParamLimits

0xba06,	// (0x0001829c) form2_midp_time_pane_t1_ParamLimits

0x5719,	// (0x00011faf) main_idle_act4_pane_ParamLimits

0x5719,	// (0x00011faf) main_idle_act4_pane

0x5be7,	// (0x0001247d) popup_tb_extension_window_ParamLimits

0xd8b8,	// (0x0001a14e) tb_ext_find_pane_ParamLimits

0xd8b8,	// (0x0001a14e) tb_ext_find_pane

0xda1d,	// (0x0001a2b3) ai_gene_pane_1_cp1

0x89b1,	// (0x00015247) ai_gene_pane_2_cp1

0xda25,	// (0x0001a2bb) list_single_idle_plugin_calendar_pane

0xda2e,	// (0x0001a2c4) list_single_idle_plugin_notification_pane

0xda37,	// (0x0001a2cd) list_single_idle_plugin_player_pane

0xda40,	// (0x0001a2d6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda40,	// (0x0001a2d6) list_single_idle_plugin_shortcut_pane

0xda62,	// (0x0001a2f8) main_idle_act4_pane_t1

0xda74,	// (0x0001a30a) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x0001c5b1) main_idle_act4_pane_t

0xda86,	// (0x0001a31c) middle_sk_idle_act4_pane_ParamLimits

0xda86,	// (0x0001a31c) middle_sk_idle_act4_pane

0xda9c,	// (0x0001a332) popup_clock_digital_analogue_window_cp2

0xdab6,	// (0x0001a34c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdab6,	// (0x0001a34c) shortcut_wheel_idle_act4_pane

0xbc66,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g1

0xbc66,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g2

0xbc66,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g3

0xbc66,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g4

0xbc66,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g5

0xdaca,	// (0x0001a360) shortcut_wheel_idle_act4_pane_g6

0xdad2,	// (0x0001a368) shortcut_wheel_idle_act4_pane_g7

0xdada,	// (0x0001a370) shortcut_wheel_idle_act4_pane_g8

0xdae2,	// (0x0001a378) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x0001c5b6) shortcut_wheel_idle_act4_pane_g

0xbee1,	// (0x00018777) middle_sk_idle_act4_pane_g1_ParamLimits

0xbee1,	// (0x00018777) middle_sk_idle_act4_pane_g1

0xdb46,	// (0x0001a3dc) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb46,	// (0x0001a3dc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0001c5d9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0001c5d9) middle_sk_idle_act4_pane_g

0xdb52,	// (0x0001a3e8) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb52,	// (0x0001a3e8) middle_sk_idle_act4_pane_t1

0xdb6f,	// (0x0001a405) grid_ai_shortcut_pane_ParamLimits

0xdb6f,	// (0x0001a405) grid_ai_shortcut_pane

0xdb88,	// (0x0001a41e) list_highlight_pane_cp16_ParamLimits

0xdb88,	// (0x0001a41e) list_highlight_pane_cp16

0xdb95,	// (0x0001a42b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb95,	// (0x0001a42b) list_single_idle_plugin_shortcut_pane_g1

0xdba1,	// (0x0001a437) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdba1,	// (0x0001a437) list_single_idle_plugin_shortcut_pane_g2

0xdbbb,	// (0x0001a451) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbbb,	// (0x0001a451) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0001c5de) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0001c5de) list_single_idle_plugin_shortcut_pane_g

0xdbce,	// (0x0001a464) cell_ai_shortcut_pane_ParamLimits

0xdbce,	// (0x0001a464) cell_ai_shortcut_pane

0xdbf1,	// (0x0001a487) cell_ai_shortcut_pane_g1_ParamLimits

0xdbf1,	// (0x0001a487) cell_ai_shortcut_pane_g1

0xda1d,	// (0x0001a2b3) ai_gene_pane_1_cp2

0xdc13,	// (0x0001a4a9) ai_gene_pane_2_cp2

0xdc1b,	// (0x0001a4b1) list_highlight_pane_cp15

0xdc24,	// (0x0001a4ba) list_single_idle_plugin_calendar_pane_g1

0xdc1b,	// (0x0001a4b1) list_highlight_pane_cp17

0xdc2c,	// (0x0001a4c2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc34,	// (0x0001a4ca) list_single_idle_plugin_player_pane_g1

0xac8d,	// (0x00017523) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0001c5e5) list_single_idle_plugin_player_pane_g

0xdc3c,	// (0x0001a4d2) list_single_idle_plugin_player_pane_t1

0xdc4a,	// (0x0001a4e0) list_single_idle_plugin_player_pane_t2

0xdc58,	// (0x0001a4ee) list_single_idle_plugin_player_pane_t3

0xdc66,	// (0x0001a4fc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0001c5ea) list_single_idle_plugin_player_pane_t

0xdc74,	// (0x0001a50a) wait_bar_pane_cp15

0xdc7c,	// (0x0001a512) grid_ai_notification_pane

0xac8d,	// (0x00017523) list_single_idle_plugin_notification_pane_g1

0xdc85,	// (0x0001a51b) cell_ai_notification_pane_ParamLimits

0xdc85,	// (0x0001a51b) cell_ai_notification_pane

0xdc92,	// (0x0001a528) cell_ai_notification_pane_g1

0xdc9a,	// (0x0001a530) cell_ai_notification_pane_t1

0xdca8,	// (0x0001a53e) tb_ext_find_button_pane

0xdcb0,	// (0x0001a546) tb_ext_find_pane_g1

0xdcb8,	// (0x0001a54e) tb_ext_find_pane_t1

0x81be,	// (0x00014a54) tb_ext_find_button_pane_g1

0xdcc6,	// (0x0001a55c) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0001c5f3) tb_ext_find_button_pane_g

0xda62,	// (0x0001a2f8) main_idle_act4_pane_t1_ParamLimits

0xda74,	// (0x0001a30a) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x0001c5b1) main_idle_act4_pane_t_ParamLimits

0xda9c,	// (0x0001a332) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaaa,	// (0x0001a340) sat_plugin_idle_act4_pane_ParamLimits

0xdaaa,	// (0x0001a340) sat_plugin_idle_act4_pane

0xdccf,	// (0x0001a565) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdccf,	// (0x0001a565) sat_plugin_idle_act4_pane_t1

0xdce2,	// (0x0001a578) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdce2,	// (0x0001a578) sat_plugin_idle_act4_pane_t2

0xdcf5,	// (0x0001a58b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcf5,	// (0x0001a58b) sat_plugin_idle_act4_pane_t3

0xdd08,	// (0x0001a59e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd08,	// (0x0001a59e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0001c5f8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0001c5f8) sat_plugin_idle_act4_pane_t

0x4eb3,	// (0x00011749) popup_battery_window_ParamLimits

0x4eb3,	// (0x00011749) popup_battery_window

0x3b98,	// (0x0001042e) bg_popup_sub_pane_cp25_ParamLimits

0x3b98,	// (0x0001042e) bg_popup_sub_pane_cp25

0xdd1b,	// (0x0001a5b1) popup_battery_window_g1_ParamLimits

0xdd1b,	// (0x0001a5b1) popup_battery_window_g1

0xdd27,	// (0x0001a5bd) popup_battery_window_t1_ParamLimits

0xdd27,	// (0x0001a5bd) popup_battery_window_t1

0xdd39,	// (0x0001a5cf) popup_battery_window_t2_ParamLimits

0xdd39,	// (0x0001a5cf) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0001c601) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0001c601) popup_battery_window_t

0x887b,	// (0x00015111) midp_canvas_pane_ParamLimits

0x88f3,	// (0x00015189) midp_keypad_pane_ParamLimits

0x88f3,	// (0x00015189) midp_keypad_pane

0x8b96,	// (0x0001542c) main_midp_pane_ParamLimits

0xb726,	// (0x00017fbc) signal_pane_g2_cp_ParamLimits

0xdd56,	// (0x0001a5ec) aid_size_cell_midp_keypad_ParamLimits

0xdd56,	// (0x0001a5ec) aid_size_cell_midp_keypad

0xdd70,	// (0x0001a606) midp_keyp_game_grid_pane_ParamLimits

0xdd70,	// (0x0001a606) midp_keyp_game_grid_pane

0xdd90,	// (0x0001a626) midp_keyp_rocker_pane_ParamLimits

0xdd90,	// (0x0001a626) midp_keyp_rocker_pane

0xddbf,	// (0x0001a655) midp_keyp_sk_left_pane_ParamLimits

0xddbf,	// (0x0001a655) midp_keyp_sk_left_pane

0xde1b,	// (0x0001a6b1) midp_keyp_sk_right_pane_ParamLimits

0xde1b,	// (0x0001a6b1) midp_keyp_sk_right_pane

0x3785,	// (0x0001001b) bg_button_pane_cp03

0xde77,	// (0x0001a70d) midp_keyp_sk_left_pane_g1

0x3785,	// (0x0001001b) bg_button_pane_cp04

0xde77,	// (0x0001a70d) midp_keyp_sk_right_pane_g1

0xbc66,	// (0x000184fc) midp_keyp_rocker_pane_g1

0xde7f,	// (0x0001a715) keyp_game_cell_pane_ParamLimits

0xde7f,	// (0x0001a715) keyp_game_cell_pane

0x3785,	// (0x0001001b) bg_button_pane_cp02

0xde92,	// (0x0001a728) keyp_game_cell_pane_g1

0x4efd,	// (0x00011793) popup_fep_vkb2_window_ParamLimits

0x4efd,	// (0x00011793) popup_fep_vkb2_window

0x679c,	// (0x00013032) aid_size_cell_vkb2_ParamLimits

0x679c,	// (0x00013032) aid_size_cell_vkb2

0x67f0,	// (0x00013086) popup_fep_vkb2_window_g1_ParamLimits

0x67f0,	// (0x00013086) popup_fep_vkb2_window_g1

0x6838,	// (0x000130ce) vkb2_area_bottom_pane_ParamLimits

0x6838,	// (0x000130ce) vkb2_area_bottom_pane

0x688c,	// (0x00013122) vkb2_area_keypad_pane_ParamLimits

0x688c,	// (0x00013122) vkb2_area_keypad_pane

0x68d2,	// (0x00013168) vkb2_area_top_pane_ParamLimits

0x68d2,	// (0x00013168) vkb2_area_top_pane

0x694c,	// (0x000131e2) vkb2_top_entry_pane_ParamLimits

0x694c,	// (0x000131e2) vkb2_top_entry_pane

0x6976,	// (0x0001320c) vkb2_top_grid_left_pane_ParamLimits

0x6976,	// (0x0001320c) vkb2_top_grid_left_pane

0x6994,	// (0x0001322a) vkb2_top_grid_right_pane_ParamLimits

0x6994,	// (0x0001322a) vkb2_top_grid_right_pane

0x69b2,	// (0x00013248) vkb2_cell_keypad_pane_ParamLimits

0x69b2,	// (0x00013248) vkb2_cell_keypad_pane

0x6a83,	// (0x00013319) vkb2_area_bottom_grid_pane_ParamLimits

0x6a83,	// (0x00013319) vkb2_area_bottom_grid_pane

0x6aa9,	// (0x0001333f) vkb2_area_bottom_pane_g1_ParamLimits

0x6aa9,	// (0x0001333f) vkb2_area_bottom_pane_g1

0x6acd,	// (0x00013363) vkb2_area_bottom_pane_g2_ParamLimits

0x6acd,	// (0x00013363) vkb2_area_bottom_pane_g2

0x6afb,	// (0x00013391) vkb2_area_bottom_pane_g3_ParamLimits

0x6afb,	// (0x00013391) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0001c606) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0001c606) vkb2_area_bottom_pane_g

0x6b5c,	// (0x000133f2) vkb2_top_cell_left_pane_ParamLimits

0x6b5c,	// (0x000133f2) vkb2_top_cell_left_pane

0xdea3,	// (0x0001a739) vkb2_top_entry_pane_g1_ParamLimits

0xdea3,	// (0x0001a739) vkb2_top_entry_pane_g1

0xdeb1,	// (0x0001a747) vkb2_top_entry_pane_t1_ParamLimits

0xdeb1,	// (0x0001a747) vkb2_top_entry_pane_t1

0xdee3,	// (0x0001a779) vkb2_top_entry_pane_t2_ParamLimits

0xdee3,	// (0x0001a779) vkb2_top_entry_pane_t2

0xdf15,	// (0x0001a7ab) vkb2_top_entry_pane_t3_ParamLimits

0xdf15,	// (0x0001a7ab) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0001c60d) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0001c60d) vkb2_top_entry_pane_t

0x6ba9,	// (0x0001343f) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ba9,	// (0x0001343f) vkb2_top_grid_right_pane_g1

0x6bbf,	// (0x00013455) vkb2_top_grid_right_pane_g2_ParamLimits

0x6bbf,	// (0x00013455) vkb2_top_grid_right_pane_g2

0x6bd7,	// (0x0001346d) vkb2_top_grid_right_pane_g3_ParamLimits

0x6bd7,	// (0x0001346d) vkb2_top_grid_right_pane_g3

0x6bef,	// (0x00013485) vkb2_top_grid_right_pane_g4_ParamLimits

0x6bef,	// (0x00013485) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0001c614) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0001c614) vkb2_top_grid_right_pane_g

0x6c05,	// (0x0001349b) vkb2_top_cell_left_pane_g1

0x6c1c,	// (0x000134b2) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c1c,	// (0x000134b2) vkb2_cell_keypad_pane_g1

0xdf39,	// (0x0001a7cf) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf39,	// (0x0001a7cf) vkb2_cell_keypad_pane_t1

0x6c2a,	// (0x000134c0) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c2a,	// (0x000134c0) vkb2_cell_bottom_grid_pane

0x6c63,	// (0x000134f9) vkb2_cell_bottom_grid_pane_g1

0xdaea,	// (0x0001a380) aid_call2_pane_cp02

0xdaf2,	// (0x0001a388) aid_call_pane_cp02

0xdafa,	// (0x0001a390) clock_digital_number_pane_cp10

0xdb02,	// (0x0001a398) clock_digital_number_pane_cp11

0xdb0a,	// (0x0001a3a0) clock_digital_number_pane_cp12

0xdb12,	// (0x0001a3a8) clock_digital_number_pane_cp13

0xdb1a,	// (0x0001a3b0) clock_digital_separator_pane_cp10

0x81be,	// (0x00014a54) popup_clock_digital_analogue_window_cp2_g1

0x81be,	// (0x00014a54) popup_clock_digital_analogue_window_cp2_g2

0xdb22,	// (0x0001a3b8) popup_clock_digital_analogue_window_cp2_g3

0x81be,	// (0x00014a54) popup_clock_digital_analogue_window_cp2_g4

0xdb22,	// (0x0001a3b8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x0001c5c9) popup_clock_digital_analogue_window_cp2_g

0xdb2a,	// (0x0001a3c0) popup_clock_digital_analogue_window_cp2_t1

0xdb38,	// (0x0001a3ce) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0001c5d4) popup_clock_digital_analogue_window_cp2_t

0xbc66,	// (0x000184fc) clock_digital_number_pane_cp10_g1

0xbc66,	// (0x000184fc) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0001c3b0) clock_digital_number_pane_cp10_g

0xbc66,	// (0x000184fc) clock_digital_separator_pane_cp10_g1

0xbc66,	// (0x000184fc) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0001c3b0) clock_digital_separator_pane_cp10_g

0xd964,	// (0x0001a1fa) uniindi_top_pane_g3

0xd975,	// (0x0001a20b) uniindi_top_pane_g4

0x6a3d,	// (0x000132d3) vkb2_row_keypad_pane_ParamLimits

0x6a3d,	// (0x000132d3) vkb2_row_keypad_pane

0x6c7f,	// (0x00013515) vkb2_cell_t_keypad_pane_ParamLimits

0x6c7f,	// (0x00013515) vkb2_cell_t_keypad_pane

0x6c8f,	// (0x00013525) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6c8f,	// (0x00013525) vkb2_cell_t_keypad_pane_cp08

0x6ca4,	// (0x0001353a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6ca4,	// (0x0001353a) vkb2_cell_t_keypad_pane_cp09

0x6cb8,	// (0x0001354e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6cb8,	// (0x0001354e) vkb2_cell_t_keypad_pane_cp01

0x6cc9,	// (0x0001355f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6cc9,	// (0x0001355f) vkb2_cell_t_keypad_pane_cp02

0x6cda,	// (0x00013570) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6cda,	// (0x00013570) vkb2_cell_t_keypad_pane_cp03

0x6ceb,	// (0x00013581) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6ceb,	// (0x00013581) vkb2_cell_t_keypad_pane_cp04

0x6cfc,	// (0x00013592) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6cfc,	// (0x00013592) vkb2_cell_t_keypad_pane_cp05

0x6d0d,	// (0x000135a3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6d0d,	// (0x000135a3) vkb2_cell_t_keypad_pane_cp06

0x6d20,	// (0x000135b6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d20,	// (0x000135b6) vkb2_cell_t_keypad_pane_cp07

0x6d35,	// (0x000135cb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d35,	// (0x000135cb) vkb2_cell_t_keypad_pane_cp10

0x64d0,	// (0x00012d66) vkb2_cell_t_keypad_pane_g1

0xdf50,	// (0x0001a7e6) vkb2_cell_t_keypad_pane_t1

0x4dee,	// (0x00011684) popup_grid_graphic2_window

0xdf62,	// (0x0001a7f8) aid_size_cell_graphic2_ParamLimits

0xdf62,	// (0x0001a7f8) aid_size_cell_graphic2

0xdf9a,	// (0x0001a830) bg_popup_window_pane_cp21_ParamLimits

0xdf9a,	// (0x0001a830) bg_popup_window_pane_cp21

0xdfa8,	// (0x0001a83e) graphic2_pages_pane_ParamLimits

0xdfa8,	// (0x0001a83e) graphic2_pages_pane

0xdfee,	// (0x0001a884) grid_graphic2_control_pane_ParamLimits

0xdfee,	// (0x0001a884) grid_graphic2_control_pane

0xe02c,	// (0x0001a8c2) grid_graphic2_pane_ParamLimits

0xe02c,	// (0x0001a8c2) grid_graphic2_pane

0xe0a2,	// (0x0001a938) cell_graphic2_pane

0x4dee,	// (0x00011684) main_comp_mode_pane

0xd16c,	// (0x00019a02) list_ai3_gene_pane_ParamLimits

0xd597,	// (0x00019e2d) bg_popup_window_pane_cp19_ParamLimits

0xd5a3,	// (0x00019e39) bg_touch_area_indi_pane_ParamLimits

0xd5a3,	// (0x00019e39) bg_touch_area_indi_pane

0xd5b9,	// (0x00019e4f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5b9,	// (0x00019e4f) bg_touch_area_indi_pane_cp01

0xd5cf,	// (0x00019e65) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5cf,	// (0x00019e65) bg_touch_area_indi_pane_cp02

0xd5e9,	// (0x00019e7f) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e9,	// (0x00019e7f) bg_touch_area_indi_pane_cp03

0xd603,	// (0x00019e99) popup_slider_window_g1_ParamLimits

0xd61f,	// (0x00019eb5) popup_slider_window_g2_ParamLimits

0xd63b,	// (0x00019ed1) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0001c55e) popup_slider_window_g_ParamLimits

0xd6a1,	// (0x00019f37) popup_slider_window_t1_ParamLimits

0xd715,	// (0x00019fab) small_volume_slider_vertical_pane_ParamLimits

0xe0a2,	// (0x0001a938) cell_graphic2_pane_ParamLimits

0xe0f6,	// (0x0001a98c) bg_button_pane_cp10_ParamLimits

0xe0f6,	// (0x0001a98c) bg_button_pane_cp10

0xe10b,	// (0x0001a9a1) bg_button_pane_cp11_ParamLimits

0xe10b,	// (0x0001a9a1) bg_button_pane_cp11

0xe120,	// (0x0001a9b6) graphic2_pages_pane_g1_ParamLimits

0xe120,	// (0x0001a9b6) graphic2_pages_pane_g1

0xe13b,	// (0x0001a9d1) graphic2_pages_pane_g2_ParamLimits

0xe13b,	// (0x0001a9d1) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x0001c622) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x0001c622) graphic2_pages_pane_g

0xe153,	// (0x0001a9e9) graphic2_pages_pane_t1_ParamLimits

0xe153,	// (0x0001a9e9) graphic2_pages_pane_t1

0xe169,	// (0x0001a9ff) cell_graphic2_control_pane_ParamLimits

0xe169,	// (0x0001a9ff) cell_graphic2_control_pane

0xe189,	// (0x0001aa1f) cell_graphic2_pane_g1_ParamLimits

0xe189,	// (0x0001aa1f) cell_graphic2_pane_g1

0xe196,	// (0x0001aa2c) cell_graphic2_pane_g2_ParamLimits

0xe196,	// (0x0001aa2c) cell_graphic2_pane_g2

0xe1a3,	// (0x0001aa39) cell_graphic2_pane_g3_ParamLimits

0xe1a3,	// (0x0001aa39) cell_graphic2_pane_g3

0xe1b0,	// (0x0001aa46) cell_graphic2_pane_g4_ParamLimits

0xe1b0,	// (0x0001aa46) cell_graphic2_pane_g4

0xe1bd,	// (0x0001aa53) cell_graphic2_pane_g5_ParamLimits

0xe1bd,	// (0x0001aa53) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x0001c627) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x0001c627) cell_graphic2_pane_g

0xe1d5,	// (0x0001aa6b) cell_graphic2_pane_t1_ParamLimits

0xe1d5,	// (0x0001aa6b) cell_graphic2_pane_t1

0x9232,	// (0x00015ac8) grid_highlight_pane_cp11_ParamLimits

0x9232,	// (0x00015ac8) grid_highlight_pane_cp11

0x3b98,	// (0x0001042e) bg_button_pane_cp05

0xe22c,	// (0x0001aac2) cell_graphic2_control_pane_g1

0xbc66,	// (0x000184fc) bg_touch_area_indi_pane_g1

0xe254,	// (0x0001aaea) aid_cmod_rocker_key_size

0xe25e,	// (0x0001aaf4) aid_cmode_itu_key_size

0xe268,	// (0x0001aafe) main_cmode_video_pane

0xe272,	// (0x0001ab08) main_comp_mode_itu_pane

0xe27e,	// (0x0001ab14) main_comp_mode_rocker_pane

0xe28a,	// (0x0001ab20) cell_cmode_rocker_pane_ParamLimits

0xe28a,	// (0x0001ab20) cell_cmode_rocker_pane

0xe29e,	// (0x0001ab34) cell_cmode_itu_pane_ParamLimits

0xe29e,	// (0x0001ab34) cell_cmode_itu_pane

0x413a,	// (0x000109d0) bg_button_pane_cp06_ParamLimits

0x413a,	// (0x000109d0) bg_button_pane_cp06

0xbee1,	// (0x00018777) cell_cmode_rocker_pane_g1_ParamLimits

0xbee1,	// (0x00018777) cell_cmode_rocker_pane_g1

0xd7bc,	// (0x0001a052) cell_cmode_rocker_pane_g2_ParamLimits

0xd7bc,	// (0x0001a052) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x0001c637) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x0001c637) cell_cmode_rocker_pane_g

0x3785,	// (0x0001001b) bg_button_pane_cp07

0xe2b5,	// (0x0001ab4b) cell_cmode_itu_pane_g1

0xe2be,	// (0x0001ab54) cell_cmode_itu_pane_t1

0xe2cc,	// (0x0001ab62) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0001c63c) cell_cmode_itu_pane_t

0xd9e9,	// (0x0001a27f) aid_touch_ctrl_left

0xd9f1,	// (0x0001a287) aid_touch_ctrl_right

0x3785,	// (0x0001001b) compa_mode_pane

0xe2da,	// (0x0001ab70) aid_cmod_rocker_key_size_cp

0xe2e4,	// (0x0001ab7a) aid_cmode_itu_key_size_cp

0xe2ee,	// (0x0001ab84) compa_mode_pane_g1

0xe2f6,	// (0x0001ab8c) compa_mode_pane_g2

0xe2fe,	// (0x0001ab94) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x0001c641) compa_mode_pane_g

0xe306,	// (0x0001ab9c) main_comp_mode_itu_pane_cp

0xe30e,	// (0x0001aba4) main_comp_mode_rocker_pane_cp

0xe316,	// (0x0001abac) cell_cmode_itu_pane_cp_ParamLimits

0xe316,	// (0x0001abac) cell_cmode_itu_pane_cp

0xe32b,	// (0x0001abc1) cell_cmode_rocker_pane_cp_ParamLimits

0xe32b,	// (0x0001abc1) cell_cmode_rocker_pane_cp

0x413a,	// (0x000109d0) bg_button_pane_cp06_cp_ParamLimits

0x413a,	// (0x000109d0) bg_button_pane_cp06_cp

0xbee1,	// (0x00018777) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbee1,	// (0x00018777) cell_cmode_rocker_pane_g1_cp

0xbc66,	// (0x000184fc) cell_cmode_rocker_pane_g2_cp

0x3785,	// (0x0001001b) bg_button_pane_cp07_cp

0xe33d,	// (0x0001abd3) cell_cmode_itu_pane_g1_cp

0xe346,	// (0x0001abdc) cell_cmode_itu_pane_t1_cp

0xe346,	// (0x0001abdc) cell_cmode_itu_pane_t2_cp

0xa760,	// (0x00016ff6) settings_code_pane_cp2

0x39c2,	// (0x00010258) bg_popup_window_pane_cp3_ParamLimits

0x3dac,	// (0x00010642) heading_pane_cp3_ParamLimits

0x3dbb,	// (0x00010651) listscroll_popup_graphic_pane_ParamLimits

0x6263,	// (0x00012af9) fep_hwr_aid_pane_ParamLimits

0x66f5,	// (0x00012f8b) aid_touch_sctrl_top_ParamLimits

0x6710,	// (0x00012fa6) sctrl_sk_top_pane_g1_ParamLimits

0x64d0,	// (0x00012d66) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x0001c577) sctrl_sk_top_pane_g_ParamLimits

0x671d,	// (0x00012fb3) sctrl_sk_top_pane_t1_ParamLimits

0x66f5,	// (0x00012f8b) aid_touch_sctrl_bottom_ParamLimits

0x671d,	// (0x00012fb3) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92e,	// (0x0001a1c4) aid_area_touch_clock

0x6914,	// (0x000131aa) aid_vkb2_area_top_pane_cell_ParamLimits

0x6914,	// (0x000131aa) aid_vkb2_area_top_pane_cell

0x6a5f,	// (0x000132f5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6a5f,	// (0x000132f5) aid_vkb2_area_bottom_pane_cell

0xde9b,	// (0x0001a731) popup_char_count_window

0xe354,	// (0x0001abea) popup_char_count_window_g1

0xe35d,	// (0x0001abf3) popup_char_count_window_g2

0xe366,	// (0x0001abfc) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x0001c648) popup_char_count_window_g

0xe36f,	// (0x0001ac05) popup_char_count_window_t1

0x67ce,	// (0x00013064) popup_fep_char_preview_window_ParamLimits

0x67ce,	// (0x00013064) popup_fep_char_preview_window

0x6932,	// (0x000131c8) vkb2_top_candi_pane_ParamLimits

0x6932,	// (0x000131c8) vkb2_top_candi_pane

0xe37d,	// (0x0001ac13) cell_vkb2_top_candi_pane_ParamLimits

0xe37d,	// (0x0001ac13) cell_vkb2_top_candi_pane

0x6d4a,	// (0x000135e0) bg_popup_fep_char_preview_window_ParamLimits

0x6d4a,	// (0x000135e0) bg_popup_fep_char_preview_window

0x6d58,	// (0x000135ee) popup_fep_char_preview_window_t1_ParamLimits

0x6d58,	// (0x000135ee) popup_fep_char_preview_window_t1

0xe3ce,	// (0x0001ac64) bg_popup_fep_char_preview_window_g1

0xe3d6,	// (0x0001ac6c) bg_popup_fep_char_preview_window_g2

0xe3de,	// (0x0001ac74) bg_popup_fep_char_preview_window_g3

0xe3e6,	// (0x0001ac7c) bg_popup_fep_char_preview_window_g4

0xe3ee,	// (0x0001ac84) bg_popup_fep_char_preview_window_g5

0xe3f6,	// (0x0001ac8c) bg_popup_fep_char_preview_window_g6

0xe3fe,	// (0x0001ac94) bg_popup_fep_char_preview_window_g7

0xe406,	// (0x0001ac9c) bg_popup_fep_char_preview_window_g8

0xe40e,	// (0x0001aca4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x0001c64f) bg_popup_fep_char_preview_window_g

0x64d0,	// (0x00012d66) cell_vkb2_top_candi_pane_g1_ParamLimits

0x64d0,	// (0x00012d66) cell_vkb2_top_candi_pane_g1

0x64de,	// (0x00012d74) cell_vkb2_top_candi_pane_g2_ParamLimits

0x64de,	// (0x00012d74) cell_vkb2_top_candi_pane_g2

0xe20b,	// (0x0001aaa1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe20b,	// (0x0001aaa1) cell_vkb2_top_candi_pane_g3

0x6d9a,	// (0x00013630) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6d9a,	// (0x00013630) cell_vkb2_top_candi_pane_g4

0xc413,	// (0x00018ca9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc413,	// (0x00018ca9) cell_vkb2_top_candi_pane_g5

0x6dbb,	// (0x00013651) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6dbb,	// (0x00013651) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x0001c664) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x0001c664) cell_vkb2_top_candi_pane_g

0x6dc9,	// (0x0001365f) cell_vkb2_top_candi_pane_t1

0x60c3,	// (0x00012959) aid_size_touch_slider_mark_ParamLimits

0x60c3,	// (0x00012959) aid_size_touch_slider_mark

0xdfde,	// (0x0001a874) grid_graphic2_catg_pane_ParamLimits

0xdfde,	// (0x0001a874) grid_graphic2_catg_pane

0xe07c,	// (0x0001a912) popup_grid_graphic2_window_t1_ParamLimits

0xe07c,	// (0x0001a912) popup_grid_graphic2_window_t1

0xe08e,	// (0x0001a924) popup_grid_graphic2_window_t2_ParamLimits

0xe08e,	// (0x0001a924) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0001c61d) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0001c61d) popup_grid_graphic2_window_t

0x3b98,	// (0x0001042e) bg_button_pane_cp05_ParamLimits

0xe22c,	// (0x0001aac2) cell_graphic2_control_pane_g1_ParamLimits

0xe416,	// (0x0001acac) cell_graphic2_catg_pane_ParamLimits

0xe416,	// (0x0001acac) cell_graphic2_catg_pane

0x3785,	// (0x0001001b) bg_button_pane_cp12

0xe428,	// (0x0001acbe) cell_graphic2_catg_pane_g1

0xd8fa,	// (0x0001a190) cell_tb_ext_pane_t1_ParamLimits

0x6b7c,	// (0x00013412) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6b7c,	// (0x00013412) vkb2_top_cell_right_narrow_pane

0x6b94,	// (0x0001342a) vkb2_top_cell_right_wide_pane_ParamLimits

0x6b94,	// (0x0001342a) vkb2_top_cell_right_wide_pane

0x6255,	// (0x00012aeb) bg_vkb2_func_pane_ParamLimits

0x6255,	// (0x00012aeb) bg_vkb2_func_pane

0x6c05,	// (0x0001349b) vkb2_top_cell_left_pane_g1_ParamLimits

0x6255,	// (0x00012aeb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6255,	// (0x00012aeb) bg_vkb2_fuc_pane_cp03

0x6c63,	// (0x000134f9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9116,	// (0x000159ac) bg_vkb2_func_pane_g1

0x911e,	// (0x000159b4) bg_vkb2_func_pane_g2

0x912e,	// (0x000159c4) bg_vkb2_func_pane_g3

0x9126,	// (0x000159bc) bg_vkb2_func_pane_g4

0x9136,	// (0x000159cc) bg_vkb2_func_pane_g5

0x913e,	// (0x000159d4) bg_vkb2_func_pane_g6

0x9146,	// (0x000159dc) bg_vkb2_func_pane_g7

0x914e,	// (0x000159e4) bg_vkb2_func_pane_g8

0x910e,	// (0x000159a4) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x0001c671) bg_vkb2_func_pane_g

0x6255,	// (0x00012aeb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6255,	// (0x00012aeb) bg_vkb2_fuc_pane_cp01

0x6c05,	// (0x0001349b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6c05,	// (0x0001349b) vkb2_top_cell_right_wide_pane_g1

0x6255,	// (0x00012aeb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6255,	// (0x00012aeb) bg_vkb2_fuc_pane_cp02

0x6c63,	// (0x000134f9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c63,	// (0x000134f9) vkb2_top_cell_right_narrow_pane_g1

0xd511,	// (0x00019da7) aid_touch_area_decrease_ParamLimits

0xd511,	// (0x00019da7) aid_touch_area_decrease

0xd535,	// (0x00019dcb) aid_touch_area_increase_ParamLimits

0xd535,	// (0x00019dcb) aid_touch_area_increase

0xd54d,	// (0x00019de3) aid_touch_area_mute_ParamLimits

0xd54d,	// (0x00019de3) aid_touch_area_mute

0xd569,	// (0x00019dff) aid_touch_area_slider_ParamLimits

0xd569,	// (0x00019dff) aid_touch_area_slider

0xd657,	// (0x00019eed) popup_slider_window_g4_ParamLimits

0xd657,	// (0x00019eed) popup_slider_window_g4

0xd66f,	// (0x00019f05) popup_slider_window_g5_ParamLimits

0xd66f,	// (0x00019f05) popup_slider_window_g5

0xd691,	// (0x00019f27) popup_slider_window_g6_ParamLimits

0xd691,	// (0x00019f27) popup_slider_window_g6

0xd6cf,	// (0x00019f65) popup_slider_window_t2_ParamLimits

0xd6cf,	// (0x00019f65) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0001c56b) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0001c56b) popup_slider_window_t

0xd6e7,	// (0x00019f7d) slider_pane_ParamLimits

0xd6e7,	// (0x00019f7d) slider_pane

0xe431,	// (0x0001acc7) slider_pane_g1_ParamLimits

0xe431,	// (0x0001acc7) slider_pane_g1

0xe445,	// (0x0001acdb) slider_pane_g2_ParamLimits

0xe445,	// (0x0001acdb) slider_pane_g2

0xe45b,	// (0x0001acf1) slider_pane_g3_ParamLimits

0xe45b,	// (0x0001acf1) slider_pane_g3

0x0003,

0xfdee,	// (0x0001c684) slider_pane_g_ParamLimits

0xfdee,	// (0x0001c684) slider_pane_g

0x5c49,	// (0x000124df) popup_tb_float_extension_window_ParamLimits

0x5c49,	// (0x000124df) popup_tb_float_extension_window

0xe487,	// (0x0001ad1d) aid_size_cell_tb_float_ext

0x3785,	// (0x0001001b) bg_popup_sub_window_cp28

0xe493,	// (0x0001ad29) grid_tb_float_ext_pane

0xe49f,	// (0x0001ad35) cell_tb_float_ext_pane_ParamLimits

0xe49f,	// (0x0001ad35) cell_tb_float_ext_pane

0xe4bb,	// (0x0001ad51) cell_tb_float_ext_pane_g1

0xe4c4,	// (0x0001ad5a) grid_highlight_pane_cp12

0x63aa,	// (0x00012c40) cell_last_hwr_side_pane_ParamLimits

0x63aa,	// (0x00012c40) cell_last_hwr_side_pane

0xbc66,	// (0x000184fc) cell_last_hwr_side_pane_g1

0xe4cd,	// (0x0001ad63) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0001c68d) cell_last_hwr_side_pane_g

0x6b2b,	// (0x000133c1) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6b2b,	// (0x000133c1) vkb2_area_bottom_space_btn_pane

0x64d0,	// (0x00012d66) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf50,	// (0x0001a7e6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6dc9,	// (0x0001365f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6de7,	// (0x0001367d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6de7,	// (0x0001367d) vkb2_area_bottom_space_btn_pane_g1

0x6e21,	// (0x000136b7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6e21,	// (0x000136b7) vkb2_area_bottom_space_btn_pane_g2

0x6e57,	// (0x000136ed) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6e57,	// (0x000136ed) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0001c692) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0001c692) vkb2_area_bottom_space_btn_pane_g

0x631a,	// (0x00012bb0) cel_fep_hwr_func_pane_ParamLimits

0x631a,	// (0x00012bb0) cel_fep_hwr_func_pane

0x6356,	// (0x00012bec) cell_hwr_side_button_pane_ParamLimits

0x6356,	// (0x00012bec) cell_hwr_side_button_pane

0xd92e,	// (0x0001a1c4) aid_area_touch_clock_ParamLimits

0x3b98,	// (0x0001042e) bg_uniindi_top_pane_ParamLimits

0xd942,	// (0x0001a1d8) uniindi_top_pane_g1_ParamLimits

0xd958,	// (0x0001a1ee) uniindi_top_pane_g2_ParamLimits

0xd964,	// (0x0001a1fa) uniindi_top_pane_g3_ParamLimits

0xd975,	// (0x0001a20b) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x0001c5a3) uniindi_top_pane_g_ParamLimits

0xd982,	// (0x0001a218) uniindi_top_pane_t1_ParamLimits

0x3b98,	// (0x0001042e) bg_vkb2_func_pane_cp01_ParamLimits

0x3b98,	// (0x0001042e) bg_vkb2_func_pane_cp01

0xe4d6,	// (0x0001ad6c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d6,	// (0x0001ad6c) cel_fep_hwr_func_pane_g1

0x3b98,	// (0x0001042e) bg_vkb2_func_pane_cp02_ParamLimits

0x3b98,	// (0x0001042e) bg_vkb2_func_pane_cp02

0xe4d6,	// (0x0001ad6c) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d6,	// (0x0001ad6c) cell_hwr_side_button_pane_g1

0x8f59,	// (0x000157ef) status_pane_g4_ParamLimits

0x8f59,	// (0x000157ef) status_pane_g4

0x8f73,	// (0x00015809) status_pane_t1

0xba19,	// (0x000182af) form2_midp_gauge_slider_cont_pane

0xba21,	// (0x000182b7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba33,	// (0x000182c9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba45,	// (0x000182db) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0001c363) form2_midp_gauge_slider_pane_t_ParamLimits

0xba57,	// (0x000182ed) form2_midp_slider_pane_ParamLimits

0x678e,	// (0x00013024) aid_size_cell_func_vkb2_ParamLimits

0x678e,	// (0x00013024) aid_size_cell_func_vkb2

0xe473,	// (0x0001ad09) slider_pane_g4_ParamLimits

0xe473,	// (0x0001ad09) slider_pane_g4

0x6ea1,	// (0x00013737) form2_midp_gauge_slider_pane_t2_cp01

0x6eaf,	// (0x00013745) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6eaf,	// (0x00013745) form2_midp_gauge_slider_pane_t3_cp01

0x6ecc,	// (0x00013762) form2_midp_slider_pane_cp01

0x3785,	// (0x0001001b) navi_smil_pane

0xe50f,	// (0x0001ada5) navi_smil_pane_g1

0xe517,	// (0x0001adad) navi_smil_pane_t1

0xe4e4,	// (0x0001ad7a) form2_midp_slider_pane_g1

0xe4ed,	// (0x0001ad83) form2_midp_slider_pane_g2

0xe4f5,	// (0x0001ad8b) form2_midp_slider_pane_g3

0xe4e4,	// (0x0001ad7a) form2_midp_slider_pane_g4

0xe4fd,	// (0x0001ad93) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0001c69b) form2_midp_slider_pane_g

0x6e91,	// (0x00013727) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6e91,	// (0x00013727) vkb2_area_bottom_space_btn_pane_g4

0x8d78,	// (0x0001560e) lc0_navi_pane_ParamLimits

0x8d78,	// (0x0001560e) lc0_navi_pane

0x8df4,	// (0x0001568a) lc0_stat_indi_pane_ParamLimits

0x8df4,	// (0x0001568a) lc0_stat_indi_pane

0x8e0b,	// (0x000156a1) ls0_title_pane_ParamLimits

0x8e0b,	// (0x000156a1) ls0_title_pane

0x413a,	// (0x000109d0) bg_popup_sub_pane_cp14_ParamLimits

0xd915,	// (0x0001a1ab) list_uniindi_pane_ParamLimits

0xd921,	// (0x0001a1b7) uniindi_top_pane_ParamLimits

0xd9c1,	// (0x0001a257) list_single_uniindi_pane_g1_ParamLimits

0xd9d4,	// (0x0001a26a) list_single_uniindi_pane_t1_ParamLimits

0x6ed5,	// (0x0001376b) lc0_stat_clock_pane_ParamLimits

0x6ed5,	// (0x0001376b) lc0_stat_clock_pane

0xe525,	// (0x0001adbb) lc0_stat_indi_pane_g1_ParamLimits

0xe525,	// (0x0001adbb) lc0_stat_indi_pane_g1

0xe532,	// (0x0001adc8) lc0_stat_indi_pane_g2_ParamLimits

0xe532,	// (0x0001adc8) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x0001c6a6) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x0001c6a6) lc0_stat_indi_pane_g

0x6ee2,	// (0x00013778) lc0_uni_indicator_pane_ParamLimits

0x6ee2,	// (0x00013778) lc0_uni_indicator_pane

0xe53f,	// (0x0001add5) ls0_title_pane_g1_ParamLimits

0xe53f,	// (0x0001add5) ls0_title_pane_g1

0xe553,	// (0x0001ade9) ls0_title_pane_t1_ParamLimits

0xe553,	// (0x0001ade9) ls0_title_pane_t1

0x6eef,	// (0x00013785) lc0_uni_indicator_pane_g1_ParamLimits

0x6eef,	// (0x00013785) lc0_uni_indicator_pane_g1

0xe589,	// (0x0001ae1f) lc0_stat_clock_pane_t1

0x4dee,	// (0x00011684) main_ai5_pane

0xe597,	// (0x0001ae2d) ai5_sk_pane_ParamLimits

0xe597,	// (0x0001ae2d) ai5_sk_pane

0xe5a4,	// (0x0001ae3a) cell_ai5_widget_pane_ParamLimits

0xe5a4,	// (0x0001ae3a) cell_ai5_widget_pane

0xe647,	// (0x0001aedd) aid_size_cell_widget_grid

0xe655,	// (0x0001aeeb) bg_ai5_widget_pane_ParamLimits

0xe655,	// (0x0001aeeb) bg_ai5_widget_pane

0xe6d1,	// (0x0001af67) cell_ai5_widget_pane_g2

0xe6e5,	// (0x0001af7b) cell_ai5_widget_pane_g3

0xe6ff,	// (0x0001af95) cell_ai5_widget_pane_g4

0xe70f,	// (0x0001afa5) cell_ai5_widget_pane_g5

0xe71f,	// (0x0001afb5) cell_ai5_widget_pane_g6

0xe72b,	// (0x0001afc1) cell_ai5_widget_pane_g7

0xe797,	// (0x0001b02d) cell_ai5_widget_pane_t1_ParamLimits

0xe797,	// (0x0001b02d) cell_ai5_widget_pane_t1

0xe7b4,	// (0x0001b04a) cell_ai5_widget_pane_t2_ParamLimits

0xe7b4,	// (0x0001b04a) cell_ai5_widget_pane_t2

0xe7cc,	// (0x0001b062) cell_ai5_widget_pane_t3_ParamLimits

0xe7cc,	// (0x0001b062) cell_ai5_widget_pane_t3

0xe7e4,	// (0x0001b07a) cell_ai5_widget_pane_t4_ParamLimits

0xe7e4,	// (0x0001b07a) cell_ai5_widget_pane_t4

0xe80a,	// (0x0001b0a0) cell_ai5_widget_pane_t5_ParamLimits

0xe80a,	// (0x0001b0a0) cell_ai5_widget_pane_t5

0xe82a,	// (0x0001b0c0) cell_ai5_widget_pane_t6_ParamLimits

0xe82a,	// (0x0001b0c0) cell_ai5_widget_pane_t6

0xe83c,	// (0x0001b0d2) cell_ai5_widget_pane_t7_ParamLimits

0xe83c,	// (0x0001b0d2) cell_ai5_widget_pane_t7

0xe85b,	// (0x0001b0f1) cell_ai5_widget_pane_t8_ParamLimits

0xe85b,	// (0x0001b0f1) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x0001c6c6) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x0001c6c6) cell_ai5_widget_pane_t

0xe8df,	// (0x0001b175) grid_ai5_widget_pane

0x413a,	// (0x000109d0) highlight_cell_ai5_widget_pane_ParamLimits

0x413a,	// (0x000109d0) highlight_cell_ai5_widget_pane

0xe8ed,	// (0x0001b183) ai5_sk_left_pane

0xe8f7,	// (0x0001b18d) ai5_sk_middle_pane

0xe901,	// (0x0001b197) ai5_sk_right_pane

0xe90b,	// (0x0001b1a1) bg_ai5_widget_pane_g1_ParamLimits

0xe90b,	// (0x0001b1a1) bg_ai5_widget_pane_g1

0xe917,	// (0x0001b1ad) bg_ai5_widget_pane_g2_ParamLimits

0xe917,	// (0x0001b1ad) bg_ai5_widget_pane_g2

0xe923,	// (0x0001b1b9) bg_ai5_widget_pane_g3_ParamLimits

0xe923,	// (0x0001b1b9) bg_ai5_widget_pane_g3

0xe92f,	// (0x0001b1c5) bg_ai5_widget_pane_g4_ParamLimits

0xe92f,	// (0x0001b1c5) bg_ai5_widget_pane_g4

0xe93b,	// (0x0001b1d1) bg_ai5_widget_pane_g5_ParamLimits

0xe93b,	// (0x0001b1d1) bg_ai5_widget_pane_g5

0xe947,	// (0x0001b1dd) bg_ai5_widget_pane_g6_ParamLimits

0xe947,	// (0x0001b1dd) bg_ai5_widget_pane_g6

0xe953,	// (0x0001b1e9) bg_ai5_widget_pane_g7_ParamLimits

0xe953,	// (0x0001b1e9) bg_ai5_widget_pane_g7

0xe95f,	// (0x0001b1f5) bg_ai5_widget_pane_g8_ParamLimits

0xe95f,	// (0x0001b1f5) bg_ai5_widget_pane_g8

0xe96b,	// (0x0001b201) bg_ai5_widget_pane_g9_ParamLimits

0xe96b,	// (0x0001b201) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0001c6df) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0001c6df) bg_ai5_widget_pane_g

0xe9a3,	// (0x0001b239) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x0001b239) cell_shortcut_ai5_widget_pane

0x8867,	// (0x000150fd) bg_cell_shortcut_ai5_widget_pane

0xe9b6,	// (0x0001b24c) cell_grid_ai5_widget_pane_g1

0x8867,	// (0x000150fd) highlight_cell_shortcut_ai5_widget_pane

0x9116,	// (0x000159ac) ai5_sk_left_pane_g1

0xe9bf,	// (0x0001b255) ai5_sk_left_pane_g2

0xe9c7,	// (0x0001b25d) ai5_sk_left_pane_g3

0xe9cf,	// (0x0001b265) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0001c6f2) ai5_sk_left_pane_g

0xe9d7,	// (0x0001b26d) ai5_sk_left_pane_t1

0x911e,	// (0x000159b4) ai5_sk_right_pane_g1

0xe9e5,	// (0x0001b27b) ai5_sk_right_pane_g2

0xe9ed,	// (0x0001b283) ai5_sk_right_pane_g3

0xe9f5,	// (0x0001b28b) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0001c6fb) ai5_sk_right_pane_g

0xe9fd,	// (0x0001b293) ai5_sk_right_pane_t1

0x911e,	// (0x000159b4) ai5_sk_middle_pane_g1

0x9116,	// (0x000159ac) ai5_sk_middle_pane_g2

0x9136,	// (0x000159cc) ai5_sk_middle_pane_g3

0xe9ed,	// (0x0001b283) ai5_sk_middle_pane_g4

0xe9c7,	// (0x0001b25d) ai5_sk_middle_pane_g5

0xea0b,	// (0x0001b2a1) ai5_sk_middle_pane_g6

0xea13,	// (0x0001b2a9) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0001c704) ai5_sk_middle_pane_g

0x8bfe,	// (0x00015494) aid_touch_area_size_lc0_ParamLimits

0x8bfe,	// (0x00015494) aid_touch_area_size_lc0

0x64ff,	// (0x00012d95) cell_hwr_candidate_pane_t1_ParamLimits

0x8c1c,	// (0x000154b2) aid_touch_navi_pane

0x8f0b,	// (0x000157a1) status_dt_navi_pane_ParamLimits

0x8f0b,	// (0x000157a1) status_dt_navi_pane

0x8f18,	// (0x000157ae) status_dt_sta_pane_ParamLimits

0x8f18,	// (0x000157ae) status_dt_sta_pane

0xea1b,	// (0x0001b2b1) dt_sta_controll_pane

0xea28,	// (0x0001b2be) dt_sta_indi_pane

0xea39,	// (0x0001b2cf) dt_sta_title_pane

0x3b98,	// (0x0001042e) bg_dt_sta_indi_pane_ParamLimits

0x3b98,	// (0x0001042e) bg_dt_sta_indi_pane

0xea4c,	// (0x0001b2e2) dt_sta_battery_pane

0xea54,	// (0x0001b2ea) dt_sta_indi_pane_g1

0xea5d,	// (0x0001b2f3) dt_sta_indi_pane_g2

0xea66,	// (0x0001b2fc) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0001c713) dt_sta_indi_pane_g

0xea6f,	// (0x0001b305) dt_sta_signal_pane

0x413a,	// (0x000109d0) bg_dt_sta_title_pane_ParamLimits

0x413a,	// (0x000109d0) bg_dt_sta_title_pane

0xea78,	// (0x0001b30e) dt_sta_title_pane_g1

0xea80,	// (0x0001b316) dt_sta_title_pane_t1_ParamLimits

0xea80,	// (0x0001b316) dt_sta_title_pane_t1

0x3785,	// (0x0001001b) bg_dt_sta_control_pane

0xea95,	// (0x0001b32b) dt_sta_controll_pane_g1

0xea9e,	// (0x0001b334) bg_dt_sta_title_pane_g1

0xeaa7,	// (0x0001b33d) bg_dt_sta_title_pane_g2

0xeab0,	// (0x0001b346) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0001c71a) bg_dt_sta_title_pane_g

0xbc66,	// (0x000184fc) bg_dt_sta_indi_pane_g1

0xeab9,	// (0x0001b34f) dt_sta_signal_pane_g1

0xeac1,	// (0x0001b357) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0001c721) dt_sta_signal_pane_g

0xeac9,	// (0x0001b35f) dt_sta_battery_pane_g1

0xead2,	// (0x0001b368) dt_sta_battery_pane_t1

0xbc66,	// (0x000184fc) bg_dt_sta_control_pane_g1

0x82c8,	// (0x00014b5e) fep_china_uni_eep_pane

0x82d0,	// (0x00014b66) fep_china_uni_entry_pane_ParamLimits

0x82e0,	// (0x00014b76) popup_fep_china_uni_window_g1_ParamLimits

0x82f0,	// (0x00014b86) popup_fep_china_uni_window_g2_ParamLimits

0x82f0,	// (0x00014b86) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001bf89) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001bf89) popup_fep_china_uni_window_g

0xeae1,	// (0x0001b377) fep_china_uni_eep_pane_g1

0xeae9,	// (0x0001b37f) fep_china_uni_eep_pane_t1

0xe506,	// (0x0001ad9c) aid_touch_area_size_smil_player

0x8d70,	// (0x00015606) lc0_clock_pane

0x8f67,	// (0x000157fd) status_pane_g5_ParamLimits

0x8f67,	// (0x000157fd) status_pane_g5

0x58ce,	// (0x00012164) popup_keymap_window

0x8f2d,	// (0x000157c3) status_icon_pane

0xe6e5,	// (0x0001af7b) cell_ai5_widget_pane_g3_ParamLimits

0xe6ff,	// (0x0001af95) cell_ai5_widget_pane_g4_ParamLimits

0xe70f,	// (0x0001afa5) cell_ai5_widget_pane_g5_ParamLimits

0xe737,	// (0x0001afcd) cell_ai5_widget_pane_g8_ParamLimits

0xe737,	// (0x0001afcd) cell_ai5_widget_pane_g8

0xe74b,	// (0x0001afe1) cell_ai5_widget_pane_g9_ParamLimits

0xe74b,	// (0x0001afe1) cell_ai5_widget_pane_g9

0xe75f,	// (0x0001aff5) cell_ai5_widget_pane_g10_ParamLimits

0xe75f,	// (0x0001aff5) cell_ai5_widget_pane_g10

0xeaf8,	// (0x0001b38e) status_icon_pane_g1

0x3785,	// (0x0001001b) bg_popup_sub_pane_cp13

0xeb00,	// (0x0001b396) popup_keymap_window_t1

0x8b3f,	// (0x000153d5) control_pane_g6_ParamLimits

0x8b3f,	// (0x000153d5) control_pane_g6

0x8b4c,	// (0x000153e2) control_pane_g7_ParamLimits

0x8b4c,	// (0x000153e2) control_pane_g7

0x8b59,	// (0x000153ef) control_pane_g8_ParamLimits

0x8b59,	// (0x000153ef) control_pane_g8

0xea1b,	// (0x0001b2b1) dt_sta_controll_pane_ParamLimits

0xea28,	// (0x0001b2be) dt_sta_indi_pane_ParamLimits

0xea39,	// (0x0001b2cf) dt_sta_title_pane_ParamLimits

0x3fe9,	// (0x0001087f) aid_size_touch_scroll_bar_cale

0x4ecb,	// (0x00011761) popup_discreet_window_ParamLimits

0x4ecb,	// (0x00011761) popup_discreet_window

0x4f59,	// (0x000117ef) popup_sk_window

0x9853,	// (0x000160e9) bg_popup_sub_pane_cp28_ParamLimits

0x9853,	// (0x000160e9) bg_popup_sub_pane_cp28

0xeb0e,	// (0x0001b3a4) popup_discreet_window_g1_ParamLimits

0xeb0e,	// (0x0001b3a4) popup_discreet_window_g1

0xeb2e,	// (0x0001b3c4) popup_discreet_window_t1_ParamLimits

0xeb2e,	// (0x0001b3c4) popup_discreet_window_t1

0xeb4c,	// (0x0001b3e2) popup_discreet_window_t2_ParamLimits

0xeb4c,	// (0x0001b3e2) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0001c726) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0001c726) popup_discreet_window_t

0x6f02,	// (0x00013798) popup_sk_window_g1

0x6f0c,	// (0x000137a2) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0001c72d) popup_sk_window_g

0x6f14,	// (0x000137aa) popup_sk_window_t1

0x6f22,	// (0x000137b8) popup_sk_window_t1_copy1

0xe6d1,	// (0x0001af67) cell_ai5_widget_pane_g2_ParamLimits

0xe86d,	// (0x0001b103) cell_ai5_widget_pane_t9_ParamLimits

0xe86d,	// (0x0001b103) cell_ai5_widget_pane_t9

0x3785,	// (0x0001001b) main_fep_fshwr2_pane

0x6f30,	// (0x000137c6) aid_fshwr2_btn_pane

0x6f3c,	// (0x000137d2) aid_fshwr2_syb_pane

0x6f4e,	// (0x000137e4) aid_fshwr2_txt_pane

0x6f5a,	// (0x000137f0) fshwr2_func_candi_pane

0x6f72,	// (0x00013808) fshwr2_hwr_syb_pane

0x6f88,	// (0x0001381e) fshwr2_icf_pane

0x4dee,	// (0x00011684) fshwr2_icf_bg_pane

0x6fbc,	// (0x00013852) fshwr2_icf_pane_t1_ParamLimits

0x6fbc,	// (0x00013852) fshwr2_icf_pane_t1

0x81be,	// (0x00014a54) fshwr2_func_candi_pane_g1

0xeb9e,	// (0x0001b434) fshwr2_func_candi_row_pane_ParamLimits

0xeb9e,	// (0x0001b434) fshwr2_func_candi_row_pane

0x6fd4,	// (0x0001386a) cell_fshwr2_syb_pane_ParamLimits

0x6fd4,	// (0x0001386a) cell_fshwr2_syb_pane

0x6ff5,	// (0x0001388b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6ff5,	// (0x0001388b) fshwr2_hwr_syb_pane_g1

0x4dee,	// (0x00011684) bg_popup_call_pane_cp01

0x7003,	// (0x00013899) fshwr2_func_candi_cell_pane_ParamLimits

0x7003,	// (0x00013899) fshwr2_func_candi_cell_pane

0x9eca,	// (0x00016760) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9eca,	// (0x00016760) fshwr2_func_candi_cell_bg_pane

0x7054,	// (0x000138ea) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7054,	// (0x000138ea) fshwr2_func_candi_cell_pane_g1

0x7074,	// (0x0001390a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7074,	// (0x0001390a) fshwr2_func_candi_cell_pane_t1

0x4dee,	// (0x00011684) bg_button_pane_cp08

0x8b96,	// (0x0001542c) cell_fshwr2_syb_bg_pane

0x7087,	// (0x0001391d) cell_fshwr2_syb_bg_pane_g1

0x709b,	// (0x00013931) cell_fshwr2_syb_bg_pane_t1

0x413a,	// (0x000109d0) main_tmo_pane

0xa377,	// (0x00016c0d) uni_indicator_pane_g1_ParamLimits

0xa38d,	// (0x00016c23) uni_indicator_pane_g2_ParamLimits

0xa3a3,	// (0x00016c39) uni_indicator_pane_g3_ParamLimits

0xa3b6,	// (0x00016c4c) uni_indicator_pane_g4_ParamLimits

0xa3b6,	// (0x00016c4c) uni_indicator_pane_g4

0xa3ca,	// (0x00016c60) uni_indicator_pane_g5_ParamLimits

0xa3ca,	// (0x00016c60) uni_indicator_pane_g5

0xa3ca,	// (0x00016c60) uni_indicator_pane_g6_ParamLimits

0xa3ca,	// (0x00016c60) uni_indicator_pane_g6

0xf8f7,	// (0x0001c18d) uni_indicator_pane_g_ParamLimits

0xd4e1,	// (0x00019d77) popup_tmo_note_window_ParamLimits

0xd4e1,	// (0x00019d77) popup_tmo_note_window

0x6770,	// (0x00013006) fshwr2_bg_pane

0x7065,	// (0x000138fb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7065,	// (0x000138fb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0001c732) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0001c732) fshwr2_func_candi_cell_pane_g

0x64b8,	// (0x00012d4e) bg_popup_window_pane_cp01

0x70ae,	// (0x00013944) bg_popup_window_pane_g1_cp01

0xebc1,	// (0x0001b457) bg_popup_window_pane_cp22_ParamLimits

0xebc1,	// (0x0001b457) bg_popup_window_pane_cp22

0xebcf,	// (0x0001b465) listscroll_tmo_link_pane_ParamLimits

0xebcf,	// (0x0001b465) listscroll_tmo_link_pane

0xec0f,	// (0x0001b4a5) popup_tmo_note_window_g1_ParamLimits

0xec0f,	// (0x0001b4a5) popup_tmo_note_window_g1

0xec1c,	// (0x0001b4b2) tmo_note_info_pane_ParamLimits

0xec1c,	// (0x0001b4b2) tmo_note_info_pane

0xec36,	// (0x0001b4cc) list_tmo_note_info_pane_g1_ParamLimits

0xec36,	// (0x0001b4cc) list_tmo_note_info_pane_g1

0xec4d,	// (0x0001b4e3) list_tmo_note_info_pane_g2_ParamLimits

0xec4d,	// (0x0001b4e3) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0001c737) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0001c737) list_tmo_note_info_pane_g

0xec69,	// (0x0001b4ff) list_tmo_note_info_text_pane_ParamLimits

0xec69,	// (0x0001b4ff) list_tmo_note_info_text_pane

0xecee,	// (0x0001b584) list_tmo_link_pane

0xecfb,	// (0x0001b591) scroll_pane_cp20

0xed08,	// (0x0001b59e) list_single_tmo_link_pane_ParamLimits

0xed08,	// (0x0001b59e) list_single_tmo_link_pane

0xed18,	// (0x0001b5ae) list_single_tmo_link_pane_t1

0xed26,	// (0x0001b5bc) list_tmo_note_info_text_pane_t1_ParamLimits

0xed26,	// (0x0001b5bc) list_tmo_note_info_text_pane_t1

0x7c05,	// (0x0001449b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7c05,	// (0x0001449b) aid_size_touch_scroll_bar_cp01

0x7b18,	// (0x000143ae) aid_size_touch_slider_marker

0x4f41,	// (0x000117d7) popup_settings_window_ParamLimits

0x4f41,	// (0x000117d7) popup_settings_window

0x8bca,	// (0x00015460) popup_candi_list_indi_window

0x8c1c,	// (0x000154b2) aid_touch_navi_pane_ParamLimits

0x66c9,	// (0x00012f5f) rs_clock_indi_pane

0x66d2,	// (0x00012f68) sctrl_sk_bottom_pane_ParamLimits

0x66e3,	// (0x00012f79) sctrl_sk_top_pane_ParamLimits

0x67e8,	// (0x0001307e) popup_fep_tooltip_window

0xe647,	// (0x0001aedd) aid_size_cell_widget_grid_ParamLimits

0xe6bc,	// (0x0001af52) cell_ai5_widget_pane_g1_ParamLimits

0xe6bc,	// (0x0001af52) cell_ai5_widget_pane_g1

0xe71f,	// (0x0001afb5) cell_ai5_widget_pane_g6_ParamLimits

0xe72b,	// (0x0001afc1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0001c6ab) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0001c6ab) cell_ai5_widget_pane_g

0xe89c,	// (0x0001b132) cell_ai5_widget_pane_t10_ParamLimits

0xe89c,	// (0x0001b132) cell_ai5_widget_pane_t10

0xe8df,	// (0x0001b175) grid_ai5_widget_pane_ParamLimits

0xe977,	// (0x0001b20d) cell_contacts_ai5_widget_pane_ParamLimits

0xe977,	// (0x0001b20d) cell_contacts_ai5_widget_pane

0xeb61,	// (0x0001b3f7) popup_discreet_window_t3_ParamLimits

0xeb61,	// (0x0001b3f7) popup_discreet_window_t3

0x6fa4,	// (0x0001383a) popup_fshwr2_char_preview_window_ParamLimits

0x6fa4,	// (0x0001383a) popup_fshwr2_char_preview_window

0xec87,	// (0x0001b51d) tmo_note_info_pane_t1

0xec9c,	// (0x0001b532) tmo_note_info_pane_t2

0xecb5,	// (0x0001b54b) tmo_note_info_pane_t3

0xecca,	// (0x0001b560) tmo_note_info_pane_t4

0xecdc,	// (0x0001b572) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0001c73c) tmo_note_info_pane_t

0xecee,	// (0x0001b584) list_tmo_link_pane_ParamLimits

0xecfb,	// (0x0001b591) scroll_pane_cp20_ParamLimits

0x4dee,	// (0x00011684) bg_popup_fep_char_preview_window_cp01

0xed3f,	// (0x0001b5d5) popup_fshwr2_char_preview_window_t1

0xed4d,	// (0x0001b5e3) popup_candi_list_indi_window_g1

0xed56,	// (0x0001b5ec) bg_cell_contacts_ai5_widget_pane

0xed62,	// (0x0001b5f8) cell_contacts_ai5_widget_pane_g1

0xed77,	// (0x0001b60d) cell_contacts_ai5_widget_pane_g2

0xed83,	// (0x0001b619) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0001c747) cell_contacts_ai5_widget_pane_g

0xed8f,	// (0x0001b625) cell_contacts_ai5_widget_pane_t1

0x413a,	// (0x000109d0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee06,	// (0x0001b69c) settings_container_pane

0x8867,	// (0x000150fd) listscroll_set_pane_copy1

0xb061,	// (0x000178f7) scroll_pane_cp121_copy1

0xee12,	// (0x0001b6a8) set_content_pane_copy1

0xee1a,	// (0x0001b6b0) aid_height_set_list_copy1_ParamLimits

0xee1a,	// (0x0001b6b0) aid_height_set_list_copy1

0xa5f2,	// (0x00016e88) aid_size_parent_copy1_ParamLimits

0xa5f2,	// (0x00016e88) aid_size_parent_copy1

0xee26,	// (0x0001b6bc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee26,	// (0x0001b6bc) button_value_adjust_pane_cp6_copy1

0x8b96,	// (0x0001542c) list_highlight_pane_cp2_copy1_ParamLimits

0x8b96,	// (0x0001542c) list_highlight_pane_cp2_copy1

0xee3a,	// (0x0001b6d0) list_set_pane_copy1_ParamLimits

0xee3a,	// (0x0001b6d0) list_set_pane_copy1

0xeda1,	// (0x0001b637) main_pane_set_t1_copy1_ParamLimits

0xeda1,	// (0x0001b637) main_pane_set_t1_copy1

0xeddb,	// (0x0001b671) main_pane_set_t2_copy1_ParamLimits

0xeddb,	// (0x0001b671) main_pane_set_t2_copy1

0xeefb,	// (0x0001b791) main_pane_set_t3_copy1

0xef09,	// (0x0001b79f) main_pane_set_t4_copy1

0xedfa,	// (0x0001b690) set_content_pane_g1_copy1_ParamLimits

0xedfa,	// (0x0001b690) set_content_pane_g1_copy1

0xef17,	// (0x0001b7ad) setting_code_pane_copy1

0xef1f,	// (0x0001b7b5) setting_slider_graphic_pane_copy1

0xef1f,	// (0x0001b7b5) setting_slider_pane_copy1

0xef27,	// (0x0001b7bd) setting_text_pane_copy1

0xef27,	// (0x0001b7bd) setting_volume_pane_copy1

0xef17,	// (0x0001b7ad) settings_code_pane_cp2_copy1

0xef2f,	// (0x0001b7c5) settings_code_pane_cp_copy1_ParamLimits

0xef2f,	// (0x0001b7c5) settings_code_pane_cp_copy1

0x70b7,	// (0x0001394d) volume_set_pane_copy1

0xef43,	// (0x0001b7d9) volume_set_pane_g10_copy1

0xef4f,	// (0x0001b7e5) volume_set_pane_g1_copy1

0xef59,	// (0x0001b7ef) volume_set_pane_g2_copy1

0xef63,	// (0x0001b7f9) volume_set_pane_g3_copy1

0xef6d,	// (0x0001b803) volume_set_pane_g4_copy1

0xef77,	// (0x0001b80d) volume_set_pane_g5_copy1

0xef81,	// (0x0001b817) volume_set_pane_g6_copy1

0xef8b,	// (0x0001b821) volume_set_pane_g7_copy1

0xef95,	// (0x0001b82b) volume_set_pane_g8_copy1

0xef9f,	// (0x0001b835) volume_set_pane_g9_copy1

0x39c2,	// (0x00010258) bg_set_opt_pane_cp_copy1_ParamLimits

0x39c2,	// (0x00010258) bg_set_opt_pane_cp_copy1

0x70c3,	// (0x00013959) setting_slider_pane_t1_copy1_ParamLimits

0x70c3,	// (0x00013959) setting_slider_pane_t1_copy1

0x70e2,	// (0x00013978) setting_slider_pane_t2_copy1_ParamLimits

0x70e2,	// (0x00013978) setting_slider_pane_t2_copy1

0x70fc,	// (0x00013992) setting_slider_pane_t3_copy1_ParamLimits

0x70fc,	// (0x00013992) setting_slider_pane_t3_copy1

0x7114,	// (0x000139aa) slider_set_pane_copy1_ParamLimits

0x7114,	// (0x000139aa) slider_set_pane_copy1

0x41f5,	// (0x00010a8b) set_opt_bg_pane_g1_copy2

0x41fd,	// (0x00010a93) set_opt_bg_pane_g2_copy2

0xefab,	// (0x0001b841) set_opt_bg_pane_g3_copy2

0x420d,	// (0x00010aa3) set_opt_bg_pane_g4_copy2

0x4215,	// (0x00010aab) set_opt_bg_pane_g5_copy2

0x421d,	// (0x00010ab3) set_opt_bg_pane_g6_copy2

0xefb5,	// (0x0001b84b) set_opt_bg_pane_g7_copy2

0xefbf,	// (0x0001b855) set_opt_bg_pane_g8_copy2

0xefc9,	// (0x0001b85f) set_opt_bg_pane_g9_copy2

0x712a,	// (0x000139c0) aid_size_touch_slider_mark_copy1_ParamLimits

0x712a,	// (0x000139c0) aid_size_touch_slider_mark_copy1

0xefd3,	// (0x0001b869) slider_set_pane_g1_copy1

0x713e,	// (0x000139d4) slider_set_pane_g2_copy1

0x60e3,	// (0x00012979) slider_set_pane_g3_copy1_ParamLimits

0x60e3,	// (0x00012979) slider_set_pane_g3_copy1

0x60f7,	// (0x0001298d) slider_set_pane_g4_copy1_ParamLimits

0x60f7,	// (0x0001298d) slider_set_pane_g4_copy1

0x610f,	// (0x000129a5) slider_set_pane_g5_copy1_ParamLimits

0x610f,	// (0x000129a5) slider_set_pane_g5_copy1

0x60e3,	// (0x00012979) slider_set_pane_g6_copy1_ParamLimits

0x60e3,	// (0x00012979) slider_set_pane_g6_copy1

0x7146,	// (0x000139dc) slider_set_pane_g7_copy1_ParamLimits

0x7146,	// (0x000139dc) slider_set_pane_g7_copy1

0x3908,	// (0x0001019e) bg_set_opt_pane_cp2_copy1

0xefdc,	// (0x0001b872) setting_slider_graphic_pane_g1_copy1

0xefe5,	// (0x0001b87b) setting_slider_graphic_pane_t1_copy1

0xeff5,	// (0x0001b88b) setting_slider_graphic_pane_t2_copy1

0xf005,	// (0x0001b89b) slider_set_pane_cp_copy1

0xf015,	// (0x0001b8ab) input_focus_pane_cp1_copy1

0xf01e,	// (0x0001b8b4) list_set_text_pane_copy1

0xf026,	// (0x0001b8bc) setting_text_pane_g1_copy1

0x3a70,	// (0x00010306) set_text_pane_t1_copy1

0xf015,	// (0x0001b8ab) input_focus_pane_cp2_copy1

0xf026,	// (0x0001b8bc) setting_code_pane_g1_copy1

0xf02f,	// (0x0001b8c5) setting_code_pane_t1_copy1

0xae66,	// (0x000176fc) list_set_graphic_pane_copy1

0x3908,	// (0x0001019e) bg_set_opt_pane_cp4_copy1

0x8556,	// (0x00014dec) list_set_graphic_pane_g1_copy1_ParamLimits

0x8556,	// (0x00014dec) list_set_graphic_pane_g1_copy1

0xf03d,	// (0x0001b8d3) list_set_graphic_pane_g2_copy1

0x856e,	// (0x00014e04) list_set_graphic_pane_t1_copy1_ParamLimits

0x856e,	// (0x00014e04) list_set_graphic_pane_t1_copy1

0xbc66,	// (0x000184fc) rs_clock_indi_pane_g1

0xf045,	// (0x0001b8db) rs_clock_indi_pane_t1

0xf053,	// (0x0001b8e9) rs_indi_pane

0xf05b,	// (0x0001b8f1) rs_indi_pane_g1

0xf064,	// (0x0001b8fa) rs_indi_pane_g2

0xf06d,	// (0x0001b903) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0001c74e) rs_indi_pane_g

0x8867,	// (0x000150fd) bg_popup_preview_window_pane_cp03

0xf076,	// (0x0001b90c) popup_fep_tooltip_window_t1

0xcb2f,	// (0x000193c5) popup_note2_window_g2_ParamLimits

0xcb2f,	// (0x000193c5) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0001c4db) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0001c4db) popup_note2_window_g

0xd132,	// (0x000199c8) bg_popup_sub_pane_cp11_ParamLimits

0xd13f,	// (0x000199d5) cell_ai3_links_pane_g1_ParamLimits

0xd156,	// (0x000199ec) cell_ai3_links_pane_t1

0x3a70,	// (0x00010306) set_text_pane_t1_copy1_ParamLimits

0x8774,	// (0x0001500a) cell_graphic_popup_pane_cp2_ParamLimits

0x8774,	// (0x0001500a) cell_graphic_popup_pane_cp2

0xf084,	// (0x0001b91a) cell_graphic_popup_pane_g1_cp2

0x3dfc,	// (0x00010692) cell_graphic_popup_pane_g2_cp2

0xf08c,	// (0x0001b922) cell_graphic_popup_pane_g3_cp2

0xf094,	// (0x0001b92a) cell_graphic_popup_pane_t2_cp2

0x3e0d,	// (0x000106a3) grid_highlight_pane_cp3_cp2

0x7f00,	// (0x00014796) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x413a,	// (0x000109d0) main_tmo_pane_ParamLimits

0xd4d5,	// (0x00019d6b) popup_tmo_big_image_note_window

0xe6ab,	// (0x0001af41) cell_ai5_widget_list_pane

0xe6b3,	// (0x0001af49) cell_ai5_widget_lrg_icon_pane

0xec87,	// (0x0001b51d) tmo_note_info_pane_t1_ParamLimits

0xec9c,	// (0x0001b532) tmo_note_info_pane_t2_ParamLimits

0xecb5,	// (0x0001b54b) tmo_note_info_pane_t3_ParamLimits

0xecca,	// (0x0001b560) tmo_note_info_pane_t4_ParamLimits

0xecdc,	// (0x0001b572) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0001c73c) tmo_note_info_pane_t_ParamLimits

0xee06,	// (0x0001b69c) settings_container_pane_ParamLimits

0xf00d,	// (0x0001b8a3) indicator_popup_pane_cp5

0xf00d,	// (0x0001b8a3) indicator_popup_pane_cp6

0xae66,	// (0x000176fc) list_set_graphic_pane_copy1_ParamLimits

0x3785,	// (0x0001001b) bg_popup_window_pane_cp23

0xf0a2,	// (0x0001b938) popup_tmo_big_image_note_window_g1

0xf0ae,	// (0x0001b944) popup_tmo_big_image_note_window_t1

0xf0be,	// (0x0001b954) popup_tmo_big_image_note_window_t2

0xf0ce,	// (0x0001b964) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0001c755) popup_tmo_big_image_note_window_t

0xbc66,	// (0x000184fc) cell_ai5_widget_lrg_icon_pane_g1

0xf0de,	// (0x0001b974) cell_ai5_widget_lrg_icon_pane_t1

0xf0ec,	// (0x0001b982) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ec,	// (0x0001b982) cell_ai5_widget_list_row_pane

0xf104,	// (0x0001b99a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf104,	// (0x0001b99a) cell_ai5_widget_list_row_pane_g1

0xf111,	// (0x0001b9a7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf111,	// (0x0001b9a7) cell_ai5_widget_list_row_pane_t1

0xf13c,	// (0x0001b9d2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13c,	// (0x0001b9d2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0001c75c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0001c75c) cell_ai5_widget_list_row_pane_t

0x4dee,	// (0x00011684) main_fep_vtchi_ss_pane

0xf18c,	// (0x0001ba22) popup_fep_char_pre_window

0xf194,	// (0x0001ba2a) popup_fep_ituss_window

0xf1c0,	// (0x0001ba56) popup_fep_vkbss_window

0x8b96,	// (0x0001542c) grid_vkbss_keypad_pane_ParamLimits

0x8b96,	// (0x0001542c) grid_vkbss_keypad_pane

0xf202,	// (0x0001ba98) ituss_keypad_pane

0x7168,	// (0x000139fe) aid_vkbss_key_offset_ParamLimits

0x7168,	// (0x000139fe) aid_vkbss_key_offset

0x7174,	// (0x00013a0a) cell_vkbss_key_pane_ParamLimits

0x7174,	// (0x00013a0a) cell_vkbss_key_pane

0xf20e,	// (0x0001baa4) bg_cell_vkbss_key_g1_ParamLimits

0xf20e,	// (0x0001baa4) bg_cell_vkbss_key_g1

0xf21a,	// (0x0001bab0) cell_vkbss_key_3p_pane_ParamLimits

0xf21a,	// (0x0001bab0) cell_vkbss_key_3p_pane

0xf250,	// (0x0001bae6) cell_vkbss_key_g1_ParamLimits

0xf250,	// (0x0001bae6) cell_vkbss_key_g1

0xf286,	// (0x0001bb1c) cell_vkbss_key_t1_ParamLimits

0xf286,	// (0x0001bb1c) cell_vkbss_key_t1

0x71ae,	// (0x00013a44) cell_ituss_key_pane_ParamLimits

0x71ae,	// (0x00013a44) cell_ituss_key_pane

0xf2e2,	// (0x0001bb78) bg_cell_ituss_key_g1_ParamLimits

0xf2e2,	// (0x0001bb78) bg_cell_ituss_key_g1

0xf2ee,	// (0x0001bb84) cell_ituss_key_pane_g1_ParamLimits

0xf2ee,	// (0x0001bb84) cell_ituss_key_pane_g1

0x71bf,	// (0x00013a55) cell_ituss_key_pane_g2_ParamLimits

0x71bf,	// (0x00013a55) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x0001c763) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x0001c763) cell_ituss_key_pane_g

0x7243,	// (0x00013ad9) cell_ituss_key_t1_ParamLimits

0x7243,	// (0x00013ad9) cell_ituss_key_t1

0x727d,	// (0x00013b13) cell_ituss_key_t2_ParamLimits

0x727d,	// (0x00013b13) cell_ituss_key_t2

0x72ae,	// (0x00013b44) cell_ituss_key_t3_ParamLimits

0x72ae,	// (0x00013b44) cell_ituss_key_t3

0x727d,	// (0x00013b13) cell_ituss_key_t4_ParamLimits

0x727d,	// (0x00013b13) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0001c770) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0001c770) cell_ituss_key_t

0xf314,	// (0x0001bbaa) cell_vkbss_key_3p_pane_g1

0xf31c,	// (0x0001bbb2) cell_vkbss_key_3p_pane_g2

0xf324,	// (0x0001bbba) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0001c77b) cell_vkbss_key_3p_pane_g

0x8867,	// (0x000150fd) bg_popup_fep_char_preview_window_cp02

0xf32c,	// (0x0001bbc2) popup_fep_char_pre_window_t1

0xe634,	// (0x0001aeca) main_ai5_sk_pane

0xed56,	// (0x0001b5ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed62,	// (0x0001b5f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed77,	// (0x0001b60d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed83,	// (0x0001b619) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0001c747) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed8f,	// (0x0001b625) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x413a,	// (0x000109d0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf33a,	// (0x0001bbd0) main_ai5_sk_pane_g1

0x968b,	// (0x00015f21) popup_query_code_window_g1

0xf1aa,	// (0x0001ba40) popup_fep_vkb_icf_pane

0xf1d9,	// (0x0001ba6f) popup_fep_vtchi_icf_pane

0x8b96,	// (0x0001542c) bg_icf_pane

0x8b96,	// (0x0001542c) list_vkb_icf_pane

0xf343,	// (0x0001bbd9) bg_icf_pane_cp01

0xf356,	// (0x0001bbec) vtchi_icf_list_pane

0xf3be,	// (0x0001bc54) list_vkb_icf_pane_t1_ParamLimits

0xf3be,	// (0x0001bc54) list_vkb_icf_pane_t1

0xf3da,	// (0x0001bc70) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0001bc70) vtchi_icf_list_pane_t1

0xf194,	// (0x0001ba2a) popup_fep_ituss_window_ParamLimits

0xf1d9,	// (0x0001ba6f) popup_fep_vtchi_icf_pane_ParamLimits

0xf202,	// (0x0001ba98) ituss_keypad_pane_ParamLimits

0x715c,	// (0x000139f2) ituss_sks_pane

0x8b96,	// (0x0001542c) bg_icf_pane_ParamLimits

0xf164,	// (0x0001b9fa) icf_edit_indi_pane_ParamLimits

0xf164,	// (0x0001b9fa) icf_edit_indi_pane

0x8b96,	// (0x0001542c) list_vkb_icf_pane_ParamLimits

0xf343,	// (0x0001bbd9) bg_icf_pane_cp01_ParamLimits

0xf17f,	// (0x0001ba15) icf_edit_indi_pane_cp01_ParamLimits

0xf17f,	// (0x0001ba15) icf_edit_indi_pane_cp01

0xf35e,	// (0x0001bbf4) vtchi_query_pane

0xe4d6,	// (0x0001ad6c) icf_edit_indi_pane_g1_ParamLimits

0xe4d6,	// (0x0001ad6c) icf_edit_indi_pane_g1

0xf44a,	// (0x0001bce0) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0001bce0) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001c7a6) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001c7a6) icf_edit_indi_pane_g

0xf45e,	// (0x0001bcf4) icf_edit_indi_pane_t1

0xf3f3,	// (0x0001bc89) bg_input_focus_pane_cp042

0x3fe0,	// (0x00010876) vtchi_button_pane

0xf3fc,	// (0x0001bc92) vtchi_query_pane_t1

0xf40a,	// (0x0001bca0) vtchi_query_pane_t2

0xf418,	// (0x0001bcae) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001c795) vtchi_query_pane_t

0x4dee,	// (0x00011684) bg_button_pane_cp13

0xf426,	// (0x0001bcbc) vtchi_button_pane_g1

0x72f1,	// (0x00013b87) ituss_sks_pane_g1

0x72fc,	// (0x00013b92) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001c79c) ituss_sks_pane_g

0xf42e,	// (0x0001bcc4) ituss_sks_pane_t1

0xf43c,	// (0x0001bcd2) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001c7a1) ituss_sks_pane_t

0xb6e7,	// (0x00017f7d) indicator_nsta_pane_cp_g1

0xb6f0,	// (0x00017f86) indicator_nsta_pane_cp_g2

0xb6f8,	// (0x00017f8e) indicator_nsta_pane_cp_g3

0xb700,	// (0x00017f96) indicator_nsta_pane_cp_g4

0xb6f0,	// (0x00017f86) indicator_nsta_pane_cp_g5

0xb6f8,	// (0x00017f8e) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0001c319) indicator_nsta_pane_cp_g

0xe1f9,	// (0x0001aa8f) cell_graphic2_pane_t2_ParamLimits

0xe1f9,	// (0x0001aa8f) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x0001c632) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x0001c632) cell_graphic2_pane_t

0xe246,	// (0x0001aadc) cell_graphic2_control_pane_t1

0x827e,	// (0x00014b14) signal_pane_g3_ParamLimits

0x827e,	// (0x00014b14) signal_pane_g3

0x828d,	// (0x00014b23) signal_pane_g4_ParamLimits

0x828d,	// (0x00014b23) signal_pane_g4

0xf14e,	// (0x0001b9e4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14e,	// (0x0001b9e4) cell_ai5_widget_list_row_pane_t3

0xf302,	// (0x0001bb98) cell_ituss_key_pane_t1_ParamLimits

0xf302,	// (0x0001bb98) cell_ituss_key_pane_t1

0x92c3,	// (0x00015b59) form_field_data_wide_pane_vc_t2_ParamLimits

0x92c3,	// (0x00015b59) form_field_data_wide_pane_vc_t2

0x92d7,	// (0x00015b6d) form_field_data_wide_pane_vc_t3_ParamLimits

0x92d7,	// (0x00015b6d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0001c075) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c075) form_field_data_wide_pane_vc_t

0xb384,	// (0x00017c1a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb384,	// (0x00017c1a) form_field_slider_wide_pane_vc_t3

0xb45a,	// (0x00017cf0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb45a,	// (0x00017cf0) form_field_popup_wide_pane_vc_t2

0xb471,	// (0x00017d07) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb471,	// (0x00017d07) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0001c308) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0001c308) form_field_popup_wide_pane_vc_t

0x6f30,	// (0x000137c6) aid_fshwr2_btn_pane_ParamLimits

0x6f3c,	// (0x000137d2) aid_fshwr2_syb_pane_ParamLimits

0x6f4e,	// (0x000137e4) aid_fshwr2_txt_pane_ParamLimits

0x6770,	// (0x00013006) fshwr2_bg_pane_ParamLimits

0x6f5a,	// (0x000137f0) fshwr2_func_candi_pane_ParamLimits

0x6f72,	// (0x00013808) fshwr2_hwr_syb_pane_ParamLimits

0x6f88,	// (0x0001381e) fshwr2_icf_pane_ParamLimits

0xb2f8,	// (0x00017b8e) list_double_graphic_pane_vc_g4_ParamLimits

0xb2f8,	// (0x00017b8e) list_double_graphic_pane_vc_g4

0x71df,	// (0x00013a75) cell_ituss_key_pane_g3_ParamLimits

0x71df,	// (0x00013a75) cell_ituss_key_pane_g3

0x72df,	// (0x00013b75) cell_ituss_key_t5_ParamLimits

0x72df,	// (0x00013b75) cell_ituss_key_t5

0xf1c0,	// (0x0001ba56) popup_fep_vkbss_window_ParamLimits

0xe63e,	// (0x0001aed4) aid_cell_ai5_quarter

0xf45e,	// (0x0001bcf4) icf_edit_indi_pane_t1_ParamLimits

0x3c40,	// (0x000104d6) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3c40,	// (0x000104d6) aid_tch_indicator_popup_pane_cp2

0x3c53,	// (0x000104e9) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3c53,	// (0x000104e9) aid_tch_query_popup_data_pane_cp2

0x9633,	// (0x00015ec9) aid_tch_query_popup_pane_ParamLimits

0x9633,	// (0x00015ec9) aid_tch_query_popup_pane

0x9633,	// (0x00015ec9) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9633,	// (0x00015ec9) aid_tch_query_popup_data_pane_cp1

0x8b96,	// (0x0001542c) cell_fshwr2_syb_bg_pane_ParamLimits

0x7087,	// (0x0001391d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x709b,	// (0x00013931) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1aa,	// (0x0001ba40) popup_fep_vkb_icf_pane_ParamLimits

0x6d92,	// (0x00013628) bg_popup_fep_char_preview_window_g10

0xe773,	// (0x0001b009) cell_ai5_widget_pane_g11_ParamLimits

0xe773,	// (0x0001b009) cell_ai5_widget_pane_g11

0xe77f,	// (0x0001b015) cell_ai5_widget_pane_g12_ParamLimits

0xe77f,	// (0x0001b015) cell_ai5_widget_pane_g12

0xe78b,	// (0x0001b021) cell_ai5_widget_pane_g13_ParamLimits

0xe78b,	// (0x0001b021) cell_ai5_widget_pane_g13

0xe8bb,	// (0x0001b151) cell_ai5_widget_pane_t11_ParamLimits

0xe8bb,	// (0x0001b151) cell_ai5_widget_pane_t11

0xe8cd,	// (0x0001b163) cell_ai5_widget_pane_t12_ParamLimits

0xe8cd,	// (0x0001b163) cell_ai5_widget_pane_t12

0x71eb,	// (0x00013a81) cell_ituss_key_pane_g4_ParamLimits

0x71eb,	// (0x00013a81) cell_ituss_key_pane_g4

0x7207,	// (0x00013a9d) cell_ituss_key_pane_g5_ParamLimits

0x7207,	// (0x00013a9d) cell_ituss_key_pane_g5

0x7223,	// (0x00013ab9) cell_ituss_key_pane_g6_ParamLimits

0x7223,	// (0x00013ab9) cell_ituss_key_pane_g6

0x910e,	// (0x000159a4) bg_icf_pane_g1

0xf366,	// (0x0001bbfc) bg_icf_pane_g2

0xf372,	// (0x0001bc08) bg_icf_pane_g3

0xf37c,	// (0x0001bc12) bg_icf_pane_g4

0xf388,	// (0x0001bc1e) bg_icf_pane_g5

0xf392,	// (0x0001bc28) bg_icf_pane_g6

0xf39e,	// (0x0001bc34) bg_icf_pane_g7

0xf3a8,	// (0x0001bc3e) bg_icf_pane_g8

0xf3b4,	// (0x0001bc4a) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0001c782) bg_icf_pane_g

0xf1ef,	// (0x0001ba85) popup_hyb_candi_window_ParamLimits

0xf1ef,	// (0x0001ba85) popup_hyb_candi_window

0x9232,	// (0x00015ac8) bg_popup_sub_pane_cp01_ParamLimits

0x9232,	// (0x00015ac8) bg_popup_sub_pane_cp01

0xf477,	// (0x0001bd0d) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0001bd0d) entry_hyb_candi_pane

0xf486,	// (0x0001bd1c) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0001bd1c) grid_hyb_candi_pane

0xf49b,	// (0x0001bd31) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0001bd31) grid_hyb_phrase_pane

0xf4aa,	// (0x0001bd40) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0001bd40) cell_hyb_candi_pane

0x3fe9,	// (0x0001087f) cell_hyb_candi_scroll_pane

0x81be,	// (0x00014a54) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0001bd5c) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0001bd6a) cell_hyb_phrase_pane

0x81be,	// (0x00014a54) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0001bd73) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0001bd81) entry_hyb_candi_pane_t1

0x8867,	// (0x000150fd) input_focus_pane_cp06

0xf4f9,	// (0x0001bd8f) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0001bd97) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0001bd9f) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0001bda7) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0001bdaf) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0001bdb7) cell_hyb_candi_scroll_pane_g4
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
