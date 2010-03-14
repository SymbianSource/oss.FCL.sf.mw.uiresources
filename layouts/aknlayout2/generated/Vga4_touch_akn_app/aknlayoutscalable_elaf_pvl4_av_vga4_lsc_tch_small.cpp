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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00021390 };

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
0xb868,	// (0x0002cbf8) Screen

0xb874,	// (0x0002cc04) application_window_ParamLimits

0xb874,	// (0x0002cc04) application_window

0xe7c5,	// (0x0002fb55) screen_g1

0xb8ac,	// (0x0002cc3c) area_bottom_pane_ParamLimits

0xb8ac,	// (0x0002cc3c) area_bottom_pane

0x0cec,	// (0x0002207c) area_top_pane_ParamLimits

0x0cec,	// (0x0002207c) area_top_pane

0x0d80,	// (0x00022110) main_pane_ParamLimits

0x0d80,	// (0x00022110) main_pane

0xe7cf,	// (0x0002fb5f) misc_graphics

0xd16d,	// (0x0002e4fd) battery_pane_ParamLimits

0xd16d,	// (0x0002e4fd) battery_pane

0x53c0,	// (0x00026750) bg_status_flat_pane_g8

0x53c8,	// (0x00026758) bg_status_flat_pane_g9

0x47a0,	// (0x00025b30) context_pane_ParamLimits

0x47a0,	// (0x00025b30) context_pane

0xd2e4,	// (0x0002e674) navi_pane_ParamLimits

0xd2e4,	// (0x0002e674) navi_pane

0xd36e,	// (0x0002e6fe) signal_pane_ParamLimits

0xd36e,	// (0x0002e6fe) signal_pane

0x0008,

0xf880,	// (0x00030c10) bg_status_flat_pane_g

0xd3fe,	// (0x0002e78e) status_pane_g1_ParamLimits

0xd3fe,	// (0x0002e78e) status_pane_g1

0xd414,	// (0x0002e7a4) status_pane_g2_ParamLimits

0xd414,	// (0x0002e7a4) status_pane_g2

0x49e1,	// (0x00025d71) status_pane_g3_ParamLimits

0x49e1,	// (0x00025d71) status_pane_g3

0x0004,

0xf7b3,	// (0x00030b43) status_pane_g_ParamLimits

0xf7b3,	// (0x00030b43) status_pane_g

0xd420,	// (0x0002e7b0) title_pane_ParamLimits

0xd420,	// (0x0002e7b0) title_pane

0xd483,	// (0x0002e813) uni_indicator_pane_ParamLimits

0xd483,	// (0x0002e813) uni_indicator_pane

0x3fcd,	// (0x0002535d) bg_list_pane_ParamLimits

0x3fcd,	// (0x0002535d) bg_list_pane

0xb59d,	// (0x0002c92d) find_pane

0xc342,	// (0x0002d6d2) listscroll_app_pane_ParamLimits

0xc342,	// (0x0002d6d2) listscroll_app_pane

0x4001,	// (0x00025391) listscroll_form_pane

0xb5a5,	// (0x0002c935) listscroll_gen_pane_ParamLimits

0xb5a5,	// (0x0002c935) listscroll_gen_pane

0x4001,	// (0x00025391) listscroll_set_pane

0x5f79,	// (0x00027309) main_idle_act_pane

0x3ca9,	// (0x00025039) main_idle_trad_pane

0x3ca9,	// (0x00025039) main_list_empty_pane

0x402f,	// (0x000253bf) main_midp_pane

0x403b,	// (0x000253cb) main_pane_g1_ParamLimits

0x403b,	// (0x000253cb) main_pane_g1

0xc35c,	// (0x0002d6ec) popup_ai_message_window_ParamLimits

0xc35c,	// (0x0002d6ec) popup_ai_message_window

0xc3fc,	// (0x0002d78c) popup_fep_china_uni_window_ParamLimits

0xc3fc,	// (0x0002d78c) popup_fep_china_uni_window

0x4159,	// (0x000254e9) popup_fep_japan_candidate_window_ParamLimits

0x4159,	// (0x000254e9) popup_fep_japan_candidate_window

0x4183,	// (0x00025513) popup_fep_japan_predictive_window_ParamLimits

0x4183,	// (0x00025513) popup_fep_japan_predictive_window

0xc45c,	// (0x0002d7ec) popup_find_window

0xc479,	// (0x0002d809) popup_grid_graphic_window_ParamLimits

0xc479,	// (0x0002d809) popup_grid_graphic_window

0x41f4,	// (0x00025584) popup_large_graphic_colour_window

0xc51d,	// (0x0002d8ad) popup_menu_window_ParamLimits

0xc51d,	// (0x0002d8ad) popup_menu_window

0xc709,	// (0x0002da99) popup_note_image_window

0xc6c9,	// (0x0002da59) popup_note_wait_window_ParamLimits

0xc6c9,	// (0x0002da59) popup_note_wait_window

0xc721,	// (0x0002dab1) popup_note_window_ParamLimits

0xc721,	// (0x0002dab1) popup_note_window

0xc7cf,	// (0x0002db5f) popup_query_code_window_ParamLimits

0xc7cf,	// (0x0002db5f) popup_query_code_window

0x4460,	// (0x000257f0) popup_query_data_code_window_ParamLimits

0x4460,	// (0x000257f0) popup_query_data_code_window

0xc80f,	// (0x0002db9f) popup_query_data_window_ParamLimits

0xc80f,	// (0x0002db9f) popup_query_data_window

0xc8a3,	// (0x0002dc33) popup_query_sat_info_window_ParamLimits

0xc8a3,	// (0x0002dc33) popup_query_sat_info_window

0xc94e,	// (0x0002dcde) popup_snote_single_graphic_window_ParamLimits

0xc94e,	// (0x0002dcde) popup_snote_single_graphic_window

0xc94e,	// (0x0002dcde) popup_snote_single_text_window_ParamLimits

0xc94e,	// (0x0002dcde) popup_snote_single_text_window

0x44fb,	// (0x0002588b) popup_sub_window_general

0x4641,	// (0x000259d1) popup_window_general_ParamLimits

0x4641,	// (0x000259d1) popup_window_general

0x465a,	// (0x000259ea) power_save_pane

0xc1b0,	// (0x0002d540) control_pane_g1_ParamLimits

0xc1b0,	// (0x0002d540) control_pane_g1

0xc1d9,	// (0x0002d569) control_pane_g2_ParamLimits

0xc1d9,	// (0x0002d569) control_pane_g2

0x3f76,	// (0x00025306) control_pane_g3_ParamLimits

0x3f76,	// (0x00025306) control_pane_g3

0x0007,

0xf79b,	// (0x00030b2b) control_pane_g_ParamLimits

0xf79b,	// (0x00030b2b) control_pane_g

0xc23b,	// (0x0002d5cb) control_pane_t1_ParamLimits

0xc23b,	// (0x0002d5cb) control_pane_t1

0xc299,	// (0x0002d629) control_pane_t2_ParamLimits

0xc299,	// (0x0002d629) control_pane_t2

0x0002,

0xf7ac,	// (0x00030b3c) control_pane_t_ParamLimits

0xf7ac,	// (0x00030b3c) control_pane_t

0x3e97,	// (0x00025227) navi_navi_volume_pane_cp1

0x3ea0,	// (0x00025230) status_small_icon_pane

0x3ea8,	// (0x00025238) status_small_pane_g1_ParamLimits

0x3ea8,	// (0x00025238) status_small_pane_g1

0x3edc,	// (0x0002526c) status_small_pane_g2_ParamLimits

0x3edc,	// (0x0002526c) status_small_pane_g2

0x3ee8,	// (0x00025278) status_small_pane_g3_ParamLimits

0x3ee8,	// (0x00025278) status_small_pane_g3

0x3ef4,	// (0x00025284) status_small_pane_g4_ParamLimits

0x3ef4,	// (0x00025284) status_small_pane_g4

0x3f00,	// (0x00025290) status_small_pane_g5_ParamLimits

0x3f00,	// (0x00025290) status_small_pane_g5

0x3f0f,	// (0x0002529f) status_small_pane_g6_ParamLimits

0x3f0f,	// (0x0002529f) status_small_pane_g6

0x0007,

0xf78a,	// (0x00030b1a) status_small_pane_g_ParamLimits

0xf78a,	// (0x00030b1a) status_small_pane_g

0x3f3f,	// (0x000252cf) status_small_pane_t1

0x3f62,	// (0x000252f2) status_small_wait_pane_ParamLimits

0x3f62,	// (0x000252f2) status_small_wait_pane

0xbfe4,	// (0x0002d374) aid_levels_signal_ParamLimits

0xbfe4,	// (0x0002d374) aid_levels_signal

0xbffc,	// (0x0002d38c) signal_pane_g1_ParamLimits

0xbffc,	// (0x0002d38c) signal_pane_g1

0xc017,	// (0x0002d3a7) signal_pane_g2_ParamLimits

0xc017,	// (0x0002d3a7) signal_pane_g2

0x0003,

0xf71b,	// (0x00030aab) signal_pane_g_ParamLimits

0xf71b,	// (0x00030aab) signal_pane_g

0x377c,	// (0x00024b0c) context_pane_g1

0xba29,	// (0x0002cdb9) title_pane_g1

0xba60,	// (0x0002cdf0) title_pane_t1

0x1069,	// (0x000223f9) title_pane_t2

0x108f,	// (0x0002241f) title_pane_t3

0x0002,

0xf56f,	// (0x000308ff) title_pane_t

0xd4ab,	// (0x0002e83b) aid_levels_battery_ParamLimits

0xd4ab,	// (0x0002e83b) aid_levels_battery

0xd4c7,	// (0x0002e857) battery_pane_g1_ParamLimits

0xd4c7,	// (0x0002e857) battery_pane_g1

0xd4e4,	// (0x0002e874) battery_pane_g2_ParamLimits

0xd4e4,	// (0x0002e874) battery_pane_g2

0x0001,

0xf7be,	// (0x00030b4e) battery_pane_g_ParamLimits

0xf7be,	// (0x00030b4e) battery_pane_g

0xd728,	// (0x0002eab8) uni_indicator_pane_g1

0xd73d,	// (0x0002eacd) uni_indicator_pane_g2

0xd752,	// (0x0002eae2) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x00030cb8) uni_indicator_pane_g

0x3b17,	// (0x00024ea7) navi_icon_pane_ParamLimits

0x3b17,	// (0x00024ea7) navi_icon_pane

0x3a5e,	// (0x00024dee) navi_midp_pane

0x3b33,	// (0x00024ec3) navi_navi_pane

0x3b3d,	// (0x00024ecd) navi_text_pane_ParamLimits

0x3b3d,	// (0x00024ecd) navi_text_pane

0xe7c5,	// (0x0002fb55) status_small_wait_pane_g1

0x1563,	// (0x000228f3) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x00030cb3) status_small_wait_pane_g

0xd6c7,	// (0x0002ea57) navi_navi_icon_text_pane

0xd6cf,	// (0x0002ea5f) navi_navi_pane_g1_ParamLimits

0xd6cf,	// (0x0002ea5f) navi_navi_pane_g1

0xd6e1,	// (0x0002ea71) navi_navi_pane_g2_ParamLimits

0xd6e1,	// (0x0002ea71) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x00030c81) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x00030c81) navi_navi_pane_g

0x5a4f,	// (0x00026ddf) navi_navi_tabs_pane

0xd6f3,	// (0x0002ea83) navi_navi_text_pane

0xd6c7,	// (0x0002ea57) navi_navi_volume_pane

0xd6b5,	// (0x0002ea45) navi_text_pane_t1

0xd6a9,	// (0x0002ea39) navi_icon_pane_g1

0x5940,	// (0x00026cd0) navi_navi_text_pane_t1

0xcca8,	// (0x0002e038) navi_navi_volume_pane_g1

0xccb0,	// (0x0002e040) volume_small_pane

0xd605,	// (0x0002e995) navi_navi_icon_text_pane_g1

0xd60d,	// (0x0002e99d) navi_navi_icon_text_pane_t1

0x3b33,	// (0x00024ec3) navi_tabs_2_long_pane

0x3b33,	// (0x00024ec3) navi_tabs_2_pane

0x3b33,	// (0x00024ec3) navi_tabs_3_long_pane

0x3b33,	// (0x00024ec3) navi_tabs_3_pane

0x3b33,	// (0x00024ec3) navi_tabs_4_pane

0xcc88,	// (0x0002e018) tabs_2_active_pane_ParamLimits

0xcc88,	// (0x0002e018) tabs_2_active_pane

0xcc98,	// (0x0002e028) tabs_2_passive_pane_ParamLimits

0xcc98,	// (0x0002e028) tabs_2_passive_pane

0xcc56,	// (0x0002dfe6) tabs_3_active_pane_ParamLimits

0xcc56,	// (0x0002dfe6) tabs_3_active_pane

0xcc66,	// (0x0002dff6) tabs_3_passive_pane_ParamLimits

0xcc66,	// (0x0002dff6) tabs_3_passive_pane

0xcc77,	// (0x0002e007) tabs_3_passive_pane_cp_ParamLimits

0xcc77,	// (0x0002e007) tabs_3_passive_pane_cp

0xcc12,	// (0x0002dfa2) tabs_4_active_pane_ParamLimits

0xcc12,	// (0x0002dfa2) tabs_4_active_pane

0xcc23,	// (0x0002dfb3) tabs_4_passive_pane_ParamLimits

0xcc23,	// (0x0002dfb3) tabs_4_passive_pane

0xcc34,	// (0x0002dfc4) tabs_4_passive_pane_cp_ParamLimits

0xcc34,	// (0x0002dfc4) tabs_4_passive_pane_cp

0xcc45,	// (0x0002dfd5) tabs_4_passive_pane_cp2_ParamLimits

0xcc45,	// (0x0002dfd5) tabs_4_passive_pane_cp2

0xcbee,	// (0x0002df7e) tabs_2_long_active_pane_ParamLimits

0xcbee,	// (0x0002df7e) tabs_2_long_active_pane

0xcc00,	// (0x0002df90) tabs_2_long_passive_pane_ParamLimits

0xcc00,	// (0x0002df90) tabs_2_long_passive_pane

0xcba3,	// (0x0002df33) tabs_3_long_active_pane_ParamLimits

0xcba3,	// (0x0002df33) tabs_3_long_active_pane

0xcbbc,	// (0x0002df4c) tabs_3_long_passive_pane_ParamLimits

0xcbbc,	// (0x0002df4c) tabs_3_long_passive_pane

0xcbd5,	// (0x0002df65) tabs_3_long_passive_pane_cp_ParamLimits

0xcbd5,	// (0x0002df65) tabs_3_long_passive_pane_cp

0x2062,	// (0x000233f2) volume_small_pane_g1

0xcb52,	// (0x0002dee2) volume_small_pane_g2

0xcb5b,	// (0x0002deeb) volume_small_pane_g3

0xcb64,	// (0x0002def4) volume_small_pane_g4

0xcb6d,	// (0x0002defd) volume_small_pane_g5

0xcb76,	// (0x0002df06) volume_small_pane_g6

0xcb7f,	// (0x0002df0f) volume_small_pane_g7

0xcb88,	// (0x0002df18) volume_small_pane_g8

0xcb91,	// (0x0002df21) volume_small_pane_g9

0xcb9a,	// (0x0002df2a) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x00030c4d) volume_small_pane_g

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp2_ParamLimits

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp2

0xbaec,	// (0x0002ce7c) tabs_3_active_pane_g1

0xbaf4,	// (0x0002ce84) tabs_3_active_pane_t1

0x13ad,	// (0x0002273d) bg_passive_tab_pane_cp2_ParamLimits

0x13ad,	// (0x0002273d) bg_passive_tab_pane_cp2

0xbaec,	// (0x0002ce7c) tabs_3_passive_pane_g1

0xbaf4,	// (0x0002ce84) tabs_3_passive_pane_t1

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp3_ParamLimits

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp3

0xbb06,	// (0x0002ce96) tabs_4_active_pane_g1

0xbb0e,	// (0x0002ce9e) tabs_4_active_pane_t1

0x13ad,	// (0x0002273d) bg_passive_tab_pane_cp3_ParamLimits

0x13ad,	// (0x0002273d) bg_passive_tab_pane_cp3

0xbb06,	// (0x0002ce96) tabs_4_1_passive_pane_g1

0xbb0e,	// (0x0002ce9e) tabs_4_1_passive_pane_t1

0x402f,	// (0x000253bf) list_highlight_pane_cp2

0xd810,	// (0x0002eba0) list_set_pane_ParamLimits

0xd810,	// (0x0002eba0) list_set_pane

0xd8d8,	// (0x0002ec68) main_pane_set_t1_ParamLimits

0xd8d8,	// (0x0002ec68) main_pane_set_t1

0xd8f8,	// (0x0002ec88) main_pane_set_t2_ParamLimits

0xd8f8,	// (0x0002ec88) main_pane_set_t2

0xd90c,	// (0x0002ec9c) main_pane_set_t3_ParamLimits

0xd90c,	// (0x0002ec9c) main_pane_set_t3

0xd920,	// (0x0002ecb0) main_pane_set_t4_ParamLimits

0xd920,	// (0x0002ecb0) main_pane_set_t4

0x0003,

0xf98d,	// (0x00030d1d) main_pane_set_t_ParamLimits

0xf98d,	// (0x00030d1d) main_pane_set_t

0xd934,	// (0x0002ecc4) setting_code_pane

0x60d9,	// (0x00027469) setting_slider_graphic_pane

0x60d9,	// (0x00027469) setting_slider_pane

0x60d9,	// (0x00027469) setting_text_pane

0x60d9,	// (0x00027469) setting_volume_pane

0x10e3,	// (0x00022473) volume_set_pane

0x10a1,	// (0x00022431) bg_set_opt_pane_cp

0x10ed,	// (0x0002247d) setting_slider_pane_t1

0x1103,	// (0x00022493) setting_slider_pane_t2

0x111d,	// (0x000224ad) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00030906) setting_slider_pane_t

0x1135,	// (0x000224c5) slider_set_pane

0xe7cf,	// (0x0002fb5f) bg_set_opt_pane_cp2

0x114b,	// (0x000224db) setting_slider_graphic_pane_g1

0x1154,	// (0x000224e4) setting_slider_graphic_pane_t1

0x1164,	// (0x000224f4) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0003090d) setting_slider_graphic_pane_t

0x1174,	// (0x00022504) slider_set_pane_cp

0xe7cf,	// (0x0002fb5f) input_focus_pane_cp1

0x5f60,	// (0x000272f0) list_set_text_pane

0xe7c5,	// (0x0002fb55) setting_text_pane_g1

0xe7cf,	// (0x0002fb5f) input_focus_pane_cp2

0xe7c5,	// (0x0002fb55) setting_code_pane_g1

0x117c,	// (0x0002250c) setting_code_pane_t1

0xf52a,	// (0x000308ba) set_text_pane_t1_ParamLimits

0xf52a,	// (0x000308ba) set_text_pane_t1

0x3087,	// (0x00024417) set_opt_bg_pane_g1

0x308f,	// (0x0002441f) set_opt_bg_pane_g2

0x5f38,	// (0x000272c8) set_opt_bg_pane_g3

0x309f,	// (0x0002442f) set_opt_bg_pane_g4

0x30a7,	// (0x00024437) set_opt_bg_pane_g5

0x30af,	// (0x0002443f) set_opt_bg_pane_g6

0x5f42,	// (0x000272d2) set_opt_bg_pane_g7

0x5f4c,	// (0x000272dc) set_opt_bg_pane_g8

0x5f56,	// (0x000272e6) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x00030d0a) set_opt_bg_pane_g

0x5f2b,	// (0x000272bb) slider_set_pane_g1

0x2246,	// (0x000235d6) slider_set_pane_g2

0x0006,

0xf96b,	// (0x00030cfb) slider_set_pane_g

0x21ce,	// (0x0002355e) volume_set_pane_g1

0x21d8,	// (0x00023568) volume_set_pane_g2

0x21e2,	// (0x00023572) volume_set_pane_g3

0x21ec,	// (0x0002357c) volume_set_pane_g4

0x21f6,	// (0x00023586) volume_set_pane_g5

0x2200,	// (0x00023590) volume_set_pane_g6

0x220a,	// (0x0002359a) volume_set_pane_g7

0x2214,	// (0x000235a4) volume_set_pane_g8

0x221e,	// (0x000235ae) volume_set_pane_g9

0x2228,	// (0x000235b8) volume_set_pane_g10

0x0009,

0xf943,	// (0x00030cd3) volume_set_pane_g

0xbb20,	// (0x0002ceb0) indicator_pane_ParamLimits

0xbb20,	// (0x0002ceb0) indicator_pane

0xbb4c,	// (0x0002cedc) main_idle_pane_g2_ParamLimits

0xbb4c,	// (0x0002cedc) main_idle_pane_g2

0xbb84,	// (0x0002cf14) main_pane_idle_g1_ParamLimits

0xbb84,	// (0x0002cf14) main_pane_idle_g1

0x11cc,	// (0x0002255c) popup_clock_digital_analogue_window_ParamLimits

0x11cc,	// (0x0002255c) popup_clock_digital_analogue_window

0xbbb2,	// (0x0002cf42) soft_indicator_pane_ParamLimits

0xbbb2,	// (0x0002cf42) soft_indicator_pane

0xbbce,	// (0x0002cf5e) wallpaper_pane_ParamLimits

0xbbce,	// (0x0002cf5e) wallpaper_pane

0xe7c5,	// (0x0002fb55) wallpaper_pane_g1

0xbbe0,	// (0x0002cf70) indicator_pane_g1_ParamLimits

0xbbe0,	// (0x0002cf70) indicator_pane_g1

0x639d,	// (0x0002772d) navi_navi_icon_text_pane_srt_g1

0x1220,	// (0x000225b0) soft_indicator_pane_t1

0x123a,	// (0x000225ca) aid_ps_area_pane

0xbbf9,	// (0x0002cf89) aid_ps_clock_pane

0x1259,	// (0x000225e9) aid_ps_indicator_pane

0x1265,	// (0x000225f5) indicator_ps_pane_ParamLimits

0x1265,	// (0x000225f5) indicator_ps_pane

0x1274,	// (0x00022604) power_save_pane_g1_ParamLimits

0x1274,	// (0x00022604) power_save_pane_g1

0x1280,	// (0x00022610) power_save_pane_g2_ParamLimits

0x1280,	// (0x00022610) power_save_pane_g2

0x0be0,	// (0x00021f70) aid_navinavi_width_pane

0x123a,	// (0x000225ca) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00030912) power_save_pane_g_ParamLimits

0xf582,	// (0x00030912) power_save_pane_g

0x128e,	// (0x0002261e) power_save_pane_t1_ParamLimits

0x128e,	// (0x0002261e) power_save_pane_t1

0xbbf9,	// (0x0002cf89) aid_ps_clock_pane_ParamLimits

0x1259,	// (0x000225e9) aid_ps_indicator_pane_ParamLimits

0x12a0,	// (0x00022630) power_save_pane_t4_ParamLimits

0x12a0,	// (0x00022630) power_save_pane_t4

0x0001,

0xf587,	// (0x00030917) power_save_pane_t_ParamLimits

0xf587,	// (0x00030917) power_save_pane_t

0x12ca,	// (0x0002265a) power_save_t3_ParamLimits

0x12ca,	// (0x0002265a) power_save_t3

0x12b5,	// (0x00022645) power_save_t2_ParamLimits

0x12b5,	// (0x00022645) power_save_t2

0x12df,	// (0x0002266f) indicator_ps_pane_g1

0xbc07,	// (0x0002cf97) ai_gene_pane_ParamLimits

0xbc07,	// (0x0002cf97) ai_gene_pane

0xbc1e,	// (0x0002cfae) ai_links_pane_ParamLimits

0xbc1e,	// (0x0002cfae) ai_links_pane

0xbc36,	// (0x0002cfc6) indicator_pane_cp1_ParamLimits

0xbc36,	// (0x0002cfc6) indicator_pane_cp1

0xbc45,	// (0x0002cfd5) main_pane_idle_g1_cp_ParamLimits

0xbc45,	// (0x0002cfd5) main_pane_idle_g1_cp

0x1318,	// (0x000226a8) popup_ai_links_title_window

0xbc5d,	// (0x0002cfed) soft_indicator_pane_cp1_ParamLimits

0xbc5d,	// (0x0002cfed) soft_indicator_pane_cp1

0x5cfe,	// (0x0002708e) ai_links_pane_g1

0x5d07,	// (0x00027097) grid_ai_links_pane

0xd71f,	// (0x0002eaaf) ai_gene_pane_1

0x5cec,	// (0x0002707c) ai_gene_pane_2

0x5cf5,	// (0x00027085) list_highlight_pane_cp4

0xd6fb,	// (0x0002ea8b) cell_ai_link_pane_ParamLimits

0xd6fb,	// (0x0002ea8b) cell_ai_link_pane

0x5cbb,	// (0x0002704b) cell_ai_link_pane_g1

0x1563,	// (0x000228f3) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x00030cae) cell_ai_link_pane_g

0xe7cf,	// (0x0002fb5f) grid_highlight_cp2

0xe7cf,	// (0x0002fb5f) bg_popup_sub_pane_cp1

0x133b,	// (0x000226cb) popup_ai_links_title_window_t1

0x5c07,	// (0x00026f97) ai_gene_pane_1_g1_ParamLimits

0x5c07,	// (0x00026f97) ai_gene_pane_1_g1

0x5c13,	// (0x00026fa3) ai_gene_pane_1_g2_ParamLimits

0x5c13,	// (0x00026fa3) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x00030ca4) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x00030ca4) ai_gene_pane_1_g

0x5c20,	// (0x00026fb0) ai_gene_pane_1_t1_ParamLimits

0x5c20,	// (0x00026fb0) ai_gene_pane_1_t1

0x5c54,	// (0x00026fe4) grid_ai_soft_ind_pane

0x5bf2,	// (0x00026f82) ai_gene_pane_2_t1_ParamLimits

0x5bf2,	// (0x00026f82) ai_gene_pane_2_t1

0xbc71,	// (0x0002d001) main_pane_empty_t1_ParamLimits

0xbc71,	// (0x0002d001) main_pane_empty_t1

0xbc89,	// (0x0002d019) main_pane_empty_t2_ParamLimits

0xbc89,	// (0x0002d019) main_pane_empty_t2

0xbc9e,	// (0x0002d02e) main_pane_empty_t3_ParamLimits

0xbc9e,	// (0x0002d02e) main_pane_empty_t3

0xbcb0,	// (0x0002d040) main_pane_empty_t4_ParamLimits

0xbcb0,	// (0x0002d040) main_pane_empty_t4

0xbcc2,	// (0x0002d052) main_pane_empty_t5_ParamLimits

0xbcc2,	// (0x0002d052) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0003091c) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0003091c) main_pane_empty_t

0x30d8,	// (0x00024468) bg_popup_window_pane_ParamLimits

0x30d8,	// (0x00024468) bg_popup_window_pane

0x594e,	// (0x00026cde) find_popup_pane_cp2_ParamLimits

0x594e,	// (0x00026cde) find_popup_pane_cp2

0x595a,	// (0x00026cea) heading_pane_ParamLimits

0x595a,	// (0x00026cea) heading_pane

0xe7cf,	// (0x0002fb5f) bg_popup_sub_pane

0xd62a,	// (0x0002e9ba) bg_popup_window_pane_g1_ParamLimits

0xd62a,	// (0x0002e9ba) bg_popup_window_pane_g1

0xd639,	// (0x0002e9c9) bg_popup_window_pane_g2_ParamLimits

0xd639,	// (0x0002e9c9) bg_popup_window_pane_g2

0xd645,	// (0x0002e9d5) bg_popup_window_pane_g3_ParamLimits

0xd645,	// (0x0002e9d5) bg_popup_window_pane_g3

0xd651,	// (0x0002e9e1) bg_popup_window_pane_g4_ParamLimits

0xd651,	// (0x0002e9e1) bg_popup_window_pane_g4

0xd660,	// (0x0002e9f0) bg_popup_window_pane_g5_ParamLimits

0xd660,	// (0x0002e9f0) bg_popup_window_pane_g5

0xd670,	// (0x0002ea00) bg_popup_window_pane_g6_ParamLimits

0xd670,	// (0x0002ea00) bg_popup_window_pane_g6

0xd67c,	// (0x0002ea0c) bg_popup_window_pane_g7_ParamLimits

0xd67c,	// (0x0002ea0c) bg_popup_window_pane_g7

0xd68b,	// (0x0002ea1b) bg_popup_window_pane_g8_ParamLimits

0xd68b,	// (0x0002ea1b) bg_popup_window_pane_g8

0xd69a,	// (0x0002ea2a) bg_popup_window_pane_g9_ParamLimits

0xd69a,	// (0x0002ea2a) bg_popup_window_pane_g9

0x5934,	// (0x00026cc4) bg_popup_window_pane_g10_ParamLimits

0x5934,	// (0x00026cc4) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x00030c6c) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x00030c6c) bg_popup_window_pane_g

0x585d,	// (0x00026bed) bg_popup_heading_pane_ParamLimits

0x585d,	// (0x00026bed) bg_popup_heading_pane

0x22ce,	// (0x0002365e) tabs_4_passive_pane_cp_srt_ParamLimits

0x22ce,	// (0x0002365e) tabs_4_passive_pane_cp_srt

0x22e0,	// (0x00023670) tabs_4_passive_pane_srt_ParamLimits

0x5871,	// (0x00026c01) heading_pane_g2

0x22e0,	// (0x00023670) tabs_4_passive_pane_srt

0x4c5e,	// (0x00025fee) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4c5e,	// (0x00025fee) bg_passive_tab_pane_cp3_srt

0x5879,	// (0x00026c09) heading_pane_t1_ParamLimits

0x5879,	// (0x00026c09) heading_pane_t1

0x5890,	// (0x00026c20) heading_pane_t2_ParamLimits

0x5890,	// (0x00026c20) heading_pane_t2

0x0001,

0xf8d7,	// (0x00030c67) heading_pane_t_ParamLimits

0xf8d7,	// (0x00030c67) heading_pane_t

0x5388,	// (0x00026718) bg_popup_heading_pane_g1

0x5437,	// (0x000267c7) bg_popup_heading_pane_g2

0x5441,	// (0x000267d1) bg_popup_heading_pane_g3

0x544b,	// (0x000267db) bg_popup_heading_pane_g4

0x5455,	// (0x000267e5) bg_popup_heading_pane_g5

0x545f,	// (0x000267ef) bg_popup_heading_pane_g6

0x5467,	// (0x000267f7) bg_popup_heading_pane_g7

0x546f,	// (0x000267ff) bg_popup_heading_pane_g8

0x5479,	// (0x00026809) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x00030c23) bg_popup_heading_pane_g

0x4b6c,	// (0x00025efc) bg_popup_sub_pane_g1

0x4b74,	// (0x00025f04) bg_popup_sub_pane_g2

0x4b7c,	// (0x00025f0c) bg_popup_sub_pane_g3

0x4b84,	// (0x00025f14) bg_popup_sub_pane_g4

0x4b8c,	// (0x00025f1c) bg_popup_sub_pane_g5

0x4b94,	// (0x00025f24) bg_popup_sub_pane_g6

0x4b9c,	// (0x00025f2c) bg_popup_sub_pane_g7

0x4ba4,	// (0x00025f34) bg_popup_sub_pane_g8

0x4bac,	// (0x00025f3c) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x00030bfd) bg_popup_sub_pane_g

0x13ad,	// (0x0002273d) bg_popup_window_pane_cp5_ParamLimits

0x13ad,	// (0x0002273d) bg_popup_window_pane_cp5

0x13c9,	// (0x00022759) popup_note_window_g1_ParamLimits

0x13c9,	// (0x00022759) popup_note_window_g1

0x13d5,	// (0x00022765) popup_note_window_t1_ParamLimits

0x13d5,	// (0x00022765) popup_note_window_t1

0x13eb,	// (0x0002277b) popup_note_window_t2_ParamLimits

0x13eb,	// (0x0002277b) popup_note_window_t2

0x1401,	// (0x00022791) popup_note_window_t3_ParamLimits

0x1401,	// (0x00022791) popup_note_window_t3

0x1417,	// (0x000227a7) popup_note_window_t4_ParamLimits

0x1417,	// (0x000227a7) popup_note_window_t4

0x143f,	// (0x000227cf) popup_note_window_t5_ParamLimits

0x143f,	// (0x000227cf) popup_note_window_t5

0x0004,

0xf597,	// (0x00030927) popup_note_window_t_ParamLimits

0xf597,	// (0x00030927) popup_note_window_t

0x1463,	// (0x000227f3) bg_popup_window_pane_cp6_ParamLimits

0x1463,	// (0x000227f3) bg_popup_window_pane_cp6

0x5304,	// (0x00026694) popup_note_image_window_g1_ParamLimits

0x5304,	// (0x00026694) popup_note_image_window_g1

0x5310,	// (0x000266a0) popup_note_image_window_g2_ParamLimits

0x5310,	// (0x000266a0) popup_note_image_window_g2

0x0001,

0xf861,	// (0x00030bf1) popup_note_image_window_g_ParamLimits

0xf861,	// (0x00030bf1) popup_note_image_window_g

0x5329,	// (0x000266b9) popup_note_image_window_t1_ParamLimits

0x5329,	// (0x000266b9) popup_note_image_window_t1

0x5342,	// (0x000266d2) popup_note_image_window_t2_ParamLimits

0x5342,	// (0x000266d2) popup_note_image_window_t2

0x535b,	// (0x000266eb) popup_note_image_window_t3_ParamLimits

0x535b,	// (0x000266eb) popup_note_image_window_t3

0x0002,

0xf866,	// (0x00030bf6) popup_note_image_window_t_ParamLimits

0xf866,	// (0x00030bf6) popup_note_image_window_t

0x51c4,	// (0x00026554) bg_popup_window_pane_cp7_ParamLimits

0x51c4,	// (0x00026554) bg_popup_window_pane_cp7

0x51f4,	// (0x00026584) popup_note_wait_window_g1_ParamLimits

0x51f4,	// (0x00026584) popup_note_wait_window_g1

0x5200,	// (0x00026590) popup_note_wait_window_g2_ParamLimits

0x5200,	// (0x00026590) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x00030bdf) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x00030bdf) popup_note_wait_window_g

0x5218,	// (0x000265a8) popup_note_wait_window_t1_ParamLimits

0x5218,	// (0x000265a8) popup_note_wait_window_t1

0x523f,	// (0x000265cf) popup_note_wait_window_t2_ParamLimits

0x523f,	// (0x000265cf) popup_note_wait_window_t2

0x525d,	// (0x000265ed) popup_note_wait_window_t3_ParamLimits

0x525d,	// (0x000265ed) popup_note_wait_window_t3

0x5270,	// (0x00026600) popup_note_wait_window_t4_ParamLimits

0x5270,	// (0x00026600) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x00030be6) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x00030be6) popup_note_wait_window_t

0x5295,	// (0x00026625) wait_bar_pane_ParamLimits

0x5295,	// (0x00026625) wait_bar_pane

0xe7cf,	// (0x0002fb5f) wait_anim_pane

0xe7cf,	// (0x0002fb5f) wait_border_pane

0xe7c5,	// (0x0002fb55) wait_anim_pane_g1

0xe7c5,	// (0x0002fb55) wait_anim_pane_g2

0x0001,

0xf716,	// (0x00030aa6) wait_anim_pane_g

0x5168,	// (0x000264f8) wait_border_pane_g1

0x5173,	// (0x00026503) wait_border_pane_g2

0x517c,	// (0x0002650c) wait_border_pane_g3

0x0002,

0xf848,	// (0x00030bd8) wait_border_pane_g

0x4fd2,	// (0x00026362) bg_popup_window_pane_cp16_ParamLimits

0x4fd2,	// (0x00026362) bg_popup_window_pane_cp16

0x50d2,	// (0x00026462) indicator_popup_pane_cp4_ParamLimits

0x50d2,	// (0x00026462) indicator_popup_pane_cp4

0x50e6,	// (0x00026476) popup_query_data_window_t1_ParamLimits

0x50e6,	// (0x00026476) popup_query_data_window_t1

0x50f8,	// (0x00026488) popup_query_data_window_t2_ParamLimits

0x50f8,	// (0x00026488) popup_query_data_window_t2

0x5111,	// (0x000264a1) popup_query_data_window_t3_ParamLimits

0x5111,	// (0x000264a1) popup_query_data_window_t3

0x0002,

0xf841,	// (0x00030bd1) popup_query_data_window_t_ParamLimits

0xf841,	// (0x00030bd1) popup_query_data_window_t

0x512b,	// (0x000264bb) query_popup_data_pane_ParamLimits

0x512b,	// (0x000264bb) query_popup_data_pane

0x513f,	// (0x000264cf) query_popup_data_pane_cp1_ParamLimits

0x513f,	// (0x000264cf) query_popup_data_pane_cp1

0x4fd2,	// (0x00026362) bg_popup_window_pane_cp10_ParamLimits

0x4fd2,	// (0x00026362) bg_popup_window_pane_cp10

0x5004,	// (0x00026394) indicator_popup_pane_ParamLimits

0x5004,	// (0x00026394) indicator_popup_pane

0x5026,	// (0x000263b6) popup_query_code_window_t1_ParamLimits

0x5026,	// (0x000263b6) popup_query_code_window_t1

0x5040,	// (0x000263d0) popup_query_code_window_t2_ParamLimits

0x5040,	// (0x000263d0) popup_query_code_window_t2

0x5089,	// (0x00026419) popup_query_code_window_t3_ParamLimits

0x5089,	// (0x00026419) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x00030bca) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x00030bca) popup_query_code_window_t

0x50b8,	// (0x00026448) query_popup_pane_ParamLimits

0x50b8,	// (0x00026448) query_popup_pane

0x1463,	// (0x000227f3) bg_popup_window_pane_cp15_ParamLimits

0x1463,	// (0x000227f3) bg_popup_window_pane_cp15

0x1483,	// (0x00022813) indicator_popup_pane_cp1_ParamLimits

0x1483,	// (0x00022813) indicator_popup_pane_cp1

0x1496,	// (0x00022826) indicator_popup_pane_cp2_ParamLimits

0x1496,	// (0x00022826) indicator_popup_pane_cp2

0x14b1,	// (0x00022841) popup_query_data_code_window_g1_ParamLimits

0x14b1,	// (0x00022841) popup_query_data_code_window_g1

0x14c4,	// (0x00022854) popup_query_data_code_window_t1_ParamLimits

0x14c4,	// (0x00022854) popup_query_data_code_window_t1

0x14d6,	// (0x00022866) popup_query_data_code_window_t2_ParamLimits

0x14d6,	// (0x00022866) popup_query_data_code_window_t2

0x14e8,	// (0x00022878) popup_query_data_code_window_t3_ParamLimits

0x14e8,	// (0x00022878) popup_query_data_code_window_t3

0x14fe,	// (0x0002288e) popup_query_data_code_window_t4_ParamLimits

0x14fe,	// (0x0002288e) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00030932) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00030932) popup_query_data_code_window_t

0x3ad3,	// (0x00024e63) list_single_midp_graphic_pane_g3

0x1518,	// (0x000228a8) query_popup_data_pane_cp2_ParamLimits

0x152b,	// (0x000228bb) query_popup_pane_cp2_ParamLimits

0x152b,	// (0x000228bb) query_popup_pane_cp2

0xe7cf,	// (0x0002fb5f) bg_popup_window_pane_cp11

0x4fca,	// (0x0002635a) heading_pane_cp5

0x161b,	// (0x000229ab) listscroll_popup_info_pane

0xe7cf,	// (0x0002fb5f) input_focus_pane_cp3

0x1546,	// (0x000228d6) query_popup_pane_t1

0x1554,	// (0x000228e4) list_popup_info_pane_ParamLimits

0x1554,	// (0x000228e4) list_popup_info_pane

0x1563,	// (0x000228f3) listscroll_popup_info_pane_g1

0x156b,	// (0x000228fb) scroll_pane_cp7

0x1575,	// (0x00022905) popup_info_list_pane_t1_ParamLimits

0x1575,	// (0x00022905) popup_info_list_pane_t1

0x158f,	// (0x0002291f) popup_info_list_pane_t2_ParamLimits

0x158f,	// (0x0002291f) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0003093b) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0003093b) popup_info_list_pane_t

0xe7cf,	// (0x0002fb5f) bg_popup_window_pane_cp12

0x63b7,	// (0x00027747) find_popup_pane

0x10a1,	// (0x00022431) bg_popup_window_pane_cp3

0x15a9,	// (0x00022939) heading_pane_cp3

0x15b5,	// (0x00022945) listscroll_popup_graphic_pane

0xe7cf,	// (0x0002fb5f) bg_popup_window_pane_cp4

0xbd24,	// (0x0002d0b4) heading_pane_cp4

0x161b,	// (0x000229ab) listscroll_popup_colour_pane

0xbd2e,	// (0x0002d0be) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbd2e,	// (0x0002d0be) cell_large_graphic_colour_none_popup_pane

0xbd42,	// (0x0002d0d2) grid_large_graphic_colour_popup_pane_ParamLimits

0xbd42,	// (0x0002d0d2) grid_large_graphic_colour_popup_pane

0xbd6e,	// (0x0002d0fe) listscroll_popup_colour_pane_g1_ParamLimits

0xbd6e,	// (0x0002d0fe) listscroll_popup_colour_pane_g1

0xbd85,	// (0x0002d115) listscroll_popup_colour_pane_g2_ParamLimits

0xbd85,	// (0x0002d115) listscroll_popup_colour_pane_g2

0xbd9c,	// (0x0002d12c) listscroll_popup_colour_pane_g3_ParamLimits

0xbd9c,	// (0x0002d12c) listscroll_popup_colour_pane_g3

0xbdac,	// (0x0002d13c) listscroll_popup_colour_pane_g4_ParamLimits

0xbdac,	// (0x0002d13c) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00030940) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00030940) listscroll_popup_colour_pane_g

0x16b5,	// (0x00022a45) scroll_pane_cp6_ParamLimits

0x16b5,	// (0x00022a45) scroll_pane_cp6

0xbdc0,	// (0x0002d150) cell_large_graphic_colour_popup_pane_ParamLimits

0xbdc0,	// (0x0002d150) cell_large_graphic_colour_popup_pane

0x16ec,	// (0x00022a7c) cell_large_graphic_colour_none_popup_pane_t1

0xe7cf,	// (0x0002fb5f) grid_highlight_pane_cp5

0x16fb,	// (0x00022a8b) cell_large_graphic_colour_popup_pane_g1

0x1703,	// (0x00022a93) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00030949) cell_large_graphic_colour_popup_pane_g

0x170b,	// (0x00022a9b) cell_large_graphic_colour_popup_pane_g2_copy1

0x1714,	// (0x00022aa4) grid_highlight_pane_cp4

0x171c,	// (0x00022aac) bg_popup_window_pane_cp8_ParamLimits

0x171c,	// (0x00022aac) bg_popup_window_pane_cp8

0x1737,	// (0x00022ac7) popup_snote_single_text_window_g1_ParamLimits

0x1737,	// (0x00022ac7) popup_snote_single_text_window_g1

0x1749,	// (0x00022ad9) popup_snote_single_text_window_t1_ParamLimits

0x1749,	// (0x00022ad9) popup_snote_single_text_window_t1

0x175c,	// (0x00022aec) popup_snote_single_text_window_t2_ParamLimits

0x175c,	// (0x00022aec) popup_snote_single_text_window_t2

0x176f,	// (0x00022aff) popup_snote_single_text_window_t3_ParamLimits

0x176f,	// (0x00022aff) popup_snote_single_text_window_t3

0x17a8,	// (0x00022b38) popup_snote_single_text_window_t4_ParamLimits

0x17a8,	// (0x00022b38) popup_snote_single_text_window_t4

0x17dc,	// (0x00022b6c) popup_snote_single_text_window_t5_ParamLimits

0x17dc,	// (0x00022b6c) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0003094e) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0003094e) popup_snote_single_text_window_t

0x180b,	// (0x00022b9b) bg_popup_window_pane_cp9_ParamLimits

0x180b,	// (0x00022b9b) bg_popup_window_pane_cp9

0x1737,	// (0x00022ac7) popup_snote_single_graphic_window_g1_ParamLimits

0x1737,	// (0x00022ac7) popup_snote_single_graphic_window_g1

0x1819,	// (0x00022ba9) popup_snote_single_graphic_window_g2_ParamLimits

0x1819,	// (0x00022ba9) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00030959) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00030959) popup_snote_single_graphic_window_g

0x1825,	// (0x00022bb5) popup_snote_single_graphic_window_t1_ParamLimits

0x1825,	// (0x00022bb5) popup_snote_single_graphic_window_t1

0x1838,	// (0x00022bc8) popup_snote_single_graphic_window_t2_ParamLimits

0x1838,	// (0x00022bc8) popup_snote_single_graphic_window_t2

0x184b,	// (0x00022bdb) popup_snote_single_graphic_window_t3_ParamLimits

0x184b,	// (0x00022bdb) popup_snote_single_graphic_window_t3

0x1884,	// (0x00022c14) popup_snote_single_graphic_window_t4_ParamLimits

0x1884,	// (0x00022c14) popup_snote_single_graphic_window_t4

0x18b8,	// (0x00022c48) popup_snote_single_graphic_window_t5_ParamLimits

0x18b8,	// (0x00022c48) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0003095e) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0003095e) popup_snote_single_graphic_window_t

0x62f5,	// (0x00027685) grid_graphic_popup_pane_ParamLimits

0x62f5,	// (0x00027685) grid_graphic_popup_pane

0x6323,	// (0x000276b3) listscroll_popup_graphic_pane_g1_ParamLimits

0x6323,	// (0x000276b3) listscroll_popup_graphic_pane_g1

0xda34,	// (0x0002edc4) listscroll_popup_graphic_pane_g2_ParamLimits

0xda34,	// (0x0002edc4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x00030d47) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x00030d47) listscroll_popup_graphic_pane_g

0x634b,	// (0x000276db) scroll_pane_cp5

0xd9f4,	// (0x0002ed84) cell_graphic_popup_pane_ParamLimits

0xd9f4,	// (0x0002ed84) cell_graphic_popup_pane

0x627e,	// (0x0002760e) cell_graphic_popup_pane_g1

0x6286,	// (0x00027616) cell_graphic_popup_pane_g2

0x170b,	// (0x00022a9b) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x00030d40) cell_graphic_popup_pane_g

0x628f,	// (0x0002761f) cell_graphic_popup_pane_t2

0x1714,	// (0x00022aa4) grid_highlight_pane_cp3

0x18f9,	// (0x00022c89) list_gen_pane_ParamLimits

0x18f9,	// (0x00022c89) list_gen_pane

0x192b,	// (0x00022cbb) scroll_pane

0xd9af,	// (0x0002ed3f) bg_list_pane_g1_ParamLimits

0xd9af,	// (0x0002ed3f) bg_list_pane_g1

0x61fb,	// (0x0002758b) bg_list_pane_g2_ParamLimits

0x61fb,	// (0x0002758b) bg_list_pane_g2

0x620e,	// (0x0002759e) bg_list_pane_g3_ParamLimits

0x620e,	// (0x0002759e) bg_list_pane_g3

0x6220,	// (0x000275b0) bg_list_pane_g4_ParamLimits

0x6220,	// (0x000275b0) bg_list_pane_g4

0xd9ca,	// (0x0002ed5a) bg_list_pane_g5_ParamLimits

0xd9ca,	// (0x0002ed5a) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x00030d35) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x00030d35) bg_list_pane_g

0xd972,	// (0x0002ed02) list_double2_graphic_large_graphic_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double2_graphic_large_graphic_pane

0xd972,	// (0x0002ed02) list_double2_graphic_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double2_graphic_pane

0xd972,	// (0x0002ed02) list_double2_large_graphic_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double2_large_graphic_pane

0xd972,	// (0x0002ed02) list_double2_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double2_pane

0xd972,	// (0x0002ed02) list_double_graphic_heading_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double_graphic_heading_pane

0xd972,	// (0x0002ed02) list_double_graphic_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double_graphic_pane

0xd972,	// (0x0002ed02) list_double_heading_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double_heading_pane

0xd972,	// (0x0002ed02) list_double_large_graphic_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double_large_graphic_pane

0xd972,	// (0x0002ed02) list_double_number_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double_number_pane

0xd972,	// (0x0002ed02) list_double_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double_pane

0xd972,	// (0x0002ed02) list_double_time_pane_ParamLimits

0xd972,	// (0x0002ed02) list_double_time_pane

0xd972,	// (0x0002ed02) list_setting_number_pane_ParamLimits

0xd972,	// (0x0002ed02) list_setting_number_pane

0xd972,	// (0x0002ed02) list_setting_pane_ParamLimits

0xd972,	// (0x0002ed02) list_setting_pane

0xb60f,	// (0x0002c99f) list_single_2graphic_pane_ParamLimits

0xb60f,	// (0x0002c99f) list_single_2graphic_pane

0xb60f,	// (0x0002c99f) list_single_graphic_heading_pane_ParamLimits

0xb60f,	// (0x0002c99f) list_single_graphic_heading_pane

0xb60f,	// (0x0002c99f) list_single_graphic_pane_ParamLimits

0xb60f,	// (0x0002c99f) list_single_graphic_pane

0xb60f,	// (0x0002c99f) list_single_heading_pane_ParamLimits

0xb60f,	// (0x0002c99f) list_single_heading_pane

0xd99a,	// (0x0002ed2a) list_single_large_graphic_pane_ParamLimits

0xd99a,	// (0x0002ed2a) list_single_large_graphic_pane

0xb60f,	// (0x0002c99f) list_single_number_heading_pane_ParamLimits

0xb60f,	// (0x0002c99f) list_single_number_heading_pane

0xb60f,	// (0x0002c99f) list_single_number_pane_ParamLimits

0xb60f,	// (0x0002c99f) list_single_number_pane

0xb60f,	// (0x0002c99f) list_single_pane_ParamLimits

0xb60f,	// (0x0002c99f) list_single_pane

0xe7cf,	// (0x0002fb5f) list_highlight_pane_cp1

0x0409,	// (0x00021799) list_single_pane_g1_ParamLimits

0x0409,	// (0x00021799) list_single_pane_g1

0x0415,	// (0x000217a5) list_single_pane_g2_ParamLimits

0x0415,	// (0x000217a5) list_single_pane_g2

0x0001,

0xf5e0,	// (0x00030970) list_single_pane_g_ParamLimits

0xf5e0,	// (0x00030970) list_single_pane_g

0x05fd,	// (0x0002198d) list_single_pane_t1_ParamLimits

0x05fd,	// (0x0002198d) list_single_pane_t1

0x0409,	// (0x00021799) list_single_number_pane_g1_ParamLimits

0x0409,	// (0x00021799) list_single_number_pane_g1

0x0415,	// (0x000217a5) list_single_number_pane_g2_ParamLimits

0x0415,	// (0x000217a5) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x00030970) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x00030970) list_single_number_pane_g

0x048d,	// (0x0002181d) list_single_number_pane_t1_ParamLimits

0x048d,	// (0x0002181d) list_single_number_pane_t1

0xb5d1,	// (0x0002c961) list_single_number_pane_t2_ParamLimits

0xb5d1,	// (0x0002c961) list_single_number_pane_t2

0x0001,

0xf966,	// (0x00030cf6) list_single_number_pane_t_ParamLimits

0xf966,	// (0x00030cf6) list_single_number_pane_t

0xafb4,	// (0x0002c344) list_single_graphic_pane_g1_ParamLimits

0xafb4,	// (0x0002c344) list_single_graphic_pane_g1

0x0409,	// (0x00021799) list_single_graphic_pane_g2_ParamLimits

0x0409,	// (0x00021799) list_single_graphic_pane_g2

0x0415,	// (0x000217a5) list_single_graphic_pane_g3_ParamLimits

0x0415,	// (0x000217a5) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00030969) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00030969) list_single_graphic_pane_g

0xafc0,	// (0x0002c350) list_single_graphic_pane_t1_ParamLimits

0xafc0,	// (0x0002c350) list_single_graphic_pane_t1

0x0409,	// (0x00021799) list_single_heading_pane_g1_ParamLimits

0x0409,	// (0x00021799) list_single_heading_pane_g1

0x0415,	// (0x000217a5) list_single_heading_pane_g2_ParamLimits

0x0415,	// (0x000217a5) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00030970) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00030970) list_single_heading_pane_g

0xafd6,	// (0x0002c366) list_single_heading_pane_t1_ParamLimits

0xafd6,	// (0x0002c366) list_single_heading_pane_t1

0xafec,	// (0x0002c37c) list_single_heading_pane_t2_ParamLimits

0xafec,	// (0x0002c37c) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00030975) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00030975) list_single_heading_pane_t

0x0409,	// (0x00021799) list_single_number_heading_pane_g1_ParamLimits

0x0409,	// (0x00021799) list_single_number_heading_pane_g1

0x0415,	// (0x000217a5) list_single_number_heading_pane_g2_ParamLimits

0x0415,	// (0x000217a5) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x00030970) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x00030970) list_single_number_heading_pane_g

0xafd6,	// (0x0002c366) list_single_number_heading_pane_t1_ParamLimits

0xafd6,	// (0x0002c366) list_single_number_heading_pane_t1

0xaffe,	// (0x0002c38e) list_single_number_heading_pane_t2_ParamLimits

0xaffe,	// (0x0002c38e) list_single_number_heading_pane_t2

0x05d9,	// (0x00021969) list_single_number_heading_pane_t3_ParamLimits

0x05d9,	// (0x00021969) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0003097a) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0003097a) list_single_number_heading_pane_t

0x0469,	// (0x000217f9) list_single_graphic_heading_pane_g1_ParamLimits

0x0469,	// (0x000217f9) list_single_graphic_heading_pane_g1

0xb010,	// (0x0002c3a0) list_single_graphic_heading_pane_g4_ParamLimits

0xb010,	// (0x0002c3a0) list_single_graphic_heading_pane_g4

0x0415,	// (0x000217a5) list_single_graphic_heading_pane_g5_ParamLimits

0x0415,	// (0x000217a5) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x00030981) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x00030981) list_single_graphic_heading_pane_g

0xafd6,	// (0x0002c366) list_single_graphic_heading_pane_t1_ParamLimits

0xafd6,	// (0x0002c366) list_single_graphic_heading_pane_t1

0xb021,	// (0x0002c3b1) list_single_graphic_heading_pane_t2_ParamLimits

0xb021,	// (0x0002c3b1) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x00030988) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x00030988) list_single_graphic_heading_pane_t

0x0613,	// (0x000219a3) list_single_large_graphic_pane_g1_ParamLimits

0x0613,	// (0x000219a3) list_single_large_graphic_pane_g1

0x061f,	// (0x000219af) list_single_large_graphic_pane_g2_ParamLimits

0x061f,	// (0x000219af) list_single_large_graphic_pane_g2

0x062b,	// (0x000219bb) list_single_large_graphic_pane_g3_ParamLimits

0x062b,	// (0x000219bb) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0003098d) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0003098d) list_single_large_graphic_pane_g

0x5173,	// (0x00026503) wait_border_pane_g2_copy1

0xb033,	// (0x0002c3c3) list_single_large_graphic_pane_g4_cp2

0x0637,	// (0x000219c7) list_single_large_graphic_pane_t1_ParamLimits

0x0637,	// (0x000219c7) list_single_large_graphic_pane_t1

0xb03b,	// (0x0002c3cb) list_double_pane_g1_ParamLimits

0xb03b,	// (0x0002c3cb) list_double_pane_g1

0xb047,	// (0x0002c3d7) list_double_pane_g2_ParamLimits

0xb047,	// (0x0002c3d7) list_double_pane_g2

0x0001,

0xf604,	// (0x00030994) list_double_pane_g_ParamLimits

0xf604,	// (0x00030994) list_double_pane_g

0xb053,	// (0x0002c3e3) list_double_pane_t1_ParamLimits

0xb053,	// (0x0002c3e3) list_double_pane_t1

0xb069,	// (0x0002c3f9) list_double_pane_t2_ParamLimits

0xb069,	// (0x0002c3f9) list_double_pane_t2

0x0001,

0xf609,	// (0x00030999) list_double_pane_t_ParamLimits

0xf609,	// (0x00030999) list_double_pane_t

0xb07b,	// (0x0002c40b) list_double2_pane_g1_ParamLimits

0xb07b,	// (0x0002c40b) list_double2_pane_g1

0xb047,	// (0x0002c3d7) list_double2_pane_g2_ParamLimits

0xb047,	// (0x0002c3d7) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0003099e) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0003099e) list_double2_pane_g

0xb053,	// (0x0002c3e3) list_double2_pane_t1_ParamLimits

0xb053,	// (0x0002c3e3) list_double2_pane_t1

0xb08c,	// (0x0002c41c) list_double2_pane_t2_ParamLimits

0xb08c,	// (0x0002c41c) list_double2_pane_t2

0x0001,

0xf613,	// (0x000309a3) list_double2_pane_t_ParamLimits

0xf613,	// (0x000309a3) list_double2_pane_t

0xb03b,	// (0x0002c3cb) list_double_number_pane_g1_ParamLimits

0xb03b,	// (0x0002c3cb) list_double_number_pane_g1

0xb047,	// (0x0002c3d7) list_double_number_pane_g2_ParamLimits

0xb047,	// (0x0002c3d7) list_double_number_pane_g2

0x0001,

0xf604,	// (0x00030994) list_double_number_pane_g_ParamLimits

0xf604,	// (0x00030994) list_double_number_pane_g

0xb09e,	// (0x0002c42e) list_double_number_pane_t1_ParamLimits

0xb09e,	// (0x0002c42e) list_double_number_pane_t1

0xb0b0,	// (0x0002c440) list_double_number_pane_t2_ParamLimits

0xb0b0,	// (0x0002c440) list_double_number_pane_t2

0xb0c6,	// (0x0002c456) list_double_number_pane_t3_ParamLimits

0xb0c6,	// (0x0002c456) list_double_number_pane_t3

0x0002,

0xf618,	// (0x000309a8) list_double_number_pane_t_ParamLimits

0xf618,	// (0x000309a8) list_double_number_pane_t

0xb0d8,	// (0x0002c468) list_double_graphic_pane_g1_ParamLimits

0xb0d8,	// (0x0002c468) list_double_graphic_pane_g1

0xb0e4,	// (0x0002c474) list_double_graphic_pane_g2_ParamLimits

0xb0e4,	// (0x0002c474) list_double_graphic_pane_g2

0xb0f3,	// (0x0002c483) list_double_graphic_pane_g3_ParamLimits

0xb0f3,	// (0x0002c483) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x000309af) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x000309af) list_double_graphic_pane_g

0xb10b,	// (0x0002c49b) list_double_graphic_pane_t1_ParamLimits

0xb10b,	// (0x0002c49b) list_double_graphic_pane_t1

0xb121,	// (0x0002c4b1) list_double_graphic_pane_t2_ParamLimits

0xb121,	// (0x0002c4b1) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x000309b8) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x000309b8) list_double_graphic_pane_t

0xb0d8,	// (0x0002c468) list_double2_graphic_pane_g1_ParamLimits

0xb0d8,	// (0x0002c468) list_double2_graphic_pane_g1

0xb133,	// (0x0002c4c3) list_double2_graphic_pane_g2_ParamLimits

0xb133,	// (0x0002c4c3) list_double2_graphic_pane_g2

0xb13f,	// (0x0002c4cf) list_double2_graphic_pane_g3_ParamLimits

0xb13f,	// (0x0002c4cf) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x000309bd) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x000309bd) list_double2_graphic_pane_g

0xb0b0,	// (0x0002c440) list_double2_graphic_pane_t1_ParamLimits

0xb0b0,	// (0x0002c440) list_double2_graphic_pane_t1

0xb14b,	// (0x0002c4db) list_double2_graphic_pane_t2_ParamLimits

0xb14b,	// (0x0002c4db) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x000309c4) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x000309c4) list_double2_graphic_pane_t

0xb15d,	// (0x0002c4ed) list_double_large_graphic_pane_g1_ParamLimits

0xb15d,	// (0x0002c4ed) list_double_large_graphic_pane_g1

0xb07b,	// (0x0002c40b) list_double_large_graphic_pane_g2_ParamLimits

0xb07b,	// (0x0002c40b) list_double_large_graphic_pane_g2

0xb047,	// (0x0002c3d7) list_double_large_graphic_pane_g3_ParamLimits

0xb047,	// (0x0002c3d7) list_double_large_graphic_pane_g3

0xb188,	// (0x0002c518) list_double_large_graphic_pane_g4_ParamLimits

0xb188,	// (0x0002c518) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x000309c9) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x000309c9) list_double_large_graphic_pane_g

0xb19a,	// (0x0002c52a) list_double_large_graphic_pane_t1_ParamLimits

0xb19a,	// (0x0002c52a) list_double_large_graphic_pane_t1

0xb1b3,	// (0x0002c543) list_double_large_graphic_pane_t2_ParamLimits

0xb1b3,	// (0x0002c543) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x000309d4) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x000309d4) list_double_large_graphic_pane_t

0xb1c5,	// (0x0002c555) list_double2_large_graphic_pane_g1_ParamLimits

0xb1c5,	// (0x0002c555) list_double2_large_graphic_pane_g1

0xb07b,	// (0x0002c40b) list_double2_large_graphic_pane_g2_ParamLimits

0xb07b,	// (0x0002c40b) list_double2_large_graphic_pane_g2

0xb047,	// (0x0002c3d7) list_double2_large_graphic_pane_g3_ParamLimits

0xb047,	// (0x0002c3d7) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x000309d9) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x000309d9) list_double2_large_graphic_pane_g

0xb1d1,	// (0x0002c561) list_double2_large_graphic_pane_t1_ParamLimits

0xb1d1,	// (0x0002c561) list_double2_large_graphic_pane_t1

0xb1e7,	// (0x0002c577) list_double2_large_graphic_pane_t2_ParamLimits

0xb1e7,	// (0x0002c577) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x000309e0) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x000309e0) list_double2_large_graphic_pane_t

0xb1f9,	// (0x0002c589) list_double_heading_pane_g1_ParamLimits

0xb1f9,	// (0x0002c589) list_double_heading_pane_g1

0xb20a,	// (0x0002c59a) list_double_heading_pane_g2_ParamLimits

0xb20a,	// (0x0002c59a) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x000309e5) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x000309e5) list_double_heading_pane_g

0xb216,	// (0x0002c5a6) list_double_heading_pane_t1_ParamLimits

0xb216,	// (0x0002c5a6) list_double_heading_pane_t1

0xb22c,	// (0x0002c5bc) list_double_heading_pane_t2_ParamLimits

0xb22c,	// (0x0002c5bc) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x000309ea) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x000309ea) list_double_heading_pane_t

0xb23e,	// (0x0002c5ce) list_double_graphic_heading_pane_g1_ParamLimits

0xb23e,	// (0x0002c5ce) list_double_graphic_heading_pane_g1

0xb1f9,	// (0x0002c589) list_double_graphic_heading_pane_g2_ParamLimits

0xb1f9,	// (0x0002c589) list_double_graphic_heading_pane_g2

0xb20a,	// (0x0002c59a) list_double_graphic_heading_pane_g3_ParamLimits

0xb20a,	// (0x0002c59a) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x000309ef) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x000309ef) list_double_graphic_heading_pane_g

0xb24a,	// (0x0002c5da) list_double_graphic_heading_pane_t1_ParamLimits

0xb24a,	// (0x0002c5da) list_double_graphic_heading_pane_t1

0xb260,	// (0x0002c5f0) list_double_graphic_heading_pane_t2_ParamLimits

0xb260,	// (0x0002c5f0) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x000309f6) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x000309f6) list_double_graphic_heading_pane_t

0xb07b,	// (0x0002c40b) list_double_time_pane_g1_ParamLimits

0xb07b,	// (0x0002c40b) list_double_time_pane_g1

0xb047,	// (0x0002c3d7) list_double_time_pane_g2_ParamLimits

0xb047,	// (0x0002c3d7) list_double_time_pane_g2

0x0001,

0xf60e,	// (0x0003099e) list_double_time_pane_g_ParamLimits

0xf60e,	// (0x0003099e) list_double_time_pane_g

0xb1d1,	// (0x0002c561) list_double_time_pane_t1_ParamLimits

0xb1d1,	// (0x0002c561) list_double_time_pane_t1

0xb272,	// (0x0002c602) list_double_time_pane_t2_ParamLimits

0xb272,	// (0x0002c602) list_double_time_pane_t2

0xb284,	// (0x0002c614) list_double_time_pane_t3_ParamLimits

0xb284,	// (0x0002c614) list_double_time_pane_t3

0xb296,	// (0x0002c626) list_double_time_pane_t4_ParamLimits

0xb296,	// (0x0002c626) list_double_time_pane_t4

0x0003,

0xf66b,	// (0x000309fb) list_double_time_pane_t_ParamLimits

0xf66b,	// (0x000309fb) list_double_time_pane_t

0xb2a8,	// (0x0002c638) list_setting_pane_g1_ParamLimits

0xb2a8,	// (0x0002c638) list_setting_pane_g1

0xb2b4,	// (0x0002c644) list_setting_pane_g2_ParamLimits

0xb2b4,	// (0x0002c644) list_setting_pane_g2

0x0001,

0xf674,	// (0x00030a04) list_setting_pane_g_ParamLimits

0xf674,	// (0x00030a04) list_setting_pane_g

0xb2c0,	// (0x0002c650) list_setting_pane_t1_ParamLimits

0xb2c0,	// (0x0002c650) list_setting_pane_t1

0xb2da,	// (0x0002c66a) list_setting_pane_t2_ParamLimits

0xb2da,	// (0x0002c66a) list_setting_pane_t2

0x0002,

0xf679,	// (0x00030a09) list_setting_pane_t_ParamLimits

0xf679,	// (0x00030a09) list_setting_pane_t

0xb319,	// (0x0002c6a9) set_value_pane_cp_ParamLimits

0xb319,	// (0x0002c6a9) set_value_pane_cp

0xb327,	// (0x0002c6b7) list_setting_number_pane_g1_ParamLimits

0xb327,	// (0x0002c6b7) list_setting_number_pane_g1

0xb333,	// (0x0002c6c3) list_setting_number_pane_g2_ParamLimits

0xb333,	// (0x0002c6c3) list_setting_number_pane_g2

0x0001,

0xf680,	// (0x00030a10) list_setting_number_pane_g_ParamLimits

0xf680,	// (0x00030a10) list_setting_number_pane_g

0xb33f,	// (0x0002c6cf) list_setting_number_pane_t1_ParamLimits

0xb33f,	// (0x0002c6cf) list_setting_number_pane_t1

0xb358,	// (0x0002c6e8) list_setting_number_pane_t2_ParamLimits

0xb358,	// (0x0002c6e8) list_setting_number_pane_t2

0xb372,	// (0x0002c702) list_setting_number_pane_t3_ParamLimits

0xb372,	// (0x0002c702) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x00030a15) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x00030a15) list_setting_number_pane_t

0xb319,	// (0x0002c6a9) set_value_pane_ParamLimits

0xb319,	// (0x0002c6a9) set_value_pane

0x2fc7,	// (0x00024357) bg_set_opt_pane_ParamLimits

0x2fc7,	// (0x00024357) bg_set_opt_pane

0x00fd,	// (0x0002148d) set_value_pane_t1

0x2fe8,	// (0x00024378) slider_set_pane_cp3

0x2ff1,	// (0x00024381) volume_small_pane_cp

0x2ffa,	// (0x0002438a) list_form_gen_pane

0x3003,	// (0x00024393) scroll_pane_cp8

0xb3b5,	// (0x0002c745) form_field_data_pane_ParamLimits

0xb3b5,	// (0x0002c745) form_field_data_pane

0xb3d0,	// (0x0002c760) form_field_data_wide_pane_ParamLimits

0xb3d0,	// (0x0002c760) form_field_data_wide_pane

0x0158,	// (0x000214e8) form_field_popup_pane_ParamLimits

0x0158,	// (0x000214e8) form_field_popup_pane

0xb3f4,	// (0x0002c784) form_field_popup_wide_pane_ParamLimits

0xb3f4,	// (0x0002c784) form_field_popup_wide_pane

0x019b,	// (0x0002152b) form_field_slider_pane_ParamLimits

0x019b,	// (0x0002152b) form_field_slider_pane

0x01ae,	// (0x0002153e) form_field_slider_wide_pane_ParamLimits

0x01ae,	// (0x0002153e) form_field_slider_wide_pane

0x3014,	// (0x000243a4) data_form_pane

0xb41f,	// (0x0002c7af) form_field_data_pane_t1

0x3020,	// (0x000243b0) input_focus_pane

0x302e,	// (0x000243be) data_form_wide_pane

0x01f1,	// (0x00021581) form_field_data_wide_pane_t1

0x1729,	// (0x00022ab9) input_focus_pane_cp6

0xb439,	// (0x0002c7c9) form_field_popup_pane_t1

0x3020,	// (0x000243b0) input_focus_pane_cp7

0x305a,	// (0x000243ea) list_form_pane

0x0235,	// (0x000215c5) form_field_popup_wide_pane_t1

0x3020,	// (0x000243b0) input_focus_pane_cp8

0x3066,	// (0x000243f6) list_form_wide_pane

0xb45b,	// (0x0002c7eb) form_field_slider_pane_t1_ParamLimits

0xb45b,	// (0x0002c7eb) form_field_slider_pane_t1

0xb473,	// (0x0002c803) form_field_slider_pane_t2_ParamLimits

0xb473,	// (0x0002c803) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x00030a25) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x00030a25) form_field_slider_pane_t

0x13ad,	// (0x0002273d) input_focus_pane_cp9_ParamLimits

0x13ad,	// (0x0002273d) input_focus_pane_cp9

0xb488,	// (0x0002c818) slider_cont_pane_ParamLimits

0xb488,	// (0x0002c818) slider_cont_pane

0x3075,	// (0x00024405) form_field_slider_wide_pane_t1_ParamLimits

0x3075,	// (0x00024405) form_field_slider_wide_pane_t1

0x0293,	// (0x00021623) form_field_slider_wide_pane_t2_ParamLimits

0x0293,	// (0x00021623) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x00030a2a) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x00030a2a) form_field_slider_wide_pane_t

0x13ad,	// (0x0002273d) input_focus_pane_cp10_ParamLimits

0x13ad,	// (0x0002273d) input_focus_pane_cp10

0xb49c,	// (0x0002c82c) slider_cont_pane_cp1_ParamLimits

0xb49c,	// (0x0002c82c) slider_cont_pane_cp1

0xb4b0,	// (0x0002c840) slider_form_pane_cp

0x3087,	// (0x00024417) input_focus_pane_g1

0x308f,	// (0x0002441f) input_focus_pane_g2

0x3097,	// (0x00024427) input_focus_pane_g3

0x309f,	// (0x0002442f) input_focus_pane_g4

0x30a7,	// (0x00024437) input_focus_pane_g5

0x30af,	// (0x0002443f) input_focus_pane_g6

0x30b7,	// (0x00024447) input_focus_pane_g7

0x30bf,	// (0x0002444f) input_focus_pane_g8

0x30c7,	// (0x00024457) input_focus_pane_g9

0xe7c5,	// (0x0002fb55) input_focus_pane_g10

0x0009,

0xf69f,	// (0x00030a2f) input_focus_pane_g

0x517c,	// (0x0002650c) wait_border_pane_g3_copy1

0xb4b8,	// (0x0002c848) data_form_pane_t1

0xe7c5,	// (0x0002fb55) wait_anim_pane_g1_copy1

0xb5e3,	// (0x0002c973) data_form_wide_pane_t1

0x02f3,	// (0x00021683) list_form_graphic_pane_cp_ParamLimits

0x02f3,	// (0x00021683) list_form_graphic_pane_cp

0x6101,	// (0x00027491) slider_form_pane_g1

0x610a,	// (0x0002749a) slider_form_pane_g2

0x0006,

0xf996,	// (0x00030d26) slider_form_pane_g

0x02f3,	// (0x00021683) list_form_graphic_pane_ParamLimits

0x02f3,	// (0x00021683) list_form_graphic_pane

0x0305,	// (0x00021695) list_form_graphic_pane_g1

0x030d,	// (0x0002169d) list_form_graphic_pane_t1_ParamLimits

0x030d,	// (0x0002169d) list_form_graphic_pane_t1

0x10a1,	// (0x00022431) list_highlight_pane_cp5_ParamLimits

0x10a1,	// (0x00022431) list_highlight_pane_cp5

0xb4d2,	// (0x0002c862) find_pane_g1

0x30cf,	// (0x0002445f) input_find_pane

0xb4db,	// (0x0002c86b) input_find_pane_g1_ParamLimits

0xb4db,	// (0x0002c86b) input_find_pane_g1

0xb4e7,	// (0x0002c877) input_find_pane_t1_ParamLimits

0xb4e7,	// (0x0002c877) input_find_pane_t1

0xb4fc,	// (0x0002c88c) input_find_pane_t2_ParamLimits

0xb4fc,	// (0x0002c88c) input_find_pane_t2

0x0001,

0xf6b4,	// (0x00030a44) input_find_pane_t_ParamLimits

0xf6b4,	// (0x00030a44) input_find_pane_t

0x30d8,	// (0x00024468) input_focus_pane_cp5_ParamLimits

0x30d8,	// (0x00024468) input_focus_pane_cp5

0xbdf7,	// (0x0002d187) bg_popup_window_pane_cp2_ParamLimits

0xbdf7,	// (0x0002d187) bg_popup_window_pane_cp2

0xbe04,	// (0x0002d194) listscroll_menu_pane_ParamLimits

0xbe04,	// (0x0002d194) listscroll_menu_pane

0xbe10,	// (0x0002d1a0) popup_submenu_window_ParamLimits

0xbe10,	// (0x0002d1a0) popup_submenu_window

0x313b,	// (0x000244cb) find_popup_pane_g1

0x3143,	// (0x000244d3) input_popup_find_pane_cp

0x30d8,	// (0x00024468) input_focus_pane_cp4_ParamLimits

0x30d8,	// (0x00024468) input_focus_pane_cp4

0x315b,	// (0x000244eb) input_popup_find_pane_t1_ParamLimits

0x315b,	// (0x000244eb) input_popup_find_pane_t1

0xe7cf,	// (0x0002fb5f) bg_popup_sub_pane_cp

0x3189,	// (0x00024519) listscroll_popup_sub_pane

0x3191,	// (0x00024521) list_submenu_pane_ParamLimits

0x3191,	// (0x00024521) list_submenu_pane

0x31a2,	// (0x00024532) scroll_pane_cp4

0x31aa,	// (0x0002453a) list_single_popup_submenu_pane_ParamLimits

0x31aa,	// (0x0002453a) list_single_popup_submenu_pane

0x31bf,	// (0x0002454f) list_single_popup_submenu_pane_g1

0x31c7,	// (0x00024557) list_single_popup_submenu_pane_t1_ParamLimits

0x31c7,	// (0x00024557) list_single_popup_submenu_pane_t1

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp1_ParamLimits

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp1

0xbe4e,	// (0x0002d1de) tabs_2_active_pane_g1

0xbe56,	// (0x0002d1e6) tabs_2_active_pane_t1

0x13ad,	// (0x0002273d) bg_passive_tab_pane_cp1_ParamLimits

0x13ad,	// (0x0002273d) bg_passive_tab_pane_cp1

0xbe4e,	// (0x0002d1de) tabs_2_passive_pane_g1

0xbe56,	// (0x0002d1e6) tabs_2_passive_pane_t1

0x10a1,	// (0x00022431) bg_active_tab_pane_cp4

0xbe68,	// (0x0002d1f8) tabs_2_long_active_pane_t1

0x402f,	// (0x000253bf) bg_passive_tab_pane_cp4

0xcae5,	// (0x0002de75) list_single_midp_graphic_pane_g4_ParamLimits

0x10a1,	// (0x00022431) bg_active_tab_pane_cp5

0xbe7b,	// (0x0002d20b) tabs_3_long_active_pane_t1

0x402f,	// (0x000253bf) bg_passive_tab_pane_cp5

0xcae5,	// (0x0002de75) list_single_midp_graphic_pane_g4

0x10a1,	// (0x00022431) bg_popup_window_pane_cp13_ParamLimits

0x10a1,	// (0x00022431) bg_popup_window_pane_cp13

0x323e,	// (0x000245ce) listscroll_popup_fast_pane_ParamLimits

0x323e,	// (0x000245ce) listscroll_popup_fast_pane

0x324d,	// (0x000245dd) grid_popup_fast_pane_ParamLimits

0x324d,	// (0x000245dd) grid_popup_fast_pane

0x325f,	// (0x000245ef) scroll_pane_cp9_ParamLimits

0x325f,	// (0x000245ef) scroll_pane_cp9

0x79a0,	// (0x00028d30) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x79a0,	// (0x00028d30) list_single_graphic_hl_pane_t1_cp2

0x3283,	// (0x00024613) input_focus_pane_cp20_ParamLimits

0x3283,	// (0x00024613) input_focus_pane_cp20

0x3291,	// (0x00024621) query_popup_data_pane_t1_ParamLimits

0x3291,	// (0x00024621) query_popup_data_pane_t1

0x32a4,	// (0x00024634) query_popup_data_pane_t2_ParamLimits

0x32a4,	// (0x00024634) query_popup_data_pane_t2

0x32ea,	// (0x0002467a) query_popup_data_pane_t3_ParamLimits

0x32ea,	// (0x0002467a) query_popup_data_pane_t3

0x332b,	// (0x000246bb) query_popup_data_pane_t4_ParamLimits

0x332b,	// (0x000246bb) query_popup_data_pane_t4

0x3367,	// (0x000246f7) query_popup_data_pane_t5_ParamLimits

0x3367,	// (0x000246f7) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x00030a49) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x00030a49) query_popup_data_pane_t

0x3087,	// (0x00024417) bg_set_opt_pane_g1

0x308f,	// (0x0002441f) bg_set_opt_pane_g2

0x3097,	// (0x00024427) bg_set_opt_pane_g3

0x309f,	// (0x0002442f) bg_set_opt_pane_g4

0x30a7,	// (0x00024437) bg_set_opt_pane_g5

0x30af,	// (0x0002443f) bg_set_opt_pane_g6

0x30b7,	// (0x00024447) bg_set_opt_pane_g7

0x30bf,	// (0x0002444f) bg_set_opt_pane_g8

0x30c7,	// (0x00024457) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x00030a54) bg_set_opt_pane_g

0x1c02,	// (0x00022f92) control_top_pane_stacon_ParamLimits

0x1c02,	// (0x00022f92) control_top_pane_stacon

0x1c55,	// (0x00022fe5) signal_pane_stacon_ParamLimits

0x1c55,	// (0x00022fe5) signal_pane_stacon

0x393e,	// (0x00024cce) stacon_top_pane_g1_ParamLimits

0x393e,	// (0x00024cce) stacon_top_pane_g1

0x1c7a,	// (0x0002300a) title_pane_stacon_ParamLimits

0x1c7a,	// (0x0002300a) title_pane_stacon

0x1ca4,	// (0x00023034) uni_indicator_pane_stacon_ParamLimits

0x1ca4,	// (0x00023034) uni_indicator_pane_stacon

0x1cbc,	// (0x0002304c) battery_pane_stacon_ParamLimits

0x1cbc,	// (0x0002304c) battery_pane_stacon

0x1d00,	// (0x00023090) control_bottom_pane_stacon_ParamLimits

0x1d00,	// (0x00023090) control_bottom_pane_stacon

0x1d23,	// (0x000230b3) navi_pane_stacon_ParamLimits

0x1d23,	// (0x000230b3) navi_pane_stacon

0x3960,	// (0x00024cf0) stacon_bottom_pane_g1_ParamLimits

0x3960,	// (0x00024cf0) stacon_bottom_pane_g1

0x195f,	// (0x00022cef) aid_levels_signal_lsc_ParamLimits

0x195f,	// (0x00022cef) aid_levels_signal_lsc

0x1976,	// (0x00022d06) signal_pane_stacon_g1_ParamLimits

0x1976,	// (0x00022d06) signal_pane_stacon_g1

0x198a,	// (0x00022d1a) signal_pane_stacon_g2_ParamLimits

0x198a,	// (0x00022d1a) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x00030a67) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x00030a67) signal_pane_stacon_g

0x19bf,	// (0x00022d4f) title_pane_stacon_t1_ParamLimits

0x19bf,	// (0x00022d4f) title_pane_stacon_t1

0x33ab,	// (0x0002473b) uni_indicator_pane_stacon_g1

0x33b5,	// (0x00024745) uni_indicator_pane_stacon_g2

0x33bf,	// (0x0002474f) uni_indicator_pane_stacon_g3

0x33c9,	// (0x00024759) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x00030a73) uni_indicator_pane_stacon_g

0x19e4,	// (0x00022d74) control_top_pane_stacon_g1

0x19ec,	// (0x00022d7c) control_top_pane_stacon_t1_ParamLimits

0x19ec,	// (0x00022d7c) control_top_pane_stacon_t1

0x1a23,	// (0x00022db3) aid_levels_battery_lsc_ParamLimits

0x1a23,	// (0x00022db3) aid_levels_battery_lsc

0x1a3b,	// (0x00022dcb) battery_pane_stacon_g1_ParamLimits

0x1a3b,	// (0x00022dcb) battery_pane_stacon_g1

0x1a4e,	// (0x00022dde) battery_pane_stacon_g2_ParamLimits

0x1a4e,	// (0x00022dde) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x00030a7c) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x00030a7c) battery_pane_stacon_g

0x1a8c,	// (0x00022e1c) navi_icon_pane_stacon

0x1aa0,	// (0x00022e30) navi_navi_pane_stacon

0x1a8c,	// (0x00022e1c) navi_text_pane_stacon

0x19e4,	// (0x00022d74) control_bottom_pane_stacon_g1

0x1ab6,	// (0x00022e46) control_bottom_pane_stacon_t1_ParamLimits

0x1ab6,	// (0x00022e46) control_bottom_pane_stacon_t1

0xbe8d,	// (0x0002d21d) grid_app_pane_ParamLimits

0xbe8d,	// (0x0002d21d) grid_app_pane

0xbec5,	// (0x0002d255) scroll_pane_cp15_ParamLimits

0xbec5,	// (0x0002d255) scroll_pane_cp15

0xbede,	// (0x0002d26e) cell_app_pane_ParamLimits

0xbede,	// (0x0002d26e) cell_app_pane

0xbf1f,	// (0x0002d2af) cell_app_pane_g1_ParamLimits

0xbf1f,	// (0x0002d2af) cell_app_pane_g1

0x3476,	// (0x00024806) cell_app_pane_g2_ParamLimits

0x3476,	// (0x00024806) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x00030a81) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x00030a81) cell_app_pane_g

0x3482,	// (0x00024812) cell_app_pane_t1_ParamLimits

0x3482,	// (0x00024812) cell_app_pane_t1

0x3494,	// (0x00024824) grid_highlight_pane_ParamLimits

0x3494,	// (0x00024824) grid_highlight_pane

0x3087,	// (0x00024417) cell_highlight_pane_g1

0x308f,	// (0x0002441f) cell_highlight_pane_g2

0x3097,	// (0x00024427) cell_highlight_pane_g3

0x309f,	// (0x0002442f) cell_highlight_pane_g4

0x30a7,	// (0x00024437) cell_highlight_pane_g5

0x30af,	// (0x0002443f) cell_highlight_pane_g6

0x30b7,	// (0x00024447) cell_highlight_pane_g7

0x30bf,	// (0x0002444f) cell_highlight_pane_g8

0x30c7,	// (0x00024457) cell_highlight_pane_g9

0xe7c5,	// (0x0002fb55) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x00030a2f) cell_highlight_pane_g

0x34a5,	// (0x00024835) bg_scroll_pane

0x1b00,	// (0x00022e90) scroll_handle_pane

0x34ec,	// (0x0002487c) scroll_bg_pane_g1

0x3501,	// (0x00024891) scroll_bg_pane_g2

0x3519,	// (0x000248a9) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x00030a86) scroll_bg_pane_g

0x352e,	// (0x000248be) scroll_handle_focus_pane_ParamLimits

0x352e,	// (0x000248be) scroll_handle_focus_pane

0x34ec,	// (0x0002487c) scroll_handle_pane_g1

0x353b,	// (0x000248cb) scroll_handle_pane_g2

0x3519,	// (0x000248a9) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x00030a8d) scroll_handle_pane_g

0x30d8,	// (0x00024468) bg_popup_sub_pane_cp21_ParamLimits

0x30d8,	// (0x00024468) bg_popup_sub_pane_cp21

0x354f,	// (0x000248df) popup_fep_japan_predictive_window_t1_ParamLimits

0x354f,	// (0x000248df) popup_fep_japan_predictive_window_t1

0x3566,	// (0x000248f6) popup_fep_japan_predictive_window_t2_ParamLimits

0x3566,	// (0x000248f6) popup_fep_japan_predictive_window_t2

0x3599,	// (0x00024929) popup_fep_japan_predictive_window_t3_ParamLimits

0x3599,	// (0x00024929) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x00030a94) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x00030a94) popup_fep_japan_predictive_window_t

0xe7cf,	// (0x0002fb5f) bg_popup_sub_pane_cp23

0x35d0,	// (0x00024960) listscroll_japin_cand_pane

0x35d8,	// (0x00024968) popup_fep_japan_candidate_window_t1

0x35e6,	// (0x00024976) candidate_pane_ParamLimits

0x35e6,	// (0x00024976) candidate_pane

0x35f8,	// (0x00024988) scroll_pane_cp30

0x3602,	// (0x00024992) list_single_popup_jap_candidate_pane_ParamLimits

0x3602,	// (0x00024992) list_single_popup_jap_candidate_pane

0xe7cf,	// (0x0002fb5f) list_highlight_pane_cp30

0x3616,	// (0x000249a6) list_single_popup_jap_candidate_pane_t1

0xbf4c,	// (0x0002d2dc) level_1_signal

0xbf5e,	// (0x0002d2ee) level_2_signal

0xbf71,	// (0x0002d301) level_3_signal

0xbf84,	// (0x0002d314) level_4_signal

0xbf97,	// (0x0002d327) level_5_signal

0xbfaa,	// (0x0002d33a) level_6_signal

0xbfbd,	// (0x0002d34d) level_7_signal

0xbf4c,	// (0x0002d2dc) level_1_battery

0xbf5e,	// (0x0002d2ee) level_2_battery

0xbf71,	// (0x0002d301) level_3_battery

0xbf84,	// (0x0002d314) level_4_battery

0xbf97,	// (0x0002d327) level_5_battery

0xbfaa,	// (0x0002d33a) level_6_battery

0xbfbd,	// (0x0002d34d) level_7_battery

0x3698,	// (0x00024a28) list_menu_pane_ParamLimits

0x3698,	// (0x00024a28) list_menu_pane

0x36ae,	// (0x00024a3e) scroll_pane_cp25_ParamLimits

0x36ae,	// (0x00024a3e) scroll_pane_cp25

0x36c7,	// (0x00024a57) list_double2_graphic_pane_cp2_ParamLimits

0x36c7,	// (0x00024a57) list_double2_graphic_pane_cp2

0x36c7,	// (0x00024a57) list_double2_large_graphic_pane_cp2_ParamLimits

0x36c7,	// (0x00024a57) list_double2_large_graphic_pane_cp2

0x36c7,	// (0x00024a57) list_double2_pane_cp2_ParamLimits

0x36c7,	// (0x00024a57) list_double2_pane_cp2

0x36c7,	// (0x00024a57) list_double_graphic_pane_cp2_ParamLimits

0x36c7,	// (0x00024a57) list_double_graphic_pane_cp2

0x36c7,	// (0x00024a57) list_double_large_graphic_pane_cp2_ParamLimits

0x36c7,	// (0x00024a57) list_double_large_graphic_pane_cp2

0x36c7,	// (0x00024a57) list_double_number_pane_cp2_ParamLimits

0x36c7,	// (0x00024a57) list_double_number_pane_cp2

0x36c7,	// (0x00024a57) list_double_pane_cp2_ParamLimits

0x36c7,	// (0x00024a57) list_double_pane_cp2

0xbfd0,	// (0x0002d360) list_single_2graphic_pane_cp2_ParamLimits

0xbfd0,	// (0x0002d360) list_single_2graphic_pane_cp2

0xbfd0,	// (0x0002d360) list_single_graphic_heading_pane_cp2_ParamLimits

0xbfd0,	// (0x0002d360) list_single_graphic_heading_pane_cp2

0xbfd0,	// (0x0002d360) list_single_graphic_pane_cp2_ParamLimits

0xbfd0,	// (0x0002d360) list_single_graphic_pane_cp2

0xbfd0,	// (0x0002d360) list_single_heading_pane_cp2_ParamLimits

0xbfd0,	// (0x0002d360) list_single_heading_pane_cp2

0x370a,	// (0x00024a9a) list_single_large_graphic_pane_cp2_ParamLimits

0x370a,	// (0x00024a9a) list_single_large_graphic_pane_cp2

0xbfd0,	// (0x0002d360) list_single_number_heading_pane_cp2_ParamLimits

0xbfd0,	// (0x0002d360) list_single_number_heading_pane_cp2

0xbfd0,	// (0x0002d360) list_single_number_pane_cp2_ParamLimits

0xbfd0,	// (0x0002d360) list_single_number_pane_cp2

0xbfd0,	// (0x0002d360) list_single_pane_cp2_ParamLimits

0xbfd0,	// (0x0002d360) list_single_pane_cp2

0x3785,	// (0x00024b15) bg_popup_sub_pane_cp22

0x1bb2,	// (0x00022f42) popup_side_volume_key_window_g1

0x1bdc,	// (0x00022f6c) popup_side_volume_key_window_t1

0x1bfa,	// (0x00022f8a) volume_small_pane_cp1

0x13ad,	// (0x0002273d) bg_popup_sub_pane_cp24_ParamLimits

0x13ad,	// (0x0002273d) bg_popup_sub_pane_cp24

0x379b,	// (0x00024b2b) fep_china_uni_candidate_pane_ParamLimits

0x379b,	// (0x00024b2b) fep_china_uni_candidate_pane

0x37af,	// (0x00024b3f) fep_china_uni_entry_pane

0x37bf,	// (0x00024b4f) popup_fep_china_uni_window_g1

0x37db,	// (0x00024b6b) fep_china_uni_entry_pane_g1

0x37e5,	// (0x00024b75) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x00030ac5) fep_china_uni_entry_pane_g

0x37ef,	// (0x00024b7f) fep_entry_item_pane

0x37f9,	// (0x00024b89) fep_candidate_item_pane

0x3801,	// (0x00024b91) fep_china_uni_candidate_pane_g1

0x380b,	// (0x00024b9b) fep_china_uni_candidate_pane_g2

0x3813,	// (0x00024ba3) fep_china_uni_candidate_pane_g3

0x381b,	// (0x00024bab) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x00030aca) fep_china_uni_candidate_pane_g

0xe7c5,	// (0x0002fb55) fep_entry_item_pane_g1

0x3825,	// (0x00024bb5) fep_entry_item_pane_t1_ParamLimits

0x3825,	// (0x00024bb5) fep_entry_item_pane_t1

0x383b,	// (0x00024bcb) fep_candidate_item_pane_t1_ParamLimits

0x383b,	// (0x00024bcb) fep_candidate_item_pane_t1

0x3850,	// (0x00024be0) fep_candidate_item_pane_t2_ParamLimits

0x3850,	// (0x00024be0) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x00030ad3) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x00030ad3) fep_candidate_item_pane_t

0x10a1,	// (0x00022431) list_highlight_pane_cp31_ParamLimits

0x10a1,	// (0x00022431) list_highlight_pane_cp31

0x3862,	// (0x00024bf2) level_1_signal_lsc

0x386b,	// (0x00024bfb) level_2_signal_lsc

0x3874,	// (0x00024c04) level_3_signal_lsc

0x387d,	// (0x00024c0d) level_4_signal_lsc

0x3886,	// (0x00024c16) level_5_signal_lsc

0x388f,	// (0x00024c1f) level_6_signal_lsc

0x3898,	// (0x00024c28) level_7_signal_lsc

0x3898,	// (0x00024c28) level_1_battery_lsc

0x38a1,	// (0x00024c31) level_2_battery_lsc

0x38aa,	// (0x00024c3a) level_3_battery_lsc

0x38b3,	// (0x00024c43) level_4_battery_lsc

0x38bc,	// (0x00024c4c) level_5_battery_lsc

0x38c5,	// (0x00024c55) level_6_battery_lsc

0x3862,	// (0x00024bf2) level_7_battery_lsc

0x38ce,	// (0x00024c5e) scroll_handle_focus_pane_g1

0x38d7,	// (0x00024c67) scroll_handle_focus_pane_g2

0x38e0,	// (0x00024c70) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x00030ad8) scroll_handle_focus_pane_g

0xb511,	// (0x0002c8a1) list_single_2graphic_pane_g1_ParamLimits

0xb511,	// (0x0002c8a1) list_single_2graphic_pane_g1

0xb010,	// (0x0002c3a0) list_single_2graphic_pane_g2_ParamLimits

0xb010,	// (0x0002c3a0) list_single_2graphic_pane_g2

0x0415,	// (0x000217a5) list_single_2graphic_pane_g3_ParamLimits

0x0415,	// (0x000217a5) list_single_2graphic_pane_g3

0xb51d,	// (0x0002c8ad) list_single_2graphic_pane_g4_ParamLimits

0xb51d,	// (0x0002c8ad) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00030adf) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00030adf) list_single_2graphic_pane_g

0xb529,	// (0x0002c8b9) list_single_2graphic_pane_t1_ParamLimits

0xb529,	// (0x0002c8b9) list_single_2graphic_pane_t1

0xb557,	// (0x0002c8e7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb557,	// (0x0002c8e7) list_double2_graphic_large_graphic_pane_g1

0xb07b,	// (0x0002c40b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb07b,	// (0x0002c40b) list_double2_graphic_large_graphic_pane_g2

0xb047,	// (0x0002c3d7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb047,	// (0x0002c3d7) list_double2_graphic_large_graphic_pane_g3

0xb569,	// (0x0002c8f9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb569,	// (0x0002c8f9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x00030ae8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x00030ae8) list_double2_graphic_large_graphic_pane_g

0xb575,	// (0x0002c905) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb575,	// (0x0002c905) list_double2_graphic_large_graphic_pane_t1

0xb58b,	// (0x0002c91b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb58b,	// (0x0002c91b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00030af1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00030af1) list_double2_graphic_large_graphic_pane_t

0x3a22,	// (0x00024db2) popup_fast_swap_window_ParamLimits

0x3a22,	// (0x00024db2) popup_fast_swap_window

0x3a40,	// (0x00024dd0) popup_side_volume_key_window

0x3a5e,	// (0x00024dee) stacon_top_pane

0x3a68,	// (0x00024df8) status_pane_ParamLimits

0x3a68,	// (0x00024df8) status_pane

0x3a5e,	// (0x00024dee) status_small_pane

0xe7cf,	// (0x0002fb5f) control_pane

0xe7cf,	// (0x0002fb5f) stacon_bottom_pane

0x3003,	// (0x00024393) scroll_pane_cp121

0x2ffa,	// (0x0002438a) set_content_pane

0xc05f,	// (0x0002d3ef) bg_active_tab_pane_g1_cp1

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp1

0xc068,	// (0x0002d3f8) bg_active_tab_pane_g3_cp1

0xc05f,	// (0x0002d3ef) bg_passive_tab_pane_g1_cp1

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp1

0xc068,	// (0x0002d3f8) bg_passive_tab_pane_g3_cp1

0xc071,	// (0x0002d401) bg_active_tab_pane_g1_cp2

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp2

0xc07a,	// (0x0002d40a) bg_active_tab_pane_g3_cp2

0xc071,	// (0x0002d401) bg_passive_tab_pane_g1_cp2

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp2

0xc07a,	// (0x0002d40a) bg_passive_tab_pane_g3_cp2

0xc083,	// (0x0002d413) bg_active_tab_pane_g1_cp3

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp3

0xc08c,	// (0x0002d41c) bg_active_tab_pane_g3_cp3

0xc083,	// (0x0002d413) bg_passive_tab_pane_g1_cp3

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp3

0xc08c,	// (0x0002d41c) bg_passive_tab_pane_g3_cp3

0xc095,	// (0x0002d425) bg_active_tab_pane_g1_cp4

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp4

0xc09e,	// (0x0002d42e) bg_active_tab_pane_g3_cp4

0xc095,	// (0x0002d425) bg_passive_tab_pane_g1_cp4

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp4

0xc09e,	// (0x0002d42e) bg_passive_tab_pane_g3_cp4

0x397c,	// (0x00024d0c) bg_active_tab_pane_g1_cp5

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp5

0x3985,	// (0x00024d15) bg_active_tab_pane_g3_cp5

0x397c,	// (0x00024d0c) bg_passive_tab_pane_g1_cp5

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp5

0x3985,	// (0x00024d15) bg_passive_tab_pane_g3_cp5

0xc0a7,	// (0x0002d437) list_set_graphic_pane_ParamLimits

0xc0a7,	// (0x0002d437) list_set_graphic_pane

0xe7cf,	// (0x0002fb5f) bg_set_opt_pane_cp4

0xc0bc,	// (0x0002d44c) list_set_graphic_pane_g1_ParamLimits

0xc0bc,	// (0x0002d44c) list_set_graphic_pane_g1

0xc0c8,	// (0x0002d458) list_set_graphic_pane_g2_ParamLimits

0xc0c8,	// (0x0002d458) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00030af6) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00030af6) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00030e69) volume_small_pane_cp_g

0x39d3,	// (0x00024d63) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x39d3,	// (0x00024d63) list_double2_large_graphic_pane_g1_cp2

0x39e1,	// (0x00024d71) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x39e1,	// (0x00024d71) list_double2_large_graphic_pane_g2_cp2

0x39f2,	// (0x00024d82) list_double2_large_graphic_pane_g3_cp2

0x39fa,	// (0x00024d8a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x39fa,	// (0x00024d8a) list_double2_large_graphic_pane_t1_cp2

0x3a10,	// (0x00024da0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3a10,	// (0x00024da0) list_double2_large_graphic_pane_t2_cp2

0x5c66,	// (0x00026ff6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5c66,	// (0x00026ff6) list_double_large_graphic_pane_g1_cp2

0x5c79,	// (0x00027009) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5c79,	// (0x00027009) list_double_large_graphic_pane_g2_cp2

0x3b86,	// (0x00024f16) list_double_large_graphic_pane_g3_cp2

0x5c8a,	// (0x0002701a) list_double_large_graphic_pane_g4_cp

0x5c92,	// (0x00027022) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5c92,	// (0x00027022) list_double_large_graphic_pane_t1_cp2

0x5ca9,	// (0x00027039) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5ca9,	// (0x00027039) list_double_large_graphic_pane_t2_cp2

0x3a76,	// (0x00024e06) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3a76,	// (0x00024e06) list_double2_graphic_pane_g1_cp2

0x3a84,	// (0x00024e14) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3a84,	// (0x00024e14) list_double2_graphic_pane_g2_cp2

0x3a95,	// (0x00024e25) list_double2_graphic_pane_g3_cp2

0x3a9f,	// (0x00024e2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3a9f,	// (0x00024e2f) list_double2_graphic_pane_t1_cp2

0x3ab5,	// (0x00024e45) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3ab5,	// (0x00024e45) list_double2_graphic_pane_t2_cp2

0x3ac7,	// (0x00024e57) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3ac7,	// (0x00024e57) list_single_number_heading_pane_g1_cp2

0x3ad3,	// (0x00024e63) list_single_number_heading_pane_g2_cp2

0x3adb,	// (0x00024e6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3adb,	// (0x00024e6b) list_single_number_heading_pane_t1_cp2

0x3af1,	// (0x00024e81) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3af1,	// (0x00024e81) list_single_number_heading_pane_t2_cp2

0x3b05,	// (0x00024e95) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3b05,	// (0x00024e95) list_single_number_heading_pane_t3_cp2

0x3ac7,	// (0x00024e57) list_single_heading_pane_g1_cp2_ParamLimits

0x3ac7,	// (0x00024e57) list_single_heading_pane_g1_cp2

0x3ad3,	// (0x00024e63) list_single_heading_pane_g2_cp2

0x3adb,	// (0x00024e6b) list_single_heading_pane_t1_cp2_ParamLimits

0x3adb,	// (0x00024e6b) list_single_heading_pane_t1_cp2

0x5a60,	// (0x00026df0) list_single_heading_pane_t2_cp2_ParamLimits

0x5a60,	// (0x00026df0) list_single_heading_pane_t2_cp2

0x59a2,	// (0x00026d32) list_double_graphic_pane_g1_cp2_ParamLimits

0x59a2,	// (0x00026d32) list_double_graphic_pane_g1_cp2

0x59ae,	// (0x00026d3e) list_double_graphic_pane_g2_cp2_ParamLimits

0x59ae,	// (0x00026d3e) list_double_graphic_pane_g2_cp2

0x59bd,	// (0x00026d4d) list_double_graphic_pane_g3_cp2

0x59c5,	// (0x00026d55) list_double_graphic_pane_t1_cp2_ParamLimits

0x59c5,	// (0x00026d55) list_double_graphic_pane_t1_cp2

0x59db,	// (0x00026d6b) list_double_graphic_pane_t2_cp2_ParamLimits

0x59db,	// (0x00026d6b) list_double_graphic_pane_t2_cp2

0x3b7a,	// (0x00024f0a) list_double_number_pane_g1_cp2_ParamLimits

0x3b7a,	// (0x00024f0a) list_double_number_pane_g1_cp2

0x3b86,	// (0x00024f16) list_double_number_pane_g2_cp2

0x5966,	// (0x00026cf6) list_double_number_pane_t1_cp2_ParamLimits

0x5966,	// (0x00026cf6) list_double_number_pane_t1_cp2

0x597a,	// (0x00026d0a) list_double_number_pane_t2_cp2_ParamLimits

0x597a,	// (0x00026d0a) list_double_number_pane_t2_cp2

0x5990,	// (0x00026d20) list_double_number_pane_t3_cp2_ParamLimits

0x5990,	// (0x00026d20) list_double_number_pane_t3_cp2

0x584f,	// (0x00026bdf) list_single_graphic_pane_g1_cp2_ParamLimits

0x584f,	// (0x00026bdf) list_single_graphic_pane_g1_cp2

0x3be0,	// (0x00024f70) list_single_graphic_pane_g2_cp2_ParamLimits

0x3be0,	// (0x00024f70) list_single_graphic_pane_g2_cp2

0x3bec,	// (0x00024f7c) list_single_graphic_pane_g3_cp2

0x5825,	// (0x00026bb5) list_single_graphic_pane_t1_cp2_ParamLimits

0x5825,	// (0x00026bb5) list_single_graphic_pane_t1_cp2

0x3be0,	// (0x00024f70) list_single_number_pane_g1_cp2_ParamLimits

0x3be0,	// (0x00024f70) list_single_number_pane_g1_cp2

0x3bec,	// (0x00024f7c) list_single_number_pane_g2_cp2

0x5825,	// (0x00026bb5) list_single_number_pane_t1_cp2_ParamLimits

0x5825,	// (0x00026bb5) list_single_number_pane_t1_cp2

0x583b,	// (0x00026bcb) list_single_number_pane_t2_cp2_ParamLimits

0x583b,	// (0x00026bcb) list_single_number_pane_t2_cp2

0x39e1,	// (0x00024d71) list_double2_pane_g1_cp2_ParamLimits

0x39e1,	// (0x00024d71) list_double2_pane_g1_cp2

0x39f2,	// (0x00024d82) list_double2_pane_g2_cp2

0x3b52,	// (0x00024ee2) list_double2_pane_t1_cp2_ParamLimits

0x3b52,	// (0x00024ee2) list_double2_pane_t1_cp2

0x3b68,	// (0x00024ef8) list_double2_pane_t2_cp2_ParamLimits

0x3b68,	// (0x00024ef8) list_double2_pane_t2_cp2

0x3b7a,	// (0x00024f0a) list_double_pane_g1_cp2_ParamLimits

0x3b7a,	// (0x00024f0a) list_double_pane_g1_cp2

0x3b86,	// (0x00024f16) list_double_pane_g2_cp2

0x3b8e,	// (0x00024f1e) list_double_pane_t1_cp2_ParamLimits

0x3b8e,	// (0x00024f1e) list_double_pane_t1_cp2

0x3ba4,	// (0x00024f34) list_double_pane_t2_cp2_ParamLimits

0x3ba4,	// (0x00024f34) list_double_pane_t2_cp2

0x3bd0,	// (0x00024f60) list_single_pane_cp2_g3

0x3be0,	// (0x00024f70) list_single_pane_g1_cp2_ParamLimits

0x3be0,	// (0x00024f70) list_single_pane_g1_cp2

0x3bec,	// (0x00024f7c) list_single_pane_g2_cp2

0x3bf4,	// (0x00024f84) list_single_pane_t1_cp2_ParamLimits

0x3bf4,	// (0x00024f84) list_single_pane_t1_cp2

0x3c0c,	// (0x00024f9c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3c0c,	// (0x00024f9c) list_single_large_graphic_pane_g1_cp2

0x3c1a,	// (0x00024faa) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3c1a,	// (0x00024faa) list_single_large_graphic_pane_g2_cp2

0x3c26,	// (0x00024fb6) list_single_large_graphic_pane_g3_cp2

0x3c2e,	// (0x00024fbe) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3c2e,	// (0x00024fbe) list_single_large_graphic_pane_g4_cp1

0x3c48,	// (0x00024fd8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3c48,	// (0x00024fd8) list_single_large_graphic_pane_t1_cp2

0x57ef,	// (0x00026b7f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x57ef,	// (0x00026b7f) list_single_graphic_heading_pane_g1_cp2

0x57bc,	// (0x00026b4c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x57bc,	// (0x00026b4c) list_single_graphic_heading_pane_g4_cp2

0x3bec,	// (0x00024f7c) list_single_graphic_heading_pane_g5_cp2

0x57fb,	// (0x00026b8b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x57fb,	// (0x00026b8b) list_single_graphic_heading_pane_t1_cp2

0x5811,	// (0x00026ba1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5811,	// (0x00026ba1) list_single_graphic_heading_pane_t2_cp2

0x57b0,	// (0x00026b40) list_single_2graphic_pane_g1_cp2_ParamLimits

0x57b0,	// (0x00026b40) list_single_2graphic_pane_g1_cp2

0x57bc,	// (0x00026b4c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x57bc,	// (0x00026b4c) list_single_2graphic_pane_g2_cp2

0x3bec,	// (0x00024f7c) list_single_2graphic_pane_g3_cp2

0x57cd,	// (0x00026b5d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x57cd,	// (0x00026b5d) list_single_2graphic_pane_g4_cp2

0x57d9,	// (0x00026b69) list_single_2graphic_pane_t1_cp2_ParamLimits

0x57d9,	// (0x00026b69) list_single_2graphic_pane_t1_cp2

0xe7c5,	// (0x0002fb55) list_highlight_pane_g10_cp1

0x5388,	// (0x00026718) list_highlight_pane_g1_cp1

0x5390,	// (0x00026720) list_highlight_pane_g2_cp1

0x5398,	// (0x00026728) list_highlight_pane_g3_cp1

0x53a0,	// (0x00026730) list_highlight_pane_g4_cp1

0x53a8,	// (0x00026738) list_highlight_pane_g5_cp1

0x53b0,	// (0x00026740) list_highlight_pane_g6_cp1

0x53b8,	// (0x00026748) list_highlight_pane_g7_cp1

0x53c0,	// (0x00026750) list_highlight_pane_g8_cp1

0x53c8,	// (0x00026758) list_highlight_pane_g9_cp1

0xd5cb,	// (0x0002e95b) form_field_slider_pane_t3

0xd5d9,	// (0x0002e969) form_field_slider_pane_t4

0x52c4,	// (0x00026654) slider_form_pane_ParamLimits

0x52c4,	// (0x00026654) slider_form_pane

0xe7cf,	// (0x0002fb5f) control_abbreviations

0xe7cf,	// (0x0002fb5f) control_conventions

0xe7cf,	// (0x0002fb5f) control_definitions

0xe7cf,	// (0x0002fb5f) format_table_attribute

0x5ab6,	// (0x00026e46) bg_popup_preview_window_pane_g9

0xe7cf,	// (0x0002fb5f) format_table_data2

0xe7cf,	// (0x0002fb5f) format_table_data3

0xe7cf,	// (0x0002fb5f) format_table_data_example

0x0008,

0xe7cf,	// (0x0002fb5f) intro_purpose

0xf8f6,	// (0x00030c86) bg_popup_preview_window_pane_g

0xe7cf,	// (0x0002fb5f) texts_category

0xe7cf,	// (0x0002fb5f) texts_graphics

0x3c5e,	// (0x00024fee) text_digital

0x3c6d,	// (0x00024ffd) text_primary

0x3c7c,	// (0x0002500c) text_primary_small

0x3c8b,	// (0x0002501b) text_secondary

0x3c9a,	// (0x0002502a) text_title

0x6252,	// (0x000275e2) bg_passive_tab_pane_g1_cp3_srt

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp3_srt

0x625b,	// (0x000275eb) bg_passive_tab_pane_g3_cp3_srt

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp3_srt_ParamLimits

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp3_srt

0x6264,	// (0x000275f4) tabs_4_active_pane_srt_g1

0xd9de,	// (0x0002ed6e) tabs_4_active_pane_srt_t1_ParamLimits

0xd9de,	// (0x0002ed6e) tabs_4_active_pane_srt_t1

0x6252,	// (0x000275e2) bg_active_tab_pane_g1_cp3_copy1

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp3_copy1

0x625b,	// (0x000275eb) bg_active_tab_pane_g3_cp3_copy1

0x10a1,	// (0x00022431) tabs_2_long_active_pane_srt_ParamLimits

0x10a1,	// (0x00022431) tabs_2_long_active_pane_srt

0x10a1,	// (0x00022431) tabs_2_long_passive_pane_srt_ParamLimits

0x10a1,	// (0x00022431) tabs_2_long_passive_pane_srt

0x402f,	// (0x000253bf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x402f,	// (0x000253bf) bg_passive_tab_pane_cp4_srt

0x5f06,	// (0x00027296) bg_passive_tab_pane_g1_cp4_srt

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp4_srt

0x5f0f,	// (0x0002729f) bg_passive_tab_pane_g3_cp4_srt

0x10a1,	// (0x00022431) bg_active_tab_pane_cp4_srt_ParamLimits

0x10a1,	// (0x00022431) bg_active_tab_pane_cp4_srt

0xd7d4,	// (0x0002eb64) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd7d4,	// (0x0002eb64) tabs_2_long_active_pane_srt_t1

0x5f06,	// (0x00027296) bg_active_tab_pane_g1_cp4_srt

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp4_srt

0x5f0f,	// (0x0002729f) bg_active_tab_pane_g3_cp4_srt

0x13ad,	// (0x0002273d) tabs_3_long_active_pane_srt_ParamLimits

0x13ad,	// (0x0002273d) tabs_3_long_active_pane_srt

0x13ad,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x13ad,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt

0x13ad,	// (0x0002273d) tabs_3_long_passive_pane_srt_ParamLimits

0x13ad,	// (0x0002273d) tabs_3_long_passive_pane_srt

0x402f,	// (0x000253bf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x402f,	// (0x000253bf) bg_passive_tab_pane_cp5_srt

0x397c,	// (0x00024d0c) bg_passive_tab_pane_g1_cp5_srt

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp5_srt

0x3985,	// (0x00024d15) bg_passive_tab_pane_g3_cp5_srt

0x10a1,	// (0x00022431) bg_active_tab_pane_cp5_srt_ParamLimits

0x10a1,	// (0x00022431) bg_active_tab_pane_cp5_srt

0xd7be,	// (0x0002eb4e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd7be,	// (0x0002eb4e) tabs_3_long_active_pane_srt_t1

0x397c,	// (0x00024d0c) bg_active_tab_pane_g1_cp5_srt

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp5_srt

0x3985,	// (0x00024d15) bg_active_tab_pane_g3_cp5_srt

0x5ee6,	// (0x00027276) navi_text_pane_srt_t1

0x5ede,	// (0x0002726e) navi_icon_pane_srt_g1

0x3e71,	// (0x00025201) midp_editing_number_pane_srt

0x3ca9,	// (0x00025039) midp_ticker_pane_srt

0x3e79,	// (0x00025209) midp_ticker_pane_srt_g1

0x3e81,	// (0x00025211) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00030b15) midp_ticker_pane_srt_g

0x3e89,	// (0x00025219) midp_ticker_pane_srt_t1

0x5ecf,	// (0x0002725f) midp_editing_number_pane_t1_copy1

0xc0ec,	// (0x0002d47c) listscroll_midp_pane

0xc0ec,	// (0x0002d47c) midp_form_pane

0x3d1f,	// (0x000250af) midp_info_popup_window_ParamLimits

0x3d1f,	// (0x000250af) midp_info_popup_window

0x30d8,	// (0x00024468) bg_popup_sub_pane_cp50_ParamLimits

0x30d8,	// (0x00024468) bg_popup_sub_pane_cp50

0x4fbe,	// (0x0002634e) listscroll_midp_info_pane_ParamLimits

0x4fbe,	// (0x0002634e) listscroll_midp_info_pane

0x4fa6,	// (0x00026336) listscroll_form_midp_pane_ParamLimits

0x4fa6,	// (0x00026336) listscroll_form_midp_pane

0x4fb2,	// (0x00026342) scroll_bar_cp050

0xd5bf,	// (0x0002e94f) list_midp_pane

0x6c9b,	// (0x0002802b) signal_pane_g2_cp

0x4ec0,	// (0x00026250) listscroll_midp_info_pane_t1_ParamLimits

0x4ec0,	// (0x00026250) listscroll_midp_info_pane_t1

0x4ed8,	// (0x00026268) listscroll_midp_info_pane_t2_ParamLimits

0x4ed8,	// (0x00026268) listscroll_midp_info_pane_t2

0x4f16,	// (0x000262a6) listscroll_midp_info_pane_t3_ParamLimits

0x4f16,	// (0x000262a6) listscroll_midp_info_pane_t3

0x4f50,	// (0x000262e0) listscroll_midp_info_pane_t4_ParamLimits

0x4f50,	// (0x000262e0) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x00030bc1) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x00030bc1) listscroll_midp_info_pane_t

0x31a2,	// (0x00024532) scroll_pane_cp21

0x4e5a,	// (0x000261ea) form_midp_field_choice_group_pane

0x4e63,	// (0x000261f3) form_midp_field_text_pane

0x4ea6,	// (0x00026236) form_midp_field_time_pane

0x4eae,	// (0x0002623e) form_midp_gauge_slider_pane

0x4eb7,	// (0x00026247) form_midp_gauge_wait_pane

0xe7cf,	// (0x0002fb5f) form_midp_image_pane

0xb5b9,	// (0x0002c949) list_single_midp_pane_ParamLimits

0xb5b9,	// (0x0002c949) list_single_midp_pane

0xd59d,	// (0x0002e92d) form_midp_field_text_pane_t1

0x4c5e,	// (0x00025fee) input_focus_pane_cp050

0x4e49,	// (0x000261d9) list_midp_form_text_pane

0x4dfa,	// (0x0002618a) form_midp_field_choice_group_pane_t1

0x4e08,	// (0x00026198) input_focus_pane_cp051

0x4e1c,	// (0x000261ac) list_midp_choice_pane

0xe7cf,	// (0x0002fb5f) status_idle_pane

0x4dde,	// (0x0002616e) form_midp_field_time_pane_t1

0xe7c5,	// (0x0002fb55) wait_anim_pane_g2_copy1

0x4dec,	// (0x0002617c) form_midp_field_time_pane_t2

0x0001,

0x3dcf,	// (0x0002515f) aid_navinavi_width_2_pane

0xf82c,	// (0x00030bbc) form_midp_field_time_pane_t

0xe7cf,	// (0x0002fb5f) input_focus_pane_cp052

0xe7cf,	// (0x0002fb5f) bg_input_focus_pane_cp040

0x4d9e,	// (0x0002612e) form_midp_gauge_slider_pane_t1

0x4dac,	// (0x0002613c) form_midp_gauge_slider_pane_t2

0xd581,	// (0x0002e911) form_midp_gauge_slider_pane_t3

0xd58f,	// (0x0002e91f) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x00030bb3) form_midp_gauge_slider_pane_t

0x4dd6,	// (0x00026166) form_midp_slider_pane

0x10a1,	// (0x00022431) bg_input_focus_pane_cp041_ParamLimits

0x10a1,	// (0x00022431) bg_input_focus_pane_cp041

0x4d6b,	// (0x000260fb) form_midp_gauge_wait_pane_t1_ParamLimits

0x4d6b,	// (0x000260fb) form_midp_gauge_wait_pane_t1

0x4d7d,	// (0x0002610d) form_midp_gauge_wait_pane_t2_ParamLimits

0x4d7d,	// (0x0002610d) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x00030bae) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x00030bae) form_midp_gauge_wait_pane_t

0x4d8f,	// (0x0002611f) form_midp_wait_pane_ParamLimits

0x4d8f,	// (0x0002611f) form_midp_wait_pane

0x4d35,	// (0x000260c5) form_midp_image_pane_g1

0x4d3e,	// (0x000260ce) form_midp_image_pane_t1

0x4d4d,	// (0x000260dd) form_midp_image_pane_t2

0xd570,	// (0x0002e900) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x00030ba7) form_midp_image_pane_t

0x4d2c,	// (0x000260bc) list_single_midp_pane_g1

0x04cd,	// (0x0002185d) list_single_midp_pane_t1

0xd55d,	// (0x0002e8ed) list_midp_form_item_pane_ParamLimits

0xd55d,	// (0x0002e8ed) list_midp_form_item_pane

0x3d77,	// (0x00025107) list_midp_form_item_pane_t1

0x3d86,	// (0x00025116) midp_ticker_pane_g1

0x3d92,	// (0x00025122) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x00030afb) midp_ticker_pane_g

0xc194,	// (0x0002d524) midp_ticker_pane_t1

0xd963,	// (0x0002ecf3) midp_editing_number_pane_t1

0x612c,	// (0x000274bc) midp_editing_number_pane

0x613b,	// (0x000274cb) midp_ticker_pane

0x5ebf,	// (0x0002724f) ai_message_heading_pane

0xe7cf,	// (0x0002fb5f) bg_popup_window_pane_cp14

0x5ec7,	// (0x00027257) listscroll_ai_message_pane

0x5e45,	// (0x000271d5) ai_message_heading_pane_g1_ParamLimits

0x5e45,	// (0x000271d5) ai_message_heading_pane_g1

0x5e51,	// (0x000271e1) ai_message_heading_pane_g2_ParamLimits

0x5e51,	// (0x000271e1) ai_message_heading_pane_g2

0x5e5f,	// (0x000271ef) ai_message_heading_pane_g3_ParamLimits

0x5e5f,	// (0x000271ef) ai_message_heading_pane_g3

0x5e6b,	// (0x000271fb) ai_message_heading_pane_g4_ParamLimits

0x5e6b,	// (0x000271fb) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x00030ce8) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x00030ce8) ai_message_heading_pane_g

0x5e77,	// (0x00027207) ai_message_heading_pane_t1_ParamLimits

0x5e77,	// (0x00027207) ai_message_heading_pane_t1

0x5e91,	// (0x00027221) ai_message_heading_pane_t2_ParamLimits

0x5e91,	// (0x00027221) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x00030cf1) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x00030cf1) ai_message_heading_pane_t

0x5ea5,	// (0x00027235) bg_popup_heading_pane_cp1_ParamLimits

0x5ea5,	// (0x00027235) bg_popup_heading_pane_cp1

0x5e33,	// (0x000271c3) list_ai_message_pane_ParamLimits

0x5e33,	// (0x000271c3) list_ai_message_pane

0x31a2,	// (0x00024532) scroll_pane_cp10

0x5dcf,	// (0x0002715f) list_ai_message_pane_g1

0x5dd7,	// (0x00027167) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x00030cc5) list_ai_message_pane_g

0x5ddf,	// (0x0002716f) list_ai_message_pane_t1_ParamLimits

0x5ddf,	// (0x0002716f) list_ai_message_pane_t1

0x5df4,	// (0x00027184) list_ai_message_pane_t2_ParamLimits

0x5df4,	// (0x00027184) list_ai_message_pane_t2

0x5e09,	// (0x00027199) list_ai_message_pane_t3_ParamLimits

0x5e09,	// (0x00027199) list_ai_message_pane_t3

0x5e1e,	// (0x000271ae) list_ai_message_pane_t4_ParamLimits

0x5e1e,	// (0x000271ae) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x00030cca) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x00030cca) list_ai_message_pane_t

0xd7a4,	// (0x0002eb34) cell_ai_soft_ind_pane_ParamLimits

0xd7a4,	// (0x0002eb34) cell_ai_soft_ind_pane

0x3db0,	// (0x00025140) cell_ai_soft_ind_pane_g1_ParamLimits

0x3db0,	// (0x00025140) cell_ai_soft_ind_pane_g1

0xe7cf,	// (0x0002fb5f) grid_highlight_cp1

0x3dbd,	// (0x0002514d) text_secondary_cp56_ParamLimits

0x3dbd,	// (0x0002514d) text_secondary_cp56

0x5d8d,	// (0x0002711d) example_general_pane_ParamLimits

0x5d8d,	// (0x0002711d) example_general_pane

0x5d99,	// (0x00027129) example_parent_pane_g1_ParamLimits

0x5d99,	// (0x00027129) example_parent_pane_g1

0x5da5,	// (0x00027135) example_parent_pane_t1_ParamLimits

0x5da5,	// (0x00027135) example_parent_pane_t1

0xc759,	// (0x0002dae9) popup_preview_text_window_ParamLimits

0xc759,	// (0x0002dae9) popup_preview_text_window

0x3bd8,	// (0x00024f68) list_single_pane_cp2_g4

0x1463,	// (0x000227f3) bg_popup_preview_window_pane_ParamLimits

0x1463,	// (0x000227f3) bg_popup_preview_window_pane

0x5ac0,	// (0x00026e50) popup_preview_text_window_t1_ParamLimits

0x5ac0,	// (0x00026e50) popup_preview_text_window_t1

0x5ade,	// (0x00026e6e) popup_preview_text_window_t2_ParamLimits

0x5ade,	// (0x00026e6e) popup_preview_text_window_t2

0x5b27,	// (0x00026eb7) popup_preview_text_window_t3_ParamLimits

0x5b27,	// (0x00026eb7) popup_preview_text_window_t3

0x5b6c,	// (0x00026efc) popup_preview_text_window_t4_ParamLimits

0x5b6c,	// (0x00026efc) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x00030c99) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x00030c99) popup_preview_text_window_t

0x5bea,	// (0x00026f7a) scroll_pane_cp11

0x4b6c,	// (0x00025efc) bg_popup_preview_window_pane_g1

0x5a74,	// (0x00026e04) bg_popup_preview_window_pane_g2

0x5a7e,	// (0x00026e0e) bg_popup_preview_window_pane_g3

0x5a88,	// (0x00026e18) bg_popup_preview_window_pane_g4

0x5a92,	// (0x00026e22) bg_popup_preview_window_pane_g5

0x5a9c,	// (0x00026e2c) bg_popup_preview_window_pane_g6

0x5aa4,	// (0x00026e34) bg_popup_preview_window_pane_g7

0x5aac,	// (0x00026e3c) bg_popup_preview_window_pane_g8

0x0bec,	// (0x00021f7c) aid_popup_width_pane

0xc6c9,	// (0x0002da59) popup_midp_note_alarm_window_ParamLimits

0xc6c9,	// (0x0002da59) popup_midp_note_alarm_window

0x3014,	// (0x000243a4) data_form_pane_ParamLimits

0xb415,	// (0x0002c7a5) form_field_data_pane_g1

0xb41f,	// (0x0002c7af) form_field_data_pane_t1_ParamLimits

0x3020,	// (0x000243b0) input_focus_pane_ParamLimits

0x302e,	// (0x000243be) data_form_wide_pane_ParamLimits

0x01e5,	// (0x00021575) form_field_data_wide_pane_g1

0x01f1,	// (0x00021581) form_field_data_wide_pane_t1_ParamLimits

0x1729,	// (0x00022ab9) input_focus_pane_cp6_ParamLimits

0xbe40,	// (0x0002d1d0) input_popup_find_pane_g1_ParamLimits

0xbe40,	// (0x0002d1d0) input_popup_find_pane_g1

0x1a5f,	// (0x00022def) aid_navi_side_left_pane

0x1a74,	// (0x00022e04) aid_navi_side_right_pane

0x5483,	// (0x00026813) bg_popup_window_pane_cp30_ParamLimits

0x5483,	// (0x00026813) bg_popup_window_pane_cp30

0x54fd,	// (0x0002688d) popup_midp_note_alarm_window_g1_ParamLimits

0x54fd,	// (0x0002688d) popup_midp_note_alarm_window_g1

0x552d,	// (0x000268bd) popup_midp_note_alarm_window_t1_ParamLimits

0x552d,	// (0x000268bd) popup_midp_note_alarm_window_t1

0x55ce,	// (0x0002695e) popup_midp_note_alarm_window_t2_ParamLimits

0x55ce,	// (0x0002695e) popup_midp_note_alarm_window_t2

0x567c,	// (0x00026a0c) popup_midp_note_alarm_window_t3_ParamLimits

0x567c,	// (0x00026a0c) popup_midp_note_alarm_window_t3

0x56ae,	// (0x00026a3e) popup_midp_note_alarm_window_t4_ParamLimits

0x56ae,	// (0x00026a3e) popup_midp_note_alarm_window_t4

0x56d4,	// (0x00026a64) popup_midp_note_alarm_window_t5_ParamLimits

0x56d4,	// (0x00026a64) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x00030c36) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x00030c36) popup_midp_note_alarm_window_t

0x5780,	// (0x00026b10) wait_bar_pane_cp1_ParamLimits

0x5780,	// (0x00026b10) wait_bar_pane_cp1

0xe7cf,	// (0x0002fb5f) wait_anim_pane_copy1

0xe7cf,	// (0x0002fb5f) wait_border_pane_copy1

0x5168,	// (0x000264f8) wait_border_pane_g1_copy1

0x020b,	// (0x0002159b) form_field_popup_pane_g1

0xb439,	// (0x0002c7c9) form_field_popup_pane_t1_ParamLimits

0x3020,	// (0x000243b0) input_focus_pane_cp7_ParamLimits

0x305a,	// (0x000243ea) list_form_pane_ParamLimits

0x022d,	// (0x000215bd) form_field_popup_wide_pane_g1

0x0235,	// (0x000215c5) form_field_popup_wide_pane_t1_ParamLimits

0x3020,	// (0x000243b0) input_focus_pane_cp8_ParamLimits

0x3066,	// (0x000243f6) list_form_wide_pane_ParamLimits

0x62df,	// (0x0002766f) aid_size_cell_graphic_pane

0xb4b8,	// (0x0002c848) data_form_pane_t1_ParamLimits

0xb5e3,	// (0x0002c973) data_form_wide_pane_t1_ParamLimits

0xd1cc,	// (0x0002e55c) bg_status_flat_pane

0xba60,	// (0x0002cdf0) title_pane_t1_ParamLimits

0x1069,	// (0x000223f9) title_pane_t2_ParamLimits

0x108f,	// (0x0002241f) title_pane_t3_ParamLimits

0xf56f,	// (0x000308ff) title_pane_t_ParamLimits

0xbf4c,	// (0x0002d2dc) level_1_signal_ParamLimits

0xbf5e,	// (0x0002d2ee) level_2_signal_ParamLimits

0xbf71,	// (0x0002d301) level_3_signal_ParamLimits

0xbf84,	// (0x0002d314) level_4_signal_ParamLimits

0xbf97,	// (0x0002d327) level_5_signal_ParamLimits

0xbfaa,	// (0x0002d33a) level_6_signal_ParamLimits

0xbfbd,	// (0x0002d34d) level_7_signal_ParamLimits

0xbf4c,	// (0x0002d2dc) level_1_battery_ParamLimits

0xbf5e,	// (0x0002d2ee) level_2_battery_ParamLimits

0xbf71,	// (0x0002d301) level_3_battery_ParamLimits

0xbf84,	// (0x0002d314) level_4_battery_ParamLimits

0xbf97,	// (0x0002d327) level_5_battery_ParamLimits

0xbfaa,	// (0x0002d33a) level_6_battery_ParamLimits

0xbfbd,	// (0x0002d34d) level_7_battery_ParamLimits

0x5388,	// (0x00026718) bg_status_flat_pane_g1

0x5390,	// (0x00026720) bg_status_flat_pane_g2

0x5398,	// (0x00026728) bg_status_flat_pane_g3

0x53a0,	// (0x00026730) bg_status_flat_pane_g4

0x53a8,	// (0x00026738) bg_status_flat_pane_g5

0x53b0,	// (0x00026740) bg_status_flat_pane_g6

0x53b8,	// (0x00026748) bg_status_flat_pane_g7

0xbaf4,	// (0x0002ce84) tabs_3_active_pane_t1_ParamLimits

0xbaf4,	// (0x0002ce84) tabs_3_passive_pane_t1_ParamLimits

0xbb0e,	// (0x0002ce9e) tabs_4_active_pane_t1_ParamLimits

0xbb0e,	// (0x0002ce9e) tabs_4_1_passive_pane_t1_ParamLimits

0xbe56,	// (0x0002d1e6) tabs_2_active_pane_t1_ParamLimits

0xbe56,	// (0x0002d1e6) tabs_2_passive_pane_t1_ParamLimits

0x10a1,	// (0x00022431) bg_active_tab_pane_cp4_ParamLimits

0xbe68,	// (0x0002d1f8) tabs_2_long_active_pane_t1_ParamLimits

0x402f,	// (0x000253bf) bg_passive_tab_pane_cp4_ParamLimits

0x1fa9,	// (0x00023339) list_single_midp_graphic_pane_t1_ParamLimits

0x10a1,	// (0x00022431) bg_active_tab_pane_cp5_ParamLimits

0xbe7b,	// (0x0002d20b) tabs_3_long_active_pane_t1_ParamLimits

0x402f,	// (0x000253bf) bg_passive_tab_pane_cp5_ParamLimits

0x1fa9,	// (0x00023339) list_single_midp_graphic_pane_t1

0xd1cc,	// (0x0002e55c) bg_status_flat_pane_ParamLimits

0x47e4,	// (0x00025b74) indicator_pane_cp2_ParamLimits

0x47e4,	// (0x00025b74) indicator_pane_cp2

0xd362,	// (0x0002e6f2) navi_pane_srt_ParamLimits

0xd362,	// (0x0002e6f2) navi_pane_srt

0x494b,	// (0x00025cdb) popup_clock_digital_analogue_window_cp1

0x1211,	// (0x000225a1) indicator_pane_t1

0x3ca9,	// (0x00025039) copy_highlight_pane

0x3ca9,	// (0x00025039) cursor_graphics_pane

0x3ca9,	// (0x00025039) graphic_within_text_pane

0x3ca9,	// (0x00025039) link_highlight_pane

0x5bad,	// (0x00026f3d) popup_preview_text_window_t5_ParamLimits

0x5bad,	// (0x00026f3d) popup_preview_text_window_t5

0x3dd9,	// (0x00025169) cursor_digital_pane

0x3dd9,	// (0x00025169) cursor_primary_pane

0x3dea,	// (0x0002517a) cursor_primary_small_pane

0x3df2,	// (0x00025182) cursor_secondary_pane

0x3dfa,	// (0x0002518a) cursor_title_pane

0x3dd9,	// (0x00025169) link_highlight_digital_pane

0x3de1,	// (0x00025171) link_highlight_primary_pane

0x3dea,	// (0x0002517a) link_highlight_primary_small_pane

0x3df2,	// (0x00025182) link_highlight_secondary_pane

0x3dfa,	// (0x0002518a) link_highlight_title_pane

0x3dd9,	// (0x00025169) copy_highlight_digital_pane

0x3dd9,	// (0x00025169) copy_highlight_primary_pane

0x3dea,	// (0x0002517a) copy_highlight_primary_small_pane

0x3df2,	// (0x00025182) copy_highlight_secondary_pane

0x3dfa,	// (0x0002518a) copy_highlight_title_pane

0x3df2,	// (0x00025182) graphic_text_digital_pane

0x5426,	// (0x000267b6) graphic_text_primary_pane

0x542f,	// (0x000267bf) graphic_text_primary_small_pane

0x3dea,	// (0x0002517a) graphic_text_secondary_pane

0x3dd9,	// (0x00025169) graphic_text_title_pane

0xc1a6,	// (0x0002d536) cursor_primary_pane_g1

0x5418,	// (0x000267a8) cursor_text_primary_t1

0xd5fb,	// (0x0002e98b) cursor_primary_small_pane_g1

0x540a,	// (0x0002679a) cursor_text_primary_small_t1

0xd5f1,	// (0x0002e981) cursor_primary_small_pane_g1_copy1

0x53f2,	// (0x00026782) cursor_text_primary_small_t1_copy1

0x53d0,	// (0x00026760) cursor_text_title_t1

0xd5e7,	// (0x0002e977) cursor_title_pane_g1

0xc1a6,	// (0x0002d536) cursor_digital_pane_g1

0x3e0c,	// (0x0002519c) cursor_text_digital_t1

0x3e1a,	// (0x000251aa) link_highlight_primary_pane_g1

0x5379,	// (0x00026709) link_highlight_primary_pane_t1

0x3e1a,	// (0x000251aa) link_highlight_primary_small_pane_g1

0x3e22,	// (0x000251b2) link_highlight_primary_small_pane_t1

0x3e31,	// (0x000251c1) link_highlight_secondary_pane_g1

0x3e39,	// (0x000251c9) link_highlight_secondary_pane_t1

0x52ed,	// (0x0002667d) link_highlight_title_pane_g1

0x52f5,	// (0x00026685) link_highlight_title_pane_t1

0x52d6,	// (0x00026666) link_highlight_digital_pane_g1

0x52de,	// (0x0002666e) link_highlight_digital_pane_t1

0x519e,	// (0x0002652e) copy_highlight_primary_pane_g1

0x51b5,	// (0x00026545) copy_highlight_primary_pane_t1

0x519e,	// (0x0002652e) copy_highlight_primary_small_pane_g1

0x51a6,	// (0x00026536) copy_highlight_primary_small_pane_t1

0x3e48,	// (0x000251d8) copy_highlight_secondary_pane_g1

0x3e50,	// (0x000251e0) copy_highlight_secondary_pane_t1

0x5187,	// (0x00026517) copy_highlight_title_pane_g1

0x518f,	// (0x0002651f) copy_highlight_title_pane_t1

0x519e,	// (0x0002652e) copy_highlight_digital_pane_g1

0x64af,	// (0x0002783f) copy_highlight_digital_pane_t1

0x6403,	// (0x00027793) graphic_text_primary_pane_g1

0x6493,	// (0x00027823) graphic_text_primary_pane_t1

0x64a1,	// (0x00027831) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x00030d65) graphic_text_primary_pane_t

0x646f,	// (0x000277ff) graphic_text_primary_small_pane_g1

0x6477,	// (0x00027807) graphic_text_primary_small_pane_t1

0x6485,	// (0x00027815) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x00030d60) graphic_text_primary_small_pane_t

0x644b,	// (0x000277db) graphic_text_secondary_pane_g1

0x6453,	// (0x000277e3) graphic_text_secondary_pane_t1

0x6461,	// (0x000277f1) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x00030d5b) graphic_text_secondary_pane_t

0x6427,	// (0x000277b7) graphic_text_title_pane_g1

0x642f,	// (0x000277bf) graphic_text_title_pane_t1

0x643d,	// (0x000277cd) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x00030d56) graphic_text_title_pane_t

0x6403,	// (0x00027793) graphic_text_digital_pane_g1

0x640b,	// (0x0002779b) graphic_text_digital_pane_t1

0x6419,	// (0x000277a9) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x00030d51) graphic_text_digital_pane_t

0x10a1,	// (0x00022431) navi_icon_pane_srt_ParamLimits

0x10a1,	// (0x00022431) navi_icon_pane_srt

0xe7cf,	// (0x0002fb5f) navi_midp_pane_srt

0xe7cf,	// (0x0002fb5f) navi_navi_pane_srt

0x10a1,	// (0x00022431) navi_text_pane_srt_ParamLimits

0x10a1,	// (0x00022431) navi_text_pane_srt

0x63ce,	// (0x0002775e) navi_navi_icon_text_pane_srt

0x63d6,	// (0x00027766) navi_navi_pane_srt_g1_ParamLimits

0x63d6,	// (0x00027766) navi_navi_pane_srt_g1

0x63e8,	// (0x00027778) navi_navi_pane_srt_g2_ParamLimits

0x63e8,	// (0x00027778) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x00030d4c) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x00030d4c) navi_navi_pane_srt_g

0x63fa,	// (0x0002778a) navi_navi_tabs_pane_srt

0x63ce,	// (0x0002775e) navi_navi_text_pane_srt

0x63ce,	// (0x0002775e) navi_navi_volume_pane_srt

0x63bf,	// (0x0002774f) navi_navi_text_pane_srt_t1

0x2345,	// (0x000236d5) navi_navi_volume_pane_srt_g1

0x234d,	// (0x000236dd) volume_small_pane_srt_ParamLimits

0x234d,	// (0x000236dd) volume_small_pane_srt

0x1d46,	// (0x000230d6) volume_small_pane_srt_g1_ParamLimits

0x1d46,	// (0x000230d6) volume_small_pane_srt_g1

0x1d56,	// (0x000230e6) volume_small_pane_srt_g2_ParamLimits

0x1d56,	// (0x000230e6) volume_small_pane_srt_g2

0x1d67,	// (0x000230f7) volume_small_pane_srt_g3_ParamLimits

0x1d67,	// (0x000230f7) volume_small_pane_srt_g3

0x1d78,	// (0x00023108) volume_small_pane_srt_g4_ParamLimits

0x1d78,	// (0x00023108) volume_small_pane_srt_g4

0x1d89,	// (0x00023119) volume_small_pane_srt_g5_ParamLimits

0x1d89,	// (0x00023119) volume_small_pane_srt_g5

0x1d9a,	// (0x0002312a) volume_small_pane_srt_g6_ParamLimits

0x1d9a,	// (0x0002312a) volume_small_pane_srt_g6

0x1dab,	// (0x0002313b) volume_small_pane_srt_g7_ParamLimits

0x1dab,	// (0x0002313b) volume_small_pane_srt_g7

0x1dbc,	// (0x0002314c) volume_small_pane_srt_g8_ParamLimits

0x1dbc,	// (0x0002314c) volume_small_pane_srt_g8

0x1dcd,	// (0x0002315d) volume_small_pane_srt_g9_ParamLimits

0x1dcd,	// (0x0002315d) volume_small_pane_srt_g9

0x1dde,	// (0x0002316e) volume_small_pane_srt_g10_ParamLimits

0x1dde,	// (0x0002316e) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00030b00) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00030b00) volume_small_pane_srt_g

0x1518,	// (0x000228a8) query_popup_data_pane_cp2

0x63a5,	// (0x00027735) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x63a5,	// (0x00027735) navi_navi_icon_text_pane_srt_t1

0x5426,	// (0x000267b6) navi_tabs_2_long_pane_srt

0x5426,	// (0x000267b6) navi_tabs_2_pane_srt

0x5426,	// (0x000267b6) navi_tabs_3_long_pane_srt

0x5426,	// (0x000267b6) navi_tabs_3_pane_srt

0x5426,	// (0x000267b6) navi_tabs_4_pane_srt

0x2325,	// (0x000236b5) tabs_2_active_pane_srt_ParamLimits

0x2325,	// (0x000236b5) tabs_2_active_pane_srt

0x2335,	// (0x000236c5) tabs_2_passive_pane_srt_ParamLimits

0x2335,	// (0x000236c5) tabs_2_passive_pane_srt

0x4c5e,	// (0x00025fee) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4c5e,	// (0x00025fee) bg_passive_tab_pane_cp1_srt

0x6371,	// (0x00027701) bg_passive_tab_pane_g1_cp1_srt

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp1_srt

0x637a,	// (0x0002770a) bg_passive_tab_pane_g3_cp1_srt

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp1_srt_ParamLimits

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp1_srt

0x6383,	// (0x00027713) tabs_2_active_pane_srt_g1

0xda5e,	// (0x0002edee) tabs_2_active_pane_srt_t1_ParamLimits

0xda5e,	// (0x0002edee) tabs_2_active_pane_srt_t1

0x6371,	// (0x00027701) bg_active_tab_pane_g1_cp1_srt

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp1_srt

0x637a,	// (0x0002770a) bg_active_tab_pane_g3_cp1_srt

0x22f2,	// (0x00023682) tabs_3_active_pane_srt_ParamLimits

0x22f2,	// (0x00023682) tabs_3_active_pane_srt

0x2303,	// (0x00023693) tabs_3_passive_pane_cp_srt_ParamLimits

0x2303,	// (0x00023693) tabs_3_passive_pane_cp_srt

0x2314,	// (0x000236a4) tabs_3_passive_pane_srt_ParamLimits

0x2314,	// (0x000236a4) tabs_3_passive_pane_srt

0x4c5e,	// (0x00025fee) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4c5e,	// (0x00025fee) bg_passive_tab_pane_cp2_srt

0x3e5f,	// (0x000251ef) bg_passive_tab_pane_g1_cp2_srt

0x38f2,	// (0x00024c82) bg_passive_tab_pane_g2_cp2_srt

0x3e68,	// (0x000251f8) bg_passive_tab_pane_g3_cp2_srt

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp2_srt_ParamLimits

0x13ad,	// (0x0002273d) bg_active_tab_pane_cp2_srt

0x6357,	// (0x000276e7) tabs_3_active_pane_srt_g1

0xda48,	// (0x0002edd8) tabs_3_active_pane_srt_t1_ParamLimits

0xda48,	// (0x0002edd8) tabs_3_active_pane_srt_t1

0x3e5f,	// (0x000251ef) bg_active_tab_pane_g1_cp2_srt

0x38f2,	// (0x00024c82) bg_active_tab_pane_g2_cp2_srt

0x3e68,	// (0x000251f8) bg_active_tab_pane_g3_cp2_srt

0x22aa,	// (0x0002363a) tabs_4_active_pane_srt_ParamLimits

0x22aa,	// (0x0002363a) tabs_4_active_pane_srt

0x22bc,	// (0x0002364c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x22bc,	// (0x0002364c) tabs_4_passive_pane_cp2_srt

0x3fbd,	// (0x0002534d) aid_size_cell_toolbar

0x5f79,	// (0x00027309) main_idle_act_pane_ParamLimits

0x41f4,	// (0x00025584) popup_large_graphic_colour_window_ParamLimits

0xca1f,	// (0x0002ddaf) popup_toolbar_window_ParamLimits

0xca1f,	// (0x0002ddaf) popup_toolbar_window

0x0570,	// (0x00021900) list_single_graphic_2heading_pane_ParamLimits

0x0570,	// (0x00021900) list_single_graphic_2heading_pane

0x33d3,	// (0x00024763) aid_size_cell_apps_grid_lsc_pane

0x33e5,	// (0x00024775) aid_size_cell_apps_grid_prt_pane

0x402f,	// (0x000253bf) bg_wml_button_pane_cp1_ParamLimits

0x402f,	// (0x000253bf) bg_wml_button_pane_cp1

0xd59d,	// (0x0002e92d) form_midp_field_text_pane_t1_ParamLimits

0x4c5e,	// (0x00025fee) input_focus_pane_cp050_ParamLimits

0x4e49,	// (0x000261d9) list_midp_form_text_pane_ParamLimits

0x4e08,	// (0x00026198) input_focus_pane_cp051_ParamLimits

0x4e1c,	// (0x000261ac) list_midp_choice_pane_ParamLimits

0xd52d,	// (0x0002e8bd) list_single_2graphic_pane_cp3_ParamLimits

0xd52d,	// (0x0002e8bd) list_single_2graphic_pane_cp3

0xd53f,	// (0x0002e8cf) list_single_midp_graphic_pane_ParamLimits

0xd53f,	// (0x0002e8cf) list_single_midp_graphic_pane

0x03fd,	// (0x0002178d) list_single_graphic_2heading_pane_g1_ParamLimits

0x03fd,	// (0x0002178d) list_single_graphic_2heading_pane_g1

0x0409,	// (0x00021799) list_single_graphic_2heading_pane_g4_ParamLimits

0x0409,	// (0x00021799) list_single_graphic_2heading_pane_g4

0x0415,	// (0x000217a5) list_single_graphic_2heading_pane_g5_ParamLimits

0x0415,	// (0x000217a5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x00030b53) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x00030b53) list_single_graphic_2heading_pane_g

0x0421,	// (0x000217b1) list_single_graphic_2heading_pane_t1_ParamLimits

0x0421,	// (0x000217b1) list_single_graphic_2heading_pane_t1

0x0435,	// (0x000217c5) list_single_graphic_2heading_pane_t2_ParamLimits

0x0435,	// (0x000217c5) list_single_graphic_2heading_pane_t2

0x0451,	// (0x000217e1) list_single_graphic_2heading_pane_t3_ParamLimits

0x0451,	// (0x000217e1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x00030b5a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x00030b5a) list_single_graphic_2heading_pane_t

0x4aaa,	// (0x00025e3a) bg_popup_sub_pane_cp2

0x4ad4,	// (0x00025e64) grid_toobar_pane

0x1f39,	// (0x000232c9) cell_toolbar_pane_ParamLimits

0x1f39,	// (0x000232c9) cell_toolbar_pane

0x4b10,	// (0x00025ea0) cell_toolbar_pane_g1_ParamLimits

0x4b10,	// (0x00025ea0) cell_toolbar_pane_g1

0x4b24,	// (0x00025eb4) cell_toolbar_pane_g2_ParamLimits

0x4b24,	// (0x00025eb4) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x00030b68) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x00030b68) cell_toolbar_pane_g

0x4b46,	// (0x00025ed6) grid_highlight_pane_cp2_ParamLimits

0x4b46,	// (0x00025ed6) grid_highlight_pane_cp2

0x4b60,	// (0x00025ef0) toolbar_button_pane

0x4b6c,	// (0x00025efc) toolbar_button_pane_g1

0x4b74,	// (0x00025f04) toolbar_button_pane_g2

0x4b7c,	// (0x00025f0c) toolbar_button_pane_g3

0x4b84,	// (0x00025f14) toolbar_button_pane_g4

0x4b8c,	// (0x00025f1c) toolbar_button_pane_g5

0x4b94,	// (0x00025f24) toolbar_button_pane_g6

0x4b9c,	// (0x00025f2c) toolbar_button_pane_g7

0x4ba4,	// (0x00025f34) toolbar_button_pane_g8

0x4bac,	// (0x00025f3c) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x00030b6d) toolbar_button_pane_g

0x1f71,	// (0x00023301) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1f71,	// (0x00023301) list_single_2graphic_pane_g1_cp3

0xcad4,	// (0x0002de64) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcad4,	// (0x0002de64) list_single_2graphic_pane_g2_cp3

0x3ad3,	// (0x00024e63) list_single_2graphic_pane_g3_cp3

0xcae5,	// (0x0002de75) list_single_2graphic_pane_g4_cp3_ParamLimits

0xcae5,	// (0x0002de75) list_single_2graphic_pane_g4_cp3

0x1f8e,	// (0x0002331e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1f8e,	// (0x0002331e) list_single_2graphic_pane_t1_cp3

0x3ac7,	// (0x00024e57) list_single_midp_graphic_pane_g2_ParamLimits

0x3ac7,	// (0x00024e57) list_single_midp_graphic_pane_g2

0x3fc5,	// (0x00025355) aid_zoom_text_primary

0x03ed,	// (0x0002177d) aid_zoom_text_secondary

0x3f1c,	// (0x000252ac) status_small_pane_g7_ParamLimits

0x3f1c,	// (0x000252ac) status_small_pane_g7

0x3f3f,	// (0x000252cf) status_small_pane_t1_ParamLimits

0xba3c,	// (0x0002cdcc) title_pane_g2

0x0003,

0xf566,	// (0x000308f6) title_pane_g

0xbcd4,	// (0x0002d064) aid_size_cell_colour_1_pane_ParamLimits

0xbcd4,	// (0x0002d064) aid_size_cell_colour_1_pane

0xbce8,	// (0x0002d078) aid_size_cell_colour_2_pane_ParamLimits

0xbce8,	// (0x0002d078) aid_size_cell_colour_2_pane

0xbcfc,	// (0x0002d08c) aid_size_cell_colour_3_pane_ParamLimits

0xbcfc,	// (0x0002d08c) aid_size_cell_colour_3_pane

0xbd10,	// (0x0002d0a0) aid_size_cell_colour_4_pane_ParamLimits

0xbd10,	// (0x0002d0a0) aid_size_cell_colour_4_pane

0x199b,	// (0x00022d2b) title_pane_stacon_g1_ParamLimits

0x199b,	// (0x00022d2b) title_pane_stacon_g1

0x520c,	// (0x0002659c) popup_note_wait_window_g3_ParamLimits

0x520c,	// (0x0002659c) popup_note_wait_window_g3

0x5283,	// (0x00026613) popup_note_wait_window_t5_ParamLimits

0x5283,	// (0x00026613) popup_note_wait_window_t5

0xe7cf,	// (0x0002fb5f) main_feb_china_hwr_fs_writing_pane

0xc3ba,	// (0x0002d74a) popup_feb_china_hwr_fs_window_ParamLimits

0xc3ba,	// (0x0002d74a) popup_feb_china_hwr_fs_window

0xcaf1,	// (0x0002de81) aid_size_cell_hwr_fs_ParamLimits

0xcaf1,	// (0x0002de81) aid_size_cell_hwr_fs

0x4c5e,	// (0x00025fee) bg_popup_sub_pane_cp3_ParamLimits

0x4c5e,	// (0x00025fee) bg_popup_sub_pane_cp3

0xcb06,	// (0x0002de96) grid_hwr_fs_pane_ParamLimits

0xcb06,	// (0x0002de96) grid_hwr_fs_pane

0x1fec,	// (0x0002337c) linegrid_hwr_fs_pane_ParamLimits

0x1fec,	// (0x0002337c) linegrid_hwr_fs_pane

0xcb1e,	// (0x0002deae) cell_hwr_fs_pane_ParamLimits

0xcb1e,	// (0x0002deae) cell_hwr_fs_pane

0x4c6a,	// (0x00025ffa) linegrid_hwr_fs_pane_g1_ParamLimits

0x4c6a,	// (0x00025ffa) linegrid_hwr_fs_pane_g1

0xd501,	// (0x0002e891) linegrid_hwr_fs_pane_g2_ParamLimits

0xd501,	// (0x0002e891) linegrid_hwr_fs_pane_g2

0x4c88,	// (0x00026018) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c88,	// (0x00026018) linegrid_hwr_fs_pane_g3

0x2020,	// (0x000233b0) linegrid_hwr_fs_pane_g4_ParamLimits

0x2020,	// (0x000233b0) linegrid_hwr_fs_pane_g4

0x203e,	// (0x000233ce) linegrid_hwr_fs_pane_g5_ParamLimits

0x203e,	// (0x000233ce) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x00030b93) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x00030b93) linegrid_hwr_fs_pane_g

0x4c94,	// (0x00026024) cell_hwr_fs_pane_g1_ParamLimits

0x4c94,	// (0x00026024) cell_hwr_fs_pane_g1

0x49e1,	// (0x00025d71) cell_hwr_fs_pane_g2_ParamLimits

0x49e1,	// (0x00025d71) cell_hwr_fs_pane_g2

0xd513,	// (0x0002e8a3) cell_hwr_fs_pane_g3_ParamLimits

0xd513,	// (0x0002e8a3) cell_hwr_fs_pane_g3

0xd520,	// (0x0002e8b0) cell_hwr_fs_pane_g4_ParamLimits

0xd520,	// (0x0002e8b0) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x00030b9e) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x00030b9e) cell_hwr_fs_pane_g

0xcb44,	// (0x0002ded4) cell_hwr_fs_pane_t1

0xe7cf,	// (0x0002fb5f) grid_highlight_pane_cp6

0xe7cf,	// (0x0002fb5f) main_idle_act2_pane

0x3189,	// (0x00024519) aid_inside_area_popup_secondary

0xd61b,	// (0x0002e9ab) aid_inside_area_window_primary_ParamLimits

0xd61b,	// (0x0002e9ab) aid_inside_area_window_primary

0x64be,	// (0x0002784e) ai2_news_ticker_pane

0x64c6,	// (0x00027856) aid_size_cell_ai1_link_ParamLimits

0x64c6,	// (0x00027856) aid_size_cell_ai1_link

0x64e0,	// (0x00027870) popup_ai2_data_window_ParamLimits

0x64e0,	// (0x00027870) popup_ai2_data_window

0x64fe,	// (0x0002788e) popup_ai2_link_window_ParamLimits

0x64fe,	// (0x0002788e) popup_ai2_link_window

0x4c5e,	// (0x00025fee) bg_popup_sub_pane_cp4_ParamLimits

0x4c5e,	// (0x00025fee) bg_popup_sub_pane_cp4

0x6514,	// (0x000278a4) grid_ai2_link_pane_ParamLimits

0x6514,	// (0x000278a4) grid_ai2_link_pane

0x652b,	// (0x000278bb) popup_ai2_link_window_g1_ParamLimits

0x652b,	// (0x000278bb) popup_ai2_link_window_g1

0x6537,	// (0x000278c7) popup_ai2_link_window_g2_ParamLimits

0x6537,	// (0x000278c7) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x00030d6a) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x00030d6a) popup_ai2_link_window_g

0x6548,	// (0x000278d8) ai2_mp_button_pane

0x6550,	// (0x000278e0) ai2_mp_volume_pane

0x4e08,	// (0x00026198) bg_popup_sub_pane_cp5_ParamLimits

0x4e08,	// (0x00026198) bg_popup_sub_pane_cp5

0x6558,	// (0x000278e8) heading_ai2_gene_pane_ParamLimits

0x6558,	// (0x000278e8) heading_ai2_gene_pane

0x6564,	// (0x000278f4) list_ai2_gene_pane_ParamLimits

0x6564,	// (0x000278f4) list_ai2_gene_pane

0x65ac,	// (0x0002793c) cell_ai2_link_pane_ParamLimits

0x65ac,	// (0x0002793c) cell_ai2_link_pane

0x65c2,	// (0x00027952) cell_ai2_link_pane_g1

0xe7cf,	// (0x0002fb5f) grid_highlight_pane_cp7

0x2362,	// (0x000236f2) ai2_mp_volume_pane_g1

0x6695,	// (0x00027a25) ai2_mp_volume_pane_g2

0x660a,	// (0x0002799a) list_ai2_gene_pane_t1

0x669d,	// (0x00027a2d) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x00030d83) ai2_mp_volume_pane_g

0x236a,	// (0x000236fa) volume_small_pane_cp3

0x66a5,	// (0x00027a35) aid_size_cell_ai2_button

0x66ad,	// (0x00027a3d) grid_ai2_button_pane

0x66b6,	// (0x00027a46) cell_ai2_button_pane_ParamLimits

0x66b6,	// (0x00027a46) cell_ai2_button_pane

0xe7c5,	// (0x0002fb55) cell_ai2_button_pane_g1

0xe7cf,	// (0x0002fb5f) grid_highlight_pane_cp8

0x6655,	// (0x000279e5) ai2_gene_pane_t1_ParamLimits

0x6655,	// (0x000279e5) ai2_gene_pane_t1

0xc338,	// (0x0002d6c8) aid_height_parent_landscape

0xd7eb,	// (0x0002eb7b) aid_height_set_list

0x5f79,	// (0x00027309) aid_size_parent

0x62df,	// (0x0002766f) aid_size_cell_graphic_pane_ParamLimits

0x6574,	// (0x00027904) popup_ai2_data_window_g1_ParamLimits

0x6574,	// (0x00027904) popup_ai2_data_window_g1

0x6580,	// (0x00027910) ai2_news_ticker_pane_g1

0x6588,	// (0x00027918) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x00030d6f) ai2_news_ticker_pane_g

0x6590,	// (0x00027920) ai2_news_ticker_pane_t1

0x659e,	// (0x0002792e) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x00030d74) ai2_news_ticker_pane_t

0x65cb,	// (0x0002795b) heading_ai2_gene_pane_g1

0x65d3,	// (0x00027963) heading_ai2_gene_pane_t1_ParamLimits

0x65d3,	// (0x00027963) heading_ai2_gene_pane_t1

0x65e8,	// (0x00027978) list_highlight_pane_cp6

0x65f0,	// (0x00027980) ai2_gene_pane_ParamLimits

0x65f0,	// (0x00027980) ai2_gene_pane

0x6618,	// (0x000279a8) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x00030d79) list_ai2_gene_pane_t

0x6626,	// (0x000279b6) list_highlight_pane_cp8_ParamLimits

0x6626,	// (0x000279b6) list_highlight_pane_cp8

0x6637,	// (0x000279c7) ai2_gene_pane_g1_ParamLimits

0x6637,	// (0x000279c7) ai2_gene_pane_g1

0x6649,	// (0x000279d9) ai2_gene_pane_g2_ParamLimits

0x6649,	// (0x000279d9) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x00030d7e) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x00030d7e) ai2_gene_pane_g

0x194e,	// (0x00022cde) scroll_pane_cp12

0xc2f7,	// (0x0002d687) control_pane_t3_ParamLimits

0xc2f7,	// (0x0002d687) control_pane_t3

0x3f30,	// (0x000252c0) status_small_pane_g8_ParamLimits

0x3f30,	// (0x000252c0) status_small_pane_g8

0xc45c,	// (0x0002d7ec) popup_find_window_ParamLimits

0xc709,	// (0x0002da99) popup_note_image_window_ParamLimits

0x0469,	// (0x000217f9) list_double2_graphic_pane_vc_g1_ParamLimits

0x0469,	// (0x000217f9) list_double2_graphic_pane_vc_g1

0x0475,	// (0x00021805) list_double2_graphic_pane_vc_g2_ParamLimits

0x0475,	// (0x00021805) list_double2_graphic_pane_vc_g2

0x0481,	// (0x00021811) list_double2_graphic_pane_vc_g3_ParamLimits

0x0481,	// (0x00021811) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x00030b61) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x00030b61) list_double2_graphic_pane_vc_g

0x048d,	// (0x0002181d) list_double2_graphic_pane_vc_t1_ParamLimits

0x048d,	// (0x0002181d) list_double2_graphic_pane_vc_t1

0x0409,	// (0x00021799) list_single_heading_pane_vc_g1_ParamLimits

0x0409,	// (0x00021799) list_single_heading_pane_vc_g1

0x0415,	// (0x000217a5) list_single_heading_pane_vc_g2_ParamLimits

0x0415,	// (0x000217a5) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00030970) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00030970) list_single_heading_pane_vc_g

0x04a3,	// (0x00021833) list_single_heading_pane_vc_t1_ParamLimits

0x04a3,	// (0x00021833) list_single_heading_pane_vc_t1

0x04bb,	// (0x0002184b) list_single_heading_pane_vc_t2_ParamLimits

0x04bb,	// (0x0002184b) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x00030b82) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x00030b82) list_single_heading_pane_vc_t

0x4bb4,	// (0x00025f44) list_setting_number_pane_vc_g1_ParamLimits

0x4bb4,	// (0x00025f44) list_setting_number_pane_vc_g1

0x4bc0,	// (0x00025f50) list_setting_number_pane_vc_g2_ParamLimits

0x4bc0,	// (0x00025f50) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x00030b87) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x00030b87) list_setting_number_pane_vc_g

0x4bcc,	// (0x00025f5c) list_setting_number_pane_vc_t1_ParamLimits

0x4bcc,	// (0x00025f5c) list_setting_number_pane_vc_t1

0x4be0,	// (0x00025f70) list_setting_number_pane_vc_t2_ParamLimits

0x4be0,	// (0x00025f70) list_setting_number_pane_vc_t2

0x4bfc,	// (0x00025f8c) list_setting_number_pane_vc_t3_ParamLimits

0x4bfc,	// (0x00025f8c) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x00030b8c) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x00030b8c) list_setting_number_pane_vc_t

0x4c24,	// (0x00025fb4) set_value_pane_vc_ParamLimits

0x4c24,	// (0x00025fb4) set_value_pane_vc

0x0570,	// (0x00021900) list_double2_graphic_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_double2_graphic_pane_vc

0x615d,	// (0x000274ed) list_double2_large_graphic_pane_vc_ParamLimits

0x615d,	// (0x000274ed) list_double2_large_graphic_pane_vc

0x0570,	// (0x00021900) list_double2_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_double2_pane_vc

0x0570,	// (0x00021900) list_double_graphic_heading_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_double_graphic_heading_pane_vc

0x0570,	// (0x00021900) list_double_graphic_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_double_graphic_pane_vc

0x0570,	// (0x00021900) list_double_heading_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_double_heading_pane_vc

0x615d,	// (0x000274ed) list_double_large_graphic_pane_vc_ParamLimits

0x615d,	// (0x000274ed) list_double_large_graphic_pane_vc

0x0570,	// (0x00021900) list_double_number_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_double_number_pane_vc

0x0570,	// (0x00021900) list_double_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_double_pane_vc

0x0570,	// (0x00021900) list_double_time_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_double_time_pane_vc

0x0570,	// (0x00021900) list_setting_number_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_setting_number_pane_vc

0x0570,	// (0x00021900) list_setting_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_setting_pane_vc

0x0570,	// (0x00021900) list_single_graphic_heading_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_single_graphic_heading_pane_vc

0x0570,	// (0x00021900) list_single_heading_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_single_heading_pane_vc

0x0570,	// (0x00021900) list_single_number_heading_pane_vc_ParamLimits

0x0570,	// (0x00021900) list_single_number_heading_pane_vc

0x0469,	// (0x000217f9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0469,	// (0x000217f9) list_double_graphic_heading_pane_vc_g1

0x0409,	// (0x00021799) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0409,	// (0x00021799) list_double_graphic_heading_pane_vc_g2

0x0415,	// (0x000217a5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0415,	// (0x000217a5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x00030d8a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x00030d8a) list_double_graphic_heading_pane_vc_g

0x05b5,	// (0x00021945) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x05b5,	// (0x00021945) list_double_graphic_heading_pane_vc_t1

0x04a3,	// (0x00021833) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x04a3,	// (0x00021833) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x00030d91) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00030d91) list_double_graphic_heading_pane_vc_t

0x4bb4,	// (0x00025f44) list_setting_pane_vc_g1_ParamLimits

0x4bb4,	// (0x00025f44) list_setting_pane_vc_g1

0x4bc0,	// (0x00025f50) list_setting_pane_vc_g2_ParamLimits

0x4bc0,	// (0x00025f50) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x00030b87) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x00030b87) list_setting_pane_vc_g

0x68f2,	// (0x00027c82) list_setting_pane_vc_t1_ParamLimits

0x68f2,	// (0x00027c82) list_setting_pane_vc_t1

0x6906,	// (0x00027c96) list_setting_pane_vc_t2_ParamLimits

0x6906,	// (0x00027c96) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x00030dd4) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x00030dd4) list_setting_pane_vc_t

0x4c24,	// (0x00025fb4) set_value_pane_cp_vc_ParamLimits

0x4c24,	// (0x00025fb4) set_value_pane_cp_vc

0x0409,	// (0x00021799) list_single_number_heading_pane_vc_g1_ParamLimits

0x0409,	// (0x00021799) list_single_number_heading_pane_vc_g1

0x0415,	// (0x000217a5) list_single_number_heading_pane_vc_g2_ParamLimits

0x0415,	// (0x000217a5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00030970) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00030970) list_single_number_heading_pane_vc_g

0x04a3,	// (0x00021833) list_single_number_heading_pane_vc_t1_ParamLimits

0x04a3,	// (0x00021833) list_single_number_heading_pane_vc_t1

0x05c7,	// (0x00021957) list_single_number_heading_pane_vc_t2_ParamLimits

0x05c7,	// (0x00021957) list_single_number_heading_pane_vc_t2

0x05d9,	// (0x00021969) list_single_number_heading_pane_vc_t3_ParamLimits

0x05d9,	// (0x00021969) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x00030dd9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00030dd9) list_single_number_heading_pane_vc_t

0x0469,	// (0x000217f9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0469,	// (0x000217f9) list_single_graphic_heading_pane_vc_g1

0x0409,	// (0x00021799) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0409,	// (0x00021799) list_single_graphic_heading_pane_vc_g4

0x0415,	// (0x000217a5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0415,	// (0x000217a5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9fa,	// (0x00030d8a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x00030d8a) list_single_graphic_heading_pane_vc_g

0x04a3,	// (0x00021833) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x04a3,	// (0x00021833) list_single_graphic_heading_pane_vc_t1

0x05eb,	// (0x0002197b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x05eb,	// (0x0002197b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00030de0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00030de0) list_single_graphic_heading_pane_vc_t

0x0409,	// (0x00021799) list_double2_pane_vc_g1_ParamLimits

0x0409,	// (0x00021799) list_double2_pane_vc_g1

0x0415,	// (0x000217a5) list_double2_pane_vc_g2_ParamLimits

0x0415,	// (0x000217a5) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x00030970) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x00030970) list_double2_pane_vc_g

0x05fd,	// (0x0002198d) list_double2_pane_vc_t1_ParamLimits

0x05fd,	// (0x0002198d) list_double2_pane_vc_t1

0x0613,	// (0x000219a3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0613,	// (0x000219a3) list_double2_large_graphic_pane_vc_g1

0x061f,	// (0x000219af) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x061f,	// (0x000219af) list_double2_large_graphic_pane_vc_g2

0x062b,	// (0x000219bb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x062b,	// (0x000219bb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x0003098d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x0003098d) list_double2_large_graphic_pane_vc_g

0x0637,	// (0x000219c7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0637,	// (0x000219c7) list_double2_large_graphic_pane_vc_t1

0x064d,	// (0x000219dd) list_double_time_pane_vc_g1_ParamLimits

0x064d,	// (0x000219dd) list_double_time_pane_vc_g1

0x0659,	// (0x000219e9) list_double_time_pane_vc_g2_ParamLimits

0x0659,	// (0x000219e9) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x00030de5) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x00030de5) list_double_time_pane_vc_g

0x0665,	// (0x000219f5) list_double_time_pane_vc_t1_ParamLimits

0x0665,	// (0x000219f5) list_double_time_pane_vc_t1

0x0680,	// (0x00021a10) list_double_time_pane_vc_t2_ParamLimits

0x0680,	// (0x00021a10) list_double_time_pane_vc_t2

0x06be,	// (0x00021a4e) list_double_time_pane_vc_t3_ParamLimits

0x06be,	// (0x00021a4e) list_double_time_pane_vc_t3

0x06d6,	// (0x00021a66) list_double_time_pane_vc_t4_ParamLimits

0x06d6,	// (0x00021a66) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x00030dea) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x00030dea) list_double_time_pane_vc_t

0x0409,	// (0x00021799) list_double_pane_vc_g1_ParamLimits

0x0409,	// (0x00021799) list_double_pane_vc_g1

0x0415,	// (0x000217a5) list_double_pane_vc_g2_ParamLimits

0x0415,	// (0x000217a5) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x00030970) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x00030970) list_double_pane_vc_g

0x06ea,	// (0x00021a7a) list_double_pane_vc_t1_ParamLimits

0x06ea,	// (0x00021a7a) list_double_pane_vc_t1

0x06fe,	// (0x00021a8e) list_double_pane_vc_t2_ParamLimits

0x06fe,	// (0x00021a8e) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x00030df3) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x00030df3) list_double_pane_vc_t

0x0409,	// (0x00021799) list_double_number_pane_vc_g1_ParamLimits

0x0409,	// (0x00021799) list_double_number_pane_vc_g1

0x0415,	// (0x000217a5) list_double_number_pane_vc_g2_ParamLimits

0x0415,	// (0x000217a5) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x00030970) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x00030970) list_double_number_pane_vc_g

0x0714,	// (0x00021aa4) list_double_number_pane_vc_t1_ParamLimits

0x0714,	// (0x00021aa4) list_double_number_pane_vc_t1

0x0728,	// (0x00021ab8) list_double_number_pane_vc_t2_ParamLimits

0x0728,	// (0x00021ab8) list_double_number_pane_vc_t2

0x06fe,	// (0x00021a8e) list_double_number_pane_vc_t3_ParamLimits

0x06fe,	// (0x00021a8e) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x00030df8) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x00030df8) list_double_number_pane_vc_t

0x073c,	// (0x00021acc) list_double_large_graphic_pane_vc_g1_ParamLimits

0x073c,	// (0x00021acc) list_double_large_graphic_pane_vc_g1

0x0748,	// (0x00021ad8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0748,	// (0x00021ad8) list_double_large_graphic_pane_vc_g2

0x062b,	// (0x000219bb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x062b,	// (0x000219bb) list_double_large_graphic_pane_vc_g3

0x0757,	// (0x00021ae7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0757,	// (0x00021ae7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00030dff) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00030dff) list_double_large_graphic_pane_vc_g

0x0763,	// (0x00021af3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0763,	// (0x00021af3) list_double_large_graphic_pane_vc_t1

0x0777,	// (0x00021b07) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0777,	// (0x00021b07) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00030e08) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00030e08) list_double_large_graphic_pane_vc_t

0x0409,	// (0x00021799) list_double_heading_pane_vc_g1_ParamLimits

0x0409,	// (0x00021799) list_double_heading_pane_vc_g1

0x0415,	// (0x000217a5) list_double_heading_pane_vc_g2_ParamLimits

0x0415,	// (0x000217a5) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00030970) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00030970) list_double_heading_pane_vc_g

0x078e,	// (0x00021b1e) list_double_heading_pane_vc_t1_ParamLimits

0x078e,	// (0x00021b1e) list_double_heading_pane_vc_t1

0x04a3,	// (0x00021833) list_double_heading_pane_vc_t2_ParamLimits

0x04a3,	// (0x00021833) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x00030e0d) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x00030e0d) list_double_heading_pane_vc_t

0x07a0,	// (0x00021b30) list_double_graphic_pane_vc_g1_ParamLimits

0x07a0,	// (0x00021b30) list_double_graphic_pane_vc_g1

0x07b0,	// (0x00021b40) list_double_graphic_pane_vc_g2_ParamLimits

0x07b0,	// (0x00021b40) list_double_graphic_pane_vc_g2

0x07bf,	// (0x00021b4f) list_double_graphic_pane_vc_g3_ParamLimits

0x07bf,	// (0x00021b4f) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x00030e12) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x00030e12) list_double_graphic_pane_vc_g

0x07cb,	// (0x00021b5b) list_double_graphic_pane_vc_t1_ParamLimits

0x07cb,	// (0x00021b5b) list_double_graphic_pane_vc_t1

0x06fe,	// (0x00021a8e) list_double_graphic_pane_vc_t2_ParamLimits

0x06fe,	// (0x00021a8e) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00030e19) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00030e19) list_double_graphic_pane_vc_t

0x0bf8,	// (0x00021f88) aid_size_cell_fastswap

0xb884,	// (0x0002cc14) aid_size_cell_touch_ParamLimits

0xb884,	// (0x0002cc14) aid_size_cell_touch

0x0e61,	// (0x000221f1) popup_fast_swap_wide_window_ParamLimits

0x0e61,	// (0x000221f1) popup_fast_swap_wide_window

0xb9d3,	// (0x0002cd63) touch_pane_ParamLimits

0xb9d3,	// (0x0002cd63) touch_pane

0x300c,	// (0x0002439c) button_value_adjust_pane_cp2

0x300c,	// (0x0002439c) button_value_adjust_pane_cp4

0x0129,	// (0x000214b9) form_field_data_pane_cp2

0xb3ea,	// (0x0002c77a) form_field_data_wide_pane_cp2

0x34a5,	// (0x00024835) bg_scroll_pane_ParamLimits

0x1b00,	// (0x00022e90) scroll_handle_pane_ParamLimits

0x1b14,	// (0x00022ea4) scroll_sc2_down_pane_ParamLimits

0x1b14,	// (0x00022ea4) scroll_sc2_down_pane

0x34d6,	// (0x00024866) scroll_sc2_up_pane_ParamLimits

0x34d6,	// (0x00024866) scroll_sc2_up_pane

0xdb9f,	// (0x0002ef2f) grid_wheel_folder_pane_g1_ParamLimits

0xdb9f,	// (0x0002ef2f) grid_wheel_folder_pane_g1

0x1cde,	// (0x0002306e) clock_nsta_pane_cp2_ParamLimits

0x1cde,	// (0x0002306e) clock_nsta_pane_cp2

0xc0ec,	// (0x0002d47c) listscroll_midp_pane_ParamLimits

0xc0fd,	// (0x0002d48d) midp_canvas_pane

0x3fab,	// (0x0002533b) nsta_clock_indic_pane

0x4001,	// (0x00025391) listscroll_form_pane_vc

0x401d,	// (0x000253ad) listscroll_set_pane_vc_ParamLimits

0x401d,	// (0x000253ad) listscroll_set_pane_vc

0xd1f4,	// (0x0002e584) clock_nsta_pane

0xd21e,	// (0x0002e5ae) indicator_nsta_pane

0x4aaa,	// (0x00025e3a) bg_popup_sub_pane_cp2_ParamLimits

0x4abe,	// (0x00025e4e) find_pane_cp2_ParamLimits

0x4abe,	// (0x00025e4e) find_pane_cp2

0x4ad4,	// (0x00025e64) grid_toobar_pane_ParamLimits

0x4c32,	// (0x00025fc2) list_form_gen_pane_vc_ParamLimits

0x4c32,	// (0x00025fc2) list_form_gen_pane_vc

0x4c48,	// (0x00025fd8) scroll_pane_cp8_vc_ParamLimits

0x4c48,	// (0x00025fd8) scroll_pane_cp8_vc

0x4cc4,	// (0x00026054) data_form_wide_pane_vc_ParamLimits

0x4cc4,	// (0x00026054) data_form_wide_pane_vc

0x4cd0,	// (0x00026060) form_field_data_wide_pane_vc_g1

0x4cd8,	// (0x00026068) form_field_data_wide_pane_vc_t1_ParamLimits

0x4cd8,	// (0x00026068) form_field_data_wide_pane_vc_t1

0x3020,	// (0x000243b0) input_focus_pane_cp6_vc_ParamLimits

0x3020,	// (0x000243b0) input_focus_pane_cp6_vc

0xd5bf,	// (0x0002e94f) list_midp_pane_ParamLimits

0x634b,	// (0x000276db) scroll_pane_cp16_ParamLimits

0x634b,	// (0x000276db) scroll_pane_cp16

0x4fe0,	// (0x00026370) button_value_adjust_pane_ParamLimits

0x4fe0,	// (0x00026370) button_value_adjust_pane

0xd7fc,	// (0x0002eb8c) button_value_adjust_pane_cp6_ParamLimits

0xd7fc,	// (0x0002eb8c) button_value_adjust_pane_cp6

0xd93e,	// (0x0002ecce) settings_code_pane_cp_ParamLimits

0xd93e,	// (0x0002ecce) settings_code_pane_cp

0xe7c5,	// (0x0002fb55) cell_touch_pane_g1

0xe7c5,	// (0x0002fb55) cell_touch_pane_g2

0x0001,

0xf716,	// (0x00030aa6) cell_touch_pane_g

0xda74,	// (0x0002ee04) cell_touch_pane_cp_ParamLimits

0xda74,	// (0x0002ee04) cell_touch_pane_cp

0xda90,	// (0x0002ee20) cell_touch_pane_ParamLimits

0xda90,	// (0x0002ee20) cell_touch_pane

0xe7c5,	// (0x0002fb55) scroll_sc2_down_pane_g1

0xe7c5,	// (0x0002fb55) scroll_sc2_up_pane_g1

0xe7cf,	// (0x0002fb5f) bg_set_opt_pane_cp4_vc

0x66e9,	// (0x00027a79) list_set_graphic_pane_vc_g1_ParamLimits

0x66e9,	// (0x00027a79) list_set_graphic_pane_vc_g1

0x66f5,	// (0x00027a85) list_set_graphic_pane_vc_g2_ParamLimits

0x66f5,	// (0x00027a85) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x00030d96) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x00030d96) list_set_graphic_pane_vc_g

0x6701,	// (0x00027a91) text_primary_small_cp13_vc_ParamLimits

0x6701,	// (0x00027a91) text_primary_small_cp13_vc

0x6719,	// (0x00027aa9) list_set_graphic_pane_vc_ParamLimits

0x6719,	// (0x00027aa9) list_set_graphic_pane_vc

0xe7cf,	// (0x0002fb5f) input_focus_pane_cp2_vc

0xe7c5,	// (0x0002fb55) setting_code_pane_vc_g1

0x672d,	// (0x00027abd) setting_code_pane_vc_t1

0x673b,	// (0x00027acb) set_text_pane_vc_t1_ParamLimits

0x673b,	// (0x00027acb) set_text_pane_vc_t1

0xe7cf,	// (0x0002fb5f) input_focus_pane_cp1_vc

0x6759,	// (0x00027ae9) list_set_text_pane_vc

0xe7c5,	// (0x0002fb55) setting_text_pane_vc_g1

0xe7cf,	// (0x0002fb5f) bg_set_opt_pane_cp2_vc

0x6763,	// (0x00027af3) setting_slider_graphic_pane_vc_g1

0x676b,	// (0x00027afb) setting_slider_graphic_pane_vc_t1

0x6779,	// (0x00027b09) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x00030d9b) setting_slider_graphic_pane_vc_t

0x6787,	// (0x00027b17) slider_set_pane_cp_vc

0x678f,	// (0x00027b1f) slider_set_pane_vc_g1

0x6798,	// (0x00027b28) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x00030da0) slider_set_pane_vc_g

0x3087,	// (0x00024417) set_opt_bg_pane_g1_copy1

0x308f,	// (0x0002441f) set_opt_bg_pane_g2_copy1

0x67c4,	// (0x00027b54) set_opt_bg_pane_g3_copy1

0x309f,	// (0x0002442f) set_opt_bg_pane_g4_copy1

0x30a7,	// (0x00024437) set_opt_bg_pane_g5_copy1

0x30af,	// (0x0002443f) set_opt_bg_pane_g6_copy1

0x67ce,	// (0x00027b5e) set_opt_bg_pane_g7_copy1

0x67d8,	// (0x00027b68) set_opt_bg_pane_g8_copy1

0x67e2,	// (0x00027b72) set_opt_bg_pane_g9_copy1

0xe7cf,	// (0x0002fb5f) bg_set_opt_pane_cp_vc

0x67ec,	// (0x00027b7c) setting_slider_pane_vc_t1

0x676b,	// (0x00027afb) setting_slider_pane_vc_t2

0x6779,	// (0x00027b09) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x00030daf) setting_slider_pane_vc_t

0x6787,	// (0x00027b17) slider_set_pane_vc

0x2062,	// (0x000233f2) volume_set_pane_vc_g1

0x206b,	// (0x000233fb) volume_set_pane_vc_g2

0x2074,	// (0x00023404) volume_set_pane_vc_g3

0x207d,	// (0x0002340d) volume_set_pane_vc_g4

0x2086,	// (0x00023416) volume_set_pane_vc_g5

0x208f,	// (0x0002341f) volume_set_pane_vc_g6

0x2098,	// (0x00023428) volume_set_pane_vc_g7

0x20a1,	// (0x00023431) volume_set_pane_vc_g8

0x20aa,	// (0x0002343a) volume_set_pane_vc_g9

0x20b3,	// (0x00023443) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x00030db6) volume_set_pane_vc_g

0x67fb,	// (0x00027b8b) volume_set_pane_vc

0x6803,	// (0x00027b93) button_value_adjust_pane_cp1_vc

0x680d,	// (0x00027b9d) list_highlight_pane_cp2_vc

0x6816,	// (0x00027ba6) list_set_pane_vc_ParamLimits

0x6816,	// (0x00027ba6) list_set_pane_vc

0x6880,	// (0x00027c10) main_pane_set_vc_t1_ParamLimits

0x6880,	// (0x00027c10) main_pane_set_vc_t1

0x6895,	// (0x00027c25) main_pane_set_vc_t2_ParamLimits

0x6895,	// (0x00027c25) main_pane_set_vc_t2

0x68a7,	// (0x00027c37) main_pane_set_vc_t3_ParamLimits

0x68a7,	// (0x00027c37) main_pane_set_vc_t3

0x68bb,	// (0x00027c4b) main_pane_set_vc_t4_ParamLimits

0x68bb,	// (0x00027c4b) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x00030dcb) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x00030dcb) main_pane_set_vc_t

0x68cf,	// (0x00027c5f) setting_code_pane_vc_ParamLimits

0x68cf,	// (0x00027c5f) setting_code_pane_vc

0x68e0,	// (0x00027c70) setting_slider_graphic_pane_vc

0x68e0,	// (0x00027c70) setting_slider_pane_vc

0x68e0,	// (0x00027c70) setting_text_pane_vc

0x68e0,	// (0x00027c70) setting_volume_pane_vc

0x68ea,	// (0x00027c7a) scroll_pane_cp121_vc

0x2ffa,	// (0x0002438a) set_content_pane_vc

0x6928,	// (0x00027cb8) button_value_adjust_pane_g1

0x6931,	// (0x00027cc1) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00030e1e) button_value_adjust_pane_g

0x693a,	// (0x00027cca) form_field_slider_wide_pane_vc_t1_ParamLimits

0x693a,	// (0x00027cca) form_field_slider_wide_pane_vc_t1

0x694e,	// (0x00027cde) form_field_slider_wide_pane_vc_t2_ParamLimits

0x694e,	// (0x00027cde) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x00030e23) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00030e23) form_field_slider_wide_pane_vc_t

0x13ad,	// (0x0002273d) input_focus_pane_cp10_vc_ParamLimits

0x13ad,	// (0x0002273d) input_focus_pane_cp10_vc

0x6960,	// (0x00027cf0) slider_cont_pane_cp1_vc_ParamLimits

0x6960,	// (0x00027cf0) slider_cont_pane_cp1_vc

0x678f,	// (0x00027b1f) slider_form_pane_g1_cp2

0x6798,	// (0x00027b28) slider_form_pane_g2_cp2

0x6979,	// (0x00027d09) form_field_slider_pane_vc_t3

0x6987,	// (0x00027d17) form_field_slider_pane_vc_t4

0x6995,	// (0x00027d25) slider_form_pane_vc_ParamLimits

0x6995,	// (0x00027d25) slider_form_pane_vc

0x69a2,	// (0x00027d32) form_field_slider_pane_vc_t1_ParamLimits

0x69a2,	// (0x00027d32) form_field_slider_pane_vc_t1

0x694e,	// (0x00027cde) form_field_slider_pane_vc_t2_ParamLimits

0x694e,	// (0x00027cde) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x00030e33) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x00030e33) form_field_slider_pane_vc_t

0x13ad,	// (0x0002273d) input_focus_pane_cp9_vc_ParamLimits

0x13ad,	// (0x0002273d) input_focus_pane_cp9_vc

0x69be,	// (0x00027d4e) slider_cont_pane_vc_ParamLimits

0x69be,	// (0x00027d4e) slider_cont_pane_vc

0x69d0,	// (0x00027d60) list_form_graphic_pane_cp_vc_ParamLimits

0x69d0,	// (0x00027d60) list_form_graphic_pane_cp_vc

0x4cd0,	// (0x00026060) form_field_popup_wide_pane_vc_g1

0x69e5,	// (0x00027d75) form_field_popup_wide_pane_vc_t1_ParamLimits

0x69e5,	// (0x00027d75) form_field_popup_wide_pane_vc_t1

0x3020,	// (0x000243b0) input_focus_pane_cp8_vc_ParamLimits

0x3020,	// (0x000243b0) input_focus_pane_cp8_vc

0x69fc,	// (0x00027d8c) list_form_wide_pane_vc_ParamLimits

0x69fc,	// (0x00027d8c) list_form_wide_pane_vc

0x6a08,	// (0x00027d98) list_form_graphic_pane_vc_g1

0x6a10,	// (0x00027da0) list_form_graphic_pane_vc_t1_ParamLimits

0x6a10,	// (0x00027da0) list_form_graphic_pane_vc_t1

0x10a1,	// (0x00022431) list_highlight_pane_cp5_vc_ParamLimits

0x10a1,	// (0x00022431) list_highlight_pane_cp5_vc

0x6a2c,	// (0x00027dbc) list_form_graphic_pane_vc_ParamLimits

0x6a2c,	// (0x00027dbc) list_form_graphic_pane_vc

0x4cd0,	// (0x00026060) form_field_popup_pane_vc_g1

0x6a42,	// (0x00027dd2) form_field_popup_pane_vc_t1_ParamLimits

0x6a42,	// (0x00027dd2) form_field_popup_pane_vc_t1

0x3020,	// (0x000243b0) input_focus_pane_cp7_vc_ParamLimits

0x3020,	// (0x000243b0) input_focus_pane_cp7_vc

0x6a59,	// (0x00027de9) list_form_pane_vc_ParamLimits

0x6a59,	// (0x00027de9) list_form_pane_vc

0x6a65,	// (0x00027df5) data_form_pane_vc_t1_ParamLimits

0x6a65,	// (0x00027df5) data_form_pane_vc_t1

0x3087,	// (0x00024417) input_focus_pane_vc_g1

0x308f,	// (0x0002441f) input_focus_pane_vc_g2

0x3097,	// (0x00024427) input_focus_pane_vc_g3

0x309f,	// (0x0002442f) input_focus_pane_vc_g4

0x30a7,	// (0x00024437) input_focus_pane_vc_g5

0x30af,	// (0x0002443f) input_focus_pane_vc_g6

0x30b7,	// (0x00024447) input_focus_pane_vc_g7

0x30bf,	// (0x0002444f) input_focus_pane_vc_g8

0x30c7,	// (0x00024457) input_focus_pane_vc_g9

0xe7c5,	// (0x0002fb55) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x00030a2f) input_focus_pane_vc_g

0x4cc4,	// (0x00026054) data_form_pane_vc_ParamLimits

0x4cc4,	// (0x00026054) data_form_pane_vc

0x4cd0,	// (0x00026060) form_field_data_pane_vc_g1

0x6a82,	// (0x00027e12) form_field_data_pane_vc_t1_ParamLimits

0x6a82,	// (0x00027e12) form_field_data_pane_vc_t1

0x3020,	// (0x000243b0) input_focus_pane_vc_ParamLimits

0x3020,	// (0x000243b0) input_focus_pane_vc

0x6a9c,	// (0x00027e2c) button_value_adjust_pane_cp3_vc

0x6aa4,	// (0x00027e34) button_value_adjust_pane_cp5_vc

0x6aac,	// (0x00027e3c) form_field_data_pane_vc_ParamLimits

0x6aac,	// (0x00027e3c) form_field_data_pane_vc

0x6ac7,	// (0x00027e57) form_field_data_pane_vc_cp2

0x6acf,	// (0x00027e5f) form_field_data_wide_pane_vc_ParamLimits

0x6acf,	// (0x00027e5f) form_field_data_wide_pane_vc

0x6ae9,	// (0x00027e79) form_field_data_wide_pane_vc_cp2

0x6af1,	// (0x00027e81) form_field_popup_pane_vc_ParamLimits

0x6af1,	// (0x00027e81) form_field_popup_pane_vc

0x6b0c,	// (0x00027e9c) form_field_popup_wide_pane_vc_ParamLimits

0x6b0c,	// (0x00027e9c) form_field_popup_wide_pane_vc

0x6b26,	// (0x00027eb6) form_field_slider_pane_vc_ParamLimits

0x6b26,	// (0x00027eb6) form_field_slider_pane_vc

0x6b39,	// (0x00027ec9) form_field_slider_wide_pane_vc_ParamLimits

0x6b39,	// (0x00027ec9) form_field_slider_wide_pane_vc

0xdaae,	// (0x0002ee3e) grid_touch_1_pane_ParamLimits

0xdaae,	// (0x0002ee3e) grid_touch_1_pane

0xdac2,	// (0x0002ee52) grid_touch_2_pane_ParamLimits

0xdac2,	// (0x0002ee52) grid_touch_2_pane

0x6c10,	// (0x00027fa0) touch_pane_g1_ParamLimits

0x6c10,	// (0x00027fa0) touch_pane_g1

0x6b72,	// (0x00027f02) cell_app_pane_cp_wide_ParamLimits

0x6b72,	// (0x00027f02) cell_app_pane_cp_wide

0x6b83,	// (0x00027f13) grid_popup_fast_wide_pane_ParamLimits

0x6b83,	// (0x00027f13) grid_popup_fast_wide_pane

0x6b97,	// (0x00027f27) scroll_pane_cp19_ParamLimits

0x6b97,	// (0x00027f27) scroll_pane_cp19

0xe7cf,	// (0x0002fb5f) bg_popup_window_pane_cp20

0x6bab,	// (0x00027f3b) listscroll_popup_fast_wide_pane

0x31f6,	// (0x00024586) grid_indicator_nsta_pane

0x6bb3,	// (0x00027f43) clock_nsta_pane_g1

0x6bbc,	// (0x00027f4c) clock_nsta_pane_t1

0xdaee,	// (0x0002ee7e) cell_indicator_nsta_pane_ParamLimits

0xdaee,	// (0x0002ee7e) cell_indicator_nsta_pane

0x6c10,	// (0x00027fa0) cell_indicator_nsta_pane_g1

0xdb0b,	// (0x0002ee9b) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00030e3d) cell_indicator_nsta_pane_g

0x6c34,	// (0x00027fc4) clock_nsta_pane_cp

0x6c3c,	// (0x00027fcc) indicator_nsta_pane_cp

0x6c44,	// (0x00027fd4) nsta_clock_indic_pane_g1

0x11fd,	// (0x0002258d) grid_indicator_pane

0x35c8,	// (0x00024958) scroll_pane_cp29

0x1c2a,	// (0x00022fba) indicator_nsta_pane_cp2_ParamLimits

0x1c2a,	// (0x00022fba) indicator_nsta_pane_cp2

0x10a1,	// (0x00022431) main_apps_wheel_pane

0x4e63,	// (0x000261f3) form_midp_field_text_pane_ParamLimits

0x4fb2,	// (0x00026342) scroll_bar_cp050_ParamLimits

0x6cad,	// (0x0002803d) cell_indicator_pane_ParamLimits

0x6cad,	// (0x0002803d) cell_indicator_pane

0x6cc5,	// (0x00028055) cell_indicator_pane_g1

0xdb21,	// (0x0002eeb1) grid_wheel_folder_pane_ParamLimits

0xdb21,	// (0x0002eeb1) grid_wheel_folder_pane

0xdb2f,	// (0x0002eebf) list_wheel_apps_pane_ParamLimits

0xdb2f,	// (0x0002eebf) list_wheel_apps_pane

0xdb3d,	// (0x0002eecd) main_apps_wheel_pane_g1_ParamLimits

0xdb3d,	// (0x0002eecd) main_apps_wheel_pane_g1

0xdb4d,	// (0x0002eedd) main_apps_wheel_pane_g2_ParamLimits

0xdb4d,	// (0x0002eedd) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00030e59) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00030e59) main_apps_wheel_pane_g

0xdb5d,	// (0x0002eeed) main_apps_wheel_pane_t1_ParamLimits

0xdb5d,	// (0x0002eeed) main_apps_wheel_pane_t1

0xdb75,	// (0x0002ef05) list_wheel_apps_pane_g1

0xdb7d,	// (0x0002ef0d) list_wheel_apps_pane_g2

0xdb85,	// (0x0002ef15) list_wheel_apps_pane_g3

0xdb8d,	// (0x0002ef1d) list_wheel_apps_pane_g4

0xdb95,	// (0x0002ef25) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00030e5e) list_wheel_apps_pane_g

0x3b25,	// (0x00024eb5) navi_icon_text_pane

0xca77,	// (0x0002de07) aid_fill_nsta

0xdbb2,	// (0x0002ef42) navi_icon_text_pane_g1

0xdbbe,	// (0x0002ef4e) navi_icon_text_pane_t1

0xc0d4,	// (0x0002d464) list_set_graphic_pane_t1_ParamLimits

0xc0d4,	// (0x0002d464) list_set_graphic_pane_t1

0x5703,	// (0x00026a93) popup_midp_note_alarm_window_t6_ParamLimits

0x5703,	// (0x00026a93) popup_midp_note_alarm_window_t6

0x5715,	// (0x00026aa5) popup_midp_note_alarm_window_t7_ParamLimits

0x5715,	// (0x00026aa5) popup_midp_note_alarm_window_t7

0x5727,	// (0x00026ab7) popup_midp_note_alarm_window_t8_ParamLimits

0x5727,	// (0x00026ab7) popup_midp_note_alarm_window_t8

0x5739,	// (0x00026ac9) popup_midp_note_alarm_window_t9_ParamLimits

0x5739,	// (0x00026ac9) popup_midp_note_alarm_window_t9

0x574b,	// (0x00026adb) popup_midp_note_alarm_window_t10_ParamLimits

0x574b,	// (0x00026adb) popup_midp_note_alarm_window_t10

0x575d,	// (0x00026aed) popup_midp_note_alarm_window_t11_ParamLimits

0x575d,	// (0x00026aed) popup_midp_note_alarm_window_t11

0x576f,	// (0x00026aff) scroll_pane_cp17_ParamLimits

0x576f,	// (0x00026aff) scroll_pane_cp17

0x2062,	// (0x000233f2) volume_small_pane_cp_g1

0x2373,	// (0x00023703) volume_small_pane_cp_g2

0x237c,	// (0x0002370c) volume_small_pane_cp_g3

0x2385,	// (0x00023715) volume_small_pane_cp_g4

0x238e,	// (0x0002371e) volume_small_pane_cp_g5

0x2397,	// (0x00023727) volume_small_pane_cp_g6

0x23a0,	// (0x00023730) volume_small_pane_cp_g7

0x23a9,	// (0x00023739) volume_small_pane_cp_g8

0x23b2,	// (0x00023742) volume_small_pane_cp_g9

0x23bb,	// (0x0002374b) volume_small_pane_cp_g10

0x3d86,	// (0x00025116) midp_ticker_pane_g1_ParamLimits

0x3d92,	// (0x00025122) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x00030afb) midp_ticker_pane_g_ParamLimits

0xc194,	// (0x0002d524) midp_ticker_pane_t1_ParamLimits

0xca9b,	// (0x0002de2b) aid_fill_nsta_2

0x4f9e,	// (0x0002632e) list_form2_midp_pane

0x612c,	// (0x000274bc) midp_editing_number_pane_ParamLimits

0x613b,	// (0x000274cb) midp_ticker_pane_ParamLimits

0x6dbe,	// (0x0002814e) form2_midp_field_pane

0x6de2,	// (0x00028172) scroll_pane_cp51

0x6e02,	// (0x00028192) form2_midp_button_pane_ParamLimits

0x6e02,	// (0x00028192) form2_midp_button_pane

0x6e14,	// (0x000281a4) form2_midp_content_pane_ParamLimits

0x6e14,	// (0x000281a4) form2_midp_content_pane

0x6e2e,	// (0x000281be) form2_midp_field_choice_group_pane

0x6e36,	// (0x000281c6) form2_midp_field_pane_g1

0x6e3e,	// (0x000281ce) form2_midp_field_pane_g2

0x6e46,	// (0x000281d6) form2_midp_field_pane_g3

0x6e4e,	// (0x000281de) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00030e83) form2_midp_field_pane_g

0x6e56,	// (0x000281e6) form2_midp_gauge_slider_pane

0x6e5e,	// (0x000281ee) form2_midp_gauge_wait_pane

0x6e66,	// (0x000281f6) form2_midp_image_pane_ParamLimits

0x6e66,	// (0x000281f6) form2_midp_image_pane

0xdbec,	// (0x0002ef7c) form2_midp_label_pane_ParamLimits

0xdbec,	// (0x0002ef7c) form2_midp_label_pane

0xdc0b,	// (0x0002ef9b) form2_midp_label_pane_cp_ParamLimits

0xdc0b,	// (0x0002ef9b) form2_midp_label_pane_cp

0x6eb9,	// (0x00028249) form2_midp_string_pane_ParamLimits

0x6eb9,	// (0x00028249) form2_midp_string_pane

0xb64f,	// (0x0002c9df) form2_midp_text_pane_ParamLimits

0xb64f,	// (0x0002c9df) form2_midp_text_pane

0x6ecb,	// (0x0002825b) form2_midp_time_pane

0x6edb,	// (0x0002826b) input_focus_pane_cp51_ParamLimits

0x6edb,	// (0x0002826b) input_focus_pane_cp51

0xdc2c,	// (0x0002efbc) form2_midp_label_pane_t1_ParamLimits

0xdc2c,	// (0x0002efbc) form2_midp_label_pane_t1

0xb670,	// (0x0002ca00) form2_mdip_text_pane_t1_ParamLimits

0xb670,	// (0x0002ca00) form2_mdip_text_pane_t1

0x0810,	// (0x00021ba0) form2_midp_time_pane_t1

0x6f31,	// (0x000282c1) form2_midp_gauge_slider_pane_t1

0xdc69,	// (0x0002eff9) form2_midp_gauge_slider_pane_t2

0xdc7b,	// (0x0002f00b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00030e8c) form2_midp_gauge_slider_pane_t

0x6f67,	// (0x000282f7) form2_midp_slider_pane

0x6f73,	// (0x00028303) form2_midp_gauge_wait_pane_t1

0x6f81,	// (0x00028311) form2_midp_wait_pane_ParamLimits

0x6f81,	// (0x00028311) form2_midp_wait_pane

0xdc8d,	// (0x0002f01d) list_single_2graphic_pane_cp4_ParamLimits

0xdc8d,	// (0x0002f01d) list_single_2graphic_pane_cp4

0xd53f,	// (0x0002e8cf) list_single_midp_graphic_pane_cp_ParamLimits

0xd53f,	// (0x0002e8cf) list_single_midp_graphic_pane_cp

0xe7cf,	// (0x0002fb5f) list_highlight_pane_cp20

0x6fbd,	// (0x0002834d) list_single_2graphic_pane_g1_cp4

0x65cb,	// (0x0002795b) list_single_2graphic_pane_g2_cp4

0x6fc5,	// (0x00028355) list_single_2graphic_pane_t1_cp4

0x10a1,	// (0x00022431) list_highlight_pane_cp21

0x6fd4,	// (0x00028364) list_single_midp_graphic_pane_g4_cp

0x6fe3,	// (0x00028373) list_single_midp_graphic_pane_t1_cp

0xdca0,	// (0x0002f030) form2_mdip_string_pane_t1_ParamLimits

0xdca0,	// (0x0002f030) form2_mdip_string_pane_t1

0xe7cf,	// (0x0002fb5f) bg_wml_button_pane_cp2

0xe7c5,	// (0x0002fb55) form2_midp_image_pane_g1

0xf545,	// (0x000308d5) list_double_large_graphic_pane_g5_ParamLimits

0xf545,	// (0x000308d5) list_double_large_graphic_pane_g5

0xc0ec,	// (0x0002d47c) midp_form_pane_ParamLimits

0x10a1,	// (0x00022431) main_apps_wheel_pane_ParamLimits

0xc78f,	// (0x0002db1f) popup_preview_window_ParamLimits

0xc78f,	// (0x0002db1f) popup_preview_window

0x45f3,	// (0x00025983) popup_touch_info_window_ParamLimits

0x45f3,	// (0x00025983) popup_touch_info_window

0x4615,	// (0x000259a5) popup_touch_menu_window_ParamLimits

0x4615,	// (0x000259a5) popup_touch_menu_window

0xe7bb,	// (0x0002fb4b) bg_popup_sub_pane_cp6

0x7052,	// (0x000283e2) list_touch_menu_pane

0x705a,	// (0x000283ea) list_single_touch_menu_pane_ParamLimits

0x705a,	// (0x000283ea) list_single_touch_menu_pane

0x7075,	// (0x00028405) list_single_touch_menu_pane_t1

0x10a1,	// (0x00022431) bg_popup_sub_pane_cp7_ParamLimits

0x10a1,	// (0x00022431) bg_popup_sub_pane_cp7

0x7083,	// (0x00028413) heading_sub_pane

0x708b,	// (0x0002841b) list_touch_info_pane_ParamLimits

0x708b,	// (0x0002841b) list_touch_info_pane

0x709a,	// (0x0002842a) list_single_touch_info_pane_ParamLimits

0x709a,	// (0x0002842a) list_single_touch_info_pane

0x70ac,	// (0x0002843c) list_single_touch_info_pane_t1

0x70ba,	// (0x0002844a) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00030e9a) list_single_touch_info_pane_t

0x3ca9,	// (0x00025039) bg_popup_heading_pane_cp

0x70c8,	// (0x00028458) heading_sub_pane_t1

0x4c5e,	// (0x00025fee) bg_popup_preview_window_pane_cp_ParamLimits

0x4c5e,	// (0x00025fee) bg_popup_preview_window_pane_cp

0x7083,	// (0x00028413) heading_preview_pane

0x708b,	// (0x0002841b) list_preview_pane_ParamLimits

0x708b,	// (0x0002841b) list_preview_pane

0x70d6,	// (0x00028466) popup_preview_window_g1

0x709a,	// (0x0002842a) list_single_preview_pane_ParamLimits

0x709a,	// (0x0002842a) list_single_preview_pane

0x70de,	// (0x0002846e) list_single_preview_pane_g1

0x70e6,	// (0x00028476) list_single_preview_pane_t1

0x70ac,	// (0x0002843c) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00030e9f) list_single_preview_pane_t

0x70f4,	// (0x00028484) bg_popup_heading_pane_cp2_ParamLimits

0x70f4,	// (0x00028484) bg_popup_heading_pane_cp2

0x710a,	// (0x0002849a) heading_preview_pane_g1

0x7112,	// (0x000284a2) heading_preview_pane_t1_ParamLimits

0x7112,	// (0x000284a2) heading_preview_pane_t1

0x1220,	// (0x000225b0) soft_indicator_pane_t1_ParamLimits

0x192b,	// (0x00022cbb) scroll_pane_ParamLimits

0x34c4,	// (0x00024854) scroll_sc2_left_pane

0x34cd,	// (0x0002485d) scroll_sc2_right_pane

0x34ec,	// (0x0002487c) scroll_bg_pane_g1_ParamLimits

0x3501,	// (0x00024891) scroll_bg_pane_g2_ParamLimits

0x3519,	// (0x000248a9) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x00030a86) scroll_bg_pane_g_ParamLimits

0x34ec,	// (0x0002487c) scroll_handle_pane_g1_ParamLimits

0x353b,	// (0x000248cb) scroll_handle_pane_g2_ParamLimits

0x3519,	// (0x000248a9) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x00030a8d) scroll_handle_pane_g_ParamLimits

0x4057,	// (0x000253e7) popup_choice_list_window_ParamLimits

0x4057,	// (0x000253e7) popup_choice_list_window

0x4ab6,	// (0x00025e46) choice_list_pane

0x4b38,	// (0x00025ec8) cell_toolbar_pane_t1

0x4b60,	// (0x00025ef0) toolbar_button_pane_ParamLimits

0x5c3f,	// (0x00026fcf) ai_gene_pane_1_t2_ParamLimits

0x5c3f,	// (0x00026fcf) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x00030ca9) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x00030ca9) ai_gene_pane_1_t

0x712f,	// (0x000284bf) scroll_sc2_left_pane_g1

0x712f,	// (0x000284bf) scroll_sc2_right_pane_g1

0x402f,	// (0x000253bf) bg_popup_sub_pane_cp10

0x7139,	// (0x000284c9) list_choice_list_pane

0x7150,	// (0x000284e0) list_single_choice_list_pane_ParamLimits

0x7150,	// (0x000284e0) list_single_choice_list_pane

0x7164,	// (0x000284f4) list_single_choice_list_pane_g1

0x716c,	// (0x000284fc) list_single_choice_list_pane_t1_ParamLimits

0x716c,	// (0x000284fc) list_single_choice_list_pane_t1

0x7181,	// (0x00028511) choice_list_pane_g1

0x7189,	// (0x00028519) choice_list_pane_t1

0xe7bb,	// (0x0002fb4b) input_focus_pane_cp11

0x339e,	// (0x0002472e) title_pane_stacon_g2_ParamLimits

0x339e,	// (0x0002472e) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x00030a6c) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x00030a6c) title_pane_stacon_g

0x3ca9,	// (0x00025039) cursor_press_pane

0xc410,	// (0x0002d7a0) popup_fep_hwr_window_ParamLimits

0xc410,	// (0x0002d7a0) popup_fep_hwr_window

0x4197,	// (0x00025527) popup_fep_vkb_window_ParamLimits

0x4197,	// (0x00025527) popup_fep_vkb_window

0x7197,	// (0x00028527) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00030ec8) fep_vkb_side_pane_g_ParamLimits

0x23ef,	// (0x0002377f) fep_hwr_candidate_pane_ParamLimits

0x23ef,	// (0x0002377f) fep_hwr_candidate_pane

0x2419,	// (0x000237a9) fep_hwr_side_pane_ParamLimits

0x2419,	// (0x000237a9) fep_hwr_side_pane

0x243b,	// (0x000237cb) fep_hwr_top_pane_ParamLimits

0x243b,	// (0x000237cb) fep_hwr_top_pane

0x2453,	// (0x000237e3) fep_hwr_write_pane_ParamLimits

0x2453,	// (0x000237e3) fep_hwr_write_pane

0xfb38,	// (0x00030ec8) fep_vkb_side_pane_g

0x719f,	// (0x0002852f) fep_hwr_top_pane_g1

0x71b1,	// (0x00028541) fep_hwr_top_pane_g2

0x247f,	// (0x0002380f) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00030ea4) fep_hwr_top_pane_g

0x2494,	// (0x00023824) fep_hwr_top_text_pane

0x3690,	// (0x00024a20) fep_hwr_top_text_pane_g1

0x71e7,	// (0x00028577) fep_hwr_top_text_pane_t1

0x259e,	// (0x0002392e) fep_hwr_candidate_pane_g1

0x7432,	// (0x000287c2) fep_vkb_keypad_pane_g3_ParamLimits

0x7432,	// (0x000287c2) fep_vkb_keypad_pane_g3

0x745e,	// (0x000287ee) fep_vkb_keypad_pane_g4_ParamLimits

0x745e,	// (0x000287ee) fep_vkb_keypad_pane_g4

0x74d5,	// (0x00028865) fep_vkb_bottom_pane_g2_ParamLimits

0x74d5,	// (0x00028865) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00030ecf) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00030ecf) fep_vkb_bottom_pane_g

0x712f,	// (0x000284bf) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00030ed9) cell_vkb_side_pane_g

0x7560,	// (0x000288f0) cell_vkb_side_pane_t1

0x756e,	// (0x000288fe) cell_vkb_side_pane_t1_copy1

0x712f,	// (0x000284bf) bg_fep_vkb_candidate_pane_g2

0x76b2,	// (0x00028a42) cell_vkb_candidate_pane_ParamLimits

0x71f5,	// (0x00028585) aid_size_cell_vkb_ParamLimits

0x71f5,	// (0x00028585) aid_size_cell_vkb

0x76b2,	// (0x00028a42) cell_vkb_candidate_pane

0x25b8,	// (0x00023948) bg_popup_fep_shadow_pane_g1

0xdd4c,	// (0x0002f0dc) fep_vkb_bottom_pane_ParamLimits

0xdd4c,	// (0x0002f0dc) fep_vkb_bottom_pane

0x72c4,	// (0x00028654) fep_vkb_candidate_pane_ParamLimits

0x72c4,	// (0x00028654) fep_vkb_candidate_pane

0xdd78,	// (0x0002f108) fep_vkb_keypad_pane_ParamLimits

0xdd78,	// (0x0002f108) fep_vkb_keypad_pane

0xdd9f,	// (0x0002f12f) fep_vkb_side_pane_ParamLimits

0xdd9f,	// (0x0002f12f) fep_vkb_side_pane

0xdddb,	// (0x0002f16b) fep_vkb_top_pane_ParamLimits

0xdddb,	// (0x0002f16b) fep_vkb_top_pane

0x738b,	// (0x0002871b) fep_vkb_top_pane_g1_ParamLimits

0x738b,	// (0x0002871b) fep_vkb_top_pane_g1

0x739a,	// (0x0002872a) fep_vkb_top_pane_g2_ParamLimits

0x739a,	// (0x0002872a) fep_vkb_top_pane_g2

0x73a9,	// (0x00028739) fep_vkb_top_pane_g3_ParamLimits

0x73a9,	// (0x00028739) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00030ebf) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00030ebf) fep_vkb_top_pane_g

0x73c7,	// (0x00028757) fep_vkb_top_text_pane_ParamLimits

0x73c7,	// (0x00028757) fep_vkb_top_text_pane

0xde17,	// (0x0002f1a7) fep_vkb_side_pane_g1_ParamLimits

0xde17,	// (0x0002f1a7) fep_vkb_side_pane_g1

0x7421,	// (0x000287b1) grid_vkb_side_pane_ParamLimits

0x7421,	// (0x000287b1) grid_vkb_side_pane

0x25c0,	// (0x00023950) bg_popup_fep_shadow_pane_g2

0x25c9,	// (0x00023959) bg_popup_fep_shadow_pane_g3

0x25d1,	// (0x00023961) bg_popup_fep_shadow_pane_g4

0x25da,	// (0x0002396a) bg_popup_fep_shadow_pane_g5

0x25e4,	// (0x00023974) bg_popup_fep_shadow_pane_g6

0x25ec,	// (0x0002397c) bg_popup_fep_shadow_pane_g7

0x30a7,	// (0x00024437) bg_popup_fep_shadow_pane_g8

0x7480,	// (0x00028810) grid_vkb_keypad_number_pane_ParamLimits

0x7480,	// (0x00028810) grid_vkb_keypad_number_pane

0x7494,	// (0x00028824) grid_vkb_keypad_pane_ParamLimits

0x7494,	// (0x00028824) grid_vkb_keypad_pane

0x74ba,	// (0x0002884a) fep_vkb_bottom_pane_g1_ParamLimits

0x74ba,	// (0x0002884a) fep_vkb_bottom_pane_g1

0x74e3,	// (0x00028873) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x74e3,	// (0x00028873) grid_vkb_keypad_bottom_left_pane

0x74f8,	// (0x00028888) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x74f8,	// (0x00028888) grid_vkb_keypad_bottom_right_pane

0x750d,	// (0x0002889d) fep_vkb_top_text_pane_g1

0xde5e,	// (0x0002f1ee) fep_vkb_top_text_pane_t1

0xde70,	// (0x0002f200) cell_vkb_side_pane_ParamLimits

0xde70,	// (0x0002f200) cell_vkb_side_pane

0x712f,	// (0x000284bf) cell_vkb_side_pane_g1

0x757c,	// (0x0002890c) cell_vkb_keypad_pane_ParamLimits

0x757c,	// (0x0002890c) cell_vkb_keypad_pane

0x7609,	// (0x00028999) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00030eec) bg_popup_fep_shadow_pane_g

0x712f,	// (0x000284bf) cell_hwr_side_pane_g1

0x712f,	// (0x000284bf) cell_hwr_side_pane_g2

0x7613,	// (0x000289a3) cell_vkb_keypad_pane_t1

0xde86,	// (0x0002f216) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xde86,	// (0x0002f216) cell_vkb_keypad_bottom_left_pane

0xde9b,	// (0x0002f22b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xde9b,	// (0x0002f22b) cell_vkb_keypad_bottom_right_pane

0x712f,	// (0x000284bf) cell_vkb_keypad_bottom_left_pane_g1

0x712f,	// (0x000284bf) cell_vkb_keypad_bottom_right_pane_g1

0x7677,	// (0x00028a07) cell_vkb_keypad_number_pane_ParamLimits

0x7677,	// (0x00028a07) cell_vkb_keypad_number_pane

0x7696,	// (0x00028a26) cell_vkb_keypad_number_pane_g1

0x76a0,	// (0x00028a30) cell_vkb_keypad_number_pane_g2

0x76a9,	// (0x00028a39) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00030ede) cell_vkb_keypad_number_pane_g

0x7613,	// (0x000289a3) cell_vkb_keypad_number_pane_t1

0x76d3,	// (0x00028a63) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00030ed9) cell_hwr_side_pane_g

0x76ec,	// (0x00028a7c) cell_hwr_side_pane_t1

0x25fe,	// (0x0002398e) cell_hwr_side_pane_t1_copy1

0x73b9,	// (0x00028749) cell_hwr_candidate_pane_g1

0x260c,	// (0x0002399c) cell_hwr_candidate_pane_t1

0x712f,	// (0x000284bf) cell_vkb_candidate_pane_g2

0x7772,	// (0x00028b02) cell_vkb_candidate_pane_t1

0xc34e,	// (0x0002d6de) bg_popup_fep_shadow_pane_ParamLimits

0xc34e,	// (0x0002d6de) bg_popup_fep_shadow_pane

0xdd12,	// (0x0002f0a2) bg_fep_hwr_top_pane_g4

0x71c3,	// (0x00028553) bg_hwr_side_pane_g1_ParamLimits

0x71c3,	// (0x00028553) bg_hwr_side_pane_g1

0xccd1,	// (0x0002e061) cell_hwr_side_pane_ParamLimits

0xccd1,	// (0x0002e061) cell_hwr_side_pane

0x250f,	// (0x0002389f) fep_hwr_write_pane_g1_ParamLimits

0x250f,	// (0x0002389f) fep_hwr_write_pane_g1

0x251c,	// (0x000238ac) fep_hwr_write_pane_g2_ParamLimits

0x251c,	// (0x000238ac) fep_hwr_write_pane_g2

0x2529,	// (0x000238b9) fep_hwr_write_pane_g3_ParamLimits

0x2529,	// (0x000238b9) fep_hwr_write_pane_g3

0xccf1,	// (0x0002e081) fep_hwr_write_pane_g4_ParamLimits

0xccf1,	// (0x0002e081) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00030eab) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00030eab) fep_hwr_write_pane_g

0xdd12,	// (0x0002f0a2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdd12,	// (0x0002f0a2) bg_fep_hwr_candidate_pane_g2

0x254c,	// (0x000238dc) cell_hwr_candidate_pane_ParamLimits

0x254c,	// (0x000238dc) cell_hwr_candidate_pane

0x259e,	// (0x0002392e) fep_hwr_candidate_pane_g1_ParamLimits

0x7223,	// (0x000285b3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7223,	// (0x000285b3) bg_popup_fep_shadow_pane_cp2

0x73b9,	// (0x00028749) fep_vkb_top_pane_g4_ParamLimits

0x73b9,	// (0x00028749) fep_vkb_top_pane_g4

0x73ff,	// (0x0002878f) fep_vkb_side_pane_g2_ParamLimits

0x73ff,	// (0x0002878f) fep_vkb_side_pane_g2

0xb2ee,	// (0x0002c67e) list_setting_pane_t4_ParamLimits

0xb2ee,	// (0x0002c67e) list_setting_pane_t4

0xb38a,	// (0x0002c71a) list_setting_number_pane_t5_ParamLimits

0xb38a,	// (0x0002c71a) list_setting_number_pane_t5

0x36c7,	// (0x00024a57) list_double_heading_pane_cp2_ParamLimits

0x36c7,	// (0x00024a57) list_double_heading_pane_cp2

0x303a,	// (0x000243ca) list_double_heading_pane_g1_cp2_ParamLimits

0x303a,	// (0x000243ca) list_double_heading_pane_g1_cp2

0x3046,	// (0x000243d6) list_double_heading_pane_g2_cp2_ParamLimits

0x3046,	// (0x000243d6) list_double_heading_pane_g2_cp2

0x7780,	// (0x00028b10) list_double_heading_pane_t1_cp2_ParamLimits

0x7780,	// (0x00028b10) list_double_heading_pane_t1_cp2

0x7796,	// (0x00028b26) list_double_heading_pane_t2_cp2_ParamLimits

0x7796,	// (0x00028b26) list_double_heading_pane_t2_cp2

0xe7b3,	// (0x0002fb43) aid_value_unit2

0x0ebf,	// (0x0002224f) popup_preview_fixed_window

0x13bb,	// (0x0002274b) bg_popup_preview_window_pane_cp02

0x77a8,	// (0x00028b38) list_preview_fixed_pane

0x77ee,	// (0x00028b7e) list_empty_pane_fp_ParamLimits

0x77ee,	// (0x00028b7e) list_empty_pane_fp

0x77ee,	// (0x00028b7e) list_single_cale_day_pane_fp_ParamLimits

0x77ee,	// (0x00028b7e) list_single_cale_day_pane_fp

0x77ee,	// (0x00028b7e) list_single_graphic_heading_pane_fp_ParamLimits

0x77ee,	// (0x00028b7e) list_single_graphic_heading_pane_fp

0x77ee,	// (0x00028b7e) list_single_graphic_pane_fp_ParamLimits

0x77ee,	// (0x00028b7e) list_single_graphic_pane_fp

0x77ee,	// (0x00028b7e) list_single_heading_pane_fp_ParamLimits

0x77ee,	// (0x00028b7e) list_single_heading_pane_fp

0x77ee,	// (0x00028b7e) list_single_pane_fp_ParamLimits

0x77ee,	// (0x00028b7e) list_single_pane_fp

0x7807,	// (0x00028b97) list_single_pane_fp_g1_ParamLimits

0x7807,	// (0x00028b97) list_single_pane_fp_g1

0x0823,	// (0x00021bb3) list_single_pane_fp_g2_ParamLimits

0x0823,	// (0x00021bb3) list_single_pane_fp_g2

0x082f,	// (0x00021bbf) list_single_pane_fp_g3_ParamLimits

0x082f,	// (0x00021bbf) list_single_pane_fp_g3

0x7813,	// (0x00028ba3) list_single_pane_fp_g4_ParamLimits

0x7813,	// (0x00028ba3) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x00030f0d) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x00030f0d) list_single_pane_fp_g

0x0843,	// (0x00021bd3) list_single_pane_fp_t1_ParamLimits

0x0843,	// (0x00021bd3) list_single_pane_fp_t1

0x085a,	// (0x00021bea) list_single_graphic_pane_fp_g1_ParamLimits

0x085a,	// (0x00021bea) list_single_graphic_pane_fp_g1

0x7807,	// (0x00028b97) list_single_graphic_pane_fp_g2_ParamLimits

0x7807,	// (0x00028b97) list_single_graphic_pane_fp_g2

0x0823,	// (0x00021bb3) list_single_graphic_pane_fp_g3_ParamLimits

0x0823,	// (0x00021bb3) list_single_graphic_pane_fp_g3

0x082f,	// (0x00021bbf) list_single_graphic_pane_fp_g4_ParamLimits

0x082f,	// (0x00021bbf) list_single_graphic_pane_fp_g4

0x7813,	// (0x00028ba3) list_single_graphic_pane_fp_g5_ParamLimits

0x7813,	// (0x00028ba3) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x00030f16) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x00030f16) list_single_graphic_pane_fp_g

0x0866,	// (0x00021bf6) list_single_graphic_pane_fp_t1_ParamLimits

0x0866,	// (0x00021bf6) list_single_graphic_pane_fp_t1

0x085a,	// (0x00021bea) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x085a,	// (0x00021bea) list_single_graphic_heading_pane_fp_g1

0x7807,	// (0x00028b97) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7807,	// (0x00028b97) list_single_graphic_heading_pane_fp_g2

0x0823,	// (0x00021bb3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0823,	// (0x00021bb3) list_single_graphic_heading_pane_fp_g3

0x082f,	// (0x00021bbf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x082f,	// (0x00021bbf) list_single_graphic_heading_pane_fp_g4

0x7813,	// (0x00028ba3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7813,	// (0x00028ba3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00030f16) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00030f16) list_single_graphic_heading_pane_fp_g

0x087c,	// (0x00021c0c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x087c,	// (0x00021c0c) list_single_graphic_heading_pane_fp_t1

0x0892,	// (0x00021c22) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0892,	// (0x00021c22) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00030f21) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00030f21) list_single_graphic_heading_pane_fp_t

0x08a4,	// (0x00021c34) list_single_cale_day_pane_fp_g1_ParamLimits

0x08a4,	// (0x00021c34) list_single_cale_day_pane_fp_g1

0x781f,	// (0x00028baf) list_single_cale_day_pane_fp_g2_ParamLimits

0x781f,	// (0x00028baf) list_single_cale_day_pane_fp_g2

0x08dc,	// (0x00021c6c) list_single_cale_day_pane_fp_g3_ParamLimits

0x08dc,	// (0x00021c6c) list_single_cale_day_pane_fp_g3

0x0904,	// (0x00021c94) list_single_cale_day_pane_fp_g4_ParamLimits

0x0904,	// (0x00021c94) list_single_cale_day_pane_fp_g4

0x0928,	// (0x00021cb8) list_single_cale_day_pane_fp_g5_ParamLimits

0x0928,	// (0x00021cb8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x00030f26) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x00030f26) list_single_cale_day_pane_fp_g

0x094c,	// (0x00021cdc) list_single_cale_day_pane_fp_t1_ParamLimits

0x094c,	// (0x00021cdc) list_single_cale_day_pane_fp_t1

0x0972,	// (0x00021d02) list_single_cale_day_pane_fp_t2_ParamLimits

0x0972,	// (0x00021d02) list_single_cale_day_pane_fp_t2

0x098b,	// (0x00021d1b) list_single_cale_day_pane_fp_t3_ParamLimits

0x098b,	// (0x00021d1b) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x00030f31) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x00030f31) list_single_cale_day_pane_fp_t

0x7807,	// (0x00028b97) list_empty_pane_fp_g1_ParamLimits

0x7807,	// (0x00028b97) list_empty_pane_fp_g1

0x09a4,	// (0x00021d34) list_empty_pane_fp_t1

0x09b2,	// (0x00021d42) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x00030f38) list_empty_pane_fp_t

0x7807,	// (0x00028b97) list_single_heading_pane_fp_g1_ParamLimits

0x7807,	// (0x00028b97) list_single_heading_pane_fp_g1

0x0823,	// (0x00021bb3) list_single_heading_pane_fp_g2_ParamLimits

0x0823,	// (0x00021bb3) list_single_heading_pane_fp_g2

0x082f,	// (0x00021bbf) list_single_heading_pane_fp_g3_ParamLimits

0x082f,	// (0x00021bbf) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x00030f3d) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00030f3d) list_single_heading_pane_fp_g

0x09c0,	// (0x00021d50) list_single_heading_pane_fp_t1_ParamLimits

0x09c0,	// (0x00021d50) list_single_heading_pane_fp_t1

0x09d2,	// (0x00021d62) list_single_heading_pane_fp_t2_ParamLimits

0x09d2,	// (0x00021d62) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x00030f44) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x00030f44) list_single_heading_pane_fp_t

0x3235,	// (0x000245c5) aid_size_cell_fast

0x132d,	// (0x000226bd) soft_indicator_pane_cp1_t1

0x3272,	// (0x00024602) cell_app_pane_cp2_ParamLimits

0x3272,	// (0x00024602) cell_app_pane_cp2

0x23d8,	// (0x00023768) fep_hwr_candidate_drop_down_list_pane

0xdd20,	// (0x0002f0b0) fep_hwr_candidate_pane_g3_ParamLimits

0xdd20,	// (0x0002f0b0) fep_hwr_candidate_pane_g3

0xdd2d,	// (0x0002f0bd) fep_hwr_candidate_pane_g4_ParamLimits

0xdd2d,	// (0x0002f0bd) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00030eb8) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00030eb8) fep_hwr_candidate_pane_g

0x72b3,	// (0x00028643) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x72b3,	// (0x00028643) fep_vkb_candidate_drop_down_list_pane

0x76db,	// (0x00028a6b) fep_vkb_candidate_pane_g3

0x76e3,	// (0x00028a73) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00030ee5) fep_vkb_candidate_pane_g

0x73b9,	// (0x00028749) cell_hwr_candidate_pane_g1_ParamLimits

0x76fa,	// (0x00028a8a) cell_hwr_candidate_pane_g3_ParamLimits

0x76fa,	// (0x00028a8a) cell_hwr_candidate_pane_g3

0x771b,	// (0x00028aab) cell_hwr_candidate_pane_g4_ParamLimits

0x771b,	// (0x00028aab) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x00030eff) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x00030eff) cell_hwr_candidate_pane_g

0x773c,	// (0x00028acc) cell_vkb_candidate_pane_g3_ParamLimits

0x773c,	// (0x00028acc) cell_vkb_candidate_pane_g3

0x7757,	// (0x00028ae7) cell_vkb_candidate_pane_g4_ParamLimits

0x7757,	// (0x00028ae7) cell_vkb_candidate_pane_g4

0x782b,	// (0x00028bbb) cell_app_pane_cp2_g1_ParamLimits

0x782b,	// (0x00028bbb) cell_app_pane_cp2_g1

0x7849,	// (0x00028bd9) cell_app_pane_cp2_g2_ParamLimits

0x7849,	// (0x00028bd9) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x00030f49) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x00030f49) cell_app_pane_cp2_g

0x7855,	// (0x00028be5) cell_app_pane_cp2_t1_ParamLimits

0x7855,	// (0x00028be5) cell_app_pane_cp2_t1

0x3020,	// (0x000243b0) grid_highlight_pane_cp1_ParamLimits

0x3020,	// (0x000243b0) grid_highlight_pane_cp1

0x262a,	// (0x000239ba) cell_hwr_candidate_pane_cp1_ParamLimits

0x262a,	// (0x000239ba) cell_hwr_candidate_pane_cp1

0x73b9,	// (0x00028749) fep_hwr_candidate_drop_down_list_pane_g1

0x7867,	// (0x00028bf7) fep_hwr_candidate_drop_down_list_pane_g2

0x7874,	// (0x00028c04) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00030f4e) fep_hwr_candidate_drop_down_list_pane_g

0x264e,	// (0x000239de) fep_hwr_candidate_drop_down_list_scroll_pane

0x2657,	// (0x000239e7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2657,	// (0x000239e7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2664,	// (0x000239f4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2664,	// (0x000239f4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2671,	// (0x00023a01) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2671,	// (0x00023a01) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x773c,	// (0x00028acc) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x773c,	// (0x00028acc) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7757,	// (0x00028ae7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7757,	// (0x00028ae7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x267e,	// (0x00023a0e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x267e,	// (0x00023a0e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2699,	// (0x00023a29) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2699,	// (0x00023a29) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x26b4,	// (0x00023a44) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x26b4,	// (0x00023a44) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x00030f55) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x00030f55) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7881,	// (0x00028c11) cell_vkb_candidate_pane_cp1_ParamLimits

0x7881,	// (0x00028c11) cell_vkb_candidate_pane_cp1

0x73b9,	// (0x00028749) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x73b9,	// (0x00028749) fep_vkb_candidate_drop_down_list_pane_g1

0x7867,	// (0x00028bf7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7867,	// (0x00028bf7) fep_vkb_candidate_drop_down_list_pane_g2

0x7874,	// (0x00028c04) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7874,	// (0x00028c04) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00030f4e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x00030f4e) fep_vkb_candidate_drop_down_list_pane_g

0x78a7,	// (0x00028c37) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x78a7,	// (0x00028c37) fep_vkb_candidate_drop_down_list_scroll_pane

0x78b4,	// (0x00028c44) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x78b4,	// (0x00028c44) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x78c1,	// (0x00028c51) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x78c1,	// (0x00028c51) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x78cd,	// (0x00028c5d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x78cd,	// (0x00028c5d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x76fa,	// (0x00028a8a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x76fa,	// (0x00028a8a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x771b,	// (0x00028aab) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x771b,	// (0x00028aab) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x78d9,	// (0x00028c69) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x78d9,	// (0x00028c69) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x78fa,	// (0x00028c8a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x78fa,	// (0x00028c8a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x791b,	// (0x00028cab) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x791b,	// (0x00028cab) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00030f66) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00030f66) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xba29,	// (0x0002cdb9) title_pane_g1_ParamLimits

0xba3c,	// (0x0002cdcc) title_pane_g2_ParamLimits

0xf566,	// (0x000308f6) title_pane_g_ParamLimits

0x3680,	// (0x00024a10) aid_call2_pane

0x3688,	// (0x00024a18) aid_call_pane

0x3690,	// (0x00024a20) popup_clock_analogue_window_g1

0x3690,	// (0x00024a20) popup_clock_analogue_window_g2

0x1b29,	// (0x00022eb9) popup_clock_analogue_window_g3

0x1b32,	// (0x00022ec2) popup_clock_analogue_window_g4

0xe7c5,	// (0x0002fb55) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x00030a9b) popup_clock_analogue_window_g

0x1b3a,	// (0x00022eca) popup_clock_analogue_window_t1

0x1b48,	// (0x00022ed8) clock_digital_number_pane_ParamLimits

0x1b48,	// (0x00022ed8) clock_digital_number_pane

0x1b54,	// (0x00022ee4) clock_digital_number_pane_cp02_ParamLimits

0x1b54,	// (0x00022ee4) clock_digital_number_pane_cp02

0x1b60,	// (0x00022ef0) clock_digital_number_pane_cp03_ParamLimits

0x1b60,	// (0x00022ef0) clock_digital_number_pane_cp03

0x1b6c,	// (0x00022efc) clock_digital_number_pane_cp04_ParamLimits

0x1b6c,	// (0x00022efc) clock_digital_number_pane_cp04

0x1b78,	// (0x00022f08) clock_digital_separator_pane_ParamLimits

0x1b78,	// (0x00022f08) clock_digital_separator_pane

0x1b84,	// (0x00022f14) popup_clock_digital_window_t1_ParamLimits

0x1b84,	// (0x00022f14) popup_clock_digital_window_t1

0xe7c5,	// (0x0002fb55) clock_digital_number_pane_g1

0xe7c5,	// (0x0002fb55) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x00030aa6) clock_digital_number_pane_g

0xe7c5,	// (0x0002fb55) clock_digital_separator_pane_g1

0xe7c5,	// (0x0002fb55) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x00030aa6) clock_digital_separator_pane_g

0xca77,	// (0x0002de07) aid_fill_nsta_ParamLimits

0xd21e,	// (0x0002e5ae) indicator_nsta_pane_ParamLimits

0x4943,	// (0x00025cd3) popup_clock_analogue_window

0x4943,	// (0x00025cd3) popup_clock_digital_window

0x31f6,	// (0x00024586) grid_indicator_nsta_pane_ParamLimits

0x6bca,	// (0x00027f5a) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00030e38) clock_nsta_pane_t

0x1aed,	// (0x00022e7d) aid_size_max_handle

0xbf43,	// (0x0002d2d3) aid_size_min_handle

0x3ca9,	// (0x00025039) editor_scroll_pane

0x7936,	// (0x00028cc6) ex_editor_pane

0x31a2,	// (0x00024532) scroll_pane_cp13

0x1957,	// (0x00022ce7) scroll_pane_cp14

0x36bf,	// (0x00024a4f) scroll_pane_cp36

0xbfd0,	// (0x0002d360) list_single_graphic_hl_pane_cp2_ParamLimits

0xbfd0,	// (0x0002d360) list_single_graphic_hl_pane_cp2

0xd986,	// (0x0002ed16) list_single_graphic_hl_pane_ParamLimits

0xd986,	// (0x0002ed16) list_single_graphic_hl_pane

0x09e8,	// (0x00021d78) aid_size_min_hl_cp1

0x793e,	// (0x00028cce) list_highlight_pane_cp34_ParamLimits

0x793e,	// (0x00028cce) list_highlight_pane_cp34

0x794f,	// (0x00028cdf) list_single_graphic_hl_pane_g1_ParamLimits

0x794f,	// (0x00028cdf) list_single_graphic_hl_pane_g1

0xb68b,	// (0x0002ca1b) list_single_graphic_hl_pane_g2_ParamLimits

0xb68b,	// (0x0002ca1b) list_single_graphic_hl_pane_g2

0xb68b,	// (0x0002ca1b) list_single_graphic_hl_pane_g3_ParamLimits

0xb68b,	// (0x0002ca1b) list_single_graphic_hl_pane_g3

0xf55a,	// (0x000308ea) list_single_graphic_hl_pane_g4_ParamLimits

0xf55a,	// (0x000308ea) list_single_graphic_hl_pane_g4

0xb697,	// (0x0002ca27) list_single_graphic_hl_pane_g5_ParamLimits

0xb697,	// (0x0002ca27) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00030f77) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00030f77) list_single_graphic_hl_pane_g

0xb6ab,	// (0x0002ca3b) list_single_graphic_hl_pane_t1_ParamLimits

0xb6ab,	// (0x0002ca3b) list_single_graphic_hl_pane_t1

0x795c,	// (0x00028cec) aid_size_min_hl_cp2

0x7965,	// (0x00028cf5) list_highlight_pane_cp34_cp2_ParamLimits

0x7965,	// (0x00028cf5) list_highlight_pane_cp34_cp2

0x794f,	// (0x00028cdf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x794f,	// (0x00028cdf) list_single_graphic_hl_pane_g1_cp2

0x7972,	// (0x00028d02) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7972,	// (0x00028d02) list_single_graphic_hl_pane_g2_cp2

0x797e,	// (0x00028d0e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x797e,	// (0x00028d0e) list_single_graphic_hl_pane_g3_cp2

0x26cf,	// (0x00023a5f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x26cf,	// (0x00023a5f) list_single_graphic_hl_pane_g4_cp2

0x798c,	// (0x00028d1c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x798c,	// (0x00028d1c) list_single_graphic_hl_pane_g5_cp2

0xc1fe,	// (0x0002d58e) control_pane_g4_ParamLimits

0xc1fe,	// (0x0002d58e) control_pane_g4

0x402f,	// (0x000253bf) bg_popup_sub_pane_cp10_ParamLimits

0x7139,	// (0x000284c9) list_choice_list_pane_ParamLimits

0x7148,	// (0x000284d8) scroll_pane_cp23

0x13bb,	// (0x0002274b) bg_popup_preview_window_pane_cp02_ParamLimits

0x77a8,	// (0x00028b38) list_preview_fixed_pane_ParamLimits

0x77be,	// (0x00028b4e) list_preview_fixed_pane_cp_ParamLimits

0x77be,	// (0x00028b4e) list_preview_fixed_pane_cp

0x77ca,	// (0x00028b5a) popup_preview_fixed_window_g1_ParamLimits

0x77ca,	// (0x00028b5a) popup_preview_fixed_window_g1

0x77d6,	// (0x00028b66) popup_preview_fixed_window_g2_ParamLimits

0x77d6,	// (0x00028b66) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x00030f06) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x00030f06) popup_preview_fixed_window_g

0x1a5f,	// (0x00022def) aid_navi_side_left_pane_ParamLimits

0x1a74,	// (0x00022e04) aid_navi_side_right_pane_ParamLimits

0x1a8c,	// (0x00022e1c) navi_icon_pane_stacon_ParamLimits

0x1aa0,	// (0x00022e30) navi_navi_pane_stacon_ParamLimits

0x1a8c,	// (0x00022e1c) navi_text_pane_stacon_ParamLimits

0xe7bb,	// (0x0002fb4b) main_text_info_pane

0x79b6,	// (0x00028d46) listscroll_text_info_pane

0x79be,	// (0x00028d4e) list_text_info_pane_ParamLimits

0x79be,	// (0x00028d4e) list_text_info_pane

0x79cd,	// (0x00028d5d) scroll_pane_cp24_ParamLimits

0x79cd,	// (0x00028d5d) scroll_pane_cp24

0xdeb6,	// (0x0002f246) list_text_info_pane_t1_ParamLimits

0xdeb6,	// (0x0002f246) list_text_info_pane_t1

0xc374,	// (0x0002d704) popup_fast_swap2_window_ParamLimits

0xc374,	// (0x0002d704) popup_fast_swap2_window

0x7a10,	// (0x00028da0) aid_size_cell_fast2

0xe7bb,	// (0x0002fb4b) bg_popup_window_pane_cp17

0x4fca,	// (0x0002635a) heading_pane_cp2

0x161b,	// (0x000229ab) listscroll_fast2_pane

0x7a1a,	// (0x00028daa) grid_fast2_pane

0x7a24,	// (0x00028db4) listscroll_fast2_pane_g1

0x7a2e,	// (0x00028dbe) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00030f82) listscroll_fast2_pane_g

0x31a2,	// (0x00024532) scroll_pane_cp26

0x7a38,	// (0x00028dc8) cell_fast2_pane_ParamLimits

0x7a38,	// (0x00028dc8) cell_fast2_pane

0x7a4f,	// (0x00028ddf) cell_fast2_pane_g1

0x7a58,	// (0x00028de8) cell_fast2_pane_g2

0x7a61,	// (0x00028df1) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00030f87) cell_fast2_pane_g

0x1714,	// (0x00022aa4) grid_highlight_pane_cp9

0x1729,	// (0x00022ab9) main_eswt_pane_ParamLimits

0x1729,	// (0x00022ab9) main_eswt_pane

0x79e2,	// (0x00028d72) list_single_text_info_pane

0x7a69,	// (0x00028df9) eswt_ctrl_button_pane

0x7a69,	// (0x00028df9) eswt_ctrl_canvas_pane

0x7a71,	// (0x00028e01) eswt_ctrl_combo_pane

0x7a69,	// (0x00028df9) eswt_ctrl_default_pane

0x7a69,	// (0x00028df9) eswt_ctrl_label_pane

0x7a79,	// (0x00028e09) eswt_ctrl_wait_pane

0x7a81,	// (0x00028e11) eswt_shell_pane

0xe7bb,	// (0x0002fb4b) listscroll_eswt_app_pane

0x7aa1,	// (0x00028e31) popup_eswt_tasktip_window_ParamLimits

0x7aa1,	// (0x00028e31) popup_eswt_tasktip_window

0x4c5e,	// (0x00025fee) bg_popup_window_pane_cp18

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_ParamLimits

0x7ab2,	// (0x00028e42) eswt_control_pane_g1

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_ParamLimits

0x7abf,	// (0x00028e4f) eswt_control_pane_g2

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_ParamLimits

0x7acc,	// (0x00028e5c) eswt_control_pane_g3

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_ParamLimits

0x7ad9,	// (0x00028e69) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00030f8e) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00030f8e) eswt_control_pane_g

0x3020,	// (0x000243b0) bg_button_pane_ParamLimits

0x3020,	// (0x000243b0) bg_button_pane

0x1729,	// (0x00022ab9) common_borders_pane_copy2_ParamLimits

0x1729,	// (0x00022ab9) common_borders_pane_copy2

0x7ae6,	// (0x00028e76) control_button_pane_g1_ParamLimits

0x7ae6,	// (0x00028e76) control_button_pane_g1

0x7af2,	// (0x00028e82) control_button_pane_g2_ParamLimits

0x7af2,	// (0x00028e82) control_button_pane_g2

0x7afe,	// (0x00028e8e) control_button_pane_g3_ParamLimits

0x7afe,	// (0x00028e8e) control_button_pane_g3

0x0002,

0xfc07,	// (0x00030f97) control_button_pane_g_ParamLimits

0xfc07,	// (0x00030f97) control_button_pane_g

0x7b12,	// (0x00028ea2) control_button_pane_t1

0x7b20,	// (0x00028eb0) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00030f9e) control_button_pane_t

0x4b6c,	// (0x00025efc) bg_button_pane_g1

0x4b74,	// (0x00025f04) bg_button_pane_g2

0x4b7c,	// (0x00025f0c) bg_button_pane_g3

0x4b84,	// (0x00025f14) bg_button_pane_g4

0x4b8c,	// (0x00025f1c) bg_button_pane_g5

0x4b94,	// (0x00025f24) bg_button_pane_g6

0x4b9c,	// (0x00025f2c) bg_button_pane_g7

0x4ba4,	// (0x00025f34) bg_button_pane_g8

0x4bac,	// (0x00025f3c) bg_button_pane_g9

0x0008,

0xf86d,	// (0x00030bfd) bg_button_pane_g

0x70f4,	// (0x00028484) common_borders_pane_ParamLimits

0x70f4,	// (0x00028484) common_borders_pane

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_copy1_ParamLimits

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_copy1

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_copy1_ParamLimits

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_copy1

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_copy1_ParamLimits

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_copy1

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_copy1_ParamLimits

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_copy1

0x712f,	// (0x000284bf) bg_eswt_ctrl_canvas_pane_g1

0x70f4,	// (0x00028484) common_borders_pane_cp2_ParamLimits

0x70f4,	// (0x00028484) common_borders_pane_cp2

0x70f4,	// (0x00028484) common_borders_pane_cp3_ParamLimits

0x70f4,	// (0x00028484) common_borders_pane_cp3

0x7b2e,	// (0x00028ebe) separator_horizontal_pane

0x7b36,	// (0x00028ec6) separator_vertical_pane

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_copy2_ParamLimits

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_copy2

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_copy2_ParamLimits

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_copy2

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_copy2_ParamLimits

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_copy2

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_copy2_ParamLimits

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_copy2

0xe7bb,	// (0x0002fb4b) common_borders_pane_cp4

0x7b3f,	// (0x00028ecf) separator_horizontal_pane_g1

0x7b48,	// (0x00028ed8) separator_horizontal_pane_g2

0x7b51,	// (0x00028ee1) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00030fa3) separator_horizontal_pane_g

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_copy3_ParamLimits

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_copy3

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_copy3_ParamLimits

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_copy3

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_copy3_ParamLimits

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_copy3

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_copy3_ParamLimits

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_copy3

0xe7bb,	// (0x0002fb4b) common_borders_pane_cp5

0x7b5a,	// (0x00028eea) separator_vertical_pane_g1

0x7b63,	// (0x00028ef3) separator_vertical_pane_g2

0x7b6c,	// (0x00028efc) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00030faa) separator_vertical_pane_g

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_copy4_ParamLimits

0x7ab2,	// (0x00028e42) eswt_control_pane_g1_copy4

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_copy4_ParamLimits

0x7abf,	// (0x00028e4f) eswt_control_pane_g2_copy4

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_copy4_ParamLimits

0x7acc,	// (0x00028e5c) eswt_control_pane_g3_copy4

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_copy4_ParamLimits

0x7ad9,	// (0x00028e69) eswt_control_pane_g4_copy4

0xded8,	// (0x0002f268) eswt_ctrl_combo_button_pane

0xdee0,	// (0x0002f270) eswt_ctrl_input_pane

0xdee8,	// (0x0002f278) popup_choice_list_window_cp70

0xdef0,	// (0x0002f280) eswt_ctrl_input_pane_t1

0xe7bb,	// (0x0002fb4b) input_focus_pane_cp70

0x70f4,	// (0x00028484) bg_button_pane_cp70_ParamLimits

0x70f4,	// (0x00028484) bg_button_pane_cp70

0xdefe,	// (0x0002f28e) eswt_ctrl_combo_button_pane_g1

0x7ba3,	// (0x00028f33) wait_bar_pane_cp70

0x4c5e,	// (0x00025fee) bg_popup_window_pane_cp70_ParamLimits

0x4c5e,	// (0x00025fee) bg_popup_window_pane_cp70

0x7bab,	// (0x00028f3b) popup_eswt_tasktip_window_t1

0x7bc1,	// (0x00028f51) wait_bar_pane_cp71_ParamLimits

0x7bc1,	// (0x00028f51) wait_bar_pane_cp71

0x7bcd,	// (0x00028f5d) grid_eswt_app_pane

0x34cd,	// (0x0002485d) scroll_pane_cp70

0xdf06,	// (0x0002f296) cell_eswt_app_pane_ParamLimits

0xdf06,	// (0x0002f296) cell_eswt_app_pane

0xdf38,	// (0x0002f2c8) cell_eswt_app_pane_g1_ParamLimits

0xdf38,	// (0x0002f2c8) cell_eswt_app_pane_g1

0xdf67,	// (0x0002f2f7) cell_eswt_app_pane_g2_ParamLimits

0xdf67,	// (0x0002f2f7) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00030fb1) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00030fb1) cell_eswt_app_pane_g

0xdf90,	// (0x0002f320) cell_eswt_app_pane_t1_ParamLimits

0xdf90,	// (0x0002f320) cell_eswt_app_pane_t1

0x7c92,	// (0x00029022) grid_highlight_pane_cp70_ParamLimits

0x7c92,	// (0x00029022) grid_highlight_pane_cp70

0x60c3,	// (0x00027453) set_content_pane_g1

0x3f59,	// (0x000252e9) status_small_volume_pane

0x26db,	// (0x00023a6b) status_small_volume_pane_g1

0x26e3,	// (0x00023a73) volume_small2_pane

0x26ec,	// (0x00023a7c) volume_small2_pane_g1

0x26f5,	// (0x00023a85) volume_small2_pane_g2

0x26fe,	// (0x00023a8e) volume_small2_pane_g3

0x2707,	// (0x00023a97) volume_small2_pane_g4

0x2710,	// (0x00023aa0) volume_small2_pane_g5

0x2719,	// (0x00023aa9) volume_small2_pane_g6

0x2722,	// (0x00023ab2) volume_small2_pane_g7

0x272b,	// (0x00023abb) volume_small2_pane_g8

0x2734,	// (0x00023ac4) volume_small2_pane_g9

0x273d,	// (0x00023acd) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00030fb6) volume_small2_pane_g

0x750d,	// (0x0002889d) fep_vkb_top_text_pane_g1_ParamLimits

0xde5e,	// (0x0002f1ee) fep_vkb_top_text_pane_t1_ParamLimits

0x77e2,	// (0x00028b72) popup_preview_fixed_window_g3_ParamLimits

0x77e2,	// (0x00028b72) popup_preview_fixed_window_g3

0xca0a,	// (0x0002dd9a) popup_toolbar_trans_pane

0xd7eb,	// (0x0002eb7b) aid_height_set_list_ParamLimits

0x5f79,	// (0x00027309) aid_size_parent_ParamLimits

0x402f,	// (0x000253bf) list_highlight_pane_cp2_ParamLimits

0x60c3,	// (0x00027453) set_content_pane_g1_ParamLimits

0xb63b,	// (0x0002c9cb) list_single_image_pane_ParamLimits

0xb63b,	// (0x0002c9cb) list_single_image_pane

0xdfc2,	// (0x0002f352) aid_size_cell_image_ParamLimits

0xdfc2,	// (0x0002f352) aid_size_cell_image

0xdfcf,	// (0x0002f35f) grid_single_image_pane_ParamLimits

0xdfcf,	// (0x0002f35f) grid_single_image_pane

0x303a,	// (0x000243ca) list_single_image_pane_g1_ParamLimits

0x303a,	// (0x000243ca) list_single_image_pane_g1

0x3046,	// (0x000243d6) list_single_image_pane_g2_ParamLimits

0x3046,	// (0x000243d6) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00030fcb) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00030fcb) list_single_image_pane_g

0x7cb9,	// (0x00029049) list_single_image_pane_t1_ParamLimits

0x7cb9,	// (0x00029049) list_single_image_pane_t1

0xdfdd,	// (0x0002f36d) cell_image_list_pane_ParamLimits

0xdfdd,	// (0x0002f36d) cell_image_list_pane

0xdff7,	// (0x0002f387) cell_image_list_pane_g1

0xe000,	// (0x0002f390) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00030fd0) cell_image_list_pane_g

0x7cf7,	// (0x00029087) aid_size_cell_tb_trans_pane

0x3020,	// (0x000243b0) bg_tb_trans_pane

0x7d09,	// (0x00029099) grid_tb_trans_pane

0x4b6c,	// (0x00025efc) bg_tb_trans_pane_g1

0x4b74,	// (0x00025f04) bg_tb_trans_pane_g2

0x4b7c,	// (0x00025f0c) bg_tb_trans_pane_g3

0x4b84,	// (0x00025f14) bg_tb_trans_pane_g4

0x4b8c,	// (0x00025f1c) bg_tb_trans_pane_g5

0x4ba4,	// (0x00025f34) bg_tb_trans_pane_g6

0x4bac,	// (0x00025f3c) bg_tb_trans_pane_g7

0x4b94,	// (0x00025f24) bg_tb_trans_pane_g8

0x4b9c,	// (0x00025f2c) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00030fd5) bg_tb_trans_pane_g

0x7d1d,	// (0x000290ad) cell_toolbar_trans_pane_ParamLimits

0x7d1d,	// (0x000290ad) cell_toolbar_trans_pane

0x712f,	// (0x000284bf) cell_toolbar_trans_pane_g1

0xdbd0,	// (0x0002ef60) list_form2_midp_pane_t1

0xdbde,	// (0x0002ef6e) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00030e7e) list_form2_midp_pane_t

0x6de2,	// (0x00028172) scroll_pane_cp51_ParamLimits

0x6f91,	// (0x00028321) form2_midp_wait_pane_g1

0x6f9a,	// (0x0002832a) form2_midp_wait_pane_g2

0x6fa3,	// (0x00028333) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00030e93) form2_midp_wait_pane_g

0x10a1,	// (0x00022431) list_highlight_pane_cp21_ParamLimits

0x6fd4,	// (0x00028364) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6fe3,	// (0x00028373) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x0570,	// (0x00021900) list_single_2graphic_im_pane_ParamLimits

0x0570,	// (0x00021900) list_single_2graphic_im_pane

0xe009,	// (0x0002f399) list_single_2graphic_im_pane_g1_ParamLimits

0xe009,	// (0x0002f399) list_single_2graphic_im_pane_g1

0xe01a,	// (0x0002f3aa) list_single_2graphic_im_pane_g2_ParamLimits

0xe01a,	// (0x0002f3aa) list_single_2graphic_im_pane_g2

0xe026,	// (0x0002f3b6) list_single_2graphic_im_pane_g3_ParamLimits

0xe026,	// (0x0002f3b6) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00030fe8) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00030fe8) list_single_2graphic_im_pane_g

0xe03a,	// (0x0002f3ca) list_single_2graphic_im_pane_t1_ParamLimits

0xe03a,	// (0x0002f3ca) list_single_2graphic_im_pane_t1

0x77ee,	// (0x00028b7e) list_single_graphic_2heading_pane_fp_ParamLimits

0x77ee,	// (0x00028b7e) list_single_graphic_2heading_pane_fp

0x085a,	// (0x00021bea) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x085a,	// (0x00021bea) list_single_graphic_2heading_pane_fp_g1

0x7807,	// (0x00028b97) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7807,	// (0x00028b97) list_single_graphic_2heading_pane_fp_g2

0x0823,	// (0x00021bb3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0823,	// (0x00021bb3) list_single_graphic_2heading_pane_fp_g3

0x082f,	// (0x00021bbf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x082f,	// (0x00021bbf) list_single_graphic_2heading_pane_fp_g4

0x7813,	// (0x00028ba3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7813,	// (0x00028ba3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00030f16) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00030f16) list_single_graphic_2heading_pane_fp_g

0x0a27,	// (0x00021db7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0a27,	// (0x00021db7) list_single_graphic_2heading_pane_fp_t1

0x0892,	// (0x00021c22) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0892,	// (0x00021c22) list_single_graphic_2heading_pane_fp_t2

0x0a3d,	// (0x00021dcd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0a3d,	// (0x00021dcd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00030ff1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00030ff1) list_single_graphic_2heading_pane_fp_t

0x71cf,	// (0x0002855f) fep_hwr_write_pane_g5_ParamLimits

0x71cf,	// (0x0002855f) fep_hwr_write_pane_g5

0x71db,	// (0x0002856b) fep_hwr_write_pane_g6_ParamLimits

0x71db,	// (0x0002856b) fep_hwr_write_pane_g6

0x7a81,	// (0x00028e11) eswt_shell_pane_ParamLimits

0x4c5e,	// (0x00025fee) bg_popup_window_pane_cp18_ParamLimits

0x5ebf,	// (0x0002724f) heading_pane_cp70

0x7bab,	// (0x00028f3b) popup_eswt_tasktip_window_t1_ParamLimits

0xd145,	// (0x0002e4d5) aid_touch_tab_arrow_left

0xd159,	// (0x0002e4e9) aid_touch_tab_arrow_right

0xba54,	// (0x0002cde4) title_pane_g3_ParamLimits

0xba54,	// (0x0002cde4) title_pane_g3

0x2fdf,	// (0x0002436f) set_value_pane_g1

0xca0a,	// (0x0002dd9a) popup_toolbar_trans_pane_ParamLimits

0x7cf7,	// (0x00029087) aid_size_cell_tb_trans_pane_ParamLimits

0x3020,	// (0x000243b0) bg_tb_trans_pane_ParamLimits

0x7d09,	// (0x00029099) grid_tb_trans_pane_ParamLimits

0x13bb,	// (0x0002274b) cont_note_pane_ParamLimits

0x13bb,	// (0x0002274b) cont_note_pane

0x1729,	// (0x00022ab9) cont_snote2_single_text_pane_ParamLimits

0x1729,	// (0x00022ab9) cont_snote2_single_text_pane

0x1729,	// (0x00022ab9) cont_snote2_single_graphic_pane_ParamLimits

0x1729,	// (0x00022ab9) cont_snote2_single_graphic_pane

0x51e6,	// (0x00026576) cont_note_wait_pane_ParamLimits

0x51e6,	// (0x00026576) cont_note_wait_pane

0x51e6,	// (0x00026576) cont_note_image_pane_ParamLimits

0x51e6,	// (0x00026576) cont_note_image_pane

0x7db1,	// (0x00029141) popup_note2_window_g1_ParamLimits

0x7db1,	// (0x00029141) popup_note2_window_g1

0x7de2,	// (0x00029172) popup_note2_window_t1_ParamLimits

0x7de2,	// (0x00029172) popup_note2_window_t1

0x7e27,	// (0x000291b7) popup_note2_window_t2_ParamLimits

0x7e27,	// (0x000291b7) popup_note2_window_t2

0x7e6c,	// (0x000291fc) popup_note2_window_t3_ParamLimits

0x7e6c,	// (0x000291fc) popup_note2_window_t3

0x7eb1,	// (0x00029241) popup_note2_window_t4_ParamLimits

0x7eb1,	// (0x00029241) popup_note2_window_t4

0x143f,	// (0x000227cf) popup_note2_window_t5_ParamLimits

0x143f,	// (0x000227cf) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00030ffd) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00030ffd) popup_note2_window_t

0x7ee0,	// (0x00029270) popup_note2_image_window_g1_ParamLimits

0x7ee0,	// (0x00029270) popup_note2_image_window_g1

0x7eec,	// (0x0002927c) popup_note2_image_window_g2_ParamLimits

0x7eec,	// (0x0002927c) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00031008) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00031008) popup_note2_image_window_g

0x7efe,	// (0x0002928e) popup_note2_image_window_t1_ParamLimits

0x7efe,	// (0x0002928e) popup_note2_image_window_t1

0x7f16,	// (0x000292a6) popup_note2_image_window_t2_ParamLimits

0x7f16,	// (0x000292a6) popup_note2_image_window_t2

0x7f2e,	// (0x000292be) popup_note2_image_window_t3_ParamLimits

0x7f2e,	// (0x000292be) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x0003100d) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x0003100d) popup_note2_image_window_t

0x51f4,	// (0x00026584) popup_note2_wait_window_g1_ParamLimits

0x51f4,	// (0x00026584) popup_note2_wait_window_g1

0x7f4a,	// (0x000292da) popup_note2_wait_window_g2_ParamLimits

0x7f4a,	// (0x000292da) popup_note2_wait_window_g2

0x520c,	// (0x0002659c) popup_note2_wait_window_g3_ParamLimits

0x520c,	// (0x0002659c) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00031014) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00031014) popup_note2_wait_window_g

0x7f56,	// (0x000292e6) popup_note2_wait_window_t1_ParamLimits

0x7f56,	// (0x000292e6) popup_note2_wait_window_t1

0x7f74,	// (0x00029304) popup_note2_wait_window_t2_ParamLimits

0x7f74,	// (0x00029304) popup_note2_wait_window_t2

0x7f92,	// (0x00029322) popup_note2_wait_window_t3_ParamLimits

0x7f92,	// (0x00029322) popup_note2_wait_window_t3

0x7fa4,	// (0x00029334) popup_note2_wait_window_t4_ParamLimits

0x7fa4,	// (0x00029334) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x0003101b) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x0003101b) popup_note2_wait_window_t

0x7fb6,	// (0x00029346) wait_bar2_pane_ParamLimits

0x7fb6,	// (0x00029346) wait_bar2_pane

0x7fce,	// (0x0002935e) popup_snote2_single_text_window_g1_ParamLimits

0x7fce,	// (0x0002935e) popup_snote2_single_text_window_g1

0x7ff6,	// (0x00029386) popup_snote2_single_text_window_t1_ParamLimits

0x7ff6,	// (0x00029386) popup_snote2_single_text_window_t1

0x8042,	// (0x000293d2) popup_snote2_single_text_window_t2_ParamLimits

0x8042,	// (0x000293d2) popup_snote2_single_text_window_t2

0x808e,	// (0x0002941e) popup_snote2_single_text_window_t3_ParamLimits

0x808e,	// (0x0002941e) popup_snote2_single_text_window_t3

0x80cf,	// (0x0002945f) popup_snote2_single_text_window_t4_ParamLimits

0x80cf,	// (0x0002945f) popup_snote2_single_text_window_t4

0x8105,	// (0x00029495) popup_snote2_single_text_window_t5_ParamLimits

0x8105,	// (0x00029495) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00031024) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00031024) popup_snote2_single_text_window_t

0x8130,	// (0x000294c0) popup_snote2_single_graphic_window_g1_ParamLimits

0x8130,	// (0x000294c0) popup_snote2_single_graphic_window_g1

0x8158,	// (0x000294e8) popup_snote2_single_graphic_window_g2_ParamLimits

0x8158,	// (0x000294e8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x0003102f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x0003102f) popup_snote2_single_graphic_window_g

0x8180,	// (0x00029510) popup_snote2_single_graphic_window_t1_ParamLimits

0x8180,	// (0x00029510) popup_snote2_single_graphic_window_t1

0x81cc,	// (0x0002955c) popup_snote2_single_graphic_window_t2_ParamLimits

0x81cc,	// (0x0002955c) popup_snote2_single_graphic_window_t2

0x808e,	// (0x0002941e) popup_snote2_single_graphic_window_t3_ParamLimits

0x808e,	// (0x0002941e) popup_snote2_single_graphic_window_t3

0x80cf,	// (0x0002945f) popup_snote2_single_graphic_window_t4_ParamLimits

0x80cf,	// (0x0002945f) popup_snote2_single_graphic_window_t4

0x8105,	// (0x00029495) popup_snote2_single_graphic_window_t5_ParamLimits

0x8105,	// (0x00029495) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00031034) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00031034) popup_snote2_single_graphic_window_t

0x6c8c,	// (0x0002801c) clock_nsta_pane_cp2_t1

0x6c8c,	// (0x0002801c) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00030e54) clock_nsta_pane_cp2_t

0x01e5,	// (0x00021575) form_field_data_wide_pane_g1_ParamLimits

0x303a,	// (0x000243ca) form_field_data_wide_pane_g2_ParamLimits

0x303a,	// (0x000243ca) form_field_data_wide_pane_g2

0x3046,	// (0x000243d6) form_field_data_wide_pane_g3_ParamLimits

0x3046,	// (0x000243d6) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x00030a1e) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x00030a1e) form_field_data_wide_pane_g

0xdad8,	// (0x0002ee68) grid_touch_3_pane_ParamLimits

0xdad8,	// (0x0002ee68) grid_touch_3_pane

0xe06b,	// (0x0002f3fb) cell_touch_3_pane_ParamLimits

0xe06b,	// (0x0002f3fb) cell_touch_3_pane

0x712f,	// (0x000284bf) cell_touch_3_pane_g1

0x712f,	// (0x000284bf) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00030ed9) cell_touch_3_pane_g

0x1471,	// (0x00022801) cont_query_data_pane

0x1479,	// (0x00022809) cont_query_data_pane_cp1

0x824b,	// (0x000295db) button_value_adjust_pane_cp7

0x8253,	// (0x000295e3) query_popup_pane_cp3

0x3785,	// (0x00024b15) bg_popup_sub_pane_cp22_ParamLimits

0x1ba3,	// (0x00022f33) navi_navi_volume_pane_cp2

0x1bbe,	// (0x00022f4e) popup_side_volume_key_window_g2

0x1bcd,	// (0x00022f5d) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x00030ab4) popup_side_volume_key_window_g

0x1bea,	// (0x00022f7a) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x00030abb) popup_side_volume_key_window_t

0x3a40,	// (0x00024dd0) popup_side_volume_key_window_ParamLimits

0xb0ff,	// (0x0002c48f) list_double_graphic_pane_g4_ParamLimits

0xb0ff,	// (0x0002c48f) list_double_graphic_pane_g4

0xb625,	// (0x0002c9b5) list_single_2heading_msg_pane_ParamLimits

0xb625,	// (0x0002c9b5) list_single_2heading_msg_pane

0xb6c1,	// (0x0002ca51) list_single_2heading_msg_pane_g1_ParamLimits

0xb6c1,	// (0x0002ca51) list_single_2heading_msg_pane_g1

0xb6cd,	// (0x0002ca5d) list_single_2heading_msg_pane_g2_ParamLimits

0xb6cd,	// (0x0002ca5d) list_single_2heading_msg_pane_g2

0xb6e0,	// (0x0002ca70) list_single_2heading_msg_pane_g3_ParamLimits

0xb6e0,	// (0x0002ca70) list_single_2heading_msg_pane_g3

0xb6ec,	// (0x0002ca7c) list_single_2heading_msg_pane_g4_ParamLimits

0xb6ec,	// (0x0002ca7c) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x0003103f) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x0003103f) list_single_2heading_msg_pane_g

0xb704,	// (0x0002ca94) list_single_2heading_msg_pane_t1_ParamLimits

0xb704,	// (0x0002ca94) list_single_2heading_msg_pane_t1

0xb72c,	// (0x0002cabc) list_single_2heading_msg_pane_t2_ParamLimits

0xb72c,	// (0x0002cabc) list_single_2heading_msg_pane_t2

0xb797,	// (0x0002cb27) list_single_2heading_msg_pane_t3_ParamLimits

0xb797,	// (0x0002cb27) list_single_2heading_msg_pane_t3

0x0b22,	// (0x00021eb2) list_single_2heading_msg_pane_t4_ParamLimits

0x0b22,	// (0x00021eb2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00031048) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00031048) list_single_2heading_msg_pane_t

0xe7d9,	// (0x0002fb69) title_pane_g4_ParamLimits

0xe7d9,	// (0x0002fb69) title_pane_g4

0x19af,	// (0x00022d3f) title_pane_stacon_g3_ParamLimits

0x19af,	// (0x00022d3f) title_pane_stacon_g3

0x7d74,	// (0x00029104) list_single_2graphic_im_pane_g4_ParamLimits

0x7d74,	// (0x00029104) list_single_2graphic_im_pane_g4

0x5c5c,	// (0x00026fec) popup_side_volume_key_window_cp

0x64d2,	// (0x00027862) main_idle_act2_pane_t1

0x1f69,	// (0x000232f9) toolbar_button_pane_g10

0xbde1,	// (0x0002d171) popup_toolbar_window_cp1

0x6c7d,	// (0x0002800d) clock_nsta_pane_cp_t1

0x6c7d,	// (0x0002800d) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00030e4f) clock_nsta_pane_cp_t

0x1ba3,	// (0x00022f33) navi_navi_volume_pane_cp2_ParamLimits

0x1bb2,	// (0x00022f42) popup_side_volume_key_window_g1_ParamLimits

0x1bbe,	// (0x00022f4e) popup_side_volume_key_window_g2_ParamLimits

0x1bcd,	// (0x00022f5d) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x00030ab4) popup_side_volume_key_window_g_ParamLimits

0x23c4,	// (0x00023754) fep_hwr_aid_pane

0xdd12,	// (0x0002f0a2) bg_fep_hwr_top_pane_g4_ParamLimits

0x719f,	// (0x0002852f) fep_hwr_top_pane_g1_ParamLimits

0x71b1,	// (0x00028541) fep_hwr_top_pane_g2_ParamLimits

0x247f,	// (0x0002380f) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00030ea4) fep_hwr_top_pane_g_ParamLimits

0x2494,	// (0x00023824) fep_hwr_top_text_pane_ParamLimits

0x5a11,	// (0x00026da1) aid_touch_tab_arrow_arrow_2

0x5a1a,	// (0x00026daa) aid_touch_tab_arrow_left_2

0x23d8,	// (0x00023768) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x240f,	// (0x0002379f) fep_hwr_prediction_pane

0x7307,	// (0x00028697) fep_vkb_prediction_pane

0xde3e,	// (0x0002f1ce) fep_vkb_side_pane_g3_ParamLimits

0xde3e,	// (0x0002f1ce) fep_vkb_side_pane_g3

0x73b9,	// (0x00028749) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7867,	// (0x00028bf7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7874,	// (0x00028c04) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x00030f4e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x827a,	// (0x0002960a) fep_hwr_prediction_pane_g1

0x2746,	// (0x00023ad6) fep_hwr_prediction_pane_g2

0x274e,	// (0x00023ade) fep_hwr_prediction_pane_g3

0x2756,	// (0x00023ae6) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00031051) fep_hwr_prediction_pane_g

0x827a,	// (0x0002960a) fep_vkb_prediction_pane_g1

0x8284,	// (0x00029614) fep_vkb_prediction_pane_g2

0x828c,	// (0x0002961c) fep_vkb_prediction_pane_g3

0x8294,	// (0x00029624) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x0003105a) fep_vkb_prediction_pane_g

0x2252,	// (0x000235e2) slider_set_pane_g3

0x2266,	// (0x000235f6) slider_set_pane_g4

0x227e,	// (0x0002360e) slider_set_pane_g5

0x2252,	// (0x000235e2) slider_set_pane_g6

0x2294,	// (0x00023624) slider_set_pane_g7

0x610a,	// (0x0002749a) slider_form_pane_g3

0x6113,	// (0x000274a3) slider_form_pane_g4

0x611b,	// (0x000274ab) slider_form_pane_g5

0x610a,	// (0x0002749a) slider_form_pane_g6

0xd95a,	// (0x0002ecea) slider_form_pane_g7

0x67a0,	// (0x00027b30) slider_set_pane_vc_g3

0x67a9,	// (0x00027b39) slider_set_pane_vc_g4

0x67b2,	// (0x00027b42) slider_set_pane_vc_g5

0x67a0,	// (0x00027b30) slider_set_pane_vc_g6

0x67bb,	// (0x00027b4b) slider_set_pane_vc_g7

0x67a0,	// (0x00027b30) slider_form_pane_vc_g1

0x67a9,	// (0x00027b39) slider_form_pane_vc_g2

0x67b2,	// (0x00027b42) slider_form_pane_vc_g3

0x67a0,	// (0x00027b30) slider_form_pane_vc_g4

0x6970,	// (0x00027d00) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x00030e28) slider_form_pane_vc_g

0xe7bb,	// (0x0002fb4b) main_idle_act3_pane

0x829c,	// (0x0002962c) ai3_links_pane

0xe0b5,	// (0x0002f445) popup_ai3_data_window_ParamLimits

0xe0b5,	// (0x0002f445) popup_ai3_data_window

0xe7bb,	// (0x0002fb4b) grid_ai3_links_pane

0xe0d3,	// (0x0002f463) cell_ai3_links_pane_ParamLimits

0xe0d3,	// (0x0002f463) cell_ai3_links_pane

0x82dd,	// (0x0002966d) bg_popup_sub_pane_cp11

0x82ea,	// (0x0002967a) cell_ai3_links_pane_g1

0xe7bb,	// (0x0002fb4b) bg_popup_sub_pane_cp12

0x830f,	// (0x0002969f) heading_ai3_data_pane

0x8317,	// (0x000296a7) list_ai3_gene_pane

0x8323,	// (0x000296b3) popup_ai3_data_window_g1

0x832b,	// (0x000296bb) heading_ai3_data_pane_g1

0x8333,	// (0x000296c3) heading_ai3_data_pane_t1

0x8341,	// (0x000296d1) list_double_ai3_gene_pane_ParamLimits

0x8341,	// (0x000296d1) list_double_ai3_gene_pane

0x834e,	// (0x000296de) list_single_ai3_gene_pane_ParamLimits

0x834e,	// (0x000296de) list_single_ai3_gene_pane

0x70f4,	// (0x00028484) list_highlight_pane_cp7_ParamLimits

0x70f4,	// (0x00028484) list_highlight_pane_cp7

0x835b,	// (0x000296eb) list_single_a13_gene_pane_t1_ParamLimits

0x835b,	// (0x000296eb) list_single_a13_gene_pane_t1

0x8372,	// (0x00029702) list_single_ai3_gene_pane_g1

0x837b,	// (0x0002970b) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00031063) list_single_ai3_gene_pane_g

0x8383,	// (0x00029713) list_double_ai3_gene_pane_g1_ParamLimits

0x8383,	// (0x00029713) list_double_ai3_gene_pane_g1

0x838f,	// (0x0002971f) list_double_ai3_gene_pane_t1_ParamLimits

0x838f,	// (0x0002971f) list_double_ai3_gene_pane_t1

0x83ab,	// (0x0002973b) list_double_ai3_gene_pane_t2_ParamLimits

0x83ab,	// (0x0002973b) list_double_ai3_gene_pane_t2

0x83c0,	// (0x00029750) list_double_ai3_gene_pane_t3_ParamLimits

0x83c0,	// (0x00029750) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00031068) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00031068) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0a53,	// (0x00021de3) aid_size_min_col_2

0xe09f,	// (0x0002f42f) aid_size_min_msg_ParamLimits

0xe09f,	// (0x0002f42f) aid_size_min_msg

0xde52,	// (0x0002f1e2) fep_vkb_top_text_pane_g2_ParamLimits

0xde52,	// (0x0002f1e2) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00030ed4) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00030ed4) fep_vkb_top_text_pane_g

0xe7bb,	// (0x0002fb4b) main_hc_apps_shell_pane

0x83dd,	// (0x0002976d) grid_hc_apps_pane_ParamLimits

0x83dd,	// (0x0002976d) grid_hc_apps_pane

0x83ec,	// (0x0002977c) list_hc_apps_pane

0x83f4,	// (0x00029784) scroll_pane_cp37_ParamLimits

0x83f4,	// (0x00029784) scroll_pane_cp37

0xe0ed,	// (0x0002f47d) cell_hc_apps_pane_ParamLimits

0xe0ed,	// (0x0002f47d) cell_hc_apps_pane

0xe1b7,	// (0x0002f547) cell_hc_apps_pane_g1_ParamLimits

0xe1b7,	// (0x0002f547) cell_hc_apps_pane_g1

0x84e9,	// (0x00029879) cell_hc_apps_pane_g2_ParamLimits

0x84e9,	// (0x00029879) cell_hc_apps_pane_g2

0x8505,	// (0x00029895) cell_hc_apps_pane_g3_ParamLimits

0x8505,	// (0x00029895) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x0003106f) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x0003106f) cell_hc_apps_pane_g

0xe1e4,	// (0x0002f574) cell_hc_apps_pane_t1_ParamLimits

0xe1e4,	// (0x0002f574) cell_hc_apps_pane_t1

0x13bb,	// (0x0002274b) grid_highlight_pane_cp10_ParamLimits

0x13bb,	// (0x0002274b) grid_highlight_pane_cp10

0xe224,	// (0x0002f5b4) list_single_hc_apps_pane_ParamLimits

0xe224,	// (0x0002f5b4) list_single_hc_apps_pane

0xe25e,	// (0x0002f5ee) list_single_hc_apps_pane_g1

0xb805,	// (0x0002cb95) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00031076) list_single_hc_apps_pane_g

0xb81e,	// (0x0002cbae) list_single_hc_apps_pane_g2_copy1

0xb83a,	// (0x0002cbca) list_single_hc_apps_pane_t1

0x10a1,	// (0x00022431) bg_set_opt_pane_cp_ParamLimits

0x10ed,	// (0x0002247d) setting_slider_pane_t1_ParamLimits

0x1103,	// (0x00022493) setting_slider_pane_t2_ParamLimits

0x111d,	// (0x000224ad) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00030906) setting_slider_pane_t_ParamLimits

0x1135,	// (0x000224c5) slider_set_pane_ParamLimits

0x1e51,	// (0x000231e1) control_pane_g5_ParamLimits

0x1e51,	// (0x000231e1) control_pane_g5

0x5f2b,	// (0x000272bb) slider_set_pane_g1_ParamLimits

0x2246,	// (0x000235d6) slider_set_pane_g2_ParamLimits

0x2252,	// (0x000235e2) slider_set_pane_g3_ParamLimits

0x2266,	// (0x000235f6) slider_set_pane_g4_ParamLimits

0x227e,	// (0x0002360e) slider_set_pane_g5_ParamLimits

0x2252,	// (0x000235e2) slider_set_pane_g6_ParamLimits

0x2294,	// (0x00023624) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x00030cfb) slider_set_pane_g_ParamLimits

0x3b25,	// (0x00024eb5) navi_icon_text_pane_ParamLimits

0xca9b,	// (0x0002de2b) aid_fill_nsta_2_ParamLimits

0xd145,	// (0x0002e4d5) aid_touch_tab_arrow_left_ParamLimits

0xd159,	// (0x0002e4e9) aid_touch_tab_arrow_right_ParamLimits

0xd1f4,	// (0x0002e584) clock_nsta_pane_ParamLimits

0xd6a9,	// (0x0002ea39) navi_icon_pane_g1_ParamLimits

0xd6b5,	// (0x0002ea45) navi_text_pane_t1_ParamLimits

0xdbb2,	// (0x0002ef42) navi_icon_text_pane_g1_ParamLimits

0xdbbe,	// (0x0002ef4e) navi_icon_text_pane_t1_ParamLimits

0xe25e,	// (0x0002f5ee) list_single_hc_apps_pane_g1_ParamLimits

0xb805,	// (0x0002cb95) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00031076) list_single_hc_apps_pane_g_ParamLimits

0xb81e,	// (0x0002cbae) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb83a,	// (0x0002cbca) list_single_hc_apps_pane_t1_ParamLimits

0xb9be,	// (0x0002cd4e) popup_toolbar2_fixed_window_ParamLimits

0xb9be,	// (0x0002cd4e) popup_toolbar2_fixed_window

0xca00,	// (0x0002dd90) popup_toolbar2_float_window

0xe7bb,	// (0x0002fb4b) bg_popup_sub_pane_cp27

0x85bf,	// (0x0002994f) grid_toolbar2_float_pane

0xe7bb,	// (0x0002fb4b) bg_popup_sub_pane_cp26

0x85bf,	// (0x0002994f) grid_toolbar2_fixed_pane

0xe277,	// (0x0002f607) cell_toolbar2_fixed_pane_ParamLimits

0xe277,	// (0x0002f607) cell_toolbar2_fixed_pane

0xe294,	// (0x0002f624) cell_toolbar2_fixed_pane_g1

0x85e0,	// (0x00029970) toolbar2_fixed_button_pane

0x4b6c,	// (0x00025efc) toolbar2_fixed_button_pane_g1

0x4b74,	// (0x00025f04) toolbar2_fixed_button_pane_g2

0x4b7c,	// (0x00025f0c) toolbar2_fixed_button_pane_g3

0x4b84,	// (0x00025f14) toolbar2_fixed_button_pane_g4

0x4b8c,	// (0x00025f1c) toolbar2_fixed_button_pane_g5

0x4b94,	// (0x00025f24) toolbar2_fixed_button_pane_g6

0x4b9c,	// (0x00025f2c) toolbar2_fixed_button_pane_g7

0x4ba4,	// (0x00025f34) toolbar2_fixed_button_pane_g8

0x4bac,	// (0x00025f3c) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x00030bfd) toolbar2_fixed_button_pane_g

0x85e8,	// (0x00029978) cell_toolbar2_float_pane_ParamLimits

0x85e8,	// (0x00029978) cell_toolbar2_float_pane

0x85f9,	// (0x00029989) cell_toolbar2_float_pane_g1

0x85e0,	// (0x00029970) toolbar2_fixed_button_pane_cp

0xdd3a,	// (0x0002f0ca) fep_vkb_accented_list_pane_ParamLimits

0xdd3a,	// (0x0002f0ca) fep_vkb_accented_list_pane

0x25f6,	// (0x00023986) bg_popup_fep_shadow_pane_g9

0x3ca9,	// (0x00025039) bg_popup_fep_shadow_pane_cp3

0x3189,	// (0x00024519) list_accented_list_pane

0x8602,	// (0x00029992) list_single_accented_list_pane_ParamLimits

0x8602,	// (0x00029992) list_single_accented_list_pane

0x3ca9,	// (0x00025039) list_highlight_pane_cp10

0x8613,	// (0x000299a3) list_single_accented_list_pane_t1

0xc91c,	// (0x0002dcac) popup_slider_window_ParamLimits

0xc91c,	// (0x0002dcac) popup_slider_window

0x825b,	// (0x000295eb) aid_indentation_list_msg

0xe39f,	// (0x0002f72f) bg_popup_window_pane_cp19

0x874d,	// (0x00029add) popup_slider_window_g1

0x8769,	// (0x00029af9) popup_slider_window_g2

0x8785,	// (0x00029b15) popup_slider_window_g3

0x0005,

0xfceb,	// (0x0003107b) popup_slider_window_g

0x87e1,	// (0x00029b71) popup_slider_window_t1

0x8855,	// (0x00029be5) small_volume_slider_vertical_pane

0x712f,	// (0x000284bf) small_volume_slider_vertical_pane_g1

0x712f,	// (0x000284bf) small_volume_slider_vertical_pane_g2

0x8871,	// (0x00029c01) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x0003108d) small_volume_slider_vertical_pane_g

0xb928,	// (0x0002ccb8) area_side_right_pane_ParamLimits

0xb928,	// (0x0002ccb8) area_side_right_pane

0xcd06,	// (0x0002e096) aid_size_side_button_ParamLimits

0xcd06,	// (0x0002e096) aid_size_side_button

0xcd1f,	// (0x0002e0af) grid_sctrl_middle_pane_ParamLimits

0xcd1f,	// (0x0002e0af) grid_sctrl_middle_pane

0x2792,	// (0x00023b22) sctrl_sk_bottom_pane

0x27a3,	// (0x00023b33) sctrl_sk_top_pane

0x27b5,	// (0x00023b45) aid_touch_sctrl_top

0x13bb,	// (0x0002274b) bg_sctrl_sk_pane_ParamLimits

0x13bb,	// (0x0002274b) bg_sctrl_sk_pane

0x27c2,	// (0x00023b52) sctrl_sk_top_pane_g1

0x27cf,	// (0x00023b5f) sctrl_sk_top_pane_t1

0x27b5,	// (0x00023b45) aid_touch_sctrl_bottom

0x13bb,	// (0x0002274b) bg_sctrl_sk_pane_cp_ParamLimits

0x13bb,	// (0x0002274b) bg_sctrl_sk_pane_cp

0x27ea,	// (0x00023b7a) sctrl_sk_bottom_pane_g1

0x27cf,	// (0x00023b5f) sctrl_sk_bottom_pane_t1

0xcd39,	// (0x0002e0c9) cell_sctrl_middle_pane_ParamLimits

0xcd39,	// (0x0002e0c9) cell_sctrl_middle_pane

0xcd4c,	// (0x0002e0dc) aid_touch_sctrl_middle_ParamLimits

0xcd4c,	// (0x0002e0dc) aid_touch_sctrl_middle

0xcd59,	// (0x0002e0e9) bg_sctrl_middle_pane_ParamLimits

0xcd59,	// (0x0002e0e9) bg_sctrl_middle_pane

0x88fc,	// (0x00029c8c) cell_sctrl_middle_pane_g1_ParamLimits

0x88fc,	// (0x00029c8c) cell_sctrl_middle_pane_g1

0xcd67,	// (0x0002e0f7) cell_sctrl_middle_pane_g2_ParamLimits

0xcd67,	// (0x0002e0f7) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00031099) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00031099) cell_sctrl_middle_pane_g

0x4b6c,	// (0x00025efc) bg_sctrl_middle_pane_g1

0x4b74,	// (0x00025f04) bg_sctrl_middle_pane_g2

0x4b7c,	// (0x00025f0c) bg_sctrl_middle_pane_g3

0x4b84,	// (0x00025f14) bg_sctrl_middle_pane_g4

0x4b8c,	// (0x00025f1c) bg_sctrl_middle_pane_g5

0x4b94,	// (0x00025f24) bg_sctrl_middle_pane_g6

0x4b9c,	// (0x00025f2c) bg_sctrl_middle_pane_g7

0x4ba4,	// (0x00025f34) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x0003109e) bg_sctrl_middle_pane_g

0x4bac,	// (0x00025f3c) bg_sctrl_middle_pane_g8_copy1

0x4b6c,	// (0x00025efc) bg_sctrl_sk_pane_g1

0x4b74,	// (0x00025f04) bg_sctrl_sk_pane_g2

0x4b7c,	// (0x00025f0c) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x00030bfd) bg_sctrl_sk_pane_g

0x18e7,	// (0x00022c77) aid_size_touch_scroll_bar

0x4b84,	// (0x00025f14) bg_sctrl_sk_pane_g4

0x4b8c,	// (0x00025f1c) bg_sctrl_sk_pane_g5

0x4b94,	// (0x00025f24) bg_sctrl_sk_pane_g6

0x4b9c,	// (0x00025f2c) bg_sctrl_sk_pane_g7

0x4ba4,	// (0x00025f34) bg_sctrl_sk_pane_g8

0x4bac,	// (0x00025f3c) bg_sctrl_sk_pane_g9

0x40d9,	// (0x00025469) popup_fep_china_hwr2_fs_candidate_window

0xc3d8,	// (0x0002d768) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc3d8,	// (0x0002d768) popup_fep_china_hwr2_fs_control_window

0x73b9,	// (0x00028749) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00031094) sctrl_sk_top_pane_g

0xe457,	// (0x0002f7e7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe457,	// (0x0002f7e7) aid_fep_china_hwr2_fs_cell

0xe46d,	// (0x0002f7fd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe46d,	// (0x0002f7fd) bg_popup_fep_shadow_pane_cp4

0xe484,	// (0x0002f814) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe484,	// (0x0002f814) bg_popup_fep_shadow_pane_cp5

0xe496,	// (0x0002f826) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe496,	// (0x0002f826) popup_fep_china_hwr2_fs_control_bar_grid

0xe4aa,	// (0x0002f83a) popup_fep_china_hwr2_fs_control_funtion_grid

0x88d0,	// (0x00029c60) aid_fep_china_hwr2_fs_candi_cell

0xe7bb,	// (0x0002fb4b) bg_popup_fep_shadow_pane_cp6

0x88da,	// (0x00029c6a) popup_fep_china_hwr2_fs_candidate_grid

0xe4b2,	// (0x0002f842) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe4b2,	// (0x0002f842) cell_fep_china_hwr2_fs_funtion_grid

0x712f,	// (0x000284bf) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x88fc,	// (0x00029c8c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x88fc,	// (0x00029c8c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x890a,	// (0x00029c9a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x890a,	// (0x00029c9a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x000310af) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x000310af) cell_fep_china_hwr2_fs_funtion_grid_g

0xe4ca,	// (0x0002f85a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe4ca,	// (0x0002f85a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe4df,	// (0x0002f86f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe4df,	// (0x0002f86f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x000310b4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x000310b4) cell_fep_china_hwr2_fs_funtion_grid_t

0x8951,	// (0x00029ce1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8959,	// (0x00029ce9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8961,	// (0x00029cf1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x000310b9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8969,	// (0x00029cf9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8969,	// (0x00029cf9) cell_fep_china_hwr2_fs_candidate_grid

0x8988,	// (0x00029d18) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8990,	// (0x00029d20) popup_fep_china_hwr2_fs_candidate_grid_g21

0x712f,	// (0x000284bf) cell_fep_china_hwr2_fs_candidate_grid_g1

0x712f,	// (0x000284bf) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00030ed9) cell_fep_china_hwr2_fs_candidate_grid_g

0x8998,	// (0x00029d28) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4748,	// (0x00025ad8) clock_nsta_pane_cp_24_ParamLimits

0x4748,	// (0x00025ad8) clock_nsta_pane_cp_24

0x47c8,	// (0x00025b58) indicator_nsta_pane_cp_24_ParamLimits

0x47c8,	// (0x00025b58) indicator_nsta_pane_cp_24

0x5869,	// (0x00026bf9) heading_pane_g1

0x0001,

0xf8d2,	// (0x00030c62) heading_pane_g

0x6319,	// (0x000276a9) grid_sct_catagory_button_pane

0x634b,	// (0x000276db) scroll_pane_cp5_ParamLimits

0x6dee,	// (0x0002817e) button_value_adjust_pane_cp5_ParamLimits

0x6dee,	// (0x0002817e) button_value_adjust_pane_cp5

0x6ecb,	// (0x0002825b) form2_midp_time_pane_ParamLimits

0x89a6,	// (0x00029d36) cell_sct_catagory_button_pane_ParamLimits

0x89a6,	// (0x00029d36) cell_sct_catagory_button_pane

0x70f4,	// (0x00028484) bg_button_pane_cp01_ParamLimits

0x70f4,	// (0x00028484) bg_button_pane_cp01

0x712f,	// (0x000284bf) cell_sct_catagory_button_pane_g1

0xc99d,	// (0x0002dd2d) popup_tb_extension_window

0xe4fb,	// (0x0002f88b) aid_size_cell_ext_ParamLimits

0xe4fb,	// (0x0002f88b) aid_size_cell_ext

0x1729,	// (0x00022ab9) bg_tb_trans_pane_cp1_ParamLimits

0x1729,	// (0x00022ab9) bg_tb_trans_pane_cp1

0xe521,	// (0x0002f8b1) grid_tb_ext_pane_ParamLimits

0xe521,	// (0x0002f8b1) grid_tb_ext_pane

0xe561,	// (0x0002f8f1) cell_tb_ext_pane_ParamLimits

0xe561,	// (0x0002f8f1) cell_tb_ext_pane

0xe589,	// (0x0002f919) cell_tb_ext_pane_g1_ParamLimits

0xe589,	// (0x0002f919) cell_tb_ext_pane_g1

0x8a3c,	// (0x00029dcc) cell_tb_ext_pane_t1

0x13bb,	// (0x0002274b) list_highlight_pane_cp11_ParamLimits

0x13bb,	// (0x0002274b) list_highlight_pane_cp11

0x0f0a,	// (0x0002229a) popup_uni_indicator_window_ParamLimits

0x0f0a,	// (0x0002229a) popup_uni_indicator_window

0x3020,	// (0x000243b0) bg_popup_sub_pane_cp14

0x8a57,	// (0x00029de7) list_uniindi_pane

0x8a63,	// (0x00029df3) uniindi_top_pane

0x13bb,	// (0x0002274b) bg_uniindi_top_pane

0x8a84,	// (0x00029e14) uniindi_top_pane_g1

0x8a9a,	// (0x00029e2a) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x000310c0) uniindi_top_pane_g

0x8ac4,	// (0x00029e54) uniindi_top_pane_t1

0x8af0,	// (0x00029e80) list_single_uniindi_pane_ParamLimits

0x8af0,	// (0x00029e80) list_single_uniindi_pane

0x712f,	// (0x000284bf) bg_uniindi_top_pane_g1

0x8b02,	// (0x00029e92) list_single_uniindi_pane_g1

0x8b15,	// (0x00029ea5) list_single_uniindi_pane_t1

0xe7bb,	// (0x0002fb4b) control_bg_pane

0x8b3a,	// (0x00029eca) bg_sctrl_sk_pane_cp1

0x8b43,	// (0x00029ed3) bg_sctrl_sk_pane_cp2

0x8b4c,	// (0x00029edc) control_bg_pane_g1

0x8b55,	// (0x00029ee5) control_bg_pane_g2

0x0001,

0xfd39,	// (0x000310c9) control_bg_pane_g

0x6c10,	// (0x00027fa0) cell_indicator_nsta_pane_g1_ParamLimits

0xdb0b,	// (0x0002ee9b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00030e3d) cell_indicator_nsta_pane_g_ParamLimits

0x0810,	// (0x00021ba0) form2_midp_time_pane_t1_ParamLimits

0xc34e,	// (0x0002d6de) main_idle_act4_pane_ParamLimits

0xc34e,	// (0x0002d6de) main_idle_act4_pane

0xc99d,	// (0x0002dd2d) popup_tb_extension_window_ParamLimits

0xe549,	// (0x0002f8d9) tb_ext_find_pane_ParamLimits

0xe549,	// (0x0002f8d9) tb_ext_find_pane

0x8b5e,	// (0x00029eee) ai_gene_pane_1_cp1

0x3df2,	// (0x00025182) ai_gene_pane_2_cp1

0x8b66,	// (0x00029ef6) list_single_idle_plugin_calendar_pane

0x8b6f,	// (0x00029eff) list_single_idle_plugin_notification_pane

0x8b78,	// (0x00029f08) list_single_idle_plugin_player_pane

0xe5a6,	// (0x0002f936) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe5a6,	// (0x0002f936) list_single_idle_plugin_shortcut_pane

0xe5ce,	// (0x0002f95e) main_idle_act4_pane_t1

0xe5e6,	// (0x0002f976) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x000310ce) main_idle_act4_pane_t

0xe5fe,	// (0x0002f98e) middle_sk_idle_act4_pane_ParamLimits

0xe5fe,	// (0x0002f98e) middle_sk_idle_act4_pane

0xe61a,	// (0x0002f9aa) popup_clock_digital_analogue_window_cp2

0xe641,	// (0x0002f9d1) shortcut_wheel_idle_act4_pane_ParamLimits

0xe641,	// (0x0002f9d1) shortcut_wheel_idle_act4_pane

0x712f,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g1

0x712f,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g2

0x712f,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g3

0x712f,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g4

0x712f,	// (0x000284bf) shortcut_wheel_idle_act4_pane_g5

0x8c0b,	// (0x00029f9b) shortcut_wheel_idle_act4_pane_g6

0x8c13,	// (0x00029fa3) shortcut_wheel_idle_act4_pane_g7

0x8c1b,	// (0x00029fab) shortcut_wheel_idle_act4_pane_g8

0x8c23,	// (0x00029fb3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x000310d3) shortcut_wheel_idle_act4_pane_g

0xdd12,	// (0x0002f0a2) middle_sk_idle_act4_pane_g1_ParamLimits

0xdd12,	// (0x0002f0a2) middle_sk_idle_act4_pane_g1

0xe6be,	// (0x0002fa4e) middle_sk_idle_act4_pane_g2_ParamLimits

0xe6be,	// (0x0002fa4e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x000310f6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x000310f6) middle_sk_idle_act4_pane_g

0xe6d6,	// (0x0002fa66) middle_sk_idle_act4_pane_t1_ParamLimits

0xe6d6,	// (0x0002fa66) middle_sk_idle_act4_pane_t1

0xe705,	// (0x0002fa95) grid_ai_shortcut_pane_ParamLimits

0xe705,	// (0x0002fa95) grid_ai_shortcut_pane

0xe722,	// (0x0002fab2) list_highlight_pane_cp16_ParamLimits

0xe722,	// (0x0002fab2) list_highlight_pane_cp16

0xe72f,	// (0x0002fabf) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe72f,	// (0x0002fabf) list_single_idle_plugin_shortcut_pane_g1

0xe73b,	// (0x0002facb) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe73b,	// (0x0002facb) list_single_idle_plugin_shortcut_pane_g2

0xe759,	// (0x0002fae9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe759,	// (0x0002fae9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x000310fb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x000310fb) list_single_idle_plugin_shortcut_pane_g

0xe76e,	// (0x0002fafe) cell_ai_shortcut_pane_ParamLimits

0xe76e,	// (0x0002fafe) cell_ai_shortcut_pane

0xe784,	// (0x0002fb14) cell_ai_shortcut_pane_g1_ParamLimits

0xe784,	// (0x0002fb14) cell_ai_shortcut_pane_g1

0x8b5e,	// (0x00029eee) ai_gene_pane_1_cp2

0x8d54,	// (0x0002a0e4) ai_gene_pane_2_cp2

0x8d5c,	// (0x0002a0ec) list_highlight_pane_cp15

0x8d65,	// (0x0002a0f5) list_single_idle_plugin_calendar_pane_g1

0x8d5c,	// (0x0002a0ec) list_highlight_pane_cp17

0x8d6d,	// (0x0002a0fd) list_single_idle_plugin_calendar_pane_g1_copy1

0x8d75,	// (0x0002a105) list_single_idle_plugin_player_pane_g1

0x6580,	// (0x00027910) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00031102) list_single_idle_plugin_player_pane_g

0x8d7d,	// (0x0002a10d) list_single_idle_plugin_player_pane_t1

0x8d8b,	// (0x0002a11b) list_single_idle_plugin_player_pane_t2

0x8d99,	// (0x0002a129) list_single_idle_plugin_player_pane_t3

0x8da7,	// (0x0002a137) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00031107) list_single_idle_plugin_player_pane_t

0x8db5,	// (0x0002a145) wait_bar_pane_cp15

0x8dbd,	// (0x0002a14d) grid_ai_notification_pane

0x6580,	// (0x00027910) list_single_idle_plugin_notification_pane_g1

0xe7e5,	// (0x0002fb75) cell_ai_notification_pane_ParamLimits

0xe7e5,	// (0x0002fb75) cell_ai_notification_pane

0x8dd3,	// (0x0002a163) cell_ai_notification_pane_g1

0x8ddb,	// (0x0002a16b) cell_ai_notification_pane_t1

0xe7f2,	// (0x0002fb82) tb_ext_find_button_pane

0xe7fa,	// (0x0002fb8a) tb_ext_find_pane_g1

0xe802,	// (0x0002fb92) tb_ext_find_pane_t1

0x3690,	// (0x00024a20) tb_ext_find_button_pane_g1

0x8e07,	// (0x0002a197) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00031110) tb_ext_find_button_pane_g

0xe5ce,	// (0x0002f95e) main_idle_act4_pane_t1_ParamLimits

0xe5e6,	// (0x0002f976) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x000310ce) main_idle_act4_pane_t_ParamLimits

0xe61a,	// (0x0002f9aa) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe631,	// (0x0002f9c1) sat_plugin_idle_act4_pane_ParamLimits

0xe631,	// (0x0002f9c1) sat_plugin_idle_act4_pane

0xe810,	// (0x0002fba0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe810,	// (0x0002fba0) sat_plugin_idle_act4_pane_t1

0xe828,	// (0x0002fbb8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe828,	// (0x0002fbb8) sat_plugin_idle_act4_pane_t2

0xe840,	// (0x0002fbd0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe840,	// (0x0002fbd0) sat_plugin_idle_act4_pane_t3

0xe858,	// (0x0002fbe8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe858,	// (0x0002fbe8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00031115) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00031115) sat_plugin_idle_act4_pane_t

0x0e3b,	// (0x000221cb) popup_battery_window_ParamLimits

0x0e3b,	// (0x000221cb) popup_battery_window

0x13bb,	// (0x0002274b) bg_popup_sub_pane_cp25_ParamLimits

0x13bb,	// (0x0002274b) bg_popup_sub_pane_cp25

0x8e5c,	// (0x0002a1ec) popup_battery_window_g1_ParamLimits

0x8e5c,	// (0x0002a1ec) popup_battery_window_g1

0x8e68,	// (0x0002a1f8) popup_battery_window_t1_ParamLimits

0x8e68,	// (0x0002a1f8) popup_battery_window_t1

0x8e7a,	// (0x0002a20a) popup_battery_window_t2_ParamLimits

0x8e7a,	// (0x0002a20a) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x0003111e) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x0003111e) popup_battery_window_t

0xc0fd,	// (0x0002d48d) midp_canvas_pane_ParamLimits

0xc158,	// (0x0002d4e8) midp_keypad_pane_ParamLimits

0xc158,	// (0x0002d4e8) midp_keypad_pane

0x402f,	// (0x000253bf) main_midp_pane_ParamLimits

0x6c9b,	// (0x0002802b) signal_pane_g2_cp_ParamLimits

0xe870,	// (0x0002fc00) aid_size_cell_midp_keypad_ParamLimits

0xe870,	// (0x0002fc00) aid_size_cell_midp_keypad

0xe88e,	// (0x0002fc1e) midp_keyp_game_grid_pane_ParamLimits

0xe88e,	// (0x0002fc1e) midp_keyp_game_grid_pane

0xe8b5,	// (0x0002fc45) midp_keyp_rocker_pane_ParamLimits

0xe8b5,	// (0x0002fc45) midp_keyp_rocker_pane

0xe8fa,	// (0x0002fc8a) midp_keyp_sk_left_pane_ParamLimits

0xe8fa,	// (0x0002fc8a) midp_keyp_sk_left_pane

0xe94e,	// (0x0002fcde) midp_keyp_sk_right_pane_ParamLimits

0xe94e,	// (0x0002fcde) midp_keyp_sk_right_pane

0xe7bb,	// (0x0002fb4b) bg_button_pane_cp03

0xe9a2,	// (0x0002fd32) midp_keyp_sk_left_pane_g1

0xe7bb,	// (0x0002fb4b) bg_button_pane_cp04

0xe9a2,	// (0x0002fd32) midp_keyp_sk_right_pane_g1

0x712f,	// (0x000284bf) midp_keyp_rocker_pane_g1

0xe9ab,	// (0x0002fd3b) keyp_game_cell_pane_ParamLimits

0xe9ab,	// (0x0002fd3b) keyp_game_cell_pane

0xe7bb,	// (0x0002fb4b) bg_button_pane_cp02

0xe9d1,	// (0x0002fd61) keyp_game_cell_pane_g1

0xb96a,	// (0x0002ccfa) popup_fep_vkb2_window_ParamLimits

0xb96a,	// (0x0002ccfa) popup_fep_vkb2_window

0xcd73,	// (0x0002e103) aid_size_cell_vkb2_ParamLimits

0xcd73,	// (0x0002e103) aid_size_cell_vkb2

0xcda1,	// (0x0002e131) popup_fep_vkb2_window_g1_ParamLimits

0xcda1,	// (0x0002e131) popup_fep_vkb2_window_g1

0xcdf1,	// (0x0002e181) vkb2_area_bottom_pane_ParamLimits

0xcdf1,	// (0x0002e181) vkb2_area_bottom_pane

0xce4d,	// (0x0002e1dd) vkb2_area_keypad_pane_ParamLimits

0xce4d,	// (0x0002e1dd) vkb2_area_keypad_pane

0xce9b,	// (0x0002e22b) vkb2_area_top_pane_ParamLimits

0xce9b,	// (0x0002e22b) vkb2_area_top_pane

0xcf21,	// (0x0002e2b1) vkb2_top_entry_pane_ParamLimits

0xcf21,	// (0x0002e2b1) vkb2_top_entry_pane

0xcf4e,	// (0x0002e2de) vkb2_top_grid_left_pane_ParamLimits

0xcf4e,	// (0x0002e2de) vkb2_top_grid_left_pane

0xcf6e,	// (0x0002e2fe) vkb2_top_grid_right_pane_ParamLimits

0xcf6e,	// (0x0002e2fe) vkb2_top_grid_right_pane

0x2a52,	// (0x00023de2) vkb2_cell_keypad_pane_ParamLimits

0x2a52,	// (0x00023de2) vkb2_cell_keypad_pane

0xcfb4,	// (0x0002e344) vkb2_area_bottom_grid_pane_ParamLimits

0xcfb4,	// (0x0002e344) vkb2_area_bottom_grid_pane

0xcfde,	// (0x0002e36e) vkb2_area_bottom_pane_g1_ParamLimits

0xcfde,	// (0x0002e36e) vkb2_area_bottom_pane_g1

0xd004,	// (0x0002e394) vkb2_area_bottom_pane_g2_ParamLimits

0xd004,	// (0x0002e394) vkb2_area_bottom_pane_g2

0xd035,	// (0x0002e3c5) vkb2_area_bottom_pane_g3_ParamLimits

0xd035,	// (0x0002e3c5) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00031123) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00031123) vkb2_area_bottom_pane_g

0x2be1,	// (0x00023f71) vkb2_top_cell_left_pane_ParamLimits

0x2be1,	// (0x00023f71) vkb2_top_cell_left_pane

0xe9da,	// (0x0002fd6a) vkb2_top_entry_pane_g1_ParamLimits

0xe9da,	// (0x0002fd6a) vkb2_top_entry_pane_g1

0xe9e8,	// (0x0002fd78) vkb2_top_entry_pane_t1_ParamLimits

0xe9e8,	// (0x0002fd78) vkb2_top_entry_pane_t1

0x9007,	// (0x0002a397) vkb2_top_entry_pane_t2_ParamLimits

0x9007,	// (0x0002a397) vkb2_top_entry_pane_t2

0x901f,	// (0x0002a3af) vkb2_top_entry_pane_t3_ParamLimits

0x901f,	// (0x0002a3af) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x0003112a) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x0003112a) vkb2_top_entry_pane_t

0xd09f,	// (0x0002e42f) vkb2_top_grid_right_pane_g1_ParamLimits

0xd09f,	// (0x0002e42f) vkb2_top_grid_right_pane_g1

0x2c44,	// (0x00023fd4) vkb2_top_grid_right_pane_g2_ParamLimits

0x2c44,	// (0x00023fd4) vkb2_top_grid_right_pane_g2

0x2c5c,	// (0x00023fec) vkb2_top_grid_right_pane_g3_ParamLimits

0x2c5c,	// (0x00023fec) vkb2_top_grid_right_pane_g3

0xd0b5,	// (0x0002e445) vkb2_top_grid_right_pane_g4_ParamLimits

0xd0b5,	// (0x0002e445) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x00031131) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x00031131) vkb2_top_grid_right_pane_g

0x2c8a,	// (0x0002401a) vkb2_top_cell_left_pane_g1

0x2ca1,	// (0x00024031) vkb2_cell_keypad_pane_g1_ParamLimits

0x2ca1,	// (0x00024031) vkb2_cell_keypad_pane_g1

0x9035,	// (0x0002a3c5) vkb2_cell_keypad_pane_t1_ParamLimits

0x9035,	// (0x0002a3c5) vkb2_cell_keypad_pane_t1

0x2cc5,	// (0x00024055) vkb2_cell_bottom_grid_pane_ParamLimits

0x2cc5,	// (0x00024055) vkb2_cell_bottom_grid_pane

0x2cfe,	// (0x0002408e) vkb2_cell_bottom_grid_pane_g1

0xe662,	// (0x0002f9f2) aid_call2_pane_cp02

0xe66a,	// (0x0002f9fa) aid_call_pane_cp02

0xe672,	// (0x0002fa02) clock_digital_number_pane_cp10

0xe67a,	// (0x0002fa0a) clock_digital_number_pane_cp11

0xe682,	// (0x0002fa12) clock_digital_number_pane_cp12

0xe68a,	// (0x0002fa1a) clock_digital_number_pane_cp13

0xe692,	// (0x0002fa22) clock_digital_separator_pane_cp10

0x3690,	// (0x00024a20) popup_clock_digital_analogue_window_cp2_g1

0x3690,	// (0x00024a20) popup_clock_digital_analogue_window_cp2_g2

0xe69a,	// (0x0002fa2a) popup_clock_digital_analogue_window_cp2_g3

0x3690,	// (0x00024a20) popup_clock_digital_analogue_window_cp2_g4

0xe69a,	// (0x0002fa2a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x000310e6) popup_clock_digital_analogue_window_cp2_g

0xe6a2,	// (0x0002fa32) popup_clock_digital_analogue_window_cp2_t1

0xe6b0,	// (0x0002fa40) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x000310f1) popup_clock_digital_analogue_window_cp2_t

0x712f,	// (0x000284bf) clock_digital_number_pane_cp10_g1

0x712f,	// (0x000284bf) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00030ed9) clock_digital_number_pane_cp10_g

0x712f,	// (0x000284bf) clock_digital_separator_pane_cp10_g1

0x712f,	// (0x000284bf) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00030ed9) clock_digital_separator_pane_cp10_g

0x8aa6,	// (0x00029e36) uniindi_top_pane_g3

0x8ab7,	// (0x00029e47) uniindi_top_pane_g4

0x2ac2,	// (0x00023e52) vkb2_row_keypad_pane_ParamLimits

0x2ac2,	// (0x00023e52) vkb2_row_keypad_pane

0x2d1a,	// (0x000240aa) vkb2_cell_t_keypad_pane_ParamLimits

0x2d1a,	// (0x000240aa) vkb2_cell_t_keypad_pane

0x2d2a,	// (0x000240ba) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2d2a,	// (0x000240ba) vkb2_cell_t_keypad_pane_cp08

0x2d3f,	// (0x000240cf) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2d3f,	// (0x000240cf) vkb2_cell_t_keypad_pane_cp09

0x2d53,	// (0x000240e3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2d53,	// (0x000240e3) vkb2_cell_t_keypad_pane_cp01

0x2d64,	// (0x000240f4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2d64,	// (0x000240f4) vkb2_cell_t_keypad_pane_cp02

0x2d75,	// (0x00024105) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2d75,	// (0x00024105) vkb2_cell_t_keypad_pane_cp03

0x2d86,	// (0x00024116) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2d86,	// (0x00024116) vkb2_cell_t_keypad_pane_cp04

0x2d97,	// (0x00024127) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2d97,	// (0x00024127) vkb2_cell_t_keypad_pane_cp05

0x2da8,	// (0x00024138) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2da8,	// (0x00024138) vkb2_cell_t_keypad_pane_cp06

0x2dbb,	// (0x0002414b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2dbb,	// (0x0002414b) vkb2_cell_t_keypad_pane_cp07

0x2dd0,	// (0x00024160) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2dd0,	// (0x00024160) vkb2_cell_t_keypad_pane_cp10

0x73b9,	// (0x00028749) vkb2_cell_t_keypad_pane_g1

0x904c,	// (0x0002a3dc) vkb2_cell_t_keypad_pane_t1

0xe7bb,	// (0x0002fb4b) popup_grid_graphic2_window

0xea21,	// (0x0002fdb1) aid_size_cell_graphic2_ParamLimits

0xea21,	// (0x0002fdb1) aid_size_cell_graphic2

0xea5f,	// (0x0002fdef) bg_popup_window_pane_cp21_ParamLimits

0xea5f,	// (0x0002fdef) bg_popup_window_pane_cp21

0xea6d,	// (0x0002fdfd) graphic2_pages_pane_ParamLimits

0xea6d,	// (0x0002fdfd) graphic2_pages_pane

0xeac5,	// (0x0002fe55) grid_graphic2_control_pane_ParamLimits

0xeac5,	// (0x0002fe55) grid_graphic2_control_pane

0xeb0d,	// (0x0002fe9d) grid_graphic2_pane_ParamLimits

0xeb0d,	// (0x0002fe9d) grid_graphic2_pane

0xeb98,	// (0x0002ff28) cell_graphic2_pane

0xe7bb,	// (0x0002fb4b) main_comp_mode_pane

0x8317,	// (0x000296a7) list_ai3_gene_pane_ParamLimits

0xe39f,	// (0x0002f72f) bg_popup_window_pane_cp19_ParamLimits

0x86eb,	// (0x00029a7b) bg_touch_area_indi_pane_ParamLimits

0x86eb,	// (0x00029a7b) bg_touch_area_indi_pane

0x8701,	// (0x00029a91) bg_touch_area_indi_pane_cp01_ParamLimits

0x8701,	// (0x00029a91) bg_touch_area_indi_pane_cp01

0x8719,	// (0x00029aa9) bg_touch_area_indi_pane_cp02_ParamLimits

0x8719,	// (0x00029aa9) bg_touch_area_indi_pane_cp02

0x8733,	// (0x00029ac3) bg_touch_area_indi_pane_cp03_ParamLimits

0x8733,	// (0x00029ac3) bg_touch_area_indi_pane_cp03

0x874d,	// (0x00029add) popup_slider_window_g1_ParamLimits

0x8769,	// (0x00029af9) popup_slider_window_g2_ParamLimits

0x8785,	// (0x00029b15) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x0003107b) popup_slider_window_g_ParamLimits

0x87e1,	// (0x00029b71) popup_slider_window_t1_ParamLimits

0x8855,	// (0x00029be5) small_volume_slider_vertical_pane_ParamLimits

0xeb98,	// (0x0002ff28) cell_graphic2_pane_ParamLimits

0xebfb,	// (0x0002ff8b) bg_button_pane_cp10_ParamLimits

0xebfb,	// (0x0002ff8b) bg_button_pane_cp10

0xec0e,	// (0x0002ff9e) bg_button_pane_cp11_ParamLimits

0xec0e,	// (0x0002ff9e) bg_button_pane_cp11

0xec21,	// (0x0002ffb1) graphic2_pages_pane_g1_ParamLimits

0xec21,	// (0x0002ffb1) graphic2_pages_pane_g1

0xec3c,	// (0x0002ffcc) graphic2_pages_pane_g2_ParamLimits

0xec3c,	// (0x0002ffcc) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x0003113f) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x0003113f) graphic2_pages_pane_g

0xec54,	// (0x0002ffe4) graphic2_pages_pane_t1_ParamLimits

0xec54,	// (0x0002ffe4) graphic2_pages_pane_t1

0xec6c,	// (0x0002fffc) cell_graphic2_control_pane_ParamLimits

0xec6c,	// (0x0002fffc) cell_graphic2_control_pane

0xec88,	// (0x00030018) cell_graphic2_pane_g1_ParamLimits

0xec88,	// (0x00030018) cell_graphic2_pane_g1

0xdd20,	// (0x0002f0b0) cell_graphic2_pane_g2_ParamLimits

0xdd20,	// (0x0002f0b0) cell_graphic2_pane_g2

0xe7a6,	// (0x0002fb36) cell_graphic2_pane_g3_ParamLimits

0xe7a6,	// (0x0002fb36) cell_graphic2_pane_g3

0xdd2d,	// (0x0002f0bd) cell_graphic2_pane_g4_ParamLimits

0xdd2d,	// (0x0002f0bd) cell_graphic2_pane_g4

0xec95,	// (0x00030025) cell_graphic2_pane_g5_ParamLimits

0xec95,	// (0x00030025) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x00031144) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x00031144) cell_graphic2_pane_g

0xecb5,	// (0x00030045) cell_graphic2_pane_t1_ParamLimits

0xecb5,	// (0x00030045) cell_graphic2_pane_t1

0x585d,	// (0x00026bed) grid_highlight_pane_cp11_ParamLimits

0x585d,	// (0x00026bed) grid_highlight_pane_cp11

0x13bb,	// (0x0002274b) bg_button_pane_cp05

0xecea,	// (0x0003007a) cell_graphic2_control_pane_g1

0x712f,	// (0x000284bf) bg_touch_area_indi_pane_g1

0x931d,	// (0x0002a6ad) aid_cmod_rocker_key_size

0x9327,	// (0x0002a6b7) aid_cmode_itu_key_size

0x9331,	// (0x0002a6c1) main_cmode_video_pane

0x933b,	// (0x0002a6cb) main_comp_mode_itu_pane

0x9347,	// (0x0002a6d7) main_comp_mode_rocker_pane

0x9353,	// (0x0002a6e3) cell_cmode_rocker_pane_ParamLimits

0x9353,	// (0x0002a6e3) cell_cmode_rocker_pane

0x9367,	// (0x0002a6f7) cell_cmode_itu_pane_ParamLimits

0x9367,	// (0x0002a6f7) cell_cmode_itu_pane

0x3020,	// (0x000243b0) bg_button_pane_cp06_ParamLimits

0x3020,	// (0x000243b0) bg_button_pane_cp06

0x73b9,	// (0x00028749) cell_cmode_rocker_pane_g1_ParamLimits

0x73b9,	// (0x00028749) cell_cmode_rocker_pane_g1

0x88fc,	// (0x00029c8c) cell_cmode_rocker_pane_g2_ParamLimits

0x88fc,	// (0x00029c8c) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x00031154) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x00031154) cell_cmode_rocker_pane_g

0xe7bb,	// (0x0002fb4b) bg_button_pane_cp07

0x937e,	// (0x0002a70e) cell_cmode_itu_pane_g1

0x9387,	// (0x0002a717) cell_cmode_itu_pane_t1

0x9395,	// (0x0002a725) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x00031159) cell_cmode_itu_pane_t

0x8b2a,	// (0x00029eba) aid_touch_ctrl_left

0x8b32,	// (0x00029ec2) aid_touch_ctrl_right

0xe7bb,	// (0x0002fb4b) compa_mode_pane

0xed12,	// (0x000300a2) aid_cmod_rocker_key_size_cp

0xed1c,	// (0x000300ac) aid_cmode_itu_key_size_cp

0x93b7,	// (0x0002a747) compa_mode_pane_g1

0x93bf,	// (0x0002a74f) compa_mode_pane_g2

0x93c7,	// (0x0002a757) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x0003115e) compa_mode_pane_g

0xed26,	// (0x000300b6) main_comp_mode_itu_pane_cp

0xed2e,	// (0x000300be) main_comp_mode_rocker_pane_cp

0xed36,	// (0x000300c6) cell_cmode_itu_pane_cp_ParamLimits

0xed36,	// (0x000300c6) cell_cmode_itu_pane_cp

0xed4b,	// (0x000300db) cell_cmode_rocker_pane_cp_ParamLimits

0xed4b,	// (0x000300db) cell_cmode_rocker_pane_cp

0x3020,	// (0x000243b0) bg_button_pane_cp06_cp_ParamLimits

0x3020,	// (0x000243b0) bg_button_pane_cp06_cp

0x73b9,	// (0x00028749) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x73b9,	// (0x00028749) cell_cmode_rocker_pane_g1_cp

0x712f,	// (0x000284bf) cell_cmode_rocker_pane_g2_cp

0xe7bb,	// (0x0002fb4b) bg_button_pane_cp07_cp

0xed5d,	// (0x000300ed) cell_cmode_itu_pane_g1_cp

0xed66,	// (0x000300f6) cell_cmode_itu_pane_t1_cp

0xed66,	// (0x000300f6) cell_cmode_itu_pane_t2_cp

0xd952,	// (0x0002ece2) settings_code_pane_cp2

0x10a1,	// (0x00022431) bg_popup_window_pane_cp3_ParamLimits

0x15a9,	// (0x00022939) heading_pane_cp3_ParamLimits

0x15b5,	// (0x00022945) listscroll_popup_graphic_pane_ParamLimits

0x23c4,	// (0x00023754) fep_hwr_aid_pane_ParamLimits

0x27b5,	// (0x00023b45) aid_touch_sctrl_top_ParamLimits

0x27c2,	// (0x00023b52) sctrl_sk_top_pane_g1_ParamLimits

0x73b9,	// (0x00028749) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00031094) sctrl_sk_top_pane_g_ParamLimits

0x27cf,	// (0x00023b5f) sctrl_sk_top_pane_t1_ParamLimits

0x27b5,	// (0x00023b45) aid_touch_sctrl_bottom_ParamLimits

0x27cf,	// (0x00023b5f) sctrl_sk_bottom_pane_t1_ParamLimits

0x8a70,	// (0x00029e00) aid_area_touch_clock

0xcee3,	// (0x0002e273) aid_vkb2_area_top_pane_cell_ParamLimits

0xcee3,	// (0x0002e273) aid_vkb2_area_top_pane_cell

0xcf8e,	// (0x0002e31e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcf8e,	// (0x0002e31e) aid_vkb2_area_bottom_pane_cell

0x8fd9,	// (0x0002a369) popup_char_count_window

0x941d,	// (0x0002a7ad) popup_char_count_window_g1

0x9426,	// (0x0002a7b6) popup_char_count_window_g2

0x942f,	// (0x0002a7bf) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x00031165) popup_char_count_window_g

0x9438,	// (0x0002a7c8) popup_char_count_window_t1

0x286e,	// (0x00023bfe) popup_fep_char_preview_window_ParamLimits

0x286e,	// (0x00023bfe) popup_fep_char_preview_window

0xcf03,	// (0x0002e293) vkb2_top_candi_pane_ParamLimits

0xcf03,	// (0x0002e293) vkb2_top_candi_pane

0xed74,	// (0x00030104) cell_vkb2_top_candi_pane_ParamLimits

0xed74,	// (0x00030104) cell_vkb2_top_candi_pane

0x51e6,	// (0x00026576) bg_popup_fep_char_preview_window_ParamLimits

0x51e6,	// (0x00026576) bg_popup_fep_char_preview_window

0x2de5,	// (0x00024175) popup_fep_char_preview_window_t1_ParamLimits

0x2de5,	// (0x00024175) popup_fep_char_preview_window_t1

0x9497,	// (0x0002a827) bg_popup_fep_char_preview_window_g1

0x949f,	// (0x0002a82f) bg_popup_fep_char_preview_window_g2

0x94a7,	// (0x0002a837) bg_popup_fep_char_preview_window_g3

0x94af,	// (0x0002a83f) bg_popup_fep_char_preview_window_g4

0x94b7,	// (0x0002a847) bg_popup_fep_char_preview_window_g5

0x2e1f,	// (0x000241af) bg_popup_fep_char_preview_window_g6

0x94bf,	// (0x0002a84f) bg_popup_fep_char_preview_window_g7

0x94c7,	// (0x0002a857) bg_popup_fep_char_preview_window_g8

0x94cf,	// (0x0002a85f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x0003116c) bg_popup_fep_char_preview_window_g

0x73b9,	// (0x00028749) cell_vkb2_top_candi_pane_g1_ParamLimits

0x73b9,	// (0x00028749) cell_vkb2_top_candi_pane_g1

0x76fa,	// (0x00028a8a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x76fa,	// (0x00028a8a) cell_vkb2_top_candi_pane_g2

0x771b,	// (0x00028aab) cell_vkb2_top_candi_pane_g3_ParamLimits

0x771b,	// (0x00028aab) cell_vkb2_top_candi_pane_g3

0x2e27,	// (0x000241b7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2e27,	// (0x000241b7) cell_vkb2_top_candi_pane_g4

0x94d7,	// (0x0002a867) cell_vkb2_top_candi_pane_g5_ParamLimits

0x94d7,	// (0x0002a867) cell_vkb2_top_candi_pane_g5

0x88fc,	// (0x00029c8c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x88fc,	// (0x00029c8c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x0003117f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x0003117f) cell_vkb2_top_candi_pane_g

0x2e48,	// (0x000241d8) cell_vkb2_top_candi_pane_t1

0x2232,	// (0x000235c2) aid_size_touch_slider_mark_ParamLimits

0x2232,	// (0x000235c2) aid_size_touch_slider_mark

0xeaa9,	// (0x0002fe39) grid_graphic2_catg_pane_ParamLimits

0xeaa9,	// (0x0002fe39) grid_graphic2_catg_pane

0xeb67,	// (0x0002fef7) popup_grid_graphic2_window_t1_ParamLimits

0xeb67,	// (0x0002fef7) popup_grid_graphic2_window_t1

0xeb7d,	// (0x0002ff0d) popup_grid_graphic2_window_t2_ParamLimits

0xeb7d,	// (0x0002ff0d) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x0003113a) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x0003113a) popup_grid_graphic2_window_t

0x13bb,	// (0x0002274b) bg_button_pane_cp05_ParamLimits

0xecea,	// (0x0003007a) cell_graphic2_control_pane_g1_ParamLimits

0xedc8,	// (0x00030158) cell_graphic2_catg_pane_ParamLimits

0xedc8,	// (0x00030158) cell_graphic2_catg_pane

0xe7bb,	// (0x0002fb4b) bg_button_pane_cp12

0xedda,	// (0x0003016a) cell_graphic2_catg_pane_g1

0x8a3c,	// (0x00029dcc) cell_tb_ext_pane_t1_ParamLimits

0x2c01,	// (0x00023f91) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2c01,	// (0x00023f91) vkb2_top_cell_right_narrow_pane

0x2c19,	// (0x00023fa9) vkb2_top_cell_right_wide_pane_ParamLimits

0x2c19,	// (0x00023fa9) vkb2_top_cell_right_wide_pane

0xc34e,	// (0x0002d6de) bg_vkb2_func_pane_ParamLimits

0xc34e,	// (0x0002d6de) bg_vkb2_func_pane

0x2c8a,	// (0x0002401a) vkb2_top_cell_left_pane_g1_ParamLimits

0xc34e,	// (0x0002d6de) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc34e,	// (0x0002d6de) bg_vkb2_fuc_pane_cp03

0x2cfe,	// (0x0002408e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4b74,	// (0x00025f04) bg_vkb2_func_pane_g1

0x4b7c,	// (0x00025f0c) bg_vkb2_func_pane_g2

0x4b8c,	// (0x00025f1c) bg_vkb2_func_pane_g3

0x4b84,	// (0x00025f14) bg_vkb2_func_pane_g4

0x4b94,	// (0x00025f24) bg_vkb2_func_pane_g5

0x4b9c,	// (0x00025f2c) bg_vkb2_func_pane_g6

0x4ba4,	// (0x00025f34) bg_vkb2_func_pane_g7

0x4bac,	// (0x00025f3c) bg_vkb2_func_pane_g8

0x4b6c,	// (0x00025efc) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x0003118c) bg_vkb2_func_pane_g

0xc34e,	// (0x0002d6de) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc34e,	// (0x0002d6de) bg_vkb2_fuc_pane_cp01

0x2c8a,	// (0x0002401a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2c8a,	// (0x0002401a) vkb2_top_cell_right_wide_pane_g1

0xc34e,	// (0x0002d6de) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc34e,	// (0x0002d6de) bg_vkb2_fuc_pane_cp02

0x2cfe,	// (0x0002408e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2cfe,	// (0x0002408e) vkb2_top_cell_right_narrow_pane_g1

0xe2d9,	// (0x0002f669) aid_touch_area_decrease_ParamLimits

0xe2d9,	// (0x0002f669) aid_touch_area_decrease

0xe313,	// (0x0002f6a3) aid_touch_area_increase_ParamLimits

0xe313,	// (0x0002f6a3) aid_touch_area_increase

0xe33b,	// (0x0002f6cb) aid_touch_area_mute_ParamLimits

0xe33b,	// (0x0002f6cb) aid_touch_area_mute

0xe36b,	// (0x0002f6fb) aid_touch_area_slider_ParamLimits

0xe36b,	// (0x0002f6fb) aid_touch_area_slider

0xe3ab,	// (0x0002f73b) popup_slider_window_g4_ParamLimits

0xe3ab,	// (0x0002f73b) popup_slider_window_g4

0xe3d3,	// (0x0002f763) popup_slider_window_g5_ParamLimits

0xe3d3,	// (0x0002f763) popup_slider_window_g5

0xe407,	// (0x0002f797) popup_slider_window_g6_ParamLimits

0xe407,	// (0x0002f797) popup_slider_window_g6

0x880f,	// (0x00029b9f) popup_slider_window_t2_ParamLimits

0x880f,	// (0x00029b9f) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00031088) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00031088) popup_slider_window_t

0xe423,	// (0x0002f7b3) slider_pane_ParamLimits

0xe423,	// (0x0002f7b3) slider_pane

0x9513,	// (0x0002a8a3) slider_pane_g1_ParamLimits

0x9513,	// (0x0002a8a3) slider_pane_g1

0x9527,	// (0x0002a8b7) slider_pane_g2_ParamLimits

0x9527,	// (0x0002a8b7) slider_pane_g2

0x953d,	// (0x0002a8cd) slider_pane_g3_ParamLimits

0x953d,	// (0x0002a8cd) slider_pane_g3

0x0003,

0xfe0f,	// (0x0003119f) slider_pane_g_ParamLimits

0xfe0f,	// (0x0003119f) slider_pane_g

0xc9e9,	// (0x0002dd79) popup_tb_float_extension_window_ParamLimits

0xc9e9,	// (0x0002dd79) popup_tb_float_extension_window

0x9569,	// (0x0002a8f9) aid_size_cell_tb_float_ext

0xe7bb,	// (0x0002fb4b) bg_popup_sub_window_cp28

0x9575,	// (0x0002a905) grid_tb_float_ext_pane

0x9581,	// (0x0002a911) cell_tb_float_ext_pane_ParamLimits

0x9581,	// (0x0002a911) cell_tb_float_ext_pane

0x959d,	// (0x0002a92d) cell_tb_float_ext_pane_g1

0x95a6,	// (0x0002a936) grid_highlight_pane_cp12

0xcce4,	// (0x0002e074) cell_last_hwr_side_pane_ParamLimits

0xcce4,	// (0x0002e074) cell_last_hwr_side_pane

0x712f,	// (0x000284bf) cell_last_hwr_side_pane_g1

0x95af,	// (0x0002a93f) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x000311a8) cell_last_hwr_side_pane_g

0xd06a,	// (0x0002e3fa) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd06a,	// (0x0002e3fa) vkb2_area_bottom_space_btn_pane

0x73b9,	// (0x00028749) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x904c,	// (0x0002a3dc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2e48,	// (0x000241d8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2e66,	// (0x000241f6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2e66,	// (0x000241f6) vkb2_area_bottom_space_btn_pane_g1

0x2ea0,	// (0x00024230) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2ea0,	// (0x00024230) vkb2_area_bottom_space_btn_pane_g2

0x2ed6,	// (0x00024266) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2ed6,	// (0x00024266) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x000311ad) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x000311ad) vkb2_area_bottom_space_btn_pane_g

0x246d,	// (0x000237fd) cel_fep_hwr_func_pane_ParamLimits

0x246d,	// (0x000237fd) cel_fep_hwr_func_pane

0xccb9,	// (0x0002e049) cell_hwr_side_button_pane_ParamLimits

0xccb9,	// (0x0002e049) cell_hwr_side_button_pane

0x8a70,	// (0x00029e00) aid_area_touch_clock_ParamLimits

0x13bb,	// (0x0002274b) bg_uniindi_top_pane_ParamLimits

0x8a84,	// (0x00029e14) uniindi_top_pane_g1_ParamLimits

0x8a9a,	// (0x00029e2a) uniindi_top_pane_g2_ParamLimits

0x8aa6,	// (0x00029e36) uniindi_top_pane_g3_ParamLimits

0x8ab7,	// (0x00029e47) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x000310c0) uniindi_top_pane_g_ParamLimits

0x8ac4,	// (0x00029e54) uniindi_top_pane_t1_ParamLimits

0x13bb,	// (0x0002274b) bg_vkb2_func_pane_cp01_ParamLimits

0x13bb,	// (0x0002274b) bg_vkb2_func_pane_cp01

0x95b8,	// (0x0002a948) cel_fep_hwr_func_pane_g1_ParamLimits

0x95b8,	// (0x0002a948) cel_fep_hwr_func_pane_g1

0x13bb,	// (0x0002274b) bg_vkb2_func_pane_cp02_ParamLimits

0x13bb,	// (0x0002274b) bg_vkb2_func_pane_cp02

0x95b8,	// (0x0002a948) cell_hwr_side_button_pane_g1_ParamLimits

0x95b8,	// (0x0002a948) cell_hwr_side_button_pane_g1

0x49ed,	// (0x00025d7d) status_pane_g4_ParamLimits

0x49ed,	// (0x00025d7d) status_pane_g4

0x4a07,	// (0x00025d97) status_pane_t1

0x6f29,	// (0x000282b9) form2_midp_gauge_slider_cont_pane

0x6f31,	// (0x000282c1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdc69,	// (0x0002eff9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdc7b,	// (0x0002f00b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00030e8c) form2_midp_gauge_slider_pane_t_ParamLimits

0x6f67,	// (0x000282f7) form2_midp_slider_pane_ParamLimits

0x2836,	// (0x00023bc6) aid_size_cell_func_vkb2_ParamLimits

0x2836,	// (0x00023bc6) aid_size_cell_func_vkb2

0x9555,	// (0x0002a8e5) slider_pane_g4_ParamLimits

0x9555,	// (0x0002a8e5) slider_pane_g4

0xd0cb,	// (0x0002e45b) form2_midp_gauge_slider_pane_t2_cp01

0xd0d9,	// (0x0002e469) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd0d9,	// (0x0002e469) form2_midp_gauge_slider_pane_t3_cp01

0x2f4b,	// (0x000242db) form2_midp_slider_pane_cp01

0xe7bb,	// (0x0002fb4b) navi_smil_pane

0x95f1,	// (0x0002a981) navi_smil_pane_g1

0x95f9,	// (0x0002a989) navi_smil_pane_t1

0x95c6,	// (0x0002a956) form2_midp_slider_pane_g1

0x95cf,	// (0x0002a95f) form2_midp_slider_pane_g2

0x95d7,	// (0x0002a967) form2_midp_slider_pane_g3

0x95c6,	// (0x0002a956) form2_midp_slider_pane_g4

0xede3,	// (0x00030173) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x000311b6) form2_midp_slider_pane_g

0x2f10,	// (0x000242a0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2f10,	// (0x000242a0) vkb2_area_bottom_space_btn_pane_g4

0xd23f,	// (0x0002e5cf) lc0_navi_pane_ParamLimits

0xd23f,	// (0x0002e5cf) lc0_navi_pane

0xd2af,	// (0x0002e63f) lc0_stat_indi_pane_ParamLimits

0xd2af,	// (0x0002e63f) lc0_stat_indi_pane

0xd2c4,	// (0x0002e654) ls0_title_pane_ParamLimits

0xd2c4,	// (0x0002e654) ls0_title_pane

0x3020,	// (0x000243b0) bg_popup_sub_pane_cp14_ParamLimits

0x8a57,	// (0x00029de7) list_uniindi_pane_ParamLimits

0x8a63,	// (0x00029df3) uniindi_top_pane_ParamLimits

0x8b02,	// (0x00029e92) list_single_uniindi_pane_g1_ParamLimits

0x8b15,	// (0x00029ea5) list_single_uniindi_pane_t1_ParamLimits

0xd0f6,	// (0x0002e486) lc0_stat_clock_pane_ParamLimits

0xd0f6,	// (0x0002e486) lc0_stat_clock_pane

0xedec,	// (0x0003017c) lc0_stat_indi_pane_g1_ParamLimits

0xedec,	// (0x0003017c) lc0_stat_indi_pane_g1

0xedf9,	// (0x00030189) lc0_stat_indi_pane_g2_ParamLimits

0xedf9,	// (0x00030189) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x000311c1) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x000311c1) lc0_stat_indi_pane_g

0xd103,	// (0x0002e493) lc0_uni_indicator_pane_ParamLimits

0xd103,	// (0x0002e493) lc0_uni_indicator_pane

0xee06,	// (0x00030196) ls0_title_pane_g1_ParamLimits

0xee06,	// (0x00030196) ls0_title_pane_g1

0xee1a,	// (0x000301aa) ls0_title_pane_t1_ParamLimits

0xee1a,	// (0x000301aa) ls0_title_pane_t1

0xd110,	// (0x0002e4a0) lc0_uni_indicator_pane_g1_ParamLimits

0xd110,	// (0x0002e4a0) lc0_uni_indicator_pane_g1

0x966b,	// (0x0002a9fb) lc0_stat_clock_pane_t1

0xe7bb,	// (0x0002fb4b) main_ai5_pane

0x9679,	// (0x0002aa09) ai5_sk_pane_ParamLimits

0x9679,	// (0x0002aa09) ai5_sk_pane

0xee48,	// (0x000301d8) cell_ai5_widget_pane_ParamLimits

0xee48,	// (0x000301d8) cell_ai5_widget_pane

0x96fc,	// (0x0002aa8c) aid_size_cell_widget_grid

0x9710,	// (0x0002aaa0) bg_ai5_widget_pane_ParamLimits

0x9710,	// (0x0002aaa0) bg_ai5_widget_pane

0xeed5,	// (0x00030265) cell_ai5_widget_pane_g2

0xeee5,	// (0x00030275) cell_ai5_widget_pane_g3

0xef04,	// (0x00030294) cell_ai5_widget_pane_g4

0xef10,	// (0x000302a0) cell_ai5_widget_pane_g5

0xef1c,	// (0x000302ac) cell_ai5_widget_pane_g6

0xef28,	// (0x000302b8) cell_ai5_widget_pane_g7

0xef70,	// (0x00030300) cell_ai5_widget_pane_t1_ParamLimits

0xef70,	// (0x00030300) cell_ai5_widget_pane_t1

0xef8d,	// (0x0003031d) cell_ai5_widget_pane_t2_ParamLimits

0xef8d,	// (0x0003031d) cell_ai5_widget_pane_t2

0xefa5,	// (0x00030335) cell_ai5_widget_pane_t3_ParamLimits

0xefa5,	// (0x00030335) cell_ai5_widget_pane_t3

0xefbd,	// (0x0003034d) cell_ai5_widget_pane_t4_ParamLimits

0xefbd,	// (0x0003034d) cell_ai5_widget_pane_t4

0xefd7,	// (0x00030367) cell_ai5_widget_pane_t5_ParamLimits

0xefd7,	// (0x00030367) cell_ai5_widget_pane_t5

0x985b,	// (0x0002abeb) cell_ai5_widget_pane_t6_ParamLimits

0x985b,	// (0x0002abeb) cell_ai5_widget_pane_t6

0x986d,	// (0x0002abfd) cell_ai5_widget_pane_t7_ParamLimits

0x986d,	// (0x0002abfd) cell_ai5_widget_pane_t7

0xeff6,	// (0x00030386) cell_ai5_widget_pane_t8_ParamLimits

0xeff6,	// (0x00030386) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x000311db) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x000311db) cell_ai5_widget_pane_t

0xf042,	// (0x000303d2) grid_ai5_widget_pane

0x3020,	// (0x000243b0) highlight_cell_ai5_widget_pane_ParamLimits

0x3020,	// (0x000243b0) highlight_cell_ai5_widget_pane

0xf059,	// (0x000303e9) ai5_sk_left_pane

0xf063,	// (0x000303f3) ai5_sk_middle_pane

0xf06d,	// (0x000303fd) ai5_sk_right_pane

0x9907,	// (0x0002ac97) bg_ai5_widget_pane_g1_ParamLimits

0x9907,	// (0x0002ac97) bg_ai5_widget_pane_g1

0x9913,	// (0x0002aca3) bg_ai5_widget_pane_g2_ParamLimits

0x9913,	// (0x0002aca3) bg_ai5_widget_pane_g2

0x991f,	// (0x0002acaf) bg_ai5_widget_pane_g3_ParamLimits

0x991f,	// (0x0002acaf) bg_ai5_widget_pane_g3

0x992b,	// (0x0002acbb) bg_ai5_widget_pane_g4_ParamLimits

0x992b,	// (0x0002acbb) bg_ai5_widget_pane_g4

0x9937,	// (0x0002acc7) bg_ai5_widget_pane_g5_ParamLimits

0x9937,	// (0x0002acc7) bg_ai5_widget_pane_g5

0x9943,	// (0x0002acd3) bg_ai5_widget_pane_g6_ParamLimits

0x9943,	// (0x0002acd3) bg_ai5_widget_pane_g6

0x994f,	// (0x0002acdf) bg_ai5_widget_pane_g7_ParamLimits

0x994f,	// (0x0002acdf) bg_ai5_widget_pane_g7

0x995b,	// (0x0002aceb) bg_ai5_widget_pane_g8_ParamLimits

0x995b,	// (0x0002aceb) bg_ai5_widget_pane_g8

0x9967,	// (0x0002acf7) bg_ai5_widget_pane_g9_ParamLimits

0x9967,	// (0x0002acf7) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x000311f0) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x000311f0) bg_ai5_widget_pane_g

0x998e,	// (0x0002ad1e) cell_shortcut_ai5_widget_pane_ParamLimits

0x998e,	// (0x0002ad1e) cell_shortcut_ai5_widget_pane

0x11fd,	// (0x0002258d) bg_cell_shortcut_ai5_widget_pane

0x99a0,	// (0x0002ad30) cell_grid_ai5_widget_pane_g1

0x99a9,	// (0x0002ad39) highlight_cell_shortcut_ai5_widget_pane

0x4b7c,	// (0x00025f0c) ai5_sk_left_pane_g1

0x99b1,	// (0x0002ad41) ai5_sk_left_pane_g2

0x99b9,	// (0x0002ad49) ai5_sk_left_pane_g3

0x99c1,	// (0x0002ad51) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00031203) ai5_sk_left_pane_g

0x99c9,	// (0x0002ad59) ai5_sk_left_pane_t1

0x4b74,	// (0x00025f04) ai5_sk_right_pane_g1

0x99d7,	// (0x0002ad67) ai5_sk_right_pane_g2

0x99df,	// (0x0002ad6f) ai5_sk_right_pane_g3

0x99e7,	// (0x0002ad77) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x0003120c) ai5_sk_right_pane_g

0x99ef,	// (0x0002ad7f) ai5_sk_right_pane_t1

0x4b74,	// (0x00025f04) ai5_sk_middle_pane_g1

0x4b7c,	// (0x00025f0c) ai5_sk_middle_pane_g2

0x4b94,	// (0x00025f24) ai5_sk_middle_pane_g3

0x99df,	// (0x0002ad6f) ai5_sk_middle_pane_g4

0x99b9,	// (0x0002ad49) ai5_sk_middle_pane_g5

0x99fd,	// (0x0002ad8d) ai5_sk_middle_pane_g6

0xf092,	// (0x00030422) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x00031215) ai5_sk_middle_pane_g

0xcaba,	// (0x0002de4a) aid_touch_area_size_lc0_ParamLimits

0xcaba,	// (0x0002de4a) aid_touch_area_size_lc0

0x260c,	// (0x0002399c) cell_hwr_candidate_pane_t1_ParamLimits

0x46a4,	// (0x00025a34) aid_touch_navi_pane

0xd3cf,	// (0x0002e75f) status_dt_navi_pane_ParamLimits

0xd3cf,	// (0x0002e75f) status_dt_navi_pane

0xd3e7,	// (0x0002e777) status_dt_sta_pane_ParamLimits

0xd3e7,	// (0x0002e777) status_dt_sta_pane

0xf09a,	// (0x0003042a) dt_sta_controll_pane

0xf0a7,	// (0x00030437) dt_sta_indi_pane

0xf0b4,	// (0x00030444) dt_sta_title_pane

0x13bb,	// (0x0002274b) bg_dt_sta_indi_pane_ParamLimits

0x13bb,	// (0x0002274b) bg_dt_sta_indi_pane

0xf0c6,	// (0x00030456) dt_sta_battery_pane

0xf0ce,	// (0x0003045e) dt_sta_indi_pane_g1

0xf0d7,	// (0x00030467) dt_sta_indi_pane_g2

0xf0e0,	// (0x00030470) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x00031224) dt_sta_indi_pane_g

0xf0e9,	// (0x00030479) dt_sta_signal_pane

0x3020,	// (0x000243b0) bg_dt_sta_title_pane_ParamLimits

0x3020,	// (0x000243b0) bg_dt_sta_title_pane

0xf0f2,	// (0x00030482) dt_sta_title_pane_g1

0xf0fa,	// (0x0003048a) dt_sta_title_pane_t1_ParamLimits

0xf0fa,	// (0x0003048a) dt_sta_title_pane_t1

0xe7bb,	// (0x0002fb4b) bg_dt_sta_control_pane

0xf10f,	// (0x0003049f) dt_sta_controll_pane_g1

0xf118,	// (0x000304a8) bg_dt_sta_title_pane_g1

0xf121,	// (0x000304b1) bg_dt_sta_title_pane_g2

0xf12a,	// (0x000304ba) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x0003122b) bg_dt_sta_title_pane_g

0x712f,	// (0x000284bf) bg_dt_sta_indi_pane_g1

0x9aab,	// (0x0002ae3b) dt_sta_signal_pane_g1

0x9ab3,	// (0x0002ae43) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x00031232) dt_sta_signal_pane_g

0x9abb,	// (0x0002ae4b) dt_sta_battery_pane_g1

0x9ac4,	// (0x0002ae54) dt_sta_battery_pane_t1

0x712f,	// (0x000284bf) bg_dt_sta_control_pane_g1

0x37a7,	// (0x00024b37) fep_china_uni_eep_pane

0x37af,	// (0x00024b3f) fep_china_uni_entry_pane_ParamLimits

0x37bf,	// (0x00024b4f) popup_fep_china_uni_window_g1_ParamLimits

0x37cf,	// (0x00024b5f) popup_fep_china_uni_window_g2_ParamLimits

0x37cf,	// (0x00024b5f) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x00030ac0) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x00030ac0) popup_fep_china_uni_window_g

0x9ad3,	// (0x0002ae63) fep_china_uni_eep_pane_g1

0x9adb,	// (0x0002ae6b) fep_china_uni_eep_pane_t1

0x95e8,	// (0x0002a978) aid_touch_area_size_smil_player

0x47fc,	// (0x00025b8c) lc0_clock_pane

0x49fb,	// (0x00025d8b) status_pane_g5_ParamLimits

0x49fb,	// (0x00025d8b) status_pane_g5

0xc513,	// (0x0002d8a3) popup_keymap_window

0x49b9,	// (0x00025d49) status_icon_pane

0xeee5,	// (0x00030275) cell_ai5_widget_pane_g3_ParamLimits

0xef04,	// (0x00030294) cell_ai5_widget_pane_g4_ParamLimits

0xef10,	// (0x000302a0) cell_ai5_widget_pane_g5_ParamLimits

0xef34,	// (0x000302c4) cell_ai5_widget_pane_g8_ParamLimits

0xef34,	// (0x000302c4) cell_ai5_widget_pane_g8

0xef48,	// (0x000302d8) cell_ai5_widget_pane_g9_ParamLimits

0xef48,	// (0x000302d8) cell_ai5_widget_pane_g9

0xef5c,	// (0x000302ec) cell_ai5_widget_pane_g10_ParamLimits

0xef5c,	// (0x000302ec) cell_ai5_widget_pane_g10

0x9aea,	// (0x0002ae7a) status_icon_pane_g1

0xe7bb,	// (0x0002fb4b) bg_popup_sub_pane_cp13

0x9af2,	// (0x0002ae82) popup_keymap_window_t1

0xc214,	// (0x0002d5a4) control_pane_g6_ParamLimits

0xc214,	// (0x0002d5a4) control_pane_g6

0xc221,	// (0x0002d5b1) control_pane_g7_ParamLimits

0xc221,	// (0x0002d5b1) control_pane_g7

0xc22e,	// (0x0002d5be) control_pane_g8_ParamLimits

0xc22e,	// (0x0002d5be) control_pane_g8

0xf09a,	// (0x0003042a) dt_sta_controll_pane_ParamLimits

0xf0a7,	// (0x00030437) dt_sta_indi_pane_ParamLimits

0xf0b4,	// (0x00030444) dt_sta_title_pane_ParamLimits

0x18f0,	// (0x00022c80) aid_size_touch_scroll_bar_cale

0x0e53,	// (0x000221e3) popup_discreet_window_ParamLimits

0x0e53,	// (0x000221e3) popup_discreet_window

0xb9b4,	// (0x0002cd44) popup_sk_window

0x51e6,	// (0x00026576) bg_popup_sub_pane_cp28_ParamLimits

0x51e6,	// (0x00026576) bg_popup_sub_pane_cp28

0x9b00,	// (0x0002ae90) popup_discreet_window_g1_ParamLimits

0x9b00,	// (0x0002ae90) popup_discreet_window_g1

0x9b20,	// (0x0002aeb0) popup_discreet_window_t1_ParamLimits

0x9b20,	// (0x0002aeb0) popup_discreet_window_t1

0x9b3e,	// (0x0002aece) popup_discreet_window_t2_ParamLimits

0x9b3e,	// (0x0002aece) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x00031237) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x00031237) popup_discreet_window_t

0x2f81,	// (0x00024311) popup_sk_window_g1

0x2f8b,	// (0x0002431b) popup_sk_window_g2

0x0001,

0xfeae,	// (0x0003123e) popup_sk_window_g

0x9b90,	// (0x0002af20) popup_sk_window_t1

0x9b9e,	// (0x0002af2e) popup_sk_window_t1_copy1

0xeed5,	// (0x00030265) cell_ai5_widget_pane_g2_ParamLimits

0xf008,	// (0x00030398) cell_ai5_widget_pane_t9_ParamLimits

0xf008,	// (0x00030398) cell_ai5_widget_pane_t9

0xe7bb,	// (0x0002fb4b) main_fep_fshwr2_pane

0xf133,	// (0x000304c3) aid_fshwr2_btn_pane

0xf13b,	// (0x000304cb) aid_fshwr2_syb_pane

0xf143,	// (0x000304d3) aid_fshwr2_txt_pane

0xf14b,	// (0x000304db) fshwr2_func_candi_pane

0xf155,	// (0x000304e5) fshwr2_hwr_syb_pane

0xf161,	// (0x000304f1) fshwr2_icf_pane

0xe7bb,	// (0x0002fb4b) fshwr2_icf_bg_pane

0xf16b,	// (0x000304fb) fshwr2_icf_pane_t1_ParamLimits

0xf16b,	// (0x000304fb) fshwr2_icf_pane_t1

0x712f,	// (0x000284bf) fshwr2_func_candi_pane_g1

0x9c11,	// (0x0002afa1) fshwr2_func_candi_row_pane_ParamLimits

0x9c11,	// (0x0002afa1) fshwr2_func_candi_row_pane

0xf183,	// (0x00030513) cell_fshwr2_syb_pane_ParamLimits

0xf183,	// (0x00030513) cell_fshwr2_syb_pane

0x73b9,	// (0x00028749) fshwr2_hwr_syb_pane_g1_ParamLimits

0x73b9,	// (0x00028749) fshwr2_hwr_syb_pane_g1

0xe7bb,	// (0x0002fb4b) bg_popup_call_pane_cp01

0x9c3c,	// (0x0002afcc) fshwr2_func_candi_cell_pane_ParamLimits

0x9c3c,	// (0x0002afcc) fshwr2_func_candi_cell_pane

0x9c6e,	// (0x0002affe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9c6e,	// (0x0002affe) fshwr2_func_candi_cell_bg_pane

0x9c88,	// (0x0002b018) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9c88,	// (0x0002b018) fshwr2_func_candi_cell_pane_g1

0x9ca8,	// (0x0002b038) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9ca8,	// (0x0002b038) fshwr2_func_candi_cell_pane_t1

0xe7bb,	// (0x0002fb4b) bg_button_pane_cp08

0x3ca9,	// (0x00025039) cell_fshwr2_syb_bg_pane

0xf19c,	// (0x0003052c) cell_fshwr2_syb_bg_pane_g1

0xf1a4,	// (0x00030534) cell_fshwr2_syb_bg_pane_t1

0x3020,	// (0x000243b0) main_tmo_pane

0xd728,	// (0x0002eab8) uni_indicator_pane_g1_ParamLimits

0xd73d,	// (0x0002eacd) uni_indicator_pane_g2_ParamLimits

0xd752,	// (0x0002eae2) uni_indicator_pane_g3_ParamLimits

0xd768,	// (0x0002eaf8) uni_indicator_pane_g4_ParamLimits

0xd768,	// (0x0002eaf8) uni_indicator_pane_g4

0xd77c,	// (0x0002eb0c) uni_indicator_pane_g5_ParamLimits

0xd77c,	// (0x0002eb0c) uni_indicator_pane_g5

0xd790,	// (0x0002eb20) uni_indicator_pane_g6_ParamLimits

0xd790,	// (0x0002eb20) uni_indicator_pane_g6

0xf928,	// (0x00030cb8) uni_indicator_pane_g_ParamLimits

0xe2a9,	// (0x0002f639) popup_tmo_note_window_ParamLimits

0xe2a9,	// (0x0002f639) popup_tmo_note_window

0xe7bb,	// (0x0002fb4b) fshwr2_bg_pane

0x9c99,	// (0x0002b029) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9c99,	// (0x0002b029) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x00031243) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x00031243) fshwr2_func_candi_cell_pane_g

0x712f,	// (0x000284bf) bg_popup_window_pane_cp01

0x9cd2,	// (0x0002b062) bg_popup_window_pane_g1_cp01

0x9cdb,	// (0x0002b06b) bg_popup_window_pane_cp22_ParamLimits

0x9cdb,	// (0x0002b06b) bg_popup_window_pane_cp22

0x9ce9,	// (0x0002b079) listscroll_tmo_link_pane_ParamLimits

0x9ce9,	// (0x0002b079) listscroll_tmo_link_pane

0x9d29,	// (0x0002b0b9) popup_tmo_note_window_g1_ParamLimits

0x9d29,	// (0x0002b0b9) popup_tmo_note_window_g1

0x9d36,	// (0x0002b0c6) tmo_note_info_pane_ParamLimits

0x9d36,	// (0x0002b0c6) tmo_note_info_pane

0xf1b3,	// (0x00030543) list_tmo_note_info_pane_g1_ParamLimits

0xf1b3,	// (0x00030543) list_tmo_note_info_pane_g1

0x9d67,	// (0x0002b0f7) list_tmo_note_info_pane_g2_ParamLimits

0x9d67,	// (0x0002b0f7) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x00031248) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x00031248) list_tmo_note_info_pane_g

0x9d83,	// (0x0002b113) list_tmo_note_info_text_pane_ParamLimits

0x9d83,	// (0x0002b113) list_tmo_note_info_text_pane

0x9e08,	// (0x0002b198) list_tmo_link_pane

0x9e15,	// (0x0002b1a5) scroll_pane_cp20

0x9e22,	// (0x0002b1b2) list_single_tmo_link_pane_ParamLimits

0x9e22,	// (0x0002b1b2) list_single_tmo_link_pane

0x9e32,	// (0x0002b1c2) list_single_tmo_link_pane_t1

0x9e40,	// (0x0002b1d0) list_tmo_note_info_text_pane_t1_ParamLimits

0x9e40,	// (0x0002b1d0) list_tmo_note_info_text_pane_t1

0xbdeb,	// (0x0002d17b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbdeb,	// (0x0002d17b) aid_size_touch_scroll_bar_cp01

0xb453,	// (0x0002c7e3) aid_size_touch_slider_marker

0xb9a4,	// (0x0002cd34) popup_settings_window_ParamLimits

0xb9a4,	// (0x0002cd34) popup_settings_window

0x03f5,	// (0x00021785) popup_candi_list_indi_window

0x46a4,	// (0x00025a34) aid_touch_navi_pane_ParamLimits

0x2789,	// (0x00023b19) rs_clock_indi_pane

0x2792,	// (0x00023b22) sctrl_sk_bottom_pane_ParamLimits

0x27a3,	// (0x00023b33) sctrl_sk_top_pane_ParamLimits

0x2888,	// (0x00023c18) popup_fep_tooltip_window

0x96fc,	// (0x0002aa8c) aid_size_cell_widget_grid_ParamLimits

0xeec9,	// (0x00030259) cell_ai5_widget_pane_g1_ParamLimits

0xeec9,	// (0x00030259) cell_ai5_widget_pane_g1

0xef1c,	// (0x000302ac) cell_ai5_widget_pane_g6_ParamLimits

0xef28,	// (0x000302b8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x000311c6) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x000311c6) cell_ai5_widget_pane_g

0xf02c,	// (0x000303bc) cell_ai5_widget_pane_t10_ParamLimits

0xf02c,	// (0x000303bc) cell_ai5_widget_pane_t10

0xf042,	// (0x000303d2) grid_ai5_widget_pane_ParamLimits

0xf077,	// (0x00030407) cell_contacts_ai5_widget_pane_ParamLimits

0xf077,	// (0x00030407) cell_contacts_ai5_widget_pane

0x9b53,	// (0x0002aee3) popup_discreet_window_t3_ParamLimits

0x9b53,	// (0x0002aee3) popup_discreet_window_t3

0x9be2,	// (0x0002af72) popup_fshwr2_char_preview_window_ParamLimits

0x9be2,	// (0x0002af72) popup_fshwr2_char_preview_window

0xf1ca,	// (0x0003055a) tmo_note_info_pane_t1

0xf1df,	// (0x0003056f) tmo_note_info_pane_t2

0xf1f8,	// (0x00030588) tmo_note_info_pane_t3

0x9de4,	// (0x0002b174) tmo_note_info_pane_t4

0x9df6,	// (0x0002b186) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x0003124d) tmo_note_info_pane_t

0x9e08,	// (0x0002b198) list_tmo_link_pane_ParamLimits

0x9e15,	// (0x0002b1a5) scroll_pane_cp20_ParamLimits

0xe7bb,	// (0x0002fb4b) bg_popup_fep_char_preview_window_cp01

0x9e59,	// (0x0002b1e9) popup_fshwr2_char_preview_window_t1

0x9e67,	// (0x0002b1f7) popup_candi_list_indi_window_g1

0x9e70,	// (0x0002b200) bg_cell_contacts_ai5_widget_pane

0x9e7c,	// (0x0002b20c) cell_contacts_ai5_widget_pane_g1

0x9e90,	// (0x0002b220) cell_contacts_ai5_widget_pane_g2

0x9e9f,	// (0x0002b22f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x00031258) cell_contacts_ai5_widget_pane_g

0x9eb2,	// (0x0002b242) cell_contacts_ai5_widget_pane_t1

0x3020,	// (0x000243b0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf272,	// (0x00030602) settings_container_pane

0x3ca9,	// (0x00025039) listscroll_set_pane_copy1

0x68ea,	// (0x00027c7a) scroll_pane_cp121_copy1

0x9f38,	// (0x0002b2c8) set_content_pane_copy1

0xf27e,	// (0x0003060e) aid_height_set_list_copy1_ParamLimits

0xf27e,	// (0x0003060e) aid_height_set_list_copy1

0x5f79,	// (0x00027309) aid_size_parent_copy1_ParamLimits

0x5f79,	// (0x00027309) aid_size_parent_copy1

0xf28a,	// (0x0003061a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf28a,	// (0x0003061a) button_value_adjust_pane_cp6_copy1

0x402f,	// (0x000253bf) list_highlight_pane_cp2_copy1_ParamLimits

0x402f,	// (0x000253bf) list_highlight_pane_cp2_copy1

0xf29e,	// (0x0003062e) list_set_pane_copy1_ParamLimits

0xf29e,	// (0x0003062e) list_set_pane_copy1

0xf20d,	// (0x0003059d) main_pane_set_t1_copy1_ParamLimits

0xf20d,	// (0x0003059d) main_pane_set_t1_copy1

0xf247,	// (0x000305d7) main_pane_set_t2_copy1_ParamLimits

0xf247,	// (0x000305d7) main_pane_set_t2_copy1

0xf365,	// (0x000306f5) main_pane_set_t3_copy1

0xf373,	// (0x00030703) main_pane_set_t4_copy1

0xf266,	// (0x000305f6) set_content_pane_g1_copy1_ParamLimits

0xf266,	// (0x000305f6) set_content_pane_g1_copy1

0xf381,	// (0x00030711) setting_code_pane_copy1

0xa04d,	// (0x0002b3dd) setting_slider_graphic_pane_copy1

0xa04d,	// (0x0002b3dd) setting_slider_pane_copy1

0xa04d,	// (0x0002b3dd) setting_text_pane_copy1

0xa057,	// (0x0002b3e7) setting_volume_pane_copy1

0xf38b,	// (0x0003071b) settings_code_pane_cp2_copy1

0xf393,	// (0x00030723) settings_code_pane_cp_copy1_ParamLimits

0xf393,	// (0x00030723) settings_code_pane_cp_copy1

0xf3a7,	// (0x00030737) volume_set_pane_copy1

0xf3b3,	// (0x00030743) volume_set_pane_g10_copy1

0xf3bf,	// (0x0003074f) volume_set_pane_g1_copy1

0xf3c9,	// (0x00030759) volume_set_pane_g2_copy1

0xf3d3,	// (0x00030763) volume_set_pane_g3_copy1

0xf3dd,	// (0x0003076d) volume_set_pane_g4_copy1

0xf3e7,	// (0x00030777) volume_set_pane_g5_copy1

0xf3f1,	// (0x00030781) volume_set_pane_g6_copy1

0xf3fb,	// (0x0003078b) volume_set_pane_g7_copy1

0xf405,	// (0x00030795) volume_set_pane_g8_copy1

0xf40f,	// (0x0003079f) volume_set_pane_g9_copy1

0x10a1,	// (0x00022431) bg_set_opt_pane_cp_copy1_ParamLimits

0x10a1,	// (0x00022431) bg_set_opt_pane_cp_copy1

0xa0ee,	// (0x0002b47e) setting_slider_pane_t1_copy1_ParamLimits

0xa0ee,	// (0x0002b47e) setting_slider_pane_t1_copy1

0xf419,	// (0x000307a9) setting_slider_pane_t2_copy1_ParamLimits

0xf419,	// (0x000307a9) setting_slider_pane_t2_copy1

0xf433,	// (0x000307c3) setting_slider_pane_t3_copy1_ParamLimits

0xf433,	// (0x000307c3) setting_slider_pane_t3_copy1

0xf44b,	// (0x000307db) slider_set_pane_copy1_ParamLimits

0xf44b,	// (0x000307db) slider_set_pane_copy1

0x3087,	// (0x00024417) set_opt_bg_pane_g1_copy2

0x308f,	// (0x0002441f) set_opt_bg_pane_g2_copy2

0xa154,	// (0x0002b4e4) set_opt_bg_pane_g3_copy2

0x309f,	// (0x0002442f) set_opt_bg_pane_g4_copy2

0x30a7,	// (0x00024437) set_opt_bg_pane_g5_copy2

0x30af,	// (0x0002443f) set_opt_bg_pane_g6_copy2

0xf461,	// (0x000307f1) set_opt_bg_pane_g7_copy2

0xa168,	// (0x0002b4f8) set_opt_bg_pane_g8_copy2

0xa172,	// (0x0002b502) set_opt_bg_pane_g9_copy2

0x2f95,	// (0x00024325) aid_size_touch_slider_mark_copy1_ParamLimits

0x2f95,	// (0x00024325) aid_size_touch_slider_mark_copy1

0xa17c,	// (0x0002b50c) slider_set_pane_g1_copy1

0x2fa9,	// (0x00024339) slider_set_pane_g2_copy1

0x2252,	// (0x000235e2) slider_set_pane_g3_copy1_ParamLimits

0x2252,	// (0x000235e2) slider_set_pane_g3_copy1

0x2266,	// (0x000235f6) slider_set_pane_g4_copy1_ParamLimits

0x2266,	// (0x000235f6) slider_set_pane_g4_copy1

0x227e,	// (0x0002360e) slider_set_pane_g5_copy1_ParamLimits

0x227e,	// (0x0002360e) slider_set_pane_g5_copy1

0x2252,	// (0x000235e2) slider_set_pane_g6_copy1_ParamLimits

0x2252,	// (0x000235e2) slider_set_pane_g6_copy1

0xd12f,	// (0x0002e4bf) slider_set_pane_g7_copy1_ParamLimits

0xd12f,	// (0x0002e4bf) slider_set_pane_g7_copy1

0xe7cf,	// (0x0002fb5f) bg_set_opt_pane_cp2_copy1

0xa185,	// (0x0002b515) setting_slider_graphic_pane_g1_copy1

0xf46b,	// (0x000307fb) setting_slider_graphic_pane_t1_copy1

0xf47b,	// (0x0003080b) setting_slider_graphic_pane_t2_copy1

0xf48b,	// (0x0003081b) slider_set_pane_cp_copy1

0xa1be,	// (0x0002b54e) input_focus_pane_cp1_copy1

0xa1c7,	// (0x0002b557) list_set_text_pane_copy1

0xa1cf,	// (0x0002b55f) setting_text_pane_g1_copy1

0x0baa,	// (0x00021f3a) set_text_pane_t1_copy1

0xa1be,	// (0x0002b54e) input_focus_pane_cp2_copy1

0xa1cf,	// (0x0002b55f) setting_code_pane_g1_copy1

0xf493,	// (0x00030823) setting_code_pane_t1_copy1

0xf4a1,	// (0x00030831) list_set_graphic_pane_copy1

0xe7cf,	// (0x0002fb5f) bg_set_opt_pane_cp4_copy1

0xc0bc,	// (0x0002d44c) list_set_graphic_pane_g1_copy1_ParamLimits

0xc0bc,	// (0x0002d44c) list_set_graphic_pane_g1_copy1

0xf4b3,	// (0x00030843) list_set_graphic_pane_g2_copy1

0xc0d4,	// (0x0002d464) list_set_graphic_pane_t1_copy1_ParamLimits

0xc0d4,	// (0x0002d464) list_set_graphic_pane_t1_copy1

0x712f,	// (0x000284bf) rs_clock_indi_pane_g1

0xa200,	// (0x0002b590) rs_clock_indi_pane_t1

0xa20e,	// (0x0002b59e) rs_indi_pane

0xa216,	// (0x0002b5a6) rs_indi_pane_g1

0xa21f,	// (0x0002b5af) rs_indi_pane_g2

0xa228,	// (0x0002b5b8) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x0003125f) rs_indi_pane_g

0x3ca9,	// (0x00025039) bg_popup_preview_window_pane_cp03

0xa231,	// (0x0002b5c1) popup_fep_tooltip_window_t1

0x7dd5,	// (0x00029165) popup_note2_window_g2_ParamLimits

0x7dd5,	// (0x00029165) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00030ff8) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00030ff8) popup_note2_window_g

0x82dd,	// (0x0002966d) bg_popup_sub_pane_cp11_ParamLimits

0x82ea,	// (0x0002967a) cell_ai3_links_pane_g1_ParamLimits

0x8301,	// (0x00029691) cell_ai3_links_pane_t1

0x0baa,	// (0x00021f3a) set_text_pane_t1_copy1_ParamLimits

0x3bb6,	// (0x00024f46) cell_graphic_popup_pane_cp2_ParamLimits

0x3bb6,	// (0x00024f46) cell_graphic_popup_pane_cp2

0xa23f,	// (0x0002b5cf) cell_graphic_popup_pane_g1_cp2

0x1703,	// (0x00022a93) cell_graphic_popup_pane_g2_cp2

0xa247,	// (0x0002b5d7) cell_graphic_popup_pane_g3_cp2

0xa24f,	// (0x0002b5df) cell_graphic_popup_pane_t2_cp2

0x1714,	// (0x00022aa4) grid_highlight_pane_cp3_cp2

0x33d3,	// (0x00024763) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3020,	// (0x000243b0) main_tmo_pane_ParamLimits

0xe29d,	// (0x0002f62d) popup_tmo_big_image_note_window

0xeeb9,	// (0x00030249) cell_ai5_widget_list_pane

0xeec1,	// (0x00030251) cell_ai5_widget_lrg_icon_pane

0xf1ca,	// (0x0003055a) tmo_note_info_pane_t1_ParamLimits

0xf1df,	// (0x0003056f) tmo_note_info_pane_t2_ParamLimits

0xf1f8,	// (0x00030588) tmo_note_info_pane_t3_ParamLimits

0x9de4,	// (0x0002b174) tmo_note_info_pane_t4_ParamLimits

0x9df6,	// (0x0002b186) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x0003124d) tmo_note_info_pane_t_ParamLimits

0xf272,	// (0x00030602) settings_container_pane_ParamLimits

0xa1b6,	// (0x0002b546) indicator_popup_pane_cp5

0xa1b6,	// (0x0002b546) indicator_popup_pane_cp6

0xf4a1,	// (0x00030831) list_set_graphic_pane_copy1_ParamLimits

0xe7bb,	// (0x0002fb4b) bg_popup_window_pane_cp23

0xa25d,	// (0x0002b5ed) popup_tmo_big_image_note_window_g1

0xa269,	// (0x0002b5f9) popup_tmo_big_image_note_window_t1

0xa279,	// (0x0002b609) popup_tmo_big_image_note_window_t2

0xa289,	// (0x0002b619) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x00031266) popup_tmo_big_image_note_window_t

0xf4bb,	// (0x0003084b) cell_ai5_widget_lrg_icon_pane_g1

0xf4c3,	// (0x00030853) cell_ai5_widget_lrg_icon_pane_t1

0xf4d1,	// (0x00030861) cell_ai5_widget_list_row_pane_ParamLimits

0xf4d1,	// (0x00030861) cell_ai5_widget_list_row_pane

0xf4ea,	// (0x0003087a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf4ea,	// (0x0003087a) cell_ai5_widget_list_row_pane_g1

0xf4f7,	// (0x00030887) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf4f7,	// (0x00030887) cell_ai5_widget_list_row_pane_t1

0xf50f,	// (0x0003089f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf50f,	// (0x0003089f) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedd,	// (0x0003126d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x0003126d) cell_ai5_widget_list_row_pane_t

0xe7bb,	// (0x0002fb4b) main_fep_vtchi_ss_pane

0xa2ff,	// (0x0002b68f) popup_fep_char_pre_window

0xa307,	// (0x0002b697) popup_fep_ituss_window

0xa321,	// (0x0002b6b1) popup_fep_vkbss_window

0xa341,	// (0x0002b6d1) grid_vkbss_keypad_pane_ParamLimits

0xa341,	// (0x0002b6d1) grid_vkbss_keypad_pane

0xa351,	// (0x0002b6e1) ituss_keypad_pane

0xa367,	// (0x0002b6f7) aid_vkbss_key_offset_ParamLimits

0xa367,	// (0x0002b6f7) aid_vkbss_key_offset

0xa373,	// (0x0002b703) cell_vkbss_key_pane_ParamLimits

0xa373,	// (0x0002b703) cell_vkbss_key_pane

0xa389,	// (0x0002b719) bg_cell_vkbss_key_g1_ParamLimits

0xa389,	// (0x0002b719) bg_cell_vkbss_key_g1

0xa395,	// (0x0002b725) cell_vkbss_key_3p_pane_ParamLimits

0xa395,	// (0x0002b725) cell_vkbss_key_3p_pane

0xa3af,	// (0x0002b73f) cell_vkbss_key_g1_ParamLimits

0xa3af,	// (0x0002b73f) cell_vkbss_key_g1

0xa3c9,	// (0x0002b759) cell_vkbss_key_t1_ParamLimits

0xa3c9,	// (0x0002b759) cell_vkbss_key_t1

0xa3f4,	// (0x0002b784) cell_ituss_key_pane_ParamLimits

0xa3f4,	// (0x0002b784) cell_ituss_key_pane

0xa404,	// (0x0002b794) bg_cell_ituss_key_g1_ParamLimits

0xa404,	// (0x0002b794) bg_cell_ituss_key_g1

0xa410,	// (0x0002b7a0) cell_ituss_key_pane_g1_ParamLimits

0xa410,	// (0x0002b7a0) cell_ituss_key_pane_g1

0xa41c,	// (0x0002b7ac) cell_ituss_key_pane_g2_ParamLimits

0xa41c,	// (0x0002b7ac) cell_ituss_key_pane_g2

0x0001,

0xfee2,	// (0x00031272) cell_ituss_key_pane_g_ParamLimits

0xfee2,	// (0x00031272) cell_ituss_key_pane_g

0xa435,	// (0x0002b7c5) cell_ituss_key_t1_ParamLimits

0xa435,	// (0x0002b7c5) cell_ituss_key_t1

0xa463,	// (0x0002b7f3) cell_ituss_key_t2_ParamLimits

0xa463,	// (0x0002b7f3) cell_ituss_key_t2

0xa494,	// (0x0002b824) cell_ituss_key_t3_ParamLimits

0xa494,	// (0x0002b824) cell_ituss_key_t3

0xa4c5,	// (0x0002b855) cell_ituss_key_t4_ParamLimits

0xa4c5,	// (0x0002b855) cell_ituss_key_t4

0x0003,

0xfee7,	// (0x00031277) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x00031277) cell_ituss_key_t

0xa4f6,	// (0x0002b886) cell_vkbss_key_3p_pane_g1

0xa4fe,	// (0x0002b88e) cell_vkbss_key_3p_pane_g2

0xa506,	// (0x0002b896) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef0,	// (0x00031280) cell_vkbss_key_3p_pane_g

0xe7bb,	// (0x0002fb4b) bg_popup_fep_char_preview_window_cp02

0xa50e,	// (0x0002b89e) popup_fep_char_pre_window_t1

0xeeaf,	// (0x0003023f) main_ai5_sk_pane

0x9e70,	// (0x0002b200) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9e7c,	// (0x0002b20c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9e90,	// (0x0002b220) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9e9f,	// (0x0002b22f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x00031258) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9eb2,	// (0x0002b242) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3020,	// (0x000243b0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf521,	// (0x000308b1) main_ai5_sk_pane_g1

0x501e,	// (0x000263ae) popup_query_code_window_g1

0xa316,	// (0x0002b6a6) popup_fep_vkb_icf_pane

0xa32c,	// (0x0002b6bc) popup_fep_vtchi_icf_pane

0x3020,	// (0x000243b0) bg_icf_pane

0xa535,	// (0x0002b8c5) list_vkb_icf_pane

0x3020,	// (0x000243b0) bg_icf_pane_cp01

0xa54d,	// (0x0002b8dd) vtchi_icf_list_pane

0xa55d,	// (0x0002b8ed) list_vkb_icf_pane_t1_ParamLimits

0xa55d,	// (0x0002b8ed) list_vkb_icf_pane_t1

0xa574,	// (0x0002b904) vtchi_icf_list_pane_t1_ParamLimits

0xa574,	// (0x0002b904) vtchi_icf_list_pane_t1

0xa307,	// (0x0002b697) popup_fep_ituss_window_ParamLimits

0xa32c,	// (0x0002b6bc) popup_fep_vtchi_icf_pane_ParamLimits

0xa351,	// (0x0002b6e1) ituss_keypad_pane_ParamLimits

0xa35d,	// (0x0002b6ed) ituss_sks_pane

0x3020,	// (0x000243b0) bg_icf_pane_ParamLimits

0xa526,	// (0x0002b8b6) icf_edit_indi_pane_ParamLimits

0xa526,	// (0x0002b8b6) icf_edit_indi_pane

0xa535,	// (0x0002b8c5) list_vkb_icf_pane_ParamLimits

0x3020,	// (0x000243b0) bg_icf_pane_cp01_ParamLimits

0xa541,	// (0x0002b8d1) icf_edit_indi_pane_cp01_ParamLimits

0xa541,	// (0x0002b8d1) icf_edit_indi_pane_cp01

0xa555,	// (0x0002b8e5) vtchi_query_pane

0x73b9,	// (0x00028749) icf_edit_indi_pane_g1_ParamLimits

0x73b9,	// (0x00028749) icf_edit_indi_pane_g1

0xa58d,	// (0x0002b91d) icf_edit_indi_pane_g2_ParamLimits

0xa58d,	// (0x0002b91d) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00031287) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00031287) icf_edit_indi_pane_g

0xa599,	// (0x0002b929) icf_edit_indi_pane_t1

0xa5a7,	// (0x0002b937) bg_input_focus_pane_cp042

0x18e7,	// (0x00022c77) vtchi_button_pane

0xa5b0,	// (0x0002b940) vtchi_query_pane_t1

0xa5be,	// (0x0002b94e) vtchi_query_pane_t2

0xa5cc,	// (0x0002b95c) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x0003128c) vtchi_query_pane_t

0xe7bb,	// (0x0002fb4b) bg_button_pane_cp13

0xa5da,	// (0x0002b96a) vtchi_button_pane_g1

0xa5e2,	// (0x0002b972) ituss_sks_pane_g1

0xa5ed,	// (0x0002b97d) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00031293) ituss_sks_pane_g

0xa5f5,	// (0x0002b985) ituss_sks_pane_t1

0xa603,	// (0x0002b993) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00031298) ituss_sks_pane_t

0x6c4c,	// (0x00027fdc) indicator_nsta_pane_cp_g1

0x6c55,	// (0x00027fe5) indicator_nsta_pane_cp_g2

0x6c5d,	// (0x00027fed) indicator_nsta_pane_cp_g3

0x6c65,	// (0x00027ff5) indicator_nsta_pane_cp_g4

0x6c6d,	// (0x00027ffd) indicator_nsta_pane_cp_g5

0x6c75,	// (0x00028005) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00030e42) indicator_nsta_pane_cp_g

0xeccc,	// (0x0003005c) cell_graphic2_pane_t2_ParamLimits

0xeccc,	// (0x0003005c) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x0003114f) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x0003114f) cell_graphic2_pane_t

0xed04,	// (0x00030094) cell_graphic2_control_pane_t1

0xc033,	// (0x0002d3c3) signal_pane_g3_ParamLimits

0xc033,	// (0x0002d3c3) signal_pane_g3

0xc047,	// (0x0002d3d7) signal_pane_g4_ParamLimits

0xc047,	// (0x0002d3d7) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
